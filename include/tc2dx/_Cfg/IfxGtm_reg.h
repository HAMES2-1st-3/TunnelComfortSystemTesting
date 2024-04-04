/**
 * \file IfxGtm_reg.h
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
#ifndef IFXGTM_REG_H
#define IFXGTM_REG_H
/******************************************************************************/
#include "Gtm/IfxGtm_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** GTM object */
#define MODULE_GTM ((*(Ifx_GTM*)0xF0100000u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-GTM)                               */
/******************************************************************************/

/** 9FDFC, Access Enable Register 0 */
#define GTM_ACCEN0 ((*(volatile Ifx_GTM_ACCEN0*)0xF019FDFCu)) /* lint --e(923)*/

/** 9FDF8, Access Enable Register 1 */
#define GTM_ACCEN1 ((*(volatile Ifx_GTM_ACCEN1*)0xF019FDF8u)) /* lint --e(923)*/

/** 9FDB0, ADC Trigger 0 Output Select 0 Register */
#define GTM_ADCTRIG0OUT0 ((*(volatile Ifx_GTM_ADCTRIG0OUT0*)0xF019FDB0u)) /* lint --e(923)*/

/** 9FDB4, ADC Trigger 0 Output Select 1 Register */
#define GTM_ADCTRIG0OUT1 ((*(volatile Ifx_GTM_ADCTRIG0OUT1*)0xF019FDB4u)) /* lint --e(923)*/

/** 9FDB8, ADC Trigger 1 Output Select 0 Register */
#define GTM_ADCTRIG1OUT0 ((*(volatile Ifx_GTM_ADCTRIG1OUT0*)0xF019FDB8u)) /* lint --e(923)*/

/** 9FDBC, ADC Trigger 1 Output Select 1 Register */
#define GTM_ADCTRIG1OUT1 ((*(volatile Ifx_GTM_ADCTRIG1OUT1*)0xF019FDBCu)) /* lint --e(923)*/

/** C, GTM AEI Timeout Exception Address Register */
#define GTM_AEI_ADDR_XPT ((*(volatile Ifx_GTM_AEI_ADDR_XPT*)0xF010000Cu)) /* lint --e(923)*/

/** Alias for GTM_PSM_AFD0_CH_BUF0_BUF_ACC.
 *  Note that this definition is obsolete, use GTM_PSM_AFD0_CH_BUF0_BUF_ACC
 * instead.
 * 18080, AFD0 FIFO0 Channel Buffer Access Register
 */
#define GTM_AFD0_CH_BUF0_BUF_ACC (GTM_PSM_AFD0_CH_BUF0_BUF_ACC)

/** Alias for GTM_PSM_AFD0_CH_BUF1_BUF_ACC.
 *  Note that this definition is obsolete, use GTM_PSM_AFD0_CH_BUF1_BUF_ACC
 * instead.
 * 18090, AFD0 FIFO0 Channel Buffer Access Register
 */
#define GTM_AFD0_CH_BUF1_BUF_ACC (GTM_PSM_AFD0_CH_BUF1_BUF_ACC)

/** Alias for GTM_PSM_AFD0_CH_BUF2_BUF_ACC.
 *  Note that this definition is obsolete, use GTM_PSM_AFD0_CH_BUF2_BUF_ACC
 * instead.
 * 180A0, AFD0 FIFO0 Channel Buffer Access Register
 */
#define GTM_AFD0_CH_BUF2_BUF_ACC (GTM_PSM_AFD0_CH_BUF2_BUF_ACC)

/** Alias for GTM_PSM_AFD0_CH_BUF3_BUF_ACC.
 *  Note that this definition is obsolete, use GTM_PSM_AFD0_CH_BUF3_BUF_ACC
 * instead.
 * 180B0, AFD0 FIFO0 Channel Buffer Access Register
 */
#define GTM_AFD0_CH_BUF3_BUF_ACC (GTM_PSM_AFD0_CH_BUF3_BUF_ACC)

/** Alias for GTM_PSM_AFD0_CH_BUF4_BUF_ACC.
 *  Note that this definition is obsolete, use GTM_PSM_AFD0_CH_BUF4_BUF_ACC
 * instead.
 * 180C0, AFD0 FIFO0 Channel Buffer Access Register
 */
#define GTM_AFD0_CH_BUF4_BUF_ACC (GTM_PSM_AFD0_CH_BUF4_BUF_ACC)

/** Alias for GTM_PSM_AFD0_CH_BUF5_BUF_ACC.
 *  Note that this definition is obsolete, use GTM_PSM_AFD0_CH_BUF5_BUF_ACC
 * instead.
 * 180D0, AFD0 FIFO0 Channel Buffer Access Register
 */
#define GTM_AFD0_CH_BUF5_BUF_ACC (GTM_PSM_AFD0_CH_BUF5_BUF_ACC)

/** Alias for GTM_PSM_AFD0_CH_BUF6_BUF_ACC.
 *  Note that this definition is obsolete, use GTM_PSM_AFD0_CH_BUF6_BUF_ACC
 * instead.
 * 180E0, AFD0 FIFO0 Channel Buffer Access Register
 */
#define GTM_AFD0_CH_BUF6_BUF_ACC (GTM_PSM_AFD0_CH_BUF6_BUF_ACC)

/** Alias for GTM_PSM_AFD0_CH_BUF7_BUF_ACC.
 *  Note that this definition is obsolete, use GTM_PSM_AFD0_CH_BUF7_BUF_ACC
 * instead.
 * 180F0, AFD0 FIFO0 Channel Buffer Access Register
 */
#define GTM_AFD0_CH_BUF7_BUF_ACC (GTM_PSM_AFD0_CH_BUF7_BUF_ACC)

/** 280, ARU Access Register */
#define GTM_ARU_ACCESS ((*(volatile Ifx_GTM_ARU_ACCESS*)0xF0100280u)) /* lint --e(923)*/

/** 284, ARU Access Register Upper Data Word */
#define GTM_ARU_DATA_H ((*(volatile Ifx_GTM_ARU_DATA_H*)0xF0100284u)) /* lint --e(923)*/

/** 288, ARU Access Register Lower Data Word */
#define GTM_ARU_DATA_L ((*(volatile Ifx_GTM_ARU_DATA_L*)0xF0100288u)) /* lint --e(923)*/

/** 28C, Debug Access Channel 0 */
#define GTM_ARU_DBG_ACCESS0 ((*(volatile Ifx_GTM_ARU_DBG_ACCESS0*)0xF010028Cu)) /* lint --e(923)*/

/** 298, Debug Access Channel 0 */
#define GTM_ARU_DBG_ACCESS1 ((*(volatile Ifx_GTM_ARU_DBG_ACCESS1*)0xF0100298u)) /* lint --e(923)*/

/** 290, Debug Access 0 Transfer Register Upper Data Word */
#define GTM_ARU_DBG_DATA0_H ((*(volatile Ifx_GTM_ARU_DBG_DATA0_H*)0xF0100290u)) /* lint --e(923)*/

/** 294, Debug Access 0 Transfer Register Lower Data Word */
#define GTM_ARU_DBG_DATA0_L ((*(volatile Ifx_GTM_ARU_DBG_DATA0_L*)0xF0100294u)) /* lint --e(923)*/

/** 29C, Debug Access 1 Transfer Register Upper Data Word */
#define GTM_ARU_DBG_DATA1_H ((*(volatile Ifx_GTM_ARU_DBG_DATA1_H*)0xF010029Cu)) /* lint --e(923)*/

/** 2A0, Debug Access 1 Transfer Register Lower Data Word */
#define GTM_ARU_DBG_DATA1_L ((*(volatile Ifx_GTM_ARU_DBG_DATA1_L*)0xF01002A0u)) /* lint --e(923)*/

/** 2A8, ARU Interrupt Enable Register */
#define GTM_ARU_IRQ_EN ((*(volatile Ifx_GTM_ARU_IRQ_EN*)0xF01002A8u)) /* lint --e(923)*/

/** 2AC, ARU_NEW_DATA_IRQ Forcing Interrupt Register */
#define GTM_ARU_IRQ_FORCINT ((*(volatile Ifx_GTM_ARU_IRQ_FORCINT*)0xF01002ACu)) /* lint --e(923)*/

/** 2B0, IRQ Mode Configuration Register */
#define GTM_ARU_IRQ_MODE ((*(volatile Ifx_GTM_ARU_IRQ_MODE*)0xF01002B0u)) /* lint --e(923)*/

/** 2A4, ARU Interrupt Notification Register */
#define GTM_ARU_IRQ_NOTIFY ((*(volatile Ifx_GTM_ARU_IRQ_NOTIFY*)0xF01002A4u)) /* lint --e(923)*/

/** D018, ATOM AGC Force Update Control Register */
#define GTM_ATOM0_AGC0_FUPD_CTRL ((*(volatile Ifx_GTM_ATOM_AGC0_FUPD_CTRL*)0xF010D018u)) /* lint --e(923)*/

/** D010, ATOM AGC Output Enable Control Register */
#define GTM_ATOM0_AGC0_OUTEN_CTRL ((*(volatile Ifx_GTM_ATOM_AGC0_OUTEN_CTRL*)0xF010D010u)) /* lint --e(923)*/

/** D00C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM0_AGC_ACT_TB ((*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF010D00Cu)) /* lint --e(923)*/

/** D004, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM0_AGC_ENDIS_CTRL ((*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF010D004u)) /* lint --e(923)*/

/** D008, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM0_AGC_ENDIS_STAT ((*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF010D008u)) /* lint --e(923)*/

/** D000, ATOM AGC Global control register */
#define GTM_ATOM0_AGC_GLB_CTRL ((*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF010D000u)) /* lint --e(923)*/

/** D01C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM0_AGC_INT_TRIG ((*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF010D01Cu)) /* lint --e(923)*/

/** D014, ATOM AGC Output Enable Status Register */
#define GTM_ATOM0_AGC_OUTEN_STAT ((*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF010D014u)) /* lint --e(923)*/

/** D090, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH0_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D090u)) /* lint --e(923)*/

/** D098, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH0_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D098u)) /* lint --e(923)*/

/** D08C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH0_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D08Cu)) /* lint --e(923)*/

/** D080, ATOM Channel Control Register */
#define GTM_ATOM0_CH0_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D080u)) /* lint --e(923)*/

/** D0A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH0_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D0A4u)) /* lint --e(923)*/

/** D0A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH0_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D0A8u)) /* lint --e(923)*/

/** D0AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH0_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D0ACu)) /* lint --e(923)*/

/** D0A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH0_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D0A0u)) /* lint --e(923)*/

/** D088, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH0_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D088u)) /* lint --e(923)*/

/** D094, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH0_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D094u)) /* lint --e(923)*/

/** D09C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH0_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D09Cu)) /* lint --e(923)*/

/** D084, ATOM Channel Status Register */
#define GTM_ATOM0_CH0_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D084u)) /* lint --e(923)*/

/** D110, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH1_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D110u)) /* lint --e(923)*/

/** D118, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH1_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D118u)) /* lint --e(923)*/

/** D10C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH1_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D10Cu)) /* lint --e(923)*/

/** D100, ATOM Channel Control Register */
#define GTM_ATOM0_CH1_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D100u)) /* lint --e(923)*/

/** D124, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH1_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D124u)) /* lint --e(923)*/

/** D128, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH1_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D128u)) /* lint --e(923)*/

/** D12C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH1_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D12Cu)) /* lint --e(923)*/

/** D120, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH1_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D120u)) /* lint --e(923)*/

/** D108, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH1_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D108u)) /* lint --e(923)*/

/** D114, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH1_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D114u)) /* lint --e(923)*/

/** D11C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH1_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D11Cu)) /* lint --e(923)*/

/** D104, ATOM Channel Status Register */
#define GTM_ATOM0_CH1_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D104u)) /* lint --e(923)*/

/** D190, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH2_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D190u)) /* lint --e(923)*/

/** D198, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH2_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D198u)) /* lint --e(923)*/

/** D18C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH2_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D18Cu)) /* lint --e(923)*/

/** D180, ATOM Channel Control Register */
#define GTM_ATOM0_CH2_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D180u)) /* lint --e(923)*/

/** D1A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH2_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D1A4u)) /* lint --e(923)*/

/** D1A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH2_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D1A8u)) /* lint --e(923)*/

/** D1AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH2_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D1ACu)) /* lint --e(923)*/

/** D1A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH2_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D1A0u)) /* lint --e(923)*/

/** D188, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH2_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D188u)) /* lint --e(923)*/

/** D194, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH2_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D194u)) /* lint --e(923)*/

/** D19C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH2_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D19Cu)) /* lint --e(923)*/

/** D184, ATOM Channel Status Register */
#define GTM_ATOM0_CH2_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D184u)) /* lint --e(923)*/

/** D210, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH3_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D210u)) /* lint --e(923)*/

/** D218, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH3_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D218u)) /* lint --e(923)*/

/** D20C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH3_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D20Cu)) /* lint --e(923)*/

/** D200, ATOM Channel Control Register */
#define GTM_ATOM0_CH3_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D200u)) /* lint --e(923)*/

/** D224, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH3_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D224u)) /* lint --e(923)*/

/** D228, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH3_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D228u)) /* lint --e(923)*/

/** D22C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH3_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D22Cu)) /* lint --e(923)*/

/** D220, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH3_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D220u)) /* lint --e(923)*/

/** D208, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH3_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D208u)) /* lint --e(923)*/

/** D214, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH3_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D214u)) /* lint --e(923)*/

/** D21C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH3_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D21Cu)) /* lint --e(923)*/

/** D204, ATOM Channel Status Register */
#define GTM_ATOM0_CH3_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D204u)) /* lint --e(923)*/

/** D290, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH4_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D290u)) /* lint --e(923)*/

/** D298, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH4_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D298u)) /* lint --e(923)*/

/** D28C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH4_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D28Cu)) /* lint --e(923)*/

/** D280, ATOM Channel Control Register */
#define GTM_ATOM0_CH4_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D280u)) /* lint --e(923)*/

/** D2A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH4_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D2A4u)) /* lint --e(923)*/

/** D2A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH4_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D2A8u)) /* lint --e(923)*/

/** D2AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH4_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D2ACu)) /* lint --e(923)*/

/** D2A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH4_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D2A0u)) /* lint --e(923)*/

/** D288, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH4_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D288u)) /* lint --e(923)*/

/** D294, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH4_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D294u)) /* lint --e(923)*/

/** D29C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH4_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D29Cu)) /* lint --e(923)*/

/** D284, ATOM Channel Status Register */
#define GTM_ATOM0_CH4_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D284u)) /* lint --e(923)*/

/** D310, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH5_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D310u)) /* lint --e(923)*/

/** D318, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH5_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D318u)) /* lint --e(923)*/

/** D30C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH5_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D30Cu)) /* lint --e(923)*/

/** D300, ATOM Channel Control Register */
#define GTM_ATOM0_CH5_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D300u)) /* lint --e(923)*/

/** D324, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH5_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D324u)) /* lint --e(923)*/

/** D328, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH5_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D328u)) /* lint --e(923)*/

/** D32C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH5_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D32Cu)) /* lint --e(923)*/

/** D320, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH5_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D320u)) /* lint --e(923)*/

/** D308, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH5_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D308u)) /* lint --e(923)*/

/** D314, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH5_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D314u)) /* lint --e(923)*/

/** D31C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH5_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D31Cu)) /* lint --e(923)*/

/** D304, ATOM Channel Status Register */
#define GTM_ATOM0_CH5_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D304u)) /* lint --e(923)*/

/** D390, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH6_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D390u)) /* lint --e(923)*/

/** D398, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH6_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D398u)) /* lint --e(923)*/

/** D38C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH6_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D38Cu)) /* lint --e(923)*/

/** D380, ATOM Channel Control Register */
#define GTM_ATOM0_CH6_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D380u)) /* lint --e(923)*/

/** D3A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH6_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D3A4u)) /* lint --e(923)*/

/** D3A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH6_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D3A8u)) /* lint --e(923)*/

/** D3AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH6_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D3ACu)) /* lint --e(923)*/

/** D3A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH6_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D3A0u)) /* lint --e(923)*/

/** D388, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH6_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D388u)) /* lint --e(923)*/

/** D394, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH6_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D394u)) /* lint --e(923)*/

/** D39C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH6_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D39Cu)) /* lint --e(923)*/

/** D384, ATOM Channel Status Register */
#define GTM_ATOM0_CH6_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D384u)) /* lint --e(923)*/

/** D410, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH7_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D410u)) /* lint --e(923)*/

/** D418, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH7_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D418u)) /* lint --e(923)*/

/** D40C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH7_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D40Cu)) /* lint --e(923)*/

/** D400, ATOM Channel Control Register */
#define GTM_ATOM0_CH7_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D400u)) /* lint --e(923)*/

/** D424, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH7_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D424u)) /* lint --e(923)*/

/** D428, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH7_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D428u)) /* lint --e(923)*/

/** D42C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH7_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D42Cu)) /* lint --e(923)*/

/** D420, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH7_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D420u)) /* lint --e(923)*/

/** D408, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH7_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D408u)) /* lint --e(923)*/

/** D414, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH7_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D414u)) /* lint --e(923)*/

/** D41C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH7_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D41Cu)) /* lint --e(923)*/

/** D404, ATOM Channel Status Register */
#define GTM_ATOM0_CH7_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D404u)) /* lint --e(923)*/

/** D818, ATOM AGC Force Update Control Register */
#define GTM_ATOM1_AGC0_FUPD_CTRL ((*(volatile Ifx_GTM_ATOM_AGC0_FUPD_CTRL*)0xF010D818u)) /* lint --e(923)*/

/** D810, ATOM AGC Output Enable Control Register */
#define GTM_ATOM1_AGC0_OUTEN_CTRL ((*(volatile Ifx_GTM_ATOM_AGC0_OUTEN_CTRL*)0xF010D810u)) /* lint --e(923)*/

/** D80C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM1_AGC_ACT_TB ((*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF010D80Cu)) /* lint --e(923)*/

/** D804, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM1_AGC_ENDIS_CTRL ((*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF010D804u)) /* lint --e(923)*/

/** D808, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM1_AGC_ENDIS_STAT ((*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF010D808u)) /* lint --e(923)*/

/** D800, ATOM AGC Global control register */
#define GTM_ATOM1_AGC_GLB_CTRL ((*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF010D800u)) /* lint --e(923)*/

/** D81C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM1_AGC_INT_TRIG ((*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF010D81Cu)) /* lint --e(923)*/

/** D814, ATOM AGC Output Enable Status Register */
#define GTM_ATOM1_AGC_OUTEN_STAT ((*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF010D814u)) /* lint --e(923)*/

/** D890, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH0_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D890u)) /* lint --e(923)*/

/** D898, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH0_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D898u)) /* lint --e(923)*/

/** D88C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH0_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D88Cu)) /* lint --e(923)*/

/** D880, ATOM Channel Control Register */
#define GTM_ATOM1_CH0_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D880u)) /* lint --e(923)*/

/** D8A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH0_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D8A4u)) /* lint --e(923)*/

/** D8A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH0_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D8A8u)) /* lint --e(923)*/

/** D8AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH0_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D8ACu)) /* lint --e(923)*/

/** D8A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH0_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D8A0u)) /* lint --e(923)*/

/** D888, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH0_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D888u)) /* lint --e(923)*/

/** D894, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH0_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D894u)) /* lint --e(923)*/

/** D89C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH0_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D89Cu)) /* lint --e(923)*/

/** D884, ATOM Channel Status Register */
#define GTM_ATOM1_CH0_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D884u)) /* lint --e(923)*/

/** D910, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH1_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D910u)) /* lint --e(923)*/

/** D918, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH1_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D918u)) /* lint --e(923)*/

/** D90C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH1_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D90Cu)) /* lint --e(923)*/

/** D900, ATOM Channel Control Register */
#define GTM_ATOM1_CH1_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D900u)) /* lint --e(923)*/

/** D924, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH1_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D924u)) /* lint --e(923)*/

/** D928, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH1_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D928u)) /* lint --e(923)*/

/** D92C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH1_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D92Cu)) /* lint --e(923)*/

/** D920, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH1_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D920u)) /* lint --e(923)*/

/** D908, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH1_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D908u)) /* lint --e(923)*/

/** D914, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH1_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D914u)) /* lint --e(923)*/

/** D91C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH1_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D91Cu)) /* lint --e(923)*/

/** D904, ATOM Channel Status Register */
#define GTM_ATOM1_CH1_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D904u)) /* lint --e(923)*/

/** D990, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH2_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D990u)) /* lint --e(923)*/

/** D998, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH2_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D998u)) /* lint --e(923)*/

/** D98C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH2_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D98Cu)) /* lint --e(923)*/

/** D980, ATOM Channel Control Register */
#define GTM_ATOM1_CH2_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D980u)) /* lint --e(923)*/

/** D9A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH2_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D9A4u)) /* lint --e(923)*/

/** D9A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH2_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D9A8u)) /* lint --e(923)*/

/** D9AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH2_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D9ACu)) /* lint --e(923)*/

/** D9A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH2_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D9A0u)) /* lint --e(923)*/

/** D988, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH2_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D988u)) /* lint --e(923)*/

/** D994, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH2_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D994u)) /* lint --e(923)*/

/** D99C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH2_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D99Cu)) /* lint --e(923)*/

/** D984, ATOM Channel Status Register */
#define GTM_ATOM1_CH2_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D984u)) /* lint --e(923)*/

/** DA10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH3_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010DA10u)) /* lint --e(923)*/

/** DA18, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH3_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010DA18u)) /* lint --e(923)*/

/** DA0C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH3_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010DA0Cu)) /* lint --e(923)*/

/** DA00, ATOM Channel Control Register */
#define GTM_ATOM1_CH3_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010DA00u)) /* lint --e(923)*/

/** DA24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH3_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010DA24u)) /* lint --e(923)*/

/** DA28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH3_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010DA28u)) /* lint --e(923)*/

/** DA2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH3_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010DA2Cu)) /* lint --e(923)*/

/** DA20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH3_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010DA20u)) /* lint --e(923)*/

/** DA08, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH3_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010DA08u)) /* lint --e(923)*/

/** DA14, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH3_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010DA14u)) /* lint --e(923)*/

/** DA1C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH3_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010DA1Cu)) /* lint --e(923)*/

/** DA04, ATOM Channel Status Register */
#define GTM_ATOM1_CH3_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010DA04u)) /* lint --e(923)*/

/** DA90, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH4_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010DA90u)) /* lint --e(923)*/

/** DA98, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH4_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010DA98u)) /* lint --e(923)*/

/** DA8C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH4_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010DA8Cu)) /* lint --e(923)*/

/** DA80, ATOM Channel Control Register */
#define GTM_ATOM1_CH4_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010DA80u)) /* lint --e(923)*/

/** DAA4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH4_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010DAA4u)) /* lint --e(923)*/

/** DAA8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH4_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010DAA8u)) /* lint --e(923)*/

/** DAAC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH4_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010DAACu)) /* lint --e(923)*/

/** DAA0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH4_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010DAA0u)) /* lint --e(923)*/

/** DA88, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH4_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010DA88u)) /* lint --e(923)*/

/** DA94, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH4_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010DA94u)) /* lint --e(923)*/

/** DA9C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH4_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010DA9Cu)) /* lint --e(923)*/

/** DA84, ATOM Channel Status Register */
#define GTM_ATOM1_CH4_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010DA84u)) /* lint --e(923)*/

/** DB10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH5_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010DB10u)) /* lint --e(923)*/

/** DB18, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH5_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010DB18u)) /* lint --e(923)*/

/** DB0C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH5_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010DB0Cu)) /* lint --e(923)*/

/** DB00, ATOM Channel Control Register */
#define GTM_ATOM1_CH5_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010DB00u)) /* lint --e(923)*/

/** DB24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH5_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010DB24u)) /* lint --e(923)*/

/** DB28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH5_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010DB28u)) /* lint --e(923)*/

/** DB2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH5_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010DB2Cu)) /* lint --e(923)*/

/** DB20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH5_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010DB20u)) /* lint --e(923)*/

/** DB08, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH5_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010DB08u)) /* lint --e(923)*/

/** DB14, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH5_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010DB14u)) /* lint --e(923)*/

/** DB1C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH5_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010DB1Cu)) /* lint --e(923)*/

/** DB04, ATOM Channel Status Register */
#define GTM_ATOM1_CH5_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010DB04u)) /* lint --e(923)*/

/** DB90, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH6_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010DB90u)) /* lint --e(923)*/

/** DB98, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH6_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010DB98u)) /* lint --e(923)*/

/** DB8C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH6_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010DB8Cu)) /* lint --e(923)*/

/** DB80, ATOM Channel Control Register */
#define GTM_ATOM1_CH6_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010DB80u)) /* lint --e(923)*/

/** DBA4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH6_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010DBA4u)) /* lint --e(923)*/

/** DBA8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH6_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010DBA8u)) /* lint --e(923)*/

/** DBAC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH6_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010DBACu)) /* lint --e(923)*/

/** DBA0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH6_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010DBA0u)) /* lint --e(923)*/

/** DB88, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH6_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010DB88u)) /* lint --e(923)*/

/** DB94, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH6_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010DB94u)) /* lint --e(923)*/

/** DB9C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH6_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010DB9Cu)) /* lint --e(923)*/

/** DB84, ATOM Channel Status Register */
#define GTM_ATOM1_CH6_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010DB84u)) /* lint --e(923)*/

/** DC10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH7_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010DC10u)) /* lint --e(923)*/

/** DC18, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH7_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010DC18u)) /* lint --e(923)*/

/** DC0C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH7_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010DC0Cu)) /* lint --e(923)*/

/** DC00, ATOM Channel Control Register */
#define GTM_ATOM1_CH7_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010DC00u)) /* lint --e(923)*/

/** DC24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH7_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010DC24u)) /* lint --e(923)*/

/** DC28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH7_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010DC28u)) /* lint --e(923)*/

/** DC2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH7_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010DC2Cu)) /* lint --e(923)*/

/** DC20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH7_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010DC20u)) /* lint --e(923)*/

/** DC08, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH7_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010DC08u)) /* lint --e(923)*/

/** DC14, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH7_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010DC14u)) /* lint --e(923)*/

/** DC1C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH7_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010DC1Cu)) /* lint --e(923)*/

/** DC04, ATOM Channel Status Register */
#define GTM_ATOM1_CH7_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010DC04u)) /* lint --e(923)*/

/** E018, ATOM AGC Force Update Control Register */
#define GTM_ATOM2_AGC0_FUPD_CTRL ((*(volatile Ifx_GTM_ATOM_AGC0_FUPD_CTRL*)0xF010E018u)) /* lint --e(923)*/

/** E010, ATOM AGC Output Enable Control Register */
#define GTM_ATOM2_AGC0_OUTEN_CTRL ((*(volatile Ifx_GTM_ATOM_AGC0_OUTEN_CTRL*)0xF010E010u)) /* lint --e(923)*/

/** E00C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM2_AGC_ACT_TB ((*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF010E00Cu)) /* lint --e(923)*/

/** E004, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM2_AGC_ENDIS_CTRL ((*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF010E004u)) /* lint --e(923)*/

/** E008, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM2_AGC_ENDIS_STAT ((*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF010E008u)) /* lint --e(923)*/

/** E000, ATOM AGC Global control register */
#define GTM_ATOM2_AGC_GLB_CTRL ((*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF010E000u)) /* lint --e(923)*/

/** E01C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM2_AGC_INT_TRIG ((*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF010E01Cu)) /* lint --e(923)*/

/** E014, ATOM AGC Output Enable Status Register */
#define GTM_ATOM2_AGC_OUTEN_STAT ((*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF010E014u)) /* lint --e(923)*/

/** E090, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH0_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E090u)) /* lint --e(923)*/

/** E098, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH0_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E098u)) /* lint --e(923)*/

/** E08C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH0_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E08Cu)) /* lint --e(923)*/

/** E080, ATOM Channel Control Register */
#define GTM_ATOM2_CH0_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E080u)) /* lint --e(923)*/

/** E0A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH0_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E0A4u)) /* lint --e(923)*/

/** E0A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH0_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E0A8u)) /* lint --e(923)*/

/** E0AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH0_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E0ACu)) /* lint --e(923)*/

/** E0A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH0_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E0A0u)) /* lint --e(923)*/

/** E088, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH0_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E088u)) /* lint --e(923)*/

/** E094, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH0_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E094u)) /* lint --e(923)*/

/** E09C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH0_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E09Cu)) /* lint --e(923)*/

/** E084, ATOM Channel Status Register */
#define GTM_ATOM2_CH0_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E084u)) /* lint --e(923)*/

/** E110, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH1_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E110u)) /* lint --e(923)*/

/** E118, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH1_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E118u)) /* lint --e(923)*/

/** E10C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH1_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E10Cu)) /* lint --e(923)*/

/** E100, ATOM Channel Control Register */
#define GTM_ATOM2_CH1_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E100u)) /* lint --e(923)*/

/** E124, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH1_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E124u)) /* lint --e(923)*/

/** E128, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH1_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E128u)) /* lint --e(923)*/

/** E12C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH1_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E12Cu)) /* lint --e(923)*/

/** E120, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH1_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E120u)) /* lint --e(923)*/

/** E108, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH1_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E108u)) /* lint --e(923)*/

/** E114, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH1_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E114u)) /* lint --e(923)*/

/** E11C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH1_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E11Cu)) /* lint --e(923)*/

/** E104, ATOM Channel Status Register */
#define GTM_ATOM2_CH1_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E104u)) /* lint --e(923)*/

/** E190, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH2_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E190u)) /* lint --e(923)*/

/** E198, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH2_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E198u)) /* lint --e(923)*/

/** E18C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH2_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E18Cu)) /* lint --e(923)*/

/** E180, ATOM Channel Control Register */
#define GTM_ATOM2_CH2_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E180u)) /* lint --e(923)*/

/** E1A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH2_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E1A4u)) /* lint --e(923)*/

/** E1A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH2_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E1A8u)) /* lint --e(923)*/

/** E1AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH2_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E1ACu)) /* lint --e(923)*/

/** E1A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH2_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E1A0u)) /* lint --e(923)*/

/** E188, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH2_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E188u)) /* lint --e(923)*/

/** E194, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH2_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E194u)) /* lint --e(923)*/

/** E19C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH2_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E19Cu)) /* lint --e(923)*/

/** E184, ATOM Channel Status Register */
#define GTM_ATOM2_CH2_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E184u)) /* lint --e(923)*/

/** E210, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH3_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E210u)) /* lint --e(923)*/

/** E218, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH3_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E218u)) /* lint --e(923)*/

/** E20C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH3_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E20Cu)) /* lint --e(923)*/

/** E200, ATOM Channel Control Register */
#define GTM_ATOM2_CH3_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E200u)) /* lint --e(923)*/

/** E224, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH3_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E224u)) /* lint --e(923)*/

/** E228, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH3_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E228u)) /* lint --e(923)*/

/** E22C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH3_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E22Cu)) /* lint --e(923)*/

/** E220, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH3_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E220u)) /* lint --e(923)*/

/** E208, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH3_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E208u)) /* lint --e(923)*/

/** E214, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH3_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E214u)) /* lint --e(923)*/

/** E21C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH3_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E21Cu)) /* lint --e(923)*/

/** E204, ATOM Channel Status Register */
#define GTM_ATOM2_CH3_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E204u)) /* lint --e(923)*/

/** E290, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH4_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E290u)) /* lint --e(923)*/

/** E298, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH4_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E298u)) /* lint --e(923)*/

/** E28C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH4_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E28Cu)) /* lint --e(923)*/

/** E280, ATOM Channel Control Register */
#define GTM_ATOM2_CH4_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E280u)) /* lint --e(923)*/

/** E2A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH4_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E2A4u)) /* lint --e(923)*/

/** E2A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH4_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E2A8u)) /* lint --e(923)*/

/** E2AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH4_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E2ACu)) /* lint --e(923)*/

/** E2A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH4_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E2A0u)) /* lint --e(923)*/

/** E288, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH4_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E288u)) /* lint --e(923)*/

/** E294, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH4_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E294u)) /* lint --e(923)*/

/** E29C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH4_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E29Cu)) /* lint --e(923)*/

/** E284, ATOM Channel Status Register */
#define GTM_ATOM2_CH4_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E284u)) /* lint --e(923)*/

/** E310, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH5_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E310u)) /* lint --e(923)*/

/** E318, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH5_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E318u)) /* lint --e(923)*/

/** E30C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH5_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E30Cu)) /* lint --e(923)*/

/** E300, ATOM Channel Control Register */
#define GTM_ATOM2_CH5_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E300u)) /* lint --e(923)*/

/** E324, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH5_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E324u)) /* lint --e(923)*/

/** E328, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH5_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E328u)) /* lint --e(923)*/

/** E32C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH5_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E32Cu)) /* lint --e(923)*/

/** E320, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH5_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E320u)) /* lint --e(923)*/

/** E308, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH5_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E308u)) /* lint --e(923)*/

/** E314, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH5_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E314u)) /* lint --e(923)*/

/** E31C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH5_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E31Cu)) /* lint --e(923)*/

/** E304, ATOM Channel Status Register */
#define GTM_ATOM2_CH5_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E304u)) /* lint --e(923)*/

/** E390, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH6_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E390u)) /* lint --e(923)*/

/** E398, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH6_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E398u)) /* lint --e(923)*/

/** E38C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH6_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E38Cu)) /* lint --e(923)*/

/** E380, ATOM Channel Control Register */
#define GTM_ATOM2_CH6_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E380u)) /* lint --e(923)*/

/** E3A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH6_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E3A4u)) /* lint --e(923)*/

/** E3A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH6_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E3A8u)) /* lint --e(923)*/

/** E3AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH6_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E3ACu)) /* lint --e(923)*/

/** E3A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH6_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E3A0u)) /* lint --e(923)*/

/** E388, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH6_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E388u)) /* lint --e(923)*/

/** E394, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH6_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E394u)) /* lint --e(923)*/

/** E39C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH6_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E39Cu)) /* lint --e(923)*/

/** E384, ATOM Channel Status Register */
#define GTM_ATOM2_CH6_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E384u)) /* lint --e(923)*/

/** E410, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH7_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E410u)) /* lint --e(923)*/

/** E418, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH7_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E418u)) /* lint --e(923)*/

/** E40C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH7_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E40Cu)) /* lint --e(923)*/

/** E400, ATOM Channel Control Register */
#define GTM_ATOM2_CH7_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E400u)) /* lint --e(923)*/

/** E424, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH7_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E424u)) /* lint --e(923)*/

/** E428, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH7_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E428u)) /* lint --e(923)*/

/** E42C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH7_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E42Cu)) /* lint --e(923)*/

/** E420, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH7_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E420u)) /* lint --e(923)*/

/** E408, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH7_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E408u)) /* lint --e(923)*/

/** E414, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH7_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E414u)) /* lint --e(923)*/

/** E41C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH7_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E41Cu)) /* lint --e(923)*/

/** E404, ATOM Channel Status Register */
#define GTM_ATOM2_CH7_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E404u)) /* lint --e(923)*/

/** E818, ATOM AGC Force Update Control Register */
#define GTM_ATOM3_AGC0_FUPD_CTRL ((*(volatile Ifx_GTM_ATOM_AGC0_FUPD_CTRL*)0xF010E818u)) /* lint --e(923)*/

/** E810, ATOM AGC Output Enable Control Register */
#define GTM_ATOM3_AGC0_OUTEN_CTRL ((*(volatile Ifx_GTM_ATOM_AGC0_OUTEN_CTRL*)0xF010E810u)) /* lint --e(923)*/

/** E80C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM3_AGC_ACT_TB ((*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF010E80Cu)) /* lint --e(923)*/

/** E804, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM3_AGC_ENDIS_CTRL ((*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF010E804u)) /* lint --e(923)*/

/** E808, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM3_AGC_ENDIS_STAT ((*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF010E808u)) /* lint --e(923)*/

/** E800, ATOM AGC Global control register */
#define GTM_ATOM3_AGC_GLB_CTRL ((*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF010E800u)) /* lint --e(923)*/

/** E81C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM3_AGC_INT_TRIG ((*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF010E81Cu)) /* lint --e(923)*/

/** E814, ATOM AGC Output Enable Status Register */
#define GTM_ATOM3_AGC_OUTEN_STAT ((*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF010E814u)) /* lint --e(923)*/

/** E890, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH0_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E890u)) /* lint --e(923)*/

/** E898, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH0_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E898u)) /* lint --e(923)*/

/** E88C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH0_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E88Cu)) /* lint --e(923)*/

/** E880, ATOM Channel Control Register */
#define GTM_ATOM3_CH0_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E880u)) /* lint --e(923)*/

/** E8A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH0_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E8A4u)) /* lint --e(923)*/

/** E8A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH0_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E8A8u)) /* lint --e(923)*/

/** E8AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH0_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E8ACu)) /* lint --e(923)*/

/** E8A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH0_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E8A0u)) /* lint --e(923)*/

/** E888, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH0_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E888u)) /* lint --e(923)*/

/** E894, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH0_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E894u)) /* lint --e(923)*/

/** E89C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH0_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E89Cu)) /* lint --e(923)*/

/** E884, ATOM Channel Status Register */
#define GTM_ATOM3_CH0_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E884u)) /* lint --e(923)*/

/** E910, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH1_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E910u)) /* lint --e(923)*/

/** E918, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH1_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E918u)) /* lint --e(923)*/

/** E90C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH1_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E90Cu)) /* lint --e(923)*/

/** E900, ATOM Channel Control Register */
#define GTM_ATOM3_CH1_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E900u)) /* lint --e(923)*/

/** E924, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH1_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E924u)) /* lint --e(923)*/

/** E928, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH1_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E928u)) /* lint --e(923)*/

/** E92C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH1_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E92Cu)) /* lint --e(923)*/

/** E920, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH1_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E920u)) /* lint --e(923)*/

/** E908, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH1_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E908u)) /* lint --e(923)*/

/** E914, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH1_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E914u)) /* lint --e(923)*/

/** E91C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH1_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E91Cu)) /* lint --e(923)*/

/** E904, ATOM Channel Status Register */
#define GTM_ATOM3_CH1_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E904u)) /* lint --e(923)*/

/** E990, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH2_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E990u)) /* lint --e(923)*/

/** E998, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH2_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E998u)) /* lint --e(923)*/

/** E98C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH2_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E98Cu)) /* lint --e(923)*/

/** E980, ATOM Channel Control Register */
#define GTM_ATOM3_CH2_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E980u)) /* lint --e(923)*/

/** E9A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH2_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E9A4u)) /* lint --e(923)*/

/** E9A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH2_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E9A8u)) /* lint --e(923)*/

/** E9AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH2_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E9ACu)) /* lint --e(923)*/

/** E9A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH2_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E9A0u)) /* lint --e(923)*/

/** E988, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH2_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E988u)) /* lint --e(923)*/

/** E994, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH2_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E994u)) /* lint --e(923)*/

/** E99C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH2_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E99Cu)) /* lint --e(923)*/

/** E984, ATOM Channel Status Register */
#define GTM_ATOM3_CH2_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E984u)) /* lint --e(923)*/

/** EA10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH3_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010EA10u)) /* lint --e(923)*/

/** EA18, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH3_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010EA18u)) /* lint --e(923)*/

