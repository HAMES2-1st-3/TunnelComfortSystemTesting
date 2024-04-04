/**
 * \file IfxVadc_reg.h
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
#ifndef IFXVADC_REG_H
#define IFXVADC_REG_H
/******************************************************************************/
#include "Vadc/IfxVadc_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** VADC object */
#define MODULE_VADC ((*(Ifx_VADC*)0xF0020000u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-VADC)                               */
/******************************************************************************/

/** 3C, Access Enable Register 0 */
#define VADC_ACCEN0 ((*(volatile Ifx_VADC_ACCEN0*)0xF002003Cu)) /* lint --e(923)*/

/** 88, Access Protection Register */
#define VADC_ACCPROT ((*(volatile Ifx_VADC_ACCPROT*)0xF0020088u)) /* lint --e(923)*/

/** 200, Background Request Source Control Register */
#define VADC_BRSCTRL ((*(volatile Ifx_VADC_BRSCTRL*)0xF0020200u)) /* lint --e(923)*/

/** 204, Background Request Source Mode Register */
#define VADC_BRSMR ((*(volatile Ifx_VADC_BRSMR*)0xF0020204u)) /* lint --e(923)*/

/** 1C0, Background Request Source Pending Register, Group */
#define VADC_BRSPND0 ((*(volatile Ifx_VADC_BRSPND*)0xF00201C0u)) /* lint --e(923)*/

/** 1C4, Background Request Source Pending Register, Group */
#define VADC_BRSPND1 ((*(volatile Ifx_VADC_BRSPND*)0xF00201C4u)) /* lint --e(923)*/

/** 1F8, Background Request Source Pending Register, Group 14 */
#define VADC_BRSPND14 ((*(volatile Ifx_VADC_BRSPND*)0xF00201F8u)) /* lint --e(923)*/

/** 1C8, Background Request Source Pending Register, Group */
#define VADC_BRSPND2 ((*(volatile Ifx_VADC_BRSPND*)0xF00201C8u)) /* lint --e(923)*/

/** 1CC, Background Request Source Pending Register, Group */
#define VADC_BRSPND3 ((*(volatile Ifx_VADC_BRSPND*)0xF00201CCu)) /* lint --e(923)*/

/** 1D0, Background Request Source Pending Register, Group */
#define VADC_BRSPND4 ((*(volatile Ifx_VADC_BRSPND*)0xF00201D0u)) /* lint --e(923)*/

/** 1D4, Background Request Source Pending Register, Group */
#define VADC_BRSPND5 ((*(volatile Ifx_VADC_BRSPND*)0xF00201D4u)) /* lint --e(923)*/

/** 1D8, Background Request Source Pending Register, Group */
#define VADC_BRSPND6 ((*(volatile Ifx_VADC_BRSPND*)0xF00201D8u)) /* lint --e(923)*/

/** 1DC, Background Request Source Pending Register, Group */
#define VADC_BRSPND7 ((*(volatile Ifx_VADC_BRSPND*)0xF00201DCu)) /* lint --e(923)*/

/** 180, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL0 ((*(volatile Ifx_VADC_BRSSEL*)0xF0020180u)) /* lint --e(923)*/

/** 184, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL1 ((*(volatile Ifx_VADC_BRSSEL*)0xF0020184u)) /* lint --e(923)*/

/** 1B8, Background Request Source Channel Select Register, Group 14 */
#define VADC_BRSSEL14 ((*(volatile Ifx_VADC_BRSSEL*)0xF00201B8u)) /* lint --e(923)*/

/** 188, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL2 ((*(volatile Ifx_VADC_BRSSEL*)0xF0020188u)) /* lint --e(923)*/

/** 18C, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL3 ((*(volatile Ifx_VADC_BRSSEL*)0xF002018Cu)) /* lint --e(923)*/

/** 190, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL4 ((*(volatile Ifx_VADC_BRSSEL*)0xF0020190u)) /* lint --e(923)*/

/** 194, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL5 ((*(volatile Ifx_VADC_BRSSEL*)0xF0020194u)) /* lint --e(923)*/

/** 198, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL6 ((*(volatile Ifx_VADC_BRSSEL*)0xF0020198u)) /* lint --e(923)*/

/** 19C, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL7 ((*(volatile Ifx_VADC_BRSSEL*)0xF002019Cu)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define VADC_CLC ((*(volatile Ifx_CLC2*)0xF0020000u)) /* lint --e(923)*/

/** 3F0, External Multiplexer Select Register */
#define VADC_EMUXSEL ((*(volatile Ifx_VADC_EMUXSEL*)0xF00203F0u)) /* lint --e(923)*/

/** 4B0, Alias Register, Group */
#define VADC_G0_ALIAS ((*(volatile Ifx_VADC_G_ALIAS*)0xF00204B0u)) /* lint --e(923)*/

/** 480, Arbitration Configuration Register, Group */
#define VADC_G0_ARBCFG ((*(volatile Ifx_VADC_G_ARBCFG*)0xF0020480u)) /* lint --e(923)*/

/** 484, Arbitration Priority Register, Group */
#define VADC_G0_ARBPR ((*(volatile Ifx_VADC_G_ARBPR*)0xF0020484u)) /* lint --e(923)*/

/** 520, Autoscan Source Control Register, Group */
#define VADC_G0_ASCTRL ((*(volatile Ifx_VADC_G_ASCTRL*)0xF0020520u)) /* lint --e(923)*/

/** 524, Autoscan Source Mode Register, Group */
#define VADC_G0_ASMR ((*(volatile Ifx_VADC_G_ASMR*)0xF0020524u)) /* lint --e(923)*/

/** 52C, Autoscan Source Pending Register, Group */
#define VADC_G0_ASPND ((*(volatile Ifx_VADC_G_ASPND*)0xF002052Cu)) /* lint --e(923)*/

/** 528, Autoscan Source Channel Select Register, Group */
#define VADC_G0_ASSEL ((*(volatile Ifx_VADC_G_ASSEL*)0xF0020528u)) /* lint --e(923)*/

/** 4C8, Boundary Flag Register, Group */
#define VADC_G0_BFL ((*(volatile Ifx_VADC_G_BFL*)0xF00204C8u)) /* lint --e(923)*/

/** 4B8, Boundary Select Register, Group */
#define VADC_G0_BOUND ((*(volatile Ifx_VADC_G_BOUND*)0xF00204B8u)) /* lint --e(923)*/

/** 590, Channel Event Flag Clear Register, Group */
#define VADC_G0_CEFCLR ((*(volatile Ifx_VADC_G_CEFCLR*)0xF0020590u)) /* lint --e(923)*/

/** 580, Channel Event Flag Register, Group */
#define VADC_G0_CEFLAG ((*(volatile Ifx_VADC_G_CEFLAG*)0xF0020580u)) /* lint --e(923)*/

/** 5A0, Channel Event Node Pointer Register 0, Group */
#define VADC_G0_CEVNP0 ((*(volatile Ifx_VADC_G_CEVNP0*)0xF00205A0u)) /* lint --e(923)*/

/** 488, Channel Assignment Register, Group */
#define VADC_G0_CHASS ((*(volatile Ifx_VADC_G_CHASS*)0xF0020488u)) /* lint --e(923)*/

/** 600, Group, Channel Control Register */
#define VADC_G0_CHCTR0 ((*(volatile Ifx_VADC_CHCTR*)0xF0020600u)) /* lint --e(923)*/

/** 604, Group, Channel Control Register */
#define VADC_G0_CHCTR1 ((*(volatile Ifx_VADC_CHCTR*)0xF0020604u)) /* lint --e(923)*/

/** 608, Group, Channel Control Register */
#define VADC_G0_CHCTR2 ((*(volatile Ifx_VADC_CHCTR*)0xF0020608u)) /* lint --e(923)*/

/** 60C, Group, Channel Control Register */
#define VADC_G0_CHCTR3 ((*(volatile Ifx_VADC_CHCTR*)0xF002060Cu)) /* lint --e(923)*/

/** 610, Group, Channel Control Register */
#define VADC_G0_CHCTR4 ((*(volatile Ifx_VADC_CHCTR*)0xF0020610u)) /* lint --e(923)*/

/** 614, Group, Channel Control Register */
#define VADC_G0_CHCTR5 ((*(volatile Ifx_VADC_CHCTR*)0xF0020614u)) /* lint --e(923)*/

/** 618, Group, Channel Control Register */
#define VADC_G0_CHCTR6 ((*(volatile Ifx_VADC_CHCTR*)0xF0020618u)) /* lint --e(923)*/

/** 61C, Group, Channel Control Register */
#define VADC_G0_CHCTR7 ((*(volatile Ifx_VADC_CHCTR*)0xF002061Cu)) /* lint --e(923)*/

/** 5F0, External Multiplexer Control Register, Group x */
#define VADC_G0_EMUXCTR ((*(volatile Ifx_VADC_G_EMUXCTR*)0xF00205F0u)) /* lint --e(923)*/

/** 4A0, Input Class Register */
#define VADC_G0_ICLASS0 ((*(volatile Ifx_VADC_ICLASS*)0xF00204A0u)) /* lint --e(923)*/

/** 4A4, Input Class Register */
#define VADC_G0_ICLASS1 ((*(volatile Ifx_VADC_ICLASS*)0xF00204A4u)) /* lint --e(923)*/

/** 50C, Queue 0 Register 0, Group */
#define VADC_G0_Q0R0 ((*(volatile Ifx_VADC_G_Q0R0*)0xF002050Cu)) /* lint --e(923)*/

/** 500, Queue 0 Source Control Register, Group */
#define VADC_G0_QCTRL0 ((*(volatile Ifx_VADC_G_QCTRL0*)0xF0020500u)) /* lint --e(923)*/

/** 510, Queue 0 Input Register, Group */
#define VADC_G0_QINR0 ((*(volatile Ifx_VADC_G_QINR0*)0xF0020510u)) /* lint --e(923)*/

/** 504, Queue 0 Mode Register, Group */
#define VADC_G0_QMR0 ((*(volatile Ifx_VADC_G_QMR0*)0xF0020504u)) /* lint --e(923)*/

/** 508, Queue 0 Status Register, Group */
#define VADC_G0_QSR0 ((*(volatile Ifx_VADC_G_QSR0*)0xF0020508u)) /* lint --e(923)*/

/** 680, Group Result Control Register */
#define VADC_G0_RCR0 ((*(volatile Ifx_VADC_RCR*)0xF0020680u)) /* lint --e(923)*/

/** 684, Group Result Control Register */
#define VADC_G0_RCR1 ((*(volatile Ifx_VADC_RCR*)0xF0020684u)) /* lint --e(923)*/

/** 6A8, Group Result Control Register */
#define VADC_G0_RCR10 ((*(volatile Ifx_VADC_RCR*)0xF00206A8u)) /* lint --e(923)*/

/** 6AC, Group Result Control Register */
#define VADC_G0_RCR11 ((*(volatile Ifx_VADC_RCR*)0xF00206ACu)) /* lint --e(923)*/

/** 6B0, Group Result Control Register */
#define VADC_G0_RCR12 ((*(volatile Ifx_VADC_RCR*)0xF00206B0u)) /* lint --e(923)*/

/** 6B4, Group Result Control Register */
#define VADC_G0_RCR13 ((*(volatile Ifx_VADC_RCR*)0xF00206B4u)) /* lint --e(923)*/

/** 6B8, Group Result Control Register */
#define VADC_G0_RCR14 ((*(volatile Ifx_VADC_RCR*)0xF00206B8u)) /* lint --e(923)*/

/** 6BC, Group Result Control Register */
#define VADC_G0_RCR15 ((*(volatile Ifx_VADC_RCR*)0xF00206BCu)) /* lint --e(923)*/

/** 688, Group Result Control Register */
#define VADC_G0_RCR2 ((*(volatile Ifx_VADC_RCR*)0xF0020688u)) /* lint --e(923)*/

/** 68C, Group Result Control Register */
#define VADC_G0_RCR3 ((*(volatile Ifx_VADC_RCR*)0xF002068Cu)) /* lint --e(923)*/

/** 690, Group Result Control Register */
#define VADC_G0_RCR4 ((*(volatile Ifx_VADC_RCR*)0xF0020690u)) /* lint --e(923)*/

/** 694, Group Result Control Register */
#define VADC_G0_RCR5 ((*(volatile Ifx_VADC_RCR*)0xF0020694u)) /* lint --e(923)*/

/** 698, Group Result Control Register */
#define VADC_G0_RCR6 ((*(volatile Ifx_VADC_RCR*)0xF0020698u)) /* lint --e(923)*/

/** 69C, Group Result Control Register */
#define VADC_G0_RCR7 ((*(volatile Ifx_VADC_RCR*)0xF002069Cu)) /* lint --e(923)*/

/** 6A0, Group Result Control Register */
#define VADC_G0_RCR8 ((*(volatile Ifx_VADC_RCR*)0xF00206A0u)) /* lint --e(923)*/

/** 6A4, Group Result Control Register */
#define VADC_G0_RCR9 ((*(volatile Ifx_VADC_RCR*)0xF00206A4u)) /* lint --e(923)*/

/** 594, Result Event Flag Clear Register, Group */
#define VADC_G0_REFCLR ((*(volatile Ifx_VADC_G_REFCLR*)0xF0020594u)) /* lint --e(923)*/

/** 584, Result Event Flag Register, Group */
#define VADC_G0_REFLAG ((*(volatile Ifx_VADC_G_REFLAG*)0xF0020584u)) /* lint --e(923)*/

/** 700, Group Result Register */
#define VADC_G0_RES0 ((*(volatile Ifx_VADC_RES*)0xF0020700u)) /* lint --e(923)*/

/** 704, Group Result Register */
#define VADC_G0_RES1 ((*(volatile Ifx_VADC_RES*)0xF0020704u)) /* lint --e(923)*/

/** 728, Group Result Register */
#define VADC_G0_RES10 ((*(volatile Ifx_VADC_RES*)0xF0020728u)) /* lint --e(923)*/

/** 72C, Group Result Register */
#define VADC_G0_RES11 ((*(volatile Ifx_VADC_RES*)0xF002072Cu)) /* lint --e(923)*/

/** 730, Group Result Register */
#define VADC_G0_RES12 ((*(volatile Ifx_VADC_RES*)0xF0020730u)) /* lint --e(923)*/

/** 734, Group Result Register */
#define VADC_G0_RES13 ((*(volatile Ifx_VADC_RES*)0xF0020734u)) /* lint --e(923)*/

/** 738, Group Result Register */
#define VADC_G0_RES14 ((*(volatile Ifx_VADC_RES*)0xF0020738u)) /* lint --e(923)*/

/** 73C, Group Result Register */
#define VADC_G0_RES15 ((*(volatile Ifx_VADC_RES*)0xF002073Cu)) /* lint --e(923)*/

/** 708, Group Result Register */
#define VADC_G0_RES2 ((*(volatile Ifx_VADC_RES*)0xF0020708u)) /* lint --e(923)*/

/** 70C, Group Result Register */
#define VADC_G0_RES3 ((*(volatile Ifx_VADC_RES*)0xF002070Cu)) /* lint --e(923)*/

/** 710, Group Result Register */
#define VADC_G0_RES4 ((*(volatile Ifx_VADC_RES*)0xF0020710u)) /* lint --e(923)*/

/** 714, Group Result Register */
#define VADC_G0_RES5 ((*(volatile Ifx_VADC_RES*)0xF0020714u)) /* lint --e(923)*/

/** 718, Group Result Register */
#define VADC_G0_RES6 ((*(volatile Ifx_VADC_RES*)0xF0020718u)) /* lint --e(923)*/

/** 71C, Group Result Register */
#define VADC_G0_RES7 ((*(volatile Ifx_VADC_RES*)0xF002071Cu)) /* lint --e(923)*/

/** 720, Group Result Register */
#define VADC_G0_RES8 ((*(volatile Ifx_VADC_RES*)0xF0020720u)) /* lint --e(923)*/

/** 724, Group Result Register */
#define VADC_G0_RES9 ((*(volatile Ifx_VADC_RES*)0xF0020724u)) /* lint --e(923)*/

/** 780, Group Result Reg., Debug */
#define VADC_G0_RESD0 ((*(volatile Ifx_VADC_RESD*)0xF0020780u)) /* lint --e(923)*/

/** 784, Group Result Reg., Debug */
#define VADC_G0_RESD1 ((*(volatile Ifx_VADC_RESD*)0xF0020784u)) /* lint --e(923)*/

/** 7A8, Group Result Reg., Debug */
#define VADC_G0_RESD10 ((*(volatile Ifx_VADC_RESD*)0xF00207A8u)) /* lint --e(923)*/

/** 7AC, Group Result Reg., Debug */
#define VADC_G0_RESD11 ((*(volatile Ifx_VADC_RESD*)0xF00207ACu)) /* lint --e(923)*/

/** 7B0, Group Result Reg., Debug */
#define VADC_G0_RESD12 ((*(volatile Ifx_VADC_RESD*)0xF00207B0u)) /* lint --e(923)*/

/** 7B4, Group Result Reg., Debug */
#define VADC_G0_RESD13 ((*(volatile Ifx_VADC_RESD*)0xF00207B4u)) /* lint --e(923)*/

/** 7B8, Group Result Reg., Debug */
#define VADC_G0_RESD14 ((*(volatile Ifx_VADC_RESD*)0xF00207B8u)) /* lint --e(923)*/

/** 7BC, Group Result Reg., Debug */
#define VADC_G0_RESD15 ((*(volatile Ifx_VADC_RESD*)0xF00207BCu)) /* lint --e(923)*/

/** 788, Group Result Reg., Debug */
#define VADC_G0_RESD2 ((*(volatile Ifx_VADC_RESD*)0xF0020788u)) /* lint --e(923)*/

/** 78C, Group Result Reg., Debug */
#define VADC_G0_RESD3 ((*(volatile Ifx_VADC_RESD*)0xF002078Cu)) /* lint --e(923)*/

/** 790, Group Result Reg., Debug */
#define VADC_G0_RESD4 ((*(volatile Ifx_VADC_RESD*)0xF0020790u)) /* lint --e(923)*/

/** 794, Group Result Reg., Debug */
#define VADC_G0_RESD5 ((*(volatile Ifx_VADC_RESD*)0xF0020794u)) /* lint --e(923)*/

/** 798, Group Result Reg., Debug */
#define VADC_G0_RESD6 ((*(volatile Ifx_VADC_RESD*)0xF0020798u)) /* lint --e(923)*/

/** 79C, Group Result Reg., Debug */
#define VADC_G0_RESD7 ((*(volatile Ifx_VADC_RESD*)0xF002079Cu)) /* lint --e(923)*/

/** 7A0, Group Result Reg., Debug */
#define VADC_G0_RESD8 ((*(volatile Ifx_VADC_RESD*)0xF00207A0u)) /* lint --e(923)*/

/** 7A4, Group Result Reg., Debug */
#define VADC_G0_RESD9 ((*(volatile Ifx_VADC_RESD*)0xF00207A4u)) /* lint --e(923)*/

/** 5B0, Result Event Node Pointer Register 0, Group */
#define VADC_G0_REVNP0 ((*(volatile Ifx_VADC_G_REVNP0*)0xF00205B0u)) /* lint --e(923)*/

/** 5B4, Result Event Node Pointer Register 1, Group */
#define VADC_G0_REVNP1 ((*(volatile Ifx_VADC_G_REVNP1*)0xF00205B4u)) /* lint --e(923)*/

/** 598, Source Event Flag Clear Register, Group */
#define VADC_G0_SEFCLR ((*(volatile Ifx_VADC_G_SEFCLR*)0xF0020598u)) /* lint --e(923)*/

