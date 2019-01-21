// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcuckatoo_top.h for the primary calling header

#include "Vcuckatoo_top.h"
#include "Vcuckatoo_top__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcuckatoo_top) {
    Vcuckatoo_top__Syms* __restrict vlSymsp = __VlSymsp = new Vcuckatoo_top__Syms(this, name());
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vcuckatoo_top::__Vconfigure(Vcuckatoo_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcuckatoo_top::~Vcuckatoo_top() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vcuckatoo_top::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcuckatoo_top::eval\n"); );
    Vcuckatoo_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void Vcuckatoo_top::_eval_initial_loop(Vcuckatoo_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void Vcuckatoo_top::_initial__TOP__1(Vcuckatoo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcuckatoo_top::_initial__TOP__1\n"); );
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../rtl/cuckatoo_top.v:87
    vlTOPp->cuckatoo_top__DOT__wait_counter = VL_ULL(0);
    // INITIAL at ../rtl/cuckatoo_top.v:32
    vlTOPp->siphash_cs = 0U;
    // INITIAL at ../rtl/cuckatoo_top.v:33
    vlTOPp->siphash_we = 0U;
    // INITIAL at ../rtl/cuckatoo_top.v:18
    vlTOPp->state = 0U;
    // INITIAL at ../rtl/cuckatoo_top.v:19
    vlTOPp->cuckatoo_top__DOT__next_when_ready = 0xbU;
    // INITIAL at ../rtl/cuckatoo_top.v:20
    vlTOPp->cuckatoo_top__DOT__next_when_ctrl_written = 0xbU;
    // INITIAL at ../rtl/cuckatoo_top.v:86
    vlTOPp->counter = 0U;
    // INITIAL at ../rtl/cuckatoo_top.v:31
    vlTOPp->siphash_reset_n = 1U;
}

VL_INLINE_OPT void Vcuckatoo_top::_sequent__TOP__2(Vcuckatoo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcuckatoo_top::_sequent__TOP__2\n"); );
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtask_cuckatoo_top__DOT__siphash_write_word__1__address,7,0);
    VL_SIG8(__Vtask_cuckatoo_top__DOT__siphash_write_word__1__next_state,5,0);
    VL_SIG8(__Vtask_cuckatoo_top__DOT__siphash_write_word__2__address,7,0);
    VL_SIG8(__Vtask_cuckatoo_top__DOT__siphash_write_word__2__next_state,5,0);
    VL_SIG8(__Vtask_cuckatoo_top__DOT__siphash_write_word__3__address,7,0);
    VL_SIG8(__Vtask_cuckatoo_top__DOT__siphash_write_word__3__next_state,5,0);
    VL_SIG8(__Vtask_cuckatoo_top__DOT__siphash_write_word__4__address,7,0);
    VL_SIG8(__Vtask_cuckatoo_top__DOT__siphash_write_word__4__next_state,5,0);
    VL_SIG8(__Vtask_cuckatoo_top__DOT__siphash_write_word__5__address,7,0);
    VL_SIG8(__Vtask_cuckatoo_top__DOT__siphash_write_word__5__next_state,5,0);
    VL_SIG8(__Vtask_cuckatoo_top__DOT__wait_ready__6__next_when_ready,5,0);
    VL_SIG8(__Vtask_cuckatoo_top__DOT__siphash_read_word__7__address,7,0);
    VL_SIG8(__Vtask_cuckatoo_top__DOT__siphash_read_word__7__next_state,5,0);
    VL_SIG8(__Vtask_cuckatoo_top__DOT__siphash_write_word__8__address,7,0);
    VL_SIG8(__Vtask_cuckatoo_top__DOT__siphash_write_word__8__next_state,5,0);
    VL_SIG8(__Vtask_cuckatoo_top__DOT__siphash_read_word__9__address,7,0);
    VL_SIG8(__Vtask_cuckatoo_top__DOT__siphash_read_word__9__next_state,5,0);
    VL_SIG8(__Vdly__counter,1,0);
    VL_SIG8(__Vdly__siphash_reset_n,0,0);
    VL_SIG8(__Vdly__state,5,0);
    VL_SIG8(__Vdly__cuckatoo_top__DOT__next_when_ctrl_written,5,0);
    VL_SIG8(__Vdly__cuckatoo_top__DOT__next_when_ready,5,0);
    VL_SIG64(__Vtask_cuckatoo_top__DOT__siphash_write_word__1__word,63,0);
    VL_SIG64(__Vtask_cuckatoo_top__DOT__siphash_write_word__2__word,63,0);
    VL_SIG64(__Vtask_cuckatoo_top__DOT__siphash_write_word__3__word,63,0);
    VL_SIG64(__Vtask_cuckatoo_top__DOT__siphash_write_word__4__word,63,0);
    VL_SIG64(__Vtask_cuckatoo_top__DOT__siphash_write_word__5__word,63,0);
    VL_SIG64(__Vtask_cuckatoo_top__DOT__siphash_write_word__8__word,63,0);
    VL_SIG64(__Vdly__siphash_write_data,63,0);
    VL_SIG64(__Vdly__cuckatoo_top__DOT__nonce,63,0);
    VL_SIG64(__Vdly__cuckatoo_top__DOT__ctrl,63,0);
    VL_SIG64(__Vdly__read_data,63,0);
    // Body
    __Vdly__read_data = vlTOPp->read_data;
    __Vdly__cuckatoo_top__DOT__ctrl = vlTOPp->cuckatoo_top__DOT__ctrl;
    __Vdly__cuckatoo_top__DOT__nonce = vlTOPp->cuckatoo_top__DOT__nonce;
    __Vdly__cuckatoo_top__DOT__next_when_ready = vlTOPp->cuckatoo_top__DOT__next_when_ready;
    __Vdly__cuckatoo_top__DOT__next_when_ctrl_written 
	= vlTOPp->cuckatoo_top__DOT__next_when_ctrl_written;
    __Vdly__state = vlTOPp->state;
    __Vdly__siphash_reset_n = vlTOPp->siphash_reset_n;
    __Vdly__counter = vlTOPp->counter;
    __Vdly__siphash_write_data = vlTOPp->siphash_write_data;
    // ALWAYS at ../rtl/ram.v:38
    // ALWAYS at ../rtl/ram.v:47
    // ALWAYS at ../rtl/ram.v:38
    // ALWAYS at ../rtl/ram.v:47
    // ALWAYS at ../rtl/ram.v:47
    vlTOPp->cuckatoo_top__DOT__nodes__DOT__oe_r = 0U;
    // ALWAYS at ../rtl/ram.v:47
    vlTOPp->cuckatoo_top__DOT__edges__DOT__oe_r = 0U;
    // ALWAYS at ../rtl/siphash_core.v:146
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_we) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_reg 
		= vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_new;
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_reg = 0U;
    }
    // ALWAYS at ../rtl/siphash.v:154
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_we) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg 
		= (0xffU & (IData)(vlTOPp->siphash_write_data));
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg = 0x42U;
    }
    // ALWAYS at ../rtl/siphash_core.v:146
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_we) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_reg 
		= vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_reg;
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_reg = VL_ULL(0);
    }
    // ALWAYS at ../rtl/siphash.v:154
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg 
	= ((IData)(vlTOPp->siphash_reset_n) ? (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_new)
	    : 0U);
    // ALWAYS at ../rtl/siphash.v:154
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_reg) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__word0_reg 
		= vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_reg;
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__word0_reg = VL_ULL(0);
    }
    // ALWAYS at ../rtl/cuckatoo_top.v:179
    if (vlTOPp->reset_n) {
	if (((((((((0U == (IData)(vlTOPp->state)) | 
		   (1U == (IData)(vlTOPp->state))) 
		  | (2U == (IData)(vlTOPp->state))) 
		 | (3U == (IData)(vlTOPp->state))) 
		| (4U == (IData)(vlTOPp->state))) | 
	       (5U == (IData)(vlTOPp->state))) | (6U 
						  == (IData)(vlTOPp->state))) 
	     | (7U == (IData)(vlTOPp->state)))) {
	    if ((0U == (IData)(vlTOPp->state))) {
		if ((0U == (IData)(vlTOPp->counter))) {
		    __Vdly__counter = (3U & ((IData)(1U) 
					     + (IData)(vlTOPp->counter)));
		    __Vdly__siphash_reset_n = 0U;
		} else {
		    if ((1U == (IData)(vlTOPp->counter))) {
			__Vdly__counter = 0U;
			__Vdly__siphash_reset_n = 1U;
			__Vdly__state = 1U;
		    }
		}
	    } else {
		if ((1U == (IData)(vlTOPp->state))) {
		    __Vtask_cuckatoo_top__DOT__siphash_write_word__1__next_state = 2U;
		    __Vtask_cuckatoo_top__DOT__siphash_write_word__1__word = VL_ULL(1);
		    __Vtask_cuckatoo_top__DOT__siphash_write_word__1__address = 0x10U;
		    if ((0U == (IData)(vlTOPp->counter))) {
			__Vdly__counter = (3U & ((IData)(1U) 
						 + (IData)(vlTOPp->counter)));
			vlTOPp->siphash_addr = __Vtask_cuckatoo_top__DOT__siphash_write_word__1__address;
			__Vdly__siphash_write_data 
			    = __Vtask_cuckatoo_top__DOT__siphash_write_word__1__word;
			vlTOPp->siphash_cs = 1U;
			vlTOPp->siphash_we = 1U;
		    } else {
			if ((1U == (IData)(vlTOPp->counter))) {
			    __Vdly__counter = 0U;
			    vlTOPp->siphash_cs = 0U;
			    vlTOPp->siphash_we = 0U;
			    __Vdly__state = __Vtask_cuckatoo_top__DOT__siphash_write_word__1__next_state;
			}
		    }
		} else {
		    if ((2U == (IData)(vlTOPp->state))) {
			__Vtask_cuckatoo_top__DOT__siphash_write_word__2__next_state = 3U;
			__Vtask_cuckatoo_top__DOT__siphash_write_word__2__word = VL_ULL(2);
			__Vtask_cuckatoo_top__DOT__siphash_write_word__2__address = 0x11U;
			if ((0U == (IData)(vlTOPp->counter))) {
			    __Vdly__counter = (3U & 
					       ((IData)(1U) 
						+ (IData)(vlTOPp->counter)));
			    vlTOPp->siphash_addr = __Vtask_cuckatoo_top__DOT__siphash_write_word__2__address;
			    __Vdly__siphash_write_data 
				= __Vtask_cuckatoo_top__DOT__siphash_write_word__2__word;
			    vlTOPp->siphash_cs = 1U;
			    vlTOPp->siphash_we = 1U;
			} else {
			    if ((1U == (IData)(vlTOPp->counter))) {
				__Vdly__counter = 0U;
				vlTOPp->siphash_cs = 0U;
				vlTOPp->siphash_we = 0U;
				__Vdly__state = __Vtask_cuckatoo_top__DOT__siphash_write_word__2__next_state;
			    }
			}
		    } else {
			if ((3U == (IData)(vlTOPp->state))) {
			    __Vtask_cuckatoo_top__DOT__siphash_write_word__3__next_state = 4U;
			    __Vtask_cuckatoo_top__DOT__siphash_write_word__3__word = VL_ULL(3);
			    __Vtask_cuckatoo_top__DOT__siphash_write_word__3__address = 0x12U;
			    if ((0U == (IData)(vlTOPp->counter))) {
				__Vdly__counter = (3U 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->counter)));
				vlTOPp->siphash_addr 
				    = __Vtask_cuckatoo_top__DOT__siphash_write_word__3__address;
				__Vdly__siphash_write_data 
				    = __Vtask_cuckatoo_top__DOT__siphash_write_word__3__word;
				vlTOPp->siphash_cs = 1U;
				vlTOPp->siphash_we = 1U;
			    } else {
				if ((1U == (IData)(vlTOPp->counter))) {
				    __Vdly__counter = 0U;
				    vlTOPp->siphash_cs = 0U;
				    vlTOPp->siphash_we = 0U;
				    __Vdly__state = __Vtask_cuckatoo_top__DOT__siphash_write_word__3__next_state;
				}
			    }
			} else {
			    if ((4U == (IData)(vlTOPp->state))) {
				__Vtask_cuckatoo_top__DOT__siphash_write_word__4__next_state = 5U;
				__Vtask_cuckatoo_top__DOT__siphash_write_word__4__word = VL_ULL(4);
				__Vtask_cuckatoo_top__DOT__siphash_write_word__4__address = 0x13U;
				__Vdly__cuckatoo_top__DOT__next_when_ctrl_written = 6U;
				__Vdly__cuckatoo_top__DOT__next_when_ready = 7U;
				__Vdly__cuckatoo_top__DOT__nonce = VL_ULL(0x6f);
				__Vdly__cuckatoo_top__DOT__ctrl = VL_ULL(1);
				if ((0U == (IData)(vlTOPp->counter))) {
				    __Vdly__counter 
					= (3U & ((IData)(1U) 
						 + (IData)(vlTOPp->counter)));
				    vlTOPp->siphash_addr 
					= __Vtask_cuckatoo_top__DOT__siphash_write_word__4__address;
				    __Vdly__siphash_write_data 
					= __Vtask_cuckatoo_top__DOT__siphash_write_word__4__word;
				    vlTOPp->siphash_cs = 1U;
				    vlTOPp->siphash_we = 1U;
				} else {
				    if ((1U == (IData)(vlTOPp->counter))) {
					__Vdly__counter = 0U;
					vlTOPp->siphash_cs = 0U;
					vlTOPp->siphash_we = 0U;
					__Vdly__state 
					    = __Vtask_cuckatoo_top__DOT__siphash_write_word__4__next_state;
				    }
				}
			    } else {
				if ((5U == (IData)(vlTOPp->state))) {
				    __Vtask_cuckatoo_top__DOT__siphash_write_word__5__next_state 
					= vlTOPp->cuckatoo_top__DOT__next_when_ctrl_written;
				    __Vtask_cuckatoo_top__DOT__siphash_write_word__5__word 
					= vlTOPp->cuckatoo_top__DOT__ctrl;
				    __Vtask_cuckatoo_top__DOT__siphash_write_word__5__address = 8U;
				    if ((0U == (IData)(vlTOPp->counter))) {
					__Vdly__counter 
					    = (3U & 
					       ((IData)(1U) 
						+ (IData)(vlTOPp->counter)));
					vlTOPp->siphash_addr 
					    = __Vtask_cuckatoo_top__DOT__siphash_write_word__5__address;
					__Vdly__siphash_write_data 
					    = __Vtask_cuckatoo_top__DOT__siphash_write_word__5__word;
					vlTOPp->siphash_cs = 1U;
					vlTOPp->siphash_we = 1U;
				    } else {
					if ((1U == (IData)(vlTOPp->counter))) {
					    __Vdly__counter = 0U;
					    vlTOPp->siphash_cs = 0U;
					    vlTOPp->siphash_we = 0U;
					    __Vdly__state 
						= __Vtask_cuckatoo_top__DOT__siphash_write_word__5__next_state;
					}
				    }
				} else {
				    if ((6U == (IData)(vlTOPp->state))) {
					__Vtask_cuckatoo_top__DOT__wait_ready__6__next_when_ready 
					    = vlTOPp->cuckatoo_top__DOT__next_when_ready;
					__Vtask_cuckatoo_top__DOT__siphash_read_word__7__next_state = 6U;
					__Vtask_cuckatoo_top__DOT__siphash_read_word__7__address = 9U;
					if ((0U == (IData)(vlTOPp->counter))) {
					    __Vdly__counter 
						= (3U 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->counter)));
					    vlTOPp->siphash_addr 
						= __Vtask_cuckatoo_top__DOT__siphash_read_word__7__address;
					    vlTOPp->siphash_cs = 1U;
					} else {
					    if ((1U 
						 == (IData)(vlTOPp->counter))) {
						__Vdly__counter = 0U;
						__Vdly__read_data 
						    = vlTOPp->siphash_read_data;
						vlTOPp->siphash_cs = 0U;
						__Vdly__state 
						    = __Vtask_cuckatoo_top__DOT__siphash_read_word__7__next_state;
					    }
					}
					if ((0U != 
					     (VL_ULL(1) 
					      & vlTOPp->read_data))) {
					    __Vdly__counter = 0U;
					    __Vdly__state 
						= __Vtask_cuckatoo_top__DOT__wait_ready__6__next_when_ready;
					}
				    } else {
					__Vtask_cuckatoo_top__DOT__siphash_write_word__8__next_state = 8U;
					__Vtask_cuckatoo_top__DOT__siphash_write_word__8__word 
					    = vlTOPp->cuckatoo_top__DOT__nonce;
					__Vtask_cuckatoo_top__DOT__siphash_write_word__8__address = 0x18U;
					if ((0U == (IData)(vlTOPp->counter))) {
					    __Vdly__counter 
						= (3U 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->counter)));
					    vlTOPp->siphash_addr 
						= __Vtask_cuckatoo_top__DOT__siphash_write_word__8__address;
					    __Vdly__siphash_write_data 
						= __Vtask_cuckatoo_top__DOT__siphash_write_word__8__word;
					    vlTOPp->siphash_cs = 1U;
					    vlTOPp->siphash_we = 1U;
					} else {
					    if ((1U 
						 == (IData)(vlTOPp->counter))) {
						__Vdly__counter = 0U;
						vlTOPp->siphash_cs = 0U;
						vlTOPp->siphash_we = 0U;
						__Vdly__state 
						    = __Vtask_cuckatoo_top__DOT__siphash_write_word__8__next_state;
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((8U == (IData)(vlTOPp->state))) {
		__Vdly__cuckatoo_top__DOT__ctrl = VL_ULL(2);
		__Vdly__state = 5U;
		__Vdly__cuckatoo_top__DOT__next_when_ctrl_written = 6U;
		__Vdly__cuckatoo_top__DOT__next_when_ready = 9U;
	    } else {
		if ((9U == (IData)(vlTOPp->state))) {
		    __Vdly__cuckatoo_top__DOT__ctrl = VL_ULL(4);
		    __Vdly__state = 5U;
		    __Vdly__read_data = VL_ULL(0);
		    __Vdly__cuckatoo_top__DOT__next_when_ctrl_written = 6U;
		    __Vdly__cuckatoo_top__DOT__next_when_ready = 0xaU;
		} else {
		    if ((0xaU == (IData)(vlTOPp->state))) {
			__Vtask_cuckatoo_top__DOT__siphash_read_word__9__next_state = 0xbU;
			__Vtask_cuckatoo_top__DOT__siphash_read_word__9__address = 0x20U;
			if ((0U == (IData)(vlTOPp->counter))) {
			    __Vdly__counter = (3U & 
					       ((IData)(1U) 
						+ (IData)(vlTOPp->counter)));
			    vlTOPp->siphash_addr = __Vtask_cuckatoo_top__DOT__siphash_read_word__9__address;
			    vlTOPp->siphash_cs = 1U;
			} else {
			    if ((1U == (IData)(vlTOPp->counter))) {
				__Vdly__counter = 0U;
				__Vdly__read_data = vlTOPp->siphash_read_data;
				vlTOPp->siphash_cs = 0U;
				__Vdly__state = __Vtask_cuckatoo_top__DOT__siphash_read_word__9__next_state;
			    }
			}
		    } else {
			if (VL_UNLIKELY((0xbU == (IData)(vlTOPp->state)))) {
			    VL_WRITEF("Internal top state:\n");
			    vlTOPp->result = vlTOPp->read_data;
			    VL_WRITEF("key0_reg = 0x%08x, key1_reg = 0x%08x\n",
				      64,vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_reg,
				      64,vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_reg);
			    vlTOPp->done = 1U;
			    VL_WRITEF("key2_reg = 0x%08x, key3_reg = 0x%08x\n",
				      64,vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_reg,
				      64,vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_reg);
			    VL_WRITEF("nonce_reg  = 0x%08x\n",
				      64,vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_reg);
			    VL_WRITEF("\nInternal core state:\n");
			    VL_WRITEF("key    = 0x%016x\n",
				      256,vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k);
			    VL_WRITEF("nonce     = 0x%016x\n",
				      64,vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_reg);
			    VL_WRITEF("v0_reg = 0x%016x, v1_reg = 0x%016x\n",
				      64,vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_reg,
				      64,vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_reg);
			    VL_WRITEF("v2_reg = 0x%016x, v3_reg = 0x%016x\n",
				      64,vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_reg,
				      64,vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg);
			    VL_WRITEF("sword  = 0x%016x\n",
				      64,vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_reg);
			    VL_WRITEF("state  = 0x%02x, ready  = 0x%1x, valid = 0x%1x\n",
				      3,vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg,
				      1,(IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_reg),
				      1,vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_reg);
			    VL_WRITEF("\n");
			}
		    }
		}
	    }
	}
    } else {
	__Vdly__counter = 0U;
	vlTOPp->done = 0U;
	__Vdly__state = 0U;
	vlTOPp->cuckatoo_top__DOT__wait_counter = VL_ULL(0);
	__Vdly__read_data = VL_ULL(0);
	__Vdly__siphash_write_data = VL_ULL(0);
	__Vdly__cuckatoo_top__DOT__nonce = VL_ULL(0);
	__Vdly__cuckatoo_top__DOT__ctrl = VL_ULL(0);
	vlTOPp->result = VL_ULL(0);
	__Vdly__siphash_reset_n = 0U;
    }
    vlTOPp->cuckatoo_top__DOT__nonce = __Vdly__cuckatoo_top__DOT__nonce;
    vlTOPp->cuckatoo_top__DOT__ctrl = __Vdly__cuckatoo_top__DOT__ctrl;
    vlTOPp->read_data = __Vdly__read_data;
    vlTOPp->state = __Vdly__state;
    vlTOPp->counter = __Vdly__counter;
    vlTOPp->cuckatoo_top__DOT__next_when_ctrl_written 
	= __Vdly__cuckatoo_top__DOT__next_when_ctrl_written;
    vlTOPp->cuckatoo_top__DOT__next_when_ready = __Vdly__cuckatoo_top__DOT__next_when_ready;
    // ALWAYS at ../rtl/siphash.v:202
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_we = 0U;
    if (vlTOPp->siphash_cs) {
	if (vlTOPp->siphash_we) {
	    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			  >> 7U)))) {
		if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			      >> 6U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				  >> 5U)))) {
			if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				      >> 4U)))) {
			    if ((8U & (IData)(vlTOPp->siphash_addr))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((2U & (IData)(vlTOPp->siphash_addr))) {
					if ((1U & (IData)(vlTOPp->siphash_addr))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_we = 1U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:146
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_we) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_reg 
		= vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_new;
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_reg = 1U;
    }
    // ALWAYS at ../rtl/siphash_core.v:146
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_we) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_reg 
		= vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_new;
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_reg = 0U;
    }
    // ALWAYS at ../rtl/siphash.v:154
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_we) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_reg 
		= vlTOPp->siphash_write_data;
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_reg = VL_ULL(0);
    }
    // ALWAYS at ../rtl/siphash.v:154
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_we) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_reg 
		= vlTOPp->siphash_write_data;
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_reg = VL_ULL(0);
    }
    // ALWAYS at ../rtl/siphash.v:154
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_we) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_reg 
		= vlTOPp->siphash_write_data;
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_reg = VL_ULL(0);
    }
    // ALWAYS at ../rtl/siphash.v:154
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_we) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_reg 
		= vlTOPp->siphash_write_data;
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_reg = VL_ULL(0);
    }
    // ALWAYS at ../rtl/siphash.v:154
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_we) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_reg 
		= vlTOPp->siphash_write_data;
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_reg = VL_ULL(0);
    }
    // ALWAYS at ../rtl/siphash_core.v:146
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg 
		= vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new;
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg = 0U;
    }
    // ALWAYS at ../rtl/siphash_core.v:146
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_we) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_reg 
		= ((vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_reg 
		    ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_reg) 
		   ^ (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_reg 
		      ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg));
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_reg = VL_ULL(0);
    }
    // ALWAYS at ../rtl/siphash.v:202
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_we = 0U;
    if (vlTOPp->siphash_cs) {
	if (vlTOPp->siphash_we) {
	    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			  >> 7U)))) {
		if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			      >> 6U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				  >> 5U)))) {
			if ((0x10U & (IData)(vlTOPp->siphash_addr))) {
			    if ((8U & (IData)(vlTOPp->siphash_addr))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
						  >> 1U)))) {
					if ((1U & (~ (IData)(vlTOPp->siphash_addr)))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_we = 1U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash.v:202
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_we = 0U;
    if (vlTOPp->siphash_cs) {
	if (vlTOPp->siphash_we) {
	    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			  >> 7U)))) {
		if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			      >> 6U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				  >> 5U)))) {
			if ((0x10U & (IData)(vlTOPp->siphash_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					  >> 3U)))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
						  >> 1U)))) {
					if ((1U & (~ (IData)(vlTOPp->siphash_addr)))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_we = 1U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash.v:202
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_we = 0U;
    if (vlTOPp->siphash_cs) {
	if (vlTOPp->siphash_we) {
	    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			  >> 7U)))) {
		if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			      >> 6U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				  >> 5U)))) {
			if ((0x10U & (IData)(vlTOPp->siphash_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					  >> 3U)))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
						  >> 1U)))) {
					if ((1U & (IData)(vlTOPp->siphash_addr))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_we = 1U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash.v:202
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_we = 0U;
    if (vlTOPp->siphash_cs) {
	if (vlTOPp->siphash_we) {
	    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			  >> 7U)))) {
		if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			      >> 6U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				  >> 5U)))) {
			if ((0x10U & (IData)(vlTOPp->siphash_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					  >> 3U)))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((2U & (IData)(vlTOPp->siphash_addr))) {
					if ((1U & (~ (IData)(vlTOPp->siphash_addr)))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_we = 1U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash.v:202
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_we = 0U;
    if (vlTOPp->siphash_cs) {
	if (vlTOPp->siphash_we) {
	    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			  >> 7U)))) {
		if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			      >> 6U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				  >> 5U)))) {
			if ((0x10U & (IData)(vlTOPp->siphash_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					  >> 3U)))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((2U & (IData)(vlTOPp->siphash_addr))) {
					if ((1U & (IData)(vlTOPp->siphash_addr))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_we = 1U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    vlTOPp->siphash_write_data = __Vdly__siphash_write_data;
    // ALWAYS at ../rtl/siphash.v:202
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_new = 0U;
    if (vlTOPp->siphash_cs) {
	if (vlTOPp->siphash_we) {
	    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			  >> 7U)))) {
		if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			      >> 6U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				  >> 5U)))) {
			if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				      >> 4U)))) {
			    if ((8U & (IData)(vlTOPp->siphash_addr))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
						  >> 1U)))) {
					if ((1U & (~ (IData)(vlTOPp->siphash_addr)))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_new 
						= (7U 
						   & (IData)(vlTOPp->siphash_write_data));
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash.v:202
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__tmp_read_data = VL_ULL(0);
    if (vlTOPp->siphash_cs) {
	if ((1U & (~ (IData)(vlTOPp->siphash_we)))) {
	    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			  >> 7U)))) {
		if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			      >> 6U)))) {
		    if ((0x20U & (IData)(vlTOPp->siphash_addr))) {
			if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				      >> 4U)))) {
			    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					  >> 3U)))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
						  >> 1U)))) {
					if ((1U & (~ (IData)(vlTOPp->siphash_addr)))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__tmp_read_data 
						= vlTOPp->cuckatoo_top__DOT__hasher__DOT__word0_reg;
					}
				    }
				}
			    }
			}
		    } else {
			if ((0x10U & (IData)(vlTOPp->siphash_addr))) {
			    if ((8U & (IData)(vlTOPp->siphash_addr))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
						  >> 1U)))) {
					if ((1U & (~ (IData)(vlTOPp->siphash_addr)))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__tmp_read_data 
						= vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_reg;
					}
				    }
				}
			    } else {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    vlTOPp->cuckatoo_top__DOT__hasher__DOT__tmp_read_data 
					= ((2U & (IData)(vlTOPp->siphash_addr))
					    ? ((1U 
						& (IData)(vlTOPp->siphash_addr))
					        ? vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_reg
					        : vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_reg)
					    : ((1U 
						& (IData)(vlTOPp->siphash_addr))
					        ? vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_reg
					        : vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_reg));
				}
			    }
			} else {
			    if ((8U & (IData)(vlTOPp->siphash_addr))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((2U & (IData)(vlTOPp->siphash_addr))) {
					if ((1U & (IData)(vlTOPp->siphash_addr))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__tmp_read_data 
						= (QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg));
					}
				    } else {
					vlTOPp->cuckatoo_top__DOT__hasher__DOT__tmp_read_data 
					    = ((1U 
						& (IData)(vlTOPp->siphash_addr))
					        ? (
						   ((QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_reg)) 
						    << 1U) 
						   | (QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_reg)))
					        : (QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg)));
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[0U] 
	= (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_reg);
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[1U] 
	= (IData)((vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_reg 
		   >> 0x20U));
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[2U] 
	= (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_reg);
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[3U] 
	= (IData)((vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_reg 
		   >> 0x20U));
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[4U] 
	= (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_reg);
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[5U] 
	= (IData)((vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_reg 
		   >> 0x20U));
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[6U] 
	= (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_reg);
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[7U] 
	= (IData)((vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_reg 
		   >> 0x20U));
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_we = 0U;
    if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_we = 1U;
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_new = 0U;
    if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_new = 1U;
	    }
	}
    } else {
	if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_new = 1U;
	    }
	} else {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg)))) {
		    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_new = 0U;
		    } else {
			if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_new = 0U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_we = 0U;
    if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_we = 1U;
	    }
	}
    } else {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_we = 1U;
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_we = 0U;
    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		  >> 2U)))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg)))) {
		    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_we = 1U;
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_new = 0U;
    if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_new = 1U;
	    }
	}
    } else {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_new = 0U;
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_we = 0U;
    if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_we = 1U;
	    }
	}
    } else {
	if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_we = 1U;
	    }
	} else {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg)))) {
		    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_we = 1U;
		    } else {
			if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_we = 1U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new = 0U;
    if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new = 0U;
	    }
	}
    } else {
	if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	    if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
		if (((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_reg) 
		     == ((0xfU & ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg) 
				  >> 4U)) - (IData)(1U)))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new = 4U;
		}
	    } else {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new = 0U;
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
		if (((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_reg) 
		     == ((0xfU & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg)) 
			 - (IData)(1U)))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new = 2U;
		}
	    } else {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg)))) {
		    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new = 1U;
		    } else {
			if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new = 3U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we = 0U;
    if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we = 1U;
	    }
	}
    } else {
	if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	    if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
		if (((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_reg) 
		     == ((0xfU & ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg) 
				  >> 4U)) - (IData)(1U)))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we = 1U;
		}
	    } else {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we = 1U;
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
		if (((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_reg) 
		     == ((0xfU & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg)) 
			 - (IData)(1U)))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we = 1U;
		}
	    } else {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg)))) {
		    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we = 1U;
		    } else {
			if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we = 1U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_rst = 0U;
    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		  >> 2U)))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg)))) {
		    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_rst = 1U;
		    } else {
			if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_rst = 1U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_inc = 0U;
    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	    if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_inc = 1U;
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_inc = 1U;
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode = 0U;
    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode 
		= ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))
		    ? 5U : 2U);
	} else {
	    if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode = 5U;
	    } else {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode = 0U;
		} else {
		    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode = 1U;
		    } else {
			if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode = 3U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update = 0U;
    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update = 1U;
	} else {
	    if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update = 1U;
	    } else {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update = 1U;
		} else {
		    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update = 1U;
		    } else {
			if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update = 1U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:146
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_we) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_reg 
		= vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_new;
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_reg = VL_ULL(0);
    }
    // ALWAYS at ../rtl/siphash_core.v:146
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_we) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_reg 
		= vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_new;
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_reg = VL_ULL(0);
    }
    // ALWAYS at ../rtl/siphash_core.v:146
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_we) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_reg 
		= vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_new;
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_reg = VL_ULL(0);
    }
    // ALWAYS at ../rtl/siphash_core.v:146
    if (vlTOPp->siphash_reset_n) {
	if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_we) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg 
		= vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_new;
	}
    } else {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg = VL_ULL(0);
    }
    vlTOPp->siphash_read_data = vlTOPp->cuckatoo_top__DOT__hasher__DOT__tmp_read_data;
    // ALWAYS at ../rtl/siphash_core.v:300
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_we = 0U;
    if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_rst) {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_we = 1U;
    }
    if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_inc) {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_we = 1U;
    }
    // ALWAYS at ../rtl/siphash_core.v:300
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_new = 0U;
    if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_inc) {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_new 
	    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_reg)));
    }
    // ALWAYS at ../rtl/siphash_core.v:205
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_we = 0U;
    if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update) {
	if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
	    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode) 
			  >> 1U)))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_we = 1U;
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode)))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_we = 1U;
		}
	    } else {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode)))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_we = 1U;
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:205
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_we = 0U;
    if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update) {
	if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
	    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode) 
			  >> 1U)))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_we = 1U;
		}
	    }
	} else {
	    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode)))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_we = 1U;
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:205
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_we = 0U;
    if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update) {
	if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
	    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode) 
			  >> 1U)))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_we = 1U;
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_we = 1U;
		}
	    } else {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode)))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_we = 1U;
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:205
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_we = 0U;
    if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update) {
	if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
	    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode) 
			  >> 1U)))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_we = 1U;
		}
	    }
	} else {
	    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode) 
			  >> 1U)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_we = 1U;
	    }
	}
    }
    vlTOPp->siphash_reset_n = __Vdly__siphash_reset_n;
    // ALWAYS at ../rtl/siphash_core.v:205
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_new = VL_ULL(0);
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_new = VL_ULL(0);
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_new = VL_ULL(0);
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_new = VL_ULL(0);
    if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update) {
	if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
	    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode) 
			  >> 1U)))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_0_res 
			= (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_reg 
			   + vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_reg);
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_1_res 
			= (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_reg 
			   + vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg);
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v0_tmp 
			= (((QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_0_res)) 
			    << 0x20U) | (QData)((IData)(
							(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_0_res 
							 >> 0x20U))));
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v1_tmp 
			= (((VL_ULL(0xffffffffffffe000) 
			     & (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_reg 
				<< 0xdU)) | (QData)((IData)(
							    (0x1fffU 
							     & (IData)(
								       (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_reg 
									>> 0x33U)))))) 
			   ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_0_res);
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v2_tmp 
			= vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_1_res;
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v3_tmp 
			= (((VL_ULL(0xffffffffffff0000) 
			     & (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg 
				<< 0x10U)) | (QData)((IData)(
							     (0xffffU 
							      & (IData)(
									(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg 
									 >> 0x30U)))))) 
			   ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_1_res);
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_2_res 
			= (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v1_tmp 
			   + vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v2_tmp);
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_3_res 
			= (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v0_tmp 
			   + vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v3_tmp);
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_new 
			= vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_3_res;
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_new 
			= (((VL_ULL(0xfffffffffffe0000) 
			     & (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v1_tmp 
				<< 0x11U)) | (QData)((IData)(
							     (0x1ffffU 
							      & (IData)(
									(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v1_tmp 
									 >> 0x2fU)))))) 
			   ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_2_res);
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_new 
			= (((QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_2_res)) 
			    << 0x20U) | (QData)((IData)(
							(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_2_res 
							 >> 0x20U))));
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_new 
			= (((VL_ULL(0xffffffffffe00000) 
			     & (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v3_tmp 
				<< 0x15U)) | (QData)((IData)(
							     (0x1fffffU 
							      & (IData)(
									(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v3_tmp 
									 >> 0x2bU)))))) 
			   ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_3_res);
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_new 
			= (VL_ULL(0xff) ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_reg);
		} else {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_new 
			= (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_reg 
			   ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_reg);
		}
	    } else {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_new 
			= (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg 
			   ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_reg);
		} else {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_new 
			= (((QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[1U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[0U])));
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_new 
			= (((QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[3U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[2U])));
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_new 
			= (((QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[5U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[4U])));
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_new 
			= (((QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[7U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[6U])));
		}
	    }
	}
    }
}

