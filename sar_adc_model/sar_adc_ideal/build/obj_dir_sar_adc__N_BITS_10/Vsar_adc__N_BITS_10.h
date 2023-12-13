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
    CData/*3:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter;
    SData/*9:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap;
    SData/*9:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register;
    IData/*31:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm;
    IData/*31:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound1;
    CData/*0:0*/ sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__sys_clk;
    IData/*31:0*/ __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm;
    
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
    static void _sequent__TOP__1(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
