/**
 * \file IfxSmu_regdef.h
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
#ifndef IFXSMU_REGDEF_H
#define IFXSMU_REGDEF_H
/******************************************************************************/
#include "Global/IfxGlobal_regdef.h"

/******************************************************************************/
/*                           Struct (0 - Bitfields)                           */
/******************************************************************************/

/** SMU Access Enable Register 0 */
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
} Ifx_SMU_ACCEN0_Bits;

/** SMU Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_SMU_ACCEN1_Bits;

/** Alarm Status Register */
typedef struct
{
    unsigned int DF0: 1;                    /** \brief [0:0] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF1: 1;                    /** \brief [1:1] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF2: 1;                    /** \brief [2:2] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF3: 1;                    /** \brief [3:3] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF4: 1;                    /** \brief [4:4] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF5: 1;                    /** \brief [5:5] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF6: 1;                    /** \brief [6:6] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF7: 1;                    /** \brief [7:7] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF8: 1;                    /** \brief [8:8] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF9: 1;                    /** \brief [9:9] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF10: 1;                   /** \brief [10:10] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF11: 1;                   /** \brief [11:11] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF12: 1;                   /** \brief [12:12] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF13: 1;                   /** \brief [13:13] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF14: 1;                   /** \brief [14:14] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF15: 1;                   /** \brief [15:15] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF16: 1;                   /** \brief [16:16] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF17: 1;                   /** \brief [17:17] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF18: 1;                   /** \brief [18:18] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF19: 1;                   /** \brief [19:19] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF20: 1;                   /** \brief [20:20] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF21: 1;                   /** \brief [21:21] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF22: 1;                   /** \brief [22:22] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF23: 1;                   /** \brief [23:23] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF24: 1;                   /** \brief [24:24] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF25: 1;                   /** \brief [25:25] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF26: 1;                   /** \brief [26:26] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF27: 1;                   /** \brief [27:27] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF28: 1;                   /** \brief [28:28] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF29: 1;                   /** \brief [29:29] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF30: 1;                   /** \brief [30:30] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
    unsigned int DF31: 1;                   /** \brief [31:31] Debug flag for alarm n belonging to alarm group x (x=0-3). (rh) */
} Ifx_SMU_AD_Bits;

/** Alarm Status Register */
typedef struct
{
    unsigned int SF0: 1;                    /** \brief [0:0] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF1: 1;                    /** \brief [1:1] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF2: 1;                    /** \brief [2:2] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF3: 1;                    /** \brief [3:3] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF4: 1;                    /** \brief [4:4] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF5: 1;                    /** \brief [5:5] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF6: 1;                    /** \brief [6:6] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF7: 1;                    /** \brief [7:7] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF8: 1;                    /** \brief [8:8] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF9: 1;                    /** \brief [9:9] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF10: 1;                   /** \brief [10:10] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF11: 1;                   /** \brief [11:11] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF12: 1;                   /** \brief [12:12] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF13: 1;                   /** \brief [13:13] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF14: 1;                   /** \brief [14:14] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF15: 1;                   /** \brief [15:15] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF16: 1;                   /** \brief [16:16] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF17: 1;                   /** \brief [17:17] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF18: 1;                   /** \brief [18:18] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF19: 1;                   /** \brief [19:19] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF20: 1;                   /** \brief [20:20] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF21: 1;                   /** \brief [21:21] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF22: 1;                   /** \brief [22:22] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF23: 1;                   /** \brief [23:23] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF24: 1;                   /** \brief [24:24] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF25: 1;                   /** \brief [25:25] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF26: 1;                   /** \brief [26:26] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF27: 1;                   /** \brief [27:27] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF28: 1;                   /** \brief [28:28] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF29: 1;                   /** \brief [29:29] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF30: 1;                   /** \brief [30:30] Status flag for alarm n belonging to alarm group x. (rwh) */
    unsigned int SF31: 1;                   /** \brief [31:31] Status flag for alarm n belonging to alarm group x. (rwh) */
} Ifx_SMU_AG_Bits;

