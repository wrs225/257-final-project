// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSAR_ADC__N_BITS_10_H_
#define _VSAR_ADC__N_BITS_10_H_  // guard

#include "verilated.h"

//==========

class Vsar_adc__N_BITS_10__Syms;

//----------

VL_MODULE(Vsar_adc__N_BITS_10) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(sys_clk,0,0);
    VL_OUT8(eoc,0,0);
    VL_IN8(input_hold_digital,0,0);
    VL_IN8(reset,0,0);
    VL_IN16(input_voltage_real,9,0);
    VL_OUT16(output_result_digital,9,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_output_digital;
    CData/*4:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter;
    CData/*0:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__prev_sys_clk;
    SData/*9:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap;
    SData/*9:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register;
    SData/*14:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157;
    IData/*31:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm;
    IData/*16:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__state_cycle_counter;
    IData/*31:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm;
    WData/*97:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[4];
    WData/*93:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[3];
    WData/*87:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[3];
    WData/*82:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_148[3];
    WData/*82:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_160[3];
    WData/*81:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_191[3];
    WData/*97:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[4];
    WData/*93:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[3];
    WData/*95:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[3];
    WData/*128:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[5];
    WData/*128:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_336[5];
    WData/*96:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[4];
    WData/*80:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_365[3];
    QData/*51:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6;
    QData/*34:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o;
    QData/*47:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26;
    QData/*49:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_167;
    QData/*35:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169;
    QData/*46:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204;
    QData/*36:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound1;
    CData/*0:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__sys_clk;
    IData/*31:0*/ __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm;
    QData/*34:0*/ __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vsar_adc__N_BITS_10__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsar_adc__N_BITS_10);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vsar_adc__N_BITS_10(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vsar_adc__N_BITS_10();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vsar_adc__N_BITS_10__Syms* symsp, bool first);
  private:
    static QData _change_request(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__5(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
