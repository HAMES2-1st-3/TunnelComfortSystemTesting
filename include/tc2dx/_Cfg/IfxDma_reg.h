/**
 * \file IfxDma_reg.h
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
#ifndef IFXDMA_REG_H
#define IFXDMA_REG_H
/******************************************************************************/
#include "Dma/IfxDma_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** DMA object */
#define MODULE_DMA ((*(Ifx_DMA*)0xF0014000u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-DMA)                               */
/******************************************************************************/

/** Alias for DMA_BLK0_ACCEN0.
 *  Note that this definition is obsolete, use DMA_BLK0_ACCEN0 instead.
 * 8FC, DMA Sub-block Access Enable Register 0
 */
#define DMA_ACCEN00 (DMA_BLK0_ACCEN0)

/** Alias for DMA_BLK0_ACCEN1.
 *  Note that this definition is obsolete, use DMA_BLK0_ACCEN1 instead.
 * 8F8, DMA Sub-block Access Enable Register 1
 */
#define DMA_ACCEN01 (DMA_BLK0_ACCEN1)

/** Alias for DMA_BLK1_ACCEN0.
 *  Note that this definition is obsolete, use DMA_BLK1_ACCEN0 instead.
 * 18FC, DMA Sub-block Access Enable Register 0
 */
#define DMA_ACCEN10 (DMA_BLK1_ACCEN0)

/** Alias for DMA_BLK1_ACCEN1.
 *  Note that this definition is obsolete, use DMA_BLK1_ACCEN1 instead.
 * 18F8, DMA Sub-block Access Enable Register 1
 */
#define DMA_ACCEN11 (DMA_BLK1_ACCEN1)

/** 8FC, DMA Sub-block Access Enable Register 0 */
#define DMA_BLK0_ACCEN0 ((*(volatile Ifx_DMA_BLK_ACCEN0*)0xF00148FCu)) /* lint --e(923)*/

/** 8F8, DMA Sub-block Access Enable Register 1 */
#define DMA_BLK0_ACCEN1 ((*(volatile Ifx_DMA_BLK_ACCEN1*)0xF00148F8u)) /* lint --e(923)*/

/** 8C, DMA Channel Address Control Register */
#define DMA_BLK0_CH0_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001408Cu)) /* lint --e(923)*/

/** 84, DMA Channel Control Register */
#define DMA_BLK0_CH0_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014084u)) /* lint --e(923)*/

/** 88, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH0_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014088u)) /* lint --e(923)*/

/** 80, DMA Channel Status Register */
#define DMA_BLK0_CH0_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014080u)) /* lint --e(923)*/

/** 94, DMA Channel Destination Address Register */
#define DMA_BLK0_CH0_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014094u)) /* lint --e(923)*/

/** 90, DMA Channel Source Address Register */
#define DMA_BLK0_CH0_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014090u)) /* lint --e(923)*/

/** 98, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH0_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014098u)) /* lint --e(923)*/

/** 1CC, DMA Channel Address Control Register */
#define DMA_BLK0_CH10_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00141CCu)) /* lint --e(923)*/

/** 1C4, DMA Channel Control Register */
#define DMA_BLK0_CH10_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00141C4u)) /* lint --e(923)*/

/** 1C8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH10_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00141C8u)) /* lint --e(923)*/

/** 1C0, DMA Channel Status Register */
#define DMA_BLK0_CH10_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00141C0u)) /* lint --e(923)*/

/** 1D4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH10_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00141D4u)) /* lint --e(923)*/

/** 1D0, DMA Channel Source Address Register */
#define DMA_BLK0_CH10_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00141D0u)) /* lint --e(923)*/

/** 1D8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH10_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00141D8u)) /* lint --e(923)*/

/** 1EC, DMA Channel Address Control Register */
#define DMA_BLK0_CH11_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00141ECu)) /* lint --e(923)*/

/** 1E4, DMA Channel Control Register */
#define DMA_BLK0_CH11_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00141E4u)) /* lint --e(923)*/

/** 1E8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH11_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00141E8u)) /* lint --e(923)*/

/** 1E0, DMA Channel Status Register */
#define DMA_BLK0_CH11_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00141E0u)) /* lint --e(923)*/

/** 1F4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH11_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00141F4u)) /* lint --e(923)*/

/** 1F0, DMA Channel Source Address Register */
#define DMA_BLK0_CH11_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00141F0u)) /* lint --e(923)*/

/** 1F8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH11_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00141F8u)) /* lint --e(923)*/

/** 20C, DMA Channel Address Control Register */
#define DMA_BLK0_CH12_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001420Cu)) /* lint --e(923)*/

/** 204, DMA Channel Control Register */
#define DMA_BLK0_CH12_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014204u)) /* lint --e(923)*/

/** 208, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH12_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014208u)) /* lint --e(923)*/

/** 200, DMA Channel Status Register */
#define DMA_BLK0_CH12_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014200u)) /* lint --e(923)*/

/** 214, DMA Channel Destination Address Register */
#define DMA_BLK0_CH12_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014214u)) /* lint --e(923)*/

/** 210, DMA Channel Source Address Register */
#define DMA_BLK0_CH12_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014210u)) /* lint --e(923)*/

/** 218, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH12_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014218u)) /* lint --e(923)*/

/** 22C, DMA Channel Address Control Register */
#define DMA_BLK0_CH13_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001422Cu)) /* lint --e(923)*/

/** 224, DMA Channel Control Register */
#define DMA_BLK0_CH13_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014224u)) /* lint --e(923)*/

/** 228, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH13_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014228u)) /* lint --e(923)*/

/** 220, DMA Channel Status Register */
#define DMA_BLK0_CH13_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014220u)) /* lint --e(923)*/

/** 234, DMA Channel Destination Address Register */
#define DMA_BLK0_CH13_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014234u)) /* lint --e(923)*/

/** 230, DMA Channel Source Address Register */
#define DMA_BLK0_CH13_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014230u)) /* lint --e(923)*/

/** 238, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH13_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014238u)) /* lint --e(923)*/

/** 24C, DMA Channel Address Control Register */
#define DMA_BLK0_CH14_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001424Cu)) /* lint --e(923)*/

/** 244, DMA Channel Control Register */
#define DMA_BLK0_CH14_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014244u)) /* lint --e(923)*/

/** 248, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH14_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014248u)) /* lint --e(923)*/

/** 240, DMA Channel Status Register */
#define DMA_BLK0_CH14_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014240u)) /* lint --e(923)*/

/** 254, DMA Channel Destination Address Register */
#define DMA_BLK0_CH14_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014254u)) /* lint --e(923)*/

/** 250, DMA Channel Source Address Register */
#define DMA_BLK0_CH14_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014250u)) /* lint --e(923)*/

/** 258, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH14_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014258u)) /* lint --e(923)*/

/** 26C, DMA Channel Address Control Register */
#define DMA_BLK0_CH15_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001426Cu)) /* lint --e(923)*/

/** 264, DMA Channel Control Register */
#define DMA_BLK0_CH15_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014264u)) /* lint --e(923)*/

/** 268, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH15_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014268u)) /* lint --e(923)*/

/** 260, DMA Channel Status Register */
#define DMA_BLK0_CH15_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014260u)) /* lint --e(923)*/

/** 274, DMA Channel Destination Address Register */
#define DMA_BLK0_CH15_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014274u)) /* lint --e(923)*/

/** 270, DMA Channel Source Address Register */
#define DMA_BLK0_CH15_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014270u)) /* lint --e(923)*/

/** 278, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH15_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014278u)) /* lint --e(923)*/

/** 28C, DMA Channel Address Control Register */
#define DMA_BLK0_CH16_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001428Cu)) /* lint --e(923)*/

/** 284, DMA Channel Control Register */
#define DMA_BLK0_CH16_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014284u)) /* lint --e(923)*/

/** 288, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH16_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014288u)) /* lint --e(923)*/

/** 280, DMA Channel Status Register */
#define DMA_BLK0_CH16_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014280u)) /* lint --e(923)*/

/** 294, DMA Channel Destination Address Register */
#define DMA_BLK0_CH16_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014294u)) /* lint --e(923)*/

/** 290, DMA Channel Source Address Register */
#define DMA_BLK0_CH16_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014290u)) /* lint --e(923)*/

/** 298, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH16_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014298u)) /* lint --e(923)*/

/** 2AC, DMA Channel Address Control Register */
#define DMA_BLK0_CH17_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00142ACu)) /* lint --e(923)*/

/** 2A4, DMA Channel Control Register */
#define DMA_BLK0_CH17_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00142A4u)) /* lint --e(923)*/

/** 2A8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH17_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00142A8u)) /* lint --e(923)*/

/** 2A0, DMA Channel Status Register */
#define DMA_BLK0_CH17_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00142A0u)) /* lint --e(923)*/

/** 2B4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH17_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00142B4u)) /* lint --e(923)*/

/** 2B0, DMA Channel Source Address Register */
#define DMA_BLK0_CH17_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00142B0u)) /* lint --e(923)*/

/** 2B8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH17_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00142B8u)) /* lint --e(923)*/

/** 2CC, DMA Channel Address Control Register */
#define DMA_BLK0_CH18_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00142CCu)) /* lint --e(923)*/

/** 2C4, DMA Channel Control Register */
#define DMA_BLK0_CH18_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00142C4u)) /* lint --e(923)*/

/** 2C8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH18_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00142C8u)) /* lint --e(923)*/

/** 2C0, DMA Channel Status Register */
#define DMA_BLK0_CH18_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00142C0u)) /* lint --e(923)*/

/** 2D4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH18_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00142D4u)) /* lint --e(923)*/

/** 2D0, DMA Channel Source Address Register */
#define DMA_BLK0_CH18_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00142D0u)) /* lint --e(923)*/

/** 2D8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH18_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00142D8u)) /* lint --e(923)*/

/** 2EC, DMA Channel Address Control Register */
#define DMA_BLK0_CH19_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00142ECu)) /* lint --e(923)*/

/** 2E4, DMA Channel Control Register */
#define DMA_BLK0_CH19_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00142E4u)) /* lint --e(923)*/

/** 2E8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH19_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00142E8u)) /* lint --e(923)*/

/** 2E0, DMA Channel Status Register */
#define DMA_BLK0_CH19_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00142E0u)) /* lint --e(923)*/

/** 2F4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH19_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00142F4u)) /* lint --e(923)*/

/** 2F0, DMA Channel Source Address Register */
#define DMA_BLK0_CH19_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00142F0u)) /* lint --e(923)*/

/** 2F8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH19_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00142F8u)) /* lint --e(923)*/

/** AC, DMA Channel Address Control Register */
#define DMA_BLK0_CH1_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00140ACu)) /* lint --e(923)*/

/** A4, DMA Channel Control Register */
#define DMA_BLK0_CH1_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00140A4u)) /* lint --e(923)*/

/** A8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH1_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00140A8u)) /* lint --e(923)*/

/** A0, DMA Channel Status Register */
#define DMA_BLK0_CH1_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00140A0u)) /* lint --e(923)*/

/** B4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH1_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00140B4u)) /* lint --e(923)*/

/** B0, DMA Channel Source Address Register */
#define DMA_BLK0_CH1_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00140B0u)) /* lint --e(923)*/

/** B8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH1_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00140B8u)) /* lint --e(923)*/

/** 30C, DMA Channel Address Control Register */
#define DMA_BLK0_CH20_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001430Cu)) /* lint --e(923)*/

/** 304, DMA Channel Control Register */
#define DMA_BLK0_CH20_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014304u)) /* lint --e(923)*/

/** 308, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH20_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014308u)) /* lint --e(923)*/

/** 300, DMA Channel Status Register */
#define DMA_BLK0_CH20_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014300u)) /* lint --e(923)*/

/** 314, DMA Channel Destination Address Register */
#define DMA_BLK0_CH20_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014314u)) /* lint --e(923)*/

/** 310, DMA Channel Source Address Register */
#define DMA_BLK0_CH20_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014310u)) /* lint --e(923)*/

/** 318, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH20_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014318u)) /* lint --e(923)*/

/** 32C, DMA Channel Address Control Register */
#define DMA_BLK0_CH21_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001432Cu)) /* lint --e(923)*/

/** 324, DMA Channel Control Register */
#define DMA_BLK0_CH21_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014324u)) /* lint --e(923)*/

/** 328, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH21_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014328u)) /* lint --e(923)*/

/** 320, DMA Channel Status Register */
#define DMA_BLK0_CH21_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014320u)) /* lint --e(923)*/

/** 334, DMA Channel Destination Address Register */
#define DMA_BLK0_CH21_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014334u)) /* lint --e(923)*/

/** 330, DMA Channel Source Address Register */
#define DMA_BLK0_CH21_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014330u)) /* lint --e(923)*/

/** 338, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH21_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014338u)) /* lint --e(923)*/

/** 34C, DMA Channel Address Control Register */
#define DMA_BLK0_CH22_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001434Cu)) /* lint --e(923)*/

/** 344, DMA Channel Control Register */
#define DMA_BLK0_CH22_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014344u)) /* lint --e(923)*/

/** 348, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH22_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014348u)) /* lint --e(923)*/

/** 340, DMA Channel Status Register */
#define DMA_BLK0_CH22_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014340u)) /* lint --e(923)*/

/** 354, DMA Channel Destination Address Register */
#define DMA_BLK0_CH22_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014354u)) /* lint --e(923)*/

/** 350, DMA Channel Source Address Register */
#define DMA_BLK0_CH22_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014350u)) /* lint --e(923)*/

/** 358, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH22_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014358u)) /* lint --e(923)*/

/** 36C, DMA Channel Address Control Register */
#define DMA_BLK0_CH23_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001436Cu)) /* lint --e(923)*/

/** 364, DMA Channel Control Register */
#define DMA_BLK0_CH23_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014364u)) /* lint --e(923)*/

/** 368, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH23_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014368u)) /* lint --e(923)*/

/** 360, DMA Channel Status Register */
#define DMA_BLK0_CH23_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014360u)) /* lint --e(923)*/

/** 374, DMA Channel Destination Address Register */
#define DMA_BLK0_CH23_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014374u)) /* lint --e(923)*/

/** 370, DMA Channel Source Address Register */
#define DMA_BLK0_CH23_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014370u)) /* lint --e(923)*/

/** 378, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH23_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014378u)) /* lint --e(923)*/

/** CC, DMA Channel Address Control Register */
#define DMA_BLK0_CH2_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00140CCu)) /* lint --e(923)*/

/** C4, DMA Channel Control Register */
#define DMA_BLK0_CH2_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00140C4u)) /* lint --e(923)*/

/** C8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH2_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00140C8u)) /* lint --e(923)*/

/** C0, DMA Channel Status Register */
#define DMA_BLK0_CH2_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00140C0u)) /* lint --e(923)*/

/** D4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH2_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00140D4u)) /* lint --e(923)*/

/** D0, DMA Channel Source Address Register */
#define DMA_BLK0_CH2_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00140D0u)) /* lint --e(923)*/

/** D8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH2_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00140D8u)) /* lint --e(923)*/

/** EC, DMA Channel Address Control Register */
#define DMA_BLK0_CH3_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00140ECu)) /* lint --e(923)*/

/** E4, DMA Channel Control Register */
#define DMA_BLK0_CH3_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00140E4u)) /* lint --e(923)*/

