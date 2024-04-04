/**
 * \file IfxEmem_regdef.h
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
 * \defgroup IfxLld_Emem Emem
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Emem_Bitfields Bitfields
 * \ingroup IfxLld_Emem
 * 
 * \defgroup IfxLld_Emem_union Union
 * \ingroup IfxLld_Emem
 * 
 * \defgroup IfxLld_Emem_struct Struct
 * \ingroup IfxLld_Emem
 * 
 */
#ifndef IFXEMEM_REGDEF_H
#define IFXEMEM_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Emem_Bitfields
 * \{  */

/** \\brief  Clock Control Register */
typedef struct _Ifx_EMEM_CLC_Bits
{
    Ifx_Strict_32Bit DISR:1;                /**< \brief [0:0] Disable Request Bit (rw) */
    Ifx_Strict_32Bit DISS:1;                /**< \brief [1:1] Disable Status Bit (rh) */
    Ifx_Strict_32Bit reserved_2:30;         /**< \brief \internal Reserved */
} Ifx_EMEM_CLC_Bits;

/** \\brief  Module Identification Register */
typedef struct _Ifx_EMEM_ID_Bits
{
    Ifx_Strict_32Bit MODREV:8;              /**< \brief [7:0] Module Revision Number (r) */
    Ifx_Strict_32Bit MODTYPE:8;             /**< \brief [15:8] Module Type (r) */
    Ifx_Strict_32Bit MODNUMBER:16;          /**< \brief [31:16] Module Number Value (r) */
} Ifx_EMEM_ID_Bits;

/** \\brief  Standby RAM Control Register */
typedef struct _Ifx_EMEM_SBRCTR_Bits
{
    Ifx_Strict_32Bit STBLOCK:1;             /**< \brief [0:0] Standby Lock Flag (rh) */
    Ifx_Strict_32Bit STBULK:3;              /**< \brief [3:1] Unlock Standby Lock Flag (w) */
    Ifx_Strict_32Bit STBSLK:4;              /**< \brief [7:4] Set Standby Lock Flag (w) */
    Ifx_Strict_32Bit reserved_8:4;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACGEN:1;               /**< \brief [12:12] Automatic Clock Gating Enabling (rw) */
    Ifx_Strict_32Bit reserved_13:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACGST0:1;              /**< \brief [16:16] Automatic Clock Gating Status of Tile x (rh) */
    Ifx_Strict_32Bit ACGST1:1;              /**< \brief [17:17] Automatic Clock Gating Status of Tile x (rh) */
    Ifx_Strict_32Bit ACGST2:1;              /**< \brief [18:18] Automatic Clock Gating Status of Tile x (rh) */
    Ifx_Strict_32Bit ACGST3:1;              /**< \brief [19:19] Automatic Clock Gating Status of Tile x (rh) */
    Ifx_Strict_32Bit ACGST4:1;              /**< \brief [20:20] Automatic Clock Gating Status of Tile x (rh) */
    Ifx_Strict_32Bit ACGST5:1;              /**< \brief [21:21] Automatic Clock Gating Status of Tile x (rh) */
    Ifx_Strict_32Bit ACGST6:1;              /**< \brief [22:22] Automatic Clock Gating Status of Tile x (rh) */
    Ifx_Strict_32Bit ACGST7:1;              /**< \brief [23:23] Automatic Clock Gating Status of Tile x (rh) */
    Ifx_Strict_32Bit ACGST8:1;              /**< \brief [24:24] Automatic Clock Gating Status of Tile x (rh) */
    Ifx_Strict_32Bit ACGST9:1;              /**< \brief [25:25] Automatic Clock Gating Status of Tile x (rh) */
    Ifx_Strict_32Bit ACGST10:1;             /**< \brief [26:26] Automatic Clock Gating Status of Tile x (rh) */
    Ifx_Strict_32Bit ACGST11:1;             /**< \brief [27:27] Automatic Clock Gating Status of Tile x (rh) */
    Ifx_Strict_32Bit ACGST12:1;             /**< \brief [28:28] Automatic Clock Gating Status of Tile x (rh) */
    Ifx_Strict_32Bit ACGST13:1;             /**< \brief [29:29] Automatic Clock Gating Status of Tile x (rh) */
    Ifx_Strict_32Bit ACGST14:1;             /**< \brief [30:30] Automatic Clock Gating Status of Tile x (rh) */
    Ifx_Strict_32Bit ACGST15:1;             /**< \brief [31:31] Automatic Clock Gating Status of Tile x (rh) */
} Ifx_EMEM_SBRCTR_Bits;

/** \\brief  Calibration Tile Control Register */
typedef struct _Ifx_EMEM_TILECC_Bits
{
    Ifx_Strict_32Bit T0:1;                  /**< \brief [0:0] Calibration Tile x Control Bit (w) */
    Ifx_Strict_32Bit T1:1;                  /**< \brief [1:1] Calibration Tile x Control Bit (w) */
    Ifx_Strict_32Bit T2:1;                  /**< \brief [2:2] Calibration Tile x Control Bit (w) */
    Ifx_Strict_32Bit T3:1;                  /**< \brief [3:3] Calibration Tile x Control Bit (w) */
    Ifx_Strict_32Bit T4:1;                  /**< \brief [4:4] Calibration Tile x Control Bit (w) */
    Ifx_Strict_32Bit T5:1;                  /**< \brief [5:5] Calibration Tile x Control Bit (w) */
    Ifx_Strict_32Bit T6:1;                  /**< \brief [6:6] Calibration Tile x Control Bit (w) */
    Ifx_Strict_32Bit T7:1;                  /**< \brief [7:7] Calibration Tile x Control Bit (w) */
    Ifx_Strict_32Bit T8:1;                  /**< \brief [8:8] Calibration Tile x Control Bit (w) */
    Ifx_Strict_32Bit T9:1;                  /**< \brief [9:9] Calibration Tile x Control Bit (w) */
    Ifx_Strict_32Bit T10:1;                 /**< \brief [10:10] Calibration Tile x Control Bit (w) */
    Ifx_Strict_32Bit T11:1;                 /**< \brief [11:11] Calibration Tile x Control Bit (w) */
    Ifx_Strict_32Bit T12:1;                 /**< \brief [12:12] Calibration Tile x Control Bit (w) */
    Ifx_Strict_32Bit T13:1;                 /**< \brief [13:13] Calibration Tile x Control Bit (w) */
    Ifx_Strict_32Bit T14:1;                 /**< \brief [14:14] Calibration Tile x Control Bit (w) */
    Ifx_Strict_32Bit T15:1;                 /**< \brief [15:15] Calibration Tile x Control Bit (w) */
    Ifx_Strict_32Bit reserved_16:16;        /**< \brief \internal Reserved */
} Ifx_EMEM_TILECC_Bits;

/** \\brief  Tile Configuration Register */
typedef struct _Ifx_EMEM_TILECONFIG_Bits
{
    Ifx_Strict_32Bit T0:2;                  /**< \brief [1:0] Tile x Allocation (w) */
    Ifx_Strict_32Bit T1:2;                  /**< \brief [3:2] Tile x Allocation (w) */
    Ifx_Strict_32Bit T2:2;                  /**< \brief [5:4] Tile x Allocation (w) */
    Ifx_Strict_32Bit T3:2;                  /**< \brief [7:6] Tile x Allocation (w) */
    Ifx_Strict_32Bit T4:2;                  /**< \brief [9:8] Tile x Allocation (w) */
    Ifx_Strict_32Bit T5:2;                  /**< \brief [11:10] Tile x Allocation (w) */
    Ifx_Strict_32Bit T6:2;                  /**< \brief [13:12] Tile x Allocation (w) */
    Ifx_Strict_32Bit T7:2;                  /**< \brief [15:14] Tile x Allocation (w) */
    Ifx_Strict_32Bit T8:2;                  /**< \brief [17:16] Tile x Allocation (w) */
    Ifx_Strict_32Bit T9:2;                  /**< \brief [19:18] Tile x Allocation (w) */
    Ifx_Strict_32Bit T10:2;                 /**< \brief [21:20] Tile x Allocation (w) */
    Ifx_Strict_32Bit T11:2;                 /**< \brief [23:22] Tile x Allocation (w) */
    Ifx_Strict_32Bit T12:2;                 /**< \brief [25:24] Tile x Allocation (w) */
    Ifx_Strict_32Bit T13:2;                 /**< \brief [27:26] Tile x Allocation (w) */
    Ifx_Strict_32Bit T14:2;                 /**< \brief [29:28] Tile x Allocation (w) */
    Ifx_Strict_32Bit T15:2;                 /**< \brief [31:30] Tile x Allocation (w) */
} Ifx_EMEM_TILECONFIG_Bits;

/** \\brief  Trace Tile Control Register */
typedef struct _Ifx_EMEM_TILECT_Bits
{
    Ifx_Strict_32Bit T0:1;                  /**< \brief [0:0] Trace Tile x Control Bit (w) */
    Ifx_Strict_32Bit T1:1;                  /**< \brief [1:1] Trace Tile x Control Bit (w) */
    Ifx_Strict_32Bit T2:1;                  /**< \brief [2:2] Trace Tile x Control Bit (w) */
    Ifx_Strict_32Bit T3:1;                  /**< \brief [3:3] Trace Tile x Control Bit (w) */
    Ifx_Strict_32Bit T4:1;                  /**< \brief [4:4] Trace Tile x Control Bit (w) */
    Ifx_Strict_32Bit T5:1;                  /**< \brief [5:5] Trace Tile x Control Bit (w) */
    Ifx_Strict_32Bit T6:1;                  /**< \brief [6:6] Trace Tile x Control Bit (w) */
    Ifx_Strict_32Bit T7:1;                  /**< \brief [7:7] Trace Tile x Control Bit (w) */
    Ifx_Strict_32Bit T8:1;                  /**< \brief [8:8] Trace Tile x Control Bit (w) */
    Ifx_Strict_32Bit T9:1;                  /**< \brief [9:9] Trace Tile x Control Bit (w) */
    Ifx_Strict_32Bit T10:1;                 /**< \brief [10:10] Trace Tile x Control Bit (w) */
    Ifx_Strict_32Bit T11:1;                 /**< \brief [11:11] Trace Tile x Control Bit (w) */
    Ifx_Strict_32Bit T12:1;                 /**< \brief [12:12] Trace Tile x Control Bit (w) */
    Ifx_Strict_32Bit T13:1;                 /**< \brief [13:13] Trace Tile x Control Bit (w) */
    Ifx_Strict_32Bit T14:1;                 /**< \brief [14:14] Trace Tile x Control Bit (w) */
    Ifx_Strict_32Bit T15:1;                 /**< \brief [15:15] Trace Tile x Control Bit (w) */
    Ifx_Strict_32Bit reserved_16:16;        /**< \brief \internal Reserved */
} Ifx_EMEM_TILECT_Bits;

/** \\brief  Tile Status Register */
typedef struct _Ifx_EMEM_TILESTATE_Bits
{
    Ifx_Strict_32Bit TILE0:2;               /**< \brief [1:0] Usage of Tile x (rh) */
    Ifx_Strict_32Bit TILE1:2;               /**< \brief [3:2] Usage of Tile x (rh) */
    Ifx_Strict_32Bit TILE2:2;               /**< \brief [5:4] Usage of Tile x (rh) */
    Ifx_Strict_32Bit TILE3:2;               /**< \brief [7:6] Usage of Tile x (rh) */
    Ifx_Strict_32Bit TILE4:2;               /**< \brief [9:8] Usage of Tile x (rh) */
    Ifx_Strict_32Bit TILE5:2;               /**< \brief [11:10] Usage of Tile x (rh) */
    Ifx_Strict_32Bit TILE6:2;               /**< \brief [13:12] Usage of Tile x (rh) */
    Ifx_Strict_32Bit TILE7:2;               /**< \brief [15:14] Usage of Tile x (rh) */
    Ifx_Strict_32Bit TILE8:2;               /**< \brief [17:16] Usage of Tile x (rh) */
    Ifx_Strict_32Bit TILE9:2;               /**< \brief [19:18] Usage of Tile x (rh) */
    Ifx_Strict_32Bit TILE10:2;              /**< \brief [21:20] Usage of Tile x (rh) */
    Ifx_Strict_32Bit TILE11:2;              /**< \brief [23:22] Usage of Tile x (rh) */
    Ifx_Strict_32Bit TILE12:2;              /**< \brief [25:24] Usage of Tile x (rh) */
    Ifx_Strict_32Bit TILE13:2;              /**< \brief [27:26] Usage of Tile x (rh) */
    Ifx_Strict_32Bit TILE14:2;              /**< \brief [29:28] Usage of Tile x (rh) */
    Ifx_Strict_32Bit TILE15:2;              /**< \brief [31:30] Usage of Tile x (rh) */
} Ifx_EMEM_TILESTATE_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Emem_union
 * \{  */

/** \\brief  Clock Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EMEM_CLC_Bits B;
} Ifx_EMEM_CLC;

/** \\brief  Module Identification Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EMEM_ID_Bits B;
} Ifx_EMEM_ID;

/** \\brief  Standby RAM Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EMEM_SBRCTR_Bits B;
} Ifx_EMEM_SBRCTR;

/** \\brief  Calibration Tile Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EMEM_TILECC_Bits B;
} Ifx_EMEM_TILECC;

/** \\brief  Tile Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EMEM_TILECONFIG_Bits B;
} Ifx_EMEM_TILECONFIG;

/** \\brief  Trace Tile Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EMEM_TILECT_Bits B;
} Ifx_EMEM_TILECT;

/** \\brief  Tile Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EMEM_TILESTATE_Bits B;
} Ifx_EMEM_TILESTATE;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Emem_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \\brief  EMEM object */
typedef volatile struct _Ifx_EMEM
{
    Ifx_EMEM_CLC CLC;                       /**< \brief 0, Clock Control Register */
    unsigned char reserved_4[4];            /**< \brief 4, \internal Reserved */
    Ifx_EMEM_ID ID;                         /**< \brief 8, Module Identification Register */
    unsigned char reserved_C[20];           /**< \brief C, \internal Reserved */
    Ifx_EMEM_TILECONFIG TILECONFIG;         /**< \brief 20, Tile Configuration Register */
    Ifx_EMEM_TILECC TILECC;                 /**< \brief 24, Calibration Tile Control Register */
    Ifx_EMEM_TILECT TILECT;                 /**< \brief 28, Trace Tile Control Register */
    Ifx_EMEM_TILESTATE TILESTATE;           /**< \brief 2C, Tile Status Register */
    unsigned char reserved_30[4];           /**< \brief 30, \internal Reserved */
    Ifx_EMEM_SBRCTR SBRCTR;                 /**< \brief 34, Standby RAM Control Register */
    unsigned char reserved_38[200];         /**< \brief 38, \internal Reserved */
} Ifx_EMEM;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXEMEM_REGDEF_H */
