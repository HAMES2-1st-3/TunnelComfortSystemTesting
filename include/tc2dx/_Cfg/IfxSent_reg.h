/**
 * \file IfxSent_reg.h
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
#ifndef IFXSENT_REG_H
#define IFXSENT_REG_H
/******************************************************************************/
#include "Sent/IfxSent_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** SENT object */
#define MODULE_SENT ((*(Ifx_SENT*)0xF0003000u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-SENT)                               */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define SENT_ACCEN0 ((*(volatile Ifx_SENT_ACCEN0*)0xF00030FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define SENT_ACCEN1 ((*(volatile Ifx_SENT_ACCEN1*)0xF00030F8u)) /* lint --e(923)*/

/** Alias for SENT_CH0_CFDR.
 *  Note that this definition is obsolete, use SENT_CH0_CFDR instead.
 * 104, Channel Fractional Divider Register
 */
#define SENT_CFDR0 (SENT_CH0_CFDR)

/** Alias for SENT_CH1_CFDR.
 *  Note that this definition is obsolete, use SENT_CH1_CFDR instead.
 * 144, Channel Fractional Divider Register
 */
#define SENT_CFDR1 (SENT_CH1_CFDR)

/** Alias for SENT_CH2_CFDR.
 *  Note that this definition is obsolete, use SENT_CH2_CFDR instead.
 * 184, Channel Fractional Divider Register
 */
#define SENT_CFDR2 (SENT_CH2_CFDR)

/** Alias for SENT_CH3_CFDR.
 *  Note that this definition is obsolete, use SENT_CH3_CFDR instead.
 * 1C4, Channel Fractional Divider Register
 */
#define SENT_CFDR3 (SENT_CH3_CFDR)

/** Alias for SENT_CH4_CFDR.
 *  Note that this definition is obsolete, use SENT_CH4_CFDR instead.
 * 204, Channel Fractional Divider Register
 */
#define SENT_CFDR4 (SENT_CH4_CFDR)

/** Alias for SENT_CH5_CFDR.
 *  Note that this definition is obsolete, use SENT_CH5_CFDR instead.
 * 244, Channel Fractional Divider Register
 */
#define SENT_CFDR5 (SENT_CH5_CFDR)

/** Alias for SENT_CH6_CFDR.
 *  Note that this definition is obsolete, use SENT_CH6_CFDR instead.
 * 284, Channel Fractional Divider Register
 */
#define SENT_CFDR6 (SENT_CH6_CFDR)

/** Alias for SENT_CH7_CFDR.
 *  Note that this definition is obsolete, use SENT_CH7_CFDR instead.
 * 2C4, Channel Fractional Divider Register
 */
#define SENT_CFDR7 (SENT_CH7_CFDR)

/** Alias for SENT_CH8_CFDR.
 *  Note that this definition is obsolete, use SENT_CH8_CFDR instead.
 * 304, Channel Fractional Divider Register
 */
#define SENT_CFDR8 (SENT_CH8_CFDR)

/** Alias for SENT_CH9_CFDR.
 *  Note that this definition is obsolete, use SENT_CH9_CFDR instead.
 * 344, Channel Fractional Divider Register
 */
#define SENT_CFDR9 (SENT_CH9_CFDR)

/** 104, Channel Fractional Divider Register */
#define SENT_CH0_CFDR ((*(volatile Ifx_SENT_CH_CFDR*)0xF0003104u)) /* lint --e(923)*/

/** 100, Channel Pre Divider Register */
#define SENT_CH0_CPDR ((*(volatile Ifx_SENT_CH_CPDR*)0xF0003100u)) /* lint --e(923)*/

/** 130, Interrupt Node Pointer Register */
#define SENT_CH0_INP ((*(volatile Ifx_SENT_CH_INP*)0xF0003130u)) /* lint --e(923)*/

/** 128, Interrupt Clear Register */
#define SENT_CH0_INTCLR ((*(volatile Ifx_SENT_CH_INTCLR*)0xF0003128u)) /* lint --e(923)*/

/** 12C, Interrupt Enable Register */
#define SENT_CH0_INTEN ((*(volatile Ifx_SENT_CH_INTEN*)0xF000312Cu)) /* lint --e(923)*/

/** 124, Interrupt Set Register */
#define SENT_CH0_INTSET ((*(volatile Ifx_SENT_CH_INTSET*)0xF0003124u)) /* lint --e(923)*/

/** 120, Interrupt Status Register */
#define SENT_CH0_INTSTAT ((*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003120u)) /* lint --e(923)*/

/** 114, Input and Output Control Register */
#define SENT_CH0_IOCR ((*(volatile Ifx_SENT_CH_IOCR*)0xF0003114u)) /* lint --e(923)*/

/** 108, Receiver Control Register */
#define SENT_CH0_RCR ((*(volatile Ifx_SENT_CH_RCR*)0xF0003108u)) /* lint --e(923)*/

/** 10C, Receive Status Register */
#define SENT_CH0_RSR ((*(volatile Ifx_SENT_CH_RSR*)0xF000310Cu)) /* lint --e(923)*/

/** 118, SPC Control Register */
#define SENT_CH0_SCR ((*(volatile Ifx_SENT_CH_SCR*)0xF0003118u)) /* lint --e(923)*/

/** 110, Serial Data and Status Register */
#define SENT_CH0_SDS ((*(volatile Ifx_SENT_CH_SDS*)0xF0003110u)) /* lint --e(923)*/

/** 11C, Receive Data View Register */
#define SENT_CH0_VIEW ((*(volatile Ifx_SENT_CH_VIEW*)0xF000311Cu)) /* lint --e(923)*/

/** 134, Watch Dog Timer Register */
#define SENT_CH0_WDT ((*(volatile Ifx_SENT_CH_WDT*)0xF0003134u)) /* lint --e(923)*/

/** 144, Channel Fractional Divider Register */
#define SENT_CH1_CFDR ((*(volatile Ifx_SENT_CH_CFDR*)0xF0003144u)) /* lint --e(923)*/

/** 140, Channel Pre Divider Register */
#define SENT_CH1_CPDR ((*(volatile Ifx_SENT_CH_CPDR*)0xF0003140u)) /* lint --e(923)*/

/** 170, Interrupt Node Pointer Register */
#define SENT_CH1_INP ((*(volatile Ifx_SENT_CH_INP*)0xF0003170u)) /* lint --e(923)*/

/** 168, Interrupt Clear Register */
#define SENT_CH1_INTCLR ((*(volatile Ifx_SENT_CH_INTCLR*)0xF0003168u)) /* lint --e(923)*/

/** 16C, Interrupt Enable Register */
#define SENT_CH1_INTEN ((*(volatile Ifx_SENT_CH_INTEN*)0xF000316Cu)) /* lint --e(923)*/

/** 164, Interrupt Set Register */
#define SENT_CH1_INTSET ((*(volatile Ifx_SENT_CH_INTSET*)0xF0003164u)) /* lint --e(923)*/

/** 160, Interrupt Status Register */
#define SENT_CH1_INTSTAT ((*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003160u)) /* lint --e(923)*/

/** 154, Input and Output Control Register */
#define SENT_CH1_IOCR ((*(volatile Ifx_SENT_CH_IOCR*)0xF0003154u)) /* lint --e(923)*/

/** 148, Receiver Control Register */
#define SENT_CH1_RCR ((*(volatile Ifx_SENT_CH_RCR*)0xF0003148u)) /* lint --e(923)*/

/** 14C, Receive Status Register */
#define SENT_CH1_RSR ((*(volatile Ifx_SENT_CH_RSR*)0xF000314Cu)) /* lint --e(923)*/

/** 158, SPC Control Register */
#define SENT_CH1_SCR ((*(volatile Ifx_SENT_CH_SCR*)0xF0003158u)) /* lint --e(923)*/

/** 150, Serial Data and Status Register */
#define SENT_CH1_SDS ((*(volatile Ifx_SENT_CH_SDS*)0xF0003150u)) /* lint --e(923)*/

/** 15C, Receive Data View Register */
#define SENT_CH1_VIEW ((*(volatile Ifx_SENT_CH_VIEW*)0xF000315Cu)) /* lint --e(923)*/

