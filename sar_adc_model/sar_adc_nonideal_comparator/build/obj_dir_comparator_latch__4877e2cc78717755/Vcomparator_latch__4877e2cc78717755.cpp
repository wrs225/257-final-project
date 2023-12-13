// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomparator_latch__4877e2cc78717755.h for the primary calling header

#include "Vcomparator_latch__4877e2cc78717755.h"
#include "Vcomparator_latch__4877e2cc78717755__Syms.h"

//==========

VL_CTOR_IMP(Vcomparator_latch__4877e2cc78717755) {
    Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp = __VlSymsp = new Vcomparator_latch__4877e2cc78717755__Syms(this, name());
    Vcomparator_latch__4877e2cc78717755* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vcomparator_latch__4877e2cc78717755::__Vconfigure(Vcomparator_latch__4877e2cc78717755__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcomparator_latch__4877e2cc78717755::~Vcomparator_latch__4877e2cc78717755() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vcomparator_latch__4877e2cc78717755::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcomparator_latch__4877e2cc78717755::eval\n"); );
    Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vcomparator_latch__4877e2cc78717755* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("./comparator_latch.v", 880, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcomparator_latch__4877e2cc78717755::_eval_initial_loop(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
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
            VL_FATAL_MT("./comparator_latch.v", 880, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vcomparator_latch__4877e2cc78717755::_combo__TOP__1(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_latch__4877e2cc78717755::_combo__TOP__1\n"); );
    Vcomparator_latch__4877e2cc78717755* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp2[4];
    WData/*127:0*/ __Vtemp3[4];
    WData/*127:0*/ __Vtemp4[4];
    WData/*127:0*/ __Vtemp8[4];
    WData/*127:0*/ __Vtemp9[4];
    WData/*127:0*/ __Vtemp10[4];
    WData/*127:0*/ __Vtemp16[4];
    WData/*127:0*/ __Vtemp17[4];
    WData/*127:0*/ __Vtemp18[4];
    WData/*127:0*/ __Vtemp22[4];
    WData/*127:0*/ __Vtemp23[4];
    WData/*127:0*/ __Vtemp24[4];
    WData/*127:0*/ __Vtemp30[4];
    WData/*127:0*/ __Vtemp31[4];
    WData/*127:0*/ __Vtemp32[4];
    WData/*127:0*/ __Vtemp36[4];
    WData/*127:0*/ __Vtemp37[4];
    WData/*127:0*/ __Vtemp38[4];
    WData/*127:0*/ __Vtemp44[4];
    WData/*127:0*/ __Vtemp45[4];
    WData/*127:0*/ __Vtemp46[4];
    WData/*127:0*/ __Vtemp50[4];
    WData/*127:0*/ __Vtemp51[4];
    WData/*127:0*/ __Vtemp52[4];
    WData/*95:0*/ __Vtemp58[3];
    WData/*95:0*/ __Vtemp59[3];
    WData/*95:0*/ __Vtemp60[3];
    WData/*95:0*/ __Vtemp64[3];
    WData/*95:0*/ __Vtemp65[3];
    WData/*95:0*/ __Vtemp66[3];
    WData/*127:0*/ __Vtemp72[4];
    WData/*127:0*/ __Vtemp73[4];
    WData/*127:0*/ __Vtemp74[4];
    WData/*127:0*/ __Vtemp78[4];
    WData/*127:0*/ __Vtemp79[4];
    WData/*127:0*/ __Vtemp80[4];
    WData/*95:0*/ __Vtemp87[3];
    WData/*95:0*/ __Vtemp88[3];
    WData/*95:0*/ __Vtemp89[3];
    WData/*95:0*/ __Vtemp94[3];
    WData/*95:0*/ __Vtemp95[3];
    WData/*95:0*/ __Vtemp96[3];
    WData/*95:0*/ __Vtemp98[3];
    // Body
    __Vtemp2[0U] = 0xfffffbf2U;
    __Vtemp2[1U] = 0xffffffffU;
    __Vtemp2[2U] = 0xffffffffU;
    __Vtemp2[3U] = 0x1ffU;
    __Vtemp3[0U] = 0U;
    __Vtemp3[1U] = (0xfffffe00U & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                             & (VL_NEGATE_Q((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                << 0xbU)) 
                                            | (QData)((IData)(vlTOPp->n)))) 
                                   << 9U));
    __Vtemp3[2U] = ((0x1ffU & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                         & (VL_NEGATE_Q((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlTOPp->n) 
                                                                            >> 0xaU))))) 
                                            << 0xbU)) 
                                        | (QData)((IData)(vlTOPp->n)))) 
                               >> 0x17U)) | (0xfffffe00U 
                                             & ((IData)(
                                                        (((VL_ULL(0xfffffffffffff800) 
                                                           & (VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                              << 0xbU)) 
                                                          | (QData)((IData)(vlTOPp->n))) 
                                                         >> 0x20U)) 
                                                << 9U)));
    __Vtemp3[3U] = (0x1ffU & ((IData)((((VL_ULL(0xfffffffffffff800) 
                                         & (VL_NEGATE_Q((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlTOPp->n) 
                                                                            >> 0xaU))))) 
                                            << 0xbU)) 
                                        | (QData)((IData)(vlTOPp->n))) 
                                       >> 0x20U)) >> 0x17U));
    VL_MUL_W(4, __Vtemp4, __Vtemp2, __Vtemp3);
    __Vtemp8[0U] = 0xfffffbf2U;
    __Vtemp8[1U] = 0xffffffffU;
    __Vtemp8[2U] = 0xffffffffU;
    __Vtemp8[3U] = 0x1ffU;
    __Vtemp9[0U] = 0U;
    __Vtemp9[1U] = (0xfffffe00U & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                             & (VL_NEGATE_Q((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                << 0xbU)) 
                                            | (QData)((IData)(vlTOPp->n)))) 
                                   << 9U));
    __Vtemp9[2U] = ((0x1ffU & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                         & (VL_NEGATE_Q((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlTOPp->n) 
                                                                            >> 0xaU))))) 
                                            << 0xbU)) 
                                        | (QData)((IData)(vlTOPp->n)))) 
                               >> 0x17U)) | (0xfffffe00U 
                                             & ((IData)(
                                                        (((VL_ULL(0xfffffffffffff800) 
                                                           & (VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                              << 0xbU)) 
                                                          | (QData)((IData)(vlTOPp->n))) 
                                                         >> 0x20U)) 
                                                << 9U)));
    __Vtemp9[3U] = (0x1ffU & ((IData)((((VL_ULL(0xfffffffffffff800) 
                                         & (VL_NEGATE_Q((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlTOPp->n) 
                                                                            >> 0xaU))))) 
                                            << 0xbU)) 
                                        | (QData)((IData)(vlTOPp->n))) 
                                       >> 0x20U)) >> 0x17U));
    VL_MUL_W(4, __Vtemp10, __Vtemp8, __Vtemp9);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[0U] 
        = __Vtemp10[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[1U] 
        = __Vtemp10[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[2U] 
        = __Vtemp10[2U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[3U] 
        = ((2U & (__Vtemp4[3U] >> 7U)) | (1U & __Vtemp10[3U]));
    __Vtemp16[0U] = 0xfffffc04U;
    __Vtemp16[1U] = 0xffffffffU;
    __Vtemp16[2U] = 0xffffffffU;
    __Vtemp16[3U] = 0x1fU;
    __Vtemp17[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                             << 0x27U));
    __Vtemp17[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                              & VL_NEGATE_Q((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                     << 0x12U)) | (IData)(
                                                          (((QData)((IData)(vlTOPp->p)) 
                                                            << 0x27U) 
                                                           >> 0x20U)));
    __Vtemp17[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->p) 
                                                                             >> 0xaU))))))) 
                                  >> 0xeU)) | (0xfffc0000U 
                                               & ((IData)(
                                                          ((VL_ULL(0x7ffffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                           >> 0x20U)) 
                                                  << 0x12U)));
    __Vtemp17[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->p) 
                                                                             >> 0xaU)))))) 
                                          >> 0x20U)) 
                                 >> 0xeU));
    VL_MUL_W(4, __Vtemp18, __Vtemp16, __Vtemp17);
    __Vtemp22[0U] = 0xfffffc04U;
    __Vtemp22[1U] = 0xffffffffU;
    __Vtemp22[2U] = 0xffffffffU;
    __Vtemp22[3U] = 0x1fU;
    __Vtemp23[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                             << 0x27U));
    __Vtemp23[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                              & VL_NEGATE_Q((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                     << 0x12U)) | (IData)(
                                                          (((QData)((IData)(vlTOPp->p)) 
                                                            << 0x27U) 
                                                           >> 0x20U)));
    __Vtemp23[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->p) 
                                                                             >> 0xaU))))))) 
                                  >> 0xeU)) | (0xfffc0000U 
                                               & ((IData)(
                                                          ((VL_ULL(0x7ffffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                           >> 0x20U)) 
                                                  << 0x12U)));
    __Vtemp23[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->p) 
                                                                             >> 0xaU)))))) 
                                          >> 0x20U)) 
                                 >> 0xeU));
    VL_MUL_W(4, __Vtemp24, __Vtemp22, __Vtemp23);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[0U] 
        = __Vtemp24[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[1U] 
        = __Vtemp24[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[2U] 
        = ((0x20000000U & (__Vtemp18[3U] << 0x19U)) 
           | (0x1fffffffU & __Vtemp24[2U]));
    __Vtemp30[0U] = 0xfffff928U;
    __Vtemp30[1U] = 0xffffffffU;
    __Vtemp30[2U] = 0xffffffffU;
    __Vtemp30[3U] = 0x1ffU;
    __Vtemp31[0U] = 0U;
    __Vtemp31[1U] = (0xfffffe00U & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                              & (VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                 << 0xbU)) 
                                             | (QData)((IData)(vlTOPp->n)))) 
                                    << 9U));
    __Vtemp31[2U] = ((0x1ffU & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                          & (VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->n) 
                                                                             >> 0xaU))))) 
                                             << 0xbU)) 
                                         | (QData)((IData)(vlTOPp->n)))) 
                                >> 0x17U)) | (0xfffffe00U 
                                              & ((IData)(
                                                         (((VL_ULL(0xfffffffffffff800) 
                                                            & (VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                               << 0xbU)) 
                                                           | (QData)((IData)(vlTOPp->n))) 
                                                          >> 0x20U)) 
                                                 << 9U)));
    __Vtemp31[3U] = (0x1ffU & ((IData)((((VL_ULL(0xfffffffffffff800) 
                                          & (VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->n) 
                                                                             >> 0xaU))))) 
                                             << 0xbU)) 
                                         | (QData)((IData)(vlTOPp->n))) 
                                        >> 0x20U)) 
                               >> 0x17U));
    VL_MUL_W(4, __Vtemp32, __Vtemp30, __Vtemp31);
    __Vtemp36[0U] = 0xfffff928U;
    __Vtemp36[1U] = 0xffffffffU;
    __Vtemp36[2U] = 0xffffffffU;
    __Vtemp36[3U] = 0x1ffU;
    __Vtemp37[0U] = 0U;
    __Vtemp37[1U] = (0xfffffe00U & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                              & (VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                 << 0xbU)) 
                                             | (QData)((IData)(vlTOPp->n)))) 
                                    << 9U));
    __Vtemp37[2U] = ((0x1ffU & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                          & (VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->n) 
                                                                             >> 0xaU))))) 
                                             << 0xbU)) 
                                         | (QData)((IData)(vlTOPp->n)))) 
                                >> 0x17U)) | (0xfffffe00U 
                                              & ((IData)(
                                                         (((VL_ULL(0xfffffffffffff800) 
                                                            & (VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                               << 0xbU)) 
                                                           | (QData)((IData)(vlTOPp->n))) 
                                                          >> 0x20U)) 
                                                 << 9U)));
    __Vtemp37[3U] = (0x1ffU & ((IData)((((VL_ULL(0xfffffffffffff800) 
                                          & (VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->n) 
                                                                             >> 0xaU))))) 
                                             << 0xbU)) 
                                         | (QData)((IData)(vlTOPp->n))) 
                                        >> 0x20U)) 
                               >> 0x17U));
    VL_MUL_W(4, __Vtemp38, __Vtemp36, __Vtemp37);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[0U] 
        = __Vtemp38[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[1U] 
        = __Vtemp38[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[2U] 
        = __Vtemp38[2U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[3U] 
        = ((2U & (__Vtemp32[3U] >> 7U)) | (1U & __Vtemp38[3U]));
    __Vtemp44[0U] = 0xfffffc12U;
    __Vtemp44[1U] = 0xffffffffU;
    __Vtemp44[2U] = 0xffffffffU;
    __Vtemp44[3U] = 0x1fU;
    __Vtemp45[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                             << 0x27U));
    __Vtemp45[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                              & VL_NEGATE_Q((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                     << 0x12U)) | (IData)(
                                                          (((QData)((IData)(vlTOPp->p)) 
                                                            << 0x27U) 
                                                           >> 0x20U)));
    __Vtemp45[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->p) 
                                                                             >> 0xaU))))))) 
                                  >> 0xeU)) | (0xfffc0000U 
                                               & ((IData)(
                                                          ((VL_ULL(0x7ffffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                           >> 0x20U)) 
                                                  << 0x12U)));
    __Vtemp45[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->p) 
                                                                             >> 0xaU)))))) 
                                          >> 0x20U)) 
                                 >> 0xeU));
    VL_MUL_W(4, __Vtemp46, __Vtemp44, __Vtemp45);
    __Vtemp50[0U] = 0xfffffc12U;
    __Vtemp50[1U] = 0xffffffffU;
    __Vtemp50[2U] = 0xffffffffU;
    __Vtemp50[3U] = 0x1fU;
    __Vtemp51[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                             << 0x27U));
    __Vtemp51[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                              & VL_NEGATE_Q((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                     << 0x12U)) | (IData)(
                                                          (((QData)((IData)(vlTOPp->p)) 
                                                            << 0x27U) 
                                                           >> 0x20U)));
    __Vtemp51[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->p) 
                                                                             >> 0xaU))))))) 
                                  >> 0xeU)) | (0xfffc0000U 
                                               & ((IData)(
                                                          ((VL_ULL(0x7ffffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                           >> 0x20U)) 
                                                  << 0x12U)));
    __Vtemp51[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->p) 
                                                                             >> 0xaU)))))) 
                                          >> 0x20U)) 
                                 >> 0xeU));
    VL_MUL_W(4, __Vtemp52, __Vtemp50, __Vtemp51);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[0U] 
        = __Vtemp52[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[1U] 
        = __Vtemp52[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[2U] 
        = ((0x20000000U & (__Vtemp46[3U] << 0x19U)) 
           | (0x1fffffffU & __Vtemp52[2U]));
    __Vtemp58[0U] = 0xfffffb20U;
    __Vtemp58[1U] = 0xffffffffU;
    __Vtemp58[2U] = 0x7fffffffU;
    __Vtemp59[0U] = (IData)(((QData)((IData)(vlTOPp->n)) 
                             << 0x24U));
    __Vtemp59[1U] = ((0xffff8000U & ((IData)((VL_ULL(0xffffffffffff) 
                                              & VL_NEGATE_Q((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))))) 
                                     << 0xfU)) | (IData)(
                                                         (((QData)((IData)(vlTOPp->n)) 
                                                           << 0x24U) 
                                                          >> 0x20U)));
    __Vtemp59[2U] = ((0x7fffU & ((IData)((VL_ULL(0xffffffffffff) 
                                          & VL_NEGATE_Q((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlTOPp->n) 
                                                                            >> 0xaU))))))) 
                                 >> 0x11U)) | (0xffff8000U 
                                               & ((IData)(
                                                          ((VL_ULL(0xffffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU)))))) 
                                                           >> 0x20U)) 
                                                  << 0xfU)));
    VL_MUL_W(3, __Vtemp60, __Vtemp58, __Vtemp59);
    __Vtemp64[0U] = 0xfffffb20U;
    __Vtemp64[1U] = 0xffffffffU;
    __Vtemp64[2U] = 0x7fffffffU;
    __Vtemp65[0U] = (IData)(((QData)((IData)(vlTOPp->n)) 
                             << 0x24U));
    __Vtemp65[1U] = ((0xffff8000U & ((IData)((VL_ULL(0xffffffffffff) 
                                              & VL_NEGATE_Q((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))))) 
                                     << 0xfU)) | (IData)(
                                                         (((QData)((IData)(vlTOPp->n)) 
                                                           << 0x24U) 
                                                          >> 0x20U)));
    __Vtemp65[2U] = ((0x7fffU & ((IData)((VL_ULL(0xffffffffffff) 
                                          & VL_NEGATE_Q((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlTOPp->n) 
                                                                            >> 0xaU))))))) 
                                 >> 0x11U)) | (0xffff8000U 
                                               & ((IData)(
                                                          ((VL_ULL(0xffffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU)))))) 
                                                           >> 0x20U)) 
                                                  << 0xfU)));
    VL_MUL_W(3, __Vtemp66, __Vtemp64, __Vtemp65);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[0U] 
        = __Vtemp66[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U] 
        = __Vtemp66[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U] 
        = ((0x800000U & (__Vtemp60[2U] >> 7U)) | (0x7fffffU 
                                                  & __Vtemp66[2U]));
    __Vtemp72[0U] = 0xfffffba5U;
    __Vtemp72[1U] = 0xffffffffU;
    __Vtemp72[2U] = 0xffffffffU;
    __Vtemp72[3U] = 0x7fU;
    __Vtemp73[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                             << 0x28U));
    __Vtemp73[1U] = ((0xfff80000U & ((IData)((VL_ULL(0xfffffffffffff) 
                                              & VL_NEGATE_Q((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                     << 0x13U)) | (IData)(
                                                          (((QData)((IData)(vlTOPp->p)) 
                                                            << 0x28U) 
                                                           >> 0x20U)));
    __Vtemp73[2U] = ((0x7ffffU & ((IData)((VL_ULL(0xfffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->p) 
                                                                             >> 0xaU))))))) 
                                  >> 0xdU)) | (0xfff80000U 
                                               & ((IData)(
                                                          ((VL_ULL(0xfffffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                           >> 0x20U)) 
                                                  << 0x13U)));
    __Vtemp73[3U] = (0x7ffffU & ((IData)(((VL_ULL(0xfffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->p) 
                                                                             >> 0xaU)))))) 
                                          >> 0x20U)) 
                                 >> 0xdU));
    VL_MUL_W(4, __Vtemp74, __Vtemp72, __Vtemp73);
    __Vtemp78[0U] = 0xfffffba5U;
    __Vtemp78[1U] = 0xffffffffU;
    __Vtemp78[2U] = 0xffffffffU;
    __Vtemp78[3U] = 0x7fU;
    __Vtemp79[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                             << 0x28U));
    __Vtemp79[1U] = ((0xfff80000U & ((IData)((VL_ULL(0xfffffffffffff) 
                                              & VL_NEGATE_Q((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                     << 0x13U)) | (IData)(
                                                          (((QData)((IData)(vlTOPp->p)) 
                                                            << 0x28U) 
                                                           >> 0x20U)));
    __Vtemp79[2U] = ((0x7ffffU & ((IData)((VL_ULL(0xfffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->p) 
                                                                             >> 0xaU))))))) 
                                  >> 0xdU)) | (0xfff80000U 
                                               & ((IData)(
                                                          ((VL_ULL(0xfffffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                           >> 0x20U)) 
                                                  << 0x13U)));
    __Vtemp79[3U] = (0x7ffffU & ((IData)(((VL_ULL(0xfffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->p) 
                                                                             >> 0xaU)))))) 
                                          >> 0x20U)) 
                                 >> 0xdU));
    VL_MUL_W(4, __Vtemp80, __Vtemp78, __Vtemp79);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[0U] 
        = __Vtemp80[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U] 
        = __Vtemp80[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U] 
        = ((0x80000000U & (__Vtemp74[3U] << 0x19U)) 
           | (0x7fffffffU & __Vtemp80[2U]));
    __Vtemp87[0U] = 0x46bU;
    __Vtemp87[1U] = 0U;
    __Vtemp87[2U] = 0U;
    VL_EXTEND_WQ(94,47, __Vtemp88, ((QData)((IData)(vlTOPp->n)) 
                                    << 0x25U));
    VL_MUL_W(3, __Vtemp89, __Vtemp87, __Vtemp88);
    __Vtemp94[0U] = 0x46bU;
    __Vtemp94[1U] = 0U;
    __Vtemp94[2U] = 0U;
    VL_EXTEND_WQ(94,47, __Vtemp95, ((QData)((IData)(vlTOPp->n)) 
                                    << 0x25U));
    VL_MUL_W(3, __Vtemp96, __Vtemp94, __Vtemp95);
    __Vtemp98[0U] = (0xc0000000U & ((IData)((VL_ULL(0x3ffffffff) 
                                             & VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                                          (VL_ULL(0x3fffffffffffc00) 
                                                           & ((VL_ULL(0x17e40) 
                                                               + 
                                                               ((VL_ULL(0xfffffffffff8) 
                                                                 & (((QData)((IData)(
                                                                                (0x3fffffffU 
                                                                                & __Vtemp96[2U]))) 
                                                                     << 0x19U) 
                                                                    | (VL_ULL(0x1fffffffffffff8) 
                                                                       & ((QData)((IData)(
                                                                                __Vtemp96[1U])) 
                                                                          >> 7U)))) 
                                                                + 
                                                                (VL_ULL(0x7ffffffffffff) 
                                                                 & ((0x80000000U 
                                                                     & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                                      << 0x13U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                                        >> 0xdU))
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                                      << 0x13U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                                        >> 0xdU)))))) 
                                                              << 0xaU))))) 
                                    << 0x1eU));
    __Vtemp98[1U] = ((0x3fffffffU & ((IData)((VL_ULL(0x3ffffffff) 
                                              & VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                                           (VL_ULL(0x3fffffffffffc00) 
                                                            & ((VL_ULL(0x17e40) 
                                                                + 
                                                                ((VL_ULL(0xfffffffffff8) 
                                                                  & (((QData)((IData)(
                                                                                (0x3fffffffU 
                                                                                & __Vtemp96[2U]))) 
                                                                      << 0x19U) 
                                                                     | (VL_ULL(0x1fffffffffffff8) 
                                                                        & ((QData)((IData)(
                                                                                __Vtemp96[1U])) 
                                                                           >> 7U)))) 
                                                                 + 
                                                                 (VL_ULL(0x7ffffffffffff) 
                                                                  & ((0x80000000U 
                                                                      & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                                       << 0x13U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                                         >> 0xdU))
                                                                      : 
                                                                     (((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                                       << 0x13U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                                         >> 0xdU)))))) 
                                                               << 0xaU))))) 
                                     >> 2U)) | (0xc0000000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x3ffffffff) 
                                                             & VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                                                          (VL_ULL(0x3fffffffffffc00) 
                                                                           & ((VL_ULL(0x17e40) 
                                                                               + 
                                                                               ((VL_ULL(0xfffffffffff8) 
                                                                                & (((QData)((IData)(
                                                                                (0x3fffffffU 
                                                                                & __Vtemp96[2U]))) 
                                                                                << 0x19U) 
                                                                                | (VL_ULL(0x1fffffffffffff8) 
                                                                                & ((QData)((IData)(
                                                                                __Vtemp96[1U])) 
                                                                                >> 7U)))) 
                                                                                + 
                                                                                (VL_ULL(0x7ffffffffffff) 
                                                                                & ((0x80000000U 
                                                                                & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])
                                                                                 ? 
                                                                                (((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                                                << 0x13U) 
                                                                                | ((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                (((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                                                << 0x13U) 
                                                                                | ((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                                                >> 0xdU)))))) 
                                                                              << 0xaU)))) 
                                                            >> 0x20U)) 
                                                   << 0x1eU)));
    __Vtemp98[2U] = (0x3fffffffU & ((IData)(((VL_ULL(0x3ffffffff) 
                                              & VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                                           (VL_ULL(0x3fffffffffffc00) 
                                                            & ((VL_ULL(0x17e40) 
                                                                + 
                                                                ((VL_ULL(0xfffffffffff8) 
                                                                  & (((QData)((IData)(
                                                                                (0x3fffffffU 
                                                                                & __Vtemp96[2U]))) 
                                                                      << 0x19U) 
                                                                     | (VL_ULL(0x1fffffffffffff8) 
                                                                        & ((QData)((IData)(
                                                                                __Vtemp96[1U])) 
                                                                           >> 7U)))) 
                                                                 + 
                                                                 (VL_ULL(0x7ffffffffffff) 
                                                                  & ((0x80000000U 
                                                                      & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                                       << 0x13U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                                         >> 0xdU))
                                                                      : 
                                                                     (((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                                       << 0x13U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                                         >> 0xdU)))))) 
                                                               << 0xaU)))) 
                                             >> 0x20U)) 
                                    >> 2U));
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_340[0U] 
        = __Vtemp98[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_340[1U] 
        = __Vtemp98[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_340[2U] 
        = __Vtemp98[2U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_340[3U] = 0U;
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_340[4U] = 0U;
}

void Vcomparator_latch__4877e2cc78717755::_settle__TOP__2(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_latch__4877e2cc78717755::_settle__TOP__2\n"); );
    Vcomparator_latch__4877e2cc78717755* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp101[4];
    WData/*127:0*/ __Vtemp102[4];
    WData/*127:0*/ __Vtemp103[4];
    WData/*127:0*/ __Vtemp107[4];
    WData/*127:0*/ __Vtemp108[4];
    WData/*127:0*/ __Vtemp109[4];
    WData/*127:0*/ __Vtemp115[4];
    WData/*127:0*/ __Vtemp116[4];
    WData/*127:0*/ __Vtemp117[4];
    WData/*127:0*/ __Vtemp121[4];
    WData/*127:0*/ __Vtemp122[4];
    WData/*127:0*/ __Vtemp123[4];
    WData/*127:0*/ __Vtemp129[4];
    WData/*127:0*/ __Vtemp130[4];
    WData/*127:0*/ __Vtemp131[4];
    WData/*127:0*/ __Vtemp135[4];
    WData/*127:0*/ __Vtemp136[4];
    WData/*127:0*/ __Vtemp137[4];
    WData/*127:0*/ __Vtemp143[4];
    WData/*127:0*/ __Vtemp144[4];
    WData/*127:0*/ __Vtemp145[4];
    WData/*127:0*/ __Vtemp149[4];
    WData/*127:0*/ __Vtemp150[4];
    WData/*127:0*/ __Vtemp151[4];
    WData/*95:0*/ __Vtemp157[3];
    WData/*95:0*/ __Vtemp158[3];
    WData/*95:0*/ __Vtemp159[3];
    WData/*95:0*/ __Vtemp163[3];
    WData/*95:0*/ __Vtemp164[3];
    WData/*95:0*/ __Vtemp165[3];
    WData/*127:0*/ __Vtemp171[4];
    WData/*127:0*/ __Vtemp172[4];
    WData/*127:0*/ __Vtemp173[4];
    WData/*127:0*/ __Vtemp177[4];
    WData/*127:0*/ __Vtemp178[4];
    WData/*127:0*/ __Vtemp179[4];
    WData/*95:0*/ __Vtemp184[3];
    WData/*95:0*/ __Vtemp187[3];
    WData/*95:0*/ __Vtemp188[3];
    WData/*95:0*/ __Vtemp189[3];
    WData/*95:0*/ __Vtemp194[3];
    WData/*95:0*/ __Vtemp195[3];
    WData/*95:0*/ __Vtemp196[3];
    WData/*95:0*/ __Vtemp198[3];
    WData/*95:0*/ __Vtemp202[3];
    WData/*95:0*/ __Vtemp203[3];
    WData/*95:0*/ __Vtemp204[3];
    WData/*95:0*/ __Vtemp207[3];
    WData/*95:0*/ __Vtemp208[3];
    WData/*95:0*/ __Vtemp209[3];
    WData/*95:0*/ __Vtemp211[3];
    WData/*95:0*/ __Vtemp212[3];
    WData/*159:0*/ __Vtemp219[5];
    WData/*159:0*/ __Vtemp220[5];
    WData/*191:0*/ __Vtemp225[6];
    WData/*191:0*/ __Vtemp231[6];
    WData/*191:0*/ __Vtemp232[6];
    WData/*191:0*/ __Vtemp235[6];
    WData/*191:0*/ __Vtemp241[6];
    WData/*191:0*/ __Vtemp242[6];
    WData/*191:0*/ __Vtemp247[6];
    WData/*191:0*/ __Vtemp253[6];
    WData/*191:0*/ __Vtemp254[6];
    WData/*191:0*/ __Vtemp258[6];
    WData/*191:0*/ __Vtemp264[6];
    WData/*191:0*/ __Vtemp265[6];
    // Body
    __Vtemp101[0U] = 0xfffffbf2U;
    __Vtemp101[1U] = 0xffffffffU;
    __Vtemp101[2U] = 0xffffffffU;
    __Vtemp101[3U] = 0x1ffU;
    __Vtemp102[0U] = 0U;
    __Vtemp102[1U] = (0xfffffe00U & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                               & (VL_NEGATE_Q((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                  << 0xbU)) 
                                              | (QData)((IData)(vlTOPp->n)))) 
                                     << 9U));
    __Vtemp102[2U] = ((0x1ffU & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                           & (VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->n) 
                                                                              >> 0xaU))))) 
                                              << 0xbU)) 
                                          | (QData)((IData)(vlTOPp->n)))) 
                                 >> 0x17U)) | (0xfffffe00U 
                                               & ((IData)(
                                                          (((VL_ULL(0xfffffffffffff800) 
                                                             & (VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                                << 0xbU)) 
                                                            | (QData)((IData)(vlTOPp->n))) 
                                                           >> 0x20U)) 
                                                  << 9U)));
    __Vtemp102[3U] = (0x1ffU & ((IData)((((VL_ULL(0xfffffffffffff800) 
                                           & (VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->n) 
                                                                              >> 0xaU))))) 
                                              << 0xbU)) 
                                          | (QData)((IData)(vlTOPp->n))) 
                                         >> 0x20U)) 
                                >> 0x17U));
    VL_MUL_W(4, __Vtemp103, __Vtemp101, __Vtemp102);
    __Vtemp107[0U] = 0xfffffbf2U;
    __Vtemp107[1U] = 0xffffffffU;
    __Vtemp107[2U] = 0xffffffffU;
    __Vtemp107[3U] = 0x1ffU;
    __Vtemp108[0U] = 0U;
    __Vtemp108[1U] = (0xfffffe00U & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                               & (VL_NEGATE_Q((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                  << 0xbU)) 
                                              | (QData)((IData)(vlTOPp->n)))) 
                                     << 9U));
    __Vtemp108[2U] = ((0x1ffU & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                           & (VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->n) 
                                                                              >> 0xaU))))) 
                                              << 0xbU)) 
                                          | (QData)((IData)(vlTOPp->n)))) 
                                 >> 0x17U)) | (0xfffffe00U 
                                               & ((IData)(
                                                          (((VL_ULL(0xfffffffffffff800) 
                                                             & (VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                                << 0xbU)) 
                                                            | (QData)((IData)(vlTOPp->n))) 
                                                           >> 0x20U)) 
                                                  << 9U)));
    __Vtemp108[3U] = (0x1ffU & ((IData)((((VL_ULL(0xfffffffffffff800) 
                                           & (VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->n) 
                                                                              >> 0xaU))))) 
                                              << 0xbU)) 
                                          | (QData)((IData)(vlTOPp->n))) 
                                         >> 0x20U)) 
                                >> 0x17U));
    VL_MUL_W(4, __Vtemp109, __Vtemp107, __Vtemp108);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[0U] 
        = __Vtemp109[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[1U] 
        = __Vtemp109[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[2U] 
        = __Vtemp109[2U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[3U] 
        = ((2U & (__Vtemp103[3U] >> 7U)) | (1U & __Vtemp109[3U]));
    __Vtemp115[0U] = 0xfffffc04U;
    __Vtemp115[1U] = 0xffffffffU;
    __Vtemp115[2U] = 0xffffffffU;
    __Vtemp115[3U] = 0x1fU;
    __Vtemp116[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                              << 0x27U));
    __Vtemp116[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                      << 0x12U)) | (IData)(
                                                           (((QData)((IData)(vlTOPp->p)) 
                                                             << 0x27U) 
                                                            >> 0x20U)));
    __Vtemp116[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->p) 
                                                                              >> 0xaU))))))) 
                                   >> 0xeU)) | (0xfffc0000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x7ffffffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                            >> 0x20U)) 
                                                   << 0x12U)));
    __Vtemp116[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->p) 
                                                                              >> 0xaU)))))) 
                                           >> 0x20U)) 
                                  >> 0xeU));
    VL_MUL_W(4, __Vtemp117, __Vtemp115, __Vtemp116);
    __Vtemp121[0U] = 0xfffffc04U;
    __Vtemp121[1U] = 0xffffffffU;
    __Vtemp121[2U] = 0xffffffffU;
    __Vtemp121[3U] = 0x1fU;
    __Vtemp122[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                              << 0x27U));
    __Vtemp122[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                      << 0x12U)) | (IData)(
                                                           (((QData)((IData)(vlTOPp->p)) 
                                                             << 0x27U) 
                                                            >> 0x20U)));
    __Vtemp122[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->p) 
                                                                              >> 0xaU))))))) 
                                   >> 0xeU)) | (0xfffc0000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x7ffffffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                            >> 0x20U)) 
                                                   << 0x12U)));
    __Vtemp122[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->p) 
                                                                              >> 0xaU)))))) 
                                           >> 0x20U)) 
                                  >> 0xeU));
    VL_MUL_W(4, __Vtemp123, __Vtemp121, __Vtemp122);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[0U] 
        = __Vtemp123[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[1U] 
        = __Vtemp123[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[2U] 
        = ((0x20000000U & (__Vtemp117[3U] << 0x19U)) 
           | (0x1fffffffU & __Vtemp123[2U]));
    __Vtemp129[0U] = 0xfffff928U;
    __Vtemp129[1U] = 0xffffffffU;
    __Vtemp129[2U] = 0xffffffffU;
    __Vtemp129[3U] = 0x1ffU;
    __Vtemp130[0U] = 0U;
    __Vtemp130[1U] = (0xfffffe00U & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                               & (VL_NEGATE_Q((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                  << 0xbU)) 
                                              | (QData)((IData)(vlTOPp->n)))) 
                                     << 9U));
    __Vtemp130[2U] = ((0x1ffU & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                           & (VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->n) 
                                                                              >> 0xaU))))) 
                                              << 0xbU)) 
                                          | (QData)((IData)(vlTOPp->n)))) 
                                 >> 0x17U)) | (0xfffffe00U 
                                               & ((IData)(
                                                          (((VL_ULL(0xfffffffffffff800) 
                                                             & (VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                                << 0xbU)) 
                                                            | (QData)((IData)(vlTOPp->n))) 
                                                           >> 0x20U)) 
                                                  << 9U)));
    __Vtemp130[3U] = (0x1ffU & ((IData)((((VL_ULL(0xfffffffffffff800) 
                                           & (VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->n) 
                                                                              >> 0xaU))))) 
                                              << 0xbU)) 
                                          | (QData)((IData)(vlTOPp->n))) 
                                         >> 0x20U)) 
                                >> 0x17U));
    VL_MUL_W(4, __Vtemp131, __Vtemp129, __Vtemp130);
    __Vtemp135[0U] = 0xfffff928U;
    __Vtemp135[1U] = 0xffffffffU;
    __Vtemp135[2U] = 0xffffffffU;
    __Vtemp135[3U] = 0x1ffU;
    __Vtemp136[0U] = 0U;
    __Vtemp136[1U] = (0xfffffe00U & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                               & (VL_NEGATE_Q((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                  << 0xbU)) 
                                              | (QData)((IData)(vlTOPp->n)))) 
                                     << 9U));
    __Vtemp136[2U] = ((0x1ffU & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                           & (VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->n) 
                                                                              >> 0xaU))))) 
                                              << 0xbU)) 
                                          | (QData)((IData)(vlTOPp->n)))) 
                                 >> 0x17U)) | (0xfffffe00U 
                                               & ((IData)(
                                                          (((VL_ULL(0xfffffffffffff800) 
                                                             & (VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                                << 0xbU)) 
                                                            | (QData)((IData)(vlTOPp->n))) 
                                                           >> 0x20U)) 
                                                  << 9U)));
    __Vtemp136[3U] = (0x1ffU & ((IData)((((VL_ULL(0xfffffffffffff800) 
                                           & (VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->n) 
                                                                              >> 0xaU))))) 
                                              << 0xbU)) 
                                          | (QData)((IData)(vlTOPp->n))) 
                                         >> 0x20U)) 
                                >> 0x17U));
    VL_MUL_W(4, __Vtemp137, __Vtemp135, __Vtemp136);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[0U] 
        = __Vtemp137[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[1U] 
        = __Vtemp137[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[2U] 
        = __Vtemp137[2U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[3U] 
        = ((2U & (__Vtemp131[3U] >> 7U)) | (1U & __Vtemp137[3U]));
    __Vtemp143[0U] = 0xfffffc12U;
    __Vtemp143[1U] = 0xffffffffU;
    __Vtemp143[2U] = 0xffffffffU;
    __Vtemp143[3U] = 0x1fU;
    __Vtemp144[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                              << 0x27U));
    __Vtemp144[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                      << 0x12U)) | (IData)(
                                                           (((QData)((IData)(vlTOPp->p)) 
                                                             << 0x27U) 
                                                            >> 0x20U)));
    __Vtemp144[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->p) 
                                                                              >> 0xaU))))))) 
                                   >> 0xeU)) | (0xfffc0000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x7ffffffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                            >> 0x20U)) 
                                                   << 0x12U)));
    __Vtemp144[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->p) 
                                                                              >> 0xaU)))))) 
                                           >> 0x20U)) 
                                  >> 0xeU));
    VL_MUL_W(4, __Vtemp145, __Vtemp143, __Vtemp144);
    __Vtemp149[0U] = 0xfffffc12U;
    __Vtemp149[1U] = 0xffffffffU;
    __Vtemp149[2U] = 0xffffffffU;
    __Vtemp149[3U] = 0x1fU;
    __Vtemp150[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                              << 0x27U));
    __Vtemp150[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                      << 0x12U)) | (IData)(
                                                           (((QData)((IData)(vlTOPp->p)) 
                                                             << 0x27U) 
                                                            >> 0x20U)));
    __Vtemp150[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->p) 
                                                                              >> 0xaU))))))) 
                                   >> 0xeU)) | (0xfffc0000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x7ffffffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                            >> 0x20U)) 
                                                   << 0x12U)));
    __Vtemp150[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->p) 
                                                                              >> 0xaU)))))) 
                                           >> 0x20U)) 
                                  >> 0xeU));
    VL_MUL_W(4, __Vtemp151, __Vtemp149, __Vtemp150);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[0U] 
        = __Vtemp151[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[1U] 
        = __Vtemp151[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[2U] 
        = ((0x20000000U & (__Vtemp145[3U] << 0x19U)) 
           | (0x1fffffffU & __Vtemp151[2U]));
    __Vtemp157[0U] = 0xfffffb20U;
    __Vtemp157[1U] = 0xffffffffU;
    __Vtemp157[2U] = 0x7fffffffU;
    __Vtemp158[0U] = (IData)(((QData)((IData)(vlTOPp->n)) 
                              << 0x24U));
    __Vtemp158[1U] = ((0xffff8000U & ((IData)((VL_ULL(0xffffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))))) 
                                      << 0xfU)) | (IData)(
                                                          (((QData)((IData)(vlTOPp->n)) 
                                                            << 0x24U) 
                                                           >> 0x20U)));
    __Vtemp158[2U] = ((0x7fffU & ((IData)((VL_ULL(0xffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->n) 
                                                                             >> 0xaU))))))) 
                                  >> 0x11U)) | (0xffff8000U 
                                                & ((IData)(
                                                           ((VL_ULL(0xffffffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU)))))) 
                                                            >> 0x20U)) 
                                                   << 0xfU)));
    VL_MUL_W(3, __Vtemp159, __Vtemp157, __Vtemp158);
    __Vtemp163[0U] = 0xfffffb20U;
    __Vtemp163[1U] = 0xffffffffU;
    __Vtemp163[2U] = 0x7fffffffU;
    __Vtemp164[0U] = (IData)(((QData)((IData)(vlTOPp->n)) 
                              << 0x24U));
    __Vtemp164[1U] = ((0xffff8000U & ((IData)((VL_ULL(0xffffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))))) 
                                      << 0xfU)) | (IData)(
                                                          (((QData)((IData)(vlTOPp->n)) 
                                                            << 0x24U) 
                                                           >> 0x20U)));
    __Vtemp164[2U] = ((0x7fffU & ((IData)((VL_ULL(0xffffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->n) 
                                                                             >> 0xaU))))))) 
                                  >> 0x11U)) | (0xffff8000U 
                                                & ((IData)(
                                                           ((VL_ULL(0xffffffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU)))))) 
                                                            >> 0x20U)) 
                                                   << 0xfU)));
    VL_MUL_W(3, __Vtemp165, __Vtemp163, __Vtemp164);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[0U] 
        = __Vtemp165[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U] 
        = __Vtemp165[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U] 
        = ((0x800000U & (__Vtemp159[2U] >> 7U)) | (0x7fffffU 
                                                   & __Vtemp165[2U]));
    __Vtemp171[0U] = 0xfffffba5U;
    __Vtemp171[1U] = 0xffffffffU;
    __Vtemp171[2U] = 0xffffffffU;
    __Vtemp171[3U] = 0x7fU;
    __Vtemp172[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                              << 0x28U));
    __Vtemp172[1U] = ((0xfff80000U & ((IData)((VL_ULL(0xfffffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                      << 0x13U)) | (IData)(
                                                           (((QData)((IData)(vlTOPp->p)) 
                                                             << 0x28U) 
                                                            >> 0x20U)));
    __Vtemp172[2U] = ((0x7ffffU & ((IData)((VL_ULL(0xfffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->p) 
                                                                              >> 0xaU))))))) 
                                   >> 0xdU)) | (0xfff80000U 
                                                & ((IData)(
                                                           ((VL_ULL(0xfffffffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                            >> 0x20U)) 
                                                   << 0x13U)));
    __Vtemp172[3U] = (0x7ffffU & ((IData)(((VL_ULL(0xfffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->p) 
                                                                              >> 0xaU)))))) 
                                           >> 0x20U)) 
                                  >> 0xdU));
    VL_MUL_W(4, __Vtemp173, __Vtemp171, __Vtemp172);
    __Vtemp177[0U] = 0xfffffba5U;
    __Vtemp177[1U] = 0xffffffffU;
    __Vtemp177[2U] = 0xffffffffU;
    __Vtemp177[3U] = 0x7fU;
    __Vtemp178[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                              << 0x28U));
    __Vtemp178[1U] = ((0xfff80000U & ((IData)((VL_ULL(0xfffffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                      << 0x13U)) | (IData)(
                                                           (((QData)((IData)(vlTOPp->p)) 
                                                             << 0x28U) 
                                                            >> 0x20U)));
    __Vtemp178[2U] = ((0x7ffffU & ((IData)((VL_ULL(0xfffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->p) 
                                                                              >> 0xaU))))))) 
                                   >> 0xdU)) | (0xfff80000U 
                                                & ((IData)(
                                                           ((VL_ULL(0xfffffffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                            >> 0x20U)) 
                                                   << 0x13U)));
    __Vtemp178[3U] = (0x7ffffU & ((IData)(((VL_ULL(0xfffffffffffff) 
                                            & VL_NEGATE_Q((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->p) 
                                                                              >> 0xaU)))))) 
                                           >> 0x20U)) 
                                  >> 0xdU));
    VL_MUL_W(4, __Vtemp179, __Vtemp177, __Vtemp178);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[0U] 
        = __Vtemp179[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U] 
        = __Vtemp179[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U] 
        = ((0x80000000U & (__Vtemp173[3U] << 0x19U)) 
           | (0x7fffffffU & __Vtemp179[2U]));
    vlTOPp->out = (0x3ffU & ((0U == vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm)
                              ? (0x1ffU & (((1U & (IData)(
                                                          (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                           >> 0x22U)))
                                             ? (IData)(
                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                        >> 0x14U))
                                             : (IData)(
                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                        >> 0x14U))) 
                                           >> 3U)) : 
                             (0x1ffU & (((1U & (IData)(
                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                        >> 0x22U)))
                                          ? (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                     >> 0x14U))
                                          : (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                     >> 0x14U))) 
                                        >> 3U))));
    __Vtemp184[0U] = (IData)((((QData)((IData)((0x3fffffffU 
                                                & VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (VL_NEGATE_I(
                                                                                ((0x8000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 1U)) 
                                                                                | (0x7ffcU 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 2U)))) 
                                                                          >> 0xfU))))))) 
                               << 0x10U) | (QData)((IData)(
                                                           (0xffffU 
                                                            & VL_NEGATE_I(
                                                                          ((0x8000U 
                                                                            & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                               << 1U)) 
                                                                           | (0x7ffcU 
                                                                              & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 2U)))))))));
    __Vtemp184[1U] = ((0xffffc000U & ((IData)((VL_ULL(0x7fffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & (VL_NEGATE_I(
                                                                                ((0x8000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 1U)) 
                                                                                | (0x7ffcU 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 2U)))) 
                                                                                >> 0xfU))))))) 
                                      << 0xeU)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             (0x3fffffffU 
                                                                              & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (VL_NEGATE_I(
                                                                                ((0x8000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 1U)) 
                                                                                | (0x7ffcU 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 2U)))) 
                                                                                >> 0xfU))))))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & VL_NEGATE_I(
                                                                                ((0x8000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 1U)) 
                                                                                | (0x7ffcU 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 2U)))))))) 
                                                           >> 0x20U)));
    __Vtemp184[2U] = ((0x3fffU & ((IData)((VL_ULL(0x7fffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & (VL_NEGATE_I(
                                                                                ((0x8000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 1U)) 
                                                                                | (0x7ffcU 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 2U)))) 
                                                                             >> 0xfU))))))) 
                                  >> 0x12U)) | (0xffffc000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x7fffffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (VL_NEGATE_I(
                                                                                ((0x8000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 1U)) 
                                                                                | (0x7ffcU 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 2U)))) 
                                                                                >> 0xfU)))))) 
                                                            >> 0x20U)) 
                                                   << 0xeU)));
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_149[0U] 
        = __Vtemp184[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_149[1U] 
        = __Vtemp184[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_149[2U] 
        = __Vtemp184[2U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
        = (VL_ULL(0xfffffffffffff) & (VL_ULL(0x50500) 
                                      + (((2U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[3U])
                                           ? (((QData)((IData)(
                                                               vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[3U])) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[2U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[1U])) 
                                                    >> 0xeU)))
                                           : (((QData)((IData)(
                                                               vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[3U])) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[2U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[1U])) 
                                                    >> 0xeU)))) 
                                         + (VL_ULL(0xffffffffffffc) 
                                            & (((0x20000000U 
                                                 & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[2U])
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[2U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[1U])) 
                                                    >> 0xcU))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[2U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[1U])) 
                                                    >> 0xcU))) 
                                               << 2U)))));
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
        = (VL_ULL(0x7ffffffffffff) & (VL_ULL(0x12840) 
                                      + (((2U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[3U])
                                           ? (((QData)((IData)(
                                                               vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[3U])) 
                                               << 0x31U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[2U])) 
                                                  << 0x11U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[1U])) 
                                                    >> 0xfU)))
                                           : (((QData)((IData)(
                                                               vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[3U])) 
                                               << 0x31U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[2U])) 
                                                  << 0x11U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[1U])) 
                                                    >> 0xfU)))) 
                                         + (VL_ULL(0x7fffffffffffe) 
                                            & (((0x20000000U 
                                                 & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[2U])
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[2U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[1U])) 
                                                    >> 0xcU))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[2U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[1U])) 
                                                    >> 0xcU))) 
                                               << 1U)))));
    __Vtemp187[0U] = 0x46bU;
    __Vtemp187[1U] = 0U;
    __Vtemp187[2U] = 0U;
    VL_EXTEND_WQ(94,47, __Vtemp188, ((QData)((IData)(vlTOPp->n)) 
                                     << 0x25U));
    VL_MUL_W(3, __Vtemp189, __Vtemp187, __Vtemp188);
    __Vtemp194[0U] = 0x46bU;
    __Vtemp194[1U] = 0U;
    __Vtemp194[2U] = 0U;
    VL_EXTEND_WQ(94,47, __Vtemp195, ((QData)((IData)(vlTOPp->n)) 
                                     << 0x25U));
    VL_MUL_W(3, __Vtemp196, __Vtemp194, __Vtemp195);
    __Vtemp198[0U] = (0xc0000000U & ((IData)((VL_ULL(0x3ffffffff) 
                                              & VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                                           (VL_ULL(0x3fffffffffffc00) 
                                                            & ((VL_ULL(0x17e40) 
                                                                + 
                                                                ((VL_ULL(0xfffffffffff8) 
                                                                  & (((QData)((IData)(
                                                                                (0x3fffffffU 
                                                                                & __Vtemp196[2U]))) 
                                                                      << 0x19U) 
                                                                     | (VL_ULL(0x1fffffffffffff8) 
                                                                        & ((QData)((IData)(
                                                                                __Vtemp196[1U])) 
                                                                           >> 7U)))) 
                                                                 + 
                                                                 (VL_ULL(0x7ffffffffffff) 
                                                                  & ((0x80000000U 
                                                                      & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                                       << 0x13U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                                         >> 0xdU))
                                                                      : 
                                                                     (((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                                       << 0x13U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                                         >> 0xdU)))))) 
                                                               << 0xaU))))) 
                                     << 0x1eU));
    __Vtemp198[1U] = ((0x3fffffffU & ((IData)((VL_ULL(0x3ffffffff) 
                                               & VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                                            (VL_ULL(0x3fffffffffffc00) 
                                                             & ((VL_ULL(0x17e40) 
                                                                 + 
                                                                 ((VL_ULL(0xfffffffffff8) 
                                                                   & (((QData)((IData)(
                                                                                (0x3fffffffU 
                                                                                & __Vtemp196[2U]))) 
                                                                       << 0x19U) 
                                                                      | (VL_ULL(0x1fffffffffffff8) 
                                                                         & ((QData)((IData)(
                                                                                __Vtemp196[1U])) 
                                                                            >> 7U)))) 
                                                                  + 
                                                                  (VL_ULL(0x7ffffffffffff) 
                                                                   & ((0x80000000U 
                                                                       & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])
                                                                       ? 
                                                                      (((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                                        << 0x13U) 
                                                                       | ((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                                          >> 0xdU))
                                                                       : 
                                                                      (((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                                        << 0x13U) 
                                                                       | ((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                                          >> 0xdU)))))) 
                                                                << 0xaU))))) 
                                      >> 2U)) | (0xc0000000U 
                                                 & ((IData)(
                                                            ((VL_ULL(0x3ffffffff) 
                                                              & VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                                                           (VL_ULL(0x3fffffffffffc00) 
                                                                            & ((VL_ULL(0x17e40) 
                                                                                + 
                                                                                ((VL_ULL(0xfffffffffff8) 
                                                                                & (((QData)((IData)(
                                                                                (0x3fffffffU 
                                                                                & __Vtemp196[2U]))) 
                                                                                << 0x19U) 
                                                                                | (VL_ULL(0x1fffffffffffff8) 
                                                                                & ((QData)((IData)(
                                                                                __Vtemp196[1U])) 
                                                                                >> 7U)))) 
                                                                                + 
                                                                                (VL_ULL(0x7ffffffffffff) 
                                                                                & ((0x80000000U 
                                                                                & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])
                                                                                 ? 
                                                                                (((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                                                << 0x13U) 
                                                                                | ((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                (((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                                                << 0x13U) 
                                                                                | ((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                                                >> 0xdU)))))) 
                                                                               << 0xaU)))) 
                                                             >> 0x20U)) 
                                                    << 0x1eU)));
    __Vtemp198[2U] = (0x3fffffffU & ((IData)(((VL_ULL(0x3ffffffff) 
                                               & VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                                            (VL_ULL(0x3fffffffffffc00) 
                                                             & ((VL_ULL(0x17e40) 
                                                                 + 
                                                                 ((VL_ULL(0xfffffffffff8) 
                                                                   & (((QData)((IData)(
                                                                                (0x3fffffffU 
                                                                                & __Vtemp196[2U]))) 
                                                                       << 0x19U) 
                                                                      | (VL_ULL(0x1fffffffffffff8) 
                                                                         & ((QData)((IData)(
                                                                                __Vtemp196[1U])) 
                                                                            >> 7U)))) 
                                                                  + 
                                                                  (VL_ULL(0x7ffffffffffff) 
                                                                   & ((0x80000000U 
                                                                       & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])
                                                                       ? 
                                                                      (((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                                        << 0x13U) 
                                                                       | ((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                                          >> 0xdU))
                                                                       : 
                                                                      (((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                                        << 0x13U) 
                                                                       | ((QData)((IData)(
                                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                                          >> 0xdU)))))) 
                                                                << 0xaU)))) 
                                              >> 0x20U)) 
                                     >> 2U));
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_340[0U] 
        = __Vtemp198[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_340[1U] 
        = __Vtemp198[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_340[2U] 
        = __Vtemp198[2U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_340[3U] = 0U;
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_340[4U] = 0U;
    __Vtemp202[0U] = 0x40dU;
    __Vtemp202[1U] = 0U;
    __Vtemp202[2U] = 0U;
    VL_EXTEND_WQ(92,46, __Vtemp203, ((QData)((IData)(vlTOPp->p)) 
                                     << 0x24U));
    VL_MUL_W(3, __Vtemp204, __Vtemp202, __Vtemp203);
    __Vtemp207[0U] = 0x40dU;
    __Vtemp207[1U] = 0U;
    __Vtemp207[2U] = 0U;
    VL_EXTEND_WQ(92,46, __Vtemp208, ((QData)((IData)(vlTOPp->p)) 
                                     << 0x24U));
    VL_MUL_W(3, __Vtemp209, __Vtemp207, __Vtemp208);
    __Vtemp211[0U] = (IData)((VL_ULL(0x1ffffffff000) 
                              & (VL_DIV_QQQ(52, VL_ULL(0x8000000000000), 
                                            (VL_ULL(0x3ffffffffffc0) 
                                             & ((VL_ULL(0x4120) 
                                                 + 
                                                 ((VL_ULL(0x7fffffffffff) 
                                                   & ((0x800000U 
                                                       & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                                          >> 9U))
                                                       : 
                                                      (((QData)((IData)(
                                                                        vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                                          >> 9U)))) 
                                                  + 
                                                  (VL_ULL(0x1fffffffffff) 
                                                   & (((QData)((IData)(
                                                                       (0xfffffffU 
                                                                        & __Vtemp209[2U]))) 
                                                       << 0x17U) 
                                                      | ((QData)((IData)(
                                                                         __Vtemp209[1U])) 
                                                         >> 9U))))) 
                                                << 6U))) 
                                 << 0xcU)));
    __Vtemp211[1U] = (IData)(((VL_ULL(0x1ffffffff000) 
                               & (VL_DIV_QQQ(52, VL_ULL(0x8000000000000), 
                                             (VL_ULL(0x3ffffffffffc0) 
                                              & ((VL_ULL(0x4120) 
                                                  + 
                                                  ((VL_ULL(0x7fffffffffff) 
                                                    & ((0x800000U 
                                                        & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                                         << 0x17U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                                           >> 9U))
                                                        : 
                                                       (((QData)((IData)(
                                                                         vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                                         << 0x17U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                                           >> 9U)))) 
                                                   + 
                                                   (VL_ULL(0x1fffffffffff) 
                                                    & (((QData)((IData)(
                                                                        (0xfffffffU 
                                                                         & __Vtemp209[2U]))) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          __Vtemp209[1U])) 
                                                          >> 9U))))) 
                                                 << 6U))) 
                                  << 0xcU)) >> 0x20U));
    __Vtemp211[2U] = 0U;
    VL_MUL_W(3, __Vtemp212, vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_149, __Vtemp211);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_148[0U] 
        = __Vtemp212[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_148[1U] 
        = __Vtemp212[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_148[2U] 
        = (0x1fffffffU & __Vtemp212[2U]);
    __Vtemp219[0U] = (IData)((VL_ULL(0x7ffffffff) & 
                              (VL_ULL(0xd3333300) - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o)));
    __Vtemp219[1U] = ((0xfffffff8U & (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (VL_ULL(1) 
                                                                      & ((VL_ULL(0xd3333300) 
                                                                          - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                         >> 0x22U)))))) 
                                      << 3U)) | (IData)(
                                                        ((VL_ULL(0x7ffffffff) 
                                                          & (VL_ULL(0xd3333300) 
                                                             - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o)) 
                                                         >> 0x20U)));
    __Vtemp219[2U] = ((7U & ((6U & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (VL_ULL(1) 
                                                                    & ((VL_ULL(0xd3333300) 
                                                                        - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                       >> 0x22U)))))) 
                                    << 1U)) | (1U & 
                                               (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (VL_ULL(1) 
                                                                                & ((VL_ULL(0xd3333300) 
                                                                                - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                                >> 0x22U)))))) 
                                                >> 0x1dU)))) 
                      | (0xfffffff8U & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (VL_ULL(1) 
                                                                        & ((VL_ULL(0xd3333300) 
                                                                            - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                           >> 0x22U)))))) 
                                        << 1U)));
    __Vtemp219[3U] = ((7U & ((1U & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (VL_ULL(1) 
                                                                    & ((VL_ULL(0xd3333300) 
                                                                        - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                       >> 0x22U)))))) 
                                    >> 0x1fU)) | (6U 
                                                  & (VL_NEGATE_I((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (VL_ULL(1) 
                                                                                & ((VL_ULL(0xd3333300) 
                                                                                - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                                >> 0x22U)))))) 
                                                     << 1U)))) 
                      | (0xfffffff8U & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (VL_ULL(1) 
                                                                        & ((VL_ULL(0xd3333300) 
                                                                            - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                           >> 0x22U)))))) 
                                        << 1U)));
    __Vtemp219[4U] = (7U & ((1U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (VL_ULL(1) 
                                                                   & ((VL_ULL(0xd3333300) 
                                                                       - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                      >> 0x22U)))))) 
                                   >> 0x1fU)) | (6U 
                                                 & (VL_NEGATE_I((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (VL_ULL(1) 
                                                                                & ((VL_ULL(0xd3333300) 
                                                                                - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                                >> 0x22U)))))) 
                                                    << 1U))));
    VL_MUL_W(5, __Vtemp220, __Vtemp219, vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_340);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[0U] 
        = __Vtemp220[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[1U] 
        = __Vtemp220[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[2U] 
        = __Vtemp220[2U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[3U] 
        = __Vtemp220[3U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[4U] 
        = (7U & __Vtemp220[4U]);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_168 
        = (((QData)((IData)((1U & (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_148[2U] 
                                   >> 0x1cU)))) << 0x3bU) 
           | (VL_ULL(0x7ffffffffffffff) & (((QData)((IData)(
                                                            vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_148[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_148[0U])))));
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[0U] 
        = vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[1U] 
        = vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[2U] 
        = vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[2U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[3U] 
        = (1U & (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[4U] 
                 >> 2U));
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
        = (VL_ULL(0xfffffffff) & ((1U & (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_168 
                                                 >> 0x3bU)))
                                   ? (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_168 
                                      >> 0x18U) : (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_168 
                                                   >> 0x18U)));
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
        = (VL_ULL(0x1fffffffff) & ((1U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[3U])
                                    ? (((QData)((IData)(
                                                        vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[3U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[2U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[1U])) 
                                                   >> 0x1cU)))
                                    : (((QData)((IData)(
                                                        vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[3U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[2U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[1U])) 
                                                   >> 0x1cU)))));
    __Vtemp225[0U] = 0x36f9bfbU;
    __Vtemp225[1U] = 0U;
    __Vtemp225[2U] = 0U;
    __Vtemp225[3U] = 0U;
    __Vtemp225[4U] = 0U;
    __Vtemp225[5U] = 0U;
    __Vtemp231[0U] = 0U;
    __Vtemp231[1U] = (0xf8000000U & (((1U & (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                     >> 0x23U)))
                                       ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                  >> 0x17U))
                                       : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                  >> 0x17U))) 
                                     << 0x1bU));
    __Vtemp231[2U] = ((0xffffff00U & ((0x80000000U 
                                       & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                               >> 0x23U)))
                                                                    ? (IData)(
                                                                              (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                               >> 0x17U))
                                                                    : (IData)(
                                                                              (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                               >> 0x17U))) 
                                                                  >> 0xcU)))) 
                                          << 0x1fU)) 
                                      | (0x7fffff00U 
                                         & (VL_NEGATE_I((IData)(
                                                                (1U 
                                                                 & (((1U 
                                                                      & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                      ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                      : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                    >> 0xcU)))) 
                                            << 8U)))) 
                      | (0xffU & (((1U & (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                  >> 0x23U)))
                                    ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                               >> 0x17U))
                                    : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                               >> 0x17U))) 
                                  >> 5U)));
    __Vtemp231[3U] = ((0xffU & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (((1U 
                                                          & (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x23U)))
                                                          ? (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x17U))
                                                          : (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x17U))) 
                                                        >> 0xcU)))) 
                                >> 1U)) | (0xffffff00U 
                                           & ((0x7fffff00U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                            : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                          >> 0xcU)))) 
                                                  >> 1U)) 
                                              | (0x80000000U 
                                                 & (VL_NEGATE_I((IData)(
                                                                        (1U 
                                                                         & (((1U 
                                                                              & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                              ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                              : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                            >> 0xcU)))) 
                                                    << 0x1fU)))));
    __Vtemp231[4U] = ((0xffU & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (((1U 
                                                          & (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x23U)))
                                                          ? (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x17U))
                                                          : (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x17U))) 
                                                        >> 0xcU)))) 
                                >> 1U)) | (0xffffff00U 
                                           & ((0x7fffff00U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                            : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                          >> 0xcU)))) 
                                                  >> 1U)) 
                                              | (0x80000000U 
                                                 & (VL_NEGATE_I((IData)(
                                                                        (1U 
                                                                         & (((1U 
                                                                              & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                              ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                              : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                            >> 0xcU)))) 
                                                    << 0x1fU)))));
    __Vtemp231[5U] = (0xffU & (VL_NEGATE_I((IData)(
                                                   (1U 
                                                    & (((1U 
                                                         & (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                    >> 0x23U)))
                                                         ? (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                    >> 0x17U))
                                                         : (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                    >> 0x17U))) 
                                                       >> 0xcU)))) 
                               >> 1U));
    VL_MUL_W(6, __Vtemp232, __Vtemp225, __Vtemp231);
    __Vtemp235[0U] = 0x36f9bfbU;
    __Vtemp235[1U] = 0U;
    __Vtemp235[2U] = 0U;
    __Vtemp235[3U] = 0U;
    __Vtemp235[4U] = 0U;
    __Vtemp235[5U] = 0U;
    __Vtemp241[0U] = 0U;
    __Vtemp241[1U] = (0xf8000000U & (((1U & (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                     >> 0x23U)))
                                       ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                  >> 0x17U))
                                       : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                  >> 0x17U))) 
                                     << 0x1bU));
    __Vtemp241[2U] = ((0xffffff00U & ((0x80000000U 
                                       & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                               >> 0x23U)))
                                                                    ? (IData)(
                                                                              (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                               >> 0x17U))
                                                                    : (IData)(
                                                                              (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                               >> 0x17U))) 
                                                                  >> 0xcU)))) 
                                          << 0x1fU)) 
                                      | (0x7fffff00U 
                                         & (VL_NEGATE_I((IData)(
                                                                (1U 
                                                                 & (((1U 
                                                                      & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                      ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                      : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                    >> 0xcU)))) 
                                            << 8U)))) 
                      | (0xffU & (((1U & (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                  >> 0x23U)))
                                    ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                               >> 0x17U))
                                    : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                               >> 0x17U))) 
                                  >> 5U)));
    __Vtemp241[3U] = ((0xffU & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (((1U 
                                                          & (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x23U)))
                                                          ? (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x17U))
                                                          : (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x17U))) 
                                                        >> 0xcU)))) 
                                >> 1U)) | (0xffffff00U 
                                           & ((0x7fffff00U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                            : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                          >> 0xcU)))) 
                                                  >> 1U)) 
                                              | (0x80000000U 
                                                 & (VL_NEGATE_I((IData)(
                                                                        (1U 
                                                                         & (((1U 
                                                                              & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                              ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                              : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                            >> 0xcU)))) 
                                                    << 0x1fU)))));
    __Vtemp241[4U] = ((0xffU & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (((1U 
                                                          & (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x23U)))
                                                          ? (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x17U))
                                                          : (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x17U))) 
                                                        >> 0xcU)))) 
                                >> 1U)) | (0xffffff00U 
                                           & ((0x7fffff00U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                            : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                          >> 0xcU)))) 
                                                  >> 1U)) 
                                              | (0x80000000U 
                                                 & (VL_NEGATE_I((IData)(
                                                                        (1U 
                                                                         & (((1U 
                                                                              & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                              ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                              : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                            >> 0xcU)))) 
                                                    << 0x1fU)))));
    __Vtemp241[5U] = (0xffU & (VL_NEGATE_I((IData)(
                                                   (1U 
                                                    & (((1U 
                                                         & (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                    >> 0x23U)))
                                                         ? (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                    >> 0x17U))
                                                         : (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                    >> 0x17U))) 
                                                       >> 0xcU)))) 
                               >> 1U));
    VL_MUL_W(6, __Vtemp242, __Vtemp235, __Vtemp241);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[0U] 
        = __Vtemp242[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[1U] 
        = __Vtemp242[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[2U] 
        = __Vtemp242[2U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U] 
        = (1U & (__Vtemp232[5U] >> 7U));
    __Vtemp247[0U] = 0x36f9bfbU;
    __Vtemp247[1U] = 0U;
    __Vtemp247[2U] = 0U;
    __Vtemp247[3U] = 0U;
    __Vtemp247[4U] = 0U;
    __Vtemp247[5U] = 0U;
    __Vtemp253[0U] = 0U;
    __Vtemp253[1U] = (0xf8000000U & (((1U & (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                     >> 0x24U)))
                                       ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                  >> 0x18U))
                                       : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                  >> 0x18U))) 
                                     << 0x1bU));
    __Vtemp253[2U] = ((0xffffff00U & (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (((1U 
                                                                & (IData)(
                                                                          (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                           >> 0x24U)))
                                                                ? (IData)(
                                                                          (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                           >> 0x18U))
                                                                : (IData)(
                                                                          (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                           >> 0x18U))) 
                                                              >> 0xcU)))) 
                                      << 8U)) | (0xffU 
                                                 & (((1U 
                                                      & (IData)(
                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                 >> 0x24U)))
                                                      ? (IData)(
                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                 >> 0x18U))
                                                      : (IData)(
                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                 >> 0x18U))) 
                                                    >> 5U)));
    __Vtemp253[3U] = VL_NEGATE_I((IData)((1U & (((1U 
                                                  & (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x24U)))
                                                  ? (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x18U))
                                                  : (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x18U))) 
                                                >> 0xcU))));
    __Vtemp253[4U] = VL_NEGATE_I((IData)((1U & (((1U 
                                                  & (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x24U)))
                                                  ? (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x18U))
                                                  : (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x18U))) 
                                                >> 0xcU))));
    __Vtemp253[5U] = (0x1ffU & VL_NEGATE_I((IData)(
                                                   (1U 
                                                    & (((1U 
                                                         & (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                    >> 0x24U)))
                                                         ? (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                    >> 0x18U))
                                                         : (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                    >> 0x18U))) 
                                                       >> 0xcU)))));
    VL_MUL_W(6, __Vtemp254, __Vtemp247, __Vtemp253);
    __Vtemp258[0U] = 0x36f9bfbU;
    __Vtemp258[1U] = 0U;
    __Vtemp258[2U] = 0U;
    __Vtemp258[3U] = 0U;
    __Vtemp258[4U] = 0U;
    __Vtemp258[5U] = 0U;
    __Vtemp264[0U] = 0U;
    __Vtemp264[1U] = (0xf8000000U & (((1U & (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                     >> 0x24U)))
                                       ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                  >> 0x18U))
                                       : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                  >> 0x18U))) 
                                     << 0x1bU));
    __Vtemp264[2U] = ((0xffffff00U & (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (((1U 
                                                                & (IData)(
                                                                          (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                           >> 0x24U)))
                                                                ? (IData)(
                                                                          (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                           >> 0x18U))
                                                                : (IData)(
                                                                          (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                           >> 0x18U))) 
                                                              >> 0xcU)))) 
                                      << 8U)) | (0xffU 
                                                 & (((1U 
                                                      & (IData)(
                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                 >> 0x24U)))
                                                      ? (IData)(
                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                 >> 0x18U))
                                                      : (IData)(
                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                 >> 0x18U))) 
                                                    >> 5U)));
    __Vtemp264[3U] = VL_NEGATE_I((IData)((1U & (((1U 
                                                  & (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x24U)))
                                                  ? (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x18U))
                                                  : (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x18U))) 
                                                >> 0xcU))));
    __Vtemp264[4U] = VL_NEGATE_I((IData)((1U & (((1U 
                                                  & (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x24U)))
                                                  ? (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x18U))
                                                  : (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x18U))) 
                                                >> 0xcU))));
    __Vtemp264[5U] = (0x1ffU & VL_NEGATE_I((IData)(
                                                   (1U 
                                                    & (((1U 
                                                         & (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                    >> 0x24U)))
                                                         ? (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                    >> 0x18U))
                                                         : (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                    >> 0x18U))) 
                                                       >> 0xcU)))));
    VL_MUL_W(6, __Vtemp265, __Vtemp258, __Vtemp264);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[0U] 
        = __Vtemp265[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[1U] 
        = __Vtemp265[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[2U] 
        = __Vtemp265[2U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U] 
        = ((2U & (__Vtemp254[5U] >> 7U)) | (1U & __Vtemp265[3U]));
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_176 
        = ((0x70000U & (VL_NEGATE_I((IData)((1U & (
                                                   ((1U 
                                                     & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U])
                                                     ? 
                                                    ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U] 
                                                      << 0xfU) 
                                                     | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[2U] 
                                                        >> 0x11U))
                                                     : 
                                                    ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U] 
                                                      << 0xfU) 
                                                     | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[2U] 
                                                        >> 0x11U))) 
                                                   >> 0xfU)))) 
                        << 0x10U)) | (0xffffU & ((1U 
                                                  & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U])
                                                  ? 
                                                 ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U] 
                                                   << 0xfU) 
                                                  | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[2U] 
                                                     >> 0x11U))
                                                  : 
                                                 ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U] 
                                                   << 0xfU) 
                                                  | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[2U] 
                                                     >> 0x11U)))));
}

