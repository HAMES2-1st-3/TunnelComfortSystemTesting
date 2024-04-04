/**
 * \file IfxCpu_reg.h
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
#ifndef IFXCPU_REG_H
#define IFXCPU_REG_H
/******************************************************************************/
#include "Cpu/IfxCpu_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** CPU object */
#define MODULE_CPU0 ((*(Ifx_CPU*)0xF8810000u)) /* lint --e(923)*/

/** CPU SPROT object */
#define MODULE_CPU0_SPROT ((*(Ifx_CPU_SPROT*)0xF8800000u)) /* lint --e(923)*/

/** CPU object */
#define MODULE_CPU1 ((*(Ifx_CPU*)0xF8830000u)) /* lint --e(923)*/

/** CPU SPROT object */
#define MODULE_CPU1_SPROT ((*(Ifx_CPU_SPROT*)0xF8820000u)) /* lint --e(923)*/

/** CPU object */
#define MODULE_CPU2 ((*(Ifx_CPU*)0xF8850000u)) /* lint --e(923)*/

/** CPU SPROT object */
#define MODULE_CPU2_SPROT ((*(Ifx_CPU_SPROT*)0xF8840000u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-CPU0)                               */
/******************************************************************************/

/** FF80, Address General Purpose Register */
#define CPU0_A0 ((*(volatile Ifx_CPU_A*)0xF881FF80u)) /* lint --e(923)*/

/** FF84, Address General Purpose Register */
#define CPU0_A1 ((*(volatile Ifx_CPU_A*)0xF881FF84u)) /* lint --e(923)*/

/** FFA8, Address General Purpose Register */
#define CPU0_A10 ((*(volatile Ifx_CPU_A*)0xF881FFA8u)) /* lint --e(923)*/

/** FFAC, Address General Purpose Register */
#define CPU0_A11 ((*(volatile Ifx_CPU_A*)0xF881FFACu)) /* lint --e(923)*/

/** FFB0, Address General Purpose Register */
#define CPU0_A12 ((*(volatile Ifx_CPU_A*)0xF881FFB0u)) /* lint --e(923)*/

/** FFB4, Address General Purpose Register */
#define CPU0_A13 ((*(volatile Ifx_CPU_A*)0xF881FFB4u)) /* lint --e(923)*/

/** FFB8, Address General Purpose Register */
#define CPU0_A14 ((*(volatile Ifx_CPU_A*)0xF881FFB8u)) /* lint --e(923)*/

/** FFBC, Address General Purpose Register */
#define CPU0_A15 ((*(volatile Ifx_CPU_A*)0xF881FFBCu)) /* lint --e(923)*/

/** FF88, Address General Purpose Register */
#define CPU0_A2 ((*(volatile Ifx_CPU_A*)0xF881FF88u)) /* lint --e(923)*/

/** FF8C, Address General Purpose Register */
#define CPU0_A3 ((*(volatile Ifx_CPU_A*)0xF881FF8Cu)) /* lint --e(923)*/

/** FF90, Address General Purpose Register */
#define CPU0_A4 ((*(volatile Ifx_CPU_A*)0xF881FF90u)) /* lint --e(923)*/

/** FF94, Address General Purpose Register */
#define CPU0_A5 ((*(volatile Ifx_CPU_A*)0xF881FF94u)) /* lint --e(923)*/

/** FF98, Address General Purpose Register */
#define CPU0_A6 ((*(volatile Ifx_CPU_A*)0xF881FF98u)) /* lint --e(923)*/

/** FF9C, Address General Purpose Register */
#define CPU0_A7 ((*(volatile Ifx_CPU_A*)0xF881FF9Cu)) /* lint --e(923)*/

/** FFA0, Address General Purpose Register */
#define CPU0_A8 ((*(volatile Ifx_CPU_A*)0xF881FFA0u)) /* lint --e(923)*/

/** FFA4, Address General Purpose Register */
#define CPU0_A9 ((*(volatile Ifx_CPU_A*)0xF881FFA4u)) /* lint --e(923)*/

/** FE20, Base Interrupt Vector Table Pointer */
#define CPU0_BIV ((*(volatile Ifx_CPU_BIV*)0xF881FE20u)) /* lint --e(923)*/

/** FE24, Base Trap Vector Table Pointer */
#define CPU0_BTV ((*(volatile Ifx_CPU_BTV*)0xF881FE24u)) /* lint --e(923)*/

/** FC04, CPU Clock Cycle Count */
#define CPU0_CCNT ((*(volatile Ifx_CPU_CCNT*)0xF881FC04u)) /* lint --e(923)*/

/** FC00, Counter Control */
#define CPU0_CCTRL ((*(volatile Ifx_CPU_CCTRL*)0xF881FC00u)) /* lint --e(923)*/

/** 9400, Compatibility Control Register */
#define CPU0_COMPAT ((*(volatile Ifx_CPU_COMPAT*)0xF8819400u)) /* lint --e(923)*/

/** FE1C, CPU Core Identification Register */
#define CPU0_CORE_ID ((*(volatile Ifx_CPU_CORE_ID*)0xF881FE1Cu)) /* lint --e(923)*/

/** D000, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR0_L ((*(volatile Ifx_CPU_CPR_L*)0xF881D000u)) /* lint --e(923)*/

/** D004, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR0_U ((*(volatile Ifx_CPU_CPR_U*)0xF881D004u)) /* lint --e(923)*/

/** D008, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR1_L ((*(volatile Ifx_CPU_CPR_L*)0xF881D008u)) /* lint --e(923)*/

/** D00C, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR1_U ((*(volatile Ifx_CPU_CPR_U*)0xF881D00Cu)) /* lint --e(923)*/

/** D010, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR2_L ((*(volatile Ifx_CPU_CPR_L*)0xF881D010u)) /* lint --e(923)*/

/** D014, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR2_U ((*(volatile Ifx_CPU_CPR_U*)0xF881D014u)) /* lint --e(923)*/

/** D018, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR3_L ((*(volatile Ifx_CPU_CPR_L*)0xF881D018u)) /* lint --e(923)*/

/** D01C, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR3_U ((*(volatile Ifx_CPU_CPR_U*)0xF881D01Cu)) /* lint --e(923)*/

/** D020, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR4_L ((*(volatile Ifx_CPU_CPR_L*)0xF881D020u)) /* lint --e(923)*/

/** D024, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR4_U ((*(volatile Ifx_CPU_CPR_U*)0xF881D024u)) /* lint --e(923)*/

/** D028, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR5_L ((*(volatile Ifx_CPU_CPR_L*)0xF881D028u)) /* lint --e(923)*/

/** D02C, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR5_U ((*(volatile Ifx_CPU_CPR_U*)0xF881D02Cu)) /* lint --e(923)*/

/** D030, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR6_L ((*(volatile Ifx_CPU_CPR_L*)0xF881D030u)) /* lint --e(923)*/

/** D034, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR6_U ((*(volatile Ifx_CPU_CPR_U*)0xF881D034u)) /* lint --e(923)*/

/** D038, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR7_L ((*(volatile Ifx_CPU_CPR_L*)0xF881D038u)) /* lint --e(923)*/

/** D03C, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR7_U ((*(volatile Ifx_CPU_CPR_U*)0xF881D03Cu)) /* lint --e(923)*/

/** FE18, CPU Identification Register TC1.6P */
#define CPU0_CPU_ID ((*(volatile Ifx_CPU_CPU_ID*)0xF881FE18u)) /* lint --e(923)*/

/** E000, CPU Code Protection Execute Enable Register Set */
#define CPU0_CPXE0 ((*(volatile Ifx_CPU_CPXE*)0xF881E000u)) /* lint --e(923)*/

/** E004, CPU Code Protection Execute Enable Register Set */
#define CPU0_CPXE1 ((*(volatile Ifx_CPU_CPXE*)0xF881E004u)) /* lint --e(923)*/

/** E008, CPU Code Protection Execute Enable Register Set */
#define CPU0_CPXE2 ((*(volatile Ifx_CPU_CPXE*)0xF881E008u)) /* lint --e(923)*/

/** E00C, CPU Code Protection Execute Enable Register Set */
#define CPU0_CPXE3 ((*(volatile Ifx_CPU_CPXE*)0xF881E00Cu)) /* lint --e(923)*/

/** FD0C, Core Register Access Event */
#define CPU0_CREVT ((*(volatile Ifx_CPU_CREVT*)0xF881FD0Cu)) /* lint --e(923)*/

/** FF00, Data General Purpose Register */
#define CPU0_D0 ((*(volatile Ifx_CPU_D*)0xF881FF00u)) /* lint --e(923)*/

/** FF04, Data General Purpose Register */
#define CPU0_D1 ((*(volatile Ifx_CPU_D*)0xF881FF04u)) /* lint --e(923)*/

/** FF28, Data General Purpose Register */
#define CPU0_D10 ((*(volatile Ifx_CPU_D*)0xF881FF28u)) /* lint --e(923)*/

/** FF2C, Data General Purpose Register */
#define CPU0_D11 ((*(volatile Ifx_CPU_D*)0xF881FF2Cu)) /* lint --e(923)*/

/** FF30, Data General Purpose Register */
#define CPU0_D12 ((*(volatile Ifx_CPU_D*)0xF881FF30u)) /* lint --e(923)*/

/** FF34, Data General Purpose Register */
#define CPU0_D13 ((*(volatile Ifx_CPU_D*)0xF881FF34u)) /* lint --e(923)*/

/** FF38, Data General Purpose Register */
#define CPU0_D14 ((*(volatile Ifx_CPU_D*)0xF881FF38u)) /* lint --e(923)*/

/** FF3C, Data General Purpose Register */
#define CPU0_D15 ((*(volatile Ifx_CPU_D*)0xF881FF3Cu)) /* lint --e(923)*/

/** FF08, Data General Purpose Register */
#define CPU0_D2 ((*(volatile Ifx_CPU_D*)0xF881FF08u)) /* lint --e(923)*/

/** FF0C, Data General Purpose Register */
#define CPU0_D3 ((*(volatile Ifx_CPU_D*)0xF881FF0Cu)) /* lint --e(923)*/

/** FF10, Data General Purpose Register */
#define CPU0_D4 ((*(volatile Ifx_CPU_D*)0xF881FF10u)) /* lint --e(923)*/

/** FF14, Data General Purpose Register */
#define CPU0_D5 ((*(volatile Ifx_CPU_D*)0xF881FF14u)) /* lint --e(923)*/

/** FF18, Data General Purpose Register */
#define CPU0_D6 ((*(volatile Ifx_CPU_D*)0xF881FF18u)) /* lint --e(923)*/

/** FF1C, Data General Purpose Register */
#define CPU0_D7 ((*(volatile Ifx_CPU_D*)0xF881FF1Cu)) /* lint --e(923)*/

/** FF20, Data General Purpose Register */
#define CPU0_D8 ((*(volatile Ifx_CPU_D*)0xF881FF20u)) /* lint --e(923)*/

/** FF24, Data General Purpose Register */
#define CPU0_D9 ((*(volatile Ifx_CPU_D*)0xF881FF24u)) /* lint --e(923)*/

/** 9018, Data Asynchronous Trap Register */
#define CPU0_DATR ((*(volatile Ifx_CPU_DATR*)0xF8819018u)) /* lint --e(923)*/

/** FD00, Debug Status Register */
#define CPU0_DBGSR ((*(volatile Ifx_CPU_DBGSR*)0xF881FD00u)) /* lint --e(923)*/

/** FD48, Debug Trap Control Register */
#define CPU0_DBGTCR ((*(volatile Ifx_CPU_DBGTCR*)0xF881FD48u)) /* lint --e(923)*/

/** 9040, Data Memory Control Register */
#define CPU0_DCON0 ((*(volatile Ifx_CPU_DCON0*)0xF8819040u)) /* lint --e(923)*/

/** 9000, Data Control Register 2 */
#define CPU0_DCON2 ((*(volatile Ifx_CPU_DCON2*)0xF8819000u)) /* lint --e(923)*/

/** FD44, Debug Context Save Area Pointer */
#define CPU0_DCX ((*(volatile Ifx_CPU_DCX*)0xF881FD44u)) /* lint --e(923)*/

/** 901C, Data Error Address Register */
#define CPU0_DEADD ((*(volatile Ifx_CPU_DEADD*)0xF881901Cu)) /* lint --e(923)*/

/** 9020, Data Integrity Error Address Register */
#define CPU0_DIEAR ((*(volatile Ifx_CPU_DIEAR*)0xF8819020u)) /* lint --e(923)*/

/** 9024, Data Integrity Error Trap Register */
#define CPU0_DIETR ((*(volatile Ifx_CPU_DIETR*)0xF8819024u)) /* lint --e(923)*/

/** FD40, Debug Monitor Start Address */
#define CPU0_DMS ((*(volatile Ifx_CPU_DMS*)0xF881FD40u)) /* lint --e(923)*/

/** C000, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR0_L ((*(volatile Ifx_CPU_DPR_L*)0xF881C000u)) /* lint --e(923)*/

/** C004, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR0_U ((*(volatile Ifx_CPU_DPR_U*)0xF881C004u)) /* lint --e(923)*/

/** C050, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR10_L ((*(volatile Ifx_CPU_DPR_L*)0xF881C050u)) /* lint --e(923)*/

/** C054, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR10_U ((*(volatile Ifx_CPU_DPR_U*)0xF881C054u)) /* lint --e(923)*/

/** C058, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR11_L ((*(volatile Ifx_CPU_DPR_L*)0xF881C058u)) /* lint --e(923)*/

/** C05C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR11_U ((*(volatile Ifx_CPU_DPR_U*)0xF881C05Cu)) /* lint --e(923)*/

/** C060, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR12_L ((*(volatile Ifx_CPU_DPR_L*)0xF881C060u)) /* lint --e(923)*/

/** C064, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR12_U ((*(volatile Ifx_CPU_DPR_U*)0xF881C064u)) /* lint --e(923)*/

/** C068, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR13_L ((*(volatile Ifx_CPU_DPR_L*)0xF881C068u)) /* lint --e(923)*/

/** C06C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR13_U ((*(volatile Ifx_CPU_DPR_U*)0xF881C06Cu)) /* lint --e(923)*/

/** C070, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR14_L ((*(volatile Ifx_CPU_DPR_L*)0xF881C070u)) /* lint --e(923)*/

/** C074, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR14_U ((*(volatile Ifx_CPU_DPR_U*)0xF881C074u)) /* lint --e(923)*/

/** C078, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR15_L ((*(volatile Ifx_CPU_DPR_L*)0xF881C078u)) /* lint --e(923)*/

/** C07C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR15_U ((*(volatile Ifx_CPU_DPR_U*)0xF881C07Cu)) /* lint --e(923)*/

/** C008, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR1_L ((*(volatile Ifx_CPU_DPR_L*)0xF881C008u)) /* lint --e(923)*/

/** C00C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR1_U ((*(volatile Ifx_CPU_DPR_U*)0xF881C00Cu)) /* lint --e(923)*/

/** C010, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR2_L ((*(volatile Ifx_CPU_DPR_L*)0xF881C010u)) /* lint --e(923)*/

/** C014, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR2_U ((*(volatile Ifx_CPU_DPR_U*)0xF881C014u)) /* lint --e(923)*/

/** C018, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR3_L ((*(volatile Ifx_CPU_DPR_L*)0xF881C018u)) /* lint --e(923)*/

/** C01C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR3_U ((*(volatile Ifx_CPU_DPR_U*)0xF881C01Cu)) /* lint --e(923)*/

/** C020, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR4_L ((*(volatile Ifx_CPU_DPR_L*)0xF881C020u)) /* lint --e(923)*/

/** C024, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR4_U ((*(volatile Ifx_CPU_DPR_U*)0xF881C024u)) /* lint --e(923)*/

/** C028, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR5_L ((*(volatile Ifx_CPU_DPR_L*)0xF881C028u)) /* lint --e(923)*/

/** C02C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR5_U ((*(volatile Ifx_CPU_DPR_U*)0xF881C02Cu)) /* lint --e(923)*/

/** C030, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR6_L ((*(volatile Ifx_CPU_DPR_L*)0xF881C030u)) /* lint --e(923)*/

/** C034, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR6_U ((*(volatile Ifx_CPU_DPR_U*)0xF881C034u)) /* lint --e(923)*/

/** C038, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR7_L ((*(volatile Ifx_CPU_DPR_L*)0xF881C038u)) /* lint --e(923)*/

/** C03C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR7_U ((*(volatile Ifx_CPU_DPR_U*)0xF881C03Cu)) /* lint --e(923)*/

/** C040, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR8_L ((*(volatile Ifx_CPU_DPR_L*)0xF881C040u)) /* lint --e(923)*/

/** C044, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR8_U ((*(volatile Ifx_CPU_DPR_U*)0xF881C044u)) /* lint --e(923)*/

/** C048, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR9_L ((*(volatile Ifx_CPU_DPR_L*)0xF881C048u)) /* lint --e(923)*/

/** C04C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR9_U ((*(volatile Ifx_CPU_DPR_U*)0xF881C04Cu)) /* lint --e(923)*/

/** E010, CPU Data Protection Read Enable Register Set */
#define CPU0_DPRE0 ((*(volatile Ifx_CPU_DPRE*)0xF881E010u)) /* lint --e(923)*/

