/**
 * \file IfxSrc_reg.h
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
#ifndef IFXSRC_REG_H
#define IFXSRC_REG_H
/******************************************************************************/
#include "Src/IfxSrc_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** SRC object */
#define MODULE_SRC ((*(Ifx_SRC*)0xF0038000u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-SRC)                               */
/******************************************************************************/

/** 24, AGBT Service Request */
#define SRC_AGBT ((*(volatile Ifx_SRC_SRCR*)0xF0038024u)) /* lint --e(923)*/

/** 88, ASCLIN Error Service Request */
#define SRC_ASCLIN0_ERR ((*(volatile Ifx_SRC_SRCR*)0xF0038088u)) /* lint --e(923)*/

/** 84, ASCLIN Receive Service Request */
#define SRC_ASCLIN0_RX ((*(volatile Ifx_SRC_SRCR*)0xF0038084u)) /* lint --e(923)*/

/** 80, ASCLIN Transmit Service Request */
#define SRC_ASCLIN0_TX ((*(volatile Ifx_SRC_SRCR*)0xF0038080u)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN0_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN0_ERR instead.
 * 88, ASCLIN Error Service Request
 */
#define SRC_ASCLIN0ERR (SRC_ASCLIN0_ERR)

/** Alias for SRC_ASCLIN0_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN0_RX instead.
 * 84, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN0RX (SRC_ASCLIN0_RX)

/** Alias for SRC_ASCLIN0_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN0_TX instead.
 * 80, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN0TX (SRC_ASCLIN0_TX)

/** 100, ASCLIN Error Service Request */
#define SRC_ASCLIN10_ERR ((*(volatile Ifx_SRC_SRCR*)0xF0038100u)) /* lint --e(923)*/

/** FC, ASCLIN Receive Service Request */
#define SRC_ASCLIN10_RX ((*(volatile Ifx_SRC_SRCR*)0xF00380FCu)) /* lint --e(923)*/

/** F8, ASCLIN Transmit Service Request */
#define SRC_ASCLIN10_TX ((*(volatile Ifx_SRC_SRCR*)0xF00380F8u)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN10_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN10_ERR instead.
 * 100, ASCLIN Error Service Request
 */
#define SRC_ASCLIN10ERR (SRC_ASCLIN10_ERR)

/** Alias for SRC_ASCLIN10_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN10_RX instead.
 * FC, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN10RX (SRC_ASCLIN10_RX)

/** Alias for SRC_ASCLIN10_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN10_TX instead.
 * F8, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN10TX (SRC_ASCLIN10_TX)

/** 10C, ASCLIN Error Service Request */
#define SRC_ASCLIN11_ERR ((*(volatile Ifx_SRC_SRCR*)0xF003810Cu)) /* lint --e(923)*/

/** 108, ASCLIN Receive Service Request */
#define SRC_ASCLIN11_RX ((*(volatile Ifx_SRC_SRCR*)0xF0038108u)) /* lint --e(923)*/

/** 104, ASCLIN Transmit Service Request */
#define SRC_ASCLIN11_TX ((*(volatile Ifx_SRC_SRCR*)0xF0038104u)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN11_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN11_ERR instead.
 * 10C, ASCLIN Error Service Request
 */
#define SRC_ASCLIN11ERR (SRC_ASCLIN11_ERR)

/** Alias for SRC_ASCLIN11_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN11_RX instead.
 * 108, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN11RX (SRC_ASCLIN11_RX)

/** Alias for SRC_ASCLIN11_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN11_TX instead.
 * 104, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN11TX (SRC_ASCLIN11_TX)

/** 118, ASCLIN Error Service Request */
#define SRC_ASCLIN12_ERR ((*(volatile Ifx_SRC_SRCR*)0xF0038118u)) /* lint --e(923)*/

/** 114, ASCLIN Receive Service Request */
#define SRC_ASCLIN12_RX ((*(volatile Ifx_SRC_SRCR*)0xF0038114u)) /* lint --e(923)*/

/** 110, ASCLIN Transmit Service Request */
#define SRC_ASCLIN12_TX ((*(volatile Ifx_SRC_SRCR*)0xF0038110u)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN12_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN12_ERR instead.
 * 118, ASCLIN Error Service Request
 */
#define SRC_ASCLIN12ERR (SRC_ASCLIN12_ERR)

/** Alias for SRC_ASCLIN12_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN12_RX instead.
 * 114, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN12RX (SRC_ASCLIN12_RX)

/** Alias for SRC_ASCLIN12_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN12_TX instead.
 * 110, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN12TX (SRC_ASCLIN12_TX)

/** 124, ASCLIN Error Service Request */
#define SRC_ASCLIN13_ERR ((*(volatile Ifx_SRC_SRCR*)0xF0038124u)) /* lint --e(923)*/

/** 120, ASCLIN Receive Service Request */
#define SRC_ASCLIN13_RX ((*(volatile Ifx_SRC_SRCR*)0xF0038120u)) /* lint --e(923)*/

/** 11C, ASCLIN Transmit Service Request */
#define SRC_ASCLIN13_TX ((*(volatile Ifx_SRC_SRCR*)0xF003811Cu)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN13_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN13_ERR instead.
 * 124, ASCLIN Error Service Request
 */
#define SRC_ASCLIN13ERR (SRC_ASCLIN13_ERR)

/** Alias for SRC_ASCLIN13_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN13_RX instead.
 * 120, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN13RX (SRC_ASCLIN13_RX)

/** Alias for SRC_ASCLIN13_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN13_TX instead.
 * 11C, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN13TX (SRC_ASCLIN13_TX)

/** 130, ASCLIN Error Service Request */
#define SRC_ASCLIN14_ERR ((*(volatile Ifx_SRC_SRCR*)0xF0038130u)) /* lint --e(923)*/

/** 12C, ASCLIN Receive Service Request */
#define SRC_ASCLIN14_RX ((*(volatile Ifx_SRC_SRCR*)0xF003812Cu)) /* lint --e(923)*/

/** 128, ASCLIN Transmit Service Request */
#define SRC_ASCLIN14_TX ((*(volatile Ifx_SRC_SRCR*)0xF0038128u)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN14_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN14_ERR instead.
 * 130, ASCLIN Error Service Request
 */
#define SRC_ASCLIN14ERR (SRC_ASCLIN14_ERR)

/** Alias for SRC_ASCLIN14_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN14_RX instead.
 * 12C, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN14RX (SRC_ASCLIN14_RX)

/** Alias for SRC_ASCLIN14_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN14_TX instead.
 * 128, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN14TX (SRC_ASCLIN14_TX)

/** 13C, ASCLIN Error Service Request */
#define SRC_ASCLIN15_ERR ((*(volatile Ifx_SRC_SRCR*)0xF003813Cu)) /* lint --e(923)*/

/** 138, ASCLIN Receive Service Request */
#define SRC_ASCLIN15_RX ((*(volatile Ifx_SRC_SRCR*)0xF0038138u)) /* lint --e(923)*/

/** 134, ASCLIN Transmit Service Request */
#define SRC_ASCLIN15_TX ((*(volatile Ifx_SRC_SRCR*)0xF0038134u)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN15_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN15_ERR instead.
 * 13C, ASCLIN Error Service Request
 */
#define SRC_ASCLIN15ERR (SRC_ASCLIN15_ERR)

/** Alias for SRC_ASCLIN15_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN15_RX instead.
 * 138, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN15RX (SRC_ASCLIN15_RX)

/** Alias for SRC_ASCLIN15_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN15_TX instead.
 * 134, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN15TX (SRC_ASCLIN15_TX)

/** 148, ASCLIN Error Service Request */
#define SRC_ASCLIN16_ERR ((*(volatile Ifx_SRC_SRCR*)0xF0038148u)) /* lint --e(923)*/

/** 144, ASCLIN Receive Service Request */
#define SRC_ASCLIN16_RX ((*(volatile Ifx_SRC_SRCR*)0xF0038144u)) /* lint --e(923)*/

/** 140, ASCLIN Transmit Service Request */
#define SRC_ASCLIN16_TX ((*(volatile Ifx_SRC_SRCR*)0xF0038140u)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN16_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN16_ERR instead.
 * 148, ASCLIN Error Service Request
 */
#define SRC_ASCLIN16ERR (SRC_ASCLIN16_ERR)

/** Alias for SRC_ASCLIN16_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN16_RX instead.
 * 144, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN16RX (SRC_ASCLIN16_RX)

/** Alias for SRC_ASCLIN16_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN16_TX instead.
 * 140, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN16TX (SRC_ASCLIN16_TX)

/** 154, ASCLIN Error Service Request */
#define SRC_ASCLIN17_ERR ((*(volatile Ifx_SRC_SRCR*)0xF0038154u)) /* lint --e(923)*/

/** 150, ASCLIN Receive Service Request */
#define SRC_ASCLIN17_RX ((*(volatile Ifx_SRC_SRCR*)0xF0038150u)) /* lint --e(923)*/

/** 14C, ASCLIN Transmit Service Request */
#define SRC_ASCLIN17_TX ((*(volatile Ifx_SRC_SRCR*)0xF003814Cu)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN17_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN17_ERR instead.
 * 154, ASCLIN Error Service Request
 */
#define SRC_ASCLIN17ERR (SRC_ASCLIN17_ERR)

/** Alias for SRC_ASCLIN17_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN17_RX instead.
 * 150, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN17RX (SRC_ASCLIN17_RX)

/** Alias for SRC_ASCLIN17_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN17_TX instead.
 * 14C, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN17TX (SRC_ASCLIN17_TX)

/** 94, ASCLIN Error Service Request */
#define SRC_ASCLIN1_ERR ((*(volatile Ifx_SRC_SRCR*)0xF0038094u)) /* lint --e(923)*/

/** 90, ASCLIN Receive Service Request */
#define SRC_ASCLIN1_RX ((*(volatile Ifx_SRC_SRCR*)0xF0038090u)) /* lint --e(923)*/

/** 8C, ASCLIN Transmit Service Request */
#define SRC_ASCLIN1_TX ((*(volatile Ifx_SRC_SRCR*)0xF003808Cu)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN1_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN1_ERR instead.
 * 94, ASCLIN Error Service Request
 */
#define SRC_ASCLIN1ERR (SRC_ASCLIN1_ERR)

/** Alias for SRC_ASCLIN1_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN1_RX instead.
 * 90, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN1RX (SRC_ASCLIN1_RX)

/** Alias for SRC_ASCLIN1_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN1_TX instead.
 * 8C, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN1TX (SRC_ASCLIN1_TX)

/** A0, ASCLIN Error Service Request */
#define SRC_ASCLIN2_ERR ((*(volatile Ifx_SRC_SRCR*)0xF00380A0u)) /* lint --e(923)*/

/** 9C, ASCLIN Receive Service Request */
#define SRC_ASCLIN2_RX ((*(volatile Ifx_SRC_SRCR*)0xF003809Cu)) /* lint --e(923)*/

/** 98, ASCLIN Transmit Service Request */
#define SRC_ASCLIN2_TX ((*(volatile Ifx_SRC_SRCR*)0xF0038098u)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN2_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN2_ERR instead.
 * A0, ASCLIN Error Service Request
 */
#define SRC_ASCLIN2ERR (SRC_ASCLIN2_ERR)

/** Alias for SRC_ASCLIN2_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN2_RX instead.
 * 9C, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN2RX (SRC_ASCLIN2_RX)

/** Alias for SRC_ASCLIN2_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN2_TX instead.
 * 98, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN2TX (SRC_ASCLIN2_TX)

/** AC, ASCLIN Error Service Request */
#define SRC_ASCLIN3_ERR ((*(volatile Ifx_SRC_SRCR*)0xF00380ACu)) /* lint --e(923)*/

/** A8, ASCLIN Receive Service Request */
#define SRC_ASCLIN3_RX ((*(volatile Ifx_SRC_SRCR*)0xF00380A8u)) /* lint --e(923)*/

/** A4, ASCLIN Transmit Service Request */
#define SRC_ASCLIN3_TX ((*(volatile Ifx_SRC_SRCR*)0xF00380A4u)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN3_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN3_ERR instead.
 * AC, ASCLIN Error Service Request
 */
#define SRC_ASCLIN3ERR (SRC_ASCLIN3_ERR)

/** Alias for SRC_ASCLIN3_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN3_RX instead.
 * A8, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN3RX (SRC_ASCLIN3_RX)

/** Alias for SRC_ASCLIN3_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN3_TX instead.
 * A4, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN3TX (SRC_ASCLIN3_TX)

/** B8, ASCLIN Error Service Request */
#define SRC_ASCLIN4_ERR ((*(volatile Ifx_SRC_SRCR*)0xF00380B8u)) /* lint --e(923)*/

/** B4, ASCLIN Receive Service Request */
#define SRC_ASCLIN4_RX ((*(volatile Ifx_SRC_SRCR*)0xF00380B4u)) /* lint --e(923)*/

/** B0, ASCLIN Transmit Service Request */
#define SRC_ASCLIN4_TX ((*(volatile Ifx_SRC_SRCR*)0xF00380B0u)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN4_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN4_ERR instead.
 * B8, ASCLIN Error Service Request
 */
#define SRC_ASCLIN4ERR (SRC_ASCLIN4_ERR)

/** Alias for SRC_ASCLIN4_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN4_RX instead.
 * B4, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN4RX (SRC_ASCLIN4_RX)

/** Alias for SRC_ASCLIN4_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN4_TX instead.
 * B0, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN4TX (SRC_ASCLIN4_TX)

/** C4, ASCLIN Error Service Request */
#define SRC_ASCLIN5_ERR ((*(volatile Ifx_SRC_SRCR*)0xF00380C4u)) /* lint --e(923)*/

/** C0, ASCLIN Receive Service Request */
#define SRC_ASCLIN5_RX ((*(volatile Ifx_SRC_SRCR*)0xF00380C0u)) /* lint --e(923)*/

/** BC, ASCLIN Transmit Service Request */
#define SRC_ASCLIN5_TX ((*(volatile Ifx_SRC_SRCR*)0xF00380BCu)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN5_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN5_ERR instead.
 * C4, ASCLIN Error Service Request
 */
#define SRC_ASCLIN5ERR (SRC_ASCLIN5_ERR)

/** Alias for SRC_ASCLIN5_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN5_RX instead.
 * C0, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN5RX (SRC_ASCLIN5_RX)

/** Alias for SRC_ASCLIN5_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN5_TX instead.
 * BC, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN5TX (SRC_ASCLIN5_TX)

/** D0, ASCLIN Error Service Request */
#define SRC_ASCLIN6_ERR ((*(volatile Ifx_SRC_SRCR*)0xF00380D0u)) /* lint --e(923)*/

/** CC, ASCLIN Receive Service Request */
#define SRC_ASCLIN6_RX ((*(volatile Ifx_SRC_SRCR*)0xF00380CCu)) /* lint --e(923)*/

/** C8, ASCLIN Transmit Service Request */
#define SRC_ASCLIN6_TX ((*(volatile Ifx_SRC_SRCR*)0xF00380C8u)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN6_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN6_ERR instead.
 * D0, ASCLIN Error Service Request
 */
#define SRC_ASCLIN6ERR (SRC_ASCLIN6_ERR)

/** Alias for SRC_ASCLIN6_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN6_RX instead.
 * CC, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN6RX (SRC_ASCLIN6_RX)

/** Alias for SRC_ASCLIN6_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN6_TX instead.
 * C8, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN6TX (SRC_ASCLIN6_TX)

/** DC, ASCLIN Error Service Request */
#define SRC_ASCLIN7_ERR ((*(volatile Ifx_SRC_SRCR*)0xF00380DCu)) /* lint --e(923)*/

/** D8, ASCLIN Receive Service Request */
#define SRC_ASCLIN7_RX ((*(volatile Ifx_SRC_SRCR*)0xF00380D8u)) /* lint --e(923)*/

/** D4, ASCLIN Transmit Service Request */
#define SRC_ASCLIN7_TX ((*(volatile Ifx_SRC_SRCR*)0xF00380D4u)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN7_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN7_ERR instead.
 * DC, ASCLIN Error Service Request
 */
#define SRC_ASCLIN7ERR (SRC_ASCLIN7_ERR)

/** Alias for SRC_ASCLIN7_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN7_RX instead.
 * D8, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN7RX (SRC_ASCLIN7_RX)

/** Alias for SRC_ASCLIN7_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN7_TX instead.
 * D4, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN7TX (SRC_ASCLIN7_TX)

/** E8, ASCLIN Error Service Request */
#define SRC_ASCLIN8_ERR ((*(volatile Ifx_SRC_SRCR*)0xF00380E8u)) /* lint --e(923)*/

/** E4, ASCLIN Receive Service Request */
#define SRC_ASCLIN8_RX ((*(volatile Ifx_SRC_SRCR*)0xF00380E4u)) /* lint --e(923)*/

/** E0, ASCLIN Transmit Service Request */
#define SRC_ASCLIN8_TX ((*(volatile Ifx_SRC_SRCR*)0xF00380E0u)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN8_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN8_ERR instead.
 * E8, ASCLIN Error Service Request
 */
#define SRC_ASCLIN8ERR (SRC_ASCLIN8_ERR)

/** Alias for SRC_ASCLIN8_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN8_RX instead.
 * E4, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN8RX (SRC_ASCLIN8_RX)

/** Alias for SRC_ASCLIN8_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN8_TX instead.
 * E0, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN8TX (SRC_ASCLIN8_TX)

/** F4, ASCLIN Error Service Request */
#define SRC_ASCLIN9_ERR ((*(volatile Ifx_SRC_SRCR*)0xF00380F4u)) /* lint --e(923)*/

/** F0, ASCLIN Receive Service Request */
#define SRC_ASCLIN9_RX ((*(volatile Ifx_SRC_SRCR*)0xF00380F0u)) /* lint --e(923)*/

/** EC, ASCLIN Transmit Service Request */
#define SRC_ASCLIN9_TX ((*(volatile Ifx_SRC_SRCR*)0xF00380ECu)) /* lint --e(923)*/

/** Alias for SRC_ASCLIN9_ERR.
 *  Note that this definition is obsolete, use SRC_ASCLIN9_ERR instead.
 * F4, ASCLIN Error Service Request
 */
#define SRC_ASCLIN9ERR (SRC_ASCLIN9_ERR)

/** Alias for SRC_ASCLIN9_RX.
 *  Note that this definition is obsolete, use SRC_ASCLIN9_RX instead.
 * F0, ASCLIN Receive Service Request
 */
#define SRC_ASCLIN9RX (SRC_ASCLIN9_RX)

/** Alias for SRC_ASCLIN9_TX.
 *  Note that this definition is obsolete, use SRC_ASCLIN9_TX instead.
 * EC, ASCLIN Transmit Service Request
 */
#define SRC_ASCLIN9TX (SRC_ASCLIN9_TX)

/** 40, Bus Control Unit SPB Service Request */
#define SRC_BCUSPBSBSRC ((*(volatile Ifx_SRC_SRCR*)0xF0038040u)) /* lint --e(923)*/

/** C80, Bus Monitor Unit Service Request */
#define SRC_BMU ((*(volatile Ifx_SRC_SRCR*)0xF0038C80u)) /* lint --e(923)*/

/** 900, MULTICAN+ Service Request */
#define SRC_CANINT0 ((*(volatile Ifx_SRC_SRCR*)0xF0038900u)) /* lint --e(923)*/

/** 904, MULTICAN+ Service Request */
#define SRC_CANINT1 ((*(volatile Ifx_SRC_SRCR*)0xF0038904u)) /* lint --e(923)*/

/** 928, MULTICAN+ Service Request */
#define SRC_CANINT10 ((*(volatile Ifx_SRC_SRCR*)0xF0038928u)) /* lint --e(923)*/

/** 92C, MULTICAN+ Service Request */
#define SRC_CANINT11 ((*(volatile Ifx_SRC_SRCR*)0xF003892Cu)) /* lint --e(923)*/

/** 930, MULTICAN+ Service Request */
#define SRC_CANINT12 ((*(volatile Ifx_SRC_SRCR*)0xF0038930u)) /* lint --e(923)*/

/** 934, MULTICAN+ Service Request */
#define SRC_CANINT13 ((*(volatile Ifx_SRC_SRCR*)0xF0038934u)) /* lint --e(923)*/

/** 938, MULTICAN+ Service Request */
#define SRC_CANINT14 ((*(volatile Ifx_SRC_SRCR*)0xF0038938u)) /* lint --e(923)*/

/** 93C, MULTICAN+ Service Request */
#define SRC_CANINT15 ((*(volatile Ifx_SRC_SRCR*)0xF003893Cu)) /* lint --e(923)*/

/** 908, MULTICAN+ Service Request */
#define SRC_CANINT2 ((*(volatile Ifx_SRC_SRCR*)0xF0038908u)) /* lint --e(923)*/

/** 90C, MULTICAN+ Service Request */
#define SRC_CANINT3 ((*(volatile Ifx_SRC_SRCR*)0xF003890Cu)) /* lint --e(923)*/

/** 910, MULTICAN+ Service Request */
#define SRC_CANINT4 ((*(volatile Ifx_SRC_SRCR*)0xF0038910u)) /* lint --e(923)*/

/** 914, MULTICAN+ Service Request */
#define SRC_CANINT5 ((*(volatile Ifx_SRC_SRCR*)0xF0038914u)) /* lint --e(923)*/

/** 918, MULTICAN+ Service Request */
#define SRC_CANINT6 ((*(volatile Ifx_SRC_SRCR*)0xF0038918u)) /* lint --e(923)*/

/** 91C, MULTICAN+ Service Request */
#define SRC_CANINT7 ((*(volatile Ifx_SRC_SRCR*)0xF003891Cu)) /* lint --e(923)*/

/** 920, MULTICAN+ Service Request */
#define SRC_CANINT8 ((*(volatile Ifx_SRC_SRCR*)0xF0038920u)) /* lint --e(923)*/

/** 924, MULTICAN+ Service Request */
#define SRC_CANINT9 ((*(volatile Ifx_SRC_SRCR*)0xF0038924u)) /* lint --e(923)*/

/** 420, CCU6 Service Request */
#define SRC_CCU60_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF0038420u)) /* lint --e(923)*/

/** 424, CCU6 Service Request */
#define SRC_CCU60_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF0038424u)) /* lint --e(923)*/

/** 428, CCU6 Service Request */
#define SRC_CCU60_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF0038428u)) /* lint --e(923)*/

/** 42C, CCU6 Service Request */
#define SRC_CCU60_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF003842Cu)) /* lint --e(923)*/

/** Alias for SRC_CCU60_SR0.
 *  Note that this definition is obsolete, use SRC_CCU60_SR0 instead.
 * 420, CCU6 Service Request
 */
#define SRC_CCU60SR0 (SRC_CCU60_SR0)

/** Alias for SRC_CCU60_SR1.
 *  Note that this definition is obsolete, use SRC_CCU60_SR1 instead.
 * 424, CCU6 Service Request
 */
#define SRC_CCU60SR1 (SRC_CCU60_SR1)

/** Alias for SRC_CCU60_SR2.
 *  Note that this definition is obsolete, use SRC_CCU60_SR2 instead.
 * 428, CCU6 Service Request
 */
#define SRC_CCU60SR2 (SRC_CCU60_SR2)

/** Alias for SRC_CCU60_SR3.
 *  Note that this definition is obsolete, use SRC_CCU60_SR3 instead.
 * 42C, CCU6 Service Request
 */
#define SRC_CCU60SR3 (SRC_CCU60_SR3)

/** 430, CCU6 Service Request */
#define SRC_CCU61_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF0038430u)) /* lint --e(923)*/

/** 434, CCU6 Service Request */
#define SRC_CCU61_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF0038434u)) /* lint --e(923)*/

/** 438, CCU6 Service Request */
#define SRC_CCU61_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF0038438u)) /* lint --e(923)*/

/** 43C, CCU6 Service Request */
#define SRC_CCU61_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF003843Cu)) /* lint --e(923)*/

/** Alias for SRC_CCU61_SR0.
 *  Note that this definition is obsolete, use SRC_CCU61_SR0 instead.
 * 430, CCU6 Service Request
 */
#define SRC_CCU61SR0 (SRC_CCU61_SR0)

/** Alias for SRC_CCU61_SR1.
 *  Note that this definition is obsolete, use SRC_CCU61_SR1 instead.
 * 434, CCU6 Service Request
 */
#define SRC_CCU61SR1 (SRC_CCU61_SR1)

/** Alias for SRC_CCU61_SR2.
 *  Note that this definition is obsolete, use SRC_CCU61_SR2 instead.
 * 438, CCU6 Service Request
 */
#define SRC_CCU61SR2 (SRC_CCU61_SR2)

/** Alias for SRC_CCU61_SR3.
 *  Note that this definition is obsolete, use SRC_CCU61_SR3 instead.
 * 43C, CCU6 Service Request
 */
#define SRC_CCU61SR3 (SRC_CCU61_SR3)

/** 440, CCU6 Service Request */
#define SRC_CCU62_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF0038440u)) /* lint --e(923)*/

/** 444, CCU6 Service Request */
#define SRC_CCU62_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF0038444u)) /* lint --e(923)*/

/** 448, CCU6 Service Request */
#define SRC_CCU62_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF0038448u)) /* lint --e(923)*/

/** 44C, CCU6 Service Request */
#define SRC_CCU62_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF003844Cu)) /* lint --e(923)*/

/** Alias for SRC_CCU62_SR0.
 *  Note that this definition is obsolete, use SRC_CCU62_SR0 instead.
 * 440, CCU6 Service Request
 */
#define SRC_CCU62SR0 (SRC_CCU62_SR0)

/** Alias for SRC_CCU62_SR1.
 *  Note that this definition is obsolete, use SRC_CCU62_SR1 instead.
 * 444, CCU6 Service Request
 */
#define SRC_CCU62SR1 (SRC_CCU62_SR1)

/** Alias for SRC_CCU62_SR2.
 *  Note that this definition is obsolete, use SRC_CCU62_SR2 instead.
 * 448, CCU6 Service Request
 */
#define SRC_CCU62SR2 (SRC_CCU62_SR2)

/** Alias for SRC_CCU62_SR3.
 *  Note that this definition is obsolete, use SRC_CCU62_SR3 instead.
 * 44C, CCU6 Service Request
 */
#define SRC_CCU62SR3 (SRC_CCU62_SR3)

/** 450, CCU6 Service Request */
#define SRC_CCU63_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF0038450u)) /* lint --e(923)*/

/** 454, CCU6 Service Request */
#define SRC_CCU63_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF0038454u)) /* lint --e(923)*/

/** 458, CCU6 Service Request */
#define SRC_CCU63_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF0038458u)) /* lint --e(923)*/

