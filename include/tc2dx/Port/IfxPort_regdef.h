/**
 * \file IfxPort_regdef.h
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
#ifndef IFXPORT_REGDEF_H
#define IFXPORT_REGDEF_H
/******************************************************************************/
#include "Global/IfxGlobal_regdef.h"

/******************************************************************************/
/*                           Struct (0 - Bitfields)                           */
/******************************************************************************/

/** Port Access Enable Register 0 */
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
} Ifx_P_ACCEN0_Bits;

/** Port Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_P_ACCEN1_Bits;

/** Port Emergency Stop Register */
typedef struct
{
    unsigned int EN0: 1;                    /** \brief [0:0] Emergency Stop Enable for Port n Pin x (rw) */
    unsigned int EN1: 1;                    /** \brief [1:1] Emergency Stop Enable for Port n Pin x (rw) */
    unsigned int EN2: 1;                    /** \brief [2:2] Emergency Stop Enable for Port n Pin x (rw) */
    unsigned int EN3: 1;                    /** \brief [3:3] Emergency Stop Enable for Port n Pin x (rw) */
    unsigned int EN4: 1;                    /** \brief [4:4] Emergency Stop Enable for Port n Pin x (rw) */
    unsigned int EN5: 1;                    /** \brief [5:5] Emergency Stop Enable for Port n Pin x (rw) */
    unsigned int EN6: 1;                    /** \brief [6:6] Emergency Stop Enable for Port n Pin x (rw) */
    unsigned int EN7: 1;                    /** \brief [7:7] Emergency Stop Enable for Port n Pin x (rw) */
    unsigned int EN8: 1;                    /** \brief [8:8] Emergency Stop Enable for Port n Pin x (rw) */
    unsigned int EN9: 1;                    /** \brief [9:9] Emergency Stop Enable for Port n Pin x (rw) */
    unsigned int EN10: 1;                   /** \brief [10:10] Emergency Stop Enable for Port n Pin x (rw) */
    unsigned int EN11: 1;                   /** \brief [11:11] Emergency Stop Enable for Port n Pin x (rw) */
    unsigned int EN12: 1;                   /** \brief [12:12] Emergency Stop Enable for Port n Pin x (rw) */
    unsigned int EN13: 1;                   /** \brief [13:13] Emergency Stop Enable for Port n Pin x (rw) */
    unsigned int EN14: 1;                   /** \brief [14:14] Emergency Stop Enable for Port n Pin x (rw) */
    unsigned int EN15: 1;                   /** \brief [15:15] Emergency Stop Enable for Port n Pin x (rw) */
    unsigned int reserved_16: 16;
} Ifx_P_ESR_Bits;

/** Port Input Register */
typedef struct
{
    unsigned int P0: 1;                     /** \brief [0:0] Port n Input Bit x (rh) */
    unsigned int P1: 1;                     /** \brief [1:1] Port n Input Bit x (rh) */
    unsigned int P2: 1;                     /** \brief [2:2] Port n Input Bit x (rh) */
    unsigned int P3: 1;                     /** \brief [3:3] Port n Input Bit x (rh) */
    unsigned int P4: 1;                     /** \brief [4:4] Port n Input Bit x (rh) */
    unsigned int P5: 1;                     /** \brief [5:5] Port n Input Bit x (rh) */
    unsigned int P6: 1;                     /** \brief [6:6] Port n Input Bit x (rh) */
    unsigned int P7: 1;                     /** \brief [7:7] Port n Input Bit x (rh) */
    unsigned int P8: 1;                     /** \brief [8:8] Port n Input Bit x (rh) */
    unsigned int P9: 1;                     /** \brief [9:9] Port n Input Bit x (rh) */
    unsigned int P10: 1;                    /** \brief [10:10] Port n Input Bit x (rh) */
    unsigned int P11: 1;                    /** \brief [11:11] Port n Input Bit x (rh) */
    unsigned int P12: 1;                    /** \brief [12:12] Port n Input Bit x (rh) */
    unsigned int P13: 1;                    /** \brief [13:13] Port n Input Bit x (rh) */
    unsigned int P14: 1;                    /** \brief [14:14] Port n Input Bit x (rh) */
    unsigned int P15: 1;                    /** \brief [15:15] Port n Input Bit x (rh) */
    unsigned int reserved_16: 16;
} Ifx_P_IN_Bits;

