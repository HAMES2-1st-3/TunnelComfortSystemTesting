/**
 * \file IfxVadc_regdef.h
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
#ifndef IFXVADC_REGDEF_H
#define IFXVADC_REGDEF_H
/******************************************************************************/
#include "Global/IfxGlobal_regdef.h"

/******************************************************************************/
/*                           Struct (0 - Bitfields)                           */
/******************************************************************************/

/** Access Enable Register 0 */
typedef struct
{
    unsigned int EN0: 1;                    /** \brief [0:0] Access Enable for Master TAG ID x (rw) */
    unsigned int EN1: 1;                    /** \brief [1:1] Access Enable for Master TAG ID x (rw) */
    unsigned int EN2: 1;                    /** \brief [2:2] Access Enable for Master TAG ID x (rw) */
    unsigned int EN3: 1;                    /** \brief [3:3] Access Enable for Master TAG ID x (rw) */
    unsigned int EN4: 1;                    /** \brief [4:4] Access Enable for Master TAG ID x (rw) */
    unsigned int EN5: 1;                    /** \brief [5:5] Access Enable for Master TAG ID x (rw) */
    unsigned int EN6: 1;                    /** \brief [6:6] Access Enable for Master TAG ID x (rw) */
    unsigned int EN7: 1;                    /** \brief [7:7] Access Enable for Master TAG ID x (rw) */
    unsigned int EN8: 1;                    /** \brief [8:8] Access Enable for Master TAG ID x (rw) */
    unsigned int EN9: 1;                    /** \brief [9:9] Access Enable for Master TAG ID x (rw) */
    unsigned int EN10: 1;                   /** \brief [10:10] Access Enable for Master TAG ID x (rw) */
    unsigned int EN11: 1;                   /** \brief [11:11] Access Enable for Master TAG ID x (rw) */
    unsigned int EN12: 1;                   /** \brief [12:12] Access Enable for Master TAG ID x (rw) */
    unsigned int EN13: 1;                   /** \brief [13:13] Access Enable for Master TAG ID x (rw) */
    unsigned int EN14: 1;                   /** \brief [14:14] Access Enable for Master TAG ID x (rw) */
    unsigned int EN15: 1;                   /** \brief [15:15] Access Enable for Master TAG ID x (rw) */
    unsigned int EN16: 1;                   /** \brief [16:16] Access Enable for Master TAG ID x (rw) */
    unsigned int EN17: 1;                   /** \brief [17:17] Access Enable for Master TAG ID x (rw) */
    unsigned int EN18: 1;                   /** \brief [18:18] Access Enable for Master TAG ID x (rw) */
    unsigned int EN19: 1;                   /** \brief [19:19] Access Enable for Master TAG ID x (rw) */
    unsigned int EN20: 1;                   /** \brief [20:20] Access Enable for Master TAG ID x (rw) */
    unsigned int EN21: 1;                   /** \brief [21:21] Access Enable for Master TAG ID x (rw) */
    unsigned int EN22: 1;                   /** \brief [22:22] Access Enable for Master TAG ID x (rw) */
    unsigned int EN23: 1;                   /** \brief [23:23] Access Enable for Master TAG ID x (rw) */
    unsigned int EN24: 1;                   /** \brief [24:24] Access Enable for Master TAG ID x (rw) */
    unsigned int EN25: 1;                   /** \brief [25:25] Access Enable for Master TAG ID x (rw) */
    unsigned int EN26: 1;                   /** \brief [26:26] Access Enable for Master TAG ID x (rw) */
    unsigned int EN27: 1;                   /** \brief [27:27] Access Enable for Master TAG ID x (rw) */
    unsigned int EN28: 1;                   /** \brief [28:28] Access Enable for Master TAG ID x (rw) */
    unsigned int EN29: 1;                   /** \brief [29:29] Access Enable for Master TAG ID x (rw) */
    unsigned int EN30: 1;                   /** \brief [30:30] Access Enable for Master TAG ID x (rw) */
    unsigned int EN31: 1;                   /** \brief [31:31] Access Enable for Master TAG ID x (rw) */
} Ifx_VADC_ACCEN0_Bits;

/** Access Protection Register */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_VADC_ACCPROT_Bits;

/** Background Request Source Control Register */
typedef struct
{
    unsigned int reserved_0: 8;
    unsigned int XTSEL: 4;                  /** \brief [11:8] External Trigger Input Selection (rw) */
    unsigned int XTLVL: 1;                  /** \brief [12:12] External Trigger Level (r) */
    unsigned int XTMODE: 2;                 /** \brief [14:13] Trigger Operating Mode (rw) */
    unsigned int XTWC: 1;                   /** \brief [15:15] Write Control for Trigger Configuration (w) */
    unsigned int GTSEL: 4;                  /** \brief [19:16] Gate Input Selection (rw) */
    unsigned int GTLVL: 1;                  /** \brief [20:20] Gate Input Level (r) */
    unsigned int reserved_21: 2;
    unsigned int GTWC: 1;                   /** \brief [23:23] Write Control for Gate Configuration (w) */
    unsigned int reserved_24: 8;
} Ifx_VADC_BRSCTRL_Bits;

/** Background Request Source Mode Register */
typedef struct
{
    unsigned int ENGT: 2;                   /** \brief [1:0] Enable Gate (rw) */
    unsigned int ENTR: 1;                   /** \brief [2:2] Enable External Trigger (rw) */
    unsigned int ENSI: 1;                   /** \brief [3:3] Enable Source Interrupt (rw) */
    unsigned int SCAN: 1;                   /** \brief [4:4] Autoscan Enable (rw) */
    unsigned int LDM: 1;                    /** \brief [5:5] Autoscan Source Load Event Mode (rw) */
    unsigned int reserved_6: 1;
    unsigned int REQGT: 1;                  /** \brief [7:7] Request Gate Level (rh) */
    unsigned int CLRPND: 1;                 /** \brief [8:8] Clear Pending Bits (w) */
    unsigned int LDEV: 1;                   /** \brief [9:9] Generate Load Event (w) */
    unsigned int reserved_10: 6;
    unsigned int RPTDIS: 1;                 /** \brief [16:16] Repeat Disable (rw) */
    unsigned int reserved_17: 15;
} Ifx_VADC_BRSMR_Bits;

/** Background Request Source Pending Register, Group */
typedef struct
{
    unsigned int CHPNDGy: 32;               /** \brief [31:0] Channels Pending Group x (rw) */
} Ifx_VADC_BRSPND_Bits;

/** Background Request Source Channel Select Register, Group */
typedef struct
{
    unsigned int CHSELGy: 32;               /** \brief [31:0] Channel Selection Group x (rw) */
} Ifx_VADC_BRSSEL_Bits;

/** Group, Channel Control Register */
typedef struct
{
    unsigned int ICLSEL: 2;                 /** \brief [1:0] Input Class Select (rw) */
    unsigned int reserved_2: 2;
    unsigned int BNDSELL: 2;                /** \brief [5:4] Lower Boundary Select (rw) */
    unsigned int BNDSELU: 2;                /** \brief [7:6] Upper Boundary Select (rw) */
    unsigned int CHEVMODE: 2;               /** \brief [9:8] Channel Event Mode (rw) */
    unsigned int SYNC: 1;                   /** \brief [10:10] Synchronization Request (rw) */
    unsigned int REFSEL: 1;                 /** \brief [11:11] Refence Input Selection (rw) */
    unsigned int reserved_12: 4;
    unsigned int RESREG: 4;                 /** \brief [19:16] Result Register (rw) */
    unsigned int RESTGT: 1;                 /** \brief [20:20] Result Target (rw) */
    unsigned int RESPOS: 1;                 /** \brief [21:21] Result Position (rw) */
    unsigned int reserved_22: 6;
    unsigned int BWDCH: 2;                  /** \brief [29:28] Broken Wire Detection Channel (rw) */
    unsigned int BWDEN: 1;                  /** \brief [30:30] Broken Wire Detection Enable (rw) */
    unsigned int reserved_31: 1;
} Ifx_VADC_CHCTR_Bits;

/** External Multiplexer Select Register */
typedef struct
{
    unsigned int EMUXGRP0: 4;               /** \brief [3:0] External Multiplexer Group for Interface x (rw) */
    unsigned int EMUXGRP1: 4;               /** \brief [7:4] External Multiplexer Group for Interface x (rw) */
    unsigned int reserved_8: 24;
} Ifx_VADC_EMUXSEL_Bits;

/** Alias Register, Group */
typedef struct
{
    unsigned int ALIAS0: 5;                 /** \brief [4:0] Alias Value for CH0 Conversion Requests (rw) */
    unsigned int reserved_5: 3;
    unsigned int ALIAS1: 5;                 /** \brief [12:8] Alias Value for CH1 Conversion Requests (rw) */
    unsigned int reserved_13: 19;
} Ifx_VADC_G14_ALIAS_Bits;

/** Arbitration Configuration Register, Group */
typedef struct
{
    unsigned int ANONC: 2;                  /** \brief [1:0] Analog Converter Control (rw) */
    unsigned int reserved_2: 2;
    unsigned int ARBRND: 2;                 /** \brief [5:4] Arbitration Round Length (w) */
    unsigned int reserved_6: 1;
    unsigned int ARBM: 1;                   /** \brief [7:7] Arbitration Mode (rw) */
    unsigned int reserved_8: 8;
    unsigned int ANONS: 2;                  /** \brief [17:16] Analog Converter Control Status (rh) */
    unsigned int reserved_18: 10;
    unsigned int CAL: 1;                    /** \brief [28:28] Start-Up Calibration Active Indication (rh) */
    unsigned int reserved_29: 1;
    unsigned int BUSY: 1;                   /** \brief [30:30] Converter Busy Flag (rh) */
    unsigned int SAMPLE: 1;                 /** \brief [31:31] Sample Phase Flag (rh) */
} Ifx_VADC_G14_ARBCFG_Bits;

/** Arbitration Priority Register, Group */
typedef struct
{
    unsigned int PRIO0: 2;                  /** \brief [1:0] Priority of Request Source x (rw) */
    unsigned int reserved_2: 1;
    unsigned int CSM0: 1;                   /** \brief [3:3] Conversion Start Mode of Request Source x (rw) */
    unsigned int PRIO1: 2;                  /** \brief [5:4] Priority of Request Source x (rw) */
    unsigned int reserved_6: 1;
    unsigned int CSM1: 1;                   /** \brief [7:7] Conversion Start Mode of Request Source x (rw) */
    unsigned int PRIO2: 2;                  /** \brief [9:8] Priority of Request Source x (rw) */
    unsigned int reserved_10: 1;
    unsigned int CSM2: 1;                   /** \brief [11:11] Conversion Start Mode of Request Source x (rw) */
    unsigned int reserved_12: 12;
    unsigned int ASEN0: 1;                  /** \brief [24:24] Arbitration Slot y Enable (rw) */
    unsigned int ASEN1: 1;                  /** \brief [25:25] Arbitration Slot y Enable (rw) */
    unsigned int ASEN2: 1;                  /** \brief [26:26] Arbitration Slot y Enable (rw) */
    unsigned int reserved_27: 5;
} Ifx_VADC_G14_ARBPR_Bits;

/** Autoscan Source Control Register, Group */
typedef struct
{
    unsigned int reserved_0: 8;
    unsigned int XTSEL: 4;                  /** \brief [11:8] External Trigger Input Selection (rw) */
    unsigned int XTLVL: 1;                  /** \brief [12:12] External Trigger Level (r) */
    unsigned int XTMODE: 2;                 /** \brief [14:13] Trigger Operating Mode (rw) */
    unsigned int XTWC: 1;                   /** \brief [15:15] Write Control for Trigger Configuration (w) */
    unsigned int GTSEL: 4;                  /** \brief [19:16] Gate Input Selection (rw) */
    unsigned int GTLVL: 1;                  /** \brief [20:20] Gate Input Level (r) */
    unsigned int reserved_21: 2;
    unsigned int GTWC: 1;                   /** \brief [23:23] Write Control for Gate Configuration (w) */
    unsigned int reserved_24: 4;
    unsigned int TMEN: 1;                   /** \brief [28:28] Timer Mode Enable (rw) */
    unsigned int reserved_29: 2;
    unsigned int TMWC: 1;                   /** \brief [31:31] Write Control for Timer Mode (w) */
} Ifx_VADC_G14_ASCTRL_Bits;

