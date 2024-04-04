/**
 * \file IfxDma_regdef.h
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
#ifndef IFXDMA_REGDEF_H
#define IFXDMA_REGDEF_H
/******************************************************************************/
#include "Global/IfxGlobal_regdef.h"

/******************************************************************************/
/*                           Struct (0 - Bitfields)                           */
/******************************************************************************/

/** DMA Sub-block Access Enable Register 0 */
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
} Ifx_DMA_BLK_ACCEN0_Bits;

/** DMA Sub-block Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_DMA_BLK_ACCEN1_Bits;

/** DMA Channel Address Control Register */
typedef struct
{
    unsigned int SMF: 3;                    /** \brief [2:0] Source Address Modification Factor (rw) */
    unsigned int INCS: 1;                   /** \brief [3:3] Increment of Source Address (rw) */
    unsigned int DMF: 3;                    /** \brief [6:4] Destination Address Modification Factor (rw) */
    unsigned int INCD: 1;                   /** \brief [7:7] Increment of Destination Address (rw) */
    unsigned int CBLS: 4;                   /** \brief [11:8] Circular Buffer Length Source (rw) */
    unsigned int CBLD: 4;                   /** \brief [15:12] Circular Buffer Length Destination (rw) */
    unsigned int SHCT: 2;                   /** \brief [17:16] Shadow Control (rw) */
    unsigned int SHWEN: 1;                  /** \brief [18:18] Shadow Address Register Write Enable (rw) */
    unsigned int reserved_19: 13;
} Ifx_DMA_BLK_CH_ADRCR_Bits;

/** DMA Channel Control Register */
typedef struct
{
    unsigned int TREL: 10;                  /** \brief [9:0] Transfer Reload Value (rw) */
    unsigned int reserved_10: 2;
    unsigned int PRSEL: 1;                  /** \brief [12:12] Peripheral Request Select (rw) */
    unsigned int reserved_13: 3;
    unsigned int BLKM: 3;                   /** \brief [18:16] Block Mode (rw) */
    unsigned int RROAT: 1;                  /** \brief [19:19] Reset Request Only After Transaction (rw) */
    unsigned int CHMODE: 1;                 /** \brief [20:20] Channel Operation Mode (rw) */
    unsigned int CHDW: 2;                   /** \brief [22:21] Channel Data Width (rw) */
    unsigned int reserved_23: 1;
    unsigned int PATSEL: 2;                 /** \brief [25:24] Pattern Select (rw) */
    unsigned int ECH: 1;                    /** \brief [26:26] Enable Hardware Transfer Request (w) */
    unsigned int DCH: 1;                    /** \brief [27:27] Disable Hardware Transfer Request (w) */
    unsigned int reserved_28: 1;
    unsigned int SCH: 1;                    /** \brief [29:29] Set Transaction Request for DMA Channel z (w) */
    unsigned int reserved_30: 2;
} Ifx_DMA_BLK_CH_CHCR_Bits;

/** DMA Channel Interrupt Control Register */
typedef struct
{
    unsigned int WRPSE: 1;                  /** \brief [0:0] Wrap Source Enable (rw) */
    unsigned int WRPDE: 1;                  /** \brief [1:1] Wrap Destination Enable (rw) */
    unsigned int INTCT: 2;                  /** \brief [3:2] Interrupt Control (rw) */
    unsigned int ETRL: 1;                   /** \brief [4:4] Enable Transaction Request Lost Interrupt (rw) */
    unsigned int reserved_5: 7;
    unsigned int IRDV: 4;                   /** \brief [15:12] Interrupt Raise Detect Value (rw) */
    unsigned int CWRP: 1;                   /** \brief [16:16] Clear Wrap Buffer Interrupt xz (w) */
    unsigned int reserved_17: 1;
    unsigned int CICH: 1;                   /** \brief [18:18] Clear Interrupt for DMA Channel xz (w) */
    unsigned int reserved_19: 1;
    unsigned int CTL: 1;                    /** \brief [20:20] Clear Transaction Request Lost for DMA Channel xz (w) */
    unsigned int reserved_21: 11;
} Ifx_DMA_BLK_CH_CHICR_Bits;

