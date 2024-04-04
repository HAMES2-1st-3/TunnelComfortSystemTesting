/**
 * \file IfxPort_reg.h
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
#ifndef IFXPORT_REG_H
#define IFXPORT_REG_H
/******************************************************************************/
#include "Port/IfxPort_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** Port object */
#define MODULE_P00 ((*(Ifx_P*)0xF003A000u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P01 ((*(Ifx_P*)0xF003A100u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P02 ((*(Ifx_P*)0xF003A200u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P10 ((*(Ifx_P*)0xF003B000u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P11 ((*(Ifx_P*)0xF003B100u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P12 ((*(Ifx_P*)0xF003B200u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P13 ((*(Ifx_P*)0xF003B300u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P14 ((*(Ifx_P*)0xF003B400u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P15 ((*(Ifx_P*)0xF003B500u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P20 ((*(Ifx_P*)0xF003C000u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P21 ((*(Ifx_P*)0xF003C100u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P22 ((*(Ifx_P*)0xF003C200u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P23 ((*(Ifx_P*)0xF003C300u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P30 ((*(Ifx_P*)0xF003D000u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P32 ((*(Ifx_P*)0xF003D200u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P33 ((*(Ifx_P*)0xF003D300u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P34 ((*(Ifx_P*)0xF003D400u)) /* lint --e(923)*/