/** E014, CPU Data Protection Read Enable Register Set */
#define CPU0_DPRE1 ((*(volatile Ifx_CPU_DPRE*)0xF881E014u)) /* lint --e(923)*/

/** E018, CPU Data Protection Read Enable Register Set */
#define CPU0_DPRE2 ((*(volatile Ifx_CPU_DPRE*)0xF881E018u)) /* lint --e(923)*/

/** E01C, CPU Data Protection Read Enable Register Set */
#define CPU0_DPRE3 ((*(volatile Ifx_CPU_DPRE*)0xF881E01Cu)) /* lint --e(923)*/

/** E020, CPU Data Protection Write Enable Register Set */
#define CPU0_DPWE0 ((*(volatile Ifx_CPU_DPWE*)0xF881E020u)) /* lint --e(923)*/

/** E024, CPU Data Protection Write Enable Register Set */
#define CPU0_DPWE1 ((*(volatile Ifx_CPU_DPWE*)0xF881E024u)) /* lint --e(923)*/

/** E028, CPU Data Protection Write Enable Register Set */
#define CPU0_DPWE2 ((*(volatile Ifx_CPU_DPWE*)0xF881E028u)) /* lint --e(923)*/

/** E02C, CPU Data Protection Write Enable Register Set */
#define CPU0_DPWE3 ((*(volatile Ifx_CPU_DPWE*)0xF881E02Cu)) /* lint --e(923)*/

/** 9010, Data Synchronous Trap Register */
#define CPU0_DSTR ((*(volatile Ifx_CPU_DSTR*)0xF8819010u)) /* lint --e(923)*/

/** FD08, External Event Register */
#define CPU0_EXEVT ((*(volatile Ifx_CPU_EXEVT*)0xF881FD08u)) /* lint --e(923)*/

/** FE38, Free CSA List Head Pointer */
#define CPU0_FCX ((*(volatile Ifx_CPU_FCX*)0xF881FE38u)) /* lint --e(923)*/

/** A000, CPU Trap Control Register */
#define CPU0_FPU_TRAP_CON ((*(volatile Ifx_CPU_FPU_TRAP_CON*)0xF881A000u)) /* lint --e(923)*/

/** A008, CPU Trapping Instruction Opcode Register */
#define CPU0_FPU_TRAP_OPC ((*(volatile Ifx_CPU_FPU_TRAP_OPC*)0xF881A008u)) /* lint --e(923)*/

/** A004, CPU Trapping Instruction Program Counter Register */
#define CPU0_FPU_TRAP_PC ((*(volatile Ifx_CPU_FPU_TRAP_PC*)0xF881A004u)) /* lint --e(923)*/

/** A010, CPU Trapping Instruction Operand Register */
#define CPU0_FPU_TRAP_SRC1 ((*(volatile Ifx_CPU_FPU_TRAP_SRC1*)0xF881A010u)) /* lint --e(923)*/

/** A014, CPU Trapping Instruction Operand Register */
#define CPU0_FPU_TRAP_SRC2 ((*(volatile Ifx_CPU_FPU_TRAP_SRC2*)0xF881A014u)) /* lint --e(923)*/

/** A018, Trapping Instruction Operand Register */
#define CPU0_FPU_TRAP_SRC3 ((*(volatile Ifx_CPU_FPU_TRAP_SRC3*)0xF881A018u)) /* lint --e(923)*/

/** FC08, Instruction Count */
#define CPU0_ICNT ((*(volatile Ifx_CPU_ICNT*)0xF881FC08u)) /* lint --e(923)*/

/** FE2C, Interrupt Control Register */
#define CPU0_ICR ((*(volatile Ifx_CPU_ICR*)0xF881FE2Cu)) /* lint --e(923)*/

/** FE28, Interrupt Stack Pointer */
#define CPU0_ISP ((*(volatile Ifx_CPU_ISP*)0xF881FE28u)) /* lint --e(923)*/

/** FE3C, Free CSA List Limit Pointer */
#define CPU0_LCX ((*(volatile Ifx_CPU_LCX*)0xF881FE3Cu)) /* lint --e(923)*/

/** Alias for CPU0_MCNT0.
 *  Note that this definition is obsolete, use CPU0_MCNT0 instead.
 * FC0C, Multi-Count Register
 */
#define CPU0_M0CNT (CPU0_MCNT0)

/** Alias for CPU0_MCNT1.
 *  Note that this definition is obsolete, use CPU0_MCNT1 instead.
 * FC10, Multi-Count Register
 */
#define CPU0_M1CNT (CPU0_MCNT1)

/** Alias for CPU0_MCNT2.
 *  Note that this definition is obsolete, use CPU0_MCNT2 instead.
 * FC14, Multi-Count Register
 */
#define CPU0_M2CNT (CPU0_MCNT2)

/** FC0C, Multi-Count Register */
#define CPU0_MCNT0 ((*(volatile Ifx_CPU_MCNT*)0xF881FC0Cu)) /* lint --e(923)*/

/** FC10, Multi-Count Register */
#define CPU0_MCNT1 ((*(volatile Ifx_CPU_MCNT*)0xF881FC10u)) /* lint --e(923)*/

/** FC14, Multi-Count Register */
#define CPU0_MCNT2 ((*(volatile Ifx_CPU_MCNT*)0xF881FC14u)) /* lint --e(923)*/

/** 8004, Address Space Identifier Register */
#define CPU0_MMU_ASI ((*(volatile Ifx_CPU_MMU_ASI*)0xF8818004u)) /* lint --e(923)*/

/** 8000, MMU Control Register */
#define CPU0_MMU_CON ((*(volatile Ifx_CPU_MMU_CON*)0xF8818000u)) /* lint --e(923)*/

/** FE08, Program Counter */
#define CPU0_PC ((*(volatile Ifx_CPU_PC*)0xF881FE08u)) /* lint --e(923)*/

/** 920C, Program Control 0 */
#define CPU0_PCON0 ((*(volatile Ifx_CPU_PCON0*)0xF881920Cu)) /* lint --e(923)*/

/** 9204, Program Control 1 */
#define CPU0_PCON1 ((*(volatile Ifx_CPU_PCON1*)0xF8819204u)) /* lint --e(923)*/

/** 9208, Program Control 2 */
#define CPU0_PCON2 ((*(volatile Ifx_CPU_PCON2*)0xF8819208u)) /* lint --e(923)*/

/** FE00, Previous Context Information Register */
#define CPU0_PCXI ((*(volatile Ifx_CPU_PCXI*)0xF881FE00u)) /* lint --e(923)*/

/** 9210, Program Integrity Error Address Register */
#define CPU0_PIEAR ((*(volatile Ifx_CPU_PIEAR*)0xF8819210u)) /* lint --e(923)*/

/** 9214, Program Integrity Error Trap Register */
#define CPU0_PIETR ((*(volatile Ifx_CPU_PIETR*)0xF8819214u)) /* lint --e(923)*/

/** 801C, Physical Memory Attributes */
#define CPU0_PMA0 ((*(volatile Ifx_CPU_PMA0*)0xF881801Cu)) /* lint --e(923)*/

/** 9200, Program Synchronous Trap Register */
#define CPU0_PSTR ((*(volatile Ifx_CPU_PSTR*)0xF8819200u)) /* lint --e(923)*/

/** FE04, Program Status Word */
#define CPU0_PSW ((*(volatile Ifx_CPU_PSW*)0xF881FE04u)) /* lint --e(923)*/

/** 1030, SRI Error Generation Register */
#define CPU0_SEGEN ((*(volatile Ifx_CPU_SEGEN*)0xF8811030u)) /* lint --e(923)*/

/** 900C, SIST Mode Access Control Register */
#define CPU0_SMACON ((*(volatile Ifx_CPU_SMACON*)0xF881900Cu)) /* lint --e(923)*/

/** FD10, Software Debug Event */
#define CPU0_SWEVT ((*(volatile Ifx_CPU_SWEVT*)0xF881FD10u)) /* lint --e(923)*/

/** FE14, System Configuration Register */
#define CPU0_SYSCON ((*(volatile Ifx_CPU_SYSCON*)0xF881FE14u)) /* lint --e(923)*/

/** E400, CPU Temporal Protection System Control Register */
#define CPU0_TPS_CON ((*(volatile Ifx_CPU_TPS_CON*)0xF881E400u)) /* lint --e(923)*/

/** E404, CPU Temporal Protection System Timer Register */
#define CPU0_TPS_TIMER0 ((*(volatile Ifx_CPU_TPS_TIMER*)0xF881E404u)) /* lint --e(923)*/

/** E408, CPU Temporal Protection System Timer Register */
#define CPU0_TPS_TIMER1 ((*(volatile Ifx_CPU_TPS_TIMER*)0xF881E408u)) /* lint --e(923)*/

/** F004, Trigger Address */
#define CPU0_TR0_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF881F004u)) /* lint --e(923)*/

/** F000, Trigger Event */
#define CPU0_TR0_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF881F000u)) /* lint --e(923)*/

/** Alias for CPU0_TR0_ADR.
 *  Note that this definition is obsolete, use CPU0_TR0_ADR instead.
 * F004, Trigger Address
 */
#define CPU0_TR0ADR (CPU0_TR0_ADR)

/** Alias for CPU0_TR0_EVT.
 *  Note that this definition is obsolete, use CPU0_TR0_EVT instead.
 * F000, Trigger Event
 */
#define CPU0_TR0EVT (CPU0_TR0_EVT)

/** F00C, Trigger Address */
#define CPU0_TR1_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF881F00Cu)) /* lint --e(923)*/

/** F008, Trigger Event */
#define CPU0_TR1_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF881F008u)) /* lint --e(923)*/

/** Alias for CPU0_TR1_ADR.
 *  Note that this definition is obsolete, use CPU0_TR1_ADR instead.
 * F00C, Trigger Address
 */
#define CPU0_TR1ADR (CPU0_TR1_ADR)

/** Alias for CPU0_TR1_EVT.
 *  Note that this definition is obsolete, use CPU0_TR1_EVT instead.
 * F008, Trigger Event
 */
#define CPU0_TR1EVT (CPU0_TR1_EVT)

/** F014, Trigger Address */
#define CPU0_TR2_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF881F014u)) /* lint --e(923)*/

/** F010, Trigger Event */
#define CPU0_TR2_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF881F010u)) /* lint --e(923)*/

/** Alias for CPU0_TR2_ADR.
 *  Note that this definition is obsolete, use CPU0_TR2_ADR instead.
 * F014, Trigger Address
 */
#define CPU0_TR2ADR (CPU0_TR2_ADR)

/** Alias for CPU0_TR2_EVT.
 *  Note that this definition is obsolete, use CPU0_TR2_EVT instead.
 * F010, Trigger Event
 */
#define CPU0_TR2EVT (CPU0_TR2_EVT)

/** F01C, Trigger Address */
#define CPU0_TR3_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF881F01Cu)) /* lint --e(923)*/

/** F018, Trigger Event */
#define CPU0_TR3_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF881F018u)) /* lint --e(923)*/

/** Alias for CPU0_TR3_ADR.
 *  Note that this definition is obsolete, use CPU0_TR3_ADR instead.
 * F01C, Trigger Address
 */
#define CPU0_TR3ADR (CPU0_TR3_ADR)

/** Alias for CPU0_TR3_EVT.
 *  Note that this definition is obsolete, use CPU0_TR3_EVT instead.
 * F018, Trigger Event
 */
#define CPU0_TR3EVT (CPU0_TR3_EVT)

/** F024, Trigger Address */
#define CPU0_TR4_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF881F024u)) /* lint --e(923)*/

/** F020, Trigger Event */
#define CPU0_TR4_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF881F020u)) /* lint --e(923)*/

/** Alias for CPU0_TR4_ADR.
 *  Note that this definition is obsolete, use CPU0_TR4_ADR instead.
 * F024, Trigger Address
 */
#define CPU0_TR4ADR (CPU0_TR4_ADR)

/** Alias for CPU0_TR4_EVT.
 *  Note that this definition is obsolete, use CPU0_TR4_EVT instead.
 * F020, Trigger Event
 */
#define CPU0_TR4EVT (CPU0_TR4_EVT)

/** F02C, Trigger Address */
#define CPU0_TR5_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF881F02Cu)) /* lint --e(923)*/

/** F028, Trigger Event */
#define CPU0_TR5_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF881F028u)) /* lint --e(923)*/

/** Alias for CPU0_TR5_ADR.
 *  Note that this definition is obsolete, use CPU0_TR5_ADR instead.
 * F02C, Trigger Address
 */
#define CPU0_TR5ADR (CPU0_TR5_ADR)

/** Alias for CPU0_TR5_EVT.
 *  Note that this definition is obsolete, use CPU0_TR5_EVT instead.
 * F028, Trigger Event
 */
#define CPU0_TR5EVT (CPU0_TR5_EVT)

/** F034, Trigger Address */
#define CPU0_TR6_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF881F034u)) /* lint --e(923)*/

/** F030, Trigger Event */
#define CPU0_TR6_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF881F030u)) /* lint --e(923)*/

/** Alias for CPU0_TR6_ADR.
 *  Note that this definition is obsolete, use CPU0_TR6_ADR instead.
 * F034, Trigger Address
 */
#define CPU0_TR6ADR (CPU0_TR6_ADR)

/** Alias for CPU0_TR6_EVT.
 *  Note that this definition is obsolete, use CPU0_TR6_EVT instead.
 * F030, Trigger Event
 */
#define CPU0_TR6EVT (CPU0_TR6_EVT)

/** F03C, Trigger Address */
#define CPU0_TR7_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF881F03Cu)) /* lint --e(923)*/

/** F038, Trigger Event */
#define CPU0_TR7_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF881F038u)) /* lint --e(923)*/

/** Alias for CPU0_TR7_ADR.
 *  Note that this definition is obsolete, use CPU0_TR7_ADR instead.
 * F03C, Trigger Address
 */
#define CPU0_TR7ADR (CPU0_TR7_ADR)

/** Alias for CPU0_TR7_EVT.
 *  Note that this definition is obsolete, use CPU0_TR7_EVT instead.
 * F038, Trigger Event
 */
#define CPU0_TR7EVT (CPU0_TR7_EVT)

/** FD30, CPU Trigger Address x */
#define CPU0_TRIG_ACC ((*(volatile Ifx_CPU_TRIG_ACC*)0xF881FD30u)) /* lint --e(923)*/

/******************************************************************************/
/*                           Define (2-CPU0_SPROT)                            */
/******************************************************************************/

/** E100, CPU Safety Protection Register Access Enable Register A */
#define CPU0_SPROT_ACCENA ((*(volatile Ifx_CPU_SPROT_ACCENA*)0xF880E100u)) /* lint --e(923)*/

/** E104, CPU Safety Protection Region Access Enable Register B */
#define CPU0_SPROT_ACCENB ((*(volatile Ifx_CPU_SPROT_ACCENB*)0xF880E104u)) /* lint --e(923)*/

/** E008, CPU Safety Protection Region Access Enable Register A */
#define CPU0_SPROT_RGN0_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF880E008u)) /* lint --e(923)*/

/** E00C, CPU Safety Protection Region Access Enable Register B */
#define CPU0_SPROT_RGN0_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF880E00Cu)) /* lint --e(923)*/

/** E000, CPU Safety Protection Region Lower Address Register */
#define CPU0_SPROT_RGN0_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF880E000u)) /* lint --e(923)*/

/** E004, CPU Safety protection Region Upper Address Register */
#define CPU0_SPROT_RGN0_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF880E004u)) /* lint --e(923)*/

/** E018, CPU Safety Protection Region Access Enable Register A */
#define CPU0_SPROT_RGN1_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF880E018u)) /* lint --e(923)*/

/** E01C, CPU Safety Protection Region Access Enable Register B */
#define CPU0_SPROT_RGN1_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF880E01Cu)) /* lint --e(923)*/

/** E010, CPU Safety Protection Region Lower Address Register */
#define CPU0_SPROT_RGN1_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF880E010u)) /* lint --e(923)*/

/** E014, CPU Safety protection Region Upper Address Register */
#define CPU0_SPROT_RGN1_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF880E014u)) /* lint --e(923)*/

/** E028, CPU Safety Protection Region Access Enable Register A */
#define CPU0_SPROT_RGN2_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF880E028u)) /* lint --e(923)*/

/** E02C, CPU Safety Protection Region Access Enable Register B */
#define CPU0_SPROT_RGN2_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF880E02Cu)) /* lint --e(923)*/

/** E020, CPU Safety Protection Region Lower Address Register */
#define CPU0_SPROT_RGN2_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF880E020u)) /* lint --e(923)*/

/** E024, CPU Safety protection Region Upper Address Register */
#define CPU0_SPROT_RGN2_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF880E024u)) /* lint --e(923)*/

/** E038, CPU Safety Protection Region Access Enable Register A */
#define CPU0_SPROT_RGN3_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF880E038u)) /* lint --e(923)*/

/** E03C, CPU Safety Protection Region Access Enable Register B */
#define CPU0_SPROT_RGN3_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF880E03Cu)) /* lint --e(923)*/

/** E030, CPU Safety Protection Region Lower Address Register */
#define CPU0_SPROT_RGN3_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF880E030u)) /* lint --e(923)*/

/** E034, CPU Safety protection Region Upper Address Register */
#define CPU0_SPROT_RGN3_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF880E034u)) /* lint --e(923)*/

