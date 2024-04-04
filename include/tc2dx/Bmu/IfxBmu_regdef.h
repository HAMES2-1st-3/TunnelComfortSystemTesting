/**
 * \file IfxBmu_regdef.h
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
#ifndef IFXBMU_REGDEF_H
#define IFXBMU_REGDEF_H
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
} Ifx_BMU_ACCEN0_Bits;

/** Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_BMU_ACCEN1_Bits;

/** Transaction Filtering Control */
typedef struct
{
    unsigned int MODE: 1;                   /** \brief [0:0] Access Mode (rw) */
    unsigned int TMF: 1;                    /** \brief [1:1] Transaction Master Filtering (rw) */
    unsigned int reserved_2: 30;
} Ifx_BMU_CTL_Bits;

/** Fifo Monitor control register */
typedef struct
{
    unsigned int FHT_INT: 1;                /** \brief [0:0] Interrupt Enable for Fifo High Threshold (rw) */
    unsigned int OVF_INT: 1;                /** \brief [1:1] Interrupt Enable for Overflow Detection (rw) */
    unsigned int UDF_INT: 1;                /** \brief [2:2] Interrupt Enable for Underflow Detection (rw) */
    unsigned int reserved_3: 29;
} Ifx_BMU_FMCTL_Bits;

/** Fifo Monitor Status Register */
typedef struct
{
    unsigned int FHT_STS: 1;                /** \brief [0:0] Status Flag for Fifo High Threshold interrupt (rwh) */
    unsigned int OVF_STS: 1;                /** \brief [1:1] Status Flag for Overrun interrupt (rwh) */
    unsigned int UDF_STS: 1;                /** \brief [2:2] Status Flag for Underflow interrupt (rwh) */
    unsigned int reserved_3: 29;
} Ifx_BMU_FMSTS_Bits;

/** Fifo Monitor: Fullness Threshold Register */
typedef struct
{
    unsigned int FHT: 10;                   /** \brief [9:0] Fifo High Threshold (rw) */
    unsigned int reserved_10: 22;
} Ifx_BMU_FMTH_Bits;

/** Fullness Information for Bus Transaction Fifo */
typedef struct
{
    unsigned int UCELLS: 11;                /** \brief [10:0] Number of valid (used) entries in the BTF (rh) */
    unsigned int reserved_11: 5;
    unsigned int FCELLS: 11;                /** \brief [26:16] Number of free entries in the BTF (rh) */
    unsigned int reserved_27: 5;
} Ifx_BMU_FULLNESS_Bits;

/** Peripheral Set 0 Configuration */
typedef struct
{
    unsigned int FPI_SEL0: 1;               /** \brief [0:0] Select Bit for FPI Region 0 (rw) */
    unsigned int FPI_SEL1: 1;               /** \brief [1:1] Select Bit for FPI Region 1 (rw) */
    unsigned int FPI_SEL2: 1;               /** \brief [2:2] Select Bit for FPI Region 2 (rw) */
    unsigned int FPI_SEL3: 1;               /** \brief [3:3] Select Bit for FPI Region 3 (rw) */
    unsigned int FPI_SEL4: 1;               /** \brief [4:4] Select Bit for FPI Region 4 (rw) */
    unsigned int FPI_SEL5: 1;               /** \brief [5:5] Select Bit for FPI Region 5 (rw) */
    unsigned int FPI_SEL6: 1;               /** \brief [6:6] Select Bit for FPI Region 6 (rw) */
    unsigned int FPI_SEL7: 1;               /** \brief [7:7] Select Bit for FPI Region 7 (rw) */
    unsigned int FPI_SEL8: 1;               /** \brief [8:8] Select Bit for FPI Region 8 (rw) */
    unsigned int FPI_SEL9: 1;               /** \brief [9:9] Select Bit for FPI Region 9 (rw) */
    unsigned int FPI_SEL10: 1;              /** \brief [10:10] Select Bit for FPI Region 10 (rw) */
    unsigned int FPI_SEL11: 1;              /** \brief [11:11] Select Bit for FPI Region 11 (rw) */
    unsigned int FPI_SEL12: 1;              /** \brief [12:12] Select Bit for FPI Region 12 (rw) */
    unsigned int FPI_SEL13: 1;              /** \brief [13:13] Select Bit for FPI Region 13 (rw) */
    unsigned int FPI_SEL14: 1;              /** \brief [14:14] Select Bit for FPI Region 14 (rw) */
    unsigned int FPI_SEL15: 1;              /** \brief [15:15] Select Bit for FPI Region 15 (rw) */
    unsigned int FPI_SEL16: 1;              /** \brief [16:16] Select Bit for FPI Region 16 (rw) */
    unsigned int FPI_SEL17: 1;              /** \brief [17:17] Select Bit for FPI Region 17 (rw) */
    unsigned int FPI_SEL18: 1;              /** \brief [18:18] Select Bit for FPI Region 18 (rw) */
    unsigned int FPI_SEL19: 1;              /** \brief [19:19] Select Bit for FPI Region 19 (rw) */
    unsigned int FPI_SEL20: 1;              /** \brief [20:20] Select Bit for FPI Region 20 (rw) */
    unsigned int FPI_SEL21: 1;              /** \brief [21:21] Select Bit for FPI Region 21 (rw) */
    unsigned int FPI_SEL22: 1;              /** \brief [22:22] Select Bit for FPI Region 22 (rw) */
    unsigned int FPI_SEL23: 1;              /** \brief [23:23] Select Bit for FPI Region 23 (rw) */
    unsigned int FPI_SEL24: 1;              /** \brief [24:24] Select Bit for FPI Region 24 (rw) */
    unsigned int FPI_SEL25: 1;              /** \brief [25:25] Select Bit for FPI Region 25 (rw) */
    unsigned int FPI_SEL26: 1;              /** \brief [26:26] Select Bit for FPI Region 26 (rw) */
    unsigned int FPI_SEL27: 1;              /** \brief [27:27] Select Bit for FPI Region 27 (rw) */
    unsigned int FPI_SEL28: 1;              /** \brief [28:28] Select Bit for FPI Region 28 (rw) */
    unsigned int FPI_SEL29: 1;              /** \brief [29:29] Select Bit for FPI Region 29 (rw) */
    unsigned int FPI_SEL30: 1;              /** \brief [30:30] Select Bit for FPI Region 30 (rw) */
    unsigned int FPI_SEL31: 1;              /** \brief [31:31] Select Bit for FPI Region 31 (rw) */
} Ifx_BMU_PSET0_Bits;