/** Port Input/Output Control Register 0 */
typedef struct
{
    unsigned int reserved_0: 3;
    unsigned int PC0: 5;                    /** \brief [7:3]  (rw) */
    unsigned int reserved_8: 3;
    unsigned int PC1: 5;                    /** \brief [15:11]  (rw) */
    unsigned int reserved_16: 3;
    unsigned int PC2: 5;                    /** \brief [23:19]  (rw) */
    unsigned int reserved_24: 3;
    unsigned int PC3: 5;                    /** \brief [31:27]  (rw) */
} Ifx_P_IOCR0_Bits;

/** Port Input/Output Control Register 12 */
typedef struct
{
    unsigned int reserved_0: 3;
    unsigned int PC12: 5;                   /** \brief [7:3]  (rw) */
    unsigned int reserved_8: 3;
    unsigned int PC13: 5;                   /** \brief [15:11]  (rw) */
    unsigned int reserved_16: 3;
    unsigned int PC14: 5;                   /** \brief [23:19]  (rw) */
    unsigned int reserved_24: 3;
    unsigned int PC15: 5;                   /** \brief [31:27]  (rw) */
} Ifx_P_IOCR12_Bits;

/** Port Input/Output Control Register 4 */
typedef struct
{
    unsigned int reserved_0: 3;
    unsigned int PC4: 5;                    /** \brief [7:3]  (rw) */
    unsigned int reserved_8: 3;
    unsigned int PC5: 5;                    /** \brief [15:11]  (rw) */
    unsigned int reserved_16: 3;
    unsigned int PC6: 5;                    /** \brief [23:19]  (rw) */
    unsigned int reserved_24: 3;
    unsigned int PC7: 5;                    /** \brief [31:27]  (rw) */
} Ifx_P_IOCR4_Bits;

/** Port Input/Output Control Register 8 */
typedef struct
{
    unsigned int reserved_0: 3;
    unsigned int PC8: 5;                    /** \brief [7:3]  (rw) */
    unsigned int reserved_8: 3;
    unsigned int PC9: 5;                    /** \brief [15:11]  (rw) */
    unsigned int reserved_16: 3;
    unsigned int PC10: 5;                   /** \brief [23:19]  (rw) */
    unsigned int reserved_24: 3;
    unsigned int PC11: 5;                   /** \brief [31:27]  (rw) */
} Ifx_P_IOCR8_Bits;

/** Port Output Modification Clear Register 0 */
typedef struct
{
    unsigned int reserved_0: 16;
    unsigned int PCL0: 1;                   /** \brief [16:16] Port n Clear Bit x (w) */
    unsigned int PCL1: 1;                   /** \brief [17:17] Port n Clear Bit x (w) */
    unsigned int PCL2: 1;                   /** \brief [18:18] Port n Clear Bit x (w) */
    unsigned int PCL3: 1;                   /** \brief [19:19] Port n Clear Bit x (w) */
    unsigned int reserved_20: 12;
} Ifx_P_OMCR0_Bits;

/** Port Output Modification Clear Register 12 */
typedef struct
{
    unsigned int reserved_0: 28;
    unsigned int PCL12: 1;                  /** \brief [28:28] Port n Clear Bit x (w) */
    unsigned int PCL13: 1;                  /** \brief [29:29] Port n Clear Bit x (w) */
    unsigned int PCL14: 1;                  /** \brief [30:30] Port n Clear Bit x (w) */
    unsigned int PCL15: 1;                  /** \brief [31:31] Port n Clear Bit x (w) */
} Ifx_P_OMCR12_Bits;

/** Port Output Modification Clear Register 4 */
typedef struct
{
    unsigned int reserved_0: 20;
    unsigned int PCL4: 1;                   /** \brief [20:20] Port n Clear Bit x (w) */
    unsigned int PCL5: 1;                   /** \brief [21:21] Port n Clear Bit x (w) */
    unsigned int PCL6: 1;                   /** \brief [22:22] Port n Clear Bit x (w) */
    unsigned int PCL7: 1;                   /** \brief [23:23] Port n Clear Bit x (w) */
    unsigned int reserved_24: 8;
} Ifx_P_OMCR4_Bits;

