/**
 * \file IfxCbs_reg.h
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
#ifndef IFXCBS_REG_H
#define IFXCBS_REG_H
/******************************************************************************/
#include "Cbs/IfxCbs_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** CBS object */
#define MODULE_CBS ((*(Ifx_CBS*)0xF0000400u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-CBS)                               */
/******************************************************************************/

/** 68, Communication Mode Data Register */
#define CBS_COMDATA ((*(volatile Ifx_CBS_COMDATA*)0xF0000468u)) /* lint --e(923)*/

/** 88, Internally Controlled Trace Source Register */
#define CBS_ICTSA ((*(volatile Ifx_CBS_ICTSA*)0xF0000488u)) /* lint --e(923)*/

/** 8C, Internally Controlled Trace Destination Register */
#define CBS_ICTTA ((*(volatile Ifx_CBS_ICTTA*)0xF000048Cu)) /* lint --e(923)*/

/** 84, Internal Mode Status and Control Register */
#define CBS_INTMOD ((*(volatile Ifx_CBS_INTMOD*)0xF0000484u)) /* lint --e(923)*/

/** 6C, IOClient Status and Control Register */
#define CBS_IOSR ((*(volatile Ifx_CBS_IOSR*)0xF000046Cu)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define CBS_JDPID ((*(volatile Ifx_CBS_JDPID*)0xF0000408u)) /* lint --e(923)*/

/** 64, JTAG Device Identification Register */
#define CBS_JTAGID ((*(volatile Ifx_CBS_JTAGID*)0xF0000464u)) /* lint --e(923)*/

/** 7C, OSCU Control Register */
#define CBS_OCNTRL ((*(volatile Ifx_CBS_OCNTRL*)0xF000047Cu)) /* lint --e(923)*/

/** 78, OCDS Enable Control Register */
#define CBS_OEC ((*(volatile Ifx_CBS_OEC*)0xF0000478u)) /* lint --e(923)*/

/** C, OCDS Interface Mode Register */
#define CBS_OIFM ((*(volatile Ifx_CBS_OIFM*)0xF000040Cu)) /* lint --e(923)*/

/** 80, OSCU Status Register */
#define CBS_OSTATE ((*(volatile Ifx_CBS_OSTATE*)0xF0000480u)) /* lint --e(923)*/

/** B0, TG Capture for Cores - BRKOUT */
#define CBS_TCCB ((*(volatile Ifx_CBS_TCCB*)0xF00004B0u)) /* lint --e(923)*/

/** B4, TG Capture for Cores - HALT */
#define CBS_TCCH ((*(volatile Ifx_CBS_TCCH*)0xF00004B4u)) /* lint --e(923)*/

/** 1C, TG Capture for TG Input Pins */
#define CBS_TCIP ((*(volatile Ifx_CBS_TCIP*)0xF000041Cu)) /* lint --e(923)*/

/** BC, TG Capture for MCDS */
#define CBS_TCM ((*(volatile Ifx_CBS_TCM*)0xF00004BCu)) /* lint --e(923)*/

/** B8, TG Capture for OTGB0/1 */
#define CBS_TCTGB ((*(volatile Ifx_CBS_TCTGB*)0xF00004B8u)) /* lint --e(923)*/

/** 74, TG Capture for TG Lines */
#define CBS_TCTL ((*(volatile Ifx_CBS_TCTL*)0xF0000474u)) /* lint --e(923)*/

/** 10, TG Input Pins Routing */
#define CBS_TIPR ((*(volatile Ifx_CBS_TIPR*)0xF0000410u)) /* lint --e(923)*/

/** 94, TG Line 1 Suspend Targets */
#define CBS_TL1ST ((*(volatile Ifx_CBS_TL1ST*)0xF0000494u)) /* lint --e(923)*/

/** 90, TG Line Control */
#define CBS_TLC ((*(volatile Ifx_CBS_TLC*)0xF0000490u)) /* lint --e(923)*/

/** 40, TG Line Counter Control */
#define CBS_TLCC0 ((*(volatile Ifx_CBS_TLCC*)0xF0000440u)) /* lint --e(923)*/

/** 44, TG Line Counter Control */
#define CBS_TLCC1 ((*(volatile Ifx_CBS_TLCC*)0xF0000444u)) /* lint --e(923)*/

