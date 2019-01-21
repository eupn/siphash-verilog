// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcuckatoo_top__Syms.h"


//======================

void Vcuckatoo_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vcuckatoo_top::traceInit, &Vcuckatoo_top::traceFull, &Vcuckatoo_top::traceChg, this);
}
void Vcuckatoo_top::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vcuckatoo_top* t=(Vcuckatoo_top*)userthis;
    Vcuckatoo_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vcuckatoo_top::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vcuckatoo_top* t=(Vcuckatoo_top*)userthis;
    Vcuckatoo_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vcuckatoo_top::traceInitThis(Vcuckatoo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vcuckatoo_top::traceFullThis(Vcuckatoo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vcuckatoo_top::traceInitThis__1(Vcuckatoo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+107,"CLOCK",-1);
	vcdp->declBit(c+108,"reset_n",-1);
	vcdp->declBus(c+109,"state",-1,5,0);
	vcdp->declBit(c+110,"siphash_reset_n",-1);
	vcdp->declBus(c+111,"counter",-1,1,0);
	vcdp->declBus(c+112,"siphash_addr",-1,7,0);
	vcdp->declBit(c+113,"siphash_cs",-1);
	vcdp->declBit(c+114,"siphash_we",-1);
	vcdp->declQuad(c+115,"siphash_write_data",-1,63,0);
	vcdp->declQuad(c+117,"siphash_read_data",-1,63,0);
	vcdp->declQuad(c+119,"read_data",-1,63,0);
	vcdp->declQuad(c+121,"result",-1,63,0);
	vcdp->declBit(c+123,"done",-1);
	vcdp->declBit(c+107,"cuckatoo_top CLOCK",-1);
	vcdp->declBit(c+108,"cuckatoo_top reset_n",-1);
	vcdp->declBus(c+109,"cuckatoo_top state",-1,5,0);
	vcdp->declBit(c+110,"cuckatoo_top siphash_reset_n",-1);
	vcdp->declBus(c+111,"cuckatoo_top counter",-1,1,0);
	vcdp->declBus(c+112,"cuckatoo_top siphash_addr",-1,7,0);
	vcdp->declBit(c+113,"cuckatoo_top siphash_cs",-1);
	vcdp->declBit(c+114,"cuckatoo_top siphash_we",-1);
	vcdp->declQuad(c+115,"cuckatoo_top siphash_write_data",-1,63,0);
	vcdp->declQuad(c+117,"cuckatoo_top siphash_read_data",-1,63,0);
	vcdp->declQuad(c+119,"cuckatoo_top read_data",-1,63,0);
	vcdp->declQuad(c+121,"cuckatoo_top result",-1,63,0);
	vcdp->declBit(c+123,"cuckatoo_top done",-1);
	vcdp->declBus(c+1,"cuckatoo_top next_when_ready",-1,5,0);
	vcdp->declBus(c+2,"cuckatoo_top next_when_ctrl_written",-1,5,0);
	vcdp->declBus(c+124,"cuckatoo_top ADDR_KEY0",-1,7,0);
	vcdp->declBus(c+125,"cuckatoo_top ADDR_KEY1",-1,7,0);
	vcdp->declBus(c+126,"cuckatoo_top ADDR_KEY2",-1,7,0);
	vcdp->declBus(c+127,"cuckatoo_top ADDR_KEY3",-1,7,0);
	vcdp->declBus(c+128,"cuckatoo_top ADDR_CTRL",-1,7,0);
	vcdp->declBus(c+129,"cuckatoo_top ADDR_STATUS",-1,7,0);
	vcdp->declBus(c+130,"cuckatoo_top ADDR_NONCE",-1,7,0);
	vcdp->declBus(c+131,"cuckatoo_top ADDR_WORD0",-1,7,0);
	vcdp->declBit(c+132,"cuckatoo_top tb_error",-1);
	vcdp->declQuad(c+64,"cuckatoo_top nonce",-1,63,0);
	vcdp->declQuad(c+66,"cuckatoo_top ctrl",-1,63,0);
	vcdp->declBus(c+133,"cuckatoo_top nodes_address",-1,31,0);
	vcdp->declBus(c+133,"cuckatoo_top nodes_data",-1,31,0);
	vcdp->declBit(c+134,"cuckatoo_top nodes_cs",-1);
	vcdp->declBit(c+134,"cuckatoo_top nodes_we",-1);
	vcdp->declBit(c+134,"cuckatoo_top nodes_oe",-1);
	vcdp->declBus(c+133,"cuckatoo_top edges_address",-1,31,0);
	vcdp->declBus(c+133,"cuckatoo_top edges_data",-1,31,0);
	vcdp->declBit(c+134,"cuckatoo_top edges_cs",-1);
	vcdp->declBit(c+134,"cuckatoo_top edges_we",-1);
	vcdp->declBit(c+134,"cuckatoo_top edges_oe",-1);
	vcdp->declQuad(c+3,"cuckatoo_top wait_counter",-1,32,0);
	vcdp->declBit(c+107,"cuckatoo_top hasher clk",-1);
	vcdp->declBit(c+110,"cuckatoo_top hasher reset_n",-1);
	vcdp->declBit(c+113,"cuckatoo_top hasher cs",-1);
	vcdp->declBit(c+114,"cuckatoo_top hasher we",-1);
	vcdp->declBus(c+112,"cuckatoo_top hasher addr",-1,7,0);
	vcdp->declQuad(c+115,"cuckatoo_top hasher write_data",-1,63,0);
	vcdp->declQuad(c+117,"cuckatoo_top hasher read_data",-1,63,0);
	vcdp->declBus(c+128,"cuckatoo_top hasher ADDR_CTRL",-1,7,0);
	vcdp->declBus(c+135,"cuckatoo_top hasher CTRL_INIT_BIT",-1,31,0);
	vcdp->declBus(c+136,"cuckatoo_top hasher CTRL_COMPRESS_BIT",-1,31,0);
	vcdp->declBus(c+137,"cuckatoo_top hasher CTRL_FINALIZE_BIT",-1,31,0);
	vcdp->declBus(c+129,"cuckatoo_top hasher ADDR_STATUS",-1,7,0);
	vcdp->declBus(c+135,"cuckatoo_top hasher STATUS_READY_BIT",-1,31,0);
	vcdp->declBus(c+136,"cuckatoo_top hasher STATUS_VALID_BIT",-1,31,0);
	vcdp->declBus(c+138,"cuckatoo_top hasher ADDR_CONFIG",-1,7,0);
	vcdp->declBus(c+139,"cuckatoo_top hasher ADDR_PARAM",-1,7,0);
	vcdp->declBus(c+135,"cuckatoo_top hasher SIPHASH_START_C",-1,31,0);
	vcdp->declBus(c+140,"cuckatoo_top hasher SIPHASH_SIZE_C",-1,31,0);
	vcdp->declBus(c+141,"cuckatoo_top hasher SIPHASH_DEFAULT_C",-1,3,0);
	vcdp->declBus(c+140,"cuckatoo_top hasher SIPHASH_START_D",-1,31,0);
	vcdp->declBus(c+140,"cuckatoo_top hasher SIPHASH_SIZE_D",-1,31,0);
	vcdp->declBus(c+142,"cuckatoo_top hasher SIPHASH_DEFAULT_D",-1,3,0);
	vcdp->declBus(c+124,"cuckatoo_top hasher ADDR_KEY0",-1,7,0);
	vcdp->declBus(c+125,"cuckatoo_top hasher ADDR_KEY1",-1,7,0);
	vcdp->declBus(c+126,"cuckatoo_top hasher ADDR_KEY2",-1,7,0);
	vcdp->declBus(c+127,"cuckatoo_top hasher ADDR_KEY3",-1,7,0);
	vcdp->declBus(c+130,"cuckatoo_top hasher ADDR_nonce",-1,7,0);
	vcdp->declBus(c+131,"cuckatoo_top hasher ADDR_WORD0",-1,7,0);
	vcdp->declBus(c+68,"cuckatoo_top hasher ctrl_reg",-1,2,0);
	vcdp->declBus(c+5,"cuckatoo_top hasher ctrl_new",-1,2,0);
	vcdp->declBus(c+69,"cuckatoo_top hasher param_reg",-1,7,0);
	vcdp->declBit(c+6,"cuckatoo_top hasher param_we",-1);
	vcdp->declQuad(c+70,"cuckatoo_top hasher key0_reg",-1,63,0);
	vcdp->declBit(c+7,"cuckatoo_top hasher key0_we",-1);
	vcdp->declQuad(c+72,"cuckatoo_top hasher key1_reg",-1,63,0);
	vcdp->declBit(c+8,"cuckatoo_top hasher key1_we",-1);
	vcdp->declQuad(c+74,"cuckatoo_top hasher key2_reg",-1,63,0);
	vcdp->declBit(c+9,"cuckatoo_top hasher key2_we",-1);
	vcdp->declQuad(c+76,"cuckatoo_top hasher key3_reg",-1,63,0);
	vcdp->declBit(c+10,"cuckatoo_top hasher key3_we",-1);
	vcdp->declQuad(c+78,"cuckatoo_top hasher nonce_reg",-1,63,0);
	vcdp->declBit(c+11,"cuckatoo_top hasher nonce_we",-1);
	vcdp->declQuad(c+80,"cuckatoo_top hasher word0_reg",-1,63,0);
	vcdp->declQuad(c+12,"cuckatoo_top hasher tmp_read_data",-1,63,0);
	vcdp->declBit(c+82,"cuckatoo_top hasher core_initalize",-1);
	vcdp->declBit(c+83,"cuckatoo_top hasher core_compress",-1);
	vcdp->declBit(c+84,"cuckatoo_top hasher core_finalize",-1);
	vcdp->declBus(c+85,"cuckatoo_top hasher core_c",-1,3,0);
	vcdp->declBus(c+86,"cuckatoo_top hasher core_d",-1,3,0);
	vcdp->declArray(c+14,"cuckatoo_top hasher core_k",-1,255,0);
	vcdp->declQuad(c+78,"cuckatoo_top hasher core_nonce",-1,63,0);
	vcdp->declBit(c+87,"cuckatoo_top hasher core_ready",-1);
	vcdp->declQuad(c+88,"cuckatoo_top hasher core_siphash_word",-1,63,0);
	vcdp->declBit(c+90,"cuckatoo_top hasher core_siphash_word_valid",-1);
	vcdp->declBit(c+107,"cuckatoo_top hasher core clk",-1);
	vcdp->declBit(c+110,"cuckatoo_top hasher core reset_n",-1);
	vcdp->declBit(c+82,"cuckatoo_top hasher core initalize",-1);
	vcdp->declBit(c+83,"cuckatoo_top hasher core compress",-1);
	vcdp->declBit(c+84,"cuckatoo_top hasher core finalize",-1);
	vcdp->declBus(c+85,"cuckatoo_top hasher core compression_rounds",-1,3,0);
	vcdp->declBus(c+86,"cuckatoo_top hasher core final_rounds",-1,3,0);
	vcdp->declArray(c+14,"cuckatoo_top hasher core key",-1,255,0);
	vcdp->declQuad(c+78,"cuckatoo_top hasher core nonce",-1,63,0);
	vcdp->declBit(c+87,"cuckatoo_top hasher core ready",-1);
	vcdp->declQuad(c+88,"cuckatoo_top hasher core siphash_word",-1,63,0);
	vcdp->declBit(c+90,"cuckatoo_top hasher core siphash_word_valid",-1);
	vcdp->declBus(c+143,"cuckatoo_top hasher core DP_INIT",-1,2,0);
	vcdp->declBus(c+144,"cuckatoo_top hasher core DP_COMP_START",-1,2,0);
	vcdp->declBus(c+145,"cuckatoo_top hasher core DP_COMP_END",-1,2,0);
	vcdp->declBus(c+146,"cuckatoo_top hasher core DP_FINAL0_START",-1,2,0);
	vcdp->declBus(c+147,"cuckatoo_top hasher core DP_SIPROUND",-1,2,0);
	vcdp->declBus(c+143,"cuckatoo_top hasher core CTRL_IDLE",-1,2,0);
	vcdp->declBus(c+144,"cuckatoo_top hasher core CTRL_COMP_LOOP",-1,2,0);
	vcdp->declBus(c+145,"cuckatoo_top hasher core CTRL_COMP_END",-1,2,0);
	vcdp->declBus(c+146,"cuckatoo_top hasher core CTRL_FINAL0_LOOP",-1,2,0);
	vcdp->declBus(c+148,"cuckatoo_top hasher core CTRL_FINAL0_END",-1,2,0);
	vcdp->declQuad(c+91,"cuckatoo_top hasher core v0_reg",-1,63,0);
	vcdp->declQuad(c+22,"cuckatoo_top hasher core v0_new",-1,63,0);
	vcdp->declBit(c+24,"cuckatoo_top hasher core v0_we",-1);
	vcdp->declQuad(c+93,"cuckatoo_top hasher core v1_reg",-1,63,0);
	vcdp->declQuad(c+25,"cuckatoo_top hasher core v1_new",-1,63,0);
	vcdp->declBit(c+27,"cuckatoo_top hasher core v1_we",-1);
	vcdp->declQuad(c+95,"cuckatoo_top hasher core v2_reg",-1,63,0);
	vcdp->declQuad(c+28,"cuckatoo_top hasher core v2_new",-1,63,0);
	vcdp->declBit(c+30,"cuckatoo_top hasher core v2_we",-1);
	vcdp->declQuad(c+97,"cuckatoo_top hasher core v3_reg",-1,63,0);
	vcdp->declQuad(c+31,"cuckatoo_top hasher core v3_new",-1,63,0);
	vcdp->declBit(c+33,"cuckatoo_top hasher core v3_we",-1);
	vcdp->declQuad(c+99,"cuckatoo_top hasher core nonce_reg",-1,63,0);
	vcdp->declBit(c+34,"cuckatoo_top hasher core nonce_we",-1);
	vcdp->declBus(c+101,"cuckatoo_top hasher core loop_ctr_reg",-1,3,0);
	vcdp->declBus(c+35,"cuckatoo_top hasher core loop_ctr_new",-1,3,0);
	vcdp->declBit(c+36,"cuckatoo_top hasher core loop_ctr_we",-1);
	vcdp->declBit(c+37,"cuckatoo_top hasher core loop_ctr_inc",-1);
	vcdp->declBit(c+38,"cuckatoo_top hasher core loop_ctr_rst",-1);
	vcdp->declBit(c+87,"cuckatoo_top hasher core ready_reg",-1);
	vcdp->declBit(c+39,"cuckatoo_top hasher core ready_new",-1);
	vcdp->declBit(c+40,"cuckatoo_top hasher core ready_we",-1);
	vcdp->declQuad(c+88,"cuckatoo_top hasher core siphash_word0_reg",-1,63,0);
	vcdp->declQuad(c+102,"cuckatoo_top hasher core siphash_word_new",-1,63,0);
	vcdp->declBit(c+41,"cuckatoo_top hasher core siphash_word0_we",-1);
	vcdp->declBit(c+90,"cuckatoo_top hasher core siphash_valid_reg",-1);
	vcdp->declBit(c+42,"cuckatoo_top hasher core siphash_valid_new",-1);
	vcdp->declBit(c+43,"cuckatoo_top hasher core siphash_valid_we",-1);
	vcdp->declBus(c+104,"cuckatoo_top hasher core siphash_ctrl_reg",-1,2,0);
	vcdp->declBus(c+44,"cuckatoo_top hasher core siphash_ctrl_new",-1,2,0);
	vcdp->declBit(c+45,"cuckatoo_top hasher core siphash_ctrl_we",-1);
	vcdp->declBit(c+46,"cuckatoo_top hasher core dp_update",-1);
	vcdp->declBus(c+47,"cuckatoo_top hasher core dp_mode",-1,2,0);
	vcdp->declQuad(c+48,"cuckatoo_top hasher core datapath_update add_0_res",-1,63,0);
	vcdp->declQuad(c+50,"cuckatoo_top hasher core datapath_update add_1_res",-1,63,0);
	vcdp->declQuad(c+52,"cuckatoo_top hasher core datapath_update add_2_res",-1,63,0);
	vcdp->declQuad(c+54,"cuckatoo_top hasher core datapath_update add_3_res",-1,63,0);
	vcdp->declQuad(c+56,"cuckatoo_top hasher core datapath_update v0_tmp",-1,63,0);
	vcdp->declQuad(c+58,"cuckatoo_top hasher core datapath_update v1_tmp",-1,63,0);
	vcdp->declQuad(c+60,"cuckatoo_top hasher core datapath_update v2_tmp",-1,63,0);
	vcdp->declQuad(c+62,"cuckatoo_top hasher core datapath_update v3_tmp",-1,63,0);
	vcdp->declBus(c+149,"cuckatoo_top nodes DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+149,"cuckatoo_top nodes ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+135,"cuckatoo_top nodes RAM_DEPTH",-1,31,0);
	vcdp->declBit(c+107,"cuckatoo_top nodes clk",-1);
	vcdp->declBus(c+133,"cuckatoo_top nodes address",-1,31,0);
	vcdp->declBit(c+134,"cuckatoo_top nodes cs",-1);
	vcdp->declBit(c+134,"cuckatoo_top nodes we",-1);
	vcdp->declBit(c+134,"cuckatoo_top nodes oe",-1);
	vcdp->declBus(c+133,"cuckatoo_top nodes data",-1,31,0);
	vcdp->declBus(c+150,"cuckatoo_top nodes data_out",-1,31,0);
	{int i; for (i=0; i<2; i++) {
		vcdp->declBus(c+151+i*1,"cuckatoo_top nodes mem",(i+-1),31,0);}}
	vcdp->declBit(c+105,"cuckatoo_top nodes oe_r",-1);
	vcdp->declBus(c+149,"cuckatoo_top edges DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+149,"cuckatoo_top edges ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+135,"cuckatoo_top edges RAM_DEPTH",-1,31,0);
	vcdp->declBit(c+107,"cuckatoo_top edges clk",-1);
	vcdp->declBus(c+133,"cuckatoo_top edges address",-1,31,0);
	vcdp->declBit(c+134,"cuckatoo_top edges cs",-1);
	vcdp->declBit(c+134,"cuckatoo_top edges we",-1);
	vcdp->declBit(c+134,"cuckatoo_top edges oe",-1);
	vcdp->declBus(c+133,"cuckatoo_top edges data",-1,31,0);
	vcdp->declBus(c+153,"cuckatoo_top edges data_out",-1,31,0);
	{int i; for (i=0; i<2; i++) {
		vcdp->declBus(c+154+i*1,"cuckatoo_top edges mem",(i+-1),31,0);}}
	vcdp->declBit(c+106,"cuckatoo_top edges oe_r",-1);
    }
}

