/**
 * \file IfxMchk_regdef.h
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
 * \defgroup IfxLld_Mchk Mchk
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Mchk_Bitfields Bitfields
 * \ingroup IfxLld_Mchk
 * 
 * \defgroup IfxLld_Mchk_union Union
 * \ingroup IfxLld_Mchk
 * 
 * \defgroup IfxLld_Mchk_struct Struct
 * \ingroup IfxLld_Mchk
 * 
 */
#ifndef IFXMCHK_REGDEF_H
#define IFXMCHK_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Mchk_Bitfields
 * \{  */

/** \\brief  Memory Checker Input Register */
typedef struct _Ifx_MCHK_CHK_IR_Bits
{
    unsigned int MCHKIN:32;                 /**< \brief [31:0] Memory Checker Input (w) */
} Ifx_MCHK_CHK_IR_Bits;

/** \\brief  Memory Checker Result Register */
typedef struct _Ifx_MCHK_CHK_RR_Bits
{
    unsigned int MCHKR:32;                  /**< \brief [31:0] Memory Checker Result (rwh) */
} Ifx_MCHK_CHK_RR_Bits;

/** \\brief  Memory Checker CRC Register */
typedef struct _Ifx_MCHK_CRC_Bits
{
    unsigned int MCHKCRC:32;                /**< \brief [31:0] Memory Checker CRC (rwh) */
} Ifx_MCHK_CRC_Bits;

/** \\brief  Module Identification Register */
typedef struct _Ifx_MCHK_ID_Bits
{
    unsigned int MODREV:8;                  /**< \brief [7:0] Module Revision Number (r) */
    unsigned int MODTYPE:8;                 /**< \brief [15:8] Module Type (r) */
    unsigned int MODNUMBER:16;              /**< \brief [31:16] Module Number Value (r) */
} Ifx_MCHK_ID_Bits;

/** \\brief  Memory Checker Write Register */
typedef struct _Ifx_MCHK_WR_Bits
{
    unsigned int WO:32;                     /**< \brief [31:0] Write-Only (w) */
} Ifx_MCHK_WR_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Mchk_union
 * \{  */

/** \\brief  Memory Checker Input Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_MCHK_CHK_IR_Bits B;
} Ifx_MCHK_CHK_IR;

/** \\brief  Memory Checker Result Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_MCHK_CHK_RR_Bits B;
} Ifx_MCHK_CHK_RR;

/** \\brief  Memory Checker CRC Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_MCHK_CRC_Bits B;
} Ifx_MCHK_CRC;

/** \\brief  Module Identification Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_MCHK_ID_Bits B;
} Ifx_MCHK_ID;

/** \\brief  Memory Checker Write Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_MCHK_WR_Bits B;
} Ifx_MCHK_WR;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Mchk_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */

/** \\brief  Checker */
typedef volatile struct _Ifx_MCHK_CHK
{
    Ifx_MCHK_CHK_IR IR;                     /**< \brief 0, Memory Checker Input Register */
    Ifx_MCHK_CHK_RR RR;                     /**< \brief 4, Memory Checker Result Register */
} Ifx_MCHK_CHK;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Mchk_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \\brief  MCHK object */
typedef volatile struct _Ifx_MCHK
{
    unsigned char reserved_0[8];            /**< \brief 0, \internal Reserved */
    Ifx_MCHK_ID ID;                         /**< \brief 8, Module Identification Register */
    unsigned char reserved_C[4];            /**< \brief C, \internal Reserved */
    Ifx_MCHK_CHK CHK[2];                    /**< \brief 10, Checker */
    Ifx_MCHK_WR WR;                         /**< \brief 20, Memory Checker Write Register */
    Ifx_MCHK_CRC CRC[2];                    /**< \brief 24, Memory Checker CRC Register */
    unsigned char reserved_2C[212];         /**< \brief 2C, \internal Reserved */
} Ifx_MCHK;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXMCHK_REGDEF_H */
