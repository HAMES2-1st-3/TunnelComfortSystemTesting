/**
 * \file IfxFlash_regdef.h
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
#ifndef IFXFLASH_REGDEF_H
#define IFXFLASH_REGDEF_H
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
} Ifx_FLASH_ACCEN0_Bits;

/** Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_FLASH_ACCEN1_Bits;

/** CBAB Configuration */
typedef struct
{
    unsigned int SEL: 6;                    /** \brief [5:0] Select Bit-Errors (rw) */
    unsigned int reserved_6: 2;
    unsigned int CLR: 1;                    /** \brief [8:8] Clear (w) */
    unsigned int DIS: 1;                    /** \brief [9:9] Disable (rw) */
    unsigned int reserved_10: 22;
} Ifx_FLASH_CBAB_CFG_Bits;

/** CBAB Status */
typedef struct
{
    unsigned int VLD0: 1;                   /** \brief [0:0] Filling Level (rh) */
    unsigned int VLD1: 1;                   /** \brief [1:1] Filling Level (rh) */
    unsigned int VLD2: 1;                   /** \brief [2:2] Filling Level (rh) */
    unsigned int VLD3: 1;                   /** \brief [3:3] Filling Level (rh) */
    unsigned int VLD4: 1;                   /** \brief [4:4] Filling Level (rh) */
    unsigned int reserved_5: 27;
} Ifx_FLASH_CBAB_STAT_Bits;

/** CBAB FIFO TOP Entry */
typedef struct
{
    unsigned int reserved_0: 5;
    unsigned int ADDR: 19;                  /** \brief [23:5] Address (rh) */
    unsigned int ERR: 6;                    /** \brief [29:24] Error Type (rh) */
    unsigned int VLD: 1;                    /** \brief [30:30] Valid (rh) */
    unsigned int CLR: 1;                    /** \brief [31:31] Clear (w) */
} Ifx_FLASH_CBAB_TOP_Bits;

/** ECC Read Register DF */
typedef struct
{
    unsigned int RCODE: 22;                 /** \brief [21:0] Error Correction Read Code (rh) */
    unsigned int RED: 2;                    /** \brief [23:22] Redundant Bits (rh) */
    unsigned int reserved_24: 7;
    unsigned int ECCORDIS: 1;               /** \brief [31:31] ECC Correction Disable (rw) */
} Ifx_FLASH_ECCRD_Bits;

/** ECC Read Register */
typedef struct
{
    unsigned int RCODE: 22;                 /** \brief [21:0] Error Correction Read Code (rh) */
    unsigned int RED: 2;                    /** \brief [23:22] Redundant Bits (rh) */
    unsigned int reserved_24: 7;
    unsigned int ECCORDIS: 1;               /** \brief [31:31] ECC Correction Disable (rw) */
} Ifx_FLASH_ECCRP_Bits;

/** ECC Write Register */
typedef struct
{
    unsigned int WCODE: 22;                 /** \brief [21:0] Error Correction Write Code (rw) */
    unsigned int reserved_22: 8;
    unsigned int DECENCDIS: 1;              /** \brief [30:30] DFlash ECC Encoding Disable (rw) */
    unsigned int PECENCDIS: 1;              /** \brief [31:31] PFlash ECC Encoding Disable (rw) */
} Ifx_FLASH_ECCW_Bits;

