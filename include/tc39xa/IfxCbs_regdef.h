/**
 * \file IfxCbs_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:16:00 GMT
 * Version: TBD
 * Specification: TBD
 * MAY BE CHANGED BY USER [yes/no]: No
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
 * \defgroup IfxLld_Cbs_Registers CbsRegisters
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Cbs_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Cbs_Registers
 * 
 * \defgroup IfxLld_Cbs_Registers_union Register unions
 * \ingroup IfxLld_Cbs_Registers
 * 
 * \defgroup IfxLld_Cbs_Registers_struct Memory map
 * \ingroup IfxLld_Cbs_Registers
 */
#ifndef IFXCBS_REGDEF_H
#define IFXCBS_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Cbs_Bitfields
 * \{  */
/** \brief Communication Mode Data Register */
typedef struct _Ifx_CBS_COMDATA_Bits
{
    Ifx_UReg_32Bit DATA:32;           /**< \brief [31:0] Read/Write Data - DATA (rw) */
} Ifx_CBS_COMDATA_Bits;

/** \brief Internally Controlled Trace Source Register */
typedef struct _Ifx_CBS_ICTSA_Bits
{
    Ifx_UReg_32Bit ADDR:32;           /**< \brief [31:0] Source Address - ADDR (rw) */
} Ifx_CBS_ICTSA_Bits;

/** \brief Internally Controlled Trace Destination Register */
typedef struct _Ifx_CBS_ICTTA_Bits
{
    Ifx_UReg_32Bit ADDR:32;           /**< \brief [31:0] Destination Address - ADDR (rw) */
} Ifx_CBS_ICTTA_Bits;


/** \brief Internal Mode Status and Control Register */
typedef struct _Ifx_CBS_INTMOD_Bits
{
    Ifx_UReg_32Bit SET_CRS:1;         /**< \brief [0:0] Set Read Sync Flag - SET_CRS (w) */
    Ifx_UReg_32Bit SET_CWS:1;         /**< \brief [1:1] Set Write Sync Flag - SET_CWS (w) */
    Ifx_UReg_32Bit SET_CS:1;          /**< \brief [2:2] Set Communication Synchronization Flag - SET_CS (w) */
    Ifx_UReg_32Bit CLR_CS:1;          /**< \brief [3:3] Clear Communication Synchronization Flag - CLR_CS (w) */
    Ifx_UReg_32Bit CHANNEL_P:1;       /**< \brief [4:4] CHANNEL Write Protection - CHANNEL_P (w) */
    Ifx_UReg_32Bit CHANNEL:3;         /**< \brief [7:5] Channel Indication - CHANNEL (rw) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit SET_INT_MOD:1;     /**< \brief [16:16] Enter Internal Mode - SET_INT_MOD (w) */
    Ifx_UReg_32Bit reserved_17:1;     /**< \brief [17:17] \internal Reserved */
    Ifx_UReg_32Bit SET_INT_TRC:1;     /**< \brief [18:18] Enable Internally Controlled Triggered Transfer - SET_INT_TRC (w) */
    Ifx_UReg_32Bit CLR_INT_TRC:1;     /**< \brief [19:19] Disable Internally Controlled Triggered Transfer - CLR_INT_TRC (w) */
    Ifx_UReg_32Bit TRC_MOD_P:1;       /**< \brief [20:20] TRC_MOD Write Protection - TRC_MOD_P (w) */
    Ifx_UReg_32Bit TRC_MOD:2;         /**< \brief [22:21] Data Size Definition for Triggered Transfer - TRC_MOD (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit INT_MOD:1;         /**< \brief [24:24] Internal Mode Enabled Flag - INT_MOD (rh) */
    Ifx_UReg_32Bit INT_TRC:1;         /**< \brief [25:25] Internally Controlled Triggered Transfer Enable - INT_TRC (rh) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_CBS_INTMOD_Bits;

/** \brief ${CBS_ioclient_name}Status and Control Register */
typedef struct _Ifx_CBS_IOSR_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit CRSYNC:1;          /**< \brief [4:4] Communication Mode Read Sync Flag - CRSYNC (rh) */
    Ifx_UReg_32Bit CWSYNC:1;          /**< \brief [5:5] Communication Mode Write Sync Flag - CWSYNC (rh) */
    Ifx_UReg_32Bit CW_ACK:1;          /**< \brief [6:6] Communication Mode Write Acknowledge - CW_ACK (w) */
    Ifx_UReg_32Bit COM_SYNC:1;        /**< \brief [7:7] Communication Mode Synchronization Flag - COM_SYNC (rh) */
    Ifx_UReg_32Bit HOSTED:1;          /**< \brief [8:8] Tool Interface in Use - HOSTED (rh) */
    Ifx_UReg_32Bit reserved_9:3;      /**< \brief [11:9] \internal Reserved */
    Ifx_UReg_32Bit CHANNEL:3;         /**< \brief [14:12] Channel Indication - CHANNEL (rh) */
    Ifx_UReg_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_CBS_IOSR_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_CBS_JDPID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_UReg_32Bit MOD_NUMBER:16;     /**< \brief [31:16] Module Number - MOD_NUMBER (r) */
} Ifx_CBS_JDPID_Bits;

/** \brief ${CBS_jtag_name}Device Identification Register */
typedef struct _Ifx_CBS_JTAGID_Bits
{
    Ifx_UReg_32Bit JTAG_ID:32;        /**< \brief [31:0] ${CBS_jtag_name}Device ID - JTAG_ID (rw) */
} Ifx_CBS_JTAGID_Bits;

/** \brief ${OSCU_Name}Control Register */
typedef struct _Ifx_CBS_OCNTRL_Bits
{
    Ifx_UReg_32Bit OC_P0:1;           /**< \brief [0:0] OC${x} Write Protection - OC${x}_P (w) */
    Ifx_UReg_32Bit OC0:1;             /**< \brief [1:1] Set/Clear OCDS Control Bits Bus Domain - OC${x} (w) */
    Ifx_UReg_32Bit OC_P1:1;           /**< \brief [2:2] OC${x} Write Protection - OC${x}_P (w) */
    Ifx_UReg_32Bit OC1:1;             /**< \brief [3:3] Set/Clear OCDS Control Bits Bus Domain - OC${x} (w) */
    Ifx_UReg_32Bit OC_P2:1;           /**< \brief [4:4] OC${x} Write Protection - OC${x}_P (w) */
    Ifx_UReg_32Bit OC2:1;             /**< \brief [5:5] Set/Clear OCDS Control Bits Bus Domain - OC${x} (w) */
    Ifx_UReg_32Bit OC_P3:1;           /**< \brief [6:6] OC${x} Write Protection - OC${x}_P (w) */
    Ifx_UReg_32Bit OC3:1;             /**< \brief [7:7] Set/Clear OCDS Control Bits Bus Domain - OC${x} (w) */
    Ifx_UReg_32Bit OC_P4:1;           /**< \brief [8:8] OC${x} Write Protection - OC${x}_P (w) */
    Ifx_UReg_32Bit OC4:1;             /**< \brief [9:9] Set/Clear OCDS Control Bits Bus Domain - OC${x} (w) */
    Ifx_UReg_32Bit OC_P5:1;           /**< \brief [10:10] OC${x} Write Protection - OC${x}_P (w) */
    Ifx_UReg_32Bit OC5:1;             /**< \brief [11:11] Set/Clear OCDS Control Bits Bus Domain - OC${x} (w) */
    Ifx_UReg_32Bit WDTSUS_P:1;        /**< \brief [12:12] WDTSUS Write Protection - WDTSUS_P (w) */
    Ifx_UReg_32Bit WDTSUS:1;          /**< \brief [13:13] Set/Clear Watchdog Timer Suspension Control - WDTSUS (w) */
    Ifx_UReg_32Bit STABLE_P:1;        /**< \brief [14:14] STABLE Write Protection - STABLE_P (w) */
    Ifx_UReg_32Bit STABLE:1;          /**< \brief [15:15] Initialize${Application_Reset}Indication - STABLE (w) */
    Ifx_UReg_32Bit OJC_P0:1;          /**< \brief [16:16] OJC${x} Write Protection - OJC${x}_P (w) */
    Ifx_UReg_32Bit OJC0:1;            /**< \brief [17:17] Set/Clear OCDS Control Bits IOClient Domain - OJC${x} (w) */
    Ifx_UReg_32Bit OJC_P1:1;          /**< \brief [18:18] OJC${x} Write Protection - OJC${x}_P (w) */
    Ifx_UReg_32Bit OJC1:1;            /**< \brief [19:19] Set/Clear OCDS Control Bits IOClient Domain - OJC${x} (w) */
    Ifx_UReg_32Bit OJC_P2:1;          /**< \brief [20:20] OJC${x} Write Protection - OJC${x}_P (w) */
    Ifx_UReg_32Bit OJC2:1;            /**< \brief [21:21] Set/Clear OCDS Control Bits IOClient Domain - OJC${x} (w) */
    Ifx_UReg_32Bit OJC_P3:1;          /**< \brief [22:22] OJC${x} Write Protection - OJC${x}_P (w) */
    Ifx_UReg_32Bit OJC3:1;            /**< \brief [23:23] Set/Clear OCDS Control Bits IOClient Domain - OJC${x} (w) */
    Ifx_UReg_32Bit OJC_P4:1;          /**< \brief [24:24] OJC${x} Write Protection - OJC${x}_P (w) */
    Ifx_UReg_32Bit OJC4:1;            /**< \brief [25:25] Set/Clear OCDS Control Bits IOClient Domain - OJC${x} (w) */
    Ifx_UReg_32Bit OJC_P5:1;          /**< \brief [26:26] OJC${x} Write Protection - OJC${x}_P (w) */
    Ifx_UReg_32Bit OJC5:1;            /**< \brief [27:27] Set/Clear OCDS Control Bits IOClient Domain - OJC${x} (w) */
    Ifx_UReg_32Bit OJC_P6:1;          /**< \brief [28:28] OJC${x} Write Protection - OJC${x}_P (w) */
    Ifx_UReg_32Bit OJC6:1;            /**< \brief [29:29] Set/Clear OCDS Control Bits IOClient Domain - OJC${x} (w) */
    Ifx_UReg_32Bit OJC_P7:1;          /**< \brief [30:30] OJC${x} Write Protection - OJC${x}_P (w) */
    Ifx_UReg_32Bit OJC7:1;            /**< \brief [31:31] Set/Clear OCDS Control Bits IOClient Domain - OJC${x} (w) */
} Ifx_CBS_OCNTRL_Bits;

/** \brief OCDS Enable Control Register */
typedef struct _Ifx_CBS_OEC_Bits
{
    Ifx_UReg_32Bit PAT:8;             /**< \brief [7:0] OCDS Enabling Pattern - PAT (w) */
    Ifx_UReg_32Bit DS:1;              /**< \brief [8:8] Disable OCDS - DS (w) */
    Ifx_UReg_32Bit OCO:1;             /**< \brief [9:9] OCDS Clock Off - OCO (w) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit IF_LCK_P:1;        /**< \brief [16:16] IF_LCK Write Protection - IF_LCK_P (w) */
    Ifx_UReg_32Bit IF_LCK:1;          /**< \brief [17:17] Set/Clear Interface Locked Indication - IF_LCK (w) */
    Ifx_UReg_32Bit AUT_OK_P:1;        /**< \brief [18:18] AUT_OK Write Protection - AUT_OK_P (w) */
    Ifx_UReg_32Bit AUT_OK:1;          /**< \brief [19:19] Set/Clear the Authorization OK Indication - AUT_OK (w) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CBS_OEC_Bits;

/** \brief OCDS Interface Mode Register */
typedef struct _Ifx_CBS_OIFM_Bits
{
    Ifx_UReg_32Bit DAPMODE:3;         /**< \brief [2:0] ${DAP_Name}Interface Mode - DAPMODE (rw) */
    Ifx_UReg_32Bit DAPRST:1;          /**< \brief [3:3] ${DAP_Name}Protocol Clear - DAPRST (rwh) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit F_JTAG:1;          /**< \brief [8:8] Forced JTAG Mode(dap_bypass_o) - F_JTAG (rw) */
    Ifx_UReg_32Bit N_JTAG:1;          /**< \brief [9:9] No Switch to JTAG(jtag_disable_o) - N_JTAG (rw) */
    Ifx_UReg_32Bit reserved_10:2;     /**< \brief [11:10] \internal Reserved */
    Ifx_UReg_32Bit PADCTL:4;          /**< \brief [15:12] Pad Control for Debug Interface Pins(padctl_o) - PADCTL (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CBS_OIFM_Bits;

/** \brief ${OSCU_Name}Status Register */
typedef struct _Ifx_CBS_OSTATE_Bits
{
    Ifx_UReg_32Bit OEN:1;             /**< \brief [0:0] OCDS Enabled Flag - OEN (rh) */
    Ifx_UReg_32Bit OC0:1;             /**< \brief [1:1] OCDS Control Bits System Bus Domain - OC${x} (rh) */
    Ifx_UReg_32Bit OC1:1;             /**< \brief [2:2] OCDS Control Bits System Bus Domain - OC${x} (rh) */
    Ifx_UReg_32Bit OC2:1;             /**< \brief [3:3] OCDS Control Bits System Bus Domain - OC${x} (rh) */
    Ifx_UReg_32Bit ENIDIS:1;          /**< \brief [4:4] OCDS ENDINIT Protection Override - ENIDIS (rh) */
    Ifx_UReg_32Bit EECTRC:1;          /**< \brief [5:5] On Chip Trace Enable - EECTRC (rh) */
    Ifx_UReg_32Bit EECDIS:1;          /**< \brief [6:6] Emulation Logic Disable - EECDIS (rh) */
    Ifx_UReg_32Bit WDTSUS:1;          /**< \brief [7:7] Control of Watchdog Timer (WDT) Suspension - WDTSUS (rh) */
    Ifx_UReg_32Bit HARR:1;            /**< \brief [8:8] Halt after Reset Request - HARR (rh) */
    Ifx_UReg_32Bit OJC1:1;            /**< \brief [9:9] OCDS Control Bits IOClient Domain - OJC1,OJC2,OJC3,OJC6 (rh) */
    Ifx_UReg_32Bit OJC2:1;            /**< \brief [10:10] OCDS Control Bits IOClient Domain - OJC1,OJC2,OJC3,OJC6 (rh) */
    Ifx_UReg_32Bit OJC3:1;            /**< \brief [11:11] OCDS Control Bits IOClient Domain - OJC1,OJC2,OJC3,OJC6 (rh) */
    Ifx_UReg_32Bit RSTCL0:1;          /**< \brief [12:12] OCDS System Reset Request - RSTCL0 (rh) */
    Ifx_UReg_32Bit RSTCL1:1;          /**< \brief [13:13] OCDS Debug Reset Request - RSTCL1 (rh) */
    Ifx_UReg_32Bit OJC6:1;            /**< \brief [14:14] OCDS Control Bits IOClient Domain - OJC1,OJC2,OJC3,OJC6 (rh) */
    Ifx_UReg_32Bit RSTCL3:1;          /**< \brief [15:15] OCDS Application Reset Request - RSTCL3 (rh) */
    Ifx_UReg_32Bit IF_LCK:1;          /**< \brief [16:16] Interface Locked Indication - IF_LCK (rh) */
    Ifx_UReg_32Bit AUT_OK:1;          /**< \brief [17:17] Authorization OK Indication - AUT_OK (rh) */
    Ifx_UReg_32Bit STABLE:1;          /**< \brief [18:18] ${Application_Reset}Indication - STABLE (rh) */
    Ifx_UReg_32Bit OCO:1;             /**< \brief [19:19] OCDS debug resource Clock On indication - OCO (rh) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CBS_OSTATE_Bits;

/** \brief TG Capture for Cores - BRKOUT */
typedef struct _Ifx_CBS_TCCB_Bits
{
    Ifx_UReg_32Bit C0:1;              /**< \brief [0:0] Capture of BRKOUT Signal of CPU${x} - C${x} (rh) */
    Ifx_UReg_32Bit C1:1;              /**< \brief [1:1] Capture of BRKOUT Signal of CPU${x} - C${x} (rh) */
    Ifx_UReg_32Bit C2:1;              /**< \brief [2:2] Capture of BRKOUT Signal of CPU${x} - C${x} (rh) */
    Ifx_UReg_32Bit C3:1;              /**< \brief [3:3] Capture of BRKOUT Signal of CPU${x} - C${x} (rh) */
    Ifx_UReg_32Bit C4:1;              /**< \brief [4:4] Capture of BRKOUT Signal of CPU${x} - C${x} (rh) */
    Ifx_UReg_32Bit C5:1;              /**< \brief [5:5] Capture of BRKOUT Signal of CPU${x} - C${x} (rh) */
    Ifx_UReg_32Bit reserved_6:25;     /**< \brief [30:6] \internal Reserved */
    Ifx_UReg_32Bit HSM:1;             /**< \brief [31:31] Capture of BRKOUT Signal of${CBS_hsm_name} - HSM (rh) */
} Ifx_CBS_TCCB_Bits;

/** \brief TG Capture for Cores - HALT */
typedef struct _Ifx_CBS_TCCH_Bits
{
    Ifx_UReg_32Bit C0:1;              /**< \brief [0:0] Capture of HALT Signal of CPU${x} - C${x} (rh) */
    Ifx_UReg_32Bit C1:1;              /**< \brief [1:1] Capture of HALT Signal of CPU${x} - C${x} (rh) */
    Ifx_UReg_32Bit C2:1;              /**< \brief [2:2] Capture of HALT Signal of CPU${x} - C${x} (rh) */
    Ifx_UReg_32Bit C3:1;              /**< \brief [3:3] Capture of HALT Signal of CPU${x} - C${x} (rh) */
    Ifx_UReg_32Bit C4:1;              /**< \brief [4:4] Capture of HALT Signal of CPU${x} - C${x} (rh) */
    Ifx_UReg_32Bit C5:1;              /**< \brief [5:5] Capture of HALT Signal of CPU${x} - C${x} (rh) */
    Ifx_UReg_32Bit reserved_6:25;     /**< \brief [30:6] \internal Reserved */
    Ifx_UReg_32Bit HSM:1;             /**< \brief [31:31] Capture of HALT Signal of${CBS_hsm_name} - HSM (rh) */
} Ifx_CBS_TCCH_Bits;

/** \brief TG Capture for TG Input Pins */
typedef struct _Ifx_CBS_TCIP_Bits
{
    Ifx_UReg_32Bit P0:1;              /**< \brief [0:0] Capture of Trigger Input Pin ${x} - P${x} (rh) */
    Ifx_UReg_32Bit P1:1;              /**< \brief [1:1] Capture of Trigger Input Pin ${x} - P${x} (rh) */
    Ifx_UReg_32Bit P2:1;              /**< \brief [2:2] Capture of Trigger Input Pin ${x} - P${x} (rh) */
    Ifx_UReg_32Bit P3:1;              /**< \brief [3:3] Capture of Trigger Input Pin ${x} - P${x} (rh) */
    Ifx_UReg_32Bit P4:1;              /**< \brief [4:4] Capture of Trigger Input Pin ${x} - P${x} (rh) */
    Ifx_UReg_32Bit P5:1;              /**< \brief [5:5] Capture of Trigger Input Pin ${x} - P${x} (rh) */
    Ifx_UReg_32Bit P6:1;              /**< \brief [6:6] Capture of Trigger Input Pin ${x} - P${x} (rh) */
    Ifx_UReg_32Bit P7:1;              /**< \brief [7:7] Capture of Trigger Input Pin ${x} - P${x} (rh) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_CBS_TCIP_Bits;

/** \brief TG Capture for MCDS */
typedef struct _Ifx_CBS_TCM_Bits
{
    Ifx_UReg_32Bit BRK:1;             /**< \brief [0:0] Capture of MCDS break_out - BRK (rh) */
    Ifx_UReg_32Bit SUS:1;             /**< \brief [1:1] Capture of MCDS suspend_out - SUS (rh) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit T0:1;              /**< \brief [8:8] Capture of MCDS trig_out ${x} - T${x} (rh) */
    Ifx_UReg_32Bit T1:1;              /**< \brief [9:9] Capture of MCDS trig_out ${x} - T${x} (rh) */
    Ifx_UReg_32Bit T2:1;              /**< \brief [10:10] Capture of MCDS trig_out ${x} - T${x} (rh) */
    Ifx_UReg_32Bit T3:1;              /**< \brief [11:11] Capture of MCDS trig_out ${x} - T${x} (rh) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CBS_TCM_Bits;

/** \brief TG Capture for OTGB0/1 */
typedef struct _Ifx_CBS_TCTGB_Bits
{
    Ifx_UReg_32Bit OTGB0:16;          /**< \brief [15:0] Capture Bits for OTGB0 - OTGB0 (rh) */
    Ifx_UReg_32Bit OTGB1:16;          /**< \brief [31:16] Capture Bits for OTGB1 - OTGB1 (rh) */
} Ifx_CBS_TCTGB_Bits;

/** \brief TG Capture for TG Lines */
typedef struct _Ifx_CBS_TCTL_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit TL1:1;             /**< \brief [1:1] Capture of Trigger Line ${x} - TL${x} (rh) */
    Ifx_UReg_32Bit TL2:1;             /**< \brief [2:2] Capture of Trigger Line ${x} - TL${x} (rh) */
    Ifx_UReg_32Bit TL3:1;             /**< \brief [3:3] Capture of Trigger Line ${x} - TL${x} (rh) */
    Ifx_UReg_32Bit TL4:1;             /**< \brief [4:4] Capture of Trigger Line ${x} - TL${x} (rh) */
    Ifx_UReg_32Bit TL5:1;             /**< \brief [5:5] Capture of Trigger Line ${x} - TL${x} (rh) */
    Ifx_UReg_32Bit TL6:1;             /**< \brief [6:6] Capture of Trigger Line ${x} - TL${x} (rh) */
    Ifx_UReg_32Bit TL7:1;             /**< \brief [7:7] Capture of Trigger Line ${x} - TL${x} (rh) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_CBS_TCTL_Bits;

/** \brief TG Input Pins Routing */
typedef struct _Ifx_CBS_TIPR_Bits
{
    Ifx_UReg_32Bit PIN0:4;            /**< \brief [3:0] Trigger Pin ${x} to Trigger Line Routing - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN1:4;            /**< \brief [7:4] Trigger Pin ${x} to Trigger Line Routing - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN2:4;            /**< \brief [11:8] Trigger Pin ${x} to Trigger Line Routing - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN3:4;            /**< \brief [15:12] Trigger Pin ${x} to Trigger Line Routing - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN4:4;            /**< \brief [19:16] Trigger Pin ${x} to Trigger Line Routing - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN5:4;            /**< \brief [23:20] Trigger Pin ${x} to Trigger Line Routing - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN6:4;            /**< \brief [27:24] Trigger Pin ${x} to Trigger Line Routing - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN7:4;            /**< \brief [31:28] Trigger Pin ${x} to Trigger Line Routing - PIN${x} (rw) */
} Ifx_CBS_TIPR_Bits;

/** \brief TG Line 1 Suspend Targets */
typedef struct _Ifx_CBS_TL1ST_Bits
{
    Ifx_UReg_32Bit C0:1;              /**< \brief [0:0] CPU${x} as Suspend Target - C${x} (rw) */
    Ifx_UReg_32Bit C1:1;              /**< \brief [1:1] CPU${x} as Suspend Target - C${x} (rw) */
    Ifx_UReg_32Bit C2:1;              /**< \brief [2:2] CPU${x} as Suspend Target - C${x} (rw) */
    Ifx_UReg_32Bit C3:1;              /**< \brief [3:3] CPU${x} as Suspend Target - C${x} (rw) */
    Ifx_UReg_32Bit C4:1;              /**< \brief [4:4] CPU${x} as Suspend Target - C${x} (rw) */
    Ifx_UReg_32Bit C5:1;              /**< \brief [5:5] CPU${x} as Suspend Target - C${x} (rw) */
    Ifx_UReg_32Bit reserved_6:18;     /**< \brief [23:6] \internal Reserved */
    Ifx_UReg_32Bit M0M1M2M31:1;       /**< \brief [24:24] Master X as Suspend Target - M0M1M2M3 (rw) */
    Ifx_UReg_32Bit M0M1M2M32:1;       /**< \brief [25:25] Master X as Suspend Target - M0M1M2M3 (rw) */
    Ifx_UReg_32Bit M0M1M2M33:1;       /**< \brief [26:26] Master X as Suspend Target - M0M1M2M3 (rw) */
    Ifx_UReg_32Bit M0M1M2M34:1;       /**< \brief [27:27] Master X as Suspend Target - M0M1M2M3 (rw) */
    Ifx_UReg_32Bit HSS:1;             /**< \brief [28:28] HSSL as Suspend Target - HSS (rw) */
    Ifx_UReg_32Bit DMA:1;             /**< \brief [29:29] DMA as Suspend Target - DMA (rw) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit HSM:1;             /**< \brief [31:31] ${CBS_hsm_name}as Suspend Target - HSM (rw) */
} Ifx_CBS_TL1ST_Bits;

/** \brief TG Line Control */
typedef struct _Ifx_CBS_TLC_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit TLSP1:4;           /**< \brief [7:4] TG Line Signal Processing - TLSP${x} (rw) */
    Ifx_UReg_32Bit TLSP2:4;           /**< \brief [11:8] TG Line Signal Processing - TLSP${x} (rw) */
    Ifx_UReg_32Bit TLSP3:4;           /**< \brief [15:12] TG Line Signal Processing - TLSP${x} (rw) */
    Ifx_UReg_32Bit TLSP4:4;           /**< \brief [19:16] TG Line Signal Processing - TLSP${x} (rw) */
    Ifx_UReg_32Bit TLSP5:4;           /**< \brief [23:20] TG Line Signal Processing - TLSP${x} (rw) */
    Ifx_UReg_32Bit TLSP6:4;           /**< \brief [27:24] TG Line Signal Processing - TLSP${x} (rw) */
    Ifx_UReg_32Bit TLSP7:4;           /**< \brief [31:28] TG Line Signal Processing - TLSP${x} (rw) */
} Ifx_CBS_TLC_Bits;

/** \brief TG Line Counter Control */
typedef struct _Ifx_CBS_TLCC_Bits
{
    Ifx_UReg_32Bit TGL:4;             /**< \brief [3:0] Trigger Line to Counter Routing - TGL (rw) */
    Ifx_UReg_32Bit LE:3;              /**< \brief [6:4] Level or Edge Counting - LE (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit CLR:2;             /**< \brief [9:8] Clear and Enable Counter(s) - CLR (w) */
    Ifx_UReg_32Bit reserved_10:2;     /**< \brief [11:10] \internal Reserved */
    Ifx_UReg_32Bit STOP:2;            /**< \brief [13:12] Stop Counter(s) - STOP (w) */
    Ifx_UReg_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_CBS_TLCC_Bits;

/** \brief TG Line Capture and Hold Enable */
typedef struct _Ifx_CBS_TLCHE_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit TL1:1;             /**< \brief [1:1] Capture and Hold Enable for Trigger Line ${x} - TL${x} (rw) */
    Ifx_UReg_32Bit TL2:1;             /**< \brief [2:2] Capture and Hold Enable for Trigger Line ${x} - TL${x} (rw) */
    Ifx_UReg_32Bit TL3:1;             /**< \brief [3:3] Capture and Hold Enable for Trigger Line ${x} - TL${x} (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_CBS_TLCHE_Bits;

/** \brief TG Line Capture and Hold Clear */
typedef struct _Ifx_CBS_TLCHS_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit TL1:1;             /**< \brief [1:1] Capture and Hold Clear for Trigger Line ${x} - TL${x} (w) */
    Ifx_UReg_32Bit TL2:1;             /**< \brief [2:2] Capture and Hold Clear for Trigger Line ${x} - TL${x} (w) */
    Ifx_UReg_32Bit TL3:1;             /**< \brief [3:3] Capture and Hold Clear for Trigger Line ${x} - TL${x} (w) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_CBS_TLCHS_Bits;

/** \brief TG Line Counter Value */
typedef struct _Ifx_CBS_TLCV_Bits
{
    Ifx_UReg_32Bit CV:31;             /**< \brief [30:0] Count Value - CV (rh) */
    Ifx_UReg_32Bit SO:1;              /**< \brief [31:31] Sticky Overflow Bit - SO (rh) */
} Ifx_CBS_TLCV_Bits;

/** \brief TG Line State */
typedef struct _Ifx_CBS_TLS_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit TL1:1;             /**< \brief [1:1] Current State of Trigger Line ${x} - TL${x} (rh) */
    Ifx_UReg_32Bit TL2:1;             /**< \brief [2:2] Current State of Trigger Line ${x} - TL${x} (rh) */
    Ifx_UReg_32Bit TL3:1;             /**< \brief [3:3] Current State of Trigger Line ${x} - TL${x} (rh) */
    Ifx_UReg_32Bit TL4:1;             /**< \brief [4:4] Current State of Trigger Line ${x} - TL${x} (rh) */
    Ifx_UReg_32Bit TL5:1;             /**< \brief [5:5] Current State of Trigger Line ${x} - TL${x} (rh) */
    Ifx_UReg_32Bit TL6:1;             /**< \brief [6:6] Current State of Trigger Line ${x} - TL${x} (rh) */
    Ifx_UReg_32Bit TL7:1;             /**< \brief [7:7] Current State of Trigger Line ${x} - TL${x} (rh) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_CBS_TLS_Bits;

/** \brief TG Line Timer */
typedef struct _Ifx_CBS_TLT_Bits
{
    Ifx_UReg_32Bit TGL:4;             /**< \brief [3:0] Timer to Trigger Line Routing - TGL (rw) */
    Ifx_UReg_32Bit VTZ:1;             /**< \brief [4:4] TG Line Value when Timer Value is Zero - VTZ (rw) */
    Ifx_UReg_32Bit RL:1;              /**< \brief [5:5] Reload Timer - RL (rw) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit TIM:16;            /**< \brief [31:16] Timer Value - TIM (rwh) */
} Ifx_CBS_TLT_Bits;

/** \brief TG Lines for Trigger to Host */
typedef struct _Ifx_CBS_TLTTH_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit TL1:2;             /**< \brief [3:2] TG Line Enabling for Trigger to Host (TRIG) - TL${x} (rw) */
    Ifx_UReg_32Bit TL2:2;             /**< \brief [5:4] TG Line Enabling for Trigger to Host (TRIG) - TL${x} (rw) */
    Ifx_UReg_32Bit TL3:2;             /**< \brief [7:6] TG Line Enabling for Trigger to Host (TRIG) - TL${x} (rw) */
    Ifx_UReg_32Bit TL4:2;             /**< \brief [9:8] TG Line Enabling for Trigger to Host (TRIG) - TL${x} (rw) */
    Ifx_UReg_32Bit TL5:2;             /**< \brief [11:10] TG Line Enabling for Trigger to Host (TRIG) - TL${x} (rw) */
    Ifx_UReg_32Bit TL6:2;             /**< \brief [13:12] TG Line Enabling for Trigger to Host (TRIG) - TL${x} (rw) */
    Ifx_UReg_32Bit TL7:2;             /**< \brief [15:14] TG Line Enabling for Trigger to Host (TRIG) - TL${x} (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CBS_TLTTH_Bits;

/** \brief TG Output Pins Pulse Stretcher */
typedef struct _Ifx_CBS_TOPPS_Bits
{
    Ifx_UReg_32Bit PIN0:2;            /**< \brief [1:0] Pulse Stretch Control for Trigger Pin ${x} - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN1:2;            /**< \brief [3:2] Pulse Stretch Control for Trigger Pin ${x} - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN2:2;            /**< \brief [5:4] Pulse Stretch Control for Trigger Pin ${x} - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN3:2;            /**< \brief [7:6] Pulse Stretch Control for Trigger Pin ${x} - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN4:2;            /**< \brief [9:8] Pulse Stretch Control for Trigger Pin ${x} - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN5:2;            /**< \brief [11:10] Pulse Stretch Control for Trigger Pin ${x} - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN6:2;            /**< \brief [13:12] Pulse Stretch Control for Trigger Pin ${x} - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN7:2;            /**< \brief [15:14] Pulse Stretch Control for Trigger Pin ${x} - PIN${x} (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CBS_TOPPS_Bits;

/** \brief TG Output Pins Routing */
typedef struct _Ifx_CBS_TOPR_Bits
{
    Ifx_UReg_32Bit PIN0:4;            /**< \brief [3:0] Trigger Line to Trigger Pin ${x} Routing - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN1:4;            /**< \brief [7:4] Trigger Line to Trigger Pin ${x} Routing - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN2:4;            /**< \brief [11:8] Trigger Line to Trigger Pin ${x} Routing - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN3:4;            /**< \brief [15:12] Trigger Line to Trigger Pin ${x} Routing - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN4:4;            /**< \brief [19:16] Trigger Line to Trigger Pin ${x} Routing - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN5:4;            /**< \brief [23:20] Trigger Line to Trigger Pin ${x} Routing - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN6:4;            /**< \brief [27:24] Trigger Line to Trigger Pin ${x} Routing - PIN${x} (rw) */
    Ifx_UReg_32Bit PIN7:4;            /**< \brief [31:28] Trigger Line to Trigger Pin ${x} Routing - PIN${x} (rw) */
} Ifx_CBS_TOPR_Bits;

/** \brief TG Routing for CPU${x} */
typedef struct _Ifx_CBS_TRC_Bits
{
    Ifx_UReg_32Bit HALT:4;            /**< \brief [3:0] HALT to Trigger Line Routing - HALT (rw) */
    Ifx_UReg_32Bit BRKOUT:4;          /**< \brief [7:4] BRKOUT to Trigger Line Routing - BRKOUT (rw) */
    Ifx_UReg_32Bit BT1:1;             /**< \brief [8:8] BRKOUT to Trigger Line 1 Routing - BT1 (rw) */
    Ifx_UReg_32Bit reserved_9:11;     /**< \brief [19:9] \internal Reserved */
    Ifx_UReg_32Bit BRKIN:4;           /**< \brief [23:20] Trigger Line to BRKIN Routing - BRKIN (rw) */
    Ifx_UReg_32Bit SUSIN:4;           /**< \brief [27:24] Trigger Line to SUSIN Routing - SUSIN (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_CBS_TRC_Bits;

/** \brief TG Routing Events of CPU${x} */
typedef struct _Ifx_CBS_TREC_Bits
{
    Ifx_UReg_32Bit TR0EV:4;           /**< \brief [3:0] TRxEVT to Trigger Line Routing - TR0EV,TR2EV,TR4EV,TR6EV (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit TR2EV:4;           /**< \brief [11:8] TRxEVT to Trigger Line Routing - TR0EV,TR2EV,TR4EV,TR6EV (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit TR4EV:4;           /**< \brief [19:16] TRxEVT to Trigger Line Routing - TR0EV,TR2EV,TR4EV,TR6EV (rw) */
    Ifx_UReg_32Bit reserved_20:4;     /**< \brief [23:20] \internal Reserved */
    Ifx_UReg_32Bit TR6EV:4;           /**< \brief [27:24] TRxEVT to Trigger Line Routing - TR0EV,TR2EV,TR4EV,TR6EV (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_CBS_TREC_Bits;

/** \brief TG Routing for${CBS_hsm_name}Control */
typedef struct _Ifx_CBS_TRHSM_Bits
{
    Ifx_UReg_32Bit HALT:4;            /**< \brief [3:0] HALT to Trigger Line Routing - HALT (rw) */
    Ifx_UReg_32Bit BRKOUT:4;          /**< \brief [7:4] BRKOUT to Trigger Line Routing - BRKOUT (rw) */
    Ifx_UReg_32Bit BT1:1;             /**< \brief [8:8] BRKOUT to Trigger Line 1 Routing - BT1 (rw) */
    Ifx_UReg_32Bit reserved_9:11;     /**< \brief [19:9] \internal Reserved */
    Ifx_UReg_32Bit BRKIN:4;           /**< \brief [23:20] Trigger Line to BRKIN Routing - BRKIN (rw) */
    Ifx_UReg_32Bit SUSIN:4;           /**< \brief [27:24] Trigger Line to SUSIN Routing - SUSIN (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_CBS_TRHSM_Bits;

/** \brief Trigger to Host Register ${x} */
typedef struct _Ifx_CBS_TRIG_Bits
{
    Ifx_UReg_32Bit TRGX0:1;           /**< \brief [0:0] Service Request Bits - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX1:1;           /**< \brief [1:1] Service Request Bits - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX2:1;           /**< \brief [2:2] Service Request Bits - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX3:1;           /**< \brief [3:3] Service Request Bits - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX4:1;           /**< \brief [4:4] Service Request Bits - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX5:1;           /**< \brief [5:5] Service Request Bits - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX6:1;           /**< \brief [6:6] Service Request Bits - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX7:1;           /**< \brief [7:7] Service Request Bits - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX8:1;           /**< \brief [8:8] Service Request Bits - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX9:1;           /**< \brief [9:9] Service Request Bits - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX10:1;          /**< \brief [10:10] Service Request Bits - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX11:1;          /**< \brief [11:11] Service Request Bits - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX12:1;          /**< \brief [12:12] Service Request Bits - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX13:1;          /**< \brief [13:13] Service Request Bits - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX14:1;          /**< \brief [14:14] Service Request Bits - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX15:1;          /**< \brief [15:15] Service Request Bits - TRGx_${y} (rh) */
    Ifx_UReg_32Bit reserved_16:8;     /**< \brief [23:16] \internal Reserved */
    Ifx_UReg_32Bit X:8;               /**< \brief [31:24] TRIG register number - x (rh) */
} Ifx_CBS_TRIG_Bits;

/** \brief Clear Trigger to Host Register */
typedef struct _Ifx_CBS_TRIGC_Bits
{
    Ifx_UReg_32Bit TRGX0:1;           /**< \brief [0:0] Request Bits of most important register TRIGx - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX1:1;           /**< \brief [1:1] Request Bits of most important register TRIGx - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX2:1;           /**< \brief [2:2] Request Bits of most important register TRIGx - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX3:1;           /**< \brief [3:3] Request Bits of most important register TRIGx - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX4:1;           /**< \brief [4:4] Request Bits of most important register TRIGx - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX5:1;           /**< \brief [5:5] Request Bits of most important register TRIGx - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX6:1;           /**< \brief [6:6] Request Bits of most important register TRIGx - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX7:1;           /**< \brief [7:7] Request Bits of most important register TRIGx - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX8:1;           /**< \brief [8:8] Request Bits of most important register TRIGx - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX9:1;           /**< \brief [9:9] Request Bits of most important register TRIGx - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX10:1;          /**< \brief [10:10] Request Bits of most important register TRIGx - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX11:1;          /**< \brief [11:11] Request Bits of most important register TRIGx - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX12:1;          /**< \brief [12:12] Request Bits of most important register TRIGx - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX13:1;          /**< \brief [13:13] Request Bits of most important register TRIGx - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX14:1;          /**< \brief [14:14] Request Bits of most important register TRIGx - TRGx_${y} (rh) */
    Ifx_UReg_32Bit TRGX15:1;          /**< \brief [15:15] Request Bits of most important register TRIGx - TRGx_${y} (rh) */
    Ifx_UReg_32Bit reserved_16:8;     /**< \brief [23:16] \internal Reserved */
    Ifx_UReg_32Bit X:8;               /**< \brief [31:24] Index of most important register TRIGx - x (rh) */
} Ifx_CBS_TRIGC_Bits;

/** \brief Set Trigger to Host Register */
typedef struct _Ifx_CBS_TRIGS_Bits
{
    Ifx_UReg_32Bit BITNUM:8;          /**< \brief [7:0] Service Request Bit Number to Set - BITNUM (w) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_CBS_TRIGS_Bits;

/** \brief TG Routing for MCDS Control */
typedef struct _Ifx_CBS_TRMC_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit BRKOUT:4;          /**< \brief [7:4] MCDS break_out to Trigger Line Routing - BRKOUT (rw) */
    Ifx_UReg_32Bit SUSOUT:4;          /**< \brief [11:8] MCDS suspend_out to Trigger Line Routing - SUSOUT (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:4;     /**< \brief [19:16] \internal Reserved */
    Ifx_UReg_32Bit BRKIN:4;           /**< \brief [23:20] Trigger Line to MCDS break_in Routing - BRKIN (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CBS_TRMC_Bits;

/** \brief TG Routing for MCDS Triggers */
typedef struct _Ifx_CBS_TRMT_Bits
{
    Ifx_UReg_32Bit TG0:4;             /**< \brief [3:0] MCDS trig_out ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG1:4;             /**< \brief [7:4] MCDS trig_out ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG2:4;             /**< \brief [11:8] MCDS trig_out ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG3:4;             /**< \brief [15:12] MCDS trig_out ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CBS_TRMT_Bits;

/** \brief TG Routing for Special Signals */
typedef struct _Ifx_CBS_TRSS_Bits
{
    Ifx_UReg_32Bit TT:4;              /**< \brief [3:0] Trigger Line to Cerberus’ Triggered Transfer Routing - TT (rw) */
    Ifx_UReg_32Bit reserved_8:12;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit SRC0:4;            /**< \brief [19:16] Trigger Line to SRC${x} Interrupt Routing - SRC${x} (rw) */
    Ifx_UReg_32Bit SRC1:4;            /**< \brief [23:20] Trigger Line to SRC${x} Interrupt Routing - SRC${x} (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CBS_TRSS_Bits;

/** \brief TG Routing for OTGB0 Bits [15:8] */
typedef struct _Ifx_CBS_TRTGB_H_Bits
{
    Ifx_UReg_32Bit TG8:4;             /**< \brief [3:0] OTGB0 Bit ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG9:4;             /**< \brief [7:4] OTGB0 Bit ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG10:4;            /**< \brief [11:8] OTGB0 Bit ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG11:4;            /**< \brief [15:12] OTGB0 Bit ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG12:4;            /**< \brief [19:16] OTGB0 Bit ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG13:4;            /**< \brief [23:20] OTGB0 Bit ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG14:4;            /**< \brief [27:24] OTGB0 Bit ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG15:4;            /**< \brief [31:28] OTGB0 Bit ${x} to Trigger Line Routing - TG${x} (rw) */
} Ifx_CBS_TRTGB_H_Bits;

/** \brief TG Routing for OTGB0 Bits [7:0] */
typedef struct _Ifx_CBS_TRTGB_L_Bits
{
    Ifx_UReg_32Bit TG0:4;             /**< \brief [3:0] OTGB0 Bit ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG1:4;             /**< \brief [7:4] OTGB0 Bit ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG2:4;             /**< \brief [11:8] OTGB0 Bit ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG3:4;             /**< \brief [15:12] OTGB0 Bit ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG4:4;             /**< \brief [19:16] OTGB0 Bit ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG5:4;             /**< \brief [23:20] OTGB0 Bit ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG6:4;             /**< \brief [27:24] OTGB0 Bit ${x} to Trigger Line Routing - TG${x} (rw) */
    Ifx_UReg_32Bit TG7:4;             /**< \brief [31:28] OTGB0 Bit ${x} to Trigger Line Routing - TG${x} (rw) */
} Ifx_CBS_TRTGB_L_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_cbs_union
 * \{   */
/** \brief Communication Mode Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_COMDATA_Bits B;           /**< \brief Bitfield access */
} Ifx_CBS_COMDATA;

/** \brief Internally Controlled Trace Source Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_ICTSA_Bits B;             /**< \brief Bitfield access */
} Ifx_CBS_ICTSA;

/** \brief Internally Controlled Trace Destination Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_ICTTA_Bits B;             /**< \brief Bitfield access */
} Ifx_CBS_ICTTA;

/** \brief Internal Mode Status and Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_INTMOD_Bits B;            /**< \brief Bitfield access */
} Ifx_CBS_INTMOD;

/** \brief ${CBS_ioclient_name}Status and Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_IOSR_Bits B;              /**< \brief Bitfield access */
} Ifx_CBS_IOSR;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_JDPID_Bits B;             /**< \brief Bitfield access */
} Ifx_CBS_JDPID;

/** \brief ${CBS_jtag_name}Device Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_JTAGID_Bits B;            /**< \brief Bitfield access */
} Ifx_CBS_JTAGID;

/** \brief ${OSCU_Name}Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_OCNTRL_Bits B;            /**< \brief Bitfield access */
} Ifx_CBS_OCNTRL;

/** \brief OCDS Enable Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_OEC_Bits B;               /**< \brief Bitfield access */
} Ifx_CBS_OEC;

/** \brief OCDS Interface Mode Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_OIFM_Bits B;              /**< \brief Bitfield access */
} Ifx_CBS_OIFM;

/** \brief ${OSCU_Name}Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_OSTATE_Bits B;            /**< \brief Bitfield access */
} Ifx_CBS_OSTATE;

/** \brief TG Capture for Cores - BRKOUT   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TCCB_Bits B;              /**< \brief Bitfield access */
} Ifx_CBS_TCCB;

/** \brief TG Capture for Cores - HALT   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TCCH_Bits B;              /**< \brief Bitfield access */
} Ifx_CBS_TCCH;

/** \brief TG Capture for TG Input Pins   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TCIP_Bits B;              /**< \brief Bitfield access */
} Ifx_CBS_TCIP;

