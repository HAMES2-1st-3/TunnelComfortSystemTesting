/**
 * \file IfxMcds_reg.h
 * \copyright Copyright (c) 2012 Infineon Technologies AG. All rights reserved.
 *
 *
 * $Revision: 663 $
 * $Date: 2012-05-09 16:02:34 +0200 (mer., 09 mai 2012) $
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 */
#ifndef IFXMCDS_REG_H
#define IFXMCDS_REG_H
/******************************************************************************/
#include "Mcds/IfxMcds_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** MCDS object */
#define MODULE_MCDS ((*(Ifx_MCDS*)0xF00E8000u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MCDS)                               */
/******************************************************************************/

/** 0, Clock Control Register */
#define MCDS_CLC ((*(volatile Ifx_CLC5*)0xF00E8000u)) /* lint --e(923)*/

/** 10, MCDS Control Register */
#define MCDS_CT ((*(volatile Ifx_MCDS_CT*)0xF00E8010u)) /* lint --e(923)*/

/** 204, Trace Buffer Bottom Register */
#define MCDS_FIFOBOT ((*(volatile Ifx_MCDS_FIFOBOT*)0xF00E8204u)) /* lint --e(923)*/

/** 210, Trace Buffer Control Register */
#define MCDS_FIFOCTL ((*(volatile Ifx_MCDS_FIFOCTL*)0xF00E8210u)) /* lint --e(923)*/

/** 200, Trace Buffer Write Pointer */
#define MCDS_FIFONOW ((*(volatile Ifx_MCDS_FIFONOW*)0xF00E8200u)) /* lint --e(923)*/

/** 208, Trace Buffer PRE/POST Register */
#define MCDS_FIFOPRE ((*(volatile Ifx_MCDS_FIFOPRE*)0xF00E8208u)) /* lint --e(923)*/

/** 20C, Trace Buffer Top Register */
#define MCDS_FIFOTOP ((*(volatile Ifx_MCDS_FIFOTOP*)0xF00E820Cu)) /* lint --e(923)*/

/** 214, Trace Buffer Comparator Register */
#define MCDS_FIFOWARN0 ((*(volatile Ifx_MCDS_FIFOWARN0*)0xF00E8214u)) /* lint --e(923)*/

/** 218, Trace Buffer Comparator Register */
#define MCDS_FIFOWARN1 ((*(volatile Ifx_MCDS_FIFOWARN1*)0xF00E8218u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define MCDS_ID ((*(volatile Ifx_ID1*)0xF00E8008u)) /* lint --e(923)*/

/** 880, Action Definition Register */
#define MCDS_MCX_ACT0 ((*(volatile Ifx_MCDS_ACT*)0xF00E8880u)) /* lint --e(923)*/

/** 884, Action Definition Register */
#define MCDS_MCX_ACT1 ((*(volatile Ifx_MCDS_ACT*)0xF00E8884u)) /* lint --e(923)*/

/** 8A8, Action Definition Register */
#define MCDS_MCX_ACT10 ((*(volatile Ifx_MCDS_ACT*)0xF00E88A8u)) /* lint --e(923)*/

/** 8AC, Action Definition Register */
#define MCDS_MCX_ACT11 ((*(volatile Ifx_MCDS_ACT*)0xF00E88ACu)) /* lint --e(923)*/

/** 8B0, Action Definition Register */
#define MCDS_MCX_ACT12 ((*(volatile Ifx_MCDS_ACT*)0xF00E88B0u)) /* lint --e(923)*/

/** 8B4, Action Definition Register */
#define MCDS_MCX_ACT13 ((*(volatile Ifx_MCDS_ACT*)0xF00E88B4u)) /* lint --e(923)*/

/** 8B8, Action Definition Register */
#define MCDS_MCX_ACT14 ((*(volatile Ifx_MCDS_ACT*)0xF00E88B8u)) /* lint --e(923)*/

/** 8BC, Action Definition Register */
#define MCDS_MCX_ACT15 ((*(volatile Ifx_MCDS_ACT*)0xF00E88BCu)) /* lint --e(923)*/

/** 8C0, Action Definition Register */
#define MCDS_MCX_ACT16 ((*(volatile Ifx_MCDS_ACT*)0xF00E88C0u)) /* lint --e(923)*/

/** 8C4, Action Definition Register */
#define MCDS_MCX_ACT17 ((*(volatile Ifx_MCDS_ACT*)0xF00E88C4u)) /* lint --e(923)*/

/** 8C8, Action Definition Register */
#define MCDS_MCX_ACT18 ((*(volatile Ifx_MCDS_ACT*)0xF00E88C8u)) /* lint --e(923)*/

/** 8CC, Action Definition Register */
#define MCDS_MCX_ACT19 ((*(volatile Ifx_MCDS_ACT*)0xF00E88CCu)) /* lint --e(923)*/

/** 888, Action Definition Register */
#define MCDS_MCX_ACT2 ((*(volatile Ifx_MCDS_ACT*)0xF00E8888u)) /* lint --e(923)*/

/** 8D0, Action Definition Register */
#define MCDS_MCX_ACT20 ((*(volatile Ifx_MCDS_ACT*)0xF00E88D0u)) /* lint --e(923)*/

/** 8D4, Action Definition Register */
#define MCDS_MCX_ACT21 ((*(volatile Ifx_MCDS_ACT*)0xF00E88D4u)) /* lint --e(923)*/

/** 8D8, Action Definition Register */
#define MCDS_MCX_ACT22 ((*(volatile Ifx_MCDS_ACT*)0xF00E88D8u)) /* lint --e(923)*/

/** 8DC, Action Definition Register */
#define MCDS_MCX_ACT23 ((*(volatile Ifx_MCDS_ACT*)0xF00E88DCu)) /* lint --e(923)*/

/** 8E0, Action Definition Register */
#define MCDS_MCX_ACT24 ((*(volatile Ifx_MCDS_ACT*)0xF00E88E0u)) /* lint --e(923)*/

/** 8E4, Action Definition Register */
#define MCDS_MCX_ACT25 ((*(volatile Ifx_MCDS_ACT*)0xF00E88E4u)) /* lint --e(923)*/

/** 8E8, Action Definition Register */
#define MCDS_MCX_ACT26 ((*(volatile Ifx_MCDS_ACT*)0xF00E88E8u)) /* lint --e(923)*/

/** 8EC, Action Definition Register */
#define MCDS_MCX_ACT27 ((*(volatile Ifx_MCDS_ACT*)0xF00E88ECu)) /* lint --e(923)*/

/** 8F0, Action Definition Register */
#define MCDS_MCX_ACT28 ((*(volatile Ifx_MCDS_ACT*)0xF00E88F0u)) /* lint --e(923)*/

/** 8F4, Action Definition Register */
#define MCDS_MCX_ACT29 ((*(volatile Ifx_MCDS_ACT*)0xF00E88F4u)) /* lint --e(923)*/

/** 88C, Action Definition Register */
#define MCDS_MCX_ACT3 ((*(volatile Ifx_MCDS_ACT*)0xF00E888Cu)) /* lint --e(923)*/

/** 8F8, Action Definition Register */
#define MCDS_MCX_ACT30 ((*(volatile Ifx_MCDS_ACT*)0xF00E88F8u)) /* lint --e(923)*/

/** 8FC, Action Definition Register */
#define MCDS_MCX_ACT31 ((*(volatile Ifx_MCDS_ACT*)0xF00E88FCu)) /* lint --e(923)*/

/** 900, Action Definition Register */
#define MCDS_MCX_ACT32 ((*(volatile Ifx_MCDS_ACT*)0xF00E8900u)) /* lint --e(923)*/

/** 904, Action Definition Register */
#define MCDS_MCX_ACT33 ((*(volatile Ifx_MCDS_ACT*)0xF00E8904u)) /* lint --e(923)*/

/** 908, Action Definition Register */
#define MCDS_MCX_ACT34 ((*(volatile Ifx_MCDS_ACT*)0xF00E8908u)) /* lint --e(923)*/

/** 90C, Action Definition Register */
#define MCDS_MCX_ACT35 ((*(volatile Ifx_MCDS_ACT*)0xF00E890Cu)) /* lint --e(923)*/

/** 910, Action Definition Register */
#define MCDS_MCX_ACT36 ((*(volatile Ifx_MCDS_ACT*)0xF00E8910u)) /* lint --e(923)*/

/** 914, Action Definition Register */
#define MCDS_MCX_ACT37 ((*(volatile Ifx_MCDS_ACT*)0xF00E8914u)) /* lint --e(923)*/

/** 918, Action Definition Register */
#define MCDS_MCX_ACT38 ((*(volatile Ifx_MCDS_ACT*)0xF00E8918u)) /* lint --e(923)*/

/** 91C, Action Definition Register */
#define MCDS_MCX_ACT39 ((*(volatile Ifx_MCDS_ACT*)0xF00E891Cu)) /* lint --e(923)*/

/** 890, Action Definition Register */
#define MCDS_MCX_ACT4 ((*(volatile Ifx_MCDS_ACT*)0xF00E8890u)) /* lint --e(923)*/

/** 920, Action Definition Register */
#define MCDS_MCX_ACT40 ((*(volatile Ifx_MCDS_ACT*)0xF00E8920u)) /* lint --e(923)*/

/** 924, Action Definition Register */
#define MCDS_MCX_ACT41 ((*(volatile Ifx_MCDS_ACT*)0xF00E8924u)) /* lint --e(923)*/

/** 928, Action Definition Register */
#define MCDS_MCX_ACT42 ((*(volatile Ifx_MCDS_ACT*)0xF00E8928u)) /* lint --e(923)*/

/** 92C, Action Definition Register */
#define MCDS_MCX_ACT43 ((*(volatile Ifx_MCDS_ACT*)0xF00E892Cu)) /* lint --e(923)*/

/** 930, Action Definition Register */
#define MCDS_MCX_ACT44 ((*(volatile Ifx_MCDS_ACT*)0xF00E8930u)) /* lint --e(923)*/

/** 934, Action Definition Register */
#define MCDS_MCX_ACT45 ((*(volatile Ifx_MCDS_ACT*)0xF00E8934u)) /* lint --e(923)*/

/** 938, Action Definition Register */
#define MCDS_MCX_ACT46 ((*(volatile Ifx_MCDS_ACT*)0xF00E8938u)) /* lint --e(923)*/

/** 93C, Action Definition Register */
#define MCDS_MCX_ACT47 ((*(volatile Ifx_MCDS_ACT*)0xF00E893Cu)) /* lint --e(923)*/

/** 940, Action Definition Register */
#define MCDS_MCX_ACT48 ((*(volatile Ifx_MCDS_ACT*)0xF00E8940u)) /* lint --e(923)*/

/** 944, Action Definition Register */
#define MCDS_MCX_ACT49 ((*(volatile Ifx_MCDS_ACT*)0xF00E8944u)) /* lint --e(923)*/

/** 894, Action Definition Register */
#define MCDS_MCX_ACT5 ((*(volatile Ifx_MCDS_ACT*)0xF00E8894u)) /* lint --e(923)*/

/** 948, Action Definition Register */
#define MCDS_MCX_ACT50 ((*(volatile Ifx_MCDS_ACT*)0xF00E8948u)) /* lint --e(923)*/

/** 94C, Action Definition Register */
#define MCDS_MCX_ACT51 ((*(volatile Ifx_MCDS_ACT*)0xF00E894Cu)) /* lint --e(923)*/

/** 950, Action Definition Register */
#define MCDS_MCX_ACT52 ((*(volatile Ifx_MCDS_ACT*)0xF00E8950u)) /* lint --e(923)*/

/** 954, Action Definition Register */
#define MCDS_MCX_ACT53 ((*(volatile Ifx_MCDS_ACT*)0xF00E8954u)) /* lint --e(923)*/

/** 958, Action Definition Register */
#define MCDS_MCX_ACT54 ((*(volatile Ifx_MCDS_ACT*)0xF00E8958u)) /* lint --e(923)*/

/** 95C, Action Definition Register */
#define MCDS_MCX_ACT55 ((*(volatile Ifx_MCDS_ACT*)0xF00E895Cu)) /* lint --e(923)*/

/** 960, Action Definition Register */
#define MCDS_MCX_ACT56 ((*(volatile Ifx_MCDS_ACT*)0xF00E8960u)) /* lint --e(923)*/

/** 964, Action Definition Register */
#define MCDS_MCX_ACT57 ((*(volatile Ifx_MCDS_ACT*)0xF00E8964u)) /* lint --e(923)*/

/** 968, Action Definition Register */
#define MCDS_MCX_ACT58 ((*(volatile Ifx_MCDS_ACT*)0xF00E8968u)) /* lint --e(923)*/

/** 96C, Action Definition Register */
#define MCDS_MCX_ACT59 ((*(volatile Ifx_MCDS_ACT*)0xF00E896Cu)) /* lint --e(923)*/

/** 898, Action Definition Register */
#define MCDS_MCX_ACT6 ((*(volatile Ifx_MCDS_ACT*)0xF00E8898u)) /* lint --e(923)*/

/** 970, Action Definition Register */
#define MCDS_MCX_ACT60 ((*(volatile Ifx_MCDS_ACT*)0xF00E8970u)) /* lint --e(923)*/

/** 974, Action Definition Register */
#define MCDS_MCX_ACT61 ((*(volatile Ifx_MCDS_ACT*)0xF00E8974u)) /* lint --e(923)*/

/** 978, Action Definition Register */
#define MCDS_MCX_ACT62 ((*(volatile Ifx_MCDS_ACT*)0xF00E8978u)) /* lint --e(923)*/

/** 97C, Action Definition Register */
#define MCDS_MCX_ACT63 ((*(volatile Ifx_MCDS_ACT*)0xF00E897Cu)) /* lint --e(923)*/

/** 980, Action Definition Register */
#define MCDS_MCX_ACT64 ((*(volatile Ifx_MCDS_ACT*)0xF00E8980u)) /* lint --e(923)*/

/** 984, Action Definition Register */
#define MCDS_MCX_ACT65 ((*(volatile Ifx_MCDS_ACT*)0xF00E8984u)) /* lint --e(923)*/

/** 988, Action Definition Register */
#define MCDS_MCX_ACT66 ((*(volatile Ifx_MCDS_ACT*)0xF00E8988u)) /* lint --e(923)*/

/** 98C, Action Definition Register */
#define MCDS_MCX_ACT67 ((*(volatile Ifx_MCDS_ACT*)0xF00E898Cu)) /* lint --e(923)*/

/** 990, Action Definition Register */
#define MCDS_MCX_ACT68 ((*(volatile Ifx_MCDS_ACT*)0xF00E8990u)) /* lint --e(923)*/

/** 994, Action Definition Register */
#define MCDS_MCX_ACT69 ((*(volatile Ifx_MCDS_ACT*)0xF00E8994u)) /* lint --e(923)*/

/** 89C, Action Definition Register */
#define MCDS_MCX_ACT7 ((*(volatile Ifx_MCDS_ACT*)0xF00E889Cu)) /* lint --e(923)*/

/** 998, Action Definition Register */
#define MCDS_MCX_ACT70 ((*(volatile Ifx_MCDS_ACT*)0xF00E8998u)) /* lint --e(923)*/

/** 99C, Action Definition Register */
#define MCDS_MCX_ACT71 ((*(volatile Ifx_MCDS_ACT*)0xF00E899Cu)) /* lint --e(923)*/

/** 8A0, Action Definition Register */
#define MCDS_MCX_ACT8 ((*(volatile Ifx_MCDS_ACT*)0xF00E88A0u)) /* lint --e(923)*/

/** 8A4, Action Definition Register */
#define MCDS_MCX_ACT9 ((*(volatile Ifx_MCDS_ACT*)0xF00E88A4u)) /* lint --e(923)*/

/** A00, Counter Control Register */
#define MCDS_MCX_CNT0_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8A00u)) /* lint --e(923)*/

/** A08, Current Count Register */
#define MCDS_MCX_CNT0_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8A08u)) /* lint --e(923)*/

/** A04, Counter Limit Register */
#define MCDS_MCX_CNT0_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8A04u)) /* lint --e(923)*/

/** AA0, Counter Control Register */
#define MCDS_MCX_CNT10_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8AA0u)) /* lint --e(923)*/

/** AA8, Current Count Register */
#define MCDS_MCX_CNT10_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8AA8u)) /* lint --e(923)*/

/** AA4, Counter Limit Register */
#define MCDS_MCX_CNT10_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8AA4u)) /* lint --e(923)*/

/** AB0, Counter Control Register */
#define MCDS_MCX_CNT11_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8AB0u)) /* lint --e(923)*/

/** AB8, Current Count Register */
#define MCDS_MCX_CNT11_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8AB8u)) /* lint --e(923)*/

/** AB4, Counter Limit Register */
#define MCDS_MCX_CNT11_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8AB4u)) /* lint --e(923)*/

/** AC0, Counter Control Register */
#define MCDS_MCX_CNT12_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8AC0u)) /* lint --e(923)*/

/** AC8, Current Count Register */
#define MCDS_MCX_CNT12_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8AC8u)) /* lint --e(923)*/

/** AC4, Counter Limit Register */
#define MCDS_MCX_CNT12_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8AC4u)) /* lint --e(923)*/

/** AD0, Counter Control Register */
#define MCDS_MCX_CNT13_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8AD0u)) /* lint --e(923)*/

/** AD8, Current Count Register */
#define MCDS_MCX_CNT13_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8AD8u)) /* lint --e(923)*/

/** AD4, Counter Limit Register */
#define MCDS_MCX_CNT13_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8AD4u)) /* lint --e(923)*/

/** AE0, Counter Control Register */
#define MCDS_MCX_CNT14_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8AE0u)) /* lint --e(923)*/

/** AE8, Current Count Register */
#define MCDS_MCX_CNT14_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8AE8u)) /* lint --e(923)*/

/** AE4, Counter Limit Register */
#define MCDS_MCX_CNT14_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8AE4u)) /* lint --e(923)*/

/** AF0, Counter Control Register */
#define MCDS_MCX_CNT15_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8AF0u)) /* lint --e(923)*/

/** AF8, Current Count Register */
#define MCDS_MCX_CNT15_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8AF8u)) /* lint --e(923)*/

/** AF4, Counter Limit Register */
#define MCDS_MCX_CNT15_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8AF4u)) /* lint --e(923)*/

/** B00, Counter Control Register */
#define MCDS_MCX_CNT16_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8B00u)) /* lint --e(923)*/

/** B08, Current Count Register */
#define MCDS_MCX_CNT16_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8B08u)) /* lint --e(923)*/

/** B04, Counter Limit Register */
#define MCDS_MCX_CNT16_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8B04u)) /* lint --e(923)*/

/** B10, Counter Control Register */
#define MCDS_MCX_CNT17_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8B10u)) /* lint --e(923)*/

/** B18, Current Count Register */
#define MCDS_MCX_CNT17_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8B18u)) /* lint --e(923)*/

/** B14, Counter Limit Register */
#define MCDS_MCX_CNT17_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8B14u)) /* lint --e(923)*/

/** B20, Counter Control Register */
#define MCDS_MCX_CNT18_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8B20u)) /* lint --e(923)*/

/** B28, Current Count Register */
#define MCDS_MCX_CNT18_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8B28u)) /* lint --e(923)*/

/** B24, Counter Limit Register */
#define MCDS_MCX_CNT18_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8B24u)) /* lint --e(923)*/

/** B30, Counter Control Register */
#define MCDS_MCX_CNT19_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8B30u)) /* lint --e(923)*/

/** B38, Current Count Register */
#define MCDS_MCX_CNT19_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8B38u)) /* lint --e(923)*/

/** B34, Counter Limit Register */
#define MCDS_MCX_CNT19_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8B34u)) /* lint --e(923)*/

/** A10, Counter Control Register */
#define MCDS_MCX_CNT1_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8A10u)) /* lint --e(923)*/

/** A18, Current Count Register */
#define MCDS_MCX_CNT1_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8A18u)) /* lint --e(923)*/

/** A14, Counter Limit Register */
#define MCDS_MCX_CNT1_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8A14u)) /* lint --e(923)*/

/** B40, Counter Control Register */
#define MCDS_MCX_CNT20_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8B40u)) /* lint --e(923)*/

/** B48, Current Count Register */
#define MCDS_MCX_CNT20_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8B48u)) /* lint --e(923)*/

/** B44, Counter Limit Register */
#define MCDS_MCX_CNT20_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8B44u)) /* lint --e(923)*/

/** B50, Counter Control Register */
#define MCDS_MCX_CNT21_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8B50u)) /* lint --e(923)*/

/** B58, Current Count Register */
#define MCDS_MCX_CNT21_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8B58u)) /* lint --e(923)*/

/** B54, Counter Limit Register */
#define MCDS_MCX_CNT21_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8B54u)) /* lint --e(923)*/

/** B60, Counter Control Register */
#define MCDS_MCX_CNT22_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8B60u)) /* lint --e(923)*/

/** B68, Current Count Register */
#define MCDS_MCX_CNT22_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8B68u)) /* lint --e(923)*/

/** B64, Counter Limit Register */
#define MCDS_MCX_CNT22_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8B64u)) /* lint --e(923)*/

/** B70, Counter Control Register */
#define MCDS_MCX_CNT23_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8B70u)) /* lint --e(923)*/

/** B78, Current Count Register */
#define MCDS_MCX_CNT23_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8B78u)) /* lint --e(923)*/

/** B74, Counter Limit Register */
#define MCDS_MCX_CNT23_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8B74u)) /* lint --e(923)*/

/** B80, Counter Control Register */
#define MCDS_MCX_CNT24_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8B80u)) /* lint --e(923)*/

/** B88, Current Count Register */
#define MCDS_MCX_CNT24_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8B88u)) /* lint --e(923)*/

/** B84, Counter Limit Register */
#define MCDS_MCX_CNT24_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8B84u)) /* lint --e(923)*/

/** B90, Counter Control Register */
#define MCDS_MCX_CNT25_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8B90u)) /* lint --e(923)*/

/** B98, Current Count Register */
#define MCDS_MCX_CNT25_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8B98u)) /* lint --e(923)*/

/** B94, Counter Limit Register */
#define MCDS_MCX_CNT25_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8B94u)) /* lint --e(923)*/

/** BA0, Counter Control Register */
#define MCDS_MCX_CNT26_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8BA0u)) /* lint --e(923)*/

/** BA8, Current Count Register */
#define MCDS_MCX_CNT26_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8BA8u)) /* lint --e(923)*/

/** BA4, Counter Limit Register */
#define MCDS_MCX_CNT26_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8BA4u)) /* lint --e(923)*/

/** BB0, Counter Control Register */
#define MCDS_MCX_CNT27_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8BB0u)) /* lint --e(923)*/

/** BB8, Current Count Register */
#define MCDS_MCX_CNT27_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8BB8u)) /* lint --e(923)*/

/** BB4, Counter Limit Register */
#define MCDS_MCX_CNT27_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8BB4u)) /* lint --e(923)*/

/** BC0, Counter Control Register */
#define MCDS_MCX_CNT28_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8BC0u)) /* lint --e(923)*/

/** BC8, Current Count Register */
#define MCDS_MCX_CNT28_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8BC8u)) /* lint --e(923)*/

/** BC4, Counter Limit Register */
#define MCDS_MCX_CNT28_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8BC4u)) /* lint --e(923)*/

/** BD0, Counter Control Register */
#define MCDS_MCX_CNT29_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8BD0u)) /* lint --e(923)*/

/** BD8, Current Count Register */
#define MCDS_MCX_CNT29_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8BD8u)) /* lint --e(923)*/

/** BD4, Counter Limit Register */
#define MCDS_MCX_CNT29_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8BD4u)) /* lint --e(923)*/

/** A20, Counter Control Register */
#define MCDS_MCX_CNT2_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8A20u)) /* lint --e(923)*/

/** A28, Current Count Register */
#define MCDS_MCX_CNT2_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8A28u)) /* lint --e(923)*/

/** A24, Counter Limit Register */
#define MCDS_MCX_CNT2_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8A24u)) /* lint --e(923)*/

/** BE0, Counter Control Register */
#define MCDS_MCX_CNT30_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8BE0u)) /* lint --e(923)*/

/** BE8, Current Count Register */
#define MCDS_MCX_CNT30_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8BE8u)) /* lint --e(923)*/

/** BE4, Counter Limit Register */
#define MCDS_MCX_CNT30_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8BE4u)) /* lint --e(923)*/

/** BF0, Counter Control Register */
#define MCDS_MCX_CNT31_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8BF0u)) /* lint --e(923)*/

/** BF8, Current Count Register */
#define MCDS_MCX_CNT31_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8BF8u)) /* lint --e(923)*/

/** BF4, Counter Limit Register */
#define MCDS_MCX_CNT31_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8BF4u)) /* lint --e(923)*/

/** A30, Counter Control Register */
#define MCDS_MCX_CNT3_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8A30u)) /* lint --e(923)*/

/** A38, Current Count Register */
#define MCDS_MCX_CNT3_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8A38u)) /* lint --e(923)*/

/** A34, Counter Limit Register */
#define MCDS_MCX_CNT3_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8A34u)) /* lint --e(923)*/

/** A40, Counter Control Register */
#define MCDS_MCX_CNT4_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8A40u)) /* lint --e(923)*/

/** A48, Current Count Register */
#define MCDS_MCX_CNT4_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8A48u)) /* lint --e(923)*/

/** A44, Counter Limit Register */
#define MCDS_MCX_CNT4_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8A44u)) /* lint --e(923)*/

/** A50, Counter Control Register */
#define MCDS_MCX_CNT5_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8A50u)) /* lint --e(923)*/

/** A58, Current Count Register */
#define MCDS_MCX_CNT5_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8A58u)) /* lint --e(923)*/

/** A54, Counter Limit Register */
#define MCDS_MCX_CNT5_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8A54u)) /* lint --e(923)*/

/** A60, Counter Control Register */
#define MCDS_MCX_CNT6_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8A60u)) /* lint --e(923)*/

/** A68, Current Count Register */
#define MCDS_MCX_CNT6_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8A68u)) /* lint --e(923)*/

/** A64, Counter Limit Register */
#define MCDS_MCX_CNT6_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8A64u)) /* lint --e(923)*/

/** A70, Counter Control Register */
#define MCDS_MCX_CNT7_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8A70u)) /* lint --e(923)*/

/** A78, Current Count Register */
#define MCDS_MCX_CNT7_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8A78u)) /* lint --e(923)*/

/** A74, Counter Limit Register */
#define MCDS_MCX_CNT7_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8A74u)) /* lint --e(923)*/

/** A80, Counter Control Register */
#define MCDS_MCX_CNT8_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8A80u)) /* lint --e(923)*/

/** A88, Current Count Register */
#define MCDS_MCX_CNT8_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8A88u)) /* lint --e(923)*/

/** A84, Counter Limit Register */
#define MCDS_MCX_CNT8_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8A84u)) /* lint --e(923)*/

/** A90, Counter Control Register */
#define MCDS_MCX_CNT9_CCL ((*(volatile Ifx_MCDS_CNT_CCL*)0xF00E8A90u)) /* lint --e(923)*/

/** A98, Current Count Register */
#define MCDS_MCX_CNT9_CNT ((*(volatile Ifx_MCDS_CNT_CNT*)0xF00E8A98u)) /* lint --e(923)*/

/** A94, Counter Limit Register */
#define MCDS_MCX_CNT9_LMT ((*(volatile Ifx_MCDS_CNT_LMT*)0xF00E8A94u)) /* lint --e(923)*/

/** 800, Event Definition Register */
#define MCDS_MCX_EVT0 ((*(volatile Ifx_MCDS_EVT*)0xF00E8800u)) /* lint --e(923)*/

/** 804, Event Definition Register */
#define MCDS_MCX_EVT1 ((*(volatile Ifx_MCDS_EVT*)0xF00E8804u)) /* lint --e(923)*/

/** 828, Event Definition Register */
#define MCDS_MCX_EVT10 ((*(volatile Ifx_MCDS_EVT*)0xF00E8828u)) /* lint --e(923)*/

/** 82C, Event Definition Register */
#define MCDS_MCX_EVT11 ((*(volatile Ifx_MCDS_EVT*)0xF00E882Cu)) /* lint --e(923)*/

/** 830, Event Definition Register */
#define MCDS_MCX_EVT12 ((*(volatile Ifx_MCDS_EVT*)0xF00E8830u)) /* lint --e(923)*/

/** 834, Event Definition Register */
#define MCDS_MCX_EVT13 ((*(volatile Ifx_MCDS_EVT*)0xF00E8834u)) /* lint --e(923)*/

/** 838, Event Definition Register */
#define MCDS_MCX_EVT14 ((*(volatile Ifx_MCDS_EVT*)0xF00E8838u)) /* lint --e(923)*/

/** 83C, Event Definition Register */
#define MCDS_MCX_EVT15 ((*(volatile Ifx_MCDS_EVT*)0xF00E883Cu)) /* lint --e(923)*/

/** 840, Event Definition Register */
#define MCDS_MCX_EVT16 ((*(volatile Ifx_MCDS_EVT*)0xF00E8840u)) /* lint --e(923)*/

/** 844, Event Definition Register */
#define MCDS_MCX_EVT17 ((*(volatile Ifx_MCDS_EVT*)0xF00E8844u)) /* lint --e(923)*/

/** 848, Event Definition Register */
#define MCDS_MCX_EVT18 ((*(volatile Ifx_MCDS_EVT*)0xF00E8848u)) /* lint --e(923)*/

/** 84C, Event Definition Register */
#define MCDS_MCX_EVT19 ((*(volatile Ifx_MCDS_EVT*)0xF00E884Cu)) /* lint --e(923)*/

/** 808, Event Definition Register */
#define MCDS_MCX_EVT2 ((*(volatile Ifx_MCDS_EVT*)0xF00E8808u)) /* lint --e(923)*/

/** 850, Event Definition Register */
#define MCDS_MCX_EVT20 ((*(volatile Ifx_MCDS_EVT*)0xF00E8850u)) /* lint --e(923)*/

/** 854, Event Definition Register */
#define MCDS_MCX_EVT21 ((*(volatile Ifx_MCDS_EVT*)0xF00E8854u)) /* lint --e(923)*/

/** 858, Event Definition Register */
#define MCDS_MCX_EVT22 ((*(volatile Ifx_MCDS_EVT*)0xF00E8858u)) /* lint --e(923)*/

/** 85C, Event Definition Register */
#define MCDS_MCX_EVT23 ((*(volatile Ifx_MCDS_EVT*)0xF00E885Cu)) /* lint --e(923)*/

/** 80C, Event Definition Register */
#define MCDS_MCX_EVT3 ((*(volatile Ifx_MCDS_EVT*)0xF00E880Cu)) /* lint --e(923)*/

/** 810, Event Definition Register */
#define MCDS_MCX_EVT4 ((*(volatile Ifx_MCDS_EVT*)0xF00E8810u)) /* lint --e(923)*/

/** 814, Event Definition Register */
#define MCDS_MCX_EVT5 ((*(volatile Ifx_MCDS_EVT*)0xF00E8814u)) /* lint --e(923)*/

/** 818, Event Definition Register */
#define MCDS_MCX_EVT6 ((*(volatile Ifx_MCDS_EVT*)0xF00E8818u)) /* lint --e(923)*/

/** 81C, Event Definition Register */
#define MCDS_MCX_EVT7 ((*(volatile Ifx_MCDS_EVT*)0xF00E881Cu)) /* lint --e(923)*/

/** 820, Event Definition Register */
#define MCDS_MCX_EVT8 ((*(volatile Ifx_MCDS_EVT*)0xF00E8820u)) /* lint --e(923)*/

/** 824, Event Definition Register */
#define MCDS_MCX_EVT9 ((*(volatile Ifx_MCDS_EVT*)0xF00E8824u)) /* lint --e(923)*/

/** Alias for MCDS_MCX_ACT0.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT0 instead.
 * 880, Action Definition Register
 */
#define MCDS_MCXACT0 (MCDS_MCX_ACT0)

/** Alias for MCDS_MCX_ACT1.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT1 instead.
 * 884, Action Definition Register
 */
#define MCDS_MCXACT1 (MCDS_MCX_ACT1)

/** Alias for MCDS_MCX_ACT10.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT10 instead.
 * 8A8, Action Definition Register
 */
#define MCDS_MCXACT10 (MCDS_MCX_ACT10)

/** Alias for MCDS_MCX_ACT11.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT11 instead.
 * 8AC, Action Definition Register
 */
#define MCDS_MCXACT11 (MCDS_MCX_ACT11)

/** Alias for MCDS_MCX_ACT12.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT12 instead.
 * 8B0, Action Definition Register
 */
#define MCDS_MCXACT12 (MCDS_MCX_ACT12)

/** Alias for MCDS_MCX_ACT13.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT13 instead.
 * 8B4, Action Definition Register
 */
#define MCDS_MCXACT13 (MCDS_MCX_ACT13)

/** Alias for MCDS_MCX_ACT14.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT14 instead.
 * 8B8, Action Definition Register
 */
#define MCDS_MCXACT14 (MCDS_MCX_ACT14)

/** Alias for MCDS_MCX_ACT15.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT15 instead.
 * 8BC, Action Definition Register
 */
#define MCDS_MCXACT15 (MCDS_MCX_ACT15)

/** Alias for MCDS_MCX_ACT16.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT16 instead.
 * 8C0, Action Definition Register
 */
#define MCDS_MCXACT16 (MCDS_MCX_ACT16)

/** Alias for MCDS_MCX_ACT17.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT17 instead.
 * 8C4, Action Definition Register
 */
#define MCDS_MCXACT17 (MCDS_MCX_ACT17)

/** Alias for MCDS_MCX_ACT18.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT18 instead.
 * 8C8, Action Definition Register
 */
#define MCDS_MCXACT18 (MCDS_MCX_ACT18)

/** Alias for MCDS_MCX_ACT19.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT19 instead.
 * 8CC, Action Definition Register
 */
#define MCDS_MCXACT19 (MCDS_MCX_ACT19)

/** Alias for MCDS_MCX_ACT2.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT2 instead.
 * 888, Action Definition Register
 */
#define MCDS_MCXACT2 (MCDS_MCX_ACT2)

/** Alias for MCDS_MCX_ACT20.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT20 instead.
 * 8D0, Action Definition Register
 */
#define MCDS_MCXACT20 (MCDS_MCX_ACT20)

/** Alias for MCDS_MCX_ACT21.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT21 instead.
 * 8D4, Action Definition Register
 */
#define MCDS_MCXACT21 (MCDS_MCX_ACT21)

/** Alias for MCDS_MCX_ACT22.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT22 instead.
 * 8D8, Action Definition Register
 */
#define MCDS_MCXACT22 (MCDS_MCX_ACT22)

/** Alias for MCDS_MCX_ACT23.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT23 instead.
 * 8DC, Action Definition Register
 */
#define MCDS_MCXACT23 (MCDS_MCX_ACT23)

