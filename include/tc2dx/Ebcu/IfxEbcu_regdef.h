/**
 * \file IfxEbcu_regdef.h
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
#ifndef IFXEBCU_REGDEF_H
#define IFXEBCU_REGDEF_H
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
} Ifx_EBCU_ACCEN0_Bits;

/** Access Enable Register 1 */
typedef struct
{
    unsigned int EN32: 1;                   /** \brief [0:0] Access Enable for Master TAG ID x (r) */
    unsigned int EN33: 1;                   /** \brief [1:1] Access Enable for Master TAG ID x (r) */
    unsigned int EN34: 1;                   /** \brief [2:2] Access Enable for Master TAG ID x (r) */
    unsigned int EN35: 1;                   /** \brief [3:3] Access Enable for Master TAG ID x (r) */
    unsigned int EN36: 1;                   /** \brief [4:4] Access Enable for Master TAG ID x (r) */
    unsigned int EN37: 1;                   /** \brief [5:5] Access Enable for Master TAG ID x (r) */
    unsigned int EN38: 1;                   /** \brief [6:6] Access Enable for Master TAG ID x (r) */
    unsigned int EN39: 1;                   /** \brief [7:7] Access Enable for Master TAG ID x (r) */
    unsigned int EN40: 1;                   /** \brief [8:8] Access Enable for Master TAG ID x (r) */
    unsigned int EN41: 1;                   /** \brief [9:9] Access Enable for Master TAG ID x (r) */
    unsigned int EN42: 1;                   /** \brief [10:10] Access Enable for Master TAG ID x (r) */
    unsigned int EN43: 1;                   /** \brief [11:11] Access Enable for Master TAG ID x (r) */
    unsigned int EN44: 1;                   /** \brief [12:12] Access Enable for Master TAG ID x (r) */
    unsigned int EN45: 1;                   /** \brief [13:13] Access Enable for Master TAG ID x (r) */
    unsigned int EN46: 1;                   /** \brief [14:14] Access Enable for Master TAG ID x (r) */
    unsigned int EN47: 1;                   /** \brief [15:15] Access Enable for Master TAG ID x (r) */
    unsigned int EN48: 1;                   /** \brief [16:16] Access Enable for Master TAG ID x (r) */
    unsigned int EN49: 1;                   /** \brief [17:17] Access Enable for Master TAG ID x (r) */
    unsigned int EN50: 1;                   /** \brief [18:18] Access Enable for Master TAG ID x (r) */
    unsigned int EN51: 1;                   /** \brief [19:19] Access Enable for Master TAG ID x (r) */
    unsigned int EN52: 1;                   /** \brief [20:20] Access Enable for Master TAG ID x (r) */
    unsigned int EN53: 1;                   /** \brief [21:21] Access Enable for Master TAG ID x (r) */
    unsigned int EN54: 1;                   /** \brief [22:22] Access Enable for Master TAG ID x (r) */
    unsigned int EN55: 1;                   /** \brief [23:23] Access Enable for Master TAG ID x (r) */
    unsigned int EN56: 1;                   /** \brief [24:24] Access Enable for Master TAG ID x (r) */
    unsigned int EN57: 1;                   /** \brief [25:25] Access Enable for Master TAG ID x (r) */
    unsigned int EN58: 1;                   /** \brief [26:26] Access Enable for Master TAG ID x (r) */
    unsigned int EN59: 1;                   /** \brief [27:27] Access Enable for Master TAG ID x (r) */
    unsigned int EN60: 1;                   /** \brief [28:28] Access Enable for Master TAG ID x (r) */
    unsigned int EN61: 1;                   /** \brief [29:29] Access Enable for Master TAG ID x (r) */
    unsigned int EN62: 1;                   /** \brief [30:30] Access Enable for Master TAG ID x (r) */
    unsigned int EN63: 1;                   /** \brief [31:31] Access Enable for Master TAG ID x (r) */
} Ifx_EBCU_ACCEN1_Bits;