/** Autoscan Source Mode Register, Group */
typedef struct
{
    unsigned int ENGT: 2;                   /** \brief [1:0] Enable Gate (rw) */
    unsigned int ENTR: 1;                   /** \brief [2:2] Enable External Trigger (rw) */
    unsigned int ENSI: 1;                   /** \brief [3:3] Enable Source Interrupt (rw) */
    unsigned int SCAN: 1;                   /** \brief [4:4] Autoscan Enable (rw) */
    unsigned int LDM: 1;                    /** \brief [5:5] Autoscan Source Load Event Mode (rw) */
    unsigned int reserved_6: 1;
    unsigned int REQGT: 1;                  /** \brief [7:7] Request Gate Level (rh) */
    unsigned int CLRPND: 1;                 /** \brief [8:8] Clear Pending Bits (w) */
    unsigned int LDEV: 1;                   /** \brief [9:9] Generate Load Event (w) */
    unsigned int reserved_10: 6;
    unsigned int RPTDIS: 1;                 /** \brief [16:16] Repeat Disable (rw) */
    unsigned int reserved_17: 15;
} Ifx_VADC_G14_ASMR_Bits;

/** Autoscan Source Pending Register, Group */
typedef struct
{
    unsigned int CHPND: 32;                 /** \brief [31:0] Channels Pending (rw) */
} Ifx_VADC_G14_ASPND_Bits;

/** Autoscan Source Channel Select Register, Group */
typedef struct
{
    unsigned int CHSEL: 32;                 /** \brief [31:0] Channel Selection (rw) */
} Ifx_VADC_G14_ASSEL_Bits;

/** Boundary Flag Register, Group */
typedef struct
{
    unsigned int BFL0: 1;                   /** \brief [0:0] Boundary Flag for Channel y (rwh) */
    unsigned int BFL1: 1;                   /** \brief [1:1] Boundary Flag for Channel y (rwh) */
    unsigned int BFL2: 1;                   /** \brief [2:2] Boundary Flag for Channel y (rwh) */
    unsigned int BFL3: 1;                   /** \brief [3:3] Boundary Flag for Channel y (rwh) */
    unsigned int reserved_4: 12;
    unsigned int BFE0: 1;                   /** \brief [16:16] Enable Bit for Boundary Flag y (rw) */
    unsigned int BFE1: 1;                   /** \brief [17:17] Enable Bit for Boundary Flag y (rw) */
    unsigned int BFE2: 1;                   /** \brief [18:18] Enable Bit for Boundary Flag y (rw) */
    unsigned int BFE3: 1;                   /** \brief [19:19] Enable Bit for Boundary Flag y (rw) */
    unsigned int reserved_20: 12;
} Ifx_VADC_G14_BFL_Bits;

/** Boundary Select Register, Group */
typedef struct
{
    unsigned int BOUNDARY0: 12;             /** \brief [11:0] Boundary Value x for Limit Checking (rw) */
    unsigned int reserved_12: 4;
    unsigned int BOUNDARY1: 12;             /** \brief [27:16] Boundary Value x for Limit Checking (rw) */
    unsigned int reserved_28: 4;
} Ifx_VADC_G14_BOUND_Bits;

/** Channel Event Flag Clear Register, Group */
typedef struct
{
    unsigned int CEV0: 1;                   /** \brief [0:0] Clear Channel Event for Channel y (w) */
    unsigned int CEV1: 1;                   /** \brief [1:1] Clear Channel Event for Channel y (w) */
    unsigned int CEV2: 1;                   /** \brief [2:2] Clear Channel Event for Channel y (w) */
    unsigned int CEV3: 1;                   /** \brief [3:3] Clear Channel Event for Channel y (w) */
    unsigned int CEV4: 1;                   /** \brief [4:4] Clear Channel Event for Channel y (w) */
    unsigned int CEV5: 1;                   /** \brief [5:5] Clear Channel Event for Channel y (w) */
    unsigned int CEV6: 1;                   /** \brief [6:6] Clear Channel Event for Channel y (w) */
    unsigned int CEV7: 1;                   /** \brief [7:7] Clear Channel Event for Channel y (w) */
    unsigned int reserved_8: 24;
} Ifx_VADC_G14_CEFCLR_Bits;

/** Channel Event Flag Register, Group */
typedef struct
{
    unsigned int CEV0: 1;                   /** \brief [0:0] Channel Event for Channel y (rwh) */
    unsigned int CEV1: 1;                   /** \brief [1:1] Channel Event for Channel y (rwh) */
    unsigned int CEV2: 1;                   /** \brief [2:2] Channel Event for Channel y (rwh) */
    unsigned int CEV3: 1;                   /** \brief [3:3] Channel Event for Channel y (rwh) */
    unsigned int CEV4: 1;                   /** \brief [4:4] Channel Event for Channel y (rwh) */
    unsigned int CEV5: 1;                   /** \brief [5:5] Channel Event for Channel y (rwh) */
    unsigned int CEV6: 1;                   /** \brief [6:6] Channel Event for Channel y (rwh) */
    unsigned int CEV7: 1;                   /** \brief [7:7] Channel Event for Channel y (rwh) */
    unsigned int reserved_8: 24;
} Ifx_VADC_G14_CEFLAG_Bits;

/** Channel Event Node Pointer Register 0, Group */
typedef struct
{
    unsigned int CEV0NP: 4;                 /** \brief [3:0] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV1NP: 4;                 /** \brief [7:4] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV2NP: 4;                 /** \brief [11:8] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV3NP: 4;                 /** \brief [15:12] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV4NP: 4;                 /** \brief [19:16] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV5NP: 4;                 /** \brief [23:20] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV6NP: 4;                 /** \brief [27:24] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV7NP: 4;                 /** \brief [31:28] Service Request Node Pointer Channel Event i (rw) */
} Ifx_VADC_G14_CEVNP0_Bits;

/** Channel Event Node Pointer Register 1, Group */
typedef struct
{
    unsigned int CEV8NP: 4;                 /** \brief [3:0] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV9NP: 4;                 /** \brief [7:4] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV10NP: 4;                /** \brief [11:8] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV11NP: 4;                /** \brief [15:12] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV12NP: 4;                /** \brief [19:16] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV13NP: 4;                /** \brief [23:20] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV14NP: 4;                /** \brief [27:24] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV15NP: 4;                /** \brief [31:28] Service Request Node Pointer Channel Event i (rw) */
} Ifx_VADC_G14_CEVNP1_Bits;

/** Channel Event Node Pointer Register 2, Group */
typedef struct
{
    unsigned int CEV16NP: 4;                /** \brief [3:0] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV17NP: 4;                /** \brief [7:4] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV18NP: 4;                /** \brief [11:8] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV19NP: 4;                /** \brief [15:12] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV20NP: 4;                /** \brief [19:16] Service Request Node Pointer Channel Event i (rw) */
    unsigned int reserved_20: 12;
} Ifx_VADC_G14_CEVNP2_Bits;

/** Channel Assignment Register, Group */
typedef struct
{
    unsigned int ASSCH0: 1;                 /** \brief [0:0] Assignment for Channel y (rw) */
    unsigned int ASSCH1: 1;                 /** \brief [1:1] Assignment for Channel y (rw) */
    unsigned int ASSCH2: 1;                 /** \brief [2:2] Assignment for Channel y (rw) */
    unsigned int ASSCH3: 1;                 /** \brief [3:3] Assignment for Channel y (rw) */
    unsigned int ASSCH4: 1;                 /** \brief [4:4] Assignment for Channel y (rw) */
    unsigned int ASSCH5: 1;                 /** \brief [5:5] Assignment for Channel y (rw) */
    unsigned int ASSCH6: 1;                 /** \brief [6:6] Assignment for Channel y (rw) */
    unsigned int ASSCH7: 1;                 /** \brief [7:7] Assignment for Channel y (rw) */
    unsigned int ASSCH8: 1;                 /** \brief [8:8] Assignment for Channel y (rw) */
    unsigned int ASSCH9: 1;                 /** \brief [9:9] Assignment for Channel y (rw) */
    unsigned int ASSCH10: 1;                /** \brief [10:10] Assignment for Channel y (rw) */
    unsigned int ASSCH11: 1;                /** \brief [11:11] Assignment for Channel y (rw) */
    unsigned int ASSCH12: 1;                /** \brief [12:12] Assignment for Channel y (rw) */
    unsigned int ASSCH13: 1;                /** \brief [13:13] Assignment for Channel y (rw) */
    unsigned int ASSCH14: 1;                /** \brief [14:14] Assignment for Channel y (rw) */
    unsigned int ASSCH15: 1;                /** \brief [15:15] Assignment for Channel y (rw) */
    unsigned int ASSCH16: 1;                /** \brief [16:16] Assignment for Channel y (rw) */
    unsigned int ASSCH17: 1;                /** \brief [17:17] Assignment for Channel y (rw) */
    unsigned int ASSCH18: 1;                /** \brief [18:18] Assignment for Channel y (rw) */
    unsigned int ASSCH19: 1;                /** \brief [19:19] Assignment for Channel y (rw) */
    unsigned int ASSCH20: 1;                /** \brief [20:20] Assignment for Channel y (rw) */
    unsigned int ASSCH21: 1;                /** \brief [21:21] Assignment for Channel y (rw) */
    unsigned int ASSCH22: 1;                /** \brief [22:22] Assignment for Channel y (rw) */
    unsigned int ASSCH23: 1;                /** \brief [23:23] Assignment for Channel y (rw) */
    unsigned int ASSCH24: 1;                /** \brief [24:24] Assignment for Channel y (rw) */
    unsigned int ASSCH25: 1;                /** \brief [25:25] Assignment for Channel y (rw) */
    unsigned int ASSCH26: 1;                /** \brief [26:26] Assignment for Channel y (rw) */
    unsigned int ASSCH27: 1;                /** \brief [27:27] Assignment for Channel y (rw) */
    unsigned int ASSCH28: 1;                /** \brief [28:28] Assignment for Channel y (rw) */
    unsigned int ASSCH29: 1;                /** \brief [29:29] Assignment for Channel y (rw) */
    unsigned int ASSCH30: 1;                /** \brief [30:30] Assignment for Channel y (rw) */
    unsigned int ASSCH31: 1;                /** \brief [31:31] Assignment for Channel y (rw) */
} Ifx_VADC_G14_CHASS_Bits;

/** External Multiplexer Control Register, Group */
typedef struct
{
    unsigned int EMUXSET: 3;                /** \brief [2:0] External Multiplexer Start Selection (rw) */
    unsigned int reserved_3: 5;
    unsigned int EMUXACT: 3;                /** \brief [10:8] External Multiplexer Actual Selection (rh) */
    unsigned int reserved_11: 5;
    unsigned int EMUXCH: 5;                 /** \brief [20:16] External Multiplexer Channel (rw) */
    unsigned int reserved_21: 5;
    unsigned int EMUXMODE: 2;               /** \brief [27:26] External Multiplexer Mode (rw) */
    unsigned int EMXCOD: 1;                 /** \brief [28:28] External Multiplexer Coding Scheme (rw) */
    unsigned int EMXST: 1;                  /** \brief [29:29] External Multiplexer Sample Time Control (rw) */
    unsigned int reserved_30: 1;
    unsigned int EMXWC: 1;                  /** \brief [31:31] Write Control for EMUX Configuration (w) */
} Ifx_VADC_G14_EMUXCTR_Bits;

/** Queue 0 Register 0, Group */
typedef struct
{
    unsigned int REQCHNR: 5;                /** \brief [4:0] Request Channel Number (rh) */
    unsigned int RF: 1;                     /** \brief [5:5] Refill (rh) */
    unsigned int ENSI: 1;                   /** \brief [6:6] Enable Source Interrupt (rh) */
    unsigned int EXTR: 1;                   /** \brief [7:7] External Trigger (rh) */
    unsigned int V: 1;                      /** \brief [8:8] Request Channel Number Valid (rh) */
    unsigned int reserved_9: 23;
} Ifx_VADC_G14_Q0R0_Bits;

/** Queue 0 Source Control Register, Group */
typedef struct
{
    unsigned int reserved_0: 8;
    unsigned int XTSEL: 4;                  /** \brief [11:8] External Trigger Input Selection (rw) */
    unsigned int XTLVL: 1;                  /** \brief [12:12] External Trigger Level (r) */
    unsigned int XTMODE: 2;                 /** \brief [14:13] Trigger Operating Mode (rw) */
    unsigned int XTWC: 1;                   /** \brief [15:15] Write Control for Trigger Configuration (w) */
    unsigned int GTSEL: 4;                  /** \brief [19:16] Gate Input Selection (rw) */
    unsigned int GTLVL: 1;                  /** \brief [20:20] Gate Input Level (r) */
    unsigned int reserved_21: 2;
    unsigned int GTWC: 1;                   /** \brief [23:23] Write Control for Gate Configuration (w) */
    unsigned int reserved_24: 4;
    unsigned int TMEN: 1;                   /** \brief [28:28] Timer Mode Enable (rw) */
    unsigned int reserved_29: 2;
    unsigned int TMWC: 1;                   /** \brief [31:31] Write Control for Timer Mode (w) */
} Ifx_VADC_G14_QCTRL0_Bits;

