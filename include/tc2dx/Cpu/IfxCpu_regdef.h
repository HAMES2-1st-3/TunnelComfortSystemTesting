/**
 * \file IfxCpu_regdef.h
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
#ifndef IFXCPU_REGDEF_H
#define IFXCPU_REGDEF_H
/******************************************************************************/
#include "Global/IfxGlobal_regdef.h"

/******************************************************************************/
/*                           Struct (0 - Bitfields)                           */
/******************************************************************************/

/** Address General Purpose Register */
typedef struct
{
    unsigned int ADDR: 32;                  /** \brief [31:0] Address Register (rw) */
} Ifx_CPU_A_Bits;

/** Base Interrupt Vector Table Pointer */
typedef struct
{
    unsigned int VSS: 1;                    /** \brief [0:0] Vector Spacing Select (rw) */
    unsigned int BIV: 31;                   /** \brief [31:1] Base Address of Interrupt Vector Table (rw) */
} Ifx_CPU_BIV_Bits;

/** Base Trap Vector Table Pointer */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int BTV: 31;                   /** \brief [31:1] Base Address of Trap Vector Table (rw) */
} Ifx_CPU_BTV_Bits;

/** CPU Clock Cycle Count */
typedef struct
{
    unsigned int CountValue: 31;            /** \brief [30:0] Count Value (rw) */
    unsigned int SOvf: 1;                   /** \brief [31:31] Sticky Overflow Bit (rw) */
} Ifx_CPU_CCNT_Bits;

/** Counter Control */
typedef struct
{
    unsigned int CM: 1;                     /** \brief [0:0] Counter Mode (rw) */
    unsigned int CE: 1;                     /** \brief [1:1] Count Enable (rw) */
    unsigned int M1: 3;                     /** \brief [4:2] M1CNT Configuration (rw) */
    unsigned int M2: 3;                     /** \brief [7:5] M2CNT Configuration (rw) */
    unsigned int M3: 3;                     /** \brief [10:8] M3CNT Configuration (rw) */
    unsigned int reserved_11: 21;
} Ifx_CPU_CCTRL_Bits;

/** Compatibility Control Register */
typedef struct
{
    unsigned int reserved_0: 3;
    unsigned int RM: 1;                     /** \brief [3:3] Rounding Mode Compatibility (rw) */
    unsigned int SP: 1;                     /** \brief [4:4] SYSCON Safety Protection Mode Compatibility (rw) */
    unsigned int reserved_5: 27;
} Ifx_CPU_COMPAT_Bits;

/** CPU Core Identification Register */
typedef struct
{
    unsigned int CORE_ID: 3;                /** \brief [2:0] Core Identification Number (rw) */
    unsigned int reserved_3: 29;
} Ifx_CPU_CORE_ID_Bits;

/** CPU Code Protection Range Lower Bound Register */
typedef struct
{
    unsigned int reserved_0: 3;
    unsigned int LOWBND: 29;                /** \brief [31:3] CPRy Lower Boundary Address (rw) */
} Ifx_CPU_CPR_L_Bits;

/** CPU Code Protection Range Upper Bound Register */
typedef struct
{
    unsigned int reserved_0: 3;
    unsigned int UPPBND: 29;                /** \brief [31:3] CPR0_m Upper Boundary Address (rw) */
} Ifx_CPU_CPR_U_Bits;

/** CPU Identification Register TC1.6P */
typedef struct
{
    unsigned int MODREV: 8;                 /** \brief [7:0] Revision Number (r) */
    unsigned int MOD_32B: 8;                /** \brief [15:8] 32-Bit Module Enable (r) */
    unsigned int MOD: 16;                   /** \brief [31:16] Module Identification Number (r) */
} Ifx_CPU_CPU_ID_Bits;

/** CPU Code Protection Execute Enable Register Set */
typedef struct
{
    unsigned int XE: 8;                     /** \brief [7:0] Execute Enable Range select (rw) */
    unsigned int reserved_8: 24;
} Ifx_CPU_CPXE_Bits;

/** Core Register Access Event */
typedef struct
{
    unsigned int EVTA: 3;                   /** \brief [2:0] Event Associated (rw) */
    unsigned int BBM: 1;                    /** \brief [3:3] Break Before Make (BBM) or Break After Make (BAM) Selection (rw) */
    unsigned int BOD: 1;                    /** \brief [4:4] Breakout Disable (rw) */
    unsigned int SUSP: 1;                   /** \brief [5:5] CDC Suspend-Out Signal State (rw) */
    unsigned int CNT: 2;                    /** \brief [7:6] Counter (rw) */
    unsigned int reserved_8: 24;
} Ifx_CPU_CREVT_Bits;

/** Data General Purpose Register */
typedef struct
{
    unsigned int DATA: 32;                  /** \brief [31:0] Data Register (rw) */
} Ifx_CPU_D_Bits;

/** Data Asynchronous Trap Register */
typedef struct
{
    unsigned int reserved_0: 3;
    unsigned int SBE: 1;                    /** \brief [3:3] Store Bus Error (rwh) */
    unsigned int reserved_4: 5;
    unsigned int CWE: 1;                    /** \brief [9:9] Cache Writeback Error (rwh) */
    unsigned int CFE: 1;                    /** \brief [10:10] Cache Flush Error (rwh) */
    unsigned int reserved_11: 3;
    unsigned int SOE: 1;                    /** \brief [14:14] Store Overlay Error (rwh) */
    unsigned int SME: 1;                    /** \brief [15:15] Store MIST Error (rwh) */
    unsigned int reserved_16: 16;
} Ifx_CPU_DATR_Bits;

/** Debug Status Register */
typedef struct
{
    unsigned int DE: 1;                     /** \brief [0:0] Debug Enable (rh) */
    unsigned int HALT: 2;                   /** \brief [2:1] CPU Halt Request / Status Field (rwh) */
    unsigned int SIH: 1;                    /** \brief [3:3] Suspend-in Halt (rh) */
    unsigned int SUSP: 1;                   /** \brief [4:4] Current State of the Core Suspend-Out Signal (rwh) */
    unsigned int reserved_5: 1;
    unsigned int PREVSUSP: 1;               /** \brief [6:6] Previous State of Core Suspend-Out Signal (rh) */
    unsigned int PEVT: 1;                   /** \brief [7:7] Posted Event (rwh) */
    unsigned int EVTSRC: 5;                 /** \brief [12:8] Event Source (rh) */
    unsigned int reserved_13: 19;
} Ifx_CPU_DBGSR_Bits;

