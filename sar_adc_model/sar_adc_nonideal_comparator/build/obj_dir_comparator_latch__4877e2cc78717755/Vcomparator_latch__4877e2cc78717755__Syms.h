// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCOMPARATOR_LATCH__4877E2CC78717755__SYMS_H_
#define _VCOMPARATOR_LATCH__4877E2CC78717755__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vcomparator_latch__4877e2cc78717755.h"

// SYMS CLASS
class Vcomparator_latch__4877e2cc78717755__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vcomparator_latch__4877e2cc78717755* TOPp;
    
    // CREATORS
    Vcomparator_latch__4877e2cc78717755__Syms(Vcomparator_latch__4877e2cc78717755* topp, const char* namep);
    ~Vcomparator_latch__4877e2cc78717755__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