/** Alias for MCDS_MCX_ACT24.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT24 instead.
 * 8E0, Action Definition Register
 */
#define MCDS_MCXACT24 (MCDS_MCX_ACT24)

/** Alias for MCDS_MCX_ACT25.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT25 instead.
 * 8E4, Action Definition Register
 */
#define MCDS_MCXACT25 (MCDS_MCX_ACT25)

/** Alias for MCDS_MCX_ACT26.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT26 instead.
 * 8E8, Action Definition Register
 */
#define MCDS_MCXACT26 (MCDS_MCX_ACT26)

/** Alias for MCDS_MCX_ACT27.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT27 instead.
 * 8EC, Action Definition Register
 */
#define MCDS_MCXACT27 (MCDS_MCX_ACT27)

/** Alias for MCDS_MCX_ACT28.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT28 instead.
 * 8F0, Action Definition Register
 */
#define MCDS_MCXACT28 (MCDS_MCX_ACT28)

/** Alias for MCDS_MCX_ACT29.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT29 instead.
 * 8F4, Action Definition Register
 */
#define MCDS_MCXACT29 (MCDS_MCX_ACT29)

/** Alias for MCDS_MCX_ACT3.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT3 instead.
 * 88C, Action Definition Register
 */
#define MCDS_MCXACT3 (MCDS_MCX_ACT3)

/** Alias for MCDS_MCX_ACT30.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT30 instead.
 * 8F8, Action Definition Register
 */
#define MCDS_MCXACT30 (MCDS_MCX_ACT30)

/** Alias for MCDS_MCX_ACT31.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT31 instead.
 * 8FC, Action Definition Register
 */
#define MCDS_MCXACT31 (MCDS_MCX_ACT31)

/** Alias for MCDS_MCX_ACT32.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT32 instead.
 * 900, Action Definition Register
 */
#define MCDS_MCXACT32 (MCDS_MCX_ACT32)

/** Alias for MCDS_MCX_ACT33.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT33 instead.
 * 904, Action Definition Register
 */
#define MCDS_MCXACT33 (MCDS_MCX_ACT33)

/** Alias for MCDS_MCX_ACT34.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT34 instead.
 * 908, Action Definition Register
 */
#define MCDS_MCXACT34 (MCDS_MCX_ACT34)

/** Alias for MCDS_MCX_ACT35.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT35 instead.
 * 90C, Action Definition Register
 */
#define MCDS_MCXACT35 (MCDS_MCX_ACT35)

/** Alias for MCDS_MCX_ACT36.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT36 instead.
 * 910, Action Definition Register
 */
#define MCDS_MCXACT36 (MCDS_MCX_ACT36)

/** Alias for MCDS_MCX_ACT37.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT37 instead.
 * 914, Action Definition Register
 */
#define MCDS_MCXACT37 (MCDS_MCX_ACT37)

/** Alias for MCDS_MCX_ACT38.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT38 instead.
 * 918, Action Definition Register
 */
#define MCDS_MCXACT38 (MCDS_MCX_ACT38)

/** Alias for MCDS_MCX_ACT39.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT39 instead.
 * 91C, Action Definition Register
 */
#define MCDS_MCXACT39 (MCDS_MCX_ACT39)

/** Alias for MCDS_MCX_ACT4.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT4 instead.
 * 890, Action Definition Register
 */
#define MCDS_MCXACT4 (MCDS_MCX_ACT4)

/** Alias for MCDS_MCX_ACT40.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT40 instead.
 * 920, Action Definition Register
 */
#define MCDS_MCXACT40 (MCDS_MCX_ACT40)

/** Alias for MCDS_MCX_ACT41.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT41 instead.
 * 924, Action Definition Register
 */
#define MCDS_MCXACT41 (MCDS_MCX_ACT41)

/** Alias for MCDS_MCX_ACT42.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT42 instead.
 * 928, Action Definition Register
 */
#define MCDS_MCXACT42 (MCDS_MCX_ACT42)

/** Alias for MCDS_MCX_ACT43.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT43 instead.
 * 92C, Action Definition Register
 */
#define MCDS_MCXACT43 (MCDS_MCX_ACT43)

/** Alias for MCDS_MCX_ACT44.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT44 instead.
 * 930, Action Definition Register
 */
#define MCDS_MCXACT44 (MCDS_MCX_ACT44)

/** Alias for MCDS_MCX_ACT45.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT45 instead.
 * 934, Action Definition Register
 */
#define MCDS_MCXACT45 (MCDS_MCX_ACT45)

/** Alias for MCDS_MCX_ACT46.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT46 instead.
 * 938, Action Definition Register
 */
#define MCDS_MCXACT46 (MCDS_MCX_ACT46)

/** Alias for MCDS_MCX_ACT47.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT47 instead.
 * 93C, Action Definition Register
 */
#define MCDS_MCXACT47 (MCDS_MCX_ACT47)

/** Alias for MCDS_MCX_ACT48.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT48 instead.
 * 940, Action Definition Register
 */
#define MCDS_MCXACT48 (MCDS_MCX_ACT48)

/** Alias for MCDS_MCX_ACT49.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT49 instead.
 * 944, Action Definition Register
 */
#define MCDS_MCXACT49 (MCDS_MCX_ACT49)

/** Alias for MCDS_MCX_ACT5.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT5 instead.
 * 894, Action Definition Register
 */
#define MCDS_MCXACT5 (MCDS_MCX_ACT5)

/** Alias for MCDS_MCX_ACT50.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT50 instead.
 * 948, Action Definition Register
 */
#define MCDS_MCXACT50 (MCDS_MCX_ACT50)

/** Alias for MCDS_MCX_ACT51.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT51 instead.
 * 94C, Action Definition Register
 */
#define MCDS_MCXACT51 (MCDS_MCX_ACT51)

/** Alias for MCDS_MCX_ACT52.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT52 instead.
 * 950, Action Definition Register
 */
#define MCDS_MCXACT52 (MCDS_MCX_ACT52)

/** Alias for MCDS_MCX_ACT53.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT53 instead.
 * 954, Action Definition Register
 */
#define MCDS_MCXACT53 (MCDS_MCX_ACT53)

/** Alias for MCDS_MCX_ACT54.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT54 instead.
 * 958, Action Definition Register
 */
#define MCDS_MCXACT54 (MCDS_MCX_ACT54)

/** Alias for MCDS_MCX_ACT55.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT55 instead.
 * 95C, Action Definition Register
 */
#define MCDS_MCXACT55 (MCDS_MCX_ACT55)

/** Alias for MCDS_MCX_ACT56.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT56 instead.
 * 960, Action Definition Register
 */
#define MCDS_MCXACT56 (MCDS_MCX_ACT56)

/** Alias for MCDS_MCX_ACT57.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT57 instead.
 * 964, Action Definition Register
 */
#define MCDS_MCXACT57 (MCDS_MCX_ACT57)

/** Alias for MCDS_MCX_ACT58.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT58 instead.
 * 968, Action Definition Register
 */
#define MCDS_MCXACT58 (MCDS_MCX_ACT58)

/** Alias for MCDS_MCX_ACT59.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT59 instead.
 * 96C, Action Definition Register
 */
#define MCDS_MCXACT59 (MCDS_MCX_ACT59)

/** Alias for MCDS_MCX_ACT6.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT6 instead.
 * 898, Action Definition Register
 */
#define MCDS_MCXACT6 (MCDS_MCX_ACT6)

/** Alias for MCDS_MCX_ACT60.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT60 instead.
 * 970, Action Definition Register
 */
#define MCDS_MCXACT60 (MCDS_MCX_ACT60)

/** Alias for MCDS_MCX_ACT61.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT61 instead.
 * 974, Action Definition Register
 */
#define MCDS_MCXACT61 (MCDS_MCX_ACT61)

/** Alias for MCDS_MCX_ACT62.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT62 instead.
 * 978, Action Definition Register
 */
#define MCDS_MCXACT62 (MCDS_MCX_ACT62)

/** Alias for MCDS_MCX_ACT63.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT63 instead.
 * 97C, Action Definition Register
 */
#define MCDS_MCXACT63 (MCDS_MCX_ACT63)

/** Alias for MCDS_MCX_ACT64.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT64 instead.
 * 980, Action Definition Register
 */
#define MCDS_MCXACT64 (MCDS_MCX_ACT64)

/** Alias for MCDS_MCX_ACT65.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT65 instead.
 * 984, Action Definition Register
 */
#define MCDS_MCXACT65 (MCDS_MCX_ACT65)

/** Alias for MCDS_MCX_ACT66.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT66 instead.
 * 988, Action Definition Register
 */
#define MCDS_MCXACT66 (MCDS_MCX_ACT66)

/** Alias for MCDS_MCX_ACT67.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT67 instead.
 * 98C, Action Definition Register
 */
#define MCDS_MCXACT67 (MCDS_MCX_ACT67)

/** Alias for MCDS_MCX_ACT68.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT68 instead.
 * 990, Action Definition Register
 */
#define MCDS_MCXACT68 (MCDS_MCX_ACT68)

/** Alias for MCDS_MCX_ACT69.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT69 instead.
 * 994, Action Definition Register
 */
#define MCDS_MCXACT69 (MCDS_MCX_ACT69)

/** Alias for MCDS_MCX_ACT7.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT7 instead.
 * 89C, Action Definition Register
 */
#define MCDS_MCXACT7 (MCDS_MCX_ACT7)

/** Alias for MCDS_MCX_ACT70.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT70 instead.
 * 998, Action Definition Register
 */
#define MCDS_MCXACT70 (MCDS_MCX_ACT70)

/** Alias for MCDS_MCX_ACT71.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT71 instead.
 * 99C, Action Definition Register
 */
#define MCDS_MCXACT71 (MCDS_MCX_ACT71)

/** Alias for MCDS_MCX_ACT8.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT8 instead.
 * 8A0, Action Definition Register
 */
#define MCDS_MCXACT8 (MCDS_MCX_ACT8)

/** Alias for MCDS_MCX_ACT9.
 *  Note that this definition is obsolete, use MCDS_MCX_ACT9 instead.
 * 8A4, Action Definition Register
 */
#define MCDS_MCXACT9 (MCDS_MCX_ACT9)

/** Alias for MCDS_MCX_CNT0_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT0_CCL instead.
 * A00, Counter Control Register
 */
#define MCDS_MCXCNT0_CCL (MCDS_MCX_CNT0_CCL)

/** Alias for MCDS_MCX_CNT0_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT0_CNT instead.
 * A08, Current Count Register
 */
#define MCDS_MCXCNT0_CNT (MCDS_MCX_CNT0_CNT)

/** Alias for MCDS_MCX_CNT0_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT0_LMT instead.
 * A04, Counter Limit Register
 */
#define MCDS_MCXCNT0_LMT (MCDS_MCX_CNT0_LMT)

/** Alias for MCDS_MCX_CNT10_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT10_CCL instead.
 * AA0, Counter Control Register
 */
#define MCDS_MCXCNT10_CCL (MCDS_MCX_CNT10_CCL)

/** Alias for MCDS_MCX_CNT10_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT10_CNT instead.
 * AA8, Current Count Register
 */
#define MCDS_MCXCNT10_CNT (MCDS_MCX_CNT10_CNT)

/** Alias for MCDS_MCX_CNT10_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT10_LMT instead.
 * AA4, Counter Limit Register
 */
#define MCDS_MCXCNT10_LMT (MCDS_MCX_CNT10_LMT)

/** Alias for MCDS_MCX_CNT11_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT11_CCL instead.
 * AB0, Counter Control Register
 */
#define MCDS_MCXCNT11_CCL (MCDS_MCX_CNT11_CCL)

/** Alias for MCDS_MCX_CNT11_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT11_CNT instead.
 * AB8, Current Count Register
 */
#define MCDS_MCXCNT11_CNT (MCDS_MCX_CNT11_CNT)

/** Alias for MCDS_MCX_CNT11_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT11_LMT instead.
 * AB4, Counter Limit Register
 */
#define MCDS_MCXCNT11_LMT (MCDS_MCX_CNT11_LMT)

/** Alias for MCDS_MCX_CNT12_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT12_CCL instead.
 * AC0, Counter Control Register
 */
#define MCDS_MCXCNT12_CCL (MCDS_MCX_CNT12_CCL)

/** Alias for MCDS_MCX_CNT12_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT12_CNT instead.
 * AC8, Current Count Register
 */
#define MCDS_MCXCNT12_CNT (MCDS_MCX_CNT12_CNT)

/** Alias for MCDS_MCX_CNT12_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT12_LMT instead.
 * AC4, Counter Limit Register
 */
#define MCDS_MCXCNT12_LMT (MCDS_MCX_CNT12_LMT)

/** Alias for MCDS_MCX_CNT13_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT13_CCL instead.
 * AD0, Counter Control Register
 */
#define MCDS_MCXCNT13_CCL (MCDS_MCX_CNT13_CCL)

/** Alias for MCDS_MCX_CNT13_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT13_CNT instead.
 * AD8, Current Count Register
 */
#define MCDS_MCXCNT13_CNT (MCDS_MCX_CNT13_CNT)

/** Alias for MCDS_MCX_CNT13_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT13_LMT instead.
 * AD4, Counter Limit Register
 */
#define MCDS_MCXCNT13_LMT (MCDS_MCX_CNT13_LMT)

/** Alias for MCDS_MCX_CNT14_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT14_CCL instead.
 * AE0, Counter Control Register
 */
#define MCDS_MCXCNT14_CCL (MCDS_MCX_CNT14_CCL)

/** Alias for MCDS_MCX_CNT14_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT14_CNT instead.
 * AE8, Current Count Register
 */
#define MCDS_MCXCNT14_CNT (MCDS_MCX_CNT14_CNT)

/** Alias for MCDS_MCX_CNT14_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT14_LMT instead.
 * AE4, Counter Limit Register
 */
#define MCDS_MCXCNT14_LMT (MCDS_MCX_CNT14_LMT)

/** Alias for MCDS_MCX_CNT15_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT15_CCL instead.
 * AF0, Counter Control Register
 */
#define MCDS_MCXCNT15_CCL (MCDS_MCX_CNT15_CCL)

/** Alias for MCDS_MCX_CNT15_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT15_CNT instead.
 * AF8, Current Count Register
 */
#define MCDS_MCXCNT15_CNT (MCDS_MCX_CNT15_CNT)

/** Alias for MCDS_MCX_CNT15_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT15_LMT instead.
 * AF4, Counter Limit Register
 */
#define MCDS_MCXCNT15_LMT (MCDS_MCX_CNT15_LMT)

/** Alias for MCDS_MCX_CNT16_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT16_CCL instead.
 * B00, Counter Control Register
 */
#define MCDS_MCXCNT16_CCL (MCDS_MCX_CNT16_CCL)

/** Alias for MCDS_MCX_CNT16_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT16_CNT instead.
 * B08, Current Count Register
 */
#define MCDS_MCXCNT16_CNT (MCDS_MCX_CNT16_CNT)

/** Alias for MCDS_MCX_CNT16_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT16_LMT instead.
 * B04, Counter Limit Register
 */
#define MCDS_MCXCNT16_LMT (MCDS_MCX_CNT16_LMT)

/** Alias for MCDS_MCX_CNT17_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT17_CCL instead.
 * B10, Counter Control Register
 */
#define MCDS_MCXCNT17_CCL (MCDS_MCX_CNT17_CCL)

/** Alias for MCDS_MCX_CNT17_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT17_CNT instead.
 * B18, Current Count Register
 */
#define MCDS_MCXCNT17_CNT (MCDS_MCX_CNT17_CNT)

/** Alias for MCDS_MCX_CNT17_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT17_LMT instead.
 * B14, Counter Limit Register
 */
#define MCDS_MCXCNT17_LMT (MCDS_MCX_CNT17_LMT)

/** Alias for MCDS_MCX_CNT18_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT18_CCL instead.
 * B20, Counter Control Register
 */
#define MCDS_MCXCNT18_CCL (MCDS_MCX_CNT18_CCL)

/** Alias for MCDS_MCX_CNT18_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT18_CNT instead.
 * B28, Current Count Register
 */
#define MCDS_MCXCNT18_CNT (MCDS_MCX_CNT18_CNT)

/** Alias for MCDS_MCX_CNT18_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT18_LMT instead.
 * B24, Counter Limit Register
 */
#define MCDS_MCXCNT18_LMT (MCDS_MCX_CNT18_LMT)

/** Alias for MCDS_MCX_CNT19_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT19_CCL instead.
 * B30, Counter Control Register
 */
#define MCDS_MCXCNT19_CCL (MCDS_MCX_CNT19_CCL)

/** Alias for MCDS_MCX_CNT19_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT19_CNT instead.
 * B38, Current Count Register
 */
#define MCDS_MCXCNT19_CNT (MCDS_MCX_CNT19_CNT)

/** Alias for MCDS_MCX_CNT19_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT19_LMT instead.
 * B34, Counter Limit Register
 */
#define MCDS_MCXCNT19_LMT (MCDS_MCX_CNT19_LMT)

/** Alias for MCDS_MCX_CNT1_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT1_CCL instead.
 * A10, Counter Control Register
 */
#define MCDS_MCXCNT1_CCL (MCDS_MCX_CNT1_CCL)

/** Alias for MCDS_MCX_CNT1_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT1_CNT instead.
 * A18, Current Count Register
 */
#define MCDS_MCXCNT1_CNT (MCDS_MCX_CNT1_CNT)

/** Alias for MCDS_MCX_CNT1_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT1_LMT instead.
 * A14, Counter Limit Register
 */
#define MCDS_MCXCNT1_LMT (MCDS_MCX_CNT1_LMT)

/** Alias for MCDS_MCX_CNT20_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT20_CCL instead.
 * B40, Counter Control Register
 */
#define MCDS_MCXCNT20_CCL (MCDS_MCX_CNT20_CCL)

/** Alias for MCDS_MCX_CNT20_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT20_CNT instead.
 * B48, Current Count Register
 */
#define MCDS_MCXCNT20_CNT (MCDS_MCX_CNT20_CNT)

/** Alias for MCDS_MCX_CNT20_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT20_LMT instead.
 * B44, Counter Limit Register
 */
#define MCDS_MCXCNT20_LMT (MCDS_MCX_CNT20_LMT)

/** Alias for MCDS_MCX_CNT21_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT21_CCL instead.
 * B50, Counter Control Register
 */
#define MCDS_MCXCNT21_CCL (MCDS_MCX_CNT21_CCL)

/** Alias for MCDS_MCX_CNT21_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT21_CNT instead.
 * B58, Current Count Register
 */
#define MCDS_MCXCNT21_CNT (MCDS_MCX_CNT21_CNT)

/** Alias for MCDS_MCX_CNT21_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT21_LMT instead.
 * B54, Counter Limit Register
 */
#define MCDS_MCXCNT21_LMT (MCDS_MCX_CNT21_LMT)

/** Alias for MCDS_MCX_CNT22_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT22_CCL instead.
 * B60, Counter Control Register
 */
#define MCDS_MCXCNT22_CCL (MCDS_MCX_CNT22_CCL)

/** Alias for MCDS_MCX_CNT22_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT22_CNT instead.
 * B68, Current Count Register
 */
#define MCDS_MCXCNT22_CNT (MCDS_MCX_CNT22_CNT)

/** Alias for MCDS_MCX_CNT22_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT22_LMT instead.
 * B64, Counter Limit Register
 */
#define MCDS_MCXCNT22_LMT (MCDS_MCX_CNT22_LMT)

/** Alias for MCDS_MCX_CNT23_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT23_CCL instead.
 * B70, Counter Control Register
 */
#define MCDS_MCXCNT23_CCL (MCDS_MCX_CNT23_CCL)

/** Alias for MCDS_MCX_CNT23_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT23_CNT instead.
 * B78, Current Count Register
 */
#define MCDS_MCXCNT23_CNT (MCDS_MCX_CNT23_CNT)

/** Alias for MCDS_MCX_CNT23_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT23_LMT instead.
 * B74, Counter Limit Register
 */
#define MCDS_MCXCNT23_LMT (MCDS_MCX_CNT23_LMT)

/** Alias for MCDS_MCX_CNT24_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT24_CCL instead.
 * B80, Counter Control Register
 */
#define MCDS_MCXCNT24_CCL (MCDS_MCX_CNT24_CCL)

/** Alias for MCDS_MCX_CNT24_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT24_CNT instead.
 * B88, Current Count Register
 */
#define MCDS_MCXCNT24_CNT (MCDS_MCX_CNT24_CNT)

/** Alias for MCDS_MCX_CNT24_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT24_LMT instead.
 * B84, Counter Limit Register
 */
#define MCDS_MCXCNT24_LMT (MCDS_MCX_CNT24_LMT)

/** Alias for MCDS_MCX_CNT25_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT25_CCL instead.
 * B90, Counter Control Register
 */
#define MCDS_MCXCNT25_CCL (MCDS_MCX_CNT25_CCL)

/** Alias for MCDS_MCX_CNT25_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT25_CNT instead.
 * B98, Current Count Register
 */
#define MCDS_MCXCNT25_CNT (MCDS_MCX_CNT25_CNT)

/** Alias for MCDS_MCX_CNT25_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT25_LMT instead.
 * B94, Counter Limit Register
 */
#define MCDS_MCXCNT25_LMT (MCDS_MCX_CNT25_LMT)

/** Alias for MCDS_MCX_CNT26_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT26_CCL instead.
 * BA0, Counter Control Register
 */
#define MCDS_MCXCNT26_CCL (MCDS_MCX_CNT26_CCL)

/** Alias for MCDS_MCX_CNT26_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT26_CNT instead.
 * BA8, Current Count Register
 */
#define MCDS_MCXCNT26_CNT (MCDS_MCX_CNT26_CNT)

/** Alias for MCDS_MCX_CNT26_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT26_LMT instead.
 * BA4, Counter Limit Register
 */
#define MCDS_MCXCNT26_LMT (MCDS_MCX_CNT26_LMT)

/** Alias for MCDS_MCX_CNT27_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT27_CCL instead.
 * BB0, Counter Control Register
 */
#define MCDS_MCXCNT27_CCL (MCDS_MCX_CNT27_CCL)

/** Alias for MCDS_MCX_CNT27_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT27_CNT instead.
 * BB8, Current Count Register
 */
#define MCDS_MCXCNT27_CNT (MCDS_MCX_CNT27_CNT)

/** Alias for MCDS_MCX_CNT27_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT27_LMT instead.
 * BB4, Counter Limit Register
 */
#define MCDS_MCXCNT27_LMT (MCDS_MCX_CNT27_LMT)

/** Alias for MCDS_MCX_CNT28_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT28_CCL instead.
 * BC0, Counter Control Register
 */
#define MCDS_MCXCNT28_CCL (MCDS_MCX_CNT28_CCL)

/** Alias for MCDS_MCX_CNT28_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT28_CNT instead.
 * BC8, Current Count Register
 */
#define MCDS_MCXCNT28_CNT (MCDS_MCX_CNT28_CNT)

/** Alias for MCDS_MCX_CNT28_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT28_LMT instead.
 * BC4, Counter Limit Register
 */
#define MCDS_MCXCNT28_LMT (MCDS_MCX_CNT28_LMT)

/** Alias for MCDS_MCX_CNT29_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT29_CCL instead.
 * BD0, Counter Control Register
 */
#define MCDS_MCXCNT29_CCL (MCDS_MCX_CNT29_CCL)

/** Alias for MCDS_MCX_CNT29_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT29_CNT instead.
 * BD8, Current Count Register
 */
#define MCDS_MCXCNT29_CNT (MCDS_MCX_CNT29_CNT)

/** Alias for MCDS_MCX_CNT29_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT29_LMT instead.
 * BD4, Counter Limit Register
 */
#define MCDS_MCXCNT29_LMT (MCDS_MCX_CNT29_LMT)

/** Alias for MCDS_MCX_CNT2_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT2_CCL instead.
 * A20, Counter Control Register
 */
#define MCDS_MCXCNT2_CCL (MCDS_MCX_CNT2_CCL)

/** Alias for MCDS_MCX_CNT2_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT2_CNT instead.
 * A28, Current Count Register
 */
#define MCDS_MCXCNT2_CNT (MCDS_MCX_CNT2_CNT)

/** Alias for MCDS_MCX_CNT2_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT2_LMT instead.
 * A24, Counter Limit Register
 */
#define MCDS_MCXCNT2_LMT (MCDS_MCX_CNT2_LMT)

/** Alias for MCDS_MCX_CNT30_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT30_CCL instead.
 * BE0, Counter Control Register
 */
#define MCDS_MCXCNT30_CCL (MCDS_MCX_CNT30_CCL)

/** Alias for MCDS_MCX_CNT30_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT30_CNT instead.
 * BE8, Current Count Register
 */
#define MCDS_MCXCNT30_CNT (MCDS_MCX_CNT30_CNT)

/** Alias for MCDS_MCX_CNT30_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT30_LMT instead.
 * BE4, Counter Limit Register
 */
#define MCDS_MCXCNT30_LMT (MCDS_MCX_CNT30_LMT)

/** Alias for MCDS_MCX_CNT31_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT31_CCL instead.
 * BF0, Counter Control Register
 */
#define MCDS_MCXCNT31_CCL (MCDS_MCX_CNT31_CCL)

/** Alias for MCDS_MCX_CNT31_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT31_CNT instead.
 * BF8, Current Count Register
 */
#define MCDS_MCXCNT31_CNT (MCDS_MCX_CNT31_CNT)

/** Alias for MCDS_MCX_CNT31_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT31_LMT instead.
 * BF4, Counter Limit Register
 */
#define MCDS_MCXCNT31_LMT (MCDS_MCX_CNT31_LMT)

/** Alias for MCDS_MCX_CNT3_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT3_CCL instead.
 * A30, Counter Control Register
 */
#define MCDS_MCXCNT3_CCL (MCDS_MCX_CNT3_CCL)

/** Alias for MCDS_MCX_CNT3_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT3_CNT instead.
 * A38, Current Count Register
 */
#define MCDS_MCXCNT3_CNT (MCDS_MCX_CNT3_CNT)

/** Alias for MCDS_MCX_CNT3_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT3_LMT instead.
 * A34, Counter Limit Register
 */
#define MCDS_MCXCNT3_LMT (MCDS_MCX_CNT3_LMT)

/** Alias for MCDS_MCX_CNT4_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT4_CCL instead.
 * A40, Counter Control Register
 */
#define MCDS_MCXCNT4_CCL (MCDS_MCX_CNT4_CCL)

/** Alias for MCDS_MCX_CNT4_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT4_CNT instead.
 * A48, Current Count Register
 */
#define MCDS_MCXCNT4_CNT (MCDS_MCX_CNT4_CNT)

/** Alias for MCDS_MCX_CNT4_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT4_LMT instead.
 * A44, Counter Limit Register
 */
#define MCDS_MCXCNT4_LMT (MCDS_MCX_CNT4_LMT)

/** Alias for MCDS_MCX_CNT5_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT5_CCL instead.
 * A50, Counter Control Register
 */
#define MCDS_MCXCNT5_CCL (MCDS_MCX_CNT5_CCL)

/** Alias for MCDS_MCX_CNT5_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT5_CNT instead.
 * A58, Current Count Register
 */
#define MCDS_MCXCNT5_CNT (MCDS_MCX_CNT5_CNT)

/** Alias for MCDS_MCX_CNT5_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT5_LMT instead.
 * A54, Counter Limit Register
 */
#define MCDS_MCXCNT5_LMT (MCDS_MCX_CNT5_LMT)

/** Alias for MCDS_MCX_CNT6_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT6_CCL instead.
 * A60, Counter Control Register
 */
#define MCDS_MCXCNT6_CCL (MCDS_MCX_CNT6_CCL)

/** Alias for MCDS_MCX_CNT6_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT6_CNT instead.
 * A68, Current Count Register
 */
#define MCDS_MCXCNT6_CNT (MCDS_MCX_CNT6_CNT)

/** Alias for MCDS_MCX_CNT6_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT6_LMT instead.
 * A64, Counter Limit Register
 */
#define MCDS_MCXCNT6_LMT (MCDS_MCX_CNT6_LMT)

/** Alias for MCDS_MCX_CNT7_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT7_CCL instead.
 * A70, Counter Control Register
 */
#define MCDS_MCXCNT7_CCL (MCDS_MCX_CNT7_CCL)

/** Alias for MCDS_MCX_CNT7_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT7_CNT instead.
 * A78, Current Count Register
 */
#define MCDS_MCXCNT7_CNT (MCDS_MCX_CNT7_CNT)

/** Alias for MCDS_MCX_CNT7_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT7_LMT instead.
 * A74, Counter Limit Register
 */
#define MCDS_MCXCNT7_LMT (MCDS_MCX_CNT7_LMT)

/** Alias for MCDS_MCX_CNT8_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT8_CCL instead.
 * A80, Counter Control Register
 */
#define MCDS_MCXCNT8_CCL (MCDS_MCX_CNT8_CCL)

/** Alias for MCDS_MCX_CNT8_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT8_CNT instead.
 * A88, Current Count Register
 */
#define MCDS_MCXCNT8_CNT (MCDS_MCX_CNT8_CNT)

/** Alias for MCDS_MCX_CNT8_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT8_LMT instead.
 * A84, Counter Limit Register
 */
#define MCDS_MCXCNT8_LMT (MCDS_MCX_CNT8_LMT)

/** Alias for MCDS_MCX_CNT9_CCL.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT9_CCL instead.
 * A90, Counter Control Register
 */
#define MCDS_MCXCNT9_CCL (MCDS_MCX_CNT9_CCL)

/** Alias for MCDS_MCX_CNT9_CNT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT9_CNT instead.
 * A98, Current Count Register
 */
#define MCDS_MCXCNT9_CNT (MCDS_MCX_CNT9_CNT)

/** Alias for MCDS_MCX_CNT9_LMT.
 *  Note that this definition is obsolete, use MCDS_MCX_CNT9_LMT instead.
 * A94, Counter Limit Register
 */
#define MCDS_MCXCNT9_LMT (MCDS_MCX_CNT9_LMT)

/** Alias for MCDS_MCX_EVT0.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT0 instead.
 * 800, Event Definition Register
 */
#define MCDS_MCXEVT0 (MCDS_MCX_EVT0)

/** Alias for MCDS_MCX_EVT1.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT1 instead.
 * 804, Event Definition Register
 */
#define MCDS_MCXEVT1 (MCDS_MCX_EVT1)

/** Alias for MCDS_MCX_EVT10.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT10 instead.
 * 828, Event Definition Register
 */
#define MCDS_MCXEVT10 (MCDS_MCX_EVT10)

/** Alias for MCDS_MCX_EVT11.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT11 instead.
 * 82C, Event Definition Register
 */
#define MCDS_MCXEVT11 (MCDS_MCX_EVT11)

/** Alias for MCDS_MCX_EVT12.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT12 instead.
 * 830, Event Definition Register
 */
#define MCDS_MCXEVT12 (MCDS_MCX_EVT12)

/** Alias for MCDS_MCX_EVT13.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT13 instead.
 * 834, Event Definition Register
 */
#define MCDS_MCXEVT13 (MCDS_MCX_EVT13)

/** Alias for MCDS_MCX_EVT14.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT14 instead.
 * 838, Event Definition Register
 */
#define MCDS_MCXEVT14 (MCDS_MCX_EVT14)

/** Alias for MCDS_MCX_EVT15.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT15 instead.
 * 83C, Event Definition Register
 */
#define MCDS_MCXEVT15 (MCDS_MCX_EVT15)

/** Alias for MCDS_MCX_EVT16.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT16 instead.
 * 840, Event Definition Register
 */
#define MCDS_MCXEVT16 (MCDS_MCX_EVT16)

/** Alias for MCDS_MCX_EVT17.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT17 instead.
 * 844, Event Definition Register
 */
#define MCDS_MCXEVT17 (MCDS_MCX_EVT17)

/** Alias for MCDS_MCX_EVT18.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT18 instead.
 * 848, Event Definition Register
 */
#define MCDS_MCXEVT18 (MCDS_MCX_EVT18)

/** Alias for MCDS_MCX_EVT19.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT19 instead.
 * 84C, Event Definition Register
 */
#define MCDS_MCXEVT19 (MCDS_MCX_EVT19)

/** Alias for MCDS_MCX_EVT2.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT2 instead.
 * 808, Event Definition Register
 */
#define MCDS_MCXEVT2 (MCDS_MCX_EVT2)

/** Alias for MCDS_MCX_EVT20.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT20 instead.
 * 850, Event Definition Register
 */
#define MCDS_MCXEVT20 (MCDS_MCX_EVT20)

/** Alias for MCDS_MCX_EVT21.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT21 instead.
 * 854, Event Definition Register
 */
#define MCDS_MCXEVT21 (MCDS_MCX_EVT21)

/** Alias for MCDS_MCX_EVT22.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT22 instead.
 * 858, Event Definition Register
 */
#define MCDS_MCXEVT22 (MCDS_MCX_EVT22)

/** Alias for MCDS_MCX_EVT23.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT23 instead.
 * 85C, Event Definition Register
 */
#define MCDS_MCXEVT23 (MCDS_MCX_EVT23)

/** Alias for MCDS_MCX_EVT3.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT3 instead.
 * 80C, Event Definition Register
 */
#define MCDS_MCXEVT3 (MCDS_MCX_EVT3)

/** Alias for MCDS_MCX_EVT4.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT4 instead.
 * 810, Event Definition Register
 */
#define MCDS_MCXEVT4 (MCDS_MCX_EVT4)

/** Alias for MCDS_MCX_EVT5.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT5 instead.
 * 814, Event Definition Register
 */
#define MCDS_MCXEVT5 (MCDS_MCX_EVT5)

/** Alias for MCDS_MCX_EVT6.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT6 instead.
 * 818, Event Definition Register
 */
#define MCDS_MCXEVT6 (MCDS_MCX_EVT6)

/** Alias for MCDS_MCX_EVT7.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT7 instead.
 * 81C, Event Definition Register
 */
#define MCDS_MCXEVT7 (MCDS_MCX_EVT7)

/** Alias for MCDS_MCX_EVT8.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT8 instead.
 * 820, Event Definition Register
 */
#define MCDS_MCXEVT8 (MCDS_MCX_EVT8)

/** Alias for MCDS_MCX_EVT9.
 *  Note that this definition is obsolete, use MCDS_MCX_EVT9 instead.
 * 824, Event Definition Register
 */
#define MCDS_MCXEVT9 (MCDS_MCX_EVT9)

/** 14, MCDS Signal Source Control */
#define MCDS_MUX ((*(volatile Ifx_MCDS_MUX*)0xF00E8014u)) /* lint --e(923)*/

/** 4, OCDS Control and Status */
#define MCDS_OCS ((*(volatile Ifx_MCDS_OCS*)0xF00E8004u)) /* lint --e(923)*/