/** DMA Channel Status Register */
typedef struct
{
    unsigned int TCOUNT: 10;                /** \brief [9:0] Transfer Count Status (rh) */
    unsigned int reserved_10: 5;
    unsigned int LXO: 1;                    /** \brief [15:15] Old Value of Pattern Detection (rh) */
    unsigned int WRPS: 1;                   /** \brief [16:16] LongName (rh) */
    unsigned int WRPD: 1;                   /** \brief [17:17] LongName (rh) */
    unsigned int ICH: 1;                    /** \brief [18:18] Interrupt from Channel (rh) */
    unsigned int IPM: 1;                    /** \brief [19:19] Pattern Detection from Channel (rh) */
    unsigned int TRL: 1;                    /** \brief [20:20] Transaction/Transfer Request Lost of DMA Channel (rh) */
    unsigned int reserved_21: 3;
    unsigned int CH: 1;                     /** \brief [24:24] Transaction Request State (rh) */
    unsigned int HTRE: 1;                   /** \brief [25:25] Hardware Transaction Request Enable State (rh) */
    unsigned int reserved_26: 6;
} Ifx_DMA_BLK_CH_CHSR_Bits;

/** DMA Channel Destination Address Register */
typedef struct
{
    unsigned int DADR: 32;                  /** \brief [31:0] Destination Address (rwh) */
} Ifx_DMA_BLK_CH_DADR_Bits;

/** DMA Channel Source Address Register */
typedef struct
{
    unsigned int SADR: 32;                  /** \brief [31:0] Source Start Address (rwh) */
} Ifx_DMA_BLK_CH_SADR_Bits;

/** DMA Channel Shadow Address Register */
typedef struct
{
    unsigned int SHADR: 32;                 /** \brief [31:0] Shadowed Address (rwh) */
} Ifx_DMA_BLK_CH_SHADR_Bits;

/** DMA Channel Interrupt Set Register0 */
typedef struct
{
    unsigned int SIT0: 1;                   /** \brief [0:0] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT1: 1;                   /** \brief [1:1] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT2: 1;                   /** \brief [2:2] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT3: 1;                   /** \brief [3:3] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT4: 1;                   /** \brief [4:4] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT5: 1;                   /** \brief [5:5] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT6: 1;                   /** \brief [6:6] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT7: 1;                   /** \brief [7:7] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT8: 1;                   /** \brief [8:8] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT9: 1;                   /** \brief [9:9] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT10: 1;                  /** \brief [10:10] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT11: 1;                  /** \brief [11:11] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT12: 1;                  /** \brief [12:12] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT13: 1;                  /** \brief [13:13] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT14: 1;                  /** \brief [14:14] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT15: 1;                  /** \brief [15:15] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT16: 1;                  /** \brief [16:16] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT17: 1;                  /** \brief [17:17] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT18: 1;                  /** \brief [18:18] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT19: 1;                  /** \brief [19:19] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT20: 1;                  /** \brief [20:20] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT21: 1;                  /** \brief [21:21] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT22: 1;                  /** \brief [22:22] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int SIT23: 1;                  /** \brief [23:23] Set Interrupt Trigger for DMA Channel z (w) */
    unsigned int reserved_24: 8;
} Ifx_DMA_BLK_CHINTR0_Bits;