/** Debug Trap Control Register */
typedef struct
{
    unsigned int DTA: 1;                    /** \brief [0:0] Debug Trap Active Bit (rwh) */
    unsigned int reserved_1: 31;
} Ifx_CPU_DBGTCR_Bits;

/** Data Memory Control Register */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int DCBYP: 1;                  /** \brief [1:1] Data Cache Bypass (rw) */
    unsigned int reserved_2: 30;
} Ifx_CPU_DCON0_Bits;

/** Data Control Register 2 */
typedef struct
{
    unsigned int DCACHE_SZE: 16;            /** \brief [15:0] Data Cache Size (r) */
    unsigned int DSCRATCH_SZE: 16;          /** \brief [31:16] Data Scratch Size (r) */
} Ifx_CPU_DCON2_Bits;

/** Debug Context Save Area Pointer */
typedef struct
{
    unsigned int reserved_0: 6;
    unsigned int DCXValue: 26;              /** \brief [31:6] Debug Context Save Area Pointer (rw) */
} Ifx_CPU_DCX_Bits;

/** Data Error Address Register */
typedef struct
{
    unsigned int ERROR_ADDRESS: 32;         /** \brief [31:0] Error Address (rh) */
} Ifx_CPU_DEADD_Bits;

/** Data Integrity Error Address Register */
typedef struct
{
    unsigned int TA: 32;                    /** \brief [31:0] Transaction Address (rh) */
} Ifx_CPU_DIEAR_Bits;

/** Data Integrity Error Trap Register */
typedef struct
{
    unsigned int IED: 1;                    /** \brief [0:0] Integrity Error Detected (rwh) */
    unsigned int IE_T: 1;                   /** \brief [1:1] Integrity Error - Tag Memory (rh) */
    unsigned int IE_C: 1;                   /** \brief [2:2] Integrity Error - Cache Memory (rh) */
    unsigned int IE_S: 1;                   /** \brief [3:3] Integrity Error - Scratchpad Memory (rh) */
    unsigned int IE_BI: 1;                  /** \brief [4:4] Integrity Error - Bus Integrity (rh) */
    unsigned int E_INFO: 6;                 /** \brief [10:5] Error Information (rh) */
    unsigned int IE_DUAL: 1;                /** \brief [11:11] Dual Bit Error Detected (rh) */
    unsigned int IE_SP: 1;                  /** \brief [12:12] Safety Protection Error Detected (rh) */
    unsigned int IE_BS: 1;                  /** \brief [13:13] Bus Slave Access Indicator (rh) */
    unsigned int reserved_14: 18;
} Ifx_CPU_DIETR_Bits;

/** Debug Monitor Start Address */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int DMSValue: 31;              /** \brief [31:1] Debug Monitor Start Address (rw) */
} Ifx_CPU_DMS_Bits;

/** CPU Data Protection Range, Lower Bound Register */
typedef struct
{
    unsigned int reserved_0: 3;
    unsigned int LOWBND: 29;                /** \brief [31:3] DPRy Lower Boundary Address (rw) */
} Ifx_CPU_DPR_L_Bits;

/** CPU Data Protection Range, Upper Bound Register */
typedef struct
{
    unsigned int reserved_0: 3;
    unsigned int UPPBND: 29;                /** \brief [31:3] DPRy Upper Boundary Address (rw) */
} Ifx_CPU_DPR_U_Bits;

/** CPU Data Protection Read Enable Register Set */
typedef struct
{
    unsigned int RE: 16;                    /** \brief [15:0] Read Enable Range Select (rw) */
    unsigned int reserved_16: 16;
} Ifx_CPU_DPRE_Bits;

/** CPU Data Protection Write Enable Register Set */
typedef struct
{
    unsigned int WE: 16;                    /** \brief [15:0] Write Enable Range Select (rw) */
    unsigned int reserved_16: 16;
} Ifx_CPU_DPWE_Bits;

/** Data Synchronous Trap Register */
typedef struct
{
    unsigned int SRE: 1;                    /** \brief [0:0] Scratch Range Error (rwh) */
    unsigned int GAE: 1;                    /** \brief [1:1] Global Address Error (rwh) */
    unsigned int LBE: 1;                    /** \brief [2:2] Load Bus Error (rwh) */
    unsigned int reserved_3: 3;
    unsigned int CRE: 1;                    /** \brief [6:6] Cache Refill Error (rwh) */
    unsigned int reserved_7: 7;
    unsigned int DTME: 1;                   /** \brief [14:14] DTAG MSIST Error (rwh) */
    unsigned int LOE: 1;                    /** \brief [15:15] Load Overlay Error (rwh) */
    unsigned int SDE: 1;                    /** \brief [16:16] Segment Difference Error (rwh) */
    unsigned int SCE: 1;                    /** \brief [17:17] Segment Crossing Error (rwh) */
    unsigned int CAC: 1;                    /** \brief [18:18] CSFR Access Error (rwh) */
    unsigned int MPE: 1;                    /** \brief [19:19] Memory Protection Error (rwh) */
    unsigned int CLE: 1;                    /** \brief [20:20] Context Location Error (rwh) */
    unsigned int reserved_21: 3;
    unsigned int ALN: 1;                    /** \brief [24:24] Alignment Error (rwh) */
    unsigned int reserved_25: 7;
} Ifx_CPU_DSTR_Bits;

/** External Event Register */
typedef struct
{
    unsigned int EVTA: 3;                   /** \brief [2:0] Event Associated (rw) */
    unsigned int BBM: 1;                    /** \brief [3:3] Break Before Make (BBM) or Break After Make (BAM) Selection (rw) */
    unsigned int BOD: 1;                    /** \brief [4:4] Breakout Disable (rw) */
    unsigned int SUSP: 1;                   /** \brief [5:5] CDC Suspend-Out Signal State (rw) */
    unsigned int CNT: 2;                    /** \brief [7:6] Counter (rw) */
    unsigned int reserved_8: 24;
} Ifx_CPU_EXEVT_Bits;

/** Free CSA List Head Pointer */
typedef struct
{
    unsigned int FCXO: 16;                  /** \brief [15:0] FCX Offset Address Field (rw) */
    unsigned int FCXS: 4;                   /** \brief [19:16] FCX Segment Address Field (rw) */
    unsigned int reserved_20: 12;
} Ifx_CPU_FCX_Bits;

