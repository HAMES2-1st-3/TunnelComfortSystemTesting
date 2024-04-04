/**
 * \file IfxMcds_regdef.h
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
#ifndef IFXMCDS_REGDEF_H
#define IFXMCDS_REGDEF_H
/******************************************************************************/
#include "Global/IfxGlobal_regdef.h"

/******************************************************************************/
/*                           Struct (0 - Bitfields)                           */
/******************************************************************************/

/** Action Definition Register */
typedef struct
{
    unsigned int AIS0: 5;                   /** \brief [4:0] Action Input Selector (rw) */
    unsigned int AIQ0: 2;                   /** \brief [6:5] Action Input Qualifier (rw) */
    unsigned int LV0: 1;                    /** \brief [7:7] Action Input Level Mode (rw) */
    unsigned int AIS1: 5;                   /** \brief [12:8] Action Input Selector (rw) */
    unsigned int AIQ1: 2;                   /** \brief [14:13] Action Input Qualifier (rw) */
    unsigned int LV1: 1;                    /** \brief [15:15] Action Input Level Mode (rw) */
    unsigned int AIS2: 5;                   /** \brief [20:16] Action Input Selector (rw) */
    unsigned int AIQ2: 2;                   /** \brief [22:21] Action Input Qualifier (rw) */
    unsigned int LV2: 1;                    /** \brief [23:23] Action Input Level Mode (rw) */
    unsigned int AIS3: 5;                   /** \brief [28:24] Action Input Selector (rw) */
    unsigned int AIQ3: 2;                   /** \brief [30:29] Action Input Qualifier (rw) */
    unsigned int LV3: 1;                    /** \brief [31:31] Action Input Level Mode (rw) */
} Ifx_MCDS_ACT_Bits;

/** Counter Control Register */
typedef struct
{
    unsigned int INC0: 7;                   /** \brief [6:0] Count Input Selector (rw) */
    unsigned int ILV0: 1;                   /** \brief [7:7] Count Input Level Mode (rw) */
    unsigned int CLR0: 6;                   /** \brief [13:8] Clear Input Selector (rw) */
    unsigned int reserved_14: 1;
    unsigned int CLV0: 1;                   /** \brief [15:15] Clear Input Level Mode (rw) */
    unsigned int INC1: 7;                   /** \brief [22:16] Count Input Selector (rw) */
    unsigned int ILV1: 1;                   /** \brief [23:23] Count Input Level Mode (rw) */
    unsigned int CLR1: 6;                   /** \brief [29:24] Clear Input Selector (rw) */
    unsigned int reserved_30: 1;
    unsigned int CLV1: 1;                   /** \brief [31:31] Clear Input Level Mode (rw) */
} Ifx_MCDS_CNT_CCL_Bits;

/** Current Count Register */
typedef struct
{
    unsigned int COUNT: 16;                 /** \brief [15:0] Current Counter (rh) */
    unsigned int reserved_16: 16;
} Ifx_MCDS_CNT_CNT_Bits;

/** Counter Limit Register */
typedef struct
{
    unsigned int LIMIT: 16;                 /** \brief [15:0] Counter Limit (rw) */
    unsigned int reserved_16: 14;
    unsigned int MOD0: 1;                   /** \brief [30:30] Modulo Count Control (rw) */
    unsigned int MOD1: 1;                   /** \brief [31:31] Modulo Count Control (rw) */
} Ifx_MCDS_CNT_LMT_Bits;

/** MCDS Control Register */
typedef struct
{
    unsigned int reserved_0: 5;
    unsigned int KOK: 1;                    /** \brief [5:5] Key OK Flag (rh) */
    unsigned int CLRK: 1;                   /** \brief [6:6] Clear Key OK Flag (w) */
    unsigned int KAV: 1;                    /** \brief [7:7] Key Available Flag (rh) */
    unsigned int reserved_8: 5;
    unsigned int EN: 1;                     /** \brief [13:13] MCDS Enable Flag (rh) */
    unsigned int CLRE: 1;                   /** \brief [14:14] Clear MCDS Enable Flag (w) */
    unsigned int SETE: 1;                   /** \brief [15:15] Set MCDS Enable Flag (w) */
    unsigned int BED: 1;                    /** \brief [16:16] Bus Error Disable Flag (rw) */
    unsigned int reserved_17: 2;
    unsigned int BED_P: 1;                  /** \brief [19:19] Bus Error Disable Protection (w) */
    unsigned int reserved_20: 1;
    unsigned int IRA: 1;                    /** \brief [21:21] Invalid Read Access Flag (rh) */
    unsigned int CLRI: 1;                   /** \brief [22:22] Clear Invalid Access Bits (w) */
    unsigned int IWA: 1;                    /** \brief [23:23] Invalid Write Access Flag (rh) */
    unsigned int reserved_24: 5;
    unsigned int RES: 1;                    /** \brief [29:29] MCDS Reset Flag (rh) */
    unsigned int reserved_30: 1;
    unsigned int SETR: 1;                   /** \brief [31:31] MCDS Reset Request Bit (w) */
} Ifx_MCDS_CT_Bits;

/** Event Definition Register */
typedef struct
{
    unsigned int EIQ0: 2;                   /** \brief [1:0] Event Input Qualifier (rw) */
    unsigned int EIQ1: 2;                   /** \brief [3:2] Event Input Qualifier (rw) */
    unsigned int EIQ2: 2;                   /** \brief [5:4] Event Input Qualifier (rw) */
    unsigned int EIQ3: 2;                   /** \brief [7:6] Event Input Qualifier (rw) */
    unsigned int EIQ4: 2;                   /** \brief [9:8] Event Input Qualifier (rw) */
    unsigned int EIQ5: 2;                   /** \brief [11:10] Event Input Qualifier (rw) */
    unsigned int EIQ6: 2;                   /** \brief [13:12] Event Input Qualifier (rw) */
    unsigned int EIQ7: 2;                   /** \brief [15:14] Event Input Qualifier (rw) */
    unsigned int EIQ8: 2;                   /** \brief [17:16] Event Input Qualifier (rw) */
    unsigned int EIQ9: 2;                   /** \brief [19:18] Event Input Qualifier (rw) */
    unsigned int EIQ10: 2;                  /** \brief [21:20] Event Input Qualifier (rw) */
    unsigned int EIQ11: 2;                  /** \brief [23:22] Event Input Qualifier (rw) */
    unsigned int EIQ12: 2;                  /** \brief [25:24] Event Input Qualifier (rw) */
    unsigned int EIQ13: 2;                  /** \brief [27:26] Event Input Qualifier (rw) */
    unsigned int EIQ14: 2;                  /** \brief [29:28] Event Input Qualifier (rw) */
    unsigned int EIQ15: 2;                  /** \brief [31:30] Event Input Qualifier (rw) */
} Ifx_MCDS_EVT_Bits;

/** Trace Buffer Bottom Register */
typedef struct
{
    unsigned int reserved_0: 12;
    unsigned int BOTTOM: 8;                 /** \brief [19:12] Trace Buffer lower Bound (rw) */
    unsigned int reserved_20: 12;
} Ifx_MCDS_FIFOBOT_Bits;

