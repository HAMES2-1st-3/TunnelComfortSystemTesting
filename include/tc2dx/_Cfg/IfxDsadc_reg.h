/**
 * \file IfxDsadc_reg.h
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
#ifndef IFXDSADC_REG_H
#define IFXDSADC_REG_H
/******************************************************************************/
#include "Dsadc/IfxDsadc_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** DSADC object */
#define MODULE_DSADC ((*(Ifx_DSADC*)0xF0024000u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-DSADC)                              */
/******************************************************************************/

/** 3C, Access Enable Register 0 */
#define DSADC_ACCEN0 ((*(volatile Ifx_DSADC_ACCEN0*)0xF002403Cu)) /* lint --e(923)*/

/** 90, Access Protection Register */
#define DSADC_ACCPROT ((*(volatile Ifx_DSADC_ACCPROT*)0xF0024090u)) /* lint --e(923)*/

/** Alias for DSADC_CH0_BOUNDSEL.
 *  Note that this definition is obsolete, use DSADC_CH0_BOUNDSEL instead.
 * 128, Boundary Select Register
 */
#define DSADC_BOUNDSEL0 (DSADC_CH0_BOUNDSEL)

/** Alias for DSADC_CH1_BOUNDSEL.
 *  Note that this definition is obsolete, use DSADC_CH1_BOUNDSEL instead.
 * 228, Boundary Select Register
 */
#define DSADC_BOUNDSEL1 (DSADC_CH1_BOUNDSEL)

/** Alias for DSADC_CH2_BOUNDSEL.
 *  Note that this definition is obsolete, use DSADC_CH2_BOUNDSEL instead.
 * 328, Boundary Select Register
 */
#define DSADC_BOUNDSEL2 (DSADC_CH2_BOUNDSEL)

/** Alias for DSADC_CH3_BOUNDSEL.
 *  Note that this definition is obsolete, use DSADC_CH3_BOUNDSEL instead.
 * 428, Boundary Select Register
 */
#define DSADC_BOUNDSEL3 (DSADC_CH3_BOUNDSEL)

/** Alias for DSADC_CH4_BOUNDSEL.
 *  Note that this definition is obsolete, use DSADC_CH4_BOUNDSEL instead.
 * 528, Boundary Select Register
 */
#define DSADC_BOUNDSEL4 (DSADC_CH4_BOUNDSEL)

/** Alias for DSADC_CH5_BOUNDSEL.
 *  Note that this definition is obsolete, use DSADC_CH5_BOUNDSEL instead.
 * 628, Boundary Select Register
 */
#define DSADC_BOUNDSEL5 (DSADC_CH5_BOUNDSEL)

/** A0, Carrier Generator Configuration Register */
#define DSADC_CGCFG ((*(volatile Ifx_DSADC_CGCFG*)0xF00240A0u)) /* lint --e(923)*/

/** Alias for DSADC_CH0_CGSYNC.
 *  Note that this definition is obsolete, use DSADC_CH0_CGSYNC instead.
 * 1A0, Carrier Generator Synchronization Register
 */
#define DSADC_CGSYNC0 (DSADC_CH0_CGSYNC)

/** Alias for DSADC_CH1_CGSYNC.
 *  Note that this definition is obsolete, use DSADC_CH1_CGSYNC instead.
 * 2A0, Carrier Generator Synchronization Register
 */
#define DSADC_CGSYNC1 (DSADC_CH1_CGSYNC)

/** Alias for DSADC_CH2_CGSYNC.
 *  Note that this definition is obsolete, use DSADC_CH2_CGSYNC instead.
 * 3A0, Carrier Generator Synchronization Register
 */
#define DSADC_CGSYNC2 (DSADC_CH2_CGSYNC)

/** Alias for DSADC_CH3_CGSYNC.
 *  Note that this definition is obsolete, use DSADC_CH3_CGSYNC instead.
 * 4A0, Carrier Generator Synchronization Register
 */
#define DSADC_CGSYNC3 (DSADC_CH3_CGSYNC)

/** Alias for DSADC_CH4_CGSYNC.
 *  Note that this definition is obsolete, use DSADC_CH4_CGSYNC instead.
 * 5A0, Carrier Generator Synchronization Register
 */
#define DSADC_CGSYNC4 (DSADC_CH4_CGSYNC)

/** Alias for DSADC_CH5_CGSYNC.
 *  Note that this definition is obsolete, use DSADC_CH5_CGSYNC instead.
 * 6A0, Carrier Generator Synchronization Register
 */
#define DSADC_CGSYNC5 (DSADC_CH5_CGSYNC)

/** 128, Boundary Select Register */
#define DSADC_CH0_BOUNDSEL ((*(volatile Ifx_DSADC_CH_BOUNDSEL*)0xF0024128u)) /* lint --e(923)*/

/** 1A0, Carrier Generator Synchronization Register */
#define DSADC_CH0_CGSYNC ((*(volatile Ifx_DSADC_CH_CGSYNC*)0xF00241A0u)) /* lint --e(923)*/

