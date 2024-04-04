/**
 * \file IfxMsc_regdef.h
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
#ifndef IFXMSC_REGDEF_H
#define IFXMSC_REGDEF_H
/******************************************************************************/
#include "Global/IfxGlobal_regdef.h"

/******************************************************************************/
/*                           Struct (0 - Bitfields)                           */
/******************************************************************************/

/** Access Enable Register 0 */
typedef struct
{
    unsigned int EN0: 1;                    /** \brief [0:0] Access Enable for Master TAG ID n (rw) */
    unsigned int EN1: 1;                    /** \brief [1:1] Access Enable for Master TAG ID n (rw) */
    unsigned int EN2: 1;                    /** \brief [2:2] Access Enable for Master TAG ID n (rw) */
    unsigned int EN3: 1;                    /** \brief [3:3] Access Enable for Master TAG ID n (rw) */
    unsigned int EN4: 1;                    /** \brief [4:4] Access Enable for Master TAG ID n (rw) */
    unsigned int EN5: 1;                    /** \brief [5:5] Access Enable for Master TAG ID n (rw) */
    unsigned int EN6: 1;                    /** \brief [6:6] Access Enable for Master TAG ID n (rw) */
    unsigned int EN7: 1;                    /** \brief [7:7] Access Enable for Master TAG ID n (rw) */
    unsigned int EN8: 1;                    /** \brief [8:8] Access Enable for Master TAG ID n (rw) */
    unsigned int EN9: 1;                    /** \brief [9:9] Access Enable for Master TAG ID n (rw) */
    unsigned int EN10: 1;                   /** \brief [10:10] Access Enable for Master TAG ID n (rw) */
    unsigned int EN11: 1;                   /** \brief [11:11] Access Enable for Master TAG ID n (rw) */
    unsigned int EN12: 1;                   /** \brief [12:12] Access Enable for Master TAG ID n (rw) */
    unsigned int EN13: 1;                   /** \brief [13:13] Access Enable for Master TAG ID n (rw) */
    unsigned int EN14: 1;                   /** \brief [14:14] Access Enable for Master TAG ID n (rw) */
    unsigned int EN15: 1;                   /** \brief [15:15] Access Enable for Master TAG ID n (rw) */
    unsigned int EN16: 1;                   /** \brief [16:16] Access Enable for Master TAG ID n (rw) */
    unsigned int EN17: 1;                   /** \brief [17:17] Access Enable for Master TAG ID n (rw) */
    unsigned int EN18: 1;                   /** \brief [18:18] Access Enable for Master TAG ID n (rw) */
    unsigned int EN19: 1;                   /** \brief [19:19] Access Enable for Master TAG ID n (rw) */
    unsigned int EN20: 1;                   /** \brief [20:20] Access Enable for Master TAG ID n (rw) */
    unsigned int EN21: 1;                   /** \brief [21:21] Access Enable for Master TAG ID n (rw) */
    unsigned int EN22: 1;                   /** \brief [22:22] Access Enable for Master TAG ID n (rw) */
    unsigned int EN23: 1;                   /** \brief [23:23] Access Enable for Master TAG ID n (rw) */
    unsigned int EN24: 1;                   /** \brief [24:24] Access Enable for Master TAG ID n (rw) */
    unsigned int EN25: 1;                   /** \brief [25:25] Access Enable for Master TAG ID n (rw) */
    unsigned int EN26: 1;                   /** \brief [26:26] Access Enable for Master TAG ID n (rw) */
    unsigned int EN27: 1;                   /** \brief [27:27] Access Enable for Master TAG ID n (rw) */
    unsigned int EN28: 1;                   /** \brief [28:28] Access Enable for Master TAG ID n (rw) */
    unsigned int EN29: 1;                   /** \brief [29:29] Access Enable for Master TAG ID n (rw) */
    unsigned int EN30: 1;                   /** \brief [30:30] Access Enable for Master TAG ID n (rw) */
    unsigned int EN31: 1;                   /** \brief [31:31] Access Enable for Master TAG ID n (rw) */
} Ifx_MSC_ACCEN0_Bits;

/** Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_MSC_ACCEN1_Bits;

/** Downstream Command Register */
typedef struct
{
    unsigned int DCL: 16;                   /** \brief [15:0] Downstream Command for SRL Shift Register (rw) */
    unsigned int DCH: 16;                   /** \brief [31:16] Downstream Command for SRH Shift Register (rw) */
} Ifx_MSC_DC_Bits;

/** Downstream Data Register */
typedef struct
{
    unsigned int DDL: 16;                   /** \brief [15:0] Downstream Data for SRL Shift Register (rw) */
    unsigned int DDH: 16;                   /** \brief [31:16] Downstream Data for SRH Shift Register (rw) */
} Ifx_MSC_DD_Bits;

/** Downstream Control Register */
typedef struct
{
    unsigned int TM: 1;                     /** \brief [0:0] Transmission Mode (rw) */
    unsigned int CP: 1;                     /** \brief [1:1] Command Pending (rh) */
    unsigned int DP: 1;                     /** \brief [2:2] Data Pending (rh) */
    unsigned int NDBL: 5;                   /** \brief [7:3] Number of SRL Bits Shifted at Data Frames (rw) */
    unsigned int NDBH: 5;                   /** \brief [12:8] Number of SRH Bits Shifted at Data Frames (rw) */
    unsigned int ENSELL: 1;                 /** \brief [13:13] Enable SRL Active Phase Selection Bit (rw) */
    unsigned int ENSELH: 1;                 /** \brief [14:14] Enable SRH Active Phase Selection Bit (rw) */
    unsigned int DSDIS: 1;                  /** \brief [15:15] Downstream Disable (rh) */
    unsigned int NBC: 6;                    /** \brief [21:16] Number of Bits Shifted at Command Frames (rw) */
    unsigned int reserved_22: 2;
    unsigned int PPD: 5;                    /** \brief [28:24] Passive Phase Length at Data Frames (rw) */
    unsigned int reserved_29: 3;
} Ifx_MSC_DSC_Bits;

/** Downstream Control Enhanced Register 1 */
typedef struct
{
    unsigned int reserved_0: 15;
    unsigned int CCF: 1;                    /** \brief [15:15] Command-Comand Flag (rh) */
    unsigned int INJENP0: 1;                /** \brief [16:16] Injection Enable of the Pin 0 Signal (rw) */
    unsigned int INJPOSP0: 5;               /** \brief [21:17] Injection Position of the Pin 0 Signal (rw) */
    unsigned int reserved_22: 2;
    unsigned int INJENP1: 1;                /** \brief [24:24] Injection Enable of the Pin 1 Signal (rw) */
    unsigned int INJPOSP1: 5;               /** \brief [29:25] Injection Position of the Pin 1 Signal (rw) */
    unsigned int reserved_30: 1;
    unsigned int CDCM: 1;                   /** \brief [31:31] Command-Data-Comand in Data Repetition Mode (rw) */
} Ifx_MSC_DSCE_Bits;

/** Downstream Select Data Source High Register */
typedef struct
{
    unsigned int SH0: 2;                    /** \brief [1:0] Select Source for SRH (rw) */
    unsigned int SH1: 2;                    /** \brief [3:2] Select Source for SRH (rw) */
    unsigned int SH2: 2;                    /** \brief [5:4] Select Source for SRH (rw) */
    unsigned int SH3: 2;                    /** \brief [7:6] Select Source for SRH (rw) */
    unsigned int SH4: 2;                    /** \brief [9:8] Select Source for SRH (rw) */
    unsigned int SH5: 2;                    /** \brief [11:10] Select Source for SRH (rw) */
    unsigned int SH6: 2;                    /** \brief [13:12] Select Source for SRH (rw) */
    unsigned int SH7: 2;                    /** \brief [15:14] Select Source for SRH (rw) */
    unsigned int SH8: 2;                    /** \brief [17:16] Select Source for SRH (rw) */
    unsigned int SH9: 2;                    /** \brief [19:18] Select Source for SRH (rw) */
    unsigned int SH10: 2;                   /** \brief [21:20] Select Source for SRH (rw) */
    unsigned int SH11: 2;                   /** \brief [23:22] Select Source for SRH (rw) */
    unsigned int SH12: 2;                   /** \brief [25:24] Select Source for SRH (rw) */
    unsigned int SH13: 2;                   /** \brief [27:26] Select Source for SRH (rw) */
    unsigned int SH14: 2;                   /** \brief [29:28] Select Source for SRH (rw) */
    unsigned int SH15: 2;                   /** \brief [31:30] Select Source for SRH (rw) */
} Ifx_MSC_DSDSH_Bits;

