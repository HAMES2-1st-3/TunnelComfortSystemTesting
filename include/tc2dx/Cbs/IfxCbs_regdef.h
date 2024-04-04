/**
 * \file IfxCbs_regdef.h
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
#ifndef IFXCBS_REGDEF_H
#define IFXCBS_REGDEF_H
/******************************************************************************/
#include "Global/IfxGlobal_regdef.h"

/******************************************************************************/
/*                           Struct (0 - Bitfields)                           */
/******************************************************************************/

/** Communication Mode Data Register */
typedef struct
{
    unsigned int DATA: 32;                  /** \brief [31:0] Read/Write Data (rw) */
} Ifx_CBS_COMDATA_Bits;

/** Internally Controlled Trace Source Register */
typedef struct
{
    unsigned int ADDR: 32;                  /** \brief [31:0] Source Address (rw) */
} Ifx_CBS_ICTSA_Bits;

/** Internally Controlled Trace Destination Register */
typedef struct
{
    unsigned int ADDR: 32;                  /** \brief [31:0] Destination Address (rw) */
} Ifx_CBS_ICTTA_Bits;

/** Internal Mode Status and Control Register */
typedef struct
{
    unsigned int SET_CRS: 1;                /** \brief [0:0] Set Read Sync Flag (w) */
    unsigned int SET_CWS: 1;                /** \brief [1:1] Set Write Sync Flag (w) */
    unsigned int SET_CS: 1;                 /** \brief [2:2] Set Communication Synchronization Flag (w) */
    unsigned int CLR_CS: 1;                 /** \brief [3:3] Clear Communication Synchronization Flag (w) */
    unsigned int CHANNEL_P: 1;              /** \brief [4:4] CHANNEL Write Protection (w) */
    unsigned int CHANNEL: 3;                /** \brief [7:5] Channel Indication (rw) */
    unsigned int reserved_8: 8;
    unsigned int SET_INT_MOD: 1;            /** \brief [16:16] Enter Internal Mode (w) */
    unsigned int reserved_17: 1;
    unsigned int SET_INT_TRC: 1;            /** \brief [18:18] Enable Internally Controlled Triggered Transfer (w) */
    unsigned int CLR_INT_TRC: 1;            /** \brief [19:19] Disable Internally Controlled Triggered Transfer (w) */
    unsigned int TRC_MOD_P: 1;              /** \brief [20:20] TRC_MOD Write Protection (w) */
    unsigned int TRC_MOD: 2;                /** \brief [22:21] Data Size Definition for Triggered Transfer (rw) */
    unsigned int reserved_23: 1;
    unsigned int INT_MOD: 1;                /** \brief [24:24] Internal Mode Enabled Flag (rh) */
    unsigned int INT_TRC: 1;                /** \brief [25:25] Internally Controlled Triggered Transfer Enable (rh) */
    unsigned int reserved_26: 6;
} Ifx_CBS_INTMOD_Bits;

/** IOClient Status and Control Register */
typedef struct
{
    unsigned int reserved_0: 4;
    unsigned int CRSYNC: 1;                 /** \brief [4:4] Communication Mode Read Sync Flag (rh) */
    unsigned int CWSYNC: 1;                 /** \brief [5:5] Communication Mode Write Sync Flag (rh) */
    unsigned int CW_ACK: 1;                 /** \brief [6:6] Communication Mode Write Acknowledge (w) */
    unsigned int COM_SYNC: 1;               /** \brief [7:7] Communication Mode Synchronization Flag (rh) */
    unsigned int HOSTED: 1;                 /** \brief [8:8] Tool Interface in Use (rh) */
    unsigned int reserved_9: 3;
    unsigned int CHANNEL: 3;                /** \brief [14:12] Channel Indication (rh) */
    unsigned int reserved_15: 17;
} Ifx_CBS_IOSR_Bits;

/** Module Identification Register */
typedef struct
{
    unsigned int MODREV: 8;                 /** \brief [7:0] Module Revision Number (r) */
    unsigned int MODTYPE: 8;                /** \brief [15:8] Module Type (r) */
    unsigned int MODNUMBER: 16;             /** \brief [31:16] Module Number Value (r) */
} Ifx_CBS_JDPID_Bits;

/** JTAG Device Identification Register */
typedef struct
{
    unsigned int JTAG_ID: 32;               /** \brief [31:0] JTAG Device ID (rw) */
} Ifx_CBS_JTAGID_Bits;