/** 108, Demodulator Input Configuration Register */
#define DSADC_CH0_DICFG ((*(volatile Ifx_DSADC_CH_DICFG*)0xF0024108u)) /* lint --e(923)*/

/** 118, Filter Configuration Register, Auxiliary Filter */
#define DSADC_CH0_FCFGA ((*(volatile Ifx_DSADC_CH_FCFGA*)0xF0024118u)) /* lint --e(923)*/

/** 114, Filter Configuration Register, Main Comb Filter */
#define DSADC_CH0_FCFGC ((*(volatile Ifx_DSADC_CH_FCFGC*)0xF0024114u)) /* lint --e(923)*/

/** 110, Filter Configuration Register, Main Filter Chain */
#define DSADC_CH0_FCFGM ((*(volatile Ifx_DSADC_CH_FCFGM*)0xF0024110u)) /* lint --e(923)*/

/** 120, Integration Window Control Register */
#define DSADC_CH0_IWCTR ((*(volatile Ifx_DSADC_CH_IWCTR*)0xF0024120u)) /* lint --e(923)*/

/** 100, Modulator Configuration Register */
#define DSADC_CH0_MODCFG ((*(volatile Ifx_DSADC_CH_MODCFG*)0xF0024100u)) /* lint --e(923)*/

/** 138, Offset Register Main Filter */
#define DSADC_CH0_OFFM ((*(volatile Ifx_DSADC_CH_OFFM*)0xF0024138u)) /* lint --e(923)*/

/** 1A8, Rectification Configuration Register */
#define DSADC_CH0_RECTCFG ((*(volatile Ifx_DSADC_CH_RECTCFG*)0xF00241A8u)) /* lint --e(923)*/

/** 140, Result Register Auxiliary Filter */
#define DSADC_CH0_RESA ((*(volatile Ifx_DSADC_CH_RESA*)0xF0024140u)) /* lint --e(923)*/

/** 130, Result Register Main Filter */
#define DSADC_CH0_RESM ((*(volatile Ifx_DSADC_CH_RESM*)0xF0024130u)) /* lint --e(923)*/

/** 150, Time-Stamp Register */
#define DSADC_CH0_TSTMP ((*(volatile Ifx_DSADC_CH_TSTMP*)0xF0024150u)) /* lint --e(923)*/

/** 228, Boundary Select Register */
#define DSADC_CH1_BOUNDSEL ((*(volatile Ifx_DSADC_CH_BOUNDSEL*)0xF0024228u)) /* lint --e(923)*/

/** 2A0, Carrier Generator Synchronization Register */
#define DSADC_CH1_CGSYNC ((*(volatile Ifx_DSADC_CH_CGSYNC*)0xF00242A0u)) /* lint --e(923)*/

/** 208, Demodulator Input Configuration Register */
#define DSADC_CH1_DICFG ((*(volatile Ifx_DSADC_CH_DICFG*)0xF0024208u)) /* lint --e(923)*/

/** 218, Filter Configuration Register, Auxiliary Filter */
#define DSADC_CH1_FCFGA ((*(volatile Ifx_DSADC_CH_FCFGA*)0xF0024218u)) /* lint --e(923)*/

/** 214, Filter Configuration Register, Main Comb Filter */
#define DSADC_CH1_FCFGC ((*(volatile Ifx_DSADC_CH_FCFGC*)0xF0024214u)) /* lint --e(923)*/

/** 210, Filter Configuration Register, Main Filter Chain */
#define DSADC_CH1_FCFGM ((*(volatile Ifx_DSADC_CH_FCFGM*)0xF0024210u)) /* lint --e(923)*/

/** 220, Integration Window Control Register */
#define DSADC_CH1_IWCTR ((*(volatile Ifx_DSADC_CH_IWCTR*)0xF0024220u)) /* lint --e(923)*/

/** 200, Modulator Configuration Register */
#define DSADC_CH1_MODCFG ((*(volatile Ifx_DSADC_CH_MODCFG*)0xF0024200u)) /* lint --e(923)*/

/** 238, Offset Register Main Filter */
#define DSADC_CH1_OFFM ((*(volatile Ifx_DSADC_CH_OFFM*)0xF0024238u)) /* lint --e(923)*/

/** 2A8, Rectification Configuration Register */
#define DSADC_CH1_RECTCFG ((*(volatile Ifx_DSADC_CH_RECTCFG*)0xF00242A8u)) /* lint --e(923)*/

/** 240, Result Register Auxiliary Filter */
#define DSADC_CH1_RESA ((*(volatile Ifx_DSADC_CH_RESA*)0xF0024240u)) /* lint --e(923)*/

/** 230, Result Register Main Filter */
#define DSADC_CH1_RESM ((*(volatile Ifx_DSADC_CH_RESM*)0xF0024230u)) /* lint --e(923)*/

/** 250, Time-Stamp Register */
#define DSADC_CH1_TSTMP ((*(volatile Ifx_DSADC_CH_TSTMP*)0xF0024250u)) /* lint --e(923)*/

