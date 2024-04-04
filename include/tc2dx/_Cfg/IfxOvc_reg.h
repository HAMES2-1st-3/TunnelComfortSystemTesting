/**
 * \file IfxOvc_reg.h
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
#ifndef IFXOVC_REG_H
#define IFXOVC_REG_H
/******************************************************************************/
#include "Ovc/IfxOvc_regdef.h"

/******************************************************************************/
/*                          Define (1-Base address)                           */
/******************************************************************************/

/** OVC object */
#define MODULE_OVC0 ((*(Ifx_OVC*)0xF880FB00u)) /* lint --e(923)*/

/** OVC object */
#define MODULE_OVC1 ((*(Ifx_OVC*)0xF882FB00u)) /* lint --e(923)*/

/** OVC object */
#define MODULE_OVC2 ((*(Ifx_OVC*)0xF884FB00u)) /* lint --e(923)*/

/******************************************************************************/
/*                              Define (2-OVC0)                               */
/******************************************************************************/

/** 18, Overlay Mask Register */
#define OVC0_BLK0_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FB18u)) /* lint --e(923)*/

/** 14, Overlay Target Address Register */
#define OVC0_BLK0_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FB14u)) /* lint --e(923)*/

/** 10, Redirected Address Base Register */
#define OVC0_BLK0_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FB10u)) /* lint --e(923)*/

/** 90, Overlay Mask Register */
#define OVC0_BLK10_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FB90u)) /* lint --e(923)*/

/** 8C, Overlay Target Address Register */
#define OVC0_BLK10_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FB8Cu)) /* lint --e(923)*/

/** 88, Redirected Address Base Register */
#define OVC0_BLK10_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FB88u)) /* lint --e(923)*/

/** 9C, Overlay Mask Register */
#define OVC0_BLK11_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FB9Cu)) /* lint --e(923)*/

/** 98, Overlay Target Address Register */
#define OVC0_BLK11_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FB98u)) /* lint --e(923)*/

/** 94, Redirected Address Base Register */
#define OVC0_BLK11_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FB94u)) /* lint --e(923)*/

/** A8, Overlay Mask Register */
#define OVC0_BLK12_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FBA8u)) /* lint --e(923)*/

/** A4, Overlay Target Address Register */
#define OVC0_BLK12_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FBA4u)) /* lint --e(923)*/

/** A0, Redirected Address Base Register */
#define OVC0_BLK12_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FBA0u)) /* lint --e(923)*/

/** B4, Overlay Mask Register */
#define OVC0_BLK13_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FBB4u)) /* lint --e(923)*/

/** B0, Overlay Target Address Register */
#define OVC0_BLK13_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FBB0u)) /* lint --e(923)*/

/** AC, Redirected Address Base Register */
#define OVC0_BLK13_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FBACu)) /* lint --e(923)*/

/** C0, Overlay Mask Register */
#define OVC0_BLK14_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FBC0u)) /* lint --e(923)*/

/** BC, Overlay Target Address Register */
#define OVC0_BLK14_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FBBCu)) /* lint --e(923)*/

/** B8, Redirected Address Base Register */
#define OVC0_BLK14_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FBB8u)) /* lint --e(923)*/

/** CC, Overlay Mask Register */
#define OVC0_BLK15_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FBCCu)) /* lint --e(923)*/

/** C8, Overlay Target Address Register */
#define OVC0_BLK15_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FBC8u)) /* lint --e(923)*/

/** C4, Redirected Address Base Register */
#define OVC0_BLK15_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FBC4u)) /* lint --e(923)*/

/** D8, Overlay Mask Register */
#define OVC0_BLK16_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FBD8u)) /* lint --e(923)*/

/** D4, Overlay Target Address Register */
#define OVC0_BLK16_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FBD4u)) /* lint --e(923)*/

/** D0, Redirected Address Base Register */
#define OVC0_BLK16_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FBD0u)) /* lint --e(923)*/

/** E4, Overlay Mask Register */
#define OVC0_BLK17_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FBE4u)) /* lint --e(923)*/

/** E0, Overlay Target Address Register */
#define OVC0_BLK17_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FBE0u)) /* lint --e(923)*/

/** DC, Redirected Address Base Register */
#define OVC0_BLK17_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FBDCu)) /* lint --e(923)*/

/** F0, Overlay Mask Register */
#define OVC0_BLK18_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FBF0u)) /* lint --e(923)*/

/** EC, Overlay Target Address Register */
#define OVC0_BLK18_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FBECu)) /* lint --e(923)*/

/** E8, Redirected Address Base Register */
#define OVC0_BLK18_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FBE8u)) /* lint --e(923)*/

/** FC, Overlay Mask Register */
#define OVC0_BLK19_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FBFCu)) /* lint --e(923)*/

/** F8, Overlay Target Address Register */
#define OVC0_BLK19_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FBF8u)) /* lint --e(923)*/

/** F4, Redirected Address Base Register */
#define OVC0_BLK19_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FBF4u)) /* lint --e(923)*/

/** 24, Overlay Mask Register */
#define OVC0_BLK1_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FB24u)) /* lint --e(923)*/

/** 20, Overlay Target Address Register */
#define OVC0_BLK1_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FB20u)) /* lint --e(923)*/

/** 1C, Redirected Address Base Register */
#define OVC0_BLK1_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FB1Cu)) /* lint --e(923)*/

/** 108, Overlay Mask Register */
#define OVC0_BLK20_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FC08u)) /* lint --e(923)*/

/** 104, Overlay Target Address Register */
#define OVC0_BLK20_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FC04u)) /* lint --e(923)*/

/** 100, Redirected Address Base Register */
#define OVC0_BLK20_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FC00u)) /* lint --e(923)*/

/** 114, Overlay Mask Register */
#define OVC0_BLK21_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FC14u)) /* lint --e(923)*/

/** 110, Overlay Target Address Register */
#define OVC0_BLK21_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FC10u)) /* lint --e(923)*/

/** 10C, Redirected Address Base Register */
#define OVC0_BLK21_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FC0Cu)) /* lint --e(923)*/

/** 120, Overlay Mask Register */
#define OVC0_BLK22_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FC20u)) /* lint --e(923)*/

/** 11C, Overlay Target Address Register */
#define OVC0_BLK22_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FC1Cu)) /* lint --e(923)*/

/** 118, Redirected Address Base Register */
#define OVC0_BLK22_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FC18u)) /* lint --e(923)*/

/** 12C, Overlay Mask Register */
#define OVC0_BLK23_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FC2Cu)) /* lint --e(923)*/

/** 128, Overlay Target Address Register */
#define OVC0_BLK23_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FC28u)) /* lint --e(923)*/

/** 124, Redirected Address Base Register */
#define OVC0_BLK23_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FC24u)) /* lint --e(923)*/

/** 138, Overlay Mask Register */
#define OVC0_BLK24_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FC38u)) /* lint --e(923)*/

/** 134, Overlay Target Address Register */
#define OVC0_BLK24_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FC34u)) /* lint --e(923)*/

/** 130, Redirected Address Base Register */
#define OVC0_BLK24_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FC30u)) /* lint --e(923)*/

/** 144, Overlay Mask Register */
#define OVC0_BLK25_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FC44u)) /* lint --e(923)*/

/** 140, Overlay Target Address Register */
#define OVC0_BLK25_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FC40u)) /* lint --e(923)*/

/** 13C, Redirected Address Base Register */
#define OVC0_BLK25_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FC3Cu)) /* lint --e(923)*/

/** 150, Overlay Mask Register */
#define OVC0_BLK26_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FC50u)) /* lint --e(923)*/

/** 14C, Overlay Target Address Register */
#define OVC0_BLK26_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FC4Cu)) /* lint --e(923)*/

/** 148, Redirected Address Base Register */
#define OVC0_BLK26_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FC48u)) /* lint --e(923)*/

/** 15C, Overlay Mask Register */
#define OVC0_BLK27_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FC5Cu)) /* lint --e(923)*/

/** 158, Overlay Target Address Register */
#define OVC0_BLK27_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FC58u)) /* lint --e(923)*/

/** 154, Redirected Address Base Register */
#define OVC0_BLK27_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FC54u)) /* lint --e(923)*/

/** 168, Overlay Mask Register */
#define OVC0_BLK28_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FC68u)) /* lint --e(923)*/

/** 164, Overlay Target Address Register */
#define OVC0_BLK28_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FC64u)) /* lint --e(923)*/

/** 160, Redirected Address Base Register */
#define OVC0_BLK28_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FC60u)) /* lint --e(923)*/

/** 174, Overlay Mask Register */
#define OVC0_BLK29_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FC74u)) /* lint --e(923)*/

/** 170, Overlay Target Address Register */
#define OVC0_BLK29_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FC70u)) /* lint --e(923)*/

/** 16C, Redirected Address Base Register */
#define OVC0_BLK29_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FC6Cu)) /* lint --e(923)*/

/** 30, Overlay Mask Register */
#define OVC0_BLK2_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FB30u)) /* lint --e(923)*/

/** 2C, Overlay Target Address Register */
#define OVC0_BLK2_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FB2Cu)) /* lint --e(923)*/

/** 28, Redirected Address Base Register */
#define OVC0_BLK2_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FB28u)) /* lint --e(923)*/

/** 180, Overlay Mask Register */
#define OVC0_BLK30_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FC80u)) /* lint --e(923)*/

/** 17C, Overlay Target Address Register */
#define OVC0_BLK30_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FC7Cu)) /* lint --e(923)*/

/** 178, Redirected Address Base Register */
#define OVC0_BLK30_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FC78u)) /* lint --e(923)*/

/** 18C, Overlay Mask Register */
#define OVC0_BLK31_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FC8Cu)) /* lint --e(923)*/

/** 188, Overlay Target Address Register */
#define OVC0_BLK31_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FC88u)) /* lint --e(923)*/

/** 184, Redirected Address Base Register */
#define OVC0_BLK31_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FC84u)) /* lint --e(923)*/

/** 3C, Overlay Mask Register */
#define OVC0_BLK3_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FB3Cu)) /* lint --e(923)*/

/** 38, Overlay Target Address Register */
#define OVC0_BLK3_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FB38u)) /* lint --e(923)*/

/** 34, Redirected Address Base Register */
#define OVC0_BLK3_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FB34u)) /* lint --e(923)*/

/** 48, Overlay Mask Register */
#define OVC0_BLK4_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FB48u)) /* lint --e(923)*/

/** 44, Overlay Target Address Register */
#define OVC0_BLK4_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FB44u)) /* lint --e(923)*/

/** 40, Redirected Address Base Register */
#define OVC0_BLK4_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FB40u)) /* lint --e(923)*/

/** 54, Overlay Mask Register */
#define OVC0_BLK5_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FB54u)) /* lint --e(923)*/

/** 50, Overlay Target Address Register */
#define OVC0_BLK5_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FB50u)) /* lint --e(923)*/

/** 4C, Redirected Address Base Register */
#define OVC0_BLK5_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FB4Cu)) /* lint --e(923)*/

/** 60, Overlay Mask Register */
#define OVC0_BLK6_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FB60u)) /* lint --e(923)*/

/** 5C, Overlay Target Address Register */
#define OVC0_BLK6_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FB5Cu)) /* lint --e(923)*/

/** 58, Redirected Address Base Register */
#define OVC0_BLK6_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FB58u)) /* lint --e(923)*/