/** OSCU Control Register */
typedef struct
{
    unsigned int OC0_P: 1;                  /** \brief [0:0] OCx Write Protection (w) */
    unsigned int OC0: 1;                    /** \brief [1:1] Set/Clear OCDS Control Bits Bus Domain (w) */
    unsigned int OC1_P: 1;                  /** \brief [2:2] OCx Write Protection (w) */
    unsigned int OC1: 1;                    /** \brief [3:3] Set/Clear OCDS Control Bits Bus Domain (w) */
    unsigned int OC2_P: 1;                  /** \brief [4:4] OCx Write Protection (w) */
    unsigned int OC2: 1;                    /** \brief [5:5] Set/Clear OCDS Control Bits Bus Domain (w) */
    unsigned int OC3_P: 1;                  /** \brief [6:6] OCx Write Protection (w) */
    unsigned int OC3: 1;                    /** \brief [7:7] Set/Clear OCDS Control Bits Bus Domain (w) */
    unsigned int OC4_P: 1;                  /** \brief [8:8] OCx Write Protection (w) */
    unsigned int OC4: 1;                    /** \brief [9:9] Set/Clear OCDS Control Bits Bus Domain (w) */
    unsigned int OC5_P: 1;                  /** \brief [10:10] OCx Write Protection (w) */
    unsigned int OC5: 1;                    /** \brief [11:11] Set/Clear OCDS Control Bits Bus Domain (w) */
    unsigned int WDTSUS_P: 1;               /** \brief [12:12] WDTSUS Write Protection (w) */
    unsigned int WDTSUS: 1;                 /** \brief [13:13] Set/Clear Watchdog Timer Suspension Control (w) */
    unsigned int STABLE_P: 1;               /** \brief [14:14] STABLE Write Protection (w) */
    unsigned int STABLE: 1;                 /** \brief [15:15] Initialize Application Reset Indication (w) */
    unsigned int OJC0_P: 1;                 /** \brief [16:16] OJCx Write Protection (w) */
    unsigned int OJC0: 1;                   /** \brief [17:17] Set/Clear OCDS Control Bits IOClient Domain (w) */
    unsigned int OJC1_P: 1;                 /** \brief [18:18] OJCx Write Protection (w) */
    unsigned int OJC1: 1;                   /** \brief [19:19] Set/Clear OCDS Control Bits IOClient Domain (w) */
    unsigned int OJC2_P: 1;                 /** \brief [20:20] OJCx Write Protection (w) */
    unsigned int OJC2: 1;                   /** \brief [21:21] Set/Clear OCDS Control Bits IOClient Domain (w) */
    unsigned int OJC3_P: 1;                 /** \brief [22:22] OJCx Write Protection (w) */
    unsigned int OJC3: 1;                   /** \brief [23:23] Set/Clear OCDS Control Bits IOClient Domain (w) */
    unsigned int OJC4_P: 1;                 /** \brief [24:24] OJCx Write Protection (w) */
    unsigned int OJC4: 1;                   /** \brief [25:25] Set/Clear OCDS Control Bits IOClient Domain (w) */
    unsigned int OJC5_P: 1;                 /** \brief [26:26] OJCx Write Protection (w) */
    unsigned int OJC5: 1;                   /** \brief [27:27] Set/Clear OCDS Control Bits IOClient Domain (w) */
    unsigned int OJC6_P: 1;                 /** \brief [28:28] OJCx Write Protection (w) */
    unsigned int OJC6: 1;                   /** \brief [29:29] Set/Clear OCDS Control Bits IOClient Domain (w) */
    unsigned int OJC7_P: 1;                 /** \brief [30:30] OJCx Write Protection (w) */
    unsigned int OJC7: 1;                   /** \brief [31:31] Set/Clear OCDS Control Bits IOClient Domain (w) */
} Ifx_CBS_OCNTRL_Bits;

/** OCDS Enable Control Register */
typedef struct
{
    unsigned int PAT: 8;                    /** \brief [7:0] OCDS Enabling Pattern (w) */
    unsigned int DS: 1;                     /** \brief [8:8] Disable OCDS (w) */
    unsigned int reserved_9: 7;
    unsigned int IF_LCK_P: 1;               /** \brief [16:16] IF_LCK Write Protection (w) */
    unsigned int IF_LCK: 1;                 /** \brief [17:17] Set/Clear Interface Locked Indication (w) */
    unsigned int AUT_OK_P: 1;               /** \brief [18:18] AUT_OK Write Protection (w) */
    unsigned int AUT_OK: 1;                 /** \brief [19:19] Set/Clear the Authorization OK Indication (w) */
    unsigned int reserved_20: 12;
} Ifx_CBS_OEC_Bits;

/** OCDS Interface Mode Register */
typedef struct
{
    unsigned int DAPMODE: 3;                /** \brief [2:0] DAP Interface Mode (rw) */
    unsigned int DAPRST: 1;                 /** \brief [3:3] DAP Protocol Clear (rwh) */
    unsigned int reserved_4: 4;
    unsigned int F_JTAG: 1;                 /** \brief [8:8] Forced JTAG Mode (dap_bypass_o) (rw) */
    unsigned int N_JTAG: 1;                 /** \brief [9:9] No Switch to JTAG (jtag_disable_o) (rw) */
    unsigned int reserved_10: 22;
} Ifx_CBS_OIFM_Bits;

/** OSCU Status Register */
typedef struct
{
    unsigned int OEN: 1;                    /** \brief [0:0] OCDS Enabled Flag (rh) */
    unsigned int OC0: 1;                    /** \brief [1:1] OCDS Control Bits System Bus Domain (rh) */
    unsigned int OC1: 1;                    /** \brief [2:2] OCDS Control Bits System Bus Domain (rh) */
    unsigned int OC2: 1;                    /** \brief [3:3] OCDS Control Bits System Bus Domain (rh) */
    unsigned int ENIDIS: 1;                 /** \brief [4:4] OCDS ENDINIT Protection Override (rh) */
    unsigned int EECTRC: 1;                 /** \brief [5:5] On Chip Trace Enable (rh) */
    unsigned int EECDIS: 1;                 /** \brief [6:6] Emulation Logic Disable (rh) */
    unsigned int WDTSUS: 1;                 /** \brief [7:7] Control of Watchdog Timer Suspension (rh) */
    unsigned int HARR: 1;                   /** \brief [8:8] Halt after Reset Request (rh) */
    unsigned int OJC1: 1;                   /** \brief [9:9] OCDS Control Bits IOClient Domain (rh) */
    unsigned int OJC2: 1;                   /** \brief [10:10] OCDS Control Bits IOClient Domain (rh) */
    unsigned int OJC3: 1;                   /** \brief [11:11] OCDS Control Bits IOClient Domain (rh) */
    unsigned int RSTCL0: 1;                 /** \brief [12:12] OCDS System Reset (Class 0) Request (rh) */
    unsigned int RSTCL1: 1;                 /** \brief [13:13] OCDS Debug Reset (Class 1) Request (rh) */
    unsigned int OJC6: 1;                   /** \brief [14:14] OCDS Control Bits IOClient Domain (rh) */
    unsigned int RSTCL3: 1;                 /** \brief [15:15] OCDS Application Reset (Class 3) Request (rh) */
    unsigned int IF_LCK: 1;                 /** \brief [16:16] Interface Locked Indication (rh) */
    unsigned int AUT_OK: 1;                 /** \brief [17:17] Authorization OK Indication (rh) */
    unsigned int STABLE: 1;                 /** \brief [18:18] Application Reset Indication (rh) */
    unsigned int reserved_19: 13;
} Ifx_CBS_OSTATE_Bits;

