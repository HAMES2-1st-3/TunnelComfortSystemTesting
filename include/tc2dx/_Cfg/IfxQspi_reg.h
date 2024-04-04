/**
 * \file IfxQspi_reg.h
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
#ifndef IFXQSPI_REG_H
#define IFXQSPI_REG_H
/******************************************************************************/
#include "Qspi/IfxQspi_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** QSPI object */
#define MODULE_QSPI0 ((*(Ifx_QSPI*)0xF0001C00u)) /* lint --e(923)*/

/** QSPI object */
#define MODULE_QSPI1 ((*(Ifx_QSPI*)0xF0001D00u)) /* lint --e(923)*/

/** QSPI object */
#define MODULE_QSPI2 ((*(Ifx_QSPI*)0xF0001E00u)) /* lint --e(923)*/

/** QSPI object */
#define MODULE_QSPI3 ((*(Ifx_QSPI*)0xF0001F00u)) /* lint --e(923)*/

/** QSPI object */
#define MODULE_QSPI4 ((*(Ifx_QSPI*)0xF0002000u)) /* lint --e(923)*/

/** QSPI object */
#define MODULE_QSPI5 ((*(Ifx_QSPI*)0xF0002100u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-QSPI0)                              */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define QSPI0_ACCEN0 ((*(volatile Ifx_QSPI_ACCEN0*)0xF0001CFCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define QSPI0_ACCEN1 ((*(volatile Ifx_QSPI_ACCEN1*)0xF0001CF8u)) /* lint --e(923)*/

/** 18, Basic Configuration Register */
#define QSPI0_BACON ((*(volatile Ifx_QSPI_BACON*)0xF0001C18u)) /* lint --e(923)*/

/** 60, BACON_ENTRY Register */
#define QSPI0_BACONENTRY ((*(volatile Ifx_QSPI_BACONENTRY*)0xF0001C60u)) /* lint --e(923)*/

/** 1C, Basic Configuration Register 1 */
#define QSPI0_BACONPWM ((*(volatile Ifx_QSPI_BACONPWM*)0xF0001C1Cu)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define QSPI0_CLC ((*(volatile Ifx_CLC2*)0xF0001C00u)) /* lint --e(923)*/

/** 64, DATA_ENTRY Register */
#define QSPI0_DATAENTRY0 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001C64u)) /* lint --e(923)*/

/** 68, DATA_ENTRY Register */
#define QSPI0_DATAENTRY1 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001C68u)) /* lint --e(923)*/

/** 6C, DATA_ENTRY Register */
#define QSPI0_DATAENTRY2 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001C6Cu)) /* lint --e(923)*/

/** 70, DATA_ENTRY Register */
#define QSPI0_DATAENTRY3 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001C70u)) /* lint --e(923)*/

/** 74, DATA_ENTRY Register */
#define QSPI0_DATAENTRY4 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001C74u)) /* lint --e(923)*/

/** 78, DATA_ENTRY Register */
#define QSPI0_DATAENTRY5 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001C78u)) /* lint --e(923)*/

/** 7C, DATA_ENTRY Register */
#define QSPI0_DATAENTRY6 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001C7Cu)) /* lint --e(923)*/

/** 80, DATA_ENTRY Register */
#define QSPI0_DATAENTRY7 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001C80u)) /* lint --e(923)*/

/** 20, Configuration Extension */
#define QSPI0_ECON0 ((*(volatile Ifx_QSPI_ECON*)0xF0001C20u)) /* lint --e(923)*/

/** 24, Configuration Extension */
#define QSPI0_ECON1 ((*(volatile Ifx_QSPI_ECON*)0xF0001C24u)) /* lint --e(923)*/

/** 28, Configuration Extension */
#define QSPI0_ECON2 ((*(volatile Ifx_QSPI_ECON*)0xF0001C28u)) /* lint --e(923)*/

/** 2C, Configuration Extension */
#define QSPI0_ECON3 ((*(volatile Ifx_QSPI_ECON*)0xF0001C2Cu)) /* lint --e(923)*/

/** 30, Configuration Extension */
#define QSPI0_ECON4 ((*(volatile Ifx_QSPI_ECON*)0xF0001C30u)) /* lint --e(923)*/

/** 34, Configuration Extension */
#define QSPI0_ECON5 ((*(volatile Ifx_QSPI_ECON*)0xF0001C34u)) /* lint --e(923)*/

/** 38, Configuration Extension */
#define QSPI0_ECON6 ((*(volatile Ifx_QSPI_ECON*)0xF0001C38u)) /* lint --e(923)*/

/** 3C, Configuration Extension */
#define QSPI0_ECON7 ((*(volatile Ifx_QSPI_ECON*)0xF0001C3Cu)) /* lint --e(923)*/

