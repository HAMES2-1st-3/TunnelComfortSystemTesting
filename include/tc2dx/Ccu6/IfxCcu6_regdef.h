/**
 * \file IfxCcu6_regdef.h
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
#ifndef IFXCCU6_REGDEF_H
#define IFXCCU6_REGDEF_H
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
} Ifx_CCU6_ACCEN0_Bits;

/** Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_CCU6_ACCEN1_Bits;

/** Capture/Compare Register for Channel CC60 */
typedef struct
{
    unsigned int CCV: 16;                   /** \brief [15:0] Capture/Compare Value (rh) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_CC60R_Bits;

/** Capture/Compare Shadow Reg. for Channel CC60 */
typedef struct
{
    unsigned int CCS: 16;                   /** \brief [15:0] Shadow Register for Channel x Capture/Compare Value (rwh) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_CC60SR_Bits;

/** Capture/Compare Register for Channel CC61 */
typedef struct
{
    unsigned int CCV: 16;                   /** \brief [15:0] Capture/Compare Value (rh) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_CC61R_Bits;

/** Capture/Compare Shadow Reg. for Channel CC61 */
typedef struct
{
    unsigned int CCS: 16;                   /** \brief [15:0] Shadow Register for Channel x Capture/Compare Value (rwh) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_CC61SR_Bits;

/** Capture/Compare Register for Channel CC62 */
typedef struct
{
    unsigned int CCV: 16;                   /** \brief [15:0] Capture/Compare Value (rh) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_CC62R_Bits;

/** Capture/Compare Shadow Reg. for Channel CC62 */
typedef struct
{
    unsigned int CCS: 16;                   /** \brief [15:0] Shadow Register for Channel x Capture/Compare Value (rwh) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_CC62SR_Bits;

/** Compare Register for T13 */
typedef struct
{
    unsigned int CCV: 16;                   /** \brief [15:0] Channel CC63 Compare Value (rh) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_CC63R_Bits;

/** Compare Shadow Register for T13 */
typedef struct
{
    unsigned int CCS: 16;                   /** \brief [15:0] Shadow Register for Channel CC63 Compare Value (rw) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_CC63SR_Bits;

/** Compare State Modification Register */
typedef struct
{
    unsigned int MCC60S: 1;                 /** \brief [0:0] Capture/Compare Status Modification Bits (w) */
    unsigned int MCC61S: 1;                 /** \brief [1:1] Capture/Compare Status Modification Bits (w) */
    unsigned int MCC62S: 1;                 /** \brief [2:2] Capture/Compare Status Modification Bits (w) */
    unsigned int reserved_3: 3;
    unsigned int MCC63S: 1;                 /** \brief [6:6] Capture/Compare Status Modification Bits (w) */
    unsigned int reserved_7: 1;
    unsigned int MCC60R: 1;                 /** \brief [8:8] Capture/Compare Status Modification Bits (w) */
    unsigned int MCC61R: 1;                 /** \brief [9:9] Capture/Compare Status Modification Bits (w) */
    unsigned int MCC62R: 1;                 /** \brief [10:10] Capture/Compare Status Modification Bits (w) */
    unsigned int reserved_11: 3;
    unsigned int MCC63R: 1;                 /** \brief [14:14] Capture/Compare Status Modification Bits (w) */
    unsigned int reserved_15: 17;
} Ifx_CCU6_CMPMODIF_Bits;

/** Compare State Register */
typedef struct
{
    unsigned int CC60ST: 1;                 /** \brief [0:0] Capture/Compare State Bits (rh) */
    unsigned int CC61ST: 1;                 /** \brief [1:1] Capture/Compare State Bits (rh) */
    unsigned int CC62ST: 1;                 /** \brief [2:2] Capture/Compare State Bits (rh) */
    unsigned int CCPOS60: 1;                /** \brief [3:3] Sampled Hall Pattern Bits (rh) */
    unsigned int CCPOS61: 1;                /** \brief [4:4] Sampled Hall Pattern Bits (rh) */
    unsigned int CCPOS62: 1;                /** \brief [5:5] Sampled Hall Pattern Bits (rh) */
    unsigned int CC63ST: 1;                 /** \brief [6:6] Capture/Compare State Bits (rh) */
    unsigned int reserved_7: 1;
    unsigned int CC60PS: 1;                 /** \brief [8:8] Passive State Select for Compare Outputs (rwh) */
    unsigned int COUT60PS: 1;               /** \brief [9:9] Passive State Select for Compare Outputs (rwh) */
    unsigned int CC61PS: 1;                 /** \brief [10:10] Passive State Select for Compare Outputs (rwh) */
    unsigned int COUT61PS: 1;               /** \brief [11:11] Passive State Select for Compare Outputs (rwh) */
    unsigned int CC62PS: 1;                 /** \brief [12:12] Passive State Select for Compare Outputs (rwh) */
    unsigned int COUT62PS: 1;               /** \brief [13:13] Passive State Select for Compare Outputs (rwh) */
    unsigned int COUT63PS: 1;               /** \brief [14:14] Passive State Select for Compare Outputs (rwh) */
    unsigned int T13IM: 1;                  /** \brief [15:15] T13 Inverted Modulation (rwh) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_CMPSTAT_Bits;

/** Interrupt Enable Register */
typedef struct
{
    unsigned int ENCC60R: 1;                /** \brief [0:0] Capture, Compare-Match Rising Edge Interrupt Enable for Channel CC6x (rw) */
    unsigned int ENCC60F: 1;                /** \brief [1:1] Capture, Compare-Match Falling Edge Interrupt Enable for Channel CC6x (rw) */
    unsigned int ENCC61R: 1;                /** \brief [2:2] Capture, Compare-Match Rising Edge Interrupt Enable for Channel CC6x (rw) */
    unsigned int ENCC61F: 1;                /** \brief [3:3] Capture, Compare-Match Falling Edge Interrupt Enable for Channel CC6x (rw) */
    unsigned int ENCC62R: 1;                /** \brief [4:4] Capture, Compare-Match Rising Edge Interrupt Enable for Channel CC6x (rw) */
    unsigned int ENCC62F: 1;                /** \brief [5:5] Capture, Compare-Match Falling Edge Interrupt Enable for Channel CC6x (rw) */
    unsigned int ENT12OM: 1;                /** \brief [6:6] Enable Interrupt for T12 One-Match (rw) */
    unsigned int ENT12PM: 1;                /** \brief [7:7] Enable Interrupt for T12 Period-Match (rw) */
    unsigned int ENT13CM: 1;                /** \brief [8:8] Enable Interrupt for T13 Compare-Match (rw) */
    unsigned int ENT13PM: 1;                /** \brief [9:9] Enable Interrupt for T13 Period-Match (rw) */
    unsigned int ENTRPF: 1;                 /** \brief [10:10] Enable Interrupt for Trap Flag (rw) */
    unsigned int reserved_11: 1;
    unsigned int ENCHE: 1;                  /** \brief [12:12] Enable Interrupt for Correct Hall Event (rw) */
    unsigned int ENWHE: 1;                  /** \brief [13:13] Enable Interrupt for Wrong Hall Event (rw) */
    unsigned int ENIDLE: 1;                 /** \brief [14:14] Enable Idle (rw) */
    unsigned int ENSTR: 1;                  /** \brief [15:15] Enable Multi-Channel Mode Shadow Transfer Interrupt (rw) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_IEN_Bits;

/** Input Monitoring Register */
typedef struct
{
    unsigned int LBE: 1;                    /** \brief [0:0] Lost Bit Event (rwh) */
    unsigned int CCPOS0I: 1;                /** \brief [1:1] Event indication for input signal CCPOSx (rwh) */
    unsigned int CCPOS1I: 1;                /** \brief [2:2] Event indication for input signal CCPOSx (rwh) */
    unsigned int CCPOS2I: 1;                /** \brief [3:3] Event indication for input signal CCPOSx (rwh) */
    unsigned int CC60INI: 1;                /** \brief [4:4] Event indication for input signal CC6xIN (rwh) */
    unsigned int CC61INI: 1;                /** \brief [5:5] Event indication for input signal CC6xIN (rwh) */
    unsigned int CC62INI: 1;                /** \brief [6:6] Event indication for input signal CC6xIN (rwh) */
    unsigned int CTRAPI: 1;                 /** \brief [7:7] Event indication for input signal CTRAP (rwh) */
    unsigned int T12HRI: 1;                 /** \brief [8:8] Event indication for input signal T12HR (rwh) */
    unsigned int T13HRI: 1;                 /** \brief [9:9] Event indication for input signal T13HR (rwh) */
    unsigned int reserved_10: 22;
} Ifx_CCU6_IMON_Bits;

/** Interrupt Node Pointer Register */
typedef struct
{
    unsigned int INPCC60: 2;                /** \brief [1:0] Interrupt Node Pointer for Channel CC6x Interrupts (rw) */
    unsigned int INPCC61: 2;                /** \brief [3:2] Interrupt Node Pointer for Channel CC6x Interrupts (rw) */
    unsigned int INPCC62: 2;                /** \brief [5:4] Interrupt Node Pointer for Channel CC6x Interrupts (rw) */
    unsigned int INPCHE: 2;                 /** \brief [7:6] Interrupt Node Pointer for the CHE Interrupt (rw) */
    unsigned int INPERR: 2;                 /** \brief [9:8] Interrupt Node Pointer for Error Interrupts (rw) */
    unsigned int INPT12: 2;                 /** \brief [11:10] Interrupt Node Pointer for Timer12 Interrupts (rw) */
    unsigned int INPT13: 2;                 /** \brief [13:12] Interrupt Node Pointer for Timer13 Interrupt (rw) */
    unsigned int reserved_14: 18;
} Ifx_CCU6_INP_Bits;

/** Interrupt Status Register */
typedef struct
{
    unsigned int ICC60R: 1;                 /** \brief [0:0] Capture, Compare-Match Rising Edge Flag (rh) */
    unsigned int ICC60F: 1;                 /** \brief [1:1] Capture, Compare-Match Falling Edge Flag (rh) */
    unsigned int ICC61R: 1;                 /** \brief [2:2] Capture, Compare-Match Rising Edge Flag (rh) */
    unsigned int ICC61F: 1;                 /** \brief [3:3] Capture, Compare-Match Falling Edge Flag (rh) */
    unsigned int ICC62R: 1;                 /** \brief [4:4] Capture, Compare-Match Rising Edge Flag (rh) */
    unsigned int ICC62F: 1;                 /** \brief [5:5] Capture, Compare-Match Falling Edge Flag (rh) */
    unsigned int T12OM: 1;                  /** \brief [6:6] Timer T12 One-Match Flag (rh) */
    unsigned int T12PM: 1;                  /** \brief [7:7] Timer T12 Period-Match Flag (rh) */
    unsigned int T13CM: 1;                  /** \brief [8:8] Timer T13 Compare-Match Flag (rh) */
    unsigned int T13PM: 1;                  /** \brief [9:9] Timer T13 Period-Match Flag (rh) */
    unsigned int TRPF: 1;                   /** \brief [10:10] Trap Flag (rh) */
    unsigned int TRPS: 1;                   /** \brief [11:11] Trap StateDuring the trap state, the selected outputs are set to the passive state. The logic level driven during the passive state is defined by the corresponding bit in register PSLR. Bits TRPS=1 and TRPF=0 can occur if the trap condition is no longer active but the selected synchronization has not yet taken place. (rh) */
    unsigned int CHE: 1;                    /** \brief [12:12] Correct Hall Event (rh) */
    unsigned int WHE: 1;                    /** \brief [13:13] Wrong Hall Event (rh) */
    unsigned int IDLE: 1;                   /** \brief [14:14] IDLE State (rh) */
    unsigned int STR: 1;                    /** \brief [15:15] Multi-Channel Mode Shadow Transfer Request (rh) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_IS_Bits;

/** Interrupt Status Reset Register */
typedef struct
{
    unsigned int RCC60R: 1;                 /** \brief [0:0] Reset Capture, Compare-Match Rising Edge Flag (w) */
    unsigned int RCC60F: 1;                 /** \brief [1:1] Reset Capture, Compare-Match Falling Edge Flag (w) */
    unsigned int RCC61R: 1;                 /** \brief [2:2] Reset Capture, Compare-Match Rising Edge Flag (w) */
    unsigned int RCC61F: 1;                 /** \brief [3:3] Reset Capture, Compare-Match Falling Edge Flag (w) */
    unsigned int RCC62R: 1;                 /** \brief [4:4] Reset Capture, Compare-Match Rising Edge Flag (w) */
    unsigned int RCC62F: 1;                 /** \brief [5:5] Reset Capture, Compare-Match Falling Edge Flag (w) */
    unsigned int RT12OM: 1;                 /** \brief [6:6] Reset Timer T12 One-Match Flag (w) */
    unsigned int RT12PM: 1;                 /** \brief [7:7] Reset Timer T12 Period-Match Flag (w) */
    unsigned int RT13CM: 1;                 /** \brief [8:8] Reset Timer T13 Compare-Match Flag (w) */
    unsigned int RT13PM: 1;                 /** \brief [9:9] Reset Timer T13 Period-Match Flag (w) */
    unsigned int RTRPF: 1;                  /** \brief [10:10] Reset Trap Flag (w) */
    unsigned int reserved_11: 1;
    unsigned int RCHE: 1;                   /** \brief [12:12] Reset Correct Hall Event Flag (w) */
    unsigned int RWHE: 1;                   /** \brief [13:13] Reset Wrong Hall Event Flag (w) */
    unsigned int RIDLE: 1;                  /** \brief [14:14] Reset IDLE Flag (w) */
    unsigned int RSTR: 1;                   /** \brief [15:15] Reset STR Flag (w) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_ISR_Bits;

/** Interrupt Status Set Register */
typedef struct
{
    unsigned int SCC60R: 1;                 /** \brief [0:0] Set Capture, Compare-Match Rising Edge Flag (w) */
    unsigned int SCC60F: 1;                 /** \brief [1:1] Set Capture, Compare-Match Falling Edge Flag (w) */
    unsigned int SCC61R: 1;                 /** \brief [2:2] Set Capture, Compare-Match Rising Edge Flag (w) */
    unsigned int SCC61F: 1;                 /** \brief [3:3] Set Capture, Compare-Match Falling Edge Flag (w) */
    unsigned int SCC62R: 1;                 /** \brief [4:4] Set Capture, Compare-Match Rising Edge Flag (w) */
    unsigned int SCC62F: 1;                 /** \brief [5:5] Set Capture, Compare-Match Falling Edge Flag (w) */
    unsigned int ST12OM: 1;                 /** \brief [6:6] Set Timer T12 One-Match Flag (w) */
    unsigned int ST12PM: 1;                 /** \brief [7:7] Set Timer T12 Period-Match Flag (w) */
    unsigned int ST13CM: 1;                 /** \brief [8:8] Set Timer T13 Compare-Match Flag (w) */
    unsigned int ST13PM: 1;                 /** \brief [9:9] Set Timer T13 Period-Match Flag (w) */
    unsigned int STRPF: 1;                  /** \brief [10:10] Set Trap Flag (w) */
    unsigned int SWHC: 1;                   /** \brief [11:11] Software Hall Compare (w) */
    unsigned int SCHE: 1;                   /** \brief [12:12] Set Correct Hall Event Flag (w) */
    unsigned int SWHE: 1;                   /** \brief [13:13] Set Wrong Hall Event Flag (w) */
    unsigned int SIDLE: 1;                  /** \brief [14:14] Set IDLE Flag (w) */
    unsigned int SSTR: 1;                   /** \brief [15:15] Set STR Flag (w) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_ISS_Bits;

/** Kernel Reset Register 0 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int RSTSTAT: 1;                /** \brief [1:1] Kernel Reset Status (rh) */
    unsigned int reserved_2: 30;
} Ifx_CCU6_KRST0_Bits;

/** Kernel Reset Register 1 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int reserved_1: 31;
} Ifx_CCU6_KRST1_Bits;

/** Kernel Reset Status Clear Register */
typedef struct
{
    unsigned int CLR: 1;                    /** \brief [0:0] Kernel Reset Status Clear (w) */
    unsigned int reserved_1: 31;
} Ifx_CCU6_KRSTCLR_Bits;

/** Kernel State Control Sensitivity Register */
typedef struct
{
    unsigned int SB0: 1;                    /** \brief [0:0] Sensitivity Block x (rw) */
    unsigned int SB1: 1;                    /** \brief [1:1] Sensitivity Block x (rw) */
    unsigned int SB2: 1;                    /** \brief [2:2] Sensitivity Block x (rw) */
    unsigned int SB3: 1;                    /** \brief [3:3] Sensitivity Block x (rw) */
    unsigned int reserved_4: 28;
} Ifx_CCU6_KSCSR_Bits;

/** Lost Indicator Register */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int CCPOS0EN: 1;               /** \brief [1:1] Lost Indicator Enable for input signal CCPOSx (rw) */
    unsigned int CCPOS1EN: 1;               /** \brief [2:2] Lost Indicator Enable for input signal CCPOSx (rw) */
    unsigned int CCPOS2EN: 1;               /** \brief [3:3] Lost Indicator Enable for input signal CCPOSx (rw) */
    unsigned int CC60INEN: 1;               /** \brief [4:4] Lost Indicator Enable for input signal CC6xIN (rw) */
    unsigned int CC61INEN: 1;               /** \brief [5:5] Lost Indicator Enable for input signal CC6xIN (rw) */
    unsigned int CC62INEN: 1;               /** \brief [6:6] Lost Indicator Enable for input signal CC6xIN (rw) */
    unsigned int CTRAPEN: 1;                /** \brief [7:7] Lost Indicator Enable for input signal CTRAP (rw) */
    unsigned int T12HREN: 1;                /** \brief [8:8] Lost Indicator Enable for input signal T12HR (rw) */
    unsigned int T13HREN: 1;                /** \brief [9:9] Lost Indicator Enable for input signal T13HR (rw) */
    unsigned int reserved_10: 3;
    unsigned int LBEEN: 1;                  /** \brief [13:13] Interrupt Enable for Lost Bit Event (rw) */
    unsigned int INPLBE: 2;                 /** \brief [15:14] Interrupt Node Pointer for lost bit event (rw) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_LI_Bits;

/** Module Configuration Register */
typedef struct
{
    unsigned int T12: 1;                    /** \brief [0:0] T12 Available (rw) */
    unsigned int T13: 1;                    /** \brief [1:1] T13 Available (rw) */
    unsigned int MCM: 1;                    /** \brief [2:2] Multi-Channel Mode Available (rw) */
    unsigned int reserved_3: 12;
    unsigned int WREN: 1;                   /** \brief [15:15] Write Enable (rw) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_MCFG_Bits;

/** Multi-Channel Mode Control Register */
typedef struct
{
    unsigned int SWSEL: 3;                  /** \brief [2:0] Switching Selection (rw) */
    unsigned int reserved_3: 1;
    unsigned int SWSYN: 2;                  /** \brief [5:4] Switching Synchronization (rw) */
    unsigned int reserved_6: 2;
    unsigned int STE12U: 1;                 /** \brief [8:8] Shadow Transfer Enable for T12 Upcounting (rw) */
    unsigned int STE12D: 1;                 /** \brief [9:9] Shadow Transfer Enable for T12 Downcounting (rw) */
    unsigned int STE13U: 1;                 /** \brief [10:10] Shadow Transfer Enable for T13 Upcounting (rw) */
    unsigned int reserved_11: 21;
} Ifx_CCU6_MCMCTR_Bits;

/** Multi-Channel Mode Output Register */
typedef struct
{
    unsigned int MCMP: 6;                   /** \brief [5:0] Multi-Channel PWM Pattern (rh) */
    unsigned int R: 1;                      /** \brief [6:6] Reminder Flag (rh) */
    unsigned int reserved_7: 1;
    unsigned int EXPH: 3;                   /** \brief [10:8] Expected Hall Pattern (rh) */
    unsigned int CURH: 3;                   /** \brief [13:11] Current Hall Pattern (rh) */
    unsigned int reserved_14: 18;
} Ifx_CCU6_MCMOUT_Bits;

/** Multi-Channel Mode Output Shadow Register */
typedef struct
{
    unsigned int MCMPS: 6;                  /** \brief [5:0] Multi-Channel PWM Pattern Shadow (rw) */
    unsigned int reserved_6: 1;
    unsigned int STRMCM: 1;                 /** \brief [7:7] Shadow Transfer Request for MCMPS (w) */
    unsigned int EXPHS: 3;                  /** \brief [10:8] Expected Hall Pattern Shadow (rw) */
    unsigned int CURHS: 3;                  /** \brief [13:11] Current Hall Pattern Shadow (rw) */
    unsigned int reserved_14: 1;
    unsigned int STRHP: 1;                  /** \brief [15:15] Shadow Transfer Request for the Hall Pattern (w) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_MCMOUTS_Bits;

/** Modulation Control Register */
typedef struct
{
    unsigned int T12MODEN: 6;               /** \brief [5:0] T12 Modulation Enable (rw) */
    unsigned int reserved_6: 1;
    unsigned int MCMEN: 1;                  /** \brief [7:7] Multi-Channel Mode Enable (rw) */
    unsigned int T13MODEN: 6;               /** \brief [13:8] T13 Modulation Enable (rw) */
    unsigned int reserved_14: 1;
    unsigned int ECT13O: 1;                 /** \brief [15:15] Enable Compare Timer T13 Output (rw) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_MODCTR_Bits;

/** CCU60 Module Output Select Register */
typedef struct
{
    unsigned int TRIG0SEL: 3;               /** \brief [2:0]  (rw) */
    unsigned int TRIG1SEL: 3;               /** \brief [5:3]  (rw) */
    unsigned int TRIG2SEL: 3;               /** \brief [8:6]  (rw) */
    unsigned int reserved_9: 23;
} Ifx_CCU6_MOSEL_Bits;

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
} Ifx_CCU6_OCS_Bits;

/** Port Input Select Register 0 */
typedef struct
{
    unsigned int ISCC60: 2;                 /** \brief [1:0] Input Select for CC60 (rw) */
    unsigned int ISCC61: 2;                 /** \brief [3:2] Input Select for CC61 (rw) */
    unsigned int ISCC62: 2;                 /** \brief [5:4] Input Select for CC62 (rw) */
    unsigned int ISTRP: 2;                  /** \brief [7:6] Input Select for CTRAP (rw) */
    unsigned int ISPOS0: 2;                 /** \brief [9:8] Input Select for CCPOS0 (rw) */
    unsigned int ISPOS1: 2;                 /** \brief [11:10] Input Select for CCPOS1 (rw) */
    unsigned int ISPOS2: 2;                 /** \brief [13:12] Input Select for CCPOS2 (rw) */
    unsigned int IST12HR: 2;                /** \brief [15:14] Input Select for T12HR (rw) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_PISEL0_Bits;

/** Port Input Select Register 2 */
typedef struct
{
    unsigned int IST13HR: 2;                /** \brief [1:0] Input Select for T13HR (rw) */
    unsigned int ISCNT12: 2;                /** \brief [3:2] Input Select for T12 Counting Input (rw) */
    unsigned int ISCNT13: 2;                /** \brief [5:4] Input Select for T13 Counting Input (rw) */
    unsigned int T12EXT: 1;                 /** \brief [6:6] Extension for T12HR Inputs (rw) */
    unsigned int T13EXT: 1;                 /** \brief [7:7] Extension for T13HR Inputs (rw) */
    unsigned int reserved_8: 24;
} Ifx_CCU6_PISEL2_Bits;

/** Passive State Level Register */
typedef struct
{
    unsigned int PSL: 6;                    /** \brief [5:0] Compare Outputs Passive State Level (rwh) */
    unsigned int reserved_6: 1;
    unsigned int PSL63: 1;                  /** \brief [7:7] Passive State Level of Output COUT63 (rwh) */
    unsigned int reserved_8: 24;
} Ifx_CCU6_PSLR_Bits;

/** Timer T12 Counter Register */
typedef struct
{
    unsigned int T12CV: 16;                 /** \brief [15:0] Timer 12 Counter Value (rwh) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_T12_Bits;

/** Dead-Time Control Register for Timer12 */
typedef struct
{
    unsigned int DTM: 8;                    /** \brief [7:0] Dead-Time (rw) */
    unsigned int DTE0: 1;                   /** \brief [8:8] Dead Time Enable Bits (rw) */
    unsigned int DTE1: 1;                   /** \brief [9:9] Dead Time Enable Bits (rw) */
    unsigned int DTE2: 1;                   /** \brief [10:10] Dead Time Enable Bits (rw) */
    unsigned int reserved_11: 1;
    unsigned int DTR0: 1;                   /** \brief [12:12] Dead Time Run Indication Bits (rh) */
    unsigned int DTR1: 1;                   /** \brief [13:13] Dead Time Run Indication Bits (rh) */
    unsigned int DTR2: 1;                   /** \brief [14:14] Dead Time Run Indication Bits (rh) */
    unsigned int reserved_15: 17;
} Ifx_CCU6_T12DTC_Bits;

/** T12 Mode Select Register */
typedef struct
{
    unsigned int MSEL60: 4;                 /** \brief [3:0] Capture/Compare Mode Selection (rw) */
    unsigned int MSEL61: 4;                 /** \brief [7:4] Capture/Compare Mode Selection (rw) */
    unsigned int MSEL62: 4;                 /** \brief [11:8] Capture/Compare Mode Selection (rw) */
    unsigned int HSYNC: 3;                  /** \brief [14:12] Hall Synchronization (rw) */
    unsigned int DBYP: 1;                   /** \brief [15:15] Delay Bypass (rw) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_T12MSEL_Bits;

/** Timer 12 Period Register */
typedef struct
{
    unsigned int T12PV: 16;                 /** \brief [15:0] T12 Period Value (rwh) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_T12PR_Bits;

/** Timer T13 Counter Register */
typedef struct
{
    unsigned int T13CV: 16;                 /** \brief [15:0] Timer 13 Counter Value (rwh) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_T13_Bits;

/** Timer 13 Period Register */
typedef struct
{
    unsigned int T13PV: 16;                 /** \brief [15:0] T13 Period Value (rwh) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_T13PR_Bits;

/** Timer Control Register 0 */
typedef struct
{
    unsigned int T12CLK: 3;                 /** \brief [2:0] Timer T12 Input Clock Select (rw) */
    unsigned int T12PRE: 1;                 /** \brief [3:3] Timer T12 Prescaler Bit (rw) */
    unsigned int T12R: 1;                   /** \brief [4:4] Timer T12 Run BitA concurrent set/clear action on T12R (from T12SSC, T12RR or T12RS) will have no effect. The bit T12R will remain unchanged. (rh) */
    unsigned int STE12: 1;                  /** \brief [5:5] Timer T12 Shadow Transfer Enable (rh) */
    unsigned int CDIR: 1;                   /** \brief [6:6] Count Direction of Timer T12 (rh) */
    unsigned int CTM: 1;                    /** \brief [7:7] T12 Operating Mode (rw) */
    unsigned int T13CLK: 3;                 /** \brief [10:8] Timer T13 Input Clock Select (rw) */
    unsigned int T13PRE: 1;                 /** \brief [11:11] Timer T13 Prescaler Bit (rw) */
    unsigned int T13R: 1;                   /** \brief [12:12] Timer T13 Run BitA concurrent set/cleared action on T13R (from T13SSC, T13TEC, T13RR or T13RS) will have no effect. The bit T12R will remain unchanged. (rh) */
    unsigned int STE13: 1;                  /** \brief [13:13] Timer T13 Shadow Transfer Enable (rh) */
    unsigned int reserved_14: 18;
} Ifx_CCU6_TCTR0_Bits;

/** Timer Control Register 2 */
typedef struct
{
    unsigned int T12SSC: 1;                 /** \brief [0:0] Timer T12 Single Shot Control (rw) */
    unsigned int T13SSC: 1;                 /** \brief [1:1] Timer T13 Single Shot Control (rw) */
    unsigned int T13TEC: 3;                 /** \brief [4:2] T13 Trigger Event Control (rw) */
    unsigned int T13TED: 2;                 /** \brief [6:5] Timer T13 Trigger Event DirectionExample: If the timer T13 is intended to start at any compare event on T12 (T13TEC=100) the trigger event direction can be programmed to - counting up >> a T12 channel 0, 1, 2 compare match triggers T13R only while T12 is counting up - counting down >> a T12 channel 0, 1, 2 compare match triggers T13R only while T12 is counting down - independent from bit CDIR >> each T12 channel 0, 1, 2 compare match triggers T13R The timer count direction is taken from the value of bit CDIR. As a result, if T12 is running in edge-aligned mode (counting up only), T13 can only be started automatically if bit field T13TED=01 or 11. (rw) */
    unsigned int reserved_7: 1;
    unsigned int T12RSEL: 2;                /** \brief [9:8] Timer T12 External Run Selection (rw) */
    unsigned int T13RSEL: 2;                /** \brief [11:10] Timer T13 External Run Selection (rw) */
    unsigned int reserved_12: 20;
} Ifx_CCU6_TCTR2_Bits;

/** Timer Control Register 4 */
typedef struct
{
    unsigned int T12RR: 1;                  /** \brief [0:0] Timer T12 Run Reset (w) */
    unsigned int T12RS: 1;                  /** \brief [1:1] Timer T12 Run Set (w) */
    unsigned int T12RES: 1;                 /** \brief [2:2] Timer T12 Reset (w) */
    unsigned int DTRES: 1;                  /** \brief [3:3] Dead-Time Counter Reset (w) */
    unsigned int reserved_4: 1;
    unsigned int T12CNT: 1;                 /** \brief [5:5] Timer T12 Count Event (w) */
    unsigned int T12STR: 1;                 /** \brief [6:6] Timer T12 Shadow Transfer Request (w) */
    unsigned int T12STD: 1;                 /** \brief [7:7] Timer T12 Shadow Transfer Disable (w) */
    unsigned int T13RR: 1;                  /** \brief [8:8] Timer T13 Run Reset (w) */
    unsigned int T13RS: 1;                  /** \brief [9:9] Timer T13 Run Set (w) */
    unsigned int T13RES: 1;                 /** \brief [10:10] Timer T13 Reset (w) */
    unsigned int reserved_11: 2;
    unsigned int T13CNT: 1;                 /** \brief [13:13] Timer T13 Count Event (w) */
    unsigned int T13STR: 1;                 /** \brief [14:14] Timer T13 Shadow Transfer Request (w) */
    unsigned int T13STD: 1;                 /** \brief [15:15] Timer T13 Shadow Transfer Disable (w) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_TCTR4_Bits;

/** Trap Control Register */
typedef struct
{
    unsigned int TRPM0: 1;                  /** \brief [0:0] Trap Mode Control Bits 1, 0 (rw) */
    unsigned int TRPM1: 1;                  /** \brief [1:1] Trap Mode Control Bits 1, 0 (rw) */
    unsigned int TRPM2: 1;                  /** \brief [2:2] Trap Mode Control Bit 2 (rw) */
    unsigned int reserved_3: 5;
    unsigned int TRPEN: 6;                  /** \brief [13:8] Trap Enable Control (rw) */
    unsigned int TRPEN13: 1;                /** \brief [14:14] Trap Enable Control for Timer T13 (rw) */
    unsigned int TRPPEN: 1;                 /** \brief [15:15] Trap Pin Enable (rw) */
    unsigned int reserved_16: 16;
} Ifx_CCU6_TRPCTR_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_ACCEN0_Bits B;
} Ifx_CCU6_ACCEN0;

/** Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_ACCEN1_Bits B;
} Ifx_CCU6_ACCEN1;

/** Capture/Compare Register for Channel CC60 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_CC60R_Bits B;
} Ifx_CCU6_CC60R;

/** Capture/Compare Shadow Reg. for Channel CC60 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_CC60SR_Bits B;
} Ifx_CCU6_CC60SR;

/** Capture/Compare Register for Channel CC61 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_CC61R_Bits B;
} Ifx_CCU6_CC61R;

/** Capture/Compare Shadow Reg. for Channel CC61 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_CC61SR_Bits B;
} Ifx_CCU6_CC61SR;

/** Capture/Compare Register for Channel CC62 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_CC62R_Bits B;
} Ifx_CCU6_CC62R;

/** Capture/Compare Shadow Reg. for Channel CC62 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_CC62SR_Bits B;
} Ifx_CCU6_CC62SR;

/** Compare Register for T13 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_CC63R_Bits B;
} Ifx_CCU6_CC63R;

/** Compare Shadow Register for T13 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_CC63SR_Bits B;
} Ifx_CCU6_CC63SR;

/** Compare State Modification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_CMPMODIF_Bits B;
} Ifx_CCU6_CMPMODIF;

/** Compare State Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_CMPSTAT_Bits B;
} Ifx_CCU6_CMPSTAT;

/** Interrupt Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_IEN_Bits B;
} Ifx_CCU6_IEN;

/** Input Monitoring Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_IMON_Bits B;
} Ifx_CCU6_IMON;

/** Interrupt Node Pointer Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_INP_Bits B;
} Ifx_CCU6_INP;

/** Interrupt Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_IS_Bits B;
} Ifx_CCU6_IS;

/** Interrupt Status Reset Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_ISR_Bits B;
} Ifx_CCU6_ISR;

/** Interrupt Status Set Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_ISS_Bits B;
} Ifx_CCU6_ISS;

/** Kernel Reset Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_KRST0_Bits B;
} Ifx_CCU6_KRST0;

/** Kernel Reset Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_KRST1_Bits B;
} Ifx_CCU6_KRST1;

/** Kernel Reset Status Clear Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_KRSTCLR_Bits B;
} Ifx_CCU6_KRSTCLR;

/** Kernel State Control Sensitivity Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_KSCSR_Bits B;
} Ifx_CCU6_KSCSR;

/** Lost Indicator Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_LI_Bits B;
} Ifx_CCU6_LI;

/** Module Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_MCFG_Bits B;
} Ifx_CCU6_MCFG;

/** Multi-Channel Mode Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_MCMCTR_Bits B;
} Ifx_CCU6_MCMCTR;

/** Multi-Channel Mode Output Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_MCMOUT_Bits B;
} Ifx_CCU6_MCMOUT;

/** Multi-Channel Mode Output Shadow Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_MCMOUTS_Bits B;
} Ifx_CCU6_MCMOUTS;

/** Modulation Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_MODCTR_Bits B;
} Ifx_CCU6_MODCTR;

/** CCU60 Module Output Select Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_MOSEL_Bits B;
} Ifx_CCU6_MOSEL;

/** OCDS Control and Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_OCS_Bits B;
} Ifx_CCU6_OCS;

/** Port Input Select Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_PISEL0_Bits B;
} Ifx_CCU6_PISEL0;

/** Port Input Select Register 2 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_PISEL2_Bits B;
} Ifx_CCU6_PISEL2;

/** Passive State Level Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_PSLR_Bits B;
} Ifx_CCU6_PSLR;

/** Timer T12 Counter Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_T12_Bits B;
} Ifx_CCU6_T12;

/** Dead-Time Control Register for Timer12 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_T12DTC_Bits B;
} Ifx_CCU6_T12DTC;

/** T12 Mode Select Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_T12MSEL_Bits B;
} Ifx_CCU6_T12MSEL;

/** Timer 12 Period Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_T12PR_Bits B;
} Ifx_CCU6_T12PR;

/** Timer T13 Counter Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_T13_Bits B;
} Ifx_CCU6_T13;

/** Timer 13 Period Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_T13PR_Bits B;
} Ifx_CCU6_T13PR;

/** Timer Control Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_TCTR0_Bits B;
} Ifx_CCU6_TCTR0;

/** Timer Control Register 2 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_TCTR2_Bits B;
} Ifx_CCU6_TCTR2;

/** Timer Control Register 4 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_TCTR4_Bits B;
} Ifx_CCU6_TCTR4;

/** Trap Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CCU6_TRPCTR_Bits B;
} Ifx_CCU6_TRPCTR;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** CCU6 object */
typedef volatile struct
{
    Ifx_CLC1 CLC;                           /** \brief 0, Clock Control Register */
    Ifx_CCU6_MCFG MCFG;                     /** \brief 4, Module Configuration Register */
    Ifx_ID2 ID;                             /** \brief 8, Module Identification Register */
    Ifx_CCU6_MOSEL MOSEL;                   /** \brief C, CCU60 Module Output Select Register */
    Ifx_CCU6_PISEL0 PISEL0;                 /** \brief 10, Port Input Select Register 0 */
    Ifx_CCU6_PISEL2 PISEL2;                 /** \brief 14, Port Input Select Register 2 */
    unsigned char reserved_18[4];           /** \brief 18 */
    Ifx_CCU6_KSCSR KSCSR;                   /** \brief 1C, Kernel State Control Sensitivity Register */
    Ifx_CCU6_T12 T12;                       /** \brief 20, Timer T12 Counter Register */
    Ifx_CCU6_T12PR T12PR;                   /** \brief 24, Timer 12 Period Register */
    Ifx_CCU6_T12DTC T12DTC;                 /** \brief 28, Dead-Time Control Register for Timer12 */
    unsigned char reserved_2C[4];           /** \brief 2C */
    Ifx_CCU6_CC60R CC60R;                   /** \brief 30, Capture/Compare Register for Channel CC60 */
    Ifx_CCU6_CC61R CC61R;                   /** \brief 34, Capture/Compare Register for Channel CC61 */
    Ifx_CCU6_CC62R CC62R;                   /** \brief 38, Capture/Compare Register for Channel CC62 */
    unsigned char reserved_3C[4];           /** \brief 3C */
    Ifx_CCU6_CC60SR CC60SR;                 /** \brief 40, Capture/Compare Shadow Reg. for Channel CC60 */
    Ifx_CCU6_CC61SR CC61SR;                 /** \brief 44, Capture/Compare Shadow Reg. for Channel CC61 */
    Ifx_CCU6_CC62SR CC62SR;                 /** \brief 48, Capture/Compare Shadow Reg. for Channel CC62 */
    unsigned char reserved_4C[4];           /** \brief 4C */
    Ifx_CCU6_T13 T13;                       /** \brief 50, Timer T13 Counter Register */
    Ifx_CCU6_T13PR T13PR;                   /** \brief 54, Timer 13 Period Register */
    Ifx_CCU6_CC63R CC63R;                   /** \brief 58, Compare Register for T13 */
    Ifx_CCU6_CC63SR CC63SR;                 /** \brief 5C, Compare Shadow Register for T13 */
    Ifx_CCU6_CMPSTAT CMPSTAT;               /** \brief 60, Compare State Register */
    Ifx_CCU6_CMPMODIF CMPMODIF;             /** \brief 64, Compare State Modification Register */
    Ifx_CCU6_T12MSEL T12MSEL;               /** \brief 68, T12 Mode Select Register */
    unsigned char reserved_6C[4];           /** \brief 6C */
    Ifx_CCU6_TCTR0 TCTR0;                   /** \brief 70, Timer Control Register 0 */
    Ifx_CCU6_TCTR2 TCTR2;                   /** \brief 74, Timer Control Register 2 */
    Ifx_CCU6_TCTR4 TCTR4;                   /** \brief 78, Timer Control Register 4 */
    unsigned char reserved_7C[4];           /** \brief 7C */
    Ifx_CCU6_MODCTR MODCTR;                 /** \brief 80, Modulation Control Register */
    Ifx_CCU6_TRPCTR TRPCTR;                 /** \brief 84, Trap Control Register */
    Ifx_CCU6_PSLR PSLR;                     /** \brief 88, Passive State Level Register */
    Ifx_CCU6_MCMOUTS MCMOUTS;               /** \brief 8C, Multi-Channel Mode Output Shadow Register */
    Ifx_CCU6_MCMOUT MCMOUT;                 /** \brief 90, Multi-Channel Mode Output Register */
    Ifx_CCU6_MCMCTR MCMCTR;                 /** \brief 94, Multi-Channel Mode Control Register */
    Ifx_CCU6_IMON IMON;                     /** \brief 98, Input Monitoring Register */
    Ifx_CCU6_LI LI;                         /** \brief 9C, Lost Indicator Register */
    Ifx_CCU6_IS IS;                         /** \brief A0, Interrupt Status Register */
    Ifx_CCU6_ISS ISS;                       /** \brief A4, Interrupt Status Set Register */
    Ifx_CCU6_ISR ISR;                       /** \brief A8, Interrupt Status Reset Register */
    Ifx_CCU6_INP INP;                       /** \brief AC, Interrupt Node Pointer Register */
    Ifx_CCU6_IEN IEN;                       /** \brief B0, Interrupt Enable Register */
    unsigned char reserved_B4[52];          /** \brief B4 */
    Ifx_CCU6_OCS OCS;                       /** \brief E8, OCDS Control and Status Register */
    Ifx_CCU6_KRSTCLR KRSTCLR;               /** \brief EC, Kernel Reset Status Clear Register */
    Ifx_CCU6_KRST1 KRST1;                   /** \brief F0, Kernel Reset Register 1 */
    Ifx_CCU6_KRST0 KRST0;                   /** \brief F4, Kernel Reset Register 0 */
    Ifx_CCU6_ACCEN1 ACCEN1;                 /** \brief F8, Access Enable Register 1 */
    Ifx_CCU6_ACCEN0 ACCEN0;                 /** \brief FC, Access Enable Register 0 */
} Ifx_CCU6;
/******************************************************************************/
#endif /* IFXCCU6_REGDEF_H */