/** E8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH3_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00140E8u)) /* lint --e(923)*/

/** E0, DMA Channel Status Register */
#define DMA_BLK0_CH3_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00140E0u)) /* lint --e(923)*/

/** F4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH3_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00140F4u)) /* lint --e(923)*/

/** F0, DMA Channel Source Address Register */
#define DMA_BLK0_CH3_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00140F0u)) /* lint --e(923)*/

/** F8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH3_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00140F8u)) /* lint --e(923)*/

/** 10C, DMA Channel Address Control Register */
#define DMA_BLK0_CH4_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001410Cu)) /* lint --e(923)*/

/** 104, DMA Channel Control Register */
#define DMA_BLK0_CH4_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014104u)) /* lint --e(923)*/

/** 108, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH4_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014108u)) /* lint --e(923)*/

/** 100, DMA Channel Status Register */
#define DMA_BLK0_CH4_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014100u)) /* lint --e(923)*/

/** 114, DMA Channel Destination Address Register */
#define DMA_BLK0_CH4_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014114u)) /* lint --e(923)*/

/** 110, DMA Channel Source Address Register */
#define DMA_BLK0_CH4_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014110u)) /* lint --e(923)*/

/** 118, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH4_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014118u)) /* lint --e(923)*/

/** 12C, DMA Channel Address Control Register */
#define DMA_BLK0_CH5_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001412Cu)) /* lint --e(923)*/

/** 124, DMA Channel Control Register */
#define DMA_BLK0_CH5_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014124u)) /* lint --e(923)*/

/** 128, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH5_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014128u)) /* lint --e(923)*/

/** 120, DMA Channel Status Register */
#define DMA_BLK0_CH5_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014120u)) /* lint --e(923)*/

/** 134, DMA Channel Destination Address Register */
#define DMA_BLK0_CH5_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014134u)) /* lint --e(923)*/

/** 130, DMA Channel Source Address Register */
#define DMA_BLK0_CH5_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014130u)) /* lint --e(923)*/

/** 138, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH5_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014138u)) /* lint --e(923)*/

/** 14C, DMA Channel Address Control Register */
#define DMA_BLK0_CH6_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001414Cu)) /* lint --e(923)*/

/** 144, DMA Channel Control Register */
#define DMA_BLK0_CH6_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014144u)) /* lint --e(923)*/

/** 148, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH6_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014148u)) /* lint --e(923)*/

/** 140, DMA Channel Status Register */
#define DMA_BLK0_CH6_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014140u)) /* lint --e(923)*/

/** 154, DMA Channel Destination Address Register */
#define DMA_BLK0_CH6_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014154u)) /* lint --e(923)*/

/** 150, DMA Channel Source Address Register */
#define DMA_BLK0_CH6_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014150u)) /* lint --e(923)*/

/** 158, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH6_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014158u)) /* lint --e(923)*/

/** 16C, DMA Channel Address Control Register */
#define DMA_BLK0_CH7_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001416Cu)) /* lint --e(923)*/

/** 164, DMA Channel Control Register */
#define DMA_BLK0_CH7_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014164u)) /* lint --e(923)*/

/** 168, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH7_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014168u)) /* lint --e(923)*/

/** 160, DMA Channel Status Register */
#define DMA_BLK0_CH7_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014160u)) /* lint --e(923)*/

/** 174, DMA Channel Destination Address Register */
#define DMA_BLK0_CH7_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014174u)) /* lint --e(923)*/

/** 170, DMA Channel Source Address Register */
#define DMA_BLK0_CH7_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014170u)) /* lint --e(923)*/

/** 178, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH7_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014178u)) /* lint --e(923)*/

/** 18C, DMA Channel Address Control Register */
#define DMA_BLK0_CH8_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001418Cu)) /* lint --e(923)*/

/** 184, DMA Channel Control Register */
#define DMA_BLK0_CH8_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014184u)) /* lint --e(923)*/

/** 188, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH8_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014188u)) /* lint --e(923)*/

/** 180, DMA Channel Status Register */
#define DMA_BLK0_CH8_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014180u)) /* lint --e(923)*/

/** 194, DMA Channel Destination Address Register */
#define DMA_BLK0_CH8_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014194u)) /* lint --e(923)*/

/** 190, DMA Channel Source Address Register */
#define DMA_BLK0_CH8_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014190u)) /* lint --e(923)*/

/** 198, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH8_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014198u)) /* lint --e(923)*/

/** 1AC, DMA Channel Address Control Register */
#define DMA_BLK0_CH9_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00141ACu)) /* lint --e(923)*/

/** 1A4, DMA Channel Control Register */
#define DMA_BLK0_CH9_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00141A4u)) /* lint --e(923)*/

/** 1A8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH9_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00141A8u)) /* lint --e(923)*/

/** 1A0, DMA Channel Status Register */
#define DMA_BLK0_CH9_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00141A0u)) /* lint --e(923)*/

/** 1B4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH9_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00141B4u)) /* lint --e(923)*/

/** 1B0, DMA Channel Source Address Register */
#define DMA_BLK0_CH9_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00141B0u)) /* lint --e(923)*/

/** 1B8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH9_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00141B8u)) /* lint --e(923)*/

/** 70, DMA Channel Interrupt Set Register0 */
#define DMA_BLK0_CHINTR0 ((*(volatile Ifx_DMA_BLK_CHINTR0*)0xF0014070u)) /* lint --e(923)*/

/** 40, DMA Channel Reset Request Register0 */
#define DMA_BLK0_CHRSTR0 ((*(volatile Ifx_DMA_BLK_CHRSTR0*)0xF0014040u)) /* lint --e(923)*/

/** 28, DMA Clear Error Register */
#define DMA_BLK0_CLRE ((*(volatile Ifx_DMA_BLK_CLRE*)0xF0014028u)) /* lint --e(923)*/

/** 20, DMA Enable Error Register */
#define DMA_BLK0_EER ((*(volatile Ifx_DMA_BLK_EER*)0xF0014020u)) /* lint --e(923)*/

/** 24, DMA Error Status Register */
#define DMA_BLK0_ERRSR ((*(volatile Ifx_DMA_BLK_ERRSR*)0xF0014024u)) /* lint --e(923)*/

/** 38, DMA Move Engine Interrupt Set Register */
#define DMA_BLK0_ME_INTR ((*(volatile Ifx_DMA_BLK_ME_INTR*)0xF0014038u)) /* lint --e(923)*/

/** 3C, DMA Move Engine Pattern Read Register */
#define DMA_BLK0_ME_PR ((*(volatile Ifx_DMA_BLK_ME_PR*)0xF001403Cu)) /* lint --e(923)*/

/** 34, DMA Move Engine Read Register */
#define DMA_BLK0_ME_R ((*(volatile Ifx_DMA_BLK_ME_R*)0xF0014034u)) /* lint --e(923)*/

/** 30, DMA Move Engine Status Register */
#define DMA_BLK0_ME_SR ((*(volatile Ifx_DMA_BLK_ME_SR*)0xF0014030u)) /* lint --e(923)*/

/** 68, DMA Suspend Acknowledge Register0 */
#define DMA_BLK0_SUSACR0 ((*(volatile Ifx_DMA_BLK_SUSACR0*)0xF0014068u)) /* lint --e(923)*/

/** 60, DMA Suspend Enable Register0 */
#define DMA_BLK0_SUSENR0 ((*(volatile Ifx_DMA_BLK_SUSENR0*)0xF0014060u)) /* lint --e(923)*/

/** 18FC, DMA Sub-block Access Enable Register 0 */
#define DMA_BLK1_ACCEN0 ((*(volatile Ifx_DMA_BLK_ACCEN0*)0xF00158FCu)) /* lint --e(923)*/

/** 18F8, DMA Sub-block Access Enable Register 1 */
#define DMA_BLK1_ACCEN1 ((*(volatile Ifx_DMA_BLK_ACCEN1*)0xF00158F8u)) /* lint --e(923)*/

/** 108C, DMA Channel Address Control Register */
#define DMA_BLK1_CH0_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001508Cu)) /* lint --e(923)*/

/** 1084, DMA Channel Control Register */
#define DMA_BLK1_CH0_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015084u)) /* lint --e(923)*/

/** 1088, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH0_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015088u)) /* lint --e(923)*/

/** 1080, DMA Channel Status Register */
#define DMA_BLK1_CH0_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015080u)) /* lint --e(923)*/

/** 1094, DMA Channel Destination Address Register */
#define DMA_BLK1_CH0_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015094u)) /* lint --e(923)*/

/** 1090, DMA Channel Source Address Register */
#define DMA_BLK1_CH0_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015090u)) /* lint --e(923)*/

/** 1098, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH0_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015098u)) /* lint --e(923)*/

/** 11CC, DMA Channel Address Control Register */
#define DMA_BLK1_CH10_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00151CCu)) /* lint --e(923)*/

/** 11C4, DMA Channel Control Register */
#define DMA_BLK1_CH10_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00151C4u)) /* lint --e(923)*/

/** 11C8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH10_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00151C8u)) /* lint --e(923)*/

/** 11C0, DMA Channel Status Register */
#define DMA_BLK1_CH10_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00151C0u)) /* lint --e(923)*/

/** 11D4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH10_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00151D4u)) /* lint --e(923)*/

/** 11D0, DMA Channel Source Address Register */
#define DMA_BLK1_CH10_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00151D0u)) /* lint --e(923)*/

/** 11D8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH10_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00151D8u)) /* lint --e(923)*/

/** 11EC, DMA Channel Address Control Register */
#define DMA_BLK1_CH11_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00151ECu)) /* lint --e(923)*/

/** 11E4, DMA Channel Control Register */
#define DMA_BLK1_CH11_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00151E4u)) /* lint --e(923)*/

/** 11E8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH11_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00151E8u)) /* lint --e(923)*/

/** 11E0, DMA Channel Status Register */
#define DMA_BLK1_CH11_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00151E0u)) /* lint --e(923)*/

/** 11F4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH11_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00151F4u)) /* lint --e(923)*/

/** 11F0, DMA Channel Source Address Register */
#define DMA_BLK1_CH11_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00151F0u)) /* lint --e(923)*/

/** 11F8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH11_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00151F8u)) /* lint --e(923)*/

/** 120C, DMA Channel Address Control Register */
#define DMA_BLK1_CH12_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001520Cu)) /* lint --e(923)*/

/** 1204, DMA Channel Control Register */
#define DMA_BLK1_CH12_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015204u)) /* lint --e(923)*/

/** 1208, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH12_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015208u)) /* lint --e(923)*/

/** 1200, DMA Channel Status Register */
#define DMA_BLK1_CH12_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015200u)) /* lint --e(923)*/

/** 1214, DMA Channel Destination Address Register */
#define DMA_BLK1_CH12_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015214u)) /* lint --e(923)*/

/** 1210, DMA Channel Source Address Register */
#define DMA_BLK1_CH12_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015210u)) /* lint --e(923)*/

/** 1218, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH12_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015218u)) /* lint --e(923)*/

/** 122C, DMA Channel Address Control Register */
#define DMA_BLK1_CH13_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001522Cu)) /* lint --e(923)*/

/** 1224, DMA Channel Control Register */
#define DMA_BLK1_CH13_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015224u)) /* lint --e(923)*/

/** 1228, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH13_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015228u)) /* lint --e(923)*/

/** 1220, DMA Channel Status Register */
#define DMA_BLK1_CH13_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015220u)) /* lint --e(923)*/

/** 1234, DMA Channel Destination Address Register */
#define DMA_BLK1_CH13_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015234u)) /* lint --e(923)*/

/** 1230, DMA Channel Source Address Register */
#define DMA_BLK1_CH13_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015230u)) /* lint --e(923)*/

/** 1238, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH13_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015238u)) /* lint --e(923)*/

/** 124C, DMA Channel Address Control Register */
#define DMA_BLK1_CH14_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001524Cu)) /* lint --e(923)*/

/** 1244, DMA Channel Control Register */
#define DMA_BLK1_CH14_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015244u)) /* lint --e(923)*/

/** 1248, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH14_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015248u)) /* lint --e(923)*/

/** 1240, DMA Channel Status Register */
#define DMA_BLK1_CH14_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015240u)) /* lint --e(923)*/

/** 1254, DMA Channel Destination Address Register */
#define DMA_BLK1_CH14_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015254u)) /* lint --e(923)*/

/** 1250, DMA Channel Source Address Register */
#define DMA_BLK1_CH14_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015250u)) /* lint --e(923)*/

/** 1258, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH14_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015258u)) /* lint --e(923)*/

/** 126C, DMA Channel Address Control Register */
#define DMA_BLK1_CH15_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001526Cu)) /* lint --e(923)*/

/** 1264, DMA Channel Control Register */
#define DMA_BLK1_CH15_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015264u)) /* lint --e(923)*/

/** 1268, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH15_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015268u)) /* lint --e(923)*/

/** 1260, DMA Channel Status Register */
#define DMA_BLK1_CH15_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015260u)) /* lint --e(923)*/

/** 1274, DMA Channel Destination Address Register */
#define DMA_BLK1_CH15_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015274u)) /* lint --e(923)*/

/** 1270, DMA Channel Source Address Register */
#define DMA_BLK1_CH15_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015270u)) /* lint --e(923)*/

/** 1278, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH15_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015278u)) /* lint --e(923)*/

/** 128C, DMA Channel Address Control Register */
#define DMA_BLK1_CH16_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001528Cu)) /* lint --e(923)*/

/** 1284, DMA Channel Control Register */
#define DMA_BLK1_CH16_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015284u)) /* lint --e(923)*/

/** 1288, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH16_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015288u)) /* lint --e(923)*/

/** 1280, DMA Channel Status Register */
#define DMA_BLK1_CH16_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015280u)) /* lint --e(923)*/

/** 1294, DMA Channel Destination Address Register */
#define DMA_BLK1_CH16_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015294u)) /* lint --e(923)*/

/** 1290, DMA Channel Source Address Register */
#define DMA_BLK1_CH16_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015290u)) /* lint --e(923)*/

/** 1298, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH16_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015298u)) /* lint --e(923)*/

/** 12AC, DMA Channel Address Control Register */
#define DMA_BLK1_CH17_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00152ACu)) /* lint --e(923)*/

/** 12A4, DMA Channel Control Register */
#define DMA_BLK1_CH17_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00152A4u)) /* lint --e(923)*/

/** 12A8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH17_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00152A8u)) /* lint --e(923)*/

/** 12A0, DMA Channel Status Register */
#define DMA_BLK1_CH17_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00152A0u)) /* lint --e(923)*/

/** 12B4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH17_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00152B4u)) /* lint --e(923)*/

/** 12B0, DMA Channel Source Address Register */
#define DMA_BLK1_CH17_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00152B0u)) /* lint --e(923)*/

/** 12B8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH17_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00152B8u)) /* lint --e(923)*/

/** 12CC, DMA Channel Address Control Register */
#define DMA_BLK1_CH18_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00152CCu)) /* lint --e(923)*/

/** 12C4, DMA Channel Control Register */
#define DMA_BLK1_CH18_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00152C4u)) /* lint --e(923)*/

/** 12C8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH18_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00152C8u)) /* lint --e(923)*/

/** 12C0, DMA Channel Status Register */
#define DMA_BLK1_CH18_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00152C0u)) /* lint --e(923)*/