/** 54, Flags Clear Register */
#define QSPI0_FLAGSCLEAR ((*(volatile Ifx_QSPI_FLAGSCLEAR*)0xF0001C54u)) /* lint --e(923)*/

/** 10, Global Configuration Register */
#define QSPI0_GLOBALCON ((*(volatile Ifx_QSPI_GLOBALCON*)0xF0001C10u)) /* lint --e(923)*/

/** 14, Global Configuration Register 1 */
#define QSPI0_GLOBALCON1 ((*(volatile Ifx_QSPI_GLOBALCON1*)0xF0001C14u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define QSPI0_ID ((*(volatile Ifx_ID1*)0xF0001C08u)) /* lint --e(923)*/

/** 50, Inject Register */
#define QSPI0_INJECT ((*(volatile Ifx_QSPI_INJECT*)0xF0001C50u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define QSPI0_KRST0 ((*(volatile Ifx_QSPI_KRST0*)0xF0001CF4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define QSPI0_KRST1 ((*(volatile Ifx_QSPI_KRST1*)0xF0001CF0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define QSPI0_KRSTCLR ((*(volatile Ifx_QSPI_KRSTCLR*)0xF0001CECu)) /* lint --e(923)*/

/** 4C, Mask Register */
#define QSPI0_MASK ((*(volatile Ifx_QSPI_MASK*)0xF0001C4Cu)) /* lint --e(923)*/

/** 5C, MIX_ENTRY Register */
#define QSPI0_MIXENTRY ((*(volatile Ifx_QSPI_MIXENTRY*)0xF0001C5Cu)) /* lint --e(923)*/

/** E8, OCDS Control and Status */
#define QSPI0_OCS ((*(volatile Ifx_QSPI_OCS*)0xF0001CE8u)) /* lint --e(923)*/

/** 4, Port Input Select Register */
#define QSPI0_PISEL ((*(volatile Ifx_QSPI_PISEL*)0xF0001C04u)) /* lint --e(923)*/

/** 90, RX_EXIT Register */
#define QSPI0_RXEXIT ((*(volatile Ifx_QSPI_RXEXIT*)0xF0001C90u)) /* lint --e(923)*/

/** 48, Slave Select Output Control Register */
#define QSPI0_SSOC ((*(volatile Ifx_QSPI_SSOC*)0xF0001C48u)) /* lint --e(923)*/

/** 40, Status Register */
#define QSPI0_STATUS ((*(volatile Ifx_QSPI_STATUS*)0xF0001C40u)) /* lint --e(923)*/

/** 44, Status Register 1 */
#define QSPI0_STATUS1 ((*(volatile Ifx_QSPI_STATUS1*)0xF0001C44u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-QSPI1)                              */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define QSPI1_ACCEN0 ((*(volatile Ifx_QSPI_ACCEN0*)0xF0001DFCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define QSPI1_ACCEN1 ((*(volatile Ifx_QSPI_ACCEN1*)0xF0001DF8u)) /* lint --e(923)*/

/** 18, Basic Configuration Register */
#define QSPI1_BACON ((*(volatile Ifx_QSPI_BACON*)0xF0001D18u)) /* lint --e(923)*/

/** 60, BACON_ENTRY Register */
#define QSPI1_BACONENTRY ((*(volatile Ifx_QSPI_BACONENTRY*)0xF0001D60u)) /* lint --e(923)*/

/** 1C, Basic Configuration Register 1 */
#define QSPI1_BACONPWM ((*(volatile Ifx_QSPI_BACONPWM*)0xF0001D1Cu)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define QSPI1_CLC ((*(volatile Ifx_CLC2*)0xF0001D00u)) /* lint --e(923)*/

/** 64, DATA_ENTRY Register */
#define QSPI1_DATAENTRY0 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001D64u)) /* lint --e(923)*/

/** 68, DATA_ENTRY Register */
#define QSPI1_DATAENTRY1 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001D68u)) /* lint --e(923)*/

/** 6C, DATA_ENTRY Register */
#define QSPI1_DATAENTRY2 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001D6Cu)) /* lint --e(923)*/

/** 70, DATA_ENTRY Register */
#define QSPI1_DATAENTRY3 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001D70u)) /* lint --e(923)*/

/** 74, DATA_ENTRY Register */
#define QSPI1_DATAENTRY4 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001D74u)) /* lint --e(923)*/

/** 78, DATA_ENTRY Register */
#define QSPI1_DATAENTRY5 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001D78u)) /* lint --e(923)*/

/** 7C, DATA_ENTRY Register */
#define QSPI1_DATAENTRY6 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001D7Cu)) /* lint --e(923)*/

/** 80, DATA_ENTRY Register */
#define QSPI1_DATAENTRY7 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001D80u)) /* lint --e(923)*/

