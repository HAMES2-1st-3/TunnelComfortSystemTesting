/**
 * \file IfxCcu6_reg.h
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
#ifndef IFXCCU6_REG_H
#define IFXCCU6_REG_H
/******************************************************************************/
#include "Ccu6/IfxCcu6_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** CCU6 object */
#define MODULE_CCU60 ((*(Ifx_CCU6*)0xF0002A00u)) /* lint --e(923)*/

/** CCU6 object */
#define MODULE_CCU61 ((*(Ifx_CCU6*)0xF0002B00u)) /* lint --e(923)*/

/** CCU6 object */
#define MODULE_CCU62 ((*(Ifx_CCU6*)0xF0002C00u)) /* lint --e(923)*/

/** CCU6 object */
#define MODULE_CCU63 ((*(Ifx_CCU6*)0xF0002D00u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-CCU60)                              */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define CCU60_ACCEN0 ((*(volatile Ifx_CCU6_ACCEN0*)0xF0002AFCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define CCU60_ACCEN1 ((*(volatile Ifx_CCU6_ACCEN1*)0xF0002AF8u)) /* lint --e(923)*/

/** 30, Capture/Compare Register for Channel CC60 */
#define CCU60_CC60R ((*(volatile Ifx_CCU6_CC60R*)0xF0002A30u)) /* lint --e(923)*/

/** 40, Capture/Compare Shadow Reg. for Channel CC60 */
#define CCU60_CC60SR ((*(volatile Ifx_CCU6_CC60SR*)0xF0002A40u)) /* lint --e(923)*/

/** 34, Capture/Compare Register for Channel CC61 */
#define CCU60_CC61R ((*(volatile Ifx_CCU6_CC61R*)0xF0002A34u)) /* lint --e(923)*/

/** 44, Capture/Compare Shadow Reg. for Channel CC61 */
#define CCU60_CC61SR ((*(volatile Ifx_CCU6_CC61SR*)0xF0002A44u)) /* lint --e(923)*/

/** 38, Capture/Compare Register for Channel CC62 */
#define CCU60_CC62R ((*(volatile Ifx_CCU6_CC62R*)0xF0002A38u)) /* lint --e(923)*/

/** 48, Capture/Compare Shadow Reg. for Channel CC62 */
#define CCU60_CC62SR ((*(volatile Ifx_CCU6_CC62SR*)0xF0002A48u)) /* lint --e(923)*/

/** 58, Compare Register for T13 */
#define CCU60_CC63R ((*(volatile Ifx_CCU6_CC63R*)0xF0002A58u)) /* lint --e(923)*/

/** 5C, Compare Shadow Register for T13 */
#define CCU60_CC63SR ((*(volatile Ifx_CCU6_CC63SR*)0xF0002A5Cu)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define CCU60_CLC ((*(volatile Ifx_CLC1*)0xF0002A00u)) /* lint --e(923)*/

/** 64, Compare State Modification Register */
#define CCU60_CMPMODIF ((*(volatile Ifx_CCU6_CMPMODIF*)0xF0002A64u)) /* lint --e(923)*/

/** 60, Compare State Register */
#define CCU60_CMPSTAT ((*(volatile Ifx_CCU6_CMPSTAT*)0xF0002A60u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define CCU60_ID ((*(volatile Ifx_ID2*)0xF0002A08u)) /* lint --e(923)*/

/** B0, Interrupt Enable Register */
#define CCU60_IEN ((*(volatile Ifx_CCU6_IEN*)0xF0002AB0u)) /* lint --e(923)*/

/** 98, Input Monitoring Register */
#define CCU60_IMON ((*(volatile Ifx_CCU6_IMON*)0xF0002A98u)) /* lint --e(923)*/

/** AC, Interrupt Node Pointer Register */
#define CCU60_INP ((*(volatile Ifx_CCU6_INP*)0xF0002AACu)) /* lint --e(923)*/

/** A0, Interrupt Status Register */
#define CCU60_IS ((*(volatile Ifx_CCU6_IS*)0xF0002AA0u)) /* lint --e(923)*/

/** A8, Interrupt Status Reset Register */
#define CCU60_ISR ((*(volatile Ifx_CCU6_ISR*)0xF0002AA8u)) /* lint --e(923)*/