/** 6C, Overlay Mask Register */
#define OVC0_BLK7_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FB6Cu)) /* lint --e(923)*/

/** 68, Overlay Target Address Register */
#define OVC0_BLK7_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FB68u)) /* lint --e(923)*/

/** 64, Redirected Address Base Register */
#define OVC0_BLK7_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FB64u)) /* lint --e(923)*/

/** 78, Overlay Mask Register */
#define OVC0_BLK8_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FB78u)) /* lint --e(923)*/

/** 74, Overlay Target Address Register */
#define OVC0_BLK8_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FB74u)) /* lint --e(923)*/

/** 70, Redirected Address Base Register */
#define OVC0_BLK8_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FB70u)) /* lint --e(923)*/

/** 84, Overlay Mask Register */
#define OVC0_BLK9_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF880FB84u)) /* lint --e(923)*/

/** 80, Overlay Target Address Register */
#define OVC0_BLK9_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF880FB80u)) /* lint --e(923)*/

/** 7C, Redirected Address Base Register */
#define OVC0_BLK9_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF880FB7Cu)) /* lint --e(923)*/

/** Alias for OVC0_BLK0_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK0_OMASK instead.
 * 18, Overlay Mask Register
 */
#define OVC0_OMASK0 (OVC0_BLK0_OMASK)

/** Alias for OVC0_BLK1_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK1_OMASK instead.
 * 24, Overlay Mask Register
 */
#define OVC0_OMASK1 (OVC0_BLK1_OMASK)

/** Alias for OVC0_BLK10_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK10_OMASK instead.
 * 90, Overlay Mask Register
 */
#define OVC0_OMASK10 (OVC0_BLK10_OMASK)

/** Alias for OVC0_BLK11_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK11_OMASK instead.
 * 9C, Overlay Mask Register
 */
#define OVC0_OMASK11 (OVC0_BLK11_OMASK)

/** Alias for OVC0_BLK12_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK12_OMASK instead.
 * A8, Overlay Mask Register
 */
#define OVC0_OMASK12 (OVC0_BLK12_OMASK)

/** Alias for OVC0_BLK13_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK13_OMASK instead.
 * B4, Overlay Mask Register
 */
#define OVC0_OMASK13 (OVC0_BLK13_OMASK)

/** Alias for OVC0_BLK14_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK14_OMASK instead.
 * C0, Overlay Mask Register
 */
#define OVC0_OMASK14 (OVC0_BLK14_OMASK)

/** Alias for OVC0_BLK15_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK15_OMASK instead.
 * CC, Overlay Mask Register
 */
#define OVC0_OMASK15 (OVC0_BLK15_OMASK)

/** Alias for OVC0_BLK16_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK16_OMASK instead.
 * D8, Overlay Mask Register
 */
#define OVC0_OMASK16 (OVC0_BLK16_OMASK)

/** Alias for OVC0_BLK17_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK17_OMASK instead.
 * E4, Overlay Mask Register
 */
#define OVC0_OMASK17 (OVC0_BLK17_OMASK)

/** Alias for OVC0_BLK18_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK18_OMASK instead.
 * F0, Overlay Mask Register
 */
#define OVC0_OMASK18 (OVC0_BLK18_OMASK)

/** Alias for OVC0_BLK19_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK19_OMASK instead.
 * FC, Overlay Mask Register
 */
#define OVC0_OMASK19 (OVC0_BLK19_OMASK)

/** Alias for OVC0_BLK2_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK2_OMASK instead.
 * 30, Overlay Mask Register
 */
#define OVC0_OMASK2 (OVC0_BLK2_OMASK)

/** Alias for OVC0_BLK20_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK20_OMASK instead.
 * 108, Overlay Mask Register
 */
#define OVC0_OMASK20 (OVC0_BLK20_OMASK)

/** Alias for OVC0_BLK21_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK21_OMASK instead.
 * 114, Overlay Mask Register
 */
#define OVC0_OMASK21 (OVC0_BLK21_OMASK)

/** Alias for OVC0_BLK22_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK22_OMASK instead.
 * 120, Overlay Mask Register
 */
#define OVC0_OMASK22 (OVC0_BLK22_OMASK)

/** Alias for OVC0_BLK23_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK23_OMASK instead.
 * 12C, Overlay Mask Register
 */
#define OVC0_OMASK23 (OVC0_BLK23_OMASK)

/** Alias for OVC0_BLK24_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK24_OMASK instead.
 * 138, Overlay Mask Register
 */
#define OVC0_OMASK24 (OVC0_BLK24_OMASK)

/** Alias for OVC0_BLK25_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK25_OMASK instead.
 * 144, Overlay Mask Register
 */
#define OVC0_OMASK25 (OVC0_BLK25_OMASK)

/** Alias for OVC0_BLK26_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK26_OMASK instead.
 * 150, Overlay Mask Register
 */
#define OVC0_OMASK26 (OVC0_BLK26_OMASK)

/** Alias for OVC0_BLK27_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK27_OMASK instead.
 * 15C, Overlay Mask Register
 */
#define OVC0_OMASK27 (OVC0_BLK27_OMASK)

/** Alias for OVC0_BLK28_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK28_OMASK instead.
 * 168, Overlay Mask Register
 */
#define OVC0_OMASK28 (OVC0_BLK28_OMASK)

/** Alias for OVC0_BLK29_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK29_OMASK instead.
 * 174, Overlay Mask Register
 */
#define OVC0_OMASK29 (OVC0_BLK29_OMASK)

/** Alias for OVC0_BLK3_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK3_OMASK instead.
 * 3C, Overlay Mask Register
 */
#define OVC0_OMASK3 (OVC0_BLK3_OMASK)

/** Alias for OVC0_BLK30_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK30_OMASK instead.
 * 180, Overlay Mask Register
 */
#define OVC0_OMASK30 (OVC0_BLK30_OMASK)

/** Alias for OVC0_BLK31_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK31_OMASK instead.
 * 18C, Overlay Mask Register
 */
#define OVC0_OMASK31 (OVC0_BLK31_OMASK)

/** Alias for OVC0_BLK4_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK4_OMASK instead.
 * 48, Overlay Mask Register
 */
#define OVC0_OMASK4 (OVC0_BLK4_OMASK)

/** Alias for OVC0_BLK5_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK5_OMASK instead.
 * 54, Overlay Mask Register
 */
#define OVC0_OMASK5 (OVC0_BLK5_OMASK)

/** Alias for OVC0_BLK6_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK6_OMASK instead.
 * 60, Overlay Mask Register
 */
#define OVC0_OMASK6 (OVC0_BLK6_OMASK)

/** Alias for OVC0_BLK7_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK7_OMASK instead.
 * 6C, Overlay Mask Register
 */
#define OVC0_OMASK7 (OVC0_BLK7_OMASK)

/** Alias for OVC0_BLK8_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK8_OMASK instead.
 * 78, Overlay Mask Register
 */
#define OVC0_OMASK8 (OVC0_BLK8_OMASK)

/** Alias for OVC0_BLK9_OMASK.
 *  Note that this definition is obsolete, use OVC0_BLK9_OMASK instead.
 * 84, Overlay Mask Register
 */
#define OVC0_OMASK9 (OVC0_BLK9_OMASK)

/** 0, Overlay Range Select Register */
#define OVC0_OSEL ((*(volatile Ifx_OVC_OSEL*)0xF880FB00u)) /* lint --e(923)*/

/** Alias for OVC0_BLK0_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK0_OTAR instead.
 * 14, Overlay Target Address Register
 */
#define OVC0_OTAR0 (OVC0_BLK0_OTAR)

/** Alias for OVC0_BLK1_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK1_OTAR instead.
 * 20, Overlay Target Address Register
 */
#define OVC0_OTAR1 (OVC0_BLK1_OTAR)

/** Alias for OVC0_BLK10_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK10_OTAR instead.
 * 8C, Overlay Target Address Register
 */
#define OVC0_OTAR10 (OVC0_BLK10_OTAR)

/** Alias for OVC0_BLK11_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK11_OTAR instead.
 * 98, Overlay Target Address Register
 */
#define OVC0_OTAR11 (OVC0_BLK11_OTAR)

/** Alias for OVC0_BLK12_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK12_OTAR instead.
 * A4, Overlay Target Address Register
 */
#define OVC0_OTAR12 (OVC0_BLK12_OTAR)

/** Alias for OVC0_BLK13_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK13_OTAR instead.
 * B0, Overlay Target Address Register
 */
#define OVC0_OTAR13 (OVC0_BLK13_OTAR)

/** Alias for OVC0_BLK14_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK14_OTAR instead.
 * BC, Overlay Target Address Register
 */
#define OVC0_OTAR14 (OVC0_BLK14_OTAR)

/** Alias for OVC0_BLK15_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK15_OTAR instead.
 * C8, Overlay Target Address Register
 */
#define OVC0_OTAR15 (OVC0_BLK15_OTAR)

/** Alias for OVC0_BLK16_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK16_OTAR instead.
 * D4, Overlay Target Address Register
 */
#define OVC0_OTAR16 (OVC0_BLK16_OTAR)

/** Alias for OVC0_BLK17_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK17_OTAR instead.
 * E0, Overlay Target Address Register
 */
#define OVC0_OTAR17 (OVC0_BLK17_OTAR)

/** Alias for OVC0_BLK18_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK18_OTAR instead.
 * EC, Overlay Target Address Register
 */
#define OVC0_OTAR18 (OVC0_BLK18_OTAR)

/** Alias for OVC0_BLK19_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK19_OTAR instead.
 * F8, Overlay Target Address Register
 */
#define OVC0_OTAR19 (OVC0_BLK19_OTAR)

/** Alias for OVC0_BLK2_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK2_OTAR instead.
 * 2C, Overlay Target Address Register
 */
#define OVC0_OTAR2 (OVC0_BLK2_OTAR)

/** Alias for OVC0_BLK20_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK20_OTAR instead.
 * 104, Overlay Target Address Register
 */
#define OVC0_OTAR20 (OVC0_BLK20_OTAR)

/** Alias for OVC0_BLK21_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK21_OTAR instead.
 * 110, Overlay Target Address Register
 */
#define OVC0_OTAR21 (OVC0_BLK21_OTAR)

/** Alias for OVC0_BLK22_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK22_OTAR instead.
 * 11C, Overlay Target Address Register
 */
#define OVC0_OTAR22 (OVC0_BLK22_OTAR)

/** Alias for OVC0_BLK23_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK23_OTAR instead.
 * 128, Overlay Target Address Register
 */
#define OVC0_OTAR23 (OVC0_BLK23_OTAR)

/** Alias for OVC0_BLK24_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK24_OTAR instead.
 * 134, Overlay Target Address Register
 */
#define OVC0_OTAR24 (OVC0_BLK24_OTAR)

/** Alias for OVC0_BLK25_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK25_OTAR instead.
 * 140, Overlay Target Address Register
 */
#define OVC0_OTAR25 (OVC0_BLK25_OTAR)

/** Alias for OVC0_BLK26_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK26_OTAR instead.
 * 14C, Overlay Target Address Register
 */
#define OVC0_OTAR26 (OVC0_BLK26_OTAR)

/** Alias for OVC0_BLK27_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK27_OTAR instead.
 * 158, Overlay Target Address Register
 */
#define OVC0_OTAR27 (OVC0_BLK27_OTAR)