/** 328, Boundary Select Register */
#define DSADC_CH2_BOUNDSEL ((*(volatile Ifx_DSADC_CH_BOUNDSEL*)0xF0024328u)) /* lint --e(923)*/

/** 3A0, Carrier Generator Synchronization Register */
#define DSADC_CH2_CGSYNC ((*(volatile Ifx_DSADC_CH_CGSYNC*)0xF00243A0u)) /* lint --e(923)*/

/** 308, Demodulator Input Configuration Register */
#define DSADC_CH2_DICFG ((*(volatile Ifx_DSADC_CH_DICFG*)0xF0024308u)) /* lint --e(923)*/

/** 318, Filter Configuration Register, Auxiliary Filter */
#define DSADC_CH2_FCFGA ((*(volatile Ifx_DSADC_CH_FCFGA*)0xF0024318u)) /* lint --e(923)*/

/** 314, Filter Configuration Register, Main Comb Filter */
#define DSADC_CH2_FCFGC ((*(volatile Ifx_DSADC_CH_FCFGC*)0xF0024314u)) /* lint --e(923)*/

/** 310, Filter Configuration Register, Main Filter Chain */
#define DSADC_CH2_FCFGM ((*(volatile Ifx_DSADC_CH_FCFGM*)0xF0024310u)) /* lint --e(923)*/

/** 320, Integration Window Control Register */
#define DSADC_CH2_IWCTR ((*(volatile Ifx_DSADC_CH_IWCTR*)0xF0024320u)) /* lint --e(923)*/

/** 300, Modulator Configuration Register */
#define DSADC_CH2_MODCFG ((*(volatile Ifx_DSADC_CH_MODCFG*)0xF0024300u)) /* lint --e(923)*/

/** 338, Offset Register Main Filter */
#define DSADC_CH2_OFFM ((*(volatile Ifx_DSADC_CH_OFFM*)0xF0024338u)) /* lint --e(923)*/

/** 3A8, Rectification Configuration Register */
#define DSADC_CH2_RECTCFG ((*(volatile Ifx_DSADC_CH_RECTCFG*)0xF00243A8u)) /* lint --e(923)*/

/** 340, Result Register Auxiliary Filter */
#define DSADC_CH2_RESA ((*(volatile Ifx_DSADC_CH_RESA*)0xF0024340u)) /* lint --e(923)*/

/** 330, Result Register Main Filter */
#define DSADC_CH2_RESM ((*(volatile Ifx_DSADC_CH_RESM*)0xF0024330u)) /* lint --e(923)*/

/** 350, Time-Stamp Register */
#define DSADC_CH2_TSTMP ((*(volatile Ifx_DSADC_CH_TSTMP*)0xF0024350u)) /* lint --e(923)*/

/** 428, Boundary Select Register */
#define DSADC_CH3_BOUNDSEL ((*(volatile Ifx_DSADC_CH_BOUNDSEL*)0xF0024428u)) /* lint --e(923)*/

/** 4A0, Carrier Generator Synchronization Register */
#define DSADC_CH3_CGSYNC ((*(volatile Ifx_DSADC_CH_CGSYNC*)0xF00244A0u)) /* lint --e(923)*/

/** 408, Demodulator Input Configuration Register */
#define DSADC_CH3_DICFG ((*(volatile Ifx_DSADC_CH_DICFG*)0xF0024408u)) /* lint --e(923)*/

/** 418, Filter Configuration Register, Auxiliary Filter */
#define DSADC_CH3_FCFGA ((*(volatile Ifx_DSADC_CH_FCFGA*)0xF0024418u)) /* lint --e(923)*/

/** 414, Filter Configuration Register, Main Comb Filter */
#define DSADC_CH3_FCFGC ((*(volatile Ifx_DSADC_CH_FCFGC*)0xF0024414u)) /* lint --e(923)*/

/** 410, Filter Configuration Register, Main Filter Chain */
#define DSADC_CH3_FCFGM ((*(volatile Ifx_DSADC_CH_FCFGM*)0xF0024410u)) /* lint --e(923)*/

/** 420, Integration Window Control Register */
#define DSADC_CH3_IWCTR ((*(volatile Ifx_DSADC_CH_IWCTR*)0xF0024420u)) /* lint --e(923)*/

/** 400, Modulator Configuration Register */
#define DSADC_CH3_MODCFG ((*(volatile Ifx_DSADC_CH_MODCFG*)0xF0024400u)) /* lint --e(923)*/

/** 438, Offset Register Main Filter */
#define DSADC_CH3_OFFM ((*(volatile Ifx_DSADC_CH_OFFM*)0xF0024438u)) /* lint --e(923)*/

/** 4A8, Rectification Configuration Register */
#define DSADC_CH3_RECTCFG ((*(volatile Ifx_DSADC_CH_RECTCFG*)0xF00244A8u)) /* lint --e(923)*/

/** 440, Result Register Auxiliary Filter */
#define DSADC_CH3_RESA ((*(volatile Ifx_DSADC_CH_RESA*)0xF0024440u)) /* lint --e(923)*/

