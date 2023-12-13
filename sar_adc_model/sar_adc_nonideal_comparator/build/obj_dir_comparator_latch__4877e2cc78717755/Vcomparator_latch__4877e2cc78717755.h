// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCOMPARATOR_LATCH__4877E2CC78717755_H_
#define _VCOMPARATOR_LATCH__4877E2CC78717755_H_  // guard

#include "verilated.h"

//==========

class Vcomparator_latch__4877e2cc78717755__Syms;
class Vcomparator_latch__4877e2cc78717755_VerilatedVcd;


//----------

VL_MODULE(Vcomparator_latch__4877e2cc78717755) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(sys_clk,0,0);
    VL_IN16(n,9,0);
    VL_OUT16(out,9,0);
    VL_IN16(p,9,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__prev_sys_clk;
    IData/*16:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__state_cycle_counter;
    IData/*31:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm;
    WData/*97:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[4];
    WData/*93:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[3];
    WData/*87:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[3];
    WData/*92:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_148[3];
    WData/*92:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_149[3];
    IData/*18:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_176;
    WData/*96:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[4];
    WData/*97:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[4];
    WData/*93:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[3];
    WData/*95:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[3];
    WData/*130:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[5];
    WData/*130:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_340[5];
    WData/*96:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[4];
    WData/*97:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[4];
    QData/*34:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o;
    QData/*51:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26;
    QData/*59:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_168;
    QData/*35:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170;
    QData/*50:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207;
    QData/*36:0*/ comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vcomparator_latch__4877e2cc78717755__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcomparator_latch__4877e2cc78717755);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vcomparator_latch__4877e2cc78717755(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vcomparator_latch__4877e2cc78717755();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vcomparator_latch__4877e2cc78717755__Syms* symsp, bool first);
  private:
    static QData _change_request(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp);
    static void _combo__TOP__4(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
