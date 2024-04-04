/**
 * \file IfxMsc_reg.h
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
#ifndef IFXMSC_REG_H
#define IFXMSC_REG_H
/******************************************************************************/
#include "Msc/IfxMsc_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** MSC object */
#define MODULE_MSC0 ((*(Ifx_MSC*)0xF0002600u)) /* lint --e(923)*/

/** MSC object */
#define MODULE_MSC1 ((*(Ifx_MSC*)0xF0002700u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MSC0)                               */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define MSC0_ACCEN0 ((*(volatile Ifx_MSC_ACCEN0*)0xF00026FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define MSC0_ACCEN1 ((*(volatile Ifx_MSC_ACCEN1*)0xF00026F8u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define MSC0_CLC ((*(volatile Ifx_CLC2*)0xF0002600u)) /* lint --e(923)*/

/** 20, Downstream Command Register */
#define MSC0_DC ((*(volatile Ifx_MSC_DC*)0xF0002620u)) /* lint --e(923)*/

/** 1C, Downstream Data Register */
#define MSC0_DD ((*(volatile Ifx_MSC_DD*)0xF000261Cu)) /* lint --e(923)*/

/** 14, Downstream Control Register */
#define MSC0_DSC ((*(volatile Ifx_MSC_DSC*)0xF0002614u)) /* lint --e(923)*/

/** 58, Downstream Control Enhanced Register 1 */
#define MSC0_DSCE ((*(volatile Ifx_MSC_DSCE*)0xF0002658u)) /* lint --e(923)*/

/** 28, Downstream Select Data Source High Register */
#define MSC0_DSDSH ((*(volatile Ifx_MSC_DSDSH*)0xF0002628u)) /* lint --e(923)*/

/** 24, Downstream Select Data Source Low Register */
#define MSC0_DSDSL ((*(volatile Ifx_MSC_DSDSL*)0xF0002624u)) /* lint --e(923)*/

/** 18, Downstream Status Register */
#define MSC0_DSS ((*(volatile Ifx_MSC_DSS*)0xF0002618u)) /* lint --e(923)*/

/** 2C, Emergency Stop Register */
#define MSC0_ESR ((*(volatile Ifx_MSC_ESR*)0xF000262Cu)) /* lint --e(923)*/

/** C, Fractional Divider Register */
#define MSC0_FDR ((*(volatile Ifx_MSC_FDR*)0xF000260Cu)) /* lint --e(923)*/

/** 40, Interrupt Control Register */
#define MSC0_ICR ((*(volatile Ifx_MSC_ICR*)0xF0002640u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define MSC0_ID ((*(volatile Ifx_ID1*)0xF0002608u)) /* lint --e(923)*/

/** 48, Interrupt Set Clear Register */
#define MSC0_ISC ((*(volatile Ifx_MSC_ISC*)0xF0002648u)) /* lint --e(923)*/

/** 44, Interrupt Status Register */
#define MSC0_ISR ((*(volatile Ifx_MSC_ISR*)0xF0002644u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define MSC0_KRST0 ((*(volatile Ifx_MSC_KRST0*)0xF00026F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define MSC0_KRST1 ((*(volatile Ifx_MSC_KRST1*)0xF00026F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define MSC0_KRSTCLR ((*(volatile Ifx_MSC_KRSTCLR*)0xF00026ECu)) /* lint --e(923)*/

/** 4C, Output Control Register */
#define MSC0_OCR ((*(volatile Ifx_MSC_OCR*)0xF000264Cu)) /* lint --e(923)*/

/** E8, OCDS Control and Status */
#define MSC0_OCS ((*(volatile Ifx_MSC_OCS*)0xF00026E8u)) /* lint --e(923)*/

/** 30, Upstream Data Register */
#define MSC0_UD0 ((*(volatile Ifx_MSC_UD*)0xF0002630u)) /* lint --e(923)*/

/** 34, Upstream Data Register */
#define MSC0_UD1 ((*(volatile Ifx_MSC_UD*)0xF0002634u)) /* lint --e(923)*/

/** 38, Upstream Data Register */
#define MSC0_UD2 ((*(volatile Ifx_MSC_UD*)0xF0002638u)) /* lint --e(923)*/

/** 3C, Upstream Data Register */
#define MSC0_UD3 ((*(volatile Ifx_MSC_UD*)0xF000263Cu)) /* lint --e(923)*/

/** 5C, Upstream Control Enhanced Register 1 */
#define MSC0_USCE ((*(volatile Ifx_MSC_USCE*)0xF000265Cu)) /* lint --e(923)*/