/** Downstream Select Data Source Low Register */
typedef struct
{
    unsigned int SL0: 2;                    /** \brief [1:0] Select Source for SRL (rw) */
    unsigned int SL1: 2;                    /** \brief [3:2] Select Source for SRL (rw) */
    unsigned int SL2: 2;                    /** \brief [5:4] Select Source for SRL (rw) */
    unsigned int SL3: 2;                    /** \brief [7:6] Select Source for SRL (rw) */
    unsigned int SL4: 2;                    /** \brief [9:8] Select Source for SRL (rw) */
    unsigned int SL5: 2;                    /** \brief [11:10] Select Source for SRL (rw) */
    unsigned int SL6: 2;                    /** \brief [13:12] Select Source for SRL (rw) */
    unsigned int SL7: 2;                    /** \brief [15:14] Select Source for SRL (rw) */
    unsigned int SL8: 2;                    /** \brief [17:16] Select Source for SRL (rw) */
    unsigned int SL9: 2;                    /** \brief [19:18] Select Source for SRL (rw) */
    unsigned int SL10: 2;                   /** \brief [21:20] Select Source for SRL (rw) */
    unsigned int SL11: 2;                   /** \brief [23:22] Select Source for SRL (rw) */
    unsigned int SL12: 2;                   /** \brief [25:24] Select Source for SRL (rw) */
    unsigned int SL13: 2;                   /** \brief [27:26] Select Source for SRL (rw) */
    unsigned int SL14: 2;                   /** \brief [29:28] Select Source for SRL (rw) */
    unsigned int SL15: 2;                   /** \brief [31:30] Select Source for SRL (rw) */
} Ifx_MSC_DSDSL_Bits;

/** Downstream Status Register */
typedef struct
{
    unsigned int PFC: 4;                    /** \brief [3:0] Passive Time Frame Counter (rh) */
    unsigned int reserved_4: 4;
    unsigned int NPTF: 4;                   /** \brief [11:8] Number Of Passive Time Frames (rw) */
    unsigned int reserved_12: 4;
    unsigned int DC: 7;                     /** \brief [22:16] Downstream Counter (rh) */
    unsigned int reserved_23: 1;
    unsigned int DFA: 1;                    /** \brief [24:24] Data Frame Active (rh) */
    unsigned int CFA: 1;                    /** \brief [25:25] Command Frame Active (rh) */
    unsigned int reserved_26: 6;
} Ifx_MSC_DSS_Bits;

