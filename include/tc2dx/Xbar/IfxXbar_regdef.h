/**
 * \file IfxXbar_regdef.h
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
#ifndef IFXXBAR_REGDEF_H
#define IFXXBAR_REGDEF_H
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
} Ifx_XBAR_ACCEN0_Bits;

/** Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_XBAR_ACCEN1_Bits;

/** Arbiter Control Register */
typedef struct
{
    unsigned int PRERREN: 1;                /** \brief [0:0] SRI Protocol Error Enable (rw) */
    unsigned int SCERREN: 1;                /** \brief [1:1] SRI Starvation Error Enable (rw) */
    unsigned int SETPRINT: 1;               /** \brief [2:2] Set SRI Protocol Interrupt (rwh) */
    unsigned int SETSCINT: 1;               /** \brief [3:3] Set SRI Starvation Interrupt (rwh) */
    unsigned int INTACK: 1;                 /** \brief [4:4] Interrupt Acknowledge (rwh) */
    unsigned int reserved_5: 15;
    unsigned int SPC: 12;                   /** \brief [31:20] Starvation Protection Counter Reload Value (rw) */
} Ifx_XBAR_ARBITER0_ARBCON_Bits;

/** Debug Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 20;              /** \brief [21:2] Debug Address Boundary (rw) */
    unsigned int reserved_22: 1;
    unsigned int ADDRESS1: 1;               /** \brief [23:23] Debug Address Boundary (rw) */
    unsigned int reserved_24: 3;
    unsigned int ADDRESS2: 3;               /** \brief [29:27] Debug Address Boundary (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER0_DBADD_Bits;

/** Debug Control Register */
typedef struct
{
    unsigned int DBEN: 1;                   /** \brief [0:0] Status of OCDS Enable Signal (r) */
    unsigned int DBSAT: 1;                  /** \brief [1:1] Debug (OCDS) Trigger Status (rh) */
    unsigned int REARM: 1;                  /** \brief [2:2] Rearm Debug (OCDS) Trigger (w) */
    unsigned int SETDBEVT: 1;               /** \brief [3:3] Set Debug Event (w) */
    unsigned int reserved_4: 12;
    unsigned int RDEN: 1;                   /** \brief [16:16] Read Trigger Enable (rw) */
    unsigned int WREN: 1;                   /** \brief [17:17] Write Trigger Enable (rw) */
    unsigned int SVMEN: 1;                  /** \brief [18:18] SVM Trigger Enable (rw) */
    unsigned int ADDEN: 1;                  /** \brief [19:19] Address Trigger Enable (rw) */
    unsigned int ERREN: 1;                  /** \brief [20:20] Error Trigger Enable (rw) */
    unsigned int reserved_21: 2;
    unsigned int MASEN: 1;                  /** \brief [23:23] Master Trigger Enable (rw) */
    unsigned int MASTER: 6;                 /** \brief [29:24] Master TAG ID Trigger Selector (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER0_DBCON_Bits;

/** Debug Mask Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 28;              /** \brief [29:2] Debug Address Boundary (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER0_DBMADD_Bits;

/** Error/Debug Capture Register */
typedef struct
{
    unsigned int RD: 1;                     /** \brief [0:0] Read Indication Status (rh) */
    unsigned int WR: 1;                     /** \brief [1:1] Write Indication Status (rh) */
    unsigned int SVM: 1;                    /** \brief [2:2] Supervisor Mode Indication Status (rh) */
    unsigned int reserved_3: 1;
    unsigned int OPC: 4;                    /** \brief [7:4] Operation Code (rh) */
    unsigned int TR_ID: 8;                  /** \brief [15:8] Transaction ID (rh) */
    unsigned int ADDR_ECC: 8;               /** \brief [23:16] SRI Address Phase Error Detection Information (rh) */
    unsigned int MCI_SBS: 8;                /** \brief [31:24] MCI Sideband Signals [7:0] (rh) */
} Ifx_XBAR_ARBITER0_ERR_Bits;

/** Error/Debug Address Capture Register */
typedef struct
{
    unsigned int ADDR: 32;                  /** \brief [31:0] Transaction Address (rh) */
} Ifx_XBAR_ARBITER0_ERRADDR_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER8: 4;                /** \brief [3:0] Master 8 Priority (rw) */
    unsigned int MASTER9: 4;                /** \brief [7:4] Master 9 Priority (rw) */
    unsigned int MASTER10: 4;               /** \brief [11:8] Master 10 Priority (rw) */
    unsigned int MASTER11: 4;               /** \brief [15:12] Master 11 Priority (rw) */
    unsigned int MASTER12: 4;               /** \brief [19:16] Master 12 Priority (rw) */
    unsigned int reserved_20: 12;
} Ifx_XBAR_ARBITER0_PRIOH_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER0: 4;                /** \brief [3:0] Master 0 Priority (rw) */
    unsigned int MASTER1: 4;                /** \brief [7:4] Master 1 Priority (rw) */
    unsigned int MASTER2: 4;                /** \brief [11:8] Master 2 Priority (rw) */
    unsigned int MASTER3: 4;                /** \brief [15:12] Master 3 Priority (rw) */
    unsigned int MASTER4: 4;                /** \brief [19:16] Master 4 Priority (rw) */
    unsigned int MASTER5: 4;                /** \brief [23:20] Master 5 Priority (rw) */
    unsigned int MASTER6: 4;                /** \brief [27:24] Master 6 Priority (rw) */
    unsigned int MASTER7: 4;                /** \brief [31:28] Master 7 Priority (rw) */
} Ifx_XBAR_ARBITER0_PRIOL_Bits;

/** Arbiter Control Register */
typedef struct
{
    unsigned int PRERREN: 1;                /** \brief [0:0] SRI Protocol Error Enable (rw) */
    unsigned int SCERREN: 1;                /** \brief [1:1] SRI Starvation Error Enable (rw) */
    unsigned int SETPRINT: 1;               /** \brief [2:2] Set SRI Protocol Interrupt (rwh) */
    unsigned int SETSCINT: 1;               /** \brief [3:3] Set SRI Starvation Interrupt (rwh) */
    unsigned int INTACK: 1;                 /** \brief [4:4] Interrupt Acknowledge (rwh) */
    unsigned int reserved_5: 15;
    unsigned int SPC: 12;                   /** \brief [31:20] Starvation Protection Counter Reload Value (rw) */
} Ifx_XBAR_ARBITER1_ARBCON_Bits;

/** Debug Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 20;              /** \brief [21:2] Debug Address Boundary (rw) */
    unsigned int reserved_22: 1;
    unsigned int ADDRESS1: 2;               /** \brief [24:23] Debug Address Boundary (rw) */
    unsigned int reserved_25: 3;
    unsigned int ADDRESS2: 2;               /** \brief [29:28] Debug Address Boundary (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER1_DBADD_Bits;

/** Debug Control Register */
typedef struct
{
    unsigned int DBEN: 1;                   /** \brief [0:0] Status of OCDS Enable Signal (r) */
    unsigned int DBSAT: 1;                  /** \brief [1:1] Debug (OCDS) Trigger Status (rh) */
    unsigned int REARM: 1;                  /** \brief [2:2] Rearm Debug (OCDS) Trigger (w) */
    unsigned int SETDBEVT: 1;               /** \brief [3:3] Set Debug Event (w) */
    unsigned int reserved_4: 12;
    unsigned int RDEN: 1;                   /** \brief [16:16] Read Trigger Enable (rw) */
    unsigned int WREN: 1;                   /** \brief [17:17] Write Trigger Enable (rw) */
    unsigned int SVMEN: 1;                  /** \brief [18:18] SVM Trigger Enable (rw) */
    unsigned int ADDEN: 1;                  /** \brief [19:19] Address Trigger Enable (rw) */
    unsigned int ERREN: 1;                  /** \brief [20:20] Error Trigger Enable (rw) */
    unsigned int reserved_21: 2;
    unsigned int MASEN: 1;                  /** \brief [23:23] Master Trigger Enable (rw) */
    unsigned int MASTER: 6;                 /** \brief [29:24] Master TAG ID Trigger Selector (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER1_DBCON_Bits;

/** Debug Mask Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 20;              /** \brief [21:2] Debug Address Boundary (rw) */
    unsigned int reserved_22: 1;
    unsigned int ADDRESS1: 2;               /** \brief [24:23] Debug Address Boundary (rw) */
    unsigned int reserved_25: 3;
    unsigned int ADDRESS2: 2;               /** \brief [29:28] Debug Address Boundary (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER1_DBMADD_Bits;

/** Error/Debug Capture Register */
typedef struct
{
    unsigned int RD: 1;                     /** \brief [0:0] Read Indication Status (rh) */
    unsigned int WR: 1;                     /** \brief [1:1] Write Indication Status (rh) */
    unsigned int SVM: 1;                    /** \brief [2:2] Supervisor Mode Indication Status (rh) */
    unsigned int reserved_3: 1;
    unsigned int OPC: 4;                    /** \brief [7:4] Operation Code (rh) */
    unsigned int TR_ID: 8;                  /** \brief [15:8] Transaction ID (rh) */
    unsigned int ADDR_ECC: 8;               /** \brief [23:16] SRI Address Phase Error Detection Information (rh) */
    unsigned int MCI_SBS: 8;                /** \brief [31:24] MCI Sideband Signals [7:0] (rh) */
} Ifx_XBAR_ARBITER1_ERR_Bits;

/** Error/Debug Address Capture Register */
typedef struct
{
    unsigned int ADDR: 32;                  /** \brief [31:0] Transaction Address (rh) */
} Ifx_XBAR_ARBITER1_ERRADDR_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER8: 4;                /** \brief [3:0] Master 8 Priority (rw) */
    unsigned int MASTER9: 4;                /** \brief [7:4] Master 9 Priority (rw) */
    unsigned int MASTER10: 4;               /** \brief [11:8] Master 10 Priority (rw) */
    unsigned int MASTER11: 4;               /** \brief [15:12] Master 11 Priority (rw) */
    unsigned int MASTER12: 4;               /** \brief [19:16] Master 12 Priority (rw) */
    unsigned int reserved_20: 12;
} Ifx_XBAR_ARBITER1_PRIOH_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER0: 4;                /** \brief [3:0] Master 0 Priority (rw) */
    unsigned int MASTER1: 4;                /** \brief [7:4] Master 1 Priority (rw) */
    unsigned int MASTER2: 4;                /** \brief [11:8] Master 2 Priority (rw) */
    unsigned int MASTER3: 4;                /** \brief [15:12] Master 3 Priority (rw) */
    unsigned int MASTER4: 4;                /** \brief [19:16] Master 4 Priority (rw) */
    unsigned int MASTER5: 4;                /** \brief [23:20] Master 5 Priority (rw) */
    unsigned int MASTER6: 4;                /** \brief [27:24] Master 6 Priority (rw) */
    unsigned int MASTER7: 4;                /** \brief [31:28] Master 7 Priority (rw) */
} Ifx_XBAR_ARBITER1_PRIOL_Bits;

