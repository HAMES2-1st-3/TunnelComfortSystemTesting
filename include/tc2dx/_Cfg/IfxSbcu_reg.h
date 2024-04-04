/**
 * \file IfxSbcu_reg.h
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
#ifndef IFXSBCU_REG_H
#define IFXSBCU_REG_H
/******************************************************************************/
#include "Sbcu/IfxSbcu_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** SBCU object */
#define MODULE_SBCU0 ((*(Ifx_SBCU*)0xF0030000u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-SBCU0)                              */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define SBCU0_ACCEN0 ((*(volatile Ifx_SBCU_ACCEN0*)0xF00300FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define SBCU0_ACCEN1 ((*(volatile Ifx_SBCU_ACCEN1*)0xF00300F8u)) /* lint --e(923)*/

/** 10, SBCU Control Register */
#define SBCU0_CON ((*(volatile Ifx_SBCU_CON*)0xF0030010u)) /* lint --e(923)*/

/** 38, SBCU Debug Address 1 Register */
#define SBCU0_DBADR1 ((*(volatile Ifx_SBCU_DBADR1*)0xF0030038u)) /* lint --e(923)*/

/** 3C, SBCU Debug Address 2 Register */
#define SBCU0_DBADR2 ((*(volatile Ifx_SBCU_DBADR2*)0xF003003Cu)) /* lint --e(923)*/

/** 48, SBCU Debug Trapped Address Register */
#define SBCU0_DBADRT ((*(volatile Ifx_SBCU_DBADRT*)0xF0030048u)) /* lint --e(923)*/

/** 40, SBCU Debug Bus Operation Signals Register */
#define SBCU0_DBBOS ((*(volatile Ifx_SBCU_DBBOS*)0xF0030040u)) /* lint --e(923)*/

/** 4C, SBCU Debug Trapped Bus Operation Signals Register */
#define SBCU0_DBBOST ((*(volatile Ifx_SBCU_DBBOST*)0xF003004Cu)) /* lint --e(923)*/

/** 30, SBCU Debug Control Register */
#define SBCU0_DBCNTL ((*(volatile Ifx_SBCU_DBCNTL*)0xF0030030u)) /* lint --e(923)*/

/** 50, SBCU Debug Data Status Register */
#define SBCU0_DBDAT ((*(volatile Ifx_SBCU_DBDAT*)0xF0030050u)) /* lint --e(923)*/

/** 44, SBCU Debug Trapped Master Register */
#define SBCU0_DBGNTT ((*(volatile Ifx_SBCU_DBGNTT*)0xF0030044u)) /* lint --e(923)*/

/** 34, SBCU Debug Grant Mask Register */
#define SBCU0_DBGRNT ((*(volatile Ifx_SBCU_DBGRNT*)0xF0030034u)) /* lint --e(923)*/

/** 24, SBCU Error Address Capture Register */
#define SBCU0_EADD ((*(volatile Ifx_SBCU_EADD*)0xF0030024u)) /* lint --e(923)*/

/** 20, SBCU Error Control Capture Register */
#define SBCU0_ECON ((*(volatile Ifx_SBCU_ECON*)0xF0030020u)) /* lint --e(923)*/

/** 28, SBCU Error Data Capture Register */
#define SBCU0_EDAT ((*(volatile Ifx_SBCU_EDAT*)0xF0030028u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define SBCU0_ID ((*(volatile Ifx_ID2*)0xF0030008u)) /* lint --e(923)*/

/** 14, Arbiter Priority Register */
#define SBCU0_PRIOH ((*(volatile Ifx_SBCU_PRIOH*)0xF0030014u)) /* lint --e(923)*/

/** 18, Arbiter Priority Register */
#define SBCU0_PRIOL ((*(volatile Ifx_SBCU_PRIOL*)0xF0030018u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXSBCU_REG_H */

