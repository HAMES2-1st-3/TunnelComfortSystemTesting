/**
 * \file IfxMc_reg.h
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
#ifndef IFXMC_REG_H
#define IFXMC_REG_H
/******************************************************************************/
#include "Mc/IfxMc_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** MC object */
#define MODULE_MC0 ((*(Ifx_MC*)0xF0061000u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC1 ((*(Ifx_MC*)0xF0061100u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC10 ((*(Ifx_MC*)0xF0061A00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC11 ((*(Ifx_MC*)0xF0061B00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC12 ((*(Ifx_MC*)0xF0061C00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC13 ((*(Ifx_MC*)0xF0061D00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC14 ((*(Ifx_MC*)0xF0061E00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC15 ((*(Ifx_MC*)0xF0061F00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC16 ((*(Ifx_MC*)0xF0062000u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC17 ((*(Ifx_MC*)0xF0062100u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC18 ((*(Ifx_MC*)0xF0062200u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC19 ((*(Ifx_MC*)0xF0062300u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC2 ((*(Ifx_MC*)0xF0061200u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC20 ((*(Ifx_MC*)0xF0062400u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC21 ((*(Ifx_MC*)0xF0062500u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC22 ((*(Ifx_MC*)0xF0062600u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC23 ((*(Ifx_MC*)0xF0062700u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC24 ((*(Ifx_MC*)0xF0062800u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC25 ((*(Ifx_MC*)0xF0062900u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC26 ((*(Ifx_MC*)0xF0062A00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC27 ((*(Ifx_MC*)0xF0062B00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC28 ((*(Ifx_MC*)0xF0062C00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC29 ((*(Ifx_MC*)0xF0062D00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC3 ((*(Ifx_MC*)0xF0061300u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC30 ((*(Ifx_MC*)0xF0062E00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC31 ((*(Ifx_MC*)0xF0062F00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC32 ((*(Ifx_MC*)0xF0063000u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC33 ((*(Ifx_MC*)0xF0063100u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC34 ((*(Ifx_MC*)0xF0063200u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC35 ((*(Ifx_MC*)0xF0063300u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC36 ((*(Ifx_MC*)0xF0063400u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC37 ((*(Ifx_MC*)0xF0063500u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC38 ((*(Ifx_MC*)0xF0063600u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC39 ((*(Ifx_MC*)0xF0063700u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC4 ((*(Ifx_MC*)0xF0061400u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC40 ((*(Ifx_MC*)0xF0063800u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC41 ((*(Ifx_MC*)0xF0063900u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC42 ((*(Ifx_MC*)0xF0063A00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC43 ((*(Ifx_MC*)0xF0063B00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC44 ((*(Ifx_MC*)0xF0063C00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC45 ((*(Ifx_MC*)0xF0063D00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC46 ((*(Ifx_MC*)0xF0063E00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC47 ((*(Ifx_MC*)0xF0063F00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC48 ((*(Ifx_MC*)0xF0064000u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC49 ((*(Ifx_MC*)0xF0064100u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC5 ((*(Ifx_MC*)0xF0061500u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC50 ((*(Ifx_MC*)0xF0064200u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC51 ((*(Ifx_MC*)0xF0064300u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC52 ((*(Ifx_MC*)0xF0064400u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC53 ((*(Ifx_MC*)0xF0064500u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC54 ((*(Ifx_MC*)0xF0064600u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC55 ((*(Ifx_MC*)0xF0064700u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC56 ((*(Ifx_MC*)0xF0064800u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC57 ((*(Ifx_MC*)0xF0064900u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC58 ((*(Ifx_MC*)0xF0064A00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC59 ((*(Ifx_MC*)0xF0064B00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC6 ((*(Ifx_MC*)0xF0061600u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC60 ((*(Ifx_MC*)0xF0064C00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC61 ((*(Ifx_MC*)0xF0064D00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC62 ((*(Ifx_MC*)0xF0064E00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC63 ((*(Ifx_MC*)0xF0064F00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC64 ((*(Ifx_MC*)0xF0065000u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC65 ((*(Ifx_MC*)0xF0065100u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC66 ((*(Ifx_MC*)0xF0065200u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC67 ((*(Ifx_MC*)0xF0065300u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC68 ((*(Ifx_MC*)0xF0065400u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC69 ((*(Ifx_MC*)0xF0065500u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC7 ((*(Ifx_MC*)0xF0061700u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC70 ((*(Ifx_MC*)0xF0065600u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC71 ((*(Ifx_MC*)0xF0065700u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC72 ((*(Ifx_MC*)0xF0065800u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC73 ((*(Ifx_MC*)0xF0065900u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC74 ((*(Ifx_MC*)0xF0065A00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC75 ((*(Ifx_MC*)0xF0065B00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC76 ((*(Ifx_MC*)0xF0065C00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC77 ((*(Ifx_MC*)0xF0065D00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC78 ((*(Ifx_MC*)0xF0065E00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC79 ((*(Ifx_MC*)0xF0065F00u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC8 ((*(Ifx_MC*)0xF0061800u)) /* lint --e(923)*/