/** 20, Configuration Extension */
#define QSPI1_ECON0 ((*(volatile Ifx_QSPI_ECON*)0xF0001D20u)) /* lint --e(923)*/

/** 24, Configuration Extension */
#define QSPI1_ECON1 ((*(volatile Ifx_QSPI_ECON*)0xF0001D24u)) /* lint --e(923)*/

/** 28, Configuration Extension */
#define QSPI1_ECON2 ((*(volatile Ifx_QSPI_ECON*)0xF0001D28u)) /* lint --e(923)*/

/** 2C, Configuration Extension */
#define QSPI1_ECON3 ((*(volatile Ifx_QSPI_ECON*)0xF0001D2Cu)) /* lint --e(923)*/

/** 30, Configuration Extension */
#define QSPI1_ECON4 ((*(volatile Ifx_QSPI_ECON*)0xF0001D30u)) /* lint --e(923)*/

/** 34, Configuration Extension */
#define QSPI1_ECON5 ((*(volatile Ifx_QSPI_ECON*)0xF0001D34u)) /* lint --e(923)*/

/** 38, Configuration Extension */
#define QSPI1_ECON6 ((*(volatile Ifx_QSPI_ECON*)0xF0001D38u)) /* lint --e(923)*/

/** 3C, Configuration Extension */
#define QSPI1_ECON7 ((*(volatile Ifx_QSPI_ECON*)0xF0001D3Cu)) /* lint --e(923)*/

/** 54, Flags Clear Register */
#define QSPI1_FLAGSCLEAR ((*(volatile Ifx_QSPI_FLAGSCLEAR*)0xF0001D54u)) /* lint --e(923)*/

/** 10, Global Configuration Register */
#define QSPI1_GLOBALCON ((*(volatile Ifx_QSPI_GLOBALCON*)0xF0001D10u)) /* lint --e(923)*/

/** 14, Global Configuration Register 1 */
#define QSPI1_GLOBALCON1 ((*(volatile Ifx_QSPI_GLOBALCON1*)0xF0001D14u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define QSPI1_ID ((*(volatile Ifx_ID1*)0xF0001D08u)) /* lint --e(923)*/

/** 50, Inject Register */
#define QSPI1_INJECT ((*(volatile Ifx_QSPI_INJECT*)0xF0001D50u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define QSPI1_KRST0 ((*(volatile Ifx_QSPI_KRST0*)0xF0001DF4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define QSPI1_KRST1 ((*(volatile Ifx_QSPI_KRST1*)0xF0001DF0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define QSPI1_KRSTCLR ((*(volatile Ifx_QSPI_KRSTCLR*)0xF0001DECu)) /* lint --e(923)*/

/** 4C, Mask Register */
#define QSPI1_MASK ((*(volatile Ifx_QSPI_MASK*)0xF0001D4Cu)) /* lint --e(923)*/

/** 5C, MIX_ENTRY Register */
#define QSPI1_MIXENTRY ((*(volatile Ifx_QSPI_MIXENTRY*)0xF0001D5Cu)) /* lint --e(923)*/

/** E8, OCDS Control and Status */
#define QSPI1_OCS ((*(volatile Ifx_QSPI_OCS*)0xF0001DE8u)) /* lint --e(923)*/

/** 4, Port Input Select Register */
#define QSPI1_PISEL ((*(volatile Ifx_QSPI_PISEL*)0xF0001D04u)) /* lint --e(923)*/

/** 90, RX_EXIT Register */
#define QSPI1_RXEXIT ((*(volatile Ifx_QSPI_RXEXIT*)0xF0001D90u)) /* lint --e(923)*/

/** 48, Slave Select Output Control Register */
#define QSPI1_SSOC ((*(volatile Ifx_QSPI_SSOC*)0xF0001D48u)) /* lint --e(923)*/

/** 40, Status Register */
#define QSPI1_STATUS ((*(volatile Ifx_QSPI_STATUS*)0xF0001D40u)) /* lint --e(923)*/

/** 44, Status Register 1 */
#define QSPI1_STATUS1 ((*(volatile Ifx_QSPI_STATUS1*)0xF0001D44u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-QSPI2)                              */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define QSPI2_ACCEN0 ((*(volatile Ifx_QSPI_ACCEN0*)0xF0001EFCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define QSPI2_ACCEN1 ((*(volatile Ifx_QSPI_ACCEN1*)0xF0001EF8u)) /* lint --e(923)*/

/** 18, Basic Configuration Register */
#define QSPI2_BACON ((*(volatile Ifx_QSPI_BACON*)0xF0001E18u)) /* lint --e(923)*/

/** 60, BACON_ENTRY Register */
#define QSPI2_BACONENTRY ((*(volatile Ifx_QSPI_BACONENTRY*)0xF0001E60u)) /* lint --e(923)*/