/** TG Capture for Cores - BRKOUT */
typedef struct
{
    unsigned int C0: 1;                     /** \brief [0:0] Capture of BRKOUT signal of CPUx (rh) */
    unsigned int C1: 1;                     /** \brief [1:1] Capture of BRKOUT signal of CPUx (rh) */
    unsigned int C2: 1;                     /** \brief [2:2] Capture of BRKOUT signal of CPUx (rh) */
    unsigned int reserved_3: 28;
    unsigned int HSM: 1;                    /** \brief [31:31] Capture of BRKOUT signal of HSM (rh) */
} Ifx_CBS_TCCB_Bits;

/** TG Capture for Cores - HALT */
typedef struct
{
    unsigned int C0: 1;                     /** \brief [0:0] Capture of HALT signal of CPUx (rh) */
    unsigned int C1: 1;                     /** \brief [1:1] Capture of HALT signal of CPUx (rh) */
    unsigned int C2: 1;                     /** \brief [2:2] Capture of HALT signal of CPUx (rh) */
    unsigned int reserved_3: 28;
    unsigned int HSM: 1;                    /** \brief [31:31] Capture of HALT signal of HSM (rh) */
} Ifx_CBS_TCCH_Bits;

/** TG Capture for TG Input Pins */
typedef struct
{
    unsigned int P0: 1;                     /** \brief [0:0] Capture of Trigger Input Pin x (rh) */
    unsigned int P1: 1;                     /** \brief [1:1] Capture of Trigger Input Pin x (rh) */
    unsigned int P2: 1;                     /** \brief [2:2] Capture of Trigger Input Pin x (rh) */
    unsigned int P3: 1;                     /** \brief [3:3] Capture of Trigger Input Pin x (rh) */
    unsigned int reserved_4: 28;
} Ifx_CBS_TCIP_Bits;

/** TG Capture for MCDS */
typedef struct
{
    unsigned int BRK: 1;                    /** \brief [0:0] Capture of MCDS break_out (rh) */
    unsigned int SUS: 1;                    /** \brief [1:1] Capture of MCDS suspend_out (rh) */
    unsigned int reserved_2: 6;
    unsigned int T0: 1;                     /** \brief [8:8] Capture of MCDS trig_out x (rh) */
    unsigned int T1: 1;                     /** \brief [9:9] Capture of MCDS trig_out x (rh) */
    unsigned int T2: 1;                     /** \brief [10:10] Capture of MCDS trig_out x (rh) */
    unsigned int T3: 1;                     /** \brief [11:11] Capture of MCDS trig_out x (rh) */
    unsigned int reserved_12: 20;
} Ifx_CBS_TCM_Bits;

/** TG Capture for OTGB0/1 */
typedef struct
{
    unsigned int OTGB0: 16;                 /** \brief [15:0] Capture Bits for OTGB0 (rh) */
    unsigned int OTGB1: 16;                 /** \brief [31:16] Capture Bits for OTGB1 (rh) */
} Ifx_CBS_TCTGB_Bits;

/** TG Capture for TG Lines */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int TL1: 1;                    /** \brief [1:1] Capture of Trigger Line x (rh) */
    unsigned int TL2: 1;                    /** \brief [2:2] Capture of Trigger Line x (rh) */
    unsigned int TL3: 1;                    /** \brief [3:3] Capture of Trigger Line x (rh) */
    unsigned int TL4: 1;                    /** \brief [4:4] Capture of Trigger Line x (rh) */
    unsigned int TL5: 1;                    /** \brief [5:5] Capture of Trigger Line x (rh) */
    unsigned int TL6: 1;                    /** \brief [6:6] Capture of Trigger Line x (rh) */
    unsigned int TL7: 1;                    /** \brief [7:7] Capture of Trigger Line x (rh) */
    unsigned int reserved_8: 24;
} Ifx_CBS_TCTL_Bits;

/** TG Input Pins Routing */
typedef struct
{
    unsigned int PIN0: 4;                   /** \brief [3:0] Trigger Pin x to Trigger Line Routing (rw) */
    unsigned int PIN1: 4;                   /** \brief [7:4] Trigger Pin x to Trigger Line Routing (rw) */
    unsigned int PIN2: 4;                   /** \brief [11:8] Trigger Pin x to Trigger Line Routing (rw) */
    unsigned int PIN3: 4;                   /** \brief [15:12] Trigger Pin x to Trigger Line Routing (rw) */
    unsigned int PIN4: 4;                   /** \brief [19:16] Trigger Pin x to Trigger Line Routing (rw) */
    unsigned int PIN5: 4;                   /** \brief [23:20] Trigger Pin x to Trigger Line Routing (rw) */
    unsigned int PIN6: 4;                   /** \brief [27:24] Trigger Pin x to Trigger Line Routing (rw) */
    unsigned int PIN7: 4;                   /** \brief [31:28] Trigger Pin x to Trigger Line Routing (rw) */
} Ifx_CBS_TIPR_Bits;