/** EA0C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH3_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010EA0Cu)) /* lint --e(923)*/

/** EA00, ATOM Channel Control Register */
#define GTM_ATOM3_CH3_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010EA00u)) /* lint --e(923)*/

/** EA24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH3_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010EA24u)) /* lint --e(923)*/

/** EA28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH3_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010EA28u)) /* lint --e(923)*/

/** EA2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH3_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010EA2Cu)) /* lint --e(923)*/

/** EA20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH3_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010EA20u)) /* lint --e(923)*/

/** EA08, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH3_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010EA08u)) /* lint --e(923)*/

/** EA14, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH3_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010EA14u)) /* lint --e(923)*/

/** EA1C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH3_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010EA1Cu)) /* lint --e(923)*/

/** EA04, ATOM Channel Status Register */
#define GTM_ATOM3_CH3_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010EA04u)) /* lint --e(923)*/

/** EA90, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH4_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010EA90u)) /* lint --e(923)*/

/** EA98, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH4_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010EA98u)) /* lint --e(923)*/

/** EA8C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH4_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010EA8Cu)) /* lint --e(923)*/

/** EA80, ATOM Channel Control Register */
#define GTM_ATOM3_CH4_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010EA80u)) /* lint --e(923)*/

/** EAA4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH4_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010EAA4u)) /* lint --e(923)*/

/** EAA8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH4_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010EAA8u)) /* lint --e(923)*/

/** EAAC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH4_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010EAACu)) /* lint --e(923)*/

/** EAA0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH4_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010EAA0u)) /* lint --e(923)*/

/** EA88, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH4_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010EA88u)) /* lint --e(923)*/

/** EA94, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH4_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010EA94u)) /* lint --e(923)*/

/** EA9C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH4_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010EA9Cu)) /* lint --e(923)*/

/** EA84, ATOM Channel Status Register */
#define GTM_ATOM3_CH4_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010EA84u)) /* lint --e(923)*/

/** EB10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH5_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010EB10u)) /* lint --e(923)*/

/** EB18, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH5_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010EB18u)) /* lint --e(923)*/

/** EB0C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH5_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010EB0Cu)) /* lint --e(923)*/

/** EB00, ATOM Channel Control Register */
#define GTM_ATOM3_CH5_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010EB00u)) /* lint --e(923)*/

/** EB24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH5_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010EB24u)) /* lint --e(923)*/

/** EB28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH5_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010EB28u)) /* lint --e(923)*/

/** EB2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH5_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010EB2Cu)) /* lint --e(923)*/

/** EB20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH5_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010EB20u)) /* lint --e(923)*/

/** EB08, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH5_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010EB08u)) /* lint --e(923)*/

/** EB14, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH5_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010EB14u)) /* lint --e(923)*/

/** EB1C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH5_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010EB1Cu)) /* lint --e(923)*/

/** EB04, ATOM Channel Status Register */
#define GTM_ATOM3_CH5_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010EB04u)) /* lint --e(923)*/

/** EB90, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH6_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010EB90u)) /* lint --e(923)*/

/** EB98, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH6_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010EB98u)) /* lint --e(923)*/

/** EB8C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH6_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010EB8Cu)) /* lint --e(923)*/

/** EB80, ATOM Channel Control Register */
#define GTM_ATOM3_CH6_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010EB80u)) /* lint --e(923)*/

/** EBA4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH6_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010EBA4u)) /* lint --e(923)*/

/** EBA8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH6_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010EBA8u)) /* lint --e(923)*/

/** EBAC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH6_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010EBACu)) /* lint --e(923)*/

/** EBA0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH6_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010EBA0u)) /* lint --e(923)*/

/** EB88, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH6_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010EB88u)) /* lint --e(923)*/

/** EB94, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH6_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010EB94u)) /* lint --e(923)*/

/** EB9C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH6_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010EB9Cu)) /* lint --e(923)*/

/** EB84, ATOM Channel Status Register */
#define GTM_ATOM3_CH6_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010EB84u)) /* lint --e(923)*/

/** EC10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH7_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010EC10u)) /* lint --e(923)*/

/** EC18, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH7_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010EC18u)) /* lint --e(923)*/

/** EC0C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH7_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010EC0Cu)) /* lint --e(923)*/

/** EC00, ATOM Channel Control Register */
#define GTM_ATOM3_CH7_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010EC00u)) /* lint --e(923)*/

/** EC24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH7_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010EC24u)) /* lint --e(923)*/

/** EC28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH7_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010EC28u)) /* lint --e(923)*/

/** EC2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH7_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010EC2Cu)) /* lint --e(923)*/

/** EC20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH7_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010EC20u)) /* lint --e(923)*/

/** EC08, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH7_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010EC08u)) /* lint --e(923)*/

/** EC14, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH7_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010EC14u)) /* lint --e(923)*/

/** EC1C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH7_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010EC1Cu)) /* lint --e(923)*/

/** EC04, ATOM Channel Status Register */
#define GTM_ATOM3_CH7_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010EC04u)) /* lint --e(923)*/

/** F018, ATOM AGC Force Update Control Register */
#define GTM_ATOM4_AGC0_FUPD_CTRL ((*(volatile Ifx_GTM_ATOM_AGC0_FUPD_CTRL*)0xF010F018u)) /* lint --e(923)*/

/** F010, ATOM AGC Output Enable Control Register */
#define GTM_ATOM4_AGC0_OUTEN_CTRL ((*(volatile Ifx_GTM_ATOM_AGC0_OUTEN_CTRL*)0xF010F010u)) /* lint --e(923)*/

/** F00C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM4_AGC_ACT_TB ((*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF010F00Cu)) /* lint --e(923)*/

/** F004, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM4_AGC_ENDIS_CTRL ((*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF010F004u)) /* lint --e(923)*/

/** F008, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM4_AGC_ENDIS_STAT ((*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF010F008u)) /* lint --e(923)*/

/** F000, ATOM AGC Global control register */
#define GTM_ATOM4_AGC_GLB_CTRL ((*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF010F000u)) /* lint --e(923)*/

/** F01C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM4_AGC_INT_TRIG ((*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF010F01Cu)) /* lint --e(923)*/

/** F014, ATOM AGC Output Enable Status Register */
#define GTM_ATOM4_AGC_OUTEN_STAT ((*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF010F014u)) /* lint --e(923)*/

/** F090, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH0_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F090u)) /* lint --e(923)*/

/** F098, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH0_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F098u)) /* lint --e(923)*/

/** F08C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH0_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F08Cu)) /* lint --e(923)*/

/** F080, ATOM Channel Control Register */
#define GTM_ATOM4_CH0_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F080u)) /* lint --e(923)*/

/** F0A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH0_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F0A4u)) /* lint --e(923)*/

/** F0A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH0_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F0A8u)) /* lint --e(923)*/

/** F0AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH0_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F0ACu)) /* lint --e(923)*/

/** F0A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH0_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F0A0u)) /* lint --e(923)*/

/** F088, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH0_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F088u)) /* lint --e(923)*/

/** F094, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH0_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F094u)) /* lint --e(923)*/

/** F09C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH0_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F09Cu)) /* lint --e(923)*/

/** F084, ATOM Channel Status Register */
#define GTM_ATOM4_CH0_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F084u)) /* lint --e(923)*/

/** F110, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH1_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F110u)) /* lint --e(923)*/

/** F118, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH1_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F118u)) /* lint --e(923)*/

/** F10C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH1_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F10Cu)) /* lint --e(923)*/

/** F100, ATOM Channel Control Register */
#define GTM_ATOM4_CH1_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F100u)) /* lint --e(923)*/

/** F124, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH1_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F124u)) /* lint --e(923)*/

/** F128, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH1_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F128u)) /* lint --e(923)*/

/** F12C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH1_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F12Cu)) /* lint --e(923)*/

/** F120, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH1_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F120u)) /* lint --e(923)*/

/** F108, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH1_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F108u)) /* lint --e(923)*/

/** F114, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH1_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F114u)) /* lint --e(923)*/

/** F11C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH1_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F11Cu)) /* lint --e(923)*/

/** F104, ATOM Channel Status Register */
#define GTM_ATOM4_CH1_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F104u)) /* lint --e(923)*/

/** F190, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH2_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F190u)) /* lint --e(923)*/

/** F198, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH2_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F198u)) /* lint --e(923)*/

/** F18C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH2_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F18Cu)) /* lint --e(923)*/

/** F180, ATOM Channel Control Register */
#define GTM_ATOM4_CH2_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F180u)) /* lint --e(923)*/

/** F1A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH2_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F1A4u)) /* lint --e(923)*/

/** F1A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH2_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F1A8u)) /* lint --e(923)*/

/** F1AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH2_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F1ACu)) /* lint --e(923)*/

/** F1A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH2_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F1A0u)) /* lint --e(923)*/

/** F188, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH2_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F188u)) /* lint --e(923)*/

/** F194, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH2_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F194u)) /* lint --e(923)*/

/** F19C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH2_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F19Cu)) /* lint --e(923)*/

/** F184, ATOM Channel Status Register */
#define GTM_ATOM4_CH2_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F184u)) /* lint --e(923)*/

/** F210, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH3_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F210u)) /* lint --e(923)*/

/** F218, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH3_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F218u)) /* lint --e(923)*/

/** F20C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH3_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F20Cu)) /* lint --e(923)*/

/** F200, ATOM Channel Control Register */
#define GTM_ATOM4_CH3_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F200u)) /* lint --e(923)*/

/** F224, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH3_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F224u)) /* lint --e(923)*/

/** F228, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH3_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F228u)) /* lint --e(923)*/

/** F22C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH3_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F22Cu)) /* lint --e(923)*/

/** F220, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH3_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F220u)) /* lint --e(923)*/

/** F208, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH3_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F208u)) /* lint --e(923)*/

/** F214, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH3_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F214u)) /* lint --e(923)*/

/** F21C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH3_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F21Cu)) /* lint --e(923)*/

/** F204, ATOM Channel Status Register */
#define GTM_ATOM4_CH3_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F204u)) /* lint --e(923)*/

/** F290, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH4_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F290u)) /* lint --e(923)*/

/** F298, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH4_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F298u)) /* lint --e(923)*/

/** F28C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH4_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F28Cu)) /* lint --e(923)*/

/** F280, ATOM Channel Control Register */
#define GTM_ATOM4_CH4_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F280u)) /* lint --e(923)*/

/** F2A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH4_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F2A4u)) /* lint --e(923)*/

/** F2A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH4_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F2A8u)) /* lint --e(923)*/

/** F2AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH4_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F2ACu)) /* lint --e(923)*/

/** F2A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH4_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F2A0u)) /* lint --e(923)*/

/** F288, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH4_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F288u)) /* lint --e(923)*/

/** F294, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH4_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F294u)) /* lint --e(923)*/

/** F29C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH4_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F29Cu)) /* lint --e(923)*/

/** F284, ATOM Channel Status Register */
#define GTM_ATOM4_CH4_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F284u)) /* lint --e(923)*/

/** F310, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH5_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F310u)) /* lint --e(923)*/

/** F318, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH5_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F318u)) /* lint --e(923)*/

/** F30C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH5_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F30Cu)) /* lint --e(923)*/

/** F300, ATOM Channel Control Register */
#define GTM_ATOM4_CH5_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F300u)) /* lint --e(923)*/

/** F324, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH5_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F324u)) /* lint --e(923)*/

/** F328, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH5_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F328u)) /* lint --e(923)*/

/** F32C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH5_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F32Cu)) /* lint --e(923)*/

/** F320, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH5_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F320u)) /* lint --e(923)*/

/** F308, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH5_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F308u)) /* lint --e(923)*/

/** F314, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH5_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F314u)) /* lint --e(923)*/

/** F31C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH5_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F31Cu)) /* lint --e(923)*/

/** F304, ATOM Channel Status Register */
#define GTM_ATOM4_CH5_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F304u)) /* lint --e(923)*/

/** F390, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH6_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F390u)) /* lint --e(923)*/

/** F398, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH6_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F398u)) /* lint --e(923)*/

/** F38C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH6_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F38Cu)) /* lint --e(923)*/

/** F380, ATOM Channel Control Register */
#define GTM_ATOM4_CH6_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F380u)) /* lint --e(923)*/

/** F3A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH6_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F3A4u)) /* lint --e(923)*/

/** F3A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH6_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F3A8u)) /* lint --e(923)*/

/** F3AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH6_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F3ACu)) /* lint --e(923)*/

/** F3A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH6_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F3A0u)) /* lint --e(923)*/

/** F388, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH6_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F388u)) /* lint --e(923)*/

/** F394, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH6_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F394u)) /* lint --e(923)*/

/** F39C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH6_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F39Cu)) /* lint --e(923)*/

/** F384, ATOM Channel Status Register */
#define GTM_ATOM4_CH6_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F384u)) /* lint --e(923)*/

/** F410, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH7_CM0 ((*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F410u)) /* lint --e(923)*/

/** F418, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH7_CM1 ((*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F418u)) /* lint --e(923)*/

/** F40C, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH7_CN0 ((*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F40Cu)) /* lint --e(923)*/

/** F400, ATOM Channel Control Register */
#define GTM_ATOM4_CH7_CTRL ((*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F400u)) /* lint --e(923)*/

/** F424, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH7_IRQ_EN ((*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F424u)) /* lint --e(923)*/

/** F428, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH7_IRQ_FORCINT ((*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F428u)) /* lint --e(923)*/

/** F42C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH7_IRQ_MODE ((*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F42Cu)) /* lint --e(923)*/

/** F420, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH7_IRQ_NOTIFY ((*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F420u)) /* lint --e(923)*/

/** F408, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH7_RDADDR ((*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F408u)) /* lint --e(923)*/

/** F414, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH7_SR0 ((*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F414u)) /* lint --e(923)*/

/** F41C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH7_SR1 ((*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F41Cu)) /* lint --e(923)*/

/** F404, ATOM Channel Status Register */
#define GTM_ATOM4_CH7_STAT ((*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F404u)) /* lint --e(923)*/

/** 464, BRC Interrupt Enable Register */
#define GTM_BRC_IRQ_EN ((*(volatile Ifx_GTM_BRC_IRQ_EN*)0xF0100464u)) /* lint --e(923)*/

/** 468, BRC_DEST_ERR Forcing Interrupt Register */
#define GTM_BRC_IRQ_FORCINT ((*(volatile Ifx_GTM_BRC_IRQ_FORCINT*)0xF0100468u)) /* lint --e(923)*/

/** 46C, BRC IRQ Mode Configuration Register */
#define GTM_BRC_IRQ_MODE ((*(volatile Ifx_GTM_BRC_IRQ_MODE*)0xF010046Cu)) /* lint --e(923)*/

/** 460, BRC Interrupt Notification Register */
#define GTM_BRC_IRQ_NOTIFY ((*(volatile Ifx_GTM_BRC_IRQ_NOTIFY*)0xF0100460u)) /* lint --e(923)*/

/** 470, BRC Software Reset Register */
#define GTM_BRC_RST ((*(volatile Ifx_GTM_BRC_RST*)0xF0100470u)) /* lint --e(923)*/

/** 400, Read Address For Input Channel */
#define GTM_BRC_SRC0_ADDR ((*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100400u)) /* lint --e(923)*/

/** 404, Destination Channels For Input Channel */
#define GTM_BRC_SRC0_DEST ((*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100404u)) /* lint --e(923)*/

/** 450, Read Address For Input Channel */
#define GTM_BRC_SRC10_ADDR ((*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100450u)) /* lint --e(923)*/

/** 454, Destination Channels For Input Channel */
#define GTM_BRC_SRC10_DEST ((*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100454u)) /* lint --e(923)*/

/** 458, Read Address For Input Channel */
#define GTM_BRC_SRC11_ADDR ((*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100458u)) /* lint --e(923)*/

/** 45C, Destination Channels For Input Channel */
#define GTM_BRC_SRC11_DEST ((*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010045Cu)) /* lint --e(923)*/

/** 408, Read Address For Input Channel */
#define GTM_BRC_SRC1_ADDR ((*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100408u)) /* lint --e(923)*/

/** 40C, Destination Channels For Input Channel */
#define GTM_BRC_SRC1_DEST ((*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010040Cu)) /* lint --e(923)*/

/** 410, Read Address For Input Channel */
#define GTM_BRC_SRC2_ADDR ((*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100410u)) /* lint --e(923)*/

/** 414, Destination Channels For Input Channel */
#define GTM_BRC_SRC2_DEST ((*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100414u)) /* lint --e(923)*/

/** 418, Read Address For Input Channel */
#define GTM_BRC_SRC3_ADDR ((*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100418u)) /* lint --e(923)*/

/** 41C, Destination Channels For Input Channel */
#define GTM_BRC_SRC3_DEST ((*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010041Cu)) /* lint --e(923)*/

/** 420, Read Address For Input Channel */
#define GTM_BRC_SRC4_ADDR ((*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100420u)) /* lint --e(923)*/

/** 424, Destination Channels For Input Channel */
#define GTM_BRC_SRC4_DEST ((*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100424u)) /* lint --e(923)*/

/** 428, Read Address For Input Channel */
#define GTM_BRC_SRC5_ADDR ((*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100428u)) /* lint --e(923)*/

/** 42C, Destination Channels For Input Channel */
#define GTM_BRC_SRC5_DEST ((*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010042Cu)) /* lint --e(923)*/

/** 430, Read Address For Input Channel */
#define GTM_BRC_SRC6_ADDR ((*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100430u)) /* lint --e(923)*/

/** 434, Destination Channels For Input Channel */
#define GTM_BRC_SRC6_DEST ((*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100434u)) /* lint --e(923)*/

/** 438, Read Address For Input Channel */
#define GTM_BRC_SRC7_ADDR ((*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100438u)) /* lint --e(923)*/

/** 43C, Destination Channels For Input Channel */
#define GTM_BRC_SRC7_DEST ((*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010043Cu)) /* lint --e(923)*/

/** 440, Read Address For Input Channel */
#define GTM_BRC_SRC8_ADDR ((*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100440u)) /* lint --e(923)*/

/** 444, Destination Channels For Input Channel */
#define GTM_BRC_SRC8_DEST ((*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100444u)) /* lint --e(923)*/

/** 448, Read Address For Input Channel */
#define GTM_BRC_SRC9_ADDR ((*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100448u)) /* lint --e(923)*/

/** 44C, Destination Channels For Input Channel */
#define GTM_BRC_SRC9_DEST ((*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010044Cu)) /* lint --e(923)*/

/** 30, GTM to SPB BRIDGE MODE */
#define GTM_BRIDGE_MODE ((*(volatile Ifx_GTM_BRIDGE_MODE*)0xF0100030u)) /* lint --e(923)*/

/** 34, GTM to SPB BRIDGE PTR1 */
#define GTM_BRIDGE_PTR1 ((*(volatile Ifx_GTM_BRIDGE_PTR1*)0xF0100034u)) /* lint --e(923)*/

/** 38, GTM to SPB BRIDGE PTR2 */
#define GTM_BRIDGE_PTR2 ((*(volatile Ifx_GTM_BRIDGE_PTR2*)0xF0100038u)) /* lint --e(923)*/

/** 9FD00, Clock Control Register */
#define GTM_CLC ((*(volatile Ifx_GTM_CLC*)0xF019FD00u)) /* lint --e(923)*/

/** 200, CMP Comparator Enable Register */
#define GTM_CMP_EN ((*(volatile Ifx_GTM_CMP_EN*)0xF0100200u)) /* lint --e(923)*/

/** 208, CMP Interrupt Enable Register */
#define GTM_CMP_IRQ_EN ((*(volatile Ifx_GTM_CMP_IRQ_EN*)0xF0100208u)) /* lint --e(923)*/

/** 20C, CMP Interrupt Force Register */
#define GTM_CMP_IRQ_FORCINT ((*(volatile Ifx_GTM_CMP_IRQ_FORCINT*)0xF010020Cu)) /* lint --e(923)*/

/** 210, CMP IRQ Mode Configuration Register */
#define GTM_CMP_IRQ_MODE ((*(volatile Ifx_GTM_CMP_IRQ_MODE*)0xF0100210u)) /* lint --e(923)*/

/** 204, CMP Event Notification Register */
#define GTM_CMP_IRQ_NOTIFY ((*(volatile Ifx_GTM_CMP_IRQ_NOTIFY*)0xF0100204u)) /* lint --e(923)*/

/** 30C, CMU Control For Clock Source 0 Register */
#define GTM_CMU_CLK_0_CTRL ((*(volatile Ifx_GTM_CMU_CLK_0_CTRL*)0xF010030Cu)) /* lint --e(923)*/

/** 310, CMU Control For Clock Source 1 Register */
#define GTM_CMU_CLK_1_CTRL ((*(volatile Ifx_GTM_CMU_CLK_1_CTRL*)0xF0100310u)) /* lint --e(923)*/

/** 314, CMU Control For Clock Source 2 Register */
#define GTM_CMU_CLK_2_CTRL ((*(volatile Ifx_GTM_CMU_CLK_2_CTRL*)0xF0100314u)) /* lint --e(923)*/

/** 318, CMU Control For Clock Source 3 Register */
#define GTM_CMU_CLK_3_CTRL ((*(volatile Ifx_GTM_CMU_CLK_3_CTRL*)0xF0100318u)) /* lint --e(923)*/

/** 31C, CMU Control For Clock Source 4 Register */
#define GTM_CMU_CLK_4_CTRL ((*(volatile Ifx_GTM_CMU_CLK_4_CTRL*)0xF010031Cu)) /* lint --e(923)*/

/** 320, CMU Control For Clock Source 5 Register */
#define GTM_CMU_CLK_5_CTRL ((*(volatile Ifx_GTM_CMU_CLK_5_CTRL*)0xF0100320u)) /* lint --e(923)*/

/** 324, CMU Control For Clock Source 6 Register */
#define GTM_CMU_CLK_6_CTRL ((*(volatile Ifx_GTM_CMU_CLK_6_CTRL*)0xF0100324u)) /* lint --e(923)*/

/** 328, CMU Control For Clock Source 7 Register */
#define GTM_CMU_CLK_7_CTRL ((*(volatile Ifx_GTM_CMU_CLK_7_CTRL*)0xF0100328u)) /* lint --e(923)*/

/** 300, CMU Clock Enable Register */
#define GTM_CMU_CLK_EN ((*(volatile Ifx_GTM_CMU_CLK_EN*)0xF0100300u)) /* lint --e(923)*/

/** 330, CMU External Clock 0 Control Denominator Register */
#define GTM_CMU_ECLK_0_DEN ((*(volatile Ifx_GTM_CMU_ECLK_0_DEN*)0xF0100330u)) /* lint --e(923)*/

/** 32C, CMU External Clock 0 Control Numerator Register */
#define GTM_CMU_ECLK_0_NUM ((*(volatile Ifx_GTM_CMU_ECLK_0_NUM*)0xF010032Cu)) /* lint --e(923)*/

/** 338, CMU External Clock 1 Control Denominator Register */
#define GTM_CMU_ECLK_1_DEN ((*(volatile Ifx_GTM_CMU_ECLK_1_DEN*)0xF0100338u)) /* lint --e(923)*/

/** 334, CMU External Clock 1 Control Numerator Register */
#define GTM_CMU_ECLK_1_NUM ((*(volatile Ifx_GTM_CMU_ECLK_1_NUM*)0xF0100334u)) /* lint --e(923)*/

/** 340, CMU External Clock 2 Control Denominator Register */
#define GTM_CMU_ECLK_2_DEN ((*(volatile Ifx_GTM_CMU_ECLK_2_DEN*)0xF0100340u)) /* lint --e(923)*/

/** 33C, CMU External Clock 2 Control Numerator Register */
#define GTM_CMU_ECLK_2_NUM ((*(volatile Ifx_GTM_CMU_ECLK_2_NUM*)0xF010033Cu)) /* lint --e(923)*/

/** 308, CMU Global Clock Control Denominator Register */
#define GTM_CMU_GCLK_DEN ((*(volatile Ifx_GTM_CMU_GCLK_DEN*)0xF0100308u)) /* lint --e(923)*/

/** 304, CMU Global Clock Control Numerator Register */
#define GTM_CMU_GCLK_NUM ((*(volatile Ifx_GTM_CMU_GCLK_NUM*)0xF0100304u)) /* lint --e(923)*/

/** 8, GTM Global Control Register */
#define GTM_CTRL ((*(volatile Ifx_GTM_CTRL*)0xF0100008u)) /* lint --e(923)*/

/** 281C0, Control Bits For Actions Register i */
#define GTM_DPLL_ACB0 ((*(volatile Ifx_GTM_DPLL_ACB*)0xF01281C0u)) /* lint --e(923)*/

/** 281C4, Control Bits For Actions Register i */
#define GTM_DPLL_ACB1 ((*(volatile Ifx_GTM_DPLL_ACB*)0xF01281C4u)) /* lint --e(923)*/

/** 281C8, Control Bits For Actions Register i */
#define GTM_DPLL_ACB2 ((*(volatile Ifx_GTM_DPLL_ACB*)0xF01281C8u)) /* lint --e(923)*/

/** 281CC, Control Bits For Actions Register i */
#define GTM_DPLL_ACB3 ((*(volatile Ifx_GTM_DPLL_ACB*)0xF01281CCu)) /* lint --e(923)*/

/** 281D0, Control Bits For Actions Register i */
#define GTM_DPLL_ACB4 ((*(volatile Ifx_GTM_DPLL_ACB*)0xF01281D0u)) /* lint --e(923)*/

/** 281D4, Control Bits For Actions Register i */
#define GTM_DPLL_ACB5 ((*(volatile Ifx_GTM_DPLL_ACB*)0xF01281D4u)) /* lint --e(923)*/

/** 28018, DPLL ACTION Status Register With Shadow Register */
#define GTM_DPLL_ACT_STA ((*(volatile Ifx_GTM_DPLL_ACT_STA*)0xF0128018u)) /* lint --e(923)*/

/** 280C8, DPLL Direct Load Input Value for SUB_INC1 */
#define GTM_DPLL_ADD_IN_LD1 ((*(volatile Ifx_GTM_DPLL_ADD_IN_LD1*)0xF01280C8u)) /* lint --e(923)*/

/** 280CC, DPLL Direct Load Input Value for SUB_INC1 */
#define GTM_DPLL_ADD_IN_LD2 ((*(volatile Ifx_GTM_DPLL_ADD_IN_LD2*)0xF01280CCu)) /* lint --e(923)*/

/** 28020, DPLL Address Offset Register For APT In RAM Region 2 */
#define GTM_DPLL_AOSV_2 ((*(volatile Ifx_GTM_DPLL_AOSV_2*)0xF0128020u)) /* lint --e(923)*/

/** 28028, DPLL Actual RAM Pointer to RAM Regions 1c1, 1c2 and 1c4 */
#define GTM_DPLL_APS ((*(volatile Ifx_GTM_DPLL_APS*)0xF0128028u)) /* lint --e(923)*/

/** 28030, DPLL Actual RAM Pointer to RAM Region 1c3 */
#define GTM_DPLL_APS_1C3 ((*(volatile Ifx_GTM_DPLL_APS_1c3*)0xF0128030u)) /* lint --e(923)*/

/** 280BC, DPLL Old RAM Pointer and Offset Value for STATE */
#define GTM_DPLL_APS_SYNC ((*(volatile Ifx_GTM_DPLL_APS_SYNC*)0xF01280BCu)) /* lint --e(923)*/

/** 28024, DPLL Actual RAM Pointer to RAM Regions 2a, b and d */
#define GTM_DPLL_APT ((*(volatile Ifx_GTM_DPLL_APT*)0xF0128024u)) /* lint --e(923)*/

/** 2802C, DPLL Actual RAM Pointer to RAM Region 2c */
#define GTM_DPLL_APT_2C ((*(volatile Ifx_GTM_DPLL_APT_2c*)0xF012802Cu)) /* lint --e(923)*/

/** 280B8, DPLL Old RAM Pointer and Offset Value for TRIGGER */
#define GTM_DPLL_APT_SYNC ((*(volatile Ifx_GTM_DPLL_APT_SYNC*)0xF01280B8u)) /* lint --e(923)*/

/** 28000, DPLL Control Register 0 */
#define GTM_DPLL_CTRL_0 ((*(volatile Ifx_GTM_DPLL_CTRL_0*)0xF0128000u)) /* lint --e(923)*/

/** 28004, DPLL Control Register 1 */
#define GTM_DPLL_CTRL_1 ((*(volatile Ifx_GTM_DPLL_CTRL_1*)0xF0128004u)) /* lint --e(923)*/

/** 28008, DPLL Control Register 2 */
#define GTM_DPLL_CTRL_2 ((*(volatile Ifx_GTM_DPLL_CTRL_2*)0xF0128008u)) /* lint --e(923)*/

/** 2800C, DPLL Control Register 3 */
#define GTM_DPLL_CTRL_3 ((*(volatile Ifx_GTM_DPLL_CTRL_3*)0xF012800Cu)) /* lint --e(923)*/

/** 28010, DPLL Control Register 4 */
#define GTM_DPLL_CTRL_4 ((*(volatile Ifx_GTM_DPLL_CTRL_4*)0xF0128010u)) /* lint --e(923)*/

/** 28050, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR0 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128050u)) /* lint --e(923)*/

/** 28054, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR1 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128054u)) /* lint --e(923)*/

/** 28078, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR10 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128078u)) /* lint --e(923)*/

/** 2807C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR11 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012807Cu)) /* lint --e(923)*/

/** 28080, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR12 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128080u)) /* lint --e(923)*/

/** 28084, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR13 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128084u)) /* lint --e(923)*/

/** 28088, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR14 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128088u)) /* lint --e(923)*/

/** 2808C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR15 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012808Cu)) /* lint --e(923)*/

/** 28090, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR16 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128090u)) /* lint --e(923)*/

/** 28094, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR17 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128094u)) /* lint --e(923)*/

/** 28098, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR18 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128098u)) /* lint --e(923)*/

/** 2809C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR19 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012809Cu)) /* lint --e(923)*/

/** 28058, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR2 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128058u)) /* lint --e(923)*/

/** 280A0, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR20 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF01280A0u)) /* lint --e(923)*/

/** 280A4, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR21 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF01280A4u)) /* lint --e(923)*/

/** 280A8, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR22 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF01280A8u)) /* lint --e(923)*/

/** 280AC, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR23 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF01280ACu)) /* lint --e(923)*/

/** 2805C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR3 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012805Cu)) /* lint --e(923)*/

/** 28060, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR4 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128060u)) /* lint --e(923)*/

/** 28064, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR5 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128064u)) /* lint --e(923)*/

/** 28068, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR6 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128068u)) /* lint --e(923)*/

/** 2806C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR7 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012806Cu)) /* lint --e(923)*/

/** 28070, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR8 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128070u)) /* lint --e(923)*/

/** 28074, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR9 ((*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128074u)) /* lint --e(923)*/

/** 280B0, DPLL Counter for Pulses for TBU_TS1 to be sent in Automatic End Mode */
#define GTM_DPLL_INC_CNT1 ((*(volatile Ifx_GTM_DPLL_INC_CNT1*)0xF01280B0u)) /* lint --e(923)*/

/** 280B4, DPLL Counter for Pulses for TBU_TS2 to be sent in Automatic End Mode
 * when SMC=RMO=1 */
#define GTM_DPLL_INC_CNT2 ((*(volatile Ifx_GTM_DPLL_INC_CNT2*)0xF01280B4u)) /* lint --e(923)*/

/** 28044, DPLL Interrupt Enable Register */
#define GTM_DPLL_IRQ_EN ((*(volatile Ifx_GTM_DPLL_IRQ_EN*)0xF0128044u)) /* lint --e(923)*/

/** 28048, DPLL Interrupt Force Register */
#define GTM_DPLL_IRQ_FORCINT ((*(volatile Ifx_GTM_DPLL_IRQ_FORCINT*)0xF0128048u)) /* lint --e(923)*/

/** 2804C, DPLL Interrupt Mode Register */
#define GTM_DPLL_IRQ_MODE ((*(volatile Ifx_GTM_DPLL_IRQ_MODE*)0xF012804Cu)) /* lint --e(923)*/

/** 28040, DPLL Interrupt Notification Register */
#define GTM_DPLL_IRQ_NOTIFY ((*(volatile Ifx_GTM_DPLL_IRQ_NOTIFY*)0xF0128040u)) /* lint --e(923)*/

/** 2803C, DPLL Number of Active TRIGGER Events to Interrupt */
#define GTM_DPLL_NTI_CNT ((*(volatile Ifx_GTM_DPLL_NTI_CNT*)0xF012803Cu)) /* lint --e(923)*/

/** 28038, DPLL Number of Recent STATE Events Used for Calculations */
#define GTM_DPLL_NUSC ((*(volatile Ifx_GTM_DPLL_NUSC*)0xF0128038u)) /* lint --e(923)*/

/** 28034, DPLL Number of Recent TRIGGER Events Used for Calculations */
#define GTM_DPLL_NUTC ((*(volatile Ifx_GTM_DPLL_NUTC*)0xF0128034u)) /* lint --e(923)*/

/** 2801C, DPLL Offset And Switch Old/New Address Register */
#define GTM_DPLL_OSW ((*(volatile Ifx_GTM_DPLL_OSW*)0xF012801Cu)) /* lint --e(923)*/

/** 28160, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC0 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128160u)) /* lint --e(923)*/

/** 28164, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC1 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128164u)) /* lint --e(923)*/

/** 28188, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC10 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128188u)) /* lint --e(923)*/

/** 2818C, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC11 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF012818Cu)) /* lint --e(923)*/

/** 28190, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC12 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128190u)) /* lint --e(923)*/

/** 28194, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC13 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128194u)) /* lint --e(923)*/

/** 28198, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC14 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128198u)) /* lint --e(923)*/

/** 2819C, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC15 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF012819Cu)) /* lint --e(923)*/

/** 281A0, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC16 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF01281A0u)) /* lint --e(923)*/

/** 281A4, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC17 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF01281A4u)) /* lint --e(923)*/

/** 281A8, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC18 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF01281A8u)) /* lint --e(923)*/

/** 281AC, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC19 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF01281ACu)) /* lint --e(923)*/

/** 28168, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC2 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128168u)) /* lint --e(923)*/

/** 281B0, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC20 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF01281B0u)) /* lint --e(923)*/

/** 281B4, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC21 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF01281B4u)) /* lint --e(923)*/

/** 281B8, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC22 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF01281B8u)) /* lint --e(923)*/

/** 281BC, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC23 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF01281BCu)) /* lint --e(923)*/

/** 2816C, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC3 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF012816Cu)) /* lint --e(923)*/

/** 28170, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC4 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128170u)) /* lint --e(923)*/

/** 28174, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC5 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128174u)) /* lint --e(923)*/

/** 28178, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC6 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128178u)) /* lint --e(923)*/

/** 2817C, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC7 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF012817Cu)) /* lint --e(923)*/

/** 28180, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC8 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128180u)) /* lint --e(923)*/

/** 28184, Calculated Position Value for ACTION_i Register */
#define GTM_DPLL_PSAC9 ((*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128184u)) /* lint --e(923)*/

/** 283BC, DPLL RAM Initatlisation Register */
#define GTM_DPLL_RAM_INI ((*(volatile Ifx_GTM_DPLL_RAM_INI*)0xF01283BCu)) /* lint --e(923)*/

/** 28014, DPLL Status Register */
#define GTM_DPLL_STATUS ((*(volatile Ifx_GTM_DPLL_STATUS*)0xF0128014u)) /* lint --e(923)*/

/** 280C4, DPLL TBU_TS0 Value at last STATE Event */
#define GTM_DPLL_TBU_TS0_S ((*(volatile Ifx_GTM_DPLL_TBU_TS0_S*)0xF01280C4u)) /* lint --e(923)*/

/** 280C0, DPLL TBU_TS0 Value at last TRIGGER Event */
#define GTM_DPLL_TBU_TS0_T ((*(volatile Ifx_GTM_DPLL_TBU_TS0_T*)0xF01280C0u)) /* lint --e(923)*/

/** 28100, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA0 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128100u)) /* lint --e(923)*/

/** 28104, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA1 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128104u)) /* lint --e(923)*/

/** 28128, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA10 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128128u)) /* lint --e(923)*/

/** 2812C, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA11 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF012812Cu)) /* lint --e(923)*/

/** 28130, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA12 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128130u)) /* lint --e(923)*/

/** 28134, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA13 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128134u)) /* lint --e(923)*/

/** 28138, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA14 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128138u)) /* lint --e(923)*/

/** 2813C, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA15 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF012813Cu)) /* lint --e(923)*/

/** 28140, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA16 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128140u)) /* lint --e(923)*/

/** 28144, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA17 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128144u)) /* lint --e(923)*/

/** 28148, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA18 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128148u)) /* lint --e(923)*/

/** 2814C, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA19 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF012814Cu)) /* lint --e(923)*/

/** 28108, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA2 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128108u)) /* lint --e(923)*/

/** 28150, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA20 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128150u)) /* lint --e(923)*/

/** 28154, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA21 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128154u)) /* lint --e(923)*/

/** 28158, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA22 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128158u)) /* lint --e(923)*/

/** 2815C, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA23 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF012815Cu)) /* lint --e(923)*/

/** 2810C, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA3 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF012810Cu)) /* lint --e(923)*/

/** 28110, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA4 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128110u)) /* lint --e(923)*/

/** 28114, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA5 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128114u)) /* lint --e(923)*/

/** 28118, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA6 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128118u)) /* lint --e(923)*/

/** 2811C, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA7 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF012811Cu)) /* lint --e(923)*/

/** 28120, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA8 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128120u)) /* lint --e(923)*/

/** 28124, Calculated Time Stamp For ACTION_i Register */
#define GTM_DPLL_TSA9 ((*(volatile Ifx_GTM_DPLL_TSA*)0xF0128124u)) /* lint --e(923)*/

/** 9FD80, DSADC Input Select 1Register */
#define GTM_DSADCINSEL1 ((*(volatile Ifx_GTM_DSADCINSEL1*)0xF019FD80u)) /* lint --e(923)*/

/** 9FD84, DSADC Input Select 2Register */
#define GTM_DSADCINSEL2 ((*(volatile Ifx_GTM_DSADCINSEL2*)0xF019FD84u)) /* lint --e(923)*/

/** 9FD88, DSADC Output Select 0 Register */
#define GTM_DSADCOUTSEL00 ((*(volatile Ifx_GTM_DSADCOUTSEL00*)0xF019FD88u)) /* lint --e(923)*/

/** 9FD90, DSADC Output Select 1 Register */
#define GTM_DSADCOUTSEL10 ((*(volatile Ifx_GTM_DSADCOUTSEL10*)0xF019FD90u)) /* lint --e(923)*/

/** Alias for GTM_PSM_F2A0_CH_ARU_RD_FIFO0.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_CH_ARU_RD_FIFO0
 * instead.
 * 18000, F2A Read Channel Address Register
 */
#define GTM_F2A0_CH_ARU_RD_FIFO0 (GTM_PSM_F2A0_CH_ARU_RD_FIFO0)

/** Alias for GTM_PSM_F2A0_CH_ARU_RD_FIFO1.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_CH_ARU_RD_FIFO1
 * instead.
 * 18004, F2A Read Channel Address Register
 */