/** Emergency Stop Register */
typedef struct
{
    unsigned int ENL0: 1;                   /** \brief [0:0] Emergency Stop Enable for Bit x in SRL (rw) */
    unsigned int ENL1: 1;                   /** \brief [1:1] Emergency Stop Enable for Bit x in SRL (rw) */
    unsigned int ENL2: 1;                   /** \brief [2:2] Emergency Stop Enable for Bit x in SRL (rw) */
    unsigned int ENL3: 1;                   /** \brief [3:3] Emergency Stop Enable for Bit x in SRL (rw) */
    unsigned int ENL4: 1;                   /** \brief [4:4] Emergency Stop Enable for Bit x in SRL (rw) */
    unsigned int ENL5: 1;                   /** \brief [5:5] Emergency Stop Enable for Bit x in SRL (rw) */
    unsigned int ENL6: 1;                   /** \brief [6:6] Emergency Stop Enable for Bit x in SRL (rw) */
    unsigned int ENL7: 1;                   /** \brief [7:7] Emergency Stop Enable for Bit x in SRL (rw) */
    unsigned int ENL8: 1;                   /** \brief [8:8] Emergency Stop Enable for Bit x in SRL (rw) */
    unsigned int ENL9: 1;                   /** \brief [9:9] Emergency Stop Enable for Bit x in SRL (rw) */
    unsigned int ENL10: 1;                  /** \brief [10:10] Emergency Stop Enable for Bit x in SRL (rw) */
    unsigned int ENL11: 1;                  /** \brief [11:11] Emergency Stop Enable for Bit x in SRL (rw) */
    unsigned int ENL12: 1;                  /** \brief [12:12] Emergency Stop Enable for Bit x in SRL (rw) */
    unsigned int ENL13: 1;                  /** \brief [13:13] Emergency Stop Enable for Bit x in SRL (rw) */
    unsigned int ENL14: 1;                  /** \brief [14:14] Emergency Stop Enable for Bit x in SRL (rw) */
    unsigned int ENL15: 1;                  /** \brief [15:15] Emergency Stop Enable for Bit x in SRL (rw) */
    unsigned int ENH0: 1;                   /** \brief [16:16] Emergency Stop Enable for Bit x in SRH (rw) */
    unsigned int ENH1: 1;                   /** \brief [17:17] Emergency Stop Enable for Bit x in SRH (rw) */
    unsigned int ENH2: 1;                   /** \brief [18:18] Emergency Stop Enable for Bit x in SRH (rw) */
    unsigned int ENH3: 1;                   /** \brief [19:19] Emergency Stop Enable for Bit x in SRH (rw) */
    unsigned int ENH4: 1;                   /** \brief [20:20] Emergency Stop Enable for Bit x in SRH (rw) */
    unsigned int ENH5: 1;                   /** \brief [21:21] Emergency Stop Enable for Bit x in SRH (rw) */
    unsigned int ENH6: 1;                   /** \brief [22:22] Emergency Stop Enable for Bit x in SRH (rw) */
    unsigned int ENH7: 1;                   /** \brief [23:23] Emergency Stop Enable for Bit x in SRH (rw) */
    unsigned int ENH8: 1;                   /** \brief [24:24] Emergency Stop Enable for Bit x in SRH (rw) */
    unsigned int ENH9: 1;                   /** \brief [25:25] Emergency Stop Enable for Bit x in SRH (rw) */
    unsigned int ENH10: 1;                  /** \brief [26:26] Emergency Stop Enable for Bit x in SRH (rw) */
    unsigned int ENH11: 1;                  /** \brief [27:27] Emergency Stop Enable for Bit x in SRH (rw) */
    unsigned int ENH12: 1;                  /** \brief [28:28] Emergency Stop Enable for Bit x in SRH (rw) */
    unsigned int ENH13: 1;                  /** \brief [29:29] Emergency Stop Enable for Bit x in SRH (rw) */
    unsigned int ENH14: 1;                  /** \brief [30:30] Emergency Stop Enable for Bit x in SRH (rw) */
    unsigned int ENH15: 1;                  /** \brief [31:31] Emergency Stop Enable for Bit x in SRH (rw) */
} Ifx_MSC_ESR_Bits;

/** Fractional Divider Register */
typedef struct
{
    unsigned int STEP: 10;                  /** \brief [9:0] Step Value (rw) */
    unsigned int reserved_10: 1;
    unsigned int SM: 1;                     /** \brief [11:11] Suspend Mode (rw) */
    unsigned int SC: 2;                     /** \brief [13:12] Suspend Control (rw) */
    unsigned int DM: 2;                     /** \brief [15:14] Divider Mode (rw) */
    unsigned int RESULT: 10;                /** \brief [25:16] Result Value (rh) */
    unsigned int reserved_26: 2;
    unsigned int SUSACK: 1;                 /** \brief [28:28] Suspend Mode Acknowledge (rh) */
    unsigned int SUSREQ: 1;                 /** \brief [29:29] Suspend Mode Request (rh) */
    unsigned int ENHW: 1;                   /** \brief [30:30] Enable Hardware Clock Control (rw) */
    unsigned int DISCLK: 1;                 /** \brief [31:31] Disable Clock (rwh) */
} Ifx_MSC_FDR_Bits;