/** 1C, Session ID High Register */
#define MCDS_SESSIDH ((*(volatile Ifx_MCDS_SESSIDH*)0xF00E801Cu)) /* lint --e(923)*/

/** 18, Session ID Low Register */
#define MCDS_SESSIDL ((*(volatile Ifx_MCDS_SESSIDL*)0xF00E8018u)) /* lint --e(923)*/

/** 6500, Comparator Bound Register */
#define MCDS_SPB_AC0_BND ((*(volatile Ifx_MCDS_SPBAC_BND*)0xF00EE500u)) /* lint --e(923)*/

/** 6508, Comparator Mask Register */
#define MCDS_SPB_AC0_MSK ((*(volatile Ifx_MCDS_SPBAC_MSK*)0xF00EE508u)) /* lint --e(923)*/

/** 6504, Comparator Range Register */
#define MCDS_SPB_AC0_RNG ((*(volatile Ifx_MCDS_SPBAC_RNG*)0xF00EE504u)) /* lint --e(923)*/

/** 6510, Comparator Bound Register */
#define MCDS_SPB_AC1_BND ((*(volatile Ifx_MCDS_SPBAC_BND*)0xF00EE510u)) /* lint --e(923)*/

/** 6518, Comparator Mask Register */
#define MCDS_SPB_AC1_MSK ((*(volatile Ifx_MCDS_SPBAC_MSK*)0xF00EE518u)) /* lint --e(923)*/

/** 6514, Comparator Range Register */
#define MCDS_SPB_AC1_RNG ((*(volatile Ifx_MCDS_SPBAC_RNG*)0xF00EE514u)) /* lint --e(923)*/

/** 6520, Comparator Bound Register */
#define MCDS_SPB_AC2_BND ((*(volatile Ifx_MCDS_SPBAC_BND*)0xF00EE520u)) /* lint --e(923)*/

/** 6528, Comparator Mask Register */
#define MCDS_SPB_AC2_MSK ((*(volatile Ifx_MCDS_SPBAC_MSK*)0xF00EE528u)) /* lint --e(923)*/

/** 6524, Comparator Range Register */
#define MCDS_SPB_AC2_RNG ((*(volatile Ifx_MCDS_SPBAC_RNG*)0xF00EE524u)) /* lint --e(923)*/

/** 6530, Comparator Bound Register */
#define MCDS_SPB_AC3_BND ((*(volatile Ifx_MCDS_SPBAC_BND*)0xF00EE530u)) /* lint --e(923)*/

/** 6538, Comparator Mask Register */
#define MCDS_SPB_AC3_MSK ((*(volatile Ifx_MCDS_SPBAC_MSK*)0xF00EE538u)) /* lint --e(923)*/

/** 6534, Comparator Range Register */
#define MCDS_SPB_AC3_RNG ((*(volatile Ifx_MCDS_SPBAC_RNG*)0xF00EE534u)) /* lint --e(923)*/

/** 6880, Action Definition Register */
#define MCDS_SPB_ACT0 ((*(volatile Ifx_MCDS_ACT*)0xF00EE880u)) /* lint --e(923)*/

/** 6884, Action Definition Register */
#define MCDS_SPB_ACT1 ((*(volatile Ifx_MCDS_ACT*)0xF00EE884u)) /* lint --e(923)*/

/** 68A8, Action Definition Register */
#define MCDS_SPB_ACT10 ((*(volatile Ifx_MCDS_ACT*)0xF00EE8A8u)) /* lint --e(923)*/

/** 68AC, Action Definition Register */
#define MCDS_SPB_ACT11 ((*(volatile Ifx_MCDS_ACT*)0xF00EE8ACu)) /* lint --e(923)*/

/** 68B0, Action Definition Register */
#define MCDS_SPB_ACT12 ((*(volatile Ifx_MCDS_ACT*)0xF00EE8B0u)) /* lint --e(923)*/

/** 68B4, Action Definition Register */
#define MCDS_SPB_ACT13 ((*(volatile Ifx_MCDS_ACT*)0xF00EE8B4u)) /* lint --e(923)*/

/** 68B8, Action Definition Register */
#define MCDS_SPB_ACT14 ((*(volatile Ifx_MCDS_ACT*)0xF00EE8B8u)) /* lint --e(923)*/

/** 6888, Action Definition Register */
#define MCDS_SPB_ACT2 ((*(volatile Ifx_MCDS_ACT*)0xF00EE888u)) /* lint --e(923)*/

/** 688C, Action Definition Register */
#define MCDS_SPB_ACT3 ((*(volatile Ifx_MCDS_ACT*)0xF00EE88Cu)) /* lint --e(923)*/

/** 6890, Action Definition Register */
#define MCDS_SPB_ACT4 ((*(volatile Ifx_MCDS_ACT*)0xF00EE890u)) /* lint --e(923)*/

/** 6894, Action Definition Register */
#define MCDS_SPB_ACT5 ((*(volatile Ifx_MCDS_ACT*)0xF00EE894u)) /* lint --e(923)*/

/** 6898, Action Definition Register */
#define MCDS_SPB_ACT6 ((*(volatile Ifx_MCDS_ACT*)0xF00EE898u)) /* lint --e(923)*/

/** 689C, Action Definition Register */
#define MCDS_SPB_ACT7 ((*(volatile Ifx_MCDS_ACT*)0xF00EE89Cu)) /* lint --e(923)*/

/** 68A0, Action Definition Register */
#define MCDS_SPB_ACT8 ((*(volatile Ifx_MCDS_ACT*)0xF00EE8A0u)) /* lint --e(923)*/

/** 68A4, Action Definition Register */
#define MCDS_SPB_ACT9 ((*(volatile Ifx_MCDS_ACT*)0xF00EE8A4u)) /* lint --e(923)*/

/** 6000, Debug Status Register */
#define MCDS_SPB_DCSTS ((*(volatile Ifx_MCDS_SPB_DCSTS*)0xF00EE000u)) /* lint --e(923)*/

/** 6400, Comparator Bound Register */
#define MCDS_SPB_EA0_BND ((*(volatile Ifx_MCDS_SPBEA_BND*)0xF00EE400u)) /* lint --e(923)*/

/** 6404, Comparator Range Register */
#define MCDS_SPB_EA0_RNG ((*(volatile Ifx_MCDS_SPBEA_RNG*)0xF00EE404u)) /* lint --e(923)*/

/** 6410, Comparator Bound Register */
#define MCDS_SPB_EA1_BND ((*(volatile Ifx_MCDS_SPBEA_BND*)0xF00EE410u)) /* lint --e(923)*/

/** 6414, Comparator Range Register */
#define MCDS_SPB_EA1_RNG ((*(volatile Ifx_MCDS_SPBEA_RNG*)0xF00EE414u)) /* lint --e(923)*/

/** 6420, Comparator Bound Register */
#define MCDS_SPB_EA2_BND ((*(volatile Ifx_MCDS_SPBEA_BND*)0xF00EE420u)) /* lint --e(923)*/

/** 6424, Comparator Range Register */
#define MCDS_SPB_EA2_RNG ((*(volatile Ifx_MCDS_SPBEA_RNG*)0xF00EE424u)) /* lint --e(923)*/

/** 6430, Comparator Bound Register */
#define MCDS_SPB_EA3_BND ((*(volatile Ifx_MCDS_SPBEA_BND*)0xF00EE430u)) /* lint --e(923)*/

/** 6434, Comparator Range Register */
#define MCDS_SPB_EA3_RNG ((*(volatile Ifx_MCDS_SPBEA_RNG*)0xF00EE434u)) /* lint --e(923)*/

/** 6800, Event Definition Register */
#define MCDS_SPB_EVT0 ((*(volatile Ifx_MCDS_EVT*)0xF00EE800u)) /* lint --e(923)*/

/** 6804, Event Definition Register */
#define MCDS_SPB_EVT1 ((*(volatile Ifx_MCDS_EVT*)0xF00EE804u)) /* lint --e(923)*/

/** 6828, Event Definition Register */
#define MCDS_SPB_EVT10 ((*(volatile Ifx_MCDS_EVT*)0xF00EE828u)) /* lint --e(923)*/

/** 682C, Event Definition Register */
#define MCDS_SPB_EVT11 ((*(volatile Ifx_MCDS_EVT*)0xF00EE82Cu)) /* lint --e(923)*/

/** 6830, Event Definition Register */
#define MCDS_SPB_EVT12 ((*(volatile Ifx_MCDS_EVT*)0xF00EE830u)) /* lint --e(923)*/

/** 6834, Event Definition Register */
#define MCDS_SPB_EVT13 ((*(volatile Ifx_MCDS_EVT*)0xF00EE834u)) /* lint --e(923)*/

/** 6838, Event Definition Register */
#define MCDS_SPB_EVT14 ((*(volatile Ifx_MCDS_EVT*)0xF00EE838u)) /* lint --e(923)*/

/** 683C, Event Definition Register */
#define MCDS_SPB_EVT15 ((*(volatile Ifx_MCDS_EVT*)0xF00EE83Cu)) /* lint --e(923)*/

/** 6808, Event Definition Register */
#define MCDS_SPB_EVT2 ((*(volatile Ifx_MCDS_EVT*)0xF00EE808u)) /* lint --e(923)*/

/** 680C, Event Definition Register */
#define MCDS_SPB_EVT3 ((*(volatile Ifx_MCDS_EVT*)0xF00EE80Cu)) /* lint --e(923)*/

/** 6810, Event Definition Register */
#define MCDS_SPB_EVT4 ((*(volatile Ifx_MCDS_EVT*)0xF00EE810u)) /* lint --e(923)*/

/** 6814, Event Definition Register */
#define MCDS_SPB_EVT5 ((*(volatile Ifx_MCDS_EVT*)0xF00EE814u)) /* lint --e(923)*/

/** 6818, Event Definition Register */
#define MCDS_SPB_EVT6 ((*(volatile Ifx_MCDS_EVT*)0xF00EE818u)) /* lint --e(923)*/

/** 681C, Event Definition Register */
#define MCDS_SPB_EVT7 ((*(volatile Ifx_MCDS_EVT*)0xF00EE81Cu)) /* lint --e(923)*/

/** 6820, Event Definition Register */
#define MCDS_SPB_EVT8 ((*(volatile Ifx_MCDS_EVT*)0xF00EE820u)) /* lint --e(923)*/

/** 6824, Event Definition Register */
#define MCDS_SPB_EVT9 ((*(volatile Ifx_MCDS_EVT*)0xF00EE824u)) /* lint --e(923)*/

/** 6480, Comparator Bound Register */
#define MCDS_SPB_WD0_BND ((*(volatile Ifx_MCDS_SPBWD_BND*)0xF00EE480u)) /* lint --e(923)*/

/** 6488, Comparator Mask Register */
#define MCDS_SPB_WD0_MSK ((*(volatile Ifx_MCDS_SPBWD_MSK*)0xF00EE488u)) /* lint --e(923)*/

/** 6484, Comparator Range Register */
#define MCDS_SPB_WD0_RNG ((*(volatile Ifx_MCDS_SPBWD_RNG*)0xF00EE484u)) /* lint --e(923)*/

/** 648C, Comparator Sign Register */
#define MCDS_SPB_WD0_SGN ((*(volatile Ifx_MCDS_SPBWD_SGN*)0xF00EE48Cu)) /* lint --e(923)*/

/** 6490, Comparator Bound Register */
#define MCDS_SPB_WD1_BND ((*(volatile Ifx_MCDS_SPBWD_BND*)0xF00EE490u)) /* lint --e(923)*/

/** 6498, Comparator Mask Register */
#define MCDS_SPB_WD1_MSK ((*(volatile Ifx_MCDS_SPBWD_MSK*)0xF00EE498u)) /* lint --e(923)*/

/** 6494, Comparator Range Register */
#define MCDS_SPB_WD1_RNG ((*(volatile Ifx_MCDS_SPBWD_RNG*)0xF00EE494u)) /* lint --e(923)*/

/** 649C, Comparator Sign Register */
#define MCDS_SPB_WD1_SGN ((*(volatile Ifx_MCDS_SPBWD_SGN*)0xF00EE49Cu)) /* lint --e(923)*/

/** 64A0, Comparator Bound Register */
#define MCDS_SPB_WD2_BND ((*(volatile Ifx_MCDS_SPBWD_BND*)0xF00EE4A0u)) /* lint --e(923)*/

/** 64A8, Comparator Mask Register */
#define MCDS_SPB_WD2_MSK ((*(volatile Ifx_MCDS_SPBWD_MSK*)0xF00EE4A8u)) /* lint --e(923)*/

/** 64A4, Comparator Range Register */
#define MCDS_SPB_WD2_RNG ((*(volatile Ifx_MCDS_SPBWD_RNG*)0xF00EE4A4u)) /* lint --e(923)*/

/** 64AC, Comparator Sign Register */
#define MCDS_SPB_WD2_SGN ((*(volatile Ifx_MCDS_SPBWD_SGN*)0xF00EE4ACu)) /* lint --e(923)*/

/** 64B0, Comparator Bound Register */
#define MCDS_SPB_WD3_BND ((*(volatile Ifx_MCDS_SPBWD_BND*)0xF00EE4B0u)) /* lint --e(923)*/

/** 64B8, Comparator Mask Register */
#define MCDS_SPB_WD3_MSK ((*(volatile Ifx_MCDS_SPBWD_MSK*)0xF00EE4B8u)) /* lint --e(923)*/

/** 64B4, Comparator Range Register */
#define MCDS_SPB_WD3_RNG ((*(volatile Ifx_MCDS_SPBWD_RNG*)0xF00EE4B4u)) /* lint --e(923)*/

/** 64BC, Comparator Sign Register */
#define MCDS_SPB_WD3_SGN ((*(volatile Ifx_MCDS_SPBWD_SGN*)0xF00EE4BCu)) /* lint --e(923)*/

/** Alias for MCDS_SPB_AC0_BND.
 *  Note that this definition is obsolete, use MCDS_SPB_AC0_BND instead.
 * 6500, Comparator Bound Register
 */
#define MCDS_SPBAC0_BND (MCDS_SPB_AC0_BND)

/** Alias for MCDS_SPB_AC0_MSK.
 *  Note that this definition is obsolete, use MCDS_SPB_AC0_MSK instead.
 * 6508, Comparator Mask Register
 */
#define MCDS_SPBAC0_MSK (MCDS_SPB_AC0_MSK)

/** Alias for MCDS_SPB_AC0_RNG.
 *  Note that this definition is obsolete, use MCDS_SPB_AC0_RNG instead.
 * 6504, Comparator Range Register
 */
#define MCDS_SPBAC0_RNG (MCDS_SPB_AC0_RNG)

/** Alias for MCDS_SPB_AC1_BND.
 *  Note that this definition is obsolete, use MCDS_SPB_AC1_BND instead.
 * 6510, Comparator Bound Register
 */
#define MCDS_SPBAC1_BND (MCDS_SPB_AC1_BND)

/** Alias for MCDS_SPB_AC1_MSK.
 *  Note that this definition is obsolete, use MCDS_SPB_AC1_MSK instead.
 * 6518, Comparator Mask Register
 */
#define MCDS_SPBAC1_MSK (MCDS_SPB_AC1_MSK)

/** Alias for MCDS_SPB_AC1_RNG.
 *  Note that this definition is obsolete, use MCDS_SPB_AC1_RNG instead.
 * 6514, Comparator Range Register
 */
#define MCDS_SPBAC1_RNG (MCDS_SPB_AC1_RNG)

/** Alias for MCDS_SPB_AC2_BND.
 *  Note that this definition is obsolete, use MCDS_SPB_AC2_BND instead.
 * 6520, Comparator Bound Register
 */
#define MCDS_SPBAC2_BND (MCDS_SPB_AC2_BND)

/** Alias for MCDS_SPB_AC2_MSK.
 *  Note that this definition is obsolete, use MCDS_SPB_AC2_MSK instead.
 * 6528, Comparator Mask Register
 */
#define MCDS_SPBAC2_MSK (MCDS_SPB_AC2_MSK)

/** Alias for MCDS_SPB_AC2_RNG.
 *  Note that this definition is obsolete, use MCDS_SPB_AC2_RNG instead.
 * 6524, Comparator Range Register
 */
#define MCDS_SPBAC2_RNG (MCDS_SPB_AC2_RNG)

/** Alias for MCDS_SPB_AC3_BND.
 *  Note that this definition is obsolete, use MCDS_SPB_AC3_BND instead.
 * 6530, Comparator Bound Register
 */
#define MCDS_SPBAC3_BND (MCDS_SPB_AC3_BND)

/** Alias for MCDS_SPB_AC3_MSK.
 *  Note that this definition is obsolete, use MCDS_SPB_AC3_MSK instead.
 * 6538, Comparator Mask Register
 */
#define MCDS_SPBAC3_MSK (MCDS_SPB_AC3_MSK)

/** Alias for MCDS_SPB_AC3_RNG.
 *  Note that this definition is obsolete, use MCDS_SPB_AC3_RNG instead.
 * 6534, Comparator Range Register
 */
#define MCDS_SPBAC3_RNG (MCDS_SPB_AC3_RNG)

/** Alias for MCDS_SPB_ACT0.
 *  Note that this definition is obsolete, use MCDS_SPB_ACT0 instead.
 * 6880, Action Definition Register
 */
#define MCDS_SPBACT0 (MCDS_SPB_ACT0)

/** Alias for MCDS_SPB_ACT1.
 *  Note that this definition is obsolete, use MCDS_SPB_ACT1 instead.
 * 6884, Action Definition Register
 */
#define MCDS_SPBACT1 (MCDS_SPB_ACT1)

/** Alias for MCDS_SPB_ACT10.
 *  Note that this definition is obsolete, use MCDS_SPB_ACT10 instead.
 * 68A8, Action Definition Register
 */
#define MCDS_SPBACT10 (MCDS_SPB_ACT10)

/** Alias for MCDS_SPB_ACT11.
 *  Note that this definition is obsolete, use MCDS_SPB_ACT11 instead.
 * 68AC, Action Definition Register
 */
#define MCDS_SPBACT11 (MCDS_SPB_ACT11)

/** Alias for MCDS_SPB_ACT12.
 *  Note that this definition is obsolete, use MCDS_SPB_ACT12 instead.
 * 68B0, Action Definition Register
 */
#define MCDS_SPBACT12 (MCDS_SPB_ACT12)

/** Alias for MCDS_SPB_ACT13.
 *  Note that this definition is obsolete, use MCDS_SPB_ACT13 instead.
 * 68B4, Action Definition Register
 */
#define MCDS_SPBACT13 (MCDS_SPB_ACT13)

/** Alias for MCDS_SPB_ACT14.
 *  Note that this definition is obsolete, use MCDS_SPB_ACT14 instead.
 * 68B8, Action Definition Register
 */
#define MCDS_SPBACT14 (MCDS_SPB_ACT14)

/** Alias for MCDS_SPB_ACT2.
 *  Note that this definition is obsolete, use MCDS_SPB_ACT2 instead.
 * 6888, Action Definition Register
 */
#define MCDS_SPBACT2 (MCDS_SPB_ACT2)

/** Alias for MCDS_SPB_ACT3.
 *  Note that this definition is obsolete, use MCDS_SPB_ACT3 instead.
 * 688C, Action Definition Register
 */
#define MCDS_SPBACT3 (MCDS_SPB_ACT3)

/** Alias for MCDS_SPB_ACT4.
 *  Note that this definition is obsolete, use MCDS_SPB_ACT4 instead.
 * 6890, Action Definition Register
 */
#define MCDS_SPBACT4 (MCDS_SPB_ACT4)

/** Alias for MCDS_SPB_ACT5.
 *  Note that this definition is obsolete, use MCDS_SPB_ACT5 instead.
 * 6894, Action Definition Register
 */
#define MCDS_SPBACT5 (MCDS_SPB_ACT5)

/** Alias for MCDS_SPB_ACT6.
 *  Note that this definition is obsolete, use MCDS_SPB_ACT6 instead.
 * 6898, Action Definition Register
 */
#define MCDS_SPBACT6 (MCDS_SPB_ACT6)

/** Alias for MCDS_SPB_ACT7.
 *  Note that this definition is obsolete, use MCDS_SPB_ACT7 instead.
 * 689C, Action Definition Register
 */
#define MCDS_SPBACT7 (MCDS_SPB_ACT7)

/** Alias for MCDS_SPB_ACT8.
 *  Note that this definition is obsolete, use MCDS_SPB_ACT8 instead.
 * 68A0, Action Definition Register
 */
#define MCDS_SPBACT8 (MCDS_SPB_ACT8)

/** Alias for MCDS_SPB_ACT9.
 *  Note that this definition is obsolete, use MCDS_SPB_ACT9 instead.
 * 68A4, Action Definition Register
 */
#define MCDS_SPBACT9 (MCDS_SPB_ACT9)

/** Alias for MCDS_SPB_DCSTS.
 *  Note that this definition is obsolete, use MCDS_SPB_DCSTS instead.
 * 6000, Debug Status Register
 */
#define MCDS_SPBDCSTS (MCDS_SPB_DCSTS)

/** Alias for MCDS_SPB_EA0_BND.
 *  Note that this definition is obsolete, use MCDS_SPB_EA0_BND instead.
 * 6400, Comparator Bound Register
 */
#define MCDS_SPBEA0_BND (MCDS_SPB_EA0_BND)

/** Alias for MCDS_SPB_EA0_RNG.
 *  Note that this definition is obsolete, use MCDS_SPB_EA0_RNG instead.
 * 6404, Comparator Range Register
 */
#define MCDS_SPBEA0_RNG (MCDS_SPB_EA0_RNG)

/** Alias for MCDS_SPB_EA1_BND.
 *  Note that this definition is obsolete, use MCDS_SPB_EA1_BND instead.
 * 6410, Comparator Bound Register
 */
#define MCDS_SPBEA1_BND (MCDS_SPB_EA1_BND)

/** Alias for MCDS_SPB_EA1_RNG.
 *  Note that this definition is obsolete, use MCDS_SPB_EA1_RNG instead.
 * 6414, Comparator Range Register
 */
#define MCDS_SPBEA1_RNG (MCDS_SPB_EA1_RNG)

/** Alias for MCDS_SPB_EA2_BND.
 *  Note that this definition is obsolete, use MCDS_SPB_EA2_BND instead.
 * 6420, Comparator Bound Register
 */
#define MCDS_SPBEA2_BND (MCDS_SPB_EA2_BND)

/** Alias for MCDS_SPB_EA2_RNG.
 *  Note that this definition is obsolete, use MCDS_SPB_EA2_RNG instead.
 * 6424, Comparator Range Register
 */
#define MCDS_SPBEA2_RNG (MCDS_SPB_EA2_RNG)

/** Alias for MCDS_SPB_EA3_BND.
 *  Note that this definition is obsolete, use MCDS_SPB_EA3_BND instead.
 * 6430, Comparator Bound Register
 */
#define MCDS_SPBEA3_BND (MCDS_SPB_EA3_BND)

/** Alias for MCDS_SPB_EA3_RNG.
 *  Note that this definition is obsolete, use MCDS_SPB_EA3_RNG instead.
 * 6434, Comparator Range Register
 */
#define MCDS_SPBEA3_RNG (MCDS_SPB_EA3_RNG)

/** Alias for MCDS_SPB_EVT0.
 *  Note that this definition is obsolete, use MCDS_SPB_EVT0 instead.
 * 6800, Event Definition Register
 */
#define MCDS_SPBEVT0 (MCDS_SPB_EVT0)

/** Alias for MCDS_SPB_EVT1.
 *  Note that this definition is obsolete, use MCDS_SPB_EVT1 instead.
 * 6804, Event Definition Register
 */
#define MCDS_SPBEVT1 (MCDS_SPB_EVT1)

/** Alias for MCDS_SPB_EVT10.
 *  Note that this definition is obsolete, use MCDS_SPB_EVT10 instead.
 * 6828, Event Definition Register
 */
#define MCDS_SPBEVT10 (MCDS_SPB_EVT10)

/** Alias for MCDS_SPB_EVT11.
 *  Note that this definition is obsolete, use MCDS_SPB_EVT11 instead.
 * 682C, Event Definition Register
 */
#define MCDS_SPBEVT11 (MCDS_SPB_EVT11)

/** Alias for MCDS_SPB_EVT12.
 *  Note that this definition is obsolete, use MCDS_SPB_EVT12 instead.
 * 6830, Event Definition Register
 */
#define MCDS_SPBEVT12 (MCDS_SPB_EVT12)

/** Alias for MCDS_SPB_EVT13.
 *  Note that this definition is obsolete, use MCDS_SPB_EVT13 instead.
 * 6834, Event Definition Register
 */
#define MCDS_SPBEVT13 (MCDS_SPB_EVT13)

/** Alias for MCDS_SPB_EVT14.
 *  Note that this definition is obsolete, use MCDS_SPB_EVT14 instead.
 * 6838, Event Definition Register
 */
#define MCDS_SPBEVT14 (MCDS_SPB_EVT14)

/** Alias for MCDS_SPB_EVT15.
 *  Note that this definition is obsolete, use MCDS_SPB_EVT15 instead.
 * 683C, Event Definition Register
 */
#define MCDS_SPBEVT15 (MCDS_SPB_EVT15)

/** Alias for MCDS_SPB_EVT2.
 *  Note that this definition is obsolete, use MCDS_SPB_EVT2 instead.
 * 6808, Event Definition Register
 */
#define MCDS_SPBEVT2 (MCDS_SPB_EVT2)

/** Alias for MCDS_SPB_EVT3.
 *  Note that this definition is obsolete, use MCDS_SPB_EVT3 instead.
 * 680C, Event Definition Register
 */
#define MCDS_SPBEVT3 (MCDS_SPB_EVT3)

/** Alias for MCDS_SPB_EVT4.
 *  Note that this definition is obsolete, use MCDS_SPB_EVT4 instead.
 * 6810, Event Definition Register
 */
#define MCDS_SPBEVT4 (MCDS_SPB_EVT4)

/** Alias for MCDS_SPB_EVT5.
 *  Note that this definition is obsolete, use MCDS_SPB_EVT5 instead.
 * 6814, Event Definition Register
 */
#define MCDS_SPBEVT5 (MCDS_SPB_EVT5)

/** Alias for MCDS_SPB_EVT6.
 *  Note that this definition is obsolete, use MCDS_SPB_EVT6 instead.
 * 6818, Event Definition Register
 */
#define MCDS_SPBEVT6 (MCDS_SPB_EVT6)

/** Alias for MCDS_SPB_EVT7.
 *  Note that this definition is obsolete, use MCDS_SPB_EVT7 instead.
 * 681C, Event Definition Register
 */
#define MCDS_SPBEVT7 (MCDS_SPB_EVT7)

/** Alias for MCDS_SPB_EVT8.
 *  Note that this definition is obsolete, use MCDS_SPB_EVT8 instead.
 * 6820, Event Definition Register
 */
#define MCDS_SPBEVT8 (MCDS_SPB_EVT8)

/** Alias for MCDS_SPB_EVT9.
 *  Note that this definition is obsolete, use MCDS_SPB_EVT9 instead.
 * 6824, Event Definition Register
 */
#define MCDS_SPBEVT9 (MCDS_SPB_EVT9)

/** Alias for MCDS_SPB_WD0_BND.
 *  Note that this definition is obsolete, use MCDS_SPB_WD0_BND instead.
 * 6480, Comparator Bound Register
 */
#define MCDS_SPBWD0_BND (MCDS_SPB_WD0_BND)

/** Alias for MCDS_SPB_WD0_MSK.
 *  Note that this definition is obsolete, use MCDS_SPB_WD0_MSK instead.
 * 6488, Comparator Mask Register
 */
#define MCDS_SPBWD0_MSK (MCDS_SPB_WD0_MSK)

/** Alias for MCDS_SPB_WD0_RNG.
 *  Note that this definition is obsolete, use MCDS_SPB_WD0_RNG instead.
 * 6484, Comparator Range Register
 */
#define MCDS_SPBWD0_RNG (MCDS_SPB_WD0_RNG)

/** Alias for MCDS_SPB_WD0_SGN.
 *  Note that this definition is obsolete, use MCDS_SPB_WD0_SGN instead.
 * 648C, Comparator Sign Register
 */
#define MCDS_SPBWD0_SGN (MCDS_SPB_WD0_SGN)

/** Alias for MCDS_SPB_WD1_BND.
 *  Note that this definition is obsolete, use MCDS_SPB_WD1_BND instead.
 * 6490, Comparator Bound Register
 */
#define MCDS_SPBWD1_BND (MCDS_SPB_WD1_BND)

/** Alias for MCDS_SPB_WD1_MSK.
 *  Note that this definition is obsolete, use MCDS_SPB_WD1_MSK instead.
 * 6498, Comparator Mask Register
 */
#define MCDS_SPBWD1_MSK (MCDS_SPB_WD1_MSK)

/** Alias for MCDS_SPB_WD1_RNG.
 *  Note that this definition is obsolete, use MCDS_SPB_WD1_RNG instead.
 * 6494, Comparator Range Register
 */
#define MCDS_SPBWD1_RNG (MCDS_SPB_WD1_RNG)

/** Alias for MCDS_SPB_WD1_SGN.
 *  Note that this definition is obsolete, use MCDS_SPB_WD1_SGN instead.
 * 649C, Comparator Sign Register
 */
#define MCDS_SPBWD1_SGN (MCDS_SPB_WD1_SGN)

/** Alias for MCDS_SPB_WD2_BND.
 *  Note that this definition is obsolete, use MCDS_SPB_WD2_BND instead.
 * 64A0, Comparator Bound Register
 */
#define MCDS_SPBWD2_BND (MCDS_SPB_WD2_BND)

/** Alias for MCDS_SPB_WD2_MSK.
 *  Note that this definition is obsolete, use MCDS_SPB_WD2_MSK instead.
 * 64A8, Comparator Mask Register
 */
#define MCDS_SPBWD2_MSK (MCDS_SPB_WD2_MSK)

/** Alias for MCDS_SPB_WD2_RNG.
 *  Note that this definition is obsolete, use MCDS_SPB_WD2_RNG instead.
 * 64A4, Comparator Range Register
 */
#define MCDS_SPBWD2_RNG (MCDS_SPB_WD2_RNG)

/** Alias for MCDS_SPB_WD2_SGN.
 *  Note that this definition is obsolete, use MCDS_SPB_WD2_SGN instead.
 * 64AC, Comparator Sign Register
 */
#define MCDS_SPBWD2_SGN (MCDS_SPB_WD2_SGN)

/** Alias for MCDS_SPB_WD3_BND.
 *  Note that this definition is obsolete, use MCDS_SPB_WD3_BND instead.
 * 64B0, Comparator Bound Register
 */
#define MCDS_SPBWD3_BND (MCDS_SPB_WD3_BND)

/** Alias for MCDS_SPB_WD3_MSK.
 *  Note that this definition is obsolete, use MCDS_SPB_WD3_MSK instead.
 * 64B8, Comparator Mask Register
 */
#define MCDS_SPBWD3_MSK (MCDS_SPB_WD3_MSK)

/** Alias for MCDS_SPB_WD3_RNG.
 *  Note that this definition is obsolete, use MCDS_SPB_WD3_RNG instead.
 * 64B4, Comparator Range Register
 */
#define MCDS_SPBWD3_RNG (MCDS_SPB_WD3_RNG)

/** Alias for MCDS_SPB_WD3_SGN.
 *  Note that this definition is obsolete, use MCDS_SPB_WD3_SGN instead.
 * 64BC, Comparator Sign Register
 */
#define MCDS_SPBWD3_SGN (MCDS_SPB_WD3_SGN)

/** 7500, Comparator Bound Register */
#define MCDS_SRI_SRI1AC0_BND ((*(volatile Ifx_MCDS_SRIAC_BND*)0xF00EF500u)) /* lint --e(923)*/

/** 7508, Comparator Mask Register */
#define MCDS_SRI_SRI1AC0_MSK ((*(volatile Ifx_MCDS_SRIAC_MSK*)0xF00EF508u)) /* lint --e(923)*/

/** 7504, Comparator Range Register */
#define MCDS_SRI_SRI1AC0_RNG ((*(volatile Ifx_MCDS_SRIAC_RNG*)0xF00EF504u)) /* lint --e(923)*/

/** 7510, Comparator Bound Register */
#define MCDS_SRI_SRI1AC1_BND ((*(volatile Ifx_MCDS_SRIAC_BND*)0xF00EF510u)) /* lint --e(923)*/

/** 7518, Comparator Mask Register */
#define MCDS_SRI_SRI1AC1_MSK ((*(volatile Ifx_MCDS_SRIAC_MSK*)0xF00EF518u)) /* lint --e(923)*/

/** 7514, Comparator Range Register */
#define MCDS_SRI_SRI1AC1_RNG ((*(volatile Ifx_MCDS_SRIAC_RNG*)0xF00EF514u)) /* lint --e(923)*/

/** 7520, Comparator Bound Register */
#define MCDS_SRI_SRI1AC2_BND ((*(volatile Ifx_MCDS_SRIAC_BND*)0xF00EF520u)) /* lint --e(923)*/

/** 7528, Comparator Mask Register */
#define MCDS_SRI_SRI1AC2_MSK ((*(volatile Ifx_MCDS_SRIAC_MSK*)0xF00EF528u)) /* lint --e(923)*/

/** 7524, Comparator Range Register */
#define MCDS_SRI_SRI1AC2_RNG ((*(volatile Ifx_MCDS_SRIAC_RNG*)0xF00EF524u)) /* lint --e(923)*/

/** 7530, Comparator Bound Register */
#define MCDS_SRI_SRI1AC3_BND ((*(volatile Ifx_MCDS_SRIAC_BND*)0xF00EF530u)) /* lint --e(923)*/

/** 7538, Comparator Mask Register */
#define MCDS_SRI_SRI1AC3_MSK ((*(volatile Ifx_MCDS_SRIAC_MSK*)0xF00EF538u)) /* lint --e(923)*/

/** 7534, Comparator Range Register */
#define MCDS_SRI_SRI1AC3_RNG ((*(volatile Ifx_MCDS_SRIAC_RNG*)0xF00EF534u)) /* lint --e(923)*/

/** 7210, Lookup Table Base Register */
#define MCDS_SRI_SRI1BAL0_BND ((*(volatile Ifx_MCDS_SRIBAL_BND*)0xF00EF210u)) /* lint --e(923)*/

/** 7218, Lookup Table Mapping Register */
#define MCDS_SRI_SRI1BAL0_MAP ((*(volatile Ifx_MCDS_SRIBAL_MAP*)0xF00EF218u)) /* lint --e(923)*/

/** 7214, Lookup Table Range Register */
#define MCDS_SRI_SRI1BAL0_RNG ((*(volatile Ifx_MCDS_SRIBAL_RNG*)0xF00EF214u)) /* lint --e(923)*/

