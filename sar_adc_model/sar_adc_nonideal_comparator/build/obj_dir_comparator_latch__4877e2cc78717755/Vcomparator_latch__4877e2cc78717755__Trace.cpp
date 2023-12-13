// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcomparator_latch__4877e2cc78717755__Syms.h"


//======================

void Vcomparator_latch__4877e2cc78717755::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vcomparator_latch__4877e2cc78717755* t = (Vcomparator_latch__4877e2cc78717755*)userthis;
    Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vcomparator_latch__4877e2cc78717755::traceChgThis(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcomparator_latch__4877e2cc78717755* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vcomparator_latch__4877e2cc78717755::traceChgThis__2(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcomparator_latch__4877e2cc78717755* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*191:0*/ __Vtemp755[6];
    WData/*191:0*/ __Vtemp760[6];
    WData/*191:0*/ __Vtemp761[6];
    WData/*191:0*/ __Vtemp764[6];
    WData/*191:0*/ __Vtemp769[6];
    WData/*191:0*/ __Vtemp770[6];
    WData/*191:0*/ __Vtemp773[6];
    WData/*191:0*/ __Vtemp778[6];
    WData/*191:0*/ __Vtemp779[6];
    WData/*191:0*/ __Vtemp782[6];
    WData/*191:0*/ __Vtemp787[6];
    WData/*191:0*/ __Vtemp788[6];
    WData/*191:0*/ __Vtemp791[6];
    WData/*191:0*/ __Vtemp796[6];
    WData/*191:0*/ __Vtemp797[6];
    WData/*191:0*/ __Vtemp801[6];
    WData/*191:0*/ __Vtemp806[6];
    WData/*191:0*/ __Vtemp807[6];
    WData/*95:0*/ __Vtemp810[3];
    WData/*191:0*/ __Vtemp812[6];
    WData/*191:0*/ __Vtemp817[6];
    WData/*191:0*/ __Vtemp818[6];
    WData/*191:0*/ __Vtemp819[6];
    WData/*191:0*/ __Vtemp824[6];
    WData/*95:0*/ __Vtemp825[3];
    WData/*191:0*/ __Vtemp827[6];
    WData/*191:0*/ __Vtemp833[6];
    WData/*191:0*/ __Vtemp834[6];
    WData/*191:0*/ __Vtemp835[6];
    WData/*191:0*/ __Vtemp841[6];
    WData/*95:0*/ __Vtemp843[3];
    WData/*191:0*/ __Vtemp845[6];
    WData/*191:0*/ __Vtemp850[6];
    WData/*191:0*/ __Vtemp851[6];
    WData/*191:0*/ __Vtemp854[6];
    WData/*191:0*/ __Vtemp859[6];
    WData/*191:0*/ __Vtemp860[6];
    WData/*191:0*/ __Vtemp863[6];
    WData/*191:0*/ __Vtemp868[6];
    WData/*191:0*/ __Vtemp869[6];
    WData/*191:0*/ __Vtemp872[6];
    WData/*191:0*/ __Vtemp877[6];
    WData/*191:0*/ __Vtemp878[6];
    WData/*191:0*/ __Vtemp882[6];
    WData/*191:0*/ __Vtemp887[6];
    WData/*191:0*/ __Vtemp888[6];
    WData/*95:0*/ __Vtemp891[3];
    WData/*191:0*/ __Vtemp893[6];
    WData/*191:0*/ __Vtemp898[6];
    WData/*191:0*/ __Vtemp899[6];
    WData/*191:0*/ __Vtemp900[6];
    WData/*191:0*/ __Vtemp905[6];
    WData/*95:0*/ __Vtemp906[3];
    WData/*191:0*/ __Vtemp908[6];
    WData/*191:0*/ __Vtemp914[6];
    WData/*191:0*/ __Vtemp915[6];
    WData/*191:0*/ __Vtemp916[6];
    WData/*191:0*/ __Vtemp922[6];
    WData/*95:0*/ __Vtemp924[3];
    // Body
    {
        __Vtemp755[0U] = 0U;
        __Vtemp755[1U] = 0x5f200000U;
        __Vtemp755[2U] = 0x12a0U;
        __Vtemp755[3U] = 0U;
        __Vtemp755[4U] = 0U;
        __Vtemp755[5U] = 0U;
        __Vtemp760[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26);
        __Vtemp760[1U] = ((0xfff00000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                          << 0x14U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                     >> 0x20U)));
        __Vtemp760[2U] = ((0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)) 
                          | ((0xfffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                          >> 0xcU)) 
                             | (0xfff00000U & ((IData)(
                                                       ((VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U))))))) 
                                                        >> 0x20U)) 
                                               << 0x14U))));
        __Vtemp760[3U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                        >> 0x33U))))) 
                                        >> 0xbU)) | 
                          (0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)));
        __Vtemp760[4U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                        >> 0x33U))))) 
                                        >> 0xbU)) | 
                          (0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)));
        __Vtemp760[5U] = (7U & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                >> 0x33U))))) 
                                >> 0xbU));
        VL_MUL_W(6, __Vtemp761, __Vtemp755, __Vtemp760);
        vcdp->chgBus(c+1,((0x3ffffU & (IData)(((QData)((IData)(
                                                               (0x1ffffU 
                                                                & ((__Vtemp761[3U] 
                                                                    << 0x12U) 
                                                                   | (__Vtemp761[2U] 
                                                                      >> 0xeU))))) 
                                               >> 0xfU)))),32);
        vcdp->chgQuad(c+9,((((QData)((IData)((0x7fffffU 
                                              & VL_NEGATE_I((IData)(
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
                                                                        >> 0xcU))))))) 
                             << 0xdU) | (QData)((IData)(
                                                        (0x1fffU 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                        >> 0x23U)))
                                                             ? (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                        >> 0x17U))
                                                             : (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                                        >> 0x17U)))))))),36);
        __Vtemp764[0U] = 0U;
        __Vtemp764[1U] = 0x2f900000U;
        __Vtemp764[2U] = 0x950U;
        __Vtemp764[3U] = 0U;
        __Vtemp764[4U] = 0U;
        __Vtemp764[5U] = 0U;
        __Vtemp769[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207);
        __Vtemp769[1U] = ((0xfff80000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          << 0x13U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                     >> 0x20U)));
        __Vtemp769[2U] = ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)) 
                          | ((0x7ffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          >> 0xdU)) 
                             | (0xfff80000U & ((IData)(
                                                       ((VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))))) 
                                                        >> 0x20U)) 
                                               << 0x13U))));
        __Vtemp769[3U] = ((0xfffffU & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                       >> 0x32U))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)));
        __Vtemp769[4U] = ((0xfffffU & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                       >> 0x32U))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)));
        __Vtemp769[5U] = (1U & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                >> 0x32U))))) 
                                >> 0xcU));
        VL_MUL_W(6, __Vtemp770, __Vtemp764, __Vtemp769);
        vcdp->chgBus(c+25,((1U & ((0x1ffe0U & (__Vtemp770[3U] 
                                               << 5U)) 
                                  | (__Vtemp770[2U] 
                                     >> 0x1bU)))),32);
        vcdp->chgQuad(c+33,((((QData)((IData)((0xffffffU 
                                               & VL_NEGATE_I((IData)(
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
                                                                         >> 0xcU))))))) 
                              << 0xdU) | (QData)((IData)(
                                                         (0x1fffU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                         >> 0x24U)))
                                                              ? (IData)(
                                                                        (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                         >> 0x18U))
                                                              : (IData)(
                                                                        (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                                         >> 0x18U)))))))),37);
        __Vtemp773[0U] = 0U;
        __Vtemp773[1U] = 0x5f200000U;
        __Vtemp773[2U] = 0x12a0U;
        __Vtemp773[3U] = 0U;
        __Vtemp773[4U] = 0U;
        __Vtemp773[5U] = 0U;
        __Vtemp778[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26);
        __Vtemp778[1U] = ((0xfff00000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                          << 0x14U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                     >> 0x20U)));
        __Vtemp778[2U] = ((0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)) 
                          | ((0xfffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                          >> 0xcU)) 
                             | (0xfff00000U & ((IData)(
                                                       ((VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U))))))) 
                                                        >> 0x20U)) 
                                               << 0x14U))));
        __Vtemp778[3U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                        >> 0x33U))))) 
                                        >> 0xbU)) | 
                          (0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)));
        __Vtemp778[4U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                        >> 0x33U))))) 
                                        >> 0xbU)) | 
                          (0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)));
        __Vtemp778[5U] = (7U & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                >> 0x33U))))) 
                                >> 0xbU));
        VL_MUL_W(6, __Vtemp779, __Vtemp773, __Vtemp778);
        vcdp->chgBus(c+49,((0x3ffffU & (IData)(((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & ((__Vtemp779[3U] 
                                                                     << 0x12U) 
                                                                    | (__Vtemp779[2U] 
                                                                       >> 0xeU))))) 
                                                >> 0xfU)))),18);
        __Vtemp782[0U] = 0U;
        __Vtemp782[1U] = 0x5f200000U;
        __Vtemp782[2U] = 0x12a0U;
        __Vtemp782[3U] = 0U;
        __Vtemp782[4U] = 0U;
        __Vtemp782[5U] = 0U;
        __Vtemp787[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26);
        __Vtemp787[1U] = ((0xfff00000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                          << 0x14U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                     >> 0x20U)));
        __Vtemp787[2U] = ((0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)) 
                          | ((0xfffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                          >> 0xcU)) 
                             | (0xfff00000U & ((IData)(
                                                       ((VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U))))))) 
                                                        >> 0x20U)) 
                                               << 0x14U))));
        __Vtemp787[3U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                        >> 0x33U))))) 
                                        >> 0xbU)) | 
                          (0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)));
        __Vtemp787[4U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                        >> 0x33U))))) 
                                        >> 0xbU)) | 
                          (0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)));
        __Vtemp787[5U] = (7U & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                >> 0x33U))))) 
                                >> 0xbU));
        VL_MUL_W(6, __Vtemp788, __Vtemp782, __Vtemp787);
        vcdp->chgQuad(c+57,((QData)((IData)((0x1ffffU 
                                             & ((__Vtemp788[3U] 
                                                 << 0x12U) 
                                                | (__Vtemp788[2U] 
                                                   >> 0xeU)))))),33);
        __Vtemp791[0U] = 0U;
        __Vtemp791[1U] = 0x5f200000U;
        __Vtemp791[2U] = 0x12a0U;
        __Vtemp791[3U] = 0U;
        __Vtemp791[4U] = 0U;
        __Vtemp791[5U] = 0U;
        __Vtemp796[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26);
        __Vtemp796[1U] = ((0xfff00000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                          << 0x14U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                     >> 0x20U)));
        __Vtemp796[2U] = ((0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)) 
                          | ((0xfffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                          >> 0xcU)) 
                             | (0xfff00000U & ((IData)(
                                                       ((VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U))))))) 
                                                        >> 0x20U)) 
                                               << 0x14U))));
        __Vtemp796[3U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                        >> 0x33U))))) 
                                        >> 0xbU)) | 
                          (0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)));
        __Vtemp796[4U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                        >> 0x33U))))) 
                                        >> 0xbU)) | 
                          (0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)));
        __Vtemp796[5U] = (7U & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                >> 0x33U))))) 
                                >> 0xbU));
        VL_MUL_W(6, __Vtemp797, __Vtemp791, __Vtemp796);
        vcdp->chgBus(c+73,((0x1ffffU & ((__Vtemp797[3U] 
                                         << 0x12U) 
                                        | (__Vtemp797[2U] 
                                           >> 0xeU)))),17);
        __Vtemp801[0U] = 0U;
        __Vtemp801[1U] = 0x5f200000U;
        __Vtemp801[2U] = 0x12a0U;
        __Vtemp801[3U] = 0U;
        __Vtemp801[4U] = 0U;
        __Vtemp801[5U] = 0U;
        __Vtemp806[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26);
        __Vtemp806[1U] = ((0xfff00000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                          << 0x14U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                     >> 0x20U)));
        __Vtemp806[2U] = ((0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)) 
                          | ((0xfffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                          >> 0xcU)) 
                             | (0xfff00000U & ((IData)(
                                                       ((VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U))))))) 
                                                        >> 0x20U)) 
                                               << 0x14U))));
        __Vtemp806[3U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                        >> 0x33U))))) 
                                        >> 0xbU)) | 
                          (0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)));
        __Vtemp806[4U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                        >> 0x33U))))) 
                                        >> 0xbU)) | 
                          (0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)));
        __Vtemp806[5U] = (7U & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                >> 0x33U))))) 
                                >> 0xbU));
        VL_MUL_W(6, __Vtemp807, __Vtemp801, __Vtemp806);
        __Vtemp810[0U] = __Vtemp807[0U];
        __Vtemp810[1U] = __Vtemp807[1U];
        __Vtemp810[2U] = (0x7fffffffU & __Vtemp807[2U]);
        vcdp->chgArray(c+81,(__Vtemp810),95);
        __Vtemp812[0U] = 0U;
        __Vtemp812[1U] = 0x5f200000U;
        __Vtemp812[2U] = 0x12a0U;
        __Vtemp812[3U] = 0U;
        __Vtemp812[4U] = 0U;
        __Vtemp812[5U] = 0U;
        __Vtemp817[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26);
        __Vtemp817[1U] = ((0xfff00000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                          << 0x14U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                     >> 0x20U)));
        __Vtemp817[2U] = ((0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)) 
                          | ((0xfffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                          >> 0xcU)) 
                             | (0xfff00000U & ((IData)(
                                                       ((VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U))))))) 
                                                        >> 0x20U)) 
                                               << 0x14U))));
        __Vtemp817[3U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                        >> 0x33U))))) 
                                        >> 0xbU)) | 
                          (0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)));
        __Vtemp817[4U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                        >> 0x33U))))) 
                                        >> 0xbU)) | 
                          (0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)));
        __Vtemp817[5U] = (7U & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                >> 0x33U))))) 
                                >> 0xbU));
        VL_MUL_W(6, __Vtemp818, __Vtemp812, __Vtemp817);
        __Vtemp819[0U] = __Vtemp818[0U];
        __Vtemp819[1U] = __Vtemp818[1U];
        __Vtemp819[2U] = __Vtemp818[2U];
        __Vtemp819[3U] = __Vtemp818[3U];
        __Vtemp819[4U] = __Vtemp818[4U];
        __Vtemp819[5U] = (7U & __Vtemp818[5U]);
        vcdp->chgArray(c+105,(__Vtemp819),163);
        __Vtemp824[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26);
        __Vtemp824[1U] = ((0xfff00000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                          << 0x14U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                     >> 0x20U)));
        __Vtemp824[2U] = ((0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)) 
                          | ((0xfffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                          >> 0xcU)) 
                             | (0xfff00000U & ((IData)(
                                                       ((VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U))))))) 
                                                        >> 0x20U)) 
                                               << 0x14U))));
        __Vtemp824[3U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                        >> 0x33U))))) 
                                        >> 0xbU)) | 
                          (0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)));
        __Vtemp824[4U] = ((0x1fffffU & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                        >> 0x33U))))) 
                                        >> 0xbU)) | 
                          (0xffe00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                          >> 0x33U))))) 
                                          << 0x15U)));
        __Vtemp824[5U] = (7U & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                >> 0x33U))))) 
                                >> 0xbU));
        vcdp->chgArray(c+153,(__Vtemp824),163);
        __Vtemp825[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26);
        __Vtemp825[1U] = ((0xfff00000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                          << 0x14U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                     >> 0x20U)));
        __Vtemp825[2U] = ((0xfffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                & VL_NEGATE_Q((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U)))))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & ((IData)((
                                                   (VL_ULL(0x1ffffffff) 
                                                    & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26 
                                                                                >> 0x33U))))))) 
                                                   >> 0x20U)) 
                                          << 0x14U)));
        vcdp->chgArray(c+201,(__Vtemp825),85);
        vcdp->chgQuad(c+225,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_26),52);
        vcdp->chgArray(c+241,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40),98);
        vcdp->chgQuad(c+273,((VL_ULL(0xfffffffffffff) 
                              & (((QData)((IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[3U])) 
                                  << 0x32U) | (((QData)((IData)(
                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[2U])) 
                                                << 0x12U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[1U])) 
                                                  >> 0xeU))))),52);
        vcdp->chgQuad(c+289,((VL_ULL(0xfffffffffffff) 
                              & ((2U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[3U])
                                  ? (((QData)((IData)(
                                                      vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[3U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[2U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[1U])) 
                                                      >> 0xeU)))
                                  : (((QData)((IData)(
                                                      vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[3U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[2U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_40[1U])) 
                                                      >> 0xeU)))))),52);
        vcdp->chgQuad(c+305,((VL_ULL(0xffffffffffffc) 
                              & (((0x20000000U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[2U])
                                   ? (((QData)((IData)(
                                                       vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[2U])) 
                                       << 0x14U) | 
                                      ((QData)((IData)(
                                                       vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[1U])) 
                                       >> 0xcU)) : 
                                  (((QData)((IData)(
                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[2U])) 
                                    << 0x14U) | ((QData)((IData)(
                                                                 vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[1U])) 
                                                 >> 0xcU))) 
                                 << 2U))),52);
        vcdp->chgArray(c+321,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58),94);
        vcdp->chgQuad(c+345,((VL_ULL(0x3ffffffffffff) 
                              & (((QData)((IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[2U])) 
                                  << 0x14U) | ((QData)((IData)(
                                                               vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[1U])) 
                                               >> 0xcU)))),50);
        vcdp->chgQuad(c+361,((VL_ULL(0x3ffffffffffff) 
                              & ((0x20000000U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[2U])
                                  ? (((QData)((IData)(
                                                      vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[2U])) 
                                      << 0x14U) | ((QData)((IData)(
                                                                   vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[1U])) 
                                                   >> 0xcU))
                                  : (((QData)((IData)(
                                                      vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[2U])) 
                                      << 0x14U) | ((QData)((IData)(
                                                                   vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_58[1U])) 
                                                   >> 0xcU))))),50);
        vcdp->chgArray(c+377,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110),88);
        vcdp->chgQuad(c+401,((VL_ULL(0x7fffffffffff) 
                              & (((QData)((IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                  << 0x17U) | ((QData)((IData)(
                                                               vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                               >> 9U)))),47);
        vcdp->chgQuad(c+417,((VL_ULL(0x7fffffffffff) 
                              & ((0x800000U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])
                                  ? (((QData)((IData)(
                                                      vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                      << 0x17U) | ((QData)((IData)(
                                                                   vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                                   >> 9U))
                                  : (((QData)((IData)(
                                                      vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                      << 0x17U) | ((QData)((IData)(
                                                                   vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                                   >> 9U))))),47);
        vcdp->chgBus(c+433,((0x1fffU & ((1U & (IData)(
                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                       >> 0x23U)))
                                         ? (IData)(
                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                    >> 0x17U))
                                         : (IData)(
                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                    >> 0x17U))))),13);
        vcdp->chgQuad(c+441,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170),36);
        vcdp->chgQuad(c+457,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_168),60);
        vcdp->chgArray(c+473,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_148),93);
        vcdp->chgQuad(c+497,((VL_ULL(0xfffffffff) & 
                              (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_168 
                               >> 0x18U))),36);
        vcdp->chgBus(c+513,((0x1fffU & (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                >> 0x17U)))),13);
        vcdp->chgQuad(c+521,(((QData)((IData)((0x7fffU 
                                               & ((0x40000U 
                                                   & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_176)
                                                   ? 
                                                  (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_176 
                                                   >> 4U)
                                                   : 
                                                  (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_176 
                                                   >> 4U))))) 
                              << 0x14U)),35);
        vcdp->chgBus(c+537,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_176),19);
        vcdp->chgBus(c+545,((0xffffU & ((1U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U])
                                         ? ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U] 
                                             << 0xfU) 
                                            | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[2U] 
                                               >> 0x11U))
                                         : ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U] 
                                             << 0xfU) 
                                            | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[2U] 
                                               >> 0x11U))))),16);
        vcdp->chgArray(c+553,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191),97);
        __Vtemp827[0U] = 0x36f9bfbU;
        __Vtemp827[1U] = 0U;
        __Vtemp827[2U] = 0U;
        __Vtemp827[3U] = 0U;
        __Vtemp827[4U] = 0U;
        __Vtemp827[5U] = 0U;
        __Vtemp833[0U] = 0U;
        __Vtemp833[1U] = (0xf8000000U & (((1U & (IData)(
                                                        (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                         >> 0x23U)))
                                           ? (IData)(
                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                      >> 0x17U))
                                           : (IData)(
                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                      >> 0x17U))) 
                                         << 0x1bU));
        __Vtemp833[2U] = ((0xffffff00U & ((0x80000000U 
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
                          | (0xffU & (((1U & (IData)(
                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                      >> 0x23U)))
                                        ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                   >> 0x17U))
                                        : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                   >> 0x17U))) 
                                      >> 5U)));
        __Vtemp833[3U] = ((0xffU & (VL_NEGATE_I((IData)(
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
        __Vtemp833[4U] = ((0xffU & (VL_NEGATE_I((IData)(
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
        __Vtemp833[5U] = (0xffU & (VL_NEGATE_I((IData)(
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
        VL_MUL_W(6, __Vtemp834, __Vtemp827, __Vtemp833);
        __Vtemp835[0U] = __Vtemp834[0U];
        __Vtemp835[1U] = __Vtemp834[1U];
        __Vtemp835[2U] = __Vtemp834[2U];
        __Vtemp835[3U] = __Vtemp834[3U];
        __Vtemp835[4U] = __Vtemp834[4U];
        __Vtemp835[5U] = (0xffU & __Vtemp834[5U]);
        vcdp->chgArray(c+585,(__Vtemp835),168);
        __Vtemp841[0U] = 0U;
        __Vtemp841[1U] = (0xf8000000U & (((1U & (IData)(
                                                        (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                         >> 0x23U)))
                                           ? (IData)(
                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                      >> 0x17U))
                                           : (IData)(
                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                      >> 0x17U))) 
                                         << 0x1bU));
        __Vtemp841[2U] = ((0xffffff00U & ((0x80000000U 
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
                          | (0xffU & (((1U & (IData)(
                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                      >> 0x23U)))
                                        ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                   >> 0x17U))
                                        : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                   >> 0x17U))) 
                                      >> 5U)));
        __Vtemp841[3U] = ((0xffU & (VL_NEGATE_I((IData)(
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
        __Vtemp841[4U] = ((0xffU & (VL_NEGATE_I((IData)(
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
        __Vtemp841[5U] = (0xffU & (VL_NEGATE_I((IData)(
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
        vcdp->chgArray(c+633,(__Vtemp841),168);
        __Vtemp843[0U] = 0U;
        __Vtemp843[1U] = (0xf8000000U & (((1U & (IData)(
                                                        (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                         >> 0x23U)))
                                           ? (IData)(
                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                      >> 0x17U))
                                           : (IData)(
                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                      >> 0x17U))) 
                                         << 0x1bU));
        __Vtemp843[2U] = ((0x7fffff00U & (VL_NEGATE_I((IData)(
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
                                          << 8U)) | 
                          (0xffU & (((1U & (IData)(
                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                    >> 0x23U)))
                                      ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                 >> 0x17U))
                                      : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_170 
                                                 >> 0x17U))) 
                                    >> 5U)));
        vcdp->chgArray(c+681,(__Vtemp843),95);
        vcdp->chgBus(c+705,((0xffffU & ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[3U] 
                                         << 0xfU) | 
                                        (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_191[2U] 
                                         >> 0x11U)))),16);
        vcdp->chgBus(c+713,((0x7fffU & (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_176 
                                        >> 4U))),15);
        vcdp->chgBus(c+721,((0x7fffU & ((0x40000U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_176)
                                         ? (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_176 
                                            >> 4U) : 
                                        (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_176 
                                         >> 4U)))),15);
        __Vtemp845[0U] = 0U;
        __Vtemp845[1U] = 0x2f900000U;
        __Vtemp845[2U] = 0x950U;
        __Vtemp845[3U] = 0U;
        __Vtemp845[4U] = 0U;
        __Vtemp845[5U] = 0U;
        __Vtemp850[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207);
        __Vtemp850[1U] = ((0xfff80000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          << 0x13U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                     >> 0x20U)));
        __Vtemp850[2U] = ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)) 
                          | ((0x7ffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          >> 0xdU)) 
                             | (0xfff80000U & ((IData)(
                                                       ((VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))))) 
                                                        >> 0x20U)) 
                                               << 0x13U))));
        __Vtemp850[3U] = ((0xfffffU & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                       >> 0x32U))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)));
        __Vtemp850[4U] = ((0xfffffU & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                       >> 0x32U))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)));
        __Vtemp850[5U] = (1U & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                >> 0x32U))))) 
                                >> 0xcU));
        VL_MUL_W(6, __Vtemp851, __Vtemp845, __Vtemp850);
        vcdp->chgBus(c+729,((1U & ((0x1ffe0U & (__Vtemp851[3U] 
                                                << 5U)) 
                                   | (__Vtemp851[2U] 
                                      >> 0x1bU)))),2);
        __Vtemp854[0U] = 0U;
        __Vtemp854[1U] = 0x2f900000U;
        __Vtemp854[2U] = 0x950U;
        __Vtemp854[3U] = 0U;
        __Vtemp854[4U] = 0U;
        __Vtemp854[5U] = 0U;
        __Vtemp859[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207);
        __Vtemp859[1U] = ((0xfff80000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          << 0x13U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                     >> 0x20U)));
        __Vtemp859[2U] = ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)) 
                          | ((0x7ffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          >> 0xdU)) 
                             | (0xfff80000U & ((IData)(
                                                       ((VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))))) 
                                                        >> 0x20U)) 
                                               << 0x13U))));
        __Vtemp859[3U] = ((0xfffffU & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                       >> 0x32U))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)));
        __Vtemp859[4U] = ((0xfffffU & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                       >> 0x32U))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)));
        __Vtemp859[5U] = (1U & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                >> 0x32U))))) 
                                >> 0xcU));
        VL_MUL_W(6, __Vtemp860, __Vtemp854, __Vtemp859);
        vcdp->chgBus(c+737,((0xfffU & ((0xfff0000U 
                                        & (__Vtemp860[3U] 
                                           << 0x10U)) 
                                       | (__Vtemp860[2U] 
                                          >> 0x10U)))),13);
        __Vtemp863[0U] = 0U;
        __Vtemp863[1U] = 0x2f900000U;
        __Vtemp863[2U] = 0x950U;
        __Vtemp863[3U] = 0U;
        __Vtemp863[4U] = 0U;
        __Vtemp863[5U] = 0U;
        __Vtemp868[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207);
        __Vtemp868[1U] = ((0xfff80000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          << 0x13U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                     >> 0x20U)));
        __Vtemp868[2U] = ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)) 
                          | ((0x7ffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          >> 0xdU)) 
                             | (0xfff80000U & ((IData)(
                                                       ((VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))))) 
                                                        >> 0x20U)) 
                                               << 0x13U))));
        __Vtemp868[3U] = ((0xfffffU & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                       >> 0x32U))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)));
        __Vtemp868[4U] = ((0xfffffU & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                       >> 0x32U))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)));
        __Vtemp868[5U] = (1U & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                >> 0x32U))))) 
                                >> 0xcU));
        VL_MUL_W(6, __Vtemp869, __Vtemp863, __Vtemp868);
        vcdp->chgBus(c+745,((0xffffU & ((__Vtemp869[3U] 
                                         << 0x14U) 
                                        | (__Vtemp869[2U] 
                                           >> 0xcU)))),17);
        __Vtemp872[0U] = 0U;
        __Vtemp872[1U] = 0x2f900000U;
        __Vtemp872[2U] = 0x950U;
        __Vtemp872[3U] = 0U;
        __Vtemp872[4U] = 0U;
        __Vtemp872[5U] = 0U;
        __Vtemp877[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207);
        __Vtemp877[1U] = ((0xfff80000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          << 0x13U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                     >> 0x20U)));
        __Vtemp877[2U] = ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)) 
                          | ((0x7ffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          >> 0xdU)) 
                             | (0xfff80000U & ((IData)(
                                                       ((VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))))) 
                                                        >> 0x20U)) 
                                               << 0x13U))));
        __Vtemp877[3U] = ((0xfffffU & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                       >> 0x32U))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)));
        __Vtemp877[4U] = ((0xfffffU & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                       >> 0x32U))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)));
        __Vtemp877[5U] = (1U & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                >> 0x32U))))) 
                                >> 0xcU));
        VL_MUL_W(6, __Vtemp878, __Vtemp872, __Vtemp877);
        vcdp->chgBus(c+753,((0xffffU & ((__Vtemp878[3U] 
                                         << 0x14U) 
                                        | (__Vtemp878[2U] 
                                           >> 0xcU)))),16);
        __Vtemp882[0U] = 0U;
        __Vtemp882[1U] = 0x2f900000U;
        __Vtemp882[2U] = 0x950U;
        __Vtemp882[3U] = 0U;
        __Vtemp882[4U] = 0U;
        __Vtemp882[5U] = 0U;
        __Vtemp887[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207);
        __Vtemp887[1U] = ((0xfff80000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          << 0x13U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                     >> 0x20U)));
        __Vtemp887[2U] = ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)) 
                          | ((0x7ffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          >> 0xdU)) 
                             | (0xfff80000U & ((IData)(
                                                       ((VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))))) 
                                                        >> 0x20U)) 
                                               << 0x13U))));
        __Vtemp887[3U] = ((0xfffffU & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                       >> 0x32U))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)));
        __Vtemp887[4U] = ((0xfffffU & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                       >> 0x32U))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)));
        __Vtemp887[5U] = (1U & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                >> 0x32U))))) 
                                >> 0xcU));
        VL_MUL_W(6, __Vtemp888, __Vtemp882, __Vtemp887);
        __Vtemp891[0U] = __Vtemp888[0U];
        __Vtemp891[1U] = __Vtemp888[1U];
        __Vtemp891[2U] = (0xfffffffU & __Vtemp888[2U]);
        vcdp->chgArray(c+761,(__Vtemp891),92);
        __Vtemp893[0U] = 0U;
        __Vtemp893[1U] = 0x2f900000U;
        __Vtemp893[2U] = 0x950U;
        __Vtemp893[3U] = 0U;
        __Vtemp893[4U] = 0U;
        __Vtemp893[5U] = 0U;
        __Vtemp898[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207);
        __Vtemp898[1U] = ((0xfff80000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          << 0x13U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                     >> 0x20U)));
        __Vtemp898[2U] = ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)) 
                          | ((0x7ffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          >> 0xdU)) 
                             | (0xfff80000U & ((IData)(
                                                       ((VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))))) 
                                                        >> 0x20U)) 
                                               << 0x13U))));
        __Vtemp898[3U] = ((0xfffffU & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                       >> 0x32U))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)));
        __Vtemp898[4U] = ((0xfffffU & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                       >> 0x32U))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)));
        __Vtemp898[5U] = (1U & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                >> 0x32U))))) 
                                >> 0xcU));
        VL_MUL_W(6, __Vtemp899, __Vtemp893, __Vtemp898);
        __Vtemp900[0U] = __Vtemp899[0U];
        __Vtemp900[1U] = __Vtemp899[1U];
        __Vtemp900[2U] = __Vtemp899[2U];
        __Vtemp900[3U] = __Vtemp899[3U];
        __Vtemp900[4U] = __Vtemp899[4U];
        __Vtemp900[5U] = (1U & __Vtemp899[5U]);
        vcdp->chgArray(c+785,(__Vtemp900),161);
        __Vtemp905[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207);
        __Vtemp905[1U] = ((0xfff80000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          << 0x13U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                     >> 0x20U)));
        __Vtemp905[2U] = ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)) 
                          | ((0x7ffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          >> 0xdU)) 
                             | (0xfff80000U & ((IData)(
                                                       ((VL_ULL(0x1ffffffff) 
                                                         & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))))) 
                                                        >> 0x20U)) 
                                               << 0x13U))));
        __Vtemp905[3U] = ((0xfffffU & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                       >> 0x32U))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)));
        __Vtemp905[4U] = ((0xfffffU & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                       >> 0x32U))))) 
                                       >> 0xcU)) | 
                          (0xfff00000U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                          >> 0x32U))))) 
                                          << 0x14U)));
        __Vtemp905[5U] = (1U & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                >> 0x32U))))) 
                                >> 0xcU));
        vcdp->chgArray(c+833,(__Vtemp905),161);
        __Vtemp906[0U] = (IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207);
        __Vtemp906[1U] = ((0xfff80000U & ((IData)((VL_ULL(0x1ffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                          << 0x13U)) 
                          | (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                     >> 0x20U)));
        __Vtemp906[2U] = ((0x7ffffU & ((IData)((VL_ULL(0x1ffffffff) 
                                                & VL_NEGATE_Q((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U)))))))) 
                                       >> 0xdU)) | 
                          (0xfff80000U & ((IData)((
                                                   (VL_ULL(0x1ffffffff) 
                                                    & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207 
                                                                                >> 0x32U))))))) 
                                                   >> 0x20U)) 
                                          << 0x13U)));
        vcdp->chgArray(c+881,(__Vtemp906),84);
        vcdp->chgQuad(c+905,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_bits_207),51);
        vcdp->chgArray(c+921,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221),98);
        vcdp->chgQuad(c+953,((VL_ULL(0x7ffffffffffff) 
                              & (((QData)((IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[3U])) 
                                  << 0x31U) | (((QData)((IData)(
                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[2U])) 
                                                << 0x11U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[1U])) 
                                                  >> 0xfU))))),51);
        vcdp->chgQuad(c+969,((VL_ULL(0x7ffffffffffff) 
                              & ((2U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[3U])
                                  ? (((QData)((IData)(
                                                      vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[3U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[2U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[1U])) 
                                                      >> 0xfU)))
                                  : (((QData)((IData)(
                                                      vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[3U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[2U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_221[1U])) 
                                                      >> 0xfU)))))),51);
        vcdp->chgQuad(c+985,((VL_ULL(0x7fffffffffffe) 
                              & (((0x20000000U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[2U])
                                   ? (((QData)((IData)(
                                                       vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[2U])) 
                                       << 0x14U) | 
                                      ((QData)((IData)(
                                                       vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[1U])) 
                                       >> 0xcU)) : 
                                  (((QData)((IData)(
                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[2U])) 
                                    << 0x14U) | ((QData)((IData)(
                                                                 vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[1U])) 
                                                 >> 0xcU))) 
                                 << 1U))),51);
        vcdp->chgArray(c+1001,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239),94);
        vcdp->chgQuad(c+1025,((VL_ULL(0x3ffffffffffff) 
                               & (((QData)((IData)(
                                                   vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[2U])) 
                                   << 0x14U) | ((QData)((IData)(
                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[1U])) 
                                                >> 0xcU)))),50);
        vcdp->chgQuad(c+1041,((VL_ULL(0x3ffffffffffff) 
                               & ((0x20000000U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[2U])
                                   ? (((QData)((IData)(
                                                       vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[2U])) 
                                       << 0x14U) | 
                                      ((QData)((IData)(
                                                       vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[1U])) 
                                       >> 0xcU)) : 
                                  (((QData)((IData)(
                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[2U])) 
                                    << 0x14U) | ((QData)((IData)(
                                                                 vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_239[1U])) 
                                                 >> 0xcU))))),50);
        vcdp->chgArray(c+1057,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311),96);
        vcdp->chgQuad(c+1081,((VL_ULL(0x7ffffffffffff) 
                               & (((QData)((IData)(
                                                   vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                   << 0x13U) | ((QData)((IData)(
                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                >> 0xdU)))),51);
        vcdp->chgQuad(c+1097,((VL_ULL(0x7ffffffffffff) 
                               & ((0x80000000U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])
                                   ? (((QData)((IData)(
                                                       vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                       << 0x13U) | 
                                      ((QData)((IData)(
                                                       vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                       >> 0xdU)) : 
                                  (((QData)((IData)(
                                                    vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                    << 0x13U) | ((QData)((IData)(
                                                                 vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                 >> 0xdU))))),51);
        vcdp->chgBus(c+1113,((0x1fffU & ((1U & (IData)(
                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                        >> 0x24U)))
                                          ? (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                     >> 0x18U))
                                          : (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                     >> 0x18U))))),13);
        vcdp->chgQuad(c+1121,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349),37);
        vcdp->chgArray(c+1137,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347),97);
        vcdp->chgArray(c+1169,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_328),131);
        vcdp->chgArray(c+1209,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_340),131);
        vcdp->chgQuad(c+1249,((VL_ULL(0x1fffffffff) 
                               & (((QData)((IData)(
                                                   vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[3U])) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[2U])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_347[1U])) 
                                                   >> 0x1cU))))),37);
        vcdp->chgBus(c+1265,((0x1fffU & (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                 >> 0x18U)))),13);
        vcdp->chgQuad(c+1273,((((QData)((IData)((1U 
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
                                << 0x22U) | ((QData)((IData)(
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
                                             << 0x11U))),35);
        vcdp->chgBus(c+1289,(((0x20000U & (((2U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U])
                                             ? ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U] 
                                                 << 0xfU) 
                                                | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[2U] 
                                                   >> 0x11U))
                                             : ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U] 
                                                 << 0xfU) 
                                                | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[2U] 
                                                   >> 0x11U))) 
                                           << 1U)) 
                              | (0x1ffffU & ((2U & 
                                              vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U])
                                              ? ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U] 
                                                  << 0xfU) 
                                                 | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[2U] 
                                                    >> 0x11U))
                                              : ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U] 
                                                  << 0xfU) 
                                                 | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[2U] 
                                                    >> 0x11U)))))),18);
        vcdp->chgBus(c+1297,((0x1ffffU & ((2U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U])
                                           ? ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U] 
                                               << 0xfU) 
                                              | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[2U] 
                                                 >> 0x11U))
                                           : ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U] 
                                               << 0xfU) 
                                              | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[2U] 
                                                 >> 0x11U))))),17);
        vcdp->chgArray(c+1305,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369),98);
        __Vtemp908[0U] = 0x36f9bfbU;
        __Vtemp908[1U] = 0U;
        __Vtemp908[2U] = 0U;
        __Vtemp908[3U] = 0U;
        __Vtemp908[4U] = 0U;
        __Vtemp908[5U] = 0U;
        __Vtemp914[0U] = 0U;
        __Vtemp914[1U] = (0xf8000000U & (((1U & (IData)(
                                                        (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                         >> 0x24U)))
                                           ? (IData)(
                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                      >> 0x18U))
                                           : (IData)(
                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                      >> 0x18U))) 
                                         << 0x1bU));
        __Vtemp914[2U] = ((0xffffff00U & (VL_NEGATE_I((IData)(
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
                                          << 8U)) | 
                          (0xffU & (((1U & (IData)(
                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                    >> 0x24U)))
                                      ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                 >> 0x18U))
                                      : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                 >> 0x18U))) 
                                    >> 5U)));
        __Vtemp914[3U] = VL_NEGATE_I((IData)((1U & 
                                              (((1U 
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
        __Vtemp914[4U] = VL_NEGATE_I((IData)((1U & 
                                              (((1U 
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
        __Vtemp914[5U] = (0x1ffU & VL_NEGATE_I((IData)(
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
        VL_MUL_W(6, __Vtemp915, __Vtemp908, __Vtemp914);
        __Vtemp916[0U] = __Vtemp915[0U];
        __Vtemp916[1U] = __Vtemp915[1U];
        __Vtemp916[2U] = __Vtemp915[2U];
        __Vtemp916[3U] = __Vtemp915[3U];
        __Vtemp916[4U] = __Vtemp915[4U];
        __Vtemp916[5U] = (0x1ffU & __Vtemp915[5U]);
        vcdp->chgArray(c+1337,(__Vtemp916),169);
        __Vtemp922[0U] = 0U;
        __Vtemp922[1U] = (0xf8000000U & (((1U & (IData)(
                                                        (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                         >> 0x24U)))
                                           ? (IData)(
                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                      >> 0x18U))
                                           : (IData)(
                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                      >> 0x18U))) 
                                         << 0x1bU));
        __Vtemp922[2U] = ((0xffffff00U & (VL_NEGATE_I((IData)(
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
                                          << 8U)) | 
                          (0xffU & (((1U & (IData)(
                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                    >> 0x24U)))
                                      ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                 >> 0x18U))
                                      : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                 >> 0x18U))) 
                                    >> 5U)));
        __Vtemp922[3U] = VL_NEGATE_I((IData)((1U & 
                                              (((1U 
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
        __Vtemp922[4U] = VL_NEGATE_I((IData)((1U & 
                                              (((1U 
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
        __Vtemp922[5U] = (0x1ffU & VL_NEGATE_I((IData)(
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
        vcdp->chgArray(c+1385,(__Vtemp922),169);
        __Vtemp924[0U] = 0U;
        __Vtemp924[1U] = (0xf8000000U & (((1U & (IData)(
                                                        (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                         >> 0x24U)))
                                           ? (IData)(
                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                      >> 0x18U))
                                           : (IData)(
                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                      >> 0x18U))) 
                                         << 0x1bU));
        __Vtemp924[2U] = ((0xffffff00U & (VL_NEGATE_I((IData)(
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
                                          << 8U)) | 
                          (0xffU & (((1U & (IData)(
                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                    >> 0x24U)))
                                      ? (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                 >> 0x18U))
                                      : (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncR_imm_349 
                                                 >> 0x18U))) 
                                    >> 5U)));
        vcdp->chgArray(c+1433,(__Vtemp924),96);
        vcdp->chgBus(c+1457,((0x1ffffU & ((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[3U] 
                                           << 0xfU) 
                                          | (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_369[2U] 
                                             >> 0x11U)))),17);
    }
}

void Vcomparator_latch__4877e2cc78717755::traceChgThis__3(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcomparator_latch__4877e2cc78717755* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgArray(c+1465,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__padl_149),93);
    }
}

void Vcomparator_latch__4877e2cc78717755::traceChgThis__4(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcomparator_latch__4877e2cc78717755* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp929[5];
    WData/*95:0*/ __Vtemp930[3];
    // Body
    {
        vcdp->chgBus(c+1489,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__state_cycle_counter),17);
        vcdp->chgBit(c+1497,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__prev_sys_clk));
        vcdp->chgQuad(c+1505,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o),35);
        vcdp->chgBus(c+1521,(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__fsm),32);
        vcdp->chgBus(c+1529,((0xfffU & ((1U & (IData)(
                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                       >> 0x22U)))
                                         ? (IData)(
                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                    >> 0x14U))
                                         : (IData)(
                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                    >> 0x14U))))),13);
        vcdp->chgBus(c+1537,((0xfffU & ((1U & (IData)(
                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                       >> 0x22U)))
                                         ? (IData)(
                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                    >> 0x14U))
                                         : (IData)(
                                                   (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                    >> 0x14U))))),14);
        vcdp->chgBus(c+1545,((0x7fffU & ((1U & (IData)(
                                                       (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                        >> 0x22U)))
                                          ? (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                     >> 0x14U))
                                          : (IData)(
                                                    (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                     >> 0x14U))))),15);
        vcdp->chgBus(c+1553,((0x7fffU & (IData)((vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                 >> 0x14U)))),15);
        vcdp->chgQuad(c+1561,((((QData)((IData)((0x3fffffffU 
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
                                                                                << 2U))))))))),46);
        vcdp->chgBus(c+1577,((0xffffU & VL_NEGATE_I(
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
                                                           << 2U)))))),16);
        vcdp->chgBus(c+1585,(((0x8000U & (((1U & (IData)(
                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                          >> 0x22U)))
                                            ? (IData)(
                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                       >> 0x14U))
                                            : (IData)(
                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                       >> 0x14U))) 
                                          << 1U)) | 
                              (0x7ffcU & (((1U & (IData)(
                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                          >> 0x22U)))
                                            ? (IData)(
                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                       >> 0x14U))
                                            : (IData)(
                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                       >> 0x14U))) 
                                          << 2U)))),16);
        vcdp->chgBus(c+1593,(((0x2000U & (((1U & (IData)(
                                                         (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                          >> 0x22U)))
                                            ? (IData)(
                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                       >> 0x14U))
                                            : (IData)(
                                                      (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                       >> 0x14U))) 
                                          >> 1U)) | 
                              (0x1fffU & ((1U & (IData)(
                                                        (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                         >> 0x22U)))
                                           ? (IData)(
                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                      >> 0x14U))
                                           : (IData)(
                                                     (vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o 
                                                      >> 0x14U)))))),14);
        vcdp->chgQuad(c+1601,((VL_ULL(0x1ffffffff) 
                               & (QData)((IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o)))),33);
        vcdp->chgQuad(c+1617,((QData)((IData)(vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o))),34);
        __Vtemp929[0U] = (IData)((VL_ULL(0x7ffffffff) 
                                  & (VL_ULL(0xd3333300) 
                                     - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o)));
        __Vtemp929[1U] = ((0xfffffff8U & (VL_NEGATE_I((IData)(
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
        __Vtemp929[2U] = ((7U & ((6U & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (VL_ULL(1) 
                                                                        & ((VL_ULL(0xd3333300) 
                                                                            - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                           >> 0x22U)))))) 
                                        << 1U)) | (1U 
                                                   & (VL_NEGATE_I((IData)(
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
        __Vtemp929[3U] = ((7U & ((1U & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (VL_ULL(1) 
                                                                        & ((VL_ULL(0xd3333300) 
                                                                            - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                           >> 0x22U)))))) 
                                        >> 0x1fU)) 
                                 | (6U & (VL_NEGATE_I((IData)(
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
        __Vtemp929[4U] = (7U & ((1U & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (VL_ULL(1) 
                                                                       & ((VL_ULL(0xd3333300) 
                                                                           - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                          >> 0x22U)))))) 
                                       >> 0x1fU)) | 
                                (6U & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (VL_ULL(1) 
                                                                       & ((VL_ULL(0xd3333300) 
                                                                           - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                          >> 0x22U)))))) 
                                       << 1U))));
        vcdp->chgArray(c+1633,(__Vtemp929),131);
        __Vtemp930[0U] = (IData)((VL_ULL(0x7ffffffff) 
                                  & (VL_ULL(0xd3333300) 
                                     - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o)));
        __Vtemp930[1U] = ((0xfffffff8U & (VL_NEGATE_I((IData)(
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
        __Vtemp930[2U] = (1U & (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (VL_ULL(1) 
                                                                & ((VL_ULL(0xd3333300) 
                                                                    - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o) 
                                                                   >> 0x22U)))))) 
                                >> 0x1dU));
        vcdp->chgArray(c+1673,(__Vtemp930),65);
        vcdp->chgQuad(c+1697,((VL_ULL(0x7ffffffff) 
                               & (VL_ULL(0xd3333300) 
                                  - vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__o))),35);
    }
}

void Vcomparator_latch__4877e2cc78717755::traceChgThis__5(Vcomparator_latch__4877e2cc78717755__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcomparator_latch__4877e2cc78717755* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp932[3];
    WData/*95:0*/ __Vtemp933[3];
    WData/*95:0*/ __Vtemp934[3];
    WData/*95:0*/ __Vtemp937[3];
    WData/*95:0*/ __Vtemp938[3];
    WData/*95:0*/ __Vtemp939[3];
    WData/*127:0*/ __Vtemp942[4];
    WData/*127:0*/ __Vtemp943[4];
    WData/*127:0*/ __Vtemp944[4];
    WData/*127:0*/ __Vtemp945[4];
    WData/*127:0*/ __Vtemp946[4];
    WData/*127:0*/ __Vtemp948[4];
    WData/*127:0*/ __Vtemp949[4];
    WData/*127:0*/ __Vtemp950[4];
    WData/*127:0*/ __Vtemp951[4];
    WData/*127:0*/ __Vtemp952[4];
    WData/*95:0*/ __Vtemp954[3];
    WData/*95:0*/ __Vtemp955[3];
    WData/*95:0*/ __Vtemp956[3];
    WData/*95:0*/ __Vtemp959[3];
    WData/*95:0*/ __Vtemp960[3];
    WData/*95:0*/ __Vtemp961[3];
    WData/*95:0*/ __Vtemp964[3];
    WData/*95:0*/ __Vtemp965[3];
    WData/*95:0*/ __Vtemp966[3];
    WData/*95:0*/ __Vtemp969[3];
    WData/*95:0*/ __Vtemp970[3];
    WData/*95:0*/ __Vtemp971[3];
    WData/*95:0*/ __Vtemp972[3];
    WData/*95:0*/ __Vtemp973[3];
    WData/*95:0*/ __Vtemp975[3];
    WData/*95:0*/ __Vtemp976[3];
    WData/*95:0*/ __Vtemp977[3];
    WData/*95:0*/ __Vtemp980[3];
    WData/*95:0*/ __Vtemp981[3];
    WData/*95:0*/ __Vtemp982[3];
    WData/*95:0*/ __Vtemp985[3];
    WData/*95:0*/ __Vtemp986[3];
    WData/*95:0*/ __Vtemp987[3];
    WData/*95:0*/ __Vtemp991[3];
    WData/*95:0*/ __Vtemp992[3];
    WData/*95:0*/ __Vtemp993[3];
    WData/*95:0*/ __Vtemp996[3];
    WData/*95:0*/ __Vtemp998[3];
    WData/*95:0*/ __Vtemp999[3];
    WData/*95:0*/ __Vtemp1000[3];
    WData/*95:0*/ __Vtemp1001[3];
    WData/*95:0*/ __Vtemp1002[3];
    WData/*95:0*/ __Vtemp1004[3];
    WData/*95:0*/ __Vtemp1005[3];
    WData/*95:0*/ __Vtemp1006[3];
    WData/*95:0*/ __Vtemp1009[3];
    WData/*95:0*/ __Vtemp1010[3];
    WData/*95:0*/ __Vtemp1011[3];
    WData/*95:0*/ __Vtemp1013[3];
    WData/*95:0*/ __Vtemp1015[3];
    WData/*95:0*/ __Vtemp1016[3];
    WData/*95:0*/ __Vtemp1017[3];
    WData/*95:0*/ __Vtemp1020[3];
    WData/*95:0*/ __Vtemp1021[3];
    WData/*95:0*/ __Vtemp1022[3];
    WData/*95:0*/ __Vtemp1025[3];
    WData/*95:0*/ __Vtemp1026[3];
    WData/*95:0*/ __Vtemp1027[3];
    WData/*127:0*/ __Vtemp1030[4];
    WData/*127:0*/ __Vtemp1031[4];
    WData/*127:0*/ __Vtemp1032[4];
    WData/*127:0*/ __Vtemp1033[4];
    WData/*127:0*/ __Vtemp1035[4];
    WData/*127:0*/ __Vtemp1036[4];
    WData/*127:0*/ __Vtemp1037[4];
    WData/*127:0*/ __Vtemp1038[4];
    WData/*95:0*/ __Vtemp1040[3];
    WData/*95:0*/ __Vtemp1041[3];
    WData/*95:0*/ __Vtemp1042[3];
    WData/*95:0*/ __Vtemp1045[3];
    WData/*95:0*/ __Vtemp1046[3];
    WData/*95:0*/ __Vtemp1047[3];
    WData/*95:0*/ __Vtemp1050[3];
    WData/*95:0*/ __Vtemp1051[3];
    WData/*95:0*/ __Vtemp1052[3];
    WData/*95:0*/ __Vtemp1055[3];
    WData/*95:0*/ __Vtemp1056[3];
    WData/*95:0*/ __Vtemp1057[3];
    WData/*95:0*/ __Vtemp1060[3];
    WData/*95:0*/ __Vtemp1061[3];
    WData/*95:0*/ __Vtemp1062[3];
    WData/*95:0*/ __Vtemp1065[3];
    WData/*95:0*/ __Vtemp1066[3];
    WData/*95:0*/ __Vtemp1067[3];
    WData/*95:0*/ __Vtemp1070[3];
    WData/*95:0*/ __Vtemp1071[3];
    WData/*95:0*/ __Vtemp1072[3];
    WData/*95:0*/ __Vtemp1075[3];
    WData/*95:0*/ __Vtemp1076[3];
    WData/*95:0*/ __Vtemp1077[3];
    WData/*95:0*/ __Vtemp1081[3];
    WData/*95:0*/ __Vtemp1082[3];
    WData/*95:0*/ __Vtemp1083[3];
    WData/*95:0*/ __Vtemp1086[3];
    WData/*95:0*/ __Vtemp1088[3];
    WData/*95:0*/ __Vtemp1089[3];
    WData/*95:0*/ __Vtemp1090[3];
    WData/*95:0*/ __Vtemp1091[3];
    WData/*95:0*/ __Vtemp1092[3];
    WData/*127:0*/ __Vtemp1094[4];
    WData/*127:0*/ __Vtemp1095[4];
    WData/*127:0*/ __Vtemp1096[4];
    WData/*127:0*/ __Vtemp1097[4];
    WData/*127:0*/ __Vtemp1098[4];
    WData/*95:0*/ __Vtemp1100[3];
    WData/*95:0*/ __Vtemp1101[3];
    WData/*95:0*/ __Vtemp1102[3];
    WData/*95:0*/ __Vtemp1104[3];
    WData/*95:0*/ __Vtemp1106[3];
    WData/*95:0*/ __Vtemp1107[3];
    WData/*95:0*/ __Vtemp1108[3];
    WData/*95:0*/ __Vtemp1111[3];
    WData/*95:0*/ __Vtemp1112[3];
    WData/*95:0*/ __Vtemp1113[3];
    // Body
    {
        vcdp->chgBit(c+1713,(vlTOPp->clk));
        vcdp->chgBus(c+1721,(vlTOPp->n),10);
        vcdp->chgBus(c+1729,(vlTOPp->out),10);
        vcdp->chgBus(c+1737,(vlTOPp->p),10);
        vcdp->chgBit(c+1745,(vlTOPp->reset));
        vcdp->chgBit(c+1753,(vlTOPp->sys_clk));
        __Vtemp932[0U] = 0x40dU;
        __Vtemp932[1U] = 0U;
        __Vtemp932[2U] = 0U;
        VL_EXTEND_WQ(92,46, __Vtemp933, ((QData)((IData)(vlTOPp->p)) 
                                         << 0x24U));
        VL_MUL_W(3, __Vtemp934, __Vtemp932, __Vtemp933);
        vcdp->chgQuad(c+1761,((VL_ULL(0x3ffffffffffc0) 
                               & ((VL_ULL(0x4120) + 
                                   ((VL_ULL(0x7fffffffffff) 
                                     & ((0x800000U 
                                         & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])
                                         ? (((QData)((IData)(
                                                             vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                             << 0x17U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                               >> 9U))
                                         : (((QData)((IData)(
                                                             vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                             << 0x17U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                               >> 9U)))) 
                                    + (VL_ULL(0x1fffffffffff) 
                                       & (((QData)((IData)(
                                                           (0xfffffffU 
                                                            & __Vtemp934[2U]))) 
                                           << 0x17U) 
                                          | ((QData)((IData)(
                                                             __Vtemp934[1U])) 
                                             >> 9U))))) 
                                  << 6U))),51);
        __Vtemp937[0U] = 0x46bU;
        __Vtemp937[1U] = 0U;
        __Vtemp937[2U] = 0U;
        VL_EXTEND_WQ(94,47, __Vtemp938, ((QData)((IData)(vlTOPp->n)) 
                                         << 0x25U));
        VL_MUL_W(3, __Vtemp939, __Vtemp937, __Vtemp938);
        vcdp->chgQuad(c+1777,((VL_ULL(0x3fffffffffffc00) 
                               & ((VL_ULL(0x17e40) 
                                   + ((VL_ULL(0xfffffffffff8) 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & __Vtemp939[2U]))) 
                                           << 0x19U) 
                                          | (VL_ULL(0x1fffffffffffff8) 
                                             & ((QData)((IData)(
                                                                __Vtemp939[1U])) 
                                                >> 7U)))) 
                                      + (VL_ULL(0x7ffffffffffff) 
                                         & ((0x80000000U 
                                             & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])
                                             ? (((QData)((IData)(
                                                                 vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                 << 0x13U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                   >> 0xdU))
                                             : (((QData)((IData)(
                                                                 vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                                 << 0x13U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                   >> 0xdU)))))) 
                                  << 0xaU))),59);
        __Vtemp942[0U] = 0xfffffbf2U;
        __Vtemp942[1U] = 0xffffffffU;
        __Vtemp942[2U] = 0xffffffffU;
        __Vtemp942[3U] = 0x1ffU;
        __Vtemp943[0U] = 0U;
        __Vtemp943[1U] = (0xfffffe00U & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                                   & (VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                      << 0xbU)) 
                                                  | (QData)((IData)(vlTOPp->n)))) 
                                         << 9U));
        __Vtemp943[2U] = ((0x1ffU & ((IData)(((VL_ULL(0xfffffffffffff800) 
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
        __Vtemp943[3U] = (0x1ffU & ((IData)((((VL_ULL(0xfffffffffffff800) 
                                               & (VL_NEGATE_Q((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                  << 0xbU)) 
                                              | (QData)((IData)(vlTOPp->n))) 
                                             >> 0x20U)) 
                                    >> 0x17U));
        VL_MUL_W(4, __Vtemp944, __Vtemp942, __Vtemp943);
        __Vtemp945[0U] = __Vtemp944[0U];
        __Vtemp945[1U] = __Vtemp944[1U];
        __Vtemp945[2U] = __Vtemp944[2U];
        __Vtemp945[3U] = (0x1ffU & __Vtemp944[3U]);
        vcdp->chgArray(c+1793,(__Vtemp945),105);
        __Vtemp946[0U] = 0U;
        __Vtemp946[1U] = (0xfffffe00U & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                                   & (VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                      << 0xbU)) 
                                                  | (QData)((IData)(vlTOPp->n)))) 
                                         << 9U));
        __Vtemp946[2U] = ((0x1ffU & ((IData)(((VL_ULL(0xfffffffffffff800) 
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
        __Vtemp946[3U] = (0x1ffU & ((IData)((((VL_ULL(0xfffffffffffff800) 
                                               & (VL_NEGATE_Q((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                  << 0xbU)) 
                                              | (QData)((IData)(vlTOPp->n))) 
                                             >> 0x20U)) 
                                    >> 0x17U));
        vcdp->chgArray(c+1825,(__Vtemp946),105);
        vcdp->chgQuad(c+1857,(((QData)((IData)(vlTOPp->n)) 
                               << 0x29U)),52);
        vcdp->chgBus(c+1873,(vlTOPp->n),11);
        __Vtemp948[0U] = 0xfffffc04U;
        __Vtemp948[1U] = 0xffffffffU;
        __Vtemp948[2U] = 0xffffffffU;
        __Vtemp948[3U] = 0x1fU;
        __Vtemp949[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                                  << 0x27U));
        __Vtemp949[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                          << 0x12U)) 
                          | (IData)((((QData)((IData)(vlTOPp->p)) 
                                      << 0x27U) >> 0x20U)));
        __Vtemp949[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                                & VL_NEGATE_Q((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                       >> 0xeU)) | 
                          (0xfffc0000U & ((IData)((
                                                   (VL_ULL(0x7ffffffffffff) 
                                                    & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                   >> 0x20U)) 
                                          << 0x12U)));
        __Vtemp949[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                                & VL_NEGATE_Q((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                               >> 0x20U)) 
                                      >> 0xeU));
        VL_MUL_W(4, __Vtemp950, __Vtemp948, __Vtemp949);
        __Vtemp951[0U] = __Vtemp950[0U];
        __Vtemp951[1U] = __Vtemp950[1U];
        __Vtemp951[2U] = __Vtemp950[2U];
        __Vtemp951[3U] = (0x1fU & __Vtemp950[3U]);
        vcdp->chgArray(c+1881,(__Vtemp951),101);
        __Vtemp952[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                                  << 0x27U));
        __Vtemp952[1U] = ((0xfffc0000U & ((IData)((VL_ULL(0x7ffffffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                          << 0x12U)) 
                          | (IData)((((QData)((IData)(vlTOPp->p)) 
                                      << 0x27U) >> 0x20U)));
        __Vtemp952[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                                & VL_NEGATE_Q((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                       >> 0xeU)) | 
                          (0xfffc0000U & ((IData)((
                                                   (VL_ULL(0x7ffffffffffff) 
                                                    & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                   >> 0x20U)) 
                                          << 0x12U)));
        __Vtemp952[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                                & VL_NEGATE_Q((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                               >> 0x20U)) 
                                      >> 0xeU));
        vcdp->chgArray(c+1913,(__Vtemp952),101);
        vcdp->chgQuad(c+1945,(((QData)((IData)(vlTOPp->p)) 
                               << 0x27U)),50);
        vcdp->chgBus(c+1961,(vlTOPp->p),11);
        __Vtemp954[0U] = 0x40dU;
        __Vtemp954[1U] = 0U;
        __Vtemp954[2U] = 0U;
        VL_EXTEND_WQ(92,46, __Vtemp955, ((QData)((IData)(vlTOPp->p)) 
                                         << 0x24U));
        VL_MUL_W(3, __Vtemp956, __Vtemp954, __Vtemp955);
        vcdp->chgQuad(c+1969,((VL_ULL(0xfffffffffff) 
                               & (VL_ULL(0x4120) + 
                                  ((VL_ULL(0x7fffffffffff) 
                                    & ((0x800000U & 
                                        vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])
                                        ? (((QData)((IData)(
                                                            vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                              >> 9U))
                                        : (((QData)((IData)(
                                                            vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                              >> 9U)))) 
                                   + (VL_ULL(0x1fffffffffff) 
                                      & (((QData)((IData)(
                                                          (0xfffffffU 
                                                           & __Vtemp956[2U]))) 
                                          << 0x17U) 
                                         | ((QData)((IData)(
                                                            __Vtemp956[1U])) 
                                            >> 9U))))))),46);
        __Vtemp959[0U] = 0x40dU;
        __Vtemp959[1U] = 0U;
        __Vtemp959[2U] = 0U;
        VL_EXTEND_WQ(92,46, __Vtemp960, ((QData)((IData)(vlTOPp->p)) 
                                         << 0x24U));
        VL_MUL_W(3, __Vtemp961, __Vtemp959, __Vtemp960);
        __Vtemp964[0U] = 0x40dU;
        __Vtemp964[1U] = 0U;
        __Vtemp964[2U] = 0U;
        VL_EXTEND_WQ(92,46, __Vtemp965, ((QData)((IData)(vlTOPp->p)) 
                                         << 0x24U));
        VL_MUL_W(3, __Vtemp966, __Vtemp964, __Vtemp965);
        vcdp->chgQuad(c+1985,((VL_ULL(0x7fffffffffff) 
                               & (VL_ULL(0x4120) + 
                                  (((0x800000U & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])
                                     ? (((QData)((IData)(
                                                         vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                         << 0x17U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                           >> 9U)) : 
                                    (((QData)((IData)(
                                                      vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[2U])) 
                                      << 0x17U) | ((QData)((IData)(
                                                                   vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_110[1U])) 
                                                   >> 9U))) 
                                   + (VL_ULL(0x1fffffffffff) 
                                      & (((QData)((IData)(
                                                          (0xfffffffU 
                                                           & __Vtemp966[2U]))) 
                                          << 0x17U) 
                                         | ((QData)((IData)(
                                                            __Vtemp966[1U])) 
                                            >> 9U))))))),47);
        __Vtemp969[0U] = 0xfffffb20U;
        __Vtemp969[1U] = 0xffffffffU;
        __Vtemp969[2U] = 0x7fffffffU;
        __Vtemp970[0U] = (IData)(((QData)((IData)(vlTOPp->n)) 
                                  << 0x24U));
        __Vtemp970[1U] = ((0xffff8000U & ((IData)((VL_ULL(0xffffffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))))) 
                                          << 0xfU)) 
                          | (IData)((((QData)((IData)(vlTOPp->n)) 
                                      << 0x24U) >> 0x20U)));
        __Vtemp970[2U] = ((0x7fffU & ((IData)((VL_ULL(0xffffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))))) 
                                      >> 0x11U)) | 
                          (0xffff8000U & ((IData)((
                                                   (VL_ULL(0xffffffffffff) 
                                                    & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU)))))) 
                                                   >> 0x20U)) 
                                          << 0xfU)));
        VL_MUL_W(3, __Vtemp971, __Vtemp969, __Vtemp970);
        __Vtemp972[0U] = __Vtemp971[0U];
        __Vtemp972[1U] = __Vtemp971[1U];
        __Vtemp972[2U] = (0x7fffffffU & __Vtemp971[2U]);
        vcdp->chgArray(c+2001,(__Vtemp972),95);
        __Vtemp973[0U] = (IData)(((QData)((IData)(vlTOPp->n)) 
                                  << 0x24U));
        __Vtemp973[1U] = ((0xffff8000U & ((IData)((VL_ULL(0xffffffffffff) 
                                                   & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))))) 
                                          << 0xfU)) 
                          | (IData)((((QData)((IData)(vlTOPp->n)) 
                                      << 0x24U) >> 0x20U)));
        __Vtemp973[2U] = ((0x7fffU & ((IData)((VL_ULL(0xffffffffffff) 
                                               & VL_NEGATE_Q((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))))) 
                                      >> 0x11U)) | 
                          (0xffff8000U & ((IData)((
                                                   (VL_ULL(0xffffffffffff) 
                                                    & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU)))))) 
                                                   >> 0x20U)) 
                                          << 0xfU)));
        vcdp->chgArray(c+2025,(__Vtemp973),95);
        vcdp->chgQuad(c+2049,(((QData)((IData)(vlTOPp->n)) 
                               << 0x24U)),47);
        __Vtemp975[0U] = 0x40dU;
        __Vtemp975[1U] = 0U;
        __Vtemp975[2U] = 0U;
        VL_EXTEND_WQ(92,46, __Vtemp976, ((QData)((IData)(vlTOPp->p)) 
                                         << 0x24U));
        VL_MUL_W(3, __Vtemp977, __Vtemp975, __Vtemp976);
        __Vtemp980[0U] = 0x40dU;
        __Vtemp980[1U] = 0U;
        __Vtemp980[2U] = 0U;
        VL_EXTEND_WQ(92,46, __Vtemp981, ((QData)((IData)(vlTOPp->p)) 
                                         << 0x24U));
        VL_MUL_W(3, __Vtemp982, __Vtemp980, __Vtemp981);
        vcdp->chgQuad(c+2065,((VL_ULL(0x1fffffffffff) 
                               & (((QData)((IData)(
                                                   (0xfffffffU 
                                                    & __Vtemp982[2U]))) 
                                   << 0x17U) | ((QData)((IData)(
                                                                __Vtemp982[1U])) 
                                                >> 9U)))),47);
        __Vtemp985[0U] = 0x40dU;
        __Vtemp985[1U] = 0U;
        __Vtemp985[2U] = 0U;
        VL_EXTEND_WQ(92,46, __Vtemp986, ((QData)((IData)(vlTOPp->p)) 
                                         << 0x24U));
        VL_MUL_W(3, __Vtemp987, __Vtemp985, __Vtemp986);
        vcdp->chgQuad(c+2081,((VL_ULL(0x1fffffffffff) 
                               & (((QData)((IData)(
                                                   (0xfffffffU 
                                                    & __Vtemp987[2U]))) 
                                   << 0x17U) | ((QData)((IData)(
                                                                __Vtemp987[1U])) 
                                                >> 9U)))),46);
        __Vtemp991[0U] = 0x40dU;
        __Vtemp991[1U] = 0U;
        __Vtemp991[2U] = 0U;
        VL_EXTEND_WQ(92,46, __Vtemp992, ((QData)((IData)(vlTOPp->p)) 
                                         << 0x24U));
        VL_MUL_W(3, __Vtemp993, __Vtemp991, __Vtemp992);
        __Vtemp996[0U] = __Vtemp993[0U];
        __Vtemp996[1U] = __Vtemp993[1U];
        __Vtemp996[2U] = (0x3fffffU & __Vtemp993[2U]);
        vcdp->chgArray(c+2097,(__Vtemp996),86);
        __Vtemp998[0U] = 0x40dU;
        __Vtemp998[1U] = 0U;
        __Vtemp998[2U] = 0U;
        VL_EXTEND_WQ(92,46, __Vtemp999, ((QData)((IData)(vlTOPp->p)) 
                                         << 0x24U));
        VL_MUL_W(3, __Vtemp1000, __Vtemp998, __Vtemp999);
        __Vtemp1001[0U] = __Vtemp1000[0U];
        __Vtemp1001[1U] = __Vtemp1000[1U];
        __Vtemp1001[2U] = (0xfffffffU & __Vtemp1000[2U]);
        vcdp->chgArray(c+2121,(__Vtemp1001),92);
        VL_EXTEND_WQ(92,46, __Vtemp1002, ((QData)((IData)(vlTOPp->p)) 
                                          << 0x24U));
        vcdp->chgArray(c+2145,(__Vtemp1002),92);
        vcdp->chgQuad(c+2169,(((QData)((IData)(vlTOPp->p)) 
                               << 0x24U)),46);
        __Vtemp1004[0U] = 0x40dU;
        __Vtemp1004[1U] = 0U;
        __Vtemp1004[2U] = 0U;
        VL_EXTEND_WQ(92,46, __Vtemp1005, ((QData)((IData)(vlTOPp->p)) 
                                          << 0x24U));
        VL_MUL_W(3, __Vtemp1006, __Vtemp1004, __Vtemp1005);
        __Vtemp1009[0U] = 0x40dU;
        __Vtemp1009[1U] = 0U;
        __Vtemp1009[2U] = 0U;
        VL_EXTEND_WQ(92,46, __Vtemp1010, ((QData)((IData)(vlTOPp->p)) 
                                          << 0x24U));
        VL_MUL_W(3, __Vtemp1011, __Vtemp1009, __Vtemp1010);
        __Vtemp1013[0U] = (IData)((VL_ULL(0x1ffffffff000) 
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
                                                                             & __Vtemp1011[2U]))) 
                                                            << 0x17U) 
                                                           | ((QData)((IData)(
                                                                              __Vtemp1011[1U])) 
                                                              >> 9U))))) 
                                                     << 6U))) 
                                      << 0xcU)));
        __Vtemp1013[1U] = (IData)(((VL_ULL(0x1ffffffff000) 
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
                                                                              & __Vtemp1011[2U]))) 
                                                             << 0x17U) 
                                                            | ((QData)((IData)(
                                                                               __Vtemp1011[1U])) 
                                                               >> 9U))))) 
                                                      << 6U))) 
                                       << 0xcU)) >> 0x20U));
        __Vtemp1013[2U] = 0U;
        vcdp->chgArray(c+2185,(__Vtemp1013),93);
        __Vtemp1015[0U] = 0x40dU;
        __Vtemp1015[1U] = 0U;
        __Vtemp1015[2U] = 0U;
        VL_EXTEND_WQ(92,46, __Vtemp1016, ((QData)((IData)(vlTOPp->p)) 
                                          << 0x24U));
        VL_MUL_W(3, __Vtemp1017, __Vtemp1015, __Vtemp1016);
        vcdp->chgQuad(c+2209,((VL_ULL(0x1ffffffff000) 
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
                                                                         & __Vtemp1017[2U]))) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          __Vtemp1017[1U])) 
                                                          >> 9U))))) 
                                                 << 6U))) 
                                  << 0xcU))),46);
        __Vtemp1020[0U] = 0x40dU;
        __Vtemp1020[1U] = 0U;
        __Vtemp1020[2U] = 0U;
        VL_EXTEND_WQ(92,46, __Vtemp1021, ((QData)((IData)(vlTOPp->p)) 
                                          << 0x24U));
        VL_MUL_W(3, __Vtemp1022, __Vtemp1020, __Vtemp1021);
        vcdp->chgQuad(c+2225,((VL_ULL(0x1ffffffff) 
                               & VL_DIV_QQQ(52, VL_ULL(0x8000000000000), 
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
                                                                        & __Vtemp1022[2U]))) 
                                                       << 0x17U) 
                                                      | ((QData)((IData)(
                                                                         __Vtemp1022[1U])) 
                                                         >> 9U))))) 
                                                << 6U))))),34);
        __Vtemp1025[0U] = 0x40dU;
        __Vtemp1025[1U] = 0U;
        __Vtemp1025[2U] = 0U;
        VL_EXTEND_WQ(92,46, __Vtemp1026, ((QData)((IData)(vlTOPp->p)) 
                                          << 0x24U));
        VL_MUL_W(3, __Vtemp1027, __Vtemp1025, __Vtemp1026);
        vcdp->chgQuad(c+2241,((VL_ULL(0x7ffffffffffff) 
                               & VL_DIV_QQQ(52, VL_ULL(0x8000000000000), 
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
                                                                        & __Vtemp1027[2U]))) 
                                                       << 0x17U) 
                                                      | ((QData)((IData)(
                                                                         __Vtemp1027[1U])) 
                                                         >> 9U))))) 
                                                << 6U))))),51);
        __Vtemp1030[0U] = 0xfffff928U;
        __Vtemp1030[1U] = 0xffffffffU;
        __Vtemp1030[2U] = 0xffffffffU;
        __Vtemp1030[3U] = 0x1ffU;
        __Vtemp1031[0U] = 0U;
        __Vtemp1031[1U] = (0xfffffe00U & ((IData)((
                                                   (VL_ULL(0xfffffffffffff800) 
                                                    & (VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                       << 0xbU)) 
                                                   | (QData)((IData)(vlTOPp->n)))) 
                                          << 9U));
        __Vtemp1031[2U] = ((0x1ffU & ((IData)(((VL_ULL(0xfffffffffffff800) 
                                                & (VL_NEGATE_Q((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                   << 0xbU)) 
                                               | (QData)((IData)(vlTOPp->n)))) 
                                      >> 0x17U)) | 
                           (0xfffffe00U & ((IData)(
                                                   (((VL_ULL(0xfffffffffffff800) 
                                                      & (VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                         << 0xbU)) 
                                                     | (QData)((IData)(vlTOPp->n))) 
                                                    >> 0x20U)) 
                                           << 9U)));
        __Vtemp1031[3U] = (0x1ffU & ((IData)((((VL_ULL(0xfffffffffffff800) 
                                                & (VL_NEGATE_Q((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlTOPp->n) 
                                                                                >> 0xaU))))) 
                                                   << 0xbU)) 
                                               | (QData)((IData)(vlTOPp->n))) 
                                              >> 0x20U)) 
                                     >> 0x17U));
        VL_MUL_W(4, __Vtemp1032, __Vtemp1030, __Vtemp1031);
        __Vtemp1033[0U] = __Vtemp1032[0U];
        __Vtemp1033[1U] = __Vtemp1032[1U];
        __Vtemp1033[2U] = __Vtemp1032[2U];
        __Vtemp1033[3U] = (0x1ffU & __Vtemp1032[3U]);
        vcdp->chgArray(c+2257,(__Vtemp1033),105);
        __Vtemp1035[0U] = 0xfffffc12U;
        __Vtemp1035[1U] = 0xffffffffU;
        __Vtemp1035[2U] = 0xffffffffU;
        __Vtemp1035[3U] = 0x1fU;
        __Vtemp1036[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                                   << 0x27U));
        __Vtemp1036[1U] = ((0xfffc0000U & ((IData)(
                                                   (VL_ULL(0x7ffffffffffff) 
                                                    & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                           << 0x12U)) 
                           | (IData)((((QData)((IData)(vlTOPp->p)) 
                                       << 0x27U) >> 0x20U)));
        __Vtemp1036[2U] = ((0x3ffffU & ((IData)((VL_ULL(0x7ffffffffffff) 
                                                 & VL_NEGATE_Q((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                        >> 0xeU)) | 
                           (0xfffc0000U & ((IData)(
                                                   ((VL_ULL(0x7ffffffffffff) 
                                                     & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                    >> 0x20U)) 
                                           << 0x12U)));
        __Vtemp1036[3U] = (0x3ffffU & ((IData)(((VL_ULL(0x7ffffffffffff) 
                                                 & VL_NEGATE_Q((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                >> 0x20U)) 
                                       >> 0xeU));
        VL_MUL_W(4, __Vtemp1037, __Vtemp1035, __Vtemp1036);
        __Vtemp1038[0U] = __Vtemp1037[0U];
        __Vtemp1038[1U] = __Vtemp1037[1U];
        __Vtemp1038[2U] = __Vtemp1037[2U];
        __Vtemp1038[3U] = (0x1fU & __Vtemp1037[3U]);
        vcdp->chgArray(c+2289,(__Vtemp1038),101);
        __Vtemp1040[0U] = 0x46bU;
        __Vtemp1040[1U] = 0U;
        __Vtemp1040[2U] = 0U;
        VL_EXTEND_WQ(94,47, __Vtemp1041, ((QData)((IData)(vlTOPp->n)) 
                                          << 0x25U));
        VL_MUL_W(3, __Vtemp1042, __Vtemp1040, __Vtemp1041);
        vcdp->chgQuad(c+2321,((VL_ULL(0xffffffffffff) 
                               & (VL_ULL(0x17e40) + 
                                  ((VL_ULL(0xfffffffffff8) 
                                    & (((QData)((IData)(
                                                        (0x3fffffffU 
                                                         & __Vtemp1042[2U]))) 
                                        << 0x19U) | 
                                       (VL_ULL(0x1fffffffffffff8) 
                                        & ((QData)((IData)(
                                                           __Vtemp1042[1U])) 
                                           >> 7U)))) 
                                   + (VL_ULL(0x7ffffffffffff) 
                                      & ((0x80000000U 
                                          & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])
                                          ? (((QData)((IData)(
                                                              vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                              << 0x13U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                >> 0xdU))
                                          : (((QData)((IData)(
                                                              vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                              << 0x13U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                                >> 0xdU)))))))),50);
        __Vtemp1045[0U] = 0x46bU;
        __Vtemp1045[1U] = 0U;
        __Vtemp1045[2U] = 0U;
        VL_EXTEND_WQ(94,47, __Vtemp1046, ((QData)((IData)(vlTOPp->n)) 
                                          << 0x25U));
        VL_MUL_W(3, __Vtemp1047, __Vtemp1045, __Vtemp1046);
        __Vtemp1050[0U] = 0x46bU;
        __Vtemp1050[1U] = 0U;
        __Vtemp1050[2U] = 0U;
        VL_EXTEND_WQ(94,47, __Vtemp1051, ((QData)((IData)(vlTOPp->n)) 
                                          << 0x25U));
        VL_MUL_W(3, __Vtemp1052, __Vtemp1050, __Vtemp1051);
        vcdp->chgQuad(c+2337,((VL_ULL(0x7ffffffffffff) 
                               & (VL_ULL(0x17e40) + 
                                  ((VL_ULL(0x1fffffffffff8) 
                                    & (((QData)((IData)(
                                                        (0x3fffffffU 
                                                         & __Vtemp1052[2U]))) 
                                        << 0x19U) | 
                                       (VL_ULL(0x1fffffffffffff8) 
                                        & ((QData)((IData)(
                                                           __Vtemp1052[1U])) 
                                           >> 7U)))) 
                                   + ((0x80000000U 
                                       & vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])
                                       ? (((QData)((IData)(
                                                           vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                           << 0x13U) 
                                          | ((QData)((IData)(
                                                             vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                             >> 0xdU))
                                       : (((QData)((IData)(
                                                           vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[2U])) 
                                           << 0x13U) 
                                          | ((QData)((IData)(
                                                             vlTOPp->comparator_latch___05F4877e2cc78717755__DOT__v__DOT__truncval_imm_311[1U])) 
                                             >> 0xdU))))))),51);
        __Vtemp1055[0U] = 0x46bU;
        __Vtemp1055[1U] = 0U;
        __Vtemp1055[2U] = 0U;
        VL_EXTEND_WQ(94,47, __Vtemp1056, ((QData)((IData)(vlTOPp->n)) 
                                          << 0x25U));
        VL_MUL_W(3, __Vtemp1057, __Vtemp1055, __Vtemp1056);
        __Vtemp1060[0U] = 0x46bU;
        __Vtemp1060[1U] = 0U;
        __Vtemp1060[2U] = 0U;
        VL_EXTEND_WQ(94,47, __Vtemp1061, ((QData)((IData)(vlTOPp->n)) 
                                          << 0x25U));
        VL_MUL_W(3, __Vtemp1062, __Vtemp1060, __Vtemp1061);
        vcdp->chgQuad(c+2353,((VL_ULL(0x1fffffffffff8) 
                               & (((QData)((IData)(
                                                   (0x3fffffffU 
                                                    & __Vtemp1062[2U]))) 
                                   << 0x19U) | (VL_ULL(0x1fffffffffffff8) 
                                                & ((QData)((IData)(
                                                                   __Vtemp1062[1U])) 
                                                   >> 7U))))),51);
        __Vtemp1065[0U] = 0x46bU;
        __Vtemp1065[1U] = 0U;
        __Vtemp1065[2U] = 0U;
        VL_EXTEND_WQ(94,47, __Vtemp1066, ((QData)((IData)(vlTOPp->n)) 
                                          << 0x25U));
        VL_MUL_W(3, __Vtemp1067, __Vtemp1065, __Vtemp1066);
        __Vtemp1070[0U] = 0x46bU;
        __Vtemp1070[1U] = 0U;
        __Vtemp1070[2U] = 0U;
        VL_EXTEND_WQ(94,47, __Vtemp1071, ((QData)((IData)(vlTOPp->n)) 
                                          << 0x25U));
        VL_MUL_W(3, __Vtemp1072, __Vtemp1070, __Vtemp1071);
        vcdp->chgQuad(c+2369,((VL_ULL(0x3fffffffffff) 
                               & (((QData)((IData)(
                                                   (0x3fffffffU 
                                                    & __Vtemp1072[2U]))) 
                                   << 0x16U) | ((QData)((IData)(
                                                                __Vtemp1072[1U])) 
                                                >> 0xaU)))),48);
        __Vtemp1075[0U] = 0x46bU;
        __Vtemp1075[1U] = 0U;
        __Vtemp1075[2U] = 0U;
        VL_EXTEND_WQ(94,47, __Vtemp1076, ((QData)((IData)(vlTOPp->n)) 
                                          << 0x25U));
        VL_MUL_W(3, __Vtemp1077, __Vtemp1075, __Vtemp1076);
        vcdp->chgQuad(c+2385,((VL_ULL(0x3fffffffffff) 
                               & (((QData)((IData)(
                                                   (0x3fffffffU 
                                                    & __Vtemp1077[2U]))) 
                                   << 0x16U) | ((QData)((IData)(
                                                                __Vtemp1077[1U])) 
                                                >> 0xaU)))),47);
        __Vtemp1081[0U] = 0x46bU;
        __Vtemp1081[1U] = 0U;
        __Vtemp1081[2U] = 0U;
        VL_EXTEND_WQ(94,47, __Vtemp1082, ((QData)((IData)(vlTOPp->n)) 
                                          << 0x25U));
        VL_MUL_W(3, __Vtemp1083, __Vtemp1081, __Vtemp1082);
        __Vtemp1086[0U] = __Vtemp1083[0U];
        __Vtemp1086[1U] = __Vtemp1083[1U];
        __Vtemp1086[2U] = (0xffffffU & __Vtemp1083[2U]);
        vcdp->chgArray(c+2401,(__Vtemp1086),88);
        __Vtemp1088[0U] = 0x46bU;
        __Vtemp1088[1U] = 0U;
        __Vtemp1088[2U] = 0U;
        VL_EXTEND_WQ(94,47, __Vtemp1089, ((QData)((IData)(vlTOPp->n)) 
                                          << 0x25U));
        VL_MUL_W(3, __Vtemp1090, __Vtemp1088, __Vtemp1089);
        __Vtemp1091[0U] = __Vtemp1090[0U];
        __Vtemp1091[1U] = __Vtemp1090[1U];
        __Vtemp1091[2U] = (0x3fffffffU & __Vtemp1090[2U]);
        vcdp->chgArray(c+2425,(__Vtemp1091),94);
        VL_EXTEND_WQ(94,47, __Vtemp1092, ((QData)((IData)(vlTOPp->n)) 
                                          << 0x25U));
        vcdp->chgArray(c+2449,(__Vtemp1092),94);
        vcdp->chgQuad(c+2473,(((QData)((IData)(vlTOPp->n)) 
                               << 0x25U)),47);
        __Vtemp1094[0U] = 0xfffffba5U;
        __Vtemp1094[1U] = 0xffffffffU;
        __Vtemp1094[2U] = 0xffffffffU;
        __Vtemp1094[3U] = 0x7fU;
        __Vtemp1095[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                                   << 0x28U));
        __Vtemp1095[1U] = ((0xfff80000U & ((IData)(
                                                   (VL_ULL(0xfffffffffffff) 
                                                    & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                           << 0x13U)) 
                           | (IData)((((QData)((IData)(vlTOPp->p)) 
                                       << 0x28U) >> 0x20U)));
        __Vtemp1095[2U] = ((0x7ffffU & ((IData)((VL_ULL(0xfffffffffffff) 
                                                 & VL_NEGATE_Q((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                        >> 0xdU)) | 
                           (0xfff80000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffffff) 
                                                     & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                    >> 0x20U)) 
                                           << 0x13U)));
        __Vtemp1095[3U] = (0x7ffffU & ((IData)(((VL_ULL(0xfffffffffffff) 
                                                 & VL_NEGATE_Q((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                >> 0x20U)) 
                                       >> 0xdU));
        VL_MUL_W(4, __Vtemp1096, __Vtemp1094, __Vtemp1095);
        __Vtemp1097[0U] = __Vtemp1096[0U];
        __Vtemp1097[1U] = __Vtemp1096[1U];
        __Vtemp1097[2U] = __Vtemp1096[2U];
        __Vtemp1097[3U] = (0x7fU & __Vtemp1096[3U]);
        vcdp->chgArray(c+2489,(__Vtemp1097),103);
        __Vtemp1098[0U] = (IData)(((QData)((IData)(vlTOPp->p)) 
                                   << 0x28U));
        __Vtemp1098[1U] = ((0xfff80000U & ((IData)(
                                                   (VL_ULL(0xfffffffffffff) 
                                                    & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                           << 0x13U)) 
                           | (IData)((((QData)((IData)(vlTOPp->p)) 
                                       << 0x28U) >> 0x20U)));
        __Vtemp1098[2U] = ((0x7ffffU & ((IData)((VL_ULL(0xfffffffffffff) 
                                                 & VL_NEGATE_Q((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU))))))) 
                                        >> 0xdU)) | 
                           (0xfff80000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffffff) 
                                                     & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                    >> 0x20U)) 
                                           << 0x13U)));
        __Vtemp1098[3U] = (0x7ffffU & ((IData)(((VL_ULL(0xfffffffffffff) 
                                                 & VL_NEGATE_Q((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlTOPp->p) 
                                                                                >> 0xaU)))))) 
                                                >> 0x20U)) 
                                       >> 0xdU));
        vcdp->chgArray(c+2521,(__Vtemp1098),103);
        vcdp->chgQuad(c+2553,(((QData)((IData)(vlTOPp->p)) 
                               << 0x28U)),51);
        __Vtemp1100[0U] = 0x46bU;
        __Vtemp1100[1U] = 0U;
        __Vtemp1100[2U] = 0U;
        VL_EXTEND_WQ(94,47, __Vtemp1101, ((QData)((IData)(vlTOPp->n)) 
                                          << 0x25U));
        VL_MUL_W(3, __Vtemp1102, __Vtemp1100, __Vtemp1101);
        __Vtemp1104[0U] = (0xc0000000U & ((IData)((VL_ULL(0x3ffffffff) 
                                                   & VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                                                (VL_ULL(0x3fffffffffffc00) 
                                                                 & ((VL_ULL(0x17e40) 
                                                                     + 
                                                                     ((VL_ULL(0xfffffffffff8) 
                                                                       & (((QData)((IData)(
                                                                                (0x3fffffffU 
                                                                                & __Vtemp1102[2U]))) 
                                                                           << 0x19U) 
                                                                          | (VL_ULL(0x1fffffffffffff8) 
                                                                             & ((QData)((IData)(
                                                                                __Vtemp1102[1U])) 
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
        __Vtemp1104[1U] = ((0x3fffffffU & ((IData)(
                                                   (VL_ULL(0x3ffffffff) 
                                                    & VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                                                 (VL_ULL(0x3fffffffffffc00) 
                                                                  & ((VL_ULL(0x17e40) 
                                                                      + 
                                                                      ((VL_ULL(0xfffffffffff8) 
                                                                        & (((QData)((IData)(
                                                                                (0x3fffffffU 
                                                                                & __Vtemp1102[2U]))) 
                                                                            << 0x19U) 
                                                                           | (VL_ULL(0x1fffffffffffff8) 
                                                                              & ((QData)((IData)(
                                                                                __Vtemp1102[1U])) 
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
                                           >> 2U)) 
                           | (0xc0000000U & ((IData)(
                                                     ((VL_ULL(0x3ffffffff) 
                                                       & VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                                                    (VL_ULL(0x3fffffffffffc00) 
                                                                     & ((VL_ULL(0x17e40) 
                                                                         + 
                                                                         ((VL_ULL(0xfffffffffff8) 
                                                                           & (((QData)((IData)(
                                                                                (0x3fffffffU 
                                                                                & __Vtemp1102[2U]))) 
                                                                               << 0x19U) 
                                                                              | (VL_ULL(0x1fffffffffffff8) 
                                                                                & ((QData)((IData)(
                                                                                __Vtemp1102[1U])) 
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
        __Vtemp1104[2U] = (0x3fffffffU & ((IData)((
                                                   (VL_ULL(0x3ffffffff) 
                                                    & VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                                                 (VL_ULL(0x3fffffffffffc00) 
                                                                  & ((VL_ULL(0x17e40) 
                                                                      + 
                                                                      ((VL_ULL(0xfffffffffff8) 
                                                                        & (((QData)((IData)(
                                                                                (0x3fffffffU 
                                                                                & __Vtemp1102[2U]))) 
                                                                            << 0x19U) 
                                                                           | (VL_ULL(0x1fffffffffffff8) 
                                                                              & ((QData)((IData)(
                                                                                __Vtemp1102[1U])) 
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
        vcdp->chgArray(c+2569,(__Vtemp1104),65);
        __Vtemp1106[0U] = 0x46bU;
        __Vtemp1106[1U] = 0U;
        __Vtemp1106[2U] = 0U;
        VL_EXTEND_WQ(94,47, __Vtemp1107, ((QData)((IData)(vlTOPp->n)) 
                                          << 0x25U));
        VL_MUL_W(3, __Vtemp1108, __Vtemp1106, __Vtemp1107);
        vcdp->chgQuad(c+2593,((VL_ULL(0x3ffffffff) 
                               & VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                            (VL_ULL(0x3fffffffffffc00) 
                                             & ((VL_ULL(0x17e40) 
                                                 + 
                                                 ((VL_ULL(0xfffffffffff8) 
                                                   & (((QData)((IData)(
                                                                       (0x3fffffffU 
                                                                        & __Vtemp1108[2U]))) 
                                                       << 0x19U) 
                                                      | (VL_ULL(0x1fffffffffffff8) 
                                                         & ((QData)((IData)(
                                                                            __Vtemp1108[1U])) 
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
                                                << 0xaU))))),35);
        __Vtemp1111[0U] = 0x46bU;
        __Vtemp1111[1U] = 0U;
        __Vtemp1111[2U] = 0U;
        VL_EXTEND_WQ(94,47, __Vtemp1112, ((QData)((IData)(vlTOPp->n)) 
                                          << 0x25U));
        VL_MUL_W(3, __Vtemp1113, __Vtemp1111, __Vtemp1112);
        vcdp->chgQuad(c+2609,((VL_ULL(0x7ffffffffffffff) 
                               & VL_DIV_QQQ(60, VL_ULL(0x800000000000000), 
                                            (VL_ULL(0x3fffffffffffc00) 
                                             & ((VL_ULL(0x17e40) 
                                                 + 
                                                 ((VL_ULL(0xfffffffffff8) 
                                                   & (((QData)((IData)(
                                                                       (0x3fffffffU 
                                                                        & __Vtemp1113[2U]))) 
                                                       << 0x19U) 
                                                      | (VL_ULL(0x1fffffffffffff8) 
                                                         & ((QData)((IData)(
                                                                            __Vtemp1113[1U])) 
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
                                                << 0xaU))))),59);
    }
}
