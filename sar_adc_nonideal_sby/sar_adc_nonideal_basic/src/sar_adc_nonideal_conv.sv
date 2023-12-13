
`include "./sar_adc__N_BITS_10__pickled.v"


module sar_tb_working(
    input logic clk,
    input logic reset,
    input logic input_hold_digital,
    input logic [9:0]input_voltage_real,
    output logic [9:0]output_result_digital,
    output logic eoc
);


localparam div = 4;
localparam bmc_range = 40;
localparam adc_nbits = 2;

// Instance of sar_adc__N_BITS_10
sar_adc__N_BITS_10 #(.N_BITS(adc_nbits)) adc_instance (
    .clk(clk),
    .eoc(eoc),
    .input_hold_digital(input_hold_digital),
    .input_voltage_real(input_voltage_real),
    .output_result_digital(output_result_digital),
    .reset(reset),
    .sys_clk(sys_clk)
);

//counters and clock generation!
logic [64 - 1:0] cycles;
logic sys_clk;

logic [32 - 1:0] sys_counter;



always @(posedge clk) begin
    cycles <= cycles + 1;
end


always @(posedge sys_clk) begin
    sys_counter <= sys_counter + 1;
end

frequency_divider  #(.DIVISION(div)) fdiv(
    .input_clk_digital(clk),
    .output_clk_digital(sys_clk),

    .reset(reset),
    .clk(clk)
);


//assume initial conditions for clocks and counters
initial begin

    assume (!reset | (sys_counter == 0));  // Equivalent to ¬P ∨ Q
    assume ((sys_counter != 0) | reset);   // Equivalent to ¬Q ∨ P

    assume (sys_counter == 0);   // Equivalent to ¬Q ∨ P

    assume (cycles == 0);

    assume (sys_clk == 0);
    assume (eoc_high_counter == 0);
    assume (hit_eoc == 0);
    assume (held_value == 0);
end

//Continuous Assertions 
always@(*) begin

    //property that reset is high when the counter is < 2
    count_if_reset:assume (!reset | (sys_counter < 2));  // Equivalent to ¬P ∨ Q
    reset_if_count:assume ((sys_counter >= 2) | reset);   // Equivalent to ¬Q ∨ P
    //property that reset is low otherwise:

    assume ((!(cycles > 0) | (input_hold_digital == 1)));
    assume (((cycles > 0) | !(input_hold_digital == 1)));

    input_voltage_bound: assume ((input_voltage_real > 100) & (input_voltage_real < 423));
end

//Counter for temporal logic and sys_clock triggered assertions.
logic [31:0] eoc_high_counter;
logic hit_eoc;

logic [10 - 1:0] held_value;

logic [20 - 1:0] digitized_value;

always@(posedge sys_clk) begin
    if((input_hold_digital || eoc) & !reset) eoc_high_counter <= eoc_high_counter + 1;
    else eoc_high_counter <= 0;

    
    //eoc <-> eoc_high_counter = 18
    //(eoc_high_counter == 18) -> eoc
    fwd_eoc:assert ( !(eoc_high_counter == adc_nbits * 2 - 1) | eoc);
    //eoc -> (eoc_high_counter == 18)
    bk_eoc:assert (  (eoc_high_counter == adc_nbits * 2 - 1) | !eoc);

    

    //liveness property for eoc going high
    
end

assign digitized_value = (1024 * held_value) / 423;

always @(posedge eoc) begin
    accuracy_l: assert (( output_result_digital < digitized_value + (30 + (1 << (10 - adc_nbits))) ) );
    accuracy_ggz:assert (!(digitized_value > (30 + (1 << (10 - adc_nbits)))) | ( output_result_digital > digitized_value - (30 + (1 << (10 - adc_nbits)))));
    accuracy_glz:assert (!(digitized_value <= (30 + (1 << (10 - adc_nbits)))) | ( output_result_digital > 0));
    if(hit_eoc != 1 ) hit_eoc <= 1;
end

always@(posedge clk)begin
    bmc_range_for: assert (!(cycles == bmc_range - 1) | (hit_eoc == 1));
    dummy_fail: assert (!(cycles == bmc_range - 1));
    
    if(input_hold_digital & !reset & held_value == 0) held_value <= input_voltage_real;
end

endmodule

module frequency_divider #(
    DIVISION = 5
)
(
    input  logic input_clk_digital,
    output logic output_clk_digital,

    input logic reset,
    input logic clk
);

initial assume(counter == 0);
logic [31:0] counter;


always @(posedge input_clk_digital) begin
    
    if(counter*2 != (DIVISION)) begin 
        counter <= counter + 1;
    end else counter <= 0;
end

/*verilator lint_off COMBDLY*/
always @(posedge input_clk_digital) begin // We want a latch in this case
    if(2*counter == DIVISION) output_clk_digital <= !output_clk_digital;
end
/*verilator lint_on COMBDLY*/

endmodule