/** Queue 0 Input Register, Group */
typedef struct
{
    unsigned int REQCHNR: 5;                /** \brief [4:0] Request Channel Number (w) */
    unsigned int RF: 1;                     /** \brief [5:5] Refill (w) */
    unsigned int ENSI: 1;                   /** \brief [6:6] Enable Source Interrupt (w) */
    unsigned int EXTR: 1;                   /** \brief [7:7] External Trigger (w) */
    unsigned int reserved_8: 24;
} Ifx_VADC_G14_QINR0_Bits;

/** Queue 0 Mode Register, Group */
typedef struct
{
    unsigned int ENGT: 2;                   /** \brief [1:0] Enable Gate (rw) */
    unsigned int ENTR: 1;                   /** \brief [2:2] Enable External Trigger (rw) */
    unsigned int reserved_3: 5;
    unsigned int CLRV: 1;                   /** \brief [8:8] Clear Valid Bit (w) */
    unsigned int TREV: 1;                   /** \brief [9:9] Trigger Event (w) */
    unsigned int FLUSH: 1;                  /** \brief [10:10] Flush Queue (w) */
    unsigned int CEV: 1;                    /** \brief [11:11] Clear Event Flag (w) */
    unsigned int reserved_12: 4;
    unsigned int RPTDIS: 1;                 /** \brief [16:16] Repeat Disable (rw) */
    unsigned int reserved_17: 15;
} Ifx_VADC_G14_QMR0_Bits;

/** Queue 0 Status Register, Group */
typedef struct
{
    unsigned int FILL: 4;                   /** \brief [3:0] Filling Level for Queue 2 (rh) */
    unsigned int reserved_4: 1;
    unsigned int EMPTY: 1;                  /** \brief [5:5] Queue Empty (rh) */
    unsigned int reserved_6: 1;
    unsigned int REQGT: 1;                  /** \brief [7:7] Request Gate Level (rh) */
    unsigned int EV: 1;                     /** \brief [8:8] Event Detected (rh) */
    unsigned int reserved_9: 23;
} Ifx_VADC_G14_QSR0_Bits;

/** Result Event Flag Clear Register, Group */
typedef struct
{
    unsigned int REV0: 1;                   /** \brief [0:0] Clear Result Event for Result Register y (w) */
    unsigned int REV1: 1;                   /** \brief [1:1] Clear Result Event for Result Register y (w) */
    unsigned int REV2: 1;                   /** \brief [2:2] Clear Result Event for Result Register y (w) */
    unsigned int REV3: 1;                   /** \brief [3:3] Clear Result Event for Result Register y (w) */
    unsigned int REV4: 1;                   /** \brief [4:4] Clear Result Event for Result Register y (w) */
    unsigned int REV5: 1;                   /** \brief [5:5] Clear Result Event for Result Register y (w) */
    unsigned int REV6: 1;                   /** \brief [6:6] Clear Result Event for Result Register y (w) */
    unsigned int REV7: 1;                   /** \brief [7:7] Clear Result Event for Result Register y (w) */
    unsigned int REV8: 1;                   /** \brief [8:8] Clear Result Event for Result Register y (w) */
    unsigned int REV9: 1;                   /** \brief [9:9] Clear Result Event for Result Register y (w) */
    unsigned int REV10: 1;                  /** \brief [10:10] Clear Result Event for Result Register y (w) */
    unsigned int REV11: 1;                  /** \brief [11:11] Clear Result Event for Result Register y (w) */
    unsigned int REV12: 1;                  /** \brief [12:12] Clear Result Event for Result Register y (w) */
    unsigned int REV13: 1;                  /** \brief [13:13] Clear Result Event for Result Register y (w) */
    unsigned int REV14: 1;                  /** \brief [14:14] Clear Result Event for Result Register y (w) */
    unsigned int REV15: 1;                  /** \brief [15:15] Clear Result Event for Result Register y (w) */
    unsigned int reserved_16: 16;
} Ifx_VADC_G14_REFCLR_Bits;

/** Result Event Flag Register, Group */
typedef struct
{
    unsigned int REV0: 1;                   /** \brief [0:0] Result Event for Result Register y (rwh) */
    unsigned int REV1: 1;                   /** \brief [1:1] Result Event for Result Register y (rwh) */
    unsigned int REV2: 1;                   /** \brief [2:2] Result Event for Result Register y (rwh) */
    unsigned int REV3: 1;                   /** \brief [3:3] Result Event for Result Register y (rwh) */
    unsigned int REV4: 1;                   /** \brief [4:4] Result Event for Result Register y (rwh) */
    unsigned int REV5: 1;                   /** \brief [5:5] Result Event for Result Register y (rwh) */
    unsigned int REV6: 1;                   /** \brief [6:6] Result Event for Result Register y (rwh) */
    unsigned int REV7: 1;                   /** \brief [7:7] Result Event for Result Register y (rwh) */
    unsigned int REV8: 1;                   /** \brief [8:8] Result Event for Result Register y (rwh) */
    unsigned int REV9: 1;                   /** \brief [9:9] Result Event for Result Register y (rwh) */
    unsigned int REV10: 1;                  /** \brief [10:10] Result Event for Result Register y (rwh) */
    unsigned int REV11: 1;                  /** \brief [11:11] Result Event for Result Register y (rwh) */
    unsigned int REV12: 1;                  /** \brief [12:12] Result Event for Result Register y (rwh) */
    unsigned int REV13: 1;                  /** \brief [13:13] Result Event for Result Register y (rwh) */
    unsigned int REV14: 1;                  /** \brief [14:14] Result Event for Result Register y (rwh) */
    unsigned int REV15: 1;                  /** \brief [15:15] Result Event for Result Register y (rwh) */
    unsigned int reserved_16: 16;
} Ifx_VADC_G14_REFLAG_Bits;

/** Result Event Node Pointer Register 0, Group */
typedef struct
{
    unsigned int REV0NP: 4;                 /** \brief [3:0] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV1NP: 4;                 /** \brief [7:4] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV2NP: 4;                 /** \brief [11:8] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV3NP: 4;                 /** \brief [15:12] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV4NP: 4;                 /** \brief [19:16] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV5NP: 4;                 /** \brief [23:20] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV6NP: 4;                 /** \brief [27:24] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV7NP: 4;                 /** \brief [31:28] Service Request Node Pointer Result Event i (rw) */
} Ifx_VADC_G14_REVNP0_Bits;

/** Result Event Node Pointer Register 1, Group */
typedef struct
{
    unsigned int REV8NP: 4;                 /** \brief [3:0] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV9NP: 4;                 /** \brief [7:4] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV10NP: 4;                /** \brief [11:8] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV11NP: 4;                /** \brief [15:12] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV12NP: 4;                /** \brief [19:16] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV13NP: 4;                /** \brief [23:20] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV14NP: 4;                /** \brief [27:24] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV15NP: 4;                /** \brief [31:28] Service Request Node Pointer Result Event i (rw) */
} Ifx_VADC_G14_REVNP1_Bits;

/** Source Event Flag Clear Register, Group */
typedef struct
{
    unsigned int SEV0: 1;                   /** \brief [0:0] Clear Source Event 0/1/2 (w) */
    unsigned int SEV1: 1;                   /** \brief [1:1] Clear Source Event 0/1/2 (w) */
    unsigned int reserved_2: 30;
} Ifx_VADC_G14_SEFCLR_Bits;

/** Source Event Flag Register, Group */
typedef struct
{
    unsigned int SEV0: 1;                   /** \brief [0:0] Source Event 0/1/2Source event 2 indicates conversions requested by the background request source. (rwh) */
    unsigned int SEV1: 1;                   /** \brief [1:1] Source Event 0/1/2Source event 2 indicates conversions requested by the background request source. (rwh) */
    unsigned int reserved_2: 30;
} Ifx_VADC_G14_SEFLAG_Bits;

/** Source Event Node Pointer Register, Group */
typedef struct
{
    unsigned int SEV0NP: 4;                 /** \brief [3:0] Service Request Node Pointer Source Event i (rw) */
    unsigned int SEV1NP: 4;                 /** \brief [7:4] Service Request Node Pointer Source Event i (rw) */
    unsigned int reserved_8: 24;
} Ifx_VADC_G14_SEVNP_Bits;

/** Service Request Software Activation Trigger, Group */
typedef struct
{
    unsigned int AGSR0: 1;                  /** \brief [0:0] Activate Group Service Request Node y (w) */
    unsigned int AGSR1: 1;                  /** \brief [1:1] Activate Group Service Request Node y (w) */
    unsigned int AGSR2: 1;                  /** \brief [2:2] Activate Group Service Request Node y (w) */
    unsigned int AGSR3: 1;                  /** \brief [3:3] Activate Group Service Request Node y (w) */
    unsigned int reserved_4: 4;
    unsigned int ASSR0: 1;                  /** \brief [8:8] Activate Shared Service Request Node y (w) */
    unsigned int ASSR1: 1;                  /** \brief [9:9] Activate Shared Service Request Node y (w) */
    unsigned int ASSR2: 1;                  /** \brief [10:10] Activate Shared Service Request Node y (w) */
    unsigned int ASSR3: 1;                  /** \brief [11:11] Activate Shared Service Request Node y (w) */
    unsigned int reserved_12: 20;
} Ifx_VADC_G14_SRACT_Bits;

/** Synchronization Control Register, Group */
typedef struct
{
    unsigned int STSEL: 2;                  /** \brief [1:0] Start Selection (rw) */
    unsigned int reserved_2: 2;
    unsigned int EVALR1: 1;                 /** \brief [4:4] Evaluate Ready Input Rx (rw) */
    unsigned int EVALR2: 1;                 /** \brief [5:5] Evaluate Ready Input Rx (rw) */
    unsigned int EVALR3: 1;                 /** \brief [6:6] Evaluate Ready Input Rx (rw) */
    unsigned int reserved_7: 25;
} Ifx_VADC_G14_SYNCTR_Bits;

/** Valid Flag Register, Group */
typedef struct
{
    unsigned int VF0: 1;                    /** \brief [0:0] Valid Flag of Result Register x (rwh) */
    unsigned int VF1: 1;                    /** \brief [1:1] Valid Flag of Result Register x (rwh) */
    unsigned int VF2: 1;                    /** \brief [2:2] Valid Flag of Result Register x (rwh) */
    unsigned int VF3: 1;                    /** \brief [3:3] Valid Flag of Result Register x (rwh) */
    unsigned int VF4: 1;                    /** \brief [4:4] Valid Flag of Result Register x (rwh) */
    unsigned int VF5: 1;                    /** \brief [5:5] Valid Flag of Result Register x (rwh) */
    unsigned int VF6: 1;                    /** \brief [6:6] Valid Flag of Result Register x (rwh) */
    unsigned int VF7: 1;                    /** \brief [7:7] Valid Flag of Result Register x (rwh) */
    unsigned int VF8: 1;                    /** \brief [8:8] Valid Flag of Result Register x (rwh) */
    unsigned int VF9: 1;                    /** \brief [9:9] Valid Flag of Result Register x (rwh) */
    unsigned int VF10: 1;                   /** \brief [10:10] Valid Flag of Result Register x (rwh) */
    unsigned int VF11: 1;                   /** \brief [11:11] Valid Flag of Result Register x (rwh) */
    unsigned int VF12: 1;                   /** \brief [12:12] Valid Flag of Result Register x (rwh) */
    unsigned int VF13: 1;                   /** \brief [13:13] Valid Flag of Result Register x (rwh) */
    unsigned int VF14: 1;                   /** \brief [14:14] Valid Flag of Result Register x (rwh) */
    unsigned int VF15: 1;                   /** \brief [15:15] Valid Flag of Result Register x (rwh) */
    unsigned int reserved_16: 16;
} Ifx_VADC_G14_VFR_Bits;

