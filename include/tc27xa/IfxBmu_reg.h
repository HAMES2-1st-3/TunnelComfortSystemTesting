/**
 * \file IfxBmu_reg.h
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
 * \defgroup IfxLld_Bmu_Cfg Bmu address
 * \ingroup IfxLld_Bmu
 * 
 * \defgroup IfxLld_Bmu_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Bmu_Cfg
 * 
 * \defgroup IfxLld_Bmu_Cfg_Bmu0 2-BMU0
 * \ingroup IfxLld_Bmu_Cfg
 * 
 */
#ifndef IFXBMU_REG_H
#define IFXBMU_REG_H 1
/******************************************************************************/
#include "IfxBmu_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Bmu_Cfg_BaseAddress
 * \{  */

/** \\brief  BMU object */
#define MODULE_BMU0 /*lint --e(923)*/ ((*(Ifx_BMU*)0xF0030800u))
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Bmu_Cfg_Bmu0
 * \{  */

/** \\brief  FC, Access Enable Register 0 */
#define BMU0_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_BMU_ACCEN0*)0xF00308FCu)

/** Alias (User Manual Name) for BMU0_ACCEN0.
* To use register names with standard convension, please use BMU0_ACCEN0.
*/
#define	BMU_ACCEN0	(BMU0_ACCEN0)

/** \\brief  F8, Access Enable Register 1 */
#define BMU0_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_BMU_ACCEN1*)0xF00308F8u)

/** Alias (User Manual Name) for BMU0_ACCEN1.
* To use register names with standard convension, please use BMU0_ACCEN1.
*/
#define	BMU_ACCEN1	(BMU0_ACCEN1)

/** \\brief  0, Clock Control Register */
#define BMU0_CLC /*lint --e(923)*/ (*(volatile Ifx_BMU_CLC*)0xF0030800u)

/** Alias (User Manual Name) for BMU0_CLC.
* To use register names with standard convension, please use BMU0_CLC.
*/
#define	BMU_CLC	(BMU0_CLC)

/** \\brief  20, Transaction Filtering Control */
#define BMU0_CTL /*lint --e(923)*/ (*(volatile Ifx_BMU_CTL*)0xF0030820u)

/** Alias (User Manual Name) for BMU0_CTL.
* To use register names with standard convension, please use BMU0_CTL.
*/
#define	BMU_CTL	(BMU0_CTL)

/** \\brief  40, Fifo Monitor control register */
#define BMU0_FMCTL /*lint --e(923)*/ (*(volatile Ifx_BMU_FMCTL*)0xF0030840u)

/** Alias (User Manual Name) for BMU0_FMCTL.
* To use register names with standard convension, please use BMU0_FMCTL.
*/
#define	BMU_FMCTL	(BMU0_FMCTL)

/** \\brief  44, Fifo Monitor Status Register */
#define BMU0_FMSTS /*lint --e(923)*/ (*(volatile Ifx_BMU_FMSTS*)0xF0030844u)

/** Alias (User Manual Name) for BMU0_FMSTS.
* To use register names with standard convension, please use BMU0_FMSTS.
*/
#define	BMU_FMSTS	(BMU0_FMSTS)

/** \\brief  48, Fifo Monitor: Fullness Threshold Register */
#define BMU0_FMTH /*lint --e(923)*/ (*(volatile Ifx_BMU_FMTH*)0xF0030848u)

/** Alias (User Manual Name) for BMU0_FMTH.
* To use register names with standard convension, please use BMU0_FMTH.
*/
#define	BMU_FMTH	(BMU0_FMTH)

/** \\brief  28, Fullness Information for Bus Transaction Fifo */
#define BMU0_FULLNESS /*lint --e(923)*/ (*(volatile Ifx_BMU_FULLNESS*)0xF0030828u)

/** Alias (User Manual Name) for BMU0_FULLNESS.
* To use register names with standard convension, please use BMU0_FULLNESS.
*/
#define	BMU_FULLNESS	(BMU0_FULLNESS)

/** \\brief  8, Module Identification Register */
#define BMU0_ID /*lint --e(923)*/ (*(volatile Ifx_BMU_ID*)0xF0030808u)

/** Alias (User Manual Name) for BMU0_ID.
* To use register names with standard convension, please use BMU0_ID.
*/
#define	BMU_ID	(BMU0_ID)

/** \\brief  30, Peripheral Set 0 Configuration */
#define BMU0_PSET0 /*lint --e(923)*/ (*(volatile Ifx_BMU_PSET0*)0xF0030830u)

/** Alias (User Manual Name) for BMU0_PSET0.
* To use register names with standard convension, please use BMU0_PSET0.
*/
#define	BMU_PSET0	(BMU0_PSET0)

/** \\brief  34, Peripheral Set 1 Configuration */
#define BMU0_PSET1 /*lint --e(923)*/ (*(volatile Ifx_BMU_PSET1*)0xF0030834u)

/** Alias (User Manual Name) for BMU0_PSET1.
* To use register names with standard convension, please use BMU0_PSET1.
*/
#define	BMU_PSET1	(BMU0_PSET1)

/** \\brief  38, Peripheral Set 2 Configuration */
#define BMU0_PSET2 /*lint --e(923)*/ (*(volatile Ifx_BMU_PSET2*)0xF0030838u)

/** Alias (User Manual Name) for BMU0_PSET2.
* To use register names with standard convension, please use BMU0_PSET2.
*/
#define	BMU_PSET2	(BMU0_PSET2)

/** \\brief  24, Pointer Information for Bus Transaction Fifo */
#define BMU0_PTR /*lint --e(923)*/ (*(volatile Ifx_BMU_PTR*)0xF0030824u)

/** Alias (User Manual Name) for BMU0_PTR.
* To use register names with standard convension, please use BMU0_PTR.
*/
#define	BMU_PTR	(BMU0_PTR)

/** \\brief  3C, FPI Transaction ID Set 0 Configuration */
#define BMU0_TID /*lint --e(923)*/ (*(volatile Ifx_BMU_TID*)0xF003083Cu)

/** Alias (User Manual Name) for BMU0_TID.
* To use register names with standard convension, please use BMU0_TID.
*/
#define	BMU_TID	(BMU0_TID)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXBMU_REG_H */