/** Flash Configuration Register */
typedef struct
{
    unsigned int WSPFLASH: 4;               /** \brief [3:0] Wait States for read access to PFlash (rw) */
    unsigned int WSECPF: 2;                 /** \brief [5:4] Wait States for Error Correction of PFlash (rw) */
    unsigned int WSDFLASH: 6;               /** \brief [11:6] Wait States for read access to DFlash (rw) */
    unsigned int WSECDF: 3;                 /** \brief [14:12] Wait State for Error Correction of DFlash (rw) */
    unsigned int IDLE: 1;                   /** \brief [15:15] Dynamic Flash Idle (rw) */
    unsigned int ESLDIS: 1;                 /** \brief [16:16] External Sleep Request Disable (rw) */
    unsigned int SLEEP: 1;                  /** \brief [17:17] Flash SLEEP / Flash Shut-Down (rw) */
    unsigned int NSAFECC: 1;                /** \brief [18:18] Non-Safety PFlash ECC (rw) */
    unsigned int STALL: 1;                  /** \brief [19:19] Stall SRI (rw) */
    unsigned int FSISTART: 2;               /** \brief [21:20] Start FSI (rwh) */
    unsigned int REC: 2;                    /** \brief [23:22] Start FSI Recovery (rwh) */
    unsigned int VOPERM: 1;                 /** \brief [24:24] Verify and Operation Error Interrupt Mask (rw) */
    unsigned int SQERM: 1;                  /** \brief [25:25] Command Sequence Error Interrupt Mask (rw) */
    unsigned int PROERM: 1;                 /** \brief [26:26] Protection Error Interrupt Mask (rw) */
    unsigned int reserved_27: 3;
    unsigned int PR5V: 1;                   /** \brief [30:30] Programming Supply 5V (rw) */
    unsigned int EOBM: 1;                   /** \brief [31:31] End of Busy Interrupt Mask (rw) */
} Ifx_FLASH_FCON_Bits;

/** Flash Protection Control and Status Register */
typedef struct
{
    unsigned int PROINP: 1;                 /** \brief [0:0] PFlash Protection (rh) */
    unsigned int PRODISP: 1;                /** \brief [1:1] PFlash Protection DisabledCleared with command "Resume Protection". (rh) */
    unsigned int PROIND: 1;                 /** \brief [2:2] DFlash Protection (rh) */
    unsigned int PRODISD: 1;                /** \brief [3:3] DFlash Protection Disabled (rh) */
    unsigned int PROINHSMCOTP: 1;           /** \brief [4:4] HSM OTP Protection (rh) */
    unsigned int PROINHSMCFG: 1;            /** \brief [5:5] HSM Configuration Protection (rh) */
    unsigned int PROINOTP: 1;               /** \brief [6:6] OTP and Write-Once Protection (rh) */
    unsigned int PROINIFX: 1;               /** \brief [7:7] UCB_IFX Protection (rh) */
    unsigned int PROINDBG: 1;               /** \brief [8:8] Debug Interface Password Protection (rh) */
    unsigned int PRODISDBG: 1;              /** \brief [9:9] Debug Interface Password Protection Disabled (rh) */
    unsigned int PROINHSM: 1;               /** \brief [10:10] HSM Configuration (rh) */
    unsigned int reserved_11: 5;
    unsigned int DCFP: 1;                   /** \brief [16:16] Disable Code Fetch from PFlash Memory for CPU0 PMI (rwh) */
    unsigned int DDFP: 1;                   /** \brief [17:17] Disable Read from PFlash (rwh) */
    unsigned int DDFPX: 1;                  /** \brief [18:18] Disable Read from PFlash for Other Masters (rwh) */
    unsigned int reserved_19: 1;
    unsigned int DDFD: 1;                   /** \brief [20:20] Disable Data Fetch from DFlash Memory (rwh) */
    unsigned int reserved_21: 1;
    unsigned int ENPE: 2;                   /** \brief [23:22] Enable Program/Erase (rw) */
    unsigned int reserved_24: 8;
} Ifx_FLASH_FPRO_Bits;