/** Alias Register, Group */
typedef struct
{
    unsigned int ALIAS0: 5;                 /** \brief [4:0] Alias Value for CH0 Conversion Requests (rw) */
    unsigned int reserved_5: 3;
    unsigned int ALIAS1: 5;                 /** \brief [12:8] Alias Value for CH1 Conversion Requests (rw) */
    unsigned int reserved_13: 19;
} Ifx_VADC_G_ALIAS_Bits;

/** Arbitration Configuration Register, Group */
typedef struct
{
    unsigned int ANONC: 2;                  /** \brief [1:0] Analog Converter Control (rw) */
    unsigned int reserved_2: 2;
    unsigned int ARBRND: 2;                 /** \brief [5:4] Arbitration Round Length (w) */
    unsigned int reserved_6: 1;
    unsigned int ARBM: 1;                   /** \brief [7:7] Arbitration Mode (rw) */
    unsigned int reserved_8: 8;
    unsigned int ANONS: 2;                  /** \brief [17:16] Analog Converter Control Status (rh) */
    unsigned int reserved_18: 10;
    unsigned int CAL: 1;                    /** \brief [28:28] Start-Up Calibration Active Indication (rh) */
    unsigned int reserved_29: 1;
    unsigned int BUSY: 1;                   /** \brief [30:30] Converter Busy Flag (rh) */
    unsigned int SAMPLE: 1;                 /** \brief [31:31] Sample Phase Flag (rh) */
} Ifx_VADC_G_ARBCFG_Bits;

/** Arbitration Priority Register, Group */
typedef struct
{
    unsigned int PRIO0: 2;                  /** \brief [1:0] Priority of Request Source x (rw) */
    unsigned int reserved_2: 1;
    unsigned int CSM0: 1;                   /** \brief [3:3] Conversion Start Mode of Request Source x (rw) */
    unsigned int PRIO1: 2;                  /** \brief [5:4] Priority of Request Source x (rw) */
    unsigned int reserved_6: 1;
    unsigned int CSM1: 1;                   /** \brief [7:7] Conversion Start Mode of Request Source x (rw) */
    unsigned int PRIO2: 2;                  /** \brief [9:8] Priority of Request Source x (rw) */
    unsigned int reserved_10: 1;
    unsigned int CSM2: 1;                   /** \brief [11:11] Conversion Start Mode of Request Source x (rw) */
    unsigned int reserved_12: 12;
    unsigned int ASEN0: 1;                  /** \brief [24:24] Arbitration Slot y Enable (rw) */
    unsigned int ASEN1: 1;                  /** \brief [25:25] Arbitration Slot y Enable (rw) */
    unsigned int ASEN2: 1;                  /** \brief [26:26] Arbitration Slot y Enable (rw) */
    unsigned int reserved_27: 5;
} Ifx_VADC_G_ARBPR_Bits;

/** Autoscan Source Control Register, Group */
typedef struct
{
    unsigned int reserved_0: 8;
    unsigned int XTSEL: 4;                  /** \brief [11:8] External Trigger Input Selection (rw) */
    unsigned int XTLVL: 1;                  /** \brief [12:12] External Trigger Level (r) */
    unsigned int XTMODE: 2;                 /** \brief [14:13] Trigger Operating Mode (rw) */
    unsigned int XTWC: 1;                   /** \brief [15:15] Write Control for Trigger Configuration (w) */
    unsigned int GTSEL: 4;                  /** \brief [19:16] Gate Input Selection (rw) */
    unsigned int GTLVL: 1;                  /** \brief [20:20] Gate Input Level (r) */
    unsigned int reserved_21: 2;
    unsigned int GTWC: 1;                   /** \brief [23:23] Write Control for Gate Configuration (w) */
    unsigned int reserved_24: 4;
    unsigned int TMEN: 1;                   /** \brief [28:28] Timer Mode Enable (rw) */
    unsigned int reserved_29: 2;
    unsigned int TMWC: 1;                   /** \brief [31:31] Write Control for Timer Mode (w) */
} Ifx_VADC_G_ASCTRL_Bits;

/** Autoscan Source Mode Register, Group */
typedef struct
{
    unsigned int ENGT: 2;                   /** \brief [1:0] Enable Gate (rw) */
    unsigned int ENTR: 1;                   /** \brief [2:2] Enable External Trigger (rw) */
    unsigned int ENSI: 1;                   /** \brief [3:3] Enable Source Interrupt (rw) */
    unsigned int SCAN: 1;                   /** \brief [4:4] Autoscan Enable (rw) */
    unsigned int LDM: 1;                    /** \brief [5:5] Autoscan Source Load Event Mode (rw) */
    unsigned int reserved_6: 1;
    unsigned int REQGT: 1;                  /** \brief [7:7] Request Gate Level (rh) */
    unsigned int CLRPND: 1;                 /** \brief [8:8] Clear Pending Bits (w) */
    unsigned int LDEV: 1;                   /** \brief [9:9] Generate Load Event (w) */
    unsigned int reserved_10: 6;
    unsigned int RPTDIS: 1;                 /** \brief [16:16] Repeat Disable (rw) */
    unsigned int reserved_17: 15;
} Ifx_VADC_G_ASMR_Bits;

/** Autoscan Source Pending Register, Group */
typedef struct
{
    unsigned int CHPND: 32;                 /** \brief [31:0] Channels Pending (rw) */
} Ifx_VADC_G_ASPND_Bits;

/** Autoscan Source Channel Select Register, Group */
typedef struct
{
    unsigned int CHSEL: 32;                 /** \brief [31:0] Channel Selection (rw) */
} Ifx_VADC_G_ASSEL_Bits;

/** Boundary Flag Register, Group */
typedef struct
{
    unsigned int BFL0: 1;                   /** \brief [0:0] Boundary Flag for Channel y (rwh) */
    unsigned int BFL1: 1;                   /** \brief [1:1] Boundary Flag for Channel y (rwh) */
    unsigned int BFL2: 1;                   /** \brief [2:2] Boundary Flag for Channel y (rwh) */
    unsigned int BFL3: 1;                   /** \brief [3:3] Boundary Flag for Channel y (rwh) */
    unsigned int reserved_4: 12;
    unsigned int BFE0: 1;                   /** \brief [16:16] Enable Bit for Boundary Flag y (rw) */
    unsigned int BFE1: 1;                   /** \brief [17:17] Enable Bit for Boundary Flag y (rw) */
    unsigned int BFE2: 1;                   /** \brief [18:18] Enable Bit for Boundary Flag y (rw) */
    unsigned int BFE3: 1;                   /** \brief [19:19] Enable Bit for Boundary Flag y (rw) */
    unsigned int reserved_20: 12;
} Ifx_VADC_G_BFL_Bits;

/** Boundary Select Register, Group */
typedef struct
{
    unsigned int BOUNDARY0: 12;             /** \brief [11:0] Boundary Value x for Limit Checking (rw) */
    unsigned int reserved_12: 4;
    unsigned int BOUNDARY1: 12;             /** \brief [27:16] Boundary Value x for Limit Checking (rw) */
    unsigned int reserved_28: 4;
} Ifx_VADC_G_BOUND_Bits;

/** Channel Event Flag Clear Register, Group */
typedef struct
{
    unsigned int CEV0: 1;                   /** \brief [0:0] Clear Channel Event for Channel y (w) */
    unsigned int CEV1: 1;                   /** \brief [1:1] Clear Channel Event for Channel y (w) */
    unsigned int CEV2: 1;                   /** \brief [2:2] Clear Channel Event for Channel y (w) */
    unsigned int CEV3: 1;                   /** \brief [3:3] Clear Channel Event for Channel y (w) */
    unsigned int CEV4: 1;                   /** \brief [4:4] Clear Channel Event for Channel y (w) */
    unsigned int CEV5: 1;                   /** \brief [5:5] Clear Channel Event for Channel y (w) */
    unsigned int CEV6: 1;                   /** \brief [6:6] Clear Channel Event for Channel y (w) */
    unsigned int CEV7: 1;                   /** \brief [7:7] Clear Channel Event for Channel y (w) */
    unsigned int reserved_8: 24;
} Ifx_VADC_G_CEFCLR_Bits;

/** Channel Event Flag Register, Group */
typedef struct
{
    unsigned int CEV0: 1;                   /** \brief [0:0] Channel Event for Channel y (rwh) */
    unsigned int CEV1: 1;                   /** \brief [1:1] Channel Event for Channel y (rwh) */
    unsigned int CEV2: 1;                   /** \brief [2:2] Channel Event for Channel y (rwh) */
    unsigned int CEV3: 1;                   /** \brief [3:3] Channel Event for Channel y (rwh) */
    unsigned int CEV4: 1;                   /** \brief [4:4] Channel Event for Channel y (rwh) */
    unsigned int CEV5: 1;                   /** \brief [5:5] Channel Event for Channel y (rwh) */
    unsigned int CEV6: 1;                   /** \brief [6:6] Channel Event for Channel y (rwh) */
    unsigned int CEV7: 1;                   /** \brief [7:7] Channel Event for Channel y (rwh) */
    unsigned int reserved_8: 24;
} Ifx_VADC_G_CEFLAG_Bits;

/** Channel Event Node Pointer Register 0, Group */
typedef struct
{
    unsigned int CEV0NP: 4;                 /** \brief [3:0] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV1NP: 4;                 /** \brief [7:4] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV2NP: 4;                 /** \brief [11:8] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV3NP: 4;                 /** \brief [15:12] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV4NP: 4;                 /** \brief [19:16] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV5NP: 4;                 /** \brief [23:20] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV6NP: 4;                 /** \brief [27:24] Service Request Node Pointer Channel Event i (rw) */
    unsigned int CEV7NP: 4;                 /** \brief [31:28] Service Request Node Pointer Channel Event i (rw) */
} Ifx_VADC_G_CEVNP0_Bits;

/** Channel Assignment Register, Group */
typedef struct
{
    unsigned int ASSCH0: 1;                 /** \brief [0:0] Assignment for Channel y (rw) */
    unsigned int ASSCH1: 1;                 /** \brief [1:1] Assignment for Channel y (rw) */
    unsigned int ASSCH2: 1;                 /** \brief [2:2] Assignment for Channel y (rw) */
    unsigned int ASSCH3: 1;                 /** \brief [3:3] Assignment for Channel y (rw) */
    unsigned int ASSCH4: 1;                 /** \brief [4:4] Assignment for Channel y (rw) */
    unsigned int ASSCH5: 1;                 /** \brief [5:5] Assignment for Channel y (rw) */
    unsigned int ASSCH6: 1;                 /** \brief [6:6] Assignment for Channel y (rw) */
    unsigned int ASSCH7: 1;                 /** \brief [7:7] Assignment for Channel y (rw) */
    unsigned int ASSCH8: 1;                 /** \brief [8:8] Assignment for Channel y (rw) */
    unsigned int ASSCH9: 1;                 /** \brief [9:9] Assignment for Channel y (rw) */
    unsigned int ASSCH10: 1;                /** \brief [10:10] Assignment for Channel y (rw) */
    unsigned int ASSCH11: 1;                /** \brief [11:11] Assignment for Channel y (rw) */
    unsigned int ASSCH12: 1;                /** \brief [12:12] Assignment for Channel y (rw) */
    unsigned int ASSCH13: 1;                /** \brief [13:13] Assignment for Channel y (rw) */
    unsigned int ASSCH14: 1;                /** \brief [14:14] Assignment for Channel y (rw) */
    unsigned int ASSCH15: 1;                /** \brief [15:15] Assignment for Channel y (rw) */
    unsigned int ASSCH16: 1;                /** \brief [16:16] Assignment for Channel y (rw) */
    unsigned int ASSCH17: 1;                /** \brief [17:17] Assignment for Channel y (rw) */
    unsigned int ASSCH18: 1;                /** \brief [18:18] Assignment for Channel y (rw) */
    unsigned int ASSCH19: 1;                /** \brief [19:19] Assignment for Channel y (rw) */
    unsigned int ASSCH20: 1;                /** \brief [20:20] Assignment for Channel y (rw) */
    unsigned int ASSCH21: 1;                /** \brief [21:21] Assignment for Channel y (rw) */
    unsigned int ASSCH22: 1;                /** \brief [22:22] Assignment for Channel y (rw) */
    unsigned int ASSCH23: 1;                /** \brief [23:23] Assignment for Channel y (rw) */
    unsigned int ASSCH24: 1;                /** \brief [24:24] Assignment for Channel y (rw) */
    unsigned int ASSCH25: 1;                /** \brief [25:25] Assignment for Channel y (rw) */
    unsigned int ASSCH26: 1;                /** \brief [26:26] Assignment for Channel y (rw) */
    unsigned int ASSCH27: 1;                /** \brief [27:27] Assignment for Channel y (rw) */
    unsigned int ASSCH28: 1;                /** \brief [28:28] Assignment for Channel y (rw) */
    unsigned int ASSCH29: 1;                /** \brief [29:29] Assignment for Channel y (rw) */
    unsigned int ASSCH30: 1;                /** \brief [30:30] Assignment for Channel y (rw) */
    unsigned int ASSCH31: 1;                /** \brief [31:31] Assignment for Channel y (rw) */
} Ifx_VADC_G_CHASS_Bits;