/** Arbiter Control Register */
typedef struct
{
    unsigned int PRERREN: 1;                /** \brief [0:0] SRI Protocol Error Enable (rw) */
    unsigned int SCERREN: 1;                /** \brief [1:1] SRI Starvation Error Enable (rw) */
    unsigned int SETPRINT: 1;               /** \brief [2:2] Set SRI Protocol Interrupt (rwh) */
    unsigned int SETSCINT: 1;               /** \brief [3:3] Set SRI Starvation Interrupt (rwh) */
    unsigned int INTACK: 1;                 /** \brief [4:4] Interrupt Acknowledge (rwh) */
    unsigned int reserved_5: 15;
    unsigned int SPC: 12;                   /** \brief [31:20] Starvation Protection Counter Reload Value (rw) */
} Ifx_XBAR_ARBITER3_ARBCON_Bits;

/** Debug Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 20;              /** \brief [21:2] Debug Address Boundary (rw) */
    unsigned int reserved_22: 1;
    unsigned int ADDRESS1: 1;               /** \brief [23:23] Debug Address Boundary (rw) */
    unsigned int reserved_24: 1;
    unsigned int ADDRESS2: 1;               /** \brief [25:25] Debug Address Boundary (rw) */
    unsigned int reserved_26: 2;
    unsigned int ADDRESS3: 1;               /** \brief [28:28] Debug Address Boundary (rw) */
    unsigned int ADDRESS4: 1;               /** \brief [29:29] Debug Address Boundary (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER3_DBADD_Bits;

/** Debug Control Register */
typedef struct
{
    unsigned int DBEN: 1;                   /** \brief [0:0] Status of OCDS Enable Signal (r) */
    unsigned int DBSAT: 1;                  /** \brief [1:1] Debug (OCDS) Trigger Status (rh) */
    unsigned int REARM: 1;                  /** \brief [2:2] Rearm Debug (OCDS) Trigger (w) */
    unsigned int SETDBEVT: 1;               /** \brief [3:3] Set Debug Event (w) */
    unsigned int reserved_4: 12;
    unsigned int RDEN: 1;                   /** \brief [16:16] Read Trigger Enable (rw) */
    unsigned int WREN: 1;                   /** \brief [17:17] Write Trigger Enable (rw) */
    unsigned int SVMEN: 1;                  /** \brief [18:18] SVM Trigger Enable (rw) */
    unsigned int ADDEN: 1;                  /** \brief [19:19] Address Trigger Enable (rw) */
    unsigned int ERREN: 1;                  /** \brief [20:20] Error Trigger Enable (rw) */
    unsigned int reserved_21: 2;
    unsigned int MASEN: 1;                  /** \brief [23:23] Master Trigger Enable (rw) */
    unsigned int MASTER: 6;                 /** \brief [29:24] Master TAG ID Trigger Selector (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER3_DBCON_Bits;

/** Debug Mask Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 20;              /** \brief [21:2] Debug Address Boundary (rw) */
    unsigned int reserved_22: 1;
    unsigned int ADDRESS1: 1;               /** \brief [23:23] Debug Address Boundary (rw) */
    unsigned int reserved_24: 1;
    unsigned int ADDRESS2: 1;               /** \brief [25:25] Debug Address Boundary (rw) */
    unsigned int reserved_26: 2;
    unsigned int ADDRESS3: 2;               /** \brief [29:28] Debug Address Boundary (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER3_DBMADD_Bits;

/** Error/Debug Capture Register */
typedef struct
{
    unsigned int RD: 1;                     /** \brief [0:0] Read Indication Status (rh) */
    unsigned int WR: 1;                     /** \brief [1:1] Write Indication Status (rh) */
    unsigned int SVM: 1;                    /** \brief [2:2] Supervisor Mode Indication Status (rh) */
    unsigned int reserved_3: 1;
    unsigned int OPC: 4;                    /** \brief [7:4] Operation Code (rh) */
    unsigned int TR_ID: 8;                  /** \brief [15:8] Transaction ID (rh) */
    unsigned int ADDR_ECC: 8;               /** \brief [23:16] SRI Address Phase Error Detection Information (rh) */
    unsigned int MCI_SBS: 8;                /** \brief [31:24] MCI Sideband Signals [7:0] (rh) */
} Ifx_XBAR_ARBITER3_ERR_Bits;

/** Error/Debug Address Capture Register */
typedef struct
{
    unsigned int ADDR: 32;                  /** \brief [31:0] Transaction Address (rh) */
} Ifx_XBAR_ARBITER3_ERRADDR_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER8: 4;                /** \brief [3:0] Master 8 Priority (rw) */
    unsigned int MASTER9: 4;                /** \brief [7:4] Master 9 Priority (rw) */
    unsigned int MASTER10: 4;               /** \brief [11:8] Master 10 Priority (rw) */
    unsigned int reserved_12: 4;
    unsigned int MASTER12: 4;               /** \brief [19:16] Master 12 Priority (rw) */
    unsigned int reserved_20: 12;
} Ifx_XBAR_ARBITER3_PRIOH_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER0: 4;                /** \brief [3:0] Master 0 Priority (rw) */
    unsigned int MASTER1: 4;                /** \brief [7:4] Master 1 Priority (rw) */
    unsigned int MASTER2: 4;                /** \brief [11:8] Master 2 Priority (rw) */
    unsigned int MASTER3: 4;                /** \brief [15:12] Master 3 Priority (rw) */
    unsigned int reserved_16: 4;
    unsigned int MASTER5: 4;                /** \brief [23:20] Master 5 Priority (rw) */
    unsigned int MASTER6: 4;                /** \brief [27:24] Master 6 Priority (rw) */
    unsigned int MASTER7: 4;                /** \brief [31:28] Master 7 Priority (rw) */
} Ifx_XBAR_ARBITER3_PRIOL_Bits;

/** Arbiter Control Register */
typedef struct
{
    unsigned int PRERREN: 1;                /** \brief [0:0] SRI Protocol Error Enable (rw) */
    unsigned int SCERREN: 1;                /** \brief [1:1] SRI Starvation Error Enable (rw) */
    unsigned int SETPRINT: 1;               /** \brief [2:2] Set SRI Protocol Interrupt (rwh) */
    unsigned int SETSCINT: 1;               /** \brief [3:3] Set SRI Starvation Interrupt (rwh) */
    unsigned int INTACK: 1;                 /** \brief [4:4] Interrupt Acknowledge (rwh) */
    unsigned int reserved_5: 15;
    unsigned int SPC: 12;                   /** \brief [31:20] Starvation Protection Counter Reload Value (rw) */
} Ifx_XBAR_ARBITER4_ARBCON_Bits;

/** Debug Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 20;              /** \brief [21:2] Debug Address Boundary (rw) */
    unsigned int reserved_22: 10;
} Ifx_XBAR_ARBITER4_DBADD_Bits;

/** Debug Control Register */
typedef struct
{
    unsigned int DBEN: 1;                   /** \brief [0:0] Status of OCDS Enable Signal (r) */
    unsigned int DBSAT: 1;                  /** \brief [1:1] Debug (OCDS) Trigger Status (rh) */
    unsigned int REARM: 1;                  /** \brief [2:2] Rearm Debug (OCDS) Trigger (w) */
    unsigned int SETDBEVT: 1;               /** \brief [3:3] Set Debug Event (w) */
    unsigned int reserved_4: 12;
    unsigned int RDEN: 1;                   /** \brief [16:16] Read Trigger Enable (rw) */
    unsigned int WREN: 1;                   /** \brief [17:17] Write Trigger Enable (rw) */
    unsigned int SVMEN: 1;                  /** \brief [18:18] SVM Trigger Enable (rw) */
    unsigned int ADDEN: 1;                  /** \brief [19:19] Address Trigger Enable (rw) */
    unsigned int ERREN: 1;                  /** \brief [20:20] Error Trigger Enable (rw) */
    unsigned int reserved_21: 2;
    unsigned int MASEN: 1;                  /** \brief [23:23] Master Trigger Enable (rw) */
    unsigned int MASTER: 6;                 /** \brief [29:24] Master TAG ID Trigger Selector (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER4_DBCON_Bits;

/** Debug Mask Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 20;              /** \brief [21:2] Debug Address Boundary (rw) */
    unsigned int reserved_22: 10;
} Ifx_XBAR_ARBITER4_DBMADD_Bits;

/** Error/Debug Capture Register */
typedef struct
{
    unsigned int RD: 1;                     /** \brief [0:0] Read Indication Status (rh) */
    unsigned int WR: 1;                     /** \brief [1:1] Write Indication Status (rh) */
    unsigned int SVM: 1;                    /** \brief [2:2] Supervisor Mode Indication Status (rh) */
    unsigned int reserved_3: 1;
    unsigned int OPC: 4;                    /** \brief [7:4] Operation Code (rh) */
    unsigned int TR_ID: 8;                  /** \brief [15:8] Transaction ID (rh) */
    unsigned int ADDR_ECC: 8;               /** \brief [23:16] SRI Address Phase Error Detection Information (rh) */
    unsigned int MCI_SBS: 8;                /** \brief [31:24] MCI Sideband Signals [7:0] (rh) */
} Ifx_XBAR_ARBITER4_ERR_Bits;

/** Error/Debug Address Capture Register */
typedef struct
{
    unsigned int ADDR: 32;                  /** \brief [31:0] Transaction Address (rh) */
} Ifx_XBAR_ARBITER4_ERRADDR_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER8: 4;                /** \brief [3:0] Master 8 Priority (rw) */
    unsigned int MASTER9: 4;                /** \brief [7:4] Master 9 Priority (rw) */
    unsigned int MASTER10: 4;               /** \brief [11:8] Master 10 Priority (rw) */
    unsigned int MASTER11: 4;               /** \brief [15:12] Master 11 Priority (rw) */
    unsigned int MASTER12: 4;               /** \brief [19:16] Master 12 Priority (rw) */
    unsigned int reserved_20: 12;
} Ifx_XBAR_ARBITER4_PRIOH_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER0: 4;                /** \brief [3:0] Master 0 Priority (rw) */
    unsigned int MASTER1: 4;                /** \brief [7:4] Master 1 Priority (rw) */
    unsigned int MASTER2: 4;                /** \brief [11:8] Master 2 Priority (rw) */
    unsigned int MASTER3: 4;                /** \brief [15:12] Master 3 Priority (rw) */
    unsigned int MASTER4: 4;                /** \brief [19:16] Master 4 Priority (rw) */
    unsigned int MASTER5: 4;                /** \brief [23:20] Master 5 Priority (rw) */
    unsigned int MASTER6: 4;                /** \brief [27:24] Master 6 Priority (rw) */
    unsigned int MASTER7: 4;                /** \brief [31:28] Master 7 Priority (rw) */
} Ifx_XBAR_ARBITER4_PRIOL_Bits;

