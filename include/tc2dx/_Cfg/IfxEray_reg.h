/**
 * \file IfxEray_reg.h
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
#ifndef IFXERAY_REG_H
#define IFXERAY_REG_H
/******************************************************************************/
#include "Eray/IfxEray_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** ERAY object */
#define MODULE_ERAY0 ((*(Ifx_ERAY*)0xF001C000u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-ERAY0)                              */
/******************************************************************************/

/** 8FC, Access Enable Register 0 */
#define ERAY0_ACCEN0 ((*(volatile Ifx_ERAY_ACCEN0*)0xF001C8FCu)) /* lint --e(923)*/

/** 8F8, Access Enable Register 1 */
#define ERAY0_ACCEN1 ((*(volatile Ifx_ERAY_ACCEN1*)0xF001C8F8u)) /* lint --e(923)*/

/** 128, Aggregated Channel Status */
#define ERAY0_ACS ((*(volatile Ifx_ERAY_ACS*)0xF001C128u)) /* lint --e(923)*/

/** 104, Communication Controller Error Vector */
#define ERAY0_CCEV ((*(volatile Ifx_ERAY_CCEV*)0xF001C104u)) /* lint --e(923)*/

/** 100, Communication Controller Status Vector */
#define ERAY0_CCSV ((*(volatile Ifx_ERAY_CCSV*)0xF001C100u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ERAY0_CLC ((*(volatile Ifx_CLC6*)0xF001C000u)) /* lint --e(923)*/

/** 3F0, Core Release Register */
#define ERAY0_CREL ((*(volatile Ifx_ERAY_CREL*)0xF001C3F0u)) /* lint --e(923)*/

/** 4, Busy and Input Buffer Control Register */
#define ERAY0_CUST1 ((*(volatile Ifx_ERAY_CUST1*)0xF001C004u)) /* lint --e(923)*/

/** C, Customer Interface Timeout Counter */
#define ERAY0_CUST3 ((*(volatile Ifx_ERAY_CUST3*)0xF001C00Cu)) /* lint --e(923)*/

/** 34, Error Service Request Enable Reset */
#define ERAY0_EIER ((*(volatile Ifx_ERAY_EIER*)0xF001C034u)) /* lint --e(923)*/

/** 30, Error Service Request Enable Set */
#define ERAY0_EIES ((*(volatile Ifx_ERAY_EIES*)0xF001C030u)) /* lint --e(923)*/

/** 28, Error Service Request Line Select */
#define ERAY0_EILS ((*(volatile Ifx_ERAY_EILS*)0xF001C028u)) /* lint --e(923)*/

/** 20, Error Service Request Register */
#define ERAY0_EIR ((*(volatile Ifx_ERAY_EIR*)0xF001C020u)) /* lint --e(923)*/

/** 3F4, Endian Register */
#define ERAY0_ENDN ((*(volatile Ifx_ERAY_ENDN*)0xF001C3F4u)) /* lint --e(923)*/

/** 130, Even Sync ID Symbol Window */
#define ERAY0_ESID0 ((*(volatile Ifx_ERAY_ESID*)0xF001C130u)) /* lint --e(923)*/

/** 134, Even Sync ID Symbol Window */
#define ERAY0_ESID1 ((*(volatile Ifx_ERAY_ESID*)0xF001C134u)) /* lint --e(923)*/

/** 158, Even Sync ID Symbol Window */
#define ERAY0_ESID10 ((*(volatile Ifx_ERAY_ESID*)0xF001C158u)) /* lint --e(923)*/

/** 15C, Even Sync ID Symbol Window */
#define ERAY0_ESID11 ((*(volatile Ifx_ERAY_ESID*)0xF001C15Cu)) /* lint --e(923)*/

/** 160, Even Sync ID Symbol Window */
#define ERAY0_ESID12 ((*(volatile Ifx_ERAY_ESID*)0xF001C160u)) /* lint --e(923)*/

/** 164, Even Sync ID Symbol Window */
#define ERAY0_ESID13 ((*(volatile Ifx_ERAY_ESID*)0xF001C164u)) /* lint --e(923)*/

/** 168, Even Sync ID Symbol Window */
#define ERAY0_ESID14 ((*(volatile Ifx_ERAY_ESID*)0xF001C168u)) /* lint --e(923)*/

/** 138, Even Sync ID Symbol Window */
#define ERAY0_ESID2 ((*(volatile Ifx_ERAY_ESID*)0xF001C138u)) /* lint --e(923)*/

/** 13C, Even Sync ID Symbol Window */
#define ERAY0_ESID3 ((*(volatile Ifx_ERAY_ESID*)0xF001C13Cu)) /* lint --e(923)*/

/** 140, Even Sync ID Symbol Window */
#define ERAY0_ESID4 ((*(volatile Ifx_ERAY_ESID*)0xF001C140u)) /* lint --e(923)*/

/** 144, Even Sync ID Symbol Window */
#define ERAY0_ESID5 ((*(volatile Ifx_ERAY_ESID*)0xF001C144u)) /* lint --e(923)*/

/** 148, Even Sync ID Symbol Window */
#define ERAY0_ESID6 ((*(volatile Ifx_ERAY_ESID*)0xF001C148u)) /* lint --e(923)*/

/** 14C, Even Sync ID Symbol Window */
#define ERAY0_ESID7 ((*(volatile Ifx_ERAY_ESID*)0xF001C14Cu)) /* lint --e(923)*/

/** 150, Even Sync ID Symbol Window */
#define ERAY0_ESID8 ((*(volatile Ifx_ERAY_ESID*)0xF001C150u)) /* lint --e(923)*/