/** DMA Channel Reset Request Register0 */
typedef struct
{
    unsigned int CH0: 1;                    /** \brief [0:0] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH1: 1;                    /** \brief [1:1] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH2: 1;                    /** \brief [2:2] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH3: 1;                    /** \brief [3:3] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH4: 1;                    /** \brief [4:4] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH5: 1;                    /** \brief [5:5] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH6: 1;                    /** \brief [6:6] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH7: 1;                    /** \brief [7:7] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH8: 1;                    /** \brief [8:8] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH9: 1;                    /** \brief [9:9] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH10: 1;                   /** \brief [10:10] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH11: 1;                   /** \brief [11:11] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH12: 1;                   /** \brief [12:12] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH13: 1;                   /** \brief [13:13] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH14: 1;                   /** \brief [14:14] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH15: 1;                   /** \brief [15:15] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH16: 1;                   /** \brief [16:16] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH17: 1;                   /** \brief [17:17] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH18: 1;                   /** \brief [18:18] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH19: 1;                   /** \brief [19:19] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH20: 1;                   /** \brief [20:20] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH21: 1;                   /** \brief [21:21] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH22: 1;                   /** \brief [22:22] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int CH23: 1;                   /** \brief [23:23] DMA Sub-block x Channel z Reset (rwh) */
    unsigned int reserved_24: 8;
} Ifx_DMA_BLK_CHRSTR0_Bits;

/** DMA Clear Error Register */
typedef struct
{
    unsigned int reserved_0: 16;
    unsigned int CMExSER: 1;                /** \brief [16:16] Clear Move Engine x Source Error (w) */
    unsigned int CMExDER: 1;                /** \brief [17:17] Clear Move Engine x Destination Error (w) */
    unsigned int reserved_18: 2;
    unsigned int CFPIER: 1;                 /** \brief [20:20] Clear FPI Error (w) */
    unsigned int CSRIER: 1;                 /** \brief [21:21] Clear SRI Error (w) */
    unsigned int CPERER: 1;                 /** \brief [22:22] Clear Peripheral Error (w) */
    unsigned int reserved_23: 9;
} Ifx_DMA_BLK_CLRE_Bits;

/** DMA Enable Error Register */
typedef struct
{
    unsigned int reserved_0: 16;
    unsigned int ESER: 1;                   /** \brief [16:16] Enable Move Engine x Source Error (rw) */
    unsigned int EDER: 1;                   /** \brief [17:17] Enable Move Engine x Destination Error (rw) */
    unsigned int reserved_18: 6;
    unsigned int EIER: 1;                   /** \brief [24:24] Enable Move Engine x Data Integrity Error (rw) */
    unsigned int reserved_25: 7;
} Ifx_DMA_BLK_EER_Bits;

/** DMA Error Status Register */
typedef struct
{
    unsigned int LEC: 6;                    /** \brief [5:0] Move Engine x Last Error Channel (rh) */
    unsigned int reserved_6: 10;
    unsigned int SER: 1;                    /** \brief [16:16] Move Engine x Source Error (rh) */
    unsigned int DER: 1;                    /** \brief [17:17] Move Engine x Destination Error (rh) */
    unsigned int reserved_18: 2;
    unsigned int FPIER: 1;                  /** \brief [20:20] Move Engine x FPI Bus Error (rh) */
    unsigned int SRIER: 1;                  /** \brief [21:21] Move Engine x SRI Bus Error (rh) */
    unsigned int PERER: 1;                  /** \brief [22:22] Move Engine x Peripheral Error (rh) */
    unsigned int reserved_23: 9;
} Ifx_DMA_BLK_ERRSR_Bits;

/** DMA Move Engine Interrupt Set Register */
typedef struct
{
    unsigned int SIT: 1;                    /** \brief [0:0] Set Interrupt Trigger for DMA Move Engine x (w) */
    unsigned int reserved_1: 31;
} Ifx_DMA_BLK_ME_INTR_Bits;

/** DMA Move Engine Pattern Read Register */
typedef struct
{
    unsigned int PAT00: 8;                  /** \brief [7:0] Pattern for Move Engine x (rw) */
    unsigned int PAT01: 8;                  /** \brief [15:8] Pattern for Move Engine x (rw) */
    unsigned int PAT02: 8;                  /** \brief [23:16] Pattern for Move Engine x (rw) */
    unsigned int PAT03: 8;                  /** \brief [31:24] Pattern for Move Engine x (rw) */
} Ifx_DMA_BLK_ME_PR_Bits;