/** 7220, Lookup Table Base Register */
#define MCDS_SRI_SRI1BAL1_BND ((*(volatile Ifx_MCDS_SRIBAL_BND*)0xF00EF220u)) /* lint --e(923)*/

/** 7228, Lookup Table Mapping Register */
#define MCDS_SRI_SRI1BAL1_MAP ((*(volatile Ifx_MCDS_SRIBAL_MAP*)0xF00EF228u)) /* lint --e(923)*/

/** 7224, Lookup Table Range Register */
#define MCDS_SRI_SRI1BAL1_RNG ((*(volatile Ifx_MCDS_SRIBAL_RNG*)0xF00EF224u)) /* lint --e(923)*/

/** 7230, Lookup Table Base Register */
#define MCDS_SRI_SRI1BAL2_BND ((*(volatile Ifx_MCDS_SRIBAL_BND*)0xF00EF230u)) /* lint --e(923)*/

/** 7238, Lookup Table Mapping Register */
#define MCDS_SRI_SRI1BAL2_MAP ((*(volatile Ifx_MCDS_SRIBAL_MAP*)0xF00EF238u)) /* lint --e(923)*/

/** 7234, Lookup Table Range Register */
#define MCDS_SRI_SRI1BAL2_RNG ((*(volatile Ifx_MCDS_SRIBAL_RNG*)0xF00EF234u)) /* lint --e(923)*/

/** 7240, Lookup Table Base Register */
#define MCDS_SRI_SRI1BAL3_BND ((*(volatile Ifx_MCDS_SRIBAL_BND*)0xF00EF240u)) /* lint --e(923)*/

/** 7248, Lookup Table Mapping Register */
#define MCDS_SRI_SRI1BAL3_MAP ((*(volatile Ifx_MCDS_SRIBAL_MAP*)0xF00EF248u)) /* lint --e(923)*/

/** 7244, Lookup Table Range Register */
#define MCDS_SRI_SRI1BAL3_RNG ((*(volatile Ifx_MCDS_SRIBAL_RNG*)0xF00EF244u)) /* lint --e(923)*/

/** 7204, Lookup Table Address Register */
#define MCDS_SRI_SRI1BALLU_TA ((*(volatile Ifx_MCDS_LOKUP_TA*)0xF00EF204u)) /* lint --e(923)*/

/** 7200, Lookup Table Data Register */
#define MCDS_SRI_SRI1BALLU_TD ((*(volatile Ifx_MCDS_LOKUP_TD*)0xF00EF200u)) /* lint --e(923)*/

/** 7400, Comparator Bound Register */
#define MCDS_SRI_SRI1EA0_BND ((*(volatile Ifx_MCDS_SRIEA_BND*)0xF00EF400u)) /* lint --e(923)*/

/** 7404, Comparator Range Register */
#define MCDS_SRI_SRI1EA0_RNG ((*(volatile Ifx_MCDS_SRIEA_RNG*)0xF00EF404u)) /* lint --e(923)*/

/** 7410, Comparator Bound Register */
#define MCDS_SRI_SRI1EA1_BND ((*(volatile Ifx_MCDS_SRIEA_BND*)0xF00EF410u)) /* lint --e(923)*/

/** 7414, Comparator Range Register */
#define MCDS_SRI_SRI1EA1_RNG ((*(volatile Ifx_MCDS_SRIEA_RNG*)0xF00EF414u)) /* lint --e(923)*/

/** 7420, Comparator Bound Register */
#define MCDS_SRI_SRI1EA2_BND ((*(volatile Ifx_MCDS_SRIEA_BND*)0xF00EF420u)) /* lint --e(923)*/

/** 7424, Comparator Range Register */
#define MCDS_SRI_SRI1EA2_RNG ((*(volatile Ifx_MCDS_SRIEA_RNG*)0xF00EF424u)) /* lint --e(923)*/

/** 7430, Comparator Bound Register */
#define MCDS_SRI_SRI1EA3_BND ((*(volatile Ifx_MCDS_SRIEA_BND*)0xF00EF430u)) /* lint --e(923)*/

/** 7434, Comparator Range Register */
#define MCDS_SRI_SRI1EA3_RNG ((*(volatile Ifx_MCDS_SRIEA_RNG*)0xF00EF434u)) /* lint --e(923)*/

/** 7480, Comparator Bound Register */
#define MCDS_SRI_SRI1WD0_BND ((*(volatile Ifx_MCDS_SRIWD_BND*)0xF00EF480u)) /* lint --e(923)*/

/** 7484, Comparator Bound Register */
#define MCDS_SRI_SRI1WD0_HBND ((*(volatile Ifx_MCDS_SRIWD_HBND*)0xF00EF484u)) /* lint --e(923)*/

/** 7494, Comparator Mask Register */
#define MCDS_SRI_SRI1WD0_HMSK ((*(volatile Ifx_MCDS_SRIWD_HMSK*)0xF00EF494u)) /* lint --e(923)*/

/** 748C, Comparator Range Register */
#define MCDS_SRI_SRI1WD0_HRNG ((*(volatile Ifx_MCDS_SRIWD_HRNG*)0xF00EF48Cu)) /* lint --e(923)*/

/** 7490, Comparator Mask Register */
#define MCDS_SRI_SRI1WD0_MSK ((*(volatile Ifx_MCDS_SRIWD_MSK*)0xF00EF490u)) /* lint --e(923)*/

/** 7488, Comparator Range Register */
#define MCDS_SRI_SRI1WD0_RNG ((*(volatile Ifx_MCDS_SRIWD_RNG*)0xF00EF488u)) /* lint --e(923)*/

/** 749C, Comparator Sign Register */
#define MCDS_SRI_SRI1WD0_SGN ((*(volatile Ifx_MCDS_SRIWD_SGN*)0xF00EF49Cu)) /* lint --e(923)*/

/** 74A0, Comparator Bound Register */
#define MCDS_SRI_SRI1WD1_BND ((*(volatile Ifx_MCDS_SRIWD_BND*)0xF00EF4A0u)) /* lint --e(923)*/

/** 74A4, Comparator Bound Register */
#define MCDS_SRI_SRI1WD1_HBND ((*(volatile Ifx_MCDS_SRIWD_HBND*)0xF00EF4A4u)) /* lint --e(923)*/

/** 74B4, Comparator Mask Register */
#define MCDS_SRI_SRI1WD1_HMSK ((*(volatile Ifx_MCDS_SRIWD_HMSK*)0xF00EF4B4u)) /* lint --e(923)*/

/** 74AC, Comparator Range Register */
#define MCDS_SRI_SRI1WD1_HRNG ((*(volatile Ifx_MCDS_SRIWD_HRNG*)0xF00EF4ACu)) /* lint --e(923)*/

/** 74B0, Comparator Mask Register */
#define MCDS_SRI_SRI1WD1_MSK ((*(volatile Ifx_MCDS_SRIWD_MSK*)0xF00EF4B0u)) /* lint --e(923)*/

/** 74A8, Comparator Range Register */
#define MCDS_SRI_SRI1WD1_RNG ((*(volatile Ifx_MCDS_SRIWD_RNG*)0xF00EF4A8u)) /* lint --e(923)*/

/** 74BC, Comparator Sign Register */
#define MCDS_SRI_SRI1WD1_SGN ((*(volatile Ifx_MCDS_SRIWD_SGN*)0xF00EF4BCu)) /* lint --e(923)*/

/** 74C0, Comparator Bound Register */
#define MCDS_SRI_SRI1WD2_BND ((*(volatile Ifx_MCDS_SRIWD_BND*)0xF00EF4C0u)) /* lint --e(923)*/

/** 74C4, Comparator Bound Register */
#define MCDS_SRI_SRI1WD2_HBND ((*(volatile Ifx_MCDS_SRIWD_HBND*)0xF00EF4C4u)) /* lint --e(923)*/

/** 74D4, Comparator Mask Register */
#define MCDS_SRI_SRI1WD2_HMSK ((*(volatile Ifx_MCDS_SRIWD_HMSK*)0xF00EF4D4u)) /* lint --e(923)*/

/** 74CC, Comparator Range Register */
#define MCDS_SRI_SRI1WD2_HRNG ((*(volatile Ifx_MCDS_SRIWD_HRNG*)0xF00EF4CCu)) /* lint --e(923)*/

/** 74D0, Comparator Mask Register */
#define MCDS_SRI_SRI1WD2_MSK ((*(volatile Ifx_MCDS_SRIWD_MSK*)0xF00EF4D0u)) /* lint --e(923)*/

/** 74C8, Comparator Range Register */
#define MCDS_SRI_SRI1WD2_RNG ((*(volatile Ifx_MCDS_SRIWD_RNG*)0xF00EF4C8u)) /* lint --e(923)*/

/** 74DC, Comparator Sign Register */
#define MCDS_SRI_SRI1WD2_SGN ((*(volatile Ifx_MCDS_SRIWD_SGN*)0xF00EF4DCu)) /* lint --e(923)*/

/** 74E0, Comparator Bound Register */
#define MCDS_SRI_SRI1WD3_BND ((*(volatile Ifx_MCDS_SRIWD_BND*)0xF00EF4E0u)) /* lint --e(923)*/

/** 74E4, Comparator Bound Register */
#define MCDS_SRI_SRI1WD3_HBND ((*(volatile Ifx_MCDS_SRIWD_HBND*)0xF00EF4E4u)) /* lint --e(923)*/

/** 74F4, Comparator Mask Register */
#define MCDS_SRI_SRI1WD3_HMSK ((*(volatile Ifx_MCDS_SRIWD_HMSK*)0xF00EF4F4u)) /* lint --e(923)*/

/** 74EC, Comparator Range Register */
#define MCDS_SRI_SRI1WD3_HRNG ((*(volatile Ifx_MCDS_SRIWD_HRNG*)0xF00EF4ECu)) /* lint --e(923)*/

/** 74F0, Comparator Mask Register */
#define MCDS_SRI_SRI1WD3_MSK ((*(volatile Ifx_MCDS_SRIWD_MSK*)0xF00EF4F0u)) /* lint --e(923)*/

/** 74E8, Comparator Range Register */
#define MCDS_SRI_SRI1WD3_RNG ((*(volatile Ifx_MCDS_SRIWD_RNG*)0xF00EF4E8u)) /* lint --e(923)*/

/** 74FC, Comparator Sign Register */
#define MCDS_SRI_SRI1WD3_SGN ((*(volatile Ifx_MCDS_SRIWD_SGN*)0xF00EF4FCu)) /* lint --e(923)*/

/** 7700, Comparator Bound Register */
#define MCDS_SRI_SRI2AC0_BND ((*(volatile Ifx_MCDS_SRIAC_BND*)0xF00EF700u)) /* lint --e(923)*/

/** 7708, Comparator Mask Register */
#define MCDS_SRI_SRI2AC0_MSK ((*(volatile Ifx_MCDS_SRIAC_MSK*)0xF00EF708u)) /* lint --e(923)*/

/** 7704, Comparator Range Register */
#define MCDS_SRI_SRI2AC0_RNG ((*(volatile Ifx_MCDS_SRIAC_RNG*)0xF00EF704u)) /* lint --e(923)*/

/** 7710, Comparator Bound Register */
#define MCDS_SRI_SRI2AC1_BND ((*(volatile Ifx_MCDS_SRIAC_BND*)0xF00EF710u)) /* lint --e(923)*/

/** 7718, Comparator Mask Register */
#define MCDS_SRI_SRI2AC1_MSK ((*(volatile Ifx_MCDS_SRIAC_MSK*)0xF00EF718u)) /* lint --e(923)*/

/** 7714, Comparator Range Register */
#define MCDS_SRI_SRI2AC1_RNG ((*(volatile Ifx_MCDS_SRIAC_RNG*)0xF00EF714u)) /* lint --e(923)*/

/** 7720, Comparator Bound Register */
#define MCDS_SRI_SRI2AC2_BND ((*(volatile Ifx_MCDS_SRIAC_BND*)0xF00EF720u)) /* lint --e(923)*/

/** 7728, Comparator Mask Register */
#define MCDS_SRI_SRI2AC2_MSK ((*(volatile Ifx_MCDS_SRIAC_MSK*)0xF00EF728u)) /* lint --e(923)*/

/** 7724, Comparator Range Register */
#define MCDS_SRI_SRI2AC2_RNG ((*(volatile Ifx_MCDS_SRIAC_RNG*)0xF00EF724u)) /* lint --e(923)*/

/** 7730, Comparator Bound Register */
#define MCDS_SRI_SRI2AC3_BND ((*(volatile Ifx_MCDS_SRIAC_BND*)0xF00EF730u)) /* lint --e(923)*/

/** 7738, Comparator Mask Register */
#define MCDS_SRI_SRI2AC3_MSK ((*(volatile Ifx_MCDS_SRIAC_MSK*)0xF00EF738u)) /* lint --e(923)*/

/** 7734, Comparator Range Register */
#define MCDS_SRI_SRI2AC3_RNG ((*(volatile Ifx_MCDS_SRIAC_RNG*)0xF00EF734u)) /* lint --e(923)*/

/** 7310, Lookup Table Base Register */
#define MCDS_SRI_SRI2BAL0_BND ((*(volatile Ifx_MCDS_SRIBAL_BND*)0xF00EF310u)) /* lint --e(923)*/

/** 7318, Lookup Table Mapping Register */
#define MCDS_SRI_SRI2BAL0_MAP ((*(volatile Ifx_MCDS_SRIBAL_MAP*)0xF00EF318u)) /* lint --e(923)*/

/** 7314, Lookup Table Range Register */
#define MCDS_SRI_SRI2BAL0_RNG ((*(volatile Ifx_MCDS_SRIBAL_RNG*)0xF00EF314u)) /* lint --e(923)*/

/** 7320, Lookup Table Base Register */
#define MCDS_SRI_SRI2BAL1_BND ((*(volatile Ifx_MCDS_SRIBAL_BND*)0xF00EF320u)) /* lint --e(923)*/

/** 7328, Lookup Table Mapping Register */
#define MCDS_SRI_SRI2BAL1_MAP ((*(volatile Ifx_MCDS_SRIBAL_MAP*)0xF00EF328u)) /* lint --e(923)*/

/** 7324, Lookup Table Range Register */
#define MCDS_SRI_SRI2BAL1_RNG ((*(volatile Ifx_MCDS_SRIBAL_RNG*)0xF00EF324u)) /* lint --e(923)*/

/** 7330, Lookup Table Base Register */
#define MCDS_SRI_SRI2BAL2_BND ((*(volatile Ifx_MCDS_SRIBAL_BND*)0xF00EF330u)) /* lint --e(923)*/

/** 7338, Lookup Table Mapping Register */
#define MCDS_SRI_SRI2BAL2_MAP ((*(volatile Ifx_MCDS_SRIBAL_MAP*)0xF00EF338u)) /* lint --e(923)*/

/** 7334, Lookup Table Range Register */
#define MCDS_SRI_SRI2BAL2_RNG ((*(volatile Ifx_MCDS_SRIBAL_RNG*)0xF00EF334u)) /* lint --e(923)*/

/** 7340, Lookup Table Base Register */
#define MCDS_SRI_SRI2BAL3_BND ((*(volatile Ifx_MCDS_SRIBAL_BND*)0xF00EF340u)) /* lint --e(923)*/

/** 7348, Lookup Table Mapping Register */
#define MCDS_SRI_SRI2BAL3_MAP ((*(volatile Ifx_MCDS_SRIBAL_MAP*)0xF00EF348u)) /* lint --e(923)*/

/** 7344, Lookup Table Range Register */
#define MCDS_SRI_SRI2BAL3_RNG ((*(volatile Ifx_MCDS_SRIBAL_RNG*)0xF00EF344u)) /* lint --e(923)*/

/** 7304, Lookup Table Address Register */
#define MCDS_SRI_SRI2BALLU_TA ((*(volatile Ifx_MCDS_LOKUP_TA*)0xF00EF304u)) /* lint --e(923)*/

/** 7300, Lookup Table Data Register */
#define MCDS_SRI_SRI2BALLU_TD ((*(volatile Ifx_MCDS_LOKUP_TD*)0xF00EF300u)) /* lint --e(923)*/

/** 7600, Comparator Bound Register */
#define MCDS_SRI_SRI2EA0_BND ((*(volatile Ifx_MCDS_SRIEA_BND*)0xF00EF600u)) /* lint --e(923)*/

/** 7604, Comparator Range Register */
#define MCDS_SRI_SRI2EA0_RNG ((*(volatile Ifx_MCDS_SRIEA_RNG*)0xF00EF604u)) /* lint --e(923)*/

/** 7610, Comparator Bound Register */
#define MCDS_SRI_SRI2EA1_BND ((*(volatile Ifx_MCDS_SRIEA_BND*)0xF00EF610u)) /* lint --e(923)*/

/** 7614, Comparator Range Register */
#define MCDS_SRI_SRI2EA1_RNG ((*(volatile Ifx_MCDS_SRIEA_RNG*)0xF00EF614u)) /* lint --e(923)*/

/** 7620, Comparator Bound Register */
#define MCDS_SRI_SRI2EA2_BND ((*(volatile Ifx_MCDS_SRIEA_BND*)0xF00EF620u)) /* lint --e(923)*/

/** 7624, Comparator Range Register */
#define MCDS_SRI_SRI2EA2_RNG ((*(volatile Ifx_MCDS_SRIEA_RNG*)0xF00EF624u)) /* lint --e(923)*/

/** 7630, Comparator Bound Register */
#define MCDS_SRI_SRI2EA3_BND ((*(volatile Ifx_MCDS_SRIEA_BND*)0xF00EF630u)) /* lint --e(923)*/

/** 7634, Comparator Range Register */
#define MCDS_SRI_SRI2EA3_RNG ((*(volatile Ifx_MCDS_SRIEA_RNG*)0xF00EF634u)) /* lint --e(923)*/

/** 7680, Comparator Bound Register */
#define MCDS_SRI_SRI2WD0_BND ((*(volatile Ifx_MCDS_SRIWD_BND*)0xF00EF680u)) /* lint --e(923)*/

/** 7684, Comparator Bound Register */
#define MCDS_SRI_SRI2WD0_HBND ((*(volatile Ifx_MCDS_SRIWD_HBND*)0xF00EF684u)) /* lint --e(923)*/

/** 7694, Comparator Mask Register */
#define MCDS_SRI_SRI2WD0_HMSK ((*(volatile Ifx_MCDS_SRIWD_HMSK*)0xF00EF694u)) /* lint --e(923)*/

/** 768C, Comparator Range Register */
#define MCDS_SRI_SRI2WD0_HRNG ((*(volatile Ifx_MCDS_SRIWD_HRNG*)0xF00EF68Cu)) /* lint --e(923)*/

/** 7690, Comparator Mask Register */
#define MCDS_SRI_SRI2WD0_MSK ((*(volatile Ifx_MCDS_SRIWD_MSK*)0xF00EF690u)) /* lint --e(923)*/

/** 7688, Comparator Range Register */
#define MCDS_SRI_SRI2WD0_RNG ((*(volatile Ifx_MCDS_SRIWD_RNG*)0xF00EF688u)) /* lint --e(923)*/

/** 769C, Comparator Sign Register */
#define MCDS_SRI_SRI2WD0_SGN ((*(volatile Ifx_MCDS_SRIWD_SGN*)0xF00EF69Cu)) /* lint --e(923)*/

/** 76A0, Comparator Bound Register */
#define MCDS_SRI_SRI2WD1_BND ((*(volatile Ifx_MCDS_SRIWD_BND*)0xF00EF6A0u)) /* lint --e(923)*/

/** 76A4, Comparator Bound Register */
#define MCDS_SRI_SRI2WD1_HBND ((*(volatile Ifx_MCDS_SRIWD_HBND*)0xF00EF6A4u)) /* lint --e(923)*/

/** 76B4, Comparator Mask Register */
#define MCDS_SRI_SRI2WD1_HMSK ((*(volatile Ifx_MCDS_SRIWD_HMSK*)0xF00EF6B4u)) /* lint --e(923)*/

/** 76AC, Comparator Range Register */
#define MCDS_SRI_SRI2WD1_HRNG ((*(volatile Ifx_MCDS_SRIWD_HRNG*)0xF00EF6ACu)) /* lint --e(923)*/

/** 76B0, Comparator Mask Register */
#define MCDS_SRI_SRI2WD1_MSK ((*(volatile Ifx_MCDS_SRIWD_MSK*)0xF00EF6B0u)) /* lint --e(923)*/

/** 76A8, Comparator Range Register */
#define MCDS_SRI_SRI2WD1_RNG ((*(volatile Ifx_MCDS_SRIWD_RNG*)0xF00EF6A8u)) /* lint --e(923)*/

/** 76BC, Comparator Sign Register */
#define MCDS_SRI_SRI2WD1_SGN ((*(volatile Ifx_MCDS_SRIWD_SGN*)0xF00EF6BCu)) /* lint --e(923)*/

/** 76C0, Comparator Bound Register */
#define MCDS_SRI_SRI2WD2_BND ((*(volatile Ifx_MCDS_SRIWD_BND*)0xF00EF6C0u)) /* lint --e(923)*/

/** 76C4, Comparator Bound Register */
#define MCDS_SRI_SRI2WD2_HBND ((*(volatile Ifx_MCDS_SRIWD_HBND*)0xF00EF6C4u)) /* lint --e(923)*/

/** 76D4, Comparator Mask Register */
#define MCDS_SRI_SRI2WD2_HMSK ((*(volatile Ifx_MCDS_SRIWD_HMSK*)0xF00EF6D4u)) /* lint --e(923)*/

/** 76CC, Comparator Range Register */
#define MCDS_SRI_SRI2WD2_HRNG ((*(volatile Ifx_MCDS_SRIWD_HRNG*)0xF00EF6CCu)) /* lint --e(923)*/

/** 76D0, Comparator Mask Register */
#define MCDS_SRI_SRI2WD2_MSK ((*(volatile Ifx_MCDS_SRIWD_MSK*)0xF00EF6D0u)) /* lint --e(923)*/

/** 76C8, Comparator Range Register */
#define MCDS_SRI_SRI2WD2_RNG ((*(volatile Ifx_MCDS_SRIWD_RNG*)0xF00EF6C8u)) /* lint --e(923)*/

/** 76DC, Comparator Sign Register */
#define MCDS_SRI_SRI2WD2_SGN ((*(volatile Ifx_MCDS_SRIWD_SGN*)0xF00EF6DCu)) /* lint --e(923)*/

/** 76E0, Comparator Bound Register */
#define MCDS_SRI_SRI2WD3_BND ((*(volatile Ifx_MCDS_SRIWD_BND*)0xF00EF6E0u)) /* lint --e(923)*/

/** 76E4, Comparator Bound Register */
#define MCDS_SRI_SRI2WD3_HBND ((*(volatile Ifx_MCDS_SRIWD_HBND*)0xF00EF6E4u)) /* lint --e(923)*/

/** 76F4, Comparator Mask Register */
#define MCDS_SRI_SRI2WD3_HMSK ((*(volatile Ifx_MCDS_SRIWD_HMSK*)0xF00EF6F4u)) /* lint --e(923)*/

/** 76EC, Comparator Range Register */
#define MCDS_SRI_SRI2WD3_HRNG ((*(volatile Ifx_MCDS_SRIWD_HRNG*)0xF00EF6ECu)) /* lint --e(923)*/

/** 76F0, Comparator Mask Register */
#define MCDS_SRI_SRI2WD3_MSK ((*(volatile Ifx_MCDS_SRIWD_MSK*)0xF00EF6F0u)) /* lint --e(923)*/

/** 76E8, Comparator Range Register */
#define MCDS_SRI_SRI2WD3_RNG ((*(volatile Ifx_MCDS_SRIWD_RNG*)0xF00EF6E8u)) /* lint --e(923)*/

/** 76FC, Comparator Sign Register */
#define MCDS_SRI_SRI2WD3_SGN ((*(volatile Ifx_MCDS_SRIWD_SGN*)0xF00EF6FCu)) /* lint --e(923)*/

/** 7880, Action Definition Register */
#define MCDS_SRI_SRIACT0 ((*(volatile Ifx_MCDS_ACT*)0xF00EF880u)) /* lint --e(923)*/

/** 7884, Action Definition Register */
#define MCDS_SRI_SRIACT1 ((*(volatile Ifx_MCDS_ACT*)0xF00EF884u)) /* lint --e(923)*/

/** 78A8, Action Definition Register */
#define MCDS_SRI_SRIACT10 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8A8u)) /* lint --e(923)*/

/** 78AC, Action Definition Register */
#define MCDS_SRI_SRIACT11 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8ACu)) /* lint --e(923)*/

/** 78B0, Action Definition Register */
#define MCDS_SRI_SRIACT12 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8B0u)) /* lint --e(923)*/

/** 78B4, Action Definition Register */
#define MCDS_SRI_SRIACT13 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8B4u)) /* lint --e(923)*/

/** 78B8, Action Definition Register */
#define MCDS_SRI_SRIACT14 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8B8u)) /* lint --e(923)*/

/** 78BC, Action Definition Register */
#define MCDS_SRI_SRIACT15 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8BCu)) /* lint --e(923)*/

/** 78C0, Action Definition Register */
#define MCDS_SRI_SRIACT16 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8C0u)) /* lint --e(923)*/

/** 78C4, Action Definition Register */
#define MCDS_SRI_SRIACT17 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8C4u)) /* lint --e(923)*/

/** 78C8, Action Definition Register */
#define MCDS_SRI_SRIACT18 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8C8u)) /* lint --e(923)*/

/** 78CC, Action Definition Register */
#define MCDS_SRI_SRIACT19 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8CCu)) /* lint --e(923)*/

/** 7888, Action Definition Register */
#define MCDS_SRI_SRIACT2 ((*(volatile Ifx_MCDS_ACT*)0xF00EF888u)) /* lint --e(923)*/

/** 78D0, Action Definition Register */
#define MCDS_SRI_SRIACT20 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8D0u)) /* lint --e(923)*/

/** 78D4, Action Definition Register */
#define MCDS_SRI_SRIACT21 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8D4u)) /* lint --e(923)*/

/** 78D8, Action Definition Register */
#define MCDS_SRI_SRIACT22 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8D8u)) /* lint --e(923)*/

/** 78DC, Action Definition Register */
#define MCDS_SRI_SRIACT23 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8DCu)) /* lint --e(923)*/

/** 78E0, Action Definition Register */
#define MCDS_SRI_SRIACT24 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8E0u)) /* lint --e(923)*/

/** 78E4, Action Definition Register */
#define MCDS_SRI_SRIACT25 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8E4u)) /* lint --e(923)*/

/** 78E8, Action Definition Register */
#define MCDS_SRI_SRIACT26 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8E8u)) /* lint --e(923)*/

/** 788C, Action Definition Register */
#define MCDS_SRI_SRIACT3 ((*(volatile Ifx_MCDS_ACT*)0xF00EF88Cu)) /* lint --e(923)*/

/** 7890, Action Definition Register */
#define MCDS_SRI_SRIACT4 ((*(volatile Ifx_MCDS_ACT*)0xF00EF890u)) /* lint --e(923)*/

/** 7894, Action Definition Register */
#define MCDS_SRI_SRIACT5 ((*(volatile Ifx_MCDS_ACT*)0xF00EF894u)) /* lint --e(923)*/

/** 7898, Action Definition Register */
#define MCDS_SRI_SRIACT6 ((*(volatile Ifx_MCDS_ACT*)0xF00EF898u)) /* lint --e(923)*/

/** 789C, Action Definition Register */
#define MCDS_SRI_SRIACT7 ((*(volatile Ifx_MCDS_ACT*)0xF00EF89Cu)) /* lint --e(923)*/

/** 78A0, Action Definition Register */
#define MCDS_SRI_SRIACT8 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8A0u)) /* lint --e(923)*/

/** 78A4, Action Definition Register */
#define MCDS_SRI_SRIACT9 ((*(volatile Ifx_MCDS_ACT*)0xF00EF8A4u)) /* lint --e(923)*/

/** 7000, Debug Status Register */
#define MCDS_SRI_SRIDCSTS ((*(volatile Ifx_MCDS_SRI_SRIDCSTS*)0xF00EF000u)) /* lint --e(923)*/

/** 7800, Event Definition Register */
#define MCDS_SRI_SRIEVT0 ((*(volatile Ifx_MCDS_EVT*)0xF00EF800u)) /* lint --e(923)*/

/** 7804, Event Definition Register */
#define MCDS_SRI_SRIEVT1 ((*(volatile Ifx_MCDS_EVT*)0xF00EF804u)) /* lint --e(923)*/

/** 7828, Event Definition Register */
#define MCDS_SRI_SRIEVT10 ((*(volatile Ifx_MCDS_EVT*)0xF00EF828u)) /* lint --e(923)*/

/** 782C, Event Definition Register */
#define MCDS_SRI_SRIEVT11 ((*(volatile Ifx_MCDS_EVT*)0xF00EF82Cu)) /* lint --e(923)*/

/** 7830, Event Definition Register */
#define MCDS_SRI_SRIEVT12 ((*(volatile Ifx_MCDS_EVT*)0xF00EF830u)) /* lint --e(923)*/

/** 7834, Event Definition Register */
#define MCDS_SRI_SRIEVT13 ((*(volatile Ifx_MCDS_EVT*)0xF00EF834u)) /* lint --e(923)*/

/** 7838, Event Definition Register */
#define MCDS_SRI_SRIEVT14 ((*(volatile Ifx_MCDS_EVT*)0xF00EF838u)) /* lint --e(923)*/

/** 783C, Event Definition Register */
#define MCDS_SRI_SRIEVT15 ((*(volatile Ifx_MCDS_EVT*)0xF00EF83Cu)) /* lint --e(923)*/

/** 7808, Event Definition Register */
#define MCDS_SRI_SRIEVT2 ((*(volatile Ifx_MCDS_EVT*)0xF00EF808u)) /* lint --e(923)*/

/** 780C, Event Definition Register */
#define MCDS_SRI_SRIEVT3 ((*(volatile Ifx_MCDS_EVT*)0xF00EF80Cu)) /* lint --e(923)*/

/** 7810, Event Definition Register */
#define MCDS_SRI_SRIEVT4 ((*(volatile Ifx_MCDS_EVT*)0xF00EF810u)) /* lint --e(923)*/

/** 7814, Event Definition Register */
#define MCDS_SRI_SRIEVT5 ((*(volatile Ifx_MCDS_EVT*)0xF00EF814u)) /* lint --e(923)*/

/** 7818, Event Definition Register */
#define MCDS_SRI_SRIEVT6 ((*(volatile Ifx_MCDS_EVT*)0xF00EF818u)) /* lint --e(923)*/

/** 781C, Event Definition Register */
#define MCDS_SRI_SRIEVT7 ((*(volatile Ifx_MCDS_EVT*)0xF00EF81Cu)) /* lint --e(923)*/

/** 7820, Event Definition Register */
#define MCDS_SRI_SRIEVT8 ((*(volatile Ifx_MCDS_EVT*)0xF00EF820u)) /* lint --e(923)*/

/** 7824, Event Definition Register */
#define MCDS_SRI_SRIEVT9 ((*(volatile Ifx_MCDS_EVT*)0xF00EF824u)) /* lint --e(923)*/

/** Alias for MCDS_SRI_SRI1AC0_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1AC0_BND instead.
 * 7500, Comparator Bound Register
 */
#define MCDS_SRISRI1AC0_BND (MCDS_SRI_SRI1AC0_BND)

/** Alias for MCDS_SRI_SRI1AC0_MSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1AC0_MSK instead.
 * 7508, Comparator Mask Register
 */
#define MCDS_SRISRI1AC0_MSK (MCDS_SRI_SRI1AC0_MSK)

/** Alias for MCDS_SRI_SRI1AC0_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1AC0_RNG instead.
 * 7504, Comparator Range Register
 */
#define MCDS_SRISRI1AC0_RNG (MCDS_SRI_SRI1AC0_RNG)

/** Alias for MCDS_SRI_SRI1AC1_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1AC1_BND instead.
 * 7510, Comparator Bound Register
 */
#define MCDS_SRISRI1AC1_BND (MCDS_SRI_SRI1AC1_BND)

/** Alias for MCDS_SRI_SRI1AC1_MSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1AC1_MSK instead.
 * 7518, Comparator Mask Register
 */
#define MCDS_SRISRI1AC1_MSK (MCDS_SRI_SRI1AC1_MSK)

/** Alias for MCDS_SRI_SRI1AC1_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1AC1_RNG instead.
 * 7514, Comparator Range Register
 */
#define MCDS_SRISRI1AC1_RNG (MCDS_SRI_SRI1AC1_RNG)

/** Alias for MCDS_SRI_SRI1AC2_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1AC2_BND instead.
 * 7520, Comparator Bound Register
 */
#define MCDS_SRISRI1AC2_BND (MCDS_SRI_SRI1AC2_BND)

/** Alias for MCDS_SRI_SRI1AC2_MSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1AC2_MSK instead.
 * 7528, Comparator Mask Register
 */
#define MCDS_SRISRI1AC2_MSK (MCDS_SRI_SRI1AC2_MSK)

/** Alias for MCDS_SRI_SRI1AC2_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1AC2_RNG instead.
 * 7524, Comparator Range Register
 */
#define MCDS_SRISRI1AC2_RNG (MCDS_SRI_SRI1AC2_RNG)

/** Alias for MCDS_SRI_SRI1AC3_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1AC3_BND instead.
 * 7530, Comparator Bound Register
 */
#define MCDS_SRISRI1AC3_BND (MCDS_SRI_SRI1AC3_BND)

/** Alias for MCDS_SRI_SRI1AC3_MSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1AC3_MSK instead.
 * 7538, Comparator Mask Register
 */
#define MCDS_SRISRI1AC3_MSK (MCDS_SRI_SRI1AC3_MSK)

/** Alias for MCDS_SRI_SRI1AC3_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1AC3_RNG instead.
 * 7534, Comparator Range Register
 */
#define MCDS_SRISRI1AC3_RNG (MCDS_SRI_SRI1AC3_RNG)

/** Alias for MCDS_SRI_SRI1BAL0_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1BAL0_BND instead.
 * 7210, Lookup Table Base Register
 */
#define MCDS_SRISRI1BAL0_BND (MCDS_SRI_SRI1BAL0_BND)

/** Alias for MCDS_SRI_SRI1BAL0_MAP.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1BAL0_MAP instead.
 * 7218, Lookup Table Mapping Register
 */
#define MCDS_SRISRI1BAL0_MAP (MCDS_SRI_SRI1BAL0_MAP)

/** Alias for MCDS_SRI_SRI1BAL0_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1BAL0_RNG instead.
 * 7214, Lookup Table Range Register
 */
#define MCDS_SRISRI1BAL0_RNG (MCDS_SRI_SRI1BAL0_RNG)

/** Alias for MCDS_SRI_SRI1BAL1_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1BAL1_BND instead.
 * 7220, Lookup Table Base Register
 */
