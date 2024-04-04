/**
 * \file IfxCan_reg.h
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
#ifndef IFXCAN_REG_H
#define IFXCAN_REG_H
/******************************************************************************/
#include "Can/IfxCan_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** CAN object */
#define MODULE_CAN ((*(Ifx_CAN*)0xF0018000u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-CAN)                               */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define CAN_ACCEN0 ((*(volatile Ifx_CAN_ACCEN0*)0xF00180FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define CAN_ACCEN1 ((*(volatile Ifx_CAN_ACCEN1*)0xF00180F8u)) /* lint --e(923)*/

/** 2A4, Application Watchdog Register */
#define CAN_AWDR ((*(volatile Ifx_CAN_AWDR*)0xF00182A4u)) /* lint --e(923)*/

/** 0, CAN Clock Control Register */
#define CAN_CLC ((*(volatile Ifx_CAN_CLC*)0xF0018000u)) /* lint --e(923)*/

/** 294, Cycle Time Register */
#define CAN_CYCTMR ((*(volatile Ifx_CAN_CYCTMR*)0xF0018294u)) /* lint --e(923)*/

/** C, CAN Fractional Divider Register */
#define CAN_FDR ((*(volatile Ifx_CAN_FDR*)0xF001800Cu)) /* lint --e(923)*/

/** 29C, Global Mark Register */
#define CAN_GMR ((*(volatile Ifx_CAN_GMR*)0xF001829Cu)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define CAN_ID ((*(volatile Ifx_CAN_ID*)0xF0018008u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define CAN_KRST0 ((*(volatile Ifx_CAN_KRST0*)0xF00180F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define CAN_KRST1 ((*(volatile Ifx_CAN_KRST1*)0xF00180F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define CAN_KRSTCLR ((*(volatile Ifx_CAN_KRSTCLR*)0xF00180ECu)) /* lint --e(923)*/

/** 2A0, Last Global Mark Register */
#define CAN_LGMR ((*(volatile Ifx_CAN_LGMR*)0xF00182A0u)) /* lint --e(923)*/

/** 100, List Register */
#define CAN_LIST0 ((*(volatile Ifx_CAN_LIST*)0xF0018100u)) /* lint --e(923)*/

/** 104, List Register */
#define CAN_LIST1 ((*(volatile Ifx_CAN_LIST*)0xF0018104u)) /* lint --e(923)*/

/** 128, List Register */
#define CAN_LIST10 ((*(volatile Ifx_CAN_LIST*)0xF0018128u)) /* lint --e(923)*/

/** 12C, List Register */
#define CAN_LIST11 ((*(volatile Ifx_CAN_LIST*)0xF001812Cu)) /* lint --e(923)*/

/** 130, List Register */
#define CAN_LIST12 ((*(volatile Ifx_CAN_LIST*)0xF0018130u)) /* lint --e(923)*/

/** 134, List Register */
#define CAN_LIST13 ((*(volatile Ifx_CAN_LIST*)0xF0018134u)) /* lint --e(923)*/

/** 138, List Register */
#define CAN_LIST14 ((*(volatile Ifx_CAN_LIST*)0xF0018138u)) /* lint --e(923)*/

/** 13C, List Register */
#define CAN_LIST15 ((*(volatile Ifx_CAN_LIST*)0xF001813Cu)) /* lint --e(923)*/

/** 108, List Register */
#define CAN_LIST2 ((*(volatile Ifx_CAN_LIST*)0xF0018108u)) /* lint --e(923)*/

/** 10C, List Register */
#define CAN_LIST3 ((*(volatile Ifx_CAN_LIST*)0xF001810Cu)) /* lint --e(923)*/

/** 110, List Register */
#define CAN_LIST4 ((*(volatile Ifx_CAN_LIST*)0xF0018110u)) /* lint --e(923)*/

/** 114, List Register */
#define CAN_LIST5 ((*(volatile Ifx_CAN_LIST*)0xF0018114u)) /* lint --e(923)*/

/** 118, List Register */
#define CAN_LIST6 ((*(volatile Ifx_CAN_LIST*)0xF0018118u)) /* lint --e(923)*/

/** 11C, List Register */
#define CAN_LIST7 ((*(volatile Ifx_CAN_LIST*)0xF001811Cu)) /* lint --e(923)*/

/** 120, List Register */
#define CAN_LIST8 ((*(volatile Ifx_CAN_LIST*)0xF0018120u)) /* lint --e(923)*/

/** 124, List Register */
#define CAN_LIST9 ((*(volatile Ifx_CAN_LIST*)0xF0018124u)) /* lint --e(923)*/

/** 298, Local Offset Register */
#define CAN_LOR ((*(volatile Ifx_CAN_LOR*)0xF0018298u)) /* lint --e(923)*/

/** 28C, Last Reference Mark Register */
#define CAN_LREFMR ((*(volatile Ifx_CAN_LREFMR*)0xF001828Cu)) /* lint --e(923)*/

/** 2A8, Local Time Capture Register */
#define CAN_LTCR ((*(volatile Ifx_CAN_LTCR*)0xF00182A8u)) /* lint --e(923)*/

/** 280, Local Time Register */
#define CAN_LTR ((*(volatile Ifx_CAN_LTR*)0xF0018280u)) /* lint --e(923)*/

/** 1C8, Module Control Register */
#define CAN_MCR ((*(volatile Ifx_CAN_MCR*)0xF00181C8u)) /* lint --e(923)*/

/** 1CC, Module Interrupt Trigger Register */
#define CAN_MITR ((*(volatile Ifx_CAN_MITR*)0xF00181CCu)) /* lint --e(923)*/

/** 100C, Message Object  Acceptance Mask Register */
#define CAN_MO0_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001900Cu)) /* lint --e(923)*/

/** 1018, Message Object  Arbitration Register */
#define CAN_MO0_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019018u)) /* lint --e(923)*/

/** 101C, Message Object  Control Register */
#define CAN_MO0_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001901Cu)) /* lint --e(923)*/

/** 1014, Message Object  Data Register High */
#define CAN_MO0_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019014u)) /* lint --e(923)*/

/** 1010, Message Object  Data Register Low */
#define CAN_MO0_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019010u)) /* lint --e(923)*/

/** 1000, Message Object  Function Control Register */
#define CAN_MO0_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019000u)) /* lint --e(923)*/

/** 1004, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO0_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019004u)) /* lint --e(923)*/

/** 1008, Message Object  Interrupt Pointer Register */
#define CAN_MO0_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019008u)) /* lint --e(923)*/

/** 1C8C, Message Object  Acceptance Mask Register */
#define CAN_MO100_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019C8Cu)) /* lint --e(923)*/

/** 1C98, Message Object  Arbitration Register */
#define CAN_MO100_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019C98u)) /* lint --e(923)*/

/** 1C9C, Message Object  Control Register */
#define CAN_MO100_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019C9Cu)) /* lint --e(923)*/

/** 1C94, Message Object  Data Register High */
#define CAN_MO100_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019C94u)) /* lint --e(923)*/

/** 1C90, Message Object  Data Register Low */
#define CAN_MO100_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019C90u)) /* lint --e(923)*/

/** 1C80, Message Object  Function Control Register */
#define CAN_MO100_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019C80u)) /* lint --e(923)*/

/** 1C84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO100_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019C84u)) /* lint --e(923)*/

/** 1C88, Message Object  Interrupt Pointer Register */
#define CAN_MO100_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019C88u)) /* lint --e(923)*/

/** 1CAC, Message Object  Acceptance Mask Register */
#define CAN_MO101_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019CACu)) /* lint --e(923)*/

/** 1CB8, Message Object  Arbitration Register */
#define CAN_MO101_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019CB8u)) /* lint --e(923)*/

/** 1CBC, Message Object  Control Register */
#define CAN_MO101_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019CBCu)) /* lint --e(923)*/

/** 1CB4, Message Object  Data Register High */
#define CAN_MO101_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019CB4u)) /* lint --e(923)*/

/** 1CB0, Message Object  Data Register Low */
#define CAN_MO101_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019CB0u)) /* lint --e(923)*/

/** 1CA0, Message Object  Function Control Register */
#define CAN_MO101_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019CA0u)) /* lint --e(923)*/

/** 1CA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO101_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019CA4u)) /* lint --e(923)*/

/** 1CA8, Message Object  Interrupt Pointer Register */
#define CAN_MO101_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019CA8u)) /* lint --e(923)*/

/** 1CCC, Message Object  Acceptance Mask Register */
#define CAN_MO102_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019CCCu)) /* lint --e(923)*/

/** 1CD8, Message Object  Arbitration Register */
#define CAN_MO102_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019CD8u)) /* lint --e(923)*/

/** 1CDC, Message Object  Control Register */
#define CAN_MO102_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019CDCu)) /* lint --e(923)*/

/** 1CD4, Message Object  Data Register High */
#define CAN_MO102_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019CD4u)) /* lint --e(923)*/

/** 1CD0, Message Object  Data Register Low */
#define CAN_MO102_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019CD0u)) /* lint --e(923)*/

/** 1CC0, Message Object  Function Control Register */
#define CAN_MO102_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019CC0u)) /* lint --e(923)*/

/** 1CC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO102_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019CC4u)) /* lint --e(923)*/

/** 1CC8, Message Object  Interrupt Pointer Register */
#define CAN_MO102_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019CC8u)) /* lint --e(923)*/

/** 1CEC, Message Object  Acceptance Mask Register */
#define CAN_MO103_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019CECu)) /* lint --e(923)*/

/** 1CF8, Message Object  Arbitration Register */
#define CAN_MO103_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019CF8u)) /* lint --e(923)*/

/** 1CFC, Message Object  Control Register */
#define CAN_MO103_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019CFCu)) /* lint --e(923)*/

/** 1CF4, Message Object  Data Register High */
#define CAN_MO103_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019CF4u)) /* lint --e(923)*/

/** 1CF0, Message Object  Data Register Low */
#define CAN_MO103_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019CF0u)) /* lint --e(923)*/

/** 1CE0, Message Object  Function Control Register */
#define CAN_MO103_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019CE0u)) /* lint --e(923)*/

/** 1CE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO103_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019CE4u)) /* lint --e(923)*/

/** 1CE8, Message Object  Interrupt Pointer Register */
#define CAN_MO103_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019CE8u)) /* lint --e(923)*/

/** 1D0C, Message Object  Acceptance Mask Register */
#define CAN_MO104_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019D0Cu)) /* lint --e(923)*/

/** 1D18, Message Object  Arbitration Register */
#define CAN_MO104_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019D18u)) /* lint --e(923)*/

/** 1D1C, Message Object  Control Register */
#define CAN_MO104_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019D1Cu)) /* lint --e(923)*/

/** 1D14, Message Object  Data Register High */
#define CAN_MO104_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019D14u)) /* lint --e(923)*/

/** 1D10, Message Object  Data Register Low */
#define CAN_MO104_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019D10u)) /* lint --e(923)*/

/** 1D00, Message Object  Function Control Register */
#define CAN_MO104_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019D00u)) /* lint --e(923)*/

/** 1D04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO104_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019D04u)) /* lint --e(923)*/

/** 1D08, Message Object  Interrupt Pointer Register */
#define CAN_MO104_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019D08u)) /* lint --e(923)*/

/** 1D2C, Message Object  Acceptance Mask Register */
#define CAN_MO105_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019D2Cu)) /* lint --e(923)*/

/** 1D38, Message Object  Arbitration Register */
#define CAN_MO105_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019D38u)) /* lint --e(923)*/

/** 1D3C, Message Object  Control Register */
#define CAN_MO105_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019D3Cu)) /* lint --e(923)*/

/** 1D34, Message Object  Data Register High */
#define CAN_MO105_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019D34u)) /* lint --e(923)*/

/** 1D30, Message Object  Data Register Low */
#define CAN_MO105_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019D30u)) /* lint --e(923)*/

/** 1D20, Message Object  Function Control Register */
#define CAN_MO105_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019D20u)) /* lint --e(923)*/

/** 1D24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO105_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019D24u)) /* lint --e(923)*/

/** 1D28, Message Object  Interrupt Pointer Register */
#define CAN_MO105_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019D28u)) /* lint --e(923)*/

/** 1D4C, Message Object  Acceptance Mask Register */
#define CAN_MO106_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019D4Cu)) /* lint --e(923)*/

/** 1D58, Message Object  Arbitration Register */
#define CAN_MO106_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019D58u)) /* lint --e(923)*/

/** 1D5C, Message Object  Control Register */
#define CAN_MO106_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019D5Cu)) /* lint --e(923)*/

/** 1D54, Message Object  Data Register High */
#define CAN_MO106_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019D54u)) /* lint --e(923)*/

/** 1D50, Message Object  Data Register Low */
#define CAN_MO106_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019D50u)) /* lint --e(923)*/

/** 1D40, Message Object  Function Control Register */
#define CAN_MO106_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019D40u)) /* lint --e(923)*/

/** 1D44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO106_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019D44u)) /* lint --e(923)*/

/** 1D48, Message Object  Interrupt Pointer Register */
#define CAN_MO106_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019D48u)) /* lint --e(923)*/

/** 1D6C, Message Object  Acceptance Mask Register */
#define CAN_MO107_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019D6Cu)) /* lint --e(923)*/

/** 1D78, Message Object  Arbitration Register */
#define CAN_MO107_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019D78u)) /* lint --e(923)*/

/** 1D7C, Message Object  Control Register */
#define CAN_MO107_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019D7Cu)) /* lint --e(923)*/

/** 1D74, Message Object  Data Register High */
#define CAN_MO107_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019D74u)) /* lint --e(923)*/

/** 1D70, Message Object  Data Register Low */
#define CAN_MO107_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019D70u)) /* lint --e(923)*/

/** 1D60, Message Object  Function Control Register */
#define CAN_MO107_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019D60u)) /* lint --e(923)*/

/** 1D64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO107_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019D64u)) /* lint --e(923)*/

/** 1D68, Message Object  Interrupt Pointer Register */
#define CAN_MO107_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019D68u)) /* lint --e(923)*/

/** 1D8C, Message Object  Acceptance Mask Register */
#define CAN_MO108_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019D8Cu)) /* lint --e(923)*/

/** 1D98, Message Object  Arbitration Register */
#define CAN_MO108_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019D98u)) /* lint --e(923)*/

/** 1D9C, Message Object  Control Register */
#define CAN_MO108_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019D9Cu)) /* lint --e(923)*/

/** 1D94, Message Object  Data Register High */
#define CAN_MO108_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019D94u)) /* lint --e(923)*/

/** 1D90, Message Object  Data Register Low */
#define CAN_MO108_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019D90u)) /* lint --e(923)*/

/** 1D80, Message Object  Function Control Register */
#define CAN_MO108_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019D80u)) /* lint --e(923)*/

/** 1D84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO108_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019D84u)) /* lint --e(923)*/

/** 1D88, Message Object  Interrupt Pointer Register */
#define CAN_MO108_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019D88u)) /* lint --e(923)*/

/** 1DAC, Message Object  Acceptance Mask Register */
#define CAN_MO109_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019DACu)) /* lint --e(923)*/

/** 1DB8, Message Object  Arbitration Register */
#define CAN_MO109_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019DB8u)) /* lint --e(923)*/

/** 1DBC, Message Object  Control Register */
#define CAN_MO109_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019DBCu)) /* lint --e(923)*/

/** 1DB4, Message Object  Data Register High */
#define CAN_MO109_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019DB4u)) /* lint --e(923)*/

/** 1DB0, Message Object  Data Register Low */
#define CAN_MO109_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019DB0u)) /* lint --e(923)*/

/** 1DA0, Message Object  Function Control Register */
#define CAN_MO109_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019DA0u)) /* lint --e(923)*/

/** 1DA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO109_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019DA4u)) /* lint --e(923)*/

/** 1DA8, Message Object  Interrupt Pointer Register */
#define CAN_MO109_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019DA8u)) /* lint --e(923)*/

/** 114C, Message Object  Acceptance Mask Register */
#define CAN_MO10_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001914Cu)) /* lint --e(923)*/

/** 1158, Message Object  Arbitration Register */
#define CAN_MO10_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019158u)) /* lint --e(923)*/

/** 115C, Message Object  Control Register */
#define CAN_MO10_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001915Cu)) /* lint --e(923)*/

/** 1154, Message Object  Data Register High */
#define CAN_MO10_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019154u)) /* lint --e(923)*/

/** 1150, Message Object  Data Register Low */
#define CAN_MO10_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019150u)) /* lint --e(923)*/

/** 1140, Message Object  Function Control Register */
#define CAN_MO10_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019140u)) /* lint --e(923)*/

/** 1144, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO10_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019144u)) /* lint --e(923)*/

/** 1148, Message Object  Interrupt Pointer Register */
#define CAN_MO10_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019148u)) /* lint --e(923)*/

/** 1DCC, Message Object  Acceptance Mask Register */
#define CAN_MO110_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019DCCu)) /* lint --e(923)*/

/** 1DD8, Message Object  Arbitration Register */
#define CAN_MO110_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019DD8u)) /* lint --e(923)*/

/** 1DDC, Message Object  Control Register */
#define CAN_MO110_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019DDCu)) /* lint --e(923)*/

/** 1DD4, Message Object  Data Register High */
#define CAN_MO110_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019DD4u)) /* lint --e(923)*/

/** 1DD0, Message Object  Data Register Low */
#define CAN_MO110_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019DD0u)) /* lint --e(923)*/

/** 1DC0, Message Object  Function Control Register */
#define CAN_MO110_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019DC0u)) /* lint --e(923)*/

/** 1DC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO110_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019DC4u)) /* lint --e(923)*/

/** 1DC8, Message Object  Interrupt Pointer Register */
#define CAN_MO110_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019DC8u)) /* lint --e(923)*/

/** 1DEC, Message Object  Acceptance Mask Register */
#define CAN_MO111_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019DECu)) /* lint --e(923)*/

/** 1DF8, Message Object  Arbitration Register */
#define CAN_MO111_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019DF8u)) /* lint --e(923)*/

/** 1DFC, Message Object  Control Register */
#define CAN_MO111_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019DFCu)) /* lint --e(923)*/

/** 1DF4, Message Object  Data Register High */
#define CAN_MO111_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019DF4u)) /* lint --e(923)*/

/** 1DF0, Message Object  Data Register Low */
#define CAN_MO111_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019DF0u)) /* lint --e(923)*/

/** 1DE0, Message Object  Function Control Register */
#define CAN_MO111_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019DE0u)) /* lint --e(923)*/

/** 1DE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO111_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019DE4u)) /* lint --e(923)*/

/** 1DE8, Message Object  Interrupt Pointer Register */
#define CAN_MO111_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019DE8u)) /* lint --e(923)*/

/** 1E0C, Message Object  Acceptance Mask Register */
#define CAN_MO112_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019E0Cu)) /* lint --e(923)*/

/** 1E18, Message Object  Arbitration Register */
#define CAN_MO112_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019E18u)) /* lint --e(923)*/

/** 1E1C, Message Object  Control Register */
#define CAN_MO112_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019E1Cu)) /* lint --e(923)*/

/** 1E14, Message Object  Data Register High */
#define CAN_MO112_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019E14u)) /* lint --e(923)*/

/** 1E10, Message Object  Data Register Low */
#define CAN_MO112_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019E10u)) /* lint --e(923)*/

/** 1E00, Message Object  Function Control Register */
#define CAN_MO112_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019E00u)) /* lint --e(923)*/

/** 1E04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO112_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019E04u)) /* lint --e(923)*/

/** 1E08, Message Object  Interrupt Pointer Register */
#define CAN_MO112_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019E08u)) /* lint --e(923)*/

/** 1E2C, Message Object  Acceptance Mask Register */
#define CAN_MO113_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019E2Cu)) /* lint --e(923)*/

/** 1E38, Message Object  Arbitration Register */
#define CAN_MO113_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019E38u)) /* lint --e(923)*/

/** 1E3C, Message Object  Control Register */
#define CAN_MO113_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019E3Cu)) /* lint --e(923)*/

/** 1E34, Message Object  Data Register High */
#define CAN_MO113_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019E34u)) /* lint --e(923)*/

/** 1E30, Message Object  Data Register Low */
#define CAN_MO113_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019E30u)) /* lint --e(923)*/

/** 1E20, Message Object  Function Control Register */
#define CAN_MO113_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019E20u)) /* lint --e(923)*/

/** 1E24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO113_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019E24u)) /* lint --e(923)*/

/** 1E28, Message Object  Interrupt Pointer Register */
#define CAN_MO113_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019E28u)) /* lint --e(923)*/

/** 1E4C, Message Object  Acceptance Mask Register */
#define CAN_MO114_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019E4Cu)) /* lint --e(923)*/

/** 1E58, Message Object  Arbitration Register */
#define CAN_MO114_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019E58u)) /* lint --e(923)*/

/** 1E5C, Message Object  Control Register */
#define CAN_MO114_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019E5Cu)) /* lint --e(923)*/

/** 1E54, Message Object  Data Register High */
#define CAN_MO114_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019E54u)) /* lint --e(923)*/

/** 1E50, Message Object  Data Register Low */
#define CAN_MO114_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019E50u)) /* lint --e(923)*/

/** 1E40, Message Object  Function Control Register */
#define CAN_MO114_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019E40u)) /* lint --e(923)*/

/** 1E44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO114_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019E44u)) /* lint --e(923)*/

/** 1E48, Message Object  Interrupt Pointer Register */
#define CAN_MO114_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019E48u)) /* lint --e(923)*/

/** 1E6C, Message Object  Acceptance Mask Register */
#define CAN_MO115_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019E6Cu)) /* lint --e(923)*/

/** 1E78, Message Object  Arbitration Register */
#define CAN_MO115_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019E78u)) /* lint --e(923)*/

/** 1E7C, Message Object  Control Register */
#define CAN_MO115_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019E7Cu)) /* lint --e(923)*/

/** 1E74, Message Object  Data Register High */
#define CAN_MO115_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019E74u)) /* lint --e(923)*/

/** 1E70, Message Object  Data Register Low */
#define CAN_MO115_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019E70u)) /* lint --e(923)*/

/** 1E60, Message Object  Function Control Register */
#define CAN_MO115_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019E60u)) /* lint --e(923)*/

/** 1E64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO115_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019E64u)) /* lint --e(923)*/

/** 1E68, Message Object  Interrupt Pointer Register */
#define CAN_MO115_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019E68u)) /* lint --e(923)*/

/** 1E8C, Message Object  Acceptance Mask Register */
#define CAN_MO116_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019E8Cu)) /* lint --e(923)*/

/** 1E98, Message Object  Arbitration Register */
#define CAN_MO116_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019E98u)) /* lint --e(923)*/

/** 1E9C, Message Object  Control Register */
#define CAN_MO116_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019E9Cu)) /* lint --e(923)*/

/** 1E94, Message Object  Data Register High */
#define CAN_MO116_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019E94u)) /* lint --e(923)*/

/** 1E90, Message Object  Data Register Low */
#define CAN_MO116_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019E90u)) /* lint --e(923)*/

/** 1E80, Message Object  Function Control Register */
#define CAN_MO116_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019E80u)) /* lint --e(923)*/

/** 1E84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO116_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019E84u)) /* lint --e(923)*/

/** 1E88, Message Object  Interrupt Pointer Register */
#define CAN_MO116_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019E88u)) /* lint --e(923)*/

/** 1EAC, Message Object  Acceptance Mask Register */
#define CAN_MO117_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019EACu)) /* lint --e(923)*/

/** 1EB8, Message Object  Arbitration Register */
#define CAN_MO117_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019EB8u)) /* lint --e(923)*/

/** 1EBC, Message Object  Control Register */
#define CAN_MO117_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019EBCu)) /* lint --e(923)*/

/** 1EB4, Message Object  Data Register High */
#define CAN_MO117_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019EB4u)) /* lint --e(923)*/

/** 1EB0, Message Object  Data Register Low */
#define CAN_MO117_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019EB0u)) /* lint --e(923)*/

/** 1EA0, Message Object  Function Control Register */
#define CAN_MO117_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019EA0u)) /* lint --e(923)*/

/** 1EA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO117_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019EA4u)) /* lint --e(923)*/

/** 1EA8, Message Object  Interrupt Pointer Register */
#define CAN_MO117_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019EA8u)) /* lint --e(923)*/

/** 1ECC, Message Object  Acceptance Mask Register */
#define CAN_MO118_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019ECCu)) /* lint --e(923)*/

/** 1ED8, Message Object  Arbitration Register */
#define CAN_MO118_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019ED8u)) /* lint --e(923)*/

/** 1EDC, Message Object  Control Register */
#define CAN_MO118_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019EDCu)) /* lint --e(923)*/

/** 1ED4, Message Object  Data Register High */
#define CAN_MO118_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019ED4u)) /* lint --e(923)*/

/** 1ED0, Message Object  Data Register Low */
#define CAN_MO118_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019ED0u)) /* lint --e(923)*/

/** 1EC0, Message Object  Function Control Register */
#define CAN_MO118_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019EC0u)) /* lint --e(923)*/

/** 1EC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO118_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019EC4u)) /* lint --e(923)*/

/** 1EC8, Message Object  Interrupt Pointer Register */
#define CAN_MO118_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019EC8u)) /* lint --e(923)*/

/** 1EEC, Message Object  Acceptance Mask Register */
#define CAN_MO119_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019EECu)) /* lint --e(923)*/

/** 1EF8, Message Object  Arbitration Register */
#define CAN_MO119_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019EF8u)) /* lint --e(923)*/

/** 1EFC, Message Object  Control Register */
#define CAN_MO119_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019EFCu)) /* lint --e(923)*/

/** 1EF4, Message Object  Data Register High */
#define CAN_MO119_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019EF4u)) /* lint --e(923)*/

/** 1EF0, Message Object  Data Register Low */
#define CAN_MO119_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019EF0u)) /* lint --e(923)*/

/** 1EE0, Message Object  Function Control Register */
#define CAN_MO119_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019EE0u)) /* lint --e(923)*/

/** 1EE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO119_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019EE4u)) /* lint --e(923)*/

/** 1EE8, Message Object  Interrupt Pointer Register */
#define CAN_MO119_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019EE8u)) /* lint --e(923)*/

/** 116C, Message Object  Acceptance Mask Register */
#define CAN_MO11_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001916Cu)) /* lint --e(923)*/

/** 1178, Message Object  Arbitration Register */
#define CAN_MO11_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019178u)) /* lint --e(923)*/

/** 117C, Message Object  Control Register */
#define CAN_MO11_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001917Cu)) /* lint --e(923)*/

/** 1174, Message Object  Data Register High */
#define CAN_MO11_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019174u)) /* lint --e(923)*/

/** 1170, Message Object  Data Register Low */
#define CAN_MO11_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019170u)) /* lint --e(923)*/

/** 1160, Message Object  Function Control Register */
#define CAN_MO11_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019160u)) /* lint --e(923)*/

/** 1164, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO11_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019164u)) /* lint --e(923)*/

/** 1168, Message Object  Interrupt Pointer Register */
#define CAN_MO11_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019168u)) /* lint --e(923)*/

/** 1F0C, Message Object  Acceptance Mask Register */
#define CAN_MO120_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019F0Cu)) /* lint --e(923)*/

/** 1F18, Message Object  Arbitration Register */
#define CAN_MO120_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019F18u)) /* lint --e(923)*/

/** 1F1C, Message Object  Control Register */
#define CAN_MO120_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019F1Cu)) /* lint --e(923)*/

/** 1F14, Message Object  Data Register High */
#define CAN_MO120_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019F14u)) /* lint --e(923)*/

/** 1F10, Message Object  Data Register Low */
#define CAN_MO120_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019F10u)) /* lint --e(923)*/

/** 1F00, Message Object  Function Control Register */
#define CAN_MO120_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019F00u)) /* lint --e(923)*/

/** 1F04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO120_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019F04u)) /* lint --e(923)*/

/** 1F08, Message Object  Interrupt Pointer Register */
#define CAN_MO120_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019F08u)) /* lint --e(923)*/

/** 1F2C, Message Object  Acceptance Mask Register */
#define CAN_MO121_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019F2Cu)) /* lint --e(923)*/

/** 1F38, Message Object  Arbitration Register */
#define CAN_MO121_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019F38u)) /* lint --e(923)*/

/** 1F3C, Message Object  Control Register */
#define CAN_MO121_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019F3Cu)) /* lint --e(923)*/

/** 1F34, Message Object  Data Register High */
#define CAN_MO121_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019F34u)) /* lint --e(923)*/

/** 1F30, Message Object  Data Register Low */
#define CAN_MO121_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019F30u)) /* lint --e(923)*/

/** 1F20, Message Object  Function Control Register */
#define CAN_MO121_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019F20u)) /* lint --e(923)*/

/** 1F24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO121_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019F24u)) /* lint --e(923)*/

/** 1F28, Message Object  Interrupt Pointer Register */
#define CAN_MO121_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019F28u)) /* lint --e(923)*/

/** 1F4C, Message Object  Acceptance Mask Register */
#define CAN_MO122_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019F4Cu)) /* lint --e(923)*/

/** 1F58, Message Object  Arbitration Register */
#define CAN_MO122_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019F58u)) /* lint --e(923)*/

/** 1F5C, Message Object  Control Register */
#define CAN_MO122_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019F5Cu)) /* lint --e(923)*/

/** 1F54, Message Object  Data Register High */
#define CAN_MO122_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019F54u)) /* lint --e(923)*/

/** 1F50, Message Object  Data Register Low */
#define CAN_MO122_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019F50u)) /* lint --e(923)*/

/** 1F40, Message Object  Function Control Register */
#define CAN_MO122_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019F40u)) /* lint --e(923)*/

/** 1F44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO122_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019F44u)) /* lint --e(923)*/

/** 1F48, Message Object  Interrupt Pointer Register */
#define CAN_MO122_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019F48u)) /* lint --e(923)*/

/** 1F6C, Message Object  Acceptance Mask Register */
#define CAN_MO123_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019F6Cu)) /* lint --e(923)*/

/** 1F78, Message Object  Arbitration Register */
#define CAN_MO123_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019F78u)) /* lint --e(923)*/

/** 1F7C, Message Object  Control Register */
#define CAN_MO123_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019F7Cu)) /* lint --e(923)*/

/** 1F74, Message Object  Data Register High */
#define CAN_MO123_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019F74u)) /* lint --e(923)*/

/** 1F70, Message Object  Data Register Low */
#define CAN_MO123_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019F70u)) /* lint --e(923)*/

/** 1F60, Message Object  Function Control Register */
#define CAN_MO123_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019F60u)) /* lint --e(923)*/

/** 1F64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO123_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019F64u)) /* lint --e(923)*/

/** 1F68, Message Object  Interrupt Pointer Register */
#define CAN_MO123_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019F68u)) /* lint --e(923)*/

/** 1F8C, Message Object  Acceptance Mask Register */
#define CAN_MO124_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019F8Cu)) /* lint --e(923)*/

/** 1F98, Message Object  Arbitration Register */
#define CAN_MO124_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019F98u)) /* lint --e(923)*/

/** 1F9C, Message Object  Control Register */
#define CAN_MO124_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019F9Cu)) /* lint --e(923)*/

/** 1F94, Message Object  Data Register High */
#define CAN_MO124_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019F94u)) /* lint --e(923)*/

/** 1F90, Message Object  Data Register Low */
#define CAN_MO124_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019F90u)) /* lint --e(923)*/

/** 1F80, Message Object  Function Control Register */
#define CAN_MO124_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019F80u)) /* lint --e(923)*/

/** 1F84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO124_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019F84u)) /* lint --e(923)*/

/** 1F88, Message Object  Interrupt Pointer Register */
#define CAN_MO124_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019F88u)) /* lint --e(923)*/

/** 1FAC, Message Object  Acceptance Mask Register */
#define CAN_MO125_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019FACu)) /* lint --e(923)*/

/** 1FB8, Message Object  Arbitration Register */
#define CAN_MO125_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019FB8u)) /* lint --e(923)*/

/** 1FBC, Message Object  Control Register */
#define CAN_MO125_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019FBCu)) /* lint --e(923)*/

/** 1FB4, Message Object  Data Register High */
#define CAN_MO125_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019FB4u)) /* lint --e(923)*/

/** 1FB0, Message Object  Data Register Low */
#define CAN_MO125_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019FB0u)) /* lint --e(923)*/

/** 1FA0, Message Object  Function Control Register */
#define CAN_MO125_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019FA0u)) /* lint --e(923)*/

/** 1FA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO125_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019FA4u)) /* lint --e(923)*/

/** 1FA8, Message Object  Interrupt Pointer Register */
#define CAN_MO125_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019FA8u)) /* lint --e(923)*/

/** 1FCC, Message Object  Acceptance Mask Register */
#define CAN_MO126_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019FCCu)) /* lint --e(923)*/

/** 1FD8, Message Object  Arbitration Register */
#define CAN_MO126_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019FD8u)) /* lint --e(923)*/

/** 1FDC, Message Object  Control Register */
#define CAN_MO126_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019FDCu)) /* lint --e(923)*/

/** 1FD4, Message Object  Data Register High */
#define CAN_MO126_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019FD4u)) /* lint --e(923)*/

/** 1FD0, Message Object  Data Register Low */
#define CAN_MO126_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019FD0u)) /* lint --e(923)*/

/** 1FC0, Message Object  Function Control Register */
#define CAN_MO126_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019FC0u)) /* lint --e(923)*/

/** 1FC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO126_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019FC4u)) /* lint --e(923)*/

/** 1FC8, Message Object  Interrupt Pointer Register */
#define CAN_MO126_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019FC8u)) /* lint --e(923)*/

/** 1FEC, Message Object  Acceptance Mask Register */
#define CAN_MO127_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019FECu)) /* lint --e(923)*/

/** 1FF8, Message Object  Arbitration Register */
#define CAN_MO127_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019FF8u)) /* lint --e(923)*/

/** 1FFC, Message Object  Control Register */
#define CAN_MO127_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019FFCu)) /* lint --e(923)*/

/** 1FF4, Message Object  Data Register High */
#define CAN_MO127_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019FF4u)) /* lint --e(923)*/

/** 1FF0, Message Object  Data Register Low */
#define CAN_MO127_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019FF0u)) /* lint --e(923)*/

/** 1FE0, Message Object  Function Control Register */
#define CAN_MO127_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019FE0u)) /* lint --e(923)*/

/** 1FE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO127_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019FE4u)) /* lint --e(923)*/

/** 1FE8, Message Object  Interrupt Pointer Register */
#define CAN_MO127_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019FE8u)) /* lint --e(923)*/

/** 200C, Message Object  Acceptance Mask Register */
#define CAN_MO128_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A00Cu)) /* lint --e(923)*/

/** 2018, Message Object  Arbitration Register */
#define CAN_MO128_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A018u)) /* lint --e(923)*/

/** 201C, Message Object  Control Register */
#define CAN_MO128_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A01Cu)) /* lint --e(923)*/

/** 2014, Message Object  Data Register High */
#define CAN_MO128_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A014u)) /* lint --e(923)*/

/** 2010, Message Object  Data Register Low */
#define CAN_MO128_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A010u)) /* lint --e(923)*/

/** 2000, Message Object  Function Control Register */
#define CAN_MO128_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A000u)) /* lint --e(923)*/

/** 2004, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO128_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A004u)) /* lint --e(923)*/

/** 2008, Message Object  Interrupt Pointer Register */
#define CAN_MO128_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A008u)) /* lint --e(923)*/

/** 202C, Message Object  Acceptance Mask Register */
#define CAN_MO129_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A02Cu)) /* lint --e(923)*/

/** 2038, Message Object  Arbitration Register */
#define CAN_MO129_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A038u)) /* lint --e(923)*/

/** 203C, Message Object  Control Register */
#define CAN_MO129_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A03Cu)) /* lint --e(923)*/

/** 2034, Message Object  Data Register High */
#define CAN_MO129_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A034u)) /* lint --e(923)*/

/** 2030, Message Object  Data Register Low */
#define CAN_MO129_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A030u)) /* lint --e(923)*/