/** Alarm Global Configuration */
typedef struct
{
    unsigned int IGCS0: 3;                  /** \brief [2:0] Interrupt Generation Configuration Set 0 (rw) */
    unsigned int reserved_3: 1;
    unsigned int IGCS1: 3;                  /** \brief [6:4] Interrupt Generation Configuration Set 1 (rw) */
    unsigned int reserved_7: 1;
    unsigned int IGCS2: 3;                  /** \brief [10:8] Interrupt Generation Configuration Set 2 (rw) */
    unsigned int reserved_11: 5;
    unsigned int ICS: 3;                    /** \brief [18:16] Idle Configuration Set (rw) */
    unsigned int reserved_19: 5;
    unsigned int PES: 5;                    /** \brief [28:24] Port Emergency Stop (rw) */
    unsigned int reserved_29: 3;
} Ifx_SMU_AGC_Bits;

/** Command Register */
typedef struct
{
    unsigned int CF0: 1;                    /** \brief [0:0]  (rw) */
    unsigned int CF1: 1;                    /** \brief [1:1]  (rw) */
    unsigned int CF2: 1;                    /** \brief [2:2]  (rw) */
    unsigned int CF3: 1;                    /** \brief [3:3]  (rw) */
    unsigned int CF4: 1;                    /** \brief [4:4]  (rw) */
    unsigned int CF5: 1;                    /** \brief [5:5]  (rw) */
    unsigned int CF6: 1;                    /** \brief [6:6]  (rw) */
    unsigned int CF7: 1;                    /** \brief [7:7]  (rw) */
    unsigned int CF8: 1;                    /** \brief [8:8]  (rw) */
    unsigned int CF9: 1;                    /** \brief [9:9]  (rw) */
    unsigned int CF10: 1;                   /** \brief [10:10]  (rw) */
    unsigned int CF11: 1;                   /** \brief [11:11]  (rw) */
    unsigned int CF12: 1;                   /** \brief [12:12]  (rw) */
    unsigned int CF13: 1;                   /** \brief [13:13]  (rw) */
    unsigned int CF14: 1;                   /** \brief [14:14]  (rw) */
    unsigned int CF15: 1;                   /** \brief [15:15]  (rw) */
    unsigned int CF16: 1;                   /** \brief [16:16]  (rw) */
    unsigned int CF17: 1;                   /** \brief [17:17]  (rw) */
    unsigned int CF18: 1;                   /** \brief [18:18]  (rw) */
    unsigned int CF19: 1;                   /** \brief [19:19]  (rw) */
    unsigned int CF20: 1;                   /** \brief [20:20]  (rw) */
    unsigned int CF21: 1;                   /** \brief [21:21]  (rw) */
    unsigned int CF22: 1;                   /** \brief [22:22]  (rw) */
    unsigned int CF23: 1;                   /** \brief [23:23]  (rw) */
    unsigned int CF24: 1;                   /** \brief [24:24]  (rw) */
    unsigned int CF25: 1;                   /** \brief [25:25]  (rw) */
    unsigned int CF26: 1;                   /** \brief [26:26]  (rw) */
    unsigned int CF27: 1;                   /** \brief [27:27]  (rw) */
    unsigned int CF28: 1;                   /** \brief [28:28]  (rw) */
    unsigned int CF29: 1;                   /** \brief [29:29]  (rw) */
    unsigned int CF30: 1;                   /** \brief [30:30]  (rw) */
    unsigned int CF31: 1;                   /** \brief [31:31]  (rw) */
} Ifx_SMU_AGCF_Bits;

