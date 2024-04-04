/**
 * \file IfxEbcu_regdef.h
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
 * \defgroup IfxLld_Ebcu Ebcu
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Ebcu_Bitfields Bitfields
 * \ingroup IfxLld_Ebcu
 * 
 * \defgroup IfxLld_Ebcu_union Union
 * \ingroup IfxLld_Ebcu
 * 
 * \defgroup IfxLld_Ebcu_struct Struct
 * \ingroup IfxLld_Ebcu
 * 
 */
#ifndef IFXEBCU_REGDEF_H
#define IFXEBCU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Ebcu_Bitfields
 * \{  */

/** \\brief  Access Enable Register 0 */
typedef struct _Ifx_EBCU_ACCEN0_Bits
{
    Ifx_Strict_32Bit EN0:1;                 /**< \brief [0:0] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN1:1;                 /**< \brief [1:1] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN2:1;                 /**< \brief [2:2] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN3:1;                 /**< \brief [3:3] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN4:1;                 /**< \brief [4:4] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN5:1;                 /**< \brief [5:5] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN6:1;                 /**< \brief [6:6] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN7:1;                 /**< \brief [7:7] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN8:1;                 /**< \brief [8:8] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN9:1;                 /**< \brief [9:9] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN10:1;                /**< \brief [10:10] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN11:1;                /**< \brief [11:11] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN12:1;                /**< \brief [12:12] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN13:1;                /**< \brief [13:13] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN14:1;                /**< \brief [14:14] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN15:1;                /**< \brief [15:15] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN16:1;                /**< \brief [16:16] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN17:1;                /**< \brief [17:17] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN18:1;                /**< \brief [18:18] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN19:1;                /**< \brief [19:19] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN20:1;                /**< \brief [20:20] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN21:1;                /**< \brief [21:21] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN22:1;                /**< \brief [22:22] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN23:1;                /**< \brief [23:23] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN24:1;                /**< \brief [24:24] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN25:1;                /**< \brief [25:25] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN26:1;                /**< \brief [26:26] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN27:1;                /**< \brief [27:27] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN28:1;                /**< \brief [28:28] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN29:1;                /**< \brief [29:29] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN30:1;                /**< \brief [30:30] Access Enable for Master TAG ID x (rw) */
    Ifx_Strict_32Bit EN31:1;                /**< \brief [31:31] Access Enable for Master TAG ID x (rw) */
} Ifx_EBCU_ACCEN0_Bits;

/** \\brief  Access Enable Register 1 */
typedef struct _Ifx_EBCU_ACCEN1_Bits
{
    Ifx_Strict_32Bit EN32:1;                /**< \brief [0:0] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN33:1;                /**< \brief [1:1] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN34:1;                /**< \brief [2:2] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN35:1;                /**< \brief [3:3] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN36:1;                /**< \brief [4:4] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN37:1;                /**< \brief [5:5] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN38:1;                /**< \brief [6:6] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN39:1;                /**< \brief [7:7] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN40:1;                /**< \brief [8:8] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN41:1;                /**< \brief [9:9] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN42:1;                /**< \brief [10:10] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN43:1;                /**< \brief [11:11] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN44:1;                /**< \brief [12:12] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN45:1;                /**< \brief [13:13] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN46:1;                /**< \brief [14:14] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN47:1;                /**< \brief [15:15] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN48:1;                /**< \brief [16:16] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN49:1;                /**< \brief [17:17] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN50:1;                /**< \brief [18:18] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN51:1;                /**< \brief [19:19] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN52:1;                /**< \brief [20:20] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN53:1;                /**< \brief [21:21] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN54:1;                /**< \brief [22:22] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN55:1;                /**< \brief [23:23] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN56:1;                /**< \brief [24:24] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN57:1;                /**< \brief [25:25] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN58:1;                /**< \brief [26:26] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN59:1;                /**< \brief [27:27] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN60:1;                /**< \brief [28:28] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN61:1;                /**< \brief [29:29] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN62:1;                /**< \brief [30:30] Access Enable for Master TAG ID x (r) */
    Ifx_Strict_32Bit EN63:1;                /**< \brief [31:31] Access Enable for Master TAG ID x (r) */
} Ifx_EBCU_ACCEN1_Bits;

/** \\brief  EBCU Control Register */
typedef struct _Ifx_EBCU_CON_Bits
{
    Ifx_Strict_32Bit TOUT:16;               /**< \brief [15:0] Bus Time-Out Value (rw) */
    Ifx_Strict_32Bit DBG:1;                 /**< \brief [16:16] Debug Trace Enable (rw) */
    Ifx_Strict_32Bit reserved_17:7;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SPC:8;                 /**< \brief [31:24] Starvation Period Control (rw) */
} Ifx_EBCU_CON_Bits;

/** \\brief  Debug Address 1 Register */
typedef struct _Ifx_EBCU_DBADR1_Bits
{
    Ifx_Strict_32Bit ADR1:32;               /**< \brief [31:0] Debug Trigger Address 1 (rw) */
} Ifx_EBCU_DBADR1_Bits;

/** \\brief  Debug Address 2 Register */
typedef struct _Ifx_EBCU_DBADR2_Bits
{
    Ifx_Strict_32Bit ADR2:32;               /**< \brief [31:0] Debug Trigger Address 2 (rw) */
} Ifx_EBCU_DBADR2_Bits;

/** \\brief  Debug Trapped Address Register */
typedef struct _Ifx_EBCU_DBADRT_Bits
{
    Ifx_Strict_32Bit FPIADR:32;             /**< \brief [31:0] FPIBus Address Status (rh) */
} Ifx_EBCU_DBADRT_Bits;

/** \\brief  Debug Bus Operation Signals Register */
typedef struct _Ifx_EBCU_DBBOS_Bits
{
    Ifx_Strict_32Bit OPC:4;                 /**< \brief [3:0] Opcode for Signal Status Debug Trigger (rw) */
    Ifx_Strict_32Bit SVM:1;                 /**< \brief [4:4] SVM Signal for Status Debug Trigger (rw) */
    Ifx_Strict_32Bit reserved_5:3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WR:1;                  /**< \brief [8:8] Write Signal for Status Debug Trigger (rw) */
    Ifx_Strict_32Bit reserved_9:3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RD:1;                  /**< \brief [12:12] Write Signal for Status Debug Trigger (rw) */
    Ifx_Strict_32Bit reserved_13:19;        /**< \brief \internal Reserved */
} Ifx_EBCU_DBBOS_Bits;

/** \\brief  Debug Trapped Bus Operation Signals Register */
typedef struct _Ifx_EBCU_DBBOST_Bits
{
    Ifx_Strict_32Bit FPIOPC:4;              /**< \brief [3:0] FPIBus Opcode Status (rh) */
    Ifx_Strict_32Bit FPISVM:1;              /**< \brief [4:4] FPIBus Supervisor Mode Status (rh) */
    Ifx_Strict_32Bit FPIACK:2;              /**< \brief [6:5] FPIBus Acknowledge Status (rh) */
    Ifx_Strict_32Bit FPIRDY:1;              /**< \brief [7:7] FPIBus Ready Status (rh) */
    Ifx_Strict_32Bit FPIWR:1;               /**< \brief [8:8] FPIBus Write Indication Status (rh) */
    Ifx_Strict_32Bit FPIRST:2;              /**< \brief [10:9] FPIBus Reset Status (rh) */
    Ifx_Strict_32Bit FPIOPS:1;              /**< \brief [11:11] FPIBus OCDS Suspend Status (rh) */
    Ifx_Strict_32Bit FPIRD:1;               /**< \brief [12:12] FPIBus Read Indication Status (rh) */
    Ifx_Strict_32Bit FPIABORT:1;            /**< \brief [13:13] FPIBus Abort Status (rh) */
    Ifx_Strict_32Bit FPITOUT:1;             /**< \brief [14:14] FPIBus Time-out Status (rh) */
    Ifx_Strict_32Bit reserved_15:1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit FPITAG:6;              /**< \brief [21:16] FPIBus Master TAG Status (rh) */
    Ifx_Strict_32Bit reserved_22:10;        /**< \brief \internal Reserved */
} Ifx_EBCU_DBBOST_Bits;

/** \\brief  Debug Control Register */
typedef struct _Ifx_EBCU_DBCNTL_Bits
{
    Ifx_Strict_32Bit EO:1;                  /**< \brief [0:0] Status of Debug Support Enable (r) */
    Ifx_Strict_32Bit OA:1;                  /**< \brief [1:1] Status of Breakpoint Logic (r) */
    Ifx_Strict_32Bit reserved_2:2;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RA:1;                  /**< \brief [4:4] Rearm Breakpoint Logic (w) */
    Ifx_Strict_32Bit reserved_5:7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CONCOM0:1;             /**< \brief [12:12] Grant and Address Trigger Relation (rw) */
    Ifx_Strict_32Bit CONCOM1:1;             /**< \brief [13:13] Address 1 and Address 2 Trigger Relation (rw) */
    Ifx_Strict_32Bit CONCOM2:1;             /**< \brief [14:14] Address and Signal Trigger Relation (rw) */
    Ifx_Strict_32Bit reserved_15:1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ONG:1;                 /**< \brief [16:16] Grant Trigger Enable (rw) */
    Ifx_Strict_32Bit reserved_17:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ONA1:2;                /**< \brief [21:20] Address 1 Trigger Control (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ONA2:2;                /**< \brief [25:24] Address 2 Trigger Control (rw) */
    Ifx_Strict_32Bit reserved_26:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ONBOS0:1;              /**< \brief [28:28] Opcode Signal Status Trigger Condition (rw) */
    Ifx_Strict_32Bit ONBOS1:1;              /**< \brief [29:29] Supervisor Mode Signal Trigger Condition (rw) */
    Ifx_Strict_32Bit ONBOS2:1;              /**< \brief [30:30] Write Signal Trigger Condition (rw) */
    Ifx_Strict_32Bit ONBOS3:1;              /**< \brief [31:31] Read Signal Trigger Condition (rw) */
} Ifx_EBCU_DBCNTL_Bits;

/** \\brief  Debug Data Status Register */
typedef struct _Ifx_EBCU_DBDAT_Bits
{
    Ifx_Strict_32Bit FPIDATA:32;            /**< \brief [31:0] FPIBus Data Status (rh) */
} Ifx_EBCU_DBDAT_Bits;

/** \\brief  Debug Trapped Master Register */
typedef struct _Ifx_EBCU_DBGNTT_Bits
{
    Ifx_Strict_32Bit FPIGNT0:1;             /**< \brief [0:0] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT1:1;             /**< \brief [1:1] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT2:1;             /**< \brief [2:2] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT3:1;             /**< \brief [3:3] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT4:1;             /**< \brief [4:4] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT5:1;             /**< \brief [5:5] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT6:1;             /**< \brief [6:6] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT7:1;             /**< \brief [7:7] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT8:1;             /**< \brief [8:8] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT9:1;             /**< \brief [9:9] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT10:1;            /**< \brief [10:10] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT11:1;            /**< \brief [11:11] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT12:1;            /**< \brief [12:12] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT13:1;            /**< \brief [13:13] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT14:1;            /**< \brief [14:14] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT15:1;            /**< \brief [15:15] Master x Grant Status (rw) */
    Ifx_Strict_32Bit reserved_16:16;        /**< \brief \internal Reserved */
} Ifx_EBCU_DBGNTT_Bits;

/** \\brief  Debug Grant Mask Register */
typedef struct _Ifx_EBCU_DBGRNT_Bits
{
    Ifx_Strict_32Bit FPIGNT0:1;             /**< \brief [0:0] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT1:1;             /**< \brief [1:1] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT2:1;             /**< \brief [2:2] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT3:1;             /**< \brief [3:3] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT4:1;             /**< \brief [4:4] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT5:1;             /**< \brief [5:5] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT6:1;             /**< \brief [6:6] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT7:1;             /**< \brief [7:7] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT8:1;             /**< \brief [8:8] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT9:1;             /**< \brief [9:9] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT10:1;            /**< \brief [10:10] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT11:1;            /**< \brief [11:11] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT12:1;            /**< \brief [12:12] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT13:1;            /**< \brief [13:13] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT14:1;            /**< \brief [14:14] Master x Grant Status (rw) */
    Ifx_Strict_32Bit FPIGNT15:1;            /**< \brief [15:15] Master x Grant Status (rw) */
    Ifx_Strict_32Bit reserved_16:16;        /**< \brief \internal Reserved */
} Ifx_EBCU_DBGRNT_Bits;

/** \\brief  Error Address Capture Register */
typedef struct _Ifx_EBCU_EADD_Bits
{
    Ifx_Strict_32Bit FPIADR:32;             /**< \brief [31:0] Captured FPIBus Address (rwh) */
} Ifx_EBCU_EADD_Bits;

/** \\brief  Error Control Capture Register */
typedef struct _Ifx_EBCU_ECON_Bits
{
    Ifx_Strict_32Bit ERRCNT:14;             /**< \brief [13:0] FPIBus Error Counter (rwh) */
    Ifx_Strict_32Bit TOUT:1;                /**< \brief [14:14] State of FPIBus Time-Out Signal (rwh) */
    Ifx_Strict_32Bit RDY:1;                 /**< \brief [15:15] State of FPIBus Ready Signal (rwh) */
    Ifx_Strict_32Bit ABT:1;                 /**< \brief [16:16] State of FPI Bus Abort Signal (rwh) */
    Ifx_Strict_32Bit ACK:2;                 /**< \brief [18:17] State of FPIBus Acknowledge Signals (rwh) */
    Ifx_Strict_32Bit SVM:1;                 /**< \brief [19:19] State of FPIBus Supervisor Mode Signal (rwh) */
    Ifx_Strict_32Bit WRN:1;                 /**< \brief [20:20] State of FPIBus Write Signal (rwh) */
    Ifx_Strict_32Bit RDN:1;                 /**< \brief [21:21] State of FPIBus Read Signal (rwh) */
    Ifx_Strict_32Bit TAG:6;                 /**< \brief [27:22] FPIBus Master Tag Number Signals (rwh) */
    Ifx_Strict_32Bit OPC:4;                 /**< \brief [31:28] FPIBus Operation Code Signals (rwh) */
} Ifx_EBCU_ECON_Bits;

/** \\brief  Error Data Capture Register */
typedef struct _Ifx_EBCU_EDAT_Bits
{
    Ifx_Strict_32Bit FPIDAT:32;             /**< \brief [31:0] Captured FPIBus Address (rwh) */
} Ifx_EBCU_EDAT_Bits;

/** \\brief  Module Identification Register */
typedef struct _Ifx_EBCU_ID_Bits
{
    Ifx_Strict_32Bit MODREV:8;              /**< \brief [7:0] Module Revision Number (r) */
    Ifx_Strict_32Bit MODNUMBER:8;           /**< \brief [15:8] Module Number Value (r) */
    Ifx_Strict_32Bit reserved_16:16;        /**< \brief \internal Reserved */
} Ifx_EBCU_ID_Bits;

/** \\brief  Arbiter Priority Register */
typedef struct _Ifx_EBCU_PRIOH_Bits
{
    Ifx_Strict_32Bit MASTER8:4;             /**< \brief [3:0] Master x Priority (rw) */
    Ifx_Strict_32Bit MASTER9:4;             /**< \brief [7:4] Master x Priority (rw) */
    Ifx_Strict_32Bit MASTER10:4;            /**< \brief [11:8] Master x Priority (rw) */
    Ifx_Strict_32Bit MASTER11:4;            /**< \brief [15:12] Master x Priority (rw) */
    Ifx_Strict_32Bit MASTER12:4;            /**< \brief [19:16] Master x Priority (rw) */
    Ifx_Strict_32Bit MASTER13:4;            /**< \brief [23:20] Master x Priority (rw) */
    Ifx_Strict_32Bit MASTER14:4;            /**< \brief [27:24] Master x Priority (rw) */
    Ifx_Strict_32Bit MASTER15:4;            /**< \brief [31:28] Master x Priority (rw) */
} Ifx_EBCU_PRIOH_Bits;

/** \\brief  Arbiter Priority Register */
typedef struct _Ifx_EBCU_PRIOL_Bits
{
    Ifx_Strict_32Bit MASTER0:4;             /**< \brief [3:0] Master x Priority (rw) */
    Ifx_Strict_32Bit MASTER1:4;             /**< \brief [7:4] Master x Priority (rw) */
    Ifx_Strict_32Bit MASTER2:4;             /**< \brief [11:8] Master x Priority (rw) */
    Ifx_Strict_32Bit MASTER3:4;             /**< \brief [15:12] Master x Priority (rw) */
    Ifx_Strict_32Bit MASTER4:4;             /**< \brief [19:16] Master x Priority (rw) */
    Ifx_Strict_32Bit MASTER5:4;             /**< \brief [23:20] Master x Priority (rw) */
    Ifx_Strict_32Bit MASTER6:4;             /**< \brief [27:24] Master x Priority (rw) */
    Ifx_Strict_32Bit MASTER7:4;             /**< \brief [31:28] Master x Priority (rw) */
} Ifx_EBCU_PRIOL_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ebcu_union
 * \{  */

/** \\brief  Access Enable Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_ACCEN0_Bits B;
} Ifx_EBCU_ACCEN0;

/** \\brief  Access Enable Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_ACCEN1_Bits B;
} Ifx_EBCU_ACCEN1;

/** \\brief  EBCU Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_CON_Bits B;
} Ifx_EBCU_CON;

/** \\brief  Debug Address 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_DBADR1_Bits B;
} Ifx_EBCU_DBADR1;

/** \\brief  Debug Address 2 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_DBADR2_Bits B;
} Ifx_EBCU_DBADR2;

/** \\brief  Debug Trapped Address Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_DBADRT_Bits B;
} Ifx_EBCU_DBADRT;

/** \\brief  Debug Bus Operation Signals Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_DBBOS_Bits B;
} Ifx_EBCU_DBBOS;

/** \\brief  Debug Trapped Bus Operation Signals Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_DBBOST_Bits B;
} Ifx_EBCU_DBBOST;

/** \\brief  Debug Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_DBCNTL_Bits B;
} Ifx_EBCU_DBCNTL;

/** \\brief  Debug Data Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_DBDAT_Bits B;
} Ifx_EBCU_DBDAT;

/** \\brief  Debug Trapped Master Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_DBGNTT_Bits B;
} Ifx_EBCU_DBGNTT;

/** \\brief  Debug Grant Mask Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_DBGRNT_Bits B;
} Ifx_EBCU_DBGRNT;

/** \\brief  Error Address Capture Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_EADD_Bits B;
} Ifx_EBCU_EADD;

/** \\brief  Error Control Capture Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_ECON_Bits B;
} Ifx_EBCU_ECON;

/** \\brief  Error Data Capture Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_EDAT_Bits B;
} Ifx_EBCU_EDAT;

/** \\brief  Module Identification Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_ID_Bits B;
} Ifx_EBCU_ID;

/** \\brief  Arbiter Priority Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_PRIOH_Bits B;
} Ifx_EBCU_PRIOH;

/** \\brief  Arbiter Priority Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_EBCU_PRIOL_Bits B;
} Ifx_EBCU_PRIOL;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ebcu_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \\brief  EBCU object */
typedef volatile struct _Ifx_EBCU
{
    unsigned char reserved_0[8];            /**< \brief 0, \internal Reserved */
    Ifx_EBCU_ID ID;                         /**< \brief 8, Module Identification Register */
    unsigned char reserved_C[4];            /**< \brief C, \internal Reserved */
    Ifx_EBCU_CON CON;                       /**< \brief 10, EBCU Control Register */
    Ifx_EBCU_PRIOH PRIOH;                   /**< \brief 14, Arbiter Priority Register */
    Ifx_EBCU_PRIOL PRIOL;                   /**< \brief 18, Arbiter Priority Register */
    unsigned char reserved_1C[4];           /**< \brief 1C, \internal Reserved */
    Ifx_EBCU_ECON ECON;                     /**< \brief 20, Error Control Capture Register */
    Ifx_EBCU_EADD EADD;                     /**< \brief 24, Error Address Capture Register */
    Ifx_EBCU_EDAT EDAT;                     /**< \brief 28, Error Data Capture Register */
    unsigned char reserved_2C[4];           /**< \brief 2C, \internal Reserved */
    Ifx_EBCU_DBCNTL DBCNTL;                 /**< \brief 30, Debug Control Register */
    Ifx_EBCU_DBGRNT DBGRNT;                 /**< \brief 34, Debug Grant Mask Register */
    Ifx_EBCU_DBADR1 DBADR1;                 /**< \brief 38, Debug Address 1 Register */
    Ifx_EBCU_DBADR2 DBADR2;                 /**< \brief 3C, Debug Address 2 Register */
    Ifx_EBCU_DBBOS DBBOS;                   /**< \brief 40, Debug Bus Operation Signals Register */
    Ifx_EBCU_DBGNTT DBGNTT;                 /**< \brief 44, Debug Trapped Master Register */
    Ifx_EBCU_DBADRT DBADRT;                 /**< \brief 48, Debug Trapped Address Register */
    Ifx_EBCU_DBBOST DBBOST;                 /**< \brief 4C, Debug Trapped Bus Operation Signals Register */
    Ifx_EBCU_DBDAT DBDAT;                   /**< \brief 50, Debug Data Status Register */
    unsigned char reserved_54[164];         /**< \brief 54, \internal Reserved */
    Ifx_EBCU_ACCEN1 ACCEN1;                 /**< \brief F8, Access Enable Register 1 */
    Ifx_EBCU_ACCEN0 ACCEN0;                 /**< \brief FC, Access Enable Register 0 */
} Ifx_EBCU;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXEBCU_REGDEF_H */
