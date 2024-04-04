/**
 * \file IfxMchk_reg.h
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
 * \defgroup IfxLld_Mchk_Cfg Mchk address
 * \ingroup IfxLld_Mchk
 * 
 * \defgroup IfxLld_Mchk_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Mchk_Cfg
 * 
 * \defgroup IfxLld_Mchk_Cfg_Mchk 2-MCHK
 * \ingroup IfxLld_Mchk_Cfg
 * 
 */
#ifndef IFXMCHK_REG_H
#define IFXMCHK_REG_H 1
/******************************************************************************/
#include "IfxMchk_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Mchk_Cfg_BaseAddress
 * \{  */

/** \\brief  MCHK object */
#define MODULE_MCHK /*lint --e(923)*/ ((*(Ifx_MCHK*)0xF0004000u))
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Mchk_Cfg_Mchk
 * \{  */

/** \\brief  10, Memory Checker Input Register */
#define MCHK_CHK0_IR /*lint --e(923)*/ (*(volatile Ifx_MCHK_CHK_IR*)0xF0004010u)

/** Alias (User Manual Name) for MCHK_CHK0_IR.
* To use register names with standard convension, please use MCHK_CHK0_IR.
*/
#define	MCHK_IR0	(MCHK_CHK0_IR)

/** \\brief  14, Memory Checker Result Register */
#define MCHK_CHK0_RR /*lint --e(923)*/ (*(volatile Ifx_MCHK_CHK_RR*)0xF0004014u)

/** Alias (User Manual Name) for MCHK_CHK0_RR.
* To use register names with standard convension, please use MCHK_CHK0_RR.
*/
#define	MCHK_RR0	(MCHK_CHK0_RR)

/** \\brief  18, Memory Checker Input Register */
#define MCHK_CHK1_IR /*lint --e(923)*/ (*(volatile Ifx_MCHK_CHK_IR*)0xF0004018u)

/** Alias (User Manual Name) for MCHK_CHK1_IR.
* To use register names with standard convension, please use MCHK_CHK1_IR.
*/
#define	MCHK_IR1	(MCHK_CHK1_IR)

/** \\brief  1C, Memory Checker Result Register */
#define MCHK_CHK1_RR /*lint --e(923)*/ (*(volatile Ifx_MCHK_CHK_RR*)0xF000401Cu)

/** Alias (User Manual Name) for MCHK_CHK1_RR.
* To use register names with standard convension, please use MCHK_CHK1_RR.
*/
#define	MCHK_RR1	(MCHK_CHK1_RR)

/** \\brief  24, Memory Checker CRC Register */
#define MCHK_CRC0 /*lint --e(923)*/ (*(volatile Ifx_MCHK_CRC*)0xF0004024u)

/** \\brief  28, Memory Checker CRC Register */
#define MCHK_CRC1 /*lint --e(923)*/ (*(volatile Ifx_MCHK_CRC*)0xF0004028u)

/** \\brief  8, Module Identification Register */
#define MCHK_ID /*lint --e(923)*/ (*(volatile Ifx_MCHK_ID*)0xF0004008u)

/** \\brief  20, Memory Checker Write Register */
#define MCHK_WR /*lint --e(923)*/ (*(volatile Ifx_MCHK_WR*)0xF0004020u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXMCHK_REG_H */
