/**
 * \file IfxGtm_reg.h
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
 * \defgroup IfxLld_Gtm_Cfg Gtm address
 * \ingroup IfxLld_Gtm
 * 
 * \defgroup IfxLld_Gtm_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Gtm_Cfg
 * 
 * \defgroup IfxLld_Gtm_Cfg_Gtm 2-GTM
 * \ingroup IfxLld_Gtm_Cfg
 * 
 */
#ifndef IFXGTM_REG_H
#define IFXGTM_REG_H 1
/******************************************************************************/
#include "IfxGtm_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Gtm_Cfg_BaseAddress
 * \{  */

/** \\brief  GTM object */
#define MODULE_GTM /*lint --e(923)*/ ((*(Ifx_GTM*)0xF0100000u))
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Gtm_Cfg_Gtm
 * \{  */

/** \\brief  9FDFC, Access Enable Register 0 */
#define GTM_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ACCEN0*)0xF019FDFCu)

/** \\brief  9FDF8, Access Enable Register 1 */
#define GTM_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ACCEN1*)0xF019FDF8u)

/** \\brief  9FDB0, ADC Trigger 0 Output Select 0 Register */
#define GTM_ADCTRIG0OUT0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ADCTRIG0OUT0*)0xF019FDB0u)

/** \\brief  9FDB4, ADC Trigger 0 Output Select 1 Register */
#define GTM_ADCTRIG0OUT1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ADCTRIG0OUT1*)0xF019FDB4u)

/** \\brief  9FDB8, ADC Trigger 1 Output Select 0 Register */
#define GTM_ADCTRIG1OUT0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ADCTRIG1OUT0*)0xF019FDB8u)

/** \\brief  9FDBC, ADC Trigger 1 Output Select 1 Register */
#define GTM_ADCTRIG1OUT1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ADCTRIG1OUT1*)0xF019FDBCu)

/** \\brief  C, GTM AEI Timeout Exception Address Register */
#define GTM_AEI_ADDR_XPT /*lint --e(923)*/ (*(volatile Ifx_GTM_AEI_ADDR_XPT*)0xF010000Cu)

/** \\brief  18080, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_AFD0_CH0_BUF_ACC /*lint --e(923)*/ (*(volatile Ifx_GTM_AFD_CH_BUF_ACC*)0xF0118080u)

/** \\brief  18090, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_AFD0_CH1_BUF_ACC /*lint --e(923)*/ (*(volatile Ifx_GTM_AFD_CH_BUF_ACC*)0xF0118090u)

/** \\brief  180A0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_AFD0_CH2_BUF_ACC /*lint --e(923)*/ (*(volatile Ifx_GTM_AFD_CH_BUF_ACC*)0xF01180A0u)

/** \\brief  180B0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_AFD0_CH3_BUF_ACC /*lint --e(923)*/ (*(volatile Ifx_GTM_AFD_CH_BUF_ACC*)0xF01180B0u)

/** \\brief  180C0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_AFD0_CH4_BUF_ACC /*lint --e(923)*/ (*(volatile Ifx_GTM_AFD_CH_BUF_ACC*)0xF01180C0u)

/** \\brief  180D0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_AFD0_CH5_BUF_ACC /*lint --e(923)*/ (*(volatile Ifx_GTM_AFD_CH_BUF_ACC*)0xF01180D0u)

/** \\brief  180E0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_AFD0_CH6_BUF_ACC /*lint --e(923)*/ (*(volatile Ifx_GTM_AFD_CH_BUF_ACC*)0xF01180E0u)

/** \\brief  180F0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_AFD0_CH7_BUF_ACC /*lint --e(923)*/ (*(volatile Ifx_GTM_AFD_CH_BUF_ACC*)0xF01180F0u)

/** \\brief  280, ARU Access Register */
#define GTM_ARU_ARU_ACCESS /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_ARU_ACCESS*)0xF0100280u)

/** Alias (User Manual Name) for GTM_ARU_ARU_ACCESS.
* To use register names with standard convension, please use GTM_ARU_ARU_ACCESS.
*/
#define	GTM_ARU_ACCESS	(GTM_ARU_ARU_ACCESS)

/** \\brief  284, ARU Access Register Upper Data Word */
#define GTM_ARU_DATA_H /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_DATA_H*)0xF0100284u)

/** \\brief  288, ARU Access Register Lower Data Word */
#define GTM_ARU_DATA_L /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_DATA_L*)0xF0100288u)

/** \\brief  28C, Debug Access Channel 0 */
#define GTM_ARU_DBG_ACCESS0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_DBG_ACCESS0*)0xF010028Cu)

/** \\brief  298, Debug Access Channel 0 */
#define GTM_ARU_DBG_ACCESS1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_DBG_ACCESS1*)0xF0100298u)

/** \\brief  290, Debug Access 0 Transfer Register Upper Data Word */
#define GTM_ARU_DBG_DATA0_H /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_DBG_DATA0_H*)0xF0100290u)

/** \\brief  294, Debug Access 0 Transfer Register Lower Data Word */
#define GTM_ARU_DBG_DATA0_L /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_DBG_DATA0_L*)0xF0100294u)

/** \\brief  29C, Debug Access 1 Transfer Register Upper Data Word */
#define GTM_ARU_DBG_DATA1_H /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_DBG_DATA1_H*)0xF010029Cu)

/** \\brief  2A0, Debug Access 1 Transfer Register Lower Data Word */
#define GTM_ARU_DBG_DATA1_L /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_DBG_DATA1_L*)0xF01002A0u)

/** \\brief  2A8, ARU Interrupt Enable Register */
#define GTM_ARU_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_IRQ_EN*)0xF01002A8u)

/** \\brief  2AC, ARU_NEW_DATA_IRQ Forcing Interrupt Register */
#define GTM_ARU_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_IRQ_FORCINT*)0xF01002ACu)

/** \\brief  2B0, IRQ Mode Configuration Register */
#define GTM_ARU_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_IRQ_MODE*)0xF01002B0u)

/** \\brief  2A4, ARU Interrupt Notification Register */
#define GTM_ARU_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_IRQ_NOTIFY*)0xF01002A4u)

/** \\brief  D00C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM0_AGC_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF010D00Cu)

/** \\brief  D004, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM0_AGC_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF010D004u)

/** \\brief  D008, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM0_AGC_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF010D008u)

/** \\brief  D018, ATOM AGC Force Update Control Register */
#define GTM_ATOM0_AGC_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF010D018u)

/** \\brief  D000, ATOM AGC Global control register */
#define GTM_ATOM0_AGC_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF010D000u)

/** \\brief  D01C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM0_AGC_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF010D01Cu)

/** \\brief  D010, ATOM AGC Output Enable Control Register */
#define GTM_ATOM0_AGC_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF010D010u)

/** \\brief  D014, ATOM AGC Output Enable Status Register */
#define GTM_ATOM0_AGC_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF010D014u)

/** \\brief  D090, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D090u)

/** \\brief  D098, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D098u)

/** \\brief  D08C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D08Cu)

/** \\brief  D080, ATOM Channel Control Register */
#define GTM_ATOM0_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D080u)

/** \\brief  D0A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D0A4u)

/** \\brief  D0A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D0A8u)

/** \\brief  D0AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D0ACu)

/** \\brief  D0A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D0A0u)

/** \\brief  D088, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH0_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D088u)

/** \\brief  D094, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D094u)

/** \\brief  D09C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D09Cu)

/** \\brief  D084, ATOM Channel Status Register */
#define GTM_ATOM0_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D084u)

/** \\brief  D110, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D110u)

/** \\brief  D118, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D118u)

/** \\brief  D10C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D10Cu)

/** \\brief  D100, ATOM Channel Control Register */
#define GTM_ATOM0_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D100u)

/** \\brief  D124, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D124u)

/** \\brief  D128, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D128u)

/** \\brief  D12C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D12Cu)

/** \\brief  D120, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D120u)

/** \\brief  D108, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH1_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D108u)

/** \\brief  D114, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D114u)

/** \\brief  D11C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D11Cu)

/** \\brief  D104, ATOM Channel Status Register */
#define GTM_ATOM0_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D104u)

/** \\brief  D190, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D190u)

/** \\brief  D198, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D198u)

/** \\brief  D18C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D18Cu)

/** \\brief  D180, ATOM Channel Control Register */
#define GTM_ATOM0_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D180u)

/** \\brief  D1A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D1A4u)

/** \\brief  D1A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D1A8u)

/** \\brief  D1AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D1ACu)

/** \\brief  D1A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D1A0u)

/** \\brief  D188, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH2_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D188u)

/** \\brief  D194, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D194u)

/** \\brief  D19C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D19Cu)

/** \\brief  D184, ATOM Channel Status Register */
#define GTM_ATOM0_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D184u)

/** \\brief  D210, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D210u)

/** \\brief  D218, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D218u)

/** \\brief  D20C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D20Cu)

/** \\brief  D200, ATOM Channel Control Register */
#define GTM_ATOM0_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D200u)

/** \\brief  D224, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D224u)

/** \\brief  D228, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D228u)

/** \\brief  D22C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D22Cu)

/** \\brief  D220, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D220u)

/** \\brief  D208, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH3_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D208u)

/** \\brief  D214, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D214u)

/** \\brief  D21C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D21Cu)

/** \\brief  D204, ATOM Channel Status Register */
#define GTM_ATOM0_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D204u)

/** \\brief  D290, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D290u)

/** \\brief  D298, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D298u)

/** \\brief  D28C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D28Cu)

/** \\brief  D280, ATOM Channel Control Register */
#define GTM_ATOM0_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D280u)

/** \\brief  D2A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D2A4u)

/** \\brief  D2A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D2A8u)

/** \\brief  D2AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D2ACu)

/** \\brief  D2A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D2A0u)

/** \\brief  D288, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH4_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D288u)

/** \\brief  D294, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D294u)

/** \\brief  D29C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D29Cu)

/** \\brief  D284, ATOM Channel Status Register */
#define GTM_ATOM0_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D284u)

/** \\brief  D310, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D310u)

/** \\brief  D318, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D318u)

/** \\brief  D30C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D30Cu)

/** \\brief  D300, ATOM Channel Control Register */
#define GTM_ATOM0_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D300u)

/** \\brief  D324, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D324u)

/** \\brief  D328, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D328u)

/** \\brief  D32C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D32Cu)

/** \\brief  D320, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D320u)

/** \\brief  D308, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH5_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D308u)

/** \\brief  D314, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D314u)

/** \\brief  D31C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D31Cu)

/** \\brief  D304, ATOM Channel Status Register */
#define GTM_ATOM0_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D304u)

/** \\brief  D390, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D390u)

/** \\brief  D398, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D398u)

/** \\brief  D38C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D38Cu)

/** \\brief  D380, ATOM Channel Control Register */
#define GTM_ATOM0_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D380u)

/** \\brief  D3A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D3A4u)

/** \\brief  D3A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D3A8u)

/** \\brief  D3AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D3ACu)

/** \\brief  D3A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D3A0u)

/** \\brief  D388, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH6_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D388u)

/** \\brief  D394, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D394u)

/** \\brief  D39C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D39Cu)

/** \\brief  D384, ATOM Channel Status Register */
#define GTM_ATOM0_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D384u)

/** \\brief  D410, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D410u)

/** \\brief  D418, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D418u)

/** \\brief  D40C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D40Cu)

/** \\brief  D400, ATOM Channel Control Register */
#define GTM_ATOM0_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D400u)

/** \\brief  D424, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D424u)

/** \\brief  D428, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D428u)

/** \\brief  D42C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D42Cu)

/** \\brief  D420, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D420u)

/** \\brief  D408, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH7_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D408u)

/** \\brief  D414, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D414u)

/** \\brief  D41C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D41Cu)

/** \\brief  D404, ATOM Channel Status Register */
#define GTM_ATOM0_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D404u)

/** \\brief  D80C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM1_AGC_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF010D80Cu)

/** \\brief  D804, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM1_AGC_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF010D804u)

/** \\brief  D808, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM1_AGC_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF010D808u)

/** \\brief  D818, ATOM AGC Force Update Control Register */
#define GTM_ATOM1_AGC_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF010D818u)

/** \\brief  D800, ATOM AGC Global control register */
#define GTM_ATOM1_AGC_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF010D800u)

/** \\brief  D81C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM1_AGC_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF010D81Cu)

/** \\brief  D810, ATOM AGC Output Enable Control Register */
#define GTM_ATOM1_AGC_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF010D810u)

/** \\brief  D814, ATOM AGC Output Enable Status Register */
#define GTM_ATOM1_AGC_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF010D814u)

/** \\brief  D890, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D890u)

/** \\brief  D898, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D898u)

/** \\brief  D88C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D88Cu)

/** \\brief  D880, ATOM Channel Control Register */
#define GTM_ATOM1_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D880u)

/** \\brief  D8A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D8A4u)

/** \\brief  D8A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D8A8u)

/** \\brief  D8AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D8ACu)

/** \\brief  D8A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D8A0u)

/** \\brief  D888, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH0_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D888u)

/** \\brief  D894, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D894u)

/** \\brief  D89C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D89Cu)

/** \\brief  D884, ATOM Channel Status Register */
#define GTM_ATOM1_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D884u)

/** \\brief  D910, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D910u)

/** \\brief  D918, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D918u)

/** \\brief  D90C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D90Cu)

/** \\brief  D900, ATOM Channel Control Register */
#define GTM_ATOM1_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D900u)

/** \\brief  D924, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D924u)

/** \\brief  D928, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D928u)

/** \\brief  D92C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D92Cu)

/** \\brief  D920, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D920u)

/** \\brief  D908, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH1_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D908u)

/** \\brief  D914, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D914u)

/** \\brief  D91C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D91Cu)

/** \\brief  D904, ATOM Channel Status Register */
#define GTM_ATOM1_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D904u)

/** \\brief  D990, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D990u)

/** \\brief  D998, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D998u)

/** \\brief  D98C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D98Cu)

/** \\brief  D980, ATOM Channel Control Register */
#define GTM_ATOM1_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D980u)

/** \\brief  D9A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D9A4u)

/** \\brief  D9A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D9A8u)

/** \\brief  D9AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D9ACu)

/** \\brief  D9A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D9A0u)

/** \\brief  D988, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH2_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D988u)

/** \\brief  D994, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D994u)

/** \\brief  D99C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D99Cu)

/** \\brief  D984, ATOM Channel Status Register */
#define GTM_ATOM1_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D984u)

/** \\brief  DA10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010DA10u)

/** \\brief  DA18, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010DA18u)

/** \\brief  DA0C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010DA0Cu)

/** \\brief  DA00, ATOM Channel Control Register */
#define GTM_ATOM1_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010DA00u)

/** \\brief  DA24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010DA24u)

/** \\brief  DA28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010DA28u)

/** \\brief  DA2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010DA2Cu)

/** \\brief  DA20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010DA20u)

/** \\brief  DA08, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH3_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010DA08u)

/** \\brief  DA14, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010DA14u)

/** \\brief  DA1C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010DA1Cu)

/** \\brief  DA04, ATOM Channel Status Register */
#define GTM_ATOM1_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010DA04u)

/** \\brief  DA90, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010DA90u)

/** \\brief  DA98, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010DA98u)

/** \\brief  DA8C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010DA8Cu)

/** \\brief  DA80, ATOM Channel Control Register */
#define GTM_ATOM1_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010DA80u)

/** \\brief  DAA4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010DAA4u)

/** \\brief  DAA8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010DAA8u)

/** \\brief  DAAC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010DAACu)

/** \\brief  DAA0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010DAA0u)

/** \\brief  DA88, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH4_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010DA88u)

/** \\brief  DA94, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010DA94u)

/** \\brief  DA9C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010DA9Cu)

/** \\brief  DA84, ATOM Channel Status Register */
#define GTM_ATOM1_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010DA84u)

/** \\brief  DB10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010DB10u)

/** \\brief  DB18, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010DB18u)

/** \\brief  DB0C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010DB0Cu)

/** \\brief  DB00, ATOM Channel Control Register */
#define GTM_ATOM1_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010DB00u)

/** \\brief  DB24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010DB24u)

/** \\brief  DB28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010DB28u)

/** \\brief  DB2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010DB2Cu)

/** \\brief  DB20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010DB20u)

/** \\brief  DB08, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH5_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010DB08u)

/** \\brief  DB14, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010DB14u)

/** \\brief  DB1C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010DB1Cu)

/** \\brief  DB04, ATOM Channel Status Register */
#define GTM_ATOM1_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010DB04u)

/** \\brief  DB90, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010DB90u)

/** \\brief  DB98, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010DB98u)

/** \\brief  DB8C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010DB8Cu)

/** \\brief  DB80, ATOM Channel Control Register */
#define GTM_ATOM1_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010DB80u)

/** \\brief  DBA4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010DBA4u)

/** \\brief  DBA8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010DBA8u)

/** \\brief  DBAC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010DBACu)

/** \\brief  DBA0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010DBA0u)

/** \\brief  DB88, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH6_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010DB88u)

/** \\brief  DB94, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010DB94u)

/** \\brief  DB9C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010DB9Cu)

/** \\brief  DB84, ATOM Channel Status Register */
#define GTM_ATOM1_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010DB84u)

/** \\brief  DC10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010DC10u)

/** \\brief  DC18, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010DC18u)

/** \\brief  DC0C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010DC0Cu)

/** \\brief  DC00, ATOM Channel Control Register */
#define GTM_ATOM1_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010DC00u)

/** \\brief  DC24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010DC24u)

/** \\brief  DC28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010DC28u)

/** \\brief  DC2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010DC2Cu)

/** \\brief  DC20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010DC20u)

/** \\brief  DC08, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH7_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010DC08u)

/** \\brief  DC14, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010DC14u)

/** \\brief  DC1C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010DC1Cu)

/** \\brief  DC04, ATOM Channel Status Register */
#define GTM_ATOM1_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010DC04u)

/** \\brief  E00C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM2_AGC_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF010E00Cu)

/** \\brief  E004, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM2_AGC_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF010E004u)

/** \\brief  E008, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM2_AGC_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF010E008u)

/** \\brief  E018, ATOM AGC Force Update Control Register */
#define GTM_ATOM2_AGC_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF010E018u)

/** \\brief  E000, ATOM AGC Global control register */
#define GTM_ATOM2_AGC_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF010E000u)

/** \\brief  E01C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM2_AGC_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF010E01Cu)

/** \\brief  E010, ATOM AGC Output Enable Control Register */
#define GTM_ATOM2_AGC_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF010E010u)

/** \\brief  E014, ATOM AGC Output Enable Status Register */
#define GTM_ATOM2_AGC_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF010E014u)

/** \\brief  E090, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E090u)

/** \\brief  E098, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E098u)

/** \\brief  E08C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E08Cu)

/** \\brief  E080, ATOM Channel Control Register */
#define GTM_ATOM2_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E080u)

/** \\brief  E0A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E0A4u)

/** \\brief  E0A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E0A8u)

/** \\brief  E0AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E0ACu)

/** \\brief  E0A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E0A0u)

/** \\brief  E088, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH0_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E088u)

/** \\brief  E094, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E094u)

/** \\brief  E09C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E09Cu)

/** \\brief  E084, ATOM Channel Status Register */
#define GTM_ATOM2_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E084u)

/** \\brief  E110, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E110u)

/** \\brief  E118, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E118u)

/** \\brief  E10C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E10Cu)

/** \\brief  E100, ATOM Channel Control Register */
#define GTM_ATOM2_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E100u)

/** \\brief  E124, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E124u)

/** \\brief  E128, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E128u)

/** \\brief  E12C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E12Cu)

/** \\brief  E120, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E120u)

/** \\brief  E108, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH1_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E108u)

/** \\brief  E114, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E114u)

/** \\brief  E11C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E11Cu)

/** \\brief  E104, ATOM Channel Status Register */
#define GTM_ATOM2_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E104u)

/** \\brief  E190, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E190u)

/** \\brief  E198, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E198u)

/** \\brief  E18C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E18Cu)

/** \\brief  E180, ATOM Channel Control Register */
#define GTM_ATOM2_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E180u)

/** \\brief  E1A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E1A4u)

/** \\brief  E1A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E1A8u)

/** \\brief  E1AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E1ACu)

/** \\brief  E1A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E1A0u)

/** \\brief  E188, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH2_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E188u)

/** \\brief  E194, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E194u)

/** \\brief  E19C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E19Cu)

/** \\brief  E184, ATOM Channel Status Register */
#define GTM_ATOM2_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E184u)

/** \\brief  E210, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E210u)

/** \\brief  E218, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E218u)

/** \\brief  E20C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E20Cu)

/** \\brief  E200, ATOM Channel Control Register */
#define GTM_ATOM2_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E200u)

/** \\brief  E224, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E224u)

/** \\brief  E228, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E228u)

/** \\brief  E22C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E22Cu)

/** \\brief  E220, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E220u)

/** \\brief  E208, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH3_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E208u)

/** \\brief  E214, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E214u)

/** \\brief  E21C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E21Cu)

/** \\brief  E204, ATOM Channel Status Register */
#define GTM_ATOM2_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E204u)

/** \\brief  E290, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E290u)

/** \\brief  E298, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E298u)

/** \\brief  E28C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E28Cu)

/** \\brief  E280, ATOM Channel Control Register */
#define GTM_ATOM2_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E280u)

/** \\brief  E2A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E2A4u)

/** \\brief  E2A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E2A8u)

/** \\brief  E2AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E2ACu)

/** \\brief  E2A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E2A0u)

/** \\brief  E288, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH4_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E288u)

/** \\brief  E294, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E294u)

/** \\brief  E29C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E29Cu)

/** \\brief  E284, ATOM Channel Status Register */
#define GTM_ATOM2_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E284u)

/** \\brief  E310, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E310u)

/** \\brief  E318, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E318u)

/** \\brief  E30C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E30Cu)

/** \\brief  E300, ATOM Channel Control Register */
#define GTM_ATOM2_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E300u)

/** \\brief  E324, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E324u)

/** \\brief  E328, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E328u)

/** \\brief  E32C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E32Cu)

/** \\brief  E320, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E320u)

/** \\brief  E308, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH5_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E308u)

/** \\brief  E314, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E314u)

/** \\brief  E31C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E31Cu)

/** \\brief  E304, ATOM Channel Status Register */
#define GTM_ATOM2_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E304u)

/** \\brief  E390, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E390u)

/** \\brief  E398, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E398u)

/** \\brief  E38C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E38Cu)

/** \\brief  E380, ATOM Channel Control Register */
#define GTM_ATOM2_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E380u)

/** \\brief  E3A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E3A4u)

/** \\brief  E3A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E3A8u)

/** \\brief  E3AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E3ACu)

/** \\brief  E3A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E3A0u)

/** \\brief  E388, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH6_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E388u)

/** \\brief  E394, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E394u)

/** \\brief  E39C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E39Cu)

/** \\brief  E384, ATOM Channel Status Register */
#define GTM_ATOM2_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E384u)

/** \\brief  E410, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E410u)

/** \\brief  E418, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E418u)

/** \\brief  E40C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E40Cu)

/** \\brief  E400, ATOM Channel Control Register */
#define GTM_ATOM2_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E400u)

/** \\brief  E424, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E424u)

/** \\brief  E428, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E428u)

/** \\brief  E42C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E42Cu)

/** \\brief  E420, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E420u)

/** \\brief  E408, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH7_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E408u)

/** \\brief  E414, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E414u)

/** \\brief  E41C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E41Cu)

/** \\brief  E404, ATOM Channel Status Register */
#define GTM_ATOM2_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E404u)

/** \\brief  E80C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM3_AGC_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF010E80Cu)

/** \\brief  E804, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM3_AGC_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF010E804u)

/** \\brief  E808, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM3_AGC_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF010E808u)

/** \\brief  E818, ATOM AGC Force Update Control Register */
#define GTM_ATOM3_AGC_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF010E818u)

/** \\brief  E800, ATOM AGC Global control register */
#define GTM_ATOM3_AGC_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF010E800u)

/** \\brief  E81C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM3_AGC_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF010E81Cu)

/** \\brief  E810, ATOM AGC Output Enable Control Register */
#define GTM_ATOM3_AGC_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF010E810u)

/** \\brief  E814, ATOM AGC Output Enable Status Register */
#define GTM_ATOM3_AGC_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF010E814u)

/** \\brief  E890, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E890u)

/** \\brief  E898, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E898u)

/** \\brief  E88C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E88Cu)

/** \\brief  E880, ATOM Channel Control Register */
#define GTM_ATOM3_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E880u)

/** \\brief  E8A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E8A4u)

/** \\brief  E8A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E8A8u)

/** \\brief  E8AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E8ACu)

/** \\brief  E8A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E8A0u)

/** \\brief  E888, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH0_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E888u)

/** \\brief  E894, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E894u)

/** \\brief  E89C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E89Cu)

/** \\brief  E884, ATOM Channel Status Register */
#define GTM_ATOM3_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E884u)

/** \\brief  E910, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E910u)

/** \\brief  E918, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E918u)

/** \\brief  E90C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E90Cu)

/** \\brief  E900, ATOM Channel Control Register */
#define GTM_ATOM3_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E900u)

/** \\brief  E924, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E924u)

/** \\brief  E928, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E928u)

/** \\brief  E92C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E92Cu)

/** \\brief  E920, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E920u)

/** \\brief  E908, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH1_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E908u)

/** \\brief  E914, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E914u)

/** \\brief  E91C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E91Cu)

/** \\brief  E904, ATOM Channel Status Register */
#define GTM_ATOM3_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E904u)

/** \\brief  E990, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E990u)

/** \\brief  E998, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E998u)

/** \\brief  E98C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E98Cu)

/** \\brief  E980, ATOM Channel Control Register */
#define GTM_ATOM3_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E980u)

/** \\brief  E9A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E9A4u)

/** \\brief  E9A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E9A8u)

/** \\brief  E9AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E9ACu)

/** \\brief  E9A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E9A0u)

/** \\brief  E988, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH2_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E988u)

/** \\brief  E994, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E994u)

/** \\brief  E99C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E99Cu)

/** \\brief  E984, ATOM Channel Status Register */
#define GTM_ATOM3_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E984u)

/** \\brief  EA10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010EA10u)

/** \\brief  EA18, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010EA18u)

/** \\brief  EA0C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010EA0Cu)

/** \\brief  EA00, ATOM Channel Control Register */
#define GTM_ATOM3_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010EA00u)

/** \\brief  EA24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010EA24u)

/** \\brief  EA28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010EA28u)

/** \\brief  EA2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010EA2Cu)

/** \\brief  EA20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010EA20u)

/** \\brief  EA08, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH3_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010EA08u)

/** \\brief  EA14, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010EA14u)

/** \\brief  EA1C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010EA1Cu)

/** \\brief  EA04, ATOM Channel Status Register */
#define GTM_ATOM3_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010EA04u)

/** \\brief  EA90, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010EA90u)

/** \\brief  EA98, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010EA98u)

/** \\brief  EA8C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010EA8Cu)

/** \\brief  EA80, ATOM Channel Control Register */
#define GTM_ATOM3_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010EA80u)

/** \\brief  EAA4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010EAA4u)

/** \\brief  EAA8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010EAA8u)

/** \\brief  EAAC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010EAACu)

/** \\brief  EAA0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010EAA0u)

/** \\brief  EA88, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH4_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010EA88u)

/** \\brief  EA94, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010EA94u)

/** \\brief  EA9C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010EA9Cu)

/** \\brief  EA84, ATOM Channel Status Register */
#define GTM_ATOM3_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010EA84u)

/** \\brief  EB10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010EB10u)

/** \\brief  EB18, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010EB18u)

/** \\brief  EB0C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010EB0Cu)

/** \\brief  EB00, ATOM Channel Control Register */
#define GTM_ATOM3_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010EB00u)

/** \\brief  EB24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010EB24u)

/** \\brief  EB28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010EB28u)

/** \\brief  EB2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010EB2Cu)

/** \\brief  EB20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010EB20u)

/** \\brief  EB08, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH5_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010EB08u)

/** \\brief  EB14, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010EB14u)

/** \\brief  EB1C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010EB1Cu)

/** \\brief  EB04, ATOM Channel Status Register */
#define GTM_ATOM3_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010EB04u)

/** \\brief  EB90, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010EB90u)

/** \\brief  EB98, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010EB98u)

/** \\brief  EB8C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010EB8Cu)

/** \\brief  EB80, ATOM Channel Control Register */
#define GTM_ATOM3_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010EB80u)

/** \\brief  EBA4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010EBA4u)

/** \\brief  EBA8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010EBA8u)

/** \\brief  EBAC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010EBACu)

/** \\brief  EBA0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010EBA0u)

/** \\brief  EB88, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH6_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010EB88u)

/** \\brief  EB94, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010EB94u)

/** \\brief  EB9C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010EB9Cu)

/** \\brief  EB84, ATOM Channel Status Register */
#define GTM_ATOM3_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010EB84u)

/** \\brief  EC10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010EC10u)

/** \\brief  EC18, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010EC18u)

/** \\brief  EC0C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010EC0Cu)

/** \\brief  EC00, ATOM Channel Control Register */
#define GTM_ATOM3_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010EC00u)

/** \\brief  EC24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010EC24u)

/** \\brief  EC28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010EC28u)

/** \\brief  EC2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010EC2Cu)

/** \\brief  EC20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010EC20u)

/** \\brief  EC08, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH7_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010EC08u)

/** \\brief  EC14, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010EC14u)

/** \\brief  EC1C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010EC1Cu)

/** \\brief  EC04, ATOM Channel Status Register */
#define GTM_ATOM3_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010EC04u)

/** \\brief  F00C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM4_AGC_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF010F00Cu)

/** \\brief  F004, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM4_AGC_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF010F004u)

/** \\brief  F008, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM4_AGC_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF010F008u)

/** \\brief  F018, ATOM AGC Force Update Control Register */
#define GTM_ATOM4_AGC_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF010F018u)

/** \\brief  F000, ATOM AGC Global control register */
#define GTM_ATOM4_AGC_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF010F000u)

/** \\brief  F01C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM4_AGC_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF010F01Cu)

/** \\brief  F010, ATOM AGC Output Enable Control Register */
#define GTM_ATOM4_AGC_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF010F010u)

/** \\brief  F014, ATOM AGC Output Enable Status Register */
#define GTM_ATOM4_AGC_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF010F014u)

/** \\brief  F090, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F090u)

/** \\brief  F098, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F098u)

/** \\brief  F08C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F08Cu)

/** \\brief  F080, ATOM Channel Control Register */
#define GTM_ATOM4_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F080u)

/** \\brief  F0A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F0A4u)

/** \\brief  F0A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F0A8u)

/** \\brief  F0AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F0ACu)

/** \\brief  F0A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F0A0u)

/** \\brief  F088, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH0_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F088u)

/** \\brief  F094, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F094u)

/** \\brief  F09C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F09Cu)

/** \\brief  F084, ATOM Channel Status Register */
#define GTM_ATOM4_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F084u)

/** \\brief  F110, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F110u)

/** \\brief  F118, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F118u)

/** \\brief  F10C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F10Cu)

/** \\brief  F100, ATOM Channel Control Register */
#define GTM_ATOM4_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F100u)

/** \\brief  F124, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F124u)

/** \\brief  F128, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F128u)

/** \\brief  F12C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F12Cu)

/** \\brief  F120, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F120u)

/** \\brief  F108, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH1_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F108u)

/** \\brief  F114, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F114u)

/** \\brief  F11C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F11Cu)

/** \\brief  F104, ATOM Channel Status Register */
#define GTM_ATOM4_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F104u)

/** \\brief  F190, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F190u)

/** \\brief  F198, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F198u)

/** \\brief  F18C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F18Cu)

/** \\brief  F180, ATOM Channel Control Register */
#define GTM_ATOM4_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F180u)

/** \\brief  F1A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F1A4u)

/** \\brief  F1A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F1A8u)

/** \\brief  F1AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F1ACu)

/** \\brief  F1A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F1A0u)

/** \\brief  F188, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH2_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F188u)

/** \\brief  F194, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F194u)

/** \\brief  F19C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F19Cu)

/** \\brief  F184, ATOM Channel Status Register */
#define GTM_ATOM4_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F184u)

/** \\brief  F210, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F210u)

/** \\brief  F218, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F218u)

/** \\brief  F20C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F20Cu)

/** \\brief  F200, ATOM Channel Control Register */
#define GTM_ATOM4_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F200u)

/** \\brief  F224, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F224u)

/** \\brief  F228, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F228u)

/** \\brief  F22C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F22Cu)

/** \\brief  F220, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F220u)

/** \\brief  F208, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH3_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F208u)

/** \\brief  F214, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F214u)

/** \\brief  F21C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F21Cu)

/** \\brief  F204, ATOM Channel Status Register */
#define GTM_ATOM4_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F204u)

/** \\brief  F290, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F290u)

/** \\brief  F298, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F298u)

/** \\brief  F28C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F28Cu)

/** \\brief  F280, ATOM Channel Control Register */
#define GTM_ATOM4_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F280u)

/** \\brief  F2A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F2A4u)

/** \\brief  F2A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F2A8u)

/** \\brief  F2AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F2ACu)

/** \\brief  F2A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F2A0u)

/** \\brief  F288, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH4_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F288u)

/** \\brief  F294, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F294u)

/** \\brief  F29C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F29Cu)

/** \\brief  F284, ATOM Channel Status Register */
#define GTM_ATOM4_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F284u)

/** \\brief  F310, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F310u)

/** \\brief  F318, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F318u)

/** \\brief  F30C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F30Cu)

/** \\brief  F300, ATOM Channel Control Register */
#define GTM_ATOM4_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F300u)

/** \\brief  F324, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F324u)

/** \\brief  F328, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F328u)

/** \\brief  F32C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F32Cu)

/** \\brief  F320, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F320u)

/** \\brief  F308, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH5_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F308u)

/** \\brief  F314, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F314u)

/** \\brief  F31C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F31Cu)

/** \\brief  F304, ATOM Channel Status Register */
#define GTM_ATOM4_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F304u)

/** \\brief  F390, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F390u)

/** \\brief  F398, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F398u)

/** \\brief  F38C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F38Cu)

/** \\brief  F380, ATOM Channel Control Register */
#define GTM_ATOM4_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F380u)

/** \\brief  F3A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F3A4u)

/** \\brief  F3A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F3A8u)

/** \\brief  F3AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F3ACu)

/** \\brief  F3A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F3A0u)

/** \\brief  F388, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH6_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F388u)

/** \\brief  F394, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F394u)

/** \\brief  F39C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F39Cu)

/** \\brief  F384, ATOM Channel Status Register */
#define GTM_ATOM4_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F384u)

/** \\brief  F410, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F410u)

/** \\brief  F418, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F418u)

/** \\brief  F40C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F40Cu)

/** \\brief  F400, ATOM Channel Control Register */
#define GTM_ATOM4_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F400u)

/** \\brief  F424, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F424u)

/** \\brief  F428, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F428u)

/** \\brief  F42C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F42Cu)

/** \\brief  F420, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F420u)

/** \\brief  F408, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH7_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F408u)

/** \\brief  F414, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F414u)

/** \\brief  F41C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F41Cu)

/** \\brief  F404, ATOM Channel Status Register */
#define GTM_ATOM4_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F404u)

/** \\brief  464, BRC Interrupt Enable Register */
#define GTM_BRC_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_IRQ_EN*)0xF0100464u)

/** \\brief  468, BRC_DEST_ERR Forcing Interrupt Register */
#define GTM_BRC_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_IRQ_FORCINT*)0xF0100468u)

/** \\brief  46C, BRC IRQ Mode Configuration Register */
#define GTM_BRC_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_IRQ_MODE*)0xF010046Cu)

/** \\brief  460, BRC Interrupt Notification Register */
#define GTM_BRC_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_IRQ_NOTIFY*)0xF0100460u)

/** \\brief  470, BRC Software Reset Register */
#define GTM_BRC_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_RST*)0xF0100470u)

/** \\brief  400, Read Address For Input Channel */
#define GTM_BRC_SRC0_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100400u)

/** \\brief  404, Destination Channels For Input Channel */
#define GTM_BRC_SRC0_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100404u)

/** \\brief  450, Read Address For Input Channel */
#define GTM_BRC_SRC10_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100450u)

/** \\brief  454, Destination Channels For Input Channel */
#define GTM_BRC_SRC10_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100454u)

/** \\brief  458, Read Address For Input Channel */
#define GTM_BRC_SRC11_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100458u)

/** \\brief  45C, Destination Channels For Input Channel */
#define GTM_BRC_SRC11_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010045Cu)

/** \\brief  408, Read Address For Input Channel */
#define GTM_BRC_SRC1_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100408u)

/** \\brief  40C, Destination Channels For Input Channel */
#define GTM_BRC_SRC1_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010040Cu)

/** \\brief  410, Read Address For Input Channel */
#define GTM_BRC_SRC2_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100410u)

/** \\brief  414, Destination Channels For Input Channel */
#define GTM_BRC_SRC2_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100414u)

/** \\brief  418, Read Address For Input Channel */
#define GTM_BRC_SRC3_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100418u)

/** \\brief  41C, Destination Channels For Input Channel */
#define GTM_BRC_SRC3_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010041Cu)

/** \\brief  420, Read Address For Input Channel */
#define GTM_BRC_SRC4_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100420u)

/** \\brief  424, Destination Channels For Input Channel */
#define GTM_BRC_SRC4_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100424u)

/** \\brief  428, Read Address For Input Channel */
#define GTM_BRC_SRC5_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100428u)

/** \\brief  42C, Destination Channels For Input Channel */
#define GTM_BRC_SRC5_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010042Cu)

/** \\brief  430, Read Address For Input Channel */
#define GTM_BRC_SRC6_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100430u)

/** \\brief  434, Destination Channels For Input Channel */
#define GTM_BRC_SRC6_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100434u)

/** \\brief  438, Read Address For Input Channel */
#define GTM_BRC_SRC7_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100438u)

/** \\brief  43C, Destination Channels For Input Channel */
#define GTM_BRC_SRC7_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010043Cu)

/** \\brief  440, Read Address For Input Channel */
#define GTM_BRC_SRC8_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100440u)

/** \\brief  444, Destination Channels For Input Channel */
#define GTM_BRC_SRC8_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100444u)

/** \\brief  448, Read Address For Input Channel */
#define GTM_BRC_SRC9_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100448u)

/** \\brief  44C, Destination Channels For Input Channel */
#define GTM_BRC_SRC9_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010044Cu)

/** \\brief  30, GTM to SPB BRIDGE MODE */
#define GTM_BRIDGE_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_BRIDGE_MODE*)0xF0100030u)

/** \\brief  34, GTM to SPB BRIDGE PTR1 */
#define GTM_BRIDGE_PTR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_BRIDGE_PTR1*)0xF0100034u)

/** \\brief  38, GTM to SPB BRIDGE PTR2 */
#define GTM_BRIDGE_PTR2 /*lint --e(923)*/ (*(volatile Ifx_GTM_BRIDGE_PTR2*)0xF0100038u)

/** \\brief  9FD00, Clock Control Register */
#define GTM_CLC /*lint --e(923)*/ (*(volatile Ifx_GTM_CLC*)0xF019FD00u)

/** \\brief  200, CMP Comparator Enable Register */
#define GTM_CMP_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_CMP_EN*)0xF0100200u)

/** \\brief  208, CMP Interrupt Enable Register */
#define GTM_CMP_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_CMP_IRQ_EN*)0xF0100208u)

/** \\brief  20C, CMP Interrupt Force Register */
#define GTM_CMP_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_CMP_IRQ_FORCINT*)0xF010020Cu)

/** \\brief  210, CMP IRQ Mode Configuration Register */
#define GTM_CMP_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_CMP_IRQ_MODE*)0xF0100210u)

/** \\brief  204, CMP Event Notification Register */
#define GTM_CMP_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_CMP_IRQ_NOTIFY*)0xF0100204u)

/** \\brief  30C, CMU Control For Clock Source Register */
#define GTM_CMU_CLK0_40_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK0_4_CTRL*)0xF010030Cu)

/** Alias (User Manual Name) for GTM_CMU_CLK0_40_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK0_40_CTRL.
*/
#define	GTM_CMU_CLK_0_CTRL	(GTM_CMU_CLK0_40_CTRL)

/** \\brief  310, CMU Control For Clock Source Register */
#define GTM_CMU_CLK0_41_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK0_4_CTRL*)0xF0100310u)

/** Alias (User Manual Name) for GTM_CMU_CLK0_41_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK0_41_CTRL.
*/
#define	GTM_CMU_CLK_1_CTRL	(GTM_CMU_CLK0_41_CTRL)

/** \\brief  314, CMU Control For Clock Source Register */
#define GTM_CMU_CLK0_42_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK0_4_CTRL*)0xF0100314u)

/** Alias (User Manual Name) for GTM_CMU_CLK0_42_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK0_42_CTRL.
*/
#define	GTM_CMU_CLK_2_CTRL	(GTM_CMU_CLK0_42_CTRL)

/** \\brief  318, CMU Control For Clock Source Register */
#define GTM_CMU_CLK0_43_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK0_4_CTRL*)0xF0100318u)

/** Alias (User Manual Name) for GTM_CMU_CLK0_43_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK0_43_CTRL.
*/
#define	GTM_CMU_CLK_3_CTRL	(GTM_CMU_CLK0_43_CTRL)

/** \\brief  31C, CMU Control For Clock Source Register */
#define GTM_CMU_CLK0_44_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK0_4_CTRL*)0xF010031Cu)

/** Alias (User Manual Name) for GTM_CMU_CLK0_44_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK0_44_CTRL.
*/
#define	GTM_CMU_CLK_4_CTRL	(GTM_CMU_CLK0_44_CTRL)

/** \\brief  320, CMU Control For Clock Source 5 Register */
#define GTM_CMU_CLK_5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK_5_CTRL*)0xF0100320u)

/** \\brief  324, CMU Control For Clock Source 6 Register */
#define GTM_CMU_CLK_6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK_6_CTRL*)0xF0100324u)

/** \\brief  328, CMU Control For Clock Source 7 Register */
#define GTM_CMU_CLK_7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK_7_CTRL*)0xF0100328u)

/** \\brief  300, CMU Clock Enable Register */
#define GTM_CMU_CLK_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK_EN*)0xF0100300u)

/** \\brief  330, CMU External Clock Control Denominator Register */
#define GTM_CMU_ECLK0_DEN /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_ECLK_DEN*)0xF0100330u)

/** Alias (User Manual Name) for GTM_CMU_ECLK0_DEN.
* To use register names with standard convension, please use GTM_CMU_ECLK0_DEN.
*/
#define	GTM_CMU_ECLK_0_DEN	(GTM_CMU_ECLK0_DEN)

/** \\brief  32C, CMU External Clock Control Numerator Register */
#define GTM_CMU_ECLK0_NUM /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_ECLK_NUM*)0xF010032Cu)

/** Alias (User Manual Name) for GTM_CMU_ECLK0_NUM.
* To use register names with standard convension, please use GTM_CMU_ECLK0_NUM.
*/
#define	GTM_CMU_ECLK_0_NUM	(GTM_CMU_ECLK0_NUM)

/** \\brief  338, CMU External Clock Control Denominator Register */
#define GTM_CMU_ECLK1_DEN /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_ECLK_DEN*)0xF0100338u)

/** Alias (User Manual Name) for GTM_CMU_ECLK1_DEN.
* To use register names with standard convension, please use GTM_CMU_ECLK1_DEN.
*/
#define	GTM_CMU_ECLK_1_DEN	(GTM_CMU_ECLK1_DEN)

/** \\brief  334, CMU External Clock Control Numerator Register */
#define GTM_CMU_ECLK1_NUM /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_ECLK_NUM*)0xF0100334u)

/** Alias (User Manual Name) for GTM_CMU_ECLK1_NUM.
* To use register names with standard convension, please use GTM_CMU_ECLK1_NUM.
*/
#define	GTM_CMU_ECLK_1_NUM	(GTM_CMU_ECLK1_NUM)

/** \\brief  340, CMU External Clock Control Denominator Register */
#define GTM_CMU_ECLK2_DEN /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_ECLK_DEN*)0xF0100340u)

/** Alias (User Manual Name) for GTM_CMU_ECLK2_DEN.
* To use register names with standard convension, please use GTM_CMU_ECLK2_DEN.
*/
#define	GTM_CMU_ECLK_2_DEN	(GTM_CMU_ECLK2_DEN)

/** \\brief  33C, CMU External Clock Control Numerator Register */
#define GTM_CMU_ECLK2_NUM /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_ECLK_NUM*)0xF010033Cu)

/** Alias (User Manual Name) for GTM_CMU_ECLK2_NUM.
* To use register names with standard convension, please use GTM_CMU_ECLK2_NUM.
*/
#define	GTM_CMU_ECLK_2_NUM	(GTM_CMU_ECLK2_NUM)

/** \\brief  308, CMU Global Clock Control Denominator Register */
#define GTM_CMU_GCLK_DEN /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_GCLK_DEN*)0xF0100308u)

/** \\brief  304, CMU Global Clock Control Numerator Register */
#define GTM_CMU_GCLK_NUM /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_GCLK_NUM*)0xF0100304u)

/** \\brief  8, GTM Global Control Register */
#define GTM_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CTRL*)0xF0100008u)

/** \\brief  281C0, Control Bits For Actions Register i */
#define GTM_DPLL_ACB0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF01281C0u)

/** Alias (User Manual Name) for GTM_DPLL_ACB0.
* To use register names with standard convension, please use GTM_DPLL_ACB0.
*/
#define	GTM_DPLL_ACB_0	(GTM_DPLL_ACB0)

/** \\brief  281C4, Control Bits For Actions Register i */
#define GTM_DPLL_ACB1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF01281C4u)

/** Alias (User Manual Name) for GTM_DPLL_ACB1.
* To use register names with standard convension, please use GTM_DPLL_ACB1.
*/
#define	GTM_DPLL_ACB_1	(GTM_DPLL_ACB1)

/** \\brief  281C8, Control Bits For Actions Register i */
#define GTM_DPLL_ACB2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF01281C8u)

/** Alias (User Manual Name) for GTM_DPLL_ACB2.
* To use register names with standard convension, please use GTM_DPLL_ACB2.
*/
#define	GTM_DPLL_ACB_2	(GTM_DPLL_ACB2)

/** \\brief  281CC, Control Bits For Actions Register i */
#define GTM_DPLL_ACB3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF01281CCu)

/** Alias (User Manual Name) for GTM_DPLL_ACB3.
* To use register names with standard convension, please use GTM_DPLL_ACB3.
*/
#define	GTM_DPLL_ACB_3	(GTM_DPLL_ACB3)

/** \\brief  281D0, Control Bits For Actions Register i */
#define GTM_DPLL_ACB4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF01281D0u)

/** Alias (User Manual Name) for GTM_DPLL_ACB4.
* To use register names with standard convension, please use GTM_DPLL_ACB4.
*/
#define	GTM_DPLL_ACB_4	(GTM_DPLL_ACB4)

/** \\brief  281D4, Control Bits For Actions Register i */
#define GTM_DPLL_ACB5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF01281D4u)

/** Alias (User Manual Name) for GTM_DPLL_ACB5.
* To use register names with standard convension, please use GTM_DPLL_ACB5.
*/
#define	GTM_DPLL_ACB_5	(GTM_DPLL_ACB5)

/** \\brief  28018, DPLL ACTION Status Register With Shadow Register */
#define GTM_DPLL_ACT_STA /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ACT_STA*)0xF0128018u)

/** \\brief  280C8, DPLL Direct Load Input Value for SUB_INC1 */
#define GTM_DPLL_ADD_IN_LD1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADD_IN_LD1*)0xF01280C8u)

/** Alias (User Manual Name) for GTM_DPLL_ADD_IN_LD1.
* To use register names with standard convension, please use GTM_DPLL_ADD_IN_LD1.
*/
#define	GTM_ADD_IN_LD1	(GTM_DPLL_ADD_IN_LD1)

/** \\brief  280CC, DPLL Direct Load Input Value for SUB_INC1 */
#define GTM_DPLL_ADD_IN_LD2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADD_IN_LD2*)0xF01280CCu)

/** Alias (User Manual Name) for GTM_DPLL_ADD_IN_LD2.
* To use register names with standard convension, please use GTM_DPLL_ADD_IN_LD2.
*/
#define	GTM_ADD_IN_LD2	(GTM_DPLL_ADD_IN_LD2)

/** \\brief  28020, DPLL Address Offset Register For APT In RAM Region 2 */
#define GTM_DPLL_AOSV_2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_AOSV_2*)0xF0128020u)

/** \\brief  28028, DPLL Actual RAM Pointer to RAM Regions 1c1, 1c2 and 1c4 */
#define GTM_DPLL_APS /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_APS*)0xF0128028u)

/** \\brief  28030, DPLL Actual RAM Pointer to RAM Region 1c3 */
#define GTM_DPLL_APS_1C3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_APS_1c3*)0xF0128030u)

/** Alias (User Manual Name) for GTM_DPLL_APS_1C3.
* To use register names with standard convension, please use GTM_DPLL_APS_1C3.
*/
#define	GTM_DPLL_APS_1c3	(GTM_DPLL_APS_1C3)

/** \\brief  280BC, DPLL Old RAM Pointer and Offset Value for STATE */
#define GTM_DPLL_APS_SYNC /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_APS_SYNC*)0xF01280BCu)

/** \\brief  28024, DPLL Actual RAM Pointer to RAM Regions 2a, b and d */
#define GTM_DPLL_APT /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_APT*)0xF0128024u)

/** \\brief  2802C, DPLL Actual RAM Pointer to RAM Region 2c */
#define GTM_DPLL_APT_2C /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_APT_2c*)0xF012802Cu)

/** Alias (User Manual Name) for GTM_DPLL_APT_2C.
* To use register names with standard convension, please use GTM_DPLL_APT_2C.
*/
#define	GTM_DPLL_APT_2c	(GTM_DPLL_APT_2C)

/** \\brief  280B8, DPLL Old RAM Pointer and Offset Value for TRIGGER */
#define GTM_DPLL_APT_SYNC /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_APT_SYNC*)0xF01280B8u)

/** \\brief  281EC, DPLL Control 1 Shadow STATE Register */
#define GTM_DPLL_CRTL_1_SHADOW_STATE /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CRTL_1_SHADOW_STATE*)0xF01281ECu)

/** \\brief  28000, DPLL Control Register 0 */
#define GTM_DPLL_CTRL_0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_0*)0xF0128000u)

/** \\brief  281E4, DPLL Control 0 Shadow STATE Register */
#define GTM_DPLL_CTRL_0_SHADOW_STATE /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE*)0xF01281E4u)

/** \\brief  281E0, DPLL Control0 Shadow Trigger Register */
#define GTM_DPLL_CTRL_0_SHADOW_TRIGGER /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER*)0xF01281E0u)

/** \\brief  28004, DPLL Control Register 1 */
#define GTM_DPLL_CTRL_1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_1*)0xF0128004u)

/** \\brief  281E8, DPLL Control 1 Shadow TRIGGER Register */
#define GTM_DPLL_CTRL_1_SHADOW_TRIGGER /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER*)0xF01281E8u)

/** \\brief  28008, DPLL Control Register 2 */
#define GTM_DPLL_CTRL_2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_2*)0xF0128008u)

/** \\brief  2800C, DPLL Control Register 3 */
#define GTM_DPLL_CTRL_3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_3*)0xF012800Cu)

/** \\brief  28010, DPLL Control Register 4 */
#define GTM_DPLL_CTRL_4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_4*)0xF0128010u)

/** \\brief  28050, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128050u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR0.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR0.
*/
#define	GTM_DPLL_ID_PMTR_0	(GTM_DPLL_ID_PMTR0)

/** \\brief  28054, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128054u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR1.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR1.
*/
#define	GTM_DPLL_ID_PMTR_1	(GTM_DPLL_ID_PMTR1)

/** \\brief  28078, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR10 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128078u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR10.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR10.
*/
#define	GTM_DPLL_ID_PMTR_10	(GTM_DPLL_ID_PMTR10)

/** \\brief  2807C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR11 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012807Cu)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR11.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR11.
*/
#define	GTM_DPLL_ID_PMTR_11	(GTM_DPLL_ID_PMTR11)

/** \\brief  28080, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR12 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128080u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR12.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR12.
*/
#define	GTM_DPLL_ID_PMTR_12	(GTM_DPLL_ID_PMTR12)

/** \\brief  28084, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR13 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128084u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR13.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR13.
*/
#define	GTM_DPLL_ID_PMTR_13	(GTM_DPLL_ID_PMTR13)

/** \\brief  28088, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR14 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128088u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR14.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR14.
*/
#define	GTM_DPLL_ID_PMTR_14	(GTM_DPLL_ID_PMTR14)

/** \\brief  2808C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR15 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012808Cu)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR15.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR15.
*/
#define	GTM_DPLL_ID_PMTR_15	(GTM_DPLL_ID_PMTR15)

/** \\brief  28090, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR16 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128090u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR16.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR16.
*/
#define	GTM_DPLL_ID_PMTR_16	(GTM_DPLL_ID_PMTR16)

/** \\brief  28094, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR17 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128094u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR17.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR17.
*/
#define	GTM_DPLL_ID_PMTR_17	(GTM_DPLL_ID_PMTR17)

/** \\brief  28098, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR18 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128098u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR18.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR18.
*/
#define	GTM_DPLL_ID_PMTR_18	(GTM_DPLL_ID_PMTR18)

/** \\brief  2809C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR19 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012809Cu)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR19.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR19.
*/
#define	GTM_DPLL_ID_PMTR_19	(GTM_DPLL_ID_PMTR19)

/** \\brief  28058, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128058u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR2.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR2.
*/
#define	GTM_DPLL_ID_PMTR_2	(GTM_DPLL_ID_PMTR2)

/** \\brief  280A0, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR20 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF01280A0u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR20.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR20.
*/
#define	GTM_DPLL_ID_PMTR_20	(GTM_DPLL_ID_PMTR20)

/** \\brief  280A4, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR21 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF01280A4u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR21.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR21.
*/
#define	GTM_DPLL_ID_PMTR_21	(GTM_DPLL_ID_PMTR21)

/** \\brief  280A8, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR22 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF01280A8u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR22.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR22.
*/
#define	GTM_DPLL_ID_PMTR_22	(GTM_DPLL_ID_PMTR22)

/** \\brief  280AC, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR23 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF01280ACu)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR23.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR23.
*/
#define	GTM_DPLL_ID_PMTR_23	(GTM_DPLL_ID_PMTR23)

/** \\brief  2805C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012805Cu)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR3.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR3.
*/
#define	GTM_DPLL_ID_PMTR_3	(GTM_DPLL_ID_PMTR3)

/** \\brief  28060, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128060u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR4.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR4.
*/
#define	GTM_DPLL_ID_PMTR_4	(GTM_DPLL_ID_PMTR4)

/** \\brief  28064, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128064u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR5.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR5.
*/
#define	GTM_DPLL_ID_PMTR_5	(GTM_DPLL_ID_PMTR5)

/** \\brief  28068, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR6 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128068u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR6.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR6.
*/
#define	GTM_DPLL_ID_PMTR_6	(GTM_DPLL_ID_PMTR6)

/** \\brief  2806C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR7 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012806Cu)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR7.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR7.
*/
#define	GTM_DPLL_ID_PMTR_7	(GTM_DPLL_ID_PMTR7)

/** \\brief  28070, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR8 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128070u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR8.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR8.
*/
#define	GTM_DPLL_ID_PMTR_8	(GTM_DPLL_ID_PMTR8)

/** \\brief  28074, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR9 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128074u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR9.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR9.
*/
#define	GTM_DPLL_ID_PMTR_9	(GTM_DPLL_ID_PMTR9)

/** \\brief  280B0, DPLL Counter for Pulses for TBU_TS1 to be sent in Automatic
 * End Mode */
#define GTM_DPLL_INC_CNT1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_INC_CNT1*)0xF01280B0u)

/** \\brief  280B4, DPLL Counter for Pulses for TBU_TS2 to be sent in Automatic
 * End Mode when SMC=RMO=1 */
#define GTM_DPLL_INC_CNT2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_INC_CNT2*)0xF01280B4u)

/** \\brief  28044, DPLL Interrupt Enable Register */
#define GTM_DPLL_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_IRQ_EN*)0xF0128044u)

/** \\brief  28048, DPLL Interrupt Force Register */
#define GTM_DPLL_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_IRQ_FORCINT*)0xF0128048u)

/** \\brief  2804C, DPLL Interrupt Mode Register */
#define GTM_DPLL_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_IRQ_MODE*)0xF012804Cu)

/** \\brief  28040, DPLL Interrupt Notification Register */
#define GTM_DPLL_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_IRQ_NOTIFY*)0xF0128040u)

/** \\brief  2803C, DPLL Number of Active TRIGGER Events to Interrupt */
#define GTM_DPLL_NTI_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NTI_CNT*)0xF012803Cu)

/** \\brief  28038, DPLL Number of Recent STATE Events Used for Calculations */
#define GTM_DPLL_NUSC /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NUSC*)0xF0128038u)

/** \\brief  28034, DPLL Number of Recent TRIGGER Events Used for Calculations */
#define GTM_DPLL_NUTC /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NUTC*)0xF0128034u)

/** \\brief  2801C, DPLL Offset And Switch Old/New Address Register */
#define GTM_DPLL_OSW /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_OSW*)0xF012801Cu)

/** \\brief  28160, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128160u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC0.
* To use register names with standard convension, please use GTM_DPLL_PSAC0.
*/
#define	GTM_DPLL_PSAC_0	(GTM_DPLL_PSAC0)

/** \\brief  28164, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128164u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC1.
* To use register names with standard convension, please use GTM_DPLL_PSAC1.
*/
#define	GTM_DPLL_PSAC_1	(GTM_DPLL_PSAC1)

/** \\brief  28188, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC10 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128188u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC10.
* To use register names with standard convension, please use GTM_DPLL_PSAC10.
*/
#define	GTM_DPLL_PSAC_10	(GTM_DPLL_PSAC10)

/** \\brief  2818C, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC11 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF012818Cu)

/** Alias (User Manual Name) for GTM_DPLL_PSAC11.
* To use register names with standard convension, please use GTM_DPLL_PSAC11.
*/
#define	GTM_DPLL_PSAC_11	(GTM_DPLL_PSAC11)

/** \\brief  28190, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC12 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128190u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC12.
* To use register names with standard convension, please use GTM_DPLL_PSAC12.
*/
#define	GTM_DPLL_PSAC_12	(GTM_DPLL_PSAC12)

/** \\brief  28194, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC13 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128194u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC13.
* To use register names with standard convension, please use GTM_DPLL_PSAC13.
*/
#define	GTM_DPLL_PSAC_13	(GTM_DPLL_PSAC13)

/** \\brief  28198, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC14 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128198u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC14.
* To use register names with standard convension, please use GTM_DPLL_PSAC14.
*/
#define	GTM_DPLL_PSAC_14	(GTM_DPLL_PSAC14)

/** \\brief  2819C, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC15 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF012819Cu)

/** Alias (User Manual Name) for GTM_DPLL_PSAC15.
* To use register names with standard convension, please use GTM_DPLL_PSAC15.
*/
#define	GTM_DPLL_PSAC_15	(GTM_DPLL_PSAC15)

/** \\brief  281A0, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC16 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF01281A0u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC16.
* To use register names with standard convension, please use GTM_DPLL_PSAC16.
*/
#define	GTM_DPLL_PSAC_16	(GTM_DPLL_PSAC16)

/** \\brief  281A4, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC17 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF01281A4u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC17.
* To use register names with standard convension, please use GTM_DPLL_PSAC17.
*/
#define	GTM_DPLL_PSAC_17	(GTM_DPLL_PSAC17)

/** \\brief  281A8, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC18 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF01281A8u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC18.
* To use register names with standard convension, please use GTM_DPLL_PSAC18.
*/
#define	GTM_DPLL_PSAC_18	(GTM_DPLL_PSAC18)

/** \\brief  281AC, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC19 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF01281ACu)

/** Alias (User Manual Name) for GTM_DPLL_PSAC19.
* To use register names with standard convension, please use GTM_DPLL_PSAC19.
*/
#define	GTM_DPLL_PSAC_19	(GTM_DPLL_PSAC19)

/** \\brief  28168, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128168u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC2.
* To use register names with standard convension, please use GTM_DPLL_PSAC2.
*/
#define	GTM_DPLL_PSAC_2	(GTM_DPLL_PSAC2)

/** \\brief  281B0, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC20 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF01281B0u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC20.
* To use register names with standard convension, please use GTM_DPLL_PSAC20.
*/
#define	GTM_DPLL_PSAC_20	(GTM_DPLL_PSAC20)

/** \\brief  281B4, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC21 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF01281B4u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC21.
* To use register names with standard convension, please use GTM_DPLL_PSAC21.
*/
#define	GTM_DPLL_PSAC_21	(GTM_DPLL_PSAC21)

/** \\brief  281B8, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC22 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF01281B8u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC22.
* To use register names with standard convension, please use GTM_DPLL_PSAC22.
*/
#define	GTM_DPLL_PSAC_22	(GTM_DPLL_PSAC22)

/** \\brief  281BC, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC23 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF01281BCu)

/** Alias (User Manual Name) for GTM_DPLL_PSAC23.
* To use register names with standard convension, please use GTM_DPLL_PSAC23.
*/
#define	GTM_DPLL_PSAC_23	(GTM_DPLL_PSAC23)

/** \\brief  2816C, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF012816Cu)

/** Alias (User Manual Name) for GTM_DPLL_PSAC3.
* To use register names with standard convension, please use GTM_DPLL_PSAC3.
*/
#define	GTM_DPLL_PSAC_3	(GTM_DPLL_PSAC3)

/** \\brief  28170, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128170u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC4.
* To use register names with standard convension, please use GTM_DPLL_PSAC4.
*/
#define	GTM_DPLL_PSAC_4	(GTM_DPLL_PSAC4)

/** \\brief  28174, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128174u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC5.
* To use register names with standard convension, please use GTM_DPLL_PSAC5.
*/
#define	GTM_DPLL_PSAC_5	(GTM_DPLL_PSAC5)

/** \\brief  28178, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC6 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128178u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC6.
* To use register names with standard convension, please use GTM_DPLL_PSAC6.
*/
#define	GTM_DPLL_PSAC_6	(GTM_DPLL_PSAC6)

/** \\brief  2817C, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC7 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF012817Cu)

/** Alias (User Manual Name) for GTM_DPLL_PSAC7.
* To use register names with standard convension, please use GTM_DPLL_PSAC7.
*/
#define	GTM_DPLL_PSAC_7	(GTM_DPLL_PSAC7)

/** \\brief  28180, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC8 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128180u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC8.
* To use register names with standard convension, please use GTM_DPLL_PSAC8.
*/
#define	GTM_DPLL_PSAC_8	(GTM_DPLL_PSAC8)

/** \\brief  28184, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC9 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128184u)

/** Alias (User Manual Name) for GTM_DPLL_PSAC9.
* To use register names with standard convension, please use GTM_DPLL_PSAC9.
*/
#define	GTM_DPLL_PSAC_9	(GTM_DPLL_PSAC9)

/** \\brief  281FC, DPLL RAM Initatlisation Register */
#define GTM_DPLL_RAM_INI /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RAM_INI*)0xF01281FCu)

/** \\brief  28014, DPLL Status Register */
#define GTM_DPLL_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_STATUS*)0xF0128014u)

/** \\brief  280C4, DPLL TBU_TS0 Value at last STATE Event */
#define GTM_DPLL_TBU_TS0_S /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TBU_TS0_S*)0xF01280C4u)

/** Alias (User Manual Name) for GTM_DPLL_TBU_TS0_S.
* To use register names with standard convension, please use GTM_DPLL_TBU_TS0_S.
*/
#define	GTM_TBU_TS0_S	(GTM_DPLL_TBU_TS0_S)

/** \\brief  280C0, DPLL TBU_TS0 Value at last TRIGGER Event */
#define GTM_DPLL_TBU_TS0_T /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TBU_TS0_T*)0xF01280C0u)

/** Alias (User Manual Name) for GTM_DPLL_TBU_TS0_T.
* To use register names with standard convension, please use GTM_DPLL_TBU_TS0_T.
*/
#define	GTM_TBU_TS0_T	(GTM_DPLL_TBU_TS0_T)

/** \\brief  28100, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128100u)

/** Alias (User Manual Name) for GTM_DPLL_TSA0.
* To use register names with standard convension, please use GTM_DPLL_TSA0.
*/
#define	GTM_DPLL_TSA_0	(GTM_DPLL_TSA0)

/** \\brief  28104, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128104u)

/** Alias (User Manual Name) for GTM_DPLL_TSA1.
* To use register names with standard convension, please use GTM_DPLL_TSA1.
*/
#define	GTM_DPLL_TSA_1	(GTM_DPLL_TSA1)

/** \\brief  28128, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA10 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128128u)

/** Alias (User Manual Name) for GTM_DPLL_TSA10.
* To use register names with standard convension, please use GTM_DPLL_TSA10.
*/
#define	GTM_DPLL_TSA_10	(GTM_DPLL_TSA10)

/** \\brief  2812C, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA11 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF012812Cu)

/** Alias (User Manual Name) for GTM_DPLL_TSA11.
* To use register names with standard convension, please use GTM_DPLL_TSA11.
*/
#define	GTM_DPLL_TSA_11	(GTM_DPLL_TSA11)

/** \\brief  28130, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA12 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128130u)

/** Alias (User Manual Name) for GTM_DPLL_TSA12.
* To use register names with standard convension, please use GTM_DPLL_TSA12.
*/
#define	GTM_DPLL_TSA_12	(GTM_DPLL_TSA12)

/** \\brief  28134, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA13 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128134u)

/** Alias (User Manual Name) for GTM_DPLL_TSA13.
* To use register names with standard convension, please use GTM_DPLL_TSA13.
*/
#define	GTM_DPLL_TSA_13	(GTM_DPLL_TSA13)

/** \\brief  28138, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA14 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128138u)

/** Alias (User Manual Name) for GTM_DPLL_TSA14.
* To use register names with standard convension, please use GTM_DPLL_TSA14.
*/
#define	GTM_DPLL_TSA_14	(GTM_DPLL_TSA14)

/** \\brief  2813C, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA15 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF012813Cu)

/** Alias (User Manual Name) for GTM_DPLL_TSA15.
* To use register names with standard convension, please use GTM_DPLL_TSA15.
*/
#define	GTM_DPLL_TSA_15	(GTM_DPLL_TSA15)

/** \\brief  28140, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA16 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128140u)

/** Alias (User Manual Name) for GTM_DPLL_TSA16.
* To use register names with standard convension, please use GTM_DPLL_TSA16.
*/
#define	GTM_DPLL_TSA_16	(GTM_DPLL_TSA16)

/** \\brief  28144, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA17 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128144u)

/** Alias (User Manual Name) for GTM_DPLL_TSA17.
* To use register names with standard convension, please use GTM_DPLL_TSA17.
*/
#define	GTM_DPLL_TSA_17	(GTM_DPLL_TSA17)

/** \\brief  28148, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA18 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128148u)

/** Alias (User Manual Name) for GTM_DPLL_TSA18.
* To use register names with standard convension, please use GTM_DPLL_TSA18.
*/
#define	GTM_DPLL_TSA_18	(GTM_DPLL_TSA18)

/** \\brief  2814C, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA19 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF012814Cu)

/** Alias (User Manual Name) for GTM_DPLL_TSA19.
* To use register names with standard convension, please use GTM_DPLL_TSA19.
*/
#define	GTM_DPLL_TSA_19	(GTM_DPLL_TSA19)

/** \\brief  28108, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128108u)

/** Alias (User Manual Name) for GTM_DPLL_TSA2.
* To use register names with standard convension, please use GTM_DPLL_TSA2.
*/
#define	GTM_DPLL_TSA_2	(GTM_DPLL_TSA2)

/** \\brief  28150, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA20 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128150u)

/** Alias (User Manual Name) for GTM_DPLL_TSA20.
* To use register names with standard convension, please use GTM_DPLL_TSA20.
*/
#define	GTM_DPLL_TSA_20	(GTM_DPLL_TSA20)

/** \\brief  28154, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA21 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128154u)

/** Alias (User Manual Name) for GTM_DPLL_TSA21.
* To use register names with standard convension, please use GTM_DPLL_TSA21.
*/
#define	GTM_DPLL_TSA_21	(GTM_DPLL_TSA21)

/** \\brief  28158, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA22 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128158u)

/** Alias (User Manual Name) for GTM_DPLL_TSA22.
* To use register names with standard convension, please use GTM_DPLL_TSA22.
*/
#define	GTM_DPLL_TSA_22	(GTM_DPLL_TSA22)

/** \\brief  2815C, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA23 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF012815Cu)

/** Alias (User Manual Name) for GTM_DPLL_TSA23.
* To use register names with standard convension, please use GTM_DPLL_TSA23.
*/
#define	GTM_DPLL_TSA_23	(GTM_DPLL_TSA23)

/** \\brief  2810C, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF012810Cu)

/** Alias (User Manual Name) for GTM_DPLL_TSA3.
* To use register names with standard convension, please use GTM_DPLL_TSA3.
*/
#define	GTM_DPLL_TSA_3	(GTM_DPLL_TSA3)

/** \\brief  28110, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128110u)

/** Alias (User Manual Name) for GTM_DPLL_TSA4.
* To use register names with standard convension, please use GTM_DPLL_TSA4.
*/
#define	GTM_DPLL_TSA_4	(GTM_DPLL_TSA4)

/** \\brief  28114, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128114u)

/** Alias (User Manual Name) for GTM_DPLL_TSA5.
* To use register names with standard convension, please use GTM_DPLL_TSA5.
*/
#define	GTM_DPLL_TSA_5	(GTM_DPLL_TSA5)

/** \\brief  28118, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA6 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128118u)

/** Alias (User Manual Name) for GTM_DPLL_TSA6.
* To use register names with standard convension, please use GTM_DPLL_TSA6.
*/
#define	GTM_DPLL_TSA_6	(GTM_DPLL_TSA6)

/** \\brief  2811C, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA7 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF012811Cu)

/** Alias (User Manual Name) for GTM_DPLL_TSA7.
* To use register names with standard convension, please use GTM_DPLL_TSA7.
*/
#define	GTM_DPLL_TSA_7	(GTM_DPLL_TSA7)

/** \\brief  28120, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA8 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128120u)

/** Alias (User Manual Name) for GTM_DPLL_TSA8.
* To use register names with standard convension, please use GTM_DPLL_TSA8.
*/
#define	GTM_DPLL_TSA_8	(GTM_DPLL_TSA8)

/** \\brief  28124, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA9 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSA*)0xF0128124u)

/** Alias (User Manual Name) for GTM_DPLL_TSA9.
* To use register names with standard convension, please use GTM_DPLL_TSA9.
*/
#define	GTM_DPLL_TSA_9	(GTM_DPLL_TSA9)

/** \\brief  18040, F2A0 Stream Activation Register */
#define GTM_F2A0_ENABLE /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_ENABLE*)0xF0118040u)

/** \\brief  18000, F2A Read Channel Address Register */
#define GTM_F2A0_RD_CH0_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118000u)

/** Alias (User Manual Name) for GTM_F2A0_RD_CH0_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A0_RD_CH0_ARU_RD_FIFO.
*/
#define	GTM_F2A0_CH0_ARU_RD_FIFO	(GTM_F2A0_RD_CH0_ARU_RD_FIFO)

/** \\brief  18004, F2A Read Channel Address Register */
#define GTM_F2A0_RD_CH1_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118004u)

/** Alias (User Manual Name) for GTM_F2A0_RD_CH1_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A0_RD_CH1_ARU_RD_FIFO.
*/
#define	GTM_F2A0_CH1_ARU_RD_FIFO	(GTM_F2A0_RD_CH1_ARU_RD_FIFO)

/** \\brief  18008, F2A Read Channel Address Register */
#define GTM_F2A0_RD_CH2_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118008u)

/** Alias (User Manual Name) for GTM_F2A0_RD_CH2_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A0_RD_CH2_ARU_RD_FIFO.
*/
#define	GTM_F2A0_CH2_ARU_RD_FIFO	(GTM_F2A0_RD_CH2_ARU_RD_FIFO)

/** \\brief  1800C, F2A Read Channel Address Register */
#define GTM_F2A0_RD_CH3_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF011800Cu)

/** Alias (User Manual Name) for GTM_F2A0_RD_CH3_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A0_RD_CH3_ARU_RD_FIFO.
*/
#define	GTM_F2A0_CH3_ARU_RD_FIFO	(GTM_F2A0_RD_CH3_ARU_RD_FIFO)

/** \\brief  18010, F2A Read Channel Address Register */
#define GTM_F2A0_RD_CH4_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118010u)

/** Alias (User Manual Name) for GTM_F2A0_RD_CH4_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A0_RD_CH4_ARU_RD_FIFO.
*/
#define	GTM_F2A0_CH4_ARU_RD_FIFO	(GTM_F2A0_RD_CH4_ARU_RD_FIFO)

/** \\brief  18014, F2A Read Channel Address Register */
#define GTM_F2A0_RD_CH5_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118014u)

/** Alias (User Manual Name) for GTM_F2A0_RD_CH5_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A0_RD_CH5_ARU_RD_FIFO.
*/
#define	GTM_F2A0_CH5_ARU_RD_FIFO	(GTM_F2A0_RD_CH5_ARU_RD_FIFO)

/** \\brief  18018, F2A Read Channel Address Register */
#define GTM_F2A0_RD_CH6_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118018u)

/** Alias (User Manual Name) for GTM_F2A0_RD_CH6_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A0_RD_CH6_ARU_RD_FIFO.
*/
#define	GTM_F2A0_CH6_ARU_RD_FIFO	(GTM_F2A0_RD_CH6_ARU_RD_FIFO)

/** \\brief  1801C, F2A Read Channel Address Register */
#define GTM_F2A0_RD_CH7_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF011801Cu)

/** Alias (User Manual Name) for GTM_F2A0_RD_CH7_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A0_RD_CH7_ARU_RD_FIFO.
*/
#define	GTM_F2A0_CH7_ARU_RD_FIFO	(GTM_F2A0_RD_CH7_ARU_RD_FIFO)

/** \\brief  18020, F2A Stream Configuration Register */
#define GTM_F2A0_STR_CH0_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF0118020u)

/** Alias (User Manual Name) for GTM_F2A0_STR_CH0_STR_CFG.
* To use register names with standard convension, please use GTM_F2A0_STR_CH0_STR_CFG.
*/
#define	GTM_F2A0_CH0_STR_CFG	(GTM_F2A0_STR_CH0_STR_CFG)

/** \\brief  18024, F2A Stream Configuration Register */
#define GTM_F2A0_STR_CH1_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF0118024u)

/** Alias (User Manual Name) for GTM_F2A0_STR_CH1_STR_CFG.
* To use register names with standard convension, please use GTM_F2A0_STR_CH1_STR_CFG.
*/
#define	GTM_F2A0_CH1_STR_CFG	(GTM_F2A0_STR_CH1_STR_CFG)

/** \\brief  18028, F2A Stream Configuration Register */
#define GTM_F2A0_STR_CH2_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF0118028u)

/** Alias (User Manual Name) for GTM_F2A0_STR_CH2_STR_CFG.
* To use register names with standard convension, please use GTM_F2A0_STR_CH2_STR_CFG.
*/
#define	GTM_F2A0_CH2_STR_CFG	(GTM_F2A0_STR_CH2_STR_CFG)

/** \\brief  1802C, F2A Stream Configuration Register */
#define GTM_F2A0_STR_CH3_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF011802Cu)

/** Alias (User Manual Name) for GTM_F2A0_STR_CH3_STR_CFG.
* To use register names with standard convension, please use GTM_F2A0_STR_CH3_STR_CFG.
*/
#define	GTM_F2A0_CH3_STR_CFG	(GTM_F2A0_STR_CH3_STR_CFG)

/** \\brief  18030, F2A Stream Configuration Register */
#define GTM_F2A0_STR_CH4_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF0118030u)

/** Alias (User Manual Name) for GTM_F2A0_STR_CH4_STR_CFG.
* To use register names with standard convension, please use GTM_F2A0_STR_CH4_STR_CFG.
*/
#define	GTM_F2A0_CH4_STR_CFG	(GTM_F2A0_STR_CH4_STR_CFG)

/** \\brief  18034, F2A Stream Configuration Register */
#define GTM_F2A0_STR_CH5_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF0118034u)

/** Alias (User Manual Name) for GTM_F2A0_STR_CH5_STR_CFG.
* To use register names with standard convension, please use GTM_F2A0_STR_CH5_STR_CFG.
*/
#define	GTM_F2A0_CH5_STR_CFG	(GTM_F2A0_STR_CH5_STR_CFG)

/** \\brief  18038, F2A Stream Configuration Register */
#define GTM_F2A0_STR_CH6_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF0118038u)

/** Alias (User Manual Name) for GTM_F2A0_STR_CH6_STR_CFG.
* To use register names with standard convension, please use GTM_F2A0_STR_CH6_STR_CFG.
*/
#define	GTM_F2A0_CH6_STR_CFG	(GTM_F2A0_STR_CH6_STR_CFG)

/** \\brief  1803C, F2A Stream Configuration Register */
#define GTM_F2A0_STR_CH7_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF011803Cu)

/** Alias (User Manual Name) for GTM_F2A0_STR_CH7_STR_CFG.
* To use register names with standard convension, please use GTM_F2A0_STR_CH7_STR_CFG.
*/
#define	GTM_F2A0_CH7_STR_CFG	(GTM_F2A0_STR_CH7_STR_CFG)

/** \\brief  18400, FIFO0 Channel Control Register */
#define GTM_FIFO0_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF0118400u)

/** \\brief  18404, FIFO0 Channel End Address Register */
#define GTM_FIFO0_CH0_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF0118404u)

/** \\brief  18418, FIFO0 Channel Fill Level Register */
#define GTM_FIFO0_CH0_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF0118418u)

/** \\brief  18410, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO0_CH0_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF0118410u)

/** \\brief  18408, FIFO0 Channel Start Address Register */
#define GTM_FIFO0_CH0_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF0118408u)

/** \\brief  18414, FIFO0 Channel Status Register */
#define GTM_FIFO0_CH0_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF0118414u)

/** \\brief  1840C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO0_CH0_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011840Cu)

/** \\brief  18420, FIFO0 Channel Control Register */
#define GTM_FIFO0_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF0118420u)

/** \\brief  18424, FIFO0 Channel End Address Register */
#define GTM_FIFO0_CH1_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF0118424u)

/** \\brief  18438, FIFO0 Channel Fill Level Register */
#define GTM_FIFO0_CH1_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF0118438u)

/** \\brief  18430, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO0_CH1_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF0118430u)

/** \\brief  18428, FIFO0 Channel Start Address Register */
#define GTM_FIFO0_CH1_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF0118428u)

/** \\brief  18434, FIFO0 Channel Status Register */
#define GTM_FIFO0_CH1_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF0118434u)

/** \\brief  1842C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO0_CH1_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011842Cu)

/** \\brief  18440, FIFO0 Channel Control Register */
#define GTM_FIFO0_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF0118440u)

/** \\brief  18444, FIFO0 Channel End Address Register */
#define GTM_FIFO0_CH2_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF0118444u)

/** \\brief  18458, FIFO0 Channel Fill Level Register */
#define GTM_FIFO0_CH2_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF0118458u)

/** \\brief  18450, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO0_CH2_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF0118450u)

/** \\brief  18448, FIFO0 Channel Start Address Register */
#define GTM_FIFO0_CH2_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF0118448u)

/** \\brief  18454, FIFO0 Channel Status Register */
#define GTM_FIFO0_CH2_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF0118454u)

/** \\brief  1844C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO0_CH2_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011844Cu)

/** \\brief  18460, FIFO0 Channel Control Register */
#define GTM_FIFO0_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF0118460u)

/** \\brief  18464, FIFO0 Channel End Address Register */
#define GTM_FIFO0_CH3_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF0118464u)

/** \\brief  18478, FIFO0 Channel Fill Level Register */
#define GTM_FIFO0_CH3_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF0118478u)

/** \\brief  18470, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO0_CH3_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF0118470u)

/** \\brief  18468, FIFO0 Channel Start Address Register */
#define GTM_FIFO0_CH3_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF0118468u)

/** \\brief  18474, FIFO0 Channel Status Register */
#define GTM_FIFO0_CH3_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF0118474u)

/** \\brief  1846C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO0_CH3_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011846Cu)

/** \\brief  18480, FIFO0 Channel Control Register */
#define GTM_FIFO0_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF0118480u)

/** \\brief  18484, FIFO0 Channel End Address Register */
#define GTM_FIFO0_CH4_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF0118484u)

/** \\brief  18498, FIFO0 Channel Fill Level Register */
#define GTM_FIFO0_CH4_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF0118498u)

/** \\brief  18490, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO0_CH4_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF0118490u)

/** \\brief  18488, FIFO0 Channel Start Address Register */
#define GTM_FIFO0_CH4_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF0118488u)

/** \\brief  18494, FIFO0 Channel Status Register */
#define GTM_FIFO0_CH4_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF0118494u)

/** \\brief  1848C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO0_CH4_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011848Cu)

/** \\brief  184A0, FIFO0 Channel Control Register */
#define GTM_FIFO0_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF01184A0u)

/** \\brief  184A4, FIFO0 Channel End Address Register */
#define GTM_FIFO0_CH5_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF01184A4u)

/** \\brief  184B8, FIFO0 Channel Fill Level Register */
#define GTM_FIFO0_CH5_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF01184B8u)

/** \\brief  184B0, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO0_CH5_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF01184B0u)

/** \\brief  184A8, FIFO0 Channel Start Address Register */
#define GTM_FIFO0_CH5_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF01184A8u)

/** \\brief  184B4, FIFO0 Channel Status Register */
#define GTM_FIFO0_CH5_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF01184B4u)

/** \\brief  184AC, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO0_CH5_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF01184ACu)

/** \\brief  184C0, FIFO0 Channel Control Register */
#define GTM_FIFO0_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF01184C0u)

/** \\brief  184C4, FIFO0 Channel End Address Register */
#define GTM_FIFO0_CH6_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF01184C4u)

/** \\brief  184D8, FIFO0 Channel Fill Level Register */
#define GTM_FIFO0_CH6_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF01184D8u)

/** \\brief  184D0, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO0_CH6_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF01184D0u)

/** \\brief  184C8, FIFO0 Channel Start Address Register */
#define GTM_FIFO0_CH6_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF01184C8u)

/** \\brief  184D4, FIFO0 Channel Status Register */
#define GTM_FIFO0_CH6_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF01184D4u)

/** \\brief  184CC, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO0_CH6_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF01184CCu)

/** \\brief  184E0, FIFO0 Channel Control Register */
#define GTM_FIFO0_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF01184E0u)

/** \\brief  184E4, FIFO0 Channel End Address Register */
#define GTM_FIFO0_CH7_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF01184E4u)

/** \\brief  184F8, FIFO0 Channel Fill Level Register */
#define GTM_FIFO0_CH7_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF01184F8u)

/** \\brief  184F0, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO0_CH7_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF01184F0u)

/** \\brief  184E8, FIFO0 Channel Start Address Register */
#define GTM_FIFO0_CH7_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF01184E8u)

/** \\brief  184F4, FIFO0 Channel Status Register */
#define GTM_FIFO0_CH7_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF01184F4u)

/** \\brief  184EC, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO0_CH7_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF01184ECu)

/** \\brief  18604, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO0_CH_IRQ0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_EN*)0xF0118604u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ0_IRQ_EN.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ0_IRQ_EN.
*/
#define	GTM_FIFO0_CH0_IRQ_EN	(GTM_FIFO0_CH_IRQ0_IRQ_EN)

/** \\brief  18608, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO0_CH_IRQ0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_FORCINT*)0xF0118608u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ0_IRQ_FORCINT.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ0_IRQ_FORCINT.
*/
#define	GTM_FIFO0_CH0_IRQ_FORCINT	(GTM_FIFO0_CH_IRQ0_IRQ_FORCINT)

/** \\brief  1860C, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO0_CH_IRQ0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_MODE*)0xF011860Cu)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ0_IRQ_MODE.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ0_IRQ_MODE.
*/
#define	GTM_FIFO0_CH0_IRQ_MODE	(GTM_FIFO0_CH_IRQ0_IRQ_MODE)

/** \\brief  18600, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO0_CH_IRQ0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_NOTIFY*)0xF0118600u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ0_IRQ_NOTIFY.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ0_IRQ_NOTIFY.
*/
#define	GTM_FIFO0_CH0_IRQ_NOTIFY	(GTM_FIFO0_CH_IRQ0_IRQ_NOTIFY)

/** \\brief  18624, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO0_CH_IRQ1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_EN*)0xF0118624u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ1_IRQ_EN.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ1_IRQ_EN.
*/
#define	GTM_FIFO0_CH1_IRQ_EN	(GTM_FIFO0_CH_IRQ1_IRQ_EN)

/** \\brief  18628, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO0_CH_IRQ1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_FORCINT*)0xF0118628u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ1_IRQ_FORCINT.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ1_IRQ_FORCINT.
*/
#define	GTM_FIFO0_CH1_IRQ_FORCINT	(GTM_FIFO0_CH_IRQ1_IRQ_FORCINT)

/** \\brief  1862C, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO0_CH_IRQ1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_MODE*)0xF011862Cu)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ1_IRQ_MODE.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ1_IRQ_MODE.
*/
#define	GTM_FIFO0_CH1_IRQ_MODE	(GTM_FIFO0_CH_IRQ1_IRQ_MODE)

/** \\brief  18620, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO0_CH_IRQ1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_NOTIFY*)0xF0118620u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ1_IRQ_NOTIFY.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ1_IRQ_NOTIFY.
*/
#define	GTM_FIFO0_CH1_IRQ_NOTIFY	(GTM_FIFO0_CH_IRQ1_IRQ_NOTIFY)

/** \\brief  18644, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO0_CH_IRQ2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_EN*)0xF0118644u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ2_IRQ_EN.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ2_IRQ_EN.
*/
#define	GTM_FIFO0_CH2_IRQ_EN	(GTM_FIFO0_CH_IRQ2_IRQ_EN)

/** \\brief  18648, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO0_CH_IRQ2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_FORCINT*)0xF0118648u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ2_IRQ_FORCINT.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ2_IRQ_FORCINT.
*/
#define	GTM_FIFO0_CH2_IRQ_FORCINT	(GTM_FIFO0_CH_IRQ2_IRQ_FORCINT)

/** \\brief  1864C, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO0_CH_IRQ2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_MODE*)0xF011864Cu)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ2_IRQ_MODE.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ2_IRQ_MODE.
*/
#define	GTM_FIFO0_CH2_IRQ_MODE	(GTM_FIFO0_CH_IRQ2_IRQ_MODE)

/** \\brief  18640, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO0_CH_IRQ2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_NOTIFY*)0xF0118640u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ2_IRQ_NOTIFY.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ2_IRQ_NOTIFY.
*/
#define	GTM_FIFO0_CH2_IRQ_NOTIFY	(GTM_FIFO0_CH_IRQ2_IRQ_NOTIFY)

/** \\brief  18664, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO0_CH_IRQ3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_EN*)0xF0118664u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ3_IRQ_EN.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ3_IRQ_EN.
*/
#define	GTM_FIFO0_CH3_IRQ_EN	(GTM_FIFO0_CH_IRQ3_IRQ_EN)

/** \\brief  18668, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO0_CH_IRQ3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_FORCINT*)0xF0118668u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ3_IRQ_FORCINT.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ3_IRQ_FORCINT.
*/
#define	GTM_FIFO0_CH3_IRQ_FORCINT	(GTM_FIFO0_CH_IRQ3_IRQ_FORCINT)

/** \\brief  1866C, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO0_CH_IRQ3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_MODE*)0xF011866Cu)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ3_IRQ_MODE.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ3_IRQ_MODE.
*/
#define	GTM_FIFO0_CH3_IRQ_MODE	(GTM_FIFO0_CH_IRQ3_IRQ_MODE)

/** \\brief  18660, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO0_CH_IRQ3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_NOTIFY*)0xF0118660u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ3_IRQ_NOTIFY.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ3_IRQ_NOTIFY.
*/
#define	GTM_FIFO0_CH3_IRQ_NOTIFY	(GTM_FIFO0_CH_IRQ3_IRQ_NOTIFY)

/** \\brief  18684, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO0_CH_IRQ4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_EN*)0xF0118684u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ4_IRQ_EN.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ4_IRQ_EN.
*/
#define	GTM_FIFO0_CH4_IRQ_EN	(GTM_FIFO0_CH_IRQ4_IRQ_EN)

/** \\brief  18688, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO0_CH_IRQ4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_FORCINT*)0xF0118688u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ4_IRQ_FORCINT.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ4_IRQ_FORCINT.
*/
#define	GTM_FIFO0_CH4_IRQ_FORCINT	(GTM_FIFO0_CH_IRQ4_IRQ_FORCINT)

/** \\brief  1868C, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO0_CH_IRQ4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_MODE*)0xF011868Cu)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ4_IRQ_MODE.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ4_IRQ_MODE.
*/
#define	GTM_FIFO0_CH4_IRQ_MODE	(GTM_FIFO0_CH_IRQ4_IRQ_MODE)

/** \\brief  18680, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO0_CH_IRQ4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_NOTIFY*)0xF0118680u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ4_IRQ_NOTIFY.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ4_IRQ_NOTIFY.
*/
#define	GTM_FIFO0_CH4_IRQ_NOTIFY	(GTM_FIFO0_CH_IRQ4_IRQ_NOTIFY)

/** \\brief  186A4, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO0_CH_IRQ5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_EN*)0xF01186A4u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ5_IRQ_EN.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ5_IRQ_EN.
*/
#define	GTM_FIFO0_CH5_IRQ_EN	(GTM_FIFO0_CH_IRQ5_IRQ_EN)

/** \\brief  186A8, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO0_CH_IRQ5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_FORCINT*)0xF01186A8u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ5_IRQ_FORCINT.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ5_IRQ_FORCINT.
*/
#define	GTM_FIFO0_CH5_IRQ_FORCINT	(GTM_FIFO0_CH_IRQ5_IRQ_FORCINT)

/** \\brief  186AC, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO0_CH_IRQ5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_MODE*)0xF01186ACu)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ5_IRQ_MODE.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ5_IRQ_MODE.
*/
#define	GTM_FIFO0_CH5_IRQ_MODE	(GTM_FIFO0_CH_IRQ5_IRQ_MODE)

/** \\brief  186A0, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO0_CH_IRQ5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_NOTIFY*)0xF01186A0u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ5_IRQ_NOTIFY.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ5_IRQ_NOTIFY.
*/
#define	GTM_FIFO0_CH5_IRQ_NOTIFY	(GTM_FIFO0_CH_IRQ5_IRQ_NOTIFY)

/** \\brief  186C4, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO0_CH_IRQ6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_EN*)0xF01186C4u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ6_IRQ_EN.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ6_IRQ_EN.
*/
#define	GTM_FIFO0_CH6_IRQ_EN	(GTM_FIFO0_CH_IRQ6_IRQ_EN)

/** \\brief  186C8, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO0_CH_IRQ6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_FORCINT*)0xF01186C8u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ6_IRQ_FORCINT.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ6_IRQ_FORCINT.
*/
#define	GTM_FIFO0_CH6_IRQ_FORCINT	(GTM_FIFO0_CH_IRQ6_IRQ_FORCINT)

/** \\brief  186CC, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO0_CH_IRQ6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_MODE*)0xF01186CCu)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ6_IRQ_MODE.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ6_IRQ_MODE.
*/
#define	GTM_FIFO0_CH6_IRQ_MODE	(GTM_FIFO0_CH_IRQ6_IRQ_MODE)

/** \\brief  186C0, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO0_CH_IRQ6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_NOTIFY*)0xF01186C0u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ6_IRQ_NOTIFY.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ6_IRQ_NOTIFY.
*/
#define	GTM_FIFO0_CH6_IRQ_NOTIFY	(GTM_FIFO0_CH_IRQ6_IRQ_NOTIFY)

/** \\brief  186E4, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO0_CH_IRQ7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_EN*)0xF01186E4u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ7_IRQ_EN.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ7_IRQ_EN.
*/
#define	GTM_FIFO0_CH7_IRQ_EN	(GTM_FIFO0_CH_IRQ7_IRQ_EN)

/** \\brief  186E8, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO0_CH_IRQ7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_FORCINT*)0xF01186E8u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ7_IRQ_FORCINT.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ7_IRQ_FORCINT.
*/
#define	GTM_FIFO0_CH7_IRQ_FORCINT	(GTM_FIFO0_CH_IRQ7_IRQ_FORCINT)

/** \\brief  186EC, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO0_CH_IRQ7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_MODE*)0xF01186ECu)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ7_IRQ_MODE.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ7_IRQ_MODE.
*/
#define	GTM_FIFO0_CH7_IRQ_MODE	(GTM_FIFO0_CH_IRQ7_IRQ_MODE)

/** \\brief  186E0, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO0_CH_IRQ7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_IRQ_NOTIFY*)0xF01186E0u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_IRQ7_IRQ_NOTIFY.
* To use register names with standard convension, please use GTM_FIFO0_CH_IRQ7_IRQ_NOTIFY.
*/
#define	GTM_FIFO0_CH7_IRQ_NOTIFY	(GTM_FIFO0_CH_IRQ7_IRQ_NOTIFY)

/** \\brief  18504, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO0_CH_PTR0_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_PTR_RD_PTR*)0xF0118504u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_PTR0_RD_PTR.
* To use register names with standard convension, please use GTM_FIFO0_CH_PTR0_RD_PTR.
*/
#define	GTM_FIFO0_CH0_RD_PTR	(GTM_FIFO0_CH_PTR0_RD_PTR)

/** \\brief  18500, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO0_CH_PTR0_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_PTR_WR_PTR*)0xF0118500u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_PTR0_WR_PTR.
* To use register names with standard convension, please use GTM_FIFO0_CH_PTR0_WR_PTR.
*/
#define	GTM_FIFO0_CH0_WR_PTR	(GTM_FIFO0_CH_PTR0_WR_PTR)

/** \\brief  18524, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO0_CH_PTR1_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_PTR_RD_PTR*)0xF0118524u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_PTR1_RD_PTR.
* To use register names with standard convension, please use GTM_FIFO0_CH_PTR1_RD_PTR.
*/
#define	GTM_FIFO0_CH1_RD_PTR	(GTM_FIFO0_CH_PTR1_RD_PTR)

/** \\brief  18520, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO0_CH_PTR1_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_PTR_WR_PTR*)0xF0118520u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_PTR1_WR_PTR.
* To use register names with standard convension, please use GTM_FIFO0_CH_PTR1_WR_PTR.
*/
#define	GTM_FIFO0_CH1_WR_PTR	(GTM_FIFO0_CH_PTR1_WR_PTR)

/** \\brief  18544, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO0_CH_PTR2_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_PTR_RD_PTR*)0xF0118544u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_PTR2_RD_PTR.
* To use register names with standard convension, please use GTM_FIFO0_CH_PTR2_RD_PTR.
*/
#define	GTM_FIFO0_CH2_RD_PTR	(GTM_FIFO0_CH_PTR2_RD_PTR)

/** \\brief  18540, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO0_CH_PTR2_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_PTR_WR_PTR*)0xF0118540u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_PTR2_WR_PTR.
* To use register names with standard convension, please use GTM_FIFO0_CH_PTR2_WR_PTR.
*/
#define	GTM_FIFO0_CH2_WR_PTR	(GTM_FIFO0_CH_PTR2_WR_PTR)

/** \\brief  18564, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO0_CH_PTR3_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_PTR_RD_PTR*)0xF0118564u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_PTR3_RD_PTR.
* To use register names with standard convension, please use GTM_FIFO0_CH_PTR3_RD_PTR.
*/
#define	GTM_FIFO0_CH3_RD_PTR	(GTM_FIFO0_CH_PTR3_RD_PTR)

/** \\brief  18560, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO0_CH_PTR3_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_PTR_WR_PTR*)0xF0118560u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_PTR3_WR_PTR.
* To use register names with standard convension, please use GTM_FIFO0_CH_PTR3_WR_PTR.
*/
#define	GTM_FIFO0_CH3_WR_PTR	(GTM_FIFO0_CH_PTR3_WR_PTR)

/** \\brief  18584, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO0_CH_PTR4_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_PTR_RD_PTR*)0xF0118584u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_PTR4_RD_PTR.
* To use register names with standard convension, please use GTM_FIFO0_CH_PTR4_RD_PTR.
*/
#define	GTM_FIFO0_CH4_RD_PTR	(GTM_FIFO0_CH_PTR4_RD_PTR)

/** \\brief  18580, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO0_CH_PTR4_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_PTR_WR_PTR*)0xF0118580u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_PTR4_WR_PTR.
* To use register names with standard convension, please use GTM_FIFO0_CH_PTR4_WR_PTR.
*/
#define	GTM_FIFO0_CH4_WR_PTR	(GTM_FIFO0_CH_PTR4_WR_PTR)

/** \\brief  185A4, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO0_CH_PTR5_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_PTR_RD_PTR*)0xF01185A4u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_PTR5_RD_PTR.
* To use register names with standard convension, please use GTM_FIFO0_CH_PTR5_RD_PTR.
*/
#define	GTM_FIFO0_CH5_RD_PTR	(GTM_FIFO0_CH_PTR5_RD_PTR)

/** \\brief  185A0, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO0_CH_PTR5_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_PTR_WR_PTR*)0xF01185A0u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_PTR5_WR_PTR.
* To use register names with standard convension, please use GTM_FIFO0_CH_PTR5_WR_PTR.
*/
#define	GTM_FIFO0_CH5_WR_PTR	(GTM_FIFO0_CH_PTR5_WR_PTR)

/** \\brief  185C4, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO0_CH_PTR6_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_PTR_RD_PTR*)0xF01185C4u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_PTR6_RD_PTR.
* To use register names with standard convension, please use GTM_FIFO0_CH_PTR6_RD_PTR.
*/
#define	GTM_FIFO0_CH6_RD_PTR	(GTM_FIFO0_CH_PTR6_RD_PTR)

/** \\brief  185C0, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO0_CH_PTR6_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_PTR_WR_PTR*)0xF01185C0u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_PTR6_WR_PTR.
* To use register names with standard convension, please use GTM_FIFO0_CH_PTR6_WR_PTR.
*/
#define	GTM_FIFO0_CH6_WR_PTR	(GTM_FIFO0_CH_PTR6_WR_PTR)

/** \\brief  185E4, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO0_CH_PTR7_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_PTR_RD_PTR*)0xF01185E4u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_PTR7_RD_PTR.
* To use register names with standard convension, please use GTM_FIFO0_CH_PTR7_RD_PTR.
*/
#define	GTM_FIFO0_CH7_RD_PTR	(GTM_FIFO0_CH_PTR7_RD_PTR)

/** \\brief  185E0, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO0_CH_PTR7_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_PTR_WR_PTR*)0xF01185E0u)

/** Alias (User Manual Name) for GTM_FIFO0_CH_PTR7_WR_PTR.
* To use register names with standard convension, please use GTM_FIFO0_CH_PTR7_WR_PTR.
*/
#define	GTM_FIFO0_CH7_WR_PTR	(GTM_FIFO0_CH_PTR7_WR_PTR)

/** \\brief  600, GTM Infrastructure Interrupt Group */
#define GTM_ICM_IRQG_0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_0*)0xF0100600u)

/** \\brief  604, GTM DPLL Interrupt Group */
#define GTM_ICM_IRQG_1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_1*)0xF0100604u)

/** \\brief  628, ATOM Interrupt Group 1 */
#define GTM_ICM_IRQG_10 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_10*)0xF0100628u)

/** \\brief  608, TIM Interrupt Group 0 */
#define GTM_ICM_IRQG_2 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_2*)0xF0100608u)

/** \\brief  610, MCS Interrupt Group 0 */
#define GTM_ICM_IRQG_4 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_4*)0xF0100610u)

/** \\brief  618, TOM Interrupt Group 0 */
#define GTM_ICM_IRQG_6 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_6*)0xF0100618u)

/** \\brief  61C, ITOM Interrupt Group 1 */
#define GTM_ICM_IRQG_7 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_7*)0xF010061Cu)

/** \\brief  624, ATOM Interrupt Group 0 */
#define GTM_ICM_IRQG_9 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_9*)0xF0100624u)

/** \\brief  9FDA0, CAN Output Select Register */
#define GTM_INOUTSEL_CAN_OUTSEL /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_CAN_OUTSEL*)0xF019FDA0u)

/** Alias (User Manual Name) for GTM_INOUTSEL_CAN_OUTSEL.
* To use register names with standard convension, please use GTM_INOUTSEL_CAN_OUTSEL.
*/
#define	GTM_CANOUTSEL	(GTM_INOUTSEL_CAN_OUTSEL)


/** \\brief  9FD80, DSADC Input Select Register */
#define GTM_INOUTSEL_DSADC_INSEL1 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_DSADC_INSEL*)0xF019FD80u)

/** Alias (User Manual Name) for GTM_INOUTSEL_DSADC_INSEL1.
* To use register names with standard convension, please use GTM_INOUTSEL_DSADC_INSEL1.
*/
#define	GTM_DSADCINSEL1	(GTM_INOUTSEL_DSADC_INSEL1)

/** \\brief  9FD84, DSADC Input Select Register */
#define GTM_INOUTSEL_DSADC_INSEL2 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_DSADC_INSEL*)0xF019FD84u)

/** Alias (User Manual Name) for GTM_INOUTSEL_DSADC_INSEL2.
* To use register names with standard convension, please use GTM_INOUTSEL_DSADC_INSEL2.
*/
#define	GTM_DSADCINSEL2	(GTM_INOUTSEL_DSADC_INSEL2)

/** \\brief  9FD88, DSADC Output Select 0 Register */
#define GTM_INOUTSEL_DSADC_OUTSEL00 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_DSADC_OUTSEL*)0xF019FD88u)

/** Alias (User Manual Name) for GTM_INOUTSEL_DSADC_OUTSEL00.
* To use register names with standard convension, please use GTM_INOUTSEL_DSADC_OUTSEL00.
*/
#define	GTM_DSADCOUTSEL00	(GTM_INOUTSEL_DSADC_OUTSEL00)

/** \\brief  9FD90, DSADC Output Select 1 Register */
#define GTM_INOUTSEL_DSADC_OUTSEL10 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_DSADC_OUTSEL*)0xF019FD90u)

/** Alias (User Manual Name) for GTM_INOUTSEL_DSADC_OUTSEL10.
* To use register names with standard convension, please use GTM_INOUTSEL_DSADC_OUTSEL10.
*/
#define	GTM_DSADCOUTSEL10	(GTM_INOUTSEL_DSADC_OUTSEL10)

/** \\brief  9FDA4, PSI5 Output Select 0 Register */
#define GTM_INOUTSEL_PSI5_OUTSEL0 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_PSI5_OUTSEL0*)0xF019FDA4u)

/** Alias (User Manual Name) for GTM_INOUTSEL_PSI5_OUTSEL0.
* To use register names with standard convension, please use GTM_INOUTSEL_PSI5_OUTSEL0.
*/
#define	GTM_PSI5OUTSEL0	(GTM_INOUTSEL_PSI5_OUTSEL0)

/** \\brief  9FDA8, PSI5-S Output Select Register */
#define GTM_INOUTSEL_PSI5S_OUTSEL /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_PSI5S_OUTSEL*)0xF019FDA8u)

/** Alias (User Manual Name) for GTM_INOUTSEL_PSI5S_OUTSEL.
* To use register names with standard convension, please use GTM_INOUTSEL_PSI5S_OUTSEL.
*/
#define	GTM_PSI5SOUTSEL	(GTM_INOUTSEL_PSI5S_OUTSEL)

/** \\brief  9FD30, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL0 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD30u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL0.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL0.
*/
#define	GTM_TOUTSEL0	(GTM_INOUTSEL_T_OUTSEL0)

/** \\brief  9FD34, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL1 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD34u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL1.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL1.
*/
#define	GTM_TOUTSEL1	(GTM_INOUTSEL_T_OUTSEL1)

/** \\brief  9FD58, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL10 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD58u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL10.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL10.
*/
#define	GTM_TOUTSEL10	(GTM_INOUTSEL_T_OUTSEL10)

/** \\brief  9FD5C, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL11 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD5Cu)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL11.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL11.
*/
#define	GTM_TOUTSEL11	(GTM_INOUTSEL_T_OUTSEL11)

/** \\brief  9FD60, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL12 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD60u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL12.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL12.
*/
#define	GTM_TOUTSEL12	(GTM_INOUTSEL_T_OUTSEL12)

/** \\brief  9FD64, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL13 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD64u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL13.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL13.
*/
#define	GTM_TOUTSEL13	(GTM_INOUTSEL_T_OUTSEL13)

/** \\brief  9FD68, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL14 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD68u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL14.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL14.
*/
#define	GTM_TOUTSEL14	(GTM_INOUTSEL_T_OUTSEL14)

/** \\brief  9FD38, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL2 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD38u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL2.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL2.
*/
#define	GTM_TOUTSEL2	(GTM_INOUTSEL_T_OUTSEL2)

/** \\brief  9FD3C, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL3 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD3Cu)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL3.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL3.
*/
#define	GTM_TOUTSEL3	(GTM_INOUTSEL_T_OUTSEL3)

/** \\brief  9FD40, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL4 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD40u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL4.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL4.
*/
#define	GTM_TOUTSEL4	(GTM_INOUTSEL_T_OUTSEL4)

/** \\brief  9FD44, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL5 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD44u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL5.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL5.
*/
#define	GTM_TOUTSEL5	(GTM_INOUTSEL_T_OUTSEL5)

/** \\brief  9FD48, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL6 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD48u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL6.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL6.
*/
#define	GTM_TOUTSEL6	(GTM_INOUTSEL_T_OUTSEL6)

/** \\brief  9FD4C, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL7 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD4Cu)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL7.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL7.
*/
#define	GTM_TOUTSEL7	(GTM_INOUTSEL_T_OUTSEL7)

/** \\brief  9FD50, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL8 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD50u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL8.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL8.
*/
#define	GTM_TOUTSEL8	(GTM_INOUTSEL_T_OUTSEL8)

/** \\brief  9FD54, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL9 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD54u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL9.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL9.
*/
#define	GTM_TOUTSEL9	(GTM_INOUTSEL_T_OUTSEL9)

/** \\brief  9FD10, TIM Input Select Register */
#define GTM_INOUTSEL_TIM0_INSEL /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_TIM_INSEL*)0xF019FD10u)

/** Alias (User Manual Name) for GTM_INOUTSEL_TIM0_INSEL.
* To use register names with standard convension, please use GTM_INOUTSEL_TIM0_INSEL.
*/
#define	GTM_TIM0INSEL	(GTM_INOUTSEL_TIM0_INSEL)

/** \\brief  9FD14, TIM Input Select Register */
#define GTM_INOUTSEL_TIM1_INSEL /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_TIM_INSEL*)0xF019FD14u)

/** Alias (User Manual Name) for GTM_INOUTSEL_TIM1_INSEL.
* To use register names with standard convension, please use GTM_INOUTSEL_TIM1_INSEL.
*/
#define	GTM_TIM1INSEL	(GTM_INOUTSEL_TIM1_INSEL)

/** \\brief  9FD18, TIM Input Select Register */
#define GTM_INOUTSEL_TIM2_INSEL /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_TIM_INSEL*)0xF019FD18u)

/** Alias (User Manual Name) for GTM_INOUTSEL_TIM2_INSEL.
* To use register names with standard convension, please use GTM_INOUTSEL_TIM2_INSEL.
*/
#define	GTM_TIM2INSEL	(GTM_INOUTSEL_TIM2_INSEL)

/** \\brief  9FD1C, TIM Input Select Register */
#define GTM_INOUTSEL_TIM3_INSEL /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_TIM_INSEL*)0xF019FD1Cu)

/** Alias (User Manual Name) for GTM_INOUTSEL_TIM3_INSEL.
* To use register names with standard convension, please use GTM_INOUTSEL_TIM3_INSEL.
*/
#define	GTM_TIM3INSEL	(GTM_INOUTSEL_TIM3_INSEL)

/** \\brief  14, GTM Interrupt Enable Register */
#define GTM_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_IRQ_EN*)0xF0100014u)

/** \\brief  18, GTM Software Interrupt Generation Register */
#define GTM_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_IRQ_FORCINT*)0xF0100018u)

/** \\brief  1C, GTM Top Level Interrupts Mode Selection */
#define GTM_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_IRQ_MODE*)0xF010001Cu)

/** \\brief  10, GTM Interrupt Notification Register */
#define GTM_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_IRQ_NOTIFY*)0xF0100010u)

/** \\brief  9FDF4, Kernel Reset Register 0 */
#define GTM_KRST0 /*lint --e(923)*/ (*(volatile Ifx_GTM_KRST0*)0xF019FDF4u)

/** \\brief  9FDF0, Kernel Reset Register 1 */
#define GTM_KRST1 /*lint --e(923)*/ (*(volatile Ifx_GTM_KRST1*)0xF019FDF0u)

/** \\brief  9FDEC, Kernel Reset Status Clear Register */
#define GTM_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_GTM_KRSTCLR*)0xF019FDECu)

/** \\brief  40, MAP Control Register */
#define GTM_MAP_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MAP_CTRL*)0xF0100040u)

/** \\brief  80, Memory Layout Configuration Register */
#define GTM_MCFG_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCFG_CTRL*)0xF0100080u)

/** \\brief  30028, MCS Channel ACB Register */
#define GTM_MCS0_CH0_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0130028u)

/** \\brief  30000, MCS Channel Control Register */
#define GTM_MCS0_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130000u)

/** \\brief  30030, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0130030u)

/** \\brief  30034, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0130034u)

/** \\brief  30038, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0130038u)

/** \\brief  3002C, MCS Channel interrupt notification register */
#define GTM_MCS0_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF013002Cu)

/** \\brief  30004, MCS Channel Program Counter Register */
#define GTM_MCS0_CH0_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130004u)

/** \\brief  30008, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH0_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130008u)

/** \\brief  3000C, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH0_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF013000Cu)

/** \\brief  30010, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH0_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130010u)

/** \\brief  30014, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH0_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0130014u)

/** \\brief  30018, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH0_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130018u)

/** \\brief  3001C, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH0_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF013001Cu)

/** \\brief  30020, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH0_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0130020u)

/** \\brief  30024, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH0_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF0130024u)

/** \\brief  300A8, MCS Channel ACB Register */
#define GTM_MCS0_CH1_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01300A8u)

/** \\brief  30080, MCS Channel Control Register */
#define GTM_MCS0_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130080u)

/** \\brief  300B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01300B0u)

/** \\brief  300B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01300B4u)

/** \\brief  300B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01300B8u)

/** \\brief  300AC, MCS Channel interrupt notification register */
#define GTM_MCS0_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01300ACu)

/** \\brief  30084, MCS Channel Program Counter Register */
#define GTM_MCS0_CH1_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130084u)

/** \\brief  30088, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH1_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130088u)

/** \\brief  3008C, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH1_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF013008Cu)

/** \\brief  30090, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH1_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130090u)

/** \\brief  30094, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH1_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0130094u)

/** \\brief  30098, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH1_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130098u)

/** \\brief  3009C, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH1_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF013009Cu)

/** \\brief  300A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH1_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF01300A0u)

/** \\brief  300A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH1_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF01300A4u)

/** \\brief  30128, MCS Channel ACB Register */
#define GTM_MCS0_CH2_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0130128u)

/** \\brief  30100, MCS Channel Control Register */
#define GTM_MCS0_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130100u)

/** \\brief  30130, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0130130u)

/** \\brief  30134, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0130134u)

/** \\brief  30138, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0130138u)

/** \\brief  3012C, MCS Channel interrupt notification register */
#define GTM_MCS0_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF013012Cu)

/** \\brief  30104, MCS Channel Program Counter Register */
#define GTM_MCS0_CH2_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130104u)

/** \\brief  30108, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH2_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130108u)

/** \\brief  3010C, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH2_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF013010Cu)

/** \\brief  30110, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH2_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130110u)

/** \\brief  30114, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH2_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0130114u)

/** \\brief  30118, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH2_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130118u)

/** \\brief  3011C, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH2_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF013011Cu)

/** \\brief  30120, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH2_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0130120u)

/** \\brief  30124, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH2_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF0130124u)

/** \\brief  301A8, MCS Channel ACB Register */
#define GTM_MCS0_CH3_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01301A8u)

/** \\brief  30180, MCS Channel Control Register */
#define GTM_MCS0_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130180u)

/** \\brief  301B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01301B0u)

/** \\brief  301B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01301B4u)

/** \\brief  301B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01301B8u)

/** \\brief  301AC, MCS Channel interrupt notification register */
#define GTM_MCS0_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01301ACu)

/** \\brief  30184, MCS Channel Program Counter Register */
#define GTM_MCS0_CH3_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130184u)

/** \\brief  30188, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH3_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130188u)

/** \\brief  3018C, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH3_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF013018Cu)

/** \\brief  30190, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH3_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130190u)

/** \\brief  30194, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH3_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0130194u)

/** \\brief  30198, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH3_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130198u)

/** \\brief  3019C, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH3_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF013019Cu)

/** \\brief  301A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH3_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF01301A0u)

/** \\brief  301A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH3_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF01301A4u)

/** \\brief  30228, MCS Channel ACB Register */
#define GTM_MCS0_CH4_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0130228u)

/** \\brief  30200, MCS Channel Control Register */
#define GTM_MCS0_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130200u)

/** \\brief  30230, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0130230u)

/** \\brief  30234, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0130234u)

/** \\brief  30238, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0130238u)

/** \\brief  3022C, MCS Channel interrupt notification register */
#define GTM_MCS0_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF013022Cu)

/** \\brief  30204, MCS Channel Program Counter Register */
#define GTM_MCS0_CH4_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130204u)

/** \\brief  30208, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH4_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130208u)

/** \\brief  3020C, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH4_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF013020Cu)

/** \\brief  30210, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH4_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130210u)

/** \\brief  30214, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH4_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0130214u)

/** \\brief  30218, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH4_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130218u)

/** \\brief  3021C, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH4_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF013021Cu)

/** \\brief  30220, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH4_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0130220u)

/** \\brief  30224, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH4_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF0130224u)

/** \\brief  302A8, MCS Channel ACB Register */
#define GTM_MCS0_CH5_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01302A8u)

/** \\brief  30280, MCS Channel Control Register */
#define GTM_MCS0_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130280u)

/** \\brief  302B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01302B0u)

/** \\brief  302B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01302B4u)

/** \\brief  302B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01302B8u)

/** \\brief  302AC, MCS Channel interrupt notification register */
#define GTM_MCS0_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01302ACu)

/** \\brief  30284, MCS Channel Program Counter Register */
#define GTM_MCS0_CH5_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130284u)

/** \\brief  30288, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH5_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130288u)

/** \\brief  3028C, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH5_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF013028Cu)

/** \\brief  30290, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH5_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130290u)

/** \\brief  30294, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH5_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0130294u)

/** \\brief  30298, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH5_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130298u)

/** \\brief  3029C, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH5_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF013029Cu)

/** \\brief  302A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH5_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF01302A0u)

/** \\brief  302A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH5_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF01302A4u)

/** \\brief  30328, MCS Channel ACB Register */
#define GTM_MCS0_CH6_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0130328u)

/** \\brief  30300, MCS Channel Control Register */
#define GTM_MCS0_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130300u)

/** \\brief  30330, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0130330u)

/** \\brief  30334, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0130334u)

/** \\brief  30338, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0130338u)

/** \\brief  3032C, MCS Channel interrupt notification register */
#define GTM_MCS0_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF013032Cu)

/** \\brief  30304, MCS Channel Program Counter Register */
#define GTM_MCS0_CH6_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130304u)

/** \\brief  30308, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH6_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130308u)

/** \\brief  3030C, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH6_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF013030Cu)

/** \\brief  30310, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH6_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130310u)

/** \\brief  30314, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH6_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0130314u)

/** \\brief  30318, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH6_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130318u)

/** \\brief  3031C, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH6_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF013031Cu)

/** \\brief  30320, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH6_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0130320u)

/** \\brief  30324, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH6_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF0130324u)

/** \\brief  303A8, MCS Channel ACB Register */
#define GTM_MCS0_CH7_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01303A8u)

/** \\brief  30380, MCS Channel Control Register */
#define GTM_MCS0_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130380u)

/** \\brief  303B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01303B0u)

/** \\brief  303B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01303B4u)

/** \\brief  303B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01303B8u)

/** \\brief  303AC, MCS Channel interrupt notification register */
#define GTM_MCS0_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01303ACu)

/** \\brief  30384, MCS Channel Program Counter Register */
#define GTM_MCS0_CH7_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130384u)

/** \\brief  30388, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH7_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130388u)

/** \\brief  3038C, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH7_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF013038Cu)

/** \\brief  30390, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH7_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130390u)

/** \\brief  30394, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH7_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0130394u)

/** \\brief  30398, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH7_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130398u)

/** \\brief  3039C, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH7_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF013039Cu)

/** \\brief  303A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH7_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF01303A0u)

/** \\brief  303A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH7_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF01303A4u)

/** \\brief  30404, MCS Clear Trigger Control Register */
#define GTM_MCS0_CTRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CTRG*)0xF0130404u)

/** \\brief  30400, MCS Control Register */
#define GTM_MCS0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CTRL*)0xF0130400u)

/** \\brief  30410, MCS Error Register */
#define GTM_MCS0_ERR /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_ERR*)0xF0130410u)

/** \\brief  3040C, MCS Channel Reset Register */
#define GTM_MCS0_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_RST*)0xF013040Cu)

/** \\brief  30408, MCS Set Trigger Control Register */
#define GTM_MCS0_STRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_STRG*)0xF0130408u)

/** \\brief  40028, MCS Channel ACB Register */
#define GTM_MCS1_CH0_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0140028u)

/** \\brief  40000, MCS Channel Control Register */
#define GTM_MCS1_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0140000u)

/** \\brief  40030, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0140030u)

/** \\brief  40034, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0140034u)

/** \\brief  40038, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0140038u)

/** \\brief  4002C, MCS Channel interrupt notification register */
#define GTM_MCS1_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF014002Cu)

/** \\brief  40004, MCS Channel Program Counter Register */
#define GTM_MCS1_CH0_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0140004u)

/** \\brief  40008, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH0_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0140008u)

/** \\brief  4000C, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH0_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF014000Cu)

/** \\brief  40010, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH0_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0140010u)

/** \\brief  40014, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH0_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0140014u)

/** \\brief  40018, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH0_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0140018u)

/** \\brief  4001C, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH0_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF014001Cu)

/** \\brief  40020, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH0_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0140020u)

/** \\brief  40024, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH0_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF0140024u)

/** \\brief  400A8, MCS Channel ACB Register */
#define GTM_MCS1_CH1_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01400A8u)

/** \\brief  40080, MCS Channel Control Register */
#define GTM_MCS1_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0140080u)

/** \\brief  400B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01400B0u)

/** \\brief  400B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01400B4u)

/** \\brief  400B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01400B8u)

/** \\brief  400AC, MCS Channel interrupt notification register */
#define GTM_MCS1_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01400ACu)

/** \\brief  40084, MCS Channel Program Counter Register */
#define GTM_MCS1_CH1_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0140084u)

/** \\brief  40088, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH1_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0140088u)

/** \\brief  4008C, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH1_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF014008Cu)

/** \\brief  40090, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH1_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0140090u)

/** \\brief  40094, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH1_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0140094u)

/** \\brief  40098, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH1_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0140098u)

/** \\brief  4009C, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH1_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF014009Cu)

/** \\brief  400A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH1_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF01400A0u)

/** \\brief  400A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH1_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF01400A4u)

/** \\brief  40128, MCS Channel ACB Register */
#define GTM_MCS1_CH2_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0140128u)

/** \\brief  40100, MCS Channel Control Register */
#define GTM_MCS1_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0140100u)

/** \\brief  40130, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0140130u)

/** \\brief  40134, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0140134u)

/** \\brief  40138, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0140138u)

/** \\brief  4012C, MCS Channel interrupt notification register */
#define GTM_MCS1_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF014012Cu)

/** \\brief  40104, MCS Channel Program Counter Register */
#define GTM_MCS1_CH2_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0140104u)

/** \\brief  40108, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH2_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0140108u)

/** \\brief  4010C, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH2_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF014010Cu)

/** \\brief  40110, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH2_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0140110u)

/** \\brief  40114, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH2_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0140114u)

/** \\brief  40118, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH2_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0140118u)

/** \\brief  4011C, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH2_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF014011Cu)

/** \\brief  40120, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH2_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0140120u)

/** \\brief  40124, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH2_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF0140124u)

/** \\brief  401A8, MCS Channel ACB Register */
#define GTM_MCS1_CH3_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01401A8u)

/** \\brief  40180, MCS Channel Control Register */
#define GTM_MCS1_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0140180u)

/** \\brief  401B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01401B0u)

/** \\brief  401B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01401B4u)

/** \\brief  401B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01401B8u)

/** \\brief  401AC, MCS Channel interrupt notification register */
#define GTM_MCS1_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01401ACu)

/** \\brief  40184, MCS Channel Program Counter Register */
#define GTM_MCS1_CH3_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0140184u)

/** \\brief  40188, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH3_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0140188u)

/** \\brief  4018C, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH3_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF014018Cu)

/** \\brief  40190, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH3_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0140190u)

/** \\brief  40194, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH3_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0140194u)

/** \\brief  40198, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH3_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0140198u)

/** \\brief  4019C, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH3_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF014019Cu)

/** \\brief  401A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH3_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF01401A0u)

/** \\brief  401A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH3_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF01401A4u)

/** \\brief  40228, MCS Channel ACB Register */
#define GTM_MCS1_CH4_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0140228u)

/** \\brief  40200, MCS Channel Control Register */
#define GTM_MCS1_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0140200u)

/** \\brief  40230, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0140230u)

/** \\brief  40234, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0140234u)

/** \\brief  40238, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0140238u)

/** \\brief  4022C, MCS Channel interrupt notification register */
#define GTM_MCS1_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF014022Cu)

/** \\brief  40204, MCS Channel Program Counter Register */
#define GTM_MCS1_CH4_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0140204u)

/** \\brief  40208, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH4_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0140208u)

/** \\brief  4020C, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH4_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF014020Cu)

/** \\brief  40210, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH4_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0140210u)

/** \\brief  40214, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH4_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0140214u)

/** \\brief  40218, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH4_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0140218u)

/** \\brief  4021C, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH4_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF014021Cu)

/** \\brief  40220, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH4_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0140220u)

/** \\brief  40224, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH4_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF0140224u)

/** \\brief  402A8, MCS Channel ACB Register */
#define GTM_MCS1_CH5_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01402A8u)

/** \\brief  40280, MCS Channel Control Register */
#define GTM_MCS1_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0140280u)

/** \\brief  402B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01402B0u)

/** \\brief  402B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01402B4u)

/** \\brief  402B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01402B8u)

/** \\brief  402AC, MCS Channel interrupt notification register */
#define GTM_MCS1_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01402ACu)

/** \\brief  40284, MCS Channel Program Counter Register */
#define GTM_MCS1_CH5_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0140284u)

/** \\brief  40288, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH5_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0140288u)

/** \\brief  4028C, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH5_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF014028Cu)

/** \\brief  40290, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH5_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0140290u)

/** \\brief  40294, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH5_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0140294u)

/** \\brief  40298, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH5_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0140298u)

/** \\brief  4029C, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH5_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF014029Cu)

/** \\brief  402A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH5_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF01402A0u)

/** \\brief  402A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH5_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF01402A4u)

/** \\brief  40328, MCS Channel ACB Register */
#define GTM_MCS1_CH6_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0140328u)

/** \\brief  40300, MCS Channel Control Register */
#define GTM_MCS1_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0140300u)

/** \\brief  40330, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0140330u)

/** \\brief  40334, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0140334u)

/** \\brief  40338, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0140338u)

/** \\brief  4032C, MCS Channel interrupt notification register */
#define GTM_MCS1_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF014032Cu)

/** \\brief  40304, MCS Channel Program Counter Register */
#define GTM_MCS1_CH6_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0140304u)

/** \\brief  40308, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH6_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0140308u)

/** \\brief  4030C, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH6_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF014030Cu)

/** \\brief  40310, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH6_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0140310u)

/** \\brief  40314, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH6_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0140314u)

/** \\brief  40318, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH6_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0140318u)

/** \\brief  4031C, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH6_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF014031Cu)

/** \\brief  40320, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH6_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0140320u)

/** \\brief  40324, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH6_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF0140324u)

/** \\brief  403A8, MCS Channel ACB Register */
#define GTM_MCS1_CH7_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01403A8u)

/** \\brief  40380, MCS Channel Control Register */
#define GTM_MCS1_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0140380u)

/** \\brief  403B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01403B0u)

/** \\brief  403B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01403B4u)

/** \\brief  403B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01403B8u)

/** \\brief  403AC, MCS Channel interrupt notification register */
#define GTM_MCS1_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01403ACu)

/** \\brief  40384, MCS Channel Program Counter Register */
#define GTM_MCS1_CH7_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0140384u)

/** \\brief  40388, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH7_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0140388u)

/** \\brief  4038C, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH7_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF014038Cu)

/** \\brief  40390, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH7_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0140390u)

/** \\brief  40394, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH7_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0140394u)

/** \\brief  40398, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH7_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0140398u)

/** \\brief  4039C, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH7_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF014039Cu)

/** \\brief  403A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH7_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF01403A0u)

/** \\brief  403A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH7_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF01403A4u)

/** \\brief  40404, MCS Clear Trigger Control Register */
#define GTM_MCS1_CTRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CTRG*)0xF0140404u)

/** \\brief  40400, MCS Control Register */
#define GTM_MCS1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CTRL*)0xF0140400u)

/** \\brief  40410, MCS Error Register */
#define GTM_MCS1_ERR /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_ERR*)0xF0140410u)

/** \\brief  4040C, MCS Channel Reset Register */
#define GTM_MCS1_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_RST*)0xF014040Cu)

/** \\brief  40408, MCS Set Trigger Control Register */
#define GTM_MCS1_STRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_STRG*)0xF0140408u)

/** \\brief  50028, MCS Channel ACB Register */
#define GTM_MCS2_CH0_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0150028u)

/** \\brief  50000, MCS Channel Control Register */
#define GTM_MCS2_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0150000u)

/** \\brief  50030, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0150030u)

/** \\brief  50034, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0150034u)

/** \\brief  50038, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0150038u)

/** \\brief  5002C, MCS Channel interrupt notification register */
#define GTM_MCS2_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF015002Cu)

/** \\brief  50004, MCS Channel Program Counter Register */
#define GTM_MCS2_CH0_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0150004u)

/** \\brief  50008, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH0_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0150008u)

/** \\brief  5000C, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH0_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF015000Cu)

/** \\brief  50010, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH0_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0150010u)

/** \\brief  50014, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH0_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0150014u)

/** \\brief  50018, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH0_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0150018u)

/** \\brief  5001C, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH0_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF015001Cu)

/** \\brief  50020, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH0_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0150020u)

/** \\brief  50024, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH0_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF0150024u)

/** \\brief  500A8, MCS Channel ACB Register */
#define GTM_MCS2_CH1_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01500A8u)

/** \\brief  50080, MCS Channel Control Register */
#define GTM_MCS2_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0150080u)

/** \\brief  500B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01500B0u)

/** \\brief  500B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01500B4u)

/** \\brief  500B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01500B8u)

/** \\brief  500AC, MCS Channel interrupt notification register */
#define GTM_MCS2_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01500ACu)

/** \\brief  50084, MCS Channel Program Counter Register */
#define GTM_MCS2_CH1_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0150084u)

/** \\brief  50088, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH1_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0150088u)

/** \\brief  5008C, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH1_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF015008Cu)

/** \\brief  50090, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH1_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0150090u)

/** \\brief  50094, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH1_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0150094u)

/** \\brief  50098, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH1_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0150098u)

/** \\brief  5009C, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH1_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF015009Cu)

/** \\brief  500A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH1_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF01500A0u)

/** \\brief  500A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH1_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF01500A4u)

/** \\brief  50128, MCS Channel ACB Register */
#define GTM_MCS2_CH2_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0150128u)

/** \\brief  50100, MCS Channel Control Register */
#define GTM_MCS2_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0150100u)

/** \\brief  50130, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0150130u)

/** \\brief  50134, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0150134u)

/** \\brief  50138, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0150138u)

/** \\brief  5012C, MCS Channel interrupt notification register */
#define GTM_MCS2_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF015012Cu)

/** \\brief  50104, MCS Channel Program Counter Register */
#define GTM_MCS2_CH2_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0150104u)

/** \\brief  50108, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH2_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0150108u)

/** \\brief  5010C, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH2_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF015010Cu)

/** \\brief  50110, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH2_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0150110u)

/** \\brief  50114, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH2_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0150114u)

/** \\brief  50118, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH2_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0150118u)

/** \\brief  5011C, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH2_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF015011Cu)

/** \\brief  50120, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH2_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0150120u)

/** \\brief  50124, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH2_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF0150124u)

/** \\brief  501A8, MCS Channel ACB Register */
#define GTM_MCS2_CH3_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01501A8u)

/** \\brief  50180, MCS Channel Control Register */
#define GTM_MCS2_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0150180u)

/** \\brief  501B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01501B0u)

/** \\brief  501B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01501B4u)

/** \\brief  501B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01501B8u)

/** \\brief  501AC, MCS Channel interrupt notification register */
#define GTM_MCS2_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01501ACu)

/** \\brief  50184, MCS Channel Program Counter Register */
#define GTM_MCS2_CH3_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0150184u)

/** \\brief  50188, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH3_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0150188u)

/** \\brief  5018C, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH3_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF015018Cu)

/** \\brief  50190, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH3_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0150190u)

/** \\brief  50194, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH3_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0150194u)

/** \\brief  50198, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH3_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0150198u)

/** \\brief  5019C, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH3_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF015019Cu)

/** \\brief  501A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH3_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF01501A0u)

/** \\brief  501A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH3_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF01501A4u)

/** \\brief  50228, MCS Channel ACB Register */
#define GTM_MCS2_CH4_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0150228u)

/** \\brief  50200, MCS Channel Control Register */
#define GTM_MCS2_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0150200u)

/** \\brief  50230, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0150230u)

/** \\brief  50234, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0150234u)

/** \\brief  50238, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0150238u)

/** \\brief  5022C, MCS Channel interrupt notification register */
#define GTM_MCS2_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF015022Cu)

/** \\brief  50204, MCS Channel Program Counter Register */
#define GTM_MCS2_CH4_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0150204u)

/** \\brief  50208, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH4_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0150208u)

/** \\brief  5020C, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH4_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF015020Cu)

/** \\brief  50210, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH4_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0150210u)

/** \\brief  50214, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH4_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0150214u)

/** \\brief  50218, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH4_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0150218u)

/** \\brief  5021C, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH4_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF015021Cu)

/** \\brief  50220, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH4_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0150220u)

/** \\brief  50224, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH4_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF0150224u)

/** \\brief  502A8, MCS Channel ACB Register */
#define GTM_MCS2_CH5_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01502A8u)

/** \\brief  50280, MCS Channel Control Register */
#define GTM_MCS2_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0150280u)

/** \\brief  502B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01502B0u)

/** \\brief  502B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01502B4u)

/** \\brief  502B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01502B8u)

/** \\brief  502AC, MCS Channel interrupt notification register */
#define GTM_MCS2_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01502ACu)

/** \\brief  50284, MCS Channel Program Counter Register */
#define GTM_MCS2_CH5_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0150284u)

/** \\brief  50288, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH5_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0150288u)

/** \\brief  5028C, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH5_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF015028Cu)

/** \\brief  50290, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH5_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0150290u)

/** \\brief  50294, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH5_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0150294u)

/** \\brief  50298, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH5_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0150298u)

/** \\brief  5029C, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH5_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF015029Cu)

/** \\brief  502A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH5_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF01502A0u)

/** \\brief  502A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH5_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF01502A4u)

/** \\brief  50328, MCS Channel ACB Register */
#define GTM_MCS2_CH6_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0150328u)

/** \\brief  50300, MCS Channel Control Register */
#define GTM_MCS2_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0150300u)

/** \\brief  50330, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0150330u)

/** \\brief  50334, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0150334u)

/** \\brief  50338, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0150338u)

/** \\brief  5032C, MCS Channel interrupt notification register */
#define GTM_MCS2_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF015032Cu)

/** \\brief  50304, MCS Channel Program Counter Register */
#define GTM_MCS2_CH6_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0150304u)

/** \\brief  50308, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH6_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0150308u)

/** \\brief  5030C, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH6_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF015030Cu)

/** \\brief  50310, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH6_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0150310u)

/** \\brief  50314, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH6_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0150314u)

/** \\brief  50318, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH6_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0150318u)

/** \\brief  5031C, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH6_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF015031Cu)

/** \\brief  50320, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH6_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0150320u)

/** \\brief  50324, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH6_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF0150324u)

/** \\brief  503A8, MCS Channel ACB Register */
#define GTM_MCS2_CH7_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01503A8u)

/** \\brief  50380, MCS Channel Control Register */
#define GTM_MCS2_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0150380u)

/** \\brief  503B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01503B0u)

/** \\brief  503B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01503B4u)

/** \\brief  503B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01503B8u)

/** \\brief  503AC, MCS Channel interrupt notification register */
#define GTM_MCS2_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01503ACu)

/** \\brief  50384, MCS Channel Program Counter Register */
#define GTM_MCS2_CH7_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0150384u)

/** \\brief  50388, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH7_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0150388u)

/** \\brief  5038C, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH7_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF015038Cu)

/** \\brief  50390, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH7_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0150390u)

/** \\brief  50394, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH7_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0150394u)

/** \\brief  50398, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH7_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0150398u)

/** \\brief  5039C, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH7_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF015039Cu)

/** \\brief  503A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH7_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF01503A0u)

/** \\brief  503A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH7_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF01503A4u)

/** \\brief  50404, MCS Clear Trigger Control Register */
#define GTM_MCS2_CTRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CTRG*)0xF0150404u)

/** \\brief  50400, MCS Control Register */
#define GTM_MCS2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CTRL*)0xF0150400u)

/** \\brief  50410, MCS Error Register */
#define GTM_MCS2_ERR /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_ERR*)0xF0150410u)

/** \\brief  5040C, MCS Channel Reset Register */
#define GTM_MCS2_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_RST*)0xF015040Cu)

/** \\brief  50408, MCS Set Trigger Control Register */
#define GTM_MCS2_STRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_STRG*)0xF0150408u)

/** \\brief  60028, MCS Channel ACB Register */
#define GTM_MCS3_CH0_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0160028u)

/** \\brief  60000, MCS Channel Control Register */
#define GTM_MCS3_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0160000u)

/** \\brief  60030, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0160030u)

/** \\brief  60034, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0160034u)

/** \\brief  60038, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0160038u)

/** \\brief  6002C, MCS Channel interrupt notification register */
#define GTM_MCS3_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF016002Cu)

/** \\brief  60004, MCS Channel Program Counter Register */
#define GTM_MCS3_CH0_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0160004u)

/** \\brief  60008, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH0_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0160008u)

/** \\brief  6000C, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH0_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF016000Cu)

/** \\brief  60010, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH0_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0160010u)

/** \\brief  60014, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH0_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0160014u)

/** \\brief  60018, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH0_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0160018u)

/** \\brief  6001C, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH0_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF016001Cu)

/** \\brief  60020, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH0_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0160020u)

/** \\brief  60024, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH0_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF0160024u)

/** \\brief  600A8, MCS Channel ACB Register */
#define GTM_MCS3_CH1_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01600A8u)

/** \\brief  60080, MCS Channel Control Register */
#define GTM_MCS3_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0160080u)

/** \\brief  600B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01600B0u)

/** \\brief  600B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01600B4u)

/** \\brief  600B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01600B8u)

/** \\brief  600AC, MCS Channel interrupt notification register */
#define GTM_MCS3_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01600ACu)

/** \\brief  60084, MCS Channel Program Counter Register */
#define GTM_MCS3_CH1_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0160084u)

/** \\brief  60088, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH1_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0160088u)

/** \\brief  6008C, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH1_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF016008Cu)

/** \\brief  60090, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH1_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0160090u)

/** \\brief  60094, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH1_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0160094u)

/** \\brief  60098, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH1_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0160098u)

/** \\brief  6009C, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH1_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF016009Cu)

/** \\brief  600A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH1_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF01600A0u)

/** \\brief  600A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH1_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF01600A4u)

/** \\brief  60128, MCS Channel ACB Register */
#define GTM_MCS3_CH2_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0160128u)

/** \\brief  60100, MCS Channel Control Register */
#define GTM_MCS3_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0160100u)

/** \\brief  60130, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0160130u)

/** \\brief  60134, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0160134u)

/** \\brief  60138, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0160138u)

/** \\brief  6012C, MCS Channel interrupt notification register */
#define GTM_MCS3_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF016012Cu)

/** \\brief  60104, MCS Channel Program Counter Register */
#define GTM_MCS3_CH2_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0160104u)

/** \\brief  60108, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH2_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0160108u)

/** \\brief  6010C, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH2_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF016010Cu)

/** \\brief  60110, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH2_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0160110u)

/** \\brief  60114, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH2_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0160114u)

/** \\brief  60118, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH2_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0160118u)

/** \\brief  6011C, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH2_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF016011Cu)

/** \\brief  60120, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH2_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0160120u)

/** \\brief  60124, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH2_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF0160124u)

/** \\brief  601A8, MCS Channel ACB Register */
#define GTM_MCS3_CH3_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01601A8u)

/** \\brief  60180, MCS Channel Control Register */
#define GTM_MCS3_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0160180u)

/** \\brief  601B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01601B0u)

/** \\brief  601B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01601B4u)

/** \\brief  601B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01601B8u)

/** \\brief  601AC, MCS Channel interrupt notification register */
#define GTM_MCS3_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01601ACu)

/** \\brief  60184, MCS Channel Program Counter Register */
#define GTM_MCS3_CH3_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0160184u)

/** \\brief  60188, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH3_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0160188u)

/** \\brief  6018C, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH3_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF016018Cu)

/** \\brief  60190, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH3_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0160190u)

/** \\brief  60194, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH3_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0160194u)

/** \\brief  60198, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH3_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0160198u)

/** \\brief  6019C, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH3_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF016019Cu)

/** \\brief  601A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH3_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF01601A0u)

/** \\brief  601A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH3_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF01601A4u)

/** \\brief  60228, MCS Channel ACB Register */
#define GTM_MCS3_CH4_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0160228u)

/** \\brief  60200, MCS Channel Control Register */
#define GTM_MCS3_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0160200u)

/** \\brief  60230, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0160230u)

/** \\brief  60234, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0160234u)

/** \\brief  60238, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0160238u)

/** \\brief  6022C, MCS Channel interrupt notification register */
#define GTM_MCS3_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF016022Cu)

/** \\brief  60204, MCS Channel Program Counter Register */
#define GTM_MCS3_CH4_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0160204u)

/** \\brief  60208, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH4_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0160208u)

/** \\brief  6020C, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH4_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF016020Cu)

/** \\brief  60210, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH4_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0160210u)

/** \\brief  60214, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH4_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0160214u)

/** \\brief  60218, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH4_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0160218u)

/** \\brief  6021C, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH4_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF016021Cu)

/** \\brief  60220, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH4_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0160220u)

/** \\brief  60224, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH4_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF0160224u)

/** \\brief  602A8, MCS Channel ACB Register */
#define GTM_MCS3_CH5_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01602A8u)

/** \\brief  60280, MCS Channel Control Register */
#define GTM_MCS3_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0160280u)

/** \\brief  602B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01602B0u)

/** \\brief  602B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01602B4u)

/** \\brief  602B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01602B8u)

/** \\brief  602AC, MCS Channel interrupt notification register */
#define GTM_MCS3_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01602ACu)

/** \\brief  60284, MCS Channel Program Counter Register */
#define GTM_MCS3_CH5_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0160284u)

/** \\brief  60288, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH5_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0160288u)

/** \\brief  6028C, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH5_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF016028Cu)

/** \\brief  60290, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH5_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0160290u)

/** \\brief  60294, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH5_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0160294u)

/** \\brief  60298, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH5_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0160298u)

/** \\brief  6029C, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH5_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF016029Cu)

/** \\brief  602A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH5_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF01602A0u)

/** \\brief  602A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH5_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF01602A4u)

/** \\brief  60328, MCS Channel ACB Register */
#define GTM_MCS3_CH6_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0160328u)

/** \\brief  60300, MCS Channel Control Register */
#define GTM_MCS3_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0160300u)

/** \\brief  60330, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0160330u)

/** \\brief  60334, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0160334u)

/** \\brief  60338, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0160338u)

/** \\brief  6032C, MCS Channel interrupt notification register */
#define GTM_MCS3_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF016032Cu)

/** \\brief  60304, MCS Channel Program Counter Register */
#define GTM_MCS3_CH6_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0160304u)

/** \\brief  60308, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH6_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0160308u)

/** \\brief  6030C, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH6_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF016030Cu)

/** \\brief  60310, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH6_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0160310u)

/** \\brief  60314, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH6_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0160314u)

/** \\brief  60318, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH6_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0160318u)

/** \\brief  6031C, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH6_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF016031Cu)

/** \\brief  60320, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH6_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0160320u)

/** \\brief  60324, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH6_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF0160324u)

/** \\brief  603A8, MCS Channel ACB Register */
#define GTM_MCS3_CH7_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01603A8u)

/** \\brief  60380, MCS Channel Control Register */
#define GTM_MCS3_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0160380u)

/** \\brief  603B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01603B0u)

/** \\brief  603B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01603B4u)

/** \\brief  603B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01603B8u)

/** \\brief  603AC, MCS Channel interrupt notification register */
#define GTM_MCS3_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01603ACu)

/** \\brief  60384, MCS Channel Program Counter Register */
#define GTM_MCS3_CH7_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0160384u)

/** \\brief  60388, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH7_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0160388u)

/** \\brief  6038C, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH7_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF016038Cu)

/** \\brief  60390, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH7_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0160390u)

/** \\brief  60394, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH7_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF0160394u)

/** \\brief  60398, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH7_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0160398u)

/** \\brief  6039C, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH7_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF016039Cu)

/** \\brief  603A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH7_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF01603A0u)

/** \\brief  603A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH7_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF01603A4u)

/** \\brief  60404, MCS Clear Trigger Control Register */
#define GTM_MCS3_CTRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CTRG*)0xF0160404u)

/** \\brief  60400, MCS Control Register */
#define GTM_MCS3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CTRL*)0xF0160400u)

/** \\brief  60410, MCS Error Register */
#define GTM_MCS3_ERR /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_ERR*)0xF0160410u)

/** \\brief  6040C, MCS Channel Reset Register */
#define GTM_MCS3_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_RST*)0xF016040Cu)

/** \\brief  60408, MCS Set Trigger Control Register */
#define GTM_MCS3_STRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_STRG*)0xF0160408u)

/** \\brief  184, Monitor Activity Register 0 */
#define GTM_MON_ACTIVITY_0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MON_ACTIVITY_0*)0xF0100184u)

/** \\brief  180, Monitor Status Register */
#define GTM_MON_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_MON_STATUS*)0xF0100180u)

/** \\brief  9FF64, MSC Input High Control Register */
#define GTM_MSCIN0_INHCON /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCIN_INHCON*)0xF019FF64u)

/** Alias (User Manual Name) for GTM_MSCIN0_INHCON.
* To use register names with standard convension, please use GTM_MSCIN0_INHCON.
*/
#define	GTM_MSC0INHCON	(GTM_MSCIN0_INHCON)

/** \\brief  9FF60, MSC Input Low Control Register */
#define GTM_MSCIN0_INLCON /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCIN_INLCON*)0xF019FF60u)

/** Alias (User Manual Name) for GTM_MSCIN0_INLCON.
* To use register names with standard convension, please use GTM_MSCIN0_INLCON.
*/
#define	GTM_MSC0INLCON	(GTM_MSCIN0_INLCON)

/** \\brief  9FF6C, MSC Input High Control Register */
#define GTM_MSCIN1_INHCON /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCIN_INHCON*)0xF019FF6Cu)

/** Alias (User Manual Name) for GTM_MSCIN1_INHCON.
* To use register names with standard convension, please use GTM_MSCIN1_INHCON.
*/
#define	GTM_MSC1INHCON	(GTM_MSCIN1_INHCON)

/** \\brief  9FF68, MSC Input Low Control Register */
#define GTM_MSCIN1_INLCON /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCIN_INLCON*)0xF019FF68u)

/** Alias (User Manual Name) for GTM_MSCIN1_INLCON.
* To use register names with standard convension, please use GTM_MSCIN1_INLCON.
*/
#define	GTM_MSC1INLCON	(GTM_MSCIN1_INLCON)

/** \\brief  9FF00, MSC Set Control 0 Register */
#define GTM_MSCSET_1S0_CON0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON0*)0xF019FF00u)

/** Alias (User Manual Name) for GTM_MSCSET_1S0_CON0.
* To use register names with standard convension, please use GTM_MSCSET_1S0_CON0.
*/
#define	GTM_MSCSET1CON0	(GTM_MSCSET_1S0_CON0)

/** \\brief  9FF04, MSC Set Control 1 Register */
#define GTM_MSCSET_1S0_CON1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON1*)0xF019FF04u)

/** Alias (User Manual Name) for GTM_MSCSET_1S0_CON1.
* To use register names with standard convension, please use GTM_MSCSET_1S0_CON1.
*/
#define	GTM_MSCSET1CON1	(GTM_MSCSET_1S0_CON1)

/** \\brief  9FF08, MSC Set Control 2 Register */
#define GTM_MSCSET_1S0_CON2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON2*)0xF019FF08u)

/** Alias (User Manual Name) for GTM_MSCSET_1S0_CON2.
* To use register names with standard convension, please use GTM_MSCSET_1S0_CON2.
*/
#define	GTM_MSCSET1CON2	(GTM_MSCSET_1S0_CON2)

/** \\brief  9FF0C, MSC Set Control 3 Register */
#define GTM_MSCSET_1S0_CON3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON3*)0xF019FF0Cu)

/** Alias (User Manual Name) for GTM_MSCSET_1S0_CON3.
* To use register names with standard convension, please use GTM_MSCSET_1S0_CON3.
*/
#define	GTM_MSCSET1CON3	(GTM_MSCSET_1S0_CON3)

/** \\brief  9FF10, MSC Set Control 0 Register */
#define GTM_MSCSET_1S1_CON0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON0*)0xF019FF10u)

/** Alias (User Manual Name) for GTM_MSCSET_1S1_CON0.
* To use register names with standard convension, please use GTM_MSCSET_1S1_CON0.
*/
#define	GTM_MSCSET2CON0	(GTM_MSCSET_1S1_CON0)

/** \\brief  9FF14, MSC Set Control 1 Register */
#define GTM_MSCSET_1S1_CON1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON1*)0xF019FF14u)

/** Alias (User Manual Name) for GTM_MSCSET_1S1_CON1.
* To use register names with standard convension, please use GTM_MSCSET_1S1_CON1.
*/
#define	GTM_MSCSET2CON1	(GTM_MSCSET_1S1_CON1)

/** \\brief  9FF18, MSC Set Control 2 Register */
#define GTM_MSCSET_1S1_CON2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON2*)0xF019FF18u)

/** Alias (User Manual Name) for GTM_MSCSET_1S1_CON2.
* To use register names with standard convension, please use GTM_MSCSET_1S1_CON2.
*/
#define	GTM_MSCSET2CON2	(GTM_MSCSET_1S1_CON2)

/** \\brief  9FF1C, MSC Set Control 3 Register */
#define GTM_MSCSET_1S1_CON3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON3*)0xF019FF1Cu)

/** Alias (User Manual Name) for GTM_MSCSET_1S1_CON3.
* To use register names with standard convension, please use GTM_MSCSET_1S1_CON3.
*/
#define	GTM_MSCSET2CON3	(GTM_MSCSET_1S1_CON3)

/** \\brief  9FF20, MSC Set Control 0 Register */
#define GTM_MSCSET_1S2_CON0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON0*)0xF019FF20u)

/** Alias (User Manual Name) for GTM_MSCSET_1S2_CON0.
* To use register names with standard convension, please use GTM_MSCSET_1S2_CON0.
*/
#define	GTM_MSCSET3CON0	(GTM_MSCSET_1S2_CON0)

/** \\brief  9FF24, MSC Set Control 1 Register */
#define GTM_MSCSET_1S2_CON1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON1*)0xF019FF24u)

/** Alias (User Manual Name) for GTM_MSCSET_1S2_CON1.
* To use register names with standard convension, please use GTM_MSCSET_1S2_CON1.
*/
#define	GTM_MSCSET3CON1	(GTM_MSCSET_1S2_CON1)

/** \\brief  9FF28, MSC Set Control 2 Register */
#define GTM_MSCSET_1S2_CON2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON2*)0xF019FF28u)

/** Alias (User Manual Name) for GTM_MSCSET_1S2_CON2.
* To use register names with standard convension, please use GTM_MSCSET_1S2_CON2.
*/
#define	GTM_MSCSET3CON2	(GTM_MSCSET_1S2_CON2)

/** \\brief  9FF2C, MSC Set Control 3 Register */
#define GTM_MSCSET_1S2_CON3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON3*)0xF019FF2Cu)

/** Alias (User Manual Name) for GTM_MSCSET_1S2_CON3.
* To use register names with standard convension, please use GTM_MSCSET_1S2_CON3.
*/
#define	GTM_MSCSET3CON3	(GTM_MSCSET_1S2_CON3)

/** \\brief  9FF30, MSC Set Control 0 Register */
#define GTM_MSCSET_1S3_CON0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON0*)0xF019FF30u)

/** Alias (User Manual Name) for GTM_MSCSET_1S3_CON0.
* To use register names with standard convension, please use GTM_MSCSET_1S3_CON0.
*/
#define	GTM_MSCSET4CON0	(GTM_MSCSET_1S3_CON0)

/** \\brief  9FF34, MSC Set Control 1 Register */
#define GTM_MSCSET_1S3_CON1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON1*)0xF019FF34u)

/** Alias (User Manual Name) for GTM_MSCSET_1S3_CON1.
* To use register names with standard convension, please use GTM_MSCSET_1S3_CON1.
*/
#define	GTM_MSCSET4CON1	(GTM_MSCSET_1S3_CON1)

/** \\brief  9FF38, MSC Set Control 2 Register */
#define GTM_MSCSET_1S3_CON2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON2*)0xF019FF38u)

/** Alias (User Manual Name) for GTM_MSCSET_1S3_CON2.
* To use register names with standard convension, please use GTM_MSCSET_1S3_CON2.
*/
#define	GTM_MSCSET4CON2	(GTM_MSCSET_1S3_CON2)

/** \\brief  9FF3C, MSC Set Control 3 Register */
#define GTM_MSCSET_1S3_CON3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON3*)0xF019FF3Cu)

/** Alias (User Manual Name) for GTM_MSCSET_1S3_CON3.
* To use register names with standard convension, please use GTM_MSCSET_1S3_CON3.
*/
#define	GTM_MSCSET4CON3	(GTM_MSCSET_1S3_CON3)

/** \\brief  9FDE8, OCDS Control and Status */
#define GTM_OCS /*lint --e(923)*/ (*(volatile Ifx_GTM_OCS*)0xF019FDE8u)

/** \\brief  9FDDC, OCDS Debug Access Register */
#define GTM_ODA /*lint --e(923)*/ (*(volatile Ifx_GTM_ODA*)0xF019FDDCu)

/** \\brief  9FDC4, OCDS TBU0 Trigger Register */
#define GTM_OTBU0T /*lint --e(923)*/ (*(volatile Ifx_GTM_OTBU0T*)0xF019FDC4u)

/** \\brief  9FDC8, OCDS TBU1 Trigger Register */
#define GTM_OTBU1T /*lint --e(923)*/ (*(volatile Ifx_GTM_OTBU1T*)0xF019FDC8u)

/** \\brief  9FDCC, OCDS TBU2 Trigger Register */
#define GTM_OTBU2T /*lint --e(923)*/ (*(volatile Ifx_GTM_OTBU2T*)0xF019FDCCu)

/** \\brief  9FDD4, OCDS Trigger Set Control 0 Register */
#define GTM_OTSC0 /*lint --e(923)*/ (*(volatile Ifx_GTM_OTSC0*)0xF019FDD4u)

/** \\brief  9FDD8, OCDS Trigger Set Control 1 Register */
#define GTM_OTSC1 /*lint --e(923)*/ (*(volatile Ifx_GTM_OTSC1*)0xF019FDD8u)

/** \\brief  9FDD0, OCDS Trigger Set Select Register */
#define GTM_OTSS /*lint --e(923)*/ (*(volatile Ifx_GTM_OTSS*)0xF019FDD0u)

/** \\brief  0, GTM Version Control Register */
#define GTM_REV /*lint --e(923)*/ (*(volatile Ifx_GTM_REV*)0xF0100000u)

/** \\brief  4, GTM Global Reset Register */
#define GTM_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_RST*)0xF0100004u)

/** \\brief  800, SPE Control Status Register */
#define GTM_SPE0_CTRL_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_CTRL_STAT*)0xF0100800u)

/** \\brief  830, SPE Interrupt Enable Register */
#define GTM_SPE0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_EN*)0xF0100830u)

/** \\brief  834, SPE Interrupt Generation by Software */
#define GTM_SPE0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_FORCINT*)0xF0100834u)

/** \\brief  838, SPE IRQ Mode Configuration Register */
#define GTM_SPE0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_MODE*)0xF0100838u)

/** \\brief  82C, SPE Interrupt Notification Register */
#define GTM_SPE0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_NOTIFY*)0xF010082Cu)

/** \\brief  828, SPE Output Control Register */
#define GTM_SPE0_OUT_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_CTRL*)0xF0100828u)

/** \\brief  808, SPE Output Definition Register r */
#define GTM_SPE0_OUT_PAT0 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100808u)

/** \\brief  80C, SPE Output Definition Register r */
#define GTM_SPE0_OUT_PAT1 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010080Cu)

/** \\brief  810, SPE Output Definition Register r */
#define GTM_SPE0_OUT_PAT2 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100810u)

/** \\brief  814, SPE Output Definition Register r */
#define GTM_SPE0_OUT_PAT3 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100814u)

/** \\brief  818, SPE Output Definition Register r */
#define GTM_SPE0_OUT_PAT4 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100818u)

/** \\brief  81C, SPE Output Definition Register r */
#define GTM_SPE0_OUT_PAT5 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010081Cu)

/** \\brief  820, SPE Output Definition Register r */
#define GTM_SPE0_OUT_PAT6 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100820u)

/** \\brief  824, SPE Output Definition Register r */
#define GTM_SPE0_OUT_PAT7 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100824u)

/** \\brief  804, SPE Input Pattern Definition Register */
#define GTM_SPE0_PAT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_PAT*)0xF0100804u)

/** \\brief  880, SPE Control Status Register */
#define GTM_SPE1_CTRL_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_CTRL_STAT*)0xF0100880u)

/** \\brief  8B0, SPE Interrupt Enable Register */
#define GTM_SPE1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_EN*)0xF01008B0u)

/** \\brief  8B4, SPE Interrupt Generation by Software */
#define GTM_SPE1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_FORCINT*)0xF01008B4u)

/** \\brief  8B8, SPE IRQ Mode Configuration Register */
#define GTM_SPE1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_MODE*)0xF01008B8u)

/** \\brief  8AC, SPE Interrupt Notification Register */
#define GTM_SPE1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_NOTIFY*)0xF01008ACu)

/** \\brief  8A8, SPE Output Control Register */
#define GTM_SPE1_OUT_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_CTRL*)0xF01008A8u)

/** \\brief  888, SPE Output Definition Register r */
#define GTM_SPE1_OUT_PAT0 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100888u)

/** \\brief  88C, SPE Output Definition Register r */
#define GTM_SPE1_OUT_PAT1 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010088Cu)

/** \\brief  890, SPE Output Definition Register r */
#define GTM_SPE1_OUT_PAT2 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100890u)

/** \\brief  894, SPE Output Definition Register r */
#define GTM_SPE1_OUT_PAT3 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100894u)

/** \\brief  898, SPE Output Definition Register r */
#define GTM_SPE1_OUT_PAT4 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100898u)

/** \\brief  89C, SPE Output Definition Register r */
#define GTM_SPE1_OUT_PAT5 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010089Cu)

/** \\brief  8A0, SPE Output Definition Register r */
#define GTM_SPE1_OUT_PAT6 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF01008A0u)

/** \\brief  8A4, SPE Output Definition Register r */
#define GTM_SPE1_OUT_PAT7 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF01008A4u)

/** \\brief  884, SPE Input Pattern Definition Register */
#define GTM_SPE1_PAT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_PAT*)0xF0100884u)

/** \\brief  108, TBU Channel 0 Base Register */
#define GTM_TBU_CH0_BASE /*lint --e(923)*/ (*(volatile Ifx_GTM_TBU_CH0_BASE*)0xF0100108u)

/** \\brief  104, TBU Channel 0 Control Register */
#define GTM_TBU_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TBU_CH0_CTRL*)0xF0100104u)

/** \\brief  110, TBU Channel 1 Base Register */
#define GTM_TBU_CH1_BASE /*lint --e(923)*/ (*(volatile Ifx_GTM_TBU_CH1_BASE*)0xF0100110u)

/** \\brief  10C, TBU Channel 1 Control Register */
#define GTM_TBU_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TBU_CH1_CTRL*)0xF010010Cu)

/** \\brief  118, TBU Channel 2 Base Register */
#define GTM_TBU_CH2_BASE /*lint --e(923)*/ (*(volatile Ifx_GTM_TBU_CH2_BASE*)0xF0100118u)

/** \\brief  114, TBU Channel 2 Control Register */
#define GTM_TBU_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TBU_CH2_CTRL*)0xF0100114u)

/** \\brief  100, TBU Global Channel Enable Register */
#define GTM_TBU_CHEN /*lint --e(923)*/ (*(volatile Ifx_GTM_TBU_CHEN*)0xF0100100u)

/** \\brief  1018, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH0_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101018u)

/** \\brief  101C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH0_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010101Cu)

/** \\brief  1000, TIM Channel Control Register */
#define GTM_TIM0_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101000u)

/** \\brief  1008, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH0_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101008u)

/** \\brief  1004, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH0_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101004u)

/** \\brief  1010, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH0_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101010u)

/** \\brief  1014, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH0_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101014u)

/** \\brief  1024, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101024u)

/** \\brief  1028, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101028u)

/** \\brief  102C, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010102Cu)

/** \\brief  1020, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101020u)

/** \\brief  100C, TIM Channel TDU Control Register */
#define GTM_TIM0_CH0_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010100Cu)

/** \\brief  1098, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH1_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101098u)

/** \\brief  109C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH1_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010109Cu)

/** \\brief  1080, TIM Channel Control Register */
#define GTM_TIM0_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101080u)

/** \\brief  1088, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH1_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101088u)

/** \\brief  1084, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH1_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101084u)

/** \\brief  1090, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH1_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101090u)

/** \\brief  1094, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH1_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101094u)

/** \\brief  10A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01010A4u)

/** \\brief  10A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01010A8u)

/** \\brief  10AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01010ACu)

/** \\brief  10A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01010A0u)

/** \\brief  108C, TIM Channel TDU Control Register */
#define GTM_TIM0_CH1_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010108Cu)

/** \\brief  1118, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH2_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101118u)

/** \\brief  111C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH2_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010111Cu)

/** \\brief  1100, TIM Channel Control Register */
#define GTM_TIM0_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101100u)

/** \\brief  1108, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH2_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101108u)

/** \\brief  1104, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH2_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101104u)

/** \\brief  1110, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH2_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101110u)

/** \\brief  1114, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH2_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101114u)

/** \\brief  1124, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101124u)

/** \\brief  1128, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101128u)

/** \\brief  112C, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010112Cu)

/** \\brief  1120, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101120u)

/** \\brief  110C, TIM Channel TDU Control Register */
#define GTM_TIM0_CH2_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010110Cu)

/** \\brief  1198, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH3_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101198u)

/** \\brief  119C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH3_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010119Cu)

/** \\brief  1180, TIM Channel Control Register */
#define GTM_TIM0_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101180u)

/** \\brief  1188, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH3_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101188u)

/** \\brief  1184, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH3_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101184u)

/** \\brief  1190, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH3_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101190u)

/** \\brief  1194, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH3_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101194u)

/** \\brief  11A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01011A4u)

/** \\brief  11A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01011A8u)

/** \\brief  11AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01011ACu)

/** \\brief  11A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01011A0u)

/** \\brief  118C, TIM Channel TDU Control Register */
#define GTM_TIM0_CH3_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010118Cu)

/** \\brief  1218, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH4_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101218u)

/** \\brief  121C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH4_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010121Cu)

/** \\brief  1200, TIM Channel Control Register */
#define GTM_TIM0_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101200u)

/** \\brief  1208, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH4_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101208u)

/** \\brief  1204, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH4_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101204u)

/** \\brief  1210, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH4_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101210u)

/** \\brief  1214, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH4_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101214u)

/** \\brief  1224, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101224u)

/** \\brief  1228, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101228u)

/** \\brief  122C, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010122Cu)

/** \\brief  1220, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101220u)

/** \\brief  120C, TIM Channel TDU Control Register */
#define GTM_TIM0_CH4_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010120Cu)

/** \\brief  1298, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH5_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101298u)

/** \\brief  129C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH5_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010129Cu)

/** \\brief  1280, TIM Channel Control Register */
#define GTM_TIM0_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101280u)

/** \\brief  1288, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH5_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101288u)

/** \\brief  1284, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH5_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101284u)

/** \\brief  1290, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH5_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101290u)

/** \\brief  1294, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH5_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101294u)

/** \\brief  12A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01012A4u)

/** \\brief  12A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01012A8u)

/** \\brief  12AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01012ACu)

/** \\brief  12A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01012A0u)

/** \\brief  128C, TIM Channel TDU Control Register */
#define GTM_TIM0_CH5_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010128Cu)

/** \\brief  1318, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH6_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101318u)

/** \\brief  131C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH6_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010131Cu)

/** \\brief  1300, TIM Channel Control Register */
#define GTM_TIM0_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101300u)

/** \\brief  1308, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH6_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101308u)

/** \\brief  1304, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH6_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101304u)

/** \\brief  1310, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH6_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101310u)

/** \\brief  1314, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH6_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101314u)

/** \\brief  1324, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101324u)

/** \\brief  1328, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101328u)

/** \\brief  132C, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010132Cu)

/** \\brief  1320, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101320u)

/** \\brief  130C, TIM Channel TDU Control Register */
#define GTM_TIM0_CH6_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010130Cu)

/** \\brief  1398, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH7_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101398u)

/** \\brief  139C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH7_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010139Cu)

/** \\brief  1380, TIM Channel Control Register */
#define GTM_TIM0_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101380u)

/** \\brief  1388, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH7_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101388u)

/** \\brief  1384, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH7_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101384u)

/** \\brief  1390, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH7_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101390u)

/** \\brief  1394, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH7_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101394u)

/** \\brief  13A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01013A4u)

/** \\brief  13A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01013A8u)

/** \\brief  13AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01013ACu)

/** \\brief  13A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01013A0u)

/** \\brief  138C, TIM Channel TDU Control Register */
#define GTM_TIM0_CH7_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010138Cu)

/** \\brief  1400, TIM Global Software Reset Register */
#define GTM_TIM0_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_RST*)0xF0101400u)

/** \\brief  1818, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH0_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101818u)

/** \\brief  181C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH0_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010181Cu)

/** \\brief  1800, TIM Channel Control Register */
#define GTM_TIM1_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101800u)

/** \\brief  1808, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH0_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101808u)

/** \\brief  1804, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH0_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101804u)

/** \\brief  1810, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH0_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101810u)

/** \\brief  1814, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH0_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101814u)

/** \\brief  1824, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101824u)

/** \\brief  1828, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101828u)

/** \\brief  182C, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010182Cu)

/** \\brief  1820, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101820u)

/** \\brief  180C, TIM Channel TDU Control Register */
#define GTM_TIM1_CH0_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010180Cu)

/** \\brief  1898, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH1_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101898u)

/** \\brief  189C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH1_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010189Cu)

/** \\brief  1880, TIM Channel Control Register */
#define GTM_TIM1_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101880u)

/** \\brief  1888, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH1_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101888u)

/** \\brief  1884, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH1_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101884u)

/** \\brief  1890, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH1_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101890u)

/** \\brief  1894, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH1_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101894u)

/** \\brief  18A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01018A4u)

/** \\brief  18A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01018A8u)

/** \\brief  18AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01018ACu)

/** \\brief  18A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01018A0u)

/** \\brief  188C, TIM Channel TDU Control Register */
#define GTM_TIM1_CH1_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010188Cu)

/** \\brief  1918, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH2_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101918u)

/** \\brief  191C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH2_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010191Cu)

/** \\brief  1900, TIM Channel Control Register */
#define GTM_TIM1_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101900u)

/** \\brief  1908, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH2_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101908u)

/** \\brief  1904, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH2_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101904u)

/** \\brief  1910, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH2_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101910u)

/** \\brief  1914, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH2_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101914u)

/** \\brief  1924, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101924u)

/** \\brief  1928, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101928u)

/** \\brief  192C, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010192Cu)

/** \\brief  1920, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101920u)

/** \\brief  190C, TIM Channel TDU Control Register */
#define GTM_TIM1_CH2_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010190Cu)

/** \\brief  1998, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH3_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101998u)

/** \\brief  199C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH3_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010199Cu)

/** \\brief  1980, TIM Channel Control Register */
#define GTM_TIM1_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101980u)

/** \\brief  1988, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH3_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101988u)

/** \\brief  1984, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH3_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101984u)

/** \\brief  1990, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH3_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101990u)

/** \\brief  1994, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH3_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101994u)

/** \\brief  19A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01019A4u)

/** \\brief  19A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01019A8u)

/** \\brief  19AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01019ACu)

/** \\brief  19A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01019A0u)

/** \\brief  198C, TIM Channel TDU Control Register */
#define GTM_TIM1_CH3_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010198Cu)

/** \\brief  1A18, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH4_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101A18u)

/** \\brief  1A1C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH4_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101A1Cu)

/** \\brief  1A00, TIM Channel Control Register */
#define GTM_TIM1_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101A00u)

/** \\brief  1A08, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH4_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101A08u)

/** \\brief  1A04, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH4_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101A04u)

/** \\brief  1A10, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH4_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101A10u)

/** \\brief  1A14, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH4_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101A14u)

/** \\brief  1A24, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101A24u)

/** \\brief  1A28, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101A28u)

/** \\brief  1A2C, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101A2Cu)

/** \\brief  1A20, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101A20u)

/** \\brief  1A0C, TIM Channel TDU Control Register */
#define GTM_TIM1_CH4_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF0101A0Cu)

/** \\brief  1A98, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH5_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101A98u)

/** \\brief  1A9C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH5_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101A9Cu)

/** \\brief  1A80, TIM Channel Control Register */
#define GTM_TIM1_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101A80u)

/** \\brief  1A88, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH5_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101A88u)

/** \\brief  1A84, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH5_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101A84u)

/** \\brief  1A90, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH5_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101A90u)

/** \\brief  1A94, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH5_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101A94u)

/** \\brief  1AA4, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101AA4u)

/** \\brief  1AA8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101AA8u)

/** \\brief  1AAC, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101AACu)

/** \\brief  1AA0, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101AA0u)

/** \\brief  1A8C, TIM Channel TDU Control Register */
#define GTM_TIM1_CH5_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF0101A8Cu)

/** \\brief  1B18, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH6_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101B18u)

/** \\brief  1B1C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH6_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101B1Cu)

/** \\brief  1B00, TIM Channel Control Register */
#define GTM_TIM1_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101B00u)

/** \\brief  1B08, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH6_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101B08u)

/** \\brief  1B04, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH6_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101B04u)

/** \\brief  1B10, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH6_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101B10u)

/** \\brief  1B14, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH6_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101B14u)

/** \\brief  1B24, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101B24u)

/** \\brief  1B28, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101B28u)

/** \\brief  1B2C, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101B2Cu)

/** \\brief  1B20, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101B20u)

/** \\brief  1B0C, TIM Channel TDU Control Register */
#define GTM_TIM1_CH6_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF0101B0Cu)

/** \\brief  1B98, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH7_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101B98u)

/** \\brief  1B9C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH7_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101B9Cu)

/** \\brief  1B80, TIM Channel Control Register */
#define GTM_TIM1_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101B80u)

/** \\brief  1B88, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH7_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101B88u)

/** \\brief  1B84, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH7_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101B84u)

/** \\brief  1B90, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH7_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101B90u)

/** \\brief  1B94, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH7_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101B94u)

/** \\brief  1BA4, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101BA4u)

/** \\brief  1BA8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101BA8u)

/** \\brief  1BAC, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101BACu)

/** \\brief  1BA0, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101BA0u)

/** \\brief  1B8C, TIM Channel TDU Control Register */
#define GTM_TIM1_CH7_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF0101B8Cu)

/** \\brief  1C00, TIM Global Software Reset Register */
#define GTM_TIM1_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_RST*)0xF0101C00u)

/** \\brief  2018, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH0_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102018u)

/** \\brief  201C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH0_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010201Cu)

/** \\brief  2000, TIM Channel Control Register */
#define GTM_TIM2_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102000u)

/** \\brief  2008, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH0_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102008u)

/** \\brief  2004, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH0_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102004u)

/** \\brief  2010, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH0_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102010u)

/** \\brief  2014, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH0_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102014u)

/** \\brief  2024, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102024u)

/** \\brief  2028, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102028u)

/** \\brief  202C, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010202Cu)

/** \\brief  2020, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102020u)

/** \\brief  200C, TIM Channel TDU Control Register */
#define GTM_TIM2_CH0_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010200Cu)

/** \\brief  2098, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH1_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102098u)

/** \\brief  209C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH1_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010209Cu)

/** \\brief  2080, TIM Channel Control Register */
#define GTM_TIM2_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102080u)

/** \\brief  2088, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH1_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102088u)

/** \\brief  2084, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH1_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102084u)

/** \\brief  2090, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH1_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102090u)

/** \\brief  2094, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH1_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102094u)

/** \\brief  20A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01020A4u)

/** \\brief  20A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01020A8u)

/** \\brief  20AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01020ACu)

/** \\brief  20A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01020A0u)

/** \\brief  208C, TIM Channel TDU Control Register */
#define GTM_TIM2_CH1_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010208Cu)

/** \\brief  2118, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH2_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102118u)

/** \\brief  211C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH2_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010211Cu)

/** \\brief  2100, TIM Channel Control Register */
#define GTM_TIM2_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102100u)

/** \\brief  2108, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH2_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102108u)

/** \\brief  2104, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH2_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102104u)

/** \\brief  2110, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH2_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102110u)

/** \\brief  2114, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH2_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102114u)

/** \\brief  2124, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102124u)

/** \\brief  2128, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102128u)

/** \\brief  212C, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010212Cu)

/** \\brief  2120, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102120u)

/** \\brief  210C, TIM Channel TDU Control Register */
#define GTM_TIM2_CH2_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010210Cu)

/** \\brief  2198, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH3_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102198u)

/** \\brief  219C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH3_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010219Cu)

/** \\brief  2180, TIM Channel Control Register */
#define GTM_TIM2_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102180u)

/** \\brief  2188, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH3_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102188u)

/** \\brief  2184, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH3_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102184u)

/** \\brief  2190, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH3_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102190u)

/** \\brief  2194, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH3_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102194u)

/** \\brief  21A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01021A4u)

/** \\brief  21A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01021A8u)

/** \\brief  21AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01021ACu)

/** \\brief  21A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01021A0u)

/** \\brief  218C, TIM Channel TDU Control Register */
#define GTM_TIM2_CH3_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010218Cu)

/** \\brief  2218, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH4_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102218u)

/** \\brief  221C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH4_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010221Cu)

/** \\brief  2200, TIM Channel Control Register */
#define GTM_TIM2_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102200u)

/** \\brief  2208, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH4_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102208u)

/** \\brief  2204, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH4_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102204u)

/** \\brief  2210, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH4_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102210u)

/** \\brief  2214, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH4_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102214u)

/** \\brief  2224, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102224u)

/** \\brief  2228, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102228u)

/** \\brief  222C, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010222Cu)

/** \\brief  2220, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102220u)

/** \\brief  220C, TIM Channel TDU Control Register */
#define GTM_TIM2_CH4_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010220Cu)

/** \\brief  2298, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH5_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102298u)

/** \\brief  229C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH5_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010229Cu)

/** \\brief  2280, TIM Channel Control Register */
#define GTM_TIM2_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102280u)

/** \\brief  2288, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH5_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102288u)

/** \\brief  2284, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH5_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102284u)

/** \\brief  2290, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH5_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102290u)

/** \\brief  2294, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH5_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102294u)

/** \\brief  22A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01022A4u)

/** \\brief  22A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01022A8u)

/** \\brief  22AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01022ACu)

/** \\brief  22A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01022A0u)

/** \\brief  228C, TIM Channel TDU Control Register */
#define GTM_TIM2_CH5_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010228Cu)

/** \\brief  2318, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH6_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102318u)

/** \\brief  231C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH6_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010231Cu)

/** \\brief  2300, TIM Channel Control Register */
#define GTM_TIM2_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102300u)

/** \\brief  2308, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH6_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102308u)

/** \\brief  2304, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH6_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102304u)

/** \\brief  2310, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH6_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102310u)

/** \\brief  2314, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH6_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102314u)

/** \\brief  2324, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102324u)

/** \\brief  2328, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102328u)

/** \\brief  232C, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010232Cu)

/** \\brief  2320, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102320u)

/** \\brief  230C, TIM Channel TDU Control Register */
#define GTM_TIM2_CH6_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010230Cu)

/** \\brief  2398, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH7_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102398u)

/** \\brief  239C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH7_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010239Cu)

/** \\brief  2380, TIM Channel Control Register */
#define GTM_TIM2_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102380u)

/** \\brief  2388, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH7_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102388u)

/** \\brief  2384, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH7_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102384u)

/** \\brief  2390, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH7_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102390u)

/** \\brief  2394, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH7_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102394u)

/** \\brief  23A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01023A4u)

/** \\brief  23A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01023A8u)

/** \\brief  23AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01023ACu)

/** \\brief  23A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01023A0u)

/** \\brief  238C, TIM Channel TDU Control Register */
#define GTM_TIM2_CH7_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010238Cu)

/** \\brief  2400, TIM Global Software Reset Register */
#define GTM_TIM2_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_RST*)0xF0102400u)

/** \\brief  2818, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH0_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102818u)

/** \\brief  281C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH0_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010281Cu)

/** \\brief  2800, TIM Channel Control Register */
#define GTM_TIM3_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102800u)

/** \\brief  2808, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH0_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102808u)

/** \\brief  2804, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH0_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102804u)

/** \\brief  2810, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH0_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102810u)

/** \\brief  2814, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH0_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102814u)

/** \\brief  2824, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102824u)

/** \\brief  2828, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102828u)

/** \\brief  282C, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010282Cu)

/** \\brief  2820, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102820u)

/** \\brief  280C, TIM Channel TDU Control Register */
#define GTM_TIM3_CH0_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010280Cu)

/** \\brief  2898, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH1_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102898u)

/** \\brief  289C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH1_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010289Cu)

/** \\brief  2880, TIM Channel Control Register */
#define GTM_TIM3_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102880u)

/** \\brief  2888, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH1_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102888u)

/** \\brief  2884, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH1_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102884u)

/** \\brief  2890, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH1_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102890u)

/** \\brief  2894, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH1_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102894u)

/** \\brief  28A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01028A4u)

/** \\brief  28A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01028A8u)

/** \\brief  28AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01028ACu)

/** \\brief  28A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01028A0u)

/** \\brief  288C, TIM Channel TDU Control Register */
#define GTM_TIM3_CH1_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010288Cu)

/** \\brief  2918, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH2_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102918u)

/** \\brief  291C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH2_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010291Cu)

/** \\brief  2900, TIM Channel Control Register */
#define GTM_TIM3_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102900u)

/** \\brief  2908, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH2_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102908u)

/** \\brief  2904, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH2_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102904u)

/** \\brief  2910, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH2_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102910u)

/** \\brief  2914, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH2_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102914u)

/** \\brief  2924, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102924u)

/** \\brief  2928, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102928u)

/** \\brief  292C, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010292Cu)

/** \\brief  2920, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102920u)

/** \\brief  290C, TIM Channel TDU Control Register */
#define GTM_TIM3_CH2_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010290Cu)

/** \\brief  2998, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH3_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102998u)

/** \\brief  299C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH3_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010299Cu)

/** \\brief  2980, TIM Channel Control Register */
#define GTM_TIM3_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102980u)

/** \\brief  2988, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH3_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102988u)

/** \\brief  2984, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH3_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102984u)

/** \\brief  2990, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH3_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102990u)

/** \\brief  2994, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH3_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102994u)

/** \\brief  29A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01029A4u)

/** \\brief  29A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01029A8u)

/** \\brief  29AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01029ACu)

/** \\brief  29A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01029A0u)

/** \\brief  298C, TIM Channel TDU Control Register */
#define GTM_TIM3_CH3_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010298Cu)

/** \\brief  2A18, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH4_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102A18u)

/** \\brief  2A1C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH4_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102A1Cu)

/** \\brief  2A00, TIM Channel Control Register */
#define GTM_TIM3_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102A00u)

/** \\brief  2A08, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH4_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102A08u)

/** \\brief  2A04, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH4_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102A04u)

/** \\brief  2A10, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH4_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102A10u)

/** \\brief  2A14, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH4_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102A14u)

/** \\brief  2A24, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102A24u)

/** \\brief  2A28, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102A28u)

/** \\brief  2A2C, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102A2Cu)

/** \\brief  2A20, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102A20u)

/** \\brief  2A0C, TIM Channel TDU Control Register */
#define GTM_TIM3_CH4_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF0102A0Cu)

/** \\brief  2A98, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH5_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102A98u)

/** \\brief  2A9C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH5_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102A9Cu)

/** \\brief  2A80, TIM Channel Control Register */
#define GTM_TIM3_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102A80u)

/** \\brief  2A88, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH5_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102A88u)

/** \\brief  2A84, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH5_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102A84u)

/** \\brief  2A90, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH5_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102A90u)

/** \\brief  2A94, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH5_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102A94u)

/** \\brief  2AA4, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102AA4u)

/** \\brief  2AA8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102AA8u)

/** \\brief  2AAC, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102AACu)

/** \\brief  2AA0, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102AA0u)

/** \\brief  2A8C, TIM Channel TDU Control Register */
#define GTM_TIM3_CH5_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF0102A8Cu)

/** \\brief  2B18, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH6_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102B18u)

/** \\brief  2B1C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH6_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102B1Cu)

/** \\brief  2B00, TIM Channel Control Register */
#define GTM_TIM3_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102B00u)

/** \\brief  2B08, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH6_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102B08u)

/** \\brief  2B04, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH6_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102B04u)

/** \\brief  2B10, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH6_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102B10u)

/** \\brief  2B14, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH6_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102B14u)

/** \\brief  2B24, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102B24u)

/** \\brief  2B28, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102B28u)

/** \\brief  2B2C, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102B2Cu)

/** \\brief  2B20, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102B20u)

/** \\brief  2B0C, TIM Channel TDU Control Register */
#define GTM_TIM3_CH6_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF0102B0Cu)

/** \\brief  2B98, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH7_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102B98u)

/** \\brief  2B9C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH7_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102B9Cu)

/** \\brief  2B80, TIM Channel Control Register */
#define GTM_TIM3_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102B80u)

/** \\brief  2B88, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH7_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102B88u)

/** \\brief  2B84, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH7_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102B84u)

/** \\brief  2B90, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH7_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102B90u)

/** \\brief  2B94, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH7_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102B94u)

/** \\brief  2BA4, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102BA4u)

/** \\brief  2BA8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102BA8u)

/** \\brief  2BAC, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102BACu)

/** \\brief  2BA0, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102BA0u)

/** \\brief  2B8C, TIM Channel TDU Control Register */
#define GTM_TIM3_CH7_TDU /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDU*)0xF0102B8Cu)

/** \\brief  2C00, TIM Global Software Reset Register */
#define GTM_TIM3_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_RST*)0xF0102C00u)

/** \\brief  8088, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108088u)

/** \\brief  8090, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108090u)

/** \\brief  8084, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108084u)

/** \\brief  8080, TOM Channel Control Register’ */
#define GTM_TOM0_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108080u)

/** \\brief  80A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01080A0u)

/** \\brief  80A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01080A4u)

/** \\brief  80A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01080A8u)

/** \\brief  809C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010809Cu)

/** \\brief  808C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010808Cu)

/** \\brief  8094, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108094u)

/** \\brief  8098, TOM Channel Status Register */
#define GTM_TOM0_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108098u)

/** \\brief  8308, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH10_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108308u)

/** \\brief  8310, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH10_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108310u)

/** \\brief  8304, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH10_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108304u)

/** \\brief  8300, TOM Channel Control Register’ */
#define GTM_TOM0_CH10_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108300u)

/** \\brief  8320, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH10_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108320u)

/** \\brief  8324, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH10_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108324u)

/** \\brief  8328, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH10_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108328u)

/** \\brief  831C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH10_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010831Cu)

/** \\brief  830C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH10_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010830Cu)

/** \\brief  8314, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH10_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108314u)

/** \\brief  8318, TOM Channel Status Register */
#define GTM_TOM0_CH10_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108318u)

/** \\brief  8348, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH11_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108348u)

/** \\brief  8350, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH11_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108350u)

/** \\brief  8344, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH11_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108344u)

/** \\brief  8340, TOM Channel Control Register’ */
#define GTM_TOM0_CH11_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108340u)

/** \\brief  8360, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH11_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108360u)

/** \\brief  8364, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH11_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108364u)

/** \\brief  8368, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH11_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108368u)

/** \\brief  835C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH11_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010835Cu)

/** \\brief  834C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH11_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010834Cu)

/** \\brief  8354, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH11_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108354u)

/** \\brief  8358, TOM Channel Status Register */
#define GTM_TOM0_CH11_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108358u)

/** \\brief  8388, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH12_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108388u)

/** \\brief  8390, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH12_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108390u)

/** \\brief  8384, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH12_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108384u)

/** \\brief  8380, TOM Channel Control Register’ */
#define GTM_TOM0_CH12_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108380u)

/** \\brief  83A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH12_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01083A0u)

/** \\brief  83A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH12_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01083A4u)

/** \\brief  83A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH12_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01083A8u)

/** \\brief  839C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH12_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010839Cu)

/** \\brief  838C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH12_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010838Cu)

/** \\brief  8394, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH12_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108394u)

/** \\brief  8398, TOM Channel Status Register */
#define GTM_TOM0_CH12_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108398u)

/** \\brief  83C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH13_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01083C8u)

/** \\brief  83D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH13_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01083D0u)

/** \\brief  83C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH13_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01083C4u)

/** \\brief  83C0, TOM Channel Control Register’ */
#define GTM_TOM0_CH13_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01083C0u)

/** \\brief  83E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH13_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01083E0u)

/** \\brief  83E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH13_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01083E4u)

/** \\brief  83E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH13_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01083E8u)

/** \\brief  83DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH13_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01083DCu)

/** \\brief  83CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH13_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01083CCu)

/** \\brief  83D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH13_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01083D4u)

/** \\brief  83D8, TOM Channel Status Register */
#define GTM_TOM0_CH13_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01083D8u)

/** \\brief  8408, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH14_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108408u)

/** \\brief  8410, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH14_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108410u)

/** \\brief  8404, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH14_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108404u)

/** \\brief  8400, TOM Channel Control Register’ */
#define GTM_TOM0_CH14_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108400u)

/** \\brief  8420, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH14_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108420u)

/** \\brief  8424, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH14_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108424u)

/** \\brief  8428, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH14_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108428u)

/** \\brief  841C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH14_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010841Cu)

/** \\brief  840C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH14_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010840Cu)

/** \\brief  8414, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH14_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108414u)

/** \\brief  8418, TOM Channel Status Register */
#define GTM_TOM0_CH14_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108418u)

/** \\brief  8448, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH15_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_CM0*)0xF0108448u)

/** \\brief  8450, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH15_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_CM1*)0xF0108450u)

/** \\brief  8444, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH15_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_CN0*)0xF0108444u)

/** \\brief  8440, TOM Channel Control Register */
#define GTM_TOM0_CH15_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_CTRL*)0xF0108440u)

/** \\brief  8460, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH15_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_IRQ_EN*)0xF0108460u)

/** \\brief  8464, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH15_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_IRQ_FORCINT*)0xF0108464u)

/** \\brief  8468, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH15_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_IRQ_MODE*)0xF0108468u)

/** \\brief  845C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH15_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_IRQ_NOTIFY*)0xF010845Cu)

/** \\brief  844C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH15_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_SR0*)0xF010844Cu)

/** \\brief  8454, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH15_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_SR1*)0xF0108454u)

/** \\brief  8458, TOM Channel Status Register */
#define GTM_TOM0_CH15_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_STAT*)0xF0108458u)

/** \\brief  80C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01080C8u)

/** \\brief  80D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01080D0u)

/** \\brief  80C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01080C4u)

/** \\brief  80C0, TOM Channel Control Register’ */
#define GTM_TOM0_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01080C0u)

/** \\brief  80E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01080E0u)

/** \\brief  80E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01080E4u)

/** \\brief  80E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01080E8u)

/** \\brief  80DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01080DCu)

/** \\brief  80CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01080CCu)

/** \\brief  80D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01080D4u)

/** \\brief  80D8, TOM Channel Status Register */
#define GTM_TOM0_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01080D8u)

/** \\brief  8108, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108108u)

/** \\brief  8110, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108110u)

/** \\brief  8104, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108104u)

/** \\brief  8100, TOM Channel Control Register’ */
#define GTM_TOM0_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108100u)

/** \\brief  8120, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108120u)

/** \\brief  8124, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108124u)

/** \\brief  8128, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108128u)

/** \\brief  811C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010811Cu)

/** \\brief  810C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010810Cu)

/** \\brief  8114, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108114u)

/** \\brief  8118, TOM Channel Status Register */
#define GTM_TOM0_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108118u)

/** \\brief  8148, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108148u)

/** \\brief  8150, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108150u)

/** \\brief  8144, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108144u)

/** \\brief  8140, TOM Channel Control Register’ */
#define GTM_TOM0_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108140u)

/** \\brief  8160, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108160u)

/** \\brief  8164, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108164u)

/** \\brief  8168, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108168u)

/** \\brief  815C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010815Cu)

/** \\brief  814C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010814Cu)

/** \\brief  8154, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108154u)

/** \\brief  8158, TOM Channel Status Register */
#define GTM_TOM0_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108158u)

/** \\brief  8188, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108188u)

/** \\brief  8190, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108190u)

/** \\brief  8184, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108184u)

/** \\brief  8180, TOM Channel Control Register’ */
#define GTM_TOM0_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108180u)

/** \\brief  81A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01081A0u)

/** \\brief  81A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01081A4u)

/** \\brief  81A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01081A8u)

/** \\brief  819C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010819Cu)

/** \\brief  818C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010818Cu)

/** \\brief  8194, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108194u)

/** \\brief  8198, TOM Channel Status Register */
#define GTM_TOM0_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108198u)

/** \\brief  81C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01081C8u)

/** \\brief  81D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01081D0u)

/** \\brief  81C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01081C4u)

/** \\brief  81C0, TOM Channel Control Register’ */
#define GTM_TOM0_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01081C0u)

/** \\brief  81E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01081E0u)

/** \\brief  81E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01081E4u)

/** \\brief  81E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01081E8u)

/** \\brief  81DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01081DCu)

/** \\brief  81CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01081CCu)

/** \\brief  81D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01081D4u)

/** \\brief  81D8, TOM Channel Status Register */
#define GTM_TOM0_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01081D8u)

/** \\brief  8208, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108208u)

/** \\brief  8210, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108210u)

/** \\brief  8204, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108204u)

/** \\brief  8200, TOM Channel Control Register’ */
#define GTM_TOM0_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108200u)

/** \\brief  8220, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108220u)

/** \\brief  8224, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108224u)

/** \\brief  8228, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108228u)

/** \\brief  821C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010821Cu)

/** \\brief  820C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010820Cu)

/** \\brief  8214, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108214u)

/** \\brief  8218, TOM Channel Status Register */
#define GTM_TOM0_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108218u)

/** \\brief  8248, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108248u)

/** \\brief  8250, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108250u)

/** \\brief  8244, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108244u)

/** \\brief  8240, TOM Channel Control Register’ */
#define GTM_TOM0_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108240u)

/** \\brief  8260, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108260u)

/** \\brief  8264, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108264u)

/** \\brief  8268, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108268u)

/** \\brief  825C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010825Cu)

/** \\brief  824C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010824Cu)

/** \\brief  8254, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108254u)

/** \\brief  8258, TOM Channel Status Register */
#define GTM_TOM0_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108258u)

/** \\brief  8288, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH8_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108288u)

/** \\brief  8290, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH8_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108290u)

/** \\brief  8284, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH8_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108284u)

/** \\brief  8280, TOM Channel Control Register’ */
#define GTM_TOM0_CH8_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108280u)

/** \\brief  82A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH8_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01082A0u)

/** \\brief  82A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH8_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01082A4u)

/** \\brief  82A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH8_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01082A8u)

/** \\brief  829C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH8_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010829Cu)

/** \\brief  828C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH8_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010828Cu)

/** \\brief  8294, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH8_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108294u)

/** \\brief  8298, TOM Channel Status Register */
#define GTM_TOM0_CH8_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108298u)

/** \\brief  82C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH9_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01082C8u)

/** \\brief  82D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH9_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01082D0u)

/** \\brief  82C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH9_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01082C4u)

/** \\brief  82C0, TOM Channel Control Register’ */
#define GTM_TOM0_CH9_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01082C0u)

/** \\brief  82E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH9_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01082E0u)

/** \\brief  82E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH9_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01082E4u)

/** \\brief  82E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH9_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01082E8u)

/** \\brief  82DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH9_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01082DCu)

/** \\brief  82CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH9_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01082CCu)

/** \\brief  82D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH9_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01082D4u)

/** \\brief  82D8, TOM Channel Status Register */
#define GTM_TOM0_CH9_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01082D8u)

/** \\brief  800C, TOM TGC Action Time Base Register */
#define GTM_TOM0_TGC0_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF010800Cu)

/** \\brief  8004, TOM TGC Enable/Disable Control Register */
#define GTM_TOM0_TGC0_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0108004u)

/** \\brief  8008, TOM TGC Enable/Disable Status Register */
#define GTM_TOM0_TGC0_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0108008u)

/** \\brief  8018, TOM TGC Force Update Control Register */
#define GTM_TOM0_TGC0_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0108018u)

/** \\brief  8000, TOM TGC Global Control Register */
#define GTM_TOM0_TGC0_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0108000u)

/** \\brief  801C, TOM TGC Internal Trigger Control Register */
#define GTM_TOM0_TGC0_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010801Cu)

/** \\brief  8010, TOM TGC Output Enable Control Register */
#define GTM_TOM0_TGC0_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0108010u)

/** \\brief  8014, TOM TGC Output Enable Status Register */
#define GTM_TOM0_TGC0_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF0108014u)

/** \\brief  804C, TOM TGC Action Time Base Register */
#define GTM_TOM0_TGC1_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF010804Cu)

/** \\brief  8044, TOM TGC Enable/Disable Control Register */
#define GTM_TOM0_TGC1_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0108044u)

/** \\brief  8048, TOM TGC Enable/Disable Status Register */
#define GTM_TOM0_TGC1_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0108048u)

/** \\brief  8058, TOM TGC Force Update Control Register */
#define GTM_TOM0_TGC1_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0108058u)

/** \\brief  8040, TOM TGC Global Control Register */
#define GTM_TOM0_TGC1_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0108040u)

/** \\brief  805C, TOM TGC Internal Trigger Control Register */
#define GTM_TOM0_TGC1_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010805Cu)

/** \\brief  8050, TOM TGC Output Enable Control Register */
#define GTM_TOM0_TGC1_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0108050u)

/** \\brief  8054, TOM TGC Output Enable Status Register */
#define GTM_TOM0_TGC1_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF0108054u)

/** \\brief  8888, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108888u)

/** \\brief  8890, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108890u)

/** \\brief  8884, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108884u)

/** \\brief  8880, TOM Channel Control Register’ */
#define GTM_TOM1_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108880u)

/** \\brief  88A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01088A0u)

/** \\brief  88A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01088A4u)

/** \\brief  88A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01088A8u)

/** \\brief  889C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010889Cu)

/** \\brief  888C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010888Cu)

/** \\brief  8894, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108894u)

/** \\brief  8898, TOM Channel Status Register */
#define GTM_TOM1_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108898u)

/** \\brief  8B08, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH10_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108B08u)

/** \\brief  8B10, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH10_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108B10u)

/** \\brief  8B04, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH10_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108B04u)

/** \\brief  8B00, TOM Channel Control Register’ */
#define GTM_TOM1_CH10_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108B00u)

/** \\brief  8B20, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH10_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108B20u)

/** \\brief  8B24, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH10_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108B24u)

/** \\brief  8B28, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH10_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108B28u)

/** \\brief  8B1C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH10_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108B1Cu)

/** \\brief  8B0C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH10_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108B0Cu)

/** \\brief  8B14, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH10_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108B14u)

/** \\brief  8B18, TOM Channel Status Register */
#define GTM_TOM1_CH10_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108B18u)

/** \\brief  8B48, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH11_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108B48u)

/** \\brief  8B50, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH11_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108B50u)

/** \\brief  8B44, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH11_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108B44u)

/** \\brief  8B40, TOM Channel Control Register’ */
#define GTM_TOM1_CH11_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108B40u)

/** \\brief  8B60, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH11_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108B60u)

/** \\brief  8B64, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH11_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108B64u)

/** \\brief  8B68, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH11_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108B68u)

/** \\brief  8B5C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH11_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108B5Cu)

/** \\brief  8B4C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH11_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108B4Cu)

/** \\brief  8B54, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH11_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108B54u)

/** \\brief  8B58, TOM Channel Status Register */
#define GTM_TOM1_CH11_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108B58u)

/** \\brief  8B88, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH12_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108B88u)

/** \\brief  8B90, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH12_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108B90u)

/** \\brief  8B84, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH12_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108B84u)

/** \\brief  8B80, TOM Channel Control Register’ */
#define GTM_TOM1_CH12_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108B80u)

/** \\brief  8BA0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH12_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108BA0u)

/** \\brief  8BA4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH12_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108BA4u)

/** \\brief  8BA8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH12_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108BA8u)

/** \\brief  8B9C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH12_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108B9Cu)

/** \\brief  8B8C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH12_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108B8Cu)

/** \\brief  8B94, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH12_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108B94u)

/** \\brief  8B98, TOM Channel Status Register */
#define GTM_TOM1_CH12_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108B98u)

/** \\brief  8BC8, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH13_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108BC8u)

/** \\brief  8BD0, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH13_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108BD0u)

/** \\brief  8BC4, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH13_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108BC4u)

/** \\brief  8BC0, TOM Channel Control Register’ */
#define GTM_TOM1_CH13_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108BC0u)

/** \\brief  8BE0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH13_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108BE0u)

/** \\brief  8BE4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH13_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108BE4u)

/** \\brief  8BE8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH13_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108BE8u)

/** \\brief  8BDC, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH13_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108BDCu)

/** \\brief  8BCC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH13_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108BCCu)

/** \\brief  8BD4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH13_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108BD4u)

/** \\brief  8BD8, TOM Channel Status Register */
#define GTM_TOM1_CH13_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108BD8u)

/** \\brief  8C08, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH14_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108C08u)

/** \\brief  8C10, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH14_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108C10u)

/** \\brief  8C04, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH14_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108C04u)

/** \\brief  8C00, TOM Channel Control Register’ */
#define GTM_TOM1_CH14_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108C00u)

/** \\brief  8C20, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH14_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108C20u)

/** \\brief  8C24, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH14_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108C24u)

/** \\brief  8C28, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH14_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108C28u)

/** \\brief  8C1C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH14_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108C1Cu)

/** \\brief  8C0C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH14_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108C0Cu)

/** \\brief  8C14, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH14_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108C14u)

/** \\brief  8C18, TOM Channel Status Register */
#define GTM_TOM1_CH14_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108C18u)

/** \\brief  8C48, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH15_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_CM0*)0xF0108C48u)

/** \\brief  8C50, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH15_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_CM1*)0xF0108C50u)

/** \\brief  8C44, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH15_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_CN0*)0xF0108C44u)

/** \\brief  8C40, TOM Channel Control Register */
#define GTM_TOM1_CH15_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_CTRL*)0xF0108C40u)

/** \\brief  8C60, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH15_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_IRQ_EN*)0xF0108C60u)

/** \\brief  8C64, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH15_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_IRQ_FORCINT*)0xF0108C64u)

/** \\brief  8C68, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH15_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_IRQ_MODE*)0xF0108C68u)

/** \\brief  8C5C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH15_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_IRQ_NOTIFY*)0xF0108C5Cu)

/** \\brief  8C4C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH15_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_SR0*)0xF0108C4Cu)

/** \\brief  8C54, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH15_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_SR1*)0xF0108C54u)

/** \\brief  8C58, TOM Channel Status Register */
#define GTM_TOM1_CH15_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_STAT*)0xF0108C58u)

/** \\brief  88C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01088C8u)

/** \\brief  88D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01088D0u)

/** \\brief  88C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01088C4u)

/** \\brief  88C0, TOM Channel Control Register’ */
#define GTM_TOM1_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01088C0u)

/** \\brief  88E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01088E0u)

/** \\brief  88E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01088E4u)

/** \\brief  88E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01088E8u)

/** \\brief  88DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01088DCu)

/** \\brief  88CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01088CCu)

/** \\brief  88D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01088D4u)

/** \\brief  88D8, TOM Channel Status Register */
#define GTM_TOM1_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01088D8u)

/** \\brief  8908, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108908u)

/** \\brief  8910, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108910u)

/** \\brief  8904, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108904u)

/** \\brief  8900, TOM Channel Control Register’ */
#define GTM_TOM1_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108900u)

/** \\brief  8920, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108920u)

/** \\brief  8924, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108924u)

/** \\brief  8928, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108928u)

/** \\brief  891C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010891Cu)

/** \\brief  890C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010890Cu)

/** \\brief  8914, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108914u)

/** \\brief  8918, TOM Channel Status Register */
#define GTM_TOM1_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108918u)

/** \\brief  8948, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108948u)

/** \\brief  8950, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108950u)

/** \\brief  8944, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108944u)

/** \\brief  8940, TOM Channel Control Register’ */
#define GTM_TOM1_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108940u)

/** \\brief  8960, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108960u)

/** \\brief  8964, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108964u)

/** \\brief  8968, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108968u)

/** \\brief  895C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010895Cu)

/** \\brief  894C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010894Cu)

/** \\brief  8954, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108954u)

/** \\brief  8958, TOM Channel Status Register */
#define GTM_TOM1_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108958u)

/** \\brief  8988, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108988u)

/** \\brief  8990, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108990u)

/** \\brief  8984, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108984u)

/** \\brief  8980, TOM Channel Control Register’ */
#define GTM_TOM1_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108980u)

/** \\brief  89A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01089A0u)

/** \\brief  89A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01089A4u)

/** \\brief  89A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01089A8u)

/** \\brief  899C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010899Cu)

/** \\brief  898C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010898Cu)

/** \\brief  8994, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108994u)

/** \\brief  8998, TOM Channel Status Register */
#define GTM_TOM1_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108998u)

/** \\brief  89C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01089C8u)

/** \\brief  89D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01089D0u)

/** \\brief  89C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01089C4u)

/** \\brief  89C0, TOM Channel Control Register’ */
#define GTM_TOM1_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01089C0u)

/** \\brief  89E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01089E0u)

/** \\brief  89E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01089E4u)

/** \\brief  89E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01089E8u)

/** \\brief  89DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01089DCu)

/** \\brief  89CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01089CCu)

/** \\brief  89D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01089D4u)

/** \\brief  89D8, TOM Channel Status Register */
#define GTM_TOM1_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01089D8u)

/** \\brief  8A08, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108A08u)

/** \\brief  8A10, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108A10u)

/** \\brief  8A04, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108A04u)

/** \\brief  8A00, TOM Channel Control Register’ */
#define GTM_TOM1_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108A00u)

/** \\brief  8A20, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108A20u)

/** \\brief  8A24, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108A24u)

/** \\brief  8A28, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108A28u)

/** \\brief  8A1C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108A1Cu)

/** \\brief  8A0C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108A0Cu)

/** \\brief  8A14, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108A14u)

/** \\brief  8A18, TOM Channel Status Register */
#define GTM_TOM1_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108A18u)

/** \\brief  8A48, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108A48u)

/** \\brief  8A50, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108A50u)

/** \\brief  8A44, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108A44u)

/** \\brief  8A40, TOM Channel Control Register’ */
#define GTM_TOM1_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108A40u)

/** \\brief  8A60, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108A60u)

/** \\brief  8A64, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108A64u)

/** \\brief  8A68, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108A68u)

/** \\brief  8A5C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108A5Cu)

/** \\brief  8A4C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108A4Cu)

/** \\brief  8A54, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108A54u)

/** \\brief  8A58, TOM Channel Status Register */
#define GTM_TOM1_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108A58u)

/** \\brief  8A88, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH8_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108A88u)

/** \\brief  8A90, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH8_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108A90u)

/** \\brief  8A84, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH8_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108A84u)

/** \\brief  8A80, TOM Channel Control Register’ */
#define GTM_TOM1_CH8_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108A80u)

/** \\brief  8AA0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH8_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108AA0u)

/** \\brief  8AA4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH8_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108AA4u)

/** \\brief  8AA8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH8_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108AA8u)

/** \\brief  8A9C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH8_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108A9Cu)

/** \\brief  8A8C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH8_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108A8Cu)

/** \\brief  8A94, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH8_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108A94u)

/** \\brief  8A98, TOM Channel Status Register */
#define GTM_TOM1_CH8_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108A98u)

/** \\brief  8AC8, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH9_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108AC8u)

/** \\brief  8AD0, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH9_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108AD0u)

/** \\brief  8AC4, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH9_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108AC4u)

/** \\brief  8AC0, TOM Channel Control Register’ */
#define GTM_TOM1_CH9_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108AC0u)

/** \\brief  8AE0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH9_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108AE0u)

/** \\brief  8AE4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH9_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108AE4u)

/** \\brief  8AE8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH9_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108AE8u)

/** \\brief  8ADC, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH9_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108ADCu)

/** \\brief  8ACC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH9_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108ACCu)

/** \\brief  8AD4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH9_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108AD4u)

/** \\brief  8AD8, TOM Channel Status Register */
#define GTM_TOM1_CH9_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108AD8u)

/** \\brief  880C, TOM TGC Action Time Base Register */
#define GTM_TOM1_TGC0_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF010880Cu)

/** \\brief  8804, TOM TGC Enable/Disable Control Register */
#define GTM_TOM1_TGC0_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0108804u)

/** \\brief  8808, TOM TGC Enable/Disable Status Register */
#define GTM_TOM1_TGC0_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0108808u)

/** \\brief  8818, TOM TGC Force Update Control Register */
#define GTM_TOM1_TGC0_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0108818u)

/** \\brief  8800, TOM TGC Global Control Register */
#define GTM_TOM1_TGC0_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0108800u)

/** \\brief  881C, TOM TGC Internal Trigger Control Register */
#define GTM_TOM1_TGC0_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010881Cu)

/** \\brief  8810, TOM TGC Output Enable Control Register */
#define GTM_TOM1_TGC0_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0108810u)

/** \\brief  8814, TOM TGC Output Enable Status Register */
#define GTM_TOM1_TGC0_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF0108814u)

/** \\brief  884C, TOM TGC Action Time Base Register */
#define GTM_TOM1_TGC1_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF010884Cu)

/** \\brief  8844, TOM TGC Enable/Disable Control Register */
#define GTM_TOM1_TGC1_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0108844u)

/** \\brief  8848, TOM TGC Enable/Disable Status Register */
#define GTM_TOM1_TGC1_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0108848u)

/** \\brief  8858, TOM TGC Force Update Control Register */
#define GTM_TOM1_TGC1_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0108858u)

/** \\brief  8840, TOM TGC Global Control Register */
#define GTM_TOM1_TGC1_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0108840u)

/** \\brief  885C, TOM TGC Internal Trigger Control Register */
#define GTM_TOM1_TGC1_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010885Cu)

/** \\brief  8850, TOM TGC Output Enable Control Register */
#define GTM_TOM1_TGC1_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0108850u)

/** \\brief  8854, TOM TGC Output Enable Status Register */
#define GTM_TOM1_TGC1_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF0108854u)

/** \\brief  9088, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109088u)

/** \\brief  9090, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109090u)

/** \\brief  9084, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109084u)

/** \\brief  9080, TOM Channel Control Register’ */
#define GTM_TOM2_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109080u)

/** \\brief  90A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01090A0u)

/** \\brief  90A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01090A4u)

/** \\brief  90A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01090A8u)

/** \\brief  909C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010909Cu)

/** \\brief  908C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010908Cu)

/** \\brief  9094, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109094u)

/** \\brief  9098, TOM Channel Status Register */
#define GTM_TOM2_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109098u)

/** \\brief  9308, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH10_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109308u)

/** \\brief  9310, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH10_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109310u)

/** \\brief  9304, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH10_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109304u)

/** \\brief  9300, TOM Channel Control Register’ */
#define GTM_TOM2_CH10_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109300u)

/** \\brief  9320, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH10_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109320u)

/** \\brief  9324, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH10_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109324u)

/** \\brief  9328, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH10_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109328u)

/** \\brief  931C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH10_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010931Cu)

/** \\brief  930C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH10_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010930Cu)

/** \\brief  9314, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH10_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109314u)

/** \\brief  9318, TOM Channel Status Register */
#define GTM_TOM2_CH10_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109318u)

/** \\brief  9348, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH11_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109348u)

/** \\brief  9350, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH11_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109350u)

/** \\brief  9344, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH11_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109344u)

/** \\brief  9340, TOM Channel Control Register’ */
#define GTM_TOM2_CH11_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109340u)

/** \\brief  9360, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH11_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109360u)

/** \\brief  9364, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH11_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109364u)

/** \\brief  9368, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH11_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109368u)

/** \\brief  935C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH11_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010935Cu)

/** \\brief  934C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH11_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010934Cu)

/** \\brief  9354, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH11_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109354u)

/** \\brief  9358, TOM Channel Status Register */
#define GTM_TOM2_CH11_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109358u)

/** \\brief  9388, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH12_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109388u)

/** \\brief  9390, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH12_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109390u)

/** \\brief  9384, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH12_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109384u)

/** \\brief  9380, TOM Channel Control Register’ */
#define GTM_TOM2_CH12_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109380u)

/** \\brief  93A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH12_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01093A0u)

/** \\brief  93A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH12_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01093A4u)

/** \\brief  93A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH12_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01093A8u)

/** \\brief  939C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH12_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010939Cu)

/** \\brief  938C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH12_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010938Cu)

/** \\brief  9394, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH12_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109394u)

/** \\brief  9398, TOM Channel Status Register */
#define GTM_TOM2_CH12_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109398u)

/** \\brief  93C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH13_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01093C8u)

/** \\brief  93D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH13_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01093D0u)

/** \\brief  93C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH13_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01093C4u)

/** \\brief  93C0, TOM Channel Control Register’ */
#define GTM_TOM2_CH13_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01093C0u)

/** \\brief  93E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH13_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01093E0u)

/** \\brief  93E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH13_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01093E4u)

/** \\brief  93E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH13_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01093E8u)

/** \\brief  93DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH13_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01093DCu)

/** \\brief  93CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH13_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01093CCu)

/** \\brief  93D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH13_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01093D4u)

/** \\brief  93D8, TOM Channel Status Register */
#define GTM_TOM2_CH13_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01093D8u)

/** \\brief  9408, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH14_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109408u)

/** \\brief  9410, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH14_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109410u)

/** \\brief  9404, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH14_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109404u)

/** \\brief  9400, TOM Channel Control Register’ */
#define GTM_TOM2_CH14_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109400u)

/** \\brief  9420, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH14_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109420u)

/** \\brief  9424, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH14_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109424u)

/** \\brief  9428, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH14_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109428u)

/** \\brief  941C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH14_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010941Cu)

/** \\brief  940C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH14_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010940Cu)

/** \\brief  9414, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH14_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109414u)

/** \\brief  9418, TOM Channel Status Register */
#define GTM_TOM2_CH14_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109418u)

/** \\brief  9448, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH15_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_CM0*)0xF0109448u)

/** \\brief  9450, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH15_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_CM1*)0xF0109450u)

/** \\brief  9444, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH15_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_CN0*)0xF0109444u)

/** \\brief  9440, TOM Channel Control Register */
#define GTM_TOM2_CH15_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_CTRL*)0xF0109440u)

/** \\brief  9460, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH15_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_IRQ_EN*)0xF0109460u)

/** \\brief  9464, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH15_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_IRQ_FORCINT*)0xF0109464u)

/** \\brief  9468, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH15_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_IRQ_MODE*)0xF0109468u)

/** \\brief  945C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH15_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_IRQ_NOTIFY*)0xF010945Cu)

/** \\brief  944C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH15_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_SR0*)0xF010944Cu)

/** \\brief  9454, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH15_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_SR1*)0xF0109454u)

/** \\brief  9458, TOM Channel Status Register */
#define GTM_TOM2_CH15_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH15_STAT*)0xF0109458u)

/** \\brief  90C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01090C8u)

/** \\brief  90D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01090D0u)

/** \\brief  90C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01090C4u)

/** \\brief  90C0, TOM Channel Control Register’ */
#define GTM_TOM2_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01090C0u)

/** \\brief  90E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01090E0u)

/** \\brief  90E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01090E4u)

/** \\brief  90E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01090E8u)

/** \\brief  90DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01090DCu)

/** \\brief  90CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01090CCu)

/** \\brief  90D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01090D4u)

/** \\brief  90D8, TOM Channel Status Register */
#define GTM_TOM2_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01090D8u)

/** \\brief  9108, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109108u)

/** \\brief  9110, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109110u)

/** \\brief  9104, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109104u)

/** \\brief  9100, TOM Channel Control Register’ */
#define GTM_TOM2_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109100u)

/** \\brief  9120, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109120u)

/** \\brief  9124, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109124u)

/** \\brief  9128, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109128u)

/** \\brief  911C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010911Cu)

/** \\brief  910C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010910Cu)

/** \\brief  9114, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109114u)

/** \\brief  9118, TOM Channel Status Register */
#define GTM_TOM2_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109118u)

/** \\brief  9148, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109148u)

/** \\brief  9150, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109150u)

/** \\brief  9144, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109144u)

/** \\brief  9140, TOM Channel Control Register’ */
#define GTM_TOM2_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109140u)

/** \\brief  9160, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109160u)

/** \\brief  9164, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109164u)

/** \\brief  9168, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109168u)

/** \\brief  915C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010915Cu)

/** \\brief  914C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010914Cu)

/** \\brief  9154, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109154u)

/** \\brief  9158, TOM Channel Status Register */
#define GTM_TOM2_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109158u)

/** \\brief  9188, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109188u)

/** \\brief  9190, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109190u)

/** \\brief  9184, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109184u)

/** \\brief  9180, TOM Channel Control Register’ */
#define GTM_TOM2_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109180u)

/** \\brief  91A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01091A0u)

/** \\brief  91A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01091A4u)

/** \\brief  91A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01091A8u)

/** \\brief  919C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010919Cu)

/** \\brief  918C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010918Cu)

/** \\brief  9194, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109194u)

/** \\brief  9198, TOM Channel Status Register */
#define GTM_TOM2_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109198u)

/** \\brief  91C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01091C8u)

/** \\brief  91D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01091D0u)

/** \\brief  91C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01091C4u)

/** \\brief  91C0, TOM Channel Control Register’ */
#define GTM_TOM2_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01091C0u)

/** \\brief  91E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01091E0u)

/** \\brief  91E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01091E4u)

/** \\brief  91E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01091E8u)

/** \\brief  91DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01091DCu)

/** \\brief  91CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01091CCu)

/** \\brief  91D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01091D4u)

/** \\brief  91D8, TOM Channel Status Register */
#define GTM_TOM2_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01091D8u)

/** \\brief  9208, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109208u)

/** \\brief  9210, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109210u)

/** \\brief  9204, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109204u)

/** \\brief  9200, TOM Channel Control Register’ */
#define GTM_TOM2_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109200u)

/** \\brief  9220, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109220u)

/** \\brief  9224, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109224u)

/** \\brief  9228, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109228u)

/** \\brief  921C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010921Cu)

/** \\brief  920C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010920Cu)

/** \\brief  9214, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109214u)

/** \\brief  9218, TOM Channel Status Register */
#define GTM_TOM2_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109218u)

/** \\brief  9248, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109248u)

/** \\brief  9250, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109250u)

/** \\brief  9244, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109244u)

/** \\brief  9240, TOM Channel Control Register’ */
#define GTM_TOM2_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109240u)

/** \\brief  9260, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109260u)

/** \\brief  9264, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109264u)

/** \\brief  9268, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109268u)

/** \\brief  925C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010925Cu)

/** \\brief  924C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010924Cu)

/** \\brief  9254, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109254u)

/** \\brief  9258, TOM Channel Status Register */
#define GTM_TOM2_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109258u)

/** \\brief  9288, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH8_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109288u)

/** \\brief  9290, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH8_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109290u)

/** \\brief  9284, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH8_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109284u)

/** \\brief  9280, TOM Channel Control Register’ */
#define GTM_TOM2_CH8_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109280u)

/** \\brief  92A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH8_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01092A0u)

/** \\brief  92A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH8_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01092A4u)

/** \\brief  92A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH8_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01092A8u)

/** \\brief  929C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH8_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010929Cu)

/** \\brief  928C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH8_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010928Cu)

/** \\brief  9294, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH8_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109294u)

/** \\brief  9298, TOM Channel Status Register */
#define GTM_TOM2_CH8_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109298u)

/** \\brief  92C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH9_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01092C8u)

/** \\brief  92D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH9_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01092D0u)

/** \\brief  92C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH9_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01092C4u)

/** \\brief  92C0, TOM Channel Control Register’ */
#define GTM_TOM2_CH9_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01092C0u)

/** \\brief  92E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH9_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01092E0u)

/** \\brief  92E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH9_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01092E4u)

/** \\brief  92E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH9_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01092E8u)

/** \\brief  92DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH9_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01092DCu)

/** \\brief  92CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH9_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01092CCu)

/** \\brief  92D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH9_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01092D4u)

/** \\brief  92D8, TOM Channel Status Register */
#define GTM_TOM2_CH9_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01092D8u)

/** \\brief  900C, TOM TGC Action Time Base Register */
#define GTM_TOM2_TGC0_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF010900Cu)

/** \\brief  9004, TOM TGC Enable/Disable Control Register */
#define GTM_TOM2_TGC0_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0109004u)

/** \\brief  9008, TOM TGC Enable/Disable Status Register */
#define GTM_TOM2_TGC0_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0109008u)

/** \\brief  9018, TOM TGC Force Update Control Register */
#define GTM_TOM2_TGC0_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0109018u)

/** \\brief  9000, TOM TGC Global Control Register */
#define GTM_TOM2_TGC0_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0109000u)

/** \\brief  901C, TOM TGC Internal Trigger Control Register */
#define GTM_TOM2_TGC0_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010901Cu)

/** \\brief  9010, TOM TGC Output Enable Control Register */
#define GTM_TOM2_TGC0_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0109010u)

/** \\brief  9014, TOM TGC Output Enable Status Register */
#define GTM_TOM2_TGC0_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF0109014u)

/** \\brief  904C, TOM TGC Action Time Base Register */
#define GTM_TOM2_TGC1_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF010904Cu)

/** \\brief  9044, TOM TGC Enable/Disable Control Register */
#define GTM_TOM2_TGC1_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0109044u)

/** \\brief  9048, TOM TGC Enable/Disable Status Register */
#define GTM_TOM2_TGC1_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0109048u)

/** \\brief  9058, TOM TGC Force Update Control Register */
#define GTM_TOM2_TGC1_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0109058u)

/** \\brief  9040, TOM TGC Global Control Register */
#define GTM_TOM2_TGC1_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0109040u)

/** \\brief  905C, TOM TGC Internal Trigger Control Register */
#define GTM_TOM2_TGC1_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010905Cu)

/** \\brief  9050, TOM TGC Output Enable Control Register */
#define GTM_TOM2_TGC1_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0109050u)

/** \\brief  9054, TOM TGC Output Enable Status Register */
#define GTM_TOM2_TGC1_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF0109054u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXGTM_REG_H */
