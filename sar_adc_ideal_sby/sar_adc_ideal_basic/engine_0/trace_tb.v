`ifndef VERILATOR
module testbench;
  reg [4095:0] vcdfile;
  reg clock;
`else
module testbench(input clock, output reg genclock);
  initial genclock = 1;
`endif
  reg genclock = 1;
  reg [31:0] cycle = 0;
  reg [0:0] PI_reset;
  wire [0:0] PI_clk = clock;
  reg [9:0] PI_input_voltage_real;
  reg [0:0] PI_input_hold_digital;
  sar_tb_working UUT (
    .reset(PI_reset),
    .clk(PI_clk),
    .input_voltage_real(PI_input_voltage_real),
    .input_hold_digital(PI_input_hold_digital)
  );
`ifndef VERILATOR
  initial begin
    if ($value$plusargs("vcd=%s", vcdfile)) begin
      $dumpfile(vcdfile);
      $dumpvars(0, testbench);
    end
    #5 clock = 0;
    while (genclock) begin
      #5 clock = 0;
      #5 clock = 1;
    end
  end
`endif
  initial begin
`ifndef VERILATOR
    #1;
`endif
    // UUT.$auto$clk2fflogic.\cc:74:sample_control_edge$/clk#sampled$343  = 1'b1;
    // UUT.$auto$clk2fflogic.\cc:74:sample_control_edge$/eoc#sampled$403  = 1'b1;
    // UUT.$auto$clk2fflogic.\cc:74:sample_control_edge$/sys_clk#sampled$353  = 1'b1;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$0$formal$sar_adc_ideal_conv .\sv:101$24_CHECK[0:0]$62#sampled$381  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$0$formal$sar_adc_ideal_conv .\sv:103$25_CHECK[0:0]$64#sampled$361  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$0$formal$sar_adc_ideal_conv .\sv:113$26_CHECK[0:0]$79#sampled$431  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$0$formal$sar_adc_ideal_conv .\sv:114$27_CHECK[0:0]$81#sampled$411  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$0$formal$sar_adc_ideal_conv .\sv:115$28_CHECK[0:0]$83#sampled$401  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$0$formal$sar_adc_ideal_conv .\sv:121$29_CHECK[0:0]$99#sampled$461  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$0/cycles[63:0]#sampled$341  = 64'b0000000000000000000000000000000000000000000000000000000000000000;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$0/eoc_high_counter[31:0]#sampled$391  = 32'b00000000000000000000000000000000;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$0/held_value[9:0]#sampled$471  = 10'b0000000000;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$0/hit_eoc[0:0]#sampled$441  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$0/sys_counter[31:0]#sampled$351  = 32'b00000000000000000000000000000000;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$formal$sar_adc_ideal_conv .\sv:101$24_CHECK#sampled$379  = 1'b1;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$formal$sar_adc_ideal_conv .\sv:101$24_EN#sampled$369  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$formal$sar_adc_ideal_conv .\sv:103$25_CHECK#sampled$359  = 1'b1;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$formal$sar_adc_ideal_conv .\sv:113$26_CHECK#sampled$429  = 1'b1;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$formal$sar_adc_ideal_conv .\sv:113$26_EN#sampled$419  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$formal$sar_adc_ideal_conv .\sv:114$27_CHECK#sampled$409  = 1'b1;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$formal$sar_adc_ideal_conv .\sv:115$28_CHECK#sampled$399  = 1'b1;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$formal$sar_adc_ideal_conv .\sv:121$29_CHECK#sampled$459  = 1'b1;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$$formal$sar_adc_ideal_conv .\sv:121$29_EN#sampled$449  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$/cycles#sampled$339  = 64'b0000000000000000000000000000000000000000000000000000000000000000;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$/eoc_high_counter#sampled$389  = 32'b00000000000000000000000000000000;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$/held_value#sampled$469  = 10'b0000000000;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$/hit_eoc#sampled$439  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$/sys_counter#sampled$349  = 32'b00000000000000000000000000000000;
    // UUT.$auto$clk2fflogic.\cc:88:sample_data$1'1#sampled$371  = 1'b0;
    // UUT.adc_instance.v.SAR_instance.$auto$clk2fflogic.\cc:74:sample_control_edge$/sys_clk#sampled$513  = 1'b1;
    // UUT.adc_instance.v.SAR_instance.$auto$clk2fflogic.\cc:88:sample_data$$0$lookahead/quantized_voltage_register$196[0:0]$201#sampled$521  = 1'b0;
    // UUT.adc_instance.v.SAR_instance.$auto$clk2fflogic.\cc:88:sample_data$$0/counter[0:0]#sampled$511  = 1'b0;
    // UUT.adc_instance.v.SAR_instance.$auto$clk2fflogic.\cc:88:sample_data$/counter#sampled$509  = 1'b1;
    // UUT.adc_instance.v.SAR_instance.$auto$clk2fflogic.\cc:88:sample_data$/quantized_voltage_register#sampled$519  = 1'b0;
    // UUT.adc_instance.v.comparator_instance.$auto$clk2fflogic.\cc:74:sample_control_edge$/clk#sampled$503  = 1'b1;
    // UUT.adc_instance.v.comparator_instance.$auto$clk2fflogic.\cc:88:sample_data$$0/fsm[31:0]#sampled$501  = 32'b00000000000000000000000000000000;
    // UUT.adc_instance.v.comparator_instance.$auto$clk2fflogic.\cc:88:sample_data$/fsm#sampled$499  = 32'b00000000000000000000000000000000;
    // UUT.adc_instance.v.sah.$auto$clk2fflogic.\cc:74:sample_control_edge$/clk#sampled$483  = 1'b1;
    // UUT.adc_instance.v.sah.$auto$clk2fflogic.\cc:88:sample_data$$0/fsm[31:0]#sampled$481  = 32'b00000000000000000000000000000000;
    // UUT.adc_instance.v.sah.$auto$clk2fflogic.\cc:88:sample_data$$0/state_cap[9:0]#sampled$491  = 10'b0000000000;
    // UUT.adc_instance.v.sah.$auto$clk2fflogic.\cc:88:sample_data$/fsm#sampled$479  = 32'b00000000000000000000000000000000;
    // UUT.adc_instance.v.sah.$auto$clk2fflogic.\cc:88:sample_data$/state_cap#sampled$489  = 10'b0000000000;
    // UUT.fdiv.$auto$clk2fflogic.\cc:74:sample_control_edge$/input_clk_digital#sampled$533  = 1'b1;
    // UUT.fdiv.$auto$clk2fflogic.\cc:88:sample_data$$0/counter[31:0]#sampled$531  = 32'b00000000000000000000000000000000;
    // UUT.fdiv.$auto$clk2fflogic.\cc:88:sample_data$$0/output_clk_digital[0:0]#sampled$541  = 1'b0;
    // UUT.fdiv.$auto$clk2fflogic.\cc:88:sample_data$/counter#sampled$529  = 32'b00000000000000000000000000000000;
    // UUT.fdiv.$auto$clk2fflogic.\cc:88:sample_data$/output_clk_digital#sampled$539  = 1'b0;

    // state 0
    PI_reset = 1'b1;
    PI_input_voltage_real = 10'b0110100100;
    PI_input_hold_digital = 1'b0;
  end
  always @(posedge clock) begin
    // state 1
    if (cycle == 0) begin
      PI_reset <= 1'b1;
      PI_input_voltage_real <= 10'b0010001010;
      PI_input_hold_digital <= 1'b1;
    end

    // state 2
    if (cycle == 1) begin
      PI_reset <= 1'b1;
      PI_input_voltage_real <= 10'b0010001010;
      PI_input_hold_digital <= 1'b1;
    end

    // state 3
    if (cycle == 2) begin
      PI_reset <= 1'b1;
      PI_input_voltage_real <= 10'b0110000100;
      PI_input_hold_digital <= 1'b1;
    end

    // state 4
    if (cycle == 3) begin
      PI_reset <= 1'b1;
      PI_input_voltage_real <= 10'b0010001010;
      PI_input_hold_digital <= 1'b1;
    end

    // state 5
    if (cycle == 4) begin
      PI_reset <= 1'b1;
      PI_input_voltage_real <= 10'b0010001010;
      PI_input_hold_digital <= 1'b1;
    end

    // state 6
    if (cycle == 5) begin
      PI_reset <= 1'b1;
      PI_input_voltage_real <= 10'b0110000100;
      PI_input_hold_digital <= 1'b1;
    end

    // state 7
    if (cycle == 6) begin
      PI_reset <= 1'b1;
      PI_input_voltage_real <= 10'b0010001010;
      PI_input_hold_digital <= 1'b1;
    end

    // state 8
    if (cycle == 7) begin
      PI_reset <= 1'b1;
      PI_input_voltage_real <= 10'b0110000100;
      PI_input_hold_digital <= 1'b1;
    end

    // state 9
    if (cycle == 8) begin
      PI_reset <= 1'b1;
      PI_input_voltage_real <= 10'b0010001010;
      PI_input_hold_digital <= 1'b1;
    end

    // state 10
    if (cycle == 9) begin
      PI_reset <= 1'b1;
      PI_input_voltage_real <= 10'b0010001010;
      PI_input_hold_digital <= 1'b1;
    end

    // state 11
    if (cycle == 10) begin
      PI_reset <= 1'b0;
      PI_input_voltage_real <= 10'b0101101111;
      PI_input_hold_digital <= 1'b1;
    end

    // state 12
    if (cycle == 11) begin
      PI_reset <= 1'b0;
      PI_input_voltage_real <= 10'b0001100110;
      PI_input_hold_digital <= 1'b1;
    end

    // state 13
    if (cycle == 12) begin
      PI_reset <= 1'b0;
      PI_input_voltage_real <= 10'b0110100011;
      PI_input_hold_digital <= 1'b1;
    end

    // state 14
    if (cycle == 13) begin
      PI_reset <= 1'b0;
      PI_input_voltage_real <= 10'b0001100111;
      PI_input_hold_digital <= 1'b1;
    end

    // state 15
    if (cycle == 14) begin
      PI_reset <= 1'b0;
      PI_input_voltage_real <= 10'b0100000000;
      PI_input_hold_digital <= 1'b1;
    end

    // state 16
    if (cycle == 15) begin
      PI_reset <= 1'b0;
      PI_input_voltage_real <= 10'b0100000111;
      PI_input_hold_digital <= 1'b1;
    end

    // state 17
    if (cycle == 16) begin
      PI_reset <= 1'b0;
      PI_input_voltage_real <= 10'b0100000101;
      PI_input_hold_digital <= 1'b1;
    end

    // state 18
    if (cycle == 17) begin
      PI_reset <= 1'b0;
      PI_input_voltage_real <= 10'b0010001010;
      PI_input_hold_digital <= 1'b1;
    end

    // state 19
    if (cycle == 18) begin
      PI_reset <= 1'b0;
      PI_input_voltage_real <= 10'b0001100110;
      PI_input_hold_digital <= 1'b1;
    end

    genclock <= cycle < 19;
    cycle <= cycle + 1;
  end
endmodule