/** Command Register */
typedef struct
{
    unsigned int FE0: 1;                    /** \brief [0:0]  (rw) */
    unsigned int FE1: 1;                    /** \brief [1:1]  (rw) */
    unsigned int FE2: 1;                    /** \brief [2:2]  (rw) */
    unsigned int FE3: 1;                    /** \brief [3:3]  (rw) */
    unsigned int FE4: 1;                    /** \brief [4:4]  (rw) */
    unsigned int FE5: 1;                    /** \brief [5:5]  (rw) */
    unsigned int FE6: 1;                    /** \brief [6:6]  (rw) */
    unsigned int FE7: 1;                    /** \brief [7:7]  (rw) */
    unsigned int FE8: 1;                    /** \brief [8:8]  (rw) */
    unsigned int FE9: 1;                    /** \brief [9:9]  (rw) */
    unsigned int FE10: 1;                   /** \brief [10:10]  (rw) */
    unsigned int FE11: 1;                   /** \brief [11:11]  (rw) */
    unsigned int FE12: 1;                   /** \brief [12:12]  (rw) */
    unsigned int FE13: 1;                   /** \brief [13:13]  (rw) */
    unsigned int FE14: 1;                   /** \brief [14:14]  (rw) */
    unsigned int FE15: 1;                   /** \brief [15:15]  (rw) */
    unsigned int FE16: 1;                   /** \brief [16:16]  (rw) */
    unsigned int FE17: 1;                   /** \brief [17:17]  (rw) */
    unsigned int FE18: 1;                   /** \brief [18:18]  (rw) */
    unsigned int FE19: 1;                   /** \brief [19:19]  (rw) */
    unsigned int FE20: 1;                   /** \brief [20:20]  (rw) */
    unsigned int FE21: 1;                   /** \brief [21:21]  (rw) */
    unsigned int FE22: 1;                   /** \brief [22:22]  (rw) */
    unsigned int FE23: 1;                   /** \brief [23:23]  (rw) */
    unsigned int FE24: 1;                   /** \brief [24:24]  (rw) */
    unsigned int FE25: 1;                   /** \brief [25:25]  (rw) */
    unsigned int FE26: 1;                   /** \brief [26:26]  (rw) */
    unsigned int FE27: 1;                   /** \brief [27:27]  (rw) */
    unsigned int FE28: 1;                   /** \brief [28:28]  (rw) */
    unsigned int FE29: 1;                   /** \brief [29:29]  (rw) */
    unsigned int FE30: 1;                   /** \brief [30:30]  (rw) */
    unsigned int FE31: 1;                   /** \brief [31:31]  (rw) */
} Ifx_SMU_AGFSP_Bits;

/** Command Register */
typedef struct
{
    unsigned int CMD: 4;                    /** \brief [3:0] Implements the SMU Command Interface. (w) */
    unsigned int ARG: 4;                    /** \brief [7:4] Implements the SMU Command Interface. (w) */
    unsigned int reserved_8: 24;
} Ifx_SMU_CMD_Bits;

/** Debug Register */
typedef struct
{
    unsigned int SSM: 2;                    /** \brief [1:0] Running state of the SMU State Machine (rh) */
    unsigned int reserved_2: 30;
} Ifx_SMU_DBG_Bits;

/** Fault Signaling Protocol */
typedef struct
{
    unsigned int PRE1: 3;                   /** \brief [2:0] Prescaler1 (rw) */
    unsigned int PRE2: 2;                   /** \brief [4:3] Prescaler2 (rw) */
    unsigned int MODE: 2;                   /** \brief [6:5] Fault Signaling Protocol configuration (rw) */
    unsigned int PES: 1;                    /** \brief [7:7] Port Emergency Stop (PES) (rw) */
    unsigned int TFSP_LOW: 14;              /** \brief [21:8] Specifies the FSP fault state duration (r) */
    unsigned int TFSP_HIGH: 10;             /** \brief [31:22] Specifies the FSP fault state duration (rw) */
} Ifx_SMU_FSP_Bits;

/** Key Register */
typedef struct
{
    unsigned int CFGLCK: 8;                 /** \brief [7:0] Configuration Lock (rw) */
    unsigned int PERLCK: 8;                 /** \brief [15:8] Permanent Lock (rw) */
    unsigned int reserved_16: 16;
} Ifx_SMU_KEYS_Bits;

/** SMU Reset Register 0 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int RSTSTAT: 1;                /** \brief [1:1] Kernel Reset Status (rh) */
    unsigned int reserved_2: 30;
} Ifx_SMU_KRST0_Bits;