/** MC object */
#define MODULE_MC9 ((*(Ifx_MC*)0xF0061900u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-MC0)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC0_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0061000u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC0_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0061002u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC0_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0061010u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC0_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006100Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC0_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0061012u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC0_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0061014u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC0_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0061016u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC0_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0061018u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC0_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0061004u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC0_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0061006u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC0_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0061008u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC0_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00610A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC0_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00610A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC0_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00610B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC0_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00610B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC0_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00610B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC0_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00610BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC0_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00610BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC0_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00610BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC0_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00610C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC0_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00610C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC0_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00610C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC0_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00610C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC0_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00610A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC0_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00610C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC0_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00610CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC0_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00610CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC0_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00610CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC0_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00610D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC0_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00610D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC0_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00610D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC0_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00610D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC0_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00610D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC0_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00610DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC0_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00610A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC0_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00610DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC0_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00610DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC0_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00610E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC0_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00610E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC0_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00610E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC0_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00610E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC0_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00610E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC0_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00610EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC0_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00610ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC0_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00610EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC0_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00610A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC0_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00610AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC0_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00610ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC0_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00610AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC0_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00610B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC0_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00610B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC0_REVID ((*(volatile Ifx_MC_REVID*)0xF006100Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-MC1)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC1_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0061100u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC1_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0061102u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC1_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0061110u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC1_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006110Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC1_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0061112u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC1_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0061114u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC1_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0061116u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC1_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0061118u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC1_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0061104u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC1_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0061106u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC1_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0061108u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC1_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00611A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC1_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00611A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC1_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00611B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC1_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00611B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC1_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00611B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC1_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00611BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC1_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00611BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC1_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00611BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC1_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00611C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC1_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00611C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC1_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00611C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC1_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00611C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC1_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00611A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC1_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00611C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC1_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00611CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC1_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00611CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC1_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00611CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC1_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00611D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC1_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00611D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC1_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00611D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC1_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00611D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC1_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00611D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC1_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00611DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC1_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00611A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC1_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00611DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC1_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00611DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC1_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00611E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC1_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00611E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC1_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00611E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC1_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00611E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC1_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00611E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC1_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00611EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC1_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00611ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC1_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00611EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC1_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00611A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC1_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00611AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC1_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00611ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC1_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00611AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC1_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00611B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC1_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00611B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC1_REVID ((*(volatile Ifx_MC_REVID*)0xF006110Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC10)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC10_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0061A00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC10_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0061A02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC10_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0061A10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC10_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0061A0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC10_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0061A12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC10_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0061A14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC10_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0061A16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC10_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0061A18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC10_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0061A04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC10_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0061A06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC10_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0061A08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC10_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0061AA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC10_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0061AA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC10_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0061AB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC10_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0061AB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC10_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0061AB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC10_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0061ABAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC10_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0061ABCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC10_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0061ABEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC10_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0061AC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC10_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0061AC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC10_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0061AC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC10_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0061AC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC10_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0061AA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC10_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0061AC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC10_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0061ACAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC10_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0061ACCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC10_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0061ACEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC10_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0061AD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC10_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0061AD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC10_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0061AD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC10_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0061AD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC10_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0061AD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC10_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0061ADAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC10_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0061AA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC10_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0061ADCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC10_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0061ADEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC10_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0061AE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC10_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0061AE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC10_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0061AE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC10_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0061AE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC10_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0061AE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC10_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0061AEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC10_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0061AECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC10_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0061AEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC10_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0061AA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC10_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0061AAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC10_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0061AACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC10_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0061AAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC10_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0061AB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC10_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0061AB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC10_REVID ((*(volatile Ifx_MC_REVID*)0xF0061A0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC11)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC11_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0061B00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC11_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0061B02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC11_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0061B10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC11_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0061B0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC11_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0061B12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC11_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0061B14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC11_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0061B16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC11_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0061B18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC11_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0061B04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC11_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0061B06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC11_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0061B08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC11_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0061BA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC11_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0061BA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC11_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0061BB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC11_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0061BB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC11_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0061BB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC11_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0061BBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC11_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0061BBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC11_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0061BBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC11_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0061BC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC11_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0061BC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC11_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0061BC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC11_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0061BC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC11_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0061BA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC11_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0061BC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC11_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0061BCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC11_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0061BCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC11_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0061BCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC11_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0061BD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC11_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0061BD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC11_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0061BD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC11_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0061BD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC11_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0061BD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC11_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0061BDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC11_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0061BA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC11_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0061BDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC11_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0061BDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC11_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0061BE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC11_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0061BE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC11_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0061BE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC11_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0061BE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC11_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0061BE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC11_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0061BEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC11_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0061BECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC11_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0061BEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC11_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0061BA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC11_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0061BAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC11_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0061BACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC11_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0061BAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC11_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0061BB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC11_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0061BB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC11_REVID ((*(volatile Ifx_MC_REVID*)0xF0061B0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC12)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC12_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0061C00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC12_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0061C02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC12_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0061C10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC12_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0061C0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC12_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0061C12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC12_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0061C14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC12_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0061C16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC12_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0061C18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC12_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0061C04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC12_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0061C06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC12_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0061C08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC12_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0061CA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC12_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0061CA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC12_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0061CB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC12_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0061CB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC12_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0061CB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC12_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0061CBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC12_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0061CBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC12_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0061CBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC12_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0061CC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC12_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0061CC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC12_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0061CC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC12_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0061CC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC12_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0061CA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC12_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0061CC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC12_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0061CCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC12_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0061CCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC12_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0061CCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC12_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0061CD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC12_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0061CD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC12_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0061CD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC12_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0061CD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC12_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0061CD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC12_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0061CDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC12_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0061CA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC12_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0061CDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC12_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0061CDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC12_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0061CE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC12_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0061CE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC12_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0061CE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC12_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0061CE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC12_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0061CE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC12_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0061CEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC12_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0061CECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC12_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0061CEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC12_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0061CA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC12_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0061CAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC12_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0061CACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC12_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0061CAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC12_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0061CB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC12_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0061CB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC12_REVID ((*(volatile Ifx_MC_REVID*)0xF0061C0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC13)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC13_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0061D00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC13_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0061D02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC13_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0061D10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC13_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0061D0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC13_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0061D12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC13_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0061D14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC13_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0061D16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC13_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0061D18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC13_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0061D04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC13_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0061D06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC13_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0061D08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC13_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0061DA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC13_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0061DA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC13_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0061DB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC13_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0061DB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC13_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0061DB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC13_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0061DBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC13_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0061DBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC13_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0061DBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC13_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0061DC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC13_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0061DC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC13_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0061DC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC13_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0061DC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC13_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0061DA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC13_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0061DC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC13_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0061DCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC13_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0061DCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC13_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0061DCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC13_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0061DD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC13_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0061DD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC13_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0061DD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC13_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0061DD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC13_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0061DD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC13_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0061DDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC13_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0061DA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC13_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0061DDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC13_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0061DDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC13_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0061DE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC13_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0061DE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC13_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0061DE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC13_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0061DE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC13_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0061DE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC13_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0061DEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC13_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0061DECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC13_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0061DEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC13_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0061DA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC13_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0061DAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC13_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0061DACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC13_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0061DAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC13_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0061DB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC13_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0061DB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC13_REVID ((*(volatile Ifx_MC_REVID*)0xF0061D0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC14)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC14_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0061E00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC14_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0061E02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC14_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0061E10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC14_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0061E0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC14_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0061E12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC14_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0061E14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC14_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0061E16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC14_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0061E18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC14_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0061E04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC14_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0061E06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC14_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0061E08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC14_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0061EA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC14_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0061EA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC14_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0061EB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC14_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0061EB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC14_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0061EB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC14_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0061EBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC14_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0061EBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC14_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0061EBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC14_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0061EC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC14_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0061EC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC14_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0061EC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC14_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0061EC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC14_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0061EA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC14_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0061EC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC14_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0061ECAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC14_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0061ECCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC14_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0061ECEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC14_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0061ED0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC14_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0061ED2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC14_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0061ED4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC14_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0061ED6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC14_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0061ED8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC14_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0061EDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC14_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0061EA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC14_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0061EDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC14_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0061EDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC14_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0061EE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC14_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0061EE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC14_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0061EE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC14_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0061EE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC14_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0061EE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC14_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0061EEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC14_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0061EECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC14_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0061EEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC14_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0061EA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC14_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0061EAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC14_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0061EACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC14_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0061EAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC14_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0061EB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC14_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0061EB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC14_REVID ((*(volatile Ifx_MC_REVID*)0xF0061E0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC15)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC15_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0061F00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC15_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0061F02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC15_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0061F10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC15_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0061F0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC15_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0061F12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC15_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0061F14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC15_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0061F16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC15_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0061F18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC15_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0061F04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC15_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0061F06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC15_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0061F08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC15_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0061FA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC15_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0061FA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC15_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0061FB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC15_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0061FB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC15_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0061FB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC15_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0061FBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC15_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0061FBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC15_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0061FBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC15_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0061FC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC15_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0061FC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC15_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0061FC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC15_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0061FC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC15_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0061FA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC15_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0061FC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC15_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0061FCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC15_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0061FCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC15_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0061FCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC15_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0061FD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC15_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0061FD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC15_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0061FD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC15_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0061FD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC15_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0061FD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC15_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0061FDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC15_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0061FA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC15_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0061FDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC15_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0061FDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC15_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0061FE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC15_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0061FE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC15_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0061FE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC15_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0061FE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC15_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0061FE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC15_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0061FEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC15_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0061FECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC15_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0061FEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC15_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0061FA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC15_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0061FAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC15_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0061FACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC15_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0061FAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC15_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0061FB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC15_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0061FB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC15_REVID ((*(volatile Ifx_MC_REVID*)0xF0061F0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC16)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC16_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0062000u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC16_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0062002u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC16_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0062010u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC16_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006200Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC16_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0062012u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC16_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0062014u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC16_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0062016u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC16_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0062018u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC16_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0062004u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC16_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0062006u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC16_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0062008u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC16_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00620A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC16_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00620A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC16_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00620B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC16_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00620B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC16_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00620B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC16_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00620BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC16_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00620BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC16_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00620BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC16_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00620C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC16_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00620C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC16_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00620C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC16_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00620C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC16_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00620A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC16_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00620C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC16_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00620CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC16_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00620CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC16_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00620CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC16_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00620D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC16_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00620D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC16_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00620D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC16_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00620D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC16_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00620D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC16_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00620DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC16_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00620A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC16_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00620DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC16_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00620DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC16_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00620E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC16_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00620E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC16_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00620E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC16_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00620E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC16_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00620E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC16_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00620EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC16_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00620ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC16_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00620EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC16_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00620A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC16_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00620AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC16_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00620ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC16_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00620AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC16_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00620B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC16_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00620B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC16_REVID ((*(volatile Ifx_MC_REVID*)0xF006200Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC17)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC17_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0062100u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC17_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0062102u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC17_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0062110u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC17_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006210Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC17_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0062112u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC17_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0062114u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC17_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0062116u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC17_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0062118u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC17_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0062104u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC17_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0062106u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC17_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0062108u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC17_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00621A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC17_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00621A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC17_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00621B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC17_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00621B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC17_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00621B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC17_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00621BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC17_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00621BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC17_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00621BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC17_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00621C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC17_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00621C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC17_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00621C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC17_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00621C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC17_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00621A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC17_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00621C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC17_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00621CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC17_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00621CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC17_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00621CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC17_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00621D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC17_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00621D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC17_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00621D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC17_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00621D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC17_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00621D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC17_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00621DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC17_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00621A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC17_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00621DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC17_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00621DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC17_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00621E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC17_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00621E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC17_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00621E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC17_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00621E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC17_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00621E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC17_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00621EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC17_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00621ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC17_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00621EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC17_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00621A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC17_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00621AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC17_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00621ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC17_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00621AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC17_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00621B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC17_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00621B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC17_REVID ((*(volatile Ifx_MC_REVID*)0xF006210Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC18)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC18_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0062200u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC18_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0062202u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC18_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0062210u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC18_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006220Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC18_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0062212u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC18_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0062214u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC18_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0062216u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC18_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0062218u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC18_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0062204u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC18_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0062206u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC18_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0062208u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC18_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00622A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC18_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00622A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC18_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00622B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC18_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00622B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC18_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00622B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC18_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00622BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC18_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00622BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC18_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00622BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC18_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00622C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC18_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00622C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC18_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00622C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC18_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00622C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC18_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00622A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC18_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00622C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC18_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00622CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC18_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00622CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC18_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00622CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC18_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00622D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC18_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00622D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC18_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00622D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC18_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00622D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC18_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00622D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC18_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00622DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC18_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00622A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC18_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00622DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC18_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00622DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC18_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00622E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC18_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00622E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC18_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00622E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC18_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00622E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC18_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00622E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC18_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00622EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC18_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00622ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC18_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00622EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC18_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00622A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC18_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00622AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC18_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00622ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC18_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00622AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC18_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00622B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC18_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00622B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC18_REVID ((*(volatile Ifx_MC_REVID*)0xF006220Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC19)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC19_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0062300u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC19_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0062302u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC19_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0062310u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC19_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006230Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC19_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0062312u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC19_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0062314u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC19_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0062316u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC19_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0062318u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC19_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0062304u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC19_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0062306u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC19_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0062308u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC19_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00623A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC19_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00623A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC19_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00623B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC19_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00623B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC19_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00623B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC19_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00623BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC19_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00623BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC19_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00623BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC19_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00623C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC19_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00623C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC19_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00623C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC19_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00623C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC19_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00623A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC19_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00623C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC19_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00623CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC19_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00623CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC19_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00623CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC19_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00623D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC19_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00623D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC19_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00623D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC19_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00623D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC19_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00623D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC19_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00623DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC19_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00623A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC19_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00623DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC19_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00623DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC19_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00623E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC19_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00623E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC19_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00623E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC19_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00623E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC19_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00623E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC19_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00623EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC19_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00623ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC19_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00623EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC19_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00623A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC19_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00623AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC19_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00623ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC19_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00623AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC19_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00623B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC19_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00623B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC19_REVID ((*(volatile Ifx_MC_REVID*)0xF006230Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-MC2)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC2_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0061200u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC2_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0061202u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC2_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0061210u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC2_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006120Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC2_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0061212u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC2_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0061214u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC2_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0061216u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC2_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0061218u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC2_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0061204u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC2_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0061206u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC2_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0061208u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC2_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00612A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC2_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00612A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC2_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00612B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC2_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00612B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC2_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00612B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC2_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00612BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC2_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00612BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC2_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00612BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC2_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00612C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC2_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00612C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC2_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00612C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC2_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00612C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC2_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00612A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC2_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00612C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC2_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00612CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC2_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00612CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC2_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00612CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC2_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00612D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC2_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00612D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC2_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00612D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC2_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00612D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC2_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00612D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC2_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00612DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC2_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00612A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC2_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00612DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC2_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00612DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC2_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00612E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC2_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00612E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC2_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00612E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC2_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00612E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC2_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00612E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC2_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00612EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC2_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00612ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC2_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00612EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC2_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00612A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC2_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00612AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC2_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00612ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC2_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00612AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC2_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00612B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC2_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00612B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC2_REVID ((*(volatile Ifx_MC_REVID*)0xF006120Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC20)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC20_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0062400u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC20_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0062402u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC20_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0062410u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC20_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006240Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC20_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0062412u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC20_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0062414u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC20_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0062416u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC20_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0062418u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC20_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0062404u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC20_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0062406u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC20_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0062408u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC20_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00624A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC20_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00624A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC20_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00624B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC20_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00624B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC20_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00624B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC20_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00624BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC20_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00624BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC20_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00624BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC20_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00624C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC20_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00624C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC20_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00624C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC20_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00624C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC20_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00624A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC20_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00624C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC20_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00624CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC20_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00624CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC20_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00624CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC20_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00624D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC20_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00624D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC20_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00624D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC20_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00624D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC20_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00624D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC20_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00624DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC20_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00624A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC20_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00624DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC20_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00624DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC20_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00624E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC20_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00624E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC20_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00624E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC20_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00624E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC20_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00624E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC20_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00624EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC20_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00624ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC20_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00624EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC20_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00624A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC20_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00624AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC20_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00624ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC20_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00624AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC20_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00624B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC20_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00624B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC20_REVID ((*(volatile Ifx_MC_REVID*)0xF006240Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC21)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC21_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0062500u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC21_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0062502u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC21_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0062510u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC21_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006250Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC21_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0062512u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC21_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0062514u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC21_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0062516u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC21_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0062518u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC21_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0062504u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC21_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0062506u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC21_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0062508u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC21_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00625A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC21_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00625A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC21_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00625B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC21_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00625B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC21_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00625B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC21_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00625BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC21_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00625BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC21_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00625BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC21_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00625C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC21_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00625C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC21_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00625C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC21_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00625C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC21_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00625A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC21_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00625C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC21_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00625CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC21_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00625CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC21_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00625CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC21_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00625D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC21_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00625D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC21_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00625D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC21_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00625D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC21_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00625D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC21_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00625DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC21_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00625A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC21_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00625DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC21_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00625DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC21_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00625E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC21_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00625E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC21_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00625E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC21_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00625E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC21_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00625E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC21_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00625EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC21_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00625ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC21_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00625EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC21_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00625A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC21_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00625AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC21_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00625ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC21_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00625AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC21_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00625B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC21_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00625B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC21_REVID ((*(volatile Ifx_MC_REVID*)0xF006250Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC22)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC22_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0062600u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC22_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0062602u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC22_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0062610u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC22_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006260Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC22_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0062612u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC22_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0062614u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC22_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0062616u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC22_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0062618u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC22_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0062604u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC22_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0062606u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC22_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0062608u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC22_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00626A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC22_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00626A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC22_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00626B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC22_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00626B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC22_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00626B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC22_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00626BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC22_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00626BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC22_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00626BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC22_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00626C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC22_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00626C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC22_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00626C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC22_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00626C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC22_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00626A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC22_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00626C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC22_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00626CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC22_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00626CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC22_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00626CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC22_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00626D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC22_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00626D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC22_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00626D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC22_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00626D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC22_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00626D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC22_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00626DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC22_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00626A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC22_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00626DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC22_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00626DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC22_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00626E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC22_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00626E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC22_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00626E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC22_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00626E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC22_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00626E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC22_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00626EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC22_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00626ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC22_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00626EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC22_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00626A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC22_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00626AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC22_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00626ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC22_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00626AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC22_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00626B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC22_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00626B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC22_REVID ((*(volatile Ifx_MC_REVID*)0xF006260Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC23)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC23_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0062700u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC23_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0062702u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC23_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0062710u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC23_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006270Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC23_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0062712u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC23_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0062714u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC23_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0062716u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC23_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0062718u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC23_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0062704u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC23_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0062706u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC23_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0062708u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC23_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00627A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC23_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00627A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC23_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00627B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC23_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00627B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC23_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00627B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC23_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00627BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC23_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00627BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC23_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00627BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC23_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00627C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC23_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00627C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC23_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00627C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC23_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00627C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC23_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00627A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC23_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00627C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC23_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00627CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC23_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00627CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC23_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00627CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC23_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00627D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC23_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00627D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC23_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00627D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC23_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00627D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC23_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00627D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC23_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00627DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC23_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00627A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC23_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00627DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC23_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00627DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC23_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00627E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC23_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00627E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC23_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00627E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC23_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00627E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC23_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00627E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC23_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00627EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC23_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00627ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC23_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00627EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC23_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00627A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC23_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00627AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC23_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00627ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC23_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00627AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC23_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00627B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC23_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00627B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC23_REVID ((*(volatile Ifx_MC_REVID*)0xF006270Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC24)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC24_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0062800u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC24_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0062802u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC24_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0062810u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC24_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006280Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC24_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0062812u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC24_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0062814u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC24_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0062816u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC24_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0062818u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC24_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0062804u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC24_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0062806u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC24_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0062808u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC24_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00628A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC24_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00628A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC24_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00628B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC24_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00628B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC24_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00628B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC24_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00628BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC24_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00628BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC24_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00628BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC24_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00628C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC24_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00628C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC24_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00628C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC24_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00628C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC24_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00628A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC24_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00628C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC24_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00628CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC24_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00628CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC24_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00628CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC24_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00628D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC24_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00628D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC24_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00628D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC24_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00628D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC24_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00628D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC24_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00628DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC24_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00628A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC24_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00628DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC24_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00628DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC24_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00628E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC24_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00628E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC24_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00628E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC24_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00628E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC24_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00628E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC24_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00628EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC24_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00628ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC24_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00628EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC24_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00628A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC24_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00628AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC24_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00628ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC24_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00628AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC24_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00628B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC24_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00628B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC24_REVID ((*(volatile Ifx_MC_REVID*)0xF006280Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC25)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC25_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0062900u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC25_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0062902u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC25_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0062910u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC25_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006290Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC25_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0062912u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC25_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0062914u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC25_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0062916u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC25_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0062918u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC25_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0062904u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC25_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0062906u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC25_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0062908u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC25_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00629A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC25_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00629A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC25_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00629B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC25_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00629B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC25_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00629B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC25_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00629BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC25_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00629BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC25_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00629BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC25_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00629C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC25_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00629C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC25_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00629C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC25_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00629C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC25_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00629A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC25_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00629C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC25_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00629CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC25_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00629CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC25_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00629CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC25_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00629D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC25_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00629D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC25_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00629D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC25_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00629D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC25_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00629D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC25_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00629DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC25_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00629A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC25_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00629DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC25_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00629DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC25_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00629E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC25_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00629E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC25_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00629E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC25_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00629E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC25_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00629E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC25_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00629EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC25_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00629ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC25_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00629EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC25_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00629A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC25_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00629AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC25_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00629ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC25_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00629AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC25_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00629B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC25_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00629B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC25_REVID ((*(volatile Ifx_MC_REVID*)0xF006290Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC26)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC26_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0062A00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC26_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0062A02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC26_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0062A10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC26_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0062A0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC26_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0062A12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC26_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0062A14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC26_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0062A16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC26_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0062A18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC26_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0062A04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC26_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0062A06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC26_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0062A08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC26_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0062AA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC26_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0062AA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC26_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0062AB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC26_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0062AB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC26_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0062AB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC26_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0062ABAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC26_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0062ABCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC26_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0062ABEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC26_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0062AC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC26_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0062AC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC26_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0062AC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC26_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0062AC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC26_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0062AA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC26_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0062AC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC26_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0062ACAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC26_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0062ACCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC26_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0062ACEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC26_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0062AD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC26_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0062AD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC26_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0062AD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC26_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0062AD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC26_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0062AD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC26_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0062ADAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC26_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0062AA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC26_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0062ADCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC26_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0062ADEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC26_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0062AE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC26_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0062AE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC26_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0062AE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC26_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0062AE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC26_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0062AE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC26_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0062AEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC26_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0062AECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC26_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0062AEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC26_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0062AA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC26_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0062AAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC26_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0062AACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC26_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0062AAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC26_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0062AB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC26_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0062AB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC26_REVID ((*(volatile Ifx_MC_REVID*)0xF0062A0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC27)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC27_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0062B00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC27_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0062B02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC27_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0062B10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC27_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0062B0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC27_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0062B12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC27_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0062B14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC27_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0062B16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC27_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0062B18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC27_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0062B04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC27_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0062B06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC27_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0062B08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC27_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0062BA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC27_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0062BA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC27_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0062BB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC27_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0062BB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC27_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0062BB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC27_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0062BBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC27_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0062BBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC27_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0062BBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC27_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0062BC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC27_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0062BC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC27_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0062BC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC27_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0062BC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC27_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0062BA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC27_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0062BC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC27_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0062BCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC27_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0062BCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC27_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0062BCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC27_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0062BD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC27_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0062BD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC27_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0062BD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC27_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0062BD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC27_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0062BD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC27_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0062BDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC27_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0062BA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC27_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0062BDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC27_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0062BDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC27_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0062BE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC27_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0062BE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC27_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0062BE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC27_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0062BE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC27_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0062BE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC27_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0062BEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC27_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0062BECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC27_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0062BEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC27_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0062BA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC27_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0062BAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC27_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0062BACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC27_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0062BAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC27_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0062BB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC27_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0062BB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC27_REVID ((*(volatile Ifx_MC_REVID*)0xF0062B0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC28)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC28_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0062C00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC28_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0062C02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC28_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0062C10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC28_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0062C0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC28_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0062C12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC28_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0062C14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC28_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0062C16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC28_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0062C18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC28_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0062C04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC28_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0062C06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC28_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0062C08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC28_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0062CA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC28_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0062CA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC28_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0062CB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC28_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0062CB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC28_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0062CB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC28_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0062CBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC28_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0062CBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC28_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0062CBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC28_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0062CC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC28_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0062CC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC28_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0062CC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC28_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0062CC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC28_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0062CA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC28_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0062CC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC28_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0062CCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC28_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0062CCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC28_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0062CCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC28_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0062CD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC28_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0062CD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC28_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0062CD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC28_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0062CD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC28_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0062CD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC28_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0062CDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC28_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0062CA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC28_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0062CDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC28_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0062CDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC28_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0062CE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC28_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0062CE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC28_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0062CE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC28_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0062CE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC28_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0062CE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC28_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0062CEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC28_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0062CECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC28_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0062CEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC28_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0062CA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC28_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0062CAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC28_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0062CACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC28_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0062CAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC28_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0062CB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC28_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0062CB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC28_REVID ((*(volatile Ifx_MC_REVID*)0xF0062C0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC29)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC29_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0062D00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC29_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0062D02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC29_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0062D10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC29_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0062D0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC29_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0062D12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC29_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0062D14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC29_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0062D16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC29_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0062D18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC29_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0062D04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC29_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0062D06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC29_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0062D08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC29_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0062DA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC29_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0062DA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC29_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0062DB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC29_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0062DB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC29_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0062DB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC29_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0062DBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC29_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0062DBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC29_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0062DBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC29_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0062DC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC29_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0062DC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC29_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0062DC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC29_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0062DC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC29_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0062DA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC29_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0062DC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC29_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0062DCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC29_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0062DCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC29_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0062DCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC29_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0062DD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC29_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0062DD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC29_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0062DD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC29_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0062DD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC29_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0062DD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC29_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0062DDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC29_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0062DA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC29_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0062DDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC29_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0062DDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC29_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0062DE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC29_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0062DE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC29_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0062DE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC29_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0062DE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC29_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0062DE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC29_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0062DEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC29_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0062DECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC29_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0062DEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC29_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0062DA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC29_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0062DAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC29_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0062DACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC29_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0062DAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC29_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0062DB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC29_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0062DB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC29_REVID ((*(volatile Ifx_MC_REVID*)0xF0062D0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-MC3)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC3_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0061300u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC3_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0061302u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC3_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0061310u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC3_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006130Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC3_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0061312u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC3_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0061314u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC3_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0061316u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC3_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0061318u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC3_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0061304u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC3_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0061306u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC3_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0061308u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC3_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00613A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC3_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00613A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC3_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00613B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC3_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00613B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC3_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00613B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC3_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00613BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC3_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00613BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC3_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00613BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC3_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00613C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC3_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00613C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC3_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00613C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC3_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00613C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC3_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00613A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC3_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00613C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC3_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00613CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC3_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00613CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC3_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00613CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC3_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00613D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC3_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00613D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC3_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00613D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC3_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00613D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC3_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00613D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC3_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00613DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC3_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00613A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC3_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00613DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC3_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00613DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC3_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00613E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC3_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00613E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC3_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00613E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC3_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00613E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC3_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00613E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC3_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00613EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC3_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00613ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC3_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00613EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC3_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00613A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC3_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00613AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC3_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00613ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC3_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00613AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC3_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00613B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC3_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00613B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC3_REVID ((*(volatile Ifx_MC_REVID*)0xF006130Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC30)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC30_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0062E00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC30_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0062E02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC30_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0062E10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC30_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0062E0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC30_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0062E12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC30_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0062E14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC30_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0062E16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC30_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0062E18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC30_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0062E04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC30_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0062E06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC30_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0062E08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC30_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0062EA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC30_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0062EA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC30_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0062EB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC30_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0062EB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC30_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0062EB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC30_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0062EBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC30_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0062EBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC30_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0062EBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC30_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0062EC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC30_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0062EC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC30_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0062EC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC30_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0062EC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC30_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0062EA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC30_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0062EC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC30_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0062ECAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC30_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0062ECCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC30_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0062ECEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC30_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0062ED0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC30_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0062ED2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC30_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0062ED4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC30_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0062ED6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC30_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0062ED8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC30_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0062EDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC30_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0062EA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC30_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0062EDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC30_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0062EDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC30_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0062EE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC30_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0062EE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC30_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0062EE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC30_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0062EE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC30_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0062EE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC30_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0062EEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC30_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0062EECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC30_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0062EEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC30_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0062EA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC30_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0062EAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC30_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0062EACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC30_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0062EAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC30_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0062EB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC30_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0062EB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC30_REVID ((*(volatile Ifx_MC_REVID*)0xF0062E0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC31)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC31_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0062F00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC31_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0062F02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC31_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0062F10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC31_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0062F0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC31_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0062F12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC31_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0062F14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC31_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0062F16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC31_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0062F18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC31_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0062F04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC31_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0062F06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC31_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0062F08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC31_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0062FA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC31_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0062FA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC31_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0062FB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC31_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0062FB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC31_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0062FB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC31_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0062FBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC31_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0062FBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC31_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0062FBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC31_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0062FC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC31_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0062FC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC31_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0062FC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC31_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0062FC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC31_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0062FA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC31_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0062FC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC31_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0062FCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC31_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0062FCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC31_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0062FCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC31_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0062FD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC31_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0062FD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC31_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0062FD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC31_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0062FD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC31_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0062FD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC31_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0062FDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC31_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0062FA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC31_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0062FDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC31_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0062FDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC31_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0062FE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC31_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0062FE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC31_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0062FE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC31_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0062FE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC31_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0062FE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC31_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0062FEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC31_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0062FECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC31_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0062FEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC31_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0062FA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC31_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0062FAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC31_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0062FACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC31_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0062FAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC31_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0062FB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC31_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0062FB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC31_REVID ((*(volatile Ifx_MC_REVID*)0xF0062F0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC32)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC32_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0063000u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC32_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0063002u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC32_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0063010u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC32_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006300Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC32_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0063012u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC32_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0063014u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC32_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0063016u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC32_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0063018u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC32_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0063004u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC32_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0063006u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC32_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0063008u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC32_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00630A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC32_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00630A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC32_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00630B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC32_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00630B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC32_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00630B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC32_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00630BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC32_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00630BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC32_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00630BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC32_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00630C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC32_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00630C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC32_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00630C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC32_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00630C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC32_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00630A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC32_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00630C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC32_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00630CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC32_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00630CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC32_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00630CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC32_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00630D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC32_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00630D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC32_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00630D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC32_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00630D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC32_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00630D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC32_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00630DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC32_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00630A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC32_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00630DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC32_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00630DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC32_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00630E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC32_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00630E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC32_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00630E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC32_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00630E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC32_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00630E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC32_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00630EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC32_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00630ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC32_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00630EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC32_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00630A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC32_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00630AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC32_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00630ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC32_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00630AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC32_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00630B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC32_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00630B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC32_REVID ((*(volatile Ifx_MC_REVID*)0xF006300Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC33)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC33_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0063100u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC33_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0063102u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC33_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0063110u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC33_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006310Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC33_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0063112u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC33_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0063114u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC33_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0063116u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC33_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0063118u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC33_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0063104u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC33_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0063106u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC33_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0063108u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC33_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00631A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC33_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00631A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC33_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00631B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC33_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00631B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC33_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00631B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC33_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00631BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC33_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00631BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC33_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00631BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC33_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00631C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC33_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00631C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC33_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00631C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC33_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00631C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC33_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00631A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC33_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00631C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC33_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00631CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC33_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00631CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC33_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00631CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC33_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00631D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC33_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00631D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC33_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00631D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC33_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00631D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC33_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00631D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC33_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00631DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC33_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00631A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC33_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00631DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC33_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00631DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC33_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00631E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC33_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00631E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC33_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00631E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC33_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00631E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC33_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00631E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC33_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00631EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC33_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00631ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC33_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00631EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC33_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00631A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC33_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00631AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC33_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00631ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC33_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00631AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC33_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00631B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC33_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00631B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC33_REVID ((*(volatile Ifx_MC_REVID*)0xF006310Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC34)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC34_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0063200u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC34_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0063202u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC34_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0063210u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC34_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006320Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC34_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0063212u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC34_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0063214u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC34_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0063216u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC34_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0063218u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC34_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0063204u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC34_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0063206u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC34_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0063208u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC34_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00632A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC34_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00632A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC34_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00632B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC34_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00632B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC34_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00632B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC34_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00632BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC34_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00632BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC34_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00632BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC34_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00632C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC34_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00632C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC34_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00632C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC34_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00632C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC34_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00632A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC34_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00632C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC34_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00632CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC34_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00632CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC34_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00632CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC34_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00632D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC34_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00632D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC34_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00632D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC34_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00632D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC34_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00632D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC34_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00632DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC34_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00632A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC34_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00632DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC34_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00632DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC34_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00632E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC34_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00632E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC34_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00632E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC34_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00632E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC34_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00632E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC34_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00632EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC34_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00632ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC34_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00632EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC34_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00632A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC34_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00632AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC34_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00632ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC34_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00632AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC34_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00632B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC34_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00632B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC34_REVID ((*(volatile Ifx_MC_REVID*)0xF006320Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC35)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC35_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0063300u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC35_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0063302u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC35_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0063310u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC35_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006330Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC35_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0063312u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC35_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0063314u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC35_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0063316u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC35_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0063318u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC35_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0063304u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC35_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0063306u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC35_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0063308u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC35_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00633A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC35_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00633A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC35_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00633B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC35_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00633B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC35_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00633B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC35_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00633BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC35_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00633BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC35_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00633BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC35_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00633C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC35_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00633C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC35_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00633C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC35_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00633C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC35_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00633A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC35_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00633C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC35_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00633CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC35_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00633CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC35_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00633CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC35_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00633D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC35_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00633D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC35_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00633D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC35_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00633D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC35_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00633D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC35_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00633DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC35_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00633A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC35_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00633DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC35_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00633DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC35_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00633E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC35_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00633E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC35_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00633E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC35_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00633E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC35_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00633E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC35_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00633EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC35_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00633ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC35_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00633EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC35_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00633A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC35_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00633AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC35_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00633ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC35_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00633AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC35_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00633B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC35_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00633B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC35_REVID ((*(volatile Ifx_MC_REVID*)0xF006330Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC36)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC36_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0063400u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC36_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0063402u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC36_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0063410u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC36_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006340Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC36_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0063412u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC36_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0063414u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC36_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0063416u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC36_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0063418u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC36_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0063404u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC36_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0063406u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC36_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0063408u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC36_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00634A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC36_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00634A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC36_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00634B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC36_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00634B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC36_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00634B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC36_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00634BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC36_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00634BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC36_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00634BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC36_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00634C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC36_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00634C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC36_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00634C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC36_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00634C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC36_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00634A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC36_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00634C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC36_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00634CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC36_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00634CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC36_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00634CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC36_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00634D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC36_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00634D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC36_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00634D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC36_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00634D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC36_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00634D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC36_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00634DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC36_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00634A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC36_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00634DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC36_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00634DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC36_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00634E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC36_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00634E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC36_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00634E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC36_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00634E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC36_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00634E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC36_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00634EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC36_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00634ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC36_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00634EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC36_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00634A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC36_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00634AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC36_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00634ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC36_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00634AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC36_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00634B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC36_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00634B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC36_REVID ((*(volatile Ifx_MC_REVID*)0xF006340Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC37)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC37_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0063500u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC37_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0063502u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC37_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0063510u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC37_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006350Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC37_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0063512u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC37_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0063514u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC37_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0063516u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC37_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0063518u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC37_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0063504u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC37_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0063506u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC37_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0063508u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC37_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00635A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC37_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00635A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC37_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00635B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC37_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00635B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC37_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00635B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC37_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00635BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC37_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00635BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC37_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00635BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC37_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00635C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC37_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00635C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC37_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00635C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC37_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00635C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC37_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00635A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC37_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00635C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC37_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00635CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC37_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00635CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC37_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00635CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC37_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00635D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC37_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00635D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC37_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00635D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC37_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00635D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC37_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00635D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC37_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00635DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC37_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00635A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC37_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00635DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC37_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00635DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC37_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00635E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC37_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00635E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC37_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00635E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC37_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00635E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC37_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00635E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC37_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00635EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC37_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00635ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC37_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00635EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC37_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00635A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC37_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00635AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC37_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00635ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC37_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00635AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC37_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00635B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC37_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00635B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC37_REVID ((*(volatile Ifx_MC_REVID*)0xF006350Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC38)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC38_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0063600u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC38_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0063602u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC38_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0063610u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC38_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006360Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC38_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0063612u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC38_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0063614u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC38_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0063616u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC38_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0063618u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC38_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0063604u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC38_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0063606u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC38_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0063608u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC38_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00636A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC38_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00636A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC38_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00636B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC38_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00636B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC38_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00636B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC38_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00636BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC38_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00636BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC38_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00636BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC38_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00636C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC38_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00636C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC38_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00636C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC38_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00636C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC38_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00636A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC38_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00636C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC38_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00636CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC38_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00636CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC38_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00636CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC38_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00636D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC38_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00636D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC38_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00636D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC38_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00636D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC38_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00636D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC38_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00636DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC38_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00636A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC38_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00636DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC38_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00636DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC38_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00636E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC38_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00636E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC38_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00636E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC38_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00636E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC38_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00636E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC38_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00636EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC38_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00636ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC38_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00636EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC38_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00636A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC38_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00636AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC38_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00636ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC38_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00636AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC38_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00636B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC38_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00636B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC38_REVID ((*(volatile Ifx_MC_REVID*)0xF006360Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC39)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC39_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0063700u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC39_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0063702u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC39_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0063710u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC39_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006370Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC39_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0063712u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC39_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0063714u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC39_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0063716u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC39_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0063718u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC39_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0063704u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC39_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0063706u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC39_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0063708u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC39_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00637A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC39_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00637A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC39_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00637B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC39_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00637B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC39_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00637B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC39_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00637BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC39_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00637BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC39_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00637BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC39_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00637C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC39_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00637C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC39_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00637C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC39_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00637C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC39_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00637A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC39_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00637C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC39_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00637CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC39_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00637CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC39_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00637CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC39_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00637D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC39_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00637D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC39_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00637D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC39_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00637D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC39_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00637D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC39_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00637DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC39_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00637A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC39_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00637DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC39_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00637DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC39_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00637E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC39_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00637E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC39_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00637E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC39_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00637E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC39_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00637E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC39_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00637EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC39_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00637ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC39_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00637EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC39_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00637A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC39_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00637AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC39_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00637ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC39_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00637AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC39_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00637B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC39_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00637B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC39_REVID ((*(volatile Ifx_MC_REVID*)0xF006370Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-MC4)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC4_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0061400u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC4_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0061402u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC4_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0061410u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC4_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006140Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC4_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0061412u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC4_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0061414u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC4_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0061416u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC4_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0061418u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC4_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0061404u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC4_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0061406u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC4_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0061408u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC4_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00614A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC4_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00614A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC4_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00614B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC4_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00614B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC4_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00614B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC4_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00614BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC4_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00614BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC4_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00614BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC4_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00614C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC4_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00614C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC4_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00614C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC4_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00614C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC4_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00614A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC4_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00614C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC4_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00614CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC4_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00614CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC4_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00614CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC4_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00614D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC4_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00614D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC4_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00614D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC4_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00614D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC4_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00614D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC4_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00614DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC4_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00614A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC4_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00614DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC4_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00614DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC4_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00614E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC4_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00614E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC4_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00614E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC4_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00614E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC4_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00614E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC4_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00614EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC4_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00614ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC4_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00614EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC4_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00614A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC4_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00614AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC4_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00614ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC4_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00614AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC4_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00614B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC4_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00614B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC4_REVID ((*(volatile Ifx_MC_REVID*)0xF006140Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC40)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC40_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0063800u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC40_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0063802u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC40_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0063810u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC40_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006380Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC40_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0063812u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC40_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0063814u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC40_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0063816u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC40_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0063818u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC40_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0063804u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC40_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0063806u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC40_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0063808u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC40_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00638A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC40_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00638A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC40_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00638B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC40_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00638B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC40_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00638B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC40_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00638BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC40_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00638BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC40_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00638BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC40_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00638C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC40_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00638C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC40_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00638C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC40_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00638C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC40_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00638A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC40_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00638C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC40_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00638CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC40_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00638CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC40_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00638CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC40_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00638D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC40_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00638D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC40_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00638D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC40_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00638D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC40_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00638D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC40_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00638DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC40_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00638A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC40_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00638DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC40_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00638DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC40_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00638E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC40_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00638E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC40_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00638E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC40_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00638E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC40_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00638E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC40_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00638EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC40_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00638ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC40_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00638EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC40_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00638A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC40_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00638AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC40_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00638ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC40_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00638AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC40_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00638B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC40_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00638B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC40_REVID ((*(volatile Ifx_MC_REVID*)0xF006380Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC41)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC41_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0063900u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC41_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0063902u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC41_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0063910u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC41_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006390Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC41_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0063912u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC41_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0063914u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC41_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0063916u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC41_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0063918u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC41_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0063904u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC41_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0063906u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC41_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0063908u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC41_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00639A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC41_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00639A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC41_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00639B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC41_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00639B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC41_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00639B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC41_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00639BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC41_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00639BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC41_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00639BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC41_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00639C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC41_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00639C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC41_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00639C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC41_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00639C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC41_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00639A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC41_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00639C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC41_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00639CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC41_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00639CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC41_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00639CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC41_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00639D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC41_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00639D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC41_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00639D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC41_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00639D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC41_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00639D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC41_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00639DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC41_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00639A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC41_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00639DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC41_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00639DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC41_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00639E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC41_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00639E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC41_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00639E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC41_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00639E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC41_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00639E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC41_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00639EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC41_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00639ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC41_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00639EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC41_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00639A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC41_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00639AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC41_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00639ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC41_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00639AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC41_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00639B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC41_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00639B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC41_REVID ((*(volatile Ifx_MC_REVID*)0xF006390Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC42)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC42_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0063A00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC42_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0063A02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC42_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0063A10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC42_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0063A0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC42_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0063A12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC42_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0063A14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC42_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0063A16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC42_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0063A18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC42_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0063A04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC42_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0063A06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC42_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0063A08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC42_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0063AA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC42_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0063AA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC42_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0063AB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC42_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0063AB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC42_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0063AB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC42_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0063ABAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC42_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0063ABCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC42_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0063ABEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC42_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0063AC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC42_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0063AC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC42_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0063AC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC42_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0063AC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC42_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0063AA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC42_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0063AC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC42_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0063ACAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC42_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0063ACCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC42_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0063ACEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC42_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0063AD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC42_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0063AD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC42_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0063AD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC42_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0063AD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC42_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0063AD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC42_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0063ADAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC42_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0063AA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC42_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0063ADCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC42_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0063ADEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC42_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0063AE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC42_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0063AE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC42_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0063AE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC42_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0063AE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC42_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0063AE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC42_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0063AEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC42_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0063AECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC42_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0063AEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC42_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0063AA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC42_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0063AAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC42_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0063AACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC42_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0063AAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC42_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0063AB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC42_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0063AB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC42_REVID ((*(volatile Ifx_MC_REVID*)0xF0063A0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC43)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC43_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0063B00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC43_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0063B02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC43_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0063B10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC43_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0063B0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC43_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0063B12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC43_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0063B14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC43_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0063B16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC43_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0063B18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC43_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0063B04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC43_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0063B06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC43_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0063B08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC43_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0063BA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC43_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0063BA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC43_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0063BB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC43_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0063BB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC43_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0063BB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC43_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0063BBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC43_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0063BBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC43_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0063BBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC43_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0063BC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC43_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0063BC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC43_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0063BC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC43_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0063BC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC43_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0063BA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC43_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0063BC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC43_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0063BCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC43_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0063BCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC43_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0063BCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC43_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0063BD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC43_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0063BD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC43_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0063BD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC43_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0063BD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC43_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0063BD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC43_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0063BDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC43_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0063BA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC43_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0063BDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC43_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0063BDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC43_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0063BE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC43_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0063BE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC43_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0063BE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC43_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0063BE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC43_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0063BE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC43_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0063BEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC43_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0063BECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC43_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0063BEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC43_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0063BA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC43_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0063BAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC43_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0063BACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC43_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0063BAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC43_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0063BB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC43_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0063BB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC43_REVID ((*(volatile Ifx_MC_REVID*)0xF0063B0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC44)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC44_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0063C00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC44_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0063C02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC44_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0063C10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC44_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0063C0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC44_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0063C12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC44_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0063C14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC44_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0063C16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC44_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0063C18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC44_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0063C04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC44_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0063C06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC44_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0063C08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC44_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0063CA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC44_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0063CA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC44_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0063CB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC44_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0063CB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC44_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0063CB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC44_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0063CBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC44_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0063CBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC44_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0063CBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC44_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0063CC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC44_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0063CC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC44_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0063CC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC44_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0063CC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC44_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0063CA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC44_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0063CC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC44_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0063CCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC44_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0063CCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC44_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0063CCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC44_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0063CD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC44_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0063CD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC44_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0063CD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC44_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0063CD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC44_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0063CD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC44_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0063CDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC44_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0063CA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC44_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0063CDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC44_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0063CDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC44_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0063CE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC44_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0063CE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC44_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0063CE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC44_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0063CE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC44_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0063CE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC44_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0063CEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC44_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0063CECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC44_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0063CEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC44_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0063CA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC44_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0063CAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC44_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0063CACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC44_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0063CAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC44_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0063CB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC44_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0063CB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC44_REVID ((*(volatile Ifx_MC_REVID*)0xF0063C0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC45)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC45_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0063D00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC45_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0063D02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC45_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0063D10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC45_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0063D0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC45_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0063D12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC45_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0063D14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC45_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0063D16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC45_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0063D18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC45_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0063D04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC45_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0063D06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC45_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0063D08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC45_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0063DA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC45_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0063DA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC45_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0063DB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC45_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0063DB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC45_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0063DB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC45_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0063DBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC45_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0063DBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC45_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0063DBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC45_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0063DC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC45_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0063DC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC45_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0063DC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC45_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0063DC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC45_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0063DA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC45_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0063DC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC45_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0063DCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC45_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0063DCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC45_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0063DCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC45_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0063DD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC45_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0063DD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC45_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0063DD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC45_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0063DD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC45_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0063DD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC45_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0063DDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC45_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0063DA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC45_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0063DDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC45_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0063DDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC45_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0063DE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC45_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0063DE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC45_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0063DE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC45_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0063DE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC45_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0063DE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC45_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0063DEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC45_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0063DECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC45_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0063DEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC45_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0063DA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC45_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0063DAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC45_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0063DACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC45_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0063DAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC45_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0063DB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC45_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0063DB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC45_REVID ((*(volatile Ifx_MC_REVID*)0xF0063D0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC46)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC46_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0063E00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC46_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0063E02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC46_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0063E10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC46_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0063E0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC46_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0063E12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC46_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0063E14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC46_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0063E16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC46_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0063E18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC46_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0063E04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC46_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0063E06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC46_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0063E08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC46_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0063EA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC46_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0063EA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC46_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0063EB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC46_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0063EB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC46_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0063EB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC46_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0063EBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC46_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0063EBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC46_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0063EBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC46_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0063EC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC46_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0063EC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC46_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0063EC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC46_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0063EC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC46_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0063EA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC46_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0063EC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC46_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0063ECAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC46_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0063ECCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC46_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0063ECEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC46_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0063ED0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC46_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0063ED2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC46_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0063ED4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC46_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0063ED6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC46_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0063ED8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC46_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0063EDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC46_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0063EA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC46_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0063EDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC46_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0063EDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC46_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0063EE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC46_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0063EE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC46_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0063EE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC46_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0063EE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC46_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0063EE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC46_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0063EEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC46_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0063EECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC46_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0063EEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC46_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0063EA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC46_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0063EAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC46_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0063EACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC46_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0063EAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC46_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0063EB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC46_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0063EB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC46_REVID ((*(volatile Ifx_MC_REVID*)0xF0063E0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC47)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC47_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0063F00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC47_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0063F02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC47_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0063F10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC47_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0063F0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC47_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0063F12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC47_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0063F14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC47_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0063F16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC47_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0063F18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC47_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0063F04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC47_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0063F06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC47_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0063F08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC47_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0063FA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC47_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0063FA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC47_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0063FB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC47_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0063FB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC47_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0063FB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC47_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0063FBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC47_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0063FBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC47_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0063FBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC47_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0063FC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC47_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0063FC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC47_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0063FC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC47_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0063FC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC47_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0063FA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC47_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0063FC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC47_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0063FCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC47_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0063FCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC47_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0063FCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC47_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0063FD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC47_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0063FD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC47_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0063FD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC47_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0063FD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC47_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0063FD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC47_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0063FDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC47_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0063FA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC47_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0063FDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC47_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0063FDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC47_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0063FE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC47_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0063FE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC47_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0063FE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC47_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0063FE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC47_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0063FE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC47_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0063FEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC47_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0063FECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC47_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0063FEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC47_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0063FA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC47_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0063FAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC47_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0063FACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC47_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0063FAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC47_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0063FB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC47_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0063FB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC47_REVID ((*(volatile Ifx_MC_REVID*)0xF0063F0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC48)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC48_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0064000u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC48_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0064002u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC48_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0064010u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC48_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006400Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC48_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0064012u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC48_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0064014u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC48_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0064016u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC48_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0064018u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC48_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0064004u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC48_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0064006u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC48_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0064008u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC48_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00640A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC48_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00640A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC48_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00640B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC48_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00640B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC48_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00640B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC48_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00640BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC48_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00640BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC48_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00640BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC48_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00640C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC48_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00640C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC48_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00640C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC48_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00640C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC48_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00640A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC48_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00640C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC48_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00640CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC48_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00640CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC48_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00640CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC48_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00640D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC48_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00640D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC48_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00640D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC48_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00640D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC48_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00640D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC48_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00640DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC48_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00640A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC48_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00640DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC48_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00640DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC48_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00640E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC48_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00640E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC48_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00640E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC48_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00640E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC48_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00640E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC48_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00640EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC48_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00640ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC48_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00640EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC48_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00640A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC48_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00640AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC48_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00640ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC48_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00640AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC48_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00640B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC48_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00640B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC48_REVID ((*(volatile Ifx_MC_REVID*)0xF006400Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC49)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC49_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0064100u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC49_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0064102u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC49_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0064110u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC49_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006410Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC49_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0064112u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC49_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0064114u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC49_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0064116u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC49_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0064118u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC49_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0064104u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC49_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0064106u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC49_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0064108u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC49_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00641A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC49_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00641A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC49_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00641B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC49_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00641B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC49_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00641B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC49_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00641BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC49_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00641BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC49_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00641BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC49_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00641C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC49_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00641C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC49_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00641C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC49_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00641C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC49_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00641A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC49_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00641C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC49_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00641CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC49_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00641CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC49_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00641CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC49_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00641D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC49_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00641D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC49_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00641D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC49_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00641D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC49_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00641D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC49_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00641DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC49_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00641A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC49_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00641DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC49_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00641DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC49_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00641E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC49_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00641E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC49_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00641E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC49_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00641E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC49_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00641E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC49_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00641EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC49_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00641ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC49_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00641EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC49_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00641A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC49_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00641AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC49_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00641ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC49_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00641AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC49_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00641B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC49_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00641B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC49_REVID ((*(volatile Ifx_MC_REVID*)0xF006410Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-MC5)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC5_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0061500u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC5_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0061502u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC5_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0061510u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC5_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006150Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC5_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0061512u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC5_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0061514u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC5_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0061516u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC5_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0061518u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC5_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0061504u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC5_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0061506u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC5_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0061508u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC5_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00615A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC5_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00615A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC5_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00615B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC5_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00615B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC5_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00615B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC5_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00615BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC5_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00615BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC5_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00615BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC5_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00615C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC5_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00615C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC5_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00615C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC5_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00615C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC5_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00615A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC5_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00615C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC5_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00615CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC5_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00615CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC5_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00615CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC5_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00615D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC5_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00615D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC5_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00615D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC5_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00615D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC5_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00615D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC5_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00615DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC5_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00615A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC5_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00615DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC5_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00615DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC5_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00615E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC5_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00615E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC5_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00615E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC5_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00615E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC5_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00615E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC5_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00615EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC5_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00615ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC5_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00615EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC5_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00615A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC5_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00615AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC5_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00615ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC5_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00615AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC5_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00615B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC5_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00615B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC5_REVID ((*(volatile Ifx_MC_REVID*)0xF006150Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC50)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC50_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0064200u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC50_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0064202u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC50_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0064210u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC50_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006420Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC50_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0064212u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC50_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0064214u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC50_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0064216u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC50_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0064218u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC50_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0064204u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC50_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0064206u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC50_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0064208u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC50_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00642A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC50_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00642A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC50_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00642B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC50_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00642B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC50_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00642B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC50_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00642BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC50_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00642BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC50_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00642BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC50_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00642C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC50_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00642C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC50_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00642C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC50_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00642C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC50_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00642A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC50_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00642C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC50_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00642CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC50_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00642CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC50_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00642CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC50_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00642D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC50_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00642D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC50_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00642D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC50_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00642D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC50_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00642D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC50_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00642DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC50_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00642A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC50_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00642DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC50_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00642DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC50_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00642E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC50_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00642E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC50_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00642E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC50_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00642E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC50_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00642E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC50_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00642EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC50_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00642ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC50_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00642EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC50_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00642A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC50_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00642AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC50_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00642ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC50_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00642AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC50_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00642B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC50_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00642B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC50_REVID ((*(volatile Ifx_MC_REVID*)0xF006420Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC51)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC51_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0064300u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC51_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0064302u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC51_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0064310u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC51_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006430Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC51_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0064312u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC51_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0064314u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC51_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0064316u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC51_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0064318u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC51_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0064304u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC51_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0064306u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC51_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0064308u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC51_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00643A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC51_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00643A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC51_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00643B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC51_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00643B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC51_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00643B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC51_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00643BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC51_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00643BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC51_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00643BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC51_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00643C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC51_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00643C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC51_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00643C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC51_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00643C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC51_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00643A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC51_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00643C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC51_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00643CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC51_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00643CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC51_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00643CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC51_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00643D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC51_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00643D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC51_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00643D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC51_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00643D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC51_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00643D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC51_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00643DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC51_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00643A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC51_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00643DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC51_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00643DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC51_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00643E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC51_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00643E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC51_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00643E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC51_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00643E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC51_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00643E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC51_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00643EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC51_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00643ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC51_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00643EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC51_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00643A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC51_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00643AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC51_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00643ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC51_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00643AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC51_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00643B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC51_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00643B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC51_REVID ((*(volatile Ifx_MC_REVID*)0xF006430Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC52)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC52_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0064400u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC52_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0064402u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC52_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0064410u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC52_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006440Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC52_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0064412u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC52_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0064414u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC52_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0064416u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC52_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0064418u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC52_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0064404u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC52_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0064406u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC52_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0064408u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC52_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00644A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC52_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00644A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC52_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00644B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC52_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00644B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC52_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00644B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC52_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00644BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC52_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00644BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC52_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00644BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC52_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00644C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC52_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00644C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC52_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00644C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC52_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00644C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC52_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00644A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC52_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00644C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC52_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00644CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC52_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00644CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC52_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00644CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC52_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00644D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC52_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00644D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC52_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00644D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC52_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00644D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC52_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00644D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC52_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00644DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC52_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00644A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC52_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00644DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC52_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00644DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC52_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00644E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC52_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00644E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC52_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00644E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC52_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00644E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC52_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00644E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC52_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00644EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC52_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00644ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC52_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00644EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC52_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00644A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC52_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00644AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC52_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00644ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC52_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00644AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC52_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00644B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC52_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00644B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC52_REVID ((*(volatile Ifx_MC_REVID*)0xF006440Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC53)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC53_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0064500u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC53_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0064502u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC53_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0064510u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC53_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006450Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC53_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0064512u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC53_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0064514u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC53_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0064516u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC53_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0064518u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC53_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0064504u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC53_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0064506u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC53_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0064508u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC53_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00645A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC53_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00645A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC53_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00645B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC53_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00645B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC53_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00645B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC53_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00645BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC53_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00645BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC53_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00645BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC53_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00645C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC53_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00645C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC53_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00645C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC53_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00645C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC53_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00645A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC53_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00645C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC53_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00645CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC53_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00645CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC53_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00645CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC53_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00645D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC53_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00645D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC53_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00645D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC53_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00645D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC53_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00645D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC53_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00645DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC53_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00645A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC53_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00645DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC53_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00645DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC53_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00645E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC53_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00645E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC53_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00645E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC53_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00645E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC53_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00645E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC53_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00645EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC53_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00645ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC53_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00645EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC53_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00645A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC53_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00645AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC53_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00645ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC53_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00645AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC53_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00645B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC53_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00645B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC53_REVID ((*(volatile Ifx_MC_REVID*)0xF006450Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC54)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC54_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0064600u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC54_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0064602u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC54_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0064610u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC54_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006460Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC54_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0064612u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC54_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0064614u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC54_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0064616u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC54_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0064618u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC54_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0064604u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC54_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0064606u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC54_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0064608u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC54_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00646A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC54_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00646A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC54_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00646B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC54_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00646B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC54_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00646B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC54_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00646BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC54_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00646BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC54_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00646BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC54_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00646C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC54_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00646C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC54_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00646C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC54_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00646C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC54_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00646A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC54_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00646C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC54_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00646CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC54_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00646CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC54_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00646CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC54_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00646D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC54_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00646D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC54_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00646D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC54_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00646D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC54_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00646D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC54_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00646DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC54_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00646A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC54_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00646DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC54_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00646DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC54_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00646E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC54_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00646E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC54_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00646E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC54_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00646E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC54_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00646E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC54_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00646EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC54_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00646ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC54_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00646EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC54_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00646A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC54_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00646AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC54_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00646ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC54_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00646AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC54_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00646B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC54_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00646B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC54_REVID ((*(volatile Ifx_MC_REVID*)0xF006460Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC55)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC55_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0064700u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC55_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0064702u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC55_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0064710u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC55_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006470Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC55_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0064712u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC55_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0064714u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC55_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0064716u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC55_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0064718u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC55_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0064704u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC55_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0064706u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC55_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0064708u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC55_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00647A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC55_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00647A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC55_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00647B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC55_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00647B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC55_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00647B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC55_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00647BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC55_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00647BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC55_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00647BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC55_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00647C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC55_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00647C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC55_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00647C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC55_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00647C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC55_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00647A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC55_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00647C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC55_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00647CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC55_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00647CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC55_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00647CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC55_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00647D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC55_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00647D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC55_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00647D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC55_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00647D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC55_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00647D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC55_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00647DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC55_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00647A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC55_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00647DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC55_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00647DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC55_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00647E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC55_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00647E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC55_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00647E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC55_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00647E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC55_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00647E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC55_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00647EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC55_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00647ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC55_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00647EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC55_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00647A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC55_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00647AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC55_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00647ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC55_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00647AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC55_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00647B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC55_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00647B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC55_REVID ((*(volatile Ifx_MC_REVID*)0xF006470Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC56)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC56_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0064800u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC56_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0064802u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC56_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0064810u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC56_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006480Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC56_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0064812u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC56_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0064814u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC56_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0064816u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC56_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0064818u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC56_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0064804u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC56_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0064806u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC56_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0064808u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC56_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00648A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC56_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00648A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC56_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00648B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC56_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00648B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC56_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00648B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC56_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00648BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC56_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00648BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC56_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00648BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC56_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00648C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC56_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00648C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC56_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00648C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC56_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00648C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC56_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00648A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC56_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00648C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC56_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00648CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC56_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00648CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC56_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00648CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC56_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00648D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC56_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00648D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC56_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00648D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC56_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00648D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC56_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00648D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC56_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00648DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC56_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00648A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC56_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00648DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC56_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00648DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC56_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00648E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC56_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00648E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC56_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00648E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC56_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00648E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC56_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00648E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC56_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00648EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC56_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00648ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC56_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00648EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC56_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00648A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC56_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00648AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC56_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00648ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC56_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00648AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC56_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00648B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC56_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00648B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC56_REVID ((*(volatile Ifx_MC_REVID*)0xF006480Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC57)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC57_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0064900u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC57_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0064902u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC57_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0064910u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC57_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006490Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC57_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0064912u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC57_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0064914u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC57_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0064916u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC57_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0064918u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC57_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0064904u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC57_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0064906u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC57_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0064908u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC57_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00649A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC57_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00649A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC57_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00649B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC57_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00649B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC57_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00649B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC57_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00649BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC57_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00649BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC57_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00649BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC57_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00649C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC57_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00649C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC57_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00649C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC57_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00649C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC57_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00649A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC57_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00649C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC57_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00649CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC57_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00649CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC57_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00649CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC57_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00649D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC57_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00649D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC57_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00649D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC57_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00649D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC57_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00649D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC57_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00649DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC57_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00649A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC57_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00649DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC57_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00649DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC57_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00649E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC57_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00649E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC57_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00649E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC57_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00649E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC57_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00649E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC57_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00649EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC57_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00649ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC57_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00649EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC57_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00649A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC57_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00649AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC57_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00649ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC57_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00649AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC57_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00649B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC57_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00649B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC57_REVID ((*(volatile Ifx_MC_REVID*)0xF006490Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC58)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC58_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0064A00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC58_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0064A02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC58_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0064A10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC58_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0064A0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC58_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0064A12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC58_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0064A14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC58_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0064A16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC58_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0064A18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC58_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0064A04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC58_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0064A06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC58_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0064A08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC58_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0064AA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC58_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0064AA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC58_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0064AB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC58_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0064AB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC58_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0064AB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC58_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0064ABAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC58_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0064ABCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC58_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0064ABEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC58_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0064AC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC58_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0064AC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC58_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0064AC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC58_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0064AC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC58_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0064AA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC58_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0064AC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC58_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0064ACAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC58_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0064ACCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC58_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0064ACEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC58_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0064AD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC58_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0064AD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC58_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0064AD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC58_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0064AD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC58_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0064AD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC58_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0064ADAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC58_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0064AA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC58_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0064ADCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC58_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0064ADEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC58_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0064AE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC58_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0064AE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC58_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0064AE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC58_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0064AE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC58_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0064AE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC58_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0064AEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC58_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0064AECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC58_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0064AEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC58_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0064AA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC58_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0064AAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC58_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0064AACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC58_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0064AAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC58_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0064AB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC58_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0064AB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC58_REVID ((*(volatile Ifx_MC_REVID*)0xF0064A0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC59)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC59_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0064B00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC59_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0064B02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC59_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0064B10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC59_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0064B0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC59_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0064B12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC59_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0064B14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC59_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0064B16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC59_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0064B18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC59_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0064B04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC59_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0064B06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC59_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0064B08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC59_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0064BA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC59_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0064BA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC59_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0064BB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC59_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0064BB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC59_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0064BB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC59_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0064BBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC59_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0064BBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC59_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0064BBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC59_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0064BC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC59_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0064BC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC59_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0064BC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC59_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0064BC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC59_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0064BA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC59_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0064BC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC59_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0064BCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC59_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0064BCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC59_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0064BCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC59_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0064BD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC59_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0064BD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC59_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0064BD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC59_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0064BD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC59_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0064BD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC59_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0064BDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC59_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0064BA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC59_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0064BDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC59_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0064BDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC59_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0064BE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC59_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0064BE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC59_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0064BE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC59_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0064BE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC59_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0064BE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC59_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0064BEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC59_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0064BECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC59_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0064BEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC59_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0064BA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC59_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0064BAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC59_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0064BACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC59_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0064BAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC59_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0064BB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC59_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0064BB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC59_REVID ((*(volatile Ifx_MC_REVID*)0xF0064B0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-MC6)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC6_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0061600u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC6_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0061602u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC6_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0061610u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC6_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006160Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC6_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0061612u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC6_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0061614u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC6_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0061616u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC6_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0061618u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC6_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0061604u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC6_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0061606u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC6_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0061608u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC6_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00616A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC6_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00616A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC6_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00616B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC6_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00616B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC6_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00616B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC6_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00616BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC6_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00616BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC6_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00616BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC6_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00616C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC6_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00616C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC6_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00616C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC6_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00616C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC6_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00616A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC6_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00616C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC6_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00616CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC6_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00616CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC6_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00616CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC6_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00616D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC6_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00616D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC6_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00616D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC6_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00616D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC6_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00616D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC6_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00616DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC6_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00616A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC6_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00616DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC6_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00616DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC6_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00616E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC6_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00616E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC6_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00616E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC6_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00616E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC6_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00616E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC6_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00616EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC6_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00616ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC6_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00616EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC6_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00616A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC6_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00616AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC6_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00616ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC6_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00616AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC6_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00616B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC6_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00616B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC6_REVID ((*(volatile Ifx_MC_REVID*)0xF006160Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC60)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC60_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0064C00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC60_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0064C02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC60_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0064C10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC60_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0064C0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC60_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0064C12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC60_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0064C14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC60_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0064C16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC60_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0064C18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC60_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0064C04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC60_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0064C06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC60_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0064C08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC60_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0064CA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC60_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0064CA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC60_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0064CB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC60_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0064CB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC60_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0064CB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC60_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0064CBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC60_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0064CBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC60_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0064CBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC60_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0064CC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC60_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0064CC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC60_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0064CC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC60_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0064CC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC60_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0064CA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC60_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0064CC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC60_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0064CCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC60_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0064CCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC60_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0064CCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC60_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0064CD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC60_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0064CD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC60_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0064CD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC60_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0064CD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC60_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0064CD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC60_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0064CDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC60_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0064CA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC60_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0064CDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC60_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0064CDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC60_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0064CE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC60_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0064CE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC60_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0064CE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC60_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0064CE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC60_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0064CE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC60_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0064CEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC60_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0064CECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC60_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0064CEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC60_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0064CA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC60_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0064CAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC60_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0064CACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC60_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0064CAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC60_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0064CB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC60_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0064CB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC60_REVID ((*(volatile Ifx_MC_REVID*)0xF0064C0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC61)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC61_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0064D00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC61_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0064D02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC61_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0064D10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC61_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0064D0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC61_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0064D12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC61_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0064D14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC61_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0064D16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC61_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0064D18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC61_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0064D04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC61_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0064D06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC61_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0064D08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC61_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0064DA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC61_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0064DA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC61_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0064DB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC61_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0064DB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC61_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0064DB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC61_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0064DBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC61_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0064DBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC61_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0064DBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC61_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0064DC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC61_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0064DC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC61_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0064DC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC61_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0064DC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC61_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0064DA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC61_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0064DC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC61_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0064DCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC61_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0064DCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC61_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0064DCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC61_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0064DD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC61_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0064DD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC61_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0064DD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC61_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0064DD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC61_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0064DD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC61_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0064DDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC61_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0064DA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC61_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0064DDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC61_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0064DDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC61_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0064DE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC61_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0064DE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC61_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0064DE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC61_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0064DE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC61_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0064DE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC61_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0064DEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC61_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0064DECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC61_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0064DEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC61_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0064DA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC61_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0064DAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC61_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0064DACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC61_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0064DAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC61_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0064DB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC61_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0064DB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC61_REVID ((*(volatile Ifx_MC_REVID*)0xF0064D0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC62)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC62_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0064E00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC62_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0064E02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC62_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0064E10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC62_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0064E0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC62_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0064E12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC62_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0064E14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC62_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0064E16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC62_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0064E18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC62_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0064E04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC62_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0064E06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC62_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0064E08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC62_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0064EA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC62_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0064EA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC62_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0064EB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC62_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0064EB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC62_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0064EB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC62_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0064EBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC62_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0064EBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC62_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0064EBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC62_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0064EC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC62_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0064EC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC62_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0064EC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC62_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0064EC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC62_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0064EA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC62_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0064EC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC62_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0064ECAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC62_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0064ECCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC62_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0064ECEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC62_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0064ED0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC62_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0064ED2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC62_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0064ED4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC62_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0064ED6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC62_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0064ED8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC62_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0064EDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC62_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0064EA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC62_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0064EDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC62_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0064EDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC62_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0064EE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC62_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0064EE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC62_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0064EE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC62_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0064EE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC62_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0064EE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC62_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0064EEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC62_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0064EECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC62_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0064EEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC62_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0064EA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC62_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0064EAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC62_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0064EACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC62_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0064EAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC62_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0064EB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC62_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0064EB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC62_REVID ((*(volatile Ifx_MC_REVID*)0xF0064E0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC63)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC63_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0064F00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC63_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0064F02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC63_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0064F10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC63_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0064F0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC63_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0064F12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC63_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0064F14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC63_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0064F16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC63_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0064F18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC63_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0064F04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC63_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0064F06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC63_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0064F08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC63_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0064FA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC63_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0064FA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC63_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0064FB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC63_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0064FB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC63_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0064FB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC63_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0064FBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC63_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0064FBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC63_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0064FBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC63_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0064FC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC63_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0064FC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC63_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0064FC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC63_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0064FC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC63_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0064FA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC63_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0064FC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC63_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0064FCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC63_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0064FCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC63_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0064FCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC63_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0064FD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC63_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0064FD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC63_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0064FD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC63_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0064FD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC63_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0064FD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC63_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0064FDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC63_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0064FA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC63_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0064FDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC63_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0064FDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC63_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0064FE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC63_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0064FE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC63_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0064FE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC63_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0064FE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC63_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0064FE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC63_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0064FEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC63_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0064FECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC63_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0064FEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC63_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0064FA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC63_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0064FAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC63_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0064FACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC63_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0064FAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC63_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0064FB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC63_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0064FB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC63_REVID ((*(volatile Ifx_MC_REVID*)0xF0064F0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC64)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC64_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0065000u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC64_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0065002u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC64_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0065010u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC64_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006500Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC64_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0065012u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC64_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0065014u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC64_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0065016u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC64_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0065018u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC64_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0065004u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC64_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0065006u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC64_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0065008u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC64_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00650A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC64_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00650A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC64_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00650B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC64_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00650B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC64_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00650B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC64_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00650BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC64_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00650BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC64_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00650BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC64_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00650C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC64_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00650C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC64_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00650C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC64_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00650C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC64_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00650A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC64_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00650C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC64_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00650CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC64_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00650CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC64_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00650CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC64_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00650D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC64_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00650D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC64_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00650D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC64_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00650D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC64_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00650D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC64_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00650DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC64_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00650A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC64_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00650DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC64_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00650DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC64_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00650E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC64_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00650E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC64_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00650E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC64_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00650E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC64_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00650E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC64_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00650EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC64_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00650ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC64_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00650EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC64_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00650A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC64_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00650AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC64_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00650ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC64_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00650AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC64_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00650B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC64_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00650B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC64_REVID ((*(volatile Ifx_MC_REVID*)0xF006500Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC65)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC65_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0065100u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC65_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0065102u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC65_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0065110u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC65_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006510Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC65_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0065112u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC65_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0065114u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC65_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0065116u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC65_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0065118u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC65_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0065104u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC65_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0065106u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC65_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0065108u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC65_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00651A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC65_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00651A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC65_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00651B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC65_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00651B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC65_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00651B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC65_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00651BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC65_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00651BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC65_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00651BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC65_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00651C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC65_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00651C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC65_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00651C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC65_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00651C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC65_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00651A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC65_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00651C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC65_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00651CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC65_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00651CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC65_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00651CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC65_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00651D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC65_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00651D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC65_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00651D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC65_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00651D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC65_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00651D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC65_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00651DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC65_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00651A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC65_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00651DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC65_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00651DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC65_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00651E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC65_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00651E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC65_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00651E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC65_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00651E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC65_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00651E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC65_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00651EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC65_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00651ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC65_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00651EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC65_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00651A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC65_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00651AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC65_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00651ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC65_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00651AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC65_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00651B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC65_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00651B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC65_REVID ((*(volatile Ifx_MC_REVID*)0xF006510Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC66)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC66_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0065200u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC66_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0065202u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC66_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0065210u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC66_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006520Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC66_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0065212u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC66_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0065214u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC66_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0065216u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC66_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0065218u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC66_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0065204u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC66_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0065206u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC66_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0065208u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC66_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00652A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC66_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00652A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC66_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00652B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC66_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00652B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC66_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00652B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC66_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00652BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC66_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00652BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC66_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00652BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC66_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00652C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC66_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00652C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC66_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00652C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC66_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00652C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC66_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00652A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC66_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00652C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC66_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00652CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC66_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00652CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC66_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00652CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC66_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00652D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC66_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00652D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC66_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00652D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC66_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00652D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC66_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00652D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC66_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00652DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC66_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00652A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC66_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00652DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC66_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00652DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC66_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00652E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC66_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00652E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC66_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00652E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC66_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00652E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC66_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00652E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC66_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00652EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC66_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00652ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC66_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00652EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC66_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00652A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC66_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00652AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC66_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00652ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC66_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00652AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC66_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00652B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC66_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00652B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC66_REVID ((*(volatile Ifx_MC_REVID*)0xF006520Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC67)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC67_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0065300u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC67_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0065302u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC67_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0065310u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC67_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006530Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC67_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0065312u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC67_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0065314u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC67_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0065316u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC67_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0065318u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC67_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0065304u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC67_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0065306u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC67_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0065308u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC67_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00653A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC67_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00653A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC67_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00653B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC67_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00653B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC67_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00653B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC67_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00653BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC67_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00653BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC67_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00653BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC67_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00653C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC67_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00653C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC67_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00653C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC67_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00653C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC67_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00653A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC67_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00653C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC67_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00653CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC67_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00653CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC67_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00653CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC67_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00653D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC67_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00653D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC67_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00653D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC67_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00653D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC67_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00653D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC67_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00653DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC67_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00653A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC67_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00653DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC67_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00653DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC67_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00653E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC67_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00653E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC67_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00653E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC67_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00653E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC67_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00653E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC67_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00653EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC67_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00653ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC67_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00653EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC67_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00653A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC67_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00653AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC67_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00653ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC67_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00653AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC67_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00653B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC67_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00653B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC67_REVID ((*(volatile Ifx_MC_REVID*)0xF006530Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC68)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC68_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0065400u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC68_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0065402u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC68_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0065410u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC68_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006540Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC68_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0065412u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC68_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0065414u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC68_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0065416u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC68_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0065418u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC68_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0065404u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC68_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0065406u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC68_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0065408u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC68_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00654A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC68_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00654A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC68_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00654B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC68_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00654B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC68_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00654B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC68_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00654BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC68_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00654BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC68_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00654BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC68_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00654C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC68_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00654C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC68_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00654C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC68_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00654C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC68_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00654A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC68_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00654C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC68_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00654CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC68_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00654CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC68_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00654CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC68_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00654D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC68_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00654D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC68_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00654D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC68_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00654D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC68_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00654D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC68_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00654DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC68_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00654A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC68_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00654DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC68_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00654DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC68_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00654E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC68_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00654E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC68_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00654E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC68_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00654E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC68_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00654E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC68_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00654EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC68_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00654ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC68_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00654EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC68_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00654A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC68_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00654AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC68_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00654ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC68_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00654AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC68_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00654B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC68_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00654B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC68_REVID ((*(volatile Ifx_MC_REVID*)0xF006540Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC69)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC69_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0065500u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC69_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0065502u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC69_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0065510u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC69_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006550Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC69_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0065512u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC69_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0065514u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC69_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0065516u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC69_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0065518u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC69_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0065504u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC69_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0065506u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC69_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0065508u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC69_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00655A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC69_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00655A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC69_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00655B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC69_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00655B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC69_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00655B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC69_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00655BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC69_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00655BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC69_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00655BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC69_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00655C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC69_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00655C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC69_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00655C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC69_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00655C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC69_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00655A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC69_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00655C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC69_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00655CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC69_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00655CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC69_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00655CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC69_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00655D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC69_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00655D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC69_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00655D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC69_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00655D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC69_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00655D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC69_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00655DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC69_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00655A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC69_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00655DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC69_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00655DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC69_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00655E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC69_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00655E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC69_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00655E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC69_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00655E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC69_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00655E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC69_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00655EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC69_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00655ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC69_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00655EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC69_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00655A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC69_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00655AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC69_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00655ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC69_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00655AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC69_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00655B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC69_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00655B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC69_REVID ((*(volatile Ifx_MC_REVID*)0xF006550Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-MC7)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC7_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0061700u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC7_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0061702u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC7_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0061710u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC7_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006170Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC7_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0061712u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC7_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0061714u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC7_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0061716u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC7_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0061718u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC7_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0061704u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC7_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0061706u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC7_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0061708u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC7_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00617A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC7_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00617A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC7_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00617B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC7_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00617B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC7_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00617B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC7_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00617BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC7_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00617BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC7_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00617BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC7_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00617C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC7_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00617C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC7_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00617C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC7_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00617C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC7_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00617A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC7_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00617C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC7_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00617CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC7_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00617CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC7_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00617CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC7_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00617D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC7_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00617D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC7_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00617D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC7_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00617D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC7_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00617D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC7_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00617DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC7_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00617A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC7_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00617DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC7_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00617DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC7_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00617E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC7_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00617E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC7_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00617E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC7_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00617E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC7_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00617E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC7_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00617EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC7_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00617ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC7_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00617EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC7_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00617A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC7_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00617AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC7_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00617ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC7_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00617AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC7_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00617B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC7_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00617B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC7_REVID ((*(volatile Ifx_MC_REVID*)0xF006170Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC70)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC70_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0065600u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC70_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0065602u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC70_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0065610u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC70_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006560Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC70_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0065612u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC70_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0065614u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC70_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0065616u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC70_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0065618u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC70_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0065604u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC70_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0065606u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC70_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0065608u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC70_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00656A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC70_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00656A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC70_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00656B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC70_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00656B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC70_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00656B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC70_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00656BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC70_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00656BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC70_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00656BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC70_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00656C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC70_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00656C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC70_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00656C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC70_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00656C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC70_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00656A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC70_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00656C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC70_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00656CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC70_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00656CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC70_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00656CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC70_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00656D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC70_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00656D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC70_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00656D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC70_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00656D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC70_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00656D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC70_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00656DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC70_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00656A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC70_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00656DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC70_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00656DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC70_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00656E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC70_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00656E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC70_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00656E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC70_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00656E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC70_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00656E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC70_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00656EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC70_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00656ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC70_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00656EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC70_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00656A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC70_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00656AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC70_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00656ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC70_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00656AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC70_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00656B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC70_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00656B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC70_REVID ((*(volatile Ifx_MC_REVID*)0xF006560Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC71)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC71_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0065700u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC71_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0065702u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC71_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0065710u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC71_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006570Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC71_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0065712u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC71_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0065714u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC71_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0065716u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC71_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0065718u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC71_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0065704u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC71_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0065706u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC71_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0065708u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC71_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00657A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC71_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00657A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC71_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00657B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC71_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00657B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC71_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00657B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC71_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00657BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC71_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00657BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC71_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00657BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC71_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00657C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC71_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00657C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC71_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00657C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC71_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00657C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC71_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00657A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC71_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00657C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC71_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00657CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC71_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00657CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC71_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00657CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC71_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00657D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC71_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00657D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC71_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00657D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC71_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00657D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC71_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00657D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC71_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00657DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC71_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00657A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC71_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00657DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC71_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00657DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC71_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00657E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC71_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00657E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC71_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00657E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC71_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00657E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC71_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00657E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC71_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00657EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC71_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00657ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC71_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00657EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC71_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00657A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC71_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00657AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC71_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00657ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC71_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00657AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC71_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00657B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC71_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00657B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC71_REVID ((*(volatile Ifx_MC_REVID*)0xF006570Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC72)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC72_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0065800u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC72_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0065802u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC72_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0065810u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC72_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006580Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC72_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0065812u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC72_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0065814u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC72_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0065816u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC72_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0065818u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC72_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0065804u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC72_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0065806u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC72_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0065808u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC72_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00658A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC72_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00658A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC72_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00658B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC72_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00658B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC72_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00658B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC72_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00658BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC72_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00658BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC72_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00658BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC72_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00658C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC72_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00658C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC72_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00658C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC72_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00658C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC72_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00658A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC72_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00658C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC72_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00658CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC72_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00658CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC72_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00658CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC72_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00658D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC72_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00658D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC72_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00658D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC72_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00658D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC72_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00658D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC72_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00658DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC72_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00658A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC72_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00658DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC72_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00658DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC72_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00658E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC72_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00658E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC72_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00658E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC72_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00658E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC72_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00658E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC72_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00658EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC72_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00658ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC72_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00658EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC72_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00658A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC72_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00658AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC72_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00658ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC72_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00658AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC72_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00658B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC72_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00658B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC72_REVID ((*(volatile Ifx_MC_REVID*)0xF006580Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC73)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC73_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0065900u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC73_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0065902u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC73_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0065910u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC73_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006590Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC73_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0065912u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC73_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0065914u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC73_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0065916u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC73_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0065918u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC73_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0065904u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC73_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0065906u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC73_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0065908u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC73_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00659A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC73_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00659A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC73_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00659B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC73_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00659B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC73_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00659B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC73_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00659BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC73_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00659BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC73_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00659BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC73_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00659C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC73_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00659C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC73_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00659C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC73_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00659C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC73_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00659A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC73_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00659C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC73_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00659CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC73_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00659CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC73_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00659CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC73_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00659D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC73_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00659D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC73_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00659D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC73_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00659D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC73_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00659D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC73_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00659DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC73_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00659A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC73_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00659DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC73_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00659DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC73_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00659E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC73_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00659E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC73_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00659E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC73_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00659E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC73_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00659E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC73_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00659EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC73_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00659ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC73_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00659EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC73_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00659A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC73_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00659AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC73_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00659ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC73_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00659AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC73_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00659B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC73_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00659B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC73_REVID ((*(volatile Ifx_MC_REVID*)0xF006590Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC74)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC74_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0065A00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC74_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0065A02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC74_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0065A10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC74_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0065A0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC74_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0065A12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC74_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0065A14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC74_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0065A16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC74_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0065A18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC74_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0065A04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC74_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0065A06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC74_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0065A08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC74_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0065AA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC74_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0065AA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC74_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0065AB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC74_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0065AB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC74_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0065AB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC74_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0065ABAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC74_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0065ABCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC74_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0065ABEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC74_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0065AC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC74_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0065AC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC74_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0065AC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC74_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0065AC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC74_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0065AA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC74_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0065AC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC74_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0065ACAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC74_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0065ACCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC74_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0065ACEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC74_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0065AD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC74_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0065AD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC74_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0065AD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC74_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0065AD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC74_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0065AD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC74_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0065ADAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC74_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0065AA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC74_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0065ADCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC74_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0065ADEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC74_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0065AE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC74_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0065AE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC74_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0065AE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC74_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0065AE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC74_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0065AE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC74_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0065AEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC74_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0065AECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC74_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0065AEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC74_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0065AA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC74_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0065AAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC74_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0065AACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC74_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0065AAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC74_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0065AB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC74_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0065AB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC74_REVID ((*(volatile Ifx_MC_REVID*)0xF0065A0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC75)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC75_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0065B00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC75_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0065B02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC75_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0065B10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC75_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0065B0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC75_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0065B12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC75_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0065B14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC75_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0065B16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC75_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0065B18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC75_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0065B04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC75_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0065B06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC75_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0065B08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC75_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0065BA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC75_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0065BA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC75_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0065BB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC75_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0065BB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC75_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0065BB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC75_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0065BBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC75_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0065BBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC75_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0065BBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC75_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0065BC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC75_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0065BC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC75_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0065BC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC75_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0065BC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC75_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0065BA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC75_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0065BC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC75_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0065BCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC75_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0065BCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC75_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0065BCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC75_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0065BD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC75_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0065BD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC75_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0065BD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC75_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0065BD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC75_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0065BD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC75_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0065BDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC75_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0065BA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC75_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0065BDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC75_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0065BDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC75_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0065BE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC75_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0065BE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC75_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0065BE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC75_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0065BE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC75_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0065BE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC75_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0065BEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC75_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0065BECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC75_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0065BEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC75_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0065BA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC75_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0065BAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC75_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0065BACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC75_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0065BAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC75_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0065BB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC75_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0065BB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC75_REVID ((*(volatile Ifx_MC_REVID*)0xF0065B0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC76)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC76_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0065C00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC76_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0065C02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC76_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0065C10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC76_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0065C0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC76_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0065C12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC76_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0065C14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC76_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0065C16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC76_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0065C18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC76_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0065C04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC76_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0065C06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC76_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0065C08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC76_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0065CA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC76_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0065CA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC76_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0065CB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC76_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0065CB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC76_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0065CB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC76_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0065CBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC76_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0065CBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC76_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0065CBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC76_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0065CC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC76_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0065CC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC76_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0065CC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC76_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0065CC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC76_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0065CA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC76_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0065CC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC76_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0065CCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC76_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0065CCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC76_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0065CCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC76_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0065CD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC76_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0065CD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC76_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0065CD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC76_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0065CD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC76_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0065CD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC76_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0065CDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC76_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0065CA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC76_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0065CDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC76_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0065CDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC76_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0065CE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC76_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0065CE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC76_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0065CE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC76_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0065CE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC76_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0065CE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC76_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0065CEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC76_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0065CECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC76_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0065CEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC76_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0065CA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC76_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0065CAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC76_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0065CACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC76_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0065CAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC76_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0065CB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC76_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0065CB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC76_REVID ((*(volatile Ifx_MC_REVID*)0xF0065C0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC77)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC77_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0065D00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC77_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0065D02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC77_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0065D10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC77_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0065D0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC77_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0065D12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC77_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0065D14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC77_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0065D16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC77_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0065D18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC77_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0065D04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC77_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0065D06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC77_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0065D08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC77_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0065DA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC77_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0065DA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC77_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0065DB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC77_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0065DB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC77_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0065DB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC77_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0065DBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC77_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0065DBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC77_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0065DBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC77_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0065DC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC77_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0065DC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC77_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0065DC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC77_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0065DC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC77_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0065DA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC77_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0065DC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC77_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0065DCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC77_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0065DCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC77_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0065DCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC77_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0065DD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC77_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0065DD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC77_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0065DD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC77_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0065DD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC77_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0065DD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC77_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0065DDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC77_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0065DA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC77_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0065DDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC77_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0065DDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC77_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0065DE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC77_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0065DE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC77_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0065DE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC77_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0065DE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC77_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0065DE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC77_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0065DEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC77_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0065DECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC77_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0065DEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC77_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0065DA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC77_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0065DAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC77_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0065DACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC77_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0065DAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC77_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0065DB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC77_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0065DB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC77_REVID ((*(volatile Ifx_MC_REVID*)0xF0065D0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC78)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC78_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0065E00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC78_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0065E02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC78_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0065E10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC78_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0065E0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC78_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0065E12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC78_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0065E14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC78_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0065E16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC78_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0065E18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC78_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0065E04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC78_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0065E06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC78_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0065E08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC78_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0065EA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC78_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0065EA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC78_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0065EB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC78_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0065EB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC78_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0065EB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC78_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0065EBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC78_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0065EBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC78_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0065EBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC78_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0065EC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC78_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0065EC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC78_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0065EC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC78_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0065EC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC78_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0065EA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC78_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0065EC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC78_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0065ECAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC78_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0065ECCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC78_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0065ECEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC78_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0065ED0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC78_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0065ED2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC78_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0065ED4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC78_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0065ED6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC78_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0065ED8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC78_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0065EDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC78_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0065EA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC78_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0065EDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC78_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0065EDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC78_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0065EE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC78_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0065EE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC78_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0065EE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC78_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0065EE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC78_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0065EE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC78_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0065EEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC78_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0065EECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC78_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0065EEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC78_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0065EA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC78_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0065EAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC78_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0065EACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC78_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0065EAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC78_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0065EB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC78_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0065EB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC78_REVID ((*(volatile Ifx_MC_REVID*)0xF0065E0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-MC79)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC79_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0065F00u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC79_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0065F02u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC79_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0065F10u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC79_ECCS ((*(volatile Ifx_MC_ECCS*)0xF0065F0Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC79_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0065F12u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC79_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0065F14u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC79_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0065F16u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC79_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0065F18u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC79_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0065F04u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC79_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0065F06u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC79_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0065F08u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC79_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF0065FA0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC79_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF0065FA2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC79_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF0065FB4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC79_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF0065FB6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC79_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF0065FB8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC79_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF0065FBAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC79_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF0065FBCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC79_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF0065FBEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC79_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF0065FC0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC79_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF0065FC2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC79_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF0065FC4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC79_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF0065FC6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC79_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF0065FA4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC79_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF0065FC8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC79_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF0065FCAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC79_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF0065FCCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC79_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF0065FCEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC79_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF0065FD0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC79_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF0065FD2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC79_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF0065FD4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC79_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF0065FD6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC79_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF0065FD8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC79_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF0065FDAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC79_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF0065FA6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC79_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF0065FDCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC79_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF0065FDEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC79_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF0065FE0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC79_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF0065FE2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC79_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF0065FE4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC79_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF0065FE6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC79_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF0065FE8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC79_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF0065FEAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC79_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF0065FECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC79_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF0065FEEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC79_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF0065FA8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC79_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF0065FAAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC79_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF0065FACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC79_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF0065FAEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC79_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF0065FB0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC79_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF0065FB2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC79_REVID ((*(volatile Ifx_MC_REVID*)0xF0065F0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-MC8)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC8_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0061800u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC8_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0061802u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC8_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0061810u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC8_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006180Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC8_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0061812u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC8_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0061814u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC8_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0061816u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC8_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0061818u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC8_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0061804u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC8_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0061806u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC8_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0061808u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC8_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00618A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC8_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00618A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC8_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00618B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC8_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00618B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC8_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00618B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC8_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00618BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC8_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00618BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC8_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00618BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC8_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00618C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC8_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00618C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC8_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00618C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC8_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00618C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC8_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00618A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC8_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00618C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC8_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00618CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC8_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00618CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC8_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00618CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC8_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00618D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC8_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00618D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC8_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00618D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC8_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00618D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC8_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00618D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC8_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00618DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC8_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00618A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC8_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00618DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC8_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00618DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC8_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00618E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC8_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00618E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC8_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00618E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC8_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00618E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC8_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00618E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC8_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00618EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC8_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00618ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC8_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00618EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC8_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00618A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC8_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00618AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC8_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00618ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC8_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00618AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC8_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00618B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC8_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00618B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC8_REVID ((*(volatile Ifx_MC_REVID*)0xF006180Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-MC9)                               */
/******************************************************************************/

