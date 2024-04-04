/**
 * \file IfxSdma_reg.h
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
#ifndef IFXSDMA_REG_H
#define IFXSDMA_REG_H
/******************************************************************************/
#include "Sdma/IfxSdma_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** SDMA object */
#define MODULE_SDMA ((*(Ifx_SDMA*)0xF0010000u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-SDMA)                               */
/******************************************************************************/

/** Alias for SDMA_BLK0_ACCEN0.
 *  Note that this definition is obsolete, use SDMA_BLK0_ACCEN0 instead.
 * 8FC, SDMA Sub-block Access Enable Register 0
 */
#define SDMA_ACCEN00 (SDMA_BLK0_ACCEN0)

/** Alias for SDMA_BLK0_ACCEN1.
 *  Note that this definition is obsolete, use SDMA_BLK0_ACCEN1 instead.
 * 8F8, SDMA Sub-block Access Enable Register 1
 */
#define SDMA_ACCEN01 (SDMA_BLK0_ACCEN1)

/** Alias for SDMA_BLK1_ACCEN0.
 *  Note that this definition is obsolete, use SDMA_BLK1_ACCEN0 instead.
 * 18FC, SDMA Sub-block Access Enable Register 0
 */
#define SDMA_ACCEN10 (SDMA_BLK1_ACCEN0)

/** Alias for SDMA_BLK1_ACCEN1.
 *  Note that this definition is obsolete, use SDMA_BLK1_ACCEN1 instead.
 * 18F8, SDMA Sub-block Access Enable Register 1
 */
#define SDMA_ACCEN11 (SDMA_BLK1_ACCEN1)

/** 8FC, SDMA Sub-block Access Enable Register 0 */
#define SDMA_BLK0_ACCEN0 ((*(volatile Ifx_SDMA_BLK_ACCEN0*)0xF00108FCu)) /* lint --e(923)*/

/** 8F8, SDMA Sub-block Access Enable Register 1 */
#define SDMA_BLK0_ACCEN1 ((*(volatile Ifx_SDMA_BLK_ACCEN1*)0xF00108F8u)) /* lint --e(923)*/

/** 8C, SDMA Channel Address Control Register */
#define SDMA_BLK0_CH0_ADRCR ((*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001008Cu)) /* lint --e(923)*/

/** 84, SDMA Channel Control Register */
#define SDMA_BLK0_CH0_CHCR ((*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0010084u)) /* lint --e(923)*/

/** 88, SDMA Channel Interrupt Control Register */
#define SDMA_BLK0_CH0_CHICR ((*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0010088u)) /* lint --e(923)*/

/** 80, SDMA Channel Status Register */
#define SDMA_BLK0_CH0_CHSR ((*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0010080u)) /* lint --e(923)*/

/** 94, SDMA Channel Destination Address Register */
#define SDMA_BLK0_CH0_DADR ((*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0010094u)) /* lint --e(923)*/

/** 90, SDMA Channel Source Address Register */
#define SDMA_BLK0_CH0_SADR ((*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0010090u)) /* lint --e(923)*/

/** 98, SDMA Channel Shadow Address Register */
#define SDMA_BLK0_CH0_SHADR ((*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0010098u)) /* lint --e(923)*/

/** AC, SDMA Channel Address Control Register */
#define SDMA_BLK0_CH1_ADRCR ((*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF00100ACu)) /* lint --e(923)*/

/** A4, SDMA Channel Control Register */
#define SDMA_BLK0_CH1_CHCR ((*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF00100A4u)) /* lint --e(923)*/

/** A8, SDMA Channel Interrupt Control Register */
#define SDMA_BLK0_CH1_CHICR ((*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF00100A8u)) /* lint --e(923)*/

/** A0, SDMA Channel Status Register */
#define SDMA_BLK0_CH1_CHSR ((*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF00100A0u)) /* lint --e(923)*/

/** B4, SDMA Channel Destination Address Register */
#define SDMA_BLK0_CH1_DADR ((*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF00100B4u)) /* lint --e(923)*/

/** B0, SDMA Channel Source Address Register */
#define SDMA_BLK0_CH1_SADR ((*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF00100B0u)) /* lint --e(923)*/

/** B8, SDMA Channel Shadow Address Register */
#define SDMA_BLK0_CH1_SHADR ((*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF00100B8u)) /* lint --e(923)*/

/** CC, SDMA Channel Address Control Register */
#define SDMA_BLK0_CH2_ADRCR ((*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF00100CCu)) /* lint --e(923)*/

/** C4, SDMA Channel Control Register */
#define SDMA_BLK0_CH2_CHCR ((*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF00100C4u)) /* lint --e(923)*/

/** C8, SDMA Channel Interrupt Control Register */
#define SDMA_BLK0_CH2_CHICR ((*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF00100C8u)) /* lint --e(923)*/

/** C0, SDMA Channel Status Register */
#define SDMA_BLK0_CH2_CHSR ((*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF00100C0u)) /* lint --e(923)*/

/** D4, SDMA Channel Destination Address Register */
#define SDMA_BLK0_CH2_DADR ((*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF00100D4u)) /* lint --e(923)*/

/** D0, SDMA Channel Source Address Register */
#define SDMA_BLK0_CH2_SADR ((*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF00100D0u)) /* lint --e(923)*/

/** D8, SDMA Channel Shadow Address Register */
#define SDMA_BLK0_CH2_SHADR ((*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF00100D8u)) /* lint --e(923)*/

/** EC, SDMA Channel Address Control Register */
#define SDMA_BLK0_CH3_ADRCR ((*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF00100ECu)) /* lint --e(923)*/

/** E4, SDMA Channel Control Register */
#define SDMA_BLK0_CH3_CHCR ((*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF00100E4u)) /* lint --e(923)*/

/** E8, SDMA Channel Interrupt Control Register */
#define SDMA_BLK0_CH3_CHICR ((*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF00100E8u)) /* lint --e(923)*/

/** E0, SDMA Channel Status Register */
#define SDMA_BLK0_CH3_CHSR ((*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF00100E0u)) /* lint --e(923)*/

/** F4, SDMA Channel Destination Address Register */
#define SDMA_BLK0_CH3_DADR ((*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF00100F4u)) /* lint --e(923)*/

/** F0, SDMA Channel Source Address Register */
#define SDMA_BLK0_CH3_SADR ((*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF00100F0u)) /* lint --e(923)*/

/** F8, SDMA Channel Shadow Address Register */
#define SDMA_BLK0_CH3_SHADR ((*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF00100F8u)) /* lint --e(923)*/

/** 10C, SDMA Channel Address Control Register */
#define SDMA_BLK0_CH4_ADRCR ((*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001010Cu)) /* lint --e(923)*/

/** 104, SDMA Channel Control Register */
#define SDMA_BLK0_CH4_CHCR ((*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0010104u)) /* lint --e(923)*/

/** 108, SDMA Channel Interrupt Control Register */
#define SDMA_BLK0_CH4_CHICR ((*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0010108u)) /* lint --e(923)*/

/** 100, SDMA Channel Status Register */
#define SDMA_BLK0_CH4_CHSR ((*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0010100u)) /* lint --e(923)*/

/** 114, SDMA Channel Destination Address Register */
#define SDMA_BLK0_CH4_DADR ((*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0010114u)) /* lint --e(923)*/

/** 110, SDMA Channel Source Address Register */
#define SDMA_BLK0_CH4_SADR ((*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0010110u)) /* lint --e(923)*/

/** 118, SDMA Channel Shadow Address Register */
#define SDMA_BLK0_CH4_SHADR ((*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0010118u)) /* lint --e(923)*/

/** 12C, SDMA Channel Address Control Register */
#define SDMA_BLK0_CH5_ADRCR ((*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001012Cu)) /* lint --e(923)*/

/** 124, SDMA Channel Control Register */
#define SDMA_BLK0_CH5_CHCR ((*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0010124u)) /* lint --e(923)*/

/** 128, SDMA Channel Interrupt Control Register */
#define SDMA_BLK0_CH5_CHICR ((*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0010128u)) /* lint --e(923)*/

/** 120, SDMA Channel Status Register */
#define SDMA_BLK0_CH5_CHSR ((*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0010120u)) /* lint --e(923)*/

/** 134, SDMA Channel Destination Address Register */
#define SDMA_BLK0_CH5_DADR ((*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0010134u)) /* lint --e(923)*/

