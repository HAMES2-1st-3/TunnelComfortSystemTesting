/**
 * \file IfxInt_reg.h
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
#ifndef IFXINT_REG_H
#define IFXINT_REG_H
/******************************************************************************/
#include "Int/IfxInt_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** Interrupt router object */
#define MODULE_INT ((*(Ifx_INT*)0xF0037000u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-INT)                               */
/******************************************************************************/

/** F4, Access Enable Register 0 */
#define INT_ACCEN00 ((*(volatile Ifx_INT_ACCEN00*)0xF00370F4u)) /* lint --e(923)*/

/** F0, Kernel 0 Access Enable Register 1 */
#define INT_ACCEN01 ((*(volatile Ifx_INT_ACCEN01*)0xF00370F0u)) /* lint --e(923)*/

/** FC, Kernel 1 Access Enable Register 0 */
#define INT_ACCEN10 ((*(volatile Ifx_INT_ACCEN10*)0xF00370FCu)) /* lint --e(923)*/

/** F8, Kernel 1 Access Enable Register 1 */
#define INT_ACCEN11 ((*(volatile Ifx_INT_ACCEN11*)0xF00370F8u)) /* lint --e(923)*/

/** 108, Error Capture Register */
#define INT_CH0_ECR ((*(volatile Ifx_INT_ICU_ECR*)0xF0037108u)) /* lint --e(923)*/

/** 104, Last Acknowledged Service Request Register */
#define INT_CH0_LASR ((*(volatile Ifx_INT_ICU_LASR*)0xF0037104u)) /* lint --e(923)*/

/** 100, Latest Winning Service Request Register */
#define INT_CH0_LWSR ((*(volatile Ifx_INT_ICU_LWSR*)0xF0037100u)) /* lint --e(923)*/

/** 118, Error Capture Register */
#define INT_CH1_ECR ((*(volatile Ifx_INT_ICU_ECR*)0xF0037118u)) /* lint --e(923)*/

/** 114, Last Acknowledged Service Request Register */
#define INT_CH1_LASR ((*(volatile Ifx_INT_ICU_LASR*)0xF0037114u)) /* lint --e(923)*/

/** 110, Latest Winning Service Request Register */
#define INT_CH1_LWSR ((*(volatile Ifx_INT_ICU_LWSR*)0xF0037110u)) /* lint --e(923)*/

/** 128, Error Capture Register */
#define INT_CH2_ECR ((*(volatile Ifx_INT_ICU_ECR*)0xF0037128u)) /* lint --e(923)*/

/** 124, Last Acknowledged Service Request Register */
#define INT_CH2_LASR ((*(volatile Ifx_INT_ICU_LASR*)0xF0037124u)) /* lint --e(923)*/

/** 120, Latest Winning Service Request Register */
#define INT_CH2_LWSR ((*(volatile Ifx_INT_ICU_LWSR*)0xF0037120u)) /* lint --e(923)*/

/** 138, Error Capture Register */
#define INT_CH3_ECR ((*(volatile Ifx_INT_ICU_ECR*)0xF0037138u)) /* lint --e(923)*/

/** 134, Last Acknowledged Service Request Register */
#define INT_CH3_LASR ((*(volatile Ifx_INT_ICU_LASR*)0xF0037134u)) /* lint --e(923)*/

/** 130, Latest Winning Service Request Register */
#define INT_CH3_LWSR ((*(volatile Ifx_INT_ICU_LWSR*)0xF0037130u)) /* lint --e(923)*/

/** 148, Error Capture Register */
#define INT_CH4_ECR ((*(volatile Ifx_INT_ICU_ECR*)0xF0037148u)) /* lint --e(923)*/

/** 144, Last Acknowledged Service Request Register */
#define INT_CH4_LASR ((*(volatile Ifx_INT_ICU_LASR*)0xF0037144u)) /* lint --e(923)*/

/** 140, Latest Winning Service Request Register */
#define INT_CH4_LWSR ((*(volatile Ifx_INT_ICU_LWSR*)0xF0037140u)) /* lint --e(923)*/

/** 158, Error Capture Register */
#define INT_CH5_ECR ((*(volatile Ifx_INT_ICU_ECR*)0xF0037158u)) /* lint --e(923)*/