/** CPU Trap Control Register */
typedef struct
{
    unsigned int TST: 1;                    /** \brief [0:0] Trap Status (rh) */
    unsigned int TCL: 1;                    /** \brief [1:1] Trap Clear (w) */
    unsigned int reserved_2: 6;
    unsigned int RM: 2;                     /** \brief [9:8] Captured Rounding Mode (rh) */
    unsigned int reserved_10: 8;
    unsigned int FXE: 1;                    /** \brief [18:18] FX Trap Enable (rw) */
    unsigned int FUE: 1;                    /** \brief [19:19] FU Trap Enable (rw) */
    unsigned int FZE: 1;                    /** \brief [20:20] FZ Trap Enable (rw) */
    unsigned int FVE: 1;                    /** \brief [21:21] FV Trap Enable (rw) */
    unsigned int FIE: 1;                    /** \brief [22:22] FI Trap Enable (rw) */
    unsigned int reserved_23: 3;
    unsigned int FX: 1;                     /** \brief [26:26] Captured FX (rh) */
    unsigned int FU: 1;                     /** \brief [27:27] Captured FU (rh) */
    unsigned int FZ: 1;                     /** \brief [28:28] Captured FZ (rh) */
    unsigned int FV: 1;                     /** \brief [29:29] Captured FV (rh) */
    unsigned int FI: 1;                     /** \brief [30:30] Captured FI (rh) */
    unsigned int reserved_31: 1;
} Ifx_CPU_FPU_TRAP_CON_Bits;

/** CPU Trapping Instruction Opcode Register */
typedef struct
{
    unsigned int OPC: 8;                    /** \brief [7:0] Captured Opcode (rh) */
    unsigned int FMT: 1;                    /** \brief [8:8] Captured Instruction Format (rh) */
    unsigned int reserved_9: 7;
    unsigned int DREG: 4;                   /** \brief [19:16] Captured Destination Register (rh) */
    unsigned int reserved_20: 12;
} Ifx_CPU_FPU_TRAP_OPC_Bits;

/** CPU Trapping Instruction Program Counter Register */
typedef struct
{
    unsigned int PC: 32;                    /** \brief [31:0] Captured Program Counter (rh) */
} Ifx_CPU_FPU_TRAP_PC_Bits;

/** CPU Trapping Instruction Operand Register */
typedef struct
{
    unsigned int SRC1: 32;                  /** \brief [31:0] Captured SRC1 Operand (rh) */
} Ifx_CPU_FPU_TRAP_SRC1_Bits;

/** CPU Trapping Instruction Operand Register */
typedef struct
{
    unsigned int SRC2: 32;                  /** \brief [31:0] Captured SRC2 Operand (rh) */
} Ifx_CPU_FPU_TRAP_SRC2_Bits;

/** Trapping Instruction Operand Register */
typedef struct
{
    unsigned int SRC3: 32;                  /** \brief [31:0] Captured SRC3 Operand (rh) */
} Ifx_CPU_FPU_TRAP_SRC3_Bits;

/** Instruction Count */
typedef struct
{
    unsigned int CountValue: 31;            /** \brief [30:0] Count Value (rw) */
    unsigned int SOvf: 1;                   /** \brief [31:31] Sticky Overflow Bit (rw) */
} Ifx_CPU_ICNT_Bits;

/** Interrupt Control Register */
typedef struct
{
    unsigned int CCPN: 10;                  /** \brief [9:0] Current CPU Priority Number (rwh) */
    unsigned int reserved_10: 5;
    unsigned int IE: 1;                     /** \brief [15:15] Global Interrupt Enable Bit (rwh) */
    unsigned int PIPN: 10;                  /** \brief [25:16] Pending Interrupt Priority Number (rh) */
    unsigned int reserved_26: 6;
} Ifx_CPU_ICR_Bits;

/** Interrupt Stack Pointer */
typedef struct
{
    unsigned int ISP: 32;                   /** \brief [31:0] Interrupt Stack Pointer (rw) */
} Ifx_CPU_ISP_Bits;

/** Free CSA List Limit Pointer */
typedef struct
{
    unsigned int LCXO: 16;                  /** \brief [15:0] LCX Offset Field (rw) */
    unsigned int LCXS: 4;                   /** \brief [19:16] LCX Segment Address (rw) */
    unsigned int reserved_20: 12;
} Ifx_CPU_LCX_Bits;

/** Multi-Count Register */
typedef struct
{
    unsigned int CountValue: 31;            /** \brief [30:0] Count Value (rw) */
    unsigned int SOvf: 1;                   /** \brief [31:31] Sticky Overflow Bit (rw) */
} Ifx_CPU_MCNT_Bits;

/** Address Space Identifier Register */
typedef struct
{
    unsigned int ASI: 5;                    /** \brief [4:0] Address Space Identifier (rw) */
    unsigned int reserved_5: 27;
} Ifx_CPU_MMU_ASI_Bits;

/** MMU Control Register */
typedef struct
{
    unsigned int reserved_0: 15;
    unsigned int NOMMU: 1;                  /** \brief [15:15] MMU Exists (r) */
    unsigned int reserved_16: 16;
} Ifx_CPU_MMU_CON_Bits;

/** Program Counter */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int PC: 31;                    /** \brief [31:1] Program Counter (r) */
} Ifx_CPU_PC_Bits;

/** Program Control 0 */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int PCBYP: 1;                  /** \brief [1:1] Program Cache Bypass (rw) */
    unsigned int reserved_2: 30;
} Ifx_CPU_PCON0_Bits;

/** Program Control 1 */
typedef struct
{
    unsigned int PCINV: 1;                  /** \brief [0:0] Program Cache Invalidate (rw) */
    unsigned int PBINV: 1;                  /** \brief [1:1] Program Buffer Invalidate (rw) */
    unsigned int reserved_2: 30;
} Ifx_CPU_PCON1_Bits;

/** Program Control 2 */
typedef struct
{
    unsigned int PCACHE_SZE: 16;            /** \brief [15:0] Program Cache Size (ICACHE) in KBytes (r) */
    unsigned int PSCRATCH_SZE: 16;          /** \brief [31:16] Program Scratch Size in KBytes (r) */
} Ifx_CPU_PCON2_Bits;