/** 12D4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH18_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00152D4u)) /* lint --e(923)*/

/** 12D0, DMA Channel Source Address Register */
#define DMA_BLK1_CH18_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00152D0u)) /* lint --e(923)*/

/** 12D8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH18_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00152D8u)) /* lint --e(923)*/

/** 12EC, DMA Channel Address Control Register */
#define DMA_BLK1_CH19_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00152ECu)) /* lint --e(923)*/

/** 12E4, DMA Channel Control Register */
#define DMA_BLK1_CH19_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00152E4u)) /* lint --e(923)*/

/** 12E8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH19_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00152E8u)) /* lint --e(923)*/

/** 12E0, DMA Channel Status Register */
#define DMA_BLK1_CH19_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00152E0u)) /* lint --e(923)*/

/** 12F4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH19_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00152F4u)) /* lint --e(923)*/

/** 12F0, DMA Channel Source Address Register */
#define DMA_BLK1_CH19_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00152F0u)) /* lint --e(923)*/

/** 12F8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH19_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00152F8u)) /* lint --e(923)*/

/** 10AC, DMA Channel Address Control Register */
#define DMA_BLK1_CH1_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00150ACu)) /* lint --e(923)*/

/** 10A4, DMA Channel Control Register */
#define DMA_BLK1_CH1_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00150A4u)) /* lint --e(923)*/

/** 10A8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH1_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00150A8u)) /* lint --e(923)*/

/** 10A0, DMA Channel Status Register */
#define DMA_BLK1_CH1_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00150A0u)) /* lint --e(923)*/

/** 10B4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH1_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00150B4u)) /* lint --e(923)*/

/** 10B0, DMA Channel Source Address Register */
#define DMA_BLK1_CH1_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00150B0u)) /* lint --e(923)*/

/** 10B8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH1_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00150B8u)) /* lint --e(923)*/

/** 130C, DMA Channel Address Control Register */
#define DMA_BLK1_CH20_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001530Cu)) /* lint --e(923)*/

/** 1304, DMA Channel Control Register */
#define DMA_BLK1_CH20_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015304u)) /* lint --e(923)*/

/** 1308, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH20_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015308u)) /* lint --e(923)*/

/** 1300, DMA Channel Status Register */
#define DMA_BLK1_CH20_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015300u)) /* lint --e(923)*/

/** 1314, DMA Channel Destination Address Register */
#define DMA_BLK1_CH20_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015314u)) /* lint --e(923)*/

/** 1310, DMA Channel Source Address Register */
#define DMA_BLK1_CH20_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015310u)) /* lint --e(923)*/

/** 1318, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH20_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015318u)) /* lint --e(923)*/

/** 132C, DMA Channel Address Control Register */
#define DMA_BLK1_CH21_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001532Cu)) /* lint --e(923)*/

/** 1324, DMA Channel Control Register */
#define DMA_BLK1_CH21_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015324u)) /* lint --e(923)*/

/** 1328, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH21_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015328u)) /* lint --e(923)*/

/** 1320, DMA Channel Status Register */
#define DMA_BLK1_CH21_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015320u)) /* lint --e(923)*/

/** 1334, DMA Channel Destination Address Register */
#define DMA_BLK1_CH21_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015334u)) /* lint --e(923)*/

/** 1330, DMA Channel Source Address Register */
#define DMA_BLK1_CH21_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015330u)) /* lint --e(923)*/

/** 1338, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH21_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015338u)) /* lint --e(923)*/

/** 134C, DMA Channel Address Control Register */
#define DMA_BLK1_CH22_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001534Cu)) /* lint --e(923)*/

/** 1344, DMA Channel Control Register */
#define DMA_BLK1_CH22_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015344u)) /* lint --e(923)*/

/** 1348, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH22_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015348u)) /* lint --e(923)*/

/** 1340, DMA Channel Status Register */
#define DMA_BLK1_CH22_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015340u)) /* lint --e(923)*/

/** 1354, DMA Channel Destination Address Register */
#define DMA_BLK1_CH22_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015354u)) /* lint --e(923)*/

/** 1350, DMA Channel Source Address Register */
#define DMA_BLK1_CH22_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015350u)) /* lint --e(923)*/

/** 1358, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH22_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015358u)) /* lint --e(923)*/

/** 136C, DMA Channel Address Control Register */
#define DMA_BLK1_CH23_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001536Cu)) /* lint --e(923)*/

/** 1364, DMA Channel Control Register */
#define DMA_BLK1_CH23_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015364u)) /* lint --e(923)*/

/** 1368, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH23_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015368u)) /* lint --e(923)*/

/** 1360, DMA Channel Status Register */
#define DMA_BLK1_CH23_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015360u)) /* lint --e(923)*/

/** 1374, DMA Channel Destination Address Register */
#define DMA_BLK1_CH23_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015374u)) /* lint --e(923)*/

/** 1370, DMA Channel Source Address Register */
#define DMA_BLK1_CH23_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015370u)) /* lint --e(923)*/

/** 1378, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH23_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015378u)) /* lint --e(923)*/

/** 10CC, DMA Channel Address Control Register */
#define DMA_BLK1_CH2_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00150CCu)) /* lint --e(923)*/

/** 10C4, DMA Channel Control Register */
#define DMA_BLK1_CH2_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00150C4u)) /* lint --e(923)*/

/** 10C8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH2_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00150C8u)) /* lint --e(923)*/

/** 10C0, DMA Channel Status Register */
#define DMA_BLK1_CH2_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00150C0u)) /* lint --e(923)*/

/** 10D4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH2_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00150D4u)) /* lint --e(923)*/

/** 10D0, DMA Channel Source Address Register */
#define DMA_BLK1_CH2_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00150D0u)) /* lint --e(923)*/

/** 10D8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH2_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00150D8u)) /* lint --e(923)*/

/** 10EC, DMA Channel Address Control Register */
#define DMA_BLK1_CH3_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00150ECu)) /* lint --e(923)*/

/** 10E4, DMA Channel Control Register */
#define DMA_BLK1_CH3_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00150E4u)) /* lint --e(923)*/

/** 10E8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH3_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00150E8u)) /* lint --e(923)*/

/** 10E0, DMA Channel Status Register */
#define DMA_BLK1_CH3_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00150E0u)) /* lint --e(923)*/

/** 10F4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH3_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00150F4u)) /* lint --e(923)*/

/** 10F0, DMA Channel Source Address Register */
#define DMA_BLK1_CH3_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00150F0u)) /* lint --e(923)*/

/** 10F8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH3_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00150F8u)) /* lint --e(923)*/

/** 110C, DMA Channel Address Control Register */
#define DMA_BLK1_CH4_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001510Cu)) /* lint --e(923)*/

/** 1104, DMA Channel Control Register */
#define DMA_BLK1_CH4_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015104u)) /* lint --e(923)*/

/** 1108, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH4_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015108u)) /* lint --e(923)*/

/** 1100, DMA Channel Status Register */
#define DMA_BLK1_CH4_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015100u)) /* lint --e(923)*/

/** 1114, DMA Channel Destination Address Register */
#define DMA_BLK1_CH4_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015114u)) /* lint --e(923)*/

/** 1110, DMA Channel Source Address Register */
#define DMA_BLK1_CH4_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015110u)) /* lint --e(923)*/

/** 1118, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH4_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015118u)) /* lint --e(923)*/

/** 112C, DMA Channel Address Control Register */
#define DMA_BLK1_CH5_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001512Cu)) /* lint --e(923)*/

/** 1124, DMA Channel Control Register */
#define DMA_BLK1_CH5_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015124u)) /* lint --e(923)*/

/** 1128, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH5_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015128u)) /* lint --e(923)*/

/** 1120, DMA Channel Status Register */
#define DMA_BLK1_CH5_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015120u)) /* lint --e(923)*/

/** 1134, DMA Channel Destination Address Register */
#define DMA_BLK1_CH5_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015134u)) /* lint --e(923)*/

/** 1130, DMA Channel Source Address Register */
#define DMA_BLK1_CH5_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015130u)) /* lint --e(923)*/

/** 1138, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH5_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015138u)) /* lint --e(923)*/

/** 114C, DMA Channel Address Control Register */
#define DMA_BLK1_CH6_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001514Cu)) /* lint --e(923)*/

/** 1144, DMA Channel Control Register */
#define DMA_BLK1_CH6_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015144u)) /* lint --e(923)*/

/** 1148, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH6_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015148u)) /* lint --e(923)*/

/** 1140, DMA Channel Status Register */
#define DMA_BLK1_CH6_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015140u)) /* lint --e(923)*/

/** 1154, DMA Channel Destination Address Register */
#define DMA_BLK1_CH6_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015154u)) /* lint --e(923)*/

/** 1150, DMA Channel Source Address Register */
#define DMA_BLK1_CH6_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015150u)) /* lint --e(923)*/

/** 1158, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH6_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015158u)) /* lint --e(923)*/

/** 116C, DMA Channel Address Control Register */
#define DMA_BLK1_CH7_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001516Cu)) /* lint --e(923)*/

/** 1164, DMA Channel Control Register */
#define DMA_BLK1_CH7_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015164u)) /* lint --e(923)*/

/** 1168, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH7_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015168u)) /* lint --e(923)*/

/** 1160, DMA Channel Status Register */
#define DMA_BLK1_CH7_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015160u)) /* lint --e(923)*/

/** 1174, DMA Channel Destination Address Register */
#define DMA_BLK1_CH7_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015174u)) /* lint --e(923)*/

/** 1170, DMA Channel Source Address Register */
#define DMA_BLK1_CH7_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015170u)) /* lint --e(923)*/

/** 1178, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH7_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015178u)) /* lint --e(923)*/

/** 118C, DMA Channel Address Control Register */
#define DMA_BLK1_CH8_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001518Cu)) /* lint --e(923)*/

/** 1184, DMA Channel Control Register */
#define DMA_BLK1_CH8_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015184u)) /* lint --e(923)*/

/** 1188, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH8_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015188u)) /* lint --e(923)*/

/** 1180, DMA Channel Status Register */
#define DMA_BLK1_CH8_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015180u)) /* lint --e(923)*/

/** 1194, DMA Channel Destination Address Register */
#define DMA_BLK1_CH8_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015194u)) /* lint --e(923)*/

/** 1190, DMA Channel Source Address Register */
#define DMA_BLK1_CH8_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015190u)) /* lint --e(923)*/

/** 1198, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH8_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015198u)) /* lint --e(923)*/

/** 11AC, DMA Channel Address Control Register */
#define DMA_BLK1_CH9_ADRCR ((*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00151ACu)) /* lint --e(923)*/

/** 11A4, DMA Channel Control Register */
#define DMA_BLK1_CH9_CHCR ((*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00151A4u)) /* lint --e(923)*/

/** 11A8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH9_CHICR ((*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00151A8u)) /* lint --e(923)*/

/** 11A0, DMA Channel Status Register */
#define DMA_BLK1_CH9_CHSR ((*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00151A0u)) /* lint --e(923)*/

/** 11B4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH9_DADR ((*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00151B4u)) /* lint --e(923)*/

/** 11B0, DMA Channel Source Address Register */
#define DMA_BLK1_CH9_SADR ((*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00151B0u)) /* lint --e(923)*/

/** 11B8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH9_SHADR ((*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00151B8u)) /* lint --e(923)*/

/** 1070, DMA Channel Interrupt Set Register0 */
#define DMA_BLK1_CHINTR0 ((*(volatile Ifx_DMA_BLK_CHINTR0*)0xF0015070u)) /* lint --e(923)*/

/** 1040, DMA Channel Reset Request Register0 */
#define DMA_BLK1_CHRSTR0 ((*(volatile Ifx_DMA_BLK_CHRSTR0*)0xF0015040u)) /* lint --e(923)*/

/** 1028, DMA Clear Error Register */
#define DMA_BLK1_CLRE ((*(volatile Ifx_DMA_BLK_CLRE*)0xF0015028u)) /* lint --e(923)*/

/** 1020, DMA Enable Error Register */
#define DMA_BLK1_EER ((*(volatile Ifx_DMA_BLK_EER*)0xF0015020u)) /* lint --e(923)*/

/** 1024, DMA Error Status Register */
#define DMA_BLK1_ERRSR ((*(volatile Ifx_DMA_BLK_ERRSR*)0xF0015024u)) /* lint --e(923)*/

/** 1038, DMA Move Engine Interrupt Set Register */
#define DMA_BLK1_ME_INTR ((*(volatile Ifx_DMA_BLK_ME_INTR*)0xF0015038u)) /* lint --e(923)*/

/** 103C, DMA Move Engine Pattern Read Register */
#define DMA_BLK1_ME_PR ((*(volatile Ifx_DMA_BLK_ME_PR*)0xF001503Cu)) /* lint --e(923)*/

/** 1034, DMA Move Engine Read Register */
#define DMA_BLK1_ME_R ((*(volatile Ifx_DMA_BLK_ME_R*)0xF0015034u)) /* lint --e(923)*/

/** 1030, DMA Move Engine Status Register */
#define DMA_BLK1_ME_SR ((*(volatile Ifx_DMA_BLK_ME_SR*)0xF0015030u)) /* lint --e(923)*/

/** 1068, DMA Suspend Acknowledge Register0 */
#define DMA_BLK1_SUSACR0 ((*(volatile Ifx_DMA_BLK_SUSACR0*)0xF0015068u)) /* lint --e(923)*/

/** 1060, DMA Suspend Enable Register0 */
#define DMA_BLK1_SUSENR0 ((*(volatile Ifx_DMA_BLK_SUSENR0*)0xF0015060u)) /* lint --e(923)*/

/** Alias for DMA_BLK0_CH0_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH0_ADRCR instead.
 * 8C, DMA Channel Address Control Register
 */
#define DMA_CH00_ADRCR (DMA_BLK0_CH0_ADRCR)

/** Alias for DMA_BLK0_CH0_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH0_CHCR instead.
 * 84, DMA Channel Control Register
 */
#define DMA_CH00_CHCR (DMA_BLK0_CH0_CHCR)

/** Alias for DMA_BLK0_CH0_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH0_CHICR instead.
 * 88, DMA Channel Interrupt Control Register
 */
#define DMA_CH00_CHICR (DMA_BLK0_CH0_CHICR)

/** Alias for DMA_BLK0_CH0_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH0_CHSR instead.
 * 80, DMA Channel Status Register
 */
#define DMA_CH00_CHSR (DMA_BLK0_CH0_CHSR)

/** Alias for DMA_BLK0_CH0_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH0_DADR instead.
 * 94, DMA Channel Destination Address Register
 */
#define DMA_CH00_DADR (DMA_BLK0_CH0_DADR)

/** Alias for DMA_BLK0_CH0_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH0_SADR instead.
 * 90, DMA Channel Source Address Register
 */
#define DMA_CH00_SADR (DMA_BLK0_CH0_SADR)

/** Alias for DMA_BLK0_CH0_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH0_SHADR instead.
 * 98, DMA Channel Shadow Address Register
 */
#define DMA_CH00_SHADR (DMA_BLK0_CH0_SHADR)

/** Alias for DMA_BLK0_CH10_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH10_ADRCR instead.
 * 1CC, DMA Channel Address Control Register
 */
#define DMA_CH010_ADRCR (DMA_BLK0_CH10_ADRCR)