/** 588, Source Event Flag Register, Group */
#define VADC_G0_SEFLAG ((*(volatile Ifx_VADC_G_SEFLAG*)0xF0020588u)) /* lint --e(923)*/

/** 5C0, Source Event Node Pointer Register, Group */
#define VADC_G0_SEVNP ((*(volatile Ifx_VADC_G_SEVNP*)0xF00205C0u)) /* lint --e(923)*/

/** 5C8, Service Request Software Activation Trigger, Group */
#define VADC_G0_SRACT ((*(volatile Ifx_VADC_G_SRACT*)0xF00205C8u)) /* lint --e(923)*/

/** 4C0, Synchronization Control Register, Group */
#define VADC_G0_SYNCTR ((*(volatile Ifx_VADC_G_SYNCTR*)0xF00204C0u)) /* lint --e(923)*/

/** 5F8, Valid Flag Register, Group */
#define VADC_G0_VFR ((*(volatile Ifx_VADC_G_VFR*)0xF00205F8u)) /* lint --e(923)*/

/** 3CB0, Alias Register, Group */
#define VADC_G14_ALIAS ((*(volatile Ifx_VADC_G14_ALIAS*)0xF0023CB0u)) /* lint --e(923)*/

/** 3C80, Arbitration Configuration Register, Group */
#define VADC_G14_ARBCFG ((*(volatile Ifx_VADC_G14_ARBCFG*)0xF0023C80u)) /* lint --e(923)*/

/** 3C84, Arbitration Priority Register, Group */
#define VADC_G14_ARBPR ((*(volatile Ifx_VADC_G14_ARBPR*)0xF0023C84u)) /* lint --e(923)*/

/** 3D20, Autoscan Source Control Register, Group */
#define VADC_G14_ASCTRL ((*(volatile Ifx_VADC_G14_ASCTRL*)0xF0023D20u)) /* lint --e(923)*/

/** 3D24, Autoscan Source Mode Register, Group */
#define VADC_G14_ASMR ((*(volatile Ifx_VADC_G14_ASMR*)0xF0023D24u)) /* lint --e(923)*/

/** 3D2C, Autoscan Source Pending Register, Group */
#define VADC_G14_ASPND ((*(volatile Ifx_VADC_G14_ASPND*)0xF0023D2Cu)) /* lint --e(923)*/

/** 3D28, Autoscan Source Channel Select Register, Group */
#define VADC_G14_ASSEL ((*(volatile Ifx_VADC_G14_ASSEL*)0xF0023D28u)) /* lint --e(923)*/

/** 3CC8, Boundary Flag Register, Group */
#define VADC_G14_BFL ((*(volatile Ifx_VADC_G14_BFL*)0xF0023CC8u)) /* lint --e(923)*/

/** 3CB8, Boundary Select Register, Group */
#define VADC_G14_BOUND ((*(volatile Ifx_VADC_G14_BOUND*)0xF0023CB8u)) /* lint --e(923)*/

/** 3D90, Channel Event Flag Clear Register, Group */
#define VADC_G14_CEFCLR ((*(volatile Ifx_VADC_G14_CEFCLR*)0xF0023D90u)) /* lint --e(923)*/

/** 3D80, Channel Event Flag Register, Group */
#define VADC_G14_CEFLAG ((*(volatile Ifx_VADC_G14_CEFLAG*)0xF0023D80u)) /* lint --e(923)*/

/** 3DA0, Channel Event Node Pointer Register 0, Group */
#define VADC_G14_CEVNP0 ((*(volatile Ifx_VADC_G14_CEVNP0*)0xF0023DA0u)) /* lint --e(923)*/

/** 3DA4, Channel Event Node Pointer Register 1, Group */
#define VADC_G14_CEVNP1 ((*(volatile Ifx_VADC_G14_CEVNP1*)0xF0023DA4u)) /* lint --e(923)*/

/** 3DA8, Channel Event Node Pointer Register 2, Group */
#define VADC_G14_CEVNP2 ((*(volatile Ifx_VADC_G14_CEVNP2*)0xF0023DA8u)) /* lint --e(923)*/

/** 3C88, Channel Assignment Register, Group */
#define VADC_G14_CHASS ((*(volatile Ifx_VADC_G14_CHASS*)0xF0023C88u)) /* lint --e(923)*/

/** 3E00, Group, Channel Control Register */
#define VADC_G14_CHCTR0 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E00u)) /* lint --e(923)*/

/** 3E04, Group, Channel Control Register */
#define VADC_G14_CHCTR1 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E04u)) /* lint --e(923)*/

/** 3E28, Group, Channel Control Register */
#define VADC_G14_CHCTR10 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E28u)) /* lint --e(923)*/

/** 3E2C, Group, Channel Control Register */
#define VADC_G14_CHCTR11 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E2Cu)) /* lint --e(923)*/

/** 3E30, Group, Channel Control Register */
#define VADC_G14_CHCTR12 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E30u)) /* lint --e(923)*/

/** 3E34, Group, Channel Control Register */
#define VADC_G14_CHCTR13 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E34u)) /* lint --e(923)*/

/** 3E38, Group, Channel Control Register */
#define VADC_G14_CHCTR14 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E38u)) /* lint --e(923)*/

/** 3E3C, Group, Channel Control Register */
#define VADC_G14_CHCTR15 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E3Cu)) /* lint --e(923)*/

/** 3E40, Group, Channel Control Register */
#define VADC_G14_CHCTR16 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E40u)) /* lint --e(923)*/

/** 3E44, Group, Channel Control Register */
#define VADC_G14_CHCTR17 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E44u)) /* lint --e(923)*/

/** 3E48, Group, Channel Control Register */
#define VADC_G14_CHCTR18 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E48u)) /* lint --e(923)*/

/** 3E4C, Group, Channel Control Register */
#define VADC_G14_CHCTR19 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E4Cu)) /* lint --e(923)*/

/** 3E08, Group, Channel Control Register */
#define VADC_G14_CHCTR2 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E08u)) /* lint --e(923)*/

/** 3E50, Group, Channel Control Register */
#define VADC_G14_CHCTR20 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E50u)) /* lint --e(923)*/

/** 3E0C, Group, Channel Control Register */
#define VADC_G14_CHCTR3 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E0Cu)) /* lint --e(923)*/

/** 3E10, Group, Channel Control Register */
#define VADC_G14_CHCTR4 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E10u)) /* lint --e(923)*/

/** 3E14, Group, Channel Control Register */
#define VADC_G14_CHCTR5 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E14u)) /* lint --e(923)*/

/** 3E18, Group, Channel Control Register */
#define VADC_G14_CHCTR6 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E18u)) /* lint --e(923)*/

/** 3E1C, Group, Channel Control Register */
#define VADC_G14_CHCTR7 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E1Cu)) /* lint --e(923)*/

/** 3E20, Group, Channel Control Register */
#define VADC_G14_CHCTR8 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E20u)) /* lint --e(923)*/

/** 3E24, Group, Channel Control Register */
#define VADC_G14_CHCTR9 ((*(volatile Ifx_VADC_CHCTR*)0xF0023E24u)) /* lint --e(923)*/

/** 3DF0, External Multiplexer Control Register, Group */
#define VADC_G14_EMUXCTR ((*(volatile Ifx_VADC_G14_EMUXCTR*)0xF0023DF0u)) /* lint --e(923)*/

/** 3CA0, Input Class Register */
#define VADC_G14_ICLASS0 ((*(volatile Ifx_VADC_ICLASS*)0xF0023CA0u)) /* lint --e(923)*/

/** 3CA4, Input Class Register */
#define VADC_G14_ICLASS1 ((*(volatile Ifx_VADC_ICLASS*)0xF0023CA4u)) /* lint --e(923)*/

/** 3D0C, Queue 0 Register 0, Group */
#define VADC_G14_Q0R0 ((*(volatile Ifx_VADC_G14_Q0R0*)0xF0023D0Cu)) /* lint --e(923)*/

/** 3D00, Queue 0 Source Control Register, Group */
#define VADC_G14_QCTRL0 ((*(volatile Ifx_VADC_G14_QCTRL0*)0xF0023D00u)) /* lint --e(923)*/

/** 3D10, Queue 0 Input Register, Group */
#define VADC_G14_QINR0 ((*(volatile Ifx_VADC_G14_QINR0*)0xF0023D10u)) /* lint --e(923)*/

/** 3D04, Queue 0 Mode Register, Group */
#define VADC_G14_QMR0 ((*(volatile Ifx_VADC_G14_QMR0*)0xF0023D04u)) /* lint --e(923)*/

/** 3D08, Queue 0 Status Register, Group */
#define VADC_G14_QSR0 ((*(volatile Ifx_VADC_G14_QSR0*)0xF0023D08u)) /* lint --e(923)*/

/** 3E80, Group Result Control Register */
#define VADC_G14_RCR0 ((*(volatile Ifx_VADC_RCR*)0xF0023E80u)) /* lint --e(923)*/

/** 3E84, Group Result Control Register */
#define VADC_G14_RCR1 ((*(volatile Ifx_VADC_RCR*)0xF0023E84u)) /* lint --e(923)*/

/** 3EA8, Group Result Control Register */
#define VADC_G14_RCR10 ((*(volatile Ifx_VADC_RCR*)0xF0023EA8u)) /* lint --e(923)*/

/** 3EAC, Group Result Control Register */
#define VADC_G14_RCR11 ((*(volatile Ifx_VADC_RCR*)0xF0023EACu)) /* lint --e(923)*/

/** 3EB0, Group Result Control Register */
#define VADC_G14_RCR12 ((*(volatile Ifx_VADC_RCR*)0xF0023EB0u)) /* lint --e(923)*/

/** 3EB4, Group Result Control Register */
#define VADC_G14_RCR13 ((*(volatile Ifx_VADC_RCR*)0xF0023EB4u)) /* lint --e(923)*/

/** 3EB8, Group Result Control Register */
#define VADC_G14_RCR14 ((*(volatile Ifx_VADC_RCR*)0xF0023EB8u)) /* lint --e(923)*/

/** 3EBC, Group Result Control Register */
#define VADC_G14_RCR15 ((*(volatile Ifx_VADC_RCR*)0xF0023EBCu)) /* lint --e(923)*/

/** 3E88, Group Result Control Register */
#define VADC_G14_RCR2 ((*(volatile Ifx_VADC_RCR*)0xF0023E88u)) /* lint --e(923)*/

/** 3E8C, Group Result Control Register */
#define VADC_G14_RCR3 ((*(volatile Ifx_VADC_RCR*)0xF0023E8Cu)) /* lint --e(923)*/

/** 3E90, Group Result Control Register */
#define VADC_G14_RCR4 ((*(volatile Ifx_VADC_RCR*)0xF0023E90u)) /* lint --e(923)*/

/** 3E94, Group Result Control Register */
#define VADC_G14_RCR5 ((*(volatile Ifx_VADC_RCR*)0xF0023E94u)) /* lint --e(923)*/

/** 3E98, Group Result Control Register */
#define VADC_G14_RCR6 ((*(volatile Ifx_VADC_RCR*)0xF0023E98u)) /* lint --e(923)*/

/** 3E9C, Group Result Control Register */
#define VADC_G14_RCR7 ((*(volatile Ifx_VADC_RCR*)0xF0023E9Cu)) /* lint --e(923)*/

/** 3EA0, Group Result Control Register */
#define VADC_G14_RCR8 ((*(volatile Ifx_VADC_RCR*)0xF0023EA0u)) /* lint --e(923)*/

/** 3EA4, Group Result Control Register */
#define VADC_G14_RCR9 ((*(volatile Ifx_VADC_RCR*)0xF0023EA4u)) /* lint --e(923)*/

/** 3D94, Result Event Flag Clear Register, Group */
#define VADC_G14_REFCLR ((*(volatile Ifx_VADC_G14_REFCLR*)0xF0023D94u)) /* lint --e(923)*/

/** 3D84, Result Event Flag Register, Group */
#define VADC_G14_REFLAG ((*(volatile Ifx_VADC_G14_REFLAG*)0xF0023D84u)) /* lint --e(923)*/

/** 3F00, Group Result Register */
#define VADC_G14_RES0 ((*(volatile Ifx_VADC_RES*)0xF0023F00u)) /* lint --e(923)*/

/** 3F04, Group Result Register */
#define VADC_G14_RES1 ((*(volatile Ifx_VADC_RES*)0xF0023F04u)) /* lint --e(923)*/

/** 3F28, Group Result Register */
#define VADC_G14_RES10 ((*(volatile Ifx_VADC_RES*)0xF0023F28u)) /* lint --e(923)*/

/** 3F2C, Group Result Register */
#define VADC_G14_RES11 ((*(volatile Ifx_VADC_RES*)0xF0023F2Cu)) /* lint --e(923)*/

/** 3F30, Group Result Register */
#define VADC_G14_RES12 ((*(volatile Ifx_VADC_RES*)0xF0023F30u)) /* lint --e(923)*/

/** 3F34, Group Result Register */
#define VADC_G14_RES13 ((*(volatile Ifx_VADC_RES*)0xF0023F34u)) /* lint --e(923)*/

/** 3F38, Group Result Register */
#define VADC_G14_RES14 ((*(volatile Ifx_VADC_RES*)0xF0023F38u)) /* lint --e(923)*/

/** 3F3C, Group Result Register */
#define VADC_G14_RES15 ((*(volatile Ifx_VADC_RES*)0xF0023F3Cu)) /* lint --e(923)*/

/** 3F08, Group Result Register */
#define VADC_G14_RES2 ((*(volatile Ifx_VADC_RES*)0xF0023F08u)) /* lint --e(923)*/

/** 3F0C, Group Result Register */
#define VADC_G14_RES3 ((*(volatile Ifx_VADC_RES*)0xF0023F0Cu)) /* lint --e(923)*/

/** 3F10, Group Result Register */
#define VADC_G14_RES4 ((*(volatile Ifx_VADC_RES*)0xF0023F10u)) /* lint --e(923)*/

/** 3F14, Group Result Register */
#define VADC_G14_RES5 ((*(volatile Ifx_VADC_RES*)0xF0023F14u)) /* lint --e(923)*/

/** 3F18, Group Result Register */
#define VADC_G14_RES6 ((*(volatile Ifx_VADC_RES*)0xF0023F18u)) /* lint --e(923)*/

/** 3F1C, Group Result Register */
#define VADC_G14_RES7 ((*(volatile Ifx_VADC_RES*)0xF0023F1Cu)) /* lint --e(923)*/

/** 3F20, Group Result Register */
#define VADC_G14_RES8 ((*(volatile Ifx_VADC_RES*)0xF0023F20u)) /* lint --e(923)*/

/** 3F24, Group Result Register */
#define VADC_G14_RES9 ((*(volatile Ifx_VADC_RES*)0xF0023F24u)) /* lint --e(923)*/

/** 3F80, Group Result Reg., Debug */
#define VADC_G14_RESD0 ((*(volatile Ifx_VADC_RESD*)0xF0023F80u)) /* lint --e(923)*/

/** 3F84, Group Result Reg., Debug */
#define VADC_G14_RESD1 ((*(volatile Ifx_VADC_RESD*)0xF0023F84u)) /* lint --e(923)*/

/** 3FA8, Group Result Reg., Debug */
#define VADC_G14_RESD10 ((*(volatile Ifx_VADC_RESD*)0xF0023FA8u)) /* lint --e(923)*/

/** 3FAC, Group Result Reg., Debug */
#define VADC_G14_RESD11 ((*(volatile Ifx_VADC_RESD*)0xF0023FACu)) /* lint --e(923)*/

/** 3FB0, Group Result Reg., Debug */
#define VADC_G14_RESD12 ((*(volatile Ifx_VADC_RESD*)0xF0023FB0u)) /* lint --e(923)*/

/** 3FB4, Group Result Reg., Debug */
#define VADC_G14_RESD13 ((*(volatile Ifx_VADC_RESD*)0xF0023FB4u)) /* lint --e(923)*/

/** 3FB8, Group Result Reg., Debug */
#define VADC_G14_RESD14 ((*(volatile Ifx_VADC_RESD*)0xF0023FB8u)) /* lint --e(923)*/

/** 3FBC, Group Result Reg., Debug */
#define VADC_G14_RESD15 ((*(volatile Ifx_VADC_RESD*)0xF0023FBCu)) /* lint --e(923)*/

/** 3F88, Group Result Reg., Debug */
#define VADC_G14_RESD2 ((*(volatile Ifx_VADC_RESD*)0xF0023F88u)) /* lint --e(923)*/

/** 3F8C, Group Result Reg., Debug */
#define VADC_G14_RESD3 ((*(volatile Ifx_VADC_RESD*)0xF0023F8Cu)) /* lint --e(923)*/

/** 3F90, Group Result Reg., Debug */
#define VADC_G14_RESD4 ((*(volatile Ifx_VADC_RESD*)0xF0023F90u)) /* lint --e(923)*/

/** 3F94, Group Result Reg., Debug */
#define VADC_G14_RESD5 ((*(volatile Ifx_VADC_RESD*)0xF0023F94u)) /* lint --e(923)*/

/** 3F98, Group Result Reg., Debug */
#define VADC_G14_RESD6 ((*(volatile Ifx_VADC_RESD*)0xF0023F98u)) /* lint --e(923)*/

/** 3F9C, Group Result Reg., Debug */
#define VADC_G14_RESD7 ((*(volatile Ifx_VADC_RESD*)0xF0023F9Cu)) /* lint --e(923)*/

/** 3FA0, Group Result Reg., Debug */
#define VADC_G14_RESD8 ((*(volatile Ifx_VADC_RESD*)0xF0023FA0u)) /* lint --e(923)*/

/** 3FA4, Group Result Reg., Debug */
#define VADC_G14_RESD9 ((*(volatile Ifx_VADC_RESD*)0xF0023FA4u)) /* lint --e(923)*/

/** 3DB0, Result Event Node Pointer Register 0, Group */
#define VADC_G14_REVNP0 ((*(volatile Ifx_VADC_G14_REVNP0*)0xF0023DB0u)) /* lint --e(923)*/

/** 3DB4, Result Event Node Pointer Register 1, Group */
#define VADC_G14_REVNP1 ((*(volatile Ifx_VADC_G14_REVNP1*)0xF0023DB4u)) /* lint --e(923)*/

/** 3D98, Source Event Flag Clear Register, Group */
#define VADC_G14_SEFCLR ((*(volatile Ifx_VADC_G14_SEFCLR*)0xF0023D98u)) /* lint --e(923)*/

/** 3D88, Source Event Flag Register, Group */
#define VADC_G14_SEFLAG ((*(volatile Ifx_VADC_G14_SEFLAG*)0xF0023D88u)) /* lint --e(923)*/

/** 3DC0, Source Event Node Pointer Register, Group */
#define VADC_G14_SEVNP ((*(volatile Ifx_VADC_G14_SEVNP*)0xF0023DC0u)) /* lint --e(923)*/

/** 3DC8, Service Request Software Activation Trigger, Group */
#define VADC_G14_SRACT ((*(volatile Ifx_VADC_G14_SRACT*)0xF0023DC8u)) /* lint --e(923)*/

/** 3CC0, Synchronization Control Register, Group */
#define VADC_G14_SYNCTR ((*(volatile Ifx_VADC_G14_SYNCTR*)0xF0023CC0u)) /* lint --e(923)*/

/** 3DF8, Valid Flag Register, Group */
#define VADC_G14_VFR ((*(volatile Ifx_VADC_G14_VFR*)0xF0023DF8u)) /* lint --e(923)*/