/** 154, Last Acknowledged Service Request Register */
#define INT_CH5_LASR ((*(volatile Ifx_INT_ICU_LASR*)0xF0037154u)) /* lint --e(923)*/

/** 150, Latest Winning Service Request Register */
#define INT_CH5_LWSR ((*(volatile Ifx_INT_ICU_LWSR*)0xF0037150u)) /* lint --e(923)*/

/** 168, Error Capture Register */
#define INT_CH6_ECR ((*(volatile Ifx_INT_ICU_ECR*)0xF0037168u)) /* lint --e(923)*/

/** 164, Last Acknowledged Service Request Register */
#define INT_CH6_LASR ((*(volatile Ifx_INT_ICU_LASR*)0xF0037164u)) /* lint --e(923)*/

/** 160, Latest Winning Service Request Register */
#define INT_CH6_LWSR ((*(volatile Ifx_INT_ICU_LWSR*)0xF0037160u)) /* lint --e(923)*/

/** Alias for INT_CH0_ECR.
 *  Note that this definition is obsolete, use INT_CH0_ECR instead.
 * 108, Error Capture Register
 */
#define INT_ECR0 (INT_CH0_ECR)

/** Alias for INT_CH1_ECR.
 *  Note that this definition is obsolete, use INT_CH1_ECR instead.
 * 118, Error Capture Register
 */
#define INT_ECR1 (INT_CH1_ECR)

/** Alias for INT_CH2_ECR.
 *  Note that this definition is obsolete, use INT_CH2_ECR instead.
 * 128, Error Capture Register
 */
#define INT_ECR2 (INT_CH2_ECR)

/** Alias for INT_CH3_ECR.
 *  Note that this definition is obsolete, use INT_CH3_ECR instead.
 * 138, Error Capture Register
 */
#define INT_ECR3 (INT_CH3_ECR)

/** Alias for INT_CH4_ECR.
 *  Note that this definition is obsolete, use INT_CH4_ECR instead.
 * 148, Error Capture Register
 */
#define INT_ECR4 (INT_CH4_ECR)

/** Alias for INT_CH5_ECR.
 *  Note that this definition is obsolete, use INT_CH5_ECR instead.
 * 158, Error Capture Register
 */
#define INT_ECR5 (INT_CH5_ECR)

/** Alias for INT_CH6_ECR.
 *  Note that this definition is obsolete, use INT_CH6_ECR instead.
 * 168, Error Capture Register
 */
#define INT_ECR6 (INT_CH6_ECR)

/** 8, Module Identification Register */
#define INT_ID ((*(volatile Ifx_ID1*)0xF0037008u)) /* lint --e(923)*/

/** Alias for INT_CH0_LASR.
 *  Note that this definition is obsolete, use INT_CH0_LASR instead.
 * 104, Last Acknowledged Service Request Register
 */
#define INT_LASR0 (INT_CH0_LASR)

/** Alias for INT_CH1_LASR.
 *  Note that this definition is obsolete, use INT_CH1_LASR instead.
 * 114, Last Acknowledged Service Request Register
 */
#define INT_LASR1 (INT_CH1_LASR)

/** Alias for INT_CH2_LASR.
 *  Note that this definition is obsolete, use INT_CH2_LASR instead.
 * 124, Last Acknowledged Service Request Register
 */
#define INT_LASR2 (INT_CH2_LASR)

/** Alias for INT_CH3_LASR.
 *  Note that this definition is obsolete, use INT_CH3_LASR instead.
 * 134, Last Acknowledged Service Request Register
 */
#define INT_LASR3 (INT_CH3_LASR)

/** Alias for INT_CH4_LASR.
 *  Note that this definition is obsolete, use INT_CH4_LASR instead.
 * 144, Last Acknowledged Service Request Register
 */
#define INT_LASR4 (INT_CH4_LASR)

/** Alias for INT_CH5_LASR.
 *  Note that this definition is obsolete, use INT_CH5_LASR instead.
 * 154, Last Acknowledged Service Request Register
 */
#define INT_LASR5 (INT_CH5_LASR)

