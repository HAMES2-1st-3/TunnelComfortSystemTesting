/**
 * \file IfxQspi_regdef.h
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
#ifndef IFXQSPI_REGDEF_H
#define IFXQSPI_REGDEF_H
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
} Ifx_QSPI_ACCEN0_Bits;

/** Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_QSPI_ACCEN1_Bits;

/** Basic Configuration Register */
typedef struct
{
    unsigned int LAST: 1;                   /** \brief [0:0] Last Word in a Frame (rh) */
    unsigned int IPRE: 3;                   /** \brief [3:1] Prescaler for the Idle Delay (rh) */
    unsigned int IDLE: 3;                   /** \brief [6:4] Idle Delay Length (rh) */
    unsigned int LPRE: 3;                   /** \brief [9:7] Prescaler for the Leading Delay (rh) */
    unsigned int LEAD: 3;                   /** \brief [12:10] Leading Delay Length (rh) */
    unsigned int TPRE: 3;                   /** \brief [15:13] Prescaler for the Trailing Delay (rh) */
    unsigned int TRAIL: 3;                  /** \brief [18:16] Trailing Delay Length (rh) */
    unsigned int PARTYP: 1;                 /** \brief [19:19] Parity Type (rh) */
    unsigned int UINT: 1;                   /** \brief [20:20] User Interrupt at the PT1 Event in the Subsequent Frames (rh) */
    unsigned int MSB: 1;                    /** \brief [21:21] Shift MSB or LSB First (rh) */
    unsigned int BYTE: 1;                   /** \brief [22:22] Byte (rh) */
    unsigned int DL: 5;                     /** \brief [27:23] Data Length (rh) */
    unsigned int CS: 4;                     /** \brief [31:28] Channel Select (rh) */
} Ifx_QSPI_BACON_Bits;

/** BACON_ENTRY Register */
typedef struct
{
    unsigned int E: 32;                     /** \brief [31:0] Entry Point to the TxFIFO (w) */
} Ifx_QSPI_BACONENTRY_Bits;

/** Basic Configuration Register 1 */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int IPRE: 3;                   /** \brief [3:1] Prescaler for the Idle Delay, Channel 0 (rw) */
    unsigned int IDLE: 3;                   /** \brief [6:4] Idle Delay Length (rw) */
    unsigned int LPRE: 3;                   /** \brief [9:7] Prescaler for the Leading Delay, Channel 0 (rw) */
    unsigned int LEAD: 3;                   /** \brief [12:10] Leading Delay Length (rw) */
    unsigned int TPRE: 3;                   /** \brief [15:13] Prescaler for the Trailing Delay, Channel 0 (rw) */
    unsigned int TRAIL: 3;                  /** \brief [18:16] Trailing Delay Length (rw) */
    unsigned int PARTYP: 1;                 /** \brief [19:19] Parity Type (rw) */
    unsigned int reserved_20: 1;
    unsigned int MSB: 1;                    /** \brief [21:21] Shift MSB or LSB First (rw) */
    unsigned int reserved_22: 1;
    unsigned int DL: 5;                     /** \brief [27:23] Data Length (rw) */
    unsigned int CS: 4;                     /** \brief [31:28] Channel Select (rw) */
} Ifx_QSPI_BACONPWM_Bits;

/** DATA_ENTRY Register */
typedef struct
{
    unsigned int E: 32;                     /** \brief [31:0] Entry Point to the TxFIFO (w) */
} Ifx_QSPI_DATAENTRY_Bits;

/** Configuration Extension */
typedef struct
{
    unsigned int Q: 6;                      /** \brief [5:0] Time Quantum (rw) */
    unsigned int A: 2;                      /** \brief [7:6] Bit Segment 1 (rw) */
    unsigned int B: 2;                      /** \brief [9:8] Bit Segment 2 (rw) */
    unsigned int C: 2;                      /** \brief [11:10] Bit Segment 3 (rw) */
    unsigned int CPH: 1;                    /** \brief [12:12] Clock Phase (rw) */
    unsigned int CPOL: 1;                   /** \brief [13:13] Clock Polarity (rw) */
    unsigned int PAREN: 1;                  /** \brief [14:14] Enable Parity Check (rw) */
    unsigned int reserved_15: 17;
} Ifx_QSPI_ECON_Bits;

