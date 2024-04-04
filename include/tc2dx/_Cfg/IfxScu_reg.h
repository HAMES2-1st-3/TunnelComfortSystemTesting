/**
 * \file IfxScu_reg.h
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
#ifndef IFXSCU_REG_H
#define IFXSCU_REG_H
/******************************************************************************/
#include "Scu/IfxScu_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** SCU object */
#define MODULE_SCU ((*(Ifx_SCU*)0xF0036000u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-SCU)                               */
/******************************************************************************/

/** 3FC, Access Enable Register 0 */
#define SCU_ACCEN0 ((*(volatile Ifx_SCU_ACCEN0*)0xF00363FCu)) /* lint --e(923)*/

/** 3F8, Access Enable Register 1 */
#define SCU_ACCEN1 ((*(volatile Ifx_SCU_ACCEN1*)0xF00363F8u)) /* lint --e(923)*/

/** 5C, Application Reset Disable Register */
#define SCU_ARSTDIS ((*(volatile Ifx_SCU_ARSTDIS*)0xF003605Cu)) /* lint --e(923)*/

/** 30, CCU Clock Control Register 0 */
#define SCU_CCUCON0 ((*(volatile Ifx_SCU_CCUCON0*)0xF0036030u)) /* lint --e(923)*/

/** 34, CCU Clock Control Register 1 */
#define SCU_CCUCON1 ((*(volatile Ifx_SCU_CCUCON1*)0xF0036034u)) /* lint --e(923)*/

/** 40, CCU Clock Control Register 2 */
#define SCU_CCUCON2 ((*(volatile Ifx_SCU_CCUCON2*)0xF0036040u)) /* lint --e(923)*/

/** 140, Chip Identification Register */
#define SCU_CHIPID ((*(volatile Ifx_SCU_CHIPID*)0xF0036140u)) /* lint --e(923)*/

/** E4, Die Temperature Sensor Control Register */
#define SCU_DTSCON ((*(volatile Ifx_SCU_DTSCON*)0xF00360E4u)) /* lint --e(923)*/

/** 240, Die Temperature Sensor Limit Register */
#define SCU_DTSLIM ((*(volatile Ifx_SCU_DTSLIM*)0xF0036240u)) /* lint --e(923)*/

/** E0, Die Temperature Sensor Status Register */
#define SCU_DTSSTAT ((*(volatile Ifx_SCU_DTSSTAT*)0xF00360E0u)) /* lint --e(923)*/

/** 210, External Input Channel Register */
#define SCU_EICR0 ((*(volatile Ifx_SCU_EICR*)0xF0036210u)) /* lint --e(923)*/

/** 214, External Input Channel Register */
#define SCU_EICR1 ((*(volatile Ifx_SCU_EICR*)0xF0036214u)) /* lint --e(923)*/

/** 218, External Input Channel Register */
#define SCU_EICR2 ((*(volatile Ifx_SCU_EICR*)0xF0036218u)) /* lint --e(923)*/

/** 21C, External Input Channel Register */
#define SCU_EICR3 ((*(volatile Ifx_SCU_EICR*)0xF003621Cu)) /* lint --e(923)*/

/** 220, External Input Flag Register */
#define SCU_EIFR ((*(volatile Ifx_SCU_EIFR*)0xF0036220u)) /* lint --e(923)*/

/** FC, Emergency Stop Register */
#define SCU_EMSR ((*(volatile Ifx_SCU_EMSR*)0xF00360FCu)) /* lint --e(923)*/

/** 70, ESR Input Configuration Register */
#define SCU_ESRCFG0 ((*(volatile Ifx_SCU_ESRCFG*)0xF0036070u)) /* lint --e(923)*/

/** 74, ESR Input Configuration Register */
#define SCU_ESRCFG1 ((*(volatile Ifx_SCU_ESRCFG*)0xF0036074u)) /* lint --e(923)*/

/** 78, ESR Output Configuration Register */
#define SCU_ESROCFG ((*(volatile Ifx_SCU_ESROCFG*)0xF0036078u)) /* lint --e(923)*/

/** B8, EVR13 Control Register */
#define SCU_EVR13CON ((*(volatile Ifx_SCU_EVR13CON*)0xF00360B8u)) /* lint --e(923)*/

/** BC, EVR33 Control Register */
#define SCU_EVR33CON ((*(volatile Ifx_SCU_EVR33CON*)0xF00360BCu)) /* lint --e(923)*/

/** 19C, EVR ADC Status Register */
#define SCU_EVRADCSTAT ((*(volatile Ifx_SCU_EVRADCSTAT*)0xF003619Cu)) /* lint --e(923)*/

