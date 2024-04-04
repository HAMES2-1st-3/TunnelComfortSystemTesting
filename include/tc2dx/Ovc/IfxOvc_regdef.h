/**
 * \file IfxOvc_regdef.h
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
#ifndef IFXOVC_REGDEF_H
#define IFXOVC_REGDEF_H
/******************************************************************************/
#include "Global/IfxGlobal_regdef.h"

/******************************************************************************/
/*                           Struct (0 - Bitfields)                           */
/******************************************************************************/

/** Overlay Mask Register */
typedef struct
{
    unsigned int reserved_0: 5;
    unsigned int OMASK: 12;                 /** \brief [16:5] Overlay Address Mask (rw) */
    unsigned int ONE: 11;                   /** \brief [27:17] Fixed "1" Values (r) */
    unsigned int reserved_28: 4;
} Ifx_OVC_BLK_OMASK_Bits;

/** Overlay Target Address Register */
typedef struct
{
    unsigned int reserved_0: 5;
    unsigned int TBASE: 23;                 /** \brief [27:5] Target Base (rw) */
    unsigned int reserved_28: 4;
} Ifx_OVC_BLK_OTAR_Bits;

/** Redirected Address Base Register */
typedef struct
{
    unsigned int reserved_0: 5;
    unsigned int OBASE: 17;                 /** \brief [21:5] Overlay Block Base Address (rw) */
    unsigned int reserved_22: 2;
    unsigned int OMEM: 3;                   /** \brief [26:24] Overlay Memory Select (rw) */
    unsigned int reserved_27: 4;
    unsigned int OVEN: 1;                   /** \brief [31:31] Overlay Enabled (rwh) */
} Ifx_OVC_BLK_RABR_Bits;

/** Overlay Range Select Register */
typedef struct
{
    unsigned int SHOVEN0: 1;                /** \brief [0:0] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN1: 1;                /** \brief [1:1] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN2: 1;                /** \brief [2:2] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN3: 1;                /** \brief [3:3] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN4: 1;                /** \brief [4:4] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN5: 1;                /** \brief [5:5] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN6: 1;                /** \brief [6:6] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN7: 1;                /** \brief [7:7] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN8: 1;                /** \brief [8:8] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN9: 1;                /** \brief [9:9] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN10: 1;               /** \brief [10:10] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN11: 1;               /** \brief [11:11] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN12: 1;               /** \brief [12:12] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN13: 1;               /** \brief [13:13] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN14: 1;               /** \brief [14:14] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN15: 1;               /** \brief [15:15] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN16: 1;               /** \brief [16:16] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN17: 1;               /** \brief [17:17] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN18: 1;               /** \brief [18:18] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN19: 1;               /** \brief [19:19] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN20: 1;               /** \brief [20:20] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN21: 1;               /** \brief [21:21] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN22: 1;               /** \brief [22:22] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN23: 1;               /** \brief [23:23] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN24: 1;               /** \brief [24:24] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN25: 1;               /** \brief [25:25] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN26: 1;               /** \brief [26:26] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN27: 1;               /** \brief [27:27] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN28: 1;               /** \brief [28:28] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN29: 1;               /** \brief [29:29] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN30: 1;               /** \brief [30:30] Shadow Overlay Enable x (rw) */
    unsigned int SHOVEN31: 1;               /** \brief [31:31] Shadow Overlay Enable x (rw) */
} Ifx_OVC_OSEL_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Overlay Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_OVC_BLK_OMASK_Bits B;
} Ifx_OVC_BLK_OMASK;

/** Overlay Target Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_OVC_BLK_OTAR_Bits B;
} Ifx_OVC_BLK_OTAR;

/** Redirected Address Base Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_OVC_BLK_RABR_Bits B;
} Ifx_OVC_BLK_RABR;

/** Overlay Range Select Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_OVC_OSEL_Bits B;
} Ifx_OVC_OSEL;

/******************************************************************************/
/*                           Struct (3 - Object L1)                           */
/******************************************************************************/

/** Overlay blocks objects */
typedef volatile struct
{
    Ifx_OVC_BLK_RABR RABR;                  /** \brief 0, Redirected Address Base Register */
    Ifx_OVC_BLK_OTAR OTAR;                  /** \brief 4, Overlay Target Address Register */
    Ifx_OVC_BLK_OMASK OMASK;                /** \brief 8, Overlay Mask Register */
} Ifx_OVC_BLK;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** OVC object */
typedef volatile struct
{
    Ifx_OVC_OSEL OSEL;                      /** \brief 0, Overlay Range Select Register */
    unsigned char reserved_4[12];           /** \brief 4 */
    Ifx_OVC_BLK BLK[32];                    /** \brief 10, Overlay blocks objects */
    unsigned char reserved_190[112];        /** \brief 190 */
} Ifx_OVC;
/******************************************************************************/
#endif /* IFXOVC_REGDEF_H */