/** 430, Result Register Main Filter */
#define DSADC_CH3_RESM ((*(volatile Ifx_DSADC_CH_RESM*)0xF0024430u)) /* lint --e(923)*/

/** 450, Time-Stamp Register */
#define DSADC_CH3_TSTMP ((*(volatile Ifx_DSADC_CH_TSTMP*)0xF0024450u)) /* lint --e(923)*/

/** 528, Boundary Select Register */
#define DSADC_CH4_BOUNDSEL ((*(volatile Ifx_DSADC_CH_BOUNDSEL*)0xF0024528u)) /* lint --e(923)*/

/** 5A0, Carrier Generator Synchronization Register */
#define DSADC_CH4_CGSYNC ((*(volatile Ifx_DSADC_CH_CGSYNC*)0xF00245A0u)) /* lint --e(923)*/

/** 508, Demodulator Input Configuration Register */
#define DSADC_CH4_DICFG ((*(volatile Ifx_DSADC_CH_DICFG*)0xF0024508u)) /* lint --e(923)*/

/** 518, Filter Configuration Register, Auxiliary Filter */
#define DSADC_CH4_FCFGA ((*(volatile Ifx_DSADC_CH_FCFGA*)0xF0024518u)) /* lint --e(923)*/

/** 514, Filter Configuration Register, Main Comb Filter */
#define DSADC_CH4_FCFGC ((*(volatile Ifx_DSADC_CH_FCFGC*)0xF0024514u)) /* lint --e(923)*/

/** 510, Filter Configuration Register, Main Filter Chain */
#define DSADC_CH4_FCFGM ((*(volatile Ifx_DSADC_CH_FCFGM*)0xF0024510u)) /* lint --e(923)*/

/** 520, Integration Window Control Register */
#define DSADC_CH4_IWCTR ((*(volatile Ifx_DSADC_CH_IWCTR*)0xF0024520u)) /* lint --e(923)*/

/** 500, Modulator Configuration Register */
#define DSADC_CH4_MODCFG ((*(volatile Ifx_DSADC_CH_MODCFG*)0xF0024500u)) /* lint --e(923)*/

/** 538, Offset Register Main Filter */
#define DSADC_CH4_OFFM ((*(volatile Ifx_DSADC_CH_OFFM*)0xF0024538u)) /* lint --e(923)*/

/** 5A8, Rectification Configuration Register */
#define DSADC_CH4_RECTCFG ((*(volatile Ifx_DSADC_CH_RECTCFG*)0xF00245A8u)) /* lint --e(923)*/

/** 540, Result Register Auxiliary Filter */
#define DSADC_CH4_RESA ((*(volatile Ifx_DSADC_CH_RESA*)0xF0024540u)) /* lint --e(923)*/

/** 530, Result Register Main Filter */
#define DSADC_CH4_RESM ((*(volatile Ifx_DSADC_CH_RESM*)0xF0024530u)) /* lint --e(923)*/

/** 550, Time-Stamp Register */
#define DSADC_CH4_TSTMP ((*(volatile Ifx_DSADC_CH_TSTMP*)0xF0024550u)) /* lint --e(923)*/

/** 628, Boundary Select Register */
#define DSADC_CH5_BOUNDSEL ((*(volatile Ifx_DSADC_CH_BOUNDSEL*)0xF0024628u)) /* lint --e(923)*/

/** 6A0, Carrier Generator Synchronization Register */
#define DSADC_CH5_CGSYNC ((*(volatile Ifx_DSADC_CH_CGSYNC*)0xF00246A0u)) /* lint --e(923)*/

/** 608, Demodulator Input Configuration Register */
#define DSADC_CH5_DICFG ((*(volatile Ifx_DSADC_CH_DICFG*)0xF0024608u)) /* lint --e(923)*/

/** 618, Filter Configuration Register, Auxiliary Filter */
#define DSADC_CH5_FCFGA ((*(volatile Ifx_DSADC_CH_FCFGA*)0xF0024618u)) /* lint --e(923)*/

/** 614, Filter Configuration Register, Main Comb Filter */
#define DSADC_CH5_FCFGC ((*(volatile Ifx_DSADC_CH_FCFGC*)0xF0024614u)) /* lint --e(923)*/

/** 610, Filter Configuration Register, Main Filter Chain */
#define DSADC_CH5_FCFGM ((*(volatile Ifx_DSADC_CH_FCFGM*)0xF0024610u)) /* lint --e(923)*/

/** 620, Integration Window Control Register */
#define DSADC_CH5_IWCTR ((*(volatile Ifx_DSADC_CH_IWCTR*)0xF0024620u)) /* lint --e(923)*/

/** 600, Modulator Configuration Register */
#define DSADC_CH5_MODCFG ((*(volatile Ifx_DSADC_CH_MODCFG*)0xF0024600u)) /* lint --e(923)*/

/** 638, Offset Register Main Filter */
#define DSADC_CH5_OFFM ((*(volatile Ifx_DSADC_CH_OFFM*)0xF0024638u)) /* lint --e(923)*/

