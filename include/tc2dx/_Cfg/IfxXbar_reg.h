/**
 * \file IfxXbar_reg.h
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
#ifndef IFXXBAR_REG_H
#define IFXXBAR_REG_H
/******************************************************************************/
#include "Xbar/IfxXbar_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** XBAR object */
#define MODULE_XBAR ((*(Ifx_XBAR*)0xF8700000u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-XBAR)                               */
/******************************************************************************/

/** 4FC, Access Enable Register 0 */
#define XBAR_ACCEN0 ((*(volatile Ifx_XBAR_ACCEN0*)0xF87004FCu)) /* lint --e(923)*/

/** 4F8, Access Enable Register 1 */
#define XBAR_ACCEN1 ((*(volatile Ifx_XBAR_ACCEN1*)0xF87004F8u)) /* lint --e(923)*/

/** Alias for XBAR_ARBITER0_ARBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER0_ARBCON instead.
 * 44, Arbiter Control Register
 */
#define XBAR_ARBCON0 (XBAR_ARBITER0_ARBCON)

/** Alias for XBAR_ARBITER1_ARBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER1_ARBCON instead.
 * 84, Arbiter Control Register
 */
#define XBAR_ARBCON1 (XBAR_ARBITER1_ARBCON)

/** Alias for XBAR_ARBITER3_ARBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER3_ARBCON instead.
 * 104, Arbiter Control Register
 */
#define XBAR_ARBCON3 (XBAR_ARBITER3_ARBCON)

/** Alias for XBAR_ARBITER4_ARBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER4_ARBCON instead.
 * 144, Arbiter Control Register
 */
#define XBAR_ARBCON4 (XBAR_ARBITER4_ARBCON)

/** Alias for XBAR_ARBITER5_ARBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER5_ARBCON instead.
 * 184, Arbiter Control Register
 */
#define XBAR_ARBCON5 (XBAR_ARBITER5_ARBCON)

/** Alias for XBAR_ARBITER6_ARBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER6_ARBCON instead.
 * 1C4, Arbiter Control Register
 */
#define XBAR_ARBCON6 (XBAR_ARBITER6_ARBCON)

/** Alias for XBAR_ARBITER7_ARBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER7_ARBCON instead.
 * 204, Arbiter Control Register
 */
#define XBAR_ARBCON7 (XBAR_ARBITER7_ARBCON)

/** Alias for XBAR_ARBITER8_ARBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER8_ARBCON instead.
 * 244, Arbiter Control Register
 */
#define XBAR_ARBCON8 (XBAR_ARBITER8_ARBCON)

/** Alias for XBAR_ARBITER9_ARBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER9_ARBCON instead.
 * 284, Arbiter Control Register
 */
#define XBAR_ARBCON9 (XBAR_ARBITER9_ARBCON)

/** Alias for XBAR_ARBITERD_ARBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITERD_ARBCON instead.
 * 4, Arbiter Control Register
 */
#define XBAR_ARBCOND (XBAR_ARBITERD_ARBCON)

/** 44, Arbiter Control Register */
#define XBAR_ARBITER0_ARBCON ((*(volatile Ifx_XBAR_ARBITER0_ARBCON*)0xF8700044u)) /* lint --e(923)*/

/** 5C, Debug Address Register */
#define XBAR_ARBITER0_DBADD ((*(volatile Ifx_XBAR_ARBITER0_DBADD*)0xF870005Cu)) /* lint --e(923)*/

/** 58, Debug Control Register */
#define XBAR_ARBITER0_DBCON ((*(volatile Ifx_XBAR_ARBITER0_DBCON*)0xF8700058u)) /* lint --e(923)*/

/** 60, Debug Mask Address Register */
#define XBAR_ARBITER0_DBMADD ((*(volatile Ifx_XBAR_ARBITER0_DBMADD*)0xF8700060u)) /* lint --e(923)*/

/** 54, Error/Debug Capture Register */
#define XBAR_ARBITER0_ERR ((*(volatile Ifx_XBAR_ARBITER0_ERR*)0xF8700054u)) /* lint --e(923)*/

/** 50, Error/Debug Address Capture Register */
#define XBAR_ARBITER0_ERRADDR ((*(volatile Ifx_XBAR_ARBITER0_ERRADDR*)0xF8700050u)) /* lint --e(923)*/

/** 48, Arbiter Priority Register */
#define XBAR_ARBITER0_PRIOH ((*(volatile Ifx_XBAR_ARBITER0_PRIOH*)0xF8700048u)) /* lint --e(923)*/

/** 4C, Arbiter Priority Register */
#define XBAR_ARBITER0_PRIOL ((*(volatile Ifx_XBAR_ARBITER0_PRIOL*)0xF870004Cu)) /* lint --e(923)*/

/** 84, Arbiter Control Register */
#define XBAR_ARBITER1_ARBCON ((*(volatile Ifx_XBAR_ARBITER1_ARBCON*)0xF8700084u)) /* lint --e(923)*/