/** Alias for OVC0_BLK28_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK28_OTAR instead.
 * 164, Overlay Target Address Register
 */
#define OVC0_OTAR28 (OVC0_BLK28_OTAR)

/** Alias for OVC0_BLK29_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK29_OTAR instead.
 * 170, Overlay Target Address Register
 */
#define OVC0_OTAR29 (OVC0_BLK29_OTAR)

/** Alias for OVC0_BLK3_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK3_OTAR instead.
 * 38, Overlay Target Address Register
 */
#define OVC0_OTAR3 (OVC0_BLK3_OTAR)

/** Alias for OVC0_BLK30_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK30_OTAR instead.
 * 17C, Overlay Target Address Register
 */
#define OVC0_OTAR30 (OVC0_BLK30_OTAR)

/** Alias for OVC0_BLK31_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK31_OTAR instead.
 * 188, Overlay Target Address Register
 */
#define OVC0_OTAR31 (OVC0_BLK31_OTAR)

/** Alias for OVC0_BLK4_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK4_OTAR instead.
 * 44, Overlay Target Address Register
 */
#define OVC0_OTAR4 (OVC0_BLK4_OTAR)

/** Alias for OVC0_BLK5_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK5_OTAR instead.
 * 50, Overlay Target Address Register
 */
#define OVC0_OTAR5 (OVC0_BLK5_OTAR)

/** Alias for OVC0_BLK6_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK6_OTAR instead.
 * 5C, Overlay Target Address Register
 */
#define OVC0_OTAR6 (OVC0_BLK6_OTAR)

/** Alias for OVC0_BLK7_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK7_OTAR instead.
 * 68, Overlay Target Address Register
 */
#define OVC0_OTAR7 (OVC0_BLK7_OTAR)

/** Alias for OVC0_BLK8_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK8_OTAR instead.
 * 74, Overlay Target Address Register
 */
#define OVC0_OTAR8 (OVC0_BLK8_OTAR)

/** Alias for OVC0_BLK9_OTAR.
 *  Note that this definition is obsolete, use OVC0_BLK9_OTAR instead.
 * 80, Overlay Target Address Register
 */
#define OVC0_OTAR9 (OVC0_BLK9_OTAR)

/** Alias for OVC0_BLK0_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK0_RABR instead.
 * 10, Redirected Address Base Register
 */
#define OVC0_RABR0 (OVC0_BLK0_RABR)

/** Alias for OVC0_BLK1_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK1_RABR instead.
 * 1C, Redirected Address Base Register
 */
#define OVC0_RABR1 (OVC0_BLK1_RABR)

/** Alias for OVC0_BLK10_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK10_RABR instead.
 * 88, Redirected Address Base Register
 */
#define OVC0_RABR10 (OVC0_BLK10_RABR)

/** Alias for OVC0_BLK11_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK11_RABR instead.
 * 94, Redirected Address Base Register
 */
#define OVC0_RABR11 (OVC0_BLK11_RABR)

/** Alias for OVC0_BLK12_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK12_RABR instead.
 * A0, Redirected Address Base Register
 */
#define OVC0_RABR12 (OVC0_BLK12_RABR)

/** Alias for OVC0_BLK13_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK13_RABR instead.
 * AC, Redirected Address Base Register
 */
#define OVC0_RABR13 (OVC0_BLK13_RABR)

/** Alias for OVC0_BLK14_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK14_RABR instead.
 * B8, Redirected Address Base Register
 */
#define OVC0_RABR14 (OVC0_BLK14_RABR)

/** Alias for OVC0_BLK15_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK15_RABR instead.
 * C4, Redirected Address Base Register
 */
#define OVC0_RABR15 (OVC0_BLK15_RABR)

/** Alias for OVC0_BLK16_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK16_RABR instead.
 * D0, Redirected Address Base Register
 */
#define OVC0_RABR16 (OVC0_BLK16_RABR)

/** Alias for OVC0_BLK17_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK17_RABR instead.
 * DC, Redirected Address Base Register
 */
#define OVC0_RABR17 (OVC0_BLK17_RABR)

/** Alias for OVC0_BLK18_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK18_RABR instead.
 * E8, Redirected Address Base Register
 */
#define OVC0_RABR18 (OVC0_BLK18_RABR)

/** Alias for OVC0_BLK19_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK19_RABR instead.
 * F4, Redirected Address Base Register
 */
#define OVC0_RABR19 (OVC0_BLK19_RABR)

/** Alias for OVC0_BLK2_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK2_RABR instead.
 * 28, Redirected Address Base Register
 */
#define OVC0_RABR2 (OVC0_BLK2_RABR)

/** Alias for OVC0_BLK20_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK20_RABR instead.
 * 100, Redirected Address Base Register
 */
#define OVC0_RABR20 (OVC0_BLK20_RABR)

/** Alias for OVC0_BLK21_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK21_RABR instead.
 * 10C, Redirected Address Base Register
 */
#define OVC0_RABR21 (OVC0_BLK21_RABR)

/** Alias for OVC0_BLK22_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK22_RABR instead.
 * 118, Redirected Address Base Register
 */
#define OVC0_RABR22 (OVC0_BLK22_RABR)

/** Alias for OVC0_BLK23_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK23_RABR instead.
 * 124, Redirected Address Base Register
 */
#define OVC0_RABR23 (OVC0_BLK23_RABR)

/** Alias for OVC0_BLK24_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK24_RABR instead.
 * 130, Redirected Address Base Register
 */
#define OVC0_RABR24 (OVC0_BLK24_RABR)

/** Alias for OVC0_BLK25_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK25_RABR instead.
 * 13C, Redirected Address Base Register
 */
#define OVC0_RABR25 (OVC0_BLK25_RABR)

/** Alias for OVC0_BLK26_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK26_RABR instead.
 * 148, Redirected Address Base Register
 */
#define OVC0_RABR26 (OVC0_BLK26_RABR)

/** Alias for OVC0_BLK27_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK27_RABR instead.
 * 154, Redirected Address Base Register
 */
#define OVC0_RABR27 (OVC0_BLK27_RABR)

/** Alias for OVC0_BLK28_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK28_RABR instead.
 * 160, Redirected Address Base Register
 */
#define OVC0_RABR28 (OVC0_BLK28_RABR)

/** Alias for OVC0_BLK29_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK29_RABR instead.
 * 16C, Redirected Address Base Register
 */
#define OVC0_RABR29 (OVC0_BLK29_RABR)

/** Alias for OVC0_BLK3_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK3_RABR instead.
 * 34, Redirected Address Base Register
 */
#define OVC0_RABR3 (OVC0_BLK3_RABR)

/** Alias for OVC0_BLK30_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK30_RABR instead.
 * 178, Redirected Address Base Register
 */
#define OVC0_RABR30 (OVC0_BLK30_RABR)

/** Alias for OVC0_BLK31_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK31_RABR instead.
 * 184, Redirected Address Base Register
 */
#define OVC0_RABR31 (OVC0_BLK31_RABR)

/** Alias for OVC0_BLK4_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK4_RABR instead.
 * 40, Redirected Address Base Register
 */
#define OVC0_RABR4 (OVC0_BLK4_RABR)

/** Alias for OVC0_BLK5_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK5_RABR instead.
 * 4C, Redirected Address Base Register
 */
#define OVC0_RABR5 (OVC0_BLK5_RABR)

/** Alias for OVC0_BLK6_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK6_RABR instead.
 * 58, Redirected Address Base Register
 */
#define OVC0_RABR6 (OVC0_BLK6_RABR)

/** Alias for OVC0_BLK7_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK7_RABR instead.
 * 64, Redirected Address Base Register
 */
#define OVC0_RABR7 (OVC0_BLK7_RABR)

/** Alias for OVC0_BLK8_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK8_RABR instead.
 * 70, Redirected Address Base Register
 */
#define OVC0_RABR8 (OVC0_BLK8_RABR)

/** Alias for OVC0_BLK9_RABR.
 *  Note that this definition is obsolete, use OVC0_BLK9_RABR instead.
 * 7C, Redirected Address Base Register
 */
#define OVC0_RABR9 (OVC0_BLK9_RABR)

/******************************************************************************/
/*                              Define (2-OVC1)                               */
/******************************************************************************/

/** 18, Overlay Mask Register */
#define OVC1_BLK0_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FB18u)) /* lint --e(923)*/

/** 14, Overlay Target Address Register */
#define OVC1_BLK0_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FB14u)) /* lint --e(923)*/

/** 10, Redirected Address Base Register */
#define OVC1_BLK0_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FB10u)) /* lint --e(923)*/

/** 90, Overlay Mask Register */
#define OVC1_BLK10_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FB90u)) /* lint --e(923)*/

/** 8C, Overlay Target Address Register */
#define OVC1_BLK10_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FB8Cu)) /* lint --e(923)*/

/** 88, Redirected Address Base Register */
#define OVC1_BLK10_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FB88u)) /* lint --e(923)*/

/** 9C, Overlay Mask Register */
#define OVC1_BLK11_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FB9Cu)) /* lint --e(923)*/

/** 98, Overlay Target Address Register */
#define OVC1_BLK11_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FB98u)) /* lint --e(923)*/

/** 94, Redirected Address Base Register */
#define OVC1_BLK11_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FB94u)) /* lint --e(923)*/

/** A8, Overlay Mask Register */
#define OVC1_BLK12_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FBA8u)) /* lint --e(923)*/

/** A4, Overlay Target Address Register */
#define OVC1_BLK12_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FBA4u)) /* lint --e(923)*/

/** A0, Redirected Address Base Register */
#define OVC1_BLK12_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FBA0u)) /* lint --e(923)*/

/** B4, Overlay Mask Register */
#define OVC1_BLK13_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FBB4u)) /* lint --e(923)*/

/** B0, Overlay Target Address Register */
#define OVC1_BLK13_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FBB0u)) /* lint --e(923)*/

/** AC, Redirected Address Base Register */
#define OVC1_BLK13_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FBACu)) /* lint --e(923)*/

/** C0, Overlay Mask Register */
#define OVC1_BLK14_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FBC0u)) /* lint --e(923)*/

/** BC, Overlay Target Address Register */
#define OVC1_BLK14_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FBBCu)) /* lint --e(923)*/

/** B8, Redirected Address Base Register */
#define OVC1_BLK14_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FBB8u)) /* lint --e(923)*/

/** CC, Overlay Mask Register */
#define OVC1_BLK15_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FBCCu)) /* lint --e(923)*/

/** C8, Overlay Target Address Register */
#define OVC1_BLK15_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FBC8u)) /* lint --e(923)*/

/** C4, Redirected Address Base Register */
#define OVC1_BLK15_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FBC4u)) /* lint --e(923)*/

/** D8, Overlay Mask Register */
#define OVC1_BLK16_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FBD8u)) /* lint --e(923)*/

/** D4, Overlay Target Address Register */
#define OVC1_BLK16_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FBD4u)) /* lint --e(923)*/

/** D0, Redirected Address Base Register */
#define OVC1_BLK16_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FBD0u)) /* lint --e(923)*/

/** E4, Overlay Mask Register */
#define OVC1_BLK17_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FBE4u)) /* lint --e(923)*/

/** E0, Overlay Target Address Register */
#define OVC1_BLK17_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FBE0u)) /* lint --e(923)*/

/** DC, Redirected Address Base Register */
#define OVC1_BLK17_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FBDCu)) /* lint --e(923)*/