/** 0, Configuration Register 0 */
#define MC9_CONFIG0 ((*(volatile Ifx_MC_CONFIG0*)0xF0061900u)) /* lint --e(923)*/

/** 2, Configuration Register 1 */
#define MC9_CONFIG1 ((*(volatile Ifx_MC_CONFIG1*)0xF0061902u)) /* lint --e(923)*/

/** 10, Memory ECC Detection Register */
#define MC9_ECCD ((*(volatile Ifx_MC_ECCD*)0xF0061910u)) /* lint --e(923)*/

/** E, ECC Safety Register */
#define MC9_ECCS ((*(volatile Ifx_MC_ECCS*)0xF006190Eu)) /* lint --e(923)*/

/** 12, Error Tracking Register */
#define MC9_ETRR0 ((*(volatile Ifx_MC_ETRR*)0xF0061912u)) /* lint --e(923)*/

/** 14, Error Tracking Register */
#define MC9_ETRR1 ((*(volatile Ifx_MC_ETRR*)0xF0061914u)) /* lint --e(923)*/

/** 16, Error Tracking Register */
#define MC9_ETRR2 ((*(volatile Ifx_MC_ETRR*)0xF0061916u)) /* lint --e(923)*/

/** 18, Error Tracking Register */
#define MC9_ETRR3 ((*(volatile Ifx_MC_ETRR*)0xF0061918u)) /* lint --e(923)*/