/** 9C, Debug Address Register */
#define XBAR_ARBITER1_DBADD ((*(volatile Ifx_XBAR_ARBITER1_DBADD*)0xF870009Cu)) /* lint --e(923)*/

/** 98, Debug Control Register */
#define XBAR_ARBITER1_DBCON ((*(volatile Ifx_XBAR_ARBITER1_DBCON*)0xF8700098u)) /* lint --e(923)*/

/** A0, Debug Mask Address Register */
#define XBAR_ARBITER1_DBMADD ((*(volatile Ifx_XBAR_ARBITER1_DBMADD*)0xF87000A0u)) /* lint --e(923)*/

/** 94, Error/Debug Capture Register */
#define XBAR_ARBITER1_ERR ((*(volatile Ifx_XBAR_ARBITER1_ERR*)0xF8700094u)) /* lint --e(923)*/

/** 90, Error/Debug Address Capture Register */
#define XBAR_ARBITER1_ERRADDR ((*(volatile Ifx_XBAR_ARBITER1_ERRADDR*)0xF8700090u)) /* lint --e(923)*/

/** 88, Arbiter Priority Register */
#define XBAR_ARBITER1_PRIOH ((*(volatile Ifx_XBAR_ARBITER1_PRIOH*)0xF8700088u)) /* lint --e(923)*/

/** 8C, Arbiter Priority Register */
#define XBAR_ARBITER1_PRIOL ((*(volatile Ifx_XBAR_ARBITER1_PRIOL*)0xF870008Cu)) /* lint --e(923)*/

/** 104, Arbiter Control Register */
#define XBAR_ARBITER3_ARBCON ((*(volatile Ifx_XBAR_ARBITER3_ARBCON*)0xF8700104u)) /* lint --e(923)*/

/** 11C, Debug Address Register */
#define XBAR_ARBITER3_DBADD ((*(volatile Ifx_XBAR_ARBITER3_DBADD*)0xF870011Cu)) /* lint --e(923)*/

/** 118, Debug Control Register */
#define XBAR_ARBITER3_DBCON ((*(volatile Ifx_XBAR_ARBITER3_DBCON*)0xF8700118u)) /* lint --e(923)*/

/** 120, Debug Mask Address Register */
#define XBAR_ARBITER3_DBMADD ((*(volatile Ifx_XBAR_ARBITER3_DBMADD*)0xF8700120u)) /* lint --e(923)*/

/** 114, Error/Debug Capture Register */
#define XBAR_ARBITER3_ERR ((*(volatile Ifx_XBAR_ARBITER3_ERR*)0xF8700114u)) /* lint --e(923)*/

/** 110, Error/Debug Address Capture Register */
#define XBAR_ARBITER3_ERRADDR ((*(volatile Ifx_XBAR_ARBITER3_ERRADDR*)0xF8700110u)) /* lint --e(923)*/

/** 108, Arbiter Priority Register */
#define XBAR_ARBITER3_PRIOH ((*(volatile Ifx_XBAR_ARBITER3_PRIOH*)0xF8700108u)) /* lint --e(923)*/

/** 10C, Arbiter Priority Register */
#define XBAR_ARBITER3_PRIOL ((*(volatile Ifx_XBAR_ARBITER3_PRIOL*)0xF870010Cu)) /* lint --e(923)*/

/** 144, Arbiter Control Register */
#define XBAR_ARBITER4_ARBCON ((*(volatile Ifx_XBAR_ARBITER4_ARBCON*)0xF8700144u)) /* lint --e(923)*/

/** 15C, Debug Address Register */
#define XBAR_ARBITER4_DBADD ((*(volatile Ifx_XBAR_ARBITER4_DBADD*)0xF870015Cu)) /* lint --e(923)*/

/** 158, Debug Control Register */
#define XBAR_ARBITER4_DBCON ((*(volatile Ifx_XBAR_ARBITER4_DBCON*)0xF8700158u)) /* lint --e(923)*/

/** 160, Debug Mask Address Register */
#define XBAR_ARBITER4_DBMADD ((*(volatile Ifx_XBAR_ARBITER4_DBMADD*)0xF8700160u)) /* lint --e(923)*/

/** 154, Error/Debug Capture Register */
#define XBAR_ARBITER4_ERR ((*(volatile Ifx_XBAR_ARBITER4_ERR*)0xF8700154u)) /* lint --e(923)*/

/** 150, Error/Debug Address Capture Register */
#define XBAR_ARBITER4_ERRADDR ((*(volatile Ifx_XBAR_ARBITER4_ERRADDR*)0xF8700150u)) /* lint --e(923)*/

/** 148, Arbiter Priority Register */
#define XBAR_ARBITER4_PRIOH ((*(volatile Ifx_XBAR_ARBITER4_PRIOH*)0xF8700148u)) /* lint --e(923)*/

/** 14C, Arbiter Priority Register */
#define XBAR_ARBITER4_PRIOL ((*(volatile Ifx_XBAR_ARBITER4_PRIOL*)0xF870014Cu)) /* lint --e(923)*/