#define MCDS_SRISRI1BAL1_BND (MCDS_SRI_SRI1BAL1_BND)

/** Alias for MCDS_SRI_SRI1BAL1_MAP.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1BAL1_MAP instead.
 * 7228, Lookup Table Mapping Register
 */
#define MCDS_SRISRI1BAL1_MAP (MCDS_SRI_SRI1BAL1_MAP)

/** Alias for MCDS_SRI_SRI1BAL1_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1BAL1_RNG instead.
 * 7224, Lookup Table Range Register
 */
#define MCDS_SRISRI1BAL1_RNG (MCDS_SRI_SRI1BAL1_RNG)

/** Alias for MCDS_SRI_SRI1BAL2_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1BAL2_BND instead.
 * 7230, Lookup Table Base Register
 */
#define MCDS_SRISRI1BAL2_BND (MCDS_SRI_SRI1BAL2_BND)

/** Alias for MCDS_SRI_SRI1BAL2_MAP.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1BAL2_MAP instead.
 * 7238, Lookup Table Mapping Register
 */
#define MCDS_SRISRI1BAL2_MAP (MCDS_SRI_SRI1BAL2_MAP)

/** Alias for MCDS_SRI_SRI1BAL2_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1BAL2_RNG instead.
 * 7234, Lookup Table Range Register
 */
#define MCDS_SRISRI1BAL2_RNG (MCDS_SRI_SRI1BAL2_RNG)

/** Alias for MCDS_SRI_SRI1BAL3_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1BAL3_BND instead.
 * 7240, Lookup Table Base Register
 */
#define MCDS_SRISRI1BAL3_BND (MCDS_SRI_SRI1BAL3_BND)

/** Alias for MCDS_SRI_SRI1BAL3_MAP.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1BAL3_MAP instead.
 * 7248, Lookup Table Mapping Register
 */
#define MCDS_SRISRI1BAL3_MAP (MCDS_SRI_SRI1BAL3_MAP)

/** Alias for MCDS_SRI_SRI1BAL3_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1BAL3_RNG instead.
 * 7244, Lookup Table Range Register
 */
#define MCDS_SRISRI1BAL3_RNG (MCDS_SRI_SRI1BAL3_RNG)

/** Alias for MCDS_SRI_SRI1BALLU_TA.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1BALLU_TA instead.
 * 7204, Lookup Table Address Register
 */
#define MCDS_SRISRI1BALLU_TA (MCDS_SRI_SRI1BALLU_TA)

/** Alias for MCDS_SRI_SRI1BALLU_TD.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1BALLU_TD instead.
 * 7200, Lookup Table Data Register
 */
#define MCDS_SRISRI1BALLU_TD (MCDS_SRI_SRI1BALLU_TD)

/** Alias for MCDS_SRI_SRI1EA0_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1EA0_BND instead.
 * 7400, Comparator Bound Register
 */
#define MCDS_SRISRI1EA0_BND (MCDS_SRI_SRI1EA0_BND)

/** Alias for MCDS_SRI_SRI1EA0_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1EA0_RNG instead.
 * 7404, Comparator Range Register
 */
#define MCDS_SRISRI1EA0_RNG (MCDS_SRI_SRI1EA0_RNG)

/** Alias for MCDS_SRI_SRI1EA1_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1EA1_BND instead.
 * 7410, Comparator Bound Register
 */
#define MCDS_SRISRI1EA1_BND (MCDS_SRI_SRI1EA1_BND)

/** Alias for MCDS_SRI_SRI1EA1_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1EA1_RNG instead.
 * 7414, Comparator Range Register
 */
#define MCDS_SRISRI1EA1_RNG (MCDS_SRI_SRI1EA1_RNG)

/** Alias for MCDS_SRI_SRI1EA2_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1EA2_BND instead.
 * 7420, Comparator Bound Register
 */
#define MCDS_SRISRI1EA2_BND (MCDS_SRI_SRI1EA2_BND)

/** Alias for MCDS_SRI_SRI1EA2_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1EA2_RNG instead.
 * 7424, Comparator Range Register
 */
#define MCDS_SRISRI1EA2_RNG (MCDS_SRI_SRI1EA2_RNG)

/** Alias for MCDS_SRI_SRI1EA3_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1EA3_BND instead.
 * 7430, Comparator Bound Register
 */
#define MCDS_SRISRI1EA3_BND (MCDS_SRI_SRI1EA3_BND)

/** Alias for MCDS_SRI_SRI1EA3_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1EA3_RNG instead.
 * 7434, Comparator Range Register
 */
#define MCDS_SRISRI1EA3_RNG (MCDS_SRI_SRI1EA3_RNG)

/** Alias for MCDS_SRI_SRI1WD0_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD0_BND instead.
 * 7480, Comparator Bound Register
 */
#define MCDS_SRISRI1WD0_BND (MCDS_SRI_SRI1WD0_BND)

/** Alias for MCDS_SRI_SRI1WD0_HBND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD0_HBND instead.
 * 7484, Comparator Bound Register
 */
#define MCDS_SRISRI1WD0_HBND (MCDS_SRI_SRI1WD0_HBND)

/** Alias for MCDS_SRI_SRI1WD0_HMSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD0_HMSK instead.
 * 7494, Comparator Mask Register
 */
#define MCDS_SRISRI1WD0_HMSK (MCDS_SRI_SRI1WD0_HMSK)

/** Alias for MCDS_SRI_SRI1WD0_HRNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD0_HRNG instead.
 * 748C, Comparator Range Register
 */
#define MCDS_SRISRI1WD0_HRNG (MCDS_SRI_SRI1WD0_HRNG)

/** Alias for MCDS_SRI_SRI1WD0_MSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD0_MSK instead.
 * 7490, Comparator Mask Register
 */
#define MCDS_SRISRI1WD0_MSK (MCDS_SRI_SRI1WD0_MSK)

/** Alias for MCDS_SRI_SRI1WD0_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD0_RNG instead.
 * 7488, Comparator Range Register
 */
#define MCDS_SRISRI1WD0_RNG (MCDS_SRI_SRI1WD0_RNG)

/** Alias for MCDS_SRI_SRI1WD0_SGN.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD0_SGN instead.
 * 749C, Comparator Sign Register
 */
#define MCDS_SRISRI1WD0_SGN (MCDS_SRI_SRI1WD0_SGN)

/** Alias for MCDS_SRI_SRI1WD1_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD1_BND instead.
 * 74A0, Comparator Bound Register
 */
#define MCDS_SRISRI1WD1_BND (MCDS_SRI_SRI1WD1_BND)

/** Alias for MCDS_SRI_SRI1WD1_HBND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD1_HBND instead.
 * 74A4, Comparator Bound Register
 */
#define MCDS_SRISRI1WD1_HBND (MCDS_SRI_SRI1WD1_HBND)

/** Alias for MCDS_SRI_SRI1WD1_HMSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD1_HMSK instead.
 * 74B4, Comparator Mask Register
 */
#define MCDS_SRISRI1WD1_HMSK (MCDS_SRI_SRI1WD1_HMSK)

/** Alias for MCDS_SRI_SRI1WD1_HRNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD1_HRNG instead.
 * 74AC, Comparator Range Register
 */
#define MCDS_SRISRI1WD1_HRNG (MCDS_SRI_SRI1WD1_HRNG)

/** Alias for MCDS_SRI_SRI1WD1_MSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD1_MSK instead.
 * 74B0, Comparator Mask Register
 */
#define MCDS_SRISRI1WD1_MSK (MCDS_SRI_SRI1WD1_MSK)

/** Alias for MCDS_SRI_SRI1WD1_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD1_RNG instead.
 * 74A8, Comparator Range Register
 */
#define MCDS_SRISRI1WD1_RNG (MCDS_SRI_SRI1WD1_RNG)

/** Alias for MCDS_SRI_SRI1WD1_SGN.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD1_SGN instead.
 * 74BC, Comparator Sign Register
 */
#define MCDS_SRISRI1WD1_SGN (MCDS_SRI_SRI1WD1_SGN)

/** Alias for MCDS_SRI_SRI1WD2_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD2_BND instead.
 * 74C0, Comparator Bound Register
 */
#define MCDS_SRISRI1WD2_BND (MCDS_SRI_SRI1WD2_BND)

/** Alias for MCDS_SRI_SRI1WD2_HBND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD2_HBND instead.
 * 74C4, Comparator Bound Register
 */
#define MCDS_SRISRI1WD2_HBND (MCDS_SRI_SRI1WD2_HBND)

/** Alias for MCDS_SRI_SRI1WD2_HMSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD2_HMSK instead.
 * 74D4, Comparator Mask Register
 */
#define MCDS_SRISRI1WD2_HMSK (MCDS_SRI_SRI1WD2_HMSK)

/** Alias for MCDS_SRI_SRI1WD2_HRNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD2_HRNG instead.
 * 74CC, Comparator Range Register
 */
#define MCDS_SRISRI1WD2_HRNG (MCDS_SRI_SRI1WD2_HRNG)

/** Alias for MCDS_SRI_SRI1WD2_MSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD2_MSK instead.
 * 74D0, Comparator Mask Register
 */
#define MCDS_SRISRI1WD2_MSK (MCDS_SRI_SRI1WD2_MSK)

/** Alias for MCDS_SRI_SRI1WD2_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD2_RNG instead.
 * 74C8, Comparator Range Register
 */
#define MCDS_SRISRI1WD2_RNG (MCDS_SRI_SRI1WD2_RNG)

/** Alias for MCDS_SRI_SRI1WD2_SGN.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD2_SGN instead.
 * 74DC, Comparator Sign Register
 */
#define MCDS_SRISRI1WD2_SGN (MCDS_SRI_SRI1WD2_SGN)

/** Alias for MCDS_SRI_SRI1WD3_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD3_BND instead.
 * 74E0, Comparator Bound Register
 */
#define MCDS_SRISRI1WD3_BND (MCDS_SRI_SRI1WD3_BND)

/** Alias for MCDS_SRI_SRI1WD3_HBND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD3_HBND instead.
 * 74E4, Comparator Bound Register
 */
#define MCDS_SRISRI1WD3_HBND (MCDS_SRI_SRI1WD3_HBND)

/** Alias for MCDS_SRI_SRI1WD3_HMSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD3_HMSK instead.
 * 74F4, Comparator Mask Register
 */
#define MCDS_SRISRI1WD3_HMSK (MCDS_SRI_SRI1WD3_HMSK)

/** Alias for MCDS_SRI_SRI1WD3_HRNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD3_HRNG instead.
 * 74EC, Comparator Range Register
 */
#define MCDS_SRISRI1WD3_HRNG (MCDS_SRI_SRI1WD3_HRNG)

/** Alias for MCDS_SRI_SRI1WD3_MSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD3_MSK instead.
 * 74F0, Comparator Mask Register
 */
#define MCDS_SRISRI1WD3_MSK (MCDS_SRI_SRI1WD3_MSK)

/** Alias for MCDS_SRI_SRI1WD3_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD3_RNG instead.
 * 74E8, Comparator Range Register
 */
#define MCDS_SRISRI1WD3_RNG (MCDS_SRI_SRI1WD3_RNG)

/** Alias for MCDS_SRI_SRI1WD3_SGN.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI1WD3_SGN instead.
 * 74FC, Comparator Sign Register
 */
#define MCDS_SRISRI1WD3_SGN (MCDS_SRI_SRI1WD3_SGN)

/** Alias for MCDS_SRI_SRI2AC0_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2AC0_BND instead.
 * 7700, Comparator Bound Register
 */
#define MCDS_SRISRI2AC0_BND (MCDS_SRI_SRI2AC0_BND)

/** Alias for MCDS_SRI_SRI2AC0_MSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2AC0_MSK instead.
 * 7708, Comparator Mask Register
 */
#define MCDS_SRISRI2AC0_MSK (MCDS_SRI_SRI2AC0_MSK)

/** Alias for MCDS_SRI_SRI2AC0_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2AC0_RNG instead.
 * 7704, Comparator Range Register
 */
#define MCDS_SRISRI2AC0_RNG (MCDS_SRI_SRI2AC0_RNG)

/** Alias for MCDS_SRI_SRI2AC1_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2AC1_BND instead.
 * 7710, Comparator Bound Register
 */
#define MCDS_SRISRI2AC1_BND (MCDS_SRI_SRI2AC1_BND)

/** Alias for MCDS_SRI_SRI2AC1_MSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2AC1_MSK instead.
 * 7718, Comparator Mask Register
 */
#define MCDS_SRISRI2AC1_MSK (MCDS_SRI_SRI2AC1_MSK)

/** Alias for MCDS_SRI_SRI2AC1_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2AC1_RNG instead.
 * 7714, Comparator Range Register
 */
#define MCDS_SRISRI2AC1_RNG (MCDS_SRI_SRI2AC1_RNG)

/** Alias for MCDS_SRI_SRI2AC2_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2AC2_BND instead.
 * 7720, Comparator Bound Register
 */
#define MCDS_SRISRI2AC2_BND (MCDS_SRI_SRI2AC2_BND)

/** Alias for MCDS_SRI_SRI2AC2_MSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2AC2_MSK instead.
 * 7728, Comparator Mask Register
 */
#define MCDS_SRISRI2AC2_MSK (MCDS_SRI_SRI2AC2_MSK)

/** Alias for MCDS_SRI_SRI2AC2_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2AC2_RNG instead.
 * 7724, Comparator Range Register
 */
#define MCDS_SRISRI2AC2_RNG (MCDS_SRI_SRI2AC2_RNG)

/** Alias for MCDS_SRI_SRI2AC3_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2AC3_BND instead.
 * 7730, Comparator Bound Register
 */
#define MCDS_SRISRI2AC3_BND (MCDS_SRI_SRI2AC3_BND)

/** Alias for MCDS_SRI_SRI2AC3_MSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2AC3_MSK instead.
 * 7738, Comparator Mask Register
 */
#define MCDS_SRISRI2AC3_MSK (MCDS_SRI_SRI2AC3_MSK)

/** Alias for MCDS_SRI_SRI2AC3_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2AC3_RNG instead.
 * 7734, Comparator Range Register
 */
#define MCDS_SRISRI2AC3_RNG (MCDS_SRI_SRI2AC3_RNG)

/** Alias for MCDS_SRI_SRI2BAL0_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2BAL0_BND instead.
 * 7310, Lookup Table Base Register
 */
#define MCDS_SRISRI2BAL0_BND (MCDS_SRI_SRI2BAL0_BND)

/** Alias for MCDS_SRI_SRI2BAL0_MAP.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2BAL0_MAP instead.
 * 7318, Lookup Table Mapping Register
 */
#define MCDS_SRISRI2BAL0_MAP (MCDS_SRI_SRI2BAL0_MAP)

/** Alias for MCDS_SRI_SRI2BAL0_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2BAL0_RNG instead.
 * 7314, Lookup Table Range Register
 */
#define MCDS_SRISRI2BAL0_RNG (MCDS_SRI_SRI2BAL0_RNG)

/** Alias for MCDS_SRI_SRI2BAL1_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2BAL1_BND instead.
 * 7320, Lookup Table Base Register
 */
#define MCDS_SRISRI2BAL1_BND (MCDS_SRI_SRI2BAL1_BND)

/** Alias for MCDS_SRI_SRI2BAL1_MAP.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2BAL1_MAP instead.
 * 7328, Lookup Table Mapping Register
 */
#define MCDS_SRISRI2BAL1_MAP (MCDS_SRI_SRI2BAL1_MAP)

/** Alias for MCDS_SRI_SRI2BAL1_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2BAL1_RNG instead.
 * 7324, Lookup Table Range Register
 */
#define MCDS_SRISRI2BAL1_RNG (MCDS_SRI_SRI2BAL1_RNG)

/** Alias for MCDS_SRI_SRI2BAL2_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2BAL2_BND instead.
 * 7330, Lookup Table Base Register
 */
#define MCDS_SRISRI2BAL2_BND (MCDS_SRI_SRI2BAL2_BND)

/** Alias for MCDS_SRI_SRI2BAL2_MAP.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2BAL2_MAP instead.
 * 7338, Lookup Table Mapping Register
 */
#define MCDS_SRISRI2BAL2_MAP (MCDS_SRI_SRI2BAL2_MAP)

/** Alias for MCDS_SRI_SRI2BAL2_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2BAL2_RNG instead.
 * 7334, Lookup Table Range Register
 */
#define MCDS_SRISRI2BAL2_RNG (MCDS_SRI_SRI2BAL2_RNG)

/** Alias for MCDS_SRI_SRI2BAL3_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2BAL3_BND instead.
 * 7340, Lookup Table Base Register
 */
#define MCDS_SRISRI2BAL3_BND (MCDS_SRI_SRI2BAL3_BND)

/** Alias for MCDS_SRI_SRI2BAL3_MAP.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2BAL3_MAP instead.
 * 7348, Lookup Table Mapping Register
 */
#define MCDS_SRISRI2BAL3_MAP (MCDS_SRI_SRI2BAL3_MAP)

/** Alias for MCDS_SRI_SRI2BAL3_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2BAL3_RNG instead.
 * 7344, Lookup Table Range Register
 */
#define MCDS_SRISRI2BAL3_RNG (MCDS_SRI_SRI2BAL3_RNG)

/** Alias for MCDS_SRI_SRI2BALLU_TA.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2BALLU_TA instead.
 * 7304, Lookup Table Address Register
 */
#define MCDS_SRISRI2BALLU_TA (MCDS_SRI_SRI2BALLU_TA)

/** Alias for MCDS_SRI_SRI2BALLU_TD.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2BALLU_TD instead.
 * 7300, Lookup Table Data Register
 */
#define MCDS_SRISRI2BALLU_TD (MCDS_SRI_SRI2BALLU_TD)

/** Alias for MCDS_SRI_SRI2EA0_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2EA0_BND instead.
 * 7600, Comparator Bound Register
 */
#define MCDS_SRISRI2EA0_BND (MCDS_SRI_SRI2EA0_BND)

/** Alias for MCDS_SRI_SRI2EA0_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2EA0_RNG instead.
 * 7604, Comparator Range Register
 */
#define MCDS_SRISRI2EA0_RNG (MCDS_SRI_SRI2EA0_RNG)

/** Alias for MCDS_SRI_SRI2EA1_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2EA1_BND instead.
 * 7610, Comparator Bound Register
 */
#define MCDS_SRISRI2EA1_BND (MCDS_SRI_SRI2EA1_BND)

/** Alias for MCDS_SRI_SRI2EA1_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2EA1_RNG instead.
 * 7614, Comparator Range Register
 */
#define MCDS_SRISRI2EA1_RNG (MCDS_SRI_SRI2EA1_RNG)

/** Alias for MCDS_SRI_SRI2EA2_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2EA2_BND instead.
 * 7620, Comparator Bound Register
 */
#define MCDS_SRISRI2EA2_BND (MCDS_SRI_SRI2EA2_BND)

/** Alias for MCDS_SRI_SRI2EA2_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2EA2_RNG instead.
 * 7624, Comparator Range Register
 */
#define MCDS_SRISRI2EA2_RNG (MCDS_SRI_SRI2EA2_RNG)

/** Alias for MCDS_SRI_SRI2EA3_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2EA3_BND instead.
 * 7630, Comparator Bound Register
 */
#define MCDS_SRISRI2EA3_BND (MCDS_SRI_SRI2EA3_BND)

/** Alias for MCDS_SRI_SRI2EA3_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2EA3_RNG instead.
 * 7634, Comparator Range Register
 */
#define MCDS_SRISRI2EA3_RNG (MCDS_SRI_SRI2EA3_RNG)

/** Alias for MCDS_SRI_SRI2WD0_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD0_BND instead.
 * 7680, Comparator Bound Register
 */
#define MCDS_SRISRI2WD0_BND (MCDS_SRI_SRI2WD0_BND)

/** Alias for MCDS_SRI_SRI2WD0_HBND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD0_HBND instead.
 * 7684, Comparator Bound Register
 */
#define MCDS_SRISRI2WD0_HBND (MCDS_SRI_SRI2WD0_HBND)

/** Alias for MCDS_SRI_SRI2WD0_HMSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD0_HMSK instead.
 * 7694, Comparator Mask Register
 */
#define MCDS_SRISRI2WD0_HMSK (MCDS_SRI_SRI2WD0_HMSK)

/** Alias for MCDS_SRI_SRI2WD0_HRNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD0_HRNG instead.
 * 768C, Comparator Range Register
 */
#define MCDS_SRISRI2WD0_HRNG (MCDS_SRI_SRI2WD0_HRNG)

/** Alias for MCDS_SRI_SRI2WD0_MSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD0_MSK instead.
 * 7690, Comparator Mask Register
 */
#define MCDS_SRISRI2WD0_MSK (MCDS_SRI_SRI2WD0_MSK)

/** Alias for MCDS_SRI_SRI2WD0_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD0_RNG instead.
 * 7688, Comparator Range Register
 */
#define MCDS_SRISRI2WD0_RNG (MCDS_SRI_SRI2WD0_RNG)

/** Alias for MCDS_SRI_SRI2WD0_SGN.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD0_SGN instead.
 * 769C, Comparator Sign Register
 */
#define MCDS_SRISRI2WD0_SGN (MCDS_SRI_SRI2WD0_SGN)

/** Alias for MCDS_SRI_SRI2WD1_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD1_BND instead.
 * 76A0, Comparator Bound Register
 */
#define MCDS_SRISRI2WD1_BND (MCDS_SRI_SRI2WD1_BND)

/** Alias for MCDS_SRI_SRI2WD1_HBND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD1_HBND instead.
 * 76A4, Comparator Bound Register
 */
#define MCDS_SRISRI2WD1_HBND (MCDS_SRI_SRI2WD1_HBND)

/** Alias for MCDS_SRI_SRI2WD1_HMSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD1_HMSK instead.
 * 76B4, Comparator Mask Register
 */
#define MCDS_SRISRI2WD1_HMSK (MCDS_SRI_SRI2WD1_HMSK)

/** Alias for MCDS_SRI_SRI2WD1_HRNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD1_HRNG instead.
 * 76AC, Comparator Range Register
 */
#define MCDS_SRISRI2WD1_HRNG (MCDS_SRI_SRI2WD1_HRNG)

/** Alias for MCDS_SRI_SRI2WD1_MSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD1_MSK instead.
 * 76B0, Comparator Mask Register
 */
#define MCDS_SRISRI2WD1_MSK (MCDS_SRI_SRI2WD1_MSK)

/** Alias for MCDS_SRI_SRI2WD1_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD1_RNG instead.
 * 76A8, Comparator Range Register
 */
#define MCDS_SRISRI2WD1_RNG (MCDS_SRI_SRI2WD1_RNG)

/** Alias for MCDS_SRI_SRI2WD1_SGN.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD1_SGN instead.
 * 76BC, Comparator Sign Register
 */
#define MCDS_SRISRI2WD1_SGN (MCDS_SRI_SRI2WD1_SGN)

/** Alias for MCDS_SRI_SRI2WD2_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD2_BND instead.
 * 76C0, Comparator Bound Register
 */
#define MCDS_SRISRI2WD2_BND (MCDS_SRI_SRI2WD2_BND)

/** Alias for MCDS_SRI_SRI2WD2_HBND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD2_HBND instead.
 * 76C4, Comparator Bound Register
 */
#define MCDS_SRISRI2WD2_HBND (MCDS_SRI_SRI2WD2_HBND)

/** Alias for MCDS_SRI_SRI2WD2_HMSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD2_HMSK instead.
 * 76D4, Comparator Mask Register
 */
#define MCDS_SRISRI2WD2_HMSK (MCDS_SRI_SRI2WD2_HMSK)

/** Alias for MCDS_SRI_SRI2WD2_HRNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD2_HRNG instead.
 * 76CC, Comparator Range Register
 */
#define MCDS_SRISRI2WD2_HRNG (MCDS_SRI_SRI2WD2_HRNG)

/** Alias for MCDS_SRI_SRI2WD2_MSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD2_MSK instead.
 * 76D0, Comparator Mask Register
 */
#define MCDS_SRISRI2WD2_MSK (MCDS_SRI_SRI2WD2_MSK)

/** Alias for MCDS_SRI_SRI2WD2_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD2_RNG instead.
 * 76C8, Comparator Range Register
 */
#define MCDS_SRISRI2WD2_RNG (MCDS_SRI_SRI2WD2_RNG)

/** Alias for MCDS_SRI_SRI2WD2_SGN.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD2_SGN instead.
 * 76DC, Comparator Sign Register
 */
#define MCDS_SRISRI2WD2_SGN (MCDS_SRI_SRI2WD2_SGN)

/** Alias for MCDS_SRI_SRI2WD3_BND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD3_BND instead.
 * 76E0, Comparator Bound Register
 */
#define MCDS_SRISRI2WD3_BND (MCDS_SRI_SRI2WD3_BND)

/** Alias for MCDS_SRI_SRI2WD3_HBND.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD3_HBND instead.
 * 76E4, Comparator Bound Register
 */
#define MCDS_SRISRI2WD3_HBND (MCDS_SRI_SRI2WD3_HBND)

/** Alias for MCDS_SRI_SRI2WD3_HMSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD3_HMSK instead.
 * 76F4, Comparator Mask Register
 */
#define MCDS_SRISRI2WD3_HMSK (MCDS_SRI_SRI2WD3_HMSK)

/** Alias for MCDS_SRI_SRI2WD3_HRNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD3_HRNG instead.
 * 76EC, Comparator Range Register
 */
#define MCDS_SRISRI2WD3_HRNG (MCDS_SRI_SRI2WD3_HRNG)

/** Alias for MCDS_SRI_SRI2WD3_MSK.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD3_MSK instead.
 * 76F0, Comparator Mask Register
 */
#define MCDS_SRISRI2WD3_MSK (MCDS_SRI_SRI2WD3_MSK)

/** Alias for MCDS_SRI_SRI2WD3_RNG.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD3_RNG instead.
 * 76E8, Comparator Range Register
 */
#define MCDS_SRISRI2WD3_RNG (MCDS_SRI_SRI2WD3_RNG)

/** Alias for MCDS_SRI_SRI2WD3_SGN.
 *  Note that this definition is obsolete, use MCDS_SRI_SRI2WD3_SGN instead.
 * 76FC, Comparator Sign Register
 */
#define MCDS_SRISRI2WD3_SGN (MCDS_SRI_SRI2WD3_SGN)

/** Alias for MCDS_SRI_SRIACT0.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT0 instead.
 * 7880, Action Definition Register
 */
#define MCDS_SRISRIACT0 (MCDS_SRI_SRIACT0)

/** Alias for MCDS_SRI_SRIACT1.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT1 instead.
 * 7884, Action Definition Register
 */
#define MCDS_SRISRIACT1 (MCDS_SRI_SRIACT1)

/** Alias for MCDS_SRI_SRIACT10.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT10 instead.
 * 78A8, Action Definition Register
 */
#define MCDS_SRISRIACT10 (MCDS_SRI_SRIACT10)

/** Alias for MCDS_SRI_SRIACT11.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT11 instead.
 * 78AC, Action Definition Register
 */
#define MCDS_SRISRIACT11 (MCDS_SRI_SRIACT11)

/** Alias for MCDS_SRI_SRIACT12.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT12 instead.
 * 78B0, Action Definition Register
 */
#define MCDS_SRISRIACT12 (MCDS_SRI_SRIACT12)

/** Alias for MCDS_SRI_SRIACT13.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT13 instead.
 * 78B4, Action Definition Register
 */
#define MCDS_SRISRIACT13 (MCDS_SRI_SRIACT13)

/** Alias for MCDS_SRI_SRIACT14.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT14 instead.
 * 78B8, Action Definition Register
 */
#define MCDS_SRISRIACT14 (MCDS_SRI_SRIACT14)

/** Alias for MCDS_SRI_SRIACT15.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT15 instead.
 * 78BC, Action Definition Register
 */
#define MCDS_SRISRIACT15 (MCDS_SRI_SRIACT15)

/** Alias for MCDS_SRI_SRIACT16.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT16 instead.
 * 78C0, Action Definition Register
 */
#define MCDS_SRISRIACT16 (MCDS_SRI_SRIACT16)

/** Alias for MCDS_SRI_SRIACT17.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT17 instead.
 * 78C4, Action Definition Register
 */
#define MCDS_SRISRIACT17 (MCDS_SRI_SRIACT17)

/** Alias for MCDS_SRI_SRIACT18.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT18 instead.
 * 78C8, Action Definition Register
 */
#define MCDS_SRISRIACT18 (MCDS_SRI_SRIACT18)

/** Alias for MCDS_SRI_SRIACT19.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT19 instead.
 * 78CC, Action Definition Register
 */
#define MCDS_SRISRIACT19 (MCDS_SRI_SRIACT19)

/** Alias for MCDS_SRI_SRIACT2.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT2 instead.
 * 7888, Action Definition Register
 */
#define MCDS_SRISRIACT2 (MCDS_SRI_SRIACT2)

/** Alias for MCDS_SRI_SRIACT20.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT20 instead.
 * 78D0, Action Definition Register
 */
#define MCDS_SRISRIACT20 (MCDS_SRI_SRIACT20)

/** Alias for MCDS_SRI_SRIACT21.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT21 instead.
 * 78D4, Action Definition Register
 */
#define MCDS_SRISRIACT21 (MCDS_SRI_SRIACT21)

/** Alias for MCDS_SRI_SRIACT22.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT22 instead.
 * 78D8, Action Definition Register
 */
#define MCDS_SRISRIACT22 (MCDS_SRI_SRIACT22)

/** Alias for MCDS_SRI_SRIACT23.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT23 instead.
 * 78DC, Action Definition Register
 */
#define MCDS_SRISRIACT23 (MCDS_SRI_SRIACT23)

/** Alias for MCDS_SRI_SRIACT24.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT24 instead.
 * 78E0, Action Definition Register
 */
#define MCDS_SRISRIACT24 (MCDS_SRI_SRIACT24)

/** Alias for MCDS_SRI_SRIACT25.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT25 instead.
 * 78E4, Action Definition Register
 */
#define MCDS_SRISRIACT25 (MCDS_SRI_SRIACT25)

/** Alias for MCDS_SRI_SRIACT26.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT26 instead.
 * 78E8, Action Definition Register
 */
#define MCDS_SRISRIACT26 (MCDS_SRI_SRIACT26)

/** Alias for MCDS_SRI_SRIACT3.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT3 instead.
 * 788C, Action Definition Register
 */
#define MCDS_SRISRIACT3 (MCDS_SRI_SRIACT3)

/** Alias for MCDS_SRI_SRIACT4.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT4 instead.
 * 7890, Action Definition Register
 */
#define MCDS_SRISRIACT4 (MCDS_SRI_SRIACT4)

/** Alias for MCDS_SRI_SRIACT5.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT5 instead.
 * 7894, Action Definition Register
 */
#define MCDS_SRISRIACT5 (MCDS_SRI_SRIACT5)

/** Alias for MCDS_SRI_SRIACT6.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT6 instead.
 * 7898, Action Definition Register
 */
#define MCDS_SRISRIACT6 (MCDS_SRI_SRIACT6)

/** Alias for MCDS_SRI_SRIACT7.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT7 instead.
 * 789C, Action Definition Register
 */
#define MCDS_SRISRIACT7 (MCDS_SRI_SRIACT7)

/** Alias for MCDS_SRI_SRIACT8.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT8 instead.
 * 78A0, Action Definition Register
 */
#define MCDS_SRISRIACT8 (MCDS_SRI_SRIACT8)

/** Alias for MCDS_SRI_SRIACT9.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIACT9 instead.
 * 78A4, Action Definition Register
 */
#define MCDS_SRISRIACT9 (MCDS_SRI_SRIACT9)

/** Alias for MCDS_SRI_SRIDCSTS.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIDCSTS instead.
 * 7000, Debug Status Register
 */
#define MCDS_SRISRIDCSTS (MCDS_SRI_SRIDCSTS)

/** Alias for MCDS_SRI_SRIEVT0.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIEVT0 instead.
 * 7800, Event Definition Register
 */
#define MCDS_SRISRIEVT0 (MCDS_SRI_SRIEVT0)

/** Alias for MCDS_SRI_SRIEVT1.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIEVT1 instead.
 * 7804, Event Definition Register
 */
#define MCDS_SRISRIEVT1 (MCDS_SRI_SRIEVT1)

/** Alias for MCDS_SRI_SRIEVT10.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIEVT10 instead.
 * 7828, Event Definition Register
 */
#define MCDS_SRISRIEVT10 (MCDS_SRI_SRIEVT10)

/** Alias for MCDS_SRI_SRIEVT11.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIEVT11 instead.
 * 782C, Event Definition Register
 */
#define MCDS_SRISRIEVT11 (MCDS_SRI_SRIEVT11)

/** Alias for MCDS_SRI_SRIEVT12.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIEVT12 instead.
 * 7830, Event Definition Register
 */
#define MCDS_SRISRIEVT12 (MCDS_SRI_SRIEVT12)

/** Alias for MCDS_SRI_SRIEVT13.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIEVT13 instead.
 * 7834, Event Definition Register
 */
#define MCDS_SRISRIEVT13 (MCDS_SRI_SRIEVT13)

/** Alias for MCDS_SRI_SRIEVT14.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIEVT14 instead.
 * 7838, Event Definition Register
 */
#define MCDS_SRISRIEVT14 (MCDS_SRI_SRIEVT14)

/** Alias for MCDS_SRI_SRIEVT15.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIEVT15 instead.
 * 783C, Event Definition Register
 */
#define MCDS_SRISRIEVT15 (MCDS_SRI_SRIEVT15)

/** Alias for MCDS_SRI_SRIEVT2.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIEVT2 instead.
 * 7808, Event Definition Register
 */
#define MCDS_SRISRIEVT2 (MCDS_SRI_SRIEVT2)

/** Alias for MCDS_SRI_SRIEVT3.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIEVT3 instead.
 * 780C, Event Definition Register
 */
#define MCDS_SRISRIEVT3 (MCDS_SRI_SRIEVT3)

/** Alias for MCDS_SRI_SRIEVT4.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIEVT4 instead.
 * 7810, Event Definition Register
 */
#define MCDS_SRISRIEVT4 (MCDS_SRI_SRIEVT4)

/** Alias for MCDS_SRI_SRIEVT5.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIEVT5 instead.
 * 7814, Event Definition Register
 */
#define MCDS_SRISRIEVT5 (MCDS_SRI_SRIEVT5)

/** Alias for MCDS_SRI_SRIEVT6.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIEVT6 instead.
 * 7818, Event Definition Register
 */
#define MCDS_SRISRIEVT6 (MCDS_SRI_SRIEVT6)

/** Alias for MCDS_SRI_SRIEVT7.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIEVT7 instead.
 * 781C, Event Definition Register
 */
#define MCDS_SRISRIEVT7 (MCDS_SRI_SRIEVT7)