/** Previous Context Information Register */
typedef struct
{
    unsigned int PCXO: 16;                  /** \brief [15:0] Previous Context Pointer Offset Field (rw) */
    unsigned int PCXS: 4;                   /** \brief [19:16] Previous Context Pointer Segment Address (rw) */
    unsigned int UL: 1;                     /** \brief [20:20] Upper or Lower Context Tag (rw) */
    unsigned int PIE: 1;                    /** \brief [21:21] Previous Interrupt Enable (rw) */
    unsigned int PCPN: 10;                  /** \brief [31:22] Previous CPU Priority Number (rw) */
} Ifx_CPU_PCXI_Bits;

/** Program Integrity Error Address Register */
typedef struct
{
    unsigned int TA: 32;                    /** \brief [31:0] Transaction Address (rh) */
} Ifx_CPU_PIEAR_Bits;

/** Program Integrity Error Trap Register */
typedef struct
{
    unsigned int IED: 1;                    /** \brief [0:0] Integrity Error Detected (rwh) */
    unsigned int IE_T: 1;                   /** \brief [1:1] Integrity Error - Tag Memory (rh) */
    unsigned int IE_C: 1;                   /** \brief [2:2] Integrity Error - Cache Memory (rh) */
    unsigned int IE_S: 1;                   /** \brief [3:3] Integrity Error - Scratchpad Memory (rh) */
    unsigned int IE_BI: 1;                  /** \brief [4:4] Integrity Error - Bus Interface (rh) */
    unsigned int E_INFO: 6;                 /** \brief [10:5] Error Information (rh) */
    unsigned int IE_DUAL: 1;                /** \brief [11:11] Integrity Error - Dual Error Detected (r) */
    unsigned int IE_SP: 1;                  /** \brief [12:12] Safety Protection Error Detected (rh) */
    unsigned int IE_BS: 1;                  /** \brief [13:13] Bus Slave Access Indicator (rh) */
    unsigned int reserved_14: 18;
} Ifx_CPU_PIETR_Bits;

/** Physical Memory Attributes */
typedef struct
{
    unsigned int ATT_090: 10;               /** \brief [9:0] Segment 9:0[0] (rw) */
    unsigned int ATT_0A: 1;                 /** \brief [10:10] Segment A[0] (r) */
    unsigned int ATT_0B: 1;                 /** \brief [11:11] Segment B[0] (rw) */
    unsigned int ATT_0C: 1;                 /** \brief [12:12] Segment C[0] (rw) */
    unsigned int ATT_0D: 1;                 /** \brief [13:13] Segment D[0] (rw) */
    unsigned int ATT_0E: 1;                 /** \brief [14:14] Segment E[0] (rw) */
    unsigned int ATT_0F: 1;                 /** \brief [15:15] Segment F[0] (r) */
    unsigned int ATT_190: 10;               /** \brief [25:16] Segment 9:0[1] (rw) */
    unsigned int ATT_1A: 1;                 /** \brief [26:26] Segment A[1] (r) */
    unsigned int ATT_1B: 1;                 /** \brief [27:27] Segment B[1] (rw) */
    unsigned int ATT_1C: 1;                 /** \brief [28:28] Segment C[1] (r) */
    unsigned int ATT_1D: 1;                 /** \brief [29:29] Segment D[1] (r) */
    unsigned int ATT_1E: 1;                 /** \brief [30:30] Segment E[1] (rw) */
    unsigned int ATT_1F: 1;                 /** \brief [31:31] Segment F[1] (r) */
} Ifx_CPU_PMA0_Bits;

/** Program Synchronous Trap Register */
typedef struct
{
    unsigned int FRE: 1;                    /** \brief [0:0] Fetch Range Error (rwh) */
    unsigned int FGAE: 1;                   /** \brief [1:1] Fetch Global Address Error (rwh) */
    unsigned int FBE: 1;                    /** \brief [2:2] Fetch Bus Error (rwh) */
    unsigned int reserved_3: 9;
    unsigned int FPE: 1;                    /** \brief [12:12] Fetch Peripheral Error (rwh) */
    unsigned int reserved_13: 1;
    unsigned int FME: 1;                    /** \brief [14:14] Fetch MSIST Error (rwh) */
    unsigned int reserved_15: 17;
} Ifx_CPU_PSTR_Bits;

/** Program Status Word */
typedef struct
{
    unsigned int CDC: 7;                    /** \brief [6:0] Call Depth Counter (rwh) */
    unsigned int CDE: 1;                    /** \brief [7:7] Call Depth Count Enable (rwh) */
    unsigned int GW: 1;                     /** \brief [8:8] Global Address Register Write Permission (rwh) */
    unsigned int IS: 1;                     /** \brief [9:9] Interrupt Stack Control (rwh) */
    unsigned int IO: 2;                     /** \brief [11:10] Access Privilege Level Control (I/O Privilege) (rwh) */
    unsigned int PRS: 2;                    /** \brief [13:12] Protection Register Set (rwh) */
    unsigned int S: 1;                      /** \brief [14:14] Safe Task Identifier (rwh) */
    unsigned int reserved_15: 12;
    unsigned int SAV: 1;                    /** \brief [27:27] Sticky Advance Overflow Flag (rwh) */
    unsigned int AV: 1;                     /** \brief [28:28] Advance Overflow Flag (rwh) */
    unsigned int SV: 1;                     /** \brief [29:29] Sticky Overflow Flag (rwh) */
    unsigned int V: 1;                      /** \brief [30:30] Overflow Flag (rwh) */
    unsigned int C: 1;                      /** \brief [31:31] Carry Flag (rwh) */
} Ifx_CPU_PSW_Bits;

/** SRI Error Generation Register */
typedef struct
{
    unsigned int ADFLIP: 8;                 /** \brief [7:0] Address ECC Bit Flip (rw) */
    unsigned int ADTYPE: 2;                 /** \brief [9:8] Type of error (rw) */
    unsigned int reserved_10: 21;
    unsigned int AE: 1;                     /** \brief [31:31] Activate Error Enable (rwh) */
} Ifx_CPU_SEGEN_Bits;