/** 154, Even Sync ID Symbol Window */
#define ERAY0_ESID9 ((*(volatile Ifx_ERAY_ESID*)0xF001C154u)) /* lint --e(923)*/

/** 30C, FIFO Critical Level */
#define ERAY0_FCL ((*(volatile Ifx_ERAY_FCL*)0xF001C30Cu)) /* lint --e(923)*/

/** 304, FIFO Rejection Filter */
#define ERAY0_FRF ((*(volatile Ifx_ERAY_FRF*)0xF001C304u)) /* lint --e(923)*/

/** 308, FIFO Rejection Filter Mask */
#define ERAY0_FRFM ((*(volatile Ifx_ERAY_FRFM*)0xF001C308u)) /* lint --e(923)*/

/** 318, FIFO Status Register */
#define ERAY0_FSR ((*(volatile Ifx_ERAY_FSR*)0xF001C318u)) /* lint --e(923)*/

/** A0, GTU Configuration Register 1 */
#define ERAY0_GTUC01 ((*(volatile Ifx_ERAY_GTUC01*)0xF001C0A0u)) /* lint --e(923)*/

/** A4, GTU Configuration Register 2 */
#define ERAY0_GTUC02 ((*(volatile Ifx_ERAY_GTUC02*)0xF001C0A4u)) /* lint --e(923)*/

/** A8, GTU Configuration Register 3 */
#define ERAY0_GTUC03 ((*(volatile Ifx_ERAY_GTUC03*)0xF001C0A8u)) /* lint --e(923)*/

/** AC, GTU Configuration Register 4 */
#define ERAY0_GTUC04 ((*(volatile Ifx_ERAY_GTUC04*)0xF001C0ACu)) /* lint --e(923)*/

/** B0, GTU Configuration Register 5 */
#define ERAY0_GTUC05 ((*(volatile Ifx_ERAY_GTUC05*)0xF001C0B0u)) /* lint --e(923)*/

/** B4, GTU Configuration Register 6 */
#define ERAY0_GTUC06 ((*(volatile Ifx_ERAY_GTUC06*)0xF001C0B4u)) /* lint --e(923)*/

/** B8, GTU Configuration Register 7 */
#define ERAY0_GTUC07 ((*(volatile Ifx_ERAY_GTUC07*)0xF001C0B8u)) /* lint --e(923)*/

/** BC, GTU Configuration Register 8 */
#define ERAY0_GTUC08 ((*(volatile Ifx_ERAY_GTUC08*)0xF001C0BCu)) /* lint --e(923)*/

/** C0, GTU Configuration Register 9 */
#define ERAY0_GTUC09 ((*(volatile Ifx_ERAY_GTUC09*)0xF001C0C0u)) /* lint --e(923)*/

/** C4, GTU Configuration Register 10 */
#define ERAY0_GTUC10 ((*(volatile Ifx_ERAY_GTUC10*)0xF001C0C4u)) /* lint --e(923)*/

/** C8, GTU Configuration Register 11 */
#define ERAY0_GTUC11 ((*(volatile Ifx_ERAY_GTUC11*)0xF001C0C8u)) /* lint --e(923)*/

/** 510, Input Buffer Command Mask */
#define ERAY0_IBCM ((*(volatile Ifx_ERAY_IBCM*)0xF001C510u)) /* lint --e(923)*/

/** 514, Input Buffer Command Request */
#define ERAY0_IBCR ((*(volatile Ifx_ERAY_IBCR*)0xF001C514u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ERAY0_ID ((*(volatile Ifx_ID1*)0xF001C008u)) /* lint --e(923)*/

/** 40, Service Request Line Enable */
#define ERAY0_ILE ((*(volatile Ifx_ERAY_ILE*)0xF001C040u)) /* lint --e(923)*/

/** 8F4, Kernel Reset Register 0 */
#define ERAY0_KRST0 ((*(volatile Ifx_ERAY_KRST0*)0xF001C8F4u)) /* lint --e(923)*/

/** 8F0, Kernel Reset Register 1 */
#define ERAY0_KRST1 ((*(volatile Ifx_ERAY_KRST1*)0xF001C8F0u)) /* lint --e(923)*/

/** 8EC, Kernel Reset Status Clear Register */
#define ERAY0_KRSTCLR ((*(volatile Ifx_ERAY_KRSTCLR*)0xF001C8ECu)) /* lint --e(923)*/

/** 1C, Lock Register */
#define ERAY0_LCK ((*(volatile Ifx_ERAY_LCK*)0xF001C01Cu)) /* lint --e(923)*/

/** 314, Last Dynamic Transmit Slot */
#define ERAY0_LDTS ((*(volatile Ifx_ERAY_LDTS*)0xF001C314u)) /* lint --e(923)*/

/** 70C, Message Buffer Status */
#define ERAY0_MBS ((*(volatile Ifx_ERAY_MBS*)0xF001C70Cu)) /* lint --e(923)*/

/** 340, Message Buffer Status Changed 1 */
#define ERAY0_MBSC1 ((*(volatile Ifx_ERAY_MBSC1*)0xF001C340u)) /* lint --e(923)*/

/** 344, Message Buffer Status Changed 2 */
#define ERAY0_MBSC2 ((*(volatile Ifx_ERAY_MBSC2*)0xF001C344u)) /* lint --e(923)*/

/** 348, Message Buffer Status Changed 3 */
#define ERAY0_MBSC3 ((*(volatile Ifx_ERAY_MBSC3*)0xF001C348u)) /* lint --e(923)*/

/** 34C, Message Buffer Status Changed 4 */
#define ERAY0_MBSC4 ((*(volatile Ifx_ERAY_MBSC4*)0xF001C34Cu)) /* lint --e(923)*/