/** 4, MBIST Control Register */
#define MC9_MCONTROL ((*(volatile Ifx_MC_MCONTROL*)0xF0061904u)) /* lint --e(923)*/

/** 6, Status Register */
#define MC9_MSTATUS ((*(volatile Ifx_MC_MSTATUS*)0xF0061906u)) /* lint --e(923)*/

/** 8, Range Register, single address mode */
#define MC9_RANGE ((*(volatile Ifx_MC_RANGE*)0xF0061908u)) /* lint --e(923)*/

/** A0, Read Data and Bit Flip Register */
#define MC9_RDBFL0 ((*(volatile Ifx_MC_RDBFL*)0xF00619A0u)) /* lint --e(923)*/

/** A2, Read Data and Bit Flip Register */
#define MC9_RDBFL1 ((*(volatile Ifx_MC_RDBFL*)0xF00619A2u)) /* lint --e(923)*/

/** B4, Read Data and Bit Flip Register */
#define MC9_RDBFL10 ((*(volatile Ifx_MC_RDBFL*)0xF00619B4u)) /* lint --e(923)*/

/** B6, Read Data and Bit Flip Register */
#define MC9_RDBFL11 ((*(volatile Ifx_MC_RDBFL*)0xF00619B6u)) /* lint --e(923)*/

