/**
 * \file IfxMc_regdef.h
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
 * \defgroup IfxLld_Mc Mc
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Mc_Bitfields Bitfields
 * \ingroup IfxLld_Mc
 * 
 * \defgroup IfxLld_Mc_union Union
 * \ingroup IfxLld_Mc
 * 
 * \defgroup IfxLld_Mc_struct Struct
 * \ingroup IfxLld_Mc
 * 
 */
#ifndef IFXMC_REGDEF_H
#define IFXMC_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Mc_Bitfields
 * \{  */

/** \\brief  Configuration Register 0 */
typedef struct _Ifx_MC_CONFIG0_Bits
{
    Ifx_Strict_16Bit ACCSTYPE:8;            /**< \brief [7:0] Access type (rw) */
    Ifx_Strict_16Bit reserved_8:4;          /**< \brief \internal Reserved */
    Ifx_Strict_16Bit NUMACCS:4;             /**< \brief [15:12] Number of accesses per address (rw) */
} Ifx_MC_CONFIG0_Bits;

/** \\brief  Configuration Register 1 */
typedef struct _Ifx_MC_CONFIG1_Bits
{
    Ifx_Strict_16Bit ACCSPAT:8;             /**< \brief [7:0] Access pattern (rw) */
    Ifx_Strict_16Bit reserved_8:3;          /**< \brief \internal Reserved */
    Ifx_Strict_16Bit DIR:1;                 /**< \brief [11:11] Direction (rw) */
    Ifx_Strict_16Bit AG_MOD:4;              /**< \brief [15:12] Address Generator Mode (rw) */
} Ifx_MC_CONFIG1_Bits;

/** \\brief  Memory ECC Detection Register */
typedef struct _Ifx_MC_ECCD_Bits
{
    Ifx_Strict_16Bit SERR:1;                /**< \brief [0:0] Error Detected (rwh) */
    Ifx_Strict_16Bit CERR:1;                /**< \brief [1:1] Correctable Error Detected (rwh) */
    Ifx_Strict_16Bit UERR:1;                /**< \brief [2:2] Uncorrectable Error Detected (rwh) */
    Ifx_Strict_16Bit AERR:1;                /**< \brief [3:3] Address Error Detected (rwh) */
    Ifx_Strict_16Bit TRC:1;                 /**< \brief [4:4] Tracking Clear (rh) */
    Ifx_Strict_16Bit VAL:4;                 /**< \brief [8:5] Valid Bits (rh) */
    Ifx_Strict_16Bit reserved_9:6;          /**< \brief \internal Reserved */
    Ifx_Strict_16Bit EOV:1;                 /**< \brief [15:15] Error Overflow (rh) */
} Ifx_MC_ECCD_Bits;

/** \\brief  ECC Safety Register */
typedef struct _Ifx_MC_ECCS_Bits
{
    Ifx_Strict_16Bit CENE:1;                /**< \brief [0:0] Correctable Error Notification Enable (rw) */
    Ifx_Strict_16Bit UENE:1;                /**< \brief [1:1] Uncorrectable Error Notification Enable (rw) */
    Ifx_Strict_16Bit AENE:1;                /**< \brief [2:2] Address Error Notification Enable (rw) */
    Ifx_Strict_16Bit ECE:1;                 /**< \brief [3:3] Error Correction Enable (rw) */
    Ifx_Strict_16Bit TRE:1;                 /**< \brief [4:4] Tracking Enable (rw) */
    Ifx_Strict_16Bit BFLE:1;                /**< \brief [5:5] Bit Flip Enable (rw) */
    Ifx_Strict_16Bit SFLE:2;                /**< \brief [7:6] Signature Bit Flip Enables (rw) */
    Ifx_Strict_16Bit ECCMAP:2;              /**< \brief [9:8] ECC Bit Mapping Mode (rw) */
    Ifx_Strict_16Bit TC_WAY_SEL:2;          /**< \brief [11:10] TriCore Cache Way Select (rw) */
    Ifx_Strict_16Bit reserved_12:4;         /**< \brief \internal Reserved */
} Ifx_MC_ECCS_Bits;

/** \\brief  Error Tracking Register */
typedef struct _Ifx_MC_ETRR_Bits
{
    Ifx_Strict_16Bit ADDR:16;               /**< \brief [15:0] Address of Error(i) (rh) */
} Ifx_MC_ETRR_Bits;

/** \\brief  MBIST Control Register */
typedef struct _Ifx_MC_MCONTROL_Bits
{
    Ifx_Strict_16Bit START:1;               /**< \brief [0:0] START (rwh) */
    Ifx_Strict_16Bit MAREN:1;               /**< \brief [1:1] Marching Algorithm Enable (rw) */
    Ifx_Strict_16Bit MARS:1;                /**< \brief [2:2] Marching Algorithm Select (rw) */
    Ifx_Strict_16Bit CHEN:1;                /**< \brief [3:3] Checkerboard Enable (rw) */
    Ifx_Strict_16Bit DINIT:1;               /**< \brief [4:4] Data Initialization Enable (rw) */
    Ifx_Strict_16Bit RCADR:1;               /**< \brief [5:5] Fast Row / Fast Column Addressing Scheme Select (rw) */
    Ifx_Strict_16Bit ROWTOG:1;              /**< \brief [6:6] Row toggling (rw) */
    Ifx_Strict_16Bit BITTOG:1;              /**< \brief [7:7] Bit toggling (rw) */
    Ifx_Strict_16Bit GP_BASE:1;             /**< \brief [8:8] Galpat Base (rw) */
    Ifx_Strict_16Bit FAILDMP:1;             /**< \brief [9:9] Fail bitmap dump (rw) */
    Ifx_Strict_16Bit RSF:1;                 /**< \brief [10:10] RESET_STICKY_FLAGS (rwh) */
    Ifx_Strict_16Bit RESUME:1;              /**< \brief [11:11] Resume failed test (rw) */
    Ifx_Strict_16Bit INITRED:1;             /**< \brief [12:12] Initialize Redundancy Settings (rw) */
    Ifx_Strict_16Bit LDRED:1;               /**< \brief [13:13] Load RedundancyShould not be used together with USERED =’1’. (rw) */
    Ifx_Strict_16Bit USERED:1;              /**< \brief [14:14] Use RedundancyShould not be used together with LEDRED =’1’. (rw) */
    Ifx_Strict_16Bit RAR_ECC:1;             /**< \brief [15:15] RAR_ECC saver (rw) */
} Ifx_MC_MCONTROL_Bits;

/** \\brief  Status Register */
typedef struct _Ifx_MC_MSTATUS_Bits
{
    Ifx_Strict_16Bit DONE:1;                /**< \brief [0:0] DONE (rh) */
    Ifx_Strict_16Bit FAIL:1;                /**< \brief [1:1] FAIL (rh) */
    Ifx_Strict_16Bit FAIL_COUNT:6;          /**< \brief [7:2] FAIL_COUNT (rh) */
    Ifx_Strict_16Bit RUPD:1;                /**< \brief [8:8] RAR_UPDATED (rh) */
    Ifx_Strict_16Bit MTOF:1;                /**< \brief [9:9] MORE_THAN_ONE_FAIL (rh) */
    Ifx_Strict_16Bit FDA:1;                 /**< \brief [10:10] Fail Dump Available (rwh) */
    Ifx_Strict_16Bit reserved_11:5;         /**< \brief \internal Reserved */
} Ifx_MC_MSTATUS_Bits;

/** \\brief  Range Register, single address mode */
typedef struct _Ifx_MC_RANGE_Bits
{
    Ifx_Strict_16Bit ADDR:15;               /**< \brief [14:0] Address (rw) */
    Ifx_Strict_16Bit RAEN:1;                /**< \brief [15:15] Range Enable (rw) */
} Ifx_MC_RANGE_Bits;

/** \\brief  Read Data and Bit Flip Register */
typedef struct _Ifx_MC_RDBFL_Bits
{
    Ifx_Strict_16Bit WDATA:16;              /**< \brief [15:0] Word Data (rwh) */
} Ifx_MC_RDBFL_Bits;

/** \\brief  Revision ID Register */
typedef struct _Ifx_MC_REVID_Bits
{
    Ifx_Strict_16Bit REV_ID:16;             /**< \brief [15:0] Revision Identifier (rh) */
} Ifx_MC_REVID_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Mc_union
 * \{  */

/** \\brief  Configuration Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned short U;
    /** \brief Signed access */
    signed short I;
    /** \brief Bitfield access */
    Ifx_MC_CONFIG0_Bits B;
} Ifx_MC_CONFIG0;

/** \\brief  Configuration Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned short U;
    /** \brief Signed access */
    signed short I;
    /** \brief Bitfield access */
    Ifx_MC_CONFIG1_Bits B;
} Ifx_MC_CONFIG1;

