/**
 * \file IfxLmu_reg.h
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
#ifndef IFXLMU_REG_H
#define IFXLMU_REG_H
/******************************************************************************/
#include "Lmu/IfxLmu_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** LMU object */
#define MODULE_LMU ((*(Ifx_LMU*)0xF8700800u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-LMU)                               */
/******************************************************************************/

/** 10, LMU Access Enable Register 0 */
#define LMU_ACCEN0 ((*(volatile Ifx_LMU_ACCEN0*)0xF8700810u)) /* lint --e(923)*/

/** 14, LMU Access Enable Register 1 */
#define LMU_ACCEN1 ((*(volatile Ifx_LMU_ACCEN1*)0xF8700814u)) /* lint --e(923)*/

/** 30, LMU Buffer Control Register */
#define LMU_BUFCON0 ((*(volatile Ifx_LMU_BUFCON*)0xF8700830u)) /* lint --e(923)*/

/** 34, LMU Buffer Control Register */
#define LMU_BUFCON1 ((*(volatile Ifx_LMU_BUFCON*)0xF8700834u)) /* lint --e(923)*/

/** 38, LMU Buffer Control Register */
#define LMU_BUFCON2 ((*(volatile Ifx_LMU_BUFCON*)0xF8700838u)) /* lint --e(923)*/

/** 0, LMU Clock Control Register */
#define LMU_CLC ((*(volatile Ifx_CLC5*)0xF8700800u)) /* lint --e(923)*/

/** 20, LMU Memory Control Register */
#define LMU_MEMCON ((*(volatile Ifx_LMU_MEMCON*)0xF8700820u)) /* lint --e(923)*/

/** 8, LMU Module ID Register */
#define LMU_MODID ((*(volatile Ifx_LMU_MODID*)0xF8700808u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXLMU_REG_H */