/** Alias for MCDS_SRI_SRIEVT8.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIEVT8 instead.
 * 7820, Event Definition Register
 */
#define MCDS_SRISRIEVT8 (MCDS_SRI_SRIEVT8)

/** Alias for MCDS_SRI_SRIEVT9.
 *  Note that this definition is obsolete, use MCDS_SRI_SRIEVT9 instead.
 * 7824, Event Definition Register
 */
#define MCDS_SRISRIEVT9 (MCDS_SRI_SRIEVT9)

/** 2880, Action Definition Register */
#define MCDS_TCX_ACT0 ((*(volatile Ifx_MCDS_ACT*)0xF00EA880u)) /* lint --e(923)*/

/** 2884, Action Definition Register */
#define MCDS_TCX_ACT1 ((*(volatile Ifx_MCDS_ACT*)0xF00EA884u)) /* lint --e(923)*/

/** 28A8, Action Definition Register */
#define MCDS_TCX_ACT10 ((*(volatile Ifx_MCDS_ACT*)0xF00EA8A8u)) /* lint --e(923)*/

/** 28AC, Action Definition Register */
#define MCDS_TCX_ACT11 ((*(volatile Ifx_MCDS_ACT*)0xF00EA8ACu)) /* lint --e(923)*/

/** 28B0, Action Definition Register */
#define MCDS_TCX_ACT12 ((*(volatile Ifx_MCDS_ACT*)0xF00EA8B0u)) /* lint --e(923)*/

/** 28B4, Action Definition Register */
#define MCDS_TCX_ACT13 ((*(volatile Ifx_MCDS_ACT*)0xF00EA8B4u)) /* lint --e(923)*/

/** 28B8, Action Definition Register */
#define MCDS_TCX_ACT14 ((*(volatile Ifx_MCDS_ACT*)0xF00EA8B8u)) /* lint --e(923)*/

/** 28BC, Action Definition Register */
#define MCDS_TCX_ACT15 ((*(volatile Ifx_MCDS_ACT*)0xF00EA8BCu)) /* lint --e(923)*/

/** 28C0, Action Definition Register */
#define MCDS_TCX_ACT16 ((*(volatile Ifx_MCDS_ACT*)0xF00EA8C0u)) /* lint --e(923)*/

/** 28C4, Action Definition Register */
#define MCDS_TCX_ACT17 ((*(volatile Ifx_MCDS_ACT*)0xF00EA8C4u)) /* lint --e(923)*/

/** 28C8, Action Definition Register */
#define MCDS_TCX_ACT18 ((*(volatile Ifx_MCDS_ACT*)0xF00EA8C8u)) /* lint --e(923)*/

/** 28CC, Action Definition Register */
#define MCDS_TCX_ACT19 ((*(volatile Ifx_MCDS_ACT*)0xF00EA8CCu)) /* lint --e(923)*/

/** 2888, Action Definition Register */
#define MCDS_TCX_ACT2 ((*(volatile Ifx_MCDS_ACT*)0xF00EA888u)) /* lint --e(923)*/

/** 28D0, Action Definition Register */
#define MCDS_TCX_ACT20 ((*(volatile Ifx_MCDS_ACT*)0xF00EA8D0u)) /* lint --e(923)*/

/** 28D4, Action Definition Register */
#define MCDS_TCX_ACT21 ((*(volatile Ifx_MCDS_ACT*)0xF00EA8D4u)) /* lint --e(923)*/

/** 28D8, Action Definition Register */
#define MCDS_TCX_ACT22 ((*(volatile Ifx_MCDS_ACT*)0xF00EA8D8u)) /* lint --e(923)*/

/** 288C, Action Definition Register */
#define MCDS_TCX_ACT3 ((*(volatile Ifx_MCDS_ACT*)0xF00EA88Cu)) /* lint --e(923)*/

/** 2890, Action Definition Register */
#define MCDS_TCX_ACT4 ((*(volatile Ifx_MCDS_ACT*)0xF00EA890u)) /* lint --e(923)*/

/** 2894, Action Definition Register */
#define MCDS_TCX_ACT5 ((*(volatile Ifx_MCDS_ACT*)0xF00EA894u)) /* lint --e(923)*/

/** 2898, Action Definition Register */
#define MCDS_TCX_ACT6 ((*(volatile Ifx_MCDS_ACT*)0xF00EA898u)) /* lint --e(923)*/

/** 289C, Action Definition Register */
#define MCDS_TCX_ACT7 ((*(volatile Ifx_MCDS_ACT*)0xF00EA89Cu)) /* lint --e(923)*/

/** 28A0, Action Definition Register */
#define MCDS_TCX_ACT8 ((*(volatile Ifx_MCDS_ACT*)0xF00EA8A0u)) /* lint --e(923)*/

/** 28A4, Action Definition Register */
#define MCDS_TCX_ACT9 ((*(volatile Ifx_MCDS_ACT*)0xF00EA8A4u)) /* lint --e(923)*/

/** 2004, Current Process ID */
#define MCDS_TCX_CID ((*(volatile Ifx_MCDS_TCX_CID*)0xF00EA004u)) /* lint --e(923)*/

/** 2008, Current Instruction Pointer */
#define MCDS_TCX_CIP ((*(volatile Ifx_MCDS_TCX_CIP*)0xF00EA008u)) /* lint --e(923)*/

/** 2000, Debug Status Register */
#define MCDS_TCX_DCSTS ((*(volatile Ifx_MCDS_TCX_DCSTS*)0xF00EA000u)) /* lint --e(923)*/

/** 2400, Comparator Bound Register */
#define MCDS_TCX_EA0_BND ((*(volatile Ifx_MCDS_TCXEA_BND*)0xF00EA400u)) /* lint --e(923)*/

/** 2404, Comparator Range Register */
#define MCDS_TCX_EA0_RNG ((*(volatile Ifx_MCDS_TCXEA_RNG*)0xF00EA404u)) /* lint --e(923)*/

/** 2410, Comparator Bound Register */
#define MCDS_TCX_EA1_BND ((*(volatile Ifx_MCDS_TCXEA_BND*)0xF00EA410u)) /* lint --e(923)*/

/** 2414, Comparator Range Register */
#define MCDS_TCX_EA1_RNG ((*(volatile Ifx_MCDS_TCXEA_RNG*)0xF00EA414u)) /* lint --e(923)*/

/** 2420, Comparator Bound Register */
#define MCDS_TCX_EA2_BND ((*(volatile Ifx_MCDS_TCXEA_BND*)0xF00EA420u)) /* lint --e(923)*/

/** 2424, Comparator Range Register */
#define MCDS_TCX_EA2_RNG ((*(volatile Ifx_MCDS_TCXEA_RNG*)0xF00EA424u)) /* lint --e(923)*/

/** 2430, Comparator Bound Register */
#define MCDS_TCX_EA3_BND ((*(volatile Ifx_MCDS_TCXEA_BND*)0xF00EA430u)) /* lint --e(923)*/

/** 2434, Comparator Range Register */
#define MCDS_TCX_EA3_RNG ((*(volatile Ifx_MCDS_TCXEA_RNG*)0xF00EA434u)) /* lint --e(923)*/

/** 2440, Comparator Bound Register */
#define MCDS_TCX_EA4_BND ((*(volatile Ifx_MCDS_TCXEA_BND*)0xF00EA440u)) /* lint --e(923)*/

/** 2444, Comparator Range Register */
#define MCDS_TCX_EA4_RNG ((*(volatile Ifx_MCDS_TCXEA_RNG*)0xF00EA444u)) /* lint --e(923)*/

/** 2450, Comparator Bound Register */
#define MCDS_TCX_EA5_BND ((*(volatile Ifx_MCDS_TCXEA_BND*)0xF00EA450u)) /* lint --e(923)*/

/** 2454, Comparator Range Register */
#define MCDS_TCX_EA5_RNG ((*(volatile Ifx_MCDS_TCXEA_RNG*)0xF00EA454u)) /* lint --e(923)*/

/** 2460, Comparator Bound Register */
#define MCDS_TCX_EA6_BND ((*(volatile Ifx_MCDS_TCXEA_BND*)0xF00EA460u)) /* lint --e(923)*/

/** 2464, Comparator Range Register */
#define MCDS_TCX_EA6_RNG ((*(volatile Ifx_MCDS_TCXEA_RNG*)0xF00EA464u)) /* lint --e(923)*/

/** 2470, Comparator Bound Register */
#define MCDS_TCX_EA7_BND ((*(volatile Ifx_MCDS_TCXEA_BND*)0xF00EA470u)) /* lint --e(923)*/

/** 2474, Comparator Range Register */
#define MCDS_TCX_EA7_RNG ((*(volatile Ifx_MCDS_TCXEA_RNG*)0xF00EA474u)) /* lint --e(923)*/

/** 2800, Event Definition Register */
#define MCDS_TCX_EVT0 ((*(volatile Ifx_MCDS_EVT*)0xF00EA800u)) /* lint --e(923)*/

/** 2804, Event Definition Register */
#define MCDS_TCX_EVT1 ((*(volatile Ifx_MCDS_EVT*)0xF00EA804u)) /* lint --e(923)*/

/** 2828, Event Definition Register */
#define MCDS_TCX_EVT10 ((*(volatile Ifx_MCDS_EVT*)0xF00EA828u)) /* lint --e(923)*/

/** 282C, Event Definition Register */
#define MCDS_TCX_EVT11 ((*(volatile Ifx_MCDS_EVT*)0xF00EA82Cu)) /* lint --e(923)*/

/** 2830, Event Definition Register */
#define MCDS_TCX_EVT12 ((*(volatile Ifx_MCDS_EVT*)0xF00EA830u)) /* lint --e(923)*/

/** 2834, Event Definition Register */
#define MCDS_TCX_EVT13 ((*(volatile Ifx_MCDS_EVT*)0xF00EA834u)) /* lint --e(923)*/

/** 2838, Event Definition Register */
#define MCDS_TCX_EVT14 ((*(volatile Ifx_MCDS_EVT*)0xF00EA838u)) /* lint --e(923)*/

/** 283C, Event Definition Register */
#define MCDS_TCX_EVT15 ((*(volatile Ifx_MCDS_EVT*)0xF00EA83Cu)) /* lint --e(923)*/

/** 2808, Event Definition Register */
#define MCDS_TCX_EVT2 ((*(volatile Ifx_MCDS_EVT*)0xF00EA808u)) /* lint --e(923)*/

/** 280C, Event Definition Register */
#define MCDS_TCX_EVT3 ((*(volatile Ifx_MCDS_EVT*)0xF00EA80Cu)) /* lint --e(923)*/

/** 2810, Event Definition Register */
#define MCDS_TCX_EVT4 ((*(volatile Ifx_MCDS_EVT*)0xF00EA810u)) /* lint --e(923)*/

/** 2814, Event Definition Register */
#define MCDS_TCX_EVT5 ((*(volatile Ifx_MCDS_EVT*)0xF00EA814u)) /* lint --e(923)*/

/** 2818, Event Definition Register */
#define MCDS_TCX_EVT6 ((*(volatile Ifx_MCDS_EVT*)0xF00EA818u)) /* lint --e(923)*/

/** 281C, Event Definition Register */
#define MCDS_TCX_EVT7 ((*(volatile Ifx_MCDS_EVT*)0xF00EA81Cu)) /* lint --e(923)*/

/** 2820, Event Definition Register */
#define MCDS_TCX_EVT8 ((*(volatile Ifx_MCDS_EVT*)0xF00EA820u)) /* lint --e(923)*/

/** 2824, Event Definition Register */
#define MCDS_TCX_EVT9 ((*(volatile Ifx_MCDS_EVT*)0xF00EA824u)) /* lint --e(923)*/

/** 2C00, Comparator Bound Register */
#define MCDS_TCX_ID0_BND ((*(volatile Ifx_MCDS_TCXID_BND*)0xF00EAC00u)) /* lint --e(923)*/

/** 2C08, Comparator Mask Register */
#define MCDS_TCX_ID0_MSK ((*(volatile Ifx_MCDS_TCXID_MSK*)0xF00EAC08u)) /* lint --e(923)*/

/** 2C04, Comparator Range Register */
#define MCDS_TCX_ID0_RNG ((*(volatile Ifx_MCDS_TCXID_RNG*)0xF00EAC04u)) /* lint --e(923)*/

/** 2C0C, Comparator Sign Register */
#define MCDS_TCX_ID0_SGN ((*(volatile Ifx_MCDS_TCXID_SGN*)0xF00EAC0Cu)) /* lint --e(923)*/

/** 2C10, Comparator Bound Register */
#define MCDS_TCX_ID1_BND ((*(volatile Ifx_MCDS_TCXID_BND*)0xF00EAC10u)) /* lint --e(923)*/

/** 2C18, Comparator Mask Register */
#define MCDS_TCX_ID1_MSK ((*(volatile Ifx_MCDS_TCXID_MSK*)0xF00EAC18u)) /* lint --e(923)*/

/** 2C14, Comparator Range Register */
#define MCDS_TCX_ID1_RNG ((*(volatile Ifx_MCDS_TCXID_RNG*)0xF00EAC14u)) /* lint --e(923)*/

/** 2C1C, Comparator Sign Register */
#define MCDS_TCX_ID1_SGN ((*(volatile Ifx_MCDS_TCXID_SGN*)0xF00EAC1Cu)) /* lint --e(923)*/

/** 3000, Comparator Bound Register */
#define MCDS_TCX_IP0_BND ((*(volatile Ifx_MCDS_TCXIP_BND*)0xF00EB000u)) /* lint --e(923)*/

/** 3004, Comparator Range Register */
#define MCDS_TCX_IP0_RNG ((*(volatile Ifx_MCDS_TCXIP_RNG*)0xF00EB004u)) /* lint --e(923)*/

/** 3010, Comparator Bound Register */
#define MCDS_TCX_IP1_BND ((*(volatile Ifx_MCDS_TCXIP_BND*)0xF00EB010u)) /* lint --e(923)*/

/** 3014, Comparator Range Register */
#define MCDS_TCX_IP1_RNG ((*(volatile Ifx_MCDS_TCXIP_RNG*)0xF00EB014u)) /* lint --e(923)*/

/** 3020, Comparator Bound Register */
#define MCDS_TCX_IP2_BND ((*(volatile Ifx_MCDS_TCXIP_BND*)0xF00EB020u)) /* lint --e(923)*/

/** 3024, Comparator Range Register */
#define MCDS_TCX_IP2_RNG ((*(volatile Ifx_MCDS_TCXIP_RNG*)0xF00EB024u)) /* lint --e(923)*/

/** 3030, Comparator Bound Register */
#define MCDS_TCX_IP3_BND ((*(volatile Ifx_MCDS_TCXIP_BND*)0xF00EB030u)) /* lint --e(923)*/

/** 3034, Comparator Range Register */
#define MCDS_TCX_IP3_RNG ((*(volatile Ifx_MCDS_TCXIP_RNG*)0xF00EB034u)) /* lint --e(923)*/

/** 3040, Comparator Bound Register */
#define MCDS_TCX_IP4_BND ((*(volatile Ifx_MCDS_TCXIP_BND*)0xF00EB040u)) /* lint --e(923)*/

/** 3044, Comparator Range Register */
#define MCDS_TCX_IP4_RNG ((*(volatile Ifx_MCDS_TCXIP_RNG*)0xF00EB044u)) /* lint --e(923)*/

/** 3050, Comparator Bound Register */
#define MCDS_TCX_IP5_BND ((*(volatile Ifx_MCDS_TCXIP_BND*)0xF00EB050u)) /* lint --e(923)*/

/** 3054, Comparator Range Register */
#define MCDS_TCX_IP5_RNG ((*(volatile Ifx_MCDS_TCXIP_RNG*)0xF00EB054u)) /* lint --e(923)*/

/** 2210, Lookup Table Base Register */
#define MCDS_TCX_PAL0_BND ((*(volatile Ifx_MCDS_TCXPAL_BND*)0xF00EA210u)) /* lint --e(923)*/

/** 2218, Lookup Table Mapping Register */
#define MCDS_TCX_PAL0_MAP ((*(volatile Ifx_MCDS_TCXPAL_MAP*)0xF00EA218u)) /* lint --e(923)*/

/** 2214, Lookup Table Range Register */
#define MCDS_TCX_PAL0_RNG ((*(volatile Ifx_MCDS_TCXPAL_RNG*)0xF00EA214u)) /* lint --e(923)*/

/** 2220, Lookup Table Base Register */
#define MCDS_TCX_PAL1_BND ((*(volatile Ifx_MCDS_TCXPAL_BND*)0xF00EA220u)) /* lint --e(923)*/

/** 2228, Lookup Table Mapping Register */
#define MCDS_TCX_PAL1_MAP ((*(volatile Ifx_MCDS_TCXPAL_MAP*)0xF00EA228u)) /* lint --e(923)*/

/** 2224, Lookup Table Range Register */
#define MCDS_TCX_PAL1_RNG ((*(volatile Ifx_MCDS_TCXPAL_RNG*)0xF00EA224u)) /* lint --e(923)*/

/** 2230, Lookup Table Base Register */
#define MCDS_TCX_PAL2_BND ((*(volatile Ifx_MCDS_TCXPAL_BND*)0xF00EA230u)) /* lint --e(923)*/

/** 2238, Lookup Table Mapping Register */
#define MCDS_TCX_PAL2_MAP ((*(volatile Ifx_MCDS_TCXPAL_MAP*)0xF00EA238u)) /* lint --e(923)*/

/** 2234, Lookup Table Range Register */
#define MCDS_TCX_PAL2_RNG ((*(volatile Ifx_MCDS_TCXPAL_RNG*)0xF00EA234u)) /* lint --e(923)*/

/** 2240, Lookup Table Base Register */
#define MCDS_TCX_PAL3_BND ((*(volatile Ifx_MCDS_TCXPAL_BND*)0xF00EA240u)) /* lint --e(923)*/

/** 2248, Lookup Table Mapping Register */
#define MCDS_TCX_PAL3_MAP ((*(volatile Ifx_MCDS_TCXPAL_MAP*)0xF00EA248u)) /* lint --e(923)*/

/** 2244, Lookup Table Range Register */
#define MCDS_TCX_PAL3_RNG ((*(volatile Ifx_MCDS_TCXPAL_RNG*)0xF00EA244u)) /* lint --e(923)*/

/** 2204, Lookup Table Address Register */
#define MCDS_TCX_PALLU_TA ((*(volatile Ifx_MCDS_LOKUP_TA*)0xF00EA204u)) /* lint --e(923)*/

/** 2200, Lookup Table Data Register */
#define MCDS_TCX_PALLU_TD ((*(volatile Ifx_MCDS_LOKUP_TD*)0xF00EA200u)) /* lint --e(923)*/

/** 2480, Comparator Bound Register */
#define MCDS_TCX_WD0_BND ((*(volatile Ifx_MCDS_TCXWD_BND*)0xF00EA480u)) /* lint --e(923)*/

/** 2484, Comparator Bound Register */
#define MCDS_TCX_WD0_HBND ((*(volatile Ifx_MCDS_TCXWD_HBND*)0xF00EA484u)) /* lint --e(923)*/

/** 2494, Comparator Mask Register */
#define MCDS_TCX_WD0_HMSK ((*(volatile Ifx_MCDS_TCXWD_HMSK*)0xF00EA494u)) /* lint --e(923)*/

/** 248C, Comparator Range Register */
#define MCDS_TCX_WD0_HRNG ((*(volatile Ifx_MCDS_TCXWD_HRNG*)0xF00EA48Cu)) /* lint --e(923)*/

/** 2490, Comparator Mask Register */
#define MCDS_TCX_WD0_MSK ((*(volatile Ifx_MCDS_TCXWD_MSK*)0xF00EA490u)) /* lint --e(923)*/

/** 2488, Comparator Range Register */
#define MCDS_TCX_WD0_RNG ((*(volatile Ifx_MCDS_TCXWD_RNG*)0xF00EA488u)) /* lint --e(923)*/

/** 249C, Comparator Sign Register */
#define MCDS_TCX_WD0_SGN ((*(volatile Ifx_MCDS_TCXWD_SGN*)0xF00EA49Cu)) /* lint --e(923)*/

/** 24A0, Comparator Bound Register */
#define MCDS_TCX_WD1_BND ((*(volatile Ifx_MCDS_TCXWD_BND*)0xF00EA4A0u)) /* lint --e(923)*/

/** 24A4, Comparator Bound Register */
#define MCDS_TCX_WD1_HBND ((*(volatile Ifx_MCDS_TCXWD_HBND*)0xF00EA4A4u)) /* lint --e(923)*/

/** 24B4, Comparator Mask Register */
#define MCDS_TCX_WD1_HMSK ((*(volatile Ifx_MCDS_TCXWD_HMSK*)0xF00EA4B4u)) /* lint --e(923)*/

/** 24AC, Comparator Range Register */
#define MCDS_TCX_WD1_HRNG ((*(volatile Ifx_MCDS_TCXWD_HRNG*)0xF00EA4ACu)) /* lint --e(923)*/

/** 24B0, Comparator Mask Register */
#define MCDS_TCX_WD1_MSK ((*(volatile Ifx_MCDS_TCXWD_MSK*)0xF00EA4B0u)) /* lint --e(923)*/

/** 24A8, Comparator Range Register */
#define MCDS_TCX_WD1_RNG ((*(volatile Ifx_MCDS_TCXWD_RNG*)0xF00EA4A8u)) /* lint --e(923)*/

/** 24BC, Comparator Sign Register */
#define MCDS_TCX_WD1_SGN ((*(volatile Ifx_MCDS_TCXWD_SGN*)0xF00EA4BCu)) /* lint --e(923)*/

/** 24C0, Comparator Bound Register */
#define MCDS_TCX_WD2_BND ((*(volatile Ifx_MCDS_TCXWD_BND*)0xF00EA4C0u)) /* lint --e(923)*/

/** 24C4, Comparator Bound Register */
#define MCDS_TCX_WD2_HBND ((*(volatile Ifx_MCDS_TCXWD_HBND*)0xF00EA4C4u)) /* lint --e(923)*/

/** 24D4, Comparator Mask Register */
#define MCDS_TCX_WD2_HMSK ((*(volatile Ifx_MCDS_TCXWD_HMSK*)0xF00EA4D4u)) /* lint --e(923)*/

/** 24CC, Comparator Range Register */
#define MCDS_TCX_WD2_HRNG ((*(volatile Ifx_MCDS_TCXWD_HRNG*)0xF00EA4CCu)) /* lint --e(923)*/

/** 24D0, Comparator Mask Register */
#define MCDS_TCX_WD2_MSK ((*(volatile Ifx_MCDS_TCXWD_MSK*)0xF00EA4D0u)) /* lint --e(923)*/

/** 24C8, Comparator Range Register */
#define MCDS_TCX_WD2_RNG ((*(volatile Ifx_MCDS_TCXWD_RNG*)0xF00EA4C8u)) /* lint --e(923)*/

/** 24DC, Comparator Sign Register */
#define MCDS_TCX_WD2_SGN ((*(volatile Ifx_MCDS_TCXWD_SGN*)0xF00EA4DCu)) /* lint --e(923)*/

/** 24E0, Comparator Bound Register */
#define MCDS_TCX_WD3_BND ((*(volatile Ifx_MCDS_TCXWD_BND*)0xF00EA4E0u)) /* lint --e(923)*/

/** 24E4, Comparator Bound Register */
#define MCDS_TCX_WD3_HBND ((*(volatile Ifx_MCDS_TCXWD_HBND*)0xF00EA4E4u)) /* lint --e(923)*/

/** 24F4, Comparator Mask Register */
#define MCDS_TCX_WD3_HMSK ((*(volatile Ifx_MCDS_TCXWD_HMSK*)0xF00EA4F4u)) /* lint --e(923)*/

/** 24EC, Comparator Range Register */
#define MCDS_TCX_WD3_HRNG ((*(volatile Ifx_MCDS_TCXWD_HRNG*)0xF00EA4ECu)) /* lint --e(923)*/

/** 24F0, Comparator Mask Register */
#define MCDS_TCX_WD3_MSK ((*(volatile Ifx_MCDS_TCXWD_MSK*)0xF00EA4F0u)) /* lint --e(923)*/

/** 24E8, Comparator Range Register */
#define MCDS_TCX_WD3_RNG ((*(volatile Ifx_MCDS_TCXWD_RNG*)0xF00EA4E8u)) /* lint --e(923)*/

/** 24FC, Comparator Sign Register */
#define MCDS_TCX_WD3_SGN ((*(volatile Ifx_MCDS_TCXWD_SGN*)0xF00EA4FCu)) /* lint --e(923)*/

/** Alias for MCDS_TCX_ACT0.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT0 instead.
 * 2880, Action Definition Register
 */
#define MCDS_TCXACT0 (MCDS_TCX_ACT0)

/** Alias for MCDS_TCX_ACT1.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT1 instead.
 * 2884, Action Definition Register
 */
#define MCDS_TCXACT1 (MCDS_TCX_ACT1)

/** Alias for MCDS_TCX_ACT10.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT10 instead.
 * 28A8, Action Definition Register
 */
#define MCDS_TCXACT10 (MCDS_TCX_ACT10)

/** Alias for MCDS_TCX_ACT11.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT11 instead.
 * 28AC, Action Definition Register
 */
#define MCDS_TCXACT11 (MCDS_TCX_ACT11)

/** Alias for MCDS_TCX_ACT12.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT12 instead.
 * 28B0, Action Definition Register
 */
#define MCDS_TCXACT12 (MCDS_TCX_ACT12)

/** Alias for MCDS_TCX_ACT13.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT13 instead.
 * 28B4, Action Definition Register
 */
#define MCDS_TCXACT13 (MCDS_TCX_ACT13)

/** Alias for MCDS_TCX_ACT14.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT14 instead.
 * 28B8, Action Definition Register
 */
#define MCDS_TCXACT14 (MCDS_TCX_ACT14)

/** Alias for MCDS_TCX_ACT15.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT15 instead.
 * 28BC, Action Definition Register
 */
#define MCDS_TCXACT15 (MCDS_TCX_ACT15)

/** Alias for MCDS_TCX_ACT16.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT16 instead.
 * 28C0, Action Definition Register
 */
#define MCDS_TCXACT16 (MCDS_TCX_ACT16)

/** Alias for MCDS_TCX_ACT17.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT17 instead.
 * 28C4, Action Definition Register
 */
#define MCDS_TCXACT17 (MCDS_TCX_ACT17)

/** Alias for MCDS_TCX_ACT18.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT18 instead.
 * 28C8, Action Definition Register
 */
#define MCDS_TCXACT18 (MCDS_TCX_ACT18)

/** Alias for MCDS_TCX_ACT19.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT19 instead.
 * 28CC, Action Definition Register
 */
#define MCDS_TCXACT19 (MCDS_TCX_ACT19)

/** Alias for MCDS_TCX_ACT2.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT2 instead.
 * 2888, Action Definition Register
 */
#define MCDS_TCXACT2 (MCDS_TCX_ACT2)

/** Alias for MCDS_TCX_ACT20.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT20 instead.
 * 28D0, Action Definition Register
 */
#define MCDS_TCXACT20 (MCDS_TCX_ACT20)

/** Alias for MCDS_TCX_ACT21.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT21 instead.
 * 28D4, Action Definition Register
 */
#define MCDS_TCXACT21 (MCDS_TCX_ACT21)

/** Alias for MCDS_TCX_ACT22.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT22 instead.
 * 28D8, Action Definition Register
 */
#define MCDS_TCXACT22 (MCDS_TCX_ACT22)

/** Alias for MCDS_TCX_ACT3.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT3 instead.
 * 288C, Action Definition Register
 */
#define MCDS_TCXACT3 (MCDS_TCX_ACT3)

/** Alias for MCDS_TCX_ACT4.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT4 instead.
 * 2890, Action Definition Register
 */
#define MCDS_TCXACT4 (MCDS_TCX_ACT4)

/** Alias for MCDS_TCX_ACT5.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT5 instead.
 * 2894, Action Definition Register
 */
#define MCDS_TCXACT5 (MCDS_TCX_ACT5)

/** Alias for MCDS_TCX_ACT6.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT6 instead.
 * 2898, Action Definition Register
 */
#define MCDS_TCXACT6 (MCDS_TCX_ACT6)

/** Alias for MCDS_TCX_ACT7.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT7 instead.
 * 289C, Action Definition Register
 */
#define MCDS_TCXACT7 (MCDS_TCX_ACT7)

/** Alias for MCDS_TCX_ACT8.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT8 instead.
 * 28A0, Action Definition Register
 */
#define MCDS_TCXACT8 (MCDS_TCX_ACT8)

/** Alias for MCDS_TCX_ACT9.
 *  Note that this definition is obsolete, use MCDS_TCX_ACT9 instead.
 * 28A4, Action Definition Register
 */
#define MCDS_TCXACT9 (MCDS_TCX_ACT9)

/** Alias for MCDS_TCX_CID.
 *  Note that this definition is obsolete, use MCDS_TCX_CID instead.
 * 2004, Current Process ID
 */
#define MCDS_TCXCID (MCDS_TCX_CID)

/** Alias for MCDS_TCX_CIP.
 *  Note that this definition is obsolete, use MCDS_TCX_CIP instead.
 * 2008, Current Instruction Pointer
 */
#define MCDS_TCXCIP (MCDS_TCX_CIP)

/** Alias for MCDS_TCX_DCSTS.
 *  Note that this definition is obsolete, use MCDS_TCX_DCSTS instead.
 * 2000, Debug Status Register
 */
#define MCDS_TCXDCSTS (MCDS_TCX_DCSTS)

/** Alias for MCDS_TCX_EA0_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_EA0_BND instead.
 * 2400, Comparator Bound Register
 */
#define MCDS_TCXEA0_BND (MCDS_TCX_EA0_BND)

/** Alias for MCDS_TCX_EA0_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_EA0_RNG instead.
 * 2404, Comparator Range Register
 */
#define MCDS_TCXEA0_RNG (MCDS_TCX_EA0_RNG)

/** Alias for MCDS_TCX_EA1_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_EA1_BND instead.
 * 2410, Comparator Bound Register
 */
#define MCDS_TCXEA1_BND (MCDS_TCX_EA1_BND)

/** Alias for MCDS_TCX_EA1_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_EA1_RNG instead.
 * 2414, Comparator Range Register
 */
#define MCDS_TCXEA1_RNG (MCDS_TCX_EA1_RNG)

/** Alias for MCDS_TCX_EA2_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_EA2_BND instead.
 * 2420, Comparator Bound Register
 */
#define MCDS_TCXEA2_BND (MCDS_TCX_EA2_BND)

/** Alias for MCDS_TCX_EA2_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_EA2_RNG instead.
 * 2424, Comparator Range Register
 */
#define MCDS_TCXEA2_RNG (MCDS_TCX_EA2_RNG)

/** Alias for MCDS_TCX_EA3_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_EA3_BND instead.
 * 2430, Comparator Bound Register
 */
#define MCDS_TCXEA3_BND (MCDS_TCX_EA3_BND)

/** Alias for MCDS_TCX_EA3_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_EA3_RNG instead.
 * 2434, Comparator Range Register
 */
#define MCDS_TCXEA3_RNG (MCDS_TCX_EA3_RNG)

/** Alias for MCDS_TCX_EA4_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_EA4_BND instead.
 * 2440, Comparator Bound Register
 */
#define MCDS_TCXEA4_BND (MCDS_TCX_EA4_BND)

/** Alias for MCDS_TCX_EA4_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_EA4_RNG instead.
 * 2444, Comparator Range Register
 */
#define MCDS_TCXEA4_RNG (MCDS_TCX_EA4_RNG)

/** Alias for MCDS_TCX_EA5_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_EA5_BND instead.
 * 2450, Comparator Bound Register
 */
#define MCDS_TCXEA5_BND (MCDS_TCX_EA5_BND)

/** Alias for MCDS_TCX_EA5_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_EA5_RNG instead.
 * 2454, Comparator Range Register
 */
#define MCDS_TCXEA5_RNG (MCDS_TCX_EA5_RNG)

/** Alias for MCDS_TCX_EA6_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_EA6_BND instead.
 * 2460, Comparator Bound Register
 */
#define MCDS_TCXEA6_BND (MCDS_TCX_EA6_BND)

/** Alias for MCDS_TCX_EA6_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_EA6_RNG instead.
 * 2464, Comparator Range Register
 */
#define MCDS_TCXEA6_RNG (MCDS_TCX_EA6_RNG)

/** Alias for MCDS_TCX_EA7_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_EA7_BND instead.
 * 2470, Comparator Bound Register
 */
#define MCDS_TCXEA7_BND (MCDS_TCX_EA7_BND)

/** Alias for MCDS_TCX_EA7_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_EA7_RNG instead.
 * 2474, Comparator Range Register
 */
#define MCDS_TCXEA7_RNG (MCDS_TCX_EA7_RNG)

/** Alias for MCDS_TCX_EVT0.
 *  Note that this definition is obsolete, use MCDS_TCX_EVT0 instead.
 * 2800, Event Definition Register
 */
#define MCDS_TCXEVT0 (MCDS_TCX_EVT0)

/** Alias for MCDS_TCX_EVT1.
 *  Note that this definition is obsolete, use MCDS_TCX_EVT1 instead.
 * 2804, Event Definition Register
 */
#define MCDS_TCXEVT1 (MCDS_TCX_EVT1)

/** Alias for MCDS_TCX_EVT10.
 *  Note that this definition is obsolete, use MCDS_TCX_EVT10 instead.
 * 2828, Event Definition Register
 */
#define MCDS_TCXEVT10 (MCDS_TCX_EVT10)

/** Alias for MCDS_TCX_EVT11.
 *  Note that this definition is obsolete, use MCDS_TCX_EVT11 instead.
 * 282C, Event Definition Register
 */
#define MCDS_TCXEVT11 (MCDS_TCX_EVT11)

/** Alias for MCDS_TCX_EVT12.
 *  Note that this definition is obsolete, use MCDS_TCX_EVT12 instead.
 * 2830, Event Definition Register
 */
#define MCDS_TCXEVT12 (MCDS_TCX_EVT12)

/** Alias for MCDS_TCX_EVT13.
 *  Note that this definition is obsolete, use MCDS_TCX_EVT13 instead.
 * 2834, Event Definition Register
 */
#define MCDS_TCXEVT13 (MCDS_TCX_EVT13)

/** Alias for MCDS_TCX_EVT14.
 *  Note that this definition is obsolete, use MCDS_TCX_EVT14 instead.
 * 2838, Event Definition Register
 */
#define MCDS_TCXEVT14 (MCDS_TCX_EVT14)

/** Alias for MCDS_TCX_EVT15.
 *  Note that this definition is obsolete, use MCDS_TCX_EVT15 instead.
 * 283C, Event Definition Register
 */
#define MCDS_TCXEVT15 (MCDS_TCX_EVT15)