void Vcuckatoo_top::traceFullThis__1(Vcuckatoo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus(c+1,(vlTOPp->cuckatoo_top__DOT__next_when_ready),6);
	vcdp->fullBus(c+2,(vlTOPp->cuckatoo_top__DOT__next_when_ctrl_written),6);
	vcdp->fullQuad(c+3,(vlTOPp->cuckatoo_top__DOT__wait_counter),33);
	vcdp->fullBus(c+5,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_new),3);
	vcdp->fullBit(c+6,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_we));
	vcdp->fullBit(c+7,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_we));
	vcdp->fullBit(c+8,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_we));
	vcdp->fullBit(c+9,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_we));
	vcdp->fullBit(c+10,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_we));
	vcdp->fullBit(c+11,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_we));
	vcdp->fullQuad(c+12,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__tmp_read_data),64);
	vcdp->fullArray(c+14,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k),256);
	vcdp->fullQuad(c+22,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_new),64);
	vcdp->fullBit(c+24,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_we));
	vcdp->fullQuad(c+25,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_new),64);
	vcdp->fullBit(c+27,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_we));
	vcdp->fullQuad(c+28,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_new),64);
	vcdp->fullBit(c+30,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_we));
	vcdp->fullQuad(c+31,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_new),64);
	vcdp->fullBit(c+33,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_we));
	vcdp->fullBit(c+34,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_we));
	vcdp->fullBus(c+35,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_new),4);
	vcdp->fullBit(c+36,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_we));
	vcdp->fullBit(c+37,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_inc));
	vcdp->fullBit(c+38,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_rst));
	vcdp->fullBit(c+39,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_new));
	vcdp->fullBit(c+40,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_we));
	vcdp->fullBit(c+41,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_we));
	vcdp->fullBit(c+42,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_new));
	vcdp->fullBit(c+43,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_we));
	vcdp->fullBus(c+44,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new),3);
	vcdp->fullBit(c+45,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we));
	vcdp->fullBit(c+46,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update));
	vcdp->fullBus(c+47,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode),3);
	vcdp->fullQuad(c+48,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_0_res),64);
	vcdp->fullQuad(c+50,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_1_res),64);
	vcdp->fullQuad(c+52,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_2_res),64);
	vcdp->fullQuad(c+54,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_3_res),64);
	vcdp->fullQuad(c+56,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v0_tmp),64);
	vcdp->fullQuad(c+58,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v1_tmp),64);
	vcdp->fullQuad(c+60,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v2_tmp),64);
	vcdp->fullQuad(c+62,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v3_tmp),64);
	vcdp->fullQuad(c+64,(vlTOPp->cuckatoo_top__DOT__nonce),64);
	vcdp->fullQuad(c+66,(vlTOPp->cuckatoo_top__DOT__ctrl),64);
	vcdp->fullBus(c+68,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg),3);
	vcdp->fullBus(c+69,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg),8);
	vcdp->fullQuad(c+70,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_reg),64);
	vcdp->fullQuad(c+72,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_reg),64);
	vcdp->fullQuad(c+74,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_reg),64);
	vcdp->fullQuad(c+76,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_reg),64);
	vcdp->fullQuad(c+78,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_reg),64);
	vcdp->fullQuad(c+80,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__word0_reg),64);
	vcdp->fullBit(c+82,((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))));
	vcdp->fullBit(c+83,((1U & ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg) 
				   >> 1U))));
	vcdp->fullBit(c+84,((1U & ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg) 
				   >> 2U))));
	vcdp->fullBus(c+85,((0xfU & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg))),4);
	vcdp->fullBus(c+86,((0xfU & ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg) 
				     >> 4U))),4);
	vcdp->fullBit(c+87,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_reg));
	vcdp->fullQuad(c+88,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_reg),64);
	vcdp->fullBit(c+90,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_reg));
	vcdp->fullQuad(c+91,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_reg),64);
	vcdp->fullQuad(c+93,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_reg),64);
	vcdp->fullQuad(c+95,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_reg),64);
	vcdp->fullQuad(c+97,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg),64);
	vcdp->fullQuad(c+99,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_reg),64);
	vcdp->fullBus(c+101,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_reg),4);
	vcdp->fullQuad(c+102,(((vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_reg 
				^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_reg) 
			       ^ (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_reg 
				  ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg))),64);
	vcdp->fullBus(c+104,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg),3);
	vcdp->fullBit(c+105,(vlTOPp->cuckatoo_top__DOT__nodes__DOT__oe_r));
	vcdp->fullBit(c+106,(vlTOPp->cuckatoo_top__DOT__edges__DOT__oe_r));
	vcdp->fullBit(c+107,(vlTOPp->CLOCK));
	vcdp->fullBit(c+108,(vlTOPp->reset_n));
	vcdp->fullBus(c+109,(vlTOPp->state),6);
	vcdp->fullBit(c+110,(vlTOPp->siphash_reset_n));
	vcdp->fullBus(c+111,(vlTOPp->counter),2);
	vcdp->fullBus(c+112,(vlTOPp->siphash_addr),8);
	vcdp->fullBit(c+113,(vlTOPp->siphash_cs));
	vcdp->fullBit(c+114,(vlTOPp->siphash_we));
	vcdp->fullQuad(c+115,(vlTOPp->siphash_write_data),64);
	vcdp->fullQuad(c+117,(vlTOPp->siphash_read_data),64);
	vcdp->fullQuad(c+119,(vlTOPp->read_data),64);
	vcdp->fullQuad(c+121,(vlTOPp->result),64);
	vcdp->fullBit(c+123,(vlTOPp->done));
	vcdp->fullBus(c+124,(0x10U),8);
	vcdp->fullBus(c+125,(0x11U),8);
	vcdp->fullBus(c+126,(0x12U),8);
	vcdp->fullBus(c+127,(0x13U),8);
	vcdp->fullBus(c+128,(8U),8);
	vcdp->fullBus(c+129,(9U),8);
	vcdp->fullBus(c+130,(0x18U),8);
	vcdp->fullBus(c+131,(0x20U),8);
	vcdp->fullBit(c+132,(vlTOPp->cuckatoo_top__DOT__tb_error));
	vcdp->fullBus(c+133,(0U),32);
	vcdp->fullBit(c+134,(0U));
	vcdp->fullBus(c+135,(0U),32);
	vcdp->fullBus(c+136,(1U),32);
	vcdp->fullBus(c+137,(2U),32);
	vcdp->fullBus(c+138,(0xaU),8);
	vcdp->fullBus(c+139,(0xbU),8);
	vcdp->fullBus(c+140,(4U),32);
	vcdp->fullBus(c+141,(2U),4);
	vcdp->fullBus(c+142,(4U),4);
	vcdp->fullBus(c+143,(0U),3);
	vcdp->fullBus(c+144,(1U),3);
	vcdp->fullBus(c+145,(2U),3);
	vcdp->fullBus(c+146,(3U),3);
	vcdp->fullBus(c+147,(5U),3);
	vcdp->fullBus(c+148,(4U),3);
	vcdp->fullBus(c+149,(0x20U),32);
	vcdp->fullBus(c+150,(vlTOPp->cuckatoo_top__DOT__nodes__DOT__data_out),32);
	vcdp->fullBus(c+151,(vlTOPp->cuckatoo_top__DOT__nodes__DOT__mem[0]),32);
	vcdp->fullBus(c+152,(vlTOPp->cuckatoo_top__DOT__nodes__DOT__mem[1]),32);
	vcdp->fullBus(c+153,(vlTOPp->cuckatoo_top__DOT__edges__DOT__data_out),32);
	vcdp->fullBus(c+154,(vlTOPp->cuckatoo_top__DOT__edges__DOT__mem[0]),32);
	vcdp->fullBus(c+155,(vlTOPp->cuckatoo_top__DOT__edges__DOT__mem[1]),32);
    }
}