/** 2020, Message Object  Function Control Register */
#define CAN_MO129_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A020u)) /* lint --e(923)*/

/** 2024, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO129_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A024u)) /* lint --e(923)*/

/** 2028, Message Object  Interrupt Pointer Register */
#define CAN_MO129_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A028u)) /* lint --e(923)*/

/** 118C, Message Object  Acceptance Mask Register */
#define CAN_MO12_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001918Cu)) /* lint --e(923)*/

/** 1198, Message Object  Arbitration Register */
#define CAN_MO12_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019198u)) /* lint --e(923)*/

/** 119C, Message Object  Control Register */
#define CAN_MO12_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001919Cu)) /* lint --e(923)*/

/** 1194, Message Object  Data Register High */
#define CAN_MO12_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019194u)) /* lint --e(923)*/

/** 1190, Message Object  Data Register Low */
#define CAN_MO12_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019190u)) /* lint --e(923)*/

/** 1180, Message Object  Function Control Register */
#define CAN_MO12_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019180u)) /* lint --e(923)*/

/** 1184, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO12_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019184u)) /* lint --e(923)*/

/** 1188, Message Object  Interrupt Pointer Register */
#define CAN_MO12_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019188u)) /* lint --e(923)*/

/** 204C, Message Object  Acceptance Mask Register */
#define CAN_MO130_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A04Cu)) /* lint --e(923)*/

/** 2058, Message Object  Arbitration Register */
#define CAN_MO130_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A058u)) /* lint --e(923)*/

/** 205C, Message Object  Control Register */
#define CAN_MO130_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A05Cu)) /* lint --e(923)*/

/** 2054, Message Object  Data Register High */
#define CAN_MO130_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A054u)) /* lint --e(923)*/

/** 2050, Message Object  Data Register Low */
#define CAN_MO130_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A050u)) /* lint --e(923)*/

/** 2040, Message Object  Function Control Register */
#define CAN_MO130_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A040u)) /* lint --e(923)*/

/** 2044, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO130_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A044u)) /* lint --e(923)*/

/** 2048, Message Object  Interrupt Pointer Register */
#define CAN_MO130_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A048u)) /* lint --e(923)*/

/** 206C, Message Object  Acceptance Mask Register */
#define CAN_MO131_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A06Cu)) /* lint --e(923)*/

/** 2078, Message Object  Arbitration Register */
#define CAN_MO131_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A078u)) /* lint --e(923)*/

/** 207C, Message Object  Control Register */
#define CAN_MO131_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A07Cu)) /* lint --e(923)*/

/** 2074, Message Object  Data Register High */
#define CAN_MO131_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A074u)) /* lint --e(923)*/

/** 2070, Message Object  Data Register Low */
#define CAN_MO131_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A070u)) /* lint --e(923)*/

/** 2060, Message Object  Function Control Register */
#define CAN_MO131_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A060u)) /* lint --e(923)*/

/** 2064, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO131_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A064u)) /* lint --e(923)*/

/** 2068, Message Object  Interrupt Pointer Register */
#define CAN_MO131_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A068u)) /* lint --e(923)*/

/** 208C, Message Object  Acceptance Mask Register */
#define CAN_MO132_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A08Cu)) /* lint --e(923)*/

/** 2098, Message Object  Arbitration Register */
#define CAN_MO132_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A098u)) /* lint --e(923)*/

/** 209C, Message Object  Control Register */
#define CAN_MO132_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A09Cu)) /* lint --e(923)*/

/** 2094, Message Object  Data Register High */
#define CAN_MO132_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A094u)) /* lint --e(923)*/

/** 2090, Message Object  Data Register Low */
#define CAN_MO132_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A090u)) /* lint --e(923)*/

/** 2080, Message Object  Function Control Register */
#define CAN_MO132_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A080u)) /* lint --e(923)*/

/** 2084, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO132_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A084u)) /* lint --e(923)*/

/** 2088, Message Object  Interrupt Pointer Register */
#define CAN_MO132_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A088u)) /* lint --e(923)*/

/** 20AC, Message Object  Acceptance Mask Register */
#define CAN_MO133_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A0ACu)) /* lint --e(923)*/

/** 20B8, Message Object  Arbitration Register */
#define CAN_MO133_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A0B8u)) /* lint --e(923)*/

/** 20BC, Message Object  Control Register */
#define CAN_MO133_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A0BCu)) /* lint --e(923)*/

/** 20B4, Message Object  Data Register High */
#define CAN_MO133_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A0B4u)) /* lint --e(923)*/

/** 20B0, Message Object  Data Register Low */
#define CAN_MO133_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A0B0u)) /* lint --e(923)*/

/** 20A0, Message Object  Function Control Register */
#define CAN_MO133_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A0A0u)) /* lint --e(923)*/

/** 20A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO133_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A0A4u)) /* lint --e(923)*/

/** 20A8, Message Object  Interrupt Pointer Register */
#define CAN_MO133_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A0A8u)) /* lint --e(923)*/

/** 20CC, Message Object  Acceptance Mask Register */
#define CAN_MO134_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A0CCu)) /* lint --e(923)*/

/** 20D8, Message Object  Arbitration Register */
#define CAN_MO134_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A0D8u)) /* lint --e(923)*/

/** 20DC, Message Object  Control Register */
#define CAN_MO134_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A0DCu)) /* lint --e(923)*/

/** 20D4, Message Object  Data Register High */
#define CAN_MO134_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A0D4u)) /* lint --e(923)*/

/** 20D0, Message Object  Data Register Low */
#define CAN_MO134_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A0D0u)) /* lint --e(923)*/

/** 20C0, Message Object  Function Control Register */
#define CAN_MO134_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A0C0u)) /* lint --e(923)*/

/** 20C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO134_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A0C4u)) /* lint --e(923)*/

/** 20C8, Message Object  Interrupt Pointer Register */
#define CAN_MO134_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A0C8u)) /* lint --e(923)*/

/** 20EC, Message Object  Acceptance Mask Register */
#define CAN_MO135_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A0ECu)) /* lint --e(923)*/

/** 20F8, Message Object  Arbitration Register */
#define CAN_MO135_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A0F8u)) /* lint --e(923)*/

/** 20FC, Message Object  Control Register */
#define CAN_MO135_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A0FCu)) /* lint --e(923)*/

/** 20F4, Message Object  Data Register High */
#define CAN_MO135_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A0F4u)) /* lint --e(923)*/

/** 20F0, Message Object  Data Register Low */
#define CAN_MO135_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A0F0u)) /* lint --e(923)*/

/** 20E0, Message Object  Function Control Register */
#define CAN_MO135_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A0E0u)) /* lint --e(923)*/

/** 20E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO135_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A0E4u)) /* lint --e(923)*/

/** 20E8, Message Object  Interrupt Pointer Register */
#define CAN_MO135_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A0E8u)) /* lint --e(923)*/

/** 210C, Message Object  Acceptance Mask Register */
#define CAN_MO136_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A10Cu)) /* lint --e(923)*/

/** 2118, Message Object  Arbitration Register */
#define CAN_MO136_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A118u)) /* lint --e(923)*/

/** 211C, Message Object  Control Register */
#define CAN_MO136_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A11Cu)) /* lint --e(923)*/

/** 2114, Message Object  Data Register High */
#define CAN_MO136_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A114u)) /* lint --e(923)*/

/** 2110, Message Object  Data Register Low */
#define CAN_MO136_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A110u)) /* lint --e(923)*/

/** 2100, Message Object  Function Control Register */
#define CAN_MO136_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A100u)) /* lint --e(923)*/

/** 2104, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO136_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A104u)) /* lint --e(923)*/

/** 2108, Message Object  Interrupt Pointer Register */
#define CAN_MO136_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A108u)) /* lint --e(923)*/

/** 212C, Message Object  Acceptance Mask Register */
#define CAN_MO137_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A12Cu)) /* lint --e(923)*/

/** 2138, Message Object  Arbitration Register */
#define CAN_MO137_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A138u)) /* lint --e(923)*/

/** 213C, Message Object  Control Register */
#define CAN_MO137_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A13Cu)) /* lint --e(923)*/

/** 2134, Message Object  Data Register High */
#define CAN_MO137_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A134u)) /* lint --e(923)*/

/** 2130, Message Object  Data Register Low */
#define CAN_MO137_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A130u)) /* lint --e(923)*/

/** 2120, Message Object  Function Control Register */
#define CAN_MO137_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A120u)) /* lint --e(923)*/

/** 2124, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO137_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A124u)) /* lint --e(923)*/

/** 2128, Message Object  Interrupt Pointer Register */
#define CAN_MO137_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A128u)) /* lint --e(923)*/

/** 214C, Message Object  Acceptance Mask Register */
#define CAN_MO138_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A14Cu)) /* lint --e(923)*/

/** 2158, Message Object  Arbitration Register */
#define CAN_MO138_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A158u)) /* lint --e(923)*/

/** 215C, Message Object  Control Register */
#define CAN_MO138_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A15Cu)) /* lint --e(923)*/

/** 2154, Message Object  Data Register High */
#define CAN_MO138_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A154u)) /* lint --e(923)*/

/** 2150, Message Object  Data Register Low */
#define CAN_MO138_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A150u)) /* lint --e(923)*/

/** 2140, Message Object  Function Control Register */
#define CAN_MO138_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A140u)) /* lint --e(923)*/

/** 2144, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO138_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A144u)) /* lint --e(923)*/

/** 2148, Message Object  Interrupt Pointer Register */
#define CAN_MO138_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A148u)) /* lint --e(923)*/

/** 216C, Message Object  Acceptance Mask Register */
#define CAN_MO139_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A16Cu)) /* lint --e(923)*/

/** 2178, Message Object  Arbitration Register */
#define CAN_MO139_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A178u)) /* lint --e(923)*/

/** 217C, Message Object  Control Register */
#define CAN_MO139_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A17Cu)) /* lint --e(923)*/

/** 2174, Message Object  Data Register High */
#define CAN_MO139_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A174u)) /* lint --e(923)*/

/** 2170, Message Object  Data Register Low */
#define CAN_MO139_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A170u)) /* lint --e(923)*/

/** 2160, Message Object  Function Control Register */
#define CAN_MO139_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A160u)) /* lint --e(923)*/

/** 2164, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO139_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A164u)) /* lint --e(923)*/

/** 2168, Message Object  Interrupt Pointer Register */
#define CAN_MO139_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A168u)) /* lint --e(923)*/

/** 11AC, Message Object  Acceptance Mask Register */
#define CAN_MO13_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00191ACu)) /* lint --e(923)*/

/** 11B8, Message Object  Arbitration Register */
#define CAN_MO13_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00191B8u)) /* lint --e(923)*/

/** 11BC, Message Object  Control Register */
#define CAN_MO13_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00191BCu)) /* lint --e(923)*/

/** 11B4, Message Object  Data Register High */
#define CAN_MO13_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00191B4u)) /* lint --e(923)*/

/** 11B0, Message Object  Data Register Low */
#define CAN_MO13_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00191B0u)) /* lint --e(923)*/

/** 11A0, Message Object  Function Control Register */
#define CAN_MO13_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00191A0u)) /* lint --e(923)*/

/** 11A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO13_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00191A4u)) /* lint --e(923)*/

/** 11A8, Message Object  Interrupt Pointer Register */
#define CAN_MO13_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00191A8u)) /* lint --e(923)*/

/** 218C, Message Object  Acceptance Mask Register */
#define CAN_MO140_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A18Cu)) /* lint --e(923)*/

/** 2198, Message Object  Arbitration Register */
#define CAN_MO140_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A198u)) /* lint --e(923)*/

/** 219C, Message Object  Control Register */
#define CAN_MO140_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A19Cu)) /* lint --e(923)*/

/** 2194, Message Object  Data Register High */
#define CAN_MO140_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A194u)) /* lint --e(923)*/

/** 2190, Message Object  Data Register Low */
#define CAN_MO140_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A190u)) /* lint --e(923)*/

/** 2180, Message Object  Function Control Register */
#define CAN_MO140_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A180u)) /* lint --e(923)*/

/** 2184, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO140_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A184u)) /* lint --e(923)*/

/** 2188, Message Object  Interrupt Pointer Register */
#define CAN_MO140_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A188u)) /* lint --e(923)*/

/** 21AC, Message Object  Acceptance Mask Register */
#define CAN_MO141_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A1ACu)) /* lint --e(923)*/

/** 21B8, Message Object  Arbitration Register */
#define CAN_MO141_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A1B8u)) /* lint --e(923)*/

/** 21BC, Message Object  Control Register */
#define CAN_MO141_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A1BCu)) /* lint --e(923)*/

/** 21B4, Message Object  Data Register High */
#define CAN_MO141_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A1B4u)) /* lint --e(923)*/

/** 21B0, Message Object  Data Register Low */
#define CAN_MO141_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A1B0u)) /* lint --e(923)*/

/** 21A0, Message Object  Function Control Register */
#define CAN_MO141_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A1A0u)) /* lint --e(923)*/

/** 21A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO141_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A1A4u)) /* lint --e(923)*/

/** 21A8, Message Object  Interrupt Pointer Register */
#define CAN_MO141_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A1A8u)) /* lint --e(923)*/

/** 21CC, Message Object  Acceptance Mask Register */
#define CAN_MO142_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A1CCu)) /* lint --e(923)*/

/** 21D8, Message Object  Arbitration Register */
#define CAN_MO142_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A1D8u)) /* lint --e(923)*/

/** 21DC, Message Object  Control Register */
#define CAN_MO142_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A1DCu)) /* lint --e(923)*/

/** 21D4, Message Object  Data Register High */
#define CAN_MO142_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A1D4u)) /* lint --e(923)*/

/** 21D0, Message Object  Data Register Low */
#define CAN_MO142_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A1D0u)) /* lint --e(923)*/

/** 21C0, Message Object  Function Control Register */
#define CAN_MO142_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A1C0u)) /* lint --e(923)*/

/** 21C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO142_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A1C4u)) /* lint --e(923)*/

/** 21C8, Message Object  Interrupt Pointer Register */
#define CAN_MO142_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A1C8u)) /* lint --e(923)*/

/** 21EC, Message Object  Acceptance Mask Register */
#define CAN_MO143_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A1ECu)) /* lint --e(923)*/

/** 21F8, Message Object  Arbitration Register */
#define CAN_MO143_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A1F8u)) /* lint --e(923)*/

/** 21FC, Message Object  Control Register */
#define CAN_MO143_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A1FCu)) /* lint --e(923)*/

/** 21F4, Message Object  Data Register High */
#define CAN_MO143_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A1F4u)) /* lint --e(923)*/

/** 21F0, Message Object  Data Register Low */
#define CAN_MO143_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A1F0u)) /* lint --e(923)*/

/** 21E0, Message Object  Function Control Register */
#define CAN_MO143_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A1E0u)) /* lint --e(923)*/

/** 21E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO143_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A1E4u)) /* lint --e(923)*/

/** 21E8, Message Object  Interrupt Pointer Register */
#define CAN_MO143_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A1E8u)) /* lint --e(923)*/

/** 220C, Message Object  Acceptance Mask Register */
#define CAN_MO144_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A20Cu)) /* lint --e(923)*/

/** 2218, Message Object  Arbitration Register */
#define CAN_MO144_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A218u)) /* lint --e(923)*/

/** 221C, Message Object  Control Register */
#define CAN_MO144_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A21Cu)) /* lint --e(923)*/

/** 2214, Message Object  Data Register High */
#define CAN_MO144_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A214u)) /* lint --e(923)*/

/** 2210, Message Object  Data Register Low */
#define CAN_MO144_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A210u)) /* lint --e(923)*/

/** 2200, Message Object  Function Control Register */
#define CAN_MO144_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A200u)) /* lint --e(923)*/

/** 2204, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO144_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A204u)) /* lint --e(923)*/

/** 2208, Message Object  Interrupt Pointer Register */
#define CAN_MO144_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A208u)) /* lint --e(923)*/

/** 222C, Message Object  Acceptance Mask Register */
#define CAN_MO145_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A22Cu)) /* lint --e(923)*/

/** 2238, Message Object  Arbitration Register */
#define CAN_MO145_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A238u)) /* lint --e(923)*/

/** 223C, Message Object  Control Register */
#define CAN_MO145_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A23Cu)) /* lint --e(923)*/

/** 2234, Message Object  Data Register High */
#define CAN_MO145_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A234u)) /* lint --e(923)*/

/** 2230, Message Object  Data Register Low */
#define CAN_MO145_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A230u)) /* lint --e(923)*/

/** 2220, Message Object  Function Control Register */
#define CAN_MO145_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A220u)) /* lint --e(923)*/

/** 2224, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO145_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A224u)) /* lint --e(923)*/

/** 2228, Message Object  Interrupt Pointer Register */
#define CAN_MO145_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A228u)) /* lint --e(923)*/

/** 224C, Message Object  Acceptance Mask Register */
#define CAN_MO146_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A24Cu)) /* lint --e(923)*/

/** 2258, Message Object  Arbitration Register */
#define CAN_MO146_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A258u)) /* lint --e(923)*/

/** 225C, Message Object  Control Register */
#define CAN_MO146_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A25Cu)) /* lint --e(923)*/

/** 2254, Message Object  Data Register High */
#define CAN_MO146_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A254u)) /* lint --e(923)*/

/** 2250, Message Object  Data Register Low */
#define CAN_MO146_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A250u)) /* lint --e(923)*/

/** 2240, Message Object  Function Control Register */
#define CAN_MO146_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A240u)) /* lint --e(923)*/

/** 2244, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO146_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A244u)) /* lint --e(923)*/

/** 2248, Message Object  Interrupt Pointer Register */
#define CAN_MO146_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A248u)) /* lint --e(923)*/

/** 226C, Message Object  Acceptance Mask Register */
#define CAN_MO147_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A26Cu)) /* lint --e(923)*/

/** 2278, Message Object  Arbitration Register */
#define CAN_MO147_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A278u)) /* lint --e(923)*/

/** 227C, Message Object  Control Register */
#define CAN_MO147_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A27Cu)) /* lint --e(923)*/

/** 2274, Message Object  Data Register High */
#define CAN_MO147_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A274u)) /* lint --e(923)*/

/** 2270, Message Object  Data Register Low */
#define CAN_MO147_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A270u)) /* lint --e(923)*/

/** 2260, Message Object  Function Control Register */
#define CAN_MO147_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A260u)) /* lint --e(923)*/

/** 2264, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO147_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A264u)) /* lint --e(923)*/

/** 2268, Message Object  Interrupt Pointer Register */
#define CAN_MO147_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A268u)) /* lint --e(923)*/

/** 228C, Message Object  Acceptance Mask Register */
#define CAN_MO148_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A28Cu)) /* lint --e(923)*/

/** 2298, Message Object  Arbitration Register */
#define CAN_MO148_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A298u)) /* lint --e(923)*/

/** 229C, Message Object  Control Register */
#define CAN_MO148_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A29Cu)) /* lint --e(923)*/

/** 2294, Message Object  Data Register High */
#define CAN_MO148_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A294u)) /* lint --e(923)*/

/** 2290, Message Object  Data Register Low */
#define CAN_MO148_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A290u)) /* lint --e(923)*/

/** 2280, Message Object  Function Control Register */
#define CAN_MO148_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A280u)) /* lint --e(923)*/

/** 2284, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO148_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A284u)) /* lint --e(923)*/

/** 2288, Message Object  Interrupt Pointer Register */
#define CAN_MO148_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A288u)) /* lint --e(923)*/

/** 22AC, Message Object  Acceptance Mask Register */
#define CAN_MO149_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A2ACu)) /* lint --e(923)*/

/** 22B8, Message Object  Arbitration Register */
#define CAN_MO149_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A2B8u)) /* lint --e(923)*/

/** 22BC, Message Object  Control Register */
#define CAN_MO149_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A2BCu)) /* lint --e(923)*/

/** 22B4, Message Object  Data Register High */
#define CAN_MO149_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A2B4u)) /* lint --e(923)*/

/** 22B0, Message Object  Data Register Low */
#define CAN_MO149_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A2B0u)) /* lint --e(923)*/

/** 22A0, Message Object  Function Control Register */
#define CAN_MO149_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A2A0u)) /* lint --e(923)*/

/** 22A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO149_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A2A4u)) /* lint --e(923)*/

/** 22A8, Message Object  Interrupt Pointer Register */
#define CAN_MO149_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A2A8u)) /* lint --e(923)*/

/** 11CC, Message Object  Acceptance Mask Register */
#define CAN_MO14_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00191CCu)) /* lint --e(923)*/

/** 11D8, Message Object  Arbitration Register */
#define CAN_MO14_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00191D8u)) /* lint --e(923)*/

/** 11DC, Message Object  Control Register */
#define CAN_MO14_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00191DCu)) /* lint --e(923)*/

/** 11D4, Message Object  Data Register High */
#define CAN_MO14_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00191D4u)) /* lint --e(923)*/

/** 11D0, Message Object  Data Register Low */
#define CAN_MO14_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00191D0u)) /* lint --e(923)*/

/** 11C0, Message Object  Function Control Register */
#define CAN_MO14_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00191C0u)) /* lint --e(923)*/

/** 11C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO14_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00191C4u)) /* lint --e(923)*/

/** 11C8, Message Object  Interrupt Pointer Register */
#define CAN_MO14_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00191C8u)) /* lint --e(923)*/

/** 22CC, Message Object  Acceptance Mask Register */
#define CAN_MO150_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A2CCu)) /* lint --e(923)*/

/** 22D8, Message Object  Arbitration Register */
#define CAN_MO150_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A2D8u)) /* lint --e(923)*/

/** 22DC, Message Object  Control Register */
#define CAN_MO150_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A2DCu)) /* lint --e(923)*/

/** 22D4, Message Object  Data Register High */
#define CAN_MO150_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A2D4u)) /* lint --e(923)*/

/** 22D0, Message Object  Data Register Low */
#define CAN_MO150_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A2D0u)) /* lint --e(923)*/

/** 22C0, Message Object  Function Control Register */
#define CAN_MO150_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A2C0u)) /* lint --e(923)*/

/** 22C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO150_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A2C4u)) /* lint --e(923)*/

/** 22C8, Message Object  Interrupt Pointer Register */
#define CAN_MO150_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A2C8u)) /* lint --e(923)*/

/** 22EC, Message Object  Acceptance Mask Register */
#define CAN_MO151_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A2ECu)) /* lint --e(923)*/

/** 22F8, Message Object  Arbitration Register */
#define CAN_MO151_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A2F8u)) /* lint --e(923)*/

/** 22FC, Message Object  Control Register */
#define CAN_MO151_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A2FCu)) /* lint --e(923)*/

/** 22F4, Message Object  Data Register High */
#define CAN_MO151_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A2F4u)) /* lint --e(923)*/

/** 22F0, Message Object  Data Register Low */
#define CAN_MO151_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A2F0u)) /* lint --e(923)*/

/** 22E0, Message Object  Function Control Register */
#define CAN_MO151_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A2E0u)) /* lint --e(923)*/

/** 22E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO151_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A2E4u)) /* lint --e(923)*/

/** 22E8, Message Object  Interrupt Pointer Register */
#define CAN_MO151_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A2E8u)) /* lint --e(923)*/

/** 230C, Message Object  Acceptance Mask Register */
#define CAN_MO152_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A30Cu)) /* lint --e(923)*/

/** 2318, Message Object  Arbitration Register */
#define CAN_MO152_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A318u)) /* lint --e(923)*/

/** 231C, Message Object  Control Register */
#define CAN_MO152_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A31Cu)) /* lint --e(923)*/

/** 2314, Message Object  Data Register High */
#define CAN_MO152_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A314u)) /* lint --e(923)*/

/** 2310, Message Object  Data Register Low */
#define CAN_MO152_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A310u)) /* lint --e(923)*/

/** 2300, Message Object  Function Control Register */
#define CAN_MO152_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A300u)) /* lint --e(923)*/

/** 2304, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO152_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A304u)) /* lint --e(923)*/

/** 2308, Message Object  Interrupt Pointer Register */
#define CAN_MO152_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A308u)) /* lint --e(923)*/

/** 232C, Message Object  Acceptance Mask Register */
#define CAN_MO153_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A32Cu)) /* lint --e(923)*/

/** 2338, Message Object  Arbitration Register */
#define CAN_MO153_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A338u)) /* lint --e(923)*/

/** 233C, Message Object  Control Register */
#define CAN_MO153_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A33Cu)) /* lint --e(923)*/

/** 2334, Message Object  Data Register High */
#define CAN_MO153_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A334u)) /* lint --e(923)*/

/** 2330, Message Object  Data Register Low */
#define CAN_MO153_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A330u)) /* lint --e(923)*/

/** 2320, Message Object  Function Control Register */
#define CAN_MO153_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A320u)) /* lint --e(923)*/

/** 2324, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO153_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A324u)) /* lint --e(923)*/

/** 2328, Message Object  Interrupt Pointer Register */
#define CAN_MO153_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A328u)) /* lint --e(923)*/

/** 234C, Message Object  Acceptance Mask Register */
#define CAN_MO154_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A34Cu)) /* lint --e(923)*/

/** 2358, Message Object  Arbitration Register */
#define CAN_MO154_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A358u)) /* lint --e(923)*/

/** 235C, Message Object  Control Register */
#define CAN_MO154_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A35Cu)) /* lint --e(923)*/

/** 2354, Message Object  Data Register High */
#define CAN_MO154_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A354u)) /* lint --e(923)*/

/** 2350, Message Object  Data Register Low */
#define CAN_MO154_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A350u)) /* lint --e(923)*/

/** 2340, Message Object  Function Control Register */
#define CAN_MO154_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A340u)) /* lint --e(923)*/

/** 2344, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO154_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A344u)) /* lint --e(923)*/

/** 2348, Message Object  Interrupt Pointer Register */
#define CAN_MO154_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A348u)) /* lint --e(923)*/

/** 236C, Message Object  Acceptance Mask Register */
#define CAN_MO155_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A36Cu)) /* lint --e(923)*/

/** 2378, Message Object  Arbitration Register */
#define CAN_MO155_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A378u)) /* lint --e(923)*/

/** 237C, Message Object  Control Register */
#define CAN_MO155_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A37Cu)) /* lint --e(923)*/

/** 2374, Message Object  Data Register High */
#define CAN_MO155_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A374u)) /* lint --e(923)*/

/** 2370, Message Object  Data Register Low */
#define CAN_MO155_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A370u)) /* lint --e(923)*/

/** 2360, Message Object  Function Control Register */
#define CAN_MO155_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A360u)) /* lint --e(923)*/

/** 2364, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO155_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A364u)) /* lint --e(923)*/

/** 2368, Message Object  Interrupt Pointer Register */
#define CAN_MO155_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A368u)) /* lint --e(923)*/

/** 238C, Message Object  Acceptance Mask Register */
#define CAN_MO156_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A38Cu)) /* lint --e(923)*/

/** 2398, Message Object  Arbitration Register */
#define CAN_MO156_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A398u)) /* lint --e(923)*/

/** 239C, Message Object  Control Register */
#define CAN_MO156_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A39Cu)) /* lint --e(923)*/

/** 2394, Message Object  Data Register High */
#define CAN_MO156_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A394u)) /* lint --e(923)*/

/** 2390, Message Object  Data Register Low */
#define CAN_MO156_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A390u)) /* lint --e(923)*/

/** 2380, Message Object  Function Control Register */
#define CAN_MO156_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A380u)) /* lint --e(923)*/

/** 2384, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO156_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A384u)) /* lint --e(923)*/

/** 2388, Message Object  Interrupt Pointer Register */
#define CAN_MO156_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A388u)) /* lint --e(923)*/

/** 23AC, Message Object  Acceptance Mask Register */
#define CAN_MO157_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A3ACu)) /* lint --e(923)*/

/** 23B8, Message Object  Arbitration Register */
#define CAN_MO157_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A3B8u)) /* lint --e(923)*/

/** 23BC, Message Object  Control Register */
#define CAN_MO157_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A3BCu)) /* lint --e(923)*/

/** 23B4, Message Object  Data Register High */
#define CAN_MO157_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A3B4u)) /* lint --e(923)*/

/** 23B0, Message Object  Data Register Low */
#define CAN_MO157_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A3B0u)) /* lint --e(923)*/

/** 23A0, Message Object  Function Control Register */
#define CAN_MO157_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A3A0u)) /* lint --e(923)*/

/** 23A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO157_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A3A4u)) /* lint --e(923)*/

/** 23A8, Message Object  Interrupt Pointer Register */
#define CAN_MO157_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A3A8u)) /* lint --e(923)*/

/** 23CC, Message Object  Acceptance Mask Register */
#define CAN_MO158_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A3CCu)) /* lint --e(923)*/

/** 23D8, Message Object  Arbitration Register */
#define CAN_MO158_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A3D8u)) /* lint --e(923)*/

/** 23DC, Message Object  Control Register */
#define CAN_MO158_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A3DCu)) /* lint --e(923)*/

/** 23D4, Message Object  Data Register High */
#define CAN_MO158_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A3D4u)) /* lint --e(923)*/

/** 23D0, Message Object  Data Register Low */
#define CAN_MO158_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A3D0u)) /* lint --e(923)*/

/** 23C0, Message Object  Function Control Register */
#define CAN_MO158_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A3C0u)) /* lint --e(923)*/

/** 23C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO158_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A3C4u)) /* lint --e(923)*/

/** 23C8, Message Object  Interrupt Pointer Register */
#define CAN_MO158_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A3C8u)) /* lint --e(923)*/

/** 23EC, Message Object  Acceptance Mask Register */
#define CAN_MO159_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A3ECu)) /* lint --e(923)*/

/** 23F8, Message Object  Arbitration Register */
#define CAN_MO159_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A3F8u)) /* lint --e(923)*/

/** 23FC, Message Object  Control Register */
#define CAN_MO159_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A3FCu)) /* lint --e(923)*/

/** 23F4, Message Object  Data Register High */
#define CAN_MO159_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A3F4u)) /* lint --e(923)*/

/** 23F0, Message Object  Data Register Low */
#define CAN_MO159_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A3F0u)) /* lint --e(923)*/

/** 23E0, Message Object  Function Control Register */
#define CAN_MO159_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A3E0u)) /* lint --e(923)*/

/** 23E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO159_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A3E4u)) /* lint --e(923)*/

/** 23E8, Message Object  Interrupt Pointer Register */
#define CAN_MO159_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A3E8u)) /* lint --e(923)*/

/** 11EC, Message Object  Acceptance Mask Register */
#define CAN_MO15_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00191ECu)) /* lint --e(923)*/

/** 11F8, Message Object  Arbitration Register */
#define CAN_MO15_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00191F8u)) /* lint --e(923)*/

/** 11FC, Message Object  Control Register */
#define CAN_MO15_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00191FCu)) /* lint --e(923)*/

/** 11F4, Message Object  Data Register High */
#define CAN_MO15_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00191F4u)) /* lint --e(923)*/

/** 11F0, Message Object  Data Register Low */
#define CAN_MO15_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00191F0u)) /* lint --e(923)*/

/** 11E0, Message Object  Function Control Register */
#define CAN_MO15_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00191E0u)) /* lint --e(923)*/

/** 11E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO15_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00191E4u)) /* lint --e(923)*/

/** 11E8, Message Object  Interrupt Pointer Register */
#define CAN_MO15_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00191E8u)) /* lint --e(923)*/

/** 240C, Message Object  Acceptance Mask Register */
#define CAN_MO160_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A40Cu)) /* lint --e(923)*/

/** 2418, Message Object  Arbitration Register */
#define CAN_MO160_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A418u)) /* lint --e(923)*/

/** 241C, Message Object  Control Register */
#define CAN_MO160_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A41Cu)) /* lint --e(923)*/

/** 2414, Message Object  Data Register High */
#define CAN_MO160_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A414u)) /* lint --e(923)*/

/** 2410, Message Object  Data Register Low */
#define CAN_MO160_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A410u)) /* lint --e(923)*/

/** 2400, Message Object  Function Control Register */
#define CAN_MO160_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A400u)) /* lint --e(923)*/

/** 2404, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO160_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A404u)) /* lint --e(923)*/

/** 2408, Message Object  Interrupt Pointer Register */
#define CAN_MO160_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A408u)) /* lint --e(923)*/

/** 242C, Message Object  Acceptance Mask Register */
#define CAN_MO161_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A42Cu)) /* lint --e(923)*/

/** 2438, Message Object  Arbitration Register */
#define CAN_MO161_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A438u)) /* lint --e(923)*/

/** 243C, Message Object  Control Register */
#define CAN_MO161_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A43Cu)) /* lint --e(923)*/

/** 2434, Message Object  Data Register High */
#define CAN_MO161_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A434u)) /* lint --e(923)*/

/** 2430, Message Object  Data Register Low */
#define CAN_MO161_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A430u)) /* lint --e(923)*/

/** 2420, Message Object  Function Control Register */
#define CAN_MO161_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A420u)) /* lint --e(923)*/

/** 2424, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO161_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A424u)) /* lint --e(923)*/

/** 2428, Message Object  Interrupt Pointer Register */
#define CAN_MO161_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A428u)) /* lint --e(923)*/

/** 244C, Message Object  Acceptance Mask Register */
#define CAN_MO162_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A44Cu)) /* lint --e(923)*/

/** 2458, Message Object  Arbitration Register */
#define CAN_MO162_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A458u)) /* lint --e(923)*/

/** 245C, Message Object  Control Register */
#define CAN_MO162_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A45Cu)) /* lint --e(923)*/

/** 2454, Message Object  Data Register High */
#define CAN_MO162_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A454u)) /* lint --e(923)*/

/** 2450, Message Object  Data Register Low */
#define CAN_MO162_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A450u)) /* lint --e(923)*/

/** 2440, Message Object  Function Control Register */
#define CAN_MO162_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A440u)) /* lint --e(923)*/

/** 2444, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO162_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A444u)) /* lint --e(923)*/

/** 2448, Message Object  Interrupt Pointer Register */
#define CAN_MO162_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A448u)) /* lint --e(923)*/

/** 246C, Message Object  Acceptance Mask Register */
#define CAN_MO163_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A46Cu)) /* lint --e(923)*/

/** 2478, Message Object  Arbitration Register */
#define CAN_MO163_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A478u)) /* lint --e(923)*/

/** 247C, Message Object  Control Register */
#define CAN_MO163_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A47Cu)) /* lint --e(923)*/

/** 2474, Message Object  Data Register High */
#define CAN_MO163_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A474u)) /* lint --e(923)*/

/** 2470, Message Object  Data Register Low */
#define CAN_MO163_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A470u)) /* lint --e(923)*/

/** 2460, Message Object  Function Control Register */
#define CAN_MO163_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A460u)) /* lint --e(923)*/

/** 2464, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO163_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A464u)) /* lint --e(923)*/

/** 2468, Message Object  Interrupt Pointer Register */
#define CAN_MO163_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A468u)) /* lint --e(923)*/

/** 248C, Message Object  Acceptance Mask Register */
#define CAN_MO164_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A48Cu)) /* lint --e(923)*/

/** 2498, Message Object  Arbitration Register */
#define CAN_MO164_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A498u)) /* lint --e(923)*/

/** 249C, Message Object  Control Register */
#define CAN_MO164_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A49Cu)) /* lint --e(923)*/

/** 2494, Message Object  Data Register High */
#define CAN_MO164_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A494u)) /* lint --e(923)*/

/** 2490, Message Object  Data Register Low */
#define CAN_MO164_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A490u)) /* lint --e(923)*/

/** 2480, Message Object  Function Control Register */
#define CAN_MO164_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A480u)) /* lint --e(923)*/

/** 2484, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO164_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A484u)) /* lint --e(923)*/

/** 2488, Message Object  Interrupt Pointer Register */
#define CAN_MO164_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A488u)) /* lint --e(923)*/

/** 24AC, Message Object  Acceptance Mask Register */
#define CAN_MO165_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A4ACu)) /* lint --e(923)*/