/** E048, CPU Safety Protection Region Access Enable Register A */
#define CPU0_SPROT_RGN4_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF880E048u)) /* lint --e(923)*/

/** E04C, CPU Safety Protection Region Access Enable Register B */
#define CPU0_SPROT_RGN4_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF880E04Cu)) /* lint --e(923)*/

/** E040, CPU Safety Protection Region Lower Address Register */
#define CPU0_SPROT_RGN4_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF880E040u)) /* lint --e(923)*/

/** E044, CPU Safety protection Region Upper Address Register */
#define CPU0_SPROT_RGN4_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF880E044u)) /* lint --e(923)*/

/** E058, CPU Safety Protection Region Access Enable Register A */
#define CPU0_SPROT_RGN5_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF880E058u)) /* lint --e(923)*/

/** E05C, CPU Safety Protection Region Access Enable Register B */
#define CPU0_SPROT_RGN5_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF880E05Cu)) /* lint --e(923)*/

/** E050, CPU Safety Protection Region Lower Address Register */
#define CPU0_SPROT_RGN5_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF880E050u)) /* lint --e(923)*/

/** E054, CPU Safety protection Region Upper Address Register */
#define CPU0_SPROT_RGN5_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF880E054u)) /* lint --e(923)*/

/** E068, CPU Safety Protection Region Access Enable Register A */
#define CPU0_SPROT_RGN6_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF880E068u)) /* lint --e(923)*/

/** E06C, CPU Safety Protection Region Access Enable Register B */
#define CPU0_SPROT_RGN6_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF880E06Cu)) /* lint --e(923)*/

/** E060, CPU Safety Protection Region Lower Address Register */
#define CPU0_SPROT_RGN6_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF880E060u)) /* lint --e(923)*/

/** E064, CPU Safety protection Region Upper Address Register */
#define CPU0_SPROT_RGN6_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF880E064u)) /* lint --e(923)*/

/** E078, CPU Safety Protection Region Access Enable Register A */
#define CPU0_SPROT_RGN7_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF880E078u)) /* lint --e(923)*/

/** E07C, CPU Safety Protection Region Access Enable Register B */
#define CPU0_SPROT_RGN7_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF880E07Cu)) /* lint --e(923)*/

/** E070, CPU Safety Protection Region Lower Address Register */
#define CPU0_SPROT_RGN7_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF880E070u)) /* lint --e(923)*/

/** E074, CPU Safety protection Region Upper Address Register */
#define CPU0_SPROT_RGN7_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF880E074u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-CPU1)                               */
/******************************************************************************/

/** FF80, Address General Purpose Register */
#define CPU1_A0 ((*(volatile Ifx_CPU_A*)0xF883FF80u)) /* lint --e(923)*/

/** FF84, Address General Purpose Register */
#define CPU1_A1 ((*(volatile Ifx_CPU_A*)0xF883FF84u)) /* lint --e(923)*/

/** FFA8, Address General Purpose Register */
#define CPU1_A10 ((*(volatile Ifx_CPU_A*)0xF883FFA8u)) /* lint --e(923)*/

/** FFAC, Address General Purpose Register */
#define CPU1_A11 ((*(volatile Ifx_CPU_A*)0xF883FFACu)) /* lint --e(923)*/

/** FFB0, Address General Purpose Register */
#define CPU1_A12 ((*(volatile Ifx_CPU_A*)0xF883FFB0u)) /* lint --e(923)*/

/** FFB4, Address General Purpose Register */
#define CPU1_A13 ((*(volatile Ifx_CPU_A*)0xF883FFB4u)) /* lint --e(923)*/

/** FFB8, Address General Purpose Register */
#define CPU1_A14 ((*(volatile Ifx_CPU_A*)0xF883FFB8u)) /* lint --e(923)*/

/** FFBC, Address General Purpose Register */
#define CPU1_A15 ((*(volatile Ifx_CPU_A*)0xF883FFBCu)) /* lint --e(923)*/

/** FF88, Address General Purpose Register */
#define CPU1_A2 ((*(volatile Ifx_CPU_A*)0xF883FF88u)) /* lint --e(923)*/

/** FF8C, Address General Purpose Register */
#define CPU1_A3 ((*(volatile Ifx_CPU_A*)0xF883FF8Cu)) /* lint --e(923)*/

/** FF90, Address General Purpose Register */
#define CPU1_A4 ((*(volatile Ifx_CPU_A*)0xF883FF90u)) /* lint --e(923)*/

/** FF94, Address General Purpose Register */
#define CPU1_A5 ((*(volatile Ifx_CPU_A*)0xF883FF94u)) /* lint --e(923)*/

/** FF98, Address General Purpose Register */
#define CPU1_A6 ((*(volatile Ifx_CPU_A*)0xF883FF98u)) /* lint --e(923)*/

/** FF9C, Address General Purpose Register */
#define CPU1_A7 ((*(volatile Ifx_CPU_A*)0xF883FF9Cu)) /* lint --e(923)*/

/** FFA0, Address General Purpose Register */
#define CPU1_A8 ((*(volatile Ifx_CPU_A*)0xF883FFA0u)) /* lint --e(923)*/

/** FFA4, Address General Purpose Register */
#define CPU1_A9 ((*(volatile Ifx_CPU_A*)0xF883FFA4u)) /* lint --e(923)*/

/** FE20, Base Interrupt Vector Table Pointer */
#define CPU1_BIV ((*(volatile Ifx_CPU_BIV*)0xF883FE20u)) /* lint --e(923)*/

/** FE24, Base Trap Vector Table Pointer */
#define CPU1_BTV ((*(volatile Ifx_CPU_BTV*)0xF883FE24u)) /* lint --e(923)*/

/** FC04, CPU Clock Cycle Count */
#define CPU1_CCNT ((*(volatile Ifx_CPU_CCNT*)0xF883FC04u)) /* lint --e(923)*/

/** FC00, Counter Control */
#define CPU1_CCTRL ((*(volatile Ifx_CPU_CCTRL*)0xF883FC00u)) /* lint --e(923)*/

/** 9400, Compatibility Control Register */
#define CPU1_COMPAT ((*(volatile Ifx_CPU_COMPAT*)0xF8839400u)) /* lint --e(923)*/

/** FE1C, CPU Core Identification Register */
#define CPU1_CORE_ID ((*(volatile Ifx_CPU_CORE_ID*)0xF883FE1Cu)) /* lint --e(923)*/

/** D000, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR0_L ((*(volatile Ifx_CPU_CPR_L*)0xF883D000u)) /* lint --e(923)*/

/** D004, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR0_U ((*(volatile Ifx_CPU_CPR_U*)0xF883D004u)) /* lint --e(923)*/

/** D008, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR1_L ((*(volatile Ifx_CPU_CPR_L*)0xF883D008u)) /* lint --e(923)*/

/** D00C, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR1_U ((*(volatile Ifx_CPU_CPR_U*)0xF883D00Cu)) /* lint --e(923)*/

/** D010, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR2_L ((*(volatile Ifx_CPU_CPR_L*)0xF883D010u)) /* lint --e(923)*/

/** D014, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR2_U ((*(volatile Ifx_CPU_CPR_U*)0xF883D014u)) /* lint --e(923)*/

/** D018, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR3_L ((*(volatile Ifx_CPU_CPR_L*)0xF883D018u)) /* lint --e(923)*/

/** D01C, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR3_U ((*(volatile Ifx_CPU_CPR_U*)0xF883D01Cu)) /* lint --e(923)*/

/** D020, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR4_L ((*(volatile Ifx_CPU_CPR_L*)0xF883D020u)) /* lint --e(923)*/

/** D024, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR4_U ((*(volatile Ifx_CPU_CPR_U*)0xF883D024u)) /* lint --e(923)*/

/** D028, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR5_L ((*(volatile Ifx_CPU_CPR_L*)0xF883D028u)) /* lint --e(923)*/

/** D02C, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR5_U ((*(volatile Ifx_CPU_CPR_U*)0xF883D02Cu)) /* lint --e(923)*/

/** D030, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR6_L ((*(volatile Ifx_CPU_CPR_L*)0xF883D030u)) /* lint --e(923)*/

/** D034, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR6_U ((*(volatile Ifx_CPU_CPR_U*)0xF883D034u)) /* lint --e(923)*/

/** D038, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR7_L ((*(volatile Ifx_CPU_CPR_L*)0xF883D038u)) /* lint --e(923)*/

/** D03C, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR7_U ((*(volatile Ifx_CPU_CPR_U*)0xF883D03Cu)) /* lint --e(923)*/

/** FE18, CPU Identification Register TC1.6P */
#define CPU1_CPU_ID ((*(volatile Ifx_CPU_CPU_ID*)0xF883FE18u)) /* lint --e(923)*/

/** E000, CPU Code Protection Execute Enable Register Set */
#define CPU1_CPXE0 ((*(volatile Ifx_CPU_CPXE*)0xF883E000u)) /* lint --e(923)*/

/** E004, CPU Code Protection Execute Enable Register Set */
#define CPU1_CPXE1 ((*(volatile Ifx_CPU_CPXE*)0xF883E004u)) /* lint --e(923)*/

/** E008, CPU Code Protection Execute Enable Register Set */
#define CPU1_CPXE2 ((*(volatile Ifx_CPU_CPXE*)0xF883E008u)) /* lint --e(923)*/

/** E00C, CPU Code Protection Execute Enable Register Set */
#define CPU1_CPXE3 ((*(volatile Ifx_CPU_CPXE*)0xF883E00Cu)) /* lint --e(923)*/

/** FD0C, Core Register Access Event */
#define CPU1_CREVT ((*(volatile Ifx_CPU_CREVT*)0xF883FD0Cu)) /* lint --e(923)*/

/** FF00, Data General Purpose Register */
#define CPU1_D0 ((*(volatile Ifx_CPU_D*)0xF883FF00u)) /* lint --e(923)*/

/** FF04, Data General Purpose Register */
#define CPU1_D1 ((*(volatile Ifx_CPU_D*)0xF883FF04u)) /* lint --e(923)*/

/** FF28, Data General Purpose Register */
#define CPU1_D10 ((*(volatile Ifx_CPU_D*)0xF883FF28u)) /* lint --e(923)*/

/** FF2C, Data General Purpose Register */
#define CPU1_D11 ((*(volatile Ifx_CPU_D*)0xF883FF2Cu)) /* lint --e(923)*/

/** FF30, Data General Purpose Register */
#define CPU1_D12 ((*(volatile Ifx_CPU_D*)0xF883FF30u)) /* lint --e(923)*/

/** FF34, Data General Purpose Register */
#define CPU1_D13 ((*(volatile Ifx_CPU_D*)0xF883FF34u)) /* lint --e(923)*/

/** FF38, Data General Purpose Register */
#define CPU1_D14 ((*(volatile Ifx_CPU_D*)0xF883FF38u)) /* lint --e(923)*/

/** FF3C, Data General Purpose Register */
#define CPU1_D15 ((*(volatile Ifx_CPU_D*)0xF883FF3Cu)) /* lint --e(923)*/

/** FF08, Data General Purpose Register */
#define CPU1_D2 ((*(volatile Ifx_CPU_D*)0xF883FF08u)) /* lint --e(923)*/

/** FF0C, Data General Purpose Register */
#define CPU1_D3 ((*(volatile Ifx_CPU_D*)0xF883FF0Cu)) /* lint --e(923)*/

/** FF10, Data General Purpose Register */
#define CPU1_D4 ((*(volatile Ifx_CPU_D*)0xF883FF10u)) /* lint --e(923)*/

/** FF14, Data General Purpose Register */
#define CPU1_D5 ((*(volatile Ifx_CPU_D*)0xF883FF14u)) /* lint --e(923)*/

/** FF18, Data General Purpose Register */
#define CPU1_D6 ((*(volatile Ifx_CPU_D*)0xF883FF18u)) /* lint --e(923)*/

/** FF1C, Data General Purpose Register */
#define CPU1_D7 ((*(volatile Ifx_CPU_D*)0xF883FF1Cu)) /* lint --e(923)*/

/** FF20, Data General Purpose Register */
#define CPU1_D8 ((*(volatile Ifx_CPU_D*)0xF883FF20u)) /* lint --e(923)*/

/** FF24, Data General Purpose Register */
#define CPU1_D9 ((*(volatile Ifx_CPU_D*)0xF883FF24u)) /* lint --e(923)*/

/** 9018, Data Asynchronous Trap Register */
#define CPU1_DATR ((*(volatile Ifx_CPU_DATR*)0xF8839018u)) /* lint --e(923)*/

/** FD00, Debug Status Register */
#define CPU1_DBGSR ((*(volatile Ifx_CPU_DBGSR*)0xF883FD00u)) /* lint --e(923)*/

/** FD48, Debug Trap Control Register */
#define CPU1_DBGTCR ((*(volatile Ifx_CPU_DBGTCR*)0xF883FD48u)) /* lint --e(923)*/

/** 9040, Data Memory Control Register */
#define CPU1_DCON0 ((*(volatile Ifx_CPU_DCON0*)0xF8839040u)) /* lint --e(923)*/

/** 9000, Data Control Register 2 */
#define CPU1_DCON2 ((*(volatile Ifx_CPU_DCON2*)0xF8839000u)) /* lint --e(923)*/

/** FD44, Debug Context Save Area Pointer */
#define CPU1_DCX ((*(volatile Ifx_CPU_DCX*)0xF883FD44u)) /* lint --e(923)*/

/** 901C, Data Error Address Register */
#define CPU1_DEADD ((*(volatile Ifx_CPU_DEADD*)0xF883901Cu)) /* lint --e(923)*/

/** 9020, Data Integrity Error Address Register */
#define CPU1_DIEAR ((*(volatile Ifx_CPU_DIEAR*)0xF8839020u)) /* lint --e(923)*/

/** 9024, Data Integrity Error Trap Register */
#define CPU1_DIETR ((*(volatile Ifx_CPU_DIETR*)0xF8839024u)) /* lint --e(923)*/

/** FD40, Debug Monitor Start Address */
#define CPU1_DMS ((*(volatile Ifx_CPU_DMS*)0xF883FD40u)) /* lint --e(923)*/

/** C000, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR0_L ((*(volatile Ifx_CPU_DPR_L*)0xF883C000u)) /* lint --e(923)*/

/** C004, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR0_U ((*(volatile Ifx_CPU_DPR_U*)0xF883C004u)) /* lint --e(923)*/

/** C050, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR10_L ((*(volatile Ifx_CPU_DPR_L*)0xF883C050u)) /* lint --e(923)*/

/** C054, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR10_U ((*(volatile Ifx_CPU_DPR_U*)0xF883C054u)) /* lint --e(923)*/

/** C058, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR11_L ((*(volatile Ifx_CPU_DPR_L*)0xF883C058u)) /* lint --e(923)*/

/** C05C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR11_U ((*(volatile Ifx_CPU_DPR_U*)0xF883C05Cu)) /* lint --e(923)*/

/** C060, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR12_L ((*(volatile Ifx_CPU_DPR_L*)0xF883C060u)) /* lint --e(923)*/

/** C064, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR12_U ((*(volatile Ifx_CPU_DPR_U*)0xF883C064u)) /* lint --e(923)*/

/** C068, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR13_L ((*(volatile Ifx_CPU_DPR_L*)0xF883C068u)) /* lint --e(923)*/

/** C06C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR13_U ((*(volatile Ifx_CPU_DPR_U*)0xF883C06Cu)) /* lint --e(923)*/

/** C070, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR14_L ((*(volatile Ifx_CPU_DPR_L*)0xF883C070u)) /* lint --e(923)*/

/** C074, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR14_U ((*(volatile Ifx_CPU_DPR_U*)0xF883C074u)) /* lint --e(923)*/

/** C078, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR15_L ((*(volatile Ifx_CPU_DPR_L*)0xF883C078u)) /* lint --e(923)*/

/** C07C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR15_U ((*(volatile Ifx_CPU_DPR_U*)0xF883C07Cu)) /* lint --e(923)*/

/** C008, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR1_L ((*(volatile Ifx_CPU_DPR_L*)0xF883C008u)) /* lint --e(923)*/

/** C00C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR1_U ((*(volatile Ifx_CPU_DPR_U*)0xF883C00Cu)) /* lint --e(923)*/

/** C010, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR2_L ((*(volatile Ifx_CPU_DPR_L*)0xF883C010u)) /* lint --e(923)*/

/** C014, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR2_U ((*(volatile Ifx_CPU_DPR_U*)0xF883C014u)) /* lint --e(923)*/

/** C018, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR3_L ((*(volatile Ifx_CPU_DPR_L*)0xF883C018u)) /* lint --e(923)*/

/** C01C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR3_U ((*(volatile Ifx_CPU_DPR_U*)0xF883C01Cu)) /* lint --e(923)*/

/** C020, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR4_L ((*(volatile Ifx_CPU_DPR_L*)0xF883C020u)) /* lint --e(923)*/

/** C024, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR4_U ((*(volatile Ifx_CPU_DPR_U*)0xF883C024u)) /* lint --e(923)*/

/** C028, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR5_L ((*(volatile Ifx_CPU_DPR_L*)0xF883C028u)) /* lint --e(923)*/

/** C02C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR5_U ((*(volatile Ifx_CPU_DPR_U*)0xF883C02Cu)) /* lint --e(923)*/

/** C030, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR6_L ((*(volatile Ifx_CPU_DPR_L*)0xF883C030u)) /* lint --e(923)*/

