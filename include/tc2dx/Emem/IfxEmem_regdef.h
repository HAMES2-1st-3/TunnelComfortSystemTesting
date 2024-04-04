/**
 * \file IfxEmem_regdef.h
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
#ifndef IFXEMEM_REGDEF_H
#define IFXEMEM_REGDEF_H
/******************************************************************************/
#include "Global/IfxGlobal_regdef.h"

/******************************************************************************/
/*                           Struct (0 - Bitfields)                           */
/******************************************************************************/

/** Stand-by RAM Control Register */
typedef struct
{
    unsigned int STBLOCK: 1;                /** \brief [0:0] Stand-by Lock Flag (rh) */
    unsigned int STBULK: 3;                 /** \brief [3:1] Unlock Stand-by Lock Flag (w) */
    unsigned int STBSLK: 4;                 /** \brief [7:4] Set Stand-by Lock Flag (w) */
    unsigned int reserved_8: 4;
    unsigned int ACGEN: 1;                  /** \brief [12:12] Automatic Clock Gating Enabling (rw) */
    unsigned int reserved_13: 3;
    unsigned int ACGST0: 1;                 /** \brief [16:16] Automatic Clock Gating Status of Tile x (rh) */
    unsigned int ACGST1: 1;                 /** \brief [17:17] Automatic Clock Gating Status of Tile x (rh) */
    unsigned int ACGST2: 1;                 /** \brief [18:18] Automatic Clock Gating Status of Tile x (rh) */
    unsigned int ACGST3: 1;                 /** \brief [19:19] Automatic Clock Gating Status of Tile x (rh) */
    unsigned int ACGST4: 1;                 /** \brief [20:20] Automatic Clock Gating Status of Tile x (rh) */
    unsigned int ACGST5: 1;                 /** \brief [21:21] Automatic Clock Gating Status of Tile x (rh) */
    unsigned int ACGST6: 1;                 /** \brief [22:22] Automatic Clock Gating Status of Tile x (rh) */
    unsigned int ACGST7: 1;                 /** \brief [23:23] Automatic Clock Gating Status of Tile x (rh) */
    unsigned int ACGST8: 1;                 /** \brief [24:24] Automatic Clock Gating Status of Tile x (rh) */
    unsigned int ACGST9: 1;                 /** \brief [25:25] Automatic Clock Gating Status of Tile x (rh) */
    unsigned int ACGST10: 1;                /** \brief [26:26] Automatic Clock Gating Status of Tile x (rh) */
    unsigned int ACGST11: 1;                /** \brief [27:27] Automatic Clock Gating Status of Tile x (rh) */
    unsigned int ACGST12: 1;                /** \brief [28:28] Automatic Clock Gating Status of Tile x (rh) */
    unsigned int ACGST13: 1;                /** \brief [29:29] Automatic Clock Gating Status of Tile x (rh) */
    unsigned int ACGST14: 1;                /** \brief [30:30] Automatic Clock Gating Status of Tile x (rh) */
    unsigned int ACGST15: 1;                /** \brief [31:31] Automatic Clock Gating Status of Tile x (rh) */
} Ifx_EMEM_SBRCTR_Bits;

