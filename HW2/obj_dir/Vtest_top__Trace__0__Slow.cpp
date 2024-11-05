// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("test_top", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtest_top___024root__trace_init_sub__TOP__test_top__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+98,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__rom0__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__regfile0__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+98,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"pc_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"ce_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"if_inst_addr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"if_inst_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"if_id_inst_addr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"if_id_inst_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"id_inst_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"id_op1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"id_op2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"id_reg_we_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"id_reg_waddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"id_reg1_addr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"id_reg2_addr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+4,0,"id_reg1_re_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"id_reg2_re_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"reg1_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"reg2_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"id_exe_op1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"id_exe_op2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"id_exe_reg_we_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"id_exe_reg_waddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+27,0,"id_exe_inst_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"exe_reg_waddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+9,0,"exe_reg_we_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"exe_reg_wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"exe_mem_reg_waddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+29,0,"exe_mem_reg_we_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"exe_mem_reg_wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"mem_reg_waddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+12,0,"mem_reg_we_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"mem_reg_wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"mem_wb_reg_waddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+32,0,"mem_wb_reg_we_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"mem_wb_reg_wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rom0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtest_top___024root__trace_init_sub__TOP__test_top__rom0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("regfile0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtest_top___024root__trace_init_sub__TOP__test_top__regfile0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("exe0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"reg_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"reg_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+27,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"reg_waddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+9,0,"reg_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"reg_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+105,0,"i_reg_we_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"i_reg_wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"r_reg_we_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"r_reg_wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("exe_type_i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"reg_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+105,0,"reg_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+37,0,"op1_ge_op2_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"op1_ge_op2_unsigned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"sr_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"sr_shift_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"isType_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("exe_type_r0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"reg_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"reg_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+37,0,"op1_ge_op2_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"op1_ge_op2_unsigned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"sr_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"sr_shift_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"isType_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("exe_mem0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"reg_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+9,0,"reg_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"reg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"reg_waddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+29,0,"reg_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"reg_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("id0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"inst_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"reg1_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"reg2_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"exe_reg_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"exe_reg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"exe_reg_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"mem_reg_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"mem_reg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"mem_reg_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"reg1_raddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"reg2_raddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+4,0,"reg1_re_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"reg2_re_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"op1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"op2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"reg_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"reg_waddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+108,0,"op1_o_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"op2_o_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+44,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+49,0,"i_reg1_raddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"i_reg2_raddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+51,0,"i_reg1_re_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"i_reg2_re_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"i_op1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"i_op2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"i_reg_we_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"i_reg_waddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"r_reg1_raddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"r_reg2_raddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+58,0,"r_reg1_re_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"r_reg2_re_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"r_op1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"r_op2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"r_reg_we_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"r_reg_waddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("inst_type_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"reg1_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"reg1_raddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"reg2_raddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+51,0,"reg1_re_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"reg2_re_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"op1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"op2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"reg_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"reg_waddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+43,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+48,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+62,0,"isType_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("inst_type_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"reg1_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"reg2_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"reg1_raddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"reg2_raddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+58,0,"reg1_re_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"reg2_re_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"op1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"op2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"reg_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"reg_waddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+43,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+48,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+63,0,"isType_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("id_exe0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"reg_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"reg_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+100,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"inst_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"op1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"op2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"reg_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"reg_waddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"inst_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("if_id0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+99,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"inst_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"inst_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"reg_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+29,0,"reg_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"reg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"reg_waddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+12,0,"reg_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"reg_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_wb0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"reg_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+12,0,"reg_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"reg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"reg_waddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+32,0,"reg_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"reg_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_reg0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+99,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"ce_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__rom0__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__rom0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+99,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"ce_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"addr4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("writeByte__Vstatic__unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+111,0,"t_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__regfile0__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__regfile0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+99,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+33,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"re1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"raddr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+5,0,"re2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"raddr2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"rdata1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"rdata2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+66+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_top(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_top\n"); );
    // Body
    Vtest_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtest_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtest_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest_top___024root__trace_register(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtest_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtest_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtest_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtest_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest_top___024root__trace_const_0_sub_0(Vtest_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_const_0\n"); );
    // Init
    Vtest_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_top___024root*>(voidSelf);
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_top___024root__trace_const_0_sub_0(Vtest_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+112,(vlSymsp->TOP__test_top.__PVT__id_exe0__DOT__inst_addr_i),32);
}

VL_ATTR_COLD void Vtest_top___024root__trace_full_0_sub_0(Vtest_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_full_0\n"); );
    // Init
    Vtest_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_top___024root*>(voidSelf);
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_top___024root__trace_full_0_sub_0(Vtest_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__test_top__regfile0.__PVT__i),32);
    bufp->fullCData(oldp+2,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
    bufp->fullCData(oldp+3,(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o),5);
    bufp->fullBit(oldp+4,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o));
    bufp->fullIData(oldp+6,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o),32);
    bufp->fullIData(oldp+7,(((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                              ? 0U : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o) 
                                         == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                                        & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                       & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o))
                                       ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                       : ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o)
                                           ? vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                          [vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o]
                                           : 0U)))),32);
    bufp->fullCData(oldp+8,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
    bufp->fullBit(oldp+9,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
    bufp->fullIData(oldp+10,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
    bufp->fullCData(oldp+11,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
    bufp->fullBit(oldp+12,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
    bufp->fullIData(oldp+13,(vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o),32);
    bufp->fullIData(oldp+14,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_wdata_o),32);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o),32);
    bufp->fullIData(oldp+16,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                               ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                               : 0U)),32);
    bufp->fullIData(oldp+17,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                               ? ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                                   ? 0U : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o) 
                                              == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                                             & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                            & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o))
                                            ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                            : ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o)
                                                ? vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                               [vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o]
                                                : 0U)))
                               : 0U)),32);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
    bufp->fullBit(oldp+19,(vlSymsp->TOP__test_top.__PVT__ce_wire));
    bufp->fullIData(oldp+20,(vlSymsp->TOP__test_top__rom0.__PVT__inst_o),32);
    bufp->fullIData(oldp+21,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
    bufp->fullIData(oldp+22,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
    bufp->fullIData(oldp+23,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
    bufp->fullIData(oldp+24,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
    bufp->fullBit(oldp+25,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
    bufp->fullCData(oldp+26,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
    bufp->fullCData(oldp+28,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
    bufp->fullBit(oldp+29,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
    bufp->fullIData(oldp+30,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
    bufp->fullCData(oldp+31,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
    bufp->fullBit(oldp+32,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
    bufp->fullIData(oldp+33,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
    bufp->fullCData(oldp+34,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
    bufp->fullCData(oldp+35,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+36,((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+37,(VL_GTES_III(32, vlSymsp->TOP__test_top.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)));
    bufp->fullBit(oldp+38,((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                            >= vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)));
    bufp->fullIData(oldp+39,((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                              >> (0x1fU & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))),32);
    bufp->fullIData(oldp+40,((0xffffffffU >> (0x1fU 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))),32);
    bufp->fullBit(oldp+41,((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))));
    bufp->fullBit(oldp+42,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r));
    bufp->fullCData(oldp+43,((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+44,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
    bufp->fullCData(oldp+45,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+46,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                       >> 7U))),5);
    bufp->fullCData(oldp+47,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+48,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+49,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o),5);
    bufp->fullCData(oldp+50,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o),5);
    bufp->fullBit(oldp+51,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o));
    bufp->fullIData(oldp+53,(((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                               ? ((0x4000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                   ? ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                       ? (((- (IData)(
                                                      (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0x14U))
                                       : ((0x1000U 
                                           & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                           ? ((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_i__DOT____VdfgExtracted_h80dc25ad__0)
                                               ? (0x1fU 
                                                  & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0x14U))
                                               : 0U)
                                           : (((- (IData)(
                                                          (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                 >> 0x14U))))
                                   : ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                       ? (((- (IData)(
                                                      (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0x14U))
                                       : ((0x1000U 
                                           & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                           ? ((0U == 
                                               (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0x19U))
                                               ? (0x1fU 
                                                  & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0x14U))
                                               : 0U)
                                           : (((- (IData)(
                                                          (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                 >> 0x14U)))))
                               : 0U)),32);
    bufp->fullBit(oldp+54,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o));
    bufp->fullCData(oldp+55,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o),5);
    bufp->fullCData(oldp+56,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                               ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                           >> 0xfU))
                               : 0U)),5);
    bufp->fullCData(oldp+57,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                               ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                           >> 0x14U))
                               : 0U)),5);
    bufp->fullBit(oldp+58,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o));
    bufp->fullBit(oldp+59,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o));
    bufp->fullBit(oldp+60,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o));
    bufp->fullCData(oldp+61,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                               ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                           >> 7U)) : 0U)),5);
    bufp->fullBit(oldp+62,((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))));
    bufp->fullBit(oldp+63,(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r));
    bufp->fullIData(oldp+64,(vlSymsp->TOP__test_top.__PVT__id_exe0__DOT__inst_addr_o),32);
    bufp->fullIData(oldp+65,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),21);
    bufp->fullIData(oldp+66,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
    bufp->fullIData(oldp+67,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
    bufp->fullIData(oldp+68,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
    bufp->fullIData(oldp+69,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
    bufp->fullIData(oldp+70,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
    bufp->fullIData(oldp+71,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
    bufp->fullIData(oldp+72,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
    bufp->fullIData(oldp+73,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
    bufp->fullIData(oldp+74,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
    bufp->fullIData(oldp+75,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
    bufp->fullIData(oldp+76,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
    bufp->fullIData(oldp+77,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
    bufp->fullIData(oldp+78,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
    bufp->fullIData(oldp+79,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
    bufp->fullIData(oldp+80,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
    bufp->fullIData(oldp+81,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
    bufp->fullIData(oldp+82,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
    bufp->fullIData(oldp+83,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
    bufp->fullIData(oldp+84,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
    bufp->fullIData(oldp+85,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
    bufp->fullIData(oldp+90,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
    bufp->fullIData(oldp+93,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
    bufp->fullIData(oldp+97,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
    bufp->fullBit(oldp+98,(vlSelf->rst_i));
    bufp->fullBit(oldp+99,(vlSelf->clk_i));
    bufp->fullIData(oldp+100,(((IData)(vlSelf->rst_i)
                                ? 0x13U : ((0x13U == 
                                            (0x7fU 
                                             & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                            ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                            : ((0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                : 0x13U)))),32);
    bufp->fullIData(oldp+101,(((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                 & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                   == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                                    ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                    : 0U) : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                               & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                              & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                                 == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                              ? ((0U 
                                                  != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                                                  ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                                  : 0U)
                                              : ((IData)(vlSelf->rst_i)
                                                  ? 0U
                                                  : 
                                                 ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                   ? vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o
                                                   : 
                                                  ((0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                     ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                     : 0U)
                                                    : 0U)))))),32);
    bufp->fullIData(oldp+102,(((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                 & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                   == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                                    ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                    : 0U) : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                               & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                              & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                                 == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                              ? ((0U 
                                                  != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                                                  ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                                  : 0U)
                                              : ((IData)(vlSelf->rst_i)
                                                  ? 0U
                                                  : 
                                                 ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                   ? 
                                                  ((0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                         >> 0x14U))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_i__DOT____VdfgExtracted_h80dc25ad__0)
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 
                                                      (((- (IData)(
                                                                   (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 0x14U))))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                         >> 0x14U))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                         >> 0x19U))
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 
                                                      (((- (IData)(
                                                                   (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 0x14U)))))
                                                    : 0U)
                                                   : 
                                                  ((0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                                                      ? 0U
                                                      : 
                                                     (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o) 
                                                         == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                                                        & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                                       & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o))
                                                       ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                                       : 
                                                      ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o)
                                                        ? 
                                                       vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                                       [vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o]
                                                        : 0U)))
                                                     : 0U)
                                                    : 0U)))))),32);
    bufp->fullBit(oldp+103,(((1U & (~ (IData)(vlSelf->rst_i))) 
                             && ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                  ? (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o)
                                  : ((0x33U == (0x7fU 
                                                & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
                                     && (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o))))));
    bufp->fullCData(oldp+104,(((IData)(vlSelf->rst_i)
                                ? 0U : (0x1fU & ((0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                  ? (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o)
                                                  : 
                                                 ((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                    ? 
                                                   (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                    >> 7U)
                                                    : 0U)
                                                   : 0U))))),5);
    bufp->fullBit(oldp+105,(((1U & (~ ((IData)(vlSelf->rst_i) 
                                       | (0x13U != 
                                          (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))))) 
                             && ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) 
                                 && ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                      ? ((1U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 0xdU)) 
                                         || ((1U & 
                                              (~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 0xcU))) 
                                             || ((0U 
                                                  == 
                                                  (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                   >> 0x19U)) 
                                                 || (0x20U 
                                                     == 
                                                     (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                      >> 0x19U)))))
                                      : ((1U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 0xdU)) 
                                         || ((1U & 
                                              (~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 0xcU))) 
                                             || (0U 
                                                 == 
                                                 (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 0x19U)))))))));
    bufp->fullBit(oldp+106,((1U & (~ ((IData)(vlSelf->rst_i) 
                                      | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r)))))));
    bufp->fullIData(oldp+107,(((1U & ((IData)(vlSelf->rst_i) 
                                      | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))
                                ? 0U : ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                         ? ((0x2000U 
                                             & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                             ? ((0x1000U 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                 : 
                                                (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 | vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                                             : ((0x1000U 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                 ? 
                                                ((0x20U 
                                                  == 
                                                  (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                   >> 0x19U))
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__test_top.__PVT__id_exe_op1_o, 
                                                                (0x1fU 
                                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                                                  : 
                                                 (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)))
                                                 : 
                                                (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 ^ vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)))
                                         : ((0x2000U 
                                             & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                             ? ((0x1000U 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                 : 
                                                VL_LTS_III(32, vlSymsp->TOP__test_top.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                                             : ((0x1000U 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                                                 : 
                                                ((0x20U 
                                                  == 
                                                  (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                   >> 0x19U))
                                                  ? 
                                                 (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                  - vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                  : 
                                                 (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                  + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))))))),32);
    bufp->fullIData(oldp+108,(((IData)(vlSelf->rst_i)
                                ? 0U : ((0x13U == (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                         ? vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o
                                         : ((0x33U 
                                             == (0x7fU 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                             ? ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                 ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                 : 0U)
                                             : 0U)))),32);
    bufp->fullIData(oldp+109,(((IData)(vlSelf->rst_i)
                                ? 0U : ((0x13U == (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                         ? ((0x13U 
                                             == (0x7fU 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                             ? ((0x4000U 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                 ? 
                                                ((0x2000U 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0x14U))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_i__DOT____VdfgExtracted_h80dc25ad__0)
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x14U))
                                                    : 0U)
                                                   : 
                                                  (((- (IData)(
                                                               (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x14U))))
                                                 : 
                                                ((0x2000U 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0x14U))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0x19U))
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x14U))
                                                    : 0U)
                                                   : 
                                                  (((- (IData)(
                                                               (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x14U)))))
                                             : 0U) : 
                                        ((0x33U == 
                                          (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                          ? ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                              ? ((0U 
                                                  == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                                                  ? 0U
                                                  : 
                                                 (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o) 
                                                     == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                                                    & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                                   & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o))
                                                   ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                                   : 
                                                  ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o)
                                                    ? 
                                                   vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                                   [vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o]
                                                    : 0U)))
                                              : 0U)
                                          : 0U)))),32);
    bufp->fullCData(oldp+110,(((IData)(vlSelf->rst_i)
                                ? 0x13U : (0x7fU & 
                                           ((0x13U 
                                             == (0x7fU 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                             ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                             : ((0x33U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                 ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                 : 0x13U))))),7);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__test_top__rom0.__PVT__writeByte__Vstatic__unnamedblk1__DOT__t_addr),32);
}