#define GTM_F2A0_CH_ARU_RD_FIFO1 (GTM_PSM_F2A0_CH_ARU_RD_FIFO1)

/** Alias for GTM_PSM_F2A0_CH_ARU_RD_FIFO2.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_CH_ARU_RD_FIFO2
 * instead.
 * 18008, F2A Read Channel Address Register
 */
#define GTM_F2A0_CH_ARU_RD_FIFO2 (GTM_PSM_F2A0_CH_ARU_RD_FIFO2)

/** Alias for GTM_PSM_F2A0_CH_ARU_RD_FIFO3.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_CH_ARU_RD_FIFO3
 * instead.
 * 1800C, F2A Read Channel Address Register
 */
#define GTM_F2A0_CH_ARU_RD_FIFO3 (GTM_PSM_F2A0_CH_ARU_RD_FIFO3)

/** Alias for GTM_PSM_F2A0_CH_ARU_RD_FIFO4.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_CH_ARU_RD_FIFO4
 * instead.
 * 18010, F2A Read Channel Address Register
 */
#define GTM_F2A0_CH_ARU_RD_FIFO4 (GTM_PSM_F2A0_CH_ARU_RD_FIFO4)

/** Alias for GTM_PSM_F2A0_CH_ARU_RD_FIFO5.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_CH_ARU_RD_FIFO5
 * instead.
 * 18014, F2A Read Channel Address Register
 */
#define GTM_F2A0_CH_ARU_RD_FIFO5 (GTM_PSM_F2A0_CH_ARU_RD_FIFO5)

/** Alias for GTM_PSM_F2A0_CH_ARU_RD_FIFO6.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_CH_ARU_RD_FIFO6
 * instead.
 * 18018, F2A Read Channel Address Register
 */
#define GTM_F2A0_CH_ARU_RD_FIFO6 (GTM_PSM_F2A0_CH_ARU_RD_FIFO6)

/** Alias for GTM_PSM_F2A0_CH_ARU_RD_FIFO7.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_CH_ARU_RD_FIFO7
 * instead.
 * 1801C, F2A Read Channel Address Register
 */
#define GTM_F2A0_CH_ARU_RD_FIFO7 (GTM_PSM_F2A0_CH_ARU_RD_FIFO7)

/** Alias for GTM_PSM_F2A0_CH_STR_CFG0.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_CH_STR_CFG0 instead.
 * 18020, F2A Stream Configuration Register
 */
#define GTM_F2A0_CH_STR_CFG0 (GTM_PSM_F2A0_CH_STR_CFG0)

/** Alias for GTM_PSM_F2A0_CH_STR_CFG1.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_CH_STR_CFG1 instead.
 * 18024, F2A Stream Configuration Register
 */
#define GTM_F2A0_CH_STR_CFG1 (GTM_PSM_F2A0_CH_STR_CFG1)

/** Alias for GTM_PSM_F2A0_CH_STR_CFG2.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_CH_STR_CFG2 instead.
 * 18028, F2A Stream Configuration Register
 */
#define GTM_F2A0_CH_STR_CFG2 (GTM_PSM_F2A0_CH_STR_CFG2)

/** Alias for GTM_PSM_F2A0_CH_STR_CFG3.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_CH_STR_CFG3 instead.
 * 1802C, F2A Stream Configuration Register
 */
#define GTM_F2A0_CH_STR_CFG3 (GTM_PSM_F2A0_CH_STR_CFG3)

/** Alias for GTM_PSM_F2A0_CH_STR_CFG4.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_CH_STR_CFG4 instead.
 * 18030, F2A Stream Configuration Register
 */
#define GTM_F2A0_CH_STR_CFG4 (GTM_PSM_F2A0_CH_STR_CFG4)

/** Alias for GTM_PSM_F2A0_CH_STR_CFG5.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_CH_STR_CFG5 instead.
 * 18034, F2A Stream Configuration Register
 */
#define GTM_F2A0_CH_STR_CFG5 (GTM_PSM_F2A0_CH_STR_CFG5)

/** Alias for GTM_PSM_F2A0_CH_STR_CFG6.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_CH_STR_CFG6 instead.
 * 18038, F2A Stream Configuration Register
 */
#define GTM_F2A0_CH_STR_CFG6 (GTM_PSM_F2A0_CH_STR_CFG6)

/** Alias for GTM_PSM_F2A0_CH_STR_CFG7.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_CH_STR_CFG7 instead.
 * 1803C, F2A Stream Configuration Register
 */
#define GTM_F2A0_CH_STR_CFG7 (GTM_PSM_F2A0_CH_STR_CFG7)

/** Alias for GTM_PSM_F2A0_ENABLE.
 *  Note that this definition is obsolete, use GTM_PSM_F2A0_ENABLE instead.
 * 18040, F2A0 Stream Activation Register
 */
#define GTM_F2A0_ENABLE (GTM_PSM_F2A0_ENABLE)

/** Alias for GTM_PSM_FIFO0_CH0_CTRL.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH0_CTRL instead.
 * 18400, FIFO0 Channel Control Register
 */
#define GTM_FIFO0_CH0_CTRL (GTM_PSM_FIFO0_CH0_CTRL)

/** Alias for GTM_PSM_FIFO0_CH0_END_ADDR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH0_END_ADDR
 * instead.
 * 18404, FIFO0 Channel End Address Register
 */
#define GTM_FIFO0_CH0_END_ADDR (GTM_PSM_FIFO0_CH0_END_ADDR)

/** Alias for GTM_PSM_FIFO0_CH0_FILL_LEVEL.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH0_FILL_LEVEL
 * instead.
 * 18418, FIFO0 Channel Fill Level Register
 */
#define GTM_FIFO0_CH0_FILL_LEVEL (GTM_PSM_FIFO0_CH0_FILL_LEVEL)

/** Alias for GTM_PSM_FIFO0_CH0_LOWER_WM.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH0_LOWER_WM
 * instead.
 * 18410, FIFO0 Channel Lower Watermark Register
 */
#define GTM_FIFO0_CH0_LOWER_WM (GTM_PSM_FIFO0_CH0_LOWER_WM)

/** Alias for GTM_PSM_FIFO0_CH0_START_ADDR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH0_START_ADDR
 * instead.
 * 18408, FIFO0 Channel Start Address Register
 */
#define GTM_FIFO0_CH0_START_ADDR (GTM_PSM_FIFO0_CH0_START_ADDR)

/** Alias for GTM_PSM_FIFO0_CH0_STATUS.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH0_STATUS instead.
 * 18414, FIFO0 Channel Status Register
 */
#define GTM_FIFO0_CH0_STATUS (GTM_PSM_FIFO0_CH0_STATUS)

/** Alias for GTM_PSM_FIFO0_CH0_UPPER_WM.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH0_UPPER_WM
 * instead.
 * 1840C, FIFO0 Channel Upper Watermark Register
 */
#define GTM_FIFO0_CH0_UPPER_WM (GTM_PSM_FIFO0_CH0_UPPER_WM)

/** Alias for GTM_PSM_FIFO0_CH1_CTRL.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH1_CTRL instead.
 * 18420, FIFO0 Channel Control Register
 */
#define GTM_FIFO0_CH1_CTRL (GTM_PSM_FIFO0_CH1_CTRL)

/** Alias for GTM_PSM_FIFO0_CH1_END_ADDR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH1_END_ADDR
 * instead.
 * 18424, FIFO0 Channel End Address Register
 */
#define GTM_FIFO0_CH1_END_ADDR (GTM_PSM_FIFO0_CH1_END_ADDR)

/** Alias for GTM_PSM_FIFO0_CH1_FILL_LEVEL.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH1_FILL_LEVEL
 * instead.
 * 18438, FIFO0 Channel Fill Level Register
 */
#define GTM_FIFO0_CH1_FILL_LEVEL (GTM_PSM_FIFO0_CH1_FILL_LEVEL)

/** Alias for GTM_PSM_FIFO0_CH1_LOWER_WM.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH1_LOWER_WM
 * instead.
 * 18430, FIFO0 Channel Lower Watermark Register
 */
#define GTM_FIFO0_CH1_LOWER_WM (GTM_PSM_FIFO0_CH1_LOWER_WM)

/** Alias for GTM_PSM_FIFO0_CH1_START_ADDR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH1_START_ADDR
 * instead.
 * 18428, FIFO0 Channel Start Address Register
 */
#define GTM_FIFO0_CH1_START_ADDR (GTM_PSM_FIFO0_CH1_START_ADDR)

/** Alias for GTM_PSM_FIFO0_CH1_STATUS.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH1_STATUS instead.
 * 18434, FIFO0 Channel Status Register
 */
#define GTM_FIFO0_CH1_STATUS (GTM_PSM_FIFO0_CH1_STATUS)

/** Alias for GTM_PSM_FIFO0_CH1_UPPER_WM.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH1_UPPER_WM
 * instead.
 * 1842C, FIFO0 Channel Upper Watermark Register
 */
#define GTM_FIFO0_CH1_UPPER_WM (GTM_PSM_FIFO0_CH1_UPPER_WM)

/** Alias for GTM_PSM_FIFO0_CH2_CTRL.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH2_CTRL instead.
 * 18440, FIFO0 Channel Control Register
 */
#define GTM_FIFO0_CH2_CTRL (GTM_PSM_FIFO0_CH2_CTRL)

/** Alias for GTM_PSM_FIFO0_CH2_END_ADDR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH2_END_ADDR
 * instead.
 * 18444, FIFO0 Channel End Address Register
 */
#define GTM_FIFO0_CH2_END_ADDR (GTM_PSM_FIFO0_CH2_END_ADDR)

/** Alias for GTM_PSM_FIFO0_CH2_FILL_LEVEL.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH2_FILL_LEVEL
 * instead.
 * 18458, FIFO0 Channel Fill Level Register
 */
#define GTM_FIFO0_CH2_FILL_LEVEL (GTM_PSM_FIFO0_CH2_FILL_LEVEL)

/** Alias for GTM_PSM_FIFO0_CH2_LOWER_WM.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH2_LOWER_WM
 * instead.
 * 18450, FIFO0 Channel Lower Watermark Register
 */
#define GTM_FIFO0_CH2_LOWER_WM (GTM_PSM_FIFO0_CH2_LOWER_WM)

/** Alias for GTM_PSM_FIFO0_CH2_START_ADDR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH2_START_ADDR
 * instead.
 * 18448, FIFO0 Channel Start Address Register
 */
#define GTM_FIFO0_CH2_START_ADDR (GTM_PSM_FIFO0_CH2_START_ADDR)

/** Alias for GTM_PSM_FIFO0_CH2_STATUS.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH2_STATUS instead.
 * 18454, FIFO0 Channel Status Register
 */
#define GTM_FIFO0_CH2_STATUS (GTM_PSM_FIFO0_CH2_STATUS)

/** Alias for GTM_PSM_FIFO0_CH2_UPPER_WM.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH2_UPPER_WM
 * instead.
 * 1844C, FIFO0 Channel Upper Watermark Register
 */
#define GTM_FIFO0_CH2_UPPER_WM (GTM_PSM_FIFO0_CH2_UPPER_WM)

/** Alias for GTM_PSM_FIFO0_CH3_CTRL.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH3_CTRL instead.
 * 18460, FIFO0 Channel Control Register
 */
#define GTM_FIFO0_CH3_CTRL (GTM_PSM_FIFO0_CH3_CTRL)

/** Alias for GTM_PSM_FIFO0_CH3_END_ADDR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH3_END_ADDR
 * instead.
 * 18464, FIFO0 Channel End Address Register
 */
#define GTM_FIFO0_CH3_END_ADDR (GTM_PSM_FIFO0_CH3_END_ADDR)

/** Alias for GTM_PSM_FIFO0_CH3_FILL_LEVEL.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH3_FILL_LEVEL
 * instead.
 * 18478, FIFO0 Channel Fill Level Register
 */
#define GTM_FIFO0_CH3_FILL_LEVEL (GTM_PSM_FIFO0_CH3_FILL_LEVEL)

/** Alias for GTM_PSM_FIFO0_CH3_LOWER_WM.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH3_LOWER_WM
 * instead.
 * 18470, FIFO0 Channel Lower Watermark Register
 */
#define GTM_FIFO0_CH3_LOWER_WM (GTM_PSM_FIFO0_CH3_LOWER_WM)

/** Alias for GTM_PSM_FIFO0_CH3_START_ADDR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH3_START_ADDR
 * instead.
 * 18468, FIFO0 Channel Start Address Register
 */
#define GTM_FIFO0_CH3_START_ADDR (GTM_PSM_FIFO0_CH3_START_ADDR)

/** Alias for GTM_PSM_FIFO0_CH3_STATUS.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH3_STATUS instead.
 * 18474, FIFO0 Channel Status Register
 */
#define GTM_FIFO0_CH3_STATUS (GTM_PSM_FIFO0_CH3_STATUS)

/** Alias for GTM_PSM_FIFO0_CH3_UPPER_WM.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH3_UPPER_WM
 * instead.
 * 1846C, FIFO0 Channel Upper Watermark Register
 */
#define GTM_FIFO0_CH3_UPPER_WM (GTM_PSM_FIFO0_CH3_UPPER_WM)

/** Alias for GTM_PSM_FIFO0_CH4_CTRL.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH4_CTRL instead.
 * 18480, FIFO0 Channel Control Register
 */
#define GTM_FIFO0_CH4_CTRL (GTM_PSM_FIFO0_CH4_CTRL)

/** Alias for GTM_PSM_FIFO0_CH4_END_ADDR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH4_END_ADDR
 * instead.
 * 18484, FIFO0 Channel End Address Register
 */
#define GTM_FIFO0_CH4_END_ADDR (GTM_PSM_FIFO0_CH4_END_ADDR)

/** Alias for GTM_PSM_FIFO0_CH4_FILL_LEVEL.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH4_FILL_LEVEL
 * instead.
 * 18498, FIFO0 Channel Fill Level Register
 */
#define GTM_FIFO0_CH4_FILL_LEVEL (GTM_PSM_FIFO0_CH4_FILL_LEVEL)

/** Alias for GTM_PSM_FIFO0_CH4_LOWER_WM.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH4_LOWER_WM
 * instead.
 * 18490, FIFO0 Channel Lower Watermark Register
 */
#define GTM_FIFO0_CH4_LOWER_WM (GTM_PSM_FIFO0_CH4_LOWER_WM)

/** Alias for GTM_PSM_FIFO0_CH4_START_ADDR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH4_START_ADDR
 * instead.
 * 18488, FIFO0 Channel Start Address Register
 */
#define GTM_FIFO0_CH4_START_ADDR (GTM_PSM_FIFO0_CH4_START_ADDR)

/** Alias for GTM_PSM_FIFO0_CH4_STATUS.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH4_STATUS instead.
 * 18494, FIFO0 Channel Status Register
 */
#define GTM_FIFO0_CH4_STATUS (GTM_PSM_FIFO0_CH4_STATUS)

/** Alias for GTM_PSM_FIFO0_CH4_UPPER_WM.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH4_UPPER_WM
 * instead.
 * 1848C, FIFO0 Channel Upper Watermark Register
 */
#define GTM_FIFO0_CH4_UPPER_WM (GTM_PSM_FIFO0_CH4_UPPER_WM)

/** Alias for GTM_PSM_FIFO0_CH5_CTRL.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH5_CTRL instead.
 * 184A0, FIFO0 Channel Control Register
 */
#define GTM_FIFO0_CH5_CTRL (GTM_PSM_FIFO0_CH5_CTRL)

/** Alias for GTM_PSM_FIFO0_CH5_END_ADDR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH5_END_ADDR
 * instead.
 * 184A4, FIFO0 Channel End Address Register
 */
#define GTM_FIFO0_CH5_END_ADDR (GTM_PSM_FIFO0_CH5_END_ADDR)

/** Alias for GTM_PSM_FIFO0_CH5_FILL_LEVEL.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH5_FILL_LEVEL
 * instead.
 * 184B8, FIFO0 Channel Fill Level Register
 */
#define GTM_FIFO0_CH5_FILL_LEVEL (GTM_PSM_FIFO0_CH5_FILL_LEVEL)

/** Alias for GTM_PSM_FIFO0_CH5_LOWER_WM.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH5_LOWER_WM
 * instead.
 * 184B0, FIFO0 Channel Lower Watermark Register
 */
#define GTM_FIFO0_CH5_LOWER_WM (GTM_PSM_FIFO0_CH5_LOWER_WM)

/** Alias for GTM_PSM_FIFO0_CH5_START_ADDR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH5_START_ADDR
 * instead.
 * 184A8, FIFO0 Channel Start Address Register
 */
#define GTM_FIFO0_CH5_START_ADDR (GTM_PSM_FIFO0_CH5_START_ADDR)

/** Alias for GTM_PSM_FIFO0_CH5_STATUS.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH5_STATUS instead.
 * 184B4, FIFO0 Channel Status Register
 */
#define GTM_FIFO0_CH5_STATUS (GTM_PSM_FIFO0_CH5_STATUS)

/** Alias for GTM_PSM_FIFO0_CH5_UPPER_WM.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH5_UPPER_WM
 * instead.
 * 184AC, FIFO0 Channel Upper Watermark Register
 */
#define GTM_FIFO0_CH5_UPPER_WM (GTM_PSM_FIFO0_CH5_UPPER_WM)

/** Alias for GTM_PSM_FIFO0_CH6_CTRL.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH6_CTRL instead.
 * 184C0, FIFO0 Channel Control Register
 */
#define GTM_FIFO0_CH6_CTRL (GTM_PSM_FIFO0_CH6_CTRL)

/** Alias for GTM_PSM_FIFO0_CH6_END_ADDR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH6_END_ADDR
 * instead.
 * 184C4, FIFO0 Channel End Address Register
 */
#define GTM_FIFO0_CH6_END_ADDR (GTM_PSM_FIFO0_CH6_END_ADDR)

/** Alias for GTM_PSM_FIFO0_CH6_FILL_LEVEL.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH6_FILL_LEVEL
 * instead.
 * 184D8, FIFO0 Channel Fill Level Register
 */
#define GTM_FIFO0_CH6_FILL_LEVEL (GTM_PSM_FIFO0_CH6_FILL_LEVEL)

/** Alias for GTM_PSM_FIFO0_CH6_LOWER_WM.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH6_LOWER_WM
 * instead.
 * 184D0, FIFO0 Channel Lower Watermark Register
 */
#define GTM_FIFO0_CH6_LOWER_WM (GTM_PSM_FIFO0_CH6_LOWER_WM)

/** Alias for GTM_PSM_FIFO0_CH6_START_ADDR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH6_START_ADDR
 * instead.
 * 184C8, FIFO0 Channel Start Address Register
 */
#define GTM_FIFO0_CH6_START_ADDR (GTM_PSM_FIFO0_CH6_START_ADDR)

/** Alias for GTM_PSM_FIFO0_CH6_STATUS.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH6_STATUS instead.
 * 184D4, FIFO0 Channel Status Register
 */
#define GTM_FIFO0_CH6_STATUS (GTM_PSM_FIFO0_CH6_STATUS)

/** Alias for GTM_PSM_FIFO0_CH6_UPPER_WM.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH6_UPPER_WM
 * instead.
 * 184CC, FIFO0 Channel Upper Watermark Register
 */
#define GTM_FIFO0_CH6_UPPER_WM (GTM_PSM_FIFO0_CH6_UPPER_WM)

/** Alias for GTM_PSM_FIFO0_CH7_CTRL.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH7_CTRL instead.
 * 184E0, FIFO0 Channel Control Register
 */
#define GTM_FIFO0_CH7_CTRL (GTM_PSM_FIFO0_CH7_CTRL)

/** Alias for GTM_PSM_FIFO0_CH7_END_ADDR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH7_END_ADDR
 * instead.
 * 184E4, FIFO0 Channel End Address Register
 */
#define GTM_FIFO0_CH7_END_ADDR (GTM_PSM_FIFO0_CH7_END_ADDR)

/** Alias for GTM_PSM_FIFO0_CH7_FILL_LEVEL.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH7_FILL_LEVEL
 * instead.
 * 184F8, FIFO0 Channel Fill Level Register
 */
#define GTM_FIFO0_CH7_FILL_LEVEL (GTM_PSM_FIFO0_CH7_FILL_LEVEL)

/** Alias for GTM_PSM_FIFO0_CH7_LOWER_WM.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH7_LOWER_WM
 * instead.
 * 184F0, FIFO0 Channel Lower Watermark Register
 */
#define GTM_FIFO0_CH7_LOWER_WM (GTM_PSM_FIFO0_CH7_LOWER_WM)

/** Alias for GTM_PSM_FIFO0_CH7_START_ADDR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH7_START_ADDR
 * instead.
 * 184E8, FIFO0 Channel Start Address Register
 */
#define GTM_FIFO0_CH7_START_ADDR (GTM_PSM_FIFO0_CH7_START_ADDR)

/** Alias for GTM_PSM_FIFO0_CH7_STATUS.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH7_STATUS instead.
 * 184F4, FIFO0 Channel Status Register
 */
#define GTM_FIFO0_CH7_STATUS (GTM_PSM_FIFO0_CH7_STATUS)

/** Alias for GTM_PSM_FIFO0_CH7_UPPER_WM.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH7_UPPER_WM
 * instead.
 * 184EC, FIFO0 Channel Upper Watermark Register
 */
#define GTM_FIFO0_CH7_UPPER_WM (GTM_PSM_FIFO0_CH7_UPPER_WM)

/** Alias for GTM_PSM_FIFO0_CH_IRQ0_IRQ_EN.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ0_IRQ_EN
 * instead.
 * 18604, FIFO0 FIFO0 FIFO0 Interrupt Enable Register
 */
#define GTM_FIFO0_CH_IRQ0_IRQ_EN (GTM_PSM_FIFO0_CH_IRQ0_IRQ_EN)

/** Alias for GTM_PSM_FIFO0_CH_IRQ0_IRQ_FORCINT.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ0_IRQ_FORCINT
 * instead.
 * 18608, FIFO0 Channel Force Interrupt By Software Register
 */
#define GTM_FIFO0_CH_IRQ0_IRQ_FORCINT (GTM_PSM_FIFO0_CH_IRQ0_IRQ_FORCINT)

/** Alias for GTM_PSM_FIFO0_CH_IRQ0_IRQ_MODE.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ0_IRQ_MODE
 * instead.
 * 1860C, FIFO0 Channel IRQ Mode Control Register
 */
#define GTM_FIFO0_CH_IRQ0_IRQ_MODE (GTM_PSM_FIFO0_CH_IRQ0_IRQ_MODE)

/** Alias for GTM_PSM_FIFO0_CH_IRQ0_IRQ_NOTIFY.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ0_IRQ_NOTIFY
 * instead.
 * 18600, FIFO0 Channel Interrupt Notification Register
 */
#define GTM_FIFO0_CH_IRQ0_IRQ_NOTIFY (GTM_PSM_FIFO0_CH_IRQ0_IRQ_NOTIFY)

/** Alias for GTM_PSM_FIFO0_CH_IRQ1_IRQ_EN.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ1_IRQ_EN
 * instead.
 * 18624, FIFO0 FIFO0 FIFO0 Interrupt Enable Register
 */
#define GTM_FIFO0_CH_IRQ1_IRQ_EN (GTM_PSM_FIFO0_CH_IRQ1_IRQ_EN)

/** Alias for GTM_PSM_FIFO0_CH_IRQ1_IRQ_FORCINT.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ1_IRQ_FORCINT
 * instead.
 * 18628, FIFO0 Channel Force Interrupt By Software Register
 */
#define GTM_FIFO0_CH_IRQ1_IRQ_FORCINT (GTM_PSM_FIFO0_CH_IRQ1_IRQ_FORCINT)

/** Alias for GTM_PSM_FIFO0_CH_IRQ1_IRQ_MODE.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ1_IRQ_MODE
 * instead.
 * 1862C, FIFO0 Channel IRQ Mode Control Register
 */
#define GTM_FIFO0_CH_IRQ1_IRQ_MODE (GTM_PSM_FIFO0_CH_IRQ1_IRQ_MODE)

/** Alias for GTM_PSM_FIFO0_CH_IRQ1_IRQ_NOTIFY.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ1_IRQ_NOTIFY
 * instead.
 * 18620, FIFO0 Channel Interrupt Notification Register
 */
#define GTM_FIFO0_CH_IRQ1_IRQ_NOTIFY (GTM_PSM_FIFO0_CH_IRQ1_IRQ_NOTIFY)

/** Alias for GTM_PSM_FIFO0_CH_IRQ2_IRQ_EN.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ2_IRQ_EN
 * instead.
 * 18644, FIFO0 FIFO0 FIFO0 Interrupt Enable Register
 */
#define GTM_FIFO0_CH_IRQ2_IRQ_EN (GTM_PSM_FIFO0_CH_IRQ2_IRQ_EN)

/** Alias for GTM_PSM_FIFO0_CH_IRQ2_IRQ_FORCINT.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ2_IRQ_FORCINT
 * instead.
 * 18648, FIFO0 Channel Force Interrupt By Software Register
 */
#define GTM_FIFO0_CH_IRQ2_IRQ_FORCINT (GTM_PSM_FIFO0_CH_IRQ2_IRQ_FORCINT)

/** Alias for GTM_PSM_FIFO0_CH_IRQ2_IRQ_MODE.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ2_IRQ_MODE
 * instead.
 * 1864C, FIFO0 Channel IRQ Mode Control Register
 */
#define GTM_FIFO0_CH_IRQ2_IRQ_MODE (GTM_PSM_FIFO0_CH_IRQ2_IRQ_MODE)

/** Alias for GTM_PSM_FIFO0_CH_IRQ2_IRQ_NOTIFY.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ2_IRQ_NOTIFY
 * instead.
 * 18640, FIFO0 Channel Interrupt Notification Register
 */
#define GTM_FIFO0_CH_IRQ2_IRQ_NOTIFY (GTM_PSM_FIFO0_CH_IRQ2_IRQ_NOTIFY)

/** Alias for GTM_PSM_FIFO0_CH_IRQ3_IRQ_EN.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ3_IRQ_EN
 * instead.
 * 18664, FIFO0 FIFO0 FIFO0 Interrupt Enable Register
 */
#define GTM_FIFO0_CH_IRQ3_IRQ_EN (GTM_PSM_FIFO0_CH_IRQ3_IRQ_EN)

/** Alias for GTM_PSM_FIFO0_CH_IRQ3_IRQ_FORCINT.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ3_IRQ_FORCINT
 * instead.
 * 18668, FIFO0 Channel Force Interrupt By Software Register
 */
#define GTM_FIFO0_CH_IRQ3_IRQ_FORCINT (GTM_PSM_FIFO0_CH_IRQ3_IRQ_FORCINT)

/** Alias for GTM_PSM_FIFO0_CH_IRQ3_IRQ_MODE.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ3_IRQ_MODE
 * instead.
 * 1866C, FIFO0 Channel IRQ Mode Control Register
 */
#define GTM_FIFO0_CH_IRQ3_IRQ_MODE (GTM_PSM_FIFO0_CH_IRQ3_IRQ_MODE)

/** Alias for GTM_PSM_FIFO0_CH_IRQ3_IRQ_NOTIFY.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ3_IRQ_NOTIFY
 * instead.
 * 18660, FIFO0 Channel Interrupt Notification Register
 */
#define GTM_FIFO0_CH_IRQ3_IRQ_NOTIFY (GTM_PSM_FIFO0_CH_IRQ3_IRQ_NOTIFY)

/** Alias for GTM_PSM_FIFO0_CH_IRQ4_IRQ_EN.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ4_IRQ_EN
 * instead.
 * 18684, FIFO0 FIFO0 FIFO0 Interrupt Enable Register
 */
#define GTM_FIFO0_CH_IRQ4_IRQ_EN (GTM_PSM_FIFO0_CH_IRQ4_IRQ_EN)

/** Alias for GTM_PSM_FIFO0_CH_IRQ4_IRQ_FORCINT.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ4_IRQ_FORCINT
 * instead.
 * 18688, FIFO0 Channel Force Interrupt By Software Register
 */
#define GTM_FIFO0_CH_IRQ4_IRQ_FORCINT (GTM_PSM_FIFO0_CH_IRQ4_IRQ_FORCINT)

/** Alias for GTM_PSM_FIFO0_CH_IRQ4_IRQ_MODE.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ4_IRQ_MODE
 * instead.
 * 1868C, FIFO0 Channel IRQ Mode Control Register
 */
#define GTM_FIFO0_CH_IRQ4_IRQ_MODE (GTM_PSM_FIFO0_CH_IRQ4_IRQ_MODE)

/** Alias for GTM_PSM_FIFO0_CH_IRQ4_IRQ_NOTIFY.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ4_IRQ_NOTIFY
 * instead.
 * 18680, FIFO0 Channel Interrupt Notification Register
 */
#define GTM_FIFO0_CH_IRQ4_IRQ_NOTIFY (GTM_PSM_FIFO0_CH_IRQ4_IRQ_NOTIFY)

/** Alias for GTM_PSM_FIFO0_CH_IRQ5_IRQ_EN.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ5_IRQ_EN
 * instead.
 * 186A4, FIFO0 FIFO0 FIFO0 Interrupt Enable Register
 */
#define GTM_FIFO0_CH_IRQ5_IRQ_EN (GTM_PSM_FIFO0_CH_IRQ5_IRQ_EN)

/** Alias for GTM_PSM_FIFO0_CH_IRQ5_IRQ_FORCINT.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ5_IRQ_FORCINT
 * instead.
 * 186A8, FIFO0 Channel Force Interrupt By Software Register
 */
#define GTM_FIFO0_CH_IRQ5_IRQ_FORCINT (GTM_PSM_FIFO0_CH_IRQ5_IRQ_FORCINT)

/** Alias for GTM_PSM_FIFO0_CH_IRQ5_IRQ_MODE.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ5_IRQ_MODE
 * instead.
 * 186AC, FIFO0 Channel IRQ Mode Control Register
 */
#define GTM_FIFO0_CH_IRQ5_IRQ_MODE (GTM_PSM_FIFO0_CH_IRQ5_IRQ_MODE)

/** Alias for GTM_PSM_FIFO0_CH_IRQ5_IRQ_NOTIFY.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ5_IRQ_NOTIFY
 * instead.
 * 186A0, FIFO0 Channel Interrupt Notification Register
 */
#define GTM_FIFO0_CH_IRQ5_IRQ_NOTIFY (GTM_PSM_FIFO0_CH_IRQ5_IRQ_NOTIFY)

/** Alias for GTM_PSM_FIFO0_CH_IRQ6_IRQ_EN.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ6_IRQ_EN
 * instead.
 * 186C4, FIFO0 FIFO0 FIFO0 Interrupt Enable Register
 */
#define GTM_FIFO0_CH_IRQ6_IRQ_EN (GTM_PSM_FIFO0_CH_IRQ6_IRQ_EN)

/** Alias for GTM_PSM_FIFO0_CH_IRQ6_IRQ_FORCINT.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ6_IRQ_FORCINT
 * instead.
 * 186C8, FIFO0 Channel Force Interrupt By Software Register
 */
#define GTM_FIFO0_CH_IRQ6_IRQ_FORCINT (GTM_PSM_FIFO0_CH_IRQ6_IRQ_FORCINT)

/** Alias for GTM_PSM_FIFO0_CH_IRQ6_IRQ_MODE.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ6_IRQ_MODE
 * instead.
 * 186CC, FIFO0 Channel IRQ Mode Control Register
 */
#define GTM_FIFO0_CH_IRQ6_IRQ_MODE (GTM_PSM_FIFO0_CH_IRQ6_IRQ_MODE)

/** Alias for GTM_PSM_FIFO0_CH_IRQ6_IRQ_NOTIFY.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ6_IRQ_NOTIFY
 * instead.
 * 186C0, FIFO0 Channel Interrupt Notification Register
 */
#define GTM_FIFO0_CH_IRQ6_IRQ_NOTIFY (GTM_PSM_FIFO0_CH_IRQ6_IRQ_NOTIFY)

/** Alias for GTM_PSM_FIFO0_CH_IRQ7_IRQ_EN.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ7_IRQ_EN
 * instead.
 * 186E4, FIFO0 FIFO0 FIFO0 Interrupt Enable Register
 */
#define GTM_FIFO0_CH_IRQ7_IRQ_EN (GTM_PSM_FIFO0_CH_IRQ7_IRQ_EN)

/** Alias for GTM_PSM_FIFO0_CH_IRQ7_IRQ_FORCINT.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ7_IRQ_FORCINT
 * instead.
 * 186E8, FIFO0 Channel Force Interrupt By Software Register
 */
#define GTM_FIFO0_CH_IRQ7_IRQ_FORCINT (GTM_PSM_FIFO0_CH_IRQ7_IRQ_FORCINT)

/** Alias for GTM_PSM_FIFO0_CH_IRQ7_IRQ_MODE.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ7_IRQ_MODE
 * instead.
 * 186EC, FIFO0 Channel IRQ Mode Control Register
 */
#define GTM_FIFO0_CH_IRQ7_IRQ_MODE (GTM_PSM_FIFO0_CH_IRQ7_IRQ_MODE)

/** Alias for GTM_PSM_FIFO0_CH_IRQ7_IRQ_NOTIFY.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_IRQ7_IRQ_NOTIFY
 * instead.
 * 186E0, FIFO0 Channel Interrupt Notification Register
 */
#define GTM_FIFO0_CH_IRQ7_IRQ_NOTIFY (GTM_PSM_FIFO0_CH_IRQ7_IRQ_NOTIFY)

/** Alias for GTM_PSM_FIFO0_CH_PTR0_RD_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR0_RD_PTR
 * instead.
 * 18504, FIFO0 Channel Read Pointer Register
 */
#define GTM_FIFO0_CH_PTR0_RD_PTR (GTM_PSM_FIFO0_CH_PTR0_RD_PTR)

/** Alias for GTM_PSM_FIFO0_CH_PTR0_WR_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR0_WR_PTR
 * instead.
 * 18500, FIFO0 Channel Write Pointer Register
 */
#define GTM_FIFO0_CH_PTR0_WR_PTR (GTM_PSM_FIFO0_CH_PTR0_WR_PTR)

/** Alias for GTM_PSM_FIFO0_CH_PTR1_RD_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR1_RD_PTR
 * instead.
 * 18524, FIFO0 Channel Read Pointer Register
 */
#define GTM_FIFO0_CH_PTR1_RD_PTR (GTM_PSM_FIFO0_CH_PTR1_RD_PTR)

/** Alias for GTM_PSM_FIFO0_CH_PTR1_WR_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR1_WR_PTR
 * instead.
 * 18520, FIFO0 Channel Write Pointer Register
 */
#define GTM_FIFO0_CH_PTR1_WR_PTR (GTM_PSM_FIFO0_CH_PTR1_WR_PTR)

/** Alias for GTM_PSM_FIFO0_CH_PTR2_RD_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR2_RD_PTR
 * instead.
 * 18544, FIFO0 Channel Read Pointer Register
 */
#define GTM_FIFO0_CH_PTR2_RD_PTR (GTM_PSM_FIFO0_CH_PTR2_RD_PTR)

/** Alias for GTM_PSM_FIFO0_CH_PTR2_WR_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR2_WR_PTR
 * instead.
 * 18540, FIFO0 Channel Write Pointer Register
 */
#define GTM_FIFO0_CH_PTR2_WR_PTR (GTM_PSM_FIFO0_CH_PTR2_WR_PTR)

/** Alias for GTM_PSM_FIFO0_CH_PTR3_RD_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR3_RD_PTR
 * instead.
 * 18564, FIFO0 Channel Read Pointer Register
 */
#define GTM_FIFO0_CH_PTR3_RD_PTR (GTM_PSM_FIFO0_CH_PTR3_RD_PTR)

/** Alias for GTM_PSM_FIFO0_CH_PTR3_WR_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR3_WR_PTR
 * instead.
 * 18560, FIFO0 Channel Write Pointer Register
 */
#define GTM_FIFO0_CH_PTR3_WR_PTR (GTM_PSM_FIFO0_CH_PTR3_WR_PTR)

/** Alias for GTM_PSM_FIFO0_CH_PTR4_RD_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR4_RD_PTR
 * instead.
 * 18584, FIFO0 Channel Read Pointer Register
 */
#define GTM_FIFO0_CH_PTR4_RD_PTR (GTM_PSM_FIFO0_CH_PTR4_RD_PTR)

/** Alias for GTM_PSM_FIFO0_CH_PTR4_WR_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR4_WR_PTR
 * instead.
 * 18580, FIFO0 Channel Write Pointer Register
 */
#define GTM_FIFO0_CH_PTR4_WR_PTR (GTM_PSM_FIFO0_CH_PTR4_WR_PTR)

/** Alias for GTM_PSM_FIFO0_CH_PTR5_RD_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR5_RD_PTR
 * instead.
 * 185A4, FIFO0 Channel Read Pointer Register
 */
#define GTM_FIFO0_CH_PTR5_RD_PTR (GTM_PSM_FIFO0_CH_PTR5_RD_PTR)

/** Alias for GTM_PSM_FIFO0_CH_PTR5_WR_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR5_WR_PTR
 * instead.
 * 185A0, FIFO0 Channel Write Pointer Register
 */
#define GTM_FIFO0_CH_PTR5_WR_PTR (GTM_PSM_FIFO0_CH_PTR5_WR_PTR)

/** Alias for GTM_PSM_FIFO0_CH_PTR6_RD_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR6_RD_PTR
 * instead.
 * 185C4, FIFO0 Channel Read Pointer Register
 */
#define GTM_FIFO0_CH_PTR6_RD_PTR (GTM_PSM_FIFO0_CH_PTR6_RD_PTR)

/** Alias for GTM_PSM_FIFO0_CH_PTR6_WR_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR6_WR_PTR
 * instead.
 * 185C0, FIFO0 Channel Write Pointer Register
 */
#define GTM_FIFO0_CH_PTR6_WR_PTR (GTM_PSM_FIFO0_CH_PTR6_WR_PTR)

/** Alias for GTM_PSM_FIFO0_CH_PTR7_RD_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR7_RD_PTR
 * instead.
 * 185E4, FIFO0 Channel Read Pointer Register
 */
#define GTM_FIFO0_CH_PTR7_RD_PTR (GTM_PSM_FIFO0_CH_PTR7_RD_PTR)

/** Alias for GTM_PSM_FIFO0_CH_PTR7_WR_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR7_WR_PTR
 * instead.
 * 185E0, FIFO0 Channel Write Pointer Register
 */
#define GTM_FIFO0_CH_PTR7_WR_PTR (GTM_PSM_FIFO0_CH_PTR7_WR_PTR)

/** 600, GTM Infrastructure Interrupt Group */
#define GTM_ICM_IRQG_0 ((*(volatile Ifx_GTM_ICM_IRQG_0*)0xF0100600u)) /* lint --e(923)*/

/** 604, GTM DPLL Interrupt Group */
#define GTM_ICM_IRQG_1 ((*(volatile Ifx_GTM_ICM_IRQG_1*)0xF0100604u)) /* lint --e(923)*/

/** 628, ATOM Interrupt Group 1 */
#define GTM_ICM_IRQG_10 ((*(volatile Ifx_GTM_ICM_IRQG_10*)0xF0100628u)) /* lint --e(923)*/

