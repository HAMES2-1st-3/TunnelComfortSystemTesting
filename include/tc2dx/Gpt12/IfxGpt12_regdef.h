/**
 * \file IfxGpt12_regdef.h
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
#ifndef IFXGPT12_REGDEF_H
#define IFXGPT12_REGDEF_H
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
} Ifx_GPT12_ACCEN0_Bits;

/** Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_GPT12_ACCEN1_Bits;

/** Capture and Reload Register */
typedef struct
{
    unsigned int CAPREL: 16;                /** \brief [15:0] Current reload value or Captured value (rwh) */
    unsigned int reserved_16: 16;
} Ifx_GPT12_CAPREL_Bits;

/** Kernel Reset Register 0 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int RSTSTAT: 1;                /** \brief [1:1] Kernel Reset Status (rw) */
    unsigned int reserved_2: 30;
} Ifx_GPT12_KRST0_Bits;

/** Kernel Reset Register 1 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int reserved_1: 31;
} Ifx_GPT12_KRST1_Bits;

/** Kernel Reset Status Clear Register */
typedef struct
{
    unsigned int CLR: 1;                    /** \brief [0:0] Kernel Reset Status Clear (w) */
    unsigned int reserved_1: 31;
} Ifx_GPT12_KRSTCLR_Bits;

/** OCDS Control and Status Register */
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
} Ifx_GPT12_OCS_Bits;

/** Port Input Select Register */
typedef struct
{
    unsigned int IST2IN: 1;                 /** \brief [0:0] Input Select for T2IN (rw) */
    unsigned int IST2EUD: 1;                /** \brief [1:1] Input Select for T2EUD (rw) */
    unsigned int IST3IN: 2;                 /** \brief [3:2] Input Select for T3IN (rw) */
    unsigned int IST3EUD: 2;                /** \brief [5:4] Input Select for T3EUD (rw) */
    unsigned int IST4IN: 2;                 /** \brief [7:6] Input Select for T4IN (rw) */
    unsigned int IST4EUD: 2;                /** \brief [9:8] Input Select for T4EUD (rw) */
    unsigned int IST5IN: 1;                 /** \brief [10:10] Input Select for T5IN (rw) */
    unsigned int IST5EUD: 1;                /** \brief [11:11] Input Select for T5EUD (rw) */
    unsigned int IST6IN: 1;                 /** \brief [12:12] Input Select for T6IN (rw) */
    unsigned int IST6EUD: 1;                /** \brief [13:13] Input Select for T6EUD (rw) */
    unsigned int ISCAPIN: 2;                /** \brief [15:14] Input Select for CAPIN (rw) */
    unsigned int reserved_16: 16;
} Ifx_GPT12_PISEL_Bits;

/** Timer T2 Register */
typedef struct
{
    unsigned int T2: 16;                    /** \brief [15:0] Timer T2 (rwh) */
    unsigned int reserved_16: 16;
} Ifx_GPT12_T2_Bits;

/** Timer T2 Control Register */
typedef struct
{
    unsigned int T2I: 3;                    /** \brief [2:0] Timer T2 Input Parameter Selection (rw) */
    unsigned int T2M: 3;                    /** \brief [5:3] Timer T2 Mode Control (Basic Operating Mode) (rw) */
    unsigned int T2R: 1;                    /** \brief [6:6] Timer T2 Run Bit (rw) */
    unsigned int T2UD: 1;                   /** \brief [7:7] Timer T2 Up/Down ControlSee for encoding of bits T2UD and T2UDE. (rw) */
    unsigned int T2UDE: 1;                  /** \brief [8:8] Timer T2 External Up/Down Enable (rw) */
    unsigned int T2RC: 1;                   /** \brief [9:9] Timer T2 Remote Control (rw) */
    unsigned int reserved_10: 2;
    unsigned int T2IRDIS: 1;                /** \brief [12:12] Timer T2 Interrupt Disable (rw) */
    unsigned int T2EDGE: 1;                 /** \brief [13:13] Timer T2 Edge Detection (rwh) */
    unsigned int T2CHDIR: 1;                /** \brief [14:14] Timer T2 Count Direction Change (rwh) */
    unsigned int T2RDIR: 1;                 /** \brief [15:15] Timer T2 Rotation Direction (rh) */
    unsigned int reserved_16: 16;
} Ifx_GPT12_T2CON_Bits;