/** 130, SDMA Channel Source Address Register */
#define SDMA_BLK0_CH5_SADR ((*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0010130u)) /* lint --e(923)*/

/** 138, SDMA Channel Shadow Address Register */
#define SDMA_BLK0_CH5_SHADR ((*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0010138u)) /* lint --e(923)*/

/** 14C, SDMA Channel Address Control Register */
#define SDMA_BLK0_CH6_ADRCR ((*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001014Cu)) /* lint --e(923)*/

/** 144, SDMA Channel Control Register */
#define SDMA_BLK0_CH6_CHCR ((*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0010144u)) /* lint --e(923)*/

/** 148, SDMA Channel Interrupt Control Register */
#define SDMA_BLK0_CH6_CHICR ((*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0010148u)) /* lint --e(923)*/

/** 140, SDMA Channel Status Register */
#define SDMA_BLK0_CH6_CHSR ((*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0010140u)) /* lint --e(923)*/

/** 154, SDMA Channel Destination Address Register */
#define SDMA_BLK0_CH6_DADR ((*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0010154u)) /* lint --e(923)*/

/** 150, SDMA Channel Source Address Register */
#define SDMA_BLK0_CH6_SADR ((*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0010150u)) /* lint --e(923)*/

/** 158, SDMA Channel Shadow Address Register */
#define SDMA_BLK0_CH6_SHADR ((*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0010158u)) /* lint --e(923)*/

/** 16C, SDMA Channel Address Control Register */
#define SDMA_BLK0_CH7_ADRCR ((*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001016Cu)) /* lint --e(923)*/

/** 164, SDMA Channel Control Register */
#define SDMA_BLK0_CH7_CHCR ((*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0010164u)) /* lint --e(923)*/

/** 168, SDMA Channel Interrupt Control Register */
#define SDMA_BLK0_CH7_CHICR ((*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0010168u)) /* lint --e(923)*/

/** 160, SDMA Channel Status Register */
#define SDMA_BLK0_CH7_CHSR ((*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0010160u)) /* lint --e(923)*/

/** 174, SDMA Channel Destination Address Register */
#define SDMA_BLK0_CH7_DADR ((*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0010174u)) /* lint --e(923)*/

/** 170, SDMA Channel Source Address Register */
#define SDMA_BLK0_CH7_SADR ((*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0010170u)) /* lint --e(923)*/

/** 178, SDMA Channel Shadow Address Register */
#define SDMA_BLK0_CH7_SHADR ((*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0010178u)) /* lint --e(923)*/

/** 70, SDMA Channel Interrupt Set Register0 */
#define SDMA_BLK0_CHINTR0 ((*(volatile Ifx_SDMA_BLK_CHINTR0*)0xF0010070u)) /* lint --e(923)*/

/** 40, SDMA Channel Reset Request Register0 */
#define SDMA_BLK0_CHRSTR0 ((*(volatile Ifx_SDMA_BLK_CHRSTR0*)0xF0010040u)) /* lint --e(923)*/

/** 28, SDMA Clear Error Register */
#define SDMA_BLK0_CLRE ((*(volatile Ifx_SDMA_BLK_CLRE*)0xF0010028u)) /* lint --e(923)*/

/** 20, SDMA Enable Error Register */
#define SDMA_BLK0_EER ((*(volatile Ifx_SDMA_BLK_EER*)0xF0010020u)) /* lint --e(923)*/

/** 24, SDMA Error Status Register */
#define SDMA_BLK0_ERRSR ((*(volatile Ifx_SDMA_BLK_ERRSR*)0xF0010024u)) /* lint --e(923)*/

/** 38, SDMA Move Engine Interrupt Set Register */
#define SDMA_BLK0_ME_INTR ((*(volatile Ifx_SDMA_BLK_ME_INTR*)0xF0010038u)) /* lint --e(923)*/

/** 3C, SDMA Move Engine Pattern Read Register */
#define SDMA_BLK0_ME_PR ((*(volatile Ifx_SDMA_BLK_ME_PR*)0xF001003Cu)) /* lint --e(923)*/

/** 34, SDMA Move Engine Read Register */
#define SDMA_BLK0_ME_R ((*(volatile Ifx_SDMA_BLK_ME_R*)0xF0010034u)) /* lint --e(923)*/

/** 30, SDMA Move Engine Status Register */
#define SDMA_BLK0_ME_SR ((*(volatile Ifx_SDMA_BLK_ME_SR*)0xF0010030u)) /* lint --e(923)*/

/** 68, SDMA Suspend Acknowledge Register0 */
#define SDMA_BLK0_SUSACR0 ((*(volatile Ifx_SDMA_BLK_SUSACR0*)0xF0010068u)) /* lint --e(923)*/

/** 60, SDMA Suspend Enable Register0 */
#define SDMA_BLK0_SUSENR0 ((*(volatile Ifx_SDMA_BLK_SUSENR0*)0xF0010060u)) /* lint --e(923)*/

/** 18FC, SDMA Sub-block Access Enable Register 0 */
#define SDMA_BLK1_ACCEN0 ((*(volatile Ifx_SDMA_BLK_ACCEN0*)0xF00118FCu)) /* lint --e(923)*/

/** 18F8, SDMA Sub-block Access Enable Register 1 */
#define SDMA_BLK1_ACCEN1 ((*(volatile Ifx_SDMA_BLK_ACCEN1*)0xF00118F8u)) /* lint --e(923)*/

/** 108C, SDMA Channel Address Control Register */
#define SDMA_BLK1_CH0_ADRCR ((*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001108Cu)) /* lint --e(923)*/

/** 1084, SDMA Channel Control Register */
#define SDMA_BLK1_CH0_CHCR ((*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0011084u)) /* lint --e(923)*/

/** 1088, SDMA Channel Interrupt Control Register */
#define SDMA_BLK1_CH0_CHICR ((*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0011088u)) /* lint --e(923)*/

/** 1080, SDMA Channel Status Register */
#define SDMA_BLK1_CH0_CHSR ((*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0011080u)) /* lint --e(923)*/

/** 1094, SDMA Channel Destination Address Register */
#define SDMA_BLK1_CH0_DADR ((*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0011094u)) /* lint --e(923)*/

/** 1090, SDMA Channel Source Address Register */
#define SDMA_BLK1_CH0_SADR ((*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0011090u)) /* lint --e(923)*/

/** 1098, SDMA Channel Shadow Address Register */
#define SDMA_BLK1_CH0_SHADR ((*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0011098u)) /* lint --e(923)*/

/** 10AC, SDMA Channel Address Control Register */
#define SDMA_BLK1_CH1_ADRCR ((*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF00110ACu)) /* lint --e(923)*/

/** 10A4, SDMA Channel Control Register */
#define SDMA_BLK1_CH1_CHCR ((*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF00110A4u)) /* lint --e(923)*/

/** 10A8, SDMA Channel Interrupt Control Register */
#define SDMA_BLK1_CH1_CHICR ((*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF00110A8u)) /* lint --e(923)*/

/** 10A0, SDMA Channel Status Register */
#define SDMA_BLK1_CH1_CHSR ((*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF00110A0u)) /* lint --e(923)*/

/** 10B4, SDMA Channel Destination Address Register */
#define SDMA_BLK1_CH1_DADR ((*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF00110B4u)) /* lint --e(923)*/

/** 10B0, SDMA Channel Source Address Register */
#define SDMA_BLK1_CH1_SADR ((*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF00110B0u)) /* lint --e(923)*/

/** 10B8, SDMA Channel Shadow Address Register */
#define SDMA_BLK1_CH1_SHADR ((*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF00110B8u)) /* lint --e(923)*/

/** 10CC, SDMA Channel Address Control Register */
#define SDMA_BLK1_CH2_ADRCR ((*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF00110CCu)) /* lint --e(923)*/

/** 10C4, SDMA Channel Control Register */
#define SDMA_BLK1_CH2_CHCR ((*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF00110C4u)) /* lint --e(923)*/

/** 10C8, SDMA Channel Interrupt Control Register */
#define SDMA_BLK1_CH2_CHICR ((*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF00110C8u)) /* lint --e(923)*/

/** 10C0, SDMA Channel Status Register */
#define SDMA_BLK1_CH2_CHSR ((*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF00110C0u)) /* lint --e(923)*/

/** 10D4, SDMA Channel Destination Address Register */
#define SDMA_BLK1_CH2_DADR ((*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF00110D4u)) /* lint --e(923)*/

