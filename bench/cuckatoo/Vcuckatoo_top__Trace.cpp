// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcuckatoo_top__Syms.h"


//======================

void Vcuckatoo_top::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vcuckatoo_top* t=(Vcuckatoo_top*)userthis;
    Vcuckatoo_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vcuckatoo_top::traceChgThis(Vcuckatoo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vcuckatoo_top::traceChgThis__2(Vcuckatoo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1,(vlTOPp->cuckatoo_top__DOT__next_when_ready),6);
	vcdp->chgBus(c+2,(vlTOPp->cuckatoo_top__DOT__next_when_ctrl_written),6);
	vcdp->chgQuad(c+3,(vlTOPp->cuckatoo_top__DOT__wait_counter),33);
	vcdp->chgBus(c+5,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_new),3);
	vcdp->chgBit(c+6,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_we));
	vcdp->chgBit(c+7,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_we));
	vcdp->chgBit(c+8,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_we));
	vcdp->chgBit(c+9,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_we));
	vcdp->chgBit(c+10,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_we));
	vcdp->chgBit(c+11,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_we));
	vcdp->chgQuad(c+12,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__tmp_read_data),64);
	vcdp->chgArray(c+14,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k),256);
	vcdp->chgQuad(c+22,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_new),64);
	vcdp->chgBit(c+24,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_we));
	vcdp->chgQuad(c+25,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_new),64);
	vcdp->chgBit(c+27,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_we));
	vcdp->chgQuad(c+28,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_new),64);
	vcdp->chgBit(c+30,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_we));
	vcdp->chgQuad(c+31,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_new),64);
	vcdp->chgBit(c+33,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_we));
	vcdp->chgBit(c+34,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_we));
	vcdp->chgBus(c+35,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_new),4);
	vcdp->chgBit(c+36,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_we));
	vcdp->chgBit(c+37,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_inc));
	vcdp->chgBit(c+38,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_rst));
	vcdp->chgBit(c+39,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_new));
	vcdp->chgBit(c+40,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_we));
	vcdp->chgBit(c+41,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_we));
	vcdp->chgBit(c+42,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_new));
	vcdp->chgBit(c+43,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_we));
	vcdp->chgBus(c+44,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new),3);
	vcdp->chgBit(c+45,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we));
	vcdp->chgBit(c+46,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update));
	vcdp->chgBus(c+47,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode),3);
	vcdp->chgQuad(c+48,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_0_res),64);
	vcdp->chgQuad(c+50,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_1_res),64);
	vcdp->chgQuad(c+52,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_2_res),64);
	vcdp->chgQuad(c+54,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_3_res),64);
	vcdp->chgQuad(c+56,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v0_tmp),64);
	vcdp->chgQuad(c+58,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v1_tmp),64);
	vcdp->chgQuad(c+60,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v2_tmp),64);
	vcdp->chgQuad(c+62,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v3_tmp),64);
    }
}

void Vcuckatoo_top::traceChgThis__3(Vcuckatoo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad(c+64,(vlTOPp->cuckatoo_top__DOT__nonce),64);
	vcdp->chgQuad(c+66,(vlTOPp->cuckatoo_top__DOT__ctrl),64);
	vcdp->chgBus(c+68,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg),3);
	vcdp->chgBus(c+69,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg),8);
	vcdp->chgQuad(c+70,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_reg),64);
	vcdp->chgQuad(c+72,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_reg),64);
	vcdp->chgQuad(c+74,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_reg),64);
	vcdp->chgQuad(c+76,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_reg),64);
	vcdp->chgQuad(c+78,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_reg),64);
	vcdp->chgQuad(c+80,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__word0_reg),64);
	vcdp->chgBit(c+82,((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))));
	vcdp->chgBit(c+83,((1U & ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg) 
				  >> 1U))));
	vcdp->chgBit(c+84,((1U & ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg) 
				  >> 2U))));
	vcdp->chgBus(c+85,((0xfU & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg))),4);
	vcdp->chgBus(c+86,((0xfU & ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg) 
				    >> 4U))),4);
	vcdp->chgBit(c+87,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_reg));
	vcdp->chgQuad(c+88,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_reg),64);
	vcdp->chgBit(c+90,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_reg));
	vcdp->chgQuad(c+91,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_reg),64);
	vcdp->chgQuad(c+93,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_reg),64);
	vcdp->chgQuad(c+95,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_reg),64);
	vcdp->chgQuad(c+97,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg),64);
	vcdp->chgQuad(c+99,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_reg),64);
	vcdp->chgBus(c+101,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_reg),4);
	vcdp->chgQuad(c+102,(((vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_reg 
			       ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_reg) 
			      ^ (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_reg 
				 ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg))),64);
	vcdp->chgBus(c+104,(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg),3);
	vcdp->chgBit(c+105,(vlTOPp->cuckatoo_top__DOT__nodes__DOT__oe_r));
	vcdp->chgBit(c+106,(vlTOPp->cuckatoo_top__DOT__edges__DOT__oe_r));
    }
}

void Vcuckatoo_top::traceChgThis__4(Vcuckatoo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+107,(vlTOPp->CLOCK));
	vcdp->chgBit(c+108,(vlTOPp->reset_n));
	vcdp->chgBus(c+109,(vlTOPp->state),6);
	vcdp->chgBit(c+110,(vlTOPp->siphash_reset_n));
	vcdp->chgBus(c+111,(vlTOPp->counter),2);
	vcdp->chgBus(c+112,(vlTOPp->siphash_addr),8);
	vcdp->chgBit(c+113,(vlTOPp->siphash_cs));
	vcdp->chgBit(c+114,(vlTOPp->siphash_we));
	vcdp->chgQuad(c+115,(vlTOPp->siphash_write_data),64);
	vcdp->chgQuad(c+117,(vlTOPp->siphash_read_data),64);
	vcdp->chgQuad(c+119,(vlTOPp->read_data),64);
	vcdp->chgQuad(c+121,(vlTOPp->result),64);
	vcdp->chgBit(c+123,(vlTOPp->done));
    }
}