/** 24B8, Message Object  Arbitration Register */
#define CAN_MO165_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A4B8u)) /* lint --e(923)*/

/** 24BC, Message Object  Control Register */
#define CAN_MO165_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A4BCu)) /* lint --e(923)*/

/** 24B4, Message Object  Data Register High */
#define CAN_MO165_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A4B4u)) /* lint --e(923)*/

/** 24B0, Message Object  Data Register Low */
#define CAN_MO165_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A4B0u)) /* lint --e(923)*/

/** 24A0, Message Object  Function Control Register */
#define CAN_MO165_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A4A0u)) /* lint --e(923)*/

/** 24A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO165_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A4A4u)) /* lint --e(923)*/

/** 24A8, Message Object  Interrupt Pointer Register */
#define CAN_MO165_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A4A8u)) /* lint --e(923)*/

/** 24CC, Message Object  Acceptance Mask Register */
#define CAN_MO166_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A4CCu)) /* lint --e(923)*/

/** 24D8, Message Object  Arbitration Register */
#define CAN_MO166_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A4D8u)) /* lint --e(923)*/

/** 24DC, Message Object  Control Register */
#define CAN_MO166_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A4DCu)) /* lint --e(923)*/

/** 24D4, Message Object  Data Register High */
#define CAN_MO166_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A4D4u)) /* lint --e(923)*/

/** 24D0, Message Object  Data Register Low */
#define CAN_MO166_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A4D0u)) /* lint --e(923)*/

/** 24C0, Message Object  Function Control Register */
#define CAN_MO166_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A4C0u)) /* lint --e(923)*/

/** 24C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO166_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A4C4u)) /* lint --e(923)*/

/** 24C8, Message Object  Interrupt Pointer Register */
#define CAN_MO166_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A4C8u)) /* lint --e(923)*/

/** 24EC, Message Object  Acceptance Mask Register */
#define CAN_MO167_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A4ECu)) /* lint --e(923)*/

/** 24F8, Message Object  Arbitration Register */
#define CAN_MO167_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A4F8u)) /* lint --e(923)*/

/** 24FC, Message Object  Control Register */
#define CAN_MO167_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A4FCu)) /* lint --e(923)*/

/** 24F4, Message Object  Data Register High */
#define CAN_MO167_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A4F4u)) /* lint --e(923)*/

/** 24F0, Message Object  Data Register Low */
#define CAN_MO167_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A4F0u)) /* lint --e(923)*/

/** 24E0, Message Object  Function Control Register */
#define CAN_MO167_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A4E0u)) /* lint --e(923)*/

/** 24E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO167_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A4E4u)) /* lint --e(923)*/

/** 24E8, Message Object  Interrupt Pointer Register */
#define CAN_MO167_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A4E8u)) /* lint --e(923)*/

/** 250C, Message Object  Acceptance Mask Register */
#define CAN_MO168_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A50Cu)) /* lint --e(923)*/

/** 2518, Message Object  Arbitration Register */
#define CAN_MO168_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A518u)) /* lint --e(923)*/

/** 251C, Message Object  Control Register */
#define CAN_MO168_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A51Cu)) /* lint --e(923)*/

/** 2514, Message Object  Data Register High */
#define CAN_MO168_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A514u)) /* lint --e(923)*/

/** 2510, Message Object  Data Register Low */
#define CAN_MO168_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A510u)) /* lint --e(923)*/

/** 2500, Message Object  Function Control Register */
#define CAN_MO168_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A500u)) /* lint --e(923)*/

/** 2504, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO168_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A504u)) /* lint --e(923)*/

/** 2508, Message Object  Interrupt Pointer Register */
#define CAN_MO168_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A508u)) /* lint --e(923)*/

/** 252C, Message Object  Acceptance Mask Register */
#define CAN_MO169_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A52Cu)) /* lint --e(923)*/

/** 2538, Message Object  Arbitration Register */
#define CAN_MO169_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A538u)) /* lint --e(923)*/

/** 253C, Message Object  Control Register */
#define CAN_MO169_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A53Cu)) /* lint --e(923)*/

/** 2534, Message Object  Data Register High */
#define CAN_MO169_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A534u)) /* lint --e(923)*/

/** 2530, Message Object  Data Register Low */
#define CAN_MO169_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A530u)) /* lint --e(923)*/

/** 2520, Message Object  Function Control Register */
#define CAN_MO169_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A520u)) /* lint --e(923)*/

/** 2524, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO169_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A524u)) /* lint --e(923)*/

/** 2528, Message Object  Interrupt Pointer Register */
#define CAN_MO169_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A528u)) /* lint --e(923)*/

/** 120C, Message Object  Acceptance Mask Register */
#define CAN_MO16_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001920Cu)) /* lint --e(923)*/

/** 1218, Message Object  Arbitration Register */
#define CAN_MO16_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019218u)) /* lint --e(923)*/

/** 121C, Message Object  Control Register */
#define CAN_MO16_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001921Cu)) /* lint --e(923)*/

/** 1214, Message Object  Data Register High */
#define CAN_MO16_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019214u)) /* lint --e(923)*/

/** 1210, Message Object  Data Register Low */
#define CAN_MO16_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019210u)) /* lint --e(923)*/

/** 1200, Message Object  Function Control Register */
#define CAN_MO16_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019200u)) /* lint --e(923)*/

/** 1204, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO16_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019204u)) /* lint --e(923)*/

/** 1208, Message Object  Interrupt Pointer Register */
#define CAN_MO16_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019208u)) /* lint --e(923)*/

/** 254C, Message Object  Acceptance Mask Register */
#define CAN_MO170_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A54Cu)) /* lint --e(923)*/

/** 2558, Message Object  Arbitration Register */
#define CAN_MO170_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A558u)) /* lint --e(923)*/

/** 255C, Message Object  Control Register */
#define CAN_MO170_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A55Cu)) /* lint --e(923)*/

/** 2554, Message Object  Data Register High */
#define CAN_MO170_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A554u)) /* lint --e(923)*/

/** 2550, Message Object  Data Register Low */
#define CAN_MO170_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A550u)) /* lint --e(923)*/

/** 2540, Message Object  Function Control Register */
#define CAN_MO170_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A540u)) /* lint --e(923)*/

/** 2544, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO170_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A544u)) /* lint --e(923)*/

/** 2548, Message Object  Interrupt Pointer Register */
#define CAN_MO170_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A548u)) /* lint --e(923)*/

/** 256C, Message Object  Acceptance Mask Register */
#define CAN_MO171_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A56Cu)) /* lint --e(923)*/

/** 2578, Message Object  Arbitration Register */
#define CAN_MO171_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A578u)) /* lint --e(923)*/

/** 257C, Message Object  Control Register */
#define CAN_MO171_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A57Cu)) /* lint --e(923)*/

/** 2574, Message Object  Data Register High */
#define CAN_MO171_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A574u)) /* lint --e(923)*/

/** 2570, Message Object  Data Register Low */
#define CAN_MO171_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A570u)) /* lint --e(923)*/

/** 2560, Message Object  Function Control Register */
#define CAN_MO171_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A560u)) /* lint --e(923)*/

/** 2564, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO171_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A564u)) /* lint --e(923)*/

/** 2568, Message Object  Interrupt Pointer Register */
#define CAN_MO171_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A568u)) /* lint --e(923)*/

/** 258C, Message Object  Acceptance Mask Register */
#define CAN_MO172_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A58Cu)) /* lint --e(923)*/

/** 2598, Message Object  Arbitration Register */
#define CAN_MO172_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A598u)) /* lint --e(923)*/

/** 259C, Message Object  Control Register */
#define CAN_MO172_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A59Cu)) /* lint --e(923)*/

/** 2594, Message Object  Data Register High */
#define CAN_MO172_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A594u)) /* lint --e(923)*/

/** 2590, Message Object  Data Register Low */
#define CAN_MO172_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A590u)) /* lint --e(923)*/

/** 2580, Message Object  Function Control Register */
#define CAN_MO172_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A580u)) /* lint --e(923)*/

/** 2584, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO172_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A584u)) /* lint --e(923)*/

/** 2588, Message Object  Interrupt Pointer Register */
#define CAN_MO172_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A588u)) /* lint --e(923)*/

/** 25AC, Message Object  Acceptance Mask Register */
#define CAN_MO173_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A5ACu)) /* lint --e(923)*/

/** 25B8, Message Object  Arbitration Register */
#define CAN_MO173_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A5B8u)) /* lint --e(923)*/

/** 25BC, Message Object  Control Register */
#define CAN_MO173_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A5BCu)) /* lint --e(923)*/

/** 25B4, Message Object  Data Register High */
#define CAN_MO173_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A5B4u)) /* lint --e(923)*/

/** 25B0, Message Object  Data Register Low */
#define CAN_MO173_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A5B0u)) /* lint --e(923)*/

/** 25A0, Message Object  Function Control Register */
#define CAN_MO173_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A5A0u)) /* lint --e(923)*/

/** 25A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO173_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A5A4u)) /* lint --e(923)*/

/** 25A8, Message Object  Interrupt Pointer Register */
#define CAN_MO173_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A5A8u)) /* lint --e(923)*/

/** 25CC, Message Object  Acceptance Mask Register */
#define CAN_MO174_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A5CCu)) /* lint --e(923)*/

/** 25D8, Message Object  Arbitration Register */
#define CAN_MO174_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A5D8u)) /* lint --e(923)*/

/** 25DC, Message Object  Control Register */
#define CAN_MO174_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A5DCu)) /* lint --e(923)*/

/** 25D4, Message Object  Data Register High */
#define CAN_MO174_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A5D4u)) /* lint --e(923)*/

/** 25D0, Message Object  Data Register Low */
#define CAN_MO174_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A5D0u)) /* lint --e(923)*/

/** 25C0, Message Object  Function Control Register */
#define CAN_MO174_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A5C0u)) /* lint --e(923)*/

/** 25C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO174_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A5C4u)) /* lint --e(923)*/

/** 25C8, Message Object  Interrupt Pointer Register */
#define CAN_MO174_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A5C8u)) /* lint --e(923)*/

/** 25EC, Message Object  Acceptance Mask Register */
#define CAN_MO175_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A5ECu)) /* lint --e(923)*/

/** 25F8, Message Object  Arbitration Register */
#define CAN_MO175_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A5F8u)) /* lint --e(923)*/

/** 25FC, Message Object  Control Register */
#define CAN_MO175_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A5FCu)) /* lint --e(923)*/

/** 25F4, Message Object  Data Register High */
#define CAN_MO175_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A5F4u)) /* lint --e(923)*/

/** 25F0, Message Object  Data Register Low */
#define CAN_MO175_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A5F0u)) /* lint --e(923)*/

/** 25E0, Message Object  Function Control Register */
#define CAN_MO175_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A5E0u)) /* lint --e(923)*/

/** 25E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO175_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A5E4u)) /* lint --e(923)*/

/** 25E8, Message Object  Interrupt Pointer Register */
#define CAN_MO175_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A5E8u)) /* lint --e(923)*/

/** 260C, Message Object  Acceptance Mask Register */
#define CAN_MO176_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A60Cu)) /* lint --e(923)*/

/** 2618, Message Object  Arbitration Register */
#define CAN_MO176_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A618u)) /* lint --e(923)*/

/** 261C, Message Object  Control Register */
#define CAN_MO176_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A61Cu)) /* lint --e(923)*/

/** 2614, Message Object  Data Register High */
#define CAN_MO176_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A614u)) /* lint --e(923)*/

/** 2610, Message Object  Data Register Low */
#define CAN_MO176_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A610u)) /* lint --e(923)*/

/** 2600, Message Object  Function Control Register */
#define CAN_MO176_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A600u)) /* lint --e(923)*/

/** 2604, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO176_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A604u)) /* lint --e(923)*/

/** 2608, Message Object  Interrupt Pointer Register */
#define CAN_MO176_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A608u)) /* lint --e(923)*/

/** 262C, Message Object  Acceptance Mask Register */
#define CAN_MO177_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A62Cu)) /* lint --e(923)*/

/** 2638, Message Object  Arbitration Register */
#define CAN_MO177_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A638u)) /* lint --e(923)*/

/** 263C, Message Object  Control Register */
#define CAN_MO177_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A63Cu)) /* lint --e(923)*/

/** 2634, Message Object  Data Register High */
#define CAN_MO177_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A634u)) /* lint --e(923)*/

/** 2630, Message Object  Data Register Low */
#define CAN_MO177_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A630u)) /* lint --e(923)*/

/** 2620, Message Object  Function Control Register */
#define CAN_MO177_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A620u)) /* lint --e(923)*/

/** 2624, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO177_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A624u)) /* lint --e(923)*/

/** 2628, Message Object  Interrupt Pointer Register */
#define CAN_MO177_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A628u)) /* lint --e(923)*/

/** 264C, Message Object  Acceptance Mask Register */
#define CAN_MO178_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A64Cu)) /* lint --e(923)*/

/** 2658, Message Object  Arbitration Register */
#define CAN_MO178_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A658u)) /* lint --e(923)*/

/** 265C, Message Object  Control Register */
#define CAN_MO178_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A65Cu)) /* lint --e(923)*/

/** 2654, Message Object  Data Register High */
#define CAN_MO178_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A654u)) /* lint --e(923)*/

/** 2650, Message Object  Data Register Low */
#define CAN_MO178_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A650u)) /* lint --e(923)*/

/** 2640, Message Object  Function Control Register */
#define CAN_MO178_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A640u)) /* lint --e(923)*/

/** 2644, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO178_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A644u)) /* lint --e(923)*/

/** 2648, Message Object  Interrupt Pointer Register */
#define CAN_MO178_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A648u)) /* lint --e(923)*/

/** 266C, Message Object  Acceptance Mask Register */
#define CAN_MO179_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A66Cu)) /* lint --e(923)*/

/** 2678, Message Object  Arbitration Register */
#define CAN_MO179_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A678u)) /* lint --e(923)*/

/** 267C, Message Object  Control Register */
#define CAN_MO179_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A67Cu)) /* lint --e(923)*/

/** 2674, Message Object  Data Register High */
#define CAN_MO179_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A674u)) /* lint --e(923)*/

/** 2670, Message Object  Data Register Low */
#define CAN_MO179_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A670u)) /* lint --e(923)*/

/** 2660, Message Object  Function Control Register */
#define CAN_MO179_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A660u)) /* lint --e(923)*/

/** 2664, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO179_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A664u)) /* lint --e(923)*/

/** 2668, Message Object  Interrupt Pointer Register */
#define CAN_MO179_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A668u)) /* lint --e(923)*/

/** 122C, Message Object  Acceptance Mask Register */
#define CAN_MO17_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001922Cu)) /* lint --e(923)*/

/** 1238, Message Object  Arbitration Register */
#define CAN_MO17_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019238u)) /* lint --e(923)*/

/** 123C, Message Object  Control Register */
#define CAN_MO17_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001923Cu)) /* lint --e(923)*/

/** 1234, Message Object  Data Register High */
#define CAN_MO17_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019234u)) /* lint --e(923)*/

/** 1230, Message Object  Data Register Low */
#define CAN_MO17_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019230u)) /* lint --e(923)*/

/** 1220, Message Object  Function Control Register */
#define CAN_MO17_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019220u)) /* lint --e(923)*/

/** 1224, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO17_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019224u)) /* lint --e(923)*/

/** 1228, Message Object  Interrupt Pointer Register */
#define CAN_MO17_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019228u)) /* lint --e(923)*/

/** 268C, Message Object  Acceptance Mask Register */
#define CAN_MO180_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A68Cu)) /* lint --e(923)*/

/** 2698, Message Object  Arbitration Register */
#define CAN_MO180_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A698u)) /* lint --e(923)*/

/** 269C, Message Object  Control Register */
#define CAN_MO180_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A69Cu)) /* lint --e(923)*/

/** 2694, Message Object  Data Register High */
#define CAN_MO180_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A694u)) /* lint --e(923)*/

/** 2690, Message Object  Data Register Low */
#define CAN_MO180_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A690u)) /* lint --e(923)*/

/** 2680, Message Object  Function Control Register */
#define CAN_MO180_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A680u)) /* lint --e(923)*/

/** 2684, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO180_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A684u)) /* lint --e(923)*/

/** 2688, Message Object  Interrupt Pointer Register */
#define CAN_MO180_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A688u)) /* lint --e(923)*/

/** 26AC, Message Object  Acceptance Mask Register */
#define CAN_MO181_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A6ACu)) /* lint --e(923)*/

/** 26B8, Message Object  Arbitration Register */
#define CAN_MO181_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A6B8u)) /* lint --e(923)*/

/** 26BC, Message Object  Control Register */
#define CAN_MO181_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A6BCu)) /* lint --e(923)*/

/** 26B4, Message Object  Data Register High */
#define CAN_MO181_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A6B4u)) /* lint --e(923)*/

/** 26B0, Message Object  Data Register Low */
#define CAN_MO181_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A6B0u)) /* lint --e(923)*/

/** 26A0, Message Object  Function Control Register */
#define CAN_MO181_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A6A0u)) /* lint --e(923)*/

/** 26A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO181_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A6A4u)) /* lint --e(923)*/

/** 26A8, Message Object  Interrupt Pointer Register */
#define CAN_MO181_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A6A8u)) /* lint --e(923)*/

/** 26CC, Message Object  Acceptance Mask Register */
#define CAN_MO182_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A6CCu)) /* lint --e(923)*/

/** 26D8, Message Object  Arbitration Register */
#define CAN_MO182_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A6D8u)) /* lint --e(923)*/

/** 26DC, Message Object  Control Register */
#define CAN_MO182_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A6DCu)) /* lint --e(923)*/

/** 26D4, Message Object  Data Register High */
#define CAN_MO182_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A6D4u)) /* lint --e(923)*/

/** 26D0, Message Object  Data Register Low */
#define CAN_MO182_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A6D0u)) /* lint --e(923)*/

/** 26C0, Message Object  Function Control Register */
#define CAN_MO182_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A6C0u)) /* lint --e(923)*/

/** 26C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO182_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A6C4u)) /* lint --e(923)*/

/** 26C8, Message Object  Interrupt Pointer Register */
#define CAN_MO182_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A6C8u)) /* lint --e(923)*/

/** 26EC, Message Object  Acceptance Mask Register */
#define CAN_MO183_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A6ECu)) /* lint --e(923)*/

/** 26F8, Message Object  Arbitration Register */
#define CAN_MO183_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A6F8u)) /* lint --e(923)*/

/** 26FC, Message Object  Control Register */
#define CAN_MO183_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A6FCu)) /* lint --e(923)*/

/** 26F4, Message Object  Data Register High */
#define CAN_MO183_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A6F4u)) /* lint --e(923)*/

/** 26F0, Message Object  Data Register Low */
#define CAN_MO183_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A6F0u)) /* lint --e(923)*/

/** 26E0, Message Object  Function Control Register */
#define CAN_MO183_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A6E0u)) /* lint --e(923)*/

/** 26E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO183_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A6E4u)) /* lint --e(923)*/

/** 26E8, Message Object  Interrupt Pointer Register */
#define CAN_MO183_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A6E8u)) /* lint --e(923)*/

/** 270C, Message Object  Acceptance Mask Register */
#define CAN_MO184_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A70Cu)) /* lint --e(923)*/

/** 2718, Message Object  Arbitration Register */
#define CAN_MO184_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A718u)) /* lint --e(923)*/

/** 271C, Message Object  Control Register */
#define CAN_MO184_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A71Cu)) /* lint --e(923)*/

/** 2714, Message Object  Data Register High */
#define CAN_MO184_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A714u)) /* lint --e(923)*/

/** 2710, Message Object  Data Register Low */
#define CAN_MO184_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A710u)) /* lint --e(923)*/

/** 2700, Message Object  Function Control Register */
#define CAN_MO184_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A700u)) /* lint --e(923)*/

/** 2704, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO184_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A704u)) /* lint --e(923)*/

/** 2708, Message Object  Interrupt Pointer Register */
#define CAN_MO184_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A708u)) /* lint --e(923)*/

/** 272C, Message Object  Acceptance Mask Register */
#define CAN_MO185_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A72Cu)) /* lint --e(923)*/

/** 2738, Message Object  Arbitration Register */
#define CAN_MO185_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A738u)) /* lint --e(923)*/

/** 273C, Message Object  Control Register */
#define CAN_MO185_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A73Cu)) /* lint --e(923)*/

/** 2734, Message Object  Data Register High */
#define CAN_MO185_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A734u)) /* lint --e(923)*/

/** 2730, Message Object  Data Register Low */
#define CAN_MO185_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A730u)) /* lint --e(923)*/

/** 2720, Message Object  Function Control Register */
#define CAN_MO185_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A720u)) /* lint --e(923)*/

/** 2724, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO185_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A724u)) /* lint --e(923)*/

/** 2728, Message Object  Interrupt Pointer Register */
#define CAN_MO185_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A728u)) /* lint --e(923)*/

/** 274C, Message Object  Acceptance Mask Register */
#define CAN_MO186_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A74Cu)) /* lint --e(923)*/

/** 2758, Message Object  Arbitration Register */
#define CAN_MO186_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A758u)) /* lint --e(923)*/

/** 275C, Message Object  Control Register */
#define CAN_MO186_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A75Cu)) /* lint --e(923)*/

/** 2754, Message Object  Data Register High */
#define CAN_MO186_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A754u)) /* lint --e(923)*/

/** 2750, Message Object  Data Register Low */
#define CAN_MO186_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A750u)) /* lint --e(923)*/

/** 2740, Message Object  Function Control Register */
#define CAN_MO186_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A740u)) /* lint --e(923)*/

/** 2744, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO186_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A744u)) /* lint --e(923)*/

/** 2748, Message Object  Interrupt Pointer Register */
#define CAN_MO186_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A748u)) /* lint --e(923)*/

/** 276C, Message Object  Acceptance Mask Register */
#define CAN_MO187_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A76Cu)) /* lint --e(923)*/

/** 2778, Message Object  Arbitration Register */
#define CAN_MO187_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A778u)) /* lint --e(923)*/

/** 277C, Message Object  Control Register */
#define CAN_MO187_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A77Cu)) /* lint --e(923)*/

/** 2774, Message Object  Data Register High */
#define CAN_MO187_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A774u)) /* lint --e(923)*/

/** 2770, Message Object  Data Register Low */
#define CAN_MO187_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A770u)) /* lint --e(923)*/

/** 2760, Message Object  Function Control Register */
#define CAN_MO187_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A760u)) /* lint --e(923)*/

/** 2764, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO187_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A764u)) /* lint --e(923)*/

/** 2768, Message Object  Interrupt Pointer Register */
#define CAN_MO187_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A768u)) /* lint --e(923)*/

/** 278C, Message Object  Acceptance Mask Register */
#define CAN_MO188_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A78Cu)) /* lint --e(923)*/

/** 2798, Message Object  Arbitration Register */
#define CAN_MO188_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A798u)) /* lint --e(923)*/

/** 279C, Message Object  Control Register */
#define CAN_MO188_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A79Cu)) /* lint --e(923)*/

/** 2794, Message Object  Data Register High */
#define CAN_MO188_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A794u)) /* lint --e(923)*/

/** 2790, Message Object  Data Register Low */
#define CAN_MO188_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A790u)) /* lint --e(923)*/

/** 2780, Message Object  Function Control Register */
#define CAN_MO188_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A780u)) /* lint --e(923)*/

/** 2784, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO188_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A784u)) /* lint --e(923)*/

/** 2788, Message Object  Interrupt Pointer Register */
#define CAN_MO188_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A788u)) /* lint --e(923)*/

/** 27AC, Message Object  Acceptance Mask Register */
#define CAN_MO189_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A7ACu)) /* lint --e(923)*/

/** 27B8, Message Object  Arbitration Register */
#define CAN_MO189_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A7B8u)) /* lint --e(923)*/

/** 27BC, Message Object  Control Register */
#define CAN_MO189_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A7BCu)) /* lint --e(923)*/

/** 27B4, Message Object  Data Register High */
#define CAN_MO189_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A7B4u)) /* lint --e(923)*/

/** 27B0, Message Object  Data Register Low */
#define CAN_MO189_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A7B0u)) /* lint --e(923)*/

/** 27A0, Message Object  Function Control Register */
#define CAN_MO189_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A7A0u)) /* lint --e(923)*/

/** 27A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO189_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A7A4u)) /* lint --e(923)*/

/** 27A8, Message Object  Interrupt Pointer Register */
#define CAN_MO189_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A7A8u)) /* lint --e(923)*/

/** 124C, Message Object  Acceptance Mask Register */
#define CAN_MO18_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001924Cu)) /* lint --e(923)*/

/** 1258, Message Object  Arbitration Register */
#define CAN_MO18_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019258u)) /* lint --e(923)*/

/** 125C, Message Object  Control Register */
#define CAN_MO18_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001925Cu)) /* lint --e(923)*/

/** 1254, Message Object  Data Register High */
#define CAN_MO18_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019254u)) /* lint --e(923)*/

/** 1250, Message Object  Data Register Low */
#define CAN_MO18_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019250u)) /* lint --e(923)*/

/** 1240, Message Object  Function Control Register */
#define CAN_MO18_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019240u)) /* lint --e(923)*/

/** 1244, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO18_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019244u)) /* lint --e(923)*/

/** 1248, Message Object  Interrupt Pointer Register */
#define CAN_MO18_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019248u)) /* lint --e(923)*/

/** 27CC, Message Object  Acceptance Mask Register */
#define CAN_MO190_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A7CCu)) /* lint --e(923)*/

/** 27D8, Message Object  Arbitration Register */
#define CAN_MO190_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A7D8u)) /* lint --e(923)*/

/** 27DC, Message Object  Control Register */
#define CAN_MO190_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A7DCu)) /* lint --e(923)*/

/** 27D4, Message Object  Data Register High */
#define CAN_MO190_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A7D4u)) /* lint --e(923)*/

/** 27D0, Message Object  Data Register Low */
#define CAN_MO190_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A7D0u)) /* lint --e(923)*/

/** 27C0, Message Object  Function Control Register */
#define CAN_MO190_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A7C0u)) /* lint --e(923)*/

/** 27C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO190_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A7C4u)) /* lint --e(923)*/

/** 27C8, Message Object  Interrupt Pointer Register */
#define CAN_MO190_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A7C8u)) /* lint --e(923)*/

/** 27EC, Message Object  Acceptance Mask Register */
#define CAN_MO191_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A7ECu)) /* lint --e(923)*/

/** 27F8, Message Object  Arbitration Register */
#define CAN_MO191_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A7F8u)) /* lint --e(923)*/

/** 27FC, Message Object  Control Register */
#define CAN_MO191_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A7FCu)) /* lint --e(923)*/

/** 27F4, Message Object  Data Register High */
#define CAN_MO191_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A7F4u)) /* lint --e(923)*/

/** 27F0, Message Object  Data Register Low */
#define CAN_MO191_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A7F0u)) /* lint --e(923)*/

/** 27E0, Message Object  Function Control Register */
#define CAN_MO191_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A7E0u)) /* lint --e(923)*/

/** 27E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO191_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A7E4u)) /* lint --e(923)*/

/** 27E8, Message Object  Interrupt Pointer Register */
#define CAN_MO191_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A7E8u)) /* lint --e(923)*/

/** 280C, Message Object  Acceptance Mask Register */
#define CAN_MO192_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A80Cu)) /* lint --e(923)*/

/** 2818, Message Object  Arbitration Register */
#define CAN_MO192_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A818u)) /* lint --e(923)*/

/** 281C, Message Object  Control Register */
#define CAN_MO192_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A81Cu)) /* lint --e(923)*/

/** 2814, Message Object  Data Register High */
#define CAN_MO192_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A814u)) /* lint --e(923)*/

/** 2810, Message Object  Data Register Low */
#define CAN_MO192_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A810u)) /* lint --e(923)*/

/** 2800, Message Object  Function Control Register */
#define CAN_MO192_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A800u)) /* lint --e(923)*/

/** 2804, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO192_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A804u)) /* lint --e(923)*/

/** 2808, Message Object  Interrupt Pointer Register */
#define CAN_MO192_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A808u)) /* lint --e(923)*/

/** 282C, Message Object  Acceptance Mask Register */
#define CAN_MO193_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A82Cu)) /* lint --e(923)*/

/** 2838, Message Object  Arbitration Register */
#define CAN_MO193_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A838u)) /* lint --e(923)*/

/** 283C, Message Object  Control Register */
#define CAN_MO193_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A83Cu)) /* lint --e(923)*/

/** 2834, Message Object  Data Register High */
#define CAN_MO193_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A834u)) /* lint --e(923)*/

/** 2830, Message Object  Data Register Low */
#define CAN_MO193_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A830u)) /* lint --e(923)*/

/** 2820, Message Object  Function Control Register */
#define CAN_MO193_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A820u)) /* lint --e(923)*/

/** 2824, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO193_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A824u)) /* lint --e(923)*/

/** 2828, Message Object  Interrupt Pointer Register */
#define CAN_MO193_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A828u)) /* lint --e(923)*/

/** 284C, Message Object  Acceptance Mask Register */
#define CAN_MO194_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A84Cu)) /* lint --e(923)*/

/** 2858, Message Object  Arbitration Register */
#define CAN_MO194_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A858u)) /* lint --e(923)*/

/** 285C, Message Object  Control Register */
#define CAN_MO194_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A85Cu)) /* lint --e(923)*/

/** 2854, Message Object  Data Register High */
#define CAN_MO194_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A854u)) /* lint --e(923)*/

/** 2850, Message Object  Data Register Low */
#define CAN_MO194_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A850u)) /* lint --e(923)*/

/** 2840, Message Object  Function Control Register */
#define CAN_MO194_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A840u)) /* lint --e(923)*/

/** 2844, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO194_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A844u)) /* lint --e(923)*/

/** 2848, Message Object  Interrupt Pointer Register */
#define CAN_MO194_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A848u)) /* lint --e(923)*/

/** 286C, Message Object  Acceptance Mask Register */
#define CAN_MO195_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A86Cu)) /* lint --e(923)*/

/** 2878, Message Object  Arbitration Register */
#define CAN_MO195_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A878u)) /* lint --e(923)*/

/** 287C, Message Object  Control Register */
#define CAN_MO195_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A87Cu)) /* lint --e(923)*/

/** 2874, Message Object  Data Register High */
#define CAN_MO195_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A874u)) /* lint --e(923)*/

/** 2870, Message Object  Data Register Low */
#define CAN_MO195_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A870u)) /* lint --e(923)*/

/** 2860, Message Object  Function Control Register */
#define CAN_MO195_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A860u)) /* lint --e(923)*/

/** 2864, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO195_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A864u)) /* lint --e(923)*/

/** 2868, Message Object  Interrupt Pointer Register */
#define CAN_MO195_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A868u)) /* lint --e(923)*/

/** 288C, Message Object  Acceptance Mask Register */
#define CAN_MO196_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A88Cu)) /* lint --e(923)*/

/** 2898, Message Object  Arbitration Register */
#define CAN_MO196_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A898u)) /* lint --e(923)*/

/** 289C, Message Object  Control Register */
#define CAN_MO196_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A89Cu)) /* lint --e(923)*/

/** 2894, Message Object  Data Register High */
#define CAN_MO196_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A894u)) /* lint --e(923)*/

/** 2890, Message Object  Data Register Low */
#define CAN_MO196_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A890u)) /* lint --e(923)*/

/** 2880, Message Object  Function Control Register */
#define CAN_MO196_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A880u)) /* lint --e(923)*/

/** 2884, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO196_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A884u)) /* lint --e(923)*/

/** 2888, Message Object  Interrupt Pointer Register */
#define CAN_MO196_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A888u)) /* lint --e(923)*/

/** 28AC, Message Object  Acceptance Mask Register */
#define CAN_MO197_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A8ACu)) /* lint --e(923)*/

/** 28B8, Message Object  Arbitration Register */
#define CAN_MO197_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A8B8u)) /* lint --e(923)*/

/** 28BC, Message Object  Control Register */
#define CAN_MO197_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A8BCu)) /* lint --e(923)*/

/** 28B4, Message Object  Data Register High */
#define CAN_MO197_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A8B4u)) /* lint --e(923)*/

/** 28B0, Message Object  Data Register Low */
#define CAN_MO197_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A8B0u)) /* lint --e(923)*/

/** 28A0, Message Object  Function Control Register */
#define CAN_MO197_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A8A0u)) /* lint --e(923)*/

/** 28A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO197_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A8A4u)) /* lint --e(923)*/

/** 28A8, Message Object  Interrupt Pointer Register */
#define CAN_MO197_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A8A8u)) /* lint --e(923)*/

/** 28CC, Message Object  Acceptance Mask Register */
#define CAN_MO198_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A8CCu)) /* lint --e(923)*/

/** 28D8, Message Object  Arbitration Register */
#define CAN_MO198_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A8D8u)) /* lint --e(923)*/

/** 28DC, Message Object  Control Register */
#define CAN_MO198_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A8DCu)) /* lint --e(923)*/

/** 28D4, Message Object  Data Register High */
#define CAN_MO198_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A8D4u)) /* lint --e(923)*/

/** 28D0, Message Object  Data Register Low */
#define CAN_MO198_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A8D0u)) /* lint --e(923)*/

/** 28C0, Message Object  Function Control Register */
#define CAN_MO198_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A8C0u)) /* lint --e(923)*/

/** 28C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO198_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A8C4u)) /* lint --e(923)*/

/** 28C8, Message Object  Interrupt Pointer Register */
#define CAN_MO198_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A8C8u)) /* lint --e(923)*/

/** 28EC, Message Object  Acceptance Mask Register */
#define CAN_MO199_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A8ECu)) /* lint --e(923)*/

/** 28F8, Message Object  Arbitration Register */
#define CAN_MO199_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A8F8u)) /* lint --e(923)*/

/** 28FC, Message Object  Control Register */
#define CAN_MO199_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A8FCu)) /* lint --e(923)*/

/** 28F4, Message Object  Data Register High */
#define CAN_MO199_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A8F4u)) /* lint --e(923)*/

/** 28F0, Message Object  Data Register Low */
#define CAN_MO199_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A8F0u)) /* lint --e(923)*/

/** 28E0, Message Object  Function Control Register */
#define CAN_MO199_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A8E0u)) /* lint --e(923)*/

/** 28E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO199_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A8E4u)) /* lint --e(923)*/

/** 28E8, Message Object  Interrupt Pointer Register */
#define CAN_MO199_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A8E8u)) /* lint --e(923)*/

/** 126C, Message Object  Acceptance Mask Register */
#define CAN_MO19_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001926Cu)) /* lint --e(923)*/

/** 1278, Message Object  Arbitration Register */
#define CAN_MO19_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019278u)) /* lint --e(923)*/

/** 127C, Message Object  Control Register */
#define CAN_MO19_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001927Cu)) /* lint --e(923)*/

/** 1274, Message Object  Data Register High */
#define CAN_MO19_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019274u)) /* lint --e(923)*/

/** 1270, Message Object  Data Register Low */
#define CAN_MO19_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019270u)) /* lint --e(923)*/

/** 1260, Message Object  Function Control Register */
#define CAN_MO19_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019260u)) /* lint --e(923)*/

/** 1264, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO19_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019264u)) /* lint --e(923)*/

/** 1268, Message Object  Interrupt Pointer Register */
#define CAN_MO19_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019268u)) /* lint --e(923)*/

/** 102C, Message Object  Acceptance Mask Register */
#define CAN_MO1_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001902Cu)) /* lint --e(923)*/

/** 1038, Message Object  Arbitration Register */
#define CAN_MO1_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019038u)) /* lint --e(923)*/

/** 103C, Message Object  Control Register */
#define CAN_MO1_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001903Cu)) /* lint --e(923)*/

/** 1034, Message Object  Data Register High */
#define CAN_MO1_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019034u)) /* lint --e(923)*/

/** 1030, Message Object  Data Register Low */
#define CAN_MO1_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019030u)) /* lint --e(923)*/

/** 1020, Message Object  Function Control Register */
#define CAN_MO1_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019020u)) /* lint --e(923)*/