/** 98, MHD Configuration Register */
#define ERAY0_MHDC ((*(volatile Ifx_ERAY_MHDC*)0xF001C098u)) /* lint --e(923)*/

/** 31C, Message Handler Constraints Flags */
#define ERAY0_MHDF ((*(volatile Ifx_ERAY_MHDF*)0xF001C31Cu)) /* lint --e(923)*/

/** 310, Message Handler Status */
#define ERAY0_MHDS ((*(volatile Ifx_ERAY_MHDS*)0xF001C310u)) /* lint --e(923)*/

/** 300, Message RAM Configuration */
#define ERAY0_MRC ((*(volatile Ifx_ERAY_MRC*)0xF001C300u)) /* lint --e(923)*/

/** 3B8, Message Buffer Status Changed Interrupt Control 1 */
#define ERAY0_MSIC1 ((*(volatile Ifx_ERAY_MSIC1*)0xF001C3B8u)) /* lint --e(923)*/

/** 3BC, Message Buffer Status Changed Interrupt Control 2 */
#define ERAY0_MSIC2 ((*(volatile Ifx_ERAY_MSIC2*)0xF001C3BCu)) /* lint --e(923)*/

/** 3C0, Message Buffer Status Changed Interrupt Control 3 */
#define ERAY0_MSIC3 ((*(volatile Ifx_ERAY_MSIC3*)0xF001C3C0u)) /* lint --e(923)*/

/** 3C4, Message Buffer Status Changed Interrupt Control 4 */
#define ERAY0_MSIC4 ((*(volatile Ifx_ERAY_MSIC4*)0xF001C3C4u)) /* lint --e(923)*/

/** 114, Macrotick and Cycle Counter Value */
#define ERAY0_MTCCV ((*(volatile Ifx_ERAY_MTCCV*)0xF001C114u)) /* lint --e(923)*/

/** 330, New Data Register 1 */
#define ERAY0_NDAT1 ((*(volatile Ifx_ERAY_NDAT1*)0xF001C330u)) /* lint --e(923)*/

/** 334, New Data Register 2 */
#define ERAY0_NDAT2 ((*(volatile Ifx_ERAY_NDAT2*)0xF001C334u)) /* lint --e(923)*/

/** 338, New Data Register 3 */
#define ERAY0_NDAT3 ((*(volatile Ifx_ERAY_NDAT3*)0xF001C338u)) /* lint --e(923)*/

/** 33C, New Data Register 4 */
#define ERAY0_NDAT4 ((*(volatile Ifx_ERAY_NDAT4*)0xF001C33Cu)) /* lint --e(923)*/

/** 3A8, New Data Interrupt Control 1 */
#define ERAY0_NDIC1 ((*(volatile Ifx_ERAY_NDIC1*)0xF001C3A8u)) /* lint --e(923)*/

/** 3AC, New Data Interrupt Control 2 */
#define ERAY0_NDIC2 ((*(volatile Ifx_ERAY_NDIC2*)0xF001C3ACu)) /* lint --e(923)*/

/** 3B0, New Data Interrupt Control 3 */
#define ERAY0_NDIC3 ((*(volatile Ifx_ERAY_NDIC3*)0xF001C3B0u)) /* lint --e(923)*/

/** 3B4, New Data Interrupt Control 4 */
#define ERAY0_NDIC4 ((*(volatile Ifx_ERAY_NDIC4*)0xF001C3B4u)) /* lint --e(923)*/

/** 8C, NEM Configuration Register */
#define ERAY0_NEMC ((*(volatile Ifx_ERAY_NEMC*)0xF001C08Cu)) /* lint --e(923)*/

/** 1B0, Network Management Vector */
#define ERAY0_NMV0 ((*(volatile Ifx_ERAY_NMV*)0xF001C1B0u)) /* lint --e(923)*/

/** 1B4, Network Management Vector */
#define ERAY0_NMV1 ((*(volatile Ifx_ERAY_NMV*)0xF001C1B4u)) /* lint --e(923)*/

/** 1B8, Network Management Vector */
#define ERAY0_NMV2 ((*(volatile Ifx_ERAY_NMV*)0xF001C1B8u)) /* lint --e(923)*/

/** 710, Output Buffer Command Mask */
#define ERAY0_OBCM ((*(volatile Ifx_ERAY_OBCM*)0xF001C710u)) /* lint --e(923)*/

/** 714, Output Buffer Command Request */
#define ERAY0_OBCR ((*(volatile Ifx_ERAY_OBCR*)0xF001C714u)) /* lint --e(923)*/

/** 8E8, OCDS Control and Status */
#define ERAY0_OCS ((*(volatile Ifx_ERAY_OCS*)0xF001C8E8u)) /* lint --e(923)*/

/** 11C, Offset Correction Value */
#define ERAY0_OCV ((*(volatile Ifx_ERAY_OCV*)0xF001C11Cu)) /* lint --e(923)*/

/** 170, Odd Sync ID Symbol Window */
#define ERAY0_OSID0 ((*(volatile Ifx_ERAY_OSID*)0xF001C170u)) /* lint --e(923)*/

/** 174, Odd Sync ID Symbol Window */
#define ERAY0_OSID1 ((*(volatile Ifx_ERAY_OSID*)0xF001C174u)) /* lint --e(923)*/

/** 198, Odd Sync ID Symbol Window */
#define ERAY0_OSID10 ((*(volatile Ifx_ERAY_OSID*)0xF001C198u)) /* lint --e(923)*/