/** Port object */
#define MODULE_P40 ((*(Ifx_P_ERROR*)0xF003E000u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P00)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P00_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003A0FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P00_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003A0F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P00_ESR ((*(volatile Ifx_P_ESR*)0xF003A050u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P00_ID ((*(volatile Ifx_ID1*)0xF003A008u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P00_IN ((*(volatile Ifx_P_IN*)0xF003A024u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P00_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003A010u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P00_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003A01Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P00_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003A014u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P00_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003A018u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P00_OMCR ((*(volatile Ifx_P_OMCR*)0xF003A094u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P00_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003A080u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P00_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003A08Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P00_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003A084u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P00_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003A088u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P00_OMR ((*(volatile Ifx_P_OMR*)0xF003A004u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P00_OMSR ((*(volatile Ifx_P_OMSR*)0xF003A090u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P00_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003A070u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P00_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003A07Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P00_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003A074u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P00_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003A078u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P00_OUT ((*(volatile Ifx_P_OUT*)0xF003A000u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P00_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003A040u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P00_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003A044u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P01)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P01_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003A1FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P01_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003A1F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P01_ESR ((*(volatile Ifx_P_ESR*)0xF003A150u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P01_ID ((*(volatile Ifx_ID1*)0xF003A108u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P01_IN ((*(volatile Ifx_P_IN*)0xF003A124u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P01_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003A110u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P01_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003A11Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P01_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003A114u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P01_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003A118u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P01_OMCR ((*(volatile Ifx_P_OMCR*)0xF003A194u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P01_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003A180u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P01_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003A18Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P01_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003A184u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P01_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003A188u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P01_OMR ((*(volatile Ifx_P_OMR*)0xF003A104u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P01_OMSR ((*(volatile Ifx_P_OMSR*)0xF003A190u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P01_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003A170u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P01_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003A17Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P01_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003A174u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P01_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003A178u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P01_OUT ((*(volatile Ifx_P_OUT*)0xF003A100u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P01_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003A140u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P01_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003A144u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P02)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P02_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003A2FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P02_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003A2F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P02_ESR ((*(volatile Ifx_P_ESR*)0xF003A250u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P02_ID ((*(volatile Ifx_ID1*)0xF003A208u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P02_IN ((*(volatile Ifx_P_IN*)0xF003A224u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P02_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003A210u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P02_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003A21Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P02_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003A214u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P02_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003A218u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P02_OMCR ((*(volatile Ifx_P_OMCR*)0xF003A294u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P02_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003A280u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P02_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003A28Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P02_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003A284u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P02_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003A288u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P02_OMR ((*(volatile Ifx_P_OMR*)0xF003A204u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P02_OMSR ((*(volatile Ifx_P_OMSR*)0xF003A290u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P02_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003A270u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P02_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003A27Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P02_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003A274u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P02_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003A278u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P02_OUT ((*(volatile Ifx_P_OUT*)0xF003A200u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P02_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003A240u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P02_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003A244u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P10)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P10_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003B0FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P10_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003B0F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P10_ESR ((*(volatile Ifx_P_ESR*)0xF003B050u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P10_ID ((*(volatile Ifx_ID1*)0xF003B008u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P10_IN ((*(volatile Ifx_P_IN*)0xF003B024u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P10_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003B010u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P10_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003B01Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P10_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003B014u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P10_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003B018u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P10_OMCR ((*(volatile Ifx_P_OMCR*)0xF003B094u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P10_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003B080u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P10_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003B08Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P10_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003B084u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P10_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003B088u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P10_OMR ((*(volatile Ifx_P_OMR*)0xF003B004u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P10_OMSR ((*(volatile Ifx_P_OMSR*)0xF003B090u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P10_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003B070u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P10_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003B07Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P10_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003B074u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P10_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003B078u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P10_OUT ((*(volatile Ifx_P_OUT*)0xF003B000u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P10_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003B040u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P10_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003B044u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P11)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P11_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003B1FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P11_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003B1F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P11_ESR ((*(volatile Ifx_P_ESR*)0xF003B150u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P11_ID ((*(volatile Ifx_ID1*)0xF003B108u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P11_IN ((*(volatile Ifx_P_IN*)0xF003B124u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P11_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003B110u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P11_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003B11Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P11_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003B114u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P11_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003B118u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P11_OMCR ((*(volatile Ifx_P_OMCR*)0xF003B194u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P11_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003B180u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P11_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003B18Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P11_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003B184u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P11_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003B188u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P11_OMR ((*(volatile Ifx_P_OMR*)0xF003B104u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P11_OMSR ((*(volatile Ifx_P_OMSR*)0xF003B190u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P11_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003B170u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P11_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003B17Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P11_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003B174u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P11_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003B178u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P11_OUT ((*(volatile Ifx_P_OUT*)0xF003B100u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P11_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003B140u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P11_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003B144u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P12)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P12_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003B2FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P12_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003B2F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P12_ESR ((*(volatile Ifx_P_ESR*)0xF003B250u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P12_ID ((*(volatile Ifx_ID1*)0xF003B208u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P12_IN ((*(volatile Ifx_P_IN*)0xF003B224u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P12_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003B210u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P12_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003B21Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P12_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003B214u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P12_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003B218u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P12_OMCR ((*(volatile Ifx_P_OMCR*)0xF003B294u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P12_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003B280u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P12_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003B28Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P12_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003B284u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P12_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003B288u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P12_OMR ((*(volatile Ifx_P_OMR*)0xF003B204u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P12_OMSR ((*(volatile Ifx_P_OMSR*)0xF003B290u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P12_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003B270u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P12_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003B27Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P12_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003B274u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P12_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003B278u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P12_OUT ((*(volatile Ifx_P_OUT*)0xF003B200u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P12_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003B240u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P12_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003B244u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P13)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P13_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003B3FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P13_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003B3F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P13_ESR ((*(volatile Ifx_P_ESR*)0xF003B350u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P13_ID ((*(volatile Ifx_ID1*)0xF003B308u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P13_IN ((*(volatile Ifx_P_IN*)0xF003B324u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P13_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003B310u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P13_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003B31Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P13_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003B314u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P13_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003B318u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P13_OMCR ((*(volatile Ifx_P_OMCR*)0xF003B394u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P13_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003B380u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P13_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003B38Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P13_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003B384u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P13_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003B388u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P13_OMR ((*(volatile Ifx_P_OMR*)0xF003B304u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P13_OMSR ((*(volatile Ifx_P_OMSR*)0xF003B390u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P13_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003B370u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P13_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003B37Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P13_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003B374u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P13_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003B378u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P13_OUT ((*(volatile Ifx_P_OUT*)0xF003B300u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P13_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003B340u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P13_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003B344u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P14)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P14_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003B4FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P14_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003B4F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P14_ESR ((*(volatile Ifx_P_ESR*)0xF003B450u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P14_ID ((*(volatile Ifx_ID1*)0xF003B408u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P14_IN ((*(volatile Ifx_P_IN*)0xF003B424u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P14_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003B410u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P14_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003B41Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P14_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003B414u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P14_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003B418u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P14_OMCR ((*(volatile Ifx_P_OMCR*)0xF003B494u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P14_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003B480u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P14_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003B48Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P14_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003B484u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P14_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003B488u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P14_OMR ((*(volatile Ifx_P_OMR*)0xF003B404u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P14_OMSR ((*(volatile Ifx_P_OMSR*)0xF003B490u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P14_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003B470u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P14_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003B47Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P14_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003B474u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P14_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003B478u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P14_OUT ((*(volatile Ifx_P_OUT*)0xF003B400u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P14_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003B440u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P14_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003B444u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P15)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P15_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003B5FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P15_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003B5F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P15_ESR ((*(volatile Ifx_P_ESR*)0xF003B550u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P15_ID ((*(volatile Ifx_ID1*)0xF003B508u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P15_IN ((*(volatile Ifx_P_IN*)0xF003B524u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P15_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003B510u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P15_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003B51Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P15_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003B514u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P15_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003B518u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P15_OMCR ((*(volatile Ifx_P_OMCR*)0xF003B594u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P15_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003B580u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P15_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003B58Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P15_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003B584u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P15_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003B588u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P15_OMR ((*(volatile Ifx_P_OMR*)0xF003B504u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P15_OMSR ((*(volatile Ifx_P_OMSR*)0xF003B590u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P15_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003B570u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P15_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003B57Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P15_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003B574u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P15_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003B578u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P15_OUT ((*(volatile Ifx_P_OUT*)0xF003B500u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P15_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003B540u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P15_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003B544u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P20)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P20_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003C0FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P20_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003C0F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P20_ESR ((*(volatile Ifx_P_ESR*)0xF003C050u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P20_ID ((*(volatile Ifx_ID1*)0xF003C008u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P20_IN ((*(volatile Ifx_P_IN*)0xF003C024u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P20_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003C010u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P20_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003C01Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P20_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003C014u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P20_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003C018u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P20_OMCR ((*(volatile Ifx_P_OMCR*)0xF003C094u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P20_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003C080u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P20_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003C08Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P20_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003C084u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P20_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003C088u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P20_OMR ((*(volatile Ifx_P_OMR*)0xF003C004u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P20_OMSR ((*(volatile Ifx_P_OMSR*)0xF003C090u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P20_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003C070u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P20_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003C07Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P20_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003C074u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P20_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003C078u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P20_OUT ((*(volatile Ifx_P_OUT*)0xF003C000u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P20_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003C040u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P20_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003C044u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P21)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P21_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003C1FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P21_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003C1F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P21_ESR ((*(volatile Ifx_P_ESR*)0xF003C150u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P21_ID ((*(volatile Ifx_ID1*)0xF003C108u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P21_IN ((*(volatile Ifx_P_IN*)0xF003C124u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P21_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003C110u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P21_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003C11Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P21_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003C114u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P21_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003C118u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P21_OMCR ((*(volatile Ifx_P_OMCR*)0xF003C194u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P21_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003C180u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P21_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003C18Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P21_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003C184u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P21_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003C188u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P21_OMR ((*(volatile Ifx_P_OMR*)0xF003C104u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P21_OMSR ((*(volatile Ifx_P_OMSR*)0xF003C190u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P21_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003C170u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P21_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003C17Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P21_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003C174u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P21_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003C178u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P21_OUT ((*(volatile Ifx_P_OUT*)0xF003C100u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P21_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003C140u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P21_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003C144u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P22)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P22_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003C2FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P22_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003C2F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P22_ESR ((*(volatile Ifx_P_ESR*)0xF003C250u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P22_ID ((*(volatile Ifx_ID1*)0xF003C208u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P22_IN ((*(volatile Ifx_P_IN*)0xF003C224u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P22_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003C210u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P22_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003C21Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P22_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003C214u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P22_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003C218u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P22_OMCR ((*(volatile Ifx_P_OMCR*)0xF003C294u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P22_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003C280u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P22_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003C28Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P22_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003C284u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P22_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003C288u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P22_OMR ((*(volatile Ifx_P_OMR*)0xF003C204u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P22_OMSR ((*(volatile Ifx_P_OMSR*)0xF003C290u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P22_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003C270u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P22_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003C27Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P22_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003C274u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P22_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003C278u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P22_OUT ((*(volatile Ifx_P_OUT*)0xF003C200u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P22_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003C240u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P22_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003C244u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P23)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P23_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003C3FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P23_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003C3F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P23_ESR ((*(volatile Ifx_P_ESR*)0xF003C350u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P23_ID ((*(volatile Ifx_ID1*)0xF003C308u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P23_IN ((*(volatile Ifx_P_IN*)0xF003C324u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P23_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003C310u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P23_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003C31Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P23_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003C314u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P23_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003C318u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P23_OMCR ((*(volatile Ifx_P_OMCR*)0xF003C394u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P23_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003C380u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P23_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003C38Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P23_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003C384u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P23_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003C388u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P23_OMR ((*(volatile Ifx_P_OMR*)0xF003C304u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P23_OMSR ((*(volatile Ifx_P_OMSR*)0xF003C390u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P23_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003C370u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P23_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003C37Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P23_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003C374u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P23_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003C378u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P23_OUT ((*(volatile Ifx_P_OUT*)0xF003C300u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P23_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003C340u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P23_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003C344u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P30)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P30_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003D0FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P30_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003D0F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P30_ESR ((*(volatile Ifx_P_ESR*)0xF003D050u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P30_ID ((*(volatile Ifx_ID1*)0xF003D008u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P30_IN ((*(volatile Ifx_P_IN*)0xF003D024u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P30_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003D010u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P30_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003D01Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P30_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003D014u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P30_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003D018u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P30_OMCR ((*(volatile Ifx_P_OMCR*)0xF003D094u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P30_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003D080u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P30_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003D08Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P30_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003D084u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P30_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003D088u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P30_OMR ((*(volatile Ifx_P_OMR*)0xF003D004u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P30_OMSR ((*(volatile Ifx_P_OMSR*)0xF003D090u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P30_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003D070u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P30_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003D07Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P30_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003D074u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P30_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003D078u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P30_OUT ((*(volatile Ifx_P_OUT*)0xF003D000u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P30_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003D040u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P30_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003D044u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P32)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P32_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003D2FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P32_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003D2F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P32_ESR ((*(volatile Ifx_P_ESR*)0xF003D250u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P32_ID ((*(volatile Ifx_ID1*)0xF003D208u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P32_IN ((*(volatile Ifx_P_IN*)0xF003D224u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P32_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003D210u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P32_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003D21Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P32_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003D214u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P32_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003D218u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P32_OMCR ((*(volatile Ifx_P_OMCR*)0xF003D294u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P32_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003D280u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P32_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003D28Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P32_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003D284u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P32_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003D288u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P32_OMR ((*(volatile Ifx_P_OMR*)0xF003D204u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P32_OMSR ((*(volatile Ifx_P_OMSR*)0xF003D290u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P32_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003D270u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P32_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003D27Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P32_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003D274u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P32_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003D278u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P32_OUT ((*(volatile Ifx_P_OUT*)0xF003D200u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P32_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003D240u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P32_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003D244u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P33)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P33_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003D3FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P33_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003D3F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P33_ESR ((*(volatile Ifx_P_ESR*)0xF003D350u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P33_ID ((*(volatile Ifx_ID1*)0xF003D308u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P33_IN ((*(volatile Ifx_P_IN*)0xF003D324u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P33_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003D310u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P33_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003D31Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P33_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003D314u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P33_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003D318u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P33_OMCR ((*(volatile Ifx_P_OMCR*)0xF003D394u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P33_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003D380u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P33_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003D38Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P33_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003D384u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P33_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003D388u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P33_OMR ((*(volatile Ifx_P_OMR*)0xF003D304u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P33_OMSR ((*(volatile Ifx_P_OMSR*)0xF003D390u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P33_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003D370u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P33_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003D37Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P33_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003D374u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P33_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003D378u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P33_OUT ((*(volatile Ifx_P_OUT*)0xF003D300u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P33_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003D340u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P33_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003D344u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P34)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P34_ACCEN0 ((*(volatile Ifx_P_ACCEN0*)0xF003D4FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P34_ACCEN1 ((*(volatile Ifx_P_ACCEN1*)0xF003D4F8u)) /* lint --e(923)*/