/** Alias for INT_CH6_LASR.
 *  Note that this definition is obsolete, use INT_CH6_LASR instead.
 * 164, Last Acknowledged Service Request Register
 */
#define INT_LASR6 (INT_CH6_LASR)

/** Alias for INT_CH0_LWSR.
 *  Note that this definition is obsolete, use INT_CH0_LWSR instead.
 * 100, Latest Winning Service Request Register
 */
#define INT_LWSR0 (INT_CH0_LWSR)

/** Alias for INT_CH1_LWSR.
 *  Note that this definition is obsolete, use INT_CH1_LWSR instead.
 * 110, Latest Winning Service Request Register
 */
#define INT_LWSR1 (INT_CH1_LWSR)

/** Alias for INT_CH2_LWSR.
 *  Note that this definition is obsolete, use INT_CH2_LWSR instead.
 * 120, Latest Winning Service Request Register
 */
#define INT_LWSR2 (INT_CH2_LWSR)

/** Alias for INT_CH3_LWSR.
 *  Note that this definition is obsolete, use INT_CH3_LWSR instead.
 * 130, Latest Winning Service Request Register
 */
#define INT_LWSR3 (INT_CH3_LWSR)

/** Alias for INT_CH4_LWSR.
 *  Note that this definition is obsolete, use INT_CH4_LWSR instead.
 * 140, Latest Winning Service Request Register
 */
#define INT_LWSR4 (INT_CH4_LWSR)

/** Alias for INT_CH5_LWSR.
 *  Note that this definition is obsolete, use INT_CH5_LWSR instead.
 * 150, Latest Winning Service Request Register
 */
#define INT_LWSR5 (INT_CH5_LWSR)

/** Alias for INT_CH6_LWSR.
 *  Note that this definition is obsolete, use INT_CH6_LWSR instead.
 * 160, Latest Winning Service Request Register
 */
#define INT_LWSR6 (INT_CH6_LWSR)

/** A0, OTGM IRQ Trace */
#define INT_OIT ((*(volatile Ifx_INT_OIT*)0xF00370A0u)) /* lint --e(923)*/

/** 8C, OTGM IRQ MUX Missed IRQ Select */
#define INT_OIXMS ((*(volatile Ifx_INT_OIXMS*)0xF003708Cu)) /* lint --e(923)*/

/** 90, OTGM IRQ MUX Select 0 */
#define INT_OIXS0 ((*(volatile Ifx_INT_OIXS0*)0xF0037090u)) /* lint --e(923)*/

/** 94, OTGM IRQ MUX Select 1 */
#define INT_OIXS1 ((*(volatile Ifx_INT_OIXS1*)0xF0037094u)) /* lint --e(923)*/

/** 88, OTGM IRQ MUX Trigger Set Select */
#define INT_OIXTS ((*(volatile Ifx_INT_OIXTS*)0xF0037088u)) /* lint --e(923)*/

/** A8, OTGM MCDS I/F Sensitivity Negedge */
#define INT_OMISN ((*(volatile Ifx_INT_OMISN*)0xF00370A8u)) /* lint --e(923)*/

/** A4, OTGM MCDS I/F Sensitivity Posedge */
#define INT_OMISP ((*(volatile Ifx_INT_OMISP*)0xF00370A4u)) /* lint --e(923)*/

/** 80, OTGM OTGB0/1 Status */
#define INT_OOBS ((*(volatile Ifx_INT_OOBS*)0xF0037080u)) /* lint --e(923)*/

/** 84, OTGM SSI Control */
#define INT_OSSIC ((*(volatile Ifx_INT_OSSIC*)0xF0037084u)) /* lint --e(923)*/

/** 10, Service Request Broadcast Register 0 */
#define INT_SRB0 ((*(volatile Ifx_INT_SRB0*)0xF0037010u)) /* lint --e(923)*/

/** 14, Service Request Broadcast Register 1 */
#define INT_SRB1 ((*(volatile Ifx_INT_SRB1*)0xF0037014u)) /* lint --e(923)*/

/** 18, Service Request Broadcast Register 2 */
#define INT_SRB2 ((*(volatile Ifx_INT_SRB2*)0xF0037018u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXINT_REG_H */

