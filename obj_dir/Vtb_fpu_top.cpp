// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_fpu_top__pch.h"

//============================================================
// Constructors

Vtb_fpu_top::Vtb_fpu_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_fpu_top__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_fpu_top::Vtb_fpu_top(const char* _vcname__)
    : Vtb_fpu_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_fpu_top::~Vtb_fpu_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_fpu_top___024root___eval_debug_assertions(Vtb_fpu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_fpu_top___024root___eval_static(Vtb_fpu_top___024root* vlSelf);
void Vtb_fpu_top___024root___eval_initial(Vtb_fpu_top___024root* vlSelf);
void Vtb_fpu_top___024root___eval_settle(Vtb_fpu_top___024root* vlSelf);
void Vtb_fpu_top___024root___eval(Vtb_fpu_top___024root* vlSelf);

void Vtb_fpu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_fpu_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_fpu_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_fpu_top___024root___eval_static(&(vlSymsp->TOP));
        Vtb_fpu_top___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_fpu_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_fpu_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_fpu_top::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_fpu_top::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_fpu_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_fpu_top___024root___eval_final(Vtb_fpu_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_fpu_top::final() {
    Vtb_fpu_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_fpu_top::hierName() const { return vlSymsp->name(); }
const char* Vtb_fpu_top::modelName() const { return "Vtb_fpu_top"; }
unsigned Vtb_fpu_top::threads() const { return 1; }
void Vtb_fpu_top::prepareClone() const { contextp()->prepareClone(); }
void Vtb_fpu_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