/** External Multiplexer Control Register, Group x */
typedef struct
{
    unsigned int EMUXSET: 3;                /** \brief [2:0] External Multiplexer Start Selection (rw) */
    unsigned int reserved_3: 5;
    unsigned int EMUXACT: 3;                /** \brief [10:8] External Multiplexer Actual Selection (rh) */
    unsigned int reserved_11: 5;
    unsigned int EMUXCH: 5;                 /** \brief [20:16] External Multiplexer Channel (rw) */
    unsigned int reserved_21: 5;
    unsigned int EMUXMODE: 2;               /** \brief [27:26] External Multiplexer Mode (rw) */
    unsigned int EMXCOD: 1;                 /** \brief [28:28] External Multiplexer Coding Scheme (rw) */
    unsigned int EMXST: 1;                  /** \brief [29:29] External Multiplexer Sample Time Control (rw) */
    unsigned int reserved_30: 1;
    unsigned int EMXWC: 1;                  /** \brief [31:31] Write Control for EMUX Configuration (w) */
} Ifx_VADC_G_EMUXCTR_Bits;

/** Queue 0 Register 0, Group */
typedef struct
{
    unsigned int REQCHNR: 5;                /** \brief [4:0] Request Channel Number (rh) */
    unsigned int RF: 1;                     /** \brief [5:5] Refill (rh) */
    unsigned int ENSI: 1;                   /** \brief [6:6] Enable Source Interrupt (rh) */
    unsigned int EXTR: 1;                   /** \brief [7:7] External Trigger (rh) */
    unsigned int V: 1;                      /** \brief [8:8] Request Channel Number Valid (rh) */
    unsigned int reserved_9: 23;
} Ifx_VADC_G_Q0R0_Bits;

/** Queue 0 Source Control Register, Group */
typedef struct
{
    unsigned int reserved_0: 8;
    unsigned int XTSEL: 4;                  /** \brief [11:8] External Trigger Input Selection (rw) */
    unsigned int XTLVL: 1;                  /** \brief [12:12] External Trigger Level (r) */
    unsigned int XTMODE: 2;                 /** \brief [14:13] Trigger Operating Mode (rw) */
    unsigned int XTWC: 1;                   /** \brief [15:15] Write Control for Trigger Configuration (w) */
    unsigned int GTSEL: 4;                  /** \brief [19:16] Gate Input Selection (rw) */
    unsigned int GTLVL: 1;                  /** \brief [20:20] Gate Input Level (r) */
    unsigned int reserved_21: 2;
    unsigned int GTWC: 1;                   /** \brief [23:23] Write Control for Gate Configuration (w) */
    unsigned int reserved_24: 4;
    unsigned int TMEN: 1;                   /** \brief [28:28] Timer Mode Enable (rw) */
    unsigned int reserved_29: 2;
    unsigned int TMWC: 1;                   /** \brief [31:31] Write Control for Timer Mode (w) */
} Ifx_VADC_G_QCTRL0_Bits;

/** Queue 0 Input Register, Group */
typedef struct
{
    unsigned int REQCHNR: 5;                /** \brief [4:0] Request Channel Number (w) */
    unsigned int RF: 1;                     /** \brief [5:5] Refill (w) */
    unsigned int ENSI: 1;                   /** \brief [6:6] Enable Source Interrupt (w) */
    unsigned int EXTR: 1;                   /** \brief [7:7] External Trigger (w) */
    unsigned int reserved_8: 24;
} Ifx_VADC_G_QINR0_Bits;

/** Queue 0 Mode Register, Group */
typedef struct
{
    unsigned int ENGT: 2;                   /** \brief [1:0] Enable Gate (rw) */
    unsigned int ENTR: 1;                   /** \brief [2:2] Enable External Trigger (rw) */
    unsigned int reserved_3: 5;
    unsigned int CLRV: 1;                   /** \brief [8:8] Clear Valid Bit (w) */
    unsigned int TREV: 1;                   /** \brief [9:9] Trigger Event (w) */
    unsigned int FLUSH: 1;                  /** \brief [10:10] Flush Queue (w) */
    unsigned int CEV: 1;                    /** \brief [11:11] Clear Event Flag (w) */
    unsigned int reserved_12: 4;
    unsigned int RPTDIS: 1;                 /** \brief [16:16] Repeat Disable (rw) */
    unsigned int reserved_17: 15;
} Ifx_VADC_G_QMR0_Bits;

/** Queue 0 Status Register, Group */
typedef struct
{
    unsigned int FILL: 4;                   /** \brief [3:0] Filling Level for Queue 2 (rh) */
    unsigned int reserved_4: 1;
    unsigned int EMPTY: 1;                  /** \brief [5:5] Queue Empty (rh) */
    unsigned int reserved_6: 1;
    unsigned int REQGT: 1;                  /** \brief [7:7] Request Gate Level (rh) */
    unsigned int EV: 1;                     /** \brief [8:8] Event Detected (rh) */
    unsigned int reserved_9: 23;
} Ifx_VADC_G_QSR0_Bits;

/** Result Event Flag Clear Register, Group */
typedef struct
{
    unsigned int REV0: 1;                   /** \brief [0:0] Clear Result Event for Result Register y (w) */
    unsigned int REV1: 1;                   /** \brief [1:1] Clear Result Event for Result Register y (w) */
    unsigned int REV2: 1;                   /** \brief [2:2] Clear Result Event for Result Register y (w) */
    unsigned int REV3: 1;                   /** \brief [3:3] Clear Result Event for Result Register y (w) */
    unsigned int REV4: 1;                   /** \brief [4:4] Clear Result Event for Result Register y (w) */
    unsigned int REV5: 1;                   /** \brief [5:5] Clear Result Event for Result Register y (w) */
    unsigned int REV6: 1;                   /** \brief [6:6] Clear Result Event for Result Register y (w) */
    unsigned int REV7: 1;                   /** \brief [7:7] Clear Result Event for Result Register y (w) */
    unsigned int REV8: 1;                   /** \brief [8:8] Clear Result Event for Result Register y (w) */
    unsigned int REV9: 1;                   /** \brief [9:9] Clear Result Event for Result Register y (w) */
    unsigned int REV10: 1;                  /** \brief [10:10] Clear Result Event for Result Register y (w) */
    unsigned int REV11: 1;                  /** \brief [11:11] Clear Result Event for Result Register y (w) */
    unsigned int REV12: 1;                  /** \brief [12:12] Clear Result Event for Result Register y (w) */
    unsigned int REV13: 1;                  /** \brief [13:13] Clear Result Event for Result Register y (w) */
    unsigned int REV14: 1;                  /** \brief [14:14] Clear Result Event for Result Register y (w) */
    unsigned int REV15: 1;                  /** \brief [15:15] Clear Result Event for Result Register y (w) */
    unsigned int reserved_16: 16;
} Ifx_VADC_G_REFCLR_Bits;

/** Result Event Flag Register, Group */
typedef struct
{
    unsigned int REV0: 1;                   /** \brief [0:0] Result Event for Result Register y (rwh) */
    unsigned int REV1: 1;                   /** \brief [1:1] Result Event for Result Register y (rwh) */
    unsigned int REV2: 1;                   /** \brief [2:2] Result Event for Result Register y (rwh) */
    unsigned int REV3: 1;                   /** \brief [3:3] Result Event for Result Register y (rwh) */
    unsigned int REV4: 1;                   /** \brief [4:4] Result Event for Result Register y (rwh) */
    unsigned int REV5: 1;                   /** \brief [5:5] Result Event for Result Register y (rwh) */
    unsigned int REV6: 1;                   /** \brief [6:6] Result Event for Result Register y (rwh) */
    unsigned int REV7: 1;                   /** \brief [7:7] Result Event for Result Register y (rwh) */
    unsigned int REV8: 1;                   /** \brief [8:8] Result Event for Result Register y (rwh) */
    unsigned int REV9: 1;                   /** \brief [9:9] Result Event for Result Register y (rwh) */
    unsigned int REV10: 1;                  /** \brief [10:10] Result Event for Result Register y (rwh) */
    unsigned int REV11: 1;                  /** \brief [11:11] Result Event for Result Register y (rwh) */
    unsigned int REV12: 1;                  /** \brief [12:12] Result Event for Result Register y (rwh) */
    unsigned int REV13: 1;                  /** \brief [13:13] Result Event for Result Register y (rwh) */
    unsigned int REV14: 1;                  /** \brief [14:14] Result Event for Result Register y (rwh) */
    unsigned int REV15: 1;                  /** \brief [15:15] Result Event for Result Register y (rwh) */
    unsigned int reserved_16: 16;
} Ifx_VADC_G_REFLAG_Bits;

/** Result Event Node Pointer Register 0, Group */
typedef struct
{
    unsigned int REV0NP: 4;                 /** \brief [3:0] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV1NP: 4;                 /** \brief [7:4] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV2NP: 4;                 /** \brief [11:8] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV3NP: 4;                 /** \brief [15:12] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV4NP: 4;                 /** \brief [19:16] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV5NP: 4;                 /** \brief [23:20] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV6NP: 4;                 /** \brief [27:24] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV7NP: 4;                 /** \brief [31:28] Service Request Node Pointer Result Event i (rw) */
} Ifx_VADC_G_REVNP0_Bits;

/** Result Event Node Pointer Register 1, Group */
typedef struct
{
    unsigned int REV8NP: 4;                 /** \brief [3:0] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV9NP: 4;                 /** \brief [7:4] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV10NP: 4;                /** \brief [11:8] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV11NP: 4;                /** \brief [15:12] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV12NP: 4;                /** \brief [19:16] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV13NP: 4;                /** \brief [23:20] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV14NP: 4;                /** \brief [27:24] Service Request Node Pointer Result Event i (rw) */
    unsigned int REV15NP: 4;                /** \brief [31:28] Service Request Node Pointer Result Event i (rw) */
} Ifx_VADC_G_REVNP1_Bits;

/** Source Event Flag Clear Register, Group */
typedef struct
{
    unsigned int SEV0: 1;                   /** \brief [0:0] Clear Source Event 0/1/2 (w) */
    unsigned int SEV1: 1;                   /** \brief [1:1] Clear Source Event 0/1/2 (w) */
    unsigned int reserved_2: 30;
} Ifx_VADC_G_SEFCLR_Bits;

/** Source Event Flag Register, Group */
typedef struct
{
    unsigned int SEV0: 1;                   /** \brief [0:0] Source Event 0/1/2Source event 2 indicates conversions requested by the background request source. (rwh) */
    unsigned int SEV1: 1;                   /** \brief [1:1] Source Event 0/1/2Source event 2 indicates conversions requested by the background request source. (rwh) */
    unsigned int reserved_2: 30;
} Ifx_VADC_G_SEFLAG_Bits;

/** Source Event Node Pointer Register, Group */
typedef struct
{
    unsigned int SEV0NP: 4;                 /** \brief [3:0] Service Request Node Pointer Source Event i (rw) */
    unsigned int SEV1NP: 4;                 /** \brief [7:4] Service Request Node Pointer Source Event i (rw) */
    unsigned int reserved_8: 24;
} Ifx_VADC_G_SEVNP_Bits;

/** Service Request Software Activation Trigger, Group */
typedef struct
{
    unsigned int AGSR0: 1;                  /** \brief [0:0] Activate Group Service Request Node y (w) */
    unsigned int AGSR1: 1;                  /** \brief [1:1] Activate Group Service Request Node y (w) */
    unsigned int AGSR2: 1;                  /** \brief [2:2] Activate Group Service Request Node y (w) */
    unsigned int AGSR3: 1;                  /** \brief [3:3] Activate Group Service Request Node y (w) */
    unsigned int reserved_4: 4;
    unsigned int ASSR0: 1;                  /** \brief [8:8] Activate Shared Service Request Node y (w) */
    unsigned int ASSR1: 1;                  /** \brief [9:9] Activate Shared Service Request Node y (w) */
    unsigned int ASSR2: 1;                  /** \brief [10:10] Activate Shared Service Request Node y (w) */
    unsigned int ASSR3: 1;                  /** \brief [11:11] Activate Shared Service Request Node y (w) */
    unsigned int reserved_12: 20;
} Ifx_VADC_G_SRACT_Bits;