/** 184, Arbiter Control Register */
#define XBAR_ARBITER5_ARBCON ((*(volatile Ifx_XBAR_ARBITER5_ARBCON*)0xF8700184u)) /* lint --e(923)*/

/** 19C, Debug Address Register */
#define XBAR_ARBITER5_DBADD ((*(volatile Ifx_XBAR_ARBITER5_DBADD*)0xF870019Cu)) /* lint --e(923)*/

/** 198, Debug Control Register */
#define XBAR_ARBITER5_DBCON ((*(volatile Ifx_XBAR_ARBITER5_DBCON*)0xF8700198u)) /* lint --e(923)*/

/** 1A0, Debug Mask Address Register */
#define XBAR_ARBITER5_DBMADD ((*(volatile Ifx_XBAR_ARBITER5_DBMADD*)0xF87001A0u)) /* lint --e(923)*/

/** 194, Error/Debug Capture Register */
#define XBAR_ARBITER5_ERR ((*(volatile Ifx_XBAR_ARBITER5_ERR*)0xF8700194u)) /* lint --e(923)*/

/** 190, Error/Debug Address Capture Register */
#define XBAR_ARBITER5_ERRADDR ((*(volatile Ifx_XBAR_ARBITER5_ERRADDR*)0xF8700190u)) /* lint --e(923)*/

/** 188, Arbiter Priority Register */
#define XBAR_ARBITER5_PRIOH ((*(volatile Ifx_XBAR_ARBITER5_PRIOH*)0xF8700188u)) /* lint --e(923)*/

/** 18C, Arbiter Priority Register */
#define XBAR_ARBITER5_PRIOL ((*(volatile Ifx_XBAR_ARBITER5_PRIOL*)0xF870018Cu)) /* lint --e(923)*/

/** 1C4, Arbiter Control Register */
#define XBAR_ARBITER6_ARBCON ((*(volatile Ifx_XBAR_ARBITER6_ARBCON*)0xF87001C4u)) /* lint --e(923)*/

/** 1DC, Debug Address Register */
#define XBAR_ARBITER6_DBADD ((*(volatile Ifx_XBAR_ARBITER6_DBADD*)0xF87001DCu)) /* lint --e(923)*/

/** 1D8, Debug Control Register */
#define XBAR_ARBITER6_DBCON ((*(volatile Ifx_XBAR_ARBITER6_DBCON*)0xF87001D8u)) /* lint --e(923)*/

/** 1E0, Debug Mask Address Register */
#define XBAR_ARBITER6_DBMADD ((*(volatile Ifx_XBAR_ARBITER6_DBMADD*)0xF87001E0u)) /* lint --e(923)*/

/** 1D4, Error/Debug Capture Register */
#define XBAR_ARBITER6_ERR ((*(volatile Ifx_XBAR_ARBITER6_ERR*)0xF87001D4u)) /* lint --e(923)*/

/** 1D0, Error/Debug Address Capture Register */
#define XBAR_ARBITER6_ERRADDR ((*(volatile Ifx_XBAR_ARBITER6_ERRADDR*)0xF87001D0u)) /* lint --e(923)*/

/** 1C8, Arbiter Priority Register */
#define XBAR_ARBITER6_PRIOH ((*(volatile Ifx_XBAR_ARBITER6_PRIOH*)0xF87001C8u)) /* lint --e(923)*/

/** 1CC, Arbiter Priority Register */
#define XBAR_ARBITER6_PRIOL ((*(volatile Ifx_XBAR_ARBITER6_PRIOL*)0xF87001CCu)) /* lint --e(923)*/

/** 204, Arbiter Control Register */
#define XBAR_ARBITER7_ARBCON ((*(volatile Ifx_XBAR_ARBITER7_ARBCON*)0xF8700204u)) /* lint --e(923)*/

/** 21C, Debug Address Register */
#define XBAR_ARBITER7_DBADD ((*(volatile Ifx_XBAR_ARBITER7_DBADD*)0xF870021Cu)) /* lint --e(923)*/

/** 218, Debug Control Register */
#define XBAR_ARBITER7_DBCON ((*(volatile Ifx_XBAR_ARBITER7_DBCON*)0xF8700218u)) /* lint --e(923)*/

/** 220, Debug Mask Address Register */
#define XBAR_ARBITER7_DBMADD ((*(volatile Ifx_XBAR_ARBITER7_DBMADD*)0xF8700220u)) /* lint --e(923)*/

/** 214, Error/Debug Capture Register */
#define XBAR_ARBITER7_ERR ((*(volatile Ifx_XBAR_ARBITER7_ERR*)0xF8700214u)) /* lint --e(923)*/

/** 210, Error/Debug Address Capture Register */
#define XBAR_ARBITER7_ERRADDR ((*(volatile Ifx_XBAR_ARBITER7_ERRADDR*)0xF8700210u)) /* lint --e(923)*/

/** 208, Arbiter Priority Register */
#define XBAR_ARBITER7_PRIOH ((*(volatile Ifx_XBAR_ARBITER7_PRIOH*)0xF8700208u)) /* lint --e(923)*/

