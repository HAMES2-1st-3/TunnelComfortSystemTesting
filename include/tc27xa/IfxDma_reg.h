/**
 * \file IfxDma_reg.h
 * \brief
 * \copyright Copyright (c) 2014 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC27XA_TS_V3.0.1.R2
 * Specification: TC27xA_TS_V3.0.1_SFR_OPEN_MARKET.xml (Revision: V3.0.1)
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
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
 * \defgroup IfxLld_Dma_Cfg Dma address
 * \ingroup IfxLld_Dma
 * 
 * \defgroup IfxLld_Dma_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Dma_Cfg
 * 
 * \defgroup IfxLld_Dma_Cfg_Dma 2-DMA
 * \ingroup IfxLld_Dma_Cfg
 * 
 */
#ifndef IFXDMA_REG_H
#define IFXDMA_REG_H 1
/******************************************************************************/
#include "IfxDma_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Dma_Cfg_BaseAddress
 * \{  */

/** \\brief  DMA object */
#define MODULE_DMA /*lint --e(923)*/ ((*(Ifx_DMA*)0xF0014000u))
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Dma_Cfg_Dma
 * \{  */

/** \\brief  8FC, DMA Sub-block Access Enable Register 0 */
#define DMA_BLK0_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ACCEN0*)0xF00148FCu)

/** Alias (User Manual Name) for DMA_BLK0_ACCEN0.
* To use register names with standard convension, please use DMA_BLK0_ACCEN0.
*/
#define	DMA_ACCEN00	(DMA_BLK0_ACCEN0)

/** \\brief  8F8, DMA Sub-block Access Enable Register 1 */
#define DMA_BLK0_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ACCEN1*)0xF00148F8u)

/** Alias (User Manual Name) for DMA_BLK0_ACCEN1.
* To use register names with standard convension, please use DMA_BLK0_ACCEN1.
*/
#define	DMA_ACCEN01	(DMA_BLK0_ACCEN1)

/** \\brief  8C, DMA Channel Address Control Register */
#define DMA_BLK0_CH0_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001408Cu)

/** Alias (User Manual Name) for DMA_BLK0_CH0_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH0_ADRCR.
*/
#define	DMA_ADRCR000	(DMA_BLK0_CH0_ADRCR)

/** \\brief  84, DMA Channel Control Register */
#define DMA_BLK0_CH0_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014084u)

/** Alias (User Manual Name) for DMA_BLK0_CH0_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH0_CHCR.
*/
#define	DMA_CHCR000	(DMA_BLK0_CH0_CHCR)

/** \\brief  88, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH0_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014088u)

/** Alias (User Manual Name) for DMA_BLK0_CH0_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH0_CHICR.
*/
#define	DMA_CHICR000	(DMA_BLK0_CH0_CHICR)

/** \\brief  80, DMA Channel Status Register */
#define DMA_BLK0_CH0_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014080u)

/** Alias (User Manual Name) for DMA_BLK0_CH0_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH0_CHSR.
*/
#define	DMA_CHSR000	(DMA_BLK0_CH0_CHSR)

/** \\brief  94, DMA Channel Destination Address Register */
#define DMA_BLK0_CH0_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014094u)

/** Alias (User Manual Name) for DMA_BLK0_CH0_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH0_DADR.
*/
#define	DMA_DADR000	(DMA_BLK0_CH0_DADR)

/** \\brief  90, DMA Channel Source Address Register */
#define DMA_BLK0_CH0_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014090u)

/** Alias (User Manual Name) for DMA_BLK0_CH0_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH0_SADR.
*/
#define	DMA_SADR000	(DMA_BLK0_CH0_SADR)

/** \\brief  98, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH0_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014098u)

/** Alias (User Manual Name) for DMA_BLK0_CH0_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH0_SHADR.
*/
#define	DMA_SHADR000	(DMA_BLK0_CH0_SHADR)

/** \\brief  1CC, DMA Channel Address Control Register */
#define DMA_BLK0_CH10_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00141CCu)

/** Alias (User Manual Name) for DMA_BLK0_CH10_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH10_ADRCR.
*/
#define	DMA_ADRCR010	(DMA_BLK0_CH10_ADRCR)

/** \\brief  1C4, DMA Channel Control Register */
#define DMA_BLK0_CH10_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00141C4u)

/** Alias (User Manual Name) for DMA_BLK0_CH10_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH10_CHCR.
*/
#define	DMA_CHCR010	(DMA_BLK0_CH10_CHCR)

/** \\brief  1C8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH10_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00141C8u)

/** Alias (User Manual Name) for DMA_BLK0_CH10_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH10_CHICR.
*/
#define	DMA_CHICR010	(DMA_BLK0_CH10_CHICR)

/** \\brief  1C0, DMA Channel Status Register */
#define DMA_BLK0_CH10_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00141C0u)

/** Alias (User Manual Name) for DMA_BLK0_CH10_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH10_CHSR.
*/
#define	DMA_CHSR010	(DMA_BLK0_CH10_CHSR)

/** \\brief  1D4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH10_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00141D4u)

/** Alias (User Manual Name) for DMA_BLK0_CH10_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH10_DADR.
*/
#define	DMA_DADR010	(DMA_BLK0_CH10_DADR)

/** \\brief  1D0, DMA Channel Source Address Register */
#define DMA_BLK0_CH10_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00141D0u)

/** Alias (User Manual Name) for DMA_BLK0_CH10_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH10_SADR.
*/
#define	DMA_SADR010	(DMA_BLK0_CH10_SADR)

/** \\brief  1D8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH10_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00141D8u)

/** Alias (User Manual Name) for DMA_BLK0_CH10_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH10_SHADR.
*/
#define	DMA_SHADR010	(DMA_BLK0_CH10_SHADR)

/** \\brief  1EC, DMA Channel Address Control Register */
#define DMA_BLK0_CH11_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00141ECu)

/** Alias (User Manual Name) for DMA_BLK0_CH11_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH11_ADRCR.
*/
#define	DMA_ADRCR011	(DMA_BLK0_CH11_ADRCR)

/** \\brief  1E4, DMA Channel Control Register */
#define DMA_BLK0_CH11_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00141E4u)

/** Alias (User Manual Name) for DMA_BLK0_CH11_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH11_CHCR.
*/
#define	DMA_CHCR011	(DMA_BLK0_CH11_CHCR)

/** \\brief  1E8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH11_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00141E8u)

/** Alias (User Manual Name) for DMA_BLK0_CH11_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH11_CHICR.
*/
#define	DMA_CHICR011	(DMA_BLK0_CH11_CHICR)

/** \\brief  1E0, DMA Channel Status Register */
#define DMA_BLK0_CH11_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00141E0u)

/** Alias (User Manual Name) for DMA_BLK0_CH11_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH11_CHSR.
*/
#define	DMA_CHSR011	(DMA_BLK0_CH11_CHSR)

/** \\brief  1F4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH11_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00141F4u)

/** Alias (User Manual Name) for DMA_BLK0_CH11_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH11_DADR.
*/
#define	DMA_DADR011	(DMA_BLK0_CH11_DADR)

/** \\brief  1F0, DMA Channel Source Address Register */
#define DMA_BLK0_CH11_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00141F0u)

/** Alias (User Manual Name) for DMA_BLK0_CH11_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH11_SADR.
*/
#define	DMA_SADR011	(DMA_BLK0_CH11_SADR)

/** \\brief  1F8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH11_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00141F8u)

/** Alias (User Manual Name) for DMA_BLK0_CH11_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH11_SHADR.
*/
#define	DMA_SHADR011	(DMA_BLK0_CH11_SHADR)

/** \\brief  20C, DMA Channel Address Control Register */
#define DMA_BLK0_CH12_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001420Cu)

/** Alias (User Manual Name) for DMA_BLK0_CH12_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH12_ADRCR.
*/
#define	DMA_ADRCR012	(DMA_BLK0_CH12_ADRCR)

/** \\brief  204, DMA Channel Control Register */
#define DMA_BLK0_CH12_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014204u)

/** Alias (User Manual Name) for DMA_BLK0_CH12_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH12_CHCR.
*/
#define	DMA_CHCR012	(DMA_BLK0_CH12_CHCR)

/** \\brief  208, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH12_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014208u)

/** Alias (User Manual Name) for DMA_BLK0_CH12_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH12_CHICR.
*/
#define	DMA_CHICR012	(DMA_BLK0_CH12_CHICR)

/** \\brief  200, DMA Channel Status Register */
#define DMA_BLK0_CH12_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014200u)

/** Alias (User Manual Name) for DMA_BLK0_CH12_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH12_CHSR.
*/
#define	DMA_CHSR012	(DMA_BLK0_CH12_CHSR)

/** \\brief  214, DMA Channel Destination Address Register */
#define DMA_BLK0_CH12_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014214u)

/** Alias (User Manual Name) for DMA_BLK0_CH12_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH12_DADR.
*/
#define	DMA_DADR012	(DMA_BLK0_CH12_DADR)

/** \\brief  210, DMA Channel Source Address Register */
#define DMA_BLK0_CH12_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014210u)

/** Alias (User Manual Name) for DMA_BLK0_CH12_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH12_SADR.
*/
#define	DMA_SADR012	(DMA_BLK0_CH12_SADR)

/** \\brief  218, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH12_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014218u)

/** Alias (User Manual Name) for DMA_BLK0_CH12_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH12_SHADR.
*/
#define	DMA_SHADR012	(DMA_BLK0_CH12_SHADR)

/** \\brief  22C, DMA Channel Address Control Register */
#define DMA_BLK0_CH13_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001422Cu)

/** Alias (User Manual Name) for DMA_BLK0_CH13_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH13_ADRCR.
*/
#define	DMA_ADRCR013	(DMA_BLK0_CH13_ADRCR)

/** \\brief  224, DMA Channel Control Register */
#define DMA_BLK0_CH13_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014224u)

/** Alias (User Manual Name) for DMA_BLK0_CH13_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH13_CHCR.
*/
#define	DMA_CHCR013	(DMA_BLK0_CH13_CHCR)

/** \\brief  228, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH13_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014228u)

/** Alias (User Manual Name) for DMA_BLK0_CH13_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH13_CHICR.
*/
#define	DMA_CHICR013	(DMA_BLK0_CH13_CHICR)

/** \\brief  220, DMA Channel Status Register */
#define DMA_BLK0_CH13_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014220u)

/** Alias (User Manual Name) for DMA_BLK0_CH13_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH13_CHSR.
*/
#define	DMA_CHSR013	(DMA_BLK0_CH13_CHSR)

/** \\brief  234, DMA Channel Destination Address Register */
#define DMA_BLK0_CH13_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014234u)

/** Alias (User Manual Name) for DMA_BLK0_CH13_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH13_DADR.
*/
#define	DMA_DADR013	(DMA_BLK0_CH13_DADR)

/** \\brief  230, DMA Channel Source Address Register */
#define DMA_BLK0_CH13_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014230u)

/** Alias (User Manual Name) for DMA_BLK0_CH13_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH13_SADR.
*/
#define	DMA_SADR013	(DMA_BLK0_CH13_SADR)

/** \\brief  238, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH13_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014238u)

/** Alias (User Manual Name) for DMA_BLK0_CH13_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH13_SHADR.
*/
#define	DMA_SHADR013	(DMA_BLK0_CH13_SHADR)

/** \\brief  24C, DMA Channel Address Control Register */
#define DMA_BLK0_CH14_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001424Cu)

/** Alias (User Manual Name) for DMA_BLK0_CH14_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH14_ADRCR.
*/
#define	DMA_ADRCR014	(DMA_BLK0_CH14_ADRCR)

/** \\brief  244, DMA Channel Control Register */
#define DMA_BLK0_CH14_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014244u)

/** Alias (User Manual Name) for DMA_BLK0_CH14_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH14_CHCR.
*/
#define	DMA_CHCR014	(DMA_BLK0_CH14_CHCR)

/** \\brief  248, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH14_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014248u)

/** Alias (User Manual Name) for DMA_BLK0_CH14_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH14_CHICR.
*/
#define	DMA_CHICR014	(DMA_BLK0_CH14_CHICR)

/** \\brief  240, DMA Channel Status Register */
#define DMA_BLK0_CH14_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014240u)

/** Alias (User Manual Name) for DMA_BLK0_CH14_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH14_CHSR.
*/
#define	DMA_CHSR014	(DMA_BLK0_CH14_CHSR)

/** \\brief  254, DMA Channel Destination Address Register */
#define DMA_BLK0_CH14_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014254u)

/** Alias (User Manual Name) for DMA_BLK0_CH14_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH14_DADR.
*/
#define	DMA_DADR014	(DMA_BLK0_CH14_DADR)

/** \\brief  250, DMA Channel Source Address Register */
#define DMA_BLK0_CH14_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014250u)

/** Alias (User Manual Name) for DMA_BLK0_CH14_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH14_SADR.
*/
#define	DMA_SADR014	(DMA_BLK0_CH14_SADR)

/** \\brief  258, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH14_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014258u)

/** Alias (User Manual Name) for DMA_BLK0_CH14_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH14_SHADR.
*/
#define	DMA_SHADR014	(DMA_BLK0_CH14_SHADR)

/** \\brief  26C, DMA Channel Address Control Register */
#define DMA_BLK0_CH15_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001426Cu)

/** Alias (User Manual Name) for DMA_BLK0_CH15_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH15_ADRCR.
*/
#define	DMA_ADRCR015	(DMA_BLK0_CH15_ADRCR)

/** \\brief  264, DMA Channel Control Register */
#define DMA_BLK0_CH15_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014264u)

/** Alias (User Manual Name) for DMA_BLK0_CH15_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH15_CHCR.
*/
#define	DMA_CHCR015	(DMA_BLK0_CH15_CHCR)

/** \\brief  268, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH15_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014268u)

/** Alias (User Manual Name) for DMA_BLK0_CH15_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH15_CHICR.
*/
#define	DMA_CHICR015	(DMA_BLK0_CH15_CHICR)

/** \\brief  260, DMA Channel Status Register */
#define DMA_BLK0_CH15_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014260u)

/** Alias (User Manual Name) for DMA_BLK0_CH15_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH15_CHSR.
*/
#define	DMA_CHSR015	(DMA_BLK0_CH15_CHSR)

/** \\brief  274, DMA Channel Destination Address Register */
#define DMA_BLK0_CH15_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014274u)

/** Alias (User Manual Name) for DMA_BLK0_CH15_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH15_DADR.
*/
#define	DMA_DADR015	(DMA_BLK0_CH15_DADR)

/** \\brief  270, DMA Channel Source Address Register */
#define DMA_BLK0_CH15_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014270u)

/** Alias (User Manual Name) for DMA_BLK0_CH15_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH15_SADR.
*/
#define	DMA_SADR015	(DMA_BLK0_CH15_SADR)

/** \\brief  278, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH15_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014278u)

/** Alias (User Manual Name) for DMA_BLK0_CH15_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH15_SHADR.
*/
#define	DMA_SHADR015	(DMA_BLK0_CH15_SHADR)

/** \\brief  28C, DMA Channel Address Control Register */
#define DMA_BLK0_CH16_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001428Cu)

/** Alias (User Manual Name) for DMA_BLK0_CH16_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH16_ADRCR.
*/
#define	DMA_ADRCR016	(DMA_BLK0_CH16_ADRCR)

/** \\brief  284, DMA Channel Control Register */
#define DMA_BLK0_CH16_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014284u)

/** Alias (User Manual Name) for DMA_BLK0_CH16_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH16_CHCR.
*/
#define	DMA_CHCR016	(DMA_BLK0_CH16_CHCR)

/** \\brief  288, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH16_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014288u)

/** Alias (User Manual Name) for DMA_BLK0_CH16_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH16_CHICR.
*/
#define	DMA_CHICR016	(DMA_BLK0_CH16_CHICR)

/** \\brief  280, DMA Channel Status Register */
#define DMA_BLK0_CH16_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014280u)

/** Alias (User Manual Name) for DMA_BLK0_CH16_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH16_CHSR.
*/
#define	DMA_CHSR016	(DMA_BLK0_CH16_CHSR)

/** \\brief  294, DMA Channel Destination Address Register */
#define DMA_BLK0_CH16_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014294u)

/** Alias (User Manual Name) for DMA_BLK0_CH16_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH16_DADR.
*/
#define	DMA_DADR016	(DMA_BLK0_CH16_DADR)

/** \\brief  290, DMA Channel Source Address Register */
#define DMA_BLK0_CH16_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014290u)

/** Alias (User Manual Name) for DMA_BLK0_CH16_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH16_SADR.
*/
#define	DMA_SADR016	(DMA_BLK0_CH16_SADR)

/** \\brief  298, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH16_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014298u)

/** Alias (User Manual Name) for DMA_BLK0_CH16_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH16_SHADR.
*/
#define	DMA_SHADR016	(DMA_BLK0_CH16_SHADR)

/** \\brief  2AC, DMA Channel Address Control Register */
#define DMA_BLK0_CH17_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00142ACu)

/** Alias (User Manual Name) for DMA_BLK0_CH17_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH17_ADRCR.
*/
#define	DMA_ADRCR017	(DMA_BLK0_CH17_ADRCR)

/** \\brief  2A4, DMA Channel Control Register */
#define DMA_BLK0_CH17_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00142A4u)

/** Alias (User Manual Name) for DMA_BLK0_CH17_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH17_CHCR.
*/
#define	DMA_CHCR017	(DMA_BLK0_CH17_CHCR)

/** \\brief  2A8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH17_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00142A8u)

/** Alias (User Manual Name) for DMA_BLK0_CH17_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH17_CHICR.
*/
#define	DMA_CHICR017	(DMA_BLK0_CH17_CHICR)

/** \\brief  2A0, DMA Channel Status Register */
#define DMA_BLK0_CH17_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00142A0u)

/** Alias (User Manual Name) for DMA_BLK0_CH17_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH17_CHSR.
*/
#define	DMA_CHSR017	(DMA_BLK0_CH17_CHSR)

/** \\brief  2B4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH17_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00142B4u)

/** Alias (User Manual Name) for DMA_BLK0_CH17_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH17_DADR.
*/
#define	DMA_DADR017	(DMA_BLK0_CH17_DADR)

/** \\brief  2B0, DMA Channel Source Address Register */
#define DMA_BLK0_CH17_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00142B0u)

/** Alias (User Manual Name) for DMA_BLK0_CH17_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH17_SADR.
*/
#define	DMA_SADR017	(DMA_BLK0_CH17_SADR)

/** \\brief  2B8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH17_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00142B8u)

/** Alias (User Manual Name) for DMA_BLK0_CH17_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH17_SHADR.
*/
#define	DMA_SHADR017	(DMA_BLK0_CH17_SHADR)

/** \\brief  2CC, DMA Channel Address Control Register */
#define DMA_BLK0_CH18_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00142CCu)

/** Alias (User Manual Name) for DMA_BLK0_CH18_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH18_ADRCR.
*/
#define	DMA_ADRCR018	(DMA_BLK0_CH18_ADRCR)

/** \\brief  2C4, DMA Channel Control Register */
#define DMA_BLK0_CH18_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00142C4u)

/** Alias (User Manual Name) for DMA_BLK0_CH18_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH18_CHCR.
*/
#define	DMA_CHCR018	(DMA_BLK0_CH18_CHCR)

/** \\brief  2C8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH18_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00142C8u)

/** Alias (User Manual Name) for DMA_BLK0_CH18_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH18_CHICR.
*/
#define	DMA_CHICR018	(DMA_BLK0_CH18_CHICR)

/** \\brief  2C0, DMA Channel Status Register */
#define DMA_BLK0_CH18_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00142C0u)

/** Alias (User Manual Name) for DMA_BLK0_CH18_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH18_CHSR.
*/
#define	DMA_CHSR018	(DMA_BLK0_CH18_CHSR)

/** \\brief  2D4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH18_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00142D4u)

/** Alias (User Manual Name) for DMA_BLK0_CH18_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH18_DADR.
*/
#define	DMA_DADR018	(DMA_BLK0_CH18_DADR)

/** \\brief  2D0, DMA Channel Source Address Register */
#define DMA_BLK0_CH18_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00142D0u)

/** Alias (User Manual Name) for DMA_BLK0_CH18_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH18_SADR.
*/
#define	DMA_SADR018	(DMA_BLK0_CH18_SADR)

/** \\brief  2D8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH18_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00142D8u)

/** Alias (User Manual Name) for DMA_BLK0_CH18_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH18_SHADR.
*/
#define	DMA_SHADR018	(DMA_BLK0_CH18_SHADR)

/** \\brief  2EC, DMA Channel Address Control Register */
#define DMA_BLK0_CH19_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00142ECu)

/** Alias (User Manual Name) for DMA_BLK0_CH19_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH19_ADRCR.
*/
#define	DMA_ADRCR019	(DMA_BLK0_CH19_ADRCR)

/** \\brief  2E4, DMA Channel Control Register */
#define DMA_BLK0_CH19_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00142E4u)

/** Alias (User Manual Name) for DMA_BLK0_CH19_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH19_CHCR.
*/
#define	DMA_CHCR019	(DMA_BLK0_CH19_CHCR)

/** \\brief  2E8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH19_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00142E8u)

/** Alias (User Manual Name) for DMA_BLK0_CH19_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH19_CHICR.
*/
#define	DMA_CHICR019	(DMA_BLK0_CH19_CHICR)

/** \\brief  2E0, DMA Channel Status Register */
#define DMA_BLK0_CH19_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00142E0u)

/** Alias (User Manual Name) for DMA_BLK0_CH19_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH19_CHSR.
*/
#define	DMA_CHSR019	(DMA_BLK0_CH19_CHSR)

/** \\brief  2F4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH19_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00142F4u)

/** Alias (User Manual Name) for DMA_BLK0_CH19_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH19_DADR.
*/
#define	DMA_DADR019	(DMA_BLK0_CH19_DADR)

/** \\brief  2F0, DMA Channel Source Address Register */
#define DMA_BLK0_CH19_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00142F0u)

/** Alias (User Manual Name) for DMA_BLK0_CH19_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH19_SADR.
*/
#define	DMA_SADR019	(DMA_BLK0_CH19_SADR)

/** \\brief  2F8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH19_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00142F8u)

/** Alias (User Manual Name) for DMA_BLK0_CH19_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH19_SHADR.
*/
#define	DMA_SHADR019	(DMA_BLK0_CH19_SHADR)

/** \\brief  AC, DMA Channel Address Control Register */
#define DMA_BLK0_CH1_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00140ACu)

/** Alias (User Manual Name) for DMA_BLK0_CH1_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH1_ADRCR.
*/
#define	DMA_ADRCR001	(DMA_BLK0_CH1_ADRCR)

/** \\brief  A4, DMA Channel Control Register */
#define DMA_BLK0_CH1_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00140A4u)

/** Alias (User Manual Name) for DMA_BLK0_CH1_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH1_CHCR.
*/
#define	DMA_CHCR001	(DMA_BLK0_CH1_CHCR)

/** \\brief  A8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH1_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00140A8u)

/** Alias (User Manual Name) for DMA_BLK0_CH1_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH1_CHICR.
*/
#define	DMA_CHICR001	(DMA_BLK0_CH1_CHICR)

/** \\brief  A0, DMA Channel Status Register */
#define DMA_BLK0_CH1_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00140A0u)

/** Alias (User Manual Name) for DMA_BLK0_CH1_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH1_CHSR.
*/
#define	DMA_CHSR001	(DMA_BLK0_CH1_CHSR)

/** \\brief  B4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH1_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00140B4u)

/** Alias (User Manual Name) for DMA_BLK0_CH1_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH1_DADR.
*/
#define	DMA_DADR001	(DMA_BLK0_CH1_DADR)

/** \\brief  B0, DMA Channel Source Address Register */
#define DMA_BLK0_CH1_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00140B0u)

/** Alias (User Manual Name) for DMA_BLK0_CH1_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH1_SADR.
*/
#define	DMA_SADR001	(DMA_BLK0_CH1_SADR)

/** \\brief  B8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH1_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00140B8u)

/** Alias (User Manual Name) for DMA_BLK0_CH1_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH1_SHADR.
*/
#define	DMA_SHADR001	(DMA_BLK0_CH1_SHADR)

/** \\brief  30C, DMA Channel Address Control Register */
#define DMA_BLK0_CH20_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001430Cu)

/** Alias (User Manual Name) for DMA_BLK0_CH20_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH20_ADRCR.
*/
#define	DMA_ADRCR020	(DMA_BLK0_CH20_ADRCR)

/** \\brief  304, DMA Channel Control Register */
#define DMA_BLK0_CH20_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014304u)

/** Alias (User Manual Name) for DMA_BLK0_CH20_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH20_CHCR.
*/
#define	DMA_CHCR020	(DMA_BLK0_CH20_CHCR)

/** \\brief  308, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH20_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014308u)

/** Alias (User Manual Name) for DMA_BLK0_CH20_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH20_CHICR.
*/
#define	DMA_CHICR020	(DMA_BLK0_CH20_CHICR)

/** \\brief  300, DMA Channel Status Register */
#define DMA_BLK0_CH20_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014300u)

/** Alias (User Manual Name) for DMA_BLK0_CH20_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH20_CHSR.
*/
#define	DMA_CHSR020	(DMA_BLK0_CH20_CHSR)

/** \\brief  314, DMA Channel Destination Address Register */
#define DMA_BLK0_CH20_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014314u)

/** Alias (User Manual Name) for DMA_BLK0_CH20_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH20_DADR.
*/
#define	DMA_DADR020	(DMA_BLK0_CH20_DADR)

/** \\brief  310, DMA Channel Source Address Register */
#define DMA_BLK0_CH20_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014310u)

/** Alias (User Manual Name) for DMA_BLK0_CH20_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH20_SADR.
*/
#define	DMA_SADR020	(DMA_BLK0_CH20_SADR)

/** \\brief  318, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH20_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014318u)

/** Alias (User Manual Name) for DMA_BLK0_CH20_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH20_SHADR.
*/
#define	DMA_SHADR020	(DMA_BLK0_CH20_SHADR)

/** \\brief  32C, DMA Channel Address Control Register */
#define DMA_BLK0_CH21_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001432Cu)

/** Alias (User Manual Name) for DMA_BLK0_CH21_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH21_ADRCR.
*/
#define	DMA_ADRCR021	(DMA_BLK0_CH21_ADRCR)

/** \\brief  324, DMA Channel Control Register */
#define DMA_BLK0_CH21_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014324u)

/** Alias (User Manual Name) for DMA_BLK0_CH21_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH21_CHCR.
*/
#define	DMA_CHCR021	(DMA_BLK0_CH21_CHCR)

/** \\brief  328, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH21_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014328u)

/** Alias (User Manual Name) for DMA_BLK0_CH21_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH21_CHICR.
*/
#define	DMA_CHICR021	(DMA_BLK0_CH21_CHICR)

/** \\brief  320, DMA Channel Status Register */
#define DMA_BLK0_CH21_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014320u)

/** Alias (User Manual Name) for DMA_BLK0_CH21_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH21_CHSR.
*/
#define	DMA_CHSR021	(DMA_BLK0_CH21_CHSR)

/** \\brief  334, DMA Channel Destination Address Register */
#define DMA_BLK0_CH21_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014334u)

/** Alias (User Manual Name) for DMA_BLK0_CH21_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH21_DADR.
*/
#define	DMA_DADR021	(DMA_BLK0_CH21_DADR)

/** \\brief  330, DMA Channel Source Address Register */
#define DMA_BLK0_CH21_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014330u)

/** Alias (User Manual Name) for DMA_BLK0_CH21_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH21_SADR.
*/
#define	DMA_SADR021	(DMA_BLK0_CH21_SADR)

/** \\brief  338, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH21_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014338u)

/** Alias (User Manual Name) for DMA_BLK0_CH21_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH21_SHADR.
*/
#define	DMA_SHADR021	(DMA_BLK0_CH21_SHADR)

/** \\brief  34C, DMA Channel Address Control Register */
#define DMA_BLK0_CH22_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001434Cu)

/** Alias (User Manual Name) for DMA_BLK0_CH22_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH22_ADRCR.
*/
#define	DMA_ADRCR022	(DMA_BLK0_CH22_ADRCR)

/** \\brief  344, DMA Channel Control Register */
#define DMA_BLK0_CH22_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014344u)

/** Alias (User Manual Name) for DMA_BLK0_CH22_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH22_CHCR.
*/
#define	DMA_CHCR022	(DMA_BLK0_CH22_CHCR)

/** \\brief  348, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH22_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014348u)

/** Alias (User Manual Name) for DMA_BLK0_CH22_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH22_CHICR.
*/
#define	DMA_CHICR022	(DMA_BLK0_CH22_CHICR)

/** \\brief  340, DMA Channel Status Register */
#define DMA_BLK0_CH22_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014340u)

/** Alias (User Manual Name) for DMA_BLK0_CH22_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH22_CHSR.
*/
#define	DMA_CHSR022	(DMA_BLK0_CH22_CHSR)

/** \\brief  354, DMA Channel Destination Address Register */
#define DMA_BLK0_CH22_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014354u)

/** Alias (User Manual Name) for DMA_BLK0_CH22_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH22_DADR.
*/
#define	DMA_DADR022	(DMA_BLK0_CH22_DADR)

/** \\brief  350, DMA Channel Source Address Register */
#define DMA_BLK0_CH22_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014350u)

/** Alias (User Manual Name) for DMA_BLK0_CH22_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH22_SADR.
*/
#define	DMA_SADR022	(DMA_BLK0_CH22_SADR)

/** \\brief  358, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH22_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014358u)

/** Alias (User Manual Name) for DMA_BLK0_CH22_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH22_SHADR.
*/
#define	DMA_SHADR022	(DMA_BLK0_CH22_SHADR)

/** \\brief  36C, DMA Channel Address Control Register */
#define DMA_BLK0_CH23_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001436Cu)

/** Alias (User Manual Name) for DMA_BLK0_CH23_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH23_ADRCR.
*/
#define	DMA_ADRCR023	(DMA_BLK0_CH23_ADRCR)

/** \\brief  364, DMA Channel Control Register */
#define DMA_BLK0_CH23_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014364u)

/** Alias (User Manual Name) for DMA_BLK0_CH23_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH23_CHCR.
*/
#define	DMA_CHCR023	(DMA_BLK0_CH23_CHCR)

/** \\brief  368, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH23_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014368u)

/** Alias (User Manual Name) for DMA_BLK0_CH23_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH23_CHICR.
*/
#define	DMA_CHICR023	(DMA_BLK0_CH23_CHICR)

/** \\brief  360, DMA Channel Status Register */
#define DMA_BLK0_CH23_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014360u)

/** Alias (User Manual Name) for DMA_BLK0_CH23_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH23_CHSR.
*/
#define	DMA_CHSR023	(DMA_BLK0_CH23_CHSR)

/** \\brief  374, DMA Channel Destination Address Register */
#define DMA_BLK0_CH23_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014374u)

/** Alias (User Manual Name) for DMA_BLK0_CH23_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH23_DADR.
*/
#define	DMA_DADR023	(DMA_BLK0_CH23_DADR)

/** \\brief  370, DMA Channel Source Address Register */
#define DMA_BLK0_CH23_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014370u)

/** Alias (User Manual Name) for DMA_BLK0_CH23_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH23_SADR.
*/
#define	DMA_SADR023	(DMA_BLK0_CH23_SADR)

/** \\brief  378, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH23_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014378u)

/** Alias (User Manual Name) for DMA_BLK0_CH23_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH23_SHADR.
*/
#define	DMA_SHADR023	(DMA_BLK0_CH23_SHADR)

/** \\brief  CC, DMA Channel Address Control Register */
#define DMA_BLK0_CH2_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00140CCu)

/** Alias (User Manual Name) for DMA_BLK0_CH2_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH2_ADRCR.
*/
#define	DMA_ADRCR002	(DMA_BLK0_CH2_ADRCR)

/** \\brief  C4, DMA Channel Control Register */
#define DMA_BLK0_CH2_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00140C4u)

/** Alias (User Manual Name) for DMA_BLK0_CH2_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH2_CHCR.
*/
#define	DMA_CHCR002	(DMA_BLK0_CH2_CHCR)

/** \\brief  C8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH2_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00140C8u)

/** Alias (User Manual Name) for DMA_BLK0_CH2_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH2_CHICR.
*/
#define	DMA_CHICR002	(DMA_BLK0_CH2_CHICR)

/** \\brief  C0, DMA Channel Status Register */
#define DMA_BLK0_CH2_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00140C0u)

/** Alias (User Manual Name) for DMA_BLK0_CH2_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH2_CHSR.
*/
#define	DMA_CHSR002	(DMA_BLK0_CH2_CHSR)

/** \\brief  D4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH2_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00140D4u)

/** Alias (User Manual Name) for DMA_BLK0_CH2_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH2_DADR.
*/
#define	DMA_DADR002	(DMA_BLK0_CH2_DADR)

/** \\brief  D0, DMA Channel Source Address Register */
#define DMA_BLK0_CH2_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00140D0u)

/** Alias (User Manual Name) for DMA_BLK0_CH2_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH2_SADR.
*/
#define	DMA_SADR002	(DMA_BLK0_CH2_SADR)

/** \\brief  D8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH2_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00140D8u)

/** Alias (User Manual Name) for DMA_BLK0_CH2_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH2_SHADR.
*/
#define	DMA_SHADR002	(DMA_BLK0_CH2_SHADR)

/** \\brief  EC, DMA Channel Address Control Register */
#define DMA_BLK0_CH3_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00140ECu)

/** Alias (User Manual Name) for DMA_BLK0_CH3_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH3_ADRCR.
*/
#define	DMA_ADRCR003	(DMA_BLK0_CH3_ADRCR)

/** \\brief  E4, DMA Channel Control Register */
#define DMA_BLK0_CH3_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00140E4u)

/** Alias (User Manual Name) for DMA_BLK0_CH3_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH3_CHCR.
*/
#define	DMA_CHCR003	(DMA_BLK0_CH3_CHCR)

/** \\brief  E8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH3_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00140E8u)

/** Alias (User Manual Name) for DMA_BLK0_CH3_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH3_CHICR.
*/
#define	DMA_CHICR003	(DMA_BLK0_CH3_CHICR)

/** \\brief  E0, DMA Channel Status Register */
#define DMA_BLK0_CH3_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00140E0u)

/** Alias (User Manual Name) for DMA_BLK0_CH3_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH3_CHSR.
*/
#define	DMA_CHSR003	(DMA_BLK0_CH3_CHSR)

/** \\brief  F4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH3_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00140F4u)

/** Alias (User Manual Name) for DMA_BLK0_CH3_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH3_DADR.
*/
#define	DMA_DADR003	(DMA_BLK0_CH3_DADR)

/** \\brief  F0, DMA Channel Source Address Register */
#define DMA_BLK0_CH3_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00140F0u)

/** Alias (User Manual Name) for DMA_BLK0_CH3_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH3_SADR.
*/
#define	DMA_SADR003	(DMA_BLK0_CH3_SADR)

/** \\brief  F8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH3_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00140F8u)

/** Alias (User Manual Name) for DMA_BLK0_CH3_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH3_SHADR.
*/
#define	DMA_SHADR003	(DMA_BLK0_CH3_SHADR)

/** \\brief  10C, DMA Channel Address Control Register */
#define DMA_BLK0_CH4_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001410Cu)

/** Alias (User Manual Name) for DMA_BLK0_CH4_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH4_ADRCR.
*/
#define	DMA_ADRCR004	(DMA_BLK0_CH4_ADRCR)

/** \\brief  104, DMA Channel Control Register */
#define DMA_BLK0_CH4_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014104u)

/** Alias (User Manual Name) for DMA_BLK0_CH4_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH4_CHCR.
*/
#define	DMA_CHCR004	(DMA_BLK0_CH4_CHCR)

/** \\brief  108, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH4_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014108u)

/** Alias (User Manual Name) for DMA_BLK0_CH4_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH4_CHICR.
*/
#define	DMA_CHICR004	(DMA_BLK0_CH4_CHICR)

/** \\brief  100, DMA Channel Status Register */
#define DMA_BLK0_CH4_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014100u)

/** Alias (User Manual Name) for DMA_BLK0_CH4_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH4_CHSR.
*/
#define	DMA_CHSR004	(DMA_BLK0_CH4_CHSR)

/** \\brief  114, DMA Channel Destination Address Register */
#define DMA_BLK0_CH4_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014114u)

/** Alias (User Manual Name) for DMA_BLK0_CH4_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH4_DADR.
*/
#define	DMA_DADR004	(DMA_BLK0_CH4_DADR)

/** \\brief  110, DMA Channel Source Address Register */
#define DMA_BLK0_CH4_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014110u)

/** Alias (User Manual Name) for DMA_BLK0_CH4_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH4_SADR.
*/
#define	DMA_SADR004	(DMA_BLK0_CH4_SADR)

/** \\brief  118, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH4_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014118u)

/** Alias (User Manual Name) for DMA_BLK0_CH4_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH4_SHADR.
*/
#define	DMA_SHADR004	(DMA_BLK0_CH4_SHADR)

/** \\brief  12C, DMA Channel Address Control Register */
#define DMA_BLK0_CH5_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001412Cu)

/** Alias (User Manual Name) for DMA_BLK0_CH5_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH5_ADRCR.
*/
#define	DMA_ADRCR005	(DMA_BLK0_CH5_ADRCR)

/** \\brief  124, DMA Channel Control Register */
#define DMA_BLK0_CH5_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014124u)

/** Alias (User Manual Name) for DMA_BLK0_CH5_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH5_CHCR.
*/
#define	DMA_CHCR005	(DMA_BLK0_CH5_CHCR)

/** \\brief  128, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH5_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014128u)

/** Alias (User Manual Name) for DMA_BLK0_CH5_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH5_CHICR.
*/
#define	DMA_CHICR005	(DMA_BLK0_CH5_CHICR)

/** \\brief  120, DMA Channel Status Register */
#define DMA_BLK0_CH5_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014120u)

/** Alias (User Manual Name) for DMA_BLK0_CH5_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH5_CHSR.
*/
#define	DMA_CHSR005	(DMA_BLK0_CH5_CHSR)

/** \\brief  134, DMA Channel Destination Address Register */
#define DMA_BLK0_CH5_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014134u)

/** Alias (User Manual Name) for DMA_BLK0_CH5_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH5_DADR.
*/
#define	DMA_DADR005	(DMA_BLK0_CH5_DADR)

/** \\brief  130, DMA Channel Source Address Register */
#define DMA_BLK0_CH5_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014130u)

/** Alias (User Manual Name) for DMA_BLK0_CH5_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH5_SADR.
*/
#define	DMA_SADR005	(DMA_BLK0_CH5_SADR)

/** \\brief  138, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH5_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014138u)

/** Alias (User Manual Name) for DMA_BLK0_CH5_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH5_SHADR.
*/
#define	DMA_SHADR005	(DMA_BLK0_CH5_SHADR)

/** \\brief  14C, DMA Channel Address Control Register */
#define DMA_BLK0_CH6_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001414Cu)

/** Alias (User Manual Name) for DMA_BLK0_CH6_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH6_ADRCR.
*/
#define	DMA_ADRCR006	(DMA_BLK0_CH6_ADRCR)

/** \\brief  144, DMA Channel Control Register */
#define DMA_BLK0_CH6_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014144u)

/** Alias (User Manual Name) for DMA_BLK0_CH6_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH6_CHCR.
*/
#define	DMA_CHCR006	(DMA_BLK0_CH6_CHCR)

/** \\brief  148, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH6_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014148u)

/** Alias (User Manual Name) for DMA_BLK0_CH6_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH6_CHICR.
*/
#define	DMA_CHICR006	(DMA_BLK0_CH6_CHICR)

/** \\brief  140, DMA Channel Status Register */
#define DMA_BLK0_CH6_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014140u)

/** Alias (User Manual Name) for DMA_BLK0_CH6_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH6_CHSR.
*/
#define	DMA_CHSR006	(DMA_BLK0_CH6_CHSR)

/** \\brief  154, DMA Channel Destination Address Register */
#define DMA_BLK0_CH6_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014154u)

/** Alias (User Manual Name) for DMA_BLK0_CH6_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH6_DADR.
*/
#define	DMA_DADR006	(DMA_BLK0_CH6_DADR)

/** \\brief  150, DMA Channel Source Address Register */
#define DMA_BLK0_CH6_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014150u)

/** Alias (User Manual Name) for DMA_BLK0_CH6_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH6_SADR.
*/
#define	DMA_SADR006	(DMA_BLK0_CH6_SADR)

/** \\brief  158, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH6_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014158u)

/** Alias (User Manual Name) for DMA_BLK0_CH6_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH6_SHADR.
*/
#define	DMA_SHADR006	(DMA_BLK0_CH6_SHADR)

/** \\brief  16C, DMA Channel Address Control Register */
#define DMA_BLK0_CH7_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001416Cu)

/** Alias (User Manual Name) for DMA_BLK0_CH7_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH7_ADRCR.
*/
#define	DMA_ADRCR007	(DMA_BLK0_CH7_ADRCR)

/** \\brief  164, DMA Channel Control Register */
#define DMA_BLK0_CH7_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014164u)

/** Alias (User Manual Name) for DMA_BLK0_CH7_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH7_CHCR.
*/
#define	DMA_CHCR007	(DMA_BLK0_CH7_CHCR)

/** \\brief  168, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH7_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014168u)

/** Alias (User Manual Name) for DMA_BLK0_CH7_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH7_CHICR.
*/
#define	DMA_CHICR007	(DMA_BLK0_CH7_CHICR)

/** \\brief  160, DMA Channel Status Register */
#define DMA_BLK0_CH7_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014160u)

/** Alias (User Manual Name) for DMA_BLK0_CH7_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH7_CHSR.
*/
#define	DMA_CHSR007	(DMA_BLK0_CH7_CHSR)

/** \\brief  174, DMA Channel Destination Address Register */
#define DMA_BLK0_CH7_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014174u)

/** Alias (User Manual Name) for DMA_BLK0_CH7_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH7_DADR.
*/
#define	DMA_DADR007	(DMA_BLK0_CH7_DADR)

/** \\brief  170, DMA Channel Source Address Register */
#define DMA_BLK0_CH7_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014170u)

/** Alias (User Manual Name) for DMA_BLK0_CH7_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH7_SADR.
*/
#define	DMA_SADR007	(DMA_BLK0_CH7_SADR)

/** \\brief  178, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH7_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014178u)

/** Alias (User Manual Name) for DMA_BLK0_CH7_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH7_SHADR.
*/
#define	DMA_SHADR007	(DMA_BLK0_CH7_SHADR)

/** \\brief  18C, DMA Channel Address Control Register */
#define DMA_BLK0_CH8_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001418Cu)

/** Alias (User Manual Name) for DMA_BLK0_CH8_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH8_ADRCR.
*/
#define	DMA_ADRCR008	(DMA_BLK0_CH8_ADRCR)

/** \\brief  184, DMA Channel Control Register */
#define DMA_BLK0_CH8_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0014184u)

/** Alias (User Manual Name) for DMA_BLK0_CH8_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH8_CHCR.
*/
#define	DMA_CHCR008	(DMA_BLK0_CH8_CHCR)

/** \\brief  188, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH8_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0014188u)

/** Alias (User Manual Name) for DMA_BLK0_CH8_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH8_CHICR.
*/
#define	DMA_CHICR008	(DMA_BLK0_CH8_CHICR)

/** \\brief  180, DMA Channel Status Register */
#define DMA_BLK0_CH8_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0014180u)

/** Alias (User Manual Name) for DMA_BLK0_CH8_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH8_CHSR.
*/
#define	DMA_CHSR008	(DMA_BLK0_CH8_CHSR)

/** \\brief  194, DMA Channel Destination Address Register */
#define DMA_BLK0_CH8_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0014194u)

/** Alias (User Manual Name) for DMA_BLK0_CH8_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH8_DADR.
*/
#define	DMA_DADR008	(DMA_BLK0_CH8_DADR)

/** \\brief  190, DMA Channel Source Address Register */
#define DMA_BLK0_CH8_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0014190u)

/** Alias (User Manual Name) for DMA_BLK0_CH8_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH8_SADR.
*/
#define	DMA_SADR008	(DMA_BLK0_CH8_SADR)

/** \\brief  198, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH8_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0014198u)

/** Alias (User Manual Name) for DMA_BLK0_CH8_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH8_SHADR.
*/
#define	DMA_SHADR008	(DMA_BLK0_CH8_SHADR)

/** \\brief  1AC, DMA Channel Address Control Register */
#define DMA_BLK0_CH9_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00141ACu)

/** Alias (User Manual Name) for DMA_BLK0_CH9_ADRCR.
* To use register names with standard convension, please use DMA_BLK0_CH9_ADRCR.
*/
#define	DMA_ADRCR009	(DMA_BLK0_CH9_ADRCR)

/** \\brief  1A4, DMA Channel Control Register */
#define DMA_BLK0_CH9_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00141A4u)

/** Alias (User Manual Name) for DMA_BLK0_CH9_CHCR.
* To use register names with standard convension, please use DMA_BLK0_CH9_CHCR.
*/
#define	DMA_CHCR009	(DMA_BLK0_CH9_CHCR)

/** \\brief  1A8, DMA Channel Interrupt Control Register */
#define DMA_BLK0_CH9_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00141A8u)

/** Alias (User Manual Name) for DMA_BLK0_CH9_CHICR.
* To use register names with standard convension, please use DMA_BLK0_CH9_CHICR.
*/
#define	DMA_CHICR009	(DMA_BLK0_CH9_CHICR)

/** \\brief  1A0, DMA Channel Status Register */
#define DMA_BLK0_CH9_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00141A0u)

/** Alias (User Manual Name) for DMA_BLK0_CH9_CHSR.
* To use register names with standard convension, please use DMA_BLK0_CH9_CHSR.
*/
#define	DMA_CHSR009	(DMA_BLK0_CH9_CHSR)

/** \\brief  1B4, DMA Channel Destination Address Register */
#define DMA_BLK0_CH9_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00141B4u)

/** Alias (User Manual Name) for DMA_BLK0_CH9_DADR.
* To use register names with standard convension, please use DMA_BLK0_CH9_DADR.
*/
#define	DMA_DADR009	(DMA_BLK0_CH9_DADR)

/** \\brief  1B0, DMA Channel Source Address Register */
#define DMA_BLK0_CH9_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00141B0u)

/** Alias (User Manual Name) for DMA_BLK0_CH9_SADR.
* To use register names with standard convension, please use DMA_BLK0_CH9_SADR.
*/
#define	DMA_SADR009	(DMA_BLK0_CH9_SADR)

/** \\brief  1B8, DMA Channel Shadow Address Register */
#define DMA_BLK0_CH9_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00141B8u)

/** Alias (User Manual Name) for DMA_BLK0_CH9_SHADR.
* To use register names with standard convension, please use DMA_BLK0_CH9_SHADR.
*/
#define	DMA_SHADR009	(DMA_BLK0_CH9_SHADR)

/** \\brief  70, DMA Channel Interrupt Set Register0 */
#define DMA_BLK0_CHINTR0 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CHINTR0*)0xF0014070u)

/** Alias (User Manual Name) for DMA_BLK0_CHINTR0.
* To use register names with standard convension, please use DMA_BLK0_CHINTR0.
*/
#define	DMA_CHINTR00	(DMA_BLK0_CHINTR0)

/** \\brief  40, DMA Channel Reset Request Register0 */
#define DMA_BLK0_CHRSTR0 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CHRSTR0*)0xF0014040u)

/** Alias (User Manual Name) for DMA_BLK0_CHRSTR0.
* To use register names with standard convension, please use DMA_BLK0_CHRSTR0.
*/
#define	DMA_CHRSTR00	(DMA_BLK0_CHRSTR0)

/** \\brief  28, DMA Clear Error Register */
#define DMA_BLK0_CLRE /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CLRE*)0xF0014028u)

/** Alias (User Manual Name) for DMA_BLK0_CLRE.
* To use register names with standard convension, please use DMA_BLK0_CLRE.
*/
#define	DMA_CLRE0	(DMA_BLK0_CLRE)

/** \\brief  20, DMA Enable Error Register */
#define DMA_BLK0_EER /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_EER*)0xF0014020u)

/** Alias (User Manual Name) for DMA_BLK0_EER.
* To use register names with standard convension, please use DMA_BLK0_EER.
*/
#define	DMA_EER0	(DMA_BLK0_EER)

/** \\brief  24, DMA Error Status Register */
#define DMA_BLK0_ERRSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ERRSR*)0xF0014024u)

/** Alias (User Manual Name) for DMA_BLK0_ERRSR.
* To use register names with standard convension, please use DMA_BLK0_ERRSR.
*/
#define	DMA_ERRSR0	(DMA_BLK0_ERRSR)

/** \\brief  38, DMA Move Engine Interrupt Set Register */
#define DMA_BLK0_ME_INTR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_INTR*)0xF0014038u)

/** Alias (User Manual Name) for DMA_BLK0_ME_INTR.
* To use register names with standard convension, please use DMA_BLK0_ME_INTR.
*/
#define	DMA_ME0INTR	(DMA_BLK0_ME_INTR)

/** \\brief  3C, DMA Move Engine Pattern Read Register */
#define DMA_BLK0_ME_PR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_PR*)0xF001403Cu)

/** Alias (User Manual Name) for DMA_BLK0_ME_PR.
* To use register names with standard convension, please use DMA_BLK0_ME_PR.
*/
#define	DMA_ME0PR	(DMA_BLK0_ME_PR)

/** \\brief  34, DMA Move Engine Read Register */
#define DMA_BLK0_ME_R /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R*)0xF0014034u)

/** Alias (User Manual Name) for DMA_BLK0_ME_R.
* To use register names with standard convension, please use DMA_BLK0_ME_R.
*/
#define	DMA_ME0R	(DMA_BLK0_ME_R)

/** \\brief  30, DMA Move Engine Status Register */
#define DMA_BLK0_ME_SR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_SR*)0xF0014030u)

/** Alias (User Manual Name) for DMA_BLK0_ME_SR.
* To use register names with standard convension, please use DMA_BLK0_ME_SR.
*/
#define	DMA_ME0SR	(DMA_BLK0_ME_SR)

/** \\brief  68, DMA Suspend Acknowledge Register0 */
#define DMA_BLK0_SUSACR0 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_SUSACR0*)0xF0014068u)

/** Alias (User Manual Name) for DMA_BLK0_SUSACR0.
* To use register names with standard convension, please use DMA_BLK0_SUSACR0.
*/
#define	DMA_SUSACR00	(DMA_BLK0_SUSACR0)

/** \\brief  60, DMA Suspend Enable Register0 */
#define DMA_BLK0_SUSENR0 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_SUSENR0*)0xF0014060u)

/** Alias (User Manual Name) for DMA_BLK0_SUSENR0.
* To use register names with standard convension, please use DMA_BLK0_SUSENR0.
*/
#define	DMA_SUSENR00	(DMA_BLK0_SUSENR0)

/** \\brief  18FC, DMA Sub-block Access Enable Register 0 */
#define DMA_BLK1_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ACCEN0*)0xF00158FCu)

/** Alias (User Manual Name) for DMA_BLK1_ACCEN0.
* To use register names with standard convension, please use DMA_BLK1_ACCEN0.
*/
#define	DMA_ACCEN10	(DMA_BLK1_ACCEN0)

/** \\brief  18F8, DMA Sub-block Access Enable Register 1 */
#define DMA_BLK1_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ACCEN1*)0xF00158F8u)

/** Alias (User Manual Name) for DMA_BLK1_ACCEN1.
* To use register names with standard convension, please use DMA_BLK1_ACCEN1.
*/
#define	DMA_ACCEN11	(DMA_BLK1_ACCEN1)

/** \\brief  108C, DMA Channel Address Control Register */
#define DMA_BLK1_CH0_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001508Cu)

/** Alias (User Manual Name) for DMA_BLK1_CH0_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH0_ADRCR.
*/
#define	DMA_ADRCR100	(DMA_BLK1_CH0_ADRCR)

/** \\brief  1084, DMA Channel Control Register */
#define DMA_BLK1_CH0_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015084u)

/** Alias (User Manual Name) for DMA_BLK1_CH0_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH0_CHCR.
*/
#define	DMA_CHCR100	(DMA_BLK1_CH0_CHCR)

/** \\brief  1088, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH0_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015088u)

/** Alias (User Manual Name) for DMA_BLK1_CH0_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH0_CHICR.
*/
#define	DMA_CHICR100	(DMA_BLK1_CH0_CHICR)

/** \\brief  1080, DMA Channel Status Register */
#define DMA_BLK1_CH0_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015080u)

/** Alias (User Manual Name) for DMA_BLK1_CH0_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH0_CHSR.
*/
#define	DMA_CHSR100	(DMA_BLK1_CH0_CHSR)

/** \\brief  1094, DMA Channel Destination Address Register */
#define DMA_BLK1_CH0_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015094u)

/** Alias (User Manual Name) for DMA_BLK1_CH0_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH0_DADR.
*/
#define	DMA_DADR100	(DMA_BLK1_CH0_DADR)

/** \\brief  1090, DMA Channel Source Address Register */
#define DMA_BLK1_CH0_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015090u)

/** Alias (User Manual Name) for DMA_BLK1_CH0_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH0_SADR.
*/
#define	DMA_SADR100	(DMA_BLK1_CH0_SADR)

/** \\brief  1098, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH0_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015098u)

/** Alias (User Manual Name) for DMA_BLK1_CH0_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH0_SHADR.
*/
#define	DMA_SHADR100	(DMA_BLK1_CH0_SHADR)

/** \\brief  11CC, DMA Channel Address Control Register */
#define DMA_BLK1_CH10_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00151CCu)

/** Alias (User Manual Name) for DMA_BLK1_CH10_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH10_ADRCR.
*/
#define	DMA_ADRCR110	(DMA_BLK1_CH10_ADRCR)

/** \\brief  11C4, DMA Channel Control Register */
#define DMA_BLK1_CH10_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00151C4u)

/** Alias (User Manual Name) for DMA_BLK1_CH10_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH10_CHCR.
*/
#define	DMA_CHCR110	(DMA_BLK1_CH10_CHCR)

/** \\brief  11C8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH10_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00151C8u)

/** Alias (User Manual Name) for DMA_BLK1_CH10_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH10_CHICR.
*/
#define	DMA_CHICR110	(DMA_BLK1_CH10_CHICR)

/** \\brief  11C0, DMA Channel Status Register */
#define DMA_BLK1_CH10_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00151C0u)

/** Alias (User Manual Name) for DMA_BLK1_CH10_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH10_CHSR.
*/
#define	DMA_CHSR110	(DMA_BLK1_CH10_CHSR)

/** \\brief  11D4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH10_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00151D4u)

/** Alias (User Manual Name) for DMA_BLK1_CH10_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH10_DADR.
*/
#define	DMA_DADR110	(DMA_BLK1_CH10_DADR)

/** \\brief  11D0, DMA Channel Source Address Register */
#define DMA_BLK1_CH10_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00151D0u)

/** Alias (User Manual Name) for DMA_BLK1_CH10_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH10_SADR.
*/
#define	DMA_SADR110	(DMA_BLK1_CH10_SADR)

/** \\brief  11D8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH10_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00151D8u)

/** Alias (User Manual Name) for DMA_BLK1_CH10_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH10_SHADR.
*/
#define	DMA_SHADR110	(DMA_BLK1_CH10_SHADR)

/** \\brief  11EC, DMA Channel Address Control Register */
#define DMA_BLK1_CH11_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00151ECu)

/** Alias (User Manual Name) for DMA_BLK1_CH11_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH11_ADRCR.
*/
#define	DMA_ADRCR111	(DMA_BLK1_CH11_ADRCR)

/** \\brief  11E4, DMA Channel Control Register */
#define DMA_BLK1_CH11_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00151E4u)

/** Alias (User Manual Name) for DMA_BLK1_CH11_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH11_CHCR.
*/
#define	DMA_CHCR111	(DMA_BLK1_CH11_CHCR)

/** \\brief  11E8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH11_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00151E8u)

/** Alias (User Manual Name) for DMA_BLK1_CH11_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH11_CHICR.
*/
#define	DMA_CHICR111	(DMA_BLK1_CH11_CHICR)

/** \\brief  11E0, DMA Channel Status Register */
#define DMA_BLK1_CH11_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00151E0u)

/** Alias (User Manual Name) for DMA_BLK1_CH11_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH11_CHSR.
*/
#define	DMA_CHSR111	(DMA_BLK1_CH11_CHSR)

/** \\brief  11F4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH11_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00151F4u)

/** Alias (User Manual Name) for DMA_BLK1_CH11_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH11_DADR.
*/
#define	DMA_DADR111	(DMA_BLK1_CH11_DADR)

/** \\brief  11F0, DMA Channel Source Address Register */
#define DMA_BLK1_CH11_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00151F0u)

/** Alias (User Manual Name) for DMA_BLK1_CH11_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH11_SADR.
*/
#define	DMA_SADR111	(DMA_BLK1_CH11_SADR)

/** \\brief  11F8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH11_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00151F8u)

/** Alias (User Manual Name) for DMA_BLK1_CH11_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH11_SHADR.
*/
#define	DMA_SHADR111	(DMA_BLK1_CH11_SHADR)

/** \\brief  120C, DMA Channel Address Control Register */
#define DMA_BLK1_CH12_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001520Cu)

/** Alias (User Manual Name) for DMA_BLK1_CH12_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH12_ADRCR.
*/
#define	DMA_ADRCR112	(DMA_BLK1_CH12_ADRCR)

/** \\brief  1204, DMA Channel Control Register */
#define DMA_BLK1_CH12_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015204u)

/** Alias (User Manual Name) for DMA_BLK1_CH12_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH12_CHCR.
*/
#define	DMA_CHCR112	(DMA_BLK1_CH12_CHCR)

/** \\brief  1208, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH12_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015208u)

/** Alias (User Manual Name) for DMA_BLK1_CH12_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH12_CHICR.
*/
#define	DMA_CHICR112	(DMA_BLK1_CH12_CHICR)

/** \\brief  1200, DMA Channel Status Register */
#define DMA_BLK1_CH12_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015200u)

/** Alias (User Manual Name) for DMA_BLK1_CH12_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH12_CHSR.
*/
#define	DMA_CHSR112	(DMA_BLK1_CH12_CHSR)

/** \\brief  1214, DMA Channel Destination Address Register */
#define DMA_BLK1_CH12_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015214u)

/** Alias (User Manual Name) for DMA_BLK1_CH12_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH12_DADR.
*/
#define	DMA_DADR112	(DMA_BLK1_CH12_DADR)

/** \\brief  1210, DMA Channel Source Address Register */
#define DMA_BLK1_CH12_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015210u)

/** Alias (User Manual Name) for DMA_BLK1_CH12_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH12_SADR.
*/
#define	DMA_SADR112	(DMA_BLK1_CH12_SADR)

/** \\brief  1218, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH12_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015218u)

/** Alias (User Manual Name) for DMA_BLK1_CH12_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH12_SHADR.
*/
#define	DMA_SHADR112	(DMA_BLK1_CH12_SHADR)

/** \\brief  122C, DMA Channel Address Control Register */
#define DMA_BLK1_CH13_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001522Cu)

/** Alias (User Manual Name) for DMA_BLK1_CH13_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH13_ADRCR.
*/
#define	DMA_ADRCR113	(DMA_BLK1_CH13_ADRCR)

/** \\brief  1224, DMA Channel Control Register */
#define DMA_BLK1_CH13_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015224u)

/** Alias (User Manual Name) for DMA_BLK1_CH13_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH13_CHCR.
*/
#define	DMA_CHCR113	(DMA_BLK1_CH13_CHCR)

/** \\brief  1228, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH13_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015228u)

/** Alias (User Manual Name) for DMA_BLK1_CH13_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH13_CHICR.
*/
#define	DMA_CHICR113	(DMA_BLK1_CH13_CHICR)

/** \\brief  1220, DMA Channel Status Register */
#define DMA_BLK1_CH13_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015220u)

/** Alias (User Manual Name) for DMA_BLK1_CH13_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH13_CHSR.
*/
#define	DMA_CHSR113	(DMA_BLK1_CH13_CHSR)

/** \\brief  1234, DMA Channel Destination Address Register */
#define DMA_BLK1_CH13_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015234u)

/** Alias (User Manual Name) for DMA_BLK1_CH13_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH13_DADR.
*/
#define	DMA_DADR113	(DMA_BLK1_CH13_DADR)

/** \\brief  1230, DMA Channel Source Address Register */
#define DMA_BLK1_CH13_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015230u)

/** Alias (User Manual Name) for DMA_BLK1_CH13_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH13_SADR.
*/
#define	DMA_SADR113	(DMA_BLK1_CH13_SADR)

/** \\brief  1238, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH13_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015238u)

/** Alias (User Manual Name) for DMA_BLK1_CH13_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH13_SHADR.
*/
#define	DMA_SHADR113	(DMA_BLK1_CH13_SHADR)

/** \\brief  124C, DMA Channel Address Control Register */
#define DMA_BLK1_CH14_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001524Cu)

/** Alias (User Manual Name) for DMA_BLK1_CH14_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH14_ADRCR.
*/
#define	DMA_ADRCR114	(DMA_BLK1_CH14_ADRCR)

/** \\brief  1244, DMA Channel Control Register */
#define DMA_BLK1_CH14_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015244u)

/** Alias (User Manual Name) for DMA_BLK1_CH14_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH14_CHCR.
*/
#define	DMA_CHCR114	(DMA_BLK1_CH14_CHCR)

/** \\brief  1248, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH14_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015248u)

/** Alias (User Manual Name) for DMA_BLK1_CH14_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH14_CHICR.
*/
#define	DMA_CHICR114	(DMA_BLK1_CH14_CHICR)

/** \\brief  1240, DMA Channel Status Register */
#define DMA_BLK1_CH14_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015240u)

/** Alias (User Manual Name) for DMA_BLK1_CH14_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH14_CHSR.
*/
#define	DMA_CHSR114	(DMA_BLK1_CH14_CHSR)

/** \\brief  1254, DMA Channel Destination Address Register */
#define DMA_BLK1_CH14_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015254u)

/** Alias (User Manual Name) for DMA_BLK1_CH14_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH14_DADR.
*/
#define	DMA_DADR114	(DMA_BLK1_CH14_DADR)

/** \\brief  1250, DMA Channel Source Address Register */
#define DMA_BLK1_CH14_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015250u)

/** Alias (User Manual Name) for DMA_BLK1_CH14_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH14_SADR.
*/
#define	DMA_SADR114	(DMA_BLK1_CH14_SADR)

/** \\brief  1258, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH14_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015258u)

/** Alias (User Manual Name) for DMA_BLK1_CH14_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH14_SHADR.
*/
#define	DMA_SHADR114	(DMA_BLK1_CH14_SHADR)

/** \\brief  126C, DMA Channel Address Control Register */
#define DMA_BLK1_CH15_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001526Cu)

/** Alias (User Manual Name) for DMA_BLK1_CH15_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH15_ADRCR.
*/
#define	DMA_ADRCR115	(DMA_BLK1_CH15_ADRCR)

/** \\brief  1264, DMA Channel Control Register */
#define DMA_BLK1_CH15_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015264u)

/** Alias (User Manual Name) for DMA_BLK1_CH15_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH15_CHCR.
*/
#define	DMA_CHCR115	(DMA_BLK1_CH15_CHCR)

/** \\brief  1268, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH15_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015268u)

/** Alias (User Manual Name) for DMA_BLK1_CH15_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH15_CHICR.
*/
#define	DMA_CHICR115	(DMA_BLK1_CH15_CHICR)

/** \\brief  1260, DMA Channel Status Register */
#define DMA_BLK1_CH15_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015260u)

/** Alias (User Manual Name) for DMA_BLK1_CH15_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH15_CHSR.
*/
#define	DMA_CHSR115	(DMA_BLK1_CH15_CHSR)

/** \\brief  1274, DMA Channel Destination Address Register */
#define DMA_BLK1_CH15_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015274u)

/** Alias (User Manual Name) for DMA_BLK1_CH15_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH15_DADR.
*/
#define	DMA_DADR115	(DMA_BLK1_CH15_DADR)

/** \\brief  1270, DMA Channel Source Address Register */
#define DMA_BLK1_CH15_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015270u)

/** Alias (User Manual Name) for DMA_BLK1_CH15_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH15_SADR.
*/
#define	DMA_SADR115	(DMA_BLK1_CH15_SADR)

/** \\brief  1278, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH15_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015278u)

/** Alias (User Manual Name) for DMA_BLK1_CH15_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH15_SHADR.
*/
#define	DMA_SHADR115	(DMA_BLK1_CH15_SHADR)

/** \\brief  128C, DMA Channel Address Control Register */
#define DMA_BLK1_CH16_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001528Cu)

/** Alias (User Manual Name) for DMA_BLK1_CH16_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH16_ADRCR.
*/
#define	DMA_ADRCR116	(DMA_BLK1_CH16_ADRCR)

/** \\brief  1284, DMA Channel Control Register */
#define DMA_BLK1_CH16_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015284u)

/** Alias (User Manual Name) for DMA_BLK1_CH16_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH16_CHCR.
*/
#define	DMA_CHCR116	(DMA_BLK1_CH16_CHCR)

/** \\brief  1288, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH16_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015288u)

/** Alias (User Manual Name) for DMA_BLK1_CH16_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH16_CHICR.
*/
#define	DMA_CHICR116	(DMA_BLK1_CH16_CHICR)

/** \\brief  1280, DMA Channel Status Register */
#define DMA_BLK1_CH16_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015280u)

/** Alias (User Manual Name) for DMA_BLK1_CH16_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH16_CHSR.
*/
#define	DMA_CHSR116	(DMA_BLK1_CH16_CHSR)

/** \\brief  1294, DMA Channel Destination Address Register */
#define DMA_BLK1_CH16_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015294u)

/** Alias (User Manual Name) for DMA_BLK1_CH16_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH16_DADR.
*/
#define	DMA_DADR116	(DMA_BLK1_CH16_DADR)

/** \\brief  1290, DMA Channel Source Address Register */
#define DMA_BLK1_CH16_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015290u)

/** Alias (User Manual Name) for DMA_BLK1_CH16_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH16_SADR.
*/
#define	DMA_SADR116	(DMA_BLK1_CH16_SADR)

/** \\brief  1298, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH16_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015298u)

/** Alias (User Manual Name) for DMA_BLK1_CH16_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH16_SHADR.
*/
#define	DMA_SHADR116	(DMA_BLK1_CH16_SHADR)

/** \\brief  12AC, DMA Channel Address Control Register */
#define DMA_BLK1_CH17_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00152ACu)

/** Alias (User Manual Name) for DMA_BLK1_CH17_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH17_ADRCR.
*/
#define	DMA_ADRCR117	(DMA_BLK1_CH17_ADRCR)

/** \\brief  12A4, DMA Channel Control Register */
#define DMA_BLK1_CH17_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00152A4u)

/** Alias (User Manual Name) for DMA_BLK1_CH17_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH17_CHCR.
*/
#define	DMA_CHCR117	(DMA_BLK1_CH17_CHCR)

/** \\brief  12A8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH17_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00152A8u)

/** Alias (User Manual Name) for DMA_BLK1_CH17_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH17_CHICR.
*/
#define	DMA_CHICR117	(DMA_BLK1_CH17_CHICR)

/** \\brief  12A0, DMA Channel Status Register */
#define DMA_BLK1_CH17_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00152A0u)

/** Alias (User Manual Name) for DMA_BLK1_CH17_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH17_CHSR.
*/
#define	DMA_CHSR117	(DMA_BLK1_CH17_CHSR)

/** \\brief  12B4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH17_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00152B4u)

/** Alias (User Manual Name) for DMA_BLK1_CH17_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH17_DADR.
*/
#define	DMA_DADR117	(DMA_BLK1_CH17_DADR)

/** \\brief  12B0, DMA Channel Source Address Register */
#define DMA_BLK1_CH17_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00152B0u)

/** Alias (User Manual Name) for DMA_BLK1_CH17_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH17_SADR.
*/
#define	DMA_SADR117	(DMA_BLK1_CH17_SADR)

/** \\brief  12B8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH17_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00152B8u)

/** Alias (User Manual Name) for DMA_BLK1_CH17_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH17_SHADR.
*/
#define	DMA_SHADR117	(DMA_BLK1_CH17_SHADR)

/** \\brief  12CC, DMA Channel Address Control Register */
#define DMA_BLK1_CH18_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00152CCu)

/** Alias (User Manual Name) for DMA_BLK1_CH18_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH18_ADRCR.
*/
#define	DMA_ADRCR118	(DMA_BLK1_CH18_ADRCR)

/** \\brief  12C4, DMA Channel Control Register */
#define DMA_BLK1_CH18_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00152C4u)

/** Alias (User Manual Name) for DMA_BLK1_CH18_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH18_CHCR.
*/
#define	DMA_CHCR118	(DMA_BLK1_CH18_CHCR)

/** \\brief  12C8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH18_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00152C8u)

/** Alias (User Manual Name) for DMA_BLK1_CH18_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH18_CHICR.
*/
#define	DMA_CHICR118	(DMA_BLK1_CH18_CHICR)

/** \\brief  12C0, DMA Channel Status Register */
#define DMA_BLK1_CH18_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00152C0u)

/** Alias (User Manual Name) for DMA_BLK1_CH18_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH18_CHSR.
*/
#define	DMA_CHSR118	(DMA_BLK1_CH18_CHSR)

/** \\brief  12D4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH18_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00152D4u)

/** Alias (User Manual Name) for DMA_BLK1_CH18_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH18_DADR.
*/
#define	DMA_DADR118	(DMA_BLK1_CH18_DADR)

/** \\brief  12D0, DMA Channel Source Address Register */
#define DMA_BLK1_CH18_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00152D0u)

/** Alias (User Manual Name) for DMA_BLK1_CH18_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH18_SADR.
*/
#define	DMA_SADR118	(DMA_BLK1_CH18_SADR)

/** \\brief  12D8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH18_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00152D8u)

/** Alias (User Manual Name) for DMA_BLK1_CH18_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH18_SHADR.
*/
#define	DMA_SHADR118	(DMA_BLK1_CH18_SHADR)

/** \\brief  12EC, DMA Channel Address Control Register */
#define DMA_BLK1_CH19_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00152ECu)

/** Alias (User Manual Name) for DMA_BLK1_CH19_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH19_ADRCR.
*/
#define	DMA_ADRCR119	(DMA_BLK1_CH19_ADRCR)

/** \\brief  12E4, DMA Channel Control Register */
#define DMA_BLK1_CH19_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00152E4u)

/** Alias (User Manual Name) for DMA_BLK1_CH19_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH19_CHCR.
*/
#define	DMA_CHCR119	(DMA_BLK1_CH19_CHCR)

/** \\brief  12E8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH19_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00152E8u)

/** Alias (User Manual Name) for DMA_BLK1_CH19_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH19_CHICR.
*/
#define	DMA_CHICR119	(DMA_BLK1_CH19_CHICR)

/** \\brief  12E0, DMA Channel Status Register */
#define DMA_BLK1_CH19_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00152E0u)

/** Alias (User Manual Name) for DMA_BLK1_CH19_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH19_CHSR.
*/
#define	DMA_CHSR119	(DMA_BLK1_CH19_CHSR)

/** \\brief  12F4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH19_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00152F4u)

/** Alias (User Manual Name) for DMA_BLK1_CH19_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH19_DADR.
*/
#define	DMA_DADR119	(DMA_BLK1_CH19_DADR)

/** \\brief  12F0, DMA Channel Source Address Register */
#define DMA_BLK1_CH19_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00152F0u)

/** Alias (User Manual Name) for DMA_BLK1_CH19_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH19_SADR.
*/
#define	DMA_SADR119	(DMA_BLK1_CH19_SADR)

/** \\brief  12F8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH19_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00152F8u)

/** Alias (User Manual Name) for DMA_BLK1_CH19_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH19_SHADR.
*/
#define	DMA_SHADR119	(DMA_BLK1_CH19_SHADR)

/** \\brief  10AC, DMA Channel Address Control Register */
#define DMA_BLK1_CH1_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00150ACu)

/** Alias (User Manual Name) for DMA_BLK1_CH1_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH1_ADRCR.
*/
#define	DMA_ADRCR101	(DMA_BLK1_CH1_ADRCR)

/** \\brief  10A4, DMA Channel Control Register */
#define DMA_BLK1_CH1_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00150A4u)

/** Alias (User Manual Name) for DMA_BLK1_CH1_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH1_CHCR.
*/
#define	DMA_CHCR101	(DMA_BLK1_CH1_CHCR)

/** \\brief  10A8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH1_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00150A8u)

/** Alias (User Manual Name) for DMA_BLK1_CH1_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH1_CHICR.
*/
#define	DMA_CHICR101	(DMA_BLK1_CH1_CHICR)

/** \\brief  10A0, DMA Channel Status Register */
#define DMA_BLK1_CH1_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00150A0u)

/** Alias (User Manual Name) for DMA_BLK1_CH1_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH1_CHSR.
*/
#define	DMA_CHSR101	(DMA_BLK1_CH1_CHSR)

/** \\brief  10B4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH1_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00150B4u)

/** Alias (User Manual Name) for DMA_BLK1_CH1_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH1_DADR.
*/
#define	DMA_DADR101	(DMA_BLK1_CH1_DADR)

/** \\brief  10B0, DMA Channel Source Address Register */
#define DMA_BLK1_CH1_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00150B0u)

/** Alias (User Manual Name) for DMA_BLK1_CH1_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH1_SADR.
*/
#define	DMA_SADR101	(DMA_BLK1_CH1_SADR)

/** \\brief  10B8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH1_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00150B8u)

/** Alias (User Manual Name) for DMA_BLK1_CH1_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH1_SHADR.
*/
#define	DMA_SHADR101	(DMA_BLK1_CH1_SHADR)

/** \\brief  130C, DMA Channel Address Control Register */
#define DMA_BLK1_CH20_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001530Cu)

/** Alias (User Manual Name) for DMA_BLK1_CH20_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH20_ADRCR.
*/
#define	DMA_ADRCR120	(DMA_BLK1_CH20_ADRCR)

/** \\brief  1304, DMA Channel Control Register */
#define DMA_BLK1_CH20_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015304u)

/** Alias (User Manual Name) for DMA_BLK1_CH20_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH20_CHCR.
*/
#define	DMA_CHCR120	(DMA_BLK1_CH20_CHCR)

/** \\brief  1308, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH20_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015308u)

/** Alias (User Manual Name) for DMA_BLK1_CH20_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH20_CHICR.
*/
#define	DMA_CHICR120	(DMA_BLK1_CH20_CHICR)

/** \\brief  1300, DMA Channel Status Register */
#define DMA_BLK1_CH20_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015300u)

/** Alias (User Manual Name) for DMA_BLK1_CH20_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH20_CHSR.
*/
#define	DMA_CHSR120	(DMA_BLK1_CH20_CHSR)

/** \\brief  1314, DMA Channel Destination Address Register */
#define DMA_BLK1_CH20_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015314u)

/** Alias (User Manual Name) for DMA_BLK1_CH20_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH20_DADR.
*/
#define	DMA_DADR120	(DMA_BLK1_CH20_DADR)

/** \\brief  1310, DMA Channel Source Address Register */
#define DMA_BLK1_CH20_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015310u)

/** Alias (User Manual Name) for DMA_BLK1_CH20_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH20_SADR.
*/
#define	DMA_SADR120	(DMA_BLK1_CH20_SADR)

/** \\brief  1318, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH20_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015318u)

/** Alias (User Manual Name) for DMA_BLK1_CH20_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH20_SHADR.
*/
#define	DMA_SHADR120	(DMA_BLK1_CH20_SHADR)

/** \\brief  132C, DMA Channel Address Control Register */
#define DMA_BLK1_CH21_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001532Cu)

/** Alias (User Manual Name) for DMA_BLK1_CH21_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH21_ADRCR.
*/
#define	DMA_ADRCR121	(DMA_BLK1_CH21_ADRCR)

/** \\brief  1324, DMA Channel Control Register */
#define DMA_BLK1_CH21_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015324u)

/** Alias (User Manual Name) for DMA_BLK1_CH21_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH21_CHCR.
*/
#define	DMA_CHCR121	(DMA_BLK1_CH21_CHCR)

/** \\brief  1328, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH21_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015328u)

/** Alias (User Manual Name) for DMA_BLK1_CH21_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH21_CHICR.
*/
#define	DMA_CHICR121	(DMA_BLK1_CH21_CHICR)

/** \\brief  1320, DMA Channel Status Register */
#define DMA_BLK1_CH21_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015320u)

/** Alias (User Manual Name) for DMA_BLK1_CH21_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH21_CHSR.
*/
#define	DMA_CHSR121	(DMA_BLK1_CH21_CHSR)

/** \\brief  1334, DMA Channel Destination Address Register */
#define DMA_BLK1_CH21_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015334u)

/** Alias (User Manual Name) for DMA_BLK1_CH21_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH21_DADR.
*/
#define	DMA_DADR121	(DMA_BLK1_CH21_DADR)

/** \\brief  1330, DMA Channel Source Address Register */
#define DMA_BLK1_CH21_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015330u)

/** Alias (User Manual Name) for DMA_BLK1_CH21_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH21_SADR.
*/
#define	DMA_SADR121	(DMA_BLK1_CH21_SADR)

/** \\brief  1338, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH21_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015338u)

/** Alias (User Manual Name) for DMA_BLK1_CH21_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH21_SHADR.
*/
#define	DMA_SHADR121	(DMA_BLK1_CH21_SHADR)

/** \\brief  134C, DMA Channel Address Control Register */
#define DMA_BLK1_CH22_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001534Cu)

/** Alias (User Manual Name) for DMA_BLK1_CH22_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH22_ADRCR.
*/
#define	DMA_ADRCR122	(DMA_BLK1_CH22_ADRCR)

/** \\brief  1344, DMA Channel Control Register */
#define DMA_BLK1_CH22_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015344u)

/** Alias (User Manual Name) for DMA_BLK1_CH22_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH22_CHCR.
*/
#define	DMA_CHCR122	(DMA_BLK1_CH22_CHCR)

/** \\brief  1348, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH22_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015348u)

/** Alias (User Manual Name) for DMA_BLK1_CH22_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH22_CHICR.
*/
#define	DMA_CHICR122	(DMA_BLK1_CH22_CHICR)

/** \\brief  1340, DMA Channel Status Register */
#define DMA_BLK1_CH22_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015340u)

/** Alias (User Manual Name) for DMA_BLK1_CH22_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH22_CHSR.
*/
#define	DMA_CHSR122	(DMA_BLK1_CH22_CHSR)

/** \\brief  1354, DMA Channel Destination Address Register */
#define DMA_BLK1_CH22_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015354u)

/** Alias (User Manual Name) for DMA_BLK1_CH22_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH22_DADR.
*/
#define	DMA_DADR122	(DMA_BLK1_CH22_DADR)

/** \\brief  1350, DMA Channel Source Address Register */
#define DMA_BLK1_CH22_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015350u)

/** Alias (User Manual Name) for DMA_BLK1_CH22_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH22_SADR.
*/
#define	DMA_SADR122	(DMA_BLK1_CH22_SADR)

/** \\brief  1358, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH22_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015358u)

/** Alias (User Manual Name) for DMA_BLK1_CH22_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH22_SHADR.
*/
#define	DMA_SHADR122	(DMA_BLK1_CH22_SHADR)

/** \\brief  136C, DMA Channel Address Control Register */
#define DMA_BLK1_CH23_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001536Cu)

/** Alias (User Manual Name) for DMA_BLK1_CH23_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH23_ADRCR.
*/
#define	DMA_ADRCR123	(DMA_BLK1_CH23_ADRCR)

/** \\brief  1364, DMA Channel Control Register */
#define DMA_BLK1_CH23_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015364u)

/** Alias (User Manual Name) for DMA_BLK1_CH23_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH23_CHCR.
*/
#define	DMA_CHCR123	(DMA_BLK1_CH23_CHCR)

/** \\brief  1368, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH23_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015368u)

/** Alias (User Manual Name) for DMA_BLK1_CH23_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH23_CHICR.
*/
#define	DMA_CHICR123	(DMA_BLK1_CH23_CHICR)

/** \\brief  1360, DMA Channel Status Register */
#define DMA_BLK1_CH23_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015360u)

/** Alias (User Manual Name) for DMA_BLK1_CH23_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH23_CHSR.
*/
#define	DMA_CHSR123	(DMA_BLK1_CH23_CHSR)

/** \\brief  1374, DMA Channel Destination Address Register */
#define DMA_BLK1_CH23_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015374u)

/** Alias (User Manual Name) for DMA_BLK1_CH23_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH23_DADR.
*/
#define	DMA_DADR123	(DMA_BLK1_CH23_DADR)

/** \\brief  1370, DMA Channel Source Address Register */
#define DMA_BLK1_CH23_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015370u)

/** Alias (User Manual Name) for DMA_BLK1_CH23_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH23_SADR.
*/
#define	DMA_SADR123	(DMA_BLK1_CH23_SADR)

/** \\brief  1378, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH23_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015378u)

/** Alias (User Manual Name) for DMA_BLK1_CH23_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH23_SHADR.
*/
#define	DMA_SHADR123	(DMA_BLK1_CH23_SHADR)

/** \\brief  10CC, DMA Channel Address Control Register */
#define DMA_BLK1_CH2_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00150CCu)

/** Alias (User Manual Name) for DMA_BLK1_CH2_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH2_ADRCR.
*/
#define	DMA_ADRCR102	(DMA_BLK1_CH2_ADRCR)

/** \\brief  10C4, DMA Channel Control Register */
#define DMA_BLK1_CH2_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00150C4u)

/** Alias (User Manual Name) for DMA_BLK1_CH2_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH2_CHCR.
*/
#define	DMA_CHCR102	(DMA_BLK1_CH2_CHCR)

/** \\brief  10C8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH2_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00150C8u)

/** Alias (User Manual Name) for DMA_BLK1_CH2_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH2_CHICR.
*/
#define	DMA_CHICR102	(DMA_BLK1_CH2_CHICR)

/** \\brief  10C0, DMA Channel Status Register */
#define DMA_BLK1_CH2_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00150C0u)

/** Alias (User Manual Name) for DMA_BLK1_CH2_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH2_CHSR.
*/
#define	DMA_CHSR102	(DMA_BLK1_CH2_CHSR)

/** \\brief  10D4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH2_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00150D4u)

/** Alias (User Manual Name) for DMA_BLK1_CH2_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH2_DADR.
*/
#define	DMA_DADR102	(DMA_BLK1_CH2_DADR)

/** \\brief  10D0, DMA Channel Source Address Register */
#define DMA_BLK1_CH2_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00150D0u)

/** Alias (User Manual Name) for DMA_BLK1_CH2_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH2_SADR.
*/
#define	DMA_SADR102	(DMA_BLK1_CH2_SADR)

/** \\brief  10D8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH2_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00150D8u)

/** Alias (User Manual Name) for DMA_BLK1_CH2_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH2_SHADR.
*/
#define	DMA_SHADR102	(DMA_BLK1_CH2_SHADR)

/** \\brief  10EC, DMA Channel Address Control Register */
#define DMA_BLK1_CH3_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00150ECu)

/** Alias (User Manual Name) for DMA_BLK1_CH3_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH3_ADRCR.
*/
#define	DMA_ADRCR103	(DMA_BLK1_CH3_ADRCR)

/** \\brief  10E4, DMA Channel Control Register */
#define DMA_BLK1_CH3_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00150E4u)

/** Alias (User Manual Name) for DMA_BLK1_CH3_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH3_CHCR.
*/
#define	DMA_CHCR103	(DMA_BLK1_CH3_CHCR)

/** \\brief  10E8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH3_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00150E8u)

/** Alias (User Manual Name) for DMA_BLK1_CH3_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH3_CHICR.
*/
#define	DMA_CHICR103	(DMA_BLK1_CH3_CHICR)

/** \\brief  10E0, DMA Channel Status Register */
#define DMA_BLK1_CH3_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00150E0u)

/** Alias (User Manual Name) for DMA_BLK1_CH3_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH3_CHSR.
*/
#define	DMA_CHSR103	(DMA_BLK1_CH3_CHSR)

/** \\brief  10F4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH3_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00150F4u)

/** Alias (User Manual Name) for DMA_BLK1_CH3_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH3_DADR.
*/
#define	DMA_DADR103	(DMA_BLK1_CH3_DADR)

/** \\brief  10F0, DMA Channel Source Address Register */
#define DMA_BLK1_CH3_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00150F0u)

/** Alias (User Manual Name) for DMA_BLK1_CH3_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH3_SADR.
*/
#define	DMA_SADR103	(DMA_BLK1_CH3_SADR)

/** \\brief  10F8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH3_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00150F8u)

/** Alias (User Manual Name) for DMA_BLK1_CH3_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH3_SHADR.
*/
#define	DMA_SHADR103	(DMA_BLK1_CH3_SHADR)

/** \\brief  110C, DMA Channel Address Control Register */
#define DMA_BLK1_CH4_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001510Cu)

/** Alias (User Manual Name) for DMA_BLK1_CH4_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH4_ADRCR.
*/
#define	DMA_ADRCR104	(DMA_BLK1_CH4_ADRCR)

/** \\brief  1104, DMA Channel Control Register */
#define DMA_BLK1_CH4_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015104u)

/** Alias (User Manual Name) for DMA_BLK1_CH4_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH4_CHCR.
*/
#define	DMA_CHCR104	(DMA_BLK1_CH4_CHCR)

/** \\brief  1108, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH4_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015108u)

/** Alias (User Manual Name) for DMA_BLK1_CH4_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH4_CHICR.
*/
#define	DMA_CHICR104	(DMA_BLK1_CH4_CHICR)

/** \\brief  1100, DMA Channel Status Register */
#define DMA_BLK1_CH4_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015100u)

/** Alias (User Manual Name) for DMA_BLK1_CH4_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH4_CHSR.
*/
#define	DMA_CHSR104	(DMA_BLK1_CH4_CHSR)

/** \\brief  1114, DMA Channel Destination Address Register */
#define DMA_BLK1_CH4_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015114u)

/** Alias (User Manual Name) for DMA_BLK1_CH4_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH4_DADR.
*/
#define	DMA_DADR104	(DMA_BLK1_CH4_DADR)

/** \\brief  1110, DMA Channel Source Address Register */
#define DMA_BLK1_CH4_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015110u)

/** Alias (User Manual Name) for DMA_BLK1_CH4_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH4_SADR.
*/
#define	DMA_SADR104	(DMA_BLK1_CH4_SADR)

/** \\brief  1118, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH4_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015118u)

/** Alias (User Manual Name) for DMA_BLK1_CH4_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH4_SHADR.
*/
#define	DMA_SHADR104	(DMA_BLK1_CH4_SHADR)

/** \\brief  112C, DMA Channel Address Control Register */
#define DMA_BLK1_CH5_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001512Cu)

/** Alias (User Manual Name) for DMA_BLK1_CH5_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH5_ADRCR.
*/
#define	DMA_ADRCR105	(DMA_BLK1_CH5_ADRCR)

/** \\brief  1124, DMA Channel Control Register */
#define DMA_BLK1_CH5_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015124u)

/** Alias (User Manual Name) for DMA_BLK1_CH5_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH5_CHCR.
*/
#define	DMA_CHCR105	(DMA_BLK1_CH5_CHCR)

/** \\brief  1128, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH5_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015128u)

/** Alias (User Manual Name) for DMA_BLK1_CH5_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH5_CHICR.
*/
#define	DMA_CHICR105	(DMA_BLK1_CH5_CHICR)

/** \\brief  1120, DMA Channel Status Register */
#define DMA_BLK1_CH5_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015120u)

/** Alias (User Manual Name) for DMA_BLK1_CH5_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH5_CHSR.
*/
#define	DMA_CHSR105	(DMA_BLK1_CH5_CHSR)

/** \\brief  1134, DMA Channel Destination Address Register */
#define DMA_BLK1_CH5_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015134u)

/** Alias (User Manual Name) for DMA_BLK1_CH5_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH5_DADR.
*/
#define	DMA_DADR105	(DMA_BLK1_CH5_DADR)

/** \\brief  1130, DMA Channel Source Address Register */
#define DMA_BLK1_CH5_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015130u)

/** Alias (User Manual Name) for DMA_BLK1_CH5_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH5_SADR.
*/
#define	DMA_SADR105	(DMA_BLK1_CH5_SADR)

/** \\brief  1138, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH5_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015138u)

/** Alias (User Manual Name) for DMA_BLK1_CH5_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH5_SHADR.
*/
#define	DMA_SHADR105	(DMA_BLK1_CH5_SHADR)

/** \\brief  114C, DMA Channel Address Control Register */
#define DMA_BLK1_CH6_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001514Cu)

/** Alias (User Manual Name) for DMA_BLK1_CH6_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH6_ADRCR.
*/
#define	DMA_ADRCR106	(DMA_BLK1_CH6_ADRCR)

/** \\brief  1144, DMA Channel Control Register */
#define DMA_BLK1_CH6_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015144u)

/** Alias (User Manual Name) for DMA_BLK1_CH6_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH6_CHCR.
*/
#define	DMA_CHCR106	(DMA_BLK1_CH6_CHCR)

/** \\brief  1148, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH6_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015148u)

/** Alias (User Manual Name) for DMA_BLK1_CH6_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH6_CHICR.
*/
#define	DMA_CHICR106	(DMA_BLK1_CH6_CHICR)

/** \\brief  1140, DMA Channel Status Register */
#define DMA_BLK1_CH6_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015140u)

/** Alias (User Manual Name) for DMA_BLK1_CH6_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH6_CHSR.
*/
#define	DMA_CHSR106	(DMA_BLK1_CH6_CHSR)

/** \\brief  1154, DMA Channel Destination Address Register */
#define DMA_BLK1_CH6_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015154u)

/** Alias (User Manual Name) for DMA_BLK1_CH6_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH6_DADR.
*/
#define	DMA_DADR106	(DMA_BLK1_CH6_DADR)

/** \\brief  1150, DMA Channel Source Address Register */
#define DMA_BLK1_CH6_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015150u)

/** Alias (User Manual Name) for DMA_BLK1_CH6_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH6_SADR.
*/
#define	DMA_SADR106	(DMA_BLK1_CH6_SADR)

/** \\brief  1158, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH6_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015158u)

/** Alias (User Manual Name) for DMA_BLK1_CH6_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH6_SHADR.
*/
#define	DMA_SHADR106	(DMA_BLK1_CH6_SHADR)

/** \\brief  116C, DMA Channel Address Control Register */
#define DMA_BLK1_CH7_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001516Cu)

/** Alias (User Manual Name) for DMA_BLK1_CH7_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH7_ADRCR.
*/
#define	DMA_ADRCR107	(DMA_BLK1_CH7_ADRCR)

/** \\brief  1164, DMA Channel Control Register */
#define DMA_BLK1_CH7_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015164u)

/** Alias (User Manual Name) for DMA_BLK1_CH7_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH7_CHCR.
*/
#define	DMA_CHCR107	(DMA_BLK1_CH7_CHCR)

/** \\brief  1168, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH7_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015168u)

/** Alias (User Manual Name) for DMA_BLK1_CH7_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH7_CHICR.
*/
#define	DMA_CHICR107	(DMA_BLK1_CH7_CHICR)

/** \\brief  1160, DMA Channel Status Register */
#define DMA_BLK1_CH7_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015160u)

/** Alias (User Manual Name) for DMA_BLK1_CH7_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH7_CHSR.
*/
#define	DMA_CHSR107	(DMA_BLK1_CH7_CHSR)

/** \\brief  1174, DMA Channel Destination Address Register */
#define DMA_BLK1_CH7_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015174u)

/** Alias (User Manual Name) for DMA_BLK1_CH7_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH7_DADR.
*/
#define	DMA_DADR107	(DMA_BLK1_CH7_DADR)

/** \\brief  1170, DMA Channel Source Address Register */
#define DMA_BLK1_CH7_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015170u)

/** Alias (User Manual Name) for DMA_BLK1_CH7_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH7_SADR.
*/
#define	DMA_SADR107	(DMA_BLK1_CH7_SADR)

/** \\brief  1178, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH7_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015178u)

/** Alias (User Manual Name) for DMA_BLK1_CH7_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH7_SHADR.
*/
#define	DMA_SHADR107	(DMA_BLK1_CH7_SHADR)

/** \\brief  118C, DMA Channel Address Control Register */
#define DMA_BLK1_CH8_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF001518Cu)

/** Alias (User Manual Name) for DMA_BLK1_CH8_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH8_ADRCR.
*/
#define	DMA_ADRCR108	(DMA_BLK1_CH8_ADRCR)

/** \\brief  1184, DMA Channel Control Register */
#define DMA_BLK1_CH8_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF0015184u)

/** Alias (User Manual Name) for DMA_BLK1_CH8_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH8_CHCR.
*/
#define	DMA_CHCR108	(DMA_BLK1_CH8_CHCR)

/** \\brief  1188, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH8_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF0015188u)

/** Alias (User Manual Name) for DMA_BLK1_CH8_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH8_CHICR.
*/
#define	DMA_CHICR108	(DMA_BLK1_CH8_CHICR)

/** \\brief  1180, DMA Channel Status Register */
#define DMA_BLK1_CH8_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF0015180u)

/** Alias (User Manual Name) for DMA_BLK1_CH8_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH8_CHSR.
*/
#define	DMA_CHSR108	(DMA_BLK1_CH8_CHSR)

/** \\brief  1194, DMA Channel Destination Address Register */
#define DMA_BLK1_CH8_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF0015194u)

/** Alias (User Manual Name) for DMA_BLK1_CH8_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH8_DADR.
*/
#define	DMA_DADR108	(DMA_BLK1_CH8_DADR)

/** \\brief  1190, DMA Channel Source Address Register */
#define DMA_BLK1_CH8_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF0015190u)

/** Alias (User Manual Name) for DMA_BLK1_CH8_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH8_SADR.
*/
#define	DMA_SADR108	(DMA_BLK1_CH8_SADR)

/** \\brief  1198, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH8_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF0015198u)

/** Alias (User Manual Name) for DMA_BLK1_CH8_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH8_SHADR.
*/
#define	DMA_SHADR108	(DMA_BLK1_CH8_SHADR)

/** \\brief  11AC, DMA Channel Address Control Register */
#define DMA_BLK1_CH9_ADRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_ADRCR*)0xF00151ACu)

/** Alias (User Manual Name) for DMA_BLK1_CH9_ADRCR.
* To use register names with standard convension, please use DMA_BLK1_CH9_ADRCR.
*/
#define	DMA_ADRCR109	(DMA_BLK1_CH9_ADRCR)

/** \\brief  11A4, DMA Channel Control Register */
#define DMA_BLK1_CH9_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHCR*)0xF00151A4u)

/** Alias (User Manual Name) for DMA_BLK1_CH9_CHCR.
* To use register names with standard convension, please use DMA_BLK1_CH9_CHCR.
*/
#define	DMA_CHCR109	(DMA_BLK1_CH9_CHCR)

/** \\brief  11A8, DMA Channel Interrupt Control Register */
#define DMA_BLK1_CH9_CHICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHICR*)0xF00151A8u)

/** Alias (User Manual Name) for DMA_BLK1_CH9_CHICR.
* To use register names with standard convension, please use DMA_BLK1_CH9_CHICR.
*/
#define	DMA_CHICR109	(DMA_BLK1_CH9_CHICR)

/** \\brief  11A0, DMA Channel Status Register */
#define DMA_BLK1_CH9_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_CHSR*)0xF00151A0u)

/** Alias (User Manual Name) for DMA_BLK1_CH9_CHSR.
* To use register names with standard convension, please use DMA_BLK1_CH9_CHSR.
*/
#define	DMA_CHSR109	(DMA_BLK1_CH9_CHSR)

/** \\brief  11B4, DMA Channel Destination Address Register */
#define DMA_BLK1_CH9_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_DADR*)0xF00151B4u)

/** Alias (User Manual Name) for DMA_BLK1_CH9_DADR.
* To use register names with standard convension, please use DMA_BLK1_CH9_DADR.
*/
#define	DMA_DADR109	(DMA_BLK1_CH9_DADR)

/** \\brief  11B0, DMA Channel Source Address Register */
#define DMA_BLK1_CH9_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SADR*)0xF00151B0u)

/** Alias (User Manual Name) for DMA_BLK1_CH9_SADR.
* To use register names with standard convension, please use DMA_BLK1_CH9_SADR.
*/
#define	DMA_SADR109	(DMA_BLK1_CH9_SADR)

/** \\brief  11B8, DMA Channel Shadow Address Register */
#define DMA_BLK1_CH9_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CH_SHADR*)0xF00151B8u)

/** Alias (User Manual Name) for DMA_BLK1_CH9_SHADR.
* To use register names with standard convension, please use DMA_BLK1_CH9_SHADR.
*/
#define	DMA_SHADR109	(DMA_BLK1_CH9_SHADR)

/** \\brief  1070, DMA Channel Interrupt Set Register0 */
#define DMA_BLK1_CHINTR0 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CHINTR0*)0xF0015070u)

/** Alias (User Manual Name) for DMA_BLK1_CHINTR0.
* To use register names with standard convension, please use DMA_BLK1_CHINTR0.
*/
#define	DMA_CHINTR10	(DMA_BLK1_CHINTR0)

/** \\brief  1040, DMA Channel Reset Request Register0 */
#define DMA_BLK1_CHRSTR0 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CHRSTR0*)0xF0015040u)

/** Alias (User Manual Name) for DMA_BLK1_CHRSTR0.
* To use register names with standard convension, please use DMA_BLK1_CHRSTR0.
*/
#define	DMA_CHRSTR10	(DMA_BLK1_CHRSTR0)

/** \\brief  1028, DMA Clear Error Register */
#define DMA_BLK1_CLRE /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CLRE*)0xF0015028u)

/** Alias (User Manual Name) for DMA_BLK1_CLRE.
* To use register names with standard convension, please use DMA_BLK1_CLRE.
*/
#define	DMA_CLRE1	(DMA_BLK1_CLRE)

/** \\brief  1020, DMA Enable Error Register */
#define DMA_BLK1_EER /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_EER*)0xF0015020u)

/** Alias (User Manual Name) for DMA_BLK1_EER.
* To use register names with standard convension, please use DMA_BLK1_EER.
*/
#define	DMA_EER1	(DMA_BLK1_EER)

/** \\brief  1024, DMA Error Status Register */
#define DMA_BLK1_ERRSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ERRSR*)0xF0015024u)

/** Alias (User Manual Name) for DMA_BLK1_ERRSR.
* To use register names with standard convension, please use DMA_BLK1_ERRSR.
*/
#define	DMA_ERRSR1	(DMA_BLK1_ERRSR)

/** \\brief  1038, DMA Move Engine Interrupt Set Register */
#define DMA_BLK1_ME_INTR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_INTR*)0xF0015038u)

/** Alias (User Manual Name) for DMA_BLK1_ME_INTR.
* To use register names with standard convension, please use DMA_BLK1_ME_INTR.
*/
#define	DMA_ME1INTR	(DMA_BLK1_ME_INTR)

/** \\brief  103C, DMA Move Engine Pattern Read Register */
#define DMA_BLK1_ME_PR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_PR*)0xF001503Cu)

/** Alias (User Manual Name) for DMA_BLK1_ME_PR.
* To use register names with standard convension, please use DMA_BLK1_ME_PR.
*/
#define	DMA_ME1PR	(DMA_BLK1_ME_PR)

/** \\brief  1034, DMA Move Engine Read Register */
#define DMA_BLK1_ME_R /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R*)0xF0015034u)

/** Alias (User Manual Name) for DMA_BLK1_ME_R.
* To use register names with standard convension, please use DMA_BLK1_ME_R.
*/
#define	DMA_ME1R	(DMA_BLK1_ME_R)

/** \\brief  1030, DMA Move Engine Status Register */
#define DMA_BLK1_ME_SR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_SR*)0xF0015030u)

/** Alias (User Manual Name) for DMA_BLK1_ME_SR.
* To use register names with standard convension, please use DMA_BLK1_ME_SR.
*/
#define	DMA_ME1SR	(DMA_BLK1_ME_SR)

/** \\brief  1068, DMA Suspend Acknowledge Register0 */
#define DMA_BLK1_SUSACR0 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_SUSACR0*)0xF0015068u)

/** Alias (User Manual Name) for DMA_BLK1_SUSACR0.
* To use register names with standard convension, please use DMA_BLK1_SUSACR0.
*/
#define	DMA_SUSACR10	(DMA_BLK1_SUSACR0)

/** \\brief  1060, DMA Suspend Enable Register0 */
#define DMA_BLK1_SUSENR0 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_SUSENR0*)0xF0015060u)

/** Alias (User Manual Name) for DMA_BLK1_SUSENR0.
* To use register names with standard convension, please use DMA_BLK1_SUSENR0.
*/
#define	DMA_SUSENR10	(DMA_BLK1_SUSENR0)

/** \\brief  0, DMA Sub-block 0 Clock Control Register */
#define DMA_CLC0 /*lint --e(923)*/ (*(volatile Ifx_DMA_CLC0*)0xF0014000u)

/** \\brief  1000, DMA Sub-block 1 Clock Control Register */
#define DMA_CLC1 /*lint --e(923)*/ (*(volatile Ifx_DMA_CLC1*)0xF0015000u)

/** \\brief  8, Module Identification Register */
#define DMA_ID /*lint --e(923)*/ (*(volatile Ifx_DMA_ID*)0xF0014008u)

/** \\brief  C, DMA OCDS Trigger Set Select */
#define DMA_OTSS /*lint --e(923)*/ (*(volatile Ifx_DMA_OTSS*)0xF001400Cu)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXDMA_REG_H */