/** 1A8, EVR Monitor Control Register */
#define SCU_EVRMONCTRL ((*(volatile Ifx_SCU_EVRMONCTRL*)0xF00361A8u)) /* lint --e(923)*/

/** 1A4, EVR Over-voltage Configuration Register */
#define SCU_EVROVMON ((*(volatile Ifx_SCU_EVROVMON*)0xF00361A4u)) /* lint --e(923)*/

/** 6C, EVR Hard Reset Control Register */
#define SCU_EVRRSTCON ((*(volatile Ifx_SCU_EVRRSTCON*)0xF003606Cu)) /* lint --e(923)*/

/** 1B0, EVR13 SD Control Register 1 */
#define SCU_EVRSDCTRL1 ((*(volatile Ifx_SCU_EVRSDCTRL1*)0xF00361B0u)) /* lint --e(923)*/

/** B0, EVR Status Flag Register */
#define SCU_EVRSTAT ((*(volatile Ifx_SCU_EVRSTAT*)0xF00360B0u)) /* lint --e(923)*/

/** 1A0, EVR Under-voltage Configuration Register */
#define SCU_EVRUVMON ((*(volatile Ifx_SCU_EVRUVMON*)0xF00361A0u)) /* lint --e(923)*/

/** 3C, External Clock Control Register */
#define SCU_EXTCON ((*(volatile Ifx_SCU_EXTCON*)0xF003603Cu)) /* lint --e(923)*/

/** 38, Fractional Divider Register */
#define SCU_FDR ((*(volatile Ifx_SCU_FDR*)0xF0036038u)) /* lint --e(923)*/

/** 224, Flag Modification Register */
#define SCU_FMR ((*(volatile Ifx_SCU_FMR*)0xF0036224u)) /* lint --e(923)*/

/** 8, Identification Register */
#define SCU_ID ((*(volatile Ifx_SCU_ID*)0xF0036008u)) /* lint --e(923)*/

/** 22C, Flag Gating Register */
#define SCU_IGCR0 ((*(volatile Ifx_SCU_IGCR*)0xF003622Cu)) /* lint --e(923)*/

/** 230, Flag Gating Register */
#define SCU_IGCR1 ((*(volatile Ifx_SCU_IGCR*)0xF0036230u)) /* lint --e(923)*/

/** 234, Flag Gating Register */
#define SCU_IGCR2 ((*(volatile Ifx_SCU_IGCR*)0xF0036234u)) /* lint --e(923)*/

/** 238, Flag Gating Register */
#define SCU_IGCR3 ((*(volatile Ifx_SCU_IGCR*)0xF0036238u)) /* lint --e(923)*/

/** AC, ESR Input Register */
#define SCU_IN ((*(volatile Ifx_SCU_IN*)0xF00360ACu)) /* lint --e(923)*/

/** A0, Input/Output Control Register */
#define SCU_IOCR ((*(volatile Ifx_SCU_IOCR*)0xF00360A0u)) /* lint --e(923)*/

/** 164, Logic BIST Control 0 Register */
#define SCU_LBISTCTRL0 ((*(volatile Ifx_SCU_LBISTCTRL0*)0xF0036164u)) /* lint --e(923)*/

/** 168, Logic BIST Control 1 Register */
#define SCU_LBISTCTRL1 ((*(volatile Ifx_SCU_LBISTCTRL1*)0xF0036168u)) /* lint --e(923)*/

/** 134, LCL CPU Control Register */
#define SCU_LCLCON0 ((*(volatile Ifx_SCU_LCLCON*)0xF0036134u)) /* lint --e(923)*/

/** 138, LCL CPU Control Register */
#define SCU_LCLCON1 ((*(volatile Ifx_SCU_LCLCON*)0xF0036138u)) /* lint --e(923)*/

/** 144, Manufacturer Identification Register */
#define SCU_MANID ((*(volatile Ifx_SCU_MANID*)0xF0036144u)) /* lint --e(923)*/

/** A8, ESR Output Modification Register */
#define SCU_OMR ((*(volatile Ifx_SCU_OMR*)0xF00360A8u)) /* lint --e(923)*/

/** 10, OSC Control Register */
#define SCU_OSCCON ((*(volatile Ifx_SCU_OSCCON*)0xF0036010u)) /* lint --e(923)*/

/** A4, ESR Output Register */
#define SCU_OUT ((*(volatile Ifx_SCU_OUT*)0xF00360A4u)) /* lint --e(923)*/