/** EBCU Control Register */
typedef struct
{
    unsigned int TOUT: 16;                  /** \brief [15:0] Bus Time-Out Value (rw) */
    unsigned int DBG: 1;                    /** \brief [16:16] Debug Trace Enable (rw) */
    unsigned int reserved_17: 2;
    unsigned int SPE: 1;                    /** \brief [19:19] Starvation Protection Enable (rw) */
    unsigned int reserved_20: 4;
    unsigned int SPC: 8;                    /** \brief [31:24] Starvation Period Control (rw) */
} Ifx_EBCU_CON_Bits;

/** Debug Address 1 Register */
typedef struct
{
    unsigned int ADR1: 32;                  /** \brief [31:0] Debug Trigger Address 1 (rw) */
} Ifx_EBCU_DBADR1_Bits;

/** Debug Address 2 Register */
typedef struct
{
    unsigned int ADR2: 32;                  /** \brief [31:0] Debug Trigger Address 2 (rw) */
} Ifx_EBCU_DBADR2_Bits;

/** Debug Trapped Address Register */
typedef struct
{
    unsigned int FPIADR: 32;                /** \brief [31:0] FPIBus Address Status (rh) */
} Ifx_EBCU_DBADRT_Bits;

/** Debug Bus Operation Signals Register */
typedef struct
{
    unsigned int OPC: 4;                    /** \brief [3:0] Opcode for Signal Status Debug Trigger (rw) */
    unsigned int SVM: 1;                    /** \brief [4:4] SVM Signal for Status Debug Trigger (rw) */
    unsigned int reserved_5: 3;
    unsigned int WR: 1;                     /** \brief [8:8] Write Signal for Status Debug Trigger (rw) */
    unsigned int reserved_9: 3;
    unsigned int RD: 1;                     /** \brief [12:12] Write Signal for Status Debug Trigger (rw) */
    unsigned int reserved_13: 19;
} Ifx_EBCU_DBBOS_Bits;

/** Debug Trapped Bus Operation Signals Register */
typedef struct
{
    unsigned int FPIOPC: 4;                 /** \brief [3:0] FPIBus Opcode Status (rh) */
    unsigned int FPISVM: 1;                 /** \brief [4:4] FPIBus Supervisor Mode Status (rh) */
    unsigned int FPIACK: 2;                 /** \brief [6:5] FPIBus Acknowledge Status (rh) */
    unsigned int FPIRDY: 1;                 /** \brief [7:7] FPIBus Ready Status (rh) */
    unsigned int FPIWR: 1;                  /** \brief [8:8] FPIBus Write Indication Status (rh) */
    unsigned int FPIRST: 2;                 /** \brief [10:9] FPIBus Reset Status (rh) */
    unsigned int FPIOPS: 1;                 /** \brief [11:11] FPIBus OCDS Suspend Status (rh) */
    unsigned int FPIRD: 1;                  /** \brief [12:12] FPIBus Read Indication Status (rh) */
    unsigned int FPIABORT: 1;               /** \brief [13:13] FPIBus Abort Status (rh) */
    unsigned int FPITOUT: 1;                /** \brief [14:14] FPIBus Time-out Status (rh) */
    unsigned int reserved_15: 1;
    unsigned int FPITAG: 6;                 /** \brief [21:16] FPIBus Master TAG Status (rh) */
    unsigned int reserved_22: 10;
} Ifx_EBCU_DBBOST_Bits;

