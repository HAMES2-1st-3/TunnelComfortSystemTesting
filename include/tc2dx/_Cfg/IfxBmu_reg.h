/**
 * \file IfxBmu_reg.h
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
#ifndef IFXBMU_REG_H
#define IFXBMU_REG_H
/******************************************************************************/
#include "Bmu/IfxBmu_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** BMU object */
#define MODULE_BMU0 ((*(Ifx_BMU*)0xF0030800u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-BMU0)                               */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define BMU0_ACCEN0 ((*(volatile Ifx_BMU_ACCEN0*)0xF00308FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define BMU0_ACCEN1 ((*(volatile Ifx_BMU_ACCEN1*)0xF00308F8u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define BMU0_CLC ((*(volatile Ifx_CLC7*)0xF0030800u)) /* lint --e(923)*/

/** 20, Transaction Filtering Control */
#define BMU0_CTL ((*(volatile Ifx_BMU_CTL*)0xF0030820u)) /* lint --e(923)*/

/** 40, Fifo Monitor control register */
#define BMU0_FMCTL ((*(volatile Ifx_BMU_FMCTL*)0xF0030840u)) /* lint --e(923)*/

/** 44, Fifo Monitor Status Register */
#define BMU0_FMSTS ((*(volatile Ifx_BMU_FMSTS*)0xF0030844u)) /* lint --e(923)*/

/** 48, Fifo Monitor: Fullness Threshold Register */
#define BMU0_FMTH ((*(volatile Ifx_BMU_FMTH*)0xF0030848u)) /* lint --e(923)*/

/** 28, Fullness Information for Bus Transaction Fifo */
#define BMU0_FULLNESS ((*(volatile Ifx_BMU_FULLNESS*)0xF0030828u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define BMU0_ID ((*(volatile Ifx_ID1*)0xF0030808u)) /* lint --e(923)*/

/** 30, Peripheral Set 0 Configuration */
#define BMU0_PSET0 ((*(volatile Ifx_BMU_PSET0*)0xF0030830u)) /* lint --e(923)*/

/** 34, Peripheral Set 1 Configuration */
#define BMU0_PSET1 ((*(volatile Ifx_BMU_PSET1*)0xF0030834u)) /* lint --e(923)*/

/** 38, Peripheral Set 2 Configuration */
#define BMU0_PSET2 ((*(volatile Ifx_BMU_PSET2*)0xF0030838u)) /* lint --e(923)*/

/** 24, Pointer Information for Bus Transaction Fifo */
#define BMU0_PTR ((*(volatile Ifx_BMU_PTR*)0xF0030824u)) /* lint --e(923)*/

/** 3C, FPI Transaction ID Set 0 Configuration */
#define BMU0_TID ((*(volatile Ifx_BMU_TID*)0xF003083Cu)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXBMU_REG_H */