/** Arbiter Control Register */
typedef struct
{
    unsigned int PRERREN: 1;                /** \brief [0:0] SRI Protocol Error Enable (rw) */
    unsigned int SCERREN: 1;                /** \brief [1:1] SRI Starvation Error Enable (rw) */
    unsigned int SETPRINT: 1;               /** \brief [2:2] Set SRI Protocol Interrupt (rwh) */
    unsigned int SETSCINT: 1;               /** \brief [3:3] Set SRI Starvation Interrupt (rwh) */
    unsigned int INTACK: 1;                 /** \brief [4:4] Interrupt Acknowledge (rwh) */
    unsigned int reserved_5: 15;
    unsigned int SPC: 12;                   /** \brief [31:20] Starvation Protection Counter Reload Value (rw) */
} Ifx_XBAR_ARBITER5_ARBCON_Bits;

/** Debug Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 19;              /** \brief [20:2] Debug Address Boundary (rw) */
    unsigned int reserved_21: 11;
} Ifx_XBAR_ARBITER5_DBADD_Bits;

/** Debug Control Register */
typedef struct
{
    unsigned int DBEN: 1;                   /** \brief [0:0] Status of OCDS Enable Signal (r) */
    unsigned int DBSAT: 1;                  /** \brief [1:1] Debug (OCDS) Trigger Status (rh) */
    unsigned int REARM: 1;                  /** \brief [2:2] Rearm Debug (OCDS) Trigger (w) */
    unsigned int SETDBEVT: 1;               /** \brief [3:3] Set Debug Event (w) */
    unsigned int reserved_4: 12;
    unsigned int RDEN: 1;                   /** \brief [16:16] Read Trigger Enable (rw) */
    unsigned int WREN: 1;                   /** \brief [17:17] Write Trigger Enable (rw) */
    unsigned int SVMEN: 1;                  /** \brief [18:18] SVM Trigger Enable (rw) */
    unsigned int ADDEN: 1;                  /** \brief [19:19] Address Trigger Enable (rw) */
    unsigned int ERREN: 1;                  /** \brief [20:20] Error Trigger Enable (rw) */
    unsigned int reserved_21: 2;
    unsigned int MASEN: 1;                  /** \brief [23:23] Master Trigger Enable (rw) */
    unsigned int MASTER: 6;                 /** \brief [29:24] Master TAG ID Trigger Selector (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER5_DBCON_Bits;

/** Debug Mask Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 19;              /** \brief [20:2] Debug Address Boundary (rw) */
    unsigned int reserved_21: 11;
} Ifx_XBAR_ARBITER5_DBMADD_Bits;

/** Error/Debug Capture Register */
typedef struct
{
    unsigned int RD: 1;                     /** \brief [0:0] Read Indication Status (rh) */
    unsigned int WR: 1;                     /** \brief [1:1] Write Indication Status (rh) */
    unsigned int SVM: 1;                    /** \brief [2:2] Supervisor Mode Indication Status (rh) */
    unsigned int reserved_3: 1;
    unsigned int OPC: 4;                    /** \brief [7:4] Operation Code (rh) */
    unsigned int TR_ID: 8;                  /** \brief [15:8] Transaction ID (rh) */
    unsigned int ADDR_ECC: 8;               /** \brief [23:16] SRI Address Phase Error Detection Information (rh) */
    unsigned int MCI_SBS: 8;                /** \brief [31:24] MCI Sideband Signals [7:0] (rh) */
} Ifx_XBAR_ARBITER5_ERR_Bits;

/** Error/Debug Address Capture Register */
typedef struct
{
    unsigned int ADDR: 32;                  /** \brief [31:0] Transaction Address (rh) */
} Ifx_XBAR_ARBITER5_ERRADDR_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER8: 4;                /** \brief [3:0] Master 8 Priority (rw) */
    unsigned int MASTER9: 4;                /** \brief [7:4] Master 9 Priority (rw) */
    unsigned int MASTER10: 4;               /** \brief [11:8] Master 10 Priority (rw) */
    unsigned int MASTER11: 4;               /** \brief [15:12] Master 11 Priority (rw) */
    unsigned int MASTER12: 4;               /** \brief [19:16] Master 12 Priority (rw) */
    unsigned int reserved_20: 12;
} Ifx_XBAR_ARBITER5_PRIOH_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int reserved_0: 24;
    unsigned int MASTER6: 4;                /** \brief [27:24] Master 6 Priority (rw) */
    unsigned int MASTER7: 4;                /** \brief [31:28] Master 7 Priority (rw) */
} Ifx_XBAR_ARBITER5_PRIOL_Bits;

/** Arbiter Control Register */
typedef struct
{
    unsigned int PRERREN: 1;                /** \brief [0:0] SRI Protocol Error Enable (rw) */
    unsigned int SCERREN: 1;                /** \brief [1:1] SRI Starvation Error Enable (rw) */
    unsigned int SETPRINT: 1;               /** \brief [2:2] Set SRI Protocol Interrupt (rwh) */
    unsigned int SETSCINT: 1;               /** \brief [3:3] Set SRI Starvation Interrupt (rwh) */
    unsigned int INTACK: 1;                 /** \brief [4:4] Interrupt Acknowledge (rwh) */
    unsigned int reserved_5: 15;
    unsigned int SPC: 12;                   /** \brief [31:20] Starvation Protection Counter Reload Value (rw) */
} Ifx_XBAR_ARBITER6_ARBCON_Bits;

/** Debug Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 25;              /** \brief [26:2] Debug Address Boundary (rw) */
    unsigned int reserved_27: 1;
    unsigned int ADDRESS1: 3;               /** \brief [30:28] Debug Address Boundary (rw) */
    unsigned int reserved_31: 1;
} Ifx_XBAR_ARBITER6_DBADD_Bits;

/** Debug Control Register */
typedef struct
{
    unsigned int DBEN: 1;                   /** \brief [0:0] Status of OCDS Enable Signal (r) */
    unsigned int DBSAT: 1;                  /** \brief [1:1] Debug (OCDS) Trigger Status (rh) */
    unsigned int REARM: 1;                  /** \brief [2:2] Rearm Debug (OCDS) Trigger (w) */
    unsigned int SETDBEVT: 1;               /** \brief [3:3] Set Debug Event (w) */
    unsigned int reserved_4: 12;
    unsigned int RDEN: 1;                   /** \brief [16:16] Read Trigger Enable (rw) */
    unsigned int WREN: 1;                   /** \brief [17:17] Write Trigger Enable (rw) */
    unsigned int SVMEN: 1;                  /** \brief [18:18] SVM Trigger Enable (rw) */
    unsigned int ADDEN: 1;                  /** \brief [19:19] Address Trigger Enable (rw) */
    unsigned int ERREN: 1;                  /** \brief [20:20] Error Trigger Enable (rw) */
    unsigned int reserved_21: 2;
    unsigned int MASEN: 1;                  /** \brief [23:23] Master Trigger Enable (rw) */
    unsigned int MASTER: 6;                 /** \brief [29:24] Master TAG ID Trigger Selector (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER6_DBCON_Bits;

/** Debug Mask Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 25;              /** \brief [26:2] Debug Address Boundary (rw) */
    unsigned int reserved_27: 1;
    unsigned int ADDRESS1: 3;               /** \brief [30:28] Debug Address Boundary (rw) */
    unsigned int reserved_31: 1;
} Ifx_XBAR_ARBITER6_DBMADD_Bits;

/** Error/Debug Capture Register */
typedef struct
{
    unsigned int RD: 1;                     /** \brief [0:0] Read Indication Status (rh) */
    unsigned int WR: 1;                     /** \brief [1:1] Write Indication Status (rh) */
    unsigned int SVM: 1;                    /** \brief [2:2] Supervisor Mode Indication Status (rh) */
    unsigned int reserved_3: 1;
    unsigned int OPC: 4;                    /** \brief [7:4] Operation Code (rh) */
    unsigned int TR_ID: 8;                  /** \brief [15:8] Transaction ID (rh) */
    unsigned int ADDR_ECC: 8;               /** \brief [23:16] SRI Address Phase Error Detection Information (rh) */
    unsigned int MCI_SBS: 8;                /** \brief [31:24] MCI Sideband Signals [7:0] (rh) */
} Ifx_XBAR_ARBITER6_ERR_Bits;

/** Error/Debug Address Capture Register */
typedef struct
{
    unsigned int ADDR: 32;                  /** \brief [31:0] Transaction Address (rh) */
} Ifx_XBAR_ARBITER6_ERRADDR_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER8: 4;                /** \brief [3:0] Master 8 Priority (rw) */
    unsigned int MASTER9: 4;                /** \brief [7:4] Master 9 Priority (rw) */
    unsigned int MASTER10: 4;               /** \brief [11:8] Master 10 Priority (rw) */
    unsigned int MASTER11: 4;               /** \brief [15:12] Master 11 Priority (rw) */
    unsigned int MASTER12: 4;               /** \brief [19:16] Master 12 Priority (rw) */
    unsigned int reserved_20: 12;
} Ifx_XBAR_ARBITER6_PRIOH_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER0: 4;                /** \brief [3:0] Master 0 Priority (rw) */
    unsigned int MASTER1: 4;                /** \brief [7:4] Master 1 Priority (rw) */
    unsigned int MASTER2: 4;                /** \brief [11:8] Master 2 Priority (rw) */
    unsigned int MASTER3: 4;                /** \brief [15:12] Master 3 Priority (rw) */
    unsigned int MASTER4: 4;                /** \brief [19:16] Master 4 Priority (rw) */
    unsigned int MASTER5: 4;                /** \brief [23:20] Master 5 Priority (rw) */
    unsigned int MASTER6: 4;                /** \brief [27:24] Master 6 Priority (rw) */
    unsigned int MASTER7: 4;                /** \brief [31:28] Master 7 Priority (rw) */
} Ifx_XBAR_ARBITER6_PRIOL_Bits;

/** Arbiter Control Register */
typedef struct
{
    unsigned int PRERREN: 1;                /** \brief [0:0] SRI Protocol Error Enable (rw) */
    unsigned int SCERREN: 1;                /** \brief [1:1] SRI Starvation Error Enable (rw) */
    unsigned int SETPRINT: 1;               /** \brief [2:2] Set SRI Protocol Interrupt (rwh) */
    unsigned int SETSCINT: 1;               /** \brief [3:3] Set SRI Starvation Interrupt (rwh) */
    unsigned int INTACK: 1;                 /** \brief [4:4] Interrupt Acknowledge (rwh) */
    unsigned int reserved_5: 15;
    unsigned int SPC: 12;                   /** \brief [31:20] Starvation Protection Counter Reload Value (rw) */
} Ifx_XBAR_ARBITER7_ARBCON_Bits;