/** 8B0, Alias Register, Group */
#define VADC_G1_ALIAS ((*(volatile Ifx_VADC_G_ALIAS*)0xF00208B0u)) /* lint --e(923)*/

/** 880, Arbitration Configuration Register, Group */
#define VADC_G1_ARBCFG ((*(volatile Ifx_VADC_G_ARBCFG*)0xF0020880u)) /* lint --e(923)*/

/** 884, Arbitration Priority Register, Group */
#define VADC_G1_ARBPR ((*(volatile Ifx_VADC_G_ARBPR*)0xF0020884u)) /* lint --e(923)*/

/** 920, Autoscan Source Control Register, Group */
#define VADC_G1_ASCTRL ((*(volatile Ifx_VADC_G_ASCTRL*)0xF0020920u)) /* lint --e(923)*/

/** 924, Autoscan Source Mode Register, Group */
#define VADC_G1_ASMR ((*(volatile Ifx_VADC_G_ASMR*)0xF0020924u)) /* lint --e(923)*/

/** 92C, Autoscan Source Pending Register, Group */
#define VADC_G1_ASPND ((*(volatile Ifx_VADC_G_ASPND*)0xF002092Cu)) /* lint --e(923)*/

/** 928, Autoscan Source Channel Select Register, Group */
#define VADC_G1_ASSEL ((*(volatile Ifx_VADC_G_ASSEL*)0xF0020928u)) /* lint --e(923)*/

/** 8C8, Boundary Flag Register, Group */
#define VADC_G1_BFL ((*(volatile Ifx_VADC_G_BFL*)0xF00208C8u)) /* lint --e(923)*/

/** 8B8, Boundary Select Register, Group */
#define VADC_G1_BOUND ((*(volatile Ifx_VADC_G_BOUND*)0xF00208B8u)) /* lint --e(923)*/

/** 990, Channel Event Flag Clear Register, Group */
#define VADC_G1_CEFCLR ((*(volatile Ifx_VADC_G_CEFCLR*)0xF0020990u)) /* lint --e(923)*/

/** 980, Channel Event Flag Register, Group */
#define VADC_G1_CEFLAG ((*(volatile Ifx_VADC_G_CEFLAG*)0xF0020980u)) /* lint --e(923)*/

/** 9A0, Channel Event Node Pointer Register 0, Group */
#define VADC_G1_CEVNP0 ((*(volatile Ifx_VADC_G_CEVNP0*)0xF00209A0u)) /* lint --e(923)*/

/** 888, Channel Assignment Register, Group */
#define VADC_G1_CHASS ((*(volatile Ifx_VADC_G_CHASS*)0xF0020888u)) /* lint --e(923)*/

/** A00, Group, Channel Control Register */
#define VADC_G1_CHCTR0 ((*(volatile Ifx_VADC_CHCTR*)0xF0020A00u)) /* lint --e(923)*/

/** A04, Group, Channel Control Register */
#define VADC_G1_CHCTR1 ((*(volatile Ifx_VADC_CHCTR*)0xF0020A04u)) /* lint --e(923)*/

/** A08, Group, Channel Control Register */
#define VADC_G1_CHCTR2 ((*(volatile Ifx_VADC_CHCTR*)0xF0020A08u)) /* lint --e(923)*/

/** A0C, Group, Channel Control Register */
#define VADC_G1_CHCTR3 ((*(volatile Ifx_VADC_CHCTR*)0xF0020A0Cu)) /* lint --e(923)*/

/** A10, Group, Channel Control Register */
#define VADC_G1_CHCTR4 ((*(volatile Ifx_VADC_CHCTR*)0xF0020A10u)) /* lint --e(923)*/

/** A14, Group, Channel Control Register */
#define VADC_G1_CHCTR5 ((*(volatile Ifx_VADC_CHCTR*)0xF0020A14u)) /* lint --e(923)*/

/** A18, Group, Channel Control Register */
#define VADC_G1_CHCTR6 ((*(volatile Ifx_VADC_CHCTR*)0xF0020A18u)) /* lint --e(923)*/

/** A1C, Group, Channel Control Register */
#define VADC_G1_CHCTR7 ((*(volatile Ifx_VADC_CHCTR*)0xF0020A1Cu)) /* lint --e(923)*/

/** 9F0, External Multiplexer Control Register, Group x */
#define VADC_G1_EMUXCTR ((*(volatile Ifx_VADC_G_EMUXCTR*)0xF00209F0u)) /* lint --e(923)*/

/** 8A0, Input Class Register */
#define VADC_G1_ICLASS0 ((*(volatile Ifx_VADC_ICLASS*)0xF00208A0u)) /* lint --e(923)*/

/** 8A4, Input Class Register */
#define VADC_G1_ICLASS1 ((*(volatile Ifx_VADC_ICLASS*)0xF00208A4u)) /* lint --e(923)*/

/** 90C, Queue 0 Register 0, Group */
#define VADC_G1_Q0R0 ((*(volatile Ifx_VADC_G_Q0R0*)0xF002090Cu)) /* lint --e(923)*/

/** 900, Queue 0 Source Control Register, Group */
#define VADC_G1_QCTRL0 ((*(volatile Ifx_VADC_G_QCTRL0*)0xF0020900u)) /* lint --e(923)*/

/** 910, Queue 0 Input Register, Group */
#define VADC_G1_QINR0 ((*(volatile Ifx_VADC_G_QINR0*)0xF0020910u)) /* lint --e(923)*/

/** 904, Queue 0 Mode Register, Group */
#define VADC_G1_QMR0 ((*(volatile Ifx_VADC_G_QMR0*)0xF0020904u)) /* lint --e(923)*/

/** 908, Queue 0 Status Register, Group */
#define VADC_G1_QSR0 ((*(volatile Ifx_VADC_G_QSR0*)0xF0020908u)) /* lint --e(923)*/

/** A80, Group Result Control Register */
#define VADC_G1_RCR0 ((*(volatile Ifx_VADC_RCR*)0xF0020A80u)) /* lint --e(923)*/

/** A84, Group Result Control Register */
#define VADC_G1_RCR1 ((*(volatile Ifx_VADC_RCR*)0xF0020A84u)) /* lint --e(923)*/

/** AA8, Group Result Control Register */
#define VADC_G1_RCR10 ((*(volatile Ifx_VADC_RCR*)0xF0020AA8u)) /* lint --e(923)*/

/** AAC, Group Result Control Register */
#define VADC_G1_RCR11 ((*(volatile Ifx_VADC_RCR*)0xF0020AACu)) /* lint --e(923)*/

/** AB0, Group Result Control Register */
#define VADC_G1_RCR12 ((*(volatile Ifx_VADC_RCR*)0xF0020AB0u)) /* lint --e(923)*/

/** AB4, Group Result Control Register */
#define VADC_G1_RCR13 ((*(volatile Ifx_VADC_RCR*)0xF0020AB4u)) /* lint --e(923)*/

/** AB8, Group Result Control Register */
#define VADC_G1_RCR14 ((*(volatile Ifx_VADC_RCR*)0xF0020AB8u)) /* lint --e(923)*/

/** ABC, Group Result Control Register */
#define VADC_G1_RCR15 ((*(volatile Ifx_VADC_RCR*)0xF0020ABCu)) /* lint --e(923)*/

/** A88, Group Result Control Register */
#define VADC_G1_RCR2 ((*(volatile Ifx_VADC_RCR*)0xF0020A88u)) /* lint --e(923)*/

/** A8C, Group Result Control Register */
#define VADC_G1_RCR3 ((*(volatile Ifx_VADC_RCR*)0xF0020A8Cu)) /* lint --e(923)*/

/** A90, Group Result Control Register */
#define VADC_G1_RCR4 ((*(volatile Ifx_VADC_RCR*)0xF0020A90u)) /* lint --e(923)*/

/** A94, Group Result Control Register */
#define VADC_G1_RCR5 ((*(volatile Ifx_VADC_RCR*)0xF0020A94u)) /* lint --e(923)*/

/** A98, Group Result Control Register */
#define VADC_G1_RCR6 ((*(volatile Ifx_VADC_RCR*)0xF0020A98u)) /* lint --e(923)*/

/** A9C, Group Result Control Register */
#define VADC_G1_RCR7 ((*(volatile Ifx_VADC_RCR*)0xF0020A9Cu)) /* lint --e(923)*/

/** AA0, Group Result Control Register */
#define VADC_G1_RCR8 ((*(volatile Ifx_VADC_RCR*)0xF0020AA0u)) /* lint --e(923)*/

/** AA4, Group Result Control Register */
#define VADC_G1_RCR9 ((*(volatile Ifx_VADC_RCR*)0xF0020AA4u)) /* lint --e(923)*/

/** 994, Result Event Flag Clear Register, Group */
#define VADC_G1_REFCLR ((*(volatile Ifx_VADC_G_REFCLR*)0xF0020994u)) /* lint --e(923)*/

/** 984, Result Event Flag Register, Group */
#define VADC_G1_REFLAG ((*(volatile Ifx_VADC_G_REFLAG*)0xF0020984u)) /* lint --e(923)*/

/** B00, Group Result Register */
#define VADC_G1_RES0 ((*(volatile Ifx_VADC_RES*)0xF0020B00u)) /* lint --e(923)*/

/** B04, Group Result Register */
#define VADC_G1_RES1 ((*(volatile Ifx_VADC_RES*)0xF0020B04u)) /* lint --e(923)*/

/** B28, Group Result Register */
#define VADC_G1_RES10 ((*(volatile Ifx_VADC_RES*)0xF0020B28u)) /* lint --e(923)*/

/** B2C, Group Result Register */
#define VADC_G1_RES11 ((*(volatile Ifx_VADC_RES*)0xF0020B2Cu)) /* lint --e(923)*/

/** B30, Group Result Register */
#define VADC_G1_RES12 ((*(volatile Ifx_VADC_RES*)0xF0020B30u)) /* lint --e(923)*/

/** B34, Group Result Register */
#define VADC_G1_RES13 ((*(volatile Ifx_VADC_RES*)0xF0020B34u)) /* lint --e(923)*/

/** B38, Group Result Register */
#define VADC_G1_RES14 ((*(volatile Ifx_VADC_RES*)0xF0020B38u)) /* lint --e(923)*/

/** B3C, Group Result Register */
#define VADC_G1_RES15 ((*(volatile Ifx_VADC_RES*)0xF0020B3Cu)) /* lint --e(923)*/

/** B08, Group Result Register */
#define VADC_G1_RES2 ((*(volatile Ifx_VADC_RES*)0xF0020B08u)) /* lint --e(923)*/

/** B0C, Group Result Register */
#define VADC_G1_RES3 ((*(volatile Ifx_VADC_RES*)0xF0020B0Cu)) /* lint --e(923)*/

/** B10, Group Result Register */
#define VADC_G1_RES4 ((*(volatile Ifx_VADC_RES*)0xF0020B10u)) /* lint --e(923)*/

/** B14, Group Result Register */
#define VADC_G1_RES5 ((*(volatile Ifx_VADC_RES*)0xF0020B14u)) /* lint --e(923)*/

/** B18, Group Result Register */
#define VADC_G1_RES6 ((*(volatile Ifx_VADC_RES*)0xF0020B18u)) /* lint --e(923)*/

/** B1C, Group Result Register */
#define VADC_G1_RES7 ((*(volatile Ifx_VADC_RES*)0xF0020B1Cu)) /* lint --e(923)*/

/** B20, Group Result Register */
#define VADC_G1_RES8 ((*(volatile Ifx_VADC_RES*)0xF0020B20u)) /* lint --e(923)*/

/** B24, Group Result Register */
#define VADC_G1_RES9 ((*(volatile Ifx_VADC_RES*)0xF0020B24u)) /* lint --e(923)*/

/** B80, Group Result Reg., Debug */
#define VADC_G1_RESD0 ((*(volatile Ifx_VADC_RESD*)0xF0020B80u)) /* lint --e(923)*/

/** B84, Group Result Reg., Debug */
#define VADC_G1_RESD1 ((*(volatile Ifx_VADC_RESD*)0xF0020B84u)) /* lint --e(923)*/

/** BA8, Group Result Reg., Debug */
#define VADC_G1_RESD10 ((*(volatile Ifx_VADC_RESD*)0xF0020BA8u)) /* lint --e(923)*/

/** BAC, Group Result Reg., Debug */
#define VADC_G1_RESD11 ((*(volatile Ifx_VADC_RESD*)0xF0020BACu)) /* lint --e(923)*/

/** BB0, Group Result Reg., Debug */
#define VADC_G1_RESD12 ((*(volatile Ifx_VADC_RESD*)0xF0020BB0u)) /* lint --e(923)*/

/** BB4, Group Result Reg., Debug */
#define VADC_G1_RESD13 ((*(volatile Ifx_VADC_RESD*)0xF0020BB4u)) /* lint --e(923)*/

/** BB8, Group Result Reg., Debug */
#define VADC_G1_RESD14 ((*(volatile Ifx_VADC_RESD*)0xF0020BB8u)) /* lint --e(923)*/

/** BBC, Group Result Reg., Debug */
#define VADC_G1_RESD15 ((*(volatile Ifx_VADC_RESD*)0xF0020BBCu)) /* lint --e(923)*/

/** B88, Group Result Reg., Debug */
#define VADC_G1_RESD2 ((*(volatile Ifx_VADC_RESD*)0xF0020B88u)) /* lint --e(923)*/

/** B8C, Group Result Reg., Debug */
#define VADC_G1_RESD3 ((*(volatile Ifx_VADC_RESD*)0xF0020B8Cu)) /* lint --e(923)*/

/** B90, Group Result Reg., Debug */
#define VADC_G1_RESD4 ((*(volatile Ifx_VADC_RESD*)0xF0020B90u)) /* lint --e(923)*/

/** B94, Group Result Reg., Debug */
#define VADC_G1_RESD5 ((*(volatile Ifx_VADC_RESD*)0xF0020B94u)) /* lint --e(923)*/

/** B98, Group Result Reg., Debug */
#define VADC_G1_RESD6 ((*(volatile Ifx_VADC_RESD*)0xF0020B98u)) /* lint --e(923)*/

/** B9C, Group Result Reg., Debug */
#define VADC_G1_RESD7 ((*(volatile Ifx_VADC_RESD*)0xF0020B9Cu)) /* lint --e(923)*/

/** BA0, Group Result Reg., Debug */
#define VADC_G1_RESD8 ((*(volatile Ifx_VADC_RESD*)0xF0020BA0u)) /* lint --e(923)*/

/** BA4, Group Result Reg., Debug */
#define VADC_G1_RESD9 ((*(volatile Ifx_VADC_RESD*)0xF0020BA4u)) /* lint --e(923)*/

/** 9B0, Result Event Node Pointer Register 0, Group */
#define VADC_G1_REVNP0 ((*(volatile Ifx_VADC_G_REVNP0*)0xF00209B0u)) /* lint --e(923)*/

/** 9B4, Result Event Node Pointer Register 1, Group */
#define VADC_G1_REVNP1 ((*(volatile Ifx_VADC_G_REVNP1*)0xF00209B4u)) /* lint --e(923)*/

/** 998, Source Event Flag Clear Register, Group */
#define VADC_G1_SEFCLR ((*(volatile Ifx_VADC_G_SEFCLR*)0xF0020998u)) /* lint --e(923)*/

/** 988, Source Event Flag Register, Group */
#define VADC_G1_SEFLAG ((*(volatile Ifx_VADC_G_SEFLAG*)0xF0020988u)) /* lint --e(923)*/

/** 9C0, Source Event Node Pointer Register, Group */
#define VADC_G1_SEVNP ((*(volatile Ifx_VADC_G_SEVNP*)0xF00209C0u)) /* lint --e(923)*/

/** 9C8, Service Request Software Activation Trigger, Group */
#define VADC_G1_SRACT ((*(volatile Ifx_VADC_G_SRACT*)0xF00209C8u)) /* lint --e(923)*/

/** 8C0, Synchronization Control Register, Group */
#define VADC_G1_SYNCTR ((*(volatile Ifx_VADC_G_SYNCTR*)0xF00208C0u)) /* lint --e(923)*/

/** 9F8, Valid Flag Register, Group */
#define VADC_G1_VFR ((*(volatile Ifx_VADC_G_VFR*)0xF00209F8u)) /* lint --e(923)*/

/** CB0, Alias Register, Group */
#define VADC_G2_ALIAS ((*(volatile Ifx_VADC_G_ALIAS*)0xF0020CB0u)) /* lint --e(923)*/

/** C80, Arbitration Configuration Register, Group */
#define VADC_G2_ARBCFG ((*(volatile Ifx_VADC_G_ARBCFG*)0xF0020C80u)) /* lint --e(923)*/

/** C84, Arbitration Priority Register, Group */
#define VADC_G2_ARBPR ((*(volatile Ifx_VADC_G_ARBPR*)0xF0020C84u)) /* lint --e(923)*/

/** D20, Autoscan Source Control Register, Group */
#define VADC_G2_ASCTRL ((*(volatile Ifx_VADC_G_ASCTRL*)0xF0020D20u)) /* lint --e(923)*/

/** D24, Autoscan Source Mode Register, Group */
#define VADC_G2_ASMR ((*(volatile Ifx_VADC_G_ASMR*)0xF0020D24u)) /* lint --e(923)*/

/** D2C, Autoscan Source Pending Register, Group */
#define VADC_G2_ASPND ((*(volatile Ifx_VADC_G_ASPND*)0xF0020D2Cu)) /* lint --e(923)*/

/** D28, Autoscan Source Channel Select Register, Group */
#define VADC_G2_ASSEL ((*(volatile Ifx_VADC_G_ASSEL*)0xF0020D28u)) /* lint --e(923)*/

/** CC8, Boundary Flag Register, Group */
#define VADC_G2_BFL ((*(volatile Ifx_VADC_G_BFL*)0xF0020CC8u)) /* lint --e(923)*/

/** CB8, Boundary Select Register, Group */
#define VADC_G2_BOUND ((*(volatile Ifx_VADC_G_BOUND*)0xF0020CB8u)) /* lint --e(923)*/

/** D90, Channel Event Flag Clear Register, Group */
#define VADC_G2_CEFCLR ((*(volatile Ifx_VADC_G_CEFCLR*)0xF0020D90u)) /* lint --e(923)*/

/** D80, Channel Event Flag Register, Group */
#define VADC_G2_CEFLAG ((*(volatile Ifx_VADC_G_CEFLAG*)0xF0020D80u)) /* lint --e(923)*/

/** DA0, Channel Event Node Pointer Register 0, Group */
#define VADC_G2_CEVNP0 ((*(volatile Ifx_VADC_G_CEVNP0*)0xF0020DA0u)) /* lint --e(923)*/

/** C88, Channel Assignment Register, Group */
#define VADC_G2_CHASS ((*(volatile Ifx_VADC_G_CHASS*)0xF0020C88u)) /* lint --e(923)*/

/** E00, Group, Channel Control Register */
#define VADC_G2_CHCTR0 ((*(volatile Ifx_VADC_CHCTR*)0xF0020E00u)) /* lint --e(923)*/

/** E04, Group, Channel Control Register */
#define VADC_G2_CHCTR1 ((*(volatile Ifx_VADC_CHCTR*)0xF0020E04u)) /* lint --e(923)*/

/** E08, Group, Channel Control Register */
#define VADC_G2_CHCTR2 ((*(volatile Ifx_VADC_CHCTR*)0xF0020E08u)) /* lint --e(923)*/

