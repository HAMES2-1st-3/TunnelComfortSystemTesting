/**
 * \file IfxSbcu_regdef.h
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
#ifndef IFXSBCU_REGDEF_H
#define IFXSBCU_REGDEF_H
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
} Ifx_SBCU_ACCEN0_Bits;

/** Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_SBCU_ACCEN1_Bits;

/** SBCU Control Register */
typedef struct
{
    unsigned int TOUT: 16;                  /** \brief [15:0] SBCU Bus Time-Out Value (rw) */
    unsigned int DBG: 1;                    /** \brief [16:16] SBCU Debug Trace Enable (rw) */
    unsigned int reserved_17: 7;
    unsigned int SPC: 8;                    /** \brief [31:24] Starvation Period Control (rw) */
} Ifx_SBCU_CON_Bits;

/** SBCU Debug Address 1 Register */
typedef struct
{
    unsigned int ADR1: 32;                  /** \brief [31:0] Debug Trigger Address 1 (rw) */
} Ifx_SBCU_DBADR1_Bits;

/** SBCU Debug Address 2 Register */
typedef struct
{
    unsigned int ADR2: 32;                  /** \brief [31:0] Debug Trigger Address 2 (rw) */
} Ifx_SBCU_DBADR2_Bits;

/** SBCU Debug Trapped Address Register */
typedef struct
{
    unsigned int FPIADR: 32;                /** \brief [31:0] FPIBus Address Status (rh) */
} Ifx_SBCU_DBADRT_Bits;

/** SBCU Debug Bus Operation Signals Register */
typedef struct
{
    unsigned int OPC: 4;                    /** \brief [3:0] Opcode for Signal Status Debug Trigger (rw) */
    unsigned int SVM: 1;                    /** \brief [4:4] SVM Signal for Status Debug Trigger (rw) */
    unsigned int reserved_5: 3;
    unsigned int WR: 1;                     /** \brief [8:8] Write Signal for Status Debug Trigger (rw) */
    unsigned int reserved_9: 3;
    unsigned int RD: 1;                     /** \brief [12:12] Write Signal for Status Debug Trigger (rw) */
    unsigned int reserved_13: 19;
} Ifx_SBCU_DBBOS_Bits;

/** SBCU Debug Trapped Bus Operation Signals Register */
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
} Ifx_SBCU_DBBOST_Bits;

/** SBCU Debug Control Register */
typedef struct
{
    unsigned int EO: 1;                     /** \brief [0:0] Status of SBCU Debug Support Enable (r) */
    unsigned int OA: 1;                     /** \brief [1:1] Status of SBCU Breakpoint Logic (r) */
    unsigned int reserved_2: 2;
    unsigned int RA: 1;                     /** \brief [4:4] Rearm SBCU Breakpoint Logic (w) */
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
} Ifx_SBCU_DBCNTL_Bits;

/** SBCU Debug Data Status Register */
typedef struct
{
    unsigned int FPIDATA: 32;               /** \brief [31:0] FPIBus Data Status (rh) */
} Ifx_SBCU_DBDAT_Bits;

/** SBCU Debug Trapped Master Register */
typedef struct
{
    unsigned int SDMAH: 1;                  /** \brief [0:0] High-Priority SDMA FPIBus Master StatusIncluding SDMA transactions from SDMA channels with high priority and from Cerberus with high priority. (rw) */
    unsigned int reserved_1: 1;
    unsigned int ETH: 1;                    /** \brief [2:2] Ethernet FPIBus Master Status (rw) */
    unsigned int reserved_3: 1;
    unsigned int DMA: 1;                    /** \brief [4:4] DMA FPIBus Master Status (rw) */
    unsigned int SDMAM: 1;                  /** \brief [5:5] Medium-Priority SDMA FPIBus Master StatusIncluding DMA transactions from DMA channels with medium priority. (rw) */
    unsigned int reserved_6: 2;
    unsigned int CPU0: 1;                   /** \brief [8:8] CPU0 FPIBus Master Status (rw) */
    unsigned int CPU1: 1;                   /** \brief [9:9] CPU1 FPIBus Master Status (rw) */
    unsigned int SFI: 1;                    /** \brief [10:10] SFI Bridge FPIBus Master Status (rw) */
    unsigned int reserved_11: 1;
    unsigned int HSMRMI: 1;                 /** \brief [12:12] HSM Register FPIBus Master Interface Status (rw) */
    unsigned int HSMCMI: 1;                 /** \brief [13:13] HSM Cache FPIBus Master Interface Status (rw) */
    unsigned int reserved_14: 1;
    unsigned int SDMAL: 1;                  /** \brief [15:15] Low-Priority SDMA FPIBus Master StatusIncluding DMA transactions from DMA channels with low priority, MLI and from Cerberus with low priority. (rw) */
    unsigned int SDMACHNR: 8;               /** \brief [23:16] SDMA-FPI Channel Grant Status (rw) */
    unsigned int DMACHNR: 8;                /** \brief [31:24] DMA-FPI Channel Grant Status (rw) */
} Ifx_SBCU_DBGNTT_Bits;

