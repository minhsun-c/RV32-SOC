// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top__pch.h"
#include "Vtest_top__Syms.h"
#include "Vtest_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_top___024root___dump_triggers__ico(Vtest_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_top___024root___eval_triggers__ico(Vtest_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vtest_top_test_top___ico_sequent__TOP__test_top__0(Vtest_top_test_top* vlSelf);
void Vtest_top_regfile___ico_sequent__TOP__test_top__regfile0__0(Vtest_top_regfile* vlSelf);
void Vtest_top_test_top___ico_sequent__TOP__test_top__1(Vtest_top_test_top* vlSelf);

void Vtest_top___024root___eval_ico(Vtest_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtest_top_test_top___ico_sequent__TOP__test_top__0((&vlSymsp->TOP__test_top));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtest_top_regfile___ico_sequent__TOP__test_top__regfile0__0((&vlSymsp->TOP__test_top__regfile0));
        Vtest_top_test_top___ico_sequent__TOP__test_top__1((&vlSymsp->TOP__test_top));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_top___024root___dump_triggers__act(Vtest_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_top___024root___eval_triggers__act(Vtest_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtest_top_test_top___nba_sequent__TOP__test_top__0(Vtest_top_test_top* vlSelf);
void Vtest_top_regfile___nba_sequent__TOP__test_top__regfile0__0(Vtest_top_regfile* vlSelf);
void Vtest_top_rom___nba_sequent__TOP__test_top__rom0__0(Vtest_top_rom* vlSelf);
void Vtest_top_test_top___nba_sequent__TOP__test_top__1(Vtest_top_test_top* vlSelf);

void Vtest_top___024root___eval_nba(Vtest_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtest_top_test_top___nba_sequent__TOP__test_top__0((&vlSymsp->TOP__test_top));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vtest_top_regfile___nba_sequent__TOP__test_top__regfile0__0((&vlSymsp->TOP__test_top__regfile0));
        Vtest_top_rom___nba_sequent__TOP__test_top__rom0__0((&vlSymsp->TOP__test_top__rom0));
        Vtest_top_test_top___nba_sequent__TOP__test_top__1((&vlSymsp->TOP__test_top));
        Vtest_top_regfile___ico_sequent__TOP__test_top__regfile0__0((&vlSymsp->TOP__test_top__regfile0));
        Vtest_top_test_top___ico_sequent__TOP__test_top__1((&vlSymsp->TOP__test_top));
    }
}