/** A4, Interrupt Status Set Register */
#define CCU60_ISS ((*(volatile Ifx_CCU6_ISS*)0xF0002AA4u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define CCU60_KRST0 ((*(volatile Ifx_CCU6_KRST0*)0xF0002AF4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define CCU60_KRST1 ((*(volatile Ifx_CCU6_KRST1*)0xF0002AF0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define CCU60_KRSTCLR ((*(volatile Ifx_CCU6_KRSTCLR*)0xF0002AECu)) /* lint --e(923)*/

/** 1C, Kernel State Control Sensitivity Register */
#define CCU60_KSCSR ((*(volatile Ifx_CCU6_KSCSR*)0xF0002A1Cu)) /* lint --e(923)*/

/** 9C, Lost Indicator Register */
#define CCU60_LI ((*(volatile Ifx_CCU6_LI*)0xF0002A9Cu)) /* lint --e(923)*/

/** 4, Module Configuration Register */
#define CCU60_MCFG ((*(volatile Ifx_CCU6_MCFG*)0xF0002A04u)) /* lint --e(923)*/

/** 94, Multi-Channel Mode Control Register */
#define CCU60_MCMCTR ((*(volatile Ifx_CCU6_MCMCTR*)0xF0002A94u)) /* lint --e(923)*/

/** 90, Multi-Channel Mode Output Register */
#define CCU60_MCMOUT ((*(volatile Ifx_CCU6_MCMOUT*)0xF0002A90u)) /* lint --e(923)*/

/** 8C, Multi-Channel Mode Output Shadow Register */
#define CCU60_MCMOUTS ((*(volatile Ifx_CCU6_MCMOUTS*)0xF0002A8Cu)) /* lint --e(923)*/

/** 80, Modulation Control Register */
#define CCU60_MODCTR ((*(volatile Ifx_CCU6_MODCTR*)0xF0002A80u)) /* lint --e(923)*/

/** C, CCU60 Module Output Select Register */
#define CCU60_MOSEL ((*(volatile Ifx_CCU6_MOSEL*)0xF0002A0Cu)) /* lint --e(923)*/

/** E8, OCDS Control and Status Register */
#define CCU60_OCS ((*(volatile Ifx_CCU6_OCS*)0xF0002AE8u)) /* lint --e(923)*/

/** 10, Port Input Select Register 0 */
#define CCU60_PISEL0 ((*(volatile Ifx_CCU6_PISEL0*)0xF0002A10u)) /* lint --e(923)*/

/** 14, Port Input Select Register 2 */
#define CCU60_PISEL2 ((*(volatile Ifx_CCU6_PISEL2*)0xF0002A14u)) /* lint --e(923)*/

/** 88, Passive State Level Register */
#define CCU60_PSLR ((*(volatile Ifx_CCU6_PSLR*)0xF0002A88u)) /* lint --e(923)*/

/** 20, Timer T12 Counter Register */
#define CCU60_T12 ((*(volatile Ifx_CCU6_T12*)0xF0002A20u)) /* lint --e(923)*/

/** 28, Dead-Time Control Register for Timer12 */
#define CCU60_T12DTC ((*(volatile Ifx_CCU6_T12DTC*)0xF0002A28u)) /* lint --e(923)*/

/** 68, T12 Mode Select Register */
#define CCU60_T12MSEL ((*(volatile Ifx_CCU6_T12MSEL*)0xF0002A68u)) /* lint --e(923)*/

/** 24, Timer 12 Period Register */
#define CCU60_T12PR ((*(volatile Ifx_CCU6_T12PR*)0xF0002A24u)) /* lint --e(923)*/

/** 50, Timer T13 Counter Register */
#define CCU60_T13 ((*(volatile Ifx_CCU6_T13*)0xF0002A50u)) /* lint --e(923)*/

/** 54, Timer 13 Period Register */
#define CCU60_T13PR ((*(volatile Ifx_CCU6_T13PR*)0xF0002A54u)) /* lint --e(923)*/

/** 70, Timer Control Register 0 */
#define CCU60_TCTR0 ((*(volatile Ifx_CCU6_TCTR0*)0xF0002A70u)) /* lint --e(923)*/