/** Flash Status Register */
typedef struct
{
    unsigned int FABUSY: 1;                 /** \brief [0:0] Flash Array Busy Cleared with application reset (rh) */
    unsigned int D0BUSY: 1;                 /** \brief [1:1] Data Flash Bank0 Busy (rh) */
    unsigned int D1BUSY: 1;                 /** \brief [2:2] Data Flash Bank1 Busy (rh) */
    unsigned int P0BUSY: 1;                 /** \brief [3:3] Program Flash PF0 Busy (rh) */
    unsigned int P1BUSY: 1;                 /** \brief [4:4] Program Flash PF1 Busy (rh) */
    unsigned int RES5: 1;                   /** \brief [5:5] Reserved for Program Flash PF2 Busy (rh) */
    unsigned int RES6: 1;                   /** \brief [6:6] Reserved for Program Flash PF3 Busy (rh) */
    unsigned int PROG: 1;                   /** \brief [7:7] Programming State Cleared with command "Clear Status"Cleared with power-on reset (PORST) (rwh) */
    unsigned int ERASE: 1;                  /** \brief [8:8] Erase State (rwh) */
    unsigned int PFPAGE: 1;                 /** \brief [9:9] Program Flash in Page ModeCleared with command "Reset to Read" (rh) */
    unsigned int DFPAGE: 1;                 /** \brief [10:10] Data Flash in Page Mode (rh) */
    unsigned int OPER: 1;                   /** \brief [11:11] Flash Operation Error (rwh) */
    unsigned int SQER: 1;                   /** \brief [12:12] Command Sequence Error (rwh) */
    unsigned int PROER: 1;                  /** \brief [13:13] Protection Error (rwh) */
    unsigned int PFSBER: 1;                 /** \brief [14:14] PFlash Single-Bit Error and Correction (rwh) */
    unsigned int PFDBER: 1;                 /** \brief [15:15] PFlash Double-Bit Error (rwh) */
    unsigned int PFMBER: 1;                 /** \brief [16:16] PFlash Uncorrectable Error (rwh) */
    unsigned int RES17: 1;                  /** \brief [17:17] Reserved (rwh) */
    unsigned int DFSBER: 1;                 /** \brief [18:18] DFlash Single-Bit Error (rwh) */
    unsigned int DFDBER: 1;                 /** \brief [19:19] DFlash Double-Bit Error (rwh) */
    unsigned int DFTBER: 1;                 /** \brief [20:20] DFlash Triple-Bit Error (rwh) */
    unsigned int DFMBER: 1;                 /** \brief [21:21] DFlash Uncorrectable Error (rwh) */
    unsigned int SRIADDERR: 1;              /** \brief [22:22] SRI Bus Address ECC Error (rwh) */
    unsigned int reserved_23: 1;
    unsigned int REC: 1;                    /** \brief [24:24] Recovery State (rwh) */
    unsigned int PVER: 1;                   /** \brief [25:25] Program Verify Error (rwh) */
    unsigned int EVER: 1;                   /** \brief [26:26] Erase Verify Error (rwh) */
    unsigned int SPND: 1;                   /** \brief [27:27] Operation Suspended (rh) */
    unsigned int SLM: 1;                    /** \brief [28:28] Flash Sleep Mode (rh) */
    unsigned int VIS: 1;                    /** \brief [29:29] Flash Virgin / Initial State (rh) */
    unsigned int ORIER: 1;                  /** \brief [30:30] Original Error (rh) */
    unsigned int CFU: 1;                    /** \brief [31:31] Configuration Sector Unlocked (rh) */
} Ifx_FLASH_FSR_Bits;

/** Margin Control Register DFlash */
typedef struct
{
    unsigned int HMARGIN: 1;                /** \brief [0:0] Hard Margin Selection (rw) */
    unsigned int SELD0: 1;                  /** \brief [1:1] DFLASH Bank Selection (rw) */
    unsigned int SELD1: 1;                  /** \brief [2:2] DFLASH Bank Selection (rw) */
    unsigned int SPND: 1;                   /** \brief [3:3] Suspend (rwh) */
    unsigned int reserved_4: 11;
    unsigned int TRAPDIS: 1;                /** \brief [15:15] DFLASH Uncorrectable Bit Error Trap Disable (rw) */
    unsigned int reserved_16: 16;
} Ifx_FLASH_MARD_Bits;

/** Margin Control Register PFlash */
typedef struct
{
    unsigned int SELP0: 1;                  /** \brief [0:0] PFLASH Bank Selection (rw) */
    unsigned int SELP1: 1;                  /** \brief [1:1] PFLASH Bank Selection (rw) */
    unsigned int RES2: 1;                   /** \brief [2:2] Reserved (rw) */
    unsigned int RES3: 1;                   /** \brief [3:3] Reserved (rw) */
    unsigned int reserved_4: 11;
    unsigned int TRAPDIS: 1;                /** \brief [15:15] PFLASH Uncorrectable Bit Error Trap Disable (rw) */
    unsigned int reserved_16: 16;
} Ifx_FLASH_MARP_Bits;