/** 98, TG Line Capture and Hold Enable */
#define CBS_TLCHE ((*(volatile Ifx_CBS_TLCHE*)0xF0000498u)) /* lint --e(923)*/

/** 9C, TG Line Capture and Hold Clear */
#define CBS_TLCHS ((*(volatile Ifx_CBS_TLCHS*)0xF000049Cu)) /* lint --e(923)*/

/** 50, TG Line Counter Value */
#define CBS_TLCV0 ((*(volatile Ifx_CBS_TLCV*)0xF0000450u)) /* lint --e(923)*/

/** 54, TG Line Counter Value */
#define CBS_TLCV1 ((*(volatile Ifx_CBS_TLCV*)0xF0000454u)) /* lint --e(923)*/

/** 70, TG Line State */
#define CBS_TLS ((*(volatile Ifx_CBS_TLS*)0xF0000470u)) /* lint --e(923)*/

/** A8, TG Line Timer */
#define CBS_TLT ((*(volatile Ifx_CBS_TLT*)0xF00004A8u)) /* lint --e(923)*/

/** AC, TG Lines for Trigger to Host */
#define CBS_TLTTH ((*(volatile Ifx_CBS_TLTTH*)0xF00004ACu)) /* lint --e(923)*/

/** 18, TG Output Pins Pulse Stretcher */
#define CBS_TOPPS ((*(volatile Ifx_CBS_TOPPS*)0xF0000418u)) /* lint --e(923)*/

/** 14, TG Output Pins Routing */
#define CBS_TOPR ((*(volatile Ifx_CBS_TOPR*)0xF0000414u)) /* lint --e(923)*/

/** 20, TG Routing for CPU */
#define CBS_TRC0 ((*(volatile Ifx_CBS_TRC*)0xF0000420u)) /* lint --e(923)*/

/** 24, TG Routing for CPU */
#define CBS_TRC1 ((*(volatile Ifx_CBS_TRC*)0xF0000424u)) /* lint --e(923)*/

/** 28, TG Routing for CPU */
#define CBS_TRC2 ((*(volatile Ifx_CBS_TRC*)0xF0000428u)) /* lint --e(923)*/

/** C0, TG Routing Events of CPU */
#define CBS_TREC0 ((*(volatile Ifx_CBS_TREC*)0xF00004C0u)) /* lint --e(923)*/

/** C4, TG Routing Events of CPU */
#define CBS_TREC1 ((*(volatile Ifx_CBS_TREC*)0xF00004C4u)) /* lint --e(923)*/

/** C8, TG Routing Events of CPU */
#define CBS_TREC2 ((*(volatile Ifx_CBS_TREC*)0xF00004C8u)) /* lint --e(923)*/

/** 38, TG Routing for HSM Control */
#define CBS_TRHSM ((*(volatile Ifx_CBS_TRHSM*)0xF0000438u)) /* lint --e(923)*/

/** 100, Trigger to Host Register */
#define CBS_TRIG0 ((*(volatile Ifx_CBS_TRIG*)0xF0000500u)) /* lint --e(923)*/

/** 104, Trigger to Host Register */
#define CBS_TRIG1 ((*(volatile Ifx_CBS_TRIG*)0xF0000504u)) /* lint --e(923)*/

/** 128, Trigger to Host Register */
#define CBS_TRIG10 ((*(volatile Ifx_CBS_TRIG*)0xF0000528u)) /* lint --e(923)*/

/** 12C, Trigger to Host Register */
#define CBS_TRIG11 ((*(volatile Ifx_CBS_TRIG*)0xF000052Cu)) /* lint --e(923)*/

/** 130, Trigger to Host Register */
#define CBS_TRIG12 ((*(volatile Ifx_CBS_TRIG*)0xF0000530u)) /* lint --e(923)*/

/** 134, Trigger to Host Register */
#define CBS_TRIG13 ((*(volatile Ifx_CBS_TRIG*)0xF0000534u)) /* lint --e(923)*/

/** 138, Trigger to Host Register */
#define CBS_TRIG14 ((*(volatile Ifx_CBS_TRIG*)0xF0000538u)) /* lint --e(923)*/

/** 13C, Trigger to Host Register */
#define CBS_TRIG15 ((*(volatile Ifx_CBS_TRIG*)0xF000053Cu)) /* lint --e(923)*/

