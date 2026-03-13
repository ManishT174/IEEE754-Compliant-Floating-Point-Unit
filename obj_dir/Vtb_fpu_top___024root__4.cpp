// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fpu_top.h for the primary calling header

#include "Vtb_fpu_top__pch.h"

VlCoroutine Vtb_fpu_top___024root___eval_initial__TOP__Vtiming__0__4(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___eval_initial__TOP__Vtiming__0__4\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2810__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2810__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2810__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2810__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2811__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2811__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2811__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2811__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2812__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2812__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2812__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2812__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2813__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2813__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2813__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2813__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2813__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2813__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2814__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2814__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2814__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2814__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2815__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2815__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2815__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2815__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2816__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2816__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2816__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2816__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2817__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2817__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2817__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2817__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2817__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2817__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2818__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2818__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2818__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2818__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2819__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2819__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2819__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2819__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2820__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2820__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2820__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2820__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2821__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2821__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2821__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2821__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2821__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2821__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2822__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2822__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2822__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2822__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2823__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2823__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2823__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2823__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2824__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2824__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2824__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2824__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2825__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2825__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2825__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2825__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2825__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2825__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__fp_equal__2826__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__fp_equal__2826__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fp_equal__2826__a;
    __Vfunc_tb_fpu_top__DOT__fp_equal__2826__a = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fp_equal__2826__b;
    __Vfunc_tb_fpu_top__DOT__fp_equal__2826__b = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2827__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2827__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2827__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2827__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2828__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2828__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2828__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2828__bits = 0;
    CData/*2:0*/ __Vfunc_tb_fpu_top__DOT__op_to_str__2829__o;
    __Vfunc_tb_fpu_top__DOT__op_to_str__2829__o = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2830__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2830__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2830__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2830__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2831__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2831__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2831__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2831__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2832__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2832__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2832__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2832__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2833__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2833__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2833__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2833__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2833__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2833__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2834__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2834__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2834__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2834__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2835__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2835__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2835__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2835__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2836__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2836__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2836__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2836__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2837__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2837__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2837__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2837__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2837__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2837__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2838__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2838__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2838__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2838__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2839__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2839__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2839__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2839__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2840__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2840__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2840__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2840__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2841__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2841__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2841__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2841__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2841__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2841__f = 0;
    CData/*2:0*/ __Vfunc_tb_fpu_top__DOT__op_to_str__2842__o;
    __Vfunc_tb_fpu_top__DOT__op_to_str__2842__o = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2843__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2843__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2843__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2843__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2844__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2844__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2844__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2844__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2845__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2845__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2845__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2845__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2846__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2846__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2846__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2846__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2846__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2846__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2847__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2847__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2847__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2847__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2848__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2848__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2848__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2848__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2849__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2849__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2849__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2849__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2850__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2850__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2850__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2850__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2850__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2850__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2851__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2851__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2851__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2851__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2852__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2852__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2852__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2852__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2853__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2853__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2853__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2853__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2854__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2854__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2854__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2854__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2854__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2854__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2855__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2855__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2855__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2855__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2856__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2856__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2856__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2856__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2857__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2857__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2857__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2857__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2858__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2858__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2858__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2858__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2858__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2858__f = 0;
    IData/*31:0*/ __Vtask_tb_fpu_top__DOT__apply_and_check__2859__a;
    __Vtask_tb_fpu_top__DOT__apply_and_check__2859__a = 0;
    IData/*31:0*/ __Vtask_tb_fpu_top__DOT__apply_and_check__2859__b;
    __Vtask_tb_fpu_top__DOT__apply_and_check__2859__b = 0;
    CData/*2:0*/ __Vtask_tb_fpu_top__DOT__apply_and_check__2859__test_op;
    __Vtask_tb_fpu_top__DOT__apply_and_check__2859__test_op = 0;
    CData/*1:0*/ __Vtask_tb_fpu_top__DOT__apply_and_check__2859__rm;
    __Vtask_tb_fpu_top__DOT__apply_and_check__2859__rm = 0;
    IData/*31:0*/ __Vtask_tb_fpu_top__DOT__apply_and_check__2859__expected;
    __Vtask_tb_fpu_top__DOT__apply_and_check__2859__expected = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2860__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2860__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2860__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2860__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2861__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2861__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2861__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2861__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2862__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2862__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2862__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2862__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2863__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2863__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2863__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2863__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2863__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2863__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2864__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2864__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2864__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2864__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2865__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2865__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2865__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2865__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2866__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2866__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2866__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2866__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2867__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2867__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2867__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2867__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2867__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2867__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2868__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2868__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2868__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2868__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2869__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2869__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2869__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2869__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2870__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2870__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2870__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2870__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2871__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2871__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2871__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2871__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2871__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2871__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2872__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2872__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2872__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2872__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2873__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2873__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2873__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2873__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2874__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2874__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2874__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2874__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2875__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2875__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2875__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2875__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2875__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2875__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__fp_equal__2876__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__fp_equal__2876__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fp_equal__2876__a;
    __Vfunc_tb_fpu_top__DOT__fp_equal__2876__a = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fp_equal__2876__b;
    __Vfunc_tb_fpu_top__DOT__fp_equal__2876__b = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2877__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2877__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2877__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2877__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2878__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2878__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2878__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2878__bits = 0;
    CData/*2:0*/ __Vfunc_tb_fpu_top__DOT__op_to_str__2879__o;
    __Vfunc_tb_fpu_top__DOT__op_to_str__2879__o = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2880__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2880__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2880__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2880__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2881__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2881__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2881__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2881__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2882__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2882__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2882__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2882__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2883__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2883__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2883__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2883__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2883__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2883__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2884__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2884__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2884__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2884__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2885__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2885__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2885__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2885__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2886__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2886__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2886__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2886__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2887__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2887__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2887__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2887__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2887__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2887__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2888__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2888__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2888__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2888__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2889__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2889__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2889__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2889__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2890__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2890__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2890__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2890__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2891__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2891__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2891__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2891__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2891__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2891__f = 0;
    CData/*2:0*/ __Vfunc_tb_fpu_top__DOT__op_to_str__2892__o;
    __Vfunc_tb_fpu_top__DOT__op_to_str__2892__o = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2893__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2893__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2893__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2893__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2894__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2894__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2894__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2894__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2895__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2895__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2895__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2895__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2896__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2896__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2896__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2896__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2896__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2896__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2897__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2897__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2897__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2897__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2898__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2898__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2898__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2898__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2899__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2899__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2899__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2899__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2900__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2900__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2900__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2900__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2900__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2900__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2901__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2901__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2901__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2901__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2902__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2902__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2902__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2902__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2903__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2903__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2903__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2903__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2904__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2904__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2904__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2904__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2904__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2904__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fmt_fp__2905__bits;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2905__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__fmt_fp__2905__f;
    __Vfunc_tb_fpu_top__DOT__fmt_fp__2905__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2906__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2906__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2906__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2906__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2907__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_inf__2907__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_inf__2907__bits;
    __Vfunc_tb_fpu_top__DOT__is_inf__2907__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2908__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2908__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2908__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2908__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2908__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2908__f = 0;
    IData/*31:0*/ __Vtask_tb_fpu_top__DOT__test_random__2909__num_tests;
    __Vtask_tb_fpu_top__DOT__test_random__2909__num_tests = 0;
    IData/*31:0*/ __Vtask_tb_fpu_top__DOT__test_random__2909__unnamedblk1__DOT__i;
    __Vtask_tb_fpu_top__DOT__test_random__2909__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_fpu_top__DOT__test_random__2909__unnamedblk1__DOT__unnamedblk2__DOT__diff;
    __Vtask_tb_fpu_top__DOT__test_random__2909__unnamedblk1__DOT__unnamedblk2__DOT__diff = 0;
    IData/*31:0*/ __Vtask_tb_fpu_top__DOT__test_random__2909____VCase_h6f8a45a6__0;
    __Vtask_tb_fpu_top__DOT__test_random__2909____VCase_h6f8a45a6__0 = 0;
    IData/*31:0*/ __Vtask_tb_fpu_top__DOT__test_random__2909__a_rand;
    __Vtask_tb_fpu_top__DOT__test_random__2909__a_rand = 0;
    IData/*31:0*/ __Vtask_tb_fpu_top__DOT__test_random__2909__b_rand;
    __Vtask_tb_fpu_top__DOT__test_random__2909__b_rand = 0;
    IData/*31:0*/ __Vtask_tb_fpu_top__DOT__test_random__2909__exp_result;
    __Vtask_tb_fpu_top__DOT__test_random__2909__exp_result = 0;
    double __Vtask_tb_fpu_top__DOT__test_random__2909__a_f;
    __Vtask_tb_fpu_top__DOT__test_random__2909__a_f = 0;
    double __Vtask_tb_fpu_top__DOT__test_random__2909__b_f;
    __Vtask_tb_fpu_top__DOT__test_random__2909__b_f = 0;
    double __Vtask_tb_fpu_top__DOT__test_random__2909__r_f;
    __Vtask_tb_fpu_top__DOT__test_random__2909__r_f = 0;
    VlQueue<CData/*2:0*/> __Vtask_tb_fpu_top__DOT__test_random__2909__ops;
    __Vtask_tb_fpu_top__DOT__test_random__2909__ops.atDefault() = 0;
    IData/*31:0*/ __Vtask_tb_fpu_top__DOT__test_random__2909__op_idx;
    __Vtask_tb_fpu_top__DOT__test_random__2909__op_idx = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2910__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2910__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2910__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2910__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2910__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2910__f = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2911__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2911__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__bits_to_float__2911__bits;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2911__bits = 0;
    double __Vfunc_tb_fpu_top__DOT__bits_to_float__2911__f;
    __Vfunc_tb_fpu_top__DOT__bits_to_float__2911__f = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__float_to_bits__2912__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__float_to_bits__2912__Vfuncout = 0;
    double __Vfunc_tb_fpu_top__DOT__float_to_bits__2912__f;
    __Vfunc_tb_fpu_top__DOT__float_to_bits__2912__f = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__fp_equal__2913__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__fp_equal__2913__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fp_equal__2913__a;
    __Vfunc_tb_fpu_top__DOT__fp_equal__2913__a = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__fp_equal__2913__b;
    __Vfunc_tb_fpu_top__DOT__fp_equal__2913__b = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2914__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2914__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2914__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2914__bits = 0;
    CData/*0:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2915__Vfuncout;
    __Vfunc_tb_fpu_top__DOT__is_nan__2915__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fpu_top__DOT__is_nan__2915__bits;
    __Vfunc_tb_fpu_top__DOT__is_nan__2915__bits = 0;
    CData/*2:0*/ __Vfunc_tb_fpu_top__DOT__op_to_str__2916__o;
    __Vfunc_tb_fpu_top__DOT__op_to_str__2916__o = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    std::string __Vtemp_10;
    std::string __Vtemp_11;
    std::string __Vtemp_12;
    std::string __Vtemp_13;
    std::string __Vtemp_14;
    std::string __Vtemp_15;
    std::string __Vtemp_16;
    std::string __Vtemp_17;
    std::string __Vtemp_18;
    std::string __Vtemp_19;
    std::string __Vtemp_20;
    std::string __Vtemp_21;
    std::string __Vtemp_22;
    std::string __Vtemp_23;
    std::string __Vtemp_24;
    std::string __Vtemp_25;
    std::string __Vtemp_26;
    std::string __Vtemp_27;
    // Body
    if (VL_UNLIKELY(((6U == (IData)(vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__test_op))))) {
        vlSelfRef.tb_fpu_top__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.tb_fpu_top__DOT__pass_count);
        __Vtemp_1 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2810__bits 
                    = vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__a;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2810__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2810__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2811__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2810__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2811__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2811__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2811__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2811__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2811__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2810__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2810__bits) ;
                        goto __Vlabel0;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2812__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2810__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2812__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2812__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2812__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2812__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2810__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2810__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel0;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2813__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2810__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2813__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2813__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2813__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2813__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2813__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2813__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2810__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2813__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2810__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2810__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2810__bits) ;
                    __Vlabel0: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2810__Vfuncout);
        __Vtemp_2 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2814__bits 
                    = vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__b;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2814__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2814__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2815__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2814__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2815__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2815__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2815__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2815__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2815__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2814__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2814__bits) ;
                        goto __Vlabel1;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2816__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2814__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2816__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2816__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2816__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2816__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2814__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2814__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel1;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2817__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2814__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2817__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2817__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2817__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2817__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2817__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2817__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2814__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2817__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2814__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2814__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2814__bits) ;
                    __Vlabel1: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2814__Vfuncout);
        VL_WRITEF_NX("[PASS] %@: CMP(%@, %@) \342\206\222 lt=%0b eq=%0b gt=%0b unord=%0b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__test_name),
                     -1,&(__Vtemp_1),-1,&(__Vtemp_2),
                     1,(IData)(vlSelfRef.tb_fpu_top__DOT__cmp_lt),
                     1,vlSelfRef.tb_fpu_top__DOT__cmp_eq,
                     1,(IData)(vlSelfRef.tb_fpu_top__DOT__cmp_gt),
                     1,vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT____VdfgExtracted_h71418064__3);
    } else if ((5U == (IData)(vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__test_op))) {
        if ((vlSelfRef.tb_fpu_top__DOT__int_result 
             == vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__expected)) {
            vlSelfRef.tb_fpu_top__DOT__pass_count = 
                ((IData)(1U) + vlSelfRef.tb_fpu_top__DOT__pass_count);
            __Vtemp_3 = ([&]() {
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2818__bits 
                        = vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__a;
                    {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2818__Vfuncout = ""s;
                        __Vfunc_tb_fpu_top__DOT__fmt_fp__2818__f = 0.0;
                        if (([&]() {
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2819__bits 
                                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2818__bits;
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2819__Vfuncout = 0;
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2819__Vfuncout 
                                        = (IData)((
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7f800000U 
                                                     & __Vfunc_tb_fpu_top__DOT__is_nan__2819__bits)) 
                                                   & (0U 
                                                      != 
                                                      (0x007fffffU 
                                                       & __Vfunc_tb_fpu_top__DOT__is_nan__2819__bits))));
                                }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2819__Vfuncout))) {
                            vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2818__Vfuncout 
                                = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                                   32,
                                                   __Vfunc_tb_fpu_top__DOT__fmt_fp__2818__bits) ;
                            goto __Vlabel2;
                        }
                        if (([&]() {
                                    __Vfunc_tb_fpu_top__DOT__is_inf__2820__bits 
                                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2818__bits;
                                    __Vfunc_tb_fpu_top__DOT__is_inf__2820__Vfuncout = 0;
                                    __Vfunc_tb_fpu_top__DOT__is_inf__2820__Vfuncout 
                                        = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & __Vfunc_tb_fpu_top__DOT__is_inf__2820__bits)));
                                }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2820__Vfuncout))) {
                            vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2818__Vfuncout 
                                = VL_SFORMATF_N_NX("%sInf",0,
                                                   8,
                                                   ((__Vfunc_tb_fpu_top__DOT__fmt_fp__2818__bits 
                                                     >> 0x1fU)
                                                     ? 0x2dU
                                                     : 0x2bU)) ;
                            goto __Vlabel2;
                        }
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2821__bits 
                            = __Vfunc_tb_fpu_top__DOT__fmt_fp__2818__bits;
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2821__Vfuncout = 0.0;
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2821__f = 0.0;
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2821__f 
                            = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2821__bits)));
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2821__Vfuncout 
                            = __Vfunc_tb_fpu_top__DOT__bits_to_float__2821__f;
                        __Vfunc_tb_fpu_top__DOT__fmt_fp__2818__f 
                            = __Vfunc_tb_fpu_top__DOT__bits_to_float__2821__Vfuncout;
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2818__Vfuncout 
                            = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                               64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2818__f,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2818__bits) ;
                        __Vlabel2: ;
                    }
                }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2818__Vfuncout);
            VL_WRITEF_NX("[PASS] %@: F2I(%@) = %0d (0x%08x)\n",0,
                         -1,&(vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__test_name),
                         -1,&(__Vtemp_3),32,vlSelfRef.tb_fpu_top__DOT__int_result,
                         32,vlSelfRef.tb_fpu_top__DOT__int_result);
        } else {
            vlSelfRef.tb_fpu_top__DOT__fail_count = 
                ((IData)(1U) + vlSelfRef.tb_fpu_top__DOT__fail_count);
            __Vtemp_4 = ([&]() {
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2822__bits 
                        = vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__a;
                    {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2822__Vfuncout = ""s;
                        __Vfunc_tb_fpu_top__DOT__fmt_fp__2822__f = 0.0;
                        if (([&]() {
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2823__bits 
                                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2822__bits;
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2823__Vfuncout = 0;
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2823__Vfuncout 
                                        = (IData)((
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7f800000U 
                                                     & __Vfunc_tb_fpu_top__DOT__is_nan__2823__bits)) 
                                                   & (0U 
                                                      != 
                                                      (0x007fffffU 
                                                       & __Vfunc_tb_fpu_top__DOT__is_nan__2823__bits))));
                                }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2823__Vfuncout))) {
                            vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2822__Vfuncout 
                                = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                                   32,
                                                   __Vfunc_tb_fpu_top__DOT__fmt_fp__2822__bits) ;
                            goto __Vlabel3;
                        }
                        if (([&]() {
                                    __Vfunc_tb_fpu_top__DOT__is_inf__2824__bits 
                                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2822__bits;
                                    __Vfunc_tb_fpu_top__DOT__is_inf__2824__Vfuncout = 0;
                                    __Vfunc_tb_fpu_top__DOT__is_inf__2824__Vfuncout 
                                        = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & __Vfunc_tb_fpu_top__DOT__is_inf__2824__bits)));
                                }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2824__Vfuncout))) {
                            vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2822__Vfuncout 
                                = VL_SFORMATF_N_NX("%sInf",0,
                                                   8,
                                                   ((__Vfunc_tb_fpu_top__DOT__fmt_fp__2822__bits 
                                                     >> 0x1fU)
                                                     ? 0x2dU
                                                     : 0x2bU)) ;
                            goto __Vlabel3;
                        }
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2825__bits 
                            = __Vfunc_tb_fpu_top__DOT__fmt_fp__2822__bits;
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2825__Vfuncout = 0.0;
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2825__f = 0.0;
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2825__f 
                            = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2825__bits)));
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2825__Vfuncout 
                            = __Vfunc_tb_fpu_top__DOT__bits_to_float__2825__f;
                        __Vfunc_tb_fpu_top__DOT__fmt_fp__2822__f 
                            = __Vfunc_tb_fpu_top__DOT__bits_to_float__2825__Vfuncout;
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2822__Vfuncout 
                            = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                               64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2822__f,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2822__bits) ;
                        __Vlabel3: ;
                    }
                }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2822__Vfuncout);
            VL_WRITEF_NX("[FAIL] %@: F2I(%@) = %0d (0x%08x), expected %0d (0x%08x)\n",0,
                         -1,&(vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__test_name),
                         -1,&(__Vtemp_4),32,vlSelfRef.tb_fpu_top__DOT__int_result,
                         32,vlSelfRef.tb_fpu_top__DOT__int_result,
                         32,vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__expected,
                         32,vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__expected);
        }
    } else if (([&]() {
                __Vfunc_tb_fpu_top__DOT__fp_equal__2826__b 
                    = vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__expected;
                __Vfunc_tb_fpu_top__DOT__fp_equal__2826__a 
                    = vlSelfRef.tb_fpu_top__DOT__result;
                {
                    __Vfunc_tb_fpu_top__DOT__fp_equal__2826__Vfuncout = 0;
                    if ((([&]() {
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2827__bits 
                                        = __Vfunc_tb_fpu_top__DOT__fp_equal__2826__a;
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2827__Vfuncout = 0;
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2827__Vfuncout 
                                        = (IData)((
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7f800000U 
                                                     & __Vfunc_tb_fpu_top__DOT__is_nan__2827__bits)) 
                                                   & (0U 
                                                      != 
                                                      (0x007fffffU 
                                                       & __Vfunc_tb_fpu_top__DOT__is_nan__2827__bits))));
                                }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2827__Vfuncout)) 
                         & ([&]() {
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2828__bits 
                                        = __Vfunc_tb_fpu_top__DOT__fp_equal__2826__b;
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2828__Vfuncout = 0;
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2828__Vfuncout 
                                        = (IData)((
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7f800000U 
                                                     & __Vfunc_tb_fpu_top__DOT__is_nan__2828__bits)) 
                                                   & (0U 
                                                      != 
                                                      (0x007fffffU 
                                                       & __Vfunc_tb_fpu_top__DOT__is_nan__2828__bits))));
                                }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2828__Vfuncout)))) {
                        __Vfunc_tb_fpu_top__DOT__fp_equal__2826__Vfuncout = 1U;
                        goto __Vlabel4;
                    }
                    if ((((0U == __Vfunc_tb_fpu_top__DOT__fp_equal__2826__a) 
                          | (0x80000000U == __Vfunc_tb_fpu_top__DOT__fp_equal__2826__a)) 
                         & ((0U == __Vfunc_tb_fpu_top__DOT__fp_equal__2826__b) 
                            | (0x80000000U == __Vfunc_tb_fpu_top__DOT__fp_equal__2826__b)))) {
                        __Vfunc_tb_fpu_top__DOT__fp_equal__2826__Vfuncout = 1U;
                        goto __Vlabel4;
                    }
                    __Vfunc_tb_fpu_top__DOT__fp_equal__2826__Vfuncout 
                        = (__Vfunc_tb_fpu_top__DOT__fp_equal__2826__a 
                           == __Vfunc_tb_fpu_top__DOT__fp_equal__2826__b);
                    __Vlabel4: ;
                }
            }(), (IData)(__Vfunc_tb_fpu_top__DOT__fp_equal__2826__Vfuncout))) {
        vlSelfRef.tb_fpu_top__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.tb_fpu_top__DOT__pass_count);
        __Vtemp_5 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__op_to_str__2829__o 
                    = vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__test_op;
                vlSelfRef.__Vfunc_tb_fpu_top__DOT__op_to_str__2829__Vfuncout = ""s;
                vlSelfRef.__Vfunc_tb_fpu_top__DOT__op_to_str__2829__Vfuncout 
                    = ((4U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2829__o))
                        ? ((2U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2829__o))
                            ? ((1U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2829__o))
                                ? "???"s : "CMP"s) : 
                           ((1U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2829__o))
                             ? "F2I"s : "I2F"s)) : 
                       ((2U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2829__o))
                         ? ((1U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2829__o))
                             ? "DIV"s : "MUL"s) : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2829__o))
                                                    ? "SUB"s
                                                    : "ADD"s)));
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__op_to_str__2829__Vfuncout);
        __Vtemp_6 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2830__bits 
                    = vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__a;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2830__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2830__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2831__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2830__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2831__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2831__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2831__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2831__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2831__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2830__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2830__bits) ;
                        goto __Vlabel5;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2832__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2830__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2832__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2832__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2832__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2832__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2830__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2830__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel5;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2833__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2830__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2833__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2833__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2833__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2833__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2833__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2833__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2830__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2833__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2830__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2830__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2830__bits) ;
                    __Vlabel5: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2830__Vfuncout);
        __Vtemp_7 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2834__bits 
                    = vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__b;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2834__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2834__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2835__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2834__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2835__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2835__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2835__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2835__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2835__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2834__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2834__bits) ;
                        goto __Vlabel6;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2836__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2834__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2836__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2836__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2836__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2836__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2834__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2834__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel6;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2837__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2834__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2837__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2837__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2837__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2837__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2837__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2837__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2834__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2837__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2834__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2834__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2834__bits) ;
                    __Vlabel6: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2834__Vfuncout);
        __Vtemp_8 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2838__bits 
                    = vlSelfRef.tb_fpu_top__DOT__result;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2838__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2838__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2839__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2838__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2839__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2839__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2839__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2839__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2839__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2838__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2838__bits) ;
                        goto __Vlabel7;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2840__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2838__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2840__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2840__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2840__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2840__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2838__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2838__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel7;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2841__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2838__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2841__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2841__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2841__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2841__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2841__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2841__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2838__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2841__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2838__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2838__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2838__bits) ;
                    __Vlabel7: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2838__Vfuncout);
        VL_WRITEF_NX("[PASS] %@: %@(%@, %@) = %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__test_name),
                     -1,&(__Vtemp_5),-1,&(__Vtemp_6),
                     -1,&(__Vtemp_7),-1,&(__Vtemp_8));
    } else {
        vlSelfRef.tb_fpu_top__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.tb_fpu_top__DOT__fail_count);
        __Vtemp_9 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__op_to_str__2842__o 
                    = vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__test_op;
                vlSelfRef.__Vfunc_tb_fpu_top__DOT__op_to_str__2842__Vfuncout = ""s;
                vlSelfRef.__Vfunc_tb_fpu_top__DOT__op_to_str__2842__Vfuncout 
                    = ((4U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2842__o))
                        ? ((2U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2842__o))
                            ? ((1U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2842__o))
                                ? "???"s : "CMP"s) : 
                           ((1U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2842__o))
                             ? "F2I"s : "I2F"s)) : 
                       ((2U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2842__o))
                         ? ((1U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2842__o))
                             ? "DIV"s : "MUL"s) : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2842__o))
                                                    ? "SUB"s
                                                    : "ADD"s)));
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__op_to_str__2842__Vfuncout);
        __Vtemp_10 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2843__bits 
                    = vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__a;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2843__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2843__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2844__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2843__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2844__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2844__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2844__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2844__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2844__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2843__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2843__bits) ;
                        goto __Vlabel8;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2845__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2843__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2845__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2845__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2845__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2845__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2843__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2843__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel8;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2846__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2843__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2846__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2846__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2846__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2846__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2846__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2846__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2843__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2846__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2843__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2843__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2843__bits) ;
                    __Vlabel8: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2843__Vfuncout);
        __Vtemp_11 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2847__bits 
                    = vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__b;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2847__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2847__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2848__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2847__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2848__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2848__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2848__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2848__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2848__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2847__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2847__bits) ;
                        goto __Vlabel9;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2849__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2847__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2849__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2849__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2849__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2849__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2847__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2847__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel9;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2850__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2847__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2850__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2850__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2850__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2850__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2850__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2850__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2847__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2850__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2847__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2847__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2847__bits) ;
                    __Vlabel9: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2847__Vfuncout);
        __Vtemp_12 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2851__bits 
                    = vlSelfRef.tb_fpu_top__DOT__result;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2851__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2851__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2852__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2851__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2852__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2852__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2852__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2852__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2852__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2851__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2851__bits) ;
                        goto __Vlabel10;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2853__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2851__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2853__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2853__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2853__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2853__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2851__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2851__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel10;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2854__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2851__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2854__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2854__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2854__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2854__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2854__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2854__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2851__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2854__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2851__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2851__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2851__bits) ;
                    __Vlabel10: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2851__Vfuncout);
        __Vtemp_13 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2855__bits 
                    = vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__expected;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2855__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2855__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2856__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2855__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2856__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2856__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2856__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2856__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2856__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2855__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2855__bits) ;
                        goto __Vlabel11;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2857__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2855__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2857__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2857__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2857__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2857__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2855__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2855__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel11;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2858__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2855__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2858__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2858__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2858__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2858__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2858__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2858__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2855__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2858__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2855__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2855__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2855__bits) ;
                    __Vlabel11: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2855__Vfuncout);
        VL_WRITEF_NX("[FAIL] %@: %@(%@, %@) = %@, expected %@\n       flags: NV=%0b DZ=%0b OF=%0b UF=%0b NX=%0b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2809__test_name),
                     -1,&(__Vtemp_9),-1,&(__Vtemp_10),
                     -1,&(__Vtemp_11),-1,&(__Vtemp_12),
                     -1,&(__Vtemp_13),1,(1U & ((IData)(vlSelfRef.tb_fpu_top__DOT__flags) 
                                               >> 4U)),
                     1,(1U & ((IData)(vlSelfRef.tb_fpu_top__DOT__flags) 
                              >> 3U)),1,(1U & ((IData)(vlSelfRef.tb_fpu_top__DOT__flags) 
                                               >> 2U)),
                     1,(1U & ((IData)(vlSelfRef.tb_fpu_top__DOT__flags) 
                              >> 1U)),1,(1U & (IData)(vlSelfRef.tb_fpu_top__DOT__flags)));
    }
    vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2859__test_name = "f2i(NaN) = INT_MAX"s;
    __Vtask_tb_fpu_top__DOT__apply_and_check__2859__expected = 0x7fffffffU;
    __Vtask_tb_fpu_top__DOT__apply_and_check__2859__rm = 0U;
    __Vtask_tb_fpu_top__DOT__apply_and_check__2859__test_op = 5U;
    __Vtask_tb_fpu_top__DOT__apply_and_check__2859__b = 0U;
    __Vtask_tb_fpu_top__DOT__apply_and_check__2859__a = 0x7fc00000U;
    vlSelfRef.tb_fpu_top__DOT__operand_a = __Vtask_tb_fpu_top__DOT__apply_and_check__2859__a;
    vlSelfRef.tb_fpu_top__DOT__operand_b = __Vtask_tb_fpu_top__DOT__apply_and_check__2859__b;
    vlSelfRef.tb_fpu_top__DOT__op = __Vtask_tb_fpu_top__DOT__apply_and_check__2859__test_op;
    vlSelfRef.tb_fpu_top__DOT__rnd_mode = __Vtask_tb_fpu_top__DOT__apply_and_check__2859__rm;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_fpu_top.sv", 
                                         130);
    vlSelfRef.tb_fpu_top__DOT__total_tests = ((IData)(1U) 
                                              + vlSelfRef.tb_fpu_top__DOT__total_tests);
    if (VL_UNLIKELY(((6U == (IData)(__Vtask_tb_fpu_top__DOT__apply_and_check__2859__test_op))))) {
        vlSelfRef.tb_fpu_top__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.tb_fpu_top__DOT__pass_count);
        __Vtemp_14 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2860__bits 
                    = __Vtask_tb_fpu_top__DOT__apply_and_check__2859__a;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2860__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2860__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2861__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2860__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2861__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2861__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2861__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2861__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2861__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2860__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2860__bits) ;
                        goto __Vlabel12;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2862__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2860__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2862__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2862__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2862__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2862__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2860__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2860__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel12;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2863__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2860__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2863__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2863__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2863__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2863__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2863__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2863__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2860__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2863__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2860__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2860__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2860__bits) ;
                    __Vlabel12: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2860__Vfuncout);
        __Vtemp_15 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2864__bits 
                    = __Vtask_tb_fpu_top__DOT__apply_and_check__2859__b;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2864__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2864__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2865__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2864__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2865__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2865__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2865__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2865__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2865__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2864__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2864__bits) ;
                        goto __Vlabel13;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2866__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2864__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2866__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2866__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2866__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2866__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2864__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2864__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel13;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2867__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2864__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2867__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2867__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2867__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2867__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2867__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2867__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2864__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2867__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2864__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2864__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2864__bits) ;
                    __Vlabel13: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2864__Vfuncout);
        VL_WRITEF_NX("[PASS] %@: CMP(%@, %@) \342\206\222 lt=%0b eq=%0b gt=%0b unord=%0b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2859__test_name),
                     -1,&(__Vtemp_14),-1,&(__Vtemp_15),
                     1,(IData)(vlSelfRef.tb_fpu_top__DOT__cmp_lt),
                     1,vlSelfRef.tb_fpu_top__DOT__cmp_eq,
                     1,(IData)(vlSelfRef.tb_fpu_top__DOT__cmp_gt),
                     1,vlSelfRef.tb_fpu_top__DOT__u_dut__DOT__u_cmp__DOT____VdfgExtracted_h71418064__3);
    } else if ((5U == (IData)(__Vtask_tb_fpu_top__DOT__apply_and_check__2859__test_op))) {
        if ((vlSelfRef.tb_fpu_top__DOT__int_result 
             == __Vtask_tb_fpu_top__DOT__apply_and_check__2859__expected)) {
            vlSelfRef.tb_fpu_top__DOT__pass_count = 
                ((IData)(1U) + vlSelfRef.tb_fpu_top__DOT__pass_count);
            __Vtemp_16 = ([&]() {
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2868__bits 
                        = __Vtask_tb_fpu_top__DOT__apply_and_check__2859__a;
                    {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2868__Vfuncout = ""s;
                        __Vfunc_tb_fpu_top__DOT__fmt_fp__2868__f = 0.0;
                        if (([&]() {
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2869__bits 
                                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2868__bits;
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2869__Vfuncout = 0;
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2869__Vfuncout 
                                        = (IData)((
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7f800000U 
                                                     & __Vfunc_tb_fpu_top__DOT__is_nan__2869__bits)) 
                                                   & (0U 
                                                      != 
                                                      (0x007fffffU 
                                                       & __Vfunc_tb_fpu_top__DOT__is_nan__2869__bits))));
                                }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2869__Vfuncout))) {
                            vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2868__Vfuncout 
                                = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                                   32,
                                                   __Vfunc_tb_fpu_top__DOT__fmt_fp__2868__bits) ;
                            goto __Vlabel14;
                        }
                        if (([&]() {
                                    __Vfunc_tb_fpu_top__DOT__is_inf__2870__bits 
                                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2868__bits;
                                    __Vfunc_tb_fpu_top__DOT__is_inf__2870__Vfuncout = 0;
                                    __Vfunc_tb_fpu_top__DOT__is_inf__2870__Vfuncout 
                                        = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & __Vfunc_tb_fpu_top__DOT__is_inf__2870__bits)));
                                }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2870__Vfuncout))) {
                            vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2868__Vfuncout 
                                = VL_SFORMATF_N_NX("%sInf",0,
                                                   8,
                                                   ((__Vfunc_tb_fpu_top__DOT__fmt_fp__2868__bits 
                                                     >> 0x1fU)
                                                     ? 0x2dU
                                                     : 0x2bU)) ;
                            goto __Vlabel14;
                        }
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2871__bits 
                            = __Vfunc_tb_fpu_top__DOT__fmt_fp__2868__bits;
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2871__Vfuncout = 0.0;
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2871__f = 0.0;
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2871__f 
                            = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2871__bits)));
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2871__Vfuncout 
                            = __Vfunc_tb_fpu_top__DOT__bits_to_float__2871__f;
                        __Vfunc_tb_fpu_top__DOT__fmt_fp__2868__f 
                            = __Vfunc_tb_fpu_top__DOT__bits_to_float__2871__Vfuncout;
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2868__Vfuncout 
                            = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                               64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2868__f,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2868__bits) ;
                        __Vlabel14: ;
                    }
                }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2868__Vfuncout);
            VL_WRITEF_NX("[PASS] %@: F2I(%@) = %0d (0x%08x)\n",0,
                         -1,&(vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2859__test_name),
                         -1,&(__Vtemp_16),32,vlSelfRef.tb_fpu_top__DOT__int_result,
                         32,vlSelfRef.tb_fpu_top__DOT__int_result);
        } else {
            vlSelfRef.tb_fpu_top__DOT__fail_count = 
                ((IData)(1U) + vlSelfRef.tb_fpu_top__DOT__fail_count);
            __Vtemp_17 = ([&]() {
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2872__bits 
                        = __Vtask_tb_fpu_top__DOT__apply_and_check__2859__a;
                    {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2872__Vfuncout = ""s;
                        __Vfunc_tb_fpu_top__DOT__fmt_fp__2872__f = 0.0;
                        if (([&]() {
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2873__bits 
                                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2872__bits;
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2873__Vfuncout = 0;
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2873__Vfuncout 
                                        = (IData)((
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7f800000U 
                                                     & __Vfunc_tb_fpu_top__DOT__is_nan__2873__bits)) 
                                                   & (0U 
                                                      != 
                                                      (0x007fffffU 
                                                       & __Vfunc_tb_fpu_top__DOT__is_nan__2873__bits))));
                                }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2873__Vfuncout))) {
                            vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2872__Vfuncout 
                                = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                                   32,
                                                   __Vfunc_tb_fpu_top__DOT__fmt_fp__2872__bits) ;
                            goto __Vlabel15;
                        }
                        if (([&]() {
                                    __Vfunc_tb_fpu_top__DOT__is_inf__2874__bits 
                                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2872__bits;
                                    __Vfunc_tb_fpu_top__DOT__is_inf__2874__Vfuncout = 0;
                                    __Vfunc_tb_fpu_top__DOT__is_inf__2874__Vfuncout 
                                        = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & __Vfunc_tb_fpu_top__DOT__is_inf__2874__bits)));
                                }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2874__Vfuncout))) {
                            vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2872__Vfuncout 
                                = VL_SFORMATF_N_NX("%sInf",0,
                                                   8,
                                                   ((__Vfunc_tb_fpu_top__DOT__fmt_fp__2872__bits 
                                                     >> 0x1fU)
                                                     ? 0x2dU
                                                     : 0x2bU)) ;
                            goto __Vlabel15;
                        }
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2875__bits 
                            = __Vfunc_tb_fpu_top__DOT__fmt_fp__2872__bits;
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2875__Vfuncout = 0.0;
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2875__f = 0.0;
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2875__f 
                            = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2875__bits)));
                        __Vfunc_tb_fpu_top__DOT__bits_to_float__2875__Vfuncout 
                            = __Vfunc_tb_fpu_top__DOT__bits_to_float__2875__f;
                        __Vfunc_tb_fpu_top__DOT__fmt_fp__2872__f 
                            = __Vfunc_tb_fpu_top__DOT__bits_to_float__2875__Vfuncout;
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2872__Vfuncout 
                            = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                               64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2872__f,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2872__bits) ;
                        __Vlabel15: ;
                    }
                }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2872__Vfuncout);
            VL_WRITEF_NX("[FAIL] %@: F2I(%@) = %0d (0x%08x), expected %0d (0x%08x)\n",0,
                         -1,&(vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2859__test_name),
                         -1,&(__Vtemp_17),32,vlSelfRef.tb_fpu_top__DOT__int_result,
                         32,vlSelfRef.tb_fpu_top__DOT__int_result,
                         32,__Vtask_tb_fpu_top__DOT__apply_and_check__2859__expected,
                         32,__Vtask_tb_fpu_top__DOT__apply_and_check__2859__expected);
        }
    } else if (([&]() {
                __Vfunc_tb_fpu_top__DOT__fp_equal__2876__b 
                    = __Vtask_tb_fpu_top__DOT__apply_and_check__2859__expected;
                __Vfunc_tb_fpu_top__DOT__fp_equal__2876__a 
                    = vlSelfRef.tb_fpu_top__DOT__result;
                {
                    __Vfunc_tb_fpu_top__DOT__fp_equal__2876__Vfuncout = 0;
                    if ((([&]() {
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2877__bits 
                                        = __Vfunc_tb_fpu_top__DOT__fp_equal__2876__a;
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2877__Vfuncout = 0;
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2877__Vfuncout 
                                        = (IData)((
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7f800000U 
                                                     & __Vfunc_tb_fpu_top__DOT__is_nan__2877__bits)) 
                                                   & (0U 
                                                      != 
                                                      (0x007fffffU 
                                                       & __Vfunc_tb_fpu_top__DOT__is_nan__2877__bits))));
                                }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2877__Vfuncout)) 
                         & ([&]() {
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2878__bits 
                                        = __Vfunc_tb_fpu_top__DOT__fp_equal__2876__b;
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2878__Vfuncout = 0;
                                    __Vfunc_tb_fpu_top__DOT__is_nan__2878__Vfuncout 
                                        = (IData)((
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7f800000U 
                                                     & __Vfunc_tb_fpu_top__DOT__is_nan__2878__bits)) 
                                                   & (0U 
                                                      != 
                                                      (0x007fffffU 
                                                       & __Vfunc_tb_fpu_top__DOT__is_nan__2878__bits))));
                                }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2878__Vfuncout)))) {
                        __Vfunc_tb_fpu_top__DOT__fp_equal__2876__Vfuncout = 1U;
                        goto __Vlabel16;
                    }
                    if ((((0U == __Vfunc_tb_fpu_top__DOT__fp_equal__2876__a) 
                          | (0x80000000U == __Vfunc_tb_fpu_top__DOT__fp_equal__2876__a)) 
                         & ((0U == __Vfunc_tb_fpu_top__DOT__fp_equal__2876__b) 
                            | (0x80000000U == __Vfunc_tb_fpu_top__DOT__fp_equal__2876__b)))) {
                        __Vfunc_tb_fpu_top__DOT__fp_equal__2876__Vfuncout = 1U;
                        goto __Vlabel16;
                    }
                    __Vfunc_tb_fpu_top__DOT__fp_equal__2876__Vfuncout 
                        = (__Vfunc_tb_fpu_top__DOT__fp_equal__2876__a 
                           == __Vfunc_tb_fpu_top__DOT__fp_equal__2876__b);
                    __Vlabel16: ;
                }
            }(), (IData)(__Vfunc_tb_fpu_top__DOT__fp_equal__2876__Vfuncout))) {
        vlSelfRef.tb_fpu_top__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelfRef.tb_fpu_top__DOT__pass_count);
        __Vtemp_18 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__op_to_str__2879__o 
                    = __Vtask_tb_fpu_top__DOT__apply_and_check__2859__test_op;
                vlSelfRef.__Vfunc_tb_fpu_top__DOT__op_to_str__2879__Vfuncout = ""s;
                vlSelfRef.__Vfunc_tb_fpu_top__DOT__op_to_str__2879__Vfuncout 
                    = ((4U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2879__o))
                        ? ((2U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2879__o))
                            ? ((1U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2879__o))
                                ? "???"s : "CMP"s) : 
                           ((1U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2879__o))
                             ? "F2I"s : "I2F"s)) : 
                       ((2U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2879__o))
                         ? ((1U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2879__o))
                             ? "DIV"s : "MUL"s) : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2879__o))
                                                    ? "SUB"s
                                                    : "ADD"s)));
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__op_to_str__2879__Vfuncout);
        __Vtemp_19 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2880__bits 
                    = __Vtask_tb_fpu_top__DOT__apply_and_check__2859__a;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2880__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2880__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2881__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2880__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2881__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2881__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2881__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2881__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2881__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2880__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2880__bits) ;
                        goto __Vlabel17;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2882__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2880__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2882__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2882__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2882__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2882__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2880__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2880__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel17;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2883__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2880__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2883__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2883__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2883__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2883__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2883__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2883__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2880__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2883__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2880__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2880__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2880__bits) ;
                    __Vlabel17: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2880__Vfuncout);
        __Vtemp_20 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2884__bits 
                    = __Vtask_tb_fpu_top__DOT__apply_and_check__2859__b;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2884__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2884__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2885__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2884__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2885__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2885__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2885__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2885__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2885__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2884__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2884__bits) ;
                        goto __Vlabel18;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2886__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2884__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2886__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2886__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2886__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2886__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2884__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2884__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel18;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2887__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2884__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2887__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2887__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2887__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2887__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2887__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2887__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2884__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2887__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2884__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2884__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2884__bits) ;
                    __Vlabel18: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2884__Vfuncout);
        __Vtemp_21 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2888__bits 
                    = vlSelfRef.tb_fpu_top__DOT__result;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2888__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2888__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2889__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2888__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2889__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2889__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2889__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2889__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2889__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2888__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2888__bits) ;
                        goto __Vlabel19;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2890__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2888__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2890__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2890__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2890__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2890__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2888__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2888__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel19;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2891__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2888__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2891__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2891__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2891__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2891__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2891__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2891__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2888__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2891__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2888__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2888__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2888__bits) ;
                    __Vlabel19: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2888__Vfuncout);
        VL_WRITEF_NX("[PASS] %@: %@(%@, %@) = %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2859__test_name),
                     -1,&(__Vtemp_18),-1,&(__Vtemp_19),
                     -1,&(__Vtemp_20),-1,&(__Vtemp_21));
    } else {
        vlSelfRef.tb_fpu_top__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelfRef.tb_fpu_top__DOT__fail_count);
        __Vtemp_22 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__op_to_str__2892__o 
                    = __Vtask_tb_fpu_top__DOT__apply_and_check__2859__test_op;
                vlSelfRef.__Vfunc_tb_fpu_top__DOT__op_to_str__2892__Vfuncout = ""s;
                vlSelfRef.__Vfunc_tb_fpu_top__DOT__op_to_str__2892__Vfuncout 
                    = ((4U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2892__o))
                        ? ((2U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2892__o))
                            ? ((1U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2892__o))
                                ? "???"s : "CMP"s) : 
                           ((1U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2892__o))
                             ? "F2I"s : "I2F"s)) : 
                       ((2U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2892__o))
                         ? ((1U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2892__o))
                             ? "DIV"s : "MUL"s) : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2892__o))
                                                    ? "SUB"s
                                                    : "ADD"s)));
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__op_to_str__2892__Vfuncout);
        __Vtemp_23 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2893__bits 
                    = __Vtask_tb_fpu_top__DOT__apply_and_check__2859__a;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2893__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2893__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2894__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2893__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2894__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2894__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2894__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2894__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2894__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2893__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2893__bits) ;
                        goto __Vlabel20;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2895__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2893__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2895__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2895__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2895__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2895__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2893__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2893__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel20;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2896__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2893__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2896__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2896__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2896__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2896__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2896__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2896__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2893__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2896__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2893__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2893__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2893__bits) ;
                    __Vlabel20: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2893__Vfuncout);
        __Vtemp_24 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2897__bits 
                    = __Vtask_tb_fpu_top__DOT__apply_and_check__2859__b;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2897__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2897__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2898__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2897__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2898__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2898__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2898__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2898__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2898__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2897__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2897__bits) ;
                        goto __Vlabel21;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2899__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2897__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2899__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2899__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2899__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2899__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2897__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2897__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel21;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2900__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2897__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2900__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2900__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2900__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2900__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2900__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2900__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2897__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2900__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2897__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2897__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2897__bits) ;
                    __Vlabel21: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2897__Vfuncout);
        __Vtemp_25 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2901__bits 
                    = vlSelfRef.tb_fpu_top__DOT__result;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2901__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2901__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2902__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2901__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2902__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2902__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2902__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2902__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2902__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2901__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2901__bits) ;
                        goto __Vlabel22;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2903__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2901__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2903__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2903__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2903__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2903__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2901__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2901__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel22;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2904__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2901__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2904__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2904__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2904__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2904__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2904__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2904__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2901__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2904__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2901__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2901__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2901__bits) ;
                    __Vlabel22: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2901__Vfuncout);
        __Vtemp_26 = ([&]() {
                __Vfunc_tb_fpu_top__DOT__fmt_fp__2905__bits 
                    = __Vtask_tb_fpu_top__DOT__apply_and_check__2859__expected;
                {
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2905__Vfuncout = ""s;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2905__f = 0.0;
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_nan__2906__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2905__bits;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2906__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_nan__2906__Vfuncout 
                                    = (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & __Vfunc_tb_fpu_top__DOT__is_nan__2906__bits)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_nan__2906__bits))));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2906__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2905__Vfuncout 
                            = VL_SFORMATF_N_NX("NaN (0x%08x)",0,
                                               32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2905__bits) ;
                        goto __Vlabel23;
                    }
                    if (([&]() {
                                __Vfunc_tb_fpu_top__DOT__is_inf__2907__bits 
                                    = __Vfunc_tb_fpu_top__DOT__fmt_fp__2905__bits;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2907__Vfuncout = 0;
                                __Vfunc_tb_fpu_top__DOT__is_inf__2907__Vfuncout 
                                    = (IData)((0x7f800000U 
                                               == (0x7fffffffU 
                                                   & __Vfunc_tb_fpu_top__DOT__is_inf__2907__bits)));
                            }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_inf__2907__Vfuncout))) {
                        vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2905__Vfuncout 
                            = VL_SFORMATF_N_NX("%sInf",0,
                                               8,((__Vfunc_tb_fpu_top__DOT__fmt_fp__2905__bits 
                                                   >> 0x1fU)
                                                   ? 0x2dU
                                                   : 0x2bU)) ;
                        goto __Vlabel23;
                    }
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2908__bits 
                        = __Vfunc_tb_fpu_top__DOT__fmt_fp__2905__bits;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2908__Vfuncout = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2908__f = 0.0;
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2908__f 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2908__bits)));
                    __Vfunc_tb_fpu_top__DOT__bits_to_float__2908__Vfuncout 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2908__f;
                    __Vfunc_tb_fpu_top__DOT__fmt_fp__2905__f 
                        = __Vfunc_tb_fpu_top__DOT__bits_to_float__2908__Vfuncout;
                    vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2905__Vfuncout 
                        = VL_SFORMATF_N_NX("%e (0x%08x)",0,
                                           64,__Vfunc_tb_fpu_top__DOT__fmt_fp__2905__f,
                                           32,__Vfunc_tb_fpu_top__DOT__fmt_fp__2905__bits) ;
                    __Vlabel23: ;
                }
            }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__fmt_fp__2905__Vfuncout);
        VL_WRITEF_NX("[FAIL] %@: %@(%@, %@) = %@, expected %@\n       flags: NV=%0b DZ=%0b OF=%0b UF=%0b NX=%0b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fpu_top__DOT__apply_and_check__2859__test_name),
                     -1,&(__Vtemp_22),-1,&(__Vtemp_23),
                     -1,&(__Vtemp_24),-1,&(__Vtemp_25),
                     -1,&(__Vtemp_26),1,(1U & ((IData)(vlSelfRef.tb_fpu_top__DOT__flags) 
                                               >> 4U)),
                     1,(1U & ((IData)(vlSelfRef.tb_fpu_top__DOT__flags) 
                              >> 3U)),1,(1U & ((IData)(vlSelfRef.tb_fpu_top__DOT__flags) 
                                               >> 2U)),
                     1,(1U & ((IData)(vlSelfRef.tb_fpu_top__DOT__flags) 
                              >> 1U)),1,(1U & (IData)(vlSelfRef.tb_fpu_top__DOT__flags)));
    }
    __Vtask_tb_fpu_top__DOT__test_random__2909__num_tests = 0x00002710U;
    __Vtask_tb_fpu_top__DOT__test_random__2909____VCase_h6f8a45a6__0 = 0;
    __Vtask_tb_fpu_top__DOT__test_random__2909__a_rand = 0;
    __Vtask_tb_fpu_top__DOT__test_random__2909__b_rand = 0;
    __Vtask_tb_fpu_top__DOT__test_random__2909__exp_result = 0;
    __Vtask_tb_fpu_top__DOT__test_random__2909__a_f = 0.0;
    __Vtask_tb_fpu_top__DOT__test_random__2909__b_f = 0.0;
    __Vtask_tb_fpu_top__DOT__test_random__2909__r_f = 0.0;
    __Vtask_tb_fpu_top__DOT__test_random__2909__ops.clear();
    __Vtask_tb_fpu_top__DOT__test_random__2909__ops.atDefault() = 0;
    __Vtask_tb_fpu_top__DOT__test_random__2909__op_idx = 0U;
    VL_WRITEF_NX("\n\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\n  RANDOM TESTS \342\200\224 %0d iterations\n\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\n",0,
                 32,__Vtask_tb_fpu_top__DOT__test_random__2909__num_tests);
    __Vtask_tb_fpu_top__DOT__test_random__2909__ops 
        = VlQueue<CData/*2:0*/>::consVC(2U, VlQueue<CData/*2:0*/>::consVC(1U, 
                                                                          VlQueue<CData/*2:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*2:0*/>{})));
    __Vtask_tb_fpu_top__DOT__test_random__2909__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_fpu_top__DOT__test_random__2909__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_fpu_top__DOT__test_random__2909__unnamedblk1__DOT__i, __Vtask_tb_fpu_top__DOT__test_random__2909__num_tests)) {
        {
            if (([&]() {
                        __Vtask_tb_fpu_top__DOT__test_random__2909____VCase_h6f8a45a6__0 
                            = VL_URANDOM_RANGE_I(0U, 3U);
                    }(), 1U)) {
                if ((0U == __Vtask_tb_fpu_top__DOT__test_random__2909____VCase_h6f8a45a6__0)) {
                    __Vtask_tb_fpu_top__DOT__test_random__2909__a_rand 
                        = VL_RANDOM_I();
                    __Vtask_tb_fpu_top__DOT__test_random__2909__b_rand 
                        = VL_RANDOM_I();
                } else if ((1U == __Vtask_tb_fpu_top__DOT__test_random__2909____VCase_h6f8a45a6__0)) {
                    __Vtask_tb_fpu_top__DOT__test_random__2909__a_rand 
                        = (((IData)(VL_URANDOM_RANGE_I(0U, 1U)) 
                            << 0x0000001fU) | ((0x7f800000U 
                                                & ((IData)(
                                                           VL_URANDOM_RANGE_I(0U, 5U)) 
                                                   << 0x00000017U)) 
                                               | (0x007fffffU 
                                                  & VL_RANDOM_I())));
                    __Vtask_tb_fpu_top__DOT__test_random__2909__b_rand 
                        = (((IData)(VL_URANDOM_RANGE_I(0U, 1U)) 
                            << 0x0000001fU) | ((0x7f800000U 
                                                & ((IData)(
                                                           VL_URANDOM_RANGE_I(0U, 5U)) 
                                                   << 0x00000017U)) 
                                               | (0x007fffffU 
                                                  & VL_RANDOM_I())));
                } else if ((2U == __Vtask_tb_fpu_top__DOT__test_random__2909____VCase_h6f8a45a6__0)) {
                    __Vtask_tb_fpu_top__DOT__test_random__2909__a_rand 
                        = (((IData)(VL_URANDOM_RANGE_I(0U, 1U)) 
                            << 0x0000001fU) | ((0x7f800000U 
                                                & ((IData)(
                                                           VL_URANDOM_RANGE_I(0x000000faU, 0x000000feU)) 
                                                   << 0x00000017U)) 
                                               | (0x007fffffU 
                                                  & VL_RANDOM_I())));
                    __Vtask_tb_fpu_top__DOT__test_random__2909__b_rand 
                        = (((IData)(VL_URANDOM_RANGE_I(0U, 1U)) 
                            << 0x0000001fU) | ((0x7f800000U 
                                                & ((IData)(
                                                           VL_URANDOM_RANGE_I(0x000000faU, 0x000000feU)) 
                                                   << 0x00000017U)) 
                                               | (0x007fffffU 
                                                  & VL_RANDOM_I())));
                } else if ((3U == __Vtask_tb_fpu_top__DOT__test_random__2909____VCase_h6f8a45a6__0)) {
                    __Vtask_tb_fpu_top__DOT__test_random__2909__a_rand 
                        = VL_RANDOM_I();
                    __Vtask_tb_fpu_top__DOT__test_random__2909__b_rand 
                        = (__Vtask_tb_fpu_top__DOT__test_random__2909__a_rand 
                           ^ VL_URANDOM_RANGE_I(0U, 0x000000ffU));
                }
            }
            if (((0xffU == (0x000000ffU & (__Vtask_tb_fpu_top__DOT__test_random__2909__a_rand 
                                           >> 0x17U))) 
                 | (0xffU == (0x000000ffU & (__Vtask_tb_fpu_top__DOT__test_random__2909__b_rand 
                                             >> 0x17U))))) {
                goto __Vlabel24;
            }
            __Vtask_tb_fpu_top__DOT__test_random__2909__op_idx 
                = VL_URANDOM_RANGE_I(0U, (__Vtask_tb_fpu_top__DOT__test_random__2909__ops.size() 
                                          - (IData)(1U)));
            vlSelfRef.tb_fpu_top__DOT__operand_a = __Vtask_tb_fpu_top__DOT__test_random__2909__a_rand;
            vlSelfRef.tb_fpu_top__DOT__operand_b = __Vtask_tb_fpu_top__DOT__test_random__2909__b_rand;
            vlSelfRef.tb_fpu_top__DOT__op = __Vtask_tb_fpu_top__DOT__test_random__2909__ops.at(__Vtask_tb_fpu_top__DOT__test_random__2909__op_idx);
            vlSelfRef.tb_fpu_top__DOT__rnd_mode = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "tb/tb_fpu_top.sv", 
                                                 385);
            __Vfunc_tb_fpu_top__DOT__bits_to_float__2910__bits 
                = __Vtask_tb_fpu_top__DOT__test_random__2909__a_rand;
            __Vfunc_tb_fpu_top__DOT__bits_to_float__2910__Vfuncout = 0.0;
            __Vfunc_tb_fpu_top__DOT__bits_to_float__2910__f = 0.0;
            __Vfunc_tb_fpu_top__DOT__bits_to_float__2910__f 
                = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2910__bits)));
            __Vfunc_tb_fpu_top__DOT__bits_to_float__2910__Vfuncout 
                = __Vfunc_tb_fpu_top__DOT__bits_to_float__2910__f;
            __Vtask_tb_fpu_top__DOT__test_random__2909__a_f 
                = __Vfunc_tb_fpu_top__DOT__bits_to_float__2910__Vfuncout;
            __Vfunc_tb_fpu_top__DOT__bits_to_float__2911__bits 
                = __Vtask_tb_fpu_top__DOT__test_random__2909__b_rand;
            __Vfunc_tb_fpu_top__DOT__bits_to_float__2911__Vfuncout = 0.0;
            __Vfunc_tb_fpu_top__DOT__bits_to_float__2911__f = 0.0;
            __Vfunc_tb_fpu_top__DOT__bits_to_float__2911__f 
                = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_fpu_top__DOT__bits_to_float__2911__bits)));
            __Vfunc_tb_fpu_top__DOT__bits_to_float__2911__Vfuncout 
                = __Vfunc_tb_fpu_top__DOT__bits_to_float__2911__f;
            __Vtask_tb_fpu_top__DOT__test_random__2909__b_f 
                = __Vfunc_tb_fpu_top__DOT__bits_to_float__2911__Vfuncout;
            __Vtask_tb_fpu_top__DOT__test_random__2909__r_f 
                = ((0U == __Vtask_tb_fpu_top__DOT__test_random__2909__ops.at(__Vtask_tb_fpu_top__DOT__test_random__2909__op_idx))
                    ? (__Vtask_tb_fpu_top__DOT__test_random__2909__a_f 
                       + __Vtask_tb_fpu_top__DOT__test_random__2909__b_f)
                    : ((1U == __Vtask_tb_fpu_top__DOT__test_random__2909__ops.at(__Vtask_tb_fpu_top__DOT__test_random__2909__op_idx))
                        ? (__Vtask_tb_fpu_top__DOT__test_random__2909__a_f 
                           - __Vtask_tb_fpu_top__DOT__test_random__2909__b_f)
                        : ((2U == __Vtask_tb_fpu_top__DOT__test_random__2909__ops.at(__Vtask_tb_fpu_top__DOT__test_random__2909__op_idx))
                            ? (__Vtask_tb_fpu_top__DOT__test_random__2909__a_f 
                               * __Vtask_tb_fpu_top__DOT__test_random__2909__b_f)
                            : 0.0)));
            __Vfunc_tb_fpu_top__DOT__float_to_bits__2912__f 
                = __Vtask_tb_fpu_top__DOT__test_random__2909__r_f;
            __Vfunc_tb_fpu_top__DOT__float_to_bits__2912__Vfuncout = 0;
            __Vfunc_tb_fpu_top__DOT__float_to_bits__2912__Vfuncout 
                = (IData)(VL_CVT_Q_D(__Vfunc_tb_fpu_top__DOT__float_to_bits__2912__f));
            __Vtask_tb_fpu_top__DOT__test_random__2909__exp_result 
                = __Vfunc_tb_fpu_top__DOT__float_to_bits__2912__Vfuncout;
            vlSelfRef.tb_fpu_top__DOT__total_tests 
                = ((IData)(1U) + vlSelfRef.tb_fpu_top__DOT__total_tests);
            if (([&]() {
                        __Vfunc_tb_fpu_top__DOT__fp_equal__2913__b 
                            = __Vtask_tb_fpu_top__DOT__test_random__2909__exp_result;
                        __Vfunc_tb_fpu_top__DOT__fp_equal__2913__a 
                            = vlSelfRef.tb_fpu_top__DOT__result;
                        {
                            __Vfunc_tb_fpu_top__DOT__fp_equal__2913__Vfuncout = 0;
                            if ((([&]() {
                                            __Vfunc_tb_fpu_top__DOT__is_nan__2914__bits 
                                                = __Vfunc_tb_fpu_top__DOT__fp_equal__2913__a;
                                            __Vfunc_tb_fpu_top__DOT__is_nan__2914__Vfuncout = 0;
                                            __Vfunc_tb_fpu_top__DOT__is_nan__2914__Vfuncout 
                                                = (IData)(
                                                          ((0x7f800000U 
                                                            == 
                                                            (0x7f800000U 
                                                             & __Vfunc_tb_fpu_top__DOT__is_nan__2914__bits)) 
                                                           & (0U 
                                                              != 
                                                              (0x007fffffU 
                                                               & __Vfunc_tb_fpu_top__DOT__is_nan__2914__bits))));
                                        }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2914__Vfuncout)) 
                                 & ([&]() {
                                            __Vfunc_tb_fpu_top__DOT__is_nan__2915__bits 
                                                = __Vfunc_tb_fpu_top__DOT__fp_equal__2913__b;
                                            __Vfunc_tb_fpu_top__DOT__is_nan__2915__Vfuncout = 0;
                                            __Vfunc_tb_fpu_top__DOT__is_nan__2915__Vfuncout 
                                                = (IData)(
                                                          ((0x7f800000U 
                                                            == 
                                                            (0x7f800000U 
                                                             & __Vfunc_tb_fpu_top__DOT__is_nan__2915__bits)) 
                                                           & (0U 
                                                              != 
                                                              (0x007fffffU 
                                                               & __Vfunc_tb_fpu_top__DOT__is_nan__2915__bits))));
                                        }(), (IData)(__Vfunc_tb_fpu_top__DOT__is_nan__2915__Vfuncout)))) {
                                __Vfunc_tb_fpu_top__DOT__fp_equal__2913__Vfuncout = 1U;
                                goto __Vlabel25;
                            }
                            if ((((0U == __Vfunc_tb_fpu_top__DOT__fp_equal__2913__a) 
                                  | (0x80000000U == __Vfunc_tb_fpu_top__DOT__fp_equal__2913__a)) 
                                 & ((0U == __Vfunc_tb_fpu_top__DOT__fp_equal__2913__b) 
                                    | (0x80000000U 
                                       == __Vfunc_tb_fpu_top__DOT__fp_equal__2913__b)))) {
                                __Vfunc_tb_fpu_top__DOT__fp_equal__2913__Vfuncout = 1U;
                                goto __Vlabel25;
                            }
                            __Vfunc_tb_fpu_top__DOT__fp_equal__2913__Vfuncout 
                                = (__Vfunc_tb_fpu_top__DOT__fp_equal__2913__a 
                                   == __Vfunc_tb_fpu_top__DOT__fp_equal__2913__b);
                            __Vlabel25: ;
                        }
                    }(), (IData)(__Vfunc_tb_fpu_top__DOT__fp_equal__2913__Vfuncout))) {
                vlSelfRef.tb_fpu_top__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.tb_fpu_top__DOT__pass_count);
            } else {
                __Vtask_tb_fpu_top__DOT__test_random__2909__unnamedblk1__DOT__unnamedblk2__DOT__diff = 0;
                __Vtask_tb_fpu_top__DOT__test_random__2909__unnamedblk1__DOT__unnamedblk2__DOT__diff 
                    = ((vlSelfRef.tb_fpu_top__DOT__result 
                        > __Vtask_tb_fpu_top__DOT__test_random__2909__exp_result)
                        ? (vlSelfRef.tb_fpu_top__DOT__result 
                           - __Vtask_tb_fpu_top__DOT__test_random__2909__exp_result)
                        : (__Vtask_tb_fpu_top__DOT__test_random__2909__exp_result 
                           - vlSelfRef.tb_fpu_top__DOT__result));
                if (VL_LIKELY(((1U >= __Vtask_tb_fpu_top__DOT__test_random__2909__unnamedblk1__DOT__unnamedblk2__DOT__diff)))) {
                    vlSelfRef.tb_fpu_top__DOT__warn_count 
                        = ((IData)(1U) + vlSelfRef.tb_fpu_top__DOT__warn_count);
                    vlSelfRef.tb_fpu_top__DOT__pass_count 
                        = ((IData)(1U) + vlSelfRef.tb_fpu_top__DOT__pass_count);
                } else {
                    vlSelfRef.tb_fpu_top__DOT__fail_count 
                        = ((IData)(1U) + vlSelfRef.tb_fpu_top__DOT__fail_count);
                    __Vtemp_27 = ([&]() {
                            __Vfunc_tb_fpu_top__DOT__op_to_str__2916__o 
                                = __Vtask_tb_fpu_top__DOT__test_random__2909__ops.at(__Vtask_tb_fpu_top__DOT__test_random__2909__op_idx);
                            vlSelfRef.__Vfunc_tb_fpu_top__DOT__op_to_str__2916__Vfuncout = ""s;
                            vlSelfRef.__Vfunc_tb_fpu_top__DOT__op_to_str__2916__Vfuncout 
                                = ((4U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2916__o))
                                    ? ((2U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2916__o))
                                        ? ((1U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2916__o))
                                            ? "???"s
                                            : "CMP"s)
                                        : ((1U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2916__o))
                                            ? "F2I"s
                                            : "I2F"s))
                                    : ((2U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2916__o))
                                        ? ((1U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2916__o))
                                            ? "DIV"s
                                            : "MUL"s)
                                        : ((1U & (IData)(__Vfunc_tb_fpu_top__DOT__op_to_str__2916__o))
                                            ? "SUB"s
                                            : "ADD"s)));
                        }(), vlSelfRef.__Vfunc_tb_fpu_top__DOT__op_to_str__2916__Vfuncout);
                    VL_WRITEF_NX("[FAIL] Random: %@(0x%08x, 0x%08x) = 0x%08x, expected 0x%08x (diff=%0# ULP)\n",0,
                                 -1,&(__Vtemp_27),32,
                                 __Vtask_tb_fpu_top__DOT__test_random__2909__a_rand,
                                 32,__Vtask_tb_fpu_top__DOT__test_random__2909__b_rand,
                                 32,vlSelfRef.tb_fpu_top__DOT__result,
                                 32,__Vtask_tb_fpu_top__DOT__test_random__2909__exp_result,
                                 32,__Vtask_tb_fpu_top__DOT__test_random__2909__unnamedblk1__DOT__unnamedblk2__DOT__diff);
                }
            }
            __Vlabel24: ;
        }
        __Vtask_tb_fpu_top__DOT__test_random__2909__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_fpu_top__DOT__test_random__2909__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("\n\342\225\224\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\227\n\342\225\221                    FINAL RESULTS                           \342\225\221\n\342\225\240\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\243\n",0);
    VL_WRITEF_NX("\342\225\221  Total:    %6d                                          \342\225\221\n\342\225\221  Passed:   %6d                                          \342\225\221\n\342\225\221  Failed:   %6d                                          \342\225\221\n\342\225\221  1-ULP:    %6d                                          \342\225\221\n\342\225\240\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\243\n",0,
                 32,vlSelfRef.tb_fpu_top__DOT__total_tests,
                 32,vlSelfRef.tb_fpu_top__DOT__pass_count,
                 32,vlSelfRef.tb_fpu_top__DOT__fail_count,
                 32,vlSelfRef.tb_fpu_top__DOT__warn_count);
    if ((0U == vlSelfRef.tb_fpu_top__DOT__fail_count)) {
        VL_WRITEF_NX("\342\225\221  \342\234\223 ALL TESTS PASSED                                        \342\225\221\n",0);
    } else {
        VL_WRITEF_NX("\342\225\221  \342\234\227 SOME TESTS FAILED                                       \342\225\221\n",0);
    }
    VL_WRITEF_NX("\342\225\232\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235\n",0);
    VL_FINISH_MT("tb/tb_fpu_top.sv", 469, "");
    co_return;
}