void Vcuckatoo_top::_settle__TOP__3(Vcuckatoo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcuckatoo_top::_settle__TOP__3\n"); );
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_we = 0U;
    if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_we = 1U;
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_new = 0U;
    if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_new = 1U;
	    }
	}
    } else {
	if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_new = 1U;
	    }
	} else {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg)))) {
		    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_new = 0U;
		    } else {
			if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_new = 0U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_we = 0U;
    if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_we = 1U;
	    }
	}
    } else {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_we = 1U;
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_we = 0U;
    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		  >> 2U)))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg)))) {
		    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_we = 1U;
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_new = 0U;
    if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_new = 1U;
	    }
	}
    } else {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_new = 0U;
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_we = 0U;
    if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_we = 1U;
	    }
	}
    } else {
	if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_we = 1U;
	    }
	} else {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg)))) {
		    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_we = 1U;
		    } else {
			if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_we = 1U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new = 0U;
    if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new = 0U;
	    }
	}
    } else {
	if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	    if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
		if (((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_reg) 
		     == ((0xfU & ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg) 
				  >> 4U)) - (IData)(1U)))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new = 4U;
		}
	    } else {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new = 0U;
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
		if (((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_reg) 
		     == ((0xfU & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg)) 
			 - (IData)(1U)))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new = 2U;
		}
	    } else {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg)))) {
		    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new = 1U;
		    } else {
			if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new = 3U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we = 0U;
    if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we = 1U;
	    }
	}
    } else {
	if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	    if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
		if (((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_reg) 
		     == ((0xfU & ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg) 
				  >> 4U)) - (IData)(1U)))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we = 1U;
		}
	    } else {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we = 1U;
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
		if (((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_reg) 
		     == ((0xfU & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg)) 
			 - (IData)(1U)))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we = 1U;
		}
	    } else {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg)))) {
		    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we = 1U;
		    } else {
			if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we = 1U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_rst = 0U;
    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		  >> 2U)))) {
	if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg)))) {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg)))) {
		    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_rst = 1U;
		    } else {
			if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_rst = 1U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_inc = 0U;
    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	    if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_inc = 1U;
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_inc = 1U;
	    }
	}
    }
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[0U] 
	= (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_reg);
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[1U] 
	= (IData)((vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_reg 
		   >> 0x20U));
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[2U] 
	= (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_reg);
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[3U] 
	= (IData)((vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_reg 
		   >> 0x20U));
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[4U] 
	= (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_reg);
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[5U] 
	= (IData)((vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_reg 
		   >> 0x20U));
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[6U] 
	= (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_reg);
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[7U] 
	= (IData)((vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_reg 
		   >> 0x20U));
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode = 0U;
    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode 
		= ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))
		    ? 5U : 2U);
	} else {
	    if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode = 5U;
	    } else {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode = 0U;
		} else {
		    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode = 1U;
		    } else {
			if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode = 3U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:320
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update = 0U;
    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
	    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update = 1U;
	} else {
	    if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update = 1U;
	    } else {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update = 1U;
		} else {
		    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update = 1U;
		    } else {
			if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg))) {
			    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update = 1U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash.v:202
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_we = 0U;
    if (vlTOPp->siphash_cs) {
	if (vlTOPp->siphash_we) {
	    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			  >> 7U)))) {
		if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			      >> 6U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				  >> 5U)))) {
			if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				      >> 4U)))) {
			    if ((8U & (IData)(vlTOPp->siphash_addr))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((2U & (IData)(vlTOPp->siphash_addr))) {
					if ((1U & (IData)(vlTOPp->siphash_addr))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_we = 1U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash.v:202
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_we = 0U;
    if (vlTOPp->siphash_cs) {
	if (vlTOPp->siphash_we) {
	    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			  >> 7U)))) {
		if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			      >> 6U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				  >> 5U)))) {
			if ((0x10U & (IData)(vlTOPp->siphash_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					  >> 3U)))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((2U & (IData)(vlTOPp->siphash_addr))) {
					if ((1U & (~ (IData)(vlTOPp->siphash_addr)))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_we = 1U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash.v:202
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_we = 0U;
    if (vlTOPp->siphash_cs) {
	if (vlTOPp->siphash_we) {
	    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			  >> 7U)))) {
		if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			      >> 6U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				  >> 5U)))) {
			if ((0x10U & (IData)(vlTOPp->siphash_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					  >> 3U)))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
						  >> 1U)))) {
					if ((1U & (IData)(vlTOPp->siphash_addr))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_we = 1U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash.v:202
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_we = 0U;
    if (vlTOPp->siphash_cs) {
	if (vlTOPp->siphash_we) {
	    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			  >> 7U)))) {
		if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			      >> 6U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				  >> 5U)))) {
			if ((0x10U & (IData)(vlTOPp->siphash_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					  >> 3U)))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
						  >> 1U)))) {
					if ((1U & (~ (IData)(vlTOPp->siphash_addr)))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_we = 1U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash.v:202
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_we = 0U;
    if (vlTOPp->siphash_cs) {
	if (vlTOPp->siphash_we) {
	    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			  >> 7U)))) {
		if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			      >> 6U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				  >> 5U)))) {
			if ((0x10U & (IData)(vlTOPp->siphash_addr))) {
			    if ((8U & (IData)(vlTOPp->siphash_addr))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
						  >> 1U)))) {
					if ((1U & (~ (IData)(vlTOPp->siphash_addr)))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_we = 1U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash.v:202
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_we = 0U;
    if (vlTOPp->siphash_cs) {
	if (vlTOPp->siphash_we) {
	    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			  >> 7U)))) {
		if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			      >> 6U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				  >> 5U)))) {
			if ((0x10U & (IData)(vlTOPp->siphash_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					  >> 3U)))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((2U & (IData)(vlTOPp->siphash_addr))) {
					if ((1U & (IData)(vlTOPp->siphash_addr))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_we = 1U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash.v:202
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_new = 0U;
    if (vlTOPp->siphash_cs) {
	if (vlTOPp->siphash_we) {
	    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			  >> 7U)))) {
		if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			      >> 6U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				  >> 5U)))) {
			if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				      >> 4U)))) {
			    if ((8U & (IData)(vlTOPp->siphash_addr))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
						  >> 1U)))) {
					if ((1U & (~ (IData)(vlTOPp->siphash_addr)))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_new 
						= (7U 
						   & (IData)(vlTOPp->siphash_write_data));
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash.v:202
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__tmp_read_data = VL_ULL(0);
    if (vlTOPp->siphash_cs) {
	if ((1U & (~ (IData)(vlTOPp->siphash_we)))) {
	    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			  >> 7U)))) {
		if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
			      >> 6U)))) {
		    if ((0x20U & (IData)(vlTOPp->siphash_addr))) {
			if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
				      >> 4U)))) {
			    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					  >> 3U)))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
						  >> 1U)))) {
					if ((1U & (~ (IData)(vlTOPp->siphash_addr)))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__tmp_read_data 
						= vlTOPp->cuckatoo_top__DOT__hasher__DOT__word0_reg;
					}
				    }
				}
			    }
			}
		    } else {
			if ((0x10U & (IData)(vlTOPp->siphash_addr))) {
			    if ((8U & (IData)(vlTOPp->siphash_addr))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
						  >> 1U)))) {
					if ((1U & (~ (IData)(vlTOPp->siphash_addr)))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__tmp_read_data 
						= vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_reg;
					}
				    }
				}
			    } else {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    vlTOPp->cuckatoo_top__DOT__hasher__DOT__tmp_read_data 
					= ((2U & (IData)(vlTOPp->siphash_addr))
					    ? ((1U 
						& (IData)(vlTOPp->siphash_addr))
					        ? vlTOPp->cuckatoo_top__DOT__hasher__DOT__key3_reg
					        : vlTOPp->cuckatoo_top__DOT__hasher__DOT__key2_reg)
					    : ((1U 
						& (IData)(vlTOPp->siphash_addr))
					        ? vlTOPp->cuckatoo_top__DOT__hasher__DOT__key1_reg
					        : vlTOPp->cuckatoo_top__DOT__hasher__DOT__key0_reg));
				}
			    }
			} else {
			    if ((8U & (IData)(vlTOPp->siphash_addr))) {
				if ((1U & (~ ((IData)(vlTOPp->siphash_addr) 
					      >> 2U)))) {
				    if ((2U & (IData)(vlTOPp->siphash_addr))) {
					if ((1U & (IData)(vlTOPp->siphash_addr))) {
					    vlTOPp->cuckatoo_top__DOT__hasher__DOT__tmp_read_data 
						= (QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__param_reg));
					}
				    } else {
					vlTOPp->cuckatoo_top__DOT__hasher__DOT__tmp_read_data 
					    = ((1U 
						& (IData)(vlTOPp->siphash_addr))
					        ? (
						   ((QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_reg)) 
						    << 1U) 
						   | (QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_reg)))
					        : (QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__ctrl_reg)));
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:300
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_we = 0U;
    if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_rst) {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_we = 1U;
    }
    if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_inc) {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_we = 1U;
    }
    // ALWAYS at ../rtl/siphash_core.v:300
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_new = 0U;
    if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_inc) {
	vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_new 
	    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_reg)));
    }
    // ALWAYS at ../rtl/siphash_core.v:205
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_we = 0U;
    if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update) {
	if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
	    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode) 
			  >> 1U)))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_we = 1U;
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode)))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_we = 1U;
		}
	    } else {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode)))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_we = 1U;
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:205
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_we = 0U;
    if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update) {
	if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
	    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode) 
			  >> 1U)))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_we = 1U;
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_we = 1U;
		}
	    } else {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode)))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_we = 1U;
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:205
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_we = 0U;
    if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update) {
	if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
	    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode) 
			  >> 1U)))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_we = 1U;
		}
	    }
	} else {
	    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode)))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_we = 1U;
		}
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:205
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_we = 0U;
    if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update) {
	if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
	    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode) 
			  >> 1U)))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_we = 1U;
		}
	    }
	} else {
	    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode) 
			  >> 1U)))) {
		vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_we = 1U;
	    }
	}
    }
    // ALWAYS at ../rtl/siphash_core.v:205
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_new = VL_ULL(0);
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_new = VL_ULL(0);
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_new = VL_ULL(0);
    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_new = VL_ULL(0);
    if (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update) {
	if ((4U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
	    if ((1U & (~ ((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode) 
			  >> 1U)))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_0_res 
			= (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_reg 
			   + vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_reg);
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_1_res 
			= (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_reg 
			   + vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg);
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v0_tmp 
			= (((QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_0_res)) 
			    << 0x20U) | (QData)((IData)(
							(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_0_res 
							 >> 0x20U))));
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v1_tmp 
			= (((VL_ULL(0xffffffffffffe000) 
			     & (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_reg 
				<< 0xdU)) | (QData)((IData)(
							    (0x1fffU 
							     & (IData)(
								       (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_reg 
									>> 0x33U)))))) 
			   ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_0_res);
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v2_tmp 
			= vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_1_res;
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v3_tmp 
			= (((VL_ULL(0xffffffffffff0000) 
			     & (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg 
				<< 0x10U)) | (QData)((IData)(
							     (0xffffU 
							      & (IData)(
									(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg 
									 >> 0x30U)))))) 
			   ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_1_res);
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_2_res 
			= (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v1_tmp 
			   + vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v2_tmp);
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_3_res 
			= (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v0_tmp 
			   + vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v3_tmp);
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_new 
			= vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_3_res;
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_new 
			= (((VL_ULL(0xfffffffffffe0000) 
			     & (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v1_tmp 
				<< 0x11U)) | (QData)((IData)(
							     (0x1ffffU 
							      & (IData)(
									(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v1_tmp 
									 >> 0x2fU)))))) 
			   ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_2_res);
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_new 
			= (((QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_2_res)) 
			    << 0x20U) | (QData)((IData)(
							(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_2_res 
							 >> 0x20U))));
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_new 
			= (((VL_ULL(0xffffffffffe00000) 
			     & (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v3_tmp 
				<< 0x15U)) | (QData)((IData)(
							     (0x1fffffU 
							      & (IData)(
									(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v3_tmp 
									 >> 0x2bU)))))) 
			   ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_3_res);
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_new 
			= (VL_ULL(0xff) ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_reg);
		} else {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_new 
			= (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_reg 
			   ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_reg);
		}
	    } else {
		if ((1U & (IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode))) {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_new 
			= (vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg 
			   ^ vlTOPp->cuckatoo_top__DOT__hasher__DOT__nonce_reg);
		} else {
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_new 
			= (((QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[1U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[0U])));
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_new 
			= (((QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[3U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[2U])));
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_new 
			= (((QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[5U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[4U])));
		    vlTOPp->cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_new 
			= (((QData)((IData)(vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[7U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->cuckatoo_top__DOT__hasher__DOT__core_k[6U])));
		}
	    }
	}
    }
    vlTOPp->siphash_read_data = vlTOPp->cuckatoo_top__DOT__hasher__DOT__tmp_read_data;
}

void Vcuckatoo_top::_eval(Vcuckatoo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcuckatoo_top::_eval\n"); );
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->CLOCK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLOCK)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__CLOCK = vlTOPp->CLOCK;
}

void Vcuckatoo_top::_eval_initial(Vcuckatoo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcuckatoo_top::_eval_initial\n"); );
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->__Vclklast__TOP__CLOCK = vlTOPp->CLOCK;
}

void Vcuckatoo_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcuckatoo_top::final\n"); );
    // Variables
    Vcuckatoo_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcuckatoo_top::_eval_settle(Vcuckatoo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcuckatoo_top::_eval_settle\n"); );
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vcuckatoo_top::_change_request(Vcuckatoo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcuckatoo_top::_change_request\n"); );
    Vcuckatoo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcuckatoo_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcuckatoo_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLOCK & 0xfeU))) {
	Verilated::overWidthError("CLOCK");}
    if (VL_UNLIKELY((reset_n & 0xfeU))) {
	Verilated::overWidthError("reset_n");}
}
#endif // VL_DEBUG