/** 50, Port Emergency Stop Register */
#define P34_ESR ((*(volatile Ifx_P_ESR*)0xF003D450u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P34_ID ((*(volatile Ifx_ID1*)0xF003D408u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P34_IN ((*(volatile Ifx_P_IN*)0xF003D424u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P34_IOCR0 ((*(volatile Ifx_P_IOCR0*)0xF003D410u)) /* lint --e(923)*/

/** 1C, Port Input/Output Control Register 12 */
#define P34_IOCR12 ((*(volatile Ifx_P_IOCR12*)0xF003D41Cu)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P34_IOCR4 ((*(volatile Ifx_P_IOCR4*)0xF003D414u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P34_IOCR8 ((*(volatile Ifx_P_IOCR8*)0xF003D418u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P34_OMCR ((*(volatile Ifx_P_OMCR*)0xF003D494u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P34_OMCR0 ((*(volatile Ifx_P_OMCR0*)0xF003D480u)) /* lint --e(923)*/

/** 8C, Port Output Modification Clear Register 12 */
#define P34_OMCR12 ((*(volatile Ifx_P_OMCR12*)0xF003D48Cu)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P34_OMCR4 ((*(volatile Ifx_P_OMCR4*)0xF003D484u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P34_OMCR8 ((*(volatile Ifx_P_OMCR8*)0xF003D488u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P34_OMR ((*(volatile Ifx_P_OMR*)0xF003D404u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P34_OMSR ((*(volatile Ifx_P_OMSR*)0xF003D490u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P34_OMSR0 ((*(volatile Ifx_P_OMSR0*)0xF003D470u)) /* lint --e(923)*/

