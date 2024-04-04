/**
 * \file IfxMc_regdef.h
 * \copyright Copyright (c) 2012 Infineon Technologies AG. All rights reserved.
 *
 *
 * $Revision: 657 $
 * $Date: 2012-04-18 15:54:11 +0200 (mer., 18 avr. 2012) $
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
#ifndef IFXMC_REGDEF_H
#define IFXMC_REGDEF_H
/******************************************************************************/
#include "Global/IfxGlobal_regdef.h"

/******************************************************************************/
/*                           Struct (0 - Bitfields)                           */
/******************************************************************************/

/** Configuration Register 0 */
typedef struct
{
    unsigned short ACCSTYPE: 8;             /** \brief [7:0] Access type (rw) */
    unsigned short reserved_8: 4;
    unsigned short NUMACCS: 4;              /** \brief [15:12] Number of accesses per address (rw) */
} Ifx_MC_CONFIG0_Bits;

/** Configuration Register 1 */
typedef struct
{
    unsigned short ACCSPAT: 8;              /** \brief [7:0] Access pattern (rw) */
    unsigned short reserved_8: 3;
    unsigned short DIR: 1;                  /** \brief [11:11] Direction (rw) */
    unsigned short AG_MOD: 4;               /** \brief [15:12] Address Generator Mode (rw) */
} Ifx_MC_CONFIG1_Bits;

/** Memory ECC Detection Register */
typedef struct
{
    unsigned short SERR: 1;                 /** \brief [0:0] Error Detected (rwh) */
    unsigned short CERR: 1;                 /** \brief [1:1] Correctable Error Detected (rwh) */
    unsigned short UERR: 1;                 /** \brief [2:2] Uncorrectable Error Detected (rwh) */
    unsigned short AERR: 1;                 /** \brief [3:3] Address Error Detected (rwh) */
    unsigned short TRC: 1;                  /** \brief [4:4] Tracking Clear (rh) */
    unsigned short VAL: 4;                  /** \brief [8:5] Valid Bits (rh) */
    unsigned short reserved_9: 6;
    unsigned short EOV: 1;                  /** \brief [15:15] Error Overflow (rh) */
} Ifx_MC_ECCD_Bits;

/** ECC Safety Register */
typedef struct
{
    unsigned short CENE: 1;                 /** \brief [0:0] Correctable Error Notification Enable (rw) */
    unsigned short UENE: 1;                 /** \brief [1:1] Uncorrectable Error Notification Enable (rw) */
    unsigned short AENE: 1;                 /** \brief [2:2] Address Error Notification Enable (rw) */
    unsigned short ECE: 1;                  /** \brief [3:3] Error Correction Enable (rw) */
    unsigned short TRE: 1;                  /** \brief [4:4] Tracking Enable (rw) */
    unsigned short BFLE: 1;                 /** \brief [5:5] Bit Flip Enable (rw) */
    unsigned short SFLE: 2;                 /** \brief [7:6] Signature Bit Flip Enables (rw) */
    unsigned short ECCMAP: 2;               /** \brief [9:8] ECC Bit Mapping Mode (rw) */
    unsigned short TC_WAY_SEL: 2;           /** \brief [11:10] TriCore Cache Way Select (rw) */
    unsigned short reserved_12: 4;
} Ifx_MC_ECCS_Bits;

/** Error Tracking Register */
typedef struct
{
    unsigned short ADDR: 16;                /** \brief [15:0] Address of Error(i) (rh) */
} Ifx_MC_ETRR_Bits;

/** MBIST Control Register */
typedef struct
{
    unsigned short START: 1;                /** \brief [0:0] START (rwh) */
    unsigned short MAREN: 1;                /** \brief [1:1] Marching Algorithm Enable (rw) */
    unsigned short MARS: 1;                 /** \brief [2:2] Marching Algorithm Select (rw) */
    unsigned short CHEN: 1;                 /** \brief [3:3] Checkerboard Enable (rw) */
    unsigned short DINIT: 1;                /** \brief [4:4] Data Initialization Enable (rw) */
    unsigned short RCADR: 1;                /** \brief [5:5] Fast Row / Fast Column Addressing Scheme Select (rw) */
    unsigned short ROWTOG: 1;               /** \brief [6:6] Row toggling (rw) */
    unsigned short BITTOG: 1;               /** \brief [7:7] Bit toggling (rw) */
    unsigned short GP_BASE: 1;              /** \brief [8:8] Galpat Base (rw) */
    unsigned short FAILDMP: 1;              /** \brief [9:9] Fail bitmap dump (rw) */
    unsigned short RSF: 1;                  /** \brief [10:10] RESET_STICKY_FLAGS (rwh) */
    unsigned short RESUME: 1;               /** \brief [11:11] Resume failed test (rw) */
    unsigned short INITRED: 1;              /** \brief [12:12] Initialize Redundancy Settings (rw) */
    unsigned short LDRED: 1;                /** \brief [13:13] Load RedundancyShould not be used together with USERED =’1’. (rw) */
    unsigned short USERED: 1;               /** \brief [14:14] Use RedundancyShould not be used together with LEDRED =’1’. (rw) */
    unsigned short RAR_ECC: 1;              /** \brief [15:15] RAR_ECC saver (rw) */
} Ifx_MC_MCONTROL_Bits;

