// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top__pch.h"
#include "Vtest_top_rom.h"

VL_ATTR_COLD void Vtest_top_rom___ctor_var_reset(Vtest_top_rom* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_rom___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ce_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_o = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2097152; ++__Vi0) {
        vlSelf->__PVT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__writeByte__Vstatic__unnamedblk1__DOT__t_addr = VL_RAND_RESET_I(32);
}