/** 10D0, SDMA Channel Source Address Register */
#define SDMA_BLK1_CH2_SADR ((*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF00110D0u)) /* lint --e(923)*/

/** 10D8, SDMA Channel Shadow Address Register */
#define SDMA_BLK1_CH2_SHADR ((*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF00110D8u)) /* lint --e(923)*/

/** 10EC, SDMA Channel Address Control Register */
#define SDMA_BLK1_CH3_ADRCR ((*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF00110ECu)) /* lint --e(923)*/

/** 10E4, SDMA Channel Control Register */
#define SDMA_BLK1_CH3_CHCR ((*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF00110E4u)) /* lint --e(923)*/

/** 10E8, SDMA Channel Interrupt Control Register */
#define SDMA_BLK1_CH3_CHICR ((*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF00110E8u)) /* lint --e(923)*/

/** 10E0, SDMA Channel Status Register */
#define SDMA_BLK1_CH3_CHSR ((*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF00110E0u)) /* lint --e(923)*/

/** 10F4, SDMA Channel Destination Address Register */
#define SDMA_BLK1_CH3_DADR ((*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF00110F4u)) /* lint --e(923)*/

/** 10F0, SDMA Channel Source Address Register */
#define SDMA_BLK1_CH3_SADR ((*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF00110F0u)) /* lint --e(923)*/

/** 10F8, SDMA Channel Shadow Address Register */
#define SDMA_BLK1_CH3_SHADR ((*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF00110F8u)) /* lint --e(923)*/

/** 110C, SDMA Channel Address Control Register */
#define SDMA_BLK1_CH4_ADRCR ((*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001110Cu)) /* lint --e(923)*/

/** 1104, SDMA Channel Control Register */
#define SDMA_BLK1_CH4_CHCR ((*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0011104u)) /* lint --e(923)*/

/** 1108, SDMA Channel Interrupt Control Register */
#define SDMA_BLK1_CH4_CHICR ((*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0011108u)) /* lint --e(923)*/

/** 1100, SDMA Channel Status Register */
#define SDMA_BLK1_CH4_CHSR ((*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0011100u)) /* lint --e(923)*/

/** 1114, SDMA Channel Destination Address Register */
#define SDMA_BLK1_CH4_DADR ((*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0011114u)) /* lint --e(923)*/

/** 1110, SDMA Channel Source Address Register */
#define SDMA_BLK1_CH4_SADR ((*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0011110u)) /* lint --e(923)*/

/** 1118, SDMA Channel Shadow Address Register */
#define SDMA_BLK1_CH4_SHADR ((*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0011118u)) /* lint --e(923)*/

/** 112C, SDMA Channel Address Control Register */
#define SDMA_BLK1_CH5_ADRCR ((*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001112Cu)) /* lint --e(923)*/

/** 1124, SDMA Channel Control Register */
#define SDMA_BLK1_CH5_CHCR ((*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0011124u)) /* lint --e(923)*/

/** 1128, SDMA Channel Interrupt Control Register */
#define SDMA_BLK1_CH5_CHICR ((*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0011128u)) /* lint --e(923)*/

/** 1120, SDMA Channel Status Register */
#define SDMA_BLK1_CH5_CHSR ((*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0011120u)) /* lint --e(923)*/

/** 1134, SDMA Channel Destination Address Register */
#define SDMA_BLK1_CH5_DADR ((*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0011134u)) /* lint --e(923)*/

/** 1130, SDMA Channel Source Address Register */
#define SDMA_BLK1_CH5_SADR ((*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0011130u)) /* lint --e(923)*/

/** 1138, SDMA Channel Shadow Address Register */
#define SDMA_BLK1_CH5_SHADR ((*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0011138u)) /* lint --e(923)*/

/** 114C, SDMA Channel Address Control Register */
#define SDMA_BLK1_CH6_ADRCR ((*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001114Cu)) /* lint --e(923)*/

/** 1144, SDMA Channel Control Register */
#define SDMA_BLK1_CH6_CHCR ((*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0011144u)) /* lint --e(923)*/

/** 1148, SDMA Channel Interrupt Control Register */
#define SDMA_BLK1_CH6_CHICR ((*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0011148u)) /* lint --e(923)*/

/** 1140, SDMA Channel Status Register */
#define SDMA_BLK1_CH6_CHSR ((*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0011140u)) /* lint --e(923)*/

/** 1154, SDMA Channel Destination Address Register */
#define SDMA_BLK1_CH6_DADR ((*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0011154u)) /* lint --e(923)*/

/** 1150, SDMA Channel Source Address Register */
#define SDMA_BLK1_CH6_SADR ((*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0011150u)) /* lint --e(923)*/

/** 1158, SDMA Channel Shadow Address Register */
#define SDMA_BLK1_CH6_SHADR ((*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0011158u)) /* lint --e(923)*/

/** 116C, SDMA Channel Address Control Register */
#define SDMA_BLK1_CH7_ADRCR ((*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001116Cu)) /* lint --e(923)*/

/** 1164, SDMA Channel Control Register */
#define SDMA_BLK1_CH7_CHCR ((*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0011164u)) /* lint --e(923)*/

/** 1168, SDMA Channel Interrupt Control Register */
#define SDMA_BLK1_CH7_CHICR ((*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0011168u)) /* lint --e(923)*/

/** 1160, SDMA Channel Status Register */
#define SDMA_BLK1_CH7_CHSR ((*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0011160u)) /* lint --e(923)*/

/** 1174, SDMA Channel Destination Address Register */
#define SDMA_BLK1_CH7_DADR ((*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0011174u)) /* lint --e(923)*/

/** 1170, SDMA Channel Source Address Register */
#define SDMA_BLK1_CH7_SADR ((*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0011170u)) /* lint --e(923)*/

/** 1178, SDMA Channel Shadow Address Register */
#define SDMA_BLK1_CH7_SHADR ((*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0011178u)) /* lint --e(923)*/

/** 1070, SDMA Channel Interrupt Set Register0 */
#define SDMA_BLK1_CHINTR0 ((*(volatile Ifx_SDMA_BLK_CHINTR0*)0xF0011070u)) /* lint --e(923)*/

/** 1040, SDMA Channel Reset Request Register0 */
#define SDMA_BLK1_CHRSTR0 ((*(volatile Ifx_SDMA_BLK_CHRSTR0*)0xF0011040u)) /* lint --e(923)*/

/** 1028, SDMA Clear Error Register */
#define SDMA_BLK1_CLRE ((*(volatile Ifx_SDMA_BLK_CLRE*)0xF0011028u)) /* lint --e(923)*/

/** 1020, SDMA Enable Error Register */
#define SDMA_BLK1_EER ((*(volatile Ifx_SDMA_BLK_EER*)0xF0011020u)) /* lint --e(923)*/

/** 1024, SDMA Error Status Register */
#define SDMA_BLK1_ERRSR ((*(volatile Ifx_SDMA_BLK_ERRSR*)0xF0011024u)) /* lint --e(923)*/

/** 1038, SDMA Move Engine Interrupt Set Register */
#define SDMA_BLK1_ME_INTR ((*(volatile Ifx_SDMA_BLK_ME_INTR*)0xF0011038u)) /* lint --e(923)*/

/** 103C, SDMA Move Engine Pattern Read Register */
#define SDMA_BLK1_ME_PR ((*(volatile Ifx_SDMA_BLK_ME_PR*)0xF001103Cu)) /* lint --e(923)*/

/** 1034, SDMA Move Engine Read Register */
#define SDMA_BLK1_ME_R ((*(volatile Ifx_SDMA_BLK_ME_R*)0xF0011034u)) /* lint --e(923)*/

/** 1030, SDMA Move Engine Status Register */
#define SDMA_BLK1_ME_SR ((*(volatile Ifx_SDMA_BLK_ME_SR*)0xF0011030u)) /* lint --e(923)*/

/** 1068, SDMA Suspend Acknowledge Register0 */
#define SDMA_BLK1_SUSACR0 ((*(volatile Ifx_SDMA_BLK_SUSACR0*)0xF0011068u)) /* lint --e(923)*/

/** 1060, SDMA Suspend Enable Register0 */
#define SDMA_BLK1_SUSENR0 ((*(volatile Ifx_SDMA_BLK_SUSENR0*)0xF0011060u)) /* lint --e(923)*/