/** Synchronization Control Register, Group */
typedef struct
{
    unsigned int STSEL: 2;                  /** \brief [1:0] Start Selection (rw) */
    unsigned int reserved_2: 2;
    unsigned int EVALR1: 1;                 /** \brief [4:4] Evaluate Ready Input Rx (rw) */
    unsigned int EVALR2: 1;                 /** \brief [5:5] Evaluate Ready Input Rx (rw) */
    unsigned int EVALR3: 1;                 /** \brief [6:6] Evaluate Ready Input Rx (rw) */
    unsigned int reserved_7: 25;
} Ifx_VADC_G_SYNCTR_Bits;

/** Valid Flag Register, Group */
typedef struct
{
    unsigned int VF0: 1;                    /** \brief [0:0] Valid Flag of Result Register x (rwh) */
    unsigned int VF1: 1;                    /** \brief [1:1] Valid Flag of Result Register x (rwh) */
    unsigned int VF2: 1;                    /** \brief [2:2] Valid Flag of Result Register x (rwh) */
    unsigned int VF3: 1;                    /** \brief [3:3] Valid Flag of Result Register x (rwh) */
    unsigned int VF4: 1;                    /** \brief [4:4] Valid Flag of Result Register x (rwh) */
    unsigned int VF5: 1;                    /** \brief [5:5] Valid Flag of Result Register x (rwh) */
    unsigned int VF6: 1;                    /** \brief [6:6] Valid Flag of Result Register x (rwh) */
    unsigned int VF7: 1;                    /** \brief [7:7] Valid Flag of Result Register x (rwh) */
    unsigned int VF8: 1;                    /** \brief [8:8] Valid Flag of Result Register x (rwh) */
    unsigned int VF9: 1;                    /** \brief [9:9] Valid Flag of Result Register x (rwh) */
    unsigned int VF10: 1;                   /** \brief [10:10] Valid Flag of Result Register x (rwh) */
    unsigned int VF11: 1;                   /** \brief [11:11] Valid Flag of Result Register x (rwh) */
    unsigned int VF12: 1;                   /** \brief [12:12] Valid Flag of Result Register x (rwh) */
    unsigned int VF13: 1;                   /** \brief [13:13] Valid Flag of Result Register x (rwh) */
    unsigned int VF14: 1;                   /** \brief [14:14] Valid Flag of Result Register x (rwh) */
    unsigned int VF15: 1;                   /** \brief [15:15] Valid Flag of Result Register x (rwh) */
    unsigned int reserved_16: 16;
} Ifx_VADC_G_VFR_Bits;

/** Global Boundary Select Register */
typedef struct
{
    unsigned int BOUNDARY0: 12;             /** \brief [11:0] Boundary Value x for Limit Checking (rw) */
    unsigned int reserved_12: 4;
    unsigned int BOUNDARY1: 12;             /** \brief [27:16] Boundary Value x for Limit Checking (rw) */
    unsigned int reserved_28: 4;
} Ifx_VADC_GLOBBOUND_Bits;

/** Global Configuration Register */
typedef struct
{
    unsigned int DIVA: 5;                   /** \brief [4:0] Divider Factor for the Analog Internal Clock (rw) */
    unsigned int reserved_5: 2;
    unsigned int DCMSB: 1;                  /** \brief [7:7] Double Clock for the MSB Conversion (rw) */
    unsigned int DIVD: 2;                   /** \brief [9:8] Divider Factor for the Arbiter Clock (rw) */
    unsigned int reserved_10: 5;
    unsigned int DIVWC: 1;                  /** \brief [15:15] Write Control for Divider Parameters (w) */
    unsigned int DPCAL0: 1;                 /** \brief [16:16] Disable Post-Calibration (rw) */
    unsigned int DPCAL1: 1;                 /** \brief [17:17] Disable Post-Calibration (rw) */
    unsigned int DPCAL2: 1;                 /** \brief [18:18] Disable Post-Calibration (rw) */
    unsigned int DPCAL3: 1;                 /** \brief [19:19] Disable Post-Calibration (rw) */
    unsigned int reserved_20: 11;
    unsigned int SUCAL: 1;                  /** \brief [31:31] Start-Up Calibration (w) */
} Ifx_VADC_GLOBCFG_Bits;

/** Global Event Flag Register */
typedef struct
{
    unsigned int SEVGLB: 1;                 /** \brief [0:0] Source Event (Background) (rwh) */
    unsigned int reserved_1: 7;
    unsigned int REVGLB: 1;                 /** \brief [8:8] Global Result Event (rwh) */
    unsigned int reserved_9: 7;
    unsigned int SEVGLBCLR: 1;              /** \brief [16:16] Clear Source Event (Background) (w) */
    unsigned int reserved_17: 7;
    unsigned int REVGLBCLR: 1;              /** \brief [24:24] Clear Global Result Event (w) */
    unsigned int reserved_25: 7;
} Ifx_VADC_GLOBEFLAG_Bits;

/** Global Event Node Pointer Register */
typedef struct
{
    unsigned int SEV0NP: 4;                 /** \brief [3:0] Service Request Node Pointer Backgr. Source (rw) */
    unsigned int reserved_4: 12;
    unsigned int REV0NP: 4;                 /** \brief [19:16] Service Request Node Pointer Backgr. Result (rw) */
    unsigned int reserved_20: 12;
} Ifx_VADC_GLOBEVNP_Bits;

/** Global Result Control Register */
typedef struct
{
    unsigned int reserved_0: 16;
    unsigned int DRCTR: 4;                  /** \brief [19:16] Data Reduction Control (rw) */
    unsigned int reserved_20: 4;
    unsigned int WFR: 1;                    /** \brief [24:24] Wait-for-Read Mode Enable (rw) */
    unsigned int reserved_25: 6;
    unsigned int SRGEN: 1;                  /** \brief [31:31] Service Request Generation Enable (rw) */
} Ifx_VADC_GLOBRCR_Bits;

/** Global Result Register */
typedef struct
{
    unsigned int RESULT: 16;                /** \brief [15:0] Result of most recent conversion (rwh) */
    unsigned int GNR: 4;                    /** \brief [19:16] Group Number (rh) */
    unsigned int CHNR: 5;                   /** \brief [24:20] Channel Number (rh) */
    unsigned int EMUX: 3;                   /** \brief [27:25] External Multiplexer Setting (rh) */
    unsigned int CRS: 2;                    /** \brief [29:28] Converted Request Source (rh) */
    unsigned int FCR: 1;                    /** \brief [30:30] Fast Compare Result (rh) */
    unsigned int VF: 1;                     /** \brief [31:31] Valid Flag (rwh) */
} Ifx_VADC_GLOBRES_Bits;

/** Global Result Register, Debug */
typedef struct
{
    unsigned int RESULT: 16;                /** \brief [15:0] Result of most recent conversion (rwh) */
    unsigned int GNR: 4;                    /** \brief [19:16] Group Number (rh) */
    unsigned int CHNR: 5;                   /** \brief [24:20] Channel Number (rh) */
    unsigned int EMUX: 3;                   /** \brief [27:25] External Multiplexer Setting (rh) */
    unsigned int CRS: 2;                    /** \brief [29:28] Converted Request Source (rh) */
    unsigned int FCR: 1;                    /** \brief [30:30] Fast Compare Result (rh) */
    unsigned int VF: 1;                     /** \brief [31:31] Valid Flag (rwh) */
} Ifx_VADC_GLOBRESD_Bits;

/** Global Test Functions Register */
typedef struct
{
    unsigned int CDCH: 4;                   /** \brief [3:0] Converter Diagnostics Channel (rw) */
    unsigned int CDGR: 4;                   /** \brief [7:4] Converter Diagnostics Group (rw) */
    unsigned int CDEN: 1;                   /** \brief [8:8] Converter Diagnostics Enable (rw) */
    unsigned int CDSEL: 2;                  /** \brief [10:9] Converter Diagnostics Pull-Devices Select (rw) */
    unsigned int reserved_11: 4;
    unsigned int CDWC: 1;                   /** \brief [15:15] Write Control for Conversion Diagnostics (w) */
    unsigned int PDD: 1;                    /** \brief [16:16] Pull-Down Diagnostics Enable (rw) */
    unsigned int MDPD: 1;                   /** \brief [17:17] Multiplexer Diagnostics Pull-Devices Enable (rw) */
    unsigned int MDPU: 1;                   /** \brief [18:18] Multiplexer Diagnostics Pull-Devices Enable (rw) */
    unsigned int reserved_19: 4;
    unsigned int MDWC: 1;                   /** \brief [23:23] Write Control for Multiplexer Diagnostics (w) */
    unsigned int TRSW: 1;                   /** \brief [24:24] Trigger Event via Software (w) */
    unsigned int TREV: 1;                   /** \brief [25:25] Trigger Event Flag (rw) */
    unsigned int reserved_26: 3;
    unsigned int SRGMODE: 2;                /** \brief [30:29] Service Request Generation Mode (rw) */
    unsigned int SRGWC: 1;                  /** \brief [31:31] Write Control for Service Request Gen. Mode (w) */
} Ifx_VADC_GLOBTF_Bits;

/** Input Class Register */
typedef struct
{
    unsigned int STCS: 5;                   /** \brief [4:0] Sample Time Control for Standard Conversions (rw) */
    unsigned int reserved_5: 3;
    unsigned int CMS: 3;                    /** \brief [10:8] Conversion Mode for Standard Conversions (rw) */
    unsigned int reserved_11: 5;
    unsigned int STCE: 5;                   /** \brief [20:16] Sample Time Control for EMUX Conversions (rw) */
    unsigned int reserved_21: 3;
    unsigned int CME: 3;                    /** \brief [26:24] Conversion Mode for EMUX Conversions (rw) */
    unsigned int reserved_27: 5;
} Ifx_VADC_ICLASS_Bits;

/** Kernel Reset Register 0 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int RSTSTAT: 1;                /** \brief [1:1] Kernel Reset Status (rh) */
    unsigned int reserved_2: 30;
} Ifx_VADC_KRST0_Bits;

/** Kernel Reset Register 1 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int reserved_1: 31;
} Ifx_VADC_KRST1_Bits;

/** Kernel Reset Status Clear Register */
typedef struct
{
    unsigned int CLR: 1;                    /** \brief [0:0] Kernel Reset Status Clear (w) */
    unsigned int reserved_1: 31;
} Ifx_VADC_KRSTCLR_Bits;

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
} Ifx_VADC_OCS_Bits;

/** Group Result Control Register */
typedef struct
{
    unsigned int reserved_0: 16;
    unsigned int DRCTR: 4;                  /** \brief [19:16] Data Reduction Control (rw) */
    unsigned int DMM: 2;                    /** \brief [21:20] Data Modification Mode (rw) */
    unsigned int reserved_22: 2;
    unsigned int WFR: 1;                    /** \brief [24:24] Wait-for-Read Mode Enable (rw) */
    unsigned int FEN: 1;                    /** \brief [25:25] FIFO Mode Enable (rw) */
    unsigned int reserved_26: 5;
    unsigned int SRGEN: 1;                  /** \brief [31:31] Service Request Generation Enable (rw) */
} Ifx_VADC_RCR_Bits;

/** Group Result Register */
typedef struct
{
    unsigned int RESULT: 16;                /** \brief [15:0] Result of Most Recent Conversion (rwh) */
    unsigned int DRC: 4;                    /** \brief [19:16] Data Reduction Counter (rh) */
    unsigned int CHNR: 5;                   /** \brief [24:20] Channel Number (rh) */
    unsigned int EMUX: 3;                   /** \brief [27:25] External Multiplexer Setting (rh) */
    unsigned int CRS: 2;                    /** \brief [29:28] Converted Request Source (rh) */
    unsigned int FCR: 1;                    /** \brief [30:30] Fast Compare Result (rh) */
    unsigned int VF: 1;                     /** \brief [31:31] Valid Flag (rh) */
} Ifx_VADC_RES_Bits;