/** 1024, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO1_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019024u)) /* lint --e(923)*/

/** 1028, Message Object  Interrupt Pointer Register */
#define CAN_MO1_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019028u)) /* lint --e(923)*/

/** 290C, Message Object  Acceptance Mask Register */
#define CAN_MO200_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A90Cu)) /* lint --e(923)*/

/** 2918, Message Object  Arbitration Register */
#define CAN_MO200_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A918u)) /* lint --e(923)*/

/** 291C, Message Object  Control Register */
#define CAN_MO200_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A91Cu)) /* lint --e(923)*/

/** 2914, Message Object  Data Register High */
#define CAN_MO200_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A914u)) /* lint --e(923)*/

/** 2910, Message Object  Data Register Low */
#define CAN_MO200_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A910u)) /* lint --e(923)*/

/** 2900, Message Object  Function Control Register */
#define CAN_MO200_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A900u)) /* lint --e(923)*/

/** 2904, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO200_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A904u)) /* lint --e(923)*/

/** 2908, Message Object  Interrupt Pointer Register */
#define CAN_MO200_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A908u)) /* lint --e(923)*/

/** 292C, Message Object  Acceptance Mask Register */
#define CAN_MO201_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A92Cu)) /* lint --e(923)*/

/** 2938, Message Object  Arbitration Register */
#define CAN_MO201_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A938u)) /* lint --e(923)*/

/** 293C, Message Object  Control Register */
#define CAN_MO201_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A93Cu)) /* lint --e(923)*/

/** 2934, Message Object  Data Register High */
#define CAN_MO201_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A934u)) /* lint --e(923)*/

/** 2930, Message Object  Data Register Low */
#define CAN_MO201_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A930u)) /* lint --e(923)*/

/** 2920, Message Object  Function Control Register */
#define CAN_MO201_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A920u)) /* lint --e(923)*/

/** 2924, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO201_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A924u)) /* lint --e(923)*/

/** 2928, Message Object  Interrupt Pointer Register */
#define CAN_MO201_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A928u)) /* lint --e(923)*/

/** 294C, Message Object  Acceptance Mask Register */
#define CAN_MO202_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A94Cu)) /* lint --e(923)*/

/** 2958, Message Object  Arbitration Register */
#define CAN_MO202_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A958u)) /* lint --e(923)*/

/** 295C, Message Object  Control Register */
#define CAN_MO202_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A95Cu)) /* lint --e(923)*/

/** 2954, Message Object  Data Register High */
#define CAN_MO202_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A954u)) /* lint --e(923)*/

/** 2950, Message Object  Data Register Low */
#define CAN_MO202_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A950u)) /* lint --e(923)*/

/** 2940, Message Object  Function Control Register */
#define CAN_MO202_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A940u)) /* lint --e(923)*/

/** 2944, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO202_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A944u)) /* lint --e(923)*/

/** 2948, Message Object  Interrupt Pointer Register */
#define CAN_MO202_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A948u)) /* lint --e(923)*/

/** 296C, Message Object  Acceptance Mask Register */
#define CAN_MO203_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A96Cu)) /* lint --e(923)*/

/** 2978, Message Object  Arbitration Register */
#define CAN_MO203_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A978u)) /* lint --e(923)*/

/** 297C, Message Object  Control Register */
#define CAN_MO203_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A97Cu)) /* lint --e(923)*/

/** 2974, Message Object  Data Register High */
#define CAN_MO203_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A974u)) /* lint --e(923)*/

/** 2970, Message Object  Data Register Low */
#define CAN_MO203_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A970u)) /* lint --e(923)*/

/** 2960, Message Object  Function Control Register */
#define CAN_MO203_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A960u)) /* lint --e(923)*/

/** 2964, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO203_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A964u)) /* lint --e(923)*/

/** 2968, Message Object  Interrupt Pointer Register */
#define CAN_MO203_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A968u)) /* lint --e(923)*/

/** 298C, Message Object  Acceptance Mask Register */
#define CAN_MO204_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A98Cu)) /* lint --e(923)*/

/** 2998, Message Object  Arbitration Register */
#define CAN_MO204_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A998u)) /* lint --e(923)*/

/** 299C, Message Object  Control Register */
#define CAN_MO204_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A99Cu)) /* lint --e(923)*/

/** 2994, Message Object  Data Register High */
#define CAN_MO204_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A994u)) /* lint --e(923)*/

/** 2990, Message Object  Data Register Low */
#define CAN_MO204_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A990u)) /* lint --e(923)*/

/** 2980, Message Object  Function Control Register */
#define CAN_MO204_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A980u)) /* lint --e(923)*/

/** 2984, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO204_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A984u)) /* lint --e(923)*/

/** 2988, Message Object  Interrupt Pointer Register */
#define CAN_MO204_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A988u)) /* lint --e(923)*/

/** 29AC, Message Object  Acceptance Mask Register */
#define CAN_MO205_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A9ACu)) /* lint --e(923)*/

/** 29B8, Message Object  Arbitration Register */
#define CAN_MO205_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A9B8u)) /* lint --e(923)*/

/** 29BC, Message Object  Control Register */
#define CAN_MO205_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A9BCu)) /* lint --e(923)*/

/** 29B4, Message Object  Data Register High */
#define CAN_MO205_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A9B4u)) /* lint --e(923)*/

/** 29B0, Message Object  Data Register Low */
#define CAN_MO205_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A9B0u)) /* lint --e(923)*/

/** 29A0, Message Object  Function Control Register */
#define CAN_MO205_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A9A0u)) /* lint --e(923)*/

/** 29A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO205_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A9A4u)) /* lint --e(923)*/

/** 29A8, Message Object  Interrupt Pointer Register */
#define CAN_MO205_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A9A8u)) /* lint --e(923)*/

/** 29CC, Message Object  Acceptance Mask Register */
#define CAN_MO206_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A9CCu)) /* lint --e(923)*/

/** 29D8, Message Object  Arbitration Register */
#define CAN_MO206_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A9D8u)) /* lint --e(923)*/

/** 29DC, Message Object  Control Register */
#define CAN_MO206_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A9DCu)) /* lint --e(923)*/

/** 29D4, Message Object  Data Register High */
#define CAN_MO206_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A9D4u)) /* lint --e(923)*/

/** 29D0, Message Object  Data Register Low */
#define CAN_MO206_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A9D0u)) /* lint --e(923)*/

/** 29C0, Message Object  Function Control Register */
#define CAN_MO206_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A9C0u)) /* lint --e(923)*/

/** 29C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO206_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A9C4u)) /* lint --e(923)*/

/** 29C8, Message Object  Interrupt Pointer Register */
#define CAN_MO206_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A9C8u)) /* lint --e(923)*/

/** 29EC, Message Object  Acceptance Mask Register */
#define CAN_MO207_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001A9ECu)) /* lint --e(923)*/

/** 29F8, Message Object  Arbitration Register */
#define CAN_MO207_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001A9F8u)) /* lint --e(923)*/

/** 29FC, Message Object  Control Register */
#define CAN_MO207_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001A9FCu)) /* lint --e(923)*/

/** 29F4, Message Object  Data Register High */
#define CAN_MO207_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001A9F4u)) /* lint --e(923)*/

/** 29F0, Message Object  Data Register Low */
#define CAN_MO207_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001A9F0u)) /* lint --e(923)*/

/** 29E0, Message Object  Function Control Register */
#define CAN_MO207_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001A9E0u)) /* lint --e(923)*/

/** 29E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO207_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001A9E4u)) /* lint --e(923)*/

/** 29E8, Message Object  Interrupt Pointer Register */
#define CAN_MO207_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001A9E8u)) /* lint --e(923)*/

/** 2A0C, Message Object  Acceptance Mask Register */
#define CAN_MO208_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AA0Cu)) /* lint --e(923)*/

/** 2A18, Message Object  Arbitration Register */
#define CAN_MO208_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AA18u)) /* lint --e(923)*/

/** 2A1C, Message Object  Control Register */
#define CAN_MO208_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AA1Cu)) /* lint --e(923)*/

/** 2A14, Message Object  Data Register High */
#define CAN_MO208_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AA14u)) /* lint --e(923)*/

/** 2A10, Message Object  Data Register Low */
#define CAN_MO208_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AA10u)) /* lint --e(923)*/

/** 2A00, Message Object  Function Control Register */
#define CAN_MO208_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AA00u)) /* lint --e(923)*/

/** 2A04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO208_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AA04u)) /* lint --e(923)*/

/** 2A08, Message Object  Interrupt Pointer Register */
#define CAN_MO208_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AA08u)) /* lint --e(923)*/

/** 2A2C, Message Object  Acceptance Mask Register */
#define CAN_MO209_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AA2Cu)) /* lint --e(923)*/

/** 2A38, Message Object  Arbitration Register */
#define CAN_MO209_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AA38u)) /* lint --e(923)*/

/** 2A3C, Message Object  Control Register */
#define CAN_MO209_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AA3Cu)) /* lint --e(923)*/

/** 2A34, Message Object  Data Register High */
#define CAN_MO209_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AA34u)) /* lint --e(923)*/

/** 2A30, Message Object  Data Register Low */
#define CAN_MO209_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AA30u)) /* lint --e(923)*/

/** 2A20, Message Object  Function Control Register */
#define CAN_MO209_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AA20u)) /* lint --e(923)*/

/** 2A24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO209_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AA24u)) /* lint --e(923)*/

/** 2A28, Message Object  Interrupt Pointer Register */
#define CAN_MO209_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AA28u)) /* lint --e(923)*/

/** 128C, Message Object  Acceptance Mask Register */
#define CAN_MO20_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001928Cu)) /* lint --e(923)*/

/** 1298, Message Object  Arbitration Register */
#define CAN_MO20_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019298u)) /* lint --e(923)*/

/** 129C, Message Object  Control Register */
#define CAN_MO20_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001929Cu)) /* lint --e(923)*/

/** 1294, Message Object  Data Register High */
#define CAN_MO20_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019294u)) /* lint --e(923)*/

/** 1290, Message Object  Data Register Low */
#define CAN_MO20_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019290u)) /* lint --e(923)*/

/** 1280, Message Object  Function Control Register */
#define CAN_MO20_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019280u)) /* lint --e(923)*/

/** 1284, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO20_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019284u)) /* lint --e(923)*/

/** 1288, Message Object  Interrupt Pointer Register */
#define CAN_MO20_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019288u)) /* lint --e(923)*/

/** 2A4C, Message Object  Acceptance Mask Register */
#define CAN_MO210_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AA4Cu)) /* lint --e(923)*/

/** 2A58, Message Object  Arbitration Register */
#define CAN_MO210_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AA58u)) /* lint --e(923)*/

/** 2A5C, Message Object  Control Register */
#define CAN_MO210_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AA5Cu)) /* lint --e(923)*/

/** 2A54, Message Object  Data Register High */
#define CAN_MO210_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AA54u)) /* lint --e(923)*/

/** 2A50, Message Object  Data Register Low */
#define CAN_MO210_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AA50u)) /* lint --e(923)*/

/** 2A40, Message Object  Function Control Register */
#define CAN_MO210_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AA40u)) /* lint --e(923)*/

/** 2A44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO210_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AA44u)) /* lint --e(923)*/

/** 2A48, Message Object  Interrupt Pointer Register */
#define CAN_MO210_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AA48u)) /* lint --e(923)*/

/** 2A6C, Message Object  Acceptance Mask Register */
#define CAN_MO211_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AA6Cu)) /* lint --e(923)*/

/** 2A78, Message Object  Arbitration Register */
#define CAN_MO211_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AA78u)) /* lint --e(923)*/

/** 2A7C, Message Object  Control Register */
#define CAN_MO211_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AA7Cu)) /* lint --e(923)*/

/** 2A74, Message Object  Data Register High */
#define CAN_MO211_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AA74u)) /* lint --e(923)*/

/** 2A70, Message Object  Data Register Low */
#define CAN_MO211_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AA70u)) /* lint --e(923)*/

/** 2A60, Message Object  Function Control Register */
#define CAN_MO211_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AA60u)) /* lint --e(923)*/

/** 2A64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO211_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AA64u)) /* lint --e(923)*/

/** 2A68, Message Object  Interrupt Pointer Register */
#define CAN_MO211_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AA68u)) /* lint --e(923)*/

/** 2A8C, Message Object  Acceptance Mask Register */
#define CAN_MO212_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AA8Cu)) /* lint --e(923)*/

/** 2A98, Message Object  Arbitration Register */
#define CAN_MO212_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AA98u)) /* lint --e(923)*/

/** 2A9C, Message Object  Control Register */
#define CAN_MO212_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AA9Cu)) /* lint --e(923)*/

/** 2A94, Message Object  Data Register High */
#define CAN_MO212_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AA94u)) /* lint --e(923)*/

/** 2A90, Message Object  Data Register Low */
#define CAN_MO212_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AA90u)) /* lint --e(923)*/

/** 2A80, Message Object  Function Control Register */
#define CAN_MO212_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AA80u)) /* lint --e(923)*/

/** 2A84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO212_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AA84u)) /* lint --e(923)*/

/** 2A88, Message Object  Interrupt Pointer Register */
#define CAN_MO212_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AA88u)) /* lint --e(923)*/

/** 2AAC, Message Object  Acceptance Mask Register */
#define CAN_MO213_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AAACu)) /* lint --e(923)*/

/** 2AB8, Message Object  Arbitration Register */
#define CAN_MO213_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AAB8u)) /* lint --e(923)*/

/** 2ABC, Message Object  Control Register */
#define CAN_MO213_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AABCu)) /* lint --e(923)*/

/** 2AB4, Message Object  Data Register High */
#define CAN_MO213_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AAB4u)) /* lint --e(923)*/

/** 2AB0, Message Object  Data Register Low */
#define CAN_MO213_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AAB0u)) /* lint --e(923)*/

/** 2AA0, Message Object  Function Control Register */
#define CAN_MO213_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AAA0u)) /* lint --e(923)*/

/** 2AA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO213_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AAA4u)) /* lint --e(923)*/

/** 2AA8, Message Object  Interrupt Pointer Register */
#define CAN_MO213_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AAA8u)) /* lint --e(923)*/

/** 2ACC, Message Object  Acceptance Mask Register */
#define CAN_MO214_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AACCu)) /* lint --e(923)*/

/** 2AD8, Message Object  Arbitration Register */
#define CAN_MO214_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AAD8u)) /* lint --e(923)*/

/** 2ADC, Message Object  Control Register */
#define CAN_MO214_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AADCu)) /* lint --e(923)*/

/** 2AD4, Message Object  Data Register High */
#define CAN_MO214_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AAD4u)) /* lint --e(923)*/

/** 2AD0, Message Object  Data Register Low */
#define CAN_MO214_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AAD0u)) /* lint --e(923)*/

/** 2AC0, Message Object  Function Control Register */
#define CAN_MO214_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AAC0u)) /* lint --e(923)*/

/** 2AC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO214_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AAC4u)) /* lint --e(923)*/

/** 2AC8, Message Object  Interrupt Pointer Register */
#define CAN_MO214_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AAC8u)) /* lint --e(923)*/

/** 2AEC, Message Object  Acceptance Mask Register */
#define CAN_MO215_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AAECu)) /* lint --e(923)*/

/** 2AF8, Message Object  Arbitration Register */
#define CAN_MO215_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AAF8u)) /* lint --e(923)*/

/** 2AFC, Message Object  Control Register */
#define CAN_MO215_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AAFCu)) /* lint --e(923)*/

/** 2AF4, Message Object  Data Register High */
#define CAN_MO215_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AAF4u)) /* lint --e(923)*/

/** 2AF0, Message Object  Data Register Low */
#define CAN_MO215_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AAF0u)) /* lint --e(923)*/

/** 2AE0, Message Object  Function Control Register */
#define CAN_MO215_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AAE0u)) /* lint --e(923)*/

/** 2AE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO215_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AAE4u)) /* lint --e(923)*/

/** 2AE8, Message Object  Interrupt Pointer Register */
#define CAN_MO215_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AAE8u)) /* lint --e(923)*/

/** 2B0C, Message Object  Acceptance Mask Register */
#define CAN_MO216_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AB0Cu)) /* lint --e(923)*/

/** 2B18, Message Object  Arbitration Register */
#define CAN_MO216_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AB18u)) /* lint --e(923)*/

/** 2B1C, Message Object  Control Register */
#define CAN_MO216_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AB1Cu)) /* lint --e(923)*/

/** 2B14, Message Object  Data Register High */
#define CAN_MO216_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AB14u)) /* lint --e(923)*/

/** 2B10, Message Object  Data Register Low */
#define CAN_MO216_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AB10u)) /* lint --e(923)*/

/** 2B00, Message Object  Function Control Register */
#define CAN_MO216_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AB00u)) /* lint --e(923)*/

/** 2B04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO216_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AB04u)) /* lint --e(923)*/

/** 2B08, Message Object  Interrupt Pointer Register */
#define CAN_MO216_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AB08u)) /* lint --e(923)*/

/** 2B2C, Message Object  Acceptance Mask Register */
#define CAN_MO217_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AB2Cu)) /* lint --e(923)*/

/** 2B38, Message Object  Arbitration Register */
#define CAN_MO217_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AB38u)) /* lint --e(923)*/

/** 2B3C, Message Object  Control Register */
#define CAN_MO217_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AB3Cu)) /* lint --e(923)*/

/** 2B34, Message Object  Data Register High */
#define CAN_MO217_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AB34u)) /* lint --e(923)*/

/** 2B30, Message Object  Data Register Low */
#define CAN_MO217_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AB30u)) /* lint --e(923)*/

/** 2B20, Message Object  Function Control Register */
#define CAN_MO217_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AB20u)) /* lint --e(923)*/

/** 2B24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO217_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AB24u)) /* lint --e(923)*/

/** 2B28, Message Object  Interrupt Pointer Register */
#define CAN_MO217_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AB28u)) /* lint --e(923)*/

/** 2B4C, Message Object  Acceptance Mask Register */
#define CAN_MO218_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AB4Cu)) /* lint --e(923)*/

/** 2B58, Message Object  Arbitration Register */
#define CAN_MO218_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AB58u)) /* lint --e(923)*/

/** 2B5C, Message Object  Control Register */
#define CAN_MO218_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AB5Cu)) /* lint --e(923)*/

/** 2B54, Message Object  Data Register High */
#define CAN_MO218_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AB54u)) /* lint --e(923)*/

/** 2B50, Message Object  Data Register Low */
#define CAN_MO218_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AB50u)) /* lint --e(923)*/

/** 2B40, Message Object  Function Control Register */
#define CAN_MO218_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AB40u)) /* lint --e(923)*/

/** 2B44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO218_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AB44u)) /* lint --e(923)*/

/** 2B48, Message Object  Interrupt Pointer Register */
#define CAN_MO218_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AB48u)) /* lint --e(923)*/

/** 2B6C, Message Object  Acceptance Mask Register */
#define CAN_MO219_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AB6Cu)) /* lint --e(923)*/

/** 2B78, Message Object  Arbitration Register */
#define CAN_MO219_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AB78u)) /* lint --e(923)*/

/** 2B7C, Message Object  Control Register */
#define CAN_MO219_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AB7Cu)) /* lint --e(923)*/

/** 2B74, Message Object  Data Register High */
#define CAN_MO219_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AB74u)) /* lint --e(923)*/

/** 2B70, Message Object  Data Register Low */
#define CAN_MO219_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AB70u)) /* lint --e(923)*/

/** 2B60, Message Object  Function Control Register */
#define CAN_MO219_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AB60u)) /* lint --e(923)*/

/** 2B64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO219_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AB64u)) /* lint --e(923)*/

/** 2B68, Message Object  Interrupt Pointer Register */
#define CAN_MO219_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AB68u)) /* lint --e(923)*/

/** 12AC, Message Object  Acceptance Mask Register */
#define CAN_MO21_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00192ACu)) /* lint --e(923)*/

/** 12B8, Message Object  Arbitration Register */
#define CAN_MO21_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00192B8u)) /* lint --e(923)*/

/** 12BC, Message Object  Control Register */
#define CAN_MO21_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00192BCu)) /* lint --e(923)*/

/** 12B4, Message Object  Data Register High */
#define CAN_MO21_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00192B4u)) /* lint --e(923)*/

/** 12B0, Message Object  Data Register Low */
#define CAN_MO21_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00192B0u)) /* lint --e(923)*/

/** 12A0, Message Object  Function Control Register */
#define CAN_MO21_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00192A0u)) /* lint --e(923)*/

/** 12A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO21_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00192A4u)) /* lint --e(923)*/

/** 12A8, Message Object  Interrupt Pointer Register */
#define CAN_MO21_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00192A8u)) /* lint --e(923)*/

/** 2B8C, Message Object  Acceptance Mask Register */
#define CAN_MO220_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AB8Cu)) /* lint --e(923)*/

/** 2B98, Message Object  Arbitration Register */
#define CAN_MO220_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AB98u)) /* lint --e(923)*/

/** 2B9C, Message Object  Control Register */
#define CAN_MO220_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AB9Cu)) /* lint --e(923)*/

/** 2B94, Message Object  Data Register High */
#define CAN_MO220_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AB94u)) /* lint --e(923)*/

/** 2B90, Message Object  Data Register Low */
#define CAN_MO220_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AB90u)) /* lint --e(923)*/

/** 2B80, Message Object  Function Control Register */
#define CAN_MO220_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AB80u)) /* lint --e(923)*/

/** 2B84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO220_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AB84u)) /* lint --e(923)*/

/** 2B88, Message Object  Interrupt Pointer Register */
#define CAN_MO220_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AB88u)) /* lint --e(923)*/

/** 2BAC, Message Object  Acceptance Mask Register */
#define CAN_MO221_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001ABACu)) /* lint --e(923)*/

/** 2BB8, Message Object  Arbitration Register */
#define CAN_MO221_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001ABB8u)) /* lint --e(923)*/

/** 2BBC, Message Object  Control Register */
#define CAN_MO221_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001ABBCu)) /* lint --e(923)*/

/** 2BB4, Message Object  Data Register High */
#define CAN_MO221_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001ABB4u)) /* lint --e(923)*/

/** 2BB0, Message Object  Data Register Low */
#define CAN_MO221_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001ABB0u)) /* lint --e(923)*/

/** 2BA0, Message Object  Function Control Register */
#define CAN_MO221_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001ABA0u)) /* lint --e(923)*/

/** 2BA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO221_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001ABA4u)) /* lint --e(923)*/

/** 2BA8, Message Object  Interrupt Pointer Register */
#define CAN_MO221_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001ABA8u)) /* lint --e(923)*/

/** 2BCC, Message Object  Acceptance Mask Register */
#define CAN_MO222_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001ABCCu)) /* lint --e(923)*/

/** 2BD8, Message Object  Arbitration Register */
#define CAN_MO222_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001ABD8u)) /* lint --e(923)*/

/** 2BDC, Message Object  Control Register */
#define CAN_MO222_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001ABDCu)) /* lint --e(923)*/

/** 2BD4, Message Object  Data Register High */
#define CAN_MO222_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001ABD4u)) /* lint --e(923)*/

/** 2BD0, Message Object  Data Register Low */
#define CAN_MO222_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001ABD0u)) /* lint --e(923)*/

/** 2BC0, Message Object  Function Control Register */
#define CAN_MO222_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001ABC0u)) /* lint --e(923)*/

/** 2BC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO222_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001ABC4u)) /* lint --e(923)*/

/** 2BC8, Message Object  Interrupt Pointer Register */
#define CAN_MO222_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001ABC8u)) /* lint --e(923)*/

/** 2BEC, Message Object  Acceptance Mask Register */
#define CAN_MO223_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001ABECu)) /* lint --e(923)*/

/** 2BF8, Message Object  Arbitration Register */
#define CAN_MO223_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001ABF8u)) /* lint --e(923)*/

/** 2BFC, Message Object  Control Register */
#define CAN_MO223_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001ABFCu)) /* lint --e(923)*/

/** 2BF4, Message Object  Data Register High */
#define CAN_MO223_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001ABF4u)) /* lint --e(923)*/

/** 2BF0, Message Object  Data Register Low */
#define CAN_MO223_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001ABF0u)) /* lint --e(923)*/

/** 2BE0, Message Object  Function Control Register */
#define CAN_MO223_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001ABE0u)) /* lint --e(923)*/

/** 2BE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO223_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001ABE4u)) /* lint --e(923)*/

/** 2BE8, Message Object  Interrupt Pointer Register */
#define CAN_MO223_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001ABE8u)) /* lint --e(923)*/

/** 2C0C, Message Object  Acceptance Mask Register */
#define CAN_MO224_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AC0Cu)) /* lint --e(923)*/

/** 2C18, Message Object  Arbitration Register */
#define CAN_MO224_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AC18u)) /* lint --e(923)*/

/** 2C1C, Message Object  Control Register */
#define CAN_MO224_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AC1Cu)) /* lint --e(923)*/

/** 2C14, Message Object  Data Register High */
#define CAN_MO224_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AC14u)) /* lint --e(923)*/

/** 2C10, Message Object  Data Register Low */
#define CAN_MO224_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AC10u)) /* lint --e(923)*/

/** 2C00, Message Object  Function Control Register */
#define CAN_MO224_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AC00u)) /* lint --e(923)*/

/** 2C04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO224_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AC04u)) /* lint --e(923)*/

/** 2C08, Message Object  Interrupt Pointer Register */
#define CAN_MO224_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AC08u)) /* lint --e(923)*/

/** 2C2C, Message Object  Acceptance Mask Register */
#define CAN_MO225_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AC2Cu)) /* lint --e(923)*/

/** 2C38, Message Object  Arbitration Register */
#define CAN_MO225_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AC38u)) /* lint --e(923)*/

/** 2C3C, Message Object  Control Register */
#define CAN_MO225_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AC3Cu)) /* lint --e(923)*/

/** 2C34, Message Object  Data Register High */
#define CAN_MO225_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AC34u)) /* lint --e(923)*/

/** 2C30, Message Object  Data Register Low */
#define CAN_MO225_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AC30u)) /* lint --e(923)*/

/** 2C20, Message Object  Function Control Register */
#define CAN_MO225_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AC20u)) /* lint --e(923)*/

/** 2C24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO225_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AC24u)) /* lint --e(923)*/

/** 2C28, Message Object  Interrupt Pointer Register */
#define CAN_MO225_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AC28u)) /* lint --e(923)*/

/** 2C4C, Message Object  Acceptance Mask Register */
#define CAN_MO226_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AC4Cu)) /* lint --e(923)*/

/** 2C58, Message Object  Arbitration Register */
#define CAN_MO226_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AC58u)) /* lint --e(923)*/

/** 2C5C, Message Object  Control Register */
#define CAN_MO226_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AC5Cu)) /* lint --e(923)*/

/** 2C54, Message Object  Data Register High */
#define CAN_MO226_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AC54u)) /* lint --e(923)*/

/** 2C50, Message Object  Data Register Low */
#define CAN_MO226_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AC50u)) /* lint --e(923)*/

/** 2C40, Message Object  Function Control Register */
#define CAN_MO226_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AC40u)) /* lint --e(923)*/

/** 2C44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO226_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AC44u)) /* lint --e(923)*/

/** 2C48, Message Object  Interrupt Pointer Register */
#define CAN_MO226_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AC48u)) /* lint --e(923)*/

/** 2C6C, Message Object  Acceptance Mask Register */
#define CAN_MO227_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AC6Cu)) /* lint --e(923)*/

/** 2C78, Message Object  Arbitration Register */
#define CAN_MO227_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AC78u)) /* lint --e(923)*/

/** 2C7C, Message Object  Control Register */
#define CAN_MO227_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AC7Cu)) /* lint --e(923)*/

/** 2C74, Message Object  Data Register High */
#define CAN_MO227_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AC74u)) /* lint --e(923)*/

/** 2C70, Message Object  Data Register Low */
#define CAN_MO227_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AC70u)) /* lint --e(923)*/

/** 2C60, Message Object  Function Control Register */
#define CAN_MO227_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AC60u)) /* lint --e(923)*/

/** 2C64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO227_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AC64u)) /* lint --e(923)*/

/** 2C68, Message Object  Interrupt Pointer Register */
#define CAN_MO227_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AC68u)) /* lint --e(923)*/

/** 2C8C, Message Object  Acceptance Mask Register */
#define CAN_MO228_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AC8Cu)) /* lint --e(923)*/

/** 2C98, Message Object  Arbitration Register */
#define CAN_MO228_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AC98u)) /* lint --e(923)*/

/** 2C9C, Message Object  Control Register */
#define CAN_MO228_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AC9Cu)) /* lint --e(923)*/

/** 2C94, Message Object  Data Register High */
#define CAN_MO228_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AC94u)) /* lint --e(923)*/

/** 2C90, Message Object  Data Register Low */
#define CAN_MO228_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AC90u)) /* lint --e(923)*/

/** 2C80, Message Object  Function Control Register */
#define CAN_MO228_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AC80u)) /* lint --e(923)*/

/** 2C84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO228_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AC84u)) /* lint --e(923)*/

/** 2C88, Message Object  Interrupt Pointer Register */
#define CAN_MO228_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AC88u)) /* lint --e(923)*/

/** 2CAC, Message Object  Acceptance Mask Register */
#define CAN_MO229_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001ACACu)) /* lint --e(923)*/

/** 2CB8, Message Object  Arbitration Register */
#define CAN_MO229_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001ACB8u)) /* lint --e(923)*/

/** 2CBC, Message Object  Control Register */
#define CAN_MO229_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001ACBCu)) /* lint --e(923)*/

/** 2CB4, Message Object  Data Register High */
#define CAN_MO229_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001ACB4u)) /* lint --e(923)*/

/** 2CB0, Message Object  Data Register Low */
#define CAN_MO229_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001ACB0u)) /* lint --e(923)*/

/** 2CA0, Message Object  Function Control Register */
#define CAN_MO229_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001ACA0u)) /* lint --e(923)*/

/** 2CA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO229_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001ACA4u)) /* lint --e(923)*/

/** 2CA8, Message Object  Interrupt Pointer Register */
#define CAN_MO229_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001ACA8u)) /* lint --e(923)*/

/** 12CC, Message Object  Acceptance Mask Register */
#define CAN_MO22_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00192CCu)) /* lint --e(923)*/

/** 12D8, Message Object  Arbitration Register */
#define CAN_MO22_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00192D8u)) /* lint --e(923)*/

/** 12DC, Message Object  Control Register */
#define CAN_MO22_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00192DCu)) /* lint --e(923)*/

/** 12D4, Message Object  Data Register High */
#define CAN_MO22_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00192D4u)) /* lint --e(923)*/

/** 12D0, Message Object  Data Register Low */
#define CAN_MO22_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00192D0u)) /* lint --e(923)*/

/** 12C0, Message Object  Function Control Register */
#define CAN_MO22_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00192C0u)) /* lint --e(923)*/

/** 12C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO22_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00192C4u)) /* lint --e(923)*/

/** 12C8, Message Object  Interrupt Pointer Register */
#define CAN_MO22_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00192C8u)) /* lint --e(923)*/

/** 2CCC, Message Object  Acceptance Mask Register */
#define CAN_MO230_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001ACCCu)) /* lint --e(923)*/

/** 2CD8, Message Object  Arbitration Register */
#define CAN_MO230_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001ACD8u)) /* lint --e(923)*/

/** 2CDC, Message Object  Control Register */
#define CAN_MO230_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001ACDCu)) /* lint --e(923)*/

/** 2CD4, Message Object  Data Register High */
#define CAN_MO230_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001ACD4u)) /* lint --e(923)*/

/** 2CD0, Message Object  Data Register Low */
#define CAN_MO230_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001ACD0u)) /* lint --e(923)*/

/** 2CC0, Message Object  Function Control Register */
#define CAN_MO230_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001ACC0u)) /* lint --e(923)*/

/** 2CC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO230_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001ACC4u)) /* lint --e(923)*/

/** 2CC8, Message Object  Interrupt Pointer Register */
#define CAN_MO230_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001ACC8u)) /* lint --e(923)*/

/** 2CEC, Message Object  Acceptance Mask Register */
#define CAN_MO231_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001ACECu)) /* lint --e(923)*/

/** 2CF8, Message Object  Arbitration Register */
#define CAN_MO231_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001ACF8u)) /* lint --e(923)*/

/** 2CFC, Message Object  Control Register */
#define CAN_MO231_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001ACFCu)) /* lint --e(923)*/

/** 2CF4, Message Object  Data Register High */
#define CAN_MO231_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001ACF4u)) /* lint --e(923)*/

/** 2CF0, Message Object  Data Register Low */
#define CAN_MO231_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001ACF0u)) /* lint --e(923)*/

/** 2CE0, Message Object  Function Control Register */
#define CAN_MO231_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001ACE0u)) /* lint --e(923)*/

/** 2CE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO231_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001ACE4u)) /* lint --e(923)*/

/** 2CE8, Message Object  Interrupt Pointer Register */
#define CAN_MO231_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001ACE8u)) /* lint --e(923)*/

/** 2D0C, Message Object  Acceptance Mask Register */
#define CAN_MO232_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AD0Cu)) /* lint --e(923)*/

/** 2D18, Message Object  Arbitration Register */
#define CAN_MO232_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AD18u)) /* lint --e(923)*/

/** 2D1C, Message Object  Control Register */
#define CAN_MO232_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AD1Cu)) /* lint --e(923)*/

/** 2D14, Message Object  Data Register High */
#define CAN_MO232_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AD14u)) /* lint --e(923)*/

/** 2D10, Message Object  Data Register Low */
#define CAN_MO232_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AD10u)) /* lint --e(923)*/

/** 2D00, Message Object  Function Control Register */
#define CAN_MO232_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AD00u)) /* lint --e(923)*/

/** 2D04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO232_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AD04u)) /* lint --e(923)*/

/** 2D08, Message Object  Interrupt Pointer Register */
#define CAN_MO232_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AD08u)) /* lint --e(923)*/

/** 2D2C, Message Object  Acceptance Mask Register */
#define CAN_MO233_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AD2Cu)) /* lint --e(923)*/

/** 2D38, Message Object  Arbitration Register */
#define CAN_MO233_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AD38u)) /* lint --e(923)*/

/** 2D3C, Message Object  Control Register */
#define CAN_MO233_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AD3Cu)) /* lint --e(923)*/

/** 2D34, Message Object  Data Register High */
#define CAN_MO233_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AD34u)) /* lint --e(923)*/

/** 2D30, Message Object  Data Register Low */
#define CAN_MO233_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AD30u)) /* lint --e(923)*/

/** 2D20, Message Object  Function Control Register */
#define CAN_MO233_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AD20u)) /* lint --e(923)*/

/** 2D24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO233_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AD24u)) /* lint --e(923)*/

/** 2D28, Message Object  Interrupt Pointer Register */
#define CAN_MO233_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AD28u)) /* lint --e(923)*/

/** 2D4C, Message Object  Acceptance Mask Register */
#define CAN_MO234_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AD4Cu)) /* lint --e(923)*/

/** 2D58, Message Object  Arbitration Register */
#define CAN_MO234_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AD58u)) /* lint --e(923)*/

/** 2D5C, Message Object  Control Register */
#define CAN_MO234_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AD5Cu)) /* lint --e(923)*/

/** 2D54, Message Object  Data Register High */
#define CAN_MO234_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AD54u)) /* lint --e(923)*/

/** 2D50, Message Object  Data Register Low */
#define CAN_MO234_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AD50u)) /* lint --e(923)*/

/** 2D40, Message Object  Function Control Register */
#define CAN_MO234_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AD40u)) /* lint --e(923)*/

/** 2D44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO234_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AD44u)) /* lint --e(923)*/

/** 2D48, Message Object  Interrupt Pointer Register */
#define CAN_MO234_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AD48u)) /* lint --e(923)*/

/** 2D6C, Message Object  Acceptance Mask Register */
#define CAN_MO235_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AD6Cu)) /* lint --e(923)*/

/** 2D78, Message Object  Arbitration Register */
#define CAN_MO235_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AD78u)) /* lint --e(923)*/