/** F0, Overlay Mask Register */
#define OVC1_BLK18_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FBF0u)) /* lint --e(923)*/

/** EC, Overlay Target Address Register */
#define OVC1_BLK18_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FBECu)) /* lint --e(923)*/

/** E8, Redirected Address Base Register */
#define OVC1_BLK18_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FBE8u)) /* lint --e(923)*/

/** FC, Overlay Mask Register */
#define OVC1_BLK19_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FBFCu)) /* lint --e(923)*/

/** F8, Overlay Target Address Register */
#define OVC1_BLK19_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FBF8u)) /* lint --e(923)*/

/** F4, Redirected Address Base Register */
#define OVC1_BLK19_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FBF4u)) /* lint --e(923)*/

/** 24, Overlay Mask Register */
#define OVC1_BLK1_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FB24u)) /* lint --e(923)*/

/** 20, Overlay Target Address Register */
#define OVC1_BLK1_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FB20u)) /* lint --e(923)*/

/** 1C, Redirected Address Base Register */
#define OVC1_BLK1_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FB1Cu)) /* lint --e(923)*/

/** 108, Overlay Mask Register */
#define OVC1_BLK20_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FC08u)) /* lint --e(923)*/

/** 104, Overlay Target Address Register */
#define OVC1_BLK20_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FC04u)) /* lint --e(923)*/

/** 100, Redirected Address Base Register */
#define OVC1_BLK20_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FC00u)) /* lint --e(923)*/

/** 114, Overlay Mask Register */
#define OVC1_BLK21_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FC14u)) /* lint --e(923)*/

/** 110, Overlay Target Address Register */
#define OVC1_BLK21_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FC10u)) /* lint --e(923)*/

/** 10C, Redirected Address Base Register */
#define OVC1_BLK21_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FC0Cu)) /* lint --e(923)*/

/** 120, Overlay Mask Register */
#define OVC1_BLK22_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FC20u)) /* lint --e(923)*/

/** 11C, Overlay Target Address Register */
#define OVC1_BLK22_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FC1Cu)) /* lint --e(923)*/

/** 118, Redirected Address Base Register */
#define OVC1_BLK22_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FC18u)) /* lint --e(923)*/

/** 12C, Overlay Mask Register */
#define OVC1_BLK23_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FC2Cu)) /* lint --e(923)*/

/** 128, Overlay Target Address Register */
#define OVC1_BLK23_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FC28u)) /* lint --e(923)*/

/** 124, Redirected Address Base Register */
#define OVC1_BLK23_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FC24u)) /* lint --e(923)*/

/** 138, Overlay Mask Register */
#define OVC1_BLK24_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FC38u)) /* lint --e(923)*/

/** 134, Overlay Target Address Register */
#define OVC1_BLK24_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FC34u)) /* lint --e(923)*/

/** 130, Redirected Address Base Register */
#define OVC1_BLK24_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FC30u)) /* lint --e(923)*/

/** 144, Overlay Mask Register */
#define OVC1_BLK25_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FC44u)) /* lint --e(923)*/

/** 140, Overlay Target Address Register */
#define OVC1_BLK25_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FC40u)) /* lint --e(923)*/

/** 13C, Redirected Address Base Register */
#define OVC1_BLK25_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FC3Cu)) /* lint --e(923)*/

/** 150, Overlay Mask Register */
#define OVC1_BLK26_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FC50u)) /* lint --e(923)*/

/** 14C, Overlay Target Address Register */
#define OVC1_BLK26_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FC4Cu)) /* lint --e(923)*/

/** 148, Redirected Address Base Register */
#define OVC1_BLK26_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FC48u)) /* lint --e(923)*/

/** 15C, Overlay Mask Register */
#define OVC1_BLK27_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FC5Cu)) /* lint --e(923)*/

/** 158, Overlay Target Address Register */
#define OVC1_BLK27_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FC58u)) /* lint --e(923)*/

/** 154, Redirected Address Base Register */
#define OVC1_BLK27_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FC54u)) /* lint --e(923)*/

/** 168, Overlay Mask Register */
#define OVC1_BLK28_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FC68u)) /* lint --e(923)*/

/** 164, Overlay Target Address Register */
#define OVC1_BLK28_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FC64u)) /* lint --e(923)*/

/** 160, Redirected Address Base Register */
#define OVC1_BLK28_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FC60u)) /* lint --e(923)*/

/** 174, Overlay Mask Register */
#define OVC1_BLK29_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FC74u)) /* lint --e(923)*/

/** 170, Overlay Target Address Register */
#define OVC1_BLK29_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FC70u)) /* lint --e(923)*/

/** 16C, Redirected Address Base Register */
#define OVC1_BLK29_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FC6Cu)) /* lint --e(923)*/

/** 30, Overlay Mask Register */
#define OVC1_BLK2_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FB30u)) /* lint --e(923)*/

/** 2C, Overlay Target Address Register */
#define OVC1_BLK2_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FB2Cu)) /* lint --e(923)*/

/** 28, Redirected Address Base Register */
#define OVC1_BLK2_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FB28u)) /* lint --e(923)*/

/** 180, Overlay Mask Register */
#define OVC1_BLK30_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FC80u)) /* lint --e(923)*/

/** 17C, Overlay Target Address Register */
#define OVC1_BLK30_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FC7Cu)) /* lint --e(923)*/

/** 178, Redirected Address Base Register */
#define OVC1_BLK30_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FC78u)) /* lint --e(923)*/

/** 18C, Overlay Mask Register */
#define OVC1_BLK31_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FC8Cu)) /* lint --e(923)*/

/** 188, Overlay Target Address Register */
#define OVC1_BLK31_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FC88u)) /* lint --e(923)*/

/** 184, Redirected Address Base Register */
#define OVC1_BLK31_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FC84u)) /* lint --e(923)*/

/** 3C, Overlay Mask Register */
#define OVC1_BLK3_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FB3Cu)) /* lint --e(923)*/

/** 38, Overlay Target Address Register */
#define OVC1_BLK3_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FB38u)) /* lint --e(923)*/

/** 34, Redirected Address Base Register */
#define OVC1_BLK3_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FB34u)) /* lint --e(923)*/

/** 48, Overlay Mask Register */
#define OVC1_BLK4_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FB48u)) /* lint --e(923)*/

/** 44, Overlay Target Address Register */
#define OVC1_BLK4_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FB44u)) /* lint --e(923)*/

/** 40, Redirected Address Base Register */
#define OVC1_BLK4_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FB40u)) /* lint --e(923)*/

/** 54, Overlay Mask Register */
#define OVC1_BLK5_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FB54u)) /* lint --e(923)*/

/** 50, Overlay Target Address Register */
#define OVC1_BLK5_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FB50u)) /* lint --e(923)*/

/** 4C, Redirected Address Base Register */
#define OVC1_BLK5_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FB4Cu)) /* lint --e(923)*/

/** 60, Overlay Mask Register */
#define OVC1_BLK6_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FB60u)) /* lint --e(923)*/

/** 5C, Overlay Target Address Register */
#define OVC1_BLK6_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FB5Cu)) /* lint --e(923)*/

/** 58, Redirected Address Base Register */
#define OVC1_BLK6_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FB58u)) /* lint --e(923)*/

/** 6C, Overlay Mask Register */
#define OVC1_BLK7_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FB6Cu)) /* lint --e(923)*/

/** 68, Overlay Target Address Register */
#define OVC1_BLK7_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FB68u)) /* lint --e(923)*/

/** 64, Redirected Address Base Register */
#define OVC1_BLK7_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FB64u)) /* lint --e(923)*/

/** 78, Overlay Mask Register */
#define OVC1_BLK8_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FB78u)) /* lint --e(923)*/

/** 74, Overlay Target Address Register */
#define OVC1_BLK8_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FB74u)) /* lint --e(923)*/

/** 70, Redirected Address Base Register */
#define OVC1_BLK8_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FB70u)) /* lint --e(923)*/

/** 84, Overlay Mask Register */
#define OVC1_BLK9_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF882FB84u)) /* lint --e(923)*/

/** 80, Overlay Target Address Register */
#define OVC1_BLK9_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF882FB80u)) /* lint --e(923)*/

/** 7C, Redirected Address Base Register */
#define OVC1_BLK9_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF882FB7Cu)) /* lint --e(923)*/

/** Alias for OVC1_BLK0_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK0_OMASK instead.
 * 18, Overlay Mask Register
 */
#define OVC1_OMASK0 (OVC1_BLK0_OMASK)

/** Alias for OVC1_BLK1_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK1_OMASK instead.
 * 24, Overlay Mask Register
 */
#define OVC1_OMASK1 (OVC1_BLK1_OMASK)

/** Alias for OVC1_BLK10_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK10_OMASK instead.
 * 90, Overlay Mask Register
 */
#define OVC1_OMASK10 (OVC1_BLK10_OMASK)

/** Alias for OVC1_BLK11_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK11_OMASK instead.
 * 9C, Overlay Mask Register
 */
#define OVC1_OMASK11 (OVC1_BLK11_OMASK)

/** Alias for OVC1_BLK12_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK12_OMASK instead.
 * A8, Overlay Mask Register
 */
#define OVC1_OMASK12 (OVC1_BLK12_OMASK)

/** Alias for OVC1_BLK13_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK13_OMASK instead.
 * B4, Overlay Mask Register
 */
#define OVC1_OMASK13 (OVC1_BLK13_OMASK)

/** Alias for OVC1_BLK14_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK14_OMASK instead.
 * C0, Overlay Mask Register
 */
#define OVC1_OMASK14 (OVC1_BLK14_OMASK)

/** Alias for OVC1_BLK15_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK15_OMASK instead.
 * CC, Overlay Mask Register
 */
#define OVC1_OMASK15 (OVC1_BLK15_OMASK)

/** Alias for OVC1_BLK16_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK16_OMASK instead.
 * D8, Overlay Mask Register
 */
#define OVC1_OMASK16 (OVC1_BLK16_OMASK)

/** Alias for OVC1_BLK17_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK17_OMASK instead.
 * E4, Overlay Mask Register
 */
#define OVC1_OMASK17 (OVC1_BLK17_OMASK)

/** Alias for OVC1_BLK18_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK18_OMASK instead.
 * F0, Overlay Mask Register
 */
#define OVC1_OMASK18 (OVC1_BLK18_OMASK)

/** Alias for OVC1_BLK19_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK19_OMASK instead.
 * FC, Overlay Mask Register
 */
#define OVC1_OMASK19 (OVC1_BLK19_OMASK)

/** Alias for OVC1_BLK2_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK2_OMASK instead.
 * 30, Overlay Mask Register
 */
#define OVC1_OMASK2 (OVC1_BLK2_OMASK)

/** Alias for OVC1_BLK20_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK20_OMASK instead.
 * 108, Overlay Mask Register
 */
#define OVC1_OMASK20 (OVC1_BLK20_OMASK)

/** Alias for OVC1_BLK21_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK21_OMASK instead.
 * 114, Overlay Mask Register
 */
#define OVC1_OMASK21 (OVC1_BLK21_OMASK)

/** Alias for OVC1_BLK22_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK22_OMASK instead.
 * 120, Overlay Mask Register
 */
#define OVC1_OMASK22 (OVC1_BLK22_OMASK)

/** Alias for OVC1_BLK23_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK23_OMASK instead.
 * 12C, Overlay Mask Register
 */
