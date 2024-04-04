/**
 * \file IfxFlash_reg.h
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
#ifndef IFXFLASH_REG_H
#define IFXFLASH_REG_H
/******************************************************************************/
#include "Flash/IfxFlash_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** FLASH object. */
#define MODULE_FLASH0 ((*(Ifx_FLASH*)0xF8001000u)) /* lint --e(923)*/

/******************************************************************************/
/*                             Define (2-FLASH0)                              */
/******************************************************************************/

/** 13FC, Access Enable Register 0 */
#define FLASH0_ACCEN0 ((*(volatile Ifx_FLASH_ACCEN0*)0xF80023FCu)) /* lint --e(923)*/

/** 13F8, Access Enable Register 1 */
#define FLASH0_ACCEN1 ((*(volatile Ifx_FLASH_ACCEN1*)0xF80023F8u)) /* lint --e(923)*/

/** 10B4, CBAB Configuration */
#define FLASH0_CBAB0_CFG ((*(volatile Ifx_FLASH_CBAB_CFG*)0xF80020B4u)) /* lint --e(923)*/

/** 10B8, CBAB Status */
#define FLASH0_CBAB0_STAT ((*(volatile Ifx_FLASH_CBAB_STAT*)0xF80020B8u)) /* lint --e(923)*/

/** 10BC, CBAB FIFO TOP Entry */
#define FLASH0_CBAB0_TOP ((*(volatile Ifx_FLASH_CBAB_TOP*)0xF80020BCu)) /* lint --e(923)*/

/** 10C0, CBAB Configuration */
#define FLASH0_CBAB1_CFG ((*(volatile Ifx_FLASH_CBAB_CFG*)0xF80020C0u)) /* lint --e(923)*/

/** 10C4, CBAB Status */
#define FLASH0_CBAB1_STAT ((*(volatile Ifx_FLASH_CBAB_STAT*)0xF80020C4u)) /* lint --e(923)*/

/** 10C8, CBAB FIFO TOP Entry */
#define FLASH0_CBAB1_TOP ((*(volatile Ifx_FLASH_CBAB_TOP*)0xF80020C8u)) /* lint --e(923)*/

/** 10A4, ECC Read Register DF */
#define FLASH0_ECCRD ((*(volatile Ifx_FLASH_ECCRD*)0xF80020A4u)) /* lint --e(923)*/

/** 1094, ECC Read Register for ports */
#define FLASH0_ECCRP0 ((*(volatile Ifx_FLASH_ECCRP*)0xF8002094u)) /* lint --e(923)*/

/** 1098, ECC Read Register for ports */
#define FLASH0_ECCRP1 ((*(volatile Ifx_FLASH_ECCRP*)0xF8002098u)) /* lint --e(923)*/

/** 1090, ECC Write Register */
#define FLASH0_ECCW ((*(volatile Ifx_FLASH_ECCW*)0xF8002090u)) /* lint --e(923)*/

/** 1014, Flash Configuration Register */
#define FLASH0_FCON ((*(volatile Ifx_FLASH_FCON*)0xF8002014u)) /* lint --e(923)*/

/** 101C, Flash Protection Control and Status Register */
#define FLASH0_FPRO ((*(volatile Ifx_FLASH_FPRO*)0xF800201Cu)) /* lint --e(923)*/

/** 1010, Flash Status Register */
#define FLASH0_FSR ((*(volatile Ifx_FLASH_FSR*)0xF8002010u)) /* lint --e(923)*/

/** 1008, Flash Module Identification Register */
#define FLASH0_ID ((*(volatile Ifx_ID1*)0xF8002008u)) /* lint --e(923)*/

/** 10AC, Margin Control Register DFlash */
#define FLASH0_MARD ((*(volatile Ifx_FLASH_MARD*)0xF80020ACu)) /* lint --e(923)*/

/** 10A8, Margin Control Register PFlash */
#define FLASH0_MARP ((*(volatile Ifx_FLASH_MARP*)0xF80020A8u)) /* lint --e(923)*/

/** 1030, DFlash Protection Configuration */
#define FLASH0_PROCOND ((*(volatile Ifx_FLASH_PROCOND*)0xF8002030u)) /* lint --e(923)*/

/** 105C, HSM Exclusive Config. */
#define FLASH0_PROCONHSM ((*(volatile Ifx_FLASH_PROCONHSM*)0xF800205Cu)) /* lint --e(923)*/