/** Port Output Modification Clear Register 8 */
typedef struct
{
    unsigned int reserved_0: 24;
    unsigned int PCL8: 1;                   /** \brief [24:24] Port n Clear Bit x (w) */
    unsigned int PCL9: 1;                   /** \brief [25:25] Port n Clear Bit x (w) */
    unsigned int PCL10: 1;                  /** \brief [26:26] Port n Clear Bit x (w) */
    unsigned int PCL11: 1;                  /** \brief [27:27] Port n Clear Bit x (w) */
    unsigned int reserved_28: 4;
} Ifx_P_OMCR8_Bits;

/** Port Output Modification Clear Register */
typedef struct
{
    unsigned int reserved_0: 16;
    unsigned int PCL0: 1;                   /** \brief [16:16] Port n Clear Bit x (w) */
    unsigned int PCL1: 1;                   /** \brief [17:17] Port n Clear Bit x (w) */
    unsigned int PCL2: 1;                   /** \brief [18:18] Port n Clear Bit x (w) */
    unsigned int PCL3: 1;                   /** \brief [19:19] Port n Clear Bit x (w) */
    unsigned int PCL4: 1;                   /** \brief [20:20] Port n Clear Bit x (w) */
    unsigned int PCL5: 1;                   /** \brief [21:21] Port n Clear Bit x (w) */
    unsigned int PCL6: 1;                   /** \brief [22:22] Port n Clear Bit x (w) */
    unsigned int PCL7: 1;                   /** \brief [23:23] Port n Clear Bit x (w) */
    unsigned int PCL8: 1;                   /** \brief [24:24] Port n Clear Bit x (w) */
    unsigned int PCL9: 1;                   /** \brief [25:25] Port n Clear Bit x (w) */
    unsigned int PCL10: 1;                  /** \brief [26:26] Port n Clear Bit x (w) */
    unsigned int PCL11: 1;                  /** \brief [27:27] Port n Clear Bit x (w) */
    unsigned int PCL12: 1;                  /** \brief [28:28] Port n Clear Bit x (w) */
    unsigned int PCL13: 1;                  /** \brief [29:29] Port n Clear Bit x (w) */
    unsigned int PCL14: 1;                  /** \brief [30:30] Port n Clear Bit x (w) */
    unsigned int PCL15: 1;                  /** \brief [31:31] Port n Clear Bit x (w) */
} Ifx_P_OMCR_Bits;

/** Port Output Modification Register */
typedef struct
{
    unsigned int PS0: 1;                    /** \brief [0:0]  (w) */
    unsigned int PS1: 1;                    /** \brief [1:1]  (w) */
    unsigned int PS2: 1;                    /** \brief [2:2]  (w) */
    unsigned int PS3: 1;                    /** \brief [3:3]  (w) */
    unsigned int PS4: 1;                    /** \brief [4:4]  (w) */
    unsigned int PS5: 1;                    /** \brief [5:5]  (w) */
    unsigned int PS6: 1;                    /** \brief [6:6]  (w) */
    unsigned int PS7: 1;                    /** \brief [7:7]  (w) */
    unsigned int PS8: 1;                    /** \brief [8:8]  (w) */
    unsigned int PS9: 1;                    /** \brief [9:9]  (w) */
    unsigned int PS10: 1;                   /** \brief [10:10]  (w) */
    unsigned int PS11: 1;                   /** \brief [11:11]  (w) */
    unsigned int PS12: 1;                   /** \brief [12:12]  (w) */
    unsigned int PS13: 1;                   /** \brief [13:13]  (w) */
    unsigned int PS14: 1;                   /** \brief [14:14]  (w) */
    unsigned int PS15: 1;                   /** \brief [15:15]  (w) */
    unsigned int PCL0: 1;                   /** \brief [16:16]  (w) */
    unsigned int PCL1: 1;                   /** \brief [17:17]  (w) */
    unsigned int PCL2: 1;                   /** \brief [18:18]  (w) */
    unsigned int PCL3: 1;                   /** \brief [19:19]  (w) */
    unsigned int PCL4: 1;                   /** \brief [20:20]  (w) */
    unsigned int PCL5: 1;                   /** \brief [21:21]  (w) */
    unsigned int PCL6: 1;                   /** \brief [22:22]  (w) */
    unsigned int PCL7: 1;                   /** \brief [23:23]  (w) */
    unsigned int PCL8: 1;                   /** \brief [24:24]  (w) */
    unsigned int PCL9: 1;                   /** \brief [25:25]  (w) */
    unsigned int PCL10: 1;                  /** \brief [26:26]  (w) */
    unsigned int PCL11: 1;                  /** \brief [27:27]  (w) */
    unsigned int PCL12: 1;                  /** \brief [28:28]  (w) */
    unsigned int PCL13: 1;                  /** \brief [29:29]  (w) */
    unsigned int PCL14: 1;                  /** \brief [30:30]  (w) */
    unsigned int PCL15: 1;                  /** \brief [31:31]  (w) */
} Ifx_P_OMR_Bits;

