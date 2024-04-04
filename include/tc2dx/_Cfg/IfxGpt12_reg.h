/**
 * \file IfxGpt12_reg.h
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
#ifndef IFXGPT12_REG_H
#define IFXGPT12_REG_H
/******************************************************************************/
#include "Gpt12/IfxGpt12_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** GPT12 object */
#define MODULE_GPT120 ((*(Ifx_GPT12*)0xF0002E00u)) /* lint --e(923)*/

/** GPT12 object */
#define MODULE_GPT121 ((*(Ifx_GPT12*)0xF0002F00u)) /* lint --e(923)*/

/******************************************************************************/
/*                             Define (2-GPT120)                              */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define GPT120_ACCEN0 ((*(volatile Ifx_GPT12_ACCEN0*)0xF0002EFCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define GPT120_ACCEN1 ((*(volatile Ifx_GPT12_ACCEN1*)0xF0002EF8u)) /* lint --e(923)*/

/** 30, Capture and Reload Register */
#define GPT120_CAPREL ((*(volatile Ifx_GPT12_CAPREL*)0xF0002E30u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define GPT120_CLC ((*(volatile Ifx_CLC1*)0xF0002E00u)) /* lint --e(923)*/

/** 8, Identification Register */
#define GPT120_ID ((*(volatile Ifx_ID1*)0xF0002E08u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define GPT120_KRST0 ((*(volatile Ifx_GPT12_KRST0*)0xF0002EF4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define GPT120_KRST1 ((*(volatile Ifx_GPT12_KRST1*)0xF0002EF0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define GPT120_KRSTCLR ((*(volatile Ifx_GPT12_KRSTCLR*)0xF0002EECu)) /* lint --e(923)*/

/** E8, OCDS Control and Status Register */
#define GPT120_OCS ((*(volatile Ifx_GPT12_OCS*)0xF0002EE8u)) /* lint --e(923)*/

/** 4, Port Input Select Register */
#define GPT120_PISEL ((*(volatile Ifx_GPT12_PISEL*)0xF0002E04u)) /* lint --e(923)*/

/** 34, Timer T2 Register */
#define GPT120_T2 ((*(volatile Ifx_GPT12_T2*)0xF0002E34u)) /* lint --e(923)*/

/** 10, Timer T2 Control Register */
#define GPT120_T2CON ((*(volatile Ifx_GPT12_T2CON*)0xF0002E10u)) /* lint --e(923)*/

/** 38, Timer T3 Register */
#define GPT120_T3 ((*(volatile Ifx_GPT12_T3*)0xF0002E38u)) /* lint --e(923)*/

/** 14, Timer T3 Control Register */
#define GPT120_T3CON ((*(volatile Ifx_GPT12_T3CON*)0xF0002E14u)) /* lint --e(923)*/

/** 3C, Timer T4 Register */
#define GPT120_T4 ((*(volatile Ifx_GPT12_T4*)0xF0002E3Cu)) /* lint --e(923)*/

/** 18, Timer T4 Control Register */
#define GPT120_T4CON ((*(volatile Ifx_GPT12_T4CON*)0xF0002E18u)) /* lint --e(923)*/

/** 40, Timer T5 Register */
#define GPT120_T5 ((*(volatile Ifx_GPT12_T5*)0xF0002E40u)) /* lint --e(923)*/

/** 1C, Timer T5 Control Register */
#define GPT120_T5CON ((*(volatile Ifx_GPT12_T5CON*)0xF0002E1Cu)) /* lint --e(923)*/

/** 44, Timer T6 Register */
#define GPT120_T6 ((*(volatile Ifx_GPT12_T6*)0xF0002E44u)) /* lint --e(923)*/

/** 20, Timer T6 Control Register */
#define GPT120_T6CON ((*(volatile Ifx_GPT12_T6CON*)0xF0002E20u)) /* lint --e(923)*/

/******************************************************************************/
/*                             Define (2-GPT121)                              */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define GPT121_ACCEN0 ((*(volatile Ifx_GPT12_ACCEN0*)0xF0002FFCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define GPT121_ACCEN1 ((*(volatile Ifx_GPT12_ACCEN1*)0xF0002FF8u)) /* lint --e(923)*/

/** 30, Capture and Reload Register */
#define GPT121_CAPREL ((*(volatile Ifx_GPT12_CAPREL*)0xF0002F30u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define GPT121_CLC ((*(volatile Ifx_CLC1*)0xF0002F00u)) /* lint --e(923)*/

/** 8, Identification Register */
#define GPT121_ID ((*(volatile Ifx_ID1*)0xF0002F08u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define GPT121_KRST0 ((*(volatile Ifx_GPT12_KRST0*)0xF0002FF4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define GPT121_KRST1 ((*(volatile Ifx_GPT12_KRST1*)0xF0002FF0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define GPT121_KRSTCLR ((*(volatile Ifx_GPT12_KRSTCLR*)0xF0002FECu)) /* lint --e(923)*/

/** E8, OCDS Control and Status Register */
#define GPT121_OCS ((*(volatile Ifx_GPT12_OCS*)0xF0002FE8u)) /* lint --e(923)*/

/** 4, Port Input Select Register */
#define GPT121_PISEL ((*(volatile Ifx_GPT12_PISEL*)0xF0002F04u)) /* lint --e(923)*/

/** 34, Timer T2 Register */
#define GPT121_T2 ((*(volatile Ifx_GPT12_T2*)0xF0002F34u)) /* lint --e(923)*/

/** 10, Timer T2 Control Register */
#define GPT121_T2CON ((*(volatile Ifx_GPT12_T2CON*)0xF0002F10u)) /* lint --e(923)*/

/** 38, Timer T3 Register */
#define GPT121_T3 ((*(volatile Ifx_GPT12_T3*)0xF0002F38u)) /* lint --e(923)*/

/** 14, Timer T3 Control Register */
#define GPT121_T3CON ((*(volatile Ifx_GPT12_T3CON*)0xF0002F14u)) /* lint --e(923)*/

/** 3C, Timer T4 Register */
#define GPT121_T4 ((*(volatile Ifx_GPT12_T4*)0xF0002F3Cu)) /* lint --e(923)*/

/** 18, Timer T4 Control Register */
#define GPT121_T4CON ((*(volatile Ifx_GPT12_T4CON*)0xF0002F18u)) /* lint --e(923)*/

/** 40, Timer T5 Register */
#define GPT121_T5 ((*(volatile Ifx_GPT12_T5*)0xF0002F40u)) /* lint --e(923)*/

/** 1C, Timer T5 Control Register */
#define GPT121_T5CON ((*(volatile Ifx_GPT12_T5CON*)0xF0002F1Cu)) /* lint --e(923)*/

/** 44, Timer T6 Register */
#define GPT121_T6 ((*(volatile Ifx_GPT12_T6*)0xF0002F44u)) /* lint --e(923)*/

/** 20, Timer T6 Control Register */
#define GPT121_T6CON ((*(volatile Ifx_GPT12_T6CON*)0xF0002F20u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXGPT12_REG_H */