/** E0C, Group, Channel Control Register */
#define VADC_G2_CHCTR3 ((*(volatile Ifx_VADC_CHCTR*)0xF0020E0Cu)) /* lint --e(923)*/

/** E10, Group, Channel Control Register */
#define VADC_G2_CHCTR4 ((*(volatile Ifx_VADC_CHCTR*)0xF0020E10u)) /* lint --e(923)*/

/** E14, Group, Channel Control Register */
#define VADC_G2_CHCTR5 ((*(volatile Ifx_VADC_CHCTR*)0xF0020E14u)) /* lint --e(923)*/

/** E18, Group, Channel Control Register */
#define VADC_G2_CHCTR6 ((*(volatile Ifx_VADC_CHCTR*)0xF0020E18u)) /* lint --e(923)*/

/** E1C, Group, Channel Control Register */
#define VADC_G2_CHCTR7 ((*(volatile Ifx_VADC_CHCTR*)0xF0020E1Cu)) /* lint --e(923)*/

/** DF0, External Multiplexer Control Register, Group x */
#define VADC_G2_EMUXCTR ((*(volatile Ifx_VADC_G_EMUXCTR*)0xF0020DF0u)) /* lint --e(923)*/

/** CA0, Input Class Register */
#define VADC_G2_ICLASS0 ((*(volatile Ifx_VADC_ICLASS*)0xF0020CA0u)) /* lint --e(923)*/

/** CA4, Input Class Register */
#define VADC_G2_ICLASS1 ((*(volatile Ifx_VADC_ICLASS*)0xF0020CA4u)) /* lint --e(923)*/

/** D0C, Queue 0 Register 0, Group */
#define VADC_G2_Q0R0 ((*(volatile Ifx_VADC_G_Q0R0*)0xF0020D0Cu)) /* lint --e(923)*/

/** D00, Queue 0 Source Control Register, Group */
#define VADC_G2_QCTRL0 ((*(volatile Ifx_VADC_G_QCTRL0*)0xF0020D00u)) /* lint --e(923)*/

/** D10, Queue 0 Input Register, Group */
#define VADC_G2_QINR0 ((*(volatile Ifx_VADC_G_QINR0*)0xF0020D10u)) /* lint --e(923)*/

/** D04, Queue 0 Mode Register, Group */
#define VADC_G2_QMR0 ((*(volatile Ifx_VADC_G_QMR0*)0xF0020D04u)) /* lint --e(923)*/

/** D08, Queue 0 Status Register, Group */
#define VADC_G2_QSR0 ((*(volatile Ifx_VADC_G_QSR0*)0xF0020D08u)) /* lint --e(923)*/

/** E80, Group Result Control Register */
#define VADC_G2_RCR0 ((*(volatile Ifx_VADC_RCR*)0xF0020E80u)) /* lint --e(923)*/

/** E84, Group Result Control Register */
#define VADC_G2_RCR1 ((*(volatile Ifx_VADC_RCR*)0xF0020E84u)) /* lint --e(923)*/

/** EA8, Group Result Control Register */
#define VADC_G2_RCR10 ((*(volatile Ifx_VADC_RCR*)0xF0020EA8u)) /* lint --e(923)*/

/** EAC, Group Result Control Register */
#define VADC_G2_RCR11 ((*(volatile Ifx_VADC_RCR*)0xF0020EACu)) /* lint --e(923)*/

/** EB0, Group Result Control Register */
#define VADC_G2_RCR12 ((*(volatile Ifx_VADC_RCR*)0xF0020EB0u)) /* lint --e(923)*/

/** EB4, Group Result Control Register */
#define VADC_G2_RCR13 ((*(volatile Ifx_VADC_RCR*)0xF0020EB4u)) /* lint --e(923)*/

/** EB8, Group Result Control Register */
#define VADC_G2_RCR14 ((*(volatile Ifx_VADC_RCR*)0xF0020EB8u)) /* lint --e(923)*/

/** EBC, Group Result Control Register */
#define VADC_G2_RCR15 ((*(volatile Ifx_VADC_RCR*)0xF0020EBCu)) /* lint --e(923)*/

/** E88, Group Result Control Register */
#define VADC_G2_RCR2 ((*(volatile Ifx_VADC_RCR*)0xF0020E88u)) /* lint --e(923)*/

/** E8C, Group Result Control Register */
#define VADC_G2_RCR3 ((*(volatile Ifx_VADC_RCR*)0xF0020E8Cu)) /* lint --e(923)*/

/** E90, Group Result Control Register */
#define VADC_G2_RCR4 ((*(volatile Ifx_VADC_RCR*)0xF0020E90u)) /* lint --e(923)*/

/** E94, Group Result Control Register */
#define VADC_G2_RCR5 ((*(volatile Ifx_VADC_RCR*)0xF0020E94u)) /* lint --e(923)*/

/** E98, Group Result Control Register */
#define VADC_G2_RCR6 ((*(volatile Ifx_VADC_RCR*)0xF0020E98u)) /* lint --e(923)*/

/** E9C, Group Result Control Register */
#define VADC_G2_RCR7 ((*(volatile Ifx_VADC_RCR*)0xF0020E9Cu)) /* lint --e(923)*/

/** EA0, Group Result Control Register */
#define VADC_G2_RCR8 ((*(volatile Ifx_VADC_RCR*)0xF0020EA0u)) /* lint --e(923)*/

/** EA4, Group Result Control Register */
#define VADC_G2_RCR9 ((*(volatile Ifx_VADC_RCR*)0xF0020EA4u)) /* lint --e(923)*/

/** D94, Result Event Flag Clear Register, Group */
#define VADC_G2_REFCLR ((*(volatile Ifx_VADC_G_REFCLR*)0xF0020D94u)) /* lint --e(923)*/

/** D84, Result Event Flag Register, Group */
#define VADC_G2_REFLAG ((*(volatile Ifx_VADC_G_REFLAG*)0xF0020D84u)) /* lint --e(923)*/

/** F00, Group Result Register */
#define VADC_G2_RES0 ((*(volatile Ifx_VADC_RES*)0xF0020F00u)) /* lint --e(923)*/

/** F04, Group Result Register */
#define VADC_G2_RES1 ((*(volatile Ifx_VADC_RES*)0xF0020F04u)) /* lint --e(923)*/

/** F28, Group Result Register */
#define VADC_G2_RES10 ((*(volatile Ifx_VADC_RES*)0xF0020F28u)) /* lint --e(923)*/

/** F2C, Group Result Register */
#define VADC_G2_RES11 ((*(volatile Ifx_VADC_RES*)0xF0020F2Cu)) /* lint --e(923)*/

/** F30, Group Result Register */
#define VADC_G2_RES12 ((*(volatile Ifx_VADC_RES*)0xF0020F30u)) /* lint --e(923)*/

/** F34, Group Result Register */
#define VADC_G2_RES13 ((*(volatile Ifx_VADC_RES*)0xF0020F34u)) /* lint --e(923)*/

/** F38, Group Result Register */
#define VADC_G2_RES14 ((*(volatile Ifx_VADC_RES*)0xF0020F38u)) /* lint --e(923)*/

/** F3C, Group Result Register */
#define VADC_G2_RES15 ((*(volatile Ifx_VADC_RES*)0xF0020F3Cu)) /* lint --e(923)*/

/** F08, Group Result Register */
#define VADC_G2_RES2 ((*(volatile Ifx_VADC_RES*)0xF0020F08u)) /* lint --e(923)*/

/** F0C, Group Result Register */
#define VADC_G2_RES3 ((*(volatile Ifx_VADC_RES*)0xF0020F0Cu)) /* lint --e(923)*/

/** F10, Group Result Register */
#define VADC_G2_RES4 ((*(volatile Ifx_VADC_RES*)0xF0020F10u)) /* lint --e(923)*/

/** F14, Group Result Register */
#define VADC_G2_RES5 ((*(volatile Ifx_VADC_RES*)0xF0020F14u)) /* lint --e(923)*/

/** F18, Group Result Register */
#define VADC_G2_RES6 ((*(volatile Ifx_VADC_RES*)0xF0020F18u)) /* lint --e(923)*/

/** F1C, Group Result Register */
#define VADC_G2_RES7 ((*(volatile Ifx_VADC_RES*)0xF0020F1Cu)) /* lint --e(923)*/

/** F20, Group Result Register */
#define VADC_G2_RES8 ((*(volatile Ifx_VADC_RES*)0xF0020F20u)) /* lint --e(923)*/

/** F24, Group Result Register */
#define VADC_G2_RES9 ((*(volatile Ifx_VADC_RES*)0xF0020F24u)) /* lint --e(923)*/

/** F80, Group Result Reg., Debug */
#define VADC_G2_RESD0 ((*(volatile Ifx_VADC_RESD*)0xF0020F80u)) /* lint --e(923)*/

/** F84, Group Result Reg., Debug */
#define VADC_G2_RESD1 ((*(volatile Ifx_VADC_RESD*)0xF0020F84u)) /* lint --e(923)*/

/** FA8, Group Result Reg., Debug */
#define VADC_G2_RESD10 ((*(volatile Ifx_VADC_RESD*)0xF0020FA8u)) /* lint --e(923)*/

/** FAC, Group Result Reg., Debug */
#define VADC_G2_RESD11 ((*(volatile Ifx_VADC_RESD*)0xF0020FACu)) /* lint --e(923)*/

/** FB0, Group Result Reg., Debug */
#define VADC_G2_RESD12 ((*(volatile Ifx_VADC_RESD*)0xF0020FB0u)) /* lint --e(923)*/

/** FB4, Group Result Reg., Debug */
#define VADC_G2_RESD13 ((*(volatile Ifx_VADC_RESD*)0xF0020FB4u)) /* lint --e(923)*/

/** FB8, Group Result Reg., Debug */
#define VADC_G2_RESD14 ((*(volatile Ifx_VADC_RESD*)0xF0020FB8u)) /* lint --e(923)*/

/** FBC, Group Result Reg., Debug */
#define VADC_G2_RESD15 ((*(volatile Ifx_VADC_RESD*)0xF0020FBCu)) /* lint --e(923)*/

/** F88, Group Result Reg., Debug */
#define VADC_G2_RESD2 ((*(volatile Ifx_VADC_RESD*)0xF0020F88u)) /* lint --e(923)*/

/** F8C, Group Result Reg., Debug */
#define VADC_G2_RESD3 ((*(volatile Ifx_VADC_RESD*)0xF0020F8Cu)) /* lint --e(923)*/

/** F90, Group Result Reg., Debug */
#define VADC_G2_RESD4 ((*(volatile Ifx_VADC_RESD*)0xF0020F90u)) /* lint --e(923)*/

/** F94, Group Result Reg., Debug */
#define VADC_G2_RESD5 ((*(volatile Ifx_VADC_RESD*)0xF0020F94u)) /* lint --e(923)*/

/** F98, Group Result Reg., Debug */
#define VADC_G2_RESD6 ((*(volatile Ifx_VADC_RESD*)0xF0020F98u)) /* lint --e(923)*/

/** F9C, Group Result Reg., Debug */
#define VADC_G2_RESD7 ((*(volatile Ifx_VADC_RESD*)0xF0020F9Cu)) /* lint --e(923)*/

/** FA0, Group Result Reg., Debug */
#define VADC_G2_RESD8 ((*(volatile Ifx_VADC_RESD*)0xF0020FA0u)) /* lint --e(923)*/

/** FA4, Group Result Reg., Debug */
#define VADC_G2_RESD9 ((*(volatile Ifx_VADC_RESD*)0xF0020FA4u)) /* lint --e(923)*/

/** DB0, Result Event Node Pointer Register 0, Group */
#define VADC_G2_REVNP0 ((*(volatile Ifx_VADC_G_REVNP0*)0xF0020DB0u)) /* lint --e(923)*/

/** DB4, Result Event Node Pointer Register 1, Group */
#define VADC_G2_REVNP1 ((*(volatile Ifx_VADC_G_REVNP1*)0xF0020DB4u)) /* lint --e(923)*/

/** D98, Source Event Flag Clear Register, Group */
#define VADC_G2_SEFCLR ((*(volatile Ifx_VADC_G_SEFCLR*)0xF0020D98u)) /* lint --e(923)*/

/** D88, Source Event Flag Register, Group */
#define VADC_G2_SEFLAG ((*(volatile Ifx_VADC_G_SEFLAG*)0xF0020D88u)) /* lint --e(923)*/

/** DC0, Source Event Node Pointer Register, Group */
#define VADC_G2_SEVNP ((*(volatile Ifx_VADC_G_SEVNP*)0xF0020DC0u)) /* lint --e(923)*/

/** DC8, Service Request Software Activation Trigger, Group */
#define VADC_G2_SRACT ((*(volatile Ifx_VADC_G_SRACT*)0xF0020DC8u)) /* lint --e(923)*/

/** CC0, Synchronization Control Register, Group */
#define VADC_G2_SYNCTR ((*(volatile Ifx_VADC_G_SYNCTR*)0xF0020CC0u)) /* lint --e(923)*/

/** DF8, Valid Flag Register, Group */
#define VADC_G2_VFR ((*(volatile Ifx_VADC_G_VFR*)0xF0020DF8u)) /* lint --e(923)*/

/** 10B0, Alias Register, Group */
#define VADC_G3_ALIAS ((*(volatile Ifx_VADC_G_ALIAS*)0xF00210B0u)) /* lint --e(923)*/

/** 1080, Arbitration Configuration Register, Group */
#define VADC_G3_ARBCFG ((*(volatile Ifx_VADC_G_ARBCFG*)0xF0021080u)) /* lint --e(923)*/

/** 1084, Arbitration Priority Register, Group */
#define VADC_G3_ARBPR ((*(volatile Ifx_VADC_G_ARBPR*)0xF0021084u)) /* lint --e(923)*/

/** 1120, Autoscan Source Control Register, Group */
#define VADC_G3_ASCTRL ((*(volatile Ifx_VADC_G_ASCTRL*)0xF0021120u)) /* lint --e(923)*/

/** 1124, Autoscan Source Mode Register, Group */
#define VADC_G3_ASMR ((*(volatile Ifx_VADC_G_ASMR*)0xF0021124u)) /* lint --e(923)*/

/** 112C, Autoscan Source Pending Register, Group */
#define VADC_G3_ASPND ((*(volatile Ifx_VADC_G_ASPND*)0xF002112Cu)) /* lint --e(923)*/

/** 1128, Autoscan Source Channel Select Register, Group */
#define VADC_G3_ASSEL ((*(volatile Ifx_VADC_G_ASSEL*)0xF0021128u)) /* lint --e(923)*/

/** 10C8, Boundary Flag Register, Group */
#define VADC_G3_BFL ((*(volatile Ifx_VADC_G_BFL*)0xF00210C8u)) /* lint --e(923)*/

/** 10B8, Boundary Select Register, Group */
#define VADC_G3_BOUND ((*(volatile Ifx_VADC_G_BOUND*)0xF00210B8u)) /* lint --e(923)*/

/** 1190, Channel Event Flag Clear Register, Group */
#define VADC_G3_CEFCLR ((*(volatile Ifx_VADC_G_CEFCLR*)0xF0021190u)) /* lint --e(923)*/

/** 1180, Channel Event Flag Register, Group */
#define VADC_G3_CEFLAG ((*(volatile Ifx_VADC_G_CEFLAG*)0xF0021180u)) /* lint --e(923)*/

/** 11A0, Channel Event Node Pointer Register 0, Group */
#define VADC_G3_CEVNP0 ((*(volatile Ifx_VADC_G_CEVNP0*)0xF00211A0u)) /* lint --e(923)*/

/** 1088, Channel Assignment Register, Group */
#define VADC_G3_CHASS ((*(volatile Ifx_VADC_G_CHASS*)0xF0021088u)) /* lint --e(923)*/

/** 1200, Group, Channel Control Register */
#define VADC_G3_CHCTR0 ((*(volatile Ifx_VADC_CHCTR*)0xF0021200u)) /* lint --e(923)*/

/** 1204, Group, Channel Control Register */
#define VADC_G3_CHCTR1 ((*(volatile Ifx_VADC_CHCTR*)0xF0021204u)) /* lint --e(923)*/

/** 1208, Group, Channel Control Register */
#define VADC_G3_CHCTR2 ((*(volatile Ifx_VADC_CHCTR*)0xF0021208u)) /* lint --e(923)*/

/** 120C, Group, Channel Control Register */
#define VADC_G3_CHCTR3 ((*(volatile Ifx_VADC_CHCTR*)0xF002120Cu)) /* lint --e(923)*/

/** 1210, Group, Channel Control Register */
#define VADC_G3_CHCTR4 ((*(volatile Ifx_VADC_CHCTR*)0xF0021210u)) /* lint --e(923)*/

/** 1214, Group, Channel Control Register */
#define VADC_G3_CHCTR5 ((*(volatile Ifx_VADC_CHCTR*)0xF0021214u)) /* lint --e(923)*/

/** 1218, Group, Channel Control Register */
#define VADC_G3_CHCTR6 ((*(volatile Ifx_VADC_CHCTR*)0xF0021218u)) /* lint --e(923)*/

/** 121C, Group, Channel Control Register */
#define VADC_G3_CHCTR7 ((*(volatile Ifx_VADC_CHCTR*)0xF002121Cu)) /* lint --e(923)*/

/** 11F0, External Multiplexer Control Register, Group x */
#define VADC_G3_EMUXCTR ((*(volatile Ifx_VADC_G_EMUXCTR*)0xF00211F0u)) /* lint --e(923)*/

/** 10A0, Input Class Register */
#define VADC_G3_ICLASS0 ((*(volatile Ifx_VADC_ICLASS*)0xF00210A0u)) /* lint --e(923)*/

/** 10A4, Input Class Register */
#define VADC_G3_ICLASS1 ((*(volatile Ifx_VADC_ICLASS*)0xF00210A4u)) /* lint --e(923)*/

/** 110C, Queue 0 Register 0, Group */
#define VADC_G3_Q0R0 ((*(volatile Ifx_VADC_G_Q0R0*)0xF002110Cu)) /* lint --e(923)*/

/** 1100, Queue 0 Source Control Register, Group */
#define VADC_G3_QCTRL0 ((*(volatile Ifx_VADC_G_QCTRL0*)0xF0021100u)) /* lint --e(923)*/

/** 1110, Queue 0 Input Register, Group */
#define VADC_G3_QINR0 ((*(volatile Ifx_VADC_G_QINR0*)0xF0021110u)) /* lint --e(923)*/

/** 1104, Queue 0 Mode Register, Group */
#define VADC_G3_QMR0 ((*(volatile Ifx_VADC_G_QMR0*)0xF0021104u)) /* lint --e(923)*/

/** 1108, Queue 0 Status Register, Group */
#define VADC_G3_QSR0 ((*(volatile Ifx_VADC_G_QSR0*)0xF0021108u)) /* lint --e(923)*/

/** 1280, Group Result Control Register */
#define VADC_G3_RCR0 ((*(volatile Ifx_VADC_RCR*)0xF0021280u)) /* lint --e(923)*/

/** 1284, Group Result Control Register */
#define VADC_G3_RCR1 ((*(volatile Ifx_VADC_RCR*)0xF0021284u)) /* lint --e(923)*/

/** 12A8, Group Result Control Register */
#define VADC_G3_RCR10 ((*(volatile Ifx_VADC_RCR*)0xF00212A8u)) /* lint --e(923)*/

/** 12AC, Group Result Control Register */
#define VADC_G3_RCR11 ((*(volatile Ifx_VADC_RCR*)0xF00212ACu)) /* lint --e(923)*/