/** Debug Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 25;              /** \brief [26:2] Debug Address Boundary (rw) */
    unsigned int reserved_27: 1;
    unsigned int ADDRESS1: 3;               /** \brief [30:28] Debug Address Boundary (rw) */
    unsigned int reserved_31: 1;
} Ifx_XBAR_ARBITER7_DBADD_Bits;

/** Debug Control Register */
typedef struct
{
    unsigned int DBEN: 1;                   /** \brief [0:0] Status of OCDS Enable Signal (r) */
    unsigned int DBSAT: 1;                  /** \brief [1:1] Debug (OCDS) Trigger Status (rh) */
    unsigned int REARM: 1;                  /** \brief [2:2] Rearm Debug (OCDS) Trigger (w) */
    unsigned int SETDBEVT: 1;               /** \brief [3:3] Set Debug Event (w) */
    unsigned int reserved_4: 12;
    unsigned int RDEN: 1;                   /** \brief [16:16] Read Trigger Enable (rw) */
    unsigned int WREN: 1;                   /** \brief [17:17] Write Trigger Enable (rw) */
    unsigned int SVMEN: 1;                  /** \brief [18:18] SVM Trigger Enable (rw) */
    unsigned int ADDEN: 1;                  /** \brief [19:19] Address Trigger Enable (rw) */
    unsigned int ERREN: 1;                  /** \brief [20:20] Error Trigger Enable (rw) */
    unsigned int reserved_21: 2;
    unsigned int MASEN: 1;                  /** \brief [23:23] Master Trigger Enable (rw) */
    unsigned int MASTER: 6;                 /** \brief [29:24] Master TAG ID Trigger Selector (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER7_DBCON_Bits;

/** Debug Mask Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 25;              /** \brief [26:2] Debug Address Boundary (rw) */
    unsigned int reserved_27: 1;
    unsigned int ADDRESS1: 3;               /** \brief [30:28] Debug Address Boundary (rw) */
    unsigned int reserved_31: 1;
} Ifx_XBAR_ARBITER7_DBMADD_Bits;

/** Error/Debug Capture Register */
typedef struct
{
    unsigned int RD: 1;                     /** \brief [0:0] Read Indication Status (rh) */
    unsigned int WR: 1;                     /** \brief [1:1] Write Indication Status (rh) */
    unsigned int SVM: 1;                    /** \brief [2:2] Supervisor Mode Indication Status (rh) */
    unsigned int reserved_3: 1;
    unsigned int OPC: 4;                    /** \brief [7:4] Operation Code (rh) */
    unsigned int TR_ID: 8;                  /** \brief [15:8] Transaction ID (rh) */
    unsigned int ADDR_ECC: 8;               /** \brief [23:16] SRI Address Phase Error Detection Information (rh) */
    unsigned int MCI_SBS: 8;                /** \brief [31:24] MCI Sideband Signals [7:0] (rh) */
} Ifx_XBAR_ARBITER7_ERR_Bits;

/** Error/Debug Address Capture Register */
typedef struct
{
    unsigned int ADDR: 32;                  /** \brief [31:0] Transaction Address (rh) */
} Ifx_XBAR_ARBITER7_ERRADDR_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER8: 4;                /** \brief [3:0] Master 8 Priority (rw) */
    unsigned int MASTER9: 4;                /** \brief [7:4] Master 9 Priority (rw) */
    unsigned int MASTER10: 4;               /** \brief [11:8] Master 10 Priority (rw) */
    unsigned int MASTER11: 4;               /** \brief [15:12] Master 11 Priority (rw) */
    unsigned int MASTER12: 4;               /** \brief [19:16] Master 12 Priority (rw) */
    unsigned int reserved_20: 12;
} Ifx_XBAR_ARBITER7_PRIOH_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER0: 4;                /** \brief [3:0] Master 0 Priority (rw) */
    unsigned int MASTER1: 4;                /** \brief [7:4] Master 1 Priority (rw) */
    unsigned int MASTER2: 4;                /** \brief [11:8] Master 2 Priority (rw) */
    unsigned int MASTER3: 4;                /** \brief [15:12] Master 3 Priority (rw) */
    unsigned int reserved_16: 4;
    unsigned int MASTER5: 4;                /** \brief [23:20] Master 5 Priority (rw) */
    unsigned int MASTER6: 4;                /** \brief [27:24] Master 6 Priority (rw) */
    unsigned int MASTER7: 4;                /** \brief [31:28] Master 7 Priority (rw) */
} Ifx_XBAR_ARBITER7_PRIOL_Bits;

/** Arbiter Control Register */
typedef struct
{
    unsigned int PRERREN: 1;                /** \brief [0:0] SRI Protocol Error Enable (rw) */
    unsigned int SCERREN: 1;                /** \brief [1:1] SRI Starvation Error Enable (rw) */
    unsigned int SETPRINT: 1;               /** \brief [2:2] Set SRI Protocol Interrupt (rwh) */
    unsigned int SETSCINT: 1;               /** \brief [3:3] Set SRI Starvation Interrupt (rwh) */
    unsigned int INTACK: 1;                 /** \brief [4:4] Interrupt Acknowledge (rwh) */
    unsigned int reserved_5: 15;
    unsigned int SPC: 12;                   /** \brief [31:20] Starvation Protection Counter Reload Value (rw) */
} Ifx_XBAR_ARBITER8_ARBCON_Bits;

/** Debug Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 19;              /** \brief [20:2] Debug Address Boundary (rw) */
    unsigned int reserved_21: 8;
    unsigned int ADDRESS1: 1;               /** \brief [29:29] Debug Address Boundary (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER8_DBADD_Bits;

/** Debug Control Register */
typedef struct
{
    unsigned int DBEN: 1;                   /** \brief [0:0] Status of OCDS Enable Signal (r) */
    unsigned int DBSAT: 1;                  /** \brief [1:1] Debug (OCDS) Trigger Status (rh) */
    unsigned int REARM: 1;                  /** \brief [2:2] Rearm Debug (OCDS) Trigger (w) */
    unsigned int SETDBEVT: 1;               /** \brief [3:3] Set Debug Event (w) */
    unsigned int reserved_4: 12;
    unsigned int RDEN: 1;                   /** \brief [16:16] Read Trigger Enable (rw) */
    unsigned int WREN: 1;                   /** \brief [17:17] Write Trigger Enable (rw) */
    unsigned int SVMEN: 1;                  /** \brief [18:18] SVM Trigger Enable (rw) */
    unsigned int ADDEN: 1;                  /** \brief [19:19] Address Trigger Enable (rw) */
    unsigned int ERREN: 1;                  /** \brief [20:20] Error Trigger Enable (rw) */
    unsigned int reserved_21: 2;
    unsigned int MASEN: 1;                  /** \brief [23:23] Master Trigger Enable (rw) */
    unsigned int MASTER: 6;                 /** \brief [29:24] Master TAG ID Trigger Selector (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER8_DBCON_Bits;

/** Debug Mask Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 19;              /** \brief [20:2] Debug Address Boundary (rw) */
    unsigned int reserved_21: 8;
    unsigned int ADDRESS1: 1;               /** \brief [29:29] Debug Address Boundary (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER8_DBMADD_Bits;

/** Error/Debug Capture Register */
typedef struct
{
    unsigned int RD: 1;                     /** \brief [0:0] Read Indication Status (rh) */
    unsigned int WR: 1;                     /** \brief [1:1] Write Indication Status (rh) */
    unsigned int SVM: 1;                    /** \brief [2:2] Supervisor Mode Indication Status (rh) */
    unsigned int reserved_3: 1;
    unsigned int OPC: 4;                    /** \brief [7:4] Operation Code (rh) */
    unsigned int TR_ID: 8;                  /** \brief [15:8] Transaction ID (rh) */
    unsigned int ADDR_ECC: 8;               /** \brief [23:16] SRI Address Phase Error Detection Information (rh) */
    unsigned int MCI_SBS: 8;                /** \brief [31:24] MCI Sideband Signals [7:0] (rh) */
} Ifx_XBAR_ARBITER8_ERR_Bits;

/** Error/Debug Address Capture Register */
typedef struct
{
    unsigned int ADDR: 32;                  /** \brief [31:0] Transaction Address (rh) */
} Ifx_XBAR_ARBITER8_ERRADDR_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER8: 4;                /** \brief [3:0] Master 8 Priority (rw) */
    unsigned int MASTER9: 4;                /** \brief [7:4] Master 9 Priority (rw) */
    unsigned int MASTER10: 4;               /** \brief [11:8] Master 10 Priority (rw) */
    unsigned int MASTER11: 4;               /** \brief [15:12] Master 11 Priority (rw) */
    unsigned int MASTER12: 4;               /** \brief [19:16] Master 12 Priority (rw) */
    unsigned int reserved_20: 12;
} Ifx_XBAR_ARBITER8_PRIOH_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER0: 4;                /** \brief [3:0] Master 0 Priority (rw) */
    unsigned int MASTER1: 4;                /** \brief [7:4] Master 1 Priority (rw) */
    unsigned int MASTER2: 4;                /** \brief [11:8] Master 2 Priority (rw) */
    unsigned int MASTER3: 4;                /** \brief [15:12] Master 3 Priority (rw) */
    unsigned int reserved_16: 4;
    unsigned int MASTER5: 4;                /** \brief [23:20] Master 5 Priority (rw) */
    unsigned int MASTER6: 4;                /** \brief [27:24] Master 6 Priority (rw) */
    unsigned int MASTER7: 4;                /** \brief [31:28] Master 7 Priority (rw) */
} Ifx_XBAR_ARBITER8_PRIOL_Bits;

/** Arbiter Control Register */
typedef struct
{
    unsigned int PRERREN: 1;                /** \brief [0:0] SRI Protocol Error Enable (rw) */
    unsigned int SCERREN: 1;                /** \brief [1:1] SRI Starvation Error Enable (rw) */
    unsigned int SETPRINT: 1;               /** \brief [2:2] Set SRI Protocol Interrupt (rwh) */
    unsigned int SETSCINT: 1;               /** \brief [3:3] Set SRI Starvation Interrupt (rwh) */
    unsigned int INTACK: 1;                 /** \brief [4:4] Interrupt Acknowledge (rwh) */
    unsigned int reserved_5: 15;
    unsigned int SPC: 12;                   /** \brief [31:20] Starvation Protection Counter Reload Value (rw) */
} Ifx_XBAR_ARBITER9_ARBCON_Bits;