VL_INLINE_OPT void Vcomparator_latch__4877e2cc78717755::_sequent__TOP__3(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_latch__4877e2cc78717755::_sequent__TOP__3\n"); );
    Vcomparator_latch__4877e2cc78717755* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm;
    IData/*16:0*/ __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__state_cycle_counter;
    WData/*191:0*/ __Vtemp271[6];
    WData/*191:0*/ __Vtemp276[6];
    WData/*191:0*/ __Vtemp277[6];
    WData/*191:0*/ __Vtemp280[6];
    WData/*191:0*/ __Vtemp285[6];
    WData/*191:0*/ __Vtemp286[6];
    WData/*191:0*/ __Vtemp289[6];
    WData/*191:0*/ __Vtemp294[6];
    WData/*191:0*/ __Vtemp295[6];
    WData/*191:0*/ __Vtemp298[6];
    WData/*191:0*/ __Vtemp303[6];
    WData/*191:0*/ __Vtemp304[6];
    WData/*95:0*/ __Vtemp306[3];
    QData/*34:0*/ __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o;
    // Body
    __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__state_cycle_counter 
        = vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__state_cycle_counter;
    __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm 
        = vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm;
    __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
        = vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o;
    if (vlTOPp->reset) {
        __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm = 0U;
    } else {
        if ((0U == vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm)) {
            __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                = ((IData)(vlTOPp->reset) ? VL_ULL(0xd3333333)
                    : VL_ULL(0xd3300000));
            if ((((~ (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__prev_sys_clk)) 
                  & (IData)(vlTOPp->sys_clk)) & (((IData)(vlTOPp->n) 
                                                  > (IData)(vlTOPp->p)) 
                                                 & (0x200U 
                                                    >= (IData)(vlTOPp->n))))) {
                __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm = 1U;
            }
        } else {
            if ((1U == vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm)) {
                __Vtemp271[0U] = 0U;
                __Vtemp271[1U] = 0x5f200000U;
                __Vtemp271[2U] = 0x12a0U;
                __Vtemp271[3U] = 0U;
                __Vtemp271[4U] = 0U;
                __Vtemp271[5U] = 0U;
                __Vtemp276[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26);
                __Vtemp276[1U] = ((0xfff00000U & ((IData)(
                                                          (VL_ULL(0x1ffffffff) 
                                                           & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                                  << 0x14U)) 
                                  | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                             >> 0x20U)));
                __Vtemp276[2U] = ((0xffe00000U & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U))))) 
                                                  << 0x15U)) 
                                  | ((0xfffffU & ((IData)(
                                                          (VL_ULL(0x1ffffffff) 
                                                           & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                                  >> 0xcU)) 
                                     | (0xfff00000U 
                                        & ((IData)(
                                                   ((VL_ULL(0x1ffffffff) 
                                                     & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U))))))) 
                                                    >> 0x20U)) 
                                           << 0x14U))));
                __Vtemp276[3U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U))))) 
                                                >> 0xbU)) 
                                  | (0xffe00000U & 
                                     (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                      >> 0x33U))))) 
                                      << 0x15U)));
                __Vtemp276[4U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U))))) 
                                                >> 0xbU)) 
                                  | (0xffe00000U & 
                                     (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                      >> 0x33U))))) 
                                      << 0x15U)));
                __Vtemp276[5U] = (7U & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                        >> 0x33U))))) 
                                        >> 0xbU));
                VL_MUL_W(6, __Vtemp277, __Vtemp271, __Vtemp276);
                __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__state_cycle_counter 
                    = ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__state_cycle_counter 
                        > (0x3ffffU & (IData)(((QData)((IData)(
                                                               (0x1ffffU 
                                                                & ((__Vtemp277[3U] 
                                                                    << 0x12U) 
                                                                   | (__Vtemp277[2U] 
                                                                      >> 0xeU))))) 
                                               >> 0xfU))))
                        ? 0U : (0x1ffffU & ((IData)(1U) 
                                            + vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__state_cycle_counter)));
                __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                    = ((IData)(vlTOPp->reset) ? VL_ULL(0xd3333333)
                        : VL_ULL(0xd3300000));
                __Vtemp280[0U] = 0U;
                __Vtemp280[1U] = 0x5f200000U;
                __Vtemp280[2U] = 0x12a0U;
                __Vtemp280[3U] = 0U;
                __Vtemp280[4U] = 0U;
                __Vtemp280[5U] = 0U;
                __Vtemp285[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26);
                __Vtemp285[1U] = ((0xfff00000U & ((IData)(
                                                          (VL_ULL(0x1ffffffff) 
                                                           & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                                  << 0x14U)) 
                                  | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                             >> 0x20U)));
                __Vtemp285[2U] = ((0xffe00000U & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U))))) 
                                                  << 0x15U)) 
                                  | ((0xfffffU & ((IData)(
                                                          (VL_ULL(0x1ffffffff) 
                                                           & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                                  >> 0xcU)) 
                                     | (0xfff00000U 
                                        & ((IData)(
                                                   ((VL_ULL(0x1ffffffff) 
                                                     & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U))))))) 
                                                    >> 0x20U)) 
                                           << 0x14U))));
                __Vtemp285[3U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U))))) 
                                                >> 0xbU)) 
                                  | (0xffe00000U & 
                                     (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                      >> 0x33U))))) 
                                      << 0x15U)));
                __Vtemp285[4U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U))))) 
                                                >> 0xbU)) 
                                  | (0xffe00000U & 
                                     (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                      >> 0x33U))))) 
                                      << 0x15U)));
                __Vtemp285[5U] = (7U & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                        >> 0x33U))))) 
                                        >> 0xbU));
                VL_MUL_W(6, __Vtemp286, __Vtemp280, __Vtemp285);
                if ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__state_cycle_counter 
                     > (0x3ffffU & (IData)(((QData)((IData)(
                                                            (0x1ffffU 
                                                             & ((__Vtemp286[3U] 
                                                                 << 0x12U) 
                                                                | (__Vtemp286[2U] 
                                                                   >> 0xeU))))) 
                                            >> 0xfU))))) {
                    __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm = 2U;
                }
            } else {
                if ((2U == vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm)) {
                    __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                        = ((IData)(vlTOPp->reset) ? VL_ULL(0xd3333333)
                            : (VL_ULL(0x7ffffffff) 
                               & (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                  + ((QData)((IData)(
                                                     (0x7fffU 
                                                      & ((0x40000U 
                                                          & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_176)
                                                          ? 
                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_176 
                                                          >> 4U)
                                                          : 
                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_176 
                                                          >> 4U))))) 
                                     << 0x14U))));
                    if (((IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__prev_sys_clk) 
                         & (~ (IData)(vlTOPp->sys_clk)))) {
                        __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm = 3U;
                    }
                } else {
                    if ((3U == vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm)) {
                        __Vtemp289[0U] = 0U;
                        __Vtemp289[1U] = 0x2f900000U;
                        __Vtemp289[2U] = 0x950U;
                        __Vtemp289[3U] = 0U;
                        __Vtemp289[4U] = 0U;
                        __Vtemp289[5U] = 0U;
                        __Vtemp294[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207);
                        __Vtemp294[1U] = ((0xfff80000U 
                                           & ((IData)(
                                                      (VL_ULL(0x1ffffffff) 
                                                       & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                              << 0x13U)) 
                                          | (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                     >> 0x20U)));
                        __Vtemp294[2U] = ((0xfff00000U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                              >> 0x32U))))) 
                                              << 0x14U)) 
                                          | ((0x7ffffU 
                                              & ((IData)(
                                                         (VL_ULL(0x1ffffffff) 
                                                          & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                                 >> 0xdU)) 
                                             | (0xfff80000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x1ffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))))) 
                                                            >> 0x20U)) 
                                                   << 0x13U))));
                        __Vtemp294[3U] = ((0xfffffU 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                              >> 0x32U))))) 
                                              >> 0xcU)) 
                                          | (0xfff00000U 
                                             & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))) 
                                                << 0x14U)));
                        __Vtemp294[4U] = ((0xfffffU 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                              >> 0x32U))))) 
                                              >> 0xcU)) 
                                          | (0xfff00000U 
                                             & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))) 
                                                << 0x14U)));
                        __Vtemp294[5U] = (1U & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))) 
                                                >> 0xcU));
                        VL_MUL_W(6, __Vtemp295, __Vtemp289, __Vtemp294);
                        __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__state_cycle_counter 
                            = ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__state_cycle_counter 
                                > (1U & ((0x1ffe0U 
                                          & (__Vtemp295[3U] 
                                             << 5U)) 
                                         | (__Vtemp295[2U] 
                                            >> 0x1bU))))
                                ? 0U : (0x1ffffU & 
                                        ((IData)(1U) 
                                         + vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__state_cycle_counter)));
                        __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                            = ((IData)(vlTOPp->reset)
                                ? VL_ULL(0xd3333333)
                                : VL_ULL(0x100000));
                        __Vtemp298[0U] = 0U;
                        __Vtemp298[1U] = 0x2f900000U;
                        __Vtemp298[2U] = 0x950U;
                        __Vtemp298[3U] = 0U;
                        __Vtemp298[4U] = 0U;
                        __Vtemp298[5U] = 0U;
                        __Vtemp303[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207);
                        __Vtemp303[1U] = ((0xfff80000U 
                                           & ((IData)(
                                                      (VL_ULL(0x1ffffffff) 
                                                       & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                              << 0x13U)) 
                                          | (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                     >> 0x20U)));
                        __Vtemp303[2U] = ((0xfff00000U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                              >> 0x32U))))) 
                                              << 0x14U)) 
                                          | ((0x7ffffU 
                                              & ((IData)(
                                                         (VL_ULL(0x1ffffffff) 
                                                          & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                                 >> 0xdU)) 
                                             | (0xfff80000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x1ffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))))) 
                                                            >> 0x20U)) 
                                                   << 0x13U))));
                        __Vtemp303[3U] = ((0xfffffU 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                              >> 0x32U))))) 
                                              >> 0xcU)) 
                                          | (0xfff00000U 
                                             & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))) 
                                                << 0x14U)));
                        __Vtemp303[4U] = ((0xfffffU 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                              >> 0x32U))))) 
                                              >> 0xcU)) 
                                          | (0xfff00000U 
                                             & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))) 
                                                << 0x14U)));
                        __Vtemp303[5U] = (1U & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))) 
                                                >> 0xcU));
                        VL_MUL_W(6, __Vtemp304, __Vtemp298, __Vtemp303);
                        if ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__state_cycle_counter 
                             > (1U & ((0x1ffe0U & (
                                                   __Vtemp304[3U] 
                                                   << 5U)) 
                                      | (__Vtemp304[2U] 
                                         >> 0x1bU))))) {
                            __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm = 4U;
                        }
                    } else {
                        if ((4U == vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm)) {
                            __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                = ((IData)(vlTOPp->reset)
                                    ? VL_ULL(0xd3333333)
                                    : (VL_ULL(0x7ffffffff) 
                                       & (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                          + (((QData)((IData)(
                                                              (1U 
                                                               & (((2U 
                                                                    & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U])
                                                                    ? 
                                                                   ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U] 
                                                                     << 0xfU) 
                                                                    | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[2U] 
                                                                       >> 0x11U))
                                                                    : 
                                                                   ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U] 
                                                                     << 0xfU) 
                                                                    | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[2U] 
                                                                       >> 0x11U))) 
                                                                  >> 0x10U)))) 
                                              << 0x22U) 
                                             | ((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & ((2U 
                                                                     & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U])
                                                                     ? 
                                                                    ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U] 
                                                                      << 0xfU) 
                                                                     | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[2U] 
                                                                        >> 0x11U))
                                                                     : 
                                                                    ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U] 
                                                                      << 0xfU) 
                                                                     | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[2U] 
                                                                        >> 0x11U)))))) 
                                                << 0x11U)))));
                            if (((VL_ULL(0xd28f5c28) 
                                  < vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                 & (VL_ULL(0x400000000) 
                                    >= vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o))) {
                                __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__state_cycle_counter 
        = __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__state_cycle_counter;
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm 
        = __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm;
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
        = __Vdly__comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o;
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__prev_sys_clk 
        = vlTOPp->sys_clk;
    vlTOPp->out = (0x3ffU & ((0U == vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm)
                              ? (0x1ffU & (((1U & (IData)(
                                                          (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                           >> 0x22U)))
                                             ? (IData)(
                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                        >> 0x14U))
                                             : (IData)(
                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                        >> 0x14U))) 
                                           >> 3U)) : 
                             (0x1ffU & (((1U & (IData)(
                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                        >> 0x22U)))
                                          ? (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                     >> 0x14U))
                                          : (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                     >> 0x14U))) 
                                        >> 3U))));
    __Vtemp306[0U] = (IData)((((QData)((IData)((0x3fffffffU 
                                                & VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (VL_NEGATE_I(
                                                                                ((0x8000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 1U)) 
                                                                                | (0x7ffcU 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 2U)))) 
                                                                          >> 0xfU))))))) 
                               << 0x10U) | (QData)((IData)(
                                                           (0xffffU 
                                                            & VL_NEGATE_I(
                                                                          ((0x8000U 
                                                                            & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                               << 1U)) 
                                                                           | (0x7ffcU 
                                                                              & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 2U)))))))));
    __Vtemp306[1U] = ((0xffffc000U & ((IData)((VL_ULL(0x7fffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & (VL_NEGATE_I(
                                                                                ((0x8000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 1U)) 
                                                                                | (0x7ffcU 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 2U)))) 
                                                                                >> 0xfU))))))) 
                                      << 0xeU)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             (0x3fffffffU 
                                                                              & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (VL_NEGATE_I(
                                                                                ((0x8000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 1U)) 
                                                                                | (0x7ffcU 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 2U)))) 
                                                                                >> 0xfU))))))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & VL_NEGATE_I(
                                                                                ((0x8000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 1U)) 
                                                                                | (0x7ffcU 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 2U)))))))) 
                                                           >> 0x20U)));
    __Vtemp306[2U] = ((0x3fffU & ((IData)((VL_ULL(0x7fffffffffff) 
                                           & VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & (VL_NEGATE_I(
                                                                                ((0x8000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 1U)) 
                                                                                | (0x7ffcU 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 2U)))) 
                                                                             >> 0xfU))))))) 
                                  >> 0x12U)) | (0xffffc000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x7fffffffffff) 
                                                             & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (VL_NEGATE_I(
                                                                                ((0x8000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 1U)) 
                                                                                | (0x7ffcU 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x22U)))
                                                                                 ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                                                >> 0x14U))) 
                                                                                << 2U)))) 
                                                                                >> 0xfU)))))) 
                                                            >> 0x20U)) 
                                                   << 0xeU)));
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_149[0U] 
        = __Vtemp306[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_149[1U] 
        = __Vtemp306[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_149[2U] 
        = __Vtemp306[2U];
}

VL_INLINE_OPT void Vcomparator_latch__4877e2cc78717755::_combo__TOP__4(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_latch__4877e2cc78717755::_combo__TOP__4\n"); );
    Vcomparator_latch__4877e2cc78717755* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp312[5];
    WData/*159:0*/ __Vtemp313[5];
    WData/*95:0*/ __Vtemp317[3];
    WData/*95:0*/ __Vtemp318[3];
    WData/*95:0*/ __Vtemp319[3];
    WData/*95:0*/ __Vtemp322[3];
    WData/*95:0*/ __Vtemp323[3];
    WData/*95:0*/ __Vtemp324[3];
    WData/*95:0*/ __Vtemp326[3];
    WData/*95:0*/ __Vtemp327[3];
    WData/*191:0*/ __Vtemp332[6];
    WData/*191:0*/ __Vtemp338[6];
    WData/*191:0*/ __Vtemp339[6];
    WData/*191:0*/ __Vtemp343[6];
    WData/*191:0*/ __Vtemp349[6];
    WData/*191:0*/ __Vtemp350[6];
    WData/*191:0*/ __Vtemp356[6];
    WData/*191:0*/ __Vtemp362[6];
    WData/*191:0*/ __Vtemp363[6];
    WData/*191:0*/ __Vtemp366[6];
    WData/*191:0*/ __Vtemp372[6];
    WData/*191:0*/ __Vtemp373[6];
    // Body
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
        = (VL_ULL(0xfffffffffffff) & (VL_ULL(0x50500) 
                                      + (((2U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[3U])
                                           ? (((QData)((IData)(
                                                               vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[3U])) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[2U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[1U])) 
                                                    >> 0xeU)))
                                           : (((QData)((IData)(
                                                               vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[3U])) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[2U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[1U])) 
                                                    >> 0xeU)))) 
                                         + (VL_ULL(0xffffffffffffc) 
                                            & (((0x20000000U 
                                                 & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[2U])
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[2U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[1U])) 
                                                    >> 0xcU))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[2U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[1U])) 
                                                    >> 0xcU))) 
                                               << 2U)))));
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
        = (VL_ULL(0x7ffffffffffff) & (VL_ULL(0x12840) 
                                      + (((2U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[3U])
                                           ? (((QData)((IData)(
                                                               vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[3U])) 
                                               << 0x31U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[2U])) 
                                                  << 0x11U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[1U])) 
                                                    >> 0xfU)))
                                           : (((QData)((IData)(
                                                               vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[3U])) 
                                               << 0x31U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[2U])) 
                                                  << 0x11U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[1U])) 
                                                    >> 0xfU)))) 
                                         + (VL_ULL(0x7fffffffffffe) 
                                            & (((0x20000000U 
                                                 & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[2U])
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[2U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[1U])) 
                                                    >> 0xcU))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[2U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[1U])) 
                                                    >> 0xcU))) 
                                               << 1U)))));
    __Vtemp312[0U] = (IData)((VL_ULL(0x7ffffffff) & 
                              (VL_ULL(0xd3333300) - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o)));
    __Vtemp312[1U] = ((0xfffffff8U & (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (VL_ULL(1) 
                                                                      & ((VL_ULL(0xd3333300) 
                                                                          - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                         >> 0x22U)))))) 
                                      << 3U)) | (IData)(
                                                        ((VL_ULL(0x7ffffffff) 
                                                          & (VL_ULL(0xd3333300) 
                                                             - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o)) 
                                                         >> 0x20U)));
    __Vtemp312[2U] = ((7U & ((6U & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (VL_ULL(1) 
                                                                    & ((VL_ULL(0xd3333300) 
                                                                        - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                       >> 0x22U)))))) 
                                    << 1U)) | (1U & 
                                               (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (VL_ULL(1) 
                                                                                & ((VL_ULL(0xd3333300) 
                                                                                - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                                >> 0x22U)))))) 
                                                >> 0x1dU)))) 
                      | (0xfffffff8U & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (VL_ULL(1) 
                                                                        & ((VL_ULL(0xd3333300) 
                                                                            - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                           >> 0x22U)))))) 
                                        << 1U)));
    __Vtemp312[3U] = ((7U & ((1U & (VL_NEGATE_I((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (VL_ULL(1) 
                                                                    & ((VL_ULL(0xd3333300) 
                                                                        - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                       >> 0x22U)))))) 
                                    >> 0x1fU)) | (6U 
                                                  & (VL_NEGATE_I((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (VL_ULL(1) 
                                                                                & ((VL_ULL(0xd3333300) 
                                                                                - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                                >> 0x22U)))))) 
                                                     << 1U)))) 
                      | (0xfffffff8U & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (VL_ULL(1) 
                                                                        & ((VL_ULL(0xd3333300) 
                                                                            - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                           >> 0x22U)))))) 
                                        << 1U)));
    __Vtemp312[4U] = (7U & ((1U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (VL_ULL(1) 
                                                                   & ((VL_ULL(0xd3333300) 
                                                                       - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                      >> 0x22U)))))) 
                                   >> 0x1fU)) | (6U 
                                                 & (VL_NEGATE_I((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (VL_ULL(1) 
                                                                                & ((VL_ULL(0xd3333300) 
                                                                                - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                                >> 0x22U)))))) 
                                                    << 1U))));
    VL_MUL_W(5, __Vtemp313, __Vtemp312, vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_340);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[0U] 
        = __Vtemp313[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[1U] 
        = __Vtemp313[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[2U] 
        = __Vtemp313[2U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[3U] 
        = __Vtemp313[3U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[4U] 
        = (7U & __Vtemp313[4U]);
    __Vtemp317[0U] = 0x40dU;
    __Vtemp317[1U] = 0U;
    __Vtemp317[2U] = 0U;
    VL_EXTEND_WQ(92,46, __Vtemp318, ((QData)((IData)(vlTOPp->p)) 
                                     << 0x24U));
    VL_MUL_W(3, __Vtemp319, __Vtemp317, __Vtemp318);
    __Vtemp322[0U] = 0x40dU;
    __Vtemp322[1U] = 0U;
    __Vtemp322[2U] = 0U;
    VL_EXTEND_WQ(92,46, __Vtemp323, ((QData)((IData)(vlTOPp->p)) 
                                     << 0x24U));
    VL_MUL_W(3, __Vtemp324, __Vtemp322, __Vtemp323);
    __Vtemp326[0U] = (IData)((VL_ULL(0x1ffffffff000) 
                              & (VL_DIV_QQQ(52, VL_ULL(0x8000000000000), 
                                            (VL_ULL(0x3ffffffffffc0) 
                                             & ((VL_ULL(0x4120) 
                                                 + 
                                                 ((VL_ULL(0x7fffffffffff) 
                                                   & ((0x800000U 
                                                       & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                                          >> 9U))
                                                       : 
                                                      (((QData)((IData)(
                                                                        vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                                          >> 9U)))) 
                                                  + 
                                                  (VL_ULL(0x1fffffffffff) 
                                                   & (((QData)((IData)(
                                                                       (0xfffffffU 
                                                                        & __Vtemp324[2U]))) 
                                                       << 0x17U) 
                                                      | ((QData)((IData)(
                                                                         __Vtemp324[1U])) 
                                                         >> 9U))))) 
                                                << 6U))) 
                                 << 0xcU)));
    __Vtemp326[1U] = (IData)(((VL_ULL(0x1ffffffff000) 
                               & (VL_DIV_QQQ(52, VL_ULL(0x8000000000000), 
                                             (VL_ULL(0x3ffffffffffc0) 
                                              & ((VL_ULL(0x4120) 
                                                  + 
                                                  ((VL_ULL(0x7fffffffffff) 
                                                    & ((0x800000U 
                                                        & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                                         << 0x17U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                                           >> 9U))
                                                        : 
                                                       (((QData)((IData)(
                                                                         vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                                         << 0x17U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                                           >> 9U)))) 
                                                   + 
                                                   (VL_ULL(0x1fffffffffff) 
                                                    & (((QData)((IData)(
                                                                        (0xfffffffU 
                                                                         & __Vtemp324[2U]))) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          __Vtemp324[1U])) 
                                                          >> 9U))))) 
                                                 << 6U))) 
                                  << 0xcU)) >> 0x20U));
    __Vtemp326[2U] = 0U;
    VL_MUL_W(3, __Vtemp327, vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_149, __Vtemp326);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_148[0U] 
        = __Vtemp327[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_148[1U] 
        = __Vtemp327[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_148[2U] 
        = (0x1fffffffU & __Vtemp327[2U]);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[0U] 
        = vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[1U] 
        = vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[2U] 
        = vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[2U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[3U] 
        = (1U & (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328[4U] 
                 >> 2U));
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_168 
        = (((QData)((IData)((1U & (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_148[2U] 
                                   >> 0x1cU)))) << 0x3bU) 
           | (VL_ULL(0x7ffffffffffffff) & (((QData)((IData)(
                                                            vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_148[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_148[0U])))));
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
        = (VL_ULL(0x1fffffffff) & ((1U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[3U])
                                    ? (((QData)((IData)(
                                                        vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[3U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[2U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[1U])) 
                                                   >> 0x1cU)))
                                    : (((QData)((IData)(
                                                        vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[3U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[2U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[1U])) 
                                                   >> 0x1cU)))));
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
        = (VL_ULL(0xfffffffff) & ((1U & (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_168 
                                                 >> 0x3bU)))
                                   ? (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_168 
                                      >> 0x18U) : (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_168 
                                                   >> 0x18U)));
    __Vtemp332[0U] = 0x36f9bfbU;
    __Vtemp332[1U] = 0U;
    __Vtemp332[2U] = 0U;
    __Vtemp332[3U] = 0U;
    __Vtemp332[4U] = 0U;
    __Vtemp332[5U] = 0U;
    __Vtemp338[0U] = 0U;
    __Vtemp338[1U] = (0xf8000000U & (((1U & (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                     >> 0x24U)))
                                       ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                  >> 0x18U))
                                       : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                  >> 0x18U))) 
                                     << 0x1bU));
    __Vtemp338[2U] = ((0xffffff00U & (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (((1U 
                                                                & (IData)(
                                                                          (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                           >> 0x24U)))
                                                                ? (IData)(
                                                                          (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                           >> 0x18U))
                                                                : (IData)(
                                                                          (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                           >> 0x18U))) 
                                                              >> 0xcU)))) 
                                      << 8U)) | (0xffU 
                                                 & (((1U 
                                                      & (IData)(
                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                 >> 0x24U)))
                                                      ? (IData)(
                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                 >> 0x18U))
                                                      : (IData)(
                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                 >> 0x18U))) 
                                                    >> 5U)));
    __Vtemp338[3U] = VL_NEGATE_I((IData)((1U & (((1U 
                                                  & (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x24U)))
                                                  ? (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x18U))
                                                  : (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x18U))) 
                                                >> 0xcU))));
    __Vtemp338[4U] = VL_NEGATE_I((IData)((1U & (((1U 
                                                  & (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x24U)))
                                                  ? (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x18U))
                                                  : (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x18U))) 
                                                >> 0xcU))));
    __Vtemp338[5U] = (0x1ffU & VL_NEGATE_I((IData)(
                                                   (1U 
                                                    & (((1U 
                                                         & (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                    >> 0x24U)))
                                                         ? (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                    >> 0x18U))
                                                         : (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                    >> 0x18U))) 
                                                       >> 0xcU)))));
    VL_MUL_W(6, __Vtemp339, __Vtemp332, __Vtemp338);
    __Vtemp343[0U] = 0x36f9bfbU;
    __Vtemp343[1U] = 0U;
    __Vtemp343[2U] = 0U;
    __Vtemp343[3U] = 0U;
    __Vtemp343[4U] = 0U;
    __Vtemp343[5U] = 0U;
    __Vtemp349[0U] = 0U;
    __Vtemp349[1U] = (0xf8000000U & (((1U & (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                     >> 0x24U)))
                                       ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                  >> 0x18U))
                                       : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                  >> 0x18U))) 
                                     << 0x1bU));
    __Vtemp349[2U] = ((0xffffff00U & (VL_NEGATE_I((IData)(
                                                          (1U 
                                                           & (((1U 
                                                                & (IData)(
                                                                          (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                           >> 0x24U)))
                                                                ? (IData)(
                                                                          (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                           >> 0x18U))
                                                                : (IData)(
                                                                          (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                           >> 0x18U))) 
                                                              >> 0xcU)))) 
                                      << 8U)) | (0xffU 
                                                 & (((1U 
                                                      & (IData)(
                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                 >> 0x24U)))
                                                      ? (IData)(
                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                 >> 0x18U))
                                                      : (IData)(
                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                 >> 0x18U))) 
                                                    >> 5U)));
    __Vtemp349[3U] = VL_NEGATE_I((IData)((1U & (((1U 
                                                  & (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x24U)))
                                                  ? (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x18U))
                                                  : (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x18U))) 
                                                >> 0xcU))));
    __Vtemp349[4U] = VL_NEGATE_I((IData)((1U & (((1U 
                                                  & (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x24U)))
                                                  ? (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x18U))
                                                  : (IData)(
                                                            (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                             >> 0x18U))) 
                                                >> 0xcU))));
    __Vtemp349[5U] = (0x1ffU & VL_NEGATE_I((IData)(
                                                   (1U 
                                                    & (((1U 
                                                         & (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                    >> 0x24U)))
                                                         ? (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                    >> 0x18U))
                                                         : (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                    >> 0x18U))) 
                                                       >> 0xcU)))));
    VL_MUL_W(6, __Vtemp350, __Vtemp343, __Vtemp349);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[0U] 
        = __Vtemp350[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[1U] 
        = __Vtemp350[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[2U] 
        = __Vtemp350[2U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U] 
        = ((2U & (__Vtemp339[5U] >> 7U)) | (1U & __Vtemp350[3U]));
    __Vtemp356[0U] = 0x36f9bfbU;
    __Vtemp356[1U] = 0U;
    __Vtemp356[2U] = 0U;
    __Vtemp356[3U] = 0U;
    __Vtemp356[4U] = 0U;
    __Vtemp356[5U] = 0U;
    __Vtemp362[0U] = 0U;
    __Vtemp362[1U] = (0xf8000000U & (((1U & (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                     >> 0x23U)))
                                       ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                  >> 0x17U))
                                       : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                  >> 0x17U))) 
                                     << 0x1bU));
    __Vtemp362[2U] = ((0xffffff00U & ((0x80000000U 
                                       & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                               >> 0x23U)))
                                                                    ? (IData)(
                                                                              (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                               >> 0x17U))
                                                                    : (IData)(
                                                                              (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                               >> 0x17U))) 
                                                                  >> 0xcU)))) 
                                          << 0x1fU)) 
                                      | (0x7fffff00U 
                                         & (VL_NEGATE_I((IData)(
                                                                (1U 
                                                                 & (((1U 
                                                                      & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                      ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                      : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                    >> 0xcU)))) 
                                            << 8U)))) 
                      | (0xffU & (((1U & (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                  >> 0x23U)))
                                    ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                               >> 0x17U))
                                    : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                               >> 0x17U))) 
                                  >> 5U)));
    __Vtemp362[3U] = ((0xffU & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (((1U 
                                                          & (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x23U)))
                                                          ? (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x17U))
                                                          : (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x17U))) 
                                                        >> 0xcU)))) 
                                >> 1U)) | (0xffffff00U 
                                           & ((0x7fffff00U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                            : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                          >> 0xcU)))) 
                                                  >> 1U)) 
                                              | (0x80000000U 
                                                 & (VL_NEGATE_I((IData)(
                                                                        (1U 
                                                                         & (((1U 
                                                                              & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                              ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                              : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                            >> 0xcU)))) 
                                                    << 0x1fU)))));
    __Vtemp362[4U] = ((0xffU & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (((1U 
                                                          & (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x23U)))
                                                          ? (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x17U))
                                                          : (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x17U))) 
                                                        >> 0xcU)))) 
                                >> 1U)) | (0xffffff00U 
                                           & ((0x7fffff00U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                            : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                          >> 0xcU)))) 
                                                  >> 1U)) 
                                              | (0x80000000U 
                                                 & (VL_NEGATE_I((IData)(
                                                                        (1U 
                                                                         & (((1U 
                                                                              & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                              ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                              : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                            >> 0xcU)))) 
                                                    << 0x1fU)))));
    __Vtemp362[5U] = (0xffU & (VL_NEGATE_I((IData)(
                                                   (1U 
                                                    & (((1U 
                                                         & (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                    >> 0x23U)))
                                                         ? (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                    >> 0x17U))
                                                         : (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                    >> 0x17U))) 
                                                       >> 0xcU)))) 
                               >> 1U));
    VL_MUL_W(6, __Vtemp363, __Vtemp356, __Vtemp362);
    __Vtemp366[0U] = 0x36f9bfbU;
    __Vtemp366[1U] = 0U;
    __Vtemp366[2U] = 0U;
    __Vtemp366[3U] = 0U;
    __Vtemp366[4U] = 0U;
    __Vtemp366[5U] = 0U;
    __Vtemp372[0U] = 0U;
    __Vtemp372[1U] = (0xf8000000U & (((1U & (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                     >> 0x23U)))
                                       ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                  >> 0x17U))
                                       : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                  >> 0x17U))) 
                                     << 0x1bU));
    __Vtemp372[2U] = ((0xffffff00U & ((0x80000000U 
                                       & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                               >> 0x23U)))
                                                                    ? (IData)(
                                                                              (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                               >> 0x17U))
                                                                    : (IData)(
                                                                              (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                               >> 0x17U))) 
                                                                  >> 0xcU)))) 
                                          << 0x1fU)) 
                                      | (0x7fffff00U 
                                         & (VL_NEGATE_I((IData)(
                                                                (1U 
                                                                 & (((1U 
                                                                      & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                      ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                      : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                    >> 0xcU)))) 
                                            << 8U)))) 
                      | (0xffU & (((1U & (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                  >> 0x23U)))
                                    ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                               >> 0x17U))
                                    : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                               >> 0x17U))) 
                                  >> 5U)));
    __Vtemp372[3U] = ((0xffU & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (((1U 
                                                          & (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x23U)))
                                                          ? (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x17U))
                                                          : (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x17U))) 
                                                        >> 0xcU)))) 
                                >> 1U)) | (0xffffff00U 
                                           & ((0x7fffff00U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                            : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                          >> 0xcU)))) 
                                                  >> 1U)) 
                                              | (0x80000000U 
                                                 & (VL_NEGATE_I((IData)(
                                                                        (1U 
                                                                         & (((1U 
                                                                              & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                              ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                              : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                            >> 0xcU)))) 
                                                    << 0x1fU)))));
    __Vtemp372[4U] = ((0xffU & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (((1U 
                                                          & (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x23U)))
                                                          ? (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x17U))
                                                          : (IData)(
                                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                     >> 0x17U))) 
                                                        >> 0xcU)))) 
                                >> 1U)) | (0xffffff00U 
                                           & ((0x7fffff00U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                            ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                            : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                          >> 0xcU)))) 
                                                  >> 1U)) 
                                              | (0x80000000U 
                                                 & (VL_NEGATE_I((IData)(
                                                                        (1U 
                                                                         & (((1U 
                                                                              & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x23U)))
                                                                              ? (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))
                                                                              : (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                                >> 0x17U))) 
                                                                            >> 0xcU)))) 
                                                    << 0x1fU)))));
    __Vtemp372[5U] = (0xffU & (VL_NEGATE_I((IData)(
                                                   (1U 
                                                    & (((1U 
                                                         & (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                    >> 0x23U)))
                                                         ? (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                    >> 0x17U))
                                                         : (IData)(
                                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                    >> 0x17U))) 
                                                       >> 0xcU)))) 
                               >> 1U));
    VL_MUL_W(6, __Vtemp373, __Vtemp366, __Vtemp372);
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[0U] 
        = __Vtemp373[0U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[1U] 
        = __Vtemp373[1U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[2U] 
        = __Vtemp373[2U];
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U] 
        = (1U & (__Vtemp363[5U] >> 7U));
    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_176 
        = ((0x70000U & (VL_NEGATE_I((IData)((1U & (
                                                   ((1U 
                                                     & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U])
                                                     ? 
                                                    ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U] 
                                                      << 0xfU) 
                                                     | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[2U] 
                                                        >> 0x11U))
                                                     : 
                                                    ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U] 
                                                      << 0xfU) 
                                                     | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[2U] 
                                                        >> 0x11U))) 
                                                   >> 0xfU)))) 
                        << 0x10U)) | (0xffffU & ((1U 
                                                  & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U])
                                                  ? 
                                                 ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U] 
                                                   << 0xfU) 
                                                  | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[2U] 
                                                     >> 0x11U))
                                                  : 
                                                 ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U] 
                                                   << 0xfU) 
                                                  | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[2U] 
                                                     >> 0x11U)))));
}