/** 12B0, Group Result Control Register */
#define VADC_G3_RCR12 ((*(volatile Ifx_VADC_RCR*)0xF00212B0u)) /* lint --e(923)*/

/** 12B4, Group Result Control Register */
#define VADC_G3_RCR13 ((*(volatile Ifx_VADC_RCR*)0xF00212B4u)) /* lint --e(923)*/

/** 12B8, Group Result Control Register */
#define VADC_G3_RCR14 ((*(volatile Ifx_VADC_RCR*)0xF00212B8u)) /* lint --e(923)*/

/** 12BC, Group Result Control Register */
#define VADC_G3_RCR15 ((*(volatile Ifx_VADC_RCR*)0xF00212BCu)) /* lint --e(923)*/

/** 1288, Group Result Control Register */
#define VADC_G3_RCR2 ((*(volatile Ifx_VADC_RCR*)0xF0021288u)) /* lint --e(923)*/

/** 128C, Group Result Control Register */
#define VADC_G3_RCR3 ((*(volatile Ifx_VADC_RCR*)0xF002128Cu)) /* lint --e(923)*/

/** 1290, Group Result Control Register */
#define VADC_G3_RCR4 ((*(volatile Ifx_VADC_RCR*)0xF0021290u)) /* lint --e(923)*/

/** 1294, Group Result Control Register */
#define VADC_G3_RCR5 ((*(volatile Ifx_VADC_RCR*)0xF0021294u)) /* lint --e(923)*/

/** 1298, Group Result Control Register */
#define VADC_G3_RCR6 ((*(volatile Ifx_VADC_RCR*)0xF0021298u)) /* lint --e(923)*/

/** 129C, Group Result Control Register */
#define VADC_G3_RCR7 ((*(volatile Ifx_VADC_RCR*)0xF002129Cu)) /* lint --e(923)*/

/** 12A0, Group Result Control Register */
#define VADC_G3_RCR8 ((*(volatile Ifx_VADC_RCR*)0xF00212A0u)) /* lint --e(923)*/

/** 12A4, Group Result Control Register */
#define VADC_G3_RCR9 ((*(volatile Ifx_VADC_RCR*)0xF00212A4u)) /* lint --e(923)*/

/** 1194, Result Event Flag Clear Register, Group */
#define VADC_G3_REFCLR ((*(volatile Ifx_VADC_G_REFCLR*)0xF0021194u)) /* lint --e(923)*/

/** 1184, Result Event Flag Register, Group */
#define VADC_G3_REFLAG ((*(volatile Ifx_VADC_G_REFLAG*)0xF0021184u)) /* lint --e(923)*/

/** 1300, Group Result Register */
#define VADC_G3_RES0 ((*(volatile Ifx_VADC_RES*)0xF0021300u)) /* lint --e(923)*/

/** 1304, Group Result Register */
#define VADC_G3_RES1 ((*(volatile Ifx_VADC_RES*)0xF0021304u)) /* lint --e(923)*/

/** 1328, Group Result Register */
#define VADC_G3_RES10 ((*(volatile Ifx_VADC_RES*)0xF0021328u)) /* lint --e(923)*/

/** 132C, Group Result Register */
#define VADC_G3_RES11 ((*(volatile Ifx_VADC_RES*)0xF002132Cu)) /* lint --e(923)*/

/** 1330, Group Result Register */
#define VADC_G3_RES12 ((*(volatile Ifx_VADC_RES*)0xF0021330u)) /* lint --e(923)*/

/** 1334, Group Result Register */
#define VADC_G3_RES13 ((*(volatile Ifx_VADC_RES*)0xF0021334u)) /* lint --e(923)*/

/** 1338, Group Result Register */
#define VADC_G3_RES14 ((*(volatile Ifx_VADC_RES*)0xF0021338u)) /* lint --e(923)*/

/** 133C, Group Result Register */
#define VADC_G3_RES15 ((*(volatile Ifx_VADC_RES*)0xF002133Cu)) /* lint --e(923)*/

/** 1308, Group Result Register */
#define VADC_G3_RES2 ((*(volatile Ifx_VADC_RES*)0xF0021308u)) /* lint --e(923)*/

/** 130C, Group Result Register */
#define VADC_G3_RES3 ((*(volatile Ifx_VADC_RES*)0xF002130Cu)) /* lint --e(923)*/

/** 1310, Group Result Register */
#define VADC_G3_RES4 ((*(volatile Ifx_VADC_RES*)0xF0021310u)) /* lint --e(923)*/

/** 1314, Group Result Register */
#define VADC_G3_RES5 ((*(volatile Ifx_VADC_RES*)0xF0021314u)) /* lint --e(923)*/

/** 1318, Group Result Register */
#define VADC_G3_RES6 ((*(volatile Ifx_VADC_RES*)0xF0021318u)) /* lint --e(923)*/

/** 131C, Group Result Register */
#define VADC_G3_RES7 ((*(volatile Ifx_VADC_RES*)0xF002131Cu)) /* lint --e(923)*/

/** 1320, Group Result Register */
#define VADC_G3_RES8 ((*(volatile Ifx_VADC_RES*)0xF0021320u)) /* lint --e(923)*/

/** 1324, Group Result Register */
#define VADC_G3_RES9 ((*(volatile Ifx_VADC_RES*)0xF0021324u)) /* lint --e(923)*/

/** 1380, Group Result Reg., Debug */
#define VADC_G3_RESD0 ((*(volatile Ifx_VADC_RESD*)0xF0021380u)) /* lint --e(923)*/

/** 1384, Group Result Reg., Debug */
#define VADC_G3_RESD1 ((*(volatile Ifx_VADC_RESD*)0xF0021384u)) /* lint --e(923)*/

/** 13A8, Group Result Reg., Debug */
#define VADC_G3_RESD10 ((*(volatile Ifx_VADC_RESD*)0xF00213A8u)) /* lint --e(923)*/

/** 13AC, Group Result Reg., Debug */
#define VADC_G3_RESD11 ((*(volatile Ifx_VADC_RESD*)0xF00213ACu)) /* lint --e(923)*/

/** 13B0, Group Result Reg., Debug */
#define VADC_G3_RESD12 ((*(volatile Ifx_VADC_RESD*)0xF00213B0u)) /* lint --e(923)*/

/** 13B4, Group Result Reg., Debug */
#define VADC_G3_RESD13 ((*(volatile Ifx_VADC_RESD*)0xF00213B4u)) /* lint --e(923)*/

/** 13B8, Group Result Reg., Debug */
#define VADC_G3_RESD14 ((*(volatile Ifx_VADC_RESD*)0xF00213B8u)) /* lint --e(923)*/

/** 13BC, Group Result Reg., Debug */
#define VADC_G3_RESD15 ((*(volatile Ifx_VADC_RESD*)0xF00213BCu)) /* lint --e(923)*/

/** 1388, Group Result Reg., Debug */
#define VADC_G3_RESD2 ((*(volatile Ifx_VADC_RESD*)0xF0021388u)) /* lint --e(923)*/

/** 138C, Group Result Reg., Debug */
#define VADC_G3_RESD3 ((*(volatile Ifx_VADC_RESD*)0xF002138Cu)) /* lint --e(923)*/

/** 1390, Group Result Reg., Debug */
#define VADC_G3_RESD4 ((*(volatile Ifx_VADC_RESD*)0xF0021390u)) /* lint --e(923)*/

/** 1394, Group Result Reg., Debug */
#define VADC_G3_RESD5 ((*(volatile Ifx_VADC_RESD*)0xF0021394u)) /* lint --e(923)*/

/** 1398, Group Result Reg., Debug */
#define VADC_G3_RESD6 ((*(volatile Ifx_VADC_RESD*)0xF0021398u)) /* lint --e(923)*/

/** 139C, Group Result Reg., Debug */
#define VADC_G3_RESD7 ((*(volatile Ifx_VADC_RESD*)0xF002139Cu)) /* lint --e(923)*/

/** 13A0, Group Result Reg., Debug */
#define VADC_G3_RESD8 ((*(volatile Ifx_VADC_RESD*)0xF00213A0u)) /* lint --e(923)*/

/** 13A4, Group Result Reg., Debug */
#define VADC_G3_RESD9 ((*(volatile Ifx_VADC_RESD*)0xF00213A4u)) /* lint --e(923)*/

/** 11B0, Result Event Node Pointer Register 0, Group */
#define VADC_G3_REVNP0 ((*(volatile Ifx_VADC_G_REVNP0*)0xF00211B0u)) /* lint --e(923)*/

/** 11B4, Result Event Node Pointer Register 1, Group */
#define VADC_G3_REVNP1 ((*(volatile Ifx_VADC_G_REVNP1*)0xF00211B4u)) /* lint --e(923)*/

/** 1198, Source Event Flag Clear Register, Group */
#define VADC_G3_SEFCLR ((*(volatile Ifx_VADC_G_SEFCLR*)0xF0021198u)) /* lint --e(923)*/

/** 1188, Source Event Flag Register, Group */
#define VADC_G3_SEFLAG ((*(volatile Ifx_VADC_G_SEFLAG*)0xF0021188u)) /* lint --e(923)*/

/** 11C0, Source Event Node Pointer Register, Group */
#define VADC_G3_SEVNP ((*(volatile Ifx_VADC_G_SEVNP*)0xF00211C0u)) /* lint --e(923)*/

/** 11C8, Service Request Software Activation Trigger, Group */
#define VADC_G3_SRACT ((*(volatile Ifx_VADC_G_SRACT*)0xF00211C8u)) /* lint --e(923)*/

/** 10C0, Synchronization Control Register, Group */
#define VADC_G3_SYNCTR ((*(volatile Ifx_VADC_G_SYNCTR*)0xF00210C0u)) /* lint --e(923)*/

/** 11F8, Valid Flag Register, Group */
#define VADC_G3_VFR ((*(volatile Ifx_VADC_G_VFR*)0xF00211F8u)) /* lint --e(923)*/

/** 14B0, Alias Register, Group */
#define VADC_G4_ALIAS ((*(volatile Ifx_VADC_G_ALIAS*)0xF00214B0u)) /* lint --e(923)*/

/** 1480, Arbitration Configuration Register, Group */
#define VADC_G4_ARBCFG ((*(volatile Ifx_VADC_G_ARBCFG*)0xF0021480u)) /* lint --e(923)*/

/** 1484, Arbitration Priority Register, Group */
#define VADC_G4_ARBPR ((*(volatile Ifx_VADC_G_ARBPR*)0xF0021484u)) /* lint --e(923)*/

/** 1520, Autoscan Source Control Register, Group */
#define VADC_G4_ASCTRL ((*(volatile Ifx_VADC_G_ASCTRL*)0xF0021520u)) /* lint --e(923)*/

/** 1524, Autoscan Source Mode Register, Group */
#define VADC_G4_ASMR ((*(volatile Ifx_VADC_G_ASMR*)0xF0021524u)) /* lint --e(923)*/

/** 152C, Autoscan Source Pending Register, Group */
#define VADC_G4_ASPND ((*(volatile Ifx_VADC_G_ASPND*)0xF002152Cu)) /* lint --e(923)*/

/** 1528, Autoscan Source Channel Select Register, Group */
#define VADC_G4_ASSEL ((*(volatile Ifx_VADC_G_ASSEL*)0xF0021528u)) /* lint --e(923)*/

/** 14C8, Boundary Flag Register, Group */
#define VADC_G4_BFL ((*(volatile Ifx_VADC_G_BFL*)0xF00214C8u)) /* lint --e(923)*/

/** 14B8, Boundary Select Register, Group */
#define VADC_G4_BOUND ((*(volatile Ifx_VADC_G_BOUND*)0xF00214B8u)) /* lint --e(923)*/

/** 1590, Channel Event Flag Clear Register, Group */
#define VADC_G4_CEFCLR ((*(volatile Ifx_VADC_G_CEFCLR*)0xF0021590u)) /* lint --e(923)*/

/** 1580, Channel Event Flag Register, Group */
#define VADC_G4_CEFLAG ((*(volatile Ifx_VADC_G_CEFLAG*)0xF0021580u)) /* lint --e(923)*/

/** 15A0, Channel Event Node Pointer Register 0, Group */
#define VADC_G4_CEVNP0 ((*(volatile Ifx_VADC_G_CEVNP0*)0xF00215A0u)) /* lint --e(923)*/

/** 1488, Channel Assignment Register, Group */
#define VADC_G4_CHASS ((*(volatile Ifx_VADC_G_CHASS*)0xF0021488u)) /* lint --e(923)*/

/** 1600, Group, Channel Control Register */
#define VADC_G4_CHCTR0 ((*(volatile Ifx_VADC_CHCTR*)0xF0021600u)) /* lint --e(923)*/

/** 1604, Group, Channel Control Register */
#define VADC_G4_CHCTR1 ((*(volatile Ifx_VADC_CHCTR*)0xF0021604u)) /* lint --e(923)*/

/** 1608, Group, Channel Control Register */
#define VADC_G4_CHCTR2 ((*(volatile Ifx_VADC_CHCTR*)0xF0021608u)) /* lint --e(923)*/

/** 160C, Group, Channel Control Register */
#define VADC_G4_CHCTR3 ((*(volatile Ifx_VADC_CHCTR*)0xF002160Cu)) /* lint --e(923)*/

/** 1610, Group, Channel Control Register */
#define VADC_G4_CHCTR4 ((*(volatile Ifx_VADC_CHCTR*)0xF0021610u)) /* lint --e(923)*/

/** 1614, Group, Channel Control Register */
#define VADC_G4_CHCTR5 ((*(volatile Ifx_VADC_CHCTR*)0xF0021614u)) /* lint --e(923)*/

/** 1618, Group, Channel Control Register */
#define VADC_G4_CHCTR6 ((*(volatile Ifx_VADC_CHCTR*)0xF0021618u)) /* lint --e(923)*/

/** 161C, Group, Channel Control Register */
#define VADC_G4_CHCTR7 ((*(volatile Ifx_VADC_CHCTR*)0xF002161Cu)) /* lint --e(923)*/

/** 15F0, External Multiplexer Control Register, Group x */
#define VADC_G4_EMUXCTR ((*(volatile Ifx_VADC_G_EMUXCTR*)0xF00215F0u)) /* lint --e(923)*/

/** 14A0, Input Class Register */
#define VADC_G4_ICLASS0 ((*(volatile Ifx_VADC_ICLASS*)0xF00214A0u)) /* lint --e(923)*/

/** 14A4, Input Class Register */
#define VADC_G4_ICLASS1 ((*(volatile Ifx_VADC_ICLASS*)0xF00214A4u)) /* lint --e(923)*/

/** 150C, Queue 0 Register 0, Group */
#define VADC_G4_Q0R0 ((*(volatile Ifx_VADC_G_Q0R0*)0xF002150Cu)) /* lint --e(923)*/

/** 1500, Queue 0 Source Control Register, Group */
#define VADC_G4_QCTRL0 ((*(volatile Ifx_VADC_G_QCTRL0*)0xF0021500u)) /* lint --e(923)*/

/** 1510, Queue 0 Input Register, Group */
#define VADC_G4_QINR0 ((*(volatile Ifx_VADC_G_QINR0*)0xF0021510u)) /* lint --e(923)*/

/** 1504, Queue 0 Mode Register, Group */
#define VADC_G4_QMR0 ((*(volatile Ifx_VADC_G_QMR0*)0xF0021504u)) /* lint --e(923)*/

/** 1508, Queue 0 Status Register, Group */
#define VADC_G4_QSR0 ((*(volatile Ifx_VADC_G_QSR0*)0xF0021508u)) /* lint --e(923)*/

/** 1680, Group Result Control Register */
#define VADC_G4_RCR0 ((*(volatile Ifx_VADC_RCR*)0xF0021680u)) /* lint --e(923)*/

/** 1684, Group Result Control Register */
#define VADC_G4_RCR1 ((*(volatile Ifx_VADC_RCR*)0xF0021684u)) /* lint --e(923)*/

/** 16A8, Group Result Control Register */
#define VADC_G4_RCR10 ((*(volatile Ifx_VADC_RCR*)0xF00216A8u)) /* lint --e(923)*/

/** 16AC, Group Result Control Register */
#define VADC_G4_RCR11 ((*(volatile Ifx_VADC_RCR*)0xF00216ACu)) /* lint --e(923)*/

/** 16B0, Group Result Control Register */
#define VADC_G4_RCR12 ((*(volatile Ifx_VADC_RCR*)0xF00216B0u)) /* lint --e(923)*/

/** 16B4, Group Result Control Register */
#define VADC_G4_RCR13 ((*(volatile Ifx_VADC_RCR*)0xF00216B4u)) /* lint --e(923)*/

/** 16B8, Group Result Control Register */
#define VADC_G4_RCR14 ((*(volatile Ifx_VADC_RCR*)0xF00216B8u)) /* lint --e(923)*/

/** 16BC, Group Result Control Register */
#define VADC_G4_RCR15 ((*(volatile Ifx_VADC_RCR*)0xF00216BCu)) /* lint --e(923)*/

/** 1688, Group Result Control Register */
#define VADC_G4_RCR2 ((*(volatile Ifx_VADC_RCR*)0xF0021688u)) /* lint --e(923)*/

/** 168C, Group Result Control Register */
#define VADC_G4_RCR3 ((*(volatile Ifx_VADC_RCR*)0xF002168Cu)) /* lint --e(923)*/

/** 1690, Group Result Control Register */
#define VADC_G4_RCR4 ((*(volatile Ifx_VADC_RCR*)0xF0021690u)) /* lint --e(923)*/

/** 1694, Group Result Control Register */
#define VADC_G4_RCR5 ((*(volatile Ifx_VADC_RCR*)0xF0021694u)) /* lint --e(923)*/

/** 1698, Group Result Control Register */
#define VADC_G4_RCR6 ((*(volatile Ifx_VADC_RCR*)0xF0021698u)) /* lint --e(923)*/

/** 169C, Group Result Control Register */
#define VADC_G4_RCR7 ((*(volatile Ifx_VADC_RCR*)0xF002169Cu)) /* lint --e(923)*/

/** 16A0, Group Result Control Register */
#define VADC_G4_RCR8 ((*(volatile Ifx_VADC_RCR*)0xF00216A0u)) /* lint --e(923)*/

/** 16A4, Group Result Control Register */
#define VADC_G4_RCR9 ((*(volatile Ifx_VADC_RCR*)0xF00216A4u)) /* lint --e(923)*/

/** 1594, Result Event Flag Clear Register, Group */
#define VADC_G4_REFCLR ((*(volatile Ifx_VADC_G_REFCLR*)0xF0021594u)) /* lint --e(923)*/

/** 1584, Result Event Flag Register, Group */
#define VADC_G4_REFLAG ((*(volatile Ifx_VADC_G_REFLAG*)0xF0021584u)) /* lint --e(923)*/

/** 1700, Group Result Register */
#define VADC_G4_RES0 ((*(volatile Ifx_VADC_RES*)0xF0021700u)) /* lint --e(923)*/

/** 1704, Group Result Register */
#define VADC_G4_RES1 ((*(volatile Ifx_VADC_RES*)0xF0021704u)) /* lint --e(923)*/

/** 1728, Group Result Register */
#define VADC_G4_RES10 ((*(volatile Ifx_VADC_RES*)0xF0021728u)) /* lint --e(923)*/

/** 172C, Group Result Register */
#define VADC_G4_RES11 ((*(volatile Ifx_VADC_RES*)0xF002172Cu)) /* lint --e(923)*/

/** 1730, Group Result Register */
#define VADC_G4_RES12 ((*(volatile Ifx_VADC_RES*)0xF0021730u)) /* lint --e(923)*/