/** 7C, Port Output Modification Set Register 12 */
#define P34_OMSR12 ((*(volatile Ifx_P_OMSR12*)0xF003D47Cu)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P34_OMSR4 ((*(volatile Ifx_P_OMSR4*)0xF003D474u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P34_OMSR8 ((*(volatile Ifx_P_OMSR8*)0xF003D478u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P34_OUT ((*(volatile Ifx_P_OUT*)0xF003D400u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P34_PDR0 ((*(volatile Ifx_P_PDR0*)0xF003D440u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P34_PDR1 ((*(volatile Ifx_P_PDR1*)0xF003D444u)) /* lint --e(923)*/

/******************************************************************************/
/*                               Define (2-P40)                               */
/******************************************************************************/

/** FC, Port Access Enable Register 0 */
#define P40_ACCEN0 ((*(volatile unsigned int*)0xF003E0FCu)) /* lint --e(923)*/

/** F8, Port Access Enable Register 1 */
#define P40_ACCEN1 ((*(volatile unsigned int*)0xF003E0F8u)) /* lint --e(923)*/

/** 8, Identification Register */
#define P40_ID ((*(volatile unsigned int*)0xF003E008u)) /* lint --e(923)*/

/** 24, Port Input Register */
#define P40_IN ((*(volatile unsigned int*)0xF003E024u)) /* lint --e(923)*/