/** TG Line 1 Suspend Targets */
typedef struct
{
    unsigned int C0: 1;                     /** \brief [0:0] CPUx as Suspend Target (rw) */
    unsigned int C1: 1;                     /** \brief [1:1] CPUx as Suspend Target (rw) */
    unsigned int C2: 1;                     /** \brief [2:2] CPUx as Suspend Target (rw) */
    unsigned int reserved_3: 26;
    unsigned int SDM: 1;                    /** \brief [29:29] SDMA as Suspend Target (rw) */
    unsigned int DM: 1;                     /** \brief [30:30] DMA as Suspend Target (rw) */
    unsigned int HSM: 1;                    /** \brief [31:31] HSM as Suspend Target (rw) */
} Ifx_CBS_TL1ST_Bits;

/** TG Line Control */
typedef struct
{
    unsigned int reserved_0: 4;
    unsigned int TLSP1: 4;                  /** \brief [7:4] TG Line Signal Processing (rw) */
    unsigned int TLSP2: 4;                  /** \brief [11:8] TG Line Signal Processing (rw) */
    unsigned int TLSP3: 4;                  /** \brief [15:12] TG Line Signal Processing (rw) */
    unsigned int TLSP4: 4;                  /** \brief [19:16] TG Line Signal Processing (rw) */
    unsigned int TLSP5: 4;                  /** \brief [23:20] TG Line Signal Processing (rw) */
    unsigned int TLSP6: 4;                  /** \brief [27:24] TG Line Signal Processing (rw) */
    unsigned int TLSP7: 4;                  /** \brief [31:28] TG Line Signal Processing (rw) */
} Ifx_CBS_TLC_Bits;

/** TG Line Counter Control */
typedef struct
{
    unsigned int TGL: 4;                    /** \brief [3:0] Trigger Line to Counter Routing (rw) */
    unsigned int LE: 3;                     /** \brief [6:4] Level or Edge Counting (rw) */
    unsigned int reserved_7: 1;
    unsigned int CLR: 2;                    /** \brief [9:8] Clear and Enable Counter(s) (w) */
    unsigned int reserved_10: 2;
    unsigned int STOP: 2;                   /** \brief [13:12] Stop Counter(s) (w) */
    unsigned int reserved_14: 18;
} Ifx_CBS_TLCC_Bits;

/** TG Line Capture and Hold Enable */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int TL1: 1;                    /** \brief [1:1] Capture and Hold Enable for Trigger Line x (rw) */
    unsigned int TL2: 1;                    /** \brief [2:2] Capture and Hold Enable for Trigger Line x (rw) */
    unsigned int TL3: 1;                    /** \brief [3:3] Capture and Hold Enable for Trigger Line x (rw) */
    unsigned int reserved_4: 28;
} Ifx_CBS_TLCHE_Bits;

/** TG Line Capture and Hold Clear */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int TL1: 1;                    /** \brief [1:1] Capture and Hold Clear for Trigger Line x (w) */
    unsigned int TL2: 1;                    /** \brief [2:2] Capture and Hold Clear for Trigger Line x (w) */
    unsigned int TL3: 1;                    /** \brief [3:3] Capture and Hold Clear for Trigger Line x (w) */
    unsigned int reserved_4: 28;
} Ifx_CBS_TLCHS_Bits;

/** TG Line Counter Value */
typedef struct
{
    unsigned int CV: 31;                    /** \brief [30:0] Count Value (rh) */
    unsigned int SO: 1;                     /** \brief [31:31] Sticky Overflow Bit (rh) */
} Ifx_CBS_TLCV_Bits;

/** TG Line State */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int TL1: 1;                    /** \brief [1:1] Current State of Trigger Line x (rh) */
    unsigned int TL2: 1;                    /** \brief [2:2] Current State of Trigger Line x (rh) */
    unsigned int TL3: 1;                    /** \brief [3:3] Current State of Trigger Line x (rh) */
    unsigned int TL4: 1;                    /** \brief [4:4] Current State of Trigger Line x (rh) */
    unsigned int TL5: 1;                    /** \brief [5:5] Current State of Trigger Line x (rh) */
    unsigned int TL6: 1;                    /** \brief [6:6] Current State of Trigger Line x (rh) */
    unsigned int TL7: 1;                    /** \brief [7:7] Current State of Trigger Line x (rh) */
    unsigned int reserved_8: 24;
} Ifx_CBS_TLS_Bits;

/** TG Line Timer */
typedef struct
{
    unsigned int TGL: 4;                    /** \brief [3:0] Timer to Trigger Line Routing (rw) */
    unsigned int VTZ: 1;                    /** \brief [4:4] TG Line Value when Timer Value is Zero (rw) */
    unsigned int reserved_5: 11;
    unsigned int TIM: 16;                   /** \brief [31:16] Timer Value (rwh) */
} Ifx_CBS_TLT_Bits;