/** 74, Timer Control Register 2 */
#define CCU60_TCTR2 ((*(volatile Ifx_CCU6_TCTR2*)0xF0002A74u)) /* lint --e(923)*/

/** 78, Timer Control Register 4 */
#define CCU60_TCTR4 ((*(volatile Ifx_CCU6_TCTR4*)0xF0002A78u)) /* lint --e(923)*/

/** 84, Trap Control Register */
#define CCU60_TRPCTR ((*(volatile Ifx_CCU6_TRPCTR*)0xF0002A84u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-CCU61)                              */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define CCU61_ACCEN0 ((*(volatile Ifx_CCU6_ACCEN0*)0xF0002BFCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define CCU61_ACCEN1 ((*(volatile Ifx_CCU6_ACCEN1*)0xF0002BF8u)) /* lint --e(923)*/

/** 30, Capture/Compare Register for Channel CC60 */
#define CCU61_CC60R ((*(volatile Ifx_CCU6_CC60R*)0xF0002B30u)) /* lint --e(923)*/

/** 40, Capture/Compare Shadow Reg. for Channel CC60 */
#define CCU61_CC60SR ((*(volatile Ifx_CCU6_CC60SR*)0xF0002B40u)) /* lint --e(923)*/

/** 34, Capture/Compare Register for Channel CC61 */
#define CCU61_CC61R ((*(volatile Ifx_CCU6_CC61R*)0xF0002B34u)) /* lint --e(923)*/

/** 44, Capture/Compare Shadow Reg. for Channel CC61 */
#define CCU61_CC61SR ((*(volatile Ifx_CCU6_CC61SR*)0xF0002B44u)) /* lint --e(923)*/

/** 38, Capture/Compare Register for Channel CC62 */
#define CCU61_CC62R ((*(volatile Ifx_CCU6_CC62R*)0xF0002B38u)) /* lint --e(923)*/

/** 48, Capture/Compare Shadow Reg. for Channel CC62 */
#define CCU61_CC62SR ((*(volatile Ifx_CCU6_CC62SR*)0xF0002B48u)) /* lint --e(923)*/

/** 58, Compare Register for T13 */
#define CCU61_CC63R ((*(volatile Ifx_CCU6_CC63R*)0xF0002B58u)) /* lint --e(923)*/

/** 5C, Compare Shadow Register for T13 */
#define CCU61_CC63SR ((*(volatile Ifx_CCU6_CC63SR*)0xF0002B5Cu)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define CCU61_CLC ((*(volatile Ifx_CLC1*)0xF0002B00u)) /* lint --e(923)*/

/** 64, Compare State Modification Register */
#define CCU61_CMPMODIF ((*(volatile Ifx_CCU6_CMPMODIF*)0xF0002B64u)) /* lint --e(923)*/

/** 60, Compare State Register */
#define CCU61_CMPSTAT ((*(volatile Ifx_CCU6_CMPSTAT*)0xF0002B60u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define CCU61_ID ((*(volatile Ifx_ID2*)0xF0002B08u)) /* lint --e(923)*/

/** B0, Interrupt Enable Register */
#define CCU61_IEN ((*(volatile Ifx_CCU6_IEN*)0xF0002BB0u)) /* lint --e(923)*/

/** 98, Input Monitoring Register */
#define CCU61_IMON ((*(volatile Ifx_CCU6_IMON*)0xF0002B98u)) /* lint --e(923)*/

/** AC, Interrupt Node Pointer Register */
#define CCU61_INP ((*(volatile Ifx_CCU6_INP*)0xF0002BACu)) /* lint --e(923)*/

/** A0, Interrupt Status Register */
#define CCU61_IS ((*(volatile Ifx_CCU6_IS*)0xF0002BA0u)) /* lint --e(923)*/

/** A8, Interrupt Status Reset Register */
#define CCU61_ISR ((*(volatile Ifx_CCU6_ISR*)0xF0002BA8u)) /* lint --e(923)*/

/** A4, Interrupt Status Set Register */
#define CCU61_ISS ((*(volatile Ifx_CCU6_ISS*)0xF0002BA4u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define CCU61_KRST0 ((*(volatile Ifx_CCU6_KRST0*)0xF0002BF4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define CCU61_KRST1 ((*(volatile Ifx_CCU6_KRST1*)0xF0002BF0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define CCU61_KRSTCLR ((*(volatile Ifx_CCU6_KRSTCLR*)0xF0002BECu)) /* lint --e(923)*/