/** 45C, CCU6 Service Request */
#define SRC_CCU63_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF003845Cu)) /* lint --e(923)*/

/** Alias for SRC_CCU63_SR0.
 *  Note that this definition is obsolete, use SRC_CCU63_SR0 instead.
 * 450, CCU6 Service Request
 */
#define SRC_CCU63SR0 (SRC_CCU63_SR0)

/** Alias for SRC_CCU63_SR1.
 *  Note that this definition is obsolete, use SRC_CCU63_SR1 instead.
 * 454, CCU6 Service Request
 */
#define SRC_CCU63SR1 (SRC_CCU63_SR1)

/** Alias for SRC_CCU63_SR2.
 *  Note that this definition is obsolete, use SRC_CCU63_SR2 instead.
 * 458, CCU6 Service Request
 */
#define SRC_CCU63SR2 (SRC_CCU63_SR2)

/** Alias for SRC_CCU63_SR3.
 *  Note that this definition is obsolete, use SRC_CCU63_SR3 instead.
 * 45C, CCU6 Service Request
 */
#define SRC_CCU63SR3 (SRC_CCU63_SR3)

/** 50, Cerberus Service Request */
#define SRC_CERBERUS0 ((*(volatile Ifx_SRC_SRCR*)0xF0038050u)) /* lint --e(923)*/

/** 54, Cerberus Service Request */
#define SRC_CERBERUS1 ((*(volatile Ifx_SRC_SRCR*)0xF0038054u)) /* lint --e(923)*/

/** Alias for SRC_CPUSBSRC0.
 *  Note that this definition is obsolete, use SRC_CPUSBSRC0 instead.
 * 0, CPU Software Breakpoint Service Request
 */
#define SRC_CPU0SBSRC (SRC_CPUSBSRC0)

/** Alias for SRC_CPUSBSRC1.
 *  Note that this definition is obsolete, use SRC_CPUSBSRC1 instead.
 * 4, CPU Software Breakpoint Service Request
 */
#define SRC_CPU1SBSRC (SRC_CPUSBSRC1)

/** Alias for SRC_CPUSBSRC2.
 *  Note that this definition is obsolete, use SRC_CPUSBSRC2 instead.
 * 8, CPU Software Breakpoint Service Request
 */
#define SRC_CPU2SBSRC (SRC_CPUSBSRC2)

/** 0, CPU Software Breakpoint Service Request */
#define SRC_CPUSBSRC0 ((*(volatile Ifx_SRC_SRCR*)0xF0038000u)) /* lint --e(923)*/

/** 4, CPU Software Breakpoint Service Request */
#define SRC_CPUSBSRC1 ((*(volatile Ifx_SRC_SRCR*)0xF0038004u)) /* lint --e(923)*/

/** 8, CPU Software Breakpoint Service Request */
#define SRC_CPUSBSRC2 ((*(volatile Ifx_SRC_SRCR*)0xF0038008u)) /* lint --e(923)*/

/** 4D8, DMA Move Engine Service Request */
#define SRC_DMA_ME0 ((*(volatile Ifx_SRC_SRCR*)0xF00384D8u)) /* lint --e(923)*/

/** 4DC, DMA Move Engine Service Request */
#define SRC_DMA_ME1 ((*(volatile Ifx_SRC_SRCR*)0xF00384DCu)) /* lint --e(923)*/

/** 6F0, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH0 ((*(volatile Ifx_SRC_SRCR*)0xF00386F0u)) /* lint --e(923)*/

/** 6F4, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH1 ((*(volatile Ifx_SRC_SRCR*)0xF00386F4u)) /* lint --e(923)*/

/** 718, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH10 ((*(volatile Ifx_SRC_SRCR*)0xF0038718u)) /* lint --e(923)*/

/** 71C, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH11 ((*(volatile Ifx_SRC_SRCR*)0xF003871Cu)) /* lint --e(923)*/

/** 720, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH12 ((*(volatile Ifx_SRC_SRCR*)0xF0038720u)) /* lint --e(923)*/

/** 724, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH13 ((*(volatile Ifx_SRC_SRCR*)0xF0038724u)) /* lint --e(923)*/

/** 728, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH14 ((*(volatile Ifx_SRC_SRCR*)0xF0038728u)) /* lint --e(923)*/

/** 72C, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH15 ((*(volatile Ifx_SRC_SRCR*)0xF003872Cu)) /* lint --e(923)*/

/** 730, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH16 ((*(volatile Ifx_SRC_SRCR*)0xF0038730u)) /* lint --e(923)*/

/** 734, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH17 ((*(volatile Ifx_SRC_SRCR*)0xF0038734u)) /* lint --e(923)*/

/** 738, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH18 ((*(volatile Ifx_SRC_SRCR*)0xF0038738u)) /* lint --e(923)*/

/** 73C, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH19 ((*(volatile Ifx_SRC_SRCR*)0xF003873Cu)) /* lint --e(923)*/

/** 6F8, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH2 ((*(volatile Ifx_SRC_SRCR*)0xF00386F8u)) /* lint --e(923)*/

/** 740, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH20 ((*(volatile Ifx_SRC_SRCR*)0xF0038740u)) /* lint --e(923)*/

/** 744, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH21 ((*(volatile Ifx_SRC_SRCR*)0xF0038744u)) /* lint --e(923)*/

/** 748, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH22 ((*(volatile Ifx_SRC_SRCR*)0xF0038748u)) /* lint --e(923)*/

/** 74C, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH23 ((*(volatile Ifx_SRC_SRCR*)0xF003874Cu)) /* lint --e(923)*/

/** 6FC, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH3 ((*(volatile Ifx_SRC_SRCR*)0xF00386FCu)) /* lint --e(923)*/

/** 700, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH4 ((*(volatile Ifx_SRC_SRCR*)0xF0038700u)) /* lint --e(923)*/

/** 704, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH5 ((*(volatile Ifx_SRC_SRCR*)0xF0038704u)) /* lint --e(923)*/

/** 708, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH6 ((*(volatile Ifx_SRC_SRCR*)0xF0038708u)) /* lint --e(923)*/

/** 70C, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH7 ((*(volatile Ifx_SRC_SRCR*)0xF003870Cu)) /* lint --e(923)*/

/** 710, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH8 ((*(volatile Ifx_SRC_SRCR*)0xF0038710u)) /* lint --e(923)*/

/** 714, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH0_CH9 ((*(volatile Ifx_SRC_SRCR*)0xF0038714u)) /* lint --e(923)*/

/** 7F0, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH0 ((*(volatile Ifx_SRC_SRCR*)0xF00387F0u)) /* lint --e(923)*/

/** 7F4, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH1 ((*(volatile Ifx_SRC_SRCR*)0xF00387F4u)) /* lint --e(923)*/

/** 818, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH10 ((*(volatile Ifx_SRC_SRCR*)0xF0038818u)) /* lint --e(923)*/

/** 81C, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH11 ((*(volatile Ifx_SRC_SRCR*)0xF003881Cu)) /* lint --e(923)*/

/** 820, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH12 ((*(volatile Ifx_SRC_SRCR*)0xF0038820u)) /* lint --e(923)*/

/** 824, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH13 ((*(volatile Ifx_SRC_SRCR*)0xF0038824u)) /* lint --e(923)*/

/** 828, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH14 ((*(volatile Ifx_SRC_SRCR*)0xF0038828u)) /* lint --e(923)*/

/** 82C, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH15 ((*(volatile Ifx_SRC_SRCR*)0xF003882Cu)) /* lint --e(923)*/

/** 830, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH16 ((*(volatile Ifx_SRC_SRCR*)0xF0038830u)) /* lint --e(923)*/

/** 834, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH17 ((*(volatile Ifx_SRC_SRCR*)0xF0038834u)) /* lint --e(923)*/

/** 838, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH18 ((*(volatile Ifx_SRC_SRCR*)0xF0038838u)) /* lint --e(923)*/

/** 83C, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH19 ((*(volatile Ifx_SRC_SRCR*)0xF003883Cu)) /* lint --e(923)*/

/** 7F8, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH2 ((*(volatile Ifx_SRC_SRCR*)0xF00387F8u)) /* lint --e(923)*/

/** 840, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH20 ((*(volatile Ifx_SRC_SRCR*)0xF0038840u)) /* lint --e(923)*/

/** 844, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH21 ((*(volatile Ifx_SRC_SRCR*)0xF0038844u)) /* lint --e(923)*/

/** 848, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH22 ((*(volatile Ifx_SRC_SRCR*)0xF0038848u)) /* lint --e(923)*/

/** 84C, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH23 ((*(volatile Ifx_SRC_SRCR*)0xF003884Cu)) /* lint --e(923)*/

/** 7FC, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH3 ((*(volatile Ifx_SRC_SRCR*)0xF00387FCu)) /* lint --e(923)*/

/** 800, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH4 ((*(volatile Ifx_SRC_SRCR*)0xF0038800u)) /* lint --e(923)*/

/** 804, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH5 ((*(volatile Ifx_SRC_SRCR*)0xF0038804u)) /* lint --e(923)*/

/** 808, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH6 ((*(volatile Ifx_SRC_SRCR*)0xF0038808u)) /* lint --e(923)*/

/** 80C, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH7 ((*(volatile Ifx_SRC_SRCR*)0xF003880Cu)) /* lint --e(923)*/

/** 810, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH8 ((*(volatile Ifx_SRC_SRCR*)0xF0038810u)) /* lint --e(923)*/

/** 814, DMA Move Engine Channel  Service Request */
#define SRC_DMA_MECH1_CH9 ((*(volatile Ifx_SRC_SRCR*)0xF0038814u)) /* lint --e(923)*/

/** Alias for SRC_DMA_ME0.
 *  Note that this definition is obsolete, use SRC_DMA_ME0 instead.
 * 4D8, DMA Move Engine Service Request
 */
#define SRC_DMAME0 (SRC_DMA_ME0)

/** Alias for SRC_DMA_MECH0_CH0.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH0 instead.
 * 6F0, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH0 (SRC_DMA_MECH0_CH0)

/** Alias for SRC_DMA_MECH0_CH1.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH1 instead.
 * 6F4, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH1 (SRC_DMA_MECH0_CH1)

/** Alias for SRC_DMA_MECH0_CH10.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH10 instead.
 * 718, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH10 (SRC_DMA_MECH0_CH10)

/** Alias for SRC_DMA_MECH0_CH11.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH11 instead.
 * 71C, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH11 (SRC_DMA_MECH0_CH11)

/** Alias for SRC_DMA_MECH0_CH12.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH12 instead.
 * 720, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH12 (SRC_DMA_MECH0_CH12)

/** Alias for SRC_DMA_MECH0_CH13.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH13 instead.
 * 724, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH13 (SRC_DMA_MECH0_CH13)

/** Alias for SRC_DMA_MECH0_CH14.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH14 instead.
 * 728, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH14 (SRC_DMA_MECH0_CH14)

/** Alias for SRC_DMA_MECH0_CH15.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH15 instead.
 * 72C, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH15 (SRC_DMA_MECH0_CH15)

/** Alias for SRC_DMA_MECH0_CH16.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH16 instead.
 * 730, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH16 (SRC_DMA_MECH0_CH16)

/** Alias for SRC_DMA_MECH0_CH17.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH17 instead.
 * 734, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH17 (SRC_DMA_MECH0_CH17)

/** Alias for SRC_DMA_MECH0_CH18.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH18 instead.
 * 738, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH18 (SRC_DMA_MECH0_CH18)

/** Alias for SRC_DMA_MECH0_CH19.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH19 instead.
 * 73C, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH19 (SRC_DMA_MECH0_CH19)

/** Alias for SRC_DMA_MECH0_CH2.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH2 instead.
 * 6F8, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH2 (SRC_DMA_MECH0_CH2)

/** Alias for SRC_DMA_MECH0_CH20.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH20 instead.
 * 740, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH20 (SRC_DMA_MECH0_CH20)

/** Alias for SRC_DMA_MECH0_CH21.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH21 instead.
 * 744, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH21 (SRC_DMA_MECH0_CH21)

/** Alias for SRC_DMA_MECH0_CH22.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH22 instead.
 * 748, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH22 (SRC_DMA_MECH0_CH22)

/** Alias for SRC_DMA_MECH0_CH23.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH23 instead.
 * 74C, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH23 (SRC_DMA_MECH0_CH23)

/** Alias for SRC_DMA_MECH0_CH3.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH3 instead.
 * 6FC, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH3 (SRC_DMA_MECH0_CH3)

/** Alias for SRC_DMA_MECH0_CH4.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH4 instead.
 * 700, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH4 (SRC_DMA_MECH0_CH4)

/** Alias for SRC_DMA_MECH0_CH5.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH5 instead.
 * 704, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH5 (SRC_DMA_MECH0_CH5)

/** Alias for SRC_DMA_MECH0_CH6.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH6 instead.
 * 708, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH6 (SRC_DMA_MECH0_CH6)

/** Alias for SRC_DMA_MECH0_CH7.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH7 instead.
 * 70C, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH7 (SRC_DMA_MECH0_CH7)

/** Alias for SRC_DMA_MECH0_CH8.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH8 instead.
 * 710, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH8 (SRC_DMA_MECH0_CH8)

/** Alias for SRC_DMA_MECH0_CH9.
 *  Note that this definition is obsolete, use SRC_DMA_MECH0_CH9 instead.
 * 714, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME0CH_CH9 (SRC_DMA_MECH0_CH9)

/** Alias for SRC_DMA_ME1.
 *  Note that this definition is obsolete, use SRC_DMA_ME1 instead.
 * 4DC, DMA Move Engine Service Request
 */
#define SRC_DMAME1 (SRC_DMA_ME1)

/** Alias for SRC_DMA_MECH1_CH0.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH0 instead.
 * 7F0, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH0 (SRC_DMA_MECH1_CH0)

/** Alias for SRC_DMA_MECH1_CH1.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH1 instead.
 * 7F4, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH1 (SRC_DMA_MECH1_CH1)

/** Alias for SRC_DMA_MECH1_CH10.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH10 instead.
 * 818, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH10 (SRC_DMA_MECH1_CH10)

/** Alias for SRC_DMA_MECH1_CH11.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH11 instead.
 * 81C, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH11 (SRC_DMA_MECH1_CH11)

/** Alias for SRC_DMA_MECH1_CH12.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH12 instead.
 * 820, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH12 (SRC_DMA_MECH1_CH12)

/** Alias for SRC_DMA_MECH1_CH13.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH13 instead.
 * 824, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH13 (SRC_DMA_MECH1_CH13)

/** Alias for SRC_DMA_MECH1_CH14.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH14 instead.
 * 828, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH14 (SRC_DMA_MECH1_CH14)

/** Alias for SRC_DMA_MECH1_CH15.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH15 instead.
 * 82C, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH15 (SRC_DMA_MECH1_CH15)

/** Alias for SRC_DMA_MECH1_CH16.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH16 instead.
 * 830, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH16 (SRC_DMA_MECH1_CH16)

/** Alias for SRC_DMA_MECH1_CH17.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH17 instead.
 * 834, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH17 (SRC_DMA_MECH1_CH17)

/** Alias for SRC_DMA_MECH1_CH18.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH18 instead.
 * 838, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH18 (SRC_DMA_MECH1_CH18)

/** Alias for SRC_DMA_MECH1_CH19.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH19 instead.
 * 83C, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH19 (SRC_DMA_MECH1_CH19)

/** Alias for SRC_DMA_MECH1_CH2.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH2 instead.
 * 7F8, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH2 (SRC_DMA_MECH1_CH2)

/** Alias for SRC_DMA_MECH1_CH20.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH20 instead.
 * 840, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH20 (SRC_DMA_MECH1_CH20)

/** Alias for SRC_DMA_MECH1_CH21.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH21 instead.
 * 844, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH21 (SRC_DMA_MECH1_CH21)

/** Alias for SRC_DMA_MECH1_CH22.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH22 instead.
 * 848, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH22 (SRC_DMA_MECH1_CH22)

/** Alias for SRC_DMA_MECH1_CH23.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH23 instead.
 * 84C, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH23 (SRC_DMA_MECH1_CH23)

/** Alias for SRC_DMA_MECH1_CH3.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH3 instead.
 * 7FC, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH3 (SRC_DMA_MECH1_CH3)

/** Alias for SRC_DMA_MECH1_CH4.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH4 instead.
 * 800, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH4 (SRC_DMA_MECH1_CH4)

/** Alias for SRC_DMA_MECH1_CH5.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH5 instead.
 * 804, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH5 (SRC_DMA_MECH1_CH5)

/** Alias for SRC_DMA_MECH1_CH6.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH6 instead.
 * 808, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH6 (SRC_DMA_MECH1_CH6)

/** Alias for SRC_DMA_MECH1_CH7.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH7 instead.
 * 80C, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH7 (SRC_DMA_MECH1_CH7)

/** Alias for SRC_DMA_MECH1_CH8.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH8 instead.
 * 810, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH8 (SRC_DMA_MECH1_CH8)

/** Alias for SRC_DMA_MECH1_CH9.
 *  Note that this definition is obsolete, use SRC_DMA_MECH1_CH9 instead.
 * 814, DMA Move Engine Channel  Service Request
 */
#define SRC_DMAME1CH_CH9 (SRC_DMA_MECH1_CH9)

/** B94, DSADC SRA Service Request */
#define SRC_DSADC0_SRA ((*(volatile Ifx_SRC_SRCR*)0xF0038B94u)) /* lint --e(923)*/

/** B90, DSADC SRM Service Request */
#define SRC_DSADC0_SRM ((*(volatile Ifx_SRC_SRCR*)0xF0038B90u)) /* lint --e(923)*/

/** B9C, DSADC SRA Service Request */
#define SRC_DSADC1_SRA ((*(volatile Ifx_SRC_SRCR*)0xF0038B9Cu)) /* lint --e(923)*/

/** B98, DSADC SRM Service Request */
#define SRC_DSADC1_SRM ((*(volatile Ifx_SRC_SRCR*)0xF0038B98u)) /* lint --e(923)*/

/** BA4, DSADC SRA Service Request */
#define SRC_DSADC2_SRA ((*(volatile Ifx_SRC_SRCR*)0xF0038BA4u)) /* lint --e(923)*/

/** BA0, DSADC SRM Service Request */
#define SRC_DSADC2_SRM ((*(volatile Ifx_SRC_SRCR*)0xF0038BA0u)) /* lint --e(923)*/

/** BAC, DSADC SRA Service Request */
#define SRC_DSADC3_SRA ((*(volatile Ifx_SRC_SRCR*)0xF0038BACu)) /* lint --e(923)*/

/** BA8, DSADC SRM Service Request */
#define SRC_DSADC3_SRM ((*(volatile Ifx_SRC_SRCR*)0xF0038BA8u)) /* lint --e(923)*/

/** BB4, DSADC SRA Service Request */
#define SRC_DSADC4_SRA ((*(volatile Ifx_SRC_SRCR*)0xF0038BB4u)) /* lint --e(923)*/

/** BB0, DSADC SRM Service Request */
#define SRC_DSADC4_SRM ((*(volatile Ifx_SRC_SRCR*)0xF0038BB0u)) /* lint --e(923)*/

/** BBC, DSADC SRA Service Request */
#define SRC_DSADC5_SRA ((*(volatile Ifx_SRC_SRCR*)0xF0038BBCu)) /* lint --e(923)*/

/** BB8, DSADC SRM Service Request */
#define SRC_DSADC5_SRM ((*(volatile Ifx_SRC_SRCR*)0xF0038BB8u)) /* lint --e(923)*/

/** Alias for SRC_DSADC0_SRA.
 *  Note that this definition is obsolete, use SRC_DSADC0_SRA instead.
 * B94, DSADC SRA Service Request
 */
#define SRC_DSADCSRA0 (SRC_DSADC0_SRA)

/** Alias for SRC_DSADC1_SRA.
 *  Note that this definition is obsolete, use SRC_DSADC1_SRA instead.
 * B9C, DSADC SRA Service Request
 */
#define SRC_DSADCSRA1 (SRC_DSADC1_SRA)

/** Alias for SRC_DSADC2_SRA.
 *  Note that this definition is obsolete, use SRC_DSADC2_SRA instead.
 * BA4, DSADC SRA Service Request
 */
#define SRC_DSADCSRA2 (SRC_DSADC2_SRA)

/** Alias for SRC_DSADC3_SRA.
 *  Note that this definition is obsolete, use SRC_DSADC3_SRA instead.
 * BAC, DSADC SRA Service Request
 */
#define SRC_DSADCSRA3 (SRC_DSADC3_SRA)

/** Alias for SRC_DSADC4_SRA.
 *  Note that this definition is obsolete, use SRC_DSADC4_SRA instead.
 * BB4, DSADC SRA Service Request
 */
#define SRC_DSADCSRA4 (SRC_DSADC4_SRA)

/** Alias for SRC_DSADC5_SRA.
 *  Note that this definition is obsolete, use SRC_DSADC5_SRA instead.
 * BBC, DSADC SRA Service Request
 */
#define SRC_DSADCSRA5 (SRC_DSADC5_SRA)

/** Alias for SRC_DSADC0_SRM.
 *  Note that this definition is obsolete, use SRC_DSADC0_SRM instead.
 * B90, DSADC SRM Service Request
 */
#define SRC_DSADCSRM0 (SRC_DSADC0_SRM)

/** Alias for SRC_DSADC1_SRM.
 *  Note that this definition is obsolete, use SRC_DSADC1_SRM instead.
 * B98, DSADC SRM Service Request
 */
#define SRC_DSADCSRM1 (SRC_DSADC1_SRM)

/** Alias for SRC_DSADC2_SRM.
 *  Note that this definition is obsolete, use SRC_DSADC2_SRM instead.
 * BA0, DSADC SRM Service Request
 */
#define SRC_DSADCSRM2 (SRC_DSADC2_SRM)

/** Alias for SRC_DSADC3_SRM.
 *  Note that this definition is obsolete, use SRC_DSADC3_SRM instead.
 * BA8, DSADC SRM Service Request
 */
#define SRC_DSADCSRM3 (SRC_DSADC3_SRM)

/** Alias for SRC_DSADC4_SRM.
 *  Note that this definition is obsolete, use SRC_DSADC4_SRM instead.
 * BB0, DSADC SRM Service Request
 */
#define SRC_DSADCSRM4 (SRC_DSADC4_SRM)

/** Alias for SRC_DSADC5_SRM.
 *  Note that this definition is obsolete, use SRC_DSADC5_SRM instead.
 * BB8, DSADC SRM Service Request
 */
#define SRC_DSADCSRM5 (SRC_DSADC5_SRM)

/** 20, Emulation Memory Service Request */
#define SRC_EMEM ((*(volatile Ifx_SRC_SRCR*)0xF0038020u)) /* lint --e(923)*/

/** C04, E-RAY Input Buffer Busy Service Request */
#define SRC_ERAY_IBUSY ((*(volatile Ifx_SRC_SRCR*)0xF0038C04u)) /* lint --e(923)*/

/** BE0, E-RAY Service Request 0 */
#define SRC_ERAY_INT0 ((*(volatile Ifx_SRC_SRCR*)0xF0038BE0u)) /* lint --e(923)*/

/** BE4, E-RAY Service Request 1 */
#define SRC_ERAY_INT1 ((*(volatile Ifx_SRC_SRCR*)0xF0038BE4u)) /* lint --e(923)*/

/** BF8, E-RAY Message Buffer Status Changed 0 Service Request */
#define SRC_ERAY_MBSC0 ((*(volatile Ifx_SRC_SRCR*)0xF0038BF8u)) /* lint --e(923)*/

/** BFC, E-RAY Message Buffer Status Changed 1 Service Request */
#define SRC_ERAY_MBSC1 ((*(volatile Ifx_SRC_SRCR*)0xF0038BFCu)) /* lint --e(923)*/

/** BF0, E-RAY New Data 0 Service Request */
#define SRC_ERAY_NDAT0 ((*(volatile Ifx_SRC_SRCR*)0xF0038BF0u)) /* lint --e(923)*/

/** BF4, E-RAY New Data 1 Service Request */
#define SRC_ERAY_NDAT1 ((*(volatile Ifx_SRC_SRCR*)0xF0038BF4u)) /* lint --e(923)*/

/** C00, E-RAY Output Buffer Busy Service Request */
#define SRC_ERAY_OBUSY ((*(volatile Ifx_SRC_SRCR*)0xF0038C00u)) /* lint --e(923)*/

/** BE8, E-RAY Timer Interrupt 0 Service Request */
#define SRC_ERAY_TINT0 ((*(volatile Ifx_SRC_SRCR*)0xF0038BE8u)) /* lint --e(923)*/

/** BEC, E-RAY Timer Interrupt 1 Service Request */
#define SRC_ERAY_TINT1 ((*(volatile Ifx_SRC_SRCR*)0xF0038BECu)) /* lint --e(923)*/

/** Alias for SRC_ERAY_IBUSY.
 *  Note that this definition is obsolete, use SRC_ERAY_IBUSY instead.
 * C04, E-RAY Input Buffer Busy Service Request
 */
#define SRC_ERAYIBUSY (SRC_ERAY_IBUSY)

/** Alias for SRC_ERAY_INT0.
 *  Note that this definition is obsolete, use SRC_ERAY_INT0 instead.
 * BE0, E-RAY Service Request 0
 */
#define SRC_ERAYINT0 (SRC_ERAY_INT0)

/** Alias for SRC_ERAY_INT1.
 *  Note that this definition is obsolete, use SRC_ERAY_INT1 instead.
 * BE4, E-RAY Service Request 1
 */
#define SRC_ERAYINT1 (SRC_ERAY_INT1)

/** Alias for SRC_ERAY_MBSC0.
 *  Note that this definition is obsolete, use SRC_ERAY_MBSC0 instead.
 * BF8, E-RAY Message Buffer Status Changed 0 Service Request
 */
#define SRC_ERAYMBSC0 (SRC_ERAY_MBSC0)

/** Alias for SRC_ERAY_MBSC1.
 *  Note that this definition is obsolete, use SRC_ERAY_MBSC1 instead.
 * BFC, E-RAY Message Buffer Status Changed 1 Service Request
 */
#define SRC_ERAYMBSC1 (SRC_ERAY_MBSC1)

/** Alias for SRC_ERAY_NDAT0.
 *  Note that this definition is obsolete, use SRC_ERAY_NDAT0 instead.
 * BF0, E-RAY New Data 0 Service Request
 */
#define SRC_ERAYNDAT0 (SRC_ERAY_NDAT0)

/** Alias for SRC_ERAY_NDAT1.
 *  Note that this definition is obsolete, use SRC_ERAY_NDAT1 instead.
 * BF4, E-RAY New Data 1 Service Request
 */