/** 20C, Arbiter Priority Register */
#define XBAR_ARBITER7_PRIOL ((*(volatile Ifx_XBAR_ARBITER7_PRIOL*)0xF870020Cu)) /* lint --e(923)*/

/** 244, Arbiter Control Register */
#define XBAR_ARBITER8_ARBCON ((*(volatile Ifx_XBAR_ARBITER8_ARBCON*)0xF8700244u)) /* lint --e(923)*/

/** 25C, Debug Address Register */
#define XBAR_ARBITER8_DBADD ((*(volatile Ifx_XBAR_ARBITER8_DBADD*)0xF870025Cu)) /* lint --e(923)*/

/** 258, Debug Control Register */
#define XBAR_ARBITER8_DBCON ((*(volatile Ifx_XBAR_ARBITER8_DBCON*)0xF8700258u)) /* lint --e(923)*/

/** 260, Debug Mask Address Register */
#define XBAR_ARBITER8_DBMADD ((*(volatile Ifx_XBAR_ARBITER8_DBMADD*)0xF8700260u)) /* lint --e(923)*/

/** 254, Error/Debug Capture Register */
#define XBAR_ARBITER8_ERR ((*(volatile Ifx_XBAR_ARBITER8_ERR*)0xF8700254u)) /* lint --e(923)*/

/** 250, Error/Debug Address Capture Register */
#define XBAR_ARBITER8_ERRADDR ((*(volatile Ifx_XBAR_ARBITER8_ERRADDR*)0xF8700250u)) /* lint --e(923)*/

/** 248, Arbiter Priority Register */
#define XBAR_ARBITER8_PRIOH ((*(volatile Ifx_XBAR_ARBITER8_PRIOH*)0xF8700248u)) /* lint --e(923)*/

/** 24C, Arbiter Priority Register */
#define XBAR_ARBITER8_PRIOL ((*(volatile Ifx_XBAR_ARBITER8_PRIOL*)0xF870024Cu)) /* lint --e(923)*/

/** 284, Arbiter Control Register */
#define XBAR_ARBITER9_ARBCON ((*(volatile Ifx_XBAR_ARBITER9_ARBCON*)0xF8700284u)) /* lint --e(923)*/

/** 29C, Debug Address Register */
#define XBAR_ARBITER9_DBADD ((*(volatile Ifx_XBAR_ARBITER9_DBADD*)0xF870029Cu)) /* lint --e(923)*/

/** 298, Debug Control Register */
#define XBAR_ARBITER9_DBCON ((*(volatile Ifx_XBAR_ARBITER9_DBCON*)0xF8700298u)) /* lint --e(923)*/

/** 2A0, Debug Mask Address Register */
#define XBAR_ARBITER9_DBMADD ((*(volatile Ifx_XBAR_ARBITER9_DBMADD*)0xF87002A0u)) /* lint --e(923)*/

/** 294, Error/Debug Capture Register */
#define XBAR_ARBITER9_ERR ((*(volatile Ifx_XBAR_ARBITER9_ERR*)0xF8700294u)) /* lint --e(923)*/

/** 290, Error/Debug Address Capture Register */
#define XBAR_ARBITER9_ERRADDR ((*(volatile Ifx_XBAR_ARBITER9_ERRADDR*)0xF8700290u)) /* lint --e(923)*/

/** 288, Arbiter Priority Register */
#define XBAR_ARBITER9_PRIOH ((*(volatile Ifx_XBAR_ARBITER9_PRIOH*)0xF8700288u)) /* lint --e(923)*/

/** 28C, Arbiter Priority Register */
#define XBAR_ARBITER9_PRIOL ((*(volatile Ifx_XBAR_ARBITER9_PRIOL*)0xF870028Cu)) /* lint --e(923)*/

/** 4, Arbiter Control Register */
#define XBAR_ARBITERD_ARBCON ((*(volatile Ifx_XBAR_ARBITERD_ARBCON*)0xF8700004u)) /* lint --e(923)*/

/** 1C, Debug Address Register */
#define XBAR_ARBITERD_DBADD ((*(volatile Ifx_XBAR_ARBITERD_DBADD*)0xF870001Cu)) /* lint --e(923)*/

/** 18, Debug Control Register */
#define XBAR_ARBITERD_DBCON ((*(volatile Ifx_XBAR_ARBITERD_DBCON*)0xF8700018u)) /* lint --e(923)*/

/** 20, Debug Mask Address Register */
#define XBAR_ARBITERD_DBMADD ((*(volatile Ifx_XBAR_ARBITERD_DBMADD*)0xF8700020u)) /* lint --e(923)*/

/** 14, Error/Debug Capture Register */
#define XBAR_ARBITERD_ERR ((*(volatile Ifx_XBAR_ARBITERD_ERR*)0xF8700014u)) /* lint --e(923)*/