/** 1734, Group Result Register */
#define VADC_G4_RES13 ((*(volatile Ifx_VADC_RES*)0xF0021734u)) /* lint --e(923)*/

/** 1738, Group Result Register */
#define VADC_G4_RES14 ((*(volatile Ifx_VADC_RES*)0xF0021738u)) /* lint --e(923)*/

/** 173C, Group Result Register */
#define VADC_G4_RES15 ((*(volatile Ifx_VADC_RES*)0xF002173Cu)) /* lint --e(923)*/

/** 1708, Group Result Register */
#define VADC_G4_RES2 ((*(volatile Ifx_VADC_RES*)0xF0021708u)) /* lint --e(923)*/

/** 170C, Group Result Register */
#define VADC_G4_RES3 ((*(volatile Ifx_VADC_RES*)0xF002170Cu)) /* lint --e(923)*/

/** 1710, Group Result Register */
#define VADC_G4_RES4 ((*(volatile Ifx_VADC_RES*)0xF0021710u)) /* lint --e(923)*/

/** 1714, Group Result Register */
#define VADC_G4_RES5 ((*(volatile Ifx_VADC_RES*)0xF0021714u)) /* lint --e(923)*/

/** 1718, Group Result Register */
#define VADC_G4_RES6 ((*(volatile Ifx_VADC_RES*)0xF0021718u)) /* lint --e(923)*/

/** 171C, Group Result Register */
#define VADC_G4_RES7 ((*(volatile Ifx_VADC_RES*)0xF002171Cu)) /* lint --e(923)*/

/** 1720, Group Result Register */
#define VADC_G4_RES8 ((*(volatile Ifx_VADC_RES*)0xF0021720u)) /* lint --e(923)*/

/** 1724, Group Result Register */
#define VADC_G4_RES9 ((*(volatile Ifx_VADC_RES*)0xF0021724u)) /* lint --e(923)*/

/** 1780, Group Result Reg., Debug */
#define VADC_G4_RESD0 ((*(volatile Ifx_VADC_RESD*)0xF0021780u)) /* lint --e(923)*/

/** 1784, Group Result Reg., Debug */
#define VADC_G4_RESD1 ((*(volatile Ifx_VADC_RESD*)0xF0021784u)) /* lint --e(923)*/

/** 17A8, Group Result Reg., Debug */
#define VADC_G4_RESD10 ((*(volatile Ifx_VADC_RESD*)0xF00217A8u)) /* lint --e(923)*/

/** 17AC, Group Result Reg., Debug */
#define VADC_G4_RESD11 ((*(volatile Ifx_VADC_RESD*)0xF00217ACu)) /* lint --e(923)*/

/** 17B0, Group Result Reg., Debug */
#define VADC_G4_RESD12 ((*(volatile Ifx_VADC_RESD*)0xF00217B0u)) /* lint --e(923)*/

/** 17B4, Group Result Reg., Debug */
#define VADC_G4_RESD13 ((*(volatile Ifx_VADC_RESD*)0xF00217B4u)) /* lint --e(923)*/

/** 17B8, Group Result Reg., Debug */
#define VADC_G4_RESD14 ((*(volatile Ifx_VADC_RESD*)0xF00217B8u)) /* lint --e(923)*/

/** 17BC, Group Result Reg., Debug */
#define VADC_G4_RESD15 ((*(volatile Ifx_VADC_RESD*)0xF00217BCu)) /* lint --e(923)*/

/** 1788, Group Result Reg., Debug */
#define VADC_G4_RESD2 ((*(volatile Ifx_VADC_RESD*)0xF0021788u)) /* lint --e(923)*/

/** 178C, Group Result Reg., Debug */
#define VADC_G4_RESD3 ((*(volatile Ifx_VADC_RESD*)0xF002178Cu)) /* lint --e(923)*/

/** 1790, Group Result Reg., Debug */
#define VADC_G4_RESD4 ((*(volatile Ifx_VADC_RESD*)0xF0021790u)) /* lint --e(923)*/

/** 1794, Group Result Reg., Debug */
#define VADC_G4_RESD5 ((*(volatile Ifx_VADC_RESD*)0xF0021794u)) /* lint --e(923)*/

/** 1798, Group Result Reg., Debug */
#define VADC_G4_RESD6 ((*(volatile Ifx_VADC_RESD*)0xF0021798u)) /* lint --e(923)*/

/** 179C, Group Result Reg., Debug */
#define VADC_G4_RESD7 ((*(volatile Ifx_VADC_RESD*)0xF002179Cu)) /* lint --e(923)*/

/** 17A0, Group Result Reg., Debug */
#define VADC_G4_RESD8 ((*(volatile Ifx_VADC_RESD*)0xF00217A0u)) /* lint --e(923)*/

/** 17A4, Group Result Reg., Debug */
#define VADC_G4_RESD9 ((*(volatile Ifx_VADC_RESD*)0xF00217A4u)) /* lint --e(923)*/

/** 15B0, Result Event Node Pointer Register 0, Group */
#define VADC_G4_REVNP0 ((*(volatile Ifx_VADC_G_REVNP0*)0xF00215B0u)) /* lint --e(923)*/

/** 15B4, Result Event Node Pointer Register 1, Group */
#define VADC_G4_REVNP1 ((*(volatile Ifx_VADC_G_REVNP1*)0xF00215B4u)) /* lint --e(923)*/

/** 1598, Source Event Flag Clear Register, Group */
#define VADC_G4_SEFCLR ((*(volatile Ifx_VADC_G_SEFCLR*)0xF0021598u)) /* lint --e(923)*/

/** 1588, Source Event Flag Register, Group */
#define VADC_G4_SEFLAG ((*(volatile Ifx_VADC_G_SEFLAG*)0xF0021588u)) /* lint --e(923)*/

/** 15C0, Source Event Node Pointer Register, Group */
#define VADC_G4_SEVNP ((*(volatile Ifx_VADC_G_SEVNP*)0xF00215C0u)) /* lint --e(923)*/

/** 15C8, Service Request Software Activation Trigger, Group */
#define VADC_G4_SRACT ((*(volatile Ifx_VADC_G_SRACT*)0xF00215C8u)) /* lint --e(923)*/

/** 14C0, Synchronization Control Register, Group */
#define VADC_G4_SYNCTR ((*(volatile Ifx_VADC_G_SYNCTR*)0xF00214C0u)) /* lint --e(923)*/

/** 15F8, Valid Flag Register, Group */
#define VADC_G4_VFR ((*(volatile Ifx_VADC_G_VFR*)0xF00215F8u)) /* lint --e(923)*/

/** 18B0, Alias Register, Group */
#define VADC_G5_ALIAS ((*(volatile Ifx_VADC_G_ALIAS*)0xF00218B0u)) /* lint --e(923)*/

/** 1880, Arbitration Configuration Register, Group */
#define VADC_G5_ARBCFG ((*(volatile Ifx_VADC_G_ARBCFG*)0xF0021880u)) /* lint --e(923)*/

/** 1884, Arbitration Priority Register, Group */
#define VADC_G5_ARBPR ((*(volatile Ifx_VADC_G_ARBPR*)0xF0021884u)) /* lint --e(923)*/

/** 1920, Autoscan Source Control Register, Group */
#define VADC_G5_ASCTRL ((*(volatile Ifx_VADC_G_ASCTRL*)0xF0021920u)) /* lint --e(923)*/

/** 1924, Autoscan Source Mode Register, Group */
#define VADC_G5_ASMR ((*(volatile Ifx_VADC_G_ASMR*)0xF0021924u)) /* lint --e(923)*/

/** 192C, Autoscan Source Pending Register, Group */
#define VADC_G5_ASPND ((*(volatile Ifx_VADC_G_ASPND*)0xF002192Cu)) /* lint --e(923)*/

/** 1928, Autoscan Source Channel Select Register, Group */
#define VADC_G5_ASSEL ((*(volatile Ifx_VADC_G_ASSEL*)0xF0021928u)) /* lint --e(923)*/

/** 18C8, Boundary Flag Register, Group */
#define VADC_G5_BFL ((*(volatile Ifx_VADC_G_BFL*)0xF00218C8u)) /* lint --e(923)*/

/** 18B8, Boundary Select Register, Group */
#define VADC_G5_BOUND ((*(volatile Ifx_VADC_G_BOUND*)0xF00218B8u)) /* lint --e(923)*/

/** 1990, Channel Event Flag Clear Register, Group */
#define VADC_G5_CEFCLR ((*(volatile Ifx_VADC_G_CEFCLR*)0xF0021990u)) /* lint --e(923)*/

/** 1980, Channel Event Flag Register, Group */
#define VADC_G5_CEFLAG ((*(volatile Ifx_VADC_G_CEFLAG*)0xF0021980u)) /* lint --e(923)*/

/** 19A0, Channel Event Node Pointer Register 0, Group */
#define VADC_G5_CEVNP0 ((*(volatile Ifx_VADC_G_CEVNP0*)0xF00219A0u)) /* lint --e(923)*/

/** 1888, Channel Assignment Register, Group */
#define VADC_G5_CHASS ((*(volatile Ifx_VADC_G_CHASS*)0xF0021888u)) /* lint --e(923)*/

/** 1A00, Group, Channel Control Register */
#define VADC_G5_CHCTR0 ((*(volatile Ifx_VADC_CHCTR*)0xF0021A00u)) /* lint --e(923)*/

/** 1A04, Group, Channel Control Register */
#define VADC_G5_CHCTR1 ((*(volatile Ifx_VADC_CHCTR*)0xF0021A04u)) /* lint --e(923)*/

/** 1A08, Group, Channel Control Register */
#define VADC_G5_CHCTR2 ((*(volatile Ifx_VADC_CHCTR*)0xF0021A08u)) /* lint --e(923)*/

/** 1A0C, Group, Channel Control Register */
#define VADC_G5_CHCTR3 ((*(volatile Ifx_VADC_CHCTR*)0xF0021A0Cu)) /* lint --e(923)*/

/** 1A10, Group, Channel Control Register */
#define VADC_G5_CHCTR4 ((*(volatile Ifx_VADC_CHCTR*)0xF0021A10u)) /* lint --e(923)*/

/** 1A14, Group, Channel Control Register */
#define VADC_G5_CHCTR5 ((*(volatile Ifx_VADC_CHCTR*)0xF0021A14u)) /* lint --e(923)*/

/** 1A18, Group, Channel Control Register */
#define VADC_G5_CHCTR6 ((*(volatile Ifx_VADC_CHCTR*)0xF0021A18u)) /* lint --e(923)*/

/** 1A1C, Group, Channel Control Register */
#define VADC_G5_CHCTR7 ((*(volatile Ifx_VADC_CHCTR*)0xF0021A1Cu)) /* lint --e(923)*/

/** 19F0, External Multiplexer Control Register, Group x */
#define VADC_G5_EMUXCTR ((*(volatile Ifx_VADC_G_EMUXCTR*)0xF00219F0u)) /* lint --e(923)*/

/** 18A0, Input Class Register */
#define VADC_G5_ICLASS0 ((*(volatile Ifx_VADC_ICLASS*)0xF00218A0u)) /* lint --e(923)*/

/** 18A4, Input Class Register */
#define VADC_G5_ICLASS1 ((*(volatile Ifx_VADC_ICLASS*)0xF00218A4u)) /* lint --e(923)*/

/** 190C, Queue 0 Register 0, Group */
#define VADC_G5_Q0R0 ((*(volatile Ifx_VADC_G_Q0R0*)0xF002190Cu)) /* lint --e(923)*/

/** 1900, Queue 0 Source Control Register, Group */
#define VADC_G5_QCTRL0 ((*(volatile Ifx_VADC_G_QCTRL0*)0xF0021900u)) /* lint --e(923)*/

/** 1910, Queue 0 Input Register, Group */
#define VADC_G5_QINR0 ((*(volatile Ifx_VADC_G_QINR0*)0xF0021910u)) /* lint --e(923)*/

/** 1904, Queue 0 Mode Register, Group */
#define VADC_G5_QMR0 ((*(volatile Ifx_VADC_G_QMR0*)0xF0021904u)) /* lint --e(923)*/

/** 1908, Queue 0 Status Register, Group */
#define VADC_G5_QSR0 ((*(volatile Ifx_VADC_G_QSR0*)0xF0021908u)) /* lint --e(923)*/

/** 1A80, Group Result Control Register */
#define VADC_G5_RCR0 ((*(volatile Ifx_VADC_RCR*)0xF0021A80u)) /* lint --e(923)*/

/** 1A84, Group Result Control Register */
#define VADC_G5_RCR1 ((*(volatile Ifx_VADC_RCR*)0xF0021A84u)) /* lint --e(923)*/

/** 1AA8, Group Result Control Register */
#define VADC_G5_RCR10 ((*(volatile Ifx_VADC_RCR*)0xF0021AA8u)) /* lint --e(923)*/

/** 1AAC, Group Result Control Register */
#define VADC_G5_RCR11 ((*(volatile Ifx_VADC_RCR*)0xF0021AACu)) /* lint --e(923)*/

/** 1AB0, Group Result Control Register */
#define VADC_G5_RCR12 ((*(volatile Ifx_VADC_RCR*)0xF0021AB0u)) /* lint --e(923)*/

/** 1AB4, Group Result Control Register */
#define VADC_G5_RCR13 ((*(volatile Ifx_VADC_RCR*)0xF0021AB4u)) /* lint --e(923)*/

/** 1AB8, Group Result Control Register */
#define VADC_G5_RCR14 ((*(volatile Ifx_VADC_RCR*)0xF0021AB8u)) /* lint --e(923)*/

/** 1ABC, Group Result Control Register */
#define VADC_G5_RCR15 ((*(volatile Ifx_VADC_RCR*)0xF0021ABCu)) /* lint --e(923)*/

/** 1A88, Group Result Control Register */
#define VADC_G5_RCR2 ((*(volatile Ifx_VADC_RCR*)0xF0021A88u)) /* lint --e(923)*/

/** 1A8C, Group Result Control Register */
#define VADC_G5_RCR3 ((*(volatile Ifx_VADC_RCR*)0xF0021A8Cu)) /* lint --e(923)*/

/** 1A90, Group Result Control Register */
#define VADC_G5_RCR4 ((*(volatile Ifx_VADC_RCR*)0xF0021A90u)) /* lint --e(923)*/

/** 1A94, Group Result Control Register */
#define VADC_G5_RCR5 ((*(volatile Ifx_VADC_RCR*)0xF0021A94u)) /* lint --e(923)*/

/** 1A98, Group Result Control Register */
#define VADC_G5_RCR6 ((*(volatile Ifx_VADC_RCR*)0xF0021A98u)) /* lint --e(923)*/

/** 1A9C, Group Result Control Register */
#define VADC_G5_RCR7 ((*(volatile Ifx_VADC_RCR*)0xF0021A9Cu)) /* lint --e(923)*/

/** 1AA0, Group Result Control Register */
#define VADC_G5_RCR8 ((*(volatile Ifx_VADC_RCR*)0xF0021AA0u)) /* lint --e(923)*/

/** 1AA4, Group Result Control Register */
#define VADC_G5_RCR9 ((*(volatile Ifx_VADC_RCR*)0xF0021AA4u)) /* lint --e(923)*/

/** 1994, Result Event Flag Clear Register, Group */
#define VADC_G5_REFCLR ((*(volatile Ifx_VADC_G_REFCLR*)0xF0021994u)) /* lint --e(923)*/

/** 1984, Result Event Flag Register, Group */
#define VADC_G5_REFLAG ((*(volatile Ifx_VADC_G_REFLAG*)0xF0021984u)) /* lint --e(923)*/

/** 1B00, Group Result Register */
#define VADC_G5_RES0 ((*(volatile Ifx_VADC_RES*)0xF0021B00u)) /* lint --e(923)*/

/** 1B04, Group Result Register */
#define VADC_G5_RES1 ((*(volatile Ifx_VADC_RES*)0xF0021B04u)) /* lint --e(923)*/

/** 1B28, Group Result Register */
#define VADC_G5_RES10 ((*(volatile Ifx_VADC_RES*)0xF0021B28u)) /* lint --e(923)*/

/** 1B2C, Group Result Register */
#define VADC_G5_RES11 ((*(volatile Ifx_VADC_RES*)0xF0021B2Cu)) /* lint --e(923)*/

/** 1B30, Group Result Register */
#define VADC_G5_RES12 ((*(volatile Ifx_VADC_RES*)0xF0021B30u)) /* lint --e(923)*/

/** 1B34, Group Result Register */
#define VADC_G5_RES13 ((*(volatile Ifx_VADC_RES*)0xF0021B34u)) /* lint --e(923)*/

/** 1B38, Group Result Register */
#define VADC_G5_RES14 ((*(volatile Ifx_VADC_RES*)0xF0021B38u)) /* lint --e(923)*/

/** 1B3C, Group Result Register */
#define VADC_G5_RES15 ((*(volatile Ifx_VADC_RES*)0xF0021B3Cu)) /* lint --e(923)*/

/** 1B08, Group Result Register */
#define VADC_G5_RES2 ((*(volatile Ifx_VADC_RES*)0xF0021B08u)) /* lint --e(923)*/

/** 1B0C, Group Result Register */
#define VADC_G5_RES3 ((*(volatile Ifx_VADC_RES*)0xF0021B0Cu)) /* lint --e(923)*/

/** 1B10, Group Result Register */
#define VADC_G5_RES4 ((*(volatile Ifx_VADC_RES*)0xF0021B10u)) /* lint --e(923)*/

/** 1B14, Group Result Register */
#define VADC_G5_RES5 ((*(volatile Ifx_VADC_RES*)0xF0021B14u)) /* lint --e(923)*/

/** 1B18, Group Result Register */
#define VADC_G5_RES6 ((*(volatile Ifx_VADC_RES*)0xF0021B18u)) /* lint --e(923)*/

/** 1B1C, Group Result Register */
#define VADC_G5_RES7 ((*(volatile Ifx_VADC_RES*)0xF0021B1Cu)) /* lint --e(923)*/

/** 1B20, Group Result Register */
#define VADC_G5_RES8 ((*(volatile Ifx_VADC_RES*)0xF0021B20u)) /* lint --e(923)*/

/** 1B24, Group Result Register */
#define VADC_G5_RES9 ((*(volatile Ifx_VADC_RES*)0xF0021B24u)) /* lint --e(923)*/

/** 1B80, Group Result Reg., Debug */
#define VADC_G5_RESD0 ((*(volatile Ifx_VADC_RESD*)0xF0021B80u)) /* lint --e(923)*/

/** 1B84, Group Result Reg., Debug */
#define VADC_G5_RESD1 ((*(volatile Ifx_VADC_RESD*)0xF0021B84u)) /* lint --e(923)*/

/** 1BA8, Group Result Reg., Debug */
#define VADC_G5_RESD10 ((*(volatile Ifx_VADC_RESD*)0xF0021BA8u)) /* lint --e(923)*/

/** 1BAC, Group Result Reg., Debug */
#define VADC_G5_RESD11 ((*(volatile Ifx_VADC_RESD*)0xF0021BACu)) /* lint --e(923)*/

/** 1BB0, Group Result Reg., Debug */
#define VADC_G5_RESD12 ((*(volatile Ifx_VADC_RESD*)0xF0021BB0u)) /* lint --e(923)*/

/** 1BB4, Group Result Reg., Debug */
#define VADC_G5_RESD13 ((*(volatile Ifx_VADC_RESD*)0xF0021BB4u)) /* lint --e(923)*/