/** Alias for DMA_BLK0_CH10_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH10_CHCR instead.
 * 1C4, DMA Channel Control Register
 */
#define DMA_CH010_CHCR (DMA_BLK0_CH10_CHCR)

/** Alias for DMA_BLK0_CH10_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH10_CHICR instead.
 * 1C8, DMA Channel Interrupt Control Register
 */
#define DMA_CH010_CHICR (DMA_BLK0_CH10_CHICR)

/** Alias for DMA_BLK0_CH10_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH10_CHSR instead.
 * 1C0, DMA Channel Status Register
 */
#define DMA_CH010_CHSR (DMA_BLK0_CH10_CHSR)

/** Alias for DMA_BLK0_CH10_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH10_DADR instead.
 * 1D4, DMA Channel Destination Address Register
 */
#define DMA_CH010_DADR (DMA_BLK0_CH10_DADR)

/** Alias for DMA_BLK0_CH10_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH10_SADR instead.
 * 1D0, DMA Channel Source Address Register
 */
#define DMA_CH010_SADR (DMA_BLK0_CH10_SADR)

/** Alias for DMA_BLK0_CH10_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH10_SHADR instead.
 * 1D8, DMA Channel Shadow Address Register
 */
#define DMA_CH010_SHADR (DMA_BLK0_CH10_SHADR)

/** Alias for DMA_BLK0_CH11_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH11_ADRCR instead.
 * 1EC, DMA Channel Address Control Register
 */
#define DMA_CH011_ADRCR (DMA_BLK0_CH11_ADRCR)

/** Alias for DMA_BLK0_CH11_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH11_CHCR instead.
 * 1E4, DMA Channel Control Register
 */
#define DMA_CH011_CHCR (DMA_BLK0_CH11_CHCR)

/** Alias for DMA_BLK0_CH11_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH11_CHICR instead.
 * 1E8, DMA Channel Interrupt Control Register
 */
#define DMA_CH011_CHICR (DMA_BLK0_CH11_CHICR)

/** Alias for DMA_BLK0_CH11_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH11_CHSR instead.
 * 1E0, DMA Channel Status Register
 */
#define DMA_CH011_CHSR (DMA_BLK0_CH11_CHSR)

/** Alias for DMA_BLK0_CH11_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH11_DADR instead.
 * 1F4, DMA Channel Destination Address Register
 */
#define DMA_CH011_DADR (DMA_BLK0_CH11_DADR)

/** Alias for DMA_BLK0_CH11_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH11_SADR instead.
 * 1F0, DMA Channel Source Address Register
 */
#define DMA_CH011_SADR (DMA_BLK0_CH11_SADR)

/** Alias for DMA_BLK0_CH11_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH11_SHADR instead.
 * 1F8, DMA Channel Shadow Address Register
 */
#define DMA_CH011_SHADR (DMA_BLK0_CH11_SHADR)

/** Alias for DMA_BLK0_CH12_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH12_ADRCR instead.
 * 20C, DMA Channel Address Control Register
 */
#define DMA_CH012_ADRCR (DMA_BLK0_CH12_ADRCR)

/** Alias for DMA_BLK0_CH12_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH12_CHCR instead.
 * 204, DMA Channel Control Register
 */
#define DMA_CH012_CHCR (DMA_BLK0_CH12_CHCR)

/** Alias for DMA_BLK0_CH12_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH12_CHICR instead.
 * 208, DMA Channel Interrupt Control Register
 */
#define DMA_CH012_CHICR (DMA_BLK0_CH12_CHICR)

/** Alias for DMA_BLK0_CH12_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH12_CHSR instead.
 * 200, DMA Channel Status Register
 */
#define DMA_CH012_CHSR (DMA_BLK0_CH12_CHSR)

/** Alias for DMA_BLK0_CH12_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH12_DADR instead.
 * 214, DMA Channel Destination Address Register
 */
#define DMA_CH012_DADR (DMA_BLK0_CH12_DADR)

/** Alias for DMA_BLK0_CH12_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH12_SADR instead.
 * 210, DMA Channel Source Address Register
 */
#define DMA_CH012_SADR (DMA_BLK0_CH12_SADR)

/** Alias for DMA_BLK0_CH12_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH12_SHADR instead.
 * 218, DMA Channel Shadow Address Register
 */
#define DMA_CH012_SHADR (DMA_BLK0_CH12_SHADR)

/** Alias for DMA_BLK0_CH13_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH13_ADRCR instead.
 * 22C, DMA Channel Address Control Register
 */
#define DMA_CH013_ADRCR (DMA_BLK0_CH13_ADRCR)

/** Alias for DMA_BLK0_CH13_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH13_CHCR instead.
 * 224, DMA Channel Control Register
 */
#define DMA_CH013_CHCR (DMA_BLK0_CH13_CHCR)

/** Alias for DMA_BLK0_CH13_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH13_CHICR instead.
 * 228, DMA Channel Interrupt Control Register
 */
#define DMA_CH013_CHICR (DMA_BLK0_CH13_CHICR)

/** Alias for DMA_BLK0_CH13_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH13_CHSR instead.
 * 220, DMA Channel Status Register
 */
#define DMA_CH013_CHSR (DMA_BLK0_CH13_CHSR)

/** Alias for DMA_BLK0_CH13_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH13_DADR instead.
 * 234, DMA Channel Destination Address Register
 */
#define DMA_CH013_DADR (DMA_BLK0_CH13_DADR)

/** Alias for DMA_BLK0_CH13_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH13_SADR instead.
 * 230, DMA Channel Source Address Register
 */
#define DMA_CH013_SADR (DMA_BLK0_CH13_SADR)

/** Alias for DMA_BLK0_CH13_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH13_SHADR instead.
 * 238, DMA Channel Shadow Address Register
 */
#define DMA_CH013_SHADR (DMA_BLK0_CH13_SHADR)

/** Alias for DMA_BLK0_CH14_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH14_ADRCR instead.
 * 24C, DMA Channel Address Control Register
 */
#define DMA_CH014_ADRCR (DMA_BLK0_CH14_ADRCR)

/** Alias for DMA_BLK0_CH14_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH14_CHCR instead.
 * 244, DMA Channel Control Register
 */
#define DMA_CH014_CHCR (DMA_BLK0_CH14_CHCR)

/** Alias for DMA_BLK0_CH14_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH14_CHICR instead.
 * 248, DMA Channel Interrupt Control Register
 */
#define DMA_CH014_CHICR (DMA_BLK0_CH14_CHICR)

/** Alias for DMA_BLK0_CH14_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH14_CHSR instead.
 * 240, DMA Channel Status Register
 */
#define DMA_CH014_CHSR (DMA_BLK0_CH14_CHSR)

/** Alias for DMA_BLK0_CH14_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH14_DADR instead.
 * 254, DMA Channel Destination Address Register
 */
#define DMA_CH014_DADR (DMA_BLK0_CH14_DADR)

/** Alias for DMA_BLK0_CH14_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH14_SADR instead.
 * 250, DMA Channel Source Address Register
 */
#define DMA_CH014_SADR (DMA_BLK0_CH14_SADR)

/** Alias for DMA_BLK0_CH14_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH14_SHADR instead.
 * 258, DMA Channel Shadow Address Register
 */
#define DMA_CH014_SHADR (DMA_BLK0_CH14_SHADR)

/** Alias for DMA_BLK0_CH15_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH15_ADRCR instead.
 * 26C, DMA Channel Address Control Register
 */
#define DMA_CH015_ADRCR (DMA_BLK0_CH15_ADRCR)

/** Alias for DMA_BLK0_CH15_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH15_CHCR instead.
 * 264, DMA Channel Control Register
 */
#define DMA_CH015_CHCR (DMA_BLK0_CH15_CHCR)

/** Alias for DMA_BLK0_CH15_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH15_CHICR instead.
 * 268, DMA Channel Interrupt Control Register
 */
#define DMA_CH015_CHICR (DMA_BLK0_CH15_CHICR)

/** Alias for DMA_BLK0_CH15_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH15_CHSR instead.
 * 260, DMA Channel Status Register
 */
#define DMA_CH015_CHSR (DMA_BLK0_CH15_CHSR)

/** Alias for DMA_BLK0_CH15_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH15_DADR instead.
 * 274, DMA Channel Destination Address Register
 */
#define DMA_CH015_DADR (DMA_BLK0_CH15_DADR)

/** Alias for DMA_BLK0_CH15_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH15_SADR instead.
 * 270, DMA Channel Source Address Register
 */
#define DMA_CH015_SADR (DMA_BLK0_CH15_SADR)

/** Alias for DMA_BLK0_CH15_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH15_SHADR instead.
 * 278, DMA Channel Shadow Address Register
 */
#define DMA_CH015_SHADR (DMA_BLK0_CH15_SHADR)

/** Alias for DMA_BLK0_CH16_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH16_ADRCR instead.
 * 28C, DMA Channel Address Control Register
 */
#define DMA_CH016_ADRCR (DMA_BLK0_CH16_ADRCR)

/** Alias for DMA_BLK0_CH16_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH16_CHCR instead.
 * 284, DMA Channel Control Register
 */
#define DMA_CH016_CHCR (DMA_BLK0_CH16_CHCR)

/** Alias for DMA_BLK0_CH16_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH16_CHICR instead.
 * 288, DMA Channel Interrupt Control Register
 */
#define DMA_CH016_CHICR (DMA_BLK0_CH16_CHICR)

/** Alias for DMA_BLK0_CH16_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH16_CHSR instead.
 * 280, DMA Channel Status Register
 */
#define DMA_CH016_CHSR (DMA_BLK0_CH16_CHSR)

/** Alias for DMA_BLK0_CH16_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH16_DADR instead.
 * 294, DMA Channel Destination Address Register
 */
#define DMA_CH016_DADR (DMA_BLK0_CH16_DADR)

/** Alias for DMA_BLK0_CH16_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH16_SADR instead.
 * 290, DMA Channel Source Address Register
 */
#define DMA_CH016_SADR (DMA_BLK0_CH16_SADR)

/** Alias for DMA_BLK0_CH16_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH16_SHADR instead.
 * 298, DMA Channel Shadow Address Register
 */
#define DMA_CH016_SHADR (DMA_BLK0_CH16_SHADR)

/** Alias for DMA_BLK0_CH17_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH17_ADRCR instead.
 * 2AC, DMA Channel Address Control Register
 */
#define DMA_CH017_ADRCR (DMA_BLK0_CH17_ADRCR)

/** Alias for DMA_BLK0_CH17_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH17_CHCR instead.
 * 2A4, DMA Channel Control Register
 */
#define DMA_CH017_CHCR (DMA_BLK0_CH17_CHCR)

/** Alias for DMA_BLK0_CH17_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH17_CHICR instead.
 * 2A8, DMA Channel Interrupt Control Register
 */
#define DMA_CH017_CHICR (DMA_BLK0_CH17_CHICR)

/** Alias for DMA_BLK0_CH17_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH17_CHSR instead.
 * 2A0, DMA Channel Status Register
 */
#define DMA_CH017_CHSR (DMA_BLK0_CH17_CHSR)

/** Alias for DMA_BLK0_CH17_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH17_DADR instead.
 * 2B4, DMA Channel Destination Address Register
 */
#define DMA_CH017_DADR (DMA_BLK0_CH17_DADR)

/** Alias for DMA_BLK0_CH17_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH17_SADR instead.
 * 2B0, DMA Channel Source Address Register
 */
#define DMA_CH017_SADR (DMA_BLK0_CH17_SADR)

/** Alias for DMA_BLK0_CH17_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH17_SHADR instead.
 * 2B8, DMA Channel Shadow Address Register
 */
#define DMA_CH017_SHADR (DMA_BLK0_CH17_SHADR)

/** Alias for DMA_BLK0_CH18_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH18_ADRCR instead.
 * 2CC, DMA Channel Address Control Register
 */
#define DMA_CH018_ADRCR (DMA_BLK0_CH18_ADRCR)

/** Alias for DMA_BLK0_CH18_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH18_CHCR instead.
 * 2C4, DMA Channel Control Register
 */
#define DMA_CH018_CHCR (DMA_BLK0_CH18_CHCR)

/** Alias for DMA_BLK0_CH18_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH18_CHICR instead.
 * 2C8, DMA Channel Interrupt Control Register
 */
#define DMA_CH018_CHICR (DMA_BLK0_CH18_CHICR)

/** Alias for DMA_BLK0_CH18_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH18_CHSR instead.
 * 2C0, DMA Channel Status Register
 */
#define DMA_CH018_CHSR (DMA_BLK0_CH18_CHSR)

/** Alias for DMA_BLK0_CH18_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH18_DADR instead.
 * 2D4, DMA Channel Destination Address Register
 */
#define DMA_CH018_DADR (DMA_BLK0_CH18_DADR)

/** Alias for DMA_BLK0_CH18_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH18_SADR instead.
 * 2D0, DMA Channel Source Address Register
 */
#define DMA_CH018_SADR (DMA_BLK0_CH18_SADR)

/** Alias for DMA_BLK0_CH18_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH18_SHADR instead.
 * 2D8, DMA Channel Shadow Address Register
 */
#define DMA_CH018_SHADR (DMA_BLK0_CH18_SHADR)

/** Alias for DMA_BLK0_CH19_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH19_ADRCR instead.
 * 2EC, DMA Channel Address Control Register
 */
#define DMA_CH019_ADRCR (DMA_BLK0_CH19_ADRCR)

/** Alias for DMA_BLK0_CH19_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH19_CHCR instead.
 * 2E4, DMA Channel Control Register
 */
#define DMA_CH019_CHCR (DMA_BLK0_CH19_CHCR)

/** Alias for DMA_BLK0_CH19_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH19_CHICR instead.
 * 2E8, DMA Channel Interrupt Control Register
 */
#define DMA_CH019_CHICR (DMA_BLK0_CH19_CHICR)

/** Alias for DMA_BLK0_CH19_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH19_CHSR instead.
 * 2E0, DMA Channel Status Register
 */
#define DMA_CH019_CHSR (DMA_BLK0_CH19_CHSR)

/** Alias for DMA_BLK0_CH19_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH19_DADR instead.
 * 2F4, DMA Channel Destination Address Register
 */
#define DMA_CH019_DADR (DMA_BLK0_CH19_DADR)

/** Alias for DMA_BLK0_CH19_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH19_SADR instead.
 * 2F0, DMA Channel Source Address Register
 */
#define DMA_CH019_SADR (DMA_BLK0_CH19_SADR)

/** Alias for DMA_BLK0_CH19_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH19_SHADR instead.
 * 2F8, DMA Channel Shadow Address Register
 */
#define DMA_CH019_SHADR (DMA_BLK0_CH19_SHADR)

/** Alias for DMA_BLK0_CH1_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH1_ADRCR instead.
 * AC, DMA Channel Address Control Register
 */
#define DMA_CH01_ADRCR (DMA_BLK0_CH1_ADRCR)

/** Alias for DMA_BLK0_CH1_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH1_CHCR instead.
 * A4, DMA Channel Control Register
 */
#define DMA_CH01_CHCR (DMA_BLK0_CH1_CHCR)

/** Alias for DMA_BLK0_CH1_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH1_CHICR instead.
 * A8, DMA Channel Interrupt Control Register
 */
#define DMA_CH01_CHICR (DMA_BLK0_CH1_CHICR)