/** DMA Move Engine Read Register */
typedef struct
{
    unsigned int RD00: 8;                   /** \brief [7:0] Read Value for Move Engine x (rh) */
    unsigned int RD01: 8;                   /** \brief [15:8] Read Value for Move Engine x (rh) */
    unsigned int RD02: 8;                   /** \brief [23:16] Read Value for Move Engine x (rh) */
    unsigned int RD03: 8;                   /** \brief [31:24] Read Value for Move Engine x (rh) */
} Ifx_DMA_BLK_ME_R_Bits;

/** DMA Move Engine Status Register */
typedef struct
{
    unsigned int RS: 1;                     /** \brief [0:0] Move Engine x Read Status (rh) */
    unsigned int reserved_1: 3;
    unsigned int WS: 1;                     /** \brief [4:4] Move Engine x Write Status (rh) */
    unsigned int reserved_5: 11;
    unsigned int CH: 6;                     /** \brief [21:16] Reading Channel in Move Engine x (rh) */
    unsigned int reserved_22: 10;
} Ifx_DMA_BLK_ME_SR_Bits;

/** DMA Suspend Acknowledge Register0 */
typedef struct
{
    unsigned int SUSAC0: 1;                 /** \brief [0:0] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC1: 1;                 /** \brief [1:1] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC2: 1;                 /** \brief [2:2] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC3: 1;                 /** \brief [3:3] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC4: 1;                 /** \brief [4:4] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC5: 1;                 /** \brief [5:5] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC6: 1;                 /** \brief [6:6] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC7: 1;                 /** \brief [7:7] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC8: 1;                 /** \brief [8:8] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC9: 1;                 /** \brief [9:9] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC10: 1;                /** \brief [10:10] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC11: 1;                /** \brief [11:11] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC12: 1;                /** \brief [12:12] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC13: 1;                /** \brief [13:13] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC14: 1;                /** \brief [14:14] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC15: 1;                /** \brief [15:15] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC16: 1;                /** \brief [16:16] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC17: 1;                /** \brief [17:17] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC18: 1;                /** \brief [18:18] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC19: 1;                /** \brief [19:19] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC20: 1;                /** \brief [20:20] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC21: 1;                /** \brief [21:21] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC22: 1;                /** \brief [22:22] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int SUSAC23: 1;                /** \brief [23:23] Channel Suspend Active for SDMA Channel z (rh) */
    unsigned int reserved_24: 8;
} Ifx_DMA_BLK_SUSACR0_Bits;

/** DMA Suspend Enable Register0 */
typedef struct
{
    unsigned int SUSEN0: 1;                 /** \brief [0:0] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN1: 1;                 /** \brief [1:1] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN2: 1;                 /** \brief [2:2] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN3: 1;                 /** \brief [3:3] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN4: 1;                 /** \brief [4:4] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN5: 1;                 /** \brief [5:5] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN6: 1;                 /** \brief [6:6] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN7: 1;                 /** \brief [7:7] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN8: 1;                 /** \brief [8:8] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN9: 1;                 /** \brief [9:9] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN10: 1;                /** \brief [10:10] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN11: 1;                /** \brief [11:11] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN12: 1;                /** \brief [12:12] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN13: 1;                /** \brief [13:13] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN14: 1;                /** \brief [14:14] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN15: 1;                /** \brief [15:15] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN16: 1;                /** \brief [16:16] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN17: 1;                /** \brief [17:17] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN18: 1;                /** \brief [18:18] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN19: 1;                /** \brief [19:19] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN20: 1;                /** \brief [20:20] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN21: 1;                /** \brief [21:21] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN22: 1;                /** \brief [22:22] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int SUSEN23: 1;                /** \brief [23:23] Channel Suspend Enable for DMA Channel z (rw) */
    unsigned int reserved_24: 8;
} Ifx_DMA_BLK_SUSENR0_Bits;