/** 1E4, Overlay Control Register */
#define SCU_OVCCON ((*(volatile Ifx_SCU_OVCCON*)0xF00361E4u)) /* lint --e(923)*/

/** 1E0, Overlay Enable Register */
#define SCU_OVCENABLE ((*(volatile Ifx_SCU_OVCENABLE*)0xF00361E0u)) /* lint --e(923)*/

/** 18C, Pad Disable Control Register */
#define SCU_PDISC ((*(volatile Ifx_SCU_PDISC*)0xF003618Cu)) /* lint --e(923)*/

/** 228, Pattern Detection Result Register */
#define SCU_PDRR ((*(volatile Ifx_SCU_PDRR*)0xF0036228u)) /* lint --e(923)*/

/** 18, PLL Configuration 0 Register */
#define SCU_PLLCON0 ((*(volatile Ifx_SCU_PLLCON0*)0xF0036018u)) /* lint --e(923)*/

/** 1C, PLL Configuration 1 Register */
#define SCU_PLLCON1 ((*(volatile Ifx_SCU_PLLCON1*)0xF003601Cu)) /* lint --e(923)*/

/** 20, PLL Configuration 2 Register */
#define SCU_PLLCON2 ((*(volatile Ifx_SCU_PLLCON2*)0xF0036020u)) /* lint --e(923)*/

/** 28, PLL_ERAY Configuration 0 Register */
#define SCU_PLLERAYCON0 ((*(volatile Ifx_SCU_PLLERAYCON0*)0xF0036028u)) /* lint --e(923)*/

/** 2C, PLL_ERAY Configuration 1 Register */
#define SCU_PLLERAYCON1 ((*(volatile Ifx_SCU_PLLERAYCON1*)0xF003602Cu)) /* lint --e(923)*/

/** 24, PLL_ERAY Status Register */
#define SCU_PLLERAYSTAT ((*(volatile Ifx_SCU_PLLERAYSTAT*)0xF0036024u)) /* lint --e(923)*/

/** 14, PLL Status Register */
#define SCU_PLLSTAT ((*(volatile Ifx_SCU_PLLSTAT*)0xF0036014u)) /* lint --e(923)*/

/** D4, Power Management Control and Status Register */
#define SCU_PMCSR0 ((*(volatile Ifx_SCU_PMCSR*)0xF00360D4u)) /* lint --e(923)*/

/** D8, Power Management Control and Status Register */
#define SCU_PMCSR1 ((*(volatile Ifx_SCU_PMCSR*)0xF00360D8u)) /* lint --e(923)*/

/** DC, Power Management Control and Status Register */
#define SCU_PMCSR2 ((*(volatile Ifx_SCU_PMCSR*)0xF00360DCu)) /* lint --e(923)*/

/** C8, Standby and Wake-up Control Register 0 */
#define SCU_PMSWCR0 ((*(volatile Ifx_SCU_PMSWCR0*)0xF00360C8u)) /* lint --e(923)*/

/** E8, Standby and Wake-up Control Register 1 */
#define SCU_PMSWCR1 ((*(volatile Ifx_SCU_PMSWCR1*)0xF00360E8u)) /* lint --e(923)*/

/** EC, Standby and Wake-up Control Register 2 */
#define SCU_PMSWCR2 ((*(volatile Ifx_SCU_PMSWCR2*)0xF00360ECu)) /* lint --e(923)*/

/** CC, Standby and Wake-up Status Flag Register */
#define SCU_PMSWSTAT ((*(volatile Ifx_SCU_PMSWSTAT*)0xF00360CCu)) /* lint --e(923)*/

/** D0, Standby and Wake-up Status Clear Register */
#define SCU_PMSWSTATCLR ((*(volatile Ifx_SCU_PMSWSTATCLR*)0xF00360D0u)) /* lint --e(923)*/

/** 58, Reset Configuration Register */
#define SCU_RSTCON ((*(volatile Ifx_SCU_RSTCON*)0xF0036058u)) /* lint --e(923)*/

/** 64, Additional Reset Control Register */
#define SCU_RSTCON2 ((*(volatile Ifx_SCU_RSTCON2*)0xF0036064u)) /* lint --e(923)*/

/** 50, Reset Status Register */
#define SCU_RSTSTAT ((*(volatile Ifx_SCU_RSTSTAT*)0xF0036050u)) /* lint --e(923)*/

/** C4, Start-up Configuration Register */
#define SCU_STCON ((*(volatile Ifx_SCU_STCON*)0xF00360C4u)) /* lint --e(923)*/

/** C0, Start-up Status Register */
#define SCU_STSTAT ((*(volatile Ifx_SCU_STSTAT*)0xF00360C0u)) /* lint --e(923)*/

