/**
 * \file IfxEbcu_reg.h
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
 * \defgroup IfxLld_Ebcu_Cfg Ebcu address
 * \ingroup IfxLld_Ebcu
 * 
 * \defgroup IfxLld_Ebcu_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Ebcu_Cfg
 * 
 * \defgroup IfxLld_Ebcu_Cfg_Ebcu0 2-EBCU0
 * \ingroup IfxLld_Ebcu_Cfg
 * 
 */
#ifndef IFXEBCU_REG_H
#define IFXEBCU_REG_H 1
/******************************************************************************/
#include "IfxEbcu_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Ebcu_Cfg_BaseAddress
 * \{  */

/** \\brief  EBCU object */
#define MODULE_EBCU0 /*lint --e(923)*/ ((*(Ifx_EBCU*)0xF90E0100u))
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ebcu_Cfg_Ebcu0
 * \{  */

/** \\brief  FC, Access Enable Register 0 */
#define EBCU0_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_EBCU_ACCEN0*)0xF90E01FCu)

/** Alias (User Manual Name) for EBCU0_ACCEN0.
* To use register names with standard convension, please use EBCU0_ACCEN0.
*/
#define	EBCU_ACCEN0	(EBCU0_ACCEN0)

/** \\brief  F8, Access Enable Register 1 */
#define EBCU0_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_EBCU_ACCEN1*)0xF90E01F8u)

/** Alias (User Manual Name) for EBCU0_ACCEN1.
* To use register names with standard convension, please use EBCU0_ACCEN1.
*/
#define	EBCU_ACCEN1	(EBCU0_ACCEN1)

/** \\brief  10, EBCU Control Register */
#define EBCU0_CON /*lint --e(923)*/ (*(volatile Ifx_EBCU_CON*)0xF90E0110u)

/** Alias (User Manual Name) for EBCU0_CON.
* To use register names with standard convension, please use EBCU0_CON.
*/
#define	EBCU_CON	(EBCU0_CON)

/** \\brief  38, Debug Address 1 Register */
#define EBCU0_DBADR1 /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBADR1*)0xF90E0138u)

/** Alias (User Manual Name) for EBCU0_DBADR1.
* To use register names with standard convension, please use EBCU0_DBADR1.
*/
#define	EBCU_DBADR1	(EBCU0_DBADR1)

/** \\brief  3C, Debug Address 2 Register */
#define EBCU0_DBADR2 /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBADR2*)0xF90E013Cu)

/** Alias (User Manual Name) for EBCU0_DBADR2.
* To use register names with standard convension, please use EBCU0_DBADR2.
*/
#define	EBCU_DBADR2	(EBCU0_DBADR2)

/** \\brief  48, Debug Trapped Address Register */
#define EBCU0_DBADRT /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBADRT*)0xF90E0148u)

/** Alias (User Manual Name) for EBCU0_DBADRT.
* To use register names with standard convension, please use EBCU0_DBADRT.
*/
#define	EBCU_DBADRT	(EBCU0_DBADRT)

/** \\brief  40, Debug Bus Operation Signals Register */
#define EBCU0_DBBOS /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBBOS*)0xF90E0140u)

/** Alias (User Manual Name) for EBCU0_DBBOS.
* To use register names with standard convension, please use EBCU0_DBBOS.
*/
#define	EBCU_DBBOS	(EBCU0_DBBOS)

/** \\brief  4C, Debug Trapped Bus Operation Signals Register */
#define EBCU0_DBBOST /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBBOST*)0xF90E014Cu)

/** Alias (User Manual Name) for EBCU0_DBBOST.
* To use register names with standard convension, please use EBCU0_DBBOST.
*/
#define	EBCU_DBBOST	(EBCU0_DBBOST)

/** \\brief  30, Debug Control Register */
#define EBCU0_DBCNTL /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBCNTL*)0xF90E0130u)

/** Alias (User Manual Name) for EBCU0_DBCNTL.
* To use register names with standard convension, please use EBCU0_DBCNTL.
*/
#define	EBCU_DBCNTL	(EBCU0_DBCNTL)

/** \\brief  50, Debug Data Status Register */
#define EBCU0_DBDAT /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBDAT*)0xF90E0150u)

/** Alias (User Manual Name) for EBCU0_DBDAT.
* To use register names with standard convension, please use EBCU0_DBDAT.
*/
#define	EBCU_DBDAT	(EBCU0_DBDAT)

/** \\brief  44, Debug Trapped Master Register */
#define EBCU0_DBGNTT /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBGNTT*)0xF90E0144u)

/** Alias (User Manual Name) for EBCU0_DBGNTT.
* To use register names with standard convension, please use EBCU0_DBGNTT.
*/
#define	EBCU_DBGNTT	(EBCU0_DBGNTT)

/** \\brief  34, Debug Grant Mask Register */
#define EBCU0_DBGRNT /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBGRNT*)0xF90E0134u)

/** Alias (User Manual Name) for EBCU0_DBGRNT.
* To use register names with standard convension, please use EBCU0_DBGRNT.
*/
#define	EBCU_DBGRNT	(EBCU0_DBGRNT)

/** \\brief  24, Error Address Capture Register */
#define EBCU0_EADD /*lint --e(923)*/ (*(volatile Ifx_EBCU_EADD*)0xF90E0124u)

/** Alias (User Manual Name) for EBCU0_EADD.
* To use register names with standard convension, please use EBCU0_EADD.
*/
#define	EBCU_EADD	(EBCU0_EADD)

/** \\brief  20, Error Control Capture Register */
#define EBCU0_ECON /*lint --e(923)*/ (*(volatile Ifx_EBCU_ECON*)0xF90E0120u)

/** Alias (User Manual Name) for EBCU0_ECON.
* To use register names with standard convension, please use EBCU0_ECON.
*/
#define	EBCU_ECON	(EBCU0_ECON)

/** \\brief  28, Error Data Capture Register */
#define EBCU0_EDAT /*lint --e(923)*/ (*(volatile Ifx_EBCU_EDAT*)0xF90E0128u)

/** Alias (User Manual Name) for EBCU0_EDAT.
* To use register names with standard convension, please use EBCU0_EDAT.
*/
#define	EBCU_EDAT	(EBCU0_EDAT)

/** \\brief  8, Module Identification Register */
#define EBCU0_ID /*lint --e(923)*/ (*(volatile Ifx_EBCU_ID*)0xF90E0108u)

/** Alias (User Manual Name) for EBCU0_ID.
* To use register names with standard convension, please use EBCU0_ID.
*/
#define	EBCU_ID	(EBCU0_ID)

/** \\brief  14, Arbiter Priority Register */
#define EBCU0_PRIOH /*lint --e(923)*/ (*(volatile Ifx_EBCU_PRIOH*)0xF90E0114u)

/** Alias (User Manual Name) for EBCU0_PRIOH.
* To use register names with standard convension, please use EBCU0_PRIOH.
*/
#define	EBCU_PRIOH	(EBCU0_PRIOH)

/** \\brief  18, Arbiter Priority Register */
#define EBCU0_PRIOL /*lint --e(923)*/ (*(volatile Ifx_EBCU_PRIOL*)0xF90E0118u)

/** Alias (User Manual Name) for EBCU0_PRIOL.
* To use register names with standard convension, please use EBCU0_PRIOL.
*/
#define	EBCU_PRIOL	(EBCU0_PRIOL)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXEBCU_REG_H */