void Vcomparator_latch__4877e2cc78717755::_eval(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_latch__4877e2cc78717755::_eval\n"); );
    Vcomparator_latch__4877e2cc78717755* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vcomparator_latch__4877e2cc78717755::_eval_initial(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_latch__4877e2cc78717755::_eval_initial\n"); );
    Vcomparator_latch__4877e2cc78717755* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vcomparator_latch__4877e2cc78717755::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_latch__4877e2cc78717755::final\n"); );
    // Variables
    Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcomparator_latch__4877e2cc78717755* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcomparator_latch__4877e2cc78717755::_eval_settle(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_latch__4877e2cc78717755::_eval_settle\n"); );
    Vcomparator_latch__4877e2cc78717755* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vcomparator_latch__4877e2cc78717755::_change_request(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_latch__4877e2cc78717755::_change_request\n"); );
    Vcomparator_latch__4877e2cc78717755* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcomparator_latch__4877e2cc78717755::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_latch__4877e2cc78717755::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((n & 0xfc00U))) {
        Verilated::overWidthError("n");}
    if (VL_UNLIKELY((p & 0xfc00U))) {
        Verilated::overWidthError("p");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((sys_clk & 0xfeU))) {
        Verilated::overWidthError("sys_clk");}
}
#endif  // VL_DEBUG

void Vcomparator_latch__4877e2cc78717755::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_latch__4877e2cc78717755::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    n = VL_RAND_RESET_I(10);
    out = VL_RAND_RESET_I(10);
    p = VL_RAND_RESET_I(10);
    reset = VL_RAND_RESET_I(1);
    sys_clk = VL_RAND_RESET_I(1);
    comparator_latch___05F4877e2cc78717755__DOT__v__DOT__state_cycle_counter = VL_RAND_RESET_I(17);
    comparator_latch___05F4877e2cc78717755__DOT__v__DOT__prev_sys_clk = VL_RAND_RESET_I(1);
    comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o = VL_RAND_RESET_Q(35);
    comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm = VL_RAND_RESET_I(32);
    comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(98, comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40);
    VL_RAND_RESET_W(94, comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58);
    VL_RAND_RESET_W(88, comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110);
    VL_RAND_RESET_W(93, comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_148);
    VL_RAND_RESET_W(93, comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_149);
    comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_168 = VL_RAND_RESET_Q(60);
    comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 = VL_RAND_RESET_Q(36);
    comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_176 = VL_RAND_RESET_I(19);
    VL_RAND_RESET_W(97, comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191);
    comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 = VL_RAND_RESET_Q(51);
    VL_RAND_RESET_W(98, comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221);
    VL_RAND_RESET_W(94, comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239);
    VL_RAND_RESET_W(96, comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311);
    VL_RAND_RESET_W(131, comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328);
    VL_RAND_RESET_W(131, comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_340);
    VL_RAND_RESET_W(97, comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347);
    comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 = VL_RAND_RESET_Q(37);
    VL_RAND_RESET_W(98, comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369);
    __Vm_traceActivity = 0;
}