/** Trace Buffer Control Register */
typedef struct
{
    unsigned int TRG: 1;                    /** \brief [0:0] Trigger Received Flag (rh) */
    unsigned int FFE: 1;                    /** \brief [1:1] FIFO Feeder Empty (rh) */
    unsigned int TME: 1;                    /** \brief [2:2] Trace Buffer Access Error (rh) */
    unsigned int reserved_3: 6;
    unsigned int TRDIS: 1;                  /** \brief [9:9] Trigger Disable Flag (rh) */
    unsigned int TRON: 1;                   /** \brief [10:10] Clear Trigger Disable Flag (w) */
    unsigned int TROFF: 1;                  /** \brief [11:11] Set Trigger Disable Flag (w) */
    unsigned int reserved_12: 1;
    unsigned int FLSH: 1;                   /** \brief [13:13] Flush Flag (rh) */
    unsigned int CLR: 1;                    /** \brief [14:14] Clear Flush Flag (w) */
    unsigned int SET: 1;                    /** \brief [15:15] Set Flush Flag (w) */
    unsigned int NTN: 1;                    /** \brief [16:16] Next Tile Now request (w) */
    unsigned int reserved_17: 7;
    unsigned int CTTO: 7;                   /** \brief [30:24] Continuos Trace Time Out (rw) */
    unsigned int CTTO_P: 1;                 /** \brief [31:31] CTTO write protection (w) */
} Ifx_MCDS_FIFOCTL_Bits;

/** Trace Buffer Write Pointer */
typedef struct
{
    unsigned int reserved_0: 5;
    unsigned int NOW: 15;                   /** \brief [19:5] Trace Buffer Current Write Pointer (rh) */
    unsigned int reserved_20: 12;
} Ifx_MCDS_FIFONOW_Bits;

/** Trace Buffer PRE/POST Register */
typedef struct
{
    unsigned int reserved_0: 5;
    unsigned int PRE: 15;                   /** \brief [19:5] Trace Buffer Pre-Trigger Area Size (rw) */
    unsigned int reserved_20: 12;
} Ifx_MCDS_FIFOPRE_Bits;

/** Trace Buffer Top Register */
typedef struct
{
    unsigned int reserved_0: 5;
    unsigned int TOP: 15;                   /** \brief [19:5] Trace Buffer upper Bound (rw) */
    unsigned int reserved_20: 12;
} Ifx_MCDS_FIFOTOP_Bits;

/** Trace Buffer Comparator Register */
typedef struct
{
    unsigned int reserved_0: 5;
    unsigned int WARN: 15;                  /** \brief [19:5] Trace Buffer Warn Level (rw) */
    unsigned int reserved_20: 10;
    unsigned int OCDEN: 1;                  /** \brief [30:30] Enable Trigger Output (rw) */
    unsigned int EN: 1;                     /** \brief [31:31] Enable Trigger Generation (rw) */
} Ifx_MCDS_FIFOWARN0_Bits;

/** Trace Buffer Comparator Register */
typedef struct
{
    unsigned int reserved_0: 5;
    unsigned int WARN: 15;                  /** \brief [19:5] Trace Buffer Warn Level (rw) */
    unsigned int reserved_20: 10;
    unsigned int OCDEN: 1;                  /** \brief [30:30] Enable Trigger Output (rw) */
    unsigned int EN: 1;                     /** \brief [31:31] Enable Trigger Generation (rw) */
} Ifx_MCDS_FIFOWARN1_Bits;

/** Lookup Table Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDR: 10;                  /** \brief [11:2] Address pointer (rw) */
    unsigned int reserved_12: 20;
} Ifx_MCDS_LOKUP_TA_Bits;

/** Lookup Table Data Register */
typedef struct
{
    unsigned int DATA: 32;                  /** \brief [31:0] Data transfer register (rw) */
} Ifx_MCDS_LOKUP_TD_Bits;

/** MCDS Signal Source Control */
typedef struct
{
    unsigned int TMUX0: 4;                  /** \brief [3:0] Trace Source Select 0 (rw) */
    unsigned int reserved_4: 3;
    unsigned int TM0_P: 1;                  /** \brief [7:7] Trace Source Select z Protection (w) */
    unsigned int TMUX1: 4;                  /** \brief [11:8] Trace Source Select 1 (rw) */
    unsigned int reserved_12: 3;
    unsigned int TM1_P: 1;                  /** \brief [15:15] Trace Source Select z Protection (w) */
    unsigned int TMUX2: 3;                  /** \brief [18:16] Trace Source Select 2 (rw) */
    unsigned int TM2_P: 1;                  /** \brief [19:19] Trace Source Select z Protection (w) */
    unsigned int TMUX3: 3;                  /** \brief [22:20] Trace Source Select 3 (rw) */
    unsigned int TM3_P: 1;                  /** \brief [23:23] Trace Source Select z Protection (w) */
    unsigned int RC: 1;                     /** \brief [24:24] Reference Clock Select (rw) */
    unsigned int reserved_25: 2;
    unsigned int RC_P: 1;                   /** \brief [27:27] Reference Clock Select Protection (w) */
    unsigned int reserved_28: 4;
} Ifx_MCDS_MUX_Bits;

/** OCDS Control and Status */
typedef struct
{
    unsigned int reserved_0: 24;
    unsigned int SUS: 4;                    /** \brief [27:24] OCDS Suspend Control (rw) */
    unsigned int SUS_P: 1;                  /** \brief [28:28] SUS Write Protection (w) */
    unsigned int SUSSTA: 1;                 /** \brief [29:29] Suspend State (inverted busy_o) (rh) */
    unsigned int reserved_30: 2;
} Ifx_MCDS_OCS_Bits;

/** Session ID High Register */
typedef struct
{
    unsigned int KEY: 32;                   /** \brief [31:0] Key High Word (bits [63:32]) (w) */
} Ifx_MCDS_SESSIDH_Bits;

/** Session ID Low Register */
typedef struct
{
    unsigned int KEY: 32;                   /** \brief [31:0] Key Low Word (bits [31:0]) (w) */
} Ifx_MCDS_SESSIDL_Bits;

/** Debug Status Register */
typedef struct
{
    unsigned int EI: 1;                     /** \brief [0:0] ENDINIT Protection Flag (rh) */
    unsigned int SUS: 1;                    /** \brief [1:1] Suspended Flag (rh) */
    unsigned int ERR: 1;                    /** \brief [2:2] Error Flag (rh) */
    unsigned int RTY: 1;                    /** \brief [3:3] Retry Flag (rh) */
    unsigned int SYSRES: 1;                 /** \brief [4:4] System Reset (Class 0) Flag (rh) */
    unsigned int APPRES: 1;                 /** \brief [5:5] Application Reset (Class 3) Flag (rh) */
    unsigned int CLKDIV: 2;                 /** \brief [7:6] Current Clock Divider (rh) */
    unsigned int reserved_8: 24;
} Ifx_MCDS_SPB_DCSTS_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int BOUND: 12;                 /** \brief [11:0] Mode Comparator range lower bound (rw) */
    unsigned int reserved_12: 20;
} Ifx_MCDS_SPBAC_BND_Bits;

/** Comparator Mask Register */
typedef struct
{
    unsigned int SVM: 1;                    /** \brief [0:0] Comparator bit mask for Supervisor Mode (rw) */
    unsigned int MASTER: 4;                 /** \brief [4:1] Comparator bit mask for Master ID (rw) */
    unsigned int SUBCHANNEL: 5;             /** \brief [9:5] Comparator bit mask for Sub-channel ID (rw) */
    unsigned int WR: 1;                     /** \brief [10:10] Comparator bit mask for Direction Write (rw) */
    unsigned int RD: 1;                     /** \brief [11:11] Comparator bit mask for Direction Read (rw) */
    unsigned int reserved_12: 20;
} Ifx_MCDS_SPBAC_MSK_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int RANGE: 12;                 /** \brief [11:0] Mode Comparator range size (rw) */
    unsigned int reserved_12: 20;
} Ifx_MCDS_SPBAC_RNG_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int BOUND: 32;                 /** \brief [31:0] Address Comparator range lower bound (rw) */
} Ifx_MCDS_SPBEA_BND_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int RANGE: 32;                 /** \brief [31:0] Address Comparator range size (rw) */
} Ifx_MCDS_SPBEA_RNG_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int BOUND: 32;                 /** \brief [31:0] Data Comparator range lower bound (rw) */
} Ifx_MCDS_SPBWD_BND_Bits;