/** TG Lines for Trigger to Host */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int TL1: 2;                    /** \brief [3:2] TG Line Enabling for Trigger to Host (TRIG) (rw) */
    unsigned int TL2: 2;                    /** \brief [5:4] TG Line Enabling for Trigger to Host (TRIG) (rw) */
    unsigned int TL3: 2;                    /** \brief [7:6] TG Line Enabling for Trigger to Host (TRIG) (rw) */
    unsigned int TL4: 2;                    /** \brief [9:8] TG Line Enabling for Trigger to Host (TRIG) (rw) */
    unsigned int TL5: 2;                    /** \brief [11:10] TG Line Enabling for Trigger to Host (TRIG) (rw) */
    unsigned int TL6: 2;                    /** \brief [13:12] TG Line Enabling for Trigger to Host (TRIG) (rw) */
    unsigned int TL7: 2;                    /** \brief [15:14] TG Line Enabling for Trigger to Host (TRIG) (rw) */
    unsigned int reserved_16: 16;
} Ifx_CBS_TLTTH_Bits;

/** TG Output Pins Pulse Stretcher */
typedef struct
{
    unsigned int PIN0: 2;                   /** \brief [1:0] Pulse Stretch Control for Trigger Pin x (rw) */
    unsigned int PIN1: 2;                   /** \brief [3:2] Pulse Stretch Control for Trigger Pin x (rw) */
    unsigned int PIN2: 2;                   /** \brief [5:4] Pulse Stretch Control for Trigger Pin x (rw) */
    unsigned int PIN3: 2;                   /** \brief [7:6] Pulse Stretch Control for Trigger Pin x (rw) */
    unsigned int PIN4: 2;                   /** \brief [9:8] Pulse Stretch Control for Trigger Pin x (rw) */
    unsigned int PIN5: 2;                   /** \brief [11:10] Pulse Stretch Control for Trigger Pin x (rw) */
    unsigned int PIN6: 2;                   /** \brief [13:12] Pulse Stretch Control for Trigger Pin x (rw) */
    unsigned int PIN7: 2;                   /** \brief [15:14] Pulse Stretch Control for Trigger Pin x (rw) */
    unsigned int reserved_16: 16;
} Ifx_CBS_TOPPS_Bits;

/** TG Output Pins Routing */
typedef struct
{
    unsigned int PIN0: 4;                   /** \brief [3:0] Trigger Line to Trigger Pin x Routing (rw) */
    unsigned int PIN1: 4;                   /** \brief [7:4] Trigger Line to Trigger Pin x Routing (rw) */
    unsigned int PIN2: 4;                   /** \brief [11:8] Trigger Line to Trigger Pin x Routing (rw) */
    unsigned int PIN3: 4;                   /** \brief [15:12] Trigger Line to Trigger Pin x Routing (rw) */
    unsigned int PIN4: 4;                   /** \brief [19:16] Trigger Line to Trigger Pin x Routing (rw) */
    unsigned int PIN5: 4;                   /** \brief [23:20] Trigger Line to Trigger Pin x Routing (rw) */
    unsigned int PIN6: 4;                   /** \brief [27:24] Trigger Line to Trigger Pin x Routing (rw) */
    unsigned int PIN7: 4;                   /** \brief [31:28] Trigger Line to Trigger Pin x Routing (rw) */
} Ifx_CBS_TOPR_Bits;

/** TG Routing for CPU */
typedef struct
{
    unsigned int HALT: 4;                   /** \brief [3:0] HALT to Trigger Line Routing (rw) */
    unsigned int BRKOUT: 4;                 /** \brief [7:4] BRKOUT to Trigger Line Routing (rw) */
    unsigned int BT1: 1;                    /** \brief [8:8] BRKOUT to Trigger Line 1 Routing (rw) */
    unsigned int reserved_9: 11;
    unsigned int BRKIN: 4;                  /** \brief [23:20] Trigger Line to BRKIN Routing (rw) */
    unsigned int SUSIN: 4;                  /** \brief [27:24] Trigger Line to SUSIN Routing (rw) */
    unsigned int reserved_28: 4;
} Ifx_CBS_TRC_Bits;

/** TG Routing Events of CPU */
typedef struct
{
    unsigned int TR0EV: 4;                  /** \brief [3:0] TRxEVT to Trigger Line Routing (rw) */
    unsigned int reserved_4: 4;
    unsigned int TR2EV: 4;                  /** \brief [11:8] TRxEVT to Trigger Line Routing (rw) */
    unsigned int reserved_12: 4;
    unsigned int TR4EV: 4;                  /** \brief [19:16] TRxEVT to Trigger Line Routing (rw) */
    unsigned int reserved_20: 4;
    unsigned int TR6EV: 4;                  /** \brief [27:24] TRxEVT to Trigger Line Routing (rw) */
    unsigned int reserved_28: 4;
} Ifx_CBS_TREC_Bits;

/** TG Routing for HSM Control */
typedef struct
{
    unsigned int HALT: 4;                   /** \brief [3:0] HALT to Trigger Line Routing (rw) */
    unsigned int BRKOUT: 4;                 /** \brief [7:4] BRKOUT to Trigger Line Routing (rw) */
    unsigned int BT1: 1;                    /** \brief [8:8] BRKOUT to Trigger Line 1 Routing (rw) */
    unsigned int reserved_9: 11;
    unsigned int BRKIN: 4;                  /** \brief [23:20] Trigger Line to BRKIN Routing (rw) */
    unsigned int SUSIN: 4;                  /** \brief [27:24] Trigger Line to SUSIN Routing (rw) */
    unsigned int reserved_28: 4;
} Ifx_CBS_TRHSM_Bits;