/** \\brief  Memory ECC Detection Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned short U;
    /** \brief Signed access */
    signed short I;
    /** \brief Bitfield access */
    Ifx_MC_ECCD_Bits B;
} Ifx_MC_ECCD;

/** \\brief  ECC Safety Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned short U;
    /** \brief Signed access */
    signed short I;
    /** \brief Bitfield access */
    Ifx_MC_ECCS_Bits B;
} Ifx_MC_ECCS;

/** \\brief  Error Tracking Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned short U;
    /** \brief Signed access */
    signed short I;
    /** \brief Bitfield access */
    Ifx_MC_ETRR_Bits B;
} Ifx_MC_ETRR;

/** \\brief  MBIST Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned short U;
    /** \brief Signed access */
    signed short I;
    /** \brief Bitfield access */
    Ifx_MC_MCONTROL_Bits B;
} Ifx_MC_MCONTROL;

/** \\brief  Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned short U;
    /** \brief Signed access */
    signed short I;
    /** \brief Bitfield access */
    Ifx_MC_MSTATUS_Bits B;
} Ifx_MC_MSTATUS;

/** \\brief  Range Register, single address mode */
typedef union
{
    /** \brief Unsigned access */
    unsigned short U;
    /** \brief Signed access */
    signed short I;
    /** \brief Bitfield access */
    Ifx_MC_RANGE_Bits B;
} Ifx_MC_RANGE;