/** 1C, Kernel State Control Sensitivity Register */
#define CCU61_KSCSR ((*(volatile Ifx_CCU6_KSCSR*)0xF0002B1Cu)) /* lint --e(923)*/

/** 9C, Lost Indicator Register */
#define CCU61_LI ((*(volatile Ifx_CCU6_LI*)0xF0002B9Cu)) /* lint --e(923)*/

/** 4, Module Configuration Register */
#define CCU61_MCFG ((*(volatile Ifx_CCU6_MCFG*)0xF0002B04u)) /* lint --e(923)*/

/** 94, Multi-Channel Mode Control Register */
#define CCU61_MCMCTR ((*(volatile Ifx_CCU6_MCMCTR*)0xF0002B94u)) /* lint --e(923)*/

/** 90, Multi-Channel Mode Output Register */
#define CCU61_MCMOUT ((*(volatile Ifx_CCU6_MCMOUT*)0xF0002B90u)) /* lint --e(923)*/

/** 8C, Multi-Channel Mode Output Shadow Register */
#define CCU61_MCMOUTS ((*(volatile Ifx_CCU6_MCMOUTS*)0xF0002B8Cu)) /* lint --e(923)*/

/** 80, Modulation Control Register */
#define CCU61_MODCTR ((*(volatile Ifx_CCU6_MODCTR*)0xF0002B80u)) /* lint --e(923)*/

/** C, CCU60 Module Output Select Register */
#define CCU61_MOSEL ((*(volatile Ifx_CCU6_MOSEL*)0xF0002B0Cu)) /* lint --e(923)*/

/** E8, OCDS Control and Status Register */
#define CCU61_OCS ((*(volatile Ifx_CCU6_OCS*)0xF0002BE8u)) /* lint --e(923)*/

/** 10, Port Input Select Register 0 */
#define CCU61_PISEL0 ((*(volatile Ifx_CCU6_PISEL0*)0xF0002B10u)) /* lint --e(923)*/

/** 14, Port Input Select Register 2 */
#define CCU61_PISEL2 ((*(volatile Ifx_CCU6_PISEL2*)0xF0002B14u)) /* lint --e(923)*/

/** 88, Passive State Level Register */
#define CCU61_PSLR ((*(volatile Ifx_CCU6_PSLR*)0xF0002B88u)) /* lint --e(923)*/

/** 20, Timer T12 Counter Register */
#define CCU61_T12 ((*(volatile Ifx_CCU6_T12*)0xF0002B20u)) /* lint --e(923)*/

/** 28, Dead-Time Control Register for Timer12 */
#define CCU61_T12DTC ((*(volatile Ifx_CCU6_T12DTC*)0xF0002B28u)) /* lint --e(923)*/

/** 68, T12 Mode Select Register */
#define CCU61_T12MSEL ((*(volatile Ifx_CCU6_T12MSEL*)0xF0002B68u)) /* lint --e(923)*/

/** 24, Timer 12 Period Register */
#define CCU61_T12PR ((*(volatile Ifx_CCU6_T12PR*)0xF0002B24u)) /* lint --e(923)*/

/** 50, Timer T13 Counter Register */
#define CCU61_T13 ((*(volatile Ifx_CCU6_T13*)0xF0002B50u)) /* lint --e(923)*/

/** 54, Timer 13 Period Register */
#define CCU61_T13PR ((*(volatile Ifx_CCU6_T13PR*)0xF0002B54u)) /* lint --e(923)*/

/** 70, Timer Control Register 0 */
#define CCU61_TCTR0 ((*(volatile Ifx_CCU6_TCTR0*)0xF0002B70u)) /* lint --e(923)*/

/** 74, Timer Control Register 2 */
#define CCU61_TCTR2 ((*(volatile Ifx_CCU6_TCTR2*)0xF0002B74u)) /* lint --e(923)*/

/** 78, Timer Control Register 4 */
#define CCU61_TCTR4 ((*(volatile Ifx_CCU6_TCTR4*)0xF0002B78u)) /* lint --e(923)*/