/** 1C, Basic Configuration Register 1 */
#define QSPI2_BACONPWM ((*(volatile Ifx_QSPI_BACONPWM*)0xF0001E1Cu)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define QSPI2_CLC ((*(volatile Ifx_CLC2*)0xF0001E00u)) /* lint --e(923)*/

/** 64, DATA_ENTRY Register */
#define QSPI2_DATAENTRY0 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001E64u)) /* lint --e(923)*/

/** 68, DATA_ENTRY Register */
#define QSPI2_DATAENTRY1 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001E68u)) /* lint --e(923)*/

/** 6C, DATA_ENTRY Register */
#define QSPI2_DATAENTRY2 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001E6Cu)) /* lint --e(923)*/

/** 70, DATA_ENTRY Register */
#define QSPI2_DATAENTRY3 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001E70u)) /* lint --e(923)*/

/** 74, DATA_ENTRY Register */
#define QSPI2_DATAENTRY4 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001E74u)) /* lint --e(923)*/

/** 78, DATA_ENTRY Register */
#define QSPI2_DATAENTRY5 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001E78u)) /* lint --e(923)*/

/** 7C, DATA_ENTRY Register */
#define QSPI2_DATAENTRY6 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001E7Cu)) /* lint --e(923)*/

/** 80, DATA_ENTRY Register */
#define QSPI2_DATAENTRY7 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001E80u)) /* lint --e(923)*/

/** 20, Configuration Extension */
#define QSPI2_ECON0 ((*(volatile Ifx_QSPI_ECON*)0xF0001E20u)) /* lint --e(923)*/

/** 24, Configuration Extension */
#define QSPI2_ECON1 ((*(volatile Ifx_QSPI_ECON*)0xF0001E24u)) /* lint --e(923)*/

/** 28, Configuration Extension */
#define QSPI2_ECON2 ((*(volatile Ifx_QSPI_ECON*)0xF0001E28u)) /* lint --e(923)*/

/** 2C, Configuration Extension */
#define QSPI2_ECON3 ((*(volatile Ifx_QSPI_ECON*)0xF0001E2Cu)) /* lint --e(923)*/

/** 30, Configuration Extension */
#define QSPI2_ECON4 ((*(volatile Ifx_QSPI_ECON*)0xF0001E30u)) /* lint --e(923)*/

/** 34, Configuration Extension */
#define QSPI2_ECON5 ((*(volatile Ifx_QSPI_ECON*)0xF0001E34u)) /* lint --e(923)*/

/** 38, Configuration Extension */
#define QSPI2_ECON6 ((*(volatile Ifx_QSPI_ECON*)0xF0001E38u)) /* lint --e(923)*/

/** 3C, Configuration Extension */
#define QSPI2_ECON7 ((*(volatile Ifx_QSPI_ECON*)0xF0001E3Cu)) /* lint --e(923)*/

/** 54, Flags Clear Register */
#define QSPI2_FLAGSCLEAR ((*(volatile Ifx_QSPI_FLAGSCLEAR*)0xF0001E54u)) /* lint --e(923)*/

/** 10, Global Configuration Register */
#define QSPI2_GLOBALCON ((*(volatile Ifx_QSPI_GLOBALCON*)0xF0001E10u)) /* lint --e(923)*/

/** 14, Global Configuration Register 1 */
#define QSPI2_GLOBALCON1 ((*(volatile Ifx_QSPI_GLOBALCON1*)0xF0001E14u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define QSPI2_ID ((*(volatile Ifx_ID1*)0xF0001E08u)) /* lint --e(923)*/

/** 50, Inject Register */
#define QSPI2_INJECT ((*(volatile Ifx_QSPI_INJECT*)0xF0001E50u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define QSPI2_KRST0 ((*(volatile Ifx_QSPI_KRST0*)0xF0001EF4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define QSPI2_KRST1 ((*(volatile Ifx_QSPI_KRST1*)0xF0001EF0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define QSPI2_KRSTCLR ((*(volatile Ifx_QSPI_KRSTCLR*)0xF0001EECu)) /* lint --e(923)*/

/** 4C, Mask Register */
#define QSPI2_MASK ((*(volatile Ifx_QSPI_MASK*)0xF0001E4Cu)) /* lint --e(923)*/

/** 5C, MIX_ENTRY Register */
#define QSPI2_MIXENTRY ((*(volatile Ifx_QSPI_MIXENTRY*)0xF0001E5Cu)) /* lint --e(923)*/

/** E8, OCDS Control and Status */
#define QSPI2_OCS ((*(volatile Ifx_QSPI_OCS*)0xF0001EE8u)) /* lint --e(923)*/

/** 4, Port Input Select Register */
#define QSPI2_PISEL ((*(volatile Ifx_QSPI_PISEL*)0xF0001E04u)) /* lint --e(923)*/