/** Interrupt Control Register */
typedef struct
{
    unsigned int EDIP: 2;                   /** \brief [1:0] Data Frame Interrupt Node Pointer (rw) */
    unsigned int EDIE: 2;                   /** \brief [3:2] Data Frame Interrupt Enable (rw) */
    unsigned int ECIP: 2;                   /** \brief [5:4] Command Frame Interrupt Node Pointer (rw) */
    unsigned int reserved_6: 1;
    unsigned int ECIE: 1;                   /** \brief [7:7] Command Frame Interrupt Enable (rw) */
    unsigned int TFIP: 2;                   /** \brief [9:8] Time Frame Interrupt Pointer (rw) */
    unsigned int reserved_10: 1;
    unsigned int TFIE: 1;                   /** \brief [11:11] Time Frame Interrupt Enable (rw) */
    unsigned int RDIP: 2;                   /** \brief [13:12] Receive Data Interrupt Pointer (rw) */
    unsigned int RDIE: 2;                   /** \brief [15:14] Receive Data Interrupt Enable (rw) */
    unsigned int reserved_16: 16;
} Ifx_MSC_ICR_Bits;

/** Interrupt Set Clear Register */
typedef struct
{
    unsigned int CDEDI: 1;                  /** \brief [0:0] Clear DEDI Flag (w) */
    unsigned int CDECI: 1;                  /** \brief [1:1] Clear DECI Flag (w) */
    unsigned int CDTFI: 1;                  /** \brief [2:2] Clear DTFI Flag (w) */
    unsigned int CURDI: 1;                  /** \brief [3:3] Clear URDI Flag (w) */
    unsigned int CDP: 1;                    /** \brief [4:4] Clear DP Flag (w) */
    unsigned int CCP: 1;                    /** \brief [5:5] Clear CP Flag (w) */
    unsigned int CDDIS: 1;                  /** \brief [6:6] Clear DSDIS Flag (w) */
    unsigned int reserved_7: 9;
    unsigned int SDEDI: 1;                  /** \brief [16:16] Set DEDI Flag (w) */
    unsigned int SDECI: 1;                  /** \brief [17:17] Set DECI Flag (w) */
    unsigned int SDTFI: 1;                  /** \brief [18:18] Set DTFI Flag (w) */
    unsigned int SURDI: 1;                  /** \brief [19:19] Set URDI Flag (w) */
    unsigned int SDP: 1;                    /** \brief [20:20] Set DP Bit (w) */
    unsigned int SCP: 1;                    /** \brief [21:21] Set CP Flag (w) */
    unsigned int SDDIS: 1;                  /** \brief [22:22] Set DSDIS Flag (w) */
    unsigned int reserved_23: 9;
} Ifx_MSC_ISC_Bits;

/** Interrupt Status Register */
typedef struct
{
    unsigned int DEDI: 1;                   /** \brief [0:0] Data Frame Interrupt Flag (rh) */
    unsigned int DECI: 1;                   /** \brief [1:1] Command Frame Interrupt Flag (rh) */
    unsigned int DTFI: 1;                   /** \brief [2:2] Time Frame Interrupt Flag (rh) */
    unsigned int URDI: 1;                   /** \brief [3:3] Receive Data Interrupt Flag (rh) */
    unsigned int reserved_4: 28;
} Ifx_MSC_ISR_Bits;

/** Kernel Reset Register 0 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int RSTSTAT: 1;                /** \brief [1:1] Kernel Reset Status (rh) */
    unsigned int reserved_2: 30;
} Ifx_MSC_KRST0_Bits;

/** Kernel Reset Register 1 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int reserved_1: 31;
} Ifx_MSC_KRST1_Bits;

/** Kernel Reset Status Clear Register */
typedef struct
{
    unsigned int CLR: 1;                    /** \brief [0:0] Kernel Reset Status Clear (w) */
    unsigned int reserved_1: 31;
} Ifx_MSC_KRSTCLR_Bits;

/** Output Control Register */
typedef struct
{
    unsigned int CLP: 1;                    /** \brief [0:0] FCLP Line Polarity (rw) */
    unsigned int SLP: 1;                    /** \brief [1:1] SOP Line Polarity (rw) */
    unsigned int CSLP: 1;                   /** \brief [2:2] Chip Selection Lines Polarity (rw) */
    unsigned int ILP: 1;                    /** \brief [3:3] SDI Line Polarity (rw) */
    unsigned int reserved_4: 4;
    unsigned int CLKCTRL: 1;                /** \brief [8:8] Clock Control (rw) */
    unsigned int CSL: 2;                    /** \brief [10:9] Chip Enable Selection for ENL (rw) */
    unsigned int CSH: 2;                    /** \brief [12:11] Chip Enable Selection for ENH (rw) */
    unsigned int CSC: 2;                    /** \brief [14:13] Chip Enable Selection for ENC (rw) */
    unsigned int reserved_15: 1;
    unsigned int SDISEL: 3;                 /** \brief [18:16] Serial Data Input Selection (rw) */
    unsigned int reserved_19: 13;
} Ifx_MSC_OCR_Bits;