/** 608, TIM Interrupt Group 0 */
#define GTM_ICM_IRQG_2 ((*(volatile Ifx_GTM_ICM_IRQG_2*)0xF0100608u)) /* lint --e(923)*/

/** 610, MCS Interrupt Group 0 */
#define GTM_ICM_IRQG_4 ((*(volatile Ifx_GTM_ICM_IRQG_4*)0xF0100610u)) /* lint --e(923)*/

/** 618, TOM Interrupt Group 0 */
#define GTM_ICM_IRQG_6 ((*(volatile Ifx_GTM_ICM_IRQG_6*)0xF0100618u)) /* lint --e(923)*/

/** 61C, ITOM Interrupt Group 1 */
#define GTM_ICM_IRQG_7 ((*(volatile Ifx_GTM_ICM_IRQG_7*)0xF010061Cu)) /* lint --e(923)*/

/** 624, ATOM Interrupt Group 0 */
#define GTM_ICM_IRQG_9 ((*(volatile Ifx_GTM_ICM_IRQG_9*)0xF0100624u)) /* lint --e(923)*/

/** 14, GTM Interrupt Enable Register */
#define GTM_IRQ_EN ((*(volatile Ifx_GTM_IRQ_EN*)0xF0100014u)) /* lint --e(923)*/

/** 18, GTM Software Interrupt Generation Register */
#define GTM_IRQ_FORCINT ((*(volatile Ifx_GTM_IRQ_FORCINT*)0xF0100018u)) /* lint --e(923)*/

/** 1C, GTM Top Level Interrupts Mode Selection */
#define GTM_IRQ_MODE ((*(volatile Ifx_GTM_IRQ_MODE*)0xF010001Cu)) /* lint --e(923)*/

/** 10, GTM Interrupt Notification Register */
#define GTM_IRQ_NOTIFY ((*(volatile Ifx_GTM_IRQ_NOTIFY*)0xF0100010u)) /* lint --e(923)*/

/** 9FDF4, Kernel Reset Register 0 */
#define GTM_KRST0 ((*(volatile Ifx_GTM_KRST0*)0xF019FDF4u)) /* lint --e(923)*/

/** 9FDF0, Kernel Reset Register 1 */
#define GTM_KRST1 ((*(volatile Ifx_GTM_KRST1*)0xF019FDF0u)) /* lint --e(923)*/

/** 9FDEC, Kernel Reset Status Clear Register */
#define GTM_KRSTCLR ((*(volatile Ifx_GTM_KRSTCLR*)0xF019FDECu)) /* lint --e(923)*/

/** 40, MAP Control Register */
#define GTM_MAP_CTRL ((*(volatile Ifx_GTM_MAP_CTRL*)0xF0100040u)) /* lint --e(923)*/

/** 80, Memory Layout Configuration Register */
#define GTM_MCFG_CTRL ((*(volatile Ifx_GTM_MCFG_CTRL*)0xF0100080u)) /* lint --e(923)*/

/** 30028, MCS Channel ACB Register */
#define GTM_MCS0_CH0_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0130028u)) /* lint --e(923)*/

/** 30000, MCS Channel Control Register */
#define GTM_MCS0_CH0_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130000u)) /* lint --e(923)*/

/** 30030, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH0_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0130030u)) /* lint --e(923)*/

/** 30034, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH0_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0130034u)) /* lint --e(923)*/

/** 30038, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH0_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0130038u)) /* lint --e(923)*/

/** 3002C, MCS Channel interrupt notification register */
#define GTM_MCS0_CH0_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF013002Cu)) /* lint --e(923)*/

/** 30004, MCS Channel Program Counter Register */
#define GTM_MCS0_CH0_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130004u)) /* lint --e(923)*/

/** 30008, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH0_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130008u)) /* lint --e(923)*/

/** 3000C, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH0_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF013000Cu)) /* lint --e(923)*/

/** 30010, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH0_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130010u)) /* lint --e(923)*/

/** 30014, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH0_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0130014u)) /* lint --e(923)*/

/** 30018, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH0_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130018u)) /* lint --e(923)*/

/** 3001C, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH0_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF013001Cu)) /* lint --e(923)*/

/** 30020, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH0_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF0130020u)) /* lint --e(923)*/

/** 30024, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH0_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF0130024u)) /* lint --e(923)*/

/** 300A8, MCS Channel ACB Register */
#define GTM_MCS0_CH1_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01300A8u)) /* lint --e(923)*/

/** 30080, MCS Channel Control Register */
#define GTM_MCS0_CH1_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130080u)) /* lint --e(923)*/

/** 300B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH1_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01300B0u)) /* lint --e(923)*/

/** 300B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH1_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01300B4u)) /* lint --e(923)*/

/** 300B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH1_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01300B8u)) /* lint --e(923)*/

/** 300AC, MCS Channel interrupt notification register */
#define GTM_MCS0_CH1_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01300ACu)) /* lint --e(923)*/

/** 30084, MCS Channel Program Counter Register */
#define GTM_MCS0_CH1_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130084u)) /* lint --e(923)*/

/** 30088, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH1_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130088u)) /* lint --e(923)*/

/** 3008C, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH1_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF013008Cu)) /* lint --e(923)*/

/** 30090, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH1_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130090u)) /* lint --e(923)*/

/** 30094, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH1_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0130094u)) /* lint --e(923)*/

/** 30098, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH1_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130098u)) /* lint --e(923)*/

/** 3009C, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH1_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF013009Cu)) /* lint --e(923)*/

/** 300A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH1_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF01300A0u)) /* lint --e(923)*/

/** 300A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH1_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF01300A4u)) /* lint --e(923)*/

/** 30128, MCS Channel ACB Register */
#define GTM_MCS0_CH2_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0130128u)) /* lint --e(923)*/

/** 30100, MCS Channel Control Register */
#define GTM_MCS0_CH2_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130100u)) /* lint --e(923)*/

/** 30130, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH2_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0130130u)) /* lint --e(923)*/

/** 30134, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH2_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0130134u)) /* lint --e(923)*/

/** 30138, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH2_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0130138u)) /* lint --e(923)*/

/** 3012C, MCS Channel interrupt notification register */
#define GTM_MCS0_CH2_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF013012Cu)) /* lint --e(923)*/

/** 30104, MCS Channel Program Counter Register */
#define GTM_MCS0_CH2_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130104u)) /* lint --e(923)*/

/** 30108, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH2_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130108u)) /* lint --e(923)*/

/** 3010C, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH2_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF013010Cu)) /* lint --e(923)*/

/** 30110, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH2_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130110u)) /* lint --e(923)*/

/** 30114, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH2_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0130114u)) /* lint --e(923)*/

/** 30118, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH2_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130118u)) /* lint --e(923)*/

/** 3011C, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH2_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF013011Cu)) /* lint --e(923)*/

/** 30120, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH2_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF0130120u)) /* lint --e(923)*/

/** 30124, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH2_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF0130124u)) /* lint --e(923)*/

/** 301A8, MCS Channel ACB Register */
#define GTM_MCS0_CH3_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01301A8u)) /* lint --e(923)*/

/** 30180, MCS Channel Control Register */
#define GTM_MCS0_CH3_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130180u)) /* lint --e(923)*/

/** 301B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH3_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01301B0u)) /* lint --e(923)*/

/** 301B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH3_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01301B4u)) /* lint --e(923)*/

/** 301B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH3_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01301B8u)) /* lint --e(923)*/

/** 301AC, MCS Channel interrupt notification register */
#define GTM_MCS0_CH3_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01301ACu)) /* lint --e(923)*/

/** 30184, MCS Channel Program Counter Register */
#define GTM_MCS0_CH3_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130184u)) /* lint --e(923)*/

/** 30188, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH3_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130188u)) /* lint --e(923)*/

/** 3018C, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH3_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF013018Cu)) /* lint --e(923)*/

/** 30190, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH3_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130190u)) /* lint --e(923)*/

/** 30194, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH3_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0130194u)) /* lint --e(923)*/

/** 30198, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH3_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130198u)) /* lint --e(923)*/

/** 3019C, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH3_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF013019Cu)) /* lint --e(923)*/

/** 301A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH3_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF01301A0u)) /* lint --e(923)*/

/** 301A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH3_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF01301A4u)) /* lint --e(923)*/

/** 30228, MCS Channel ACB Register */
#define GTM_MCS0_CH4_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0130228u)) /* lint --e(923)*/

/** 30200, MCS Channel Control Register */
#define GTM_MCS0_CH4_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130200u)) /* lint --e(923)*/

/** 30230, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH4_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0130230u)) /* lint --e(923)*/

/** 30234, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH4_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0130234u)) /* lint --e(923)*/

/** 30238, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH4_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0130238u)) /* lint --e(923)*/

/** 3022C, MCS Channel interrupt notification register */
#define GTM_MCS0_CH4_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF013022Cu)) /* lint --e(923)*/

/** 30204, MCS Channel Program Counter Register */
#define GTM_MCS0_CH4_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130204u)) /* lint --e(923)*/

/** 30208, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH4_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130208u)) /* lint --e(923)*/

/** 3020C, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH4_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF013020Cu)) /* lint --e(923)*/

/** 30210, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH4_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130210u)) /* lint --e(923)*/

/** 30214, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH4_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0130214u)) /* lint --e(923)*/

/** 30218, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH4_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130218u)) /* lint --e(923)*/

/** 3021C, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH4_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF013021Cu)) /* lint --e(923)*/

/** 30220, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH4_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF0130220u)) /* lint --e(923)*/

/** 30224, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH4_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF0130224u)) /* lint --e(923)*/

/** 302A8, MCS Channel ACB Register */
#define GTM_MCS0_CH5_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01302A8u)) /* lint --e(923)*/

/** 30280, MCS Channel Control Register */
#define GTM_MCS0_CH5_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130280u)) /* lint --e(923)*/

/** 302B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH5_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01302B0u)) /* lint --e(923)*/

/** 302B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH5_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01302B4u)) /* lint --e(923)*/

/** 302B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH5_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01302B8u)) /* lint --e(923)*/

/** 302AC, MCS Channel interrupt notification register */
#define GTM_MCS0_CH5_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01302ACu)) /* lint --e(923)*/

/** 30284, MCS Channel Program Counter Register */
#define GTM_MCS0_CH5_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130284u)) /* lint --e(923)*/

/** 30288, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH5_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130288u)) /* lint --e(923)*/

/** 3028C, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH5_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF013028Cu)) /* lint --e(923)*/

/** 30290, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH5_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130290u)) /* lint --e(923)*/

/** 30294, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH5_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0130294u)) /* lint --e(923)*/

/** 30298, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH5_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130298u)) /* lint --e(923)*/

/** 3029C, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH5_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF013029Cu)) /* lint --e(923)*/

/** 302A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH5_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF01302A0u)) /* lint --e(923)*/

/** 302A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH5_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF01302A4u)) /* lint --e(923)*/

/** 30328, MCS Channel ACB Register */
#define GTM_MCS0_CH6_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0130328u)) /* lint --e(923)*/

/** 30300, MCS Channel Control Register */
#define GTM_MCS0_CH6_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130300u)) /* lint --e(923)*/

/** 30330, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH6_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0130330u)) /* lint --e(923)*/

/** 30334, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH6_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0130334u)) /* lint --e(923)*/

/** 30338, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH6_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0130338u)) /* lint --e(923)*/

/** 3032C, MCS Channel interrupt notification register */
#define GTM_MCS0_CH6_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF013032Cu)) /* lint --e(923)*/

/** 30304, MCS Channel Program Counter Register */
#define GTM_MCS0_CH6_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130304u)) /* lint --e(923)*/

/** 30308, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH6_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130308u)) /* lint --e(923)*/

/** 3030C, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH6_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF013030Cu)) /* lint --e(923)*/

/** 30310, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH6_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130310u)) /* lint --e(923)*/

/** 30314, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH6_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0130314u)) /* lint --e(923)*/

/** 30318, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH6_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130318u)) /* lint --e(923)*/

/** 3031C, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH6_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF013031Cu)) /* lint --e(923)*/

/** 30320, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH6_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF0130320u)) /* lint --e(923)*/

/** 30324, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH6_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF0130324u)) /* lint --e(923)*/

/** 303A8, MCS Channel ACB Register */
#define GTM_MCS0_CH7_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01303A8u)) /* lint --e(923)*/

/** 30380, MCS Channel Control Register */
#define GTM_MCS0_CH7_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130380u)) /* lint --e(923)*/

/** 303B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH7_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01303B0u)) /* lint --e(923)*/

/** 303B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH7_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01303B4u)) /* lint --e(923)*/

/** 303B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH7_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01303B8u)) /* lint --e(923)*/

/** 303AC, MCS Channel interrupt notification register */
#define GTM_MCS0_CH7_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01303ACu)) /* lint --e(923)*/

/** 30384, MCS Channel Program Counter Register */
#define GTM_MCS0_CH7_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130384u)) /* lint --e(923)*/

/** 30388, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH7_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130388u)) /* lint --e(923)*/

/** 3038C, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH7_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF013038Cu)) /* lint --e(923)*/

/** 30390, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH7_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130390u)) /* lint --e(923)*/

/** 30394, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH7_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0130394u)) /* lint --e(923)*/

/** 30398, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH7_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130398u)) /* lint --e(923)*/

/** 3039C, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH7_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF013039Cu)) /* lint --e(923)*/

/** 303A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH7_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF01303A0u)) /* lint --e(923)*/

/** 303A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH7_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF01303A4u)) /* lint --e(923)*/

/** 30404, MCS Clear Trigger Control Register */
#define GTM_MCS0_CTRG ((*(volatile Ifx_GTM_MCS_CTRG*)0xF0130404u)) /* lint --e(923)*/

/** 30400, MCS Control Register */
#define GTM_MCS0_CTRL ((*(volatile Ifx_GTM_MCS_CTRL*)0xF0130400u)) /* lint --e(923)*/

/** 30410, MCS Error Register */
#define GTM_MCS0_ERR ((*(volatile Ifx_GTM_MCS_ERR*)0xF0130410u)) /* lint --e(923)*/

/** 3040C, MCS Channel Reset Register */
#define GTM_MCS0_RST ((*(volatile Ifx_GTM_MCS_RST*)0xF013040Cu)) /* lint --e(923)*/

/** 30408, MCS Set Trigger Control Register */
#define GTM_MCS0_STRG ((*(volatile Ifx_GTM_MCS_STRG*)0xF0130408u)) /* lint --e(923)*/

/** 40028, MCS Channel ACB Register */
#define GTM_MCS1_CH0_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0140028u)) /* lint --e(923)*/

/** 40000, MCS Channel Control Register */
#define GTM_MCS1_CH0_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0140000u)) /* lint --e(923)*/

/** 40030, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH0_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0140030u)) /* lint --e(923)*/

/** 40034, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH0_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0140034u)) /* lint --e(923)*/

/** 40038, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH0_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0140038u)) /* lint --e(923)*/

/** 4002C, MCS Channel interrupt notification register */
#define GTM_MCS1_CH0_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF014002Cu)) /* lint --e(923)*/

/** 40004, MCS Channel Program Counter Register */
#define GTM_MCS1_CH0_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0140004u)) /* lint --e(923)*/

/** 40008, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH0_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0140008u)) /* lint --e(923)*/

/** 4000C, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH0_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF014000Cu)) /* lint --e(923)*/

/** 40010, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH0_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0140010u)) /* lint --e(923)*/

/** 40014, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH0_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0140014u)) /* lint --e(923)*/

/** 40018, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH0_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0140018u)) /* lint --e(923)*/

/** 4001C, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH0_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF014001Cu)) /* lint --e(923)*/

/** 40020, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH0_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF0140020u)) /* lint --e(923)*/

/** 40024, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH0_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF0140024u)) /* lint --e(923)*/

/** 400A8, MCS Channel ACB Register */
#define GTM_MCS1_CH1_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01400A8u)) /* lint --e(923)*/

/** 40080, MCS Channel Control Register */
#define GTM_MCS1_CH1_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0140080u)) /* lint --e(923)*/

/** 400B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH1_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01400B0u)) /* lint --e(923)*/

/** 400B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH1_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01400B4u)) /* lint --e(923)*/

/** 400B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH1_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01400B8u)) /* lint --e(923)*/

/** 400AC, MCS Channel interrupt notification register */
#define GTM_MCS1_CH1_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01400ACu)) /* lint --e(923)*/

/** 40084, MCS Channel Program Counter Register */
#define GTM_MCS1_CH1_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0140084u)) /* lint --e(923)*/

/** 40088, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH1_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0140088u)) /* lint --e(923)*/

/** 4008C, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH1_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF014008Cu)) /* lint --e(923)*/

/** 40090, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH1_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0140090u)) /* lint --e(923)*/

/** 40094, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH1_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0140094u)) /* lint --e(923)*/

/** 40098, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH1_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0140098u)) /* lint --e(923)*/

/** 4009C, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH1_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF014009Cu)) /* lint --e(923)*/

/** 400A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH1_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF01400A0u)) /* lint --e(923)*/

/** 400A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH1_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF01400A4u)) /* lint --e(923)*/

/** 40128, MCS Channel ACB Register */
#define GTM_MCS1_CH2_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0140128u)) /* lint --e(923)*/

/** 40100, MCS Channel Control Register */
#define GTM_MCS1_CH2_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0140100u)) /* lint --e(923)*/

/** 40130, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH2_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0140130u)) /* lint --e(923)*/

/** 40134, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH2_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0140134u)) /* lint --e(923)*/

/** 40138, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH2_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0140138u)) /* lint --e(923)*/

/** 4012C, MCS Channel interrupt notification register */
#define GTM_MCS1_CH2_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF014012Cu)) /* lint --e(923)*/

/** 40104, MCS Channel Program Counter Register */
#define GTM_MCS1_CH2_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0140104u)) /* lint --e(923)*/

/** 40108, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH2_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0140108u)) /* lint --e(923)*/

/** 4010C, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH2_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF014010Cu)) /* lint --e(923)*/

/** 40110, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH2_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0140110u)) /* lint --e(923)*/

/** 40114, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH2_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0140114u)) /* lint --e(923)*/

/** 40118, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH2_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0140118u)) /* lint --e(923)*/

/** 4011C, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH2_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF014011Cu)) /* lint --e(923)*/

/** 40120, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH2_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF0140120u)) /* lint --e(923)*/

/** 40124, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH2_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF0140124u)) /* lint --e(923)*/

/** 401A8, MCS Channel ACB Register */
#define GTM_MCS1_CH3_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01401A8u)) /* lint --e(923)*/

/** 40180, MCS Channel Control Register */
#define GTM_MCS1_CH3_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0140180u)) /* lint --e(923)*/

/** 401B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH3_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01401B0u)) /* lint --e(923)*/

/** 401B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH3_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01401B4u)) /* lint --e(923)*/

/** 401B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH3_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01401B8u)) /* lint --e(923)*/

/** 401AC, MCS Channel interrupt notification register */
#define GTM_MCS1_CH3_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01401ACu)) /* lint --e(923)*/

/** 40184, MCS Channel Program Counter Register */
#define GTM_MCS1_CH3_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0140184u)) /* lint --e(923)*/

/** 40188, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH3_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0140188u)) /* lint --e(923)*/

/** 4018C, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH3_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF014018Cu)) /* lint --e(923)*/

/** 40190, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH3_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0140190u)) /* lint --e(923)*/

/** 40194, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH3_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0140194u)) /* lint --e(923)*/

/** 40198, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH3_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0140198u)) /* lint --e(923)*/

/** 4019C, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH3_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF014019Cu)) /* lint --e(923)*/

/** 401A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH3_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF01401A0u)) /* lint --e(923)*/

/** 401A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH3_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF01401A4u)) /* lint --e(923)*/

/** 40228, MCS Channel ACB Register */
#define GTM_MCS1_CH4_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0140228u)) /* lint --e(923)*/

/** 40200, MCS Channel Control Register */
#define GTM_MCS1_CH4_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0140200u)) /* lint --e(923)*/

/** 40230, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH4_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0140230u)) /* lint --e(923)*/

/** 40234, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH4_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0140234u)) /* lint --e(923)*/

/** 40238, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH4_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0140238u)) /* lint --e(923)*/

/** 4022C, MCS Channel interrupt notification register */
#define GTM_MCS1_CH4_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF014022Cu)) /* lint --e(923)*/

/** 40204, MCS Channel Program Counter Register */
#define GTM_MCS1_CH4_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0140204u)) /* lint --e(923)*/

/** 40208, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH4_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0140208u)) /* lint --e(923)*/

/** 4020C, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH4_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF014020Cu)) /* lint --e(923)*/

/** 40210, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH4_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0140210u)) /* lint --e(923)*/

/** 40214, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH4_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0140214u)) /* lint --e(923)*/

/** 40218, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH4_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0140218u)) /* lint --e(923)*/

/** 4021C, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH4_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF014021Cu)) /* lint --e(923)*/

/** 40220, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH4_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF0140220u)) /* lint --e(923)*/

/** 40224, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH4_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF0140224u)) /* lint --e(923)*/

/** 402A8, MCS Channel ACB Register */
#define GTM_MCS1_CH5_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01402A8u)) /* lint --e(923)*/

/** 40280, MCS Channel Control Register */
#define GTM_MCS1_CH5_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0140280u)) /* lint --e(923)*/

/** 402B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH5_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01402B0u)) /* lint --e(923)*/

/** 402B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH5_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01402B4u)) /* lint --e(923)*/

/** 402B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH5_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01402B8u)) /* lint --e(923)*/

/** 402AC, MCS Channel interrupt notification register */
#define GTM_MCS1_CH5_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01402ACu)) /* lint --e(923)*/

/** 40284, MCS Channel Program Counter Register */
#define GTM_MCS1_CH5_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0140284u)) /* lint --e(923)*/

/** 40288, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH5_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0140288u)) /* lint --e(923)*/

/** 4028C, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH5_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF014028Cu)) /* lint --e(923)*/

/** 40290, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH5_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0140290u)) /* lint --e(923)*/

/** 40294, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH5_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0140294u)) /* lint --e(923)*/

/** 40298, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH5_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0140298u)) /* lint --e(923)*/

/** 4029C, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH5_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF014029Cu)) /* lint --e(923)*/

/** 402A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH5_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF01402A0u)) /* lint --e(923)*/

/** 402A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH5_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF01402A4u)) /* lint --e(923)*/

/** 40328, MCS Channel ACB Register */
#define GTM_MCS1_CH6_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0140328u)) /* lint --e(923)*/

/** 40300, MCS Channel Control Register */
#define GTM_MCS1_CH6_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0140300u)) /* lint --e(923)*/

/** 40330, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH6_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0140330u)) /* lint --e(923)*/

/** 40334, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH6_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0140334u)) /* lint --e(923)*/

/** 40338, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH6_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0140338u)) /* lint --e(923)*/

/** 4032C, MCS Channel interrupt notification register */
#define GTM_MCS1_CH6_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF014032Cu)) /* lint --e(923)*/

/** 40304, MCS Channel Program Counter Register */
#define GTM_MCS1_CH6_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0140304u)) /* lint --e(923)*/

/** 40308, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH6_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0140308u)) /* lint --e(923)*/

/** 4030C, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH6_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF014030Cu)) /* lint --e(923)*/

/** 40310, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH6_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0140310u)) /* lint --e(923)*/

/** 40314, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH6_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0140314u)) /* lint --e(923)*/

/** 40318, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH6_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0140318u)) /* lint --e(923)*/

/** 4031C, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH6_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF014031Cu)) /* lint --e(923)*/

/** 40320, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH6_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF0140320u)) /* lint --e(923)*/

/** 40324, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH6_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF0140324u)) /* lint --e(923)*/

/** 403A8, MCS Channel ACB Register */
#define GTM_MCS1_CH7_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01403A8u)) /* lint --e(923)*/

/** 40380, MCS Channel Control Register */
#define GTM_MCS1_CH7_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0140380u)) /* lint --e(923)*/

/** 403B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH7_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01403B0u)) /* lint --e(923)*/

/** 403B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH7_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01403B4u)) /* lint --e(923)*/

/** 403B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH7_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01403B8u)) /* lint --e(923)*/

/** 403AC, MCS Channel interrupt notification register */
#define GTM_MCS1_CH7_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01403ACu)) /* lint --e(923)*/

/** 40384, MCS Channel Program Counter Register */
#define GTM_MCS1_CH7_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0140384u)) /* lint --e(923)*/

/** 40388, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH7_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0140388u)) /* lint --e(923)*/

/** 4038C, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH7_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF014038Cu)) /* lint --e(923)*/

/** 40390, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH7_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0140390u)) /* lint --e(923)*/

/** 40394, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH7_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0140394u)) /* lint --e(923)*/

/** 40398, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH7_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0140398u)) /* lint --e(923)*/

/** 4039C, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH7_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF014039Cu)) /* lint --e(923)*/

/** 403A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH7_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF01403A0u)) /* lint --e(923)*/

/** 403A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH7_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF01403A4u)) /* lint --e(923)*/

/** 40404, MCS Clear Trigger Control Register */
#define GTM_MCS1_CTRG ((*(volatile Ifx_GTM_MCS_CTRG*)0xF0140404u)) /* lint --e(923)*/

/** 40400, MCS Control Register */
#define GTM_MCS1_CTRL ((*(volatile Ifx_GTM_MCS_CTRL*)0xF0140400u)) /* lint --e(923)*/

/** 40410, MCS Error Register */
#define GTM_MCS1_ERR ((*(volatile Ifx_GTM_MCS_ERR*)0xF0140410u)) /* lint --e(923)*/

/** 4040C, MCS Channel Reset Register */
#define GTM_MCS1_RST ((*(volatile Ifx_GTM_MCS_RST*)0xF014040Cu)) /* lint --e(923)*/

/** 40408, MCS Set Trigger Control Register */
#define GTM_MCS1_STRG ((*(volatile Ifx_GTM_MCS_STRG*)0xF0140408u)) /* lint --e(923)*/

/** 50028, MCS Channel ACB Register */
#define GTM_MCS2_CH0_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0150028u)) /* lint --e(923)*/

/** 50000, MCS Channel Control Register */
#define GTM_MCS2_CH0_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0150000u)) /* lint --e(923)*/

/** 50030, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH0_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0150030u)) /* lint --e(923)*/

/** 50034, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH0_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0150034u)) /* lint --e(923)*/

/** 50038, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH0_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0150038u)) /* lint --e(923)*/

/** 5002C, MCS Channel interrupt notification register */
#define GTM_MCS2_CH0_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF015002Cu)) /* lint --e(923)*/

/** 50004, MCS Channel Program Counter Register */
#define GTM_MCS2_CH0_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0150004u)) /* lint --e(923)*/

/** 50008, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH0_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0150008u)) /* lint --e(923)*/

/** 5000C, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH0_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF015000Cu)) /* lint --e(923)*/

/** 50010, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH0_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0150010u)) /* lint --e(923)*/

/** 50014, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH0_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0150014u)) /* lint --e(923)*/

/** 50018, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH0_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0150018u)) /* lint --e(923)*/

/** 5001C, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH0_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF015001Cu)) /* lint --e(923)*/

/** 50020, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH0_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF0150020u)) /* lint --e(923)*/

/** 50024, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH0_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF0150024u)) /* lint --e(923)*/

/** 500A8, MCS Channel ACB Register */
#define GTM_MCS2_CH1_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01500A8u)) /* lint --e(923)*/

/** 50080, MCS Channel Control Register */
#define GTM_MCS2_CH1_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0150080u)) /* lint --e(923)*/

/** 500B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH1_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01500B0u)) /* lint --e(923)*/

/** 500B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH1_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01500B4u)) /* lint --e(923)*/

/** 500B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH1_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01500B8u)) /* lint --e(923)*/

/** 500AC, MCS Channel interrupt notification register */
#define GTM_MCS2_CH1_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01500ACu)) /* lint --e(923)*/

/** 50084, MCS Channel Program Counter Register */
#define GTM_MCS2_CH1_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0150084u)) /* lint --e(923)*/

/** 50088, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH1_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0150088u)) /* lint --e(923)*/

/** 5008C, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH1_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF015008Cu)) /* lint --e(923)*/

/** 50090, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH1_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0150090u)) /* lint --e(923)*/

/** 50094, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH1_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0150094u)) /* lint --e(923)*/

/** 50098, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH1_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0150098u)) /* lint --e(923)*/

/** 5009C, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH1_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF015009Cu)) /* lint --e(923)*/

/** 500A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH1_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF01500A0u)) /* lint --e(923)*/

/** 500A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH1_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF01500A4u)) /* lint --e(923)*/

/** 50128, MCS Channel ACB Register */
#define GTM_MCS2_CH2_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0150128u)) /* lint --e(923)*/

/** 50100, MCS Channel Control Register */
#define GTM_MCS2_CH2_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0150100u)) /* lint --e(923)*/

/** 50130, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH2_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0150130u)) /* lint --e(923)*/

/** 50134, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH2_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0150134u)) /* lint --e(923)*/

/** 50138, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH2_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0150138u)) /* lint --e(923)*/

/** 5012C, MCS Channel interrupt notification register */
#define GTM_MCS2_CH2_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF015012Cu)) /* lint --e(923)*/

/** 50104, MCS Channel Program Counter Register */
#define GTM_MCS2_CH2_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0150104u)) /* lint --e(923)*/

/** 50108, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH2_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0150108u)) /* lint --e(923)*/

/** 5010C, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH2_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF015010Cu)) /* lint --e(923)*/

/** 50110, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH2_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0150110u)) /* lint --e(923)*/

/** 50114, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH2_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0150114u)) /* lint --e(923)*/

/** 50118, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH2_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0150118u)) /* lint --e(923)*/

/** 5011C, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH2_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF015011Cu)) /* lint --e(923)*/

/** 50120, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH2_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF0150120u)) /* lint --e(923)*/

/** 50124, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH2_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF0150124u)) /* lint --e(923)*/

/** 501A8, MCS Channel ACB Register */
#define GTM_MCS2_CH3_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01501A8u)) /* lint --e(923)*/

/** 50180, MCS Channel Control Register */
#define GTM_MCS2_CH3_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0150180u)) /* lint --e(923)*/

/** 501B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH3_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01501B0u)) /* lint --e(923)*/

/** 501B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH3_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01501B4u)) /* lint --e(923)*/

/** 501B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH3_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01501B8u)) /* lint --e(923)*/

/** 501AC, MCS Channel interrupt notification register */
#define GTM_MCS2_CH3_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01501ACu)) /* lint --e(923)*/

/** 50184, MCS Channel Program Counter Register */
#define GTM_MCS2_CH3_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0150184u)) /* lint --e(923)*/

/** 50188, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH3_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0150188u)) /* lint --e(923)*/

/** 5018C, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH3_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF015018Cu)) /* lint --e(923)*/

/** 50190, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH3_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0150190u)) /* lint --e(923)*/

/** 50194, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH3_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0150194u)) /* lint --e(923)*/

/** 50198, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH3_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0150198u)) /* lint --e(923)*/

/** 5019C, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH3_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF015019Cu)) /* lint --e(923)*/

/** 501A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH3_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF01501A0u)) /* lint --e(923)*/

/** 501A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH3_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF01501A4u)) /* lint --e(923)*/

/** 50228, MCS Channel ACB Register */
#define GTM_MCS2_CH4_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0150228u)) /* lint --e(923)*/

/** 50200, MCS Channel Control Register */
#define GTM_MCS2_CH4_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0150200u)) /* lint --e(923)*/

/** 50230, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH4_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0150230u)) /* lint --e(923)*/

/** 50234, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH4_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0150234u)) /* lint --e(923)*/

/** 50238, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH4_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0150238u)) /* lint --e(923)*/

/** 5022C, MCS Channel interrupt notification register */
#define GTM_MCS2_CH4_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF015022Cu)) /* lint --e(923)*/

/** 50204, MCS Channel Program Counter Register */
#define GTM_MCS2_CH4_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0150204u)) /* lint --e(923)*/

/** 50208, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH4_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0150208u)) /* lint --e(923)*/

/** 5020C, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH4_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF015020Cu)) /* lint --e(923)*/

/** 50210, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH4_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0150210u)) /* lint --e(923)*/

/** 50214, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH4_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0150214u)) /* lint --e(923)*/

/** 50218, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH4_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0150218u)) /* lint --e(923)*/

/** 5021C, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH4_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF015021Cu)) /* lint --e(923)*/

/** 50220, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH4_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF0150220u)) /* lint --e(923)*/

/** 50224, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH4_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF0150224u)) /* lint --e(923)*/

/** 502A8, MCS Channel ACB Register */
#define GTM_MCS2_CH5_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01502A8u)) /* lint --e(923)*/

/** 50280, MCS Channel Control Register */
#define GTM_MCS2_CH5_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0150280u)) /* lint --e(923)*/

/** 502B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH5_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01502B0u)) /* lint --e(923)*/

/** 502B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH5_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01502B4u)) /* lint --e(923)*/

/** 502B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH5_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01502B8u)) /* lint --e(923)*/

/** 502AC, MCS Channel interrupt notification register */
#define GTM_MCS2_CH5_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01502ACu)) /* lint --e(923)*/

/** 50284, MCS Channel Program Counter Register */
#define GTM_MCS2_CH5_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0150284u)) /* lint --e(923)*/

/** 50288, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH5_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0150288u)) /* lint --e(923)*/

/** 5028C, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH5_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF015028Cu)) /* lint --e(923)*/

/** 50290, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH5_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0150290u)) /* lint --e(923)*/

/** 50294, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH5_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0150294u)) /* lint --e(923)*/

/** 50298, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH5_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0150298u)) /* lint --e(923)*/

/** 5029C, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH5_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF015029Cu)) /* lint --e(923)*/

/** 502A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH5_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF01502A0u)) /* lint --e(923)*/

/** 502A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH5_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF01502A4u)) /* lint --e(923)*/

/** 50328, MCS Channel ACB Register */
#define GTM_MCS2_CH6_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0150328u)) /* lint --e(923)*/

/** 50300, MCS Channel Control Register */
#define GTM_MCS2_CH6_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0150300u)) /* lint --e(923)*/

/** 50330, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH6_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0150330u)) /* lint --e(923)*/

/** 50334, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH6_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0150334u)) /* lint --e(923)*/

/** 50338, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH6_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0150338u)) /* lint --e(923)*/

/** 5032C, MCS Channel interrupt notification register */
#define GTM_MCS2_CH6_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF015032Cu)) /* lint --e(923)*/

/** 50304, MCS Channel Program Counter Register */
#define GTM_MCS2_CH6_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0150304u)) /* lint --e(923)*/

/** 50308, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH6_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0150308u)) /* lint --e(923)*/

/** 5030C, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH6_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF015030Cu)) /* lint --e(923)*/

/** 50310, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH6_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0150310u)) /* lint --e(923)*/

/** 50314, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH6_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0150314u)) /* lint --e(923)*/

/** 50318, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH6_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0150318u)) /* lint --e(923)*/

/** 5031C, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH6_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF015031Cu)) /* lint --e(923)*/

/** 50320, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH6_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF0150320u)) /* lint --e(923)*/

/** 50324, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH6_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF0150324u)) /* lint --e(923)*/

/** 503A8, MCS Channel ACB Register */
#define GTM_MCS2_CH7_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01503A8u)) /* lint --e(923)*/

/** 50380, MCS Channel Control Register */
#define GTM_MCS2_CH7_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0150380u)) /* lint --e(923)*/

/** 503B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH7_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01503B0u)) /* lint --e(923)*/

/** 503B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH7_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01503B4u)) /* lint --e(923)*/

/** 503B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH7_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01503B8u)) /* lint --e(923)*/

/** 503AC, MCS Channel interrupt notification register */
#define GTM_MCS2_CH7_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01503ACu)) /* lint --e(923)*/

/** 50384, MCS Channel Program Counter Register */
#define GTM_MCS2_CH7_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0150384u)) /* lint --e(923)*/

/** 50388, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH7_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0150388u)) /* lint --e(923)*/

/** 5038C, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH7_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF015038Cu)) /* lint --e(923)*/

/** 50390, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH7_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0150390u)) /* lint --e(923)*/

/** 50394, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH7_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0150394u)) /* lint --e(923)*/

/** 50398, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH7_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0150398u)) /* lint --e(923)*/

/** 5039C, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH7_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF015039Cu)) /* lint --e(923)*/

/** 503A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH7_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF01503A0u)) /* lint --e(923)*/

/** 503A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH7_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF01503A4u)) /* lint --e(923)*/

/** 50404, MCS Clear Trigger Control Register */
#define GTM_MCS2_CTRG ((*(volatile Ifx_GTM_MCS_CTRG*)0xF0150404u)) /* lint --e(923)*/

/** 50400, MCS Control Register */
#define GTM_MCS2_CTRL ((*(volatile Ifx_GTM_MCS_CTRL*)0xF0150400u)) /* lint --e(923)*/

/** 50410, MCS Error Register */
#define GTM_MCS2_ERR ((*(volatile Ifx_GTM_MCS_ERR*)0xF0150410u)) /* lint --e(923)*/

/** 5040C, MCS Channel Reset Register */
#define GTM_MCS2_RST ((*(volatile Ifx_GTM_MCS_RST*)0xF015040Cu)) /* lint --e(923)*/

/** 50408, MCS Set Trigger Control Register */
#define GTM_MCS2_STRG ((*(volatile Ifx_GTM_MCS_STRG*)0xF0150408u)) /* lint --e(923)*/

/** 60028, MCS Channel ACB Register */
#define GTM_MCS3_CH0_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0160028u)) /* lint --e(923)*/

/** 60000, MCS Channel Control Register */
#define GTM_MCS3_CH0_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0160000u)) /* lint --e(923)*/

/** 60030, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH0_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0160030u)) /* lint --e(923)*/

/** 60034, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH0_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0160034u)) /* lint --e(923)*/

/** 60038, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH0_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0160038u)) /* lint --e(923)*/

/** 6002C, MCS Channel interrupt notification register */
#define GTM_MCS3_CH0_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF016002Cu)) /* lint --e(923)*/

/** 60004, MCS Channel Program Counter Register */
#define GTM_MCS3_CH0_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0160004u)) /* lint --e(923)*/

/** 60008, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH0_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0160008u)) /* lint --e(923)*/

/** 6000C, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH0_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF016000Cu)) /* lint --e(923)*/

/** 60010, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH0_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0160010u)) /* lint --e(923)*/

/** 60014, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH0_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0160014u)) /* lint --e(923)*/

/** 60018, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH0_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0160018u)) /* lint --e(923)*/

/** 6001C, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH0_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF016001Cu)) /* lint --e(923)*/

/** 60020, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH0_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF0160020u)) /* lint --e(923)*/

/** 60024, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH0_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF0160024u)) /* lint --e(923)*/

/** 600A8, MCS Channel ACB Register */
#define GTM_MCS3_CH1_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01600A8u)) /* lint --e(923)*/

/** 60080, MCS Channel Control Register */
#define GTM_MCS3_CH1_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0160080u)) /* lint --e(923)*/

/** 600B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH1_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01600B0u)) /* lint --e(923)*/

/** 600B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH1_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01600B4u)) /* lint --e(923)*/

/** 600B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH1_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01600B8u)) /* lint --e(923)*/

