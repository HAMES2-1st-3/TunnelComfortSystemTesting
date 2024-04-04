/**
 * \file IfxAsclin_reg.h
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
#ifndef IFXASCLIN_REG_H
#define IFXASCLIN_REG_H
/******************************************************************************/
#include "Asclin/IfxAsclin_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** ASCLIN object */
#define MODULE_ASCLIN0 ((*(Ifx_ASCLIN*)0xF0000600u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN1 ((*(Ifx_ASCLIN*)0xF0000700u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN10 ((*(Ifx_ASCLIN*)0xF0001000u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN11 ((*(Ifx_ASCLIN*)0xF0001100u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN12 ((*(Ifx_ASCLIN*)0xF0001200u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN13 ((*(Ifx_ASCLIN*)0xF0001300u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN14 ((*(Ifx_ASCLIN*)0xF0001400u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN15 ((*(Ifx_ASCLIN*)0xF0001500u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN16 ((*(Ifx_ASCLIN*)0xF0001600u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN17 ((*(Ifx_ASCLIN*)0xF0001700u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN2 ((*(Ifx_ASCLIN*)0xF0000800u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN3 ((*(Ifx_ASCLIN*)0xF0000900u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN4 ((*(Ifx_ASCLIN*)0xF0000A00u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN5 ((*(Ifx_ASCLIN*)0xF0000B00u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN6 ((*(Ifx_ASCLIN*)0xF0000C00u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN7 ((*(Ifx_ASCLIN*)0xF0000D00u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN8 ((*(Ifx_ASCLIN*)0xF0000E00u)) /* lint --e(923)*/

/** ASCLIN object */
#define MODULE_ASCLIN9 ((*(Ifx_ASCLIN*)0xF0000F00u)) /* lint --e(923)*/

/******************************************************************************/
/*                             Define (2-ASCLIN0)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN0_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF00006FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN0_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF00006F8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN0_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0000614u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN0_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0000624u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN0_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0000620u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN0_CLC ((*(volatile Ifx_CLC2*)0xF0000600u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN0_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF000064Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN0_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF000061Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN0_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0000634u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN0_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF000063Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN0_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000640u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN0_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000638u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN0_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000618u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN0_ID ((*(volatile Ifx_ID1*)0xF0000608u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN0_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0000604u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN0_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF00006F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN0_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF00006F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN0_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF00006ECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN0_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF000062Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN0_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000628u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN0_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000630u)) /* lint --e(923)*/

/** Alias for ASCLIN0_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN0_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN0_LINBTIMER (ASCLIN0_LIN_BTIMER)

/** Alias for ASCLIN0_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN0_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN0_LINCON (ASCLIN0_LIN_CON)

/** Alias for ASCLIN0_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN0_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN0_LINHTIMER (ASCLIN0_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN0_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF00006E8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN0_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0000648u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN0_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000610u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN0_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0000644u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN0_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF000060Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                             Define (2-ASCLIN1)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN1_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF00007FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN1_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF00007F8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN1_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0000714u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN1_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0000724u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN1_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0000720u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN1_CLC ((*(volatile Ifx_CLC2*)0xF0000700u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN1_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF000074Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN1_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF000071Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN1_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0000734u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN1_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF000073Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN1_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000740u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN1_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000738u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN1_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000718u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN1_ID ((*(volatile Ifx_ID1*)0xF0000708u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN1_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0000704u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN1_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF00007F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN1_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF00007F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN1_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF00007ECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN1_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF000072Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN1_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000728u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN1_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000730u)) /* lint --e(923)*/

/** Alias for ASCLIN1_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN1_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN1_LINBTIMER (ASCLIN1_LIN_BTIMER)

/** Alias for ASCLIN1_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN1_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN1_LINCON (ASCLIN1_LIN_CON)

/** Alias for ASCLIN1_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN1_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN1_LINHTIMER (ASCLIN1_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN1_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF00007E8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN1_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0000748u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN1_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000710u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN1_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0000744u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN1_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF000070Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                            Define (2-ASCLIN10)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN10_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF00010FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN10_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF00010F8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN10_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0001014u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN10_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0001024u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN10_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0001020u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN10_CLC ((*(volatile Ifx_CLC2*)0xF0001000u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN10_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF000104Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN10_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF000101Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN10_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0001034u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN10_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF000103Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN10_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0001040u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN10_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0001038u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN10_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0001018u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN10_ID ((*(volatile Ifx_ID1*)0xF0001008u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN10_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0001004u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN10_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF00010F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN10_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF00010F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN10_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF00010ECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN10_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF000102Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN10_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0001028u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN10_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0001030u)) /* lint --e(923)*/