/** Flags Clear Register */
typedef struct
{
    unsigned int ERRORCLEARS: 9;            /** \brief [8:0] Write Only Bits for Clearing the Error Flags (w) */
    unsigned int TXC: 1;                    /** \brief [9:9] Transmit Event Flag Clear (w) */
    unsigned int RXC: 1;                    /** \brief [10:10] Receive Event Flag Clear (w) */
    unsigned int PT1C: 1;                   /** \brief [11:11] PT1 Event Flag Clear (w) */
    unsigned int PT2C: 1;                   /** \brief [12:12] PT2 Event Flag Clear (w) */
    unsigned int HC1C: 1;                   /** \brief [13:13] HC1 Event Flag Clear (w) */
    unsigned int HC2C: 1;                   /** \brief [14:14] HC2 Event Flag Clear (w) */
    unsigned int USRC: 1;                   /** \brief [15:15] User Event Flag Clear (w) */
    unsigned int reserved_16: 16;
} Ifx_QSPI_FLAGSCLEAR_Bits;

/** Global Configuration Register 1 */
typedef struct
{
    unsigned int ERRORENS: 9;               /** \brief [8:0] Error Enable Bits (rw) */
    unsigned int TXEN: 1;                   /** \brief [9:9] Tx Interrupt Event Enable (rw) */
    unsigned int RXEN: 1;                   /** \brief [10:10] RX Interrupt Event Enable (rw) */
    unsigned int PT1EN: 1;                  /** \brief [11:11] Interrupt on PT1 Event Enable (rw) */
    unsigned int PT2EN: 1;                  /** \brief [12:12] Interrupt on PT2 Event Enable (rw) */
    unsigned int HC1EN: 1;                  /** \brief [13:13] Interrupt on HC1 Event Enable (rw) */
    unsigned int HC2EN: 1;                  /** \brief [14:14] Interrupt on HC2 Event Enable (rw) */
    unsigned int USREN: 1;                  /** \brief [15:15] Interrupt on USR Event Enable (rw) */
    unsigned int TXFIFOINT: 2;              /** \brief [17:16] Transmit FIFO Interrupt Threshold (rw) */
    unsigned int RXFIFOINT: 2;              /** \brief [19:18] Receive FIFO Interrupt Threshold (rw) */
    unsigned int PT1: 3;                    /** \brief [22:20] Phase Transition Event 1 (rw) */
    unsigned int PT2: 3;                    /** \brief [25:23] Phase Transition Event 2 (rw) */
    unsigned int reserved_26: 4;
    unsigned int PWMVIOEN: 1;               /** \brief [30:30] PWM Time Window Violation Interrupt (rw) */
    unsigned int TVIOEN: 1;                 /** \brief [31:31] Tx FIFO Time Window Violation Interrupt (rw) */
} Ifx_QSPI_GLOBALCON1_Bits;

/** Global Configuration Register */
typedef struct
{
    unsigned int TQ: 8;                     /** \brief [7:0] Global Time Quantum Length (rw) */
    unsigned int reserved_8: 1;
    unsigned int SI: 1;                     /** \brief [9:9] Status Injection (rw) */
    unsigned int EXPECT: 4;                 /** \brief [13:10] Time-Out Value for the Expect Phase (rw) */
    unsigned int LB: 1;                     /** \brief [14:14] Loop-Back Control (rw) */
    unsigned int DEL0: 1;                   /** \brief [15:15] Delayed Mode for SLSO0 (rw) */
    unsigned int STROBE: 5;                 /** \brief [20:16] Strobe Delay for SLSO0 in Delayed Mode (rw) */
    unsigned int SRF: 1;                    /** \brief [21:21] Stop on RxFIFO Full (rw) */
    unsigned int STIP: 1;                   /** \brief [22:22] Slave Transmit Idle State Polarity (rw) */
    unsigned int reserved_23: 1;
    unsigned int EN: 1;                     /** \brief [24:24] Enable Bit (rwh) */
    unsigned int MS: 2;                     /** \brief [26:25] Master Slave Mode (rw) */
    unsigned int AREN: 1;                   /** \brief [27:27] Automatic Reset Enable (rw) */
    unsigned int RESETS: 4;                 /** \brief [31:28] Bits for resetting sub-modules per software (w) */
} Ifx_QSPI_GLOBALCON_Bits;

/** Inject Register */
typedef struct
{
    unsigned int INJECT: 32;                /** \brief [31:0] Inject (rw) */
} Ifx_QSPI_INJECT_Bits;

/** Kernel Reset Register 0 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int RSTSTAT: 1;                /** \brief [1:1] Kernel Reset Status (rh) */
    unsigned int reserved_2: 30;
} Ifx_QSPI_KRST0_Bits;

/** Kernel Reset Register 1 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int reserved_1: 31;
} Ifx_QSPI_KRST1_Bits;

/** Kernel Reset Status Clear Register */
typedef struct
{
    unsigned int CLR: 1;                    /** \brief [0:0] Kernel Reset Status Clear (w) */
    unsigned int reserved_1: 31;
} Ifx_QSPI_KRSTCLR_Bits;

