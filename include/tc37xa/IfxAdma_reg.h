/**
 * \file IfxAdma_reg.h
 * \brief
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC37x_TS_V2.6.0.R0
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
 * \defgroup IfxSfr_Adma_Registers_Cfg Adma address
 * \ingroup IfxSfr_Adma_Registers
 * 
 * \defgroup IfxSfr_Adma_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Adma_Registers_Cfg
 *
 * \defgroup IfxSfr_Adma_Registers_Cfg_Adma0 2-ADMA0
 * \ingroup IfxSfr_Adma_Registers_Cfg
 *
 *
 */
#ifndef IFXADMA_REG_H
#define IFXADMA_REG_H 1
/******************************************************************************/
#include "IfxAdma_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Adma_Registers_Cfg_BaseAddress
 * \{  */

/** \brief ADMA object */
#define MODULE_ADMA0 /*lint --e(923, 9078)*/ ((*(Ifx_ADMA*)0xF8508400u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Adma_Registers_Cfg_Adma0
 * \{  */
/** \brief 0, Clock Control Register */
#define ADMA0_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_ADMA_CLC*)0xF8508400u)

/** \brief 8, Module Identification Register */
#define ADMA0_MODID /*lint --e(923, 9078)*/ (*(volatile Ifx_ADMA_MODID*)0xF8508408u)

/** \brief C, Error Status Register */
#define ADMA0_ERRSR /*lint --e(923, 9078)*/ (*(volatile Ifx_ADMA_ERRSR*)0xF850840Cu)

/** \brief 10, Source Address Register */
#define ADMA0_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_ADMA_SADR*)0xF8508410u)

/** \brief 14, Destination Address Register */
#define ADMA0_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_ADMA_DADR*)0xF8508414u)

/** \brief 18, Counter Register */
#define ADMA0_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_ADMA_CNT*)0xF8508418u)

/** \brief 1C, Control Register */
#define ADMA0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_ADMA_CTRL*)0xF850841Cu)

/** \brief 20, Checksum Register */
#define ADMA0_CHKSUM /*lint --e(923, 9078)*/ (*(volatile Ifx_ADMA_CHKSUM*)0xF8508420u)

/** \brief 40, Kernel Reset Register 0 */
#define ADMA0_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_ADMA_KRST0*)0xF8508440u)

/** \brief 44, Kernel Reset Register 1 */
#define ADMA0_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ADMA_KRST1*)0xF8508444u)

/** \brief 48, Kernel Reset Status Clear Register */
#define ADMA0_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_ADMA_KRSTCLR*)0xF8508448u)

/** \brief 4C, OCDS Debug Access Register */
#define ADMA0_ODA /*lint --e(923, 9078)*/ (*(volatile Ifx_ADMA_ODA*)0xF850844Cu)

/** \brief 50, OCDS Control and Status Register */
#define ADMA0_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_ADMA_OCS*)0xF8508450u)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXADMA_REG_H */