/** 10, Port Input/Output Control Register 0 */
#define P40_IOCR0 ((*(volatile unsigned int*)0xF003E010u)) /* lint --e(923)*/

/** 14, Port Input/Output Control Register 4 */
#define P40_IOCR4 ((*(volatile unsigned int*)0xF003E014u)) /* lint --e(923)*/

/** 18, Port Input/Output Control Register 8 */
#define P40_IOCR8 ((*(volatile unsigned int*)0xF003E018u)) /* lint --e(923)*/

/** 94, Port Output Modification Clear Register */
#define P40_OMCR ((*(volatile unsigned int*)0xF003E094u)) /* lint --e(923)*/

/** 80, Port Output Modification Clear Register 0 */
#define P40_OMCR0 ((*(volatile unsigned int*)0xF003E080u)) /* lint --e(923)*/

/** 84, Port Output Modification Clear Register 4 */
#define P40_OMCR4 ((*(volatile unsigned int*)0xF003E084u)) /* lint --e(923)*/

/** 88, Port Output Modification Clear Register 8 */
#define P40_OMCR8 ((*(volatile unsigned int*)0xF003E088u)) /* lint --e(923)*/

/** 4, Port Output Modification Register */
#define P40_OMR ((*(volatile unsigned int*)0xF003E004u)) /* lint --e(923)*/

/** 90, Port Output Modification Set Register */
#define P40_OMSR ((*(volatile unsigned int*)0xF003E090u)) /* lint --e(923)*/

/** 70, Port Output Modification Set Register 0 */
#define P40_OMSR0 ((*(volatile unsigned int*)0xF003E070u)) /* lint --e(923)*/

/** 74, Port Output Modification Set Register 4 */
#define P40_OMSR4 ((*(volatile unsigned int*)0xF003E074u)) /* lint --e(923)*/

/** 78, Port Output Modification Set Register 8 */
#define P40_OMSR8 ((*(volatile unsigned int*)0xF003E078u)) /* lint --e(923)*/

/** 0, Port Output Register */
#define P40_OUT ((*(volatile unsigned int*)0xF003E000u)) /* lint --e(923)*/

/** 60, Port Pin Function Decision Control Register */
#define P40_PDISC ((*(volatile unsigned int*)0xF003E060u)) /* lint --e(923)*/

/** 40, Port Pad Driver Mode 0 Register */
#define P40_PDR0 ((*(volatile unsigned int*)0xF003E040u)) /* lint --e(923)*/

/** 44, Port Pad Driver Mode 1 Register */
#define P40_PDR1 ((*(volatile unsigned int*)0xF003E044u)) /* lint --e(923)*/
/******************************************************************************/
#endif /* IFXPORT_REG_H */