/** Comparator Mask Register */
typedef struct
{
    unsigned int MASK: 32;                  /** \brief [31:0] Data Comparator bit mask (rw) */
} Ifx_MCDS_SPBWD_MSK_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int RANGE: 32;                 /** \brief [31:0] Data Comparator range size (rw) */
} Ifx_MCDS_SPBWD_RNG_Bits;

/** Comparator Sign Register */
typedef struct
{
    unsigned int SIGN: 5;                   /** \brief [4:0] Bit number (1…31) of sign bit (rw) */
    unsigned int reserved_5: 9;
    unsigned int EITHER: 1;                 /** \brief [14:14] RANGE matching either side of BOUND (rw) */
    unsigned int BELOW: 1;                  /** \brief [15:15] RANGE matching lower side of BOUND (rw) */
    unsigned int RELOAD: 4;                 /** \brief [19:16] Reload Event Selector (rw) */
    unsigned int reserved_20: 12;
} Ifx_MCDS_SPBWD_SGN_Bits;

/** Debug Status Register */
typedef struct
{
    unsigned int EI: 1;                     /** \brief [0:0] ENDINIT Protection Flag (rh) */
    unsigned int SUS: 1;                    /** \brief [1:1] Suspended Flag (rh) */
    unsigned int ERR: 1;                    /** \brief [2:2] Error Flag (rh) */
    unsigned int reserved_3: 1;
    unsigned int SYSRES: 1;                 /** \brief [4:4] System Reset (Class 0) Flag (rh) */
    unsigned int APPRES: 1;                 /** \brief [5:5] Application Reset (Class 3) Flag (rh) */
    unsigned int CLKDIV: 2;                 /** \brief [7:6] Current Clock Divider (rh) */
    unsigned int reserved_8: 24;
} Ifx_MCDS_SRI_SRIDCSTS_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int BOUND: 12;                 /** \brief [11:0] Mode Comparator range lower bound (rw) */
    unsigned int reserved_12: 20;
} Ifx_MCDS_SRIAC_BND_Bits;

/** Comparator Mask Register */
typedef struct
{
    unsigned int SVM: 1;                    /** \brief [0:0] Comparator bit mask for Supervisor Mode (rw) */
    unsigned int MASTER: 4;                 /** \brief [4:1] Comparator bit mask for Master ID (rw) */
    unsigned int SUBCHANNEL: 5;             /** \brief [9:5] Comparator bit mask for Sub-channel ID (rw) */
    unsigned int WR: 1;                     /** \brief [10:10] Comparator bit mask for Direction Write (rw) */
    unsigned int RD: 1;                     /** \brief [11:11] Comparator bit mask for Direction Read (rw) */
    unsigned int reserved_12: 20;
} Ifx_MCDS_SRIAC_MSK_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int RANGE: 12;                 /** \brief [11:0] Mode Comparator range size (rw) */
    unsigned int reserved_12: 20;
} Ifx_MCDS_SRIAC_RNG_Bits;

/** Lookup Table Base Register */
typedef struct
{
    unsigned int BOUND: 32;                 /** \brief [31:0] Comparator range lower bound (rw) */
} Ifx_MCDS_SRIBAL_BND_Bits;

/** Lookup Table Mapping Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int OFFSET: 10;                /** \brief [11:2] Lookup table location in RAM (rw) */
    unsigned int reserved_12: 16;
    unsigned int GRAIN: 3;                  /** \brief [30:28] Lookup table granularity (rw) */
    unsigned int EN: 1;                     /** \brief [31:31] Lookup table active (rw) */
} Ifx_MCDS_SRIBAL_MAP_Bits;

/** Lookup Table Range Register */
typedef struct
{
    unsigned int RANGE: 32;                 /** \brief [31:0] Lookup table range size (rw) */
} Ifx_MCDS_SRIBAL_RNG_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int BOUND: 32;                 /** \brief [31:0] Address Comparator range lower bound (rw) */
} Ifx_MCDS_SRIEA_BND_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int RANGE: 32;                 /** \brief [31:0] Address Comparator range size (rw) */
} Ifx_MCDS_SRIEA_RNG_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int BOUND: 32;                 /** \brief [31:0] Data Comparator range lower bound (rw) */
} Ifx_MCDS_SRIWD_BND_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int BOUND: 32;                 /** \brief [31:0] Data Comparator range lower bound high word (rw) */
} Ifx_MCDS_SRIWD_HBND_Bits;

/** Comparator Mask Register */
typedef struct
{
    unsigned int MASK: 32;                  /** \brief [31:0] Data Comparator bit mask high word (rw) */
} Ifx_MCDS_SRIWD_HMSK_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int RANGE: 32;                 /** \brief [31:0] Data Comparator range size high word (rw) */
} Ifx_MCDS_SRIWD_HRNG_Bits;

/** Comparator Mask Register */
typedef struct
{
    unsigned int MASK: 32;                  /** \brief [31:0] Data Comparator bit mask (rw) */
} Ifx_MCDS_SRIWD_MSK_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int RANGE: 32;                 /** \brief [31:0] Data Comparator range size (rw) */
} Ifx_MCDS_SRIWD_RNG_Bits;

/** Comparator Sign Register */
typedef struct
{
    unsigned int SIGN: 6;                   /** \brief [5:0] Bit number (1…63) of sign bit (rw) */
    unsigned int reserved_6: 8;
    unsigned int EITHER: 1;                 /** \brief [14:14] RANGE matching either side of BOUND (rw) */
    unsigned int BELOW: 1;                  /** \brief [15:15] RANGE matching lower side of BOUND (rw) */
    unsigned int RELOAD: 4;                 /** \brief [19:16] Reload Event Selector (rw) */
    unsigned int reserved_20: 12;
} Ifx_MCDS_SRIWD_SGN_Bits;

/** Current Process ID */
typedef struct
{
    unsigned int CURRENT: 2;                /** \brief [1:0] Current Process ID (rh) */
    unsigned int reserved_2: 30;
} Ifx_MCDS_TCX_CID_Bits;

/** Current Instruction Pointer */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int CURRENT: 31;               /** \brief [31:1] Current Instruction Pointer (rh) */
} Ifx_MCDS_TCX_CIP_Bits;

/** Debug Status Register */
typedef struct
{
    unsigned int SUS: 1;                    /** \brief [0:0] Suspended Flag (rh) */
    unsigned int IDLE: 1;                   /** \brief [1:1] Run Flag (rh) */
    unsigned int HALT: 1;                   /** \brief [2:2] Halted Flag (rh) */
    unsigned int ISR: 1;                    /** \brief [3:3] Interrupt Service Flag (rh) */
    unsigned int HBRK: 1;                   /** \brief [4:4] Hardware Break Flag (rh) */
    unsigned int SBRK: 1;                   /** \brief [5:5] Software Break Flag (rh) */
    unsigned int reserved_6: 1;
    unsigned int IEN: 1;                    /** \brief [7:7] Interrupt Enable Flag (rh) */
    unsigned int DBGEN: 1;                  /** \brief [8:8] Debug Enabled Flag (rh) */
    unsigned int CLKDIV: 2;                 /** \brief [10:9] Current Clock Divider (rh) */
    unsigned int reserved_11: 21;
} Ifx_MCDS_TCX_DCSTS_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int BOUND: 32;                 /** \brief [31:0] Address Comparator range lower bound (rw) */
} Ifx_MCDS_TCXEA_BND_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int RANGE: 32;                 /** \brief [31:0] Address Comparator range size (rw) */
} Ifx_MCDS_TCXEA_RNG_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int BOUND: 2;                  /** \brief [1:0] Process ID Comparator range lower bound (rw) */
    unsigned int reserved_2: 30;
} Ifx_MCDS_TCXID_BND_Bits;

