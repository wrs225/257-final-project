// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSAR_ADC__N_BITS_10__SYMS_H_
#define _VSAR_ADC__N_BITS_10__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vsar_adc__N_BITS_10.h"

// SYMS CLASS
class Vsar_adc__N_BITS_10__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vsar_adc__N_BITS_10*           TOPp;
    
    // CREATORS
    Vsar_adc__N_BITS_10__Syms(Vsar_adc__N_BITS_10* topp, const char* namep);
    ~Vsar_adc__N_BITS_10__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