/** Alias for DMA_BLK0_CH1_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH1_CHSR instead.
 * A0, DMA Channel Status Register
 */
#define DMA_CH01_CHSR (DMA_BLK0_CH1_CHSR)

/** Alias for DMA_BLK0_CH1_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH1_DADR instead.
 * B4, DMA Channel Destination Address Register
 */
#define DMA_CH01_DADR (DMA_BLK0_CH1_DADR)

/** Alias for DMA_BLK0_CH1_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH1_SADR instead.
 * B0, DMA Channel Source Address Register
 */
#define DMA_CH01_SADR (DMA_BLK0_CH1_SADR)

/** Alias for DMA_BLK0_CH1_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH1_SHADR instead.
 * B8, DMA Channel Shadow Address Register
 */
#define DMA_CH01_SHADR (DMA_BLK0_CH1_SHADR)

/** Alias for DMA_BLK0_CH20_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH20_ADRCR instead.
 * 30C, DMA Channel Address Control Register
 */
#define DMA_CH020_ADRCR (DMA_BLK0_CH20_ADRCR)

/** Alias for DMA_BLK0_CH20_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH20_CHCR instead.
 * 304, DMA Channel Control Register
 */
#define DMA_CH020_CHCR (DMA_BLK0_CH20_CHCR)

/** Alias for DMA_BLK0_CH20_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH20_CHICR instead.
 * 308, DMA Channel Interrupt Control Register
 */
#define DMA_CH020_CHICR (DMA_BLK0_CH20_CHICR)

/** Alias for DMA_BLK0_CH20_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH20_CHSR instead.
 * 300, DMA Channel Status Register
 */
#define DMA_CH020_CHSR (DMA_BLK0_CH20_CHSR)

/** Alias for DMA_BLK0_CH20_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH20_DADR instead.
 * 314, DMA Channel Destination Address Register
 */
#define DMA_CH020_DADR (DMA_BLK0_CH20_DADR)

/** Alias for DMA_BLK0_CH20_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH20_SADR instead.
 * 310, DMA Channel Source Address Register
 */
#define DMA_CH020_SADR (DMA_BLK0_CH20_SADR)

/** Alias for DMA_BLK0_CH20_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH20_SHADR instead.
 * 318, DMA Channel Shadow Address Register
 */
#define DMA_CH020_SHADR (DMA_BLK0_CH20_SHADR)

/** Alias for DMA_BLK0_CH21_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH21_ADRCR instead.
 * 32C, DMA Channel Address Control Register
 */
#define DMA_CH021_ADRCR (DMA_BLK0_CH21_ADRCR)

/** Alias for DMA_BLK0_CH21_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH21_CHCR instead.
 * 324, DMA Channel Control Register
 */
#define DMA_CH021_CHCR (DMA_BLK0_CH21_CHCR)

/** Alias for DMA_BLK0_CH21_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH21_CHICR instead.
 * 328, DMA Channel Interrupt Control Register
 */
#define DMA_CH021_CHICR (DMA_BLK0_CH21_CHICR)

/** Alias for DMA_BLK0_CH21_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH21_CHSR instead.
 * 320, DMA Channel Status Register
 */
#define DMA_CH021_CHSR (DMA_BLK0_CH21_CHSR)

/** Alias for DMA_BLK0_CH21_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH21_DADR instead.
 * 334, DMA Channel Destination Address Register
 */
#define DMA_CH021_DADR (DMA_BLK0_CH21_DADR)

/** Alias for DMA_BLK0_CH21_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH21_SADR instead.
 * 330, DMA Channel Source Address Register
 */
#define DMA_CH021_SADR (DMA_BLK0_CH21_SADR)

/** Alias for DMA_BLK0_CH21_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH21_SHADR instead.
 * 338, DMA Channel Shadow Address Register
 */
#define DMA_CH021_SHADR (DMA_BLK0_CH21_SHADR)

/** Alias for DMA_BLK0_CH22_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH22_ADRCR instead.
 * 34C, DMA Channel Address Control Register
 */
#define DMA_CH022_ADRCR (DMA_BLK0_CH22_ADRCR)

/** Alias for DMA_BLK0_CH22_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH22_CHCR instead.
 * 344, DMA Channel Control Register
 */
#define DMA_CH022_CHCR (DMA_BLK0_CH22_CHCR)

/** Alias for DMA_BLK0_CH22_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH22_CHICR instead.
 * 348, DMA Channel Interrupt Control Register
 */
#define DMA_CH022_CHICR (DMA_BLK0_CH22_CHICR)

/** Alias for DMA_BLK0_CH22_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH22_CHSR instead.
 * 340, DMA Channel Status Register
 */
#define DMA_CH022_CHSR (DMA_BLK0_CH22_CHSR)

/** Alias for DMA_BLK0_CH22_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH22_DADR instead.
 * 354, DMA Channel Destination Address Register
 */
#define DMA_CH022_DADR (DMA_BLK0_CH22_DADR)

/** Alias for DMA_BLK0_CH22_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH22_SADR instead.
 * 350, DMA Channel Source Address Register
 */
#define DMA_CH022_SADR (DMA_BLK0_CH22_SADR)

/** Alias for DMA_BLK0_CH22_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH22_SHADR instead.
 * 358, DMA Channel Shadow Address Register
 */
#define DMA_CH022_SHADR (DMA_BLK0_CH22_SHADR)

/** Alias for DMA_BLK0_CH23_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH23_ADRCR instead.
 * 36C, DMA Channel Address Control Register
 */
#define DMA_CH023_ADRCR (DMA_BLK0_CH23_ADRCR)

/** Alias for DMA_BLK0_CH23_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH23_CHCR instead.
 * 364, DMA Channel Control Register
 */
#define DMA_CH023_CHCR (DMA_BLK0_CH23_CHCR)

/** Alias for DMA_BLK0_CH23_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH23_CHICR instead.
 * 368, DMA Channel Interrupt Control Register
 */
#define DMA_CH023_CHICR (DMA_BLK0_CH23_CHICR)

/** Alias for DMA_BLK0_CH23_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH23_CHSR instead.
 * 360, DMA Channel Status Register
 */
#define DMA_CH023_CHSR (DMA_BLK0_CH23_CHSR)

/** Alias for DMA_BLK0_CH23_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH23_DADR instead.
 * 374, DMA Channel Destination Address Register
 */
#define DMA_CH023_DADR (DMA_BLK0_CH23_DADR)

/** Alias for DMA_BLK0_CH23_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH23_SADR instead.
 * 370, DMA Channel Source Address Register
 */
#define DMA_CH023_SADR (DMA_BLK0_CH23_SADR)

/** Alias for DMA_BLK0_CH23_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH23_SHADR instead.
 * 378, DMA Channel Shadow Address Register
 */
#define DMA_CH023_SHADR (DMA_BLK0_CH23_SHADR)

/** Alias for DMA_BLK0_CH2_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH2_ADRCR instead.
 * CC, DMA Channel Address Control Register
 */
#define DMA_CH02_ADRCR (DMA_BLK0_CH2_ADRCR)

/** Alias for DMA_BLK0_CH2_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH2_CHCR instead.
 * C4, DMA Channel Control Register
 */
#define DMA_CH02_CHCR (DMA_BLK0_CH2_CHCR)

/** Alias for DMA_BLK0_CH2_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH2_CHICR instead.
 * C8, DMA Channel Interrupt Control Register
 */
#define DMA_CH02_CHICR (DMA_BLK0_CH2_CHICR)

/** Alias for DMA_BLK0_CH2_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH2_CHSR instead.
 * C0, DMA Channel Status Register
 */
#define DMA_CH02_CHSR (DMA_BLK0_CH2_CHSR)

/** Alias for DMA_BLK0_CH2_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH2_DADR instead.
 * D4, DMA Channel Destination Address Register
 */
#define DMA_CH02_DADR (DMA_BLK0_CH2_DADR)

/** Alias for DMA_BLK0_CH2_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH2_SADR instead.
 * D0, DMA Channel Source Address Register
 */
#define DMA_CH02_SADR (DMA_BLK0_CH2_SADR)

/** Alias for DMA_BLK0_CH2_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH2_SHADR instead.
 * D8, DMA Channel Shadow Address Register
 */
#define DMA_CH02_SHADR (DMA_BLK0_CH2_SHADR)

/** Alias for DMA_BLK0_CH3_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH3_ADRCR instead.
 * EC, DMA Channel Address Control Register
 */
#define DMA_CH03_ADRCR (DMA_BLK0_CH3_ADRCR)

/** Alias for DMA_BLK0_CH3_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH3_CHCR instead.
 * E4, DMA Channel Control Register
 */
#define DMA_CH03_CHCR (DMA_BLK0_CH3_CHCR)

/** Alias for DMA_BLK0_CH3_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH3_CHICR instead.
 * E8, DMA Channel Interrupt Control Register
 */
#define DMA_CH03_CHICR (DMA_BLK0_CH3_CHICR)

/** Alias for DMA_BLK0_CH3_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH3_CHSR instead.
 * E0, DMA Channel Status Register
 */
#define DMA_CH03_CHSR (DMA_BLK0_CH3_CHSR)

/** Alias for DMA_BLK0_CH3_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH3_DADR instead.
 * F4, DMA Channel Destination Address Register
 */
#define DMA_CH03_DADR (DMA_BLK0_CH3_DADR)

/** Alias for DMA_BLK0_CH3_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH3_SADR instead.
 * F0, DMA Channel Source Address Register
 */
#define DMA_CH03_SADR (DMA_BLK0_CH3_SADR)

/** Alias for DMA_BLK0_CH3_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH3_SHADR instead.
 * F8, DMA Channel Shadow Address Register
 */
#define DMA_CH03_SHADR (DMA_BLK0_CH3_SHADR)

/** Alias for DMA_BLK0_CH4_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH4_ADRCR instead.
 * 10C, DMA Channel Address Control Register
 */
#define DMA_CH04_ADRCR (DMA_BLK0_CH4_ADRCR)

/** Alias for DMA_BLK0_CH4_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH4_CHCR instead.
 * 104, DMA Channel Control Register
 */
#define DMA_CH04_CHCR (DMA_BLK0_CH4_CHCR)

/** Alias for DMA_BLK0_CH4_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH4_CHICR instead.
 * 108, DMA Channel Interrupt Control Register
 */
#define DMA_CH04_CHICR (DMA_BLK0_CH4_CHICR)

/** Alias for DMA_BLK0_CH4_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH4_CHSR instead.
 * 100, DMA Channel Status Register
 */
#define DMA_CH04_CHSR (DMA_BLK0_CH4_CHSR)

/** Alias for DMA_BLK0_CH4_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH4_DADR instead.
 * 114, DMA Channel Destination Address Register
 */
#define DMA_CH04_DADR (DMA_BLK0_CH4_DADR)

/** Alias for DMA_BLK0_CH4_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH4_SADR instead.
 * 110, DMA Channel Source Address Register
 */
#define DMA_CH04_SADR (DMA_BLK0_CH4_SADR)

/** Alias for DMA_BLK0_CH4_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH4_SHADR instead.
 * 118, DMA Channel Shadow Address Register
 */
#define DMA_CH04_SHADR (DMA_BLK0_CH4_SHADR)

/** Alias for DMA_BLK0_CH5_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH5_ADRCR instead.
 * 12C, DMA Channel Address Control Register
 */
#define DMA_CH05_ADRCR (DMA_BLK0_CH5_ADRCR)

/** Alias for DMA_BLK0_CH5_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH5_CHCR instead.
 * 124, DMA Channel Control Register
 */
#define DMA_CH05_CHCR (DMA_BLK0_CH5_CHCR)

/** Alias for DMA_BLK0_CH5_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH5_CHICR instead.
 * 128, DMA Channel Interrupt Control Register
 */
#define DMA_CH05_CHICR (DMA_BLK0_CH5_CHICR)

/** Alias for DMA_BLK0_CH5_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH5_CHSR instead.
 * 120, DMA Channel Status Register
 */
#define DMA_CH05_CHSR (DMA_BLK0_CH5_CHSR)

/** Alias for DMA_BLK0_CH5_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH5_DADR instead.
 * 134, DMA Channel Destination Address Register
 */
#define DMA_CH05_DADR (DMA_BLK0_CH5_DADR)

/** Alias for DMA_BLK0_CH5_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH5_SADR instead.
 * 130, DMA Channel Source Address Register
 */
#define DMA_CH05_SADR (DMA_BLK0_CH5_SADR)

/** Alias for DMA_BLK0_CH5_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH5_SHADR instead.
 * 138, DMA Channel Shadow Address Register
 */
#define DMA_CH05_SHADR (DMA_BLK0_CH5_SHADR)

/** Alias for DMA_BLK0_CH6_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH6_ADRCR instead.
 * 14C, DMA Channel Address Control Register
 */
#define DMA_CH06_ADRCR (DMA_BLK0_CH6_ADRCR)

/** Alias for DMA_BLK0_CH6_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH6_CHCR instead.
 * 144, DMA Channel Control Register
 */
#define DMA_CH06_CHCR (DMA_BLK0_CH6_CHCR)

/** Alias for DMA_BLK0_CH6_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH6_CHICR instead.
 * 148, DMA Channel Interrupt Control Register
 */
#define DMA_CH06_CHICR (DMA_BLK0_CH6_CHICR)

/** Alias for DMA_BLK0_CH6_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH6_CHSR instead.
 * 140, DMA Channel Status Register
 */
#define DMA_CH06_CHSR (DMA_BLK0_CH6_CHSR)

/** Alias for DMA_BLK0_CH6_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH6_DADR instead.
 * 154, DMA Channel Destination Address Register
 */
#define DMA_CH06_DADR (DMA_BLK0_CH6_DADR)

/** Alias for DMA_BLK0_CH6_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH6_SADR instead.
 * 150, DMA Channel Source Address Register
 */
#define DMA_CH06_SADR (DMA_BLK0_CH6_SADR)

/** Alias for DMA_BLK0_CH6_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH6_SHADR instead.
 * 158, DMA Channel Shadow Address Register
 */
#define DMA_CH06_SHADR (DMA_BLK0_CH6_SHADR)

/** Alias for DMA_BLK0_CH7_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH7_ADRCR instead.
 * 16C, DMA Channel Address Control Register
 */
#define DMA_CH07_ADRCR (DMA_BLK0_CH7_ADRCR)

/** Alias for DMA_BLK0_CH7_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH7_CHCR instead.
 * 164, DMA Channel Control Register
 */
#define DMA_CH07_CHCR (DMA_BLK0_CH7_CHCR)

/** Alias for DMA_BLK0_CH7_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH7_CHICR instead.
 * 168, DMA Channel Interrupt Control Register
 */
#define DMA_CH07_CHICR (DMA_BLK0_CH7_CHICR)

/** Alias for DMA_BLK0_CH7_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH7_CHSR instead.
 * 160, DMA Channel Status Register
 */
#define DMA_CH07_CHSR (DMA_BLK0_CH7_CHSR)

/** Alias for DMA_BLK0_CH7_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH7_DADR instead.
 * 174, DMA Channel Destination Address Register
 */
#define DMA_CH07_DADR (DMA_BLK0_CH7_DADR)

/** Alias for DMA_BLK0_CH7_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH7_SADR instead.
 * 170, DMA Channel Source Address Register
 */
#define DMA_CH07_SADR (DMA_BLK0_CH7_SADR)