/** Comparator Mask Register */
typedef struct
{
    unsigned int MASK: 2;                   /** \brief [1:0] Process ID Comparator bit mask (rw) */
    unsigned int reserved_2: 30;
} Ifx_MCDS_TCXID_MSK_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int RANGE: 2;                  /** \brief [1:0] Process ID Comparator range size (rw) */
    unsigned int reserved_2: 30;
} Ifx_MCDS_TCXID_RNG_Bits;

/** Comparator Sign Register */
typedef struct
{
    unsigned int SIGN: 1;                   /** \brief [0:0] Bit number (1) of sign bit (rw) */
    unsigned int reserved_1: 31;
} Ifx_MCDS_TCXID_SGN_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int BOUND: 31;                 /** \brief [31:1] IP Comparator range lower bound (rw) */
} Ifx_MCDS_TCXIP_BND_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int RANGE: 31;                 /** \brief [31:1] IP Comparator range size (rw) */
} Ifx_MCDS_TCXIP_RNG_Bits;

/** Lookup Table Base Register */
typedef struct
{
    unsigned int BOUND: 32;                 /** \brief [31:0] Comparator range lower bound (rw) */
} Ifx_MCDS_TCXPAL_BND_Bits;

/** Lookup Table Mapping Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int OFFSET: 10;                /** \brief [11:2] Lookup table location in RAM (rw) */
    unsigned int reserved_12: 16;
    unsigned int GRAIN: 3;                  /** \brief [30:28] Lookup table granularity (rw) */
    unsigned int EN: 1;                     /** \brief [31:31] Lookup table active (rw) */
} Ifx_MCDS_TCXPAL_MAP_Bits;

/** Lookup Table Range Register */
typedef struct
{
    unsigned int RANGE: 32;                 /** \brief [31:0] Lookup table range size (rw) */
} Ifx_MCDS_TCXPAL_RNG_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int BOUND: 32;                 /** \brief [31:0] Data Comparator range lower bound (rw) */
} Ifx_MCDS_TCXWD_BND_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int BOUND: 32;                 /** \brief [31:0] Data Comparator range lower bound high word (rw) */
} Ifx_MCDS_TCXWD_HBND_Bits;

/** Comparator Mask Register */
typedef struct
{
    unsigned int MASK: 32;                  /** \brief [31:0] Data Comparator bit mask high word (rw) */
} Ifx_MCDS_TCXWD_HMSK_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int RANGE: 32;                 /** \brief [31:0] Data Comparator range size high word (rw) */
} Ifx_MCDS_TCXWD_HRNG_Bits;

/** Comparator Mask Register */
typedef struct
{
    unsigned int MASK: 32;                  /** \brief [31:0] Data Comparator bit mask (rw) */
} Ifx_MCDS_TCXWD_MSK_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int RANGE: 32;                 /** \brief [31:0] Data Comparator range size (rw) */
} Ifx_MCDS_TCXWD_RNG_Bits;

/** Comparator Sign Register */
typedef struct
{
    unsigned int SIGN: 6;                   /** \brief [5:0] Bit number (1…63) of sign bit (rw) */
    unsigned int reserved_6: 8;
    unsigned int EITHER: 1;                 /** \brief [14:14] RANGE matching either side of BOUND (rw) */
    unsigned int BELOW: 1;                  /** \brief [15:15] RANGE matching lower side of BOUND (rw) */
    unsigned int RELOAD: 4;                 /** \brief [19:16] Reload Event Selector (rw) */
    unsigned int reserved_20: 12;
} Ifx_MCDS_TCXWD_SGN_Bits;

/** Current Process ID */
typedef struct
{
    unsigned int CURRENT: 2;                /** \brief [1:0] Current Process ID (rh) */
    unsigned int reserved_2: 30;
} Ifx_MCDS_TCY_CID_Bits;

/** Current Instruction Pointer */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int CURRENT: 31;               /** \brief [31:1] Current Instruction Pointer (rh) */
} Ifx_MCDS_TCY_CIP_Bits;

/** Debug Status Register */
typedef struct
{
    unsigned int SUS: 1;                    /** \brief [0:0] Suspended Flag (rh) */
    unsigned int IDLE: 1;                   /** \brief [1:1] Run Flag (rh) */
    unsigned int HALT: 1;                   /** \brief [2:2] Halted Flag (rh) */
    unsigned int ISR: 1;                    /** \brief [3:3] Interrupt Service Flag (rh) */
    unsigned int HBRK: 1;                   /** \brief [4:4] Hardware Break Flag (rh) */
    unsigned int SBRK: 1;                   /** \brief [5:5] Software Break Flag (rh) */
    unsigned int reserved_6: 1;
    unsigned int IEN: 1;                    /** \brief [7:7] Interrupt Enable Flag (rh) */
    unsigned int DBGEN: 1;                  /** \brief [8:8] Debug Enabled Flag (rh) */
    unsigned int CLKDIV: 2;                 /** \brief [10:9] Current Clock Divider (rh) */
    unsigned int reserved_11: 21;
} Ifx_MCDS_TCY_DCSTS_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int BOUND: 32;                 /** \brief [31:0] Address Comparator range lower bound (rw) */
} Ifx_MCDS_TCYEA_BND_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int RANGE: 32;                 /** \brief [31:0] Address Comparator range size (rw) */
} Ifx_MCDS_TCYEA_RNG_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int BOUND: 2;                  /** \brief [1:0] Process ID Comparator range lower bound (rw) */
    unsigned int reserved_2: 30;
} Ifx_MCDS_TCYID_BND_Bits;

/** Comparator Mask Register */
typedef struct
{
    unsigned int MASK: 2;                   /** \brief [1:0] Process ID Comparator bit mask (rw) */
    unsigned int reserved_2: 30;
} Ifx_MCDS_TCYID_MSK_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int RANGE: 2;                  /** \brief [1:0] Process ID Comparator range size (rw) */
    unsigned int reserved_2: 30;
} Ifx_MCDS_TCYID_RNG_Bits;

/** Comparator Sign Register */
typedef struct
{
    unsigned int SIGN: 1;                   /** \brief [0:0] Bit number (1) of sign bit (rw) */
    unsigned int reserved_1: 31;
} Ifx_MCDS_TCYID_SGN_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int BOUND: 31;                 /** \brief [31:1] IP Comparator range lower bound (rw) */
} Ifx_MCDS_TCYIP_BND_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int RANGE: 31;                 /** \brief [31:1] IP Comparator range size (rw) */
} Ifx_MCDS_TCYIP_RNG_Bits;

/** Lookup Table Base Register */
typedef struct
{
    unsigned int BOUND: 32;                 /** \brief [31:0] Comparator range lower bound (rw) */
} Ifx_MCDS_TCYPAL_BND_Bits;

/** Lookup Table Mapping Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int OFFSET: 10;                /** \brief [11:2] Lookup table location in RAM (rw) */
    unsigned int reserved_12: 16;
    unsigned int GRAIN: 3;                  /** \brief [30:28] Lookup table granularity (rw) */
    unsigned int EN: 1;                     /** \brief [31:31] Lookup table active (rw) */
} Ifx_MCDS_TCYPAL_MAP_Bits;