/** \brief TG Capture for MCDS   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TCM_Bits B;               /**< \brief Bitfield access */
} Ifx_CBS_TCM;

/** \brief TG Capture for OTGB0/1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TCTGB_Bits B;             /**< \brief Bitfield access */
} Ifx_CBS_TCTGB;

/** \brief TG Capture for TG Lines   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TCTL_Bits B;              /**< \brief Bitfield access */
} Ifx_CBS_TCTL;

/** \brief TG Input Pins Routing   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TIPR_Bits B;              /**< \brief Bitfield access */
} Ifx_CBS_TIPR;

/** \brief TG Line 1 Suspend Targets   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TL1ST_Bits B;             /**< \brief Bitfield access */
} Ifx_CBS_TL1ST;

/** \brief TG Line Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TLC_Bits B;               /**< \brief Bitfield access */
} Ifx_CBS_TLC;

/** \brief TG Line Counter Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TLCC_Bits B;              /**< \brief Bitfield access */
} Ifx_CBS_TLCC;

/** \brief TG Line Capture and Hold Enable   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TLCHE_Bits B;             /**< \brief Bitfield access */
} Ifx_CBS_TLCHE;

/** \brief TG Line Capture and Hold Clear   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TLCHS_Bits B;             /**< \brief Bitfield access */
} Ifx_CBS_TLCHS;