/** Debug Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 19;              /** \brief [20:2] Debug Address Boundary (rw) */
    unsigned int reserved_21: 8;
    unsigned int ADDRESS1: 1;               /** \brief [29:29] Debug Address Boundary (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER9_DBADD_Bits;

/** Debug Control Register */
typedef struct
{
    unsigned int DBEN: 1;                   /** \brief [0:0] Status of OCDS Enable Signal (r) */
    unsigned int DBSAT: 1;                  /** \brief [1:1] Debug (OCDS) Trigger Status (rh) */
    unsigned int REARM: 1;                  /** \brief [2:2] Rearm Debug (OCDS) Trigger (w) */
    unsigned int SETDBEVT: 1;               /** \brief [3:3] Set Debug Event (w) */
    unsigned int reserved_4: 12;
    unsigned int RDEN: 1;                   /** \brief [16:16] Read Trigger Enable (rw) */
    unsigned int WREN: 1;                   /** \brief [17:17] Write Trigger Enable (rw) */
    unsigned int SVMEN: 1;                  /** \brief [18:18] SVM Trigger Enable (rw) */
    unsigned int ADDEN: 1;                  /** \brief [19:19] Address Trigger Enable (rw) */
    unsigned int ERREN: 1;                  /** \brief [20:20] Error Trigger Enable (rw) */
    unsigned int reserved_21: 2;
    unsigned int MASEN: 1;                  /** \brief [23:23] Master Trigger Enable (rw) */
    unsigned int MASTER: 6;                 /** \brief [29:24] Master TAG ID Trigger Selector (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER9_DBCON_Bits;

/** Debug Mask Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 19;              /** \brief [20:2] Debug Address Boundary (rw) */
    unsigned int reserved_21: 8;
    unsigned int ADDRESS1: 1;               /** \brief [29:29] Debug Address Boundary (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITER9_DBMADD_Bits;

/** Error/Debug Capture Register */
typedef struct
{
    unsigned int RD: 1;                     /** \brief [0:0] Read Indication Status (rh) */
    unsigned int WR: 1;                     /** \brief [1:1] Write Indication Status (rh) */
    unsigned int SVM: 1;                    /** \brief [2:2] Supervisor Mode Indication Status (rh) */
    unsigned int reserved_3: 1;
    unsigned int OPC: 4;                    /** \brief [7:4] Operation Code (rh) */
    unsigned int TR_ID: 8;                  /** \brief [15:8] Transaction ID (rh) */
    unsigned int ADDR_ECC: 8;               /** \brief [23:16] SRI Address Phase Error Detection Information (rh) */
    unsigned int MCI_SBS: 8;                /** \brief [31:24] MCI Sideband Signals [7:0] (rh) */
} Ifx_XBAR_ARBITER9_ERR_Bits;

/** Error/Debug Address Capture Register */
typedef struct
{
    unsigned int ADDR: 32;                  /** \brief [31:0] Transaction Address (rh) */
} Ifx_XBAR_ARBITER9_ERRADDR_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER8: 4;                /** \brief [3:0] Master 8 Priority (rw) */
    unsigned int MASTER9: 4;                /** \brief [7:4] Master 9 Priority (rw) */
    unsigned int MASTER10: 4;               /** \brief [11:8] Master 10 Priority (rw) */
    unsigned int MASTER11: 4;               /** \brief [15:12] Master 11 Priority (rw) */
    unsigned int MASTER12: 4;               /** \brief [19:16] Master 12 Priority (rw) */
    unsigned int reserved_20: 12;
} Ifx_XBAR_ARBITER9_PRIOH_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER0: 4;                /** \brief [3:0] Master 0 Priority (rw) */
    unsigned int MASTER1: 4;                /** \brief [7:4] Master 1 Priority (rw) */
    unsigned int MASTER2: 4;                /** \brief [11:8] Master 2 Priority (rw) */
    unsigned int MASTER3: 4;                /** \brief [15:12] Master 3 Priority (rw) */
    unsigned int reserved_16: 4;
    unsigned int MASTER5: 4;                /** \brief [23:20] Master 5 Priority (rw) */
    unsigned int MASTER6: 4;                /** \brief [27:24] Master 6 Priority (rw) */
    unsigned int MASTER7: 4;                /** \brief [31:28] Master 7 Priority (rw) */
} Ifx_XBAR_ARBITER9_PRIOL_Bits;

/** Arbiter Control Register */
typedef struct
{
    unsigned int PRERREN: 1;                /** \brief [0:0] SRI Protocol Error Enable (rw) */
    unsigned int SCERREN: 1;                /** \brief [1:1] SRI Starvation Error Enable (rw) */
    unsigned int SETPRINT: 1;               /** \brief [2:2] Set SRI Protocol Interrupt (rwh) */
    unsigned int SETSCINT: 1;               /** \brief [3:3] Set SRI Starvation Interrupt (rwh) */
    unsigned int INTACK: 1;                 /** \brief [4:4] Interrupt Acknowledge (rwh) */
    unsigned int reserved_5: 15;
    unsigned int SPC: 12;                   /** \brief [31:20] Starvation Protection Counter Reload Value (rw) */
} Ifx_XBAR_ARBITERD_ARBCON_Bits;

/** Debug Address Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ADDRESS0: 30;              /** \brief [31:2] Debug Address Boundary (rw) */
} Ifx_XBAR_ARBITERD_DBADD_Bits;

/** Debug Control Register */
typedef struct
{
    unsigned int DBEN: 1;                   /** \brief [0:0] Status of OCDS Enable Signal (r) */
    unsigned int DBSAT: 1;                  /** \brief [1:1] Debug (OCDS) Trigger Status (rh) */
    unsigned int REARM: 1;                  /** \brief [2:2] Rearm Debug (OCDS) Trigger (w) */
    unsigned int SETDBEVT: 1;               /** \brief [3:3] Set Debug Event (w) */
    unsigned int reserved_4: 12;
    unsigned int RDEN: 1;                   /** \brief [16:16] Read Trigger Enable (rw) */
    unsigned int WREN: 1;                   /** \brief [17:17] Write Trigger Enable (rw) */
    unsigned int SVMEN: 1;                  /** \brief [18:18] SVM Trigger Enable (rw) */
    unsigned int ADDEN: 1;                  /** \brief [19:19] Address Trigger Enable (rw) */
    unsigned int ERREN: 1;                  /** \brief [20:20] Error Trigger Enable (rw) */
    unsigned int reserved_21: 2;
    unsigned int MASEN: 1;                  /** \brief [23:23] Master Trigger Enable (rw) */
    unsigned int MASTER: 6;                 /** \brief [29:24] Master TAG ID Trigger Selector (rw) */
    unsigned int reserved_30: 2;
} Ifx_XBAR_ARBITERD_DBCON_Bits;

/** Debug Mask Address Register */
typedef struct
{
    unsigned int ADDRESS0: 32;              /** \brief [31:0] Debug Address Boundary (rw) */
} Ifx_XBAR_ARBITERD_DBMADD_Bits;

/** Error/Debug Capture Register */
typedef struct
{
    unsigned int RD: 1;                     /** \brief [0:0] Read Indication Status (rh) */
    unsigned int WR: 1;                     /** \brief [1:1] Write Indication Status (rh) */
    unsigned int SVM: 1;                    /** \brief [2:2] Supervisor Mode Indication Status (rh) */
    unsigned int reserved_3: 1;
    unsigned int OPC: 4;                    /** \brief [7:4] Operation Code (rh) */
    unsigned int TR_ID: 8;                  /** \brief [15:8] Transaction ID (rh) */
    unsigned int ADDR_ECC: 8;               /** \brief [23:16] SRI Address Phase Error Detection Information (rh) */
    unsigned int MCI_SBS: 8;                /** \brief [31:24] MCI Sideband Signals [7:0] (rh) */
} Ifx_XBAR_ARBITERD_ERR_Bits;

/** Error/Debug Address Capture Register */
typedef struct
{
    unsigned int ADDR: 32;                  /** \brief [31:0] Transaction Address (rh) */
} Ifx_XBAR_ARBITERD_ERRADDR_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER8: 4;                /** \brief [3:0] Master 8 Priority (rw) */
    unsigned int MASTER9: 4;                /** \brief [7:4] Master 9 Priority (rw) */
    unsigned int MASTER10: 4;               /** \brief [11:8] Master 10 Priority (rw) */
    unsigned int MASTER11: 4;               /** \brief [15:12] Master 11 Priority (rw) */
    unsigned int MASTER12: 4;               /** \brief [19:16] Master 12 Priority (rw) */
    unsigned int reserved_20: 12;
} Ifx_XBAR_ARBITERD_PRIOH_Bits;

/** Arbiter Priority Register */
typedef struct
{
    unsigned int MASTER0: 4;                /** \brief [3:0] Master 0 Priority (rw) */
    unsigned int MASTER1: 4;                /** \brief [7:4] Master 1 Priority (rw) */
    unsigned int MASTER2: 4;                /** \brief [11:8] Master 2 Priority (rw) */
    unsigned int MASTER3: 4;                /** \brief [15:12] Master 3 Priority (rw) */
    unsigned int MASTER4: 4;                /** \brief [19:16] Master 4 Priority (rw) */
    unsigned int MASTER5: 4;                /** \brief [23:20] Master 5 Priority (rw) */
    unsigned int MASTER6: 4;                /** \brief [27:24] Master 6 Priority (rw) */
    unsigned int MASTER7: 4;                /** \brief [31:28] Master 7 Priority (rw) */
} Ifx_XBAR_ARBITERD_PRIOL_Bits;

/** Debug Trigger Event Status Register */
typedef struct
{
    unsigned int SCI0: 1;                   /** \brief [0:0] SCI Debug Trigger Event Status (rwh) */
    unsigned int SCI1: 1;                   /** \brief [1:1] SCI Debug Trigger Event Status (rwh) */
    unsigned int SCI2: 1;                   /** \brief [2:2] SCI Debug Trigger Event Status (rwh) */
    unsigned int SCI3: 1;                   /** \brief [3:3] SCI Debug Trigger Event Status (rwh) */
    unsigned int SCI4: 1;                   /** \brief [4:4] SCI Debug Trigger Event Status (rwh) */
    unsigned int SCI5: 1;                   /** \brief [5:5] SCI Debug Trigger Event Status (rwh) */
    unsigned int SCI6: 1;                   /** \brief [6:6] SCI Debug Trigger Event Status (rwh) */
    unsigned int SCI7: 1;                   /** \brief [7:7] SCI Debug Trigger Event Status (rwh) */
    unsigned int SCI8: 1;                   /** \brief [8:8] SCI Debug Trigger Event Status (rwh) */
    unsigned int reserved_9: 6;
    unsigned int SCID: 1;                   /** \brief [15:15] Default Slave Debug Trigger Event Status (rwh) */
    unsigned int reserved_16: 16;
} Ifx_XBAR_DBSAT_Bits;