/** 174, Watch Dog Timer Register */
#define SENT_CH1_WDT ((*(volatile Ifx_SENT_CH_WDT*)0xF0003174u)) /* lint --e(923)*/

/** 184, Channel Fractional Divider Register */
#define SENT_CH2_CFDR ((*(volatile Ifx_SENT_CH_CFDR*)0xF0003184u)) /* lint --e(923)*/

/** 180, Channel Pre Divider Register */
#define SENT_CH2_CPDR ((*(volatile Ifx_SENT_CH_CPDR*)0xF0003180u)) /* lint --e(923)*/

/** 1B0, Interrupt Node Pointer Register */
#define SENT_CH2_INP ((*(volatile Ifx_SENT_CH_INP*)0xF00031B0u)) /* lint --e(923)*/

/** 1A8, Interrupt Clear Register */
#define SENT_CH2_INTCLR ((*(volatile Ifx_SENT_CH_INTCLR*)0xF00031A8u)) /* lint --e(923)*/

/** 1AC, Interrupt Enable Register */
#define SENT_CH2_INTEN ((*(volatile Ifx_SENT_CH_INTEN*)0xF00031ACu)) /* lint --e(923)*/

/** 1A4, Interrupt Set Register */
#define SENT_CH2_INTSET ((*(volatile Ifx_SENT_CH_INTSET*)0xF00031A4u)) /* lint --e(923)*/

/** 1A0, Interrupt Status Register */
#define SENT_CH2_INTSTAT ((*(volatile Ifx_SENT_CH_INTSTAT*)0xF00031A0u)) /* lint --e(923)*/

/** 194, Input and Output Control Register */
#define SENT_CH2_IOCR ((*(volatile Ifx_SENT_CH_IOCR*)0xF0003194u)) /* lint --e(923)*/

/** 188, Receiver Control Register */
#define SENT_CH2_RCR ((*(volatile Ifx_SENT_CH_RCR*)0xF0003188u)) /* lint --e(923)*/

/** 18C, Receive Status Register */
#define SENT_CH2_RSR ((*(volatile Ifx_SENT_CH_RSR*)0xF000318Cu)) /* lint --e(923)*/

/** 198, SPC Control Register */
#define SENT_CH2_SCR ((*(volatile Ifx_SENT_CH_SCR*)0xF0003198u)) /* lint --e(923)*/

/** 190, Serial Data and Status Register */
#define SENT_CH2_SDS ((*(volatile Ifx_SENT_CH_SDS*)0xF0003190u)) /* lint --e(923)*/

/** 19C, Receive Data View Register */
#define SENT_CH2_VIEW ((*(volatile Ifx_SENT_CH_VIEW*)0xF000319Cu)) /* lint --e(923)*/

/** 1B4, Watch Dog Timer Register */
#define SENT_CH2_WDT ((*(volatile Ifx_SENT_CH_WDT*)0xF00031B4u)) /* lint --e(923)*/

/** 1C4, Channel Fractional Divider Register */
#define SENT_CH3_CFDR ((*(volatile Ifx_SENT_CH_CFDR*)0xF00031C4u)) /* lint --e(923)*/

/** 1C0, Channel Pre Divider Register */
#define SENT_CH3_CPDR ((*(volatile Ifx_SENT_CH_CPDR*)0xF00031C0u)) /* lint --e(923)*/

/** 1F0, Interrupt Node Pointer Register */
#define SENT_CH3_INP ((*(volatile Ifx_SENT_CH_INP*)0xF00031F0u)) /* lint --e(923)*/

/** 1E8, Interrupt Clear Register */
#define SENT_CH3_INTCLR ((*(volatile Ifx_SENT_CH_INTCLR*)0xF00031E8u)) /* lint --e(923)*/

/** 1EC, Interrupt Enable Register */
#define SENT_CH3_INTEN ((*(volatile Ifx_SENT_CH_INTEN*)0xF00031ECu)) /* lint --e(923)*/

/** 1E4, Interrupt Set Register */
#define SENT_CH3_INTSET ((*(volatile Ifx_SENT_CH_INTSET*)0xF00031E4u)) /* lint --e(923)*/

/** 1E0, Interrupt Status Register */
#define SENT_CH3_INTSTAT ((*(volatile Ifx_SENT_CH_INTSTAT*)0xF00031E0u)) /* lint --e(923)*/

/** 1D4, Input and Output Control Register */
#define SENT_CH3_IOCR ((*(volatile Ifx_SENT_CH_IOCR*)0xF00031D4u)) /* lint --e(923)*/

/** 1C8, Receiver Control Register */
#define SENT_CH3_RCR ((*(volatile Ifx_SENT_CH_RCR*)0xF00031C8u)) /* lint --e(923)*/

/** 1CC, Receive Status Register */
#define SENT_CH3_RSR ((*(volatile Ifx_SENT_CH_RSR*)0xF00031CCu)) /* lint --e(923)*/

/** 1D8, SPC Control Register */
#define SENT_CH3_SCR ((*(volatile Ifx_SENT_CH_SCR*)0xF00031D8u)) /* lint --e(923)*/

/** 1D0, Serial Data and Status Register */
#define SENT_CH3_SDS ((*(volatile Ifx_SENT_CH_SDS*)0xF00031D0u)) /* lint --e(923)*/

/** 1DC, Receive Data View Register */
#define SENT_CH3_VIEW ((*(volatile Ifx_SENT_CH_VIEW*)0xF00031DCu)) /* lint --e(923)*/

/** 1F4, Watch Dog Timer Register */
#define SENT_CH3_WDT ((*(volatile Ifx_SENT_CH_WDT*)0xF00031F4u)) /* lint --e(923)*/

/** 204, Channel Fractional Divider Register */
#define SENT_CH4_CFDR ((*(volatile Ifx_SENT_CH_CFDR*)0xF0003204u)) /* lint --e(923)*/

/** 200, Channel Pre Divider Register */
#define SENT_CH4_CPDR ((*(volatile Ifx_SENT_CH_CPDR*)0xF0003200u)) /* lint --e(923)*/

/** 230, Interrupt Node Pointer Register */
#define SENT_CH4_INP ((*(volatile Ifx_SENT_CH_INP*)0xF0003230u)) /* lint --e(923)*/

/** 228, Interrupt Clear Register */
#define SENT_CH4_INTCLR ((*(volatile Ifx_SENT_CH_INTCLR*)0xF0003228u)) /* lint --e(923)*/

/** 22C, Interrupt Enable Register */
#define SENT_CH4_INTEN ((*(volatile Ifx_SENT_CH_INTEN*)0xF000322Cu)) /* lint --e(923)*/

/** 224, Interrupt Set Register */
#define SENT_CH4_INTSET ((*(volatile Ifx_SENT_CH_INTSET*)0xF0003224u)) /* lint --e(923)*/

/** 220, Interrupt Status Register */
#define SENT_CH4_INTSTAT ((*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003220u)) /* lint --e(923)*/

/** 214, Input and Output Control Register */
#define SENT_CH4_IOCR ((*(volatile Ifx_SENT_CH_IOCR*)0xF0003214u)) /* lint --e(923)*/

/** 208, Receiver Control Register */
#define SENT_CH4_RCR ((*(volatile Ifx_SENT_CH_RCR*)0xF0003208u)) /* lint --e(923)*/

/** 20C, Receive Status Register */
#define SENT_CH4_RSR ((*(volatile Ifx_SENT_CH_RSR*)0xF000320Cu)) /* lint --e(923)*/

/** 218, SPC Control Register */
#define SENT_CH4_SCR ((*(volatile Ifx_SENT_CH_SCR*)0xF0003218u)) /* lint --e(923)*/

/** 210, Serial Data and Status Register */
#define SENT_CH4_SDS ((*(volatile Ifx_SENT_CH_SDS*)0xF0003210u)) /* lint --e(923)*/

/** 21C, Receive Data View Register */
#define SENT_CH4_VIEW ((*(volatile Ifx_SENT_CH_VIEW*)0xF000321Cu)) /* lint --e(923)*/

/** 234, Watch Dog Timer Register */
#define SENT_CH4_WDT ((*(volatile Ifx_SENT_CH_WDT*)0xF0003234u)) /* lint --e(923)*/

