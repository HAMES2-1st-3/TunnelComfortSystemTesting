/**
 * \file IfxEbcu_reg.h
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
#ifndef IFXEBCU_REG_H
#define IFXEBCU_REG_H
/******************************************************************************/
#include "Ebcu/IfxEbcu_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** EBCU object */
#define MODULE_EBCU0 ((*(Ifx_EBCU*)0xF00E0100u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-EBCU0)                              */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define EBCU0_ACCEN0 ((*(volatile Ifx_EBCU_ACCEN0*)0xF00E01FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define EBCU0_ACCEN1 ((*(volatile Ifx_EBCU_ACCEN1*)0xF00E01F8u)) /* lint --e(923)*/

/** 10, EBCU Control Register */
#define EBCU0_CON ((*(volatile Ifx_EBCU_CON*)0xF00E0110u)) /* lint --e(923)*/

/** 38, Debug Address 1 Register */
#define EBCU0_DBADR1 ((*(volatile Ifx_EBCU_DBADR1*)0xF00E0138u)) /* lint --e(923)*/

/** 3C, Debug Address 2 Register */
#define EBCU0_DBADR2 ((*(volatile Ifx_EBCU_DBADR2*)0xF00E013Cu)) /* lint --e(923)*/

/** 48, Debug Trapped Address Register */
#define EBCU0_DBADRT ((*(volatile Ifx_EBCU_DBADRT*)0xF00E0148u)) /* lint --e(923)*/

/** 40, Debug Bus Operation Signals Register */
#define EBCU0_DBBOS ((*(volatile Ifx_EBCU_DBBOS*)0xF00E0140u)) /* lint --e(923)*/

/** 4C, Debug Trapped Bus Operation Signals Register */
#define EBCU0_DBBOST ((*(volatile Ifx_EBCU_DBBOST*)0xF00E014Cu)) /* lint --e(923)*/

/** 30, Debug Control Register */
#define EBCU0_DBCNTL ((*(volatile Ifx_EBCU_DBCNTL*)0xF00E0130u)) /* lint --e(923)*/

/** 50, Debug Data Status Register */
#define EBCU0_DBDAT ((*(volatile Ifx_EBCU_DBDAT*)0xF00E0150u)) /* lint --e(923)*/

/** 44, Debug Trapped Master Register */
#define EBCU0_DBGNTT ((*(volatile Ifx_EBCU_DBGNTT*)0xF00E0144u)) /* lint --e(923)*/

/** 34, Debug Grant Mask Register */
#define EBCU0_DBGRNT ((*(volatile Ifx_EBCU_DBGRNT*)0xF00E0134u)) /* lint --e(923)*/

/** 24, Error Address Capture Register */
#define EBCU0_EADD ((*(volatile Ifx_EBCU_EADD*)0xF00E0124u)) /* lint --e(923)*/

/** 20, Error Control Capture Register */
#define EBCU0_ECON ((*(volatile Ifx_EBCU_ECON*)0xF00E0120u)) /* lint --e(923)*/

/** 28, Error Data Capture Register */
#define EBCU0_EDAT ((*(volatile Ifx_EBCU_EDAT*)0xF00E0128u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define EBCU0_ID ((*(volatile Ifx_ID2*)0xF00E0108u)) /* lint --e(923)*/

/** 14, Arbiter Priority Register */
#define EBCU0_PRIOH ((*(volatile Ifx_EBCU_PRIOH*)0xF00E0114u)) /* lint --e(923)*/

/** 18, Arbiter Priority Register */
#define EBCU0_PRIOL ((*(volatile Ifx_EBCU_PRIOL*)0xF00E0118u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXEBCU_REG_H */