/** External Control Register 5 */
typedef struct
{
    unsigned int reserved_0: 3;
    unsigned int WFWD: 1;                   /** \brief [3:3] Wait for FPI Write Data (rw) */
    unsigned int FREQDISS: 1;               /** \brief [4:4] Disable Fast Request Feature for SRI to FPI Transactions (rw) */
    unsigned int reserved_5: 1;
    unsigned int FREQDISF: 1;               /** \brief [6:6] Disable Fast Request Feature for FPI to SRI Transactions (rw) */
    unsigned int reserved_7: 2;
    unsigned int NODELTR: 1;                /** \brief [9:9] Control Signal for deferred transactions (rw) */
    unsigned int NORMW: 1;                  /** \brief [10:10] Control Signal for deferred transactions (rw) */
    unsigned int reserved_11: 1;
    unsigned int MAX_WS: 4;                 /** \brief [15:12] FPI-Bus Waitstait Retry Ratio (rw) */
    unsigned int reserved_16: 4;
    unsigned int RETRY_CNT: 4;              /** \brief [23:20] MIF_FPI Retry Idle Count (rw) */
    unsigned int NOPDIS: 1;                 /** \brief [24:24] NOP-Inclusion Disable (rw) */
    unsigned int reserved_25: 7;
} Ifx_XBAR_EXTCON5_Bits;

/** Transaction ID Interrupt Enable Register */
typedef struct
{
    unsigned int ENSCI0: 1;                 /** \brief [0:0] Enable ID Error from SCIn (rw) */
    unsigned int ENSCI1: 1;                 /** \brief [1:1] Enable ID Error from SCIn (rw) */
    unsigned int reserved_2: 1;
    unsigned int ENSCI3: 1;                 /** \brief [3:3] Enable ID Error from SCIn (rw) */
    unsigned int ENSCI4: 1;                 /** \brief [4:4] Enable ID Error from SCIn (rw) */
    unsigned int ENSCI5: 1;                 /** \brief [5:5] Enable ID Error from SCIn (rw) */
    unsigned int ENSCI6: 1;                 /** \brief [6:6] Enable ID Error from SCIn (rw) */
    unsigned int ENSCI7: 1;                 /** \brief [7:7] Enable ID Error from SCIn (rw) */
    unsigned int ENSCI8: 1;                 /** \brief [8:8] Enable ID Error from SCIn (rw) */
    unsigned int ENSCI9: 1;                 /** \brief [9:9] Enable ID Error from SCIn (rw) */
    unsigned int reserved_10: 5;
    unsigned int ENSCID: 1;                 /** \brief [15:15] Enable ID Error from Default Slave (rw) */
    unsigned int ENMCI16: 1;                /** \brief [16:16] Enable ID Error from MCIn (rw) */
    unsigned int ENMCI17: 1;                /** \brief [17:17] Enable ID Error from MCIn (rw) */
    unsigned int ENMCI18: 1;                /** \brief [18:18] Enable ID Error from MCIn (rw) */
    unsigned int ENMCI19: 1;                /** \brief [19:19] Enable ID Error from MCIn (rw) */
    unsigned int ENMCI20: 1;                /** \brief [20:20] Enable ID Error from MCIn (rw) */
    unsigned int ENMCI21: 1;                /** \brief [21:21] Enable ID Error from MCIn (rw) */
    unsigned int ENMCI22: 1;                /** \brief [22:22] Enable ID Error from MCIn (rw) */
    unsigned int ENMCI23: 1;                /** \brief [23:23] Enable ID Error from MCIn (rw) */
    unsigned int ENMCI24: 1;                /** \brief [24:24] Enable ID Error from MCIn (rw) */
    unsigned int ENMCI25: 1;                /** \brief [25:25] Enable ID Error from MCIn (rw) */
    unsigned int ENMCI26: 1;                /** \brief [26:26] Enable ID Error from MCIn (rw) */
    unsigned int ENMCI27: 1;                /** \brief [27:27] Enable ID Error from MCIn (rw) */
    unsigned int reserved_28: 4;
} Ifx_XBAR_IDINTEN_Bits;

/** Transaction ID Interrupt Status Register */
typedef struct
{
    unsigned int IDSCI0: 1;                 /** \brief [0:0] Transaction ID Error from SCIn Status (rwh) */
    unsigned int IDSCI1: 1;                 /** \brief [1:1] Transaction ID Error from SCIn Status (rwh) */
    unsigned int IDSCI2: 1;                 /** \brief [2:2] Transaction ID Error from SCIn Status (rwh) */
    unsigned int IDSCI3: 1;                 /** \brief [3:3] Transaction ID Error from SCIn Status (rwh) */
    unsigned int IDSCI4: 1;                 /** \brief [4:4] Transaction ID Error from SCIn Status (rwh) */
    unsigned int IDSCI5: 1;                 /** \brief [5:5] Transaction ID Error from SCIn Status (rwh) */
    unsigned int IDSCI6: 1;                 /** \brief [6:6] Transaction ID Error from SCIn Status (rwh) */
    unsigned int IDSCI7: 1;                 /** \brief [7:7] Transaction ID Error from SCIn Status (rwh) */
    unsigned int IDSCI8: 1;                 /** \brief [8:8] Transaction ID Error from SCIn Status (rwh) */
    unsigned int reserved_9: 6;
    unsigned int IDSCID: 1;                 /** \brief [15:15] Transaction ID Error from Default Slave Status (rwh) */
    unsigned int IDMCI16: 1;                /** \brief [16:16] Transaction ID Error from MCIn Status (rwh) */
    unsigned int IDMCI17: 1;                /** \brief [17:17] Transaction ID Error from MCIn Status (rwh) */
    unsigned int IDMCI18: 1;                /** \brief [18:18] Transaction ID Error from MCIn Status (rwh) */
    unsigned int IDMCI19: 1;                /** \brief [19:19] Transaction ID Error from MCIn Status (rwh) */
    unsigned int IDMCI20: 1;                /** \brief [20:20] Transaction ID Error from MCIn Status (rwh) */
    unsigned int IDMCI21: 1;                /** \brief [21:21] Transaction ID Error from MCIn Status (rwh) */
    unsigned int IDMCI22: 1;                /** \brief [22:22] Transaction ID Error from MCIn Status (rwh) */
    unsigned int IDMCI23: 1;                /** \brief [23:23] Transaction ID Error from MCIn Status (rwh) */
    unsigned int IDMCI24: 1;                /** \brief [24:24] Transaction ID Error from MCIn Status (rwh) */
    unsigned int IDMCI25: 1;                /** \brief [25:25] Transaction ID Error from MCIn Status (rwh) */
    unsigned int IDMCI26: 1;                /** \brief [26:26] Transaction ID Error from MCIn Status (rwh) */
    unsigned int IDMCI27: 1;                /** \brief [27:27] Transaction ID Error from MCIn Status (rwh) */
    unsigned int reserved_28: 4;
} Ifx_XBAR_IDINTSAT_Bits;

/** Arbiter Interrupt Status Register */
typedef struct
{
    unsigned int SCSCI0: 1;                 /** \brief [0:0] Starvation Error from SCIn Status (rwh) */
    unsigned int SCSCI1: 1;                 /** \brief [1:1] Starvation Error from SCIn Status (rwh) */
    unsigned int SCSCI2: 1;                 /** \brief [2:2] Starvation Error from SCIn Status (rwh) */
    unsigned int SCSCI3: 1;                 /** \brief [3:3] Starvation Error from SCIn Status (rwh) */
    unsigned int SCSCI4: 1;                 /** \brief [4:4] Starvation Error from SCIn Status (rwh) */
    unsigned int SCSCI5: 1;                 /** \brief [5:5] Starvation Error from SCIn Status (rwh) */
    unsigned int SCSCI6: 1;                 /** \brief [6:6] Starvation Error from SCIn Status (rwh) */
    unsigned int SCSCI7: 1;                 /** \brief [7:7] Starvation Error from SCIn Status (rwh) */
    unsigned int SCSCI8: 1;                 /** \brief [8:8] Starvation Error from SCIn Status (rwh) */
    unsigned int reserved_9: 6;
    unsigned int SCSCID: 1;                 /** \brief [15:15] Starvation Error from Default Slave Status (rwh) */
    unsigned int PRSCI16: 1;                /** \brief [16:16] Protocol Error from SCIn Status (rwh) */
    unsigned int PRSCI17: 1;                /** \brief [17:17] Protocol Error from SCIn Status (rwh) */
    unsigned int PRSCI18: 1;                /** \brief [18:18] Protocol Error from SCIn Status (rwh) */
    unsigned int PRSCI19: 1;                /** \brief [19:19] Protocol Error from SCIn Status (rwh) */
    unsigned int PRSCI20: 1;                /** \brief [20:20] Protocol Error from SCIn Status (rwh) */
    unsigned int PRSCI21: 1;                /** \brief [21:21] Protocol Error from SCIn Status (rwh) */
    unsigned int PRSCI22: 1;                /** \brief [22:22] Protocol Error from SCIn Status (rwh) */
    unsigned int PRSCI23: 1;                /** \brief [23:23] Protocol Error from SCIn Status (rwh) */
    unsigned int PRSCI24: 1;                /** \brief [24:24] Protocol Error from SCIn Status (rwh) */
    unsigned int reserved_25: 6;
    unsigned int PRSCID: 1;                 /** \brief [31:31] Protocol Error from Default Slave Status (rwh) */
} Ifx_XBAR_INTSAT_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ACCEN0_Bits B;
} Ifx_XBAR_ACCEN0;

/** Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ACCEN1_Bits B;
} Ifx_XBAR_ACCEN1;

/** Arbiter Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER0_ARBCON_Bits B;
} Ifx_XBAR_ARBITER0_ARBCON;

/** Debug Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER0_DBADD_Bits B;
} Ifx_XBAR_ARBITER0_DBADD;

/** Debug Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER0_DBCON_Bits B;
} Ifx_XBAR_ARBITER0_DBCON;

/** Debug Mask Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER0_DBMADD_Bits B;
} Ifx_XBAR_ARBITER0_DBMADD;

/** Error/Debug Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER0_ERR_Bits B;
} Ifx_XBAR_ARBITER0_ERR;

/** Error/Debug Address Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER0_ERRADDR_Bits B;
} Ifx_XBAR_ARBITER0_ERRADDR;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER0_PRIOH_Bits B;
} Ifx_XBAR_ARBITER0_PRIOH;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER0_PRIOL_Bits B;
} Ifx_XBAR_ARBITER0_PRIOL;

/** Arbiter Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER1_ARBCON_Bits B;
} Ifx_XBAR_ARBITER1_ARBCON;

/** Debug Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER1_DBADD_Bits B;
} Ifx_XBAR_ARBITER1_DBADD;

/** Debug Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER1_DBCON_Bits B;
} Ifx_XBAR_ARBITER1_DBCON;

/** Debug Mask Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER1_DBMADD_Bits B;
} Ifx_XBAR_ARBITER1_DBMADD;

/** Error/Debug Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER1_ERR_Bits B;
} Ifx_XBAR_ARBITER1_ERR;

/** Error/Debug Address Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER1_ERRADDR_Bits B;
} Ifx_XBAR_ARBITER1_ERRADDR;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER1_PRIOH_Bits B;
} Ifx_XBAR_ARBITER1_PRIOH;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER1_PRIOL_Bits B;
} Ifx_XBAR_ARBITER1_PRIOL;

/** Arbiter Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER3_ARBCON_Bits B;
} Ifx_XBAR_ARBITER3_ARBCON;

/** Debug Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER3_DBADD_Bits B;
} Ifx_XBAR_ARBITER3_DBADD;

/** Debug Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER3_DBCON_Bits B;
} Ifx_XBAR_ARBITER3_DBCON;

/** Debug Mask Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER3_DBMADD_Bits B;
} Ifx_XBAR_ARBITER3_DBMADD;

/** Error/Debug Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER3_ERR_Bits B;
} Ifx_XBAR_ARBITER3_ERR;

/** Error/Debug Address Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER3_ERRADDR_Bits B;
} Ifx_XBAR_ARBITER3_ERRADDR;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER3_PRIOH_Bits B;
} Ifx_XBAR_ARBITER3_PRIOH;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER3_PRIOL_Bits B;
} Ifx_XBAR_ARBITER3_PRIOL;

/** Arbiter Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER4_ARBCON_Bits B;
} Ifx_XBAR_ARBITER4_ARBCON;

/** Debug Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER4_DBADD_Bits B;
} Ifx_XBAR_ARBITER4_DBADD;

/** Debug Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER4_DBCON_Bits B;
} Ifx_XBAR_ARBITER4_DBCON;

/** Debug Mask Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER4_DBMADD_Bits B;
} Ifx_XBAR_ARBITER4_DBMADD;

/** Error/Debug Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER4_ERR_Bits B;
} Ifx_XBAR_ARBITER4_ERR;

/** Error/Debug Address Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER4_ERRADDR_Bits B;
} Ifx_XBAR_ARBITER4_ERRADDR;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER4_PRIOH_Bits B;
} Ifx_XBAR_ARBITER4_PRIOH;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER4_PRIOL_Bits B;
} Ifx_XBAR_ARBITER4_PRIOL;

/** Arbiter Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER5_ARBCON_Bits B;
} Ifx_XBAR_ARBITER5_ARBCON;

/** Debug Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER5_DBADD_Bits B;
} Ifx_XBAR_ARBITER5_DBADD;

/** Debug Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER5_DBCON_Bits B;
} Ifx_XBAR_ARBITER5_DBCON;

/** Debug Mask Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER5_DBMADD_Bits B;
} Ifx_XBAR_ARBITER5_DBMADD;

/** Error/Debug Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER5_ERR_Bits B;
} Ifx_XBAR_ARBITER5_ERR;

/** Error/Debug Address Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER5_ERRADDR_Bits B;
} Ifx_XBAR_ARBITER5_ERRADDR;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER5_PRIOH_Bits B;
} Ifx_XBAR_ARBITER5_PRIOH;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER5_PRIOL_Bits B;
} Ifx_XBAR_ARBITER5_PRIOL;

/** Arbiter Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER6_ARBCON_Bits B;
} Ifx_XBAR_ARBITER6_ARBCON;

/** Debug Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER6_DBADD_Bits B;
} Ifx_XBAR_ARBITER6_DBADD;

/** Debug Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER6_DBCON_Bits B;
} Ifx_XBAR_ARBITER6_DBCON;

/** Debug Mask Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER6_DBMADD_Bits B;
} Ifx_XBAR_ARBITER6_DBMADD;

/** Error/Debug Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER6_ERR_Bits B;
} Ifx_XBAR_ARBITER6_ERR;

/** Error/Debug Address Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER6_ERRADDR_Bits B;
} Ifx_XBAR_ARBITER6_ERRADDR;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER6_PRIOH_Bits B;
} Ifx_XBAR_ARBITER6_PRIOH;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER6_PRIOL_Bits B;
} Ifx_XBAR_ARBITER6_PRIOL;

/** Arbiter Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER7_ARBCON_Bits B;
} Ifx_XBAR_ARBITER7_ARBCON;

/** Debug Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER7_DBADD_Bits B;
} Ifx_XBAR_ARBITER7_DBADD;

/** Debug Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER7_DBCON_Bits B;
} Ifx_XBAR_ARBITER7_DBCON;

/** Debug Mask Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER7_DBMADD_Bits B;
} Ifx_XBAR_ARBITER7_DBMADD;

/** Error/Debug Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER7_ERR_Bits B;
} Ifx_XBAR_ARBITER7_ERR;

/** Error/Debug Address Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER7_ERRADDR_Bits B;
} Ifx_XBAR_ARBITER7_ERRADDR;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER7_PRIOH_Bits B;
} Ifx_XBAR_ARBITER7_PRIOH;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER7_PRIOL_Bits B;
} Ifx_XBAR_ARBITER7_PRIOL;

/** Arbiter Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER8_ARBCON_Bits B;
} Ifx_XBAR_ARBITER8_ARBCON;

/** Debug Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER8_DBADD_Bits B;
} Ifx_XBAR_ARBITER8_DBADD;

/** Debug Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER8_DBCON_Bits B;
} Ifx_XBAR_ARBITER8_DBCON;

/** Debug Mask Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER8_DBMADD_Bits B;
} Ifx_XBAR_ARBITER8_DBMADD;

/** Error/Debug Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER8_ERR_Bits B;
} Ifx_XBAR_ARBITER8_ERR;

/** Error/Debug Address Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER8_ERRADDR_Bits B;
} Ifx_XBAR_ARBITER8_ERRADDR;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER8_PRIOH_Bits B;
} Ifx_XBAR_ARBITER8_PRIOH;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER8_PRIOL_Bits B;
} Ifx_XBAR_ARBITER8_PRIOL;

/** Arbiter Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER9_ARBCON_Bits B;
} Ifx_XBAR_ARBITER9_ARBCON;

/** Debug Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER9_DBADD_Bits B;
} Ifx_XBAR_ARBITER9_DBADD;

/** Debug Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER9_DBCON_Bits B;
} Ifx_XBAR_ARBITER9_DBCON;

/** Debug Mask Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER9_DBMADD_Bits B;
} Ifx_XBAR_ARBITER9_DBMADD;

/** Error/Debug Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER9_ERR_Bits B;
} Ifx_XBAR_ARBITER9_ERR;

/** Error/Debug Address Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER9_ERRADDR_Bits B;
} Ifx_XBAR_ARBITER9_ERRADDR;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER9_PRIOH_Bits B;
} Ifx_XBAR_ARBITER9_PRIOH;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITER9_PRIOL_Bits B;
} Ifx_XBAR_ARBITER9_PRIOL;

/** Arbiter Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITERD_ARBCON_Bits B;
} Ifx_XBAR_ARBITERD_ARBCON;

/** Debug Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITERD_DBADD_Bits B;
} Ifx_XBAR_ARBITERD_DBADD;

/** Debug Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITERD_DBCON_Bits B;
} Ifx_XBAR_ARBITERD_DBCON;

/** Debug Mask Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITERD_DBMADD_Bits B;
} Ifx_XBAR_ARBITERD_DBMADD;

/** Error/Debug Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITERD_ERR_Bits B;
} Ifx_XBAR_ARBITERD_ERR;

/** Error/Debug Address Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITERD_ERRADDR_Bits B;
} Ifx_XBAR_ARBITERD_ERRADDR;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITERD_PRIOH_Bits B;
} Ifx_XBAR_ARBITERD_PRIOH;

/** Arbiter Priority Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_ARBITERD_PRIOL_Bits B;
} Ifx_XBAR_ARBITERD_PRIOL;

/** Debug Trigger Event Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_DBSAT_Bits B;
} Ifx_XBAR_DBSAT;

/** External Control Register 5 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_EXTCON5_Bits B;
} Ifx_XBAR_EXTCON5;

/** Transaction ID Interrupt Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_IDINTEN_Bits B;
} Ifx_XBAR_IDINTEN;

/** Transaction ID Interrupt Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_IDINTSAT_Bits B;
} Ifx_XBAR_IDINTSAT;

/** Arbiter Interrupt Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_XBAR_INTSAT_Bits B;
} Ifx_XBAR_INTSAT;

/******************************************************************************/
/*                           Struct (3 - Object L1)                           */
/******************************************************************************/

/** Arbiter objects */
typedef volatile struct
{
    Ifx_XBAR_ARBITER0_ARBCON ARBCON;        /** \brief 0, Arbiter Control Register */
    Ifx_XBAR_ARBITER0_PRIOH PRIOH;          /** \brief 4, Arbiter Priority Register */
    Ifx_XBAR_ARBITER0_PRIOL PRIOL;          /** \brief 8, Arbiter Priority Register */
    Ifx_XBAR_ARBITER0_ERRADDR ERRADDR;      /** \brief C, Error/Debug Address Capture Register */
    Ifx_XBAR_ARBITER0_ERR ERR;              /** \brief 10, Error/Debug Capture Register */
    Ifx_XBAR_ARBITER0_DBCON DBCON;          /** \brief 14, Debug Control Register */
    Ifx_XBAR_ARBITER0_DBADD DBADD;          /** \brief 18, Debug Address Register */
    Ifx_XBAR_ARBITER0_DBMADD DBMADD;        /** \brief 1C, Debug Mask Address Register */
} Ifx_XBAR_ARBITER0;

/** Arbiter objects */
typedef volatile struct
{
    Ifx_XBAR_ARBITER1_ARBCON ARBCON;        /** \brief 0, Arbiter Control Register */
    Ifx_XBAR_ARBITER1_PRIOH PRIOH;          /** \brief 4, Arbiter Priority Register */
    Ifx_XBAR_ARBITER1_PRIOL PRIOL;          /** \brief 8, Arbiter Priority Register */
    Ifx_XBAR_ARBITER1_ERRADDR ERRADDR;      /** \brief C, Error/Debug Address Capture Register */
    Ifx_XBAR_ARBITER1_ERR ERR;              /** \brief 10, Error/Debug Capture Register */
    Ifx_XBAR_ARBITER1_DBCON DBCON;          /** \brief 14, Debug Control Register */
    Ifx_XBAR_ARBITER1_DBADD DBADD;          /** \brief 18, Debug Address Register */
    Ifx_XBAR_ARBITER1_DBMADD DBMADD;        /** \brief 1C, Debug Mask Address Register */
} Ifx_XBAR_ARBITER1;

/** Arbiter objects */
typedef volatile struct
{
    Ifx_XBAR_ARBITER3_ARBCON ARBCON;        /** \brief 0, Arbiter Control Register */
    Ifx_XBAR_ARBITER3_PRIOH PRIOH;          /** \brief 4, Arbiter Priority Register */
    Ifx_XBAR_ARBITER3_PRIOL PRIOL;          /** \brief 8, Arbiter Priority Register */
    Ifx_XBAR_ARBITER3_ERRADDR ERRADDR;      /** \brief C, Error/Debug Address Capture Register */
    Ifx_XBAR_ARBITER3_ERR ERR;              /** \brief 10, Error/Debug Capture Register */
    Ifx_XBAR_ARBITER3_DBCON DBCON;          /** \brief 14, Debug Control Register */
    Ifx_XBAR_ARBITER3_DBADD DBADD;          /** \brief 18, Debug Address Register */
    Ifx_XBAR_ARBITER3_DBMADD DBMADD;        /** \brief 1C, Debug Mask Address Register */
} Ifx_XBAR_ARBITER3;