#define SRC_ERAYNDAT1 (SRC_ERAY_NDAT1)

/** Alias for SRC_ERAY_OBUSY.
 *  Note that this definition is obsolete, use SRC_ERAY_OBUSY instead.
 * C00, E-RAY Output Buffer Busy Service Request
 */
#define SRC_ERAYOBUSY (SRC_ERAY_OBUSY)

/** Alias for SRC_ERAY_TINT0.
 *  Note that this definition is obsolete, use SRC_ERAY_TINT0 instead.
 * BE8, E-RAY Timer Interrupt 0 Service Request
 */
#define SRC_ERAYTINT0 (SRC_ERAY_TINT0)

/** Alias for SRC_ERAY_TINT1.
 *  Note that this definition is obsolete, use SRC_ERAY_TINT1 instead.
 * BEC, E-RAY Timer Interrupt 1 Service Request
 */
#define SRC_ERAYTINT1 (SRC_ERAY_TINT1)

/** 8F0, Ethernet Service Request */
#define SRC_ETH ((*(volatile Ifx_SRC_SRCR*)0xF00388F0u)) /* lint --e(923)*/

/** 4B0, FCE Error Service Request */
#define SRC_FCE ((*(volatile Ifx_SRC_SRCR*)0xF00384B0u)) /* lint --e(923)*/

/** Alias for SRC_GPSR0_SR0.
 *  Note that this definition is obsolete, use SRC_GPSR0_SR0 instead.
 * 1000, General Purpose Service Request
 */
#define SRC_GPSR00 (SRC_GPSR0_SR0)

/** Alias for SRC_GPSR0_SR1.
 *  Note that this definition is obsolete, use SRC_GPSR0_SR1 instead.
 * 1004, General Purpose Service Request
 */
#define SRC_GPSR01 (SRC_GPSR0_SR1)

/** Alias for SRC_GPSR0_SR2.
 *  Note that this definition is obsolete, use SRC_GPSR0_SR2 instead.
 * 1008, General Purpose Service Request
 */
#define SRC_GPSR02 (SRC_GPSR0_SR2)

/** Alias for SRC_GPSR0_SR3.
 *  Note that this definition is obsolete, use SRC_GPSR0_SR3 instead.
 * 100C, General Purpose Service Request
 */
#define SRC_GPSR03 (SRC_GPSR0_SR3)

/** 1000, General Purpose Service Request */
#define SRC_GPSR0_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF0039000u)) /* lint --e(923)*/

/** 1004, General Purpose Service Request */
#define SRC_GPSR0_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF0039004u)) /* lint --e(923)*/

/** 1008, General Purpose Service Request */
#define SRC_GPSR0_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF0039008u)) /* lint --e(923)*/

/** 100C, General Purpose Service Request */
#define SRC_GPSR0_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF003900Cu)) /* lint --e(923)*/

/** Alias for SRC_GPSR1_SR0.
 *  Note that this definition is obsolete, use SRC_GPSR1_SR0 instead.
 * 1020, General Purpose Service Request
 */
#define SRC_GPSR10 (SRC_GPSR1_SR0)

/** Alias for SRC_GPSR1_SR1.
 *  Note that this definition is obsolete, use SRC_GPSR1_SR1 instead.
 * 1024, General Purpose Service Request
 */
#define SRC_GPSR11 (SRC_GPSR1_SR1)

/** Alias for SRC_GPSR1_SR2.
 *  Note that this definition is obsolete, use SRC_GPSR1_SR2 instead.
 * 1028, General Purpose Service Request
 */
#define SRC_GPSR12 (SRC_GPSR1_SR2)

/** Alias for SRC_GPSR1_SR3.
 *  Note that this definition is obsolete, use SRC_GPSR1_SR3 instead.
 * 102C, General Purpose Service Request
 */
#define SRC_GPSR13 (SRC_GPSR1_SR3)

/** 1020, General Purpose Service Request */
#define SRC_GPSR1_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF0039020u)) /* lint --e(923)*/

/** 1024, General Purpose Service Request */
#define SRC_GPSR1_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF0039024u)) /* lint --e(923)*/

/** 1028, General Purpose Service Request */
#define SRC_GPSR1_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF0039028u)) /* lint --e(923)*/

/** 102C, General Purpose Service Request */
#define SRC_GPSR1_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF003902Cu)) /* lint --e(923)*/

/** Alias for SRC_GPSR2_SR0.
 *  Note that this definition is obsolete, use SRC_GPSR2_SR0 instead.
 * 1040, General Purpose Service Request
 */
#define SRC_GPSR20 (SRC_GPSR2_SR0)

/** Alias for SRC_GPSR2_SR1.
 *  Note that this definition is obsolete, use SRC_GPSR2_SR1 instead.
 * 1044, General Purpose Service Request
 */
#define SRC_GPSR21 (SRC_GPSR2_SR1)

/** Alias for SRC_GPSR2_SR2.
 *  Note that this definition is obsolete, use SRC_GPSR2_SR2 instead.
 * 1048, General Purpose Service Request
 */
#define SRC_GPSR22 (SRC_GPSR2_SR2)

/** Alias for SRC_GPSR2_SR3.
 *  Note that this definition is obsolete, use SRC_GPSR2_SR3 instead.
 * 104C, General Purpose Service Request
 */
#define SRC_GPSR23 (SRC_GPSR2_SR3)

/** 1040, General Purpose Service Request */
#define SRC_GPSR2_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF0039040u)) /* lint --e(923)*/

/** 1044, General Purpose Service Request */
#define SRC_GPSR2_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF0039044u)) /* lint --e(923)*/

/** 1048, General Purpose Service Request */
#define SRC_GPSR2_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF0039048u)) /* lint --e(923)*/

/** 104C, General Purpose Service Request */
#define SRC_GPSR2_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF003904Cu)) /* lint --e(923)*/

/** 460, GPT12 CAPREL Service Request */
#define SRC_GPT120_CIRQ ((*(volatile Ifx_SRC_SRCR*)0xF0038460u)) /* lint --e(923)*/

/** 464, GPT12 T Overflow/Underflow Service Request */
#define SRC_GPT120_T0 ((*(volatile Ifx_SRC_SRCR*)0xF0038464u)) /* lint --e(923)*/

/** 468, GPT12 T Overflow/Underflow Service Request */
#define SRC_GPT120_T1 ((*(volatile Ifx_SRC_SRCR*)0xF0038468u)) /* lint --e(923)*/

/** 46C, GPT12 T Overflow/Underflow Service Request */
#define SRC_GPT120_T2 ((*(volatile Ifx_SRC_SRCR*)0xF003846Cu)) /* lint --e(923)*/

/** 470, GPT12 T Overflow/Underflow Service Request */
#define SRC_GPT120_T3 ((*(volatile Ifx_SRC_SRCR*)0xF0038470u)) /* lint --e(923)*/

/** 474, GPT12 T Overflow/Underflow Service Request */
#define SRC_GPT120_T4 ((*(volatile Ifx_SRC_SRCR*)0xF0038474u)) /* lint --e(923)*/

/** Alias for SRC_GPT120_CIRQ.
 *  Note that this definition is obsolete, use SRC_GPT120_CIRQ instead.
 * 460, GPT12 CAPREL Service Request
 */
#define SRC_GPT120CIRQ (SRC_GPT120_CIRQ)

/** Alias for SRC_GPT120_T0.
 *  Note that this definition is obsolete, use SRC_GPT120_T0 instead.
 * 464, GPT12 T Overflow/Underflow Service Request
 */
#define SRC_GPT120T0 (SRC_GPT120_T0)

/** Alias for SRC_GPT120_T1.
 *  Note that this definition is obsolete, use SRC_GPT120_T1 instead.
 * 468, GPT12 T Overflow/Underflow Service Request
 */
#define SRC_GPT120T1 (SRC_GPT120_T1)

/** Alias for SRC_GPT120_T2.
 *  Note that this definition is obsolete, use SRC_GPT120_T2 instead.
 * 46C, GPT12 T Overflow/Underflow Service Request
 */
#define SRC_GPT120T2 (SRC_GPT120_T2)

/** Alias for SRC_GPT120_T3.
 *  Note that this definition is obsolete, use SRC_GPT120_T3 instead.
 * 470, GPT12 T Overflow/Underflow Service Request
 */
#define SRC_GPT120T3 (SRC_GPT120_T3)

/** Alias for SRC_GPT120_T4.
 *  Note that this definition is obsolete, use SRC_GPT120_T4 instead.
 * 474, GPT12 T Overflow/Underflow Service Request
 */
#define SRC_GPT120T4 (SRC_GPT120_T4)

/** 478, GPT12 CAPREL Service Request */
#define SRC_GPT121_CIRQ ((*(volatile Ifx_SRC_SRCR*)0xF0038478u)) /* lint --e(923)*/

/** 47C, GPT12 T Overflow/Underflow Service Request */
#define SRC_GPT121_T0 ((*(volatile Ifx_SRC_SRCR*)0xF003847Cu)) /* lint --e(923)*/

/** 480, GPT12 T Overflow/Underflow Service Request */
#define SRC_GPT121_T1 ((*(volatile Ifx_SRC_SRCR*)0xF0038480u)) /* lint --e(923)*/

/** 484, GPT12 T Overflow/Underflow Service Request */
#define SRC_GPT121_T2 ((*(volatile Ifx_SRC_SRCR*)0xF0038484u)) /* lint --e(923)*/

/** 488, GPT12 T Overflow/Underflow Service Request */
#define SRC_GPT121_T3 ((*(volatile Ifx_SRC_SRCR*)0xF0038488u)) /* lint --e(923)*/

/** 48C, GPT12 T Overflow/Underflow Service Request */
#define SRC_GPT121_T4 ((*(volatile Ifx_SRC_SRCR*)0xF003848Cu)) /* lint --e(923)*/

/** Alias for SRC_GPT121_CIRQ.
 *  Note that this definition is obsolete, use SRC_GPT121_CIRQ instead.
 * 478, GPT12 CAPREL Service Request
 */
#define SRC_GPT121CIRQ (SRC_GPT121_CIRQ)

/** Alias for SRC_GPT121_T0.
 *  Note that this definition is obsolete, use SRC_GPT121_T0 instead.
 * 47C, GPT12 T Overflow/Underflow Service Request
 */
#define SRC_GPT121T0 (SRC_GPT121_T0)

/** Alias for SRC_GPT121_T1.
 *  Note that this definition is obsolete, use SRC_GPT121_T1 instead.
 * 480, GPT12 T Overflow/Underflow Service Request
 */
#define SRC_GPT121T1 (SRC_GPT121_T1)

/** Alias for SRC_GPT121_T2.
 *  Note that this definition is obsolete, use SRC_GPT121_T2 instead.
 * 484, GPT12 T Overflow/Underflow Service Request
 */
#define SRC_GPT121T2 (SRC_GPT121_T2)

/** Alias for SRC_GPT121_T3.
 *  Note that this definition is obsolete, use SRC_GPT121_T3 instead.
 * 488, GPT12 T Overflow/Underflow Service Request
 */
#define SRC_GPT121T3 (SRC_GPT121_T3)

/** Alias for SRC_GPT121_T4.
 *  Note that this definition is obsolete, use SRC_GPT121_T4 instead.
 * 48C, GPT12 T Overflow/Underflow Service Request
 */
#define SRC_GPT121T4 (SRC_GPT121_T4)

/** 1600, GTM AEI Shared Service Request */
#define SRC_GTM_AEIIRQ ((*(volatile Ifx_SRC_SRCR*)0xF0039600u)) /* lint --e(923)*/

/** 1604, GTM ARU Shared Service Request */
#define SRC_GTM_ARUIRQ0 ((*(volatile Ifx_SRC_SRCR*)0xF0039604u)) /* lint --e(923)*/

/** 1608, GTM ARU Shared Service Request */
#define SRC_GTM_ARUIRQ1 ((*(volatile Ifx_SRC_SRCR*)0xF0039608u)) /* lint --e(923)*/

/** 160C, GTM ARU Shared Service Request */
#define SRC_GTM_ARUIRQ2 ((*(volatile Ifx_SRC_SRCR*)0xF003960Cu)) /* lint --e(923)*/

/** Alias for SRC_GTM_ATOM0_0.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM0_0 instead.
 * 1D80, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM00 (SRC_GTM_ATOM0_0)

/** Alias for SRC_GTM_ATOM0_1.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM0_1 instead.
 * 1D84, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM01 (SRC_GTM_ATOM0_1)

/** Alias for SRC_GTM_ATOM0_2.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM0_2 instead.
 * 1D88, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM02 (SRC_GTM_ATOM0_2)

/** Alias for SRC_GTM_ATOM0_3.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM0_3 instead.
 * 1D8C, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM03 (SRC_GTM_ATOM0_3)

/** 1D80, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM0_0 ((*(volatile Ifx_SRC_SRCR*)0xF0039D80u)) /* lint --e(923)*/

/** 1D84, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM0_1 ((*(volatile Ifx_SRC_SRCR*)0xF0039D84u)) /* lint --e(923)*/

/** 1D88, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM0_2 ((*(volatile Ifx_SRC_SRCR*)0xF0039D88u)) /* lint --e(923)*/

/** 1D8C, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM0_3 ((*(volatile Ifx_SRC_SRCR*)0xF0039D8Cu)) /* lint --e(923)*/

/** Alias for SRC_GTM_ATOM1_0.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM1_0 instead.
 * 1D90, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM10 (SRC_GTM_ATOM1_0)

/** Alias for SRC_GTM_ATOM1_1.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM1_1 instead.
 * 1D94, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM11 (SRC_GTM_ATOM1_1)

/** Alias for SRC_GTM_ATOM1_2.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM1_2 instead.
 * 1D98, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM12 (SRC_GTM_ATOM1_2)

/** Alias for SRC_GTM_ATOM1_3.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM1_3 instead.
 * 1D9C, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM13 (SRC_GTM_ATOM1_3)

/** 1D90, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM1_0 ((*(volatile Ifx_SRC_SRCR*)0xF0039D90u)) /* lint --e(923)*/

/** 1D94, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM1_1 ((*(volatile Ifx_SRC_SRCR*)0xF0039D94u)) /* lint --e(923)*/

/** 1D98, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM1_2 ((*(volatile Ifx_SRC_SRCR*)0xF0039D98u)) /* lint --e(923)*/

/** 1D9C, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM1_3 ((*(volatile Ifx_SRC_SRCR*)0xF0039D9Cu)) /* lint --e(923)*/

/** Alias for SRC_GTM_ATOM2_0.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM2_0 instead.
 * 1DA0, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM20 (SRC_GTM_ATOM2_0)

/** Alias for SRC_GTM_ATOM2_1.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM2_1 instead.
 * 1DA4, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM21 (SRC_GTM_ATOM2_1)

/** Alias for SRC_GTM_ATOM2_2.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM2_2 instead.
 * 1DA8, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM22 (SRC_GTM_ATOM2_2)

/** Alias for SRC_GTM_ATOM2_3.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM2_3 instead.
 * 1DAC, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM23 (SRC_GTM_ATOM2_3)

/** 1DA0, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM2_0 ((*(volatile Ifx_SRC_SRCR*)0xF0039DA0u)) /* lint --e(923)*/

/** 1DA4, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM2_1 ((*(volatile Ifx_SRC_SRCR*)0xF0039DA4u)) /* lint --e(923)*/

/** 1DA8, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM2_2 ((*(volatile Ifx_SRC_SRCR*)0xF0039DA8u)) /* lint --e(923)*/

/** 1DAC, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM2_3 ((*(volatile Ifx_SRC_SRCR*)0xF0039DACu)) /* lint --e(923)*/

/** Alias for SRC_GTM_ATOM3_0.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM3_0 instead.
 * 1DB0, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM30 (SRC_GTM_ATOM3_0)

/** Alias for SRC_GTM_ATOM3_1.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM3_1 instead.
 * 1DB4, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM31 (SRC_GTM_ATOM3_1)

/** Alias for SRC_GTM_ATOM3_2.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM3_2 instead.
 * 1DB8, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM32 (SRC_GTM_ATOM3_2)

/** Alias for SRC_GTM_ATOM3_3.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM3_3 instead.
 * 1DBC, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM33 (SRC_GTM_ATOM3_3)

/** 1DB0, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM3_0 ((*(volatile Ifx_SRC_SRCR*)0xF0039DB0u)) /* lint --e(923)*/

/** 1DB4, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM3_1 ((*(volatile Ifx_SRC_SRCR*)0xF0039DB4u)) /* lint --e(923)*/

/** 1DB8, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM3_2 ((*(volatile Ifx_SRC_SRCR*)0xF0039DB8u)) /* lint --e(923)*/

/** 1DBC, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM3_3 ((*(volatile Ifx_SRC_SRCR*)0xF0039DBCu)) /* lint --e(923)*/

/** Alias for SRC_GTM_ATOM4_0.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM4_0 instead.
 * 1DC0, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM40 (SRC_GTM_ATOM4_0)

/** Alias for SRC_GTM_ATOM4_1.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM4_1 instead.
 * 1DC4, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM41 (SRC_GTM_ATOM4_1)

/** Alias for SRC_GTM_ATOM4_2.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM4_2 instead.
 * 1DC8, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM42 (SRC_GTM_ATOM4_2)

/** Alias for SRC_GTM_ATOM4_3.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM4_3 instead.
 * 1DCC, GTM ATOM Shared Service Request
 */
#define SRC_GTM_ATOM43 (SRC_GTM_ATOM4_3)

/** 1DC0, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM4_0 ((*(volatile Ifx_SRC_SRCR*)0xF0039DC0u)) /* lint --e(923)*/

/** 1DC4, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM4_1 ((*(volatile Ifx_SRC_SRCR*)0xF0039DC4u)) /* lint --e(923)*/

/** 1DC8, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM4_2 ((*(volatile Ifx_SRC_SRCR*)0xF0039DC8u)) /* lint --e(923)*/

/** 1DCC, GTM ATOM Shared Service Request */
#define SRC_GTM_ATOM4_3 ((*(volatile Ifx_SRC_SRCR*)0xF0039DCCu)) /* lint --e(923)*/

/** 1614, GTM BRC Shared Service Request */
#define SRC_GTM_BRCIRQ ((*(volatile Ifx_SRC_SRCR*)0xF0039614u)) /* lint --e(923)*/

/** 1618, GTM CMP Shared Service Request */
#define SRC_GTM_CMPIRQ ((*(volatile Ifx_SRC_SRCR*)0xF0039618u)) /* lint --e(923)*/

/** 16A4, GTM DPLL Service Request */
#define SRC_GTM_DPLL0 ((*(volatile Ifx_SRC_SRCR*)0xF00396A4u)) /* lint --e(923)*/

/** 16A8, GTM DPLL Service Request */
#define SRC_GTM_DPLL1 ((*(volatile Ifx_SRC_SRCR*)0xF00396A8u)) /* lint --e(923)*/

/** 16CC, GTM DPLL Service Request */
#define SRC_GTM_DPLL10 ((*(volatile Ifx_SRC_SRCR*)0xF00396CCu)) /* lint --e(923)*/

/** 16D0, GTM DPLL Service Request */
#define SRC_GTM_DPLL11 ((*(volatile Ifx_SRC_SRCR*)0xF00396D0u)) /* lint --e(923)*/

/** 16D4, GTM DPLL Service Request */
#define SRC_GTM_DPLL12 ((*(volatile Ifx_SRC_SRCR*)0xF00396D4u)) /* lint --e(923)*/

/** 16D8, GTM DPLL Service Request */
#define SRC_GTM_DPLL13 ((*(volatile Ifx_SRC_SRCR*)0xF00396D8u)) /* lint --e(923)*/

/** 16DC, GTM DPLL Service Request */
#define SRC_GTM_DPLL14 ((*(volatile Ifx_SRC_SRCR*)0xF00396DCu)) /* lint --e(923)*/

/** 16E0, GTM DPLL Service Request */
#define SRC_GTM_DPLL15 ((*(volatile Ifx_SRC_SRCR*)0xF00396E0u)) /* lint --e(923)*/

/** 16E4, GTM DPLL Service Request */
#define SRC_GTM_DPLL16 ((*(volatile Ifx_SRC_SRCR*)0xF00396E4u)) /* lint --e(923)*/

/** 16E8, GTM DPLL Service Request */
#define SRC_GTM_DPLL17 ((*(volatile Ifx_SRC_SRCR*)0xF00396E8u)) /* lint --e(923)*/

/** 16EC, GTM DPLL Service Request */
#define SRC_GTM_DPLL18 ((*(volatile Ifx_SRC_SRCR*)0xF00396ECu)) /* lint --e(923)*/

/** 16F0, GTM DPLL Service Request */
#define SRC_GTM_DPLL19 ((*(volatile Ifx_SRC_SRCR*)0xF00396F0u)) /* lint --e(923)*/

/** 16AC, GTM DPLL Service Request */
#define SRC_GTM_DPLL2 ((*(volatile Ifx_SRC_SRCR*)0xF00396ACu)) /* lint --e(923)*/

/** 16F4, GTM DPLL Service Request */
#define SRC_GTM_DPLL20 ((*(volatile Ifx_SRC_SRCR*)0xF00396F4u)) /* lint --e(923)*/

/** 16F8, GTM DPLL Service Request */
#define SRC_GTM_DPLL21 ((*(volatile Ifx_SRC_SRCR*)0xF00396F8u)) /* lint --e(923)*/

/** 16FC, GTM DPLL Service Request */
#define SRC_GTM_DPLL22 ((*(volatile Ifx_SRC_SRCR*)0xF00396FCu)) /* lint --e(923)*/

/** 1700, GTM DPLL Service Request */
#define SRC_GTM_DPLL23 ((*(volatile Ifx_SRC_SRCR*)0xF0039700u)) /* lint --e(923)*/

/** 1704, GTM DPLL Service Request */
#define SRC_GTM_DPLL24 ((*(volatile Ifx_SRC_SRCR*)0xF0039704u)) /* lint --e(923)*/

/** 1708, GTM DPLL Service Request */
#define SRC_GTM_DPLL25 ((*(volatile Ifx_SRC_SRCR*)0xF0039708u)) /* lint --e(923)*/

/** 170C, GTM DPLL Service Request */
#define SRC_GTM_DPLL26 ((*(volatile Ifx_SRC_SRCR*)0xF003970Cu)) /* lint --e(923)*/

/** 16B0, GTM DPLL Service Request */
#define SRC_GTM_DPLL3 ((*(volatile Ifx_SRC_SRCR*)0xF00396B0u)) /* lint --e(923)*/

/** 16B4, GTM DPLL Service Request */
#define SRC_GTM_DPLL4 ((*(volatile Ifx_SRC_SRCR*)0xF00396B4u)) /* lint --e(923)*/

/** 16B8, GTM DPLL Service Request */
#define SRC_GTM_DPLL5 ((*(volatile Ifx_SRC_SRCR*)0xF00396B8u)) /* lint --e(923)*/

/** 16BC, GTM DPLL Service Request */
#define SRC_GTM_DPLL6 ((*(volatile Ifx_SRC_SRCR*)0xF00396BCu)) /* lint --e(923)*/

/** 16C0, GTM DPLL Service Request */
#define SRC_GTM_DPLL7 ((*(volatile Ifx_SRC_SRCR*)0xF00396C0u)) /* lint --e(923)*/

/** 16C4, GTM DPLL Service Request */
#define SRC_GTM_DPLL8 ((*(volatile Ifx_SRC_SRCR*)0xF00396C4u)) /* lint --e(923)*/

/** 16C8, GTM DPLL Service Request */
#define SRC_GTM_DPLL9 ((*(volatile Ifx_SRC_SRCR*)0xF00396C8u)) /* lint --e(923)*/

/** Alias for SRC_GTM_MCS0_0.
 *  Note that this definition is obsolete, use SRC_GTM_MCS0_0 instead.
 * 1980, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS00 (SRC_GTM_MCS0_0)

/** Alias for SRC_GTM_MCS0_1.
 *  Note that this definition is obsolete, use SRC_GTM_MCS0_1 instead.
 * 1984, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS01 (SRC_GTM_MCS0_1)

/** Alias for SRC_GTM_MCS0_2.
 *  Note that this definition is obsolete, use SRC_GTM_MCS0_2 instead.
 * 1988, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS02 (SRC_GTM_MCS0_2)

/** Alias for SRC_GTM_MCS0_3.
 *  Note that this definition is obsolete, use SRC_GTM_MCS0_3 instead.
 * 198C, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS03 (SRC_GTM_MCS0_3)

/** Alias for SRC_GTM_MCS0_4.
 *  Note that this definition is obsolete, use SRC_GTM_MCS0_4 instead.
 * 1990, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS04 (SRC_GTM_MCS0_4)

/** Alias for SRC_GTM_MCS0_5.
 *  Note that this definition is obsolete, use SRC_GTM_MCS0_5 instead.
 * 1994, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS05 (SRC_GTM_MCS0_5)

/** Alias for SRC_GTM_MCS0_6.
 *  Note that this definition is obsolete, use SRC_GTM_MCS0_6 instead.
 * 1998, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS06 (SRC_GTM_MCS0_6)

/** Alias for SRC_GTM_MCS0_7.
 *  Note that this definition is obsolete, use SRC_GTM_MCS0_7 instead.
 * 199C, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS07 (SRC_GTM_MCS0_7)

/** 1980, GTM MCS Shared Service Request */
#define SRC_GTM_MCS0_0 ((*(volatile Ifx_SRC_SRCR*)0xF0039980u)) /* lint --e(923)*/

/** 1984, GTM MCS Shared Service Request */
#define SRC_GTM_MCS0_1 ((*(volatile Ifx_SRC_SRCR*)0xF0039984u)) /* lint --e(923)*/

/** 1988, GTM MCS Shared Service Request */
#define SRC_GTM_MCS0_2 ((*(volatile Ifx_SRC_SRCR*)0xF0039988u)) /* lint --e(923)*/

/** 198C, GTM MCS Shared Service Request */
#define SRC_GTM_MCS0_3 ((*(volatile Ifx_SRC_SRCR*)0xF003998Cu)) /* lint --e(923)*/

/** 1990, GTM MCS Shared Service Request */
#define SRC_GTM_MCS0_4 ((*(volatile Ifx_SRC_SRCR*)0xF0039990u)) /* lint --e(923)*/

/** 1994, GTM MCS Shared Service Request */
#define SRC_GTM_MCS0_5 ((*(volatile Ifx_SRC_SRCR*)0xF0039994u)) /* lint --e(923)*/

/** 1998, GTM MCS Shared Service Request */
#define SRC_GTM_MCS0_6 ((*(volatile Ifx_SRC_SRCR*)0xF0039998u)) /* lint --e(923)*/

