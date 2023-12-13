// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcomparator_latch__4877e2cc78717755__Syms.h"
#include "Vcomparator_latch__4877e2cc78717755.h"



// FUNCTIONS
Vcomparator_latch__4877e2cc78717755__Syms::Vcomparator_latch__4877e2cc78717755__Syms(Vcomparator_latch__4877e2cc78717755* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