/** Alias for MCDS_TCX_EVT2.
 *  Note that this definition is obsolete, use MCDS_TCX_EVT2 instead.
 * 2808, Event Definition Register
 */
#define MCDS_TCXEVT2 (MCDS_TCX_EVT2)

/** Alias for MCDS_TCX_EVT3.
 *  Note that this definition is obsolete, use MCDS_TCX_EVT3 instead.
 * 280C, Event Definition Register
 */
#define MCDS_TCXEVT3 (MCDS_TCX_EVT3)

/** Alias for MCDS_TCX_EVT4.
 *  Note that this definition is obsolete, use MCDS_TCX_EVT4 instead.
 * 2810, Event Definition Register
 */
#define MCDS_TCXEVT4 (MCDS_TCX_EVT4)

/** Alias for MCDS_TCX_EVT5.
 *  Note that this definition is obsolete, use MCDS_TCX_EVT5 instead.
 * 2814, Event Definition Register
 */
#define MCDS_TCXEVT5 (MCDS_TCX_EVT5)

/** Alias for MCDS_TCX_EVT6.
 *  Note that this definition is obsolete, use MCDS_TCX_EVT6 instead.
 * 2818, Event Definition Register
 */
#define MCDS_TCXEVT6 (MCDS_TCX_EVT6)

/** Alias for MCDS_TCX_EVT7.
 *  Note that this definition is obsolete, use MCDS_TCX_EVT7 instead.
 * 281C, Event Definition Register
 */
#define MCDS_TCXEVT7 (MCDS_TCX_EVT7)

/** Alias for MCDS_TCX_EVT8.
 *  Note that this definition is obsolete, use MCDS_TCX_EVT8 instead.
 * 2820, Event Definition Register
 */
#define MCDS_TCXEVT8 (MCDS_TCX_EVT8)

/** Alias for MCDS_TCX_EVT9.
 *  Note that this definition is obsolete, use MCDS_TCX_EVT9 instead.
 * 2824, Event Definition Register
 */
#define MCDS_TCXEVT9 (MCDS_TCX_EVT9)

/** Alias for MCDS_TCX_ID0_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_ID0_BND instead.
 * 2C00, Comparator Bound Register
 */
#define MCDS_TCXID0_BND (MCDS_TCX_ID0_BND)

/** Alias for MCDS_TCX_ID0_MSK.
 *  Note that this definition is obsolete, use MCDS_TCX_ID0_MSK instead.
 * 2C08, Comparator Mask Register
 */
#define MCDS_TCXID0_MSK (MCDS_TCX_ID0_MSK)

/** Alias for MCDS_TCX_ID0_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_ID0_RNG instead.
 * 2C04, Comparator Range Register
 */
#define MCDS_TCXID0_RNG (MCDS_TCX_ID0_RNG)

/** Alias for MCDS_TCX_ID0_SGN.
 *  Note that this definition is obsolete, use MCDS_TCX_ID0_SGN instead.
 * 2C0C, Comparator Sign Register
 */
#define MCDS_TCXID0_SGN (MCDS_TCX_ID0_SGN)

/** Alias for MCDS_TCX_ID1_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_ID1_BND instead.
 * 2C10, Comparator Bound Register
 */
#define MCDS_TCXID1_BND (MCDS_TCX_ID1_BND)

/** Alias for MCDS_TCX_ID1_MSK.
 *  Note that this definition is obsolete, use MCDS_TCX_ID1_MSK instead.
 * 2C18, Comparator Mask Register
 */
#define MCDS_TCXID1_MSK (MCDS_TCX_ID1_MSK)

/** Alias for MCDS_TCX_ID1_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_ID1_RNG instead.
 * 2C14, Comparator Range Register
 */
#define MCDS_TCXID1_RNG (MCDS_TCX_ID1_RNG)

/** Alias for MCDS_TCX_ID1_SGN.
 *  Note that this definition is obsolete, use MCDS_TCX_ID1_SGN instead.
 * 2C1C, Comparator Sign Register
 */
#define MCDS_TCXID1_SGN (MCDS_TCX_ID1_SGN)

/** Alias for MCDS_TCX_IP0_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_IP0_BND instead.
 * 3000, Comparator Bound Register
 */
#define MCDS_TCXIP0_BND (MCDS_TCX_IP0_BND)

/** Alias for MCDS_TCX_IP0_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_IP0_RNG instead.
 * 3004, Comparator Range Register
 */
#define MCDS_TCXIP0_RNG (MCDS_TCX_IP0_RNG)

/** Alias for MCDS_TCX_IP1_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_IP1_BND instead.
 * 3010, Comparator Bound Register
 */
#define MCDS_TCXIP1_BND (MCDS_TCX_IP1_BND)

/** Alias for MCDS_TCX_IP1_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_IP1_RNG instead.
 * 3014, Comparator Range Register
 */
#define MCDS_TCXIP1_RNG (MCDS_TCX_IP1_RNG)

/** Alias for MCDS_TCX_IP2_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_IP2_BND instead.
 * 3020, Comparator Bound Register
 */
#define MCDS_TCXIP2_BND (MCDS_TCX_IP2_BND)

/** Alias for MCDS_TCX_IP2_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_IP2_RNG instead.
 * 3024, Comparator Range Register
 */
#define MCDS_TCXIP2_RNG (MCDS_TCX_IP2_RNG)

/** Alias for MCDS_TCX_IP3_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_IP3_BND instead.
 * 3030, Comparator Bound Register
 */
#define MCDS_TCXIP3_BND (MCDS_TCX_IP3_BND)

/** Alias for MCDS_TCX_IP3_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_IP3_RNG instead.
 * 3034, Comparator Range Register
 */
#define MCDS_TCXIP3_RNG (MCDS_TCX_IP3_RNG)

/** Alias for MCDS_TCX_IP4_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_IP4_BND instead.
 * 3040, Comparator Bound Register
 */
#define MCDS_TCXIP4_BND (MCDS_TCX_IP4_BND)

/** Alias for MCDS_TCX_IP4_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_IP4_RNG instead.
 * 3044, Comparator Range Register
 */
#define MCDS_TCXIP4_RNG (MCDS_TCX_IP4_RNG)

/** Alias for MCDS_TCX_IP5_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_IP5_BND instead.
 * 3050, Comparator Bound Register
 */
#define MCDS_TCXIP5_BND (MCDS_TCX_IP5_BND)

/** Alias for MCDS_TCX_IP5_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_IP5_RNG instead.
 * 3054, Comparator Range Register
 */
#define MCDS_TCXIP5_RNG (MCDS_TCX_IP5_RNG)

/** Alias for MCDS_TCX_PAL0_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_PAL0_BND instead.
 * 2210, Lookup Table Base Register
 */
#define MCDS_TCXPAL0_BND (MCDS_TCX_PAL0_BND)

/** Alias for MCDS_TCX_PAL0_MAP.
 *  Note that this definition is obsolete, use MCDS_TCX_PAL0_MAP instead.
 * 2218, Lookup Table Mapping Register
 */
#define MCDS_TCXPAL0_MAP (MCDS_TCX_PAL0_MAP)

/** Alias for MCDS_TCX_PAL0_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_PAL0_RNG instead.
 * 2214, Lookup Table Range Register
 */
#define MCDS_TCXPAL0_RNG (MCDS_TCX_PAL0_RNG)

/** Alias for MCDS_TCX_PAL1_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_PAL1_BND instead.
 * 2220, Lookup Table Base Register
 */
#define MCDS_TCXPAL1_BND (MCDS_TCX_PAL1_BND)

/** Alias for MCDS_TCX_PAL1_MAP.
 *  Note that this definition is obsolete, use MCDS_TCX_PAL1_MAP instead.
 * 2228, Lookup Table Mapping Register
 */
#define MCDS_TCXPAL1_MAP (MCDS_TCX_PAL1_MAP)

/** Alias for MCDS_TCX_PAL1_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_PAL1_RNG instead.
 * 2224, Lookup Table Range Register
 */
#define MCDS_TCXPAL1_RNG (MCDS_TCX_PAL1_RNG)

/** Alias for MCDS_TCX_PAL2_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_PAL2_BND instead.
 * 2230, Lookup Table Base Register
 */
#define MCDS_TCXPAL2_BND (MCDS_TCX_PAL2_BND)

/** Alias for MCDS_TCX_PAL2_MAP.
 *  Note that this definition is obsolete, use MCDS_TCX_PAL2_MAP instead.
 * 2238, Lookup Table Mapping Register
 */
#define MCDS_TCXPAL2_MAP (MCDS_TCX_PAL2_MAP)

/** Alias for MCDS_TCX_PAL2_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_PAL2_RNG instead.
 * 2234, Lookup Table Range Register
 */
#define MCDS_TCXPAL2_RNG (MCDS_TCX_PAL2_RNG)

/** Alias for MCDS_TCX_PAL3_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_PAL3_BND instead.
 * 2240, Lookup Table Base Register
 */
#define MCDS_TCXPAL3_BND (MCDS_TCX_PAL3_BND)

/** Alias for MCDS_TCX_PAL3_MAP.
 *  Note that this definition is obsolete, use MCDS_TCX_PAL3_MAP instead.
 * 2248, Lookup Table Mapping Register
 */
#define MCDS_TCXPAL3_MAP (MCDS_TCX_PAL3_MAP)

/** Alias for MCDS_TCX_PAL3_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_PAL3_RNG instead.
 * 2244, Lookup Table Range Register
 */
#define MCDS_TCXPAL3_RNG (MCDS_TCX_PAL3_RNG)

/** Alias for MCDS_TCX_PALLU_TA.
 *  Note that this definition is obsolete, use MCDS_TCX_PALLU_TA instead.
 * 2204, Lookup Table Address Register
 */
#define MCDS_TCXPALLU_TA (MCDS_TCX_PALLU_TA)

/** Alias for MCDS_TCX_PALLU_TD.
 *  Note that this definition is obsolete, use MCDS_TCX_PALLU_TD instead.
 * 2200, Lookup Table Data Register
 */
#define MCDS_TCXPALLU_TD (MCDS_TCX_PALLU_TD)

/** Alias for MCDS_TCX_WD0_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_WD0_BND instead.
 * 2480, Comparator Bound Register
 */
#define MCDS_TCXWD0_BND (MCDS_TCX_WD0_BND)

/** Alias for MCDS_TCX_WD0_HBND.
 *  Note that this definition is obsolete, use MCDS_TCX_WD0_HBND instead.
 * 2484, Comparator Bound Register
 */
#define MCDS_TCXWD0_HBND (MCDS_TCX_WD0_HBND)

/** Alias for MCDS_TCX_WD0_HMSK.
 *  Note that this definition is obsolete, use MCDS_TCX_WD0_HMSK instead.
 * 2494, Comparator Mask Register
 */
#define MCDS_TCXWD0_HMSK (MCDS_TCX_WD0_HMSK)

/** Alias for MCDS_TCX_WD0_HRNG.
 *  Note that this definition is obsolete, use MCDS_TCX_WD0_HRNG instead.
 * 248C, Comparator Range Register
 */
#define MCDS_TCXWD0_HRNG (MCDS_TCX_WD0_HRNG)

/** Alias for MCDS_TCX_WD0_MSK.
 *  Note that this definition is obsolete, use MCDS_TCX_WD0_MSK instead.
 * 2490, Comparator Mask Register
 */
#define MCDS_TCXWD0_MSK (MCDS_TCX_WD0_MSK)

/** Alias for MCDS_TCX_WD0_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_WD0_RNG instead.
 * 2488, Comparator Range Register
 */
#define MCDS_TCXWD0_RNG (MCDS_TCX_WD0_RNG)

/** Alias for MCDS_TCX_WD0_SGN.
 *  Note that this definition is obsolete, use MCDS_TCX_WD0_SGN instead.
 * 249C, Comparator Sign Register
 */
#define MCDS_TCXWD0_SGN (MCDS_TCX_WD0_SGN)

/** Alias for MCDS_TCX_WD1_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_WD1_BND instead.
 * 24A0, Comparator Bound Register
 */
#define MCDS_TCXWD1_BND (MCDS_TCX_WD1_BND)

/** Alias for MCDS_TCX_WD1_HBND.
 *  Note that this definition is obsolete, use MCDS_TCX_WD1_HBND instead.
 * 24A4, Comparator Bound Register
 */
#define MCDS_TCXWD1_HBND (MCDS_TCX_WD1_HBND)

/** Alias for MCDS_TCX_WD1_HMSK.
 *  Note that this definition is obsolete, use MCDS_TCX_WD1_HMSK instead.
 * 24B4, Comparator Mask Register
 */
#define MCDS_TCXWD1_HMSK (MCDS_TCX_WD1_HMSK)

/** Alias for MCDS_TCX_WD1_HRNG.
 *  Note that this definition is obsolete, use MCDS_TCX_WD1_HRNG instead.
 * 24AC, Comparator Range Register
 */
#define MCDS_TCXWD1_HRNG (MCDS_TCX_WD1_HRNG)

/** Alias for MCDS_TCX_WD1_MSK.
 *  Note that this definition is obsolete, use MCDS_TCX_WD1_MSK instead.
 * 24B0, Comparator Mask Register
 */
#define MCDS_TCXWD1_MSK (MCDS_TCX_WD1_MSK)

/** Alias for MCDS_TCX_WD1_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_WD1_RNG instead.
 * 24A8, Comparator Range Register
 */
#define MCDS_TCXWD1_RNG (MCDS_TCX_WD1_RNG)

/** Alias for MCDS_TCX_WD1_SGN.
 *  Note that this definition is obsolete, use MCDS_TCX_WD1_SGN instead.
 * 24BC, Comparator Sign Register
 */
#define MCDS_TCXWD1_SGN (MCDS_TCX_WD1_SGN)

/** Alias for MCDS_TCX_WD2_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_WD2_BND instead.
 * 24C0, Comparator Bound Register
 */
#define MCDS_TCXWD2_BND (MCDS_TCX_WD2_BND)

/** Alias for MCDS_TCX_WD2_HBND.
 *  Note that this definition is obsolete, use MCDS_TCX_WD2_HBND instead.
 * 24C4, Comparator Bound Register
 */
#define MCDS_TCXWD2_HBND (MCDS_TCX_WD2_HBND)

/** Alias for MCDS_TCX_WD2_HMSK.
 *  Note that this definition is obsolete, use MCDS_TCX_WD2_HMSK instead.
 * 24D4, Comparator Mask Register
 */
#define MCDS_TCXWD2_HMSK (MCDS_TCX_WD2_HMSK)

/** Alias for MCDS_TCX_WD2_HRNG.
 *  Note that this definition is obsolete, use MCDS_TCX_WD2_HRNG instead.
 * 24CC, Comparator Range Register
 */
#define MCDS_TCXWD2_HRNG (MCDS_TCX_WD2_HRNG)

/** Alias for MCDS_TCX_WD2_MSK.
 *  Note that this definition is obsolete, use MCDS_TCX_WD2_MSK instead.
 * 24D0, Comparator Mask Register
 */
#define MCDS_TCXWD2_MSK (MCDS_TCX_WD2_MSK)

/** Alias for MCDS_TCX_WD2_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_WD2_RNG instead.
 * 24C8, Comparator Range Register
 */
#define MCDS_TCXWD2_RNG (MCDS_TCX_WD2_RNG)

/** Alias for MCDS_TCX_WD2_SGN.
 *  Note that this definition is obsolete, use MCDS_TCX_WD2_SGN instead.
 * 24DC, Comparator Sign Register
 */
#define MCDS_TCXWD2_SGN (MCDS_TCX_WD2_SGN)

/** Alias for MCDS_TCX_WD3_BND.
 *  Note that this definition is obsolete, use MCDS_TCX_WD3_BND instead.
 * 24E0, Comparator Bound Register
 */
#define MCDS_TCXWD3_BND (MCDS_TCX_WD3_BND)

/** Alias for MCDS_TCX_WD3_HBND.
 *  Note that this definition is obsolete, use MCDS_TCX_WD3_HBND instead.
 * 24E4, Comparator Bound Register
 */
#define MCDS_TCXWD3_HBND (MCDS_TCX_WD3_HBND)

/** Alias for MCDS_TCX_WD3_HMSK.
 *  Note that this definition is obsolete, use MCDS_TCX_WD3_HMSK instead.
 * 24F4, Comparator Mask Register
 */
#define MCDS_TCXWD3_HMSK (MCDS_TCX_WD3_HMSK)

/** Alias for MCDS_TCX_WD3_HRNG.
 *  Note that this definition is obsolete, use MCDS_TCX_WD3_HRNG instead.
 * 24EC, Comparator Range Register
 */
#define MCDS_TCXWD3_HRNG (MCDS_TCX_WD3_HRNG)

/** Alias for MCDS_TCX_WD3_MSK.
 *  Note that this definition is obsolete, use MCDS_TCX_WD3_MSK instead.
 * 24F0, Comparator Mask Register
 */
#define MCDS_TCXWD3_MSK (MCDS_TCX_WD3_MSK)

/** Alias for MCDS_TCX_WD3_RNG.
 *  Note that this definition is obsolete, use MCDS_TCX_WD3_RNG instead.
 * 24E8, Comparator Range Register
 */
#define MCDS_TCXWD3_RNG (MCDS_TCX_WD3_RNG)

/** Alias for MCDS_TCX_WD3_SGN.
 *  Note that this definition is obsolete, use MCDS_TCX_WD3_SGN instead.
 * 24FC, Comparator Sign Register
 */
#define MCDS_TCXWD3_SGN (MCDS_TCX_WD3_SGN)

/** 4880, Action Definition Register */
#define MCDS_TCY_ACT0 ((*(volatile Ifx_MCDS_ACT*)0xF00EC880u)) /* lint --e(923)*/

/** 4884, Action Definition Register */
#define MCDS_TCY_ACT1 ((*(volatile Ifx_MCDS_ACT*)0xF00EC884u)) /* lint --e(923)*/

/** 48A8, Action Definition Register */
#define MCDS_TCY_ACT10 ((*(volatile Ifx_MCDS_ACT*)0xF00EC8A8u)) /* lint --e(923)*/

/** 48AC, Action Definition Register */
#define MCDS_TCY_ACT11 ((*(volatile Ifx_MCDS_ACT*)0xF00EC8ACu)) /* lint --e(923)*/

/** 48B0, Action Definition Register */
#define MCDS_TCY_ACT12 ((*(volatile Ifx_MCDS_ACT*)0xF00EC8B0u)) /* lint --e(923)*/

/** 48B4, Action Definition Register */
#define MCDS_TCY_ACT13 ((*(volatile Ifx_MCDS_ACT*)0xF00EC8B4u)) /* lint --e(923)*/

/** 48B8, Action Definition Register */
#define MCDS_TCY_ACT14 ((*(volatile Ifx_MCDS_ACT*)0xF00EC8B8u)) /* lint --e(923)*/

/** 48BC, Action Definition Register */
#define MCDS_TCY_ACT15 ((*(volatile Ifx_MCDS_ACT*)0xF00EC8BCu)) /* lint --e(923)*/

/** 48C0, Action Definition Register */
#define MCDS_TCY_ACT16 ((*(volatile Ifx_MCDS_ACT*)0xF00EC8C0u)) /* lint --e(923)*/

/** 48C4, Action Definition Register */
#define MCDS_TCY_ACT17 ((*(volatile Ifx_MCDS_ACT*)0xF00EC8C4u)) /* lint --e(923)*/

/** 48C8, Action Definition Register */
#define MCDS_TCY_ACT18 ((*(volatile Ifx_MCDS_ACT*)0xF00EC8C8u)) /* lint --e(923)*/

/** 48CC, Action Definition Register */
#define MCDS_TCY_ACT19 ((*(volatile Ifx_MCDS_ACT*)0xF00EC8CCu)) /* lint --e(923)*/

/** 4888, Action Definition Register */
#define MCDS_TCY_ACT2 ((*(volatile Ifx_MCDS_ACT*)0xF00EC888u)) /* lint --e(923)*/

/** 48D0, Action Definition Register */
#define MCDS_TCY_ACT20 ((*(volatile Ifx_MCDS_ACT*)0xF00EC8D0u)) /* lint --e(923)*/

/** 48D4, Action Definition Register */
#define MCDS_TCY_ACT21 ((*(volatile Ifx_MCDS_ACT*)0xF00EC8D4u)) /* lint --e(923)*/

/** 48D8, Action Definition Register */
#define MCDS_TCY_ACT22 ((*(volatile Ifx_MCDS_ACT*)0xF00EC8D8u)) /* lint --e(923)*/

/** 488C, Action Definition Register */
#define MCDS_TCY_ACT3 ((*(volatile Ifx_MCDS_ACT*)0xF00EC88Cu)) /* lint --e(923)*/

/** 4890, Action Definition Register */
#define MCDS_TCY_ACT4 ((*(volatile Ifx_MCDS_ACT*)0xF00EC890u)) /* lint --e(923)*/

/** 4894, Action Definition Register */
#define MCDS_TCY_ACT5 ((*(volatile Ifx_MCDS_ACT*)0xF00EC894u)) /* lint --e(923)*/

/** 4898, Action Definition Register */
#define MCDS_TCY_ACT6 ((*(volatile Ifx_MCDS_ACT*)0xF00EC898u)) /* lint --e(923)*/

/** 489C, Action Definition Register */
#define MCDS_TCY_ACT7 ((*(volatile Ifx_MCDS_ACT*)0xF00EC89Cu)) /* lint --e(923)*/

/** 48A0, Action Definition Register */
#define MCDS_TCY_ACT8 ((*(volatile Ifx_MCDS_ACT*)0xF00EC8A0u)) /* lint --e(923)*/

/** 48A4, Action Definition Register */
#define MCDS_TCY_ACT9 ((*(volatile Ifx_MCDS_ACT*)0xF00EC8A4u)) /* lint --e(923)*/

/** 4004, Current Process ID */
#define MCDS_TCY_CID ((*(volatile Ifx_MCDS_TCY_CID*)0xF00EC004u)) /* lint --e(923)*/

/** 4008, Current Instruction Pointer */
#define MCDS_TCY_CIP ((*(volatile Ifx_MCDS_TCY_CIP*)0xF00EC008u)) /* lint --e(923)*/

/** 4000, Debug Status Register */
#define MCDS_TCY_DCSTS ((*(volatile Ifx_MCDS_TCY_DCSTS*)0xF00EC000u)) /* lint --e(923)*/

/** 4400, Comparator Bound Register */
#define MCDS_TCY_EA0_BND ((*(volatile Ifx_MCDS_TCYEA_BND*)0xF00EC400u)) /* lint --e(923)*/

/** 4404, Comparator Range Register */
#define MCDS_TCY_EA0_RNG ((*(volatile Ifx_MCDS_TCYEA_RNG*)0xF00EC404u)) /* lint --e(923)*/

/** 4410, Comparator Bound Register */
#define MCDS_TCY_EA1_BND ((*(volatile Ifx_MCDS_TCYEA_BND*)0xF00EC410u)) /* lint --e(923)*/

/** 4414, Comparator Range Register */
#define MCDS_TCY_EA1_RNG ((*(volatile Ifx_MCDS_TCYEA_RNG*)0xF00EC414u)) /* lint --e(923)*/

/** 4420, Comparator Bound Register */
#define MCDS_TCY_EA2_BND ((*(volatile Ifx_MCDS_TCYEA_BND*)0xF00EC420u)) /* lint --e(923)*/

/** 4424, Comparator Range Register */
#define MCDS_TCY_EA2_RNG ((*(volatile Ifx_MCDS_TCYEA_RNG*)0xF00EC424u)) /* lint --e(923)*/

/** 4430, Comparator Bound Register */
#define MCDS_TCY_EA3_BND ((*(volatile Ifx_MCDS_TCYEA_BND*)0xF00EC430u)) /* lint --e(923)*/

/** 4434, Comparator Range Register */
#define MCDS_TCY_EA3_RNG ((*(volatile Ifx_MCDS_TCYEA_RNG*)0xF00EC434u)) /* lint --e(923)*/

/** 4440, Comparator Bound Register */
#define MCDS_TCY_EA4_BND ((*(volatile Ifx_MCDS_TCYEA_BND*)0xF00EC440u)) /* lint --e(923)*/

/** 4444, Comparator Range Register */
#define MCDS_TCY_EA4_RNG ((*(volatile Ifx_MCDS_TCYEA_RNG*)0xF00EC444u)) /* lint --e(923)*/

/** 4450, Comparator Bound Register */
#define MCDS_TCY_EA5_BND ((*(volatile Ifx_MCDS_TCYEA_BND*)0xF00EC450u)) /* lint --e(923)*/

/** 4454, Comparator Range Register */
#define MCDS_TCY_EA5_RNG ((*(volatile Ifx_MCDS_TCYEA_RNG*)0xF00EC454u)) /* lint --e(923)*/

/** 4460, Comparator Bound Register */
#define MCDS_TCY_EA6_BND ((*(volatile Ifx_MCDS_TCYEA_BND*)0xF00EC460u)) /* lint --e(923)*/

/** 4464, Comparator Range Register */
#define MCDS_TCY_EA6_RNG ((*(volatile Ifx_MCDS_TCYEA_RNG*)0xF00EC464u)) /* lint --e(923)*/

/** 4470, Comparator Bound Register */
#define MCDS_TCY_EA7_BND ((*(volatile Ifx_MCDS_TCYEA_BND*)0xF00EC470u)) /* lint --e(923)*/

/** 4474, Comparator Range Register */
#define MCDS_TCY_EA7_RNG ((*(volatile Ifx_MCDS_TCYEA_RNG*)0xF00EC474u)) /* lint --e(923)*/

/** 4800, Event Definition Register */
#define MCDS_TCY_EVT0 ((*(volatile Ifx_MCDS_EVT*)0xF00EC800u)) /* lint --e(923)*/

/** 4804, Event Definition Register */
#define MCDS_TCY_EVT1 ((*(volatile Ifx_MCDS_EVT*)0xF00EC804u)) /* lint --e(923)*/

/** 4828, Event Definition Register */
#define MCDS_TCY_EVT10 ((*(volatile Ifx_MCDS_EVT*)0xF00EC828u)) /* lint --e(923)*/

/** 482C, Event Definition Register */
#define MCDS_TCY_EVT11 ((*(volatile Ifx_MCDS_EVT*)0xF00EC82Cu)) /* lint --e(923)*/

/** 4830, Event Definition Register */
#define MCDS_TCY_EVT12 ((*(volatile Ifx_MCDS_EVT*)0xF00EC830u)) /* lint --e(923)*/

/** 4834, Event Definition Register */
#define MCDS_TCY_EVT13 ((*(volatile Ifx_MCDS_EVT*)0xF00EC834u)) /* lint --e(923)*/

/** 4838, Event Definition Register */
#define MCDS_TCY_EVT14 ((*(volatile Ifx_MCDS_EVT*)0xF00EC838u)) /* lint --e(923)*/

/** 483C, Event Definition Register */
#define MCDS_TCY_EVT15 ((*(volatile Ifx_MCDS_EVT*)0xF00EC83Cu)) /* lint --e(923)*/

/** 4808, Event Definition Register */
#define MCDS_TCY_EVT2 ((*(volatile Ifx_MCDS_EVT*)0xF00EC808u)) /* lint --e(923)*/

/** 480C, Event Definition Register */
#define MCDS_TCY_EVT3 ((*(volatile Ifx_MCDS_EVT*)0xF00EC80Cu)) /* lint --e(923)*/

/** 4810, Event Definition Register */
#define MCDS_TCY_EVT4 ((*(volatile Ifx_MCDS_EVT*)0xF00EC810u)) /* lint --e(923)*/

/** 4814, Event Definition Register */
#define MCDS_TCY_EVT5 ((*(volatile Ifx_MCDS_EVT*)0xF00EC814u)) /* lint --e(923)*/

/** 4818, Event Definition Register */
#define MCDS_TCY_EVT6 ((*(volatile Ifx_MCDS_EVT*)0xF00EC818u)) /* lint --e(923)*/

/** 481C, Event Definition Register */
#define MCDS_TCY_EVT7 ((*(volatile Ifx_MCDS_EVT*)0xF00EC81Cu)) /* lint --e(923)*/

/** 4820, Event Definition Register */
#define MCDS_TCY_EVT8 ((*(volatile Ifx_MCDS_EVT*)0xF00EC820u)) /* lint --e(923)*/

/** 4824, Event Definition Register */
#define MCDS_TCY_EVT9 ((*(volatile Ifx_MCDS_EVT*)0xF00EC824u)) /* lint --e(923)*/

/** 4C00, Comparator Bound Register */
#define MCDS_TCY_ID0_BND ((*(volatile Ifx_MCDS_TCYID_BND*)0xF00ECC00u)) /* lint --e(923)*/

/** 4C08, Comparator Mask Register */
#define MCDS_TCY_ID0_MSK ((*(volatile Ifx_MCDS_TCYID_MSK*)0xF00ECC08u)) /* lint --e(923)*/

/** 4C04, Comparator Range Register */
#define MCDS_TCY_ID0_RNG ((*(volatile Ifx_MCDS_TCYID_RNG*)0xF00ECC04u)) /* lint --e(923)*/

/** 4C0C, Comparator Sign Register */
#define MCDS_TCY_ID0_SGN ((*(volatile Ifx_MCDS_TCYID_SGN*)0xF00ECC0Cu)) /* lint --e(923)*/

/** 4C10, Comparator Bound Register */
#define MCDS_TCY_ID1_BND ((*(volatile Ifx_MCDS_TCYID_BND*)0xF00ECC10u)) /* lint --e(923)*/

/** 4C18, Comparator Mask Register */
#define MCDS_TCY_ID1_MSK ((*(volatile Ifx_MCDS_TCYID_MSK*)0xF00ECC18u)) /* lint --e(923)*/

/** 4C14, Comparator Range Register */
#define MCDS_TCY_ID1_RNG ((*(volatile Ifx_MCDS_TCYID_RNG*)0xF00ECC14u)) /* lint --e(923)*/

/** 4C1C, Comparator Sign Register */
#define MCDS_TCY_ID1_SGN ((*(volatile Ifx_MCDS_TCYID_SGN*)0xF00ECC1Cu)) /* lint --e(923)*/

/** 5000, Comparator Bound Register */
#define MCDS_TCY_IP0_BND ((*(volatile Ifx_MCDS_TCYIP_BND*)0xF00ED000u)) /* lint --e(923)*/

/** 5004, Comparator Range Register */
#define MCDS_TCY_IP0_RNG ((*(volatile Ifx_MCDS_TCYIP_RNG*)0xF00ED004u)) /* lint --e(923)*/

/** 5010, Comparator Bound Register */
#define MCDS_TCY_IP1_BND ((*(volatile Ifx_MCDS_TCYIP_BND*)0xF00ED010u)) /* lint --e(923)*/

/** 5014, Comparator Range Register */
#define MCDS_TCY_IP1_RNG ((*(volatile Ifx_MCDS_TCYIP_RNG*)0xF00ED014u)) /* lint --e(923)*/

/** 5020, Comparator Bound Register */
#define MCDS_TCY_IP2_BND ((*(volatile Ifx_MCDS_TCYIP_BND*)0xF00ED020u)) /* lint --e(923)*/

/** 5024, Comparator Range Register */
#define MCDS_TCY_IP2_RNG ((*(volatile Ifx_MCDS_TCYIP_RNG*)0xF00ED024u)) /* lint --e(923)*/

/** 5030, Comparator Bound Register */
#define MCDS_TCY_IP3_BND ((*(volatile Ifx_MCDS_TCYIP_BND*)0xF00ED030u)) /* lint --e(923)*/

/** 5034, Comparator Range Register */
#define MCDS_TCY_IP3_RNG ((*(volatile Ifx_MCDS_TCYIP_RNG*)0xF00ED034u)) /* lint --e(923)*/

/** 5040, Comparator Bound Register */
#define MCDS_TCY_IP4_BND ((*(volatile Ifx_MCDS_TCYIP_BND*)0xF00ED040u)) /* lint --e(923)*/

/** 5044, Comparator Range Register */
#define MCDS_TCY_IP4_RNG ((*(volatile Ifx_MCDS_TCYIP_RNG*)0xF00ED044u)) /* lint --e(923)*/

/** 5050, Comparator Bound Register */
#define MCDS_TCY_IP5_BND ((*(volatile Ifx_MCDS_TCYIP_BND*)0xF00ED050u)) /* lint --e(923)*/

/** 5054, Comparator Range Register */
#define MCDS_TCY_IP5_RNG ((*(volatile Ifx_MCDS_TCYIP_RNG*)0xF00ED054u)) /* lint --e(923)*/

/** 4210, Lookup Table Base Register */
#define MCDS_TCY_PAL0_BND ((*(volatile Ifx_MCDS_TCYPAL_BND*)0xF00EC210u)) /* lint --e(923)*/

/** 4218, Lookup Table Mapping Register */
#define MCDS_TCY_PAL0_MAP ((*(volatile Ifx_MCDS_TCYPAL_MAP*)0xF00EC218u)) /* lint --e(923)*/

/** 4214, Lookup Table Range Register */
#define MCDS_TCY_PAL0_RNG ((*(volatile Ifx_MCDS_TCYPAL_RNG*)0xF00EC214u)) /* lint --e(923)*/

/** 4220, Lookup Table Base Register */
#define MCDS_TCY_PAL1_BND ((*(volatile Ifx_MCDS_TCYPAL_BND*)0xF00EC220u)) /* lint --e(923)*/

/** 4228, Lookup Table Mapping Register */
#define MCDS_TCY_PAL1_MAP ((*(volatile Ifx_MCDS_TCYPAL_MAP*)0xF00EC228u)) /* lint --e(923)*/

/** 4224, Lookup Table Range Register */
#define MCDS_TCY_PAL1_RNG ((*(volatile Ifx_MCDS_TCYPAL_RNG*)0xF00EC224u)) /* lint --e(923)*/

/** 4230, Lookup Table Base Register */
#define MCDS_TCY_PAL2_BND ((*(volatile Ifx_MCDS_TCYPAL_BND*)0xF00EC230u)) /* lint --e(923)*/

/** 4238, Lookup Table Mapping Register */
#define MCDS_TCY_PAL2_MAP ((*(volatile Ifx_MCDS_TCYPAL_MAP*)0xF00EC238u)) /* lint --e(923)*/

/** 4234, Lookup Table Range Register */
#define MCDS_TCY_PAL2_RNG ((*(volatile Ifx_MCDS_TCYPAL_RNG*)0xF00EC234u)) /* lint --e(923)*/

/** 4240, Lookup Table Base Register */
#define MCDS_TCY_PAL3_BND ((*(volatile Ifx_MCDS_TCYPAL_BND*)0xF00EC240u)) /* lint --e(923)*/

/** 4248, Lookup Table Mapping Register */
#define MCDS_TCY_PAL3_MAP ((*(volatile Ifx_MCDS_TCYPAL_MAP*)0xF00EC248u)) /* lint --e(923)*/