/** Alias for SDMA_BLK0_CH0_ADRCR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH0_ADRCR instead.
 * 8C, SDMA Channel Address Control Register
 */
#define SDMA_CH00_ADRCR (SDMA_BLK0_CH0_ADRCR)

/** Alias for SDMA_BLK0_CH0_CHCR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH0_CHCR instead.
 * 84, SDMA Channel Control Register
 */
#define SDMA_CH00_CHCR (SDMA_BLK0_CH0_CHCR)

/** Alias for SDMA_BLK0_CH0_CHICR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH0_CHICR instead.
 * 88, SDMA Channel Interrupt Control Register
 */
#define SDMA_CH00_CHICR (SDMA_BLK0_CH0_CHICR)

/** Alias for SDMA_BLK0_CH0_CHSR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH0_CHSR instead.
 * 80, SDMA Channel Status Register
 */
#define SDMA_CH00_CHSR (SDMA_BLK0_CH0_CHSR)

/** Alias for SDMA_BLK0_CH0_DADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH0_DADR instead.
 * 94, SDMA Channel Destination Address Register
 */
#define SDMA_CH00_DADR (SDMA_BLK0_CH0_DADR)

/** Alias for SDMA_BLK0_CH0_SADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH0_SADR instead.
 * 90, SDMA Channel Source Address Register
 */
#define SDMA_CH00_SADR (SDMA_BLK0_CH0_SADR)

/** Alias for SDMA_BLK0_CH0_SHADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH0_SHADR instead.
 * 98, SDMA Channel Shadow Address Register
 */
#define SDMA_CH00_SHADR (SDMA_BLK0_CH0_SHADR)

/** Alias for SDMA_BLK0_CH1_ADRCR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH1_ADRCR instead.
 * AC, SDMA Channel Address Control Register
 */
#define SDMA_CH01_ADRCR (SDMA_BLK0_CH1_ADRCR)

/** Alias for SDMA_BLK0_CH1_CHCR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH1_CHCR instead.
 * A4, SDMA Channel Control Register
 */
#define SDMA_CH01_CHCR (SDMA_BLK0_CH1_CHCR)

/** Alias for SDMA_BLK0_CH1_CHICR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH1_CHICR instead.
 * A8, SDMA Channel Interrupt Control Register
 */
#define SDMA_CH01_CHICR (SDMA_BLK0_CH1_CHICR)

/** Alias for SDMA_BLK0_CH1_CHSR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH1_CHSR instead.
 * A0, SDMA Channel Status Register
 */
#define SDMA_CH01_CHSR (SDMA_BLK0_CH1_CHSR)

/** Alias for SDMA_BLK0_CH1_DADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH1_DADR instead.
 * B4, SDMA Channel Destination Address Register
 */
#define SDMA_CH01_DADR (SDMA_BLK0_CH1_DADR)

/** Alias for SDMA_BLK0_CH1_SADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH1_SADR instead.
 * B0, SDMA Channel Source Address Register
 */
#define SDMA_CH01_SADR (SDMA_BLK0_CH1_SADR)

/** Alias for SDMA_BLK0_CH1_SHADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH1_SHADR instead.
 * B8, SDMA Channel Shadow Address Register
 */
#define SDMA_CH01_SHADR (SDMA_BLK0_CH1_SHADR)

/** Alias for SDMA_BLK0_CH2_ADRCR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH2_ADRCR instead.
 * CC, SDMA Channel Address Control Register
 */
#define SDMA_CH02_ADRCR (SDMA_BLK0_CH2_ADRCR)

/** Alias for SDMA_BLK0_CH2_CHCR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH2_CHCR instead.
 * C4, SDMA Channel Control Register
 */
#define SDMA_CH02_CHCR (SDMA_BLK0_CH2_CHCR)

/** Alias for SDMA_BLK0_CH2_CHICR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH2_CHICR instead.
 * C8, SDMA Channel Interrupt Control Register
 */
#define SDMA_CH02_CHICR (SDMA_BLK0_CH2_CHICR)

/** Alias for SDMA_BLK0_CH2_CHSR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH2_CHSR instead.
 * C0, SDMA Channel Status Register
 */
#define SDMA_CH02_CHSR (SDMA_BLK0_CH2_CHSR)

/** Alias for SDMA_BLK0_CH2_DADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH2_DADR instead.
 * D4, SDMA Channel Destination Address Register
 */
#define SDMA_CH02_DADR (SDMA_BLK0_CH2_DADR)

/** Alias for SDMA_BLK0_CH2_SADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH2_SADR instead.
 * D0, SDMA Channel Source Address Register
 */
#define SDMA_CH02_SADR (SDMA_BLK0_CH2_SADR)

/** Alias for SDMA_BLK0_CH2_SHADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH2_SHADR instead.
 * D8, SDMA Channel Shadow Address Register
 */
#define SDMA_CH02_SHADR (SDMA_BLK0_CH2_SHADR)

/** Alias for SDMA_BLK0_CH3_ADRCR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH3_ADRCR instead.
 * EC, SDMA Channel Address Control Register
 */
#define SDMA_CH03_ADRCR (SDMA_BLK0_CH3_ADRCR)

/** Alias for SDMA_BLK0_CH3_CHCR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH3_CHCR instead.
 * E4, SDMA Channel Control Register
 */
#define SDMA_CH03_CHCR (SDMA_BLK0_CH3_CHCR)

/** Alias for SDMA_BLK0_CH3_CHICR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH3_CHICR instead.
 * E8, SDMA Channel Interrupt Control Register
 */
#define SDMA_CH03_CHICR (SDMA_BLK0_CH3_CHICR)

/** Alias for SDMA_BLK0_CH3_CHSR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH3_CHSR instead.
 * E0, SDMA Channel Status Register
 */
#define SDMA_CH03_CHSR (SDMA_BLK0_CH3_CHSR)

/** Alias for SDMA_BLK0_CH3_DADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH3_DADR instead.
 * F4, SDMA Channel Destination Address Register
 */
#define SDMA_CH03_DADR (SDMA_BLK0_CH3_DADR)

/** Alias for SDMA_BLK0_CH3_SADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH3_SADR instead.
 * F0, SDMA Channel Source Address Register
 */
#define SDMA_CH03_SADR (SDMA_BLK0_CH3_SADR)

/** Alias for SDMA_BLK0_CH3_SHADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH3_SHADR instead.
 * F8, SDMA Channel Shadow Address Register
 */
#define SDMA_CH03_SHADR (SDMA_BLK0_CH3_SHADR)

/** Alias for SDMA_BLK0_CH4_ADRCR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH4_ADRCR instead.
 * 10C, SDMA Channel Address Control Register
 */
#define SDMA_CH04_ADRCR (SDMA_BLK0_CH4_ADRCR)

/** Alias for SDMA_BLK0_CH4_CHCR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH4_CHCR instead.
 * 104, SDMA Channel Control Register
 */
#define SDMA_CH04_CHCR (SDMA_BLK0_CH4_CHCR)

/** Alias for SDMA_BLK0_CH4_CHICR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH4_CHICR instead.
 * 108, SDMA Channel Interrupt Control Register
 */
#define SDMA_CH04_CHICR (SDMA_BLK0_CH4_CHICR)

/** Alias for SDMA_BLK0_CH4_CHSR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH4_CHSR instead.
 * 100, SDMA Channel Status Register
 */
#define SDMA_CH04_CHSR (SDMA_BLK0_CH4_CHSR)

/** Alias for SDMA_BLK0_CH4_DADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH4_DADR instead.
 * 114, SDMA Channel Destination Address Register
 */
#define SDMA_CH04_DADR (SDMA_BLK0_CH4_DADR)

/** Alias for SDMA_BLK0_CH4_SADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH4_SADR instead.
 * 110, SDMA Channel Source Address Register
 */
#define SDMA_CH04_SADR (SDMA_BLK0_CH4_SADR)

/** Alias for SDMA_BLK0_CH4_SHADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH4_SHADR instead.
 * 118, SDMA Channel Shadow Address Register
 */
#define SDMA_CH04_SHADR (SDMA_BLK0_CH4_SHADR)

/** Alias for SDMA_BLK0_CH5_ADRCR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH5_ADRCR instead.
 * 12C, SDMA Channel Address Control Register
 */
#define SDMA_CH05_ADRCR (SDMA_BLK0_CH5_ADRCR)

/** Alias for SDMA_BLK0_CH5_CHCR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH5_CHCR instead.
 * 124, SDMA Channel Control Register
 */