/** 10, Error/Debug Address Capture Register */
#define XBAR_ARBITERD_ERRADDR ((*(volatile Ifx_XBAR_ARBITERD_ERRADDR*)0xF8700010u)) /* lint --e(923)*/

/** 8, Arbiter Priority Register */
#define XBAR_ARBITERD_PRIOH ((*(volatile Ifx_XBAR_ARBITERD_PRIOH*)0xF8700008u)) /* lint --e(923)*/

/** C, Arbiter Priority Register */
#define XBAR_ARBITERD_PRIOL ((*(volatile Ifx_XBAR_ARBITERD_PRIOL*)0xF870000Cu)) /* lint --e(923)*/

/** Alias for XBAR_ARBITER0_DBADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER0_DBADD instead.
 * 5C, Debug Address Register
 */
#define XBAR_DBADD0 (XBAR_ARBITER0_DBADD)

/** Alias for XBAR_ARBITER1_DBADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER1_DBADD instead.
 * 9C, Debug Address Register
 */
#define XBAR_DBADD1 (XBAR_ARBITER1_DBADD)

/** Alias for XBAR_ARBITER3_DBADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER3_DBADD instead.
 * 11C, Debug Address Register
 */
#define XBAR_DBADD3 (XBAR_ARBITER3_DBADD)

/** Alias for XBAR_ARBITER4_DBADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER4_DBADD instead.
 * 15C, Debug Address Register
 */
#define XBAR_DBADD4 (XBAR_ARBITER4_DBADD)

/** Alias for XBAR_ARBITER5_DBADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER5_DBADD instead.
 * 19C, Debug Address Register
 */
#define XBAR_DBADD5 (XBAR_ARBITER5_DBADD)

/** Alias for XBAR_ARBITER6_DBADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER6_DBADD instead.
 * 1DC, Debug Address Register
 */
#define XBAR_DBADD6 (XBAR_ARBITER6_DBADD)

/** Alias for XBAR_ARBITER7_DBADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER7_DBADD instead.
 * 21C, Debug Address Register
 */
#define XBAR_DBADD7 (XBAR_ARBITER7_DBADD)

/** Alias for XBAR_ARBITER8_DBADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER8_DBADD instead.
 * 25C, Debug Address Register
 */
#define XBAR_DBADD8 (XBAR_ARBITER8_DBADD)

/** Alias for XBAR_ARBITER9_DBADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER9_DBADD instead.
 * 29C, Debug Address Register
 */
#define XBAR_DBADD9 (XBAR_ARBITER9_DBADD)

/** Alias for XBAR_ARBITERD_DBADD.
 *  Note that this definition is obsolete, use XBAR_ARBITERD_DBADD instead.
 * 1C, Debug Address Register
 */
#define XBAR_DBADDD (XBAR_ARBITERD_DBADD)

/** Alias for XBAR_ARBITER0_DBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER0_DBCON instead.
 * 58, Debug Control Register
 */
#define XBAR_DBCON0 (XBAR_ARBITER0_DBCON)

/** Alias for XBAR_ARBITER1_DBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER1_DBCON instead.
 * 98, Debug Control Register
 */
#define XBAR_DBCON1 (XBAR_ARBITER1_DBCON)

/** Alias for XBAR_ARBITER3_DBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER3_DBCON instead.
 * 118, Debug Control Register
 */
#define XBAR_DBCON3 (XBAR_ARBITER3_DBCON)

/** Alias for XBAR_ARBITER4_DBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER4_DBCON instead.
 * 158, Debug Control Register
 */
#define XBAR_DBCON4 (XBAR_ARBITER4_DBCON)

/** Alias for XBAR_ARBITER5_DBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER5_DBCON instead.
 * 198, Debug Control Register
 */
#define XBAR_DBCON5 (XBAR_ARBITER5_DBCON)

/** Alias for XBAR_ARBITER6_DBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER6_DBCON instead.
 * 1D8, Debug Control Register
 */
#define XBAR_DBCON6 (XBAR_ARBITER6_DBCON)

/** Alias for XBAR_ARBITER7_DBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER7_DBCON instead.
 * 218, Debug Control Register
 */
#define XBAR_DBCON7 (XBAR_ARBITER7_DBCON)

/** Alias for XBAR_ARBITER8_DBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER8_DBCON instead.
 * 258, Debug Control Register
 */
#define XBAR_DBCON8 (XBAR_ARBITER8_DBCON)

/** Alias for XBAR_ARBITER9_DBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITER9_DBCON instead.
 * 298, Debug Control Register
 */
#define XBAR_DBCON9 (XBAR_ARBITER9_DBCON)

/** Alias for XBAR_ARBITERD_DBCON.
 *  Note that this definition is obsolete, use XBAR_ARBITERD_DBCON instead.
 * 18, Debug Control Register
 */
#define XBAR_DBCOND (XBAR_ARBITERD_DBCON)

/** Alias for XBAR_ARBITER0_DBMADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER0_DBMADD instead.
 * 60, Debug Mask Address Register
 */