/** Port Output Modification Set Register 0 */
typedef struct
{
    unsigned int PS0: 1;                    /** \brief [0:0] Port n Set Bit x (w) */
    unsigned int PS1: 1;                    /** \brief [1:1] Port n Set Bit x (w) */
    unsigned int PS2: 1;                    /** \brief [2:2] Port n Set Bit x (w) */
    unsigned int PS3: 1;                    /** \brief [3:3] Port n Set Bit x (w) */
    unsigned int reserved_4: 28;
} Ifx_P_OMSR0_Bits;

/** Port Output Modification Set Register 12 */
typedef struct
{
    unsigned int reserved_0: 12;
    unsigned int PS12: 1;                   /** \brief [12:12] Port n Set Bit x (w) */
    unsigned int PS13: 1;                   /** \brief [13:13] Port n Set Bit x (w) */
    unsigned int PS14: 1;                   /** \brief [14:14] Port n Set Bit x (w) */
    unsigned int PS15: 1;                   /** \brief [15:15] Port n Set Bit x (w) */
    unsigned int reserved_16: 16;
} Ifx_P_OMSR12_Bits;

/** Port Output Modification Set Register 4 */
typedef struct
{
    unsigned int reserved_0: 4;
    unsigned int PS4: 1;                    /** \brief [4:4] Port n Set Bit x (w) */
    unsigned int PS5: 1;                    /** \brief [5:5] Port n Set Bit x (w) */
    unsigned int PS6: 1;                    /** \brief [6:6] Port n Set Bit x (w) */
    unsigned int PS7: 1;                    /** \brief [7:7] Port n Set Bit x (w) */
    unsigned int reserved_8: 24;
} Ifx_P_OMSR4_Bits;

/** Port Output Modification Set Register 8 */
typedef struct
{
    unsigned int reserved_0: 8;
    unsigned int PS8: 1;                    /** \brief [8:8] Port n Set Bit x (w) */
    unsigned int PS9: 1;                    /** \brief [9:9] Port n Set Bit x (w) */
    unsigned int PS10: 1;                   /** \brief [10:10] Port n Set Bit x (w) */
    unsigned int PS11: 1;                   /** \brief [11:11] Port n Set Bit x (w) */
    unsigned int reserved_12: 20;
} Ifx_P_OMSR8_Bits;

/** Port Output Modification Set Register */
typedef struct
{
    unsigned int PS0: 1;                    /** \brief [0:0] Port n Set Bit x (w) */
    unsigned int PS1: 1;                    /** \brief [1:1] Port n Set Bit x (w) */
    unsigned int PS2: 1;                    /** \brief [2:2] Port n Set Bit x (w) */
    unsigned int PS3: 1;                    /** \brief [3:3] Port n Set Bit x (w) */
    unsigned int PS4: 1;                    /** \brief [4:4] Port n Set Bit x (w) */
    unsigned int PS5: 1;                    /** \brief [5:5] Port n Set Bit x (w) */
    unsigned int PS6: 1;                    /** \brief [6:6] Port n Set Bit x (w) */
    unsigned int PS7: 1;                    /** \brief [7:7] Port n Set Bit x (w) */
    unsigned int PS8: 1;                    /** \brief [8:8] Port n Set Bit x (w) */
    unsigned int PS9: 1;                    /** \brief [9:9] Port n Set Bit x (w) */
    unsigned int PS10: 1;                   /** \brief [10:10] Port n Set Bit x (w) */
    unsigned int PS11: 1;                   /** \brief [11:11] Port n Set Bit x (w) */
    unsigned int PS12: 1;                   /** \brief [12:12] Port n Set Bit x (w) */
    unsigned int PS13: 1;                   /** \brief [13:13] Port n Set Bit x (w) */
    unsigned int PS14: 1;                   /** \brief [14:14] Port n Set Bit x (w) */
    unsigned int PS15: 1;                   /** \brief [15:15] Port n Set Bit x (w) */
    unsigned int reserved_16: 16;
} Ifx_P_OMSR_Bits;