/** C034, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR6_U ((*(volatile Ifx_CPU_DPR_U*)0xF883C034u)) /* lint --e(923)*/

/** C038, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR7_L ((*(volatile Ifx_CPU_DPR_L*)0xF883C038u)) /* lint --e(923)*/

/** C03C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR7_U ((*(volatile Ifx_CPU_DPR_U*)0xF883C03Cu)) /* lint --e(923)*/

/** C040, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR8_L ((*(volatile Ifx_CPU_DPR_L*)0xF883C040u)) /* lint --e(923)*/

/** C044, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR8_U ((*(volatile Ifx_CPU_DPR_U*)0xF883C044u)) /* lint --e(923)*/

/** C048, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR9_L ((*(volatile Ifx_CPU_DPR_L*)0xF883C048u)) /* lint --e(923)*/

/** C04C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR9_U ((*(volatile Ifx_CPU_DPR_U*)0xF883C04Cu)) /* lint --e(923)*/

/** E010, CPU Data Protection Read Enable Register Set */
#define CPU1_DPRE0 ((*(volatile Ifx_CPU_DPRE*)0xF883E010u)) /* lint --e(923)*/

/** E014, CPU Data Protection Read Enable Register Set */
#define CPU1_DPRE1 ((*(volatile Ifx_CPU_DPRE*)0xF883E014u)) /* lint --e(923)*/

/** E018, CPU Data Protection Read Enable Register Set */
#define CPU1_DPRE2 ((*(volatile Ifx_CPU_DPRE*)0xF883E018u)) /* lint --e(923)*/

/** E01C, CPU Data Protection Read Enable Register Set */
#define CPU1_DPRE3 ((*(volatile Ifx_CPU_DPRE*)0xF883E01Cu)) /* lint --e(923)*/

/** E020, CPU Data Protection Write Enable Register Set */
#define CPU1_DPWE0 ((*(volatile Ifx_CPU_DPWE*)0xF883E020u)) /* lint --e(923)*/

/** E024, CPU Data Protection Write Enable Register Set */
#define CPU1_DPWE1 ((*(volatile Ifx_CPU_DPWE*)0xF883E024u)) /* lint --e(923)*/

/** E028, CPU Data Protection Write Enable Register Set */
#define CPU1_DPWE2 ((*(volatile Ifx_CPU_DPWE*)0xF883E028u)) /* lint --e(923)*/

/** E02C, CPU Data Protection Write Enable Register Set */
#define CPU1_DPWE3 ((*(volatile Ifx_CPU_DPWE*)0xF883E02Cu)) /* lint --e(923)*/

/** 9010, Data Synchronous Trap Register */
#define CPU1_DSTR ((*(volatile Ifx_CPU_DSTR*)0xF8839010u)) /* lint --e(923)*/

/** FD08, External Event Register */
#define CPU1_EXEVT ((*(volatile Ifx_CPU_EXEVT*)0xF883FD08u)) /* lint --e(923)*/

/** FE38, Free CSA List Head Pointer */
#define CPU1_FCX ((*(volatile Ifx_CPU_FCX*)0xF883FE38u)) /* lint --e(923)*/

/** A000, CPU Trap Control Register */
#define CPU1_FPU_TRAP_CON ((*(volatile Ifx_CPU_FPU_TRAP_CON*)0xF883A000u)) /* lint --e(923)*/

/** A008, CPU Trapping Instruction Opcode Register */
#define CPU1_FPU_TRAP_OPC ((*(volatile Ifx_CPU_FPU_TRAP_OPC*)0xF883A008u)) /* lint --e(923)*/

/** A004, CPU Trapping Instruction Program Counter Register */
#define CPU1_FPU_TRAP_PC ((*(volatile Ifx_CPU_FPU_TRAP_PC*)0xF883A004u)) /* lint --e(923)*/

/** A010, CPU Trapping Instruction Operand Register */
#define CPU1_FPU_TRAP_SRC1 ((*(volatile Ifx_CPU_FPU_TRAP_SRC1*)0xF883A010u)) /* lint --e(923)*/

/** A014, CPU Trapping Instruction Operand Register */
#define CPU1_FPU_TRAP_SRC2 ((*(volatile Ifx_CPU_FPU_TRAP_SRC2*)0xF883A014u)) /* lint --e(923)*/

/** A018, Trapping Instruction Operand Register */
#define CPU1_FPU_TRAP_SRC3 ((*(volatile Ifx_CPU_FPU_TRAP_SRC3*)0xF883A018u)) /* lint --e(923)*/

/** FC08, Instruction Count */
#define CPU1_ICNT ((*(volatile Ifx_CPU_ICNT*)0xF883FC08u)) /* lint --e(923)*/

/** FE2C, Interrupt Control Register */
#define CPU1_ICR ((*(volatile Ifx_CPU_ICR*)0xF883FE2Cu)) /* lint --e(923)*/

/** FE28, Interrupt Stack Pointer */
#define CPU1_ISP ((*(volatile Ifx_CPU_ISP*)0xF883FE28u)) /* lint --e(923)*/

/** FE3C, Free CSA List Limit Pointer */
#define CPU1_LCX ((*(volatile Ifx_CPU_LCX*)0xF883FE3Cu)) /* lint --e(923)*/

/** Alias for CPU1_MCNT0.
 *  Note that this definition is obsolete, use CPU1_MCNT0 instead.
 * FC0C, Multi-Count Register
 */
#define CPU1_M0CNT (CPU1_MCNT0)

/** Alias for CPU1_MCNT1.
 *  Note that this definition is obsolete, use CPU1_MCNT1 instead.
 * FC10, Multi-Count Register
 */
#define CPU1_M1CNT (CPU1_MCNT1)

/** Alias for CPU1_MCNT2.
 *  Note that this definition is obsolete, use CPU1_MCNT2 instead.
 * FC14, Multi-Count Register
 */
#define CPU1_M2CNT (CPU1_MCNT2)

/** FC0C, Multi-Count Register */
#define CPU1_MCNT0 ((*(volatile Ifx_CPU_MCNT*)0xF883FC0Cu)) /* lint --e(923)*/

/** FC10, Multi-Count Register */
#define CPU1_MCNT1 ((*(volatile Ifx_CPU_MCNT*)0xF883FC10u)) /* lint --e(923)*/

/** FC14, Multi-Count Register */
#define CPU1_MCNT2 ((*(volatile Ifx_CPU_MCNT*)0xF883FC14u)) /* lint --e(923)*/

/** 8004, Address Space Identifier Register */
#define CPU1_MMU_ASI ((*(volatile Ifx_CPU_MMU_ASI*)0xF8838004u)) /* lint --e(923)*/

/** 8000, MMU Control Register */
#define CPU1_MMU_CON ((*(volatile Ifx_CPU_MMU_CON*)0xF8838000u)) /* lint --e(923)*/

/** FE08, Program Counter */
#define CPU1_PC ((*(volatile Ifx_CPU_PC*)0xF883FE08u)) /* lint --e(923)*/

/** 920C, Program Control 0 */
#define CPU1_PCON0 ((*(volatile Ifx_CPU_PCON0*)0xF883920Cu)) /* lint --e(923)*/

/** 9204, Program Control 1 */
#define CPU1_PCON1 ((*(volatile Ifx_CPU_PCON1*)0xF8839204u)) /* lint --e(923)*/

/** 9208, Program Control 2 */
#define CPU1_PCON2 ((*(volatile Ifx_CPU_PCON2*)0xF8839208u)) /* lint --e(923)*/

/** FE00, Previous Context Information Register */
#define CPU1_PCXI ((*(volatile Ifx_CPU_PCXI*)0xF883FE00u)) /* lint --e(923)*/

/** 9210, Program Integrity Error Address Register */
#define CPU1_PIEAR ((*(volatile Ifx_CPU_PIEAR*)0xF8839210u)) /* lint --e(923)*/

/** 9214, Program Integrity Error Trap Register */
#define CPU1_PIETR ((*(volatile Ifx_CPU_PIETR*)0xF8839214u)) /* lint --e(923)*/

/** 801C, Physical Memory Attributes */
#define CPU1_PMA0 ((*(volatile Ifx_CPU_PMA0*)0xF883801Cu)) /* lint --e(923)*/

/** 9200, Program Synchronous Trap Register */
#define CPU1_PSTR ((*(volatile Ifx_CPU_PSTR*)0xF8839200u)) /* lint --e(923)*/

/** FE04, Program Status Word */
#define CPU1_PSW ((*(volatile Ifx_CPU_PSW*)0xF883FE04u)) /* lint --e(923)*/

/** 1030, SRI Error Generation Register */
#define CPU1_SEGEN ((*(volatile Ifx_CPU_SEGEN*)0xF8831030u)) /* lint --e(923)*/

/** 900C, SIST Mode Access Control Register */
#define CPU1_SMACON ((*(volatile Ifx_CPU_SMACON*)0xF883900Cu)) /* lint --e(923)*/

/** FD10, Software Debug Event */
#define CPU1_SWEVT ((*(volatile Ifx_CPU_SWEVT*)0xF883FD10u)) /* lint --e(923)*/

/** FE14, System Configuration Register */
#define CPU1_SYSCON ((*(volatile Ifx_CPU_SYSCON*)0xF883FE14u)) /* lint --e(923)*/

/** E400, CPU Temporal Protection System Control Register */
#define CPU1_TPS_CON ((*(volatile Ifx_CPU_TPS_CON*)0xF883E400u)) /* lint --e(923)*/

/** E404, CPU Temporal Protection System Timer Register */
#define CPU1_TPS_TIMER0 ((*(volatile Ifx_CPU_TPS_TIMER*)0xF883E404u)) /* lint --e(923)*/

/** E408, CPU Temporal Protection System Timer Register */
#define CPU1_TPS_TIMER1 ((*(volatile Ifx_CPU_TPS_TIMER*)0xF883E408u)) /* lint --e(923)*/

/** F004, Trigger Address */
#define CPU1_TR0_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF883F004u)) /* lint --e(923)*/

/** F000, Trigger Event */
#define CPU1_TR0_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF883F000u)) /* lint --e(923)*/

/** Alias for CPU1_TR0_ADR.
 *  Note that this definition is obsolete, use CPU1_TR0_ADR instead.
 * F004, Trigger Address
 */
#define CPU1_TR0ADR (CPU1_TR0_ADR)

/** Alias for CPU1_TR0_EVT.
 *  Note that this definition is obsolete, use CPU1_TR0_EVT instead.
 * F000, Trigger Event
 */
#define CPU1_TR0EVT (CPU1_TR0_EVT)

/** F00C, Trigger Address */
#define CPU1_TR1_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF883F00Cu)) /* lint --e(923)*/

/** F008, Trigger Event */
#define CPU1_TR1_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF883F008u)) /* lint --e(923)*/

/** Alias for CPU1_TR1_ADR.
 *  Note that this definition is obsolete, use CPU1_TR1_ADR instead.
 * F00C, Trigger Address
 */
#define CPU1_TR1ADR (CPU1_TR1_ADR)

/** Alias for CPU1_TR1_EVT.
 *  Note that this definition is obsolete, use CPU1_TR1_EVT instead.
 * F008, Trigger Event
 */
#define CPU1_TR1EVT (CPU1_TR1_EVT)

/** F014, Trigger Address */
#define CPU1_TR2_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF883F014u)) /* lint --e(923)*/

/** F010, Trigger Event */
#define CPU1_TR2_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF883F010u)) /* lint --e(923)*/

/** Alias for CPU1_TR2_ADR.
 *  Note that this definition is obsolete, use CPU1_TR2_ADR instead.
 * F014, Trigger Address
 */
#define CPU1_TR2ADR (CPU1_TR2_ADR)

/** Alias for CPU1_TR2_EVT.
 *  Note that this definition is obsolete, use CPU1_TR2_EVT instead.
 * F010, Trigger Event
 */
#define CPU1_TR2EVT (CPU1_TR2_EVT)

/** F01C, Trigger Address */
#define CPU1_TR3_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF883F01Cu)) /* lint --e(923)*/

/** F018, Trigger Event */
#define CPU1_TR3_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF883F018u)) /* lint --e(923)*/

/** Alias for CPU1_TR3_ADR.
 *  Note that this definition is obsolete, use CPU1_TR3_ADR instead.
 * F01C, Trigger Address
 */
#define CPU1_TR3ADR (CPU1_TR3_ADR)

/** Alias for CPU1_TR3_EVT.
 *  Note that this definition is obsolete, use CPU1_TR3_EVT instead.
 * F018, Trigger Event
 */
#define CPU1_TR3EVT (CPU1_TR3_EVT)

/** F024, Trigger Address */
#define CPU1_TR4_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF883F024u)) /* lint --e(923)*/

/** F020, Trigger Event */
#define CPU1_TR4_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF883F020u)) /* lint --e(923)*/

/** Alias for CPU1_TR4_ADR.
 *  Note that this definition is obsolete, use CPU1_TR4_ADR instead.
 * F024, Trigger Address
 */
#define CPU1_TR4ADR (CPU1_TR4_ADR)

/** Alias for CPU1_TR4_EVT.
 *  Note that this definition is obsolete, use CPU1_TR4_EVT instead.
 * F020, Trigger Event
 */
#define CPU1_TR4EVT (CPU1_TR4_EVT)

/** F02C, Trigger Address */
#define CPU1_TR5_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF883F02Cu)) /* lint --e(923)*/

/** F028, Trigger Event */
#define CPU1_TR5_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF883F028u)) /* lint --e(923)*/

/** Alias for CPU1_TR5_ADR.
 *  Note that this definition is obsolete, use CPU1_TR5_ADR instead.
 * F02C, Trigger Address
 */
#define CPU1_TR5ADR (CPU1_TR5_ADR)

/** Alias for CPU1_TR5_EVT.
 *  Note that this definition is obsolete, use CPU1_TR5_EVT instead.
 * F028, Trigger Event
 */
#define CPU1_TR5EVT (CPU1_TR5_EVT)

/** F034, Trigger Address */
#define CPU1_TR6_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF883F034u)) /* lint --e(923)*/

/** F030, Trigger Event */
#define CPU1_TR6_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF883F030u)) /* lint --e(923)*/

/** Alias for CPU1_TR6_ADR.
 *  Note that this definition is obsolete, use CPU1_TR6_ADR instead.
 * F034, Trigger Address
 */
#define CPU1_TR6ADR (CPU1_TR6_ADR)

/** Alias for CPU1_TR6_EVT.
 *  Note that this definition is obsolete, use CPU1_TR6_EVT instead.
 * F030, Trigger Event
 */
#define CPU1_TR6EVT (CPU1_TR6_EVT)

/** F03C, Trigger Address */
#define CPU1_TR7_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF883F03Cu)) /* lint --e(923)*/

/** F038, Trigger Event */
#define CPU1_TR7_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF883F038u)) /* lint --e(923)*/

/** Alias for CPU1_TR7_ADR.
 *  Note that this definition is obsolete, use CPU1_TR7_ADR instead.
 * F03C, Trigger Address
 */
#define CPU1_TR7ADR (CPU1_TR7_ADR)

/** Alias for CPU1_TR7_EVT.
 *  Note that this definition is obsolete, use CPU1_TR7_EVT instead.
 * F038, Trigger Event
 */
#define CPU1_TR7EVT (CPU1_TR7_EVT)

/** FD30, CPU Trigger Address x */
#define CPU1_TRIG_ACC ((*(volatile Ifx_CPU_TRIG_ACC*)0xF883FD30u)) /* lint --e(923)*/

/******************************************************************************/
/*                           Define (2-CPU1_SPROT)                            */
/******************************************************************************/

/** E100, CPU Safety Protection Register Access Enable Register A */
#define CPU1_SPROT_ACCENA ((*(volatile Ifx_CPU_SPROT_ACCENA*)0xF882E100u)) /* lint --e(923)*/

/** E104, CPU Safety Protection Region Access Enable Register B */
#define CPU1_SPROT_ACCENB ((*(volatile Ifx_CPU_SPROT_ACCENB*)0xF882E104u)) /* lint --e(923)*/

/** E008, CPU Safety Protection Region Access Enable Register A */
#define CPU1_SPROT_RGN0_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF882E008u)) /* lint --e(923)*/

/** E00C, CPU Safety Protection Region Access Enable Register B */
#define CPU1_SPROT_RGN0_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF882E00Cu)) /* lint --e(923)*/

/** E000, CPU Safety Protection Region Lower Address Register */
#define CPU1_SPROT_RGN0_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF882E000u)) /* lint --e(923)*/

/** E004, CPU Safety protection Region Upper Address Register */
#define CPU1_SPROT_RGN0_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF882E004u)) /* lint --e(923)*/

/** E018, CPU Safety Protection Region Access Enable Register A */
#define CPU1_SPROT_RGN1_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF882E018u)) /* lint --e(923)*/

/** E01C, CPU Safety Protection Region Access Enable Register B */
#define CPU1_SPROT_RGN1_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF882E01Cu)) /* lint --e(923)*/

/** E010, CPU Safety Protection Region Lower Address Register */
#define CPU1_SPROT_RGN1_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF882E010u)) /* lint --e(923)*/

/** E014, CPU Safety protection Region Upper Address Register */
#define CPU1_SPROT_RGN1_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF882E014u)) /* lint --e(923)*/

/** E028, CPU Safety Protection Region Access Enable Register A */
#define CPU1_SPROT_RGN2_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF882E028u)) /* lint --e(923)*/