/** OCDS Control and Status */
typedef struct
{
    unsigned int TGS: 2;                    /** \brief [1:0] Trigger Set for OTGB0/1 (rw) */
    unsigned int TGB: 1;                    /** \brief [2:2] OTGB0/1 Bus Select (rw) */
    unsigned int TG_P: 1;                   /** \brief [3:3] TGS, TGB Write Protection (w) */
    unsigned int reserved_4: 20;
    unsigned int SUS: 4;                    /** \brief [27:24] OCDS Suspend Control (rw) */
    unsigned int SUS_P: 1;                  /** \brief [28:28] SUS Write Protection (w) */
    unsigned int SUSSTA: 1;                 /** \brief [29:29] Suspend State (rh) */
    unsigned int reserved_30: 2;
} Ifx_MSC_OCS_Bits;

/** Upstream Data Register */
typedef struct
{
    unsigned int DATA: 8;                   /** \brief [7:0] Received Data (rh) */
    unsigned int reserved_8: 8;
    unsigned int V: 1;                      /** \brief [16:16] Valid Bit (rh) */
    unsigned int P: 1;                      /** \brief [17:17] Parity Bit (rh) */
    unsigned int C: 1;                      /** \brief [18:18] Clear Bit (w) */
    unsigned int LABF: 2;                   /** \brief [20:19] Lower Address Bit Field (rh) */
    unsigned int IPF: 1;                    /** \brief [21:21] Internal Parity Flag (rh) */
    unsigned int PERR: 1;                   /** \brief [22:22] Parity Error (rh) */
    unsigned int reserved_23: 9;
} Ifx_MSC_UD_Bits;

/** Upstream Control Enhanced Register 1 */
typedef struct
{
    unsigned int USTOPRE: 4;                /** \brief [3:0] Upstream Timeout Prescaler (rw) */
    unsigned int USTOVAL: 4;                /** \brief [7:4] Upstream Timeout Value (rw) */
    unsigned int USTOEN: 1;                 /** \brief [8:8] Upstream Timeout Interrupt Enable (rw) */
    unsigned int USTF: 1;                   /** \brief [9:9] Upstream Timeout Flag (rw) */
    unsigned int USTC: 1;                   /** \brief [10:10] Upstream Timout Clear (w) */
    unsigned int USTS: 1;                   /** \brief [11:11] Upstream Timout Set (w) */
    unsigned int reserved_12: 2;
    unsigned int USTOIP: 2;                 /** \brief [15:14] Upstream Timout Interrupt Node Pointer (rw) */
    unsigned int reserved_16: 16;
} Ifx_MSC_USCE_Bits;

/** Upstream Status Register */
typedef struct
{
    unsigned int UFT: 1;                    /** \brief [0:0] Upstream Channel Frame Type (rw) */
    unsigned int URR: 3;                    /** \brief [3:1] Upstream Channel Receiving Rate (rw) */
    unsigned int PCTR: 1;                   /** \brief [4:4] Parity Control (rw) */
    unsigned int SRDC: 1;                   /** \brief [5:5] Service Request Delay Control (rw) */
    unsigned int reserved_6: 10;
    unsigned int UC: 5;                     /** \brief [20:16] Upstream Counter (rh) */
    unsigned int reserved_21: 11;
} Ifx_MSC_USR_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_ACCEN0_Bits B;
} Ifx_MSC_ACCEN0;

/** Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_ACCEN1_Bits B;
} Ifx_MSC_ACCEN1;

/** Downstream Command Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_DC_Bits B;
} Ifx_MSC_DC;

/** Downstream Data Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_DD_Bits B;
} Ifx_MSC_DD;

/** Downstream Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_DSC_Bits B;
} Ifx_MSC_DSC;

/** Downstream Control Enhanced Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_DSCE_Bits B;
} Ifx_MSC_DSCE;

/** Downstream Select Data Source High Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_DSDSH_Bits B;
} Ifx_MSC_DSDSH;

/** Downstream Select Data Source Low Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_DSDSL_Bits B;
} Ifx_MSC_DSDSL;

/** Downstream Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_DSS_Bits B;
} Ifx_MSC_DSS;

/** Emergency Stop Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_ESR_Bits B;
} Ifx_MSC_ESR;

/** Fractional Divider Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_FDR_Bits B;
} Ifx_MSC_FDR;

/** Interrupt Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_ICR_Bits B;
} Ifx_MSC_ICR;

/** Interrupt Set Clear Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_ISC_Bits B;
} Ifx_MSC_ISC;

/** Interrupt Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_ISR_Bits B;
} Ifx_MSC_ISR;

/** Kernel Reset Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_KRST0_Bits B;
} Ifx_MSC_KRST0;

/** Kernel Reset Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_KRST1_Bits B;
} Ifx_MSC_KRST1;

/** Kernel Reset Status Clear Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_KRSTCLR_Bits B;
} Ifx_MSC_KRSTCLR;

/** Output Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_OCR_Bits B;
} Ifx_MSC_OCR;

/** OCDS Control and Status */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_OCS_Bits B;
} Ifx_MSC_OCS;

/** Upstream Data Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_UD_Bits B;
} Ifx_MSC_UD;

/** Upstream Control Enhanced Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_USCE_Bits B;
} Ifx_MSC_USCE;

/** Upstream Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_MSC_USR_Bits B;
} Ifx_MSC_USR;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** MSC object */
typedef volatile struct
{
    Ifx_CLC2 CLC;                           /** \brief 0, Clock Control Register */
    unsigned char reserved_4[4];            /** \brief 4 */
    Ifx_ID1 ID;                             /** \brief 8, Module Identification Register */
    Ifx_MSC_FDR FDR;                        /** \brief C, Fractional Divider Register */
    Ifx_MSC_USR USR;                        /** \brief 10, Upstream Status Register */
    Ifx_MSC_DSC DSC;                        /** \brief 14, Downstream Control Register */
    Ifx_MSC_DSS DSS;                        /** \brief 18, Downstream Status Register */
    Ifx_MSC_DD DD;                          /** \brief 1C, Downstream Data Register */
    Ifx_MSC_DC DC;                          /** \brief 20, Downstream Command Register */
    Ifx_MSC_DSDSL DSDSL;                    /** \brief 24, Downstream Select Data Source Low Register */
    Ifx_MSC_DSDSH DSDSH;                    /** \brief 28, Downstream Select Data Source High Register */
    Ifx_MSC_ESR ESR;                        /** \brief 2C, Emergency Stop Register */
    Ifx_MSC_UD UD[4];                       /** \brief 30, Upstream Data Register */
    Ifx_MSC_ICR ICR;                        /** \brief 40, Interrupt Control Register */
    Ifx_MSC_ISR ISR;                        /** \brief 44, Interrupt Status Register */
    Ifx_MSC_ISC ISC;                        /** \brief 48, Interrupt Set Clear Register */
    Ifx_MSC_OCR OCR;                        /** \brief 4C, Output Control Register */
    unsigned char reserved_50[8];           /** \brief 50 */
    Ifx_MSC_DSCE DSCE;                      /** \brief 58, Downstream Control Enhanced Register 1 */
    Ifx_MSC_USCE USCE;                      /** \brief 5C, Upstream Control Enhanced Register 1 */
    unsigned char reserved_60[136];         /** \brief 60 */
    Ifx_MSC_OCS OCS;                        /** \brief E8, OCDS Control and Status */
    Ifx_MSC_KRSTCLR KRSTCLR;                /** \brief EC, Kernel Reset Status Clear Register */
    Ifx_MSC_KRST1 KRST1;                    /** \brief F0, Kernel Reset Register 1 */
    Ifx_MSC_KRST0 KRST0;                    /** \brief F4, Kernel Reset Register 0 */
    Ifx_MSC_ACCEN1 ACCEN1;                  /** \brief F8, Access Enable Register 1 */
    Ifx_MSC_ACCEN0 ACCEN0;                  /** \brief FC, Access Enable Register 0 */
} Ifx_MSC;
/******************************************************************************/
#endif /* IFXMSC_REGDEF_H */