/** 244, Channel Fractional Divider Register */
#define SENT_CH5_CFDR ((*(volatile Ifx_SENT_CH_CFDR*)0xF0003244u)) /* lint --e(923)*/

/** 240, Channel Pre Divider Register */
#define SENT_CH5_CPDR ((*(volatile Ifx_SENT_CH_CPDR*)0xF0003240u)) /* lint --e(923)*/

/** 270, Interrupt Node Pointer Register */
#define SENT_CH5_INP ((*(volatile Ifx_SENT_CH_INP*)0xF0003270u)) /* lint --e(923)*/

/** 268, Interrupt Clear Register */
#define SENT_CH5_INTCLR ((*(volatile Ifx_SENT_CH_INTCLR*)0xF0003268u)) /* lint --e(923)*/

/** 26C, Interrupt Enable Register */
#define SENT_CH5_INTEN ((*(volatile Ifx_SENT_CH_INTEN*)0xF000326Cu)) /* lint --e(923)*/

/** 264, Interrupt Set Register */
#define SENT_CH5_INTSET ((*(volatile Ifx_SENT_CH_INTSET*)0xF0003264u)) /* lint --e(923)*/

/** 260, Interrupt Status Register */
#define SENT_CH5_INTSTAT ((*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003260u)) /* lint --e(923)*/

/** 254, Input and Output Control Register */
#define SENT_CH5_IOCR ((*(volatile Ifx_SENT_CH_IOCR*)0xF0003254u)) /* lint --e(923)*/

/** 248, Receiver Control Register */
#define SENT_CH5_RCR ((*(volatile Ifx_SENT_CH_RCR*)0xF0003248u)) /* lint --e(923)*/

/** 24C, Receive Status Register */
#define SENT_CH5_RSR ((*(volatile Ifx_SENT_CH_RSR*)0xF000324Cu)) /* lint --e(923)*/

/** 258, SPC Control Register */
#define SENT_CH5_SCR ((*(volatile Ifx_SENT_CH_SCR*)0xF0003258u)) /* lint --e(923)*/

/** 250, Serial Data and Status Register */
#define SENT_CH5_SDS ((*(volatile Ifx_SENT_CH_SDS*)0xF0003250u)) /* lint --e(923)*/

/** 25C, Receive Data View Register */
#define SENT_CH5_VIEW ((*(volatile Ifx_SENT_CH_VIEW*)0xF000325Cu)) /* lint --e(923)*/

/** 274, Watch Dog Timer Register */
#define SENT_CH5_WDT ((*(volatile Ifx_SENT_CH_WDT*)0xF0003274u)) /* lint --e(923)*/

/** 284, Channel Fractional Divider Register */
#define SENT_CH6_CFDR ((*(volatile Ifx_SENT_CH_CFDR*)0xF0003284u)) /* lint --e(923)*/

/** 280, Channel Pre Divider Register */
#define SENT_CH6_CPDR ((*(volatile Ifx_SENT_CH_CPDR*)0xF0003280u)) /* lint --e(923)*/

/** 2B0, Interrupt Node Pointer Register */
#define SENT_CH6_INP ((*(volatile Ifx_SENT_CH_INP*)0xF00032B0u)) /* lint --e(923)*/

/** 2A8, Interrupt Clear Register */
#define SENT_CH6_INTCLR ((*(volatile Ifx_SENT_CH_INTCLR*)0xF00032A8u)) /* lint --e(923)*/

/** 2AC, Interrupt Enable Register */
#define SENT_CH6_INTEN ((*(volatile Ifx_SENT_CH_INTEN*)0xF00032ACu)) /* lint --e(923)*/

/** 2A4, Interrupt Set Register */
#define SENT_CH6_INTSET ((*(volatile Ifx_SENT_CH_INTSET*)0xF00032A4u)) /* lint --e(923)*/

/** 2A0, Interrupt Status Register */
#define SENT_CH6_INTSTAT ((*(volatile Ifx_SENT_CH_INTSTAT*)0xF00032A0u)) /* lint --e(923)*/

/** 294, Input and Output Control Register */
#define SENT_CH6_IOCR ((*(volatile Ifx_SENT_CH_IOCR*)0xF0003294u)) /* lint --e(923)*/

/** 288, Receiver Control Register */
#define SENT_CH6_RCR ((*(volatile Ifx_SENT_CH_RCR*)0xF0003288u)) /* lint --e(923)*/

/** 28C, Receive Status Register */
#define SENT_CH6_RSR ((*(volatile Ifx_SENT_CH_RSR*)0xF000328Cu)) /* lint --e(923)*/

/** 298, SPC Control Register */
#define SENT_CH6_SCR ((*(volatile Ifx_SENT_CH_SCR*)0xF0003298u)) /* lint --e(923)*/

/** 290, Serial Data and Status Register */
#define SENT_CH6_SDS ((*(volatile Ifx_SENT_CH_SDS*)0xF0003290u)) /* lint --e(923)*/

/** 29C, Receive Data View Register */
#define SENT_CH6_VIEW ((*(volatile Ifx_SENT_CH_VIEW*)0xF000329Cu)) /* lint --e(923)*/

/** 2B4, Watch Dog Timer Register */
#define SENT_CH6_WDT ((*(volatile Ifx_SENT_CH_WDT*)0xF00032B4u)) /* lint --e(923)*/

/** 2C4, Channel Fractional Divider Register */
#define SENT_CH7_CFDR ((*(volatile Ifx_SENT_CH_CFDR*)0xF00032C4u)) /* lint --e(923)*/

/** 2C0, Channel Pre Divider Register */
#define SENT_CH7_CPDR ((*(volatile Ifx_SENT_CH_CPDR*)0xF00032C0u)) /* lint --e(923)*/

/** 2F0, Interrupt Node Pointer Register */
#define SENT_CH7_INP ((*(volatile Ifx_SENT_CH_INP*)0xF00032F0u)) /* lint --e(923)*/

/** 2E8, Interrupt Clear Register */
#define SENT_CH7_INTCLR ((*(volatile Ifx_SENT_CH_INTCLR*)0xF00032E8u)) /* lint --e(923)*/

/** 2EC, Interrupt Enable Register */
#define SENT_CH7_INTEN ((*(volatile Ifx_SENT_CH_INTEN*)0xF00032ECu)) /* lint --e(923)*/

/** 2E4, Interrupt Set Register */
#define SENT_CH7_INTSET ((*(volatile Ifx_SENT_CH_INTSET*)0xF00032E4u)) /* lint --e(923)*/

/** 2E0, Interrupt Status Register */
#define SENT_CH7_INTSTAT ((*(volatile Ifx_SENT_CH_INTSTAT*)0xF00032E0u)) /* lint --e(923)*/

/** 2D4, Input and Output Control Register */
#define SENT_CH7_IOCR ((*(volatile Ifx_SENT_CH_IOCR*)0xF00032D4u)) /* lint --e(923)*/

/** 2C8, Receiver Control Register */
#define SENT_CH7_RCR ((*(volatile Ifx_SENT_CH_RCR*)0xF00032C8u)) /* lint --e(923)*/

/** 2CC, Receive Status Register */
#define SENT_CH7_RSR ((*(volatile Ifx_SENT_CH_RSR*)0xF00032CCu)) /* lint --e(923)*/

/** 2D8, SPC Control Register */
#define SENT_CH7_SCR ((*(volatile Ifx_SENT_CH_SCR*)0xF00032D8u)) /* lint --e(923)*/

/** 2D0, Serial Data and Status Register */
#define SENT_CH7_SDS ((*(volatile Ifx_SENT_CH_SDS*)0xF00032D0u)) /* lint --e(923)*/

/** 2DC, Receive Data View Register */
#define SENT_CH7_VIEW ((*(volatile Ifx_SENT_CH_VIEW*)0xF00032DCu)) /* lint --e(923)*/

/** 2F4, Watch Dog Timer Register */
#define SENT_CH7_WDT ((*(volatile Ifx_SENT_CH_WDT*)0xF00032F4u)) /* lint --e(923)*/

/** 304, Channel Fractional Divider Register */
#define SENT_CH8_CFDR ((*(volatile Ifx_SENT_CH_CFDR*)0xF0003304u)) /* lint --e(923)*/

