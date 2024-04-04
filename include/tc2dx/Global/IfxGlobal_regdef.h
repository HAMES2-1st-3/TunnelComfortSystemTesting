/**
 * \file IfxGlobal_regdef.h
 * \copyright Copyright (c) 2012 Infineon Technologies AG. All rights reserved.
 *
 *
 * $Revision: 662 $
 * $Date: 2012-05-09 15:37:22 +0200 (mer., 09 mai 2012) $
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
#ifndef IFXGLOBAL_REGDEF_H
#define IFXGLOBAL_REGDEF_H
/******************************************************************************/
#include "Global/IfxGlobal_regdef.h"

/******************************************************************************/
/*                           Struct (0 - Bitfields)                           */
/******************************************************************************/

/** Clock Control Register */
typedef struct
{
    unsigned int DISR: 1;                  /** \brief [0:0] Module Disable Request Bit (rw) */
    unsigned int DISS: 1;                  /** \brief [1:1] Module Disable Status Bit (rh) */
    unsigned int FDIS: 1;                  /** \brief [2:2] Freeze Disable (rw) */
    unsigned int EDIS: 1;                  /** \brief [3:3] Sleep Mode Enable Control (rw) */
    unsigned int reserved_4: 28;
} Ifx_CLC1_Bits;

/** Clock Control Register */
typedef struct
{
    unsigned int DISR: 1;                  /** \brief [0:0] Module Disable Request Bit (rw) */
    unsigned int DISS: 1;                  /** \brief [1:1] Module Disable Status Bit (rh) */
    unsigned int reserved_2: 1;
    unsigned int EDIS: 1;                  /** \brief [3:3] Sleep Mode Enable Control (rw) */
    unsigned int reserved_4: 28;
} Ifx_CLC2_Bits;

/** Clock Control Register */
typedef struct
{
    unsigned int DISR: 1;                  /** \brief [0:0] Module Disable Request Bit (rw) */
    unsigned int DISS: 1;                  /** \brief [1:1] Module Disable Status Bit (r) */
    unsigned int reserved_2: 1;
    unsigned int EDIS: 1;                  /** \brief [3:3] Sleep Mode Enable Control (rw) */
    unsigned int reserved_4: 4;
    unsigned int RMC: 3;                   /** \brief [10:8] Clock Divider in Run Mode (rw) */
    unsigned int reserved_11: 21;
} Ifx_CLC3_Bits;

/** Clock Control Register */
typedef struct
{
    unsigned int DISR: 1;                  /** \brief [0:0] Module Disable Bit Request (rw) */
    unsigned int DISS: 1;                  /** \brief [1:1] Module Disable Bit Status (rh) */
    unsigned int SPEN: 1;                  /** \brief [2:2] Module Suspend Enable for OCDS (rw) */
    unsigned int EDIS: 1;                  /** \brief [3:3] Sleep Mode Enable Control (rw) */
    unsigned int SBWE: 1;                  /** \brief [4:4] Module Suspend Bit Write Enable for OCDS (w) */
    unsigned int FSOE: 1;                  /** \brief [5:5] Fast Switch Off Enable (rw) */
    unsigned int reserved_6: 2;
    unsigned int RMC: 8;                   /** \brief [15:8] 8-bit Clock Divider Value in RUN Mode (rw) */
    unsigned int reserved_16: 16;
} Ifx_CLC4_Bits;

/** Clock Control Register */
typedef struct
{
    unsigned int DISR: 1;                  /** \brief [0:0] Disable Request Bit (rw) */
    unsigned int DISS: 1;                  /** \brief [1:1] Disable Status Bit (rh) */
    unsigned int reserved_2: 30;
} Ifx_CLC5_Bits;

/** Clock Control Register */
typedef struct
{
    unsigned int DISR: 1;                  /** \brief [0:0] Module Disable Request Bit (rw) */
    unsigned int DISS: 1;                  /** \brief [1:1] Module Disable Status Bit (rh) */
    unsigned int FDIS: 1;                  /** \brief [2:2] Freeze Disable (rw) */
    unsigned int EDIS: 1;                  /** \brief [3:3] Sleep Mode Enable Control (rw) */
    unsigned int reserved_4: 4;
    unsigned int RMC: 8;                   /** \brief [15:8] 8-bit Clock Divider Value in RUN Mode (rw) */
    unsigned int reserved_16: 16;
} Ifx_CLC6_Bits;

/** Clock Control Register */
typedef struct
{
    unsigned int DISR: 1;                  /** \brief [0:0] Module Disable Request Bit (rw) */
    unsigned int DISS: 1;                  /** \brief [1:1] Module Disable Status Bit (rh) */
    unsigned int reserved_2: 1;
    unsigned int EDIS: 1;                  /** \brief [3:3] Sleep Mode Enable Control (rw) */
    unsigned int reserved_4: 4;
    unsigned int RMC: 8;                   /** \brief [15:8] 8-bit Clock Divider Value in RUN Mode (rw) */
    unsigned int reserved_16: 16;
} Ifx_CLC7_Bits;

/** Clock Control Register */
typedef struct
{
    unsigned int DISR: 1;                  /** \brief [0:0] Module Disable Request Bit (rw) */
    unsigned int DISS: 1;                  /** \brief [1:1] Module Disable Status Bit (rh) */
    unsigned int SPEN: 1;                  /** \brief [2:2] Module Suspend Enable Bit for OCDS (rw) */
    unsigned int EDIS: 1;                  /** \brief [3:3] External Request Disable (rw) */
    unsigned int SBWE: 1;                  /** \brief [4:4] Module Suspend Bit Write Enable for OCDS (w) */
    unsigned int FSOE: 1;                  /** \brief [5:5] Fast Switch Off Enable (rw) */
    unsigned int reserved_6: 2;
    unsigned int RMC: 8;                   /** \brief [15:8] Clock Divider for Standard Run Mode (rwh) */
    unsigned int ORMC: 8;                  /** \brief [23:16] Clock Divider for Optional Run Mode (AHB peripherals) (rwh) */
    unsigned int reserved_24: 8;
} Ifx_CLC8_Bits;

/** Module identification register */
typedef struct
{
    unsigned int MODREV: 8;                /** \brief [7:0] Module Revision Number (r) */
    unsigned int MODTYPE: 8;               /** \brief [15:8] Module Type (r) */
    unsigned int MODNUMBER: 16;            /** \brief [31:16] Module Number Value (r) */
} Ifx_ID1_Bits;

/** Module identification register */
typedef struct
{
    unsigned int MODREV: 8;                /** \brief [7:0] Module Revision Number (r) */
    unsigned int MODNUMBER: 8;             /** \brief [15:8] Module Number Value (r) */
    unsigned int reserved_16: 16;
} Ifx_ID2_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Clock Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CLC1_Bits B;
} Ifx_CLC1;

/** Clock Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CLC2_Bits B;
} Ifx_CLC2;

/** Clock Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CLC3_Bits B;
} Ifx_CLC3;

/** Clock Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CLC4_Bits B;
} Ifx_CLC4;

/** Clock Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CLC5_Bits B;
} Ifx_CLC5;

/** Clock Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CLC6_Bits B;
} Ifx_CLC6;

/** Clock Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CLC7_Bits B;
} Ifx_CLC7;

/** Clock Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CLC8_Bits B;
} Ifx_CLC8;

/** Module identification register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_ID1_Bits B;
} Ifx_ID1;

/** Module identification register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_ID2_Bits B;
} Ifx_ID2;
/******************************************************************************/
#endif /* IFXGLOBAL_REGDEF_H */

