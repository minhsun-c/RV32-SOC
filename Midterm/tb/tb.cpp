#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <assert.h>
#include "Vwallace_tree.h"
#include "Vwallace_tree__Syms.h"
#include "verilated_vcd_c.h"

#define MAX_SIM_CYCLE 10
#define TIME_UNIT 2
vluint64_t main_time = 0;

using namespace std;

double sc_time_stamp()
{
    return (main_time);
}

void one_cycle(Vwallace_tree *top, VerilatedVcdC *tfp)
{
    top->A_i = rand() | 0x8000;
    top->B_i = rand() | 0x8000;
    top->eval();
    printf("%d * %d = %llu\n",
           top->A_i, top->B_i, top->product_o);
    main_time += TIME_UNIT;
    tfp->dump(main_time);
}

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    srand(time(NULL));

    VerilatedVcdC *tfp = new VerilatedVcdC();

    Vwallace_tree *top = new Vwallace_tree("top");
    top->trace(tfp, 0);
    tfp->open("wave.vcd");

    for (int i = 0; i < MAX_SIM_CYCLE; i++)
        one_cycle(top, tfp);

    top->final();
    tfp->close();
    delete top;
    return 0;
}
