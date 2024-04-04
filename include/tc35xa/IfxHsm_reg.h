/**
 * \file IfxHsm_reg.h
 * \brief
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC35XA_TS_V2.6.0.R0
 * Specification: TC3xx Target Specification.V2.6.0
 * MAY BE CHANGED BY USER [yes/no]: No
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
 * \defgroup IfxSfr_Hsm_Registers_Cfg Hsm address
 * \ingroup IfxSfr_Hsm_Registers
 * 
 * \defgroup IfxSfr_Hsm_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Hsm_Registers_Cfg
 *
 * \defgroup IfxSfr_Hsm_Registers_Cfg_Hsm 2-HSM
 * \ingroup IfxSfr_Hsm_Registers_Cfg
 *
 *
 */
#ifndef IFXHSM_REG_H
#define IFXHSM_REG_H 1
/******************************************************************************/
#include "IfxHsm_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Hsm_Registers_Cfg_BaseAddress
 * \{  */

/** \brief HSM object */
#define MODULE_HSM /*lint --e(923, 9078)*/ ((*(Ifx_HSM*)0xF0040000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Hsm_Registers_Cfg_Hsm
 * \{  */
/** \brief 10000, Debug Memory Window */
#define HSM_DBGMEM ((void*)0xF0050000u)
#define HSM_DBGMEM_SIZE (0x10000u)
/** \brief 8, HSM Identifier Register */
#define HSM_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_HSM_ID*)0xF0040008u)

/** \brief 20, Host to HSM Flags */
#define HSM_HT2HSMF /*lint --e(923, 9078)*/ (*(volatile Ifx_HSM_HT2HSMF*)0xF0040020u)

/** \brief 28, HSM to Host Flags */
#define HSM_HSM2HTF /*lint --e(923, 9078)*/ (*(volatile Ifx_HSM_HSM2HTF*)0xF0040028u)

/** \brief 2C, HSM to Host Interrupt Enable */
#define HSM_HSM2HTIE /*lint --e(923, 9078)*/ (*(volatile Ifx_HSM_HSM2HTIE*)0xF004002Cu)

/** \brief 30, HSM to Host Interrupt Select */
#define HSM_HSM2HTIS /*lint --e(923, 9078)*/ (*(volatile Ifx_HSM_HSM2HTIS*)0xF0040030u)

/** \brief 34, HSM to Host Status */
#define HSM_HSM2HTS /*lint --e(923, 9078)*/ (*(volatile Ifx_HSM_HSM2HTS*)0xF0040034u)

/** \brief 38, Host to HSM Status */
#define HSM_HT2HSMS /*lint --e(923, 9078)*/ (*(volatile Ifx_HSM_HT2HSMS*)0xF0040038u)

/** \brief 1000, HSM Control */
#define HSM_HSMCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_HSM_HSMCTRL*)0xF0041000u)

/** \brief 1010, Debug Window Base Address */
#define HSM_DBGBASE /*lint --e(923, 9078)*/ (*(volatile Ifx_HSM_DBGBASE*)0xF0041010u)

/** \brief 1020, OCDS Suspend and Trigger Bus Control */
#define HSM_HSMOTGB /*lint --e(923, 9078)*/ (*(volatile Ifx_HSM_HSMOTGB*)0xF0041020u)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXHSM_REG_H */
