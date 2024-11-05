// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef VERILATED_VTEST_TOP___024ROOT_H_
#define VERILATED_VTEST_TOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtest_top_test_top;


class Vtest_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtest_top_test_top* test_top;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_top___024root(Vtest_top__Syms* symsp, const char* v__name);
    ~Vtest_top___024root();
    VL_UNCOPYABLE(Vtest_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
