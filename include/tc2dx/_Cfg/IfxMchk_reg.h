/**
 * \file IfxMchk_reg.h
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
#ifndef IFXMCHK_REG_H
#define IFXMCHK_REG_H
/******************************************************************************/
#include "Mchk/IfxMchk_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** MCHK object */
#define MODULE_MCHK ((*(Ifx_MCHK*)0xF0004000u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MCHK)                               */
/******************************************************************************/

/** 10, Memory Checker Input Register */
#define MCHK_CHK0_IR ((*(volatile Ifx_MCHK_CHK_IR*)0xF0004010u)) /* lint --e(923)*/

/** 14, Memory Checker Result Register */
#define MCHK_CHK0_RR ((*(volatile Ifx_MCHK_CHK_RR*)0xF0004014u)) /* lint --e(923)*/

/** 18, Memory Checker Input Register */
#define MCHK_CHK1_IR ((*(volatile Ifx_MCHK_CHK_IR*)0xF0004018u)) /* lint --e(923)*/

/** 1C, Memory Checker Result Register */
#define MCHK_CHK1_RR ((*(volatile Ifx_MCHK_CHK_RR*)0xF000401Cu)) /* lint --e(923)*/

/** 24, Memory Checker CRC Register */
#define MCHK_CRC0 ((*(volatile Ifx_MCHK_CRC*)0xF0004024u)) /* lint --e(923)*/

/** 28, Memory Checker CRC Register */
#define MCHK_CRC1 ((*(volatile Ifx_MCHK_CRC*)0xF0004028u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define MCHK_ID ((*(volatile Ifx_ID1*)0xF0004008u)) /* lint --e(923)*/

/** Alias for MCHK_CHK0_IR.
 *  Note that this definition is obsolete, use MCHK_CHK0_IR instead.
 * 10, Memory Checker Input Register
 */
#define MCHK_IR0 (MCHK_CHK0_IR)

/** Alias for MCHK_CHK1_IR.
 *  Note that this definition is obsolete, use MCHK_CHK1_IR instead.
 * 18, Memory Checker Input Register
 */
#define MCHK_IR1 (MCHK_CHK1_IR)

/** Alias for MCHK_CHK0_RR.
 *  Note that this definition is obsolete, use MCHK_CHK0_RR instead.
 * 14, Memory Checker Result Register
 */
#define MCHK_RR0 (MCHK_CHK0_RR)

/** Alias for MCHK_CHK1_RR.
 *  Note that this definition is obsolete, use MCHK_CHK1_RR instead.
 * 1C, Memory Checker Result Register
 */
#define MCHK_RR1 (MCHK_CHK1_RR)

/** 20, Memory Checker Write Register */
#define MCHK_WR ((*(volatile Ifx_MCHK_WR*)0xF0004020u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXMCHK_REG_H */