/** Alias for ASCLIN10_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN10_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN10_LINBTIMER (ASCLIN10_LIN_BTIMER)

/** Alias for ASCLIN10_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN10_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN10_LINCON (ASCLIN10_LIN_CON)

/** Alias for ASCLIN10_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN10_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN10_LINHTIMER (ASCLIN10_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN10_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF00010E8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN10_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0001048u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN10_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0001010u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN10_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0001044u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN10_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF000100Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                            Define (2-ASCLIN11)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN11_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF00011FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN11_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF00011F8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN11_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0001114u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN11_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0001124u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN11_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0001120u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN11_CLC ((*(volatile Ifx_CLC2*)0xF0001100u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN11_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF000114Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN11_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF000111Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN11_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0001134u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN11_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF000113Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN11_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0001140u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN11_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0001138u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN11_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0001118u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN11_ID ((*(volatile Ifx_ID1*)0xF0001108u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN11_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0001104u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN11_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF00011F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN11_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF00011F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN11_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF00011ECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN11_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF000112Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN11_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0001128u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN11_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0001130u)) /* lint --e(923)*/

/** Alias for ASCLIN11_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN11_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN11_LINBTIMER (ASCLIN11_LIN_BTIMER)

/** Alias for ASCLIN11_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN11_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN11_LINCON (ASCLIN11_LIN_CON)

/** Alias for ASCLIN11_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN11_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN11_LINHTIMER (ASCLIN11_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN11_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF00011E8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN11_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0001148u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN11_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0001110u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN11_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0001144u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN11_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF000110Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                            Define (2-ASCLIN12)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN12_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF00012FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN12_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF00012F8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN12_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0001214u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN12_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0001224u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN12_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0001220u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN12_CLC ((*(volatile Ifx_CLC2*)0xF0001200u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN12_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF000124Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN12_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF000121Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN12_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0001234u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN12_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF000123Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN12_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0001240u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN12_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0001238u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN12_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0001218u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN12_ID ((*(volatile Ifx_ID1*)0xF0001208u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN12_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0001204u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN12_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF00012F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN12_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF00012F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN12_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF00012ECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN12_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF000122Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN12_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0001228u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN12_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0001230u)) /* lint --e(923)*/

/** Alias for ASCLIN12_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN12_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN12_LINBTIMER (ASCLIN12_LIN_BTIMER)

/** Alias for ASCLIN12_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN12_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN12_LINCON (ASCLIN12_LIN_CON)

/** Alias for ASCLIN12_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN12_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN12_LINHTIMER (ASCLIN12_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN12_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF00012E8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN12_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0001248u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN12_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0001210u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN12_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0001244u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN12_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF000120Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                            Define (2-ASCLIN13)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN13_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF00013FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN13_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF00013F8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN13_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0001314u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN13_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0001324u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN13_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0001320u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN13_CLC ((*(volatile Ifx_CLC2*)0xF0001300u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN13_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF000134Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN13_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF000131Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN13_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0001334u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN13_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF000133Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN13_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0001340u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN13_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0001338u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN13_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0001318u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN13_ID ((*(volatile Ifx_ID1*)0xF0001308u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN13_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0001304u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN13_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF00013F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN13_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF00013F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN13_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF00013ECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN13_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF000132Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN13_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0001328u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN13_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0001330u)) /* lint --e(923)*/

/** Alias for ASCLIN13_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN13_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN13_LINBTIMER (ASCLIN13_LIN_BTIMER)

/** Alias for ASCLIN13_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN13_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN13_LINCON (ASCLIN13_LIN_CON)

/** Alias for ASCLIN13_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN13_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN13_LINHTIMER (ASCLIN13_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN13_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF00013E8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN13_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0001348u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN13_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0001310u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN13_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0001344u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN13_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF000130Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                            Define (2-ASCLIN14)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN14_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF00014FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN14_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF00014F8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN14_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0001414u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN14_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0001424u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN14_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0001420u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN14_CLC ((*(volatile Ifx_CLC2*)0xF0001400u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN14_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF000144Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN14_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF000141Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN14_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0001434u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN14_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF000143Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN14_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0001440u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN14_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0001438u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN14_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0001418u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN14_ID ((*(volatile Ifx_ID1*)0xF0001408u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN14_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0001404u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN14_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF00014F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN14_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF00014F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN14_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF00014ECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN14_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF000142Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN14_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0001428u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN14_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0001430u)) /* lint --e(923)*/