#define XBAR_DBMADD0 (XBAR_ARBITER0_DBMADD)

/** Alias for XBAR_ARBITER1_DBMADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER1_DBMADD instead.
 * A0, Debug Mask Address Register
 */
#define XBAR_DBMADD1 (XBAR_ARBITER1_DBMADD)

/** Alias for XBAR_ARBITER3_DBMADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER3_DBMADD instead.
 * 120, Debug Mask Address Register
 */
#define XBAR_DBMADD3 (XBAR_ARBITER3_DBMADD)

/** Alias for XBAR_ARBITER4_DBMADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER4_DBMADD instead.
 * 160, Debug Mask Address Register
 */
#define XBAR_DBMADD4 (XBAR_ARBITER4_DBMADD)

/** Alias for XBAR_ARBITER5_DBMADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER5_DBMADD instead.
 * 1A0, Debug Mask Address Register
 */
#define XBAR_DBMADD5 (XBAR_ARBITER5_DBMADD)

/** Alias for XBAR_ARBITER6_DBMADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER6_DBMADD instead.
 * 1E0, Debug Mask Address Register
 */
#define XBAR_DBMADD6 (XBAR_ARBITER6_DBMADD)

/** Alias for XBAR_ARBITER7_DBMADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER7_DBMADD instead.
 * 220, Debug Mask Address Register
 */
#define XBAR_DBMADD7 (XBAR_ARBITER7_DBMADD)

/** Alias for XBAR_ARBITER8_DBMADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER8_DBMADD instead.
 * 260, Debug Mask Address Register
 */
#define XBAR_DBMADD8 (XBAR_ARBITER8_DBMADD)

/** Alias for XBAR_ARBITER9_DBMADD.
 *  Note that this definition is obsolete, use XBAR_ARBITER9_DBMADD instead.
 * 2A0, Debug Mask Address Register
 */
#define XBAR_DBMADD9 (XBAR_ARBITER9_DBMADD)

/** Alias for XBAR_ARBITERD_DBMADD.
 *  Note that this definition is obsolete, use XBAR_ARBITERD_DBMADD instead.
 * 20, Debug Mask Address Register
 */
#define XBAR_DBMADDD (XBAR_ARBITERD_DBMADD)

/** 40C, Debug Trigger Event Status Register */
#define XBAR_DBSAT ((*(volatile Ifx_XBAR_DBSAT*)0xF870040Cu)) /* lint --e(923)*/

/** Alias for XBAR_ARBITER0_ERR.
 *  Note that this definition is obsolete, use XBAR_ARBITER0_ERR instead.
 * 54, Error/Debug Capture Register
 */
#define XBAR_ERR0 (XBAR_ARBITER0_ERR)

/** Alias for XBAR_ARBITER1_ERR.
 *  Note that this definition is obsolete, use XBAR_ARBITER1_ERR instead.
 * 94, Error/Debug Capture Register
 */
#define XBAR_ERR1 (XBAR_ARBITER1_ERR)

/** Alias for XBAR_ARBITER3_ERR.
 *  Note that this definition is obsolete, use XBAR_ARBITER3_ERR instead.
 * 114, Error/Debug Capture Register
 */
#define XBAR_ERR3 (XBAR_ARBITER3_ERR)

/** Alias for XBAR_ARBITER4_ERR.
 *  Note that this definition is obsolete, use XBAR_ARBITER4_ERR instead.
 * 154, Error/Debug Capture Register
 */
#define XBAR_ERR4 (XBAR_ARBITER4_ERR)

/** Alias for XBAR_ARBITER5_ERR.
 *  Note that this definition is obsolete, use XBAR_ARBITER5_ERR instead.
 * 194, Error/Debug Capture Register
 */
#define XBAR_ERR5 (XBAR_ARBITER5_ERR)

/** Alias for XBAR_ARBITER6_ERR.
 *  Note that this definition is obsolete, use XBAR_ARBITER6_ERR instead.
 * 1D4, Error/Debug Capture Register
 */
#define XBAR_ERR6 (XBAR_ARBITER6_ERR)

/** Alias for XBAR_ARBITER7_ERR.
 *  Note that this definition is obsolete, use XBAR_ARBITER7_ERR instead.
 * 214, Error/Debug Capture Register
 */
#define XBAR_ERR7 (XBAR_ARBITER7_ERR)

/** Alias for XBAR_ARBITER8_ERR.
 *  Note that this definition is obsolete, use XBAR_ARBITER8_ERR instead.
 * 254, Error/Debug Capture Register
 */
#define XBAR_ERR8 (XBAR_ARBITER8_ERR)

/** Alias for XBAR_ARBITER9_ERR.
 *  Note that this definition is obsolete, use XBAR_ARBITER9_ERR instead.
 * 294, Error/Debug Capture Register
 */
#define XBAR_ERR9 (XBAR_ARBITER9_ERR)

/** Alias for XBAR_ARBITER0_ERRADDR.
 *  Note that this definition is obsolete, use XBAR_ARBITER0_ERRADDR instead.
 * 50, Error/Debug Address Capture Register
 */