/** 84, Trap Control Register */
#define CCU61_TRPCTR ((*(volatile Ifx_CCU6_TRPCTR*)0xF0002B84u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-CCU62)                              */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define CCU62_ACCEN0 ((*(volatile Ifx_CCU6_ACCEN0*)0xF0002CFCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define CCU62_ACCEN1 ((*(volatile Ifx_CCU6_ACCEN1*)0xF0002CF8u)) /* lint --e(923)*/

/** 30, Capture/Compare Register for Channel CC60 */
#define CCU62_CC60R ((*(volatile Ifx_CCU6_CC60R*)0xF0002C30u)) /* lint --e(923)*/

/** 40, Capture/Compare Shadow Reg. for Channel CC60 */
#define CCU62_CC60SR ((*(volatile Ifx_CCU6_CC60SR*)0xF0002C40u)) /* lint --e(923)*/

/** 34, Capture/Compare Register for Channel CC61 */
#define CCU62_CC61R ((*(volatile Ifx_CCU6_CC61R*)0xF0002C34u)) /* lint --e(923)*/

/** 44, Capture/Compare Shadow Reg. for Channel CC61 */
#define CCU62_CC61SR ((*(volatile Ifx_CCU6_CC61SR*)0xF0002C44u)) /* lint --e(923)*/

/** 38, Capture/Compare Register for Channel CC62 */
#define CCU62_CC62R ((*(volatile Ifx_CCU6_CC62R*)0xF0002C38u)) /* lint --e(923)*/

/** 48, Capture/Compare Shadow Reg. for Channel CC62 */
#define CCU62_CC62SR ((*(volatile Ifx_CCU6_CC62SR*)0xF0002C48u)) /* lint --e(923)*/

/** 58, Compare Register for T13 */
#define CCU62_CC63R ((*(volatile Ifx_CCU6_CC63R*)0xF0002C58u)) /* lint --e(923)*/

/** 5C, Compare Shadow Register for T13 */
#define CCU62_CC63SR ((*(volatile Ifx_CCU6_CC63SR*)0xF0002C5Cu)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define CCU62_CLC ((*(volatile Ifx_CLC1*)0xF0002C00u)) /* lint --e(923)*/

/** 64, Compare State Modification Register */
#define CCU62_CMPMODIF ((*(volatile Ifx_CCU6_CMPMODIF*)0xF0002C64u)) /* lint --e(923)*/

/** 60, Compare State Register */
#define CCU62_CMPSTAT ((*(volatile Ifx_CCU6_CMPSTAT*)0xF0002C60u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define CCU62_ID ((*(volatile Ifx_ID2*)0xF0002C08u)) /* lint --e(923)*/

/** B0, Interrupt Enable Register */
#define CCU62_IEN ((*(volatile Ifx_CCU6_IEN*)0xF0002CB0u)) /* lint --e(923)*/

/** 98, Input Monitoring Register */
#define CCU62_IMON ((*(volatile Ifx_CCU6_IMON*)0xF0002C98u)) /* lint --e(923)*/

/** AC, Interrupt Node Pointer Register */
#define CCU62_INP ((*(volatile Ifx_CCU6_INP*)0xF0002CACu)) /* lint --e(923)*/

/** A0, Interrupt Status Register */
#define CCU62_IS ((*(volatile Ifx_CCU6_IS*)0xF0002CA0u)) /* lint --e(923)*/

/** A8, Interrupt Status Reset Register */
#define CCU62_ISR ((*(volatile Ifx_CCU6_ISR*)0xF0002CA8u)) /* lint --e(923)*/

/** A4, Interrupt Status Set Register */
#define CCU62_ISS ((*(volatile Ifx_CCU6_ISS*)0xF0002CA4u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define CCU62_KRST0 ((*(volatile Ifx_CCU6_KRST0*)0xF0002CF4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define CCU62_KRST1 ((*(volatile Ifx_CCU6_KRST1*)0xF0002CF0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define CCU62_KRSTCLR ((*(volatile Ifx_CCU6_KRSTCLR*)0xF0002CECu)) /* lint --e(923)*/

/** 1C, Kernel State Control Sensitivity Register */
#define CCU62_KSCSR ((*(volatile Ifx_CCU6_KSCSR*)0xF0002C1Cu)) /* lint --e(923)*/