/** Alias for ASCLIN14_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN14_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN14_LINBTIMER (ASCLIN14_LIN_BTIMER)

/** Alias for ASCLIN14_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN14_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN14_LINCON (ASCLIN14_LIN_CON)

/** Alias for ASCLIN14_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN14_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN14_LINHTIMER (ASCLIN14_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN14_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF00014E8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN14_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0001448u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN14_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0001410u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN14_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0001444u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN14_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF000140Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                            Define (2-ASCLIN15)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN15_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF00015FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN15_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF00015F8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN15_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0001514u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN15_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0001524u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN15_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0001520u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN15_CLC ((*(volatile Ifx_CLC2*)0xF0001500u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN15_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF000154Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN15_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF000151Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN15_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0001534u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN15_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF000153Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN15_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0001540u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN15_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0001538u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN15_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0001518u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN15_ID ((*(volatile Ifx_ID1*)0xF0001508u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN15_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0001504u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN15_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF00015F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN15_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF00015F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN15_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF00015ECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN15_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF000152Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN15_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0001528u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN15_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0001530u)) /* lint --e(923)*/

/** Alias for ASCLIN15_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN15_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN15_LINBTIMER (ASCLIN15_LIN_BTIMER)

/** Alias for ASCLIN15_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN15_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN15_LINCON (ASCLIN15_LIN_CON)

/** Alias for ASCLIN15_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN15_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN15_LINHTIMER (ASCLIN15_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN15_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF00015E8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN15_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0001548u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN15_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0001510u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN15_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0001544u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN15_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF000150Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                            Define (2-ASCLIN16)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN16_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF00016FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN16_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF00016F8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN16_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0001614u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN16_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0001624u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN16_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0001620u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN16_CLC ((*(volatile Ifx_CLC2*)0xF0001600u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN16_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF000164Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN16_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF000161Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN16_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0001634u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN16_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF000163Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN16_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0001640u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN16_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0001638u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN16_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0001618u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN16_ID ((*(volatile Ifx_ID1*)0xF0001608u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN16_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0001604u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN16_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF00016F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN16_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF00016F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN16_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF00016ECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN16_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF000162Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN16_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0001628u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN16_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0001630u)) /* lint --e(923)*/

/** Alias for ASCLIN16_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN16_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN16_LINBTIMER (ASCLIN16_LIN_BTIMER)

/** Alias for ASCLIN16_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN16_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN16_LINCON (ASCLIN16_LIN_CON)

/** Alias for ASCLIN16_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN16_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN16_LINHTIMER (ASCLIN16_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN16_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF00016E8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN16_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0001648u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN16_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0001610u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN16_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0001644u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN16_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF000160Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                            Define (2-ASCLIN17)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN17_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF00017FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN17_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF00017F8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN17_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0001714u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN17_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0001724u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN17_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0001720u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN17_CLC ((*(volatile Ifx_CLC2*)0xF0001700u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN17_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF000174Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN17_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF000171Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN17_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0001734u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN17_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF000173Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN17_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0001740u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN17_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0001738u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN17_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0001718u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN17_ID ((*(volatile Ifx_ID1*)0xF0001708u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN17_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0001704u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN17_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF00017F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN17_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF00017F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN17_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF00017ECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN17_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF000172Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN17_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0001728u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN17_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0001730u)) /* lint --e(923)*/

/** Alias for ASCLIN17_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN17_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN17_LINBTIMER (ASCLIN17_LIN_BTIMER)

/** Alias for ASCLIN17_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN17_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN17_LINCON (ASCLIN17_LIN_CON)

/** Alias for ASCLIN17_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN17_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN17_LINHTIMER (ASCLIN17_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN17_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF00017E8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN17_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0001748u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN17_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0001710u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN17_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0001744u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN17_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF000170Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                             Define (2-ASCLIN2)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN2_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF00008FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN2_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF00008F8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN2_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0000814u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN2_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0000824u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN2_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0000820u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN2_CLC ((*(volatile Ifx_CLC2*)0xF0000800u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN2_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF000084Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN2_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF000081Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN2_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0000834u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN2_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF000083Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN2_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000840u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN2_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000838u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN2_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000818u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN2_ID ((*(volatile Ifx_ID1*)0xF0000808u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN2_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0000804u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN2_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF00008F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN2_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF00008F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN2_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF00008ECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN2_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF000082Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN2_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000828u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN2_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000830u)) /* lint --e(923)*/