/** Calibration Tile Control Register */
typedef struct
{
    unsigned int T0: 1;                     /** \brief [0:0] Calibration Tile x Control Bit (w) */
    unsigned int T1: 1;                     /** \brief [1:1] Calibration Tile x Control Bit (w) */
    unsigned int T2: 1;                     /** \brief [2:2] Calibration Tile x Control Bit (w) */
    unsigned int T3: 1;                     /** \brief [3:3] Calibration Tile x Control Bit (w) */
    unsigned int T4: 1;                     /** \brief [4:4] Calibration Tile x Control Bit (w) */
    unsigned int T5: 1;                     /** \brief [5:5] Calibration Tile x Control Bit (w) */
    unsigned int T6: 1;                     /** \brief [6:6] Calibration Tile x Control Bit (w) */
    unsigned int T7: 1;                     /** \brief [7:7] Calibration Tile x Control Bit (w) */
    unsigned int T8: 1;                     /** \brief [8:8] Calibration Tile x Control Bit (w) */
    unsigned int T9: 1;                     /** \brief [9:9] Calibration Tile x Control Bit (w) */
    unsigned int T10: 1;                    /** \brief [10:10] Calibration Tile x Control Bit (w) */
    unsigned int T11: 1;                    /** \brief [11:11] Calibration Tile x Control Bit (w) */
    unsigned int T12: 1;                    /** \brief [12:12] Calibration Tile x Control Bit (w) */
    unsigned int T13: 1;                    /** \brief [13:13] Calibration Tile x Control Bit (w) */
    unsigned int T14: 1;                    /** \brief [14:14] Calibration Tile x Control Bit (w) */
    unsigned int T15: 1;                    /** \brief [15:15] Calibration Tile x Control Bit (w) */
    unsigned int reserved_16: 16;
} Ifx_EMEM_TILECC_Bits;

/** Tile Configuration Register */
typedef struct
{
    unsigned int T0: 2;                     /** \brief [1:0] Tile x Allocation (w) */
    unsigned int T1: 2;                     /** \brief [3:2] Tile x Allocation (w) */
    unsigned int T2: 2;                     /** \brief [5:4] Tile x Allocation (w) */
    unsigned int T3: 2;                     /** \brief [7:6] Tile x Allocation (w) */
    unsigned int T4: 2;                     /** \brief [9:8] Tile x Allocation (w) */
    unsigned int T5: 2;                     /** \brief [11:10] Tile x Allocation (w) */
    unsigned int T6: 2;                     /** \brief [13:12] Tile x Allocation (w) */
    unsigned int T7: 2;                     /** \brief [15:14] Tile x Allocation (w) */
    unsigned int T8: 2;                     /** \brief [17:16] Tile x Allocation (w) */
    unsigned int T9: 2;                     /** \brief [19:18] Tile x Allocation (w) */
    unsigned int T10: 2;                    /** \brief [21:20] Tile x Allocation (w) */
    unsigned int T11: 2;                    /** \brief [23:22] Tile x Allocation (w) */
    unsigned int T12: 2;                    /** \brief [25:24] Tile x Allocation (w) */
    unsigned int T13: 2;                    /** \brief [27:26] Tile x Allocation (w) */
    unsigned int T14: 2;                    /** \brief [29:28] Tile x Allocation (w) */
    unsigned int T15: 2;                    /** \brief [31:30] Tile x Allocation (w) */
} Ifx_EMEM_TILECONFIG_Bits;

/** Trace Tile Control Register */
typedef struct
{
    unsigned int T0: 1;                     /** \brief [0:0] Trace Tile x Control Bit (w) */
    unsigned int T1: 1;                     /** \brief [1:1] Trace Tile x Control Bit (w) */
    unsigned int T2: 1;                     /** \brief [2:2] Trace Tile x Control Bit (w) */
    unsigned int T3: 1;                     /** \brief [3:3] Trace Tile x Control Bit (w) */
    unsigned int T4: 1;                     /** \brief [4:4] Trace Tile x Control Bit (w) */
    unsigned int T5: 1;                     /** \brief [5:5] Trace Tile x Control Bit (w) */
    unsigned int T6: 1;                     /** \brief [6:6] Trace Tile x Control Bit (w) */
    unsigned int T7: 1;                     /** \brief [7:7] Trace Tile x Control Bit (w) */
    unsigned int T8: 1;                     /** \brief [8:8] Trace Tile x Control Bit (w) */
    unsigned int T9: 1;                     /** \brief [9:9] Trace Tile x Control Bit (w) */
    unsigned int T10: 1;                    /** \brief [10:10] Trace Tile x Control Bit (w) */
    unsigned int T11: 1;                    /** \brief [11:11] Trace Tile x Control Bit (w) */
    unsigned int T12: 1;                    /** \brief [12:12] Trace Tile x Control Bit (w) */
    unsigned int T13: 1;                    /** \brief [13:13] Trace Tile x Control Bit (w) */
    unsigned int T14: 1;                    /** \brief [14:14] Trace Tile x Control Bit (w) */
    unsigned int T15: 1;                    /** \brief [15:15] Trace Tile x Control Bit (w) */
    unsigned int reserved_16: 16;
} Ifx_EMEM_TILECT_Bits;