/** Debug Control Register */
typedef struct
{
    unsigned int EO: 1;                     /** \brief [0:0] Status of Debug Support Enable (r) */
    unsigned int OA: 1;                     /** \brief [1:1] Status of Breakpoint Logic (r) */
    unsigned int reserved_2: 2;
    unsigned int RA: 1;                     /** \brief [4:4] Rearm Breakpoint Logic (w) */
    unsigned int reserved_5: 7;
    unsigned int CONCOM0: 1;                /** \brief [12:12] Grant and Address Trigger Relation (rw) */
    unsigned int CONCOM1: 1;                /** \brief [13:13] Address 1 and Address 2 Trigger Relation (rw) */
    unsigned int CONCOM2: 1;                /** \brief [14:14] Address and Signal Trigger Relation (rw) */
    unsigned int reserved_15: 1;
    unsigned int ONG: 1;                    /** \brief [16:16] Grant Trigger Enable (rw) */
    unsigned int reserved_17: 3;
    unsigned int ONA1: 2;                   /** \brief [21:20] Address 1 Trigger Control (rw) */
    unsigned int reserved_22: 2;
    unsigned int ONA2: 2;                   /** \brief [25:24] Address 2 Trigger Control (rw) */
    unsigned int reserved_26: 2;
    unsigned int ONBOS0: 1;                 /** \brief [28:28] Opcode Signal Status Trigger Condition (rw) */
    unsigned int ONBOS1: 1;                 /** \brief [29:29] Supervisor Mode Signal Trigger Condition (rw) */
    unsigned int ONBOS2: 1;                 /** \brief [30:30] Write Signal Trigger Condition (rw) */
    unsigned int ONBOS3: 1;                 /** \brief [31:31] Read Signal Trigger Condition (rw) */
} Ifx_EBCU_DBCNTL_Bits;

/** Debug Data Status Register */
typedef struct
{
    unsigned int FPIDATA: 32;               /** \brief [31:0] FPIBus Data Status (rh) */
} Ifx_EBCU_DBDAT_Bits;

/** Debug Trapped Master Register */
typedef struct
{
    unsigned int FPIGNT0: 1;                /** \brief [0:0] Master x Grant Status (rw) */
    unsigned int FPIGNT1: 1;                /** \brief [1:1] Master x Grant Status (rw) */
    unsigned int FPIGNT2: 1;                /** \brief [2:2] Master x Grant Status (rw) */
    unsigned int FPIGNT3: 1;                /** \brief [3:3] Master x Grant Status (rw) */
    unsigned int FPIGNT4: 1;                /** \brief [4:4] Master x Grant Status (rw) */
    unsigned int FPIGNT5: 1;                /** \brief [5:5] Master x Grant Status (rw) */
    unsigned int FPIGNT6: 1;                /** \brief [6:6] Master x Grant Status (rw) */
    unsigned int FPIGNT7: 1;                /** \brief [7:7] Master x Grant Status (rw) */
    unsigned int FPIGNT8: 1;                /** \brief [8:8] Master x Grant Status (rw) */
    unsigned int FPIGNT9: 1;                /** \brief [9:9] Master x Grant Status (rw) */
    unsigned int FPIGNT10: 1;               /** \brief [10:10] Master x Grant Status (rw) */
    unsigned int FPIGNT11: 1;               /** \brief [11:11] Master x Grant Status (rw) */
    unsigned int FPIGNT12: 1;               /** \brief [12:12] Master x Grant Status (rw) */
    unsigned int FPIGNT13: 1;               /** \brief [13:13] Master x Grant Status (rw) */
    unsigned int FPIGNT14: 1;               /** \brief [14:14] Master x Grant Status (rw) */
    unsigned int FPIGNT15: 1;               /** \brief [15:15] Master x Grant Status (rw) */
    unsigned int reserved_16: 16;
} Ifx_EBCU_DBGNTT_Bits;

/** Debug Grant Mask Register */
typedef struct
{
    unsigned int FPIGNT0: 1;                /** \brief [0:0] Master x Grant Status (rw) */
    unsigned int FPIGNT1: 1;                /** \brief [1:1] Master x Grant Status (rw) */
    unsigned int FPIGNT2: 1;                /** \brief [2:2] Master x Grant Status (rw) */
    unsigned int FPIGNT3: 1;                /** \brief [3:3] Master x Grant Status (rw) */
    unsigned int FPIGNT4: 1;                /** \brief [4:4] Master x Grant Status (rw) */
    unsigned int FPIGNT5: 1;                /** \brief [5:5] Master x Grant Status (rw) */
    unsigned int FPIGNT6: 1;                /** \brief [6:6] Master x Grant Status (rw) */
    unsigned int FPIGNT7: 1;                /** \brief [7:7] Master x Grant Status (rw) */
    unsigned int FPIGNT8: 1;                /** \brief [8:8] Master x Grant Status (rw) */
    unsigned int FPIGNT9: 1;                /** \brief [9:9] Master x Grant Status (rw) */
    unsigned int FPIGNT10: 1;               /** \brief [10:10] Master x Grant Status (rw) */
    unsigned int FPIGNT11: 1;               /** \brief [11:11] Master x Grant Status (rw) */
    unsigned int FPIGNT12: 1;               /** \brief [12:12] Master x Grant Status (rw) */
    unsigned int FPIGNT13: 1;               /** \brief [13:13] Master x Grant Status (rw) */
    unsigned int FPIGNT14: 1;               /** \brief [14:14] Master x Grant Status (rw) */
    unsigned int FPIGNT15: 1;               /** \brief [15:15] Master x Grant Status (rw) */
    unsigned int reserved_16: 16;
} Ifx_EBCU_DBGRNT_Bits;

