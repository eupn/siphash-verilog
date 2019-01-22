#include <verilated.h>          // Defines common routines
#include "Vsiphash_top.h"

#include "verilated_vcd_c.h"

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

Vsiphash_top *uut;                     // Instantiation of module
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
    uut = new Vsiphash_top;   // Create instance

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

    // Start with reset and manually toggling clock line
    uut->clk = 0;
    uut->reset_n = 0;
    uut->eval();

    uut->clk = 1;
    uut->eval();

    uut->reset_n = 1;
    uut->clk = 0;
    uut->eval();

    // Setup siphash keys
    uut->key[0] = 1;
    uut->key[1] = 0;
    uut->key[2] = 2;
    uut->key[3] = 0;
    uut->key[4] = 3;
    uut->key[5] = 0;
    uut->key[6] = 4;
    uut->key[7] = 0;

    // Set of test nonces
    uint64_t nonces[] = { 10, 111, 12 };

    // Setup nonces, one per clock cycle    
    uut->nonce = nonces[0]; 
    uut->we=1;    

    uut->clk = 1;
    uut->eval();
    
    uut->cs = 1;

    uut->clk = 0;
    uut->eval();
    tfp->dump (main_time++);

    uut->nonce = nonces[1]; 

    uut->clk = 1;
    uut->eval();
    tfp->dump (main_time++);

    uut->clk = 0;
    uut->eval();
    tfp->dump (main_time++);

    uut->nonce = nonces[2]; 

    uut->clk = 1;
    uut->eval();
    tfp->dump (main_time++);

    uut->we = 0;

    for (int i = 0; i < 10; i++) {
        uut->clk = 0;
        uut->eval();
        tfp->dump (main_time++);

        uut->clk = 1;
        uut->eval();
        tfp->dump (main_time++);

        if (uut->done) {
            std::cout << "Valid result: " << std::hex << uut->result << std::endl;
        }
    }

    // Do dummy clock cycles (not required)

    for (int i = 0; i < 10; i++) {
        uut->clk = 0;
        uut->eval();
        tfp->dump (main_time++);

        uut->clk = 1;
        uut->eval();
        tfp->dump (main_time++);
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