/** \\brief  Read Data and Bit Flip Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned short U;
    /** \brief Signed access */
    signed short I;
    /** \brief Bitfield access */
    Ifx_MC_RDBFL_Bits B;
} Ifx_MC_RDBFL;

/** \\brief  Revision ID Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned short U;
    /** \brief Signed access */
    signed short I;
    /** \brief Bitfield access */
    Ifx_MC_REVID_Bits B;
} Ifx_MC_REVID;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Mc_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \\brief  MC object */
typedef volatile struct _Ifx_MC
{
    Ifx_MC_CONFIG0 CONFIG0;                 /**< \brief 0, Configuration Register 0 */
    Ifx_MC_CONFIG1 CONFIG1;                 /**< \brief 2, Configuration Register 1 */
    Ifx_MC_MCONTROL MCONTROL;               /**< \brief 4, MBIST Control Register */
    Ifx_MC_MSTATUS MSTATUS;                 /**< \brief 6, Status Register */
    Ifx_MC_RANGE RANGE;                     /**< \brief 8, Range Register, single address mode */
    unsigned char reserved_A[2];            /**< \brief A, \internal Reserved */
    Ifx_MC_REVID REVID;                     /**< \brief C, Revision ID Register */
    Ifx_MC_ECCS ECCS;                       /**< \brief E, ECC Safety Register */
    Ifx_MC_ECCD ECCD;                       /**< \brief 10, Memory ECC Detection Register */
    Ifx_MC_ETRR ETRR[4];                    /**< \brief 12, Error Tracking Register */
    unsigned char reserved_1A[134];         /**< \brief 1A, \internal Reserved */
    Ifx_MC_RDBFL RDBFL[40];                 /**< \brief A0, Read Data and Bit Flip Register */
    unsigned char reserved_F0[16];          /**< \brief F0, \internal Reserved */
} Ifx_MC;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXMC_REGDEF_H */
