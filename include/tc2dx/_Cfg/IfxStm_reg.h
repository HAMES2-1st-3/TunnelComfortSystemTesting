/**
 * \file IfxStm_reg.h
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
#ifndef IFXSTM_REG_H
#define IFXSTM_REG_H
/******************************************************************************/
#include "Stm/IfxStm_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** STM object */
#define MODULE_STM0 ((*(Ifx_STM*)0xF0000000u)) /* lint --e(923)*/

/** STM object */
#define MODULE_STM1 ((*(Ifx_STM*)0xF0000100u)) /* lint --e(923)*/

/** STM object */
#define MODULE_STM2 ((*(Ifx_STM*)0xF0000200u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-STM0)                               */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define STM0_ACCEN0 ((*(volatile Ifx_STM_ACCEN0*)0xF00000FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define STM0_ACCEN1 ((*(volatile Ifx_STM_ACCEN1*)0xF00000F8u)) /* lint --e(923)*/

/** 2C, Timer Capture Register */
#define STM0_CAP ((*(volatile Ifx_STM_CAP*)0xF000002Cu)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define STM0_CLC ((*(volatile Ifx_CLC3*)0xF0000000u)) /* lint --e(923)*/

/** 38, Compare Match Control Register */
#define STM0_CMCON ((*(volatile Ifx_STM_CMCON*)0xF0000038u)) /* lint --e(923)*/

/** 30, Compare Register */
#define STM0_CMP0 ((*(volatile Ifx_STM_CMP*)0xF0000030u)) /* lint --e(923)*/

/** 34, Compare Register */
#define STM0_CMP1 ((*(volatile Ifx_STM_CMP*)0xF0000034u)) /* lint --e(923)*/

/** 3C, Interrupt Control Register */
#define STM0_ICR ((*(volatile Ifx_STM_ICR*)0xF000003Cu)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define STM0_ID ((*(volatile Ifx_ID1*)0xF0000008u)) /* lint --e(923)*/

/** 40, Interrupt Set/Clear Register */
#define STM0_ISCR ((*(volatile Ifx_STM_ISCR*)0xF0000040u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define STM0_KRST0 ((*(volatile Ifx_STM_KRST0*)0xF00000F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define STM0_KRST1 ((*(volatile Ifx_STM_KRST1*)0xF00000F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define STM0_KRSTCLR ((*(volatile Ifx_STM_KRSTCLR*)0xF00000ECu)) /* lint --e(923)*/

/** E8, OCDS Control and Status */
#define STM0_OCS ((*(volatile Ifx_STM_OCS*)0xF00000E8u)) /* lint --e(923)*/

/** 10, Timer Register 0 */
#define STM0_TIM0 ((*(volatile Ifx_STM_TIM0*)0xF0000010u)) /* lint --e(923)*/

/** 14, Timer Register 1 */
#define STM0_TIM1 ((*(volatile Ifx_STM_TIM1*)0xF0000014u)) /* lint --e(923)*/

/** 18, Timer Register 2 */
#define STM0_TIM2 ((*(volatile Ifx_STM_TIM2*)0xF0000018u)) /* lint --e(923)*/

/** 1C, Timer Register 3 */
#define STM0_TIM3 ((*(volatile Ifx_STM_TIM3*)0xF000001Cu)) /* lint --e(923)*/

/** 20, Timer Register 4 */
#define STM0_TIM4 ((*(volatile Ifx_STM_TIM4*)0xF0000020u)) /* lint --e(923)*/

/** 24, Timer Register 5 */
#define STM0_TIM5 ((*(volatile Ifx_STM_TIM5*)0xF0000024u)) /* lint --e(923)*/

/** 28, Timer Register 6 */
#define STM0_TIM6 ((*(volatile Ifx_STM_TIM6*)0xF0000028u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-STM1)                               */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define STM1_ACCEN0 ((*(volatile Ifx_STM_ACCEN0*)0xF00001FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define STM1_ACCEN1 ((*(volatile Ifx_STM_ACCEN1*)0xF00001F8u)) /* lint --e(923)*/

/** 2C, Timer Capture Register */
#define STM1_CAP ((*(volatile Ifx_STM_CAP*)0xF000012Cu)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define STM1_CLC ((*(volatile Ifx_CLC3*)0xF0000100u)) /* lint --e(923)*/

/** 38, Compare Match Control Register */
#define STM1_CMCON ((*(volatile Ifx_STM_CMCON*)0xF0000138u)) /* lint --e(923)*/

/** 30, Compare Register */
#define STM1_CMP0 ((*(volatile Ifx_STM_CMP*)0xF0000130u)) /* lint --e(923)*/

/** 34, Compare Register */
#define STM1_CMP1 ((*(volatile Ifx_STM_CMP*)0xF0000134u)) /* lint --e(923)*/

/** 3C, Interrupt Control Register */
#define STM1_ICR ((*(volatile Ifx_STM_ICR*)0xF000013Cu)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define STM1_ID ((*(volatile Ifx_ID1*)0xF0000108u)) /* lint --e(923)*/

