
`include "./sar_adc__N_BITS_10__pickled.v"


module sar_tb_working(
    input logic clk,
    input logic reset,
    input logic input_hold_digital,
    input logic [9:0]input_voltage_real,
    output logic [9:0]output_result_digital,
    output logic eoc
);

// Instance of sar_adc__N_BITS_10
sar_adc__N_BITS_10 adc_instance (
    .clk(clk),
    .eoc(eoc),
    .input_hold_digital(input_hold_digital),
    .input_voltage_real(input_voltage_real),
    .output_result_digital(output_result_digital),
    .reset(reset),
    .sys_clk(sys_clk)
);

logic [64 - 1:0] cycles;
logic sys_clk;

logic [32 - 1:0] sys_counter;

localparam div = 2;

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


initial begin

    assume (!reset | (sys_counter == 0));  // Equivalent to ¬P ∨ Q
    assume ((sys_counter != 0) | reset);   // Equivalent to ¬Q ∨ P

    assume (sys_counter == 0);   // Equivalent to ¬Q ∨ P

    assume (cycles == 0);

    assume (sys_clk == 0);
    assume (eoc_high_counter == 0);
end

logic count_if_reset_wire;
logic reset_if_count_wire;

always@(*) begin

    //property that reset is high when the counter is < 2
    count_if_reset:assume (!reset | (sys_counter < 2));  // Equivalent to ¬P ∨ Q
    reset_if_count:assume ((sys_counter >= 2) | reset);   // Equivalent to ¬Q ∨ P
    //property that reset is low otherwise:

    assume ((!(cycles > 0) | (input_hold_digital == 1)));
    assume (((cycles > 0) | !(input_hold_digital == 1)));
    counter_up:assert property(eventually eoc_high_counter == 20);
    eoc_1: assert property(eventually eoc == 1);
end

logic [31:0] eoc_high_counter;
always@(posedge sys_clk) begin
    if((input_hold_digital || eoc) & !reset) eoc_high_counter <= eoc_high_counter + 1;
    else eoc_high_cycle <= 0;

    
    //eoc <-> eoc_high_counter = 18
    //(eoc_high_counter == 18) -> eoc
    fwd_eoc:assert ( !(eoc_high_counter == 20 - 1) | eoc);
    //eoc -> (eoc_high_counter == 18)
    bk_eoc:assert (  (eoc_high_counter == 20 - 1) | !eoc);

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