#define SDMA_CH05_CHCR (SDMA_BLK0_CH5_CHCR)

/** Alias for SDMA_BLK0_CH5_CHICR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH5_CHICR instead.
 * 128, SDMA Channel Interrupt Control Register
 */
#define SDMA_CH05_CHICR (SDMA_BLK0_CH5_CHICR)

/** Alias for SDMA_BLK0_CH5_CHSR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH5_CHSR instead.
 * 120, SDMA Channel Status Register
 */
#define SDMA_CH05_CHSR (SDMA_BLK0_CH5_CHSR)

/** Alias for SDMA_BLK0_CH5_DADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH5_DADR instead.
 * 134, SDMA Channel Destination Address Register
 */
#define SDMA_CH05_DADR (SDMA_BLK0_CH5_DADR)

/** Alias for SDMA_BLK0_CH5_SADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH5_SADR instead.
 * 130, SDMA Channel Source Address Register
 */
#define SDMA_CH05_SADR (SDMA_BLK0_CH5_SADR)

/** Alias for SDMA_BLK0_CH5_SHADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH5_SHADR instead.
 * 138, SDMA Channel Shadow Address Register
 */
#define SDMA_CH05_SHADR (SDMA_BLK0_CH5_SHADR)

/** Alias for SDMA_BLK0_CH6_ADRCR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH6_ADRCR instead.
 * 14C, SDMA Channel Address Control Register
 */
#define SDMA_CH06_ADRCR (SDMA_BLK0_CH6_ADRCR)

/** Alias for SDMA_BLK0_CH6_CHCR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH6_CHCR instead.
 * 144, SDMA Channel Control Register
 */
#define SDMA_CH06_CHCR (SDMA_BLK0_CH6_CHCR)

/** Alias for SDMA_BLK0_CH6_CHICR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH6_CHICR instead.
 * 148, SDMA Channel Interrupt Control Register
 */
#define SDMA_CH06_CHICR (SDMA_BLK0_CH6_CHICR)

/** Alias for SDMA_BLK0_CH6_CHSR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH6_CHSR instead.
 * 140, SDMA Channel Status Register
 */
#define SDMA_CH06_CHSR (SDMA_BLK0_CH6_CHSR)

/** Alias for SDMA_BLK0_CH6_DADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH6_DADR instead.
 * 154, SDMA Channel Destination Address Register
 */
#define SDMA_CH06_DADR (SDMA_BLK0_CH6_DADR)

/** Alias for SDMA_BLK0_CH6_SADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH6_SADR instead.
 * 150, SDMA Channel Source Address Register
 */
#define SDMA_CH06_SADR (SDMA_BLK0_CH6_SADR)

/** Alias for SDMA_BLK0_CH6_SHADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH6_SHADR instead.
 * 158, SDMA Channel Shadow Address Register
 */
#define SDMA_CH06_SHADR (SDMA_BLK0_CH6_SHADR)

/** Alias for SDMA_BLK0_CH7_ADRCR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH7_ADRCR instead.
 * 16C, SDMA Channel Address Control Register
 */
#define SDMA_CH07_ADRCR (SDMA_BLK0_CH7_ADRCR)

/** Alias for SDMA_BLK0_CH7_CHCR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH7_CHCR instead.
 * 164, SDMA Channel Control Register
 */
#define SDMA_CH07_CHCR (SDMA_BLK0_CH7_CHCR)

/** Alias for SDMA_BLK0_CH7_CHICR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH7_CHICR instead.
 * 168, SDMA Channel Interrupt Control Register
 */
#define SDMA_CH07_CHICR (SDMA_BLK0_CH7_CHICR)

/** Alias for SDMA_BLK0_CH7_CHSR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH7_CHSR instead.
 * 160, SDMA Channel Status Register
 */
#define SDMA_CH07_CHSR (SDMA_BLK0_CH7_CHSR)

/** Alias for SDMA_BLK0_CH7_DADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH7_DADR instead.
 * 174, SDMA Channel Destination Address Register
 */
#define SDMA_CH07_DADR (SDMA_BLK0_CH7_DADR)

/** Alias for SDMA_BLK0_CH7_SADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH7_SADR instead.
 * 170, SDMA Channel Source Address Register
 */
#define SDMA_CH07_SADR (SDMA_BLK0_CH7_SADR)

/** Alias for SDMA_BLK0_CH7_SHADR.
 *  Note that this definition is obsolete, use SDMA_BLK0_CH7_SHADR instead.
 * 178, SDMA Channel Shadow Address Register
 */
#define SDMA_CH07_SHADR (SDMA_BLK0_CH7_SHADR)

/** Alias for SDMA_BLK1_CH0_ADRCR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH0_ADRCR instead.
 * 108C, SDMA Channel Address Control Register
 */
#define SDMA_CH10_ADRCR (SDMA_BLK1_CH0_ADRCR)

/** Alias for SDMA_BLK1_CH0_CHCR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH0_CHCR instead.
 * 1084, SDMA Channel Control Register
 */
#define SDMA_CH10_CHCR (SDMA_BLK1_CH0_CHCR)

/** Alias for SDMA_BLK1_CH0_CHICR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH0_CHICR instead.
 * 1088, SDMA Channel Interrupt Control Register
 */
#define SDMA_CH10_CHICR (SDMA_BLK1_CH0_CHICR)

/** Alias for SDMA_BLK1_CH0_CHSR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH0_CHSR instead.
 * 1080, SDMA Channel Status Register
 */
#define SDMA_CH10_CHSR (SDMA_BLK1_CH0_CHSR)

/** Alias for SDMA_BLK1_CH0_DADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH0_DADR instead.
 * 1094, SDMA Channel Destination Address Register
 */
#define SDMA_CH10_DADR (SDMA_BLK1_CH0_DADR)

/** Alias for SDMA_BLK1_CH0_SADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH0_SADR instead.
 * 1090, SDMA Channel Source Address Register
 */
#define SDMA_CH10_SADR (SDMA_BLK1_CH0_SADR)

/** Alias for SDMA_BLK1_CH0_SHADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH0_SHADR instead.
 * 1098, SDMA Channel Shadow Address Register
 */
#define SDMA_CH10_SHADR (SDMA_BLK1_CH0_SHADR)

/** Alias for SDMA_BLK1_CH1_ADRCR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH1_ADRCR instead.
 * 10AC, SDMA Channel Address Control Register
 */
#define SDMA_CH11_ADRCR (SDMA_BLK1_CH1_ADRCR)

/** Alias for SDMA_BLK1_CH1_CHCR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH1_CHCR instead.
 * 10A4, SDMA Channel Control Register
 */
#define SDMA_CH11_CHCR (SDMA_BLK1_CH1_CHCR)

/** Alias for SDMA_BLK1_CH1_CHICR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH1_CHICR instead.
 * 10A8, SDMA Channel Interrupt Control Register
 */
#define SDMA_CH11_CHICR (SDMA_BLK1_CH1_CHICR)

/** Alias for SDMA_BLK1_CH1_CHSR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH1_CHSR instead.
 * 10A0, SDMA Channel Status Register
 */
#define SDMA_CH11_CHSR (SDMA_BLK1_CH1_CHSR)

/** Alias for SDMA_BLK1_CH1_DADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH1_DADR instead.
 * 10B4, SDMA Channel Destination Address Register
 */
#define SDMA_CH11_DADR (SDMA_BLK1_CH1_DADR)

/** Alias for SDMA_BLK1_CH1_SADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH1_SADR instead.
 * 10B0, SDMA Channel Source Address Register
 */
#define SDMA_CH11_SADR (SDMA_BLK1_CH1_SADR)

/** Alias for SDMA_BLK1_CH1_SHADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH1_SHADR instead.
 * 10B8, SDMA Channel Shadow Address Register
 */
#define SDMA_CH11_SHADR (SDMA_BLK1_CH1_SHADR)

/** Alias for SDMA_BLK1_CH2_ADRCR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH2_ADRCR instead.
 * 10CC, SDMA Channel Address Control Register
 */
#define SDMA_CH12_ADRCR (SDMA_BLK1_CH2_ADRCR)

/** Alias for SDMA_BLK1_CH2_CHCR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH2_CHCR instead.
 * 10C4, SDMA Channel Control Register
 */
#define SDMA_CH12_CHCR (SDMA_BLK1_CH2_CHCR)