/** Port Output Register */
typedef struct
{
    unsigned int P0: 1;                     /** \brief [0:0]  (rwh) */
    unsigned int P1: 1;                     /** \brief [1:1]  (rwh) */
    unsigned int P2: 1;                     /** \brief [2:2]  (rwh) */
    unsigned int P3: 1;                     /** \brief [3:3]  (rwh) */
    unsigned int P4: 1;                     /** \brief [4:4]  (rwh) */
    unsigned int P5: 1;                     /** \brief [5:5]  (rwh) */
    unsigned int P6: 1;                     /** \brief [6:6]  (rwh) */
    unsigned int P7: 1;                     /** \brief [7:7]  (rwh) */
    unsigned int P8: 1;                     /** \brief [8:8]  (rwh) */
    unsigned int P9: 1;                     /** \brief [9:9]  (rwh) */
    unsigned int P10: 1;                    /** \brief [10:10]  (rwh) */
    unsigned int P11: 1;                    /** \brief [11:11]  (rwh) */
    unsigned int P12: 1;                    /** \brief [12:12]  (rwh) */
    unsigned int P13: 1;                    /** \brief [13:13]  (rwh) */
    unsigned int P14: 1;                    /** \brief [14:14]  (rwh) */
    unsigned int P15: 1;                    /** \brief [15:15]  (rwh) */
    unsigned int reserved_16: 16;
} Ifx_P_OUT_Bits;

/** Port Pad Driver Mode 0 Register */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_P_PDR0_Bits;

/** Port Pad Driver Mode 1 Register */
typedef struct
{
    unsigned int PD8: 3;                    /** \brief [2:0]  (rw) */
    unsigned int PL8: 1;                    /** \brief [3:3]  (rw) */
    unsigned int PD9: 3;                    /** \brief [6:4]  (rw) */
    unsigned int PL9: 1;                    /** \brief [7:7]  (rw) */
    unsigned int PD10: 3;                   /** \brief [10:8]  (rw) */
    unsigned int PL10: 1;                   /** \brief [11:11]  (rw) */
    unsigned int PD11: 3;                   /** \brief [14:12]  (rw) */
    unsigned int PL11: 1;                   /** \brief [15:15]  (rw) */
    unsigned int PD12: 3;                   /** \brief [18:16]  (rw) */
    unsigned int PL12: 1;                   /** \brief [19:19]  (rw) */
    unsigned int PD13: 3;                   /** \brief [22:20]  (rw) */
    unsigned int PL13: 1;                   /** \brief [23:23]  (rw) */
    unsigned int PD14: 3;                   /** \brief [26:24]  (rw) */
    unsigned int PL14: 1;                   /** \brief [27:27]  (rw) */
    unsigned int PD15: 3;                   /** \brief [30:28]  (rw) */
    unsigned int PL15: 1;                   /** \brief [31:31]  (rw) */
} Ifx_P_PDR1_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Port Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_ACCEN0_Bits B;
} Ifx_P_ACCEN0;

