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
            VL_FATAL_MT("sar_adc.v", 79, "",
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
            VL_FATAL_MT("sar_adc.v", 79, "",
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
    // Body
    __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap 
        = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap;
    __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm 
        = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm;
    vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm 
        = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm;
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
            if (((0U < (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)) 
                 & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                    <= (0x1feU & ((IData)((VL_ULL(0xffffffff) 
                                           & ((QData)((IData)(
                                                              (0x1ffe000U 
                                                               & ((IData)(
                                                                          (VL_ULL(0xfffff) 
                                                                           & ((VL_ULL(0x1a66) 
                                                                               * (QData)((IData)(
                                                                                ((IData)(vlTOPp->output_result_digital) 
                                                                                << 0xbU)))) 
                                                                              >> 0x16U))) 
                                                                  << 0xdU)))) 
                                              >> 0x11U))) 
                                  << 1U))))) {
                vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm = 1U;
            }
        } else {
            if ((1U == vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm)) {
                if ((((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap) 
                      > (0x1feU & ((IData)((VL_ULL(0xffffffff) 
                                            & ((QData)((IData)(
                                                               (0x1ffe000U 
                                                                & ((IData)(
                                                                           (VL_ULL(0xfffff) 
                                                                            & ((VL_ULL(0x1a66) 
                                                                                * (QData)((IData)(
                                                                                ((IData)(vlTOPp->output_result_digital) 
                                                                                << 0xbU)))) 
                                                                               >> 0x16U))) 
                                                                   << 0xdU)))) 
                                               >> 0x11U))) 
                                   << 1U))) & (0x200U 
                                               >= (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap)))) {
                    vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm = 0U;
                }
            }
        }
    }
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm 
        = __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm;
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap 
        = __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap;
}

VL_INLINE_OPT void Vsar_adc__N_BITS_10::_sequent__TOP__2(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsar_adc__N_BITS_10::_sequent__TOP__2\n"); );
    Vsar_adc__N_BITS_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter;
    // Body
    __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter 
        = vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter;
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->input_hold_digital))))) {
        vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register = 0U;
    } else {
        vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound1 
            = (0U == vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm);
        if ((9U >= (0xfU & (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                            - (IData)(1U))))) {
            vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register 
                = (((~ ((IData)(1U) << (0xfU & (((IData)(0xaU) 
                                                 - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                                                - (IData)(1U))))) 
                    & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register)) 
                   | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound1) 
                      << (0xfU & (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                                  - (IData)(1U)))));
        }
    }
    if (vlTOPp->reset) {
        __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter = 0U;
    } else {
        if (vlTOPp->input_hold_digital) {
            __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter 
                = ((9U != (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter))
                    ? (0xfU & ((IData)(1U) + (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)))
                    : 0U);
        }
    }
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter 
        = __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter;
    vlTOPp->eoc = (9U == (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((0U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register)));
    vlTOPp->output_result_digital = ((0x3feU & (IData)(vlTOPp->output_result_digital)) 
                                     | (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((1U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 1U)));
    vlTOPp->output_result_digital = ((0x3fdU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 1U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((2U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 2U)));
    vlTOPp->output_result_digital = ((0x3fbU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 2U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((3U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 3U)));
    vlTOPp->output_result_digital = ((0x3f7U & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 3U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((4U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 4U)));
    vlTOPp->output_result_digital = ((0x3efU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 4U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((5U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 5U)));
    vlTOPp->output_result_digital = ((0x3dfU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 5U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((6U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 6U)));
    vlTOPp->output_result_digital = ((0x3bfU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 6U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((7U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 7U)));
    vlTOPp->output_result_digital = ((0x37fU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 7U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((8U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 8U)));
    vlTOPp->output_result_digital = ((0x2ffU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 8U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((9U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 9U)));
    vlTOPp->output_result_digital = ((0x1ffU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 9U));
}

void Vsar_adc__N_BITS_10::_settle__TOP__3(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsar_adc__N_BITS_10::_settle__TOP__3\n"); );
    Vsar_adc__N_BITS_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->eoc = (9U == (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((0U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register)));
    vlTOPp->output_result_digital = ((0x3feU & (IData)(vlTOPp->output_result_digital)) 
                                     | (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((1U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 1U)));
    vlTOPp->output_result_digital = ((0x3fdU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 1U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((2U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 2U)));
    vlTOPp->output_result_digital = ((0x3fbU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 2U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((3U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 3U)));
    vlTOPp->output_result_digital = ((0x3f7U & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 3U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((4U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 4U)));
    vlTOPp->output_result_digital = ((0x3efU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 4U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((5U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 5U)));
    vlTOPp->output_result_digital = ((0x3dfU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 5U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((6U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 6U)));
    vlTOPp->output_result_digital = ((0x3bfU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 6U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((7U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 7U)));
    vlTOPp->output_result_digital = ((0x37fU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 7U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((8U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 8U)));
    vlTOPp->output_result_digital = ((0x2ffU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 8U));
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 
        = ((9U == (((IData)(0xaU) - (IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter)) 
                   - (IData)(1U))) ? 1U : (1U & ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register) 
                                                 >> 9U)));
    vlTOPp->output_result_digital = ((0x1ffU & (IData)(vlTOPp->output_result_digital)) 
                                     | ((IData)(vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2) 
                                        << 9U));
}

VL_INLINE_OPT void Vsar_adc__N_BITS_10::_sequent__TOP__4(Vsar_adc__N_BITS_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsar_adc__N_BITS_10::_sequent__TOP__4\n"); );
    Vsar_adc__N_BITS_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm 
        = vlTOPp->__Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm;
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
    sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__state_cap = VL_RAND_RESET_I(10);
    sar_adc___05FN_BITS_10__DOT__v__DOT__sah__DOT__fsm = VL_RAND_RESET_I(32);
    sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__counter = VL_RAND_RESET_I(4);
    sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT__quantized_voltage_register = VL_RAND_RESET_I(10);
    sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    sar_adc___05FN_BITS_10__DOT__v__DOT__SAR_instance__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm = VL_RAND_RESET_I(32);
    __Vdly__sar_adc___05FN_BITS_10__DOT__v__DOT__comparator_instance__DOT__fsm = VL_RAND_RESET_I(32);
}