/** 19C, Odd Sync ID Symbol Window */
#define ERAY0_OSID11 ((*(volatile Ifx_ERAY_OSID*)0xF001C19Cu)) /* lint --e(923)*/

/** 1A0, Odd Sync ID Symbol Window */
#define ERAY0_OSID12 ((*(volatile Ifx_ERAY_OSID*)0xF001C1A0u)) /* lint --e(923)*/

/** 1A4, Odd Sync ID Symbol Window */
#define ERAY0_OSID13 ((*(volatile Ifx_ERAY_OSID*)0xF001C1A4u)) /* lint --e(923)*/

/** 1A8, Odd Sync ID Symbol Window */
#define ERAY0_OSID14 ((*(volatile Ifx_ERAY_OSID*)0xF001C1A8u)) /* lint --e(923)*/

/** 178, Odd Sync ID Symbol Window */
#define ERAY0_OSID2 ((*(volatile Ifx_ERAY_OSID*)0xF001C178u)) /* lint --e(923)*/

/** 17C, Odd Sync ID Symbol Window */
#define ERAY0_OSID3 ((*(volatile Ifx_ERAY_OSID*)0xF001C17Cu)) /* lint --e(923)*/

/** 180, Odd Sync ID Symbol Window */
#define ERAY0_OSID4 ((*(volatile Ifx_ERAY_OSID*)0xF001C180u)) /* lint --e(923)*/

/** 184, Odd Sync ID Symbol Window */
#define ERAY0_OSID5 ((*(volatile Ifx_ERAY_OSID*)0xF001C184u)) /* lint --e(923)*/

/** 188, Odd Sync ID Symbol Window */
#define ERAY0_OSID6 ((*(volatile Ifx_ERAY_OSID*)0xF001C188u)) /* lint --e(923)*/

/** 18C, Odd Sync ID Symbol Window */
#define ERAY0_OSID7 ((*(volatile Ifx_ERAY_OSID*)0xF001C18Cu)) /* lint --e(923)*/

/** 190, Odd Sync ID Symbol Window */
#define ERAY0_OSID8 ((*(volatile Ifx_ERAY_OSID*)0xF001C190u)) /* lint --e(923)*/

/** 194, Odd Sync ID Symbol Window */
#define ERAY0_OSID9 ((*(volatile Ifx_ERAY_OSID*)0xF001C194u)) /* lint --e(923)*/

/** 870, OCDS Trigger Set Select */
#define ERAY0_OTSS ((*(volatile Ifx_ERAY_OTSS*)0xF001C870u)) /* lint --e(923)*/

/** 90, PRT Configuration Register 1 */
#define ERAY0_PRTC1 ((*(volatile Ifx_ERAY_PRTC1*)0xF001C090u)) /* lint --e(923)*/

/** 94, PRT Configuration Register 2 */
#define ERAY0_PRTC2 ((*(volatile Ifx_ERAY_PRTC2*)0xF001C094u)) /* lint --e(923)*/

/** 118, Rate Correction Value */
#define ERAY0_RCV ((*(volatile Ifx_ERAY_RCV*)0xF001C118u)) /* lint --e(923)*/

/** 600, Read Data Section */
#define ERAY0_RDDS0 ((*(volatile Ifx_ERAY_RDDS*)0xF001C600u)) /* lint --e(923)*/

/** 604, Read Data Section */
#define ERAY0_RDDS1 ((*(volatile Ifx_ERAY_RDDS*)0xF001C604u)) /* lint --e(923)*/

/** 628, Read Data Section */
#define ERAY0_RDDS10 ((*(volatile Ifx_ERAY_RDDS*)0xF001C628u)) /* lint --e(923)*/

/** 62C, Read Data Section */
#define ERAY0_RDDS11 ((*(volatile Ifx_ERAY_RDDS*)0xF001C62Cu)) /* lint --e(923)*/

/** 630, Read Data Section */
#define ERAY0_RDDS12 ((*(volatile Ifx_ERAY_RDDS*)0xF001C630u)) /* lint --e(923)*/

/** 634, Read Data Section */
#define ERAY0_RDDS13 ((*(volatile Ifx_ERAY_RDDS*)0xF001C634u)) /* lint --e(923)*/

/** 638, Read Data Section */
#define ERAY0_RDDS14 ((*(volatile Ifx_ERAY_RDDS*)0xF001C638u)) /* lint --e(923)*/

/** 63C, Read Data Section */
#define ERAY0_RDDS15 ((*(volatile Ifx_ERAY_RDDS*)0xF001C63Cu)) /* lint --e(923)*/

/** 640, Read Data Section */
#define ERAY0_RDDS16 ((*(volatile Ifx_ERAY_RDDS*)0xF001C640u)) /* lint --e(923)*/

/** 644, Read Data Section */
#define ERAY0_RDDS17 ((*(volatile Ifx_ERAY_RDDS*)0xF001C644u)) /* lint --e(923)*/

/** 648, Read Data Section */
#define ERAY0_RDDS18 ((*(volatile Ifx_ERAY_RDDS*)0xF001C648u)) /* lint --e(923)*/

/** 64C, Read Data Section */
#define ERAY0_RDDS19 ((*(volatile Ifx_ERAY_RDDS*)0xF001C64Cu)) /* lint --e(923)*/

/** 608, Read Data Section */
#define ERAY0_RDDS2 ((*(volatile Ifx_ERAY_RDDS*)0xF001C608u)) /* lint --e(923)*/

/** 650, Read Data Section */
#define ERAY0_RDDS20 ((*(volatile Ifx_ERAY_RDDS*)0xF001C650u)) /* lint --e(923)*/

/** 654, Read Data Section */
#define ERAY0_RDDS21 ((*(volatile Ifx_ERAY_RDDS*)0xF001C654u)) /* lint --e(923)*/