/** 1BB8, Group Result Reg., Debug */
#define VADC_G5_RESD14 ((*(volatile Ifx_VADC_RESD*)0xF0021BB8u)) /* lint --e(923)*/

/** 1BBC, Group Result Reg., Debug */
#define VADC_G5_RESD15 ((*(volatile Ifx_VADC_RESD*)0xF0021BBCu)) /* lint --e(923)*/

/** 1B88, Group Result Reg., Debug */
#define VADC_G5_RESD2 ((*(volatile Ifx_VADC_RESD*)0xF0021B88u)) /* lint --e(923)*/

/** 1B8C, Group Result Reg., Debug */
#define VADC_G5_RESD3 ((*(volatile Ifx_VADC_RESD*)0xF0021B8Cu)) /* lint --e(923)*/

/** 1B90, Group Result Reg., Debug */
#define VADC_G5_RESD4 ((*(volatile Ifx_VADC_RESD*)0xF0021B90u)) /* lint --e(923)*/

/** 1B94, Group Result Reg., Debug */
#define VADC_G5_RESD5 ((*(volatile Ifx_VADC_RESD*)0xF0021B94u)) /* lint --e(923)*/

/** 1B98, Group Result Reg., Debug */
#define VADC_G5_RESD6 ((*(volatile Ifx_VADC_RESD*)0xF0021B98u)) /* lint --e(923)*/

/** 1B9C, Group Result Reg., Debug */
#define VADC_G5_RESD7 ((*(volatile Ifx_VADC_RESD*)0xF0021B9Cu)) /* lint --e(923)*/

/** 1BA0, Group Result Reg., Debug */
#define VADC_G5_RESD8 ((*(volatile Ifx_VADC_RESD*)0xF0021BA0u)) /* lint --e(923)*/

/** 1BA4, Group Result Reg., Debug */
#define VADC_G5_RESD9 ((*(volatile Ifx_VADC_RESD*)0xF0021BA4u)) /* lint --e(923)*/

/** 19B0, Result Event Node Pointer Register 0, Group */
#define VADC_G5_REVNP0 ((*(volatile Ifx_VADC_G_REVNP0*)0xF00219B0u)) /* lint --e(923)*/

/** 19B4, Result Event Node Pointer Register 1, Group */
#define VADC_G5_REVNP1 ((*(volatile Ifx_VADC_G_REVNP1*)0xF00219B4u)) /* lint --e(923)*/

/** 1998, Source Event Flag Clear Register, Group */
#define VADC_G5_SEFCLR ((*(volatile Ifx_VADC_G_SEFCLR*)0xF0021998u)) /* lint --e(923)*/

/** 1988, Source Event Flag Register, Group */
#define VADC_G5_SEFLAG ((*(volatile Ifx_VADC_G_SEFLAG*)0xF0021988u)) /* lint --e(923)*/

/** 19C0, Source Event Node Pointer Register, Group */
#define VADC_G5_SEVNP ((*(volatile Ifx_VADC_G_SEVNP*)0xF00219C0u)) /* lint --e(923)*/

/** 19C8, Service Request Software Activation Trigger, Group */
#define VADC_G5_SRACT ((*(volatile Ifx_VADC_G_SRACT*)0xF00219C8u)) /* lint --e(923)*/

/** 18C0, Synchronization Control Register, Group */
#define VADC_G5_SYNCTR ((*(volatile Ifx_VADC_G_SYNCTR*)0xF00218C0u)) /* lint --e(923)*/

/** 19F8, Valid Flag Register, Group */
#define VADC_G5_VFR ((*(volatile Ifx_VADC_G_VFR*)0xF00219F8u)) /* lint --e(923)*/

/** 1CB0, Alias Register, Group */
#define VADC_G6_ALIAS ((*(volatile Ifx_VADC_G_ALIAS*)0xF0021CB0u)) /* lint --e(923)*/

/** 1C80, Arbitration Configuration Register, Group */
#define VADC_G6_ARBCFG ((*(volatile Ifx_VADC_G_ARBCFG*)0xF0021C80u)) /* lint --e(923)*/

/** 1C84, Arbitration Priority Register, Group */
#define VADC_G6_ARBPR ((*(volatile Ifx_VADC_G_ARBPR*)0xF0021C84u)) /* lint --e(923)*/

/** 1D20, Autoscan Source Control Register, Group */
#define VADC_G6_ASCTRL ((*(volatile Ifx_VADC_G_ASCTRL*)0xF0021D20u)) /* lint --e(923)*/

/** 1D24, Autoscan Source Mode Register, Group */
#define VADC_G6_ASMR ((*(volatile Ifx_VADC_G_ASMR*)0xF0021D24u)) /* lint --e(923)*/

/** 1D2C, Autoscan Source Pending Register, Group */
#define VADC_G6_ASPND ((*(volatile Ifx_VADC_G_ASPND*)0xF0021D2Cu)) /* lint --e(923)*/

/** 1D28, Autoscan Source Channel Select Register, Group */
#define VADC_G6_ASSEL ((*(volatile Ifx_VADC_G_ASSEL*)0xF0021D28u)) /* lint --e(923)*/

/** 1CC8, Boundary Flag Register, Group */
#define VADC_G6_BFL ((*(volatile Ifx_VADC_G_BFL*)0xF0021CC8u)) /* lint --e(923)*/

/** 1CB8, Boundary Select Register, Group */
#define VADC_G6_BOUND ((*(volatile Ifx_VADC_G_BOUND*)0xF0021CB8u)) /* lint --e(923)*/

/** 1D90, Channel Event Flag Clear Register, Group */
#define VADC_G6_CEFCLR ((*(volatile Ifx_VADC_G_CEFCLR*)0xF0021D90u)) /* lint --e(923)*/

/** 1D80, Channel Event Flag Register, Group */
#define VADC_G6_CEFLAG ((*(volatile Ifx_VADC_G_CEFLAG*)0xF0021D80u)) /* lint --e(923)*/

/** 1DA0, Channel Event Node Pointer Register 0, Group */
#define VADC_G6_CEVNP0 ((*(volatile Ifx_VADC_G_CEVNP0*)0xF0021DA0u)) /* lint --e(923)*/

/** 1C88, Channel Assignment Register, Group */
#define VADC_G6_CHASS ((*(volatile Ifx_VADC_G_CHASS*)0xF0021C88u)) /* lint --e(923)*/

/** 1E00, Group, Channel Control Register */
#define VADC_G6_CHCTR0 ((*(volatile Ifx_VADC_CHCTR*)0xF0021E00u)) /* lint --e(923)*/

/** 1E04, Group, Channel Control Register */
#define VADC_G6_CHCTR1 ((*(volatile Ifx_VADC_CHCTR*)0xF0021E04u)) /* lint --e(923)*/

/** 1E08, Group, Channel Control Register */
#define VADC_G6_CHCTR2 ((*(volatile Ifx_VADC_CHCTR*)0xF0021E08u)) /* lint --e(923)*/

/** 1E0C, Group, Channel Control Register */
#define VADC_G6_CHCTR3 ((*(volatile Ifx_VADC_CHCTR*)0xF0021E0Cu)) /* lint --e(923)*/

/** 1E10, Group, Channel Control Register */
#define VADC_G6_CHCTR4 ((*(volatile Ifx_VADC_CHCTR*)0xF0021E10u)) /* lint --e(923)*/

/** 1E14, Group, Channel Control Register */
#define VADC_G6_CHCTR5 ((*(volatile Ifx_VADC_CHCTR*)0xF0021E14u)) /* lint --e(923)*/

/** 1E18, Group, Channel Control Register */
#define VADC_G6_CHCTR6 ((*(volatile Ifx_VADC_CHCTR*)0xF0021E18u)) /* lint --e(923)*/

/** 1E1C, Group, Channel Control Register */
#define VADC_G6_CHCTR7 ((*(volatile Ifx_VADC_CHCTR*)0xF0021E1Cu)) /* lint --e(923)*/

/** 1DF0, External Multiplexer Control Register, Group x */
#define VADC_G6_EMUXCTR ((*(volatile Ifx_VADC_G_EMUXCTR*)0xF0021DF0u)) /* lint --e(923)*/

/** 1CA0, Input Class Register */
#define VADC_G6_ICLASS0 ((*(volatile Ifx_VADC_ICLASS*)0xF0021CA0u)) /* lint --e(923)*/

/** 1CA4, Input Class Register */
#define VADC_G6_ICLASS1 ((*(volatile Ifx_VADC_ICLASS*)0xF0021CA4u)) /* lint --e(923)*/

/** 1D0C, Queue 0 Register 0, Group */
#define VADC_G6_Q0R0 ((*(volatile Ifx_VADC_G_Q0R0*)0xF0021D0Cu)) /* lint --e(923)*/

/** 1D00, Queue 0 Source Control Register, Group */
#define VADC_G6_QCTRL0 ((*(volatile Ifx_VADC_G_QCTRL0*)0xF0021D00u)) /* lint --e(923)*/

/** 1D10, Queue 0 Input Register, Group */
#define VADC_G6_QINR0 ((*(volatile Ifx_VADC_G_QINR0*)0xF0021D10u)) /* lint --e(923)*/

/** 1D04, Queue 0 Mode Register, Group */
#define VADC_G6_QMR0 ((*(volatile Ifx_VADC_G_QMR0*)0xF0021D04u)) /* lint --e(923)*/

/** 1D08, Queue 0 Status Register, Group */
#define VADC_G6_QSR0 ((*(volatile Ifx_VADC_G_QSR0*)0xF0021D08u)) /* lint --e(923)*/

/** 1E80, Group Result Control Register */
#define VADC_G6_RCR0 ((*(volatile Ifx_VADC_RCR*)0xF0021E80u)) /* lint --e(923)*/

/** 1E84, Group Result Control Register */
#define VADC_G6_RCR1 ((*(volatile Ifx_VADC_RCR*)0xF0021E84u)) /* lint --e(923)*/

/** 1EA8, Group Result Control Register */
#define VADC_G6_RCR10 ((*(volatile Ifx_VADC_RCR*)0xF0021EA8u)) /* lint --e(923)*/

/** 1EAC, Group Result Control Register */
#define VADC_G6_RCR11 ((*(volatile Ifx_VADC_RCR*)0xF0021EACu)) /* lint --e(923)*/

/** 1EB0, Group Result Control Register */
#define VADC_G6_RCR12 ((*(volatile Ifx_VADC_RCR*)0xF0021EB0u)) /* lint --e(923)*/

/** 1EB4, Group Result Control Register */
#define VADC_G6_RCR13 ((*(volatile Ifx_VADC_RCR*)0xF0021EB4u)) /* lint --e(923)*/

/** 1EB8, Group Result Control Register */
#define VADC_G6_RCR14 ((*(volatile Ifx_VADC_RCR*)0xF0021EB8u)) /* lint --e(923)*/

/** 1EBC, Group Result Control Register */
#define VADC_G6_RCR15 ((*(volatile Ifx_VADC_RCR*)0xF0021EBCu)) /* lint --e(923)*/

/** 1E88, Group Result Control Register */
#define VADC_G6_RCR2 ((*(volatile Ifx_VADC_RCR*)0xF0021E88u)) /* lint --e(923)*/

/** 1E8C, Group Result Control Register */
#define VADC_G6_RCR3 ((*(volatile Ifx_VADC_RCR*)0xF0021E8Cu)) /* lint --e(923)*/

/** 1E90, Group Result Control Register */
#define VADC_G6_RCR4 ((*(volatile Ifx_VADC_RCR*)0xF0021E90u)) /* lint --e(923)*/

/** 1E94, Group Result Control Register */
#define VADC_G6_RCR5 ((*(volatile Ifx_VADC_RCR*)0xF0021E94u)) /* lint --e(923)*/

/** 1E98, Group Result Control Register */
#define VADC_G6_RCR6 ((*(volatile Ifx_VADC_RCR*)0xF0021E98u)) /* lint --e(923)*/

/** 1E9C, Group Result Control Register */
#define VADC_G6_RCR7 ((*(volatile Ifx_VADC_RCR*)0xF0021E9Cu)) /* lint --e(923)*/

/** 1EA0, Group Result Control Register */
#define VADC_G6_RCR8 ((*(volatile Ifx_VADC_RCR*)0xF0021EA0u)) /* lint --e(923)*/

/** 1EA4, Group Result Control Register */
#define VADC_G6_RCR9 ((*(volatile Ifx_VADC_RCR*)0xF0021EA4u)) /* lint --e(923)*/

/** 1D94, Result Event Flag Clear Register, Group */
#define VADC_G6_REFCLR ((*(volatile Ifx_VADC_G_REFCLR*)0xF0021D94u)) /* lint --e(923)*/

/** 1D84, Result Event Flag Register, Group */
#define VADC_G6_REFLAG ((*(volatile Ifx_VADC_G_REFLAG*)0xF0021D84u)) /* lint --e(923)*/

/** 1F00, Group Result Register */
#define VADC_G6_RES0 ((*(volatile Ifx_VADC_RES*)0xF0021F00u)) /* lint --e(923)*/

/** 1F04, Group Result Register */
#define VADC_G6_RES1 ((*(volatile Ifx_VADC_RES*)0xF0021F04u)) /* lint --e(923)*/

/** 1F28, Group Result Register */
#define VADC_G6_RES10 ((*(volatile Ifx_VADC_RES*)0xF0021F28u)) /* lint --e(923)*/

/** 1F2C, Group Result Register */
#define VADC_G6_RES11 ((*(volatile Ifx_VADC_RES*)0xF0021F2Cu)) /* lint --e(923)*/

/** 1F30, Group Result Register */
#define VADC_G6_RES12 ((*(volatile Ifx_VADC_RES*)0xF0021F30u)) /* lint --e(923)*/

/** 1F34, Group Result Register */
#define VADC_G6_RES13 ((*(volatile Ifx_VADC_RES*)0xF0021F34u)) /* lint --e(923)*/

/** 1F38, Group Result Register */
#define VADC_G6_RES14 ((*(volatile Ifx_VADC_RES*)0xF0021F38u)) /* lint --e(923)*/

/** 1F3C, Group Result Register */
#define VADC_G6_RES15 ((*(volatile Ifx_VADC_RES*)0xF0021F3Cu)) /* lint --e(923)*/

/** 1F08, Group Result Register */
#define VADC_G6_RES2 ((*(volatile Ifx_VADC_RES*)0xF0021F08u)) /* lint --e(923)*/

/** 1F0C, Group Result Register */
#define VADC_G6_RES3 ((*(volatile Ifx_VADC_RES*)0xF0021F0Cu)) /* lint --e(923)*/

/** 1F10, Group Result Register */
#define VADC_G6_RES4 ((*(volatile Ifx_VADC_RES*)0xF0021F10u)) /* lint --e(923)*/

/** 1F14, Group Result Register */
#define VADC_G6_RES5 ((*(volatile Ifx_VADC_RES*)0xF0021F14u)) /* lint --e(923)*/

/** 1F18, Group Result Register */
#define VADC_G6_RES6 ((*(volatile Ifx_VADC_RES*)0xF0021F18u)) /* lint --e(923)*/

/** 1F1C, Group Result Register */
#define VADC_G6_RES7 ((*(volatile Ifx_VADC_RES*)0xF0021F1Cu)) /* lint --e(923)*/

/** 1F20, Group Result Register */
#define VADC_G6_RES8 ((*(volatile Ifx_VADC_RES*)0xF0021F20u)) /* lint --e(923)*/

/** 1F24, Group Result Register */
#define VADC_G6_RES9 ((*(volatile Ifx_VADC_RES*)0xF0021F24u)) /* lint --e(923)*/

/** 1F80, Group Result Reg., Debug */
#define VADC_G6_RESD0 ((*(volatile Ifx_VADC_RESD*)0xF0021F80u)) /* lint --e(923)*/

/** 1F84, Group Result Reg., Debug */
#define VADC_G6_RESD1 ((*(volatile Ifx_VADC_RESD*)0xF0021F84u)) /* lint --e(923)*/

/** 1FA8, Group Result Reg., Debug */
#define VADC_G6_RESD10 ((*(volatile Ifx_VADC_RESD*)0xF0021FA8u)) /* lint --e(923)*/

/** 1FAC, Group Result Reg., Debug */
#define VADC_G6_RESD11 ((*(volatile Ifx_VADC_RESD*)0xF0021FACu)) /* lint --e(923)*/

/** 1FB0, Group Result Reg., Debug */
#define VADC_G6_RESD12 ((*(volatile Ifx_VADC_RESD*)0xF0021FB0u)) /* lint --e(923)*/

/** 1FB4, Group Result Reg., Debug */
#define VADC_G6_RESD13 ((*(volatile Ifx_VADC_RESD*)0xF0021FB4u)) /* lint --e(923)*/

/** 1FB8, Group Result Reg., Debug */
#define VADC_G6_RESD14 ((*(volatile Ifx_VADC_RESD*)0xF0021FB8u)) /* lint --e(923)*/

/** 1FBC, Group Result Reg., Debug */
#define VADC_G6_RESD15 ((*(volatile Ifx_VADC_RESD*)0xF0021FBCu)) /* lint --e(923)*/

/** 1F88, Group Result Reg., Debug */
#define VADC_G6_RESD2 ((*(volatile Ifx_VADC_RESD*)0xF0021F88u)) /* lint --e(923)*/

/** 1F8C, Group Result Reg., Debug */
#define VADC_G6_RESD3 ((*(volatile Ifx_VADC_RESD*)0xF0021F8Cu)) /* lint --e(923)*/

/** 1F90, Group Result Reg., Debug */
#define VADC_G6_RESD4 ((*(volatile Ifx_VADC_RESD*)0xF0021F90u)) /* lint --e(923)*/

/** 1F94, Group Result Reg., Debug */
#define VADC_G6_RESD5 ((*(volatile Ifx_VADC_RESD*)0xF0021F94u)) /* lint --e(923)*/

/** 1F98, Group Result Reg., Debug */
#define VADC_G6_RESD6 ((*(volatile Ifx_VADC_RESD*)0xF0021F98u)) /* lint --e(923)*/

/** 1F9C, Group Result Reg., Debug */
#define VADC_G6_RESD7 ((*(volatile Ifx_VADC_RESD*)0xF0021F9Cu)) /* lint --e(923)*/

/** 1FA0, Group Result Reg., Debug */
#define VADC_G6_RESD8 ((*(volatile Ifx_VADC_RESD*)0xF0021FA0u)) /* lint --e(923)*/

/** 1FA4, Group Result Reg., Debug */
#define VADC_G6_RESD9 ((*(volatile Ifx_VADC_RESD*)0xF0021FA4u)) /* lint --e(923)*/

/** 1DB0, Result Event Node Pointer Register 0, Group */
#define VADC_G6_REVNP0 ((*(volatile Ifx_VADC_G_REVNP0*)0xF0021DB0u)) /* lint --e(923)*/

/** 1DB4, Result Event Node Pointer Register 1, Group */
#define VADC_G6_REVNP1 ((*(volatile Ifx_VADC_G_REVNP1*)0xF0021DB4u)) /* lint --e(923)*/

/** 1D98, Source Event Flag Clear Register, Group */
#define VADC_G6_SEFCLR ((*(volatile Ifx_VADC_G_SEFCLR*)0xF0021D98u)) /* lint --e(923)*/

/** 1D88, Source Event Flag Register, Group */
#define VADC_G6_SEFLAG ((*(volatile Ifx_VADC_G_SEFLAG*)0xF0021D88u)) /* lint --e(923)*/

/** 1DC0, Source Event Node Pointer Register, Group */
#define VADC_G6_SEVNP ((*(volatile Ifx_VADC_G_SEVNP*)0xF0021DC0u)) /* lint --e(923)*/