/** \brief TG Line Counter Value   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TLCV_Bits B;              /**< \brief Bitfield access */
} Ifx_CBS_TLCV;

/** \brief TG Line State   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TLS_Bits B;               /**< \brief Bitfield access */
} Ifx_CBS_TLS;

/** \brief TG Line Timer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TLT_Bits B;               /**< \brief Bitfield access */
} Ifx_CBS_TLT;

/** \brief TG Lines for Trigger to Host   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TLTTH_Bits B;             /**< \brief Bitfield access */
} Ifx_CBS_TLTTH;

/** \brief TG Output Pins Pulse Stretcher   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TOPPS_Bits B;             /**< \brief Bitfield access */
} Ifx_CBS_TOPPS;

/** \brief TG Output Pins Routing   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TOPR_Bits B;              /**< \brief Bitfield access */
} Ifx_CBS_TOPR;

/** \brief TG Routing for CPU${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TRC_Bits B;               /**< \brief Bitfield access */
} Ifx_CBS_TRC;

/** \brief TG Routing Events of CPU${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TREC_Bits B;              /**< \brief Bitfield access */
} Ifx_CBS_TREC;

/** \brief TG Routing for${CBS_hsm_name}Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TRHSM_Bits B;             /**< \brief Bitfield access */
} Ifx_CBS_TRHSM;