/** DFlash Protection Configuration */
typedef struct
{
    unsigned int L: 1;                      /** \brief [0:0] DF_EEPROM Locked for Write Protection (rh) */
    unsigned int NSAFECC: 1;                /** \brief [1:1] Non-Safety PFlash ECC (rh) */
    unsigned int RAMIN: 2;                  /** \brief [3:2] RAM Initialization by SSW Control (rh) */
    unsigned int RAMINSEL: 4;               /** \brief [7:4] RAM Initialization Selection (rh) */
    unsigned int RES15: 8;                  /** \brief [15:8] Reserved (rh) */
    unsigned int OSCCFG: 1;                 /** \brief [16:16] OSC Configuration by SSW (rh) */
    unsigned int MODE: 2;                   /** \brief [18:17] OSC Mode (rh) */
    unsigned int APREN: 1;                  /** \brief [19:19] OSC Amplitude Regulation Enable (rh) */
    unsigned int CAP0EN: 1;                 /** \brief [20:20] OSC Capacitance x Enable (x=0-3) (rh) */
    unsigned int CAP1EN: 1;                 /** \brief [21:21] OSC Capacitance x Enable (x=0-3) (rh) */
    unsigned int CAP2EN: 1;                 /** \brief [22:22] OSC Capacitance x Enable (x=0-3) (rh) */
    unsigned int CAP3EN: 1;                 /** \brief [23:23] OSC Capacitance x Enable (x=0-3) (rh) */
    unsigned int RES29: 6;                  /** \brief [29:24] Reserved (rh) */
    unsigned int TRISTREQ: 1;               /** \brief [30:30] Tristate Request (rh) */
    unsigned int RPRO: 1;                   /** \brief [31:31] Read Protection Configuration (rh) */
} Ifx_FLASH_PROCOND_Bits;

/** HSM Exclusive Config. */
typedef struct
{
    unsigned int HSMDBGDIS: 1;              /** \brief [0:0] HSM Debug Disable (rh) */
    unsigned int DBGIFLCK: 1;               /** \brief [1:1] Debug Interface Locked (rh) */
    unsigned int TSTIFLCK: 1;               /** \brief [2:2] Test Interface Locked (rh) */
    unsigned int HSMTSTDIS: 1;              /** \brief [3:3] HSM Test Disable (rh) */
    unsigned int HSMBOOTEN: 1;              /** \brief [4:4] HSM Boot Enable (rh) */
    unsigned int SSWWAIT: 1;                /** \brief [5:5] SSW Wait (rh) */
    unsigned int HSM6X: 1;                  /** \brief [6:6] HSM Code Sector 6 Exclusive (rh) */
    unsigned int HSMDX: 1;                  /** \brief [7:7] HSM Data Sectors Exclusive (rh) */
    unsigned int RES15: 8;                  /** \brief [15:8] Reserved (rh) */
    unsigned int HSM16X: 1;                 /** \brief [16:16] HSM Code Sector 16 Exclusive (rh) */
    unsigned int HSM17X: 1;                 /** \brief [17:17] HSM Code Sector 17 Exclusive (rh) */
    unsigned int RES31: 14;                 /** \brief [31:18] Reserved (rh) */
} Ifx_FLASH_PROCONHSM_Bits;

/** HSM Code Flash Protection Configuration */
typedef struct
{
    unsigned int RES5: 6;                   /** \brief [5:0] Reserved (rh) */
    unsigned int S6L: 1;                    /** \brief [6:6] HSM Code Sector 6 Locked for Write Protection (rh) */
    unsigned int RES15: 9;                  /** \brief [15:7] Reserved (rh) */
    unsigned int S16L: 1;                   /** \brief [16:16] HSM Code Sector 16 Locked for Write Protection (rh) */
    unsigned int S17L: 1;                   /** \brief [17:17] HSM Code Sector 17 Locked for Write Protection (rh) */
    unsigned int RES30: 13;                 /** \brief [30:18] Reserved (rh) */
    unsigned int RPRO: 1;                   /** \brief [31:31] Read Protection Configuration (rh) */
} Ifx_FLASH_PROCONHSMC_Bits;