/** 6A8, Rectification Configuration Register */
#define DSADC_CH5_RECTCFG ((*(volatile Ifx_DSADC_CH_RECTCFG*)0xF00246A8u)) /* lint --e(923)*/

/** 640, Result Register Auxiliary Filter */
#define DSADC_CH5_RESA ((*(volatile Ifx_DSADC_CH_RESA*)0xF0024640u)) /* lint --e(923)*/

/** 630, Result Register Main Filter */
#define DSADC_CH5_RESM ((*(volatile Ifx_DSADC_CH_RESM*)0xF0024630u)) /* lint --e(923)*/

/** 650, Time-Stamp Register */
#define DSADC_CH5_TSTMP ((*(volatile Ifx_DSADC_CH_TSTMP*)0xF0024650u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define DSADC_CLC ((*(volatile Ifx_CLC2*)0xF0024000u)) /* lint --e(923)*/

/** Alias for DSADC_CH0_DICFG.
 *  Note that this definition is obsolete, use DSADC_CH0_DICFG instead.
 * 108, Demodulator Input Configuration Register
 */
#define DSADC_DICFG0 (DSADC_CH0_DICFG)

/** Alias for DSADC_CH1_DICFG.
 *  Note that this definition is obsolete, use DSADC_CH1_DICFG instead.
 * 208, Demodulator Input Configuration Register
 */
#define DSADC_DICFG1 (DSADC_CH1_DICFG)

/** Alias for DSADC_CH2_DICFG.
 *  Note that this definition is obsolete, use DSADC_CH2_DICFG instead.
 * 308, Demodulator Input Configuration Register
 */
#define DSADC_DICFG2 (DSADC_CH2_DICFG)

/** Alias for DSADC_CH3_DICFG.
 *  Note that this definition is obsolete, use DSADC_CH3_DICFG instead.
 * 408, Demodulator Input Configuration Register
 */
#define DSADC_DICFG3 (DSADC_CH3_DICFG)

/** Alias for DSADC_CH4_DICFG.
 *  Note that this definition is obsolete, use DSADC_CH4_DICFG instead.
 * 508, Demodulator Input Configuration Register
 */
#define DSADC_DICFG4 (DSADC_CH4_DICFG)

/** Alias for DSADC_CH5_DICFG.
 *  Note that this definition is obsolete, use DSADC_CH5_DICFG instead.
 * 608, Demodulator Input Configuration Register
 */
#define DSADC_DICFG5 (DSADC_CH5_DICFG)

/** E0, Event Flag Register */
#define DSADC_EVFLAG ((*(volatile Ifx_DSADC_EVFLAG*)0xF00240E0u)) /* lint --e(923)*/

/** E4, Event Flag Clear Register */
#define DSADC_EVFLAGCLR ((*(volatile Ifx_DSADC_EVFLAGCLR*)0xF00240E4u)) /* lint --e(923)*/

/** Alias for DSADC_CH0_FCFGA.
 *  Note that this definition is obsolete, use DSADC_CH0_FCFGA instead.
 * 118, Filter Configuration Register, Auxiliary Filter
 */
#define DSADC_FCFGA0 (DSADC_CH0_FCFGA)

/** Alias for DSADC_CH1_FCFGA.
 *  Note that this definition is obsolete, use DSADC_CH1_FCFGA instead.
 * 218, Filter Configuration Register, Auxiliary Filter
 */
#define DSADC_FCFGA1 (DSADC_CH1_FCFGA)

/** Alias for DSADC_CH2_FCFGA.
 *  Note that this definition is obsolete, use DSADC_CH2_FCFGA instead.
 * 318, Filter Configuration Register, Auxiliary Filter
 */
#define DSADC_FCFGA2 (DSADC_CH2_FCFGA)

/** Alias for DSADC_CH3_FCFGA.
 *  Note that this definition is obsolete, use DSADC_CH3_FCFGA instead.
 * 418, Filter Configuration Register, Auxiliary Filter
 */
#define DSADC_FCFGA3 (DSADC_CH3_FCFGA)

/** Alias for DSADC_CH4_FCFGA.
 *  Note that this definition is obsolete, use DSADC_CH4_FCFGA instead.
 * 518, Filter Configuration Register, Auxiliary Filter
 */
#define DSADC_FCFGA4 (DSADC_CH4_FCFGA)

/** Alias for DSADC_CH5_FCFGA.
 *  Note that this definition is obsolete, use DSADC_CH5_FCFGA instead.
 * 618, Filter Configuration Register, Auxiliary Filter
 */
#define DSADC_FCFGA5 (DSADC_CH5_FCFGA)

/** Alias for DSADC_CH0_FCFGC.
 *  Note that this definition is obsolete, use DSADC_CH0_FCFGC instead.
 * 114, Filter Configuration Register, Main Comb Filter
 */
#define DSADC_FCFGC0 (DSADC_CH0_FCFGC)

/** Alias for DSADC_CH1_FCFGC.
 *  Note that this definition is obsolete, use DSADC_CH1_FCFGC instead.
 * 214, Filter Configuration Register, Main Comb Filter
 */
