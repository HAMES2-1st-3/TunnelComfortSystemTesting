/**
 * \file IfxSmu_reg.h
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
#ifndef IFXSMU_REG_H
#define IFXSMU_REG_H
/******************************************************************************/
#include "Smu/IfxSmu_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** SMU object */
#define MODULE_SMU ((*(Ifx_SMU*)0xF0036800u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-SMU)                               */
/******************************************************************************/

/** FC, SMU Access Enable Register 0 */
#define SMU_ACCEN0 ((*(volatile Ifx_SMU_ACCEN0*)0xF00368FCu)) /* lint --e(923)*/

/** F8, SMU Access Enable Register 1 */
#define SMU_ACCEN1 ((*(volatile Ifx_SMU_ACCEN1*)0xF00368F8u)) /* lint --e(923)*/

/** C0, Alarm Status Register */
#define SMU_AD0 ((*(volatile Ifx_SMU_AD*)0xF00368C0u)) /* lint --e(923)*/

/** C4, Alarm Status Register */
#define SMU_AD1 ((*(volatile Ifx_SMU_AD*)0xF00368C4u)) /* lint --e(923)*/

/** C8, Alarm Status Register */
#define SMU_AD2 ((*(volatile Ifx_SMU_AD*)0xF00368C8u)) /* lint --e(923)*/

/** CC, Alarm Status Register */
#define SMU_AD3 ((*(volatile Ifx_SMU_AD*)0xF00368CCu)) /* lint --e(923)*/

/** D0, Alarm Status Register */
#define SMU_AD4 ((*(volatile Ifx_SMU_AD*)0xF00368D0u)) /* lint --e(923)*/

/** D4, Alarm Status Register */
#define SMU_AD5 ((*(volatile Ifx_SMU_AD*)0xF00368D4u)) /* lint --e(923)*/

/** A8, Alarm Status Register */
#define SMU_AG0 ((*(volatile Ifx_SMU_AG*)0xF00368A8u)) /* lint --e(923)*/

/** Alias for SMU_AGFSP0.
 *  Note that this definition is obsolete, use SMU_AGFSP0 instead.
 * 40, Command Register
 */
#define SMU_AG0FSP (SMU_AGFSP0)

/** AC, Alarm Status Register */
#define SMU_AG1 ((*(volatile Ifx_SMU_AG*)0xF00368ACu)) /* lint --e(923)*/

/** Alias for SMU_AGFSP1.
 *  Note that this definition is obsolete, use SMU_AGFSP1 instead.
 * 44, Command Register
 */
#define SMU_AG1FSP (SMU_AGFSP1)

/** B0, Alarm Status Register */
#define SMU_AG2 ((*(volatile Ifx_SMU_AG*)0xF00368B0u)) /* lint --e(923)*/

/** Alias for SMU_AGFSP2.
 *  Note that this definition is obsolete, use SMU_AGFSP2 instead.
 * 48, Command Register
 */
#define SMU_AG2FSP (SMU_AGFSP2)

/** B4, Alarm Status Register */
#define SMU_AG3 ((*(volatile Ifx_SMU_AG*)0xF00368B4u)) /* lint --e(923)*/

/** Alias for SMU_AGFSP3.
 *  Note that this definition is obsolete, use SMU_AGFSP3 instead.
 * 4C, Command Register
 */
#define SMU_AG3FSP (SMU_AGFSP3)

/** B8, Alarm Status Register */
#define SMU_AG4 ((*(volatile Ifx_SMU_AG*)0xF00368B8u)) /* lint --e(923)*/

/** Alias for SMU_AGFSP4.
 *  Note that this definition is obsolete, use SMU_AGFSP4 instead.
 * 50, Command Register
 */
#define SMU_AG4FSP (SMU_AGFSP4)

/** BC, Alarm Status Register */
#define SMU_AG5 ((*(volatile Ifx_SMU_AG*)0xF00368BCu)) /* lint --e(923)*/

/** Alias for SMU_AGFSP5.
 *  Note that this definition is obsolete, use SMU_AGFSP5 instead.
 * 54, Command Register
 */
#define SMU_AG5FSP (SMU_AGFSP5)

/** 2C, Alarm Global Configuration */
#define SMU_AGC ((*(volatile Ifx_SMU_AGC*)0xF003682Cu)) /* lint --e(923)*/

/** 60, Command Register */
#define SMU_AGCF0_0 ((*(volatile Ifx_SMU_AGCF*)0xF0036860u)) /* lint --e(923)*/

/** 64, Command Register */
#define SMU_AGCF0_1 ((*(volatile Ifx_SMU_AGCF*)0xF0036864u)) /* lint --e(923)*/

/** 68, Command Register */
#define SMU_AGCF0_2 ((*(volatile Ifx_SMU_AGCF*)0xF0036868u)) /* lint --e(923)*/

/** 6C, Command Register */
#define SMU_AGCF1_0 ((*(volatile Ifx_SMU_AGCF*)0xF003686Cu)) /* lint --e(923)*/

/** 70, Command Register */
#define SMU_AGCF1_1 ((*(volatile Ifx_SMU_AGCF*)0xF0036870u)) /* lint --e(923)*/

/** 74, Command Register */
#define SMU_AGCF1_2 ((*(volatile Ifx_SMU_AGCF*)0xF0036874u)) /* lint --e(923)*/