/** Alias for SDMA_BLK1_CH2_CHICR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH2_CHICR instead.
 * 10C8, SDMA Channel Interrupt Control Register
 */
#define SDMA_CH12_CHICR (SDMA_BLK1_CH2_CHICR)

/** Alias for SDMA_BLK1_CH2_CHSR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH2_CHSR instead.
 * 10C0, SDMA Channel Status Register
 */
#define SDMA_CH12_CHSR (SDMA_BLK1_CH2_CHSR)

/** Alias for SDMA_BLK1_CH2_DADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH2_DADR instead.
 * 10D4, SDMA Channel Destination Address Register
 */
#define SDMA_CH12_DADR (SDMA_BLK1_CH2_DADR)

/** Alias for SDMA_BLK1_CH2_SADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH2_SADR instead.
 * 10D0, SDMA Channel Source Address Register
 */
#define SDMA_CH12_SADR (SDMA_BLK1_CH2_SADR)

/** Alias for SDMA_BLK1_CH2_SHADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH2_SHADR instead.
 * 10D8, SDMA Channel Shadow Address Register
 */
#define SDMA_CH12_SHADR (SDMA_BLK1_CH2_SHADR)

/** Alias for SDMA_BLK1_CH3_ADRCR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH3_ADRCR instead.
 * 10EC, SDMA Channel Address Control Register
 */
#define SDMA_CH13_ADRCR (SDMA_BLK1_CH3_ADRCR)

/** Alias for SDMA_BLK1_CH3_CHCR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH3_CHCR instead.
 * 10E4, SDMA Channel Control Register
 */
#define SDMA_CH13_CHCR (SDMA_BLK1_CH3_CHCR)

/** Alias for SDMA_BLK1_CH3_CHICR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH3_CHICR instead.
 * 10E8, SDMA Channel Interrupt Control Register
 */
#define SDMA_CH13_CHICR (SDMA_BLK1_CH3_CHICR)

/** Alias for SDMA_BLK1_CH3_CHSR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH3_CHSR instead.
 * 10E0, SDMA Channel Status Register
 */
#define SDMA_CH13_CHSR (SDMA_BLK1_CH3_CHSR)

/** Alias for SDMA_BLK1_CH3_DADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH3_DADR instead.
 * 10F4, SDMA Channel Destination Address Register
 */
#define SDMA_CH13_DADR (SDMA_BLK1_CH3_DADR)

/** Alias for SDMA_BLK1_CH3_SADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH3_SADR instead.
 * 10F0, SDMA Channel Source Address Register
 */
#define SDMA_CH13_SADR (SDMA_BLK1_CH3_SADR)

/** Alias for SDMA_BLK1_CH3_SHADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH3_SHADR instead.
 * 10F8, SDMA Channel Shadow Address Register
 */
#define SDMA_CH13_SHADR (SDMA_BLK1_CH3_SHADR)

/** Alias for SDMA_BLK1_CH4_ADRCR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH4_ADRCR instead.
 * 110C, SDMA Channel Address Control Register
 */
#define SDMA_CH14_ADRCR (SDMA_BLK1_CH4_ADRCR)

/** Alias for SDMA_BLK1_CH4_CHCR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH4_CHCR instead.
 * 1104, SDMA Channel Control Register
 */
#define SDMA_CH14_CHCR (SDMA_BLK1_CH4_CHCR)

/** Alias for SDMA_BLK1_CH4_CHICR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH4_CHICR instead.
 * 1108, SDMA Channel Interrupt Control Register
 */
#define SDMA_CH14_CHICR (SDMA_BLK1_CH4_CHICR)

/** Alias for SDMA_BLK1_CH4_CHSR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH4_CHSR instead.
 * 1100, SDMA Channel Status Register
 */
#define SDMA_CH14_CHSR (SDMA_BLK1_CH4_CHSR)

/** Alias for SDMA_BLK1_CH4_DADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH4_DADR instead.
 * 1114, SDMA Channel Destination Address Register
 */
#define SDMA_CH14_DADR (SDMA_BLK1_CH4_DADR)

/** Alias for SDMA_BLK1_CH4_SADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH4_SADR instead.
 * 1110, SDMA Channel Source Address Register
 */
#define SDMA_CH14_SADR (SDMA_BLK1_CH4_SADR)

/** Alias for SDMA_BLK1_CH4_SHADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH4_SHADR instead.
 * 1118, SDMA Channel Shadow Address Register
 */
#define SDMA_CH14_SHADR (SDMA_BLK1_CH4_SHADR)

/** Alias for SDMA_BLK1_CH5_ADRCR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH5_ADRCR instead.
 * 112C, SDMA Channel Address Control Register
 */
#define SDMA_CH15_ADRCR (SDMA_BLK1_CH5_ADRCR)

/** Alias for SDMA_BLK1_CH5_CHCR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH5_CHCR instead.
 * 1124, SDMA Channel Control Register
 */
#define SDMA_CH15_CHCR (SDMA_BLK1_CH5_CHCR)

/** Alias for SDMA_BLK1_CH5_CHICR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH5_CHICR instead.
 * 1128, SDMA Channel Interrupt Control Register
 */
#define SDMA_CH15_CHICR (SDMA_BLK1_CH5_CHICR)

/** Alias for SDMA_BLK1_CH5_CHSR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH5_CHSR instead.
 * 1120, SDMA Channel Status Register
 */
#define SDMA_CH15_CHSR (SDMA_BLK1_CH5_CHSR)

/** Alias for SDMA_BLK1_CH5_DADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH5_DADR instead.
 * 1134, SDMA Channel Destination Address Register
 */
#define SDMA_CH15_DADR (SDMA_BLK1_CH5_DADR)

/** Alias for SDMA_BLK1_CH5_SADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH5_SADR instead.
 * 1130, SDMA Channel Source Address Register
 */
#define SDMA_CH15_SADR (SDMA_BLK1_CH5_SADR)

/** Alias for SDMA_BLK1_CH5_SHADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH5_SHADR instead.
 * 1138, SDMA Channel Shadow Address Register
 */
#define SDMA_CH15_SHADR (SDMA_BLK1_CH5_SHADR)

/** Alias for SDMA_BLK1_CH6_ADRCR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH6_ADRCR instead.
 * 114C, SDMA Channel Address Control Register
 */
#define SDMA_CH16_ADRCR (SDMA_BLK1_CH6_ADRCR)

/** Alias for SDMA_BLK1_CH6_CHCR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH6_CHCR instead.
 * 1144, SDMA Channel Control Register
 */
#define SDMA_CH16_CHCR (SDMA_BLK1_CH6_CHCR)

/** Alias for SDMA_BLK1_CH6_CHICR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH6_CHICR instead.
 * 1148, SDMA Channel Interrupt Control Register
 */
#define SDMA_CH16_CHICR (SDMA_BLK1_CH6_CHICR)

/** Alias for SDMA_BLK1_CH6_CHSR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH6_CHSR instead.
 * 1140, SDMA Channel Status Register
 */
#define SDMA_CH16_CHSR (SDMA_BLK1_CH6_CHSR)

/** Alias for SDMA_BLK1_CH6_DADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH6_DADR instead.
 * 1154, SDMA Channel Destination Address Register
 */
#define SDMA_CH16_DADR (SDMA_BLK1_CH6_DADR)

/** Alias for SDMA_BLK1_CH6_SADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH6_SADR instead.
 * 1150, SDMA Channel Source Address Register
 */
#define SDMA_CH16_SADR (SDMA_BLK1_CH6_SADR)

/** Alias for SDMA_BLK1_CH6_SHADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH6_SHADR instead.
 * 1158, SDMA Channel Shadow Address Register
 */
#define SDMA_CH16_SHADR (SDMA_BLK1_CH6_SHADR)

/** Alias for SDMA_BLK1_CH7_ADRCR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH7_ADRCR instead.
 * 116C, SDMA Channel Address Control Register
 */
#define SDMA_CH17_ADRCR (SDMA_BLK1_CH7_ADRCR)

/** Alias for SDMA_BLK1_CH7_CHCR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH7_CHCR instead.
 * 1164, SDMA Channel Control Register
 */
#define SDMA_CH17_CHCR (SDMA_BLK1_CH7_CHCR)

/** Alias for SDMA_BLK1_CH7_CHICR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH7_CHICR instead.
 * 1168, SDMA Channel Interrupt Control Register
 */