/** DMA OCDS Trigger Set Select */
typedef struct
{
    unsigned int TGS: 4;                    /** \brief [3:0] Trigger Set () for OTGB0/1 (rw) */
    unsigned int reserved_4: 3;
    unsigned int BS: 1;                     /** \brief [7:7] OTGB0/1 Bus Select (rw) */
    unsigned int reserved_8: 24;
} Ifx_DMA_OTSS_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** DMA Sub-block Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_ACCEN0_Bits B;
} Ifx_DMA_BLK_ACCEN0;

/** DMA Sub-block Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_ACCEN1_Bits B;
} Ifx_DMA_BLK_ACCEN1;

/** DMA Channel Address Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_CH_ADRCR_Bits B;
} Ifx_DMA_BLK_CH_ADRCR;

/** DMA Channel Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_CH_CHCR_Bits B;
} Ifx_DMA_BLK_CH_CHCR;

/** DMA Channel Interrupt Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_CH_CHICR_Bits B;
} Ifx_DMA_BLK_CH_CHICR;

/** DMA Channel Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_CH_CHSR_Bits B;
} Ifx_DMA_BLK_CH_CHSR;

/** DMA Channel Destination Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_CH_DADR_Bits B;
} Ifx_DMA_BLK_CH_DADR;

/** DMA Channel Source Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_CH_SADR_Bits B;
} Ifx_DMA_BLK_CH_SADR;

/** DMA Channel Shadow Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_CH_SHADR_Bits B;
} Ifx_DMA_BLK_CH_SHADR;

/** DMA Channel Interrupt Set Register0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_CHINTR0_Bits B;
} Ifx_DMA_BLK_CHINTR0;

/** DMA Channel Reset Request Register0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_CHRSTR0_Bits B;
} Ifx_DMA_BLK_CHRSTR0;

/** DMA Clear Error Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_CLRE_Bits B;
} Ifx_DMA_BLK_CLRE;

/** DMA Enable Error Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_EER_Bits B;
} Ifx_DMA_BLK_EER;

/** DMA Error Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_ERRSR_Bits B;
} Ifx_DMA_BLK_ERRSR;

/** DMA Move Engine Interrupt Set Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_ME_INTR_Bits B;
} Ifx_DMA_BLK_ME_INTR;

/** DMA Move Engine Pattern Read Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_ME_PR_Bits B;
} Ifx_DMA_BLK_ME_PR;

/** DMA Move Engine Read Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_ME_R_Bits B;
} Ifx_DMA_BLK_ME_R;

/** DMA Move Engine Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_ME_SR_Bits B;
} Ifx_DMA_BLK_ME_SR;

/** DMA Suspend Acknowledge Register0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_SUSACR0_Bits B;
} Ifx_DMA_BLK_SUSACR0;

/** DMA Suspend Enable Register0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_BLK_SUSENR0_Bits B;
} Ifx_DMA_BLK_SUSENR0;

/** DMA OCDS Trigger Set Select */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_DMA_OTSS_Bits B;
} Ifx_DMA_OTSS;

/******************************************************************************/
/*                           Struct (2 - Object L2)                           */
/******************************************************************************/

/** DMA channels */
typedef volatile struct
{
    Ifx_DMA_BLK_CH_CHSR CHSR;               /** \brief 0, DMA Channel Status Register */
    Ifx_DMA_BLK_CH_CHCR CHCR;               /** \brief 4, DMA Channel Control Register */
    Ifx_DMA_BLK_CH_CHICR CHICR;             /** \brief 8, DMA Channel Interrupt Control Register */
    Ifx_DMA_BLK_CH_ADRCR ADRCR;             /** \brief C, DMA Channel Address Control Register */
    Ifx_DMA_BLK_CH_SADR SADR;               /** \brief 10, DMA Channel Source Address Register */
    Ifx_DMA_BLK_CH_DADR DADR;               /** \brief 14, DMA Channel Destination Address Register */
    Ifx_DMA_BLK_CH_SHADR SHADR;             /** \brief 18, DMA Channel Shadow Address Register */
    unsigned char reserved_1C[4];           /** \brief 1C */
} Ifx_DMA_BLK_CH;