/** Timer T3 Register */
typedef struct
{
    unsigned int T3: 16;                    /** \brief [15:0] Timer T3 (rwh) */
    unsigned int reserved_16: 16;
} Ifx_GPT12_T3_Bits;

/** Timer T3 Control Register */
typedef struct
{
    unsigned int T3I: 3;                    /** \brief [2:0] Timer T3 Input Parameter Selection (rw) */
    unsigned int T3M: 3;                    /** \brief [5:3] Timer T3 Mode Control (rw) */
    unsigned int T3R: 1;                    /** \brief [6:6] Timer T3 Run Bit (rw) */
    unsigned int T3UD: 1;                   /** \brief [7:7] Timer T3 Up/Down Control (rw) */
    unsigned int T3UDE: 1;                  /** \brief [8:8] Timer T3 External Up/Down EnableSee for encoding of bits T3UD and T3UDE. (rw) */
    unsigned int T3OE: 1;                   /** \brief [9:9] Overflow/Underflow Output Enable (rw) */
    unsigned int T3OTL: 1;                  /** \brief [10:10] Timer T3 Overflow Toggle Latch (rwh) */
    unsigned int BPS1: 2;                   /** \brief [12:11] GPT1 Block Prescaler Control (rw) */
    unsigned int T3EDGE: 1;                 /** \brief [13:13] Timer T3 Edge Detection Flag (rwh) */
    unsigned int T3CHDIR: 1;                /** \brief [14:14] Timer T3 Count Direction Change Flag (rwh) */
    unsigned int T3RDIR: 1;                 /** \brief [15:15] Timer T3 Rotation Direction Flag (rh) */
    unsigned int reserved_16: 16;
} Ifx_GPT12_T3CON_Bits;

/** Timer T4 Register */
typedef struct
{
    unsigned int T4: 16;                    /** \brief [15:0] Timer T4 (rwh) */
    unsigned int reserved_16: 16;
} Ifx_GPT12_T4_Bits;

/** Timer T4 Control Register */
typedef struct
{
    unsigned int T4I: 3;                    /** \brief [2:0] Timer T4 Input Parameter Selection (rw) */
    unsigned int T4M: 3;                    /** \brief [5:3] Timer T4 Mode Control (Basic Operating Mode) (rw) */
    unsigned int T4R: 1;                    /** \brief [6:6] Timer T4 Run Bit (rw) */
    unsigned int T4UD: 1;                   /** \brief [7:7] Timer T4 Up/Down ControlSee for encoding of bits T4UD and T4UDE. (rw) */
    unsigned int T4UDE: 1;                  /** \brief [8:8] Timer T4 External Up/Down Enable (rw) */
    unsigned int T4RC: 1;                   /** \brief [9:9] Timer T4 Remote Control (rw) */
    unsigned int CLRT2EN: 1;                /** \brief [10:10] Clear Timer T2 Enable (rw) */
    unsigned int CLRT3EN: 1;                /** \brief [11:11] Clear Timer T3 Enable (rw) */
    unsigned int T4IRDIS: 1;                /** \brief [12:12] Timer T4 Interrupt Disable (rw) */
    unsigned int T4EDGE: 1;                 /** \brief [13:13] Timer T4 Edge Detection (rwh) */
    unsigned int T4CHDIR: 1;                /** \brief [14:14] Timer T4 Count Direction Change (rwh) */
    unsigned int T4RDIR: 1;                 /** \brief [15:15] Timer T4 Rotation Direction (rh) */
    unsigned int reserved_16: 16;
} Ifx_GPT12_T4CON_Bits;