#define SDMA_CH17_CHICR (SDMA_BLK1_CH7_CHICR)

/** Alias for SDMA_BLK1_CH7_CHSR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH7_CHSR instead.
 * 1160, SDMA Channel Status Register
 */
#define SDMA_CH17_CHSR (SDMA_BLK1_CH7_CHSR)

/** Alias for SDMA_BLK1_CH7_DADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH7_DADR instead.
 * 1174, SDMA Channel Destination Address Register
 */
#define SDMA_CH17_DADR (SDMA_BLK1_CH7_DADR)

/** Alias for SDMA_BLK1_CH7_SADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH7_SADR instead.
 * 1170, SDMA Channel Source Address Register
 */
#define SDMA_CH17_SADR (SDMA_BLK1_CH7_SADR)

/** Alias for SDMA_BLK1_CH7_SHADR.
 *  Note that this definition is obsolete, use SDMA_BLK1_CH7_SHADR instead.
 * 1178, SDMA Channel Shadow Address Register
 */
#define SDMA_CH17_SHADR (SDMA_BLK1_CH7_SHADR)

/** Alias for SDMA_BLK0_CHINTR0.
 *  Note that this definition is obsolete, use SDMA_BLK0_CHINTR0 instead.
 * 70, SDMA Channel Interrupt Set Register0
 */
#define SDMA_CHINTR00 (SDMA_BLK0_CHINTR0)

/** Alias for SDMA_BLK1_CHINTR0.
 *  Note that this definition is obsolete, use SDMA_BLK1_CHINTR0 instead.
 * 1070, SDMA Channel Interrupt Set Register0
 */
#define SDMA_CHINTR10 (SDMA_BLK1_CHINTR0)

/** Alias for SDMA_BLK0_CHRSTR0.
 *  Note that this definition is obsolete, use SDMA_BLK0_CHRSTR0 instead.
 * 40, SDMA Channel Reset Request Register0
 */
#define SDMA_CHRSTR00 (SDMA_BLK0_CHRSTR0)

/** Alias for SDMA_BLK1_CHRSTR0.
 *  Note that this definition is obsolete, use SDMA_BLK1_CHRSTR0 instead.
 * 1040, SDMA Channel Reset Request Register0
 */
#define SDMA_CHRSTR10 (SDMA_BLK1_CHRSTR0)

/** 0, SDMA Sub-block 0 Clock Control Register */
#define SDMA_CLC0 ((*(volatile Ifx_CLC2*)0xF0010000u)) /* lint --e(923)*/

/** 1000, SDMA Sub-block 1 Clock Control Register */
#define SDMA_CLC1 ((*(volatile Ifx_CLC2*)0xF0011000u)) /* lint --e(923)*/

/** Alias for SDMA_BLK0_CLRE.
 *  Note that this definition is obsolete, use SDMA_BLK0_CLRE instead.
 * 28, SDMA Clear Error Register
 */
#define SDMA_CLRE0 (SDMA_BLK0_CLRE)

/** Alias for SDMA_BLK1_CLRE.
 *  Note that this definition is obsolete, use SDMA_BLK1_CLRE instead.
 * 1028, SDMA Clear Error Register
 */
#define SDMA_CLRE1 (SDMA_BLK1_CLRE)

/** 2014, SDMA Channel Destination Address CRC Register */
#define SDMA_CRCCH00_D ((*(volatile Ifx_SDMA_CRCCH_D*)0xF0012014u)) /* lint --e(923)*/

/** 2018, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH00_RD ((*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012018u)) /* lint --e(923)*/

/** 2010, SDMA Channel Source Address CRC Register */
#define SDMA_CRCCH00_S ((*(volatile Ifx_SDMA_CRCCH_S*)0xF0012010u)) /* lint --e(923)*/

/** 2034, SDMA Channel Destination Address CRC Register */
#define SDMA_CRCCH01_D ((*(volatile Ifx_SDMA_CRCCH_D*)0xF0012034u)) /* lint --e(923)*/

/** 2038, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH01_RD ((*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012038u)) /* lint --e(923)*/

/** 2030, SDMA Channel Source Address CRC Register */
#define SDMA_CRCCH01_S ((*(volatile Ifx_SDMA_CRCCH_S*)0xF0012030u)) /* lint --e(923)*/

/** 2054, SDMA Channel Destination Address CRC Register */
#define SDMA_CRCCH02_D ((*(volatile Ifx_SDMA_CRCCH_D*)0xF0012054u)) /* lint --e(923)*/

/** 2058, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH02_RD ((*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012058u)) /* lint --e(923)*/

/** 2050, SDMA Channel Source Address CRC Register */
#define SDMA_CRCCH02_S ((*(volatile Ifx_SDMA_CRCCH_S*)0xF0012050u)) /* lint --e(923)*/

/** 2074, SDMA Channel Destination Address CRC Register */
#define SDMA_CRCCH03_D ((*(volatile Ifx_SDMA_CRCCH_D*)0xF0012074u)) /* lint --e(923)*/

/** 2078, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH03_RD ((*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012078u)) /* lint --e(923)*/

/** 2070, SDMA Channel Source Address CRC Register */
#define SDMA_CRCCH03_S ((*(volatile Ifx_SDMA_CRCCH_S*)0xF0012070u)) /* lint --e(923)*/

/** 2094, SDMA Channel Destination Address CRC Register */
#define SDMA_CRCCH04_D ((*(volatile Ifx_SDMA_CRCCH_D*)0xF0012094u)) /* lint --e(923)*/

/** 2098, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH04_RD ((*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012098u)) /* lint --e(923)*/

/** 2090, SDMA Channel Source Address CRC Register */
#define SDMA_CRCCH04_S ((*(volatile Ifx_SDMA_CRCCH_S*)0xF0012090u)) /* lint --e(923)*/

/** 20B4, SDMA Channel Destination Address CRC Register */
#define SDMA_CRCCH05_D ((*(volatile Ifx_SDMA_CRCCH_D*)0xF00120B4u)) /* lint --e(923)*/

/** 20B8, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH05_RD ((*(volatile Ifx_SDMA_CRCCH_RD*)0xF00120B8u)) /* lint --e(923)*/

/** 20B0, SDMA Channel Source Address CRC Register */
#define SDMA_CRCCH05_S ((*(volatile Ifx_SDMA_CRCCH_S*)0xF00120B0u)) /* lint --e(923)*/

/** 20D4, SDMA Channel Destination Address CRC Register */
#define SDMA_CRCCH06_D ((*(volatile Ifx_SDMA_CRCCH_D*)0xF00120D4u)) /* lint --e(923)*/

/** 20D8, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH06_RD ((*(volatile Ifx_SDMA_CRCCH_RD*)0xF00120D8u)) /* lint --e(923)*/

/** 20D0, SDMA Channel Source Address CRC Register */
#define SDMA_CRCCH06_S ((*(volatile Ifx_SDMA_CRCCH_S*)0xF00120D0u)) /* lint --e(923)*/

/** 20F4, SDMA Channel Destination Address CRC Register */
#define SDMA_CRCCH07_D ((*(volatile Ifx_SDMA_CRCCH_D*)0xF00120F4u)) /* lint --e(923)*/

/** 20F8, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH07_RD ((*(volatile Ifx_SDMA_CRCCH_RD*)0xF00120F8u)) /* lint --e(923)*/

/** 20F0, SDMA Channel Source Address CRC Register */
#define SDMA_CRCCH07_S ((*(volatile Ifx_SDMA_CRCCH_S*)0xF00120F0u)) /* lint --e(923)*/

/** 2814, SDMA Channel Destination Address CRC Register */
#define SDMA_CRCCH10_D ((*(volatile Ifx_SDMA_CRCCH_D*)0xF0012814u)) /* lint --e(923)*/

/** 2818, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH10_RD ((*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012818u)) /* lint --e(923)*/

/** 2810, SDMA Channel Source Address CRC Register */
#define SDMA_CRCCH10_S ((*(volatile Ifx_SDMA_CRCCH_S*)0xF0012810u)) /* lint --e(923)*/

/** 2834, SDMA Channel Destination Address CRC Register */
#define SDMA_CRCCH11_D ((*(volatile Ifx_SDMA_CRCCH_D*)0xF0012834u)) /* lint --e(923)*/

/** 2838, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH11_RD ((*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012838u)) /* lint --e(923)*/