/** 300, Channel Pre Divider Register */
#define SENT_CH8_CPDR ((*(volatile Ifx_SENT_CH_CPDR*)0xF0003300u)) /* lint --e(923)*/

/** 330, Interrupt Node Pointer Register */
#define SENT_CH8_INP ((*(volatile Ifx_SENT_CH_INP*)0xF0003330u)) /* lint --e(923)*/

/** 328, Interrupt Clear Register */
#define SENT_CH8_INTCLR ((*(volatile Ifx_SENT_CH_INTCLR*)0xF0003328u)) /* lint --e(923)*/

/** 32C, Interrupt Enable Register */
#define SENT_CH8_INTEN ((*(volatile Ifx_SENT_CH_INTEN*)0xF000332Cu)) /* lint --e(923)*/

/** 324, Interrupt Set Register */
#define SENT_CH8_INTSET ((*(volatile Ifx_SENT_CH_INTSET*)0xF0003324u)) /* lint --e(923)*/

/** 320, Interrupt Status Register */
#define SENT_CH8_INTSTAT ((*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003320u)) /* lint --e(923)*/

/** 314, Input and Output Control Register */
#define SENT_CH8_IOCR ((*(volatile Ifx_SENT_CH_IOCR*)0xF0003314u)) /* lint --e(923)*/

/** 308, Receiver Control Register */
#define SENT_CH8_RCR ((*(volatile Ifx_SENT_CH_RCR*)0xF0003308u)) /* lint --e(923)*/

/** 30C, Receive Status Register */
#define SENT_CH8_RSR ((*(volatile Ifx_SENT_CH_RSR*)0xF000330Cu)) /* lint --e(923)*/

/** 318, SPC Control Register */
#define SENT_CH8_SCR ((*(volatile Ifx_SENT_CH_SCR*)0xF0003318u)) /* lint --e(923)*/

/** 310, Serial Data and Status Register */
#define SENT_CH8_SDS ((*(volatile Ifx_SENT_CH_SDS*)0xF0003310u)) /* lint --e(923)*/

/** 31C, Receive Data View Register */
#define SENT_CH8_VIEW ((*(volatile Ifx_SENT_CH_VIEW*)0xF000331Cu)) /* lint --e(923)*/

/** 334, Watch Dog Timer Register */
#define SENT_CH8_WDT ((*(volatile Ifx_SENT_CH_WDT*)0xF0003334u)) /* lint --e(923)*/

/** 344, Channel Fractional Divider Register */
#define SENT_CH9_CFDR ((*(volatile Ifx_SENT_CH_CFDR*)0xF0003344u)) /* lint --e(923)*/

/** 340, Channel Pre Divider Register */
#define SENT_CH9_CPDR ((*(volatile Ifx_SENT_CH_CPDR*)0xF0003340u)) /* lint --e(923)*/

/** 370, Interrupt Node Pointer Register */
#define SENT_CH9_INP ((*(volatile Ifx_SENT_CH_INP*)0xF0003370u)) /* lint --e(923)*/

/** 368, Interrupt Clear Register */
#define SENT_CH9_INTCLR ((*(volatile Ifx_SENT_CH_INTCLR*)0xF0003368u)) /* lint --e(923)*/

/** 36C, Interrupt Enable Register */
#define SENT_CH9_INTEN ((*(volatile Ifx_SENT_CH_INTEN*)0xF000336Cu)) /* lint --e(923)*/

/** 364, Interrupt Set Register */
#define SENT_CH9_INTSET ((*(volatile Ifx_SENT_CH_INTSET*)0xF0003364u)) /* lint --e(923)*/

/** 360, Interrupt Status Register */
#define SENT_CH9_INTSTAT ((*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003360u)) /* lint --e(923)*/

/** 354, Input and Output Control Register */
#define SENT_CH9_IOCR ((*(volatile Ifx_SENT_CH_IOCR*)0xF0003354u)) /* lint --e(923)*/

/** 348, Receiver Control Register */
#define SENT_CH9_RCR ((*(volatile Ifx_SENT_CH_RCR*)0xF0003348u)) /* lint --e(923)*/

/** 34C, Receive Status Register */
#define SENT_CH9_RSR ((*(volatile Ifx_SENT_CH_RSR*)0xF000334Cu)) /* lint --e(923)*/

/** 358, SPC Control Register */
#define SENT_CH9_SCR ((*(volatile Ifx_SENT_CH_SCR*)0xF0003358u)) /* lint --e(923)*/

/** 350, Serial Data and Status Register */
#define SENT_CH9_SDS ((*(volatile Ifx_SENT_CH_SDS*)0xF0003350u)) /* lint --e(923)*/

/** 35C, Receive Data View Register */
#define SENT_CH9_VIEW ((*(volatile Ifx_SENT_CH_VIEW*)0xF000335Cu)) /* lint --e(923)*/

/** 374, Watch Dog Timer Register */
#define SENT_CH9_WDT ((*(volatile Ifx_SENT_CH_WDT*)0xF0003374u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define SENT_CLC ((*(volatile Ifx_CLC6*)0xF0003000u)) /* lint --e(923)*/

/** Alias for SENT_CH0_CPDR.
 *  Note that this definition is obsolete, use SENT_CH0_CPDR instead.
 * 100, Channel Pre Divider Register
 */
#define SENT_CPDR0 (SENT_CH0_CPDR)

/** Alias for SENT_CH1_CPDR.
 *  Note that this definition is obsolete, use SENT_CH1_CPDR instead.
 * 140, Channel Pre Divider Register
 */
#define SENT_CPDR1 (SENT_CH1_CPDR)

/** Alias for SENT_CH2_CPDR.
 *  Note that this definition is obsolete, use SENT_CH2_CPDR instead.
 * 180, Channel Pre Divider Register
 */
#define SENT_CPDR2 (SENT_CH2_CPDR)

/** Alias for SENT_CH3_CPDR.
 *  Note that this definition is obsolete, use SENT_CH3_CPDR instead.
 * 1C0, Channel Pre Divider Register
 */
#define SENT_CPDR3 (SENT_CH3_CPDR)

/** Alias for SENT_CH4_CPDR.
 *  Note that this definition is obsolete, use SENT_CH4_CPDR instead.
 * 200, Channel Pre Divider Register
 */
#define SENT_CPDR4 (SENT_CH4_CPDR)

/** Alias for SENT_CH5_CPDR.
 *  Note that this definition is obsolete, use SENT_CH5_CPDR instead.
 * 240, Channel Pre Divider Register
 */
#define SENT_CPDR5 (SENT_CH5_CPDR)

/** Alias for SENT_CH6_CPDR.
 *  Note that this definition is obsolete, use SENT_CH6_CPDR instead.
 * 280, Channel Pre Divider Register
 */
#define SENT_CPDR6 (SENT_CH6_CPDR)

/** Alias for SENT_CH7_CPDR.
 *  Note that this definition is obsolete, use SENT_CH7_CPDR instead.
 * 2C0, Channel Pre Divider Register
 */
#define SENT_CPDR7 (SENT_CH7_CPDR)

/** Alias for SENT_CH8_CPDR.
 *  Note that this definition is obsolete, use SENT_CH8_CPDR instead.
 * 300, Channel Pre Divider Register
 */
#define SENT_CPDR8 (SENT_CH8_CPDR)

/** Alias for SENT_CH9_CPDR.
 *  Note that this definition is obsolete, use SENT_CH9_CPDR instead.
 * 340, Channel Pre Divider Register
 */
#define SENT_CPDR9 (SENT_CH9_CPDR)

/** C, SENT Fractional Divider Register */
#define SENT_FDR ((*(volatile Ifx_SENT_FDR*)0xF000300Cu)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define SENT_ID ((*(volatile Ifx_ID1*)0xF0003008u)) /* lint --e(923)*/

/** Alias for SENT_CH0_INP.
 *  Note that this definition is obsolete, use SENT_CH0_INP instead.
 * 130, Interrupt Node Pointer Register
 */
#define SENT_INP0 (SENT_CH0_INP)

/** Alias for SENT_CH1_INP.
 *  Note that this definition is obsolete, use SENT_CH1_INP instead.
 * 170, Interrupt Node Pointer Register
 */
#define SENT_INP1 (SENT_CH1_INP)