#define OVC1_OMASK23 (OVC1_BLK23_OMASK)

/** Alias for OVC1_BLK24_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK24_OMASK instead.
 * 138, Overlay Mask Register
 */
#define OVC1_OMASK24 (OVC1_BLK24_OMASK)

/** Alias for OVC1_BLK25_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK25_OMASK instead.
 * 144, Overlay Mask Register
 */
#define OVC1_OMASK25 (OVC1_BLK25_OMASK)

/** Alias for OVC1_BLK26_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK26_OMASK instead.
 * 150, Overlay Mask Register
 */
#define OVC1_OMASK26 (OVC1_BLK26_OMASK)

/** Alias for OVC1_BLK27_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK27_OMASK instead.
 * 15C, Overlay Mask Register
 */
#define OVC1_OMASK27 (OVC1_BLK27_OMASK)

/** Alias for OVC1_BLK28_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK28_OMASK instead.
 * 168, Overlay Mask Register
 */
#define OVC1_OMASK28 (OVC1_BLK28_OMASK)

/** Alias for OVC1_BLK29_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK29_OMASK instead.
 * 174, Overlay Mask Register
 */
#define OVC1_OMASK29 (OVC1_BLK29_OMASK)

/** Alias for OVC1_BLK3_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK3_OMASK instead.
 * 3C, Overlay Mask Register
 */
#define OVC1_OMASK3 (OVC1_BLK3_OMASK)

/** Alias for OVC1_BLK30_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK30_OMASK instead.
 * 180, Overlay Mask Register
 */
#define OVC1_OMASK30 (OVC1_BLK30_OMASK)

/** Alias for OVC1_BLK31_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK31_OMASK instead.
 * 18C, Overlay Mask Register
 */
#define OVC1_OMASK31 (OVC1_BLK31_OMASK)

/** Alias for OVC1_BLK4_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK4_OMASK instead.
 * 48, Overlay Mask Register
 */
#define OVC1_OMASK4 (OVC1_BLK4_OMASK)

/** Alias for OVC1_BLK5_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK5_OMASK instead.
 * 54, Overlay Mask Register
 */
#define OVC1_OMASK5 (OVC1_BLK5_OMASK)

/** Alias for OVC1_BLK6_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK6_OMASK instead.
 * 60, Overlay Mask Register
 */
#define OVC1_OMASK6 (OVC1_BLK6_OMASK)

/** Alias for OVC1_BLK7_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK7_OMASK instead.
 * 6C, Overlay Mask Register
 */
#define OVC1_OMASK7 (OVC1_BLK7_OMASK)

/** Alias for OVC1_BLK8_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK8_OMASK instead.
 * 78, Overlay Mask Register
 */
#define OVC1_OMASK8 (OVC1_BLK8_OMASK)

/** Alias for OVC1_BLK9_OMASK.
 *  Note that this definition is obsolete, use OVC1_BLK9_OMASK instead.
 * 84, Overlay Mask Register
 */
#define OVC1_OMASK9 (OVC1_BLK9_OMASK)

/** 0, Overlay Range Select Register */
#define OVC1_OSEL ((*(volatile Ifx_OVC_OSEL*)0xF882FB00u)) /* lint --e(923)*/

/** Alias for OVC1_BLK0_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK0_OTAR instead.
 * 14, Overlay Target Address Register
 */
#define OVC1_OTAR0 (OVC1_BLK0_OTAR)

/** Alias for OVC1_BLK1_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK1_OTAR instead.
 * 20, Overlay Target Address Register
 */
#define OVC1_OTAR1 (OVC1_BLK1_OTAR)

/** Alias for OVC1_BLK10_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK10_OTAR instead.
 * 8C, Overlay Target Address Register
 */
#define OVC1_OTAR10 (OVC1_BLK10_OTAR)

/** Alias for OVC1_BLK11_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK11_OTAR instead.
 * 98, Overlay Target Address Register
 */
#define OVC1_OTAR11 (OVC1_BLK11_OTAR)

/** Alias for OVC1_BLK12_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK12_OTAR instead.
 * A4, Overlay Target Address Register
 */
#define OVC1_OTAR12 (OVC1_BLK12_OTAR)

/** Alias for OVC1_BLK13_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK13_OTAR instead.
 * B0, Overlay Target Address Register
 */
#define OVC1_OTAR13 (OVC1_BLK13_OTAR)

/** Alias for OVC1_BLK14_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK14_OTAR instead.
 * BC, Overlay Target Address Register
 */
#define OVC1_OTAR14 (OVC1_BLK14_OTAR)

/** Alias for OVC1_BLK15_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK15_OTAR instead.
 * C8, Overlay Target Address Register
 */
#define OVC1_OTAR15 (OVC1_BLK15_OTAR)

/** Alias for OVC1_BLK16_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK16_OTAR instead.
 * D4, Overlay Target Address Register
 */
#define OVC1_OTAR16 (OVC1_BLK16_OTAR)

/** Alias for OVC1_BLK17_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK17_OTAR instead.
 * E0, Overlay Target Address Register
 */
#define OVC1_OTAR17 (OVC1_BLK17_OTAR)

/** Alias for OVC1_BLK18_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK18_OTAR instead.
 * EC, Overlay Target Address Register
 */
#define OVC1_OTAR18 (OVC1_BLK18_OTAR)

/** Alias for OVC1_BLK19_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK19_OTAR instead.
 * F8, Overlay Target Address Register
 */
#define OVC1_OTAR19 (OVC1_BLK19_OTAR)

/** Alias for OVC1_BLK2_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK2_OTAR instead.
 * 2C, Overlay Target Address Register
 */
#define OVC1_OTAR2 (OVC1_BLK2_OTAR)

/** Alias for OVC1_BLK20_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK20_OTAR instead.
 * 104, Overlay Target Address Register
 */
#define OVC1_OTAR20 (OVC1_BLK20_OTAR)

/** Alias for OVC1_BLK21_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK21_OTAR instead.
 * 110, Overlay Target Address Register
 */
#define OVC1_OTAR21 (OVC1_BLK21_OTAR)

/** Alias for OVC1_BLK22_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK22_OTAR instead.
 * 11C, Overlay Target Address Register
 */
#define OVC1_OTAR22 (OVC1_BLK22_OTAR)

/** Alias for OVC1_BLK23_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK23_OTAR instead.
 * 128, Overlay Target Address Register
 */
#define OVC1_OTAR23 (OVC1_BLK23_OTAR)

/** Alias for OVC1_BLK24_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK24_OTAR instead.
 * 134, Overlay Target Address Register
 */
#define OVC1_OTAR24 (OVC1_BLK24_OTAR)

/** Alias for OVC1_BLK25_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK25_OTAR instead.
 * 140, Overlay Target Address Register
 */
#define OVC1_OTAR25 (OVC1_BLK25_OTAR)

/** Alias for OVC1_BLK26_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK26_OTAR instead.
 * 14C, Overlay Target Address Register
 */
#define OVC1_OTAR26 (OVC1_BLK26_OTAR)

/** Alias for OVC1_BLK27_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK27_OTAR instead.
 * 158, Overlay Target Address Register
 */
#define OVC1_OTAR27 (OVC1_BLK27_OTAR)

/** Alias for OVC1_BLK28_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK28_OTAR instead.
 * 164, Overlay Target Address Register
 */
#define OVC1_OTAR28 (OVC1_BLK28_OTAR)

/** Alias for OVC1_BLK29_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK29_OTAR instead.
 * 170, Overlay Target Address Register
 */
#define OVC1_OTAR29 (OVC1_BLK29_OTAR)

/** Alias for OVC1_BLK3_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK3_OTAR instead.
 * 38, Overlay Target Address Register
 */
#define OVC1_OTAR3 (OVC1_BLK3_OTAR)

/** Alias for OVC1_BLK30_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK30_OTAR instead.
 * 17C, Overlay Target Address Register
 */
#define OVC1_OTAR30 (OVC1_BLK30_OTAR)

/** Alias for OVC1_BLK31_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK31_OTAR instead.
 * 188, Overlay Target Address Register
 */
#define OVC1_OTAR31 (OVC1_BLK31_OTAR)

/** Alias for OVC1_BLK4_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK4_OTAR instead.
 * 44, Overlay Target Address Register
 */
#define OVC1_OTAR4 (OVC1_BLK4_OTAR)

/** Alias for OVC1_BLK5_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK5_OTAR instead.
 * 50, Overlay Target Address Register
 */
#define OVC1_OTAR5 (OVC1_BLK5_OTAR)

/** Alias for OVC1_BLK6_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK6_OTAR instead.
 * 5C, Overlay Target Address Register
 */
#define OVC1_OTAR6 (OVC1_BLK6_OTAR)

/** Alias for OVC1_BLK7_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK7_OTAR instead.
 * 68, Overlay Target Address Register
 */
#define OVC1_OTAR7 (OVC1_BLK7_OTAR)

/** Alias for OVC1_BLK8_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK8_OTAR instead.
 * 74, Overlay Target Address Register
 */
#define OVC1_OTAR8 (OVC1_BLK8_OTAR)

/** Alias for OVC1_BLK9_OTAR.
 *  Note that this definition is obsolete, use OVC1_BLK9_OTAR instead.
 * 80, Overlay Target Address Register
 */
#define OVC1_OTAR9 (OVC1_BLK9_OTAR)

/** Alias for OVC1_BLK0_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK0_RABR instead.
 * 10, Redirected Address Base Register
 */
#define OVC1_RABR0 (OVC1_BLK0_RABR)

/** Alias for OVC1_BLK1_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK1_RABR instead.
 * 1C, Redirected Address Base Register
 */
#define OVC1_RABR1 (OVC1_BLK1_RABR)

/** Alias for OVC1_BLK10_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK10_RABR instead.
 * 88, Redirected Address Base Register
 */
#define OVC1_RABR10 (OVC1_BLK10_RABR)

/** Alias for OVC1_BLK11_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK11_RABR instead.
 * 94, Redirected Address Base Register
 */
#define OVC1_RABR11 (OVC1_BLK11_RABR)

/** Alias for OVC1_BLK12_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK12_RABR instead.
 * A0, Redirected Address Base Register
 */
#define OVC1_RABR12 (OVC1_BLK12_RABR)

/** Alias for OVC1_BLK13_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK13_RABR instead.
 * AC, Redirected Address Base Register
 */
#define OVC1_RABR13 (OVC1_BLK13_RABR)

/** Alias for OVC1_BLK14_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK14_RABR instead.
 * B8, Redirected Address Base Register
 */
#define OVC1_RABR14 (OVC1_BLK14_RABR)

/** Alias for OVC1_BLK15_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK15_RABR instead.
 * C4, Redirected Address Base Register
 */
#define OVC1_RABR15 (OVC1_BLK15_RABR)

/** Alias for OVC1_BLK16_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK16_RABR instead.
 * D0, Redirected Address Base Register
 */
#define OVC1_RABR16 (OVC1_BLK16_RABR)

/** Alias for OVC1_BLK17_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK17_RABR instead.
 * DC, Redirected Address Base Register
 */
#define OVC1_RABR17 (OVC1_BLK17_RABR)

/** Alias for OVC1_BLK18_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK18_RABR instead.
 * E8, Redirected Address Base Register
 */
#define OVC1_RABR18 (OVC1_BLK18_RABR)

