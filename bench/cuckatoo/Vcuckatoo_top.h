// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vcuckatoo_top_H_
#define _Vcuckatoo_top_H_

#include "verilated_heavy.h"

class Vcuckatoo_top__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vcuckatoo_top) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(CLOCK,0,0);
    VL_IN8(reset_n,0,0);
    VL_OUT8(state,5,0);
    VL_OUT8(siphash_reset_n,0,0);
    VL_OUT8(counter,1,0);
    VL_OUT8(siphash_addr,7,0);
    VL_OUT8(siphash_cs,0,0);
    VL_OUT8(siphash_we,0,0);
    VL_OUT8(done,0,0);
    VL_OUT64(siphash_write_data,63,0);
    VL_OUT64(siphash_read_data,63,0);
    VL_OUT64(read_data,63,0);
    VL_OUT64(result,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
	// Begin mtask footprint  all: 
	VL_SIG8(cuckatoo_top__DOT__next_when_ready,5,0);
	VL_SIG8(cuckatoo_top__DOT__next_when_ctrl_written,5,0);
	VL_SIG8(cuckatoo_top__DOT__tb_error,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__ctrl_reg,2,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__ctrl_new,2,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__param_reg,7,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__param_we,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__key0_we,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__key1_we,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__key2_we,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__key3_we,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__nonce_we,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_we,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_we,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_we,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_we,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_we,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_reg,3,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_new,3,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_we,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_inc,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__loop_ctr_rst,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_reg,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_new,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__ready_we,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_we,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_reg,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_new,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_valid_we,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_reg,2,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_new,2,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_ctrl_we,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_update,0,0);
	VL_SIG8(cuckatoo_top__DOT__hasher__DOT__core__DOT__dp_mode,2,0);
	VL_SIG8(cuckatoo_top__DOT__nodes__DOT__oe_r,0,0);
	VL_SIG8(cuckatoo_top__DOT__edges__DOT__oe_r,0,0);
	VL_SIGW(cuckatoo_top__DOT__hasher__DOT__core_k,255,0,8);
	VL_SIG(cuckatoo_top__DOT__nodes__DOT__data_out,31,0);
	VL_SIG(cuckatoo_top__DOT__edges__DOT__data_out,31,0);
	VL_SIG64(cuckatoo_top__DOT__nonce,63,0);
	VL_SIG64(cuckatoo_top__DOT__ctrl,63,0);
	VL_SIG64(cuckatoo_top__DOT__wait_counter,32,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__key0_reg,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__key1_reg,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__key2_reg,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__key3_reg,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__nonce_reg,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__word0_reg,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__tmp_read_data,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_reg,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__v0_new,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_reg,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__v1_new,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_reg,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__v2_new,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_reg,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__v3_new,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__nonce_reg,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__siphash_word0_reg,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_0_res,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_1_res,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_2_res,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__add_3_res,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v0_tmp,63,0);
    };
    struct {
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v1_tmp,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v2_tmp,63,0);
	VL_SIG64(cuckatoo_top__DOT__hasher__DOT__core__DOT__datapath_update__DOT__v3_tmp,63,0);
	VL_SIG(cuckatoo_top__DOT__nodes__DOT__mem[2],31,0);
	VL_SIG(cuckatoo_top__DOT__edges__DOT__mem[2],31,0);
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(__Vclklast__TOP__CLOCK,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vcuckatoo_top__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcuckatoo_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vcuckatoo_top(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vcuckatoo_top();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vcuckatoo_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vcuckatoo_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vcuckatoo_top__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(Vcuckatoo_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vcuckatoo_top__Syms* __restrict vlSymsp);
    static void _eval_settle(Vcuckatoo_top__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(Vcuckatoo_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vcuckatoo_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vcuckatoo_top__Syms* __restrict vlSymsp);
    static void traceChgThis(Vcuckatoo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vcuckatoo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vcuckatoo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vcuckatoo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vcuckatoo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vcuckatoo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vcuckatoo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vcuckatoo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
