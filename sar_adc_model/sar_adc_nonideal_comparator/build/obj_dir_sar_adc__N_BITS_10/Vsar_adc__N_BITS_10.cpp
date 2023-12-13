// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsar_adc__N_BITS_10.h for the primary calling header

#include "Vsar_adc__N_BITS_10.h"
#include "Vsar_adc__N_BITS_10__Syms.h"

//==========

VL_CTOR_IMP(Vsar_adc__N_BITS_10) {
    Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp = __VlSymsp = new Vsar_adc__N_BITS_10__Syms(this, name());
    Vsar_adc__N_BITS_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vsar_adc__N_BITS_10::__Vconfigure(Vsar_adc__N_BITS_10__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vsar_adc__N_BITS_10::~Vsar_adc__N_BITS_10() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vsar_adc__N_BITS_10::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsar_adc__N_BITS_10::eval\n"); );
    Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vsar_adc__N_BITS_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("sar_adc.v", 88, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsar_adc__N_BITS_10::_eval_initial_loop(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("sar_adc.v", 88, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vsar_adc__N_BITS_10::_sequent__TOP__1(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsar_adc__N_BITS_10::_sequent__TOP__1\n"); );
    Vsar_adc__N_BITS_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    SData/*9:0*/ __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap;
    IData/*31:0*/ __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm;
    IData/*16:0*/ __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__state_cycle_counter;
    WData/*159:0*/ __Vtemp2[5];
    WData/*159:0*/ __Vtemp7[5];
    WData/*159:0*/ __Vtemp8[5];
    WData/*159:0*/ __Vtemp11[5];
    WData/*159:0*/ __Vtemp16[5];
    WData/*159:0*/ __Vtemp17[5];
    WData/*159:0*/ __Vtemp20[5];
    WData/*159:0*/ __Vtemp22[5];
    WData/*159:0*/ __Vtemp23[5];
    WData/*159:0*/ __Vtemp26[5];
    WData/*159:0*/ __Vtemp28[5];
    WData/*159:0*/ __Vtemp29[5];
    WData/*127:0*/ __Vtemp32[4];
    WData/*127:0*/ __Vtemp33[4];
    WData/*127:0*/ __Vtemp34[4];
    WData/*127:0*/ __Vtemp38[4];
    WData/*127:0*/ __Vtemp39[4];
    WData/*127:0*/ __Vtemp40[4];
    WData/*127:0*/ __Vtemp46[4];
    WData/*127:0*/ __Vtemp47[4];
    WData/*127:0*/ __Vtemp48[4];
    WData/*127:0*/ __Vtemp52[4];
    WData/*127:0*/ __Vtemp53[4];
    WData/*127:0*/ __Vtemp54[4];
    WData/*127:0*/ __Vtemp60[4];
    WData/*127:0*/ __Vtemp61[4];
    WData/*127:0*/ __Vtemp62[4];
    WData/*127:0*/ __Vtemp66[4];
    WData/*127:0*/ __Vtemp67[4];
    WData/*127:0*/ __Vtemp68[4];
    // Body
    __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm 
        = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm;
    __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap 
        = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap;
    __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__state_cycle_counter 
        = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__state_cycle_counter;
    vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm 
        = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm;
    vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
        = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o;
    if (vlTOPp->reset) {
        __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm = 0U;
    } else {
        if ((0U == vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm)) {
            __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap 
                = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->input_voltage_real));
            if (vlTOPp->input_hold_digital) {
                __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm = 1U;
            }
        } else {
            if ((1U == vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm)) {
                __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap 
                    = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap));
                if ((1U & (~ (IData)(vlTOPp->input_hold_digital)))) {
                    __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm = 0U;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm = 0U;
    } else {
        if ((0U == vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm)) {
            vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                = ((IData)(vlTOPp->reset) ? VL_ULL(0xd3333333)
                    : VL_ULL(0xd3300000));
            if ((((~ (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__prev_sys_clk)) 
                  & (IData)(vlTOPp->sys_clk)) & (((0x1feU 
                                                   & ((IData)(
                                                              (VL_ULL(0xffffffff) 
                                                               & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                  >> 0x11U))) 
                                                      << 1U)) 
                                                  > (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                                 & (0x200U 
                                                    >= 
                                                    (0x1feU 
                                                     & ((IData)(
                                                                (VL_ULL(0xffffffff) 
                                                                 & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                    >> 0x11U))) 
                                                        << 1U)))))) {
                vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm = 1U;
            }
        } else {
            if ((1U == vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm)) {
                __Vtemp2[0U] = 0U;
                __Vtemp2[1U] = 0x9502c000U;
                __Vtemp2[2U] = 0U;
                __Vtemp2[3U] = 0U;
                __Vtemp2[4U] = 0U;
                __Vtemp7[0U] = (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26);
                __Vtemp7[1U] = ((0xffff0000U & ((IData)(
                                                        (VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                                                                >> 0x2fU)))))))) 
                                                << 0x10U)) 
                                | (IData)((vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                           >> 0x20U)));
                __Vtemp7[2U] = ((0xfffe0000U & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                                                                >> 0x2fU))))) 
                                                << 0x11U)) 
                                | ((0xffffU & ((IData)(
                                                       (VL_ULL(0x1ffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                                                                >> 0x2fU)))))))) 
                                               >> 0x10U)) 
                                   | (0xffff0000U & 
                                      ((IData)(((VL_ULL(0x1ffffffff) 
                                                 & VL_NEGATE_Q((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                                                                >> 0x2fU))))))) 
                                                >> 0x20U)) 
                                       << 0x10U))));
                __Vtemp7[3U] = ((0x1ffffU & (VL_NEGATE_I((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                                                             >> 0x2fU))))) 
                                             >> 0xfU)) 
                                | (0xfffe0000U & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                                                                >> 0x2fU))))) 
                                                  << 0x11U)));
                __Vtemp7[4U] = ((0x1ffffU & (VL_NEGATE_I((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                                                             >> 0x2fU))))) 
                                             >> 0xfU)) 
                                | (0x20000U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                                                               >> 0x2fU))))) 
                                               << 0x11U)));
                VL_MUL_W(5, __Vtemp8, __Vtemp2, __Vtemp7);
                __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__state_cycle_counter 
                    = ((vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__state_cycle_counter 
                        > (7U & ((0x300000U & (__Vtemp8[3U] 
                                               << 0x14U)) 
                                 | (__Vtemp8[2U] >> 0xcU))))
                        ? 0U : (0x1ffffU & ((IData)(1U) 
                                            + vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__state_cycle_counter)));
                vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                    = ((IData)(vlTOPp->reset) ? VL_ULL(0xd3333333)
                        : VL_ULL(0xd3300000));
                __Vtemp11[0U] = 0U;
                __Vtemp11[1U] = 0x9502c000U;
                __Vtemp11[2U] = 0U;
                __Vtemp11[3U] = 0U;
                __Vtemp11[4U] = 0U;
                __Vtemp16[0U] = (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26);
                __Vtemp16[1U] = ((0xffff0000U & ((IData)(
                                                         (VL_ULL(0x1ffffffff) 
                                                          & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                                                                >> 0x2fU)))))))) 
                                                 << 0x10U)) 
                                 | (IData)((vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                            >> 0x20U)));
                __Vtemp16[2U] = ((0xfffe0000U & (VL_NEGATE_I((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                                                                >> 0x2fU))))) 
                                                 << 0x11U)) 
                                 | ((0xffffU & ((IData)(
                                                        (VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                                                                >> 0x2fU)))))))) 
                                                >> 0x10U)) 
                                    | (0xffff0000U 
                                       & ((IData)((
                                                   (VL_ULL(0x1ffffffff) 
                                                    & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                                                                >> 0x2fU))))))) 
                                                   >> 0x20U)) 
                                          << 0x10U))));
                __Vtemp16[3U] = ((0x1ffffU & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                                                              >> 0x2fU))))) 
                                              >> 0xfU)) 
                                 | (0xfffe0000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                                                                >> 0x2fU))))) 
                                                   << 0x11U)));
                __Vtemp16[4U] = ((0x1ffffU & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                                                              >> 0x2fU))))) 
                                              >> 0xfU)) 
                                 | (0x20000U & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
                                                                                >> 0x2fU))))) 
                                                << 0x11U)));
                VL_MUL_W(5, __Vtemp17, __Vtemp11, __Vtemp16);
                if ((vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__state_cycle_counter 
                     > (7U & ((0x300000U & (__Vtemp17[3U] 
                                            << 0x14U)) 
                              | (__Vtemp17[2U] >> 0xcU))))) {
                    vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm = 2U;
                }
            } else {
                if ((2U == vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm)) {
                    vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                        = ((IData)(vlTOPp->reset) ? VL_ULL(0xd3333333)
                            : (VL_ULL(0x7ffffffff) 
                               & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                                  + (((QData)((IData)(
                                                      (3U 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (((0x20000U 
                                                                                & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_191[2U])
                                                                                 ? 
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_191[2U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_191[2U] 
                                                                                >> 6U)) 
                                                                                >> 0xbU))))))) 
                                      << 0x21U) | ((QData)((IData)(
                                                                   (0xfffU 
                                                                    & ((0x20000U 
                                                                        & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_191[2U])
                                                                        ? 
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_191[2U] 
                                                                        >> 6U)
                                                                        : 
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_191[2U] 
                                                                        >> 6U))))) 
                                                   << 0x15U)))));
                    if (((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__prev_sys_clk) 
                         & (~ (IData)(vlTOPp->sys_clk)))) {
                        vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm = 3U;
                    }
                } else {
                    if ((3U == vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm)) {
                        __Vtemp20[0U] = 0U;
                        __Vtemp20[1U] = 0x4a816000U;
                        __Vtemp20[2U] = 0U;
                        __Vtemp20[3U] = 0U;
                        __Vtemp20[4U] = 0U;
                        __Vtemp22[0U] = (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204);
                        __Vtemp22[1U] = ((0xffff8000U 
                                          & ((IData)(
                                                     (VL_ULL(0x1ffffffff) 
                                                      & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
                                                                                >> 0x2eU)))))))) 
                                             << 0xfU)) 
                                         | (IData)(
                                                   (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
                                                    >> 0x20U)));
                        __Vtemp22[2U] = ((0xffff0000U 
                                          & ((IData)(
                                                     VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
                                                                                >> 0x2eU))))))) 
                                             << 0x10U)) 
                                         | ((0x7fffU 
                                             & ((IData)(
                                                        (VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
                                                                                >> 0x2eU)))))))) 
                                                >> 0x11U)) 
                                            | (0xffff8000U 
                                               & ((IData)(
                                                          ((VL_ULL(0x1ffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
                                                                                >> 0x2eU))))))) 
                                                           >> 0x20U)) 
                                                  << 0xfU))));
                        __Vtemp22[3U] = ((0xffffU & 
                                          ((IData)(
                                                   VL_NEGATE_Q((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
                                                                                >> 0x2eU))))))) 
                                           >> 0x10U)) 
                                         | (0xffff0000U 
                                            & ((IData)(
                                                       (VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
                                                                                >> 0x2eU)))))) 
                                                        >> 0x20U)) 
                                               << 0x10U)));
                        __Vtemp22[4U] = (0xffffU & 
                                         ((IData)((
                                                   VL_NEGATE_Q((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
                                                                                >> 0x2eU)))))) 
                                                   >> 0x20U)) 
                                          >> 0x10U));
                        VL_MUL_W(5, __Vtemp23, __Vtemp20, __Vtemp22);
                        __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__state_cycle_counter 
                            = ((vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__state_cycle_counter 
                                > (3U & ((__Vtemp23[3U] 
                                          << 0x16U) 
                                         | (__Vtemp23[2U] 
                                            >> 0xaU))))
                                ? 0U : (0x1ffffU & 
                                        ((IData)(1U) 
                                         + vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__state_cycle_counter)));
                        vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                            = ((IData)(vlTOPp->reset)
                                ? VL_ULL(0xd3333333)
                                : VL_ULL(0x100000));
                        __Vtemp26[0U] = 0U;
                        __Vtemp26[1U] = 0x4a816000U;
                        __Vtemp26[2U] = 0U;
                        __Vtemp26[3U] = 0U;
                        __Vtemp26[4U] = 0U;
                        __Vtemp28[0U] = (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204);
                        __Vtemp28[1U] = ((0xffff8000U 
                                          & ((IData)(
                                                     (VL_ULL(0x1ffffffff) 
                                                      & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
                                                                                >> 0x2eU)))))))) 
                                             << 0xfU)) 
                                         | (IData)(
                                                   (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
                                                    >> 0x20U)));
                        __Vtemp28[2U] = ((0xffff0000U 
                                          & ((IData)(
                                                     VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
                                                                                >> 0x2eU))))))) 
                                             << 0x10U)) 
                                         | ((0x7fffU 
                                             & ((IData)(
                                                        (VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
                                                                                >> 0x2eU)))))))) 
                                                >> 0x11U)) 
                                            | (0xffff8000U 
                                               & ((IData)(
                                                          ((VL_ULL(0x1ffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
                                                                                >> 0x2eU))))))) 
                                                           >> 0x20U)) 
                                                  << 0xfU))));
                        __Vtemp28[3U] = ((0xffffU & 
                                          ((IData)(
                                                   VL_NEGATE_Q((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
                                                                                >> 0x2eU))))))) 
                                           >> 0x10U)) 
                                         | (0xffff0000U 
                                            & ((IData)(
                                                       (VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
                                                                                >> 0x2eU)))))) 
                                                        >> 0x20U)) 
                                               << 0x10U)));
                        __Vtemp28[4U] = (0xffffU & 
                                         ((IData)((
                                                   VL_NEGATE_Q((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
                                                                                >> 0x2eU)))))) 
                                                   >> 0x20U)) 
                                          >> 0x10U));
                        VL_MUL_W(5, __Vtemp29, __Vtemp26, __Vtemp28);
                        if ((vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__state_cycle_counter 
                             > (3U & ((__Vtemp29[3U] 
                                       << 0x16U) | 
                                      (__Vtemp29[2U] 
                                       >> 0xaU))))) {
                            vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm = 4U;
                        }
                    } else {
                        if ((4U == vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm)) {
                            vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                                = ((IData)(vlTOPp->reset)
                                    ? VL_ULL(0xd3333333)
                                    : (VL_ULL(0x7ffffffff) 
                                       & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                                          + (((QData)((IData)(
                                                              (3U 
                                                               & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (((0x10000U 
                                                                                & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_365[2U])
                                                                                 ? 
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_365[2U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_365[2U] 
                                                                                >> 5U)) 
                                                                                >> 0xbU))))))) 
                                              << 0x21U) 
                                             | ((QData)((IData)(
                                                                (0xfffU 
                                                                 & ((0x10000U 
                                                                     & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_365[2U])
                                                                     ? 
                                                                    (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_365[2U] 
                                                                     >> 5U)
                                                                     : 
                                                                    (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_365[2U] 
                                                                     >> 5U))))) 
                                                << 0x15U)))));
                            if (((VL_ULL(0xd28f5c28) 
                                  < vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o) 
                                 & (VL_ULL(0x400000000) 
                                    >= vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o))) {
                                vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm 
        = __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm;
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__state_cycle_counter 
        = __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__state_cycle_counter;
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap 
        = __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap;
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__prev_sys_clk 
        = vlTOPp->sys_clk;
    __Vtemp32[0U] = 0xfffffc04U;
    __Vtemp32[1U] = 0xffffffffU;
    __Vtemp32[2U] = 0xffffffffU;
    __Vtemp32[3U] = 0x1fU;
    __Vtemp33[0U] = (IData)(((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                             << 0x27U));
    __Vtemp33[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                              & VL_NEGATE_Q((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU))))))) 
                                     << 0x12U)) | (IData)(
                                                          (((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                                            << 0x27U) 
                                                           >> 0x20U)));
    __Vtemp33[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                             >> 0xaU))))))) 
                                  >> 0xeU)) | (0xfffc0000U 
                                               & ((IData)(
                                                          ((VL_ULL(0x7ffffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU)))))) 
                                                           >> 0x20U)) 
                                                  << 0x12U)));
    __Vtemp33[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                             >> 0xaU)))))) 
                                          >> 0x20U)) 
                                 >> 0xeU));
    VL_MUL_W(4, __Vtemp34, __Vtemp32, __Vtemp33);
    __Vtemp38[0U] = 0xfffffc04U;
    __Vtemp38[1U] = 0xffffffffU;
    __Vtemp38[2U] = 0xffffffffU;
    __Vtemp38[3U] = 0x1fU;
    __Vtemp39[0U] = (IData)(((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                             << 0x27U));
    __Vtemp39[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                              & VL_NEGATE_Q((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU))))))) 
                                     << 0x12U)) | (IData)(
                                                          (((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                                            << 0x27U) 
                                                           >> 0x20U)));
    __Vtemp39[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                             >> 0xaU))))))) 
                                  >> 0xeU)) | (0xfffc0000U 
                                               & ((IData)(
                                                          ((VL_ULL(0x7ffffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU)))))) 
                                                           >> 0x20U)) 
                                                  << 0x12U)));
    __Vtemp39[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                             >> 0xaU)))))) 
                                          >> 0x20U)) 
                                 >> 0xeU));
    VL_MUL_W(4, __Vtemp40, __Vtemp38, __Vtemp39);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[0U] 
        = __Vtemp40[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[1U] 
        = __Vtemp40[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[2U] 
        = ((0x20000000U & (__Vtemp34[3U] << 0x19U)) 
           | (0x1fffffffU & __Vtemp40[2U]));
    __Vtemp46[0U] = 0xfffffc12U;
    __Vtemp46[1U] = 0xffffffffU;
    __Vtemp46[2U] = 0xffffffffU;
    __Vtemp46[3U] = 0x1fU;
    __Vtemp47[0U] = (IData)(((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                             << 0x27U));
    __Vtemp47[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                              & VL_NEGATE_Q((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU))))))) 
                                     << 0x12U)) | (IData)(
                                                          (((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                                            << 0x27U) 
                                                           >> 0x20U)));
    __Vtemp47[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                             >> 0xaU))))))) 
                                  >> 0xeU)) | (0xfffc0000U 
                                               & ((IData)(
                                                          ((VL_ULL(0x7ffffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU)))))) 
                                                           >> 0x20U)) 
                                                  << 0x12U)));
    __Vtemp47[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                             >> 0xaU)))))) 
                                          >> 0x20U)) 
                                 >> 0xeU));
    VL_MUL_W(4, __Vtemp48, __Vtemp46, __Vtemp47);
    __Vtemp52[0U] = 0xfffffc12U;
    __Vtemp52[1U] = 0xffffffffU;
    __Vtemp52[2U] = 0xffffffffU;
    __Vtemp52[3U] = 0x1fU;
    __Vtemp53[0U] = (IData)(((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                             << 0x27U));
    __Vtemp53[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                              & VL_NEGATE_Q((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU))))))) 
                                     << 0x12U)) | (IData)(
                                                          (((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                                            << 0x27U) 
                                                           >> 0x20U)));
    __Vtemp53[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                             >> 0xaU))))))) 
                                  >> 0xeU)) | (0xfffc0000U 
                                               & ((IData)(
                                                          ((VL_ULL(0x7ffffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU)))))) 
                                                           >> 0x20U)) 
                                                  << 0x12U)));
    __Vtemp53[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                             >> 0xaU)))))) 
                                          >> 0x20U)) 
                                 >> 0xeU));
    VL_MUL_W(4, __Vtemp54, __Vtemp52, __Vtemp53);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[0U] 
        = __Vtemp54[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[1U] 
        = __Vtemp54[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[2U] 
        = ((0x20000000U & (__Vtemp48[3U] << 0x19U)) 
           | (0x1fffffffU & __Vtemp54[2U]));
    __Vtemp60[0U] = 0xfffffba5U;
    __Vtemp60[1U] = 0xffffffffU;
    __Vtemp60[2U] = 0xffffffffU;
    __Vtemp60[3U] = 0x7fU;
    __Vtemp61[0U] = (IData)(((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                             << 0x28U));
    __Vtemp61[1U] = ((0xfff80000U & ((IData)((VL_ULL(0xfffffffffffff) 
                                              & VL_NEGATE_Q((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU))))))) 
                                     << 0x13U)) | (IData)(
                                                          (((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                                            << 0x28U) 
                                                           >> 0x20U)));
    __Vtemp61[2U] = ((0x7ffffU & ((IData)((VL_ULL(0xfffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                             >> 0xaU))))))) 
                                  >> 0xdU)) | (0xfff80000U 
                                               & ((IData)(
                                                          ((VL_ULL(0xfffffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU)))))) 
                                                           >> 0x20U)) 
                                                  << 0x13U)));
    __Vtemp61[3U] = (0x7ffffU & ((IData)(((VL_ULL(0xfffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                             >> 0xaU)))))) 
                                          >> 0x20U)) 
                                 >> 0xdU));
    VL_MUL_W(4, __Vtemp62, __Vtemp60, __Vtemp61);
    __Vtemp66[0U] = 0xfffffba5U;
    __Vtemp66[1U] = 0xffffffffU;
    __Vtemp66[2U] = 0xffffffffU;
    __Vtemp66[3U] = 0x7fU;
    __Vtemp67[0U] = (IData)(((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                             << 0x28U));
    __Vtemp67[1U] = ((0xfff80000U & ((IData)((VL_ULL(0xfffffffffffff) 
                                              & VL_NEGATE_Q((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU))))))) 
                                     << 0x13U)) | (IData)(
                                                          (((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                                            << 0x28U) 
                                                           >> 0x20U)));
    __Vtemp67[2U] = ((0x7ffffU & ((IData)((VL_ULL(0xfffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                             >> 0xaU))))))) 
                                  >> 0xdU)) | (0xfff80000U 
                                               & ((IData)(
                                                          ((VL_ULL(0xfffffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU)))))) 
                                                           >> 0x20U)) 
                                                  << 0x13U)));
    __Vtemp67[3U] = (0x7ffffU & ((IData)(((VL_ULL(0xfffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                             >> 0xaU)))))) 
                                          >> 0x20U)) 
                                 >> 0xdU));
    VL_MUL_W(4, __Vtemp68, __Vtemp66, __Vtemp67);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[0U] 
        = __Vtemp68[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[1U] 
        = __Vtemp68[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[2U] 
        = ((0x80000000U & (__Vtemp62[3U] << 0x19U)) 
           | (0x7fffffffU & __Vtemp68[2U]));
}

VL_INLINE_OPT void Vsar_adc__N_BITS_10::_sequent__TOP__2(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsar_adc__N_BITS_10::_sequent__TOP__2\n"); );
    Vsar_adc__N_BITS_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter;
    WData/*127:0*/ __Vtemp74[4];
    WData/*127:0*/ __Vtemp75[4];
    WData/*127:0*/ __Vtemp76[4];
    WData/*127:0*/ __Vtemp80[4];
    WData/*127:0*/ __Vtemp81[4];
    WData/*127:0*/ __Vtemp82[4];
    WData/*127:0*/ __Vtemp88[4];
    WData/*127:0*/ __Vtemp89[4];
    WData/*127:0*/ __Vtemp90[4];
    WData/*127:0*/ __Vtemp94[4];
    WData/*127:0*/ __Vtemp95[4];
    WData/*127:0*/ __Vtemp96[4];
    WData/*95:0*/ __Vtemp102[3];
    WData/*95:0*/ __Vtemp103[3];
    WData/*95:0*/ __Vtemp104[3];
    WData/*95:0*/ __Vtemp108[3];
    WData/*95:0*/ __Vtemp109[3];
    WData/*95:0*/ __Vtemp110[3];
    // Body
    __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter 
        = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter;
    if (vlTOPp->reset) {
        __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter = 0U;
    } else {
        if (vlTOPp->input_hold_digital) {
            __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter 
                = ((0x13U != (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter))
                    ? (0x1fU & ((IData)(1U) + (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)))
                    : 0U);
        }
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->input_hold_digital))))) {
        vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register = 0U;
    } else {
        vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound1 
            = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_output_digital;
        if ((9U >= (0xfU & (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                              >> 1U)) 
                            - (IData)(1U))))) {
            vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register 
                = (((~ ((IData)(1U) << (0xfU & (((IData)(0xaU) 
                                                 - 
                                                 ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                                  >> 1U)) 
                                                - (IData)(1U))))) 
                    & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register)) 
                   | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound1) 
                      << (0xfU & (((IData)(0xaU) - 
                                   ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                    >> 1U)) - (IData)(1U)))));
        }
    }
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter 
        = __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter;
    vlTOPp->eoc = (9U == ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                          >> 1U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((0U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register)));
    vlTOPp->output_result_digital = ((0x3feU & (IData)(vlTOPp->output_result_digital)) 
                                     | (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((1U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 1U)));
    vlTOPp->output_result_digital = ((0x3fdU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 1U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((2U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 2U)));
    vlTOPp->output_result_digital = ((0x3fbU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 2U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((3U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 3U)));
    vlTOPp->output_result_digital = ((0x3f7U & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 3U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((4U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 4U)));
    vlTOPp->output_result_digital = ((0x3efU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 4U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((5U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 5U)));
    vlTOPp->output_result_digital = ((0x3dfU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 5U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((6U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 6U)));
    vlTOPp->output_result_digital = ((0x3bfU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 6U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((7U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 7U)));
    vlTOPp->output_result_digital = ((0x37fU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 7U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((8U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 8U)));
    vlTOPp->output_result_digital = ((0x2ffU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 8U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((9U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 9U)));
    vlTOPp->output_result_digital = ((0x1ffU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 9U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
        = (QData)((IData)((0x1ffe000U & ((IData)((VL_ULL(0xfffff) 
                                                  & ((VL_ULL(0x1a66) 
                                                      * (QData)((IData)(
                                                                        ((IData)(vlTOPp->output_result_digital) 
                                                                         << 0xbU)))) 
                                                     >> 0x16U))) 
                                         << 0xdU))));
    __Vtemp74[0U] = 0xfffffbf2U;
    __Vtemp74[1U] = 0xffffffffU;
    __Vtemp74[2U] = 0xffffffffU;
    __Vtemp74[3U] = 0x1ffU;
    __Vtemp75[0U] = 0U;
    __Vtemp75[1U] = (0xfffffe00U & ((IData)((QData)((IData)(
                                                            (0x1feU 
                                                             & ((IData)(
                                                                        (VL_ULL(0xffffffff) 
                                                                         & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                            >> 0x11U))) 
                                                                << 1U))))) 
                                    << 9U));
    __Vtemp75[2U] = ((0x1ffU & ((IData)((QData)((IData)(
                                                        (0x1feU 
                                                         & ((IData)(
                                                                    (VL_ULL(0xffffffff) 
                                                                     & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                        >> 0x11U))) 
                                                            << 1U))))) 
                                >> 0x17U)) | (0xfffffe00U 
                                              & ((IData)(
                                                         ((QData)((IData)(
                                                                          (0x1feU 
                                                                           & ((IData)(
                                                                                (VL_ULL(0xffffffff) 
                                                                                & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                                >> 0x11U))) 
                                                                              << 1U)))) 
                                                          >> 0x20U)) 
                                                 << 9U)));
    __Vtemp75[3U] = (0x1ffU & ((IData)(((QData)((IData)(
                                                        (0x1feU 
                                                         & ((IData)(
                                                                    (VL_ULL(0xffffffff) 
                                                                     & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                        >> 0x11U))) 
                                                            << 1U)))) 
                                        >> 0x20U)) 
                               >> 0x17U));
    VL_MUL_W(4, __Vtemp76, __Vtemp74, __Vtemp75);
    __Vtemp80[0U] = 0xfffffbf2U;
    __Vtemp80[1U] = 0xffffffffU;
    __Vtemp80[2U] = 0xffffffffU;
    __Vtemp80[3U] = 0x1ffU;
    __Vtemp81[0U] = 0U;
    __Vtemp81[1U] = (0xfffffe00U & ((IData)((QData)((IData)(
                                                            (0x1feU 
                                                             & ((IData)(
                                                                        (VL_ULL(0xffffffff) 
                                                                         & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                            >> 0x11U))) 
                                                                << 1U))))) 
                                    << 9U));
    __Vtemp81[2U] = ((0x1ffU & ((IData)((QData)((IData)(
                                                        (0x1feU 
                                                         & ((IData)(
                                                                    (VL_ULL(0xffffffff) 
                                                                     & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                        >> 0x11U))) 
                                                            << 1U))))) 
                                >> 0x17U)) | (0xfffffe00U 
                                              & ((IData)(
                                                         ((QData)((IData)(
                                                                          (0x1feU 
                                                                           & ((IData)(
                                                                                (VL_ULL(0xffffffff) 
                                                                                & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                                >> 0x11U))) 
                                                                              << 1U)))) 
                                                          >> 0x20U)) 
                                                 << 9U)));
    __Vtemp81[3U] = (0x1ffU & ((IData)(((QData)((IData)(
                                                        (0x1feU 
                                                         & ((IData)(
                                                                    (VL_ULL(0xffffffff) 
                                                                     & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                        >> 0x11U))) 
                                                            << 1U)))) 
                                        >> 0x20U)) 
                               >> 0x17U));
    VL_MUL_W(4, __Vtemp82, __Vtemp80, __Vtemp81);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[0U] 
        = __Vtemp82[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[1U] 
        = __Vtemp82[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[2U] 
        = __Vtemp82[2U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[3U] 
        = ((2U & (__Vtemp76[3U] >> 7U)) | (1U & __Vtemp82[3U]));
    __Vtemp88[0U] = 0xfffff928U;
    __Vtemp88[1U] = 0xffffffffU;
    __Vtemp88[2U] = 0xffffffffU;
    __Vtemp88[3U] = 0x1ffU;
    __Vtemp89[0U] = 0U;
    __Vtemp89[1U] = (0xfffffe00U & ((IData)((QData)((IData)(
                                                            (0x1feU 
                                                             & ((IData)(
                                                                        (VL_ULL(0xffffffff) 
                                                                         & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                            >> 0x11U))) 
                                                                << 1U))))) 
                                    << 9U));
    __Vtemp89[2U] = ((0x1ffU & ((IData)((QData)((IData)(
                                                        (0x1feU 
                                                         & ((IData)(
                                                                    (VL_ULL(0xffffffff) 
                                                                     & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                        >> 0x11U))) 
                                                            << 1U))))) 
                                >> 0x17U)) | (0xfffffe00U 
                                              & ((IData)(
                                                         ((QData)((IData)(
                                                                          (0x1feU 
                                                                           & ((IData)(
                                                                                (VL_ULL(0xffffffff) 
                                                                                & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                                >> 0x11U))) 
                                                                              << 1U)))) 
                                                          >> 0x20U)) 
                                                 << 9U)));
    __Vtemp89[3U] = (0x1ffU & ((IData)(((QData)((IData)(
                                                        (0x1feU 
                                                         & ((IData)(
                                                                    (VL_ULL(0xffffffff) 
                                                                     & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                        >> 0x11U))) 
                                                            << 1U)))) 
                                        >> 0x20U)) 
                               >> 0x17U));
    VL_MUL_W(4, __Vtemp90, __Vtemp88, __Vtemp89);
    __Vtemp94[0U] = 0xfffff928U;
    __Vtemp94[1U] = 0xffffffffU;
    __Vtemp94[2U] = 0xffffffffU;
    __Vtemp94[3U] = 0x1ffU;
    __Vtemp95[0U] = 0U;
    __Vtemp95[1U] = (0xfffffe00U & ((IData)((QData)((IData)(
                                                            (0x1feU 
                                                             & ((IData)(
                                                                        (VL_ULL(0xffffffff) 
                                                                         & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                            >> 0x11U))) 
                                                                << 1U))))) 
                                    << 9U));
    __Vtemp95[2U] = ((0x1ffU & ((IData)((QData)((IData)(
                                                        (0x1feU 
                                                         & ((IData)(
                                                                    (VL_ULL(0xffffffff) 
                                                                     & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                        >> 0x11U))) 
                                                            << 1U))))) 
                                >> 0x17U)) | (0xfffffe00U 
                                              & ((IData)(
                                                         ((QData)((IData)(
                                                                          (0x1feU 
                                                                           & ((IData)(
                                                                                (VL_ULL(0xffffffff) 
                                                                                & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                                >> 0x11U))) 
                                                                              << 1U)))) 
                                                          >> 0x20U)) 
                                                 << 9U)));
    __Vtemp95[3U] = (0x1ffU & ((IData)(((QData)((IData)(
                                                        (0x1feU 
                                                         & ((IData)(
                                                                    (VL_ULL(0xffffffff) 
                                                                     & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                        >> 0x11U))) 
                                                            << 1U)))) 
                                        >> 0x20U)) 
                               >> 0x17U));
    VL_MUL_W(4, __Vtemp96, __Vtemp94, __Vtemp95);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[0U] 
        = __Vtemp96[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[1U] 
        = __Vtemp96[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[2U] 
        = __Vtemp96[2U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[3U] 
        = ((2U & (__Vtemp90[3U] >> 7U)) | (1U & __Vtemp96[3U]));
    __Vtemp102[0U] = 0xfffffb20U;
    __Vtemp102[1U] = 0xffffffffU;
    __Vtemp102[2U] = 0x7fffffffU;
    __Vtemp103[0U] = (IData)(((QData)((IData)((0x1feU 
                                               & ((IData)(
                                                          (VL_ULL(0xffffffff) 
                                                           & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                              >> 0x11U))) 
                                                  << 1U)))) 
                              << 0x24U));
    __Vtemp103[1U] = (IData)((((QData)((IData)((0x1feU 
                                                & ((IData)(
                                                           (VL_ULL(0xffffffff) 
                                                            & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                               >> 0x11U))) 
                                                   << 1U)))) 
                               << 0x24U) >> 0x20U));
    __Vtemp103[2U] = 0U;
    VL_MUL_W(3, __Vtemp104, __Vtemp102, __Vtemp103);
    __Vtemp108[0U] = 0xfffffb20U;
    __Vtemp108[1U] = 0xffffffffU;
    __Vtemp108[2U] = 0x7fffffffU;
    __Vtemp109[0U] = (IData)(((QData)((IData)((0x1feU 
                                               & ((IData)(
                                                          (VL_ULL(0xffffffff) 
                                                           & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                              >> 0x11U))) 
                                                  << 1U)))) 
                              << 0x24U));
    __Vtemp109[1U] = (IData)((((QData)((IData)((0x1feU 
                                                & ((IData)(
                                                           (VL_ULL(0xffffffff) 
                                                            & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                               >> 0x11U))) 
                                                   << 1U)))) 
                               << 0x24U) >> 0x20U));
    __Vtemp109[2U] = 0U;
    VL_MUL_W(3, __Vtemp110, __Vtemp108, __Vtemp109);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[0U] 
        = __Vtemp110[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[1U] 
        = __Vtemp110[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[2U] 
        = ((0x800000U & (__Vtemp104[2U] >> 7U)) | (0x7fffffU 
                                                   & __Vtemp110[2U]));
}

void Vsar_adc__N_BITS_10::_settle__TOP__3(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsar_adc__N_BITS_10::_settle__TOP__3\n"); );
    Vsar_adc__N_BITS_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp116[4];
    WData/*127:0*/ __Vtemp117[4];
    WData/*127:0*/ __Vtemp118[4];
    WData/*127:0*/ __Vtemp122[4];
    WData/*127:0*/ __Vtemp123[4];
    WData/*127:0*/ __Vtemp124[4];
    WData/*127:0*/ __Vtemp130[4];
    WData/*127:0*/ __Vtemp131[4];
    WData/*127:0*/ __Vtemp132[4];
    WData/*127:0*/ __Vtemp136[4];
    WData/*127:0*/ __Vtemp137[4];
    WData/*127:0*/ __Vtemp138[4];
    WData/*127:0*/ __Vtemp144[4];
    WData/*127:0*/ __Vtemp145[4];
    WData/*127:0*/ __Vtemp146[4];
    WData/*127:0*/ __Vtemp150[4];
    WData/*127:0*/ __Vtemp151[4];
    WData/*127:0*/ __Vtemp152[4];
    WData/*127:0*/ __Vtemp158[4];
    WData/*127:0*/ __Vtemp159[4];
    WData/*127:0*/ __Vtemp160[4];
    WData/*127:0*/ __Vtemp164[4];
    WData/*127:0*/ __Vtemp165[4];
    WData/*127:0*/ __Vtemp166[4];
    WData/*127:0*/ __Vtemp172[4];
    WData/*127:0*/ __Vtemp173[4];
    WData/*127:0*/ __Vtemp174[4];
    WData/*127:0*/ __Vtemp178[4];
    WData/*127:0*/ __Vtemp179[4];
    WData/*127:0*/ __Vtemp180[4];
    WData/*95:0*/ __Vtemp187[3];
    WData/*95:0*/ __Vtemp188[3];
    WData/*95:0*/ __Vtemp189[3];
    WData/*95:0*/ __Vtemp194[3];
    WData/*95:0*/ __Vtemp195[3];
    WData/*95:0*/ __Vtemp196[3];
    WData/*159:0*/ __Vtemp198[5];
    WData/*95:0*/ __Vtemp200[3];
    WData/*95:0*/ __Vtemp201[3];
    WData/*95:0*/ __Vtemp202[3];
    WData/*95:0*/ __Vtemp206[3];
    WData/*95:0*/ __Vtemp207[3];
    WData/*95:0*/ __Vtemp208[3];
    WData/*159:0*/ __Vtemp217[5];
    WData/*159:0*/ __Vtemp218[5];
    WData/*95:0*/ __Vtemp221[3];
    WData/*95:0*/ __Vtemp222[3];
    WData/*95:0*/ __Vtemp223[3];
    WData/*95:0*/ __Vtemp226[3];
    WData/*95:0*/ __Vtemp227[3];
    WData/*95:0*/ __Vtemp228[3];
    WData/*95:0*/ __Vtemp230[3];
    WData/*95:0*/ __Vtemp234[3];
    WData/*95:0*/ __Vtemp235[3];
    WData/*159:0*/ __Vtemp238[5];
    WData/*159:0*/ __Vtemp243[5];
    WData/*159:0*/ __Vtemp244[5];
    WData/*159:0*/ __Vtemp248[5];
    WData/*159:0*/ __Vtemp253[5];
    WData/*159:0*/ __Vtemp254[5];
    WData/*159:0*/ __Vtemp260[5];
    WData/*159:0*/ __Vtemp265[5];
    WData/*159:0*/ __Vtemp266[5];
    WData/*159:0*/ __Vtemp270[5];
    WData/*159:0*/ __Vtemp275[5];
    WData/*159:0*/ __Vtemp276[5];
    // Body
    vlTOPp->eoc = (9U == ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                          >> 1U));
    __Vtemp116[0U] = 0xfffffc04U;
    __Vtemp116[1U] = 0xffffffffU;
    __Vtemp116[2U] = 0xffffffffU;
    __Vtemp116[3U] = 0x1fU;
    __Vtemp117[0U] = (IData)(((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                              << 0x27U));
    __Vtemp117[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU))))))) 
                                      << 0x12U)) | (IData)(
                                                           (((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                                             << 0x27U) 
                                                            >> 0x20U)));
    __Vtemp117[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                              >> 0xaU))))))) 
                                   >> 0xeU)) | (0xfffc0000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x7ffffffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU)))))) 
                                                            >> 0x20U)) 
                                                   << 0x12U)));
    __Vtemp117[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                              >> 0xaU)))))) 
                                           >> 0x20U)) 
                                  >> 0xeU));
    VL_MUL_W(4, __Vtemp118, __Vtemp116, __Vtemp117);
    __Vtemp122[0U] = 0xfffffc04U;
    __Vtemp122[1U] = 0xffffffffU;
    __Vtemp122[2U] = 0xffffffffU;
    __Vtemp122[3U] = 0x1fU;
    __Vtemp123[0U] = (IData)(((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                              << 0x27U));
    __Vtemp123[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU))))))) 
                                      << 0x12U)) | (IData)(
                                                           (((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                                             << 0x27U) 
                                                            >> 0x20U)));
    __Vtemp123[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                              >> 0xaU))))))) 
                                   >> 0xeU)) | (0xfffc0000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x7ffffffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU)))))) 
                                                            >> 0x20U)) 
                                                   << 0x12U)));
    __Vtemp123[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                              >> 0xaU)))))) 
                                           >> 0x20U)) 
                                  >> 0xeU));
    VL_MUL_W(4, __Vtemp124, __Vtemp122, __Vtemp123);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[0U] 
        = __Vtemp124[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[1U] 
        = __Vtemp124[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[2U] 
        = ((0x20000000U & (__Vtemp118[3U] << 0x19U)) 
           | (0x1fffffffU & __Vtemp124[2U]));
    __Vtemp130[0U] = 0xfffffc12U;
    __Vtemp130[1U] = 0xffffffffU;
    __Vtemp130[2U] = 0xffffffffU;
    __Vtemp130[3U] = 0x1fU;
    __Vtemp131[0U] = (IData)(((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                              << 0x27U));
    __Vtemp131[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU))))))) 
                                      << 0x12U)) | (IData)(
                                                           (((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                                             << 0x27U) 
                                                            >> 0x20U)));
    __Vtemp131[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                              >> 0xaU))))))) 
                                   >> 0xeU)) | (0xfffc0000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x7ffffffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU)))))) 
                                                            >> 0x20U)) 
                                                   << 0x12U)));
    __Vtemp131[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                              >> 0xaU)))))) 
                                           >> 0x20U)) 
                                  >> 0xeU));
    VL_MUL_W(4, __Vtemp132, __Vtemp130, __Vtemp131);
    __Vtemp136[0U] = 0xfffffc12U;
    __Vtemp136[1U] = 0xffffffffU;
    __Vtemp136[2U] = 0xffffffffU;
    __Vtemp136[3U] = 0x1fU;
    __Vtemp137[0U] = (IData)(((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                              << 0x27U));
    __Vtemp137[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU))))))) 
                                      << 0x12U)) | (IData)(
                                                           (((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                                             << 0x27U) 
                                                            >> 0x20U)));
    __Vtemp137[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                              >> 0xaU))))))) 
                                   >> 0xeU)) | (0xfffc0000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x7ffffffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU)))))) 
                                                            >> 0x20U)) 
                                                   << 0x12U)));
    __Vtemp137[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                              >> 0xaU)))))) 
                                           >> 0x20U)) 
                                  >> 0xeU));
    VL_MUL_W(4, __Vtemp138, __Vtemp136, __Vtemp137);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[0U] 
        = __Vtemp138[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[1U] 
        = __Vtemp138[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[2U] 
        = ((0x20000000U & (__Vtemp132[3U] << 0x19U)) 
           | (0x1fffffffU & __Vtemp138[2U]));
    __Vtemp144[0U] = 0xfffffba5U;
    __Vtemp144[1U] = 0xffffffffU;
    __Vtemp144[2U] = 0xffffffffU;
    __Vtemp144[3U] = 0x7fU;
    __Vtemp145[0U] = (IData)(((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                              << 0x28U));
    __Vtemp145[1U] = ((0xfff80000U & ((IData)((VL_ULL(0xfffffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU))))))) 
                                      << 0x13U)) | (IData)(
                                                           (((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                                             << 0x28U) 
                                                            >> 0x20U)));
    __Vtemp145[2U] = ((0x7ffffU & ((IData)((VL_ULL(0xfffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                              >> 0xaU))))))) 
                                   >> 0xdU)) | (0xfff80000U 
                                                & ((IData)(
                                                           ((VL_ULL(0xfffffffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU)))))) 
                                                            >> 0x20U)) 
                                                   << 0x13U)));
    __Vtemp145[3U] = (0x7ffffU & ((IData)(((VL_ULL(0xfffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                              >> 0xaU)))))) 
                                           >> 0x20U)) 
                                  >> 0xdU));
    VL_MUL_W(4, __Vtemp146, __Vtemp144, __Vtemp145);
    __Vtemp150[0U] = 0xfffffba5U;
    __Vtemp150[1U] = 0xffffffffU;
    __Vtemp150[2U] = 0xffffffffU;
    __Vtemp150[3U] = 0x7fU;
    __Vtemp151[0U] = (IData)(((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                              << 0x28U));
    __Vtemp151[1U] = ((0xfff80000U & ((IData)((VL_ULL(0xfffffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU))))))) 
                                      << 0x13U)) | (IData)(
                                                           (((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                                             << 0x28U) 
                                                            >> 0x20U)));
    __Vtemp151[2U] = ((0x7ffffU & ((IData)((VL_ULL(0xfffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                              >> 0xaU))))))) 
                                   >> 0xdU)) | (0xfff80000U 
                                                & ((IData)(
                                                           ((VL_ULL(0xfffffffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                                >> 0xaU)))))) 
                                                            >> 0x20U)) 
                                                   << 0x13U)));
    __Vtemp151[3U] = (0x7ffffU & ((IData)(((VL_ULL(0xfffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                                                                              >> 0xaU)))))) 
                                           >> 0x20U)) 
                                  >> 0xdU));
    VL_MUL_W(4, __Vtemp152, __Vtemp150, __Vtemp151);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[0U] 
        = __Vtemp152[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[1U] 
        = __Vtemp152[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[2U] 
        = ((0x80000000U & (__Vtemp146[3U] << 0x19U)) 
           | (0x7fffffffU & __Vtemp152[2U]));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((0U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register)));
    vlTOPp->output_result_digital = ((0x3feU & (IData)(vlTOPp->output_result_digital)) 
                                     | (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((1U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 1U)));
    vlTOPp->output_result_digital = ((0x3fdU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 1U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((2U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 2U)));
    vlTOPp->output_result_digital = ((0x3fbU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 2U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((3U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 3U)));
    vlTOPp->output_result_digital = ((0x3f7U & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 3U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((4U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 4U)));
    vlTOPp->output_result_digital = ((0x3efU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 4U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((5U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 5U)));
    vlTOPp->output_result_digital = ((0x3dfU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 5U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((6U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 6U)));
    vlTOPp->output_result_digital = ((0x3bfU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 6U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((7U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 7U)));
    vlTOPp->output_result_digital = ((0x37fU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 7U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((8U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 8U)));
    vlTOPp->output_result_digital = ((0x2ffU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 8U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((9U == (((IData)(0xaU) - ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter) 
                                     >> 1U)) - (IData)(1U)))
            ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                          >> 9U)));
    vlTOPp->output_result_digital = ((0x1ffU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 9U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157 
        = (0x7fffU & ((1U & (IData)((vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                                     >> 0x22U))) ? (IData)(
                                                           (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                                                            >> 0x14U))
                       : (IData)((vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                                  >> 0x14U))));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
        = (QData)((IData)((0x1ffe000U & ((IData)((VL_ULL(0xfffff) 
                                                  & ((VL_ULL(0x1a66) 
                                                      * (QData)((IData)(
                                                                        ((IData)(vlTOPp->output_result_digital) 
                                                                         << 0xbU)))) 
                                                     >> 0x16U))) 
                                         << 0xdU))));
    __Vtemp158[0U] = 0xfffffbf2U;
    __Vtemp158[1U] = 0xffffffffU;
    __Vtemp158[2U] = 0xffffffffU;
    __Vtemp158[3U] = 0x1ffU;
    __Vtemp159[0U] = 0U;
    __Vtemp159[1U] = (0xfffffe00U & ((IData)((QData)((IData)(
                                                             (0x1feU 
                                                              & ((IData)(
                                                                         (VL_ULL(0xffffffff) 
                                                                          & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                             >> 0x11U))) 
                                                                 << 1U))))) 
                                     << 9U));
    __Vtemp159[2U] = ((0x1ffU & ((IData)((QData)((IData)(
                                                         (0x1feU 
                                                          & ((IData)(
                                                                     (VL_ULL(0xffffffff) 
                                                                      & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                         >> 0x11U))) 
                                                             << 1U))))) 
                                 >> 0x17U)) | (0xfffffe00U 
                                               & ((IData)(
                                                          ((QData)((IData)(
                                                                           (0x1feU 
                                                                            & ((IData)(
                                                                                (VL_ULL(0xffffffff) 
                                                                                & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                                >> 0x11U))) 
                                                                               << 1U)))) 
                                                           >> 0x20U)) 
                                                  << 9U)));
    __Vtemp159[3U] = (0x1ffU & ((IData)(((QData)((IData)(
                                                         (0x1feU 
                                                          & ((IData)(
                                                                     (VL_ULL(0xffffffff) 
                                                                      & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                         >> 0x11U))) 
                                                             << 1U)))) 
                                         >> 0x20U)) 
                                >> 0x17U));
    VL_MUL_W(4, __Vtemp160, __Vtemp158, __Vtemp159);
    __Vtemp164[0U] = 0xfffffbf2U;
    __Vtemp164[1U] = 0xffffffffU;
    __Vtemp164[2U] = 0xffffffffU;
    __Vtemp164[3U] = 0x1ffU;
    __Vtemp165[0U] = 0U;
    __Vtemp165[1U] = (0xfffffe00U & ((IData)((QData)((IData)(
                                                             (0x1feU 
                                                              & ((IData)(
                                                                         (VL_ULL(0xffffffff) 
                                                                          & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                             >> 0x11U))) 
                                                                 << 1U))))) 
                                     << 9U));
    __Vtemp165[2U] = ((0x1ffU & ((IData)((QData)((IData)(
                                                         (0x1feU 
                                                          & ((IData)(
                                                                     (VL_ULL(0xffffffff) 
                                                                      & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                         >> 0x11U))) 
                                                             << 1U))))) 
                                 >> 0x17U)) | (0xfffffe00U 
                                               & ((IData)(
                                                          ((QData)((IData)(
                                                                           (0x1feU 
                                                                            & ((IData)(
                                                                                (VL_ULL(0xffffffff) 
                                                                                & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                                >> 0x11U))) 
                                                                               << 1U)))) 
                                                           >> 0x20U)) 
                                                  << 9U)));
    __Vtemp165[3U] = (0x1ffU & ((IData)(((QData)((IData)(
                                                         (0x1feU 
                                                          & ((IData)(
                                                                     (VL_ULL(0xffffffff) 
                                                                      & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                         >> 0x11U))) 
                                                             << 1U)))) 
                                         >> 0x20U)) 
                                >> 0x17U));
    VL_MUL_W(4, __Vtemp166, __Vtemp164, __Vtemp165);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[0U] 
        = __Vtemp166[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[1U] 
        = __Vtemp166[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[2U] 
        = __Vtemp166[2U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[3U] 
        = ((2U & (__Vtemp160[3U] >> 7U)) | (1U & __Vtemp166[3U]));
    __Vtemp172[0U] = 0xfffff928U;
    __Vtemp172[1U] = 0xffffffffU;
    __Vtemp172[2U] = 0xffffffffU;
    __Vtemp172[3U] = 0x1ffU;
    __Vtemp173[0U] = 0U;
    __Vtemp173[1U] = (0xfffffe00U & ((IData)((QData)((IData)(
                                                             (0x1feU 
                                                              & ((IData)(
                                                                         (VL_ULL(0xffffffff) 
                                                                          & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                             >> 0x11U))) 
                                                                 << 1U))))) 
                                     << 9U));
    __Vtemp173[2U] = ((0x1ffU & ((IData)((QData)((IData)(
                                                         (0x1feU 
                                                          & ((IData)(
                                                                     (VL_ULL(0xffffffff) 
                                                                      & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                         >> 0x11U))) 
                                                             << 1U))))) 
                                 >> 0x17U)) | (0xfffffe00U 
                                               & ((IData)(
                                                          ((QData)((IData)(
                                                                           (0x1feU 
                                                                            & ((IData)(
                                                                                (VL_ULL(0xffffffff) 
                                                                                & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                                >> 0x11U))) 
                                                                               << 1U)))) 
                                                           >> 0x20U)) 
                                                  << 9U)));
    __Vtemp173[3U] = (0x1ffU & ((IData)(((QData)((IData)(
                                                         (0x1feU 
                                                          & ((IData)(
                                                                     (VL_ULL(0xffffffff) 
                                                                      & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                         >> 0x11U))) 
                                                             << 1U)))) 
                                         >> 0x20U)) 
                                >> 0x17U));
    VL_MUL_W(4, __Vtemp174, __Vtemp172, __Vtemp173);
    __Vtemp178[0U] = 0xfffff928U;
    __Vtemp178[1U] = 0xffffffffU;
    __Vtemp178[2U] = 0xffffffffU;
    __Vtemp178[3U] = 0x1ffU;
    __Vtemp179[0U] = 0U;
    __Vtemp179[1U] = (0xfffffe00U & ((IData)((QData)((IData)(
                                                             (0x1feU 
                                                              & ((IData)(
                                                                         (VL_ULL(0xffffffff) 
                                                                          & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                             >> 0x11U))) 
                                                                 << 1U))))) 
                                     << 9U));
    __Vtemp179[2U] = ((0x1ffU & ((IData)((QData)((IData)(
                                                         (0x1feU 
                                                          & ((IData)(
                                                                     (VL_ULL(0xffffffff) 
                                                                      & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                         >> 0x11U))) 
                                                             << 1U))))) 
                                 >> 0x17U)) | (0xfffffe00U 
                                               & ((IData)(
                                                          ((QData)((IData)(
                                                                           (0x1feU 
                                                                            & ((IData)(
                                                                                (VL_ULL(0xffffffff) 
                                                                                & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                                >> 0x11U))) 
                                                                               << 1U)))) 
                                                           >> 0x20U)) 
                                                  << 9U)));
    __Vtemp179[3U] = (0x1ffU & ((IData)(((QData)((IData)(
                                                         (0x1feU 
                                                          & ((IData)(
                                                                     (VL_ULL(0xffffffff) 
                                                                      & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                         >> 0x11U))) 
                                                             << 1U)))) 
                                         >> 0x20U)) 
                                >> 0x17U));
    VL_MUL_W(4, __Vtemp180, __Vtemp178, __Vtemp179);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[0U] 
        = __Vtemp180[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[1U] 
        = __Vtemp180[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[2U] 
        = __Vtemp180[2U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[3U] 
        = ((2U & (__Vtemp174[3U] >> 7U)) | (1U & __Vtemp180[3U]));
    __Vtemp187[0U] = 0x46bU;
    __Vtemp187[1U] = 0U;
    __Vtemp187[2U] = 0U;
    VL_EXTEND_WQ(94,47, __Vtemp188, ((QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(
                                                                (VL_ULL(0xffffffff) 
                                                                 & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                    >> 0x11U)))))) 
                                     << 0x26U));
    VL_MUL_W(3, __Vtemp189, __Vtemp187, __Vtemp188);
    __Vtemp194[0U] = 0x46bU;
    __Vtemp194[1U] = 0U;
    __Vtemp194[2U] = 0U;
    VL_EXTEND_WQ(94,47, __Vtemp195, ((QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(
                                                                (VL_ULL(0xffffffff) 
                                                                 & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                    >> 0x11U)))))) 
                                     << 0x26U));
    VL_MUL_W(3, __Vtemp196, __Vtemp194, __Vtemp195);
    __Vtemp198[1U] = (IData)(((VL_ULL(0x7fffffffc0000000) 
                               & (VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                             (VL_ULL(0x3ffffffffffc000) 
                                              & ((VL_ULL(0x17e4) 
                                                  + 
                                                  ((VL_ULL(0xffffffffff8) 
                                                    & (((QData)((IData)(
                                                                        (0x3fffffffU 
                                                                         & __Vtemp196[2U]))) 
                                                        << 0x15U) 
                                                       | (VL_ULL(0x1ffffffffffff8) 
                                                          & ((QData)((IData)(
                                                                             __Vtemp196[1U])) 
                                                             >> 0xbU)))) 
                                                   + 
                                                   (VL_ULL(0x7fffffffffff) 
                                                    & ((0x80000000U 
                                                        & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[2U])
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[2U])) 
                                                         << 0xfU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[1U])) 
                                                           >> 0x11U))
                                                        : 
                                                       (((QData)((IData)(
                                                                         vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[2U])) 
                                                         << 0xfU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[1U])) 
                                                           >> 0x11U)))))) 
                                                 << 0xeU))) 
                                  << 0x1eU)) >> 0x20U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_336[0U] 
        = (IData)((VL_ULL(0x7fffffffc0000000) & (VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                                            (VL_ULL(0x3ffffffffffc000) 
                                                             & ((VL_ULL(0x17e4) 
                                                                 + 
                                                                 ((VL_ULL(0xffffffffff8) 
                                                                   & (((QData)((IData)(
                                                                                (0x3fffffffU 
                                                                                & __Vtemp196[2U]))) 
                                                                       << 0x15U) 
                                                                      | (VL_ULL(0x1ffffffffffff8) 
                                                                         & ((QData)((IData)(
                                                                                __Vtemp196[1U])) 
                                                                            >> 0xbU)))) 
                                                                  + 
                                                                  (VL_ULL(0x7fffffffffff) 
                                                                   & ((0x80000000U 
                                                                       & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[2U])
                                                                       ? 
                                                                      (((QData)((IData)(
                                                                                vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[2U])) 
                                                                        << 0xfU) 
                                                                       | ((QData)((IData)(
                                                                                vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[1U])) 
                                                                          >> 0x11U))
                                                                       : 
                                                                      (((QData)((IData)(
                                                                                vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[2U])) 
                                                                        << 0xfU) 
                                                                       | ((QData)((IData)(
                                                                                vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[1U])) 
                                                                          >> 0x11U)))))) 
                                                                << 0xeU))) 
                                                 << 0x1eU)));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_336[1U] 
        = __Vtemp198[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_336[2U] = 0U;
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_336[3U] = 0U;
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_336[4U] = 0U;
    __Vtemp200[0U] = 0xfffffb20U;
    __Vtemp200[1U] = 0xffffffffU;
    __Vtemp200[2U] = 0x7fffffffU;
    __Vtemp201[0U] = (IData)(((QData)((IData)((0x1feU 
                                               & ((IData)(
                                                          (VL_ULL(0xffffffff) 
                                                           & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                              >> 0x11U))) 
                                                  << 1U)))) 
                              << 0x24U));
    __Vtemp201[1U] = (IData)((((QData)((IData)((0x1feU 
                                                & ((IData)(
                                                           (VL_ULL(0xffffffff) 
                                                            & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                               >> 0x11U))) 
                                                   << 1U)))) 
                               << 0x24U) >> 0x20U));
    __Vtemp201[2U] = 0U;
    VL_MUL_W(3, __Vtemp202, __Vtemp200, __Vtemp201);
    __Vtemp206[0U] = 0xfffffb20U;
    __Vtemp206[1U] = 0xffffffffU;
    __Vtemp206[2U] = 0x7fffffffU;
    __Vtemp207[0U] = (IData)(((QData)((IData)((0x1feU 
                                               & ((IData)(
                                                          (VL_ULL(0xffffffff) 
                                                           & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                              >> 0x11U))) 
                                                  << 1U)))) 
                              << 0x24U));
    __Vtemp207[1U] = (IData)((((QData)((IData)((0x1feU 
                                                & ((IData)(
                                                           (VL_ULL(0xffffffff) 
                                                            & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                               >> 0x11U))) 
                                                   << 1U)))) 
                               << 0x24U) >> 0x20U));
    __Vtemp207[2U] = 0U;
    VL_MUL_W(3, __Vtemp208, __Vtemp206, __Vtemp207);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[0U] 
        = __Vtemp208[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[1U] 
        = __Vtemp208[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[2U] 
        = ((0x800000U & (__Vtemp202[2U] >> 7U)) | (0x7fffffU 
                                                   & __Vtemp208[2U]));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
        = (VL_ULL(0xffffffffffff) & (VL_ULL(0x5050) 
                                     + (((2U & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[3U])
                                          ? (((QData)((IData)(
                                                              vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[3U])) 
                                              << 0x2eU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[2U])) 
                                                 << 0xeU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[1U])) 
                                                   >> 0x12U)))
                                          : (((QData)((IData)(
                                                              vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[3U])) 
                                              << 0x2eU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[2U])) 
                                                 << 0xeU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[1U])) 
                                                   >> 0x12U)))) 
                                        + (VL_ULL(0xfffffffffffc) 
                                           & (((0x20000000U 
                                                & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[2U])
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[2U])) 
                                                    << 0x10U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[1U])) 
                                                      >> 0x10U))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[2U])) 
                                                    << 0x10U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[1U])) 
                                                      >> 0x10U))) 
                                              << 2U)))));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
        = (VL_ULL(0x7fffffffffff) & (VL_ULL(0x1284) 
                                     + (((2U & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[3U])
                                          ? (((QData)((IData)(
                                                              vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[3U])) 
                                              << 0x2dU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[2U])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[1U])) 
                                                   >> 0x13U)))
                                          : (((QData)((IData)(
                                                              vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[3U])) 
                                              << 0x2dU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[2U])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[1U])) 
                                                   >> 0x13U)))) 
                                        + (VL_ULL(0x7ffffffffffe) 
                                           & (((0x20000000U 
                                                & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[2U])
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[2U])) 
                                                    << 0x10U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[1U])) 
                                                      >> 0x10U))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[2U])) 
                                                    << 0x10U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[1U])) 
                                                      >> 0x10U))) 
                                              << 1U)))));
    __Vtemp217[0U] = (IData)((((QData)((IData)((0x1fffffffU 
                                                & VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (VL_ULL(1) 
                                                                                & ((VL_ULL(0xd3330000) 
                                                                                - vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o) 
                                                                                >> 0x22U))))))))) 
                               << 0x23U) | (VL_ULL(0x7ffffffff) 
                                            & (VL_ULL(0xd3330000) 
                                               - vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o))));
    __Vtemp217[1U] = (IData)(((((QData)((IData)((0x1fffffffU 
                                                 & VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (VL_ULL(1) 
                                                                                & ((VL_ULL(0xd3330000) 
                                                                                - vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o) 
                                                                                >> 0x22U))))))))) 
                                << 0x23U) | (VL_ULL(0x7ffffffff) 
                                             & (VL_ULL(0xd3330000) 
                                                - vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o))) 
                              >> 0x20U));
    __Vtemp217[2U] = VL_NEGATE_I((IData)((1U & (IData)(
                                                       (VL_ULL(1) 
                                                        & ((VL_ULL(0xd3330000) 
                                                            - vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o) 
                                                           >> 0x22U))))));
    __Vtemp217[3U] = VL_NEGATE_I((IData)((1U & (IData)(
                                                       (VL_ULL(1) 
                                                        & ((VL_ULL(0xd3330000) 
                                                            - vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o) 
                                                           >> 0x22U))))));
    __Vtemp217[4U] = (1U & VL_NEGATE_I((IData)((1U 
                                                & (IData)(
                                                          (VL_ULL(1) 
                                                           & ((VL_ULL(0xd3330000) 
                                                               - vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o) 
                                                              >> 0x22U)))))));
    VL_MUL_W(5, __Vtemp218, __Vtemp217, vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_336);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[0U] 
        = __Vtemp218[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[1U] 
        = __Vtemp218[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[2U] 
        = __Vtemp218[2U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[3U] 
        = __Vtemp218[3U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[4U] 
        = (1U & __Vtemp218[4U]);
    __Vtemp221[0U] = 0x40dU;
    __Vtemp221[1U] = 0U;
    __Vtemp221[2U] = 0U;
    VL_EXTEND_WQ(92,46, __Vtemp222, ((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                     << 0x24U));
    VL_MUL_W(3, __Vtemp223, __Vtemp221, __Vtemp222);
    __Vtemp226[0U] = 0x40dU;
    __Vtemp226[1U] = 0U;
    __Vtemp226[2U] = 0U;
    VL_EXTEND_WQ(92,46, __Vtemp227, ((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                     << 0x24U));
    VL_MUL_W(3, __Vtemp228, __Vtemp226, __Vtemp227);
    __Vtemp230[1U] = (IData)(((VL_ULL(0xffffffff80) 
                               & (VL_DIV_QQQ(52, VL_ULL(0x8000000000000), 
                                             (VL_ULL(0x3fffffffffc00) 
                                              & ((VL_ULL(0x412) 
                                                  + 
                                                  ((VL_ULL(0xfffffffffe) 
                                                    & (((0x800000U 
                                                         & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[2U])
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[2U])) 
                                                          << 0x12U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[1U])) 
                                                            >> 0xeU))
                                                         : 
                                                        (((QData)((IData)(
                                                                          vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[2U])) 
                                                          << 0x12U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[1U])) 
                                                            >> 0xeU))) 
                                                       << 1U)) 
                                                   + 
                                                   (VL_ULL(0x1ffffffffff) 
                                                    & (((QData)((IData)(
                                                                        (0xfffffffU 
                                                                         & __Vtemp228[2U]))) 
                                                        << 0x13U) 
                                                       | ((QData)((IData)(
                                                                          __Vtemp228[1U])) 
                                                          >> 0xdU))))) 
                                                 << 0xaU))) 
                                  << 7U)) >> 0x20U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_160[0U] 
        = (IData)((VL_ULL(0xffffffff80) & (VL_DIV_QQQ(52, VL_ULL(0x8000000000000), 
                                                      (VL_ULL(0x3fffffffffc00) 
                                                       & ((VL_ULL(0x412) 
                                                           + 
                                                           ((VL_ULL(0xfffffffffe) 
                                                             & (((0x800000U 
                                                                  & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[2U])
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[2U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[1U])) 
                                                                     >> 0xeU))
                                                                  : 
                                                                 (((QData)((IData)(
                                                                                vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[2U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[1U])) 
                                                                     >> 0xeU))) 
                                                                << 1U)) 
                                                            + 
                                                            (VL_ULL(0x1ffffffffff) 
                                                             & (((QData)((IData)(
                                                                                (0xfffffffU 
                                                                                & __Vtemp228[2U]))) 
                                                                 << 0x13U) 
                                                                | ((QData)((IData)(
                                                                                __Vtemp228[1U])) 
                                                                   >> 0xdU))))) 
                                                          << 0xaU))) 
                                           << 7U)));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_160[1U] 
        = __Vtemp230[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_160[2U] = 0U;
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[0U] 
        = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[1U] 
        = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[2U] 
        = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[2U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[3U] 
        = (1U & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[4U]);
    __Vtemp234[0U] = (IData)((((QData)((IData)((0x1fffffffU 
                                                & VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (VL_NEGATE_I(
                                                                                ((0x4000U 
                                                                                & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U))) 
                                                                          >> 0xbU))))))) 
                               << 0xcU) | (QData)((IData)(
                                                          (0xfffU 
                                                           & VL_NEGATE_I(
                                                                         ((0x4000U 
                                                                           & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157))
                                                                           ? 
                                                                          ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                           >> 3U)
                                                                           : 
                                                                          ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                           >> 3U))))))));
    __Vtemp234[1U] = ((0xfffffe00U & ((IData)((VL_ULL(0x3ffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & (VL_NEGATE_I(
                                                                                ((0x4000U 
                                                                                & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U))) 
                                                                                >> 0xbU))))))) 
                                      << 9U)) | (IData)(
                                                        ((((QData)((IData)(
                                                                           (0x1fffffffU 
                                                                            & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (VL_NEGATE_I(
                                                                                ((0x4000U 
                                                                                & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U))) 
                                                                                >> 0xbU))))))) 
                                                           << 0xcU) 
                                                          | (QData)((IData)(
                                                                            (0xfffU 
                                                                             & VL_NEGATE_I(
                                                                                ((0x4000U 
                                                                                & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U))))))) 
                                                         >> 0x20U)));
    __Vtemp234[2U] = ((0x1ffU & ((IData)((VL_ULL(0x3ffffffffff) 
                                          & VL_NEGATE_Q((QData)((IData)(
                                                                        (1U 
                                                                         & (VL_NEGATE_I(
                                                                                ((0x4000U 
                                                                                & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U))) 
                                                                            >> 0xbU))))))) 
                                 >> 0x17U)) | (0xfffffe00U 
                                               & ((IData)(
                                                          ((VL_ULL(0x3ffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (VL_NEGATE_I(
                                                                                ((0x4000U 
                                                                                & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U))) 
                                                                                >> 0xbU)))))) 
                                                           >> 0x20U)) 
                                                  << 9U)));
    VL_MUL_W(3, __Vtemp235, __Vtemp234, vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_160);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_148[0U] 
        = __Vtemp235[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_148[1U] 
        = __Vtemp235[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_148[2U] 
        = (0x7ffffU & __Vtemp235[2U]);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
        = (VL_ULL(0x1fffffffff) & ((1U & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[3U])
                                    ? (((QData)((IData)(
                                                        vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[3U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[2U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[1U])) 
                                                   >> 0x1cU)))
                                    : (((QData)((IData)(
                                                        vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[3U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[2U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[1U])) 
                                                   >> 0x1cU)))));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_167 
        = (((QData)((IData)((1U & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_148[2U] 
                                   >> 0x12U)))) << 0x31U) 
           | (VL_ULL(0x1ffffffffffff) & (((QData)((IData)(
                                                          vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_148[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_148[0U])))));
    __Vtemp238[0U] = 0x36f9bU;
    __Vtemp238[1U] = 0U;
    __Vtemp238[2U] = 0U;
    __Vtemp238[3U] = 0U;
    __Vtemp238[4U] = 0U;
    __Vtemp243[0U] = (IData)(((QData)((IData)((0x1fffU 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                              >> 0x24U)))
                                                   ? (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                              >> 0x18U))
                                                   : (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                              >> 0x18U)))))) 
                              << 0x33U));
    __Vtemp243[1U] = (IData)((((QData)((IData)((0x1fffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                               >> 0x24U)))
                                                    ? (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                               >> 0x18U))
                                                    : (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                               >> 0x18U)))))) 
                               << 0x33U) >> 0x20U));
    __Vtemp243[2U] = ((0xff000000U & (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (((1U 
                                                                & (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                           >> 0x24U)))
                                                                ? (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                           >> 0x18U))
                                                                : (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                           >> 0x18U))) 
                                                              >> 0xcU)))) 
                                      << 0x18U)) | 
                      (0xffffffU & VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (((1U 
                                                             & (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                        >> 0x24U)))
                                                             ? (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                        >> 0x18U))
                                                             : (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                        >> 0x18U))) 
                                                           >> 0xcU))))));
    __Vtemp243[3U] = ((0xffffffU & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x24U)))
                                                              ? (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x18U))
                                                              : (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x18U))) 
                                                            >> 0xcU)))) 
                                    >> 8U)) | (0xff000000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x24U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x18U))
                                                                            : (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x18U))) 
                                                                          >> 0xcU)))) 
                                                  << 0x18U)));
    __Vtemp243[4U] = ((0xffffffU & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x24U)))
                                                              ? (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x18U))
                                                              : (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x18U))) 
                                                            >> 0xcU)))) 
                                    >> 8U)) | (0x1000000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x24U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x18U))
                                                                            : (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x18U))) 
                                                                          >> 0xcU)))) 
                                                  << 0x18U)));
    VL_MUL_W(5, __Vtemp244, __Vtemp238, __Vtemp243);
    __Vtemp248[0U] = 0x36f9bU;
    __Vtemp248[1U] = 0U;
    __Vtemp248[2U] = 0U;
    __Vtemp248[3U] = 0U;
    __Vtemp248[4U] = 0U;
    __Vtemp253[0U] = (IData)(((QData)((IData)((0x1fffU 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                              >> 0x24U)))
                                                   ? (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                              >> 0x18U))
                                                   : (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                              >> 0x18U)))))) 
                              << 0x33U));
    __Vtemp253[1U] = (IData)((((QData)((IData)((0x1fffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                               >> 0x24U)))
                                                    ? (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                               >> 0x18U))
                                                    : (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                               >> 0x18U)))))) 
                               << 0x33U) >> 0x20U));
    __Vtemp253[2U] = ((0xff000000U & (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (((1U 
                                                                & (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                           >> 0x24U)))
                                                                ? (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                           >> 0x18U))
                                                                : (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                           >> 0x18U))) 
                                                              >> 0xcU)))) 
                                      << 0x18U)) | 
                      (0xffffffU & VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (((1U 
                                                             & (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                        >> 0x24U)))
                                                             ? (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                        >> 0x18U))
                                                             : (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                        >> 0x18U))) 
                                                           >> 0xcU))))));
    __Vtemp253[3U] = ((0xffffffU & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x24U)))
                                                              ? (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x18U))
                                                              : (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x18U))) 
                                                            >> 0xcU)))) 
                                    >> 8U)) | (0xff000000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x24U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x18U))
                                                                            : (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x18U))) 
                                                                          >> 0xcU)))) 
                                                  << 0x18U)));
    __Vtemp253[4U] = ((0xffffffU & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x24U)))
                                                              ? (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x18U))
                                                              : (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x18U))) 
                                                            >> 0xcU)))) 
                                    >> 8U)) | (0x1000000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x24U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x18U))
                                                                            : (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x18U))) 
                                                                          >> 0xcU)))) 
                                                  << 0x18U)));
    VL_MUL_W(5, __Vtemp254, __Vtemp248, __Vtemp253);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_365[0U] 
        = __Vtemp254[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_365[1U] 
        = __Vtemp254[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_365[2U] 
        = ((0x10000U & (__Vtemp244[4U] >> 8U)) | (0xffffU 
                                                  & __Vtemp254[2U]));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
        = (VL_ULL(0xfffffffff) & ((1U & (IData)((vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_167 
                                                 >> 0x31U)))
                                   ? (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_167 
                                      >> 0xeU) : (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_167 
                                                  >> 0xeU)));
    __Vtemp260[0U] = 0x36f9bU;
    __Vtemp260[1U] = 0U;
    __Vtemp260[2U] = 0U;
    __Vtemp260[3U] = 0U;
    __Vtemp260[4U] = 0U;
    __Vtemp265[0U] = (IData)(((QData)((IData)((0x1fffU 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                              >> 0x23U)))
                                                   ? (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                              >> 0x17U))
                                                   : (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                              >> 0x17U)))))) 
                              << 0x33U));
    __Vtemp265[1U] = (IData)((((QData)((IData)((0x1fffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                               >> 0x23U)))
                                                    ? (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                               >> 0x17U))
                                                    : (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                               >> 0x17U)))))) 
                               << 0x33U) >> 0x20U));
    __Vtemp265[2U] = ((0xff800000U & (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (((1U 
                                                                & (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                           >> 0x23U)))
                                                                ? (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                           >> 0x17U))
                                                                : (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                           >> 0x17U))) 
                                                              >> 0xcU)))) 
                                      << 0x17U)) | 
                      (0x7fffffU & VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (((1U 
                                                             & (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                        >> 0x23U)))
                                                             ? (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                        >> 0x17U))
                                                             : (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                        >> 0x17U))) 
                                                           >> 0xcU))))));
    __Vtemp265[3U] = ((0x7fffffU & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x23U)))
                                                              ? (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x17U))
                                                              : (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x17U))) 
                                                            >> 0xcU)))) 
                                    >> 9U)) | (0xff800000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x23U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x17U))
                                                                            : (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x17U))) 
                                                                          >> 0xcU)))) 
                                                  << 0x17U)));
    __Vtemp265[4U] = ((0x7fffffU & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x23U)))
                                                              ? (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x17U))
                                                              : (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x17U))) 
                                                            >> 0xcU)))) 
                                    >> 9U)) | (0x800000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x23U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x17U))
                                                                            : (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x17U))) 
                                                                          >> 0xcU)))) 
                                                  << 0x17U)));
    VL_MUL_W(5, __Vtemp266, __Vtemp260, __Vtemp265);
    __Vtemp270[0U] = 0x36f9bU;
    __Vtemp270[1U] = 0U;
    __Vtemp270[2U] = 0U;
    __Vtemp270[3U] = 0U;
    __Vtemp270[4U] = 0U;
    __Vtemp275[0U] = (IData)(((QData)((IData)((0x1fffU 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                              >> 0x23U)))
                                                   ? (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                              >> 0x17U))
                                                   : (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                              >> 0x17U)))))) 
                              << 0x33U));
    __Vtemp275[1U] = (IData)((((QData)((IData)((0x1fffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                               >> 0x23U)))
                                                    ? (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                               >> 0x17U))
                                                    : (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                               >> 0x17U)))))) 
                               << 0x33U) >> 0x20U));
    __Vtemp275[2U] = ((0xff800000U & (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (((1U 
                                                                & (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                           >> 0x23U)))
                                                                ? (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                           >> 0x17U))
                                                                : (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                           >> 0x17U))) 
                                                              >> 0xcU)))) 
                                      << 0x17U)) | 
                      (0x7fffffU & VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (((1U 
                                                             & (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                        >> 0x23U)))
                                                             ? (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                        >> 0x17U))
                                                             : (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                        >> 0x17U))) 
                                                           >> 0xcU))))));
    __Vtemp275[3U] = ((0x7fffffU & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x23U)))
                                                              ? (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x17U))
                                                              : (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x17U))) 
                                                            >> 0xcU)))) 
                                    >> 9U)) | (0xff800000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x23U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x17U))
                                                                            : (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x17U))) 
                                                                          >> 0xcU)))) 
                                                  << 0x17U)));
    __Vtemp275[4U] = ((0x7fffffU & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x23U)))
                                                              ? (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x17U))
                                                              : (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x17U))) 
                                                            >> 0xcU)))) 
                                    >> 9U)) | (0x800000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x23U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x17U))
                                                                            : (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x17U))) 
                                                                          >> 0xcU)))) 
                                                  << 0x17U)));
    VL_MUL_W(5, __Vtemp276, __Vtemp270, __Vtemp275);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_191[0U] 
        = __Vtemp276[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_191[1U] 
        = __Vtemp276[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_191[2U] 
        = ((0x20000U & (__Vtemp266[4U] >> 6U)) | (0x1ffffU 
                                                  & __Vtemp276[2U]));
}

VL_INLINE_OPT void Vsar_adc__N_BITS_10::_sequent__TOP__4(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsar_adc__N_BITS_10::_sequent__TOP__4\n"); );
    Vsar_adc__N_BITS_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_output_digital = 0U;
    } else {
        if (vlTOPp->sys_clk) {
            vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_output_digital 
                = (0xd3U < (0x3ffU & ((0U == vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm)
                                       ? (0x1ffU & 
                                          (((1U & (IData)(
                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                                                           >> 0x22U)))
                                             ? (IData)(
                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                                                        >> 0x14U))
                                             : (IData)(
                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                                                        >> 0x14U))) 
                                           >> 3U)) : 
                                      (0x1ffU & (((1U 
                                                   & (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                                                              >> 0x22U)))
                                                   ? (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                                                              >> 0x14U))
                                                   : (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                                                              >> 0x14U))) 
                                                 >> 3U)))));
        }
    }
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm 
        = vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm;
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
        = vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o;
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157 
        = (0x7fffU & ((1U & (IData)((vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                                     >> 0x22U))) ? (IData)(
                                                           (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                                                            >> 0x14U))
                       : (IData)((vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o 
                                  >> 0x14U))));
}