/** Lookup Table Range Register */
typedef struct
{
    unsigned int RANGE: 32;                 /** \brief [31:0] Lookup table range size (rw) */
} Ifx_MCDS_TCYPAL_RNG_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int BOUND: 32;                 /** \brief [31:0] Data Comparator range lower bound (rw) */
} Ifx_MCDS_TCYWD_BND_Bits;

/** Comparator Bound Register */
typedef struct
{
    unsigned int BOUND: 32;                 /** \brief [31:0] Data Comparator range lower bound high word (rw) */
} Ifx_MCDS_TCYWD_HBND_Bits;

/** Comparator Mask Register */
typedef struct
{
    unsigned int MASK: 32;                  /** \brief [31:0] Data Comparator bit mask high word (rw) */
} Ifx_MCDS_TCYWD_HMSK_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int RANGE: 32;                 /** \brief [31:0] Data Comparator range size high word (rw) */
} Ifx_MCDS_TCYWD_HRNG_Bits;

/** Comparator Mask Register */
typedef struct
{
    unsigned int MASK: 32;                  /** \brief [31:0] Data Comparator bit mask (rw) */
} Ifx_MCDS_TCYWD_MSK_Bits;

/** Comparator Range Register */
typedef struct
{
    unsigned int RANGE: 32;                 /** \brief [31:0] Data Comparator range size (rw) */
} Ifx_MCDS_TCYWD_RNG_Bits;

/** Comparator Sign Register */
typedef struct
{
    unsigned int SIGN: 6;                   /** \brief [5:0] Bit number (1…63) of sign bit (rw) */
    unsigned int reserved_6: 8;
    unsigned int EITHER: 1;                 /** \brief [14:14] RANGE matching either side of BOUND (rw) */
    unsigned int BELOW: 1;                  /** \brief [15:15] RANGE matching lower side of BOUND (rw) */
    unsigned int RELOAD: 4;                 /** \brief [19:16] Reload Event Selector (rw) */
    unsigned int reserved_20: 12;
} Ifx_MCDS_TCYWD_SGN_Bits;

/** Clock Counter Register */
typedef struct
{
    unsigned int COUNT: 32;                 /** \brief [31:0] Current Count Value (rh) */
} Ifx_MCDS_TSUEMUCNT_Bits;

/** Clock Prescaler Register */
typedef struct
{
    unsigned int RELOAD: 32;                /** \brief [31:0] Prescaler Reload Value (rw) */
} Ifx_MCDS_TSUPRSCL_Bits;

/** Clock Counter Register */
typedef struct
{
    unsigned int COUNT: 32;                 /** \brief [31:0] Current Count Value (rh) */
} Ifx_MCDS_TSUREFCNT_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Action Definition Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_ACT_Bits B;
} Ifx_MCDS_ACT;

/** Counter Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_CNT_CCL_Bits B;
} Ifx_MCDS_CNT_CCL;

/** Current Count Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_CNT_CNT_Bits B;
} Ifx_MCDS_CNT_CNT;

/** Counter Limit Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_CNT_LMT_Bits B;
} Ifx_MCDS_CNT_LMT;

/** MCDS Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_CT_Bits B;
} Ifx_MCDS_CT;

/** Event Definition Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_EVT_Bits B;
} Ifx_MCDS_EVT;

/** Trace Buffer Bottom Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_FIFOBOT_Bits B;
} Ifx_MCDS_FIFOBOT;

/** Trace Buffer Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_FIFOCTL_Bits B;
} Ifx_MCDS_FIFOCTL;

/** Trace Buffer Write Pointer */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_FIFONOW_Bits B;
} Ifx_MCDS_FIFONOW;

/** Trace Buffer PRE/POST Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_FIFOPRE_Bits B;
} Ifx_MCDS_FIFOPRE;

/** Trace Buffer Top Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_FIFOTOP_Bits B;
} Ifx_MCDS_FIFOTOP;

/** Trace Buffer Comparator Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_FIFOWARN0_Bits B;
} Ifx_MCDS_FIFOWARN0;

/** Trace Buffer Comparator Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_FIFOWARN1_Bits B;
} Ifx_MCDS_FIFOWARN1;

/** Lookup Table Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_LOKUP_TA_Bits B;
} Ifx_MCDS_LOKUP_TA;

/** Lookup Table Data Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_LOKUP_TD_Bits B;
} Ifx_MCDS_LOKUP_TD;

/** MCDS Signal Source Control */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_MUX_Bits B;
} Ifx_MCDS_MUX;

/** OCDS Control and Status */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_OCS_Bits B;
} Ifx_MCDS_OCS;

/** Session ID High Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SESSIDH_Bits B;
} Ifx_MCDS_SESSIDH;

/** Session ID Low Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SESSIDL_Bits B;
} Ifx_MCDS_SESSIDL;

/** Debug Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SPB_DCSTS_Bits B;
} Ifx_MCDS_SPB_DCSTS;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SPBAC_BND_Bits B;
} Ifx_MCDS_SPBAC_BND;

/** Comparator Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SPBAC_MSK_Bits B;
} Ifx_MCDS_SPBAC_MSK;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SPBAC_RNG_Bits B;
} Ifx_MCDS_SPBAC_RNG;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SPBEA_BND_Bits B;
} Ifx_MCDS_SPBEA_BND;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SPBEA_RNG_Bits B;
} Ifx_MCDS_SPBEA_RNG;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SPBWD_BND_Bits B;
} Ifx_MCDS_SPBWD_BND;

/** Comparator Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SPBWD_MSK_Bits B;
} Ifx_MCDS_SPBWD_MSK;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SPBWD_RNG_Bits B;
} Ifx_MCDS_SPBWD_RNG;

/** Comparator Sign Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SPBWD_SGN_Bits B;
} Ifx_MCDS_SPBWD_SGN;

/** Debug Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SRI_SRIDCSTS_Bits B;
} Ifx_MCDS_SRI_SRIDCSTS;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SRIAC_BND_Bits B;
} Ifx_MCDS_SRIAC_BND;

/** Comparator Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SRIAC_MSK_Bits B;
} Ifx_MCDS_SRIAC_MSK;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SRIAC_RNG_Bits B;
} Ifx_MCDS_SRIAC_RNG;

/** Lookup Table Base Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SRIBAL_BND_Bits B;
} Ifx_MCDS_SRIBAL_BND;

/** Lookup Table Mapping Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SRIBAL_MAP_Bits B;
} Ifx_MCDS_SRIBAL_MAP;

/** Lookup Table Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SRIBAL_RNG_Bits B;
} Ifx_MCDS_SRIBAL_RNG;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SRIEA_BND_Bits B;
} Ifx_MCDS_SRIEA_BND;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SRIEA_RNG_Bits B;
} Ifx_MCDS_SRIEA_RNG;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SRIWD_BND_Bits B;
} Ifx_MCDS_SRIWD_BND;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SRIWD_HBND_Bits B;
} Ifx_MCDS_SRIWD_HBND;

/** Comparator Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SRIWD_HMSK_Bits B;
} Ifx_MCDS_SRIWD_HMSK;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SRIWD_HRNG_Bits B;
} Ifx_MCDS_SRIWD_HRNG;

/** Comparator Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SRIWD_MSK_Bits B;
} Ifx_MCDS_SRIWD_MSK;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SRIWD_RNG_Bits B;
} Ifx_MCDS_SRIWD_RNG;

/** Comparator Sign Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_SRIWD_SGN_Bits B;
} Ifx_MCDS_SRIWD_SGN;

/** Current Process ID */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCX_CID_Bits B;
} Ifx_MCDS_TCX_CID;

/** Current Instruction Pointer */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCX_CIP_Bits B;
} Ifx_MCDS_TCX_CIP;