/** 199C, GTM MCS Shared Service Request */
#define SRC_GTM_MCS0_7 ((*(volatile Ifx_SRC_SRCR*)0xF003999Cu)) /* lint --e(923)*/

/** Alias for SRC_GTM_MCS1_0.
 *  Note that this definition is obsolete, use SRC_GTM_MCS1_0 instead.
 * 19A0, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS10 (SRC_GTM_MCS1_0)

/** Alias for SRC_GTM_MCS1_1.
 *  Note that this definition is obsolete, use SRC_GTM_MCS1_1 instead.
 * 19A4, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS11 (SRC_GTM_MCS1_1)

/** Alias for SRC_GTM_MCS1_2.
 *  Note that this definition is obsolete, use SRC_GTM_MCS1_2 instead.
 * 19A8, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS12 (SRC_GTM_MCS1_2)

/** Alias for SRC_GTM_MCS1_3.
 *  Note that this definition is obsolete, use SRC_GTM_MCS1_3 instead.
 * 19AC, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS13 (SRC_GTM_MCS1_3)

/** Alias for SRC_GTM_MCS1_4.
 *  Note that this definition is obsolete, use SRC_GTM_MCS1_4 instead.
 * 19B0, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS14 (SRC_GTM_MCS1_4)

/** Alias for SRC_GTM_MCS1_5.
 *  Note that this definition is obsolete, use SRC_GTM_MCS1_5 instead.
 * 19B4, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS15 (SRC_GTM_MCS1_5)

/** Alias for SRC_GTM_MCS1_6.
 *  Note that this definition is obsolete, use SRC_GTM_MCS1_6 instead.
 * 19B8, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS16 (SRC_GTM_MCS1_6)

/** Alias for SRC_GTM_MCS1_7.
 *  Note that this definition is obsolete, use SRC_GTM_MCS1_7 instead.
 * 19BC, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS17 (SRC_GTM_MCS1_7)

/** 19A0, GTM MCS Shared Service Request */
#define SRC_GTM_MCS1_0 ((*(volatile Ifx_SRC_SRCR*)0xF00399A0u)) /* lint --e(923)*/

/** 19A4, GTM MCS Shared Service Request */
#define SRC_GTM_MCS1_1 ((*(volatile Ifx_SRC_SRCR*)0xF00399A4u)) /* lint --e(923)*/

/** 19A8, GTM MCS Shared Service Request */
#define SRC_GTM_MCS1_2 ((*(volatile Ifx_SRC_SRCR*)0xF00399A8u)) /* lint --e(923)*/

/** 19AC, GTM MCS Shared Service Request */
#define SRC_GTM_MCS1_3 ((*(volatile Ifx_SRC_SRCR*)0xF00399ACu)) /* lint --e(923)*/

/** 19B0, GTM MCS Shared Service Request */
#define SRC_GTM_MCS1_4 ((*(volatile Ifx_SRC_SRCR*)0xF00399B0u)) /* lint --e(923)*/

/** 19B4, GTM MCS Shared Service Request */
#define SRC_GTM_MCS1_5 ((*(volatile Ifx_SRC_SRCR*)0xF00399B4u)) /* lint --e(923)*/

/** 19B8, GTM MCS Shared Service Request */
#define SRC_GTM_MCS1_6 ((*(volatile Ifx_SRC_SRCR*)0xF00399B8u)) /* lint --e(923)*/

/** 19BC, GTM MCS Shared Service Request */
#define SRC_GTM_MCS1_7 ((*(volatile Ifx_SRC_SRCR*)0xF00399BCu)) /* lint --e(923)*/

/** Alias for SRC_GTM_MCS2_0.
 *  Note that this definition is obsolete, use SRC_GTM_MCS2_0 instead.
 * 19C0, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS20 (SRC_GTM_MCS2_0)

/** Alias for SRC_GTM_MCS2_1.
 *  Note that this definition is obsolete, use SRC_GTM_MCS2_1 instead.
 * 19C4, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS21 (SRC_GTM_MCS2_1)

/** Alias for SRC_GTM_MCS2_2.
 *  Note that this definition is obsolete, use SRC_GTM_MCS2_2 instead.
 * 19C8, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS22 (SRC_GTM_MCS2_2)

/** Alias for SRC_GTM_MCS2_3.
 *  Note that this definition is obsolete, use SRC_GTM_MCS2_3 instead.
 * 19CC, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS23 (SRC_GTM_MCS2_3)

/** Alias for SRC_GTM_MCS2_4.
 *  Note that this definition is obsolete, use SRC_GTM_MCS2_4 instead.
 * 19D0, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS24 (SRC_GTM_MCS2_4)

/** Alias for SRC_GTM_MCS2_5.
 *  Note that this definition is obsolete, use SRC_GTM_MCS2_5 instead.
 * 19D4, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS25 (SRC_GTM_MCS2_5)

/** Alias for SRC_GTM_MCS2_6.
 *  Note that this definition is obsolete, use SRC_GTM_MCS2_6 instead.
 * 19D8, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS26 (SRC_GTM_MCS2_6)

/** Alias for SRC_GTM_MCS2_7.
 *  Note that this definition is obsolete, use SRC_GTM_MCS2_7 instead.
 * 19DC, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS27 (SRC_GTM_MCS2_7)

/** 19C0, GTM MCS Shared Service Request */
#define SRC_GTM_MCS2_0 ((*(volatile Ifx_SRC_SRCR*)0xF00399C0u)) /* lint --e(923)*/

/** 19C4, GTM MCS Shared Service Request */
#define SRC_GTM_MCS2_1 ((*(volatile Ifx_SRC_SRCR*)0xF00399C4u)) /* lint --e(923)*/

/** 19C8, GTM MCS Shared Service Request */
#define SRC_GTM_MCS2_2 ((*(volatile Ifx_SRC_SRCR*)0xF00399C8u)) /* lint --e(923)*/

/** 19CC, GTM MCS Shared Service Request */
#define SRC_GTM_MCS2_3 ((*(volatile Ifx_SRC_SRCR*)0xF00399CCu)) /* lint --e(923)*/

/** 19D0, GTM MCS Shared Service Request */
#define SRC_GTM_MCS2_4 ((*(volatile Ifx_SRC_SRCR*)0xF00399D0u)) /* lint --e(923)*/

/** 19D4, GTM MCS Shared Service Request */
#define SRC_GTM_MCS2_5 ((*(volatile Ifx_SRC_SRCR*)0xF00399D4u)) /* lint --e(923)*/

/** 19D8, GTM MCS Shared Service Request */
#define SRC_GTM_MCS2_6 ((*(volatile Ifx_SRC_SRCR*)0xF00399D8u)) /* lint --e(923)*/

/** 19DC, GTM MCS Shared Service Request */
#define SRC_GTM_MCS2_7 ((*(volatile Ifx_SRC_SRCR*)0xF00399DCu)) /* lint --e(923)*/

/** Alias for SRC_GTM_MCS3_0.
 *  Note that this definition is obsolete, use SRC_GTM_MCS3_0 instead.
 * 19E0, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS30 (SRC_GTM_MCS3_0)

/** Alias for SRC_GTM_MCS3_1.
 *  Note that this definition is obsolete, use SRC_GTM_MCS3_1 instead.
 * 19E4, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS31 (SRC_GTM_MCS3_1)

/** Alias for SRC_GTM_MCS3_2.
 *  Note that this definition is obsolete, use SRC_GTM_MCS3_2 instead.
 * 19E8, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS32 (SRC_GTM_MCS3_2)

/** Alias for SRC_GTM_MCS3_3.
 *  Note that this definition is obsolete, use SRC_GTM_MCS3_3 instead.
 * 19EC, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS33 (SRC_GTM_MCS3_3)

/** Alias for SRC_GTM_MCS3_4.
 *  Note that this definition is obsolete, use SRC_GTM_MCS3_4 instead.
 * 19F0, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS34 (SRC_GTM_MCS3_4)

/** Alias for SRC_GTM_MCS3_5.
 *  Note that this definition is obsolete, use SRC_GTM_MCS3_5 instead.
 * 19F4, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS35 (SRC_GTM_MCS3_5)

/** Alias for SRC_GTM_MCS3_6.
 *  Note that this definition is obsolete, use SRC_GTM_MCS3_6 instead.
 * 19F8, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS36 (SRC_GTM_MCS3_6)

/** Alias for SRC_GTM_MCS3_7.
 *  Note that this definition is obsolete, use SRC_GTM_MCS3_7 instead.
 * 19FC, GTM MCS Shared Service Request
 */
#define SRC_GTM_MCS37 (SRC_GTM_MCS3_7)

/** 19E0, GTM MCS Shared Service Request */
#define SRC_GTM_MCS3_0 ((*(volatile Ifx_SRC_SRCR*)0xF00399E0u)) /* lint --e(923)*/

/** 19E4, GTM MCS Shared Service Request */
#define SRC_GTM_MCS3_1 ((*(volatile Ifx_SRC_SRCR*)0xF00399E4u)) /* lint --e(923)*/

/** 19E8, GTM MCS Shared Service Request */
#define SRC_GTM_MCS3_2 ((*(volatile Ifx_SRC_SRCR*)0xF00399E8u)) /* lint --e(923)*/

/** 19EC, GTM MCS Shared Service Request */
#define SRC_GTM_MCS3_3 ((*(volatile Ifx_SRC_SRCR*)0xF00399ECu)) /* lint --e(923)*/

/** 19F0, GTM MCS Shared Service Request */
#define SRC_GTM_MCS3_4 ((*(volatile Ifx_SRC_SRCR*)0xF00399F0u)) /* lint --e(923)*/

/** 19F4, GTM MCS Shared Service Request */
#define SRC_GTM_MCS3_5 ((*(volatile Ifx_SRC_SRCR*)0xF00399F4u)) /* lint --e(923)*/

/** 19F8, GTM MCS Shared Service Request */
#define SRC_GTM_MCS3_6 ((*(volatile Ifx_SRC_SRCR*)0xF00399F8u)) /* lint --e(923)*/

/** 19FC, GTM MCS Shared Service Request */
#define SRC_GTM_MCS3_7 ((*(volatile Ifx_SRC_SRCR*)0xF00399FCu)) /* lint --e(923)*/

/** Alias for SRC_GTM_PSM0_0.
 *  Note that this definition is obsolete, use SRC_GTM_PSM0_0 instead.
 * 1624, GTM PSM Shared Service Request
 */
#define SRC_GTM_PSM00 (SRC_GTM_PSM0_0)

/** Alias for SRC_GTM_PSM0_1.
 *  Note that this definition is obsolete, use SRC_GTM_PSM0_1 instead.
 * 1628, GTM PSM Shared Service Request
 */
#define SRC_GTM_PSM01 (SRC_GTM_PSM0_1)

/** Alias for SRC_GTM_PSM0_2.
 *  Note that this definition is obsolete, use SRC_GTM_PSM0_2 instead.
 * 162C, GTM PSM Shared Service Request
 */
#define SRC_GTM_PSM02 (SRC_GTM_PSM0_2)

/** Alias for SRC_GTM_PSM0_3.
 *  Note that this definition is obsolete, use SRC_GTM_PSM0_3 instead.
 * 1630, GTM PSM Shared Service Request
 */
#define SRC_GTM_PSM03 (SRC_GTM_PSM0_3)

/** Alias for SRC_GTM_PSM0_4.
 *  Note that this definition is obsolete, use SRC_GTM_PSM0_4 instead.
 * 1634, GTM PSM Shared Service Request
 */
#define SRC_GTM_PSM04 (SRC_GTM_PSM0_4)

/** Alias for SRC_GTM_PSM0_5.
 *  Note that this definition is obsolete, use SRC_GTM_PSM0_5 instead.
 * 1638, GTM PSM Shared Service Request
 */
#define SRC_GTM_PSM05 (SRC_GTM_PSM0_5)

/** Alias for SRC_GTM_PSM0_6.
 *  Note that this definition is obsolete, use SRC_GTM_PSM0_6 instead.
 * 163C, GTM PSM Shared Service Request
 */
#define SRC_GTM_PSM06 (SRC_GTM_PSM0_6)

/** Alias for SRC_GTM_PSM0_7.
 *  Note that this definition is obsolete, use SRC_GTM_PSM0_7 instead.
 * 1640, GTM PSM Shared Service Request
 */
#define SRC_GTM_PSM07 (SRC_GTM_PSM0_7)

/** 1624, GTM PSM Shared Service Request */
#define SRC_GTM_PSM0_0 ((*(volatile Ifx_SRC_SRCR*)0xF0039624u)) /* lint --e(923)*/

/** 1628, GTM PSM Shared Service Request */
#define SRC_GTM_PSM0_1 ((*(volatile Ifx_SRC_SRCR*)0xF0039628u)) /* lint --e(923)*/

/** 162C, GTM PSM Shared Service Request */
#define SRC_GTM_PSM0_2 ((*(volatile Ifx_SRC_SRCR*)0xF003962Cu)) /* lint --e(923)*/

/** 1630, GTM PSM Shared Service Request */
#define SRC_GTM_PSM0_3 ((*(volatile Ifx_SRC_SRCR*)0xF0039630u)) /* lint --e(923)*/

/** 1634, GTM PSM Shared Service Request */
#define SRC_GTM_PSM0_4 ((*(volatile Ifx_SRC_SRCR*)0xF0039634u)) /* lint --e(923)*/

/** 1638, GTM PSM Shared Service Request */
#define SRC_GTM_PSM0_5 ((*(volatile Ifx_SRC_SRCR*)0xF0039638u)) /* lint --e(923)*/

/** 163C, GTM PSM Shared Service Request */
#define SRC_GTM_PSM0_6 ((*(volatile Ifx_SRC_SRCR*)0xF003963Cu)) /* lint --e(923)*/

/** 1640, GTM PSM Shared Service Request */
#define SRC_GTM_PSM0_7 ((*(volatile Ifx_SRC_SRCR*)0xF0039640u)) /* lint --e(923)*/

/** 161C, GTM SPE Shared Service Request */
#define SRC_GTM_SPEIRQ0 ((*(volatile Ifx_SRC_SRCR*)0xF003961Cu)) /* lint --e(923)*/

/** 1620, GTM SPE Shared Service Request */
#define SRC_GTM_SPEIRQ1 ((*(volatile Ifx_SRC_SRCR*)0xF0039620u)) /* lint --e(923)*/

/** Alias for SRC_GTM_TIM0_0.
 *  Note that this definition is obsolete, use SRC_GTM_TIM0_0 instead.
 * 1780, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM00 (SRC_GTM_TIM0_0)

/** Alias for SRC_GTM_TIM0_1.
 *  Note that this definition is obsolete, use SRC_GTM_TIM0_1 instead.
 * 1784, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM01 (SRC_GTM_TIM0_1)

/** Alias for SRC_GTM_TIM0_2.
 *  Note that this definition is obsolete, use SRC_GTM_TIM0_2 instead.
 * 1788, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM02 (SRC_GTM_TIM0_2)

/** Alias for SRC_GTM_TIM0_3.
 *  Note that this definition is obsolete, use SRC_GTM_TIM0_3 instead.
 * 178C, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM03 (SRC_GTM_TIM0_3)

/** Alias for SRC_GTM_TIM0_4.
 *  Note that this definition is obsolete, use SRC_GTM_TIM0_4 instead.
 * 1790, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM04 (SRC_GTM_TIM0_4)

/** Alias for SRC_GTM_TIM0_5.
 *  Note that this definition is obsolete, use SRC_GTM_TIM0_5 instead.
 * 1794, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM05 (SRC_GTM_TIM0_5)

/** Alias for SRC_GTM_TIM0_6.
 *  Note that this definition is obsolete, use SRC_GTM_TIM0_6 instead.
 * 1798, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM06 (SRC_GTM_TIM0_6)

/** Alias for SRC_GTM_TIM0_7.
 *  Note that this definition is obsolete, use SRC_GTM_TIM0_7 instead.
 * 179C, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM07 (SRC_GTM_TIM0_7)

/** 1780, GTM TIM Shared Service Request */
#define SRC_GTM_TIM0_0 ((*(volatile Ifx_SRC_SRCR*)0xF0039780u)) /* lint --e(923)*/

/** 1784, GTM TIM Shared Service Request */
#define SRC_GTM_TIM0_1 ((*(volatile Ifx_SRC_SRCR*)0xF0039784u)) /* lint --e(923)*/

/** 1788, GTM TIM Shared Service Request */
#define SRC_GTM_TIM0_2 ((*(volatile Ifx_SRC_SRCR*)0xF0039788u)) /* lint --e(923)*/

/** 178C, GTM TIM Shared Service Request */
#define SRC_GTM_TIM0_3 ((*(volatile Ifx_SRC_SRCR*)0xF003978Cu)) /* lint --e(923)*/

/** 1790, GTM TIM Shared Service Request */
#define SRC_GTM_TIM0_4 ((*(volatile Ifx_SRC_SRCR*)0xF0039790u)) /* lint --e(923)*/

/** 1794, GTM TIM Shared Service Request */
#define SRC_GTM_TIM0_5 ((*(volatile Ifx_SRC_SRCR*)0xF0039794u)) /* lint --e(923)*/

/** 1798, GTM TIM Shared Service Request */
#define SRC_GTM_TIM0_6 ((*(volatile Ifx_SRC_SRCR*)0xF0039798u)) /* lint --e(923)*/

/** 179C, GTM TIM Shared Service Request */
#define SRC_GTM_TIM0_7 ((*(volatile Ifx_SRC_SRCR*)0xF003979Cu)) /* lint --e(923)*/

/** Alias for SRC_GTM_TIM1_0.
 *  Note that this definition is obsolete, use SRC_GTM_TIM1_0 instead.
 * 17A0, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM10 (SRC_GTM_TIM1_0)

/** Alias for SRC_GTM_TIM1_1.
 *  Note that this definition is obsolete, use SRC_GTM_TIM1_1 instead.
 * 17A4, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM11 (SRC_GTM_TIM1_1)

/** Alias for SRC_GTM_TIM1_2.
 *  Note that this definition is obsolete, use SRC_GTM_TIM1_2 instead.
 * 17A8, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM12 (SRC_GTM_TIM1_2)

/** Alias for SRC_GTM_TIM1_3.
 *  Note that this definition is obsolete, use SRC_GTM_TIM1_3 instead.
 * 17AC, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM13 (SRC_GTM_TIM1_3)

/** Alias for SRC_GTM_TIM1_4.
 *  Note that this definition is obsolete, use SRC_GTM_TIM1_4 instead.
 * 17B0, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM14 (SRC_GTM_TIM1_4)

/** Alias for SRC_GTM_TIM1_5.
 *  Note that this definition is obsolete, use SRC_GTM_TIM1_5 instead.
 * 17B4, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM15 (SRC_GTM_TIM1_5)

/** Alias for SRC_GTM_TIM1_6.
 *  Note that this definition is obsolete, use SRC_GTM_TIM1_6 instead.
 * 17B8, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM16 (SRC_GTM_TIM1_6)

/** Alias for SRC_GTM_TIM1_7.
 *  Note that this definition is obsolete, use SRC_GTM_TIM1_7 instead.
 * 17BC, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM17 (SRC_GTM_TIM1_7)

/** 17A0, GTM TIM Shared Service Request */
#define SRC_GTM_TIM1_0 ((*(volatile Ifx_SRC_SRCR*)0xF00397A0u)) /* lint --e(923)*/

/** 17A4, GTM TIM Shared Service Request */
#define SRC_GTM_TIM1_1 ((*(volatile Ifx_SRC_SRCR*)0xF00397A4u)) /* lint --e(923)*/

/** 17A8, GTM TIM Shared Service Request */
#define SRC_GTM_TIM1_2 ((*(volatile Ifx_SRC_SRCR*)0xF00397A8u)) /* lint --e(923)*/

/** 17AC, GTM TIM Shared Service Request */
#define SRC_GTM_TIM1_3 ((*(volatile Ifx_SRC_SRCR*)0xF00397ACu)) /* lint --e(923)*/

/** 17B0, GTM TIM Shared Service Request */
#define SRC_GTM_TIM1_4 ((*(volatile Ifx_SRC_SRCR*)0xF00397B0u)) /* lint --e(923)*/

/** 17B4, GTM TIM Shared Service Request */
#define SRC_GTM_TIM1_5 ((*(volatile Ifx_SRC_SRCR*)0xF00397B4u)) /* lint --e(923)*/

/** 17B8, GTM TIM Shared Service Request */
#define SRC_GTM_TIM1_6 ((*(volatile Ifx_SRC_SRCR*)0xF00397B8u)) /* lint --e(923)*/

/** 17BC, GTM TIM Shared Service Request */
#define SRC_GTM_TIM1_7 ((*(volatile Ifx_SRC_SRCR*)0xF00397BCu)) /* lint --e(923)*/

/** Alias for SRC_GTM_TIM2_0.
 *  Note that this definition is obsolete, use SRC_GTM_TIM2_0 instead.
 * 17C0, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM20 (SRC_GTM_TIM2_0)

/** Alias for SRC_GTM_TIM2_1.
 *  Note that this definition is obsolete, use SRC_GTM_TIM2_1 instead.
 * 17C4, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM21 (SRC_GTM_TIM2_1)

/** Alias for SRC_GTM_TIM2_2.
 *  Note that this definition is obsolete, use SRC_GTM_TIM2_2 instead.
 * 17C8, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM22 (SRC_GTM_TIM2_2)

/** Alias for SRC_GTM_TIM2_3.
 *  Note that this definition is obsolete, use SRC_GTM_TIM2_3 instead.
 * 17CC, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM23 (SRC_GTM_TIM2_3)

/** Alias for SRC_GTM_TIM2_4.
 *  Note that this definition is obsolete, use SRC_GTM_TIM2_4 instead.
 * 17D0, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM24 (SRC_GTM_TIM2_4)

/** Alias for SRC_GTM_TIM2_5.
 *  Note that this definition is obsolete, use SRC_GTM_TIM2_5 instead.
 * 17D4, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM25 (SRC_GTM_TIM2_5)

/** Alias for SRC_GTM_TIM2_6.
 *  Note that this definition is obsolete, use SRC_GTM_TIM2_6 instead.
 * 17D8, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM26 (SRC_GTM_TIM2_6)

/** Alias for SRC_GTM_TIM2_7.
 *  Note that this definition is obsolete, use SRC_GTM_TIM2_7 instead.
 * 17DC, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM27 (SRC_GTM_TIM2_7)

/** 17C0, GTM TIM Shared Service Request */
#define SRC_GTM_TIM2_0 ((*(volatile Ifx_SRC_SRCR*)0xF00397C0u)) /* lint --e(923)*/

/** 17C4, GTM TIM Shared Service Request */
#define SRC_GTM_TIM2_1 ((*(volatile Ifx_SRC_SRCR*)0xF00397C4u)) /* lint --e(923)*/

/** 17C8, GTM TIM Shared Service Request */
#define SRC_GTM_TIM2_2 ((*(volatile Ifx_SRC_SRCR*)0xF00397C8u)) /* lint --e(923)*/

/** 17CC, GTM TIM Shared Service Request */
#define SRC_GTM_TIM2_3 ((*(volatile Ifx_SRC_SRCR*)0xF00397CCu)) /* lint --e(923)*/

/** 17D0, GTM TIM Shared Service Request */
#define SRC_GTM_TIM2_4 ((*(volatile Ifx_SRC_SRCR*)0xF00397D0u)) /* lint --e(923)*/

/** 17D4, GTM TIM Shared Service Request */
#define SRC_GTM_TIM2_5 ((*(volatile Ifx_SRC_SRCR*)0xF00397D4u)) /* lint --e(923)*/

/** 17D8, GTM TIM Shared Service Request */
#define SRC_GTM_TIM2_6 ((*(volatile Ifx_SRC_SRCR*)0xF00397D8u)) /* lint --e(923)*/

/** 17DC, GTM TIM Shared Service Request */
#define SRC_GTM_TIM2_7 ((*(volatile Ifx_SRC_SRCR*)0xF00397DCu)) /* lint --e(923)*/

/** Alias for SRC_GTM_TIM3_0.
 *  Note that this definition is obsolete, use SRC_GTM_TIM3_0 instead.
 * 17E0, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM30 (SRC_GTM_TIM3_0)

/** Alias for SRC_GTM_TIM3_1.
 *  Note that this definition is obsolete, use SRC_GTM_TIM3_1 instead.
 * 17E4, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM31 (SRC_GTM_TIM3_1)

/** Alias for SRC_GTM_TIM3_2.
 *  Note that this definition is obsolete, use SRC_GTM_TIM3_2 instead.
 * 17E8, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM32 (SRC_GTM_TIM3_2)

/** Alias for SRC_GTM_TIM3_3.
 *  Note that this definition is obsolete, use SRC_GTM_TIM3_3 instead.
 * 17EC, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM33 (SRC_GTM_TIM3_3)

/** Alias for SRC_GTM_TIM3_4.
 *  Note that this definition is obsolete, use SRC_GTM_TIM3_4 instead.
 * 17F0, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM34 (SRC_GTM_TIM3_4)

/** Alias for SRC_GTM_TIM3_5.
 *  Note that this definition is obsolete, use SRC_GTM_TIM3_5 instead.
 * 17F4, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM35 (SRC_GTM_TIM3_5)

/** Alias for SRC_GTM_TIM3_6.
 *  Note that this definition is obsolete, use SRC_GTM_TIM3_6 instead.
 * 17F8, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM36 (SRC_GTM_TIM3_6)

/** Alias for SRC_GTM_TIM3_7.
 *  Note that this definition is obsolete, use SRC_GTM_TIM3_7 instead.
 * 17FC, GTM TIM Shared Service Request
 */
#define SRC_GTM_TIM37 (SRC_GTM_TIM3_7)

/** 17E0, GTM TIM Shared Service Request */
#define SRC_GTM_TIM3_0 ((*(volatile Ifx_SRC_SRCR*)0xF00397E0u)) /* lint --e(923)*/

/** 17E4, GTM TIM Shared Service Request */
#define SRC_GTM_TIM3_1 ((*(volatile Ifx_SRC_SRCR*)0xF00397E4u)) /* lint --e(923)*/

/** 17E8, GTM TIM Shared Service Request */
#define SRC_GTM_TIM3_2 ((*(volatile Ifx_SRC_SRCR*)0xF00397E8u)) /* lint --e(923)*/

/** 17EC, GTM TIM Shared Service Request */
#define SRC_GTM_TIM3_3 ((*(volatile Ifx_SRC_SRCR*)0xF00397ECu)) /* lint --e(923)*/

/** 17F0, GTM TIM Shared Service Request */
#define SRC_GTM_TIM3_4 ((*(volatile Ifx_SRC_SRCR*)0xF00397F0u)) /* lint --e(923)*/