#define DSADC_FCFGC1 (DSADC_CH1_FCFGC)

/** Alias for DSADC_CH2_FCFGC.
 *  Note that this definition is obsolete, use DSADC_CH2_FCFGC instead.
 * 314, Filter Configuration Register, Main Comb Filter
 */
#define DSADC_FCFGC2 (DSADC_CH2_FCFGC)

/** Alias for DSADC_CH3_FCFGC.
 *  Note that this definition is obsolete, use DSADC_CH3_FCFGC instead.
 * 414, Filter Configuration Register, Main Comb Filter
 */
#define DSADC_FCFGC3 (DSADC_CH3_FCFGC)

/** Alias for DSADC_CH4_FCFGC.
 *  Note that this definition is obsolete, use DSADC_CH4_FCFGC instead.
 * 514, Filter Configuration Register, Main Comb Filter
 */
#define DSADC_FCFGC4 (DSADC_CH4_FCFGC)

/** Alias for DSADC_CH5_FCFGC.
 *  Note that this definition is obsolete, use DSADC_CH5_FCFGC instead.
 * 614, Filter Configuration Register, Main Comb Filter
 */
#define DSADC_FCFGC5 (DSADC_CH5_FCFGC)

/** Alias for DSADC_CH0_FCFGM.
 *  Note that this definition is obsolete, use DSADC_CH0_FCFGM instead.
 * 110, Filter Configuration Register, Main Filter Chain
 */
#define DSADC_FCFGM0 (DSADC_CH0_FCFGM)

/** Alias for DSADC_CH1_FCFGM.
 *  Note that this definition is obsolete, use DSADC_CH1_FCFGM instead.
 * 210, Filter Configuration Register, Main Filter Chain
 */
#define DSADC_FCFGM1 (DSADC_CH1_FCFGM)

/** Alias for DSADC_CH2_FCFGM.
 *  Note that this definition is obsolete, use DSADC_CH2_FCFGM instead.
 * 310, Filter Configuration Register, Main Filter Chain
 */
#define DSADC_FCFGM2 (DSADC_CH2_FCFGM)

/** Alias for DSADC_CH3_FCFGM.
 *  Note that this definition is obsolete, use DSADC_CH3_FCFGM instead.
 * 410, Filter Configuration Register, Main Filter Chain
 */
#define DSADC_FCFGM3 (DSADC_CH3_FCFGM)

/** Alias for DSADC_CH4_FCFGM.
 *  Note that this definition is obsolete, use DSADC_CH4_FCFGM instead.
 * 510, Filter Configuration Register, Main Filter Chain
 */
#define DSADC_FCFGM4 (DSADC_CH4_FCFGM)

/** Alias for DSADC_CH5_FCFGM.
 *  Note that this definition is obsolete, use DSADC_CH5_FCFGM instead.
 * 610, Filter Configuration Register, Main Filter Chain
 */
#define DSADC_FCFGM5 (DSADC_CH5_FCFGM)

/** 80, Global Configuration Register */
#define DSADC_GLOBCFG ((*(volatile Ifx_DSADC_GLOBCFG*)0xF0024080u)) /* lint --e(923)*/

/** 88, Global Run Control Register */
#define DSADC_GLOBRC ((*(volatile Ifx_DSADC_GLOBRC*)0xF0024088u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define DSADC_ID ((*(volatile Ifx_ID1*)0xF0024008u)) /* lint --e(923)*/

/** Alias for DSADC_CH0_IWCTR.
 *  Note that this definition is obsolete, use DSADC_CH0_IWCTR instead.
 * 120, Integration Window Control Register
 */
#define DSADC_IWCTR0 (DSADC_CH0_IWCTR)

/** Alias for DSADC_CH1_IWCTR.
 *  Note that this definition is obsolete, use DSADC_CH1_IWCTR instead.
 * 220, Integration Window Control Register
 */
#define DSADC_IWCTR1 (DSADC_CH1_IWCTR)

/** Alias for DSADC_CH2_IWCTR.
 *  Note that this definition is obsolete, use DSADC_CH2_IWCTR instead.
 * 320, Integration Window Control Register
 */
#define DSADC_IWCTR2 (DSADC_CH2_IWCTR)

/** Alias for DSADC_CH3_IWCTR.
 *  Note that this definition is obsolete, use DSADC_CH3_IWCTR instead.
 * 420, Integration Window Control Register
 */
#define DSADC_IWCTR3 (DSADC_CH3_IWCTR)

/** Alias for DSADC_CH4_IWCTR.
 *  Note that this definition is obsolete, use DSADC_CH4_IWCTR instead.
 * 520, Integration Window Control Register
 */
#define DSADC_IWCTR4 (DSADC_CH4_IWCTR)

/** Alias for DSADC_CH5_IWCTR.
 *  Note that this definition is obsolete, use DSADC_CH5_IWCTR instead.
 * 620, Integration Window Control Register
 */
#define DSADC_IWCTR5 (DSADC_CH5_IWCTR)

/** 34, Kernel Reset Register 0 */
#define DSADC_KRST0 ((*(volatile Ifx_DSADC_KRST0*)0xF0024034u)) /* lint --e(923)*/