/** 658, Read Data Section */
#define ERAY0_RDDS22 ((*(volatile Ifx_ERAY_RDDS*)0xF001C658u)) /* lint --e(923)*/

/** 65C, Read Data Section */
#define ERAY0_RDDS23 ((*(volatile Ifx_ERAY_RDDS*)0xF001C65Cu)) /* lint --e(923)*/

/** 660, Read Data Section */
#define ERAY0_RDDS24 ((*(volatile Ifx_ERAY_RDDS*)0xF001C660u)) /* lint --e(923)*/

/** 664, Read Data Section */
#define ERAY0_RDDS25 ((*(volatile Ifx_ERAY_RDDS*)0xF001C664u)) /* lint --e(923)*/

/** 668, Read Data Section */
#define ERAY0_RDDS26 ((*(volatile Ifx_ERAY_RDDS*)0xF001C668u)) /* lint --e(923)*/

/** 66C, Read Data Section */
#define ERAY0_RDDS27 ((*(volatile Ifx_ERAY_RDDS*)0xF001C66Cu)) /* lint --e(923)*/

/** 670, Read Data Section */
#define ERAY0_RDDS28 ((*(volatile Ifx_ERAY_RDDS*)0xF001C670u)) /* lint --e(923)*/

/** 674, Read Data Section */
#define ERAY0_RDDS29 ((*(volatile Ifx_ERAY_RDDS*)0xF001C674u)) /* lint --e(923)*/

/** 60C, Read Data Section */
#define ERAY0_RDDS3 ((*(volatile Ifx_ERAY_RDDS*)0xF001C60Cu)) /* lint --e(923)*/

/** 678, Read Data Section */
#define ERAY0_RDDS30 ((*(volatile Ifx_ERAY_RDDS*)0xF001C678u)) /* lint --e(923)*/

/** 67C, Read Data Section */
#define ERAY0_RDDS31 ((*(volatile Ifx_ERAY_RDDS*)0xF001C67Cu)) /* lint --e(923)*/

/** 680, Read Data Section */
#define ERAY0_RDDS32 ((*(volatile Ifx_ERAY_RDDS*)0xF001C680u)) /* lint --e(923)*/

/** 684, Read Data Section */
#define ERAY0_RDDS33 ((*(volatile Ifx_ERAY_RDDS*)0xF001C684u)) /* lint --e(923)*/

/** 688, Read Data Section */
#define ERAY0_RDDS34 ((*(volatile Ifx_ERAY_RDDS*)0xF001C688u)) /* lint --e(923)*/

/** 68C, Read Data Section */
#define ERAY0_RDDS35 ((*(volatile Ifx_ERAY_RDDS*)0xF001C68Cu)) /* lint --e(923)*/

/** 690, Read Data Section */
#define ERAY0_RDDS36 ((*(volatile Ifx_ERAY_RDDS*)0xF001C690u)) /* lint --e(923)*/

/** 694, Read Data Section */
#define ERAY0_RDDS37 ((*(volatile Ifx_ERAY_RDDS*)0xF001C694u)) /* lint --e(923)*/

/** 698, Read Data Section */
#define ERAY0_RDDS38 ((*(volatile Ifx_ERAY_RDDS*)0xF001C698u)) /* lint --e(923)*/

/** 69C, Read Data Section */
#define ERAY0_RDDS39 ((*(volatile Ifx_ERAY_RDDS*)0xF001C69Cu)) /* lint --e(923)*/

/** 610, Read Data Section */
#define ERAY0_RDDS4 ((*(volatile Ifx_ERAY_RDDS*)0xF001C610u)) /* lint --e(923)*/

/** 6A0, Read Data Section */
#define ERAY0_RDDS40 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6A0u)) /* lint --e(923)*/

/** 6A4, Read Data Section */
#define ERAY0_RDDS41 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6A4u)) /* lint --e(923)*/

/** 6A8, Read Data Section */
#define ERAY0_RDDS42 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6A8u)) /* lint --e(923)*/

/** 6AC, Read Data Section */
#define ERAY0_RDDS43 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6ACu)) /* lint --e(923)*/

/** 6B0, Read Data Section */
#define ERAY0_RDDS44 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6B0u)) /* lint --e(923)*/

/** 6B4, Read Data Section */
#define ERAY0_RDDS45 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6B4u)) /* lint --e(923)*/

/** 6B8, Read Data Section */
#define ERAY0_RDDS46 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6B8u)) /* lint --e(923)*/

/** 6BC, Read Data Section */
#define ERAY0_RDDS47 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6BCu)) /* lint --e(923)*/

/** 6C0, Read Data Section */
#define ERAY0_RDDS48 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6C0u)) /* lint --e(923)*/

/** 6C4, Read Data Section */
#define ERAY0_RDDS49 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6C4u)) /* lint --e(923)*/

/** 614, Read Data Section */
#define ERAY0_RDDS5 ((*(volatile Ifx_ERAY_RDDS*)0xF001C614u)) /* lint --e(923)*/

/** 6C8, Read Data Section */
#define ERAY0_RDDS50 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6C8u)) /* lint --e(923)*/

/** 6CC, Read Data Section */
#define ERAY0_RDDS51 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6CCu)) /* lint --e(923)*/

/** 6D0, Read Data Section */
#define ERAY0_RDDS52 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6D0u)) /* lint --e(923)*/

/** 6D4, Read Data Section */
#define ERAY0_RDDS53 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6D4u)) /* lint --e(923)*/

/** 6D8, Read Data Section */
#define ERAY0_RDDS54 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6D8u)) /* lint --e(923)*/