/** 90, RX_EXIT Register */
#define QSPI2_RXEXIT ((*(volatile Ifx_QSPI_RXEXIT*)0xF0001E90u)) /* lint --e(923)*/

/** 48, Slave Select Output Control Register */
#define QSPI2_SSOC ((*(volatile Ifx_QSPI_SSOC*)0xF0001E48u)) /* lint --e(923)*/

/** 40, Status Register */
#define QSPI2_STATUS ((*(volatile Ifx_QSPI_STATUS*)0xF0001E40u)) /* lint --e(923)*/

/** 44, Status Register 1 */
#define QSPI2_STATUS1 ((*(volatile Ifx_QSPI_STATUS1*)0xF0001E44u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-QSPI3)                              */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define QSPI3_ACCEN0 ((*(volatile Ifx_QSPI_ACCEN0*)0xF0001FFCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define QSPI3_ACCEN1 ((*(volatile Ifx_QSPI_ACCEN1*)0xF0001FF8u)) /* lint --e(923)*/

/** 18, Basic Configuration Register */
#define QSPI3_BACON ((*(volatile Ifx_QSPI_BACON*)0xF0001F18u)) /* lint --e(923)*/

/** 60, BACON_ENTRY Register */
#define QSPI3_BACONENTRY ((*(volatile Ifx_QSPI_BACONENTRY*)0xF0001F60u)) /* lint --e(923)*/

/** 1C, Basic Configuration Register 1 */
#define QSPI3_BACONPWM ((*(volatile Ifx_QSPI_BACONPWM*)0xF0001F1Cu)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define QSPI3_CLC ((*(volatile Ifx_CLC2*)0xF0001F00u)) /* lint --e(923)*/

/** 64, DATA_ENTRY Register */
#define QSPI3_DATAENTRY0 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001F64u)) /* lint --e(923)*/

/** 68, DATA_ENTRY Register */
#define QSPI3_DATAENTRY1 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001F68u)) /* lint --e(923)*/

/** 6C, DATA_ENTRY Register */
#define QSPI3_DATAENTRY2 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001F6Cu)) /* lint --e(923)*/

/** 70, DATA_ENTRY Register */
#define QSPI3_DATAENTRY3 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001F70u)) /* lint --e(923)*/

/** 74, DATA_ENTRY Register */
#define QSPI3_DATAENTRY4 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001F74u)) /* lint --e(923)*/

/** 78, DATA_ENTRY Register */
#define QSPI3_DATAENTRY5 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001F78u)) /* lint --e(923)*/

/** 7C, DATA_ENTRY Register */
#define QSPI3_DATAENTRY6 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001F7Cu)) /* lint --e(923)*/

/** 80, DATA_ENTRY Register */
#define QSPI3_DATAENTRY7 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0001F80u)) /* lint --e(923)*/

/** 20, Configuration Extension */
#define QSPI3_ECON0 ((*(volatile Ifx_QSPI_ECON*)0xF0001F20u)) /* lint --e(923)*/

/** 24, Configuration Extension */
#define QSPI3_ECON1 ((*(volatile Ifx_QSPI_ECON*)0xF0001F24u)) /* lint --e(923)*/

/** 28, Configuration Extension */
#define QSPI3_ECON2 ((*(volatile Ifx_QSPI_ECON*)0xF0001F28u)) /* lint --e(923)*/

/** 2C, Configuration Extension */
#define QSPI3_ECON3 ((*(volatile Ifx_QSPI_ECON*)0xF0001F2Cu)) /* lint --e(923)*/

/** 30, Configuration Extension */
#define QSPI3_ECON4 ((*(volatile Ifx_QSPI_ECON*)0xF0001F30u)) /* lint --e(923)*/

/** 34, Configuration Extension */
#define QSPI3_ECON5 ((*(volatile Ifx_QSPI_ECON*)0xF0001F34u)) /* lint --e(923)*/

/** 38, Configuration Extension */
#define QSPI3_ECON6 ((*(volatile Ifx_QSPI_ECON*)0xF0001F38u)) /* lint --e(923)*/

/** 3C, Configuration Extension */
#define QSPI3_ECON7 ((*(volatile Ifx_QSPI_ECON*)0xF0001F3Cu)) /* lint --e(923)*/

/** 54, Flags Clear Register */
#define QSPI3_FLAGSCLEAR ((*(volatile Ifx_QSPI_FLAGSCLEAR*)0xF0001F54u)) /* lint --e(923)*/

/** 10, Global Configuration Register */
#define QSPI3_GLOBALCON ((*(volatile Ifx_QSPI_GLOBALCON*)0xF0001F10u)) /* lint --e(923)*/

/** 14, Global Configuration Register 1 */
#define QSPI3_GLOBALCON1 ((*(volatile Ifx_QSPI_GLOBALCON1*)0xF0001F14u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define QSPI3_ID ((*(volatile Ifx_ID1*)0xF0001F08u)) /* lint --e(923)*/

