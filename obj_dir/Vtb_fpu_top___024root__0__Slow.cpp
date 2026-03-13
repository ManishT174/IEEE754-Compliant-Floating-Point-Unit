// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fpu_top.h for the primary calling header

#include "Vtb_fpu_top__pch.h"

VL_ATTR_COLD void Vtb_fpu_top___024root___eval_static(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___eval_static\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*24:0*/ __Vinline__eval_static__TOP_tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder;
    __Vinline__eval_static__TOP_tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder = 0;
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__lz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5112409233482496077ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__unnamedblk3__DOT__shifted_sum = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 9195795096555191695ull);
    __Vinline__eval_static__TOP_tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder = 0;
    vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__unnamedblk1__DOT__shift_right = 0U;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_fpu_top___024root___eval_static__TOP(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___eval_static__TOP\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*24:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder = 0;
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__lz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5112409233482496077ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__unnamedblk3__DOT__shifted_sum = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 9195795096555191695ull);
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder = 0;
    vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__unnamedblk1__DOT__shift_right = 0U;
}

VL_ATTR_COLD void Vtb_fpu_top___024root___eval_final(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___eval_final\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fpu_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_fpu_top___024root___eval_phase__stl(Vtb_fpu_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_fpu_top___024root___eval_settle(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___eval_settle\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fpu_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/tb_fpu_top.sv", 15, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_fpu_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_fpu_top___024root___eval_triggers_vec__stl(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___eval_triggers_vec__stl\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_fpu_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fpu_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fpu_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_fpu_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vtb_fpu_top___024root___stl_sequent__TOP__0(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___stl_sequent__TOP__0\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_fpu_top__DOT__u_dut__DOT__add_result;
    tb_fpu_top__DOT__u_dut__DOT__add_result = 0;
    CData/*4:0*/ tb_fpu_top__DOT__u_dut__DOT__add_flags;
    tb_fpu_top__DOT__u_dut__DOT__add_flags = 0;
    CData/*4:0*/ tb_fpu_top__DOT__u_dut__DOT__f2i_flags;
    tb_fpu_top__DOT__u_dut__DOT__f2i_flags = 0;
    CData/*6:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__a_cls;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__a_cls = 0;
    CData/*6:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_cls;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_cls = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_sign_eff;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_sign_eff = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__eff_sub;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__eff_sub = 0;
    IData/*23:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__a_man;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__a_man = 0;
    IData/*23:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_man;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_man = 0;
    SData/*9:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__exp_diff;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__exp_diff = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__swap;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__swap = 0;
    SData/*9:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__large_exp;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__large_exp = 0;
    IData/*23:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__small_man;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__small_man = 0;
    IData/*27:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sum;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sum = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_sign;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_sign = 0;
    IData/*31:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_result;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_result = 0;
    CData/*4:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_flags;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_flags = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__use_special;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__use_special = 0;
    CData/*4:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__rounded_flags;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__rounded_flags = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__result_is_zero;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__result_is_zero = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgExtracted_h71418064__0;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgExtracted_h71418064__0 = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgExtracted_h714192b3__0;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgExtracted_h714192b3__0 = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgExtracted_h71698a14__0;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgExtracted_h71698a14__0 = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgExtracted_h7174ff16__0;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgExtracted_h7174ff16__0 = 0;
    IData/*27:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgRegularize_he9b033c2_0_1;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgRegularize_he9b033c2_0_1 = 0;
    SData/*9:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__u_round__DOT__exp_adj;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__u_round__DOT__exp_adj = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__u_round__DOT__inexact;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__u_round__DOT__inexact = 0;
    CData/*6:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__a_cls;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__a_cls = 0;
    CData/*6:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__b_cls;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__b_cls = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign = 0;
    IData/*23:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__a_man;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__a_man = 0;
    IData/*23:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__b_man;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__b_man = 0;
    QData/*47:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__prod;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__prod = 0;
    IData/*23:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_man;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_man = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__guard;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__guard = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__round_bit;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__round_bit = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__sticky;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__sticky = 0;
    IData/*31:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__special_result;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__special_result = 0;
    CData/*4:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__special_flags;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__special_flags = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__use_special;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__use_special = 0;
    CData/*4:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__rounded_flags;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__rounded_flags = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT____VdfgExtracted_h71418064__1;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT____VdfgExtracted_h71418064__1 = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT____VdfgExtracted_h714192b3__1;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT____VdfgExtracted_h714192b3__1 = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT____VdfgExtracted_h7599d26d__0;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT____VdfgExtracted_h7599d26d__0 = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT____VdfgExtracted_h7139edbd__0;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT____VdfgExtracted_h7139edbd__0 = 0;
    SData/*9:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__u_round__DOT__exp_adj;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__u_round__DOT__exp_adj = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__u_round__DOT__inexact;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__u_round__DOT__inexact = 0;
    CData/*6:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_cls;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_cls = 0;
    CData/*6:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_cls;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_cls = 0;
    IData/*23:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man = 0;
    IData/*23:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man = 0;
    IData/*25:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__remainder_nonzero;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__remainder_nonzero = 0;
    IData/*23:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__res_man;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__res_man = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__guard;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__guard = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__round_bit;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__round_bit = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__sticky;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__sticky = 0;
    IData/*31:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_result;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_result = 0;
    CData/*4:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_flags;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_flags = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__use_special;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__use_special = 0;
    CData/*4:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__rounded_flags;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__rounded_flags = 0;
    IData/*24:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder = 0;
    SData/*9:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_hec867e7b__1;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_hec867e7b__1 = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_h71418064__2;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_h71418064__2 = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_h71698a14__1;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_h71698a14__1 = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_h7174ff16__1;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_h7174ff16__1 = 0;
    SData/*9:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__u_round__DOT__exp_adj;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__u_round__DOT__exp_adj = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__u_round__DOT__inexact;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__u_round__DOT__inexact = 0;
    IData/*31:0*/ tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__magnitude;
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__magnitude = 0;
    CData/*4:0*/ tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__lz;
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__lz = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__all_zero;
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__all_zero = 0;
    IData/*31:0*/ tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__shifted;
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__shifted = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__sticky;
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__sticky = 0;
    CData/*4:0*/ tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__rounded_flags;
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__rounded_flags = 0;
    IData/*31:0*/ tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__unnamedblk1__DOT__i;
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__unnamedblk1__DOT__i = 0;
    SData/*9:0*/ tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__u_round__DOT__exp_adj;
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__u_round__DOT__exp_adj = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__u_round__DOT__inexact;
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__u_round__DOT__inexact = 0;
    CData/*6:0*/ tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__f_cls;
    tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__f_cls = 0;
    IData/*23:0*/ tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__man;
    tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__man = 0;
    CData/*6:0*/ tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_cls;
    tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_cls = 0;
    CData/*6:0*/ tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__b_cls;
    tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__b_cls = 0;
    CData/*0:0*/ tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT____VdfgRegularize_h0bcd6bd5_0_0;
    tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT____VdfgRegularize_h0bcd6bd5_0_0 = 0;
    CData/*6:0*/ __Vfunc_classify__2917__Vfuncout;
    __Vfunc_classify__2917__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_classify__2917__f;
    __Vfunc_classify__2917__f = 0;
    CData/*6:0*/ __Vfunc_classify__2917__c;
    __Vfunc_classify__2917__c = 0;
    CData/*0:0*/ __Vfunc_classify__2917__exp_zero;
    __Vfunc_classify__2917__exp_zero = 0;
    CData/*0:0*/ __Vfunc_classify__2917__exp_max;
    __Vfunc_classify__2917__exp_max = 0;
    CData/*0:0*/ __Vfunc_classify__2917__man_zero;
    __Vfunc_classify__2917__man_zero = 0;
    CData/*6:0*/ __Vfunc_classify__2918__Vfuncout;
    __Vfunc_classify__2918__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_classify__2918__f;
    __Vfunc_classify__2918__f = 0;
    CData/*6:0*/ __Vfunc_classify__2918__c;
    __Vfunc_classify__2918__c = 0;
    CData/*0:0*/ __Vfunc_classify__2918__exp_zero;
    __Vfunc_classify__2918__exp_zero = 0;
    CData/*0:0*/ __Vfunc_classify__2918__exp_max;
    __Vfunc_classify__2918__exp_max = 0;
    CData/*0:0*/ __Vfunc_classify__2918__man_zero;
    __Vfunc_classify__2918__man_zero = 0;
    CData/*6:0*/ __Vfunc_classify__2921__Vfuncout;
    __Vfunc_classify__2921__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_classify__2921__f;
    __Vfunc_classify__2921__f = 0;
    CData/*6:0*/ __Vfunc_classify__2921__c;
    __Vfunc_classify__2921__c = 0;
    CData/*0:0*/ __Vfunc_classify__2921__exp_zero;
    __Vfunc_classify__2921__exp_zero = 0;
    CData/*0:0*/ __Vfunc_classify__2921__exp_max;
    __Vfunc_classify__2921__exp_max = 0;
    CData/*0:0*/ __Vfunc_classify__2921__man_zero;
    __Vfunc_classify__2921__man_zero = 0;
    CData/*6:0*/ __Vfunc_classify__2922__Vfuncout;
    __Vfunc_classify__2922__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_classify__2922__f;
    __Vfunc_classify__2922__f = 0;
    CData/*6:0*/ __Vfunc_classify__2922__c;
    __Vfunc_classify__2922__c = 0;
    CData/*0:0*/ __Vfunc_classify__2922__exp_zero;
    __Vfunc_classify__2922__exp_zero = 0;
    CData/*0:0*/ __Vfunc_classify__2922__exp_max;
    __Vfunc_classify__2922__exp_max = 0;
    CData/*0:0*/ __Vfunc_classify__2922__man_zero;
    __Vfunc_classify__2922__man_zero = 0;
    CData/*6:0*/ __Vfunc_classify__2925__Vfuncout;
    __Vfunc_classify__2925__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_classify__2925__f;
    __Vfunc_classify__2925__f = 0;
    CData/*6:0*/ __Vfunc_classify__2925__c;
    __Vfunc_classify__2925__c = 0;
    CData/*0:0*/ __Vfunc_classify__2925__exp_zero;
    __Vfunc_classify__2925__exp_zero = 0;
    CData/*0:0*/ __Vfunc_classify__2925__exp_max;
    __Vfunc_classify__2925__exp_max = 0;
    CData/*0:0*/ __Vfunc_classify__2925__man_zero;
    __Vfunc_classify__2925__man_zero = 0;
    CData/*6:0*/ __Vfunc_classify__2926__Vfuncout;
    __Vfunc_classify__2926__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_classify__2926__f;
    __Vfunc_classify__2926__f = 0;
    CData/*6:0*/ __Vfunc_classify__2926__c;
    __Vfunc_classify__2926__c = 0;
    CData/*0:0*/ __Vfunc_classify__2926__exp_zero;
    __Vfunc_classify__2926__exp_zero = 0;
    CData/*0:0*/ __Vfunc_classify__2926__exp_max;
    __Vfunc_classify__2926__exp_max = 0;
    CData/*0:0*/ __Vfunc_classify__2926__man_zero;
    __Vfunc_classify__2926__man_zero = 0;
    CData/*6:0*/ __Vfunc_classify__2929__Vfuncout;
    __Vfunc_classify__2929__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_classify__2929__f;
    __Vfunc_classify__2929__f = 0;
    CData/*6:0*/ __Vfunc_classify__2929__c;
    __Vfunc_classify__2929__c = 0;
    CData/*0:0*/ __Vfunc_classify__2929__exp_zero;
    __Vfunc_classify__2929__exp_zero = 0;
    CData/*0:0*/ __Vfunc_classify__2929__exp_max;
    __Vfunc_classify__2929__exp_max = 0;
    CData/*0:0*/ __Vfunc_classify__2929__man_zero;
    __Vfunc_classify__2929__man_zero = 0;
    CData/*6:0*/ __Vfunc_classify__2931__Vfuncout;
    __Vfunc_classify__2931__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_classify__2931__f;
    __Vfunc_classify__2931__f = 0;
    CData/*6:0*/ __Vfunc_classify__2931__c;
    __Vfunc_classify__2931__c = 0;
    CData/*0:0*/ __Vfunc_classify__2931__exp_zero;
    __Vfunc_classify__2931__exp_zero = 0;
    CData/*0:0*/ __Vfunc_classify__2931__exp_max;
    __Vfunc_classify__2931__exp_max = 0;
    CData/*0:0*/ __Vfunc_classify__2931__man_zero;
    __Vfunc_classify__2931__man_zero = 0;
    CData/*6:0*/ __Vfunc_classify__2932__Vfuncout;
    __Vfunc_classify__2932__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_classify__2932__f;
    __Vfunc_classify__2932__f = 0;
    CData/*6:0*/ __Vfunc_classify__2932__c;
    __Vfunc_classify__2932__c = 0;
    CData/*0:0*/ __Vfunc_classify__2932__exp_zero;
    __Vfunc_classify__2932__exp_zero = 0;
    CData/*0:0*/ __Vfunc_classify__2932__exp_max;
    __Vfunc_classify__2932__exp_max = 0;
    CData/*0:0*/ __Vfunc_classify__2932__man_zero;
    __Vfunc_classify__2932__man_zero = 0;
    IData/*24:0*/ __VdfgRegularize_hebeb780c_0_4;
    __VdfgRegularize_hebeb780c_0_4 = 0;
    IData/*24:0*/ __VdfgRegularize_hebeb780c_0_5;
    __VdfgRegularize_hebeb780c_0_5 = 0;
    IData/*24:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    IData/*24:0*/ __VdfgRegularize_hebeb780c_0_7;
    __VdfgRegularize_hebeb780c_0_7 = 0;
    // Body
    tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT____VdfgRegularize_h0bcd6bd5_0_0 
        = ((0x000000ffU & (vlSelfRef.tb_fpu_top__DOT__operand_a 
                           >> 0x00000017U)) == (0x000000ffU 
                                                & (vlSelfRef.tb_fpu_top__DOT__operand_b 
                                                   >> 0x00000017U)));
    tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__man = 
        ((([&]() {
                    vlSelfRef.__Vfunc_leading_bit__2930__f 
                        = vlSelfRef.tb_fpu_top__DOT__operand_a;
                    vlSelfRef.__Vfunc_leading_bit__2930__Vfuncout 
                        = (0U != (0x000000ffU & (vlSelfRef.__Vfunc_leading_bit__2930__f 
                                                 >> 0x00000017U)));
                }(), (IData)(vlSelfRef.__Vfunc_leading_bit__2930__Vfuncout)) 
          << 0x00000017U) | (0x007fffffU & vlSelfRef.tb_fpu_top__DOT__operand_a));
    __Vfunc_classify__2929__f = vlSelfRef.tb_fpu_top__DOT__operand_a;
    __Vfunc_classify__2929__c = 0;
    __Vfunc_classify__2929__exp_zero = (0U == (0x000000ffU 
                                               & (__Vfunc_classify__2929__f 
                                                  >> 0x00000017U)));
    __Vfunc_classify__2929__exp_max = (0xffU == (0x000000ffU 
                                                 & (__Vfunc_classify__2929__f 
                                                    >> 0x00000017U)));
    __Vfunc_classify__2929__man_zero = (0U == (0x007fffffU 
                                               & __Vfunc_classify__2929__f));
    __Vfunc_classify__2929__c = ((0x3fU & (IData)(__Vfunc_classify__2929__c)) 
                                 | (((IData)(__Vfunc_classify__2929__exp_zero) 
                                     & (IData)(__Vfunc_classify__2929__man_zero)) 
                                    << 6U));
    __Vfunc_classify__2929__c = ((0x7dU & (IData)(__Vfunc_classify__2929__c)) 
                                 | (((IData)(__Vfunc_classify__2929__exp_zero) 
                                     & (~ (IData)(__Vfunc_classify__2929__man_zero))) 
                                    << 1U));
    __Vfunc_classify__2929__c = ((0x4fU & (IData)(__Vfunc_classify__2929__c)) 
                                 | ((((IData)(__Vfunc_classify__2929__exp_max) 
                                      & (IData)(__Vfunc_classify__2929__man_zero)) 
                                     << 5U) | (((IData)(__Vfunc_classify__2929__exp_max) 
                                                & (~ (IData)(__Vfunc_classify__2929__man_zero))) 
                                               << 4U)));
    __Vfunc_classify__2929__c = ((0x77U & (IData)(__Vfunc_classify__2929__c)) 
                                 | (8U & (((IData)(__Vfunc_classify__2929__c) 
                                           >> 1U) & 
                                          ((~ (__Vfunc_classify__2929__f 
                                               >> 0x00000016U)) 
                                           << 3U))));
    __Vfunc_classify__2929__c = ((0x7bU & (IData)(__Vfunc_classify__2929__c)) 
                                 | (4U & (((IData)(__Vfunc_classify__2929__c) 
                                           >> 2U) & 
                                          (__Vfunc_classify__2929__f 
                                           >> 0x00000014U))));
    __Vfunc_classify__2929__c = ((0x7eU & (IData)(__Vfunc_classify__2929__c)) 
                                 | (1U & ((~ (IData)(__Vfunc_classify__2929__exp_zero)) 
                                          & (~ (IData)(__Vfunc_classify__2929__exp_max)))));
    __Vfunc_classify__2929__Vfuncout = __Vfunc_classify__2929__c;
    tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__f_cls 
        = __Vfunc_classify__2929__Vfuncout;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_hec867e7b__1 
        = (0x000003ffU & ((IData)(0x007fU) + (VL_EXTENDS_II(10,10, 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_fpu_top__DOT__operand_a 
                                                                >> 0x00000017U))) 
                                              - VL_EXTENDS_II(10,10, 
                                                              (0x000000ffU 
                                                               & (vlSelfRef.tb_fpu_top__DOT__operand_b 
                                                                  >> 0x00000017U))))));
    __Vfunc_classify__2931__f = vlSelfRef.tb_fpu_top__DOT__operand_a;
    __Vfunc_classify__2931__c = 0;
    __Vfunc_classify__2931__exp_zero = (0U == (0x000000ffU 
                                               & (__Vfunc_classify__2931__f 
                                                  >> 0x00000017U)));
    __Vfunc_classify__2931__exp_max = (0xffU == (0x000000ffU 
                                                 & (__Vfunc_classify__2931__f 
                                                    >> 0x00000017U)));
    __Vfunc_classify__2931__man_zero = (0U == (0x007fffffU 
                                               & __Vfunc_classify__2931__f));
    __Vfunc_classify__2931__c = ((0x3fU & (IData)(__Vfunc_classify__2931__c)) 
                                 | (((IData)(__Vfunc_classify__2931__exp_zero) 
                                     & (IData)(__Vfunc_classify__2931__man_zero)) 
                                    << 6U));
    __Vfunc_classify__2931__c = ((0x7dU & (IData)(__Vfunc_classify__2931__c)) 
                                 | (((IData)(__Vfunc_classify__2931__exp_zero) 
                                     & (~ (IData)(__Vfunc_classify__2931__man_zero))) 
                                    << 1U));
    __Vfunc_classify__2931__c = ((0x4fU & (IData)(__Vfunc_classify__2931__c)) 
                                 | ((((IData)(__Vfunc_classify__2931__exp_max) 
                                      & (IData)(__Vfunc_classify__2931__man_zero)) 
                                     << 5U) | (((IData)(__Vfunc_classify__2931__exp_max) 
                                                & (~ (IData)(__Vfunc_classify__2931__man_zero))) 
                                               << 4U)));
    __Vfunc_classify__2931__c = ((0x77U & (IData)(__Vfunc_classify__2931__c)) 
                                 | (8U & (((IData)(__Vfunc_classify__2931__c) 
                                           >> 1U) & 
                                          ((~ (__Vfunc_classify__2931__f 
                                               >> 0x00000016U)) 
                                           << 3U))));
    __Vfunc_classify__2931__c = ((0x7bU & (IData)(__Vfunc_classify__2931__c)) 
                                 | (4U & (((IData)(__Vfunc_classify__2931__c) 
                                           >> 2U) & 
                                          (__Vfunc_classify__2931__f 
                                           >> 0x00000014U))));
    __Vfunc_classify__2931__c = ((0x7eU & (IData)(__Vfunc_classify__2931__c)) 
                                 | (1U & ((~ (IData)(__Vfunc_classify__2931__exp_zero)) 
                                          & (~ (IData)(__Vfunc_classify__2931__exp_max)))));
    __Vfunc_classify__2931__Vfuncout = __Vfunc_classify__2931__c;
    tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_cls 
        = __Vfunc_classify__2931__Vfuncout;
    __Vfunc_classify__2932__f = vlSelfRef.tb_fpu_top__DOT__operand_b;
    __Vfunc_classify__2932__c = 0;
    __Vfunc_classify__2932__exp_zero = (0U == (0x000000ffU 
                                               & (__Vfunc_classify__2932__f 
                                                  >> 0x00000017U)));
    __Vfunc_classify__2932__exp_max = (0xffU == (0x000000ffU 
                                                 & (__Vfunc_classify__2932__f 
                                                    >> 0x00000017U)));
    __Vfunc_classify__2932__man_zero = (0U == (0x007fffffU 
                                               & __Vfunc_classify__2932__f));
    __Vfunc_classify__2932__c = ((0x3fU & (IData)(__Vfunc_classify__2932__c)) 
                                 | (((IData)(__Vfunc_classify__2932__exp_zero) 
                                     & (IData)(__Vfunc_classify__2932__man_zero)) 
                                    << 6U));
    __Vfunc_classify__2932__c = ((0x7dU & (IData)(__Vfunc_classify__2932__c)) 
                                 | (((IData)(__Vfunc_classify__2932__exp_zero) 
                                     & (~ (IData)(__Vfunc_classify__2932__man_zero))) 
                                    << 1U));
    __Vfunc_classify__2932__c = ((0x4fU & (IData)(__Vfunc_classify__2932__c)) 
                                 | ((((IData)(__Vfunc_classify__2932__exp_max) 
                                      & (IData)(__Vfunc_classify__2932__man_zero)) 
                                     << 5U) | (((IData)(__Vfunc_classify__2932__exp_max) 
                                                & (~ (IData)(__Vfunc_classify__2932__man_zero))) 
                                               << 4U)));
    __Vfunc_classify__2932__c = ((0x77U & (IData)(__Vfunc_classify__2932__c)) 
                                 | (8U & (((IData)(__Vfunc_classify__2932__c) 
                                           >> 1U) & 
                                          ((~ (__Vfunc_classify__2932__f 
                                               >> 0x00000016U)) 
                                           << 3U))));
    __Vfunc_classify__2932__c = ((0x7bU & (IData)(__Vfunc_classify__2932__c)) 
                                 | (4U & (((IData)(__Vfunc_classify__2932__c) 
                                           >> 2U) & 
                                          (__Vfunc_classify__2932__f 
                                           >> 0x00000014U))));
    __Vfunc_classify__2932__c = ((0x7eU & (IData)(__Vfunc_classify__2932__c)) 
                                 | (1U & ((~ (IData)(__Vfunc_classify__2932__exp_zero)) 
                                          & (~ (IData)(__Vfunc_classify__2932__exp_max)))));
    __Vfunc_classify__2932__Vfuncout = __Vfunc_classify__2932__c;
    tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__b_cls 
        = __Vfunc_classify__2932__Vfuncout;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign 
        = ((vlSelfRef.tb_fpu_top__DOT__operand_a ^ vlSelfRef.tb_fpu_top__DOT__operand_b) 
           >> 0x0000001fU);
    __Vfunc_classify__2921__f = vlSelfRef.tb_fpu_top__DOT__operand_a;
    __Vfunc_classify__2921__c = 0;
    __Vfunc_classify__2921__exp_zero = (0U == (0x000000ffU 
                                               & (__Vfunc_classify__2921__f 
                                                  >> 0x00000017U)));
    __Vfunc_classify__2921__exp_max = (0xffU == (0x000000ffU 
                                                 & (__Vfunc_classify__2921__f 
                                                    >> 0x00000017U)));
    __Vfunc_classify__2921__man_zero = (0U == (0x007fffffU 
                                               & __Vfunc_classify__2921__f));
    __Vfunc_classify__2921__c = ((0x3fU & (IData)(__Vfunc_classify__2921__c)) 
                                 | (((IData)(__Vfunc_classify__2921__exp_zero) 
                                     & (IData)(__Vfunc_classify__2921__man_zero)) 
                                    << 6U));
    __Vfunc_classify__2921__c = ((0x7dU & (IData)(__Vfunc_classify__2921__c)) 
                                 | (((IData)(__Vfunc_classify__2921__exp_zero) 
                                     & (~ (IData)(__Vfunc_classify__2921__man_zero))) 
                                    << 1U));
    __Vfunc_classify__2921__c = ((0x4fU & (IData)(__Vfunc_classify__2921__c)) 
                                 | ((((IData)(__Vfunc_classify__2921__exp_max) 
                                      & (IData)(__Vfunc_classify__2921__man_zero)) 
                                     << 5U) | (((IData)(__Vfunc_classify__2921__exp_max) 
                                                & (~ (IData)(__Vfunc_classify__2921__man_zero))) 
                                               << 4U)));
    __Vfunc_classify__2921__c = ((0x77U & (IData)(__Vfunc_classify__2921__c)) 
                                 | (8U & (((IData)(__Vfunc_classify__2921__c) 
                                           >> 1U) & 
                                          ((~ (__Vfunc_classify__2921__f 
                                               >> 0x00000016U)) 
                                           << 3U))));
    __Vfunc_classify__2921__c = ((0x7bU & (IData)(__Vfunc_classify__2921__c)) 
                                 | (4U & (((IData)(__Vfunc_classify__2921__c) 
                                           >> 2U) & 
                                          (__Vfunc_classify__2921__f 
                                           >> 0x00000014U))));
    __Vfunc_classify__2921__c = ((0x7eU & (IData)(__Vfunc_classify__2921__c)) 
                                 | (1U & ((~ (IData)(__Vfunc_classify__2921__exp_zero)) 
                                          & (~ (IData)(__Vfunc_classify__2921__exp_max)))));
    __Vfunc_classify__2921__Vfuncout = __Vfunc_classify__2921__c;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__a_cls 
        = __Vfunc_classify__2921__Vfuncout;
    __Vfunc_classify__2922__f = vlSelfRef.tb_fpu_top__DOT__operand_b;
    __Vfunc_classify__2922__c = 0;
    __Vfunc_classify__2922__exp_zero = (0U == (0x000000ffU 
                                               & (__Vfunc_classify__2922__f 
                                                  >> 0x00000017U)));
    __Vfunc_classify__2922__exp_max = (0xffU == (0x000000ffU 
                                                 & (__Vfunc_classify__2922__f 
                                                    >> 0x00000017U)));
    __Vfunc_classify__2922__man_zero = (0U == (0x007fffffU 
                                               & __Vfunc_classify__2922__f));
    __Vfunc_classify__2922__c = ((0x3fU & (IData)(__Vfunc_classify__2922__c)) 
                                 | (((IData)(__Vfunc_classify__2922__exp_zero) 
                                     & (IData)(__Vfunc_classify__2922__man_zero)) 
                                    << 6U));
    __Vfunc_classify__2922__c = ((0x7dU & (IData)(__Vfunc_classify__2922__c)) 
                                 | (((IData)(__Vfunc_classify__2922__exp_zero) 
                                     & (~ (IData)(__Vfunc_classify__2922__man_zero))) 
                                    << 1U));
    __Vfunc_classify__2922__c = ((0x4fU & (IData)(__Vfunc_classify__2922__c)) 
                                 | ((((IData)(__Vfunc_classify__2922__exp_max) 
                                      & (IData)(__Vfunc_classify__2922__man_zero)) 
                                     << 5U) | (((IData)(__Vfunc_classify__2922__exp_max) 
                                                & (~ (IData)(__Vfunc_classify__2922__man_zero))) 
                                               << 4U)));
    __Vfunc_classify__2922__c = ((0x77U & (IData)(__Vfunc_classify__2922__c)) 
                                 | (8U & (((IData)(__Vfunc_classify__2922__c) 
                                           >> 1U) & 
                                          ((~ (__Vfunc_classify__2922__f 
                                               >> 0x00000016U)) 
                                           << 3U))));
    __Vfunc_classify__2922__c = ((0x7bU & (IData)(__Vfunc_classify__2922__c)) 
                                 | (4U & (((IData)(__Vfunc_classify__2922__c) 
                                           >> 2U) & 
                                          (__Vfunc_classify__2922__f 
                                           >> 0x00000014U))));
    __Vfunc_classify__2922__c = ((0x7eU & (IData)(__Vfunc_classify__2922__c)) 
                                 | (1U & ((~ (IData)(__Vfunc_classify__2922__exp_zero)) 
                                          & (~ (IData)(__Vfunc_classify__2922__exp_max)))));
    __Vfunc_classify__2922__Vfuncout = __Vfunc_classify__2922__c;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__b_cls 
        = __Vfunc_classify__2922__Vfuncout;
    __Vfunc_classify__2925__f = vlSelfRef.tb_fpu_top__DOT__operand_a;
    __Vfunc_classify__2925__c = 0;
    __Vfunc_classify__2925__exp_zero = (0U == (0x000000ffU 
                                               & (__Vfunc_classify__2925__f 
                                                  >> 0x00000017U)));
    __Vfunc_classify__2925__exp_max = (0xffU == (0x000000ffU 
                                                 & (__Vfunc_classify__2925__f 
                                                    >> 0x00000017U)));
    __Vfunc_classify__2925__man_zero = (0U == (0x007fffffU 
                                               & __Vfunc_classify__2925__f));
    __Vfunc_classify__2925__c = ((0x3fU & (IData)(__Vfunc_classify__2925__c)) 
                                 | (((IData)(__Vfunc_classify__2925__exp_zero) 
                                     & (IData)(__Vfunc_classify__2925__man_zero)) 
                                    << 6U));
    __Vfunc_classify__2925__c = ((0x7dU & (IData)(__Vfunc_classify__2925__c)) 
                                 | (((IData)(__Vfunc_classify__2925__exp_zero) 
                                     & (~ (IData)(__Vfunc_classify__2925__man_zero))) 
                                    << 1U));
    __Vfunc_classify__2925__c = ((0x4fU & (IData)(__Vfunc_classify__2925__c)) 
                                 | ((((IData)(__Vfunc_classify__2925__exp_max) 
                                      & (IData)(__Vfunc_classify__2925__man_zero)) 
                                     << 5U) | (((IData)(__Vfunc_classify__2925__exp_max) 
                                                & (~ (IData)(__Vfunc_classify__2925__man_zero))) 
                                               << 4U)));
    __Vfunc_classify__2925__c = ((0x77U & (IData)(__Vfunc_classify__2925__c)) 
                                 | (8U & (((IData)(__Vfunc_classify__2925__c) 
                                           >> 1U) & 
                                          ((~ (__Vfunc_classify__2925__f 
                                               >> 0x00000016U)) 
                                           << 3U))));
    __Vfunc_classify__2925__c = ((0x7bU & (IData)(__Vfunc_classify__2925__c)) 
                                 | (4U & (((IData)(__Vfunc_classify__2925__c) 
                                           >> 2U) & 
                                          (__Vfunc_classify__2925__f 
                                           >> 0x00000014U))));
    __Vfunc_classify__2925__c = ((0x7eU & (IData)(__Vfunc_classify__2925__c)) 
                                 | (1U & ((~ (IData)(__Vfunc_classify__2925__exp_zero)) 
                                          & (~ (IData)(__Vfunc_classify__2925__exp_max)))));
    __Vfunc_classify__2925__Vfuncout = __Vfunc_classify__2925__c;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_cls 
        = __Vfunc_classify__2925__Vfuncout;
    __Vfunc_classify__2926__f = vlSelfRef.tb_fpu_top__DOT__operand_b;
    __Vfunc_classify__2926__c = 0;
    __Vfunc_classify__2926__exp_zero = (0U == (0x000000ffU 
                                               & (__Vfunc_classify__2926__f 
                                                  >> 0x00000017U)));
    __Vfunc_classify__2926__exp_max = (0xffU == (0x000000ffU 
                                                 & (__Vfunc_classify__2926__f 
                                                    >> 0x00000017U)));
    __Vfunc_classify__2926__man_zero = (0U == (0x007fffffU 
                                               & __Vfunc_classify__2926__f));
    __Vfunc_classify__2926__c = ((0x3fU & (IData)(__Vfunc_classify__2926__c)) 
                                 | (((IData)(__Vfunc_classify__2926__exp_zero) 
                                     & (IData)(__Vfunc_classify__2926__man_zero)) 
                                    << 6U));
    __Vfunc_classify__2926__c = ((0x7dU & (IData)(__Vfunc_classify__2926__c)) 
                                 | (((IData)(__Vfunc_classify__2926__exp_zero) 
                                     & (~ (IData)(__Vfunc_classify__2926__man_zero))) 
                                    << 1U));
    __Vfunc_classify__2926__c = ((0x4fU & (IData)(__Vfunc_classify__2926__c)) 
                                 | ((((IData)(__Vfunc_classify__2926__exp_max) 
                                      & (IData)(__Vfunc_classify__2926__man_zero)) 
                                     << 5U) | (((IData)(__Vfunc_classify__2926__exp_max) 
                                                & (~ (IData)(__Vfunc_classify__2926__man_zero))) 
                                               << 4U)));
    __Vfunc_classify__2926__c = ((0x77U & (IData)(__Vfunc_classify__2926__c)) 
                                 | (8U & (((IData)(__Vfunc_classify__2926__c) 
                                           >> 1U) & 
                                          ((~ (__Vfunc_classify__2926__f 
                                               >> 0x00000016U)) 
                                           << 3U))));
    __Vfunc_classify__2926__c = ((0x7bU & (IData)(__Vfunc_classify__2926__c)) 
                                 | (4U & (((IData)(__Vfunc_classify__2926__c) 
                                           >> 2U) & 
                                          (__Vfunc_classify__2926__f 
                                           >> 0x00000014U))));
    __Vfunc_classify__2926__c = ((0x7eU & (IData)(__Vfunc_classify__2926__c)) 
                                 | (1U & ((~ (IData)(__Vfunc_classify__2926__exp_zero)) 
                                          & (~ (IData)(__Vfunc_classify__2926__exp_max)))));
    __Vfunc_classify__2926__Vfuncout = __Vfunc_classify__2926__c;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_cls 
        = __Vfunc_classify__2926__Vfuncout;
    __Vfunc_classify__2917__f = vlSelfRef.tb_fpu_top__DOT__operand_a;
    __Vfunc_classify__2917__c = 0;
    __Vfunc_classify__2917__exp_zero = (0U == (0x000000ffU 
                                               & (__Vfunc_classify__2917__f 
                                                  >> 0x00000017U)));
    __Vfunc_classify__2917__exp_max = (0xffU == (0x000000ffU 
                                                 & (__Vfunc_classify__2917__f 
                                                    >> 0x00000017U)));
    __Vfunc_classify__2917__man_zero = (0U == (0x007fffffU 
                                               & __Vfunc_classify__2917__f));
    __Vfunc_classify__2917__c = ((0x3fU & (IData)(__Vfunc_classify__2917__c)) 
                                 | (((IData)(__Vfunc_classify__2917__exp_zero) 
                                     & (IData)(__Vfunc_classify__2917__man_zero)) 
                                    << 6U));
    __Vfunc_classify__2917__c = ((0x7dU & (IData)(__Vfunc_classify__2917__c)) 
                                 | (((IData)(__Vfunc_classify__2917__exp_zero) 
                                     & (~ (IData)(__Vfunc_classify__2917__man_zero))) 
                                    << 1U));
    __Vfunc_classify__2917__c = ((0x4fU & (IData)(__Vfunc_classify__2917__c)) 
                                 | ((((IData)(__Vfunc_classify__2917__exp_max) 
                                      & (IData)(__Vfunc_classify__2917__man_zero)) 
                                     << 5U) | (((IData)(__Vfunc_classify__2917__exp_max) 
                                                & (~ (IData)(__Vfunc_classify__2917__man_zero))) 
                                               << 4U)));
    __Vfunc_classify__2917__c = ((0x77U & (IData)(__Vfunc_classify__2917__c)) 
                                 | (8U & (((IData)(__Vfunc_classify__2917__c) 
                                           >> 1U) & 
                                          ((~ (__Vfunc_classify__2917__f 
                                               >> 0x00000016U)) 
                                           << 3U))));
    __Vfunc_classify__2917__c = ((0x7bU & (IData)(__Vfunc_classify__2917__c)) 
                                 | (4U & (((IData)(__Vfunc_classify__2917__c) 
                                           >> 2U) & 
                                          (__Vfunc_classify__2917__f 
                                           >> 0x00000014U))));
    __Vfunc_classify__2917__c = ((0x7eU & (IData)(__Vfunc_classify__2917__c)) 
                                 | (1U & ((~ (IData)(__Vfunc_classify__2917__exp_zero)) 
                                          & (~ (IData)(__Vfunc_classify__2917__exp_max)))));
    __Vfunc_classify__2917__Vfuncout = __Vfunc_classify__2917__c;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__a_cls 
        = __Vfunc_classify__2917__Vfuncout;
    __Vfunc_classify__2918__f = vlSelfRef.tb_fpu_top__DOT__operand_b;
    __Vfunc_classify__2918__c = 0;
    __Vfunc_classify__2918__exp_zero = (0U == (0x000000ffU 
                                               & (__Vfunc_classify__2918__f 
                                                  >> 0x00000017U)));
    __Vfunc_classify__2918__exp_max = (0xffU == (0x000000ffU 
                                                 & (__Vfunc_classify__2918__f 
                                                    >> 0x00000017U)));
    __Vfunc_classify__2918__man_zero = (0U == (0x007fffffU 
                                               & __Vfunc_classify__2918__f));
    __Vfunc_classify__2918__c = ((0x3fU & (IData)(__Vfunc_classify__2918__c)) 
                                 | (((IData)(__Vfunc_classify__2918__exp_zero) 
                                     & (IData)(__Vfunc_classify__2918__man_zero)) 
                                    << 6U));
    __Vfunc_classify__2918__c = ((0x7dU & (IData)(__Vfunc_classify__2918__c)) 
                                 | (((IData)(__Vfunc_classify__2918__exp_zero) 
                                     & (~ (IData)(__Vfunc_classify__2918__man_zero))) 
                                    << 1U));
    __Vfunc_classify__2918__c = ((0x4fU & (IData)(__Vfunc_classify__2918__c)) 
                                 | ((((IData)(__Vfunc_classify__2918__exp_max) 
                                      & (IData)(__Vfunc_classify__2918__man_zero)) 
                                     << 5U) | (((IData)(__Vfunc_classify__2918__exp_max) 
                                                & (~ (IData)(__Vfunc_classify__2918__man_zero))) 
                                               << 4U)));
    __Vfunc_classify__2918__c = ((0x77U & (IData)(__Vfunc_classify__2918__c)) 
                                 | (8U & (((IData)(__Vfunc_classify__2918__c) 
                                           >> 1U) & 
                                          ((~ (__Vfunc_classify__2918__f 
                                               >> 0x00000016U)) 
                                           << 3U))));
    __Vfunc_classify__2918__c = ((0x7bU & (IData)(__Vfunc_classify__2918__c)) 
                                 | (4U & (((IData)(__Vfunc_classify__2918__c) 
                                           >> 2U) & 
                                          (__Vfunc_classify__2918__f 
                                           >> 0x00000014U))));
    __Vfunc_classify__2918__c = ((0x7eU & (IData)(__Vfunc_classify__2918__c)) 
                                 | (1U & ((~ (IData)(__Vfunc_classify__2918__exp_zero)) 
                                          & (~ (IData)(__Vfunc_classify__2918__exp_max)))));
    __Vfunc_classify__2918__Vfuncout = __Vfunc_classify__2918__c;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_cls 
        = __Vfunc_classify__2918__Vfuncout;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__a_man 
        = ((([&]() {
                    vlSelfRef.__Vfunc_leading_bit__2923__f 
                        = vlSelfRef.tb_fpu_top__DOT__operand_a;
                    vlSelfRef.__Vfunc_leading_bit__2923__Vfuncout 
                        = (0U != (0x000000ffU & (vlSelfRef.__Vfunc_leading_bit__2923__f 
                                                 >> 0x00000017U)));
                }(), (IData)(vlSelfRef.__Vfunc_leading_bit__2923__Vfuncout)) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.tb_fpu_top__DOT__operand_a));
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__b_man 
        = ((([&]() {
                    vlSelfRef.__Vfunc_leading_bit__2924__f 
                        = vlSelfRef.tb_fpu_top__DOT__operand_b;
                    vlSelfRef.__Vfunc_leading_bit__2924__Vfuncout 
                        = (0U != (0x000000ffU & (vlSelfRef.__Vfunc_leading_bit__2924__f 
                                                 >> 0x00000017U)));
                }(), (IData)(vlSelfRef.__Vfunc_leading_bit__2924__Vfuncout)) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.tb_fpu_top__DOT__operand_b));
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__magnitude 
        = ((vlSelfRef.tb_fpu_top__DOT__operand_a >> 0x0000001fU)
            ? ((IData)(1U) + (~ vlSelfRef.tb_fpu_top__DOT__operand_a))
            : vlSelfRef.tb_fpu_top__DOT__operand_a);
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
        = ((([&]() {
                    vlSelfRef.__Vfunc_leading_bit__2927__f 
                        = vlSelfRef.tb_fpu_top__DOT__operand_a;
                    vlSelfRef.__Vfunc_leading_bit__2927__Vfuncout 
                        = (0U != (0x000000ffU & (vlSelfRef.__Vfunc_leading_bit__2927__f 
                                                 >> 0x00000017U)));
                }(), (IData)(vlSelfRef.__Vfunc_leading_bit__2927__Vfuncout)) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.tb_fpu_top__DOT__operand_a));
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man 
        = ((([&]() {
                    vlSelfRef.__Vfunc_leading_bit__2928__f 
                        = vlSelfRef.tb_fpu_top__DOT__operand_b;
                    vlSelfRef.__Vfunc_leading_bit__2928__Vfuncout 
                        = (0U != (0x000000ffU & (vlSelfRef.__Vfunc_leading_bit__2928__f 
                                                 >> 0x00000017U)));
                }(), (IData)(vlSelfRef.__Vfunc_leading_bit__2928__Vfuncout)) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.tb_fpu_top__DOT__operand_b));
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_sign_eff 
        = ((vlSelfRef.tb_fpu_top__DOT__operand_b >> 0x0000001fU) 
           ^ (1U == (IData)(vlSelfRef.tb_fpu_top__DOT__op)));
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__a_man 
        = ((([&]() {
                    vlSelfRef.__Vfunc_leading_bit__2919__f 
                        = vlSelfRef.tb_fpu_top__DOT__operand_a;
                    vlSelfRef.__Vfunc_leading_bit__2919__Vfuncout 
                        = (0U != (0x000000ffU & (vlSelfRef.__Vfunc_leading_bit__2919__f 
                                                 >> 0x00000017U)));
                }(), (IData)(vlSelfRef.__Vfunc_leading_bit__2919__Vfuncout)) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.tb_fpu_top__DOT__operand_a));
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_man 
        = ((([&]() {
                    vlSelfRef.__Vfunc_leading_bit__2920__f 
                        = vlSelfRef.tb_fpu_top__DOT__operand_b;
                    vlSelfRef.__Vfunc_leading_bit__2920__Vfuncout 
                        = (0U != (0x000000ffU & (vlSelfRef.__Vfunc_leading_bit__2920__f 
                                                 >> 0x00000017U)));
                }(), (IData)(vlSelfRef.__Vfunc_leading_bit__2920__Vfuncout)) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.tb_fpu_top__DOT__operand_b));
    tb_fpu_top__DOT__u_dut__DOT__f2i_flags = 0U;
    if ((0x00000010U & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__f_cls))) {
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__f2i_result = 0x7fffffffU;
        tb_fpu_top__DOT__u_dut__DOT__f2i_flags = (0x00000010U 
                                                  | (IData)(tb_fpu_top__DOT__u_dut__DOT__f2i_flags));
    } else if ((1U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__f_cls) 
                       >> 5U) | VL_LTES_III(32, 0x0000001fU, 
                                            VL_EXTENDS_II(32,9, 
                                                          (0x000001ffU 
                                                           & ((0x000000ffU 
                                                               & (vlSelfRef.tb_fpu_top__DOT__operand_a 
                                                                  >> 0x00000017U)) 
                                                              - (IData)(0x007fU)))))))) {
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__f2i_result 
            = ((vlSelfRef.tb_fpu_top__DOT__operand_a 
                >> 0x0000001fU) ? 0x80000000U : 0x7fffffffU);
        tb_fpu_top__DOT__u_dut__DOT__f2i_flags = (0x00000010U 
                                                  | (IData)(tb_fpu_top__DOT__u_dut__DOT__f2i_flags));
    } else if ((1U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__f_cls) 
                       >> 6U) | VL_GTS_III(32, 0U, 
                                           VL_EXTENDS_II(32,9, 
                                                         (0x000001ffU 
                                                          & ((0x000000ffU 
                                                              & (vlSelfRef.tb_fpu_top__DOT__operand_a 
                                                                 >> 0x00000017U)) 
                                                             - (IData)(0x007fU)))))))) {
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__f2i_result = 0U;
        tb_fpu_top__DOT__u_dut__DOT__f2i_flags = ((0x1eU 
                                                   & (IData)(tb_fpu_top__DOT__u_dut__DOT__f2i_flags)) 
                                                  | (1U 
                                                     & (~ 
                                                        ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__f_cls) 
                                                         >> 6U))));
    } else {
        if (VL_LTES_III(32, 0x00000017U, VL_EXTENDS_II(32,9, 
                                                       (0x000001ffU 
                                                        & ((0x000000ffU 
                                                            & (vlSelfRef.tb_fpu_top__DOT__operand_a 
                                                               >> 0x00000017U)) 
                                                           - (IData)(0x007fU)))))) {
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__mag 
                = VL_SHIFTL_III(32,32,32, tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__man, 
                                (VL_EXTENDS_II(32,9, 
                                               (0x000001ffU 
                                                & ((0x000000ffU 
                                                    & (vlSelfRef.tb_fpu_top__DOT__operand_a 
                                                       >> 0x00000017U)) 
                                                   - (IData)(0x007fU)))) 
                                 - (IData)(0x00000017U)));
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__round_needed = 0U;
        } else {
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__unnamedblk1__DOT__shift_right 
                = ((IData)(0x00000017U) - VL_EXTENDS_II(32,9, 
                                                        (0x000001ffU 
                                                         & ((0x000000ffU 
                                                             & (vlSelfRef.tb_fpu_top__DOT__operand_a 
                                                                >> 0x00000017U)) 
                                                            - (IData)(0x007fU)))));
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__mag 
                = VL_SHIFTR_III(32,32,32, tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__man, vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__unnamedblk1__DOT__shift_right);
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__frac_mask 
                = (0x00ffffffU & (VL_SHIFTL_III(24,32,32, (IData)(1U), vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__unnamedblk1__DOT__shift_right) 
                                  - (IData)(1U)));
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__round_needed 
                = (0U != (tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__man 
                          & vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__frac_mask));
        }
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__f2i_result 
            = ((vlSelfRef.tb_fpu_top__DOT__operand_a 
                >> 0x0000001fU) ? ((IData)(1U) + (~ vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__mag))
                : vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__mag);
        tb_fpu_top__DOT__u_dut__DOT__f2i_flags = ((0x1eU 
                                                   & (IData)(tb_fpu_top__DOT__u_dut__DOT__f2i_flags)) 
                                                  | (IData)(vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__round_needed));
    }
    vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT____VdfgExtracted_h71418064__3 
        = (1U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_cls) 
                  | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__b_cls)) 
                 >> 4U));
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT____VdfgExtracted_h7599d26d__0 
        = (1U & ((((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__a_cls) 
                   >> 5U) & ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__b_cls) 
                             >> 6U)) | (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__b_cls) 
                                         >> 5U) & ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__a_cls) 
                                                   >> 6U))));
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT____VdfgExtracted_h7139edbd__0 
        = (1U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__a_cls) 
                  | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__b_cls)) 
                 >> 6U));
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT____VdfgExtracted_h71418064__1 
        = (1U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__a_cls) 
                  | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__b_cls)) 
                 >> 4U));
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT____VdfgExtracted_h714192b3__1 
        = (1U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__a_cls) 
                  | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__b_cls)) 
                 >> 5U));
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_h71418064__2 
        = (1U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_cls) 
                  | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_cls)) 
                 >> 4U));
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_h71698a14__1 
        = (1U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_cls) 
                  & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_cls)) 
                 >> 5U));
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_h7174ff16__1 
        = (1U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_cls) 
                  & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_cls)) 
                 >> 6U));
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgExtracted_h71698a14__0 
        = (1U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__a_cls) 
                  & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_cls)) 
                 >> 5U));
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgExtracted_h7174ff16__0 
        = (1U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__a_cls) 
                  & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_cls)) 
                 >> 6U));
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgExtracted_h71418064__0 
        = (1U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__a_cls) 
                  | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_cls)) 
                 >> 4U));
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgExtracted_h714192b3__0 
        = (1U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__a_cls) 
                  | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_cls)) 
                 >> 5U));
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__prod = 
        (0x0000ffffffffffffULL & ((QData)((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__a_man)) 
                                  * (QData)((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__b_man))));
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__lz = 0U;
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__all_zero 
        = (0U == tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__magnitude);
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__unnamedblk1__DOT__i = 0x0000001fU;
    {
        while (VL_LTES_III(32, 0U, tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__unnamedblk1__DOT__i)) {
            if ((1U & (tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__magnitude 
                       >> (0x0000001fU & tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__unnamedblk1__DOT__i)))) {
                tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__lz 
                    = (0x0000001fU & ((IData)(0x1fU) 
                                      - tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__unnamedblk1__DOT__i));
                goto __Vlabel0;
            }
            tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__unnamedblk1__DOT__i 
                = (tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel0: ;
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient = 0U;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                 >> 0x17U));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x02000000U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x01ffffffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 0x16U)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x01000000U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x02ffffffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 0x15U)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00800000U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x037fffffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 0x14U)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00400000U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03bfffffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 0x13U)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00200000U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03dfffffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 0x12U)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00100000U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03efffffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 0x11U)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00080000U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03f7ffffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 0x10U)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00040000U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03fbffffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 0x0fU)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00020000U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03fdffffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 0x0eU)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00010000U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03feffffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 0x0dU)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00008000U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03ff7fffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 0x0cU)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00004000U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03ffbfffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 0x0bU)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00002000U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03ffdfffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 0x0aU)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00001000U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03ffefffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 9U)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00000800U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03fff7ffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 8U)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00000400U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03fffbffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 7U)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00000200U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03fffdffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 6U)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00000100U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03fffeffU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 5U)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00000080U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03ffff7fU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 4U)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00000040U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03ffffbfU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 3U)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00000020U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03ffffdfU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 2U)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x00000010U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03ffffefU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man 
                                            >> 1U)));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (8U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03fffff7U & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = ((0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                           << 1U)) | (1U & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_man));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (4U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03fffffbU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = (0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                          << 1U));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (2U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03fffffdU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
        = (0x01fffffeU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                          << 1U));
    if ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
         >= tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
            = (0x01ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder 
                              - tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_man));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (1U | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            = (0x03fffffeU & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__remainder_nonzero 
        = (0U != tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__unnamedblk1__DOT__remainder);
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__eff_sub 
        = ((vlSelfRef.tb_fpu_top__DOT__operand_a >> 0x0000001fU) 
           ^ (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_sign_eff));
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__swap = 
        (((0x000000ffU & (vlSelfRef.tb_fpu_top__DOT__operand_b 
                          >> 0x00000017U)) > (0x000000ffU 
                                              & (vlSelfRef.tb_fpu_top__DOT__operand_a 
                                                 >> 0x00000017U))) 
         | (((0x000000ffU & (vlSelfRef.tb_fpu_top__DOT__operand_b 
                             >> 0x00000017U)) == (0x000000ffU 
                                                  & (vlSelfRef.tb_fpu_top__DOT__operand_a 
                                                     >> 0x00000017U))) 
            & (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_man 
               > tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__a_man)));
    vlSelfRef.tb_fpu_top__DOT__int_result = 0U;
    vlSelfRef.tb_fpu_top__DOT__cmp_lt = 0U;
    vlSelfRef.tb_fpu_top__DOT__cmp_eq = 0U;
    vlSelfRef.tb_fpu_top__DOT__cmp_gt = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT____VdfgExtracted_h71418064__3)))) {
        if ((0x00000040U & ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_cls) 
                            & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__b_cls)))) {
            vlSelfRef.tb_fpu_top__DOT__cmp_eq = 1U;
        } else {
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_neg 
                = (vlSelfRef.tb_fpu_top__DOT__operand_a 
                   >> 0x0000001fU);
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__b_neg 
                = (vlSelfRef.tb_fpu_top__DOT__operand_b 
                   >> 0x0000001fU);
            if (((IData)(vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_neg) 
                 != (IData)(vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__b_neg))) {
                vlSelfRef.tb_fpu_top__DOT__cmp_lt = vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_neg;
                vlSelfRef.tb_fpu_top__DOT__cmp_gt = vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__b_neg;
            } else {
                vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_mag_lt 
                    = (((0x000000ffU & (vlSelfRef.tb_fpu_top__DOT__operand_a 
                                        >> 0x00000017U)) 
                        < (0x000000ffU & (vlSelfRef.tb_fpu_top__DOT__operand_b 
                                          >> 0x00000017U))) 
                       | ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT____VdfgRegularize_h0bcd6bd5_0_0) 
                          & ((0x007fffffU & vlSelfRef.tb_fpu_top__DOT__operand_a) 
                             < (0x007fffffU & vlSelfRef.tb_fpu_top__DOT__operand_b))));
                vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_mag_eq 
                    = ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT____VdfgRegularize_h0bcd6bd5_0_0) 
                       & ((0x007fffffU & vlSelfRef.tb_fpu_top__DOT__operand_a) 
                          == (0x007fffffU & vlSelfRef.tb_fpu_top__DOT__operand_b)));
                if (vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_mag_eq) {
                    vlSelfRef.tb_fpu_top__DOT__cmp_eq = 1U;
                } else if (vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_neg) {
                    vlSelfRef.tb_fpu_top__DOT__cmp_lt 
                        = (1U & (~ (IData)(vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_mag_lt)));
                    vlSelfRef.tb_fpu_top__DOT__cmp_gt 
                        = vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_mag_lt;
                } else {
                    vlSelfRef.tb_fpu_top__DOT__cmp_lt 
                        = vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_mag_lt;
                    vlSelfRef.tb_fpu_top__DOT__cmp_gt 
                        = (1U & (~ (IData)(vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_mag_lt)));
                }
            }
        }
    }
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__special_flags = 0U;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__special_result = 0U;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__use_special = 0U;
    if (tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT____VdfgExtracted_h71418064__1) {
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__special_flags 
            = ((0x0fU & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__special_flags)) 
               | (0x00000010U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__a_cls) 
                                  | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__b_cls)) 
                                 << 1U)));
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__special_result = 0x7fc00000U;
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__use_special = 1U;
    } else if (tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT____VdfgExtracted_h714192b3__1) {
        if (tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT____VdfgExtracted_h7599d26d__0) {
            tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__special_flags 
                = (0x00000010U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__special_flags));
            tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__special_result = 0x7fc00000U;
        } else {
            tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__special_result 
                = (0x7f800000U | ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign) 
                                  << 0x0000001fU));
        }
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__use_special = 1U;
    } else if (tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT____VdfgExtracted_h7139edbd__0) {
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__special_result 
            = ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign) 
               << 0x0000001fU);
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__use_special = 1U;
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_flags = 0U;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_result = 0U;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__use_special = 0U;
    if (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_h71418064__2) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_flags 
            = ((0x0fU & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_flags)) 
               | (0x00000010U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_cls) 
                                  | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_cls)) 
                                 << 1U)));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_result = 0x7fc00000U;
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__use_special = 1U;
    } else if (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_h71698a14__1) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_flags 
            = (0x00000010U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_flags));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_result = 0x7fc00000U;
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__use_special = 1U;
    } else {
        if ((1U & (~ ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_cls) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_cls) 
                          >> 5U)))) {
                if (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_h7174ff16__1) {
                    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_flags 
                        = (0x00000010U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_flags));
                } else if ((0x00000040U & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_cls))) {
                    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_flags 
                        = (8U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_flags));
                }
            }
        }
        if ((0x00000020U & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_cls))) {
            tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_result 
                = (0x7f800000U | ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign) 
                                  << 0x0000001fU));
            tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__use_special = 1U;
        } else if ((0x00000020U & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_cls))) {
            tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_result 
                = ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign) 
                   << 0x0000001fU);
            tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__use_special = 1U;
        } else if (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_h7174ff16__1) {
            tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_result = 0x7fc00000U;
            tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__use_special = 1U;
        } else if ((0x00000040U & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__b_cls))) {
            tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_result 
                = (0x7f800000U | ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign) 
                                  << 0x0000001fU));
            tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__use_special = 1U;
        } else if ((0x00000040U & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__a_cls))) {
            tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_result 
                = ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign) 
                   << 0x0000001fU);
            tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__use_special = 1U;
        }
    }
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__use_special = 0U;
    if ((1U & (IData)((tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__prod 
                       >> 0x0000002fU)))) {
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_man 
            = (0x00ffffffU & (IData)((tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__prod 
                                      >> 0x00000018U)));
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__guard 
            = (1U & (IData)((tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__prod 
                             >> 0x00000016U)));
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__round_bit 
            = (1U & (IData)((tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__prod 
                             >> 0x00000015U)));
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__sticky 
            = (0U != (0x001fffffU & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__prod)));
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_man 
            = (0x00ffffffU & (IData)((tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__prod 
                                      >> 0x00000017U)));
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__guard 
            = (1U & (IData)((tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__prod 
                             >> 0x00000015U)));
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__round_bit 
            = (1U & (IData)((tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__prod 
                             >> 0x00000014U)));
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__sticky 
            = (0U != (0x000fffffU & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__prod)));
    }
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__sticky 
        = (0U != (0x0000003fU & (tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__magnitude 
                                 << (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__lz))));
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__shifted 
        = (tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__magnitude 
           << (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__lz));
    if ((0x02000000U & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient)) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__res_man 
            = (0x00ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
                              >> 2U));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__guard 
            = (1U & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
                     >> 1U));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__round_bit 
            = (1U & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__res_man 
            = (0x00ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
                              >> 1U));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__guard 
            = (1U & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient);
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__round_bit 
            = (1U & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__remainder_nonzero));
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__sticky 
        = ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient 
            >> 0x00000019U) & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__remainder_nonzero));
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_flags = 0U;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_result = 0U;
    if (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgExtracted_h71418064__0) {
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__use_special = 1U;
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_flags 
            = ((0x0fU & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_flags)) 
               | (0x00000010U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__a_cls) 
                                  | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_cls)) 
                                 << 1U)));
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_result = 0x7fc00000U;
    } else if (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgExtracted_h714192b3__0) {
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__use_special = 1U;
        if (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgExtracted_h71698a14__0) {
            if (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__eff_sub) {
                tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_flags 
                    = (0x00000010U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_flags));
                tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_result = 0x7fc00000U;
            } else {
                tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_result 
                    = (0x7f800000U | (0x80000000U & vlSelfRef.tb_fpu_top__DOT__operand_a));
            }
        } else {
            tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_result 
                = ((0x00000020U & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__a_cls))
                    ? (0x7f800000U | (0x80000000U & vlSelfRef.tb_fpu_top__DOT__operand_a))
                    : (0x7f800000U | ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_sign_eff) 
                                      << 0x0000001fU)));
        }
    } else if (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgExtracted_h7174ff16__0) {
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__use_special = 1U;
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_result 
            = (((vlSelfRef.tb_fpu_top__DOT__operand_a 
                 >> 0x0000001fU) == (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_sign_eff))
                ? (0x80000000U & vlSelfRef.tb_fpu_top__DOT__operand_a)
                : ((2U == (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode)) 
                   << 0x0000001fU));
    } else if ((0x00000040U & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__a_cls))) {
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__use_special = 1U;
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_result 
            = (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_sign_eff) 
                << 0x0000001fU) | (0x7fffffffU & vlSelfRef.tb_fpu_top__DOT__operand_b));
    } else if ((0x00000040U & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_cls))) {
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__use_special = 1U;
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_result 
            = vlSelfRef.tb_fpu_top__DOT__operand_a;
    }
    if (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__swap) {
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__large_exp 
            = (0x000000ffU & (vlSelfRef.tb_fpu_top__DOT__operand_b 
                              >> 0x00000017U));
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__small_man 
            = tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__a_man;
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__exp_diff 
            = (0x000003ffU & ((0x000000ffU & (vlSelfRef.tb_fpu_top__DOT__operand_b 
                                              >> 0x00000017U)) 
                              - (0x000000ffU & (vlSelfRef.tb_fpu_top__DOT__operand_a 
                                                >> 0x00000017U))));
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_sign 
            = (1U & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_sign_eff));
    } else {
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__large_exp 
            = (0x000000ffU & (vlSelfRef.tb_fpu_top__DOT__operand_a 
                              >> 0x00000017U));
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__small_man 
            = tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_man;
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__exp_diff 
            = (0x000003ffU & ((0x000000ffU & (vlSelfRef.tb_fpu_top__DOT__operand_a 
                                              >> 0x00000017U)) 
                              - (0x000000ffU & (vlSelfRef.tb_fpu_top__DOT__operand_b 
                                                >> 0x00000017U))));
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_sign 
            = (1U & (vlSelfRef.tb_fpu_top__DOT__operand_a 
                     >> 0x0000001fU));
    }
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgRegularize_he9b033c2_0_1 
        = (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__swap)
             ? tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__b_man
             : tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__a_man) 
           << 3U);
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__u_round__DOT__inexact 
        = ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__guard) 
           | ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__round_bit) 
              | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__sticky)));
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__u_round__DOT__inexact 
        = (1U & (IData)(((0U != (0x000000c0U & tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__shifted)) 
                         | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__sticky))));
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__u_round__DOT__inexact 
        = ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__guard) 
           | ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__round_bit) 
              | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__sticky)));
    if ((0U == (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__exp_diff))) {
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__small_ext 
            = (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__small_man 
               << 3U);
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sticky_bits = 0U;
    } else if ((0x001bU <= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__exp_diff))) {
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__small_ext = 0U;
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sticky_bits 
            = (0U != tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__small_man);
    } else {
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__pre_shift_val 
            = (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__small_man 
               << 3U);
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sticky_mask 
            = (0x07ffffffU & (VL_SHIFTL_III(27,32,10, (IData)(1U), (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__exp_diff)) 
                              - (IData)(1U)));
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sticky_bits 
            = (0U != (vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__pre_shift_val 
                      & vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sticky_mask));
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__small_ext 
            = VL_SHIFTR_III(27,27,10, vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__pre_shift_val, (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__exp_diff));
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__small_ext 
            = ((0x07fffffeU & vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__small_ext) 
               | (1U & (vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__small_ext 
                        | (IData)(vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sticky_bits))));
    }
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sum = 
        (0x0fffffffU & ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__eff_sub)
                         ? (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgRegularize_he9b033c2_0_1 
                            - vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__small_ext)
                         : (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT____VdfgRegularize_he9b033c2_0_1 
                            + vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__small_ext)));
    __VdfgRegularize_hebeb780c_0_6 = ((2U & (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                       ? ((1U & (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                           ? ((~ (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign)) 
                                              & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__u_round__DOT__inexact))
                                           : ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign) 
                                              & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__u_round__DOT__inexact)))
                                       : ((~ (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode)) 
                                          & ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__guard) 
                                             & ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__round_bit) 
                                                | ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__sticky) 
                                                   | tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_man)))));
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__u_round__DOT__exp_adj 
        = (0x000003ffU & ((((VL_EXTENDS_II(10,10, (0x000000ffU 
                                                   & (vlSelfRef.tb_fpu_top__DOT__operand_a 
                                                      >> 0x00000017U))) 
                             + VL_EXTENDS_II(10,10, 
                                             (0x000000ffU 
                                              & (vlSelfRef.tb_fpu_top__DOT__operand_b 
                                                 >> 0x00000017U)))) 
                            - (IData)(0x007fU)) + (1U 
                                                   & (IData)(
                                                             (tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__prod 
                                                              >> 0x0000002fU)))) 
                          + (1U & ((tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_man 
                                    + __VdfgRegularize_hebeb780c_0_6) 
                                   >> 0x00000018U))));
    __VdfgRegularize_hebeb780c_0_4 = (1U & ((2U & (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                                 ? 
                                                ((~ 
                                                  (vlSelfRef.tb_fpu_top__DOT__operand_a 
                                                   >> 0x0000001fU)) 
                                                 & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__u_round__DOT__inexact))
                                                 : 
                                                ((vlSelfRef.tb_fpu_top__DOT__operand_a 
                                                  >> 0x0000001fU) 
                                                 & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__u_round__DOT__inexact)))
                                             : ((~ (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode)) 
                                                & ((tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__shifted 
                                                    >> 7U) 
                                                   & (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x00000140U 
                                                                & tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__shifted)) 
                                                              | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__sticky)))))));
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__u_round__DOT__exp_adj 
        = (0x000003ffU & (((IData)(0x009eU) - (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__lz)) 
                          + (1U & (((0x00800000U | 
                                     (0x007fffffU & 
                                      (tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__shifted 
                                       >> 8U))) + __VdfgRegularize_hebeb780c_0_4) 
                                   >> 0x00000018U))));
    __VdfgRegularize_hebeb780c_0_5 = ((2U & (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                       ? ((1U & (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                           ? ((~ (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign)) 
                                              & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__u_round__DOT__inexact))
                                           : ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign) 
                                              & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__u_round__DOT__inexact)))
                                       : ((~ (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode)) 
                                          & ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__guard) 
                                             & ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__round_bit) 
                                                | ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__sticky) 
                                                   | tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__res_man)))));
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__u_round__DOT__exp_adj 
        = (0x000003ffU & (((0x02000000U & tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__quotient)
                            ? (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_hec867e7b__1)
                            : ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT____VdfgExtracted_hec867e7b__1) 
                               - (IData)(1U))) + (1U 
                                                  & ((tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__res_man 
                                                      + __VdfgRegularize_hebeb780c_0_5) 
                                                     >> 0x00000018U))));
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__result_is_zero 
        = ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__eff_sub) 
           & (0U == tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sum));
    if ((4U & (IData)(vlSelfRef.tb_fpu_top__DOT__op))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_fpu_top__DOT__op) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tb_fpu_top__DOT__op))) {
                vlSelfRef.tb_fpu_top__DOT__int_result 
                    = vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__f2i_result;
            }
        }
    }
    if ((0x08000000U & tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sum)) {
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_man 
            = (0x00ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sum 
                              >> 4U));
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__guard 
            = (1U & (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sum 
                     >> 3U));
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__round_bit 
            = (1U & (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sum 
                     >> 2U));
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sticky 
            = (IData)((0U != (3U & tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sum)));
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_exp 
            = (0x000003ffU & ((IData)(1U) + (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__large_exp)));
    } else {
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__lz = 0U;
        vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x0000001aU;
        {
            while (VL_LTES_III(32, 0U, vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
                if (((0x1bU >= (0x0000001fU & vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) 
                     && (1U & (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sum 
                               >> (0x0000001fU & vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
                    goto __Vlabel1;
                }
                vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__lz 
                    = ((IData)(1U) + vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__lz);
                vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                    = (vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
        if ((0U == vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__lz)) {
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_man 
                = (0x00ffffffU & (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sum 
                                  >> 3U));
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__guard 
                = (1U & (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sum 
                         >> 2U));
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__round_bit 
                = (1U & (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sum 
                         >> 1U));
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sticky 
                = (1U & tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sum);
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_exp 
                = tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__large_exp;
        } else {
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__unnamedblk3__DOT__shifted_sum 
                = (0x0fffffffU & VL_SHIFTL_III(28,28,32, tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sum, vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__lz));
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_man 
                = (0x00ffffffU & (vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__unnamedblk3__DOT__shifted_sum 
                                  >> 3U));
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__guard 
                = (1U & (vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__unnamedblk3__DOT__shifted_sum 
                         >> 2U));
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__round_bit 
                = (1U & (vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__unnamedblk3__DOT__shifted_sum 
                         >> 1U));
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sticky 
                = (1U & vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__unnamedblk3__DOT__shifted_sum);
            vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_exp 
                = (0x000003ffU & ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__large_exp) 
                                  - vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__lz));
        }
    }
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__rounded_flags = 0U;
    tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__rounded_flags 
        = ((0x1eU & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__rounded_flags)) 
           | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__u_round__DOT__inexact));
    if ((0x00ffU <= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__u_round__DOT__exp_adj))) {
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__rounded_flags 
            = (4U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__rounded_flags));
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__rounded_flags 
            = (1U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__rounded_flags));
    } else if ((0U >= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__u_round__DOT__exp_adj))) {
        tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__rounded_flags 
            = (3U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__rounded_flags));
    }
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__rounded_flags = 0U;
    tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__rounded_flags 
        = ((0x1eU & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__rounded_flags)) 
           | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__u_round__DOT__inexact));
    if ((0x00ffU <= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__u_round__DOT__exp_adj))) {
        tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__rounded_flags 
            = (4U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__rounded_flags));
        tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__rounded_flags 
            = (1U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__rounded_flags));
    } else if ((0U >= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__u_round__DOT__exp_adj))) {
        tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__rounded_flags 
            = (3U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__rounded_flags));
    }
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__rounded_flags = 0U;
    tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__rounded_flags 
        = ((0x1eU & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__rounded_flags)) 
           | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__u_round__DOT__inexact));
    if ((0x00ffU <= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__u_round__DOT__exp_adj))) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__rounded_flags 
            = (4U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__rounded_flags));
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__rounded_flags 
            = (1U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__rounded_flags));
    } else if ((0U >= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__u_round__DOT__exp_adj))) {
        tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__rounded_flags 
            = (3U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__rounded_flags));
    }
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__u_round__DOT__inexact 
        = ((IData)(vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__guard) 
           | ((IData)(vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__round_bit) 
              | (IData)(vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sticky)));
    __VdfgRegularize_hebeb780c_0_7 = ((2U & (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                       ? ((1U & (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                           ? ((~ (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_sign)) 
                                              & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__u_round__DOT__inexact))
                                           : ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_sign) 
                                              & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__u_round__DOT__inexact)))
                                       : ((~ (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode)) 
                                          & ((IData)(vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__guard) 
                                             & ((IData)(vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__round_bit) 
                                                | ((IData)(vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sticky) 
                                                   | vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_man)))));
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__u_round__DOT__exp_adj 
        = (0x000003ffU & ((IData)(vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_exp) 
                          + (1U & ((vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_man 
                                    + __VdfgRegularize_hebeb780c_0_7) 
                                   >> 0x00000018U))));
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__rounded_flags = 0U;
    tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__rounded_flags 
        = ((0x1eU & (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__rounded_flags)) 
           | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__u_round__DOT__inexact));
    if ((0x00ffU <= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__u_round__DOT__exp_adj))) {
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__rounded_flags 
            = (4U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__rounded_flags));
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__rounded_flags 
            = (1U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__rounded_flags));
    } else if ((0U >= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__u_round__DOT__exp_adj))) {
        tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__rounded_flags 
            = (3U | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__rounded_flags));
    }
    if (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__use_special) {
        tb_fpu_top__DOT__u_dut__DOT__add_result = tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_result;
        tb_fpu_top__DOT__u_dut__DOT__add_flags = tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__special_flags;
    } else if (tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__result_is_zero) {
        tb_fpu_top__DOT__u_dut__DOT__add_result = (
                                                   (2U 
                                                    == (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode)) 
                                                   << 0x0000001fU);
        tb_fpu_top__DOT__u_dut__DOT__add_flags = 0U;
    } else {
        tb_fpu_top__DOT__u_dut__DOT__add_result = (
                                                   (0x00ffU 
                                                    <= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__u_round__DOT__exp_adj))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                                     ? 
                                                    (0x7f7fffffU 
                                                     | ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_sign) 
                                                        << 0x0000001fU))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                                      ? 
                                                     ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_sign)
                                                       ? 0xff800000U
                                                       : 0x7f7fffffU)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                                       ? 
                                                      ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_sign)
                                                        ? 0xff7fffffU
                                                        : 0x7f800000U)
                                                       : 
                                                      (0x7f800000U 
                                                       | ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_sign) 
                                                          << 0x0000001fU)))))
                                                    : 
                                                   ((0U 
                                                     >= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__u_round__DOT__exp_adj))
                                                     ? 
                                                    ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_sign) 
                                                     << 0x0000001fU)
                                                     : 
                                                    (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_sign) 
                                                      << 0x0000001fU) 
                                                     | ((0x7f800000U 
                                                         & ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__u_round__DOT__exp_adj) 
                                                            << 0x00000017U)) 
                                                        | (0x007fffffU 
                                                           & (vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_man 
                                                              + __VdfgRegularize_hebeb780c_0_7))))));
        tb_fpu_top__DOT__u_dut__DOT__add_flags = tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__rounded_flags;
    }
    vlSelfRef.tb_fpu_top__DOT__result = 0U;
    if ((4U & (IData)(vlSelfRef.tb_fpu_top__DOT__op))) {
        if ((2U & (IData)(vlSelfRef.tb_fpu_top__DOT__op))) {
            if ((1U & (IData)(vlSelfRef.tb_fpu_top__DOT__op))) {
                vlSelfRef.tb_fpu_top__DOT__result = 0U;
                vlSelfRef.tb_fpu_top__DOT__flags = 0U;
            } else {
                vlSelfRef.tb_fpu_top__DOT__flags = 
                    ((IData)(vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT____VdfgExtracted_h71418064__3)
                      ? (0x00000010U & (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_cls) 
                                         | (IData)(tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__b_cls)) 
                                        << 1U)) : 0U);
            }
        } else {
            if ((1U & (~ (IData)(vlSelfRef.tb_fpu_top__DOT__op)))) {
                vlSelfRef.tb_fpu_top__DOT__result = 
                    ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__all_zero)
                      ? 0U : ((0x00ffU <= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__u_round__DOT__exp_adj))
                               ? ((1U == (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                   ? (0x7f7fffffU | 
                                      (0x80000000U 
                                       & vlSelfRef.tb_fpu_top__DOT__operand_a))
                                   : ((2U == (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                       ? ((vlSelfRef.tb_fpu_top__DOT__operand_a 
                                           >> 0x0000001fU)
                                           ? 0xff800000U
                                           : 0x7f7fffffU)
                                       : ((3U == (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                           ? ((vlSelfRef.tb_fpu_top__DOT__operand_a 
                                               >> 0x0000001fU)
                                               ? 0xff7fffffU
                                               : 0x7f800000U)
                                           : (0x7f800000U 
                                              | (0x80000000U 
                                                 & vlSelfRef.tb_fpu_top__DOT__operand_a)))))
                               : ((0U >= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__u_round__DOT__exp_adj))
                                   ? (0x80000000U & vlSelfRef.tb_fpu_top__DOT__operand_a)
                                   : ((0x80000000U 
                                       & vlSelfRef.tb_fpu_top__DOT__operand_a) 
                                      | ((0x7f800000U 
                                          & ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__u_round__DOT__exp_adj) 
                                             << 0x00000017U)) 
                                         | (0x007fffffU 
                                            & ((tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__shifted 
                                                >> 8U) 
                                               + __VdfgRegularize_hebeb780c_0_4)))))));
            }
            vlSelfRef.tb_fpu_top__DOT__flags = ((1U 
                                                 & (IData)(vlSelfRef.tb_fpu_top__DOT__op))
                                                 ? (IData)(tb_fpu_top__DOT__u_dut__DOT__f2i_flags)
                                                 : 
                                                ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__all_zero)
                                                  ? 0U
                                                  : (IData)(tb_fpu_top__DOT__u_dut__DOT__u_i2f__DOT__rounded_flags)));
        }
    } else if ((2U & (IData)(vlSelfRef.tb_fpu_top__DOT__op))) {
        if ((1U & (IData)(vlSelfRef.tb_fpu_top__DOT__op))) {
            if (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__use_special) {
                vlSelfRef.tb_fpu_top__DOT__result = tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_result;
                vlSelfRef.tb_fpu_top__DOT__flags = tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__special_flags;
            } else {
                vlSelfRef.tb_fpu_top__DOT__result = 
                    ((0x00ffU <= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__u_round__DOT__exp_adj))
                      ? ((1U == (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                          ? (0x7f7fffffU | ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign) 
                                            << 0x0000001fU))
                          : ((2U == (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                              ? ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign)
                                  ? 0xff800000U : 0x7f7fffffU)
                              : ((3U == (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                  ? ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign)
                                      ? 0xff7fffffU
                                      : 0x7f800000U)
                                  : (0x7f800000U | 
                                     ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign) 
                                      << 0x0000001fU)))))
                      : ((0U >= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__u_round__DOT__exp_adj))
                          ? ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign) 
                             << 0x0000001fU) : (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign) 
                                                 << 0x0000001fU) 
                                                | ((0x7f800000U 
                                                    & ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__u_round__DOT__exp_adj) 
                                                       << 0x00000017U)) 
                                                   | (0x007fffffU 
                                                      & (tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__res_man 
                                                         + __VdfgRegularize_hebeb780c_0_5))))));
                vlSelfRef.tb_fpu_top__DOT__flags = tb_fpu_top__DOT__u_dut__DOT__u_div__DOT__rounded_flags;
            }
        } else if (tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__use_special) {
            vlSelfRef.tb_fpu_top__DOT__result = tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__special_result;
            vlSelfRef.tb_fpu_top__DOT__flags = tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__special_flags;
        } else {
            vlSelfRef.tb_fpu_top__DOT__result = ((0x00ffU 
                                                  <= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__u_round__DOT__exp_adj))
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                                   ? 
                                                  (0x7f7fffffU 
                                                   | ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign) 
                                                      << 0x0000001fU))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                                    ? 
                                                   ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign)
                                                     ? 0xff800000U
                                                     : 0x7f7fffffU)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.tb_fpu_top__DOT__rnd_mode))
                                                     ? 
                                                    ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign)
                                                      ? 0xff7fffffU
                                                      : 0x7f800000U)
                                                     : 
                                                    (0x7f800000U 
                                                     | ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign) 
                                                        << 0x0000001fU)))))
                                                  : 
                                                 ((0U 
                                                   >= (IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__u_round__DOT__exp_adj))
                                                   ? 
                                                  ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign) 
                                                   << 0x0000001fU)
                                                   : 
                                                  (((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_sign) 
                                                    << 0x0000001fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__u_round__DOT__exp_adj) 
                                                          << 0x00000017U)) 
                                                      | (0x007fffffU 
                                                         & (tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__res_man 
                                                            + __VdfgRegularize_hebeb780c_0_6))))));
            vlSelfRef.tb_fpu_top__DOT__flags = tb_fpu_top__DOT__u_dut__DOT__u_mul__DOT__rounded_flags;
        }
    } else {
        vlSelfRef.tb_fpu_top__DOT__result = tb_fpu_top__DOT__u_dut__DOT__add_result;
        vlSelfRef.tb_fpu_top__DOT__flags = tb_fpu_top__DOT__u_dut__DOT__add_flags;
    }
}