/** Alias for SENT_CH2_INP.
 *  Note that this definition is obsolete, use SENT_CH2_INP instead.
 * 1B0, Interrupt Node Pointer Register
 */
#define SENT_INP2 (SENT_CH2_INP)

/** Alias for SENT_CH3_INP.
 *  Note that this definition is obsolete, use SENT_CH3_INP instead.
 * 1F0, Interrupt Node Pointer Register
 */
#define SENT_INP3 (SENT_CH3_INP)

/** Alias for SENT_CH4_INP.
 *  Note that this definition is obsolete, use SENT_CH4_INP instead.
 * 230, Interrupt Node Pointer Register
 */
#define SENT_INP4 (SENT_CH4_INP)

/** Alias for SENT_CH5_INP.
 *  Note that this definition is obsolete, use SENT_CH5_INP instead.
 * 270, Interrupt Node Pointer Register
 */
#define SENT_INP5 (SENT_CH5_INP)

/** Alias for SENT_CH6_INP.
 *  Note that this definition is obsolete, use SENT_CH6_INP instead.
 * 2B0, Interrupt Node Pointer Register
 */
#define SENT_INP6 (SENT_CH6_INP)

/** Alias for SENT_CH7_INP.
 *  Note that this definition is obsolete, use SENT_CH7_INP instead.
 * 2F0, Interrupt Node Pointer Register
 */
#define SENT_INP7 (SENT_CH7_INP)

/** Alias for SENT_CH8_INP.
 *  Note that this definition is obsolete, use SENT_CH8_INP instead.
 * 330, Interrupt Node Pointer Register
 */
#define SENT_INP8 (SENT_CH8_INP)

/** Alias for SENT_CH9_INP.
 *  Note that this definition is obsolete, use SENT_CH9_INP instead.
 * 370, Interrupt Node Pointer Register
 */
#define SENT_INP9 (SENT_CH9_INP)

/** Alias for SENT_CH0_INTCLR.
 *  Note that this definition is obsolete, use SENT_CH0_INTCLR instead.
 * 128, Interrupt Clear Register
 */
#define SENT_INTCLR0 (SENT_CH0_INTCLR)

/** Alias for SENT_CH1_INTCLR.
 *  Note that this definition is obsolete, use SENT_CH1_INTCLR instead.
 * 168, Interrupt Clear Register
 */
#define SENT_INTCLR1 (SENT_CH1_INTCLR)

/** Alias for SENT_CH2_INTCLR.
 *  Note that this definition is obsolete, use SENT_CH2_INTCLR instead.
 * 1A8, Interrupt Clear Register
 */
#define SENT_INTCLR2 (SENT_CH2_INTCLR)

/** Alias for SENT_CH3_INTCLR.
 *  Note that this definition is obsolete, use SENT_CH3_INTCLR instead.
 * 1E8, Interrupt Clear Register
 */
#define SENT_INTCLR3 (SENT_CH3_INTCLR)

/** Alias for SENT_CH4_INTCLR.
 *  Note that this definition is obsolete, use SENT_CH4_INTCLR instead.
 * 228, Interrupt Clear Register
 */
#define SENT_INTCLR4 (SENT_CH4_INTCLR)

/** Alias for SENT_CH5_INTCLR.
 *  Note that this definition is obsolete, use SENT_CH5_INTCLR instead.
 * 268, Interrupt Clear Register
 */
#define SENT_INTCLR5 (SENT_CH5_INTCLR)

/** Alias for SENT_CH6_INTCLR.
 *  Note that this definition is obsolete, use SENT_CH6_INTCLR instead.
 * 2A8, Interrupt Clear Register
 */
#define SENT_INTCLR6 (SENT_CH6_INTCLR)

/** Alias for SENT_CH7_INTCLR.
 *  Note that this definition is obsolete, use SENT_CH7_INTCLR instead.
 * 2E8, Interrupt Clear Register
 */
#define SENT_INTCLR7 (SENT_CH7_INTCLR)

/** Alias for SENT_CH8_INTCLR.
 *  Note that this definition is obsolete, use SENT_CH8_INTCLR instead.
 * 328, Interrupt Clear Register
 */
#define SENT_INTCLR8 (SENT_CH8_INTCLR)

/** Alias for SENT_CH9_INTCLR.
 *  Note that this definition is obsolete, use SENT_CH9_INTCLR instead.
 * 368, Interrupt Clear Register
 */
#define SENT_INTCLR9 (SENT_CH9_INTCLR)

/** Alias for SENT_CH0_INTEN.
 *  Note that this definition is obsolete, use SENT_CH0_INTEN instead.
 * 12C, Interrupt Enable Register
 */
#define SENT_INTEN0 (SENT_CH0_INTEN)

/** Alias for SENT_CH1_INTEN.
 *  Note that this definition is obsolete, use SENT_CH1_INTEN instead.
 * 16C, Interrupt Enable Register
 */
#define SENT_INTEN1 (SENT_CH1_INTEN)

/** Alias for SENT_CH2_INTEN.
 *  Note that this definition is obsolete, use SENT_CH2_INTEN instead.
 * 1AC, Interrupt Enable Register
 */
#define SENT_INTEN2 (SENT_CH2_INTEN)

/** Alias for SENT_CH3_INTEN.
 *  Note that this definition is obsolete, use SENT_CH3_INTEN instead.
 * 1EC, Interrupt Enable Register
 */
#define SENT_INTEN3 (SENT_CH3_INTEN)

/** Alias for SENT_CH4_INTEN.
 *  Note that this definition is obsolete, use SENT_CH4_INTEN instead.
 * 22C, Interrupt Enable Register
 */
#define SENT_INTEN4 (SENT_CH4_INTEN)

/** Alias for SENT_CH5_INTEN.
 *  Note that this definition is obsolete, use SENT_CH5_INTEN instead.
 * 26C, Interrupt Enable Register
 */
#define SENT_INTEN5 (SENT_CH5_INTEN)

/** Alias for SENT_CH6_INTEN.
 *  Note that this definition is obsolete, use SENT_CH6_INTEN instead.
 * 2AC, Interrupt Enable Register
 */
#define SENT_INTEN6 (SENT_CH6_INTEN)

/** Alias for SENT_CH7_INTEN.
 *  Note that this definition is obsolete, use SENT_CH7_INTEN instead.
 * 2EC, Interrupt Enable Register
 */
#define SENT_INTEN7 (SENT_CH7_INTEN)

/** Alias for SENT_CH8_INTEN.
 *  Note that this definition is obsolete, use SENT_CH8_INTEN instead.
 * 32C, Interrupt Enable Register
 */
#define SENT_INTEN8 (SENT_CH8_INTEN)

/** Alias for SENT_CH9_INTEN.
 *  Note that this definition is obsolete, use SENT_CH9_INTEN instead.
 * 36C, Interrupt Enable Register
 */
#define SENT_INTEN9 (SENT_CH9_INTEN)

/** 14, Interrupt Overview Register */
#define SENT_INTOV ((*(volatile Ifx_SENT_INTOV*)0xF0003014u)) /* lint --e(923)*/

/** Alias for SENT_CH0_INTSET.
 *  Note that this definition is obsolete, use SENT_CH0_INTSET instead.
 * 124, Interrupt Set Register
 */
#define SENT_INTSET0 (SENT_CH0_INTSET)

/** Alias for SENT_CH1_INTSET.
 *  Note that this definition is obsolete, use SENT_CH1_INTSET instead.
 * 164, Interrupt Set Register
 */
#define SENT_INTSET1 (SENT_CH1_INTSET)

/** Alias for SENT_CH2_INTSET.
 *  Note that this definition is obsolete, use SENT_CH2_INTSET instead.
 * 1A4, Interrupt Set Register
 */
#define SENT_INTSET2 (SENT_CH2_INTSET)

/** Alias for SENT_CH3_INTSET.
 *  Note that this definition is obsolete, use SENT_CH3_INTSET instead.
 * 1E4, Interrupt Set Register
 */
#define SENT_INTSET3 (SENT_CH3_INTSET)

/** Alias for SENT_CH4_INTSET.
 *  Note that this definition is obsolete, use SENT_CH4_INTSET instead.
 * 224, Interrupt Set Register
 */
#define SENT_INTSET4 (SENT_CH4_INTSET)