/** 30, Kernel Reset Register 1 */
#define DSADC_KRST1 ((*(volatile Ifx_DSADC_KRST1*)0xF0024030u)) /* lint --e(923)*/

/** 2C, Kernel Reset Status Clear Register */
#define DSADC_KRSTCLR ((*(volatile Ifx_DSADC_KRSTCLR*)0xF002402Cu)) /* lint --e(923)*/

/** Alias for DSADC_CH0_MODCFG.
 *  Note that this definition is obsolete, use DSADC_CH0_MODCFG instead.
 * 100, Modulator Configuration Register
 */
#define DSADC_MODCFG0 (DSADC_CH0_MODCFG)

/** Alias for DSADC_CH1_MODCFG.
 *  Note that this definition is obsolete, use DSADC_CH1_MODCFG instead.
 * 200, Modulator Configuration Register
 */
#define DSADC_MODCFG1 (DSADC_CH1_MODCFG)

/** Alias for DSADC_CH2_MODCFG.
 *  Note that this definition is obsolete, use DSADC_CH2_MODCFG instead.
 * 300, Modulator Configuration Register
 */
#define DSADC_MODCFG2 (DSADC_CH2_MODCFG)

/** Alias for DSADC_CH3_MODCFG.
 *  Note that this definition is obsolete, use DSADC_CH3_MODCFG instead.
 * 400, Modulator Configuration Register
 */
#define DSADC_MODCFG3 (DSADC_CH3_MODCFG)

/** Alias for DSADC_CH4_MODCFG.
 *  Note that this definition is obsolete, use DSADC_CH4_MODCFG instead.
 * 500, Modulator Configuration Register
 */
#define DSADC_MODCFG4 (DSADC_CH4_MODCFG)

/** Alias for DSADC_CH5_MODCFG.
 *  Note that this definition is obsolete, use DSADC_CH5_MODCFG instead.
 * 600, Modulator Configuration Register
 */
#define DSADC_MODCFG5 (DSADC_CH5_MODCFG)

/** 28, OCDS Control and Status Register */
#define DSADC_OCS ((*(volatile Ifx_DSADC_OCS*)0xF0024028u)) /* lint --e(923)*/

/** Alias for DSADC_CH0_OFFM.
 *  Note that this definition is obsolete, use DSADC_CH0_OFFM instead.
 * 138, Offset Register Main Filter
 */
#define DSADC_OFFM0 (DSADC_CH0_OFFM)

/** Alias for DSADC_CH1_OFFM.
 *  Note that this definition is obsolete, use DSADC_CH1_OFFM instead.
 * 238, Offset Register Main Filter
 */
#define DSADC_OFFM1 (DSADC_CH1_OFFM)

/** Alias for DSADC_CH2_OFFM.
 *  Note that this definition is obsolete, use DSADC_CH2_OFFM instead.
 * 338, Offset Register Main Filter
 */
#define DSADC_OFFM2 (DSADC_CH2_OFFM)

/** Alias for DSADC_CH3_OFFM.
 *  Note that this definition is obsolete, use DSADC_CH3_OFFM instead.
 * 438, Offset Register Main Filter
 */
#define DSADC_OFFM3 (DSADC_CH3_OFFM)

/** Alias for DSADC_CH4_OFFM.
 *  Note that this definition is obsolete, use DSADC_CH4_OFFM instead.
 * 538, Offset Register Main Filter
 */
#define DSADC_OFFM4 (DSADC_CH4_OFFM)

/** Alias for DSADC_CH5_OFFM.
 *  Note that this definition is obsolete, use DSADC_CH5_OFFM instead.
 * 638, Offset Register Main Filter
 */
#define DSADC_OFFM5 (DSADC_CH5_OFFM)

/** Alias for DSADC_CH0_RECTCFG.
 *  Note that this definition is obsolete, use DSADC_CH0_RECTCFG instead.
 * 1A8, Rectification Configuration Register
 */
#define DSADC_RECTCFG0 (DSADC_CH0_RECTCFG)

/** Alias for DSADC_CH1_RECTCFG.
 *  Note that this definition is obsolete, use DSADC_CH1_RECTCFG instead.
 * 2A8, Rectification Configuration Register
 */
#define DSADC_RECTCFG1 (DSADC_CH1_RECTCFG)

/** Alias for DSADC_CH2_RECTCFG.
 *  Note that this definition is obsolete, use DSADC_CH2_RECTCFG instead.
 * 3A8, Rectification Configuration Register
 */
#define DSADC_RECTCFG2 (DSADC_CH2_RECTCFG)

/** Alias for DSADC_CH3_RECTCFG.
 *  Note that this definition is obsolete, use DSADC_CH3_RECTCFG instead.
 * 4A8, Rectification Configuration Register
 */
#define DSADC_RECTCFG3 (DSADC_CH3_RECTCFG)

/** Alias for DSADC_CH4_RECTCFG.
 *  Note that this definition is obsolete, use DSADC_CH4_RECTCFG instead.
 * 5A8, Rectification Configuration Register
 */