#define XBAR_ERRADDR0 (XBAR_ARBITER0_ERRADDR)

/** Alias for XBAR_ARBITER1_ERRADDR.
 *  Note that this definition is obsolete, use XBAR_ARBITER1_ERRADDR instead.
 * 90, Error/Debug Address Capture Register
 */
#define XBAR_ERRADDR1 (XBAR_ARBITER1_ERRADDR)

/** Alias for XBAR_ARBITER3_ERRADDR.
 *  Note that this definition is obsolete, use XBAR_ARBITER3_ERRADDR instead.
 * 110, Error/Debug Address Capture Register
 */
#define XBAR_ERRADDR3 (XBAR_ARBITER3_ERRADDR)

/** Alias for XBAR_ARBITER4_ERRADDR.
 *  Note that this definition is obsolete, use XBAR_ARBITER4_ERRADDR instead.
 * 150, Error/Debug Address Capture Register
 */
#define XBAR_ERRADDR4 (XBAR_ARBITER4_ERRADDR)

/** Alias for XBAR_ARBITER5_ERRADDR.
 *  Note that this definition is obsolete, use XBAR_ARBITER5_ERRADDR instead.
 * 190, Error/Debug Address Capture Register
 */
#define XBAR_ERRADDR5 (XBAR_ARBITER5_ERRADDR)

/** Alias for XBAR_ARBITER6_ERRADDR.
 *  Note that this definition is obsolete, use XBAR_ARBITER6_ERRADDR instead.
 * 1D0, Error/Debug Address Capture Register
 */
#define XBAR_ERRADDR6 (XBAR_ARBITER6_ERRADDR)

/** Alias for XBAR_ARBITER7_ERRADDR.
 *  Note that this definition is obsolete, use XBAR_ARBITER7_ERRADDR instead.
 * 210, Error/Debug Address Capture Register
 */
#define XBAR_ERRADDR7 (XBAR_ARBITER7_ERRADDR)

/** Alias for XBAR_ARBITER8_ERRADDR.
 *  Note that this definition is obsolete, use XBAR_ARBITER8_ERRADDR instead.
 * 250, Error/Debug Address Capture Register
 */
#define XBAR_ERRADDR8 (XBAR_ARBITER8_ERRADDR)

/** Alias for XBAR_ARBITER9_ERRADDR.
 *  Note that this definition is obsolete, use XBAR_ARBITER9_ERRADDR instead.
 * 290, Error/Debug Address Capture Register
 */
#define XBAR_ERRADDR9 (XBAR_ARBITER9_ERRADDR)

/** Alias for XBAR_ARBITERD_ERRADDR.
 *  Note that this definition is obsolete, use XBAR_ARBITERD_ERRADDR instead.
 * 10, Error/Debug Address Capture Register
 */
#define XBAR_ERRADDRD (XBAR_ARBITERD_ERRADDR)

/** Alias for XBAR_ARBITERD_ERR.
 *  Note that this definition is obsolete, use XBAR_ARBITERD_ERR instead.
 * 14, Error/Debug Capture Register
 */
#define XBAR_ERRD (XBAR_ARBITERD_ERR)

/** 180, External Control Register 5 */
#define XBAR_EXTCON5 ((*(volatile Ifx_XBAR_EXTCON5*)0xF8700180u)) /* lint --e(923)*/

/** 408, Module Identification Register */
#define XBAR_ID ((*(volatile Ifx_ID1*)0xF8700408u)) /* lint --e(923)*/

/** 418, Transaction ID Interrupt Enable Register */
#define XBAR_IDINTEN ((*(volatile Ifx_XBAR_IDINTEN*)0xF8700418u)) /* lint --e(923)*/

/** 414, Transaction ID Interrupt Status Register */
#define XBAR_IDINTSAT ((*(volatile Ifx_XBAR_IDINTSAT*)0xF8700414u)) /* lint --e(923)*/

/** 410, Arbiter Interrupt Status Register */
#define XBAR_INTSAT ((*(volatile Ifx_XBAR_INTSAT*)0xF8700410u)) /* lint --e(923)*/

/** Alias for XBAR_ARBITER0_PRIOH.
 *  Note that this definition is obsolete, use XBAR_ARBITER0_PRIOH instead.
 * 48, Arbiter Priority Register
 */
#define XBAR_PRIOH0 (XBAR_ARBITER0_PRIOH)

/** Alias for XBAR_ARBITER1_PRIOH.
 *  Note that this definition is obsolete, use XBAR_ARBITER1_PRIOH instead.
 * 88, Arbiter Priority Register
 */
#define XBAR_PRIOH1 (XBAR_ARBITER1_PRIOH)

/** Alias for XBAR_ARBITER3_PRIOH.
 *  Note that this definition is obsolete, use XBAR_ARBITER3_PRIOH instead.
 * 108, Arbiter Priority Register
 */
#define XBAR_PRIOH3 (XBAR_ARBITER3_PRIOH)