/** Debug Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCX_DCSTS_Bits B;
} Ifx_MCDS_TCX_DCSTS;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXEA_BND_Bits B;
} Ifx_MCDS_TCXEA_BND;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXEA_RNG_Bits B;
} Ifx_MCDS_TCXEA_RNG;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXID_BND_Bits B;
} Ifx_MCDS_TCXID_BND;

/** Comparator Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXID_MSK_Bits B;
} Ifx_MCDS_TCXID_MSK;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXID_RNG_Bits B;
} Ifx_MCDS_TCXID_RNG;

/** Comparator Sign Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXID_SGN_Bits B;
} Ifx_MCDS_TCXID_SGN;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXIP_BND_Bits B;
} Ifx_MCDS_TCXIP_BND;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXIP_RNG_Bits B;
} Ifx_MCDS_TCXIP_RNG;

/** Lookup Table Base Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXPAL_BND_Bits B;
} Ifx_MCDS_TCXPAL_BND;

/** Lookup Table Mapping Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXPAL_MAP_Bits B;
} Ifx_MCDS_TCXPAL_MAP;

/** Lookup Table Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXPAL_RNG_Bits B;
} Ifx_MCDS_TCXPAL_RNG;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXWD_BND_Bits B;
} Ifx_MCDS_TCXWD_BND;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXWD_HBND_Bits B;
} Ifx_MCDS_TCXWD_HBND;

/** Comparator Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXWD_HMSK_Bits B;
} Ifx_MCDS_TCXWD_HMSK;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXWD_HRNG_Bits B;
} Ifx_MCDS_TCXWD_HRNG;

/** Comparator Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXWD_MSK_Bits B;
} Ifx_MCDS_TCXWD_MSK;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXWD_RNG_Bits B;
} Ifx_MCDS_TCXWD_RNG;

/** Comparator Sign Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCXWD_SGN_Bits B;
} Ifx_MCDS_TCXWD_SGN;

/** Current Process ID */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCY_CID_Bits B;
} Ifx_MCDS_TCY_CID;

/** Current Instruction Pointer */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCY_CIP_Bits B;
} Ifx_MCDS_TCY_CIP;

/** Debug Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCY_DCSTS_Bits B;
} Ifx_MCDS_TCY_DCSTS;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYEA_BND_Bits B;
} Ifx_MCDS_TCYEA_BND;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYEA_RNG_Bits B;
} Ifx_MCDS_TCYEA_RNG;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYID_BND_Bits B;
} Ifx_MCDS_TCYID_BND;

/** Comparator Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYID_MSK_Bits B;
} Ifx_MCDS_TCYID_MSK;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYID_RNG_Bits B;
} Ifx_MCDS_TCYID_RNG;

/** Comparator Sign Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYID_SGN_Bits B;
} Ifx_MCDS_TCYID_SGN;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYIP_BND_Bits B;
} Ifx_MCDS_TCYIP_BND;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYIP_RNG_Bits B;
} Ifx_MCDS_TCYIP_RNG;

/** Lookup Table Base Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYPAL_BND_Bits B;
} Ifx_MCDS_TCYPAL_BND;

/** Lookup Table Mapping Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYPAL_MAP_Bits B;
} Ifx_MCDS_TCYPAL_MAP;

/** Lookup Table Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYPAL_RNG_Bits B;
} Ifx_MCDS_TCYPAL_RNG;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYWD_BND_Bits B;
} Ifx_MCDS_TCYWD_BND;

/** Comparator Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYWD_HBND_Bits B;
} Ifx_MCDS_TCYWD_HBND;

/** Comparator Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYWD_HMSK_Bits B;
} Ifx_MCDS_TCYWD_HMSK;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYWD_HRNG_Bits B;
} Ifx_MCDS_TCYWD_HRNG;

/** Comparator Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYWD_MSK_Bits B;
} Ifx_MCDS_TCYWD_MSK;

/** Comparator Range Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYWD_RNG_Bits B;
} Ifx_MCDS_TCYWD_RNG;

/** Comparator Sign Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TCYWD_SGN_Bits B;
} Ifx_MCDS_TCYWD_SGN;

/** Clock Counter Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TSUEMUCNT_Bits B;
} Ifx_MCDS_TSUEMUCNT;

/** Clock Prescaler Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TSUPRSCL_Bits B;
} Ifx_MCDS_TSUPRSCL;

/** Clock Counter Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MCDS_TSUREFCNT_Bits B;
} Ifx_MCDS_TSUREFCNT;

/******************************************************************************/
/*                           Struct (2 - Object L2)                           */
/******************************************************************************/

/** Counter objects */
typedef volatile struct
{
    Ifx_MCDS_CNT_CCL CCL;                   /** \brief 0, Counter Control Register */
    Ifx_MCDS_CNT_LMT LMT;                   /** \brief 4, Counter Limit Register */
    Ifx_MCDS_CNT_CNT CNT;                   /** \brief 8, Current Count Register */
    unsigned char reserved_C[4];            /** \brief C */
} Ifx_MCDS_CNT;