/** 2D7C, Message Object  Control Register */
#define CAN_MO235_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AD7Cu)) /* lint --e(923)*/

/** 2D74, Message Object  Data Register High */
#define CAN_MO235_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AD74u)) /* lint --e(923)*/

/** 2D70, Message Object  Data Register Low */
#define CAN_MO235_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AD70u)) /* lint --e(923)*/

/** 2D60, Message Object  Function Control Register */
#define CAN_MO235_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AD60u)) /* lint --e(923)*/

/** 2D64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO235_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AD64u)) /* lint --e(923)*/

/** 2D68, Message Object  Interrupt Pointer Register */
#define CAN_MO235_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AD68u)) /* lint --e(923)*/

/** 2D8C, Message Object  Acceptance Mask Register */
#define CAN_MO236_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AD8Cu)) /* lint --e(923)*/

/** 2D98, Message Object  Arbitration Register */
#define CAN_MO236_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AD98u)) /* lint --e(923)*/

/** 2D9C, Message Object  Control Register */
#define CAN_MO236_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AD9Cu)) /* lint --e(923)*/

/** 2D94, Message Object  Data Register High */
#define CAN_MO236_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AD94u)) /* lint --e(923)*/

/** 2D90, Message Object  Data Register Low */
#define CAN_MO236_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AD90u)) /* lint --e(923)*/

/** 2D80, Message Object  Function Control Register */
#define CAN_MO236_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AD80u)) /* lint --e(923)*/

/** 2D84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO236_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AD84u)) /* lint --e(923)*/

/** 2D88, Message Object  Interrupt Pointer Register */
#define CAN_MO236_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AD88u)) /* lint --e(923)*/

/** 2DAC, Message Object  Acceptance Mask Register */
#define CAN_MO237_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001ADACu)) /* lint --e(923)*/

/** 2DB8, Message Object  Arbitration Register */
#define CAN_MO237_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001ADB8u)) /* lint --e(923)*/

/** 2DBC, Message Object  Control Register */
#define CAN_MO237_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001ADBCu)) /* lint --e(923)*/

/** 2DB4, Message Object  Data Register High */
#define CAN_MO237_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001ADB4u)) /* lint --e(923)*/

/** 2DB0, Message Object  Data Register Low */
#define CAN_MO237_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001ADB0u)) /* lint --e(923)*/

/** 2DA0, Message Object  Function Control Register */
#define CAN_MO237_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001ADA0u)) /* lint --e(923)*/

/** 2DA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO237_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001ADA4u)) /* lint --e(923)*/

/** 2DA8, Message Object  Interrupt Pointer Register */
#define CAN_MO237_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001ADA8u)) /* lint --e(923)*/

/** 2DCC, Message Object  Acceptance Mask Register */
#define CAN_MO238_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001ADCCu)) /* lint --e(923)*/

/** 2DD8, Message Object  Arbitration Register */
#define CAN_MO238_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001ADD8u)) /* lint --e(923)*/

/** 2DDC, Message Object  Control Register */
#define CAN_MO238_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001ADDCu)) /* lint --e(923)*/

/** 2DD4, Message Object  Data Register High */
#define CAN_MO238_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001ADD4u)) /* lint --e(923)*/

/** 2DD0, Message Object  Data Register Low */
#define CAN_MO238_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001ADD0u)) /* lint --e(923)*/

/** 2DC0, Message Object  Function Control Register */
#define CAN_MO238_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001ADC0u)) /* lint --e(923)*/

/** 2DC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO238_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001ADC4u)) /* lint --e(923)*/

/** 2DC8, Message Object  Interrupt Pointer Register */
#define CAN_MO238_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001ADC8u)) /* lint --e(923)*/

/** 2DEC, Message Object  Acceptance Mask Register */
#define CAN_MO239_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001ADECu)) /* lint --e(923)*/

/** 2DF8, Message Object  Arbitration Register */
#define CAN_MO239_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001ADF8u)) /* lint --e(923)*/

/** 2DFC, Message Object  Control Register */
#define CAN_MO239_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001ADFCu)) /* lint --e(923)*/

/** 2DF4, Message Object  Data Register High */
#define CAN_MO239_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001ADF4u)) /* lint --e(923)*/

/** 2DF0, Message Object  Data Register Low */
#define CAN_MO239_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001ADF0u)) /* lint --e(923)*/

/** 2DE0, Message Object  Function Control Register */
#define CAN_MO239_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001ADE0u)) /* lint --e(923)*/

/** 2DE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO239_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001ADE4u)) /* lint --e(923)*/

/** 2DE8, Message Object  Interrupt Pointer Register */
#define CAN_MO239_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001ADE8u)) /* lint --e(923)*/

/** 12EC, Message Object  Acceptance Mask Register */
#define CAN_MO23_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00192ECu)) /* lint --e(923)*/

/** 12F8, Message Object  Arbitration Register */
#define CAN_MO23_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00192F8u)) /* lint --e(923)*/

/** 12FC, Message Object  Control Register */
#define CAN_MO23_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00192FCu)) /* lint --e(923)*/

/** 12F4, Message Object  Data Register High */
#define CAN_MO23_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00192F4u)) /* lint --e(923)*/

/** 12F0, Message Object  Data Register Low */
#define CAN_MO23_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00192F0u)) /* lint --e(923)*/

/** 12E0, Message Object  Function Control Register */
#define CAN_MO23_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00192E0u)) /* lint --e(923)*/

/** 12E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO23_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00192E4u)) /* lint --e(923)*/

/** 12E8, Message Object  Interrupt Pointer Register */
#define CAN_MO23_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00192E8u)) /* lint --e(923)*/

/** 2E0C, Message Object  Acceptance Mask Register */
#define CAN_MO240_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AE0Cu)) /* lint --e(923)*/

/** 2E18, Message Object  Arbitration Register */
#define CAN_MO240_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AE18u)) /* lint --e(923)*/

/** 2E1C, Message Object  Control Register */
#define CAN_MO240_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AE1Cu)) /* lint --e(923)*/

/** 2E14, Message Object  Data Register High */
#define CAN_MO240_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AE14u)) /* lint --e(923)*/

/** 2E10, Message Object  Data Register Low */
#define CAN_MO240_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AE10u)) /* lint --e(923)*/

/** 2E00, Message Object  Function Control Register */
#define CAN_MO240_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AE00u)) /* lint --e(923)*/

/** 2E04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO240_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AE04u)) /* lint --e(923)*/

/** 2E08, Message Object  Interrupt Pointer Register */
#define CAN_MO240_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AE08u)) /* lint --e(923)*/

/** 2E2C, Message Object  Acceptance Mask Register */
#define CAN_MO241_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AE2Cu)) /* lint --e(923)*/

/** 2E38, Message Object  Arbitration Register */
#define CAN_MO241_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AE38u)) /* lint --e(923)*/

/** 2E3C, Message Object  Control Register */
#define CAN_MO241_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AE3Cu)) /* lint --e(923)*/

/** 2E34, Message Object  Data Register High */
#define CAN_MO241_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AE34u)) /* lint --e(923)*/

/** 2E30, Message Object  Data Register Low */
#define CAN_MO241_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AE30u)) /* lint --e(923)*/

/** 2E20, Message Object  Function Control Register */
#define CAN_MO241_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AE20u)) /* lint --e(923)*/

/** 2E24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO241_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AE24u)) /* lint --e(923)*/

/** 2E28, Message Object  Interrupt Pointer Register */
#define CAN_MO241_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AE28u)) /* lint --e(923)*/

/** 2E4C, Message Object  Acceptance Mask Register */
#define CAN_MO242_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AE4Cu)) /* lint --e(923)*/

/** 2E58, Message Object  Arbitration Register */
#define CAN_MO242_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AE58u)) /* lint --e(923)*/

/** 2E5C, Message Object  Control Register */
#define CAN_MO242_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AE5Cu)) /* lint --e(923)*/

/** 2E54, Message Object  Data Register High */
#define CAN_MO242_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AE54u)) /* lint --e(923)*/

/** 2E50, Message Object  Data Register Low */
#define CAN_MO242_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AE50u)) /* lint --e(923)*/

/** 2E40, Message Object  Function Control Register */
#define CAN_MO242_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AE40u)) /* lint --e(923)*/

/** 2E44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO242_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AE44u)) /* lint --e(923)*/

/** 2E48, Message Object  Interrupt Pointer Register */
#define CAN_MO242_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AE48u)) /* lint --e(923)*/

/** 2E6C, Message Object  Acceptance Mask Register */
#define CAN_MO243_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AE6Cu)) /* lint --e(923)*/

/** 2E78, Message Object  Arbitration Register */
#define CAN_MO243_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AE78u)) /* lint --e(923)*/

/** 2E7C, Message Object  Control Register */
#define CAN_MO243_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AE7Cu)) /* lint --e(923)*/

/** 2E74, Message Object  Data Register High */
#define CAN_MO243_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AE74u)) /* lint --e(923)*/

/** 2E70, Message Object  Data Register Low */
#define CAN_MO243_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AE70u)) /* lint --e(923)*/

/** 2E60, Message Object  Function Control Register */
#define CAN_MO243_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AE60u)) /* lint --e(923)*/

/** 2E64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO243_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AE64u)) /* lint --e(923)*/

/** 2E68, Message Object  Interrupt Pointer Register */
#define CAN_MO243_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AE68u)) /* lint --e(923)*/

/** 2E8C, Message Object  Acceptance Mask Register */
#define CAN_MO244_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AE8Cu)) /* lint --e(923)*/

/** 2E98, Message Object  Arbitration Register */
#define CAN_MO244_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AE98u)) /* lint --e(923)*/

/** 2E9C, Message Object  Control Register */
#define CAN_MO244_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AE9Cu)) /* lint --e(923)*/

/** 2E94, Message Object  Data Register High */
#define CAN_MO244_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AE94u)) /* lint --e(923)*/

/** 2E90, Message Object  Data Register Low */
#define CAN_MO244_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AE90u)) /* lint --e(923)*/

/** 2E80, Message Object  Function Control Register */
#define CAN_MO244_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AE80u)) /* lint --e(923)*/

/** 2E84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO244_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AE84u)) /* lint --e(923)*/

/** 2E88, Message Object  Interrupt Pointer Register */
#define CAN_MO244_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AE88u)) /* lint --e(923)*/

/** 2EAC, Message Object  Acceptance Mask Register */
#define CAN_MO245_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AEACu)) /* lint --e(923)*/

/** 2EB8, Message Object  Arbitration Register */
#define CAN_MO245_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AEB8u)) /* lint --e(923)*/

/** 2EBC, Message Object  Control Register */
#define CAN_MO245_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AEBCu)) /* lint --e(923)*/

/** 2EB4, Message Object  Data Register High */
#define CAN_MO245_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AEB4u)) /* lint --e(923)*/

/** 2EB0, Message Object  Data Register Low */
#define CAN_MO245_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AEB0u)) /* lint --e(923)*/

/** 2EA0, Message Object  Function Control Register */
#define CAN_MO245_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AEA0u)) /* lint --e(923)*/

/** 2EA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO245_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AEA4u)) /* lint --e(923)*/

/** 2EA8, Message Object  Interrupt Pointer Register */
#define CAN_MO245_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AEA8u)) /* lint --e(923)*/

/** 2ECC, Message Object  Acceptance Mask Register */
#define CAN_MO246_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AECCu)) /* lint --e(923)*/

/** 2ED8, Message Object  Arbitration Register */
#define CAN_MO246_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AED8u)) /* lint --e(923)*/

/** 2EDC, Message Object  Control Register */
#define CAN_MO246_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AEDCu)) /* lint --e(923)*/

/** 2ED4, Message Object  Data Register High */
#define CAN_MO246_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AED4u)) /* lint --e(923)*/

/** 2ED0, Message Object  Data Register Low */
#define CAN_MO246_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AED0u)) /* lint --e(923)*/

/** 2EC0, Message Object  Function Control Register */
#define CAN_MO246_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AEC0u)) /* lint --e(923)*/

/** 2EC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO246_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AEC4u)) /* lint --e(923)*/

/** 2EC8, Message Object  Interrupt Pointer Register */
#define CAN_MO246_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AEC8u)) /* lint --e(923)*/

/** 2EEC, Message Object  Acceptance Mask Register */
#define CAN_MO247_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AEECu)) /* lint --e(923)*/

/** 2EF8, Message Object  Arbitration Register */
#define CAN_MO247_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AEF8u)) /* lint --e(923)*/

/** 2EFC, Message Object  Control Register */
#define CAN_MO247_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AEFCu)) /* lint --e(923)*/

/** 2EF4, Message Object  Data Register High */
#define CAN_MO247_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AEF4u)) /* lint --e(923)*/

/** 2EF0, Message Object  Data Register Low */
#define CAN_MO247_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AEF0u)) /* lint --e(923)*/

/** 2EE0, Message Object  Function Control Register */
#define CAN_MO247_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AEE0u)) /* lint --e(923)*/

/** 2EE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO247_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AEE4u)) /* lint --e(923)*/

/** 2EE8, Message Object  Interrupt Pointer Register */
#define CAN_MO247_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AEE8u)) /* lint --e(923)*/

/** 2F0C, Message Object  Acceptance Mask Register */
#define CAN_MO248_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AF0Cu)) /* lint --e(923)*/

/** 2F18, Message Object  Arbitration Register */
#define CAN_MO248_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AF18u)) /* lint --e(923)*/

/** 2F1C, Message Object  Control Register */
#define CAN_MO248_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AF1Cu)) /* lint --e(923)*/

/** 2F14, Message Object  Data Register High */
#define CAN_MO248_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AF14u)) /* lint --e(923)*/

/** 2F10, Message Object  Data Register Low */
#define CAN_MO248_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AF10u)) /* lint --e(923)*/

/** 2F00, Message Object  Function Control Register */
#define CAN_MO248_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AF00u)) /* lint --e(923)*/

/** 2F04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO248_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AF04u)) /* lint --e(923)*/

/** 2F08, Message Object  Interrupt Pointer Register */
#define CAN_MO248_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AF08u)) /* lint --e(923)*/

/** 2F2C, Message Object  Acceptance Mask Register */
#define CAN_MO249_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AF2Cu)) /* lint --e(923)*/

/** 2F38, Message Object  Arbitration Register */
#define CAN_MO249_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AF38u)) /* lint --e(923)*/

/** 2F3C, Message Object  Control Register */
#define CAN_MO249_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AF3Cu)) /* lint --e(923)*/

/** 2F34, Message Object  Data Register High */
#define CAN_MO249_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AF34u)) /* lint --e(923)*/

/** 2F30, Message Object  Data Register Low */
#define CAN_MO249_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AF30u)) /* lint --e(923)*/

/** 2F20, Message Object  Function Control Register */
#define CAN_MO249_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AF20u)) /* lint --e(923)*/

/** 2F24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO249_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AF24u)) /* lint --e(923)*/

/** 2F28, Message Object  Interrupt Pointer Register */
#define CAN_MO249_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AF28u)) /* lint --e(923)*/

/** 130C, Message Object  Acceptance Mask Register */
#define CAN_MO24_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001930Cu)) /* lint --e(923)*/

/** 1318, Message Object  Arbitration Register */
#define CAN_MO24_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019318u)) /* lint --e(923)*/

/** 131C, Message Object  Control Register */
#define CAN_MO24_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001931Cu)) /* lint --e(923)*/

/** 1314, Message Object  Data Register High */
#define CAN_MO24_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019314u)) /* lint --e(923)*/

/** 1310, Message Object  Data Register Low */
#define CAN_MO24_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019310u)) /* lint --e(923)*/

/** 1300, Message Object  Function Control Register */
#define CAN_MO24_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019300u)) /* lint --e(923)*/

/** 1304, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO24_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019304u)) /* lint --e(923)*/

/** 1308, Message Object  Interrupt Pointer Register */
#define CAN_MO24_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019308u)) /* lint --e(923)*/

/** 2F4C, Message Object  Acceptance Mask Register */
#define CAN_MO250_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AF4Cu)) /* lint --e(923)*/

/** 2F58, Message Object  Arbitration Register */
#define CAN_MO250_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AF58u)) /* lint --e(923)*/

/** 2F5C, Message Object  Control Register */
#define CAN_MO250_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AF5Cu)) /* lint --e(923)*/

/** 2F54, Message Object  Data Register High */
#define CAN_MO250_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AF54u)) /* lint --e(923)*/

/** 2F50, Message Object  Data Register Low */
#define CAN_MO250_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AF50u)) /* lint --e(923)*/

/** 2F40, Message Object  Function Control Register */
#define CAN_MO250_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AF40u)) /* lint --e(923)*/

/** 2F44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO250_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AF44u)) /* lint --e(923)*/

/** 2F48, Message Object  Interrupt Pointer Register */
#define CAN_MO250_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AF48u)) /* lint --e(923)*/

/** 2F6C, Message Object  Acceptance Mask Register */
#define CAN_MO251_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AF6Cu)) /* lint --e(923)*/

/** 2F78, Message Object  Arbitration Register */
#define CAN_MO251_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AF78u)) /* lint --e(923)*/

/** 2F7C, Message Object  Control Register */
#define CAN_MO251_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AF7Cu)) /* lint --e(923)*/

/** 2F74, Message Object  Data Register High */
#define CAN_MO251_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AF74u)) /* lint --e(923)*/

/** 2F70, Message Object  Data Register Low */
#define CAN_MO251_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AF70u)) /* lint --e(923)*/

/** 2F60, Message Object  Function Control Register */
#define CAN_MO251_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AF60u)) /* lint --e(923)*/

/** 2F64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO251_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AF64u)) /* lint --e(923)*/

/** 2F68, Message Object  Interrupt Pointer Register */
#define CAN_MO251_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AF68u)) /* lint --e(923)*/

/** 2F8C, Message Object  Acceptance Mask Register */
#define CAN_MO252_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AF8Cu)) /* lint --e(923)*/

/** 2F98, Message Object  Arbitration Register */
#define CAN_MO252_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AF98u)) /* lint --e(923)*/

/** 2F9C, Message Object  Control Register */
#define CAN_MO252_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AF9Cu)) /* lint --e(923)*/

/** 2F94, Message Object  Data Register High */
#define CAN_MO252_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AF94u)) /* lint --e(923)*/

/** 2F90, Message Object  Data Register Low */
#define CAN_MO252_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AF90u)) /* lint --e(923)*/

/** 2F80, Message Object  Function Control Register */
#define CAN_MO252_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AF80u)) /* lint --e(923)*/

/** 2F84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO252_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AF84u)) /* lint --e(923)*/

/** 2F88, Message Object  Interrupt Pointer Register */
#define CAN_MO252_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AF88u)) /* lint --e(923)*/

/** 2FAC, Message Object  Acceptance Mask Register */
#define CAN_MO253_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AFACu)) /* lint --e(923)*/

/** 2FB8, Message Object  Arbitration Register */
#define CAN_MO253_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AFB8u)) /* lint --e(923)*/

/** 2FBC, Message Object  Control Register */
#define CAN_MO253_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AFBCu)) /* lint --e(923)*/

/** 2FB4, Message Object  Data Register High */
#define CAN_MO253_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AFB4u)) /* lint --e(923)*/

/** 2FB0, Message Object  Data Register Low */
#define CAN_MO253_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AFB0u)) /* lint --e(923)*/

/** 2FA0, Message Object  Function Control Register */
#define CAN_MO253_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AFA0u)) /* lint --e(923)*/

/** 2FA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO253_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AFA4u)) /* lint --e(923)*/

/** 2FA8, Message Object  Interrupt Pointer Register */
#define CAN_MO253_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AFA8u)) /* lint --e(923)*/

/** 2FCC, Message Object  Acceptance Mask Register */
#define CAN_MO254_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AFCCu)) /* lint --e(923)*/

/** 2FD8, Message Object  Arbitration Register */
#define CAN_MO254_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AFD8u)) /* lint --e(923)*/

/** 2FDC, Message Object  Control Register */
#define CAN_MO254_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AFDCu)) /* lint --e(923)*/

/** 2FD4, Message Object  Data Register High */
#define CAN_MO254_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AFD4u)) /* lint --e(923)*/

/** 2FD0, Message Object  Data Register Low */
#define CAN_MO254_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AFD0u)) /* lint --e(923)*/

/** 2FC0, Message Object  Function Control Register */
#define CAN_MO254_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AFC0u)) /* lint --e(923)*/

/** 2FC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO254_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AFC4u)) /* lint --e(923)*/

/** 2FC8, Message Object  Interrupt Pointer Register */
#define CAN_MO254_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AFC8u)) /* lint --e(923)*/

/** 2FEC, Message Object  Acceptance Mask Register */
#define CAN_MO255_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001AFECu)) /* lint --e(923)*/

/** 2FF8, Message Object  Arbitration Register */
#define CAN_MO255_AR ((*(volatile Ifx_CAN_MO_AR*)0xF001AFF8u)) /* lint --e(923)*/

/** 2FFC, Message Object  Control Register */
#define CAN_MO255_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001AFFCu)) /* lint --e(923)*/

/** 2FF4, Message Object  Data Register High */
#define CAN_MO255_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF001AFF4u)) /* lint --e(923)*/

/** 2FF0, Message Object  Data Register Low */
#define CAN_MO255_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF001AFF0u)) /* lint --e(923)*/

/** 2FE0, Message Object  Function Control Register */
#define CAN_MO255_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF001AFE0u)) /* lint --e(923)*/

/** 2FE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO255_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF001AFE4u)) /* lint --e(923)*/

/** 2FE8, Message Object  Interrupt Pointer Register */
#define CAN_MO255_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF001AFE8u)) /* lint --e(923)*/

/** 132C, Message Object  Acceptance Mask Register */
#define CAN_MO25_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001932Cu)) /* lint --e(923)*/

/** 1338, Message Object  Arbitration Register */
#define CAN_MO25_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019338u)) /* lint --e(923)*/

/** 133C, Message Object  Control Register */
#define CAN_MO25_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001933Cu)) /* lint --e(923)*/

/** 1334, Message Object  Data Register High */
#define CAN_MO25_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019334u)) /* lint --e(923)*/

/** 1330, Message Object  Data Register Low */
#define CAN_MO25_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019330u)) /* lint --e(923)*/

/** 1320, Message Object  Function Control Register */
#define CAN_MO25_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019320u)) /* lint --e(923)*/

/** 1324, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO25_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019324u)) /* lint --e(923)*/

/** 1328, Message Object  Interrupt Pointer Register */
#define CAN_MO25_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019328u)) /* lint --e(923)*/

/** 134C, Message Object  Acceptance Mask Register */
#define CAN_MO26_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001934Cu)) /* lint --e(923)*/

/** 1358, Message Object  Arbitration Register */
#define CAN_MO26_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019358u)) /* lint --e(923)*/

/** 135C, Message Object  Control Register */
#define CAN_MO26_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001935Cu)) /* lint --e(923)*/

/** 1354, Message Object  Data Register High */
#define CAN_MO26_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019354u)) /* lint --e(923)*/

/** 1350, Message Object  Data Register Low */
#define CAN_MO26_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019350u)) /* lint --e(923)*/

/** 1340, Message Object  Function Control Register */
#define CAN_MO26_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019340u)) /* lint --e(923)*/

/** 1344, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO26_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019344u)) /* lint --e(923)*/

/** 1348, Message Object  Interrupt Pointer Register */
#define CAN_MO26_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019348u)) /* lint --e(923)*/

/** 136C, Message Object  Acceptance Mask Register */
#define CAN_MO27_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001936Cu)) /* lint --e(923)*/

/** 1378, Message Object  Arbitration Register */
#define CAN_MO27_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019378u)) /* lint --e(923)*/

/** 137C, Message Object  Control Register */
#define CAN_MO27_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001937Cu)) /* lint --e(923)*/

/** 1374, Message Object  Data Register High */
#define CAN_MO27_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019374u)) /* lint --e(923)*/

/** 1370, Message Object  Data Register Low */
#define CAN_MO27_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019370u)) /* lint --e(923)*/

/** 1360, Message Object  Function Control Register */
#define CAN_MO27_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019360u)) /* lint --e(923)*/

/** 1364, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO27_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019364u)) /* lint --e(923)*/

/** 1368, Message Object  Interrupt Pointer Register */
#define CAN_MO27_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019368u)) /* lint --e(923)*/

/** 138C, Message Object  Acceptance Mask Register */
#define CAN_MO28_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001938Cu)) /* lint --e(923)*/

/** 1398, Message Object  Arbitration Register */
#define CAN_MO28_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019398u)) /* lint --e(923)*/

/** 139C, Message Object  Control Register */
#define CAN_MO28_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001939Cu)) /* lint --e(923)*/

/** 1394, Message Object  Data Register High */
#define CAN_MO28_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019394u)) /* lint --e(923)*/

/** 1390, Message Object  Data Register Low */
#define CAN_MO28_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019390u)) /* lint --e(923)*/

/** 1380, Message Object  Function Control Register */
#define CAN_MO28_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019380u)) /* lint --e(923)*/

/** 1384, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO28_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019384u)) /* lint --e(923)*/

/** 1388, Message Object  Interrupt Pointer Register */
#define CAN_MO28_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019388u)) /* lint --e(923)*/

/** 13AC, Message Object  Acceptance Mask Register */
#define CAN_MO29_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00193ACu)) /* lint --e(923)*/

/** 13B8, Message Object  Arbitration Register */
#define CAN_MO29_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00193B8u)) /* lint --e(923)*/

/** 13BC, Message Object  Control Register */
#define CAN_MO29_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00193BCu)) /* lint --e(923)*/

/** 13B4, Message Object  Data Register High */
#define CAN_MO29_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00193B4u)) /* lint --e(923)*/

/** 13B0, Message Object  Data Register Low */
#define CAN_MO29_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00193B0u)) /* lint --e(923)*/

/** 13A0, Message Object  Function Control Register */
#define CAN_MO29_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00193A0u)) /* lint --e(923)*/

/** 13A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO29_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00193A4u)) /* lint --e(923)*/

/** 13A8, Message Object  Interrupt Pointer Register */
#define CAN_MO29_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00193A8u)) /* lint --e(923)*/

/** 104C, Message Object  Acceptance Mask Register */
#define CAN_MO2_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001904Cu)) /* lint --e(923)*/

/** 1058, Message Object  Arbitration Register */
#define CAN_MO2_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019058u)) /* lint --e(923)*/

/** 105C, Message Object  Control Register */
#define CAN_MO2_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001905Cu)) /* lint --e(923)*/

/** 1054, Message Object  Data Register High */
#define CAN_MO2_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019054u)) /* lint --e(923)*/

/** 1050, Message Object  Data Register Low */
#define CAN_MO2_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019050u)) /* lint --e(923)*/

/** 1040, Message Object  Function Control Register */
#define CAN_MO2_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019040u)) /* lint --e(923)*/

/** 1044, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO2_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019044u)) /* lint --e(923)*/

/** 1048, Message Object  Interrupt Pointer Register */
#define CAN_MO2_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019048u)) /* lint --e(923)*/

/** 13CC, Message Object  Acceptance Mask Register */
#define CAN_MO30_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00193CCu)) /* lint --e(923)*/

/** 13D8, Message Object  Arbitration Register */
#define CAN_MO30_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00193D8u)) /* lint --e(923)*/

/** 13DC, Message Object  Control Register */
#define CAN_MO30_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00193DCu)) /* lint --e(923)*/

/** 13D4, Message Object  Data Register High */
#define CAN_MO30_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00193D4u)) /* lint --e(923)*/

/** 13D0, Message Object  Data Register Low */
#define CAN_MO30_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00193D0u)) /* lint --e(923)*/

/** 13C0, Message Object  Function Control Register */
#define CAN_MO30_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00193C0u)) /* lint --e(923)*/

/** 13C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO30_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00193C4u)) /* lint --e(923)*/

/** 13C8, Message Object  Interrupt Pointer Register */
#define CAN_MO30_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00193C8u)) /* lint --e(923)*/

/** 13EC, Message Object  Acceptance Mask Register */
#define CAN_MO31_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00193ECu)) /* lint --e(923)*/

/** 13F8, Message Object  Arbitration Register */
#define CAN_MO31_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00193F8u)) /* lint --e(923)*/

/** 13FC, Message Object  Control Register */
#define CAN_MO31_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00193FCu)) /* lint --e(923)*/

/** 13F4, Message Object  Data Register High */
#define CAN_MO31_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00193F4u)) /* lint --e(923)*/

/** 13F0, Message Object  Data Register Low */
#define CAN_MO31_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00193F0u)) /* lint --e(923)*/

/** 13E0, Message Object  Function Control Register */
#define CAN_MO31_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00193E0u)) /* lint --e(923)*/

/** 13E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO31_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00193E4u)) /* lint --e(923)*/

/** 13E8, Message Object  Interrupt Pointer Register */
#define CAN_MO31_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00193E8u)) /* lint --e(923)*/

/** 140C, Message Object  Acceptance Mask Register */
#define CAN_MO32_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001940Cu)) /* lint --e(923)*/

/** 1418, Message Object  Arbitration Register */
#define CAN_MO32_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019418u)) /* lint --e(923)*/

/** 141C, Message Object  Control Register */
#define CAN_MO32_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001941Cu)) /* lint --e(923)*/

/** 1414, Message Object  Data Register High */
#define CAN_MO32_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019414u)) /* lint --e(923)*/

/** 1410, Message Object  Data Register Low */
#define CAN_MO32_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019410u)) /* lint --e(923)*/

/** 1400, Message Object  Function Control Register */
#define CAN_MO32_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019400u)) /* lint --e(923)*/

/** 1404, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO32_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019404u)) /* lint --e(923)*/

/** 1408, Message Object  Interrupt Pointer Register */
#define CAN_MO32_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019408u)) /* lint --e(923)*/

/** 142C, Message Object  Acceptance Mask Register */
#define CAN_MO33_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001942Cu)) /* lint --e(923)*/

/** 1438, Message Object  Arbitration Register */
#define CAN_MO33_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019438u)) /* lint --e(923)*/

/** 143C, Message Object  Control Register */
#define CAN_MO33_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001943Cu)) /* lint --e(923)*/

/** 1434, Message Object  Data Register High */
#define CAN_MO33_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019434u)) /* lint --e(923)*/

/** 1430, Message Object  Data Register Low */
#define CAN_MO33_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019430u)) /* lint --e(923)*/

/** 1420, Message Object  Function Control Register */
#define CAN_MO33_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019420u)) /* lint --e(923)*/

/** 1424, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO33_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019424u)) /* lint --e(923)*/

/** 1428, Message Object  Interrupt Pointer Register */
#define CAN_MO33_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019428u)) /* lint --e(923)*/

/** 144C, Message Object  Acceptance Mask Register */
#define CAN_MO34_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001944Cu)) /* lint --e(923)*/

/** 1458, Message Object  Arbitration Register */
#define CAN_MO34_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019458u)) /* lint --e(923)*/

/** 145C, Message Object  Control Register */
#define CAN_MO34_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001945Cu)) /* lint --e(923)*/

/** 1454, Message Object  Data Register High */
#define CAN_MO34_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019454u)) /* lint --e(923)*/

/** 1450, Message Object  Data Register Low */
#define CAN_MO34_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019450u)) /* lint --e(923)*/

/** 1440, Message Object  Function Control Register */
#define CAN_MO34_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019440u)) /* lint --e(923)*/

/** 1444, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO34_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019444u)) /* lint --e(923)*/

/** 1448, Message Object  Interrupt Pointer Register */
#define CAN_MO34_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019448u)) /* lint --e(923)*/

/** 146C, Message Object  Acceptance Mask Register */
#define CAN_MO35_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001946Cu)) /* lint --e(923)*/

/** 1478, Message Object  Arbitration Register */
#define CAN_MO35_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019478u)) /* lint --e(923)*/

/** 147C, Message Object  Control Register */
#define CAN_MO35_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001947Cu)) /* lint --e(923)*/

/** 1474, Message Object  Data Register High */
#define CAN_MO35_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019474u)) /* lint --e(923)*/

/** 1470, Message Object  Data Register Low */
#define CAN_MO35_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019470u)) /* lint --e(923)*/

/** 1460, Message Object  Function Control Register */
#define CAN_MO35_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019460u)) /* lint --e(923)*/

/** 1464, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO35_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019464u)) /* lint --e(923)*/

/** 1468, Message Object  Interrupt Pointer Register */
#define CAN_MO35_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019468u)) /* lint --e(923)*/

/** 148C, Message Object  Acceptance Mask Register */
#define CAN_MO36_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001948Cu)) /* lint --e(923)*/

/** 1498, Message Object  Arbitration Register */
#define CAN_MO36_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019498u)) /* lint --e(923)*/

/** 149C, Message Object  Control Register */
#define CAN_MO36_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001949Cu)) /* lint --e(923)*/

/** 1494, Message Object  Data Register High */
#define CAN_MO36_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019494u)) /* lint --e(923)*/

/** 1490, Message Object  Data Register Low */
#define CAN_MO36_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019490u)) /* lint --e(923)*/

/** 1480, Message Object  Function Control Register */
#define CAN_MO36_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019480u)) /* lint --e(923)*/

/** 1484, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO36_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019484u)) /* lint --e(923)*/

/** 1488, Message Object  Interrupt Pointer Register */
#define CAN_MO36_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019488u)) /* lint --e(923)*/

/** 14AC, Message Object  Acceptance Mask Register */
#define CAN_MO37_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00194ACu)) /* lint --e(923)*/

/** 14B8, Message Object  Arbitration Register */
#define CAN_MO37_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00194B8u)) /* lint --e(923)*/

/** 14BC, Message Object  Control Register */
#define CAN_MO37_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00194BCu)) /* lint --e(923)*/

/** 14B4, Message Object  Data Register High */
#define CAN_MO37_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00194B4u)) /* lint --e(923)*/

/** 14B0, Message Object  Data Register Low */
#define CAN_MO37_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00194B0u)) /* lint --e(923)*/

/** 14A0, Message Object  Function Control Register */
#define CAN_MO37_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00194A0u)) /* lint --e(923)*/

/** 14A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO37_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00194A4u)) /* lint --e(923)*/

/** 14A8, Message Object  Interrupt Pointer Register */
#define CAN_MO37_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00194A8u)) /* lint --e(923)*/

/** 14CC, Message Object  Acceptance Mask Register */
#define CAN_MO38_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00194CCu)) /* lint --e(923)*/

/** 14D8, Message Object  Arbitration Register */
#define CAN_MO38_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00194D8u)) /* lint --e(923)*/

/** 14DC, Message Object  Control Register */
#define CAN_MO38_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00194DCu)) /* lint --e(923)*/

/** 14D4, Message Object  Data Register High */
#define CAN_MO38_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00194D4u)) /* lint --e(923)*/

/** 14D0, Message Object  Data Register Low */
#define CAN_MO38_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00194D0u)) /* lint --e(923)*/

/** 14C0, Message Object  Function Control Register */
#define CAN_MO38_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00194C0u)) /* lint --e(923)*/

/** 14C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO38_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00194C4u)) /* lint --e(923)*/

/** 14C8, Message Object  Interrupt Pointer Register */
#define CAN_MO38_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00194C8u)) /* lint --e(923)*/

/** 14EC, Message Object  Acceptance Mask Register */
#define CAN_MO39_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00194ECu)) /* lint --e(923)*/

/** 14F8, Message Object  Arbitration Register */
#define CAN_MO39_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00194F8u)) /* lint --e(923)*/

/** 14FC, Message Object  Control Register */
#define CAN_MO39_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00194FCu)) /* lint --e(923)*/

/** 14F4, Message Object  Data Register High */
#define CAN_MO39_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00194F4u)) /* lint --e(923)*/

/** 14F0, Message Object  Data Register Low */
#define CAN_MO39_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00194F0u)) /* lint --e(923)*/

/** 14E0, Message Object  Function Control Register */
#define CAN_MO39_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00194E0u)) /* lint --e(923)*/

/** 14E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO39_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00194E4u)) /* lint --e(923)*/