/** Error Address Capture Register */
typedef struct
{
    unsigned int FPIADR: 32;                /** \brief [31:0] Captured FPIBus Address (rwh) */
} Ifx_EBCU_EADD_Bits;

/** Error Control Capture Register */
typedef struct
{
    unsigned int ERRCNT: 14;                /** \brief [13:0] FPIBus Error Counter (rwh) */
    unsigned int TOUT: 1;                   /** \brief [14:14] State of FPIBus Time-Out Signal (rwh) */
    unsigned int RDY: 1;                    /** \brief [15:15] State of FPIBus Ready Signal (rwh) */
    unsigned int ABT: 1;                    /** \brief [16:16] State of FPI Bus Abort Signal (rwh) */
    unsigned int ACK: 2;                    /** \brief [18:17] State of FPIBus Acknowledge Signals (rwh) */
    unsigned int SVM: 1;                    /** \brief [19:19] State of FPIBus Supervisor Mode Signal (rwh) */
    unsigned int WRN: 1;                    /** \brief [20:20] State of FPIBus Write Signal (rwh) */
    unsigned int RDN: 1;                    /** \brief [21:21] State of FPIBus Read Signal (rwh) */
    unsigned int TAG: 6;                    /** \brief [27:22] FPIBus Master Tag Number Signals (rwh) */
    unsigned int OPC: 4;                    /** \brief [31:28] FPIBus Operation Code Signals (rwh) */
} Ifx_EBCU_ECON_Bits;

/** Error Data Capture Register */
typedef struct
{
    unsigned int FPIDAT: 32;                /** \brief [31:0] Captured FPIBus Address (rwh) */
} Ifx_EBCU_EDAT_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER8: 4;                /** \brief [3:0] Master x Priority (rw) */
    unsigned int MASTER9: 4;                /** \brief [7:4] Master x Priority (rw) */
    unsigned int MASTER10: 4;               /** \brief [11:8] Master x Priority (rw) */
    unsigned int MASTER11: 4;               /** \brief [15:12] Master x Priority (rw) */
    unsigned int MASTER12: 4;               /** \brief [19:16] Master x Priority (rw) */
    unsigned int MASTER13: 4;               /** \brief [23:20] Master x Priority (rw) */
    unsigned int MASTER14: 4;               /** \brief [27:24] Master x Priority (rw) */
    unsigned int MASTER15: 4;               /** \brief [31:28] Master x Priority (rw) */
} Ifx_EBCU_PRIOH_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER0: 4;                /** \brief [3:0] Master x Priority (rw) */
    unsigned int MASTER1: 4;                /** \brief [7:4] Master x Priority (rw) */
    unsigned int MASTER2: 4;                /** \brief [11:8] Master x Priority (rw) */
    unsigned int MASTER3: 4;                /** \brief [15:12] Master x Priority (rw) */
    unsigned int MASTER4: 4;                /** \brief [19:16] Master x Priority (rw) */
    unsigned int MASTER5: 4;                /** \brief [23:20] Master x Priority (rw) */
    unsigned int MASTER6: 4;                /** \brief [27:24] Master x Priority (rw) */
    unsigned int MASTER7: 4;                /** \brief [31:28] Master x Priority (rw) */
} Ifx_EBCU_PRIOL_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_ACCEN0_Bits B;
} Ifx_EBCU_ACCEN0;

/** Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_ACCEN1_Bits B;
} Ifx_EBCU_ACCEN1;

/** EBCU Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_CON_Bits B;
} Ifx_EBCU_CON;

/** Debug Address 1 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_DBADR1_Bits B;
} Ifx_EBCU_DBADR1;

/** Debug Address 2 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_DBADR2_Bits B;
} Ifx_EBCU_DBADR2;

/** Debug Trapped Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_DBADRT_Bits B;
} Ifx_EBCU_DBADRT;

/** Debug Bus Operation Signals Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_DBBOS_Bits B;
} Ifx_EBCU_DBBOS;

/** Debug Trapped Bus Operation Signals Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_DBBOST_Bits B;
} Ifx_EBCU_DBBOST;

/** Debug Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_DBCNTL_Bits B;
} Ifx_EBCU_DBCNTL;

/** Debug Data Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_DBDAT_Bits B;
} Ifx_EBCU_DBDAT;

/** Debug Trapped Master Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_DBGNTT_Bits B;
} Ifx_EBCU_DBGNTT;

/** Debug Grant Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_DBGRNT_Bits B;
} Ifx_EBCU_DBGRNT;

/** Error Address Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_EADD_Bits B;
} Ifx_EBCU_EADD;

/** Error Control Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_ECON_Bits B;
} Ifx_EBCU_ECON;

/** Error Data Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_EDAT_Bits B;
} Ifx_EBCU_EDAT;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_PRIOH_Bits B;
} Ifx_EBCU_PRIOH;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_EBCU_PRIOL_Bits B;
} Ifx_EBCU_PRIOL;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** EBCU object */
typedef volatile struct
{
    unsigned char reserved_0[8];            /** \brief 0 */
    Ifx_ID2 ID;                             /** \brief 8, Module Identification Register */
    unsigned char reserved_C[4];            /** \brief C */
    Ifx_EBCU_CON CON;                       /** \brief 10, EBCU Control Register */
    Ifx_EBCU_PRIOH PRIOH;                   /** \brief 14, Arbiter Priority Register */
    Ifx_EBCU_PRIOL PRIOL;                   /** \brief 18, Arbiter Priority Register */
    unsigned char reserved_1C[4];           /** \brief 1C */
    Ifx_EBCU_ECON ECON;                     /** \brief 20, Error Control Capture Register */
    Ifx_EBCU_EADD EADD;                     /** \brief 24, Error Address Capture Register */
    Ifx_EBCU_EDAT EDAT;                     /** \brief 28, Error Data Capture Register */
    unsigned char reserved_2C[4];           /** \brief 2C */
    Ifx_EBCU_DBCNTL DBCNTL;                 /** \brief 30, Debug Control Register */
    Ifx_EBCU_DBGRNT DBGRNT;                 /** \brief 34, Debug Grant Mask Register */
    Ifx_EBCU_DBADR1 DBADR1;                 /** \brief 38, Debug Address 1 Register */
    Ifx_EBCU_DBADR2 DBADR2;                 /** \brief 3C, Debug Address 2 Register */
    Ifx_EBCU_DBBOS DBBOS;                   /** \brief 40, Debug Bus Operation Signals Register */
    Ifx_EBCU_DBGNTT DBGNTT;                 /** \brief 44, Debug Trapped Master Register */
    Ifx_EBCU_DBADRT DBADRT;                 /** \brief 48, Debug Trapped Address Register */
    Ifx_EBCU_DBBOST DBBOST;                 /** \brief 4C, Debug Trapped Bus Operation Signals Register */
    Ifx_EBCU_DBDAT DBDAT;                   /** \brief 50, Debug Data Status Register */
    unsigned char reserved_54[164];         /** \brief 54 */
    Ifx_EBCU_ACCEN1 ACCEN1;                 /** \brief F8, Access Enable Register 1 */
    Ifx_EBCU_ACCEN0 ACCEN0;                 /** \brief FC, Access Enable Register 0 */
} Ifx_EBCU;
/******************************************************************************/
#endif /* IFXEBCU_REGDEF_H */

