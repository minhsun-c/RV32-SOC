// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top__pch.h"
#include "Vtest_top__Syms.h"
#include "Vtest_top_rom.h"

VL_INLINE_OPT void Vtest_top_rom___nba_sequent__TOP__test_top__rom0__0(Vtest_top_rom* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_rom___nba_sequent__TOP__test_top__rom0__0\n"); );
    // Body
    vlSelf->__PVT__inst_o = ((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                              ? ((vlSelf->__PVT__mem
                                  [(0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)] 
                                  << 0x18U) | ((vlSelf->__PVT__mem
                                                [(0x1fffffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x1ffffcU 
                                                      & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                << 0x10U) 
                                               | ((vlSelf->__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                   << 8U) 
                                                  | vlSelf->__PVT__mem
                                                  [
                                                  (0x1fffffU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0x1ffffcU 
                                                       & vlSymsp->TOP__test_top.__PVT__pc_wire)))])))
                              : 0U);
}