/** Look up table objects */
typedef volatile struct
{
    Ifx_MCDS_LOKUP_TD TD;                   /** \brief 0, Lookup Table Data Register */
    Ifx_MCDS_LOKUP_TA TA;                   /** \brief 4, Lookup Table Address Register */
} Ifx_MCDS_LOKUP;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_SPBAC_BND BND;                 /** \brief 0, Comparator Bound Register */
    Ifx_MCDS_SPBAC_RNG RNG;                 /** \brief 4, Comparator Range Register */
    Ifx_MCDS_SPBAC_MSK MSK;                 /** \brief 8, Comparator Mask Register */
    unsigned char reserved_C[4];            /** \brief C */
} Ifx_MCDS_SPBAC;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_SPBEA_BND BND;                 /** \brief 0, Comparator Bound Register */
    Ifx_MCDS_SPBEA_RNG RNG;                 /** \brief 4, Comparator Range Register */
    unsigned char reserved_8[8];            /** \brief 8 */
} Ifx_MCDS_SPBEA;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_SPBWD_BND BND;                 /** \brief 0, Comparator Bound Register */
    Ifx_MCDS_SPBWD_RNG RNG;                 /** \brief 4, Comparator Range Register */
    Ifx_MCDS_SPBWD_MSK MSK;                 /** \brief 8, Comparator Mask Register */
    Ifx_MCDS_SPBWD_SGN SGN;                 /** \brief C, Comparator Sign Register */
} Ifx_MCDS_SPBWD;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_SRIAC_BND BND;                 /** \brief 0, Comparator Bound Register */
    Ifx_MCDS_SRIAC_RNG RNG;                 /** \brief 4, Comparator Range Register */
    Ifx_MCDS_SRIAC_MSK MSK;                 /** \brief 8, Comparator Mask Register */
    unsigned char reserved_C[4];            /** \brief C */
} Ifx_MCDS_SRIAC;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_SRIBAL_BND BND;                /** \brief 0, Lookup Table Base Register */
    Ifx_MCDS_SRIBAL_RNG RNG;                /** \brief 4, Lookup Table Range Register */
    Ifx_MCDS_SRIBAL_MAP MAP;                /** \brief 8, Lookup Table Mapping Register */
    unsigned char reserved_C[4];            /** \brief C */
} Ifx_MCDS_SRIBAL;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_SRIEA_BND BND;                 /** \brief 0, Comparator Bound Register */
    Ifx_MCDS_SRIEA_RNG RNG;                 /** \brief 4, Comparator Range Register */
    unsigned char reserved_8[8];            /** \brief 8 */
} Ifx_MCDS_SRIEA;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_SRIWD_BND BND;                 /** \brief 0, Comparator Bound Register */
    Ifx_MCDS_SRIWD_HBND HBND;               /** \brief 4, Comparator Bound Register */
    Ifx_MCDS_SRIWD_RNG RNG;                 /** \brief 8, Comparator Range Register */
    Ifx_MCDS_SRIWD_HRNG HRNG;               /** \brief C, Comparator Range Register */
    Ifx_MCDS_SRIWD_MSK MSK;                 /** \brief 10, Comparator Mask Register */
    Ifx_MCDS_SRIWD_HMSK HMSK;               /** \brief 14, Comparator Mask Register */
    unsigned char reserved_18[4];           /** \brief 18 */
    Ifx_MCDS_SRIWD_SGN SGN;                 /** \brief 1C, Comparator Sign Register */
} Ifx_MCDS_SRIWD;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_TCXEA_BND BND;                 /** \brief 0, Comparator Bound Register */
    Ifx_MCDS_TCXEA_RNG RNG;                 /** \brief 4, Comparator Range Register */
    unsigned char reserved_8[8];            /** \brief 8 */
} Ifx_MCDS_TCXEA;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_TCXID_BND BND;                 /** \brief 0, Comparator Bound Register */
    Ifx_MCDS_TCXID_RNG RNG;                 /** \brief 4, Comparator Range Register */
    Ifx_MCDS_TCXID_MSK MSK;                 /** \brief 8, Comparator Mask Register */
    Ifx_MCDS_TCXID_SGN SGN;                 /** \brief C, Comparator Sign Register */
} Ifx_MCDS_TCXID;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_TCXIP_BND BND;                 /** \brief 0, Comparator Bound Register */
    Ifx_MCDS_TCXIP_RNG RNG;                 /** \brief 4, Comparator Range Register */
    unsigned char reserved_8[8];            /** \brief 8 */
} Ifx_MCDS_TCXIP;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_TCXPAL_BND BND;                /** \brief 0, Lookup Table Base Register */
    Ifx_MCDS_TCXPAL_RNG RNG;                /** \brief 4, Lookup Table Range Register */
    Ifx_MCDS_TCXPAL_MAP MAP;                /** \brief 8, Lookup Table Mapping Register */
    unsigned char reserved_C[4];            /** \brief C */
} Ifx_MCDS_TCXPAL;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_TCXWD_BND BND;                 /** \brief 0, Comparator Bound Register */
    Ifx_MCDS_TCXWD_HBND HBND;               /** \brief 4, Comparator Bound Register */
    Ifx_MCDS_TCXWD_RNG RNG;                 /** \brief 8, Comparator Range Register */
    Ifx_MCDS_TCXWD_HRNG HRNG;               /** \brief C, Comparator Range Register */
    Ifx_MCDS_TCXWD_MSK MSK;                 /** \brief 10, Comparator Mask Register */
    Ifx_MCDS_TCXWD_HMSK HMSK;               /** \brief 14, Comparator Mask Register */
    unsigned char reserved_18[4];           /** \brief 18 */
    Ifx_MCDS_TCXWD_SGN SGN;                 /** \brief 1C, Comparator Sign Register */
} Ifx_MCDS_TCXWD;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_TCYEA_BND BND;                 /** \brief 0, Comparator Bound Register */
    Ifx_MCDS_TCYEA_RNG RNG;                 /** \brief 4, Comparator Range Register */
    unsigned char reserved_8[8];            /** \brief 8 */
} Ifx_MCDS_TCYEA;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_TCYID_BND BND;                 /** \brief 0, Comparator Bound Register */
    Ifx_MCDS_TCYID_RNG RNG;                 /** \brief 4, Comparator Range Register */
    Ifx_MCDS_TCYID_MSK MSK;                 /** \brief 8, Comparator Mask Register */
    Ifx_MCDS_TCYID_SGN SGN;                 /** \brief C, Comparator Sign Register */
} Ifx_MCDS_TCYID;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_TCYIP_BND BND;                 /** \brief 0, Comparator Bound Register */
    Ifx_MCDS_TCYIP_RNG RNG;                 /** \brief 4, Comparator Range Register */
    unsigned char reserved_8[8];            /** \brief 8 */
} Ifx_MCDS_TCYIP;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_TCYPAL_BND BND;                /** \brief 0, Lookup Table Base Register */
    Ifx_MCDS_TCYPAL_RNG RNG;                /** \brief 4, Lookup Table Range Register */
    Ifx_MCDS_TCYPAL_MAP MAP;                /** \brief 8, Lookup Table Mapping Register */
    unsigned char reserved_C[4];            /** \brief C */
} Ifx_MCDS_TCYPAL;

/** Comparator objects */
typedef volatile struct
{
    Ifx_MCDS_TCYWD_BND BND;                 /** \brief 0, Comparator Bound Register */
    Ifx_MCDS_TCYWD_HBND HBND;               /** \brief 4, Comparator Bound Register */
    Ifx_MCDS_TCYWD_RNG RNG;                 /** \brief 8, Comparator Range Register */
    Ifx_MCDS_TCYWD_HRNG HRNG;               /** \brief C, Comparator Range Register */
    Ifx_MCDS_TCYWD_MSK MSK;                 /** \brief 10, Comparator Mask Register */
    Ifx_MCDS_TCYWD_HMSK HMSK;               /** \brief 14, Comparator Mask Register */
    unsigned char reserved_18[4];           /** \brief 18 */
    Ifx_MCDS_TCYWD_SGN SGN;                 /** \brief 1C, Comparator Sign Register */
} Ifx_MCDS_TCYWD;

/******************************************************************************/
/*                           Struct (3 - Object L1)                           */
/******************************************************************************/

/** MCX object */
typedef volatile struct
{
    Ifx_MCDS_EVT EVT[24];                   /** \brief 0, Event Definition Register */
    unsigned char reserved_60[32];          /** \brief 60 */
    Ifx_MCDS_ACT ACT[72];                   /** \brief 80, Action Definition Register */
    unsigned char reserved_1A0[96];         /** \brief 1A0 */
    Ifx_MCDS_CNT CNT[32];                   /** \brief 200, Counter objects */
} Ifx_MCDS_MCX;

/** SPB object */
typedef volatile struct
{
    Ifx_MCDS_SPB_DCSTS DCSTS;               /** \brief 0, Debug Status Register */
    unsigned char reserved_4[1020];         /** \brief 4 */
    Ifx_MCDS_SPBEA EA[4];                   /** \brief 400, Comparator objects */
    unsigned char reserved_440[64];         /** \brief 440 */
    Ifx_MCDS_SPBWD WD[4];                   /** \brief 480, Comparator objects */
    unsigned char reserved_4C0[64];         /** \brief 4C0 */
    Ifx_MCDS_SPBAC AC[4];                   /** \brief 500, Comparator objects */
    unsigned char reserved_540[704];        /** \brief 540 */
    Ifx_MCDS_EVT EVT[16];                   /** \brief 800, Event Definition Register */
    unsigned char reserved_840[64];         /** \brief 840 */
    Ifx_MCDS_ACT ACT[15];                   /** \brief 880, Action Definition Register */
} Ifx_MCDS_SPB;