/** B8, Read Data and Bit Flip Register */
#define MC9_RDBFL12 ((*(volatile Ifx_MC_RDBFL*)0xF00619B8u)) /* lint --e(923)*/

/** BA, Read Data and Bit Flip Register */
#define MC9_RDBFL13 ((*(volatile Ifx_MC_RDBFL*)0xF00619BAu)) /* lint --e(923)*/

/** BC, Read Data and Bit Flip Register */
#define MC9_RDBFL14 ((*(volatile Ifx_MC_RDBFL*)0xF00619BCu)) /* lint --e(923)*/

/** BE, Read Data and Bit Flip Register */
#define MC9_RDBFL15 ((*(volatile Ifx_MC_RDBFL*)0xF00619BEu)) /* lint --e(923)*/

/** C0, Read Data and Bit Flip Register */
#define MC9_RDBFL16 ((*(volatile Ifx_MC_RDBFL*)0xF00619C0u)) /* lint --e(923)*/

/** C2, Read Data and Bit Flip Register */
#define MC9_RDBFL17 ((*(volatile Ifx_MC_RDBFL*)0xF00619C2u)) /* lint --e(923)*/

/** C4, Read Data and Bit Flip Register */
#define MC9_RDBFL18 ((*(volatile Ifx_MC_RDBFL*)0xF00619C4u)) /* lint --e(923)*/

