/**
 * \file IfxMchk_regdef.h
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
#ifndef IFXMCHK_REGDEF_H
#define IFXMCHK_REGDEF_H
/******************************************************************************/
#include "Global/IfxGlobal_regdef.h"

/******************************************************************************/
/*                           Struct (0 - Bitfields)                           */
/******************************************************************************/

/** Memory Checker Input Register */
typedef struct
{
    unsigned int MCHKIN: 32;                /** \brief [31:0] Memory Checker Input (w) */
} Ifx_MCHK_CHK_IR_Bits;

/** Memory Checker Result Register */
typedef struct
{
    unsigned int MCHKR: 32;                 /** \brief [31:0] Memory Checker Result (rwh) */
} Ifx_MCHK_CHK_RR_Bits;

/** Memory Checker CRC Register */
typedef struct
{
    unsigned int MCHKCRC: 32;               /** \brief [31:0] Memory Checker CRC (rwh) */
} Ifx_MCHK_CRC_Bits;

/** Memory Checker Write Register */
typedef struct
{
    unsigned int WO: 32;                    /** \brief [31:0] Write-Only (w) */
} Ifx_MCHK_WR_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Memory Checker Input Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCHK_CHK_IR_Bits B;
} Ifx_MCHK_CHK_IR;

/** Memory Checker Result Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCHK_CHK_RR_Bits B;
} Ifx_MCHK_CHK_RR;

/** Memory Checker CRC Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCHK_CRC_Bits B;
} Ifx_MCHK_CRC;

/** Memory Checker Write Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCHK_WR_Bits B;
} Ifx_MCHK_WR;

/******************************************************************************/
/*                           Struct (3 - Object L1)                           */
/******************************************************************************/

/** Checker */
typedef volatile struct
{
    Ifx_MCHK_CHK_IR IR;                     /** \brief 0, Memory Checker Input Register */
    Ifx_MCHK_CHK_RR RR;                     /** \brief 4, Memory Checker Result Register */
} Ifx_MCHK_CHK;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** MCHK object */
typedef volatile struct
{
    unsigned char reserved_0[8];            /** \brief 0 */
    Ifx_ID1 ID;                             /** \brief 8, Module Identification Register */
    unsigned char reserved_C[4];            /** \brief C */
    Ifx_MCHK_CHK CHK[2];                    /** \brief 10, Checker */
    Ifx_MCHK_WR WR;                         /** \brief 20, Memory Checker Write Register */
    Ifx_MCHK_CRC CRC[2];                    /** \brief 24, Memory Checker CRC Register */
    unsigned char reserved_2C[212];         /** \brief 2C */
} Ifx_MCHK;
/******************************************************************************/
#endif /* IFXMCHK_REGDEF_H */