/** 1058, HSM Code Flash Protection Configuration */
#define FLASH0_PROCONHSMC ((*(volatile Ifx_FLASH_PROCONHSMC*)0xF8002058u)) /* lint --e(923)*/

/** 1034, HSM Code Flash OTP Protection Configuration */
#define FLASH0_PROCONHSMCOTP ((*(volatile Ifx_FLASH_PROCONHSMCOTP*)0xF8002034u)) /* lint --e(923)*/

/** 1038, OTP Protection Configuration for ports */
#define FLASH0_PROCONOTP0 ((*(volatile Ifx_FLASH_PROCONOTP*)0xF8002038u)) /* lint --e(923)*/

/** 103C, OTP Protection Configuration for ports */
#define FLASH0_PROCONOTP1 ((*(volatile Ifx_FLASH_PROCONOTP*)0xF800203Cu)) /* lint --e(923)*/

/** 1020, PFlash Protection Configuration for ports */
#define FLASH0_PROCONP0 ((*(volatile Ifx_FLASH_PROCONP*)0xF8002020u)) /* lint --e(923)*/

/** 1024, PFlash Protection Configuration for ports */
#define FLASH0_PROCONP1 ((*(volatile Ifx_FLASH_PROCONP*)0xF8002024u)) /* lint --e(923)*/

/** 1048, Write-Once Protection Configuration for ports */
#define FLASH0_PROCONWOP0 ((*(volatile Ifx_FLASH_PROCONWOP*)0xF8002048u)) /* lint --e(923)*/

/** 104C, Write-Once Protection Configuration for ports */
#define FLASH0_PROCONWOP1 ((*(volatile Ifx_FLASH_PROCONWOP*)0xF800204Cu)) /* lint --e(923)*/

/** 1060, Read Buffer Cfg 0 */
#define FLASH0_RDBCFG0_CFG0 ((*(volatile Ifx_FLASH_RDB_CFG0*)0xF8002060u)) /* lint --e(923)*/

/** 1064, Read Buffer Cfg 1 */
#define FLASH0_RDBCFG0_CFG1 ((*(volatile Ifx_FLASH_RDB_CFG1*)0xF8002064u)) /* lint --e(923)*/

/** 1068, Read Buffer Cfg 2 */
#define FLASH0_RDBCFG0_CFG2 ((*(volatile Ifx_FLASH_RDB_CFG2*)0xF8002068u)) /* lint --e(923)*/

/** 106C, Read Buffer Cfg 0 */
#define FLASH0_RDBCFG1_CFG0 ((*(volatile Ifx_FLASH_RDB_CFG0*)0xF800206Cu)) /* lint --e(923)*/

/** 1070, Read Buffer Cfg 1 */
#define FLASH0_RDBCFG1_CFG1 ((*(volatile Ifx_FLASH_RDB_CFG1*)0xF8002070u)) /* lint --e(923)*/

/** 1074, Read Buffer Cfg 2 */
#define FLASH0_RDBCFG1_CFG2 ((*(volatile Ifx_FLASH_RDB_CFG2*)0xF8002074u)) /* lint --e(923)*/

/** 10E4, UBAB Configuration */
#define FLASH0_UBAB0_CFG ((*(volatile Ifx_FLASH_UBAB_CFG*)0xF80020E4u)) /* lint --e(923)*/

/** 10E8, UBAB Status */
#define FLASH0_UBAB0_STAT ((*(volatile Ifx_FLASH_UBAB_STAT*)0xF80020E8u)) /* lint --e(923)*/

/** 10EC, UBAB FIFO TOP Entry */
#define FLASH0_UBAB0_TOP ((*(volatile Ifx_FLASH_UBAB_TOP*)0xF80020ECu)) /* lint --e(923)*/

/** 10F0, UBAB Configuration */
#define FLASH0_UBAB1_CFG ((*(volatile Ifx_FLASH_UBAB_CFG*)0xF80020F0u)) /* lint --e(923)*/

/** 10F4, UBAB Status */
#define FLASH0_UBAB1_STAT ((*(volatile Ifx_FLASH_UBAB_STAT*)0xF80020F4u)) /* lint --e(923)*/

/** 10F8, UBAB FIFO TOP Entry */
#define FLASH0_UBAB1_TOP ((*(volatile Ifx_FLASH_UBAB_TOP*)0xF80020F8u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXFLASH_REG_H */