/** Peripheral Set 1 Configuration */
typedef struct
{
    unsigned int FPI_SEL32: 1;              /** \brief [0:0] Select Bit for FPI Region 32 (rw) */
    unsigned int FPI_SEL33: 1;              /** \brief [1:1] Select Bit for FPI Region 33 (rw) */
    unsigned int FPI_SEL34: 1;              /** \brief [2:2] Select Bit for FPI Region 34 (rw) */
    unsigned int FPI_SEL35: 1;              /** \brief [3:3] Select Bit for FPI Region 35 (rw) */
    unsigned int FPI_SEL36: 1;              /** \brief [4:4] Select Bit for FPI Region 36 (rw) */
    unsigned int FPI_SEL37: 1;              /** \brief [5:5] Select Bit for FPI Region 37 (rw) */
    unsigned int FPI_SEL38: 1;              /** \brief [6:6] Select Bit for FPI Region 38 (rw) */
    unsigned int FPI_SEL39: 1;              /** \brief [7:7] Select Bit for FPI Region 39 (rw) */
    unsigned int FPI_SEL40: 1;              /** \brief [8:8] Select Bit for FPI Region 40 (rw) */
    unsigned int FPI_SEL41: 1;              /** \brief [9:9] Select Bit for FPI Region 41 (rw) */
    unsigned int FPI_SEL42: 1;              /** \brief [10:10] Select Bit for FPI Region 42 (rw) */
    unsigned int FPI_SEL43: 1;              /** \brief [11:11] Select Bit for FPI Region 43 (rw) */
    unsigned int FPI_SEL44: 1;              /** \brief [12:12] Select Bit for FPI Region 44 (rw) */
    unsigned int FPI_SEL45: 1;              /** \brief [13:13] Select Bit for FPI Region 45 (rw) */
    unsigned int FPI_SEL46: 1;              /** \brief [14:14] Select Bit for FPI Region 46 (rw) */
    unsigned int FPI_SEL47: 1;              /** \brief [15:15] Select Bit for FPI Region 47 (rw) */
    unsigned int FPI_SEL48: 1;              /** \brief [16:16] Select Bit for FPI Region 48 (rw) */
    unsigned int FPI_SEL49: 1;              /** \brief [17:17] Select Bit for FPI Region 49 (rw) */
    unsigned int FPI_SEL50: 1;              /** \brief [18:18] Select Bit for FPI Region 50 (rw) */
    unsigned int FPI_SEL51: 1;              /** \brief [19:19] Select Bit for FPI Region 51 (rw) */
    unsigned int FPI_SEL52: 1;              /** \brief [20:20] Select Bit for FPI Region 52 (rw) */
    unsigned int FPI_SEL53: 1;              /** \brief [21:21] Select Bit for FPI Region 53 (rw) */
    unsigned int FPI_SEL54: 1;              /** \brief [22:22] Select Bit for FPI Region 54 (rw) */
    unsigned int FPI_SEL55: 1;              /** \brief [23:23] Select Bit for FPI Region 55 (rw) */
    unsigned int FPI_SEL56: 1;              /** \brief [24:24] Select Bit for FPI Region 56 (rw) */
    unsigned int FPI_SEL57: 1;              /** \brief [25:25] Select Bit for FPI Region 57 (rw) */
    unsigned int FPI_SEL58: 1;              /** \brief [26:26] Select Bit for FPI Region 58 (rw) */
    unsigned int FPI_SEL59: 1;              /** \brief [27:27] Select Bit for FPI Region 59 (rw) */
    unsigned int FPI_SEL60: 1;              /** \brief [28:28] Select Bit for FPI Region 60 (rw) */
    unsigned int FPI_SEL61: 1;              /** \brief [29:29] Select Bit for FPI Region 61 (rw) */
    unsigned int FPI_SEL62: 1;              /** \brief [30:30] Select Bit for FPI Region 62 (rw) */
    unsigned int FPI_SEL63: 1;              /** \brief [31:31] Select Bit for FPI Region 63 (rw) */
} Ifx_BMU_PSET1_Bits;