/** SIST Mode Access Control Register */
typedef struct
{
    unsigned int PC: 1;                     /** \brief [0:0] Instruction Cache Memory SIST Mode Access Control (rw) */
    unsigned int reserved_1: 1;
    unsigned int PT: 1;                     /** \brief [2:2] Program Tag Memory SIST Mode Access Control (rw) */
    unsigned int reserved_3: 5;
    unsigned int DC: 1;                     /** \brief [8:8] Data Cache Memory SIST Mode Access Control (rw) */
    unsigned int reserved_9: 1;
    unsigned int DT: 1;                     /** \brief [10:10] Data Tag Memory SIST Mode Access Control (rw) */
    unsigned int reserved_11: 13;
    unsigned int IODT: 1;                   /** \brief [24:24] In-Order Data Transactions (rw) */
    unsigned int reserved_25: 7;
} Ifx_CPU_SMACON_Bits;

/** CPU Safety Protection Register Access Enable Register A */
typedef struct
{
    unsigned int EN: 32;                    /** \brief [31:0] Access Enable for Master TAG ID n (n= 0-31) (rw) */
} Ifx_CPU_SPROT_ACCENA_Bits;

/** CPU Safety Protection Region Access Enable Register B */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_CPU_SPROT_ACCENB_Bits;

/** CPU Safety Protection Region Access Enable Register A */
typedef struct
{
    unsigned int EN: 32;                    /** \brief [31:0] Access Enable for Master TAG ID n (n = 0-31) (rw) */
} Ifx_CPU_SPROT_RGN_ACCENA_Bits;

/** CPU Safety Protection Region Access Enable Register B */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_CPU_SPROT_RGN_ACCENB_Bits;

/** CPU Safety Protection Region Lower Address Register */
typedef struct
{
    unsigned int reserved_0: 5;
    unsigned int ADDR: 27;                  /** \brief [31:5] Region Lower Address (rw) */
} Ifx_CPU_SPROT_RGN_LA_Bits;

/** CPU Safety protection Region Upper Address Register */
typedef struct
{
    unsigned int reserved_0: 5;
    unsigned int ADDR: 27;                  /** \brief [31:5] Region Upper Address (rw) */
} Ifx_CPU_SPROT_RGN_UA_Bits;

/** Software Debug Event */
typedef struct
{
    unsigned int EVTA: 3;                   /** \brief [2:0] Event Associated (rw) */
    unsigned int BBM: 1;                    /** \brief [3:3] Break Before Make (BBM) or Break After Make (BAM) Selection (rw) */
    unsigned int BOD: 1;                    /** \brief [4:4] Breakout Disable (rw) */
    unsigned int SUSP: 1;                   /** \brief [5:5] CDC Suspend-Out Signal State (rw) */
    unsigned int CNT: 2;                    /** \brief [7:6] Counter (rw) */
    unsigned int reserved_8: 24;
} Ifx_CPU_SWEVT_Bits;

/** System Configuration Register */
typedef struct
{
    unsigned int FCDSF: 1;                  /** \brief [0:0] Free Context List Depleted Sticky Flag (rwh) */
    unsigned int PROTEN: 1;                 /** \brief [1:1] Memory Protection Enable (rw) */
    unsigned int TPROTEN: 1;                /** \brief [2:2] Temporal Protection Enable (rw) */
    unsigned int IS: 1;                     /** \brief [3:3] Initial State (rw) */
    unsigned int IT: 1;                     /** \brief [4:4] Initial State (rw) */
    unsigned int reserved_5: 27;
} Ifx_CPU_SYSCON_Bits;

/** CPU Temporal Protection System Control Register */
typedef struct
{
    unsigned int TEXP0: 1;                  /** \brief [0:0] Timer0 Expired Flag (rh) */
    unsigned int TEXP1: 1;                  /** \brief [1:1] Timer1 Expired Flag (rh) */
    unsigned int TEXP2: 1;                  /** \brief [2:2] Timer1 Expired Flag (rh) */
    unsigned int reserved_3: 13;
    unsigned int TTRAP: 1;                  /** \brief [16:16] Temporal Protection Trap (rh) */
    unsigned int reserved_17: 15;
} Ifx_CPU_TPS_CON_Bits;

/** CPU Temporal Protection System Timer Register */
typedef struct
{
    unsigned int Timer: 32;                 /** \brief [31:0] Temporal Protection Timer (rwh) */
} Ifx_CPU_TPS_TIMER_Bits;

/** Trigger Address */
typedef struct
{
    unsigned int ADDR: 32;                  /** \brief [31:0] Comparison Address (rw) */
} Ifx_CPU_TR_ADR_Bits;

/** Trigger Event */
typedef struct
{
    unsigned int EVTA: 3;                   /** \brief [2:0] Event Associated (rw) */
    unsigned int BBM: 1;                    /** \brief [3:3] Break Before Make (BBM) or Break After Make (BAM) Selection (rw) */
    unsigned int BOD: 1;                    /** \brief [4:4] Breakout Disable (rw) */
    unsigned int SUSP: 1;                   /** \brief [5:5] CDC Suspend-Out Signal State (rw) */
    unsigned int CNT: 2;                    /** \brief [7:6] Counter (rw) */
    unsigned int reserved_8: 4;
    unsigned int TYP: 1;                    /** \brief [12:12] Input Selection (rw) */
    unsigned int RNG: 1;                    /** \brief [13:13] Compare Type (rw) */
    unsigned int reserved_14: 1;
    unsigned int ASI_EN: 1;                 /** \brief [15:15] Enable ASI Comparison (rw) */
    unsigned int ASI: 5;                    /** \brief [20:16] Address Space Identifier (rw) */
    unsigned int reserved_21: 6;
    unsigned int AST: 1;                    /** \brief [27:27] Address Store (rw) */
    unsigned int ALD: 1;                    /** \brief [28:28] Address Load (rw) */
    unsigned int reserved_29: 3;
} Ifx_CPU_TR_EVT_Bits;

/** CPU Trigger Address x */
typedef struct
{
    unsigned int T0: 1;                     /** \brief [0:0] Trigger-0 (rh) */
    unsigned int T1: 1;                     /** \brief [1:1] Trigger-1 (rh) */
    unsigned int T2: 1;                     /** \brief [2:2] Trigger-2 (rh) */
    unsigned int T3: 1;                     /** \brief [3:3] Trigger-3 (rh) */
    unsigned int T4: 1;                     /** \brief [4:4] Trigger-4 (rh) */
    unsigned int T5: 1;                     /** \brief [5:5] Trigger-5 (rh) */
    unsigned int T6: 1;                     /** \brief [6:6] Trigger-6 (rh) */
    unsigned int T7: 1;                     /** \brief [7:7] Trigger-7 (rh) */
    unsigned int reserved_8: 24;
} Ifx_CPU_TRIG_ACC_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Address General Purpose Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_A_Bits B;
} Ifx_CPU_A;