/** DMA move engine */
typedef volatile struct
{
    Ifx_DMA_BLK_ME_SR SR;                   /** \brief 0, DMA Move Engine Status Register */
    Ifx_DMA_BLK_ME_R R;                     /** \brief 4, DMA Move Engine Read Register */
    Ifx_DMA_BLK_ME_INTR INTR;               /** \brief 8, DMA Move Engine Interrupt Set Register */
    Ifx_DMA_BLK_ME_PR PR;                   /** \brief C, DMA Move Engine Pattern Read Register */
} Ifx_DMA_BLK_ME;

/******************************************************************************/
/*                           Struct (3 - Object L1)                           */
/******************************************************************************/

/** DMA sub block */
typedef volatile struct
{
    Ifx_DMA_BLK_EER EER;                    /** \brief 0, DMA Enable Error Register */
    Ifx_DMA_BLK_ERRSR ERRSR;                /** \brief 4, DMA Error Status Register */
    Ifx_DMA_BLK_CLRE CLRE;                  /** \brief 8, DMA Clear Error Register */
    unsigned char reserved_C[4];            /** \brief C */
    Ifx_DMA_BLK_ME ME;                      /** \brief 10, DMA move engine */
    Ifx_DMA_BLK_CHRSTR0 CHRSTR0;            /** \brief 20, DMA Channel Reset Request Register0 */
    unsigned char reserved_24[28];          /** \brief 24 */
    Ifx_DMA_BLK_SUSENR0 SUSENR0;            /** \brief 40, DMA Suspend Enable Register0 */
    unsigned char reserved_44[4];           /** \brief 44 */
    Ifx_DMA_BLK_SUSACR0 SUSACR0;            /** \brief 48, DMA Suspend Acknowledge Register0 */
    unsigned char reserved_4C[4];           /** \brief 4C */
    Ifx_DMA_BLK_CHINTR0 CHINTR0;            /** \brief 50, DMA Channel Interrupt Set Register0 */
    unsigned char reserved_54[12];          /** \brief 54 */
    Ifx_DMA_BLK_CH CH[24];                  /** \brief 60, DMA channels */
    unsigned char reserved_360[1400];       /** \brief 360 */
    Ifx_DMA_BLK_ACCEN1 ACCEN1;              /** \brief 8D8, DMA Sub-block Access Enable Register 1 */
    Ifx_DMA_BLK_ACCEN0 ACCEN0;              /** \brief 8DC, DMA Sub-block Access Enable Register 0 */
} Ifx_DMA_BLK;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** DMA object */
typedef volatile struct
{
    Ifx_CLC2 CLC0;                          /** \brief 0, DMA Sub-block 0 Clock Control Register */
    unsigned char reserved_4[4];            /** \brief 4 */
    Ifx_ID1 ID;                             /** \brief 8, Module Identification Register */
    Ifx_DMA_OTSS OTSS;                      /** \brief C, DMA OCDS Trigger Set Select */
    unsigned char reserved_10[16];          /** \brief 10 */
    Ifx_DMA_BLK BLK0;                       /** \brief 20, DMA sub block 0 */
    unsigned char reserved_900[1792];       /** \brief 900 */
    Ifx_CLC2 CLC1;                          /** \brief 1000, DMA Sub-block 1 Clock Control Register */
    unsigned char reserved_1004[28];        /** \brief 1004 */
    Ifx_DMA_BLK BLK1;                       /** \brief 1020, DMA sub block 1 */
    unsigned char reserved_1900[5888];      /** \brief 1900 */
} Ifx_DMA;
/******************************************************************************/
#endif /* IFXDMA_REGDEF_H */