/** Peripheral Set 2 Configuration */
typedef struct
{
    unsigned int FPI_SEL64: 1;              /** \brief [0:0] Select Bit for FPI Region 64 (rw) */
    unsigned int FPI_SEL65: 1;              /** \brief [1:1] Select Bit for FPI Region 65 (rw) */
    unsigned int FPI_SEL66: 1;              /** \brief [2:2] Select Bit for FPI Region 66 (rw) */
    unsigned int FPI_SEL67: 1;              /** \brief [3:3] Select Bit for FPI Region 67 (rw) */
    unsigned int FPI_SEL68: 1;              /** \brief [4:4] Select Bit for FPI Region 68 (rw) */
    unsigned int FPI_SEL69: 1;              /** \brief [5:5] Select Bit for FPI Region 69 (rw) */
    unsigned int FPI_SEL70: 1;              /** \brief [6:6] Select Bit for FPI Region 70 (rw) */
    unsigned int FPI_SEL71: 1;              /** \brief [7:7] Select Bit for FPI Region 71 (rw) */
    unsigned int FPI_SEL72: 1;              /** \brief [8:8] Select Bit for FPI Region 72 (rw) */
    unsigned int FPI_SEL73: 1;              /** \brief [9:9] Select Bit for FPI Region 73 (rw) */
    unsigned int FPI_SEL74: 1;              /** \brief [10:10] Select Bit for FPI Region 74 (rw) */
    unsigned int FPI_SEL75: 1;              /** \brief [11:11] Select Bit for FPI Region 75 (rw) */
    unsigned int FPI_SEL76: 1;              /** \brief [12:12] Select Bit for FPI Region 76 (rw) */
    unsigned int FPI_SEL77: 1;              /** \brief [13:13] Select Bit for FPI Region 77 (rw) */
    unsigned int FPI_SEL78: 1;              /** \brief [14:14] Select Bit for FPI Region 78 (rw) */
    unsigned int FPI_SEL79: 1;              /** \brief [15:15] Select Bit for FPI Region 79 (rw) */
    unsigned int FPI_SEL80: 1;              /** \brief [16:16] Select Bit for FPI Region 80 (rw) */
    unsigned int FPI_SEL81: 1;              /** \brief [17:17] Select Bit for FPI Region 81 (rw) */
    unsigned int FPI_SEL82: 1;              /** \brief [18:18] Select Bit for FPI Region 82 (rw) */
    unsigned int FPI_SEL83: 1;              /** \brief [19:19] Select Bit for FPI Region 83 (rw) */
    unsigned int FPI_SEL84: 1;              /** \brief [20:20] Select Bit for FPI Region 84 (rw) */
    unsigned int FPI_SEL85: 1;              /** \brief [21:21] Select Bit for FPI Region 85 (rw) */
    unsigned int FPI_SEL86: 1;              /** \brief [22:22] Select Bit for FPI Region 86 (rw) */
    unsigned int FPI_SEL87: 1;              /** \brief [23:23] Select Bit for FPI Region 87 (rw) */
    unsigned int FPI_SEL88: 1;              /** \brief [24:24] Select Bit for FPI Region 88 (rw) */
    unsigned int FPI_SEL89: 1;              /** \brief [25:25] Select Bit for FPI Region 89 (rw) */
    unsigned int FPI_SEL90: 1;              /** \brief [26:26] Select Bit for FPI Region 90 (rw) */
    unsigned int FPI_SEL91: 1;              /** \brief [27:27] Select Bit for FPI Region 91 (rw) */
    unsigned int FPI_SEL92: 1;              /** \brief [28:28] Select Bit for FPI Region 92 (rw) */
    unsigned int FPI_SEL93: 1;              /** \brief [29:29] Select Bit for FPI Region 93 (rw) */
    unsigned int FPI_SEL94: 1;              /** \brief [30:30] Select Bit for FPI Region 94 (rw) */
    unsigned int FPI_SEL95: 1;              /** \brief [31:31] Select Bit for FPI Region 95 (rw) */
} Ifx_BMU_PSET2_Bits;