/** Base Interrupt Vector Table Pointer */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_BIV_Bits B;
} Ifx_CPU_BIV;

/** Base Trap Vector Table Pointer */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_BTV_Bits B;
} Ifx_CPU_BTV;

/** CPU Clock Cycle Count */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_CCNT_Bits B;
} Ifx_CPU_CCNT;

/** Counter Control */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_CCTRL_Bits B;
} Ifx_CPU_CCTRL;

/** Compatibility Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_COMPAT_Bits B;
} Ifx_CPU_COMPAT;

/** CPU Core Identification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_CORE_ID_Bits B;
} Ifx_CPU_CORE_ID;

/** CPU Code Protection Range Lower Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_CPR_L_Bits B;
} Ifx_CPU_CPR_L;

/** CPU Code Protection Range Upper Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_CPR_U_Bits B;
} Ifx_CPU_CPR_U;

/** CPU Identification Register TC1.6P */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_CPU_ID_Bits B;
} Ifx_CPU_CPU_ID;

/** CPU Code Protection Execute Enable Register Set */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_CPXE_Bits B;
} Ifx_CPU_CPXE;

/** Core Register Access Event */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_CREVT_Bits B;
} Ifx_CPU_CREVT;

/** Data General Purpose Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_D_Bits B;
} Ifx_CPU_D;

/** Data Asynchronous Trap Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_DATR_Bits B;
} Ifx_CPU_DATR;

/** Debug Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_DBGSR_Bits B;
} Ifx_CPU_DBGSR;

/** Debug Trap Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_DBGTCR_Bits B;
} Ifx_CPU_DBGTCR;

/** Data Memory Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_DCON0_Bits B;
} Ifx_CPU_DCON0;

/** Data Control Register 2 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_DCON2_Bits B;
} Ifx_CPU_DCON2;

/** Debug Context Save Area Pointer */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_DCX_Bits B;
} Ifx_CPU_DCX;

/** Data Error Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_DEADD_Bits B;
} Ifx_CPU_DEADD;

/** Data Integrity Error Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_DIEAR_Bits B;
} Ifx_CPU_DIEAR;

/** Data Integrity Error Trap Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_DIETR_Bits B;
} Ifx_CPU_DIETR;

/** Debug Monitor Start Address */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_DMS_Bits B;
} Ifx_CPU_DMS;

/** CPU Data Protection Range, Lower Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_DPR_L_Bits B;
} Ifx_CPU_DPR_L;

/** CPU Data Protection Range, Upper Bound Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_DPR_U_Bits B;
} Ifx_CPU_DPR_U;

/** CPU Data Protection Read Enable Register Set */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_DPRE_Bits B;
} Ifx_CPU_DPRE;

/** CPU Data Protection Write Enable Register Set */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_DPWE_Bits B;
} Ifx_CPU_DPWE;

/** Data Synchronous Trap Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_DSTR_Bits B;
} Ifx_CPU_DSTR;

/** External Event Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_EXEVT_Bits B;
} Ifx_CPU_EXEVT;

/** Free CSA List Head Pointer */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_FCX_Bits B;
} Ifx_CPU_FCX;

/** CPU Trap Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_FPU_TRAP_CON_Bits B;
} Ifx_CPU_FPU_TRAP_CON;

/** CPU Trapping Instruction Opcode Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_FPU_TRAP_OPC_Bits B;
} Ifx_CPU_FPU_TRAP_OPC;

/** CPU Trapping Instruction Program Counter Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_FPU_TRAP_PC_Bits B;
} Ifx_CPU_FPU_TRAP_PC;

/** CPU Trapping Instruction Operand Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_FPU_TRAP_SRC1_Bits B;
} Ifx_CPU_FPU_TRAP_SRC1;

/** CPU Trapping Instruction Operand Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_FPU_TRAP_SRC2_Bits B;
} Ifx_CPU_FPU_TRAP_SRC2;

/** Trapping Instruction Operand Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_FPU_TRAP_SRC3_Bits B;
} Ifx_CPU_FPU_TRAP_SRC3;

/** Instruction Count */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_ICNT_Bits B;
} Ifx_CPU_ICNT;

/** Interrupt Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_ICR_Bits B;
} Ifx_CPU_ICR;

/** Interrupt Stack Pointer */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_ISP_Bits B;
} Ifx_CPU_ISP;

/** Free CSA List Limit Pointer */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_LCX_Bits B;
} Ifx_CPU_LCX;

/** Multi-Count Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_MCNT_Bits B;
} Ifx_CPU_MCNT;

/** Address Space Identifier Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_MMU_ASI_Bits B;
} Ifx_CPU_MMU_ASI;

/** MMU Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_MMU_CON_Bits B;
} Ifx_CPU_MMU_CON;

/** Program Counter */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_PC_Bits B;
} Ifx_CPU_PC;

/** Program Control 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_PCON0_Bits B;
} Ifx_CPU_PCON0;

/** Program Control 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_PCON1_Bits B;
} Ifx_CPU_PCON1;

/** Program Control 2 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_PCON2_Bits B;
} Ifx_CPU_PCON2;

/** Previous Context Information Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_PCXI_Bits B;
} Ifx_CPU_PCXI;

/** Program Integrity Error Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_PIEAR_Bits B;
} Ifx_CPU_PIEAR;

/** Program Integrity Error Trap Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_PIETR_Bits B;
} Ifx_CPU_PIETR;

/** Physical Memory Attributes */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_PMA0_Bits B;
} Ifx_CPU_PMA0;

/** Program Synchronous Trap Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_PSTR_Bits B;
} Ifx_CPU_PSTR;

/** Program Status Word */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_PSW_Bits B;
} Ifx_CPU_PSW;

/** SRI Error Generation Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_SEGEN_Bits B;
} Ifx_CPU_SEGEN;

/** SIST Mode Access Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_SMACON_Bits B;
} Ifx_CPU_SMACON;

/** CPU Safety Protection Register Access Enable Register A */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_SPROT_ACCENA_Bits B;
} Ifx_CPU_SPROT_ACCENA;