/** 50, Inject Register */
#define QSPI3_INJECT ((*(volatile Ifx_QSPI_INJECT*)0xF0001F50u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define QSPI3_KRST0 ((*(volatile Ifx_QSPI_KRST0*)0xF0001FF4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define QSPI3_KRST1 ((*(volatile Ifx_QSPI_KRST1*)0xF0001FF0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define QSPI3_KRSTCLR ((*(volatile Ifx_QSPI_KRSTCLR*)0xF0001FECu)) /* lint --e(923)*/

/** 4C, Mask Register */
#define QSPI3_MASK ((*(volatile Ifx_QSPI_MASK*)0xF0001F4Cu)) /* lint --e(923)*/

/** 5C, MIX_ENTRY Register */
#define QSPI3_MIXENTRY ((*(volatile Ifx_QSPI_MIXENTRY*)0xF0001F5Cu)) /* lint --e(923)*/

/** E8, OCDS Control and Status */
#define QSPI3_OCS ((*(volatile Ifx_QSPI_OCS*)0xF0001FE8u)) /* lint --e(923)*/

/** 4, Port Input Select Register */
#define QSPI3_PISEL ((*(volatile Ifx_QSPI_PISEL*)0xF0001F04u)) /* lint --e(923)*/

/** 90, RX_EXIT Register */
#define QSPI3_RXEXIT ((*(volatile Ifx_QSPI_RXEXIT*)0xF0001F90u)) /* lint --e(923)*/

/** 48, Slave Select Output Control Register */
#define QSPI3_SSOC ((*(volatile Ifx_QSPI_SSOC*)0xF0001F48u)) /* lint --e(923)*/

/** 40, Status Register */
#define QSPI3_STATUS ((*(volatile Ifx_QSPI_STATUS*)0xF0001F40u)) /* lint --e(923)*/

/** 44, Status Register 1 */
#define QSPI3_STATUS1 ((*(volatile Ifx_QSPI_STATUS1*)0xF0001F44u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-QSPI4)                              */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define QSPI4_ACCEN0 ((*(volatile Ifx_QSPI_ACCEN0*)0xF00020FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define QSPI4_ACCEN1 ((*(volatile Ifx_QSPI_ACCEN1*)0xF00020F8u)) /* lint --e(923)*/

/** 18, Basic Configuration Register */
#define QSPI4_BACON ((*(volatile Ifx_QSPI_BACON*)0xF0002018u)) /* lint --e(923)*/

/** 60, BACON_ENTRY Register */
#define QSPI4_BACONENTRY ((*(volatile Ifx_QSPI_BACONENTRY*)0xF0002060u)) /* lint --e(923)*/

/** 1C, Basic Configuration Register 1 */
#define QSPI4_BACONPWM ((*(volatile Ifx_QSPI_BACONPWM*)0xF000201Cu)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define QSPI4_CLC ((*(volatile Ifx_CLC2*)0xF0002000u)) /* lint --e(923)*/

/** 64, DATA_ENTRY Register */
#define QSPI4_DATAENTRY0 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0002064u)) /* lint --e(923)*/

/** 68, DATA_ENTRY Register */
#define QSPI4_DATAENTRY1 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0002068u)) /* lint --e(923)*/

/** 6C, DATA_ENTRY Register */
#define QSPI4_DATAENTRY2 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF000206Cu)) /* lint --e(923)*/

/** 70, DATA_ENTRY Register */
#define QSPI4_DATAENTRY3 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0002070u)) /* lint --e(923)*/

/** 74, DATA_ENTRY Register */
#define QSPI4_DATAENTRY4 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0002074u)) /* lint --e(923)*/

/** 78, DATA_ENTRY Register */
#define QSPI4_DATAENTRY5 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0002078u)) /* lint --e(923)*/

/** 7C, DATA_ENTRY Register */
#define QSPI4_DATAENTRY6 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF000207Cu)) /* lint --e(923)*/

/** 80, DATA_ENTRY Register */
#define QSPI4_DATAENTRY7 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0002080u)) /* lint --e(923)*/

/** 20, Configuration Extension */
#define QSPI4_ECON0 ((*(volatile Ifx_QSPI_ECON*)0xF0002020u)) /* lint --e(923)*/

/** 24, Configuration Extension */
#define QSPI4_ECON1 ((*(volatile Ifx_QSPI_ECON*)0xF0002024u)) /* lint --e(923)*/

/** 28, Configuration Extension */
#define QSPI4_ECON2 ((*(volatile Ifx_QSPI_ECON*)0xF0002028u)) /* lint --e(923)*/

/** 2C, Configuration Extension */
#define QSPI4_ECON3 ((*(volatile Ifx_QSPI_ECON*)0xF000202Cu)) /* lint --e(923)*/