/** Port Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_ACCEN1_Bits B;
} Ifx_P_ACCEN1;

/** Port Emergency Stop Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_ESR_Bits B;
} Ifx_P_ESR;

/** Port Input Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_IN_Bits B;
} Ifx_P_IN;

/** Port Input/Output Control Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_IOCR0_Bits B;
} Ifx_P_IOCR0;

/** Port Input/Output Control Register 12 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_IOCR12_Bits B;
} Ifx_P_IOCR12;

/** Port Input/Output Control Register 4 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_IOCR4_Bits B;
} Ifx_P_IOCR4;

/** Port Input/Output Control Register 8 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_IOCR8_Bits B;
} Ifx_P_IOCR8;

/** Port Output Modification Clear Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_OMCR_Bits B;
} Ifx_P_OMCR;

/** Port Output Modification Clear Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_OMCR0_Bits B;
} Ifx_P_OMCR0;

/** Port Output Modification Clear Register 12 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_OMCR12_Bits B;
} Ifx_P_OMCR12;

/** Port Output Modification Clear Register 4 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_OMCR4_Bits B;
} Ifx_P_OMCR4;

/** Port Output Modification Clear Register 8 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_OMCR8_Bits B;
} Ifx_P_OMCR8;

/** Port Output Modification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_OMR_Bits B;
} Ifx_P_OMR;

/** Port Output Modification Set Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_OMSR_Bits B;
} Ifx_P_OMSR;

/** Port Output Modification Set Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_OMSR0_Bits B;
} Ifx_P_OMSR0;

/** Port Output Modification Set Register 12 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_OMSR12_Bits B;
} Ifx_P_OMSR12;

/** Port Output Modification Set Register 4 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_OMSR4_Bits B;
} Ifx_P_OMSR4;

/** Port Output Modification Set Register 8 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_OMSR8_Bits B;
} Ifx_P_OMSR8;

/** Port Output Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_OUT_Bits B;
} Ifx_P_OUT;

/** Port Pad Driver Mode 0 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_PDR0_Bits B;
} Ifx_P_PDR0;

/** Port Pad Driver Mode 1 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_P_PDR1_Bits B;
} Ifx_P_PDR1;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** Port object */
typedef volatile struct
{
    Ifx_P_OUT OUT;                          /** \brief 0, Port Output Register */
    Ifx_P_OMR OMR;                          /** \brief 4, Port Output Modification Register */
    Ifx_ID1 ID;                             /** \brief 8, Identification Register */
    unsigned char reserved_C[4];            /** \brief C */
    Ifx_P_IOCR0 IOCR0;                      /** \brief 10, Port Input/Output Control Register 0 */
    Ifx_P_IOCR4 IOCR4;                      /** \brief 14, Port Input/Output Control Register 4 */
    Ifx_P_IOCR8 IOCR8;                      /** \brief 18, Port Input/Output Control Register 8 */
    Ifx_P_IOCR12 IOCR12;                    /** \brief 1C, Port Input/Output Control Register 12 */
    unsigned char reserved_20[4];           /** \brief 20 */
    Ifx_P_IN IN;                            /** \brief 24, Port Input Register */
    unsigned char reserved_28[24];          /** \brief 28 */
    Ifx_P_PDR0 PDR0;                        /** \brief 40, Port Pad Driver Mode 0 Register */
    Ifx_P_PDR1 PDR1;                        /** \brief 44, Port Pad Driver Mode 1 Register */
    unsigned char reserved_48[8];           /** \brief 48 */
    Ifx_P_ESR ESR;                          /** \brief 50, Port Emergency Stop Register */
    unsigned char reserved_54[28];          /** \brief 54 */
    Ifx_P_OMSR0 OMSR0;                      /** \brief 70, Port Output Modification Set Register 0 */
    Ifx_P_OMSR4 OMSR4;                      /** \brief 74, Port Output Modification Set Register 4 */
    Ifx_P_OMSR8 OMSR8;                      /** \brief 78, Port Output Modification Set Register 8 */
    Ifx_P_OMSR12 OMSR12;                    /** \brief 7C, Port Output Modification Set Register 12 */
    Ifx_P_OMCR0 OMCR0;                      /** \brief 80, Port Output Modification Clear Register 0 */
    Ifx_P_OMCR4 OMCR4;                      /** \brief 84, Port Output Modification Clear Register 4 */
    Ifx_P_OMCR8 OMCR8;                      /** \brief 88, Port Output Modification Clear Register 8 */
    Ifx_P_OMCR12 OMCR12;                    /** \brief 8C, Port Output Modification Clear Register 12 */
    Ifx_P_OMSR OMSR;                        /** \brief 90, Port Output Modification Set Register */
    Ifx_P_OMCR OMCR;                        /** \brief 94, Port Output Modification Clear Register */
    unsigned char reserved_98[96];          /** \brief 98 */
    Ifx_P_ACCEN1 ACCEN1;                    /** \brief F8, Port Access Enable Register 1 */
    Ifx_P_ACCEN0 ACCEN0;                    /** \brief FC, Port Access Enable Register 0 */
} Ifx_P;
/******************************************************************************/
#endif /* IFXPORT_REGDEF_H */