/** CPU Safety Protection Region Access Enable Register B */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_SPROT_ACCENB_Bits B;
} Ifx_CPU_SPROT_ACCENB;

/** CPU Safety Protection Region Access Enable Register A */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_SPROT_RGN_ACCENA_Bits B;
} Ifx_CPU_SPROT_RGN_ACCENA;

/** CPU Safety Protection Region Access Enable Register B */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_SPROT_RGN_ACCENB_Bits B;
} Ifx_CPU_SPROT_RGN_ACCENB;

/** CPU Safety Protection Region Lower Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_SPROT_RGN_LA_Bits B;
} Ifx_CPU_SPROT_RGN_LA;

/** CPU Safety protection Region Upper Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_SPROT_RGN_UA_Bits B;
} Ifx_CPU_SPROT_RGN_UA;

/** Software Debug Event */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_SWEVT_Bits B;
} Ifx_CPU_SWEVT;

/** System Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_SYSCON_Bits B;
} Ifx_CPU_SYSCON;

/** CPU Temporal Protection System Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_TPS_CON_Bits B;
} Ifx_CPU_TPS_CON;

/** CPU Temporal Protection System Timer Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_TPS_TIMER_Bits B;
} Ifx_CPU_TPS_TIMER;

/** Trigger Address */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_TR_ADR_Bits B;
} Ifx_CPU_TR_ADR;

/** Trigger Event */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_TR_EVT_Bits B;
} Ifx_CPU_TR_EVT;

/** CPU Trigger Address x */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CPU_TRIG_ACC_Bits B;
} Ifx_CPU_TRIG_ACC;

/******************************************************************************/
/*                           Struct (3 - Object L1)                           */
/******************************************************************************/

/** Protection range */
typedef volatile struct
{
    Ifx_CPU_CPR_L L;                        /** \brief 0, CPU Code Protection Range Lower Bound Register */
    Ifx_CPU_CPR_U U;                        /** \brief 4, CPU Code Protection Range Upper Bound Register */
} Ifx_CPU_CPR;

/** Protection range */
typedef volatile struct
{
    Ifx_CPU_DPR_L L;                        /** \brief 0, CPU Data Protection Range, Lower Bound Register */
    Ifx_CPU_DPR_U U;                        /** \brief 4, CPU Data Protection Range, Upper Bound Register */
} Ifx_CPU_DPR;

/** Safety protection region */
typedef volatile struct
{
    Ifx_CPU_SPROT_RGN_LA LA;                /** \brief 0, CPU Safety Protection Region Lower Address Register */
    Ifx_CPU_SPROT_RGN_UA UA;                /** \brief 4, CPU Safety protection Region Upper Address Register */
    Ifx_CPU_SPROT_RGN_ACCENA ACCENA;        /** \brief 8, CPU Safety Protection Region Access Enable Register A */
    Ifx_CPU_SPROT_RGN_ACCENB ACCENB;        /** \brief C, CPU Safety Protection Region Access Enable Register B */
} Ifx_CPU_SPROT_RGN;

/** Temporal Protection System */
typedef volatile struct
{
    Ifx_CPU_TPS_CON CON;                    /** \brief 0, CPU Temporal Protection System Control Register */
    Ifx_CPU_TPS_TIMER TIMER[2];             /** \brief 4, CPU Temporal Protection System Timer Register */
} Ifx_CPU_TPS;