/** 30, Configuration Extension */
#define QSPI4_ECON4 ((*(volatile Ifx_QSPI_ECON*)0xF0002030u)) /* lint --e(923)*/

/** 34, Configuration Extension */
#define QSPI4_ECON5 ((*(volatile Ifx_QSPI_ECON*)0xF0002034u)) /* lint --e(923)*/

/** 38, Configuration Extension */
#define QSPI4_ECON6 ((*(volatile Ifx_QSPI_ECON*)0xF0002038u)) /* lint --e(923)*/

/** 3C, Configuration Extension */
#define QSPI4_ECON7 ((*(volatile Ifx_QSPI_ECON*)0xF000203Cu)) /* lint --e(923)*/

/** 54, Flags Clear Register */
#define QSPI4_FLAGSCLEAR ((*(volatile Ifx_QSPI_FLAGSCLEAR*)0xF0002054u)) /* lint --e(923)*/

/** 10, Global Configuration Register */
#define QSPI4_GLOBALCON ((*(volatile Ifx_QSPI_GLOBALCON*)0xF0002010u)) /* lint --e(923)*/

/** 14, Global Configuration Register 1 */
#define QSPI4_GLOBALCON1 ((*(volatile Ifx_QSPI_GLOBALCON1*)0xF0002014u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define QSPI4_ID ((*(volatile Ifx_ID1*)0xF0002008u)) /* lint --e(923)*/

/** 50, Inject Register */
#define QSPI4_INJECT ((*(volatile Ifx_QSPI_INJECT*)0xF0002050u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define QSPI4_KRST0 ((*(volatile Ifx_QSPI_KRST0*)0xF00020F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define QSPI4_KRST1 ((*(volatile Ifx_QSPI_KRST1*)0xF00020F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define QSPI4_KRSTCLR ((*(volatile Ifx_QSPI_KRSTCLR*)0xF00020ECu)) /* lint --e(923)*/

/** 4C, Mask Register */
#define QSPI4_MASK ((*(volatile Ifx_QSPI_MASK*)0xF000204Cu)) /* lint --e(923)*/

/** 5C, MIX_ENTRY Register */
#define QSPI4_MIXENTRY ((*(volatile Ifx_QSPI_MIXENTRY*)0xF000205Cu)) /* lint --e(923)*/

/** E8, OCDS Control and Status */
#define QSPI4_OCS ((*(volatile Ifx_QSPI_OCS*)0xF00020E8u)) /* lint --e(923)*/

/** 4, Port Input Select Register */
#define QSPI4_PISEL ((*(volatile Ifx_QSPI_PISEL*)0xF0002004u)) /* lint --e(923)*/

/** 90, RX_EXIT Register */
#define QSPI4_RXEXIT ((*(volatile Ifx_QSPI_RXEXIT*)0xF0002090u)) /* lint --e(923)*/

/** 48, Slave Select Output Control Register */
#define QSPI4_SSOC ((*(volatile Ifx_QSPI_SSOC*)0xF0002048u)) /* lint --e(923)*/

/** 40, Status Register */
#define QSPI4_STATUS ((*(volatile Ifx_QSPI_STATUS*)0xF0002040u)) /* lint --e(923)*/

/** 44, Status Register 1 */
#define QSPI4_STATUS1 ((*(volatile Ifx_QSPI_STATUS1*)0xF0002044u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-QSPI5)                              */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define QSPI5_ACCEN0 ((*(volatile Ifx_QSPI_ACCEN0*)0xF00021FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define QSPI5_ACCEN1 ((*(volatile Ifx_QSPI_ACCEN1*)0xF00021F8u)) /* lint --e(923)*/

/** 18, Basic Configuration Register */
#define QSPI5_BACON ((*(volatile Ifx_QSPI_BACON*)0xF0002118u)) /* lint --e(923)*/

/** 60, BACON_ENTRY Register */
#define QSPI5_BACONENTRY ((*(volatile Ifx_QSPI_BACONENTRY*)0xF0002160u)) /* lint --e(923)*/

/** 1C, Basic Configuration Register 1 */
#define QSPI5_BACONPWM ((*(volatile Ifx_QSPI_BACONPWM*)0xF000211Cu)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define QSPI5_CLC ((*(volatile Ifx_CLC2*)0xF0002100u)) /* lint --e(923)*/

/** 64, DATA_ENTRY Register */
#define QSPI5_DATAENTRY0 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0002164u)) /* lint --e(923)*/

/** 68, DATA_ENTRY Register */
#define QSPI5_DATAENTRY1 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0002168u)) /* lint --e(923)*/

/** 6C, DATA_ENTRY Register */
#define QSPI5_DATAENTRY2 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF000216Cu)) /* lint --e(923)*/