/** 600AC, MCS Channel interrupt notification register */
#define GTM_MCS3_CH1_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01600ACu)) /* lint --e(923)*/

/** 60084, MCS Channel Program Counter Register */
#define GTM_MCS3_CH1_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0160084u)) /* lint --e(923)*/

/** 60088, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH1_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0160088u)) /* lint --e(923)*/

/** 6008C, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH1_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF016008Cu)) /* lint --e(923)*/

/** 60090, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH1_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0160090u)) /* lint --e(923)*/

/** 60094, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH1_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0160094u)) /* lint --e(923)*/

/** 60098, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH1_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0160098u)) /* lint --e(923)*/

/** 6009C, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH1_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF016009Cu)) /* lint --e(923)*/

/** 600A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH1_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF01600A0u)) /* lint --e(923)*/

/** 600A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH1_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF01600A4u)) /* lint --e(923)*/

/** 60128, MCS Channel ACB Register */
#define GTM_MCS3_CH2_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0160128u)) /* lint --e(923)*/

/** 60100, MCS Channel Control Register */
#define GTM_MCS3_CH2_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0160100u)) /* lint --e(923)*/

/** 60130, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH2_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0160130u)) /* lint --e(923)*/

/** 60134, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH2_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0160134u)) /* lint --e(923)*/

/** 60138, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH2_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0160138u)) /* lint --e(923)*/

/** 6012C, MCS Channel interrupt notification register */
#define GTM_MCS3_CH2_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF016012Cu)) /* lint --e(923)*/

/** 60104, MCS Channel Program Counter Register */
#define GTM_MCS3_CH2_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0160104u)) /* lint --e(923)*/

/** 60108, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH2_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0160108u)) /* lint --e(923)*/

/** 6010C, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH2_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF016010Cu)) /* lint --e(923)*/

/** 60110, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH2_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0160110u)) /* lint --e(923)*/

/** 60114, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH2_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0160114u)) /* lint --e(923)*/

/** 60118, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH2_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0160118u)) /* lint --e(923)*/

/** 6011C, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH2_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF016011Cu)) /* lint --e(923)*/

/** 60120, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH2_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF0160120u)) /* lint --e(923)*/

/** 60124, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH2_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF0160124u)) /* lint --e(923)*/

/** 601A8, MCS Channel ACB Register */
#define GTM_MCS3_CH3_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01601A8u)) /* lint --e(923)*/

/** 60180, MCS Channel Control Register */
#define GTM_MCS3_CH3_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0160180u)) /* lint --e(923)*/

/** 601B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH3_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01601B0u)) /* lint --e(923)*/

/** 601B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH3_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01601B4u)) /* lint --e(923)*/

/** 601B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH3_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01601B8u)) /* lint --e(923)*/

/** 601AC, MCS Channel interrupt notification register */
#define GTM_MCS3_CH3_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01601ACu)) /* lint --e(923)*/

/** 60184, MCS Channel Program Counter Register */
#define GTM_MCS3_CH3_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0160184u)) /* lint --e(923)*/

/** 60188, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH3_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0160188u)) /* lint --e(923)*/

/** 6018C, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH3_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF016018Cu)) /* lint --e(923)*/

/** 60190, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH3_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0160190u)) /* lint --e(923)*/

/** 60194, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH3_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0160194u)) /* lint --e(923)*/

/** 60198, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH3_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0160198u)) /* lint --e(923)*/

/** 6019C, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH3_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF016019Cu)) /* lint --e(923)*/

/** 601A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH3_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF01601A0u)) /* lint --e(923)*/

/** 601A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH3_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF01601A4u)) /* lint --e(923)*/

/** 60228, MCS Channel ACB Register */
#define GTM_MCS3_CH4_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0160228u)) /* lint --e(923)*/

/** 60200, MCS Channel Control Register */
#define GTM_MCS3_CH4_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0160200u)) /* lint --e(923)*/

/** 60230, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH4_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0160230u)) /* lint --e(923)*/

/** 60234, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH4_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0160234u)) /* lint --e(923)*/

/** 60238, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH4_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0160238u)) /* lint --e(923)*/

/** 6022C, MCS Channel interrupt notification register */
#define GTM_MCS3_CH4_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF016022Cu)) /* lint --e(923)*/

/** 60204, MCS Channel Program Counter Register */
#define GTM_MCS3_CH4_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0160204u)) /* lint --e(923)*/

/** 60208, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH4_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0160208u)) /* lint --e(923)*/

/** 6020C, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH4_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF016020Cu)) /* lint --e(923)*/

/** 60210, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH4_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0160210u)) /* lint --e(923)*/

/** 60214, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH4_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0160214u)) /* lint --e(923)*/

/** 60218, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH4_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0160218u)) /* lint --e(923)*/

/** 6021C, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH4_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF016021Cu)) /* lint --e(923)*/

/** 60220, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH4_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF0160220u)) /* lint --e(923)*/

/** 60224, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH4_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF0160224u)) /* lint --e(923)*/

/** 602A8, MCS Channel ACB Register */
#define GTM_MCS3_CH5_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01602A8u)) /* lint --e(923)*/

/** 60280, MCS Channel Control Register */
#define GTM_MCS3_CH5_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0160280u)) /* lint --e(923)*/

/** 602B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH5_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01602B0u)) /* lint --e(923)*/

/** 602B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH5_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01602B4u)) /* lint --e(923)*/

/** 602B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH5_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01602B8u)) /* lint --e(923)*/

/** 602AC, MCS Channel interrupt notification register */
#define GTM_MCS3_CH5_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01602ACu)) /* lint --e(923)*/

/** 60284, MCS Channel Program Counter Register */
#define GTM_MCS3_CH5_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0160284u)) /* lint --e(923)*/

/** 60288, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH5_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0160288u)) /* lint --e(923)*/

/** 6028C, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH5_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF016028Cu)) /* lint --e(923)*/

/** 60290, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH5_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0160290u)) /* lint --e(923)*/

/** 60294, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH5_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0160294u)) /* lint --e(923)*/

/** 60298, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH5_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0160298u)) /* lint --e(923)*/

/** 6029C, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH5_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF016029Cu)) /* lint --e(923)*/

/** 602A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH5_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF01602A0u)) /* lint --e(923)*/

/** 602A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH5_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF01602A4u)) /* lint --e(923)*/

/** 60328, MCS Channel ACB Register */
#define GTM_MCS3_CH6_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0160328u)) /* lint --e(923)*/

/** 60300, MCS Channel Control Register */
#define GTM_MCS3_CH6_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0160300u)) /* lint --e(923)*/

/** 60330, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH6_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0160330u)) /* lint --e(923)*/

/** 60334, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH6_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF0160334u)) /* lint --e(923)*/

/** 60338, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH6_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0160338u)) /* lint --e(923)*/

/** 6032C, MCS Channel interrupt notification register */
#define GTM_MCS3_CH6_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF016032Cu)) /* lint --e(923)*/

/** 60304, MCS Channel Program Counter Register */
#define GTM_MCS3_CH6_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0160304u)) /* lint --e(923)*/

/** 60308, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH6_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0160308u)) /* lint --e(923)*/

/** 6030C, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH6_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF016030Cu)) /* lint --e(923)*/

/** 60310, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH6_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0160310u)) /* lint --e(923)*/

/** 60314, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH6_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0160314u)) /* lint --e(923)*/

/** 60318, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH6_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0160318u)) /* lint --e(923)*/

/** 6031C, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH6_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF016031Cu)) /* lint --e(923)*/

/** 60320, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH6_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF0160320u)) /* lint --e(923)*/

/** 60324, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH6_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF0160324u)) /* lint --e(923)*/

/** 603A8, MCS Channel ACB Register */
#define GTM_MCS3_CH7_ACB ((*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01603A8u)) /* lint --e(923)*/

/** 60380, MCS Channel Control Register */
#define GTM_MCS3_CH7_CTRL ((*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0160380u)) /* lint --e(923)*/

/** 603B0, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH7_IRQ_EN ((*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01603B0u)) /* lint --e(923)*/

/** 603B4, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH7_IRQ_FORCINT ((*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01603B4u)) /* lint --e(923)*/

/** 603B8, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH7_IRQ_MODE ((*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01603B8u)) /* lint --e(923)*/

/** 603AC, MCS Channel interrupt notification register */
#define GTM_MCS3_CH7_IRQ_NOTIFY ((*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01603ACu)) /* lint --e(923)*/

/** 60384, MCS Channel Program Counter Register */
#define GTM_MCS3_CH7_PC ((*(volatile Ifx_GTM_MCS_CH_PC*)0xF0160384u)) /* lint --e(923)*/

/** 60388, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH7_R0 ((*(volatile Ifx_GTM_MCS_CH_R0*)0xF0160388u)) /* lint --e(923)*/

/** 6038C, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH7_R1 ((*(volatile Ifx_GTM_MCS_CH_R1*)0xF016038Cu)) /* lint --e(923)*/

/** 60390, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH7_R2 ((*(volatile Ifx_GTM_MCS_CH_R2*)0xF0160390u)) /* lint --e(923)*/

/** 60394, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH7_R3 ((*(volatile Ifx_GTM_MCS_CH_R3*)0xF0160394u)) /* lint --e(923)*/

/** 60398, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH7_R4 ((*(volatile Ifx_GTM_MCS_CH_R4*)0xF0160398u)) /* lint --e(923)*/

/** 6039C, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH7_R5 ((*(volatile Ifx_GTM_MCS_CH_R5*)0xF016039Cu)) /* lint --e(923)*/

/** 603A0, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH7_R6 ((*(volatile Ifx_GTM_MCS_CH_R6*)0xF01603A0u)) /* lint --e(923)*/

/** 603A4, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH7_R7 ((*(volatile Ifx_GTM_MCS_CH_R7*)0xF01603A4u)) /* lint --e(923)*/

/** 60404, MCS Clear Trigger Control Register */
#define GTM_MCS3_CTRG ((*(volatile Ifx_GTM_MCS_CTRG*)0xF0160404u)) /* lint --e(923)*/

/** 60400, MCS Control Register */
#define GTM_MCS3_CTRL ((*(volatile Ifx_GTM_MCS_CTRL*)0xF0160400u)) /* lint --e(923)*/

/** 60410, MCS Error Register */
#define GTM_MCS3_ERR ((*(volatile Ifx_GTM_MCS_ERR*)0xF0160410u)) /* lint --e(923)*/

/** 6040C, MCS Channel Reset Register */
#define GTM_MCS3_RST ((*(volatile Ifx_GTM_MCS_RST*)0xF016040Cu)) /* lint --e(923)*/

/** 60408, MCS Set Trigger Control Register */
#define GTM_MCS3_STRG ((*(volatile Ifx_GTM_MCS_STRG*)0xF0160408u)) /* lint --e(923)*/

/** 184, Monitor Activity Register 0 */
#define GTM_MON_ACTIVITY_0 ((*(volatile Ifx_GTM_MON_ACTIVITY_0*)0xF0100184u)) /* lint --e(923)*/

/** 180, Monitor Status Register */
#define GTM_MON_STATUS ((*(volatile Ifx_GTM_MON_STATUS*)0xF0100180u)) /* lint --e(923)*/

/** Alias for GTM_MSCIN0_INHCON.
 *  Note that this definition is obsolete, use GTM_MSCIN0_INHCON instead.
 * 9FF64, MSC Input High Control Register
 */
#define GTM_MSC0ININHCON (GTM_MSCIN0_INHCON)

/** Alias for GTM_MSCIN0_INLCON.
 *  Note that this definition is obsolete, use GTM_MSCIN0_INLCON instead.
 * 9FF60, MSC Input Low Control Register
 */
#define GTM_MSC0ININLCON (GTM_MSCIN0_INLCON)

/** Alias for GTM_MSCIN1_INHCON.
 *  Note that this definition is obsolete, use GTM_MSCIN1_INHCON instead.
 * 9FF6C, MSC Input High Control Register
 */
#define GTM_MSC1ININHCON (GTM_MSCIN1_INHCON)

/** Alias for GTM_MSCIN1_INLCON.
 *  Note that this definition is obsolete, use GTM_MSCIN1_INLCON instead.
 * 9FF68, MSC Input Low Control Register
 */
#define GTM_MSC1ININLCON (GTM_MSCIN1_INLCON)

/** 9FF64, MSC Input High Control Register */
#define GTM_MSCIN0_INHCON ((*(volatile Ifx_GTM_MSCIN_INHCON*)0xF019FF64u)) /* lint --e(923)*/

/** 9FF60, MSC Input Low Control Register */
#define GTM_MSCIN0_INLCON ((*(volatile Ifx_GTM_MSCIN_INLCON*)0xF019FF60u)) /* lint --e(923)*/

/** 9FF6C, MSC Input High Control Register */
#define GTM_MSCIN1_INHCON ((*(volatile Ifx_GTM_MSCIN_INHCON*)0xF019FF6Cu)) /* lint --e(923)*/

/** 9FF68, MSC Input Low Control Register */
#define GTM_MSCIN1_INLCON ((*(volatile Ifx_GTM_MSCIN_INLCON*)0xF019FF68u)) /* lint --e(923)*/

/** 9FF00, MSC Set Control 0 Register */
#define GTM_MSCSET0_CON0 ((*(volatile Ifx_GTM_MSCSET_CON0*)0xF019FF00u)) /* lint --e(923)*/

/** 9FF04, MSC Set Control 1 Register */
#define GTM_MSCSET0_CON1 ((*(volatile Ifx_GTM_MSCSET_CON1*)0xF019FF04u)) /* lint --e(923)*/

/** 9FF08, MSC Set Control 2 Register */
#define GTM_MSCSET0_CON2 ((*(volatile Ifx_GTM_MSCSET_CON2*)0xF019FF08u)) /* lint --e(923)*/

/** 9FF0C, MSC Set Control 3 Register */
#define GTM_MSCSET0_CON3 ((*(volatile Ifx_GTM_MSCSET_CON3*)0xF019FF0Cu)) /* lint --e(923)*/

/** 9FF10, MSC Set Control 0 Register */
#define GTM_MSCSET1_CON0 ((*(volatile Ifx_GTM_MSCSET_CON0*)0xF019FF10u)) /* lint --e(923)*/

/** 9FF14, MSC Set Control 1 Register */
#define GTM_MSCSET1_CON1 ((*(volatile Ifx_GTM_MSCSET_CON1*)0xF019FF14u)) /* lint --e(923)*/

/** 9FF18, MSC Set Control 2 Register */
#define GTM_MSCSET1_CON2 ((*(volatile Ifx_GTM_MSCSET_CON2*)0xF019FF18u)) /* lint --e(923)*/

/** 9FF1C, MSC Set Control 3 Register */
#define GTM_MSCSET1_CON3 ((*(volatile Ifx_GTM_MSCSET_CON3*)0xF019FF1Cu)) /* lint --e(923)*/

/** Alias for GTM_MSCSET1_CON0.
 *  Note that this definition is obsolete, use GTM_MSCSET1_CON0 instead.
 * 9FF10, MSC Set Control 0 Register
 */
#define GTM_MSCSET1CON0 (GTM_MSCSET1_CON0)

/** Alias for GTM_MSCSET1_CON1.
 *  Note that this definition is obsolete, use GTM_MSCSET1_CON1 instead.
 * 9FF14, MSC Set Control 1 Register
 */
#define GTM_MSCSET1CON1 (GTM_MSCSET1_CON1)

/** Alias for GTM_MSCSET1_CON2.
 *  Note that this definition is obsolete, use GTM_MSCSET1_CON2 instead.
 * 9FF18, MSC Set Control 2 Register
 */
#define GTM_MSCSET1CON2 (GTM_MSCSET1_CON2)

/** Alias for GTM_MSCSET1_CON3.
 *  Note that this definition is obsolete, use GTM_MSCSET1_CON3 instead.
 * 9FF1C, MSC Set Control 3 Register
 */
#define GTM_MSCSET1CON3 (GTM_MSCSET1_CON3)

/** 9FF20, MSC Set Control 0 Register */
#define GTM_MSCSET2_CON0 ((*(volatile Ifx_GTM_MSCSET_CON0*)0xF019FF20u)) /* lint --e(923)*/

/** 9FF24, MSC Set Control 1 Register */
#define GTM_MSCSET2_CON1 ((*(volatile Ifx_GTM_MSCSET_CON1*)0xF019FF24u)) /* lint --e(923)*/

/** 9FF28, MSC Set Control 2 Register */
#define GTM_MSCSET2_CON2 ((*(volatile Ifx_GTM_MSCSET_CON2*)0xF019FF28u)) /* lint --e(923)*/

/** 9FF2C, MSC Set Control 3 Register */
#define GTM_MSCSET2_CON3 ((*(volatile Ifx_GTM_MSCSET_CON3*)0xF019FF2Cu)) /* lint --e(923)*/

/** Alias for GTM_MSCSET2_CON0.
 *  Note that this definition is obsolete, use GTM_MSCSET2_CON0 instead.
 * 9FF20, MSC Set Control 0 Register
 */
#define GTM_MSCSET2CON0 (GTM_MSCSET2_CON0)

/** Alias for GTM_MSCSET2_CON1.
 *  Note that this definition is obsolete, use GTM_MSCSET2_CON1 instead.
 * 9FF24, MSC Set Control 1 Register
 */
#define GTM_MSCSET2CON1 (GTM_MSCSET2_CON1)

/** Alias for GTM_MSCSET2_CON2.
 *  Note that this definition is obsolete, use GTM_MSCSET2_CON2 instead.
 * 9FF28, MSC Set Control 2 Register
 */
#define GTM_MSCSET2CON2 (GTM_MSCSET2_CON2)

/** Alias for GTM_MSCSET2_CON3.
 *  Note that this definition is obsolete, use GTM_MSCSET2_CON3 instead.
 * 9FF2C, MSC Set Control 3 Register
 */
#define GTM_MSCSET2CON3 (GTM_MSCSET2_CON3)

/** 9FF30, MSC Set Control 0 Register */
#define GTM_MSCSET3_CON0 ((*(volatile Ifx_GTM_MSCSET_CON0*)0xF019FF30u)) /* lint --e(923)*/

/** 9FF34, MSC Set Control 1 Register */
#define GTM_MSCSET3_CON1 ((*(volatile Ifx_GTM_MSCSET_CON1*)0xF019FF34u)) /* lint --e(923)*/

/** 9FF38, MSC Set Control 2 Register */
#define GTM_MSCSET3_CON2 ((*(volatile Ifx_GTM_MSCSET_CON2*)0xF019FF38u)) /* lint --e(923)*/

/** 9FF3C, MSC Set Control 3 Register */
#define GTM_MSCSET3_CON3 ((*(volatile Ifx_GTM_MSCSET_CON3*)0xF019FF3Cu)) /* lint --e(923)*/

/** Alias for GTM_MSCSET3_CON0.
 *  Note that this definition is obsolete, use GTM_MSCSET3_CON0 instead.
 * 9FF30, MSC Set Control 0 Register
 */
#define GTM_MSCSET3CON0 (GTM_MSCSET3_CON0)

/** Alias for GTM_MSCSET3_CON1.
 *  Note that this definition is obsolete, use GTM_MSCSET3_CON1 instead.
 * 9FF34, MSC Set Control 1 Register
 */
#define GTM_MSCSET3CON1 (GTM_MSCSET3_CON1)

/** Alias for GTM_MSCSET3_CON2.
 *  Note that this definition is obsolete, use GTM_MSCSET3_CON2 instead.
 * 9FF38, MSC Set Control 2 Register
 */
#define GTM_MSCSET3CON2 (GTM_MSCSET3_CON2)

/** Alias for GTM_MSCSET3_CON3.
 *  Note that this definition is obsolete, use GTM_MSCSET3_CON3 instead.
 * 9FF3C, MSC Set Control 3 Register
 */
#define GTM_MSCSET3CON3 (GTM_MSCSET3_CON3)

/** 9FDE8, OCDS Control and Status */
#define GTM_OCS ((*(volatile Ifx_GTM_OCS*)0xF019FDE8u)) /* lint --e(923)*/

/** 9FDDC, OCDS Debug Access Register */
#define GTM_ODA ((*(volatile Ifx_GTM_ODA*)0xF019FDDCu)) /* lint --e(923)*/

/** 9FDD4, OCDS Trigger Set Control 0 Register */
#define GTM_OTSC0 ((*(volatile Ifx_GTM_OTSC0*)0xF019FDD4u)) /* lint --e(923)*/

/** 9FDD8, OCDS Trigger Set Control 1 Register */
#define GTM_OTSC1 ((*(volatile Ifx_GTM_OTSC1*)0xF019FDD8u)) /* lint --e(923)*/

/** 9FDD0, OCDS Trigger Set Select Register */
#define GTM_OTSS ((*(volatile Ifx_GTM_OTSS*)0xF019FDD0u)) /* lint --e(923)*/

/** 9FDA4, PSI5 Output Select 0 Register */
#define GTM_PSI5OUTSEL0 ((*(volatile Ifx_GTM_PSI5OUTSEL0*)0xF019FDA4u)) /* lint --e(923)*/

/** Alias for GTM_PSM_AFD0_CH_BUF0_BUF_ACC.
 *  Note that this definition is obsolete, use GTM_PSM_AFD0_CH_BUF0_BUF_ACC
 * instead.
 * 18080, AFD0 FIFO0 Channel Buffer Access Register
 */
#define GTM_PSM_AFD0_CH0_BUF_BUF_ACC (GTM_PSM_AFD0_CH_BUF0_BUF_ACC)

/** Alias for GTM_PSM_AFD0_CH_BUF1_BUF_ACC.
 *  Note that this definition is obsolete, use GTM_PSM_AFD0_CH_BUF1_BUF_ACC
 * instead.
 * 18090, AFD0 FIFO0 Channel Buffer Access Register
 */
#define GTM_PSM_AFD0_CH1_BUF_BUF_ACC (GTM_PSM_AFD0_CH_BUF1_BUF_ACC)

/** Alias for GTM_PSM_AFD0_CH_BUF2_BUF_ACC.
 *  Note that this definition is obsolete, use GTM_PSM_AFD0_CH_BUF2_BUF_ACC
 * instead.
 * 180A0, AFD0 FIFO0 Channel Buffer Access Register
 */
#define GTM_PSM_AFD0_CH2_BUF_BUF_ACC (GTM_PSM_AFD0_CH_BUF2_BUF_ACC)

/** Alias for GTM_PSM_AFD0_CH_BUF3_BUF_ACC.
 *  Note that this definition is obsolete, use GTM_PSM_AFD0_CH_BUF3_BUF_ACC
 * instead.
 * 180B0, AFD0 FIFO0 Channel Buffer Access Register
 */
#define GTM_PSM_AFD0_CH3_BUF_BUF_ACC (GTM_PSM_AFD0_CH_BUF3_BUF_ACC)

/** Alias for GTM_PSM_AFD0_CH_BUF4_BUF_ACC.
 *  Note that this definition is obsolete, use GTM_PSM_AFD0_CH_BUF4_BUF_ACC
 * instead.
 * 180C0, AFD0 FIFO0 Channel Buffer Access Register
 */
#define GTM_PSM_AFD0_CH4_BUF_BUF_ACC (GTM_PSM_AFD0_CH_BUF4_BUF_ACC)

/** Alias for GTM_PSM_AFD0_CH_BUF5_BUF_ACC.
 *  Note that this definition is obsolete, use GTM_PSM_AFD0_CH_BUF5_BUF_ACC
 * instead.
 * 180D0, AFD0 FIFO0 Channel Buffer Access Register
 */
#define GTM_PSM_AFD0_CH5_BUF_BUF_ACC (GTM_PSM_AFD0_CH_BUF5_BUF_ACC)

/** Alias for GTM_PSM_AFD0_CH_BUF6_BUF_ACC.
 *  Note that this definition is obsolete, use GTM_PSM_AFD0_CH_BUF6_BUF_ACC
 * instead.
 * 180E0, AFD0 FIFO0 Channel Buffer Access Register
 */
#define GTM_PSM_AFD0_CH6_BUF_BUF_ACC (GTM_PSM_AFD0_CH_BUF6_BUF_ACC)

/** Alias for GTM_PSM_AFD0_CH_BUF7_BUF_ACC.
 *  Note that this definition is obsolete, use GTM_PSM_AFD0_CH_BUF7_BUF_ACC
 * instead.
 * 180F0, AFD0 FIFO0 Channel Buffer Access Register
 */
#define GTM_PSM_AFD0_CH7_BUF_BUF_ACC (GTM_PSM_AFD0_CH_BUF7_BUF_ACC)

/** 18080, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_PSM_AFD0_CH_BUF0_BUF_ACC ((*(volatile Ifx_GTM_PSM_AFD0_CH_BUF_BUF_ACC*)0xF0118080u)) /* lint --e(923)*/

/** 18090, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_PSM_AFD0_CH_BUF1_BUF_ACC ((*(volatile Ifx_GTM_PSM_AFD0_CH_BUF_BUF_ACC*)0xF0118090u)) /* lint --e(923)*/

/** 180A0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_PSM_AFD0_CH_BUF2_BUF_ACC ((*(volatile Ifx_GTM_PSM_AFD0_CH_BUF_BUF_ACC*)0xF01180A0u)) /* lint --e(923)*/

/** 180B0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_PSM_AFD0_CH_BUF3_BUF_ACC ((*(volatile Ifx_GTM_PSM_AFD0_CH_BUF_BUF_ACC*)0xF01180B0u)) /* lint --e(923)*/

/** 180C0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_PSM_AFD0_CH_BUF4_BUF_ACC ((*(volatile Ifx_GTM_PSM_AFD0_CH_BUF_BUF_ACC*)0xF01180C0u)) /* lint --e(923)*/

/** 180D0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_PSM_AFD0_CH_BUF5_BUF_ACC ((*(volatile Ifx_GTM_PSM_AFD0_CH_BUF_BUF_ACC*)0xF01180D0u)) /* lint --e(923)*/

/** 180E0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_PSM_AFD0_CH_BUF6_BUF_ACC ((*(volatile Ifx_GTM_PSM_AFD0_CH_BUF_BUF_ACC*)0xF01180E0u)) /* lint --e(923)*/

/** 180F0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_PSM_AFD0_CH_BUF7_BUF_ACC ((*(volatile Ifx_GTM_PSM_AFD0_CH_BUF_BUF_ACC*)0xF01180F0u)) /* lint --e(923)*/

/** 18000, F2A Read Channel Address Register */
#define GTM_PSM_F2A0_CH_ARU_RD_FIFO0 ((*(volatile Ifx_GTM_PSM_F2A0_CH_ARU_RD_FIFO*)0xF0118000u)) /* lint --e(923)*/

/** 18004, F2A Read Channel Address Register */
#define GTM_PSM_F2A0_CH_ARU_RD_FIFO1 ((*(volatile Ifx_GTM_PSM_F2A0_CH_ARU_RD_FIFO*)0xF0118004u)) /* lint --e(923)*/

/** 18008, F2A Read Channel Address Register */
#define GTM_PSM_F2A0_CH_ARU_RD_FIFO2 ((*(volatile Ifx_GTM_PSM_F2A0_CH_ARU_RD_FIFO*)0xF0118008u)) /* lint --e(923)*/

/** 1800C, F2A Read Channel Address Register */
#define GTM_PSM_F2A0_CH_ARU_RD_FIFO3 ((*(volatile Ifx_GTM_PSM_F2A0_CH_ARU_RD_FIFO*)0xF011800Cu)) /* lint --e(923)*/

/** 18010, F2A Read Channel Address Register */
#define GTM_PSM_F2A0_CH_ARU_RD_FIFO4 ((*(volatile Ifx_GTM_PSM_F2A0_CH_ARU_RD_FIFO*)0xF0118010u)) /* lint --e(923)*/

/** 18014, F2A Read Channel Address Register */
#define GTM_PSM_F2A0_CH_ARU_RD_FIFO5 ((*(volatile Ifx_GTM_PSM_F2A0_CH_ARU_RD_FIFO*)0xF0118014u)) /* lint --e(923)*/

/** 18018, F2A Read Channel Address Register */
#define GTM_PSM_F2A0_CH_ARU_RD_FIFO6 ((*(volatile Ifx_GTM_PSM_F2A0_CH_ARU_RD_FIFO*)0xF0118018u)) /* lint --e(923)*/

/** 1801C, F2A Read Channel Address Register */
#define GTM_PSM_F2A0_CH_ARU_RD_FIFO7 ((*(volatile Ifx_GTM_PSM_F2A0_CH_ARU_RD_FIFO*)0xF011801Cu)) /* lint --e(923)*/

/** 18020, F2A Stream Configuration Register */
#define GTM_PSM_F2A0_CH_STR_CFG0 ((*(volatile Ifx_GTM_PSM_F2A0_CH_STR_CFG*)0xF0118020u)) /* lint --e(923)*/

/** 18024, F2A Stream Configuration Register */
#define GTM_PSM_F2A0_CH_STR_CFG1 ((*(volatile Ifx_GTM_PSM_F2A0_CH_STR_CFG*)0xF0118024u)) /* lint --e(923)*/

/** 18028, F2A Stream Configuration Register */
#define GTM_PSM_F2A0_CH_STR_CFG2 ((*(volatile Ifx_GTM_PSM_F2A0_CH_STR_CFG*)0xF0118028u)) /* lint --e(923)*/

/** 1802C, F2A Stream Configuration Register */
#define GTM_PSM_F2A0_CH_STR_CFG3 ((*(volatile Ifx_GTM_PSM_F2A0_CH_STR_CFG*)0xF011802Cu)) /* lint --e(923)*/

/** 18030, F2A Stream Configuration Register */
#define GTM_PSM_F2A0_CH_STR_CFG4 ((*(volatile Ifx_GTM_PSM_F2A0_CH_STR_CFG*)0xF0118030u)) /* lint --e(923)*/

/** 18034, F2A Stream Configuration Register */
#define GTM_PSM_F2A0_CH_STR_CFG5 ((*(volatile Ifx_GTM_PSM_F2A0_CH_STR_CFG*)0xF0118034u)) /* lint --e(923)*/

/** 18038, F2A Stream Configuration Register */
#define GTM_PSM_F2A0_CH_STR_CFG6 ((*(volatile Ifx_GTM_PSM_F2A0_CH_STR_CFG*)0xF0118038u)) /* lint --e(923)*/

/** 1803C, F2A Stream Configuration Register */
#define GTM_PSM_F2A0_CH_STR_CFG7 ((*(volatile Ifx_GTM_PSM_F2A0_CH_STR_CFG*)0xF011803Cu)) /* lint --e(923)*/

/** 18040, F2A0 Stream Activation Register */
#define GTM_PSM_F2A0_ENABLE ((*(volatile Ifx_GTM_PSM_F2A0_ENABLE*)0xF0118040u)) /* lint --e(923)*/

/** 18400, FIFO0 Channel Control Register */
#define GTM_PSM_FIFO0_CH0_CTRL ((*(volatile Ifx_GTM_PSM_FIFO0_CH_CTRL*)0xF0118400u)) /* lint --e(923)*/

/** 18404, FIFO0 Channel End Address Register */
#define GTM_PSM_FIFO0_CH0_END_ADDR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_END_ADDR*)0xF0118404u)) /* lint --e(923)*/

/** 18418, FIFO0 Channel Fill Level Register */
#define GTM_PSM_FIFO0_CH0_FILL_LEVEL ((*(volatile Ifx_GTM_PSM_FIFO0_CH_FILL_LEVEL*)0xF0118418u)) /* lint --e(923)*/

/** 18410, FIFO0 Channel Lower Watermark Register */
#define GTM_PSM_FIFO0_CH0_LOWER_WM ((*(volatile Ifx_GTM_PSM_FIFO0_CH_LOWER_WM*)0xF0118410u)) /* lint --e(923)*/

/** Alias for GTM_PSM_FIFO0_CH_PTR0_RD_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR0_RD_PTR
 * instead.
 * 18504, FIFO0 Channel Read Pointer Register
 */
#define GTM_PSM_FIFO0_CH0_RD_PTR_PTR (GTM_PSM_FIFO0_CH_PTR0_RD_PTR)

/** 18408, FIFO0 Channel Start Address Register */
#define GTM_PSM_FIFO0_CH0_START_ADDR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_START_ADDR*)0xF0118408u)) /* lint --e(923)*/

/** 18414, FIFO0 Channel Status Register */
#define GTM_PSM_FIFO0_CH0_STATUS ((*(volatile Ifx_GTM_PSM_FIFO0_CH_STATUS*)0xF0118414u)) /* lint --e(923)*/

/** 1840C, FIFO0 Channel Upper Watermark Register */
#define GTM_PSM_FIFO0_CH0_UPPER_WM ((*(volatile Ifx_GTM_PSM_FIFO0_CH_UPPER_WM*)0xF011840Cu)) /* lint --e(923)*/

/** Alias for GTM_PSM_FIFO0_CH_PTR0_WR_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR0_WR_PTR
 * instead.
 * 18500, FIFO0 Channel Write Pointer Register
 */
#define GTM_PSM_FIFO0_CH0_WR_PTR_PTR (GTM_PSM_FIFO0_CH_PTR0_WR_PTR)

/** 18420, FIFO0 Channel Control Register */
#define GTM_PSM_FIFO0_CH1_CTRL ((*(volatile Ifx_GTM_PSM_FIFO0_CH_CTRL*)0xF0118420u)) /* lint --e(923)*/

/** 18424, FIFO0 Channel End Address Register */
#define GTM_PSM_FIFO0_CH1_END_ADDR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_END_ADDR*)0xF0118424u)) /* lint --e(923)*/

/** 18438, FIFO0 Channel Fill Level Register */
#define GTM_PSM_FIFO0_CH1_FILL_LEVEL ((*(volatile Ifx_GTM_PSM_FIFO0_CH_FILL_LEVEL*)0xF0118438u)) /* lint --e(923)*/

/** 18430, FIFO0 Channel Lower Watermark Register */
#define GTM_PSM_FIFO0_CH1_LOWER_WM ((*(volatile Ifx_GTM_PSM_FIFO0_CH_LOWER_WM*)0xF0118430u)) /* lint --e(923)*/

/** Alias for GTM_PSM_FIFO0_CH_PTR1_RD_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR1_RD_PTR
 * instead.
 * 18524, FIFO0 Channel Read Pointer Register
 */
#define GTM_PSM_FIFO0_CH1_RD_PTR_PTR (GTM_PSM_FIFO0_CH_PTR1_RD_PTR)

/** 18428, FIFO0 Channel Start Address Register */
#define GTM_PSM_FIFO0_CH1_START_ADDR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_START_ADDR*)0xF0118428u)) /* lint --e(923)*/

/** 18434, FIFO0 Channel Status Register */
#define GTM_PSM_FIFO0_CH1_STATUS ((*(volatile Ifx_GTM_PSM_FIFO0_CH_STATUS*)0xF0118434u)) /* lint --e(923)*/

/** 1842C, FIFO0 Channel Upper Watermark Register */
#define GTM_PSM_FIFO0_CH1_UPPER_WM ((*(volatile Ifx_GTM_PSM_FIFO0_CH_UPPER_WM*)0xF011842Cu)) /* lint --e(923)*/

/** Alias for GTM_PSM_FIFO0_CH_PTR1_WR_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR1_WR_PTR
 * instead.
 * 18520, FIFO0 Channel Write Pointer Register
 */
#define GTM_PSM_FIFO0_CH1_WR_PTR_PTR (GTM_PSM_FIFO0_CH_PTR1_WR_PTR)

/** 18440, FIFO0 Channel Control Register */
#define GTM_PSM_FIFO0_CH2_CTRL ((*(volatile Ifx_GTM_PSM_FIFO0_CH_CTRL*)0xF0118440u)) /* lint --e(923)*/

/** 18444, FIFO0 Channel End Address Register */
#define GTM_PSM_FIFO0_CH2_END_ADDR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_END_ADDR*)0xF0118444u)) /* lint --e(923)*/

/** 18458, FIFO0 Channel Fill Level Register */
#define GTM_PSM_FIFO0_CH2_FILL_LEVEL ((*(volatile Ifx_GTM_PSM_FIFO0_CH_FILL_LEVEL*)0xF0118458u)) /* lint --e(923)*/

/** 18450, FIFO0 Channel Lower Watermark Register */
#define GTM_PSM_FIFO0_CH2_LOWER_WM ((*(volatile Ifx_GTM_PSM_FIFO0_CH_LOWER_WM*)0xF0118450u)) /* lint --e(923)*/

/** Alias for GTM_PSM_FIFO0_CH_PTR2_RD_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR2_RD_PTR
 * instead.
 * 18544, FIFO0 Channel Read Pointer Register
 */
#define GTM_PSM_FIFO0_CH2_RD_PTR_PTR (GTM_PSM_FIFO0_CH_PTR2_RD_PTR)

/** 18448, FIFO0 Channel Start Address Register */
#define GTM_PSM_FIFO0_CH2_START_ADDR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_START_ADDR*)0xF0118448u)) /* lint --e(923)*/

/** 18454, FIFO0 Channel Status Register */
#define GTM_PSM_FIFO0_CH2_STATUS ((*(volatile Ifx_GTM_PSM_FIFO0_CH_STATUS*)0xF0118454u)) /* lint --e(923)*/

/** 1844C, FIFO0 Channel Upper Watermark Register */
#define GTM_PSM_FIFO0_CH2_UPPER_WM ((*(volatile Ifx_GTM_PSM_FIFO0_CH_UPPER_WM*)0xF011844Cu)) /* lint --e(923)*/

/** Alias for GTM_PSM_FIFO0_CH_PTR2_WR_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR2_WR_PTR
 * instead.
 * 18540, FIFO0 Channel Write Pointer Register
 */
#define GTM_PSM_FIFO0_CH2_WR_PTR_PTR (GTM_PSM_FIFO0_CH_PTR2_WR_PTR)

/** 18460, FIFO0 Channel Control Register */
#define GTM_PSM_FIFO0_CH3_CTRL ((*(volatile Ifx_GTM_PSM_FIFO0_CH_CTRL*)0xF0118460u)) /* lint --e(923)*/

/** 18464, FIFO0 Channel End Address Register */
#define GTM_PSM_FIFO0_CH3_END_ADDR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_END_ADDR*)0xF0118464u)) /* lint --e(923)*/

/** 18478, FIFO0 Channel Fill Level Register */
#define GTM_PSM_FIFO0_CH3_FILL_LEVEL ((*(volatile Ifx_GTM_PSM_FIFO0_CH_FILL_LEVEL*)0xF0118478u)) /* lint --e(923)*/

/** 18470, FIFO0 Channel Lower Watermark Register */
#define GTM_PSM_FIFO0_CH3_LOWER_WM ((*(volatile Ifx_GTM_PSM_FIFO0_CH_LOWER_WM*)0xF0118470u)) /* lint --e(923)*/

/** Alias for GTM_PSM_FIFO0_CH_PTR3_RD_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR3_RD_PTR
 * instead.
 * 18564, FIFO0 Channel Read Pointer Register
 */
#define GTM_PSM_FIFO0_CH3_RD_PTR_PTR (GTM_PSM_FIFO0_CH_PTR3_RD_PTR)

/** 18468, FIFO0 Channel Start Address Register */
#define GTM_PSM_FIFO0_CH3_START_ADDR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_START_ADDR*)0xF0118468u)) /* lint --e(923)*/

