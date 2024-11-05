// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top__pch.h"
#include "Vtest_top_rom.h"

void Vtest_top_rom::writeByte(uint32_t byte_addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_rom::writeByte\n"); );
    // Body
    this->__PVT__writeByte__Vstatic__unnamedblk1__DOT__t_addr 
        = byte_addr;
    if ((VL_LTES_III(32, 0U, byte_addr) & (0x200000U 
                                           > byte_addr))) {
        this->__PVT__mem[(0x1fffffU & this->__PVT__writeByte__Vstatic__unnamedblk1__DOT__t_addr)] 
            = val;
    }
}