/** 14E8, Message Object  Interrupt Pointer Register */
#define CAN_MO39_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00194E8u)) /* lint --e(923)*/

/** 106C, Message Object  Acceptance Mask Register */
#define CAN_MO3_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001906Cu)) /* lint --e(923)*/

/** 1078, Message Object  Arbitration Register */
#define CAN_MO3_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019078u)) /* lint --e(923)*/

/** 107C, Message Object  Control Register */
#define CAN_MO3_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001907Cu)) /* lint --e(923)*/

/** 1074, Message Object  Data Register High */
#define CAN_MO3_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019074u)) /* lint --e(923)*/

/** 1070, Message Object  Data Register Low */
#define CAN_MO3_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019070u)) /* lint --e(923)*/

/** 1060, Message Object  Function Control Register */
#define CAN_MO3_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019060u)) /* lint --e(923)*/

/** 1064, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO3_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019064u)) /* lint --e(923)*/

/** 1068, Message Object  Interrupt Pointer Register */
#define CAN_MO3_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019068u)) /* lint --e(923)*/

/** 150C, Message Object  Acceptance Mask Register */
#define CAN_MO40_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001950Cu)) /* lint --e(923)*/

/** 1518, Message Object  Arbitration Register */
#define CAN_MO40_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019518u)) /* lint --e(923)*/

/** 151C, Message Object  Control Register */
#define CAN_MO40_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001951Cu)) /* lint --e(923)*/

/** 1514, Message Object  Data Register High */
#define CAN_MO40_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019514u)) /* lint --e(923)*/

/** 1510, Message Object  Data Register Low */
#define CAN_MO40_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019510u)) /* lint --e(923)*/

/** 1500, Message Object  Function Control Register */
#define CAN_MO40_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019500u)) /* lint --e(923)*/

/** 1504, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO40_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019504u)) /* lint --e(923)*/

/** 1508, Message Object  Interrupt Pointer Register */
#define CAN_MO40_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019508u)) /* lint --e(923)*/

/** 152C, Message Object  Acceptance Mask Register */
#define CAN_MO41_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001952Cu)) /* lint --e(923)*/

/** 1538, Message Object  Arbitration Register */
#define CAN_MO41_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019538u)) /* lint --e(923)*/

/** 153C, Message Object  Control Register */
#define CAN_MO41_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001953Cu)) /* lint --e(923)*/

/** 1534, Message Object  Data Register High */
#define CAN_MO41_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019534u)) /* lint --e(923)*/

/** 1530, Message Object  Data Register Low */
#define CAN_MO41_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019530u)) /* lint --e(923)*/

/** 1520, Message Object  Function Control Register */
#define CAN_MO41_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019520u)) /* lint --e(923)*/

/** 1524, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO41_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019524u)) /* lint --e(923)*/

/** 1528, Message Object  Interrupt Pointer Register */
#define CAN_MO41_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019528u)) /* lint --e(923)*/

/** 154C, Message Object  Acceptance Mask Register */
#define CAN_MO42_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001954Cu)) /* lint --e(923)*/

/** 1558, Message Object  Arbitration Register */
#define CAN_MO42_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019558u)) /* lint --e(923)*/

/** 155C, Message Object  Control Register */
#define CAN_MO42_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001955Cu)) /* lint --e(923)*/

/** 1554, Message Object  Data Register High */
#define CAN_MO42_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019554u)) /* lint --e(923)*/

/** 1550, Message Object  Data Register Low */
#define CAN_MO42_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019550u)) /* lint --e(923)*/

/** 1540, Message Object  Function Control Register */
#define CAN_MO42_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019540u)) /* lint --e(923)*/

/** 1544, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO42_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019544u)) /* lint --e(923)*/

/** 1548, Message Object  Interrupt Pointer Register */
#define CAN_MO42_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019548u)) /* lint --e(923)*/

/** 156C, Message Object  Acceptance Mask Register */
#define CAN_MO43_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001956Cu)) /* lint --e(923)*/

/** 1578, Message Object  Arbitration Register */
#define CAN_MO43_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019578u)) /* lint --e(923)*/

/** 157C, Message Object  Control Register */
#define CAN_MO43_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001957Cu)) /* lint --e(923)*/

/** 1574, Message Object  Data Register High */
#define CAN_MO43_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019574u)) /* lint --e(923)*/

/** 1570, Message Object  Data Register Low */
#define CAN_MO43_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019570u)) /* lint --e(923)*/

/** 1560, Message Object  Function Control Register */
#define CAN_MO43_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019560u)) /* lint --e(923)*/

/** 1564, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO43_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019564u)) /* lint --e(923)*/

/** 1568, Message Object  Interrupt Pointer Register */
#define CAN_MO43_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019568u)) /* lint --e(923)*/

/** 158C, Message Object  Acceptance Mask Register */
#define CAN_MO44_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001958Cu)) /* lint --e(923)*/

/** 1598, Message Object  Arbitration Register */
#define CAN_MO44_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019598u)) /* lint --e(923)*/

/** 159C, Message Object  Control Register */
#define CAN_MO44_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001959Cu)) /* lint --e(923)*/

/** 1594, Message Object  Data Register High */
#define CAN_MO44_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019594u)) /* lint --e(923)*/

/** 1590, Message Object  Data Register Low */
#define CAN_MO44_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019590u)) /* lint --e(923)*/

/** 1580, Message Object  Function Control Register */
#define CAN_MO44_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019580u)) /* lint --e(923)*/

/** 1584, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO44_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019584u)) /* lint --e(923)*/

/** 1588, Message Object  Interrupt Pointer Register */
#define CAN_MO44_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019588u)) /* lint --e(923)*/

/** 15AC, Message Object  Acceptance Mask Register */
#define CAN_MO45_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00195ACu)) /* lint --e(923)*/

/** 15B8, Message Object  Arbitration Register */
#define CAN_MO45_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00195B8u)) /* lint --e(923)*/

/** 15BC, Message Object  Control Register */
#define CAN_MO45_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00195BCu)) /* lint --e(923)*/

/** 15B4, Message Object  Data Register High */
#define CAN_MO45_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00195B4u)) /* lint --e(923)*/

/** 15B0, Message Object  Data Register Low */
#define CAN_MO45_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00195B0u)) /* lint --e(923)*/

/** 15A0, Message Object  Function Control Register */
#define CAN_MO45_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00195A0u)) /* lint --e(923)*/

/** 15A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO45_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00195A4u)) /* lint --e(923)*/

/** 15A8, Message Object  Interrupt Pointer Register */
#define CAN_MO45_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00195A8u)) /* lint --e(923)*/

/** 15CC, Message Object  Acceptance Mask Register */
#define CAN_MO46_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00195CCu)) /* lint --e(923)*/

/** 15D8, Message Object  Arbitration Register */
#define CAN_MO46_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00195D8u)) /* lint --e(923)*/

/** 15DC, Message Object  Control Register */
#define CAN_MO46_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00195DCu)) /* lint --e(923)*/

/** 15D4, Message Object  Data Register High */
#define CAN_MO46_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00195D4u)) /* lint --e(923)*/

/** 15D0, Message Object  Data Register Low */
#define CAN_MO46_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00195D0u)) /* lint --e(923)*/

/** 15C0, Message Object  Function Control Register */
#define CAN_MO46_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00195C0u)) /* lint --e(923)*/

/** 15C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO46_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00195C4u)) /* lint --e(923)*/

/** 15C8, Message Object  Interrupt Pointer Register */
#define CAN_MO46_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00195C8u)) /* lint --e(923)*/

/** 15EC, Message Object  Acceptance Mask Register */
#define CAN_MO47_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00195ECu)) /* lint --e(923)*/

/** 15F8, Message Object  Arbitration Register */
#define CAN_MO47_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00195F8u)) /* lint --e(923)*/

/** 15FC, Message Object  Control Register */
#define CAN_MO47_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00195FCu)) /* lint --e(923)*/

/** 15F4, Message Object  Data Register High */
#define CAN_MO47_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00195F4u)) /* lint --e(923)*/

/** 15F0, Message Object  Data Register Low */
#define CAN_MO47_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00195F0u)) /* lint --e(923)*/

/** 15E0, Message Object  Function Control Register */
#define CAN_MO47_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00195E0u)) /* lint --e(923)*/

/** 15E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO47_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00195E4u)) /* lint --e(923)*/

/** 15E8, Message Object  Interrupt Pointer Register */
#define CAN_MO47_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00195E8u)) /* lint --e(923)*/

/** 160C, Message Object  Acceptance Mask Register */
#define CAN_MO48_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001960Cu)) /* lint --e(923)*/

/** 1618, Message Object  Arbitration Register */
#define CAN_MO48_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019618u)) /* lint --e(923)*/

/** 161C, Message Object  Control Register */
#define CAN_MO48_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001961Cu)) /* lint --e(923)*/

/** 1614, Message Object  Data Register High */
#define CAN_MO48_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019614u)) /* lint --e(923)*/

/** 1610, Message Object  Data Register Low */
#define CAN_MO48_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019610u)) /* lint --e(923)*/

/** 1600, Message Object  Function Control Register */
#define CAN_MO48_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019600u)) /* lint --e(923)*/

/** 1604, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO48_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019604u)) /* lint --e(923)*/

/** 1608, Message Object  Interrupt Pointer Register */
#define CAN_MO48_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019608u)) /* lint --e(923)*/

/** 162C, Message Object  Acceptance Mask Register */
#define CAN_MO49_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001962Cu)) /* lint --e(923)*/

/** 1638, Message Object  Arbitration Register */
#define CAN_MO49_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019638u)) /* lint --e(923)*/

/** 163C, Message Object  Control Register */
#define CAN_MO49_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001963Cu)) /* lint --e(923)*/

/** 1634, Message Object  Data Register High */
#define CAN_MO49_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019634u)) /* lint --e(923)*/

/** 1630, Message Object  Data Register Low */
#define CAN_MO49_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019630u)) /* lint --e(923)*/

/** 1620, Message Object  Function Control Register */
#define CAN_MO49_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019620u)) /* lint --e(923)*/

/** 1624, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO49_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019624u)) /* lint --e(923)*/

/** 1628, Message Object  Interrupt Pointer Register */
#define CAN_MO49_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019628u)) /* lint --e(923)*/

/** 108C, Message Object  Acceptance Mask Register */
#define CAN_MO4_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001908Cu)) /* lint --e(923)*/

/** 1098, Message Object  Arbitration Register */
#define CAN_MO4_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019098u)) /* lint --e(923)*/

/** 109C, Message Object  Control Register */
#define CAN_MO4_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001909Cu)) /* lint --e(923)*/

/** 1094, Message Object  Data Register High */
#define CAN_MO4_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019094u)) /* lint --e(923)*/

/** 1090, Message Object  Data Register Low */
#define CAN_MO4_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019090u)) /* lint --e(923)*/

/** 1080, Message Object  Function Control Register */
#define CAN_MO4_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019080u)) /* lint --e(923)*/

/** 1084, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO4_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019084u)) /* lint --e(923)*/

/** 1088, Message Object  Interrupt Pointer Register */
#define CAN_MO4_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019088u)) /* lint --e(923)*/

/** 164C, Message Object  Acceptance Mask Register */
#define CAN_MO50_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001964Cu)) /* lint --e(923)*/

/** 1658, Message Object  Arbitration Register */
#define CAN_MO50_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019658u)) /* lint --e(923)*/

/** 165C, Message Object  Control Register */
#define CAN_MO50_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001965Cu)) /* lint --e(923)*/

/** 1654, Message Object  Data Register High */
#define CAN_MO50_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019654u)) /* lint --e(923)*/

/** 1650, Message Object  Data Register Low */
#define CAN_MO50_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019650u)) /* lint --e(923)*/

/** 1640, Message Object  Function Control Register */
#define CAN_MO50_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019640u)) /* lint --e(923)*/

/** 1644, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO50_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019644u)) /* lint --e(923)*/

/** 1648, Message Object  Interrupt Pointer Register */
#define CAN_MO50_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019648u)) /* lint --e(923)*/

/** 166C, Message Object  Acceptance Mask Register */
#define CAN_MO51_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001966Cu)) /* lint --e(923)*/

/** 1678, Message Object  Arbitration Register */
#define CAN_MO51_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019678u)) /* lint --e(923)*/

/** 167C, Message Object  Control Register */
#define CAN_MO51_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001967Cu)) /* lint --e(923)*/

/** 1674, Message Object  Data Register High */
#define CAN_MO51_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019674u)) /* lint --e(923)*/

/** 1670, Message Object  Data Register Low */
#define CAN_MO51_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019670u)) /* lint --e(923)*/

/** 1660, Message Object  Function Control Register */
#define CAN_MO51_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019660u)) /* lint --e(923)*/

/** 1664, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO51_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019664u)) /* lint --e(923)*/

/** 1668, Message Object  Interrupt Pointer Register */
#define CAN_MO51_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019668u)) /* lint --e(923)*/

/** 168C, Message Object  Acceptance Mask Register */
#define CAN_MO52_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001968Cu)) /* lint --e(923)*/

/** 1698, Message Object  Arbitration Register */
#define CAN_MO52_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019698u)) /* lint --e(923)*/

/** 169C, Message Object  Control Register */
#define CAN_MO52_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001969Cu)) /* lint --e(923)*/

/** 1694, Message Object  Data Register High */
#define CAN_MO52_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019694u)) /* lint --e(923)*/

/** 1690, Message Object  Data Register Low */
#define CAN_MO52_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019690u)) /* lint --e(923)*/

/** 1680, Message Object  Function Control Register */
#define CAN_MO52_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019680u)) /* lint --e(923)*/

/** 1684, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO52_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019684u)) /* lint --e(923)*/

/** 1688, Message Object  Interrupt Pointer Register */
#define CAN_MO52_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019688u)) /* lint --e(923)*/

/** 16AC, Message Object  Acceptance Mask Register */
#define CAN_MO53_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00196ACu)) /* lint --e(923)*/

/** 16B8, Message Object  Arbitration Register */
#define CAN_MO53_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00196B8u)) /* lint --e(923)*/

/** 16BC, Message Object  Control Register */
#define CAN_MO53_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00196BCu)) /* lint --e(923)*/

/** 16B4, Message Object  Data Register High */
#define CAN_MO53_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00196B4u)) /* lint --e(923)*/

/** 16B0, Message Object  Data Register Low */
#define CAN_MO53_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00196B0u)) /* lint --e(923)*/

/** 16A0, Message Object  Function Control Register */
#define CAN_MO53_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00196A0u)) /* lint --e(923)*/

/** 16A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO53_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00196A4u)) /* lint --e(923)*/

/** 16A8, Message Object  Interrupt Pointer Register */
#define CAN_MO53_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00196A8u)) /* lint --e(923)*/

/** 16CC, Message Object  Acceptance Mask Register */
#define CAN_MO54_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00196CCu)) /* lint --e(923)*/

/** 16D8, Message Object  Arbitration Register */
#define CAN_MO54_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00196D8u)) /* lint --e(923)*/

/** 16DC, Message Object  Control Register */
#define CAN_MO54_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00196DCu)) /* lint --e(923)*/

/** 16D4, Message Object  Data Register High */
#define CAN_MO54_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00196D4u)) /* lint --e(923)*/

/** 16D0, Message Object  Data Register Low */
#define CAN_MO54_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00196D0u)) /* lint --e(923)*/

/** 16C0, Message Object  Function Control Register */
#define CAN_MO54_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00196C0u)) /* lint --e(923)*/

/** 16C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO54_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00196C4u)) /* lint --e(923)*/

/** 16C8, Message Object  Interrupt Pointer Register */
#define CAN_MO54_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00196C8u)) /* lint --e(923)*/

/** 16EC, Message Object  Acceptance Mask Register */
#define CAN_MO55_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00196ECu)) /* lint --e(923)*/

/** 16F8, Message Object  Arbitration Register */
#define CAN_MO55_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00196F8u)) /* lint --e(923)*/

/** 16FC, Message Object  Control Register */
#define CAN_MO55_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00196FCu)) /* lint --e(923)*/

/** 16F4, Message Object  Data Register High */
#define CAN_MO55_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00196F4u)) /* lint --e(923)*/

/** 16F0, Message Object  Data Register Low */
#define CAN_MO55_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00196F0u)) /* lint --e(923)*/

/** 16E0, Message Object  Function Control Register */
#define CAN_MO55_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00196E0u)) /* lint --e(923)*/

/** 16E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO55_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00196E4u)) /* lint --e(923)*/

/** 16E8, Message Object  Interrupt Pointer Register */
#define CAN_MO55_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00196E8u)) /* lint --e(923)*/

/** 170C, Message Object  Acceptance Mask Register */
#define CAN_MO56_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001970Cu)) /* lint --e(923)*/

/** 1718, Message Object  Arbitration Register */
#define CAN_MO56_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019718u)) /* lint --e(923)*/

/** 171C, Message Object  Control Register */
#define CAN_MO56_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001971Cu)) /* lint --e(923)*/

/** 1714, Message Object  Data Register High */
#define CAN_MO56_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019714u)) /* lint --e(923)*/

/** 1710, Message Object  Data Register Low */
#define CAN_MO56_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019710u)) /* lint --e(923)*/

/** 1700, Message Object  Function Control Register */
#define CAN_MO56_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019700u)) /* lint --e(923)*/

/** 1704, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO56_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019704u)) /* lint --e(923)*/

/** 1708, Message Object  Interrupt Pointer Register */
#define CAN_MO56_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019708u)) /* lint --e(923)*/

/** 172C, Message Object  Acceptance Mask Register */
#define CAN_MO57_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001972Cu)) /* lint --e(923)*/

/** 1738, Message Object  Arbitration Register */
#define CAN_MO57_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019738u)) /* lint --e(923)*/

/** 173C, Message Object  Control Register */
#define CAN_MO57_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001973Cu)) /* lint --e(923)*/

/** 1734, Message Object  Data Register High */
#define CAN_MO57_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019734u)) /* lint --e(923)*/

/** 1730, Message Object  Data Register Low */
#define CAN_MO57_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019730u)) /* lint --e(923)*/

/** 1720, Message Object  Function Control Register */
#define CAN_MO57_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019720u)) /* lint --e(923)*/

/** 1724, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO57_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019724u)) /* lint --e(923)*/

/** 1728, Message Object  Interrupt Pointer Register */
#define CAN_MO57_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019728u)) /* lint --e(923)*/

/** 174C, Message Object  Acceptance Mask Register */
#define CAN_MO58_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001974Cu)) /* lint --e(923)*/

/** 1758, Message Object  Arbitration Register */
#define CAN_MO58_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019758u)) /* lint --e(923)*/

/** 175C, Message Object  Control Register */
#define CAN_MO58_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001975Cu)) /* lint --e(923)*/

/** 1754, Message Object  Data Register High */
#define CAN_MO58_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019754u)) /* lint --e(923)*/

/** 1750, Message Object  Data Register Low */
#define CAN_MO58_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019750u)) /* lint --e(923)*/

/** 1740, Message Object  Function Control Register */
#define CAN_MO58_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019740u)) /* lint --e(923)*/

/** 1744, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO58_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019744u)) /* lint --e(923)*/

/** 1748, Message Object  Interrupt Pointer Register */
#define CAN_MO58_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019748u)) /* lint --e(923)*/

/** 176C, Message Object  Acceptance Mask Register */
#define CAN_MO59_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001976Cu)) /* lint --e(923)*/

/** 1778, Message Object  Arbitration Register */
#define CAN_MO59_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019778u)) /* lint --e(923)*/

/** 177C, Message Object  Control Register */
#define CAN_MO59_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001977Cu)) /* lint --e(923)*/

/** 1774, Message Object  Data Register High */
#define CAN_MO59_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019774u)) /* lint --e(923)*/

/** 1770, Message Object  Data Register Low */
#define CAN_MO59_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019770u)) /* lint --e(923)*/

/** 1760, Message Object  Function Control Register */
#define CAN_MO59_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019760u)) /* lint --e(923)*/

/** 1764, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO59_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019764u)) /* lint --e(923)*/

/** 1768, Message Object  Interrupt Pointer Register */
#define CAN_MO59_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019768u)) /* lint --e(923)*/

/** 10AC, Message Object  Acceptance Mask Register */
#define CAN_MO5_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00190ACu)) /* lint --e(923)*/

/** 10B8, Message Object  Arbitration Register */
#define CAN_MO5_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00190B8u)) /* lint --e(923)*/

/** 10BC, Message Object  Control Register */
#define CAN_MO5_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00190BCu)) /* lint --e(923)*/

/** 10B4, Message Object  Data Register High */
#define CAN_MO5_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00190B4u)) /* lint --e(923)*/

/** 10B0, Message Object  Data Register Low */
#define CAN_MO5_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00190B0u)) /* lint --e(923)*/

/** 10A0, Message Object  Function Control Register */
#define CAN_MO5_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00190A0u)) /* lint --e(923)*/

/** 10A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO5_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00190A4u)) /* lint --e(923)*/

/** 10A8, Message Object  Interrupt Pointer Register */
#define CAN_MO5_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00190A8u)) /* lint --e(923)*/

/** 178C, Message Object  Acceptance Mask Register */
#define CAN_MO60_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001978Cu)) /* lint --e(923)*/

/** 1798, Message Object  Arbitration Register */
#define CAN_MO60_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019798u)) /* lint --e(923)*/

/** 179C, Message Object  Control Register */
#define CAN_MO60_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001979Cu)) /* lint --e(923)*/

/** 1794, Message Object  Data Register High */
#define CAN_MO60_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019794u)) /* lint --e(923)*/

/** 1790, Message Object  Data Register Low */
#define CAN_MO60_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019790u)) /* lint --e(923)*/

/** 1780, Message Object  Function Control Register */
#define CAN_MO60_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019780u)) /* lint --e(923)*/

/** 1784, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO60_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019784u)) /* lint --e(923)*/

/** 1788, Message Object  Interrupt Pointer Register */
#define CAN_MO60_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019788u)) /* lint --e(923)*/

/** 17AC, Message Object  Acceptance Mask Register */
#define CAN_MO61_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00197ACu)) /* lint --e(923)*/

/** 17B8, Message Object  Arbitration Register */
#define CAN_MO61_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00197B8u)) /* lint --e(923)*/

/** 17BC, Message Object  Control Register */
#define CAN_MO61_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00197BCu)) /* lint --e(923)*/

/** 17B4, Message Object  Data Register High */
#define CAN_MO61_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00197B4u)) /* lint --e(923)*/

/** 17B0, Message Object  Data Register Low */
#define CAN_MO61_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00197B0u)) /* lint --e(923)*/

/** 17A0, Message Object  Function Control Register */
#define CAN_MO61_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00197A0u)) /* lint --e(923)*/

/** 17A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO61_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00197A4u)) /* lint --e(923)*/

/** 17A8, Message Object  Interrupt Pointer Register */
#define CAN_MO61_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00197A8u)) /* lint --e(923)*/

/** 17CC, Message Object  Acceptance Mask Register */
#define CAN_MO62_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00197CCu)) /* lint --e(923)*/

/** 17D8, Message Object  Arbitration Register */
#define CAN_MO62_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00197D8u)) /* lint --e(923)*/

/** 17DC, Message Object  Control Register */
#define CAN_MO62_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00197DCu)) /* lint --e(923)*/

/** 17D4, Message Object  Data Register High */
#define CAN_MO62_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00197D4u)) /* lint --e(923)*/

/** 17D0, Message Object  Data Register Low */
#define CAN_MO62_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00197D0u)) /* lint --e(923)*/

/** 17C0, Message Object  Function Control Register */
#define CAN_MO62_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00197C0u)) /* lint --e(923)*/

/** 17C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO62_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00197C4u)) /* lint --e(923)*/

/** 17C8, Message Object  Interrupt Pointer Register */
#define CAN_MO62_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00197C8u)) /* lint --e(923)*/

/** 17EC, Message Object  Acceptance Mask Register */
#define CAN_MO63_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00197ECu)) /* lint --e(923)*/

/** 17F8, Message Object  Arbitration Register */
#define CAN_MO63_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00197F8u)) /* lint --e(923)*/

/** 17FC, Message Object  Control Register */
#define CAN_MO63_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00197FCu)) /* lint --e(923)*/

/** 17F4, Message Object  Data Register High */
#define CAN_MO63_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00197F4u)) /* lint --e(923)*/

/** 17F0, Message Object  Data Register Low */
#define CAN_MO63_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00197F0u)) /* lint --e(923)*/

/** 17E0, Message Object  Function Control Register */
#define CAN_MO63_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00197E0u)) /* lint --e(923)*/

/** 17E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO63_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00197E4u)) /* lint --e(923)*/

/** 17E8, Message Object  Interrupt Pointer Register */
#define CAN_MO63_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00197E8u)) /* lint --e(923)*/

/** 180C, Message Object  Acceptance Mask Register */
#define CAN_MO64_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001980Cu)) /* lint --e(923)*/

/** 1818, Message Object  Arbitration Register */
#define CAN_MO64_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019818u)) /* lint --e(923)*/

/** 181C, Message Object  Control Register */
#define CAN_MO64_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001981Cu)) /* lint --e(923)*/

/** 1814, Message Object  Data Register High */
#define CAN_MO64_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019814u)) /* lint --e(923)*/

/** 1810, Message Object  Data Register Low */
#define CAN_MO64_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019810u)) /* lint --e(923)*/

/** 1800, Message Object  Function Control Register */
#define CAN_MO64_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019800u)) /* lint --e(923)*/

/** 1804, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO64_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019804u)) /* lint --e(923)*/

/** 1808, Message Object  Interrupt Pointer Register */
#define CAN_MO64_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019808u)) /* lint --e(923)*/

/** 182C, Message Object  Acceptance Mask Register */
#define CAN_MO65_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001982Cu)) /* lint --e(923)*/

/** 1838, Message Object  Arbitration Register */
#define CAN_MO65_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019838u)) /* lint --e(923)*/

/** 183C, Message Object  Control Register */
#define CAN_MO65_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001983Cu)) /* lint --e(923)*/

/** 1834, Message Object  Data Register High */
#define CAN_MO65_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019834u)) /* lint --e(923)*/

/** 1830, Message Object  Data Register Low */
#define CAN_MO65_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019830u)) /* lint --e(923)*/

/** 1820, Message Object  Function Control Register */
#define CAN_MO65_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019820u)) /* lint --e(923)*/

/** 1824, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO65_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019824u)) /* lint --e(923)*/

/** 1828, Message Object  Interrupt Pointer Register */
#define CAN_MO65_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019828u)) /* lint --e(923)*/

/** 184C, Message Object  Acceptance Mask Register */
#define CAN_MO66_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001984Cu)) /* lint --e(923)*/

/** 1858, Message Object  Arbitration Register */
#define CAN_MO66_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019858u)) /* lint --e(923)*/

/** 185C, Message Object  Control Register */
#define CAN_MO66_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001985Cu)) /* lint --e(923)*/

/** 1854, Message Object  Data Register High */
#define CAN_MO66_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019854u)) /* lint --e(923)*/

/** 1850, Message Object  Data Register Low */
#define CAN_MO66_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019850u)) /* lint --e(923)*/

/** 1840, Message Object  Function Control Register */
#define CAN_MO66_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019840u)) /* lint --e(923)*/

/** 1844, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO66_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019844u)) /* lint --e(923)*/

/** 1848, Message Object  Interrupt Pointer Register */
#define CAN_MO66_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019848u)) /* lint --e(923)*/

/** 186C, Message Object  Acceptance Mask Register */
#define CAN_MO67_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001986Cu)) /* lint --e(923)*/

/** 1878, Message Object  Arbitration Register */
#define CAN_MO67_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019878u)) /* lint --e(923)*/

/** 187C, Message Object  Control Register */
#define CAN_MO67_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001987Cu)) /* lint --e(923)*/

/** 1874, Message Object  Data Register High */
#define CAN_MO67_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019874u)) /* lint --e(923)*/

/** 1870, Message Object  Data Register Low */
#define CAN_MO67_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019870u)) /* lint --e(923)*/

/** 1860, Message Object  Function Control Register */
#define CAN_MO67_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019860u)) /* lint --e(923)*/

/** 1864, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO67_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019864u)) /* lint --e(923)*/

/** 1868, Message Object  Interrupt Pointer Register */
#define CAN_MO67_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019868u)) /* lint --e(923)*/

/** 188C, Message Object  Acceptance Mask Register */
#define CAN_MO68_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001988Cu)) /* lint --e(923)*/

/** 1898, Message Object  Arbitration Register */
#define CAN_MO68_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019898u)) /* lint --e(923)*/

/** 189C, Message Object  Control Register */
#define CAN_MO68_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001989Cu)) /* lint --e(923)*/

/** 1894, Message Object  Data Register High */
#define CAN_MO68_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019894u)) /* lint --e(923)*/

/** 1890, Message Object  Data Register Low */
#define CAN_MO68_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019890u)) /* lint --e(923)*/

/** 1880, Message Object  Function Control Register */
#define CAN_MO68_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019880u)) /* lint --e(923)*/

/** 1884, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO68_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019884u)) /* lint --e(923)*/

/** 1888, Message Object  Interrupt Pointer Register */
#define CAN_MO68_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019888u)) /* lint --e(923)*/

/** 18AC, Message Object  Acceptance Mask Register */
#define CAN_MO69_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00198ACu)) /* lint --e(923)*/

/** 18B8, Message Object  Arbitration Register */
#define CAN_MO69_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00198B8u)) /* lint --e(923)*/

/** 18BC, Message Object  Control Register */
#define CAN_MO69_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00198BCu)) /* lint --e(923)*/

/** 18B4, Message Object  Data Register High */
#define CAN_MO69_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00198B4u)) /* lint --e(923)*/

/** 18B0, Message Object  Data Register Low */
#define CAN_MO69_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00198B0u)) /* lint --e(923)*/

/** 18A0, Message Object  Function Control Register */
#define CAN_MO69_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00198A0u)) /* lint --e(923)*/

/** 18A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO69_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00198A4u)) /* lint --e(923)*/

/** 18A8, Message Object  Interrupt Pointer Register */
#define CAN_MO69_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00198A8u)) /* lint --e(923)*/

/** 10CC, Message Object  Acceptance Mask Register */
#define CAN_MO6_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00190CCu)) /* lint --e(923)*/

/** 10D8, Message Object  Arbitration Register */
#define CAN_MO6_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00190D8u)) /* lint --e(923)*/

/** 10DC, Message Object  Control Register */
#define CAN_MO6_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00190DCu)) /* lint --e(923)*/

/** 10D4, Message Object  Data Register High */
#define CAN_MO6_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00190D4u)) /* lint --e(923)*/

/** 10D0, Message Object  Data Register Low */
#define CAN_MO6_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00190D0u)) /* lint --e(923)*/

/** 10C0, Message Object  Function Control Register */
#define CAN_MO6_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00190C0u)) /* lint --e(923)*/

/** 10C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO6_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00190C4u)) /* lint --e(923)*/

/** 10C8, Message Object  Interrupt Pointer Register */
#define CAN_MO6_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00190C8u)) /* lint --e(923)*/

/** 18CC, Message Object  Acceptance Mask Register */
#define CAN_MO70_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00198CCu)) /* lint --e(923)*/

/** 18D8, Message Object  Arbitration Register */
#define CAN_MO70_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00198D8u)) /* lint --e(923)*/

/** 18DC, Message Object  Control Register */
#define CAN_MO70_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00198DCu)) /* lint --e(923)*/

/** 18D4, Message Object  Data Register High */
#define CAN_MO70_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00198D4u)) /* lint --e(923)*/

/** 18D0, Message Object  Data Register Low */
#define CAN_MO70_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00198D0u)) /* lint --e(923)*/

/** 18C0, Message Object  Function Control Register */
#define CAN_MO70_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00198C0u)) /* lint --e(923)*/

/** 18C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO70_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00198C4u)) /* lint --e(923)*/

/** 18C8, Message Object  Interrupt Pointer Register */
#define CAN_MO70_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00198C8u)) /* lint --e(923)*/

/** 18EC, Message Object  Acceptance Mask Register */
#define CAN_MO71_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00198ECu)) /* lint --e(923)*/

/** 18F8, Message Object  Arbitration Register */
#define CAN_MO71_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00198F8u)) /* lint --e(923)*/

/** 18FC, Message Object  Control Register */
#define CAN_MO71_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00198FCu)) /* lint --e(923)*/

/** 18F4, Message Object  Data Register High */
#define CAN_MO71_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00198F4u)) /* lint --e(923)*/

/** 18F0, Message Object  Data Register Low */
#define CAN_MO71_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00198F0u)) /* lint --e(923)*/

/** 18E0, Message Object  Function Control Register */
#define CAN_MO71_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00198E0u)) /* lint --e(923)*/

/** 18E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO71_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00198E4u)) /* lint --e(923)*/

/** 18E8, Message Object  Interrupt Pointer Register */
#define CAN_MO71_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00198E8u)) /* lint --e(923)*/

/** 190C, Message Object  Acceptance Mask Register */
#define CAN_MO72_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001990Cu)) /* lint --e(923)*/

/** 1918, Message Object  Arbitration Register */
#define CAN_MO72_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019918u)) /* lint --e(923)*/

/** 191C, Message Object  Control Register */
#define CAN_MO72_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001991Cu)) /* lint --e(923)*/

/** 1914, Message Object  Data Register High */
#define CAN_MO72_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019914u)) /* lint --e(923)*/

/** 1910, Message Object  Data Register Low */
#define CAN_MO72_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019910u)) /* lint --e(923)*/

/** 1900, Message Object  Function Control Register */
#define CAN_MO72_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019900u)) /* lint --e(923)*/

/** 1904, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO72_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019904u)) /* lint --e(923)*/

/** 1908, Message Object  Interrupt Pointer Register */
#define CAN_MO72_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019908u)) /* lint --e(923)*/

/** 192C, Message Object  Acceptance Mask Register */
#define CAN_MO73_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001992Cu)) /* lint --e(923)*/

/** 1938, Message Object  Arbitration Register */
#define CAN_MO73_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019938u)) /* lint --e(923)*/

/** 193C, Message Object  Control Register */
#define CAN_MO73_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001993Cu)) /* lint --e(923)*/

/** 1934, Message Object  Data Register High */
#define CAN_MO73_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019934u)) /* lint --e(923)*/

/** 1930, Message Object  Data Register Low */
#define CAN_MO73_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019930u)) /* lint --e(923)*/

/** 1920, Message Object  Function Control Register */
#define CAN_MO73_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019920u)) /* lint --e(923)*/

/** 1924, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO73_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019924u)) /* lint --e(923)*/

/** 1928, Message Object  Interrupt Pointer Register */
#define CAN_MO73_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019928u)) /* lint --e(923)*/

/** 194C, Message Object  Acceptance Mask Register */
#define CAN_MO74_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001994Cu)) /* lint --e(923)*/

/** 1958, Message Object  Arbitration Register */
#define CAN_MO74_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019958u)) /* lint --e(923)*/

/** 195C, Message Object  Control Register */
#define CAN_MO74_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001995Cu)) /* lint --e(923)*/

/** 1954, Message Object  Data Register High */
#define CAN_MO74_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019954u)) /* lint --e(923)*/

/** 1950, Message Object  Data Register Low */
#define CAN_MO74_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019950u)) /* lint --e(923)*/

/** 1940, Message Object  Function Control Register */
#define CAN_MO74_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019940u)) /* lint --e(923)*/

/** 1944, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO74_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019944u)) /* lint --e(923)*/

/** 1948, Message Object  Interrupt Pointer Register */
#define CAN_MO74_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019948u)) /* lint --e(923)*/

/** 196C, Message Object  Acceptance Mask Register */
#define CAN_MO75_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001996Cu)) /* lint --e(923)*/

/** 1978, Message Object  Arbitration Register */
#define CAN_MO75_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019978u)) /* lint --e(923)*/

/** 197C, Message Object  Control Register */
#define CAN_MO75_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001997Cu)) /* lint --e(923)*/

/** 1974, Message Object  Data Register High */
#define CAN_MO75_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019974u)) /* lint --e(923)*/