/** 9C, Lost Indicator Register */
#define CCU62_LI ((*(volatile Ifx_CCU6_LI*)0xF0002C9Cu)) /* lint --e(923)*/

/** 4, Module Configuration Register */
#define CCU62_MCFG ((*(volatile Ifx_CCU6_MCFG*)0xF0002C04u)) /* lint --e(923)*/

/** 94, Multi-Channel Mode Control Register */
#define CCU62_MCMCTR ((*(volatile Ifx_CCU6_MCMCTR*)0xF0002C94u)) /* lint --e(923)*/

/** 90, Multi-Channel Mode Output Register */
#define CCU62_MCMOUT ((*(volatile Ifx_CCU6_MCMOUT*)0xF0002C90u)) /* lint --e(923)*/

/** 8C, Multi-Channel Mode Output Shadow Register */
#define CCU62_MCMOUTS ((*(volatile Ifx_CCU6_MCMOUTS*)0xF0002C8Cu)) /* lint --e(923)*/

/** 80, Modulation Control Register */
#define CCU62_MODCTR ((*(volatile Ifx_CCU6_MODCTR*)0xF0002C80u)) /* lint --e(923)*/

/** C, CCU60 Module Output Select Register */
#define CCU62_MOSEL ((*(volatile Ifx_CCU6_MOSEL*)0xF0002C0Cu)) /* lint --e(923)*/

/** E8, OCDS Control and Status Register */
#define CCU62_OCS ((*(volatile Ifx_CCU6_OCS*)0xF0002CE8u)) /* lint --e(923)*/

/** 10, Port Input Select Register 0 */
#define CCU62_PISEL0 ((*(volatile Ifx_CCU6_PISEL0*)0xF0002C10u)) /* lint --e(923)*/

/** 14, Port Input Select Register 2 */
#define CCU62_PISEL2 ((*(volatile Ifx_CCU6_PISEL2*)0xF0002C14u)) /* lint --e(923)*/

/** 88, Passive State Level Register */
#define CCU62_PSLR ((*(volatile Ifx_CCU6_PSLR*)0xF0002C88u)) /* lint --e(923)*/

/** 20, Timer T12 Counter Register */
#define CCU62_T12 ((*(volatile Ifx_CCU6_T12*)0xF0002C20u)) /* lint --e(923)*/

/** 28, Dead-Time Control Register for Timer12 */
#define CCU62_T12DTC ((*(volatile Ifx_CCU6_T12DTC*)0xF0002C28u)) /* lint --e(923)*/

/** 68, T12 Mode Select Register */
#define CCU62_T12MSEL ((*(volatile Ifx_CCU6_T12MSEL*)0xF0002C68u)) /* lint --e(923)*/

/** 24, Timer 12 Period Register */
#define CCU62_T12PR ((*(volatile Ifx_CCU6_T12PR*)0xF0002C24u)) /* lint --e(923)*/

/** 50, Timer T13 Counter Register */
#define CCU62_T13 ((*(volatile Ifx_CCU6_T13*)0xF0002C50u)) /* lint --e(923)*/

/** 54, Timer 13 Period Register */
#define CCU62_T13PR ((*(volatile Ifx_CCU6_T13PR*)0xF0002C54u)) /* lint --e(923)*/

/** 70, Timer Control Register 0 */
#define CCU62_TCTR0 ((*(volatile Ifx_CCU6_TCTR0*)0xF0002C70u)) /* lint --e(923)*/

/** 74, Timer Control Register 2 */
#define CCU62_TCTR2 ((*(volatile Ifx_CCU6_TCTR2*)0xF0002C74u)) /* lint --e(923)*/

/** 78, Timer Control Register 4 */
#define CCU62_TCTR4 ((*(volatile Ifx_CCU6_TCTR4*)0xF0002C78u)) /* lint --e(923)*/

/** 84, Trap Control Register */
#define CCU62_TRPCTR ((*(volatile Ifx_CCU6_TRPCTR*)0xF0002C84u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-CCU63)                              */
/******************************************************************************/

/** FC, Access Enable Register 0 */
#define CCU63_ACCEN0 ((*(volatile Ifx_CCU6_ACCEN0*)0xF0002DFCu)) /* lint --e(923)*/