/** 70, DATA_ENTRY Register */
#define QSPI5_DATAENTRY3 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0002170u)) /* lint --e(923)*/

/** 74, DATA_ENTRY Register */
#define QSPI5_DATAENTRY4 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0002174u)) /* lint --e(923)*/

/** 78, DATA_ENTRY Register */
#define QSPI5_DATAENTRY5 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0002178u)) /* lint --e(923)*/

/** 7C, DATA_ENTRY Register */
#define QSPI5_DATAENTRY6 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF000217Cu)) /* lint --e(923)*/

/** 80, DATA_ENTRY Register */
#define QSPI5_DATAENTRY7 ((*(volatile Ifx_QSPI_DATAENTRY*)0xF0002180u)) /* lint --e(923)*/

/** 20, Configuration Extension */
#define QSPI5_ECON0 ((*(volatile Ifx_QSPI_ECON*)0xF0002120u)) /* lint --e(923)*/

/** 24, Configuration Extension */
#define QSPI5_ECON1 ((*(volatile Ifx_QSPI_ECON*)0xF0002124u)) /* lint --e(923)*/

/** 28, Configuration Extension */
#define QSPI5_ECON2 ((*(volatile Ifx_QSPI_ECON*)0xF0002128u)) /* lint --e(923)*/

/** 2C, Configuration Extension */
#define QSPI5_ECON3 ((*(volatile Ifx_QSPI_ECON*)0xF000212Cu)) /* lint --e(923)*/

/** 30, Configuration Extension */
#define QSPI5_ECON4 ((*(volatile Ifx_QSPI_ECON*)0xF0002130u)) /* lint --e(923)*/

/** 34, Configuration Extension */
#define QSPI5_ECON5 ((*(volatile Ifx_QSPI_ECON*)0xF0002134u)) /* lint --e(923)*/

/** 38, Configuration Extension */
#define QSPI5_ECON6 ((*(volatile Ifx_QSPI_ECON*)0xF0002138u)) /* lint --e(923)*/

/** 3C, Configuration Extension */
#define QSPI5_ECON7 ((*(volatile Ifx_QSPI_ECON*)0xF000213Cu)) /* lint --e(923)*/

/** 54, Flags Clear Register */
#define QSPI5_FLAGSCLEAR ((*(volatile Ifx_QSPI_FLAGSCLEAR*)0xF0002154u)) /* lint --e(923)*/

/** 10, Global Configuration Register */
#define QSPI5_GLOBALCON ((*(volatile Ifx_QSPI_GLOBALCON*)0xF0002110u)) /* lint --e(923)*/

/** 14, Global Configuration Register 1 */
#define QSPI5_GLOBALCON1 ((*(volatile Ifx_QSPI_GLOBALCON1*)0xF0002114u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define QSPI5_ID ((*(volatile Ifx_ID1*)0xF0002108u)) /* lint --e(923)*/

/** 50, Inject Register */
#define QSPI5_INJECT ((*(volatile Ifx_QSPI_INJECT*)0xF0002150u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define QSPI5_KRST0 ((*(volatile Ifx_QSPI_KRST0*)0xF00021F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define QSPI5_KRST1 ((*(volatile Ifx_QSPI_KRST1*)0xF00021F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define QSPI5_KRSTCLR ((*(volatile Ifx_QSPI_KRSTCLR*)0xF00021ECu)) /* lint --e(923)*/

/** 4C, Mask Register */
#define QSPI5_MASK ((*(volatile Ifx_QSPI_MASK*)0xF000214Cu)) /* lint --e(923)*/

/** 5C, MIX_ENTRY Register */
#define QSPI5_MIXENTRY ((*(volatile Ifx_QSPI_MIXENTRY*)0xF000215Cu)) /* lint --e(923)*/

/** E8, OCDS Control and Status */
#define QSPI5_OCS ((*(volatile Ifx_QSPI_OCS*)0xF00021E8u)) /* lint --e(923)*/

/** 4, Port Input Select Register */
#define QSPI5_PISEL ((*(volatile Ifx_QSPI_PISEL*)0xF0002104u)) /* lint --e(923)*/

/** 90, RX_EXIT Register */
#define QSPI5_RXEXIT ((*(volatile Ifx_QSPI_RXEXIT*)0xF0002190u)) /* lint --e(923)*/

/** 48, Slave Select Output Control Register */
#define QSPI5_SSOC ((*(volatile Ifx_QSPI_SSOC*)0xF0002148u)) /* lint --e(923)*/

/** 40, Status Register */
#define QSPI5_STATUS ((*(volatile Ifx_QSPI_STATUS*)0xF0002140u)) /* lint --e(923)*/

/** 44, Status Register 1 */
#define QSPI5_STATUS1 ((*(volatile Ifx_QSPI_STATUS1*)0xF0002144u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXQSPI_REG_H */