/** 17F4, GTM TIM Shared Service Request */
#define SRC_GTM_TIM3_5 ((*(volatile Ifx_SRC_SRCR*)0xF00397F4u)) /* lint --e(923)*/

/** 17F8, GTM TIM Shared Service Request */
#define SRC_GTM_TIM3_6 ((*(volatile Ifx_SRC_SRCR*)0xF00397F8u)) /* lint --e(923)*/

/** 17FC, GTM TIM Shared Service Request */
#define SRC_GTM_TIM3_7 ((*(volatile Ifx_SRC_SRCR*)0xF00397FCu)) /* lint --e(923)*/

/** Alias for SRC_GTM_TOM0_0.
 *  Note that this definition is obsolete, use SRC_GTM_TOM0_0 instead.
 * 1B80, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM00 (SRC_GTM_TOM0_0)

/** Alias for SRC_GTM_TOM0_1.
 *  Note that this definition is obsolete, use SRC_GTM_TOM0_1 instead.
 * 1B84, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM01 (SRC_GTM_TOM0_1)

/** Alias for SRC_GTM_TOM0_2.
 *  Note that this definition is obsolete, use SRC_GTM_TOM0_2 instead.
 * 1B88, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM02 (SRC_GTM_TOM0_2)

/** Alias for SRC_GTM_TOM0_3.
 *  Note that this definition is obsolete, use SRC_GTM_TOM0_3 instead.
 * 1B8C, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM03 (SRC_GTM_TOM0_3)

/** Alias for SRC_GTM_TOM0_4.
 *  Note that this definition is obsolete, use SRC_GTM_TOM0_4 instead.
 * 1B90, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM04 (SRC_GTM_TOM0_4)

/** Alias for SRC_GTM_TOM0_5.
 *  Note that this definition is obsolete, use SRC_GTM_TOM0_5 instead.
 * 1B94, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM05 (SRC_GTM_TOM0_5)

/** Alias for SRC_GTM_TOM0_6.
 *  Note that this definition is obsolete, use SRC_GTM_TOM0_6 instead.
 * 1B98, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM06 (SRC_GTM_TOM0_6)

/** Alias for SRC_GTM_TOM0_7.
 *  Note that this definition is obsolete, use SRC_GTM_TOM0_7 instead.
 * 1B9C, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM07 (SRC_GTM_TOM0_7)

/** 1B80, GTM TOM Shared Service Request */
#define SRC_GTM_TOM0_0 ((*(volatile Ifx_SRC_SRCR*)0xF0039B80u)) /* lint --e(923)*/

/** 1B84, GTM TOM Shared Service Request */
#define SRC_GTM_TOM0_1 ((*(volatile Ifx_SRC_SRCR*)0xF0039B84u)) /* lint --e(923)*/

/** 1B88, GTM TOM Shared Service Request */
#define SRC_GTM_TOM0_2 ((*(volatile Ifx_SRC_SRCR*)0xF0039B88u)) /* lint --e(923)*/

/** 1B8C, GTM TOM Shared Service Request */
#define SRC_GTM_TOM0_3 ((*(volatile Ifx_SRC_SRCR*)0xF0039B8Cu)) /* lint --e(923)*/

/** 1B90, GTM TOM Shared Service Request */
#define SRC_GTM_TOM0_4 ((*(volatile Ifx_SRC_SRCR*)0xF0039B90u)) /* lint --e(923)*/

/** 1B94, GTM TOM Shared Service Request */
#define SRC_GTM_TOM0_5 ((*(volatile Ifx_SRC_SRCR*)0xF0039B94u)) /* lint --e(923)*/

/** 1B98, GTM TOM Shared Service Request */
#define SRC_GTM_TOM0_6 ((*(volatile Ifx_SRC_SRCR*)0xF0039B98u)) /* lint --e(923)*/

/** 1B9C, GTM TOM Shared Service Request */
#define SRC_GTM_TOM0_7 ((*(volatile Ifx_SRC_SRCR*)0xF0039B9Cu)) /* lint --e(923)*/

/** Alias for SRC_GTM_TOM1_0.
 *  Note that this definition is obsolete, use SRC_GTM_TOM1_0 instead.
 * 1BA0, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM10 (SRC_GTM_TOM1_0)

/** Alias for SRC_GTM_TOM1_1.
 *  Note that this definition is obsolete, use SRC_GTM_TOM1_1 instead.
 * 1BA4, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM11 (SRC_GTM_TOM1_1)

/** Alias for SRC_GTM_TOM1_2.
 *  Note that this definition is obsolete, use SRC_GTM_TOM1_2 instead.
 * 1BA8, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM12 (SRC_GTM_TOM1_2)

/** Alias for SRC_GTM_TOM1_3.
 *  Note that this definition is obsolete, use SRC_GTM_TOM1_3 instead.
 * 1BAC, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM13 (SRC_GTM_TOM1_3)

/** Alias for SRC_GTM_TOM1_4.
 *  Note that this definition is obsolete, use SRC_GTM_TOM1_4 instead.
 * 1BB0, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM14 (SRC_GTM_TOM1_4)

/** Alias for SRC_GTM_TOM1_5.
 *  Note that this definition is obsolete, use SRC_GTM_TOM1_5 instead.
 * 1BB4, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM15 (SRC_GTM_TOM1_5)

/** Alias for SRC_GTM_TOM1_6.
 *  Note that this definition is obsolete, use SRC_GTM_TOM1_6 instead.
 * 1BB8, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM16 (SRC_GTM_TOM1_6)

/** Alias for SRC_GTM_TOM1_7.
 *  Note that this definition is obsolete, use SRC_GTM_TOM1_7 instead.
 * 1BBC, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM17 (SRC_GTM_TOM1_7)

/** 1BA0, GTM TOM Shared Service Request */
#define SRC_GTM_TOM1_0 ((*(volatile Ifx_SRC_SRCR*)0xF0039BA0u)) /* lint --e(923)*/

/** 1BA4, GTM TOM Shared Service Request */
#define SRC_GTM_TOM1_1 ((*(volatile Ifx_SRC_SRCR*)0xF0039BA4u)) /* lint --e(923)*/

/** 1BA8, GTM TOM Shared Service Request */
#define SRC_GTM_TOM1_2 ((*(volatile Ifx_SRC_SRCR*)0xF0039BA8u)) /* lint --e(923)*/

/** 1BAC, GTM TOM Shared Service Request */
#define SRC_GTM_TOM1_3 ((*(volatile Ifx_SRC_SRCR*)0xF0039BACu)) /* lint --e(923)*/

/** 1BB0, GTM TOM Shared Service Request */
#define SRC_GTM_TOM1_4 ((*(volatile Ifx_SRC_SRCR*)0xF0039BB0u)) /* lint --e(923)*/

/** 1BB4, GTM TOM Shared Service Request */
#define SRC_GTM_TOM1_5 ((*(volatile Ifx_SRC_SRCR*)0xF0039BB4u)) /* lint --e(923)*/

/** 1BB8, GTM TOM Shared Service Request */
#define SRC_GTM_TOM1_6 ((*(volatile Ifx_SRC_SRCR*)0xF0039BB8u)) /* lint --e(923)*/

/** 1BBC, GTM TOM Shared Service Request */
#define SRC_GTM_TOM1_7 ((*(volatile Ifx_SRC_SRCR*)0xF0039BBCu)) /* lint --e(923)*/

/** Alias for SRC_GTM_TOM2_0.
 *  Note that this definition is obsolete, use SRC_GTM_TOM2_0 instead.
 * 1BC0, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM20 (SRC_GTM_TOM2_0)

/** Alias for SRC_GTM_TOM2_1.
 *  Note that this definition is obsolete, use SRC_GTM_TOM2_1 instead.
 * 1BC4, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM21 (SRC_GTM_TOM2_1)

/** Alias for SRC_GTM_TOM2_2.
 *  Note that this definition is obsolete, use SRC_GTM_TOM2_2 instead.
 * 1BC8, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM22 (SRC_GTM_TOM2_2)

/** Alias for SRC_GTM_TOM2_3.
 *  Note that this definition is obsolete, use SRC_GTM_TOM2_3 instead.
 * 1BCC, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM23 (SRC_GTM_TOM2_3)

/** Alias for SRC_GTM_TOM2_4.
 *  Note that this definition is obsolete, use SRC_GTM_TOM2_4 instead.
 * 1BD0, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM24 (SRC_GTM_TOM2_4)

/** Alias for SRC_GTM_TOM2_5.
 *  Note that this definition is obsolete, use SRC_GTM_TOM2_5 instead.
 * 1BD4, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM25 (SRC_GTM_TOM2_5)

/** Alias for SRC_GTM_TOM2_6.
 *  Note that this definition is obsolete, use SRC_GTM_TOM2_6 instead.
 * 1BD8, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM26 (SRC_GTM_TOM2_6)

/** Alias for SRC_GTM_TOM2_7.
 *  Note that this definition is obsolete, use SRC_GTM_TOM2_7 instead.
 * 1BDC, GTM TOM Shared Service Request
 */
#define SRC_GTM_TOM27 (SRC_GTM_TOM2_7)

/** 1BC0, GTM TOM Shared Service Request */
#define SRC_GTM_TOM2_0 ((*(volatile Ifx_SRC_SRCR*)0xF0039BC0u)) /* lint --e(923)*/

/** 1BC4, GTM TOM Shared Service Request */
#define SRC_GTM_TOM2_1 ((*(volatile Ifx_SRC_SRCR*)0xF0039BC4u)) /* lint --e(923)*/

/** 1BC8, GTM TOM Shared Service Request */
#define SRC_GTM_TOM2_2 ((*(volatile Ifx_SRC_SRCR*)0xF0039BC8u)) /* lint --e(923)*/

/** 1BCC, GTM TOM Shared Service Request */
#define SRC_GTM_TOM2_3 ((*(volatile Ifx_SRC_SRCR*)0xF0039BCCu)) /* lint --e(923)*/

/** 1BD0, GTM TOM Shared Service Request */
#define SRC_GTM_TOM2_4 ((*(volatile Ifx_SRC_SRCR*)0xF0039BD0u)) /* lint --e(923)*/

/** 1BD4, GTM TOM Shared Service Request */
#define SRC_GTM_TOM2_5 ((*(volatile Ifx_SRC_SRCR*)0xF0039BD4u)) /* lint --e(923)*/

/** 1BD8, GTM TOM Shared Service Request */
#define SRC_GTM_TOM2_6 ((*(volatile Ifx_SRC_SRCR*)0xF0039BD8u)) /* lint --e(923)*/

/** 1BDC, GTM TOM Shared Service Request */
#define SRC_GTM_TOM2_7 ((*(volatile Ifx_SRC_SRCR*)0xF0039BDCu)) /* lint --e(923)*/

/** Alias for SRC_GTM_AEIIRQ.
 *  Note that this definition is obsolete, use SRC_GTM_AEIIRQ instead.
 * 1600, GTM AEI Shared Service Request
 */
#define SRC_GTMAEIIRQ (SRC_GTM_AEIIRQ)

/** Alias for SRC_GTM_ARUIRQ0.
 *  Note that this definition is obsolete, use SRC_GTM_ARUIRQ0 instead.
 * 1604, GTM ARU Shared Service Request
 */
#define SRC_GTMARUIRQ0 (SRC_GTM_ARUIRQ0)

/** Alias for SRC_GTM_ARUIRQ1.
 *  Note that this definition is obsolete, use SRC_GTM_ARUIRQ1 instead.
 * 1608, GTM ARU Shared Service Request
 */
#define SRC_GTMARUIRQ1 (SRC_GTM_ARUIRQ1)

/** Alias for SRC_GTM_ARUIRQ2.
 *  Note that this definition is obsolete, use SRC_GTM_ARUIRQ2 instead.
 * 160C, GTM ARU Shared Service Request
 */
#define SRC_GTMARUIRQ2 (SRC_GTM_ARUIRQ2)

/** Alias for SRC_GTM_ATOM0_0.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM0_0 instead.
 * 1D80, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM0_0 (SRC_GTM_ATOM0_0)

/** Alias for SRC_GTM_ATOM0_1.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM0_1 instead.
 * 1D84, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM0_1 (SRC_GTM_ATOM0_1)

/** Alias for SRC_GTM_ATOM0_2.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM0_2 instead.
 * 1D88, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM0_2 (SRC_GTM_ATOM0_2)

/** Alias for SRC_GTM_ATOM0_3.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM0_3 instead.
 * 1D8C, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM0_3 (SRC_GTM_ATOM0_3)

/** Alias for SRC_GTM_ATOM1_0.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM1_0 instead.
 * 1D90, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM1_0 (SRC_GTM_ATOM1_0)

/** Alias for SRC_GTM_ATOM1_1.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM1_1 instead.
 * 1D94, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM1_1 (SRC_GTM_ATOM1_1)

/** Alias for SRC_GTM_ATOM1_2.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM1_2 instead.
 * 1D98, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM1_2 (SRC_GTM_ATOM1_2)

/** Alias for SRC_GTM_ATOM1_3.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM1_3 instead.
 * 1D9C, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM1_3 (SRC_GTM_ATOM1_3)

/** Alias for SRC_GTM_ATOM2_0.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM2_0 instead.
 * 1DA0, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM2_0 (SRC_GTM_ATOM2_0)

/** Alias for SRC_GTM_ATOM2_1.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM2_1 instead.
 * 1DA4, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM2_1 (SRC_GTM_ATOM2_1)

/** Alias for SRC_GTM_ATOM2_2.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM2_2 instead.
 * 1DA8, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM2_2 (SRC_GTM_ATOM2_2)

/** Alias for SRC_GTM_ATOM2_3.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM2_3 instead.
 * 1DAC, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM2_3 (SRC_GTM_ATOM2_3)

/** Alias for SRC_GTM_ATOM3_0.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM3_0 instead.
 * 1DB0, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM3_0 (SRC_GTM_ATOM3_0)

/** Alias for SRC_GTM_ATOM3_1.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM3_1 instead.
 * 1DB4, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM3_1 (SRC_GTM_ATOM3_1)

/** Alias for SRC_GTM_ATOM3_2.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM3_2 instead.
 * 1DB8, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM3_2 (SRC_GTM_ATOM3_2)

/** Alias for SRC_GTM_ATOM3_3.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM3_3 instead.
 * 1DBC, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM3_3 (SRC_GTM_ATOM3_3)

/** Alias for SRC_GTM_ATOM4_0.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM4_0 instead.
 * 1DC0, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM4_0 (SRC_GTM_ATOM4_0)

/** Alias for SRC_GTM_ATOM4_1.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM4_1 instead.
 * 1DC4, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM4_1 (SRC_GTM_ATOM4_1)

/** Alias for SRC_GTM_ATOM4_2.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM4_2 instead.
 * 1DC8, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM4_2 (SRC_GTM_ATOM4_2)

/** Alias for SRC_GTM_ATOM4_3.
 *  Note that this definition is obsolete, use SRC_GTM_ATOM4_3 instead.
 * 1DCC, GTM ATOM Shared Service Request
 */
#define SRC_GTMATOM4_3 (SRC_GTM_ATOM4_3)

/** Alias for SRC_GTM_BRCIRQ.
 *  Note that this definition is obsolete, use SRC_GTM_BRCIRQ instead.
 * 1614, GTM BRC Shared Service Request
 */
#define SRC_GTMBRCIRQ (SRC_GTM_BRCIRQ)

/** Alias for SRC_GTM_CMPIRQ.
 *  Note that this definition is obsolete, use SRC_GTM_CMPIRQ instead.
 * 1618, GTM CMP Shared Service Request
 */
#define SRC_GTMCMPIRQ (SRC_GTM_CMPIRQ)

/** Alias for SRC_GTM_DPLL0.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL0 instead.
 * 16A4, GTM DPLL Service Request
 */
#define SRC_GTMDPLL0 (SRC_GTM_DPLL0)

/** Alias for SRC_GTM_DPLL1.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL1 instead.
 * 16A8, GTM DPLL Service Request
 */
#define SRC_GTMDPLL1 (SRC_GTM_DPLL1)

/** Alias for SRC_GTM_DPLL10.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL10 instead.
 * 16CC, GTM DPLL Service Request
 */
#define SRC_GTMDPLL10 (SRC_GTM_DPLL10)

/** Alias for SRC_GTM_DPLL11.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL11 instead.
 * 16D0, GTM DPLL Service Request
 */
#define SRC_GTMDPLL11 (SRC_GTM_DPLL11)

/** Alias for SRC_GTM_DPLL12.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL12 instead.
 * 16D4, GTM DPLL Service Request
 */
#define SRC_GTMDPLL12 (SRC_GTM_DPLL12)

/** Alias for SRC_GTM_DPLL13.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL13 instead.
 * 16D8, GTM DPLL Service Request
 */
#define SRC_GTMDPLL13 (SRC_GTM_DPLL13)

/** Alias for SRC_GTM_DPLL14.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL14 instead.
 * 16DC, GTM DPLL Service Request
 */
#define SRC_GTMDPLL14 (SRC_GTM_DPLL14)

/** Alias for SRC_GTM_DPLL15.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL15 instead.
 * 16E0, GTM DPLL Service Request
 */
#define SRC_GTMDPLL15 (SRC_GTM_DPLL15)

/** Alias for SRC_GTM_DPLL16.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL16 instead.
 * 16E4, GTM DPLL Service Request
 */
#define SRC_GTMDPLL16 (SRC_GTM_DPLL16)

/** Alias for SRC_GTM_DPLL17.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL17 instead.
 * 16E8, GTM DPLL Service Request
 */
#define SRC_GTMDPLL17 (SRC_GTM_DPLL17)

/** Alias for SRC_GTM_DPLL18.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL18 instead.
 * 16EC, GTM DPLL Service Request
 */
#define SRC_GTMDPLL18 (SRC_GTM_DPLL18)

/** Alias for SRC_GTM_DPLL19.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL19 instead.
 * 16F0, GTM DPLL Service Request
 */
#define SRC_GTMDPLL19 (SRC_GTM_DPLL19)

/** Alias for SRC_GTM_DPLL2.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL2 instead.
 * 16AC, GTM DPLL Service Request
 */
#define SRC_GTMDPLL2 (SRC_GTM_DPLL2)

/** Alias for SRC_GTM_DPLL20.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL20 instead.
 * 16F4, GTM DPLL Service Request
 */
#define SRC_GTMDPLL20 (SRC_GTM_DPLL20)

/** Alias for SRC_GTM_DPLL21.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL21 instead.
 * 16F8, GTM DPLL Service Request
 */
#define SRC_GTMDPLL21 (SRC_GTM_DPLL21)

/** Alias for SRC_GTM_DPLL22.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL22 instead.
 * 16FC, GTM DPLL Service Request
 */
#define SRC_GTMDPLL22 (SRC_GTM_DPLL22)

/** Alias for SRC_GTM_DPLL23.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL23 instead.
 * 1700, GTM DPLL Service Request
 */
#define SRC_GTMDPLL23 (SRC_GTM_DPLL23)

/** Alias for SRC_GTM_DPLL24.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL24 instead.
 * 1704, GTM DPLL Service Request
 */
#define SRC_GTMDPLL24 (SRC_GTM_DPLL24)

/** Alias for SRC_GTM_DPLL25.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL25 instead.
 * 1708, GTM DPLL Service Request
 */
#define SRC_GTMDPLL25 (SRC_GTM_DPLL25)

/** Alias for SRC_GTM_DPLL26.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL26 instead.
 * 170C, GTM DPLL Service Request
 */
#define SRC_GTMDPLL26 (SRC_GTM_DPLL26)

/** Alias for SRC_GTM_DPLL3.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL3 instead.
 * 16B0, GTM DPLL Service Request
 */
#define SRC_GTMDPLL3 (SRC_GTM_DPLL3)

/** Alias for SRC_GTM_DPLL4.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL4 instead.
 * 16B4, GTM DPLL Service Request
 */
#define SRC_GTMDPLL4 (SRC_GTM_DPLL4)

/** Alias for SRC_GTM_DPLL5.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL5 instead.
 * 16B8, GTM DPLL Service Request
 */
#define SRC_GTMDPLL5 (SRC_GTM_DPLL5)

/** Alias for SRC_GTM_DPLL6.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL6 instead.
 * 16BC, GTM DPLL Service Request
 */
#define SRC_GTMDPLL6 (SRC_GTM_DPLL6)

/** Alias for SRC_GTM_DPLL7.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL7 instead.
 * 16C0, GTM DPLL Service Request
 */
#define SRC_GTMDPLL7 (SRC_GTM_DPLL7)

/** Alias for SRC_GTM_DPLL8.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL8 instead.
 * 16C4, GTM DPLL Service Request
 */
#define SRC_GTMDPLL8 (SRC_GTM_DPLL8)

/** Alias for SRC_GTM_DPLL9.
 *  Note that this definition is obsolete, use SRC_GTM_DPLL9 instead.
 * 16C8, GTM DPLL Service Request
 */
#define SRC_GTMDPLL9 (SRC_GTM_DPLL9)

/** Alias for SRC_GTM_MCS0_0.
 *  Note that this definition is obsolete, use SRC_GTM_MCS0_0 instead.
 * 1980, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS0_0 (SRC_GTM_MCS0_0)

/** Alias for SRC_GTM_MCS0_1.
 *  Note that this definition is obsolete, use SRC_GTM_MCS0_1 instead.
 * 1984, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS0_1 (SRC_GTM_MCS0_1)

/** Alias for SRC_GTM_MCS0_2.
 *  Note that this definition is obsolete, use SRC_GTM_MCS0_2 instead.
 * 1988, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS0_2 (SRC_GTM_MCS0_2)

/** Alias for SRC_GTM_MCS0_3.
 *  Note that this definition is obsolete, use SRC_GTM_MCS0_3 instead.
 * 198C, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS0_3 (SRC_GTM_MCS0_3)

/** Alias for SRC_GTM_MCS0_4.
 *  Note that this definition is obsolete, use SRC_GTM_MCS0_4 instead.
 * 1990, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS0_4 (SRC_GTM_MCS0_4)

/** Alias for SRC_GTM_MCS0_5.
 *  Note that this definition is obsolete, use SRC_GTM_MCS0_5 instead.
 * 1994, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS0_5 (SRC_GTM_MCS0_5)

/** Alias for SRC_GTM_MCS0_6.
 *  Note that this definition is obsolete, use SRC_GTM_MCS0_6 instead.
 * 1998, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS0_6 (SRC_GTM_MCS0_6)

/** Alias for SRC_GTM_MCS0_7.
 *  Note that this definition is obsolete, use SRC_GTM_MCS0_7 instead.
 * 199C, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS0_7 (SRC_GTM_MCS0_7)

/** Alias for SRC_GTM_MCS1_0.
 *  Note that this definition is obsolete, use SRC_GTM_MCS1_0 instead.
 * 19A0, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS1_0 (SRC_GTM_MCS1_0)

/** Alias for SRC_GTM_MCS1_1.
 *  Note that this definition is obsolete, use SRC_GTM_MCS1_1 instead.
 * 19A4, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS1_1 (SRC_GTM_MCS1_1)

/** Alias for SRC_GTM_MCS1_2.
 *  Note that this definition is obsolete, use SRC_GTM_MCS1_2 instead.
 * 19A8, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS1_2 (SRC_GTM_MCS1_2)

/** Alias for SRC_GTM_MCS1_3.
 *  Note that this definition is obsolete, use SRC_GTM_MCS1_3 instead.
 * 19AC, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS1_3 (SRC_GTM_MCS1_3)

/** Alias for SRC_GTM_MCS1_4.
 *  Note that this definition is obsolete, use SRC_GTM_MCS1_4 instead.
 * 19B0, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS1_4 (SRC_GTM_MCS1_4)

/** Alias for SRC_GTM_MCS1_5.
 *  Note that this definition is obsolete, use SRC_GTM_MCS1_5 instead.
 * 19B4, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS1_5 (SRC_GTM_MCS1_5)

/** Alias for SRC_GTM_MCS1_6.
 *  Note that this definition is obsolete, use SRC_GTM_MCS1_6 instead.
 * 19B8, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS1_6 (SRC_GTM_MCS1_6)

/** Alias for SRC_GTM_MCS1_7.
 *  Note that this definition is obsolete, use SRC_GTM_MCS1_7 instead.
 * 19BC, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS1_7 (SRC_GTM_MCS1_7)

/** Alias for SRC_GTM_MCS2_0.
 *  Note that this definition is obsolete, use SRC_GTM_MCS2_0 instead.
 * 19C0, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS2_0 (SRC_GTM_MCS2_0)

/** Alias for SRC_GTM_MCS2_1.
 *  Note that this definition is obsolete, use SRC_GTM_MCS2_1 instead.
 * 19C4, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS2_1 (SRC_GTM_MCS2_1)

/** Alias for SRC_GTM_MCS2_2.
 *  Note that this definition is obsolete, use SRC_GTM_MCS2_2 instead.
 * 19C8, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS2_2 (SRC_GTM_MCS2_2)

/** Alias for SRC_GTM_MCS2_3.
 *  Note that this definition is obsolete, use SRC_GTM_MCS2_3 instead.
 * 19CC, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS2_3 (SRC_GTM_MCS2_3)

/** Alias for SRC_GTM_MCS2_4.
 *  Note that this definition is obsolete, use SRC_GTM_MCS2_4 instead.
 * 19D0, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS2_4 (SRC_GTM_MCS2_4)

/** Alias for SRC_GTM_MCS2_5.
 *  Note that this definition is obsolete, use SRC_GTM_MCS2_5 instead.
 * 19D4, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS2_5 (SRC_GTM_MCS2_5)

/** Alias for SRC_GTM_MCS2_6.
 *  Note that this definition is obsolete, use SRC_GTM_MCS2_6 instead.
 * 19D8, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS2_6 (SRC_GTM_MCS2_6)

/** Alias for SRC_GTM_MCS2_7.
 *  Note that this definition is obsolete, use SRC_GTM_MCS2_7 instead.
 * 19DC, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS2_7 (SRC_GTM_MCS2_7)

/** Alias for SRC_GTM_MCS3_0.
 *  Note that this definition is obsolete, use SRC_GTM_MCS3_0 instead.
 * 19E0, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS3_0 (SRC_GTM_MCS3_0)

/** Alias for SRC_GTM_MCS3_1.
 *  Note that this definition is obsolete, use SRC_GTM_MCS3_1 instead.
 * 19E4, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS3_1 (SRC_GTM_MCS3_1)

/** Alias for SRC_GTM_MCS3_2.
 *  Note that this definition is obsolete, use SRC_GTM_MCS3_2 instead.
 * 19E8, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS3_2 (SRC_GTM_MCS3_2)

/** Alias for SRC_GTM_MCS3_3.
 *  Note that this definition is obsolete, use SRC_GTM_MCS3_3 instead.
 * 19EC, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS3_3 (SRC_GTM_MCS3_3)

/** Alias for SRC_GTM_MCS3_4.
 *  Note that this definition is obsolete, use SRC_GTM_MCS3_4 instead.
 * 19F0, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS3_4 (SRC_GTM_MCS3_4)

/** Alias for SRC_GTM_MCS3_5.
 *  Note that this definition is obsolete, use SRC_GTM_MCS3_5 instead.
 * 19F4, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS3_5 (SRC_GTM_MCS3_5)

/** Alias for SRC_GTM_MCS3_6.
 *  Note that this definition is obsolete, use SRC_GTM_MCS3_6 instead.
 * 19F8, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS3_6 (SRC_GTM_MCS3_6)

/** Alias for SRC_GTM_MCS3_7.
 *  Note that this definition is obsolete, use SRC_GTM_MCS3_7 instead.
 * 19FC, GTM MCS Shared Service Request
 */