/** HSM Code Flash OTP Protection Configuration */
typedef struct
{
    unsigned int reserved_0: 6;
    unsigned int S6ROM: 1;                  /** \brief [6:6] HSM Code Sector 6 Locked Forever (rh) */
    unsigned int reserved_7: 9;
    unsigned int S16ROM: 1;                 /** \brief [16:16] HSM Code Sector 16 Locked Forever (rh) */
    unsigned int S17ROM: 1;                 /** \brief [17:17] HSM Code Sector 17 Locked Forever (rh) */
    unsigned int reserved_18: 14;
} Ifx_FLASH_PROCONHSMCOTP_Bits;

/** OTP Protection Configuration */
typedef struct
{
    unsigned int S0ROM: 1;                  /** \brief [0:0] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S1ROM: 1;                  /** \brief [1:1] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S2ROM: 1;                  /** \brief [2:2] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S3ROM: 1;                  /** \brief [3:3] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S4ROM: 1;                  /** \brief [4:4] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S5ROM: 1;                  /** \brief [5:5] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S6ROM: 1;                  /** \brief [6:6] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S7ROM: 1;                  /** \brief [7:7] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S8ROM: 1;                  /** \brief [8:8] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S9ROM: 1;                  /** \brief [9:9] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S10ROM: 1;                 /** \brief [10:10] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S11ROM: 1;                 /** \brief [11:11] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S12ROM: 1;                 /** \brief [12:12] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S13ROM: 1;                 /** \brief [13:13] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S14ROM: 1;                 /** \brief [14:14] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S15ROM: 1;                 /** \brief [15:15] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S16ROM: 1;                 /** \brief [16:16] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S17ROM: 1;                 /** \brief [17:17] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S18ROM: 1;                 /** \brief [18:18] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S19ROM: 1;                 /** \brief [19:19] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S20ROM: 1;                 /** \brief [20:20] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S21ROM: 1;                 /** \brief [21:21] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S22ROM: 1;                 /** \brief [22:22] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S23ROM: 1;                 /** \brief [23:23] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S24ROM: 1;                 /** \brief [24:24] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S25ROM: 1;                 /** \brief [25:25] PFlash p Sector x Locked for Forever (rh) */
    unsigned int S26ROM: 1;                 /** \brief [26:26] PFlash p Sector x Locked for Forever (rh) */
    unsigned int reserved_27: 4;
    unsigned int TP: 1;                     /** \brief [31:31] Tuning Protection (rh) */
} Ifx_FLASH_PROCONOTP_Bits;

/** PFlash Protection Configuration */
typedef struct
{
    unsigned int S0L: 1;                    /** \brief [0:0] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S1L: 1;                    /** \brief [1:1] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S2L: 1;                    /** \brief [2:2] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S3L: 1;                    /** \brief [3:3] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S4L: 1;                    /** \brief [4:4] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S5L: 1;                    /** \brief [5:5] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S6L: 1;                    /** \brief [6:6] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S7L: 1;                    /** \brief [7:7] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S8L: 1;                    /** \brief [8:8] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S9L: 1;                    /** \brief [9:9] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S10L: 1;                   /** \brief [10:10] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S11L: 1;                   /** \brief [11:11] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S12L: 1;                   /** \brief [12:12] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S13L: 1;                   /** \brief [13:13] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S14L: 1;                   /** \brief [14:14] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S15L: 1;                   /** \brief [15:15] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S16L: 1;                   /** \brief [16:16] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S17L: 1;                   /** \brief [17:17] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S18L: 1;                   /** \brief [18:18] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S19L: 1;                   /** \brief [19:19] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S20L: 1;                   /** \brief [20:20] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S21L: 1;                   /** \brief [21:21] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S22L: 1;                   /** \brief [22:22] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S23L: 1;                   /** \brief [23:23] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S24L: 1;                   /** \brief [24:24] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S25L: 1;                   /** \brief [25:25] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int S26L: 1;                   /** \brief [26:26] PFlash p Sector x Locked for Write Protection (rh) */
    unsigned int reserved_27: 4;
    unsigned int RPRO: 1;                   /** \brief [31:31] Read Protection Configuration (rh) */
} Ifx_FLASH_PROCONP_Bits;