/** 1DC8, Service Request Software Activation Trigger, Group */
#define VADC_G6_SRACT ((*(volatile Ifx_VADC_G_SRACT*)0xF0021DC8u)) /* lint --e(923)*/

/** 1CC0, Synchronization Control Register, Group */
#define VADC_G6_SYNCTR ((*(volatile Ifx_VADC_G_SYNCTR*)0xF0021CC0u)) /* lint --e(923)*/

/** 1DF8, Valid Flag Register, Group */
#define VADC_G6_VFR ((*(volatile Ifx_VADC_G_VFR*)0xF0021DF8u)) /* lint --e(923)*/

/** 20B0, Alias Register, Group */
#define VADC_G7_ALIAS ((*(volatile Ifx_VADC_G_ALIAS*)0xF00220B0u)) /* lint --e(923)*/

/** 2080, Arbitration Configuration Register, Group */
#define VADC_G7_ARBCFG ((*(volatile Ifx_VADC_G_ARBCFG*)0xF0022080u)) /* lint --e(923)*/

/** 2084, Arbitration Priority Register, Group */
#define VADC_G7_ARBPR ((*(volatile Ifx_VADC_G_ARBPR*)0xF0022084u)) /* lint --e(923)*/

/** 2120, Autoscan Source Control Register, Group */
#define VADC_G7_ASCTRL ((*(volatile Ifx_VADC_G_ASCTRL*)0xF0022120u)) /* lint --e(923)*/

/** 2124, Autoscan Source Mode Register, Group */
#define VADC_G7_ASMR ((*(volatile Ifx_VADC_G_ASMR*)0xF0022124u)) /* lint --e(923)*/

/** 212C, Autoscan Source Pending Register, Group */
#define VADC_G7_ASPND ((*(volatile Ifx_VADC_G_ASPND*)0xF002212Cu)) /* lint --e(923)*/

/** 2128, Autoscan Source Channel Select Register, Group */
#define VADC_G7_ASSEL ((*(volatile Ifx_VADC_G_ASSEL*)0xF0022128u)) /* lint --e(923)*/

/** 20C8, Boundary Flag Register, Group */
#define VADC_G7_BFL ((*(volatile Ifx_VADC_G_BFL*)0xF00220C8u)) /* lint --e(923)*/

/** 20B8, Boundary Select Register, Group */
#define VADC_G7_BOUND ((*(volatile Ifx_VADC_G_BOUND*)0xF00220B8u)) /* lint --e(923)*/

/** 2190, Channel Event Flag Clear Register, Group */
#define VADC_G7_CEFCLR ((*(volatile Ifx_VADC_G_CEFCLR*)0xF0022190u)) /* lint --e(923)*/

/** 2180, Channel Event Flag Register, Group */
#define VADC_G7_CEFLAG ((*(volatile Ifx_VADC_G_CEFLAG*)0xF0022180u)) /* lint --e(923)*/

/** 21A0, Channel Event Node Pointer Register 0, Group */
#define VADC_G7_CEVNP0 ((*(volatile Ifx_VADC_G_CEVNP0*)0xF00221A0u)) /* lint --e(923)*/

/** 2088, Channel Assignment Register, Group */
#define VADC_G7_CHASS ((*(volatile Ifx_VADC_G_CHASS*)0xF0022088u)) /* lint --e(923)*/

/** 2200, Group, Channel Control Register */
#define VADC_G7_CHCTR0 ((*(volatile Ifx_VADC_CHCTR*)0xF0022200u)) /* lint --e(923)*/

/** 2204, Group, Channel Control Register */
#define VADC_G7_CHCTR1 ((*(volatile Ifx_VADC_CHCTR*)0xF0022204u)) /* lint --e(923)*/

/** 2208, Group, Channel Control Register */
#define VADC_G7_CHCTR2 ((*(volatile Ifx_VADC_CHCTR*)0xF0022208u)) /* lint --e(923)*/

/** 220C, Group, Channel Control Register */
#define VADC_G7_CHCTR3 ((*(volatile Ifx_VADC_CHCTR*)0xF002220Cu)) /* lint --e(923)*/

/** 2210, Group, Channel Control Register */
#define VADC_G7_CHCTR4 ((*(volatile Ifx_VADC_CHCTR*)0xF0022210u)) /* lint --e(923)*/

/** 2214, Group, Channel Control Register */
#define VADC_G7_CHCTR5 ((*(volatile Ifx_VADC_CHCTR*)0xF0022214u)) /* lint --e(923)*/

/** 2218, Group, Channel Control Register */
#define VADC_G7_CHCTR6 ((*(volatile Ifx_VADC_CHCTR*)0xF0022218u)) /* lint --e(923)*/

/** 221C, Group, Channel Control Register */
#define VADC_G7_CHCTR7 ((*(volatile Ifx_VADC_CHCTR*)0xF002221Cu)) /* lint --e(923)*/

/** 21F0, External Multiplexer Control Register, Group x */
#define VADC_G7_EMUXCTR ((*(volatile Ifx_VADC_G_EMUXCTR*)0xF00221F0u)) /* lint --e(923)*/

/** 20A0, Input Class Register */
#define VADC_G7_ICLASS0 ((*(volatile Ifx_VADC_ICLASS*)0xF00220A0u)) /* lint --e(923)*/

/** 20A4, Input Class Register */
#define VADC_G7_ICLASS1 ((*(volatile Ifx_VADC_ICLASS*)0xF00220A4u)) /* lint --e(923)*/

/** 210C, Queue 0 Register 0, Group */
#define VADC_G7_Q0R0 ((*(volatile Ifx_VADC_G_Q0R0*)0xF002210Cu)) /* lint --e(923)*/

/** 2100, Queue 0 Source Control Register, Group */
#define VADC_G7_QCTRL0 ((*(volatile Ifx_VADC_G_QCTRL0*)0xF0022100u)) /* lint --e(923)*/

/** 2110, Queue 0 Input Register, Group */
#define VADC_G7_QINR0 ((*(volatile Ifx_VADC_G_QINR0*)0xF0022110u)) /* lint --e(923)*/

/** 2104, Queue 0 Mode Register, Group */
#define VADC_G7_QMR0 ((*(volatile Ifx_VADC_G_QMR0*)0xF0022104u)) /* lint --e(923)*/

/** 2108, Queue 0 Status Register, Group */
#define VADC_G7_QSR0 ((*(volatile Ifx_VADC_G_QSR0*)0xF0022108u)) /* lint --e(923)*/

/** 2280, Group Result Control Register */
#define VADC_G7_RCR0 ((*(volatile Ifx_VADC_RCR*)0xF0022280u)) /* lint --e(923)*/

/** 2284, Group Result Control Register */
#define VADC_G7_RCR1 ((*(volatile Ifx_VADC_RCR*)0xF0022284u)) /* lint --e(923)*/

/** 22A8, Group Result Control Register */
#define VADC_G7_RCR10 ((*(volatile Ifx_VADC_RCR*)0xF00222A8u)) /* lint --e(923)*/

/** 22AC, Group Result Control Register */
#define VADC_G7_RCR11 ((*(volatile Ifx_VADC_RCR*)0xF00222ACu)) /* lint --e(923)*/

/** 22B0, Group Result Control Register */
#define VADC_G7_RCR12 ((*(volatile Ifx_VADC_RCR*)0xF00222B0u)) /* lint --e(923)*/

/** 22B4, Group Result Control Register */
#define VADC_G7_RCR13 ((*(volatile Ifx_VADC_RCR*)0xF00222B4u)) /* lint --e(923)*/

/** 22B8, Group Result Control Register */
#define VADC_G7_RCR14 ((*(volatile Ifx_VADC_RCR*)0xF00222B8u)) /* lint --e(923)*/

/** 22BC, Group Result Control Register */
#define VADC_G7_RCR15 ((*(volatile Ifx_VADC_RCR*)0xF00222BCu)) /* lint --e(923)*/

/** 2288, Group Result Control Register */
#define VADC_G7_RCR2 ((*(volatile Ifx_VADC_RCR*)0xF0022288u)) /* lint --e(923)*/

/** 228C, Group Result Control Register */
#define VADC_G7_RCR3 ((*(volatile Ifx_VADC_RCR*)0xF002228Cu)) /* lint --e(923)*/

/** 2290, Group Result Control Register */
#define VADC_G7_RCR4 ((*(volatile Ifx_VADC_RCR*)0xF0022290u)) /* lint --e(923)*/

/** 2294, Group Result Control Register */
#define VADC_G7_RCR5 ((*(volatile Ifx_VADC_RCR*)0xF0022294u)) /* lint --e(923)*/

/** 2298, Group Result Control Register */
#define VADC_G7_RCR6 ((*(volatile Ifx_VADC_RCR*)0xF0022298u)) /* lint --e(923)*/

/** 229C, Group Result Control Register */
#define VADC_G7_RCR7 ((*(volatile Ifx_VADC_RCR*)0xF002229Cu)) /* lint --e(923)*/

/** 22A0, Group Result Control Register */
#define VADC_G7_RCR8 ((*(volatile Ifx_VADC_RCR*)0xF00222A0u)) /* lint --e(923)*/

/** 22A4, Group Result Control Register */
#define VADC_G7_RCR9 ((*(volatile Ifx_VADC_RCR*)0xF00222A4u)) /* lint --e(923)*/

/** 2194, Result Event Flag Clear Register, Group */
#define VADC_G7_REFCLR ((*(volatile Ifx_VADC_G_REFCLR*)0xF0022194u)) /* lint --e(923)*/

/** 2184, Result Event Flag Register, Group */
#define VADC_G7_REFLAG ((*(volatile Ifx_VADC_G_REFLAG*)0xF0022184u)) /* lint --e(923)*/

/** 2300, Group Result Register */
#define VADC_G7_RES0 ((*(volatile Ifx_VADC_RES*)0xF0022300u)) /* lint --e(923)*/

/** 2304, Group Result Register */
#define VADC_G7_RES1 ((*(volatile Ifx_VADC_RES*)0xF0022304u)) /* lint --e(923)*/

/** 2328, Group Result Register */
#define VADC_G7_RES10 ((*(volatile Ifx_VADC_RES*)0xF0022328u)) /* lint --e(923)*/

/** 232C, Group Result Register */
#define VADC_G7_RES11 ((*(volatile Ifx_VADC_RES*)0xF002232Cu)) /* lint --e(923)*/

/** 2330, Group Result Register */
#define VADC_G7_RES12 ((*(volatile Ifx_VADC_RES*)0xF0022330u)) /* lint --e(923)*/

/** 2334, Group Result Register */
#define VADC_G7_RES13 ((*(volatile Ifx_VADC_RES*)0xF0022334u)) /* lint --e(923)*/

/** 2338, Group Result Register */
#define VADC_G7_RES14 ((*(volatile Ifx_VADC_RES*)0xF0022338u)) /* lint --e(923)*/

/** 233C, Group Result Register */
#define VADC_G7_RES15 ((*(volatile Ifx_VADC_RES*)0xF002233Cu)) /* lint --e(923)*/

/** 2308, Group Result Register */
#define VADC_G7_RES2 ((*(volatile Ifx_VADC_RES*)0xF0022308u)) /* lint --e(923)*/

/** 230C, Group Result Register */
#define VADC_G7_RES3 ((*(volatile Ifx_VADC_RES*)0xF002230Cu)) /* lint --e(923)*/

/** 2310, Group Result Register */
#define VADC_G7_RES4 ((*(volatile Ifx_VADC_RES*)0xF0022310u)) /* lint --e(923)*/

/** 2314, Group Result Register */
#define VADC_G7_RES5 ((*(volatile Ifx_VADC_RES*)0xF0022314u)) /* lint --e(923)*/

/** 2318, Group Result Register */
#define VADC_G7_RES6 ((*(volatile Ifx_VADC_RES*)0xF0022318u)) /* lint --e(923)*/

/** 231C, Group Result Register */
#define VADC_G7_RES7 ((*(volatile Ifx_VADC_RES*)0xF002231Cu)) /* lint --e(923)*/

/** 2320, Group Result Register */
#define VADC_G7_RES8 ((*(volatile Ifx_VADC_RES*)0xF0022320u)) /* lint --e(923)*/

/** 2324, Group Result Register */
#define VADC_G7_RES9 ((*(volatile Ifx_VADC_RES*)0xF0022324u)) /* lint --e(923)*/

/** 2380, Group Result Reg., Debug */
#define VADC_G7_RESD0 ((*(volatile Ifx_VADC_RESD*)0xF0022380u)) /* lint --e(923)*/

/** 2384, Group Result Reg., Debug */
#define VADC_G7_RESD1 ((*(volatile Ifx_VADC_RESD*)0xF0022384u)) /* lint --e(923)*/

/** 23A8, Group Result Reg., Debug */
#define VADC_G7_RESD10 ((*(volatile Ifx_VADC_RESD*)0xF00223A8u)) /* lint --e(923)*/

/** 23AC, Group Result Reg., Debug */
#define VADC_G7_RESD11 ((*(volatile Ifx_VADC_RESD*)0xF00223ACu)) /* lint --e(923)*/

/** 23B0, Group Result Reg., Debug */
#define VADC_G7_RESD12 ((*(volatile Ifx_VADC_RESD*)0xF00223B0u)) /* lint --e(923)*/

/** 23B4, Group Result Reg., Debug */
#define VADC_G7_RESD13 ((*(volatile Ifx_VADC_RESD*)0xF00223B4u)) /* lint --e(923)*/

/** 23B8, Group Result Reg., Debug */
#define VADC_G7_RESD14 ((*(volatile Ifx_VADC_RESD*)0xF00223B8u)) /* lint --e(923)*/

/** 23BC, Group Result Reg., Debug */
#define VADC_G7_RESD15 ((*(volatile Ifx_VADC_RESD*)0xF00223BCu)) /* lint --e(923)*/

/** 2388, Group Result Reg., Debug */
#define VADC_G7_RESD2 ((*(volatile Ifx_VADC_RESD*)0xF0022388u)) /* lint --e(923)*/

/** 238C, Group Result Reg., Debug */
#define VADC_G7_RESD3 ((*(volatile Ifx_VADC_RESD*)0xF002238Cu)) /* lint --e(923)*/

/** 2390, Group Result Reg., Debug */
#define VADC_G7_RESD4 ((*(volatile Ifx_VADC_RESD*)0xF0022390u)) /* lint --e(923)*/

/** 2394, Group Result Reg., Debug */
#define VADC_G7_RESD5 ((*(volatile Ifx_VADC_RESD*)0xF0022394u)) /* lint --e(923)*/

/** 2398, Group Result Reg., Debug */
#define VADC_G7_RESD6 ((*(volatile Ifx_VADC_RESD*)0xF0022398u)) /* lint --e(923)*/

/** 239C, Group Result Reg., Debug */
#define VADC_G7_RESD7 ((*(volatile Ifx_VADC_RESD*)0xF002239Cu)) /* lint --e(923)*/

/** 23A0, Group Result Reg., Debug */
#define VADC_G7_RESD8 ((*(volatile Ifx_VADC_RESD*)0xF00223A0u)) /* lint --e(923)*/

/** 23A4, Group Result Reg., Debug */
#define VADC_G7_RESD9 ((*(volatile Ifx_VADC_RESD*)0xF00223A4u)) /* lint --e(923)*/

/** 21B0, Result Event Node Pointer Register 0, Group */
#define VADC_G7_REVNP0 ((*(volatile Ifx_VADC_G_REVNP0*)0xF00221B0u)) /* lint --e(923)*/

/** 21B4, Result Event Node Pointer Register 1, Group */
#define VADC_G7_REVNP1 ((*(volatile Ifx_VADC_G_REVNP1*)0xF00221B4u)) /* lint --e(923)*/

/** 2198, Source Event Flag Clear Register, Group */
#define VADC_G7_SEFCLR ((*(volatile Ifx_VADC_G_SEFCLR*)0xF0022198u)) /* lint --e(923)*/

/** 2188, Source Event Flag Register, Group */
#define VADC_G7_SEFLAG ((*(volatile Ifx_VADC_G_SEFLAG*)0xF0022188u)) /* lint --e(923)*/

/** 21C0, Source Event Node Pointer Register, Group */
#define VADC_G7_SEVNP ((*(volatile Ifx_VADC_G_SEVNP*)0xF00221C0u)) /* lint --e(923)*/

/** 21C8, Service Request Software Activation Trigger, Group */
#define VADC_G7_SRACT ((*(volatile Ifx_VADC_G_SRACT*)0xF00221C8u)) /* lint --e(923)*/

/** 20C0, Synchronization Control Register, Group */
#define VADC_G7_SYNCTR ((*(volatile Ifx_VADC_G_SYNCTR*)0xF00220C0u)) /* lint --e(923)*/

/** 21F8, Valid Flag Register, Group */
#define VADC_G7_VFR ((*(volatile Ifx_VADC_G_VFR*)0xF00221F8u)) /* lint --e(923)*/

/** B8, Global Boundary Select Register */
#define VADC_GLOBBOUND ((*(volatile Ifx_VADC_GLOBBOUND*)0xF00200B8u)) /* lint --e(923)*/

/** 80, Global Configuration Register */
#define VADC_GLOBCFG ((*(volatile Ifx_VADC_GLOBCFG*)0xF0020080u)) /* lint --e(923)*/

/** E0, Global Event Flag Register */
#define VADC_GLOBEFLAG ((*(volatile Ifx_VADC_GLOBEFLAG*)0xF00200E0u)) /* lint --e(923)*/

/** 140, Global Event Node Pointer Register */
#define VADC_GLOBEVNP ((*(volatile Ifx_VADC_GLOBEVNP*)0xF0020140u)) /* lint --e(923)*/

/** A0, Input Class Register */
#define VADC_GLOBICLASS0 ((*(volatile Ifx_VADC_ICLASS*)0xF00200A0u)) /* lint --e(923)*/

/** A4, Input Class Register */
#define VADC_GLOBICLASS1 ((*(volatile Ifx_VADC_ICLASS*)0xF00200A4u)) /* lint --e(923)*/

/** 280, Global Result Control Register */
#define VADC_GLOBRCR ((*(volatile Ifx_VADC_GLOBRCR*)0xF0020280u)) /* lint --e(923)*/

/** 300, Global Result Register */
#define VADC_GLOBRES ((*(volatile Ifx_VADC_GLOBRES*)0xF0020300u)) /* lint --e(923)*/

/** 380, Global Result Register, Debug */
#define VADC_GLOBRESD ((*(volatile Ifx_VADC_GLOBRESD*)0xF0020380u)) /* lint --e(923)*/

/** 160, Global Test Functions Register */
#define VADC_GLOBTF ((*(volatile Ifx_VADC_GLOBTF*)0xF0020160u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define VADC_ID ((*(volatile Ifx_ID1*)0xF0020008u)) /* lint --e(923)*/

/** 34, Kernel Reset Register 0 */
#define VADC_KRST0 ((*(volatile Ifx_VADC_KRST0*)0xF0020034u)) /* lint --e(923)*/

/** 30, Kernel Reset Register 1 */
#define VADC_KRST1 ((*(volatile Ifx_VADC_KRST1*)0xF0020030u)) /* lint --e(923)*/

/** 2C, Kernel Reset Status Clear Register */
#define VADC_KRSTCLR ((*(volatile Ifx_VADC_KRSTCLR*)0xF002002Cu)) /* lint --e(923)*/

/** 28, OCDS Control and Status Register */
#define VADC_OCS ((*(volatile Ifx_VADC_OCS*)0xF0020028u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXVADC_REG_H */

