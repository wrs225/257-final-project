// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsar_adc__N_BITS_10__Syms.h"
#include "Vsar_adc__N_BITS_10.h"



// FUNCTIONS
Vsar_adc__N_BITS_10__Syms::Vsar_adc__N_BITS_10__Syms(Vsar_adc__N_BITS_10* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