/** Timer T5 Register */
typedef struct
{
    unsigned int T5: 16;                    /** \brief [15:0] Timer T5 (rwh) */
    unsigned int reserved_16: 16;
} Ifx_GPT12_T5_Bits;

/** Timer T5 Control Register */
typedef struct
{
    unsigned int T5I: 3;                    /** \brief [2:0] Timer T5 Input Parameter Selection (rw) */
    unsigned int T5M: 3;                    /** \brief [5:3] Timer T5 Mode Control (Basic Operating Mode) (rw) */
    unsigned int T5R: 1;                    /** \brief [6:6] Timer T5 Run Bit (rw) */
    unsigned int T5UD: 1;                   /** \brief [7:7] Timer T5 Up/Down Control (rw) */
    unsigned int T5UDE: 1;                  /** \brief [8:8] Timer T5 External Up/Down EnableSee for encoding of bits T5UD and T5UDE. (rw) */
    unsigned int T5RC: 1;                   /** \brief [9:9] Timer T5 Remote Control (rw) */
    unsigned int CT3: 1;                    /** \brief [10:10] Timer T3 Capture Trigger Enable (rw) */
    unsigned int T5CC: 1;                   /** \brief [11:11] Timer T5 Capture Correction (rw) */
    unsigned int CI: 2;                     /** \brief [13:12] Register CAPREL Capture Trigger SelectionTo define the respective trigger source signal, also bit CT3 must be regarded (see ). (rw) */
    unsigned int T5CLR: 1;                  /** \brief [14:14] Timer T5 Clear Enable Bit (rw) */
    unsigned int T5SC: 1;                   /** \brief [15:15] Timer T5 Capture Mode Enable (rw) */
    unsigned int reserved_16: 16;
} Ifx_GPT12_T5CON_Bits;

/** Timer T6 Register */
typedef struct
{
    unsigned int T6: 16;                    /** \brief [15:0] Timer T6 (rwh) */
    unsigned int reserved_16: 16;
} Ifx_GPT12_T6_Bits;

/** Timer T6 Control Register */
typedef struct
{
    unsigned int T6I: 3;                    /** \brief [2:0] Timer T6 Input Parameter Selection (rw) */
    unsigned int T6M: 3;                    /** \brief [5:3] Timer T6 Mode Control (Basic Operating Mode) (rw) */
    unsigned int T6R: 1;                    /** \brief [6:6] Timer T6 Run Bit (rw) */
    unsigned int T6UD: 1;                   /** \brief [7:7] Timer T6 Up/Down ControlSee for coding of bits T6UD and T6UDE (rw) */
    unsigned int T6UDE: 1;                  /** \brief [8:8] Timer T6 External Up/Down Enable (rw) */
    unsigned int T6OE: 1;                   /** \brief [9:9] Overflow/Underflow Output Enable (rw) */
    unsigned int T6OTL: 1;                  /** \brief [10:10] Timer T6 Overflow Toggle Latch (rwh) */
    unsigned int BPS2: 2;                   /** \brief [12:11] GPT2 Block Prescaler Control (rw) */
    unsigned int reserved_13: 1;
    unsigned int T6CLR: 1;                  /** \brief [14:14] Timer T6 Clear Enable Bit (rw) */
    unsigned int T6SR: 1;                   /** \brief [15:15] Timer T6 Reload Mode Enable (rw) */
    unsigned int reserved_16: 16;
} Ifx_GPT12_T6CON_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_ACCEN0_Bits B;
} Ifx_GPT12_ACCEN0;

/** Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_ACCEN1_Bits B;
} Ifx_GPT12_ACCEN1;

/** Capture and Reload Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_CAPREL_Bits B;
} Ifx_GPT12_CAPREL;

/** Kernel Reset Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_KRST0_Bits B;
} Ifx_GPT12_KRST0;

/** Kernel Reset Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_KRST1_Bits B;
} Ifx_GPT12_KRST1;

/** Kernel Reset Status Clear Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_KRSTCLR_Bits B;
} Ifx_GPT12_KRSTCLR;

/** OCDS Control and Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_OCS_Bits B;
} Ifx_GPT12_OCS;

/** Port Input Select Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_PISEL_Bits B;
} Ifx_GPT12_PISEL;

/** Timer T2 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_T2_Bits B;
} Ifx_GPT12_T2;

/** Timer T2 Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_T2CON_Bits B;
} Ifx_GPT12_T2CON;

/** Timer T3 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_T3_Bits B;
} Ifx_GPT12_T3;

/** Timer T3 Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_T3CON_Bits B;
} Ifx_GPT12_T3CON;

/** Timer T4 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_T4_Bits B;
} Ifx_GPT12_T4;

/** Timer T4 Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_T4CON_Bits B;
} Ifx_GPT12_T4CON;

/** Timer T5 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_T5_Bits B;
} Ifx_GPT12_T5;

/** Timer T5 Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_T5CON_Bits B;
} Ifx_GPT12_T5CON;

/** Timer T6 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_T6_Bits B;
} Ifx_GPT12_T6;

/** Timer T6 Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GPT12_T6CON_Bits B;
} Ifx_GPT12_T6CON;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** GPT12 object */
typedef volatile struct
{
    Ifx_CLC1 CLC;                           /** \brief 0, Clock Control Register */
    Ifx_GPT12_PISEL PISEL;                  /** \brief 4, Port Input Select Register */
    Ifx_ID1 ID;                             /** \brief 8, Identification Register */
    unsigned char reserved_C[4];            /** \brief C */
    Ifx_GPT12_T2CON T2CON;                  /** \brief 10, Timer T2 Control Register */
    Ifx_GPT12_T3CON T3CON;                  /** \brief 14, Timer T3 Control Register */
    Ifx_GPT12_T4CON T4CON;                  /** \brief 18, Timer T4 Control Register */
    Ifx_GPT12_T5CON T5CON;                  /** \brief 1C, Timer T5 Control Register */
    Ifx_GPT12_T6CON T6CON;                  /** \brief 20, Timer T6 Control Register */
    unsigned char reserved_24[12];          /** \brief 24 */
    Ifx_GPT12_CAPREL CAPREL;                /** \brief 30, Capture and Reload Register */
    Ifx_GPT12_T2 T2;                        /** \brief 34, Timer T2 Register */
    Ifx_GPT12_T3 T3;                        /** \brief 38, Timer T3 Register */
    Ifx_GPT12_T4 T4;                        /** \brief 3C, Timer T4 Register */
    Ifx_GPT12_T5 T5;                        /** \brief 40, Timer T5 Register */
    Ifx_GPT12_T6 T6;                        /** \brief 44, Timer T6 Register */
    unsigned char reserved_48[160];         /** \brief 48 */
    Ifx_GPT12_OCS OCS;                      /** \brief E8, OCDS Control and Status Register */
    Ifx_GPT12_KRSTCLR KRSTCLR;              /** \brief EC, Kernel Reset Status Clear Register */
    Ifx_GPT12_KRST1 KRST1;                  /** \brief F0, Kernel Reset Register 1 */
    Ifx_GPT12_KRST0 KRST0;                  /** \brief F4, Kernel Reset Register 0 */
    Ifx_GPT12_ACCEN1 ACCEN1;                /** \brief F8, Access Enable Register 1 */
    Ifx_GPT12_ACCEN0 ACCEN0;                /** \brief FC, Access Enable Register 0 */
} Ifx_GPT12;
/******************************************************************************/
#endif /* IFXGPT12_REGDEF_H */