/** 140, Trigger to Host Register */
#define CBS_TRIG16 ((*(volatile Ifx_CBS_TRIG*)0xF0000540u)) /* lint --e(923)*/

/** 144, Trigger to Host Register */
#define CBS_TRIG17 ((*(volatile Ifx_CBS_TRIG*)0xF0000544u)) /* lint --e(923)*/

/** 148, Trigger to Host Register */
#define CBS_TRIG18 ((*(volatile Ifx_CBS_TRIG*)0xF0000548u)) /* lint --e(923)*/

/** 14C, Trigger to Host Register */
#define CBS_TRIG19 ((*(volatile Ifx_CBS_TRIG*)0xF000054Cu)) /* lint --e(923)*/

/** 108, Trigger to Host Register */
#define CBS_TRIG2 ((*(volatile Ifx_CBS_TRIG*)0xF0000508u)) /* lint --e(923)*/

/** 150, Trigger to Host Register */
#define CBS_TRIG20 ((*(volatile Ifx_CBS_TRIG*)0xF0000550u)) /* lint --e(923)*/

/** 154, Trigger to Host Register */
#define CBS_TRIG21 ((*(volatile Ifx_CBS_TRIG*)0xF0000554u)) /* lint --e(923)*/

/** 10C, Trigger to Host Register */
#define CBS_TRIG3 ((*(volatile Ifx_CBS_TRIG*)0xF000050Cu)) /* lint --e(923)*/

/** 110, Trigger to Host Register */
#define CBS_TRIG4 ((*(volatile Ifx_CBS_TRIG*)0xF0000510u)) /* lint --e(923)*/

/** 114, Trigger to Host Register */
#define CBS_TRIG5 ((*(volatile Ifx_CBS_TRIG*)0xF0000514u)) /* lint --e(923)*/

/** 118, Trigger to Host Register */
#define CBS_TRIG6 ((*(volatile Ifx_CBS_TRIG*)0xF0000518u)) /* lint --e(923)*/

/** 11C, Trigger to Host Register */
#define CBS_TRIG7 ((*(volatile Ifx_CBS_TRIG*)0xF000051Cu)) /* lint --e(923)*/

/** 120, Trigger to Host Register */
#define CBS_TRIG8 ((*(volatile Ifx_CBS_TRIG*)0xF0000520u)) /* lint --e(923)*/

/** 124, Trigger to Host Register */
#define CBS_TRIG9 ((*(volatile Ifx_CBS_TRIG*)0xF0000524u)) /* lint --e(923)*/

/** A4, Clear Trigger to Host Register */
#define CBS_TRIGC ((*(volatile Ifx_CBS_TRIGC*)0xF00004A4u)) /* lint --e(923)*/

/** A0, Set Trigger to Host Register */
#define CBS_TRIGS ((*(volatile Ifx_CBS_TRIGS*)0xF00004A0u)) /* lint --e(923)*/

/** 3C, TG Routing for MCDS Control */
#define CBS_TRMC ((*(volatile Ifx_CBS_TRMC*)0xF000043Cu)) /* lint --e(923)*/

/** DC, TG Routing for MCDS Triggers */
#define CBS_TRMT ((*(volatile Ifx_CBS_TRMT*)0xF00004DCu)) /* lint --e(923)*/

/** 60, TG Routing for Special Signals */
#define CBS_TRSS ((*(volatile Ifx_CBS_TRSS*)0xF0000460u)) /* lint --e(923)*/

/** E4, TG Routing for OTGB Bits [15:8] */
#define CBS_TRTGB0_H ((*(volatile Ifx_CBS_TRTGB_H*)0xF00004E4u)) /* lint --e(923)*/

/** E0, TG Routing for OTGB Bits [7:0] */
#define CBS_TRTGB0_L ((*(volatile Ifx_CBS_TRTGB_L*)0xF00004E0u)) /* lint --e(923)*/

/** EC, TG Routing for OTGB Bits [15:8] */
#define CBS_TRTGB1_H ((*(volatile Ifx_CBS_TRTGB_H*)0xF00004ECu)) /* lint --e(923)*/

/** E8, TG Routing for OTGB Bits [7:0] */
#define CBS_TRTGB1_L ((*(volatile Ifx_CBS_TRTGB_L*)0xF00004E8u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXCBS_REG_H */