/** C6, Read Data and Bit Flip Register */
#define MC9_RDBFL19 ((*(volatile Ifx_MC_RDBFL*)0xF00619C6u)) /* lint --e(923)*/

/** A4, Read Data and Bit Flip Register */
#define MC9_RDBFL2 ((*(volatile Ifx_MC_RDBFL*)0xF00619A4u)) /* lint --e(923)*/

/** C8, Read Data and Bit Flip Register */
#define MC9_RDBFL20 ((*(volatile Ifx_MC_RDBFL*)0xF00619C8u)) /* lint --e(923)*/

/** CA, Read Data and Bit Flip Register */
#define MC9_RDBFL21 ((*(volatile Ifx_MC_RDBFL*)0xF00619CAu)) /* lint --e(923)*/

/** CC, Read Data and Bit Flip Register */
#define MC9_RDBFL22 ((*(volatile Ifx_MC_RDBFL*)0xF00619CCu)) /* lint --e(923)*/

/** CE, Read Data and Bit Flip Register */
#define MC9_RDBFL23 ((*(volatile Ifx_MC_RDBFL*)0xF00619CEu)) /* lint --e(923)*/

/** D0, Read Data and Bit Flip Register */
#define MC9_RDBFL24 ((*(volatile Ifx_MC_RDBFL*)0xF00619D0u)) /* lint --e(923)*/