/** Write-Once Protection Configuration */
typedef struct
{
    unsigned int S0WOP: 1;                  /** \brief [0:0] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S1WOP: 1;                  /** \brief [1:1] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S2WOP: 1;                  /** \brief [2:2] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S3WOP: 1;                  /** \brief [3:3] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S4WOP: 1;                  /** \brief [4:4] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S5WOP: 1;                  /** \brief [5:5] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S6WOP: 1;                  /** \brief [6:6] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S7WOP: 1;                  /** \brief [7:7] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S8WOP: 1;                  /** \brief [8:8] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S9WOP: 1;                  /** \brief [9:9] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S10WOP: 1;                 /** \brief [10:10] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S11WOP: 1;                 /** \brief [11:11] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S12WOP: 1;                 /** \brief [12:12] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S13WOP: 1;                 /** \brief [13:13] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S14WOP: 1;                 /** \brief [14:14] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S15WOP: 1;                 /** \brief [15:15] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S16WOP: 1;                 /** \brief [16:16] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S17WOP: 1;                 /** \brief [17:17] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S18WOP: 1;                 /** \brief [18:18] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S19WOP: 1;                 /** \brief [19:19] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S20WOP: 1;                 /** \brief [20:20] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S21WOP: 1;                 /** \brief [21:21] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S22WOP: 1;                 /** \brief [22:22] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S23WOP: 1;                 /** \brief [23:23] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S24WOP: 1;                 /** \brief [24:24] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S25WOP: 1;                 /** \brief [25:25] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int S26WOP: 1;                 /** \brief [26:26] PFlash p Sector x Configured for Write-Once Protection (rh) */
    unsigned int reserved_27: 4;
    unsigned int DATM: 1;                   /** \brief [31:31] Disable ATM (rh) */
} Ifx_FLASH_PROCONWOP_Bits;

/** Read Buffer Cfg 0 */
typedef struct
{
    unsigned int TAG: 6;                    /** \brief [5:0] Master Tag (rw) */
    unsigned int reserved_6: 26;
} Ifx_FLASH_RDB_CFG0_Bits;

/** Read Buffer Cfg 1 */
typedef struct
{
    unsigned int TAG: 6;                    /** \brief [5:0] Master Tag (rw) */
    unsigned int reserved_6: 26;
} Ifx_FLASH_RDB_CFG1_Bits;

/** Read Buffer Cfg 2 */
typedef struct
{
    unsigned int TAG: 6;                    /** \brief [5:0] Master Tag (rw) */
    unsigned int reserved_6: 26;
} Ifx_FLASH_RDB_CFG2_Bits;

/** UBAB Configuration */
typedef struct
{
    unsigned int SEL: 6;                    /** \brief [5:0] Select Bit-Errors (rw) */
    unsigned int reserved_6: 2;
    unsigned int CLR: 1;                    /** \brief [8:8] Clear (w) */
    unsigned int DIS: 1;                    /** \brief [9:9] Disable (rw) */
    unsigned int reserved_10: 22;
} Ifx_FLASH_UBAB_CFG_Bits;

/** UBAB Status */
typedef struct
{
    unsigned int VLD0: 1;                   /** \brief [0:0] Filling Level (rh) */
    unsigned int reserved_1: 31;
} Ifx_FLASH_UBAB_STAT_Bits;

/** UBAB FIFO TOP Entry */
typedef struct
{
    unsigned int reserved_0: 5;
    unsigned int ADDR: 19;                  /** \brief [23:5] Address (rh) */
    unsigned int ERR: 6;                    /** \brief [29:24] Error Type (rh) */
    unsigned int VLD: 1;                    /** \brief [30:30] Valid (rh) */
    unsigned int CLR: 1;                    /** \brief [31:31] Clear (w) */
} Ifx_FLASH_UBAB_TOP_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_ACCEN0_Bits B;
} Ifx_FLASH_ACCEN0;

/** Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_ACCEN1_Bits B;
} Ifx_FLASH_ACCEN1;

/** CBAB Configuration */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_CBAB_CFG_Bits B;
} Ifx_FLASH_CBAB_CFG;

/** CBAB Status */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_CBAB_STAT_Bits B;
} Ifx_FLASH_CBAB_STAT;

/** CBAB FIFO TOP Entry */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_CBAB_TOP_Bits B;
} Ifx_FLASH_CBAB_TOP;

/** ECC Read Register DF */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_ECCRD_Bits B;
} Ifx_FLASH_ECCRD;

/** ECC Read Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_ECCRP_Bits B;
} Ifx_FLASH_ECCRP;

/** ECC Write Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_ECCW_Bits B;
} Ifx_FLASH_ECCW;

/** Flash Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_FCON_Bits B;
} Ifx_FLASH_FCON;

/** Flash Protection Control and Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_FPRO_Bits B;
} Ifx_FLASH_FPRO;

/** Flash Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_FSR_Bits B;
} Ifx_FLASH_FSR;

/** Margin Control Register DFlash */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_MARD_Bits B;
} Ifx_FLASH_MARD;

/** Margin Control Register PFlash */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_MARP_Bits B;
} Ifx_FLASH_MARP;

/** DFlash Protection Configuration */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_PROCOND_Bits B;
} Ifx_FLASH_PROCOND;

/** HSM Exclusive Config. */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_PROCONHSM_Bits B;
} Ifx_FLASH_PROCONHSM;

/** HSM Code Flash Protection Configuration */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_PROCONHSMC_Bits B;
} Ifx_FLASH_PROCONHSMC;

/** HSM Code Flash OTP Protection Configuration */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_PROCONHSMCOTP_Bits B;
} Ifx_FLASH_PROCONHSMCOTP;

/** OTP Protection Configuration */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_PROCONOTP_Bits B;
} Ifx_FLASH_PROCONOTP;

/** PFlash Protection Configuration */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_PROCONP_Bits B;
} Ifx_FLASH_PROCONP;

/** Write-Once Protection Configuration */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_PROCONWOP_Bits B;
} Ifx_FLASH_PROCONWOP;

/** Read Buffer Cfg 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_RDB_CFG0_Bits B;
} Ifx_FLASH_RDB_CFG0;

/** Read Buffer Cfg 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_RDB_CFG1_Bits B;
} Ifx_FLASH_RDB_CFG1;

/** Read Buffer Cfg 2 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_RDB_CFG2_Bits B;
} Ifx_FLASH_RDB_CFG2;

/** UBAB Configuration */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_UBAB_CFG_Bits B;
} Ifx_FLASH_UBAB_CFG;

/** UBAB Status */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_UBAB_STAT_Bits B;
} Ifx_FLASH_UBAB_STAT;

/** UBAB FIFO TOP Entry */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_FLASH_UBAB_TOP_Bits B;
} Ifx_FLASH_UBAB_TOP;

/******************************************************************************/
/*                           Struct (3 - Object L1)                           */
/******************************************************************************/

/** Corrected Bits Address Buffer (CBAB) object */
typedef volatile struct
{
    Ifx_FLASH_CBAB_CFG CFG;                 /** \brief 0, CBAB Configuration */
    Ifx_FLASH_CBAB_STAT STAT;               /** \brief 4, CBAB Status */
    Ifx_FLASH_CBAB_TOP TOP;                 /** \brief 8, CBAB FIFO TOP Entry */
} Ifx_FLASH_CBAB;

/** Read Buffer Configuration object */
typedef volatile struct
{
    Ifx_FLASH_RDB_CFG0 CFG0;                /** \brief 0, Read Buffer Cfg 0 */
    Ifx_FLASH_RDB_CFG1 CFG1;                /** \brief 4, Read Buffer Cfg 1 */
    Ifx_FLASH_RDB_CFG2 CFG2;                /** \brief 8, Read Buffer Cfg 2 */
} Ifx_FLASH_RDB;