/** E02C, CPU Safety Protection Region Access Enable Register B */
#define CPU1_SPROT_RGN2_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF882E02Cu)) /* lint --e(923)*/

/** E020, CPU Safety Protection Region Lower Address Register */
#define CPU1_SPROT_RGN2_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF882E020u)) /* lint --e(923)*/

/** E024, CPU Safety protection Region Upper Address Register */
#define CPU1_SPROT_RGN2_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF882E024u)) /* lint --e(923)*/

/** E038, CPU Safety Protection Region Access Enable Register A */
#define CPU1_SPROT_RGN3_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF882E038u)) /* lint --e(923)*/

/** E03C, CPU Safety Protection Region Access Enable Register B */
#define CPU1_SPROT_RGN3_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF882E03Cu)) /* lint --e(923)*/

/** E030, CPU Safety Protection Region Lower Address Register */
#define CPU1_SPROT_RGN3_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF882E030u)) /* lint --e(923)*/

/** E034, CPU Safety protection Region Upper Address Register */
#define CPU1_SPROT_RGN3_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF882E034u)) /* lint --e(923)*/

/** E048, CPU Safety Protection Region Access Enable Register A */
#define CPU1_SPROT_RGN4_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF882E048u)) /* lint --e(923)*/

/** E04C, CPU Safety Protection Region Access Enable Register B */
#define CPU1_SPROT_RGN4_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF882E04Cu)) /* lint --e(923)*/

/** E040, CPU Safety Protection Region Lower Address Register */
#define CPU1_SPROT_RGN4_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF882E040u)) /* lint --e(923)*/

/** E044, CPU Safety protection Region Upper Address Register */
#define CPU1_SPROT_RGN4_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF882E044u)) /* lint --e(923)*/

/** E058, CPU Safety Protection Region Access Enable Register A */
#define CPU1_SPROT_RGN5_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF882E058u)) /* lint --e(923)*/

/** E05C, CPU Safety Protection Region Access Enable Register B */
#define CPU1_SPROT_RGN5_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF882E05Cu)) /* lint --e(923)*/

/** E050, CPU Safety Protection Region Lower Address Register */
#define CPU1_SPROT_RGN5_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF882E050u)) /* lint --e(923)*/

/** E054, CPU Safety protection Region Upper Address Register */
#define CPU1_SPROT_RGN5_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF882E054u)) /* lint --e(923)*/

/** E068, CPU Safety Protection Region Access Enable Register A */
#define CPU1_SPROT_RGN6_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF882E068u)) /* lint --e(923)*/

/** E06C, CPU Safety Protection Region Access Enable Register B */
#define CPU1_SPROT_RGN6_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF882E06Cu)) /* lint --e(923)*/

/** E060, CPU Safety Protection Region Lower Address Register */
#define CPU1_SPROT_RGN6_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF882E060u)) /* lint --e(923)*/

/** E064, CPU Safety protection Region Upper Address Register */
#define CPU1_SPROT_RGN6_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF882E064u)) /* lint --e(923)*/

/** E078, CPU Safety Protection Region Access Enable Register A */
#define CPU1_SPROT_RGN7_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF882E078u)) /* lint --e(923)*/

/** E07C, CPU Safety Protection Region Access Enable Register B */
#define CPU1_SPROT_RGN7_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF882E07Cu)) /* lint --e(923)*/

/** E070, CPU Safety Protection Region Lower Address Register */
#define CPU1_SPROT_RGN7_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF882E070u)) /* lint --e(923)*/

/** E074, CPU Safety protection Region Upper Address Register */
#define CPU1_SPROT_RGN7_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF882E074u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-CPU2)                               */
/******************************************************************************/

/** FF80, Address General Purpose Register */
#define CPU2_A0 ((*(volatile Ifx_CPU_A*)0xF885FF80u)) /* lint --e(923)*/

/** FF84, Address General Purpose Register */
#define CPU2_A1 ((*(volatile Ifx_CPU_A*)0xF885FF84u)) /* lint --e(923)*/

/** FFA8, Address General Purpose Register */
#define CPU2_A10 ((*(volatile Ifx_CPU_A*)0xF885FFA8u)) /* lint --e(923)*/

/** FFAC, Address General Purpose Register */
#define CPU2_A11 ((*(volatile Ifx_CPU_A*)0xF885FFACu)) /* lint --e(923)*/

/** FFB0, Address General Purpose Register */
#define CPU2_A12 ((*(volatile Ifx_CPU_A*)0xF885FFB0u)) /* lint --e(923)*/

/** FFB4, Address General Purpose Register */
#define CPU2_A13 ((*(volatile Ifx_CPU_A*)0xF885FFB4u)) /* lint --e(923)*/

/** FFB8, Address General Purpose Register */
#define CPU2_A14 ((*(volatile Ifx_CPU_A*)0xF885FFB8u)) /* lint --e(923)*/

/** FFBC, Address General Purpose Register */
#define CPU2_A15 ((*(volatile Ifx_CPU_A*)0xF885FFBCu)) /* lint --e(923)*/

/** FF88, Address General Purpose Register */
#define CPU2_A2 ((*(volatile Ifx_CPU_A*)0xF885FF88u)) /* lint --e(923)*/

/** FF8C, Address General Purpose Register */
#define CPU2_A3 ((*(volatile Ifx_CPU_A*)0xF885FF8Cu)) /* lint --e(923)*/

/** FF90, Address General Purpose Register */
#define CPU2_A4 ((*(volatile Ifx_CPU_A*)0xF885FF90u)) /* lint --e(923)*/

/** FF94, Address General Purpose Register */
#define CPU2_A5 ((*(volatile Ifx_CPU_A*)0xF885FF94u)) /* lint --e(923)*/

/** FF98, Address General Purpose Register */
#define CPU2_A6 ((*(volatile Ifx_CPU_A*)0xF885FF98u)) /* lint --e(923)*/

/** FF9C, Address General Purpose Register */
#define CPU2_A7 ((*(volatile Ifx_CPU_A*)0xF885FF9Cu)) /* lint --e(923)*/

/** FFA0, Address General Purpose Register */
#define CPU2_A8 ((*(volatile Ifx_CPU_A*)0xF885FFA0u)) /* lint --e(923)*/

/** FFA4, Address General Purpose Register */
#define CPU2_A9 ((*(volatile Ifx_CPU_A*)0xF885FFA4u)) /* lint --e(923)*/

/** FE20, Base Interrupt Vector Table Pointer */
#define CPU2_BIV ((*(volatile Ifx_CPU_BIV*)0xF885FE20u)) /* lint --e(923)*/

/** FE24, Base Trap Vector Table Pointer */
#define CPU2_BTV ((*(volatile Ifx_CPU_BTV*)0xF885FE24u)) /* lint --e(923)*/

/** FC04, CPU Clock Cycle Count */
#define CPU2_CCNT ((*(volatile Ifx_CPU_CCNT*)0xF885FC04u)) /* lint --e(923)*/

/** FC00, Counter Control */
#define CPU2_CCTRL ((*(volatile Ifx_CPU_CCTRL*)0xF885FC00u)) /* lint --e(923)*/

/** 9400, Compatibility Control Register */
#define CPU2_COMPAT ((*(volatile Ifx_CPU_COMPAT*)0xF8859400u)) /* lint --e(923)*/

/** FE1C, CPU Core Identification Register */
#define CPU2_CORE_ID ((*(volatile Ifx_CPU_CORE_ID*)0xF885FE1Cu)) /* lint --e(923)*/

/** D000, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR0_L ((*(volatile Ifx_CPU_CPR_L*)0xF885D000u)) /* lint --e(923)*/

/** D004, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR0_U ((*(volatile Ifx_CPU_CPR_U*)0xF885D004u)) /* lint --e(923)*/

/** D008, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR1_L ((*(volatile Ifx_CPU_CPR_L*)0xF885D008u)) /* lint --e(923)*/

/** D00C, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR1_U ((*(volatile Ifx_CPU_CPR_U*)0xF885D00Cu)) /* lint --e(923)*/

/** D010, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR2_L ((*(volatile Ifx_CPU_CPR_L*)0xF885D010u)) /* lint --e(923)*/

/** D014, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR2_U ((*(volatile Ifx_CPU_CPR_U*)0xF885D014u)) /* lint --e(923)*/

/** D018, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR3_L ((*(volatile Ifx_CPU_CPR_L*)0xF885D018u)) /* lint --e(923)*/

/** D01C, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR3_U ((*(volatile Ifx_CPU_CPR_U*)0xF885D01Cu)) /* lint --e(923)*/

/** D020, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR4_L ((*(volatile Ifx_CPU_CPR_L*)0xF885D020u)) /* lint --e(923)*/

/** D024, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR4_U ((*(volatile Ifx_CPU_CPR_U*)0xF885D024u)) /* lint --e(923)*/

/** D028, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR5_L ((*(volatile Ifx_CPU_CPR_L*)0xF885D028u)) /* lint --e(923)*/

/** D02C, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR5_U ((*(volatile Ifx_CPU_CPR_U*)0xF885D02Cu)) /* lint --e(923)*/

/** D030, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR6_L ((*(volatile Ifx_CPU_CPR_L*)0xF885D030u)) /* lint --e(923)*/

/** D034, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR6_U ((*(volatile Ifx_CPU_CPR_U*)0xF885D034u)) /* lint --e(923)*/

/** D038, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR7_L ((*(volatile Ifx_CPU_CPR_L*)0xF885D038u)) /* lint --e(923)*/

/** D03C, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR7_U ((*(volatile Ifx_CPU_CPR_U*)0xF885D03Cu)) /* lint --e(923)*/

/** FE18, CPU Identification Register TC1.6P */
#define CPU2_CPU_ID ((*(volatile Ifx_CPU_CPU_ID*)0xF885FE18u)) /* lint --e(923)*/

/** E000, CPU Code Protection Execute Enable Register Set */
#define CPU2_CPXE0 ((*(volatile Ifx_CPU_CPXE*)0xF885E000u)) /* lint --e(923)*/

/** E004, CPU Code Protection Execute Enable Register Set */
#define CPU2_CPXE1 ((*(volatile Ifx_CPU_CPXE*)0xF885E004u)) /* lint --e(923)*/

/** E008, CPU Code Protection Execute Enable Register Set */
#define CPU2_CPXE2 ((*(volatile Ifx_CPU_CPXE*)0xF885E008u)) /* lint --e(923)*/

/** E00C, CPU Code Protection Execute Enable Register Set */
#define CPU2_CPXE3 ((*(volatile Ifx_CPU_CPXE*)0xF885E00Cu)) /* lint --e(923)*/

/** FD0C, Core Register Access Event */
#define CPU2_CREVT ((*(volatile Ifx_CPU_CREVT*)0xF885FD0Cu)) /* lint --e(923)*/

/** FF00, Data General Purpose Register */
#define CPU2_D0 ((*(volatile Ifx_CPU_D*)0xF885FF00u)) /* lint --e(923)*/

/** FF04, Data General Purpose Register */
#define CPU2_D1 ((*(volatile Ifx_CPU_D*)0xF885FF04u)) /* lint --e(923)*/

/** FF28, Data General Purpose Register */
#define CPU2_D10 ((*(volatile Ifx_CPU_D*)0xF885FF28u)) /* lint --e(923)*/

/** FF2C, Data General Purpose Register */
#define CPU2_D11 ((*(volatile Ifx_CPU_D*)0xF885FF2Cu)) /* lint --e(923)*/

/** FF30, Data General Purpose Register */
#define CPU2_D12 ((*(volatile Ifx_CPU_D*)0xF885FF30u)) /* lint --e(923)*/

/** FF34, Data General Purpose Register */
#define CPU2_D13 ((*(volatile Ifx_CPU_D*)0xF885FF34u)) /* lint --e(923)*/

/** FF38, Data General Purpose Register */
#define CPU2_D14 ((*(volatile Ifx_CPU_D*)0xF885FF38u)) /* lint --e(923)*/

/** FF3C, Data General Purpose Register */
#define CPU2_D15 ((*(volatile Ifx_CPU_D*)0xF885FF3Cu)) /* lint --e(923)*/

/** FF08, Data General Purpose Register */
#define CPU2_D2 ((*(volatile Ifx_CPU_D*)0xF885FF08u)) /* lint --e(923)*/

/** FF0C, Data General Purpose Register */
#define CPU2_D3 ((*(volatile Ifx_CPU_D*)0xF885FF0Cu)) /* lint --e(923)*/

/** FF10, Data General Purpose Register */
#define CPU2_D4 ((*(volatile Ifx_CPU_D*)0xF885FF10u)) /* lint --e(923)*/

/** FF14, Data General Purpose Register */
#define CPU2_D5 ((*(volatile Ifx_CPU_D*)0xF885FF14u)) /* lint --e(923)*/

/** FF18, Data General Purpose Register */
#define CPU2_D6 ((*(volatile Ifx_CPU_D*)0xF885FF18u)) /* lint --e(923)*/

/** FF1C, Data General Purpose Register */
#define CPU2_D7 ((*(volatile Ifx_CPU_D*)0xF885FF1Cu)) /* lint --e(923)*/

/** FF20, Data General Purpose Register */
#define CPU2_D8 ((*(volatile Ifx_CPU_D*)0xF885FF20u)) /* lint --e(923)*/

/** FF24, Data General Purpose Register */
#define CPU2_D9 ((*(volatile Ifx_CPU_D*)0xF885FF24u)) /* lint --e(923)*/

/** 9018, Data Asynchronous Trap Register */
#define CPU2_DATR ((*(volatile Ifx_CPU_DATR*)0xF8859018u)) /* lint --e(923)*/

/** FD00, Debug Status Register */
#define CPU2_DBGSR ((*(volatile Ifx_CPU_DBGSR*)0xF885FD00u)) /* lint --e(923)*/

/** FD48, Debug Trap Control Register */
#define CPU2_DBGTCR ((*(volatile Ifx_CPU_DBGTCR*)0xF885FD48u)) /* lint --e(923)*/

/** 9040, Data Memory Control Register */
#define CPU2_DCON0 ((*(volatile Ifx_CPU_DCON0*)0xF8859040u)) /* lint --e(923)*/

/** 9000, Data Control Register 2 */
#define CPU2_DCON2 ((*(volatile Ifx_CPU_DCON2*)0xF8859000u)) /* lint --e(923)*/

/** FD44, Debug Context Save Area Pointer */
#define CPU2_DCX ((*(volatile Ifx_CPU_DCX*)0xF885FD44u)) /* lint --e(923)*/

/** 901C, Data Error Address Register */
#define CPU2_DEADD ((*(volatile Ifx_CPU_DEADD*)0xF885901Cu)) /* lint --e(923)*/

/** 9020, Data Integrity Error Address Register */
#define CPU2_DIEAR ((*(volatile Ifx_CPU_DIEAR*)0xF8859020u)) /* lint --e(923)*/

/** 9024, Data Integrity Error Trap Register */
#define CPU2_DIETR ((*(volatile Ifx_CPU_DIETR*)0xF8859024u)) /* lint --e(923)*/

/** FD40, Debug Monitor Start Address */
#define CPU2_DMS ((*(volatile Ifx_CPU_DMS*)0xF885FD40u)) /* lint --e(923)*/

/** C000, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR0_L ((*(volatile Ifx_CPU_DPR_L*)0xF885C000u)) /* lint --e(923)*/

/** C004, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR0_U ((*(volatile Ifx_CPU_DPR_U*)0xF885C004u)) /* lint --e(923)*/

/** C050, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR10_L ((*(volatile Ifx_CPU_DPR_L*)0xF885C050u)) /* lint --e(923)*/

/** C054, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR10_U ((*(volatile Ifx_CPU_DPR_U*)0xF885C054u)) /* lint --e(923)*/

/** C058, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR11_L ((*(volatile Ifx_CPU_DPR_L*)0xF885C058u)) /* lint --e(923)*/

/** C05C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR11_U ((*(volatile Ifx_CPU_DPR_U*)0xF885C05Cu)) /* lint --e(923)*/

/** C060, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR12_L ((*(volatile Ifx_CPU_DPR_L*)0xF885C060u)) /* lint --e(923)*/

/** C064, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR12_U ((*(volatile Ifx_CPU_DPR_U*)0xF885C064u)) /* lint --e(923)*/

/** C068, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR13_L ((*(volatile Ifx_CPU_DPR_L*)0xF885C068u)) /* lint --e(923)*/

/** C06C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR13_U ((*(volatile Ifx_CPU_DPR_U*)0xF885C06Cu)) /* lint --e(923)*/

/** C070, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR14_L ((*(volatile Ifx_CPU_DPR_L*)0xF885C070u)) /* lint --e(923)*/

/** C074, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR14_U ((*(volatile Ifx_CPU_DPR_U*)0xF885C074u)) /* lint --e(923)*/

/** C078, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR15_L ((*(volatile Ifx_CPU_DPR_L*)0xF885C078u)) /* lint --e(923)*/

/** C07C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR15_U ((*(volatile Ifx_CPU_DPR_U*)0xF885C07Cu)) /* lint --e(923)*/

/** C008, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR1_L ((*(volatile Ifx_CPU_DPR_L*)0xF885C008u)) /* lint --e(923)*/

/** C00C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR1_U ((*(volatile Ifx_CPU_DPR_U*)0xF885C00Cu)) /* lint --e(923)*/