/** Alias for SENT_CH5_INTSET.
 *  Note that this definition is obsolete, use SENT_CH5_INTSET instead.
 * 264, Interrupt Set Register
 */
#define SENT_INTSET5 (SENT_CH5_INTSET)

/** Alias for SENT_CH6_INTSET.
 *  Note that this definition is obsolete, use SENT_CH6_INTSET instead.
 * 2A4, Interrupt Set Register
 */
#define SENT_INTSET6 (SENT_CH6_INTSET)

/** Alias for SENT_CH7_INTSET.
 *  Note that this definition is obsolete, use SENT_CH7_INTSET instead.
 * 2E4, Interrupt Set Register
 */
#define SENT_INTSET7 (SENT_CH7_INTSET)

/** Alias for SENT_CH8_INTSET.
 *  Note that this definition is obsolete, use SENT_CH8_INTSET instead.
 * 324, Interrupt Set Register
 */
#define SENT_INTSET8 (SENT_CH8_INTSET)

/** Alias for SENT_CH9_INTSET.
 *  Note that this definition is obsolete, use SENT_CH9_INTSET instead.
 * 364, Interrupt Set Register
 */
#define SENT_INTSET9 (SENT_CH9_INTSET)

/** Alias for SENT_CH0_INTSTAT.
 *  Note that this definition is obsolete, use SENT_CH0_INTSTAT instead.
 * 120, Interrupt Status Register
 */
#define SENT_INTSTAT0 (SENT_CH0_INTSTAT)

/** Alias for SENT_CH1_INTSTAT.
 *  Note that this definition is obsolete, use SENT_CH1_INTSTAT instead.
 * 160, Interrupt Status Register
 */
#define SENT_INTSTAT1 (SENT_CH1_INTSTAT)

/** Alias for SENT_CH2_INTSTAT.
 *  Note that this definition is obsolete, use SENT_CH2_INTSTAT instead.
 * 1A0, Interrupt Status Register
 */
#define SENT_INTSTAT2 (SENT_CH2_INTSTAT)

/** Alias for SENT_CH3_INTSTAT.
 *  Note that this definition is obsolete, use SENT_CH3_INTSTAT instead.
 * 1E0, Interrupt Status Register
 */
#define SENT_INTSTAT3 (SENT_CH3_INTSTAT)

/** Alias for SENT_CH4_INTSTAT.
 *  Note that this definition is obsolete, use SENT_CH4_INTSTAT instead.
 * 220, Interrupt Status Register
 */
#define SENT_INTSTAT4 (SENT_CH4_INTSTAT)

/** Alias for SENT_CH5_INTSTAT.
 *  Note that this definition is obsolete, use SENT_CH5_INTSTAT instead.
 * 260, Interrupt Status Register
 */
#define SENT_INTSTAT5 (SENT_CH5_INTSTAT)

/** Alias for SENT_CH6_INTSTAT.
 *  Note that this definition is obsolete, use SENT_CH6_INTSTAT instead.
 * 2A0, Interrupt Status Register
 */
#define SENT_INTSTAT6 (SENT_CH6_INTSTAT)

/** Alias for SENT_CH7_INTSTAT.
 *  Note that this definition is obsolete, use SENT_CH7_INTSTAT instead.
 * 2E0, Interrupt Status Register
 */
#define SENT_INTSTAT7 (SENT_CH7_INTSTAT)

/** Alias for SENT_CH8_INTSTAT.
 *  Note that this definition is obsolete, use SENT_CH8_INTSTAT instead.
 * 320, Interrupt Status Register
 */
#define SENT_INTSTAT8 (SENT_CH8_INTSTAT)

/** Alias for SENT_CH9_INTSTAT.
 *  Note that this definition is obsolete, use SENT_CH9_INTSTAT instead.
 * 360, Interrupt Status Register
 */
#define SENT_INTSTAT9 (SENT_CH9_INTSTAT)

/** Alias for SENT_CH0_IOCR.
 *  Note that this definition is obsolete, use SENT_CH0_IOCR instead.
 * 114, Input and Output Control Register
 */
#define SENT_IOCR0 (SENT_CH0_IOCR)

/** Alias for SENT_CH1_IOCR.
 *  Note that this definition is obsolete, use SENT_CH1_IOCR instead.
 * 154, Input and Output Control Register
 */
#define SENT_IOCR1 (SENT_CH1_IOCR)

/** Alias for SENT_CH2_IOCR.
 *  Note that this definition is obsolete, use SENT_CH2_IOCR instead.
 * 194, Input and Output Control Register
 */
#define SENT_IOCR2 (SENT_CH2_IOCR)

/** Alias for SENT_CH3_IOCR.
 *  Note that this definition is obsolete, use SENT_CH3_IOCR instead.
 * 1D4, Input and Output Control Register
 */
#define SENT_IOCR3 (SENT_CH3_IOCR)

/** Alias for SENT_CH4_IOCR.
 *  Note that this definition is obsolete, use SENT_CH4_IOCR instead.
 * 214, Input and Output Control Register
 */
#define SENT_IOCR4 (SENT_CH4_IOCR)

/** Alias for SENT_CH5_IOCR.
 *  Note that this definition is obsolete, use SENT_CH5_IOCR instead.
 * 254, Input and Output Control Register
 */
#define SENT_IOCR5 (SENT_CH5_IOCR)

/** Alias for SENT_CH6_IOCR.
 *  Note that this definition is obsolete, use SENT_CH6_IOCR instead.
 * 294, Input and Output Control Register
 */
#define SENT_IOCR6 (SENT_CH6_IOCR)

/** Alias for SENT_CH7_IOCR.
 *  Note that this definition is obsolete, use SENT_CH7_IOCR instead.
 * 2D4, Input and Output Control Register
 */
#define SENT_IOCR7 (SENT_CH7_IOCR)

/** Alias for SENT_CH8_IOCR.
 *  Note that this definition is obsolete, use SENT_CH8_IOCR instead.
 * 314, Input and Output Control Register
 */
#define SENT_IOCR8 (SENT_CH8_IOCR)

/** Alias for SENT_CH9_IOCR.
 *  Note that this definition is obsolete, use SENT_CH9_IOCR instead.
 * 354, Input and Output Control Register
 */
#define SENT_IOCR9 (SENT_CH9_IOCR)

/** F4, Kernel Reset Register 0 */
#define SENT_KRST0 ((*(volatile Ifx_SENT_KRST0*)0xF00030F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define SENT_KRST1 ((*(volatile Ifx_SENT_KRST1*)0xF00030F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define SENT_KRSTCLR ((*(volatile Ifx_SENT_KRSTCLR*)0xF00030ECu)) /* lint --e(923)*/

/** E8, OCDS Control and Status */
#define SENT_OCS ((*(volatile Ifx_SENT_OCS*)0xF00030E8u)) /* lint --e(923)*/

/** Alias for SENT_CH0_RCR.
 *  Note that this definition is obsolete, use SENT_CH0_RCR instead.
 * 108, Receiver Control Register
 */
#define SENT_RCR0 (SENT_CH0_RCR)

/** Alias for SENT_CH1_RCR.
 *  Note that this definition is obsolete, use SENT_CH1_RCR instead.
 * 148, Receiver Control Register
 */
#define SENT_RCR1 (SENT_CH1_RCR)

/** Alias for SENT_CH2_RCR.
 *  Note that this definition is obsolete, use SENT_CH2_RCR instead.
 * 188, Receiver Control Register
 */
#define SENT_RCR2 (SENT_CH2_RCR)

/** Alias for SENT_CH3_RCR.
 *  Note that this definition is obsolete, use SENT_CH3_RCR instead.
 * 1C8, Receiver Control Register
 */
#define SENT_RCR3 (SENT_CH3_RCR)

/** Alias for SENT_CH4_RCR.
 *  Note that this definition is obsolete, use SENT_CH4_RCR instead.
 * 208, Receiver Control Register
 */
#define SENT_RCR4 (SENT_CH4_RCR)

/** Alias for SENT_CH5_RCR.
 *  Note that this definition is obsolete, use SENT_CH5_RCR instead.
 * 248, Receiver Control Register
 */
#define SENT_RCR5 (SENT_CH5_RCR)