/** SMU Reset Register 1 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int reserved_1: 31;
} Ifx_SMU_KRST1_Bits;

/** SMU Reset Status Clear Register */
typedef struct
{
    unsigned int CLR: 1;                    /** \brief [0:0] Kernel Reset Status Clear (w) */
    unsigned int reserved_1: 31;
} Ifx_SMU_KRSTCLR_Bits;

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
} Ifx_SMU_OCS_Bits;

/** Port Control */
typedef struct
{
    unsigned int HWDIR: 1;                  /** \brief [0:0] Port Direction. (rw) */
    unsigned int HWEN: 1;                   /** \brief [1:1] Port Enable. (rw) */
    unsigned int reserved_2: 5;
    unsigned int PCS: 1;                    /** \brief [7:7] PAD Configuration Select (for TC27x only) (rw) */
    unsigned int reserved_8: 8;
    unsigned int PCFG: 16;                  /** \brief [31:16] PAD Configuration (for TC27x only) (rh) */
} Ifx_SMU_PCTL_Bits;

/** Register Monitor Control */
typedef struct
{
    unsigned int TE: 1;                     /** \brief [0:0] Test Enable. (rw) */
    unsigned int reserved_1: 31;
} Ifx_SMU_RMCTL_Bits;

/** Register Monitor Status */
typedef struct
{
    unsigned int STS0: 1;                   /** \brief [0:0] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS1: 1;                   /** \brief [1:1] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS2: 1;                   /** \brief [2:2] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS3: 1;                   /** \brief [3:3] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS4: 1;                   /** \brief [4:4] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS5: 1;                   /** \brief [5:5] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS6: 1;                   /** \brief [6:6] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS7: 1;                   /** \brief [7:7] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS8: 1;                   /** \brief [8:8] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS9: 1;                   /** \brief [9:9] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS10: 1;                  /** \brief [10:10] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS11: 1;                  /** \brief [11:11] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS12: 1;                  /** \brief [12:12] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS13: 1;                  /** \brief [13:13] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS14: 1;                  /** \brief [14:14] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS15: 1;                  /** \brief [15:15] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS16: 1;                  /** \brief [16:16] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS17: 1;                  /** \brief [17:17] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS18: 1;                  /** \brief [18:18] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS19: 1;                  /** \brief [19:19] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS20: 1;                  /** \brief [20:20] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS21: 1;                  /** \brief [21:21] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS22: 1;                  /** \brief [22:22] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS23: 1;                  /** \brief [23:23] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS24: 1;                  /** \brief [24:24] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS25: 1;                  /** \brief [25:25] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS26: 1;                  /** \brief [26:26] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS27: 1;                  /** \brief [27:27] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS28: 1;                  /** \brief [28:28] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS29: 1;                  /** \brief [29:29] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS30: 1;                  /** \brief [30:30] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
    unsigned int STS31: 1;                  /** \brief [31:31] Status flag related to the different instances of the register monitor safety mechanism. (rwh) */
} Ifx_SMU_RMSTS_Bits;

/** Status Register */
typedef struct
{
    unsigned int CMD: 4;                    /** \brief [3:0] Last command received (rwh) */
    unsigned int ARG: 4;                    /** \brief [7:4] Last command argument received (rwh) */
    unsigned int RES: 1;                    /** \brief [8:8] Result of last received command (rwh) */
    unsigned int ASCE: 1;                   /** \brief [9:9] Alarm Status Clear Enable (rwh) */
    unsigned int FSP: 2;                    /** \brief [11:10] Fault Signaling Protocol status (rwh) */
    unsigned int FSTS: 1;                   /** \brief [12:12] Fault State Timing Status (rwh) */
    unsigned int reserved_13: 19;
} Ifx_SMU_STS_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** SMU Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_ACCEN0_Bits B;
} Ifx_SMU_ACCEN0;

/** SMU Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_ACCEN1_Bits B;
} Ifx_SMU_ACCEN1;

/** Alarm Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_AD_Bits B;
} Ifx_SMU_AD;

/** Alarm Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_AG_Bits B;
} Ifx_SMU_AG;

/** Alarm Global Configuration */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_AGC_Bits B;
} Ifx_SMU_AGC;

