// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef VERILATED_VTEST_TOP_ROM_H_
#define VERILATED_VTEST_TOP_ROM_H_  // guard

#include "verilated.h"


class Vtest_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_top_rom final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__ce_i,0,0);
    VL_IN(__PVT__addr_i,31,0);
    VL_OUT(__PVT__inst_o,31,0);
    IData/*31:0*/ __PVT__writeByte__Vstatic__unnamedblk1__DOT__t_addr;
    VlUnpacked<CData/*7:0*/, 2097152> __PVT__mem;

    // INTERNAL VARIABLES
    Vtest_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_top_rom(Vtest_top__Syms* symsp, const char* v__name);
    ~Vtest_top_rom();
    VL_UNCOPYABLE(Vtest_top_rom);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void writeByte(uint32_t byte_addr, uint32_t val);
};


#endif  // guard