/** \brief Trigger to Host Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TRIG_Bits B;              /**< \brief Bitfield access */
} Ifx_CBS_TRIG;

/** \brief Clear Trigger to Host Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TRIGC_Bits B;             /**< \brief Bitfield access */
} Ifx_CBS_TRIGC;

/** \brief Set Trigger to Host Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TRIGS_Bits B;             /**< \brief Bitfield access */
} Ifx_CBS_TRIGS;

/** \brief TG Routing for MCDS Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TRMC_Bits B;              /**< \brief Bitfield access */
} Ifx_CBS_TRMC;

/** \brief TG Routing for MCDS Triggers   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TRMT_Bits B;              /**< \brief Bitfield access */
} Ifx_CBS_TRMT;

/** \brief TG Routing for Special Signals   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TRSS_Bits B;              /**< \brief Bitfield access */
} Ifx_CBS_TRSS;

/** \brief TG Routing for OTGB0 Bits [15:8]   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TRTGB_H_Bits B;           /**< \brief Bitfield access */
} Ifx_CBS_TRTGB_H;

/** \brief TG Routing for OTGB0 Bits [7:0]   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CBS_TRTGB_L_Bits B;           /**< \brief Bitfield access */
} Ifx_CBS_TRTGB_L;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Cbs_TRTGB_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TRTGB object */
typedef volatile struct _Ifx_CBS_TRTGB
{
       Ifx_CBS_TRTGB_L                     L;                      /**< \brief 0, TG Routing for OTGB0 Bits [7:0]*/
       Ifx_CBS_TRTGB_H                     H;                      /**< \brief 4, TG Routing for OTGB0 Bits [15:8]*/
} Ifx_CBS_TRTGB;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxLld_Cbs_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief CBS object */
typedef volatile struct _Ifx_CBS
{
       Ifx_UReg_8Bit                       reserved_0[8];          /**< \brief 0, \internal Reserved */
       Ifx_CBS_JDPID                       JDPID;                  /**< \brief 8, Module Identification Register*/
       Ifx_CBS_OIFM                        OIFM;                   /**< \brief C, OCDS Interface Mode Register*/
       Ifx_CBS_TIPR                        TIPR;                   /**< \brief 10, TG Input Pins Routing*/
       Ifx_CBS_TOPR                        TOPR;                   /**< \brief 14, TG Output Pins Routing*/
       Ifx_CBS_TOPPS                       TOPPS;                  /**< \brief 18, TG Output Pins Pulse Stretcher*/
       Ifx_CBS_TCIP                        TCIP;                   /**< \brief 1C, TG Capture for TG Input Pins*/
       Ifx_CBS_TRC                         TRC[6];                 /**< \brief 20, TG Routing for CPU${x}*/
       Ifx_CBS_TRHSM                       TRHSM;                  /**< \brief 38, TG Routing for${CBS_hsm_name}Control*/
       Ifx_CBS_TRMC                        TRMC;                   /**< \brief 3C, TG Routing for MCDS Control*/
       Ifx_CBS_TLCC                        TLCC[2];                /**< \brief 40, TG Line Counter Control*/
       Ifx_UReg_8Bit                       reserved_48[8];         /**< \brief 48, \internal Reserved */
       Ifx_CBS_TLCV                        TLCV[2];                /**< \brief 50, TG Line Counter Value*/
       Ifx_UReg_8Bit                       reserved_58[8];         /**< \brief 58, \internal Reserved */
       Ifx_CBS_TRSS                        TRSS;                   /**< \brief 60, TG Routing for Special Signals*/
       Ifx_CBS_JTAGID                      JTAGID;                 /**< \brief 64, ${CBS_jtag_name}Device Identification Register*/
       Ifx_CBS_COMDATA                     COMDATA;                /**< \brief 68, Communication Mode Data Register*/
       Ifx_CBS_IOSR                        IOSR;                   /**< \brief 6C, ${CBS_ioclient_name}Status and Control Register*/
       Ifx_CBS_TLS                         TLS;                    /**< \brief 70, TG Line State*/
       Ifx_CBS_TCTL                        TCTL;                   /**< \brief 74, TG Capture for TG Lines*/
       Ifx_CBS_OEC                         OEC;                    /**< \brief 78, OCDS Enable Control Register*/
       Ifx_CBS_OCNTRL                      OCNTRL;                 /**< \brief 7C, ${OSCU_Name}Control Register*/
       Ifx_CBS_OSTATE                      OSTATE;                 /**< \brief 80, ${OSCU_Name}Status Register*/
       Ifx_CBS_INTMOD                      INTMOD;                 /**< \brief 84, Internal Mode Status and Control Register*/
       Ifx_CBS_ICTSA                       ICTSA;                  /**< \brief 88, Internally Controlled Trace Source Register*/
       Ifx_CBS_ICTTA                       ICTTA;                  /**< \brief 8C, Internally Controlled Trace Destination Register*/
       Ifx_CBS_TLC                         TLC;                    /**< \brief 90, TG Line Control*/
       Ifx_CBS_TL1ST                       TL1ST;                  /**< \brief 94, TG Line 1 Suspend Targets*/
       Ifx_CBS_TLCHE                       TLCHE;                  /**< \brief 98, TG Line Capture and Hold Enable*/
       Ifx_CBS_TLCHS                       TLCHS;                  /**< \brief 9C, TG Line Capture and Hold Clear*/
       Ifx_CBS_TRIGS                       TRIGS;                  /**< \brief A0, Set Trigger to Host Register*/
       Ifx_CBS_TRIGC                       TRIGC;                  /**< \brief A4, Clear Trigger to Host Register*/
       Ifx_CBS_TLT                         TLT;                    /**< \brief A8, TG Line Timer*/
       Ifx_CBS_TLTTH                       TLTTH;                  /**< \brief AC, TG Lines for Trigger to Host*/
       Ifx_CBS_TCCB                        TCCB;                   /**< \brief B0, TG Capture for Cores - BRKOUT*/
       Ifx_CBS_TCCH                        TCCH;                   /**< \brief B4, TG Capture for Cores - HALT*/
       Ifx_CBS_TCTGB                       TCTGB;                  /**< \brief B8, TG Capture for OTGB0/1*/
       Ifx_CBS_TCM                         TCM;                    /**< \brief BC, TG Capture for MCDS*/
       Ifx_CBS_TREC                        TREC[6];                /**< \brief C0, TG Routing Events of CPU${x}*/
       Ifx_UReg_8Bit                       reserved_D8[4];         /**< \brief D8, \internal Reserved */
       Ifx_CBS_TRMT                        TRMT;                   /**< \brief DC, TG Routing for MCDS Triggers*/
       Ifx_CBS_TRTGB                       TRTGB[2];               /**< \brief E0, TG Routing for OTGB0 Bits [15:8]*/

       Ifx_UReg_8Bit                       reserved_E0[16];         /**< \brief 58, \internal Reserved */

       Ifx_CBS_TRIG                        TRIG[6];                /**< \brief 100, Trigger to Host Register ${x}*/
       Ifx_UReg_8Bit                       reserved_118[232];      /**< \brief 118, \internal Reserved */
} Ifx_CBS;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXCBS_REGDEF_H */