/** Command Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_AGCF_Bits B;
} Ifx_SMU_AGCF;

/** Command Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_AGFSP_Bits B;
} Ifx_SMU_AGFSP;

/** Command Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_CMD_Bits B;
} Ifx_SMU_CMD;

/** Debug Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_DBG_Bits B;
} Ifx_SMU_DBG;

/** Fault Signaling Protocol */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_FSP_Bits B;
} Ifx_SMU_FSP;

/** Key Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_KEYS_Bits B;
} Ifx_SMU_KEYS;

/** SMU Reset Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_KRST0_Bits B;
} Ifx_SMU_KRST0;

/** SMU Reset Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_KRST1_Bits B;
} Ifx_SMU_KRST1;

/** SMU Reset Status Clear Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_KRSTCLR_Bits B;
} Ifx_SMU_KRSTCLR;

/** OCDS Control and Status */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_OCS_Bits B;
} Ifx_SMU_OCS;

/** Port Control */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_PCTL_Bits B;
} Ifx_SMU_PCTL;

/** Register Monitor Control */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_RMCTL_Bits B;
} Ifx_SMU_RMCTL;

/** Register Monitor Status */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_RMSTS_Bits B;
} Ifx_SMU_RMSTS;

/** Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SMU_STS_Bits B;
} Ifx_SMU_STS;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** SMU object */
typedef volatile struct
{
    Ifx_CLC4 CLC;                           /** \brief 0, Control Clock Register */
    unsigned char reserved_4[4];            /** \brief 4 */
    Ifx_ID1 ID;                             /** \brief 8, Module Identification Register */
    unsigned char reserved_C[20];           /** \brief C */
    Ifx_SMU_CMD CMD;                        /** \brief 20, Command Register */
    Ifx_SMU_STS STS;                        /** \brief 24, Status Register */
    Ifx_SMU_FSP FSP;                        /** \brief 28, Fault Signaling Protocol */
    Ifx_SMU_AGC AGC;                        /** \brief 2C, Alarm Global Configuration */
    Ifx_SMU_KEYS KEYS;                      /** \brief 30, Key Register */
    Ifx_SMU_DBG DBG;                        /** \brief 34, Debug Register */
    unsigned char reserved_38[8];           /** \brief 38 */
    Ifx_SMU_AGFSP AGFSP[6];                 /** \brief 40, Command Register */
    unsigned char reserved_58[8];           /** \brief 58 */
    Ifx_SMU_AGCF AGCF[6][3];                /** \brief 60, Command Register */
    Ifx_SMU_AG AG[6];                       /** \brief A8, Alarm Status Register */
    Ifx_SMU_AD AD[6];                       /** \brief C0, Alarm Status Register */
    Ifx_SMU_RMCTL RMCTL;                    /** \brief D8, Register Monitor Control */
    Ifx_SMU_RMSTS RMSTS;                    /** \brief DC, Register Monitor Status */
    Ifx_SMU_PCTL PCTL;                      /** \brief E0, Port Control */
    unsigned char reserved_E4[4];           /** \brief E4 */
    Ifx_SMU_OCS OCS;                        /** \brief E8, OCDS Control and Status */
    Ifx_SMU_KRSTCLR KRSTCLR;                /** \brief EC, SMU Reset Status Clear Register */
    Ifx_SMU_KRST1 KRST1;                    /** \brief F0, SMU Reset Register 1 */
    Ifx_SMU_KRST0 KRST0;                    /** \brief F4, SMU Reset Register 0 */
    Ifx_SMU_ACCEN1 ACCEN1;                  /** \brief F8, SMU Access Enable Register 1 */
    Ifx_SMU_ACCEN0 ACCEN0;                  /** \brief FC, SMU Access Enable Register 0 */
    unsigned char reserved_100[1792];       /** \brief 100 */
} Ifx_SMU;
/******************************************************************************/
#endif /* IFXSMU_REGDEF_H */