/** F8, Access Enable Register 1 */
#define CCU63_ACCEN1 ((*(volatile Ifx_CCU6_ACCEN1*)0xF0002DF8u)) /* lint --e(923)*/

/** 30, Capture/Compare Register for Channel CC60 */
#define CCU63_CC60R ((*(volatile Ifx_CCU6_CC60R*)0xF0002D30u)) /* lint --e(923)*/

/** 40, Capture/Compare Shadow Reg. for Channel CC60 */
#define CCU63_CC60SR ((*(volatile Ifx_CCU6_CC60SR*)0xF0002D40u)) /* lint --e(923)*/

/** 34, Capture/Compare Register for Channel CC61 */
#define CCU63_CC61R ((*(volatile Ifx_CCU6_CC61R*)0xF0002D34u)) /* lint --e(923)*/

/** 44, Capture/Compare Shadow Reg. for Channel CC61 */
#define CCU63_CC61SR ((*(volatile Ifx_CCU6_CC61SR*)0xF0002D44u)) /* lint --e(923)*/

/** 38, Capture/Compare Register for Channel CC62 */
#define CCU63_CC62R ((*(volatile Ifx_CCU6_CC62R*)0xF0002D38u)) /* lint --e(923)*/

/** 48, Capture/Compare Shadow Reg. for Channel CC62 */
#define CCU63_CC62SR ((*(volatile Ifx_CCU6_CC62SR*)0xF0002D48u)) /* lint --e(923)*/

/** 58, Compare Register for T13 */
#define CCU63_CC63R ((*(volatile Ifx_CCU6_CC63R*)0xF0002D58u)) /* lint --e(923)*/

/** 5C, Compare Shadow Register for T13 */
#define CCU63_CC63SR ((*(volatile Ifx_CCU6_CC63SR*)0xF0002D5Cu)) /* lint --e(923)*/

/** 0, Clock Control Register */
#define CCU63_CLC ((*(volatile Ifx_CLC1*)0xF0002D00u)) /* lint --e(923)*/

/** 64, Compare State Modification Register */
#define CCU63_CMPMODIF ((*(volatile Ifx_CCU6_CMPMODIF*)0xF0002D64u)) /* lint --e(923)*/

/** 60, Compare State Register */
#define CCU63_CMPSTAT ((*(volatile Ifx_CCU6_CMPSTAT*)0xF0002D60u)) /* lint --e(923)*/

/** 8, Module Identification Register */
#define CCU63_ID ((*(volatile Ifx_ID2*)0xF0002D08u)) /* lint --e(923)*/

/** B0, Interrupt Enable Register */
#define CCU63_IEN ((*(volatile Ifx_CCU6_IEN*)0xF0002DB0u)) /* lint --e(923)*/

/** 98, Input Monitoring Register */
#define CCU63_IMON ((*(volatile Ifx_CCU6_IMON*)0xF0002D98u)) /* lint --e(923)*/

/** AC, Interrupt Node Pointer Register */
#define CCU63_INP ((*(volatile Ifx_CCU6_INP*)0xF0002DACu)) /* lint --e(923)*/

/** A0, Interrupt Status Register */
#define CCU63_IS ((*(volatile Ifx_CCU6_IS*)0xF0002DA0u)) /* lint --e(923)*/

/** A8, Interrupt Status Reset Register */
#define CCU63_ISR ((*(volatile Ifx_CCU6_ISR*)0xF0002DA8u)) /* lint --e(923)*/

/** A4, Interrupt Status Set Register */
#define CCU63_ISS ((*(volatile Ifx_CCU6_ISS*)0xF0002DA4u)) /* lint --e(923)*/

/** F4, Kernel Reset Register 0 */
#define CCU63_KRST0 ((*(volatile Ifx_CCU6_KRST0*)0xF0002DF4u)) /* lint --e(923)*/

/** F0, Kernel Reset Register 1 */
#define CCU63_KRST1 ((*(volatile Ifx_CCU6_KRST1*)0xF0002DF0u)) /* lint --e(923)*/

/** EC, Kernel Reset Status Clear Register */
#define CCU63_KRSTCLR ((*(volatile Ifx_CCU6_KRSTCLR*)0xF0002DECu)) /* lint --e(923)*/