#define SRC_GTMMCS3_7 (SRC_GTM_MCS3_7)

/** Alias for SRC_GTM_PSM0_0.
 *  Note that this definition is obsolete, use SRC_GTM_PSM0_0 instead.
 * 1624, GTM PSM Shared Service Request
 */
#define SRC_GTMPSM0_0 (SRC_GTM_PSM0_0)

/** Alias for SRC_GTM_PSM0_1.
 *  Note that this definition is obsolete, use SRC_GTM_PSM0_1 instead.
 * 1628, GTM PSM Shared Service Request
 */
#define SRC_GTMPSM0_1 (SRC_GTM_PSM0_1)

/** Alias for SRC_GTM_PSM0_2.
 *  Note that this definition is obsolete, use SRC_GTM_PSM0_2 instead.
 * 162C, GTM PSM Shared Service Request
 */
#define SRC_GTMPSM0_2 (SRC_GTM_PSM0_2)

/** Alias for SRC_GTM_PSM0_3.
 *  Note that this definition is obsolete, use SRC_GTM_PSM0_3 instead.
 * 1630, GTM PSM Shared Service Request
 */
#define SRC_GTMPSM0_3 (SRC_GTM_PSM0_3)

/** Alias for SRC_GTM_PSM0_4.
 *  Note that this definition is obsolete, use SRC_GTM_PSM0_4 instead.
 * 1634, GTM PSM Shared Service Request
 */
#define SRC_GTMPSM0_4 (SRC_GTM_PSM0_4)

/** Alias for SRC_GTM_PSM0_5.
 *  Note that this definition is obsolete, use SRC_GTM_PSM0_5 instead.
 * 1638, GTM PSM Shared Service Request
 */
#define SRC_GTMPSM0_5 (SRC_GTM_PSM0_5)

/** Alias for SRC_GTM_PSM0_6.
 *  Note that this definition is obsolete, use SRC_GTM_PSM0_6 instead.
 * 163C, GTM PSM Shared Service Request
 */
#define SRC_GTMPSM0_6 (SRC_GTM_PSM0_6)

/** Alias for SRC_GTM_PSM0_7.
 *  Note that this definition is obsolete, use SRC_GTM_PSM0_7 instead.
 * 1640, GTM PSM Shared Service Request
 */
#define SRC_GTMPSM0_7 (SRC_GTM_PSM0_7)

/** Alias for SRC_GTM_SPEIRQ0.
 *  Note that this definition is obsolete, use SRC_GTM_SPEIRQ0 instead.
 * 161C, GTM SPE Shared Service Request
 */
#define SRC_GTMSPEIRQ0 (SRC_GTM_SPEIRQ0)

/** Alias for SRC_GTM_SPEIRQ1.
 *  Note that this definition is obsolete, use SRC_GTM_SPEIRQ1 instead.
 * 1620, GTM SPE Shared Service Request
 */
#define SRC_GTMSPEIRQ1 (SRC_GTM_SPEIRQ1)

/** Alias for SRC_GTM_TIM0_0.
 *  Note that this definition is obsolete, use SRC_GTM_TIM0_0 instead.
 * 1780, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM0_0 (SRC_GTM_TIM0_0)

/** Alias for SRC_GTM_TIM0_1.
 *  Note that this definition is obsolete, use SRC_GTM_TIM0_1 instead.
 * 1784, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM0_1 (SRC_GTM_TIM0_1)

/** Alias for SRC_GTM_TIM0_2.
 *  Note that this definition is obsolete, use SRC_GTM_TIM0_2 instead.
 * 1788, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM0_2 (SRC_GTM_TIM0_2)

/** Alias for SRC_GTM_TIM0_3.
 *  Note that this definition is obsolete, use SRC_GTM_TIM0_3 instead.
 * 178C, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM0_3 (SRC_GTM_TIM0_3)

/** Alias for SRC_GTM_TIM0_4.
 *  Note that this definition is obsolete, use SRC_GTM_TIM0_4 instead.
 * 1790, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM0_4 (SRC_GTM_TIM0_4)

/** Alias for SRC_GTM_TIM0_5.
 *  Note that this definition is obsolete, use SRC_GTM_TIM0_5 instead.
 * 1794, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM0_5 (SRC_GTM_TIM0_5)

/** Alias for SRC_GTM_TIM0_6.
 *  Note that this definition is obsolete, use SRC_GTM_TIM0_6 instead.
 * 1798, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM0_6 (SRC_GTM_TIM0_6)

/** Alias for SRC_GTM_TIM0_7.
 *  Note that this definition is obsolete, use SRC_GTM_TIM0_7 instead.
 * 179C, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM0_7 (SRC_GTM_TIM0_7)

/** Alias for SRC_GTM_TIM1_0.
 *  Note that this definition is obsolete, use SRC_GTM_TIM1_0 instead.
 * 17A0, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM1_0 (SRC_GTM_TIM1_0)

/** Alias for SRC_GTM_TIM1_1.
 *  Note that this definition is obsolete, use SRC_GTM_TIM1_1 instead.
 * 17A4, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM1_1 (SRC_GTM_TIM1_1)

/** Alias for SRC_GTM_TIM1_2.
 *  Note that this definition is obsolete, use SRC_GTM_TIM1_2 instead.
 * 17A8, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM1_2 (SRC_GTM_TIM1_2)

/** Alias for SRC_GTM_TIM1_3.
 *  Note that this definition is obsolete, use SRC_GTM_TIM1_3 instead.
 * 17AC, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM1_3 (SRC_GTM_TIM1_3)

/** Alias for SRC_GTM_TIM1_4.
 *  Note that this definition is obsolete, use SRC_GTM_TIM1_4 instead.
 * 17B0, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM1_4 (SRC_GTM_TIM1_4)

/** Alias for SRC_GTM_TIM1_5.
 *  Note that this definition is obsolete, use SRC_GTM_TIM1_5 instead.
 * 17B4, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM1_5 (SRC_GTM_TIM1_5)

/** Alias for SRC_GTM_TIM1_6.
 *  Note that this definition is obsolete, use SRC_GTM_TIM1_6 instead.
 * 17B8, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM1_6 (SRC_GTM_TIM1_6)

/** Alias for SRC_GTM_TIM1_7.
 *  Note that this definition is obsolete, use SRC_GTM_TIM1_7 instead.
 * 17BC, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM1_7 (SRC_GTM_TIM1_7)

/** Alias for SRC_GTM_TIM2_0.
 *  Note that this definition is obsolete, use SRC_GTM_TIM2_0 instead.
 * 17C0, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM2_0 (SRC_GTM_TIM2_0)

/** Alias for SRC_GTM_TIM2_1.
 *  Note that this definition is obsolete, use SRC_GTM_TIM2_1 instead.
 * 17C4, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM2_1 (SRC_GTM_TIM2_1)

/** Alias for SRC_GTM_TIM2_2.
 *  Note that this definition is obsolete, use SRC_GTM_TIM2_2 instead.
 * 17C8, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM2_2 (SRC_GTM_TIM2_2)

/** Alias for SRC_GTM_TIM2_3.
 *  Note that this definition is obsolete, use SRC_GTM_TIM2_3 instead.
 * 17CC, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM2_3 (SRC_GTM_TIM2_3)

/** Alias for SRC_GTM_TIM2_4.
 *  Note that this definition is obsolete, use SRC_GTM_TIM2_4 instead.
 * 17D0, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM2_4 (SRC_GTM_TIM2_4)

/** Alias for SRC_GTM_TIM2_5.
 *  Note that this definition is obsolete, use SRC_GTM_TIM2_5 instead.
 * 17D4, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM2_5 (SRC_GTM_TIM2_5)

/** Alias for SRC_GTM_TIM2_6.
 *  Note that this definition is obsolete, use SRC_GTM_TIM2_6 instead.
 * 17D8, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM2_6 (SRC_GTM_TIM2_6)

/** Alias for SRC_GTM_TIM2_7.
 *  Note that this definition is obsolete, use SRC_GTM_TIM2_7 instead.
 * 17DC, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM2_7 (SRC_GTM_TIM2_7)

/** Alias for SRC_GTM_TIM3_0.
 *  Note that this definition is obsolete, use SRC_GTM_TIM3_0 instead.
 * 17E0, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM3_0 (SRC_GTM_TIM3_0)

/** Alias for SRC_GTM_TIM3_1.
 *  Note that this definition is obsolete, use SRC_GTM_TIM3_1 instead.
 * 17E4, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM3_1 (SRC_GTM_TIM3_1)

/** Alias for SRC_GTM_TIM3_2.
 *  Note that this definition is obsolete, use SRC_GTM_TIM3_2 instead.
 * 17E8, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM3_2 (SRC_GTM_TIM3_2)

/** Alias for SRC_GTM_TIM3_3.
 *  Note that this definition is obsolete, use SRC_GTM_TIM3_3 instead.
 * 17EC, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM3_3 (SRC_GTM_TIM3_3)

/** Alias for SRC_GTM_TIM3_4.
 *  Note that this definition is obsolete, use SRC_GTM_TIM3_4 instead.
 * 17F0, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM3_4 (SRC_GTM_TIM3_4)

/** Alias for SRC_GTM_TIM3_5.
 *  Note that this definition is obsolete, use SRC_GTM_TIM3_5 instead.
 * 17F4, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM3_5 (SRC_GTM_TIM3_5)

/** Alias for SRC_GTM_TIM3_6.
 *  Note that this definition is obsolete, use SRC_GTM_TIM3_6 instead.
 * 17F8, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM3_6 (SRC_GTM_TIM3_6)

/** Alias for SRC_GTM_TIM3_7.
 *  Note that this definition is obsolete, use SRC_GTM_TIM3_7 instead.
 * 17FC, GTM TIM Shared Service Request
 */
#define SRC_GTMTIM3_7 (SRC_GTM_TIM3_7)

/** Alias for SRC_GTM_TOM0_0.
 *  Note that this definition is obsolete, use SRC_GTM_TOM0_0 instead.
 * 1B80, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM0_0 (SRC_GTM_TOM0_0)

/** Alias for SRC_GTM_TOM0_1.
 *  Note that this definition is obsolete, use SRC_GTM_TOM0_1 instead.
 * 1B84, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM0_1 (SRC_GTM_TOM0_1)

/** Alias for SRC_GTM_TOM0_2.
 *  Note that this definition is obsolete, use SRC_GTM_TOM0_2 instead.
 * 1B88, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM0_2 (SRC_GTM_TOM0_2)

/** Alias for SRC_GTM_TOM0_3.
 *  Note that this definition is obsolete, use SRC_GTM_TOM0_3 instead.
 * 1B8C, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM0_3 (SRC_GTM_TOM0_3)

/** Alias for SRC_GTM_TOM0_4.
 *  Note that this definition is obsolete, use SRC_GTM_TOM0_4 instead.
 * 1B90, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM0_4 (SRC_GTM_TOM0_4)

/** Alias for SRC_GTM_TOM0_5.
 *  Note that this definition is obsolete, use SRC_GTM_TOM0_5 instead.
 * 1B94, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM0_5 (SRC_GTM_TOM0_5)

/** Alias for SRC_GTM_TOM0_6.
 *  Note that this definition is obsolete, use SRC_GTM_TOM0_6 instead.
 * 1B98, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM0_6 (SRC_GTM_TOM0_6)

/** Alias for SRC_GTM_TOM0_7.
 *  Note that this definition is obsolete, use SRC_GTM_TOM0_7 instead.
 * 1B9C, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM0_7 (SRC_GTM_TOM0_7)

/** Alias for SRC_GTM_TOM1_0.
 *  Note that this definition is obsolete, use SRC_GTM_TOM1_0 instead.
 * 1BA0, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM1_0 (SRC_GTM_TOM1_0)

/** Alias for SRC_GTM_TOM1_1.
 *  Note that this definition is obsolete, use SRC_GTM_TOM1_1 instead.
 * 1BA4, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM1_1 (SRC_GTM_TOM1_1)

/** Alias for SRC_GTM_TOM1_2.
 *  Note that this definition is obsolete, use SRC_GTM_TOM1_2 instead.
 * 1BA8, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM1_2 (SRC_GTM_TOM1_2)

/** Alias for SRC_GTM_TOM1_3.
 *  Note that this definition is obsolete, use SRC_GTM_TOM1_3 instead.
 * 1BAC, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM1_3 (SRC_GTM_TOM1_3)

/** Alias for SRC_GTM_TOM1_4.
 *  Note that this definition is obsolete, use SRC_GTM_TOM1_4 instead.
 * 1BB0, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM1_4 (SRC_GTM_TOM1_4)

/** Alias for SRC_GTM_TOM1_5.
 *  Note that this definition is obsolete, use SRC_GTM_TOM1_5 instead.
 * 1BB4, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM1_5 (SRC_GTM_TOM1_5)

/** Alias for SRC_GTM_TOM1_6.
 *  Note that this definition is obsolete, use SRC_GTM_TOM1_6 instead.
 * 1BB8, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM1_6 (SRC_GTM_TOM1_6)

/** Alias for SRC_GTM_TOM1_7.
 *  Note that this definition is obsolete, use SRC_GTM_TOM1_7 instead.
 * 1BBC, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM1_7 (SRC_GTM_TOM1_7)

/** Alias for SRC_GTM_TOM2_0.
 *  Note that this definition is obsolete, use SRC_GTM_TOM2_0 instead.
 * 1BC0, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM2_0 (SRC_GTM_TOM2_0)

/** Alias for SRC_GTM_TOM2_1.
 *  Note that this definition is obsolete, use SRC_GTM_TOM2_1 instead.
 * 1BC4, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM2_1 (SRC_GTM_TOM2_1)

/** Alias for SRC_GTM_TOM2_2.
 *  Note that this definition is obsolete, use SRC_GTM_TOM2_2 instead.
 * 1BC8, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM2_2 (SRC_GTM_TOM2_2)

/** Alias for SRC_GTM_TOM2_3.
 *  Note that this definition is obsolete, use SRC_GTM_TOM2_3 instead.
 * 1BCC, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM2_3 (SRC_GTM_TOM2_3)

/** Alias for SRC_GTM_TOM2_4.
 *  Note that this definition is obsolete, use SRC_GTM_TOM2_4 instead.
 * 1BD0, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM2_4 (SRC_GTM_TOM2_4)

/** Alias for SRC_GTM_TOM2_5.
 *  Note that this definition is obsolete, use SRC_GTM_TOM2_5 instead.
 * 1BD4, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM2_5 (SRC_GTM_TOM2_5)

/** Alias for SRC_GTM_TOM2_6.
 *  Note that this definition is obsolete, use SRC_GTM_TOM2_6 instead.
 * 1BD8, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM2_6 (SRC_GTM_TOM2_6)

/** Alias for SRC_GTM_TOM2_7.
 *  Note that this definition is obsolete, use SRC_GTM_TOM2_7 instead.
 * 1BDC, GTM TOM Shared Service Request
 */
#define SRC_GTMTOM2_7 (SRC_GTM_TOM2_7)

/** 290, HSCT Service Request */
#define SRC_HSCT ((*(volatile Ifx_SRC_SRCR*)0xF0038290u)) /* lint --e(923)*/

/** CC0, HSM Service Request */
#define SRC_HSM0 ((*(volatile Ifx_SRC_SRCR*)0xF0038CC0u)) /* lint --e(923)*/

/** CC4, HSM Service Request */
#define SRC_HSM1 ((*(volatile Ifx_SRC_SRCR*)0xF0038CC4u)) /* lint --e(923)*/

/** 2A0, Channel OK Service Request m */
#define SRC_HSSL0_COK ((*(volatile Ifx_SRC_SRCR*)0xF00382A0u)) /* lint --e(923)*/

/** 2A8, Channel Error ServiceRequest m */
#define SRC_HSSL0_ERR ((*(volatile Ifx_SRC_SRCR*)0xF00382A8u)) /* lint --e(923)*/

/** 2A4, Channel Read Data Service Request m */
#define SRC_HSSL0_RDI ((*(volatile Ifx_SRC_SRCR*)0xF00382A4u)) /* lint --e(923)*/

/** 2AC, Channel Trigger Service Request m */
#define SRC_HSSL0_TRG ((*(volatile Ifx_SRC_SRCR*)0xF00382ACu)) /* lint --e(923)*/

/** 2B0, Channel OK Service Request m */
#define SRC_HSSL1_COK ((*(volatile Ifx_SRC_SRCR*)0xF00382B0u)) /* lint --e(923)*/

/** 2B8, Channel Error ServiceRequest m */
#define SRC_HSSL1_ERR ((*(volatile Ifx_SRC_SRCR*)0xF00382B8u)) /* lint --e(923)*/

/** 2B4, Channel Read Data Service Request m */
#define SRC_HSSL1_RDI ((*(volatile Ifx_SRC_SRCR*)0xF00382B4u)) /* lint --e(923)*/

/** 2BC, Channel Trigger Service Request m */
#define SRC_HSSL1_TRG ((*(volatile Ifx_SRC_SRCR*)0xF00382BCu)) /* lint --e(923)*/

/** 2C0, Channel OK Service Request m */
#define SRC_HSSL2_COK ((*(volatile Ifx_SRC_SRCR*)0xF00382C0u)) /* lint --e(923)*/

/** 2C8, Channel Error ServiceRequest m */
#define SRC_HSSL2_ERR ((*(volatile Ifx_SRC_SRCR*)0xF00382C8u)) /* lint --e(923)*/

/** 2C4, Channel Read Data Service Request m */
#define SRC_HSSL2_RDI ((*(volatile Ifx_SRC_SRCR*)0xF00382C4u)) /* lint --e(923)*/

/** 2CC, Channel Trigger Service Request m */
#define SRC_HSSL2_TRG ((*(volatile Ifx_SRC_SRCR*)0xF00382CCu)) /* lint --e(923)*/

/** Alias for SRC_HSSL0_COK.
 *  Note that this definition is obsolete, use SRC_HSSL0_COK instead.
 * 2A0, Channel OK Service Request m
 */
#define SRC_HSSLCOK0 (SRC_HSSL0_COK)

/** Alias for SRC_HSSL1_COK.
 *  Note that this definition is obsolete, use SRC_HSSL1_COK instead.
 * 2B0, Channel OK Service Request m
 */
#define SRC_HSSLCOK1 (SRC_HSSL1_COK)

/** Alias for SRC_HSSL2_COK.
 *  Note that this definition is obsolete, use SRC_HSSL2_COK instead.
 * 2C0, Channel OK Service Request m
 */
#define SRC_HSSLCOK2 (SRC_HSSL2_COK)

/** Alias for SRC_HSSL0_ERR.
 *  Note that this definition is obsolete, use SRC_HSSL0_ERR instead.
 * 2A8, Channel Error ServiceRequest m
 */
#define SRC_HSSLERR0 (SRC_HSSL0_ERR)

/** Alias for SRC_HSSL1_ERR.
 *  Note that this definition is obsolete, use SRC_HSSL1_ERR instead.
 * 2B8, Channel Error ServiceRequest m
 */
#define SRC_HSSLERR1 (SRC_HSSL1_ERR)

/** Alias for SRC_HSSL2_ERR.
 *  Note that this definition is obsolete, use SRC_HSSL2_ERR instead.
 * 2C8, Channel Error ServiceRequest m
 */
#define SRC_HSSLERR2 (SRC_HSSL2_ERR)

/** Alias for SRC_HSSL0_RDI.
 *  Note that this definition is obsolete, use SRC_HSSL0_RDI instead.
 * 2A4, Channel Read Data Service Request m
 */
#define SRC_HSSLRDI0 (SRC_HSSL0_RDI)

/** Alias for SRC_HSSL1_RDI.
 *  Note that this definition is obsolete, use SRC_HSSL1_RDI instead.
 * 2B4, Channel Read Data Service Request m
 */
#define SRC_HSSLRDI1 (SRC_HSSL1_RDI)

/** Alias for SRC_HSSL2_RDI.
 *  Note that this definition is obsolete, use SRC_HSSL2_RDI instead.
 * 2C4, Channel Read Data Service Request m
 */
#define SRC_HSSLRDI2 (SRC_HSSL2_RDI)

/** Alias for SRC_HSSL0_TRG.
 *  Note that this definition is obsolete, use SRC_HSSL0_TRG instead.
 * 2AC, Channel Trigger Service Request m
 */
#define SRC_HSSLTRG0 (SRC_HSSL0_TRG)

/** Alias for SRC_HSSL1_TRG.
 *  Note that this definition is obsolete, use SRC_HSSL1_TRG instead.
 * 2BC, Channel Trigger Service Request m
 */
#define SRC_HSSLTRG1 (SRC_HSSL1_TRG)

/** Alias for SRC_HSSL2_TRG.
 *  Note that this definition is obsolete, use SRC_HSSL2_TRG instead.
 * 2CC, Channel Trigger Service Request m
 */
#define SRC_HSSLTRG2 (SRC_HSSL2_TRG)

/** 2E0, I2C Burst Data Transfer Request */
#define SRC_I2C0_BREQ ((*(volatile Ifx_SRC_SRCR*)0xF00382E0u)) /* lint --e(923)*/

/** 2F0, I2C Error Service Request */
#define SRC_I2C0_ERR ((*(volatile Ifx_SRC_SRCR*)0xF00382F0u)) /* lint --e(923)*/

/** 2E4, I2C Last Burst Data Transfer Service Request */
#define SRC_I2C0_LBREQ ((*(volatile Ifx_SRC_SRCR*)0xF00382E4u)) /* lint --e(923)*/

/** 2EC, I2C Last Single Data Transfer Service Request */
#define SRC_I2C0_LSREQ ((*(volatile Ifx_SRC_SRCR*)0xF00382ECu)) /* lint --e(923)*/

/** 2F4, I2C Kernel Service Request */
#define SRC_I2C0_P ((*(volatile Ifx_SRC_SRCR*)0xF00382F4u)) /* lint --e(923)*/

/** 2E8, I2C Single Data Transfer Service Request */
#define SRC_I2C0_SREQ ((*(volatile Ifx_SRC_SRCR*)0xF00382E8u)) /* lint --e(923)*/

/** Alias for SRC_I2C0_BREQ.
 *  Note that this definition is obsolete, use SRC_I2C0_BREQ instead.
 * 2E0, I2C Burst Data Transfer Request
 */
#define SRC_I2C0BREQ (SRC_I2C0_BREQ)

/** Alias for SRC_I2C0_ERR.
 *  Note that this definition is obsolete, use SRC_I2C0_ERR instead.
 * 2F0, I2C Error Service Request
 */
#define SRC_I2C0ERR (SRC_I2C0_ERR)

/** Alias for SRC_I2C0_LBREQ.
 *  Note that this definition is obsolete, use SRC_I2C0_LBREQ instead.
 * 2E4, I2C Last Burst Data Transfer Service Request
 */
#define SRC_I2C0LBREQ (SRC_I2C0_LBREQ)

/** Alias for SRC_I2C0_LSREQ.
 *  Note that this definition is obsolete, use SRC_I2C0_LSREQ instead.
 * 2EC, I2C Last Single Data Transfer Service Request
 */
#define SRC_I2C0LSREQ (SRC_I2C0_LSREQ)

/** Alias for SRC_I2C0_P.
 *  Note that this definition is obsolete, use SRC_I2C0_P instead.
 * 2F4, I2C Kernel Service Request
 */
#define SRC_I2C0P (SRC_I2C0_P)

/** Alias for SRC_I2C0_SREQ.
 *  Note that this definition is obsolete, use SRC_I2C0_SREQ instead.
 * 2E8, I2C Single Data Transfer Service Request
 */
#define SRC_I2C0SREQ (SRC_I2C0_SREQ)

/** 2F8, I2C Burst Data Transfer Request */
#define SRC_I2C1_BREQ ((*(volatile Ifx_SRC_SRCR*)0xF00382F8u)) /* lint --e(923)*/

/** 308, I2C Error Service Request */
#define SRC_I2C1_ERR ((*(volatile Ifx_SRC_SRCR*)0xF0038308u)) /* lint --e(923)*/

/** 2FC, I2C Last Burst Data Transfer Service Request */
#define SRC_I2C1_LBREQ ((*(volatile Ifx_SRC_SRCR*)0xF00382FCu)) /* lint --e(923)*/

/** 304, I2C Last Single Data Transfer Service Request */
#define SRC_I2C1_LSREQ ((*(volatile Ifx_SRC_SRCR*)0xF0038304u)) /* lint --e(923)*/

/** 30C, I2C Kernel Service Request */
#define SRC_I2C1_P ((*(volatile Ifx_SRC_SRCR*)0xF003830Cu)) /* lint --e(923)*/

/** 300, I2C Single Data Transfer Service Request */
#define SRC_I2C1_SREQ ((*(volatile Ifx_SRC_SRCR*)0xF0038300u)) /* lint --e(923)*/

/** Alias for SRC_I2C1_BREQ.
 *  Note that this definition is obsolete, use SRC_I2C1_BREQ instead.
 * 2F8, I2C Burst Data Transfer Request
 */
#define SRC_I2C1BREQ (SRC_I2C1_BREQ)

/** Alias for SRC_I2C1_ERR.
 *  Note that this definition is obsolete, use SRC_I2C1_ERR instead.
 * 308, I2C Error Service Request
 */
#define SRC_I2C1ERR (SRC_I2C1_ERR)

/** Alias for SRC_I2C1_LBREQ.
 *  Note that this definition is obsolete, use SRC_I2C1_LBREQ instead.
 * 2FC, I2C Last Burst Data Transfer Service Request
 */
#define SRC_I2C1LBREQ (SRC_I2C1_LBREQ)

