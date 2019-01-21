#include <verilated.h>          // Defines common routines
#include "Vcuckatoo_top.h"

#include "verilated_vcd_c.h"

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

Vcuckatoo_top *uut;                     // Instantiation of module
vluint64_t main_time = 0;       // Current simulation time

double sc_time_stamp () {       // Called by $time in Verilog
    return main_time;           // converts to double, to match
    // what SystemC does
}

int main(int argc, char** argv)
{
    // turn on trace or not?
    bool vcdTrace = true;
    VerilatedVcdC* tfp = NULL;

    Verilated::commandArgs(argc, argv);   // Remember args
    uut = new Vcuckatoo_top;   // Create instance

    uut->eval();
    uut->eval();

    if (vcdTrace)
    {
        Verilated::traceEverOn(true);

        tfp = new VerilatedVcdC;
        uut->trace(tfp, 99);

        std::string vcdname = argv[0];
        vcdname += ".vcd";
        std::cout << vcdname << std::endl;
        tfp->open(vcdname.c_str());
    }

    uut->CLOCK = 0;
    uut->eval();

    // Reset circuit
    uut->reset_n = 0;
    uut->eval();

    uut->CLOCK = 1;
    uut->eval();

    uut->reset_n = 1;
    uut->eval();

    uut->CLOCK = 0;
    uut->eval();

    // Evaluate the circuit
    while (!Verilated::gotFinish())
    {
        uut->CLOCK = uut->CLOCK ? 0 : 1;       // Toggle clock
        uut->eval();            // Evaluate model

        if (tfp != NULL)
        {
            tfp->dump (main_time);
        }
 
        if (uut->done) {
            // Count only rising edges
            std::cout << "Done in " << (main_time / 2) << " clock cycles" << std::endl;
            break;
        }

        main_time++;            // Time goes by...       
    }

    uut->final();               // Done simulating

    if (tfp != NULL)
    {
        tfp->close();
        delete tfp;
    }

    delete uut;

    return 0;
}