/** 18474, FIFO0 Channel Status Register */
#define GTM_PSM_FIFO0_CH3_STATUS ((*(volatile Ifx_GTM_PSM_FIFO0_CH_STATUS*)0xF0118474u)) /* lint --e(923)*/

/** 1846C, FIFO0 Channel Upper Watermark Register */
#define GTM_PSM_FIFO0_CH3_UPPER_WM ((*(volatile Ifx_GTM_PSM_FIFO0_CH_UPPER_WM*)0xF011846Cu)) /* lint --e(923)*/

/** Alias for GTM_PSM_FIFO0_CH_PTR3_WR_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR3_WR_PTR
 * instead.
 * 18560, FIFO0 Channel Write Pointer Register
 */
#define GTM_PSM_FIFO0_CH3_WR_PTR_PTR (GTM_PSM_FIFO0_CH_PTR3_WR_PTR)

/** 18480, FIFO0 Channel Control Register */
#define GTM_PSM_FIFO0_CH4_CTRL ((*(volatile Ifx_GTM_PSM_FIFO0_CH_CTRL*)0xF0118480u)) /* lint --e(923)*/

/** 18484, FIFO0 Channel End Address Register */
#define GTM_PSM_FIFO0_CH4_END_ADDR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_END_ADDR*)0xF0118484u)) /* lint --e(923)*/

/** 18498, FIFO0 Channel Fill Level Register */
#define GTM_PSM_FIFO0_CH4_FILL_LEVEL ((*(volatile Ifx_GTM_PSM_FIFO0_CH_FILL_LEVEL*)0xF0118498u)) /* lint --e(923)*/

/** 18490, FIFO0 Channel Lower Watermark Register */
#define GTM_PSM_FIFO0_CH4_LOWER_WM ((*(volatile Ifx_GTM_PSM_FIFO0_CH_LOWER_WM*)0xF0118490u)) /* lint --e(923)*/

/** Alias for GTM_PSM_FIFO0_CH_PTR4_RD_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR4_RD_PTR
 * instead.
 * 18584, FIFO0 Channel Read Pointer Register
 */
#define GTM_PSM_FIFO0_CH4_RD_PTR_PTR (GTM_PSM_FIFO0_CH_PTR4_RD_PTR)

/** 18488, FIFO0 Channel Start Address Register */
#define GTM_PSM_FIFO0_CH4_START_ADDR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_START_ADDR*)0xF0118488u)) /* lint --e(923)*/

/** 18494, FIFO0 Channel Status Register */
#define GTM_PSM_FIFO0_CH4_STATUS ((*(volatile Ifx_GTM_PSM_FIFO0_CH_STATUS*)0xF0118494u)) /* lint --e(923)*/

/** 1848C, FIFO0 Channel Upper Watermark Register */
#define GTM_PSM_FIFO0_CH4_UPPER_WM ((*(volatile Ifx_GTM_PSM_FIFO0_CH_UPPER_WM*)0xF011848Cu)) /* lint --e(923)*/

/** Alias for GTM_PSM_FIFO0_CH_PTR4_WR_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR4_WR_PTR
 * instead.
 * 18580, FIFO0 Channel Write Pointer Register
 */
#define GTM_PSM_FIFO0_CH4_WR_PTR_PTR (GTM_PSM_FIFO0_CH_PTR4_WR_PTR)

/** 184A0, FIFO0 Channel Control Register */
#define GTM_PSM_FIFO0_CH5_CTRL ((*(volatile Ifx_GTM_PSM_FIFO0_CH_CTRL*)0xF01184A0u)) /* lint --e(923)*/

/** 184A4, FIFO0 Channel End Address Register */
#define GTM_PSM_FIFO0_CH5_END_ADDR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_END_ADDR*)0xF01184A4u)) /* lint --e(923)*/

/** 184B8, FIFO0 Channel Fill Level Register */
#define GTM_PSM_FIFO0_CH5_FILL_LEVEL ((*(volatile Ifx_GTM_PSM_FIFO0_CH_FILL_LEVEL*)0xF01184B8u)) /* lint --e(923)*/

/** 184B0, FIFO0 Channel Lower Watermark Register */
#define GTM_PSM_FIFO0_CH5_LOWER_WM ((*(volatile Ifx_GTM_PSM_FIFO0_CH_LOWER_WM*)0xF01184B0u)) /* lint --e(923)*/

/** Alias for GTM_PSM_FIFO0_CH_PTR5_RD_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR5_RD_PTR
 * instead.
 * 185A4, FIFO0 Channel Read Pointer Register
 */
#define GTM_PSM_FIFO0_CH5_RD_PTR_PTR (GTM_PSM_FIFO0_CH_PTR5_RD_PTR)

/** 184A8, FIFO0 Channel Start Address Register */
#define GTM_PSM_FIFO0_CH5_START_ADDR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_START_ADDR*)0xF01184A8u)) /* lint --e(923)*/

/** 184B4, FIFO0 Channel Status Register */
#define GTM_PSM_FIFO0_CH5_STATUS ((*(volatile Ifx_GTM_PSM_FIFO0_CH_STATUS*)0xF01184B4u)) /* lint --e(923)*/

/** 184AC, FIFO0 Channel Upper Watermark Register */
#define GTM_PSM_FIFO0_CH5_UPPER_WM ((*(volatile Ifx_GTM_PSM_FIFO0_CH_UPPER_WM*)0xF01184ACu)) /* lint --e(923)*/

/** Alias for GTM_PSM_FIFO0_CH_PTR5_WR_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR5_WR_PTR
 * instead.
 * 185A0, FIFO0 Channel Write Pointer Register
 */
#define GTM_PSM_FIFO0_CH5_WR_PTR_PTR (GTM_PSM_FIFO0_CH_PTR5_WR_PTR)

/** 184C0, FIFO0 Channel Control Register */
#define GTM_PSM_FIFO0_CH6_CTRL ((*(volatile Ifx_GTM_PSM_FIFO0_CH_CTRL*)0xF01184C0u)) /* lint --e(923)*/

/** 184C4, FIFO0 Channel End Address Register */
#define GTM_PSM_FIFO0_CH6_END_ADDR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_END_ADDR*)0xF01184C4u)) /* lint --e(923)*/

/** 184D8, FIFO0 Channel Fill Level Register */
#define GTM_PSM_FIFO0_CH6_FILL_LEVEL ((*(volatile Ifx_GTM_PSM_FIFO0_CH_FILL_LEVEL*)0xF01184D8u)) /* lint --e(923)*/

/** 184D0, FIFO0 Channel Lower Watermark Register */
#define GTM_PSM_FIFO0_CH6_LOWER_WM ((*(volatile Ifx_GTM_PSM_FIFO0_CH_LOWER_WM*)0xF01184D0u)) /* lint --e(923)*/

/** Alias for GTM_PSM_FIFO0_CH_PTR6_RD_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR6_RD_PTR
 * instead.
 * 185C4, FIFO0 Channel Read Pointer Register
 */
#define GTM_PSM_FIFO0_CH6_RD_PTR_PTR (GTM_PSM_FIFO0_CH_PTR6_RD_PTR)

/** 184C8, FIFO0 Channel Start Address Register */
#define GTM_PSM_FIFO0_CH6_START_ADDR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_START_ADDR*)0xF01184C8u)) /* lint --e(923)*/

/** 184D4, FIFO0 Channel Status Register */
#define GTM_PSM_FIFO0_CH6_STATUS ((*(volatile Ifx_GTM_PSM_FIFO0_CH_STATUS*)0xF01184D4u)) /* lint --e(923)*/

/** 184CC, FIFO0 Channel Upper Watermark Register */
#define GTM_PSM_FIFO0_CH6_UPPER_WM ((*(volatile Ifx_GTM_PSM_FIFO0_CH_UPPER_WM*)0xF01184CCu)) /* lint --e(923)*/

/** Alias for GTM_PSM_FIFO0_CH_PTR6_WR_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR6_WR_PTR
 * instead.
 * 185C0, FIFO0 Channel Write Pointer Register
 */
#define GTM_PSM_FIFO0_CH6_WR_PTR_PTR (GTM_PSM_FIFO0_CH_PTR6_WR_PTR)

/** 184E0, FIFO0 Channel Control Register */
#define GTM_PSM_FIFO0_CH7_CTRL ((*(volatile Ifx_GTM_PSM_FIFO0_CH_CTRL*)0xF01184E0u)) /* lint --e(923)*/

/** 184E4, FIFO0 Channel End Address Register */
#define GTM_PSM_FIFO0_CH7_END_ADDR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_END_ADDR*)0xF01184E4u)) /* lint --e(923)*/

/** 184F8, FIFO0 Channel Fill Level Register */
#define GTM_PSM_FIFO0_CH7_FILL_LEVEL ((*(volatile Ifx_GTM_PSM_FIFO0_CH_FILL_LEVEL*)0xF01184F8u)) /* lint --e(923)*/

/** 184F0, FIFO0 Channel Lower Watermark Register */
#define GTM_PSM_FIFO0_CH7_LOWER_WM ((*(volatile Ifx_GTM_PSM_FIFO0_CH_LOWER_WM*)0xF01184F0u)) /* lint --e(923)*/

/** Alias for GTM_PSM_FIFO0_CH_PTR7_RD_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR7_RD_PTR
 * instead.
 * 185E4, FIFO0 Channel Read Pointer Register
 */
#define GTM_PSM_FIFO0_CH7_RD_PTR_PTR (GTM_PSM_FIFO0_CH_PTR7_RD_PTR)

/** 184E8, FIFO0 Channel Start Address Register */
#define GTM_PSM_FIFO0_CH7_START_ADDR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_START_ADDR*)0xF01184E8u)) /* lint --e(923)*/

/** 184F4, FIFO0 Channel Status Register */
#define GTM_PSM_FIFO0_CH7_STATUS ((*(volatile Ifx_GTM_PSM_FIFO0_CH_STATUS*)0xF01184F4u)) /* lint --e(923)*/

/** 184EC, FIFO0 Channel Upper Watermark Register */
#define GTM_PSM_FIFO0_CH7_UPPER_WM ((*(volatile Ifx_GTM_PSM_FIFO0_CH_UPPER_WM*)0xF01184ECu)) /* lint --e(923)*/

/** Alias for GTM_PSM_FIFO0_CH_PTR7_WR_PTR.
 *  Note that this definition is obsolete, use GTM_PSM_FIFO0_CH_PTR7_WR_PTR
 * instead.
 * 185E0, FIFO0 Channel Write Pointer Register
 */
#define GTM_PSM_FIFO0_CH7_WR_PTR_PTR (GTM_PSM_FIFO0_CH_PTR7_WR_PTR)

/** 18604, FIFO0 FIFO0 FIFO0 Interrupt Enable Register */
#define GTM_PSM_FIFO0_CH_IRQ0_IRQ_EN ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_EN*)0xF0118604u)) /* lint --e(923)*/

/** 18608, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_PSM_FIFO0_CH_IRQ0_IRQ_FORCINT ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_FORCINT*)0xF0118608u)) /* lint --e(923)*/

/** 1860C, FIFO0 Channel IRQ Mode Control Register */
#define GTM_PSM_FIFO0_CH_IRQ0_IRQ_MODE ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_MODE*)0xF011860Cu)) /* lint --e(923)*/

/** 18600, FIFO0 Channel Interrupt Notification Register */
#define GTM_PSM_FIFO0_CH_IRQ0_IRQ_NOTIFY ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_NOTIFY*)0xF0118600u)) /* lint --e(923)*/

/** 18624, FIFO0 FIFO0 FIFO0 Interrupt Enable Register */
#define GTM_PSM_FIFO0_CH_IRQ1_IRQ_EN ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_EN*)0xF0118624u)) /* lint --e(923)*/

/** 18628, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_PSM_FIFO0_CH_IRQ1_IRQ_FORCINT ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_FORCINT*)0xF0118628u)) /* lint --e(923)*/

/** 1862C, FIFO0 Channel IRQ Mode Control Register */
#define GTM_PSM_FIFO0_CH_IRQ1_IRQ_MODE ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_MODE*)0xF011862Cu)) /* lint --e(923)*/

/** 18620, FIFO0 Channel Interrupt Notification Register */
#define GTM_PSM_FIFO0_CH_IRQ1_IRQ_NOTIFY ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_NOTIFY*)0xF0118620u)) /* lint --e(923)*/

/** 18644, FIFO0 FIFO0 FIFO0 Interrupt Enable Register */
#define GTM_PSM_FIFO0_CH_IRQ2_IRQ_EN ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_EN*)0xF0118644u)) /* lint --e(923)*/

/** 18648, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_PSM_FIFO0_CH_IRQ2_IRQ_FORCINT ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_FORCINT*)0xF0118648u)) /* lint --e(923)*/

/** 1864C, FIFO0 Channel IRQ Mode Control Register */
#define GTM_PSM_FIFO0_CH_IRQ2_IRQ_MODE ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_MODE*)0xF011864Cu)) /* lint --e(923)*/

/** 18640, FIFO0 Channel Interrupt Notification Register */
#define GTM_PSM_FIFO0_CH_IRQ2_IRQ_NOTIFY ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_NOTIFY*)0xF0118640u)) /* lint --e(923)*/

/** 18664, FIFO0 FIFO0 FIFO0 Interrupt Enable Register */
#define GTM_PSM_FIFO0_CH_IRQ3_IRQ_EN ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_EN*)0xF0118664u)) /* lint --e(923)*/

/** 18668, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_PSM_FIFO0_CH_IRQ3_IRQ_FORCINT ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_FORCINT*)0xF0118668u)) /* lint --e(923)*/

/** 1866C, FIFO0 Channel IRQ Mode Control Register */
#define GTM_PSM_FIFO0_CH_IRQ3_IRQ_MODE ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_MODE*)0xF011866Cu)) /* lint --e(923)*/

/** 18660, FIFO0 Channel Interrupt Notification Register */
#define GTM_PSM_FIFO0_CH_IRQ3_IRQ_NOTIFY ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_NOTIFY*)0xF0118660u)) /* lint --e(923)*/

/** 18684, FIFO0 FIFO0 FIFO0 Interrupt Enable Register */
#define GTM_PSM_FIFO0_CH_IRQ4_IRQ_EN ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_EN*)0xF0118684u)) /* lint --e(923)*/

/** 18688, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_PSM_FIFO0_CH_IRQ4_IRQ_FORCINT ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_FORCINT*)0xF0118688u)) /* lint --e(923)*/

/** 1868C, FIFO0 Channel IRQ Mode Control Register */
#define GTM_PSM_FIFO0_CH_IRQ4_IRQ_MODE ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_MODE*)0xF011868Cu)) /* lint --e(923)*/

/** 18680, FIFO0 Channel Interrupt Notification Register */
#define GTM_PSM_FIFO0_CH_IRQ4_IRQ_NOTIFY ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_NOTIFY*)0xF0118680u)) /* lint --e(923)*/

/** 186A4, FIFO0 FIFO0 FIFO0 Interrupt Enable Register */
#define GTM_PSM_FIFO0_CH_IRQ5_IRQ_EN ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_EN*)0xF01186A4u)) /* lint --e(923)*/

/** 186A8, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_PSM_FIFO0_CH_IRQ5_IRQ_FORCINT ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_FORCINT*)0xF01186A8u)) /* lint --e(923)*/

/** 186AC, FIFO0 Channel IRQ Mode Control Register */
#define GTM_PSM_FIFO0_CH_IRQ5_IRQ_MODE ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_MODE*)0xF01186ACu)) /* lint --e(923)*/

/** 186A0, FIFO0 Channel Interrupt Notification Register */
#define GTM_PSM_FIFO0_CH_IRQ5_IRQ_NOTIFY ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_NOTIFY*)0xF01186A0u)) /* lint --e(923)*/

/** 186C4, FIFO0 FIFO0 FIFO0 Interrupt Enable Register */
#define GTM_PSM_FIFO0_CH_IRQ6_IRQ_EN ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_EN*)0xF01186C4u)) /* lint --e(923)*/

/** 186C8, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_PSM_FIFO0_CH_IRQ6_IRQ_FORCINT ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_FORCINT*)0xF01186C8u)) /* lint --e(923)*/

/** 186CC, FIFO0 Channel IRQ Mode Control Register */
#define GTM_PSM_FIFO0_CH_IRQ6_IRQ_MODE ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_MODE*)0xF01186CCu)) /* lint --e(923)*/

/** 186C0, FIFO0 Channel Interrupt Notification Register */
#define GTM_PSM_FIFO0_CH_IRQ6_IRQ_NOTIFY ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_NOTIFY*)0xF01186C0u)) /* lint --e(923)*/

/** 186E4, FIFO0 FIFO0 FIFO0 Interrupt Enable Register */
#define GTM_PSM_FIFO0_CH_IRQ7_IRQ_EN ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_EN*)0xF01186E4u)) /* lint --e(923)*/

/** 186E8, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_PSM_FIFO0_CH_IRQ7_IRQ_FORCINT ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_FORCINT*)0xF01186E8u)) /* lint --e(923)*/

/** 186EC, FIFO0 Channel IRQ Mode Control Register */
#define GTM_PSM_FIFO0_CH_IRQ7_IRQ_MODE ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_MODE*)0xF01186ECu)) /* lint --e(923)*/

/** 186E0, FIFO0 Channel Interrupt Notification Register */
#define GTM_PSM_FIFO0_CH_IRQ7_IRQ_NOTIFY ((*(volatile Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_NOTIFY*)0xF01186E0u)) /* lint --e(923)*/

/** 18504, FIFO0 Channel Read Pointer Register */
#define GTM_PSM_FIFO0_CH_PTR0_RD_PTR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_PTR_RD_PTR*)0xF0118504u)) /* lint --e(923)*/

/** 18500, FIFO0 Channel Write Pointer Register */
#define GTM_PSM_FIFO0_CH_PTR0_WR_PTR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_PTR_WR_PTR*)0xF0118500u)) /* lint --e(923)*/

/** 18524, FIFO0 Channel Read Pointer Register */
#define GTM_PSM_FIFO0_CH_PTR1_RD_PTR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_PTR_RD_PTR*)0xF0118524u)) /* lint --e(923)*/

/** 18520, FIFO0 Channel Write Pointer Register */
#define GTM_PSM_FIFO0_CH_PTR1_WR_PTR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_PTR_WR_PTR*)0xF0118520u)) /* lint --e(923)*/

/** 18544, FIFO0 Channel Read Pointer Register */
#define GTM_PSM_FIFO0_CH_PTR2_RD_PTR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_PTR_RD_PTR*)0xF0118544u)) /* lint --e(923)*/

/** 18540, FIFO0 Channel Write Pointer Register */
#define GTM_PSM_FIFO0_CH_PTR2_WR_PTR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_PTR_WR_PTR*)0xF0118540u)) /* lint --e(923)*/

/** 18564, FIFO0 Channel Read Pointer Register */
#define GTM_PSM_FIFO0_CH_PTR3_RD_PTR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_PTR_RD_PTR*)0xF0118564u)) /* lint --e(923)*/

/** 18560, FIFO0 Channel Write Pointer Register */
#define GTM_PSM_FIFO0_CH_PTR3_WR_PTR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_PTR_WR_PTR*)0xF0118560u)) /* lint --e(923)*/

/** 18584, FIFO0 Channel Read Pointer Register */
#define GTM_PSM_FIFO0_CH_PTR4_RD_PTR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_PTR_RD_PTR*)0xF0118584u)) /* lint --e(923)*/

/** 18580, FIFO0 Channel Write Pointer Register */
#define GTM_PSM_FIFO0_CH_PTR4_WR_PTR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_PTR_WR_PTR*)0xF0118580u)) /* lint --e(923)*/

/** 185A4, FIFO0 Channel Read Pointer Register */
#define GTM_PSM_FIFO0_CH_PTR5_RD_PTR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_PTR_RD_PTR*)0xF01185A4u)) /* lint --e(923)*/

/** 185A0, FIFO0 Channel Write Pointer Register */
#define GTM_PSM_FIFO0_CH_PTR5_WR_PTR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_PTR_WR_PTR*)0xF01185A0u)) /* lint --e(923)*/

/** 185C4, FIFO0 Channel Read Pointer Register */
#define GTM_PSM_FIFO0_CH_PTR6_RD_PTR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_PTR_RD_PTR*)0xF01185C4u)) /* lint --e(923)*/

/** 185C0, FIFO0 Channel Write Pointer Register */
#define GTM_PSM_FIFO0_CH_PTR6_WR_PTR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_PTR_WR_PTR*)0xF01185C0u)) /* lint --e(923)*/

/** 185E4, FIFO0 Channel Read Pointer Register */
#define GTM_PSM_FIFO0_CH_PTR7_RD_PTR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_PTR_RD_PTR*)0xF01185E4u)) /* lint --e(923)*/

/** 185E0, FIFO0 Channel Write Pointer Register */
#define GTM_PSM_FIFO0_CH_PTR7_WR_PTR ((*(volatile Ifx_GTM_PSM_FIFO0_CH_PTR_WR_PTR*)0xF01185E0u)) /* lint --e(923)*/

/** 0, GTM Version Control Register */
#define GTM_REV ((*(volatile Ifx_GTM_REV*)0xF0100000u)) /* lint --e(923)*/

/** 4, GTM Global Reset Register */
#define GTM_RST ((*(volatile Ifx_GTM_RST*)0xF0100004u)) /* lint --e(923)*/

/** 800, SPE Control Status Register */
#define GTM_SPE0_CTRL_STAT ((*(volatile Ifx_GTM_SPE_CTRL_STAT*)0xF0100800u)) /* lint --e(923)*/

/** 830, SPE Interrupt Enable Register */
#define GTM_SPE0_IRQ_EN ((*(volatile Ifx_GTM_SPE_IRQ_EN*)0xF0100830u)) /* lint --e(923)*/

/** 834, SPE Interrupt Generation by Software */
#define GTM_SPE0_IRQ_FORCINT ((*(volatile Ifx_GTM_SPE_IRQ_FORCINT*)0xF0100834u)) /* lint --e(923)*/

/** 838, SPE IRQ Mode Configuration Register */
#define GTM_SPE0_IRQ_MODE ((*(volatile Ifx_GTM_SPE_IRQ_MODE*)0xF0100838u)) /* lint --e(923)*/

/** 82C, SPE Interrupt Notification Register */
#define GTM_SPE0_IRQ_NOTIFY ((*(volatile Ifx_GTM_SPE_IRQ_NOTIFY*)0xF010082Cu)) /* lint --e(923)*/

/** 828, SPE Output Control Register */
#define GTM_SPE0_OUT_CTRL ((*(volatile Ifx_GTM_SPE_OUT_CTRL*)0xF0100828u)) /* lint --e(923)*/

/** 808, SPE Output Definition Register r */
#define GTM_SPE0_OUT_PAT0 ((*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100808u)) /* lint --e(923)*/

/** 80C, SPE Output Definition Register r */
#define GTM_SPE0_OUT_PAT1 ((*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010080Cu)) /* lint --e(923)*/

/** 810, SPE Output Definition Register r */
#define GTM_SPE0_OUT_PAT2 ((*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100810u)) /* lint --e(923)*/

/** 814, SPE Output Definition Register r */
#define GTM_SPE0_OUT_PAT3 ((*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100814u)) /* lint --e(923)*/

/** 818, SPE Output Definition Register r */
#define GTM_SPE0_OUT_PAT4 ((*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100818u)) /* lint --e(923)*/

/** 81C, SPE Output Definition Register r */
#define GTM_SPE0_OUT_PAT5 ((*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010081Cu)) /* lint --e(923)*/

/** 820, SPE Output Definition Register r */
#define GTM_SPE0_OUT_PAT6 ((*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100820u)) /* lint --e(923)*/

/** 824, SPE Output Definition Register r */
#define GTM_SPE0_OUT_PAT7 ((*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100824u)) /* lint --e(923)*/

/** 804, SPE Input Pattern Definition Register */
#define GTM_SPE0_PAT ((*(volatile Ifx_GTM_SPE_PAT*)0xF0100804u)) /* lint --e(923)*/

/** 880, SPE Control Status Register */
#define GTM_SPE1_CTRL_STAT ((*(volatile Ifx_GTM_SPE_CTRL_STAT*)0xF0100880u)) /* lint --e(923)*/

/** 8B0, SPE Interrupt Enable Register */
#define GTM_SPE1_IRQ_EN ((*(volatile Ifx_GTM_SPE_IRQ_EN*)0xF01008B0u)) /* lint --e(923)*/

/** 8B4, SPE Interrupt Generation by Software */
#define GTM_SPE1_IRQ_FORCINT ((*(volatile Ifx_GTM_SPE_IRQ_FORCINT*)0xF01008B4u)) /* lint --e(923)*/

/** 8B8, SPE IRQ Mode Configuration Register */
#define GTM_SPE1_IRQ_MODE ((*(volatile Ifx_GTM_SPE_IRQ_MODE*)0xF01008B8u)) /* lint --e(923)*/

/** 8AC, SPE Interrupt Notification Register */
#define GTM_SPE1_IRQ_NOTIFY ((*(volatile Ifx_GTM_SPE_IRQ_NOTIFY*)0xF01008ACu)) /* lint --e(923)*/

/** 8A8, SPE Output Control Register */
#define GTM_SPE1_OUT_CTRL ((*(volatile Ifx_GTM_SPE_OUT_CTRL*)0xF01008A8u)) /* lint --e(923)*/

/** 888, SPE Output Definition Register r */
#define GTM_SPE1_OUT_PAT0 ((*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100888u)) /* lint --e(923)*/

/** 88C, SPE Output Definition Register r */
#define GTM_SPE1_OUT_PAT1 ((*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010088Cu)) /* lint --e(923)*/

/** 890, SPE Output Definition Register r */
#define GTM_SPE1_OUT_PAT2 ((*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100890u)) /* lint --e(923)*/

/** 894, SPE Output Definition Register r */
#define GTM_SPE1_OUT_PAT3 ((*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100894u)) /* lint --e(923)*/

/** 898, SPE Output Definition Register r */
#define GTM_SPE1_OUT_PAT4 ((*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100898u)) /* lint --e(923)*/

/** 89C, SPE Output Definition Register r */
#define GTM_SPE1_OUT_PAT5 ((*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010089Cu)) /* lint --e(923)*/

/** 8A0, SPE Output Definition Register r */
#define GTM_SPE1_OUT_PAT6 ((*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF01008A0u)) /* lint --e(923)*/

/** 8A4, SPE Output Definition Register r */
#define GTM_SPE1_OUT_PAT7 ((*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF01008A4u)) /* lint --e(923)*/

/** 884, SPE Input Pattern Definition Register */
#define GTM_SPE1_PAT ((*(volatile Ifx_GTM_SPE_PAT*)0xF0100884u)) /* lint --e(923)*/

/** 108, TBU Channel 0 Base Register */
#define GTM_TBU_CH0_BASE ((*(volatile Ifx_GTM_TBU_CH0_BASE*)0xF0100108u)) /* lint --e(923)*/

/** 104, TBU Channel 0 Control Register */
#define GTM_TBU_CH0_CTRL ((*(volatile Ifx_GTM_TBU_CH0_CTRL*)0xF0100104u)) /* lint --e(923)*/

/** 110, TBU Channel 1 Base Register */
#define GTM_TBU_CH1_BASE ((*(volatile Ifx_GTM_TBU_CH1_BASE*)0xF0100110u)) /* lint --e(923)*/

/** 10C, TBU Channel 1 Control Register */
#define GTM_TBU_CH1_CTRL ((*(volatile Ifx_GTM_TBU_CH1_CTRL*)0xF010010Cu)) /* lint --e(923)*/

/** 118, TBU Channel 2 Base Register */
#define GTM_TBU_CH2_BASE ((*(volatile Ifx_GTM_TBU_CH2_BASE*)0xF0100118u)) /* lint --e(923)*/

/** 114, TBU Channel 2 Control Register */
#define GTM_TBU_CH2_CTRL ((*(volatile Ifx_GTM_TBU_CH2_CTRL*)0xF0100114u)) /* lint --e(923)*/

/** 100, TBU Global Channel Enable Register */
#define GTM_TBU_CHEN ((*(volatile Ifx_GTM_TBU_CHEN*)0xF0100100u)) /* lint --e(923)*/

/** 1018, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH0_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101018u)) /* lint --e(923)*/

/** 101C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH0_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010101Cu)) /* lint --e(923)*/

/** 1000, TIM Channel Control Register */
#define GTM_TIM0_CH0_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101000u)) /* lint --e(923)*/

/** 1008, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH0_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101008u)) /* lint --e(923)*/

/** 1004, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH0_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101004u)) /* lint --e(923)*/

/** 1010, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH0_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101010u)) /* lint --e(923)*/

/** 1014, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH0_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101014u)) /* lint --e(923)*/

/** 1024, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH0_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101024u)) /* lint --e(923)*/

/** 1028, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH0_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101028u)) /* lint --e(923)*/

/** 102C, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH0_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010102Cu)) /* lint --e(923)*/

/** 1020, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH0_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101020u)) /* lint --e(923)*/

/** 100C, TIM Channel TDU Control Register */
#define GTM_TIM0_CH0_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010100Cu)) /* lint --e(923)*/

/** 1098, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH1_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101098u)) /* lint --e(923)*/

/** 109C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH1_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010109Cu)) /* lint --e(923)*/

/** 1080, TIM Channel Control Register */
#define GTM_TIM0_CH1_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101080u)) /* lint --e(923)*/

/** 1088, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH1_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101088u)) /* lint --e(923)*/

/** 1084, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH1_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101084u)) /* lint --e(923)*/

/** 1090, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH1_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101090u)) /* lint --e(923)*/

/** 1094, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH1_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101094u)) /* lint --e(923)*/

/** 10A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH1_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01010A4u)) /* lint --e(923)*/

/** 10A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH1_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01010A8u)) /* lint --e(923)*/

/** 10AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH1_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01010ACu)) /* lint --e(923)*/

/** 10A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH1_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01010A0u)) /* lint --e(923)*/

/** 108C, TIM Channel TDU Control Register */
#define GTM_TIM0_CH1_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010108Cu)) /* lint --e(923)*/

/** 1118, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH2_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101118u)) /* lint --e(923)*/

/** 111C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH2_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010111Cu)) /* lint --e(923)*/

/** 1100, TIM Channel Control Register */
#define GTM_TIM0_CH2_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101100u)) /* lint --e(923)*/

/** 1108, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH2_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101108u)) /* lint --e(923)*/

/** 1104, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH2_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101104u)) /* lint --e(923)*/

/** 1110, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH2_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101110u)) /* lint --e(923)*/

/** 1114, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH2_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101114u)) /* lint --e(923)*/

/** 1124, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH2_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101124u)) /* lint --e(923)*/

/** 1128, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH2_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101128u)) /* lint --e(923)*/

/** 112C, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH2_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010112Cu)) /* lint --e(923)*/

/** 1120, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH2_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101120u)) /* lint --e(923)*/

/** 110C, TIM Channel TDU Control Register */
#define GTM_TIM0_CH2_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010110Cu)) /* lint --e(923)*/

/** 1198, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH3_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101198u)) /* lint --e(923)*/

/** 119C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH3_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010119Cu)) /* lint --e(923)*/

/** 1180, TIM Channel Control Register */
#define GTM_TIM0_CH3_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101180u)) /* lint --e(923)*/

/** 1188, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH3_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101188u)) /* lint --e(923)*/

/** 1184, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH3_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101184u)) /* lint --e(923)*/

/** 1190, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH3_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101190u)) /* lint --e(923)*/

/** 1194, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH3_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101194u)) /* lint --e(923)*/

/** 11A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH3_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01011A4u)) /* lint --e(923)*/

/** 11A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH3_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01011A8u)) /* lint --e(923)*/

/** 11AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH3_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01011ACu)) /* lint --e(923)*/

/** 11A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH3_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01011A0u)) /* lint --e(923)*/

/** 118C, TIM Channel TDU Control Register */
#define GTM_TIM0_CH3_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010118Cu)) /* lint --e(923)*/

/** 1218, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH4_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101218u)) /* lint --e(923)*/

/** 121C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH4_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010121Cu)) /* lint --e(923)*/

/** 1200, TIM Channel Control Register */
#define GTM_TIM0_CH4_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101200u)) /* lint --e(923)*/

/** 1208, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH4_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101208u)) /* lint --e(923)*/

/** 1204, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH4_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101204u)) /* lint --e(923)*/

/** 1210, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH4_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101210u)) /* lint --e(923)*/

/** 1214, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH4_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101214u)) /* lint --e(923)*/

/** 1224, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH4_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101224u)) /* lint --e(923)*/

/** 1228, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH4_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101228u)) /* lint --e(923)*/

/** 122C, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH4_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010122Cu)) /* lint --e(923)*/

/** 1220, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH4_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101220u)) /* lint --e(923)*/

/** 120C, TIM Channel TDU Control Register */
#define GTM_TIM0_CH4_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010120Cu)) /* lint --e(923)*/

/** 1298, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH5_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101298u)) /* lint --e(923)*/

/** 129C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH5_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010129Cu)) /* lint --e(923)*/

/** 1280, TIM Channel Control Register */
#define GTM_TIM0_CH5_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101280u)) /* lint --e(923)*/

/** 1288, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH5_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101288u)) /* lint --e(923)*/

/** 1284, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH5_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101284u)) /* lint --e(923)*/

/** 1290, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH5_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101290u)) /* lint --e(923)*/

/** 1294, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH5_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101294u)) /* lint --e(923)*/

/** 12A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH5_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01012A4u)) /* lint --e(923)*/

/** 12A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH5_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01012A8u)) /* lint --e(923)*/

/** 12AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH5_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01012ACu)) /* lint --e(923)*/

/** 12A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH5_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01012A0u)) /* lint --e(923)*/

/** 128C, TIM Channel TDU Control Register */
#define GTM_TIM0_CH5_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010128Cu)) /* lint --e(923)*/

/** 1318, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH6_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101318u)) /* lint --e(923)*/

/** 131C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH6_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010131Cu)) /* lint --e(923)*/

/** 1300, TIM Channel Control Register */
#define GTM_TIM0_CH6_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101300u)) /* lint --e(923)*/

/** 1308, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH6_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101308u)) /* lint --e(923)*/

/** 1304, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH6_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101304u)) /* lint --e(923)*/

/** 1310, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH6_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101310u)) /* lint --e(923)*/

/** 1314, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH6_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101314u)) /* lint --e(923)*/

/** 1324, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH6_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101324u)) /* lint --e(923)*/

/** 1328, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH6_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101328u)) /* lint --e(923)*/

/** 132C, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH6_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010132Cu)) /* lint --e(923)*/

/** 1320, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH6_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101320u)) /* lint --e(923)*/

/** 130C, TIM Channel TDU Control Register */
#define GTM_TIM0_CH6_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010130Cu)) /* lint --e(923)*/

/** 1398, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH7_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101398u)) /* lint --e(923)*/

/** 139C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH7_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010139Cu)) /* lint --e(923)*/

/** 1380, TIM Channel Control Register */
#define GTM_TIM0_CH7_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101380u)) /* lint --e(923)*/

/** 1388, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH7_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101388u)) /* lint --e(923)*/

/** 1384, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH7_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101384u)) /* lint --e(923)*/

/** 1390, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH7_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101390u)) /* lint --e(923)*/

/** 1394, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH7_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101394u)) /* lint --e(923)*/

/** 13A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH7_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01013A4u)) /* lint --e(923)*/

/** 13A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH7_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01013A8u)) /* lint --e(923)*/

/** 13AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH7_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01013ACu)) /* lint --e(923)*/

/** 13A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH7_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01013A0u)) /* lint --e(923)*/

/** 138C, TIM Channel TDU Control Register */
#define GTM_TIM0_CH7_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010138Cu)) /* lint --e(923)*/

/** 1400, TIM Global Software Reset Register */
#define GTM_TIM0_RST ((*(volatile Ifx_GTM_TIM_RST*)0xF0101400u)) /* lint --e(923)*/

/** 1818, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH0_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101818u)) /* lint --e(923)*/

/** 181C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH0_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010181Cu)) /* lint --e(923)*/

/** 1800, TIM Channel Control Register */
#define GTM_TIM1_CH0_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101800u)) /* lint --e(923)*/

/** 1808, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH0_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101808u)) /* lint --e(923)*/

/** 1804, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH0_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101804u)) /* lint --e(923)*/

/** 1810, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH0_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101810u)) /* lint --e(923)*/

/** 1814, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH0_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101814u)) /* lint --e(923)*/

/** 1824, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH0_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101824u)) /* lint --e(923)*/

/** 1828, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH0_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101828u)) /* lint --e(923)*/

/** 182C, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH0_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010182Cu)) /* lint --e(923)*/

/** 1820, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH0_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101820u)) /* lint --e(923)*/

/** 180C, TIM Channel TDU Control Register */
#define GTM_TIM1_CH0_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010180Cu)) /* lint --e(923)*/

/** 1898, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH1_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101898u)) /* lint --e(923)*/

/** 189C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH1_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010189Cu)) /* lint --e(923)*/

/** 1880, TIM Channel Control Register */
#define GTM_TIM1_CH1_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101880u)) /* lint --e(923)*/

/** 1888, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH1_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101888u)) /* lint --e(923)*/

/** 1884, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH1_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101884u)) /* lint --e(923)*/

/** 1890, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH1_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101890u)) /* lint --e(923)*/

/** 1894, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH1_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101894u)) /* lint --e(923)*/

/** 18A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH1_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01018A4u)) /* lint --e(923)*/

/** 18A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH1_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01018A8u)) /* lint --e(923)*/

/** 18AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH1_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01018ACu)) /* lint --e(923)*/

/** 18A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH1_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01018A0u)) /* lint --e(923)*/

/** 188C, TIM Channel TDU Control Register */
#define GTM_TIM1_CH1_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010188Cu)) /* lint --e(923)*/

/** 1918, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH2_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101918u)) /* lint --e(923)*/

/** 191C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH2_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010191Cu)) /* lint --e(923)*/

/** 1900, TIM Channel Control Register */
#define GTM_TIM1_CH2_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101900u)) /* lint --e(923)*/

/** 1908, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH2_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101908u)) /* lint --e(923)*/

/** 1904, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH2_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101904u)) /* lint --e(923)*/

/** 1910, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH2_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101910u)) /* lint --e(923)*/

/** 1914, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH2_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101914u)) /* lint --e(923)*/

/** 1924, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH2_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101924u)) /* lint --e(923)*/

/** 1928, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH2_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101928u)) /* lint --e(923)*/

/** 192C, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH2_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010192Cu)) /* lint --e(923)*/

/** 1920, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH2_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101920u)) /* lint --e(923)*/

/** 190C, TIM Channel TDU Control Register */
#define GTM_TIM1_CH2_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010190Cu)) /* lint --e(923)*/

/** 1998, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH3_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101998u)) /* lint --e(923)*/

/** 199C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH3_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010199Cu)) /* lint --e(923)*/

/** 1980, TIM Channel Control Register */
#define GTM_TIM1_CH3_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101980u)) /* lint --e(923)*/

/** 1988, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH3_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101988u)) /* lint --e(923)*/

/** 1984, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH3_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101984u)) /* lint --e(923)*/