/** Alias for ASCLIN2_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN2_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN2_LINBTIMER (ASCLIN2_LIN_BTIMER)

/** Alias for ASCLIN2_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN2_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN2_LINCON (ASCLIN2_LIN_CON)

/** Alias for ASCLIN2_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN2_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN2_LINHTIMER (ASCLIN2_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN2_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF00008E8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN2_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0000848u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN2_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000810u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN2_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0000844u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN2_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF000080Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                             Define (2-ASCLIN3)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN3_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF00009FCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN3_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF00009F8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN3_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0000914u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN3_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0000924u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN3_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0000920u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN3_CLC ((*(volatile Ifx_CLC2*)0xF0000900u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN3_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF000094Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN3_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF000091Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN3_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0000934u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN3_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF000093Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN3_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000940u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN3_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000938u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN3_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000918u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN3_ID ((*(volatile Ifx_ID1*)0xF0000908u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN3_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0000904u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN3_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF00009F4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN3_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF00009F0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN3_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF00009ECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN3_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF000092Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN3_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000928u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN3_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000930u)) /* lint --e(923)*/

/** Alias for ASCLIN3_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN3_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN3_LINBTIMER (ASCLIN3_LIN_BTIMER)

/** Alias for ASCLIN3_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN3_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN3_LINCON (ASCLIN3_LIN_CON)

/** Alias for ASCLIN3_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN3_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN3_LINHTIMER (ASCLIN3_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN3_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF00009E8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN3_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0000948u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN3_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000910u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN3_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0000944u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN3_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF000090Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                             Define (2-ASCLIN4)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN4_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF0000AFCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN4_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF0000AF8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN4_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0000A14u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN4_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0000A24u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN4_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0000A20u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN4_CLC ((*(volatile Ifx_CLC2*)0xF0000A00u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN4_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF0000A4Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN4_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF0000A1Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN4_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0000A34u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN4_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF0000A3Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN4_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000A40u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN4_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000A38u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN4_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000A18u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN4_ID ((*(volatile Ifx_ID1*)0xF0000A08u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN4_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0000A04u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN4_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF0000AF4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN4_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF0000AF0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN4_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF0000AECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN4_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF0000A2Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN4_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000A28u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN4_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000A30u)) /* lint --e(923)*/

/** Alias for ASCLIN4_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN4_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN4_LINBTIMER (ASCLIN4_LIN_BTIMER)

/** Alias for ASCLIN4_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN4_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN4_LINCON (ASCLIN4_LIN_CON)

/** Alias for ASCLIN4_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN4_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN4_LINHTIMER (ASCLIN4_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN4_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF0000AE8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN4_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0000A48u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN4_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000A10u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN4_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0000A44u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN4_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF0000A0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                             Define (2-ASCLIN5)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN5_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF0000BFCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN5_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF0000BF8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN5_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0000B14u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN5_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0000B24u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN5_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0000B20u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN5_CLC ((*(volatile Ifx_CLC2*)0xF0000B00u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN5_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF0000B4Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN5_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF0000B1Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN5_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0000B34u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN5_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF0000B3Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN5_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000B40u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN5_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000B38u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN5_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000B18u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN5_ID ((*(volatile Ifx_ID1*)0xF0000B08u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN5_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0000B04u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN5_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF0000BF4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN5_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF0000BF0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN5_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF0000BECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN5_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF0000B2Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN5_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000B28u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN5_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000B30u)) /* lint --e(923)*/