/** Trigger */
typedef volatile struct
{
    Ifx_CPU_TR_EVT EVT;                     /** \brief 0, Trigger Event  */
    Ifx_CPU_TR_ADR ADR;                     /** \brief 4, Trigger Address  */
} Ifx_CPU_TR;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** CPU object */
typedef volatile struct
{
    unsigned char reserved_0[4144];         /** \brief 0 */
    Ifx_CPU_SEGEN SEGEN;                    /** \brief 1030, SRI Error Generation Register */
    unsigned char reserved_1034[28620];     /** \brief 1034 */
    Ifx_CPU_MMU_CON MMU_CON;                /** \brief 8000, MMU Control Register */
    Ifx_CPU_MMU_ASI MMU_ASI;                /** \brief 8004, Address Space Identifier Register */
    unsigned char reserved_8008[20];        /** \brief 8008 */
    Ifx_CPU_PMA0 PMA0;                      /** \brief 801C, Physical Memory Attributes */
    unsigned char reserved_8020[4064];      /** \brief 8020 */
    Ifx_CPU_DCON2 DCON2;                    /** \brief 9000, Data Control Register 2 */
    unsigned char reserved_9004[8];         /** \brief 9004 */
    Ifx_CPU_SMACON SMACON;                  /** \brief 900C, SIST Mode Access Control Register */
    Ifx_CPU_DSTR DSTR;                      /** \brief 9010, Data Synchronous Trap Register */
    unsigned char reserved_9014[4];         /** \brief 9014 */
    Ifx_CPU_DATR DATR;                      /** \brief 9018, Data Asynchronous Trap Register */
    Ifx_CPU_DEADD DEADD;                    /** \brief 901C, Data Error Address Register */
    Ifx_CPU_DIEAR DIEAR;                    /** \brief 9020, Data Integrity Error Address Register */
    Ifx_CPU_DIETR DIETR;                    /** \brief 9024, Data Integrity Error Trap Register */
    unsigned char reserved_9028[24];        /** \brief 9028 */
    Ifx_CPU_DCON0 DCON0;                    /** \brief 9040, Data Memory Control Register */
    unsigned char reserved_9044[444];       /** \brief 9044 */
    Ifx_CPU_PSTR PSTR;                      /** \brief 9200, Program Synchronous Trap Register */
    Ifx_CPU_PCON1 PCON1;                    /** \brief 9204, Program Control 1 */
    Ifx_CPU_PCON2 PCON2;                    /** \brief 9208, Program Control 2 */
    Ifx_CPU_PCON0 PCON0;                    /** \brief 920C, Program Control 0 */
    Ifx_CPU_PIEAR PIEAR;                    /** \brief 9210, Program Integrity Error Address Register */
    Ifx_CPU_PIETR PIETR;                    /** \brief 9214, Program Integrity Error Trap Register */
    unsigned char reserved_9218[488];       /** \brief 9218 */
    Ifx_CPU_COMPAT COMPAT;                  /** \brief 9400, Compatibility Control Register */
    unsigned char reserved_9404[3068];      /** \brief 9404 */
    Ifx_CPU_FPU_TRAP_CON FPU_TRAP_CON;      /** \brief A000, CPU Trap Control Register */
    Ifx_CPU_FPU_TRAP_PC FPU_TRAP_PC;        /** \brief A004, CPU Trapping Instruction Program Counter Register */
    Ifx_CPU_FPU_TRAP_OPC FPU_TRAP_OPC;      /** \brief A008, CPU Trapping Instruction Opcode Register */
    unsigned char reserved_A00C[4];         /** \brief A00C */
    Ifx_CPU_FPU_TRAP_SRC1 FPU_TRAP_SRC1;    /** \brief A010, CPU Trapping Instruction Operand Register */
    Ifx_CPU_FPU_TRAP_SRC2 FPU_TRAP_SRC2;    /** \brief A014, CPU Trapping Instruction Operand Register */
    Ifx_CPU_FPU_TRAP_SRC3 FPU_TRAP_SRC3;    /** \brief A018, Trapping Instruction Operand Register */
    unsigned char reserved_A01C[8164];      /** \brief A01C */
    Ifx_CPU_DPR DPR[16];                    /** \brief C000, Protection range */
    unsigned char reserved_C080[3968];      /** \brief C080 */
    Ifx_CPU_CPR CPR[8];                     /** \brief D000, Protection range */
    unsigned char reserved_D040[4032];      /** \brief D040 */
    Ifx_CPU_CPXE CPXE[4];                   /** \brief E000, CPU Code Protection Execute Enable Register Set */
    Ifx_CPU_DPRE DPRE[4];                   /** \brief E010, CPU Data Protection Read Enable Register Set */
    Ifx_CPU_DPWE DPWE[4];                   /** \brief E020, CPU Data Protection Write Enable Register Set */
    unsigned char reserved_E030[976];       /** \brief E030 */
    Ifx_CPU_TPS TPS;                        /** \brief E400, Temporal Protection System */
    unsigned char reserved_E40C[3060];      /** \brief E40C */
    Ifx_CPU_TR TR[8];                       /** \brief F000, Trigger */
    unsigned char reserved_F040[3008];      /** \brief F040 */
    Ifx_CPU_CCTRL CCTRL;                    /** \brief FC00, Counter Control */
    Ifx_CPU_CCNT CCNT;                      /** \brief FC04, CPU Clock Cycle Count */
    Ifx_CPU_ICNT ICNT;                      /** \brief FC08, Instruction Count */
    Ifx_CPU_MCNT MCNT[3];                   /** \brief FC0C, Multi-Count Register */
    unsigned char reserved_FC18[232];       /** \brief FC18 */
    Ifx_CPU_DBGSR DBGSR;                    /** \brief FD00, Debug Status Register */
    unsigned char reserved_FD04[4];         /** \brief FD04 */
    Ifx_CPU_EXEVT EXEVT;                    /** \brief FD08, External Event Register */
    Ifx_CPU_CREVT CREVT;                    /** \brief FD0C, Core Register Access Event */
    Ifx_CPU_SWEVT SWEVT;                    /** \brief FD10, Software Debug Event */
    unsigned char reserved_FD14[28];        /** \brief FD14 */
    Ifx_CPU_TRIG_ACC TRIG_ACC;              /** \brief FD30, CPU Trigger Address x */
    unsigned char reserved_FD34[12];        /** \brief FD34 */
    Ifx_CPU_DMS DMS;                        /** \brief FD40, Debug Monitor Start Address */
    Ifx_CPU_DCX DCX;                        /** \brief FD44, Debug Context Save Area Pointer */
    Ifx_CPU_DBGTCR DBGTCR;                  /** \brief FD48, Debug Trap Control Register */
    unsigned char reserved_FD4C[180];       /** \brief FD4C */
    Ifx_CPU_PCXI PCXI;                      /** \brief FE00, Previous Context Information Register */
    Ifx_CPU_PSW PSW;                        /** \brief FE04, Program Status Word */
    Ifx_CPU_PC PC;                          /** \brief FE08, Program Counter */
    unsigned char reserved_FE0C[8];         /** \brief FE0C */
    Ifx_CPU_SYSCON SYSCON;                  /** \brief FE14, System Configuration Register */
    Ifx_CPU_CPU_ID CPU_ID;                  /** \brief FE18, CPU Identification Register TC1.6P */
    Ifx_CPU_CORE_ID CORE_ID;                /** \brief FE1C, CPU Core Identification Register */
    Ifx_CPU_BIV BIV;                        /** \brief FE20, Base Interrupt Vector Table Pointer */
    Ifx_CPU_BTV BTV;                        /** \brief FE24, Base Trap Vector Table Pointer */
    Ifx_CPU_ISP ISP;                        /** \brief FE28, Interrupt Stack Pointer */
    Ifx_CPU_ICR ICR;                        /** \brief FE2C, Interrupt Control Register */
    unsigned char reserved_FE30[8];         /** \brief FE30 */
    Ifx_CPU_FCX FCX;                        /** \brief FE38, Free CSA List Head Pointer */
    Ifx_CPU_LCX LCX;                        /** \brief FE3C, Free CSA List Limit Pointer */
    unsigned char reserved_FE40[192];       /** \brief FE40 */
    Ifx_CPU_D D[16];                        /** \brief FF00, Data General Purpose Register */
    unsigned char reserved_FF40[64];        /** \brief FF40 */
    Ifx_CPU_A A[16];                        /** \brief FF80, Address General Purpose Register */
    unsigned char reserved_FFC0[64];        /** \brief FFC0 */
} Ifx_CPU;

/** CPU SPROT object */
typedef volatile struct
{
    unsigned char reserved_0[57344];        /** \brief 0 */
    Ifx_CPU_SPROT_RGN RGN[8];               /** \brief E000, Safety protection region */
    unsigned char reserved_E080[128];       /** \brief E080 */
    Ifx_CPU_SPROT_ACCENA ACCENA;            /** \brief E100, CPU Safety Protection Register Access Enable Register A */
    Ifx_CPU_SPROT_ACCENB ACCENB;            /** \brief E104, CPU Safety Protection Region Access Enable Register B */
    unsigned char reserved_E108[7928];      /** \brief E108 */
} Ifx_CPU_SPROT;
/******************************************************************************/
#endif /* IFXCPU_REGDEF_H */

