// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtest_top__pch.h"
#include "Vtest_top.h"
#include "Vtest_top___024root.h"
#include "Vtest_top_test_top.h"
#include "Vtest_top_rom.h"
#include "Vtest_top_regfile.h"

// FUNCTIONS
Vtest_top__Syms::~Vtest_top__Syms()
{
}

Vtest_top__Syms::Vtest_top__Syms(VerilatedContext* contextp, const char* namep, Vtest_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__test_top{this, Verilated::catName(namep, "test_top")}
    , TOP__test_top__regfile0{this, Verilated::catName(namep, "test_top.regfile0")}
    , TOP__test_top__rom0{this, Verilated::catName(namep, "test_top.rom0")}
{
        // Check resources
        Verilated::stackCheck(50);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.test_top = &TOP__test_top;
    TOP__test_top.regfile0 = &TOP__test_top__regfile0;
    TOP__test_top.rom0 = &TOP__test_top__rom0;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__test_top.__Vconfigure(true);
    TOP__test_top__regfile0.__Vconfigure(true);
    TOP__test_top__rom0.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
