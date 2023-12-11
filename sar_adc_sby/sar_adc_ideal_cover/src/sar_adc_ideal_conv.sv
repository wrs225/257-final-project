
`include "./sar_adc__N_BITS_10__pickled.v"


module sar_tb_working(
    input logic clk,
    input logic reset,
    input logic input_hold_digital,
    input logic input_voltage_real,
    output logic output_result_digital,
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

localparam clock_div = 1000;

always @(posedge clk) begin
    cycles <= cycles + 1;
end

frequency_divider  #(.DIVISION(1000)) fdiv(
    .input_clk_digital(clk),
    .output_clk_digital(sys_clk),
    .sys_counter(sys_counter),

    .reset(reset),
    .clk(clk)
);


initial begin

    assume (!reset | (cycles == 0));  // Equivalent to ¬P ∨ Q
    assume ((cycles != 0) | reset);   // Equivalent to ¬Q ∨ P

    assume (cycles == 0);

end



always @(posedge clk) begin

    assume (!reset | (cycles < 2));  // Equivalent to ¬P ∨ Q
    assume ((cycles >= 2) | reset);   // Equivalent to ¬Q ∨ P
    
    assume (cycles != 0 | ($time == 0));  // Equivalent to ¬P ∨ Q
    assume (($time != 0) | cycles == 0);

    assume ((!(cycles > 0) | (input_hold_digital == 1)));
    assume (((cycles > 0) | !(input_hold_digital == 1)));

    eoc_for: assert (((sys_counter != 17) | (eoc == 1)));

    end

endmodule

module frequency_divider #(
    DIVISION = 200
)
(
    input  logic input_clk_digital,
    output logic output_clk_digital,
    output logic sys_counter,

    input logic reset,
    input logic clk
);

logic [31:0] counter;
assign sys_clk = counter;

always @(posedge input_clk_digital) begin
    if(reset) counter <= 0;
    else if(counter != DIVISION) counter <= counter + 1;
    else counter <= 0;
end

/*verilator lint_off COMBDLY*/
always @(posedge input_clk_digital) begin // We want a latch in this case
    if(reset) output_clk_digital <= 0;
    else if(counter == DIVISION) output_clk_digital <= !output_clk_digital;
end
/*verilator lint_on COMBDLY*/

endmodule