VL_ATTR_COLD void Vtb_fpu_top___024root___eval_stl(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___eval_stl\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_fpu_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_fpu_top___024root___eval_phase__stl(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___eval_phase__stl\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_fpu_top___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fpu_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_fpu_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_fpu_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_fpu_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fpu_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fpu_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fpu_top___024root___ctor_var_reset(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___ctor_var_reset\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_fpu_top__DOT__operand_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8046227133936534038ull);
    vlSelf->tb_fpu_top__DOT__operand_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16912934408283193408ull);
    vlSelf->tb_fpu_top__DOT__op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8489074146808388666ull);
    vlSelf->tb_fpu_top__DOT__rnd_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14460776682888209377ull);
    vlSelf->tb_fpu_top__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9753805812306172080ull);
    vlSelf->tb_fpu_top__DOT__flags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7941852947602901442ull);
    vlSelf->tb_fpu_top__DOT__cmp_lt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18321902605549547484ull);
    vlSelf->tb_fpu_top__DOT__cmp_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 519399446803451117ull);
    vlSelf->tb_fpu_top__DOT__cmp_gt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10848083933915736293ull);
    vlSelf->tb_fpu_top__DOT__int_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15521242972214757102ull);
    vlSelf->tb_fpu_top__DOT__total_tests = 0;
    vlSelf->tb_fpu_top__DOT__pass_count = 0;
    vlSelf->tb_fpu_top__DOT__fail_count = 0;
    vlSelf->tb_fpu_top__DOT__warn_count = 0;
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__f2i_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13676540984010127760ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__small_ext = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 17112320905031964364ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sticky_bits = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15611543743646884940ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__pre_shift_val = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 16718534577328186432ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sticky_mask = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 745202110348484490ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_exp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10400866163258261856ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__res_man = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1183449815494256614ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__guard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17138521782127750467ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__round_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18129297219624861853ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11240580411472685789ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_add__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__mag = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15912069717365289424ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__round_needed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8399699925693003965ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_f2i__DOT__frac_mask = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11699796581577312296ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_neg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11382731086744809700ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__b_neg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1009807182251025920ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_mag_lt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13912195100722469160ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT__a_mag_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15730145820428614506ull);
    vlSelf->tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT____VdfgExtracted_h71418064__3 = 0;
    vlSelf->__Vtask_tb_fpu_top__DOT__apply_and_check__701__a = 0;
    vlSelf->__Vtask_tb_fpu_top__DOT__apply_and_check__701__b = 0;
    vlSelf->__Vtask_tb_fpu_top__DOT__apply_and_check__701__test_op = 0;
    vlSelf->__Vtask_tb_fpu_top__DOT__apply_and_check__701__expected = 0;
    vlSelf->__Vtask_tb_fpu_top__DOT__apply_and_check__1404__a = 0;
    vlSelf->__Vtask_tb_fpu_top__DOT__apply_and_check__1404__b = 0;
    vlSelf->__Vtask_tb_fpu_top__DOT__apply_and_check__1404__test_op = 0;
    vlSelf->__Vtask_tb_fpu_top__DOT__apply_and_check__1404__expected = 0;
    vlSelf->__Vtask_tb_fpu_top__DOT__apply_and_check__2106__a = 0;
    vlSelf->__Vtask_tb_fpu_top__DOT__apply_and_check__2106__b = 0;
    vlSelf->__Vtask_tb_fpu_top__DOT__apply_and_check__2106__test_op = 0;
    vlSelf->__Vtask_tb_fpu_top__DOT__apply_and_check__2106__expected = 0;
    vlSelf->__Vtask_tb_fpu_top__DOT__apply_and_check__2809__a = 0;
    vlSelf->__Vtask_tb_fpu_top__DOT__apply_and_check__2809__b = 0;
    vlSelf->__Vtask_tb_fpu_top__DOT__apply_and_check__2809__test_op = 0;
    vlSelf->__Vtask_tb_fpu_top__DOT__apply_and_check__2809__expected = 0;
    vlSelf->__Vfunc_leading_bit__2919__Vfuncout = 0;
    vlSelf->__Vfunc_leading_bit__2919__f = 0;
    vlSelf->__Vfunc_leading_bit__2920__Vfuncout = 0;
    vlSelf->__Vfunc_leading_bit__2920__f = 0;
    vlSelf->__Vfunc_leading_bit__2923__Vfuncout = 0;
    vlSelf->__Vfunc_leading_bit__2923__f = 0;
    vlSelf->__Vfunc_leading_bit__2924__Vfuncout = 0;
    vlSelf->__Vfunc_leading_bit__2924__f = 0;
    vlSelf->__Vfunc_leading_bit__2927__Vfuncout = 0;
    vlSelf->__Vfunc_leading_bit__2927__f = 0;
    vlSelf->__Vfunc_leading_bit__2928__Vfuncout = 0;
    vlSelf->__Vfunc_leading_bit__2928__f = 0;
    vlSelf->__Vfunc_leading_bit__2930__Vfuncout = 0;
    vlSelf->__Vfunc_leading_bit__2930__f = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