/** Arbiter objects */
typedef volatile struct
{
    Ifx_XBAR_ARBITER4_ARBCON ARBCON;        /** \brief 0, Arbiter Control Register */
    Ifx_XBAR_ARBITER4_PRIOH PRIOH;          /** \brief 4, Arbiter Priority Register */
    Ifx_XBAR_ARBITER4_PRIOL PRIOL;          /** \brief 8, Arbiter Priority Register */
    Ifx_XBAR_ARBITER4_ERRADDR ERRADDR;      /** \brief C, Error/Debug Address Capture Register */
    Ifx_XBAR_ARBITER4_ERR ERR;              /** \brief 10, Error/Debug Capture Register */
    Ifx_XBAR_ARBITER4_DBCON DBCON;          /** \brief 14, Debug Control Register */
    Ifx_XBAR_ARBITER4_DBADD DBADD;          /** \brief 18, Debug Address Register */
    Ifx_XBAR_ARBITER4_DBMADD DBMADD;        /** \brief 1C, Debug Mask Address Register */
} Ifx_XBAR_ARBITER4;

/** Arbiter objects */
typedef volatile struct
{
    Ifx_XBAR_ARBITER5_ARBCON ARBCON;        /** \brief 0, Arbiter Control Register */
    Ifx_XBAR_ARBITER5_PRIOH PRIOH;          /** \brief 4, Arbiter Priority Register */
    Ifx_XBAR_ARBITER5_PRIOL PRIOL;          /** \brief 8, Arbiter Priority Register */
    Ifx_XBAR_ARBITER5_ERRADDR ERRADDR;      /** \brief C, Error/Debug Address Capture Register */
    Ifx_XBAR_ARBITER5_ERR ERR;              /** \brief 10, Error/Debug Capture Register */
    Ifx_XBAR_ARBITER5_DBCON DBCON;          /** \brief 14, Debug Control Register */
    Ifx_XBAR_ARBITER5_DBADD DBADD;          /** \brief 18, Debug Address Register */
    Ifx_XBAR_ARBITER5_DBMADD DBMADD;        /** \brief 1C, Debug Mask Address Register */
} Ifx_XBAR_ARBITER5;

/** Arbiter objects */
typedef volatile struct
{
    Ifx_XBAR_ARBITER6_ARBCON ARBCON;        /** \brief 0, Arbiter Control Register */
    Ifx_XBAR_ARBITER6_PRIOH PRIOH;          /** \brief 4, Arbiter Priority Register */
    Ifx_XBAR_ARBITER6_PRIOL PRIOL;          /** \brief 8, Arbiter Priority Register */
    Ifx_XBAR_ARBITER6_ERRADDR ERRADDR;      /** \brief C, Error/Debug Address Capture Register */
    Ifx_XBAR_ARBITER6_ERR ERR;              /** \brief 10, Error/Debug Capture Register */
    Ifx_XBAR_ARBITER6_DBCON DBCON;          /** \brief 14, Debug Control Register */
    Ifx_XBAR_ARBITER6_DBADD DBADD;          /** \brief 18, Debug Address Register */
    Ifx_XBAR_ARBITER6_DBMADD DBMADD;        /** \brief 1C, Debug Mask Address Register */
} Ifx_XBAR_ARBITER6;

/** Arbiter objects */
typedef volatile struct
{
    Ifx_XBAR_ARBITER7_ARBCON ARBCON;        /** \brief 0, Arbiter Control Register */
    Ifx_XBAR_ARBITER7_PRIOH PRIOH;          /** \brief 4, Arbiter Priority Register */
    Ifx_XBAR_ARBITER7_PRIOL PRIOL;          /** \brief 8, Arbiter Priority Register */
    Ifx_XBAR_ARBITER7_ERRADDR ERRADDR;      /** \brief C, Error/Debug Address Capture Register */
    Ifx_XBAR_ARBITER7_ERR ERR;              /** \brief 10, Error/Debug Capture Register */
    Ifx_XBAR_ARBITER7_DBCON DBCON;          /** \brief 14, Debug Control Register */
    Ifx_XBAR_ARBITER7_DBADD DBADD;          /** \brief 18, Debug Address Register */
    Ifx_XBAR_ARBITER7_DBMADD DBMADD;        /** \brief 1C, Debug Mask Address Register */
} Ifx_XBAR_ARBITER7;

/** Arbiter objects */
typedef volatile struct
{
    Ifx_XBAR_ARBITER8_ARBCON ARBCON;        /** \brief 0, Arbiter Control Register */
    Ifx_XBAR_ARBITER8_PRIOH PRIOH;          /** \brief 4, Arbiter Priority Register */
    Ifx_XBAR_ARBITER8_PRIOL PRIOL;          /** \brief 8, Arbiter Priority Register */
    Ifx_XBAR_ARBITER8_ERRADDR ERRADDR;      /** \brief C, Error/Debug Address Capture Register */
    Ifx_XBAR_ARBITER8_ERR ERR;              /** \brief 10, Error/Debug Capture Register */
    Ifx_XBAR_ARBITER8_DBCON DBCON;          /** \brief 14, Debug Control Register */
    Ifx_XBAR_ARBITER8_DBADD DBADD;          /** \brief 18, Debug Address Register */
    Ifx_XBAR_ARBITER8_DBMADD DBMADD;        /** \brief 1C, Debug Mask Address Register */
} Ifx_XBAR_ARBITER8;

/** Arbiter objects */
typedef volatile struct
{
    Ifx_XBAR_ARBITER9_ARBCON ARBCON;        /** \brief 0, Arbiter Control Register */
    Ifx_XBAR_ARBITER9_PRIOH PRIOH;          /** \brief 4, Arbiter Priority Register */
    Ifx_XBAR_ARBITER9_PRIOL PRIOL;          /** \brief 8, Arbiter Priority Register */
    Ifx_XBAR_ARBITER9_ERRADDR ERRADDR;      /** \brief C, Error/Debug Address Capture Register */
    Ifx_XBAR_ARBITER9_ERR ERR;              /** \brief 10, Error/Debug Capture Register */
    Ifx_XBAR_ARBITER9_DBCON DBCON;          /** \brief 14, Debug Control Register */
    Ifx_XBAR_ARBITER9_DBADD DBADD;          /** \brief 18, Debug Address Register */
    Ifx_XBAR_ARBITER9_DBMADD DBMADD;        /** \brief 1C, Debug Mask Address Register */
} Ifx_XBAR_ARBITER9;

/** Arbiter objects */
typedef volatile struct
{
    Ifx_XBAR_ARBITERD_ARBCON ARBCON;        /** \brief 0, Arbiter Control Register */
    Ifx_XBAR_ARBITERD_PRIOH PRIOH;          /** \brief 4, Arbiter Priority Register */
    Ifx_XBAR_ARBITERD_PRIOL PRIOL;          /** \brief 8, Arbiter Priority Register */
    Ifx_XBAR_ARBITERD_ERRADDR ERRADDR;      /** \brief C, Error/Debug Address Capture Register */
    Ifx_XBAR_ARBITERD_ERR ERR;              /** \brief 10, Error/Debug Capture Register */
    Ifx_XBAR_ARBITERD_DBCON DBCON;          /** \brief 14, Debug Control Register */
    Ifx_XBAR_ARBITERD_DBADD DBADD;          /** \brief 18, Debug Address Register */
    Ifx_XBAR_ARBITERD_DBMADD DBMADD;        /** \brief 1C, Debug Mask Address Register */
} Ifx_XBAR_ARBITERD;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** XBAR object */
typedef volatile struct
{
    unsigned char reserved_0[4];            /** \brief 0 */
    Ifx_XBAR_ARBITERD ARBITERD;             /** \brief 4, Arbiter objects */
    unsigned char reserved_24[32];          /** \brief 24 */
    Ifx_XBAR_ARBITER0 ARBITER0;             /** \brief 44, Arbiter objects */
    unsigned char reserved_64[32];          /** \brief 64 */
    Ifx_XBAR_ARBITER1 ARBITER1;             /** \brief 84, Arbiter objects */
    unsigned char reserved_A4[96];          /** \brief A4 */
    Ifx_XBAR_ARBITER3 ARBITER3;             /** \brief 104, Arbiter objects */
    unsigned char reserved_124[32];         /** \brief 124 */
    Ifx_XBAR_ARBITER4 ARBITER4;             /** \brief 144, Arbiter objects */
    unsigned char reserved_164[28];         /** \brief 164 */
    Ifx_XBAR_EXTCON5 EXTCON5;               /** \brief 180, External Control Register 5 */
    Ifx_XBAR_ARBITER5 ARBITER5;             /** \brief 184, Arbiter objects */
    unsigned char reserved_1A4[32];         /** \brief 1A4 */
    Ifx_XBAR_ARBITER6 ARBITER6;             /** \brief 1C4, Arbiter objects */
    unsigned char reserved_1E4[32];         /** \brief 1E4 */
    Ifx_XBAR_ARBITER7 ARBITER7;             /** \brief 204, Arbiter objects */
    unsigned char reserved_224[32];         /** \brief 224 */
    Ifx_XBAR_ARBITER8 ARBITER8;             /** \brief 244, Arbiter objects */
    unsigned char reserved_264[32];         /** \brief 264 */
    Ifx_XBAR_ARBITER9 ARBITER9;             /** \brief 284, Arbiter objects */
    unsigned char reserved_2A4[356];        /** \brief 2A4 */
    Ifx_ID1 ID;                             /** \brief 408, Module Identification Register */
    Ifx_XBAR_DBSAT DBSAT;                   /** \brief 40C, Debug Trigger Event Status Register */
    Ifx_XBAR_INTSAT INTSAT;                 /** \brief 410, Arbiter Interrupt Status Register */
    Ifx_XBAR_IDINTSAT IDINTSAT;             /** \brief 414, Transaction ID Interrupt Status Register */
    Ifx_XBAR_IDINTEN IDINTEN;               /** \brief 418, Transaction ID Interrupt Enable Register */
    unsigned char reserved_41C[220];        /** \brief 41C */
    Ifx_XBAR_ACCEN1 ACCEN1;                 /** \brief 4F8, Access Enable Register 1 */
    Ifx_XBAR_ACCEN0 ACCEN0;                 /** \brief 4FC, Access Enable Register 0 */
} Ifx_XBAR;
/******************************************************************************/
#endif /* IFXXBAR_REGDEF_H */