/** 1990, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH3_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101990u)) /* lint --e(923)*/

/** 1994, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH3_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101994u)) /* lint --e(923)*/

/** 19A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH3_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01019A4u)) /* lint --e(923)*/

/** 19A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH3_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01019A8u)) /* lint --e(923)*/

/** 19AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH3_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01019ACu)) /* lint --e(923)*/

/** 19A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH3_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01019A0u)) /* lint --e(923)*/

/** 198C, TIM Channel TDU Control Register */
#define GTM_TIM1_CH3_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010198Cu)) /* lint --e(923)*/

/** 1A18, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH4_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101A18u)) /* lint --e(923)*/

/** 1A1C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH4_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101A1Cu)) /* lint --e(923)*/

/** 1A00, TIM Channel Control Register */
#define GTM_TIM1_CH4_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101A00u)) /* lint --e(923)*/

/** 1A08, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH4_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101A08u)) /* lint --e(923)*/

/** 1A04, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH4_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101A04u)) /* lint --e(923)*/

/** 1A10, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH4_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101A10u)) /* lint --e(923)*/

/** 1A14, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH4_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101A14u)) /* lint --e(923)*/

/** 1A24, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH4_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101A24u)) /* lint --e(923)*/

/** 1A28, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH4_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101A28u)) /* lint --e(923)*/

/** 1A2C, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH4_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101A2Cu)) /* lint --e(923)*/

/** 1A20, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH4_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101A20u)) /* lint --e(923)*/

/** 1A0C, TIM Channel TDU Control Register */
#define GTM_TIM1_CH4_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF0101A0Cu)) /* lint --e(923)*/

/** 1A98, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH5_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101A98u)) /* lint --e(923)*/

/** 1A9C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH5_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101A9Cu)) /* lint --e(923)*/

/** 1A80, TIM Channel Control Register */
#define GTM_TIM1_CH5_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101A80u)) /* lint --e(923)*/

/** 1A88, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH5_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101A88u)) /* lint --e(923)*/

/** 1A84, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH5_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101A84u)) /* lint --e(923)*/

/** 1A90, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH5_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101A90u)) /* lint --e(923)*/

/** 1A94, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH5_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101A94u)) /* lint --e(923)*/

/** 1AA4, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH5_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101AA4u)) /* lint --e(923)*/

/** 1AA8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH5_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101AA8u)) /* lint --e(923)*/

/** 1AAC, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH5_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101AACu)) /* lint --e(923)*/

/** 1AA0, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH5_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101AA0u)) /* lint --e(923)*/

/** 1A8C, TIM Channel TDU Control Register */
#define GTM_TIM1_CH5_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF0101A8Cu)) /* lint --e(923)*/

/** 1B18, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH6_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101B18u)) /* lint --e(923)*/

/** 1B1C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH6_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101B1Cu)) /* lint --e(923)*/

/** 1B00, TIM Channel Control Register */
#define GTM_TIM1_CH6_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101B00u)) /* lint --e(923)*/

/** 1B08, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH6_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101B08u)) /* lint --e(923)*/

/** 1B04, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH6_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101B04u)) /* lint --e(923)*/

/** 1B10, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH6_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101B10u)) /* lint --e(923)*/

/** 1B14, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH6_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101B14u)) /* lint --e(923)*/

/** 1B24, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH6_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101B24u)) /* lint --e(923)*/

/** 1B28, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH6_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101B28u)) /* lint --e(923)*/

/** 1B2C, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH6_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101B2Cu)) /* lint --e(923)*/

/** 1B20, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH6_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101B20u)) /* lint --e(923)*/

/** 1B0C, TIM Channel TDU Control Register */
#define GTM_TIM1_CH6_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF0101B0Cu)) /* lint --e(923)*/

/** 1B98, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH7_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101B98u)) /* lint --e(923)*/

/** 1B9C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH7_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101B9Cu)) /* lint --e(923)*/

/** 1B80, TIM Channel Control Register */
#define GTM_TIM1_CH7_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101B80u)) /* lint --e(923)*/

/** 1B88, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH7_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101B88u)) /* lint --e(923)*/

/** 1B84, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH7_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101B84u)) /* lint --e(923)*/

/** 1B90, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH7_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101B90u)) /* lint --e(923)*/

/** 1B94, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH7_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101B94u)) /* lint --e(923)*/

/** 1BA4, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH7_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101BA4u)) /* lint --e(923)*/

/** 1BA8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH7_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101BA8u)) /* lint --e(923)*/

/** 1BAC, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH7_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101BACu)) /* lint --e(923)*/

/** 1BA0, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH7_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101BA0u)) /* lint --e(923)*/

/** 1B8C, TIM Channel TDU Control Register */
#define GTM_TIM1_CH7_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF0101B8Cu)) /* lint --e(923)*/

/** 1C00, TIM Global Software Reset Register */
#define GTM_TIM1_RST ((*(volatile Ifx_GTM_TIM_RST*)0xF0101C00u)) /* lint --e(923)*/

/** 2018, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH0_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102018u)) /* lint --e(923)*/

/** 201C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH0_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010201Cu)) /* lint --e(923)*/

/** 2000, TIM Channel Control Register */
#define GTM_TIM2_CH0_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102000u)) /* lint --e(923)*/

/** 2008, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH0_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102008u)) /* lint --e(923)*/

/** 2004, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH0_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102004u)) /* lint --e(923)*/

/** 2010, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH0_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102010u)) /* lint --e(923)*/

/** 2014, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH0_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102014u)) /* lint --e(923)*/

/** 2024, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH0_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102024u)) /* lint --e(923)*/

/** 2028, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH0_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102028u)) /* lint --e(923)*/

/** 202C, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH0_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010202Cu)) /* lint --e(923)*/

/** 2020, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH0_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102020u)) /* lint --e(923)*/

/** 200C, TIM Channel TDU Control Register */
#define GTM_TIM2_CH0_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010200Cu)) /* lint --e(923)*/

/** 2098, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH1_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102098u)) /* lint --e(923)*/

/** 209C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH1_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010209Cu)) /* lint --e(923)*/

/** 2080, TIM Channel Control Register */
#define GTM_TIM2_CH1_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102080u)) /* lint --e(923)*/

/** 2088, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH1_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102088u)) /* lint --e(923)*/

/** 2084, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH1_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102084u)) /* lint --e(923)*/

/** 2090, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH1_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102090u)) /* lint --e(923)*/

/** 2094, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH1_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102094u)) /* lint --e(923)*/

/** 20A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH1_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01020A4u)) /* lint --e(923)*/

/** 20A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH1_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01020A8u)) /* lint --e(923)*/

/** 20AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH1_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01020ACu)) /* lint --e(923)*/

/** 20A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH1_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01020A0u)) /* lint --e(923)*/

/** 208C, TIM Channel TDU Control Register */
#define GTM_TIM2_CH1_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010208Cu)) /* lint --e(923)*/

/** 2118, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH2_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102118u)) /* lint --e(923)*/

/** 211C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH2_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010211Cu)) /* lint --e(923)*/

/** 2100, TIM Channel Control Register */
#define GTM_TIM2_CH2_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102100u)) /* lint --e(923)*/

/** 2108, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH2_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102108u)) /* lint --e(923)*/

/** 2104, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH2_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102104u)) /* lint --e(923)*/

/** 2110, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH2_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102110u)) /* lint --e(923)*/

/** 2114, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH2_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102114u)) /* lint --e(923)*/

/** 2124, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH2_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102124u)) /* lint --e(923)*/

/** 2128, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH2_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102128u)) /* lint --e(923)*/

/** 212C, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH2_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010212Cu)) /* lint --e(923)*/

/** 2120, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH2_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102120u)) /* lint --e(923)*/

/** 210C, TIM Channel TDU Control Register */
#define GTM_TIM2_CH2_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010210Cu)) /* lint --e(923)*/

/** 2198, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH3_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102198u)) /* lint --e(923)*/

/** 219C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH3_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010219Cu)) /* lint --e(923)*/

/** 2180, TIM Channel Control Register */
#define GTM_TIM2_CH3_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102180u)) /* lint --e(923)*/

/** 2188, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH3_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102188u)) /* lint --e(923)*/

/** 2184, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH3_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102184u)) /* lint --e(923)*/

/** 2190, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH3_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102190u)) /* lint --e(923)*/

/** 2194, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH3_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102194u)) /* lint --e(923)*/

/** 21A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH3_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01021A4u)) /* lint --e(923)*/

/** 21A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH3_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01021A8u)) /* lint --e(923)*/

/** 21AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH3_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01021ACu)) /* lint --e(923)*/

/** 21A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH3_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01021A0u)) /* lint --e(923)*/

/** 218C, TIM Channel TDU Control Register */
#define GTM_TIM2_CH3_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010218Cu)) /* lint --e(923)*/

/** 2218, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH4_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102218u)) /* lint --e(923)*/

/** 221C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH4_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010221Cu)) /* lint --e(923)*/

/** 2200, TIM Channel Control Register */
#define GTM_TIM2_CH4_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102200u)) /* lint --e(923)*/

/** 2208, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH4_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102208u)) /* lint --e(923)*/

/** 2204, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH4_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102204u)) /* lint --e(923)*/

/** 2210, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH4_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102210u)) /* lint --e(923)*/

/** 2214, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH4_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102214u)) /* lint --e(923)*/

/** 2224, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH4_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102224u)) /* lint --e(923)*/

/** 2228, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH4_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102228u)) /* lint --e(923)*/

/** 222C, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH4_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010222Cu)) /* lint --e(923)*/

/** 2220, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH4_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102220u)) /* lint --e(923)*/

/** 220C, TIM Channel TDU Control Register */
#define GTM_TIM2_CH4_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010220Cu)) /* lint --e(923)*/

/** 2298, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH5_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102298u)) /* lint --e(923)*/

/** 229C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH5_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010229Cu)) /* lint --e(923)*/

/** 2280, TIM Channel Control Register */
#define GTM_TIM2_CH5_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102280u)) /* lint --e(923)*/

/** 2288, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH5_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102288u)) /* lint --e(923)*/

/** 2284, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH5_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102284u)) /* lint --e(923)*/

/** 2290, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH5_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102290u)) /* lint --e(923)*/

/** 2294, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH5_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102294u)) /* lint --e(923)*/

/** 22A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH5_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01022A4u)) /* lint --e(923)*/

/** 22A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH5_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01022A8u)) /* lint --e(923)*/

/** 22AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH5_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01022ACu)) /* lint --e(923)*/

/** 22A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH5_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01022A0u)) /* lint --e(923)*/

/** 228C, TIM Channel TDU Control Register */
#define GTM_TIM2_CH5_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010228Cu)) /* lint --e(923)*/

/** 2318, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH6_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102318u)) /* lint --e(923)*/

/** 231C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH6_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010231Cu)) /* lint --e(923)*/

/** 2300, TIM Channel Control Register */
#define GTM_TIM2_CH6_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102300u)) /* lint --e(923)*/

/** 2308, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH6_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102308u)) /* lint --e(923)*/

/** 2304, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH6_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102304u)) /* lint --e(923)*/

/** 2310, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH6_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102310u)) /* lint --e(923)*/

/** 2314, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH6_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102314u)) /* lint --e(923)*/

/** 2324, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH6_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102324u)) /* lint --e(923)*/

/** 2328, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH6_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102328u)) /* lint --e(923)*/

/** 232C, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH6_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010232Cu)) /* lint --e(923)*/

/** 2320, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH6_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102320u)) /* lint --e(923)*/

/** 230C, TIM Channel TDU Control Register */
#define GTM_TIM2_CH6_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010230Cu)) /* lint --e(923)*/

/** 2398, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH7_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102398u)) /* lint --e(923)*/

/** 239C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH7_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010239Cu)) /* lint --e(923)*/

/** 2380, TIM Channel Control Register */
#define GTM_TIM2_CH7_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102380u)) /* lint --e(923)*/

/** 2388, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH7_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102388u)) /* lint --e(923)*/

/** 2384, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH7_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102384u)) /* lint --e(923)*/

/** 2390, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH7_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102390u)) /* lint --e(923)*/

/** 2394, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH7_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102394u)) /* lint --e(923)*/

/** 23A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH7_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01023A4u)) /* lint --e(923)*/

/** 23A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH7_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01023A8u)) /* lint --e(923)*/

/** 23AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH7_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01023ACu)) /* lint --e(923)*/

/** 23A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH7_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01023A0u)) /* lint --e(923)*/

/** 238C, TIM Channel TDU Control Register */
#define GTM_TIM2_CH7_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010238Cu)) /* lint --e(923)*/

/** 2400, TIM Global Software Reset Register */
#define GTM_TIM2_RST ((*(volatile Ifx_GTM_TIM_RST*)0xF0102400u)) /* lint --e(923)*/

/** 2818, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH0_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102818u)) /* lint --e(923)*/

/** 281C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH0_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010281Cu)) /* lint --e(923)*/

/** 2800, TIM Channel Control Register */
#define GTM_TIM3_CH0_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102800u)) /* lint --e(923)*/

/** 2808, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH0_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102808u)) /* lint --e(923)*/

/** 2804, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH0_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102804u)) /* lint --e(923)*/

/** 2810, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH0_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102810u)) /* lint --e(923)*/

/** 2814, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH0_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102814u)) /* lint --e(923)*/

/** 2824, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH0_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102824u)) /* lint --e(923)*/

/** 2828, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH0_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102828u)) /* lint --e(923)*/

/** 282C, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH0_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010282Cu)) /* lint --e(923)*/

/** 2820, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH0_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102820u)) /* lint --e(923)*/

/** 280C, TIM Channel TDU Control Register */
#define GTM_TIM3_CH0_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010280Cu)) /* lint --e(923)*/

/** 2898, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH1_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102898u)) /* lint --e(923)*/

/** 289C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH1_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010289Cu)) /* lint --e(923)*/

/** 2880, TIM Channel Control Register */
#define GTM_TIM3_CH1_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102880u)) /* lint --e(923)*/

/** 2888, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH1_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102888u)) /* lint --e(923)*/

/** 2884, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH1_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102884u)) /* lint --e(923)*/

/** 2890, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH1_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102890u)) /* lint --e(923)*/

/** 2894, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH1_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102894u)) /* lint --e(923)*/

/** 28A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH1_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01028A4u)) /* lint --e(923)*/

/** 28A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH1_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01028A8u)) /* lint --e(923)*/

/** 28AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH1_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01028ACu)) /* lint --e(923)*/

/** 28A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH1_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01028A0u)) /* lint --e(923)*/

/** 288C, TIM Channel TDU Control Register */
#define GTM_TIM3_CH1_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010288Cu)) /* lint --e(923)*/

/** 2918, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH2_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102918u)) /* lint --e(923)*/

/** 291C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH2_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010291Cu)) /* lint --e(923)*/

/** 2900, TIM Channel Control Register */
#define GTM_TIM3_CH2_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102900u)) /* lint --e(923)*/

/** 2908, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH2_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102908u)) /* lint --e(923)*/

/** 2904, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH2_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102904u)) /* lint --e(923)*/

/** 2910, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH2_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102910u)) /* lint --e(923)*/

/** 2914, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH2_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102914u)) /* lint --e(923)*/

/** 2924, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH2_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102924u)) /* lint --e(923)*/

/** 2928, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH2_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102928u)) /* lint --e(923)*/

/** 292C, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH2_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF010292Cu)) /* lint --e(923)*/

/** 2920, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH2_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102920u)) /* lint --e(923)*/

/** 290C, TIM Channel TDU Control Register */
#define GTM_TIM3_CH2_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010290Cu)) /* lint --e(923)*/

/** 2998, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH3_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102998u)) /* lint --e(923)*/

/** 299C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH3_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF010299Cu)) /* lint --e(923)*/

/** 2980, TIM Channel Control Register */
#define GTM_TIM3_CH3_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102980u)) /* lint --e(923)*/

/** 2988, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH3_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102988u)) /* lint --e(923)*/

/** 2984, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH3_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102984u)) /* lint --e(923)*/

/** 2990, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH3_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102990u)) /* lint --e(923)*/

/** 2994, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH3_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102994u)) /* lint --e(923)*/

/** 29A4, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH3_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01029A4u)) /* lint --e(923)*/

/** 29A8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH3_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01029A8u)) /* lint --e(923)*/

/** 29AC, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH3_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01029ACu)) /* lint --e(923)*/

/** 29A0, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH3_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01029A0u)) /* lint --e(923)*/

/** 298C, TIM Channel TDU Control Register */
#define GTM_TIM3_CH3_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF010298Cu)) /* lint --e(923)*/

/** 2A18, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH4_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102A18u)) /* lint --e(923)*/

/** 2A1C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH4_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102A1Cu)) /* lint --e(923)*/

/** 2A00, TIM Channel Control Register */
#define GTM_TIM3_CH4_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102A00u)) /* lint --e(923)*/

/** 2A08, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH4_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102A08u)) /* lint --e(923)*/

/** 2A04, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH4_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102A04u)) /* lint --e(923)*/

/** 2A10, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH4_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102A10u)) /* lint --e(923)*/

/** 2A14, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH4_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102A14u)) /* lint --e(923)*/

/** 2A24, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH4_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102A24u)) /* lint --e(923)*/

/** 2A28, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH4_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102A28u)) /* lint --e(923)*/

/** 2A2C, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH4_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102A2Cu)) /* lint --e(923)*/

/** 2A20, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH4_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102A20u)) /* lint --e(923)*/

/** 2A0C, TIM Channel TDU Control Register */
#define GTM_TIM3_CH4_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF0102A0Cu)) /* lint --e(923)*/

/** 2A98, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH5_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102A98u)) /* lint --e(923)*/

/** 2A9C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH5_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102A9Cu)) /* lint --e(923)*/

/** 2A80, TIM Channel Control Register */
#define GTM_TIM3_CH5_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102A80u)) /* lint --e(923)*/

/** 2A88, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH5_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102A88u)) /* lint --e(923)*/

/** 2A84, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH5_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102A84u)) /* lint --e(923)*/

/** 2A90, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH5_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102A90u)) /* lint --e(923)*/

/** 2A94, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH5_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102A94u)) /* lint --e(923)*/

/** 2AA4, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH5_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102AA4u)) /* lint --e(923)*/

/** 2AA8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH5_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102AA8u)) /* lint --e(923)*/

/** 2AAC, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH5_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102AACu)) /* lint --e(923)*/

/** 2AA0, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH5_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102AA0u)) /* lint --e(923)*/

/** 2A8C, TIM Channel TDU Control Register */
#define GTM_TIM3_CH5_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF0102A8Cu)) /* lint --e(923)*/

/** 2B18, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH6_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102B18u)) /* lint --e(923)*/

/** 2B1C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH6_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102B1Cu)) /* lint --e(923)*/

/** 2B00, TIM Channel Control Register */
#define GTM_TIM3_CH6_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102B00u)) /* lint --e(923)*/

/** 2B08, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH6_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102B08u)) /* lint --e(923)*/

/** 2B04, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH6_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102B04u)) /* lint --e(923)*/

/** 2B10, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH6_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102B10u)) /* lint --e(923)*/

/** 2B14, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH6_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102B14u)) /* lint --e(923)*/

/** 2B24, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH6_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102B24u)) /* lint --e(923)*/

/** 2B28, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH6_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102B28u)) /* lint --e(923)*/

/** 2B2C, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH6_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102B2Cu)) /* lint --e(923)*/

/** 2B20, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH6_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102B20u)) /* lint --e(923)*/

/** 2B0C, TIM Channel TDU Control Register */
#define GTM_TIM3_CH6_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF0102B0Cu)) /* lint --e(923)*/

/** 2B98, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH7_CNT ((*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102B98u)) /* lint --e(923)*/

/** 2B9C, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH7_CNTS ((*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102B9Cu)) /* lint --e(923)*/

/** 2B80, TIM Channel Control Register */
#define GTM_TIM3_CH7_CTRL ((*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102B80u)) /* lint --e(923)*/

/** 2B88, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH7_FLT_FE ((*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102B88u)) /* lint --e(923)*/

/** 2B84, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH7_FLT_RE ((*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102B84u)) /* lint --e(923)*/

/** 2B90, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH7_GPR0 ((*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102B90u)) /* lint --e(923)*/

/** 2B94, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH7_GPR1 ((*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102B94u)) /* lint --e(923)*/

/** 2BA4, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH7_IRQ_EN ((*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102BA4u)) /* lint --e(923)*/

/** 2BA8, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH7_IRQ_FORCINT ((*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102BA8u)) /* lint --e(923)*/

/** 2BAC, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH7_IRQ_MODE ((*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102BACu)) /* lint --e(923)*/

/** 2BA0, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH7_IRQ_NOTIFY ((*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102BA0u)) /* lint --e(923)*/

/** 2B8C, TIM Channel TDU Control Register */
#define GTM_TIM3_CH7_TDU ((*(volatile Ifx_GTM_TIM_CH_TDU*)0xF0102B8Cu)) /* lint --e(923)*/

/** 2C00, TIM Global Software Reset Register */
#define GTM_TIM3_RST ((*(volatile Ifx_GTM_TIM_RST*)0xF0102C00u)) /* lint --e(923)*/

/** 9FD10, TIM  Input Select Register */
#define GTM_TIMINSEL0 ((*(volatile Ifx_GTM_TIMINSEL*)0xF019FD10u)) /* lint --e(923)*/

/** 9FD14, TIM  Input Select Register */
#define GTM_TIMINSEL1 ((*(volatile Ifx_GTM_TIMINSEL*)0xF019FD14u)) /* lint --e(923)*/

/** 9FD18, TIM  Input Select Register */
#define GTM_TIMINSEL2 ((*(volatile Ifx_GTM_TIMINSEL*)0xF019FD18u)) /* lint --e(923)*/

/** 9FD1C, TIM  Input Select Register */
#define GTM_TIMINSEL3 ((*(volatile Ifx_GTM_TIMINSEL*)0xF019FD1Cu)) /* lint --e(923)*/

/** 8088, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH0_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108088u)) /* lint --e(923)*/

/** 8090, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH0_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108090u)) /* lint --e(923)*/

/** 8084, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH0_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108084u)) /* lint --e(923)*/

/** 8080, TOM Channel Control Register’ */
#define GTM_TOM0_CH0_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108080u)) /* lint --e(923)*/

/** 80A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH0_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01080A0u)) /* lint --e(923)*/

/** 80A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH0_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01080A4u)) /* lint --e(923)*/

/** 80A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH0_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01080A8u)) /* lint --e(923)*/

/** 809C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH0_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010809Cu)) /* lint --e(923)*/

/** 808C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH0_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010808Cu)) /* lint --e(923)*/

/** 8094, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH0_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108094u)) /* lint --e(923)*/

/** 8098, TOM Channel Status Register */
#define GTM_TOM0_CH0_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108098u)) /* lint --e(923)*/

/** 8308, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH10_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108308u)) /* lint --e(923)*/

/** 8310, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH10_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108310u)) /* lint --e(923)*/

/** 8304, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH10_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108304u)) /* lint --e(923)*/

/** 8300, TOM Channel Control Register’ */
#define GTM_TOM0_CH10_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108300u)) /* lint --e(923)*/

/** 8320, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH10_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108320u)) /* lint --e(923)*/

/** 8324, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH10_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108324u)) /* lint --e(923)*/

/** 8328, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH10_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108328u)) /* lint --e(923)*/

/** 831C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH10_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010831Cu)) /* lint --e(923)*/

/** 830C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH10_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010830Cu)) /* lint --e(923)*/

/** 8314, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH10_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108314u)) /* lint --e(923)*/

/** 8318, TOM Channel Status Register */
#define GTM_TOM0_CH10_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108318u)) /* lint --e(923)*/

/** 8348, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH11_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108348u)) /* lint --e(923)*/

/** 8350, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH11_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108350u)) /* lint --e(923)*/

/** 8344, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH11_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108344u)) /* lint --e(923)*/

/** 8340, TOM Channel Control Register’ */
#define GTM_TOM0_CH11_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108340u)) /* lint --e(923)*/

/** 8360, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH11_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108360u)) /* lint --e(923)*/

/** 8364, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH11_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108364u)) /* lint --e(923)*/

/** 8368, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH11_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108368u)) /* lint --e(923)*/

/** 835C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH11_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010835Cu)) /* lint --e(923)*/

/** 834C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH11_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010834Cu)) /* lint --e(923)*/

/** 8354, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH11_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108354u)) /* lint --e(923)*/

/** 8358, TOM Channel Status Register */
#define GTM_TOM0_CH11_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108358u)) /* lint --e(923)*/

/** 8388, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH12_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108388u)) /* lint --e(923)*/

/** 8390, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH12_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108390u)) /* lint --e(923)*/

/** 8384, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH12_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108384u)) /* lint --e(923)*/

/** 8380, TOM Channel Control Register’ */
#define GTM_TOM0_CH12_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108380u)) /* lint --e(923)*/

/** 83A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH12_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01083A0u)) /* lint --e(923)*/

/** 83A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH12_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01083A4u)) /* lint --e(923)*/

/** 83A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH12_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01083A8u)) /* lint --e(923)*/

/** 839C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH12_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010839Cu)) /* lint --e(923)*/

/** 838C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH12_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010838Cu)) /* lint --e(923)*/

/** 8394, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH12_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108394u)) /* lint --e(923)*/

/** 8398, TOM Channel Status Register */
#define GTM_TOM0_CH12_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108398u)) /* lint --e(923)*/

/** 83C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH13_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01083C8u)) /* lint --e(923)*/

/** 83D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH13_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01083D0u)) /* lint --e(923)*/

/** 83C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH13_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01083C4u)) /* lint --e(923)*/

/** 83C0, TOM Channel Control Register’ */
#define GTM_TOM0_CH13_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01083C0u)) /* lint --e(923)*/

/** 83E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH13_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01083E0u)) /* lint --e(923)*/

/** 83E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH13_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01083E4u)) /* lint --e(923)*/

/** 83E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH13_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01083E8u)) /* lint --e(923)*/

/** 83DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH13_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01083DCu)) /* lint --e(923)*/

/** 83CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH13_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01083CCu)) /* lint --e(923)*/

/** 83D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH13_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01083D4u)) /* lint --e(923)*/

/** 83D8, TOM Channel Status Register */
#define GTM_TOM0_CH13_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01083D8u)) /* lint --e(923)*/

/** 8408, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH14_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108408u)) /* lint --e(923)*/

/** 8410, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH14_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108410u)) /* lint --e(923)*/

/** 8404, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH14_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108404u)) /* lint --e(923)*/

/** 8400, TOM Channel Control Register’ */
#define GTM_TOM0_CH14_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108400u)) /* lint --e(923)*/

/** 8420, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH14_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108420u)) /* lint --e(923)*/

/** 8424, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH14_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108424u)) /* lint --e(923)*/

/** 8428, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH14_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108428u)) /* lint --e(923)*/

/** 841C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH14_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010841Cu)) /* lint --e(923)*/

/** 840C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH14_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010840Cu)) /* lint --e(923)*/

/** 8414, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH14_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108414u)) /* lint --e(923)*/

/** 8418, TOM Channel Status Register */
#define GTM_TOM0_CH14_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108418u)) /* lint --e(923)*/

/** 8448, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH15_CM0 ((*(volatile Ifx_GTM_TOM_CH15_CM0*)0xF0108448u)) /* lint --e(923)*/

/** 8450, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH15_CM1 ((*(volatile Ifx_GTM_TOM_CH15_CM1*)0xF0108450u)) /* lint --e(923)*/

/** 8444, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH15_CN0 ((*(volatile Ifx_GTM_TOM_CH15_CN0*)0xF0108444u)) /* lint --e(923)*/

/** 8440, TOM Channel Control Register */
#define GTM_TOM0_CH15_CTRL ((*(volatile Ifx_GTM_TOM_CH15_CTRL*)0xF0108440u)) /* lint --e(923)*/

/** 8460, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH15_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH15_IRQ_EN*)0xF0108460u)) /* lint --e(923)*/

/** 8464, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH15_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH15_IRQ_FORCINT*)0xF0108464u)) /* lint --e(923)*/

/** 8468, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH15_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH15_IRQ_MODE*)0xF0108468u)) /* lint --e(923)*/

/** 845C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH15_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH15_IRQ_NOTIFY*)0xF010845Cu)) /* lint --e(923)*/

/** 844C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH15_SR0 ((*(volatile Ifx_GTM_TOM_CH15_SR0*)0xF010844Cu)) /* lint --e(923)*/

/** 8454, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH15_SR1 ((*(volatile Ifx_GTM_TOM_CH15_SR1*)0xF0108454u)) /* lint --e(923)*/

/** 8458, TOM Channel Status Register */
#define GTM_TOM0_CH15_STAT ((*(volatile Ifx_GTM_TOM_CH15_STAT*)0xF0108458u)) /* lint --e(923)*/

/** 80C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH1_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01080C8u)) /* lint --e(923)*/

/** 80D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH1_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01080D0u)) /* lint --e(923)*/

/** 80C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH1_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01080C4u)) /* lint --e(923)*/

/** 80C0, TOM Channel Control Register’ */
#define GTM_TOM0_CH1_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01080C0u)) /* lint --e(923)*/

/** 80E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH1_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01080E0u)) /* lint --e(923)*/

/** 80E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH1_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01080E4u)) /* lint --e(923)*/

/** 80E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH1_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01080E8u)) /* lint --e(923)*/

/** 80DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH1_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01080DCu)) /* lint --e(923)*/

/** 80CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH1_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01080CCu)) /* lint --e(923)*/

/** 80D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH1_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01080D4u)) /* lint --e(923)*/

/** 80D8, TOM Channel Status Register */
#define GTM_TOM0_CH1_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01080D8u)) /* lint --e(923)*/

/** 8108, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH2_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108108u)) /* lint --e(923)*/

/** 8110, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH2_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108110u)) /* lint --e(923)*/

/** 8104, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH2_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108104u)) /* lint --e(923)*/

/** 8100, TOM Channel Control Register’ */
#define GTM_TOM0_CH2_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108100u)) /* lint --e(923)*/

/** 8120, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH2_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108120u)) /* lint --e(923)*/

/** 8124, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH2_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108124u)) /* lint --e(923)*/

/** 8128, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH2_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108128u)) /* lint --e(923)*/

/** 811C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH2_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010811Cu)) /* lint --e(923)*/

/** 810C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH2_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010810Cu)) /* lint --e(923)*/

/** 8114, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH2_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108114u)) /* lint --e(923)*/

/** 8118, TOM Channel Status Register */
#define GTM_TOM0_CH2_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108118u)) /* lint --e(923)*/

/** 8148, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH3_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108148u)) /* lint --e(923)*/

/** 8150, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH3_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108150u)) /* lint --e(923)*/

/** 8144, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH3_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108144u)) /* lint --e(923)*/

/** 8140, TOM Channel Control Register’ */
#define GTM_TOM0_CH3_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108140u)) /* lint --e(923)*/

/** 8160, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH3_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108160u)) /* lint --e(923)*/

/** 8164, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH3_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108164u)) /* lint --e(923)*/

/** 8168, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH3_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108168u)) /* lint --e(923)*/

/** 815C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH3_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010815Cu)) /* lint --e(923)*/

/** 814C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH3_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010814Cu)) /* lint --e(923)*/

/** 8154, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH3_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108154u)) /* lint --e(923)*/

/** 8158, TOM Channel Status Register */
#define GTM_TOM0_CH3_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108158u)) /* lint --e(923)*/

/** 8188, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH4_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108188u)) /* lint --e(923)*/

/** 8190, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH4_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108190u)) /* lint --e(923)*/

/** 8184, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH4_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108184u)) /* lint --e(923)*/

/** 8180, TOM Channel Control Register’ */
#define GTM_TOM0_CH4_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108180u)) /* lint --e(923)*/

/** 81A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH4_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01081A0u)) /* lint --e(923)*/

/** 81A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH4_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01081A4u)) /* lint --e(923)*/

/** 81A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH4_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01081A8u)) /* lint --e(923)*/

/** 819C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH4_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010819Cu)) /* lint --e(923)*/

/** 818C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH4_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010818Cu)) /* lint --e(923)*/

/** 8194, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH4_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108194u)) /* lint --e(923)*/

/** 8198, TOM Channel Status Register */
#define GTM_TOM0_CH4_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108198u)) /* lint --e(923)*/

/** 81C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH5_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01081C8u)) /* lint --e(923)*/

/** 81D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH5_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01081D0u)) /* lint --e(923)*/

/** 81C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH5_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01081C4u)) /* lint --e(923)*/

/** 81C0, TOM Channel Control Register’ */
#define GTM_TOM0_CH5_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01081C0u)) /* lint --e(923)*/

/** 81E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH5_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01081E0u)) /* lint --e(923)*/

/** 81E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH5_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01081E4u)) /* lint --e(923)*/

/** 81E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH5_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01081E8u)) /* lint --e(923)*/

/** 81DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH5_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01081DCu)) /* lint --e(923)*/

/** 81CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH5_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01081CCu)) /* lint --e(923)*/

/** 81D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH5_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01081D4u)) /* lint --e(923)*/

/** 81D8, TOM Channel Status Register */
#define GTM_TOM0_CH5_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01081D8u)) /* lint --e(923)*/

/** 8208, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH6_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108208u)) /* lint --e(923)*/

/** 8210, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH6_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108210u)) /* lint --e(923)*/

/** 8204, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH6_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108204u)) /* lint --e(923)*/

/** 8200, TOM Channel Control Register’ */
#define GTM_TOM0_CH6_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108200u)) /* lint --e(923)*/

/** 8220, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH6_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108220u)) /* lint --e(923)*/

/** 8224, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH6_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108224u)) /* lint --e(923)*/

/** 8228, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH6_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108228u)) /* lint --e(923)*/

/** 821C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH6_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010821Cu)) /* lint --e(923)*/

/** 820C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH6_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010820Cu)) /* lint --e(923)*/

/** 8214, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH6_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108214u)) /* lint --e(923)*/

/** 8218, TOM Channel Status Register */
#define GTM_TOM0_CH6_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108218u)) /* lint --e(923)*/

/** 8248, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH7_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108248u)) /* lint --e(923)*/

/** 8250, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH7_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108250u)) /* lint --e(923)*/

/** 8244, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH7_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108244u)) /* lint --e(923)*/

/** 8240, TOM Channel Control Register’ */
#define GTM_TOM0_CH7_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108240u)) /* lint --e(923)*/

/** 8260, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH7_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108260u)) /* lint --e(923)*/

/** 8264, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH7_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108264u)) /* lint --e(923)*/

/** 8268, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH7_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108268u)) /* lint --e(923)*/

/** 825C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH7_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010825Cu)) /* lint --e(923)*/

/** 824C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH7_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010824Cu)) /* lint --e(923)*/

/** 8254, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH7_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108254u)) /* lint --e(923)*/

/** 8258, TOM Channel Status Register */
#define GTM_TOM0_CH7_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108258u)) /* lint --e(923)*/

/** 8288, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH8_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108288u)) /* lint --e(923)*/

/** 8290, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH8_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108290u)) /* lint --e(923)*/

/** 8284, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH8_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108284u)) /* lint --e(923)*/

/** 8280, TOM Channel Control Register’ */
#define GTM_TOM0_CH8_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108280u)) /* lint --e(923)*/

/** 82A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH8_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01082A0u)) /* lint --e(923)*/

/** 82A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH8_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01082A4u)) /* lint --e(923)*/

/** 82A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH8_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01082A8u)) /* lint --e(923)*/

/** 829C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH8_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010829Cu)) /* lint --e(923)*/

/** 828C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH8_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010828Cu)) /* lint --e(923)*/

/** 8294, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH8_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108294u)) /* lint --e(923)*/

/** 8298, TOM Channel Status Register */
#define GTM_TOM0_CH8_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108298u)) /* lint --e(923)*/

/** 82C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH9_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01082C8u)) /* lint --e(923)*/

/** 82D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH9_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01082D0u)) /* lint --e(923)*/

/** 82C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH9_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01082C4u)) /* lint --e(923)*/

/** 82C0, TOM Channel Control Register’ */
#define GTM_TOM0_CH9_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01082C0u)) /* lint --e(923)*/

/** 82E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH9_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01082E0u)) /* lint --e(923)*/

/** 82E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH9_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01082E4u)) /* lint --e(923)*/

/** 82E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH9_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01082E8u)) /* lint --e(923)*/

/** 82DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH9_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01082DCu)) /* lint --e(923)*/

/** 82CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH9_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01082CCu)) /* lint --e(923)*/

/** 82D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH9_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01082D4u)) /* lint --e(923)*/

/** 82D8, TOM Channel Status Register */
#define GTM_TOM0_CH9_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01082D8u)) /* lint --e(923)*/

/** 800C, TOM TGC Action Time Base Register */
#define GTM_TOM0_TGC0_ACT_TB ((*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF010800Cu)) /* lint --e(923)*/

/** 8004, TOM TGC Enable/Disable Control Register */
#define GTM_TOM0_TGC0_ENDIS_CTRL ((*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0108004u)) /* lint --e(923)*/

/** 8008, TOM TGC Enable/Disable Status Register */
#define GTM_TOM0_TGC0_ENDIS_STAT ((*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0108008u)) /* lint --e(923)*/

/** 8018, TOM TGC Force Update Control Register */
#define GTM_TOM0_TGC0_FUPD_CTRL ((*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0108018u)) /* lint --e(923)*/

/** 8000, TOM TGC Global Control Register */
#define GTM_TOM0_TGC0_GLB_CTRL ((*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0108000u)) /* lint --e(923)*/

/** 801C, TOM TGC Internal Trigger Control Register */
#define GTM_TOM0_TGC0_INT_TRIG ((*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010801Cu)) /* lint --e(923)*/

/** 8010, TOM TGC Output Enable Control Register */
#define GTM_TOM0_TGC0_OUTEN_CTRL ((*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0108010u)) /* lint --e(923)*/

/** 8014, TOM TGC Output Enable Status Register */
#define GTM_TOM0_TGC0_OUTEN_STAT ((*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF0108014u)) /* lint --e(923)*/

/** 804C, TOM TGC Action Time Base Register */
#define GTM_TOM0_TGC1_ACT_TB ((*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF010804Cu)) /* lint --e(923)*/

/** 8044, TOM TGC Enable/Disable Control Register */
#define GTM_TOM0_TGC1_ENDIS_CTRL ((*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0108044u)) /* lint --e(923)*/

/** 8048, TOM TGC Enable/Disable Status Register */
#define GTM_TOM0_TGC1_ENDIS_STAT ((*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0108048u)) /* lint --e(923)*/

/** 8058, TOM TGC Force Update Control Register */
#define GTM_TOM0_TGC1_FUPD_CTRL ((*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0108058u)) /* lint --e(923)*/

/** 8040, TOM TGC Global Control Register */
#define GTM_TOM0_TGC1_GLB_CTRL ((*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0108040u)) /* lint --e(923)*/

/** 805C, TOM TGC Internal Trigger Control Register */
#define GTM_TOM0_TGC1_INT_TRIG ((*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010805Cu)) /* lint --e(923)*/

/** 8050, TOM TGC Output Enable Control Register */
#define GTM_TOM0_TGC1_OUTEN_CTRL ((*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0108050u)) /* lint --e(923)*/