/** Trigger to Host Register */
typedef struct
{
    unsigned int TRGx_0: 1;                 /** \brief [0:0] Service Request Bits (rh) */
    unsigned int TRGx_1: 1;                 /** \brief [1:1] Service Request Bits (rh) */
    unsigned int TRGx_2: 1;                 /** \brief [2:2] Service Request Bits (rh) */
    unsigned int TRGx_3: 1;                 /** \brief [3:3] Service Request Bits (rh) */
    unsigned int TRGx_4: 1;                 /** \brief [4:4] Service Request Bits (rh) */
    unsigned int TRGx_5: 1;                 /** \brief [5:5] Service Request Bits (rh) */
    unsigned int TRGx_6: 1;                 /** \brief [6:6] Service Request Bits (rh) */
    unsigned int TRGx_7: 1;                 /** \brief [7:7] Service Request Bits (rh) */
    unsigned int TRGx_8: 1;                 /** \brief [8:8] Service Request Bits (rh) */
    unsigned int TRGx_9: 1;                 /** \brief [9:9] Service Request Bits (rh) */
    unsigned int TRGx_10: 1;                /** \brief [10:10] Service Request Bits (rh) */
    unsigned int TRGx_11: 1;                /** \brief [11:11] Service Request Bits (rh) */
    unsigned int TRGx_12: 1;                /** \brief [12:12] Service Request Bits (rh) */
    unsigned int TRGx_13: 1;                /** \brief [13:13] Service Request Bits (rh) */
    unsigned int TRGx_14: 1;                /** \brief [14:14] Service Request Bits (rh) */
    unsigned int TRGx_15: 1;                /** \brief [15:15] Service Request Bits (rh) */
    unsigned int TRGx_16: 1;                /** \brief [16:16] Service Request Bits (rh) */
    unsigned int TRGx_17: 1;                /** \brief [17:17] Service Request Bits (rh) */
    unsigned int TRGx_18: 1;                /** \brief [18:18] Service Request Bits (rh) */
    unsigned int TRGx_19: 1;                /** \brief [19:19] Service Request Bits (rh) */
    unsigned int TRGx_20: 1;                /** \brief [20:20] Service Request Bits (rh) */
    unsigned int TRGx_21: 1;                /** \brief [21:21] Service Request Bits (rh) */
    unsigned int TRGx_22: 1;                /** \brief [22:22] Service Request Bits (rh) */
    unsigned int TRGx_23: 1;                /** \brief [23:23] Service Request Bits (rh) */
    unsigned int x: 8;                      /** \brief [31:24] TRIG register number (rh) */
} Ifx_CBS_TRIG_Bits;

/** Clear Trigger to Host Register */
typedef struct
{
    unsigned int TRGx_0: 1;                 /** \brief [0:0] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_1: 1;                 /** \brief [1:1] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_2: 1;                 /** \brief [2:2] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_3: 1;                 /** \brief [3:3] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_4: 1;                 /** \brief [4:4] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_5: 1;                 /** \brief [5:5] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_6: 1;                 /** \brief [6:6] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_7: 1;                 /** \brief [7:7] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_8: 1;                 /** \brief [8:8] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_9: 1;                 /** \brief [9:9] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_10: 1;                /** \brief [10:10] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_11: 1;                /** \brief [11:11] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_12: 1;                /** \brief [12:12] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_13: 1;                /** \brief [13:13] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_14: 1;                /** \brief [14:14] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_15: 1;                /** \brief [15:15] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_16: 1;                /** \brief [16:16] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_17: 1;                /** \brief [17:17] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_18: 1;                /** \brief [18:18] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_19: 1;                /** \brief [19:19] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_20: 1;                /** \brief [20:20] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_21: 1;                /** \brief [21:21] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_22: 1;                /** \brief [22:22] Request Bits of most important register TRIGx (rh) */
    unsigned int TRGx_23: 1;                /** \brief [23:23] Request Bits of most important register TRIGx (rh) */
    unsigned int x: 8;                      /** \brief [31:24] Index of most important register TRIGx (rh) */
} Ifx_CBS_TRIGC_Bits;

/** Set Trigger to Host Register */
typedef struct
{
    unsigned int BITNUM: 13;                /** \brief [12:0] Service Request Bit Number to Set (w) */
    unsigned int reserved_13: 19;
} Ifx_CBS_TRIGS_Bits;

/** TG Routing for MCDS Control */
typedef struct
{
    unsigned int reserved_0: 4;
    unsigned int BRKOUT: 4;                 /** \brief [7:4] MCDS break_out to Trigger Line Routing (rw) */
    unsigned int SUSOUT: 4;                 /** \brief [11:8] MCDS suspend_out to Trigger Line Routing (rw) */
    unsigned int reserved_12: 8;
    unsigned int BRKIN: 4;                  /** \brief [23:20] Trigger Line to MCDS break_in Routing (rw) */
    unsigned int reserved_24: 8;
} Ifx_CBS_TRMC_Bits;

/** TG Routing for MCDS Triggers */
typedef struct
{
    unsigned int TG0: 4;                    /** \brief [3:0] MCDS trig_out x to Trigger Line Routing (rw) */
    unsigned int TG1: 4;                    /** \brief [7:4] MCDS trig_out x to Trigger Line Routing (rw) */
    unsigned int TG2: 4;                    /** \brief [11:8] MCDS trig_out x to Trigger Line Routing (rw) */
    unsigned int TG3: 4;                    /** \brief [15:12] MCDS trig_out x to Trigger Line Routing (rw) */
    unsigned int reserved_16: 16;
} Ifx_CBS_TRMT_Bits;

/** TG Routing for Special Signals */
typedef struct
{
    unsigned int TT: 4;                     /** \brief [3:0] Trigger Line to Cerberus’ Triggered Transfer Routing (rw) */
    unsigned int reserved_4: 12;
    unsigned int SRC0: 4;                   /** \brief [19:16] Trigger Line to SRCx Interrupt Routing (rw) */
    unsigned int SRC1: 4;                   /** \brief [23:20] Trigger Line to SRCx Interrupt Routing (rw) */
    unsigned int reserved_24: 8;
} Ifx_CBS_TRSS_Bits;