/** 1970, Message Object  Data Register Low */
#define CAN_MO75_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019970u)) /* lint --e(923)*/

/** 1960, Message Object  Function Control Register */
#define CAN_MO75_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019960u)) /* lint --e(923)*/

/** 1964, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO75_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019964u)) /* lint --e(923)*/

/** 1968, Message Object  Interrupt Pointer Register */
#define CAN_MO75_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019968u)) /* lint --e(923)*/

/** 198C, Message Object  Acceptance Mask Register */
#define CAN_MO76_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001998Cu)) /* lint --e(923)*/

/** 1998, Message Object  Arbitration Register */
#define CAN_MO76_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019998u)) /* lint --e(923)*/

/** 199C, Message Object  Control Register */
#define CAN_MO76_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001999Cu)) /* lint --e(923)*/

/** 1994, Message Object  Data Register High */
#define CAN_MO76_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019994u)) /* lint --e(923)*/

/** 1990, Message Object  Data Register Low */
#define CAN_MO76_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019990u)) /* lint --e(923)*/

/** 1980, Message Object  Function Control Register */
#define CAN_MO76_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019980u)) /* lint --e(923)*/

/** 1984, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO76_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019984u)) /* lint --e(923)*/

/** 1988, Message Object  Interrupt Pointer Register */
#define CAN_MO76_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019988u)) /* lint --e(923)*/

/** 19AC, Message Object  Acceptance Mask Register */
#define CAN_MO77_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00199ACu)) /* lint --e(923)*/

/** 19B8, Message Object  Arbitration Register */
#define CAN_MO77_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00199B8u)) /* lint --e(923)*/

/** 19BC, Message Object  Control Register */
#define CAN_MO77_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00199BCu)) /* lint --e(923)*/

/** 19B4, Message Object  Data Register High */
#define CAN_MO77_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00199B4u)) /* lint --e(923)*/

/** 19B0, Message Object  Data Register Low */
#define CAN_MO77_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00199B0u)) /* lint --e(923)*/

/** 19A0, Message Object  Function Control Register */
#define CAN_MO77_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00199A0u)) /* lint --e(923)*/

/** 19A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO77_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00199A4u)) /* lint --e(923)*/

/** 19A8, Message Object  Interrupt Pointer Register */
#define CAN_MO77_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00199A8u)) /* lint --e(923)*/

/** 19CC, Message Object  Acceptance Mask Register */
#define CAN_MO78_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00199CCu)) /* lint --e(923)*/

/** 19D8, Message Object  Arbitration Register */
#define CAN_MO78_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00199D8u)) /* lint --e(923)*/

/** 19DC, Message Object  Control Register */
#define CAN_MO78_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00199DCu)) /* lint --e(923)*/

/** 19D4, Message Object  Data Register High */
#define CAN_MO78_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00199D4u)) /* lint --e(923)*/

/** 19D0, Message Object  Data Register Low */
#define CAN_MO78_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00199D0u)) /* lint --e(923)*/

/** 19C0, Message Object  Function Control Register */
#define CAN_MO78_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00199C0u)) /* lint --e(923)*/

/** 19C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO78_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00199C4u)) /* lint --e(923)*/

/** 19C8, Message Object  Interrupt Pointer Register */
#define CAN_MO78_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00199C8u)) /* lint --e(923)*/

/** 19EC, Message Object  Acceptance Mask Register */
#define CAN_MO79_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00199ECu)) /* lint --e(923)*/

/** 19F8, Message Object  Arbitration Register */
#define CAN_MO79_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00199F8u)) /* lint --e(923)*/

/** 19FC, Message Object  Control Register */
#define CAN_MO79_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00199FCu)) /* lint --e(923)*/

/** 19F4, Message Object  Data Register High */
#define CAN_MO79_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00199F4u)) /* lint --e(923)*/

/** 19F0, Message Object  Data Register Low */
#define CAN_MO79_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00199F0u)) /* lint --e(923)*/

/** 19E0, Message Object  Function Control Register */
#define CAN_MO79_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00199E0u)) /* lint --e(923)*/

/** 19E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO79_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00199E4u)) /* lint --e(923)*/

/** 19E8, Message Object  Interrupt Pointer Register */
#define CAN_MO79_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00199E8u)) /* lint --e(923)*/

/** 10EC, Message Object  Acceptance Mask Register */
#define CAN_MO7_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF00190ECu)) /* lint --e(923)*/

/** 10F8, Message Object  Arbitration Register */
#define CAN_MO7_AR ((*(volatile Ifx_CAN_MO_AR*)0xF00190F8u)) /* lint --e(923)*/

/** 10FC, Message Object  Control Register */
#define CAN_MO7_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF00190FCu)) /* lint --e(923)*/

/** 10F4, Message Object  Data Register High */
#define CAN_MO7_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF00190F4u)) /* lint --e(923)*/

/** 10F0, Message Object  Data Register Low */
#define CAN_MO7_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF00190F0u)) /* lint --e(923)*/

/** 10E0, Message Object  Function Control Register */
#define CAN_MO7_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF00190E0u)) /* lint --e(923)*/

/** 10E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO7_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF00190E4u)) /* lint --e(923)*/

/** 10E8, Message Object  Interrupt Pointer Register */
#define CAN_MO7_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF00190E8u)) /* lint --e(923)*/

/** 1A0C, Message Object  Acceptance Mask Register */
#define CAN_MO80_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019A0Cu)) /* lint --e(923)*/

/** 1A18, Message Object  Arbitration Register */
#define CAN_MO80_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019A18u)) /* lint --e(923)*/

/** 1A1C, Message Object  Control Register */
#define CAN_MO80_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019A1Cu)) /* lint --e(923)*/

/** 1A14, Message Object  Data Register High */
#define CAN_MO80_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019A14u)) /* lint --e(923)*/

/** 1A10, Message Object  Data Register Low */
#define CAN_MO80_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019A10u)) /* lint --e(923)*/

/** 1A00, Message Object  Function Control Register */
#define CAN_MO80_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019A00u)) /* lint --e(923)*/

/** 1A04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO80_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019A04u)) /* lint --e(923)*/

/** 1A08, Message Object  Interrupt Pointer Register */
#define CAN_MO80_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019A08u)) /* lint --e(923)*/

/** 1A2C, Message Object  Acceptance Mask Register */
#define CAN_MO81_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019A2Cu)) /* lint --e(923)*/

/** 1A38, Message Object  Arbitration Register */
#define CAN_MO81_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019A38u)) /* lint --e(923)*/

/** 1A3C, Message Object  Control Register */
#define CAN_MO81_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019A3Cu)) /* lint --e(923)*/

/** 1A34, Message Object  Data Register High */
#define CAN_MO81_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019A34u)) /* lint --e(923)*/

/** 1A30, Message Object  Data Register Low */
#define CAN_MO81_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019A30u)) /* lint --e(923)*/

/** 1A20, Message Object  Function Control Register */
#define CAN_MO81_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019A20u)) /* lint --e(923)*/

/** 1A24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO81_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019A24u)) /* lint --e(923)*/

/** 1A28, Message Object  Interrupt Pointer Register */
#define CAN_MO81_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019A28u)) /* lint --e(923)*/

/** 1A4C, Message Object  Acceptance Mask Register */
#define CAN_MO82_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019A4Cu)) /* lint --e(923)*/

/** 1A58, Message Object  Arbitration Register */
#define CAN_MO82_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019A58u)) /* lint --e(923)*/

/** 1A5C, Message Object  Control Register */
#define CAN_MO82_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019A5Cu)) /* lint --e(923)*/

/** 1A54, Message Object  Data Register High */
#define CAN_MO82_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019A54u)) /* lint --e(923)*/

/** 1A50, Message Object  Data Register Low */
#define CAN_MO82_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019A50u)) /* lint --e(923)*/

/** 1A40, Message Object  Function Control Register */
#define CAN_MO82_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019A40u)) /* lint --e(923)*/

/** 1A44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO82_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019A44u)) /* lint --e(923)*/

/** 1A48, Message Object  Interrupt Pointer Register */
#define CAN_MO82_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019A48u)) /* lint --e(923)*/

/** 1A6C, Message Object  Acceptance Mask Register */
#define CAN_MO83_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019A6Cu)) /* lint --e(923)*/

/** 1A78, Message Object  Arbitration Register */
#define CAN_MO83_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019A78u)) /* lint --e(923)*/

/** 1A7C, Message Object  Control Register */
#define CAN_MO83_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019A7Cu)) /* lint --e(923)*/

/** 1A74, Message Object  Data Register High */
#define CAN_MO83_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019A74u)) /* lint --e(923)*/

/** 1A70, Message Object  Data Register Low */
#define CAN_MO83_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019A70u)) /* lint --e(923)*/

/** 1A60, Message Object  Function Control Register */
#define CAN_MO83_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019A60u)) /* lint --e(923)*/

/** 1A64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO83_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019A64u)) /* lint --e(923)*/

/** 1A68, Message Object  Interrupt Pointer Register */
#define CAN_MO83_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019A68u)) /* lint --e(923)*/

/** 1A8C, Message Object  Acceptance Mask Register */
#define CAN_MO84_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019A8Cu)) /* lint --e(923)*/

/** 1A98, Message Object  Arbitration Register */
#define CAN_MO84_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019A98u)) /* lint --e(923)*/

/** 1A9C, Message Object  Control Register */
#define CAN_MO84_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019A9Cu)) /* lint --e(923)*/

/** 1A94, Message Object  Data Register High */
#define CAN_MO84_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019A94u)) /* lint --e(923)*/

/** 1A90, Message Object  Data Register Low */
#define CAN_MO84_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019A90u)) /* lint --e(923)*/

/** 1A80, Message Object  Function Control Register */
#define CAN_MO84_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019A80u)) /* lint --e(923)*/

/** 1A84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO84_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019A84u)) /* lint --e(923)*/

/** 1A88, Message Object  Interrupt Pointer Register */
#define CAN_MO84_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019A88u)) /* lint --e(923)*/

/** 1AAC, Message Object  Acceptance Mask Register */
#define CAN_MO85_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019AACu)) /* lint --e(923)*/

/** 1AB8, Message Object  Arbitration Register */
#define CAN_MO85_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019AB8u)) /* lint --e(923)*/

/** 1ABC, Message Object  Control Register */
#define CAN_MO85_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019ABCu)) /* lint --e(923)*/

/** 1AB4, Message Object  Data Register High */
#define CAN_MO85_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019AB4u)) /* lint --e(923)*/

/** 1AB0, Message Object  Data Register Low */
#define CAN_MO85_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019AB0u)) /* lint --e(923)*/

/** 1AA0, Message Object  Function Control Register */
#define CAN_MO85_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019AA0u)) /* lint --e(923)*/

/** 1AA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO85_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019AA4u)) /* lint --e(923)*/

/** 1AA8, Message Object  Interrupt Pointer Register */
#define CAN_MO85_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019AA8u)) /* lint --e(923)*/

/** 1ACC, Message Object  Acceptance Mask Register */
#define CAN_MO86_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019ACCu)) /* lint --e(923)*/

/** 1AD8, Message Object  Arbitration Register */
#define CAN_MO86_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019AD8u)) /* lint --e(923)*/

/** 1ADC, Message Object  Control Register */
#define CAN_MO86_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019ADCu)) /* lint --e(923)*/

/** 1AD4, Message Object  Data Register High */
#define CAN_MO86_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019AD4u)) /* lint --e(923)*/

/** 1AD0, Message Object  Data Register Low */
#define CAN_MO86_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019AD0u)) /* lint --e(923)*/

/** 1AC0, Message Object  Function Control Register */
#define CAN_MO86_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019AC0u)) /* lint --e(923)*/

/** 1AC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO86_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019AC4u)) /* lint --e(923)*/

/** 1AC8, Message Object  Interrupt Pointer Register */
#define CAN_MO86_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019AC8u)) /* lint --e(923)*/

/** 1AEC, Message Object  Acceptance Mask Register */
#define CAN_MO87_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019AECu)) /* lint --e(923)*/

/** 1AF8, Message Object  Arbitration Register */
#define CAN_MO87_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019AF8u)) /* lint --e(923)*/

/** 1AFC, Message Object  Control Register */
#define CAN_MO87_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019AFCu)) /* lint --e(923)*/

/** 1AF4, Message Object  Data Register High */
#define CAN_MO87_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019AF4u)) /* lint --e(923)*/

/** 1AF0, Message Object  Data Register Low */
#define CAN_MO87_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019AF0u)) /* lint --e(923)*/

/** 1AE0, Message Object  Function Control Register */
#define CAN_MO87_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019AE0u)) /* lint --e(923)*/

/** 1AE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO87_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019AE4u)) /* lint --e(923)*/

/** 1AE8, Message Object  Interrupt Pointer Register */
#define CAN_MO87_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019AE8u)) /* lint --e(923)*/

/** 1B0C, Message Object  Acceptance Mask Register */
#define CAN_MO88_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019B0Cu)) /* lint --e(923)*/

/** 1B18, Message Object  Arbitration Register */
#define CAN_MO88_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019B18u)) /* lint --e(923)*/

/** 1B1C, Message Object  Control Register */
#define CAN_MO88_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019B1Cu)) /* lint --e(923)*/

/** 1B14, Message Object  Data Register High */
#define CAN_MO88_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019B14u)) /* lint --e(923)*/

/** 1B10, Message Object  Data Register Low */
#define CAN_MO88_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019B10u)) /* lint --e(923)*/

/** 1B00, Message Object  Function Control Register */
#define CAN_MO88_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019B00u)) /* lint --e(923)*/

/** 1B04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO88_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019B04u)) /* lint --e(923)*/

/** 1B08, Message Object  Interrupt Pointer Register */
#define CAN_MO88_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019B08u)) /* lint --e(923)*/

/** 1B2C, Message Object  Acceptance Mask Register */
#define CAN_MO89_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019B2Cu)) /* lint --e(923)*/

/** 1B38, Message Object  Arbitration Register */
#define CAN_MO89_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019B38u)) /* lint --e(923)*/

/** 1B3C, Message Object  Control Register */
#define CAN_MO89_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019B3Cu)) /* lint --e(923)*/

/** 1B34, Message Object  Data Register High */
#define CAN_MO89_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019B34u)) /* lint --e(923)*/

/** 1B30, Message Object  Data Register Low */
#define CAN_MO89_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019B30u)) /* lint --e(923)*/

/** 1B20, Message Object  Function Control Register */
#define CAN_MO89_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019B20u)) /* lint --e(923)*/

/** 1B24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO89_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019B24u)) /* lint --e(923)*/

/** 1B28, Message Object  Interrupt Pointer Register */
#define CAN_MO89_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019B28u)) /* lint --e(923)*/

/** 110C, Message Object  Acceptance Mask Register */
#define CAN_MO8_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001910Cu)) /* lint --e(923)*/

/** 1118, Message Object  Arbitration Register */
#define CAN_MO8_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019118u)) /* lint --e(923)*/

/** 111C, Message Object  Control Register */
#define CAN_MO8_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001911Cu)) /* lint --e(923)*/

/** 1114, Message Object  Data Register High */
#define CAN_MO8_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019114u)) /* lint --e(923)*/

/** 1110, Message Object  Data Register Low */
#define CAN_MO8_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019110u)) /* lint --e(923)*/

/** 1100, Message Object  Function Control Register */
#define CAN_MO8_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019100u)) /* lint --e(923)*/

/** 1104, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO8_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019104u)) /* lint --e(923)*/

/** 1108, Message Object  Interrupt Pointer Register */
#define CAN_MO8_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019108u)) /* lint --e(923)*/

/** 1B4C, Message Object  Acceptance Mask Register */
#define CAN_MO90_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019B4Cu)) /* lint --e(923)*/

/** 1B58, Message Object  Arbitration Register */
#define CAN_MO90_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019B58u)) /* lint --e(923)*/

/** 1B5C, Message Object  Control Register */
#define CAN_MO90_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019B5Cu)) /* lint --e(923)*/

/** 1B54, Message Object  Data Register High */
#define CAN_MO90_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019B54u)) /* lint --e(923)*/

/** 1B50, Message Object  Data Register Low */
#define CAN_MO90_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019B50u)) /* lint --e(923)*/

/** 1B40, Message Object  Function Control Register */
#define CAN_MO90_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019B40u)) /* lint --e(923)*/

/** 1B44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO90_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019B44u)) /* lint --e(923)*/

/** 1B48, Message Object  Interrupt Pointer Register */
#define CAN_MO90_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019B48u)) /* lint --e(923)*/

/** 1B6C, Message Object  Acceptance Mask Register */
#define CAN_MO91_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019B6Cu)) /* lint --e(923)*/

/** 1B78, Message Object  Arbitration Register */
#define CAN_MO91_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019B78u)) /* lint --e(923)*/

/** 1B7C, Message Object  Control Register */
#define CAN_MO91_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019B7Cu)) /* lint --e(923)*/

/** 1B74, Message Object  Data Register High */
#define CAN_MO91_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019B74u)) /* lint --e(923)*/

/** 1B70, Message Object  Data Register Low */
#define CAN_MO91_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019B70u)) /* lint --e(923)*/

/** 1B60, Message Object  Function Control Register */
#define CAN_MO91_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019B60u)) /* lint --e(923)*/

/** 1B64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO91_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019B64u)) /* lint --e(923)*/

/** 1B68, Message Object  Interrupt Pointer Register */
#define CAN_MO91_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019B68u)) /* lint --e(923)*/

/** 1B8C, Message Object  Acceptance Mask Register */
#define CAN_MO92_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019B8Cu)) /* lint --e(923)*/

/** 1B98, Message Object  Arbitration Register */
#define CAN_MO92_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019B98u)) /* lint --e(923)*/

/** 1B9C, Message Object  Control Register */
#define CAN_MO92_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019B9Cu)) /* lint --e(923)*/

/** 1B94, Message Object  Data Register High */
#define CAN_MO92_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019B94u)) /* lint --e(923)*/

/** 1B90, Message Object  Data Register Low */
#define CAN_MO92_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019B90u)) /* lint --e(923)*/

/** 1B80, Message Object  Function Control Register */
#define CAN_MO92_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019B80u)) /* lint --e(923)*/

/** 1B84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO92_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019B84u)) /* lint --e(923)*/

/** 1B88, Message Object  Interrupt Pointer Register */
#define CAN_MO92_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019B88u)) /* lint --e(923)*/

/** 1BAC, Message Object  Acceptance Mask Register */
#define CAN_MO93_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019BACu)) /* lint --e(923)*/

/** 1BB8, Message Object  Arbitration Register */
#define CAN_MO93_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019BB8u)) /* lint --e(923)*/

/** 1BBC, Message Object  Control Register */
#define CAN_MO93_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019BBCu)) /* lint --e(923)*/

/** 1BB4, Message Object  Data Register High */
#define CAN_MO93_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019BB4u)) /* lint --e(923)*/

/** 1BB0, Message Object  Data Register Low */
#define CAN_MO93_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019BB0u)) /* lint --e(923)*/

/** 1BA0, Message Object  Function Control Register */
#define CAN_MO93_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019BA0u)) /* lint --e(923)*/

/** 1BA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO93_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019BA4u)) /* lint --e(923)*/

/** 1BA8, Message Object  Interrupt Pointer Register */
#define CAN_MO93_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019BA8u)) /* lint --e(923)*/

/** 1BCC, Message Object  Acceptance Mask Register */
#define CAN_MO94_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019BCCu)) /* lint --e(923)*/

/** 1BD8, Message Object  Arbitration Register */
#define CAN_MO94_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019BD8u)) /* lint --e(923)*/

/** 1BDC, Message Object  Control Register */
#define CAN_MO94_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019BDCu)) /* lint --e(923)*/

/** 1BD4, Message Object  Data Register High */
#define CAN_MO94_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019BD4u)) /* lint --e(923)*/

/** 1BD0, Message Object  Data Register Low */
#define CAN_MO94_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019BD0u)) /* lint --e(923)*/

/** 1BC0, Message Object  Function Control Register */
#define CAN_MO94_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019BC0u)) /* lint --e(923)*/

/** 1BC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO94_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019BC4u)) /* lint --e(923)*/

/** 1BC8, Message Object  Interrupt Pointer Register */
#define CAN_MO94_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019BC8u)) /* lint --e(923)*/

/** 1BEC, Message Object  Acceptance Mask Register */
#define CAN_MO95_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019BECu)) /* lint --e(923)*/

/** 1BF8, Message Object  Arbitration Register */
#define CAN_MO95_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019BF8u)) /* lint --e(923)*/

/** 1BFC, Message Object  Control Register */
#define CAN_MO95_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019BFCu)) /* lint --e(923)*/

/** 1BF4, Message Object  Data Register High */
#define CAN_MO95_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019BF4u)) /* lint --e(923)*/

/** 1BF0, Message Object  Data Register Low */
#define CAN_MO95_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019BF0u)) /* lint --e(923)*/

/** 1BE0, Message Object  Function Control Register */
#define CAN_MO95_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019BE0u)) /* lint --e(923)*/

/** 1BE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO95_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019BE4u)) /* lint --e(923)*/

/** 1BE8, Message Object  Interrupt Pointer Register */
#define CAN_MO95_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019BE8u)) /* lint --e(923)*/

/** 1C0C, Message Object  Acceptance Mask Register */
#define CAN_MO96_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019C0Cu)) /* lint --e(923)*/

/** 1C18, Message Object  Arbitration Register */
#define CAN_MO96_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019C18u)) /* lint --e(923)*/

/** 1C1C, Message Object  Control Register */
#define CAN_MO96_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019C1Cu)) /* lint --e(923)*/

/** 1C14, Message Object  Data Register High */
#define CAN_MO96_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019C14u)) /* lint --e(923)*/

/** 1C10, Message Object  Data Register Low */
#define CAN_MO96_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019C10u)) /* lint --e(923)*/

/** 1C00, Message Object  Function Control Register */
#define CAN_MO96_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019C00u)) /* lint --e(923)*/

/** 1C04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO96_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019C04u)) /* lint --e(923)*/

/** 1C08, Message Object  Interrupt Pointer Register */
#define CAN_MO96_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019C08u)) /* lint --e(923)*/

/** 1C2C, Message Object  Acceptance Mask Register */
#define CAN_MO97_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019C2Cu)) /* lint --e(923)*/

/** 1C38, Message Object  Arbitration Register */
#define CAN_MO97_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019C38u)) /* lint --e(923)*/

/** 1C3C, Message Object  Control Register */
#define CAN_MO97_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019C3Cu)) /* lint --e(923)*/

/** 1C34, Message Object  Data Register High */
#define CAN_MO97_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019C34u)) /* lint --e(923)*/

/** 1C30, Message Object  Data Register Low */
#define CAN_MO97_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019C30u)) /* lint --e(923)*/

/** 1C20, Message Object  Function Control Register */
#define CAN_MO97_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019C20u)) /* lint --e(923)*/

/** 1C24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO97_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019C24u)) /* lint --e(923)*/

/** 1C28, Message Object  Interrupt Pointer Register */
#define CAN_MO97_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019C28u)) /* lint --e(923)*/

/** 1C4C, Message Object  Acceptance Mask Register */
#define CAN_MO98_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019C4Cu)) /* lint --e(923)*/

/** 1C58, Message Object  Arbitration Register */
#define CAN_MO98_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019C58u)) /* lint --e(923)*/

/** 1C5C, Message Object  Control Register */
#define CAN_MO98_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019C5Cu)) /* lint --e(923)*/

/** 1C54, Message Object  Data Register High */
#define CAN_MO98_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019C54u)) /* lint --e(923)*/

/** 1C50, Message Object  Data Register Low */
#define CAN_MO98_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019C50u)) /* lint --e(923)*/

/** 1C40, Message Object  Function Control Register */
#define CAN_MO98_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019C40u)) /* lint --e(923)*/

/** 1C44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO98_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019C44u)) /* lint --e(923)*/

/** 1C48, Message Object  Interrupt Pointer Register */
#define CAN_MO98_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019C48u)) /* lint --e(923)*/

/** 1C6C, Message Object  Acceptance Mask Register */
#define CAN_MO99_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF0019C6Cu)) /* lint --e(923)*/

/** 1C78, Message Object  Arbitration Register */
#define CAN_MO99_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019C78u)) /* lint --e(923)*/

/** 1C7C, Message Object  Control Register */
#define CAN_MO99_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF0019C7Cu)) /* lint --e(923)*/

/** 1C74, Message Object  Data Register High */
#define CAN_MO99_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019C74u)) /* lint --e(923)*/

/** 1C70, Message Object  Data Register Low */
#define CAN_MO99_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019C70u)) /* lint --e(923)*/

/** 1C60, Message Object  Function Control Register */
#define CAN_MO99_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019C60u)) /* lint --e(923)*/

/** 1C64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO99_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019C64u)) /* lint --e(923)*/

/** 1C68, Message Object  Interrupt Pointer Register */
#define CAN_MO99_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019C68u)) /* lint --e(923)*/

/** 112C, Message Object  Acceptance Mask Register */
#define CAN_MO9_AMR ((*(volatile Ifx_CAN_MO_AMR*)0xF001912Cu)) /* lint --e(923)*/

/** 1138, Message Object  Arbitration Register */
#define CAN_MO9_AR ((*(volatile Ifx_CAN_MO_AR*)0xF0019138u)) /* lint --e(923)*/

/** 113C, Message Object  Control Register */
#define CAN_MO9_CTR ((*(volatile Ifx_CAN_MO_CTR*)0xF001913Cu)) /* lint --e(923)*/

/** 1134, Message Object  Data Register High */
#define CAN_MO9_DATAH ((*(volatile Ifx_CAN_MO_DATAH*)0xF0019134u)) /* lint --e(923)*/

/** 1130, Message Object  Data Register Low */
#define CAN_MO9_DATAL ((*(volatile Ifx_CAN_MO_DATAL*)0xF0019130u)) /* lint --e(923)*/

/** 1120, Message Object  Function Control Register */
#define CAN_MO9_FCR ((*(volatile Ifx_CAN_MO_FCR*)0xF0019120u)) /* lint --e(923)*/

/** 1124, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO9_FGPR ((*(volatile Ifx_CAN_MO_FGPR*)0xF0019124u)) /* lint --e(923)*/

/** 1128, Message Object  Interrupt Pointer Register */
#define CAN_MO9_IPR ((*(volatile Ifx_CAN_MO_IPR*)0xF0019128u)) /* lint --e(923)*/

/** 180, Message Index Register */
#define CAN_MSID0 ((*(volatile Ifx_CAN_MSID*)0xF0018180u)) /* lint --e(923)*/

/** 184, Message Index Register */
#define CAN_MSID1 ((*(volatile Ifx_CAN_MSID*)0xF0018184u)) /* lint --e(923)*/

/** 188, Message Index Register */
#define CAN_MSID2 ((*(volatile Ifx_CAN_MSID*)0xF0018188u)) /* lint --e(923)*/

/** 18C, Message Index Register */
#define CAN_MSID3 ((*(volatile Ifx_CAN_MSID*)0xF001818Cu)) /* lint --e(923)*/

/** 190, Message Index Register */
#define CAN_MSID4 ((*(volatile Ifx_CAN_MSID*)0xF0018190u)) /* lint --e(923)*/

/** 194, Message Index Register */
#define CAN_MSID5 ((*(volatile Ifx_CAN_MSID*)0xF0018194u)) /* lint --e(923)*/

/** 198, Message Index Register */
#define CAN_MSID6 ((*(volatile Ifx_CAN_MSID*)0xF0018198u)) /* lint --e(923)*/

/** 19C, Message Index Register */
#define CAN_MSID7 ((*(volatile Ifx_CAN_MSID*)0xF001819Cu)) /* lint --e(923)*/

/** 1C0, Message Index Mask Register */
#define CAN_MSIMASK ((*(volatile Ifx_CAN_MSIMASK*)0xF00181C0u)) /* lint --e(923)*/

/** 140, Message Pending Register */
#define CAN_MSPND0 ((*(volatile Ifx_CAN_MSPND*)0xF0018140u)) /* lint --e(923)*/

/** 144, Message Pending Register */
#define CAN_MSPND1 ((*(volatile Ifx_CAN_MSPND*)0xF0018144u)) /* lint --e(923)*/

/** 148, Message Pending Register */
#define CAN_MSPND2 ((*(volatile Ifx_CAN_MSPND*)0xF0018148u)) /* lint --e(923)*/

/** 14C, Message Pending Register */
#define CAN_MSPND3 ((*(volatile Ifx_CAN_MSPND*)0xF001814Cu)) /* lint --e(923)*/

/** 150, Message Pending Register */
#define CAN_MSPND4 ((*(volatile Ifx_CAN_MSPND*)0xF0018150u)) /* lint --e(923)*/

/** 154, Message Pending Register */
#define CAN_MSPND5 ((*(volatile Ifx_CAN_MSPND*)0xF0018154u)) /* lint --e(923)*/

/** 158, Message Pending Register */
#define CAN_MSPND6 ((*(volatile Ifx_CAN_MSPND*)0xF0018158u)) /* lint --e(923)*/

/** 15C, Message Pending Register */
#define CAN_MSPND7 ((*(volatile Ifx_CAN_MSPND*)0xF001815Cu)) /* lint --e(923)*/

/** 210, Node Bit Timing Register */
#define CAN_N0_BTR ((*(volatile Ifx_CAN_N_BTR*)0xF0018210u)) /* lint --e(923)*/

/** 200, Node Control Register */
#define CAN_N0_CR ((*(volatile Ifx_CAN_N_CR*)0xF0018200u)) /* lint --e(923)*/

/** 214, Node Error Counter Register */
#define CAN_N0_ECNT ((*(volatile Ifx_CAN_N_ECNT*)0xF0018214u)) /* lint --e(923)*/

/** 218, Node Frame Counter Register */
#define CAN_N0_FCR ((*(volatile Ifx_CAN_N_FCR*)0xF0018218u)) /* lint --e(923)*/

/** 208, Node Interrupt Pointer Register */
#define CAN_N0_IPR ((*(volatile Ifx_CAN_N_IPR*)0xF0018208u)) /* lint --e(923)*/

/** 20C, Node Port Control Register */
#define CAN_N0_PCR ((*(volatile Ifx_CAN_N_PCR*)0xF001820Cu)) /* lint --e(923)*/

/** 204, Node Status Register */
#define CAN_N0_SR ((*(volatile Ifx_CAN_N_SR*)0xF0018204u)) /* lint --e(923)*/

/** 224, Node Timer A Transmit Trigger Register */
#define CAN_N0_TATTR ((*(volatile Ifx_CAN_N_TTTR*)0xF0018224u)) /* lint --e(923)*/

/** 228, Node Timer B Transmit Trigger Register */
#define CAN_N0_TBTTR ((*(volatile Ifx_CAN_N_TTTR*)0xF0018228u)) /* lint --e(923)*/

/** 21C, Node Timer Clock Control Register */
#define CAN_N0_TCCR ((*(volatile Ifx_CAN_N_TCCR*)0xF001821Cu)) /* lint --e(923)*/

/** 22C, Node Timer C Transmit Trigger Register */
#define CAN_N0_TCTTR ((*(volatile Ifx_CAN_N_TTTR*)0xF001822Cu)) /* lint --e(923)*/

/** 220, Node Timer Receive Timeout Register */
#define CAN_N0_TRTR ((*(volatile Ifx_CAN_N_TRTR*)0xF0018220u)) /* lint --e(923)*/

/** 310, Node Bit Timing Register */
#define CAN_N1_BTR ((*(volatile Ifx_CAN_N_BTR*)0xF0018310u)) /* lint --e(923)*/

/** 300, Node Control Register */
#define CAN_N1_CR ((*(volatile Ifx_CAN_N_CR*)0xF0018300u)) /* lint --e(923)*/

/** 314, Node Error Counter Register */
#define CAN_N1_ECNT ((*(volatile Ifx_CAN_N_ECNT*)0xF0018314u)) /* lint --e(923)*/

/** 318, Node Frame Counter Register */
#define CAN_N1_FCR ((*(volatile Ifx_CAN_N_FCR*)0xF0018318u)) /* lint --e(923)*/

/** 308, Node Interrupt Pointer Register */
#define CAN_N1_IPR ((*(volatile Ifx_CAN_N_IPR*)0xF0018308u)) /* lint --e(923)*/

/** 30C, Node Port Control Register */
#define CAN_N1_PCR ((*(volatile Ifx_CAN_N_PCR*)0xF001830Cu)) /* lint --e(923)*/

/** 304, Node Status Register */
#define CAN_N1_SR ((*(volatile Ifx_CAN_N_SR*)0xF0018304u)) /* lint --e(923)*/

/** 324, Node Timer A Transmit Trigger Register */
#define CAN_N1_TATTR ((*(volatile Ifx_CAN_N_TTTR*)0xF0018324u)) /* lint --e(923)*/

/** 328, Node Timer B Transmit Trigger Register */
#define CAN_N1_TBTTR ((*(volatile Ifx_CAN_N_TTTR*)0xF0018328u)) /* lint --e(923)*/

/** 31C, Node Timer Clock Control Register */
#define CAN_N1_TCCR ((*(volatile Ifx_CAN_N_TCCR*)0xF001831Cu)) /* lint --e(923)*/

/** 32C, Node Timer C Transmit Trigger Register */
#define CAN_N1_TCTTR ((*(volatile Ifx_CAN_N_TTTR*)0xF001832Cu)) /* lint --e(923)*/

/** 320, Node Timer Receive Timeout Register */
#define CAN_N1_TRTR ((*(volatile Ifx_CAN_N_TRTR*)0xF0018320u)) /* lint --e(923)*/

/** 410, Node Bit Timing Register */
#define CAN_N2_BTR ((*(volatile Ifx_CAN_N_BTR*)0xF0018410u)) /* lint --e(923)*/

/** 400, Node Control Register */
#define CAN_N2_CR ((*(volatile Ifx_CAN_N_CR*)0xF0018400u)) /* lint --e(923)*/

/** 414, Node Error Counter Register */
#define CAN_N2_ECNT ((*(volatile Ifx_CAN_N_ECNT*)0xF0018414u)) /* lint --e(923)*/

/** 418, Node Frame Counter Register */
#define CAN_N2_FCR ((*(volatile Ifx_CAN_N_FCR*)0xF0018418u)) /* lint --e(923)*/

/** 408, Node Interrupt Pointer Register */
#define CAN_N2_IPR ((*(volatile Ifx_CAN_N_IPR*)0xF0018408u)) /* lint --e(923)*/

/** 40C, Node Port Control Register */
#define CAN_N2_PCR ((*(volatile Ifx_CAN_N_PCR*)0xF001840Cu)) /* lint --e(923)*/

/** 404, Node Status Register */
#define CAN_N2_SR ((*(volatile Ifx_CAN_N_SR*)0xF0018404u)) /* lint --e(923)*/

/** 424, Node Timer A Transmit Trigger Register */
#define CAN_N2_TATTR ((*(volatile Ifx_CAN_N_TTTR*)0xF0018424u)) /* lint --e(923)*/

/** 428, Node Timer B Transmit Trigger Register */
#define CAN_N2_TBTTR ((*(volatile Ifx_CAN_N_TTTR*)0xF0018428u)) /* lint --e(923)*/

/** 41C, Node Timer Clock Control Register */
#define CAN_N2_TCCR ((*(volatile Ifx_CAN_N_TCCR*)0xF001841Cu)) /* lint --e(923)*/

/** 42C, Node Timer C Transmit Trigger Register */
#define CAN_N2_TCTTR ((*(volatile Ifx_CAN_N_TTTR*)0xF001842Cu)) /* lint --e(923)*/

/** 420, Node Timer Receive Timeout Register */
#define CAN_N2_TRTR ((*(volatile Ifx_CAN_N_TRTR*)0xF0018420u)) /* lint --e(923)*/

/** 510, Node Bit Timing Register */
#define CAN_N3_BTR ((*(volatile Ifx_CAN_N_BTR*)0xF0018510u)) /* lint --e(923)*/