/** Alias for OVC1_BLK19_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK19_RABR instead.
 * F4, Redirected Address Base Register
 */
#define OVC1_RABR19 (OVC1_BLK19_RABR)

/** Alias for OVC1_BLK2_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK2_RABR instead.
 * 28, Redirected Address Base Register
 */
#define OVC1_RABR2 (OVC1_BLK2_RABR)

/** Alias for OVC1_BLK20_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK20_RABR instead.
 * 100, Redirected Address Base Register
 */
#define OVC1_RABR20 (OVC1_BLK20_RABR)

/** Alias for OVC1_BLK21_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK21_RABR instead.
 * 10C, Redirected Address Base Register
 */
#define OVC1_RABR21 (OVC1_BLK21_RABR)

/** Alias for OVC1_BLK22_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK22_RABR instead.
 * 118, Redirected Address Base Register
 */
#define OVC1_RABR22 (OVC1_BLK22_RABR)

/** Alias for OVC1_BLK23_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK23_RABR instead.
 * 124, Redirected Address Base Register
 */
#define OVC1_RABR23 (OVC1_BLK23_RABR)

/** Alias for OVC1_BLK24_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK24_RABR instead.
 * 130, Redirected Address Base Register
 */
#define OVC1_RABR24 (OVC1_BLK24_RABR)

/** Alias for OVC1_BLK25_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK25_RABR instead.
 * 13C, Redirected Address Base Register
 */
#define OVC1_RABR25 (OVC1_BLK25_RABR)

/** Alias for OVC1_BLK26_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK26_RABR instead.
 * 148, Redirected Address Base Register
 */
#define OVC1_RABR26 (OVC1_BLK26_RABR)

/** Alias for OVC1_BLK27_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK27_RABR instead.
 * 154, Redirected Address Base Register
 */
#define OVC1_RABR27 (OVC1_BLK27_RABR)

/** Alias for OVC1_BLK28_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK28_RABR instead.
 * 160, Redirected Address Base Register
 */
#define OVC1_RABR28 (OVC1_BLK28_RABR)

/** Alias for OVC1_BLK29_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK29_RABR instead.
 * 16C, Redirected Address Base Register
 */
#define OVC1_RABR29 (OVC1_BLK29_RABR)

/** Alias for OVC1_BLK3_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK3_RABR instead.
 * 34, Redirected Address Base Register
 */
#define OVC1_RABR3 (OVC1_BLK3_RABR)

/** Alias for OVC1_BLK30_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK30_RABR instead.
 * 178, Redirected Address Base Register
 */
#define OVC1_RABR30 (OVC1_BLK30_RABR)

/** Alias for OVC1_BLK31_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK31_RABR instead.
 * 184, Redirected Address Base Register
 */
#define OVC1_RABR31 (OVC1_BLK31_RABR)

/** Alias for OVC1_BLK4_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK4_RABR instead.
 * 40, Redirected Address Base Register
 */
#define OVC1_RABR4 (OVC1_BLK4_RABR)

/** Alias for OVC1_BLK5_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK5_RABR instead.
 * 4C, Redirected Address Base Register
 */
#define OVC1_RABR5 (OVC1_BLK5_RABR)

/** Alias for OVC1_BLK6_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK6_RABR instead.
 * 58, Redirected Address Base Register
 */
#define OVC1_RABR6 (OVC1_BLK6_RABR)

/** Alias for OVC1_BLK7_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK7_RABR instead.
 * 64, Redirected Address Base Register
 */
#define OVC1_RABR7 (OVC1_BLK7_RABR)

/** Alias for OVC1_BLK8_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK8_RABR instead.
 * 70, Redirected Address Base Register
 */
#define OVC1_RABR8 (OVC1_BLK8_RABR)

/** Alias for OVC1_BLK9_RABR.
 *  Note that this definition is obsolete, use OVC1_BLK9_RABR instead.
 * 7C, Redirected Address Base Register
 */
#define OVC1_RABR9 (OVC1_BLK9_RABR)

/******************************************************************************/
/*                              Define (2-OVC2)                               */
/******************************************************************************/

/** 18, Overlay Mask Register */
#define OVC2_BLK0_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FB18u)) /* lint --e(923)*/

/** 14, Overlay Target Address Register */
#define OVC2_BLK0_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FB14u)) /* lint --e(923)*/

/** 10, Redirected Address Base Register */
#define OVC2_BLK0_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FB10u)) /* lint --e(923)*/

/** 90, Overlay Mask Register */
#define OVC2_BLK10_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FB90u)) /* lint --e(923)*/

/** 8C, Overlay Target Address Register */
#define OVC2_BLK10_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FB8Cu)) /* lint --e(923)*/

/** 88, Redirected Address Base Register */
#define OVC2_BLK10_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FB88u)) /* lint --e(923)*/

/** 9C, Overlay Mask Register */
#define OVC2_BLK11_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FB9Cu)) /* lint --e(923)*/

/** 98, Overlay Target Address Register */
#define OVC2_BLK11_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FB98u)) /* lint --e(923)*/

/** 94, Redirected Address Base Register */
#define OVC2_BLK11_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FB94u)) /* lint --e(923)*/

/** A8, Overlay Mask Register */
#define OVC2_BLK12_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FBA8u)) /* lint --e(923)*/

/** A4, Overlay Target Address Register */
#define OVC2_BLK12_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FBA4u)) /* lint --e(923)*/

/** A0, Redirected Address Base Register */
#define OVC2_BLK12_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FBA0u)) /* lint --e(923)*/

/** B4, Overlay Mask Register */
#define OVC2_BLK13_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FBB4u)) /* lint --e(923)*/

/** B0, Overlay Target Address Register */
#define OVC2_BLK13_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FBB0u)) /* lint --e(923)*/

/** AC, Redirected Address Base Register */
#define OVC2_BLK13_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FBACu)) /* lint --e(923)*/

/** C0, Overlay Mask Register */
#define OVC2_BLK14_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FBC0u)) /* lint --e(923)*/

/** BC, Overlay Target Address Register */
#define OVC2_BLK14_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FBBCu)) /* lint --e(923)*/

/** B8, Redirected Address Base Register */
#define OVC2_BLK14_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FBB8u)) /* lint --e(923)*/

/** CC, Overlay Mask Register */
#define OVC2_BLK15_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FBCCu)) /* lint --e(923)*/

/** C8, Overlay Target Address Register */
#define OVC2_BLK15_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FBC8u)) /* lint --e(923)*/

/** C4, Redirected Address Base Register */
#define OVC2_BLK15_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FBC4u)) /* lint --e(923)*/

/** D8, Overlay Mask Register */
#define OVC2_BLK16_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FBD8u)) /* lint --e(923)*/

/** D4, Overlay Target Address Register */
#define OVC2_BLK16_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FBD4u)) /* lint --e(923)*/

/** D0, Redirected Address Base Register */
#define OVC2_BLK16_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FBD0u)) /* lint --e(923)*/

/** E4, Overlay Mask Register */
#define OVC2_BLK17_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FBE4u)) /* lint --e(923)*/

/** E0, Overlay Target Address Register */
#define OVC2_BLK17_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FBE0u)) /* lint --e(923)*/

/** DC, Redirected Address Base Register */
#define OVC2_BLK17_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FBDCu)) /* lint --e(923)*/

/** F0, Overlay Mask Register */
#define OVC2_BLK18_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FBF0u)) /* lint --e(923)*/

/** EC, Overlay Target Address Register */
#define OVC2_BLK18_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FBECu)) /* lint --e(923)*/

/** E8, Redirected Address Base Register */
#define OVC2_BLK18_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FBE8u)) /* lint --e(923)*/

/** FC, Overlay Mask Register */
#define OVC2_BLK19_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FBFCu)) /* lint --e(923)*/

/** F8, Overlay Target Address Register */
#define OVC2_BLK19_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FBF8u)) /* lint --e(923)*/

/** F4, Redirected Address Base Register */
#define OVC2_BLK19_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FBF4u)) /* lint --e(923)*/

/** 24, Overlay Mask Register */
#define OVC2_BLK1_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FB24u)) /* lint --e(923)*/

/** 20, Overlay Target Address Register */
#define OVC2_BLK1_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FB20u)) /* lint --e(923)*/

/** 1C, Redirected Address Base Register */
#define OVC2_BLK1_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FB1Cu)) /* lint --e(923)*/

/** 108, Overlay Mask Register */
#define OVC2_BLK20_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FC08u)) /* lint --e(923)*/

/** 104, Overlay Target Address Register */
#define OVC2_BLK20_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FC04u)) /* lint --e(923)*/

/** 100, Redirected Address Base Register */
#define OVC2_BLK20_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FC00u)) /* lint --e(923)*/

/** 114, Overlay Mask Register */
#define OVC2_BLK21_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FC14u)) /* lint --e(923)*/

/** 110, Overlay Target Address Register */
#define OVC2_BLK21_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FC10u)) /* lint --e(923)*/

/** 10C, Redirected Address Base Register */
#define OVC2_BLK21_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FC0Cu)) /* lint --e(923)*/

/** 120, Overlay Mask Register */
#define OVC2_BLK22_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FC20u)) /* lint --e(923)*/

/** 11C, Overlay Target Address Register */
#define OVC2_BLK22_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FC1Cu)) /* lint --e(923)*/

/** 118, Redirected Address Base Register */
#define OVC2_BLK22_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FC18u)) /* lint --e(923)*/

/** 12C, Overlay Mask Register */
#define OVC2_BLK23_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FC2Cu)) /* lint --e(923)*/

/** 128, Overlay Target Address Register */
#define OVC2_BLK23_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FC28u)) /* lint --e(923)*/

/** 124, Redirected Address Base Register */
#define OVC2_BLK23_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FC24u)) /* lint --e(923)*/

/** 138, Overlay Mask Register */
#define OVC2_BLK24_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FC38u)) /* lint --e(923)*/

/** 134, Overlay Target Address Register */
#define OVC2_BLK24_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FC34u)) /* lint --e(923)*/

/** 130, Redirected Address Base Register */
#define OVC2_BLK24_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FC30u)) /* lint --e(923)*/

/** 144, Overlay Mask Register */
#define OVC2_BLK25_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FC44u)) /* lint --e(923)*/

/** 140, Overlay Target Address Register */
#define OVC2_BLK25_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FC40u)) /* lint --e(923)*/

/** 13C, Redirected Address Base Register */
#define OVC2_BLK25_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FC3Cu)) /* lint --e(923)*/

/** 150, Overlay Mask Register */
#define OVC2_BLK26_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FC50u)) /* lint --e(923)*/

/** 14C, Overlay Target Address Register */
#define OVC2_BLK26_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FC4Cu)) /* lint --e(923)*/

/** 148, Redirected Address Base Register */
#define OVC2_BLK26_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FC48u)) /* lint --e(923)*/

/** 15C, Overlay Mask Register */
#define OVC2_BLK27_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FC5Cu)) /* lint --e(923)*/

/** 158, Overlay Target Address Register */
#define OVC2_BLK27_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FC58u)) /* lint --e(923)*/

/** 154, Redirected Address Base Register */
#define OVC2_BLK27_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FC54u)) /* lint --e(923)*/

/** 168, Overlay Mask Register */
#define OVC2_BLK28_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FC68u)) /* lint --e(923)*/

/** 164, Overlay Target Address Register */
#define OVC2_BLK28_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FC64u)) /* lint --e(923)*/