/** 10, Upstream Status Register */
#define MSC0_USR ((*(volatile Ifx_MSC_USR*)0xF0002610u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MSC1)                               */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define MSC1_ACCEN0 ((*(volatile Ifx_MSC_ACCEN0*)0xF00027FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define MSC1_ACCEN1 ((*(volatile Ifx_MSC_ACCEN1*)0xF00027F8u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define MSC1_CLC ((*(volatile Ifx_CLC2*)0xF0002700u)) /* lint --e(923)*/

/** 20, Downstream Command Register */
#define MSC1_DC ((*(volatile Ifx_MSC_DC*)0xF0002720u)) /* lint --e(923)*/

/** 1C, Downstream Data Register */
#define MSC1_DD ((*(volatile Ifx_MSC_DD*)0xF000271Cu)) /* lint --e(923)*/

/** 14, Downstream Control Register */
#define MSC1_DSC ((*(volatile Ifx_MSC_DSC*)0xF0002714u)) /* lint --e(923)*/

/** 58, Downstream Control Enhanced Register 1 */
#define MSC1_DSCE ((*(volatile Ifx_MSC_DSCE*)0xF0002758u)) /* lint --e(923)*/

/** 28, Downstream Select Data Source High Register */
#define MSC1_DSDSH ((*(volatile Ifx_MSC_DSDSH*)0xF0002728u)) /* lint --e(923)*/

/** 24, Downstream Select Data Source Low Register */
#define MSC1_DSDSL ((*(volatile Ifx_MSC_DSDSL*)0xF0002724u)) /* lint --e(923)*/

/** 18, Downstream Status Register */
#define MSC1_DSS ((*(volatile Ifx_MSC_DSS*)0xF0002718u)) /* lint --e(923)*/

/** 2C, Emergency Stop Register */
#define MSC1_ESR ((*(volatile Ifx_MSC_ESR*)0xF000272Cu)) /* lint --e(923)*/

/** C, Fractional Divider Register */
#define MSC1_FDR ((*(volatile Ifx_MSC_FDR*)0xF000270Cu)) /* lint --e(923)*/

/** 40, Interrupt Control Register */
#define MSC1_ICR ((*(volatile Ifx_MSC_ICR*)0xF0002740u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define MSC1_ID ((*(volatile Ifx_ID1*)0xF0002708u)) /* lint --e(923)*/

/** 48, Interrupt Set Clear Register */
#define MSC1_ISC ((*(volatile Ifx_MSC_ISC*)0xF0002748u)) /* lint --e(923)*/

/** 44, Interrupt Status Register */
#define MSC1_ISR ((*(volatile Ifx_MSC_ISR*)0xF0002744u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define MSC1_KRST0 ((*(volatile Ifx_MSC_KRST0*)0xF00027F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define MSC1_KRST1 ((*(volatile Ifx_MSC_KRST1*)0xF00027F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define MSC1_KRSTCLR ((*(volatile Ifx_MSC_KRSTCLR*)0xF00027ECu)) /* lint --e(923)*/

/** 4C, Output Control Register */
#define MSC1_OCR ((*(volatile Ifx_MSC_OCR*)0xF000274Cu)) /* lint --e(923)*/

/** E8, OCDS Control and Status */
#define MSC1_OCS ((*(volatile Ifx_MSC_OCS*)0xF00027E8u)) /* lint --e(923)*/

/** 30, Upstream Data Register */
#define MSC1_UD0 ((*(volatile Ifx_MSC_UD*)0xF0002730u)) /* lint --e(923)*/

/** 34, Upstream Data Register */
#define MSC1_UD1 ((*(volatile Ifx_MSC_UD*)0xF0002734u)) /* lint --e(923)*/

/** 38, Upstream Data Register */
#define MSC1_UD2 ((*(volatile Ifx_MSC_UD*)0xF0002738u)) /* lint --e(923)*/

/** 3C, Upstream Data Register */
#define MSC1_UD3 ((*(volatile Ifx_MSC_UD*)0xF000273Cu)) /* lint --e(923)*/

/** 5C, Upstream Control Enhanced Register 1 */
#define MSC1_USCE ((*(volatile Ifx_MSC_USCE*)0xF000275Cu)) /* lint --e(923)*/

/** 10, Upstream Status Register */
#define MSC1_USR ((*(volatile Ifx_MSC_USR*)0xF0002710u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXMSC_REG_H */