/** D2, Read Data and Bit Flip Register */
#define MC9_RDBFL25 ((*(volatile Ifx_MC_RDBFL*)0xF00619D2u)) /* lint --e(923)*/

/** D4, Read Data and Bit Flip Register */
#define MC9_RDBFL26 ((*(volatile Ifx_MC_RDBFL*)0xF00619D4u)) /* lint --e(923)*/

/** D6, Read Data and Bit Flip Register */
#define MC9_RDBFL27 ((*(volatile Ifx_MC_RDBFL*)0xF00619D6u)) /* lint --e(923)*/

/** D8, Read Data and Bit Flip Register */
#define MC9_RDBFL28 ((*(volatile Ifx_MC_RDBFL*)0xF00619D8u)) /* lint --e(923)*/

/** DA, Read Data and Bit Flip Register */
#define MC9_RDBFL29 ((*(volatile Ifx_MC_RDBFL*)0xF00619DAu)) /* lint --e(923)*/

/** A6, Read Data and Bit Flip Register */
#define MC9_RDBFL3 ((*(volatile Ifx_MC_RDBFL*)0xF00619A6u)) /* lint --e(923)*/

/** DC, Read Data and Bit Flip Register */
#define MC9_RDBFL30 ((*(volatile Ifx_MC_RDBFL*)0xF00619DCu)) /* lint --e(923)*/