/** Alias for DMA_BLK0_CH7_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH7_SHADR instead.
 * 178, DMA Channel Shadow Address Register
 */
#define DMA_CH07_SHADR (DMA_BLK0_CH7_SHADR)

/** Alias for DMA_BLK0_CH8_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH8_ADRCR instead.
 * 18C, DMA Channel Address Control Register
 */
#define DMA_CH08_ADRCR (DMA_BLK0_CH8_ADRCR)

/** Alias for DMA_BLK0_CH8_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH8_CHCR instead.
 * 184, DMA Channel Control Register
 */
#define DMA_CH08_CHCR (DMA_BLK0_CH8_CHCR)

/** Alias for DMA_BLK0_CH8_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH8_CHICR instead.
 * 188, DMA Channel Interrupt Control Register
 */
#define DMA_CH08_CHICR (DMA_BLK0_CH8_CHICR)

/** Alias for DMA_BLK0_CH8_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH8_CHSR instead.
 * 180, DMA Channel Status Register
 */
#define DMA_CH08_CHSR (DMA_BLK0_CH8_CHSR)

/** Alias for DMA_BLK0_CH8_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH8_DADR instead.
 * 194, DMA Channel Destination Address Register
 */
#define DMA_CH08_DADR (DMA_BLK0_CH8_DADR)

/** Alias for DMA_BLK0_CH8_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH8_SADR instead.
 * 190, DMA Channel Source Address Register
 */
#define DMA_CH08_SADR (DMA_BLK0_CH8_SADR)

/** Alias for DMA_BLK0_CH8_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH8_SHADR instead.
 * 198, DMA Channel Shadow Address Register
 */
#define DMA_CH08_SHADR (DMA_BLK0_CH8_SHADR)

/** Alias for DMA_BLK0_CH9_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH9_ADRCR instead.
 * 1AC, DMA Channel Address Control Register
 */
#define DMA_CH09_ADRCR (DMA_BLK0_CH9_ADRCR)

/** Alias for DMA_BLK0_CH9_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH9_CHCR instead.
 * 1A4, DMA Channel Control Register
 */
#define DMA_CH09_CHCR (DMA_BLK0_CH9_CHCR)

/** Alias for DMA_BLK0_CH9_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH9_CHICR instead.
 * 1A8, DMA Channel Interrupt Control Register
 */
#define DMA_CH09_CHICR (DMA_BLK0_CH9_CHICR)

/** Alias for DMA_BLK0_CH9_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH9_CHSR instead.
 * 1A0, DMA Channel Status Register
 */
#define DMA_CH09_CHSR (DMA_BLK0_CH9_CHSR)

/** Alias for DMA_BLK0_CH9_DADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH9_DADR instead.
 * 1B4, DMA Channel Destination Address Register
 */
#define DMA_CH09_DADR (DMA_BLK0_CH9_DADR)

/** Alias for DMA_BLK0_CH9_SADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH9_SADR instead.
 * 1B0, DMA Channel Source Address Register
 */
#define DMA_CH09_SADR (DMA_BLK0_CH9_SADR)

/** Alias for DMA_BLK0_CH9_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK0_CH9_SHADR instead.
 * 1B8, DMA Channel Shadow Address Register
 */
#define DMA_CH09_SHADR (DMA_BLK0_CH9_SHADR)

/** Alias for DMA_BLK1_CH0_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH0_ADRCR instead.
 * 108C, DMA Channel Address Control Register
 */
#define DMA_CH10_ADRCR (DMA_BLK1_CH0_ADRCR)

/** Alias for DMA_BLK1_CH0_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH0_CHCR instead.
 * 1084, DMA Channel Control Register
 */
#define DMA_CH10_CHCR (DMA_BLK1_CH0_CHCR)

/** Alias for DMA_BLK1_CH0_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH0_CHICR instead.
 * 1088, DMA Channel Interrupt Control Register
 */
#define DMA_CH10_CHICR (DMA_BLK1_CH0_CHICR)

/** Alias for DMA_BLK1_CH0_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH0_CHSR instead.
 * 1080, DMA Channel Status Register
 */
#define DMA_CH10_CHSR (DMA_BLK1_CH0_CHSR)

/** Alias for DMA_BLK1_CH0_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH0_DADR instead.
 * 1094, DMA Channel Destination Address Register
 */
#define DMA_CH10_DADR (DMA_BLK1_CH0_DADR)

/** Alias for DMA_BLK1_CH0_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH0_SADR instead.
 * 1090, DMA Channel Source Address Register
 */
#define DMA_CH10_SADR (DMA_BLK1_CH0_SADR)

/** Alias for DMA_BLK1_CH0_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH0_SHADR instead.
 * 1098, DMA Channel Shadow Address Register
 */
#define DMA_CH10_SHADR (DMA_BLK1_CH0_SHADR)

/** Alias for DMA_BLK1_CH10_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH10_ADRCR instead.
 * 11CC, DMA Channel Address Control Register
 */
#define DMA_CH110_ADRCR (DMA_BLK1_CH10_ADRCR)

/** Alias for DMA_BLK1_CH10_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH10_CHCR instead.
 * 11C4, DMA Channel Control Register
 */
#define DMA_CH110_CHCR (DMA_BLK1_CH10_CHCR)

/** Alias for DMA_BLK1_CH10_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH10_CHICR instead.
 * 11C8, DMA Channel Interrupt Control Register
 */
#define DMA_CH110_CHICR (DMA_BLK1_CH10_CHICR)

/** Alias for DMA_BLK1_CH10_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH10_CHSR instead.
 * 11C0, DMA Channel Status Register
 */
#define DMA_CH110_CHSR (DMA_BLK1_CH10_CHSR)

/** Alias for DMA_BLK1_CH10_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH10_DADR instead.
 * 11D4, DMA Channel Destination Address Register
 */
#define DMA_CH110_DADR (DMA_BLK1_CH10_DADR)

/** Alias for DMA_BLK1_CH10_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH10_SADR instead.
 * 11D0, DMA Channel Source Address Register
 */
#define DMA_CH110_SADR (DMA_BLK1_CH10_SADR)

/** Alias for DMA_BLK1_CH10_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH10_SHADR instead.
 * 11D8, DMA Channel Shadow Address Register
 */
#define DMA_CH110_SHADR (DMA_BLK1_CH10_SHADR)

/** Alias for DMA_BLK1_CH11_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH11_ADRCR instead.
 * 11EC, DMA Channel Address Control Register
 */
#define DMA_CH111_ADRCR (DMA_BLK1_CH11_ADRCR)

/** Alias for DMA_BLK1_CH11_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH11_CHCR instead.
 * 11E4, DMA Channel Control Register
 */
#define DMA_CH111_CHCR (DMA_BLK1_CH11_CHCR)

/** Alias for DMA_BLK1_CH11_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH11_CHICR instead.
 * 11E8, DMA Channel Interrupt Control Register
 */
#define DMA_CH111_CHICR (DMA_BLK1_CH11_CHICR)

/** Alias for DMA_BLK1_CH11_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH11_CHSR instead.
 * 11E0, DMA Channel Status Register
 */
#define DMA_CH111_CHSR (DMA_BLK1_CH11_CHSR)

/** Alias for DMA_BLK1_CH11_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH11_DADR instead.
 * 11F4, DMA Channel Destination Address Register
 */
#define DMA_CH111_DADR (DMA_BLK1_CH11_DADR)

/** Alias for DMA_BLK1_CH11_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH11_SADR instead.
 * 11F0, DMA Channel Source Address Register
 */
#define DMA_CH111_SADR (DMA_BLK1_CH11_SADR)

/** Alias for DMA_BLK1_CH11_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH11_SHADR instead.
 * 11F8, DMA Channel Shadow Address Register
 */
#define DMA_CH111_SHADR (DMA_BLK1_CH11_SHADR)

/** Alias for DMA_BLK1_CH12_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH12_ADRCR instead.
 * 120C, DMA Channel Address Control Register
 */
#define DMA_CH112_ADRCR (DMA_BLK1_CH12_ADRCR)

/** Alias for DMA_BLK1_CH12_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH12_CHCR instead.
 * 1204, DMA Channel Control Register
 */
#define DMA_CH112_CHCR (DMA_BLK1_CH12_CHCR)

/** Alias for DMA_BLK1_CH12_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH12_CHICR instead.
 * 1208, DMA Channel Interrupt Control Register
 */
#define DMA_CH112_CHICR (DMA_BLK1_CH12_CHICR)

/** Alias for DMA_BLK1_CH12_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH12_CHSR instead.
 * 1200, DMA Channel Status Register
 */
#define DMA_CH112_CHSR (DMA_BLK1_CH12_CHSR)

/** Alias for DMA_BLK1_CH12_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH12_DADR instead.
 * 1214, DMA Channel Destination Address Register
 */
#define DMA_CH112_DADR (DMA_BLK1_CH12_DADR)

/** Alias for DMA_BLK1_CH12_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH12_SADR instead.
 * 1210, DMA Channel Source Address Register
 */
#define DMA_CH112_SADR (DMA_BLK1_CH12_SADR)

/** Alias for DMA_BLK1_CH12_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH12_SHADR instead.
 * 1218, DMA Channel Shadow Address Register
 */
#define DMA_CH112_SHADR (DMA_BLK1_CH12_SHADR)

/** Alias for DMA_BLK1_CH13_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH13_ADRCR instead.
 * 122C, DMA Channel Address Control Register
 */
#define DMA_CH113_ADRCR (DMA_BLK1_CH13_ADRCR)

/** Alias for DMA_BLK1_CH13_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH13_CHCR instead.
 * 1224, DMA Channel Control Register
 */
#define DMA_CH113_CHCR (DMA_BLK1_CH13_CHCR)

/** Alias for DMA_BLK1_CH13_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH13_CHICR instead.
 * 1228, DMA Channel Interrupt Control Register
 */
#define DMA_CH113_CHICR (DMA_BLK1_CH13_CHICR)

/** Alias for DMA_BLK1_CH13_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH13_CHSR instead.
 * 1220, DMA Channel Status Register
 */
#define DMA_CH113_CHSR (DMA_BLK1_CH13_CHSR)

/** Alias for DMA_BLK1_CH13_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH13_DADR instead.
 * 1234, DMA Channel Destination Address Register
 */
#define DMA_CH113_DADR (DMA_BLK1_CH13_DADR)

/** Alias for DMA_BLK1_CH13_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH13_SADR instead.
 * 1230, DMA Channel Source Address Register
 */
#define DMA_CH113_SADR (DMA_BLK1_CH13_SADR)

/** Alias for DMA_BLK1_CH13_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH13_SHADR instead.
 * 1238, DMA Channel Shadow Address Register
 */
#define DMA_CH113_SHADR (DMA_BLK1_CH13_SHADR)

/** Alias for DMA_BLK1_CH14_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH14_ADRCR instead.
 * 124C, DMA Channel Address Control Register
 */
#define DMA_CH114_ADRCR (DMA_BLK1_CH14_ADRCR)

/** Alias for DMA_BLK1_CH14_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH14_CHCR instead.
 * 1244, DMA Channel Control Register
 */
#define DMA_CH114_CHCR (DMA_BLK1_CH14_CHCR)

/** Alias for DMA_BLK1_CH14_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH14_CHICR instead.
 * 1248, DMA Channel Interrupt Control Register
 */
#define DMA_CH114_CHICR (DMA_BLK1_CH14_CHICR)

/** Alias for DMA_BLK1_CH14_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH14_CHSR instead.
 * 1240, DMA Channel Status Register
 */
#define DMA_CH114_CHSR (DMA_BLK1_CH14_CHSR)

/** Alias for DMA_BLK1_CH14_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH14_DADR instead.
 * 1254, DMA Channel Destination Address Register
 */
#define DMA_CH114_DADR (DMA_BLK1_CH14_DADR)

/** Alias for DMA_BLK1_CH14_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH14_SADR instead.
 * 1250, DMA Channel Source Address Register
 */
#define DMA_CH114_SADR (DMA_BLK1_CH14_SADR)

/** Alias for DMA_BLK1_CH14_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH14_SHADR instead.
 * 1258, DMA Channel Shadow Address Register
 */
#define DMA_CH114_SHADR (DMA_BLK1_CH14_SHADR)

/** Alias for DMA_BLK1_CH15_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH15_ADRCR instead.
 * 126C, DMA Channel Address Control Register
 */
#define DMA_CH115_ADRCR (DMA_BLK1_CH15_ADRCR)

/** Alias for DMA_BLK1_CH15_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH15_CHCR instead.
 * 1264, DMA Channel Control Register
 */
#define DMA_CH115_CHCR (DMA_BLK1_CH15_CHCR)

/** Alias for DMA_BLK1_CH15_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH15_CHICR instead.
 * 1268, DMA Channel Interrupt Control Register
 */
#define DMA_CH115_CHICR (DMA_BLK1_CH15_CHICR)

/** Alias for DMA_BLK1_CH15_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH15_CHSR instead.
 * 1260, DMA Channel Status Register
 */
#define DMA_CH115_CHSR (DMA_BLK1_CH15_CHSR)

/** Alias for DMA_BLK1_CH15_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH15_DADR instead.
 * 1274, DMA Channel Destination Address Register
 */
#define DMA_CH115_DADR (DMA_BLK1_CH15_DADR)

/** Alias for DMA_BLK1_CH15_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH15_SADR instead.
 * 1270, DMA Channel Source Address Register
 */
#define DMA_CH115_SADR (DMA_BLK1_CH15_SADR)

/** Alias for DMA_BLK1_CH15_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH15_SHADR instead.
 * 1278, DMA Channel Shadow Address Register
 */
#define DMA_CH115_SHADR (DMA_BLK1_CH15_SHADR)

/** Alias for DMA_BLK1_CH16_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH16_ADRCR instead.
 * 128C, DMA Channel Address Control Register
 */
#define DMA_CH116_ADRCR (DMA_BLK1_CH16_ADRCR)

/** Alias for DMA_BLK1_CH16_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH16_CHCR instead.
 * 1284, DMA Channel Control Register
 */
#define DMA_CH116_CHCR (DMA_BLK1_CH16_CHCR)

/** Alias for DMA_BLK1_CH16_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH16_CHICR instead.
 * 1288, DMA Channel Interrupt Control Register
 */
#define DMA_CH116_CHICR (DMA_BLK1_CH16_CHICR)

/** Alias for DMA_BLK1_CH16_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH16_CHSR instead.
 * 1280, DMA Channel Status Register
 */
#define DMA_CH116_CHSR (DMA_BLK1_CH16_CHSR)

/** Alias for DMA_BLK1_CH16_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH16_DADR instead.
 * 1294, DMA Channel Destination Address Register
 */
#define DMA_CH116_DADR (DMA_BLK1_CH16_DADR)

/** Alias for DMA_BLK1_CH16_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH16_SADR instead.
 * 1290, DMA Channel Source Address Register
 */
#define DMA_CH116_SADR (DMA_BLK1_CH16_SADR)

/** Alias for DMA_BLK1_CH16_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH16_SHADR instead.
 * 1298, DMA Channel Shadow Address Register
 */
#define DMA_CH116_SHADR (DMA_BLK1_CH16_SHADR)

/** Alias for DMA_BLK1_CH17_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH17_ADRCR instead.
 * 12AC, DMA Channel Address Control Register
 */
