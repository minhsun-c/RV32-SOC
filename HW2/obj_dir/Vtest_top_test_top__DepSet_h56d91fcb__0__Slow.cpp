// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top__pch.h"
#include "Vtest_top_test_top.h"

VL_ATTR_COLD void Vtest_top_test_top___ctor_var_reset(Vtest_top_test_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___ctor_var_reset\n"); );
    // Body
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_wire = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ce_wire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_id_inst_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_id_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_reg1_addr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_reg2_addr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_reg1_re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_reg2_re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_exe_op1_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_exe_op2_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_exe_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_exe_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_exe_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exe_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exe_mem_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_mem_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_wb_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_wb_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_wb_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id0__DOT__i_reg1_raddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id0__DOT__i_reg2_raddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id0__DOT__i_reg1_re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id0__DOT__i_reg2_re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id0__DOT__i_op1_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id0__DOT__i_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id0__DOT__i_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id0__DOT__r_reg1_re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id0__DOT__r_reg2_re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id0__DOT__r_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->id0__DOT__inst_type_i__DOT____VdfgExtracted_h80dc25ad__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id0__DOT__inst_type_r__DOT__isType_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_exe0__DOT__inst_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_exe0__DOT__inst_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__i_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__exe_type_r0__DOT__isType_r = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__pc_wire = VL_RAND_RESET_I(32);
}