/** SRI object */
typedef volatile struct
{
    Ifx_MCDS_SRI_SRIDCSTS SRIDCSTS;         /** \brief 0, Debug Status Register */
    unsigned char reserved_4[508];          /** \brief 4 */
    Ifx_MCDS_LOKUP SRI1BALLU;               /** \brief 200, Look up table objects */
    unsigned char reserved_208[8];          /** \brief 208 */
    Ifx_MCDS_SRIBAL SRI1BAL[4];             /** \brief 210, Comparator objects */
    unsigned char reserved_250[176];        /** \brief 250 */
    Ifx_MCDS_LOKUP SRI2BALLU;               /** \brief 300, Look up table objects */
    unsigned char reserved_308[8];          /** \brief 308 */
    Ifx_MCDS_SRIBAL SRI2BAL[4];             /** \brief 310, Comparator objects */
    unsigned char reserved_350[176];        /** \brief 350 */
    Ifx_MCDS_SRIEA SRI1EA[4];               /** \brief 400, Comparator objects */
    unsigned char reserved_440[64];         /** \brief 440 */
    Ifx_MCDS_SRIWD SRI1WD[4];               /** \brief 480, Comparator objects */
    Ifx_MCDS_SRIAC SRI1AC[4];               /** \brief 500, Comparator objects */
    unsigned char reserved_540[192];        /** \brief 540 */
    Ifx_MCDS_SRIEA SRI2EA[4];               /** \brief 600, Comparator objects */
    unsigned char reserved_640[64];         /** \brief 640 */
    Ifx_MCDS_SRIWD SRI2WD[4];               /** \brief 680, Comparator objects */
    Ifx_MCDS_SRIAC SRI2AC[4];               /** \brief 700, Comparator objects */
    unsigned char reserved_740[192];        /** \brief 740 */
    Ifx_MCDS_EVT SRIEVT[16];                /** \brief 800, Event Definition Register */
    unsigned char reserved_840[64];         /** \brief 840 */
    Ifx_MCDS_ACT SRIACT[27];                /** \brief 880, Action Definition Register */
} Ifx_MCDS_SRI;

/** TCX object */
typedef volatile struct
{
    Ifx_MCDS_TCX_DCSTS DCSTS;               /** \brief 0, Debug Status Register */
    Ifx_MCDS_TCX_CID CID;                   /** \brief 4, Current Process ID */
    Ifx_MCDS_TCX_CIP CIP;                   /** \brief 8, Current Instruction Pointer */
    unsigned char reserved_C[500];          /** \brief C */
    Ifx_MCDS_LOKUP PALLU;                   /** \brief 200, Look up table objects */
    unsigned char reserved_208[8];          /** \brief 208 */
    Ifx_MCDS_TCXPAL PAL[4];                 /** \brief 210, Comparator objects */
    unsigned char reserved_250[432];        /** \brief 250 */
    Ifx_MCDS_TCXEA EA[8];                   /** \brief 400, Comparator objects */
    Ifx_MCDS_TCXWD WD[4];                   /** \brief 480, Comparator objects */
    unsigned char reserved_500[768];        /** \brief 500 */
    Ifx_MCDS_EVT EVT[16];                   /** \brief 800, Event Definition Register */
    unsigned char reserved_840[64];         /** \brief 840 */
    Ifx_MCDS_ACT ACT[23];                   /** \brief 880, Action Definition Register */
    unsigned char reserved_8DC[804];        /** \brief 8DC */
    Ifx_MCDS_TCXID ID[2];                   /** \brief C00, Comparator objects */
    unsigned char reserved_C20[992];        /** \brief C20 */
    Ifx_MCDS_TCXIP IP[6];                   /** \brief 1000, Comparator objects */
} Ifx_MCDS_TCX;

/** TCY object */
typedef volatile struct
{
    Ifx_MCDS_TCY_DCSTS DCSTS;               /** \brief 0, Debug Status Register */
    Ifx_MCDS_TCY_CID CID;                   /** \brief 4, Current Process ID */
    Ifx_MCDS_TCY_CIP CIP;                   /** \brief 8, Current Instruction Pointer */
    unsigned char reserved_C[500];          /** \brief C */
    Ifx_MCDS_LOKUP PALLU;                   /** \brief 200, Look up table objects */
    unsigned char reserved_208[8];          /** \brief 208 */
    Ifx_MCDS_TCYPAL PAL[4];                 /** \brief 210, Comparator objects */
    unsigned char reserved_250[432];        /** \brief 250 */
    Ifx_MCDS_TCYEA EA[8];                   /** \brief 400, Comparator objects */
    Ifx_MCDS_TCYWD WD[4];                   /** \brief 480, Comparator objects */
    unsigned char reserved_500[768];        /** \brief 500 */
    Ifx_MCDS_EVT EVT[16];                   /** \brief 800, Event Definition Register */
    unsigned char reserved_840[64];         /** \brief 840 */
    Ifx_MCDS_ACT ACT[23];                   /** \brief 880, Action Definition Register */
    unsigned char reserved_8DC[804];        /** \brief 8DC */
    Ifx_MCDS_TCYID ID[2];                   /** \brief C00, Comparator objects */
    unsigned char reserved_C20[992];        /** \brief C20 */
    Ifx_MCDS_TCYIP IP[6];                   /** \brief 1000, Comparator objects */
} Ifx_MCDS_TCY;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** MCDS object */
typedef volatile struct
{
    Ifx_CLC5 CLC;                           /** \brief 0, Clock Control Register */
    Ifx_MCDS_OCS OCS;                       /** \brief 4, OCDS Control and Status */
    Ifx_ID1 ID;                             /** \brief 8, Module Identification Register */
    unsigned char reserved_C[4];            /** \brief C */
    Ifx_MCDS_CT CT;                         /** \brief 10, MCDS Control Register */
    Ifx_MCDS_MUX MUX;                       /** \brief 14, MCDS Signal Source Control */
    Ifx_MCDS_SESSIDL SESSIDL;               /** \brief 18, Session ID Low Register */
    Ifx_MCDS_SESSIDH SESSIDH;               /** \brief 1C, Session ID High Register */
    unsigned char reserved_20[480];         /** \brief 20 */
    Ifx_MCDS_FIFONOW FIFONOW;               /** \brief 200, Trace Buffer Write Pointer */
    Ifx_MCDS_FIFOBOT FIFOBOT;               /** \brief 204, Trace Buffer Bottom Register */
    Ifx_MCDS_FIFOPRE FIFOPRE;               /** \brief 208, Trace Buffer PRE/POST Register */
    Ifx_MCDS_FIFOTOP FIFOTOP;               /** \brief 20C, Trace Buffer Top Register */
    Ifx_MCDS_FIFOCTL FIFOCTL;               /** \brief 210, Trace Buffer Control Register */
    Ifx_MCDS_FIFOWARN0 FIFOWARN0;           /** \brief 214, Trace Buffer Comparator Register */
    Ifx_MCDS_FIFOWARN1 FIFOWARN1;           /** \brief 218, Trace Buffer Comparator Register */
    unsigned char reserved_21C[484];        /** \brief 21C */
    Ifx_MCDS_TSUREFCNT TSUREFCNT;           /** \brief 400, Clock Counter Register */
    Ifx_MCDS_TSUPRSCL TSUPRSCL;             /** \brief 404, Clock Prescaler Register */
    Ifx_MCDS_TSUEMUCNT TSUEMUCNT;           /** \brief 408, Clock Counter Register */
    unsigned char reserved_40C[1012];       /** \brief 40C */
    Ifx_MCDS_MCX MCX;                       /** \brief 800, MCX object */
    unsigned char reserved_C00[5120];       /** \brief C00 */
    Ifx_MCDS_TCX TCX;                       /** \brief 2000, TCX object */
    unsigned char reserved_3060[4000];      /** \brief 3060 */
    Ifx_MCDS_TCY TCY;                       /** \brief 4000, TCY object */
    unsigned char reserved_5060[4000];      /** \brief 5060 */
    Ifx_MCDS_SPB SPB;                       /** \brief 6000, SPB object */
    unsigned char reserved_68BC[1860];      /** \brief 68BC */
    Ifx_MCDS_SRI SRI;                       /** \brief 7000, SRI object */
    unsigned char reserved_78EC[1812];      /** \brief 78EC */
} Ifx_MCDS;
/******************************************************************************/
#endif /* IFXMCDS_REGDEF_H */

