/*
 * keypos_hope56.h — etykiety pozycji dla hope56 (52-klawiszowy transform)
 * Numeracja = kolejność w matrix-transform (map) w hope56.dtsi, 0-indeksowana.
 *
 *  LN4 LN3 LN2 LN1 LN0   │   RN0 RN1 RN2 RN3 RN4          (rząd cyfr)
 *  LT5 LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 RT5      (górny)
 *  LM5 LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 RM5      (domowy)
 *      LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4          (dolny)
 *          LH3 LH2 LH1 LH0 │ RH0 RH1 RH2 RH3              (kciuki)
 */
#pragma once

// rząd cyfr (row0)
#define LN4  0
#define LN3  1
#define LN2  2
#define LN1  3
#define LN0  4
#define RN0  5
#define RN1  6
#define RN2  7
#define RN3  8
#define RN4  9
// rząd górny (row1)
#define LT5 10
#define LT4 11
#define LT3 12
#define LT2 13
#define LT1 14
#define LT0 15
#define RT0 16
#define RT1 17
#define RT2 18
#define RT3 19
#define RT4 20
#define RT5 21
// rząd domowy (row2)
#define LM5 22
#define LM4 23
#define LM3 24
#define LM2 25
#define LM1 26
#define LM0 27
#define RM0 28
#define RM1 29
#define RM2 30
#define RM3 31
#define RM4 32
#define RM5 33
// rząd dolny (row3)
#define LB4 34
#define LB3 35
#define LB2 36
#define LB1 37
#define LB0 38
#define RB0 39
#define RB1 40
#define RB2 41
#define RB3 42
#define RB4 43
// kciuki (row4); LH0/RH0 = wewnętrzne (u nas ___)
#define LH3 44
#define LH2 45
#define LH1 46
#define LH0 47
#define RH0 48
#define RH1 49
#define RH2 50
#define RH3 51