/** Alias for SRC_I2C1_LSREQ.
 *  Note that this definition is obsolete, use SRC_I2C1_LSREQ instead.
 * 304, I2C Last Single Data Transfer Service Request
 */
#define SRC_I2C1LSREQ (SRC_I2C1_LSREQ)

/** Alias for SRC_I2C1_P.
 *  Note that this definition is obsolete, use SRC_I2C1_P instead.
 * 30C, I2C Kernel Service Request
 */
#define SRC_I2C1P (SRC_I2C1_P)

/** Alias for SRC_I2C1_SREQ.
 *  Note that this definition is obsolete, use SRC_I2C1_SREQ instead.
 * 300, I2C Single Data Transfer Service Request
 */
#define SRC_I2C1SREQ (SRC_I2C1_SREQ)

/** CB0, IOM Service Request */
#define SRC_IOM ((*(volatile Ifx_SRC_SRCR*)0xF0038CB0u)) /* lint --e(923)*/

/** 3E0, MSC Service Request */
#define SRC_MSC0_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF00383E0u)) /* lint --e(923)*/

/** 3E4, MSC Service Request */
#define SRC_MSC0_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF00383E4u)) /* lint --e(923)*/

/** 3E8, MSC Service Request */
#define SRC_MSC0_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF00383E8u)) /* lint --e(923)*/

/** 3EC, MSC Service Request */
#define SRC_MSC0_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF00383ECu)) /* lint --e(923)*/

/** Alias for SRC_MSC0_SR0.
 *  Note that this definition is obsolete, use SRC_MSC0_SR0 instead.
 * 3E0, MSC Service Request
 */
#define SRC_MSC0SR0 (SRC_MSC0_SR0)

/** Alias for SRC_MSC0_SR1.
 *  Note that this definition is obsolete, use SRC_MSC0_SR1 instead.
 * 3E4, MSC Service Request
 */
#define SRC_MSC0SR1 (SRC_MSC0_SR1)

/** Alias for SRC_MSC0_SR2.
 *  Note that this definition is obsolete, use SRC_MSC0_SR2 instead.
 * 3E8, MSC Service Request
 */
#define SRC_MSC0SR2 (SRC_MSC0_SR2)

/** Alias for SRC_MSC0_SR3.
 *  Note that this definition is obsolete, use SRC_MSC0_SR3 instead.
 * 3EC, MSC Service Request
 */
#define SRC_MSC0SR3 (SRC_MSC0_SR3)

/** 3F0, MSC Service Request */
#define SRC_MSC1_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF00383F0u)) /* lint --e(923)*/

/** 3F4, MSC Service Request */
#define SRC_MSC1_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF00383F4u)) /* lint --e(923)*/

/** 3F8, MSC Service Request */
#define SRC_MSC1_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF00383F8u)) /* lint --e(923)*/

/** 3FC, MSC Service Request */
#define SRC_MSC1_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF00383FCu)) /* lint --e(923)*/

/** Alias for SRC_MSC1_SR0.
 *  Note that this definition is obsolete, use SRC_MSC1_SR0 instead.
 * 3F0, MSC Service Request
 */
#define SRC_MSC1SR0 (SRC_MSC1_SR0)

/** Alias for SRC_MSC1_SR1.
 *  Note that this definition is obsolete, use SRC_MSC1_SR1 instead.
 * 3F4, MSC Service Request
 */
#define SRC_MSC1SR1 (SRC_MSC1_SR1)

/** Alias for SRC_MSC1_SR2.
 *  Note that this definition is obsolete, use SRC_MSC1_SR2 instead.
 * 3F8, MSC Service Request
 */
#define SRC_MSC1SR2 (SRC_MSC1_SR2)

/** Alias for SRC_MSC1_SR3.
 *  Note that this definition is obsolete, use SRC_MSC1_SR3 instead.
 * 3FC, MSC Service Request
 */
#define SRC_MSC1SR3 (SRC_MSC1_SR3)

/** C30, PMU 0 Service Request 0 */
#define SRC_PMU00 ((*(volatile Ifx_SRC_SRCR*)0xF0038C30u)) /* lint --e(923)*/

/** D30, PSI5 Service Request */
#define SRC_PSI50 ((*(volatile Ifx_SRC_SRCR*)0xF0038D30u)) /* lint --e(923)*/

/** D34, PSI5 Service Request */
#define SRC_PSI51 ((*(volatile Ifx_SRC_SRCR*)0xF0038D34u)) /* lint --e(923)*/

/** D38, PSI5 Service Request */
#define SRC_PSI52 ((*(volatile Ifx_SRC_SRCR*)0xF0038D38u)) /* lint --e(923)*/

/** D3C, PSI5 Service Request */
#define SRC_PSI53 ((*(volatile Ifx_SRC_SRCR*)0xF0038D3Cu)) /* lint --e(923)*/

/** D40, PSI5 Service Request */
#define SRC_PSI54 ((*(volatile Ifx_SRC_SRCR*)0xF0038D40u)) /* lint --e(923)*/

/** D44, PSI5 Service Request */
#define SRC_PSI55 ((*(volatile Ifx_SRC_SRCR*)0xF0038D44u)) /* lint --e(923)*/

/** D48, PSI5 Service Request */
#define SRC_PSI56 ((*(volatile Ifx_SRC_SRCR*)0xF0038D48u)) /* lint --e(923)*/

/** D4C, PSI5 Service Request */
#define SRC_PSI57 ((*(volatile Ifx_SRC_SRCR*)0xF0038D4Cu)) /* lint --e(923)*/

/** 198, QSPI Error Service Request */
#define SRC_QSPI0_ERR ((*(volatile Ifx_SRC_SRCR*)0xF0038198u)) /* lint --e(923)*/

/** 1A0, QSPI Half Cycle Service Request */
#define SRC_QSPI0_HC ((*(volatile Ifx_SRC_SRCR*)0xF00381A0u)) /* lint --e(923)*/

/** 19C, QSPI Phase Transition Service Request */
#define SRC_QSPI0_PT ((*(volatile Ifx_SRC_SRCR*)0xF003819Cu)) /* lint --e(923)*/

/** 194, QSPI Receive Service Request */
#define SRC_QSPI0_RX ((*(volatile Ifx_SRC_SRCR*)0xF0038194u)) /* lint --e(923)*/

/** 190, QSPI Transmit Service Request */
#define SRC_QSPI0_TX ((*(volatile Ifx_SRC_SRCR*)0xF0038190u)) /* lint --e(923)*/

/** 1A4, QSPI User Defined Service Request */
#define SRC_QSPI0_U ((*(volatile Ifx_SRC_SRCR*)0xF00381A4u)) /* lint --e(923)*/

/** Alias for SRC_QSPI0_ERR.
 *  Note that this definition is obsolete, use SRC_QSPI0_ERR instead.
 * 198, QSPI Error Service Request
 */
#define SRC_QSPI0ERR (SRC_QSPI0_ERR)

/** Alias for SRC_QSPI0_HC.
 *  Note that this definition is obsolete, use SRC_QSPI0_HC instead.
 * 1A0, QSPI Half Cycle Service Request
 */
#define SRC_QSPI0HC (SRC_QSPI0_HC)

/** Alias for SRC_QSPI0_PT.
 *  Note that this definition is obsolete, use SRC_QSPI0_PT instead.
 * 19C, QSPI Phase Transition Service Request
 */
#define SRC_QSPI0PT (SRC_QSPI0_PT)

/** Alias for SRC_QSPI0_RX.
 *  Note that this definition is obsolete, use SRC_QSPI0_RX instead.
 * 194, QSPI Receive Service Request
 */
#define SRC_QSPI0RX (SRC_QSPI0_RX)

/** Alias for SRC_QSPI0_TX.
 *  Note that this definition is obsolete, use SRC_QSPI0_TX instead.
 * 190, QSPI Transmit Service Request
 */
#define SRC_QSPI0TX (SRC_QSPI0_TX)

/** Alias for SRC_QSPI0_U.
 *  Note that this definition is obsolete, use SRC_QSPI0_U instead.
 * 1A4, QSPI User Defined Service Request
 */
#define SRC_QSPI0U (SRC_QSPI0_U)

/** 1B0, QSPI Error Service Request */
#define SRC_QSPI1_ERR ((*(volatile Ifx_SRC_SRCR*)0xF00381B0u)) /* lint --e(923)*/

/** 1B8, QSPI Half Cycle Service Request */
#define SRC_QSPI1_HC ((*(volatile Ifx_SRC_SRCR*)0xF00381B8u)) /* lint --e(923)*/

/** 1B4, QSPI Phase Transition Service Request */
#define SRC_QSPI1_PT ((*(volatile Ifx_SRC_SRCR*)0xF00381B4u)) /* lint --e(923)*/

/** 1AC, QSPI Receive Service Request */
#define SRC_QSPI1_RX ((*(volatile Ifx_SRC_SRCR*)0xF00381ACu)) /* lint --e(923)*/

/** 1A8, QSPI Transmit Service Request */
#define SRC_QSPI1_TX ((*(volatile Ifx_SRC_SRCR*)0xF00381A8u)) /* lint --e(923)*/

/** 1BC, QSPI User Defined Service Request */
#define SRC_QSPI1_U ((*(volatile Ifx_SRC_SRCR*)0xF00381BCu)) /* lint --e(923)*/

/** Alias for SRC_QSPI1_ERR.
 *  Note that this definition is obsolete, use SRC_QSPI1_ERR instead.
 * 1B0, QSPI Error Service Request
 */
#define SRC_QSPI1ERR (SRC_QSPI1_ERR)

/** Alias for SRC_QSPI1_HC.
 *  Note that this definition is obsolete, use SRC_QSPI1_HC instead.
 * 1B8, QSPI Half Cycle Service Request
 */
#define SRC_QSPI1HC (SRC_QSPI1_HC)

/** Alias for SRC_QSPI1_PT.
 *  Note that this definition is obsolete, use SRC_QSPI1_PT instead.
 * 1B4, QSPI Phase Transition Service Request
 */
#define SRC_QSPI1PT (SRC_QSPI1_PT)

/** Alias for SRC_QSPI1_RX.
 *  Note that this definition is obsolete, use SRC_QSPI1_RX instead.
 * 1AC, QSPI Receive Service Request
 */
#define SRC_QSPI1RX (SRC_QSPI1_RX)

/** Alias for SRC_QSPI1_TX.
 *  Note that this definition is obsolete, use SRC_QSPI1_TX instead.
 * 1A8, QSPI Transmit Service Request
 */
#define SRC_QSPI1TX (SRC_QSPI1_TX)

/** Alias for SRC_QSPI1_U.
 *  Note that this definition is obsolete, use SRC_QSPI1_U instead.
 * 1BC, QSPI User Defined Service Request
 */
#define SRC_QSPI1U (SRC_QSPI1_U)

/** 1C8, QSPI Error Service Request */
#define SRC_QSPI2_ERR ((*(volatile Ifx_SRC_SRCR*)0xF00381C8u)) /* lint --e(923)*/

/** 1D0, QSPI Half Cycle Service Request */
#define SRC_QSPI2_HC ((*(volatile Ifx_SRC_SRCR*)0xF00381D0u)) /* lint --e(923)*/

/** 1CC, QSPI Phase Transition Service Request */
#define SRC_QSPI2_PT ((*(volatile Ifx_SRC_SRCR*)0xF00381CCu)) /* lint --e(923)*/

/** 1C4, QSPI Receive Service Request */
#define SRC_QSPI2_RX ((*(volatile Ifx_SRC_SRCR*)0xF00381C4u)) /* lint --e(923)*/

/** 1C0, QSPI Transmit Service Request */
#define SRC_QSPI2_TX ((*(volatile Ifx_SRC_SRCR*)0xF00381C0u)) /* lint --e(923)*/

/** 1D4, QSPI User Defined Service Request */
#define SRC_QSPI2_U ((*(volatile Ifx_SRC_SRCR*)0xF00381D4u)) /* lint --e(923)*/

/** Alias for SRC_QSPI2_ERR.
 *  Note that this definition is obsolete, use SRC_QSPI2_ERR instead.
 * 1C8, QSPI Error Service Request
 */
#define SRC_QSPI2ERR (SRC_QSPI2_ERR)

/** Alias for SRC_QSPI2_HC.
 *  Note that this definition is obsolete, use SRC_QSPI2_HC instead.
 * 1D0, QSPI Half Cycle Service Request
 */
#define SRC_QSPI2HC (SRC_QSPI2_HC)

/** Alias for SRC_QSPI2_PT.
 *  Note that this definition is obsolete, use SRC_QSPI2_PT instead.
 * 1CC, QSPI Phase Transition Service Request
 */
#define SRC_QSPI2PT (SRC_QSPI2_PT)

/** Alias for SRC_QSPI2_RX.
 *  Note that this definition is obsolete, use SRC_QSPI2_RX instead.
 * 1C4, QSPI Receive Service Request
 */
#define SRC_QSPI2RX (SRC_QSPI2_RX)

/** Alias for SRC_QSPI2_TX.
 *  Note that this definition is obsolete, use SRC_QSPI2_TX instead.
 * 1C0, QSPI Transmit Service Request
 */
#define SRC_QSPI2TX (SRC_QSPI2_TX)

/** Alias for SRC_QSPI2_U.
 *  Note that this definition is obsolete, use SRC_QSPI2_U instead.
 * 1D4, QSPI User Defined Service Request
 */
#define SRC_QSPI2U (SRC_QSPI2_U)

/** 1E0, QSPI Error Service Request */
#define SRC_QSPI3_ERR ((*(volatile Ifx_SRC_SRCR*)0xF00381E0u)) /* lint --e(923)*/

/** 1E8, QSPI Half Cycle Service Request */
#define SRC_QSPI3_HC ((*(volatile Ifx_SRC_SRCR*)0xF00381E8u)) /* lint --e(923)*/

/** 1E4, QSPI Phase Transition Service Request */
#define SRC_QSPI3_PT ((*(volatile Ifx_SRC_SRCR*)0xF00381E4u)) /* lint --e(923)*/

/** 1DC, QSPI Receive Service Request */
#define SRC_QSPI3_RX ((*(volatile Ifx_SRC_SRCR*)0xF00381DCu)) /* lint --e(923)*/

/** 1D8, QSPI Transmit Service Request */
#define SRC_QSPI3_TX ((*(volatile Ifx_SRC_SRCR*)0xF00381D8u)) /* lint --e(923)*/

/** 1EC, QSPI User Defined Service Request */
#define SRC_QSPI3_U ((*(volatile Ifx_SRC_SRCR*)0xF00381ECu)) /* lint --e(923)*/

/** Alias for SRC_QSPI3_ERR.
 *  Note that this definition is obsolete, use SRC_QSPI3_ERR instead.
 * 1E0, QSPI Error Service Request
 */
#define SRC_QSPI3ERR (SRC_QSPI3_ERR)

/** Alias for SRC_QSPI3_HC.
 *  Note that this definition is obsolete, use SRC_QSPI3_HC instead.
 * 1E8, QSPI Half Cycle Service Request
 */
#define SRC_QSPI3HC (SRC_QSPI3_HC)

/** Alias for SRC_QSPI3_PT.
 *  Note that this definition is obsolete, use SRC_QSPI3_PT instead.
 * 1E4, QSPI Phase Transition Service Request
 */
#define SRC_QSPI3PT (SRC_QSPI3_PT)

/** Alias for SRC_QSPI3_RX.
 *  Note that this definition is obsolete, use SRC_QSPI3_RX instead.
 * 1DC, QSPI Receive Service Request
 */
#define SRC_QSPI3RX (SRC_QSPI3_RX)

/** Alias for SRC_QSPI3_TX.
 *  Note that this definition is obsolete, use SRC_QSPI3_TX instead.
 * 1D8, QSPI Transmit Service Request
 */
#define SRC_QSPI3TX (SRC_QSPI3_TX)

/** Alias for SRC_QSPI3_U.
 *  Note that this definition is obsolete, use SRC_QSPI3_U instead.
 * 1EC, QSPI User Defined Service Request
 */
#define SRC_QSPI3U (SRC_QSPI3_U)

/** 1F8, QSPI Error Service Request */
#define SRC_QSPI4_ERR ((*(volatile Ifx_SRC_SRCR*)0xF00381F8u)) /* lint --e(923)*/

/** 200, QSPI Half Cycle Service Request */
#define SRC_QSPI4_HC ((*(volatile Ifx_SRC_SRCR*)0xF0038200u)) /* lint --e(923)*/

/** 1FC, QSPI Phase Transition Service Request */
#define SRC_QSPI4_PT ((*(volatile Ifx_SRC_SRCR*)0xF00381FCu)) /* lint --e(923)*/

/** 1F4, QSPI Receive Service Request */
#define SRC_QSPI4_RX ((*(volatile Ifx_SRC_SRCR*)0xF00381F4u)) /* lint --e(923)*/

/** 1F0, QSPI Transmit Service Request */
#define SRC_QSPI4_TX ((*(volatile Ifx_SRC_SRCR*)0xF00381F0u)) /* lint --e(923)*/

/** 204, QSPI User Defined Service Request */
#define SRC_QSPI4_U ((*(volatile Ifx_SRC_SRCR*)0xF0038204u)) /* lint --e(923)*/

/** Alias for SRC_QSPI4_ERR.
 *  Note that this definition is obsolete, use SRC_QSPI4_ERR instead.
 * 1F8, QSPI Error Service Request
 */
#define SRC_QSPI4ERR (SRC_QSPI4_ERR)

/** Alias for SRC_QSPI4_HC.
 *  Note that this definition is obsolete, use SRC_QSPI4_HC instead.
 * 200, QSPI Half Cycle Service Request
 */
#define SRC_QSPI4HC (SRC_QSPI4_HC)

/** Alias for SRC_QSPI4_PT.
 *  Note that this definition is obsolete, use SRC_QSPI4_PT instead.
 * 1FC, QSPI Phase Transition Service Request
 */
#define SRC_QSPI4PT (SRC_QSPI4_PT)

/** Alias for SRC_QSPI4_RX.
 *  Note that this definition is obsolete, use SRC_QSPI4_RX instead.
 * 1F4, QSPI Receive Service Request
 */
#define SRC_QSPI4RX (SRC_QSPI4_RX)

/** Alias for SRC_QSPI4_TX.
 *  Note that this definition is obsolete, use SRC_QSPI4_TX instead.
 * 1F0, QSPI Transmit Service Request
 */
#define SRC_QSPI4TX (SRC_QSPI4_TX)

/** Alias for SRC_QSPI4_U.
 *  Note that this definition is obsolete, use SRC_QSPI4_U instead.
 * 204, QSPI User Defined Service Request
 */
#define SRC_QSPI4U (SRC_QSPI4_U)

/** 210, QSPI Error Service Request */
#define SRC_QSPI5_ERR ((*(volatile Ifx_SRC_SRCR*)0xF0038210u)) /* lint --e(923)*/

/** 218, QSPI Half Cycle Service Request */
#define SRC_QSPI5_HC ((*(volatile Ifx_SRC_SRCR*)0xF0038218u)) /* lint --e(923)*/

/** 214, QSPI Phase Transition Service Request */
#define SRC_QSPI5_PT ((*(volatile Ifx_SRC_SRCR*)0xF0038214u)) /* lint --e(923)*/

/** 20C, QSPI Receive Service Request */
#define SRC_QSPI5_RX ((*(volatile Ifx_SRC_SRCR*)0xF003820Cu)) /* lint --e(923)*/

/** 208, QSPI Transmit Service Request */
#define SRC_QSPI5_TX ((*(volatile Ifx_SRC_SRCR*)0xF0038208u)) /* lint --e(923)*/

/** 21C, QSPI User Defined Service Request */
#define SRC_QSPI5_U ((*(volatile Ifx_SRC_SRCR*)0xF003821Cu)) /* lint --e(923)*/

/** Alias for SRC_QSPI5_ERR.
 *  Note that this definition is obsolete, use SRC_QSPI5_ERR instead.
 * 210, QSPI Error Service Request
 */
#define SRC_QSPI5ERR (SRC_QSPI5_ERR)

/** Alias for SRC_QSPI5_HC.
 *  Note that this definition is obsolete, use SRC_QSPI5_HC instead.
 * 218, QSPI Half Cycle Service Request
 */
#define SRC_QSPI5HC (SRC_QSPI5_HC)

/** Alias for SRC_QSPI5_PT.
 *  Note that this definition is obsolete, use SRC_QSPI5_PT instead.
 * 214, QSPI Phase Transition Service Request
 */
#define SRC_QSPI5PT (SRC_QSPI5_PT)

/** Alias for SRC_QSPI5_RX.
 *  Note that this definition is obsolete, use SRC_QSPI5_RX instead.
 * 20C, QSPI Receive Service Request
 */
#define SRC_QSPI5RX (SRC_QSPI5_RX)

/** Alias for SRC_QSPI5_TX.
 *  Note that this definition is obsolete, use SRC_QSPI5_TX instead.
 * 208, QSPI Transmit Service Request
 */
#define SRC_QSPI5TX (SRC_QSPI5_TX)

/** Alias for SRC_QSPI5_U.
 *  Note that this definition is obsolete, use SRC_QSPI5_U instead.
 * 21C, QSPI User Defined Service Request
 */
#define SRC_QSPI5U (SRC_QSPI5_U)

/** CD0, System Control Unit Service Request 0 */
#define SRC_SCU_DTS ((*(volatile Ifx_SRC_SRCR*)0xF0038CD0u)) /* lint --e(923)*/

/** CD4, System Control Unit Service Request 1 */
#define SRC_SCU_ERU0 ((*(volatile Ifx_SRC_SRCR*)0xF0038CD4u)) /* lint --e(923)*/

/** CD8, System Control Unit Service Request 2 */
#define SRC_SCU_ERU1 ((*(volatile Ifx_SRC_SRCR*)0xF0038CD8u)) /* lint --e(923)*/

/** CDC, System Control Unit Service Request 3 */
#define SRC_SCU_ERU2 ((*(volatile Ifx_SRC_SRCR*)0xF0038CDCu)) /* lint --e(923)*/

/** CE0, System Control Unit Service Request 4 */
#define SRC_SCU_ERU3 ((*(volatile Ifx_SRC_SRCR*)0xF0038CE0u)) /* lint --e(923)*/

/** Alias for SRC_SCU_DTS.
 *  Note that this definition is obsolete, use SRC_SCU_DTS instead.
 * CD0, System Control Unit Service Request 0
 */
#define SRC_SCUDTS (SRC_SCU_DTS)

/** Alias for SRC_SCU_ERU0.
 *  Note that this definition is obsolete, use SRC_SCU_ERU0 instead.
 * CD4, System Control Unit Service Request 1
 */
#define SRC_SCUERU0 (SRC_SCU_ERU0)

/** Alias for SRC_SCU_ERU1.
 *  Note that this definition is obsolete, use SRC_SCU_ERU1 instead.
 * CD8, System Control Unit Service Request 2
 */
#define SRC_SCUERU1 (SRC_SCU_ERU1)

/** Alias for SRC_SCU_ERU2.
 *  Note that this definition is obsolete, use SRC_SCU_ERU2 instead.
 * CDC, System Control Unit Service Request 3
 */
#define SRC_SCUERU2 (SRC_SCU_ERU2)

/** Alias for SRC_SCU_ERU3.
 *  Note that this definition is obsolete, use SRC_SCU_ERU3 instead.
 * CE0, System Control Unit Service Request 4
 */
#define SRC_SCUERU3 (SRC_SCU_ERU3)

/** 4D0, SDMA Move Engine Service Request */
#define SRC_SDMA_ME0 ((*(volatile Ifx_SRC_SRCR*)0xF00384D0u)) /* lint --e(923)*/

/** 4D4, SDMA Move Engine Service Request */
#define SRC_SDMA_ME1 ((*(volatile Ifx_SRC_SRCR*)0xF00384D4u)) /* lint --e(923)*/

/** 4F0, SDMA Move Engine Channel  Service Request */
#define SRC_SDMA_MECH0_CH0 ((*(volatile Ifx_SRC_SRCR*)0xF00384F0u)) /* lint --e(923)*/

/** 4F4, SDMA Move Engine Channel  Service Request */
#define SRC_SDMA_MECH0_CH1 ((*(volatile Ifx_SRC_SRCR*)0xF00384F4u)) /* lint --e(923)*/

/** 4F8, SDMA Move Engine Channel  Service Request */
#define SRC_SDMA_MECH0_CH2 ((*(volatile Ifx_SRC_SRCR*)0xF00384F8u)) /* lint --e(923)*/

/** 4FC, SDMA Move Engine Channel  Service Request */
#define SRC_SDMA_MECH0_CH3 ((*(volatile Ifx_SRC_SRCR*)0xF00384FCu)) /* lint --e(923)*/

/** 500, SDMA Move Engine Channel  Service Request */
#define SRC_SDMA_MECH0_CH4 ((*(volatile Ifx_SRC_SRCR*)0xF0038500u)) /* lint --e(923)*/

/** 504, SDMA Move Engine Channel  Service Request */
#define SRC_SDMA_MECH0_CH5 ((*(volatile Ifx_SRC_SRCR*)0xF0038504u)) /* lint --e(923)*/

/** 508, SDMA Move Engine Channel  Service Request */
#define SRC_SDMA_MECH0_CH6 ((*(volatile Ifx_SRC_SRCR*)0xF0038508u)) /* lint --e(923)*/

/** 50C, SDMA Move Engine Channel  Service Request */
#define SRC_SDMA_MECH0_CH7 ((*(volatile Ifx_SRC_SRCR*)0xF003850Cu)) /* lint --e(923)*/

/** 5F0, SDMA Move Engine Channel  Service Request */
#define SRC_SDMA_MECH1_CH0 ((*(volatile Ifx_SRC_SRCR*)0xF00385F0u)) /* lint --e(923)*/

/** 5F4, SDMA Move Engine Channel  Service Request */
#define SRC_SDMA_MECH1_CH1 ((*(volatile Ifx_SRC_SRCR*)0xF00385F4u)) /* lint --e(923)*/

/** 5F8, SDMA Move Engine Channel  Service Request */
#define SRC_SDMA_MECH1_CH2 ((*(volatile Ifx_SRC_SRCR*)0xF00385F8u)) /* lint --e(923)*/

/** 5FC, SDMA Move Engine Channel  Service Request */
#define SRC_SDMA_MECH1_CH3 ((*(volatile Ifx_SRC_SRCR*)0xF00385FCu)) /* lint --e(923)*/

/** 600, SDMA Move Engine Channel  Service Request */
#define SRC_SDMA_MECH1_CH4 ((*(volatile Ifx_SRC_SRCR*)0xF0038600u)) /* lint --e(923)*/

