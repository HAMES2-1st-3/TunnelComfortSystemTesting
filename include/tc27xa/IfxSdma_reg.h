/**
 * \file IfxSdma_reg.h
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
 * \defgroup IfxLld_Sdma_Cfg Sdma address
 * \ingroup IfxLld_Sdma
 * 
 * \defgroup IfxLld_Sdma_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Sdma_Cfg
 * 
 * \defgroup IfxLld_Sdma_Cfg_Sdma 2-SDMA
 * \ingroup IfxLld_Sdma_Cfg
 * 
 */
#ifndef IFXSDMA_REG_H
#define IFXSDMA_REG_H 1
/******************************************************************************/
#include "IfxSdma_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Sdma_Cfg_BaseAddress
 * \{  */

/** \\brief  SDMA object */
#define MODULE_SDMA /*lint --e(923)*/ ((*(Ifx_SDMA*)0xF0010000u))
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Sdma_Cfg_Sdma
 * \{  */

/** \\brief  8FC, SDMA Sub-block Access Enable Register 0 */
#define SDMA_BLK0_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_ACCEN0*)0xF00108FCu)

/** Alias (User Manual Name) for SDMA_BLK0_ACCEN0.
* To use register names with standard convension, please use SDMA_BLK0_ACCEN0.
*/
#define	SDMA_ACCEN00	(SDMA_BLK0_ACCEN0)

/** \\brief  8F8, SDMA Sub-block Access Enable Register 1 */
#define SDMA_BLK0_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_ACCEN1*)0xF00108F8u)

/** Alias (User Manual Name) for SDMA_BLK0_ACCEN1.
* To use register names with standard convension, please use SDMA_BLK0_ACCEN1.
*/
#define	SDMA_ACCEN01	(SDMA_BLK0_ACCEN1)

/** \\brief  8C, SDMA Channel Address Control Register */
#define SDMA_BLK0_CH0_ADRCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001008Cu)

/** Alias (User Manual Name) for SDMA_BLK0_CH0_ADRCR.
* To use register names with standard convension, please use SDMA_BLK0_CH0_ADRCR.
*/
#define	SDMA_ADRCR000	(SDMA_BLK0_CH0_ADRCR)

/** \\brief  84, SDMA Channel Control Register */
#define SDMA_BLK0_CH0_CHCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0010084u)

/** Alias (User Manual Name) for SDMA_BLK0_CH0_CHCR.
* To use register names with standard convension, please use SDMA_BLK0_CH0_CHCR.
*/
#define	SDMA_CHCR000	(SDMA_BLK0_CH0_CHCR)

/** \\brief  88, SDMA Channel Interrupt Control Register */
#define SDMA_BLK0_CH0_CHICR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0010088u)

/** Alias (User Manual Name) for SDMA_BLK0_CH0_CHICR.
* To use register names with standard convension, please use SDMA_BLK0_CH0_CHICR.
*/
#define	SDMA_CHICR000	(SDMA_BLK0_CH0_CHICR)

/** \\brief  80, SDMA Channel Status Register */
#define SDMA_BLK0_CH0_CHSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0010080u)

/** Alias (User Manual Name) for SDMA_BLK0_CH0_CHSR.
* To use register names with standard convension, please use SDMA_BLK0_CH0_CHSR.
*/
#define	SDMA_CHSR000	(SDMA_BLK0_CH0_CHSR)

/** \\brief  94, SDMA Channel Destination Address Register */
#define SDMA_BLK0_CH0_DADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0010094u)

/** Alias (User Manual Name) for SDMA_BLK0_CH0_DADR.
* To use register names with standard convension, please use SDMA_BLK0_CH0_DADR.
*/
#define	SDMA_DADR000	(SDMA_BLK0_CH0_DADR)

/** \\brief  90, SDMA Channel Source Address Register */
#define SDMA_BLK0_CH0_SADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0010090u)

/** Alias (User Manual Name) for SDMA_BLK0_CH0_SADR.
* To use register names with standard convension, please use SDMA_BLK0_CH0_SADR.
*/
#define	SDMA_SADR000	(SDMA_BLK0_CH0_SADR)

/** \\brief  98, SDMA Channel Shadow Address Register */
#define SDMA_BLK0_CH0_SHADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0010098u)

/** Alias (User Manual Name) for SDMA_BLK0_CH0_SHADR.
* To use register names with standard convension, please use SDMA_BLK0_CH0_SHADR.
*/
#define	SDMA_SHADR000	(SDMA_BLK0_CH0_SHADR)

/** \\brief  AC, SDMA Channel Address Control Register */
#define SDMA_BLK0_CH1_ADRCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF00100ACu)

/** Alias (User Manual Name) for SDMA_BLK0_CH1_ADRCR.
* To use register names with standard convension, please use SDMA_BLK0_CH1_ADRCR.
*/
#define	SDMA_ADRCR001	(SDMA_BLK0_CH1_ADRCR)

/** \\brief  A4, SDMA Channel Control Register */
#define SDMA_BLK0_CH1_CHCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF00100A4u)

/** Alias (User Manual Name) for SDMA_BLK0_CH1_CHCR.
* To use register names with standard convension, please use SDMA_BLK0_CH1_CHCR.
*/
#define	SDMA_CHCR001	(SDMA_BLK0_CH1_CHCR)

/** \\brief  A8, SDMA Channel Interrupt Control Register */
#define SDMA_BLK0_CH1_CHICR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF00100A8u)

/** Alias (User Manual Name) for SDMA_BLK0_CH1_CHICR.
* To use register names with standard convension, please use SDMA_BLK0_CH1_CHICR.
*/
#define	SDMA_CHICR001	(SDMA_BLK0_CH1_CHICR)

/** \\brief  A0, SDMA Channel Status Register */
#define SDMA_BLK0_CH1_CHSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF00100A0u)

/** Alias (User Manual Name) for SDMA_BLK0_CH1_CHSR.
* To use register names with standard convension, please use SDMA_BLK0_CH1_CHSR.
*/
#define	SDMA_CHSR001	(SDMA_BLK0_CH1_CHSR)

/** \\brief  B4, SDMA Channel Destination Address Register */
#define SDMA_BLK0_CH1_DADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF00100B4u)

/** Alias (User Manual Name) for SDMA_BLK0_CH1_DADR.
* To use register names with standard convension, please use SDMA_BLK0_CH1_DADR.
*/
#define	SDMA_DADR001	(SDMA_BLK0_CH1_DADR)

/** \\brief  B0, SDMA Channel Source Address Register */
#define SDMA_BLK0_CH1_SADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF00100B0u)

/** Alias (User Manual Name) for SDMA_BLK0_CH1_SADR.
* To use register names with standard convension, please use SDMA_BLK0_CH1_SADR.
*/
#define	SDMA_SADR001	(SDMA_BLK0_CH1_SADR)

/** \\brief  B8, SDMA Channel Shadow Address Register */
#define SDMA_BLK0_CH1_SHADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF00100B8u)

/** Alias (User Manual Name) for SDMA_BLK0_CH1_SHADR.
* To use register names with standard convension, please use SDMA_BLK0_CH1_SHADR.
*/
#define	SDMA_SHADR001	(SDMA_BLK0_CH1_SHADR)

/** \\brief  CC, SDMA Channel Address Control Register */
#define SDMA_BLK0_CH2_ADRCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF00100CCu)

/** Alias (User Manual Name) for SDMA_BLK0_CH2_ADRCR.
* To use register names with standard convension, please use SDMA_BLK0_CH2_ADRCR.
*/
#define	SDMA_ADRCR002	(SDMA_BLK0_CH2_ADRCR)

/** \\brief  C4, SDMA Channel Control Register */
#define SDMA_BLK0_CH2_CHCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF00100C4u)

/** Alias (User Manual Name) for SDMA_BLK0_CH2_CHCR.
* To use register names with standard convension, please use SDMA_BLK0_CH2_CHCR.
*/
#define	SDMA_CHCR002	(SDMA_BLK0_CH2_CHCR)

/** \\brief  C8, SDMA Channel Interrupt Control Register */
#define SDMA_BLK0_CH2_CHICR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF00100C8u)

/** Alias (User Manual Name) for SDMA_BLK0_CH2_CHICR.
* To use register names with standard convension, please use SDMA_BLK0_CH2_CHICR.
*/
#define	SDMA_CHICR002	(SDMA_BLK0_CH2_CHICR)

/** \\brief  C0, SDMA Channel Status Register */
#define SDMA_BLK0_CH2_CHSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF00100C0u)

/** Alias (User Manual Name) for SDMA_BLK0_CH2_CHSR.
* To use register names with standard convension, please use SDMA_BLK0_CH2_CHSR.
*/
#define	SDMA_CHSR002	(SDMA_BLK0_CH2_CHSR)

/** \\brief  D4, SDMA Channel Destination Address Register */
#define SDMA_BLK0_CH2_DADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF00100D4u)

/** Alias (User Manual Name) for SDMA_BLK0_CH2_DADR.
* To use register names with standard convension, please use SDMA_BLK0_CH2_DADR.
*/
#define	SDMA_DADR002	(SDMA_BLK0_CH2_DADR)

/** \\brief  D0, SDMA Channel Source Address Register */
#define SDMA_BLK0_CH2_SADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF00100D0u)

/** Alias (User Manual Name) for SDMA_BLK0_CH2_SADR.
* To use register names with standard convension, please use SDMA_BLK0_CH2_SADR.
*/
#define	SDMA_SADR002	(SDMA_BLK0_CH2_SADR)

/** \\brief  D8, SDMA Channel Shadow Address Register */
#define SDMA_BLK0_CH2_SHADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF00100D8u)

/** Alias (User Manual Name) for SDMA_BLK0_CH2_SHADR.
* To use register names with standard convension, please use SDMA_BLK0_CH2_SHADR.
*/
#define	SDMA_SHADR002	(SDMA_BLK0_CH2_SHADR)

/** \\brief  EC, SDMA Channel Address Control Register */
#define SDMA_BLK0_CH3_ADRCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF00100ECu)

/** Alias (User Manual Name) for SDMA_BLK0_CH3_ADRCR.
* To use register names with standard convension, please use SDMA_BLK0_CH3_ADRCR.
*/
#define	SDMA_ADRCR003	(SDMA_BLK0_CH3_ADRCR)

/** \\brief  E4, SDMA Channel Control Register */
#define SDMA_BLK0_CH3_CHCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF00100E4u)

/** Alias (User Manual Name) for SDMA_BLK0_CH3_CHCR.
* To use register names with standard convension, please use SDMA_BLK0_CH3_CHCR.
*/
#define	SDMA_CHCR003	(SDMA_BLK0_CH3_CHCR)

/** \\brief  E8, SDMA Channel Interrupt Control Register */
#define SDMA_BLK0_CH3_CHICR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF00100E8u)

/** Alias (User Manual Name) for SDMA_BLK0_CH3_CHICR.
* To use register names with standard convension, please use SDMA_BLK0_CH3_CHICR.
*/
#define	SDMA_CHICR003	(SDMA_BLK0_CH3_CHICR)

/** \\brief  E0, SDMA Channel Status Register */
#define SDMA_BLK0_CH3_CHSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF00100E0u)

/** Alias (User Manual Name) for SDMA_BLK0_CH3_CHSR.
* To use register names with standard convension, please use SDMA_BLK0_CH3_CHSR.
*/
#define	SDMA_CHSR003	(SDMA_BLK0_CH3_CHSR)

/** \\brief  F4, SDMA Channel Destination Address Register */
#define SDMA_BLK0_CH3_DADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF00100F4u)

/** Alias (User Manual Name) for SDMA_BLK0_CH3_DADR.
* To use register names with standard convension, please use SDMA_BLK0_CH3_DADR.
*/
#define	SDMA_DADR003	(SDMA_BLK0_CH3_DADR)

/** \\brief  F0, SDMA Channel Source Address Register */
#define SDMA_BLK0_CH3_SADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF00100F0u)

/** Alias (User Manual Name) for SDMA_BLK0_CH3_SADR.
* To use register names with standard convension, please use SDMA_BLK0_CH3_SADR.
*/
#define	SDMA_SADR003	(SDMA_BLK0_CH3_SADR)

/** \\brief  F8, SDMA Channel Shadow Address Register */
#define SDMA_BLK0_CH3_SHADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF00100F8u)

/** Alias (User Manual Name) for SDMA_BLK0_CH3_SHADR.
* To use register names with standard convension, please use SDMA_BLK0_CH3_SHADR.
*/
#define	SDMA_SHADR003	(SDMA_BLK0_CH3_SHADR)

/** \\brief  10C, SDMA Channel Address Control Register */
#define SDMA_BLK0_CH4_ADRCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001010Cu)

/** Alias (User Manual Name) for SDMA_BLK0_CH4_ADRCR.
* To use register names with standard convension, please use SDMA_BLK0_CH4_ADRCR.
*/
#define	SDMA_ADRCR004	(SDMA_BLK0_CH4_ADRCR)

/** \\brief  104, SDMA Channel Control Register */
#define SDMA_BLK0_CH4_CHCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0010104u)

/** Alias (User Manual Name) for SDMA_BLK0_CH4_CHCR.
* To use register names with standard convension, please use SDMA_BLK0_CH4_CHCR.
*/
#define	SDMA_CHCR004	(SDMA_BLK0_CH4_CHCR)

/** \\brief  108, SDMA Channel Interrupt Control Register */
#define SDMA_BLK0_CH4_CHICR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0010108u)

/** Alias (User Manual Name) for SDMA_BLK0_CH4_CHICR.
* To use register names with standard convension, please use SDMA_BLK0_CH4_CHICR.
*/
#define	SDMA_CHICR004	(SDMA_BLK0_CH4_CHICR)

/** \\brief  100, SDMA Channel Status Register */
#define SDMA_BLK0_CH4_CHSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0010100u)

/** Alias (User Manual Name) for SDMA_BLK0_CH4_CHSR.
* To use register names with standard convension, please use SDMA_BLK0_CH4_CHSR.
*/
#define	SDMA_CHSR004	(SDMA_BLK0_CH4_CHSR)

/** \\brief  114, SDMA Channel Destination Address Register */
#define SDMA_BLK0_CH4_DADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0010114u)

/** Alias (User Manual Name) for SDMA_BLK0_CH4_DADR.
* To use register names with standard convension, please use SDMA_BLK0_CH4_DADR.
*/
#define	SDMA_DADR004	(SDMA_BLK0_CH4_DADR)

/** \\brief  110, SDMA Channel Source Address Register */
#define SDMA_BLK0_CH4_SADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0010110u)

/** Alias (User Manual Name) for SDMA_BLK0_CH4_SADR.
* To use register names with standard convension, please use SDMA_BLK0_CH4_SADR.
*/
#define	SDMA_SADR004	(SDMA_BLK0_CH4_SADR)

/** \\brief  118, SDMA Channel Shadow Address Register */
#define SDMA_BLK0_CH4_SHADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0010118u)

/** Alias (User Manual Name) for SDMA_BLK0_CH4_SHADR.
* To use register names with standard convension, please use SDMA_BLK0_CH4_SHADR.
*/
#define	SDMA_SHADR004	(SDMA_BLK0_CH4_SHADR)

/** \\brief  12C, SDMA Channel Address Control Register */
#define SDMA_BLK0_CH5_ADRCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001012Cu)

/** Alias (User Manual Name) for SDMA_BLK0_CH5_ADRCR.
* To use register names with standard convension, please use SDMA_BLK0_CH5_ADRCR.
*/
#define	SDMA_ADRCR005	(SDMA_BLK0_CH5_ADRCR)

/** \\brief  124, SDMA Channel Control Register */
#define SDMA_BLK0_CH5_CHCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0010124u)

/** Alias (User Manual Name) for SDMA_BLK0_CH5_CHCR.
* To use register names with standard convension, please use SDMA_BLK0_CH5_CHCR.
*/
#define	SDMA_CHCR005	(SDMA_BLK0_CH5_CHCR)

/** \\brief  128, SDMA Channel Interrupt Control Register */
#define SDMA_BLK0_CH5_CHICR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0010128u)

/** Alias (User Manual Name) for SDMA_BLK0_CH5_CHICR.
* To use register names with standard convension, please use SDMA_BLK0_CH5_CHICR.
*/
#define	SDMA_CHICR005	(SDMA_BLK0_CH5_CHICR)

/** \\brief  120, SDMA Channel Status Register */
#define SDMA_BLK0_CH5_CHSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0010120u)

/** Alias (User Manual Name) for SDMA_BLK0_CH5_CHSR.
* To use register names with standard convension, please use SDMA_BLK0_CH5_CHSR.
*/
#define	SDMA_CHSR005	(SDMA_BLK0_CH5_CHSR)

/** \\brief  134, SDMA Channel Destination Address Register */
#define SDMA_BLK0_CH5_DADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0010134u)

/** Alias (User Manual Name) for SDMA_BLK0_CH5_DADR.
* To use register names with standard convension, please use SDMA_BLK0_CH5_DADR.
*/
#define	SDMA_DADR005	(SDMA_BLK0_CH5_DADR)

/** \\brief  130, SDMA Channel Source Address Register */
#define SDMA_BLK0_CH5_SADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0010130u)

/** Alias (User Manual Name) for SDMA_BLK0_CH5_SADR.
* To use register names with standard convension, please use SDMA_BLK0_CH5_SADR.
*/
#define	SDMA_SADR005	(SDMA_BLK0_CH5_SADR)

/** \\brief  138, SDMA Channel Shadow Address Register */
#define SDMA_BLK0_CH5_SHADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0010138u)

/** Alias (User Manual Name) for SDMA_BLK0_CH5_SHADR.
* To use register names with standard convension, please use SDMA_BLK0_CH5_SHADR.
*/
#define	SDMA_SHADR005	(SDMA_BLK0_CH5_SHADR)

/** \\brief  14C, SDMA Channel Address Control Register */
#define SDMA_BLK0_CH6_ADRCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001014Cu)

/** Alias (User Manual Name) for SDMA_BLK0_CH6_ADRCR.
* To use register names with standard convension, please use SDMA_BLK0_CH6_ADRCR.
*/
#define	SDMA_ADRCR006	(SDMA_BLK0_CH6_ADRCR)

/** \\brief  144, SDMA Channel Control Register */
#define SDMA_BLK0_CH6_CHCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0010144u)

/** Alias (User Manual Name) for SDMA_BLK0_CH6_CHCR.
* To use register names with standard convension, please use SDMA_BLK0_CH6_CHCR.
*/
#define	SDMA_CHCR006	(SDMA_BLK0_CH6_CHCR)

/** \\brief  148, SDMA Channel Interrupt Control Register */
#define SDMA_BLK0_CH6_CHICR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0010148u)

/** Alias (User Manual Name) for SDMA_BLK0_CH6_CHICR.
* To use register names with standard convension, please use SDMA_BLK0_CH6_CHICR.
*/
#define	SDMA_CHICR006	(SDMA_BLK0_CH6_CHICR)

/** \\brief  140, SDMA Channel Status Register */
#define SDMA_BLK0_CH6_CHSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0010140u)

/** Alias (User Manual Name) for SDMA_BLK0_CH6_CHSR.
* To use register names with standard convension, please use SDMA_BLK0_CH6_CHSR.
*/
#define	SDMA_CHSR006	(SDMA_BLK0_CH6_CHSR)

/** \\brief  154, SDMA Channel Destination Address Register */
#define SDMA_BLK0_CH6_DADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0010154u)

/** Alias (User Manual Name) for SDMA_BLK0_CH6_DADR.
* To use register names with standard convension, please use SDMA_BLK0_CH6_DADR.
*/
#define	SDMA_DADR006	(SDMA_BLK0_CH6_DADR)

/** \\brief  150, SDMA Channel Source Address Register */
#define SDMA_BLK0_CH6_SADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0010150u)

/** Alias (User Manual Name) for SDMA_BLK0_CH6_SADR.
* To use register names with standard convension, please use SDMA_BLK0_CH6_SADR.
*/
#define	SDMA_SADR006	(SDMA_BLK0_CH6_SADR)

/** \\brief  158, SDMA Channel Shadow Address Register */
#define SDMA_BLK0_CH6_SHADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0010158u)

/** Alias (User Manual Name) for SDMA_BLK0_CH6_SHADR.
* To use register names with standard convension, please use SDMA_BLK0_CH6_SHADR.
*/
#define	SDMA_SHADR006	(SDMA_BLK0_CH6_SHADR)

/** \\brief  16C, SDMA Channel Address Control Register */
#define SDMA_BLK0_CH7_ADRCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001016Cu)

/** Alias (User Manual Name) for SDMA_BLK0_CH7_ADRCR.
* To use register names with standard convension, please use SDMA_BLK0_CH7_ADRCR.
*/
#define	SDMA_ADRCR007	(SDMA_BLK0_CH7_ADRCR)

/** \\brief  164, SDMA Channel Control Register */
#define SDMA_BLK0_CH7_CHCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0010164u)

/** Alias (User Manual Name) for SDMA_BLK0_CH7_CHCR.
* To use register names with standard convension, please use SDMA_BLK0_CH7_CHCR.
*/
#define	SDMA_CHCR007	(SDMA_BLK0_CH7_CHCR)

/** \\brief  168, SDMA Channel Interrupt Control Register */
#define SDMA_BLK0_CH7_CHICR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0010168u)

/** Alias (User Manual Name) for SDMA_BLK0_CH7_CHICR.
* To use register names with standard convension, please use SDMA_BLK0_CH7_CHICR.
*/
#define	SDMA_CHICR007	(SDMA_BLK0_CH7_CHICR)

/** \\brief  160, SDMA Channel Status Register */
#define SDMA_BLK0_CH7_CHSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0010160u)

/** Alias (User Manual Name) for SDMA_BLK0_CH7_CHSR.
* To use register names with standard convension, please use SDMA_BLK0_CH7_CHSR.
*/
#define	SDMA_CHSR007	(SDMA_BLK0_CH7_CHSR)

/** \\brief  174, SDMA Channel Destination Address Register */
#define SDMA_BLK0_CH7_DADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0010174u)

/** Alias (User Manual Name) for SDMA_BLK0_CH7_DADR.
* To use register names with standard convension, please use SDMA_BLK0_CH7_DADR.
*/
#define	SDMA_DADR007	(SDMA_BLK0_CH7_DADR)

/** \\brief  170, SDMA Channel Source Address Register */
#define SDMA_BLK0_CH7_SADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0010170u)

/** Alias (User Manual Name) for SDMA_BLK0_CH7_SADR.
* To use register names with standard convension, please use SDMA_BLK0_CH7_SADR.
*/
#define	SDMA_SADR007	(SDMA_BLK0_CH7_SADR)

/** \\brief  178, SDMA Channel Shadow Address Register */
#define SDMA_BLK0_CH7_SHADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0010178u)

/** Alias (User Manual Name) for SDMA_BLK0_CH7_SHADR.
* To use register names with standard convension, please use SDMA_BLK0_CH7_SHADR.
*/
#define	SDMA_SHADR007	(SDMA_BLK0_CH7_SHADR)

/** \\brief  70, SDMA Channel Interrupt Set Register0 */
#define SDMA_BLK0_CHINTR0 /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CHINTR0*)0xF0010070u)

/** Alias (User Manual Name) for SDMA_BLK0_CHINTR0.
* To use register names with standard convension, please use SDMA_BLK0_CHINTR0.
*/
#define	SDMA_CHINTR00	(SDMA_BLK0_CHINTR0)

/** \\brief  40, SDMA Channel Reset Request Register0 */
#define SDMA_BLK0_CHRSTR0 /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CHRSTR0*)0xF0010040u)

/** Alias (User Manual Name) for SDMA_BLK0_CHRSTR0.
* To use register names with standard convension, please use SDMA_BLK0_CHRSTR0.
*/
#define	SDMA_CHRSTR00	(SDMA_BLK0_CHRSTR0)

/** \\brief  28, SDMA Clear Error Register */
#define SDMA_BLK0_CLRE /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CLRE*)0xF0010028u)

/** Alias (User Manual Name) for SDMA_BLK0_CLRE.
* To use register names with standard convension, please use SDMA_BLK0_CLRE.
*/
#define	SDMA_CLRE0	(SDMA_BLK0_CLRE)

/** \\brief  20, SDMA Enable Error Register */
#define SDMA_BLK0_EER /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_EER*)0xF0010020u)

/** Alias (User Manual Name) for SDMA_BLK0_EER.
* To use register names with standard convension, please use SDMA_BLK0_EER.
*/
#define	SDMA_EER0	(SDMA_BLK0_EER)

/** \\brief  24, SDMA Error Status Register */
#define SDMA_BLK0_ERRSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_ERRSR*)0xF0010024u)

/** Alias (User Manual Name) for SDMA_BLK0_ERRSR.
* To use register names with standard convension, please use SDMA_BLK0_ERRSR.
*/
#define	SDMA_ERRSR0	(SDMA_BLK0_ERRSR)

/** \\brief  38, SDMA Move Engine Interrupt Set Register */
#define SDMA_BLK0_ME_INTR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_ME_INTR*)0xF0010038u)

/** Alias (User Manual Name) for SDMA_BLK0_ME_INTR.
* To use register names with standard convension, please use SDMA_BLK0_ME_INTR.
*/
#define	SDMA_ME0INTR	(SDMA_BLK0_ME_INTR)

/** \\brief  3C, SDMA Move Engine Pattern Read Register */
#define SDMA_BLK0_ME_PR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_ME_PR*)0xF001003Cu)

/** Alias (User Manual Name) for SDMA_BLK0_ME_PR.
* To use register names with standard convension, please use SDMA_BLK0_ME_PR.
*/
#define	SDMA_ME0PR	(SDMA_BLK0_ME_PR)

/** \\brief  34, SDMA Move Engine Read Register */
#define SDMA_BLK0_ME_R /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_ME_R*)0xF0010034u)

/** Alias (User Manual Name) for SDMA_BLK0_ME_R.
* To use register names with standard convension, please use SDMA_BLK0_ME_R.
*/
#define	SDMA_ME0R	(SDMA_BLK0_ME_R)

/** \\brief  30, SDMA Move Engine Status Register */
#define SDMA_BLK0_ME_SR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_ME_SR*)0xF0010030u)

/** Alias (User Manual Name) for SDMA_BLK0_ME_SR.
* To use register names with standard convension, please use SDMA_BLK0_ME_SR.
*/
#define	SDMA_ME0SR	(SDMA_BLK0_ME_SR)

/** \\brief  68, SDMA Suspend Acknowledge Register0 */
#define SDMA_BLK0_SUSACR0 /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_SUSACR0*)0xF0010068u)

/** Alias (User Manual Name) for SDMA_BLK0_SUSACR0.
* To use register names with standard convension, please use SDMA_BLK0_SUSACR0.
*/
#define	SDMA_SUSACR00	(SDMA_BLK0_SUSACR0)

/** \\brief  60, SDMA Suspend Enable Register0 */
#define SDMA_BLK0_SUSENR0 /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_SUSENR0*)0xF0010060u)

/** Alias (User Manual Name) for SDMA_BLK0_SUSENR0.
* To use register names with standard convension, please use SDMA_BLK0_SUSENR0.
*/
#define	SDMA_SUSENR00	(SDMA_BLK0_SUSENR0)

/** \\brief  18FC, SDMA Sub-block Access Enable Register 0 */
#define SDMA_BLK1_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_ACCEN0*)0xF00118FCu)

/** Alias (User Manual Name) for SDMA_BLK1_ACCEN0.
* To use register names with standard convension, please use SDMA_BLK1_ACCEN0.
*/
#define	SDMA_ACCEN10	(SDMA_BLK1_ACCEN0)

/** \\brief  18F8, SDMA Sub-block Access Enable Register 1 */
#define SDMA_BLK1_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_ACCEN1*)0xF00118F8u)

/** Alias (User Manual Name) for SDMA_BLK1_ACCEN1.
* To use register names with standard convension, please use SDMA_BLK1_ACCEN1.
*/
#define	SDMA_ACCEN11	(SDMA_BLK1_ACCEN1)

/** \\brief  108C, SDMA Channel Address Control Register */
#define SDMA_BLK1_CH0_ADRCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001108Cu)

/** Alias (User Manual Name) for SDMA_BLK1_CH0_ADRCR.
* To use register names with standard convension, please use SDMA_BLK1_CH0_ADRCR.
*/
#define	SDMA_ADRCR100	(SDMA_BLK1_CH0_ADRCR)

/** \\brief  1084, SDMA Channel Control Register */
#define SDMA_BLK1_CH0_CHCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0011084u)

/** Alias (User Manual Name) for SDMA_BLK1_CH0_CHCR.
* To use register names with standard convension, please use SDMA_BLK1_CH0_CHCR.
*/
#define	SDMA_CHCR100	(SDMA_BLK1_CH0_CHCR)

/** \\brief  1088, SDMA Channel Interrupt Control Register */
#define SDMA_BLK1_CH0_CHICR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0011088u)

/** Alias (User Manual Name) for SDMA_BLK1_CH0_CHICR.
* To use register names with standard convension, please use SDMA_BLK1_CH0_CHICR.
*/
#define	SDMA_CHICR100	(SDMA_BLK1_CH0_CHICR)

/** \\brief  1080, SDMA Channel Status Register */
#define SDMA_BLK1_CH0_CHSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0011080u)

/** Alias (User Manual Name) for SDMA_BLK1_CH0_CHSR.
* To use register names with standard convension, please use SDMA_BLK1_CH0_CHSR.
*/
#define	SDMA_CHSR100	(SDMA_BLK1_CH0_CHSR)

/** \\brief  1094, SDMA Channel Destination Address Register */
#define SDMA_BLK1_CH0_DADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0011094u)

/** Alias (User Manual Name) for SDMA_BLK1_CH0_DADR.
* To use register names with standard convension, please use SDMA_BLK1_CH0_DADR.
*/
#define	SDMA_DADR100	(SDMA_BLK1_CH0_DADR)

/** \\brief  1090, SDMA Channel Source Address Register */
#define SDMA_BLK1_CH0_SADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0011090u)

/** Alias (User Manual Name) for SDMA_BLK1_CH0_SADR.
* To use register names with standard convension, please use SDMA_BLK1_CH0_SADR.
*/
#define	SDMA_SADR100	(SDMA_BLK1_CH0_SADR)

/** \\brief  1098, SDMA Channel Shadow Address Register */
#define SDMA_BLK1_CH0_SHADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0011098u)

/** Alias (User Manual Name) for SDMA_BLK1_CH0_SHADR.
* To use register names with standard convension, please use SDMA_BLK1_CH0_SHADR.
*/
#define	SDMA_SHADR100	(SDMA_BLK1_CH0_SHADR)

/** \\brief  10AC, SDMA Channel Address Control Register */
#define SDMA_BLK1_CH1_ADRCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF00110ACu)

/** Alias (User Manual Name) for SDMA_BLK1_CH1_ADRCR.
* To use register names with standard convension, please use SDMA_BLK1_CH1_ADRCR.
*/
#define	SDMA_ADRCR101	(SDMA_BLK1_CH1_ADRCR)

/** \\brief  10A4, SDMA Channel Control Register */
#define SDMA_BLK1_CH1_CHCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF00110A4u)

/** Alias (User Manual Name) for SDMA_BLK1_CH1_CHCR.
* To use register names with standard convension, please use SDMA_BLK1_CH1_CHCR.
*/
#define	SDMA_CHCR101	(SDMA_BLK1_CH1_CHCR)

/** \\brief  10A8, SDMA Channel Interrupt Control Register */
#define SDMA_BLK1_CH1_CHICR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF00110A8u)

/** Alias (User Manual Name) for SDMA_BLK1_CH1_CHICR.
* To use register names with standard convension, please use SDMA_BLK1_CH1_CHICR.
*/
#define	SDMA_CHICR101	(SDMA_BLK1_CH1_CHICR)

/** \\brief  10A0, SDMA Channel Status Register */
#define SDMA_BLK1_CH1_CHSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF00110A0u)

/** Alias (User Manual Name) for SDMA_BLK1_CH1_CHSR.
* To use register names with standard convension, please use SDMA_BLK1_CH1_CHSR.
*/
#define	SDMA_CHSR101	(SDMA_BLK1_CH1_CHSR)

/** \\brief  10B4, SDMA Channel Destination Address Register */
#define SDMA_BLK1_CH1_DADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF00110B4u)

/** Alias (User Manual Name) for SDMA_BLK1_CH1_DADR.
* To use register names with standard convension, please use SDMA_BLK1_CH1_DADR.
*/
#define	SDMA_DADR101	(SDMA_BLK1_CH1_DADR)

/** \\brief  10B0, SDMA Channel Source Address Register */
#define SDMA_BLK1_CH1_SADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF00110B0u)

/** Alias (User Manual Name) for SDMA_BLK1_CH1_SADR.
* To use register names with standard convension, please use SDMA_BLK1_CH1_SADR.
*/
#define	SDMA_SADR101	(SDMA_BLK1_CH1_SADR)

/** \\brief  10B8, SDMA Channel Shadow Address Register */
#define SDMA_BLK1_CH1_SHADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF00110B8u)

/** Alias (User Manual Name) for SDMA_BLK1_CH1_SHADR.
* To use register names with standard convension, please use SDMA_BLK1_CH1_SHADR.
*/
#define	SDMA_SHADR101	(SDMA_BLK1_CH1_SHADR)

/** \\brief  10CC, SDMA Channel Address Control Register */
#define SDMA_BLK1_CH2_ADRCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF00110CCu)

/** Alias (User Manual Name) for SDMA_BLK1_CH2_ADRCR.
* To use register names with standard convension, please use SDMA_BLK1_CH2_ADRCR.
*/
#define	SDMA_ADRCR102	(SDMA_BLK1_CH2_ADRCR)

/** \\brief  10C4, SDMA Channel Control Register */
#define SDMA_BLK1_CH2_CHCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF00110C4u)

/** Alias (User Manual Name) for SDMA_BLK1_CH2_CHCR.
* To use register names with standard convension, please use SDMA_BLK1_CH2_CHCR.
*/
#define	SDMA_CHCR102	(SDMA_BLK1_CH2_CHCR)

/** \\brief  10C8, SDMA Channel Interrupt Control Register */
#define SDMA_BLK1_CH2_CHICR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF00110C8u)

/** Alias (User Manual Name) for SDMA_BLK1_CH2_CHICR.
* To use register names with standard convension, please use SDMA_BLK1_CH2_CHICR.
*/
#define	SDMA_CHICR102	(SDMA_BLK1_CH2_CHICR)

/** \\brief  10C0, SDMA Channel Status Register */
#define SDMA_BLK1_CH2_CHSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF00110C0u)

/** Alias (User Manual Name) for SDMA_BLK1_CH2_CHSR.
* To use register names with standard convension, please use SDMA_BLK1_CH2_CHSR.
*/
#define	SDMA_CHSR102	(SDMA_BLK1_CH2_CHSR)

/** \\brief  10D4, SDMA Channel Destination Address Register */
#define SDMA_BLK1_CH2_DADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF00110D4u)

/** Alias (User Manual Name) for SDMA_BLK1_CH2_DADR.
* To use register names with standard convension, please use SDMA_BLK1_CH2_DADR.
*/
#define	SDMA_DADR102	(SDMA_BLK1_CH2_DADR)

/** \\brief  10D0, SDMA Channel Source Address Register */
#define SDMA_BLK1_CH2_SADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF00110D0u)

/** Alias (User Manual Name) for SDMA_BLK1_CH2_SADR.
* To use register names with standard convension, please use SDMA_BLK1_CH2_SADR.
*/
#define	SDMA_SADR102	(SDMA_BLK1_CH2_SADR)

/** \\brief  10D8, SDMA Channel Shadow Address Register */
#define SDMA_BLK1_CH2_SHADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF00110D8u)

/** Alias (User Manual Name) for SDMA_BLK1_CH2_SHADR.
* To use register names with standard convension, please use SDMA_BLK1_CH2_SHADR.
*/
#define	SDMA_SHADR102	(SDMA_BLK1_CH2_SHADR)

/** \\brief  10EC, SDMA Channel Address Control Register */
#define SDMA_BLK1_CH3_ADRCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF00110ECu)

/** Alias (User Manual Name) for SDMA_BLK1_CH3_ADRCR.
* To use register names with standard convension, please use SDMA_BLK1_CH3_ADRCR.
*/
#define	SDMA_ADRCR103	(SDMA_BLK1_CH3_ADRCR)

/** \\brief  10E4, SDMA Channel Control Register */
#define SDMA_BLK1_CH3_CHCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF00110E4u)

/** Alias (User Manual Name) for SDMA_BLK1_CH3_CHCR.
* To use register names with standard convension, please use SDMA_BLK1_CH3_CHCR.
*/
#define	SDMA_CHCR103	(SDMA_BLK1_CH3_CHCR)

/** \\brief  10E8, SDMA Channel Interrupt Control Register */
#define SDMA_BLK1_CH3_CHICR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF00110E8u)

/** Alias (User Manual Name) for SDMA_BLK1_CH3_CHICR.
* To use register names with standard convension, please use SDMA_BLK1_CH3_CHICR.
*/
#define	SDMA_CHICR103	(SDMA_BLK1_CH3_CHICR)

/** \\brief  10E0, SDMA Channel Status Register */
#define SDMA_BLK1_CH3_CHSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF00110E0u)

/** Alias (User Manual Name) for SDMA_BLK1_CH3_CHSR.
* To use register names with standard convension, please use SDMA_BLK1_CH3_CHSR.
*/
#define	SDMA_CHSR103	(SDMA_BLK1_CH3_CHSR)

/** \\brief  10F4, SDMA Channel Destination Address Register */
#define SDMA_BLK1_CH3_DADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF00110F4u)

/** Alias (User Manual Name) for SDMA_BLK1_CH3_DADR.
* To use register names with standard convension, please use SDMA_BLK1_CH3_DADR.
*/
#define	SDMA_DADR103	(SDMA_BLK1_CH3_DADR)

/** \\brief  10F0, SDMA Channel Source Address Register */
#define SDMA_BLK1_CH3_SADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF00110F0u)

/** Alias (User Manual Name) for SDMA_BLK1_CH3_SADR.
* To use register names with standard convension, please use SDMA_BLK1_CH3_SADR.
*/
#define	SDMA_SADR103	(SDMA_BLK1_CH3_SADR)

/** \\brief  10F8, SDMA Channel Shadow Address Register */
#define SDMA_BLK1_CH3_SHADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF00110F8u)

/** Alias (User Manual Name) for SDMA_BLK1_CH3_SHADR.
* To use register names with standard convension, please use SDMA_BLK1_CH3_SHADR.
*/
#define	SDMA_SHADR103	(SDMA_BLK1_CH3_SHADR)

/** \\brief  110C, SDMA Channel Address Control Register */
#define SDMA_BLK1_CH4_ADRCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001110Cu)

/** Alias (User Manual Name) for SDMA_BLK1_CH4_ADRCR.
* To use register names with standard convension, please use SDMA_BLK1_CH4_ADRCR.
*/
#define	SDMA_ADRCR104	(SDMA_BLK1_CH4_ADRCR)

/** \\brief  1104, SDMA Channel Control Register */
#define SDMA_BLK1_CH4_CHCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0011104u)

/** Alias (User Manual Name) for SDMA_BLK1_CH4_CHCR.
* To use register names with standard convension, please use SDMA_BLK1_CH4_CHCR.
*/
#define	SDMA_CHCR104	(SDMA_BLK1_CH4_CHCR)

/** \\brief  1108, SDMA Channel Interrupt Control Register */
#define SDMA_BLK1_CH4_CHICR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0011108u)

/** Alias (User Manual Name) for SDMA_BLK1_CH4_CHICR.
* To use register names with standard convension, please use SDMA_BLK1_CH4_CHICR.
*/
#define	SDMA_CHICR104	(SDMA_BLK1_CH4_CHICR)

/** \\brief  1100, SDMA Channel Status Register */
#define SDMA_BLK1_CH4_CHSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0011100u)

/** Alias (User Manual Name) for SDMA_BLK1_CH4_CHSR.
* To use register names with standard convension, please use SDMA_BLK1_CH4_CHSR.
*/
#define	SDMA_CHSR104	(SDMA_BLK1_CH4_CHSR)

/** \\brief  1114, SDMA Channel Destination Address Register */
#define SDMA_BLK1_CH4_DADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0011114u)

/** Alias (User Manual Name) for SDMA_BLK1_CH4_DADR.
* To use register names with standard convension, please use SDMA_BLK1_CH4_DADR.
*/
#define	SDMA_DADR104	(SDMA_BLK1_CH4_DADR)

/** \\brief  1110, SDMA Channel Source Address Register */
#define SDMA_BLK1_CH4_SADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0011110u)

/** Alias (User Manual Name) for SDMA_BLK1_CH4_SADR.
* To use register names with standard convension, please use SDMA_BLK1_CH4_SADR.
*/
#define	SDMA_SADR104	(SDMA_BLK1_CH4_SADR)

/** \\brief  1118, SDMA Channel Shadow Address Register */
#define SDMA_BLK1_CH4_SHADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0011118u)

/** Alias (User Manual Name) for SDMA_BLK1_CH4_SHADR.
* To use register names with standard convension, please use SDMA_BLK1_CH4_SHADR.
*/
#define	SDMA_SHADR104	(SDMA_BLK1_CH4_SHADR)

/** \\brief  112C, SDMA Channel Address Control Register */
#define SDMA_BLK1_CH5_ADRCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001112Cu)

/** Alias (User Manual Name) for SDMA_BLK1_CH5_ADRCR.
* To use register names with standard convension, please use SDMA_BLK1_CH5_ADRCR.
*/
#define	SDMA_ADRCR105	(SDMA_BLK1_CH5_ADRCR)

/** \\brief  1124, SDMA Channel Control Register */
#define SDMA_BLK1_CH5_CHCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0011124u)

/** Alias (User Manual Name) for SDMA_BLK1_CH5_CHCR.
* To use register names with standard convension, please use SDMA_BLK1_CH5_CHCR.
*/
#define	SDMA_CHCR105	(SDMA_BLK1_CH5_CHCR)

/** \\brief  1128, SDMA Channel Interrupt Control Register */
#define SDMA_BLK1_CH5_CHICR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0011128u)

/** Alias (User Manual Name) for SDMA_BLK1_CH5_CHICR.
* To use register names with standard convension, please use SDMA_BLK1_CH5_CHICR.
*/
#define	SDMA_CHICR105	(SDMA_BLK1_CH5_CHICR)

/** \\brief  1120, SDMA Channel Status Register */
#define SDMA_BLK1_CH5_CHSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0011120u)

/** Alias (User Manual Name) for SDMA_BLK1_CH5_CHSR.
* To use register names with standard convension, please use SDMA_BLK1_CH5_CHSR.
*/
#define	SDMA_CHSR105	(SDMA_BLK1_CH5_CHSR)

/** \\brief  1134, SDMA Channel Destination Address Register */
#define SDMA_BLK1_CH5_DADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0011134u)

/** Alias (User Manual Name) for SDMA_BLK1_CH5_DADR.
* To use register names with standard convension, please use SDMA_BLK1_CH5_DADR.
*/
#define	SDMA_DADR105	(SDMA_BLK1_CH5_DADR)

/** \\brief  1130, SDMA Channel Source Address Register */
#define SDMA_BLK1_CH5_SADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0011130u)

/** Alias (User Manual Name) for SDMA_BLK1_CH5_SADR.
* To use register names with standard convension, please use SDMA_BLK1_CH5_SADR.
*/
#define	SDMA_SADR105	(SDMA_BLK1_CH5_SADR)

/** \\brief  1138, SDMA Channel Shadow Address Register */
#define SDMA_BLK1_CH5_SHADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0011138u)

/** Alias (User Manual Name) for SDMA_BLK1_CH5_SHADR.
* To use register names with standard convension, please use SDMA_BLK1_CH5_SHADR.
*/
#define	SDMA_SHADR105	(SDMA_BLK1_CH5_SHADR)

/** \\brief  114C, SDMA Channel Address Control Register */
#define SDMA_BLK1_CH6_ADRCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001114Cu)

/** Alias (User Manual Name) for SDMA_BLK1_CH6_ADRCR.
* To use register names with standard convension, please use SDMA_BLK1_CH6_ADRCR.
*/
#define	SDMA_ADRCR106	(SDMA_BLK1_CH6_ADRCR)

/** \\brief  1144, SDMA Channel Control Register */
#define SDMA_BLK1_CH6_CHCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0011144u)

/** Alias (User Manual Name) for SDMA_BLK1_CH6_CHCR.
* To use register names with standard convension, please use SDMA_BLK1_CH6_CHCR.
*/
#define	SDMA_CHCR106	(SDMA_BLK1_CH6_CHCR)

/** \\brief  1148, SDMA Channel Interrupt Control Register */
#define SDMA_BLK1_CH6_CHICR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0011148u)

/** Alias (User Manual Name) for SDMA_BLK1_CH6_CHICR.
* To use register names with standard convension, please use SDMA_BLK1_CH6_CHICR.
*/
#define	SDMA_CHICR106	(SDMA_BLK1_CH6_CHICR)

/** \\brief  1140, SDMA Channel Status Register */
#define SDMA_BLK1_CH6_CHSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0011140u)

/** Alias (User Manual Name) for SDMA_BLK1_CH6_CHSR.
* To use register names with standard convension, please use SDMA_BLK1_CH6_CHSR.
*/
#define	SDMA_CHSR106	(SDMA_BLK1_CH6_CHSR)

/** \\brief  1154, SDMA Channel Destination Address Register */
#define SDMA_BLK1_CH6_DADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0011154u)

/** Alias (User Manual Name) for SDMA_BLK1_CH6_DADR.
* To use register names with standard convension, please use SDMA_BLK1_CH6_DADR.
*/
#define	SDMA_DADR106	(SDMA_BLK1_CH6_DADR)

/** \\brief  1150, SDMA Channel Source Address Register */
#define SDMA_BLK1_CH6_SADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0011150u)

/** Alias (User Manual Name) for SDMA_BLK1_CH6_SADR.
* To use register names with standard convension, please use SDMA_BLK1_CH6_SADR.
*/
#define	SDMA_SADR106	(SDMA_BLK1_CH6_SADR)

/** \\brief  1158, SDMA Channel Shadow Address Register */
#define SDMA_BLK1_CH6_SHADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0011158u)

/** Alias (User Manual Name) for SDMA_BLK1_CH6_SHADR.
* To use register names with standard convension, please use SDMA_BLK1_CH6_SHADR.
*/
#define	SDMA_SHADR106	(SDMA_BLK1_CH6_SHADR)

/** \\brief  116C, SDMA Channel Address Control Register */
#define SDMA_BLK1_CH7_ADRCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_ADRCR*)0xF001116Cu)

/** Alias (User Manual Name) for SDMA_BLK1_CH7_ADRCR.
* To use register names with standard convension, please use SDMA_BLK1_CH7_ADRCR.
*/
#define	SDMA_ADRCR107	(SDMA_BLK1_CH7_ADRCR)

/** \\brief  1164, SDMA Channel Control Register */
#define SDMA_BLK1_CH7_CHCR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHCR*)0xF0011164u)

/** Alias (User Manual Name) for SDMA_BLK1_CH7_CHCR.
* To use register names with standard convension, please use SDMA_BLK1_CH7_CHCR.
*/
#define	SDMA_CHCR107	(SDMA_BLK1_CH7_CHCR)

/** \\brief  1168, SDMA Channel Interrupt Control Register */
#define SDMA_BLK1_CH7_CHICR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHICR*)0xF0011168u)

/** Alias (User Manual Name) for SDMA_BLK1_CH7_CHICR.
* To use register names with standard convension, please use SDMA_BLK1_CH7_CHICR.
*/
#define	SDMA_CHICR107	(SDMA_BLK1_CH7_CHICR)

/** \\brief  1160, SDMA Channel Status Register */
#define SDMA_BLK1_CH7_CHSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_CHSR*)0xF0011160u)

/** Alias (User Manual Name) for SDMA_BLK1_CH7_CHSR.
* To use register names with standard convension, please use SDMA_BLK1_CH7_CHSR.
*/
#define	SDMA_CHSR107	(SDMA_BLK1_CH7_CHSR)

/** \\brief  1174, SDMA Channel Destination Address Register */
#define SDMA_BLK1_CH7_DADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_DADR*)0xF0011174u)

/** Alias (User Manual Name) for SDMA_BLK1_CH7_DADR.
* To use register names with standard convension, please use SDMA_BLK1_CH7_DADR.
*/
#define	SDMA_DADR107	(SDMA_BLK1_CH7_DADR)

/** \\brief  1170, SDMA Channel Source Address Register */
#define SDMA_BLK1_CH7_SADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SADR*)0xF0011170u)

/** Alias (User Manual Name) for SDMA_BLK1_CH7_SADR.
* To use register names with standard convension, please use SDMA_BLK1_CH7_SADR.
*/
#define	SDMA_SADR107	(SDMA_BLK1_CH7_SADR)

/** \\brief  1178, SDMA Channel Shadow Address Register */
#define SDMA_BLK1_CH7_SHADR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CH_SHADR*)0xF0011178u)

/** Alias (User Manual Name) for SDMA_BLK1_CH7_SHADR.
* To use register names with standard convension, please use SDMA_BLK1_CH7_SHADR.
*/
#define	SDMA_SHADR107	(SDMA_BLK1_CH7_SHADR)

/** \\brief  1070, SDMA Channel Interrupt Set Register0 */
#define SDMA_BLK1_CHINTR0 /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CHINTR0*)0xF0011070u)

/** Alias (User Manual Name) for SDMA_BLK1_CHINTR0.
* To use register names with standard convension, please use SDMA_BLK1_CHINTR0.
*/
#define	SDMA_CHINTR10	(SDMA_BLK1_CHINTR0)

/** \\brief  1040, SDMA Channel Reset Request Register0 */
#define SDMA_BLK1_CHRSTR0 /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CHRSTR0*)0xF0011040u)

/** Alias (User Manual Name) for SDMA_BLK1_CHRSTR0.
* To use register names with standard convension, please use SDMA_BLK1_CHRSTR0.
*/
#define	SDMA_CHRSTR10	(SDMA_BLK1_CHRSTR0)

/** \\brief  1028, SDMA Clear Error Register */
#define SDMA_BLK1_CLRE /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_CLRE*)0xF0011028u)

/** Alias (User Manual Name) for SDMA_BLK1_CLRE.
* To use register names with standard convension, please use SDMA_BLK1_CLRE.
*/
#define	SDMA_CLRE1	(SDMA_BLK1_CLRE)

/** \\brief  1020, SDMA Enable Error Register */
#define SDMA_BLK1_EER /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_EER*)0xF0011020u)

/** Alias (User Manual Name) for SDMA_BLK1_EER.
* To use register names with standard convension, please use SDMA_BLK1_EER.
*/
#define	SDMA_EER1	(SDMA_BLK1_EER)

/** \\brief  1024, SDMA Error Status Register */
#define SDMA_BLK1_ERRSR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_ERRSR*)0xF0011024u)

/** Alias (User Manual Name) for SDMA_BLK1_ERRSR.
* To use register names with standard convension, please use SDMA_BLK1_ERRSR.
*/
#define	SDMA_ERRSR1	(SDMA_BLK1_ERRSR)

/** \\brief  1038, SDMA Move Engine Interrupt Set Register */
#define SDMA_BLK1_ME_INTR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_ME_INTR*)0xF0011038u)

/** Alias (User Manual Name) for SDMA_BLK1_ME_INTR.
* To use register names with standard convension, please use SDMA_BLK1_ME_INTR.
*/
#define	SDMA_ME1INTR	(SDMA_BLK1_ME_INTR)

/** \\brief  103C, SDMA Move Engine Pattern Read Register */
#define SDMA_BLK1_ME_PR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_ME_PR*)0xF001103Cu)

/** Alias (User Manual Name) for SDMA_BLK1_ME_PR.
* To use register names with standard convension, please use SDMA_BLK1_ME_PR.
*/
#define	SDMA_ME1PR	(SDMA_BLK1_ME_PR)

/** \\brief  1034, SDMA Move Engine Read Register */
#define SDMA_BLK1_ME_R /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_ME_R*)0xF0011034u)

/** Alias (User Manual Name) for SDMA_BLK1_ME_R.
* To use register names with standard convension, please use SDMA_BLK1_ME_R.
*/
#define	SDMA_ME1R	(SDMA_BLK1_ME_R)

/** \\brief  1030, SDMA Move Engine Status Register */
#define SDMA_BLK1_ME_SR /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_ME_SR*)0xF0011030u)

/** Alias (User Manual Name) for SDMA_BLK1_ME_SR.
* To use register names with standard convension, please use SDMA_BLK1_ME_SR.
*/
#define	SDMA_ME1SR	(SDMA_BLK1_ME_SR)

/** \\brief  1068, SDMA Suspend Acknowledge Register0 */
#define SDMA_BLK1_SUSACR0 /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_SUSACR0*)0xF0011068u)

/** Alias (User Manual Name) for SDMA_BLK1_SUSACR0.
* To use register names with standard convension, please use SDMA_BLK1_SUSACR0.
*/
#define	SDMA_SUSACR10	(SDMA_BLK1_SUSACR0)

/** \\brief  1060, SDMA Suspend Enable Register0 */
#define SDMA_BLK1_SUSENR0 /*lint --e(923)*/ (*(volatile Ifx_SDMA_BLK_SUSENR0*)0xF0011060u)

/** Alias (User Manual Name) for SDMA_BLK1_SUSENR0.
* To use register names with standard convension, please use SDMA_BLK1_SUSENR0.
*/
#define	SDMA_SUSENR10	(SDMA_BLK1_SUSENR0)

/** \\brief  0, SDMA Sub-block 0 Clock Control Register */
#define SDMA_CLC0 /*lint --e(923)*/ (*(volatile Ifx_SDMA_CLC0*)0xF0010000u)

/** \\brief  1000, SDMA Sub-block 1 Clock Control Register */
#define SDMA_CLC1 /*lint --e(923)*/ (*(volatile Ifx_SDMA_CLC1*)0xF0011000u)

/** \\brief  2018, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH00_RD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012018u)

/** Alias (User Manual Name) for SDMA_CRCCH00_RD.
* To use register names with standard convension, please use SDMA_CRCCH00_RD.
*/
#define	SDMA_RDCRC000	(SDMA_CRCCH00_RD)

/** \\brief  201C, SDMA Channel Source and Destination Address CRC Register */
#define SDMA_CRCCH00_SD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_SD*)0xF001201Cu)

/** Alias (User Manual Name) for SDMA_CRCCH00_SD.
* To use register names with standard convension, please use SDMA_CRCCH00_SD.
*/
#define	SDMA_SDCRC000	(SDMA_CRCCH00_SD)

/** \\brief  2038, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH01_RD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012038u)

/** Alias (User Manual Name) for SDMA_CRCCH01_RD.
* To use register names with standard convension, please use SDMA_CRCCH01_RD.
*/
#define	SDMA_RDCRC001	(SDMA_CRCCH01_RD)

/** \\brief  203C, SDMA Channel Source and Destination Address CRC Register */
#define SDMA_CRCCH01_SD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_SD*)0xF001203Cu)

/** Alias (User Manual Name) for SDMA_CRCCH01_SD.
* To use register names with standard convension, please use SDMA_CRCCH01_SD.
*/
#define	SDMA_SDCRC001	(SDMA_CRCCH01_SD)

/** \\brief  2058, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH02_RD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012058u)

/** Alias (User Manual Name) for SDMA_CRCCH02_RD.
* To use register names with standard convension, please use SDMA_CRCCH02_RD.
*/
#define	SDMA_RDCRC002	(SDMA_CRCCH02_RD)

/** \\brief  205C, SDMA Channel Source and Destination Address CRC Register */
#define SDMA_CRCCH02_SD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_SD*)0xF001205Cu)

/** Alias (User Manual Name) for SDMA_CRCCH02_SD.
* To use register names with standard convension, please use SDMA_CRCCH02_SD.
*/
#define	SDMA_SDCRC002	(SDMA_CRCCH02_SD)

/** \\brief  2078, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH03_RD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012078u)

/** Alias (User Manual Name) for SDMA_CRCCH03_RD.
* To use register names with standard convension, please use SDMA_CRCCH03_RD.
*/
#define	SDMA_RDCRC003	(SDMA_CRCCH03_RD)

/** \\brief  207C, SDMA Channel Source and Destination Address CRC Register */
#define SDMA_CRCCH03_SD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_SD*)0xF001207Cu)

/** Alias (User Manual Name) for SDMA_CRCCH03_SD.
* To use register names with standard convension, please use SDMA_CRCCH03_SD.
*/
#define	SDMA_SDCRC003	(SDMA_CRCCH03_SD)

/** \\brief  2098, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH04_RD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012098u)

/** Alias (User Manual Name) for SDMA_CRCCH04_RD.
* To use register names with standard convension, please use SDMA_CRCCH04_RD.
*/
#define	SDMA_RDCRC004	(SDMA_CRCCH04_RD)

/** \\brief  209C, SDMA Channel Source and Destination Address CRC Register */
#define SDMA_CRCCH04_SD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_SD*)0xF001209Cu)

/** Alias (User Manual Name) for SDMA_CRCCH04_SD.
* To use register names with standard convension, please use SDMA_CRCCH04_SD.
*/
#define	SDMA_SDCRC004	(SDMA_CRCCH04_SD)

/** \\brief  20B8, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH05_RD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_RD*)0xF00120B8u)

/** Alias (User Manual Name) for SDMA_CRCCH05_RD.
* To use register names with standard convension, please use SDMA_CRCCH05_RD.
*/
#define	SDMA_RDCRC005	(SDMA_CRCCH05_RD)

/** \\brief  20BC, SDMA Channel Source and Destination Address CRC Register */
#define SDMA_CRCCH05_SD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_SD*)0xF00120BCu)

/** Alias (User Manual Name) for SDMA_CRCCH05_SD.
* To use register names with standard convension, please use SDMA_CRCCH05_SD.
*/
#define	SDMA_SDCRC005	(SDMA_CRCCH05_SD)

/** \\brief  20D8, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH06_RD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_RD*)0xF00120D8u)

/** Alias (User Manual Name) for SDMA_CRCCH06_RD.
* To use register names with standard convension, please use SDMA_CRCCH06_RD.
*/
#define	SDMA_RDCRC006	(SDMA_CRCCH06_RD)

/** \\brief  20DC, SDMA Channel Source and Destination Address CRC Register */
#define SDMA_CRCCH06_SD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_SD*)0xF00120DCu)

/** Alias (User Manual Name) for SDMA_CRCCH06_SD.
* To use register names with standard convension, please use SDMA_CRCCH06_SD.
*/
#define	SDMA_SDCRC006	(SDMA_CRCCH06_SD)

/** \\brief  20F8, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH07_RD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_RD*)0xF00120F8u)

/** Alias (User Manual Name) for SDMA_CRCCH07_RD.
* To use register names with standard convension, please use SDMA_CRCCH07_RD.
*/
#define	SDMA_RDCRC007	(SDMA_CRCCH07_RD)

/** \\brief  20FC, SDMA Channel Source and Destination Address CRC Register */
#define SDMA_CRCCH07_SD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_SD*)0xF00120FCu)

/** Alias (User Manual Name) for SDMA_CRCCH07_SD.
* To use register names with standard convension, please use SDMA_CRCCH07_SD.
*/
#define	SDMA_SDCRC007	(SDMA_CRCCH07_SD)

/** \\brief  2818, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH10_RD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012818u)

/** Alias (User Manual Name) for SDMA_CRCCH10_RD.
* To use register names with standard convension, please use SDMA_CRCCH10_RD.
*/
#define	SDMA_RDCRC100	(SDMA_CRCCH10_RD)

/** \\brief  281C, SDMA Channel Source and Destination Address CRC Register */
#define SDMA_CRCCH10_SD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_SD*)0xF001281Cu)

/** Alias (User Manual Name) for SDMA_CRCCH10_SD.
* To use register names with standard convension, please use SDMA_CRCCH10_SD.
*/
#define	SDMA_SDCRC100	(SDMA_CRCCH10_SD)

/** \\brief  2838, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH11_RD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012838u)

/** Alias (User Manual Name) for SDMA_CRCCH11_RD.
* To use register names with standard convension, please use SDMA_CRCCH11_RD.
*/
#define	SDMA_RDCRC101	(SDMA_CRCCH11_RD)

/** \\brief  283C, SDMA Channel Source and Destination Address CRC Register */
#define SDMA_CRCCH11_SD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_SD*)0xF001283Cu)

/** Alias (User Manual Name) for SDMA_CRCCH11_SD.
* To use register names with standard convension, please use SDMA_CRCCH11_SD.
*/
#define	SDMA_SDCRC101	(SDMA_CRCCH11_SD)

/** \\brief  2858, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH12_RD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012858u)

/** Alias (User Manual Name) for SDMA_CRCCH12_RD.
* To use register names with standard convension, please use SDMA_CRCCH12_RD.
*/
#define	SDMA_RDCRC102	(SDMA_CRCCH12_RD)

/** \\brief  285C, SDMA Channel Source and Destination Address CRC Register */
#define SDMA_CRCCH12_SD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_SD*)0xF001285Cu)

/** Alias (User Manual Name) for SDMA_CRCCH12_SD.
* To use register names with standard convension, please use SDMA_CRCCH12_SD.
*/
#define	SDMA_SDCRC102	(SDMA_CRCCH12_SD)

/** \\brief  2878, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH13_RD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012878u)

/** Alias (User Manual Name) for SDMA_CRCCH13_RD.
* To use register names with standard convension, please use SDMA_CRCCH13_RD.
*/
#define	SDMA_RDCRC103	(SDMA_CRCCH13_RD)

/** \\brief  287C, SDMA Channel Source and Destination Address CRC Register */
#define SDMA_CRCCH13_SD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_SD*)0xF001287Cu)

/** Alias (User Manual Name) for SDMA_CRCCH13_SD.
* To use register names with standard convension, please use SDMA_CRCCH13_SD.
*/
#define	SDMA_SDCRC103	(SDMA_CRCCH13_SD)

/** \\brief  2898, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH14_RD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_RD*)0xF0012898u)

/** Alias (User Manual Name) for SDMA_CRCCH14_RD.
* To use register names with standard convension, please use SDMA_CRCCH14_RD.
*/
#define	SDMA_RDCRC104	(SDMA_CRCCH14_RD)

/** \\brief  289C, SDMA Channel Source and Destination Address CRC Register */
#define SDMA_CRCCH14_SD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_SD*)0xF001289Cu)

/** Alias (User Manual Name) for SDMA_CRCCH14_SD.
* To use register names with standard convension, please use SDMA_CRCCH14_SD.
*/
#define	SDMA_SDCRC104	(SDMA_CRCCH14_SD)

/** \\brief  28B8, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH15_RD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_RD*)0xF00128B8u)

/** Alias (User Manual Name) for SDMA_CRCCH15_RD.
* To use register names with standard convension, please use SDMA_CRCCH15_RD.
*/
#define	SDMA_RDCRC105	(SDMA_CRCCH15_RD)

/** \\brief  28BC, SDMA Channel Source and Destination Address CRC Register */
#define SDMA_CRCCH15_SD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_SD*)0xF00128BCu)

/** Alias (User Manual Name) for SDMA_CRCCH15_SD.
* To use register names with standard convension, please use SDMA_CRCCH15_SD.
*/
#define	SDMA_SDCRC105	(SDMA_CRCCH15_SD)

/** \\brief  28D8, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH16_RD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_RD*)0xF00128D8u)

/** Alias (User Manual Name) for SDMA_CRCCH16_RD.
* To use register names with standard convension, please use SDMA_CRCCH16_RD.
*/
#define	SDMA_RDCRC106	(SDMA_CRCCH16_RD)

/** \\brief  28DC, SDMA Channel Source and Destination Address CRC Register */
#define SDMA_CRCCH16_SD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_SD*)0xF00128DCu)

/** Alias (User Manual Name) for SDMA_CRCCH16_SD.
* To use register names with standard convension, please use SDMA_CRCCH16_SD.
*/
#define	SDMA_SDCRC106	(SDMA_CRCCH16_SD)

/** \\brief  28F8, SDMA Channel Read Data CRC Register */
#define SDMA_CRCCH17_RD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_RD*)0xF00128F8u)

/** Alias (User Manual Name) for SDMA_CRCCH17_RD.
* To use register names with standard convension, please use SDMA_CRCCH17_RD.
*/
#define	SDMA_RDCRC107	(SDMA_CRCCH17_RD)

/** \\brief  28FC, SDMA Channel Source and Destination Address CRC Register */
#define SDMA_CRCCH17_SD /*lint --e(923)*/ (*(volatile Ifx_SDMA_CRCCH_SD*)0xF00128FCu)

/** Alias (User Manual Name) for SDMA_CRCCH17_SD.
* To use register names with standard convension, please use SDMA_CRCCH17_SD.
*/
#define	SDMA_SDCRC107	(SDMA_CRCCH17_SD)

/** \\brief  8, Module Identification Register */
#define SDMA_ID /*lint --e(923)*/ (*(volatile Ifx_SDMA_ID*)0xF0010008u)

/** \\brief  C, SDMA OCDS Trigger Set Select */
#define SDMA_OTSS /*lint --e(923)*/ (*(volatile Ifx_SDMA_OTSS*)0xF001000Cu)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXSDMA_REG_H */