/** Group Result Reg., Debug */
typedef struct
{
    unsigned int RESULT: 16;                /** \brief [15:0] Result of Most Recent Conversion (rh) */
    unsigned int DRC: 4;                    /** \brief [19:16] Data Reduction Counter (rh) */
    unsigned int CHNR: 5;                   /** \brief [24:20] Channel Number (rh) */
    unsigned int EMUX: 3;                   /** \brief [27:25] External Multiplexer Setting (rh) */
    unsigned int CRS: 2;                    /** \brief [29:28] Converted Request Source (rh) */
    unsigned int FCR: 1;                    /** \brief [30:30] Fast Compare Result (rh) */
    unsigned int VF: 1;                     /** \brief [31:31] Valid Flag (rh) */
} Ifx_VADC_RESD_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_ACCEN0_Bits B;
} Ifx_VADC_ACCEN0;

/** Access Protection Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_ACCPROT_Bits B;
} Ifx_VADC_ACCPROT;

/** Background Request Source Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_BRSCTRL_Bits B;
} Ifx_VADC_BRSCTRL;

/** Background Request Source Mode Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_BRSMR_Bits B;
} Ifx_VADC_BRSMR;

/** Background Request Source Pending Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_BRSPND_Bits B;
} Ifx_VADC_BRSPND;

/** Background Request Source Channel Select Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_BRSSEL_Bits B;
} Ifx_VADC_BRSSEL;

/** Group, Channel Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_CHCTR_Bits B;
} Ifx_VADC_CHCTR;

/** External Multiplexer Select Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_EMUXSEL_Bits B;
} Ifx_VADC_EMUXSEL;

/** Alias Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_ALIAS_Bits B;
} Ifx_VADC_G14_ALIAS;

/** Arbitration Configuration Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_ARBCFG_Bits B;
} Ifx_VADC_G14_ARBCFG;

/** Arbitration Priority Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_ARBPR_Bits B;
} Ifx_VADC_G14_ARBPR;

/** Autoscan Source Control Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_ASCTRL_Bits B;
} Ifx_VADC_G14_ASCTRL;

/** Autoscan Source Mode Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_ASMR_Bits B;
} Ifx_VADC_G14_ASMR;

/** Autoscan Source Pending Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_ASPND_Bits B;
} Ifx_VADC_G14_ASPND;

/** Autoscan Source Channel Select Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_ASSEL_Bits B;
} Ifx_VADC_G14_ASSEL;

/** Boundary Flag Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_BFL_Bits B;
} Ifx_VADC_G14_BFL;

/** Boundary Select Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_BOUND_Bits B;
} Ifx_VADC_G14_BOUND;

/** Channel Event Flag Clear Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_CEFCLR_Bits B;
} Ifx_VADC_G14_CEFCLR;

/** Channel Event Flag Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_CEFLAG_Bits B;
} Ifx_VADC_G14_CEFLAG;

/** Channel Event Node Pointer Register 0, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_CEVNP0_Bits B;
} Ifx_VADC_G14_CEVNP0;

/** Channel Event Node Pointer Register 1, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_CEVNP1_Bits B;
} Ifx_VADC_G14_CEVNP1;

/** Channel Event Node Pointer Register 2, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_CEVNP2_Bits B;
} Ifx_VADC_G14_CEVNP2;

/** Channel Assignment Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_CHASS_Bits B;
} Ifx_VADC_G14_CHASS;

/** External Multiplexer Control Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_EMUXCTR_Bits B;
} Ifx_VADC_G14_EMUXCTR;

/** Queue 0 Register 0, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_Q0R0_Bits B;
} Ifx_VADC_G14_Q0R0;

/** Queue 0 Source Control Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_QCTRL0_Bits B;
} Ifx_VADC_G14_QCTRL0;

/** Queue 0 Input Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_QINR0_Bits B;
} Ifx_VADC_G14_QINR0;

/** Queue 0 Mode Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_QMR0_Bits B;
} Ifx_VADC_G14_QMR0;

/** Queue 0 Status Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_QSR0_Bits B;
} Ifx_VADC_G14_QSR0;

/** Result Event Flag Clear Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_REFCLR_Bits B;
} Ifx_VADC_G14_REFCLR;

/** Result Event Flag Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_REFLAG_Bits B;
} Ifx_VADC_G14_REFLAG;

/** Result Event Node Pointer Register 0, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_REVNP0_Bits B;
} Ifx_VADC_G14_REVNP0;

/** Result Event Node Pointer Register 1, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_REVNP1_Bits B;
} Ifx_VADC_G14_REVNP1;

/** Source Event Flag Clear Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_SEFCLR_Bits B;
} Ifx_VADC_G14_SEFCLR;

/** Source Event Flag Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_SEFLAG_Bits B;
} Ifx_VADC_G14_SEFLAG;

/** Source Event Node Pointer Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_SEVNP_Bits B;
} Ifx_VADC_G14_SEVNP;

/** Service Request Software Activation Trigger, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_SRACT_Bits B;
} Ifx_VADC_G14_SRACT;

/** Synchronization Control Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_SYNCTR_Bits B;
} Ifx_VADC_G14_SYNCTR;

/** Valid Flag Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G14_VFR_Bits B;
} Ifx_VADC_G14_VFR;

/** Alias Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_ALIAS_Bits B;
} Ifx_VADC_G_ALIAS;

/** Arbitration Configuration Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_ARBCFG_Bits B;
} Ifx_VADC_G_ARBCFG;

/** Arbitration Priority Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_ARBPR_Bits B;
} Ifx_VADC_G_ARBPR;

/** Autoscan Source Control Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_ASCTRL_Bits B;
} Ifx_VADC_G_ASCTRL;

/** Autoscan Source Mode Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_ASMR_Bits B;
} Ifx_VADC_G_ASMR;

/** Autoscan Source Pending Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_ASPND_Bits B;
} Ifx_VADC_G_ASPND;

/** Autoscan Source Channel Select Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_ASSEL_Bits B;
} Ifx_VADC_G_ASSEL;

/** Boundary Flag Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_BFL_Bits B;
} Ifx_VADC_G_BFL;

/** Boundary Select Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_BOUND_Bits B;
} Ifx_VADC_G_BOUND;

/** Channel Event Flag Clear Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_CEFCLR_Bits B;
} Ifx_VADC_G_CEFCLR;

/** Channel Event Flag Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_CEFLAG_Bits B;
} Ifx_VADC_G_CEFLAG;

/** Channel Event Node Pointer Register 0, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_CEVNP0_Bits B;
} Ifx_VADC_G_CEVNP0;

/** Channel Assignment Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_CHASS_Bits B;
} Ifx_VADC_G_CHASS;

/** External Multiplexer Control Register, Group x */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_EMUXCTR_Bits B;
} Ifx_VADC_G_EMUXCTR;

/** Queue 0 Register 0, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_Q0R0_Bits B;
} Ifx_VADC_G_Q0R0;

/** Queue 0 Source Control Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_QCTRL0_Bits B;
} Ifx_VADC_G_QCTRL0;

/** Queue 0 Input Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_QINR0_Bits B;
} Ifx_VADC_G_QINR0;

/** Queue 0 Mode Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_QMR0_Bits B;
} Ifx_VADC_G_QMR0;

/** Queue 0 Status Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_QSR0_Bits B;
} Ifx_VADC_G_QSR0;

/** Result Event Flag Clear Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_REFCLR_Bits B;
} Ifx_VADC_G_REFCLR;

/** Result Event Flag Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_REFLAG_Bits B;
} Ifx_VADC_G_REFLAG;

/** Result Event Node Pointer Register 0, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_REVNP0_Bits B;
} Ifx_VADC_G_REVNP0;

/** Result Event Node Pointer Register 1, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_REVNP1_Bits B;
} Ifx_VADC_G_REVNP1;

/** Source Event Flag Clear Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_SEFCLR_Bits B;
} Ifx_VADC_G_SEFCLR;

/** Source Event Flag Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_SEFLAG_Bits B;
} Ifx_VADC_G_SEFLAG;

/** Source Event Node Pointer Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_SEVNP_Bits B;
} Ifx_VADC_G_SEVNP;

/** Service Request Software Activation Trigger, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_SRACT_Bits B;
} Ifx_VADC_G_SRACT;

/** Synchronization Control Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_SYNCTR_Bits B;
} Ifx_VADC_G_SYNCTR;

/** Valid Flag Register, Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_G_VFR_Bits B;
} Ifx_VADC_G_VFR;

/** Global Boundary Select Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_GLOBBOUND_Bits B;
} Ifx_VADC_GLOBBOUND;

/** Global Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_GLOBCFG_Bits B;
} Ifx_VADC_GLOBCFG;

/** Global Event Flag Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_GLOBEFLAG_Bits B;
} Ifx_VADC_GLOBEFLAG;

/** Global Event Node Pointer Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_GLOBEVNP_Bits B;
} Ifx_VADC_GLOBEVNP;

/** Global Result Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_GLOBRCR_Bits B;
} Ifx_VADC_GLOBRCR;

/** Global Result Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_GLOBRES_Bits B;
} Ifx_VADC_GLOBRES;

/** Global Result Register, Debug */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_GLOBRESD_Bits B;
} Ifx_VADC_GLOBRESD;

/** Global Test Functions Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_GLOBTF_Bits B;
} Ifx_VADC_GLOBTF;

/** Input Class Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_ICLASS_Bits B;
} Ifx_VADC_ICLASS;

/** Kernel Reset Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_KRST0_Bits B;
} Ifx_VADC_KRST0;

/** Kernel Reset Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_KRST1_Bits B;
} Ifx_VADC_KRST1;

/** Kernel Reset Status Clear Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_KRSTCLR_Bits B;
} Ifx_VADC_KRSTCLR;

/** OCDS Control and Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_OCS_Bits B;
} Ifx_VADC_OCS;

/** Group Result Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_RCR_Bits B;
} Ifx_VADC_RCR;

/** Group Result Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_RES_Bits B;
} Ifx_VADC_RES;

/** Group Result Reg., Debug */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_VADC_RESD_Bits B;
} Ifx_VADC_RESD;

/******************************************************************************/
/*                           Struct (3 - Object L1)                           */
/******************************************************************************/

/** Group objects */
typedef volatile struct
{
    Ifx_VADC_G_ARBCFG ARBCFG;               /** \brief 0, Arbitration Configuration Register, Group  */
    Ifx_VADC_G_ARBPR ARBPR;                 /** \brief 4, Arbitration Priority Register, Group  */
    Ifx_VADC_G_CHASS CHASS;                 /** \brief 8, Channel Assignment Register, Group  */
    unsigned char reserved_C[20];           /** \brief C */
    Ifx_VADC_ICLASS ICLASS[2];              /** \brief 20, Input Class Register */
    unsigned char reserved_28[8];           /** \brief 28 */
    Ifx_VADC_G_ALIAS ALIAS;                 /** \brief 30, Alias Register, Group  */
    unsigned char reserved_34[4];           /** \brief 34 */
    Ifx_VADC_G_BOUND BOUND;                 /** \brief 38, Boundary Select Register, Group  */
    unsigned char reserved_3C[4];           /** \brief 3C */
    Ifx_VADC_G_SYNCTR SYNCTR;               /** \brief 40, Synchronization Control Register, Group  */
    unsigned char reserved_44[4];           /** \brief 44 */
    Ifx_VADC_G_BFL BFL;                     /** \brief 48, Boundary Flag Register, Group  */
    unsigned char reserved_4C[52];          /** \brief 4C */
    Ifx_VADC_G_QCTRL0 QCTRL0;               /** \brief 80, Queue 0 Source Control Register, Group  */
    Ifx_VADC_G_QMR0 QMR0;                   /** \brief 84, Queue 0 Mode Register, Group  */
    Ifx_VADC_G_QSR0 QSR0;                   /** \brief 88, Queue 0 Status Register, Group  */
    Ifx_VADC_G_Q0R0 Q0R0;                   /** \brief 8C, Queue 0 Register 0, Group  */
    Ifx_VADC_G_QINR0 QINR0;                 /** \brief 90, Queue 0 Input Register, Group  */
    unsigned char reserved_94[12];          /** \brief 94 */
    Ifx_VADC_G_ASCTRL ASCTRL;               /** \brief A0, Autoscan Source Control Register, Group  */
    Ifx_VADC_G_ASMR ASMR;                   /** \brief A4, Autoscan Source Mode Register, Group  */
    Ifx_VADC_G_ASSEL ASSEL;                 /** \brief A8, Autoscan Source Channel Select Register, Group  */
    Ifx_VADC_G_ASPND ASPND;                 /** \brief AC, Autoscan Source Pending Register, Group  */
    unsigned char reserved_B0[80];          /** \brief B0 */
    Ifx_VADC_G_CEFLAG CEFLAG;               /** \brief 100, Channel Event Flag Register, Group  */
    Ifx_VADC_G_REFLAG REFLAG;               /** \brief 104, Result Event Flag Register, Group  */
    Ifx_VADC_G_SEFLAG SEFLAG;               /** \brief 108, Source Event Flag Register, Group  */
    unsigned char reserved_10C[4];          /** \brief 10C */
    Ifx_VADC_G_CEFCLR CEFCLR;               /** \brief 110, Channel Event Flag Clear Register, Group  */
    Ifx_VADC_G_REFCLR REFCLR;               /** \brief 114, Result Event Flag Clear Register, Group  */
    Ifx_VADC_G_SEFCLR SEFCLR;               /** \brief 118, Source Event Flag Clear Register, Group  */
    unsigned char reserved_11C[4];          /** \brief 11C */
    Ifx_VADC_G_CEVNP0 CEVNP0;               /** \brief 120, Channel Event Node Pointer Register 0, Group  */
    unsigned char reserved_124[12];         /** \brief 124 */
    Ifx_VADC_G_REVNP0 REVNP0;               /** \brief 130, Result Event Node Pointer Register 0, Group  */
    Ifx_VADC_G_REVNP1 REVNP1;               /** \brief 134, Result Event Node Pointer Register 1, Group  */
    unsigned char reserved_138[8];          /** \brief 138 */
    Ifx_VADC_G_SEVNP SEVNP;                 /** \brief 140, Source Event Node Pointer Register, Group  */
    unsigned char reserved_144[4];          /** \brief 144 */
    Ifx_VADC_G_SRACT SRACT;                 /** \brief 148, Service Request Software Activation Trigger, Group  */
    unsigned char reserved_14C[36];         /** \brief 14C */
    Ifx_VADC_G_EMUXCTR EMUXCTR;             /** \brief 170, External Multiplexer Control Register, Group x */
    unsigned char reserved_174[4];          /** \brief 174 */
    Ifx_VADC_G_VFR VFR;                     /** \brief 178, Valid Flag Register, Group  */
    unsigned char reserved_17C[4];          /** \brief 17C */
    Ifx_VADC_CHCTR CHCTR[8];                /** \brief 180, Group, Channel Control Register */
    unsigned char reserved_1A0[96];         /** \brief 1A0 */
    Ifx_VADC_RCR RCR[16];                   /** \brief 200, Group Result Control Register */
    unsigned char reserved_240[64];         /** \brief 240 */
    Ifx_VADC_RES RES[16];                   /** \brief 280, Group Result Register */
    unsigned char reserved_2C0[64];         /** \brief 2C0 */
    Ifx_VADC_RESD RESD[16];                 /** \brief 300, Group Result Reg., Debug */
    unsigned char reserved_340[192];        /** \brief 340 */
} Ifx_VADC_G;