/** 500, Node Control Register */
#define CAN_N3_CR ((*(volatile Ifx_CAN_N_CR*)0xF0018500u)) /* lint --e(923)*/

/** 514, Node Error Counter Register */
#define CAN_N3_ECNT ((*(volatile Ifx_CAN_N_ECNT*)0xF0018514u)) /* lint --e(923)*/

/** 518, Node Frame Counter Register */
#define CAN_N3_FCR ((*(volatile Ifx_CAN_N_FCR*)0xF0018518u)) /* lint --e(923)*/

/** 508, Node Interrupt Pointer Register */
#define CAN_N3_IPR ((*(volatile Ifx_CAN_N_IPR*)0xF0018508u)) /* lint --e(923)*/

/** 50C, Node Port Control Register */
#define CAN_N3_PCR ((*(volatile Ifx_CAN_N_PCR*)0xF001850Cu)) /* lint --e(923)*/

/** 504, Node Status Register */
#define CAN_N3_SR ((*(volatile Ifx_CAN_N_SR*)0xF0018504u)) /* lint --e(923)*/

/** 524, Node Timer A Transmit Trigger Register */
#define CAN_N3_TATTR ((*(volatile Ifx_CAN_N_TTTR*)0xF0018524u)) /* lint --e(923)*/

/** 528, Node Timer B Transmit Trigger Register */
#define CAN_N3_TBTTR ((*(volatile Ifx_CAN_N_TTTR*)0xF0018528u)) /* lint --e(923)*/

/** 51C, Node Timer Clock Control Register */
#define CAN_N3_TCCR ((*(volatile Ifx_CAN_N_TCCR*)0xF001851Cu)) /* lint --e(923)*/

/** 52C, Node Timer C Transmit Trigger Register */
#define CAN_N3_TCTTR ((*(volatile Ifx_CAN_N_TTTR*)0xF001852Cu)) /* lint --e(923)*/

/** 520, Node Timer Receive Timeout Register */
#define CAN_N3_TRTR ((*(volatile Ifx_CAN_N_TRTR*)0xF0018520u)) /* lint --e(923)*/

/** 610, Node Bit Timing Register */
#define CAN_N4_BTR ((*(volatile Ifx_CAN_N_BTR*)0xF0018610u)) /* lint --e(923)*/

/** 600, Node Control Register */
#define CAN_N4_CR ((*(volatile Ifx_CAN_N_CR*)0xF0018600u)) /* lint --e(923)*/

/** 614, Node Error Counter Register */
#define CAN_N4_ECNT ((*(volatile Ifx_CAN_N_ECNT*)0xF0018614u)) /* lint --e(923)*/

/** 618, Node Frame Counter Register */
#define CAN_N4_FCR ((*(volatile Ifx_CAN_N_FCR*)0xF0018618u)) /* lint --e(923)*/

/** 608, Node Interrupt Pointer Register */
#define CAN_N4_IPR ((*(volatile Ifx_CAN_N_IPR*)0xF0018608u)) /* lint --e(923)*/

/** 60C, Node Port Control Register */
#define CAN_N4_PCR ((*(volatile Ifx_CAN_N_PCR*)0xF001860Cu)) /* lint --e(923)*/

/** 604, Node Status Register */
#define CAN_N4_SR ((*(volatile Ifx_CAN_N_SR*)0xF0018604u)) /* lint --e(923)*/

/** 624, Node Timer A Transmit Trigger Register */
#define CAN_N4_TATTR ((*(volatile Ifx_CAN_N_TTTR*)0xF0018624u)) /* lint --e(923)*/

/** 628, Node Timer B Transmit Trigger Register */
#define CAN_N4_TBTTR ((*(volatile Ifx_CAN_N_TTTR*)0xF0018628u)) /* lint --e(923)*/

/** 61C, Node Timer Clock Control Register */
#define CAN_N4_TCCR ((*(volatile Ifx_CAN_N_TCCR*)0xF001861Cu)) /* lint --e(923)*/

/** 62C, Node Timer C Transmit Trigger Register */
#define CAN_N4_TCTTR ((*(volatile Ifx_CAN_N_TTTR*)0xF001862Cu)) /* lint --e(923)*/

/** 620, Node Timer Receive Timeout Register */
#define CAN_N4_TRTR ((*(volatile Ifx_CAN_N_TRTR*)0xF0018620u)) /* lint --e(923)*/

/** 710, Node Bit Timing Register */
#define CAN_N5_BTR ((*(volatile Ifx_CAN_N_BTR*)0xF0018710u)) /* lint --e(923)*/

/** 700, Node Control Register */
#define CAN_N5_CR ((*(volatile Ifx_CAN_N_CR*)0xF0018700u)) /* lint --e(923)*/

/** 714, Node Error Counter Register */
#define CAN_N5_ECNT ((*(volatile Ifx_CAN_N_ECNT*)0xF0018714u)) /* lint --e(923)*/

/** 718, Node Frame Counter Register */
#define CAN_N5_FCR ((*(volatile Ifx_CAN_N_FCR*)0xF0018718u)) /* lint --e(923)*/

/** 708, Node Interrupt Pointer Register */
#define CAN_N5_IPR ((*(volatile Ifx_CAN_N_IPR*)0xF0018708u)) /* lint --e(923)*/

/** 70C, Node Port Control Register */
#define CAN_N5_PCR ((*(volatile Ifx_CAN_N_PCR*)0xF001870Cu)) /* lint --e(923)*/

/** 704, Node Status Register */
#define CAN_N5_SR ((*(volatile Ifx_CAN_N_SR*)0xF0018704u)) /* lint --e(923)*/

/** 724, Node Timer A Transmit Trigger Register */
#define CAN_N5_TATTR ((*(volatile Ifx_CAN_N_TTTR*)0xF0018724u)) /* lint --e(923)*/

/** 728, Node Timer B Transmit Trigger Register */
#define CAN_N5_TBTTR ((*(volatile Ifx_CAN_N_TTTR*)0xF0018728u)) /* lint --e(923)*/

/** 71C, Node Timer Clock Control Register */
#define CAN_N5_TCCR ((*(volatile Ifx_CAN_N_TCCR*)0xF001871Cu)) /* lint --e(923)*/

/** 72C, Node Timer C Transmit Trigger Register */
#define CAN_N5_TCTTR ((*(volatile Ifx_CAN_N_TTTR*)0xF001872Cu)) /* lint --e(923)*/

/** 720, Node Timer Receive Timeout Register */
#define CAN_N5_TRTR ((*(volatile Ifx_CAN_N_TRTR*)0xF0018720u)) /* lint --e(923)*/

/** 810, Node Bit Timing Register */
#define CAN_N6_BTR ((*(volatile Ifx_CAN_N_BTR*)0xF0018810u)) /* lint --e(923)*/

/** 800, Node Control Register */
#define CAN_N6_CR ((*(volatile Ifx_CAN_N_CR*)0xF0018800u)) /* lint --e(923)*/

/** 814, Node Error Counter Register */
#define CAN_N6_ECNT ((*(volatile Ifx_CAN_N_ECNT*)0xF0018814u)) /* lint --e(923)*/

/** 818, Node Frame Counter Register */
#define CAN_N6_FCR ((*(volatile Ifx_CAN_N_FCR*)0xF0018818u)) /* lint --e(923)*/

/** 808, Node Interrupt Pointer Register */
#define CAN_N6_IPR ((*(volatile Ifx_CAN_N_IPR*)0xF0018808u)) /* lint --e(923)*/

/** 80C, Node Port Control Register */
#define CAN_N6_PCR ((*(volatile Ifx_CAN_N_PCR*)0xF001880Cu)) /* lint --e(923)*/

/** 804, Node Status Register */
#define CAN_N6_SR ((*(volatile Ifx_CAN_N_SR*)0xF0018804u)) /* lint --e(923)*/

/** 824, Node Timer A Transmit Trigger Register */
#define CAN_N6_TATTR ((*(volatile Ifx_CAN_N_TTTR*)0xF0018824u)) /* lint --e(923)*/

/** 828, Node Timer B Transmit Trigger Register */
#define CAN_N6_TBTTR ((*(volatile Ifx_CAN_N_TTTR*)0xF0018828u)) /* lint --e(923)*/

/** 81C, Node Timer Clock Control Register */
#define CAN_N6_TCCR ((*(volatile Ifx_CAN_N_TCCR*)0xF001881Cu)) /* lint --e(923)*/

/** 82C, Node Timer C Transmit Trigger Register */
#define CAN_N6_TCTTR ((*(volatile Ifx_CAN_N_TTTR*)0xF001882Cu)) /* lint --e(923)*/

/** 820, Node Timer Receive Timeout Register */
#define CAN_N6_TRTR ((*(volatile Ifx_CAN_N_TRTR*)0xF0018820u)) /* lint --e(923)*/

/** 910, Node Bit Timing Register */
#define CAN_N7_BTR ((*(volatile Ifx_CAN_N_BTR*)0xF0018910u)) /* lint --e(923)*/

/** 900, Node Control Register */
#define CAN_N7_CR ((*(volatile Ifx_CAN_N_CR*)0xF0018900u)) /* lint --e(923)*/

/** 914, Node Error Counter Register */
#define CAN_N7_ECNT ((*(volatile Ifx_CAN_N_ECNT*)0xF0018914u)) /* lint --e(923)*/

/** 918, Node Frame Counter Register */
#define CAN_N7_FCR ((*(volatile Ifx_CAN_N_FCR*)0xF0018918u)) /* lint --e(923)*/

/** 908, Node Interrupt Pointer Register */
#define CAN_N7_IPR ((*(volatile Ifx_CAN_N_IPR*)0xF0018908u)) /* lint --e(923)*/

/** 90C, Node Port Control Register */
#define CAN_N7_PCR ((*(volatile Ifx_CAN_N_PCR*)0xF001890Cu)) /* lint --e(923)*/

/** 904, Node Status Register */
#define CAN_N7_SR ((*(volatile Ifx_CAN_N_SR*)0xF0018904u)) /* lint --e(923)*/

/** 924, Node Timer A Transmit Trigger Register */
#define CAN_N7_TATTR ((*(volatile Ifx_CAN_N_TTTR*)0xF0018924u)) /* lint --e(923)*/

/** 928, Node Timer B Transmit Trigger Register */
#define CAN_N7_TBTTR ((*(volatile Ifx_CAN_N_TTTR*)0xF0018928u)) /* lint --e(923)*/

/** 91C, Node Timer Clock Control Register */
#define CAN_N7_TCCR ((*(volatile Ifx_CAN_N_TCCR*)0xF001891Cu)) /* lint --e(923)*/

/** 92C, Node Timer C Transmit Trigger Register */
#define CAN_N7_TCTTR ((*(volatile Ifx_CAN_N_TTTR*)0xF001892Cu)) /* lint --e(923)*/

/** 920, Node Timer Receive Timeout Register */
#define CAN_N7_TRTR ((*(volatile Ifx_CAN_N_TRTR*)0xF0018920u)) /* lint --e(923)*/

/** Alias for CAN_N0_BTR.
 *  Note that this definition is obsolete, use CAN_N0_BTR instead.
 * 210, Node Bit Timing Register
 */
#define CAN_NBTR0 (CAN_N0_BTR)

/** Alias for CAN_N1_BTR.
 *  Note that this definition is obsolete, use CAN_N1_BTR instead.
 * 310, Node Bit Timing Register
 */
#define CAN_NBTR1 (CAN_N1_BTR)

/** Alias for CAN_N2_BTR.
 *  Note that this definition is obsolete, use CAN_N2_BTR instead.
 * 410, Node Bit Timing Register
 */
#define CAN_NBTR2 (CAN_N2_BTR)

/** Alias for CAN_N3_BTR.
 *  Note that this definition is obsolete, use CAN_N3_BTR instead.
 * 510, Node Bit Timing Register
 */
#define CAN_NBTR3 (CAN_N3_BTR)

/** Alias for CAN_N4_BTR.
 *  Note that this definition is obsolete, use CAN_N4_BTR instead.
 * 610, Node Bit Timing Register
 */
#define CAN_NBTR4 (CAN_N4_BTR)

/** Alias for CAN_N5_BTR.
 *  Note that this definition is obsolete, use CAN_N5_BTR instead.
 * 710, Node Bit Timing Register
 */
#define CAN_NBTR5 (CAN_N5_BTR)

/** Alias for CAN_N6_BTR.
 *  Note that this definition is obsolete, use CAN_N6_BTR instead.
 * 810, Node Bit Timing Register
 */
#define CAN_NBTR6 (CAN_N6_BTR)

/** Alias for CAN_N7_BTR.
 *  Note that this definition is obsolete, use CAN_N7_BTR instead.
 * 910, Node Bit Timing Register
 */
#define CAN_NBTR7 (CAN_N7_BTR)

/** Alias for CAN_N0_CR.
 *  Note that this definition is obsolete, use CAN_N0_CR instead.
 * 200, Node Control Register
 */
#define CAN_NCR0 (CAN_N0_CR)

/** Alias for CAN_N1_CR.
 *  Note that this definition is obsolete, use CAN_N1_CR instead.
 * 300, Node Control Register
 */
#define CAN_NCR1 (CAN_N1_CR)

/** Alias for CAN_N2_CR.
 *  Note that this definition is obsolete, use CAN_N2_CR instead.
 * 400, Node Control Register
 */
#define CAN_NCR2 (CAN_N2_CR)

/** Alias for CAN_N3_CR.
 *  Note that this definition is obsolete, use CAN_N3_CR instead.
 * 500, Node Control Register
 */
#define CAN_NCR3 (CAN_N3_CR)

/** Alias for CAN_N4_CR.
 *  Note that this definition is obsolete, use CAN_N4_CR instead.
 * 600, Node Control Register
 */
#define CAN_NCR4 (CAN_N4_CR)

/** Alias for CAN_N5_CR.
 *  Note that this definition is obsolete, use CAN_N5_CR instead.
 * 700, Node Control Register
 */
#define CAN_NCR5 (CAN_N5_CR)

/** Alias for CAN_N6_CR.
 *  Note that this definition is obsolete, use CAN_N6_CR instead.
 * 800, Node Control Register
 */
#define CAN_NCR6 (CAN_N6_CR)

/** Alias for CAN_N7_CR.
 *  Note that this definition is obsolete, use CAN_N7_CR instead.
 * 900, Node Control Register
 */
#define CAN_NCR7 (CAN_N7_CR)

/** Alias for CAN_N0_ECNT.
 *  Note that this definition is obsolete, use CAN_N0_ECNT instead.
 * 214, Node Error Counter Register
 */
#define CAN_NECNT0 (CAN_N0_ECNT)

/** Alias for CAN_N1_ECNT.
 *  Note that this definition is obsolete, use CAN_N1_ECNT instead.
 * 314, Node Error Counter Register
 */
#define CAN_NECNT1 (CAN_N1_ECNT)

/** Alias for CAN_N2_ECNT.
 *  Note that this definition is obsolete, use CAN_N2_ECNT instead.
 * 414, Node Error Counter Register
 */
#define CAN_NECNT2 (CAN_N2_ECNT)

/** Alias for CAN_N3_ECNT.
 *  Note that this definition is obsolete, use CAN_N3_ECNT instead.
 * 514, Node Error Counter Register
 */
#define CAN_NECNT3 (CAN_N3_ECNT)

/** Alias for CAN_N4_ECNT.
 *  Note that this definition is obsolete, use CAN_N4_ECNT instead.
 * 614, Node Error Counter Register
 */
#define CAN_NECNT4 (CAN_N4_ECNT)

/** Alias for CAN_N5_ECNT.
 *  Note that this definition is obsolete, use CAN_N5_ECNT instead.
 * 714, Node Error Counter Register
 */
#define CAN_NECNT5 (CAN_N5_ECNT)

/** Alias for CAN_N6_ECNT.
 *  Note that this definition is obsolete, use CAN_N6_ECNT instead.
 * 814, Node Error Counter Register
 */
#define CAN_NECNT6 (CAN_N6_ECNT)

/** Alias for CAN_N7_ECNT.
 *  Note that this definition is obsolete, use CAN_N7_ECNT instead.
 * 914, Node Error Counter Register
 */
#define CAN_NECNT7 (CAN_N7_ECNT)

/** Alias for CAN_N0_FCR.
 *  Note that this definition is obsolete, use CAN_N0_FCR instead.
 * 218, Node Frame Counter Register
 */
#define CAN_NFCR0 (CAN_N0_FCR)

/** Alias for CAN_N1_FCR.
 *  Note that this definition is obsolete, use CAN_N1_FCR instead.
 * 318, Node Frame Counter Register
 */
#define CAN_NFCR1 (CAN_N1_FCR)

/** Alias for CAN_N2_FCR.
 *  Note that this definition is obsolete, use CAN_N2_FCR instead.
 * 418, Node Frame Counter Register
 */
#define CAN_NFCR2 (CAN_N2_FCR)

/** Alias for CAN_N3_FCR.
 *  Note that this definition is obsolete, use CAN_N3_FCR instead.
 * 518, Node Frame Counter Register
 */
#define CAN_NFCR3 (CAN_N3_FCR)

/** Alias for CAN_N4_FCR.
 *  Note that this definition is obsolete, use CAN_N4_FCR instead.
 * 618, Node Frame Counter Register
 */
#define CAN_NFCR4 (CAN_N4_FCR)

/** Alias for CAN_N5_FCR.
 *  Note that this definition is obsolete, use CAN_N5_FCR instead.
 * 718, Node Frame Counter Register
 */
#define CAN_NFCR5 (CAN_N5_FCR)

/** Alias for CAN_N6_FCR.
 *  Note that this definition is obsolete, use CAN_N6_FCR instead.
 * 818, Node Frame Counter Register
 */
#define CAN_NFCR6 (CAN_N6_FCR)

/** Alias for CAN_N7_FCR.
 *  Note that this definition is obsolete, use CAN_N7_FCR instead.
 * 918, Node Frame Counter Register
 */
#define CAN_NFCR7 (CAN_N7_FCR)

/** Alias for CAN_N0_IPR.
 *  Note that this definition is obsolete, use CAN_N0_IPR instead.
 * 208, Node Interrupt Pointer Register
 */
#define CAN_NIPR0 (CAN_N0_IPR)

/** Alias for CAN_N1_IPR.
 *  Note that this definition is obsolete, use CAN_N1_IPR instead.
 * 308, Node Interrupt Pointer Register
 */
#define CAN_NIPR1 (CAN_N1_IPR)

/** Alias for CAN_N2_IPR.
 *  Note that this definition is obsolete, use CAN_N2_IPR instead.
 * 408, Node Interrupt Pointer Register
 */
#define CAN_NIPR2 (CAN_N2_IPR)

/** Alias for CAN_N3_IPR.
 *  Note that this definition is obsolete, use CAN_N3_IPR instead.
 * 508, Node Interrupt Pointer Register
 */
#define CAN_NIPR3 (CAN_N3_IPR)

/** Alias for CAN_N4_IPR.
 *  Note that this definition is obsolete, use CAN_N4_IPR instead.
 * 608, Node Interrupt Pointer Register
 */
#define CAN_NIPR4 (CAN_N4_IPR)

/** Alias for CAN_N5_IPR.
 *  Note that this definition is obsolete, use CAN_N5_IPR instead.
 * 708, Node Interrupt Pointer Register
 */
#define CAN_NIPR5 (CAN_N5_IPR)

/** Alias for CAN_N6_IPR.
 *  Note that this definition is obsolete, use CAN_N6_IPR instead.
 * 808, Node Interrupt Pointer Register
 */
#define CAN_NIPR6 (CAN_N6_IPR)

/** Alias for CAN_N7_IPR.
 *  Note that this definition is obsolete, use CAN_N7_IPR instead.
 * 908, Node Interrupt Pointer Register
 */
#define CAN_NIPR7 (CAN_N7_IPR)

/** Alias for CAN_N0_PCR.
 *  Note that this definition is obsolete, use CAN_N0_PCR instead.
 * 20C, Node Port Control Register
 */
#define CAN_NPCR0 (CAN_N0_PCR)

/** Alias for CAN_N1_PCR.
 *  Note that this definition is obsolete, use CAN_N1_PCR instead.
 * 30C, Node Port Control Register
 */
#define CAN_NPCR1 (CAN_N1_PCR)

/** Alias for CAN_N2_PCR.
 *  Note that this definition is obsolete, use CAN_N2_PCR instead.
 * 40C, Node Port Control Register
 */
#define CAN_NPCR2 (CAN_N2_PCR)

/** Alias for CAN_N3_PCR.
 *  Note that this definition is obsolete, use CAN_N3_PCR instead.
 * 50C, Node Port Control Register
 */
#define CAN_NPCR3 (CAN_N3_PCR)

/** Alias for CAN_N4_PCR.
 *  Note that this definition is obsolete, use CAN_N4_PCR instead.
 * 60C, Node Port Control Register
 */
#define CAN_NPCR4 (CAN_N4_PCR)

/** Alias for CAN_N5_PCR.
 *  Note that this definition is obsolete, use CAN_N5_PCR instead.
 * 70C, Node Port Control Register
 */
#define CAN_NPCR5 (CAN_N5_PCR)

/** Alias for CAN_N6_PCR.
 *  Note that this definition is obsolete, use CAN_N6_PCR instead.
 * 80C, Node Port Control Register
 */
#define CAN_NPCR6 (CAN_N6_PCR)

/** Alias for CAN_N7_PCR.
 *  Note that this definition is obsolete, use CAN_N7_PCR instead.
 * 90C, Node Port Control Register
 */
#define CAN_NPCR7 (CAN_N7_PCR)

/** Alias for CAN_N0_SR.
 *  Note that this definition is obsolete, use CAN_N0_SR instead.
 * 204, Node Status Register
 */
#define CAN_NSR0 (CAN_N0_SR)

/** Alias for CAN_N1_SR.
 *  Note that this definition is obsolete, use CAN_N1_SR instead.
 * 304, Node Status Register
 */
#define CAN_NSR1 (CAN_N1_SR)

/** Alias for CAN_N2_SR.
 *  Note that this definition is obsolete, use CAN_N2_SR instead.
 * 404, Node Status Register
 */
#define CAN_NSR2 (CAN_N2_SR)

/** Alias for CAN_N3_SR.
 *  Note that this definition is obsolete, use CAN_N3_SR instead.
 * 504, Node Status Register
 */
#define CAN_NSR3 (CAN_N3_SR)

/** Alias for CAN_N4_SR.
 *  Note that this definition is obsolete, use CAN_N4_SR instead.
 * 604, Node Status Register
 */
#define CAN_NSR4 (CAN_N4_SR)

/** Alias for CAN_N5_SR.
 *  Note that this definition is obsolete, use CAN_N5_SR instead.
 * 704, Node Status Register
 */
#define CAN_NSR5 (CAN_N5_SR)

/** Alias for CAN_N6_SR.
 *  Note that this definition is obsolete, use CAN_N6_SR instead.
 * 804, Node Status Register
 */
#define CAN_NSR6 (CAN_N6_SR)

/** Alias for CAN_N7_SR.
 *  Note that this definition is obsolete, use CAN_N7_SR instead.
 * 904, Node Status Register
 */
#define CAN_NSR7 (CAN_N7_SR)

/** Alias for CAN_N0_TATTR.
 *  Note that this definition is obsolete, use CAN_N0_TATTR instead.
 * 224, Node Timer A Transmit Trigger Register
 */
#define CAN_NTATTR0 (CAN_N0_TATTR)

/** Alias for CAN_N1_TATTR.
 *  Note that this definition is obsolete, use CAN_N1_TATTR instead.
 * 324, Node Timer A Transmit Trigger Register
 */
#define CAN_NTATTR1 (CAN_N1_TATTR)

/** Alias for CAN_N2_TATTR.
 *  Note that this definition is obsolete, use CAN_N2_TATTR instead.
 * 424, Node Timer A Transmit Trigger Register
 */
#define CAN_NTATTR2 (CAN_N2_TATTR)

/** Alias for CAN_N3_TATTR.
 *  Note that this definition is obsolete, use CAN_N3_TATTR instead.
 * 524, Node Timer A Transmit Trigger Register
 */
#define CAN_NTATTR3 (CAN_N3_TATTR)

/** Alias for CAN_N4_TATTR.
 *  Note that this definition is obsolete, use CAN_N4_TATTR instead.
 * 624, Node Timer A Transmit Trigger Register
 */
#define CAN_NTATTR4 (CAN_N4_TATTR)

/** Alias for CAN_N5_TATTR.
 *  Note that this definition is obsolete, use CAN_N5_TATTR instead.
 * 724, Node Timer A Transmit Trigger Register
 */
#define CAN_NTATTR5 (CAN_N5_TATTR)

/** Alias for CAN_N6_TATTR.
 *  Note that this definition is obsolete, use CAN_N6_TATTR instead.
 * 824, Node Timer A Transmit Trigger Register
 */
#define CAN_NTATTR6 (CAN_N6_TATTR)

/** Alias for CAN_N7_TATTR.
 *  Note that this definition is obsolete, use CAN_N7_TATTR instead.
 * 924, Node Timer A Transmit Trigger Register
 */
#define CAN_NTATTR7 (CAN_N7_TATTR)

/** Alias for CAN_N0_TBTTR.
 *  Note that this definition is obsolete, use CAN_N0_TBTTR instead.
 * 228, Node Timer B Transmit Trigger Register
 */
#define CAN_NTBTTR0 (CAN_N0_TBTTR)

/** Alias for CAN_N1_TBTTR.
 *  Note that this definition is obsolete, use CAN_N1_TBTTR instead.
 * 328, Node Timer B Transmit Trigger Register
 */
#define CAN_NTBTTR1 (CAN_N1_TBTTR)

/** Alias for CAN_N2_TBTTR.
 *  Note that this definition is obsolete, use CAN_N2_TBTTR instead.
 * 428, Node Timer B Transmit Trigger Register
 */
#define CAN_NTBTTR2 (CAN_N2_TBTTR)

/** Alias for CAN_N3_TBTTR.
 *  Note that this definition is obsolete, use CAN_N3_TBTTR instead.
 * 528, Node Timer B Transmit Trigger Register
 */
#define CAN_NTBTTR3 (CAN_N3_TBTTR)

/** Alias for CAN_N4_TBTTR.
 *  Note that this definition is obsolete, use CAN_N4_TBTTR instead.
 * 628, Node Timer B Transmit Trigger Register
 */
#define CAN_NTBTTR4 (CAN_N4_TBTTR)

/** Alias for CAN_N5_TBTTR.
 *  Note that this definition is obsolete, use CAN_N5_TBTTR instead.
 * 728, Node Timer B Transmit Trigger Register
 */
#define CAN_NTBTTR5 (CAN_N5_TBTTR)

/** Alias for CAN_N6_TBTTR.
 *  Note that this definition is obsolete, use CAN_N6_TBTTR instead.
 * 828, Node Timer B Transmit Trigger Register
 */
#define CAN_NTBTTR6 (CAN_N6_TBTTR)

/** Alias for CAN_N7_TBTTR.
 *  Note that this definition is obsolete, use CAN_N7_TBTTR instead.
 * 928, Node Timer B Transmit Trigger Register
 */
#define CAN_NTBTTR7 (CAN_N7_TBTTR)

/** Alias for CAN_N0_TCCR.
 *  Note that this definition is obsolete, use CAN_N0_TCCR instead.
 * 21C, Node Timer Clock Control Register
 */
#define CAN_NTCCR0 (CAN_N0_TCCR)

/** Alias for CAN_N1_TCCR.
 *  Note that this definition is obsolete, use CAN_N1_TCCR instead.
 * 31C, Node Timer Clock Control Register
 */
#define CAN_NTCCR1 (CAN_N1_TCCR)

/** Alias for CAN_N2_TCCR.
 *  Note that this definition is obsolete, use CAN_N2_TCCR instead.
 * 41C, Node Timer Clock Control Register
 */
#define CAN_NTCCR2 (CAN_N2_TCCR)

/** Alias for CAN_N3_TCCR.
 *  Note that this definition is obsolete, use CAN_N3_TCCR instead.
 * 51C, Node Timer Clock Control Register
 */
#define CAN_NTCCR3 (CAN_N3_TCCR)

/** Alias for CAN_N4_TCCR.
 *  Note that this definition is obsolete, use CAN_N4_TCCR instead.
 * 61C, Node Timer Clock Control Register
 */
#define CAN_NTCCR4 (CAN_N4_TCCR)

/** Alias for CAN_N5_TCCR.
 *  Note that this definition is obsolete, use CAN_N5_TCCR instead.
 * 71C, Node Timer Clock Control Register
 */
#define CAN_NTCCR5 (CAN_N5_TCCR)

/** Alias for CAN_N6_TCCR.
 *  Note that this definition is obsolete, use CAN_N6_TCCR instead.
 * 81C, Node Timer Clock Control Register
 */
#define CAN_NTCCR6 (CAN_N6_TCCR)

/** Alias for CAN_N7_TCCR.
 *  Note that this definition is obsolete, use CAN_N7_TCCR instead.
 * 91C, Node Timer Clock Control Register
 */
#define CAN_NTCCR7 (CAN_N7_TCCR)

/** Alias for CAN_N0_TCTTR.
 *  Note that this definition is obsolete, use CAN_N0_TCTTR instead.
 * 22C, Node Timer C Transmit Trigger Register
 */
#define CAN_NTCTTR0 (CAN_N0_TCTTR)

/** Alias for CAN_N1_TCTTR.
 *  Note that this definition is obsolete, use CAN_N1_TCTTR instead.
 * 32C, Node Timer C Transmit Trigger Register
 */
#define CAN_NTCTTR1 (CAN_N1_TCTTR)

/** Alias for CAN_N2_TCTTR.
 *  Note that this definition is obsolete, use CAN_N2_TCTTR instead.
 * 42C, Node Timer C Transmit Trigger Register
 */
#define CAN_NTCTTR2 (CAN_N2_TCTTR)

/** Alias for CAN_N3_TCTTR.
 *  Note that this definition is obsolete, use CAN_N3_TCTTR instead.
 * 52C, Node Timer C Transmit Trigger Register
 */
#define CAN_NTCTTR3 (CAN_N3_TCTTR)

/** Alias for CAN_N4_TCTTR.
 *  Note that this definition is obsolete, use CAN_N4_TCTTR instead.
 * 62C, Node Timer C Transmit Trigger Register
 */
#define CAN_NTCTTR4 (CAN_N4_TCTTR)

/** Alias for CAN_N5_TCTTR.
 *  Note that this definition is obsolete, use CAN_N5_TCTTR instead.
 * 72C, Node Timer C Transmit Trigger Register
 */
#define CAN_NTCTTR5 (CAN_N5_TCTTR)

/** Alias for CAN_N6_TCTTR.
 *  Note that this definition is obsolete, use CAN_N6_TCTTR instead.
 * 82C, Node Timer C Transmit Trigger Register
 */
#define CAN_NTCTTR6 (CAN_N6_TCTTR)

/** Alias for CAN_N7_TCTTR.
 *  Note that this definition is obsolete, use CAN_N7_TCTTR instead.
 * 92C, Node Timer C Transmit Trigger Register
 */
#define CAN_NTCTTR7 (CAN_N7_TCTTR)

/** Alias for CAN_N0_TRTR.
 *  Note that this definition is obsolete, use CAN_N0_TRTR instead.
 * 220, Node Timer Receive Timeout Register
 */
#define CAN_NTRTR0 (CAN_N0_TRTR)

/** Alias for CAN_N1_TRTR.
 *  Note that this definition is obsolete, use CAN_N1_TRTR instead.
 * 320, Node Timer Receive Timeout Register
 */
#define CAN_NTRTR1 (CAN_N1_TRTR)

/** Alias for CAN_N2_TRTR.
 *  Note that this definition is obsolete, use CAN_N2_TRTR instead.
 * 420, Node Timer Receive Timeout Register
 */
#define CAN_NTRTR2 (CAN_N2_TRTR)

/** Alias for CAN_N3_TRTR.
 *  Note that this definition is obsolete, use CAN_N3_TRTR instead.
 * 520, Node Timer Receive Timeout Register
 */
#define CAN_NTRTR3 (CAN_N3_TRTR)

/** Alias for CAN_N4_TRTR.
 *  Note that this definition is obsolete, use CAN_N4_TRTR instead.
 * 620, Node Timer Receive Timeout Register
 */
#define CAN_NTRTR4 (CAN_N4_TRTR)

/** Alias for CAN_N5_TRTR.
 *  Note that this definition is obsolete, use CAN_N5_TRTR instead.
 * 720, Node Timer Receive Timeout Register
 */
#define CAN_NTRTR5 (CAN_N5_TRTR)

/** Alias for CAN_N6_TRTR.
 *  Note that this definition is obsolete, use CAN_N6_TRTR instead.
 * 820, Node Timer Receive Timeout Register
 */
#define CAN_NTRTR6 (CAN_N6_TRTR)

/** Alias for CAN_N7_TRTR.
 *  Note that this definition is obsolete, use CAN_N7_TRTR instead.
 * 920, Node Timer Receive Timeout Register
 */
#define CAN_NTRTR7 (CAN_N7_TRTR)

/** E8, OCDS Control and Status */
#define CAN_OCS ((*(volatile Ifx_CAN_OCS*)0xF00180E8u)) /* lint --e(923)*/

/** 1C4, Panel Control Register */
#define CAN_PANCTR ((*(volatile Ifx_CAN_PANCTR*)0xF00181C4u)) /* lint --e(923)*/

/** 288, Reference Mark Register */
#define CAN_REFMR ((*(volatile Ifx_CAN_REFMR*)0xF0018288u)) /* lint --e(923)*/

/** 2F8, Scheduler Instruction Status Register */
#define CAN_SISR ((*(volatile Ifx_CAN_SISR*)0xF00182F8u)) /* lint --e(923)*/

/** 3FFC, Scheduler Start Pointer Node 0 Register */
#define CAN_STPTR0 ((*(volatile Ifx_CAN_STPTR0*)0xF001BFFCu)) /* lint --e(923)*/

/** 2F4, Scheduler Timing Status Register High */
#define CAN_STSRH ((*(volatile Ifx_CAN_STSRH*)0xF00182F4u)) /* lint --e(923)*/

/** 2F0, Scheduler Timing Status Register Low */
#define CAN_STSRL ((*(volatile Ifx_CAN_STSRL*)0xF00182F0u)) /* lint --e(923)*/

/** 284, Synchronization Mark Register */
#define CAN_SYNMR ((*(volatile Ifx_CAN_SYNMR*)0xF0018284u)) /* lint --e(923)*/

/** 2C4, Time Trigger Configuration Register */
#define CAN_TTCFGR ((*(volatile Ifx_CAN_TTCFGR*)0xF00182C4u)) /* lint --e(923)*/

/** 2C0, Time Trigger Control Register */
#define CAN_TTCR ((*(volatile Ifx_CAN_TTCR*)0xF00182C0u)) /* lint --e(923)*/

/** 2CC, Time Trigger Flag Modification Register */
#define CAN_TTFMR ((*(volatile Ifx_CAN_TTFMR*)0xF00182CCu)) /* lint --e(923)*/

/** 2D4, Time Trigger Interrupt Enable Register */
#define CAN_TTIER ((*(volatile Ifx_CAN_TTIER*)0xF00182D4u)) /* lint --e(923)*/

/** 2D8, Time Trigger Interrupt Node Pointer Register */
#define CAN_TTINPR ((*(volatile Ifx_CAN_TTINPR*)0xF00182D8u)) /* lint --e(923)*/

/** 2D0, Time Trigger Interrupt Request Register */
#define CAN_TTIRR ((*(volatile Ifx_CAN_TTIRR*)0xF00182D0u)) /* lint --e(923)*/

/** 2C8, Time Trigger Status Register */
#define CAN_TTSR ((*(volatile Ifx_CAN_TTSR*)0xF00182C8u)) /* lint --e(923)*/

/** 290, Time Unit Ratio Register */
#define CAN_TURR ((*(volatile Ifx_CAN_TURR*)0xF0018290u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXCAN_REG_H */