/** Tile Status Register */
typedef struct
{
    unsigned int TILE0: 2;                  /** \brief [1:0] Usage of Tile x (rh) */
    unsigned int TILE1: 2;                  /** \brief [3:2] Usage of Tile x (rh) */
    unsigned int TILE2: 2;                  /** \brief [5:4] Usage of Tile x (rh) */
    unsigned int TILE3: 2;                  /** \brief [7:6] Usage of Tile x (rh) */
    unsigned int TILE4: 2;                  /** \brief [9:8] Usage of Tile x (rh) */
    unsigned int TILE5: 2;                  /** \brief [11:10] Usage of Tile x (rh) */
    unsigned int TILE6: 2;                  /** \brief [13:12] Usage of Tile x (rh) */
    unsigned int TILE7: 2;                  /** \brief [15:14] Usage of Tile x (rh) */
    unsigned int TILE8: 2;                  /** \brief [17:16] Usage of Tile x (rh) */
    unsigned int TILE9: 2;                  /** \brief [19:18] Usage of Tile x (rh) */
    unsigned int TILE10: 2;                 /** \brief [21:20] Usage of Tile x (rh) */
    unsigned int TILE11: 2;                 /** \brief [23:22] Usage of Tile x (rh) */
    unsigned int TILE12: 2;                 /** \brief [25:24] Usage of Tile x (rh) */
    unsigned int TILE13: 2;                 /** \brief [27:26] Usage of Tile x (rh) */
    unsigned int TILE14: 2;                 /** \brief [29:28] Usage of Tile x (rh) */
    unsigned int TILE15: 2;                 /** \brief [31:30] Usage of Tile x (rh) */
} Ifx_EMEM_TILESTATE_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Stand-by RAM Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EMEM_SBRCTR_Bits B;
} Ifx_EMEM_SBRCTR;

/** Calibration Tile Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EMEM_TILECC_Bits B;
} Ifx_EMEM_TILECC;

/** Tile Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EMEM_TILECONFIG_Bits B;
} Ifx_EMEM_TILECONFIG;

/** Trace Tile Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EMEM_TILECT_Bits B;
} Ifx_EMEM_TILECT;

/** Tile Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EMEM_TILESTATE_Bits B;
} Ifx_EMEM_TILESTATE;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** EMEM object */
typedef volatile struct
{
    Ifx_CLC5 CLC;                           /** \brief 0, Clock Control Register */
    unsigned char reserved_4[4];            /** \brief 4 */
    Ifx_ID1 ID;                             /** \brief 8, Module Identification Register */
    unsigned char reserved_C[20];           /** \brief C */
    Ifx_EMEM_TILECONFIG TILECONFIG;         /** \brief 20, Tile Configuration Register */
    Ifx_EMEM_TILECC TILECC;                 /** \brief 24, Calibration Tile Control Register */
    Ifx_EMEM_TILECT TILECT;                 /** \brief 28, Trace Tile Control Register */
    Ifx_EMEM_TILESTATE TILESTATE;           /** \brief 2C, Tile Status Register */
    unsigned char reserved_30[4];           /** \brief 30 */
    Ifx_EMEM_SBRCTR SBRCTR;                 /** \brief 34, Stand-by RAM Control Register */
    unsigned char reserved_38[200];         /** \brief 38 */
} Ifx_EMEM;
/******************************************************************************/
#endif /* IFXEMEM_REGDEF_H */