/** Mask Register */
typedef struct
{
    unsigned int MASK: 32;                  /** \brief [31:0] Mask (rw) */
} Ifx_QSPI_MASK_Bits;

/** MIX_ENTRY Register */
typedef struct
{
    unsigned int E: 32;                     /** \brief [31:0] Entry Point to the TxFIFO (w) */
} Ifx_QSPI_MIXENTRY_Bits;

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
} Ifx_QSPI_OCS_Bits;

/** Port Input Select Register */
typedef struct
{
    unsigned int MRIS: 3;                   /** \brief [2:0] Master Mode Receive Input Select (rw) */
    unsigned int reserved_3: 1;
    unsigned int SRIS: 3;                   /** \brief [6:4] Slave Mode Receive Input Select (rw) */
    unsigned int reserved_7: 1;
    unsigned int SCIS: 3;                   /** \brief [10:8] Slave Mode Clock Input Select (rw) */
    unsigned int reserved_11: 1;
    unsigned int SLSIS: 3;                  /** \brief [14:12] Slave Mode Slave Select Input Selection (rw) */
    unsigned int reserved_15: 17;
} Ifx_QSPI_PISEL_Bits;

/** RX_EXIT Register */
typedef struct
{
    unsigned int E: 32;                     /** \brief [31:0] Read Point from the RxFIFO (r) */
} Ifx_QSPI_RXEXIT_Bits;

/** Slave Select Output Control Register */
typedef struct
{
    unsigned int AOL: 16;                   /** \brief [15:0] Active Output Level for the SLSO Outputs (rw) */
    unsigned int OEN: 16;                   /** \brief [31:16] Enable Bits for the SLSO Outputs (rw) */
} Ifx_QSPI_SSOC_Bits;

/** Status Register 1 */
typedef struct
{
    unsigned int BITCOUNT: 8;               /** \brief [7:0] Number of the bit shifted out (r) */
    unsigned int PWMVIO: 1;                 /** \brief [8:8] PWM Frame Violates its Time Window (rh) */
    unsigned int MPWMVIO: 2;                /** \brief [10:9] Modify the PWMVIO Flag (w) */
    unsigned int TVIO: 1;                   /** \brief [11:11] Tx FIFO Frame Violates its Time Window (rh) */
    unsigned int MTVIO: 2;                  /** \brief [13:12] Modify the TVIO Flag (w) */
    unsigned int reserved_14: 18;
} Ifx_QSPI_STATUS1_Bits;

/** Status Register */
typedef struct
{
    unsigned int ERRORFLAGS: 9;             /** \brief [8:0] Sticky Flags Signalling Errors (rwh) */
    unsigned int TXF: 1;                    /** \brief [9:9] Transmit Interrupt Request Flag (rwh) */
    unsigned int RXF: 1;                    /** \brief [10:10] Receive Interrupt Request Flag (rwh) */
    unsigned int PT1F: 1;                   /** \brief [11:11] Phase Transition 1 Flag (rwh) */
    unsigned int PT2F: 1;                   /** \brief [12:12] Phase Transition 2 Flag (rwh) */
    unsigned int HC1F: 1;                   /** \brief [13:13] PWM Half Cycle 1 Flag (rwh) */
    unsigned int HC2F: 1;                   /** \brief [14:14] PWM Half Cycle 2 Flag (rwh) */
    unsigned int USRF: 1;                   /** \brief [15:15] User Interrupt Request Flag (rwh) */
    unsigned int TXFIFOLEVEL: 3;            /** \brief [18:16] TXFIFO Filling Level (rh) */
    unsigned int RXFIFOLEVEL: 3;            /** \brief [21:19] RXFIFO Filling Level (rh) */
    unsigned int SLAVESEL: 4;               /** \brief [25:22] Currently Active Slave Select Flag (rh) */
    unsigned int RPV: 1;                    /** \brief [26:26] Received Parity Value (rh) */
    unsigned int TPV: 1;                    /** \brief [27:27] Transmitted Parity Value (rh) */
    unsigned int PHASE: 4;                  /** \brief [31:28] Flags the ongoing phase (rh) */
} Ifx_QSPI_STATUS_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_ACCEN0_Bits B;
} Ifx_QSPI_ACCEN0;

/** Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_ACCEN1_Bits B;
} Ifx_QSPI_ACCEN1;

/** Basic Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_BACON_Bits B;
} Ifx_QSPI_BACON;

/** BACON_ENTRY Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_BACONENTRY_Bits B;
} Ifx_QSPI_BACONENTRY;

/** Basic Configuration Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_BACONPWM_Bits B;
} Ifx_QSPI_BACONPWM;

/** DATA_ENTRY Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_DATAENTRY_Bits B;
} Ifx_QSPI_DATAENTRY;

/** Configuration Extension */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_ECON_Bits B;
} Ifx_QSPI_ECON;