/** 160, Redirected Address Base Register */
#define OVC2_BLK28_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FC60u)) /* lint --e(923)*/

/** 174, Overlay Mask Register */
#define OVC2_BLK29_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FC74u)) /* lint --e(923)*/

/** 170, Overlay Target Address Register */
#define OVC2_BLK29_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FC70u)) /* lint --e(923)*/

/** 16C, Redirected Address Base Register */
#define OVC2_BLK29_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FC6Cu)) /* lint --e(923)*/

/** 30, Overlay Mask Register */
#define OVC2_BLK2_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FB30u)) /* lint --e(923)*/

/** 2C, Overlay Target Address Register */
#define OVC2_BLK2_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FB2Cu)) /* lint --e(923)*/

/** 28, Redirected Address Base Register */
#define OVC2_BLK2_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FB28u)) /* lint --e(923)*/

/** 180, Overlay Mask Register */
#define OVC2_BLK30_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FC80u)) /* lint --e(923)*/

/** 17C, Overlay Target Address Register */
#define OVC2_BLK30_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FC7Cu)) /* lint --e(923)*/

/** 178, Redirected Address Base Register */
#define OVC2_BLK30_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FC78u)) /* lint --e(923)*/

/** 18C, Overlay Mask Register */
#define OVC2_BLK31_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FC8Cu)) /* lint --e(923)*/

/** 188, Overlay Target Address Register */
#define OVC2_BLK31_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FC88u)) /* lint --e(923)*/

/** 184, Redirected Address Base Register */
#define OVC2_BLK31_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FC84u)) /* lint --e(923)*/

/** 3C, Overlay Mask Register */
#define OVC2_BLK3_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FB3Cu)) /* lint --e(923)*/

/** 38, Overlay Target Address Register */
#define OVC2_BLK3_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FB38u)) /* lint --e(923)*/

/** 34, Redirected Address Base Register */
#define OVC2_BLK3_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FB34u)) /* lint --e(923)*/

/** 48, Overlay Mask Register */
#define OVC2_BLK4_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FB48u)) /* lint --e(923)*/

/** 44, Overlay Target Address Register */
#define OVC2_BLK4_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FB44u)) /* lint --e(923)*/

/** 40, Redirected Address Base Register */
#define OVC2_BLK4_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FB40u)) /* lint --e(923)*/

/** 54, Overlay Mask Register */
#define OVC2_BLK5_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FB54u)) /* lint --e(923)*/

/** 50, Overlay Target Address Register */
#define OVC2_BLK5_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FB50u)) /* lint --e(923)*/

/** 4C, Redirected Address Base Register */
#define OVC2_BLK5_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FB4Cu)) /* lint --e(923)*/

/** 60, Overlay Mask Register */
#define OVC2_BLK6_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FB60u)) /* lint --e(923)*/

/** 5C, Overlay Target Address Register */
#define OVC2_BLK6_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FB5Cu)) /* lint --e(923)*/

/** 58, Redirected Address Base Register */
#define OVC2_BLK6_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FB58u)) /* lint --e(923)*/

/** 6C, Overlay Mask Register */
#define OVC2_BLK7_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FB6Cu)) /* lint --e(923)*/

/** 68, Overlay Target Address Register */
#define OVC2_BLK7_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FB68u)) /* lint --e(923)*/

/** 64, Redirected Address Base Register */
#define OVC2_BLK7_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FB64u)) /* lint --e(923)*/

/** 78, Overlay Mask Register */
#define OVC2_BLK8_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FB78u)) /* lint --e(923)*/

/** 74, Overlay Target Address Register */
#define OVC2_BLK8_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FB74u)) /* lint --e(923)*/

/** 70, Redirected Address Base Register */
#define OVC2_BLK8_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FB70u)) /* lint --e(923)*/

/** 84, Overlay Mask Register */
#define OVC2_BLK9_OMASK ((*(volatile Ifx_OVC_BLK_OMASK*)0xF884FB84u)) /* lint --e(923)*/

/** 80, Overlay Target Address Register */
#define OVC2_BLK9_OTAR ((*(volatile Ifx_OVC_BLK_OTAR*)0xF884FB80u)) /* lint --e(923)*/

/** 7C, Redirected Address Base Register */
#define OVC2_BLK9_RABR ((*(volatile Ifx_OVC_BLK_RABR*)0xF884FB7Cu)) /* lint --e(923)*/

/** Alias for OVC2_BLK0_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK0_OMASK instead.
 * 18, Overlay Mask Register
 */
#define OVC2_OMASK0 (OVC2_BLK0_OMASK)

/** Alias for OVC2_BLK1_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK1_OMASK instead.
 * 24, Overlay Mask Register
 */
#define OVC2_OMASK1 (OVC2_BLK1_OMASK)

/** Alias for OVC2_BLK10_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK10_OMASK instead.
 * 90, Overlay Mask Register
 */
#define OVC2_OMASK10 (OVC2_BLK10_OMASK)

/** Alias for OVC2_BLK11_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK11_OMASK instead.
 * 9C, Overlay Mask Register
 */
#define OVC2_OMASK11 (OVC2_BLK11_OMASK)

/** Alias for OVC2_BLK12_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK12_OMASK instead.
 * A8, Overlay Mask Register
 */
#define OVC2_OMASK12 (OVC2_BLK12_OMASK)

/** Alias for OVC2_BLK13_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK13_OMASK instead.
 * B4, Overlay Mask Register
 */
#define OVC2_OMASK13 (OVC2_BLK13_OMASK)

/** Alias for OVC2_BLK14_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK14_OMASK instead.
 * C0, Overlay Mask Register
 */
#define OVC2_OMASK14 (OVC2_BLK14_OMASK)

/** Alias for OVC2_BLK15_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK15_OMASK instead.
 * CC, Overlay Mask Register
 */
#define OVC2_OMASK15 (OVC2_BLK15_OMASK)

/** Alias for OVC2_BLK16_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK16_OMASK instead.
 * D8, Overlay Mask Register
 */
#define OVC2_OMASK16 (OVC2_BLK16_OMASK)

/** Alias for OVC2_BLK17_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK17_OMASK instead.
 * E4, Overlay Mask Register
 */
#define OVC2_OMASK17 (OVC2_BLK17_OMASK)

/** Alias for OVC2_BLK18_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK18_OMASK instead.
 * F0, Overlay Mask Register
 */
#define OVC2_OMASK18 (OVC2_BLK18_OMASK)

/** Alias for OVC2_BLK19_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK19_OMASK instead.
 * FC, Overlay Mask Register
 */
#define OVC2_OMASK19 (OVC2_BLK19_OMASK)

/** Alias for OVC2_BLK2_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK2_OMASK instead.
 * 30, Overlay Mask Register
 */
#define OVC2_OMASK2 (OVC2_BLK2_OMASK)

/** Alias for OVC2_BLK20_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK20_OMASK instead.
 * 108, Overlay Mask Register
 */
#define OVC2_OMASK20 (OVC2_BLK20_OMASK)

/** Alias for OVC2_BLK21_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK21_OMASK instead.
 * 114, Overlay Mask Register
 */
#define OVC2_OMASK21 (OVC2_BLK21_OMASK)

/** Alias for OVC2_BLK22_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK22_OMASK instead.
 * 120, Overlay Mask Register
 */
#define OVC2_OMASK22 (OVC2_BLK22_OMASK)

/** Alias for OVC2_BLK23_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK23_OMASK instead.
 * 12C, Overlay Mask Register
 */
#define OVC2_OMASK23 (OVC2_BLK23_OMASK)

/** Alias for OVC2_BLK24_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK24_OMASK instead.
 * 138, Overlay Mask Register
 */
#define OVC2_OMASK24 (OVC2_BLK24_OMASK)

/** Alias for OVC2_BLK25_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK25_OMASK instead.
 * 144, Overlay Mask Register
 */
#define OVC2_OMASK25 (OVC2_BLK25_OMASK)

/** Alias for OVC2_BLK26_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK26_OMASK instead.
 * 150, Overlay Mask Register
 */
#define OVC2_OMASK26 (OVC2_BLK26_OMASK)

/** Alias for OVC2_BLK27_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK27_OMASK instead.
 * 15C, Overlay Mask Register
 */
#define OVC2_OMASK27 (OVC2_BLK27_OMASK)

/** Alias for OVC2_BLK28_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK28_OMASK instead.
 * 168, Overlay Mask Register
 */
#define OVC2_OMASK28 (OVC2_BLK28_OMASK)

/** Alias for OVC2_BLK29_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK29_OMASK instead.
 * 174, Overlay Mask Register
 */
#define OVC2_OMASK29 (OVC2_BLK29_OMASK)

/** Alias for OVC2_BLK3_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK3_OMASK instead.
 * 3C, Overlay Mask Register
 */
#define OVC2_OMASK3 (OVC2_BLK3_OMASK)

/** Alias for OVC2_BLK30_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK30_OMASK instead.
 * 180, Overlay Mask Register
 */
#define OVC2_OMASK30 (OVC2_BLK30_OMASK)

/** Alias for OVC2_BLK31_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK31_OMASK instead.
 * 18C, Overlay Mask Register
 */
#define OVC2_OMASK31 (OVC2_BLK31_OMASK)

/** Alias for OVC2_BLK4_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK4_OMASK instead.
 * 48, Overlay Mask Register
 */
#define OVC2_OMASK4 (OVC2_BLK4_OMASK)

/** Alias for OVC2_BLK5_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK5_OMASK instead.
 * 54, Overlay Mask Register
 */
#define OVC2_OMASK5 (OVC2_BLK5_OMASK)

/** Alias for OVC2_BLK6_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK6_OMASK instead.
 * 60, Overlay Mask Register
 */
#define OVC2_OMASK6 (OVC2_BLK6_OMASK)

/** Alias for OVC2_BLK7_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK7_OMASK instead.
 * 6C, Overlay Mask Register
 */
#define OVC2_OMASK7 (OVC2_BLK7_OMASK)

/** Alias for OVC2_BLK8_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK8_OMASK instead.
 * 78, Overlay Mask Register
 */
#define OVC2_OMASK8 (OVC2_BLK8_OMASK)

/** Alias for OVC2_BLK9_OMASK.
 *  Note that this definition is obsolete, use OVC2_BLK9_OMASK instead.
 * 84, Overlay Mask Register
 */
#define OVC2_OMASK9 (OVC2_BLK9_OMASK)

/** 0, Overlay Range Select Register */
#define OVC2_OSEL ((*(volatile Ifx_OVC_OSEL*)0xF884FB00u)) /* lint --e(923)*/

/** Alias for OVC2_BLK0_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK0_OTAR instead.
 * 14, Overlay Target Address Register
 */
#define OVC2_OTAR0 (OVC2_BLK0_OTAR)

/** Alias for OVC2_BLK1_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK1_OTAR instead.
 * 20, Overlay Target Address Register
 */
#define OVC2_OTAR1 (OVC2_BLK1_OTAR)

/** Alias for OVC2_BLK10_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK10_OTAR instead.
 * 8C, Overlay Target Address Register
 */
#define OVC2_OTAR10 (OVC2_BLK10_OTAR)

/** Alias for OVC2_BLK11_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK11_OTAR instead.
 * 98, Overlay Target Address Register
 */
#define OVC2_OTAR11 (OVC2_BLK11_OTAR)