/** C010, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR2_L ((*(volatile Ifx_CPU_DPR_L*)0xF885C010u)) /* lint --e(923)*/

/** C014, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR2_U ((*(volatile Ifx_CPU_DPR_U*)0xF885C014u)) /* lint --e(923)*/

/** C018, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR3_L ((*(volatile Ifx_CPU_DPR_L*)0xF885C018u)) /* lint --e(923)*/

/** C01C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR3_U ((*(volatile Ifx_CPU_DPR_U*)0xF885C01Cu)) /* lint --e(923)*/

/** C020, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR4_L ((*(volatile Ifx_CPU_DPR_L*)0xF885C020u)) /* lint --e(923)*/

/** C024, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR4_U ((*(volatile Ifx_CPU_DPR_U*)0xF885C024u)) /* lint --e(923)*/

/** C028, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR5_L ((*(volatile Ifx_CPU_DPR_L*)0xF885C028u)) /* lint --e(923)*/

/** C02C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR5_U ((*(volatile Ifx_CPU_DPR_U*)0xF885C02Cu)) /* lint --e(923)*/

/** C030, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR6_L ((*(volatile Ifx_CPU_DPR_L*)0xF885C030u)) /* lint --e(923)*/

/** C034, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR6_U ((*(volatile Ifx_CPU_DPR_U*)0xF885C034u)) /* lint --e(923)*/

/** C038, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR7_L ((*(volatile Ifx_CPU_DPR_L*)0xF885C038u)) /* lint --e(923)*/

/** C03C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR7_U ((*(volatile Ifx_CPU_DPR_U*)0xF885C03Cu)) /* lint --e(923)*/

/** C040, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR8_L ((*(volatile Ifx_CPU_DPR_L*)0xF885C040u)) /* lint --e(923)*/

/** C044, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR8_U ((*(volatile Ifx_CPU_DPR_U*)0xF885C044u)) /* lint --e(923)*/

/** C048, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR9_L ((*(volatile Ifx_CPU_DPR_L*)0xF885C048u)) /* lint --e(923)*/

/** C04C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR9_U ((*(volatile Ifx_CPU_DPR_U*)0xF885C04Cu)) /* lint --e(923)*/

/** E010, CPU Data Protection Read Enable Register Set */
#define CPU2_DPRE0 ((*(volatile Ifx_CPU_DPRE*)0xF885E010u)) /* lint --e(923)*/

/** E014, CPU Data Protection Read Enable Register Set */
#define CPU2_DPRE1 ((*(volatile Ifx_CPU_DPRE*)0xF885E014u)) /* lint --e(923)*/

/** E018, CPU Data Protection Read Enable Register Set */
#define CPU2_DPRE2 ((*(volatile Ifx_CPU_DPRE*)0xF885E018u)) /* lint --e(923)*/

/** E01C, CPU Data Protection Read Enable Register Set */
#define CPU2_DPRE3 ((*(volatile Ifx_CPU_DPRE*)0xF885E01Cu)) /* lint --e(923)*/

/** E020, CPU Data Protection Write Enable Register Set */
#define CPU2_DPWE0 ((*(volatile Ifx_CPU_DPWE*)0xF885E020u)) /* lint --e(923)*/

/** E024, CPU Data Protection Write Enable Register Set */
#define CPU2_DPWE1 ((*(volatile Ifx_CPU_DPWE*)0xF885E024u)) /* lint --e(923)*/

/** E028, CPU Data Protection Write Enable Register Set */
#define CPU2_DPWE2 ((*(volatile Ifx_CPU_DPWE*)0xF885E028u)) /* lint --e(923)*/

/** E02C, CPU Data Protection Write Enable Register Set */
#define CPU2_DPWE3 ((*(volatile Ifx_CPU_DPWE*)0xF885E02Cu)) /* lint --e(923)*/

/** 9010, Data Synchronous Trap Register */
#define CPU2_DSTR ((*(volatile Ifx_CPU_DSTR*)0xF8859010u)) /* lint --e(923)*/

/** FD08, External Event Register */
#define CPU2_EXEVT ((*(volatile Ifx_CPU_EXEVT*)0xF885FD08u)) /* lint --e(923)*/

/** FE38, Free CSA List Head Pointer */
#define CPU2_FCX ((*(volatile Ifx_CPU_FCX*)0xF885FE38u)) /* lint --e(923)*/

/** A000, CPU Trap Control Register */
#define CPU2_FPU_TRAP_CON ((*(volatile Ifx_CPU_FPU_TRAP_CON*)0xF885A000u)) /* lint --e(923)*/

/** A008, CPU Trapping Instruction Opcode Register */
#define CPU2_FPU_TRAP_OPC ((*(volatile Ifx_CPU_FPU_TRAP_OPC*)0xF885A008u)) /* lint --e(923)*/

/** A004, CPU Trapping Instruction Program Counter Register */
#define CPU2_FPU_TRAP_PC ((*(volatile Ifx_CPU_FPU_TRAP_PC*)0xF885A004u)) /* lint --e(923)*/

/** A010, CPU Trapping Instruction Operand Register */
#define CPU2_FPU_TRAP_SRC1 ((*(volatile Ifx_CPU_FPU_TRAP_SRC1*)0xF885A010u)) /* lint --e(923)*/

/** A014, CPU Trapping Instruction Operand Register */
#define CPU2_FPU_TRAP_SRC2 ((*(volatile Ifx_CPU_FPU_TRAP_SRC2*)0xF885A014u)) /* lint --e(923)*/

/** A018, Trapping Instruction Operand Register */
#define CPU2_FPU_TRAP_SRC3 ((*(volatile Ifx_CPU_FPU_TRAP_SRC3*)0xF885A018u)) /* lint --e(923)*/

/** FC08, Instruction Count */
#define CPU2_ICNT ((*(volatile Ifx_CPU_ICNT*)0xF885FC08u)) /* lint --e(923)*/

/** FE2C, Interrupt Control Register */
#define CPU2_ICR ((*(volatile Ifx_CPU_ICR*)0xF885FE2Cu)) /* lint --e(923)*/

/** FE28, Interrupt Stack Pointer */
#define CPU2_ISP ((*(volatile Ifx_CPU_ISP*)0xF885FE28u)) /* lint --e(923)*/

/** FE3C, Free CSA List Limit Pointer */
#define CPU2_LCX ((*(volatile Ifx_CPU_LCX*)0xF885FE3Cu)) /* lint --e(923)*/

/** Alias for CPU2_MCNT0.
 *  Note that this definition is obsolete, use CPU2_MCNT0 instead.
 * FC0C, Multi-Count Register
 */
#define CPU2_M0CNT (CPU2_MCNT0)

/** Alias for CPU2_MCNT1.
 *  Note that this definition is obsolete, use CPU2_MCNT1 instead.
 * FC10, Multi-Count Register
 */
#define CPU2_M1CNT (CPU2_MCNT1)

/** Alias for CPU2_MCNT2.
 *  Note that this definition is obsolete, use CPU2_MCNT2 instead.
 * FC14, Multi-Count Register
 */
#define CPU2_M2CNT (CPU2_MCNT2)

/** FC0C, Multi-Count Register */
#define CPU2_MCNT0 ((*(volatile Ifx_CPU_MCNT*)0xF885FC0Cu)) /* lint --e(923)*/

/** FC10, Multi-Count Register */
#define CPU2_MCNT1 ((*(volatile Ifx_CPU_MCNT*)0xF885FC10u)) /* lint --e(923)*/

/** FC14, Multi-Count Register */
#define CPU2_MCNT2 ((*(volatile Ifx_CPU_MCNT*)0xF885FC14u)) /* lint --e(923)*/

/** 8004, Address Space Identifier Register */
#define CPU2_MMU_ASI ((*(volatile Ifx_CPU_MMU_ASI*)0xF8858004u)) /* lint --e(923)*/

/** 8000, MMU Control Register */
#define CPU2_MMU_CON ((*(volatile Ifx_CPU_MMU_CON*)0xF8858000u)) /* lint --e(923)*/

/** FE08, Program Counter */
#define CPU2_PC ((*(volatile Ifx_CPU_PC*)0xF885FE08u)) /* lint --e(923)*/

/** 920C, Program Control 0 */
#define CPU2_PCON0 ((*(volatile Ifx_CPU_PCON0*)0xF885920Cu)) /* lint --e(923)*/

/** 9204, Program Control 1 */
#define CPU2_PCON1 ((*(volatile Ifx_CPU_PCON1*)0xF8859204u)) /* lint --e(923)*/

/** 9208, Program Control 2 */
#define CPU2_PCON2 ((*(volatile Ifx_CPU_PCON2*)0xF8859208u)) /* lint --e(923)*/

/** FE00, Previous Context Information Register */
#define CPU2_PCXI ((*(volatile Ifx_CPU_PCXI*)0xF885FE00u)) /* lint --e(923)*/

/** 9210, Program Integrity Error Address Register */
#define CPU2_PIEAR ((*(volatile Ifx_CPU_PIEAR*)0xF8859210u)) /* lint --e(923)*/

/** 9214, Program Integrity Error Trap Register */
#define CPU2_PIETR ((*(volatile Ifx_CPU_PIETR*)0xF8859214u)) /* lint --e(923)*/

/** 801C, Physical Memory Attributes */
#define CPU2_PMA0 ((*(volatile Ifx_CPU_PMA0*)0xF885801Cu)) /* lint --e(923)*/

/** 9200, Program Synchronous Trap Register */
#define CPU2_PSTR ((*(volatile Ifx_CPU_PSTR*)0xF8859200u)) /* lint --e(923)*/

/** FE04, Program Status Word */
#define CPU2_PSW ((*(volatile Ifx_CPU_PSW*)0xF885FE04u)) /* lint --e(923)*/

/** 1030, SRI Error Generation Register */
#define CPU2_SEGEN ((*(volatile Ifx_CPU_SEGEN*)0xF8851030u)) /* lint --e(923)*/

/** 900C, SIST Mode Access Control Register */
#define CPU2_SMACON ((*(volatile Ifx_CPU_SMACON*)0xF885900Cu)) /* lint --e(923)*/

/** FD10, Software Debug Event */
#define CPU2_SWEVT ((*(volatile Ifx_CPU_SWEVT*)0xF885FD10u)) /* lint --e(923)*/

/** FE14, System Configuration Register */
#define CPU2_SYSCON ((*(volatile Ifx_CPU_SYSCON*)0xF885FE14u)) /* lint --e(923)*/

/** E400, CPU Temporal Protection System Control Register */
#define CPU2_TPS_CON ((*(volatile Ifx_CPU_TPS_CON*)0xF885E400u)) /* lint --e(923)*/

/** E404, CPU Temporal Protection System Timer Register */
#define CPU2_TPS_TIMER0 ((*(volatile Ifx_CPU_TPS_TIMER*)0xF885E404u)) /* lint --e(923)*/

/** E408, CPU Temporal Protection System Timer Register */
#define CPU2_TPS_TIMER1 ((*(volatile Ifx_CPU_TPS_TIMER*)0xF885E408u)) /* lint --e(923)*/

/** F004, Trigger Address */
#define CPU2_TR0_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF885F004u)) /* lint --e(923)*/

/** F000, Trigger Event */
#define CPU2_TR0_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF885F000u)) /* lint --e(923)*/

/** Alias for CPU2_TR0_ADR.
 *  Note that this definition is obsolete, use CPU2_TR0_ADR instead.
 * F004, Trigger Address
 */
#define CPU2_TR0ADR (CPU2_TR0_ADR)

/** Alias for CPU2_TR0_EVT.
 *  Note that this definition is obsolete, use CPU2_TR0_EVT instead.
 * F000, Trigger Event
 */
#define CPU2_TR0EVT (CPU2_TR0_EVT)

/** F00C, Trigger Address */
#define CPU2_TR1_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF885F00Cu)) /* lint --e(923)*/

/** F008, Trigger Event */
#define CPU2_TR1_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF885F008u)) /* lint --e(923)*/

/** Alias for CPU2_TR1_ADR.
 *  Note that this definition is obsolete, use CPU2_TR1_ADR instead.
 * F00C, Trigger Address
 */
#define CPU2_TR1ADR (CPU2_TR1_ADR)

/** Alias for CPU2_TR1_EVT.
 *  Note that this definition is obsolete, use CPU2_TR1_EVT instead.
 * F008, Trigger Event
 */
#define CPU2_TR1EVT (CPU2_TR1_EVT)

/** F014, Trigger Address */
#define CPU2_TR2_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF885F014u)) /* lint --e(923)*/

/** F010, Trigger Event */
#define CPU2_TR2_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF885F010u)) /* lint --e(923)*/

/** Alias for CPU2_TR2_ADR.
 *  Note that this definition is obsolete, use CPU2_TR2_ADR instead.
 * F014, Trigger Address
 */
#define CPU2_TR2ADR (CPU2_TR2_ADR)

/** Alias for CPU2_TR2_EVT.
 *  Note that this definition is obsolete, use CPU2_TR2_EVT instead.
 * F010, Trigger Event
 */
#define CPU2_TR2EVT (CPU2_TR2_EVT)

/** F01C, Trigger Address */
#define CPU2_TR3_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF885F01Cu)) /* lint --e(923)*/

/** F018, Trigger Event */
#define CPU2_TR3_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF885F018u)) /* lint --e(923)*/

/** Alias for CPU2_TR3_ADR.
 *  Note that this definition is obsolete, use CPU2_TR3_ADR instead.
 * F01C, Trigger Address
 */
#define CPU2_TR3ADR (CPU2_TR3_ADR)

/** Alias for CPU2_TR3_EVT.
 *  Note that this definition is obsolete, use CPU2_TR3_EVT instead.
 * F018, Trigger Event
 */
#define CPU2_TR3EVT (CPU2_TR3_EVT)

/** F024, Trigger Address */
#define CPU2_TR4_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF885F024u)) /* lint --e(923)*/

/** F020, Trigger Event */
#define CPU2_TR4_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF885F020u)) /* lint --e(923)*/

/** Alias for CPU2_TR4_ADR.
 *  Note that this definition is obsolete, use CPU2_TR4_ADR instead.
 * F024, Trigger Address
 */
#define CPU2_TR4ADR (CPU2_TR4_ADR)

/** Alias for CPU2_TR4_EVT.
 *  Note that this definition is obsolete, use CPU2_TR4_EVT instead.
 * F020, Trigger Event
 */
#define CPU2_TR4EVT (CPU2_TR4_EVT)

/** F02C, Trigger Address */
#define CPU2_TR5_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF885F02Cu)) /* lint --e(923)*/

/** F028, Trigger Event */
#define CPU2_TR5_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF885F028u)) /* lint --e(923)*/

/** Alias for CPU2_TR5_ADR.
 *  Note that this definition is obsolete, use CPU2_TR5_ADR instead.
 * F02C, Trigger Address
 */
#define CPU2_TR5ADR (CPU2_TR5_ADR)

/** Alias for CPU2_TR5_EVT.
 *  Note that this definition is obsolete, use CPU2_TR5_EVT instead.
 * F028, Trigger Event
 */
#define CPU2_TR5EVT (CPU2_TR5_EVT)

/** F034, Trigger Address */
#define CPU2_TR6_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF885F034u)) /* lint --e(923)*/

/** F030, Trigger Event */
#define CPU2_TR6_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF885F030u)) /* lint --e(923)*/

/** Alias for CPU2_TR6_ADR.
 *  Note that this definition is obsolete, use CPU2_TR6_ADR instead.
 * F034, Trigger Address
 */
#define CPU2_TR6ADR (CPU2_TR6_ADR)

/** Alias for CPU2_TR6_EVT.
 *  Note that this definition is obsolete, use CPU2_TR6_EVT instead.
 * F030, Trigger Event
 */
#define CPU2_TR6EVT (CPU2_TR6_EVT)

/** F03C, Trigger Address */
#define CPU2_TR7_ADR ((*(volatile Ifx_CPU_TR_ADR*)0xF885F03Cu)) /* lint --e(923)*/

/** F038, Trigger Event */
#define CPU2_TR7_EVT ((*(volatile Ifx_CPU_TR_EVT*)0xF885F038u)) /* lint --e(923)*/

/** Alias for CPU2_TR7_ADR.
 *  Note that this definition is obsolete, use CPU2_TR7_ADR instead.
 * F03C, Trigger Address
 */
#define CPU2_TR7ADR (CPU2_TR7_ADR)

/** Alias for CPU2_TR7_EVT.
 *  Note that this definition is obsolete, use CPU2_TR7_EVT instead.
 * F038, Trigger Event
 */
#define CPU2_TR7EVT (CPU2_TR7_EVT)

/** FD30, CPU Trigger Address x */
#define CPU2_TRIG_ACC ((*(volatile Ifx_CPU_TRIG_ACC*)0xF885FD30u)) /* lint --e(923)*/

/******************************************************************************/
/*                           Define (2-CPU2_SPROT)                            */
/******************************************************************************/

/** E100, CPU Safety Protection Register Access Enable Register A */
#define CPU2_SPROT_ACCENA ((*(volatile Ifx_CPU_SPROT_ACCENA*)0xF884E100u)) /* lint --e(923)*/

/** E104, CPU Safety Protection Region Access Enable Register B */
#define CPU2_SPROT_ACCENB ((*(volatile Ifx_CPU_SPROT_ACCENB*)0xF884E104u)) /* lint --e(923)*/