#define DMA_CH117_ADRCR (DMA_BLK1_CH17_ADRCR)

/** Alias for DMA_BLK1_CH17_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH17_CHCR instead.
 * 12A4, DMA Channel Control Register
 */
#define DMA_CH117_CHCR (DMA_BLK1_CH17_CHCR)

/** Alias for DMA_BLK1_CH17_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH17_CHICR instead.
 * 12A8, DMA Channel Interrupt Control Register
 */
#define DMA_CH117_CHICR (DMA_BLK1_CH17_CHICR)

/** Alias for DMA_BLK1_CH17_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH17_CHSR instead.
 * 12A0, DMA Channel Status Register
 */
#define DMA_CH117_CHSR (DMA_BLK1_CH17_CHSR)

/** Alias for DMA_BLK1_CH17_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH17_DADR instead.
 * 12B4, DMA Channel Destination Address Register
 */
#define DMA_CH117_DADR (DMA_BLK1_CH17_DADR)

/** Alias for DMA_BLK1_CH17_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH17_SADR instead.
 * 12B0, DMA Channel Source Address Register
 */
#define DMA_CH117_SADR (DMA_BLK1_CH17_SADR)

/** Alias for DMA_BLK1_CH17_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH17_SHADR instead.
 * 12B8, DMA Channel Shadow Address Register
 */
#define DMA_CH117_SHADR (DMA_BLK1_CH17_SHADR)

/** Alias for DMA_BLK1_CH18_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH18_ADRCR instead.
 * 12CC, DMA Channel Address Control Register
 */
#define DMA_CH118_ADRCR (DMA_BLK1_CH18_ADRCR)

/** Alias for DMA_BLK1_CH18_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH18_CHCR instead.
 * 12C4, DMA Channel Control Register
 */
#define DMA_CH118_CHCR (DMA_BLK1_CH18_CHCR)

/** Alias for DMA_BLK1_CH18_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH18_CHICR instead.
 * 12C8, DMA Channel Interrupt Control Register
 */
#define DMA_CH118_CHICR (DMA_BLK1_CH18_CHICR)

/** Alias for DMA_BLK1_CH18_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH18_CHSR instead.
 * 12C0, DMA Channel Status Register
 */
#define DMA_CH118_CHSR (DMA_BLK1_CH18_CHSR)

/** Alias for DMA_BLK1_CH18_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH18_DADR instead.
 * 12D4, DMA Channel Destination Address Register
 */
#define DMA_CH118_DADR (DMA_BLK1_CH18_DADR)

/** Alias for DMA_BLK1_CH18_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH18_SADR instead.
 * 12D0, DMA Channel Source Address Register
 */
#define DMA_CH118_SADR (DMA_BLK1_CH18_SADR)

/** Alias for DMA_BLK1_CH18_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH18_SHADR instead.
 * 12D8, DMA Channel Shadow Address Register
 */
#define DMA_CH118_SHADR (DMA_BLK1_CH18_SHADR)

/** Alias for DMA_BLK1_CH19_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH19_ADRCR instead.
 * 12EC, DMA Channel Address Control Register
 */
#define DMA_CH119_ADRCR (DMA_BLK1_CH19_ADRCR)

/** Alias for DMA_BLK1_CH19_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH19_CHCR instead.
 * 12E4, DMA Channel Control Register
 */
#define DMA_CH119_CHCR (DMA_BLK1_CH19_CHCR)

/** Alias for DMA_BLK1_CH19_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH19_CHICR instead.
 * 12E8, DMA Channel Interrupt Control Register
 */
#define DMA_CH119_CHICR (DMA_BLK1_CH19_CHICR)

/** Alias for DMA_BLK1_CH19_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH19_CHSR instead.
 * 12E0, DMA Channel Status Register
 */
#define DMA_CH119_CHSR (DMA_BLK1_CH19_CHSR)

/** Alias for DMA_BLK1_CH19_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH19_DADR instead.
 * 12F4, DMA Channel Destination Address Register
 */
#define DMA_CH119_DADR (DMA_BLK1_CH19_DADR)

/** Alias for DMA_BLK1_CH19_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH19_SADR instead.
 * 12F0, DMA Channel Source Address Register
 */
#define DMA_CH119_SADR (DMA_BLK1_CH19_SADR)

/** Alias for DMA_BLK1_CH19_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH19_SHADR instead.
 * 12F8, DMA Channel Shadow Address Register
 */
#define DMA_CH119_SHADR (DMA_BLK1_CH19_SHADR)

/** Alias for DMA_BLK1_CH1_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH1_ADRCR instead.
 * 10AC, DMA Channel Address Control Register
 */
#define DMA_CH11_ADRCR (DMA_BLK1_CH1_ADRCR)

/** Alias for DMA_BLK1_CH1_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH1_CHCR instead.
 * 10A4, DMA Channel Control Register
 */
#define DMA_CH11_CHCR (DMA_BLK1_CH1_CHCR)

/** Alias for DMA_BLK1_CH1_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH1_CHICR instead.
 * 10A8, DMA Channel Interrupt Control Register
 */
#define DMA_CH11_CHICR (DMA_BLK1_CH1_CHICR)

/** Alias for DMA_BLK1_CH1_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH1_CHSR instead.
 * 10A0, DMA Channel Status Register
 */
#define DMA_CH11_CHSR (DMA_BLK1_CH1_CHSR)

/** Alias for DMA_BLK1_CH1_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH1_DADR instead.
 * 10B4, DMA Channel Destination Address Register
 */
#define DMA_CH11_DADR (DMA_BLK1_CH1_DADR)

/** Alias for DMA_BLK1_CH1_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH1_SADR instead.
 * 10B0, DMA Channel Source Address Register
 */
#define DMA_CH11_SADR (DMA_BLK1_CH1_SADR)

/** Alias for DMA_BLK1_CH1_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH1_SHADR instead.
 * 10B8, DMA Channel Shadow Address Register
 */
#define DMA_CH11_SHADR (DMA_BLK1_CH1_SHADR)

/** Alias for DMA_BLK1_CH20_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH20_ADRCR instead.
 * 130C, DMA Channel Address Control Register
 */
#define DMA_CH120_ADRCR (DMA_BLK1_CH20_ADRCR)

/** Alias for DMA_BLK1_CH20_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH20_CHCR instead.
 * 1304, DMA Channel Control Register
 */
#define DMA_CH120_CHCR (DMA_BLK1_CH20_CHCR)

/** Alias for DMA_BLK1_CH20_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH20_CHICR instead.
 * 1308, DMA Channel Interrupt Control Register
 */
#define DMA_CH120_CHICR (DMA_BLK1_CH20_CHICR)

/** Alias for DMA_BLK1_CH20_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH20_CHSR instead.
 * 1300, DMA Channel Status Register
 */
#define DMA_CH120_CHSR (DMA_BLK1_CH20_CHSR)

/** Alias for DMA_BLK1_CH20_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH20_DADR instead.
 * 1314, DMA Channel Destination Address Register
 */
#define DMA_CH120_DADR (DMA_BLK1_CH20_DADR)

/** Alias for DMA_BLK1_CH20_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH20_SADR instead.
 * 1310, DMA Channel Source Address Register
 */
#define DMA_CH120_SADR (DMA_BLK1_CH20_SADR)

/** Alias for DMA_BLK1_CH20_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH20_SHADR instead.
 * 1318, DMA Channel Shadow Address Register
 */
#define DMA_CH120_SHADR (DMA_BLK1_CH20_SHADR)

/** Alias for DMA_BLK1_CH21_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH21_ADRCR instead.
 * 132C, DMA Channel Address Control Register
 */
#define DMA_CH121_ADRCR (DMA_BLK1_CH21_ADRCR)

/** Alias for DMA_BLK1_CH21_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH21_CHCR instead.
 * 1324, DMA Channel Control Register
 */
#define DMA_CH121_CHCR (DMA_BLK1_CH21_CHCR)

/** Alias for DMA_BLK1_CH21_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH21_CHICR instead.
 * 1328, DMA Channel Interrupt Control Register
 */
#define DMA_CH121_CHICR (DMA_BLK1_CH21_CHICR)

/** Alias for DMA_BLK1_CH21_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH21_CHSR instead.
 * 1320, DMA Channel Status Register
 */
#define DMA_CH121_CHSR (DMA_BLK1_CH21_CHSR)

/** Alias for DMA_BLK1_CH21_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH21_DADR instead.
 * 1334, DMA Channel Destination Address Register
 */
#define DMA_CH121_DADR (DMA_BLK1_CH21_DADR)

/** Alias for DMA_BLK1_CH21_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH21_SADR instead.
 * 1330, DMA Channel Source Address Register
 */
#define DMA_CH121_SADR (DMA_BLK1_CH21_SADR)

/** Alias for DMA_BLK1_CH21_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH21_SHADR instead.
 * 1338, DMA Channel Shadow Address Register
 */
#define DMA_CH121_SHADR (DMA_BLK1_CH21_SHADR)

/** Alias for DMA_BLK1_CH22_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH22_ADRCR instead.
 * 134C, DMA Channel Address Control Register
 */
#define DMA_CH122_ADRCR (DMA_BLK1_CH22_ADRCR)

/** Alias for DMA_BLK1_CH22_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH22_CHCR instead.
 * 1344, DMA Channel Control Register
 */
#define DMA_CH122_CHCR (DMA_BLK1_CH22_CHCR)

/** Alias for DMA_BLK1_CH22_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH22_CHICR instead.
 * 1348, DMA Channel Interrupt Control Register
 */
#define DMA_CH122_CHICR (DMA_BLK1_CH22_CHICR)

/** Alias for DMA_BLK1_CH22_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH22_CHSR instead.
 * 1340, DMA Channel Status Register
 */
#define DMA_CH122_CHSR (DMA_BLK1_CH22_CHSR)

/** Alias for DMA_BLK1_CH22_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH22_DADR instead.
 * 1354, DMA Channel Destination Address Register
 */
#define DMA_CH122_DADR (DMA_BLK1_CH22_DADR)

/** Alias for DMA_BLK1_CH22_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH22_SADR instead.
 * 1350, DMA Channel Source Address Register
 */
#define DMA_CH122_SADR (DMA_BLK1_CH22_SADR)

/** Alias for DMA_BLK1_CH22_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH22_SHADR instead.
 * 1358, DMA Channel Shadow Address Register
 */
#define DMA_CH122_SHADR (DMA_BLK1_CH22_SHADR)

/** Alias for DMA_BLK1_CH23_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH23_ADRCR instead.
 * 136C, DMA Channel Address Control Register
 */
#define DMA_CH123_ADRCR (DMA_BLK1_CH23_ADRCR)

/** Alias for DMA_BLK1_CH23_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH23_CHCR instead.
 * 1364, DMA Channel Control Register
 */
#define DMA_CH123_CHCR (DMA_BLK1_CH23_CHCR)

/** Alias for DMA_BLK1_CH23_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH23_CHICR instead.
 * 1368, DMA Channel Interrupt Control Register
 */
#define DMA_CH123_CHICR (DMA_BLK1_CH23_CHICR)

/** Alias for DMA_BLK1_CH23_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH23_CHSR instead.
 * 1360, DMA Channel Status Register
 */
#define DMA_CH123_CHSR (DMA_BLK1_CH23_CHSR)

/** Alias for DMA_BLK1_CH23_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH23_DADR instead.
 * 1374, DMA Channel Destination Address Register
 */
#define DMA_CH123_DADR (DMA_BLK1_CH23_DADR)

/** Alias for DMA_BLK1_CH23_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH23_SADR instead.
 * 1370, DMA Channel Source Address Register
 */
#define DMA_CH123_SADR (DMA_BLK1_CH23_SADR)

/** Alias for DMA_BLK1_CH23_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH23_SHADR instead.
 * 1378, DMA Channel Shadow Address Register
 */
#define DMA_CH123_SHADR (DMA_BLK1_CH23_SHADR)

/** Alias for DMA_BLK1_CH2_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH2_ADRCR instead.
 * 10CC, DMA Channel Address Control Register
 */
#define DMA_CH12_ADRCR (DMA_BLK1_CH2_ADRCR)

/** Alias for DMA_BLK1_CH2_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH2_CHCR instead.
 * 10C4, DMA Channel Control Register
 */
#define DMA_CH12_CHCR (DMA_BLK1_CH2_CHCR)

/** Alias for DMA_BLK1_CH2_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH2_CHICR instead.
 * 10C8, DMA Channel Interrupt Control Register
 */
#define DMA_CH12_CHICR (DMA_BLK1_CH2_CHICR)

/** Alias for DMA_BLK1_CH2_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH2_CHSR instead.
 * 10C0, DMA Channel Status Register
 */
#define DMA_CH12_CHSR (DMA_BLK1_CH2_CHSR)

/** Alias for DMA_BLK1_CH2_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH2_DADR instead.
 * 10D4, DMA Channel Destination Address Register
 */
#define DMA_CH12_DADR (DMA_BLK1_CH2_DADR)

/** Alias for DMA_BLK1_CH2_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH2_SADR instead.
 * 10D0, DMA Channel Source Address Register
 */
#define DMA_CH12_SADR (DMA_BLK1_CH2_SADR)

/** Alias for DMA_BLK1_CH2_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH2_SHADR instead.
 * 10D8, DMA Channel Shadow Address Register
 */
#define DMA_CH12_SHADR (DMA_BLK1_CH2_SHADR)

/** Alias for DMA_BLK1_CH3_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH3_ADRCR instead.
 * 10EC, DMA Channel Address Control Register
 */
#define DMA_CH13_ADRCR (DMA_BLK1_CH3_ADRCR)

/** Alias for DMA_BLK1_CH3_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH3_CHCR instead.
 * 10E4, DMA Channel Control Register
 */
#define DMA_CH13_CHCR (DMA_BLK1_CH3_CHCR)

/** Alias for DMA_BLK1_CH3_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH3_CHICR instead.
 * 10E8, DMA Channel Interrupt Control Register
 */
#define DMA_CH13_CHICR (DMA_BLK1_CH3_CHICR)

/** Alias for DMA_BLK1_CH3_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH3_CHSR instead.
 * 10E0, DMA Channel Status Register
 */
#define DMA_CH13_CHSR (DMA_BLK1_CH3_CHSR)

/** Alias for DMA_BLK1_CH3_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH3_DADR instead.
 * 10F4, DMA Channel Destination Address Register
 */
#define DMA_CH13_DADR (DMA_BLK1_CH3_DADR)

/** Alias for DMA_BLK1_CH3_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH3_SADR instead.
 * 10F0, DMA Channel Source Address Register
 */
#define DMA_CH13_SADR (DMA_BLK1_CH3_SADR)

/** Alias for DMA_BLK1_CH3_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH3_SHADR instead.
 * 10F8, DMA Channel Shadow Address Register
 */
#define DMA_CH13_SHADR (DMA_BLK1_CH3_SHADR)

/** Alias for DMA_BLK1_CH4_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH4_ADRCR instead.
 * 110C, DMA Channel Address Control Register
 */
#define DMA_CH14_ADRCR (DMA_BLK1_CH4_ADRCR)

/** Alias for DMA_BLK1_CH4_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH4_CHCR instead.
 * 1104, DMA Channel Control Register
 */
#define DMA_CH14_CHCR (DMA_BLK1_CH4_CHCR)