/** Pointer Information for Bus Transaction Fifo */
typedef struct
{
    unsigned int RPTR: 10;                  /** \brief [9:0] Read Pointer for a 1024 entry SRAM (rh) */
    unsigned int reserved_10: 6;
    unsigned int WPTR: 10;                  /** \brief [25:16] Write Pointer for a 1024 entry SRAM (rh) */
    unsigned int reserved_26: 6;
} Ifx_BMU_PTR_Bits;

/** FPI Transaction ID Set 0 Configuration */
typedef struct
{
    unsigned int TID0: 4;                   /** \brief [3:0] Transaction Identifier 0 (r) */
    unsigned int reserved_4: 28;
} Ifx_BMU_TID_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_BMU_ACCEN0_Bits B;
} Ifx_BMU_ACCEN0;

/** Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_BMU_ACCEN1_Bits B;
} Ifx_BMU_ACCEN1;

/** Transaction Filtering Control */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_BMU_CTL_Bits B;
} Ifx_BMU_CTL;

/** Fifo Monitor control register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_BMU_FMCTL_Bits B;
} Ifx_BMU_FMCTL;

/** Fifo Monitor Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_BMU_FMSTS_Bits B;
} Ifx_BMU_FMSTS;

/** Fifo Monitor: Fullness Threshold Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_BMU_FMTH_Bits B;
} Ifx_BMU_FMTH;

/** Fullness Information for Bus Transaction Fifo */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_BMU_FULLNESS_Bits B;
} Ifx_BMU_FULLNESS;

/** Peripheral Set 0 Configuration */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_BMU_PSET0_Bits B;
} Ifx_BMU_PSET0;

/** Peripheral Set 1 Configuration */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_BMU_PSET1_Bits B;
} Ifx_BMU_PSET1;

/** Peripheral Set 2 Configuration */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_BMU_PSET2_Bits B;
} Ifx_BMU_PSET2;

/** Pointer Information for Bus Transaction Fifo */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_BMU_PTR_Bits B;
} Ifx_BMU_PTR;

/** FPI Transaction ID Set 0 Configuration */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_BMU_TID_Bits B;
} Ifx_BMU_TID;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** BMU object */
typedef volatile struct
{
    Ifx_CLC7 CLC;                           /** \brief 0, Clock Control Register */
    unsigned char reserved_4[4];            /** \brief 4 */
    Ifx_ID1 ID;                             /** \brief 8, Module Identification Register */
    unsigned char reserved_C[20];           /** \brief C */
    Ifx_BMU_CTL CTL;                        /** \brief 20, Transaction Filtering Control */
    Ifx_BMU_PTR PTR;                        /** \brief 24, Pointer Information for Bus Transaction Fifo */
    Ifx_BMU_FULLNESS FULLNESS;              /** \brief 28, Fullness Information for Bus Transaction Fifo */
    unsigned char reserved_2C[4];           /** \brief 2C */
    Ifx_BMU_PSET0 PSET0;                    /** \brief 30, Peripheral Set 0 Configuration */
    Ifx_BMU_PSET1 PSET1;                    /** \brief 34, Peripheral Set 1 Configuration */
    Ifx_BMU_PSET2 PSET2;                    /** \brief 38, Peripheral Set 2 Configuration */
    Ifx_BMU_TID TID;                        /** \brief 3C, FPI Transaction ID Set 0 Configuration */
    Ifx_BMU_FMCTL FMCTL;                    /** \brief 40, Fifo Monitor control register */
    Ifx_BMU_FMSTS FMSTS;                    /** \brief 44, Fifo Monitor Status Register */
    Ifx_BMU_FMTH FMTH;                      /** \brief 48, Fifo Monitor: Fullness Threshold Register */
    unsigned char reserved_4C[172];         /** \brief 4C */
    Ifx_BMU_ACCEN1 ACCEN1;                  /** \brief F8, Access Enable Register 1 */
    Ifx_BMU_ACCEN0 ACCEN0;                  /** \brief FC, Access Enable Register 0 */
    unsigned char reserved_100[256];        /** \brief 100 */
} Ifx_BMU;
/******************************************************************************/
#endif /* IFXBMU_REGDEF_H */