/** Alias for XBAR_ARBITER4_PRIOH.
 *  Note that this definition is obsolete, use XBAR_ARBITER4_PRIOH instead.
 * 148, Arbiter Priority Register
 */
#define XBAR_PRIOH4 (XBAR_ARBITER4_PRIOH)

/** Alias for XBAR_ARBITER5_PRIOH.
 *  Note that this definition is obsolete, use XBAR_ARBITER5_PRIOH instead.
 * 188, Arbiter Priority Register
 */
#define XBAR_PRIOH5 (XBAR_ARBITER5_PRIOH)

/** Alias for XBAR_ARBITER6_PRIOH.
 *  Note that this definition is obsolete, use XBAR_ARBITER6_PRIOH instead.
 * 1C8, Arbiter Priority Register
 */
#define XBAR_PRIOH6 (XBAR_ARBITER6_PRIOH)

/** Alias for XBAR_ARBITER7_PRIOH.
 *  Note that this definition is obsolete, use XBAR_ARBITER7_PRIOH instead.
 * 208, Arbiter Priority Register
 */
#define XBAR_PRIOH7 (XBAR_ARBITER7_PRIOH)

/** Alias for XBAR_ARBITER8_PRIOH.
 *  Note that this definition is obsolete, use XBAR_ARBITER8_PRIOH instead.
 * 248, Arbiter Priority Register
 */
#define XBAR_PRIOH8 (XBAR_ARBITER8_PRIOH)

/** Alias for XBAR_ARBITER9_PRIOH.
 *  Note that this definition is obsolete, use XBAR_ARBITER9_PRIOH instead.
 * 288, Arbiter Priority Register
 */
#define XBAR_PRIOH9 (XBAR_ARBITER9_PRIOH)

/** Alias for XBAR_ARBITERD_PRIOH.
 *  Note that this definition is obsolete, use XBAR_ARBITERD_PRIOH instead.
 * 8, Arbiter Priority Register
 */
#define XBAR_PRIOHD (XBAR_ARBITERD_PRIOH)

/** Alias for XBAR_ARBITER0_PRIOL.
 *  Note that this definition is obsolete, use XBAR_ARBITER0_PRIOL instead.
 * 4C, Arbiter Priority Register
 */
#define XBAR_PRIOL0 (XBAR_ARBITER0_PRIOL)

/** Alias for XBAR_ARBITER1_PRIOL.
 *  Note that this definition is obsolete, use XBAR_ARBITER1_PRIOL instead.
 * 8C, Arbiter Priority Register
 */
#define XBAR_PRIOL1 (XBAR_ARBITER1_PRIOL)

/** Alias for XBAR_ARBITER3_PRIOL.
 *  Note that this definition is obsolete, use XBAR_ARBITER3_PRIOL instead.
 * 10C, Arbiter Priority Register
 */
#define XBAR_PRIOL3 (XBAR_ARBITER3_PRIOL)

/** Alias for XBAR_ARBITER4_PRIOL.
 *  Note that this definition is obsolete, use XBAR_ARBITER4_PRIOL instead.
 * 14C, Arbiter Priority Register
 */
#define XBAR_PRIOL4 (XBAR_ARBITER4_PRIOL)

/** Alias for XBAR_ARBITER5_PRIOL.
 *  Note that this definition is obsolete, use XBAR_ARBITER5_PRIOL instead.
 * 18C, Arbiter Priority Register
 */
#define XBAR_PRIOL5 (XBAR_ARBITER5_PRIOL)

/** Alias for XBAR_ARBITER6_PRIOL.
 *  Note that this definition is obsolete, use XBAR_ARBITER6_PRIOL instead.
 * 1CC, Arbiter Priority Register
 */
#define XBAR_PRIOL6 (XBAR_ARBITER6_PRIOL)

/** Alias for XBAR_ARBITER7_PRIOL.
 *  Note that this definition is obsolete, use XBAR_ARBITER7_PRIOL instead.
 * 20C, Arbiter Priority Register
 */
#define XBAR_PRIOL7 (XBAR_ARBITER7_PRIOL)

/** Alias for XBAR_ARBITER8_PRIOL.
 *  Note that this definition is obsolete, use XBAR_ARBITER8_PRIOL instead.
 * 24C, Arbiter Priority Register
 */
#define XBAR_PRIOL8 (XBAR_ARBITER8_PRIOL)

/** Alias for XBAR_ARBITER9_PRIOL.
 *  Note that this definition is obsolete, use XBAR_ARBITER9_PRIOL instead.
 * 28C, Arbiter Priority Register
 */
#define XBAR_PRIOL9 (XBAR_ARBITER9_PRIOL)

/** Alias for XBAR_ARBITERD_PRIOL.
 *  Note that this definition is obsolete, use XBAR_ARBITERD_PRIOL instead.
 * C, Arbiter Priority Register
 */
#define XBAR_PRIOLD (XBAR_ARBITERD_PRIOL)
/******************************************************************************/
#endif /* IFXXBAR_REG_H */