/** Alias for DMA_BLK1_CH4_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH4_CHICR instead.
 * 1108, DMA Channel Interrupt Control Register
 */
#define DMA_CH14_CHICR (DMA_BLK1_CH4_CHICR)

/** Alias for DMA_BLK1_CH4_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH4_CHSR instead.
 * 1100, DMA Channel Status Register
 */
#define DMA_CH14_CHSR (DMA_BLK1_CH4_CHSR)

/** Alias for DMA_BLK1_CH4_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH4_DADR instead.
 * 1114, DMA Channel Destination Address Register
 */
#define DMA_CH14_DADR (DMA_BLK1_CH4_DADR)

/** Alias for DMA_BLK1_CH4_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH4_SADR instead.
 * 1110, DMA Channel Source Address Register
 */
#define DMA_CH14_SADR (DMA_BLK1_CH4_SADR)

/** Alias for DMA_BLK1_CH4_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH4_SHADR instead.
 * 1118, DMA Channel Shadow Address Register
 */
#define DMA_CH14_SHADR (DMA_BLK1_CH4_SHADR)

/** Alias for DMA_BLK1_CH5_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH5_ADRCR instead.
 * 112C, DMA Channel Address Control Register
 */
#define DMA_CH15_ADRCR (DMA_BLK1_CH5_ADRCR)

/** Alias for DMA_BLK1_CH5_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH5_CHCR instead.
 * 1124, DMA Channel Control Register
 */
#define DMA_CH15_CHCR (DMA_BLK1_CH5_CHCR)

/** Alias for DMA_BLK1_CH5_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH5_CHICR instead.
 * 1128, DMA Channel Interrupt Control Register
 */
#define DMA_CH15_CHICR (DMA_BLK1_CH5_CHICR)

/** Alias for DMA_BLK1_CH5_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH5_CHSR instead.
 * 1120, DMA Channel Status Register
 */
#define DMA_CH15_CHSR (DMA_BLK1_CH5_CHSR)

/** Alias for DMA_BLK1_CH5_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH5_DADR instead.
 * 1134, DMA Channel Destination Address Register
 */
#define DMA_CH15_DADR (DMA_BLK1_CH5_DADR)

/** Alias for DMA_BLK1_CH5_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH5_SADR instead.
 * 1130, DMA Channel Source Address Register
 */
#define DMA_CH15_SADR (DMA_BLK1_CH5_SADR)

/** Alias for DMA_BLK1_CH5_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH5_SHADR instead.
 * 1138, DMA Channel Shadow Address Register
 */
#define DMA_CH15_SHADR (DMA_BLK1_CH5_SHADR)

/** Alias for DMA_BLK1_CH6_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH6_ADRCR instead.
 * 114C, DMA Channel Address Control Register
 */
#define DMA_CH16_ADRCR (DMA_BLK1_CH6_ADRCR)

/** Alias for DMA_BLK1_CH6_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH6_CHCR instead.
 * 1144, DMA Channel Control Register
 */
#define DMA_CH16_CHCR (DMA_BLK1_CH6_CHCR)

/** Alias for DMA_BLK1_CH6_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH6_CHICR instead.
 * 1148, DMA Channel Interrupt Control Register
 */
#define DMA_CH16_CHICR (DMA_BLK1_CH6_CHICR)

/** Alias for DMA_BLK1_CH6_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH6_CHSR instead.
 * 1140, DMA Channel Status Register
 */
#define DMA_CH16_CHSR (DMA_BLK1_CH6_CHSR)

/** Alias for DMA_BLK1_CH6_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH6_DADR instead.
 * 1154, DMA Channel Destination Address Register
 */
#define DMA_CH16_DADR (DMA_BLK1_CH6_DADR)

/** Alias for DMA_BLK1_CH6_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH6_SADR instead.
 * 1150, DMA Channel Source Address Register
 */
#define DMA_CH16_SADR (DMA_BLK1_CH6_SADR)

/** Alias for DMA_BLK1_CH6_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH6_SHADR instead.
 * 1158, DMA Channel Shadow Address Register
 */
#define DMA_CH16_SHADR (DMA_BLK1_CH6_SHADR)

/** Alias for DMA_BLK1_CH7_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH7_ADRCR instead.
 * 116C, DMA Channel Address Control Register
 */
#define DMA_CH17_ADRCR (DMA_BLK1_CH7_ADRCR)

/** Alias for DMA_BLK1_CH7_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH7_CHCR instead.
 * 1164, DMA Channel Control Register
 */
#define DMA_CH17_CHCR (DMA_BLK1_CH7_CHCR)

/** Alias for DMA_BLK1_CH7_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH7_CHICR instead.
 * 1168, DMA Channel Interrupt Control Register
 */
#define DMA_CH17_CHICR (DMA_BLK1_CH7_CHICR)

/** Alias for DMA_BLK1_CH7_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH7_CHSR instead.
 * 1160, DMA Channel Status Register
 */
#define DMA_CH17_CHSR (DMA_BLK1_CH7_CHSR)

/** Alias for DMA_BLK1_CH7_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH7_DADR instead.
 * 1174, DMA Channel Destination Address Register
 */
#define DMA_CH17_DADR (DMA_BLK1_CH7_DADR)

/** Alias for DMA_BLK1_CH7_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH7_SADR instead.
 * 1170, DMA Channel Source Address Register
 */
#define DMA_CH17_SADR (DMA_BLK1_CH7_SADR)

/** Alias for DMA_BLK1_CH7_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH7_SHADR instead.
 * 1178, DMA Channel Shadow Address Register
 */
#define DMA_CH17_SHADR (DMA_BLK1_CH7_SHADR)

/** Alias for DMA_BLK1_CH8_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH8_ADRCR instead.
 * 118C, DMA Channel Address Control Register
 */
#define DMA_CH18_ADRCR (DMA_BLK1_CH8_ADRCR)

/** Alias for DMA_BLK1_CH8_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH8_CHCR instead.
 * 1184, DMA Channel Control Register
 */
#define DMA_CH18_CHCR (DMA_BLK1_CH8_CHCR)

/** Alias for DMA_BLK1_CH8_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH8_CHICR instead.
 * 1188, DMA Channel Interrupt Control Register
 */
#define DMA_CH18_CHICR (DMA_BLK1_CH8_CHICR)

/** Alias for DMA_BLK1_CH8_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH8_CHSR instead.
 * 1180, DMA Channel Status Register
 */
#define DMA_CH18_CHSR (DMA_BLK1_CH8_CHSR)

/** Alias for DMA_BLK1_CH8_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH8_DADR instead.
 * 1194, DMA Channel Destination Address Register
 */
#define DMA_CH18_DADR (DMA_BLK1_CH8_DADR)

/** Alias for DMA_BLK1_CH8_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH8_SADR instead.
 * 1190, DMA Channel Source Address Register
 */
#define DMA_CH18_SADR (DMA_BLK1_CH8_SADR)

/** Alias for DMA_BLK1_CH8_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH8_SHADR instead.
 * 1198, DMA Channel Shadow Address Register
 */
#define DMA_CH18_SHADR (DMA_BLK1_CH8_SHADR)

/** Alias for DMA_BLK1_CH9_ADRCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH9_ADRCR instead.
 * 11AC, DMA Channel Address Control Register
 */
#define DMA_CH19_ADRCR (DMA_BLK1_CH9_ADRCR)

/** Alias for DMA_BLK1_CH9_CHCR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH9_CHCR instead.
 * 11A4, DMA Channel Control Register
 */
#define DMA_CH19_CHCR (DMA_BLK1_CH9_CHCR)

/** Alias for DMA_BLK1_CH9_CHICR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH9_CHICR instead.
 * 11A8, DMA Channel Interrupt Control Register
 */
#define DMA_CH19_CHICR (DMA_BLK1_CH9_CHICR)

/** Alias for DMA_BLK1_CH9_CHSR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH9_CHSR instead.
 * 11A0, DMA Channel Status Register
 */
#define DMA_CH19_CHSR (DMA_BLK1_CH9_CHSR)

/** Alias for DMA_BLK1_CH9_DADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH9_DADR instead.
 * 11B4, DMA Channel Destination Address Register
 */
#define DMA_CH19_DADR (DMA_BLK1_CH9_DADR)

/** Alias for DMA_BLK1_CH9_SADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH9_SADR instead.
 * 11B0, DMA Channel Source Address Register
 */
#define DMA_CH19_SADR (DMA_BLK1_CH9_SADR)

/** Alias for DMA_BLK1_CH9_SHADR.
 *  Note that this definition is obsolete, use DMA_BLK1_CH9_SHADR instead.
 * 11B8, DMA Channel Shadow Address Register
 */
#define DMA_CH19_SHADR (DMA_BLK1_CH9_SHADR)

/** Alias for DMA_BLK0_CHINTR0.
 *  Note that this definition is obsolete, use DMA_BLK0_CHINTR0 instead.
 * 70, DMA Channel Interrupt Set Register0
 */
#define DMA_CHINTR00 (DMA_BLK0_CHINTR0)

/** Alias for DMA_BLK1_CHINTR0.
 *  Note that this definition is obsolete, use DMA_BLK1_CHINTR0 instead.
 * 1070, DMA Channel Interrupt Set Register0
 */
#define DMA_CHINTR10 (DMA_BLK1_CHINTR0)

/** Alias for DMA_BLK0_CHRSTR0.
 *  Note that this definition is obsolete, use DMA_BLK0_CHRSTR0 instead.
 * 40, DMA Channel Reset Request Register0
 */
#define DMA_CHRSTR00 (DMA_BLK0_CHRSTR0)

/** Alias for DMA_BLK1_CHRSTR0.
 *  Note that this definition is obsolete, use DMA_BLK1_CHRSTR0 instead.
 * 1040, DMA Channel Reset Request Register0
 */
#define DMA_CHRSTR10 (DMA_BLK1_CHRSTR0)

/** 0, DMA Sub-block 0 Clock Control Register */
#define DMA_CLC0 ((*(volatile Ifx_CLC2*)0xF0014000u)) /* lint --e(923)*/

/** 1000, DMA Sub-block 1 Clock Control Register */
#define DMA_CLC1 ((*(volatile Ifx_CLC2*)0xF0015000u)) /* lint --e(923)*/

/** Alias for DMA_BLK0_CLRE.
 *  Note that this definition is obsolete, use DMA_BLK0_CLRE instead.
 * 28, DMA Clear Error Register
 */
#define DMA_CLRE0 (DMA_BLK0_CLRE)

/** Alias for DMA_BLK1_CLRE.
 *  Note that this definition is obsolete, use DMA_BLK1_CLRE instead.
 * 1028, DMA Clear Error Register
 */
#define DMA_CLRE1 (DMA_BLK1_CLRE)

/** Alias for DMA_BLK0_EER.
 *  Note that this definition is obsolete, use DMA_BLK0_EER instead.
 * 20, DMA Enable Error Register
 */
#define DMA_EER0 (DMA_BLK0_EER)

/** Alias for DMA_BLK1_EER.
 *  Note that this definition is obsolete, use DMA_BLK1_EER instead.
 * 1020, DMA Enable Error Register
 */
#define DMA_EER1 (DMA_BLK1_EER)

/** Alias for DMA_BLK0_ERRSR.
 *  Note that this definition is obsolete, use DMA_BLK0_ERRSR instead.
 * 24, DMA Error Status Register
 */
#define DMA_ERRSR0 (DMA_BLK0_ERRSR)

/** Alias for DMA_BLK1_ERRSR.
 *  Note that this definition is obsolete, use DMA_BLK1_ERRSR instead.
 * 1024, DMA Error Status Register
 */
#define DMA_ERRSR1 (DMA_BLK1_ERRSR)

/** 8, Module Identification Register */
#define DMA_ID ((*(volatile Ifx_ID1*)0xF0014008u)) /* lint --e(923)*/

/** Alias for DMA_BLK0_ME_INTR.
 *  Note that this definition is obsolete, use DMA_BLK0_ME_INTR instead.
 * 38, DMA Move Engine Interrupt Set Register
 */
#define DMA_ME0_INTR (DMA_BLK0_ME_INTR)

/** Alias for DMA_BLK0_ME_PR.
 *  Note that this definition is obsolete, use DMA_BLK0_ME_PR instead.
 * 3C, DMA Move Engine Pattern Read Register
 */
#define DMA_ME0_PR (DMA_BLK0_ME_PR)

/** Alias for DMA_BLK0_ME_R.
 *  Note that this definition is obsolete, use DMA_BLK0_ME_R instead.
 * 34, DMA Move Engine Read Register
 */
#define DMA_ME0_R (DMA_BLK0_ME_R)

/** Alias for DMA_BLK0_ME_SR.
 *  Note that this definition is obsolete, use DMA_BLK0_ME_SR instead.
 * 30, DMA Move Engine Status Register
 */
#define DMA_ME0_SR (DMA_BLK0_ME_SR)

/** Alias for DMA_BLK1_ME_INTR.
 *  Note that this definition is obsolete, use DMA_BLK1_ME_INTR instead.
 * 1038, DMA Move Engine Interrupt Set Register
 */
#define DMA_ME1_INTR (DMA_BLK1_ME_INTR)

/** Alias for DMA_BLK1_ME_PR.
 *  Note that this definition is obsolete, use DMA_BLK1_ME_PR instead.
 * 103C, DMA Move Engine Pattern Read Register
 */
#define DMA_ME1_PR (DMA_BLK1_ME_PR)

/** Alias for DMA_BLK1_ME_R.
 *  Note that this definition is obsolete, use DMA_BLK1_ME_R instead.
 * 1034, DMA Move Engine Read Register
 */
#define DMA_ME1_R (DMA_BLK1_ME_R)

/** Alias for DMA_BLK1_ME_SR.
 *  Note that this definition is obsolete, use DMA_BLK1_ME_SR instead.
 * 1030, DMA Move Engine Status Register
 */
#define DMA_ME1_SR (DMA_BLK1_ME_SR)

/** C, DMA OCDS Trigger Set Select */
#define DMA_OTSS ((*(volatile Ifx_DMA_OTSS*)0xF001400Cu)) /* lint --e(923)*/

/** Alias for DMA_BLK0_SUSACR0.
 *  Note that this definition is obsolete, use DMA_BLK0_SUSACR0 instead.
 * 68, DMA Suspend Acknowledge Register0
 */
#define DMA_SUSACR00 (DMA_BLK0_SUSACR0)

/** Alias for DMA_BLK1_SUSACR0.
 *  Note that this definition is obsolete, use DMA_BLK1_SUSACR0 instead.
 * 1068, DMA Suspend Acknowledge Register0
 */
#define DMA_SUSACR10 (DMA_BLK1_SUSACR0)

/** Alias for DMA_BLK0_SUSENR0.
 *  Note that this definition is obsolete, use DMA_BLK0_SUSENR0 instead.
 * 60, DMA Suspend Enable Register0
 */
#define DMA_SUSENR00 (DMA_BLK0_SUSENR0)

/** Alias for DMA_BLK1_SUSENR0.
 *  Note that this definition is obsolete, use DMA_BLK1_SUSENR0 instead.
 * 1060, DMA Suspend Enable Register0
 */
#define DMA_SUSENR10 (DMA_BLK1_SUSENR0)
/******************************************************************************/
#endif /* IFXDMA_REG_H */