/** 6DC, Read Data Section */
#define ERAY0_RDDS55 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6DCu)) /* lint --e(923)*/

/** 6E0, Read Data Section */
#define ERAY0_RDDS56 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6E0u)) /* lint --e(923)*/

/** 6E4, Read Data Section */
#define ERAY0_RDDS57 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6E4u)) /* lint --e(923)*/

/** 6E8, Read Data Section */
#define ERAY0_RDDS58 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6E8u)) /* lint --e(923)*/

/** 6EC, Read Data Section */
#define ERAY0_RDDS59 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6ECu)) /* lint --e(923)*/

/** 618, Read Data Section */
#define ERAY0_RDDS6 ((*(volatile Ifx_ERAY_RDDS*)0xF001C618u)) /* lint --e(923)*/

/** 6F0, Read Data Section */
#define ERAY0_RDDS60 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6F0u)) /* lint --e(923)*/

/** 6F4, Read Data Section */
#define ERAY0_RDDS61 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6F4u)) /* lint --e(923)*/

/** 6F8, Read Data Section */
#define ERAY0_RDDS62 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6F8u)) /* lint --e(923)*/

/** 6FC, Read Data Section */
#define ERAY0_RDDS63 ((*(volatile Ifx_ERAY_RDDS*)0xF001C6FCu)) /* lint --e(923)*/

/** 61C, Read Data Section */
#define ERAY0_RDDS7 ((*(volatile Ifx_ERAY_RDDS*)0xF001C61Cu)) /* lint --e(923)*/

/** 620, Read Data Section */
#define ERAY0_RDDS8 ((*(volatile Ifx_ERAY_RDDS*)0xF001C620u)) /* lint --e(923)*/

/** 624, Read Data Section */
#define ERAY0_RDDS9 ((*(volatile Ifx_ERAY_RDDS*)0xF001C624u)) /* lint --e(923)*/

/** 700, Read Header Section 1 */
#define ERAY0_RDHS1 ((*(volatile Ifx_ERAY_RDHS1*)0xF001C700u)) /* lint --e(923)*/

/** 704, Read Header Section 2 */
#define ERAY0_RDHS2 ((*(volatile Ifx_ERAY_RDHS2*)0xF001C704u)) /* lint --e(923)*/

/** 708, Read Header Section 3 */
#define ERAY0_RDHS3 ((*(volatile Ifx_ERAY_RDHS3*)0xF001C708u)) /* lint --e(923)*/

/** 110, Slot Counter Value */
#define ERAY0_SCV ((*(volatile Ifx_ERAY_SCV*)0xF001C110u)) /* lint --e(923)*/

/** 120, SYNC Frame Status */
#define ERAY0_SFS ((*(volatile Ifx_ERAY_SFS*)0xF001C120u)) /* lint --e(923)*/

/** 3C, Status Service Request Enable Reset */
#define ERAY0_SIER ((*(volatile Ifx_ERAY_SIER*)0xF001C03Cu)) /* lint --e(923)*/

/** 38, Status Service Request Enable Set */
#define ERAY0_SIES ((*(volatile Ifx_ERAY_SIES*)0xF001C038u)) /* lint --e(923)*/

/** 2C, Status Service Request Line Select */
#define ERAY0_SILS ((*(volatile Ifx_ERAY_SILS*)0xF001C02Cu)) /* lint --e(923)*/

/** 24, Status Service Request Register */
#define ERAY0_SIR ((*(volatile Ifx_ERAY_SIR*)0xF001C024u)) /* lint --e(923)*/

/** 4C, Stop Watch Register 1 */
#define ERAY0_STPW1 ((*(volatile Ifx_ERAY_STPW1*)0xF001C04Cu)) /* lint --e(923)*/

/** 50, Stop Watch Register 2 */
#define ERAY0_STPW2 ((*(volatile Ifx_ERAY_STPW2*)0xF001C050u)) /* lint --e(923)*/

/** 80, SUC Configuration Register 1 */
#define ERAY0_SUCC1 ((*(volatile Ifx_ERAY_SUCC1*)0xF001C080u)) /* lint --e(923)*/

/** 84, SUC Configuration Register 2 */
#define ERAY0_SUCC2 ((*(volatile Ifx_ERAY_SUCC2*)0xF001C084u)) /* lint --e(923)*/

/** 88, SUC Configuration Register 3 */
#define ERAY0_SUCC3 ((*(volatile Ifx_ERAY_SUCC3*)0xF001C088u)) /* lint --e(923)*/

/** 124, Symbol Window and Network Idle Time Status */
#define ERAY0_SWNIT ((*(volatile Ifx_ERAY_SWNIT*)0xF001C124u)) /* lint --e(923)*/

/** 44, Timer 0 Configuration */
#define ERAY0_T0C ((*(volatile Ifx_ERAY_T0C*)0xF001C044u)) /* lint --e(923)*/

/** 48, Timer 1 Configuration */
#define ERAY0_T1C ((*(volatile Ifx_ERAY_T1C*)0xF001C048u)) /* lint --e(923)*/

/** 10, Test Register 1 */
#define ERAY0_TEST1 ((*(volatile Ifx_ERAY_TEST1*)0xF001C010u)) /* lint --e(923)*/

/** 14, Test Register 2 */
#define ERAY0_TEST2 ((*(volatile Ifx_ERAY_TEST2*)0xF001C014u)) /* lint --e(923)*/

/** 320, Transmission Request Register 1 */
#define ERAY0_TXRQ1 ((*(volatile Ifx_ERAY_TXRQ1*)0xF001C320u)) /* lint --e(923)*/