VL_INLINE_OPT void Vsar_adc__N_BITS_10::_multiclk__TOP__5(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsar_adc__N_BITS_10::_multiclk__TOP__5\n"); );
    Vsar_adc__N_BITS_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp283[3];
    WData/*95:0*/ __Vtemp284[3];
    WData/*95:0*/ __Vtemp285[3];
    WData/*95:0*/ __Vtemp290[3];
    WData/*95:0*/ __Vtemp291[3];
    WData/*95:0*/ __Vtemp292[3];
    WData/*159:0*/ __Vtemp294[5];
    WData/*95:0*/ __Vtemp296[3];
    WData/*95:0*/ __Vtemp297[3];
    WData/*95:0*/ __Vtemp298[3];
    WData/*95:0*/ __Vtemp301[3];
    WData/*95:0*/ __Vtemp302[3];
    WData/*95:0*/ __Vtemp303[3];
    WData/*95:0*/ __Vtemp305[3];
    WData/*159:0*/ __Vtemp310[5];
    WData/*159:0*/ __Vtemp311[5];
    WData/*95:0*/ __Vtemp314[3];
    WData/*95:0*/ __Vtemp315[3];
    WData/*159:0*/ __Vtemp320[5];
    WData/*159:0*/ __Vtemp325[5];
    WData/*159:0*/ __Vtemp326[5];
    WData/*159:0*/ __Vtemp330[5];
    WData/*159:0*/ __Vtemp335[5];
    WData/*159:0*/ __Vtemp336[5];
    WData/*159:0*/ __Vtemp342[5];
    WData/*159:0*/ __Vtemp347[5];
    WData/*159:0*/ __Vtemp348[5];
    WData/*159:0*/ __Vtemp352[5];
    WData/*159:0*/ __Vtemp357[5];
    WData/*159:0*/ __Vtemp358[5];
    // Body
    __Vtemp283[0U] = 0x46bU;
    __Vtemp283[1U] = 0U;
    __Vtemp283[2U] = 0U;
    VL_EXTEND_WQ(94,47, __Vtemp284, ((QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(
                                                                (VL_ULL(0xffffffff) 
                                                                 & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                    >> 0x11U)))))) 
                                     << 0x26U));
    VL_MUL_W(3, __Vtemp285, __Vtemp283, __Vtemp284);
    __Vtemp290[0U] = 0x46bU;
    __Vtemp290[1U] = 0U;
    __Vtemp290[2U] = 0U;
    VL_EXTEND_WQ(94,47, __Vtemp291, ((QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(
                                                                (VL_ULL(0xffffffff) 
                                                                 & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 
                                                                    >> 0x11U)))))) 
                                     << 0x26U));
    VL_MUL_W(3, __Vtemp292, __Vtemp290, __Vtemp291);
    __Vtemp294[1U] = (IData)(((VL_ULL(0x7fffffffc0000000) 
                               & (VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                             (VL_ULL(0x3ffffffffffc000) 
                                              & ((VL_ULL(0x17e4) 
                                                  + 
                                                  ((VL_ULL(0xffffffffff8) 
                                                    & (((QData)((IData)(
                                                                        (0x3fffffffU 
                                                                         & __Vtemp292[2U]))) 
                                                        << 0x15U) 
                                                       | (VL_ULL(0x1ffffffffffff8) 
                                                          & ((QData)((IData)(
                                                                             __Vtemp292[1U])) 
                                                             >> 0xbU)))) 
                                                   + 
                                                   (VL_ULL(0x7fffffffffff) 
                                                    & ((0x80000000U 
                                                        & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[2U])
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[2U])) 
                                                         << 0xfU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[1U])) 
                                                           >> 0x11U))
                                                        : 
                                                       (((QData)((IData)(
                                                                         vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[2U])) 
                                                         << 0xfU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[1U])) 
                                                           >> 0x11U)))))) 
                                                 << 0xeU))) 
                                  << 0x1eU)) >> 0x20U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_336[0U] 
        = (IData)((VL_ULL(0x7fffffffc0000000) & (VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                                            (VL_ULL(0x3ffffffffffc000) 
                                                             & ((VL_ULL(0x17e4) 
                                                                 + 
                                                                 ((VL_ULL(0xffffffffff8) 
                                                                   & (((QData)((IData)(
                                                                                (0x3fffffffU 
                                                                                & __Vtemp292[2U]))) 
                                                                       << 0x15U) 
                                                                      | (VL_ULL(0x1ffffffffffff8) 
                                                                         & ((QData)((IData)(
                                                                                __Vtemp292[1U])) 
                                                                            >> 0xbU)))) 
                                                                  + 
                                                                  (VL_ULL(0x7fffffffffff) 
                                                                   & ((0x80000000U 
                                                                       & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[2U])
                                                                       ? 
                                                                      (((QData)((IData)(
                                                                                vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[2U])) 
                                                                        << 0xfU) 
                                                                       | ((QData)((IData)(
                                                                                vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[1U])) 
                                                                          >> 0x11U))
                                                                       : 
                                                                      (((QData)((IData)(
                                                                                vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[2U])) 
                                                                        << 0xfU) 
                                                                       | ((QData)((IData)(
                                                                                vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307[1U])) 
                                                                          >> 0x11U)))))) 
                                                                << 0xeU))) 
                                                 << 0x1eU)));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_336[1U] 
        = __Vtemp294[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_336[2U] = 0U;
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_336[3U] = 0U;
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_336[4U] = 0U;
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 
        = (VL_ULL(0xffffffffffff) & (VL_ULL(0x5050) 
                                     + (((2U & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[3U])
                                          ? (((QData)((IData)(
                                                              vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[3U])) 
                                              << 0x2eU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[2U])) 
                                                 << 0xeU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[1U])) 
                                                   >> 0x12U)))
                                          : (((QData)((IData)(
                                                              vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[3U])) 
                                              << 0x2eU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[2U])) 
                                                 << 0xeU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40[1U])) 
                                                   >> 0x12U)))) 
                                        + (VL_ULL(0xfffffffffffc) 
                                           & (((0x20000000U 
                                                & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[2U])
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[2U])) 
                                                    << 0x10U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[1U])) 
                                                      >> 0x10U))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[2U])) 
                                                    << 0x10U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58[1U])) 
                                                      >> 0x10U))) 
                                              << 2U)))));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 
        = (VL_ULL(0x7fffffffffff) & (VL_ULL(0x1284) 
                                     + (((2U & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[3U])
                                          ? (((QData)((IData)(
                                                              vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[3U])) 
                                              << 0x2dU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[2U])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[1U])) 
                                                   >> 0x13U)))
                                          : (((QData)((IData)(
                                                              vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[3U])) 
                                              << 0x2dU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[2U])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218[1U])) 
                                                   >> 0x13U)))) 
                                        + (VL_ULL(0x7ffffffffffe) 
                                           & (((0x20000000U 
                                                & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[2U])
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[2U])) 
                                                    << 0x10U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[1U])) 
                                                      >> 0x10U))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[2U])) 
                                                    << 0x10U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236[1U])) 
                                                      >> 0x10U))) 
                                              << 1U)))));
    __Vtemp296[0U] = 0x40dU;
    __Vtemp296[1U] = 0U;
    __Vtemp296[2U] = 0U;
    VL_EXTEND_WQ(92,46, __Vtemp297, ((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                     << 0x24U));
    VL_MUL_W(3, __Vtemp298, __Vtemp296, __Vtemp297);
    __Vtemp301[0U] = 0x40dU;
    __Vtemp301[1U] = 0U;
    __Vtemp301[2U] = 0U;
    VL_EXTEND_WQ(92,46, __Vtemp302, ((QData)((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                                     << 0x24U));
    VL_MUL_W(3, __Vtemp303, __Vtemp301, __Vtemp302);
    __Vtemp305[1U] = (IData)(((VL_ULL(0xffffffff80) 
                               & (VL_DIV_QQQ(52, VL_ULL(0x8000000000000), 
                                             (VL_ULL(0x3fffffffffc00) 
                                              & ((VL_ULL(0x412) 
                                                  + 
                                                  ((VL_ULL(0xfffffffffe) 
                                                    & (((0x800000U 
                                                         & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[2U])
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[2U])) 
                                                          << 0x12U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[1U])) 
                                                            >> 0xeU))
                                                         : 
                                                        (((QData)((IData)(
                                                                          vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[2U])) 
                                                          << 0x12U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[1U])) 
                                                            >> 0xeU))) 
                                                       << 1U)) 
                                                   + 
                                                   (VL_ULL(0x1ffffffffff) 
                                                    & (((QData)((IData)(
                                                                        (0xfffffffU 
                                                                         & __Vtemp303[2U]))) 
                                                        << 0x13U) 
                                                       | ((QData)((IData)(
                                                                          __Vtemp303[1U])) 
                                                          >> 0xdU))))) 
                                                 << 0xaU))) 
                                  << 7U)) >> 0x20U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_160[0U] 
        = (IData)((VL_ULL(0xffffffff80) & (VL_DIV_QQQ(52, VL_ULL(0x8000000000000), 
                                                      (VL_ULL(0x3fffffffffc00) 
                                                       & ((VL_ULL(0x412) 
                                                           + 
                                                           ((VL_ULL(0xfffffffffe) 
                                                             & (((0x800000U 
                                                                  & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[2U])
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[2U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[1U])) 
                                                                     >> 0xeU))
                                                                  : 
                                                                 (((QData)((IData)(
                                                                                vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[2U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112[1U])) 
                                                                     >> 0xeU))) 
                                                                << 1U)) 
                                                            + 
                                                            (VL_ULL(0x1ffffffffff) 
                                                             & (((QData)((IData)(
                                                                                (0xfffffffU 
                                                                                & __Vtemp303[2U]))) 
                                                                 << 0x13U) 
                                                                | ((QData)((IData)(
                                                                                __Vtemp303[1U])) 
                                                                   >> 0xdU))))) 
                                                          << 0xaU))) 
                                           << 7U)));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_160[1U] 
        = __Vtemp305[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_160[2U] = 0U;
    __Vtemp310[0U] = (IData)((((QData)((IData)((0x1fffffffU 
                                                & VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (VL_ULL(1) 
                                                                                & ((VL_ULL(0xd3330000) 
                                                                                - vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o) 
                                                                                >> 0x22U))))))))) 
                               << 0x23U) | (VL_ULL(0x7ffffffff) 
                                            & (VL_ULL(0xd3330000) 
                                               - vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o))));
    __Vtemp310[1U] = (IData)(((((QData)((IData)((0x1fffffffU 
                                                 & VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (VL_ULL(1) 
                                                                                & ((VL_ULL(0xd3330000) 
                                                                                - vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o) 
                                                                                >> 0x22U))))))))) 
                                << 0x23U) | (VL_ULL(0x7ffffffff) 
                                             & (VL_ULL(0xd3330000) 
                                                - vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o))) 
                              >> 0x20U));
    __Vtemp310[2U] = VL_NEGATE_I((IData)((1U & (IData)(
                                                       (VL_ULL(1) 
                                                        & ((VL_ULL(0xd3330000) 
                                                            - vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o) 
                                                           >> 0x22U))))));
    __Vtemp310[3U] = VL_NEGATE_I((IData)((1U & (IData)(
                                                       (VL_ULL(1) 
                                                        & ((VL_ULL(0xd3330000) 
                                                            - vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o) 
                                                           >> 0x22U))))));
    __Vtemp310[4U] = (1U & VL_NEGATE_I((IData)((1U 
                                                & (IData)(
                                                          (VL_ULL(1) 
                                                           & ((VL_ULL(0xd3330000) 
                                                               - vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o) 
                                                              >> 0x22U)))))));
    VL_MUL_W(5, __Vtemp311, __Vtemp310, vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_336);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[0U] 
        = __Vtemp311[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[1U] 
        = __Vtemp311[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[2U] 
        = __Vtemp311[2U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[3U] 
        = __Vtemp311[3U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[4U] 
        = (1U & __Vtemp311[4U]);
    __Vtemp314[0U] = (IData)((((QData)((IData)((0x1fffffffU 
                                                & VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (VL_NEGATE_I(
                                                                                ((0x4000U 
                                                                                & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U))) 
                                                                          >> 0xbU))))))) 
                               << 0xcU) | (QData)((IData)(
                                                          (0xfffU 
                                                           & VL_NEGATE_I(
                                                                         ((0x4000U 
                                                                           & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157))
                                                                           ? 
                                                                          ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                           >> 3U)
                                                                           : 
                                                                          ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                           >> 3U))))))));
    __Vtemp314[1U] = ((0xfffffe00U & ((IData)((VL_ULL(0x3ffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & (VL_NEGATE_I(
                                                                                ((0x4000U 
                                                                                & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U))) 
                                                                                >> 0xbU))))))) 
                                      << 9U)) | (IData)(
                                                        ((((QData)((IData)(
                                                                           (0x1fffffffU 
                                                                            & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (VL_NEGATE_I(
                                                                                ((0x4000U 
                                                                                & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U))) 
                                                                                >> 0xbU))))))) 
                                                           << 0xcU) 
                                                          | (QData)((IData)(
                                                                            (0xfffU 
                                                                             & VL_NEGATE_I(
                                                                                ((0x4000U 
                                                                                & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U))))))) 
                                                         >> 0x20U)));
    __Vtemp314[2U] = ((0x1ffU & ((IData)((VL_ULL(0x3ffffffffff) 
                                          & VL_NEGATE_Q((QData)((IData)(
                                                                        (1U 
                                                                         & (VL_NEGATE_I(
                                                                                ((0x4000U 
                                                                                & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U))) 
                                                                            >> 0xbU))))))) 
                                 >> 0x17U)) | (0xfffffe00U 
                                               & ((IData)(
                                                          ((VL_ULL(0x3ffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (VL_NEGATE_I(
                                                                                ((0x4000U 
                                                                                & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157) 
                                                                                >> 3U))) 
                                                                                >> 0xbU)))))) 
                                                           >> 0x20U)) 
                                                  << 9U)));
    VL_MUL_W(3, __Vtemp315, __Vtemp314, vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_160);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_148[0U] 
        = __Vtemp315[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_148[1U] 
        = __Vtemp315[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_148[2U] 
        = (0x7ffffU & __Vtemp315[2U]);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[0U] 
        = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[1U] 
        = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[2U] 
        = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[2U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[3U] 
        = (1U & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324[4U]);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_167 
        = (((QData)((IData)((1U & (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_148[2U] 
                                   >> 0x12U)))) << 0x31U) 
           | (VL_ULL(0x1ffffffffffff) & (((QData)((IData)(
                                                          vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_148[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_148[0U])))));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
        = (VL_ULL(0x1fffffffff) & ((1U & vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[3U])
                                    ? (((QData)((IData)(
                                                        vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[3U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[2U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[1U])) 
                                                   >> 0x1cU)))
                                    : (((QData)((IData)(
                                                        vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[3U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[2U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343[1U])) 
                                                   >> 0x1cU)))));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
        = (VL_ULL(0xfffffffff) & ((1U & (IData)((vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_167 
                                                 >> 0x31U)))
                                   ? (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_167 
                                      >> 0xeU) : (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_167 
                                                  >> 0xeU)));
    __Vtemp320[0U] = 0x36f9bU;
    __Vtemp320[1U] = 0U;
    __Vtemp320[2U] = 0U;
    __Vtemp320[3U] = 0U;
    __Vtemp320[4U] = 0U;
    __Vtemp325[0U] = (IData)(((QData)((IData)((0x1fffU 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                              >> 0x24U)))
                                                   ? (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                              >> 0x18U))
                                                   : (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                              >> 0x18U)))))) 
                              << 0x33U));
    __Vtemp325[1U] = (IData)((((QData)((IData)((0x1fffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                               >> 0x24U)))
                                                    ? (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                               >> 0x18U))
                                                    : (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                               >> 0x18U)))))) 
                               << 0x33U) >> 0x20U));
    __Vtemp325[2U] = ((0xff000000U & (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (((1U 
                                                                & (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                           >> 0x24U)))
                                                                ? (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                           >> 0x18U))
                                                                : (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                           >> 0x18U))) 
                                                              >> 0xcU)))) 
                                      << 0x18U)) | 
                      (0xffffffU & VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (((1U 
                                                             & (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                        >> 0x24U)))
                                                             ? (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                        >> 0x18U))
                                                             : (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                        >> 0x18U))) 
                                                           >> 0xcU))))));
    __Vtemp325[3U] = ((0xffffffU & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x24U)))
                                                              ? (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x18U))
                                                              : (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x18U))) 
                                                            >> 0xcU)))) 
                                    >> 8U)) | (0xff000000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x24U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x18U))
                                                                            : (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x18U))) 
                                                                          >> 0xcU)))) 
                                                  << 0x18U)));
    __Vtemp325[4U] = ((0xffffffU & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x24U)))
                                                              ? (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x18U))
                                                              : (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x18U))) 
                                                            >> 0xcU)))) 
                                    >> 8U)) | (0x1000000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x24U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x18U))
                                                                            : (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x18U))) 
                                                                          >> 0xcU)))) 
                                                  << 0x18U)));
    VL_MUL_W(5, __Vtemp326, __Vtemp320, __Vtemp325);
    __Vtemp330[0U] = 0x36f9bU;
    __Vtemp330[1U] = 0U;
    __Vtemp330[2U] = 0U;
    __Vtemp330[3U] = 0U;
    __Vtemp330[4U] = 0U;
    __Vtemp335[0U] = (IData)(((QData)((IData)((0x1fffU 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                              >> 0x24U)))
                                                   ? (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                              >> 0x18U))
                                                   : (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                              >> 0x18U)))))) 
                              << 0x33U));
    __Vtemp335[1U] = (IData)((((QData)((IData)((0x1fffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                               >> 0x24U)))
                                                    ? (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                               >> 0x18U))
                                                    : (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                               >> 0x18U)))))) 
                               << 0x33U) >> 0x20U));
    __Vtemp335[2U] = ((0xff000000U & (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (((1U 
                                                                & (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                           >> 0x24U)))
                                                                ? (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                           >> 0x18U))
                                                                : (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                           >> 0x18U))) 
                                                              >> 0xcU)))) 
                                      << 0x18U)) | 
                      (0xffffffU & VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (((1U 
                                                             & (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                        >> 0x24U)))
                                                             ? (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                        >> 0x18U))
                                                             : (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                        >> 0x18U))) 
                                                           >> 0xcU))))));
    __Vtemp335[3U] = ((0xffffffU & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x24U)))
                                                              ? (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x18U))
                                                              : (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x18U))) 
                                                            >> 0xcU)))) 
                                    >> 8U)) | (0xff000000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x24U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x18U))
                                                                            : (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x18U))) 
                                                                          >> 0xcU)))) 
                                                  << 0x18U)));
    __Vtemp335[4U] = ((0xffffffU & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x24U)))
                                                              ? (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x18U))
                                                              : (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                         >> 0x18U))) 
                                                            >> 0xcU)))) 
                                    >> 8U)) | (0x1000000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x24U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x18U))
                                                                            : (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 
                                                                                >> 0x18U))) 
                                                                          >> 0xcU)))) 
                                                  << 0x18U)));
    VL_MUL_W(5, __Vtemp336, __Vtemp330, __Vtemp335);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_365[0U] 
        = __Vtemp336[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_365[1U] 
        = __Vtemp336[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_365[2U] 
        = ((0x10000U & (__Vtemp326[4U] >> 8U)) | (0xffffU 
                                                  & __Vtemp336[2U]));
    __Vtemp342[0U] = 0x36f9bU;
    __Vtemp342[1U] = 0U;
    __Vtemp342[2U] = 0U;
    __Vtemp342[3U] = 0U;
    __Vtemp342[4U] = 0U;
    __Vtemp347[0U] = (IData)(((QData)((IData)((0x1fffU 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                              >> 0x23U)))
                                                   ? (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                              >> 0x17U))
                                                   : (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                              >> 0x17U)))))) 
                              << 0x33U));
    __Vtemp347[1U] = (IData)((((QData)((IData)((0x1fffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                               >> 0x23U)))
                                                    ? (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                               >> 0x17U))
                                                    : (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                               >> 0x17U)))))) 
                               << 0x33U) >> 0x20U));
    __Vtemp347[2U] = ((0xff800000U & (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (((1U 
                                                                & (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                           >> 0x23U)))
                                                                ? (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                           >> 0x17U))
                                                                : (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                           >> 0x17U))) 
                                                              >> 0xcU)))) 
                                      << 0x17U)) | 
                      (0x7fffffU & VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (((1U 
                                                             & (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                        >> 0x23U)))
                                                             ? (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                        >> 0x17U))
                                                             : (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                        >> 0x17U))) 
                                                           >> 0xcU))))));
    __Vtemp347[3U] = ((0x7fffffU & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x23U)))
                                                              ? (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x17U))
                                                              : (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x17U))) 
                                                            >> 0xcU)))) 
                                    >> 9U)) | (0xff800000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x23U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x17U))
                                                                            : (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x17U))) 
                                                                          >> 0xcU)))) 
                                                  << 0x17U)));
    __Vtemp347[4U] = ((0x7fffffU & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x23U)))
                                                              ? (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x17U))
                                                              : (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x17U))) 
                                                            >> 0xcU)))) 
                                    >> 9U)) | (0x800000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x23U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x17U))
                                                                            : (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x17U))) 
                                                                          >> 0xcU)))) 
                                                  << 0x17U)));
    VL_MUL_W(5, __Vtemp348, __Vtemp342, __Vtemp347);
    __Vtemp352[0U] = 0x36f9bU;
    __Vtemp352[1U] = 0U;
    __Vtemp352[2U] = 0U;
    __Vtemp352[3U] = 0U;
    __Vtemp352[4U] = 0U;
    __Vtemp357[0U] = (IData)(((QData)((IData)((0x1fffU 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                              >> 0x23U)))
                                                   ? (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                              >> 0x17U))
                                                   : (IData)(
                                                             (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                              >> 0x17U)))))) 
                              << 0x33U));
    __Vtemp357[1U] = (IData)((((QData)((IData)((0x1fffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                               >> 0x23U)))
                                                    ? (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                               >> 0x17U))
                                                    : (IData)(
                                                              (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                               >> 0x17U)))))) 
                               << 0x33U) >> 0x20U));
    __Vtemp357[2U] = ((0xff800000U & (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (((1U 
                                                                & (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                           >> 0x23U)))
                                                                ? (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                           >> 0x17U))
                                                                : (IData)(
                                                                          (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                           >> 0x17U))) 
                                                              >> 0xcU)))) 
                                      << 0x17U)) | 
                      (0x7fffffU & VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (((1U 
                                                             & (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                        >> 0x23U)))
                                                             ? (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                        >> 0x17U))
                                                             : (IData)(
                                                                       (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                        >> 0x17U))) 
                                                           >> 0xcU))))));
    __Vtemp357[3U] = ((0x7fffffU & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x23U)))
                                                              ? (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x17U))
                                                              : (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x17U))) 
                                                            >> 0xcU)))) 
                                    >> 9U)) | (0xff800000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x23U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x17U))
                                                                            : (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x17U))) 
                                                                          >> 0xcU)))) 
                                                  << 0x17U)));
    __Vtemp357[4U] = ((0x7fffffU & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x23U)))
                                                              ? (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x17U))
                                                              : (IData)(
                                                                        (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                         >> 0x17U))) 
                                                            >> 0xcU)))) 
                                    >> 9U)) | (0x800000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x23U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x17U))
                                                                            : (IData)(
                                                                                (vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 
                                                                                >> 0x17U))) 
                                                                          >> 0xcU)))) 
                                                  << 0x17U)));
    VL_MUL_W(5, __Vtemp358, __Vtemp352, __Vtemp357);
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_191[0U] 
        = __Vtemp358[0U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_191[1U] 
        = __Vtemp358[1U];
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_191[2U] 
        = ((0x20000U & (__Vtemp348[4U] >> 6U)) | (0x1ffffU 
                                                  & __Vtemp358[2U]));
}