/** E008, CPU Safety Protection Region Access Enable Register A */
#define CPU2_SPROT_RGN0_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF884E008u)) /* lint --e(923)*/

/** E00C, CPU Safety Protection Region Access Enable Register B */
#define CPU2_SPROT_RGN0_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF884E00Cu)) /* lint --e(923)*/

/** E000, CPU Safety Protection Region Lower Address Register */
#define CPU2_SPROT_RGN0_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF884E000u)) /* lint --e(923)*/

/** E004, CPU Safety protection Region Upper Address Register */
#define CPU2_SPROT_RGN0_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF884E004u)) /* lint --e(923)*/

/** E018, CPU Safety Protection Region Access Enable Register A */
#define CPU2_SPROT_RGN1_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF884E018u)) /* lint --e(923)*/

/** E01C, CPU Safety Protection Region Access Enable Register B */
#define CPU2_SPROT_RGN1_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF884E01Cu)) /* lint --e(923)*/

/** E010, CPU Safety Protection Region Lower Address Register */
#define CPU2_SPROT_RGN1_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF884E010u)) /* lint --e(923)*/

/** E014, CPU Safety protection Region Upper Address Register */
#define CPU2_SPROT_RGN1_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF884E014u)) /* lint --e(923)*/

/** E028, CPU Safety Protection Region Access Enable Register A */
#define CPU2_SPROT_RGN2_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF884E028u)) /* lint --e(923)*/

/** E02C, CPU Safety Protection Region Access Enable Register B */
#define CPU2_SPROT_RGN2_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF884E02Cu)) /* lint --e(923)*/

/** E020, CPU Safety Protection Region Lower Address Register */
#define CPU2_SPROT_RGN2_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF884E020u)) /* lint --e(923)*/

/** E024, CPU Safety protection Region Upper Address Register */
#define CPU2_SPROT_RGN2_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF884E024u)) /* lint --e(923)*/

/** E038, CPU Safety Protection Region Access Enable Register A */
#define CPU2_SPROT_RGN3_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF884E038u)) /* lint --e(923)*/

/** E03C, CPU Safety Protection Region Access Enable Register B */
#define CPU2_SPROT_RGN3_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF884E03Cu)) /* lint --e(923)*/

/** E030, CPU Safety Protection Region Lower Address Register */
#define CPU2_SPROT_RGN3_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF884E030u)) /* lint --e(923)*/

/** E034, CPU Safety protection Region Upper Address Register */
#define CPU2_SPROT_RGN3_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF884E034u)) /* lint --e(923)*/

/** E048, CPU Safety Protection Region Access Enable Register A */
#define CPU2_SPROT_RGN4_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF884E048u)) /* lint --e(923)*/

/** E04C, CPU Safety Protection Region Access Enable Register B */
#define CPU2_SPROT_RGN4_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF884E04Cu)) /* lint --e(923)*/

/** E040, CPU Safety Protection Region Lower Address Register */
#define CPU2_SPROT_RGN4_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF884E040u)) /* lint --e(923)*/

/** E044, CPU Safety protection Region Upper Address Register */
#define CPU2_SPROT_RGN4_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF884E044u)) /* lint --e(923)*/

/** E058, CPU Safety Protection Region Access Enable Register A */
#define CPU2_SPROT_RGN5_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF884E058u)) /* lint --e(923)*/

/** E05C, CPU Safety Protection Region Access Enable Register B */
#define CPU2_SPROT_RGN5_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF884E05Cu)) /* lint --e(923)*/

/** E050, CPU Safety Protection Region Lower Address Register */
#define CPU2_SPROT_RGN5_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF884E050u)) /* lint --e(923)*/

/** E054, CPU Safety protection Region Upper Address Register */
#define CPU2_SPROT_RGN5_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF884E054u)) /* lint --e(923)*/

/** E068, CPU Safety Protection Region Access Enable Register A */
#define CPU2_SPROT_RGN6_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF884E068u)) /* lint --e(923)*/

/** E06C, CPU Safety Protection Region Access Enable Register B */
#define CPU2_SPROT_RGN6_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF884E06Cu)) /* lint --e(923)*/

/** E060, CPU Safety Protection Region Lower Address Register */
#define CPU2_SPROT_RGN6_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF884E060u)) /* lint --e(923)*/

/** E064, CPU Safety protection Region Upper Address Register */
#define CPU2_SPROT_RGN6_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF884E064u)) /* lint --e(923)*/

/** E078, CPU Safety Protection Region Access Enable Register A */
#define CPU2_SPROT_RGN7_ACCENA ((*(volatile Ifx_CPU_SPROT_RGN_ACCENA*)0xF884E078u)) /* lint --e(923)*/

/** E07C, CPU Safety Protection Region Access Enable Register B */
#define CPU2_SPROT_RGN7_ACCENB ((*(volatile Ifx_CPU_SPROT_RGN_ACCENB*)0xF884E07Cu)) /* lint --e(923)*/

/** E070, CPU Safety Protection Region Lower Address Register */
#define CPU2_SPROT_RGN7_LA ((*(volatile Ifx_CPU_SPROT_RGN_LA*)0xF884E070u)) /* lint --e(923)*/

/** E074, CPU Safety protection Region Upper Address Register */
#define CPU2_SPROT_RGN7_UA ((*(volatile Ifx_CPU_SPROT_RGN_UA*)0xF884E074u)) /* lint --e(923)*/

/******************************************************************************/
/*                            Define (2-CPU_CSFR)                             */
/******************************************************************************/

/** FF80, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_CSFR_A0 (0xFF80u) /* lint --e(923)*/

/** FF84, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_CSFR_A1 (0xFF84u) /* lint --e(923)*/

/** FFA8, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_CSFR_A10 (0xFFA8u) /* lint --e(923)*/

/** FFAC, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_CSFR_A11 (0xFFACu) /* lint --e(923)*/

/** FFB0, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_CSFR_A12 (0xFFB0u) /* lint --e(923)*/

/** FFB4, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_CSFR_A13 (0xFFB4u) /* lint --e(923)*/

/** FFB8, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_CSFR_A14 (0xFFB8u) /* lint --e(923)*/

/** FFBC, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_CSFR_A15 (0xFFBCu) /* lint --e(923)*/

/** FF88, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_CSFR_A2 (0xFF88u) /* lint --e(923)*/

/** FF8C, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_CSFR_A3 (0xFF8Cu) /* lint --e(923)*/

/** FF90, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_CSFR_A4 (0xFF90u) /* lint --e(923)*/

/** FF94, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_CSFR_A5 (0xFF94u) /* lint --e(923)*/

/** FF98, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_CSFR_A6 (0xFF98u) /* lint --e(923)*/

/** FF9C, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_CSFR_A7 (0xFF9Cu) /* lint --e(923)*/

/** FFA0, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_CSFR_A8 (0xFFA0u) /* lint --e(923)*/

/** FFA4, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_CSFR_A9 (0xFFA4u) /* lint --e(923)*/

/** FE20, , type: Ifx_CPU_BIV, Base Interrupt Vector Table Pointer */
#define CPU_CSFR_BIV (0xFE20u) /* lint --e(923)*/

/** FE24, , type: Ifx_CPU_BTV, Base Trap Vector Table Pointer */
#define CPU_CSFR_BTV (0xFE24u) /* lint --e(923)*/

/** FC04, , type: Ifx_CPU_CCNT, CPU Clock Cycle Count */
#define CPU_CSFR_CCNT (0xFC04u) /* lint --e(923)*/

/** FC00, , type: Ifx_CPU_CCTRL, Counter Control */
#define CPU_CSFR_CCTRL (0xFC00u) /* lint --e(923)*/

/** 9400, , type: Ifx_CPU_COMPAT, Compatibility Control Register */
#define CPU_CSFR_COMPAT (0x9400u) /* lint --e(923)*/

/** FE1C, , type: Ifx_CPU_CORE_ID, CPU Core Identification Register */
#define CPU_CSFR_CORE_ID (0xFE1Cu) /* lint --e(923)*/

/** D000, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound Register */
#define CPU_CSFR_CPR0_L (0xD000u) /* lint --e(923)*/

/** D004, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound Register */
#define CPU_CSFR_CPR0_U (0xD004u) /* lint --e(923)*/

/** D008, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound Register */
#define CPU_CSFR_CPR1_L (0xD008u) /* lint --e(923)*/

/** D00C, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound Register */
#define CPU_CSFR_CPR1_U (0xD00Cu) /* lint --e(923)*/

/** D010, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound Register */
#define CPU_CSFR_CPR2_L (0xD010u) /* lint --e(923)*/

/** D014, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound Register */
#define CPU_CSFR_CPR2_U (0xD014u) /* lint --e(923)*/

/** D018, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound Register */
#define CPU_CSFR_CPR3_L (0xD018u) /* lint --e(923)*/

/** D01C, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound Register */
#define CPU_CSFR_CPR3_U (0xD01Cu) /* lint --e(923)*/

/** D020, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound Register */
#define CPU_CSFR_CPR4_L (0xD020u) /* lint --e(923)*/

/** D024, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound Register */
#define CPU_CSFR_CPR4_U (0xD024u) /* lint --e(923)*/

/** D028, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound Register */
#define CPU_CSFR_CPR5_L (0xD028u) /* lint --e(923)*/

/** D02C, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound Register */
#define CPU_CSFR_CPR5_U (0xD02Cu) /* lint --e(923)*/

/** D030, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound Register */
#define CPU_CSFR_CPR6_L (0xD030u) /* lint --e(923)*/

/** D034, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound Register */
#define CPU_CSFR_CPR6_U (0xD034u) /* lint --e(923)*/

/** D038, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound Register */
#define CPU_CSFR_CPR7_L (0xD038u) /* lint --e(923)*/

/** D03C, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound Register */
#define CPU_CSFR_CPR7_U (0xD03Cu) /* lint --e(923)*/

/** FE18, , type: Ifx_CPU_CPU_ID, CPU Identification Register TC1.6P */
#define CPU_CSFR_CPU_ID (0xFE18u) /* lint --e(923)*/

/** E000, , type: Ifx_CPU_CPXE, CPU Code Protection Execute Enable Register Set */
#define CPU_CSFR_CPXE0 (0xE000u) /* lint --e(923)*/

/** E004, , type: Ifx_CPU_CPXE, CPU Code Protection Execute Enable Register Set */
#define CPU_CSFR_CPXE1 (0xE004u) /* lint --e(923)*/

/** E008, , type: Ifx_CPU_CPXE, CPU Code Protection Execute Enable Register Set */
#define CPU_CSFR_CPXE2 (0xE008u) /* lint --e(923)*/

/** E00C, , type: Ifx_CPU_CPXE, CPU Code Protection Execute Enable Register Set */
#define CPU_CSFR_CPXE3 (0xE00Cu) /* lint --e(923)*/

/** FD0C, , type: Ifx_CPU_CREVT, Core Register Access Event */
#define CPU_CSFR_CREVT (0xFD0Cu) /* lint --e(923)*/

/** FF00, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_CSFR_D0 (0xFF00u) /* lint --e(923)*/

/** FF04, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_CSFR_D1 (0xFF04u) /* lint --e(923)*/

/** FF28, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_CSFR_D10 (0xFF28u) /* lint --e(923)*/

/** FF2C, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_CSFR_D11 (0xFF2Cu) /* lint --e(923)*/

/** FF30, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_CSFR_D12 (0xFF30u) /* lint --e(923)*/

/** FF34, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_CSFR_D13 (0xFF34u) /* lint --e(923)*/

/** FF38, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_CSFR_D14 (0xFF38u) /* lint --e(923)*/

/** FF3C, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_CSFR_D15 (0xFF3Cu) /* lint --e(923)*/

/** FF08, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_CSFR_D2 (0xFF08u) /* lint --e(923)*/

/** FF0C, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_CSFR_D3 (0xFF0Cu) /* lint --e(923)*/

/** FF10, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_CSFR_D4 (0xFF10u) /* lint --e(923)*/

/** FF14, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_CSFR_D5 (0xFF14u) /* lint --e(923)*/

/** FF18, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_CSFR_D6 (0xFF18u) /* lint --e(923)*/

/** FF1C, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_CSFR_D7 (0xFF1Cu) /* lint --e(923)*/

/** FF20, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_CSFR_D8 (0xFF20u) /* lint --e(923)*/

/** FF24, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_CSFR_D9 (0xFF24u) /* lint --e(923)*/

/** 9018, , type: Ifx_CPU_DATR, Data Asynchronous Trap Register */
#define CPU_CSFR_DATR (0x9018u) /* lint --e(923)*/

/** FD00, , type: Ifx_CPU_DBGSR, Debug Status Register */
#define CPU_CSFR_DBGSR (0xFD00u) /* lint --e(923)*/

/** FD48, , type: Ifx_CPU_DBGTCR, Debug Trap Control Register */
#define CPU_CSFR_DBGTCR (0xFD48u) /* lint --e(923)*/

/** 9040, , type: Ifx_CPU_DCON0, Data Memory Control Register */
#define CPU_CSFR_DCON0 (0x9040u) /* lint --e(923)*/

/** 9000, , type: Ifx_CPU_DCON2, Data Control Register 2 */
#define CPU_CSFR_DCON2 (0x9000u) /* lint --e(923)*/

/** FD44, , type: Ifx_CPU_DCX, Debug Context Save Area Pointer */
#define CPU_CSFR_DCX (0xFD44u) /* lint --e(923)*/

/** 901C, , type: Ifx_CPU_DEADD, Data Error Address Register */
#define CPU_CSFR_DEADD (0x901Cu) /* lint --e(923)*/

/** 9020, , type: Ifx_CPU_DIEAR, Data Integrity Error Address Register */
#define CPU_CSFR_DIEAR (0x9020u) /* lint --e(923)*/

/** 9024, , type: Ifx_CPU_DIETR, Data Integrity Error Trap Register */
#define CPU_CSFR_DIETR (0x9024u) /* lint --e(923)*/

/** FD40, , type: Ifx_CPU_DMS, Debug Monitor Start Address */
#define CPU_CSFR_DMS (0xFD40u) /* lint --e(923)*/

/** C000, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound Register */
#define CPU_CSFR_DPR0_L (0xC000u) /* lint --e(923)*/

/** C004, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound Register */
#define CPU_CSFR_DPR0_U (0xC004u) /* lint --e(923)*/

/** C050, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound Register */
#define CPU_CSFR_DPR10_L (0xC050u) /* lint --e(923)*/

/** C054, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound Register */
#define CPU_CSFR_DPR10_U (0xC054u) /* lint --e(923)*/

/** C058, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound Register */
#define CPU_CSFR_DPR11_L (0xC058u) /* lint --e(923)*/

/** C05C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound Register */
#define CPU_CSFR_DPR11_U (0xC05Cu) /* lint --e(923)*/

/** C060, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound Register */
#define CPU_CSFR_DPR12_L (0xC060u) /* lint --e(923)*/

/** C064, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound Register */
#define CPU_CSFR_DPR12_U (0xC064u) /* lint --e(923)*/

/** C068, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound Register */
#define CPU_CSFR_DPR13_L (0xC068u) /* lint --e(923)*/

/** C06C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound Register */
#define CPU_CSFR_DPR13_U (0xC06Cu) /* lint --e(923)*/

/** C070, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound Register */
#define CPU_CSFR_DPR14_L (0xC070u) /* lint --e(923)*/

/** C074, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound Register */
#define CPU_CSFR_DPR14_U (0xC074u) /* lint --e(923)*/

/** C078, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound Register */
#define CPU_CSFR_DPR15_L (0xC078u) /* lint --e(923)*/

/** C07C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound Register */
#define CPU_CSFR_DPR15_U (0xC07Cu) /* lint --e(923)*/

/** C008, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound Register */
#define CPU_CSFR_DPR1_L (0xC008u) /* lint --e(923)*/

/** C00C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound Register */
#define CPU_CSFR_DPR1_U (0xC00Cu) /* lint --e(923)*/

/** C010, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound Register */
#define CPU_CSFR_DPR2_L (0xC010u) /* lint --e(923)*/

/** C014, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound Register */
#define CPU_CSFR_DPR2_U (0xC014u) /* lint --e(923)*/

/** C018, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound Register */
#define CPU_CSFR_DPR3_L (0xC018u) /* lint --e(923)*/

/** C01C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound Register */
#define CPU_CSFR_DPR3_U (0xC01Cu) /* lint --e(923)*/

/** C020, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound Register */
#define CPU_CSFR_DPR4_L (0xC020u) /* lint --e(923)*/

/** C024, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound Register */
#define CPU_CSFR_DPR4_U (0xC024u) /* lint --e(923)*/

/** C028, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound Register */
#define CPU_CSFR_DPR5_L (0xC028u) /* lint --e(923)*/

/** C02C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound Register */
#define CPU_CSFR_DPR5_U (0xC02Cu) /* lint --e(923)*/

/** C030, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound Register */
#define CPU_CSFR_DPR6_L (0xC030u) /* lint --e(923)*/

/** C034, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound Register */
#define CPU_CSFR_DPR6_U (0xC034u) /* lint --e(923)*/

/** C038, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound Register */
#define CPU_CSFR_DPR7_L (0xC038u) /* lint --e(923)*/

