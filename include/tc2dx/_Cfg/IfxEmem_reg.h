/**
 * \file IfxEmem_reg.h
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
#ifndef IFXEMEM_REG_H
#define IFXEMEM_REG_H
/******************************************************************************/
#include "Emem/IfxEmem_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** EMEM object */
#define MODULE_EMEM ((*(Ifx_EMEM*)0xF00E6000u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-EMEM)                               */
/******************************************************************************/

/** 0, Clock Control Register */
#define EMEM_CLC ((*(volatile Ifx_CLC5*)0xF00E6000u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define EMEM_ID ((*(volatile Ifx_ID1*)0xF00E6008u)) /* lint --e(923)*/

/** 34, Stand-by RAM Control Register */
#define EMEM_SBRCTR ((*(volatile Ifx_EMEM_SBRCTR*)0xF00E6034u)) /* lint --e(923)*/

/** 24, Calibration Tile Control Register */
#define EMEM_TILECC ((*(volatile Ifx_EMEM_TILECC*)0xF00E6024u)) /* lint --e(923)*/

/** 20, Tile Configuration Register */
#define EMEM_TILECONFIG ((*(volatile Ifx_EMEM_TILECONFIG*)0xF00E6020u)) /* lint --e(923)*/

/** 28, Trace Tile Control Register */
#define EMEM_TILECT ((*(volatile Ifx_EMEM_TILECT*)0xF00E6028u)) /* lint --e(923)*/

/** 2C, Tile Status Register */
#define EMEM_TILESTATE ((*(volatile Ifx_EMEM_TILESTATE*)0xF00E602Cu)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXEMEM_REG_H */