/** 78, Command Register */
#define SMU_AGCF2_0 ((*(volatile Ifx_SMU_AGCF*)0xF0036878u)) /* lint --e(923)*/

/** 7C, Command Register */
#define SMU_AGCF2_1 ((*(volatile Ifx_SMU_AGCF*)0xF003687Cu)) /* lint --e(923)*/

/** 80, Command Register */
#define SMU_AGCF2_2 ((*(volatile Ifx_SMU_AGCF*)0xF0036880u)) /* lint --e(923)*/

/** 84, Command Register */
#define SMU_AGCF3_0 ((*(volatile Ifx_SMU_AGCF*)0xF0036884u)) /* lint --e(923)*/

/** 88, Command Register */
#define SMU_AGCF3_1 ((*(volatile Ifx_SMU_AGCF*)0xF0036888u)) /* lint --e(923)*/

/** 8C, Command Register */
#define SMU_AGCF3_2 ((*(volatile Ifx_SMU_AGCF*)0xF003688Cu)) /* lint --e(923)*/

/** 90, Command Register */
#define SMU_AGCF4_0 ((*(volatile Ifx_SMU_AGCF*)0xF0036890u)) /* lint --e(923)*/

/** 94, Command Register */
#define SMU_AGCF4_1 ((*(volatile Ifx_SMU_AGCF*)0xF0036894u)) /* lint --e(923)*/

/** 98, Command Register */
#define SMU_AGCF4_2 ((*(volatile Ifx_SMU_AGCF*)0xF0036898u)) /* lint --e(923)*/

/** 9C, Command Register */
#define SMU_AGCF5_0 ((*(volatile Ifx_SMU_AGCF*)0xF003689Cu)) /* lint --e(923)*/

/** A0, Command Register */
#define SMU_AGCF5_1 ((*(volatile Ifx_SMU_AGCF*)0xF00368A0u)) /* lint --e(923)*/

/** A4, Command Register */
#define SMU_AGCF5_2 ((*(volatile Ifx_SMU_AGCF*)0xF00368A4u)) /* lint --e(923)*/

/** 40, Command Register */
#define SMU_AGFSP0 ((*(volatile Ifx_SMU_AGFSP*)0xF0036840u)) /* lint --e(923)*/

/** 44, Command Register */
#define SMU_AGFSP1 ((*(volatile Ifx_SMU_AGFSP*)0xF0036844u)) /* lint --e(923)*/

/** 48, Command Register */
#define SMU_AGFSP2 ((*(volatile Ifx_SMU_AGFSP*)0xF0036848u)) /* lint --e(923)*/

/** 4C, Command Register */
#define SMU_AGFSP3 ((*(volatile Ifx_SMU_AGFSP*)0xF003684Cu)) /* lint --e(923)*/

/** 50, Command Register */
#define SMU_AGFSP4 ((*(volatile Ifx_SMU_AGFSP*)0xF0036850u)) /* lint --e(923)*/

/** 54, Command Register */
#define SMU_AGFSP5 ((*(volatile Ifx_SMU_AGFSP*)0xF0036854u)) /* lint --e(923)*/

/** 0, Control Clock Register */
#define SMU_CLC ((*(volatile Ifx_CLC4*)0xF0036800u)) /* lint --e(923)*/

/** 20, Command Register */
#define SMU_CMD ((*(volatile Ifx_SMU_CMD*)0xF0036820u)) /* lint --e(923)*/

/** 34, Debug Register */
#define SMU_DBG ((*(volatile Ifx_SMU_DBG*)0xF0036834u)) /* lint --e(923)*/

/** 28, Fault Signaling Protocol */
#define SMU_FSP ((*(volatile Ifx_SMU_FSP*)0xF0036828u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define SMU_ID ((*(volatile Ifx_ID1*)0xF0036808u)) /* lint --e(923)*/

/** 30, Key Register */
#define SMU_KEYS ((*(volatile Ifx_SMU_KEYS*)0xF0036830u)) /* lint --e(923)*/

/** F4, SMU Reset Register 0 */
#define SMU_KRST0 ((*(volatile Ifx_SMU_KRST0*)0xF00368F4u)) /* lint --e(923)*/

/** F0, SMU Reset Register 1 */
#define SMU_KRST1 ((*(volatile Ifx_SMU_KRST1*)0xF00368F0u)) /* lint --e(923)*/

/** EC, SMU Reset Status Clear Register */
#define SMU_KRSTCLR ((*(volatile Ifx_SMU_KRSTCLR*)0xF00368ECu)) /* lint --e(923)*/

/** E8, OCDS Control and Status */
#define SMU_OCS ((*(volatile Ifx_SMU_OCS*)0xF00368E8u)) /* lint --e(923)*/

/** E0, Port Control */
#define SMU_PCTL ((*(volatile Ifx_SMU_PCTL*)0xF00368E0u)) /* lint --e(923)*/

/** D8, Register Monitor Control */
#define SMU_RMCTL ((*(volatile Ifx_SMU_RMCTL*)0xF00368D8u)) /* lint --e(923)*/

/** DC, Register Monitor Status */
#define SMU_RMSTS ((*(volatile Ifx_SMU_RMSTS*)0xF00368DCu)) /* lint --e(923)*/

/** 24, Status Register */
#define SMU_STS ((*(volatile Ifx_SMU_STS*)0xF0036824u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXSMU_REG_H */