/** 8054, TOM TGC Output Enable Status Register */
#define GTM_TOM0_TGC1_OUTEN_STAT ((*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF0108054u)) /* lint --e(923)*/

/** 8888, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH0_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108888u)) /* lint --e(923)*/

/** 8890, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH0_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108890u)) /* lint --e(923)*/

/** 8884, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH0_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108884u)) /* lint --e(923)*/

/** 8880, TOM Channel Control Register’ */
#define GTM_TOM1_CH0_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108880u)) /* lint --e(923)*/

/** 88A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH0_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01088A0u)) /* lint --e(923)*/

/** 88A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH0_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01088A4u)) /* lint --e(923)*/

/** 88A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH0_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01088A8u)) /* lint --e(923)*/

/** 889C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH0_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010889Cu)) /* lint --e(923)*/

/** 888C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH0_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010888Cu)) /* lint --e(923)*/

/** 8894, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH0_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108894u)) /* lint --e(923)*/

/** 8898, TOM Channel Status Register */
#define GTM_TOM1_CH0_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108898u)) /* lint --e(923)*/

/** 8B08, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH10_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108B08u)) /* lint --e(923)*/

/** 8B10, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH10_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108B10u)) /* lint --e(923)*/

/** 8B04, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH10_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108B04u)) /* lint --e(923)*/

/** 8B00, TOM Channel Control Register’ */
#define GTM_TOM1_CH10_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108B00u)) /* lint --e(923)*/

/** 8B20, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH10_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108B20u)) /* lint --e(923)*/

/** 8B24, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH10_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108B24u)) /* lint --e(923)*/

/** 8B28, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH10_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108B28u)) /* lint --e(923)*/

/** 8B1C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH10_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108B1Cu)) /* lint --e(923)*/

/** 8B0C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH10_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108B0Cu)) /* lint --e(923)*/

/** 8B14, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH10_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108B14u)) /* lint --e(923)*/

/** 8B18, TOM Channel Status Register */
#define GTM_TOM1_CH10_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108B18u)) /* lint --e(923)*/

/** 8B48, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH11_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108B48u)) /* lint --e(923)*/

/** 8B50, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH11_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108B50u)) /* lint --e(923)*/

/** 8B44, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH11_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108B44u)) /* lint --e(923)*/

/** 8B40, TOM Channel Control Register’ */
#define GTM_TOM1_CH11_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108B40u)) /* lint --e(923)*/

/** 8B60, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH11_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108B60u)) /* lint --e(923)*/

/** 8B64, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH11_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108B64u)) /* lint --e(923)*/

/** 8B68, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH11_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108B68u)) /* lint --e(923)*/

/** 8B5C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH11_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108B5Cu)) /* lint --e(923)*/

/** 8B4C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH11_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108B4Cu)) /* lint --e(923)*/

/** 8B54, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH11_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108B54u)) /* lint --e(923)*/

/** 8B58, TOM Channel Status Register */
#define GTM_TOM1_CH11_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108B58u)) /* lint --e(923)*/

/** 8B88, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH12_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108B88u)) /* lint --e(923)*/

/** 8B90, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH12_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108B90u)) /* lint --e(923)*/

/** 8B84, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH12_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108B84u)) /* lint --e(923)*/

/** 8B80, TOM Channel Control Register’ */
#define GTM_TOM1_CH12_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108B80u)) /* lint --e(923)*/

/** 8BA0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH12_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108BA0u)) /* lint --e(923)*/

/** 8BA4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH12_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108BA4u)) /* lint --e(923)*/

/** 8BA8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH12_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108BA8u)) /* lint --e(923)*/

/** 8B9C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH12_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108B9Cu)) /* lint --e(923)*/

/** 8B8C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH12_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108B8Cu)) /* lint --e(923)*/

/** 8B94, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH12_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108B94u)) /* lint --e(923)*/

/** 8B98, TOM Channel Status Register */
#define GTM_TOM1_CH12_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108B98u)) /* lint --e(923)*/

/** 8BC8, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH13_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108BC8u)) /* lint --e(923)*/

/** 8BD0, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH13_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108BD0u)) /* lint --e(923)*/

/** 8BC4, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH13_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108BC4u)) /* lint --e(923)*/

/** 8BC0, TOM Channel Control Register’ */
#define GTM_TOM1_CH13_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108BC0u)) /* lint --e(923)*/

/** 8BE0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH13_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108BE0u)) /* lint --e(923)*/

/** 8BE4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH13_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108BE4u)) /* lint --e(923)*/

/** 8BE8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH13_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108BE8u)) /* lint --e(923)*/

/** 8BDC, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH13_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108BDCu)) /* lint --e(923)*/

/** 8BCC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH13_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108BCCu)) /* lint --e(923)*/

/** 8BD4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH13_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108BD4u)) /* lint --e(923)*/

/** 8BD8, TOM Channel Status Register */
#define GTM_TOM1_CH13_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108BD8u)) /* lint --e(923)*/

/** 8C08, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH14_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108C08u)) /* lint --e(923)*/

/** 8C10, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH14_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108C10u)) /* lint --e(923)*/

/** 8C04, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH14_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108C04u)) /* lint --e(923)*/

/** 8C00, TOM Channel Control Register’ */
#define GTM_TOM1_CH14_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108C00u)) /* lint --e(923)*/

/** 8C20, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH14_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108C20u)) /* lint --e(923)*/

/** 8C24, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH14_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108C24u)) /* lint --e(923)*/

/** 8C28, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH14_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108C28u)) /* lint --e(923)*/

/** 8C1C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH14_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108C1Cu)) /* lint --e(923)*/

/** 8C0C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH14_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108C0Cu)) /* lint --e(923)*/

/** 8C14, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH14_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108C14u)) /* lint --e(923)*/

/** 8C18, TOM Channel Status Register */
#define GTM_TOM1_CH14_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108C18u)) /* lint --e(923)*/

/** 8C48, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH15_CM0 ((*(volatile Ifx_GTM_TOM_CH15_CM0*)0xF0108C48u)) /* lint --e(923)*/

/** 8C50, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH15_CM1 ((*(volatile Ifx_GTM_TOM_CH15_CM1*)0xF0108C50u)) /* lint --e(923)*/

/** 8C44, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH15_CN0 ((*(volatile Ifx_GTM_TOM_CH15_CN0*)0xF0108C44u)) /* lint --e(923)*/

/** 8C40, TOM Channel Control Register */
#define GTM_TOM1_CH15_CTRL ((*(volatile Ifx_GTM_TOM_CH15_CTRL*)0xF0108C40u)) /* lint --e(923)*/

/** 8C60, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH15_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH15_IRQ_EN*)0xF0108C60u)) /* lint --e(923)*/

/** 8C64, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH15_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH15_IRQ_FORCINT*)0xF0108C64u)) /* lint --e(923)*/

/** 8C68, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH15_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH15_IRQ_MODE*)0xF0108C68u)) /* lint --e(923)*/

/** 8C5C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH15_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH15_IRQ_NOTIFY*)0xF0108C5Cu)) /* lint --e(923)*/

/** 8C4C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH15_SR0 ((*(volatile Ifx_GTM_TOM_CH15_SR0*)0xF0108C4Cu)) /* lint --e(923)*/

/** 8C54, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH15_SR1 ((*(volatile Ifx_GTM_TOM_CH15_SR1*)0xF0108C54u)) /* lint --e(923)*/

/** 8C58, TOM Channel Status Register */
#define GTM_TOM1_CH15_STAT ((*(volatile Ifx_GTM_TOM_CH15_STAT*)0xF0108C58u)) /* lint --e(923)*/

/** 88C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH1_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01088C8u)) /* lint --e(923)*/

/** 88D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH1_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01088D0u)) /* lint --e(923)*/

/** 88C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH1_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01088C4u)) /* lint --e(923)*/

/** 88C0, TOM Channel Control Register’ */
#define GTM_TOM1_CH1_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01088C0u)) /* lint --e(923)*/

/** 88E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH1_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01088E0u)) /* lint --e(923)*/

/** 88E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH1_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01088E4u)) /* lint --e(923)*/

/** 88E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH1_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01088E8u)) /* lint --e(923)*/

/** 88DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH1_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01088DCu)) /* lint --e(923)*/

/** 88CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH1_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01088CCu)) /* lint --e(923)*/

/** 88D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH1_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01088D4u)) /* lint --e(923)*/

/** 88D8, TOM Channel Status Register */
#define GTM_TOM1_CH1_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01088D8u)) /* lint --e(923)*/

/** 8908, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH2_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108908u)) /* lint --e(923)*/

/** 8910, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH2_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108910u)) /* lint --e(923)*/

/** 8904, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH2_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108904u)) /* lint --e(923)*/

/** 8900, TOM Channel Control Register’ */
#define GTM_TOM1_CH2_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108900u)) /* lint --e(923)*/

/** 8920, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH2_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108920u)) /* lint --e(923)*/

/** 8924, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH2_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108924u)) /* lint --e(923)*/

/** 8928, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH2_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108928u)) /* lint --e(923)*/

/** 891C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH2_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010891Cu)) /* lint --e(923)*/

/** 890C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH2_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010890Cu)) /* lint --e(923)*/

/** 8914, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH2_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108914u)) /* lint --e(923)*/

/** 8918, TOM Channel Status Register */
#define GTM_TOM1_CH2_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108918u)) /* lint --e(923)*/

/** 8948, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH3_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108948u)) /* lint --e(923)*/

/** 8950, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH3_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108950u)) /* lint --e(923)*/

/** 8944, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH3_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108944u)) /* lint --e(923)*/

/** 8940, TOM Channel Control Register’ */
#define GTM_TOM1_CH3_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108940u)) /* lint --e(923)*/

/** 8960, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH3_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108960u)) /* lint --e(923)*/

/** 8964, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH3_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108964u)) /* lint --e(923)*/

/** 8968, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH3_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108968u)) /* lint --e(923)*/

/** 895C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH3_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010895Cu)) /* lint --e(923)*/

/** 894C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH3_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010894Cu)) /* lint --e(923)*/

/** 8954, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH3_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108954u)) /* lint --e(923)*/

/** 8958, TOM Channel Status Register */
#define GTM_TOM1_CH3_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108958u)) /* lint --e(923)*/

/** 8988, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH4_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108988u)) /* lint --e(923)*/

/** 8990, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH4_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108990u)) /* lint --e(923)*/

/** 8984, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH4_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108984u)) /* lint --e(923)*/

/** 8980, TOM Channel Control Register’ */
#define GTM_TOM1_CH4_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108980u)) /* lint --e(923)*/

/** 89A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH4_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01089A0u)) /* lint --e(923)*/

/** 89A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH4_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01089A4u)) /* lint --e(923)*/

/** 89A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH4_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01089A8u)) /* lint --e(923)*/

/** 899C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH4_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010899Cu)) /* lint --e(923)*/

/** 898C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH4_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010898Cu)) /* lint --e(923)*/

/** 8994, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH4_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108994u)) /* lint --e(923)*/

/** 8998, TOM Channel Status Register */
#define GTM_TOM1_CH4_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108998u)) /* lint --e(923)*/

/** 89C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH5_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01089C8u)) /* lint --e(923)*/

/** 89D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH5_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01089D0u)) /* lint --e(923)*/

/** 89C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH5_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01089C4u)) /* lint --e(923)*/

/** 89C0, TOM Channel Control Register’ */
#define GTM_TOM1_CH5_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01089C0u)) /* lint --e(923)*/

/** 89E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH5_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01089E0u)) /* lint --e(923)*/

/** 89E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH5_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01089E4u)) /* lint --e(923)*/

/** 89E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH5_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01089E8u)) /* lint --e(923)*/

/** 89DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH5_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01089DCu)) /* lint --e(923)*/

/** 89CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH5_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01089CCu)) /* lint --e(923)*/

/** 89D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH5_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01089D4u)) /* lint --e(923)*/

/** 89D8, TOM Channel Status Register */
#define GTM_TOM1_CH5_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01089D8u)) /* lint --e(923)*/

/** 8A08, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH6_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108A08u)) /* lint --e(923)*/

/** 8A10, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH6_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108A10u)) /* lint --e(923)*/

/** 8A04, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH6_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108A04u)) /* lint --e(923)*/

/** 8A00, TOM Channel Control Register’ */
#define GTM_TOM1_CH6_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108A00u)) /* lint --e(923)*/

/** 8A20, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH6_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108A20u)) /* lint --e(923)*/

/** 8A24, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH6_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108A24u)) /* lint --e(923)*/

/** 8A28, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH6_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108A28u)) /* lint --e(923)*/

/** 8A1C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH6_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108A1Cu)) /* lint --e(923)*/

/** 8A0C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH6_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108A0Cu)) /* lint --e(923)*/

/** 8A14, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH6_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108A14u)) /* lint --e(923)*/

/** 8A18, TOM Channel Status Register */
#define GTM_TOM1_CH6_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108A18u)) /* lint --e(923)*/

/** 8A48, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH7_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108A48u)) /* lint --e(923)*/

/** 8A50, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH7_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108A50u)) /* lint --e(923)*/

/** 8A44, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH7_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108A44u)) /* lint --e(923)*/

/** 8A40, TOM Channel Control Register’ */
#define GTM_TOM1_CH7_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108A40u)) /* lint --e(923)*/

/** 8A60, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH7_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108A60u)) /* lint --e(923)*/

/** 8A64, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH7_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108A64u)) /* lint --e(923)*/

/** 8A68, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH7_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108A68u)) /* lint --e(923)*/

/** 8A5C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH7_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108A5Cu)) /* lint --e(923)*/

/** 8A4C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH7_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108A4Cu)) /* lint --e(923)*/

/** 8A54, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH7_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108A54u)) /* lint --e(923)*/

/** 8A58, TOM Channel Status Register */
#define GTM_TOM1_CH7_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108A58u)) /* lint --e(923)*/

/** 8A88, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH8_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108A88u)) /* lint --e(923)*/

/** 8A90, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH8_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108A90u)) /* lint --e(923)*/

/** 8A84, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH8_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108A84u)) /* lint --e(923)*/

/** 8A80, TOM Channel Control Register’ */
#define GTM_TOM1_CH8_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108A80u)) /* lint --e(923)*/

/** 8AA0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH8_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108AA0u)) /* lint --e(923)*/

/** 8AA4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH8_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108AA4u)) /* lint --e(923)*/

/** 8AA8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH8_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108AA8u)) /* lint --e(923)*/

/** 8A9C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH8_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108A9Cu)) /* lint --e(923)*/

/** 8A8C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH8_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108A8Cu)) /* lint --e(923)*/

/** 8A94, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH8_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108A94u)) /* lint --e(923)*/

/** 8A98, TOM Channel Status Register */
#define GTM_TOM1_CH8_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108A98u)) /* lint --e(923)*/

/** 8AC8, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH9_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108AC8u)) /* lint --e(923)*/

/** 8AD0, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH9_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108AD0u)) /* lint --e(923)*/

/** 8AC4, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH9_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108AC4u)) /* lint --e(923)*/

/** 8AC0, TOM Channel Control Register’ */
#define GTM_TOM1_CH9_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108AC0u)) /* lint --e(923)*/

/** 8AE0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH9_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108AE0u)) /* lint --e(923)*/

/** 8AE4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH9_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108AE4u)) /* lint --e(923)*/

/** 8AE8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH9_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108AE8u)) /* lint --e(923)*/

/** 8ADC, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH9_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108ADCu)) /* lint --e(923)*/

/** 8ACC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH9_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108ACCu)) /* lint --e(923)*/

/** 8AD4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH9_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108AD4u)) /* lint --e(923)*/

/** 8AD8, TOM Channel Status Register */
#define GTM_TOM1_CH9_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108AD8u)) /* lint --e(923)*/

/** 880C, TOM TGC Action Time Base Register */
#define GTM_TOM1_TGC0_ACT_TB ((*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF010880Cu)) /* lint --e(923)*/

/** 8804, TOM TGC Enable/Disable Control Register */
#define GTM_TOM1_TGC0_ENDIS_CTRL ((*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0108804u)) /* lint --e(923)*/

/** 8808, TOM TGC Enable/Disable Status Register */
#define GTM_TOM1_TGC0_ENDIS_STAT ((*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0108808u)) /* lint --e(923)*/

/** 8818, TOM TGC Force Update Control Register */
#define GTM_TOM1_TGC0_FUPD_CTRL ((*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0108818u)) /* lint --e(923)*/

/** 8800, TOM TGC Global Control Register */
#define GTM_TOM1_TGC0_GLB_CTRL ((*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0108800u)) /* lint --e(923)*/

/** 881C, TOM TGC Internal Trigger Control Register */
#define GTM_TOM1_TGC0_INT_TRIG ((*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010881Cu)) /* lint --e(923)*/

/** 8810, TOM TGC Output Enable Control Register */
#define GTM_TOM1_TGC0_OUTEN_CTRL ((*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0108810u)) /* lint --e(923)*/

/** 8814, TOM TGC Output Enable Status Register */
#define GTM_TOM1_TGC0_OUTEN_STAT ((*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF0108814u)) /* lint --e(923)*/

/** 884C, TOM TGC Action Time Base Register */
#define GTM_TOM1_TGC1_ACT_TB ((*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF010884Cu)) /* lint --e(923)*/

/** 8844, TOM TGC Enable/Disable Control Register */
#define GTM_TOM1_TGC1_ENDIS_CTRL ((*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0108844u)) /* lint --e(923)*/

/** 8848, TOM TGC Enable/Disable Status Register */
#define GTM_TOM1_TGC1_ENDIS_STAT ((*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0108848u)) /* lint --e(923)*/

/** 8858, TOM TGC Force Update Control Register */
#define GTM_TOM1_TGC1_FUPD_CTRL ((*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0108858u)) /* lint --e(923)*/

/** 8840, TOM TGC Global Control Register */
#define GTM_TOM1_TGC1_GLB_CTRL ((*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0108840u)) /* lint --e(923)*/

/** 885C, TOM TGC Internal Trigger Control Register */
#define GTM_TOM1_TGC1_INT_TRIG ((*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010885Cu)) /* lint --e(923)*/

/** 8850, TOM TGC Output Enable Control Register */
#define GTM_TOM1_TGC1_OUTEN_CTRL ((*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0108850u)) /* lint --e(923)*/

/** 8854, TOM TGC Output Enable Status Register */
#define GTM_TOM1_TGC1_OUTEN_STAT ((*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF0108854u)) /* lint --e(923)*/

/** 9088, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH0_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109088u)) /* lint --e(923)*/

/** 9090, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH0_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109090u)) /* lint --e(923)*/

/** 9084, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH0_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109084u)) /* lint --e(923)*/

/** 9080, TOM Channel Control Register’ */
#define GTM_TOM2_CH0_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109080u)) /* lint --e(923)*/

/** 90A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH0_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01090A0u)) /* lint --e(923)*/

/** 90A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH0_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01090A4u)) /* lint --e(923)*/

/** 90A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH0_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01090A8u)) /* lint --e(923)*/

/** 909C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH0_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010909Cu)) /* lint --e(923)*/

/** 908C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH0_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010908Cu)) /* lint --e(923)*/

/** 9094, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH0_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109094u)) /* lint --e(923)*/

/** 9098, TOM Channel Status Register */
#define GTM_TOM2_CH0_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109098u)) /* lint --e(923)*/

/** 9308, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH10_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109308u)) /* lint --e(923)*/

/** 9310, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH10_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109310u)) /* lint --e(923)*/

/** 9304, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH10_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109304u)) /* lint --e(923)*/

/** 9300, TOM Channel Control Register’ */
#define GTM_TOM2_CH10_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109300u)) /* lint --e(923)*/

/** 9320, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH10_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109320u)) /* lint --e(923)*/

/** 9324, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH10_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109324u)) /* lint --e(923)*/

/** 9328, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH10_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109328u)) /* lint --e(923)*/

/** 931C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH10_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010931Cu)) /* lint --e(923)*/

/** 930C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH10_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010930Cu)) /* lint --e(923)*/

/** 9314, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH10_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109314u)) /* lint --e(923)*/

/** 9318, TOM Channel Status Register */
#define GTM_TOM2_CH10_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109318u)) /* lint --e(923)*/

/** 9348, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH11_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109348u)) /* lint --e(923)*/

/** 9350, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH11_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109350u)) /* lint --e(923)*/

/** 9344, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH11_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109344u)) /* lint --e(923)*/

/** 9340, TOM Channel Control Register’ */
#define GTM_TOM2_CH11_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109340u)) /* lint --e(923)*/

/** 9360, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH11_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109360u)) /* lint --e(923)*/

/** 9364, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH11_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109364u)) /* lint --e(923)*/

/** 9368, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH11_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109368u)) /* lint --e(923)*/

/** 935C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH11_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010935Cu)) /* lint --e(923)*/

/** 934C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH11_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010934Cu)) /* lint --e(923)*/

/** 9354, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH11_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109354u)) /* lint --e(923)*/

/** 9358, TOM Channel Status Register */
#define GTM_TOM2_CH11_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109358u)) /* lint --e(923)*/

/** 9388, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH12_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109388u)) /* lint --e(923)*/

/** 9390, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH12_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109390u)) /* lint --e(923)*/

/** 9384, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH12_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109384u)) /* lint --e(923)*/

/** 9380, TOM Channel Control Register’ */
#define GTM_TOM2_CH12_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109380u)) /* lint --e(923)*/

/** 93A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH12_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01093A0u)) /* lint --e(923)*/

/** 93A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH12_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01093A4u)) /* lint --e(923)*/

/** 93A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH12_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01093A8u)) /* lint --e(923)*/

/** 939C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH12_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010939Cu)) /* lint --e(923)*/

/** 938C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH12_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010938Cu)) /* lint --e(923)*/

/** 9394, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH12_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109394u)) /* lint --e(923)*/

/** 9398, TOM Channel Status Register */
#define GTM_TOM2_CH12_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109398u)) /* lint --e(923)*/

/** 93C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH13_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01093C8u)) /* lint --e(923)*/

/** 93D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH13_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01093D0u)) /* lint --e(923)*/

/** 93C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH13_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01093C4u)) /* lint --e(923)*/

/** 93C0, TOM Channel Control Register’ */
#define GTM_TOM2_CH13_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01093C0u)) /* lint --e(923)*/

/** 93E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH13_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01093E0u)) /* lint --e(923)*/

/** 93E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH13_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01093E4u)) /* lint --e(923)*/

/** 93E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH13_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01093E8u)) /* lint --e(923)*/

/** 93DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH13_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01093DCu)) /* lint --e(923)*/

/** 93CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH13_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01093CCu)) /* lint --e(923)*/

/** 93D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH13_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01093D4u)) /* lint --e(923)*/

/** 93D8, TOM Channel Status Register */
#define GTM_TOM2_CH13_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01093D8u)) /* lint --e(923)*/

/** 9408, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH14_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109408u)) /* lint --e(923)*/

/** 9410, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH14_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109410u)) /* lint --e(923)*/

/** 9404, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH14_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109404u)) /* lint --e(923)*/

/** 9400, TOM Channel Control Register’ */
#define GTM_TOM2_CH14_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109400u)) /* lint --e(923)*/

/** 9420, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH14_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109420u)) /* lint --e(923)*/

/** 9424, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH14_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109424u)) /* lint --e(923)*/

/** 9428, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH14_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109428u)) /* lint --e(923)*/

/** 941C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH14_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010941Cu)) /* lint --e(923)*/

/** 940C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH14_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010940Cu)) /* lint --e(923)*/

/** 9414, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH14_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109414u)) /* lint --e(923)*/

/** 9418, TOM Channel Status Register */
#define GTM_TOM2_CH14_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109418u)) /* lint --e(923)*/

/** 9448, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH15_CM0 ((*(volatile Ifx_GTM_TOM_CH15_CM0*)0xF0109448u)) /* lint --e(923)*/

/** 9450, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH15_CM1 ((*(volatile Ifx_GTM_TOM_CH15_CM1*)0xF0109450u)) /* lint --e(923)*/

/** 9444, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH15_CN0 ((*(volatile Ifx_GTM_TOM_CH15_CN0*)0xF0109444u)) /* lint --e(923)*/

/** 9440, TOM Channel Control Register */
#define GTM_TOM2_CH15_CTRL ((*(volatile Ifx_GTM_TOM_CH15_CTRL*)0xF0109440u)) /* lint --e(923)*/

/** 9460, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH15_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH15_IRQ_EN*)0xF0109460u)) /* lint --e(923)*/

/** 9464, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH15_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH15_IRQ_FORCINT*)0xF0109464u)) /* lint --e(923)*/

/** 9468, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH15_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH15_IRQ_MODE*)0xF0109468u)) /* lint --e(923)*/

/** 945C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH15_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH15_IRQ_NOTIFY*)0xF010945Cu)) /* lint --e(923)*/

/** 944C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH15_SR0 ((*(volatile Ifx_GTM_TOM_CH15_SR0*)0xF010944Cu)) /* lint --e(923)*/

/** 9454, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH15_SR1 ((*(volatile Ifx_GTM_TOM_CH15_SR1*)0xF0109454u)) /* lint --e(923)*/

/** 9458, TOM Channel Status Register */
#define GTM_TOM2_CH15_STAT ((*(volatile Ifx_GTM_TOM_CH15_STAT*)0xF0109458u)) /* lint --e(923)*/

/** 90C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH1_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01090C8u)) /* lint --e(923)*/

/** 90D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH1_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01090D0u)) /* lint --e(923)*/

/** 90C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH1_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01090C4u)) /* lint --e(923)*/

/** 90C0, TOM Channel Control Register’ */
#define GTM_TOM2_CH1_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01090C0u)) /* lint --e(923)*/

/** 90E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH1_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01090E0u)) /* lint --e(923)*/

/** 90E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH1_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01090E4u)) /* lint --e(923)*/

/** 90E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH1_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01090E8u)) /* lint --e(923)*/

/** 90DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH1_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01090DCu)) /* lint --e(923)*/

/** 90CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH1_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01090CCu)) /* lint --e(923)*/

/** 90D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH1_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01090D4u)) /* lint --e(923)*/

/** 90D8, TOM Channel Status Register */
#define GTM_TOM2_CH1_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01090D8u)) /* lint --e(923)*/

/** 9108, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH2_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109108u)) /* lint --e(923)*/

/** 9110, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH2_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109110u)) /* lint --e(923)*/

/** 9104, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH2_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109104u)) /* lint --e(923)*/

/** 9100, TOM Channel Control Register’ */
#define GTM_TOM2_CH2_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109100u)) /* lint --e(923)*/

/** 9120, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH2_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109120u)) /* lint --e(923)*/

/** 9124, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH2_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109124u)) /* lint --e(923)*/

/** 9128, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH2_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109128u)) /* lint --e(923)*/

/** 911C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH2_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010911Cu)) /* lint --e(923)*/

/** 910C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH2_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010910Cu)) /* lint --e(923)*/

/** 9114, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH2_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109114u)) /* lint --e(923)*/

/** 9118, TOM Channel Status Register */
#define GTM_TOM2_CH2_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109118u)) /* lint --e(923)*/

/** 9148, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH3_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109148u)) /* lint --e(923)*/

/** 9150, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH3_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109150u)) /* lint --e(923)*/

/** 9144, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH3_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109144u)) /* lint --e(923)*/

/** 9140, TOM Channel Control Register’ */
#define GTM_TOM2_CH3_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109140u)) /* lint --e(923)*/

/** 9160, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH3_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109160u)) /* lint --e(923)*/

/** 9164, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH3_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109164u)) /* lint --e(923)*/

/** 9168, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH3_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109168u)) /* lint --e(923)*/

/** 915C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH3_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010915Cu)) /* lint --e(923)*/

/** 914C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH3_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010914Cu)) /* lint --e(923)*/

/** 9154, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH3_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109154u)) /* lint --e(923)*/

/** 9158, TOM Channel Status Register */
#define GTM_TOM2_CH3_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109158u)) /* lint --e(923)*/

/** 9188, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH4_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109188u)) /* lint --e(923)*/

/** 9190, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH4_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109190u)) /* lint --e(923)*/

/** 9184, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH4_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109184u)) /* lint --e(923)*/

/** 9180, TOM Channel Control Register’ */
#define GTM_TOM2_CH4_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109180u)) /* lint --e(923)*/

/** 91A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH4_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01091A0u)) /* lint --e(923)*/

/** 91A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH4_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01091A4u)) /* lint --e(923)*/

/** 91A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH4_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01091A8u)) /* lint --e(923)*/

/** 919C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH4_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010919Cu)) /* lint --e(923)*/

/** 918C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH4_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010918Cu)) /* lint --e(923)*/

/** 9194, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH4_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109194u)) /* lint --e(923)*/

/** 9198, TOM Channel Status Register */
#define GTM_TOM2_CH4_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109198u)) /* lint --e(923)*/

/** 91C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH5_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01091C8u)) /* lint --e(923)*/

/** 91D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH5_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01091D0u)) /* lint --e(923)*/

/** 91C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH5_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01091C4u)) /* lint --e(923)*/

/** 91C0, TOM Channel Control Register’ */
#define GTM_TOM2_CH5_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01091C0u)) /* lint --e(923)*/

/** 91E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH5_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01091E0u)) /* lint --e(923)*/

/** 91E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH5_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01091E4u)) /* lint --e(923)*/

/** 91E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH5_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01091E8u)) /* lint --e(923)*/

/** 91DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH5_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01091DCu)) /* lint --e(923)*/

/** 91CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH5_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01091CCu)) /* lint --e(923)*/

/** 91D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH5_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01091D4u)) /* lint --e(923)*/

/** 91D8, TOM Channel Status Register */
#define GTM_TOM2_CH5_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01091D8u)) /* lint --e(923)*/

/** 9208, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH6_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109208u)) /* lint --e(923)*/

/** 9210, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH6_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109210u)) /* lint --e(923)*/

/** 9204, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH6_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109204u)) /* lint --e(923)*/

/** 9200, TOM Channel Control Register’ */
#define GTM_TOM2_CH6_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109200u)) /* lint --e(923)*/

/** 9220, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH6_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109220u)) /* lint --e(923)*/

/** 9224, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH6_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109224u)) /* lint --e(923)*/

/** 9228, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH6_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109228u)) /* lint --e(923)*/

/** 921C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH6_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010921Cu)) /* lint --e(923)*/

/** 920C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH6_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010920Cu)) /* lint --e(923)*/

/** 9214, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH6_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109214u)) /* lint --e(923)*/

/** 9218, TOM Channel Status Register */
#define GTM_TOM2_CH6_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109218u)) /* lint --e(923)*/

/** 9248, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH7_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109248u)) /* lint --e(923)*/

/** 9250, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH7_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109250u)) /* lint --e(923)*/

/** 9244, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH7_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109244u)) /* lint --e(923)*/

/** 9240, TOM Channel Control Register’ */
#define GTM_TOM2_CH7_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109240u)) /* lint --e(923)*/

/** 9260, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH7_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109260u)) /* lint --e(923)*/

/** 9264, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH7_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109264u)) /* lint --e(923)*/

/** 9268, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH7_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109268u)) /* lint --e(923)*/

/** 925C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH7_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010925Cu)) /* lint --e(923)*/

/** 924C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH7_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010924Cu)) /* lint --e(923)*/

/** 9254, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH7_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109254u)) /* lint --e(923)*/

/** 9258, TOM Channel Status Register */
#define GTM_TOM2_CH7_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109258u)) /* lint --e(923)*/

/** 9288, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH8_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109288u)) /* lint --e(923)*/

/** 9290, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH8_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109290u)) /* lint --e(923)*/

/** 9284, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH8_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109284u)) /* lint --e(923)*/

/** 9280, TOM Channel Control Register’ */
#define GTM_TOM2_CH8_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109280u)) /* lint --e(923)*/

/** 92A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH8_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01092A0u)) /* lint --e(923)*/

/** 92A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH8_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01092A4u)) /* lint --e(923)*/

/** 92A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH8_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01092A8u)) /* lint --e(923)*/

/** 929C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH8_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010929Cu)) /* lint --e(923)*/

/** 928C, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH8_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010928Cu)) /* lint --e(923)*/

/** 9294, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH8_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109294u)) /* lint --e(923)*/

/** 9298, TOM Channel Status Register */
#define GTM_TOM2_CH8_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109298u)) /* lint --e(923)*/

/** 92C8, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH9_CM0 ((*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01092C8u)) /* lint --e(923)*/

/** 92D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH9_CM1 ((*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01092D0u)) /* lint --e(923)*/

/** 92C4, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH9_CN0 ((*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01092C4u)) /* lint --e(923)*/

/** 92C0, TOM Channel Control Register’ */
#define GTM_TOM2_CH9_CTRL ((*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01092C0u)) /* lint --e(923)*/

/** 92E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH9_IRQ_EN ((*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01092E0u)) /* lint --e(923)*/

/** 92E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH9_IRQ_FORCINT ((*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01092E4u)) /* lint --e(923)*/

/** 92E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH9_IRQ_MODE ((*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01092E8u)) /* lint --e(923)*/

/** 92DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH9_IRQ_NOTIFY ((*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01092DCu)) /* lint --e(923)*/

/** 92CC, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH9_SR0 ((*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01092CCu)) /* lint --e(923)*/

/** 92D4, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH9_SR1 ((*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01092D4u)) /* lint --e(923)*/

/** 92D8, TOM Channel Status Register */
#define GTM_TOM2_CH9_STAT ((*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01092D8u)) /* lint --e(923)*/

/** 900C, TOM TGC Action Time Base Register */
#define GTM_TOM2_TGC0_ACT_TB ((*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF010900Cu)) /* lint --e(923)*/

/** 9004, TOM TGC Enable/Disable Control Register */
#define GTM_TOM2_TGC0_ENDIS_CTRL ((*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0109004u)) /* lint --e(923)*/

/** 9008, TOM TGC Enable/Disable Status Register */
#define GTM_TOM2_TGC0_ENDIS_STAT ((*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0109008u)) /* lint --e(923)*/

/** 9018, TOM TGC Force Update Control Register */
#define GTM_TOM2_TGC0_FUPD_CTRL ((*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0109018u)) /* lint --e(923)*/

/** 9000, TOM TGC Global Control Register */
#define GTM_TOM2_TGC0_GLB_CTRL ((*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0109000u)) /* lint --e(923)*/

/** 901C, TOM TGC Internal Trigger Control Register */
#define GTM_TOM2_TGC0_INT_TRIG ((*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010901Cu)) /* lint --e(923)*/

/** 9010, TOM TGC Output Enable Control Register */
#define GTM_TOM2_TGC0_OUTEN_CTRL ((*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0109010u)) /* lint --e(923)*/

/** 9014, TOM TGC Output Enable Status Register */
#define GTM_TOM2_TGC0_OUTEN_STAT ((*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF0109014u)) /* lint --e(923)*/

/** 904C, TOM TGC Action Time Base Register */
#define GTM_TOM2_TGC1_ACT_TB ((*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF010904Cu)) /* lint --e(923)*/

/** 9044, TOM TGC Enable/Disable Control Register */
#define GTM_TOM2_TGC1_ENDIS_CTRL ((*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0109044u)) /* lint --e(923)*/

/** 9048, TOM TGC Enable/Disable Status Register */
#define GTM_TOM2_TGC1_ENDIS_STAT ((*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0109048u)) /* lint --e(923)*/

/** 9058, TOM TGC Force Update Control Register */
#define GTM_TOM2_TGC1_FUPD_CTRL ((*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0109058u)) /* lint --e(923)*/

/** 9040, TOM TGC Global Control Register */
#define GTM_TOM2_TGC1_GLB_CTRL ((*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0109040u)) /* lint --e(923)*/

/** 905C, TOM TGC Internal Trigger Control Register */
#define GTM_TOM2_TGC1_INT_TRIG ((*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010905Cu)) /* lint --e(923)*/

/** 9050, TOM TGC Output Enable Control Register */
#define GTM_TOM2_TGC1_OUTEN_CTRL ((*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0109050u)) /* lint --e(923)*/

/** 9054, TOM TGC Output Enable Status Register */
#define GTM_TOM2_TGC1_OUTEN_STAT ((*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF0109054u)) /* lint --e(923)*/

/** 9FD30, Timer Output Select Register */
#define GTM_TOUTSEL0 ((*(volatile Ifx_GTM_TOUTSEL*)0xF019FD30u)) /* lint --e(923)*/

/** 9FD34, Timer Output Select Register */
#define GTM_TOUTSEL1 ((*(volatile Ifx_GTM_TOUTSEL*)0xF019FD34u)) /* lint --e(923)*/

/** 9FD58, Timer Output Select Register */
#define GTM_TOUTSEL10 ((*(volatile Ifx_GTM_TOUTSEL*)0xF019FD58u)) /* lint --e(923)*/

/** 9FD5C, Timer Output Select Register */
#define GTM_TOUTSEL11 ((*(volatile Ifx_GTM_TOUTSEL*)0xF019FD5Cu)) /* lint --e(923)*/

/** 9FD60, Timer Output Select Register */
#define GTM_TOUTSEL12 ((*(volatile Ifx_GTM_TOUTSEL*)0xF019FD60u)) /* lint --e(923)*/

/** 9FD64, Timer Output Select Register */
#define GTM_TOUTSEL13 ((*(volatile Ifx_GTM_TOUTSEL*)0xF019FD64u)) /* lint --e(923)*/

/** 9FD68, Timer Output Select Register */
#define GTM_TOUTSEL14 ((*(volatile Ifx_GTM_TOUTSEL*)0xF019FD68u)) /* lint --e(923)*/

/** 9FD38, Timer Output Select Register */
#define GTM_TOUTSEL2 ((*(volatile Ifx_GTM_TOUTSEL*)0xF019FD38u)) /* lint --e(923)*/

/** 9FD3C, Timer Output Select Register */
#define GTM_TOUTSEL3 ((*(volatile Ifx_GTM_TOUTSEL*)0xF019FD3Cu)) /* lint --e(923)*/

/** 9FD40, Timer Output Select Register */
#define GTM_TOUTSEL4 ((*(volatile Ifx_GTM_TOUTSEL*)0xF019FD40u)) /* lint --e(923)*/

/** 9FD44, Timer Output Select Register */
#define GTM_TOUTSEL5 ((*(volatile Ifx_GTM_TOUTSEL*)0xF019FD44u)) /* lint --e(923)*/

/** 9FD48, Timer Output Select Register */
#define GTM_TOUTSEL6 ((*(volatile Ifx_GTM_TOUTSEL*)0xF019FD48u)) /* lint --e(923)*/

/** 9FD4C, Timer Output Select Register */
#define GTM_TOUTSEL7 ((*(volatile Ifx_GTM_TOUTSEL*)0xF019FD4Cu)) /* lint --e(923)*/

/** 9FD50, Timer Output Select Register */
#define GTM_TOUTSEL8 ((*(volatile Ifx_GTM_TOUTSEL*)0xF019FD50u)) /* lint --e(923)*/

/** 9FD54, Timer Output Select Register */
#define GTM_TOUTSEL9 ((*(volatile Ifx_GTM_TOUTSEL*)0xF019FD54u)) /* lint --e(923)*/

/** 9FDA0, TTCAN Output Select Register */
#define GTM_TTCANOUTSEL ((*(volatile Ifx_GTM_TTCANOUTSEL*)0xF019FDA0u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXGTM_REG_H */