#define DSADC_RECTCFG4 (DSADC_CH4_RECTCFG)

/** Alias for DSADC_CH5_RECTCFG.
 *  Note that this definition is obsolete, use DSADC_CH5_RECTCFG instead.
 * 6A8, Rectification Configuration Register
 */
#define DSADC_RECTCFG5 (DSADC_CH5_RECTCFG)

/** Alias for DSADC_CH0_RESA.
 *  Note that this definition is obsolete, use DSADC_CH0_RESA instead.
 * 140, Result Register Auxiliary Filter
 */
#define DSADC_RESA0 (DSADC_CH0_RESA)

/** Alias for DSADC_CH1_RESA.
 *  Note that this definition is obsolete, use DSADC_CH1_RESA instead.
 * 240, Result Register Auxiliary Filter
 */
#define DSADC_RESA1 (DSADC_CH1_RESA)

/** Alias for DSADC_CH2_RESA.
 *  Note that this definition is obsolete, use DSADC_CH2_RESA instead.
 * 340, Result Register Auxiliary Filter
 */
#define DSADC_RESA2 (DSADC_CH2_RESA)

/** Alias for DSADC_CH3_RESA.
 *  Note that this definition is obsolete, use DSADC_CH3_RESA instead.
 * 440, Result Register Auxiliary Filter
 */
#define DSADC_RESA3 (DSADC_CH3_RESA)

/** Alias for DSADC_CH4_RESA.
 *  Note that this definition is obsolete, use DSADC_CH4_RESA instead.
 * 540, Result Register Auxiliary Filter
 */
#define DSADC_RESA4 (DSADC_CH4_RESA)

/** Alias for DSADC_CH5_RESA.
 *  Note that this definition is obsolete, use DSADC_CH5_RESA instead.
 * 640, Result Register Auxiliary Filter
 */
#define DSADC_RESA5 (DSADC_CH5_RESA)

/** Alias for DSADC_CH0_RESM.
 *  Note that this definition is obsolete, use DSADC_CH0_RESM instead.
 * 130, Result Register Main Filter
 */
#define DSADC_RESM0 (DSADC_CH0_RESM)

/** Alias for DSADC_CH1_RESM.
 *  Note that this definition is obsolete, use DSADC_CH1_RESM instead.
 * 230, Result Register Main Filter
 */
#define DSADC_RESM1 (DSADC_CH1_RESM)

/** Alias for DSADC_CH2_RESM.
 *  Note that this definition is obsolete, use DSADC_CH2_RESM instead.
 * 330, Result Register Main Filter
 */
#define DSADC_RESM2 (DSADC_CH2_RESM)

/** Alias for DSADC_CH3_RESM.
 *  Note that this definition is obsolete, use DSADC_CH3_RESM instead.
 * 430, Result Register Main Filter
 */
#define DSADC_RESM3 (DSADC_CH3_RESM)

/** Alias for DSADC_CH4_RESM.
 *  Note that this definition is obsolete, use DSADC_CH4_RESM instead.
 * 530, Result Register Main Filter
 */
#define DSADC_RESM4 (DSADC_CH4_RESM)

/** Alias for DSADC_CH5_RESM.
 *  Note that this definition is obsolete, use DSADC_CH5_RESM instead.
 * 630, Result Register Main Filter
 */
#define DSADC_RESM5 (DSADC_CH5_RESM)

/** Alias for DSADC_CH0_TSTMP.
 *  Note that this definition is obsolete, use DSADC_CH0_TSTMP instead.
 * 150, Time-Stamp Register
 */
#define DSADC_TSTMP0 (DSADC_CH0_TSTMP)

/** Alias for DSADC_CH1_TSTMP.
 *  Note that this definition is obsolete, use DSADC_CH1_TSTMP instead.
 * 250, Time-Stamp Register
 */
#define DSADC_TSTMP1 (DSADC_CH1_TSTMP)

/** Alias for DSADC_CH2_TSTMP.
 *  Note that this definition is obsolete, use DSADC_CH2_TSTMP instead.
 * 350, Time-Stamp Register
 */
#define DSADC_TSTMP2 (DSADC_CH2_TSTMP)

/** Alias for DSADC_CH3_TSTMP.
 *  Note that this definition is obsolete, use DSADC_CH3_TSTMP instead.
 * 450, Time-Stamp Register
 */
#define DSADC_TSTMP3 (DSADC_CH3_TSTMP)

/** Alias for DSADC_CH4_TSTMP.
 *  Note that this definition is obsolete, use DSADC_CH4_TSTMP instead.
 * 550, Time-Stamp Register
 */
#define DSADC_TSTMP4 (DSADC_CH4_TSTMP)

/** Alias for DSADC_CH5_TSTMP.
 *  Note that this definition is obsolete, use DSADC_CH5_TSTMP instead.
 * 650, Time-Stamp Register
 */
#define DSADC_TSTMP5 (DSADC_CH5_TSTMP)
/******************************************************************************/
#endif /* IFXDSADC_REG_H */