/** Alias for SENT_CH6_RCR.
 *  Note that this definition is obsolete, use SENT_CH6_RCR instead.
 * 288, Receiver Control Register
 */
#define SENT_RCR6 (SENT_CH6_RCR)

/** Alias for SENT_CH7_RCR.
 *  Note that this definition is obsolete, use SENT_CH7_RCR instead.
 * 2C8, Receiver Control Register
 */
#define SENT_RCR7 (SENT_CH7_RCR)

/** Alias for SENT_CH8_RCR.
 *  Note that this definition is obsolete, use SENT_CH8_RCR instead.
 * 308, Receiver Control Register
 */
#define SENT_RCR8 (SENT_CH8_RCR)

/** Alias for SENT_CH9_RCR.
 *  Note that this definition is obsolete, use SENT_CH9_RCR instead.
 * 348, Receiver Control Register
 */
#define SENT_RCR9 (SENT_CH9_RCR)

/** 80, Receive Data Register */
#define SENT_RDR0 ((*(volatile Ifx_SENT_RDR*)0xF0003080u)) /* lint --e(923)*/

/** 84, Receive Data Register */
#define SENT_RDR1 ((*(volatile Ifx_SENT_RDR*)0xF0003084u)) /* lint --e(923)*/

/** 88, Receive Data Register */
#define SENT_RDR2 ((*(volatile Ifx_SENT_RDR*)0xF0003088u)) /* lint --e(923)*/

/** 8C, Receive Data Register */
#define SENT_RDR3 ((*(volatile Ifx_SENT_RDR*)0xF000308Cu)) /* lint --e(923)*/

/** 90, Receive Data Register */
#define SENT_RDR4 ((*(volatile Ifx_SENT_RDR*)0xF0003090u)) /* lint --e(923)*/

/** 94, Receive Data Register */
#define SENT_RDR5 ((*(volatile Ifx_SENT_RDR*)0xF0003094u)) /* lint --e(923)*/

/** 98, Receive Data Register */
#define SENT_RDR6 ((*(volatile Ifx_SENT_RDR*)0xF0003098u)) /* lint --e(923)*/

/** 9C, Receive Data Register */
#define SENT_RDR7 ((*(volatile Ifx_SENT_RDR*)0xF000309Cu)) /* lint --e(923)*/

/** A0, Receive Data Register */
#define SENT_RDR8 ((*(volatile Ifx_SENT_RDR*)0xF00030A0u)) /* lint --e(923)*/

/** A4, Receive Data Register */
#define SENT_RDR9 ((*(volatile Ifx_SENT_RDR*)0xF00030A4u)) /* lint --e(923)*/

/** Alias for SENT_CH0_RSR.
 *  Note that this definition is obsolete, use SENT_CH0_RSR instead.
 * 10C, Receive Status Register
 */
#define SENT_RSR0 (SENT_CH0_RSR)

/** Alias for SENT_CH1_RSR.
 *  Note that this definition is obsolete, use SENT_CH1_RSR instead.
 * 14C, Receive Status Register
 */
#define SENT_RSR1 (SENT_CH1_RSR)

/** Alias for SENT_CH2_RSR.
 *  Note that this definition is obsolete, use SENT_CH2_RSR instead.
 * 18C, Receive Status Register
 */
#define SENT_RSR2 (SENT_CH2_RSR)

/** Alias for SENT_CH3_RSR.
 *  Note that this definition is obsolete, use SENT_CH3_RSR instead.
 * 1CC, Receive Status Register
 */
#define SENT_RSR3 (SENT_CH3_RSR)

/** Alias for SENT_CH4_RSR.
 *  Note that this definition is obsolete, use SENT_CH4_RSR instead.
 * 20C, Receive Status Register
 */
#define SENT_RSR4 (SENT_CH4_RSR)

/** Alias for SENT_CH5_RSR.
 *  Note that this definition is obsolete, use SENT_CH5_RSR instead.
 * 24C, Receive Status Register
 */
#define SENT_RSR5 (SENT_CH5_RSR)

/** Alias for SENT_CH6_RSR.
 *  Note that this definition is obsolete, use SENT_CH6_RSR instead.
 * 28C, Receive Status Register
 */
#define SENT_RSR6 (SENT_CH6_RSR)

/** Alias for SENT_CH7_RSR.
 *  Note that this definition is obsolete, use SENT_CH7_RSR instead.
 * 2CC, Receive Status Register
 */
#define SENT_RSR7 (SENT_CH7_RSR)

/** Alias for SENT_CH8_RSR.
 *  Note that this definition is obsolete, use SENT_CH8_RSR instead.
 * 30C, Receive Status Register
 */
#define SENT_RSR8 (SENT_CH8_RSR)

/** Alias for SENT_CH9_RSR.
 *  Note that this definition is obsolete, use SENT_CH9_RSR instead.
 * 34C, Receive Status Register
 */
#define SENT_RSR9 (SENT_CH9_RSR)

/** A80, Receive Time Stamp Register */
#define SENT_RTS0 ((*(volatile Ifx_SENT_RTS*)0xF0003A80u)) /* lint --e(923)*/

/** A84, Receive Time Stamp Register */
#define SENT_RTS1 ((*(volatile Ifx_SENT_RTS*)0xF0003A84u)) /* lint --e(923)*/

/** A88, Receive Time Stamp Register */
#define SENT_RTS2 ((*(volatile Ifx_SENT_RTS*)0xF0003A88u)) /* lint --e(923)*/

/** A8C, Receive Time Stamp Register */
#define SENT_RTS3 ((*(volatile Ifx_SENT_RTS*)0xF0003A8Cu)) /* lint --e(923)*/

/** A90, Receive Time Stamp Register */
#define SENT_RTS4 ((*(volatile Ifx_SENT_RTS*)0xF0003A90u)) /* lint --e(923)*/

/** A94, Receive Time Stamp Register */
#define SENT_RTS5 ((*(volatile Ifx_SENT_RTS*)0xF0003A94u)) /* lint --e(923)*/

/** A98, Receive Time Stamp Register */
#define SENT_RTS6 ((*(volatile Ifx_SENT_RTS*)0xF0003A98u)) /* lint --e(923)*/

/** A9C, Receive Time Stamp Register */
#define SENT_RTS7 ((*(volatile Ifx_SENT_RTS*)0xF0003A9Cu)) /* lint --e(923)*/

/** AA0, Receive Time Stamp Register */
#define SENT_RTS8 ((*(volatile Ifx_SENT_RTS*)0xF0003AA0u)) /* lint --e(923)*/

/** AA4, Receive Time Stamp Register */
#define SENT_RTS9 ((*(volatile Ifx_SENT_RTS*)0xF0003AA4u)) /* lint --e(923)*/

/** Alias for SENT_CH0_SCR.
 *  Note that this definition is obsolete, use SENT_CH0_SCR instead.
 * 118, SPC Control Register
 */
#define SENT_SCR0 (SENT_CH0_SCR)

/** Alias for SENT_CH1_SCR.
 *  Note that this definition is obsolete, use SENT_CH1_SCR instead.
 * 158, SPC Control Register
 */
#define SENT_SCR1 (SENT_CH1_SCR)

/** Alias for SENT_CH2_SCR.
 *  Note that this definition is obsolete, use SENT_CH2_SCR instead.
 * 198, SPC Control Register
 */
#define SENT_SCR2 (SENT_CH2_SCR)

/** Alias for SENT_CH3_SCR.
 *  Note that this definition is obsolete, use SENT_CH3_SCR instead.
 * 1D8, SPC Control Register
 */
#define SENT_SCR3 (SENT_CH3_SCR)

/** Alias for SENT_CH4_SCR.
 *  Note that this definition is obsolete, use SENT_CH4_SCR instead.
 * 218, SPC Control Register
 */
#define SENT_SCR4 (SENT_CH4_SCR)

/** Alias for SENT_CH5_SCR.
 *  Note that this definition is obsolete, use SENT_CH5_SCR instead.
 * 258, SPC Control Register
 */
#define SENT_SCR5 (SENT_CH5_SCR)

/** Alias for SENT_CH6_SCR.
 *  Note that this definition is obsolete, use SENT_CH6_SCR instead.
 * 298, SPC Control Register
 */
#define SENT_SCR6 (SENT_CH6_SCR)