void Vcuckatoo_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcuckatoo_top::_ctor_var_reset\n"); );
    // Body
    CLOCK = VL_RAND_RESET_I(1);
    reset_n = VL_RAND_RESET_I(1);
    state = VL_RAND_RESET_I(6);
    siphash_reset_n = VL_RAND_RESET_I(1);
    counter = VL_RAND_RESET_I(2);
    siphash_addr = VL_RAND_RESET_I(8);
    siphash_cs = VL_RAND_RESET_I(1);
    siphash_we = VL_RAND_RESET_I(1);
    siphash_write_data = VL_RAND_RESET_Q(64);
    siphash_read_data = VL_RAND_RESET_Q(64);
    read_data = VL_RAND_RESET_Q(64);
    result = VL_RAND_RESET_Q(64);
    done = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__next_when_ready = VL_RAND_RESET_I(6);
    cuckatoo_top__DOT__next_when_ctrl_written = VL_RAND_RESET_I(6);
    cuckatoo_top__DOT__tb_error = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__nonce = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__ctrl = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__wait_counter = VL_RAND_RESET_Q(33);
    cuckatoo_top__DOT__hasher__DOT__ctrl_reg = VL_RAND_RESET_I(3);
    cuckatoo_top__DOT__hasher__DOT__ctrl_new = VL_RAND_RESET_I(3);
    cuckatoo_top__DOT__hasher__DOT__param_reg = VL_RAND_RESET_I(8);
    cuckatoo_top__DOT__hasher__DOT__param_we = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__key0_reg = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__key0_we = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__key1_reg = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__key1_we = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__key2_reg = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__key2_we = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__key3_reg = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__key3_we = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__nonce_reg = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__nonce_we = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__word0_reg = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__tmp_read_data = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256,cuckatoo_top__DOT__hasher__DOT__core_k);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_reg = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_new = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_we = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_reg = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_new = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_we = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_reg = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_new = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_we = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_new = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_we = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_reg = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_we = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_reg = VL_RAND_RESET_I(4);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_new = VL_RAND_RESET_I(4);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_we = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_inc = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_rst = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_reg = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_new = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_we = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_reg = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_we = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_reg = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_new = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_we = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg = VL_RAND_RESET_I(3);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new = VL_RAND_RESET_I(3);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode = VL_RAND_RESET_I(3);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_0_res = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_1_res = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_2_res = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_3_res = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v0_tmp = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v1_tmp = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v2_tmp = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v3_tmp = VL_RAND_RESET_Q(64);
    cuckatoo_top__DOT__nodes__DOT__data_out = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
	    cuckatoo_top__DOT__nodes__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    cuckatoo_top__DOT__nodes__DOT__oe_r = VL_RAND_RESET_I(1);
    cuckatoo_top__DOT__edges__DOT__data_out = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
	    cuckatoo_top__DOT__edges__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    cuckatoo_top__DOT__edges__DOT__oe_r = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