/** 60, Software Reset Configuration Register */
#define SCU_SWRSTCON ((*(volatile Ifx_SCU_SWRSTCON*)0xF0036060u)) /* lint --e(923)*/

/** 7C, System Control Register */
#define SCU_SYSCON ((*(volatile Ifx_SCU_SYSCON*)0xF003607Cu)) /* lint --e(923)*/

/** 12C, Trap Clear Register */
#define SCU_TRAPCLR ((*(volatile Ifx_SCU_TRAPCLR*)0xF003612Cu)) /* lint --e(923)*/

/** 130, Trap Disable Register */
#define SCU_TRAPDIS ((*(volatile Ifx_SCU_TRAPDIS*)0xF0036130u)) /* lint --e(923)*/

/** 128, Trap Set Register */
#define SCU_TRAPSET ((*(volatile Ifx_SCU_TRAPSET*)0xF0036128u)) /* lint --e(923)*/

/** 124, Trap Status Register */
#define SCU_TRAPSTAT ((*(volatile Ifx_SCU_TRAPSTAT*)0xF0036124u)) /* lint --e(923)*/

/** 100, CPU WDT Control Register 0 */
#define SCU_WDTCPU0_CON0 ((*(volatile Ifx_SCU_WDTCPU_CON0*)0xF0036100u)) /* lint --e(923)*/

/** 104, CPU WDT Control Register 1 */
#define SCU_WDTCPU0_CON1 ((*(volatile Ifx_SCU_WDTCPU_CON1*)0xF0036104u)) /* lint --e(923)*/

/** 108, CPU WDT Status Register */
#define SCU_WDTCPU0_SR ((*(volatile Ifx_SCU_WDTCPU_SR*)0xF0036108u)) /* lint --e(923)*/

/** 10C, CPU WDT Control Register 0 */
#define SCU_WDTCPU1_CON0 ((*(volatile Ifx_SCU_WDTCPU_CON0*)0xF003610Cu)) /* lint --e(923)*/

/** 110, CPU WDT Control Register 1 */
#define SCU_WDTCPU1_CON1 ((*(volatile Ifx_SCU_WDTCPU_CON1*)0xF0036110u)) /* lint --e(923)*/

/** 114, CPU WDT Status Register */
#define SCU_WDTCPU1_SR ((*(volatile Ifx_SCU_WDTCPU_SR*)0xF0036114u)) /* lint --e(923)*/

/** 118, CPU WDT Control Register 0 */
#define SCU_WDTCPU2_CON0 ((*(volatile Ifx_SCU_WDTCPU_CON0*)0xF0036118u)) /* lint --e(923)*/

/** 11C, CPU WDT Control Register 1 */
#define SCU_WDTCPU2_CON1 ((*(volatile Ifx_SCU_WDTCPU_CON1*)0xF003611Cu)) /* lint --e(923)*/

/** 120, CPU WDT Status Register */
#define SCU_WDTCPU2_SR ((*(volatile Ifx_SCU_WDTCPU_SR*)0xF0036120u)) /* lint --e(923)*/

/** F0, Safety WDT Control Register 0 */
#define SCU_WDTS_CON0 ((*(volatile Ifx_SCU_WDTS_CON0*)0xF00360F0u)) /* lint --e(923)*/

/** F4, Safety WDT Control Register 1 */
#define SCU_WDTS_CON1 ((*(volatile Ifx_SCU_WDTS_CON1*)0xF00360F4u)) /* lint --e(923)*/

/** F8, Safety WDT Status Register */
#define SCU_WDTS_SR ((*(volatile Ifx_SCU_WDTS_SR*)0xF00360F8u)) /* lint --e(923)*/

/** Alias for SCU_WDTS_CON0.
 *  Note that this definition is obsolete, use SCU_WDTS_CON0 instead.
 * F0, Safety WDT Control Register 0
 */
#define SCU_WDTSCON0 (SCU_WDTS_CON0)

/** Alias for SCU_WDTS_CON1.
 *  Note that this definition is obsolete, use SCU_WDTS_CON1 instead.
 * F4, Safety WDT Control Register 1
 */
#define SCU_WDTSCON1 (SCU_WDTS_CON1)

/** Alias for SCU_WDTS_SR.
 *  Note that this definition is obsolete, use SCU_WDTS_SR instead.
 * F8, Safety WDT Status Register
 */
#define SCU_WDTSSR (SCU_WDTS_SR)
/******************************************************************************/
#endif /* IFXSCU_REG_H */