/** Alias for ASCLIN5_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN5_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN5_LINBTIMER (ASCLIN5_LIN_BTIMER)

/** Alias for ASCLIN5_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN5_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN5_LINCON (ASCLIN5_LIN_CON)

/** Alias for ASCLIN5_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN5_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN5_LINHTIMER (ASCLIN5_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN5_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF0000BE8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN5_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0000B48u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN5_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000B10u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN5_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0000B44u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN5_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF0000B0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                             Define (2-ASCLIN6)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN6_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF0000CFCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN6_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF0000CF8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN6_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0000C14u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN6_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0000C24u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN6_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0000C20u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN6_CLC ((*(volatile Ifx_CLC2*)0xF0000C00u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN6_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF0000C4Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN6_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF0000C1Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN6_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0000C34u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN6_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF0000C3Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN6_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000C40u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN6_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000C38u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN6_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000C18u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN6_ID ((*(volatile Ifx_ID1*)0xF0000C08u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN6_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0000C04u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN6_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF0000CF4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN6_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF0000CF0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN6_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF0000CECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN6_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF0000C2Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN6_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000C28u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN6_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000C30u)) /* lint --e(923)*/

/** Alias for ASCLIN6_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN6_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN6_LINBTIMER (ASCLIN6_LIN_BTIMER)

/** Alias for ASCLIN6_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN6_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN6_LINCON (ASCLIN6_LIN_CON)

/** Alias for ASCLIN6_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN6_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN6_LINHTIMER (ASCLIN6_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN6_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF0000CE8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN6_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0000C48u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN6_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000C10u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN6_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0000C44u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN6_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF0000C0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                             Define (2-ASCLIN7)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN7_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF0000DFCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN7_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF0000DF8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN7_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0000D14u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN7_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0000D24u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN7_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0000D20u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN7_CLC ((*(volatile Ifx_CLC2*)0xF0000D00u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN7_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF0000D4Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN7_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF0000D1Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN7_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0000D34u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN7_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF0000D3Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN7_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000D40u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN7_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000D38u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN7_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000D18u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN7_ID ((*(volatile Ifx_ID1*)0xF0000D08u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN7_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0000D04u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN7_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF0000DF4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN7_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF0000DF0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN7_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF0000DECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN7_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF0000D2Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN7_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000D28u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN7_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000D30u)) /* lint --e(923)*/

/** Alias for ASCLIN7_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN7_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN7_LINBTIMER (ASCLIN7_LIN_BTIMER)

/** Alias for ASCLIN7_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN7_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN7_LINCON (ASCLIN7_LIN_CON)

/** Alias for ASCLIN7_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN7_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN7_LINHTIMER (ASCLIN7_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN7_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF0000DE8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN7_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0000D48u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN7_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000D10u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN7_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0000D44u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN7_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF0000D0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                             Define (2-ASCLIN8)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN8_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF0000EFCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN8_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF0000EF8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN8_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0000E14u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN8_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0000E24u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN8_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0000E20u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN8_CLC ((*(volatile Ifx_CLC2*)0xF0000E00u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN8_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF0000E4Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN8_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF0000E1Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN8_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0000E34u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN8_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF0000E3Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN8_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000E40u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN8_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000E38u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN8_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000E18u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN8_ID ((*(volatile Ifx_ID1*)0xF0000E08u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN8_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0000E04u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN8_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF0000EF4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN8_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF0000EF0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN8_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF0000EECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN8_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF0000E2Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN8_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000E28u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN8_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000E30u)) /* lint --e(923)*/

/** Alias for ASCLIN8_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN8_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN8_LINBTIMER (ASCLIN8_LIN_BTIMER)

/** Alias for ASCLIN8_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN8_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN8_LINCON (ASCLIN8_LIN_CON)

/** Alias for ASCLIN8_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN8_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN8_LINHTIMER (ASCLIN8_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN8_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF0000EE8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN8_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0000E48u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN8_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000E10u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN8_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0000E44u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN8_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF0000E0Cu)) /* lint --e(923)*/