void Vtb_fpu_top___024root___eval_triggers_vec__act(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___eval_triggers_vec__act\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool Vtb_fpu_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___trigger_anySet__act\n"); );
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

void Vtb_fpu_top___024root___act_sequent__TOP__0(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___act_sequent__TOP__0\n"); );
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

void Vtb_fpu_top___024root___eval_act(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___eval_act\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_fpu_top___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_fpu_top___024root___nba_sequent__TOP__0(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___nba_sequent__TOP__0\n"); );
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

void Vtb_fpu_top___024root___eval_nba(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___eval_nba\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_fpu_top___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_fpu_top___024root___timing_resume(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___timing_resume\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_fpu_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fpu_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_fpu_top___024root___eval_phase__act(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___eval_phase__act\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fpu_top___024root___eval_triggers_vec__act(vlSelf);
    Vtb_fpu_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fpu_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_fpu_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_fpu_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_fpu_top___024root___timing_resume(vlSelf);
        Vtb_fpu_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_fpu_top___024root___eval_phase__inact(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___eval_phase__inact\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_fpu_top.sv", 15, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_fpu_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_fpu_top___024root___eval_phase__nba(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___eval_phase__nba\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_fpu_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_fpu_top___024root___eval_nba(vlSelf);
        Vtb_fpu_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_fpu_top___024root___eval(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___eval\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fpu_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_fpu_top.sv", 15, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/tb_fpu_top.sv", 15, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_fpu_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/tb_fpu_top.sv", 15, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_fpu_top___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_fpu_top___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_fpu_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_fpu_top___024root___eval_debug_assertions(Vtb_fpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fpu_top___024root___eval_debug_assertions\n"); );
    Vtb_fpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