/** Flags Clear Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_FLAGSCLEAR_Bits B;
} Ifx_QSPI_FLAGSCLEAR;

/** Global Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_GLOBALCON_Bits B;
} Ifx_QSPI_GLOBALCON;

/** Global Configuration Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_GLOBALCON1_Bits B;
} Ifx_QSPI_GLOBALCON1;

/** Inject Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_INJECT_Bits B;
} Ifx_QSPI_INJECT;

/** Kernel Reset Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_KRST0_Bits B;
} Ifx_QSPI_KRST0;

/** Kernel Reset Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_KRST1_Bits B;
} Ifx_QSPI_KRST1;

/** Kernel Reset Status Clear Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_KRSTCLR_Bits B;
} Ifx_QSPI_KRSTCLR;

/** Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_MASK_Bits B;
} Ifx_QSPI_MASK;

/** MIX_ENTRY Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_MIXENTRY_Bits B;
} Ifx_QSPI_MIXENTRY;

/** OCDS Control and Status */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_OCS_Bits B;
} Ifx_QSPI_OCS;

/** Port Input Select Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_PISEL_Bits B;
} Ifx_QSPI_PISEL;

/** RX_EXIT Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_RXEXIT_Bits B;
} Ifx_QSPI_RXEXIT;

/** Slave Select Output Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_SSOC_Bits B;
} Ifx_QSPI_SSOC;

/** Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_STATUS_Bits B;
} Ifx_QSPI_STATUS;

/** Status Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_QSPI_STATUS1_Bits B;
} Ifx_QSPI_STATUS1;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** QSPI object */
typedef volatile struct
{
    Ifx_CLC2 CLC;                           /** \brief 0, Clock Control Register */
    Ifx_QSPI_PISEL PISEL;                   /** \brief 4, Port Input Select Register */
    Ifx_ID1 ID;                             /** \brief 8, Module Identification Register */
    unsigned char reserved_C[4];            /** \brief C */
    Ifx_QSPI_GLOBALCON GLOBALCON;           /** \brief 10, Global Configuration Register */
    Ifx_QSPI_GLOBALCON1 GLOBALCON1;         /** \brief 14, Global Configuration Register 1 */
    Ifx_QSPI_BACON BACON;                   /** \brief 18, Basic Configuration Register */
    Ifx_QSPI_BACONPWM BACONPWM;             /** \brief 1C, Basic Configuration Register 1 */
    Ifx_QSPI_ECON ECON[8];                  /** \brief 20, Configuration Extension */
    Ifx_QSPI_STATUS STATUS;                 /** \brief 40, Status Register */
    Ifx_QSPI_STATUS1 STATUS1;               /** \brief 44, Status Register 1 */
    Ifx_QSPI_SSOC SSOC;                     /** \brief 48, Slave Select Output Control Register */
    Ifx_QSPI_MASK MASK;                     /** \brief 4C, Mask Register */
    Ifx_QSPI_INJECT INJECT;                 /** \brief 50, Inject Register */
    Ifx_QSPI_FLAGSCLEAR FLAGSCLEAR;         /** \brief 54, Flags Clear Register */
    unsigned char reserved_58[4];           /** \brief 58 */
    Ifx_QSPI_MIXENTRY MIXENTRY;             /** \brief 5C, MIX_ENTRY Register */
    Ifx_QSPI_BACONENTRY BACONENTRY;         /** \brief 60, BACON_ENTRY Register */
    Ifx_QSPI_DATAENTRY DATAENTRY[8];        /** \brief 64, DATA_ENTRY Register */
    unsigned char reserved_84[12];          /** \brief 84 */
    Ifx_QSPI_RXEXIT RXEXIT;                 /** \brief 90, RX_EXIT Register */
    unsigned char reserved_94[84];          /** \brief 94 */
    Ifx_QSPI_OCS OCS;                       /** \brief E8, OCDS Control and Status */
    Ifx_QSPI_KRSTCLR KRSTCLR;               /** \brief EC, Kernel Reset Status Clear Register */
    Ifx_QSPI_KRST1 KRST1;                   /** \brief F0, Kernel Reset Register 1 */
    Ifx_QSPI_KRST0 KRST0;                   /** \brief F4, Kernel Reset Register 0 */
    Ifx_QSPI_ACCEN1 ACCEN1;                 /** \brief F8, Access Enable Register 1 */
    Ifx_QSPI_ACCEN0 ACCEN0;                 /** \brief FC, Access Enable Register 0 */
} Ifx_QSPI;
/******************************************************************************/
#endif /* IFXQSPI_REGDEF_H */