/** C03C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound Register */
#define CPU_CSFR_DPR7_U (0xC03Cu) /* lint --e(923)*/

/** C040, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound Register */
#define CPU_CSFR_DPR8_L (0xC040u) /* lint --e(923)*/

/** C044, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound Register */
#define CPU_CSFR_DPR8_U (0xC044u) /* lint --e(923)*/

/** C048, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound Register */
#define CPU_CSFR_DPR9_L (0xC048u) /* lint --e(923)*/

/** C04C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound Register */
#define CPU_CSFR_DPR9_U (0xC04Cu) /* lint --e(923)*/

/** E010, , type: Ifx_CPU_DPRE, CPU Data Protection Read Enable Register Set */
#define CPU_CSFR_DPRE0 (0xE010u) /* lint --e(923)*/

/** E014, , type: Ifx_CPU_DPRE, CPU Data Protection Read Enable Register Set */
#define CPU_CSFR_DPRE1 (0xE014u) /* lint --e(923)*/

/** E018, , type: Ifx_CPU_DPRE, CPU Data Protection Read Enable Register Set */
#define CPU_CSFR_DPRE2 (0xE018u) /* lint --e(923)*/

/** E01C, , type: Ifx_CPU_DPRE, CPU Data Protection Read Enable Register Set */
#define CPU_CSFR_DPRE3 (0xE01Cu) /* lint --e(923)*/

/** E020, , type: Ifx_CPU_DPWE, CPU Data Protection Write Enable Register Set */
#define CPU_CSFR_DPWE0 (0xE020u) /* lint --e(923)*/

/** E024, , type: Ifx_CPU_DPWE, CPU Data Protection Write Enable Register Set */
#define CPU_CSFR_DPWE1 (0xE024u) /* lint --e(923)*/

/** E028, , type: Ifx_CPU_DPWE, CPU Data Protection Write Enable Register Set */
#define CPU_CSFR_DPWE2 (0xE028u) /* lint --e(923)*/

/** E02C, , type: Ifx_CPU_DPWE, CPU Data Protection Write Enable Register Set */
#define CPU_CSFR_DPWE3 (0xE02Cu) /* lint --e(923)*/

/** 9010, , type: Ifx_CPU_DSTR, Data Synchronous Trap Register */
#define CPU_CSFR_DSTR (0x9010u) /* lint --e(923)*/

/** FD08, , type: Ifx_CPU_EXEVT, External Event Register */
#define CPU_CSFR_EXEVT (0xFD08u) /* lint --e(923)*/

/** FE38, , type: Ifx_CPU_FCX, Free CSA List Head Pointer */
#define CPU_CSFR_FCX (0xFE38u) /* lint --e(923)*/

/** A000, , type: Ifx_CPU_FPU_TRAP_CON, CPU Trap Control Register */
#define CPU_CSFR_FPU_TRAP_CON (0xA000u) /* lint --e(923)*/

/** A008, , type: Ifx_CPU_FPU_TRAP_OPC, CPU Trapping Instruction Opcode Register */
#define CPU_CSFR_FPU_TRAP_OPC (0xA008u) /* lint --e(923)*/

/** A004, , type: Ifx_CPU_FPU_TRAP_PC, CPU Trapping Instruction Program Counter
 * Register */
#define CPU_CSFR_FPU_TRAP_PC (0xA004u) /* lint --e(923)*/

/** A010, , type: Ifx_CPU_FPU_TRAP_SRC1, CPU Trapping Instruction Operand
 * Register */
#define CPU_CSFR_FPU_TRAP_SRC1 (0xA010u) /* lint --e(923)*/

/** A014, , type: Ifx_CPU_FPU_TRAP_SRC2, CPU Trapping Instruction Operand
 * Register */
#define CPU_CSFR_FPU_TRAP_SRC2 (0xA014u) /* lint --e(923)*/

/** A018, , type: Ifx_CPU_FPU_TRAP_SRC3, Trapping Instruction Operand Register */
#define CPU_CSFR_FPU_TRAP_SRC3 (0xA018u) /* lint --e(923)*/

/** FC08, , type: Ifx_CPU_ICNT, Instruction Count */
#define CPU_CSFR_ICNT (0xFC08u) /* lint --e(923)*/

/** FE2C, , type: Ifx_CPU_ICR, Interrupt Control Register */
#define CPU_CSFR_ICR (0xFE2Cu) /* lint --e(923)*/

/** FE28, , type: Ifx_CPU_ISP, Interrupt Stack Pointer */
#define CPU_CSFR_ISP (0xFE28u) /* lint --e(923)*/

/** FE3C, , type: Ifx_CPU_LCX, Free CSA List Limit Pointer */
#define CPU_CSFR_LCX (0xFE3Cu) /* lint --e(923)*/

/** Alias for CPU_CSFR_MCNT0.
 *  Note that this definition is obsolete, use CPU_CSFR_MCNT0 instead.
 * FC0C, type: Ifx_CPU_MCNT, Multi-Count Register
 */
#define CPU_CSFR_M0CNT (CPU_CSFR_MCNT0)

/** Alias for CPU_CSFR_MCNT1.
 *  Note that this definition is obsolete, use CPU_CSFR_MCNT1 instead.
 * FC10, type: Ifx_CPU_MCNT, Multi-Count Register
 */
#define CPU_CSFR_M1CNT (CPU_CSFR_MCNT1)

/** Alias for CPU_CSFR_MCNT2.
 *  Note that this definition is obsolete, use CPU_CSFR_MCNT2 instead.
 * FC14, type: Ifx_CPU_MCNT, Multi-Count Register
 */
#define CPU_CSFR_M2CNT (CPU_CSFR_MCNT2)

/** FC0C, , type: Ifx_CPU_MCNT, Multi-Count Register */
#define CPU_CSFR_MCNT0 (0xFC0Cu) /* lint --e(923)*/

/** FC10, , type: Ifx_CPU_MCNT, Multi-Count Register */
#define CPU_CSFR_MCNT1 (0xFC10u) /* lint --e(923)*/

/** FC14, , type: Ifx_CPU_MCNT, Multi-Count Register */
#define CPU_CSFR_MCNT2 (0xFC14u) /* lint --e(923)*/

/** 8004, , type: Ifx_CPU_MMU_ASI, Address Space Identifier Register */
#define CPU_CSFR_MMU_ASI (0x8004u) /* lint --e(923)*/

/** 8000, , type: Ifx_CPU_MMU_CON, MMU Control Register */
#define CPU_CSFR_MMU_CON (0x8000u) /* lint --e(923)*/

/** FE08, , type: Ifx_CPU_PC, Program Counter */
#define CPU_CSFR_PC (0xFE08u) /* lint --e(923)*/

/** 920C, , type: Ifx_CPU_PCON0, Program Control 0 */
#define CPU_CSFR_PCON0 (0x920Cu) /* lint --e(923)*/

/** 9204, , type: Ifx_CPU_PCON1, Program Control 1 */
#define CPU_CSFR_PCON1 (0x9204u) /* lint --e(923)*/

/** 9208, , type: Ifx_CPU_PCON2, Program Control 2 */
#define CPU_CSFR_PCON2 (0x9208u) /* lint --e(923)*/

/** FE00, , type: Ifx_CPU_PCXI, Previous Context Information Register */
#define CPU_CSFR_PCXI (0xFE00u) /* lint --e(923)*/

/** 9210, , type: Ifx_CPU_PIEAR, Program Integrity Error Address Register */
#define CPU_CSFR_PIEAR (0x9210u) /* lint --e(923)*/

/** 9214, , type: Ifx_CPU_PIETR, Program Integrity Error Trap Register */
#define CPU_CSFR_PIETR (0x9214u) /* lint --e(923)*/

/** 801C, , type: Ifx_CPU_PMA0, Physical Memory Attributes */
#define CPU_CSFR_PMA0 (0x801Cu) /* lint --e(923)*/

/** 9200, , type: Ifx_CPU_PSTR, Program Synchronous Trap Register */
#define CPU_CSFR_PSTR (0x9200u) /* lint --e(923)*/

/** FE04, , type: Ifx_CPU_PSW, Program Status Word */
#define CPU_CSFR_PSW (0xFE04u) /* lint --e(923)*/

/** 1030, , type: Ifx_CPU_SEGEN, SRI Error Generation Register */
#define CPU_CSFR_SEGEN (0x1030u) /* lint --e(923)*/

/** 900C, , type: Ifx_CPU_SMACON, SIST Mode Access Control Register */
#define CPU_CSFR_SMACON (0x900Cu) /* lint --e(923)*/

/** FD10, , type: Ifx_CPU_SWEVT, Software Debug Event */
#define CPU_CSFR_SWEVT (0xFD10u) /* lint --e(923)*/

/** FE14, , type: Ifx_CPU_SYSCON, System Configuration Register */
#define CPU_CSFR_SYSCON (0xFE14u) /* lint --e(923)*/

/** E400, , type: Ifx_CPU_TPS_CON, CPU Temporal Protection System Control
 * Register */
#define CPU_CSFR_TPS_CON (0xE400u) /* lint --e(923)*/

/** E404, , type: Ifx_CPU_TPS_TIMER, CPU Temporal Protection System Timer
 * Register */
#define CPU_CSFR_TPS_TIMER0 (0xE404u) /* lint --e(923)*/

/** E408, , type: Ifx_CPU_TPS_TIMER, CPU Temporal Protection System Timer
 * Register */
#define CPU_CSFR_TPS_TIMER1 (0xE408u) /* lint --e(923)*/

/** F004, , type: Ifx_CPU_TR_ADR, Trigger Address */
#define CPU_CSFR_TR0_ADR (0xF004u) /* lint --e(923)*/

/** F000, , type: Ifx_CPU_TR_EVT, Trigger Event */
#define CPU_CSFR_TR0_EVT (0xF000u) /* lint --e(923)*/

/** Alias for CPU_CSFR_TR0_ADR.
 *  Note that this definition is obsolete, use CPU_CSFR_TR0_ADR instead.
 * F004, type: Ifx_CPU_TR_ADR, Trigger Address
 */
#define CPU_CSFR_TR0ADR (CPU_CSFR_TR0_ADR)

/** Alias for CPU_CSFR_TR0_EVT.
 *  Note that this definition is obsolete, use CPU_CSFR_TR0_EVT instead.
 * F000, type: Ifx_CPU_TR_EVT, Trigger Event
 */
#define CPU_CSFR_TR0EVT (CPU_CSFR_TR0_EVT)

/** F00C, , type: Ifx_CPU_TR_ADR, Trigger Address */
#define CPU_CSFR_TR1_ADR (0xF00Cu) /* lint --e(923)*/

/** F008, , type: Ifx_CPU_TR_EVT, Trigger Event */
#define CPU_CSFR_TR1_EVT (0xF008u) /* lint --e(923)*/

/** Alias for CPU_CSFR_TR1_ADR.
 *  Note that this definition is obsolete, use CPU_CSFR_TR1_ADR instead.
 * F00C, type: Ifx_CPU_TR_ADR, Trigger Address
 */
#define CPU_CSFR_TR1ADR (CPU_CSFR_TR1_ADR)

/** Alias for CPU_CSFR_TR1_EVT.
 *  Note that this definition is obsolete, use CPU_CSFR_TR1_EVT instead.
 * F008, type: Ifx_CPU_TR_EVT, Trigger Event
 */
#define CPU_CSFR_TR1EVT (CPU_CSFR_TR1_EVT)

/** F014, , type: Ifx_CPU_TR_ADR, Trigger Address */
#define CPU_CSFR_TR2_ADR (0xF014u) /* lint --e(923)*/

/** F010, , type: Ifx_CPU_TR_EVT, Trigger Event */
#define CPU_CSFR_TR2_EVT (0xF010u) /* lint --e(923)*/

/** Alias for CPU_CSFR_TR2_ADR.
 *  Note that this definition is obsolete, use CPU_CSFR_TR2_ADR instead.
 * F014, type: Ifx_CPU_TR_ADR, Trigger Address
 */
#define CPU_CSFR_TR2ADR (CPU_CSFR_TR2_ADR)

/** Alias for CPU_CSFR_TR2_EVT.
 *  Note that this definition is obsolete, use CPU_CSFR_TR2_EVT instead.
 * F010, type: Ifx_CPU_TR_EVT, Trigger Event
 */
#define CPU_CSFR_TR2EVT (CPU_CSFR_TR2_EVT)

/** F01C, , type: Ifx_CPU_TR_ADR, Trigger Address */
#define CPU_CSFR_TR3_ADR (0xF01Cu) /* lint --e(923)*/

/** F018, , type: Ifx_CPU_TR_EVT, Trigger Event */
#define CPU_CSFR_TR3_EVT (0xF018u) /* lint --e(923)*/

/** Alias for CPU_CSFR_TR3_ADR.
 *  Note that this definition is obsolete, use CPU_CSFR_TR3_ADR instead.
 * F01C, type: Ifx_CPU_TR_ADR, Trigger Address
 */
#define CPU_CSFR_TR3ADR (CPU_CSFR_TR3_ADR)

/** Alias for CPU_CSFR_TR3_EVT.
 *  Note that this definition is obsolete, use CPU_CSFR_TR3_EVT instead.
 * F018, type: Ifx_CPU_TR_EVT, Trigger Event
 */
#define CPU_CSFR_TR3EVT (CPU_CSFR_TR3_EVT)

/** F024, , type: Ifx_CPU_TR_ADR, Trigger Address */
#define CPU_CSFR_TR4_ADR (0xF024u) /* lint --e(923)*/

/** F020, , type: Ifx_CPU_TR_EVT, Trigger Event */
#define CPU_CSFR_TR4_EVT (0xF020u) /* lint --e(923)*/

/** Alias for CPU_CSFR_TR4_ADR.
 *  Note that this definition is obsolete, use CPU_CSFR_TR4_ADR instead.
 * F024, type: Ifx_CPU_TR_ADR, Trigger Address
 */
#define CPU_CSFR_TR4ADR (CPU_CSFR_TR4_ADR)

/** Alias for CPU_CSFR_TR4_EVT.
 *  Note that this definition is obsolete, use CPU_CSFR_TR4_EVT instead.
 * F020, type: Ifx_CPU_TR_EVT, Trigger Event
 */
#define CPU_CSFR_TR4EVT (CPU_CSFR_TR4_EVT)

/** F02C, , type: Ifx_CPU_TR_ADR, Trigger Address */
#define CPU_CSFR_TR5_ADR (0xF02Cu) /* lint --e(923)*/

/** F028, , type: Ifx_CPU_TR_EVT, Trigger Event */
#define CPU_CSFR_TR5_EVT (0xF028u) /* lint --e(923)*/

/** Alias for CPU_CSFR_TR5_ADR.
 *  Note that this definition is obsolete, use CPU_CSFR_TR5_ADR instead.
 * F02C, type: Ifx_CPU_TR_ADR, Trigger Address
 */
#define CPU_CSFR_TR5ADR (CPU_CSFR_TR5_ADR)

/** Alias for CPU_CSFR_TR5_EVT.
 *  Note that this definition is obsolete, use CPU_CSFR_TR5_EVT instead.
 * F028, type: Ifx_CPU_TR_EVT, Trigger Event
 */
#define CPU_CSFR_TR5EVT (CPU_CSFR_TR5_EVT)

/** F034, , type: Ifx_CPU_TR_ADR, Trigger Address */
#define CPU_CSFR_TR6_ADR (0xF034u) /* lint --e(923)*/

/** F030, , type: Ifx_CPU_TR_EVT, Trigger Event */
#define CPU_CSFR_TR6_EVT (0xF030u) /* lint --e(923)*/

/** Alias for CPU_CSFR_TR6_ADR.
 *  Note that this definition is obsolete, use CPU_CSFR_TR6_ADR instead.
 * F034, type: Ifx_CPU_TR_ADR, Trigger Address
 */
#define CPU_CSFR_TR6ADR (CPU_CSFR_TR6_ADR)

/** Alias for CPU_CSFR_TR6_EVT.
 *  Note that this definition is obsolete, use CPU_CSFR_TR6_EVT instead.
 * F030, type: Ifx_CPU_TR_EVT, Trigger Event
 */
#define CPU_CSFR_TR6EVT (CPU_CSFR_TR6_EVT)

/** F03C, , type: Ifx_CPU_TR_ADR, Trigger Address */
#define CPU_CSFR_TR7_ADR (0xF03Cu) /* lint --e(923)*/

/** F038, , type: Ifx_CPU_TR_EVT, Trigger Event */
#define CPU_CSFR_TR7_EVT (0xF038u) /* lint --e(923)*/

/** Alias for CPU_CSFR_TR7_ADR.
 *  Note that this definition is obsolete, use CPU_CSFR_TR7_ADR instead.
 * F03C, type: Ifx_CPU_TR_ADR, Trigger Address
 */
#define CPU_CSFR_TR7ADR (CPU_CSFR_TR7_ADR)

/** Alias for CPU_CSFR_TR7_EVT.
 *  Note that this definition is obsolete, use CPU_CSFR_TR7_EVT instead.
 * F038, type: Ifx_CPU_TR_EVT, Trigger Event
 */
#define CPU_CSFR_TR7EVT (CPU_CSFR_TR7_EVT)

/** FD30, , type: Ifx_CPU_TRIG_ACC, CPU Trigger Address x */
#define CPU_CSFR_TRIG_ACC (0xFD30u) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXCPU_REG_H */