/** Status Register */
typedef struct
{
    unsigned short DONE: 1;                 /** \brief [0:0] DONE (rh) */
    unsigned short FAIL: 1;                 /** \brief [1:1] FAIL (rh) */
    unsigned short FAIL_COUNT: 6;           /** \brief [7:2] FAIL_COUNT (rh) */
    unsigned short RUPD: 1;                 /** \brief [8:8] RAR_UPDATED (rh) */
    unsigned short MTOF: 1;                 /** \brief [9:9] MORE_THAN_ONE_FAIL (rh) */
    unsigned short FDA: 1;                  /** \brief [10:10] Fail Dump Available (rwh) */
    unsigned short reserved_11: 5;
} Ifx_MC_MSTATUS_Bits;

/** Range Register, single address mode */
typedef struct
{
    unsigned short ADDR: 15;                /** \brief [14:0] Address (rw) */
    unsigned short RAEN: 1;                 /** \brief [15:15] Range Enable (rw) */
} Ifx_MC_RANGE_Bits;

/** Read Data and Bit Flip Register */
typedef struct
{
    unsigned short WDATA: 16;               /** \brief [15:0] Word Data (rwh) */
} Ifx_MC_RDBFL_Bits;

/** Revision ID Register */
typedef struct
{
    unsigned short REV_ID: 16;              /** \brief [15:0] Revision Identifier (rh) */
} Ifx_MC_REVID_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Configuration Register 0 */
typedef union
{
    unsigned short U;
    signed short I;
    Ifx_MC_CONFIG0_Bits B;
} Ifx_MC_CONFIG0;

/** Configuration Register 1 */
typedef union
{
    unsigned short U;
    signed short I;
    Ifx_MC_CONFIG1_Bits B;
} Ifx_MC_CONFIG1;

/** Memory ECC Detection Register */
typedef union
{
    unsigned short U;
    signed short I;
    Ifx_MC_ECCD_Bits B;
} Ifx_MC_ECCD;

/** ECC Safety Register */
typedef union
{
    unsigned short U;
    signed short I;
    Ifx_MC_ECCS_Bits B;
} Ifx_MC_ECCS;

/** Error Tracking Register */
typedef union
{
    unsigned short U;
    signed short I;
    Ifx_MC_ETRR_Bits B;
} Ifx_MC_ETRR;

/** MBIST Control Register */
typedef union
{
    unsigned short U;
    signed short I;
    Ifx_MC_MCONTROL_Bits B;
} Ifx_MC_MCONTROL;

/** Status Register */
typedef union
{
    unsigned short U;
    signed short I;
    Ifx_MC_MSTATUS_Bits B;
} Ifx_MC_MSTATUS;

/** Range Register, single address mode */
typedef union
{
    unsigned short U;
    signed short I;
    Ifx_MC_RANGE_Bits B;
} Ifx_MC_RANGE;

/** Read Data and Bit Flip Register */
typedef union
{
    unsigned short U;
    signed short I;
    Ifx_MC_RDBFL_Bits B;
} Ifx_MC_RDBFL;

/** Revision ID Register */
typedef union
{
    unsigned short U;
    signed short I;
    Ifx_MC_REVID_Bits B;
} Ifx_MC_REVID;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** MC object */
typedef volatile struct
{
    Ifx_MC_CONFIG0 CONFIG0;                 /** \brief 0, Configuration Register 0 */
    Ifx_MC_CONFIG1 CONFIG1;                 /** \brief 2, Configuration Register 1 */
    Ifx_MC_MCONTROL MCONTROL;               /** \brief 4, MBIST Control Register */
    Ifx_MC_MSTATUS MSTATUS;                 /** \brief 6, Status Register */
    Ifx_MC_RANGE RANGE;                     /** \brief 8, Range Register, single address mode */
    unsigned char reserved_A[2];            /** \brief A */
    Ifx_MC_REVID REVID;                     /** \brief C, Revision ID Register */
    Ifx_MC_ECCS ECCS;                       /** \brief E, ECC Safety Register */
    Ifx_MC_ECCD ECCD;                       /** \brief 10, Memory ECC Detection Register */
    Ifx_MC_ETRR ETRR[4];                    /** \brief 12, Error Tracking Register */
    unsigned char reserved_1A[134];         /** \brief 1A */
    Ifx_MC_RDBFL RDBFL[40];                 /** \brief A0, Read Data and Bit Flip Register */
    unsigned char reserved_F0[16];          /** \brief F0 */
} Ifx_MC;
/******************************************************************************/
#endif /* IFXMC_REGDEF_H */