/** DE, Read Data and Bit Flip Register */
#define MC9_RDBFL31 ((*(volatile Ifx_MC_RDBFL*)0xF00619DEu)) /* lint --e(923)*/

/** E0, Read Data and Bit Flip Register */
#define MC9_RDBFL32 ((*(volatile Ifx_MC_RDBFL*)0xF00619E0u)) /* lint --e(923)*/

/** E2, Read Data and Bit Flip Register */
#define MC9_RDBFL33 ((*(volatile Ifx_MC_RDBFL*)0xF00619E2u)) /* lint --e(923)*/

/** E4, Read Data and Bit Flip Register */
#define MC9_RDBFL34 ((*(volatile Ifx_MC_RDBFL*)0xF00619E4u)) /* lint --e(923)*/

/** E6, Read Data and Bit Flip Register */
#define MC9_RDBFL35 ((*(volatile Ifx_MC_RDBFL*)0xF00619E6u)) /* lint --e(923)*/

/** E8, Read Data and Bit Flip Register */
#define MC9_RDBFL36 ((*(volatile Ifx_MC_RDBFL*)0xF00619E8u)) /* lint --e(923)*/

/** EA, Read Data and Bit Flip Register */
#define MC9_RDBFL37 ((*(volatile Ifx_MC_RDBFL*)0xF00619EAu)) /* lint --e(923)*/

/** EC, Read Data and Bit Flip Register */
#define MC9_RDBFL38 ((*(volatile Ifx_MC_RDBFL*)0xF00619ECu)) /* lint --e(923)*/

/** EE, Read Data and Bit Flip Register */
#define MC9_RDBFL39 ((*(volatile Ifx_MC_RDBFL*)0xF00619EEu)) /* lint --e(923)*/

/** A8, Read Data and Bit Flip Register */
#define MC9_RDBFL4 ((*(volatile Ifx_MC_RDBFL*)0xF00619A8u)) /* lint --e(923)*/

/** AA, Read Data and Bit Flip Register */
#define MC9_RDBFL5 ((*(volatile Ifx_MC_RDBFL*)0xF00619AAu)) /* lint --e(923)*/

/** AC, Read Data and Bit Flip Register */
#define MC9_RDBFL6 ((*(volatile Ifx_MC_RDBFL*)0xF00619ACu)) /* lint --e(923)*/

/** AE, Read Data and Bit Flip Register */
#define MC9_RDBFL7 ((*(volatile Ifx_MC_RDBFL*)0xF00619AEu)) /* lint --e(923)*/

/** B0, Read Data and Bit Flip Register */
#define MC9_RDBFL8 ((*(volatile Ifx_MC_RDBFL*)0xF00619B0u)) /* lint --e(923)*/

/** B2, Read Data and Bit Flip Register */
#define MC9_RDBFL9 ((*(volatile Ifx_MC_RDBFL*)0xF00619B2u)) /* lint --e(923)*/

/** C, Revision ID Register */
#define MC9_REVID ((*(volatile Ifx_MC_REVID*)0xF006190Cu)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXMC_REG_H */