/** 2830, SDMA Channel Source Address CRC Register */
#define SDMA_CRCCH11_S ((*(volatile Ifx_SDMA_CRCCH_S*)0xF0012830u)) /* lint --e(923)*/

/** 2854, SDMA Channel Destination Address CRC Register */
#define SDMA_CRCCH12_D ((*(volatile Ifx_SDMA_CRCCH_D*)0xF0012854u)) /* lint --e(923)*/

/** 2858, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH12_RD ((*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012858u)) /* lint --e(923)*/

/** 2850, SDMA Channel Source Address CRC Register */
#define SDMA_CRCCH12_S ((*(volatile Ifx_SDMA_CRCCH_S*)0xF0012850u)) /* lint --e(923)*/

/** 2874, SDMA Channel Destination Address CRC Register */
#define SDMA_CRCCH13_D ((*(volatile Ifx_SDMA_CRCCH_D*)0xF0012874u)) /* lint --e(923)*/

/** 2878, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH13_RD ((*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012878u)) /* lint --e(923)*/

/** 2870, SDMA Channel Source Address CRC Register */
#define SDMA_CRCCH13_S ((*(volatile Ifx_SDMA_CRCCH_S*)0xF0012870u)) /* lint --e(923)*/

/** 2894, SDMA Channel Destination Address CRC Register */
#define SDMA_CRCCH14_D ((*(volatile Ifx_SDMA_CRCCH_D*)0xF0012894u)) /* lint --e(923)*/

/** 2898, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH14_RD ((*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012898u)) /* lint --e(923)*/

/** 2890, SDMA Channel Source Address CRC Register */
#define SDMA_CRCCH14_S ((*(volatile Ifx_SDMA_CRCCH_S*)0xF0012890u)) /* lint --e(923)*/

/** 28B4, SDMA Channel Destination Address CRC Register */
#define SDMA_CRCCH15_D ((*(volatile Ifx_SDMA_CRCCH_D*)0xF00128B4u)) /* lint --e(923)*/

/** 28B8, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH15_RD ((*(volatile Ifx_SDMA_CRCCH_RD*)0xF00128B8u)) /* lint --e(923)*/

/** 28B0, SDMA Channel Source Address CRC Register */
#define SDMA_CRCCH15_S ((*(volatile Ifx_SDMA_CRCCH_S*)0xF00128B0u)) /* lint --e(923)*/

/** 28D4, SDMA Channel Destination Address CRC Register */
#define SDMA_CRCCH16_D ((*(volatile Ifx_SDMA_CRCCH_D*)0xF00128D4u)) /* lint --e(923)*/

/** 28D8, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH16_RD ((*(volatile Ifx_SDMA_CRCCH_RD*)0xF00128D8u)) /* lint --e(923)*/

/** 28D0, SDMA Channel Source Address CRC Register */
#define SDMA_CRCCH16_S ((*(volatile Ifx_SDMA_CRCCH_S*)0xF00128D0u)) /* lint --e(923)*/

/** 28F4, SDMA Channel Destination Address CRC Register */
#define SDMA_CRCCH17_D ((*(volatile Ifx_SDMA_CRCCH_D*)0xF00128F4u)) /* lint --e(923)*/

/** 28F8, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH17_RD ((*(volatile Ifx_SDMA_CRCCH_RD*)0xF00128F8u)) /* lint --e(923)*/

/** 28F0, SDMA Channel Source Address CRC Register */
#define SDMA_CRCCH17_S ((*(volatile Ifx_SDMA_CRCCH_S*)0xF00128F0u)) /* lint --e(923)*/

/** Alias for SDMA_BLK0_EER.
 *  Note that this definition is obsolete, use SDMA_BLK0_EER instead.
 * 20, SDMA Enable Error Register
 */
#define SDMA_EER0 (SDMA_BLK0_EER)

/** Alias for SDMA_BLK1_EER.
 *  Note that this definition is obsolete, use SDMA_BLK1_EER instead.
 * 1020, SDMA Enable Error Register
 */
#define SDMA_EER1 (SDMA_BLK1_EER)

/** Alias for SDMA_BLK0_ERRSR.
 *  Note that this definition is obsolete, use SDMA_BLK0_ERRSR instead.
 * 24, SDMA Error Status Register
 */
#define SDMA_ERRSR0 (SDMA_BLK0_ERRSR)

/** Alias for SDMA_BLK1_ERRSR.
 *  Note that this definition is obsolete, use SDMA_BLK1_ERRSR instead.
 * 1024, SDMA Error Status Register
 */
#define SDMA_ERRSR1 (SDMA_BLK1_ERRSR)

/** 8, Module Identification Register */
#define SDMA_ID ((*(volatile Ifx_ID1*)0xF0010008u)) /* lint --e(923)*/

/** Alias for SDMA_BLK0_ME_INTR.
 *  Note that this definition is obsolete, use SDMA_BLK0_ME_INTR instead.
 * 38, SDMA Move Engine Interrupt Set Register
 */
#define SDMA_ME0_INTR (SDMA_BLK0_ME_INTR)

/** Alias for SDMA_BLK0_ME_PR.
 *  Note that this definition is obsolete, use SDMA_BLK0_ME_PR instead.
 * 3C, SDMA Move Engine Pattern Read Register
 */
#define SDMA_ME0_PR (SDMA_BLK0_ME_PR)

/** Alias for SDMA_BLK0_ME_R.
 *  Note that this definition is obsolete, use SDMA_BLK0_ME_R instead.
 * 34, SDMA Move Engine Read Register
 */
#define SDMA_ME0_R (SDMA_BLK0_ME_R)

/** Alias for SDMA_BLK0_ME_SR.
 *  Note that this definition is obsolete, use SDMA_BLK0_ME_SR instead.
 * 30, SDMA Move Engine Status Register
 */
#define SDMA_ME0_SR (SDMA_BLK0_ME_SR)

/** Alias for SDMA_BLK1_ME_INTR.
 *  Note that this definition is obsolete, use SDMA_BLK1_ME_INTR instead.
 * 1038, SDMA Move Engine Interrupt Set Register
 */
#define SDMA_ME1_INTR (SDMA_BLK1_ME_INTR)

/** Alias for SDMA_BLK1_ME_PR.
 *  Note that this definition is obsolete, use SDMA_BLK1_ME_PR instead.
 * 103C, SDMA Move Engine Pattern Read Register
 */
#define SDMA_ME1_PR (SDMA_BLK1_ME_PR)

/** Alias for SDMA_BLK1_ME_R.
 *  Note that this definition is obsolete, use SDMA_BLK1_ME_R instead.
 * 1034, SDMA Move Engine Read Register
 */
#define SDMA_ME1_R (SDMA_BLK1_ME_R)

/** Alias for SDMA_BLK1_ME_SR.
 *  Note that this definition is obsolete, use SDMA_BLK1_ME_SR instead.
 * 1030, SDMA Move Engine Status Register
 */
#define SDMA_ME1_SR (SDMA_BLK1_ME_SR)

/** C, SDMA OCDS Trigger Set Select */
#define SDMA_OTSS ((*(volatile Ifx_SDMA_OTSS*)0xF001000Cu)) /* lint --e(923)*/

/** Alias for SDMA_BLK0_SUSACR0.
 *  Note that this definition is obsolete, use SDMA_BLK0_SUSACR0 instead.
 * 68, SDMA Suspend Acknowledge Register0
 */
#define SDMA_SUSACR00 (SDMA_BLK0_SUSACR0)

/** Alias for SDMA_BLK1_SUSACR0.
 *  Note that this definition is obsolete, use SDMA_BLK1_SUSACR0 instead.
 * 1068, SDMA Suspend Acknowledge Register0
 */
#define SDMA_SUSACR10 (SDMA_BLK1_SUSACR0)

/** Alias for SDMA_BLK0_SUSENR0.
 *  Note that this definition is obsolete, use SDMA_BLK0_SUSENR0 instead.
 * 60, SDMA Suspend Enable Register0
 */
#define SDMA_SUSENR00 (SDMA_BLK0_SUSENR0)

/** Alias for SDMA_BLK1_SUSENR0.
 *  Note that this definition is obsolete, use SDMA_BLK1_SUSENR0 instead.
 * 1060, SDMA Suspend Enable Register0
 */
#define SDMA_SUSENR10 (SDMA_BLK1_SUSENR0)
/******************************************************************************/
#endif /* IFXSDMA_REG_H */