/** Group objects */
typedef volatile struct
{
    Ifx_VADC_G14_ARBCFG ARBCFG;             /** \brief 0, Arbitration Configuration Register, Group  */
    Ifx_VADC_G14_ARBPR ARBPR;               /** \brief 4, Arbitration Priority Register, Group  */
    Ifx_VADC_G14_CHASS CHASS;               /** \brief 8, Channel Assignment Register, Group  */
    unsigned char reserved_C[20];           /** \brief C */
    Ifx_VADC_ICLASS ICLASS[2];              /** \brief 20, Input Class Register */
    unsigned char reserved_28[8];           /** \brief 28 */
    Ifx_VADC_G14_ALIAS ALIAS;               /** \brief 30, Alias Register, Group  */
    unsigned char reserved_34[4];           /** \brief 34 */
    Ifx_VADC_G14_BOUND BOUND;               /** \brief 38, Boundary Select Register, Group  */
    unsigned char reserved_3C[4];           /** \brief 3C */
    Ifx_VADC_G14_SYNCTR SYNCTR;             /** \brief 40, Synchronization Control Register, Group  */
    unsigned char reserved_44[4];           /** \brief 44 */
    Ifx_VADC_G14_BFL BFL;                   /** \brief 48, Boundary Flag Register, Group  */
    unsigned char reserved_4C[52];          /** \brief 4C */
    Ifx_VADC_G14_QCTRL0 QCTRL0;             /** \brief 80, Queue 0 Source Control Register, Group  */
    Ifx_VADC_G14_QMR0 QMR0;                 /** \brief 84, Queue 0 Mode Register, Group  */
    Ifx_VADC_G14_QSR0 QSR0;                 /** \brief 88, Queue 0 Status Register, Group  */
    Ifx_VADC_G14_Q0R0 Q0R0;                 /** \brief 8C, Queue 0 Register 0, Group  */
    Ifx_VADC_G14_QINR0 QINR0;               /** \brief 90, Queue 0 Input Register, Group  */
    unsigned char reserved_94[12];          /** \brief 94 */
    Ifx_VADC_G14_ASCTRL ASCTRL;             /** \brief A0, Autoscan Source Control Register, Group  */
    Ifx_VADC_G14_ASMR ASMR;                 /** \brief A4, Autoscan Source Mode Register, Group  */
    Ifx_VADC_G14_ASSEL ASSEL;               /** \brief A8, Autoscan Source Channel Select Register, Group  */
    Ifx_VADC_G14_ASPND ASPND;               /** \brief AC, Autoscan Source Pending Register, Group  */
    unsigned char reserved_B0[80];          /** \brief B0 */
    Ifx_VADC_G14_CEFLAG CEFLAG;             /** \brief 100, Channel Event Flag Register, Group  */
    Ifx_VADC_G14_REFLAG REFLAG;             /** \brief 104, Result Event Flag Register, Group  */
    Ifx_VADC_G14_SEFLAG SEFLAG;             /** \brief 108, Source Event Flag Register, Group  */
    unsigned char reserved_10C[4];          /** \brief 10C */
    Ifx_VADC_G14_CEFCLR CEFCLR;             /** \brief 110, Channel Event Flag Clear Register, Group  */
    Ifx_VADC_G14_REFCLR REFCLR;             /** \brief 114, Result Event Flag Clear Register, Group  */
    Ifx_VADC_G14_SEFCLR SEFCLR;             /** \brief 118, Source Event Flag Clear Register, Group  */
    unsigned char reserved_11C[4];          /** \brief 11C */
    Ifx_VADC_G14_CEVNP0 CEVNP0;             /** \brief 120, Channel Event Node Pointer Register 0, Group  */
    Ifx_VADC_G14_CEVNP1 CEVNP1;             /** \brief 124, Channel Event Node Pointer Register 1, Group  */
    Ifx_VADC_G14_CEVNP2 CEVNP2;             /** \brief 128, Channel Event Node Pointer Register 2, Group  */
    unsigned char reserved_12C[4];          /** \brief 12C */
    Ifx_VADC_G14_REVNP0 REVNP0;             /** \brief 130, Result Event Node Pointer Register 0, Group  */
    Ifx_VADC_G14_REVNP1 REVNP1;             /** \brief 134, Result Event Node Pointer Register 1, Group  */
    unsigned char reserved_138[8];          /** \brief 138 */
    Ifx_VADC_G14_SEVNP SEVNP;               /** \brief 140, Source Event Node Pointer Register, Group  */
    unsigned char reserved_144[4];          /** \brief 144 */
    Ifx_VADC_G14_SRACT SRACT;               /** \brief 148, Service Request Software Activation Trigger, Group  */
    unsigned char reserved_14C[36];         /** \brief 14C */
    Ifx_VADC_G14_EMUXCTR EMUXCTR;           /** \brief 170, External Multiplexer Control Register, Group  */
    unsigned char reserved_174[4];          /** \brief 174 */
    Ifx_VADC_G14_VFR VFR;                   /** \brief 178, Valid Flag Register, Group  */
    unsigned char reserved_17C[4];          /** \brief 17C */
    Ifx_VADC_CHCTR CHCTR[21];               /** \brief 180, Group, Channel Control Register */
    unsigned char reserved_1D4[44];         /** \brief 1D4 */
    Ifx_VADC_RCR RCR[16];                   /** \brief 200, Group Result Control Register */
    unsigned char reserved_240[64];         /** \brief 240 */
    Ifx_VADC_RES RES[16];                   /** \brief 280, Group Result Register */
    unsigned char reserved_2C0[64];         /** \brief 2C0 */
    Ifx_VADC_RESD RESD[16];                 /** \brief 300, Group Result Reg., Debug */
} Ifx_VADC_G14;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** VADC object */
typedef volatile struct
{
    Ifx_CLC2 CLC;                           /** \brief 0, Clock Control Register */
    unsigned char reserved_4[4];            /** \brief 4 */
    Ifx_ID1 ID;                             /** \brief 8, Module Identification Register */
    unsigned char reserved_C[28];           /** \brief C */
    Ifx_VADC_OCS OCS;                       /** \brief 28, OCDS Control and Status Register */
    Ifx_VADC_KRSTCLR KRSTCLR;               /** \brief 2C, Kernel Reset Status Clear Register */
    Ifx_VADC_KRST1 KRST1;                   /** \brief 30, Kernel Reset Register 1 */
    Ifx_VADC_KRST0 KRST0;                   /** \brief 34, Kernel Reset Register 0 */
    unsigned char reserved_38[4];           /** \brief 38 */
    Ifx_VADC_ACCEN0 ACCEN0;                 /** \brief 3C, Access Enable Register 0 */
    unsigned char reserved_40[64];          /** \brief 40 */
    Ifx_VADC_GLOBCFG GLOBCFG;               /** \brief 80, Global Configuration Register */
    unsigned char reserved_84[4];           /** \brief 84 */
    Ifx_VADC_ACCPROT ACCPROT;               /** \brief 88, Access Protection Register */
    unsigned char reserved_8C[20];          /** \brief 8C */
    Ifx_VADC_ICLASS GLOBICLASS[2];          /** \brief A0, Input Class Register */
    unsigned char reserved_A8[16];          /** \brief A8 */
    Ifx_VADC_GLOBBOUND GLOBBOUND;           /** \brief B8, Global Boundary Select Register */
    unsigned char reserved_BC[36];          /** \brief BC */
    Ifx_VADC_GLOBEFLAG GLOBEFLAG;           /** \brief E0, Global Event Flag Register */
    unsigned char reserved_E4[92];          /** \brief E4 */
    Ifx_VADC_GLOBEVNP GLOBEVNP;             /** \brief 140, Global Event Node Pointer Register */
    unsigned char reserved_144[28];         /** \brief 144 */
    Ifx_VADC_GLOBTF GLOBTF;                 /** \brief 160, Global Test Functions Register */
    unsigned char reserved_164[28];         /** \brief 164 */
    Ifx_VADC_BRSSEL BRSSEL[8];              /** \brief 180, Background Request Source Channel Select Register, Group */
    unsigned char reserved_1A0[24];         /** \brief 1A0 */
    Ifx_VADC_BRSSEL BRSSEL14;               /** \brief 1B8, Background Request Source Channel Select Register, Group 14 */
    unsigned char reserved_1BC[4];          /** \brief 1BC */
    Ifx_VADC_BRSPND BRSPND[8];              /** \brief 1C0, Background Request Source Pending Register, Group */
    unsigned char reserved_1E0[24];         /** \brief 1E0 */
    Ifx_VADC_BRSPND BRSPND14;               /** \brief 1F8, Background Request Source Pending Register, Group 14 */
    unsigned char reserved_1FC[4];          /** \brief 1FC */
    Ifx_VADC_BRSCTRL BRSCTRL;               /** \brief 200, Background Request Source Control Register */
    Ifx_VADC_BRSMR BRSMR;                   /** \brief 204, Background Request Source Mode Register */
    unsigned char reserved_208[120];        /** \brief 208 */
    Ifx_VADC_GLOBRCR GLOBRCR;               /** \brief 280, Global Result Control Register */
    unsigned char reserved_284[124];        /** \brief 284 */
    Ifx_VADC_GLOBRES GLOBRES;               /** \brief 300, Global Result Register */
    unsigned char reserved_304[124];        /** \brief 304 */
    Ifx_VADC_GLOBRESD GLOBRESD;             /** \brief 380, Global Result Register, Debug */
    unsigned char reserved_384[108];        /** \brief 384 */
    Ifx_VADC_EMUXSEL EMUXSEL;               /** \brief 3F0, External Multiplexer Select Register */
    unsigned char reserved_3F4[140];        /** \brief 3F4 */
    Ifx_VADC_G G[8];                        /** \brief 480, Group objects */
    unsigned char reserved_2480[6144];      /** \brief 2480 */
    Ifx_VADC_G14 G14;                       /** \brief 3C80, Group objects */
    unsigned char reserved_3FC0[64];        /** \brief 3FC0 */
} Ifx_VADC;
/******************************************************************************/
#endif /* IFXVADC_REGDEF_H */