void Vsar_adc__N_BITS_10::_eval(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsar_adc__N_BITS_10::_eval\n"); );
    Vsar_adc__N_BITS_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if (((IData)(vlTOPp->sys_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__sys_clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->sys_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__sys_clk))))) {
        vlTOPp->_multiclk__TOP__5(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__sys_clk = vlTOPp->sys_clk;
}

void Vsar_adc__N_BITS_10::_eval_initial(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsar_adc__N_BITS_10::_eval_initial\n"); );
    Vsar_adc__N_BITS_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__sys_clk = vlTOPp->sys_clk;
}

void Vsar_adc__N_BITS_10::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsar_adc__N_BITS_10::final\n"); );
    // Variables
    Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vsar_adc__N_BITS_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsar_adc__N_BITS_10::_eval_settle(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsar_adc__N_BITS_10::_eval_settle\n"); );
    Vsar_adc__N_BITS_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

VL_INLINE_OPT QData Vsar_adc__N_BITS_10::_change_request(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsar_adc__N_BITS_10::_change_request\n"); );
    Vsar_adc__N_BITS_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vsar_adc__N_BITS_10::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsar_adc__N_BITS_10::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((input_hold_digital & 0xfeU))) {
        Verilated::overWidthError("input_hold_digital");}
    if (VL_UNLIKELY((input_voltage_real & 0xfc00U))) {
        Verilated::overWidthError("input_voltage_real");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((sys_clk & 0xfeU))) {
        Verilated::overWidthError("sys_clk");}
}
#endif  // VL_DEBUG

void Vsar_adc__N_BITS_10::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsar_adc__N_BITS_10::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    eoc = VL_RAND_RESET_I(1);
    input_hold_digital = VL_RAND_RESET_I(1);
    input_voltage_real = VL_RAND_RESET_I(10);
    output_result_digital = VL_RAND_RESET_I(10);
    reset = VL_RAND_RESET_I(1);
    sys_clk = VL_RAND_RESET_I(1);
    sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_output_digital = VL_RAND_RESET_I(1);
    sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap = VL_RAND_RESET_I(10);
    sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm = VL_RAND_RESET_I(32);
    sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter = VL_RAND_RESET_I(5);
    sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register = VL_RAND_RESET_I(10);
    sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    sar_adc___05FN_BITS_10__DOT__v__DOT__DAC_instance__DOT__padl_6 = VL_RAND_RESET_Q(52);
    sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__state_cycle_counter = VL_RAND_RESET_I(17);
    sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__prev_sys_clk = VL_RAND_RESET_I(1);
    sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o = VL_RAND_RESET_Q(35);
    sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm = VL_RAND_RESET_I(32);
    sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_26 = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(98, sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_40);
    VL_RAND_RESET_W(94, sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_58);
    VL_RAND_RESET_W(88, sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_112);
    VL_RAND_RESET_W(83, sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_148);
    sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_157 = VL_RAND_RESET_I(15);
    VL_RAND_RESET_W(83, sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_160);
    sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_167 = VL_RAND_RESET_Q(50);
    sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_169 = VL_RAND_RESET_Q(36);
    VL_RAND_RESET_W(82, sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_191);
    sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_bits_204 = VL_RAND_RESET_Q(47);
    VL_RAND_RESET_W(98, sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_218);
    VL_RAND_RESET_W(94, sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_236);
    VL_RAND_RESET_W(96, sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_307);
    VL_RAND_RESET_W(129, sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_324);
    VL_RAND_RESET_W(129, sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__padl_336);
    VL_RAND_RESET_W(97, sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_343);
    sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncR_imm_345 = VL_RAND_RESET_Q(37);
    VL_RAND_RESET_W(81, sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__truncval_imm_365);
    __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm = VL_RAND_RESET_I(32);
    __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__o = VL_RAND_RESET_Q(35);
}