/** 324, Transmission Request Register 2 */
#define ERAY0_TXRQ2 ((*(volatile Ifx_ERAY_TXRQ2*)0xF001C324u)) /* lint --e(923)*/

/** 328, Transmission Request Register 3 */
#define ERAY0_TXRQ3 ((*(volatile Ifx_ERAY_TXRQ3*)0xF001C328u)) /* lint --e(923)*/

/** 32C, Transmission Request Register 4 */
#define ERAY0_TXRQ4 ((*(volatile Ifx_ERAY_TXRQ4*)0xF001C32Cu)) /* lint --e(923)*/

/** 400, Write Data Section */
#define ERAY0_WRDS0 ((*(volatile Ifx_ERAY_WRDS*)0xF001C400u)) /* lint --e(923)*/

/** 404, Write Data Section */
#define ERAY0_WRDS1 ((*(volatile Ifx_ERAY_WRDS*)0xF001C404u)) /* lint --e(923)*/

/** 428, Write Data Section */
#define ERAY0_WRDS10 ((*(volatile Ifx_ERAY_WRDS*)0xF001C428u)) /* lint --e(923)*/

/** 42C, Write Data Section */
#define ERAY0_WRDS11 ((*(volatile Ifx_ERAY_WRDS*)0xF001C42Cu)) /* lint --e(923)*/

/** 430, Write Data Section */
#define ERAY0_WRDS12 ((*(volatile Ifx_ERAY_WRDS*)0xF001C430u)) /* lint --e(923)*/

/** 434, Write Data Section */
#define ERAY0_WRDS13 ((*(volatile Ifx_ERAY_WRDS*)0xF001C434u)) /* lint --e(923)*/

/** 438, Write Data Section */
#define ERAY0_WRDS14 ((*(volatile Ifx_ERAY_WRDS*)0xF001C438u)) /* lint --e(923)*/

/** 43C, Write Data Section */
#define ERAY0_WRDS15 ((*(volatile Ifx_ERAY_WRDS*)0xF001C43Cu)) /* lint --e(923)*/

/** 440, Write Data Section */
#define ERAY0_WRDS16 ((*(volatile Ifx_ERAY_WRDS*)0xF001C440u)) /* lint --e(923)*/

/** 444, Write Data Section */
#define ERAY0_WRDS17 ((*(volatile Ifx_ERAY_WRDS*)0xF001C444u)) /* lint --e(923)*/

/** 448, Write Data Section */
#define ERAY0_WRDS18 ((*(volatile Ifx_ERAY_WRDS*)0xF001C448u)) /* lint --e(923)*/

/** 44C, Write Data Section */
#define ERAY0_WRDS19 ((*(volatile Ifx_ERAY_WRDS*)0xF001C44Cu)) /* lint --e(923)*/

/** 408, Write Data Section */
#define ERAY0_WRDS2 ((*(volatile Ifx_ERAY_WRDS*)0xF001C408u)) /* lint --e(923)*/

/** 450, Write Data Section */
#define ERAY0_WRDS20 ((*(volatile Ifx_ERAY_WRDS*)0xF001C450u)) /* lint --e(923)*/

/** 454, Write Data Section */
#define ERAY0_WRDS21 ((*(volatile Ifx_ERAY_WRDS*)0xF001C454u)) /* lint --e(923)*/

/** 458, Write Data Section */
#define ERAY0_WRDS22 ((*(volatile Ifx_ERAY_WRDS*)0xF001C458u)) /* lint --e(923)*/

/** 45C, Write Data Section */
#define ERAY0_WRDS23 ((*(volatile Ifx_ERAY_WRDS*)0xF001C45Cu)) /* lint --e(923)*/

/** 460, Write Data Section */
#define ERAY0_WRDS24 ((*(volatile Ifx_ERAY_WRDS*)0xF001C460u)) /* lint --e(923)*/

/** 464, Write Data Section */
#define ERAY0_WRDS25 ((*(volatile Ifx_ERAY_WRDS*)0xF001C464u)) /* lint --e(923)*/

/** 468, Write Data Section */
#define ERAY0_WRDS26 ((*(volatile Ifx_ERAY_WRDS*)0xF001C468u)) /* lint --e(923)*/

/** 46C, Write Data Section */
#define ERAY0_WRDS27 ((*(volatile Ifx_ERAY_WRDS*)0xF001C46Cu)) /* lint --e(923)*/

/** 470, Write Data Section */
#define ERAY0_WRDS28 ((*(volatile Ifx_ERAY_WRDS*)0xF001C470u)) /* lint --e(923)*/

/** 474, Write Data Section */
#define ERAY0_WRDS29 ((*(volatile Ifx_ERAY_WRDS*)0xF001C474u)) /* lint --e(923)*/

/** 40C, Write Data Section */
#define ERAY0_WRDS3 ((*(volatile Ifx_ERAY_WRDS*)0xF001C40Cu)) /* lint --e(923)*/

/** 478, Write Data Section */
#define ERAY0_WRDS30 ((*(volatile Ifx_ERAY_WRDS*)0xF001C478u)) /* lint --e(923)*/

/** 47C, Write Data Section */
#define ERAY0_WRDS31 ((*(volatile Ifx_ERAY_WRDS*)0xF001C47Cu)) /* lint --e(923)*/

/** 480, Write Data Section */
#define ERAY0_WRDS32 ((*(volatile Ifx_ERAY_WRDS*)0xF001C480u)) /* lint --e(923)*/

/** 484, Write Data Section */
#define ERAY0_WRDS33 ((*(volatile Ifx_ERAY_WRDS*)0xF001C484u)) /* lint --e(923)*/