/** 1C, Kernel State Control Sensitivity Register */
#define CCU63_KSCSR ((*(volatile Ifx_CCU6_KSCSR*)0xF0002D1Cu)) /* lint --e(923)*/

/** 9C, Lost Indicator Register */
#define CCU63_LI ((*(volatile Ifx_CCU6_LI*)0xF0002D9Cu)) /* lint --e(923)*/

/** 4, Module Configuration Register */
#define CCU63_MCFG ((*(volatile Ifx_CCU6_MCFG*)0xF0002D04u)) /* lint --e(923)*/

/** 94, Multi-Channel Mode Control Register */
#define CCU63_MCMCTR ((*(volatile Ifx_CCU6_MCMCTR*)0xF0002D94u)) /* lint --e(923)*/

/** 90, Multi-Channel Mode Output Register */
#define CCU63_MCMOUT ((*(volatile Ifx_CCU6_MCMOUT*)0xF0002D90u)) /* lint --e(923)*/

/** 8C, Multi-Channel Mode Output Shadow Register */
#define CCU63_MCMOUTS ((*(volatile Ifx_CCU6_MCMOUTS*)0xF0002D8Cu)) /* lint --e(923)*/

/** 80, Modulation Control Register */
#define CCU63_MODCTR ((*(volatile Ifx_CCU6_MODCTR*)0xF0002D80u)) /* lint --e(923)*/

/** C, CCU60 Module Output Select Register */
#define CCU63_MOSEL ((*(volatile Ifx_CCU6_MOSEL*)0xF0002D0Cu)) /* lint --e(923)*/

/** E8, OCDS Control and Status Register */
#define CCU63_OCS ((*(volatile Ifx_CCU6_OCS*)0xF0002DE8u)) /* lint --e(923)*/

/** 10, Port Input Select Register 0 */
#define CCU63_PISEL0 ((*(volatile Ifx_CCU6_PISEL0*)0xF0002D10u)) /* lint --e(923)*/

/** 14, Port Input Select Register 2 */
#define CCU63_PISEL2 ((*(volatile Ifx_CCU6_PISEL2*)0xF0002D14u)) /* lint --e(923)*/

/** 88, Passive State Level Register */
#define CCU63_PSLR ((*(volatile Ifx_CCU6_PSLR*)0xF0002D88u)) /* lint --e(923)*/

/** 20, Timer T12 Counter Register */
#define CCU63_T12 ((*(volatile Ifx_CCU6_T12*)0xF0002D20u)) /* lint --e(923)*/

/** 28, Dead-Time Control Register for Timer12 */
#define CCU63_T12DTC ((*(volatile Ifx_CCU6_T12DTC*)0xF0002D28u)) /* lint --e(923)*/

/** 68, T12 Mode Select Register */
#define CCU63_T12MSEL ((*(volatile Ifx_CCU6_T12MSEL*)0xF0002D68u)) /* lint --e(923)*/

/** 24, Timer 12 Period Register */
#define CCU63_T12PR ((*(volatile Ifx_CCU6_T12PR*)0xF0002D24u)) /* lint --e(923)*/

/** 50, Timer T13 Counter Register */
#define CCU63_T13 ((*(volatile Ifx_CCU6_T13*)0xF0002D50u)) /* lint --e(923)*/

/** 54, Timer 13 Period Register */
#define CCU63_T13PR ((*(volatile Ifx_CCU6_T13PR*)0xF0002D54u)) /* lint --e(923)*/

/** 70, Timer Control Register 0 */
#define CCU63_TCTR0 ((*(volatile Ifx_CCU6_TCTR0*)0xF0002D70u)) /* lint --e(923)*/

/** 74, Timer Control Register 2 */
#define CCU63_TCTR2 ((*(volatile Ifx_CCU6_TCTR2*)0xF0002D74u)) /* lint --e(923)*/

/** 78, Timer Control Register 4 */
#define CCU63_TCTR4 ((*(volatile Ifx_CCU6_TCTR4*)0xF0002D78u)) /* lint --e(923)*/

/** 84, Trap Control Register */
#define CCU63_TRPCTR ((*(volatile Ifx_CCU6_TRPCTR*)0xF0002D84u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXCCU6_REG_H */