/** TG Routing for OTGB Bits [15:8] */
typedef struct
{
    unsigned int TG8: 4;                    /** \brief [3:0]  (rw) */
    unsigned int TG9: 4;                    /** \brief [7:4]  (rw) */
    unsigned int TG10: 4;                   /** \brief [11:8]  (rw) */
    unsigned int TG11: 4;                   /** \brief [15:12]  (rw) */
    unsigned int TG12: 4;                   /** \brief [19:16]  (rw) */
    unsigned int TG13: 4;                   /** \brief [23:20]  (rw) */
    unsigned int TG14: 4;                   /** \brief [27:24]  (rw) */
    unsigned int TG15: 4;                   /** \brief [31:28]  (rw) */
} Ifx_CBS_TRTGB_H_Bits;

/** TG Routing for OTGB Bits [7:0] */
typedef struct
{
    unsigned int TG0: 4;                    /** \brief [3:0]  (rw) */
    unsigned int TG1: 4;                    /** \brief [7:4]  (rw) */
    unsigned int TG2: 4;                    /** \brief [11:8]  (rw) */
    unsigned int TG3: 4;                    /** \brief [15:12]  (rw) */
    unsigned int TG4: 4;                    /** \brief [19:16]  (rw) */
    unsigned int TG5: 4;                    /** \brief [23:20]  (rw) */
    unsigned int TG6: 4;                    /** \brief [27:24]  (rw) */
    unsigned int TG7: 4;                    /** \brief [31:28]  (rw) */
} Ifx_CBS_TRTGB_L_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Communication Mode Data Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_COMDATA_Bits B;
} Ifx_CBS_COMDATA;

/** Internally Controlled Trace Source Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_ICTSA_Bits B;
} Ifx_CBS_ICTSA;

/** Internally Controlled Trace Destination Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_ICTTA_Bits B;
} Ifx_CBS_ICTTA;

/** Internal Mode Status and Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_INTMOD_Bits B;
} Ifx_CBS_INTMOD;

/** IOClient Status and Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_IOSR_Bits B;
} Ifx_CBS_IOSR;

/** Module Identification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_JDPID_Bits B;
} Ifx_CBS_JDPID;

/** JTAG Device Identification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_JTAGID_Bits B;
} Ifx_CBS_JTAGID;

/** OSCU Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_OCNTRL_Bits B;
} Ifx_CBS_OCNTRL;

/** OCDS Enable Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_OEC_Bits B;
} Ifx_CBS_OEC;

/** OCDS Interface Mode Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_OIFM_Bits B;
} Ifx_CBS_OIFM;

/** OSCU Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_OSTATE_Bits B;
} Ifx_CBS_OSTATE;

/** TG Capture for Cores - BRKOUT */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TCCB_Bits B;
} Ifx_CBS_TCCB;

/** TG Capture for Cores - HALT */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TCCH_Bits B;
} Ifx_CBS_TCCH;

/** TG Capture for TG Input Pins */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TCIP_Bits B;
} Ifx_CBS_TCIP;

/** TG Capture for MCDS */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TCM_Bits B;
} Ifx_CBS_TCM;

/** TG Capture for OTGB0/1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TCTGB_Bits B;
} Ifx_CBS_TCTGB;

/** TG Capture for TG Lines */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TCTL_Bits B;
} Ifx_CBS_TCTL;

/** TG Input Pins Routing */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TIPR_Bits B;
} Ifx_CBS_TIPR;

/** TG Line 1 Suspend Targets */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TL1ST_Bits B;
} Ifx_CBS_TL1ST;

/** TG Line Control */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TLC_Bits B;
} Ifx_CBS_TLC;

/** TG Line Counter Control */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TLCC_Bits B;
} Ifx_CBS_TLCC;

/** TG Line Capture and Hold Enable */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TLCHE_Bits B;
} Ifx_CBS_TLCHE;

/** TG Line Capture and Hold Clear */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TLCHS_Bits B;
} Ifx_CBS_TLCHS;

/** TG Line Counter Value */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TLCV_Bits B;
} Ifx_CBS_TLCV;

/** TG Line State */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TLS_Bits B;
} Ifx_CBS_TLS;

/** TG Line Timer */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TLT_Bits B;
} Ifx_CBS_TLT;

/** TG Lines for Trigger to Host */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TLTTH_Bits B;
} Ifx_CBS_TLTTH;

/** TG Output Pins Pulse Stretcher */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TOPPS_Bits B;
} Ifx_CBS_TOPPS;

/** TG Output Pins Routing */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TOPR_Bits B;
} Ifx_CBS_TOPR;

/** TG Routing for CPU */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TRC_Bits B;
} Ifx_CBS_TRC;

/** TG Routing Events of CPU */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TREC_Bits B;
} Ifx_CBS_TREC;

/** TG Routing for HSM Control */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TRHSM_Bits B;
} Ifx_CBS_TRHSM;

/** Trigger to Host Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TRIG_Bits B;
} Ifx_CBS_TRIG;

/** Clear Trigger to Host Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TRIGC_Bits B;
} Ifx_CBS_TRIGC;

/** Set Trigger to Host Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TRIGS_Bits B;
} Ifx_CBS_TRIGS;

/** TG Routing for MCDS Control */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TRMC_Bits B;
} Ifx_CBS_TRMC;

/** TG Routing for MCDS Triggers */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TRMT_Bits B;
} Ifx_CBS_TRMT;