/** Uncorrectable Bits Address Buffer (UBAB) object */
typedef volatile struct
{
    Ifx_FLASH_UBAB_CFG CFG;                 /** \brief 0, UBAB Configuration */
    Ifx_FLASH_UBAB_STAT STAT;               /** \brief 4, UBAB Status */
    Ifx_FLASH_UBAB_TOP TOP;                 /** \brief 8, UBAB FIFO TOP Entry */
} Ifx_FLASH_UBAB;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** FLASH object. */
typedef volatile struct
{
    unsigned char reserved_0[4104];         /** \brief 0 */
    Ifx_ID1 ID;                             /** \brief 1008, Flash Module Identification Register */
    unsigned char reserved_100C[4];         /** \brief 100C */
    Ifx_FLASH_FSR FSR;                      /** \brief 1010, Flash Status Register */
    Ifx_FLASH_FCON FCON;                    /** \brief 1014, Flash Configuration Register */
    unsigned char reserved_1018[4];         /** \brief 1018 */
    Ifx_FLASH_FPRO FPRO;                    /** \brief 101C, Flash Protection Control and Status Register */
    Ifx_FLASH_PROCONP PROCONP[2];           /** \brief 1020, PFlash Protection Configuration for ports */
    unsigned char reserved_1028[8];         /** \brief 1028 */
    Ifx_FLASH_PROCOND PROCOND;              /** \brief 1030, DFlash Protection Configuration */
    Ifx_FLASH_PROCONHSMCOTP PROCONHSMCOTP;  /** \brief 1034, HSM Code Flash OTP Protection Configuration */
    Ifx_FLASH_PROCONOTP PROCONOTP[2];       /** \brief 1038, OTP Protection Configuration for ports */
    unsigned char reserved_1040[8];         /** \brief 1040 */
    Ifx_FLASH_PROCONWOP PROCONWOP[2];       /** \brief 1048, Write-Once Protection Configuration for ports */
    unsigned char reserved_1050[8];         /** \brief 1050 */
    Ifx_FLASH_PROCONHSMC PROCONHSMC;        /** \brief 1058, HSM Code Flash Protection Configuration */
    Ifx_FLASH_PROCONHSM PROCONHSM;          /** \brief 105C, HSM Exclusive Config. */
    Ifx_FLASH_RDB RDBCFG[2];                /** \brief 1060, Read Buffer Configuration for ports */
    unsigned char reserved_1078[24];        /** \brief 1078 */
    Ifx_FLASH_ECCW ECCW;                    /** \brief 1090, ECC Write Register */
    Ifx_FLASH_ECCRP ECCRP[2];               /** \brief 1094, ECC Read Register for ports */
    unsigned char reserved_109C[8];         /** \brief 109C */
    Ifx_FLASH_ECCRD ECCRD;                  /** \brief 10A4, ECC Read Register DF */
    Ifx_FLASH_MARP MARP;                    /** \brief 10A8, Margin Control Register PFlash */
    Ifx_FLASH_MARD MARD;                    /** \brief 10AC, Margin Control Register DFlash */
    unsigned char reserved_10B0[4];         /** \brief 10B0 */
    Ifx_FLASH_CBAB CBAB[2];                 /** \brief 10B4, Corrected Bits Address Buffer for ports */
    unsigned char reserved_10CC[24];        /** \brief 10CC */
    Ifx_FLASH_UBAB UBAB[2];                 /** \brief 10E4, Uncorrectable Bits Address Buffer for ports */
    unsigned char reserved_10FC[764];       /** \brief 10FC */
    Ifx_FLASH_ACCEN1 ACCEN1;                /** \brief 13F8, Access Enable Register 1 */
    Ifx_FLASH_ACCEN0 ACCEN0;                /** \brief 13FC, Access Enable Register 0 */
} Ifx_FLASH;
/******************************************************************************/
#endif /* IFXFLASH_REGDEF_H */