/** 4244, Lookup Table Range Register */
#define MCDS_TCY_PAL3_RNG ((*(volatile Ifx_MCDS_TCYPAL_RNG*)0xF00EC244u)) /* lint --e(923)*/

/** 4204, Lookup Table Address Register */
#define MCDS_TCY_PALLU_TA ((*(volatile Ifx_MCDS_LOKUP_TA*)0xF00EC204u)) /* lint --e(923)*/

/** 4200, Lookup Table Data Register */
#define MCDS_TCY_PALLU_TD ((*(volatile Ifx_MCDS_LOKUP_TD*)0xF00EC200u)) /* lint --e(923)*/

/** 4480, Comparator Bound Register */
#define MCDS_TCY_WD0_BND ((*(volatile Ifx_MCDS_TCYWD_BND*)0xF00EC480u)) /* lint --e(923)*/

/** 4484, Comparator Bound Register */
#define MCDS_TCY_WD0_HBND ((*(volatile Ifx_MCDS_TCYWD_HBND*)0xF00EC484u)) /* lint --e(923)*/

/** 4494, Comparator Mask Register */
#define MCDS_TCY_WD0_HMSK ((*(volatile Ifx_MCDS_TCYWD_HMSK*)0xF00EC494u)) /* lint --e(923)*/

/** 448C, Comparator Range Register */
#define MCDS_TCY_WD0_HRNG ((*(volatile Ifx_MCDS_TCYWD_HRNG*)0xF00EC48Cu)) /* lint --e(923)*/

/** 4490, Comparator Mask Register */
#define MCDS_TCY_WD0_MSK ((*(volatile Ifx_MCDS_TCYWD_MSK*)0xF00EC490u)) /* lint --e(923)*/

/** 4488, Comparator Range Register */
#define MCDS_TCY_WD0_RNG ((*(volatile Ifx_MCDS_TCYWD_RNG*)0xF00EC488u)) /* lint --e(923)*/

/** 449C, Comparator Sign Register */
#define MCDS_TCY_WD0_SGN ((*(volatile Ifx_MCDS_TCYWD_SGN*)0xF00EC49Cu)) /* lint --e(923)*/

/** 44A0, Comparator Bound Register */
#define MCDS_TCY_WD1_BND ((*(volatile Ifx_MCDS_TCYWD_BND*)0xF00EC4A0u)) /* lint --e(923)*/

/** 44A4, Comparator Bound Register */
#define MCDS_TCY_WD1_HBND ((*(volatile Ifx_MCDS_TCYWD_HBND*)0xF00EC4A4u)) /* lint --e(923)*/

/** 44B4, Comparator Mask Register */
#define MCDS_TCY_WD1_HMSK ((*(volatile Ifx_MCDS_TCYWD_HMSK*)0xF00EC4B4u)) /* lint --e(923)*/

/** 44AC, Comparator Range Register */
#define MCDS_TCY_WD1_HRNG ((*(volatile Ifx_MCDS_TCYWD_HRNG*)0xF00EC4ACu)) /* lint --e(923)*/

/** 44B0, Comparator Mask Register */
#define MCDS_TCY_WD1_MSK ((*(volatile Ifx_MCDS_TCYWD_MSK*)0xF00EC4B0u)) /* lint --e(923)*/

/** 44A8, Comparator Range Register */
#define MCDS_TCY_WD1_RNG ((*(volatile Ifx_MCDS_TCYWD_RNG*)0xF00EC4A8u)) /* lint --e(923)*/

/** 44BC, Comparator Sign Register */
#define MCDS_TCY_WD1_SGN ((*(volatile Ifx_MCDS_TCYWD_SGN*)0xF00EC4BCu)) /* lint --e(923)*/

/** 44C0, Comparator Bound Register */
#define MCDS_TCY_WD2_BND ((*(volatile Ifx_MCDS_TCYWD_BND*)0xF00EC4C0u)) /* lint --e(923)*/

/** 44C4, Comparator Bound Register */
#define MCDS_TCY_WD2_HBND ((*(volatile Ifx_MCDS_TCYWD_HBND*)0xF00EC4C4u)) /* lint --e(923)*/

/** 44D4, Comparator Mask Register */
#define MCDS_TCY_WD2_HMSK ((*(volatile Ifx_MCDS_TCYWD_HMSK*)0xF00EC4D4u)) /* lint --e(923)*/

/** 44CC, Comparator Range Register */
#define MCDS_TCY_WD2_HRNG ((*(volatile Ifx_MCDS_TCYWD_HRNG*)0xF00EC4CCu)) /* lint --e(923)*/

/** 44D0, Comparator Mask Register */
#define MCDS_TCY_WD2_MSK ((*(volatile Ifx_MCDS_TCYWD_MSK*)0xF00EC4D0u)) /* lint --e(923)*/

/** 44C8, Comparator Range Register */
#define MCDS_TCY_WD2_RNG ((*(volatile Ifx_MCDS_TCYWD_RNG*)0xF00EC4C8u)) /* lint --e(923)*/

/** 44DC, Comparator Sign Register */
#define MCDS_TCY_WD2_SGN ((*(volatile Ifx_MCDS_TCYWD_SGN*)0xF00EC4DCu)) /* lint --e(923)*/

/** 44E0, Comparator Bound Register */
#define MCDS_TCY_WD3_BND ((*(volatile Ifx_MCDS_TCYWD_BND*)0xF00EC4E0u)) /* lint --e(923)*/

/** 44E4, Comparator Bound Register */
#define MCDS_TCY_WD3_HBND ((*(volatile Ifx_MCDS_TCYWD_HBND*)0xF00EC4E4u)) /* lint --e(923)*/

/** 44F4, Comparator Mask Register */
#define MCDS_TCY_WD3_HMSK ((*(volatile Ifx_MCDS_TCYWD_HMSK*)0xF00EC4F4u)) /* lint --e(923)*/

/** 44EC, Comparator Range Register */
#define MCDS_TCY_WD3_HRNG ((*(volatile Ifx_MCDS_TCYWD_HRNG*)0xF00EC4ECu)) /* lint --e(923)*/

/** 44F0, Comparator Mask Register */
#define MCDS_TCY_WD3_MSK ((*(volatile Ifx_MCDS_TCYWD_MSK*)0xF00EC4F0u)) /* lint --e(923)*/

/** 44E8, Comparator Range Register */
#define MCDS_TCY_WD3_RNG ((*(volatile Ifx_MCDS_TCYWD_RNG*)0xF00EC4E8u)) /* lint --e(923)*/

/** 44FC, Comparator Sign Register */
#define MCDS_TCY_WD3_SGN ((*(volatile Ifx_MCDS_TCYWD_SGN*)0xF00EC4FCu)) /* lint --e(923)*/

/** Alias for MCDS_TCY_ACT0.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT0 instead.
 * 4880, Action Definition Register
 */
#define MCDS_TCYACT0 (MCDS_TCY_ACT0)

/** Alias for MCDS_TCY_ACT1.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT1 instead.
 * 4884, Action Definition Register
 */
#define MCDS_TCYACT1 (MCDS_TCY_ACT1)

/** Alias for MCDS_TCY_ACT10.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT10 instead.
 * 48A8, Action Definition Register
 */
#define MCDS_TCYACT10 (MCDS_TCY_ACT10)

/** Alias for MCDS_TCY_ACT11.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT11 instead.
 * 48AC, Action Definition Register
 */
#define MCDS_TCYACT11 (MCDS_TCY_ACT11)

/** Alias for MCDS_TCY_ACT12.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT12 instead.
 * 48B0, Action Definition Register
 */
#define MCDS_TCYACT12 (MCDS_TCY_ACT12)

/** Alias for MCDS_TCY_ACT13.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT13 instead.
 * 48B4, Action Definition Register
 */
#define MCDS_TCYACT13 (MCDS_TCY_ACT13)

/** Alias for MCDS_TCY_ACT14.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT14 instead.
 * 48B8, Action Definition Register
 */
#define MCDS_TCYACT14 (MCDS_TCY_ACT14)

/** Alias for MCDS_TCY_ACT15.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT15 instead.
 * 48BC, Action Definition Register
 */
#define MCDS_TCYACT15 (MCDS_TCY_ACT15)

/** Alias for MCDS_TCY_ACT16.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT16 instead.
 * 48C0, Action Definition Register
 */
#define MCDS_TCYACT16 (MCDS_TCY_ACT16)

/** Alias for MCDS_TCY_ACT17.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT17 instead.
 * 48C4, Action Definition Register
 */
#define MCDS_TCYACT17 (MCDS_TCY_ACT17)

/** Alias for MCDS_TCY_ACT18.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT18 instead.
 * 48C8, Action Definition Register
 */
#define MCDS_TCYACT18 (MCDS_TCY_ACT18)

/** Alias for MCDS_TCY_ACT19.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT19 instead.
 * 48CC, Action Definition Register
 */
#define MCDS_TCYACT19 (MCDS_TCY_ACT19)

/** Alias for MCDS_TCY_ACT2.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT2 instead.
 * 4888, Action Definition Register
 */
#define MCDS_TCYACT2 (MCDS_TCY_ACT2)

/** Alias for MCDS_TCY_ACT20.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT20 instead.
 * 48D0, Action Definition Register
 */
#define MCDS_TCYACT20 (MCDS_TCY_ACT20)

/** Alias for MCDS_TCY_ACT21.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT21 instead.
 * 48D4, Action Definition Register
 */
#define MCDS_TCYACT21 (MCDS_TCY_ACT21)

/** Alias for MCDS_TCY_ACT22.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT22 instead.
 * 48D8, Action Definition Register
 */
#define MCDS_TCYACT22 (MCDS_TCY_ACT22)

/** Alias for MCDS_TCY_ACT3.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT3 instead.
 * 488C, Action Definition Register
 */
#define MCDS_TCYACT3 (MCDS_TCY_ACT3)

/** Alias for MCDS_TCY_ACT4.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT4 instead.
 * 4890, Action Definition Register
 */
#define MCDS_TCYACT4 (MCDS_TCY_ACT4)

/** Alias for MCDS_TCY_ACT5.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT5 instead.
 * 4894, Action Definition Register
 */
#define MCDS_TCYACT5 (MCDS_TCY_ACT5)

/** Alias for MCDS_TCY_ACT6.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT6 instead.
 * 4898, Action Definition Register
 */
#define MCDS_TCYACT6 (MCDS_TCY_ACT6)

/** Alias for MCDS_TCY_ACT7.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT7 instead.
 * 489C, Action Definition Register
 */
#define MCDS_TCYACT7 (MCDS_TCY_ACT7)

/** Alias for MCDS_TCY_ACT8.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT8 instead.
 * 48A0, Action Definition Register
 */
#define MCDS_TCYACT8 (MCDS_TCY_ACT8)

/** Alias for MCDS_TCY_ACT9.
 *  Note that this definition is obsolete, use MCDS_TCY_ACT9 instead.
 * 48A4, Action Definition Register
 */
#define MCDS_TCYACT9 (MCDS_TCY_ACT9)

/** Alias for MCDS_TCY_CID.
 *  Note that this definition is obsolete, use MCDS_TCY_CID instead.
 * 4004, Current Process ID
 */
#define MCDS_TCYCID (MCDS_TCY_CID)

/** Alias for MCDS_TCY_CIP.
 *  Note that this definition is obsolete, use MCDS_TCY_CIP instead.
 * 4008, Current Instruction Pointer
 */
#define MCDS_TCYCIP (MCDS_TCY_CIP)

/** Alias for MCDS_TCY_DCSTS.
 *  Note that this definition is obsolete, use MCDS_TCY_DCSTS instead.
 * 4000, Debug Status Register
 */
#define MCDS_TCYDCSTS (MCDS_TCY_DCSTS)

/** Alias for MCDS_TCY_EA0_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_EA0_BND instead.
 * 4400, Comparator Bound Register
 */
#define MCDS_TCYEA0_BND (MCDS_TCY_EA0_BND)

/** Alias for MCDS_TCY_EA0_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_EA0_RNG instead.
 * 4404, Comparator Range Register
 */
#define MCDS_TCYEA0_RNG (MCDS_TCY_EA0_RNG)

/** Alias for MCDS_TCY_EA1_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_EA1_BND instead.
 * 4410, Comparator Bound Register
 */
#define MCDS_TCYEA1_BND (MCDS_TCY_EA1_BND)

/** Alias for MCDS_TCY_EA1_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_EA1_RNG instead.
 * 4414, Comparator Range Register
 */
#define MCDS_TCYEA1_RNG (MCDS_TCY_EA1_RNG)

/** Alias for MCDS_TCY_EA2_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_EA2_BND instead.
 * 4420, Comparator Bound Register
 */
#define MCDS_TCYEA2_BND (MCDS_TCY_EA2_BND)

/** Alias for MCDS_TCY_EA2_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_EA2_RNG instead.
 * 4424, Comparator Range Register
 */
#define MCDS_TCYEA2_RNG (MCDS_TCY_EA2_RNG)

/** Alias for MCDS_TCY_EA3_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_EA3_BND instead.
 * 4430, Comparator Bound Register
 */
#define MCDS_TCYEA3_BND (MCDS_TCY_EA3_BND)

/** Alias for MCDS_TCY_EA3_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_EA3_RNG instead.
 * 4434, Comparator Range Register
 */
#define MCDS_TCYEA3_RNG (MCDS_TCY_EA3_RNG)

/** Alias for MCDS_TCY_EA4_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_EA4_BND instead.
 * 4440, Comparator Bound Register
 */
#define MCDS_TCYEA4_BND (MCDS_TCY_EA4_BND)

/** Alias for MCDS_TCY_EA4_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_EA4_RNG instead.
 * 4444, Comparator Range Register
 */
#define MCDS_TCYEA4_RNG (MCDS_TCY_EA4_RNG)

/** Alias for MCDS_TCY_EA5_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_EA5_BND instead.
 * 4450, Comparator Bound Register
 */
#define MCDS_TCYEA5_BND (MCDS_TCY_EA5_BND)

/** Alias for MCDS_TCY_EA5_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_EA5_RNG instead.
 * 4454, Comparator Range Register
 */
#define MCDS_TCYEA5_RNG (MCDS_TCY_EA5_RNG)

/** Alias for MCDS_TCY_EA6_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_EA6_BND instead.
 * 4460, Comparator Bound Register
 */
#define MCDS_TCYEA6_BND (MCDS_TCY_EA6_BND)

/** Alias for MCDS_TCY_EA6_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_EA6_RNG instead.
 * 4464, Comparator Range Register
 */
#define MCDS_TCYEA6_RNG (MCDS_TCY_EA6_RNG)

/** Alias for MCDS_TCY_EA7_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_EA7_BND instead.
 * 4470, Comparator Bound Register
 */
#define MCDS_TCYEA7_BND (MCDS_TCY_EA7_BND)

/** Alias for MCDS_TCY_EA7_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_EA7_RNG instead.
 * 4474, Comparator Range Register
 */
#define MCDS_TCYEA7_RNG (MCDS_TCY_EA7_RNG)

/** Alias for MCDS_TCY_EVT0.
 *  Note that this definition is obsolete, use MCDS_TCY_EVT0 instead.
 * 4800, Event Definition Register
 */
#define MCDS_TCYEVT0 (MCDS_TCY_EVT0)

/** Alias for MCDS_TCY_EVT1.
 *  Note that this definition is obsolete, use MCDS_TCY_EVT1 instead.
 * 4804, Event Definition Register
 */
#define MCDS_TCYEVT1 (MCDS_TCY_EVT1)

/** Alias for MCDS_TCY_EVT10.
 *  Note that this definition is obsolete, use MCDS_TCY_EVT10 instead.
 * 4828, Event Definition Register
 */
#define MCDS_TCYEVT10 (MCDS_TCY_EVT10)

/** Alias for MCDS_TCY_EVT11.
 *  Note that this definition is obsolete, use MCDS_TCY_EVT11 instead.
 * 482C, Event Definition Register
 */
#define MCDS_TCYEVT11 (MCDS_TCY_EVT11)

/** Alias for MCDS_TCY_EVT12.
 *  Note that this definition is obsolete, use MCDS_TCY_EVT12 instead.
 * 4830, Event Definition Register
 */
#define MCDS_TCYEVT12 (MCDS_TCY_EVT12)

/** Alias for MCDS_TCY_EVT13.
 *  Note that this definition is obsolete, use MCDS_TCY_EVT13 instead.
 * 4834, Event Definition Register
 */
#define MCDS_TCYEVT13 (MCDS_TCY_EVT13)

/** Alias for MCDS_TCY_EVT14.
 *  Note that this definition is obsolete, use MCDS_TCY_EVT14 instead.
 * 4838, Event Definition Register
 */
#define MCDS_TCYEVT14 (MCDS_TCY_EVT14)

/** Alias for MCDS_TCY_EVT15.
 *  Note that this definition is obsolete, use MCDS_TCY_EVT15 instead.
 * 483C, Event Definition Register
 */
#define MCDS_TCYEVT15 (MCDS_TCY_EVT15)

/** Alias for MCDS_TCY_EVT2.
 *  Note that this definition is obsolete, use MCDS_TCY_EVT2 instead.
 * 4808, Event Definition Register
 */
#define MCDS_TCYEVT2 (MCDS_TCY_EVT2)

/** Alias for MCDS_TCY_EVT3.
 *  Note that this definition is obsolete, use MCDS_TCY_EVT3 instead.
 * 480C, Event Definition Register
 */
#define MCDS_TCYEVT3 (MCDS_TCY_EVT3)

/** Alias for MCDS_TCY_EVT4.
 *  Note that this definition is obsolete, use MCDS_TCY_EVT4 instead.
 * 4810, Event Definition Register
 */
#define MCDS_TCYEVT4 (MCDS_TCY_EVT4)

/** Alias for MCDS_TCY_EVT5.
 *  Note that this definition is obsolete, use MCDS_TCY_EVT5 instead.
 * 4814, Event Definition Register
 */
#define MCDS_TCYEVT5 (MCDS_TCY_EVT5)

/** Alias for MCDS_TCY_EVT6.
 *  Note that this definition is obsolete, use MCDS_TCY_EVT6 instead.
 * 4818, Event Definition Register
 */
#define MCDS_TCYEVT6 (MCDS_TCY_EVT6)

/** Alias for MCDS_TCY_EVT7.
 *  Note that this definition is obsolete, use MCDS_TCY_EVT7 instead.
 * 481C, Event Definition Register
 */
#define MCDS_TCYEVT7 (MCDS_TCY_EVT7)

/** Alias for MCDS_TCY_EVT8.
 *  Note that this definition is obsolete, use MCDS_TCY_EVT8 instead.
 * 4820, Event Definition Register
 */
#define MCDS_TCYEVT8 (MCDS_TCY_EVT8)

/** Alias for MCDS_TCY_EVT9.
 *  Note that this definition is obsolete, use MCDS_TCY_EVT9 instead.
 * 4824, Event Definition Register
 */
#define MCDS_TCYEVT9 (MCDS_TCY_EVT9)

/** Alias for MCDS_TCY_ID0_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_ID0_BND instead.
 * 4C00, Comparator Bound Register
 */
#define MCDS_TCYID0_BND (MCDS_TCY_ID0_BND)

/** Alias for MCDS_TCY_ID0_MSK.
 *  Note that this definition is obsolete, use MCDS_TCY_ID0_MSK instead.
 * 4C08, Comparator Mask Register
 */
#define MCDS_TCYID0_MSK (MCDS_TCY_ID0_MSK)

/** Alias for MCDS_TCY_ID0_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_ID0_RNG instead.
 * 4C04, Comparator Range Register
 */
#define MCDS_TCYID0_RNG (MCDS_TCY_ID0_RNG)

/** Alias for MCDS_TCY_ID0_SGN.
 *  Note that this definition is obsolete, use MCDS_TCY_ID0_SGN instead.
 * 4C0C, Comparator Sign Register
 */
#define MCDS_TCYID0_SGN (MCDS_TCY_ID0_SGN)

/** Alias for MCDS_TCY_ID1_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_ID1_BND instead.
 * 4C10, Comparator Bound Register
 */
#define MCDS_TCYID1_BND (MCDS_TCY_ID1_BND)

/** Alias for MCDS_TCY_ID1_MSK.
 *  Note that this definition is obsolete, use MCDS_TCY_ID1_MSK instead.
 * 4C18, Comparator Mask Register
 */
#define MCDS_TCYID1_MSK (MCDS_TCY_ID1_MSK)

/** Alias for MCDS_TCY_ID1_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_ID1_RNG instead.
 * 4C14, Comparator Range Register
 */
#define MCDS_TCYID1_RNG (MCDS_TCY_ID1_RNG)

/** Alias for MCDS_TCY_ID1_SGN.
 *  Note that this definition is obsolete, use MCDS_TCY_ID1_SGN instead.
 * 4C1C, Comparator Sign Register
 */
#define MCDS_TCYID1_SGN (MCDS_TCY_ID1_SGN)

/** Alias for MCDS_TCY_IP0_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_IP0_BND instead.
 * 5000, Comparator Bound Register
 */
#define MCDS_TCYIP0_BND (MCDS_TCY_IP0_BND)

/** Alias for MCDS_TCY_IP0_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_IP0_RNG instead.
 * 5004, Comparator Range Register
 */
#define MCDS_TCYIP0_RNG (MCDS_TCY_IP0_RNG)

/** Alias for MCDS_TCY_IP1_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_IP1_BND instead.
 * 5010, Comparator Bound Register
 */
#define MCDS_TCYIP1_BND (MCDS_TCY_IP1_BND)

/** Alias for MCDS_TCY_IP1_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_IP1_RNG instead.
 * 5014, Comparator Range Register
 */
#define MCDS_TCYIP1_RNG (MCDS_TCY_IP1_RNG)

/** Alias for MCDS_TCY_IP2_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_IP2_BND instead.
 * 5020, Comparator Bound Register
 */
#define MCDS_TCYIP2_BND (MCDS_TCY_IP2_BND)

/** Alias for MCDS_TCY_IP2_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_IP2_RNG instead.
 * 5024, Comparator Range Register
 */
#define MCDS_TCYIP2_RNG (MCDS_TCY_IP2_RNG)

/** Alias for MCDS_TCY_IP3_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_IP3_BND instead.
 * 5030, Comparator Bound Register
 */
#define MCDS_TCYIP3_BND (MCDS_TCY_IP3_BND)

/** Alias for MCDS_TCY_IP3_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_IP3_RNG instead.
 * 5034, Comparator Range Register
 */
#define MCDS_TCYIP3_RNG (MCDS_TCY_IP3_RNG)

/** Alias for MCDS_TCY_IP4_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_IP4_BND instead.
 * 5040, Comparator Bound Register
 */
#define MCDS_TCYIP4_BND (MCDS_TCY_IP4_BND)

/** Alias for MCDS_TCY_IP4_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_IP4_RNG instead.
 * 5044, Comparator Range Register
 */
#define MCDS_TCYIP4_RNG (MCDS_TCY_IP4_RNG)

/** Alias for MCDS_TCY_IP5_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_IP5_BND instead.
 * 5050, Comparator Bound Register
 */
#define MCDS_TCYIP5_BND (MCDS_TCY_IP5_BND)

/** Alias for MCDS_TCY_IP5_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_IP5_RNG instead.
 * 5054, Comparator Range Register
 */
#define MCDS_TCYIP5_RNG (MCDS_TCY_IP5_RNG)

/** Alias for MCDS_TCY_PAL0_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_PAL0_BND instead.
 * 4210, Lookup Table Base Register
 */
#define MCDS_TCYPAL0_BND (MCDS_TCY_PAL0_BND)

/** Alias for MCDS_TCY_PAL0_MAP.
 *  Note that this definition is obsolete, use MCDS_TCY_PAL0_MAP instead.
 * 4218, Lookup Table Mapping Register
 */
#define MCDS_TCYPAL0_MAP (MCDS_TCY_PAL0_MAP)

/** Alias for MCDS_TCY_PAL0_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_PAL0_RNG instead.
 * 4214, Lookup Table Range Register
 */
#define MCDS_TCYPAL0_RNG (MCDS_TCY_PAL0_RNG)

/** Alias for MCDS_TCY_PAL1_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_PAL1_BND instead.
 * 4220, Lookup Table Base Register
 */
#define MCDS_TCYPAL1_BND (MCDS_TCY_PAL1_BND)

/** Alias for MCDS_TCY_PAL1_MAP.
 *  Note that this definition is obsolete, use MCDS_TCY_PAL1_MAP instead.
 * 4228, Lookup Table Mapping Register
 */
#define MCDS_TCYPAL1_MAP (MCDS_TCY_PAL1_MAP)

/** Alias for MCDS_TCY_PAL1_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_PAL1_RNG instead.
 * 4224, Lookup Table Range Register
 */
#define MCDS_TCYPAL1_RNG (MCDS_TCY_PAL1_RNG)

/** Alias for MCDS_TCY_PAL2_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_PAL2_BND instead.
 * 4230, Lookup Table Base Register
 */
#define MCDS_TCYPAL2_BND (MCDS_TCY_PAL2_BND)

/** Alias for MCDS_TCY_PAL2_MAP.
 *  Note that this definition is obsolete, use MCDS_TCY_PAL2_MAP instead.
 * 4238, Lookup Table Mapping Register
 */
#define MCDS_TCYPAL2_MAP (MCDS_TCY_PAL2_MAP)

/** Alias for MCDS_TCY_PAL2_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_PAL2_RNG instead.
 * 4234, Lookup Table Range Register
 */
#define MCDS_TCYPAL2_RNG (MCDS_TCY_PAL2_RNG)

/** Alias for MCDS_TCY_PAL3_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_PAL3_BND instead.
 * 4240, Lookup Table Base Register
 */
#define MCDS_TCYPAL3_BND (MCDS_TCY_PAL3_BND)

/** Alias for MCDS_TCY_PAL3_MAP.
 *  Note that this definition is obsolete, use MCDS_TCY_PAL3_MAP instead.
 * 4248, Lookup Table Mapping Register
 */
#define MCDS_TCYPAL3_MAP (MCDS_TCY_PAL3_MAP)

/** Alias for MCDS_TCY_PAL3_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_PAL3_RNG instead.
 * 4244, Lookup Table Range Register
 */
#define MCDS_TCYPAL3_RNG (MCDS_TCY_PAL3_RNG)

/** Alias for MCDS_TCY_PALLU_TA.
 *  Note that this definition is obsolete, use MCDS_TCY_PALLU_TA instead.
 * 4204, Lookup Table Address Register
 */
#define MCDS_TCYPALLU_TA (MCDS_TCY_PALLU_TA)

/** Alias for MCDS_TCY_PALLU_TD.
 *  Note that this definition is obsolete, use MCDS_TCY_PALLU_TD instead.
 * 4200, Lookup Table Data Register
 */
#define MCDS_TCYPALLU_TD (MCDS_TCY_PALLU_TD)

/** Alias for MCDS_TCY_WD0_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_WD0_BND instead.
 * 4480, Comparator Bound Register
 */
#define MCDS_TCYWD0_BND (MCDS_TCY_WD0_BND)

/** Alias for MCDS_TCY_WD0_HBND.
 *  Note that this definition is obsolete, use MCDS_TCY_WD0_HBND instead.
 * 4484, Comparator Bound Register
 */
#define MCDS_TCYWD0_HBND (MCDS_TCY_WD0_HBND)

/** Alias for MCDS_TCY_WD0_HMSK.
 *  Note that this definition is obsolete, use MCDS_TCY_WD0_HMSK instead.
 * 4494, Comparator Mask Register
 */
#define MCDS_TCYWD0_HMSK (MCDS_TCY_WD0_HMSK)

/** Alias for MCDS_TCY_WD0_HRNG.
 *  Note that this definition is obsolete, use MCDS_TCY_WD0_HRNG instead.
 * 448C, Comparator Range Register
 */
#define MCDS_TCYWD0_HRNG (MCDS_TCY_WD0_HRNG)

/** Alias for MCDS_TCY_WD0_MSK.
 *  Note that this definition is obsolete, use MCDS_TCY_WD0_MSK instead.
 * 4490, Comparator Mask Register
 */
#define MCDS_TCYWD0_MSK (MCDS_TCY_WD0_MSK)

/** Alias for MCDS_TCY_WD0_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_WD0_RNG instead.
 * 4488, Comparator Range Register
 */
#define MCDS_TCYWD0_RNG (MCDS_TCY_WD0_RNG)

/** Alias for MCDS_TCY_WD0_SGN.
 *  Note that this definition is obsolete, use MCDS_TCY_WD0_SGN instead.
 * 449C, Comparator Sign Register
 */
#define MCDS_TCYWD0_SGN (MCDS_TCY_WD0_SGN)

/** Alias for MCDS_TCY_WD1_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_WD1_BND instead.
 * 44A0, Comparator Bound Register
 */
#define MCDS_TCYWD1_BND (MCDS_TCY_WD1_BND)

/** Alias for MCDS_TCY_WD1_HBND.
 *  Note that this definition is obsolete, use MCDS_TCY_WD1_HBND instead.
 * 44A4, Comparator Bound Register
 */
#define MCDS_TCYWD1_HBND (MCDS_TCY_WD1_HBND)

/** Alias for MCDS_TCY_WD1_HMSK.
 *  Note that this definition is obsolete, use MCDS_TCY_WD1_HMSK instead.
 * 44B4, Comparator Mask Register
 */
#define MCDS_TCYWD1_HMSK (MCDS_TCY_WD1_HMSK)

/** Alias for MCDS_TCY_WD1_HRNG.
 *  Note that this definition is obsolete, use MCDS_TCY_WD1_HRNG instead.
 * 44AC, Comparator Range Register
 */
#define MCDS_TCYWD1_HRNG (MCDS_TCY_WD1_HRNG)

/** Alias for MCDS_TCY_WD1_MSK.
 *  Note that this definition is obsolete, use MCDS_TCY_WD1_MSK instead.
 * 44B0, Comparator Mask Register
 */
#define MCDS_TCYWD1_MSK (MCDS_TCY_WD1_MSK)

/** Alias for MCDS_TCY_WD1_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_WD1_RNG instead.
 * 44A8, Comparator Range Register
 */
#define MCDS_TCYWD1_RNG (MCDS_TCY_WD1_RNG)

/** Alias for MCDS_TCY_WD1_SGN.
 *  Note that this definition is obsolete, use MCDS_TCY_WD1_SGN instead.
 * 44BC, Comparator Sign Register
 */
#define MCDS_TCYWD1_SGN (MCDS_TCY_WD1_SGN)

/** Alias for MCDS_TCY_WD2_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_WD2_BND instead.
 * 44C0, Comparator Bound Register
 */
#define MCDS_TCYWD2_BND (MCDS_TCY_WD2_BND)

/** Alias for MCDS_TCY_WD2_HBND.
 *  Note that this definition is obsolete, use MCDS_TCY_WD2_HBND instead.
 * 44C4, Comparator Bound Register
 */
#define MCDS_TCYWD2_HBND (MCDS_TCY_WD2_HBND)

/** Alias for MCDS_TCY_WD2_HMSK.
 *  Note that this definition is obsolete, use MCDS_TCY_WD2_HMSK instead.
 * 44D4, Comparator Mask Register
 */
#define MCDS_TCYWD2_HMSK (MCDS_TCY_WD2_HMSK)

/** Alias for MCDS_TCY_WD2_HRNG.
 *  Note that this definition is obsolete, use MCDS_TCY_WD2_HRNG instead.
 * 44CC, Comparator Range Register
 */
#define MCDS_TCYWD2_HRNG (MCDS_TCY_WD2_HRNG)

/** Alias for MCDS_TCY_WD2_MSK.
 *  Note that this definition is obsolete, use MCDS_TCY_WD2_MSK instead.
 * 44D0, Comparator Mask Register
 */
#define MCDS_TCYWD2_MSK (MCDS_TCY_WD2_MSK)

/** Alias for MCDS_TCY_WD2_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_WD2_RNG instead.
 * 44C8, Comparator Range Register
 */
#define MCDS_TCYWD2_RNG (MCDS_TCY_WD2_RNG)

/** Alias for MCDS_TCY_WD2_SGN.
 *  Note that this definition is obsolete, use MCDS_TCY_WD2_SGN instead.
 * 44DC, Comparator Sign Register
 */
#define MCDS_TCYWD2_SGN (MCDS_TCY_WD2_SGN)

/** Alias for MCDS_TCY_WD3_BND.
 *  Note that this definition is obsolete, use MCDS_TCY_WD3_BND instead.
 * 44E0, Comparator Bound Register
 */
#define MCDS_TCYWD3_BND (MCDS_TCY_WD3_BND)

/** Alias for MCDS_TCY_WD3_HBND.
 *  Note that this definition is obsolete, use MCDS_TCY_WD3_HBND instead.
 * 44E4, Comparator Bound Register
 */
#define MCDS_TCYWD3_HBND (MCDS_TCY_WD3_HBND)

/** Alias for MCDS_TCY_WD3_HMSK.
 *  Note that this definition is obsolete, use MCDS_TCY_WD3_HMSK instead.
 * 44F4, Comparator Mask Register
 */
#define MCDS_TCYWD3_HMSK (MCDS_TCY_WD3_HMSK)

/** Alias for MCDS_TCY_WD3_HRNG.
 *  Note that this definition is obsolete, use MCDS_TCY_WD3_HRNG instead.
 * 44EC, Comparator Range Register
 */
#define MCDS_TCYWD3_HRNG (MCDS_TCY_WD3_HRNG)

/** Alias for MCDS_TCY_WD3_MSK.
 *  Note that this definition is obsolete, use MCDS_TCY_WD3_MSK instead.
 * 44F0, Comparator Mask Register
 */
#define MCDS_TCYWD3_MSK (MCDS_TCY_WD3_MSK)

/** Alias for MCDS_TCY_WD3_RNG.
 *  Note that this definition is obsolete, use MCDS_TCY_WD3_RNG instead.
 * 44E8, Comparator Range Register
 */
#define MCDS_TCYWD3_RNG (MCDS_TCY_WD3_RNG)

/** Alias for MCDS_TCY_WD3_SGN.
 *  Note that this definition is obsolete, use MCDS_TCY_WD3_SGN instead.
 * 44FC, Comparator Sign Register
 */
#define MCDS_TCYWD3_SGN (MCDS_TCY_WD3_SGN)

/** 408, Clock Counter Register */
#define MCDS_TSUEMUCNT ((*(volatile Ifx_MCDS_TSUEMUCNT*)0xF00E8408u)) /* lint --e(923)*/

/** 404, Clock Prescaler Register */
#define MCDS_TSUPRSCL ((*(volatile Ifx_MCDS_TSUPRSCL*)0xF00E8404u)) /* lint --e(923)*/

/** 400, Clock Counter Register */
#define MCDS_TSUREFCNT ((*(volatile Ifx_MCDS_TSUREFCNT*)0xF00E8400u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXMCDS_REG_H */