/******************************************************************************/
/*                             Define (2-ASCLIN9)                             */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define ASCLIN9_ACCEN0 ((*(volatile Ifx_ASCLIN_ACCEN0*)0xF0000FFCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define ASCLIN9_ACCEN1 ((*(volatile Ifx_ASCLIN_ACCEN1*)0xF0000FF8u)) /* lint --e(923)*/

/** 14, Bit Configuration Register */
#define ASCLIN9_BITCON ((*(volatile Ifx_ASCLIN_BITCON*)0xF0000F14u)) /* lint --e(923)*/

/** 24, Baud Rate Detection Register */
#define ASCLIN9_BRD ((*(volatile Ifx_ASCLIN_BRD*)0xF0000F24u)) /* lint --e(923)*/

/** 20, Baud Rate Generation Register */
#define ASCLIN9_BRG ((*(volatile Ifx_ASCLIN_BRG*)0xF0000F20u)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define ASCLIN9_CLC ((*(volatile Ifx_CLC2*)0xF0000F00u)) /* lint --e(923)*/

/** 4C, Clock Selection Register */
#define ASCLIN9_CSR ((*(volatile Ifx_ASCLIN_CSR*)0xF0000F4Cu)) /* lint --e(923)*/

/** 1C, Data Configuration Register */
#define ASCLIN9_DATCON ((*(volatile Ifx_ASCLIN_DATCON*)0xF0000F1Cu)) /* lint --e(923)*/

/** 34, Flags Register */
#define ASCLIN9_FLAGS ((*(volatile Ifx_ASCLIN_FLAGS*)0xF0000F34u)) /* lint --e(923)*/

/** 3C, Flags Clear Register */
#define ASCLIN9_FLAGSCLEAR ((*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF0000F3Cu)) /* lint --e(923)*/

/** 40, Flags Enable Register */
#define ASCLIN9_FLAGSENABLE ((*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000F40u)) /* lint --e(923)*/

/** 38, Flags Set Register */
#define ASCLIN9_FLAGSSET ((*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000F38u)) /* lint --e(923)*/

/** 18, Frame Control Register */
#define ASCLIN9_FRAMECON ((*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000F18u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define ASCLIN9_ID ((*(volatile Ifx_ID1*)0xF0000F08u)) /* lint --e(923)*/

/** 4, Input and Output Control Register */
#define ASCLIN9_IOCR ((*(volatile Ifx_ASCLIN_IOCR*)0xF0000F04u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define ASCLIN9_KRST0 ((*(volatile Ifx_ASCLIN_KRST0*)0xF0000FF4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define ASCLIN9_KRST1 ((*(volatile Ifx_ASCLIN_KRST1*)0xF0000FF0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define ASCLIN9_KRSTCLR ((*(volatile Ifx_ASCLIN_KRSTCLR*)0xF0000FECu)) /* lint --e(923)*/

/** 2C, LIN Break Timer Register */
#define ASCLIN9_LIN_BTIMER ((*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF0000F2Cu)) /* lint --e(923)*/

/** 28, LIN Control Register */
#define ASCLIN9_LIN_CON ((*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000F28u)) /* lint --e(923)*/

/** 30, LIN Header Timer Register */
#define ASCLIN9_LIN_HTIMER ((*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000F30u)) /* lint --e(923)*/

/** Alias for ASCLIN9_LIN_BTIMER.
 *  Note that this definition is obsolete, use ASCLIN9_LIN_BTIMER instead.
 * 2C, LIN Break Timer Register
 */
#define ASCLIN9_LINBTIMER (ASCLIN9_LIN_BTIMER)

/** Alias for ASCLIN9_LIN_CON.
 *  Note that this definition is obsolete, use ASCLIN9_LIN_CON instead.
 * 28, LIN Control Register
 */
#define ASCLIN9_LINCON (ASCLIN9_LIN_CON)

/** Alias for ASCLIN9_LIN_HTIMER.
 *  Note that this definition is obsolete, use ASCLIN9_LIN_HTIMER instead.
 * 30, LIN Header Timer Register
 */
#define ASCLIN9_LINHTIMER (ASCLIN9_LIN_HTIMER)

/** E8, OCDS Control and Status */
#define ASCLIN9_OCS ((*(volatile Ifx_ASCLIN_OCS*)0xF0000FE8u)) /* lint --e(923)*/

/** 48, Receive Data Register */
#define ASCLIN9_RXDATA ((*(volatile Ifx_ASCLIN_RXDATA*)0xF0000F48u)) /* lint --e(923)*/

/** 10, RX FIFO Configuration Register */
#define ASCLIN9_RXFIFOCON ((*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000F10u)) /* lint --e(923)*/

/** 44, Transmit Data Register */
#define ASCLIN9_TXDATA ((*(volatile Ifx_ASCLIN_TXDATA*)0xF0000F44u)) /* lint --e(923)*/

/** C, TX FIFO Configuration Register */
#define ASCLIN9_TXFIFOCON ((*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF0000F0Cu)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXASCLIN_REG_H */