/** 488, Write Data Section */
#define ERAY0_WRDS34 ((*(volatile Ifx_ERAY_WRDS*)0xF001C488u)) /* lint --e(923)*/

/** 48C, Write Data Section */
#define ERAY0_WRDS35 ((*(volatile Ifx_ERAY_WRDS*)0xF001C48Cu)) /* lint --e(923)*/

/** 490, Write Data Section */
#define ERAY0_WRDS36 ((*(volatile Ifx_ERAY_WRDS*)0xF001C490u)) /* lint --e(923)*/

/** 494, Write Data Section */
#define ERAY0_WRDS37 ((*(volatile Ifx_ERAY_WRDS*)0xF001C494u)) /* lint --e(923)*/

/** 498, Write Data Section */
#define ERAY0_WRDS38 ((*(volatile Ifx_ERAY_WRDS*)0xF001C498u)) /* lint --e(923)*/

/** 49C, Write Data Section */
#define ERAY0_WRDS39 ((*(volatile Ifx_ERAY_WRDS*)0xF001C49Cu)) /* lint --e(923)*/

/** 410, Write Data Section */
#define ERAY0_WRDS4 ((*(volatile Ifx_ERAY_WRDS*)0xF001C410u)) /* lint --e(923)*/

/** 4A0, Write Data Section */
#define ERAY0_WRDS40 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4A0u)) /* lint --e(923)*/

/** 4A4, Write Data Section */
#define ERAY0_WRDS41 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4A4u)) /* lint --e(923)*/

/** 4A8, Write Data Section */
#define ERAY0_WRDS42 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4A8u)) /* lint --e(923)*/

/** 4AC, Write Data Section */
#define ERAY0_WRDS43 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4ACu)) /* lint --e(923)*/

/** 4B0, Write Data Section */
#define ERAY0_WRDS44 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4B0u)) /* lint --e(923)*/

/** 4B4, Write Data Section */
#define ERAY0_WRDS45 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4B4u)) /* lint --e(923)*/

/** 4B8, Write Data Section */
#define ERAY0_WRDS46 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4B8u)) /* lint --e(923)*/

/** 4BC, Write Data Section */
#define ERAY0_WRDS47 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4BCu)) /* lint --e(923)*/

/** 4C0, Write Data Section */
#define ERAY0_WRDS48 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4C0u)) /* lint --e(923)*/

/** 4C4, Write Data Section */
#define ERAY0_WRDS49 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4C4u)) /* lint --e(923)*/

/** 414, Write Data Section */
#define ERAY0_WRDS5 ((*(volatile Ifx_ERAY_WRDS*)0xF001C414u)) /* lint --e(923)*/

/** 4C8, Write Data Section */
#define ERAY0_WRDS50 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4C8u)) /* lint --e(923)*/

/** 4CC, Write Data Section */
#define ERAY0_WRDS51 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4CCu)) /* lint --e(923)*/

/** 4D0, Write Data Section */
#define ERAY0_WRDS52 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4D0u)) /* lint --e(923)*/

/** 4D4, Write Data Section */
#define ERAY0_WRDS53 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4D4u)) /* lint --e(923)*/

/** 4D8, Write Data Section */
#define ERAY0_WRDS54 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4D8u)) /* lint --e(923)*/

/** 4DC, Write Data Section */
#define ERAY0_WRDS55 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4DCu)) /* lint --e(923)*/

/** 4E0, Write Data Section */
#define ERAY0_WRDS56 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4E0u)) /* lint --e(923)*/

/** 4E4, Write Data Section */
#define ERAY0_WRDS57 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4E4u)) /* lint --e(923)*/

/** 4E8, Write Data Section */
#define ERAY0_WRDS58 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4E8u)) /* lint --e(923)*/

/** 4EC, Write Data Section */
#define ERAY0_WRDS59 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4ECu)) /* lint --e(923)*/

/** 418, Write Data Section */
#define ERAY0_WRDS6 ((*(volatile Ifx_ERAY_WRDS*)0xF001C418u)) /* lint --e(923)*/

/** 4F0, Write Data Section */
#define ERAY0_WRDS60 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4F0u)) /* lint --e(923)*/

/** 4F4, Write Data Section */
#define ERAY0_WRDS61 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4F4u)) /* lint --e(923)*/

/** 4F8, Write Data Section */
#define ERAY0_WRDS62 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4F8u)) /* lint --e(923)*/

/** 4FC, Write Data Section */
#define ERAY0_WRDS63 ((*(volatile Ifx_ERAY_WRDS*)0xF001C4FCu)) /* lint --e(923)*/

/** 41C, Write Data Section */
#define ERAY0_WRDS7 ((*(volatile Ifx_ERAY_WRDS*)0xF001C41Cu)) /* lint --e(923)*/

/** 420, Write Data Section */
#define ERAY0_WRDS8 ((*(volatile Ifx_ERAY_WRDS*)0xF001C420u)) /* lint --e(923)*/

/** 424, Write Data Section */
#define ERAY0_WRDS9 ((*(volatile Ifx_ERAY_WRDS*)0xF001C424u)) /* lint --e(923)*/

/** 500, Write Header Section 1 */
#define ERAY0_WRHS1 ((*(volatile Ifx_ERAY_WRHS1*)0xF001C500u)) /* lint --e(923)*/

/** 504, Write Header Section 2 */
#define ERAY0_WRHS2 ((*(volatile Ifx_ERAY_WRHS2*)0xF001C504u)) /* lint --e(923)*/

/** 508, Write Header Section 3 */
#define ERAY0_WRHS3 ((*(volatile Ifx_ERAY_WRHS3*)0xF001C508u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXERAY_REG_H */