/** 604, SDMA Move Engine Channel  Service Request */
#define SRC_SDMA_MECH1_CH5 ((*(volatile Ifx_SRC_SRCR*)0xF0038604u)) /* lint --e(923)*/

/** 608, SDMA Move Engine Channel  Service Request */
#define SRC_SDMA_MECH1_CH6 ((*(volatile Ifx_SRC_SRCR*)0xF0038608u)) /* lint --e(923)*/

/** 60C, SDMA Move Engine Channel  Service Request */
#define SRC_SDMA_MECH1_CH7 ((*(volatile Ifx_SRC_SRCR*)0xF003860Cu)) /* lint --e(923)*/

/** Alias for SRC_SDMA_ME0.
 *  Note that this definition is obsolete, use SRC_SDMA_ME0 instead.
 * 4D0, SDMA Move Engine Service Request
 */
#define SRC_SDMAME0 (SRC_SDMA_ME0)

/** Alias for SRC_SDMA_MECH0_CH0.
 *  Note that this definition is obsolete, use SRC_SDMA_MECH0_CH0 instead.
 * 4F0, SDMA Move Engine Channel  Service Request
 */
#define SRC_SDMAME0CH_CH0 (SRC_SDMA_MECH0_CH0)

/** Alias for SRC_SDMA_MECH0_CH1.
 *  Note that this definition is obsolete, use SRC_SDMA_MECH0_CH1 instead.
 * 4F4, SDMA Move Engine Channel  Service Request
 */
#define SRC_SDMAME0CH_CH1 (SRC_SDMA_MECH0_CH1)

/** Alias for SRC_SDMA_MECH0_CH2.
 *  Note that this definition is obsolete, use SRC_SDMA_MECH0_CH2 instead.
 * 4F8, SDMA Move Engine Channel  Service Request
 */
#define SRC_SDMAME0CH_CH2 (SRC_SDMA_MECH0_CH2)

/** Alias for SRC_SDMA_MECH0_CH3.
 *  Note that this definition is obsolete, use SRC_SDMA_MECH0_CH3 instead.
 * 4FC, SDMA Move Engine Channel  Service Request
 */
#define SRC_SDMAME0CH_CH3 (SRC_SDMA_MECH0_CH3)

/** Alias for SRC_SDMA_MECH0_CH4.
 *  Note that this definition is obsolete, use SRC_SDMA_MECH0_CH4 instead.
 * 500, SDMA Move Engine Channel  Service Request
 */
#define SRC_SDMAME0CH_CH4 (SRC_SDMA_MECH0_CH4)

/** Alias for SRC_SDMA_MECH0_CH5.
 *  Note that this definition is obsolete, use SRC_SDMA_MECH0_CH5 instead.
 * 504, SDMA Move Engine Channel  Service Request
 */
#define SRC_SDMAME0CH_CH5 (SRC_SDMA_MECH0_CH5)

/** Alias for SRC_SDMA_MECH0_CH6.
 *  Note that this definition is obsolete, use SRC_SDMA_MECH0_CH6 instead.
 * 508, SDMA Move Engine Channel  Service Request
 */
#define SRC_SDMAME0CH_CH6 (SRC_SDMA_MECH0_CH6)

/** Alias for SRC_SDMA_MECH0_CH7.
 *  Note that this definition is obsolete, use SRC_SDMA_MECH0_CH7 instead.
 * 50C, SDMA Move Engine Channel  Service Request
 */
#define SRC_SDMAME0CH_CH7 (SRC_SDMA_MECH0_CH7)

/** Alias for SRC_SDMA_ME1.
 *  Note that this definition is obsolete, use SRC_SDMA_ME1 instead.
 * 4D4, SDMA Move Engine Service Request
 */
#define SRC_SDMAME1 (SRC_SDMA_ME1)

/** Alias for SRC_SDMA_MECH1_CH0.
 *  Note that this definition is obsolete, use SRC_SDMA_MECH1_CH0 instead.
 * 5F0, SDMA Move Engine Channel  Service Request
 */
#define SRC_SDMAME1CH_CH0 (SRC_SDMA_MECH1_CH0)

/** Alias for SRC_SDMA_MECH1_CH1.
 *  Note that this definition is obsolete, use SRC_SDMA_MECH1_CH1 instead.
 * 5F4, SDMA Move Engine Channel  Service Request
 */
#define SRC_SDMAME1CH_CH1 (SRC_SDMA_MECH1_CH1)

/** Alias for SRC_SDMA_MECH1_CH2.
 *  Note that this definition is obsolete, use SRC_SDMA_MECH1_CH2 instead.
 * 5F8, SDMA Move Engine Channel  Service Request
 */
#define SRC_SDMAME1CH_CH2 (SRC_SDMA_MECH1_CH2)

/** Alias for SRC_SDMA_MECH1_CH3.
 *  Note that this definition is obsolete, use SRC_SDMA_MECH1_CH3 instead.
 * 5FC, SDMA Move Engine Channel  Service Request
 */
#define SRC_SDMAME1CH_CH3 (SRC_SDMA_MECH1_CH3)

/** Alias for SRC_SDMA_MECH1_CH4.
 *  Note that this definition is obsolete, use SRC_SDMA_MECH1_CH4 instead.
 * 600, SDMA Move Engine Channel  Service Request
 */
#define SRC_SDMAME1CH_CH4 (SRC_SDMA_MECH1_CH4)

/** Alias for SRC_SDMA_MECH1_CH5.
 *  Note that this definition is obsolete, use SRC_SDMA_MECH1_CH5 instead.
 * 604, SDMA Move Engine Channel  Service Request
 */
#define SRC_SDMAME1CH_CH5 (SRC_SDMA_MECH1_CH5)

/** Alias for SRC_SDMA_MECH1_CH6.
 *  Note that this definition is obsolete, use SRC_SDMA_MECH1_CH6 instead.
 * 608, SDMA Move Engine Channel  Service Request
 */
#define SRC_SDMAME1CH_CH6 (SRC_SDMA_MECH1_CH6)

/** Alias for SRC_SDMA_MECH1_CH7.
 *  Note that this definition is obsolete, use SRC_SDMA_MECH1_CH7 instead.
 * 60C, SDMA Move Engine Channel  Service Request
 */
#define SRC_SDMAME1CH_CH7 (SRC_SDMA_MECH1_CH7)

/** 350, SENT TRIG Service Request */
#define SRC_SENT0 ((*(volatile Ifx_SRC_SRCR*)0xF0038350u)) /* lint --e(923)*/

/** 354, SENT TRIG Service Request */
#define SRC_SENT1 ((*(volatile Ifx_SRC_SRCR*)0xF0038354u)) /* lint --e(923)*/

/** 358, SENT TRIG Service Request */
#define SRC_SENT2 ((*(volatile Ifx_SRC_SRCR*)0xF0038358u)) /* lint --e(923)*/

/** 35C, SENT TRIG Service Request */
#define SRC_SENT3 ((*(volatile Ifx_SRC_SRCR*)0xF003835Cu)) /* lint --e(923)*/

/** 360, SENT TRIG Service Request */
#define SRC_SENT4 ((*(volatile Ifx_SRC_SRCR*)0xF0038360u)) /* lint --e(923)*/

/** 364, SENT TRIG Service Request */
#define SRC_SENT5 ((*(volatile Ifx_SRC_SRCR*)0xF0038364u)) /* lint --e(923)*/

/** 368, SENT TRIG Service Request */
#define SRC_SENT6 ((*(volatile Ifx_SRC_SRCR*)0xF0038368u)) /* lint --e(923)*/

/** 36C, SENT TRIG Service Request */
#define SRC_SENT7 ((*(volatile Ifx_SRC_SRCR*)0xF003836Cu)) /* lint --e(923)*/

/** 370, SENT TRIG Service Request */
#define SRC_SENT8 ((*(volatile Ifx_SRC_SRCR*)0xF0038370u)) /* lint --e(923)*/

/** 374, SENT TRIG Service Request */
#define SRC_SENT9 ((*(volatile Ifx_SRC_SRCR*)0xF0038374u)) /* lint --e(923)*/

/** D10, SMU Service Request */
#define SRC_SMU0 ((*(volatile Ifx_SRC_SRCR*)0xF0038D10u)) /* lint --e(923)*/

/** D14, SMU Service Request */
#define SRC_SMU1 ((*(volatile Ifx_SRC_SRCR*)0xF0038D14u)) /* lint --e(923)*/

/** D18, SMU Service Request */
#define SRC_SMU2 ((*(volatile Ifx_SRC_SRCR*)0xF0038D18u)) /* lint --e(923)*/

/** 490, System Timer Service Request */
#define SRC_STM0_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF0038490u)) /* lint --e(923)*/

/** 494, System Timer Service Request */
#define SRC_STM0_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF0038494u)) /* lint --e(923)*/

/** Alias for SRC_STM0_SR0.
 *  Note that this definition is obsolete, use SRC_STM0_SR0 instead.
 * 490, System Timer Service Request
 */
#define SRC_STM0SR0 (SRC_STM0_SR0)

/** Alias for SRC_STM0_SR1.
 *  Note that this definition is obsolete, use SRC_STM0_SR1 instead.
 * 494, System Timer Service Request
 */
#define SRC_STM0SR1 (SRC_STM0_SR1)

/** 498, System Timer Service Request */
#define SRC_STM1_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF0038498u)) /* lint --e(923)*/

/** 49C, System Timer Service Request */
#define SRC_STM1_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF003849Cu)) /* lint --e(923)*/

/** Alias for SRC_STM1_SR0.
 *  Note that this definition is obsolete, use SRC_STM1_SR0 instead.
 * 498, System Timer Service Request
 */
#define SRC_STM1SR0 (SRC_STM1_SR0)

/** Alias for SRC_STM1_SR1.
 *  Note that this definition is obsolete, use SRC_STM1_SR1 instead.
 * 49C, System Timer Service Request
 */
#define SRC_STM1SR1 (SRC_STM1_SR1)

/** 4A0, System Timer Service Request */
#define SRC_STM2_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF00384A0u)) /* lint --e(923)*/

/** 4A4, System Timer Service Request */
#define SRC_STM2_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF00384A4u)) /* lint --e(923)*/

/** Alias for SRC_STM2_SR0.
 *  Note that this definition is obsolete, use SRC_STM2_SR0 instead.
 * 4A0, System Timer Service Request
 */
#define SRC_STM2SR0 (SRC_STM2_SR0)

/** Alias for SRC_STM2_SR1.
 *  Note that this definition is obsolete, use SRC_STM2_SR1 instead.
 * 4A4, System Timer Service Request
 */
#define SRC_STM2SR1 (SRC_STM2_SR1)

/** AA0, VADC Common Group Service Request */
#define SRC_VADCCG0_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF0038AA0u)) /* lint --e(923)*/

/** AA4, VADC Common Group Service Request */
#define SRC_VADCCG0_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF0038AA4u)) /* lint --e(923)*/

/** AA8, VADC Common Group Service Request */
#define SRC_VADCCG0_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF0038AA8u)) /* lint --e(923)*/

/** AAC, VADC Common Group Service Request */
#define SRC_VADCCG0_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF0038AACu)) /* lint --e(923)*/

/** Alias for SRC_VADCCG0_SR0.
 *  Note that this definition is obsolete, use SRC_VADCCG0_SR0 instead.
 * AA0, VADC Common Group Service Request
 */
#define SRC_VADCCG0SR0 (SRC_VADCCG0_SR0)

/** Alias for SRC_VADCCG0_SR1.
 *  Note that this definition is obsolete, use SRC_VADCCG0_SR1 instead.
 * AA4, VADC Common Group Service Request
 */
#define SRC_VADCCG0SR1 (SRC_VADCCG0_SR1)

/** Alias for SRC_VADCCG0_SR2.
 *  Note that this definition is obsolete, use SRC_VADCCG0_SR2 instead.
 * AA8, VADC Common Group Service Request
 */
#define SRC_VADCCG0SR2 (SRC_VADCCG0_SR2)

/** Alias for SRC_VADCCG0_SR3.
 *  Note that this definition is obsolete, use SRC_VADCCG0_SR3 instead.
 * AAC, VADC Common Group Service Request
 */
#define SRC_VADCCG0SR3 (SRC_VADCCG0_SR3)

/** AB0, VADC Common Group Service Request */
#define SRC_VADCCG1_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF0038AB0u)) /* lint --e(923)*/

/** AB4, VADC Common Group Service Request */
#define SRC_VADCCG1_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF0038AB4u)) /* lint --e(923)*/

/** AB8, VADC Common Group Service Request */
#define SRC_VADCCG1_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF0038AB8u)) /* lint --e(923)*/

/** ABC, VADC Common Group Service Request */
#define SRC_VADCCG1_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF0038ABCu)) /* lint --e(923)*/

/** Alias for SRC_VADCCG1_SR0.
 *  Note that this definition is obsolete, use SRC_VADCCG1_SR0 instead.
 * AB0, VADC Common Group Service Request
 */
#define SRC_VADCCG1SR0 (SRC_VADCCG1_SR0)

/** Alias for SRC_VADCCG1_SR1.
 *  Note that this definition is obsolete, use SRC_VADCCG1_SR1 instead.
 * AB4, VADC Common Group Service Request
 */
#define SRC_VADCCG1SR1 (SRC_VADCCG1_SR1)

/** Alias for SRC_VADCCG1_SR2.
 *  Note that this definition is obsolete, use SRC_VADCCG1_SR2 instead.
 * AB8, VADC Common Group Service Request
 */
#define SRC_VADCCG1SR2 (SRC_VADCCG1_SR2)

/** Alias for SRC_VADCCG1_SR3.
 *  Note that this definition is obsolete, use SRC_VADCCG1_SR3 instead.
 * ABC, VADC Common Group Service Request
 */
#define SRC_VADCCG1SR3 (SRC_VADCCG1_SR3)

/** 980, VADC Group Service Request */
#define SRC_VADCG0_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF0038980u)) /* lint --e(923)*/

/** 984, VADC Group Service Request */
#define SRC_VADCG0_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF0038984u)) /* lint --e(923)*/

/** 988, VADC Group Service Request */
#define SRC_VADCG0_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF0038988u)) /* lint --e(923)*/

/** 98C, VADC Group Service Request */
#define SRC_VADCG0_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF003898Cu)) /* lint --e(923)*/

/** Alias for SRC_VADCG0_SR0.
 *  Note that this definition is obsolete, use SRC_VADCG0_SR0 instead.
 * 980, VADC Group Service Request
 */
#define SRC_VADCG0SR0 (SRC_VADCG0_SR0)

/** Alias for SRC_VADCG0_SR1.
 *  Note that this definition is obsolete, use SRC_VADCG0_SR1 instead.
 * 984, VADC Group Service Request
 */
#define SRC_VADCG0SR1 (SRC_VADCG0_SR1)

/** Alias for SRC_VADCG0_SR2.
 *  Note that this definition is obsolete, use SRC_VADCG0_SR2 instead.
 * 988, VADC Group Service Request
 */
#define SRC_VADCG0SR2 (SRC_VADCG0_SR2)

/** Alias for SRC_VADCG0_SR3.
 *  Note that this definition is obsolete, use SRC_VADCG0_SR3 instead.
 * 98C, VADC Group Service Request
 */
#define SRC_VADCG0SR3 (SRC_VADCG0_SR3)

/** A80, VADC Group Service Request */
#define SRC_VADCG14_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF0038A80u)) /* lint --e(923)*/

/** A84, VADC Group Service Request */
#define SRC_VADCG14_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF0038A84u)) /* lint --e(923)*/

/** A88, VADC Group Service Request */
#define SRC_VADCG14_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF0038A88u)) /* lint --e(923)*/

/** A8C, VADC Group Service Request */
#define SRC_VADCG14_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF0038A8Cu)) /* lint --e(923)*/

/** 990, VADC Group Service Request */
#define SRC_VADCG1_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF0038990u)) /* lint --e(923)*/

/** 994, VADC Group Service Request */
#define SRC_VADCG1_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF0038994u)) /* lint --e(923)*/

/** 998, VADC Group Service Request */
#define SRC_VADCG1_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF0038998u)) /* lint --e(923)*/

/** 99C, VADC Group Service Request */
#define SRC_VADCG1_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF003899Cu)) /* lint --e(923)*/

/** Alias for SRC_VADCG1_SR0.
 *  Note that this definition is obsolete, use SRC_VADCG1_SR0 instead.
 * 990, VADC Group Service Request
 */
#define SRC_VADCG1SR0 (SRC_VADCG1_SR0)

/** Alias for SRC_VADCG1_SR1.
 *  Note that this definition is obsolete, use SRC_VADCG1_SR1 instead.
 * 994, VADC Group Service Request
 */
#define SRC_VADCG1SR1 (SRC_VADCG1_SR1)

/** Alias for SRC_VADCG1_SR2.
 *  Note that this definition is obsolete, use SRC_VADCG1_SR2 instead.
 * 998, VADC Group Service Request
 */
#define SRC_VADCG1SR2 (SRC_VADCG1_SR2)

/** Alias for SRC_VADCG1_SR3.
 *  Note that this definition is obsolete, use SRC_VADCG1_SR3 instead.
 * 99C, VADC Group Service Request
 */
#define SRC_VADCG1SR3 (SRC_VADCG1_SR3)

/** 9A0, VADC Group Service Request */
#define SRC_VADCG2_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF00389A0u)) /* lint --e(923)*/

/** 9A4, VADC Group Service Request */
#define SRC_VADCG2_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF00389A4u)) /* lint --e(923)*/

/** 9A8, VADC Group Service Request */
#define SRC_VADCG2_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF00389A8u)) /* lint --e(923)*/

/** 9AC, VADC Group Service Request */
#define SRC_VADCG2_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF00389ACu)) /* lint --e(923)*/

/** Alias for SRC_VADCG2_SR0.
 *  Note that this definition is obsolete, use SRC_VADCG2_SR0 instead.
 * 9A0, VADC Group Service Request
 */
#define SRC_VADCG2SR0 (SRC_VADCG2_SR0)

/** Alias for SRC_VADCG2_SR1.
 *  Note that this definition is obsolete, use SRC_VADCG2_SR1 instead.
 * 9A4, VADC Group Service Request
 */
#define SRC_VADCG2SR1 (SRC_VADCG2_SR1)

/** Alias for SRC_VADCG2_SR2.
 *  Note that this definition is obsolete, use SRC_VADCG2_SR2 instead.
 * 9A8, VADC Group Service Request
 */
#define SRC_VADCG2SR2 (SRC_VADCG2_SR2)

/** Alias for SRC_VADCG2_SR3.
 *  Note that this definition is obsolete, use SRC_VADCG2_SR3 instead.
 * 9AC, VADC Group Service Request
 */
#define SRC_VADCG2SR3 (SRC_VADCG2_SR3)

/** 9B0, VADC Group Service Request */
#define SRC_VADCG3_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF00389B0u)) /* lint --e(923)*/

/** 9B4, VADC Group Service Request */
#define SRC_VADCG3_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF00389B4u)) /* lint --e(923)*/

/** 9B8, VADC Group Service Request */
#define SRC_VADCG3_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF00389B8u)) /* lint --e(923)*/

/** 9BC, VADC Group Service Request */
#define SRC_VADCG3_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF00389BCu)) /* lint --e(923)*/

/** Alias for SRC_VADCG3_SR0.
 *  Note that this definition is obsolete, use SRC_VADCG3_SR0 instead.
 * 9B0, VADC Group Service Request
 */
#define SRC_VADCG3SR0 (SRC_VADCG3_SR0)

/** Alias for SRC_VADCG3_SR1.
 *  Note that this definition is obsolete, use SRC_VADCG3_SR1 instead.
 * 9B4, VADC Group Service Request
 */
#define SRC_VADCG3SR1 (SRC_VADCG3_SR1)

/** Alias for SRC_VADCG3_SR2.
 *  Note that this definition is obsolete, use SRC_VADCG3_SR2 instead.
 * 9B8, VADC Group Service Request
 */
#define SRC_VADCG3SR2 (SRC_VADCG3_SR2)

/** Alias for SRC_VADCG3_SR3.
 *  Note that this definition is obsolete, use SRC_VADCG3_SR3 instead.
 * 9BC, VADC Group Service Request
 */
#define SRC_VADCG3SR3 (SRC_VADCG3_SR3)

/** 9C0, VADC Group Service Request */
#define SRC_VADCG4_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF00389C0u)) /* lint --e(923)*/

/** 9C4, VADC Group Service Request */
#define SRC_VADCG4_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF00389C4u)) /* lint --e(923)*/

/** 9C8, VADC Group Service Request */
#define SRC_VADCG4_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF00389C8u)) /* lint --e(923)*/

/** 9CC, VADC Group Service Request */
#define SRC_VADCG4_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF00389CCu)) /* lint --e(923)*/

/** Alias for SRC_VADCG4_SR0.
 *  Note that this definition is obsolete, use SRC_VADCG4_SR0 instead.
 * 9C0, VADC Group Service Request
 */
#define SRC_VADCG4SR0 (SRC_VADCG4_SR0)

/** Alias for SRC_VADCG4_SR1.
 *  Note that this definition is obsolete, use SRC_VADCG4_SR1 instead.
 * 9C4, VADC Group Service Request
 */
#define SRC_VADCG4SR1 (SRC_VADCG4_SR1)

/** Alias for SRC_VADCG4_SR2.
 *  Note that this definition is obsolete, use SRC_VADCG4_SR2 instead.
 * 9C8, VADC Group Service Request
 */
#define SRC_VADCG4SR2 (SRC_VADCG4_SR2)

/** Alias for SRC_VADCG4_SR3.
 *  Note that this definition is obsolete, use SRC_VADCG4_SR3 instead.
 * 9CC, VADC Group Service Request
 */
#define SRC_VADCG4SR3 (SRC_VADCG4_SR3)

/** 9D0, VADC Group Service Request */
#define SRC_VADCG5_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF00389D0u)) /* lint --e(923)*/

/** 9D4, VADC Group Service Request */
#define SRC_VADCG5_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF00389D4u)) /* lint --e(923)*/

/** 9D8, VADC Group Service Request */
#define SRC_VADCG5_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF00389D8u)) /* lint --e(923)*/

/** 9DC, VADC Group Service Request */
#define SRC_VADCG5_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF00389DCu)) /* lint --e(923)*/

/** Alias for SRC_VADCG5_SR0.
 *  Note that this definition is obsolete, use SRC_VADCG5_SR0 instead.
 * 9D0, VADC Group Service Request
 */
#define SRC_VADCG5SR0 (SRC_VADCG5_SR0)

/** Alias for SRC_VADCG5_SR1.
 *  Note that this definition is obsolete, use SRC_VADCG5_SR1 instead.
 * 9D4, VADC Group Service Request
 */
#define SRC_VADCG5SR1 (SRC_VADCG5_SR1)

/** Alias for SRC_VADCG5_SR2.
 *  Note that this definition is obsolete, use SRC_VADCG5_SR2 instead.
 * 9D8, VADC Group Service Request
 */
#define SRC_VADCG5SR2 (SRC_VADCG5_SR2)

/** Alias for SRC_VADCG5_SR3.
 *  Note that this definition is obsolete, use SRC_VADCG5_SR3 instead.
 * 9DC, VADC Group Service Request
 */
#define SRC_VADCG5SR3 (SRC_VADCG5_SR3)

/** 9E0, VADC Group Service Request */
#define SRC_VADCG6_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF00389E0u)) /* lint --e(923)*/

/** 9E4, VADC Group Service Request */
#define SRC_VADCG6_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF00389E4u)) /* lint --e(923)*/

/** 9E8, VADC Group Service Request */
#define SRC_VADCG6_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF00389E8u)) /* lint --e(923)*/

/** 9EC, VADC Group Service Request */
#define SRC_VADCG6_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF00389ECu)) /* lint --e(923)*/

/** Alias for SRC_VADCG6_SR0.
 *  Note that this definition is obsolete, use SRC_VADCG6_SR0 instead.
 * 9E0, VADC Group Service Request
 */
#define SRC_VADCG6SR0 (SRC_VADCG6_SR0)

/** Alias for SRC_VADCG6_SR1.
 *  Note that this definition is obsolete, use SRC_VADCG6_SR1 instead.
 * 9E4, VADC Group Service Request
 */
#define SRC_VADCG6SR1 (SRC_VADCG6_SR1)

/** Alias for SRC_VADCG6_SR2.
 *  Note that this definition is obsolete, use SRC_VADCG6_SR2 instead.
 * 9E8, VADC Group Service Request
 */
#define SRC_VADCG6SR2 (SRC_VADCG6_SR2)

/** Alias for SRC_VADCG6_SR3.
 *  Note that this definition is obsolete, use SRC_VADCG6_SR3 instead.
 * 9EC, VADC Group Service Request
 */
#define SRC_VADCG6SR3 (SRC_VADCG6_SR3)

/** 9F0, VADC Group Service Request */
#define SRC_VADCG7_SR0 ((*(volatile Ifx_SRC_SRCR*)0xF00389F0u)) /* lint --e(923)*/

/** 9F4, VADC Group Service Request */
#define SRC_VADCG7_SR1 ((*(volatile Ifx_SRC_SRCR*)0xF00389F4u)) /* lint --e(923)*/

/** 9F8, VADC Group Service Request */
#define SRC_VADCG7_SR2 ((*(volatile Ifx_SRC_SRCR*)0xF00389F8u)) /* lint --e(923)*/

/** 9FC, VADC Group Service Request */
#define SRC_VADCG7_SR3 ((*(volatile Ifx_SRC_SRCR*)0xF00389FCu)) /* lint --e(923)*/

/** Alias for SRC_VADCG7_SR0.
 *  Note that this definition is obsolete, use SRC_VADCG7_SR0 instead.
 * 9F0, VADC Group Service Request
 */
#define SRC_VADCG7SR0 (SRC_VADCG7_SR0)

/** Alias for SRC_VADCG7_SR1.
 *  Note that this definition is obsolete, use SRC_VADCG7_SR1 instead.
 * 9F4, VADC Group Service Request
 */
#define SRC_VADCG7SR1 (SRC_VADCG7_SR1)

/** Alias for SRC_VADCG7_SR2.
 *  Note that this definition is obsolete, use SRC_VADCG7_SR2 instead.
 * 9F8, VADC Group Service Request
 */
#define SRC_VADCG7SR2 (SRC_VADCG7_SR2)

/** Alias for SRC_VADCG7_SR3.
 *  Note that this definition is obsolete, use SRC_VADCG7_SR3 instead.
 * 9FC, VADC Group Service Request
 */
#define SRC_VADCG7SR3 (SRC_VADCG7_SR3)

/** 48, XBAR_SRI Service Request */
#define SRC_XBARSRC ((*(volatile Ifx_SRC_SRCR*)0xF0038048u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXSRC_REG_H */