/** Alias for SENT_CH7_SCR.
 *  Note that this definition is obsolete, use SENT_CH7_SCR instead.
 * 2D8, SPC Control Register
 */
#define SENT_SCR7 (SENT_CH7_SCR)

/** Alias for SENT_CH8_SCR.
 *  Note that this definition is obsolete, use SENT_CH8_SCR instead.
 * 318, SPC Control Register
 */
#define SENT_SCR8 (SENT_CH8_SCR)

/** Alias for SENT_CH9_SCR.
 *  Note that this definition is obsolete, use SENT_CH9_SCR instead.
 * 358, SPC Control Register
 */
#define SENT_SCR9 (SENT_CH9_SCR)

/** Alias for SENT_CH0_SDS.
 *  Note that this definition is obsolete, use SENT_CH0_SDS instead.
 * 110, Serial Data and Status Register
 */
#define SENT_SDS0 (SENT_CH0_SDS)

/** Alias for SENT_CH1_SDS.
 *  Note that this definition is obsolete, use SENT_CH1_SDS instead.
 * 150, Serial Data and Status Register
 */
#define SENT_SDS1 (SENT_CH1_SDS)

/** Alias for SENT_CH2_SDS.
 *  Note that this definition is obsolete, use SENT_CH2_SDS instead.
 * 190, Serial Data and Status Register
 */
#define SENT_SDS2 (SENT_CH2_SDS)

/** Alias for SENT_CH3_SDS.
 *  Note that this definition is obsolete, use SENT_CH3_SDS instead.
 * 1D0, Serial Data and Status Register
 */
#define SENT_SDS3 (SENT_CH3_SDS)

/** Alias for SENT_CH4_SDS.
 *  Note that this definition is obsolete, use SENT_CH4_SDS instead.
 * 210, Serial Data and Status Register
 */
#define SENT_SDS4 (SENT_CH4_SDS)

/** Alias for SENT_CH5_SDS.
 *  Note that this definition is obsolete, use SENT_CH5_SDS instead.
 * 250, Serial Data and Status Register
 */
#define SENT_SDS5 (SENT_CH5_SDS)

/** Alias for SENT_CH6_SDS.
 *  Note that this definition is obsolete, use SENT_CH6_SDS instead.
 * 290, Serial Data and Status Register
 */
#define SENT_SDS6 (SENT_CH6_SDS)

/** Alias for SENT_CH7_SDS.
 *  Note that this definition is obsolete, use SENT_CH7_SDS instead.
 * 2D0, Serial Data and Status Register
 */
#define SENT_SDS7 (SENT_CH7_SDS)

/** Alias for SENT_CH8_SDS.
 *  Note that this definition is obsolete, use SENT_CH8_SDS instead.
 * 310, Serial Data and Status Register
 */
#define SENT_SDS8 (SENT_CH8_SDS)

/** Alias for SENT_CH9_SDS.
 *  Note that this definition is obsolete, use SENT_CH9_SDS instead.
 * 350, Serial Data and Status Register
 */
#define SENT_SDS9 (SENT_CH9_SDS)

/** 1C, Time Stamp Predivider Register */
#define SENT_TPD ((*(volatile Ifx_SENT_TPD*)0xF000301Cu)) /* lint --e(923)*/

/** 18, Time Stamp Register */
#define SENT_TSR ((*(volatile Ifx_SENT_TSR*)0xF0003018u)) /* lint --e(923)*/

/** Alias for SENT_CH0_VIEW.
 *  Note that this definition is obsolete, use SENT_CH0_VIEW instead.
 * 11C, Receive Data View Register
 */
#define SENT_VIEW0 (SENT_CH0_VIEW)

/** Alias for SENT_CH1_VIEW.
 *  Note that this definition is obsolete, use SENT_CH1_VIEW instead.
 * 15C, Receive Data View Register
 */
#define SENT_VIEW1 (SENT_CH1_VIEW)

/** Alias for SENT_CH2_VIEW.
 *  Note that this definition is obsolete, use SENT_CH2_VIEW instead.
 * 19C, Receive Data View Register
 */
#define SENT_VIEW2 (SENT_CH2_VIEW)

/** Alias for SENT_CH3_VIEW.
 *  Note that this definition is obsolete, use SENT_CH3_VIEW instead.
 * 1DC, Receive Data View Register
 */
#define SENT_VIEW3 (SENT_CH3_VIEW)

/** Alias for SENT_CH4_VIEW.
 *  Note that this definition is obsolete, use SENT_CH4_VIEW instead.
 * 21C, Receive Data View Register
 */
#define SENT_VIEW4 (SENT_CH4_VIEW)

/** Alias for SENT_CH5_VIEW.
 *  Note that this definition is obsolete, use SENT_CH5_VIEW instead.
 * 25C, Receive Data View Register
 */
#define SENT_VIEW5 (SENT_CH5_VIEW)

/** Alias for SENT_CH6_VIEW.
 *  Note that this definition is obsolete, use SENT_CH6_VIEW instead.
 * 29C, Receive Data View Register
 */
#define SENT_VIEW6 (SENT_CH6_VIEW)

/** Alias for SENT_CH7_VIEW.
 *  Note that this definition is obsolete, use SENT_CH7_VIEW instead.
 * 2DC, Receive Data View Register
 */
#define SENT_VIEW7 (SENT_CH7_VIEW)

/** Alias for SENT_CH8_VIEW.
 *  Note that this definition is obsolete, use SENT_CH8_VIEW instead.
 * 31C, Receive Data View Register
 */
#define SENT_VIEW8 (SENT_CH8_VIEW)

/** Alias for SENT_CH9_VIEW.
 *  Note that this definition is obsolete, use SENT_CH9_VIEW instead.
 * 35C, Receive Data View Register
 */
#define SENT_VIEW9 (SENT_CH9_VIEW)

/** Alias for SENT_CH0_WDT.
 *  Note that this definition is obsolete, use SENT_CH0_WDT instead.
 * 134, Watch Dog Timer Register
 */
#define SENT_WDT0 (SENT_CH0_WDT)

/** Alias for SENT_CH1_WDT.
 *  Note that this definition is obsolete, use SENT_CH1_WDT instead.
 * 174, Watch Dog Timer Register
 */
#define SENT_WDT1 (SENT_CH1_WDT)

/** Alias for SENT_CH2_WDT.
 *  Note that this definition is obsolete, use SENT_CH2_WDT instead.
 * 1B4, Watch Dog Timer Register
 */
#define SENT_WDT2 (SENT_CH2_WDT)

/** Alias for SENT_CH3_WDT.
 *  Note that this definition is obsolete, use SENT_CH3_WDT instead.
 * 1F4, Watch Dog Timer Register
 */
#define SENT_WDT3 (SENT_CH3_WDT)

/** Alias for SENT_CH4_WDT.
 *  Note that this definition is obsolete, use SENT_CH4_WDT instead.
 * 234, Watch Dog Timer Register
 */
#define SENT_WDT4 (SENT_CH4_WDT)

/** Alias for SENT_CH5_WDT.
 *  Note that this definition is obsolete, use SENT_CH5_WDT instead.
 * 274, Watch Dog Timer Register
 */
#define SENT_WDT5 (SENT_CH5_WDT)

/** Alias for SENT_CH6_WDT.
 *  Note that this definition is obsolete, use SENT_CH6_WDT instead.
 * 2B4, Watch Dog Timer Register
 */
#define SENT_WDT6 (SENT_CH6_WDT)

/** Alias for SENT_CH7_WDT.
 *  Note that this definition is obsolete, use SENT_CH7_WDT instead.
 * 2F4, Watch Dog Timer Register
 */
#define SENT_WDT7 (SENT_CH7_WDT)

/** Alias for SENT_CH8_WDT.
 *  Note that this definition is obsolete, use SENT_CH8_WDT instead.
 * 334, Watch Dog Timer Register
 */
#define SENT_WDT8 (SENT_CH8_WDT)

/** Alias for SENT_CH9_WDT.
 *  Note that this definition is obsolete, use SENT_CH9_WDT instead.
 * 374, Watch Dog Timer Register
 */
#define SENT_WDT9 (SENT_CH9_WDT)
/******************************************************************************/
#endif /* IFXSENT_REG_H */