/** Alias for OVC2_BLK12_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK12_OTAR instead.
 * A4, Overlay Target Address Register
 */
#define OVC2_OTAR12 (OVC2_BLK12_OTAR)

/** Alias for OVC2_BLK13_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK13_OTAR instead.
 * B0, Overlay Target Address Register
 */
#define OVC2_OTAR13 (OVC2_BLK13_OTAR)

/** Alias for OVC2_BLK14_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK14_OTAR instead.
 * BC, Overlay Target Address Register
 */
#define OVC2_OTAR14 (OVC2_BLK14_OTAR)

/** Alias for OVC2_BLK15_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK15_OTAR instead.
 * C8, Overlay Target Address Register
 */
#define OVC2_OTAR15 (OVC2_BLK15_OTAR)

/** Alias for OVC2_BLK16_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK16_OTAR instead.
 * D4, Overlay Target Address Register
 */
#define OVC2_OTAR16 (OVC2_BLK16_OTAR)

/** Alias for OVC2_BLK17_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK17_OTAR instead.
 * E0, Overlay Target Address Register
 */
#define OVC2_OTAR17 (OVC2_BLK17_OTAR)

/** Alias for OVC2_BLK18_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK18_OTAR instead.
 * EC, Overlay Target Address Register
 */
#define OVC2_OTAR18 (OVC2_BLK18_OTAR)

/** Alias for OVC2_BLK19_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK19_OTAR instead.
 * F8, Overlay Target Address Register
 */
#define OVC2_OTAR19 (OVC2_BLK19_OTAR)

/** Alias for OVC2_BLK2_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK2_OTAR instead.
 * 2C, Overlay Target Address Register
 */
#define OVC2_OTAR2 (OVC2_BLK2_OTAR)

/** Alias for OVC2_BLK20_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK20_OTAR instead.
 * 104, Overlay Target Address Register
 */
#define OVC2_OTAR20 (OVC2_BLK20_OTAR)

/** Alias for OVC2_BLK21_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK21_OTAR instead.
 * 110, Overlay Target Address Register
 */
#define OVC2_OTAR21 (OVC2_BLK21_OTAR)

/** Alias for OVC2_BLK22_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK22_OTAR instead.
 * 11C, Overlay Target Address Register
 */
#define OVC2_OTAR22 (OVC2_BLK22_OTAR)

/** Alias for OVC2_BLK23_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK23_OTAR instead.
 * 128, Overlay Target Address Register
 */
#define OVC2_OTAR23 (OVC2_BLK23_OTAR)

/** Alias for OVC2_BLK24_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK24_OTAR instead.
 * 134, Overlay Target Address Register
 */
#define OVC2_OTAR24 (OVC2_BLK24_OTAR)

/** Alias for OVC2_BLK25_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK25_OTAR instead.
 * 140, Overlay Target Address Register
 */
#define OVC2_OTAR25 (OVC2_BLK25_OTAR)

/** Alias for OVC2_BLK26_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK26_OTAR instead.
 * 14C, Overlay Target Address Register
 */
#define OVC2_OTAR26 (OVC2_BLK26_OTAR)

/** Alias for OVC2_BLK27_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK27_OTAR instead.
 * 158, Overlay Target Address Register
 */
#define OVC2_OTAR27 (OVC2_BLK27_OTAR)

/** Alias for OVC2_BLK28_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK28_OTAR instead.
 * 164, Overlay Target Address Register
 */
#define OVC2_OTAR28 (OVC2_BLK28_OTAR)

/** Alias for OVC2_BLK29_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK29_OTAR instead.
 * 170, Overlay Target Address Register
 */
#define OVC2_OTAR29 (OVC2_BLK29_OTAR)

/** Alias for OVC2_BLK3_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK3_OTAR instead.
 * 38, Overlay Target Address Register
 */
#define OVC2_OTAR3 (OVC2_BLK3_OTAR)

/** Alias for OVC2_BLK30_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK30_OTAR instead.
 * 17C, Overlay Target Address Register
 */
#define OVC2_OTAR30 (OVC2_BLK30_OTAR)

/** Alias for OVC2_BLK31_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK31_OTAR instead.
 * 188, Overlay Target Address Register
 */
#define OVC2_OTAR31 (OVC2_BLK31_OTAR)

/** Alias for OVC2_BLK4_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK4_OTAR instead.
 * 44, Overlay Target Address Register
 */
#define OVC2_OTAR4 (OVC2_BLK4_OTAR)

/** Alias for OVC2_BLK5_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK5_OTAR instead.
 * 50, Overlay Target Address Register
 */
#define OVC2_OTAR5 (OVC2_BLK5_OTAR)

/** Alias for OVC2_BLK6_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK6_OTAR instead.
 * 5C, Overlay Target Address Register
 */
#define OVC2_OTAR6 (OVC2_BLK6_OTAR)

/** Alias for OVC2_BLK7_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK7_OTAR instead.
 * 68, Overlay Target Address Register
 */
#define OVC2_OTAR7 (OVC2_BLK7_OTAR)

/** Alias for OVC2_BLK8_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK8_OTAR instead.
 * 74, Overlay Target Address Register
 */
#define OVC2_OTAR8 (OVC2_BLK8_OTAR)

/** Alias for OVC2_BLK9_OTAR.
 *  Note that this definition is obsolete, use OVC2_BLK9_OTAR instead.
 * 80, Overlay Target Address Register
 */
#define OVC2_OTAR9 (OVC2_BLK9_OTAR)

/** Alias for OVC2_BLK0_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK0_RABR instead.
 * 10, Redirected Address Base Register
 */
#define OVC2_RABR0 (OVC2_BLK0_RABR)

/** Alias for OVC2_BLK1_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK1_RABR instead.
 * 1C, Redirected Address Base Register
 */
#define OVC2_RABR1 (OVC2_BLK1_RABR)

/** Alias for OVC2_BLK10_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK10_RABR instead.
 * 88, Redirected Address Base Register
 */
#define OVC2_RABR10 (OVC2_BLK10_RABR)

/** Alias for OVC2_BLK11_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK11_RABR instead.
 * 94, Redirected Address Base Register
 */
#define OVC2_RABR11 (OVC2_BLK11_RABR)

/** Alias for OVC2_BLK12_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK12_RABR instead.
 * A0, Redirected Address Base Register
 */
#define OVC2_RABR12 (OVC2_BLK12_RABR)

/** Alias for OVC2_BLK13_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK13_RABR instead.
 * AC, Redirected Address Base Register
 */
#define OVC2_RABR13 (OVC2_BLK13_RABR)

/** Alias for OVC2_BLK14_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK14_RABR instead.
 * B8, Redirected Address Base Register
 */
#define OVC2_RABR14 (OVC2_BLK14_RABR)

/** Alias for OVC2_BLK15_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK15_RABR instead.
 * C4, Redirected Address Base Register
 */
#define OVC2_RABR15 (OVC2_BLK15_RABR)

/** Alias for OVC2_BLK16_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK16_RABR instead.
 * D0, Redirected Address Base Register
 */
#define OVC2_RABR16 (OVC2_BLK16_RABR)

/** Alias for OVC2_BLK17_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK17_RABR instead.
 * DC, Redirected Address Base Register
 */
#define OVC2_RABR17 (OVC2_BLK17_RABR)

/** Alias for OVC2_BLK18_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK18_RABR instead.
 * E8, Redirected Address Base Register
 */
#define OVC2_RABR18 (OVC2_BLK18_RABR)

/** Alias for OVC2_BLK19_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK19_RABR instead.
 * F4, Redirected Address Base Register
 */
#define OVC2_RABR19 (OVC2_BLK19_RABR)

/** Alias for OVC2_BLK2_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK2_RABR instead.
 * 28, Redirected Address Base Register
 */
#define OVC2_RABR2 (OVC2_BLK2_RABR)

/** Alias for OVC2_BLK20_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK20_RABR instead.
 * 100, Redirected Address Base Register
 */
#define OVC2_RABR20 (OVC2_BLK20_RABR)

/** Alias for OVC2_BLK21_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK21_RABR instead.
 * 10C, Redirected Address Base Register
 */
#define OVC2_RABR21 (OVC2_BLK21_RABR)

/** Alias for OVC2_BLK22_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK22_RABR instead.
 * 118, Redirected Address Base Register
 */
#define OVC2_RABR22 (OVC2_BLK22_RABR)

/** Alias for OVC2_BLK23_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK23_RABR instead.
 * 124, Redirected Address Base Register
 */
#define OVC2_RABR23 (OVC2_BLK23_RABR)

/** Alias for OVC2_BLK24_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK24_RABR instead.
 * 130, Redirected Address Base Register
 */
#define OVC2_RABR24 (OVC2_BLK24_RABR)

/** Alias for OVC2_BLK25_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK25_RABR instead.
 * 13C, Redirected Address Base Register
 */
#define OVC2_RABR25 (OVC2_BLK25_RABR)

/** Alias for OVC2_BLK26_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK26_RABR instead.
 * 148, Redirected Address Base Register
 */
#define OVC2_RABR26 (OVC2_BLK26_RABR)

/** Alias for OVC2_BLK27_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK27_RABR instead.
 * 154, Redirected Address Base Register
 */
#define OVC2_RABR27 (OVC2_BLK27_RABR)

/** Alias for OVC2_BLK28_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK28_RABR instead.
 * 160, Redirected Address Base Register
 */
#define OVC2_RABR28 (OVC2_BLK28_RABR)

/** Alias for OVC2_BLK29_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK29_RABR instead.
 * 16C, Redirected Address Base Register
 */
#define OVC2_RABR29 (OVC2_BLK29_RABR)

/** Alias for OVC2_BLK3_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK3_RABR instead.
 * 34, Redirected Address Base Register
 */
#define OVC2_RABR3 (OVC2_BLK3_RABR)

/** Alias for OVC2_BLK30_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK30_RABR instead.
 * 178, Redirected Address Base Register
 */
#define OVC2_RABR30 (OVC2_BLK30_RABR)

/** Alias for OVC2_BLK31_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK31_RABR instead.
 * 184, Redirected Address Base Register
 */
#define OVC2_RABR31 (OVC2_BLK31_RABR)

/** Alias for OVC2_BLK4_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK4_RABR instead.
 * 40, Redirected Address Base Register
 */
#define OVC2_RABR4 (OVC2_BLK4_RABR)

/** Alias for OVC2_BLK5_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK5_RABR instead.
 * 4C, Redirected Address Base Register
 */
#define OVC2_RABR5 (OVC2_BLK5_RABR)

/** Alias for OVC2_BLK6_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK6_RABR instead.
 * 58, Redirected Address Base Register
 */
#define OVC2_RABR6 (OVC2_BLK6_RABR)

/** Alias for OVC2_BLK7_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK7_RABR instead.
 * 64, Redirected Address Base Register
 */
#define OVC2_RABR7 (OVC2_BLK7_RABR)

/** Alias for OVC2_BLK8_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK8_RABR instead.
 * 70, Redirected Address Base Register
 */
#define OVC2_RABR8 (OVC2_BLK8_RABR)

/** Alias for OVC2_BLK9_RABR.
 *  Note that this definition is obsolete, use OVC2_BLK9_RABR instead.
 * 7C, Redirected Address Base Register
 */
#define OVC2_RABR9 (OVC2_BLK9_RABR)
/******************************************************************************/
#endif /* IFXOVC_REG_H */