/** 40, Interrupt Set/Clear Register */
#define STM1_ISCR ((*(volatile Ifx_STM_ISCR*)0xF0000140u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define STM1_KRST0 ((*(volatile Ifx_STM_KRST0*)0xF00001F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define STM1_KRST1 ((*(volatile Ifx_STM_KRST1*)0xF00001F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define STM1_KRSTCLR ((*(volatile Ifx_STM_KRSTCLR*)0xF00001ECu)) /* lint --e(923)*/

/** E8, OCDS Control and Status */
#define STM1_OCS ((*(volatile Ifx_STM_OCS*)0xF00001E8u)) /* lint --e(923)*/

/** 10, Timer Register 0 */
#define STM1_TIM0 ((*(volatile Ifx_STM_TIM0*)0xF0000110u)) /* lint --e(923)*/

/** 14, Timer Register 1 */
#define STM1_TIM1 ((*(volatile Ifx_STM_TIM1*)0xF0000114u)) /* lint --e(923)*/

/** 18, Timer Register 2 */
#define STM1_TIM2 ((*(volatile Ifx_STM_TIM2*)0xF0000118u)) /* lint --e(923)*/

/** 1C, Timer Register 3 */
#define STM1_TIM3 ((*(volatile Ifx_STM_TIM3*)0xF000011Cu)) /* lint --e(923)*/

/** 20, Timer Register 4 */
#define STM1_TIM4 ((*(volatile Ifx_STM_TIM4*)0xF0000120u)) /* lint --e(923)*/

/** 24, Timer Register 5 */
#define STM1_TIM5 ((*(volatile Ifx_STM_TIM5*)0xF0000124u)) /* lint --e(923)*/

/** 28, Timer Register 6 */
#define STM1_TIM6 ((*(volatile Ifx_STM_TIM6*)0xF0000128u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-STM2)                               */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define STM2_ACCEN0 ((*(volatile Ifx_STM_ACCEN0*)0xF00002FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define STM2_ACCEN1 ((*(volatile Ifx_STM_ACCEN1*)0xF00002F8u)) /* lint --e(923)*/

/** 2C, Timer Capture Register */
#define STM2_CAP ((*(volatile Ifx_STM_CAP*)0xF000022Cu)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define STM2_CLC ((*(volatile Ifx_CLC3*)0xF0000200u)) /* lint --e(923)*/

/** 38, Compare Match Control Register */
#define STM2_CMCON ((*(volatile Ifx_STM_CMCON*)0xF0000238u)) /* lint --e(923)*/

/** 30, Compare Register */
#define STM2_CMP0 ((*(volatile Ifx_STM_CMP*)0xF0000230u)) /* lint --e(923)*/

/** 34, Compare Register */
#define STM2_CMP1 ((*(volatile Ifx_STM_CMP*)0xF0000234u)) /* lint --e(923)*/

/** 3C, Interrupt Control Register */
#define STM2_ICR ((*(volatile Ifx_STM_ICR*)0xF000023Cu)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define STM2_ID ((*(volatile Ifx_ID1*)0xF0000208u)) /* lint --e(923)*/

/** 40, Interrupt Set/Clear Register */
#define STM2_ISCR ((*(volatile Ifx_STM_ISCR*)0xF0000240u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define STM2_KRST0 ((*(volatile Ifx_STM_KRST0*)0xF00002F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define STM2_KRST1 ((*(volatile Ifx_STM_KRST1*)0xF00002F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define STM2_KRSTCLR ((*(volatile Ifx_STM_KRSTCLR*)0xF00002ECu)) /* lint --e(923)*/

/** E8, OCDS Control and Status */
#define STM2_OCS ((*(volatile Ifx_STM_OCS*)0xF00002E8u)) /* lint --e(923)*/

/** 10, Timer Register 0 */
#define STM2_TIM0 ((*(volatile Ifx_STM_TIM0*)0xF0000210u)) /* lint --e(923)*/

/** 14, Timer Register 1 */
#define STM2_TIM1 ((*(volatile Ifx_STM_TIM1*)0xF0000214u)) /* lint --e(923)*/

/** 18, Timer Register 2 */
#define STM2_TIM2 ((*(volatile Ifx_STM_TIM2*)0xF0000218u)) /* lint --e(923)*/

/** 1C, Timer Register 3 */
#define STM2_TIM3 ((*(volatile Ifx_STM_TIM3*)0xF000021Cu)) /* lint --e(923)*/

/** 20, Timer Register 4 */
#define STM2_TIM4 ((*(volatile Ifx_STM_TIM4*)0xF0000220u)) /* lint --e(923)*/

/** 24, Timer Register 5 */
#define STM2_TIM5 ((*(volatile Ifx_STM_TIM5*)0xF0000224u)) /* lint --e(923)*/

/** 28, Timer Register 6 */
#define STM2_TIM6 ((*(volatile Ifx_STM_TIM6*)0xF0000228u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXSTM_REG_H */