/** TG Routing for Special Signals */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TRSS_Bits B;
} Ifx_CBS_TRSS;

/** TG Routing for OTGB Bits [15:8] */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TRTGB_H_Bits B;
} Ifx_CBS_TRTGB_H;

/** TG Routing for OTGB Bits [7:0] */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CBS_TRTGB_L_Bits B;
} Ifx_CBS_TRTGB_L;

/******************************************************************************/
/*                           Struct (3 - Object L1)                           */
/******************************************************************************/

/** TG Routing for OTGB */
typedef volatile struct
{
    Ifx_CBS_TRTGB_L L;                      /** \brief 0, TG Routing for OTGB Bits [7:0] */
    Ifx_CBS_TRTGB_H H;                      /** \brief 4, TG Routing for OTGB Bits [15:8] */
} Ifx_CBS_TRTGB;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** CBS object */
typedef volatile struct
{
    unsigned char reserved_0[8];            /** \brief 0 */
    Ifx_CBS_JDPID JDPID;                    /** \brief 8, Module Identification Register */
    Ifx_CBS_OIFM OIFM;                      /** \brief C, OCDS Interface Mode Register */
    Ifx_CBS_TIPR TIPR;                      /** \brief 10, TG Input Pins Routing */
    Ifx_CBS_TOPR TOPR;                      /** \brief 14, TG Output Pins Routing */
    Ifx_CBS_TOPPS TOPPS;                    /** \brief 18, TG Output Pins Pulse Stretcher */
    Ifx_CBS_TCIP TCIP;                      /** \brief 1C, TG Capture for TG Input Pins */
    Ifx_CBS_TRC TRC[3];                     /** \brief 20, TG Routing for CPU */
    unsigned char reserved_2C[12];          /** \brief 2C */
    Ifx_CBS_TRHSM TRHSM;                    /** \brief 38, TG Routing for HSM Control */
    Ifx_CBS_TRMC TRMC;                      /** \brief 3C, TG Routing for MCDS Control */
    Ifx_CBS_TLCC TLCC[2];                   /** \brief 40, TG Line Counter Control */
    unsigned char reserved_48[8];           /** \brief 48 */
    Ifx_CBS_TLCV TLCV[2];                   /** \brief 50, TG Line Counter Value */
    unsigned char reserved_58[8];           /** \brief 58 */
    Ifx_CBS_TRSS TRSS;                      /** \brief 60, TG Routing for Special Signals */
    Ifx_CBS_JTAGID JTAGID;                  /** \brief 64, JTAG Device Identification Register */
    Ifx_CBS_COMDATA COMDATA;                /** \brief 68, Communication Mode Data Register */
    Ifx_CBS_IOSR IOSR;                      /** \brief 6C, IOClient Status and Control Register */
    Ifx_CBS_TLS TLS;                        /** \brief 70, TG Line State */
    Ifx_CBS_TCTL TCTL;                      /** \brief 74, TG Capture for TG Lines */
    Ifx_CBS_OEC OEC;                        /** \brief 78, OCDS Enable Control Register */
    Ifx_CBS_OCNTRL OCNTRL;                  /** \brief 7C, OSCU Control Register */
    Ifx_CBS_OSTATE OSTATE;                  /** \brief 80, OSCU Status Register */
    Ifx_CBS_INTMOD INTMOD;                  /** \brief 84, Internal Mode Status and Control Register */
    Ifx_CBS_ICTSA ICTSA;                    /** \brief 88, Internally Controlled Trace Source Register */
    Ifx_CBS_ICTTA ICTTA;                    /** \brief 8C, Internally Controlled Trace Destination Register */
    Ifx_CBS_TLC TLC;                        /** \brief 90, TG Line Control */
    Ifx_CBS_TL1ST TL1ST;                    /** \brief 94, TG Line 1 Suspend Targets */
    Ifx_CBS_TLCHE TLCHE;                    /** \brief 98, TG Line Capture and Hold Enable */
    Ifx_CBS_TLCHS TLCHS;                    /** \brief 9C, TG Line Capture and Hold Clear */
    Ifx_CBS_TRIGS TRIGS;                    /** \brief A0, Set Trigger to Host Register */
    Ifx_CBS_TRIGC TRIGC;                    /** \brief A4, Clear Trigger to Host Register */
    Ifx_CBS_TLT TLT;                        /** \brief A8, TG Line Timer */
    Ifx_CBS_TLTTH TLTTH;                    /** \brief AC, TG Lines for Trigger to Host */
    Ifx_CBS_TCCB TCCB;                      /** \brief B0, TG Capture for Cores - BRKOUT */
    Ifx_CBS_TCCH TCCH;                      /** \brief B4, TG Capture for Cores - HALT */
    Ifx_CBS_TCTGB TCTGB;                    /** \brief B8, TG Capture for OTGB0/1 */
    Ifx_CBS_TCM TCM;                        /** \brief BC, TG Capture for MCDS */
    Ifx_CBS_TREC TREC[3];                   /** \brief C0, TG Routing Events of CPU */
    unsigned char reserved_CC[16];          /** \brief CC */
    Ifx_CBS_TRMT TRMT;                      /** \brief DC, TG Routing for MCDS Triggers */
    Ifx_CBS_TRTGB TRTGB[2];                 /** \brief E0, TG Routing for OTGB */
    unsigned char reserved_F0[16];          /** \brief F0 */
    Ifx_CBS_TRIG TRIG[22];                  /** \brief 100, Trigger to Host Register */
    unsigned char reserved_158[168];        /** \brief 158 */
} Ifx_CBS;
/******************************************************************************/
#endif /* IFXCBS_REGDEF_H */