/** SBCU Debug Grant Mask Register */
typedef struct
{
    unsigned int SDMAH: 1;                  /** \brief [0:0] Cerberus Grant Trigger Enable, High PriorityIncluding SDMA transactions from SDMA channels with high priority and from Cerberus with high priority. (rw) */
    unsigned int reserved_1: 1;
    unsigned int ETH: 1;                    /** \brief [2:2] Ethernet Trigger Enable, High PriorityIncluding SDMA transactions from SDMA channels with high priority and from Cerberus with high priority. (rw) */
    unsigned int reserved_3: 1;
    unsigned int DMA: 1;                    /** \brief [4:4] DMA Grant Trigger Enable (rw) */
    unsigned int SDMAM: 1;                  /** \brief [5:5] SDMA Grant Trigger Enable, Medium PriorityIncluding SDMA transactions from SDMA channels with medium priority. (rw) */
    unsigned int reserved_6: 2;
    unsigned int CPU0: 1;                   /** \brief [8:8] CPU0 Grant Trigger Enable (rw) */
    unsigned int CPU1: 1;                   /** \brief [9:9] CPU1 Grant Trigger Enable (rw) */
    unsigned int SFI: 1;                    /** \brief [10:10] SFI Bridge Grant Trigger Enable (rw) */
    unsigned int reserved_11: 1;
    unsigned int HSMRMI: 1;                 /** \brief [12:12] HSM Register Master Interface Grant Trigger Enable (rw) */
    unsigned int HSMCMI: 1;                 /** \brief [13:13] HSM Cache Master Interface Grant Trigger Enable (rw) */
    unsigned int reserved_14: 1;
    unsigned int SDMAL: 1;                  /** \brief [15:15] DMA Grant Trigger Enable, Low PriorityIncluding SDMA transactions from SDMA channels with low priority, MLI and from Cerberus with low priority. (rw) */
    unsigned int reserved_16: 16;
} Ifx_SBCU_DBGRNT_Bits;

/** SBCU Error Address Capture Register */
typedef struct
{
    unsigned int FPIADR: 32;                /** \brief [31:0] Captured FPIBus Address (rwh) */
} Ifx_SBCU_EADD_Bits;

/** SBCU Error Control Capture Register */
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
} Ifx_SBCU_ECON_Bits;

/** SBCU Error Data Capture Register */
typedef struct
{
    unsigned int FPIDAT: 32;                /** \brief [31:0] Captured FPIBus Data (rwh) */
} Ifx_SBCU_EDAT_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int CPU0: 4;                   /** \brief [3:0] Master 8 Priority (rw) */
    unsigned int CPU1: 4;                   /** \brief [7:4] Master 9 Priority (rw) */
    unsigned int SFI: 4;                    /** \brief [11:8] Master 10 Priority (rw) */
    unsigned int reserved_12: 4;
    unsigned int HSMRMI: 4;                 /** \brief [19:16] Master 12 Priority (rw) */
    unsigned int HSMCMI: 4;                 /** \brief [23:20] Master 13 Priority (rw) */
    unsigned int reserved_24: 4;
    unsigned int SDMAL: 4;                  /** \brief [31:28] Master 15 Priority (rw) */
} Ifx_SBCU_PRIOH_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int SDMAH: 4;                  /** \brief [3:0] Master 0 Priority (rw) */
    unsigned int reserved_4: 4;
    unsigned int ETH: 4;                    /** \brief [11:8] Master 2 Priority (rw) */
    unsigned int reserved_12: 4;
    unsigned int DMA: 4;                    /** \brief [19:16] Master 4 Priority (rw) */
    unsigned int SDMAM: 4;                  /** \brief [23:20] Master 5 Priority (rw) */
    unsigned int reserved_24: 8;
} Ifx_SBCU_PRIOL_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_ACCEN0_Bits B;
} Ifx_SBCU_ACCEN0;

/** Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_ACCEN1_Bits B;
} Ifx_SBCU_ACCEN1;

/** SBCU Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_CON_Bits B;
} Ifx_SBCU_CON;

/** SBCU Debug Address 1 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_DBADR1_Bits B;
} Ifx_SBCU_DBADR1;

/** SBCU Debug Address 2 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_DBADR2_Bits B;
} Ifx_SBCU_DBADR2;

/** SBCU Debug Trapped Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_DBADRT_Bits B;
} Ifx_SBCU_DBADRT;

/** SBCU Debug Bus Operation Signals Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_DBBOS_Bits B;
} Ifx_SBCU_DBBOS;

/** SBCU Debug Trapped Bus Operation Signals Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_DBBOST_Bits B;
} Ifx_SBCU_DBBOST;

/** SBCU Debug Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_DBCNTL_Bits B;
} Ifx_SBCU_DBCNTL;

/** SBCU Debug Data Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_DBDAT_Bits B;
} Ifx_SBCU_DBDAT;

/** SBCU Debug Trapped Master Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_DBGNTT_Bits B;
} Ifx_SBCU_DBGNTT;

/** SBCU Debug Grant Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_DBGRNT_Bits B;
} Ifx_SBCU_DBGRNT;

/** SBCU Error Address Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_EADD_Bits B;
} Ifx_SBCU_EADD;

/** SBCU Error Control Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_ECON_Bits B;
} Ifx_SBCU_ECON;

/** SBCU Error Data Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_EDAT_Bits B;
} Ifx_SBCU_EDAT;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_PRIOH_Bits B;
} Ifx_SBCU_PRIOH;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SBCU_PRIOL_Bits B;
} Ifx_SBCU_PRIOL;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** SBCU object */
typedef volatile struct
{
    unsigned char reserved_0[8];            /** \brief 0 */
    Ifx_ID2 ID;                             /** \brief 8, Module Identification Register */
    unsigned char reserved_C[4];            /** \brief C */
    Ifx_SBCU_CON CON;                       /** \brief 10, SBCU Control Register */
    Ifx_SBCU_PRIOH PRIOH;                   /** \brief 14, Arbiter Priority Register */
    Ifx_SBCU_PRIOL PRIOL;                   /** \brief 18, Arbiter Priority Register */
    unsigned char reserved_1C[4];           /** \brief 1C */
    Ifx_SBCU_ECON ECON;                     /** \brief 20, SBCU Error Control Capture Register */
    Ifx_SBCU_EADD EADD;                     /** \brief 24, SBCU Error Address Capture Register */
    Ifx_SBCU_EDAT EDAT;                     /** \brief 28, SBCU Error Data Capture Register */
    unsigned char reserved_2C[4];           /** \brief 2C */
    Ifx_SBCU_DBCNTL DBCNTL;                 /** \brief 30, SBCU Debug Control Register */
    Ifx_SBCU_DBGRNT DBGRNT;                 /** \brief 34, SBCU Debug Grant Mask Register */
    Ifx_SBCU_DBADR1 DBADR1;                 /** \brief 38, SBCU Debug Address 1 Register */
    Ifx_SBCU_DBADR2 DBADR2;                 /** \brief 3C, SBCU Debug Address 2 Register */
    Ifx_SBCU_DBBOS DBBOS;                   /** \brief 40, SBCU Debug Bus Operation Signals Register */
    Ifx_SBCU_DBGNTT DBGNTT;                 /** \brief 44, SBCU Debug Trapped Master Register */
    Ifx_SBCU_DBADRT DBADRT;                 /** \brief 48, SBCU Debug Trapped Address Register */
    Ifx_SBCU_DBBOST DBBOST;                 /** \brief 4C, SBCU Debug Trapped Bus Operation Signals Register */
    Ifx_SBCU_DBDAT DBDAT;                   /** \brief 50, SBCU Debug Data Status Register */
    unsigned char reserved_54[164];         /** \brief 54 */
    Ifx_SBCU_ACCEN1 ACCEN1;                 /** \brief F8, Access Enable Register 1 */
    Ifx_SBCU_ACCEN0 ACCEN0;                 /** \brief FC, Access Enable Register 0 */
} Ifx_SBCU;
/******************************************************************************/
#endif /* IFXSBCU_REGDEF_H */

