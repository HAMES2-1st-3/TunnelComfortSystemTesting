/**
 * \file IfxGtm_regdef.h
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
#ifndef IFXGTM_REGDEF_H
#define IFXGTM_REGDEF_H
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
} Ifx_GTM_ACCEN0_Bits;

/** Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_GTM_ACCEN1_Bits;

/** ADC Trigger 0 Output Select 0 Register */
typedef struct
{
    unsigned int SEL0: 4;                   /** \brief [3:0] Output Selection for ADCx GTM connection (rw) */
    unsigned int SEL1: 4;                   /** \brief [7:4] Output Selection for ADCx GTM connection (rw) */
    unsigned int SEL2: 4;                   /** \brief [11:8] Output Selection for ADCx GTM connection (rw) */
    unsigned int SEL3: 4;                   /** \brief [15:12] Output Selection for ADCx GTM connection (rw) */
    unsigned int SEL4: 4;                   /** \brief [19:16] Output Selection for ADCx GTM connection (rw) */
    unsigned int SEL5: 4;                   /** \brief [23:20] Output Selection for ADCx GTM connection (rw) */
    unsigned int SEL6: 4;                   /** \brief [27:24] Output Selection for ADCx GTM connection (rw) */
    unsigned int SEL7: 4;                   /** \brief [31:28] Output Selection for ADCx GTM connection (rw) */
} Ifx_GTM_ADCTRIG0OUT0_Bits;

/** ADC Trigger 0 Output Select 1 Register */
typedef struct
{
    unsigned int SEL0: 4;                   /** \brief [3:0] Output Selection for ADCx GTM connection (rw) */
    unsigned int reserved_4: 28;
} Ifx_GTM_ADCTRIG0OUT1_Bits;

/** ADC Trigger 1 Output Select 0 Register */
typedef struct
{
    unsigned int SEL0: 4;                   /** \brief [3:0] Output Selection for ADCx GTM connection (rw) */
    unsigned int SEL1: 4;                   /** \brief [7:4] Output Selection for ADCx GTM connection (rw) */
    unsigned int SEL2: 4;                   /** \brief [11:8] Output Selection for ADCx GTM connection (rw) */
    unsigned int SEL3: 4;                   /** \brief [15:12] Output Selection for ADCx GTM connection (rw) */
    unsigned int SEL4: 4;                   /** \brief [19:16] Output Selection for ADCx GTM connection (rw) */
    unsigned int SEL5: 4;                   /** \brief [23:20] Output Selection for ADCx GTM connection (rw) */
    unsigned int SEL6: 4;                   /** \brief [27:24] Output Selection for ADCx GTM connection (rw) */
    unsigned int SEL7: 4;                   /** \brief [31:28] Output Selection for ADCx GTM connection (rw) */
} Ifx_GTM_ADCTRIG1OUT0_Bits;

/** ADC Trigger 1 Output Select 1 Register */
typedef struct
{
    unsigned int SEL0: 4;                   /** \brief [3:0] Output Selection for ADCx GTM connection (rw) */
    unsigned int reserved_4: 28;
} Ifx_GTM_ADCTRIG1OUT1_Bits;

/** GTM AEI Timeout Exception Address Register */
typedef struct
{
    unsigned int TO_ADDR: 20;               /** \brief [19:0] AEI Timeout address (r) */
    unsigned int TO_W1R0: 1;                /** \brief [20:20] AEI Timeout Read/Write flag (r) */
    unsigned int reserved_21: 11;
} Ifx_GTM_AEI_ADDR_XPT_Bits;

/** ARU Access Register */
typedef struct
{
    unsigned int ADDR: 9;                   /** \brief [8:0] ARU address (rw) */
    unsigned int reserved_9: 3;
    unsigned int RREQ: 1;                   /** \brief [12:12] Initiate read request (rwh) */
    unsigned int WREQ: 1;                   /** \brief [13:13] Initiate write request (rwh) */
    unsigned int reserved_14: 18;
} Ifx_GTM_ARU_ACCESS_Bits;

/** ARU Access Register Upper Data Word */
typedef struct
{
    unsigned int DATA: 29;                  /** \brief [28:0] Upper ARU data word (rw) */
    unsigned int reserved_29: 3;
} Ifx_GTM_ARU_DATA_H_Bits;

/** ARU Access Register Lower Data Word */
typedef struct
{
    unsigned int DATA: 29;                  /** \brief [28:0] Lower ARU data word (rw) */
    unsigned int reserved_29: 3;
} Ifx_GTM_ARU_DATA_L_Bits;

/** Debug Access Channel 0 */
typedef struct
{
    unsigned int ADDR: 9;                   /** \brief [8:0] ARU debugging address (rw) */
    unsigned int reserved_9: 23;
} Ifx_GTM_ARU_DBG_ACCESS0_Bits;

/** Debug Access Channel 0 */
typedef struct
{
    unsigned int ADDR: 9;                   /** \brief [8:0] ARU debugging address (rw) */
    unsigned int reserved_9: 23;
} Ifx_GTM_ARU_DBG_ACCESS1_Bits;

/** Debug Access 0 Transfer Register Upper Data Word */
typedef struct
{
    unsigned int DATA: 29;                  /** \brief [28:0] Upper debug data word (r) */
    unsigned int reserved_29: 3;
} Ifx_GTM_ARU_DBG_DATA0_H_Bits;

/** Debug Access 0 Transfer Register Lower Data Word */
typedef struct
{
    unsigned int DATA: 29;                  /** \brief [28:0] Lower debug data word (r) */
    unsigned int reserved_29: 3;
} Ifx_GTM_ARU_DBG_DATA0_L_Bits;

/** Debug Access 1 Transfer Register Upper Data Word */
typedef struct
{
    unsigned int DATA: 29;                  /** \brief [28:0] Upper debug data word (r) */
    unsigned int reserved_29: 3;
} Ifx_GTM_ARU_DBG_DATA1_H_Bits;

/** Debug Access 1 Transfer Register Lower Data Word */
typedef struct
{
    unsigned int DATA: 29;                  /** \brief [28:0] Lower debug data word (r) */
    unsigned int reserved_29: 3;
} Ifx_GTM_ARU_DBG_DATA1_L_Bits;

/** ARU Interrupt Enable Register */
typedef struct
{
    unsigned int NEW_DATA0_IRQ_EN: 1;       /** \brief [0:0] ARU_NEW_DATA0_IRQ interrupt enable (rw) */
    unsigned int NEW_DATA1_IRQ_EN: 1;       /** \brief [1:1] ARU_NEW_DATA1_IRQ interrupt enable (rw) */
    unsigned int ACC_ACK_IRQ_EN: 1;         /** \brief [2:2] ACC_ACK_IRQ interrupt enable (rw) */
    unsigned int reserved_3: 29;
} Ifx_GTM_ARU_IRQ_EN_Bits;

/** ARU_NEW_DATA_IRQ Forcing Interrupt Register */
typedef struct
{
    unsigned int TRG_NEW_DATA0: 1;          /** \brief [0:0] Trigger new data 0 interrupt (w) */
    unsigned int TRG_NEW_DATA: 1;           /** \brief [1:1] 1 Trigger new data 1 interrupt (w) */
    unsigned int TRG_ACC_ACK: 1;            /** \brief [2:2] Trigger ACC_ACK interrupt (w) */
    unsigned int reserved_3: 29;
} Ifx_GTM_ARU_IRQ_FORCINT_Bits;

/** IRQ Mode Configuration Register */
typedef struct
{
    unsigned int IRQ_MODE: 2;               /** \brief [1:0] IRQ mode selection (rw) */
    unsigned int reserved_2: 30;
} Ifx_GTM_ARU_IRQ_MODE_Bits;

/** ARU Interrupt Notification Register */
typedef struct
{
    unsigned int NEW_DATA0: 1;              /** \brief [0:0] Data was transferred for addr ARU_DBG_ACCESS0 (rwh) */
    unsigned int NEW_DATA1: 1;              /** \brief [1:1] Data was transferred for addr ARU_DBG_ACCESS1 (rwh) */
    unsigned int ACC_ACK: 1;                /** \brief [2:2] AEI to ARU access finished, on read access data are valid (rwh) */
    unsigned int reserved_3: 29;
} Ifx_GTM_ARU_IRQ_NOTIFY_Bits;

/** ATOM AGC Force Update Control Register */
typedef struct
{
    unsigned int FUPD_CTRL0: 2;             /** \brief [1:0] Force update of (A)TOM channel 0 operation registers (rw) */
    unsigned int FUPD_CTRL1: 2;             /** \brief [3:2] Force update of (A)TOM channel 1 operation registers (rw) */
    unsigned int FUPD_CTRL2: 2;             /** \brief [5:4] Force update of (A)TOM channel 2 operation registers (rw) */
    unsigned int FUPD_CTRL3: 2;             /** \brief [7:6] Force update of (A)TOM channel 3 operation registers (rw) */
    unsigned int FUPD_CTRL4: 2;             /** \brief [9:8] Force update of (A)TOM channel 4 operation registers (rw) */
    unsigned int FUPD_CTRL5: 2;             /** \brief [11:10] Force update of (A)TOM channel 5 operation registers (rw) */
    unsigned int FUPD_CTRL6: 2;             /** \brief [13:12] Force update of (A)TOM channel 6 operation registers (rw) */
    unsigned int FUPD_CTRL7: 2;             /** \brief [15:14] Force update of (A)TOM channel 7 operation registers (rw) */
    unsigned int RSTCN0_CH0: 2;             /** \brief [17:16] Reset CN0 of channel 0 on force update event (rw) */
    unsigned int RSTCN0_CH1: 2;             /** \brief [19:18] Reset CN0 of channel 1 on force update event (rw) */
    unsigned int RSTCN0_CH2: 2;             /** \brief [21:20] Reset CN0 of channel 2 on force update event (rw) */
    unsigned int RSTCN0_CH3: 2;             /** \brief [23:22] Reset CN0 of channel 3 on force update event (rw) */
    unsigned int RSTCN0_CH4: 2;             /** \brief [25:24] Reset CN0 of channel 4 on force update event (rw) */
    unsigned int RSTCN0_CH5: 2;             /** \brief [27:26] Reset CN0 of channel 5 on force update event (rw) */
    unsigned int RSTCN0_CH6: 2;             /** \brief [29:28] Reset CN0 of channel 6 on force update event (rw) */
    unsigned int RSTCN0_CH7: 2;             /** \brief [31:30] Reset CN0 of channel 7 on force update event (rw) */
} Ifx_GTM_ATOM_AGC0_FUPD_CTRL_Bits;

/** ATOM AGC Output Enable Control Register */
typedef struct
{
    unsigned int OUTEN_CTRL0: 2;            /** \brief [1:0] Output (A)TOM_OUT(0) enable/disable update value (rw) */
    unsigned int OUTEN_CTRL1: 2;            /** \brief [3:2] Output (A)TOM_OUT(1)enable/disable update value (rw) */
    unsigned int OUTEN_CTRL2: 2;            /** \brief [5:4] Output (A)TOM_OUT(2) enable/disable update value (rw) */
    unsigned int OUTEN_CTRL3: 2;            /** \brief [7:6] Output (A)TOM_OUT(3) enable/disable update value (rw) */
    unsigned int OUTEN_CTRL4: 2;            /** \brief [9:8] Output (A)TOM_OUT(4) enable/disable update value (rw) */
    unsigned int OUTEN_CTRL5: 2;            /** \brief [11:10] Output (A)TOM_OUT(5) enable/disable update value (rw) */
    unsigned int OUTEN_CTRL6: 2;            /** \brief [13:12] Output (A)TOM_OUT(6) enable/disable update value (rw) */
    unsigned int OUTEN_CTRL7: 2;            /** \brief [15:14] Output (A)TOM_OUT(7) enable/disable update value (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_ATOM_AGC0_OUTEN_CTRL_Bits;

/** TOM TGC0 Action Time Base Register */
typedef struct
{
    unsigned int TB_VAL: 24;                /** \brief [23:0] Time base value (rw) */
    unsigned int TB_TRIG: 1;                /** \brief [24:24] Set trigger request (rwh) */
    unsigned int TBU_SEL: 2;                /** \brief [26:25] Selection of time base used for comparison (rw) */
    unsigned int reserved_27: 5;
} Ifx_GTM_ATOM_AGC_ACT_TB_Bits;

/** ATOM AGC Enable/Disable Control Register */
typedef struct
{
    unsigned int ENDIS_CTRL0: 2;            /** \brief [1:0] (A)TOM channel 0 enable/disable update value (rw) */
    unsigned int ENDIS_CTRL1: 2;            /** \brief [3:2] (A)TOM channel 1 enable/disable update value (rw) */
    unsigned int ENDIS_CTRL2: 2;            /** \brief [5:4] (A)TOM channel 2 enable/disable update value (rw) */
    unsigned int ENDIS_CTRL3: 2;            /** \brief [7:6] (A)TOM channel 3 enable/disable update value (rw) */
    unsigned int ENDIS_CTRL4: 2;            /** \brief [9:8] (A)TOM channel 4 enable/disable update value (rw) */
    unsigned int ENDIS_CTRL5: 2;            /** \brief [11:10] (A)TOM channel 5 enable/disable update value (rw) */
    unsigned int ENDIS_CTRL6: 2;            /** \brief [13:12] (A)TOM channel 6 enable/disable update value (rw) */
    unsigned int ENDIS_CTRL7: 2;            /** \brief [15:14] (A)TOM channel 7 enable/disable update value (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits;

/** ATOM AGC Enable/Disable Status Register */
typedef struct
{
    unsigned int ENDIS_STAT0: 2;            /** \brief [1:0] (A)TOM channel 0 enable/disable (rw) */
    unsigned int ENDIS_STAT1: 2;            /** \brief [3:2] (A)TOM channel 1 enable/disable (rw) */
    unsigned int ENDIS_STAT2: 2;            /** \brief [5:4] (A)TOM channel 2 enable/disable (rw) */
    unsigned int ENDIS_STAT3: 2;            /** \brief [7:6] (A)TOM channel 3 enable/disable (rw) */
    unsigned int ENDIS_STAT4: 2;            /** \brief [9:8] (A)TOM channel 4 enable/disable (rw) */
    unsigned int ENDIS_STAT5: 2;            /** \brief [11:10] (A)TOM channel 5 enable/disable (rw) */
    unsigned int ENDIS_STAT6: 2;            /** \brief [13:12] (A)TOM channel 6 enable/disable (rw) */
    unsigned int ENDIS_STAT7: 2;            /** \brief [15:14] (A)TOM channel 7 enable/disable (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits;

/** ATOM AGC Global control register */
typedef struct
{
    unsigned int HOST_TRIG: 1;              /** \brief [0:0] Trigger request signal (see AGC) to update the register ENDIS_STAT and OUTEN_STAT (w) */
    unsigned int reserved_1: 7;
    unsigned int RST_CH0: 1;                /** \brief [8:8] Software reset of channel 0 (w) */
    unsigned int RST_CH1: 1;                /** \brief [9:9] Software reset of channel 1 (w) */
    unsigned int RST_CH2: 1;                /** \brief [10:10] Software reset of channel 2 (w) */
    unsigned int RST_CH3: 1;                /** \brief [11:11] Software reset of channel 3 (w) */
    unsigned int RST_CH4: 1;                /** \brief [12:12] Software reset of channel 4 (w) */
    unsigned int RST_CH5: 1;                /** \brief [13:13] Software reset of channel 5 (w) */
    unsigned int RST_CH6: 1;                /** \brief [14:14] Software reset of channel 6 (w) */
    unsigned int RST_CH7: 1;                /** \brief [15:15] Software reset of channel 7 (w) */
    unsigned int UPEN_CTRL0: 2;             /** \brief [17:16] ATOM channel 0 enable update of register CM0, CM1 and CLK_SRC_STAT from SR0, SR1 and CLK_SRC (rw) */
    unsigned int UPEN_CTRL1: 2;             /** \brief [19:18] ATOM channel 1 enable update of register CM0, CM1 and CLK_SRC_STAT (rw) */
    unsigned int UPEN_CTRL2: 2;             /** \brief [21:20] ATOM channel 2 enable update of register CM0, CM1 and CLK_SRC_STAT (rw) */
    unsigned int UPEN_CTRL3: 2;             /** \brief [23:22] ATOM channel 3 enable update of register CM0, CM1 and CLK_SRC_STAT (rw) */
    unsigned int UPEN_CTRL4: 2;             /** \brief [25:24] ATOM channel 4 enable update of register CM0, CM1 and CLK_SRC_STAT (rw) */
    unsigned int UPEN_CTRL5: 2;             /** \brief [27:26] ATOM channel 5 enable update of register CM0, CM1 and CLK_SRC_STAT (rw) */
    unsigned int UPEN_CTRL6: 2;             /** \brief [29:28] ATOM channel 6 enable update of register CM0, CM1 and CLK_SRC_STAT (rw) */
    unsigned int UPEN_CTRL7: 2;             /** \brief [31:30] ATOM channel 7 enable update of register CM0, CM1 and CLK_SRC_STAT (rw) */
} Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits;

/** ATOM AGC Internal Trigger Control Register */
typedef struct
{
    unsigned int INT_TRIG0: 2;              /** \brief [1:0] Select input signal TRIG_0 as a trigger source (rw) */
    unsigned int INT_TRIG1: 2;              /** \brief [3:2] Select input signal TRIG_1 as a trigger source (rw) */
    unsigned int INT_TRIG2: 2;              /** \brief [5:4] Select input signal TRIG_2 as a trigger source (rw) */
    unsigned int INT_TRIG3: 2;              /** \brief [7:6] Select input signal TRIG_3 as a trigger source (rw) */
    unsigned int INT_TRIG4: 2;              /** \brief [9:8] Select input signal TRIG_4 as a trigger source (rw) */
    unsigned int INT_TRIG5: 2;              /** \brief [11:10] Select input signal TRIG_5 as a trigger source (rw) */
    unsigned int INT_TRIG6: 2;              /** \brief [13:12] Select input signal TRIG_6 as a trigger source (rw) */
    unsigned int INT_TRIG7: 2;              /** \brief [15:14] Select input signal TRIG_7 as a trigger source (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_ATOM_AGC_INT_TRIG_Bits;

/** ATOM AGC Output Enable Status Register */
typedef struct
{
    unsigned int OUTEN_STAT0: 2;            /** \brief [1:0] Control/status of output (A)TOM_OUT(0) (rw) */
    unsigned int OUTEN_STAT1: 2;            /** \brief [3:2] Control/status of output (A)TOM_OUT(1) (rw) */
    unsigned int OUTEN_STAT2: 2;            /** \brief [5:4] Control/status of output (A)TOM_OUT(2) (rw) */
    unsigned int OUTEN_STAT3: 2;            /** \brief [7:6] Control/status of output (A)TOM_OUT(3) (rw) */
    unsigned int OUTEN_STAT4: 2;            /** \brief [9:8] Control/status of output (A)TOM_OUT(4) (rw) */
    unsigned int OUTEN_STAT5: 2;            /** \brief [11:10] Control/status of output (A)TOM_OUT(5) (rw) */
    unsigned int OUTEN_STAT6: 2;            /** \brief [13:12] Control/status of output (A)TOM_OUT(6) (rw) */
    unsigned int OUTEN_STAT7: 2;            /** \brief [15:14] Control/status of output (A)TOM_OUT(7) (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits;

/** ATOM Channel CCU0 Compare Register */
typedef struct
{
    unsigned int CM0: 24;                   /** \brief [23:0] ATOM CCU0 compare register (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_ATOM_CH_CM0_Bits;

/** ATOM Channel CCU1 Compare Register */
typedef struct
{
    unsigned int CM1: 24;                   /** \brief [23:0] ATOM CCU1 compare register (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_ATOM_CH_CM1_Bits;

/** ATOM Channel CCU0 Counter Register */
typedef struct
{
    unsigned int CN0: 24;                   /** \brief [23:0] ATOM CCU0 counter register (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_ATOM_CH_CN0_Bits;

/** ATOM Channel Control Register */
typedef struct
{
    unsigned int MODE: 2;                   /** \brief [1:0] ATOM channel mode select (rw) */
    unsigned int TB12_SEL: 1;               /** \brief [2:2] Select time base value TBU_TS1 or TBU_TS2. (rw) */
    unsigned int ARU_EN: 1;                 /** \brief [3:3] ARU Input stream enable (rw) */
    unsigned int ACB: 5;                    /** \brief [8:4] ATOM Mode control bits (rw) */
    unsigned int CMP_CTRL: 1;               /** \brief [9:9] CCUx compare strategy select (rw) */
    unsigned int reserved_10: 1;
    unsigned int SL: 1;                     /** \brief [11:11] Initial signal level (rw) */
    unsigned int CLK_SRC: 3;                /** \brief [14:12] actual CMU clock source (SOMS)/ shadow register for CMU clock source (SOMP) (rw) */
    unsigned int reserved_15: 1;
    unsigned int WR_REQ: 1;                 /** \brief [16:16] CPU Write request bit for late compare register update (rw) */
    unsigned int reserved_17: 3;
    unsigned int RST_CCU0: 1;               /** \brief [20:20] Reset source of CCU0 (rw) */
    unsigned int reserved_21: 3;
    unsigned int TRIGOUT: 1;                /** \brief [24:24] Trigger output selection (output signal TRIG_CHx) of module ATOM_CHx. (rw) */
    unsigned int reserved_25: 1;
    unsigned int OSM: 1;                    /** \brief [26:26] One-shot mode (rw) */
    unsigned int ABM: 1;                    /** \brief [27:27] ARU blocking mode (rw) */
    unsigned int reserved_28: 4;
} Ifx_GTM_ATOM_CH_CTRL_Bits;

/** ATOM Channel Interrupt Enable Register */
typedef struct
{
    unsigned int CCU0TC_IRQ_EN: 1;          /** \brief [0:0] ATOM_CCU0TC_IRQ interrupt enable. (rw) */
    unsigned int CCU1TC_IRQ_EN: 1;          /** \brief [1:1] ATOM_CCU1TC_IRQ interrupt enable. (rw) */
    unsigned int reserved_2: 30;
} Ifx_GTM_ATOM_CH_IRQ_EN_Bits;

/** ATOM Channel Software Interrupt Generation Register */
typedef struct
{
    unsigned int TRG_CCU0TC: 1;             /** \brief [0:0] Trigger ATOM_CCU0TC_IRQ interrupt by software. (w) */
    unsigned int TRG_CCU1TC: 1;             /** \brief [1:1] Trigger ATOM_CCU0TC_IRQ interrupt by software (w) */
    unsigned int reserved_2: 30;
} Ifx_GTM_ATOM_CH_IRQ_FORCINT_Bits;

/** ATOM IRQ Mode Configuration Register */
typedef struct
{
    unsigned int IRQ_MODE: 2;               /** \brief [1:0] IRQ mode selection (rw) */
    unsigned int reserved_2: 30;
} Ifx_GTM_ATOM_CH_IRQ_MODE_Bits;

/** ATOM Channel Interrupt Notification Register */
typedef struct
{
    unsigned int CCU0TC: 1;                 /** \brief [0:0] CCU0 Trigger condition interrupt for channel x (rwh) */
    unsigned int CCU1TC: 1;                 /** \brief [1:1] CCU1 Trigger condition interrupt for channel x (rwh) */
    unsigned int reserved_2: 30;
} Ifx_GTM_ATOM_CH_IRQ_NOTIFY_Bits;

/** ATOM Channel ARU Read Address Register */
typedef struct
{
    unsigned int RDADDR0: 9;                /** \brief [8:0] ARU Read address 0 (rw) */
    unsigned int reserved_9: 7;
    unsigned int RDADDR1: 9;                /** \brief [24:16] ARU Read address 1 (rw) */
    unsigned int reserved_25: 7;
} Ifx_GTM_ATOM_CH_RDADDR_Bits;

/** ATOM Channel CCU0 Compare Shadow Register */
typedef struct
{
    unsigned int SR0: 24;                   /** \brief [23:0] ATOM channel x shadow register SR0 (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_ATOM_CH_SR0_Bits;

/** ATOM Channel CCU1 Compare Shadow Register */
typedef struct
{
    unsigned int SR1: 24;                   /** \brief [23:0] ATOM channel x shadow register SR0 (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_ATOM_CH_SR1_Bits;

/** ATOM Channel Status Register */
typedef struct
{
    unsigned int OL: 1;                     /** \brief [0:0] Actual output signal level of ATOM_CHx_OUT. (r) */
    unsigned int reserved_1: 15;
    unsigned int ACBI: 5;                   /** \brief [20:16] ATOM Mode control bits received through ARU (r) */
    unsigned int DV: 1;                     /** \brief [21:21] Valid ARU Data stored in compare registers (r) */
    unsigned int WRF: 1;                    /** \brief [22:22] Write request of CPU failed for late update (rwh) */
    unsigned int reserved_23: 1;
    unsigned int ACBO: 5;                   /** \brief [28:24] ATOM Internal status bits (r) */
    unsigned int reserved_29: 3;
} Ifx_GTM_ATOM_CH_STAT_Bits;

/** BRC Interrupt Enable Register */
typedef struct
{
    unsigned int DEST_ERR_EN: 1;            /** \brief [0:0] BRC_DEST_ERR_IRQ interrupt enable (rw) */
    unsigned int DID_ENx: 12;               /** \brief [12:1] BRC_DID_IRQ interrupt enable (rw) */
    unsigned int reserved_13: 19;
} Ifx_GTM_BRC_IRQ_EN_Bits;

/** BRC_DEST_ERR Forcing Interrupt Register */
typedef struct
{
    unsigned int TRG_DEST_ERR: 1;           /** \brief [0:0] Trigger destination error interrupt (w) */
    unsigned int TRG_DIDx: 12;              /** \brief [12:1] Trigger data inconsistency error interrupt (w) */
    unsigned int reserved_13: 19;
} Ifx_GTM_BRC_IRQ_FORCINT_Bits;

/** BRC IRQ Mode Configuration Register */
typedef struct
{
    unsigned int IRQ_MODE: 2;               /** \brief [1:0] IRQ mode selection (rw) */
    unsigned int reserved_2: 30;
} Ifx_GTM_BRC_IRQ_MODE_Bits;

/** BRC Interrupt Notification Register */
typedef struct
{
    unsigned int DEST_ERR: 1;               /** \brief [0:0] Configuration error interrupt for BRC submodule (rwh) */
    unsigned int DIDx: 12;                  /** \brief [12:1] Data inconsistency occurred in MTM mode (rwh) */
    unsigned int reserved_13: 19;
} Ifx_GTM_BRC_IRQ_NOTIFY_Bits;

/** BRC Software Reset Register */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Software reset (w) */
    unsigned int reserved_1: 31;
} Ifx_GTM_BRC_RST_Bits;

/** Read Address For Input Channel */
typedef struct
{
    unsigned int ADDR: 9;                   /** \brief [8:0] Source ARU address (rw) */
    unsigned int reserved_9: 3;
    unsigned int BRC_MODE: 1;               /** \brief [12:12] BRC Operation mode select (rw) */
    unsigned int reserved_13: 19;
} Ifx_GTM_BRC_SRC_ADDR_Bits;

/** Destination Channels For Input Channel */
typedef struct
{
    unsigned int EN_DEST0: 1;               /** \brief [0:0] Enable BRC destination address 0 (rw) */
    unsigned int EN_DEST1: 1;               /** \brief [1:1] Enable BRC destination address 1 (rw) */
    unsigned int EN_DEST2: 1;               /** \brief [2:2] Enable BRC destination address 2 (rw) */
    unsigned int EN_DEST3: 1;               /** \brief [3:3] Enable BRC destination address 3 (rw) */
    unsigned int EN_DEST4: 1;               /** \brief [4:4] Enable BRC destination address 4 (rw) */
    unsigned int EN_DEST5: 1;               /** \brief [5:5] Enable BRC destination address 5 (rw) */
    unsigned int EN_DEST6: 1;               /** \brief [6:6] Enable BRC destination address 6 (rw) */
    unsigned int EN_DEST7: 1;               /** \brief [7:7] Enable BRC destination address 7 (rw) */
    unsigned int EN_DEST8: 1;               /** \brief [8:8] Enable BRC destination address 8 (rw) */
    unsigned int EN_DEST9: 1;               /** \brief [9:9] Enable BRC destination address 9 (rw) */
    unsigned int EN_DEST10: 1;              /** \brief [10:10] Enable BRC destination address 10 (rw) */
    unsigned int EN_DEST11: 1;              /** \brief [11:11] Enable BRC destination address 11 (rw) */
    unsigned int EN_DEST12: 1;              /** \brief [12:12] Enable BRC destination address 12 (rw) */
    unsigned int EN_DEST13: 1;              /** \brief [13:13] Enable BRC destination address 13 (rw) */
    unsigned int EN_DEST14: 1;              /** \brief [14:14] Enable BRC destination address 14 (rw) */
    unsigned int EN_DEST15: 1;              /** \brief [15:15] Enable BRC destination address 15 (rw) */
    unsigned int EN_DEST16: 1;              /** \brief [16:16] Enable BRC destination address 16 (rw) */
    unsigned int EN_DEST17: 1;              /** \brief [17:17] Enable BRC destination address 17 (rw) */
    unsigned int EN_DEST18: 1;              /** \brief [18:18] Enable BRC destination address 18 (rw) */
    unsigned int EN_DEST19: 1;              /** \brief [19:19] Enable BRC destination address 19 (rw) */
    unsigned int EN_DEST20: 1;              /** \brief [20:20] Enable BRC destination address 20 (rw) */
    unsigned int EN_DEST21: 1;              /** \brief [21:21] Enable BRC destination address 21 (rw) */
    unsigned int EN_TRASHBIN: 1;            /** \brief [22:22] Control trash bin functionality (rw) */
    unsigned int reserved_23: 9;
} Ifx_GTM_BRC_SRC_DEST_Bits;

/** GTM to SPB BRIDGE MODE */
typedef struct
{
    unsigned int BRG_MODE: 1;               /** \brief [0:0] Defines the operation mode for the AEI bridge (rw) */
    unsigned int MSK_WR_RSP: 1;             /** \brief [1:1] Mask write response (rw) */
    unsigned int reserved_2: 6;
    unsigned int MODE_UP_PGR: 1;            /** \brief [8:8] Mode update in progress (r) */
    unsigned int BUFF_OVL: 1;               /** \brief [9:9] Buffer overflow register (rwh) */
    unsigned int reserved_10: 6;
    unsigned int BRG_RST: 1;                /** \brief [16:16] Bridge software reset (w) */
    unsigned int reserved_17: 7;
    unsigned int BUFF_DPT: 8;               /** \brief [31:24] Buffer depth of AEI bridge (r) */
} Ifx_GTM_BRIDGE_MODE_Bits;

/** GTM to SPB BRIDGE PTR1 */
typedef struct
{
    unsigned int NEW_TRAN_PTR: 5;           /** \brief [4:0] New transaction pointer (r) */
    unsigned int FIRST_RSP_PTR: 5;          /** \brief [9:5] First response pointer (r) */
    unsigned int TRAN_IN_PGR: 5;            /** \brief [14:10] Transaction in progress pointer (aquire) (r) */
    unsigned int ABT_TRAN_PGR: 5;           /** \brief [19:15] Aborted transaction in progress pointer (r) */
    unsigned int FBC: 6;                    /** \brief [25:20] Free buffer count (r) */
    unsigned int RSP_TRAN_RDY: 6;           /** \brief [31:26] Response transactions ready (r) */
} Ifx_GTM_BRIDGE_PTR1_Bits;

/** GTM to SPB BRIDGE PTR2 */
typedef struct
{
    unsigned int TRAN_IN_PGR2: 5;           /** \brief [4:0] Transaction in progress pointer (aquire2) (r) */
    unsigned int reserved_5: 27;
} Ifx_GTM_BRIDGE_PTR2_Bits;

/** Clock Control Register */
typedef struct
{
    unsigned int DISR: 1;                   /** \brief [0:0] Module Disable Request Bit (rw) */
    unsigned int DISS: 1;                   /** \brief [1:1] Module Disable Status Bit (r) */
    unsigned int reserved_2: 1;
    unsigned int EDIS: 1;                   /** \brief [3:3] Sleep Mode Enable Control (rw) */
    unsigned int reserved_4: 28;
} Ifx_GTM_CLC_Bits;

/** CMP Comparator Enable Register */
typedef struct
{
    unsigned int ABWC0_EN: 1;               /** \brief [0:0] Enable comparator 0 in ABWC (rw) */
    unsigned int ABWC1_EN: 1;               /** \brief [1:1] Enable comparator 1 in ABWC (rw) */
    unsigned int ABWC2_EN: 1;               /** \brief [2:2] Enable comparator 2 in ABWC (rw) */
    unsigned int ABWC3_EN: 1;               /** \brief [3:3] Enable comparator 3 in ABWC (rw) */
    unsigned int ABWC4_EN: 1;               /** \brief [4:4] Enable comparator 4 in ABWC (rw) */
    unsigned int ABWC5_EN: 1;               /** \brief [5:5] Enable comparator 5 in ABWC (rw) */
    unsigned int ABWC6_EN: 1;               /** \brief [6:6] Enable comparator 6 in ABWC (rw) */
    unsigned int ABWC7_EN: 1;               /** \brief [7:7] Enable comparator 7 in ABWC (rw) */
    unsigned int ABWC8_EN: 1;               /** \brief [8:8] Enable comparator 8 in ABWC (rw) */
    unsigned int ABWC9_EN: 1;               /** \brief [9:9] Enable comparator 9 in ABW (rw) */
    unsigned int ABWC10_EN: 1;              /** \brief [10:10] Enable comparator 10 in ABWC (rw) */
    unsigned int ABWC11_EN: 1;              /** \brief [11:11] Enable comparator 11 in ABWC (rw) */
    unsigned int TBWC0_EN: 1;               /** \brief [12:12] Enable comparator 0 in TBWC (rw) */
    unsigned int TBWC1_EN: 1;               /** \brief [13:13] Enable comparator 1 in TBWC (rw) */
    unsigned int TBWC2_EN: 1;               /** \brief [14:14] Enable comparator 2 in TBWC (rw) */
    unsigned int TBWC3_EN: 1;               /** \brief [15:15] Enable comparator 3 in TBWC (rw) */
    unsigned int TBWC4_EN: 1;               /** \brief [16:16] Enable comparator 4 in TBWC (rw) */
    unsigned int TBWC5_EN: 1;               /** \brief [17:17] Enable comparator 5 in TBWC (rw) */
    unsigned int TBWC6_EN: 1;               /** \brief [18:18] Enable comparator 6 in TBWC (rw) */
    unsigned int TBWC7_EN: 1;               /** \brief [19:19] Enable comparator 7 in TBWC) (rw) */
    unsigned int TBWC8_EN: 1;               /** \brief [20:20] Enable comparator 8 in TBWC (rw) */
    unsigned int TBWC9_EN: 1;               /** \brief [21:21] Enable comparator 9 in TBWC (rw) */
    unsigned int TBWC10_EN: 1;              /** \brief [22:22] Enable comparator 10 in TBWC (rw) */
    unsigned int TBWC11_EN: 1;              /** \brief [23:23] Enable comparator 11 in TBWC (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMP_EN_Bits;

/** CMP Interrupt Enable Register */
typedef struct
{
    unsigned int ABWC0_EN_IRQ: 1;           /** \brief [0:0] Enable ABWC0 interrupt source for CMP_IRQ line (rw) */
    unsigned int ABWC1_EN_IRQ: 1;           /** \brief [1:1] Enable ABWC1 interrupt source for CMP_IRQ line (rw) */
    unsigned int ABWC2_EN_IRQ: 1;           /** \brief [2:2] Enable ABWC2 interrupt source for CMP_IRQ line (rw) */
    unsigned int ABWC3_EN_IRQ: 1;           /** \brief [3:3] Enable ABWC3 interrupt source for CMP_IRQ line (rw) */
    unsigned int ABWC4_EN_IRQ: 1;           /** \brief [4:4] Enable ABWC4 interrupt source for CMP_IRQ line (rw) */
    unsigned int ABWC5_EN_IRQ: 1;           /** \brief [5:5] Enable ABWC5 interrupt source for CMP_IRQ line (rw) */
    unsigned int ABWC6_EN_IRQ: 1;           /** \brief [6:6] Enable ABWC6 interrupt source for CMP_IRQ line (rw) */
    unsigned int ABWC7_EN_IRQ: 1;           /** \brief [7:7] Enable ABWC7 interrupt source for CMP_IRQ line (rw) */
    unsigned int ABWC8_EN_IRQ: 1;           /** \brief [8:8] Enable ABWC8 interrupt source for CMP_IRQ line. (rw) */
    unsigned int ABWC9_EN_IRQ: 1;           /** \brief [9:9] Enable ABWC9 interrupt source for CMP_IRQ line (rw) */
    unsigned int ABWC10_EN_IRQ: 1;          /** \brief [10:10] Enable ABWC10 interrupt source for CMP_IRQ line (rw) */
    unsigned int ABWC11_EN_IRQ: 1;          /** \brief [11:11] Enable ABWC11 interrupt source for CMP_IRQ line (rw) */
    unsigned int TBWC0_EN_IRQ: 1;           /** \brief [12:12] Enable TBWC0 interrupt source for CMP_IRQ line (rw) */
    unsigned int TBWC1_EN_IRQ: 1;           /** \brief [13:13] Enable TBWC1 interrupt source for CMP_IRQ line (rw) */
    unsigned int TBWC2_EN_IRQ: 1;           /** \brief [14:14] Enable TBWC2 interrupt source for CMP_IRQ line (rw) */
    unsigned int TBWC3_EN_IRQ: 1;           /** \brief [15:15] Enable TBWC3 interrupt source for CMP_IRQ line (rw) */
    unsigned int TBWC4_EN_IRQ: 1;           /** \brief [16:16] Enable TBWC4 interrupt source for CMP_IRQ line (rw) */
    unsigned int TBWC5_EN_IRQ: 1;           /** \brief [17:17] Enable TBWC5 interrupt source for CMP_IRQ line (rw) */
    unsigned int TBWC6_EN_IRQ: 1;           /** \brief [18:18] Enable TBWC6 interrupt source for CMP_IRQ line (rw) */
    unsigned int TBWC7_EN_IRQ: 1;           /** \brief [19:19] Enable TBWC7 interrupt source for CMP_IRQ line (rw) */
    unsigned int TBWC8_EN_IRQ: 1;           /** \brief [20:20] Enable TBWC8 interrupt source for CMP_IRQ line (rw) */
    unsigned int TBWC9_EN_IRQ: 1;           /** \brief [21:21] Enable TBWC9 interrupt source for CMP_IRQ line (rw) */
    unsigned int TBWC10_EN_IRQ: 1;          /** \brief [22:22] Enable TBWC10 interrupt source for CMP_IRQ line (rw) */
    unsigned int TBWC11_EN_IRQ: 1;          /** \brief [23:23] Enable TBWC11 interrupt source for CMP_IRQ line (rw) */
    unsigned int Reserved: 8;               /** \brief [31:24] reserved (rw) */
} Ifx_GTM_CMP_IRQ_EN_Bits;

/** CMP Interrupt Force Register */
typedef struct
{
    unsigned int TRG_ABWC0: 1;              /** \brief [0:0] Trigger ABWC0 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_ABWC1: 1;              /** \brief [1:1] Trigger ABWC1 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_ABWC2: 1;              /** \brief [2:2] Trigger ABWC2 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_ABWC3: 1;              /** \brief [3:3] Trigger ABWC3 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_ABWC4: 1;              /** \brief [4:4] Trigger ABWC4 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_ABWC5: 1;              /** \brief [5:5] Trigger ABWC5 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_ABWC6: 1;              /** \brief [6:6] Trigger ABWC6 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_ABWC7: 1;              /** \brief [7:7] Trigger ABWC7 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_ABWC8: 1;              /** \brief [8:8] Trigger ABWC8 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_ABWC9: 1;              /** \brief [9:9] Trigger ABWC9 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_ABWC10: 1;             /** \brief [10:10] Trigger ABWC10 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_ABWC11: 1;             /** \brief [11:11] Trigger ABWC11 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_TBWC0: 1;              /** \brief [12:12] Trigger TBWC0 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_TBWC1: 1;              /** \brief [13:13] Trigger TBWC1 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_TBWC2: 1;              /** \brief [14:14] Trigger TBWC2 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_TBWC3: 1;              /** \brief [15:15] Trigger TBWC3 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_TBWC4: 1;              /** \brief [16:16] Trigger TBWC4 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_TBWC5: 1;              /** \brief [17:17] Trigger TBWC5 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_TBWC6: 1;              /** \brief [18:18] Trigger TBWC6 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_TBWC7: 1;              /** \brief [19:19] Trigger TBWC7 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_TBWC8: 1;              /** \brief [20:20] Trigger TBWC8 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_TBWC9: 1;              /** \brief [21:21] Trigger TBWC9 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_TBWC10: 1;             /** \brief [22:22] Trigger TBWC10 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_TBWC11: 1;             /** \brief [23:23] Trigger TBWC11 bit in CMP_IRQ_NOTIFY register by software (w) */
    unsigned int Reserved: 8;               /** \brief [31:24] reserved (r) */
} Ifx_GTM_CMP_IRQ_FORCINT_Bits;

/** CMP IRQ Mode Configuration Register */
typedef struct
{
    unsigned int IRQ_MODE: 2;               /** \brief [1:0] IRQ mode selection (rw) */
    unsigned int reserved_2: 30;
} Ifx_GTM_CMP_IRQ_MODE_Bits;

/** CMP Event Notification Register */
typedef struct
{
    unsigned int ABWC0: 1;                  /** \brief [0:0] ATOM sub modules outputs bitwise comparator 0 error indication (rwh) */
    unsigned int ABWC1: 1;                  /** \brief [1:1] ATOM sub modules outputs bitwise comparator 1 error indication (rwh) */
    unsigned int ABWC2: 1;                  /** \brief [2:2] ATOM sub modules outputs bitwise comparator 2 error indication (rwh) */
    unsigned int ABWC3: 1;                  /** \brief [3:3] ATOM sub modules outputs bitwise comparator 3 error indication (rwh) */
    unsigned int ABWC4: 1;                  /** \brief [4:4] ATOM sub modules outputs bitwise comparator 4 error indication (rwh) */
    unsigned int ABWC5: 1;                  /** \brief [5:5] ATOM sub modules outputs bitwise comparator 5 error indication (rwh) */
    unsigned int ABWC6: 1;                  /** \brief [6:6] ATOM sub modules outputs bitwise comparator 6 error indication (rwh) */
    unsigned int ABWC7: 1;                  /** \brief [7:7] ATOM sub modules outputs bitwise comparator 7 error indication (rwh) */
    unsigned int ABWC8: 1;                  /** \brief [8:8] ATOM sub modules outputs bitwise comparator 8 error indication (rwh) */
    unsigned int ABWC9: 1;                  /** \brief [9:9] ATOM sub modules outputs bitwise comparator 9 error indication (rwh) */
    unsigned int ABWC10: 1;                 /** \brief [10:10] ATOM sub modules outputs bitwise comparator 10 error indication (rwh) */
    unsigned int ABWC11: 1;                 /** \brief [11:11] ATOM sub modules outputs bitwise comparator 11 error indication (rwh) */
    unsigned int TBWC0: 1;                  /** \brief [12:12] TOM sub modules outputs bitwise comparator 0 error indication (rwh) */
    unsigned int TBWC1: 1;                  /** \brief [13:13] TOM sub modules outputs bitwise comparator 1 error indication (rwh) */
    unsigned int TBWC2: 1;                  /** \brief [14:14] TOM sub modules outputs bitwise comparator 2 error indication (rwh) */
    unsigned int TBWC3: 1;                  /** \brief [15:15] TOM sub modules outputs bitwise comparator 3 error indication (rwh) */
    unsigned int TBWC4: 1;                  /** \brief [16:16] TOM sub modules outputs bitwise comparator 4 error indication (rwh) */
    unsigned int TBWC5: 1;                  /** \brief [17:17] TOM sub modules outputs bitwise comparator 5 error indication (rwh) */
    unsigned int TBWC6: 1;                  /** \brief [18:18] TOM sub modules outputs bitwise comparator 6 error indication (rwh) */
    unsigned int TBWC7: 1;                  /** \brief [19:19] TOM sub modules outputs bitwise comparator 7 error indication (rwh) */
    unsigned int TBWC8: 1;                  /** \brief [20:20] TOM sub modules outputs bitwise comparator 8 error indication (rwh) */
    unsigned int TBWC9: 1;                  /** \brief [21:21] TOM sub modules outputs bitwise comparator 9 error indication (rwh) */
    unsigned int TBWC10: 1;                 /** \brief [22:22] TOM sub modules outputs bitwise comparator 10 error indication (rwh) */
    unsigned int TBWC11: 1;                 /** \brief [23:23] TOM sub modules outputs bitwise comparator 11 error indication (rwh) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMP_IRQ_NOTIFY_Bits;

/** CMU Control For Clock Source 0 Register */
typedef struct
{
    unsigned int CLK_CNT: 24;               /** \brief [23:0] Clock count Defines count value for the clock divider of clock source CMU_CLK[x] (x05) (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMU_CLK_0_CTRL_Bits;

/** CMU Control For Clock Source 1 Register */
typedef struct
{
    unsigned int CLK_CNT: 24;               /** \brief [23:0] Clock count Defines count value for the clock divider of clock source CMU_CLK[x] (x05) (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMU_CLK_1_CTRL_Bits;

/** CMU Control For Clock Source 2 Register */
typedef struct
{
    unsigned int CLK_CNT: 24;               /** \brief [23:0] Clock count Defines count value for the clock divider of clock source CMU_CLK[x] (x05) (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMU_CLK_2_CTRL_Bits;

/** CMU Control For Clock Source 3 Register */
typedef struct
{
    unsigned int CLK_CNT: 24;               /** \brief [23:0] Clock count Defines count value for the clock divider of clock source CMU_CLK[x] (x05) (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMU_CLK_3_CTRL_Bits;

/** CMU Control For Clock Source 4 Register */
typedef struct
{
    unsigned int CLK_CNT: 24;               /** \brief [23:0] Clock count Defines count value for the clock divider of clock source CMU_CLK[x] (x05) (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMU_CLK_4_CTRL_Bits;

/** CMU Control For Clock Source 5 Register */
typedef struct
{
    unsigned int CLK_CNT: 24;               /** \brief [23:0] Clock count Defines count value for the clock divider of clock source CMU_CLK[x] (x05) (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMU_CLK_5_CTRL_Bits;

/** CMU Control For Clock Source 6 Register */
typedef struct
{
    unsigned int CLK_CNT: 24;               /** \brief [23:0] Clock count. Define count value for the clock divider of clock source CMU_CLK6. (rw) */
    unsigned int CLK6_SEL: 1;               /** \brief [24:24] Clock source selection for CMU_CLK6. (rw) */
    unsigned int reserved_25: 7;
} Ifx_GTM_CMU_CLK_6_CTRL_Bits;

/** CMU Control For Clock Source 7 Register */
typedef struct
{
    unsigned int CLK_CNT: 24;               /** \brief [23:0] Clock count. Define count value for the clock divider of clock source CMU_CLK7. (rw) */
    unsigned int CLK7_SEL: 1;               /** \brief [24:24] Clock source selection for CMU_CLK7. (rw) */
    unsigned int reserved_25: 7;
} Ifx_GTM_CMU_CLK_7_CTRL_Bits;

/** CMU Clock Enable Register */
typedef struct
{
    unsigned int EN_CLK0: 2;                /** \brief [1:0] Enable clock source 0 (rw) */
    unsigned int EN_CLK1: 2;                /** \brief [3:2] Enable clock source 1, see bits [1:0] (rw) */
    unsigned int EN_CLK2: 2;                /** \brief [5:4] Enable clock source 2, see bits [1:0] (rw) */
    unsigned int EN_CLK3: 2;                /** \brief [7:6] Enable clock source 3, see bits [1:0] (rw) */
    unsigned int EN_CLK4: 2;                /** \brief [9:8] Enable clock source 4, see bits [1:0] (rw) */
    unsigned int EN_CLK5: 2;                /** \brief [11:10] Enable clock source 5, see bits [1:0] (rw) */
    unsigned int EN_CLK6: 2;                /** \brief [13:12] Enable clock source 6, see bits [1:0] (rw) */
    unsigned int EN_CLK7: 2;                /** \brief [15:14] Enable clock source 7, see bits [1:0] (rw) */
    unsigned int EN_ECLK0: 2;               /** \brief [17:16] Enable ECLK 0 generation subunit, see bits [1:0] (rw) */
    unsigned int EN_ECLK1: 2;               /** \brief [19:18] Enable ECLK 1 generation subunit, see bits [1:0] (rw) */
    unsigned int EN_ECLK2: 2;               /** \brief [21:20] Enable ECLK 2 generation subunit, see bits [1:0] (rw) */
    unsigned int EN_FXCLK: 2;               /** \brief [23:22] Enable all CMU_FXCLK, see bits [1:0] (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMU_CLK_EN_Bits;

/** CMU External Clock 0 Control Denominator Register */
typedef struct
{
    unsigned int ECLK_DEN: 24;              /** \brief [23:0] Denominator for external clock divider (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMU_ECLK_0_DEN_Bits;

/** CMU External Clock 0 Control Numerator Register */
typedef struct
{
    unsigned int ECLK_NUM: 24;              /** \brief [23:0] Numerator for external clock divider (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMU_ECLK_0_NUM_Bits;

/** CMU External Clock 1 Control Denominator Register */
typedef struct
{
    unsigned int ECLK_DEN: 24;              /** \brief [23:0] Denominator for external clock divider (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMU_ECLK_1_DEN_Bits;

/** CMU External Clock 1 Control Numerator Register */
typedef struct
{
    unsigned int ECLK_NUM: 24;              /** \brief [23:0] Numerator for external clock divider (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMU_ECLK_1_NUM_Bits;

/** CMU External Clock 2 Control Denominator Register */
typedef struct
{
    unsigned int ECLK_DEN: 24;              /** \brief [23:0] Denominator for external clock divider (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMU_ECLK_2_DEN_Bits;

/** CMU External Clock 2 Control Numerator Register */
typedef struct
{
    unsigned int ECLK_NUM: 24;              /** \brief [23:0] Numerator for external clock divider (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMU_ECLK_2_NUM_Bits;

/** CMU Global Clock Control Denominator Register */
typedef struct
{
    unsigned int GCLK_DEN: 24;              /** \brief [23:0] Denominator for global clock divider (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMU_GCLK_DEN_Bits;

/** CMU Global Clock Control Numerator Register */
typedef struct
{
    unsigned int GCLK_NUM: 24;              /** \brief [23:0] Numerator for global clock divider (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_CMU_GCLK_NUM_Bits;

/** GTM Global Control Register */
typedef struct
{
    unsigned int RF_PROT: 1;                /** \brief [0:0] RST and FORCINT protection (rw) */
    unsigned int TO_MODE: 1;                /** \brief [1:1] AEI Timeout mode (rw) */
    unsigned int reserved_2: 2;
    unsigned int TO_VAL: 5;                 /** \brief [8:4] AEI Timeout value (rw) */
    unsigned int reserved_9: 23;
} Ifx_GTM_CTRL_Bits;

/** Control Bits For Actions Register i */
typedef struct
{
    unsigned int ACBj_0: 5;                 /** \brief [4:0] Action Control Bits of ACTION_i (rw) */
    unsigned int reserved_5: 3;
    unsigned int ACBj_1: 5;                 /** \brief [12:8] Action Control Bits of ACTION_(i + 1), reflects ACT_D[i+1](5248) (rw) */
    unsigned int reserved_13: 3;
    unsigned int ACBj_2: 5;                 /** \brief [20:16] Action Control Bits of ACTION_(i + 2), reflects ACT_D[i+2](5248) (rw) */
    unsigned int reserved_21: 3;
    unsigned int ACBj_3: 5;                 /** \brief [28:24] Action Control Bits of ACTION_(i + 3), reflects ACT_D[i+3](5248) (rw) */
    unsigned int reserved_29: 3;
} Ifx_GTM_DPLL_ACB_Bits;

/** DPLL ACTION Status Register With Shadow Register */
typedef struct
{
    unsigned int ACT_Ni: 24;                /** \brief [23:0] New output data values concerning to action i provided (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_DPLL_ACT_STA_Bits;

/** DPLL Direct Load Input Value for SUB_INC1 */
typedef struct
{
    unsigned int ADD_IN_LD_1: 24;           /** \brief [23:0] Input value for SUB_INC1 generation (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_DPLL_ADD_IN_LD1_Bits;

/** DPLL Direct Load Input Value for SUB_INC1 */
typedef struct
{
    unsigned int ADD_IN_LD_2: 24;           /** \brief [23:0] Input value for SUB_INC2 generation (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_DPLL_ADD_IN_LD2_Bits;

/** DPLL Address Offset Register For APT In RAM Region 2 */
typedef struct
{
    unsigned int AOSV_2a: 8;                /** \brief [7:0] Address offset value of the RAM 2a region. (r) */
    unsigned int AOSV_2b: 8;                /** \brief [15:8] Address offset value of the RAM 2b region. (r) */
    unsigned int AOSV_2c: 8;                /** \brief [23:16] Address offset value of the RAM 2c region. (r) */
    unsigned int AOSV_2d: 8;                /** \brief [31:24] Address offset value of the RAM 2d region. (r) */
} Ifx_GTM_DPLL_AOSV_2_Bits;

/** DPLL Actual RAM Pointer to RAM Region 1c3 */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int APS_1c3: 6;                /** \brief [7:2] Address pointer STATE for RAM region 1c3 (rw) */
    unsigned int reserved_8: 24;
} Ifx_GTM_DPLL_APS_1c3_Bits;

/** DPLL Actual RAM Pointer to RAM Regions 1c1, 1c2 and 1c4 */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int WAPS: 1;                   /** \brief [1:1] Write bit for address pointer APS (w) */
    unsigned int APS: 6;                    /** \brief [7:2] Address pointer STATE (rw) */
    unsigned int reserved_8: 5;
    unsigned int WAPS_1c2: 1;               /** \brief [13:13] Write bit for address pointer APS_1c2 (w) */
    unsigned int APS_1c2: 6;                /** \brief [19:14] Address pointer STATE for RAM region 1c2 (rw) */
    unsigned int reserved_20: 12;
} Ifx_GTM_DPLL_APS_Bits;

/** DPLL Old RAM Pointer and Offset Value for STATE */
typedef struct
{
    unsigned int APS_1c2_ext: 6;            /** \brief [5:0] Address pointer 1c2 extension (rw) */
    unsigned int APS_1c2_status: 1;         /** \brief [6:6] Address pointer 1c2 status (rw) */
    unsigned int reserved_7: 7;
    unsigned int APS_1c2_old: 6;            /** \brief [19:14] Address pointer STATE for RAM region 1c2 at synchronization time (rw) */
    unsigned int reserved_20: 12;
} Ifx_GTM_DPLL_APS_SYNC_Bits;

/** DPLL Actual RAM Pointer to RAM Region 2c */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int APT_2c: 10;                /** \brief [11:2] Address pointer TRIGGER for RAM region 2c (rw) */
    unsigned int reserved_12: 20;
} Ifx_GTM_DPLL_APT_2c_Bits;

/** DPLL Actual RAM Pointer to RAM Regions 2a, b and d */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int WAPT: 1;                   /** \brief [1:1] Write bit for address pointer APT (w) */
    unsigned int APT: 10;                   /** \brief [11:2] Address pointer TRIGGER (rw) */
    unsigned int reserved_12: 1;
    unsigned int WAPT_2b: 1;                /** \brief [13:13] Write bit for address pointer APT_2b (w) */
    unsigned int APT_2b: 10;                /** \brief [23:14] Address pointer TRIGGER for RAM region 2b (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_DPLL_APT_Bits;

/** DPLL Old RAM Pointer and Offset Value for TRIGGER */
typedef struct
{
    unsigned int APT_2b_ext: 6;             /** \brief [5:0] Address pointer 2b extension (rw) */
    unsigned int APT_2b_status: 1;          /** \brief [6:6] Address pointer 2b status (rw) */
    unsigned int reserved_7: 7;
    unsigned int APT_2b_old: 10;            /** \brief [23:14] Address pointer TRIGGER for RAM region 2b at synchronization time (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_DPLL_APT_SYNC_Bits;

/** DPLL Control Register 0 */
typedef struct
{
    unsigned int MLT: 10;                   /** \brief [9:0] Multiplier for TRIGGER (rw) */
    unsigned int IFP: 1;                    /** \brief [10:10] Input filter position (rw) */
    unsigned int SNU: 5;                    /** \brief [15:11] STATE number (rw) */
    unsigned int TNU: 9;                    /** \brief [24:16] TRIGGER number (rw) */
    unsigned int AMS: 1;                    /** \brief [25:25] Adapt mode STATE (rw) */
    unsigned int AMT: 1;                    /** \brief [26:26] Adapt mode TRIGGER (rw) */
    unsigned int IDS: 1;                    /** \brief [27:27] Input delay STATE (rw) */
    unsigned int IDT: 1;                    /** \brief [28:28] Input delay TRIGGER (rw) */
    unsigned int SEN: 1;                    /** \brief [29:29] STATE enable (rw) */
    unsigned int TEN: 1;                    /** \brief [30:30] TRIGGER enable (rw) */
    unsigned int RMO: 1;                    /** \brief [31:31] Reference mode (rw) */
} Ifx_GTM_DPLL_CTRL_0_Bits;

/** DPLL Control Register 1 */
typedef struct
{
    unsigned int DMO: 1;                    /** \brief [0:0] DPLL mode select (rw) */
    unsigned int DEN: 1;                    /** \brief [1:1] DPLL enable (rw) */
    unsigned int reserved_2: 1;
    unsigned int COA: 1;                    /** \brief [3:3] Correction strategy in automatic end mode (DMO=0) (rw) */
    unsigned int PIT: 1;                    /** \brief [4:4] Plausibility value PVT to next valid TRIGGER is time related (rw) */
    unsigned int SGE1: 1;                   /** \brief [5:5] SUB_INC1 generator enable (rw) */
    unsigned int DLM1: 1;                   /** \brief [6:6] Direct Load Mode for SUB_INC1 generation (rw) */
    unsigned int PCM1: 1;                   /** \brief [7:7] Pulse Correction Mode for SUB_INC1 generation (rw) */
    unsigned int SGE2: 1;                   /** \brief [8:8] SUB_INC2 generator enable (rw) */
    unsigned int DLM2: 1;                   /** \brief [9:9] Direct Load Mode for SUB_INC2 generation (rw) */
    unsigned int PCM2: 1;                   /** \brief [10:10] Pulse Correction Mode for SUB_INC2 generation. (rw) */
    unsigned int SYN_NS: 5;                 /** \brief [15:11] Synchronization number of STATE (rw) */
    unsigned int SYN_NT: 5;                 /** \brief [20:16] Synchronization number of TRIGGER; summarized number of virtual increments (rw) */
    unsigned int reserved_21: 2;
    unsigned int SWR: 1;                    /** \brief [23:23] Software Reset (w) */
    unsigned int SYSF: 1;                   /** \brief [24:24] SYN_NS for FULL_SCALE (rw) */
    unsigned int TS0_HRS: 1;                /** \brief [25:25] TS0_HRS (rw) */
    unsigned int TS0_HRT: 1;                /** \brief [26:26] TS0_HRT (rw) */
    unsigned int SMC: 1;                    /** \brief [27:27] Synchronous Motor Control (rw) */
    unsigned int SSL: 2;                    /** \brief [29:28] STATE slope select (rw) */
    unsigned int TSL: 2;                    /** \brief [31:30] Definition of active slope for signal TRIGGER each active slope is an event defined by TNU (rw) */
} Ifx_GTM_DPLL_CTRL_1_Bits;

/** DPLL Control Register 2 */
typedef struct
{
    unsigned int reserved_0: 8;
    unsigned int AEN0: 1;                   /** \brief [8:8] ACTION_0 enable. (rw) */
    unsigned int AEN1: 1;                   /** \brief [9:9] ACTION_1 enable. (rw) */
    unsigned int AEN2: 1;                   /** \brief [10:10] ACTION_2 enable. (rw) */
    unsigned int AEN3: 1;                   /** \brief [11:11] ACTION_3 enable. (rw) */
    unsigned int AEN4: 1;                   /** \brief [12:12] ACTION_4 enable. (rw) */
    unsigned int AEN5: 1;                   /** \brief [13:13] ACTION_5 enable. (rw) */
    unsigned int AEN6: 1;                   /** \brief [14:14] ACTION_6 enable. (rw) */
    unsigned int AEN7: 1;                   /** \brief [15:15] ACTION_7 enable. (rw) */
    unsigned int WAD0: 1;                   /** \brief [16:16] Write control bit of Action_0 (w) */
    unsigned int WAD1: 1;                   /** \brief [17:17] Write control bit of Action_1 (w) */
    unsigned int WAD2: 1;                   /** \brief [18:18] Write control bit of Action_2 (w) */
    unsigned int WAD3: 1;                   /** \brief [19:19] Write control bit of Action_3 (w) */
    unsigned int WAD4: 1;                   /** \brief [20:20] Write control bit of Action_4 (w) */
    unsigned int WAD5: 1;                   /** \brief [21:21] Write control bit of Action_5 (w) */
    unsigned int WAD6: 1;                   /** \brief [22:22] Write control bit of Action_6 (w) */
    unsigned int WAD7: 1;                   /** \brief [23:23] Write control bit of Action_7 (w) */
    unsigned int reserved_24: 8;
} Ifx_GTM_DPLL_CTRL_2_Bits;

/** DPLL Control Register 3 */
typedef struct
{
    unsigned int reserved_0: 8;
    unsigned int AEN8: 1;                   /** \brief [8:8] ACTION_8 enable. (rw) */
    unsigned int AEN9: 1;                   /** \brief [9:9] ACTION_9 enable (rw) */
    unsigned int AEN10: 1;                  /** \brief [10:10] ACTION_10enable. (rw) */
    unsigned int AEN11: 1;                  /** \brief [11:11] ACTION_11 enable. (rw) */
    unsigned int AEN12: 1;                  /** \brief [12:12] ACTION_12 enable. (rw) */
    unsigned int AEN13: 1;                  /** \brief [13:13] ACTION_13 enable. (rw) */
    unsigned int AEN14: 1;                  /** \brief [14:14] ACTION_14 enable. (rw) */
    unsigned int AEN15: 1;                  /** \brief [15:15] ACTION_15 enable. (rw) */
    unsigned int WAD8: 1;                   /** \brief [16:16] Write control bit of Action_8 (w) */
    unsigned int WAD9: 1;                   /** \brief [17:17] Write control bit of Action_9 (w) */
    unsigned int WAD10: 1;                  /** \brief [18:18] Write control bit of Action_10 (w) */
    unsigned int WAD11: 1;                  /** \brief [19:19] Write control bit of Action_11 (w) */
    unsigned int WAD12: 1;                  /** \brief [20:20] Write control bit of Action_12 (w) */
    unsigned int WAD13: 1;                  /** \brief [21:21] Write control bit of Action_13 (w) */
    unsigned int WAD14: 1;                  /** \brief [22:22] Write control bit of Action_14 (w) */
    unsigned int WAD15: 1;                  /** \brief [23:23] Write control bit of Action_15 (w) */
    unsigned int reserved_24: 8;
} Ifx_GTM_DPLL_CTRL_3_Bits;

/** DPLL Control Register 4 */
typedef struct
{
    unsigned int reserved_0: 8;
    unsigned int AEN16: 1;                  /** \brief [8:8] ACTION_16 enable. (rw) */
    unsigned int AEN17: 1;                  /** \brief [9:9] ACTION_17 enable (rw) */
    unsigned int AEN18: 1;                  /** \brief [10:10] ACTION_18 enable. (rw) */
    unsigned int AEN19: 1;                  /** \brief [11:11] ACTION_19 enable. (rw) */
    unsigned int AEN20: 1;                  /** \brief [12:12] ACTION_20 enable. (rw) */
    unsigned int AEN21: 1;                  /** \brief [13:13] ACTION_21 enable. (rw) */
    unsigned int AEN22: 1;                  /** \brief [14:14] ACTION_22 enable. (rw) */
    unsigned int AEN23: 1;                  /** \brief [15:15] ACTION_23 enable. (rw) */
    unsigned int WAD16: 1;                  /** \brief [16:16] Write control bit of Action_16 (w) */
    unsigned int WAD17: 1;                  /** \brief [17:17] Write control bit of Action_17 (w) */
    unsigned int WAD18: 1;                  /** \brief [18:18] Write control bit of Action_18 (w) */
    unsigned int WAD19: 1;                  /** \brief [19:19] Write control bit of Action_19 (w) */
    unsigned int WAD20: 1;                  /** \brief [20:20] Write control bit of Action_20 (w) */
    unsigned int WAD21: 1;                  /** \brief [21:21] Write control bit of Action_21 (w) */
    unsigned int WAD22: 1;                  /** \brief [22:22] Write control bit of Action_22 (w) */
    unsigned int WAD23: 1;                  /** \brief [23:23] Write control bit of Action_23 (w) */
    unsigned int reserved_24: 8;
} Ifx_GTM_DPLL_CTRL_4_Bits;

/** DPLL ID Information For Input Signal PMTR Register */
typedef struct
{
    unsigned int ID_PMTR_x: 9;              /** \brief [8:0] ID information to the input signal PMTR_x from the ARU (rw) */
    unsigned int reserved_9: 23;
} Ifx_GTM_DPLL_ID_PMTR_Bits;

/** DPLL Counter for Pulses for TBU_TS1 to be sent in Automatic End Mode */
typedef struct
{
    unsigned int INC_CNT1: 24;              /** \brief [23:0] Actual number of pulses to be still sent out at the current increment until the next valid input signal in automatic end mode; (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_DPLL_INC_CNT1_Bits;

/** DPLL Counter for Pulses for TBU_TS2 to be sent in Automatic End Mode when
 * SMC=RMO=1 */
typedef struct
{
    unsigned int INC_CNT2: 24;              /** \brief [23:0] Actual number of pulses to be still sent out at the current increment until the next valid input signal in automatic end mode (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_DPLL_INC_CNT2_Bits;

/** DPLL Interrupt Enable Register */
typedef struct
{
    unsigned int PDI_IRQ_EN: 1;             /** \brief [0:0] DPLL disable interrupt enable, when switch off of the DEN bit (rw) */
    unsigned int PEI_IRQ_EN: 1;             /** \brief [1:1] DPLL enable interrupt enable, when switch on of the DEN bit (rw) */
    unsigned int TINI_IRQ_EN: 1;            /** \brief [2:2] TRIGGER minimum hold time violation interrupt enable bit. (rw) */
    unsigned int TAXI_IRQ_EN: 1;            /** \brief [3:3] TRIGGER maximum hold time violation interrupt enable bit. (rw) */
    unsigned int SISI_IRQ_EN: 1;            /** \brief [4:4] STATE inactive slope interrupt enable bit. (rw) */
    unsigned int TISI_IRQ_EN: 1;            /** \brief [5:5] TRIGGER inactive slope interrupt enable bit. (rw) */
    unsigned int MSI_IRQ_EN: 1;             /** \brief [6:6] Missing STATE interrupt enable. (rw) */
    unsigned int MTI_IRQ_EN: 1;             /** \brief [7:7] Missing TRIGGER interrupt enable. (rw) */
    unsigned int SASI_IRQ_EN: 1;            /** \brief [8:8] STATE active slope interrupt enable. (rw) */
    unsigned int TASI_IRQ_EN: 1;            /** \brief [9:9] TRIGGER active slope interrupt enable. (rw) */
    unsigned int PWI_IRQ_EN: 1;             /** \brief [10:10] Plausibility window (PVT) violation interrupt of TRIGGER enable. (rw) */
    unsigned int W2I_IRQ_EN: 1;             /** \brief [11:11] RAM write access to RAM region 2 interrupt enable (rw) */
    unsigned int W1I_IRQ_EN: 1;             /** \brief [12:12] Write access to RAM region 1b or 1c interrupt (rw) */
    unsigned int GL1I_IRQ_EN: 1;            /** \brief [13:13] Get of lock interrupt enable, when lock arises (rw) */
    unsigned int LL1I_IRQ_EN: 1;            /** \brief [14:14] Lost of lock interrupt enable (rw) */
    unsigned int EI_IRQ_EN: 1;              /** \brief [15:15] Error interrupt enable (see status register) (rw) */
    unsigned int GL2I_IRQ_EN: 1;            /** \brief [16:16] Get of lock interrupt enable for SUB_INC2 (rw) */
    unsigned int LL2I_IRQ_EN: 1;            /** \brief [17:17] Lost of lock interrupt enable for SUB_INC2 (rw) */
    unsigned int TE0I_IRQ_EN: 1;            /** \brief [18:18] TRIGGER event interrupt 0 enable (rw) */
    unsigned int TE1I_IRQ_EN: 1;            /** \brief [19:19] TRIGGER event interrupt 1 enable (rw) */
    unsigned int TE2I_IRQ_EN: 1;            /** \brief [20:20] TRIGGER event interrupt 2 enable (rw) */
    unsigned int TE3I_IRQ_EN: 1;            /** \brief [21:21] TRIGGER event interrupt 3 enable (rw) */
    unsigned int TE4I_IRQ_EN: 1;            /** \brief [22:22] TRIGGER event interrupt 4 enable (rw) */
    unsigned int CDTI_IRQ_EN: 1;            /** \brief [23:23] Enable interrupt when calculation of TRIGGER duration done (rw) */
    unsigned int CDSI_IRQ_EN: 1;            /** \brief [24:24] Enable interrupt when calculation of TRIGGER duration done (rw) */
    unsigned int TORI: 1;                   /** \brief [25:25] TRIGGER out of range interrupt (rw) */
    unsigned int SORI: 1;                   /** \brief [26:26] STATE out of range (rw) */
    unsigned int DCGI: 1;                   /** \brief [27:27] Direction change interrupt (rw) */
    unsigned int reserved_28: 4;
} Ifx_GTM_DPLL_IRQ_EN_Bits;

/** DPLL Interrupt Force Register */
typedef struct
{
    unsigned int TRG_PDI: 1;                /** \brief [0:0] Force Interrupt PDI (w) */
    unsigned int TRG_PEI: 1;                /** \brief [1:1] Force Interrupt PEI (w) */
    unsigned int TRG_TINI: 1;               /** \brief [2:2] Force Interrupt TINI (w) */
    unsigned int TRG_TAXI: 1;               /** \brief [3:3] Force Interrupt TAXI (w) */
    unsigned int TRG_SISI: 1;               /** \brief [4:4] Force Interrupt SISI (w) */
    unsigned int TRG_TISI: 1;               /** \brief [5:5] Force Interrupt TISI (w) */
    unsigned int TRG_MSI: 1;                /** \brief [6:6] Force Interrupt MSI (w) */
    unsigned int TRG_MTI: 1;                /** \brief [7:7] Force Interrupt MTI (w) */
    unsigned int TRG_SASI: 1;               /** \brief [8:8] Force Interrupt SASI (w) */
    unsigned int TRG_TASI: 1;               /** \brief [9:9] Force Interrupt TASI (w) */
    unsigned int TRG_PWI: 1;                /** \brief [10:10] Force Interrupt PWI (w) */
    unsigned int TRG_W2I: 1;                /** \brief [11:11] Force Interrupt W2IF (w) */
    unsigned int TRG_W1I: 1;                /** \brief [12:12] Force Interrupt W1I (w) */
    unsigned int TRG_GL1I: 1;               /** \brief [13:13] Force Interrupt GL1I (w) */
    unsigned int TRG_LL1I: 1;               /** \brief [14:14] Force Interrupt LL1I (w) */
    unsigned int TRG_EI: 1;                 /** \brief [15:15] Force Interrupt EI (w) */
    unsigned int TRG_GL2I: 1;               /** \brief [16:16] Force Interrupt GL2I (w) */
    unsigned int TRG_LL2I: 1;               /** \brief [17:17] Force Interrupt LL2I (w) */
    unsigned int TRG_TE0I: 1;               /** \brief [18:18] Force Interrupt TE0I (w) */
    unsigned int TRG_TE1I: 1;               /** \brief [19:19] Force Interrupt TE1I (w) */
    unsigned int TRG_TE2I: 1;               /** \brief [20:20] Force Interrupt TE2I (w) */
    unsigned int TRG_TE3I: 1;               /** \brief [21:21] Force Interrupt TE3I (w) */
    unsigned int TRG_TE4I: 1;               /** \brief [22:22] Force Interrupt TE4I (w) */
    unsigned int TRG_CDTI: 1;               /** \brief [23:23] Force Interrupt CDTI (w) */
    unsigned int TRG_CDSI: 1;               /** \brief [24:24] Force Interrupt CDSI (w) */
    unsigned int TRG_TORI: 1;               /** \brief [25:25] Force Interrupt TORI (w) */
    unsigned int TRG_SORI: 1;               /** \brief [26:26] Force Interrupt SORI (w) */
    unsigned int reserved_27: 5;
} Ifx_GTM_DPLL_IRQ_FORCINT_Bits;

/** DPLL Interrupt Mode Register */
typedef struct
{
    unsigned int IRQ_MODE: 2;               /** \brief [1:0] IRQ mode selection (rw) */
    unsigned int reserved_2: 30;
} Ifx_GTM_DPLL_IRQ_MODE_Bits;

/** DPLL Interrupt Notification Register */
typedef struct
{
    unsigned int PDI: 1;                    /** \brief [0:0] DPLL disable interrupt (rwh) */
    unsigned int PEI: 1;                    /** \brief [1:1] DPLL enable interrupt (rwh) */
    unsigned int TINI: 1;                   /** \brief [2:2] TRIGGER minimum hold time violation interrupt (∆T) (rwh) */
    unsigned int TAXI: 1;                   /** \brief [3:3] TRIGGER maximum hold time violation interrupt (∆T>THMA>0) (rwh) */
    unsigned int SISI: 1;                   /** \brief [4:4] STATE inactive slope interrupt. (rwh) */
    unsigned int TISI: 1;                   /** \brief [5:5] TRIGGER inactive slope interrupt. (rwh) */
    unsigned int MSI: 1;                    /** \brief [6:6] Missing STATE interrupt. (rwh) */
    unsigned int MTI: 1;                    /** \brief [7:7] Missing TRIGGER interrupt. (rwh) */
    unsigned int SASI: 1;                   /** \brief [8:8] STATE active slope interrupt. (rwh) */
    unsigned int TASI: 1;                   /** \brief [9:9] TRIGGER active slope interrupt. (rwh) */
    unsigned int PWI: 1;                    /** \brief [10:10] Plausibility window (PVT) violation interrupt of TRIGGER. (rwh) */
    unsigned int W2I: 1;                    /** \brief [11:11] RAM write access to RAM region 2 interrupt (rwh) */
    unsigned int W1I: 1;                    /** \brief [12:12] Write access to RAM region 1b or 1c interrupt (rwh) */
    unsigned int GL1I: 1;                   /** \brief [13:13] Get of lock interrupt, for SUB_INC1 (rwh) */
    unsigned int LL1I: 1;                   /** \brief [14:14] Lost of lock interrupt for SUB_INC1 (rwh) */
    unsigned int EI: 1;                     /** \brief [15:15] Error interrupt (see status register bit 31) (rwh) */
    unsigned int GL2I: 1;                   /** \brief [16:16] Get of lock interrupt, for SUB_INC2 (rwh) */
    unsigned int LL2I: 1;                   /** \brief [17:17] Lost of lock interrupt for SUB_INC2 (rwh) */
    unsigned int TE0I: 1;                   /** \brief [18:18] TRIGGER event interrupt 0 (rwh) */
    unsigned int TE1I: 1;                   /** \brief [19:19] TRIGGER event interrupt 1 (rwh) */
    unsigned int TE2I: 1;                   /** \brief [20:20] TRIGGER event interrupt 2 (rwh) */
    unsigned int TE3I: 1;                   /** \brief [21:21] TRIGGER event interrupt 3 (rwh) */
    unsigned int TE4I: 1;                   /** \brief [22:22] TRIGGER event interrupt 4 (rwh) */
    unsigned int CDTI: 1;                   /** \brief [23:23] Calculation of TRIGGER duration done, only while NTI_CNT is zero (rwh) */
    unsigned int CDSI: 1;                   /** \brief [24:24] Calculation of STATE duration done (rwh) */
    unsigned int TORI: 1;                   /** \brief [25:25] TRIGGER out of range interrupt (rwh) */
    unsigned int SORI: 1;                   /** \brief [26:26] STATE out of range (rwh) */
    unsigned int reserved_27: 5;
} Ifx_GTM_DPLL_IRQ_NOTIFY_Bits;

/** DPLL Number of Active TRIGGER Events to Interrupt */
typedef struct
{
    unsigned int NTI_CNT: 10;               /** \brief [9:0] Number of TRIGGERs to interrupt (rw) */
    unsigned int reserved_10: 22;
} Ifx_GTM_DPLL_NTI_CNT_Bits;

/** DPLL Number of Recent STATE Events Used for Calculations */
typedef struct
{
    unsigned int NUSE: 6;                   /** \brief [5:0] Number of recent STATE events used for SUB_INCx calculations modulo 2*(SNUmax+1). (rw) */
    unsigned int FSS: 1;                    /** \brief [6:6] this value is to be set, when NUSE is set to FULL_SCALE (rw) */
    unsigned int SYN_S: 6;                  /** \brief [12:7] Number of real and virtual events to be considered for the current increment (rw) */
    unsigned int SYN_S_old: 6;              /** \brief [18:13] Number of real and virtual events to be considered for the last increment (rw) */
    unsigned int VSN: 6;                    /** \brief [24:19] Virtual STATE number (rw) */
    unsigned int reserved_25: 4;
    unsigned int WNUS: 1;                   /** \brief [29:29] Write control bit for NUSE; read as zero. (w) */
    unsigned int WSYN: 1;                   /** \brief [30:30] Write control bit for SYN_S and SYN_S_old; read as zero (w) */
    unsigned int WVSN: 1;                   /** \brief [31:31] Write control bit for VSN; read as zero (w) */
} Ifx_GTM_DPLL_NUSC_Bits;

/** DPLL Number of Recent TRIGGER Events Used for Calculations */
typedef struct
{
    unsigned int NUTE: 10;                  /** \brief [9:0] Number of recent TRIGGER events used for SUB_INC1 and action calculations modulo 2*(TNUmax+1). (rw) */
    unsigned int FST: 1;                    /** \brief [10:10] this value is to be set, when NUTE is set to FULL_SCALE (rw) */
    unsigned int reserved_11: 2;
    unsigned int SYN_T: 3;                  /** \brief [15:13] Number of real and virtual events to be considered for the current increment (rw) */
    unsigned int SYN_T_old: 3;              /** \brief [18:16] Number of real and virtual events to be considered for the last increment (rw) */
    unsigned int VTN: 6;                    /** \brief [24:19] Virtual TRIGGER number (rw) */
    unsigned int reserved_25: 4;
    unsigned int WNUT: 1;                   /** \brief [29:29] Write control bit for NUTE (w) */
    unsigned int WSYN: 1;                   /** \brief [30:30] Write control bit for SYN_T and SYN_T_old (w) */
    unsigned int WVTN: 1;                   /** \brief [31:31] Write control bit for VTN (w) */
} Ifx_GTM_DPLL_NUTC_Bits;

/** DPLL Offset And Switch Old/New Address Register */
typedef struct
{
    unsigned int SWON_S: 1;                 /** \brief [0:0] Switch of new STATE (r) */
    unsigned int SWON_T: 1;                 /** \brief [1:1] Switch of new TRIGGER (r) */
    unsigned int reserved_2: 6;
    unsigned int OSS: 2;                    /** \brief [9:8] Offset size of RAM region 2 (rw) */
    unsigned int reserved_10: 22;
} Ifx_GTM_DPLL_OSW_Bits;

/** Calculated Position Value for ACTION_i Register */
typedef struct
{
    unsigned int PSAC: 24;                  /** \brief [23:0] Calculated position value for the start of ACTION_i in normal or emergency mode according to equations 1617 or 1620 respectively (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_DPLL_PSAC_Bits;

/** DPLL RAM Initatlisation Register */
typedef struct
{
    unsigned int INIT_1a: 1;                /** \brief [0:0] RAM region 1a initialization in progress (r) */
    unsigned int INIT_1b: 1;                /** \brief [1:1] RAM region 1b initialization in progress (r) */
    unsigned int INIT_2: 1;                 /** \brief [2:2] RAM region 2 initialization in progress (r) */
    unsigned int reserved_3: 1;
    unsigned int INIT_RAM: 1;               /** \brief [4:4] RAM regions 1a, 1b and 2 are to be initialized (w) */
    unsigned int reserved_5: 27;
} Ifx_GTM_DPLL_RAM_INI_Bits;

/** DPLL Status Register */
typedef struct
{
    unsigned int CSON: 1;                   /** \brief [0:0] Calculated STATE duration overflow nominal (rwh) */
    unsigned int CSO: 1;                    /** \brief [1:1] Calculated STATE duration overflow (rwh) */
    unsigned int CTON: 1;                   /** \brief [2:2] Calculated TRIGGER duration overflow nominal (rwh) */
    unsigned int CTO: 1;                    /** \brief [3:3] Calculated TRIGGER duration overflow (rwh) */
    unsigned int CRO: 1;                    /** \brief [4:4] Calculated Reciprocal value overflow (w) */
    unsigned int RCS: 1;                    /** \brief [5:5] Resolution conflict STATE (r) */
    unsigned int RCT: 1;                    /** \brief [6:6] Resolution conflict TRIGGER (r) */
    unsigned int PSE: 1;                    /** \brief [7:7] Prediction space configuration error (r) */
    unsigned int SOR: 1;                    /** \brief [8:8] STATE out of range The SOR Bit is set, when the time to the next active STATE slope exceeds the value of the last nominal STATE duration multiplied with the value of the SLR register (see ) and is reset, when at the current or last valid input event a direction change was detected. (rwh) */
    unsigned int MS: 1;                     /** \brief [9:9] Missing STATE detected (rwh) */
    unsigned int TOR: 1;                    /** \brief [10:10] TRIGGER out of range The TOR Bit is set, when the time to the next active TRIGGER slope exceeds the value of the last nominal TRIGGER duration multiplied with the value of the TLR register (see ) and is reset, when at the current or last vaild input event a direction change was detected. The DPLL_STATUS register is reset, when DPLL is disabled (switching DEN from 1 for 0). (rwh) */
    unsigned int MT: 1;                     /** \brief [11:11] Missing TRIGGER detected. (rwh) */
    unsigned int reserved_12: 3;
    unsigned int LOW_RES: 1;                /** \brief [15:15] Low resolution of TBU_TS0 is used for DPLL input (r) */
    unsigned int CSVS: 1;                   /** \brief [16:16] Current signal value STATE (r) */
    unsigned int CSVT: 1;                   /** \brief [17:17] Current signal value TRIGGER (r) */
    unsigned int CAIP2: 1;                  /** \brief [18:18] Calculation of actions 12 to 23 in progress (2nd part) (r) */
    unsigned int CAIP1: 1;                  /** \brief [19:19] Calculation of actions 0 to 11 in progress (1st part) (r) */
    unsigned int ISN: 1;                    /** \brief [20:20] Increment number of STATE is not plausible (r) */
    unsigned int ITN: 1;                    /** \brief [21:21] Increment number of TRIGGER is not plausible (r) */
    unsigned int BWD2: 1;                   /** \brief [22:22] Backwards drive of SUB_INC2 (r) */
    unsigned int BWD1: 1;                   /** \brief [23:23] Backwards drive of SUB_INC1 (r) */
    unsigned int reserved_24: 1;
    unsigned int LOCK2: 1;                  /** \brief [25:25] DPLL Lock status concerning SUB_INC2 (r) */
    unsigned int SYS: 1;                    /** \brief [26:26] Synchronization condition of STATE fixed. (r) */
    unsigned int SYT: 1;                    /** \brief [27:27] Synchronization condition of TRIGGER fixed. (r) */
    unsigned int FSD: 1;                    /** \brief [28:28] First STATE detected (r) */
    unsigned int FTD: 1;                    /** \brief [29:29] First TRIGGER detected (r) */
    unsigned int LOCK1: 1;                  /** \brief [30:30] DPLL Lock status concerning SUB_INC1 (r) */
    unsigned int ERR: 1;                    /** \brief [31:31] Error during configuration or operation resulting in unexpected values. (r) */
} Ifx_GTM_DPLL_STATUS_Bits;

/** DPLL TBU_TS0 Value at last STATE Event */
typedef struct
{
    unsigned int TBU_TS0_S: 24;             /** \brief [23:0] value of TBU_TS0 at the last STATE event (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_DPLL_TBU_TS0_S_Bits;

/** DPLL TBU_TS0 Value at last TRIGGER Event */
typedef struct
{
    unsigned int TBU_TS0_T: 24;             /** \brief [23:0] value of TBU_TS0 at the last TRIGGER event (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_DPLL_TBU_TS0_T_Bits;

/** Calculated Time Stamp For ACTION_i Register */
typedef struct
{
    unsigned int TSAC: 24;                  /** \brief [23:0] Calculated time stamp for ACTION_i (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_DPLL_TSA_Bits;

/** DSADC Input Select 1Register */
typedef struct
{
    unsigned int INSEL0: 4;                 /** \brief [3:0] In Selection for DSADCx GTM connection (rw) */
    unsigned int INSEL1: 4;                 /** \brief [7:4] In Selection for DSADCx GTM connection (rw) */
    unsigned int INSEL2: 4;                 /** \brief [11:8] In Selection for DSADCx GTM connection (rw) */
    unsigned int INSEL3: 4;                 /** \brief [15:12] In Selection for DSADCx GTM connection (rw) */
    unsigned int INSEL4: 4;                 /** \brief [19:16] In Selection for DSADCx GTM connection (rw) */
    unsigned int INSEL5: 4;                 /** \brief [23:20] In Selection for DSADCx GTM connection (rw) */
    unsigned int INSEL6: 4;                 /** \brief [27:24] In Selection for DSADCx GTM connection (rw) */
    unsigned int INSEL7: 4;                 /** \brief [31:28] In Selection for DSADCx GTM connection (rw) */
} Ifx_GTM_DSADCINSEL1_Bits;

/** DSADC Input Select 2Register */
typedef struct
{
    unsigned int INSEL0: 4;                 /** \brief [3:0] In Selection for DSADCx GTM connection (rw) */
    unsigned int INSEL1: 4;                 /** \brief [7:4] In Selection for DSADCx GTM connection (rw) */
    unsigned int INSEL2: 4;                 /** \brief [11:8] In Selection for DSADCx GTM connection (rw) */
    unsigned int INSEL3: 4;                 /** \brief [15:12] In Selection for DSADCx GTM connection (rw) */
    unsigned int INSEL4: 4;                 /** \brief [19:16] In Selection for DSADCx GTM connection (rw) */
    unsigned int INSEL5: 4;                 /** \brief [23:20] In Selection for DSADCx GTM connection (rw) */
    unsigned int INSEL6: 4;                 /** \brief [27:24] In Selection for DSADCx GTM connection (rw) */
    unsigned int INSEL7: 4;                 /** \brief [31:28] In Selection for DSADCx GTM connection (rw) */
} Ifx_GTM_DSADCINSEL2_Bits;

/** DSADC Output Select 0 Register */
typedef struct
{
    unsigned int SEL0: 3;                   /** \brief [2:0] Output Selection for DSADCx GTM connection (rw) */
    unsigned int reserved_3: 1;
    unsigned int SEL1: 3;                   /** \brief [6:4] Output Selection for DSADCx GTM connection (rw) */
    unsigned int reserved_7: 1;
    unsigned int SEL2: 3;                   /** \brief [10:8] Output Selection for DSADCx GTM connection (rw) */
    unsigned int reserved_11: 1;
    unsigned int SEL3: 3;                   /** \brief [14:12] Output Selection for DSADCx GTM connection (rw) */
    unsigned int reserved_15: 1;
    unsigned int SEL4: 3;                   /** \brief [18:16] Output Selection for DSADCx GTM connection (rw) */
    unsigned int reserved_19: 1;
    unsigned int SEL5: 3;                   /** \brief [22:20] Output Selection for DSADCx GTM connection (rw) */
    unsigned int reserved_23: 9;
} Ifx_GTM_DSADCOUTSEL00_Bits;

/** DSADC Output Select 1 Register */
typedef struct
{
    unsigned int SEL0: 3;                   /** \brief [2:0] Output Selection for DSADCx GTM connection (rw) */
    unsigned int reserved_3: 1;
    unsigned int SEL1: 3;                   /** \brief [6:4] Output Selection for DSADCx GTM connection (rw) */
    unsigned int reserved_7: 1;
    unsigned int SEL2: 3;                   /** \brief [10:8] Output Selection for DSADCx GTM connection (rw) */
    unsigned int reserved_11: 1;
    unsigned int SEL3: 3;                   /** \brief [14:12] Output Selection for DSADCx GTM connection (rw) */
    unsigned int reserved_15: 1;
    unsigned int SEL4: 3;                   /** \brief [18:16] Output Selection for DSADCx GTM connection (rw) */
    unsigned int reserved_19: 1;
    unsigned int SEL5: 3;                   /** \brief [22:20] Output Selection for DSADCx GTM connection (rw) */
    unsigned int reserved_23: 9;
} Ifx_GTM_DSADCOUTSEL10_Bits;

/** GTM Infrastructure Interrupt Group */
typedef struct
{
    unsigned int ARU_NEW_DATA0_IRQ: 1;      /** \brief [0:0] ARU_NEW_DATA0 interrupt (rh) */
    unsigned int ARU_NEW_DATA1_IRQ: 1;      /** \brief [1:1] ARU_NEW_DATA1 interrupt (rh) */
    unsigned int ARU_ACC_ACK_IRQ: 1;        /** \brief [2:2] ARU_ACC_ACK interrupt (rh) */
    unsigned int BRC_IRQ: 1;                /** \brief [3:3] BRC shared submodule interrupt (rh) */
    unsigned int AEI_IRQ: 1;                /** \brief [4:4] AEI_IRQ interrupt (rh) */
    unsigned int CMP_IRQ: 1;                /** \brief [5:5] CMP shared submodule interrupt (rh) */
    unsigned int SPE0_IRQ: 1;               /** \brief [6:6] SPE0 shared submodule interrupt (rh) */
    unsigned int SPE1_IRQ: 1;               /** \brief [7:7] SPE0 shared submodule interrupt (rh) */
    unsigned int reserved_8: 8;
    unsigned int PSM0_CH0_IRQ: 1;           /** \brief [16:16] PSM0 shared submodule channel 0 interrupt (rh) */
    unsigned int PSM0_CH1_IRQ: 1;           /** \brief [17:17] PSM0 shared submodule channel 1 interrupt (rh) */
    unsigned int PSM0_CH2_IRQ: 1;           /** \brief [18:18] PSM0 shared submodule channel 2 interrupt (rh) */
    unsigned int PSM0_CH3_IRQ: 1;           /** \brief [19:19] PSM0 shared submodule channel 3 interrupt (rh) */
    unsigned int PSM0_CH4_IRQ: 1;           /** \brief [20:20] PSM0 shared submodule channel 4 interrupt (rh) */
    unsigned int PSM0_CH5_IRQ: 1;           /** \brief [21:21] PSM0 shared submodule channel 5 interrupt (rh) */
    unsigned int PSM0_CH6_IRQ: 1;           /** \brief [22:22] PSM0 shared submodule channel 6 interrupt (rh) */
    unsigned int PSM0_CH7_IRQ: 1;           /** \brief [23:23] PSM0 shared submodule channel 7 interrupt (rh) */
    unsigned int reserved_24: 8;
} Ifx_GTM_ICM_IRQG_0_Bits;

/** ATOM Interrupt Group 1 */
typedef struct
{
    unsigned int ATOM4_CH0_IRQ: 1;          /** \brief [0:0] ATOM4 channel 0 shared interrupt (rh) */
    unsigned int ATOM4_CH1_IRQ: 1;          /** \brief [1:1] ATOM4 channel 1 shared interrupt (rh) */
    unsigned int ATOM4_CH2_IRQ: 1;          /** \brief [2:2] ATOM4 channel 2 shared interrupt (rh) */
    unsigned int ATOM4_CH3_IRQ: 1;          /** \brief [3:3] ATOM4 channel 3 shared interrupt (rh) */
    unsigned int ATOM4_CH4_IRQ: 1;          /** \brief [4:4] ATOM4 channel 4 shared interrupt (rh) */
    unsigned int ATOM4_CH5_IRQ: 1;          /** \brief [5:5] ATOM4 channel 5 shared interrupt (rh) */
    unsigned int ATOM4_CH6_IRQ: 1;          /** \brief [6:6] ATOM4 channel 6 shared interrupt (rh) */
    unsigned int ATOM4_CH7_IRQ: 1;          /** \brief [7:7] ATOM4 channel 7 shared interrupt (rh) */
    unsigned int reserved_8: 24;
} Ifx_GTM_ICM_IRQG_10_Bits;

/** GTM DPLL Interrupt Group */
typedef struct
{
    unsigned int DPLL_DCG_IRQ: 1;           /** \brief [0:0] TRIGGER direction change detected. (rh) */
    unsigned int DPLL_EDI_IRQ: 1;           /** \brief [1:1] DPLL enable/disable interrupt See bit 0 (rh) */
    unsigned int DPLL_TIN_IRQ: 1;           /** \brief [2:2] TRIGGER minimum hold time (THMI) violation detected interrupt. See bit 0. (rh) */
    unsigned int DPLL_TAX_IRQ: 1;           /** \brief [3:3] TRIGGER maximum hold time (THMA) violation detected interrupt. See bit 0. (rh) */
    unsigned int DPLL_SIS_IRQ: 1;           /** \brief [4:4] STATE inactive slope detected interrupt. See bit 0. (rh) */
    unsigned int DPLL_TIS_IRQ: 1;           /** \brief [5:5] TRIGGER inactive slope detected interrupt. See bit 0. (rh) */
    unsigned int DPLL_MSI_IRQ: 1;           /** \brief [6:6] Missing STATE interrupt. See bit 0. (rh) */
    unsigned int DPLL_MTI_IRQ: 1;           /** \brief [7:7] Missing TRIGGER interrupt. See bit 0. (rh) */
    unsigned int DPLL_SAS_IRQ: 1;           /** \brief [8:8] STATE active slope detected. See bit 0. (rh) */
    unsigned int DPLL_TAS_IRQ: 1;           /** \brief [9:9] TRIGGER active slope detected while NTI_CNT is zero. See bit 0. (rh) */
    unsigned int DPLL_PWI_IRQ: 1;           /** \brief [10:10] Plausibility window (PVT) violation interrupt of TRIGGER. See bit 0. (rh) */
    unsigned int DPLL_W2I_IRQ: 1;           /** \brief [11:11] Write access to RAM region 2 interrupt See bit 0 (rh) */
    unsigned int DPLL_W1I_IRQ: 1;           /** \brief [12:12] Write access to RAM region 1b or 1c interrupt See bit 0 (rh) */
    unsigned int DPLL_GLI_IRQ: 1;           /** \brief [13:13] Get of lock interrupt for SUB_INC1. See bit 0. (rh) */
    unsigned int DPLL_LLI_IRQ: 1;           /** \brief [14:14] Lost of lock interrupt for SUB_INC1. See bit 0. (rh) */
    unsigned int DPLL_EI_IRQ: 1;            /** \brief [15:15] Error interrupt See bit 0 (rh) */
    unsigned int DPLL_GL2I_IRQ: 1;          /** \brief [16:16] Get of lock interrupt for SUB_INC2. See bit 0. (rh) */
    unsigned int DPLL_LL2I_IRQ: 1;          /** \brief [17:17] Lost of lock interrupt for SUB_INC2. See bit 0. (rh) */
    unsigned int DPLL_TE0_IRQ: 1;           /** \brief [18:18] TRIGGER event interrupt 0. See bit 0. (rh) */
    unsigned int DPLL_TE1_IRQ: 1;           /** \brief [19:19] TRIGGER event interrupt 1. See bit 0. (rh) */
    unsigned int DPLL_TE2_IRQ: 1;           /** \brief [20:20] TRIGGER event interrupt 2. See bit 0. (rh) */
    unsigned int DPLL_TE3_IRQ: 1;           /** \brief [21:21] TRIGGER event interrupt 3. See bit 0. (rh) */
    unsigned int DPLL_TE4_IRQ: 1;           /** \brief [22:22] TRIGGER event interrupt 4. See bit 0. (rh) */
    unsigned int DPLL_CDIT_IRQ: 1;          /** \brief [23:23] DPLL calculated duration interrupt for trigger See bit 0 (rh) */
    unsigned int DPLL_CDIS_IRQ: 1;          /** \brief [24:24] DPLL calculated duration interrupt for state See bit 0 (rh) */
    unsigned int DPLL_TORI_IRQ: 1;          /** \brief [25:25] DPLL calculated duration interrupt for state See bit 0 (rh) */
    unsigned int DPLL_SORI_IRQ: 1;          /** \brief [26:26] DPLL calculated duration interrupt for state See bit 0 (rh) */
    unsigned int reserved_27: 5;
} Ifx_GTM_ICM_IRQG_1_Bits;

/** TIM Interrupt Group 0 */
typedef struct
{
    unsigned int TIM0_CH0_IRQ: 1;           /** \brief [0:0] TIM0 shared interrupt channel 0. (rh) */
    unsigned int TIM0_CH1_IRQ: 1;           /** \brief [1:1] TIM0 shared interrupt channel 1 (rh) */
    unsigned int TIM0_CH2_IRQ: 1;           /** \brief [2:2] TIM0 shared interrupt channel 2 (rh) */
    unsigned int TIM0_CH3_IRQ: 1;           /** \brief [3:3] TIM0 shared interrupt channel 3 (rh) */
    unsigned int TIM0_CH4_IRQ: 1;           /** \brief [4:4] TIM0 shared interrupt channel 4 (rh) */
    unsigned int TIM0_CH5_IRQ: 1;           /** \brief [5:5] TIM0 shared interrupt channel 5 (rh) */
    unsigned int TIM0_CH6_IRQ: 1;           /** \brief [6:6] TIM0 shared interrupt channel 6 (rh) */
    unsigned int TIM0_CH7_IRQ: 1;           /** \brief [7:7] TIM0 shared interrupt channel 7 (rh) */
    unsigned int TIM1_CH0_IRQ: 1;           /** \brief [8:8] TIM1 shared interrupt channel 0 (rh) */
    unsigned int TIM1_CH1_IRQ: 1;           /** \brief [9:9] TIM1 shared interrupt channel 1 (rh) */
    unsigned int TIM1_CH2_IRQ: 1;           /** \brief [10:10] TIM1 shared interrupt channel 2 (rh) */
    unsigned int TIM1_CH3_IRQ: 1;           /** \brief [11:11] TIM1 shared interrupt channel 3 (rh) */
    unsigned int TIM1_CH4_IRQ: 1;           /** \brief [12:12] TIM1 shared interrupt channel 4 (rh) */
    unsigned int TIM1_CH5_IRQ: 1;           /** \brief [13:13] TIM1 shared interrupt channel 5 (rh) */
    unsigned int TIM1_CH6_IRQ: 1;           /** \brief [14:14] TIM1 shared interrupt channel 6 (rh) */
    unsigned int TIM1_CH7_IRQ: 1;           /** \brief [15:15] TIM1 shared interrupt channel 7 (rh) */
    unsigned int TIM2_CH0_IRQ: 1;           /** \brief [16:16] TIM2 shared interrupt channel 0 (rh) */
    unsigned int TIM2_CH1_IRQ: 1;           /** \brief [17:17] TIM2 shared interrupt channel 1 (rh) */
    unsigned int TIM2_CH2_IRQ: 1;           /** \brief [18:18] TIM2 shared interrupt channel 2 (rh) */
    unsigned int TIM2_CH3_IRQ: 1;           /** \brief [19:19] TIM2 shared interrupt channel 3 (rh) */
    unsigned int TIM2_CH4_IRQ: 1;           /** \brief [20:20] TIM2 shared interrupt channel 4 (rh) */
    unsigned int TIM2_CH5_IRQ: 1;           /** \brief [21:21] TIM2 shared interrupt channel 5 (rh) */
    unsigned int TIM2_CH6_IRQ: 1;           /** \brief [22:22] TIM2 shared interrupt channel 6 (rh) */
    unsigned int TIM2_CH7_IRQ: 1;           /** \brief [23:23] TIM2 shared interrupt channel 7 (rh) */
    unsigned int TIM3_CH0_IRQ: 1;           /** \brief [24:24] TIM3 shared interrupt channel 0 (rh) */
    unsigned int TIM3_CH1_IRQ: 1;           /** \brief [25:25] TIM3 shared interrupt channel 1 (rh) */
    unsigned int TIM3_CH2_IRQ: 1;           /** \brief [26:26] TIM3 shared interrupt channel 2 (rh) */
    unsigned int TIM3_CH3_IRQ: 1;           /** \brief [27:27] TIM3 shared interrupt channel 3 (rh) */
    unsigned int TIM3_CH4_IRQ: 1;           /** \brief [28:28] TIM3 shared interrupt channel 4 (rh) */
    unsigned int TIM3_CH5_IRQ: 1;           /** \brief [29:29] TIM3 shared interrupt channel 5 (rh) */
    unsigned int TIM3_CH6_IRQ: 1;           /** \brief [30:30] TIM3 shared interrupt channel 6 (rh) */
    unsigned int TIM3_CH7_IRQ: 1;           /** \brief [31:31] TIM3 shared interrupt channel 7 (rh) */
} Ifx_GTM_ICM_IRQG_2_Bits;

/** MCS Interrupt Group 0 */
typedef struct
{
    unsigned int MCS0_CH0_IRQ: 1;           /** \brief [0:0] MCS0 channel 0 interrupt (rh) */
    unsigned int MCS0_CH1_IRQ: 1;           /** \brief [1:1] MCS0 channel 1 interrupt (rh) */
    unsigned int MCS0_CH2_IRQ: 1;           /** \brief [2:2] MCS0 channel 2 interrupt (rh) */
    unsigned int MCS0_CH3_IRQ: 1;           /** \brief [3:3] MCS0 channel 3 interrupt (rh) */
    unsigned int MCS0_CH4_IRQ: 1;           /** \brief [4:4] MCS0 channel 4 interrupt (rh) */
    unsigned int MCS0_CH5_IRQ: 1;           /** \brief [5:5] MCS0 channel 5 interrupt (rh) */
    unsigned int MCS0_CH6_IRQ: 1;           /** \brief [6:6] MCS0 channel 6 interrupt (rh) */
    unsigned int MCS0_CH7_IRQ: 1;           /** \brief [7:7] MCS0 channel 7 interrupt (rh) */
    unsigned int MCS1_CH0_IRQ: 1;           /** \brief [8:8] MCS1 channel 0 interrupt (rh) */
    unsigned int MCS1_CH1_IRQ: 1;           /** \brief [9:9] MCS1 channel 1 interrupt (rh) */
    unsigned int MCS1_CH2_IRQ: 1;           /** \brief [10:10] MCS1 channel 2 interrupt (rh) */
    unsigned int MCS1_CH3_IRQ: 1;           /** \brief [11:11] MCS1 channel 3 interrupt (rh) */
    unsigned int MCS1_CH4_IRQ: 1;           /** \brief [12:12] MCS1 channel 4 interrupt (rh) */
    unsigned int MCS1_CH5_IRQ: 1;           /** \brief [13:13] MCS1 channel 5 interrupt (rh) */
    unsigned int MCS1_CH6_IRQ: 1;           /** \brief [14:14] MCS1 channel 6 interrupt (rh) */
    unsigned int MCS1_CH7_IRQ: 1;           /** \brief [15:15] MCS1 channel 7 interrupt (rh) */
    unsigned int MCS2_CH0_IRQ: 1;           /** \brief [16:16] MCS1 channel 0 interrupt (rh) */
    unsigned int MCS2_CH1_IRQ: 1;           /** \brief [17:17] MCS2 channel 1 interrupt (rh) */
    unsigned int MCS2_CH2_IRQ: 1;           /** \brief [18:18] MCS2 channel 2 interrupt (rh) */
    unsigned int MCS2_CH3_IRQ: 1;           /** \brief [19:19] MCS2 channel 3 interrupt (rh) */
    unsigned int MCS2_CH4_IRQ: 1;           /** \brief [20:20] MCS2 channel 4 interrupt (rh) */
    unsigned int MCS2_CH5_IRQ: 1;           /** \brief [21:21] MCS2 channel 5 interrupt (rh) */
    unsigned int MCS2_CH6_IRQ: 1;           /** \brief [22:22] MCS2 channel 6 interrupt (rh) */
    unsigned int MCS2_CH7_IRQ: 1;           /** \brief [23:23] MCS2 channel 7 interrupt (rh) */
    unsigned int MCS3_CH0_IRQ: 1;           /** \brief [24:24] MCS3 channel 0 interrupt (rh) */
    unsigned int MCS3_CH1_IRQ: 1;           /** \brief [25:25] MCS3 channel 1 interrupt (rh) */
    unsigned int MCS3_CH2_IRQ: 1;           /** \brief [26:26] MCS3 channel 2 interrupt (rh) */
    unsigned int MCS3_CH3_IRQ: 1;           /** \brief [27:27] MCS3 channel 3 interrupt (rh) */
    unsigned int MCS3_CH4_IRQ: 1;           /** \brief [28:28] MCS3 channel 4 interrupt (rh) */
    unsigned int MCS3_CH5_IRQ: 1;           /** \brief [29:29] MCS3 channel 5 interrupt (rh) */
    unsigned int MCS3_CH6_IRQ: 1;           /** \brief [30:30] MCS3 channel 6 interrupt (rh) */
    unsigned int MCS3_CH7_IRQ: 1;           /** \brief [31:31] MCS3 channel 7 interrupt (rh) */
} Ifx_GTM_ICM_IRQG_4_Bits;

/** TOM Interrupt Group 0 */
typedef struct
{
    unsigned int TOM0_CH0_IRQ: 1;           /** \brief [0:0] TOM0 channel 0 shared interrupt (rh) */
    unsigned int TOM0_CH1_IRQ: 1;           /** \brief [1:1] TOM0 channel 1 shared interrupt (rh) */
    unsigned int TOM0_CH2_IRQ: 1;           /** \brief [2:2] TOM0 channel 2 shared interrupt (rh) */
    unsigned int TOM0_CH3_IRQ: 1;           /** \brief [3:3] TOM0 channel 3 shared interrupt (rh) */
    unsigned int TOM0_CH4_IRQ: 1;           /** \brief [4:4] TOM0 channel 4 shared interrupt (rh) */
    unsigned int TOM0_CH5_IRQ: 1;           /** \brief [5:5] TOM0 channel 5 shared interrupt (rh) */
    unsigned int TOM0_CH6_IRQ: 1;           /** \brief [6:6] TOM0 channel 6 shared interrupt (rh) */
    unsigned int TOM0_CH7_IRQ: 1;           /** \brief [7:7] TOM0 channel 7 shared interrupt (rh) */
    unsigned int TOM0_CH8_IRQ: 1;           /** \brief [8:8] TOM0 channel 8 shared interrupt (rh) */
    unsigned int TOM0_CH9_IRQ: 1;           /** \brief [9:9] TOM0 channel 9 shared interrupt (rh) */
    unsigned int TOM0_CH10_IRQ: 1;          /** \brief [10:10] TOM0 channel 10 shared interrupt (rh) */
    unsigned int TOM0_CH11_IRQ: 1;          /** \brief [11:11] TOM0 channel 11 shared interrupt (rh) */
    unsigned int TOM0_CH12_IRQ: 1;          /** \brief [12:12] TOM0 channel 12 shared interrupt (rh) */
    unsigned int TOM0_CH13_IRQ: 1;          /** \brief [13:13] TOM0 channel 13 shared interrupt (rh) */
    unsigned int TOM0_CH14_IRQ: 1;          /** \brief [14:14] TOM0 channel 14 shared interrupt (rh) */
    unsigned int TOM0_CH15_IRQ: 1;          /** \brief [15:15] TOM0 channel 15 shared interrupt (rh) */
    unsigned int TOM1_CH0_IRQ: 1;           /** \brief [16:16] TOM1 channel 0 shared interrupt (rh) */
    unsigned int TOM1_CH1_IRQ: 1;           /** \brief [17:17] TOM1 channel 1 shared interrupt (rh) */
    unsigned int TOM1_CH2_IRQ: 1;           /** \brief [18:18] TOM1 channel 2 shared interrupt (rh) */
    unsigned int TOM1_CH3_IRQ: 1;           /** \brief [19:19] TOM1 channel 3 shared interrupt (rh) */
    unsigned int TOM1_CH4_IRQ: 1;           /** \brief [20:20] TOM1 channel 4 shared interrupt (rh) */
    unsigned int TOM1_CH5_IRQ: 1;           /** \brief [21:21] TOM1 channel 5 shared interrupt (rh) */
    unsigned int TOM1_CH6_IRQ: 1;           /** \brief [22:22] TOM1 channel 6 shared interrupt (rh) */
    unsigned int TOM1_CH7_IRQ: 1;           /** \brief [23:23] TOM1 channel 7 shared interrupt (rh) */
    unsigned int TOM1_CH8_IRQ: 1;           /** \brief [24:24] TOM1 channel 8 shared interrupt (rh) */
    unsigned int TOM1_CH9_IRQ: 1;           /** \brief [25:25] TOM1 channel 9 shared interrupt (rh) */
    unsigned int TOM1_CH10_IRQ: 1;          /** \brief [26:26] TOM1 channel 10 shared interrupt (rh) */
    unsigned int TOM1_CH11_IRQ: 1;          /** \brief [27:27] TOM1 channel 11 shared interrupt (rh) */
    unsigned int TOM1_CH12_IRQ: 1;          /** \brief [28:28] TOM1 channel 12 shared interrupt (rh) */
    unsigned int TOM1_CH13_IRQ: 1;          /** \brief [29:29] TOM1 channel 13 shared interrupt (rh) */
    unsigned int TOM1_CH14_IRQ: 1;          /** \brief [30:30] TOM1 channel 14 shared interrupt (rh) */
    unsigned int TOM1_CH15_IRQ: 1;          /** \brief [31:31] TOM1 channel 15 shared interrupt (rh) */
} Ifx_GTM_ICM_IRQG_6_Bits;

/** ITOM Interrupt Group 1 */
typedef struct
{
    unsigned int TOM2_CH0_IRQ: 1;           /** \brief [0:0] TOM2 channel 0 shared interrupt (rh) */
    unsigned int TOM2_CH1_IRQ: 1;           /** \brief [1:1] TOM2 channel 1 shared interrupt (rh) */
    unsigned int TOM2_CH2_IRQ: 1;           /** \brief [2:2] TOM2 channel 2 shared interrupt (rh) */
    unsigned int TOM2_CH3_IRQ: 1;           /** \brief [3:3] TOM2 channel 3 shared interrupt (rh) */
    unsigned int TOM2_CH4_IRQ: 1;           /** \brief [4:4] TOM2 channel 4 shared interrupt (rh) */
    unsigned int TOM2_CH5_IRQ: 1;           /** \brief [5:5] TOM2 channel 5 shared interrupt (rh) */
    unsigned int TOM2_CH6_IRQ: 1;           /** \brief [6:6] TOM2 channel 6 shared interrupt (rh) */
    unsigned int TOM2_CH7_IRQ: 1;           /** \brief [7:7] TOM2 channel 7 shared interrupt (rh) */
    unsigned int TOM2_CH8_IRQ: 1;           /** \brief [8:8] TOM2 channel 8 shared interrupt (rh) */
    unsigned int TOM2_CH9_IRQ: 1;           /** \brief [9:9] TOM2 channel 9 shared interrupt (rh) */
    unsigned int TOM2_CH10_IRQ: 1;          /** \brief [10:10] TOM2 channel 10 shared interrupt (rh) */
    unsigned int TOM2_CH11_IRQ: 1;          /** \brief [11:11] TOM2 channel 11 shared interrupt (rh) */
    unsigned int TOM2_CH12_IRQ: 1;          /** \brief [12:12] TOM2 channel 12 shared interrupt (rh) */
    unsigned int TOM2_CH13_IRQ: 1;          /** \brief [13:13] TOM2 channel 13 shared interrupt (rh) */
    unsigned int TOM2_CH14_IRQ: 1;          /** \brief [14:14] TOM2 channel 14 shared interrupt (rh) */
    unsigned int TOM2_CH15_IRQ: 1;          /** \brief [15:15] TOM2 channel 15 shared interrupt (rh) */
    unsigned int reserved_16: 16;
} Ifx_GTM_ICM_IRQG_7_Bits;

/** ATOM Interrupt Group 0 */
typedef struct
{
    unsigned int ATOM0_CH0_IRQ: 1;          /** \brief [0:0] ATOM0 channel 0 shared interrupt (rh) */
    unsigned int ATOM0_CH1_IRQ: 1;          /** \brief [1:1] ATOM0 channel 1 shared interrupt (rh) */
    unsigned int ATOM0_CH2_IRQ: 1;          /** \brief [2:2] ATOM0 channel 2 shared interrupt (rh) */
    unsigned int ATOM0_CH3_IRQ: 1;          /** \brief [3:3] ATOM0 channel 3 shared interrupt (rh) */
    unsigned int ATOM0_CH4_IRQ: 1;          /** \brief [4:4] ATOM0 channel 4 shared interrupt (rh) */
    unsigned int ATOM0_CH5_IRQ: 1;          /** \brief [5:5] ATOM0 channel 5 shared interrupt (rh) */
    unsigned int ATOM0_CH6_IRQ: 1;          /** \brief [6:6] ATOM0 channel 6 shared interrupt (rh) */
    unsigned int ATOM0_CH7_IRQ: 1;          /** \brief [7:7] ATOM0 channel 7 shared interrupt (rh) */
    unsigned int ATOM1_CH0_IRQ: 1;          /** \brief [8:8] ATOM1 channel 0 shared interrupt (rh) */
    unsigned int ATOM1_CH1_IRQ: 1;          /** \brief [9:9] ATOM1 channel 1 shared interrupt (rh) */
    unsigned int ATOM1_CH2_IRQ: 1;          /** \brief [10:10] ATOM1 channel 2 shared interrupt (rh) */
    unsigned int ATOM1_CH3_IRQ: 1;          /** \brief [11:11] ATOM1 channel 3 shared interrupt (rh) */
    unsigned int ATOM1_CH4_IRQ: 1;          /** \brief [12:12] ATOM1 channel 4 shared interrupt (rh) */
    unsigned int ATOM1_CH5_IRQ: 1;          /** \brief [13:13] ATOM1 channel 5 shared interrupt (rh) */
    unsigned int ATOM1_CH6_IRQ: 1;          /** \brief [14:14] ATOM1 channel 6 shared interrupt (rh) */
    unsigned int ATOM1_CH7_IRQ: 1;          /** \brief [15:15] ATOM1 channel 7 shared interrupt (rh) */
    unsigned int ATOM2_CH0_IRQ: 1;          /** \brief [16:16] ATOM2 channel 0 shared interrupt (rh) */
    unsigned int ATOM2_CH1_IRQ: 1;          /** \brief [17:17] ATOM2 channel 1 shared interrupt (rh) */
    unsigned int ATOM2_CH2_IRQ: 1;          /** \brief [18:18] ATOM2 channel 2 shared interrupt (rh) */
    unsigned int ATOM2_CH3_IRQ: 1;          /** \brief [19:19] ATOM2 channel 3 shared interrupt (rh) */
    unsigned int ATOM2_CH4_IRQ: 1;          /** \brief [20:20] ATOM2 channel 4 shared interrupt (rh) */
    unsigned int ATOM2_CH5_IRQ: 1;          /** \brief [21:21] ATOM2 channel 5 shared interrupt (rh) */
    unsigned int ATOM2_CH6_IRQ: 1;          /** \brief [22:22] ATOM2 channel 6 shared interrupt (rh) */
    unsigned int ATOM2_CH7_IRQ: 1;          /** \brief [23:23] ATOM2 channel 7 shared interrupt (rh) */
    unsigned int ATOM3_CH0_IRQ: 1;          /** \brief [24:24] ATOM3 channel 0 shared interrupt (rh) */
    unsigned int ATOM3_CH1_IRQ: 1;          /** \brief [25:25] ATOM3 channel 1 shared interrupt (rh) */
    unsigned int ATOM3_CH2_IRQ: 1;          /** \brief [26:26] ATOM3 channel 2 shared interrupt (rh) */
    unsigned int ATOM3_CH3_IRQ: 1;          /** \brief [27:27] ATOM3 channel 3 shared interrupt (rh) */
    unsigned int ATOM3_CH4_IRQ: 1;          /** \brief [28:28] ATOM3 channel 4 shared interrupt (rh) */
    unsigned int ATOM3_CH5_IRQ: 1;          /** \brief [29:29] ATOM3 channel 5 shared interrupt (rh) */
    unsigned int ATOM3_CH6_IRQ: 1;          /** \brief [30:30] ATOM3 channel 6 shared interrupt (rh) */
    unsigned int ATOM3_CH7_IRQ: 1;          /** \brief [31:31] ATOM3 channel 7 shared interrupt (rh) */
} Ifx_GTM_ICM_IRQG_9_Bits;

/** GTM Interrupt Enable Register */
typedef struct
{
    unsigned int AEI_TO_XPT_IRQ_EN: 1;      /** \brief [0:0] AEI_TO_XPT_IRQ interrupt enable. (rw) */
    unsigned int AEI_USP_ADDR_IRQ_EN: 1;    /** \brief [1:1] AEI_USP_ADDR_IRQ interrupt enable. (rw) */
    unsigned int AEI_IM_ADDR_IRQ_EN: 1;     /** \brief [2:2] AEI_IM_ADDR_IRQ interrupt enable. (rw) */
    unsigned int AEI_USP_BE_IRQ_EN: 1;      /** \brief [3:3] AEI_USP_BE_IRQ interrupt enable. (rw) */
    unsigned int reserved_4: 28;
} Ifx_GTM_IRQ_EN_Bits;

/** GTM Software Interrupt Generation Register */
typedef struct
{
    unsigned int TRG_AEI_TO_XPT: 1;         /** \brief [0:0] Trigger AEI_TO_XPT_IRQ interrupt by software. (w) */
    unsigned int TRG_AEI_USP_ADDR: 1;       /** \brief [1:1] Trigger AEI_USP_ADDR_IRQ interrupt by software. (w) */
    unsigned int TRG_AEI_IM_ADDR: 1;        /** \brief [2:2] Trigger AEI_IM_ADDR_IRQ interrupt by software. (w) */
    unsigned int TRG_AEI_USP_BE: 1;         /** \brief [3:3] Trigger AEI_USP_BE_IRQ interrupt by software. (w) */
    unsigned int reserved_4: 28;
} Ifx_GTM_IRQ_FORCINT_Bits;

/** GTM Top Level Interrupts Mode Selection */
typedef struct
{
    unsigned int IRQ_MODE: 2;               /** \brief [1:0] Interrupt strategy mode selection for the AEI timeout and address monitoring interrupts (rw) */
    unsigned int reserved_2: 30;
} Ifx_GTM_IRQ_MODE_Bits;

/** GTM Interrupt Notification Register */
typedef struct
{
    unsigned int AEI_TO_XPT: 1;             /** \brief [0:0] AEI Timeout exception occurred (rwh) */
    unsigned int AEI_USP_ADDR: 1;           /** \brief [1:1] AEI Unsupported address interrupt (rwh) */
    unsigned int AEI_IM_ADDR: 1;            /** \brief [2:2] AEI Illegal Module address interrupt (rwh) */
    unsigned int AEI_USP_BE: 1;             /** \brief [3:3] AEI Unsupported byte enable interrupt (rwh) */
    unsigned int reserved_4: 28;
} Ifx_GTM_IRQ_NOTIFY_Bits;

/** Kernel Reset Register 0 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int RSTSTAT: 1;                /** \brief [1:1] Kernel Reset Status (rw) */
    unsigned int reserved_2: 30;
} Ifx_GTM_KRST0_Bits;

/** Kernel Reset Register 1 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int reserved_1: 31;
} Ifx_GTM_KRST1_Bits;

/** Kernel Reset Status Clear Register */
typedef struct
{
    unsigned int CLR: 1;                    /** \brief [0:0] Kernel Reset Status Clear (w) */
    unsigned int reserved_1: 31;
} Ifx_GTM_KRSTCLR_Bits;

/** MAP Control Register */
typedef struct
{
    unsigned int TSEL: 1;                   /** \brief [0:0] TRIGGER signal output select. (rw) */
    unsigned int SSL: 3;                    /** \brief [3:1] STATE signal output select. (rw) */
    unsigned int reserved_4: 12;
    unsigned int TSPP0_EN: 1;               /** \brief [16:16] Enable of TSPP0 subunit (rw) */
    unsigned int TSPP0_DLD: 1;              /** \brief [17:17] DIR level definition bit (rw) */
    unsigned int reserved_18: 2;
    unsigned int TSPP0_I0V: 1;              /** \brief [20:20] Disable of TSPP0 TIM0_CHx(48) input line. (rw) */
    unsigned int TSPP0_I1V: 1;              /** \brief [21:21] Disable of TSPP0 TIM0_CHy(48) input line. (rw) */
    unsigned int TSPP0_I2V: 1;              /** \brief [22:22] Disable of TSPP0 TIM0_CHz(48) input line. (rw) */
    unsigned int reserved_23: 1;
    unsigned int TSPP1_EN: 1;               /** \brief [24:24] Enable of TSPP1 subunit (rw) */
    unsigned int TSPP1_DLD: 1;              /** \brief [25:25] DIR level definition bit (rw) */
    unsigned int reserved_26: 2;
    unsigned int TSPP1_I0V: 1;              /** \brief [28:28] Disable of TSPP1 TIM0_CHx(48) input line (rw) */
    unsigned int TSPP1_I1V: 1;              /** \brief [29:29] Disable of TSPP1 TIM0_CHy(48) input line (rw) */
    unsigned int TSPP1_I2V: 1;              /** \brief [30:30] Disable of TSPP1 TIM0_CHz(48) input line. (rw) */
    unsigned int reserved_31: 1;
} Ifx_GTM_MAP_CTRL_Bits;

/** Memory Layout Configuration Register */
typedef struct
{
    unsigned int MEM0: 2;                   /** \brief [1:0] Configure Memory pages for MCS-instance MCS0 (rw) */
    unsigned int MEM1: 2;                   /** \brief [3:2] Configure Memory pages for MCS-instance MCS1 (rw) */
    unsigned int MEM2: 2;                   /** \brief [5:4] Configure Memory pages for MCS-instance MCS2 (rw) */
    unsigned int MEM3: 2;                   /** \brief [7:6] Configure Memory pages for MCS-instance MCS3 (rw) */
    unsigned int reserved_8: 24;
} Ifx_GTM_MCFG_CTRL_Bits;

/** MCS Channel ACB Register */
typedef struct
{
    unsigned int ACB0: 1;                   /** \brief [0:0] ARU Control bit 0 (r) */
    unsigned int ACB1: 1;                   /** \brief [1:1] ARU Control bit 1 (r) */
    unsigned int ACB2: 1;                   /** \brief [2:2] ARU Control bit 2 (r) */
    unsigned int ACB3: 1;                   /** \brief [3:3] ARU Control bit 3 (r) */
    unsigned int ACB4: 1;                   /** \brief [4:4] ARU Control bit 4 (r) */
    unsigned int reserved_5: 27;
} Ifx_GTM_MCS_CH_ACB_Bits;

/** MCS Channel Control Register */
typedef struct
{
    unsigned int EN: 1;                     /** \brief [0:0] Enable MCS-channel (rw) */
    unsigned int IRQ: 1;                    /** \brief [1:1] Interrupt state (r) */
    unsigned int ERR: 1;                    /** \brief [2:2] Error state (r) */
    unsigned int reserved_3: 1;
    unsigned int CY: 1;                     /** \brief [4:4] Carry bit state (r) */
    unsigned int Z: 1;                      /** \brief [5:5] Zero bit state (r) */
    unsigned int V: 1;                      /** \brief [6:6] Overflow bit state (r) */
    unsigned int N: 1;                      /** \brief [7:7] Negative bit state (r) */
    unsigned int CAT: 1;                    /** \brief [8:8] Cancel ARU transfer state (r) */
    unsigned int CWT: 1;                    /** \brief [9:9] Cancel WURM instruction state (r) */
    unsigned int reserved_10: 6;
    unsigned int SP_CNT: 3;                 /** \brief [18:16] Stack pointer counter value (r) */
    unsigned int reserved_19: 13;
} Ifx_GTM_MCS_CH_CTRL_Bits;

/** MCS Channel Interrupt Enable Register */
typedef struct
{
    unsigned int MCS_IRQ_EN: 1;             /** \brief [0:0] MCS channel x MCS_IRQ interrupt enable (rw) */
    unsigned int STK_ERR_IRQ_EN: 1;         /** \brief [1:1] MCS channel x STK_ERR_IRQ interrupt enable (rw) */
    unsigned int MEM_ERR_IRQ_EN: 1;         /** \brief [2:2] MCS channel x MEM_ERR_IRQ interrupt enable (rw) */
    unsigned int reserved_3: 29;
} Ifx_GTM_MCS_CH_IRQ_EN_Bits;

/** MCS Channel Software Interrupt Generation Register */
typedef struct
{
    unsigned int TRG_MCS_IRQ: 1;            /** \brief [0:0] Trigger IRQ bit in MCS_CH_[x]_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_STK_ERR_IRQ: 1;        /** \brief [1:1] Trigger IRQ bit in MCS_CH_[x]_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_MEM_ERR_IRQ: 1;        /** \brief [2:2] Trigger IRQ bit in MCS_CH_[x]_IRQ_NOTIFY register by software (w) */
    unsigned int reserved_3: 29;
} Ifx_GTM_MCS_CH_IRQ_FORCINT_Bits;

/** MCS IRQ Mode Configuration Register */
typedef struct
{
    unsigned int IRQ_MODE: 2;               /** \brief [1:0] IRQ mode selection (rw) */
    unsigned int reserved_2: 30;
} Ifx_GTM_MCS_CH_IRQ_MODE_Bits;

/** MCS Channel interrupt notification register */
typedef struct
{
    unsigned int MCS_IRQ: 1;                /** \brief [0:0] Interrupt request by MCS-channel x (rwh) */
    unsigned int STK_ERR_IRQ: 1;            /** \brief [1:1] Stack counter overflow/underflow of channel x (rwh) */
    unsigned int MEM_ERR_IRQ: 1;            /** \brief [2:2] Memory access out of range in channel x (rwh) */
    unsigned int reserved_3: 29;
} Ifx_GTM_MCS_CH_IRQ_NOTIFY_Bits;

/** MCS Channel Program Counter Register */
typedef struct
{
    unsigned int PC: 14;                    /** \brief [13:0] Current Program Counter (rw) */
    unsigned int reserved_14: 18;
} Ifx_GTM_MCS_CH_PC_Bits;

/** MCS Channel Program Counter Register 0 */
typedef struct
{
    unsigned int DATA: 24;                  /** \brief [23:0] Data of MCS general purpose register ry (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_MCS_CH_R0_Bits;

/** MCS Channel Program Counter Register 1 */
typedef struct
{
    unsigned int DATA: 24;                  /** \brief [23:0] Data of MCS general purpose register ry (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_MCS_CH_R1_Bits;

/** MCS Channel Program Counter Register 2 */
typedef struct
{
    unsigned int DATA: 24;                  /** \brief [23:0] Data of MCS general purpose register ry (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_MCS_CH_R2_Bits;

/** MCS Channel Program Counter Register 3 */
typedef struct
{
    unsigned int DATA: 24;                  /** \brief [23:0] Data of MCS general purpose register ry (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_MCS_CH_R3_Bits;

/** MCS Channel Program Counter Register 4 */
typedef struct
{
    unsigned int DATA: 24;                  /** \brief [23:0] Data of MCS general purpose register ry (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_MCS_CH_R4_Bits;

/** MCS Channel Program Counter Register 5 */
typedef struct
{
    unsigned int DATA: 24;                  /** \brief [23:0] Data of MCS general purpose register ry (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_MCS_CH_R5_Bits;

/** MCS Channel Program Counter Register 6 */
typedef struct
{
    unsigned int DATA: 24;                  /** \brief [23:0] Data of MCS general purpose register ry (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_MCS_CH_R6_Bits;

/** MCS Channel Program Counter Register 7 */
typedef struct
{
    unsigned int DATA: 24;                  /** \brief [23:0] Data of MCS general purpose register ry (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_MCS_CH_R7_Bits;

/** MCS Clear Trigger Control Register */
typedef struct
{
    unsigned int TRG0: 1;                   /** \brief [0:0] Trigger bit 0 (rw) */
    unsigned int TRG1: 1;                   /** \brief [1:1] Trigger bit 1 (rw) */
    unsigned int TRG2: 1;                   /** \brief [2:2] Trigger bit 2 (rw) */
    unsigned int TRG3: 1;                   /** \brief [3:3] Trigger bit 3 (rw) */
    unsigned int TRG4: 1;                   /** \brief [4:4] Trigger bit 4 (rw) */
    unsigned int TRG5: 1;                   /** \brief [5:5] Trigger bit 5 (rw) */
    unsigned int TRG6: 1;                   /** \brief [6:6] Trigger bit 6 (rw) */
    unsigned int TRG7: 1;                   /** \brief [7:7] Trigger bit 7 (rw) */
    unsigned int TRG8: 1;                   /** \brief [8:8] Trigger bit 8 (rw) */
    unsigned int TRG9: 1;                   /** \brief [9:9] Trigger bit 9 (rw) */
    unsigned int TRG10: 1;                  /** \brief [10:10] Trigger bit 10 (rw) */
    unsigned int TRG11: 1;                  /** \brief [11:11] Trigger bit 11 (rw) */
    unsigned int TRG12: 1;                  /** \brief [12:12] Trigger bit 12 (rw) */
    unsigned int TRG13: 1;                  /** \brief [13:13] Trigger bit 13 (rw) */
    unsigned int TRG14: 1;                  /** \brief [14:14] Trigger bit 14 (rw) */
    unsigned int TRG15: 1;                  /** \brief [15:15] Trigger bit 15 (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_MCS_CTRG_Bits;

/** MCS Control Register */
typedef struct
{
    unsigned int SCHED: 1;                  /** \brief [0:0] MCS submodule scheduling scheme (rw) */
    unsigned int HLT_SP_OFL: 1;             /** \brief [1:1] Halt on stack pointer overflow (rw) */
    unsigned int reserved_2: 14;
    unsigned int RAM_RST: 1;                /** \brief [16:16] RAM reset bit (r) */
    unsigned int reserved_17: 15;
} Ifx_GTM_MCS_CTRL_Bits;

/** MCS Error Register */
typedef struct
{
    unsigned int ERR0: 1;                   /** \brief [0:0] Error State of MCS-channel 0 (rwh) */
    unsigned int ERR1: 1;                   /** \brief [1:1] Error State of MCS-channel 1 (rwh) */
    unsigned int ERR2: 1;                   /** \brief [2:2] Error State of MCS-channel 2 (rwh) */
    unsigned int ERR3: 1;                   /** \brief [3:3] Error State of MCS-channel3 (rwh) */
    unsigned int ERR4: 1;                   /** \brief [4:4] Error State of MCS-channel 4 (rwh) */
    unsigned int ERR5: 1;                   /** \brief [5:5] Error State of MCS-channel 5 (rwh) */
    unsigned int ERR6: 1;                   /** \brief [6:6] Error State of MCS-channel 6 (rwh) */
    unsigned int ERR7: 1;                   /** \brief [7:7] Error State of MCS-channel 7 (rwh) */
    unsigned int reserved_8: 24;
} Ifx_GTM_MCS_ERR_Bits;

/** MCS Channel Reset Register */
typedef struct
{
    unsigned int RST0: 1;                   /** \brief [0:0] Software reset of channel 0 (w) */
    unsigned int RST1: 1;                   /** \brief [1:1] Software reset of channel 1 (w) */
    unsigned int RST2: 1;                   /** \brief [2:2] Software reset of channel 2 (w) */
    unsigned int RST3: 1;                   /** \brief [3:3] Software reset of channel 3 (w) */
    unsigned int RST4: 1;                   /** \brief [4:4] Software reset of channel 4 (w) */
    unsigned int RST5: 1;                   /** \brief [5:5] Software reset of channel 5 (w) */
    unsigned int RST6: 1;                   /** \brief [6:6] Software reset of channel 6 (w) */
    unsigned int RST7: 1;                   /** \brief [7:7] Software reset of channel 7 (w) */
    unsigned int CAT0: 1;                   /** \brief [8:8] Cancel ARU transfer for channel 0 (rwh) */
    unsigned int CAT1: 1;                   /** \brief [9:9] Cancel ARU transfer for channel 1 (rwh) */
    unsigned int CAT2: 1;                   /** \brief [10:10] Cancel ARU transfer for channel 2 (rwh) */
    unsigned int CAT3: 1;                   /** \brief [11:11] Cancel ARU transfer for channel 3 (rwh) */
    unsigned int CAT4: 1;                   /** \brief [12:12] Cancel ARU transfer for channel 4 (rwh) */
    unsigned int CAT5: 1;                   /** \brief [13:13] Cancel ARU transfer for channel 5 (rwh) */
    unsigned int CAT6: 1;                   /** \brief [14:14] Cancel ARU transfer for channel 6 (rwh) */
    unsigned int CAT7: 1;                   /** \brief [15:15] Cancel ARU transfer for channel 7 (rwh) */
    unsigned int CWT0: 1;                   /** \brief [16:16] Cancel WURM instruction for channel 0 (rwh) */
    unsigned int CWT1: 1;                   /** \brief [17:17] Cancel WURM instruction for channel 1 (rwh) */
    unsigned int CWT2: 1;                   /** \brief [18:18] Cancel WURM instruction for channel 2 (rwh) */
    unsigned int CWT3: 1;                   /** \brief [19:19] Cancel WURM instruction for channel 3 (rwh) */
    unsigned int CWT4: 1;                   /** \brief [20:20] Cancel WURM instruction for channel 4 (rwh) */
    unsigned int CWT5: 1;                   /** \brief [21:21] Cancel WURM instruction for channel 5 (rwh) */
    unsigned int CWT6: 1;                   /** \brief [22:22] Cancel WURM instruction for channel 6 (rwh) */
    unsigned int CWT7: 1;                   /** \brief [23:23] Cancel WURM instruction for channel 7 (rwh) */
    unsigned int reserved_24: 8;
} Ifx_GTM_MCS_RST_Bits;

/** MCS Set Trigger Control Register */
typedef struct
{
    unsigned int TRG0: 1;                   /** \brief [0:0] Trigger bit 0 (rw) */
    unsigned int TRG1: 1;                   /** \brief [1:1] Trigger bit 1 (rw) */
    unsigned int TRG2: 1;                   /** \brief [2:2] Trigger bit 2 (rw) */
    unsigned int TRG3: 1;                   /** \brief [3:3] Trigger bit 3 (rw) */
    unsigned int TRG4: 1;                   /** \brief [4:4] Trigger bit 4 (rw) */
    unsigned int TRG5: 1;                   /** \brief [5:5] Trigger bit 5 (rw) */
    unsigned int TRG6: 1;                   /** \brief [6:6] Trigger bit 6 (rw) */
    unsigned int TRG7: 1;                   /** \brief [7:7] Trigger bit 7 (rw) */
    unsigned int TRG8: 1;                   /** \brief [8:8] trigger bit 8 (rw) */
    unsigned int TRG9: 1;                   /** \brief [9:9] Trigger bit 9 (rw) */
    unsigned int TRG10: 1;                  /** \brief [10:10] Trigger bit 10 (rw) */
    unsigned int TRG11: 1;                  /** \brief [11:11] Trigger bit 11 (rw) */
    unsigned int TRG12: 1;                  /** \brief [12:12] Trigger bit 12 (rw) */
    unsigned int TRG13: 1;                  /** \brief [13:13] Trigger bit 13 (rw) */
    unsigned int TRG14: 1;                  /** \brief [14:14] Trigger bit 14 (rw) */
    unsigned int TRG15: 1;                  /** \brief [15:15] Trigger bit 15 (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_MCS_STRG_Bits;

/** Monitor Activity Register 0 */
typedef struct
{
    unsigned int MCA_0_0: 1;                /** \brief [0:0] Activity of check performed in module MCS[0] at channel 0 (rwh) */
    unsigned int MCA_0_1: 1;                /** \brief [1:1] Activity of check performed in module MCS[0] at channel 1 (rwh) */
    unsigned int MCA_0_2: 1;                /** \brief [2:2] Activity of check performed in module MCS[0] at channel 2 (rwh) */
    unsigned int MCA_0_3: 1;                /** \brief [3:3] Activity of check performed in module MCS[0] at channel 3 (rwh) */
    unsigned int MCA_0_4: 1;                /** \brief [4:4] Activity of check performed in module MCS[0] at channel 4 (rwh) */
    unsigned int MCA_0_5: 1;                /** \brief [5:5] Activity of check performed in module MCS[0] at channel 5 (rwh) */
    unsigned int MCA_0_6: 1;                /** \brief [6:6] Activity of check performed in module MCS[0] at channel 6 (rwh) */
    unsigned int MCA_0_7: 1;                /** \brief [7:7] Activity of check performed in module MCS[0] at channel 7 (rwh) */
    unsigned int MCA_1_0: 1;                /** \brief [8:8] Activity of check performed in module MCS[1] at channel 0 (rwh) */
    unsigned int MCA_1_1: 1;                /** \brief [9:9] Activity of check performed in module MCS[1] at channel 1 (rwh) */
    unsigned int MCA_1_2: 1;                /** \brief [10:10] Activity of check performed in module MCS[1] at channel 2 (rwh) */
    unsigned int MCA_1_3: 1;                /** \brief [11:11] Activity of check performed in module MCS[1] at channel 3 (rwh) */
    unsigned int MCA_1_4: 1;                /** \brief [12:12] Activity of check performed in module MCS[1] at channel 4 (rwh) */
    unsigned int MCA_1_5: 1;                /** \brief [13:13] Activity of check performed in module MCS[1] at channel 5 (rwh) */
    unsigned int MCA_1_6: 1;                /** \brief [14:14] Activity of check performed in module MCS[1] at channel 6 (rwh) */
    unsigned int MCA_1_7: 1;                /** \brief [15:15] Activity of check performed in module MCS[1] at channel 7 (rwh) */
    unsigned int MCA_2_0: 1;                /** \brief [16:16] Activity of check performed in module MCS[2] at channel 0 (rwh) */
    unsigned int MCA_2_1: 1;                /** \brief [17:17] Activity of check performed in module MCS[2] at channel 1 (rwh) */
    unsigned int MCA_2_2: 1;                /** \brief [18:18] Activity of check performed in module MCS[2] at channel 2 (rwh) */
    unsigned int MCA_2_3: 1;                /** \brief [19:19] Activity of check performed in module MCS[2] at channel 3 (rwh) */
    unsigned int MCA_2_4: 1;                /** \brief [20:20] Activity of check performed in module MCS[2] at channel 4 (rwh) */
    unsigned int MCA_2_5: 1;                /** \brief [21:21] Activity of check performed in module MCS[2] at channel 5 (rwh) */
    unsigned int MCA_2_6: 1;                /** \brief [22:22] Activity of check performed in module MCS[2] at channel 6 (rwh) */
    unsigned int MCA_2_7: 1;                /** \brief [23:23] Activity of check performed in module MCS[2] at channel 7 (rwh) */
    unsigned int MCA_3_0: 1;                /** \brief [24:24] Activity of check performed in module MCS[3] at channel 0 (rwh) */
    unsigned int MCA_3_1: 1;                /** \brief [25:25] Activity of check performed in module MCS[3] at channel 1 (rwh) */
    unsigned int MCA_3_2: 1;                /** \brief [26:26] Activity of check performed in module MCS[3] at channel 2 (rwh) */
    unsigned int MCA_3_3: 1;                /** \brief [27:27] Activity of check performed in module MCS[3] at channel 3 (rwh) */
    unsigned int MCA_3_4: 1;                /** \brief [28:28] Activity of check performed in module MCS[3] at channel 4 (rwh) */
    unsigned int MCA_3_5: 1;                /** \brief [29:29] Activity of check performed in module MCS[3] at channel 5 (rwh) */
    unsigned int MCA_3_6: 1;                /** \brief [30:30] Activity of check performed in module MCS[3] at channel 6 (rwh) */
    unsigned int MCA_3_7: 1;                /** \brief [31:31] Activity of check performed in module MCS[3] at channel 7 (rwh) */
} Ifx_GTM_MON_ACTIVITY_0_Bits;

/** Monitor Status Register */
typedef struct
{
    unsigned int ACT_CMU0: 1;               /** \brief [0:0] CMU_CLK0 activity (rwh) */
    unsigned int ACT_CMU1: 1;               /** \brief [1:1] CMU_CLK1 activity (rwh) */
    unsigned int ACT_CMU2: 1;               /** \brief [2:2] CMU_CLK2 activity (rwh) */
    unsigned int ACT_CMU3: 1;               /** \brief [3:3] CMU_CLK3 activity (rwh) */
    unsigned int ACT_CMU4: 1;               /** \brief [4:4] CMU_CLK4 activity (rwh) */
    unsigned int ACT_CMU5: 1;               /** \brief [5:5] CMU_CLK5 activity (rwh) */
    unsigned int ACT_CMU6: 1;               /** \brief [6:6] CMU_CLK6 activity (rwh) */
    unsigned int ACT_CMU7: 1;               /** \brief [7:7] CMU_CLK7 activity (rwh) */
    unsigned int ACT_CMUFX0: 1;             /** \brief [8:8] CMU_CLKFX0 activity (rwh) */
    unsigned int ACT_CMUFX1: 1;             /** \brief [9:9] CMU_CLKFX1 activity (rwh) */
    unsigned int ACT_CMUFX2: 1;             /** \brief [10:10] CMU_CLKFX2 activity (rwh) */
    unsigned int ACT_CMUFX3: 1;             /** \brief [11:11] CMU_CLKFX3 activity (rwh) */
    unsigned int ACT_CMUFX4: 1;             /** \brief [12:12] CMU_CLKFX4 activity (rwh) */
    unsigned int reserved_13: 3;
    unsigned int CMP_ERR: 1;                /** \brief [16:16] Error detected at CMP (r) */
    unsigned int reserved_17: 3;
    unsigned int MCS0_ERR: 1;               /** \brief [20:20] Error detected at MCS[0] (r) */
    unsigned int MCS1_ERR: 1;               /** \brief [21:21] Error detected at MCS[1] (r) */
    unsigned int MCS2_ERR: 1;               /** \brief [22:22] Error detected at MCS[2] (r) */
    unsigned int MCS3_ERR: 1;               /** \brief [23:23] Error detected at MCS[3] (r) */
    unsigned int reserved_24: 8;
} Ifx_GTM_MON_STATUS_Bits;

/** MSC Input High Control Register */
typedef struct
{
    unsigned int SEL0: 2;                   /** \brief [1:0]  (rw) */
    unsigned int SEL1: 2;                   /** \brief [3:2]  (rw) */
    unsigned int SEL2: 2;                   /** \brief [5:4]  (rw) */
    unsigned int SEL3: 2;                   /** \brief [7:6]  (rw) */
    unsigned int SEL4: 2;                   /** \brief [9:8]  (rw) */
    unsigned int SEL5: 2;                   /** \brief [11:10]  (rw) */
    unsigned int SEL6: 2;                   /** \brief [13:12]  (rw) */
    unsigned int SEL7: 2;                   /** \brief [15:14]  (rw) */
    unsigned int SEL8: 2;                   /** \brief [17:16]  (rw) */
    unsigned int SEL9: 2;                   /** \brief [19:18]  (rw) */
    unsigned int SEL10: 2;                  /** \brief [21:20]  (rw) */
    unsigned int SEL11: 2;                  /** \brief [23:22]  (rw) */
    unsigned int SEL12: 2;                  /** \brief [25:24]  (rw) */
    unsigned int SEL13: 2;                  /** \brief [27:26]  (rw) */
    unsigned int SEL14: 2;                  /** \brief [29:28]  (rw) */
    unsigned int SEL15: 2;                  /** \brief [31:30]  (rw) */
} Ifx_GTM_MSCIN_INHCON_Bits;

/** MSC Input Low Control Register */
typedef struct
{
    unsigned int SEL0: 2;                   /** \brief [1:0]  (rw) */
    unsigned int SEL1: 2;                   /** \brief [3:2]  (rw) */
    unsigned int SEL2: 2;                   /** \brief [5:4]  (rw) */
    unsigned int SEL3: 2;                   /** \brief [7:6]  (rw) */
    unsigned int SEL4: 2;                   /** \brief [9:8]  (rw) */
    unsigned int SEL5: 2;                   /** \brief [11:10]  (rw) */
    unsigned int SEL6: 2;                   /** \brief [13:12]  (rw) */
    unsigned int SEL7: 2;                   /** \brief [15:14]  (rw) */
    unsigned int SEL8: 2;                   /** \brief [17:16]  (rw) */
    unsigned int SEL9: 2;                   /** \brief [19:18]  (rw) */
    unsigned int SEL10: 2;                  /** \brief [21:20]  (rw) */
    unsigned int SEL11: 2;                  /** \brief [23:22]  (rw) */
    unsigned int SEL12: 2;                  /** \brief [25:24]  (rw) */
    unsigned int SEL13: 2;                  /** \brief [27:26]  (rw) */
    unsigned int SEL14: 2;                  /** \brief [29:28]  (rw) */
    unsigned int SEL15: 2;                  /** \brief [31:30]  (rw) */
} Ifx_GTM_MSCIN_INLCON_Bits;

/** MSC Set Control 0 Register */
typedef struct
{
    unsigned int SEL0: 5;                   /** \brief [4:0]  (rw) */
    unsigned int reserved_5: 3;
    unsigned int SEL1: 5;                   /** \brief [12:8]  (rw) */
    unsigned int reserved_13: 3;
    unsigned int SEL2: 5;                   /** \brief [20:16]  (rw) */
    unsigned int reserved_21: 3;
    unsigned int SEL3: 5;                   /** \brief [28:24]  (rw) */
    unsigned int reserved_29: 3;
} Ifx_GTM_MSCSET_CON0_Bits;

/** MSC Set Control 1 Register */
typedef struct
{
    unsigned int SEL4: 5;                   /** \brief [4:0]  (rw) */
    unsigned int reserved_5: 3;
    unsigned int SEL5: 5;                   /** \brief [12:8]  (rw) */
    unsigned int reserved_13: 3;
    unsigned int SEL6: 5;                   /** \brief [20:16]  (rw) */
    unsigned int reserved_21: 3;
    unsigned int SEL7: 5;                   /** \brief [28:24]  (rw) */
    unsigned int reserved_29: 3;
} Ifx_GTM_MSCSET_CON1_Bits;

/** MSC Set Control 2 Register */
typedef struct
{
    unsigned int SEL8: 5;                   /** \brief [4:0]  (rw) */
    unsigned int reserved_5: 3;
    unsigned int SEL9: 5;                   /** \brief [12:8]  (rw) */
    unsigned int reserved_13: 3;
    unsigned int SEL10: 5;                  /** \brief [20:16]  (rw) */
    unsigned int reserved_21: 3;
    unsigned int SEL11: 5;                  /** \brief [28:24]  (rw) */
    unsigned int reserved_29: 3;
} Ifx_GTM_MSCSET_CON2_Bits;

/** MSC Set Control 3 Register */
typedef struct
{
    unsigned int SEL12: 5;                  /** \brief [4:0]  (rw) */
    unsigned int reserved_5: 3;
    unsigned int SEL13: 5;                  /** \brief [12:8]  (rw) */
    unsigned int reserved_13: 3;
    unsigned int SEL14: 5;                  /** \brief [20:16]  (rw) */
    unsigned int reserved_21: 3;
    unsigned int SEL15: 5;                  /** \brief [28:24]  (rw) */
    unsigned int reserved_29: 3;
} Ifx_GTM_MSCSET_CON3_Bits;

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
} Ifx_GTM_OCS_Bits;

/** OCDS Debug Access Register */
typedef struct
{
    unsigned int DDREN: 1;                  /** \brief [0:0] Trigger Set for OTGB0 (rw) */
    unsigned int reserved_1: 31;
} Ifx_GTM_ODA_Bits;

/** OCDS Trigger Set Control 0 Register */
typedef struct
{
    unsigned int B0LMT: 3;                  /** \brief [2:0] OTGB0 TS16_IOS Low Byte Module Type (rw) */
    unsigned int reserved_3: 1;
    unsigned int B0LMI: 4;                  /** \brief [7:4] OTGB0 TS16_IOS Low Byte Module Instance (rw) */
    unsigned int B0HMT: 3;                  /** \brief [10:8] OTGB0 TS16_IOS High Byte Module Type (rw) */
    unsigned int reserved_11: 1;
    unsigned int B0HMI: 4;                  /** \brief [15:12] OTGB0 TS16_IOS High Byte Module Instance (rw) */
    unsigned int B1LMT: 3;                  /** \brief [18:16] OTGB1 TS16_IOS Low Byte Module Type (rw) */
    unsigned int reserved_19: 1;
    unsigned int B1LMI: 4;                  /** \brief [23:20] OTGB1 TS16_IOS Low Byte Module Instance (rw) */
    unsigned int B1HMT: 3;                  /** \brief [26:24] OTGB1 TS16_IOS High Byte Module Type (rw) */
    unsigned int reserved_27: 1;
    unsigned int B1HMI: 4;                  /** \brief [31:28] OTGB1 TS16_IOS High Byte Module Instance (rw) */
} Ifx_GTM_OTSC0_Bits;

/** OCDS Trigger Set Control 1 Register */
typedef struct
{
    unsigned int MCS: 4;                    /** \brief [3:0] MCS Channel Select (rw) */
    unsigned int MI: 4;                     /** \brief [7:4] MCS Instance (rw) */
    unsigned int MCE: 1;                    /** \brief [8:8] MCS CPU (AEI) Accesses Trace Enable (rw) */
    unsigned int MOE: 1;                    /** \brief [9:9] MCS Opcode Trace Enable (rw) */
    unsigned int reserved_10: 22;
} Ifx_GTM_OTSC1_Bits;

/** OCDS Trigger Set Select Register */
typedef struct
{
    unsigned int OTGB0: 4;                  /** \brief [3:0] Trigger Set for OTGB0 (rw) */
    unsigned int reserved_4: 4;
    unsigned int OTGB1: 4;                  /** \brief [11:8] Trigger Set for OTGB1 (rw) */
    unsigned int reserved_12: 4;
    unsigned int OTGB2: 4;                  /** \brief [19:16] Trigger Set for OTGB2 (rw) */
    unsigned int reserved_20: 12;
} Ifx_GTM_OTSS_Bits;

/** PSI5 Output Select 0 Register */
typedef struct
{
    unsigned int SEL0: 4;                   /** \brief [3:0] Output Selection for PSI5x GTM connection (rw) */
    unsigned int SEL1: 4;                   /** \brief [7:4] Output Selection for PSI5x GTM connection (rw) */
    unsigned int SEL2: 4;                   /** \brief [11:8] Output Selection for PSI5x GTM connection (rw) */
    unsigned int SEL3: 4;                   /** \brief [15:12] Output Selection for PSI5x GTM connection (rw) */
    unsigned int SEL4: 4;                   /** \brief [19:16] Output Selection for PSI5x GTM connection (rw) */
    unsigned int SEL5: 4;                   /** \brief [23:20] Output Selection for PSI5x GTM connection (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_PSI5OUTSEL0_Bits;

/** AFD0 FIFO0 Channel Buffer Access Register */
typedef struct
{
    unsigned int DATA: 29;                  /** \brief [28:0] Read/write data from/to FIFO (rw) */
    unsigned int reserved_29: 3;
} Ifx_GTM_PSM_AFD0_CH_BUF_BUF_ACC_Bits;

/** F2A Read Channel Address Register */
typedef struct
{
    unsigned int ADDR: 9;                   /** \brief [8:0] ARU Read address (rw) */
    unsigned int reserved_9: 23;
} Ifx_GTM_PSM_F2A0_CH_ARU_RD_FIFO_Bits;

/** F2A Stream Configuration Register */
typedef struct
{
    unsigned int reserved_0: 16;
    unsigned int TMODE: 2;                  /** \brief [17:16] Transfer mode for 53 bit ARU data from/to FIFO (rw) */
    unsigned int DIR: 1;                    /** \brief [18:18] Data transfer direction (rw) */
    unsigned int reserved_19: 13;
} Ifx_GTM_PSM_F2A0_CH_STR_CFG_Bits;

/** F2A0 Stream Activation Register */
typedef struct
{
    unsigned int STR0_EN: 2;                /** \brief [1:0] Enable/disable stream 0 (rw) */
    unsigned int STR1_EN: 2;                /** \brief [3:2] Enable/disable stream 1 (rw) */
    unsigned int STR2_EN: 2;                /** \brief [5:4] Enable/disable stream 2 (rw) */
    unsigned int STR3_EN: 2;                /** \brief [7:6] Enable/disable stream 3 (rw) */
    unsigned int STR4_EN: 2;                /** \brief [9:8] Enable/disable stream 4 (rw) */
    unsigned int STR5_EN: 2;                /** \brief [11:10] Enable/disable stream 5 (rw) */
    unsigned int STR6_EN: 2;                /** \brief [13:12] Enable/disable stream 6 (rw) */
    unsigned int STR7_EN: 2;                /** \brief [15:14] Enable/disable stream 7 (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_PSM_F2A0_ENABLE_Bits;

/** FIFO0 Channel Control Register */
typedef struct
{
    unsigned int RBM: 1;                    /** \brief [0:0] Ring buffer mode enable (rw) */
    unsigned int RAP: 1;                    /** \brief [1:1] RAM access priority (rw) */
    unsigned int FLUSH: 1;                  /** \brief [2:2] FIFO Flush control (w) */
    unsigned int WULOCK: 1;                 /** \brief [3:3] RAM write unlock Enable/disable direct RAM write access to the memory mapped FIFO region (rw) */
    unsigned int reserved_4: 28;
} Ifx_GTM_PSM_FIFO0_CH_CTRL_Bits;

/** FIFO0 Channel End Address Register */
typedef struct
{
    unsigned int ADDR: 10;                  /** \brief [9:0] End address for FIFO channel x, (x07) (rw) */
    unsigned int reserved_10: 22;
} Ifx_GTM_PSM_FIFO0_CH_END_ADDR_Bits;

/** FIFO0 Channel Fill Level Register */
typedef struct
{
    unsigned int LEVEL: 11;                 /** \brief [10:0] Fill level of the current FIFO (r) */
    unsigned int reserved_11: 21;
} Ifx_GTM_PSM_FIFO0_CH_FILL_LEVEL_Bits;

/** FIFO0 FIFO0 FIFO0 Interrupt Enable Register */
typedef struct
{
    unsigned int FIFO_EMPTY_IRQ_EN: 1;      /** \brief [0:0] interrupt enable (rw) */
    unsigned int FIFO_FULL_IRQ_EN: 1;       /** \brief [1:1] interrupt enable (rw) */
    unsigned int FIFO_LWM_IRQ_EN: 1;        /** \brief [2:2] interrupt enable (rw) */
    unsigned int FIFO_UWM_IRQ_EN: 1;        /** \brief [3:3] interrupt enable (rw) */
    unsigned int reserved_4: 28;
} Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_EN_Bits;

/** FIFO0 Channel Force Interrupt By Software Register */
typedef struct
{
    unsigned int TRG_FIFO_EMPTY: 1;         /** \brief [0:0] Force interrupt of FIFO empty status (w) */
    unsigned int TRG_FIFO_FULL: 1;          /** \brief [1:1] Force interrupt of FIFO full status (w) */
    unsigned int TRG_FIFO_LWM: 1;           /** \brief [2:2] Force interrupt of lower watermark (w) */
    unsigned int TRG_FIFO_UWM: 1;           /** \brief [3:3] Force interrupt of upper watermark (w) */
    unsigned int reserved_4: 28;
} Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_FORCINT_Bits;

/** FIFO0 Channel IRQ Mode Control Register */
typedef struct
{
    unsigned int IRQ_MODE: 2;               /** \brief [1:0] IRQ mode selection (rw) */
    unsigned int DMA_HYSTERESIS: 1;         /** \brief [2:2] Enable DMA hysteresis mode (rw) */
    unsigned int DMA_HYST_DIR: 1;           /** \brief [3:3] DMA direction in hysteresis mode (rw) */
    unsigned int reserved_4: 28;
} Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_MODE_Bits;

/** FIFO0 Channel Interrupt Notification Register */
typedef struct
{
    unsigned int FIFO_EMPTY: 1;             /** \brief [0:0] FIFO is empty (rwh) */
    unsigned int FIFO_FULL: 1;              /** \brief [1:1] FIFO is full (rwh) */
    unsigned int FIFO_LWM: 1;               /** \brief [2:2] FIFO Lower watermark was under-run (rwh) */
    unsigned int FIFO_UWM: 1;               /** \brief [3:3] FIFO Upper watermark was over-run (rwh) */
    unsigned int reserved_4: 28;
} Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_NOTIFY_Bits;

/** FIFO0 Channel Lower Watermark Register */
typedef struct
{
    unsigned int ADDR: 10;                  /** \brief [9:0] Normal Operation mode Upper watermark Ring buffer operation mode Gate pointer from LWU to UWE (rw) */
    unsigned int reserved_10: 22;
} Ifx_GTM_PSM_FIFO0_CH_LOWER_WM_Bits;

/** FIFO0 Channel Read Pointer Register */
typedef struct
{
    unsigned int ADDR: 10;                  /** \brief [9:0] Position of the read pointer (r) */
    unsigned int reserved_10: 22;
} Ifx_GTM_PSM_FIFO0_CH_PTR_RD_PTR_Bits;

/** FIFO0 Channel Write Pointer Register */
typedef struct
{
    unsigned int ADDR: 10;                  /** \brief [9:0] Position of the write pointer (r) */
    unsigned int reserved_10: 22;
} Ifx_GTM_PSM_FIFO0_CH_PTR_WR_PTR_Bits;

/** FIFO0 Channel Start Address Register */
typedef struct
{
    unsigned int ADDR: 10;                  /** \brief [9:0] End address for FIFO channel x, (x07) (rw) */
    unsigned int Reserved: 22;              /** \brief [31:10] reserved (r) */
} Ifx_GTM_PSM_FIFO0_CH_START_ADDR_Bits;

/** FIFO0 Channel Status Register */
typedef struct
{
    unsigned int EMPTY: 1;                  /** \brief [0:0] FIFO x fill level status (x07) (r) */
    unsigned int FULL: 1;                   /** \brief [1:1] FIFO x fill level status (x07) (r) */
    unsigned int LOW_WM: 1;                 /** \brief [2:2] Lower watermark reached (r) */
    unsigned int UP_WM: 1;                  /** \brief [3:3] Upper watermark reached (r) */
    unsigned int reserved_4: 28;
} Ifx_GTM_PSM_FIFO0_CH_STATUS_Bits;

/** FIFO0 Channel Upper Watermark Register */
typedef struct
{
    unsigned int ADDR: 10;                  /** \brief [9:0] Normal Operation mode Upper watermark Ring buffer operation mode Gate pointer from SLW to LWU (rw) */
    unsigned int reserved_10: 22;
} Ifx_GTM_PSM_FIFO0_CH_UPPER_WM_Bits;

/** GTM Version Control Register */
typedef struct
{
    unsigned int YEAR: 8;                   /** \brief [7:0] GTM Year of development (r) */
    unsigned int NO: 4;                     /** \brief [11:8] Define delivery number (r) */
    unsigned int MINOR: 4;                  /** \brief [15:12] Define minor version number of implementation (r) */
    unsigned int MAJOR: 4;                  /** \brief [19:16] Define major version number of implementation (r) */
    unsigned int DEV_CODE0: 4;              /** \brief [23:20] Device encoding digit 0 (r) */
    unsigned int DEV_CODE1: 4;              /** \brief [27:24] Device encoding digit 1 (r) */
    unsigned int DEV_CODE2: 4;              /** \brief [31:28] Device encoding digit 2 (r) */
} Ifx_GTM_REV_Bits;

/** GTM Global Reset Register */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] GTM Reset (w) */
    unsigned int reserved_1: 31;
} Ifx_GTM_RST_Bits;

/** SPE Control Status Register */
typedef struct
{
    unsigned int SPE_EN: 1;                 /** \brief [0:0] SPE Submodule enable (rw) */
    unsigned int SIE0: 1;                   /** \brief [1:1] SPE Input enable for TIM_CHx(48) (rw) */
    unsigned int SIE1: 1;                   /** \brief [2:2] SPE Input enable for TIM_CHy(48) (rw) */
    unsigned int SIE2: 1;                   /** \brief [3:3] SPE Input enable for TIM_CHz(48) (rw) */
    unsigned int TRIG_SEL: 2;               /** \brief [5:4] Select trigger input signal (rw) */
    unsigned int TIM_SEL: 1;                /** \brief [6:6] select TIM input signal (rw) */
    unsigned int FSOM: 1;                   /** \brief [7:7] Fast Shut-Off Mode (rw) */
    unsigned int SPE_PAT_PTR: 3;            /** \brief [10:8] Pattern selector for TOM output signals (rw) */
    unsigned int reserved_11: 1;
    unsigned int AIP: 3;                    /** \brief [14:12] Actual input pattern that was detected by a regular input pattern change (rw) */
    unsigned int ADIR: 1;                   /** \brief [15:15] Actual rotation direction (rw) */
    unsigned int PIP: 3;                    /** \brief [18:16] Previous input pattern that was detected by a regular input pattern change (rw) */
    unsigned int PDIR: 1;                   /** \brief [19:19] Previous rotation direction (rw) */
    unsigned int NIP: 3;                    /** \brief [22:20] New input pattern that was detected (r) */
    unsigned int reserved_23: 1;
    unsigned int FSOL: 8;                   /** \brief [31:24] Fast Shut-Off Level for TOM[i] channel 0 to 7 (rw) */
} Ifx_GTM_SPE_CTRL_STAT_Bits;

/** SPE Interrupt Enable Register */
typedef struct
{
    unsigned int SPE_NIPD_IRQ_EN: 1;        /** \brief [0:0] SPE_NIPD_IRQ interrupt enable. (rw) */
    unsigned int SPE_DCHG_IRQ_EN: 1;        /** \brief [1:1] SPE_DCHG_IRQ interrupt enable. (rw) */
    unsigned int SPE_PERR_IRQ_EN: 1;        /** \brief [2:2] SPE_PERR_IRQ interrupt enable. (rw) */
    unsigned int SPE_BIS_IRQ_EN: 1;         /** \brief [3:3] SPE_BIS_IRQ interrupt enable. (rw) */
    unsigned int reserved_4: 28;
} Ifx_GTM_SPE_IRQ_EN_Bits;

/** SPE Interrupt Generation by Software */
typedef struct
{
    unsigned int TRG_SPE_NIPD: 1;           /** \brief [0:0] Force interrupt of SPE_NIPD. (w) */
    unsigned int TRG_SPE_DCHG: 1;           /** \brief [1:1] Force interrupt of SPE_DCHG. (w) */
    unsigned int TRG_SPE_PERR: 1;           /** \brief [2:2] Force interrupt of SPE_PERR. (w) */
    unsigned int TRG_SPE_BIS: 1;            /** \brief [3:3] Force interrupt of SPE_BIS. (w) */
    unsigned int reserved_4: 28;
} Ifx_GTM_SPE_IRQ_FORCINT_Bits;

/** SPE IRQ Mode Configuration Register */
typedef struct
{
    unsigned int IRQ_MODE: 2;               /** \brief [1:0] IRQ mode selection (rw) */
    unsigned int reserved_2: 30;
} Ifx_GTM_SPE_IRQ_MODE_Bits;

/** SPE Interrupt Notification Register */
typedef struct
{
    unsigned int SPE_NIPD: 1;               /** \brief [0:0] New input pattern interrupt occurred (rwh) */
    unsigned int SPE_DCHG: 1;               /** \brief [1:1] SPE_DIR bit changed on behalf of new input pattern (rwh) */
    unsigned int SPE_PERR: 1;               /** \brief [2:2] Wrong or invalid pattern detected at input (rwh) */
    unsigned int SPE_BIS: 1;                /** \brief [3:3] Bouncing input signal detected (rwh) */
    unsigned int reserved_4: 28;
} Ifx_GTM_SPE_IRQ_NOTIFY_Bits;

/** SPE Output Control Register */
typedef struct
{
    unsigned int SPE_OUT_CTRL: 16;          /** \brief [15:0] SPE output control value for TOM_CH0 to TOM_CH7 (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_SPE_OUT_CTRL_Bits;

/** SPE Output Definition Register r */
typedef struct
{
    unsigned int SPE_OUT_PAT: 16;           /** \brief [15:0] SPE output control value for TOM_CH0 to TOM_CH7 (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_SPE_OUT_PAT_Bits;

/** SPE Input Pattern Definition Register */
typedef struct
{
    unsigned int IP0_VAL: 1;                /** \brief [0:0] Input pattern 0 is a valid pattern (rw) */
    unsigned int IP0_PAT: 3;                /** \brief [3:1] Input pattern 0 (rw) */
    unsigned int IP1_VAL: 1;                /** \brief [4:4] Input pattern 1 is a valid pattern (rw) */
    unsigned int IP1_PAT: 3;                /** \brief [7:5] Input pattern 1 (rw) */
    unsigned int IP2_VAL: 1;                /** \brief [8:8] Input pattern 2 is a valid pattern (rw) */
    unsigned int IP2_PAT: 3;                /** \brief [11:9] Input pattern 2 (rw) */
    unsigned int IP3_VAL: 1;                /** \brief [12:12] Input pattern 3 is a valid pattern (rw) */
    unsigned int IP3_PAT: 3;                /** \brief [15:13] Input pattern 3 (rw) */
    unsigned int IP4_VAL: 1;                /** \brief [16:16] Input pattern 4 is a valid pattern (rw) */
    unsigned int IP4_PAT: 3;                /** \brief [19:17] Input pattern 4 (rw) */
    unsigned int IP5_VAL: 1;                /** \brief [20:20] Input pattern 5 is a valid pattern (rw) */
    unsigned int IP5_PAT: 3;                /** \brief [23:21] Input pattern 5 (rw) */
    unsigned int IP6_VAL: 1;                /** \brief [24:24] Input pattern 6 is a valid pattern (rw) */
    unsigned int IP6_PAT: 3;                /** \brief [27:25] Input pattern 6 (rw) */
    unsigned int IP7_VAL: 1;                /** \brief [28:28] Input pattern 7 is a valid pattern (rw) */
    unsigned int IP7_PAT: 3;                /** \brief [31:29] Input pattern 7 (rw) */
} Ifx_GTM_SPE_PAT_Bits;

/** TBU Channel 0 Base Register */
typedef struct
{
    unsigned int BASE: 27;                  /** \brief [26:0] Time base value for channel 0 (rw) */
    unsigned int reserved_27: 5;
} Ifx_GTM_TBU_CH0_BASE_Bits;

/** TBU Channel 0 Control Register */
typedef struct
{
    unsigned int LOW_RES: 1;                /** \brief [0:0] TBU_CH0_BASE register resolution (rw) */
    unsigned int CH_CLK_SRC: 3;             /** \brief [3:1] Clock source for channel x (x:0...2) time base counter (rw) */
    unsigned int reserved_4: 28;
} Ifx_GTM_TBU_CH0_CTRL_Bits;

/** TBU Channel 1 Base Register */
typedef struct
{
    unsigned int BASE: 24;                  /** \brief [23:0] Time base value for channel x (x 1, 2) (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_TBU_CH1_BASE_Bits;

/** TBU Channel 1 Control Register */
typedef struct
{
    unsigned int CH_MODE: 1;                /** \brief [0:0] Channel mode (rw) */
    unsigned int CH_CLK_SRC: 3;             /** \brief [3:1] Clock source for channel x (x02) time base counter (rw) */
    unsigned int reserved_4: 28;
} Ifx_GTM_TBU_CH1_CTRL_Bits;

/** TBU Channel 2 Base Register */
typedef struct
{
    unsigned int BASE: 24;                  /** \brief [23:0] Time base value for channel x (x 1, 2) (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_TBU_CH2_BASE_Bits;

/** TBU Channel 2 Control Register */
typedef struct
{
    unsigned int CH_MODE: 1;                /** \brief [0:0] Channel mode (rw) */
    unsigned int CH_CLK_SRC: 3;             /** \brief [3:1] Clock source for channel x (x02) time base counter (rw) */
    unsigned int reserved_4: 28;
} Ifx_GTM_TBU_CH2_CTRL_Bits;

/** TBU Global Channel Enable Register */
typedef struct
{
    unsigned int ENDIS_CH0: 2;              /** \brief [1:0] TBU channel 0 enable/disable control (rw) */
    unsigned int ENDIS_CH1: 2;              /** \brief [3:2] TBU channel 1 enable/disable control (rw) */
    unsigned int ENDIS_CH2: 2;              /** \brief [5:4] TBU channel 2 enable/disable control (rw) */
    unsigned int reserved_6: 26;
} Ifx_GTM_TBU_CHEN_Bits;

/** TIM Channel SMU Counter Register */
typedef struct
{
    unsigned int CNT: 24;                   /** \brief [23:0] Actual SMU counter value (r) */
    unsigned int reserved_24: 8;
} Ifx_GTM_TIM_CH_CNT_Bits;

/** TIM Channel SMU Shadow Counter Register */
typedef struct
{
    unsigned int CNTS: 24;                  /** \brief [23:0] Counter shadow register (rw) */
    unsigned int ECNT: 8;                   /** \brief [31:24] Edge counter (r) */
} Ifx_GTM_TIM_CH_CNTS_Bits;

/** TIM Channel Control Register */
typedef struct
{
    unsigned int TIM_EN: 1;                 /** \brief [0:0] TIM channel x (x:0..7) enable (rwh) */
    unsigned int TIM_MODE: 3;               /** \brief [3:1] TIM channel x (x:0..7) mode (rw) */
    unsigned int OSM: 1;                    /** \brief [4:4] One-shot mode (rw) */
    unsigned int ARU_EN: 1;                 /** \brief [5:5] GPR0 and GPR1 register values routed to ARU (rw) */
    unsigned int CICTRL: 1;                 /** \brief [6:6] Channel Input Control (rw) */
    unsigned int TBU0x_SEL: 1;              /** \brief [7:7] TBU_TS0x bits input select for TIM_CH[x]_GPRx (x: 0, 1) (rw) */
    unsigned int GPR0_SEL: 2;               /** \brief [9:8] Selection for GPR0 register (rw) */
    unsigned int GPR1_SEL: 2;               /** \brief [11:10] Selection for GPR1 register (rw) */
    unsigned int CNTS_SEL: 1;               /** \brief [12:12] Selection for CNTS register (rw) */
    unsigned int DSL: 1;                    /** \brief [13:13] Signal level control (rw) */
    unsigned int ISL: 1;                    /** \brief [14:14] Ignore signal level (rw) */
    unsigned int reserved_15: 1;
    unsigned int FLT_EN: 1;                 /** \brief [16:16] Filter enable for channel x (x:0..7) (rw) */
    unsigned int FLT_CNT_FRQ: 2;            /** \brief [18:17] Filter counter frequency select (rw) */
    unsigned int reserved_19: 1;
    unsigned int FLT_MODE_RE: 1;            /** \brief [20:20] Filter mode for rising edge (rw) */
    unsigned int FLT_CTR_RE: 1;             /** \brief [21:21] Filter counter mode for rising edge (rw) */
    unsigned int FLT_MODE_FE: 1;            /** \brief [22:22] Filter mode for falling edge (rw) */
    unsigned int FLT_CTR_FE: 1;             /** \brief [23:23] Filter counter mode for falling edge (rw) */
    unsigned int CLK_SEL: 3;                /** \brief [26:24] CMU clock source select for channel (rw) */
    unsigned int reserved_27: 5;
} Ifx_GTM_TIM_CH_CTRL_Bits;

/** TIM Channel Filter Parameter 1 Register */
typedef struct
{
    unsigned int FLT_FE: 24;                /** \brief [23:0] Filter parameter for falling edge (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_TIM_CH_FLT_FE_Bits;

/** GTM_TIM Channel Filter Parameter 0 Register */
typedef struct
{
    unsigned int FLT_RE: 24;                /** \brief [23:0] Filter parameter for rising edge (rw) */
    unsigned int reserved_24: 8;
} Ifx_GTM_TIM_CH_FLT_RE_Bits;

/** TIM Channel General Purpose 0 Register */
typedef struct
{
    unsigned int GPR0: 24;                  /** \brief [23:0] Input signal characteristic parameter 0 (r) */
    unsigned int ECNT: 8;                   /** \brief [31:24] Edge counter (r) */
} Ifx_GTM_TIM_CH_GPR0_Bits;

/** TIM Channel General Purpose 1 Register */
typedef struct
{
    unsigned int GPR1: 24;                  /** \brief [23:0] Input signal characteristic parameter 1 (r) */
    unsigned int ECNT: 8;                   /** \brief [31:24] Edge counter (r) */
} Ifx_GTM_TIM_CH_GPR1_Bits;

/** TIM Channel Interrupt Enable Register */
typedef struct
{
    unsigned int NEWVAL_IRQ_EN: 1;          /** \brief [0:0] TIM_NEWVALx_IRQ interrupt enable (rw) */
    unsigned int ECNTOFL_IRQ_EN: 1;         /** \brief [1:1] TIM_ECNTOFLx_IRQ interrupt enable (rw) */
    unsigned int CNTOFL_IRQ_EN: 1;          /** \brief [2:2] TIM_CNTOFLx_IRQ interrupt enable (rw) */
    unsigned int GPRxOFL_IRQ_EN: 1;         /** \brief [3:3] TIM_GPRxOFLx_IRQ interrupt enable (rw) */
    unsigned int TODET_IRQ_EN: 1;           /** \brief [4:4] TIM_TODETx_IRQ interrupt enable (rw) */
    unsigned int GLITCHDET_IRQ_EN: 1;       /** \brief [5:5] TIM_GLITCHDETx_IRQ interrupt enable (rw) */
    unsigned int reserved_6: 26;
} Ifx_GTM_TIM_CH_IRQ_EN_Bits;

/** TIM Channel Software Interrupt Force Register */
typedef struct
{
    unsigned int TRG_NEWVAL: 1;             /** \brief [0:0] Trigger NEWVAL bit in TIM_CHx_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_ECNTOFL: 1;            /** \brief [1:1] Trigger ECNTOFL bit in TIM_CHx_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_CNTOFL: 1;             /** \brief [2:2] Trigger CNTOFL bit in TIM_CHx_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_GPRxOFL: 1;            /** \brief [3:3] Trigger GPRXOFL bit in TIM_CHx_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_TODET: 1;              /** \brief [4:4] Trigger TODET bit in TIM_CHx_IRQ_NOTIFY register by software (w) */
    unsigned int TRG_GLITCHDET: 1;          /** \brief [5:5] Trigger GLITCHDET bit in TIM_CHx_IRQ_NOTIFY register by software (w) */
    unsigned int reserved_6: 26;
} Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits;

/** TIM IRQ Mode Configuration Register */
typedef struct
{
    unsigned int IRQ_MODE: 2;               /** \brief [1:0] IRQ mode selection (rw) */
    unsigned int reserved_2: 30;
} Ifx_GTM_TIM_CH_IRQ_MODE_Bits;

/** TIM Channel Interrupt Notification Register */
typedef struct
{
    unsigned int NEWVAL: 1;                 /** \brief [0:0] New measurement value detected by in channel x (x:0..7) (rwh) */
    unsigned int ECNTOFL: 1;                /** \brief [1:1] counter overflow of channel x, (x:0..7) (rwh) */
    unsigned int CNTOFL: 1;                 /** \brief [2:2] SMU CNT counter overflow of channel x, (x:0...7) (rwh) */
    unsigned int GPRxOFL: 1;                /** \brief [3:3] data overflow, old data not read out before new data has arrived at input pin, (x:0..7) (rwh) */
    unsigned int TODET: 1;                  /** \brief [4:4] Timeout reached for input signal of channel x, (x:0..7) (rwh) */
    unsigned int GLITCHDET: 1;              /** \brief [5:5] Glitch detected on channel x, (x:0..7) (rwh) */
    unsigned int reserved_6: 26;
} Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits;

/** TIM Channel TDU Control Register */
typedef struct
{
    unsigned int TO_EN: 1;                  /** \brief [0:0] Timeout detection unit enable (rw) */
    unsigned int TCS: 3;                    /** \brief [3:1] Timeout Clock selection (rw) */
    unsigned int reserved_4: 4;
    unsigned int TOV: 8;                    /** \brief [15:8] Time out duration for channel x (x:0..7) (rw) */
    unsigned int TO_CNT: 8;                 /** \brief [23:16] Current Timeout value for channel x (x:0..7) (r) */
    unsigned int reserved_24: 8;
} Ifx_GTM_TIM_CH_TDU_Bits;

/** TIM Global Software Reset Register */
typedef struct
{
    unsigned int RST_CH0: 1;                /** \brief [0:0] Software reset of channel 0 (w) */
    unsigned int RST_CH1: 1;                /** \brief [1:1] Software reset of channel 1 (w) */
    unsigned int RST_CH2: 1;                /** \brief [2:2] Software reset of channel 2 (w) */
    unsigned int RST_CH3: 1;                /** \brief [3:3] Software reset of channel 3 (w) */
    unsigned int RST_CH4: 1;                /** \brief [4:4] Software reset of channel 4 (w) */
    unsigned int RST_CH5: 1;                /** \brief [5:5] Software reset of channel 5 (w) */
    unsigned int RST_CH6: 1;                /** \brief [6:6] Software reset of channel 6 (w) */
    unsigned int RST_CH7: 1;                /** \brief [7:7] Software reset of channel 7 (w) */
    unsigned int reserved_8: 24;
} Ifx_GTM_TIM_RST_Bits;

/** TIM  Input Select Register */
typedef struct
{
    unsigned int CH0SEL: 4;                 /** \brief [3:0] TIM Channel x Input Selection (rw) */
    unsigned int CH1SEL: 4;                 /** \brief [7:4] TIM Channel x Input Selection (rw) */
    unsigned int CH2SEL: 4;                 /** \brief [11:8] TIM Channel x Input Selection (rw) */
    unsigned int CH3SEL: 4;                 /** \brief [15:12] TIM Channel x Input Selection (rw) */
    unsigned int CH4SEL: 4;                 /** \brief [19:16] TIM Channel x Input Selection (rw) */
    unsigned int CH5SEL: 4;                 /** \brief [23:20] TIM Channel x Input Selection (rw) */
    unsigned int CH6SEL: 4;                 /** \brief [27:24] TIM Channel x Input Selection (rw) */
    unsigned int CH7SEL: 4;                 /** \brief [31:28] TIM Channel x Input Selection (rw) */
} Ifx_GTM_TIMINSEL_Bits;

/** TOM Channel CCU0 Compare Register */
typedef struct
{
    unsigned int CM0: 16;                   /** \brief [15:0] TOM CCU0 compare register (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_TOM_CH15_CM0_Bits;

/** TOM Channel CCU1 Compare Register */
typedef struct
{
    unsigned int CM1: 16;                   /** \brief [15:0] TOM CCU1 compare register (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_TOM_CH15_CM1_Bits;

/** TOM Channel CCU0 Counter Register */
typedef struct
{
    unsigned int CN0: 16;                   /** \brief [15:0] TOM CCU0 counter register (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_TOM_CH15_CN0_Bits;

/** TOM Channel Control Register */
typedef struct
{
    unsigned int reserved_0: 11;
    unsigned int SL: 1;                     /** \brief [11:11] Signal level for duty cycle (rw) */
    unsigned int CLK_SRC_SR: 3;             /** \brief [14:12] Clock source select for channel (rw) */
    unsigned int reserved_15: 5;
    unsigned int RST_CCU0: 1;               /** \brief [20:20] Reset source of CCU0 (rw) */
    unsigned int reserved_21: 3;
    unsigned int TRIGOUT: 1;                /** \brief [24:24] Trigger output selection (output signal TRIG_15) of module TOM_CH15 (rw) */
    unsigned int reserved_25: 1;
    unsigned int OSM: 1;                    /** \brief [26:26] One-shot mode (rw) */
    unsigned int BITREV: 1;                 /** \brief [27:27] Bit-reversing of output of counter register CN0 (rw) */
    unsigned int reserved_28: 4;
} Ifx_GTM_TOM_CH15_CTRL_Bits;

/** TOM Channel Interrupt Enable Register */
typedef struct
{
    unsigned int CCU0TC_IRQ_EN: 1;          /** \brief [0:0] TOM_CCU0TC_IRQ interrupt enable (rw) */
    unsigned int CCU1TC_IRQ_EN: 1;          /** \brief [1:1] TOM_CCU1TC_IRQ interrupt enable (rw) */
    unsigned int reserved_2: 30;
} Ifx_GTM_TOM_CH15_IRQ_EN_Bits;

/** TOM Channel Software Interrupt Generation Register */
typedef struct
{
    unsigned int TRG_CCU0TC0: 1;            /** \brief [0:0] Trigger TOM_CCU0TC0_IRQ interrupt by software (w) */
    unsigned int TRG_CCU1TC0: 1;            /** \brief [1:1] Trigger TOM_CCU1TC0_IRQ interrupt by software (w) */
    unsigned int reserved_2: 30;
} Ifx_GTM_TOM_CH15_IRQ_FORCINT_Bits;

/** TOM IRQ Mode Configuration Register */
typedef struct
{
    unsigned int IRQ_MODE: 2;               /** \brief [1:0] IRQ mode selection (rw) */
    unsigned int reserved_2: 30;
} Ifx_GTM_TOM_CH15_IRQ_MODE_Bits;

/** TOM Channel Interrupt Notification Register */
typedef struct
{
    unsigned int CCU0TC: 1;                 /** \brief [0:0] CCU0 Trigger condition interrupt for channel x (rwh) */
    unsigned int CCU1TC: 1;                 /** \brief [1:1] CCU1 Trigger condition interrupt for channel x (rwh) */
    unsigned int reserved_2: 30;
} Ifx_GTM_TOM_CH15_IRQ_NOTIFY_Bits;

/** TOM Channel CCU0 Compare Shadow Register */
typedef struct
{
    unsigned int SR0: 16;                   /** \brief [15:0] TOM channel x shadow register SR0 for update of compare register CM0 (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_TOM_CH15_SR0_Bits;

/** TOM Channel CCU1 Compare Shadow Register */
typedef struct
{
    unsigned int SR1: 16;                   /** \brief [15:0] TOM channel x shadow register SR1 for update of compare register CM1 (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_TOM_CH15_SR1_Bits;

/** TOM Channel Status Register */
typedef struct
{
    unsigned int OL: 1;                     /** \brief [0:0] Output level of output TOM_OUT(x) (r) */
    unsigned int reserved_1: 31;
} Ifx_GTM_TOM_CH15_STAT_Bits;

/** TOM Channel CCU0 Compare Register */
typedef struct
{
    unsigned int CM0: 16;                   /** \brief [15:0] TOM CCU0 compare register (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_TOM_CH_CM0_Bits;

/** TOM Channel CCU1 Compare Register */
typedef struct
{
    unsigned int CM1: 16;                   /** \brief [15:0] TOM CCU1 compare register (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_TOM_CH_CM1_Bits;

/** TOM Channel CCU0 Counter Register */
typedef struct
{
    unsigned int CN0: 16;                   /** \brief [15:0] TOM CCU0 counter register (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_TOM_CH_CN0_Bits;

/** TOM Channel Control Register’ */
typedef struct
{
    unsigned int reserved_0: 11;
    unsigned int SL: 1;                     /** \brief [11:11] Signal level for duty cycle (rw) */
    unsigned int CLK_SRC_SR: 3;             /** \brief [14:12] Clock source select for channel (rw) */
    unsigned int reserved_15: 5;
    unsigned int RST_CCU0: 1;               /** \brief [20:20] Reset source of CCU0 (rw) */
    unsigned int reserved_21: 3;
    unsigned int TRIGOUT: 1;                /** \brief [24:24] Trigger output selection (output signal TRIG_[x]) of module TOM_CH[x] (rw) */
    unsigned int reserved_25: 1;
    unsigned int OSM: 1;                    /** \brief [26:26] One-shot mode (rw) */
    unsigned int reserved_27: 1;
    unsigned int SPEM: 1;                   /** \brief [28:28] SPE mode enable for channel (rw) */
    unsigned int GCM: 1;                    /** \brief [29:29] Gated Counter Mode enable (rw) */
    unsigned int reserved_30: 2;
} Ifx_GTM_TOM_CH_CTRL_Bits;

/** TOM Channel Interrupt Enable Register */
typedef struct
{
    unsigned int CCU0TC_IRQ_EN: 1;          /** \brief [0:0] TOM_CCU0TC_IRQ interrupt enable (rw) */
    unsigned int CCU1TC_IRQ_EN: 1;          /** \brief [1:1] TOM_CCU1TC_IRQ interrupt enable (rw) */
    unsigned int reserved_2: 30;
} Ifx_GTM_TOM_CH_IRQ_EN_Bits;

/** TOM Channel Software Interrupt Generation Register */
typedef struct
{
    unsigned int TRG_CCU0TC0: 1;            /** \brief [0:0] Trigger TOM_CCU0TC0_IRQ interrupt by software (w) */
    unsigned int TRG_CCU1TC0: 1;            /** \brief [1:1] Trigger TOM_CCU1TC0_IRQ interrupt by software (w) */
    unsigned int reserved_2: 30;
} Ifx_GTM_TOM_CH_IRQ_FORCINT_Bits;

/** TOM IRQ Mode Configuration Register */
typedef struct
{
    unsigned int IRQ_MODE: 2;               /** \brief [1:0] IRQ mode selection (rw) */
    unsigned int reserved_2: 30;
} Ifx_GTM_TOM_CH_IRQ_MODE_Bits;

/** TOM Channel Interrupt Notification Register */
typedef struct
{
    unsigned int CCU0TC: 1;                 /** \brief [0:0] CCU0 Trigger condition interrupt for channel x (rwh) */
    unsigned int CCU1TC: 1;                 /** \brief [1:1] CCU1 Trigger condition interrupt for channel x (rwh) */
    unsigned int reserved_2: 30;
} Ifx_GTM_TOM_CH_IRQ_NOTIFY_Bits;

/** TOM Channel CCU0 Compare Shadow Register */
typedef struct
{
    unsigned int SR0: 16;                   /** \brief [15:0] TOM channel x shadow register SR0 for update of compare register CM0 (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_TOM_CH_SR0_Bits;

/** TOM Channel CCU1 Compare Shadow Register */
typedef struct
{
    unsigned int SR1: 16;                   /** \brief [15:0] TOM channel x shadow register SR1 for update of compare register CM1 (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_TOM_CH_SR1_Bits;

/** TOM Channel Status Register */
typedef struct
{
    unsigned int OL: 1;                     /** \brief [0:0] Output level of output TOM_OUT(x) (r) */
    unsigned int reserved_1: 31;
} Ifx_GTM_TOM_CH_STAT_Bits;

/** TOM TGC Action Time Base Register */
typedef struct
{
    unsigned int TB_VAL: 24;                /** \brief [23:0] Time base value (rw) */
    unsigned int TB_TRIG: 1;                /** \brief [24:24] Set trigger request (rwh) */
    unsigned int TBU_SEL: 2;                /** \brief [26:25] Selection of time base used for comparison (rw) */
    unsigned int reserved_27: 5;
} Ifx_GTM_TOM_TGC_ACT_TB_Bits;

/** TOM TGC Enable/Disable Control Register */
typedef struct
{
    unsigned int ENDIS_CTRL0: 2;            /** \brief [1:0] (A)TOM channel 0 enable/disable update value (rw) */
    unsigned int ENDIS_CTRL1: 2;            /** \brief [3:2] (A)TOM channel 1 enable/disable update value (rw) */
    unsigned int ENDIS_CTRL2: 2;            /** \brief [5:4] (A)TOM channel 2 enable/disable update value (rw) */
    unsigned int ENDIS_CTRL3: 2;            /** \brief [7:6] (A)TOM channel 3 enable/disable update value (rw) */
    unsigned int ENDIS_CTRL4: 2;            /** \brief [9:8] (A)TOM channel 4 enable/disable update value (rw) */
    unsigned int ENDIS_CTRL5: 2;            /** \brief [11:10] (A)TOM channel 5 enable/disable update value (rw) */
    unsigned int ENDIS_CTRL6: 2;            /** \brief [13:12] (A)TOM channel 6 enable/disable update value (rw) */
    unsigned int ENDIS_CTRL7: 2;            /** \brief [15:14] (A)TOM channel 7 enable/disable update value (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits;

/** TOM TGC Enable/Disable Status Register */
typedef struct
{
    unsigned int ENDIS_STAT0: 2;            /** \brief [1:0] (A)TOM channel 0 enable/disable (rw) */
    unsigned int ENDIS_STAT1: 2;            /** \brief [3:2] (A)TOM channel 1 enable/disable (rw) */
    unsigned int ENDIS_STAT2: 2;            /** \brief [5:4] (A)TOM channel 2 enable/disable (rw) */
    unsigned int ENDIS_STAT3: 2;            /** \brief [7:6] (A)TOM channel 3 enable/disable (rw) */
    unsigned int ENDIS_STAT4: 2;            /** \brief [9:8] (A)TOM channel 4 enable/disable (rw) */
    unsigned int ENDIS_STAT5: 2;            /** \brief [11:10] (A)TOM channel 5 enable/disable (rw) */
    unsigned int ENDIS_STAT6: 2;            /** \brief [13:12] (A)TOM channel 6 enable/disable (rw) */
    unsigned int ENDIS_STAT7: 2;            /** \brief [15:14] (A)TOM channel 7 enable/disable (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits;

/** TOM TGC Force Update Control Register */
typedef struct
{
    unsigned int FUPD_CTRL0: 2;             /** \brief [1:0] Force update of (A)TOM channel 0 operation registers (rw) */
    unsigned int FUPD_CTRL1: 2;             /** \brief [3:2] Force update of (A)TOM channel 1 operation registers (rw) */
    unsigned int FUPD_CTRL2: 2;             /** \brief [5:4] Force update of (A)TOM channel 2 operation registers (rw) */
    unsigned int FUPD_CTRL3: 2;             /** \brief [7:6] Force update of (A)TOM channel 3 operation registers (rw) */
    unsigned int FUPD_CTRL4: 2;             /** \brief [9:8] Force update of (A)TOM channel 4 operation registers (rw) */
    unsigned int FUPD_CTRL5: 2;             /** \brief [11:10] Force update of (A)TOM channel 5 operation registers (rw) */
    unsigned int FUPD_CTRL6: 2;             /** \brief [13:12] Force update of (A)TOM channel 6 operation registers (rw) */
    unsigned int FUPD_CTRL7: 2;             /** \brief [15:14] Force update of (A)TOM channel 7 operation registers (rw) */
    unsigned int RSTCN0_CH0: 2;             /** \brief [17:16] Reset CN0 of channel 0 on force update event (rw) */
    unsigned int RSTCN0_CH1: 2;             /** \brief [19:18] Reset CN0 of channel 1 on force update event (rw) */
    unsigned int RSTCN0_CH2: 2;             /** \brief [21:20] Reset CN0 of channel 2 on force update event (rw) */
    unsigned int RSTCN0_CH3: 2;             /** \brief [23:22] Reset CN0 of channel 3 on force update event (rw) */
    unsigned int RSTCN0_CH4: 2;             /** \brief [25:24] Reset CN0 of channel 4 on force update event (rw) */
    unsigned int RSTCN0_CH5: 2;             /** \brief [27:26] Reset CN0 of channel 5 on force update event (rw) */
    unsigned int RSTCN0_CH6: 2;             /** \brief [29:28] Reset CN0 of channel 6 on force update event (rw) */
    unsigned int RSTCN0_CH7: 2;             /** \brief [31:30] Reset CN0 of channel 7 on force update event (rw) */
} Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits;

/** TOM TGC Global Control Register */
typedef struct
{
    unsigned int HOST_TRIG: 1;              /** \brief [0:0] Trigger request signal (see TGC0, TGC1) to update the register ENDIS_STAT and OUTEN_STAT (w) */
    unsigned int reserved_1: 7;
    unsigned int RST_CH0: 1;                /** \brief [8:8] Software reset of channel 0 (w) */
    unsigned int RST_CH1: 1;                /** \brief [9:9] Software reset of channel 1 (w) */
    unsigned int RST_CH2: 1;                /** \brief [10:10] Software reset of channel 2 (w) */
    unsigned int RST_CH3: 1;                /** \brief [11:11] Software reset of channel 3 (w) */
    unsigned int RST_CH4: 1;                /** \brief [12:12] Software reset of channel 4 (w) */
    unsigned int RST_CH5: 1;                /** \brief [13:13] Software reset of channel 5 (w) */
    unsigned int RST_CH6: 1;                /** \brief [14:14] Software reset of channel 6 (w) */
    unsigned int RST_CH7: 1;                /** \brief [15:15] Software reset of channel 7 (w) */
    unsigned int UPEN_CTRL0: 2;             /** \brief [17:16] TOM channel 0 enable update of register CM0, CM1 and CLK_SRC_STAT from SR0, SR1 and CLK_SRC (rw) */
    unsigned int UPEN_CTRL1: 2;             /** \brief [19:18] TOM channel 1 enable update of register CM0, CM1 and CLK_SRC_STAT (rw) */
    unsigned int UPEN_CTRL2: 2;             /** \brief [21:20] TOM channel 2 enable update of register CM0, CM1 and CLK_SRC_STAT (rw) */
    unsigned int UPEN_CTRL3: 2;             /** \brief [23:22] TOM channel 3 enable update of register CM0, CM1 and CLK_SRC_STAT (rw) */
    unsigned int UPEN_CTRL4: 2;             /** \brief [25:24] TOM channel 4 enable update of register CM0, CM1 and CLK_SRC_STAT (rw) */
    unsigned int UPEN_CTRL5: 2;             /** \brief [27:26] TOM channel 5 enable update of register CM0, CM1 and CLK_SRC_STAT (rw) */
    unsigned int UPEN_CTRL6: 2;             /** \brief [29:28] TOM channel 6 enable update of register CM0, CM1 and CLK_SRC_STAT (rw) */
    unsigned int UPEN_CTRL7: 2;             /** \brief [31:30] TOM channel 7 enable update of register CM0, CM1 and CLK_SRC_STAT (rw) */
} Ifx_GTM_TOM_TGC_GLB_CTRL_Bits;

/** TOM TGC Internal Trigger Control Register */
typedef struct
{
    unsigned int INT_TRIG0: 2;              /** \brief [1:0] Select input signal TRIG_0 as a trigger source (rw) */
    unsigned int INT_TRIG1: 2;              /** \brief [3:2] Select input signal TRIG_1 as a trigger source (rw) */
    unsigned int INT_TRIG2: 2;              /** \brief [5:4] Select input signal TRIG_2 as a trigger source (rw) */
    unsigned int INT_TRIG3: 2;              /** \brief [7:6] Select input signal TRIG_3 as a trigger source (rw) */
    unsigned int INT_TRIG4: 2;              /** \brief [9:8] Select input signal TRIG_4 as a trigger source (rw) */
    unsigned int INT_TRIG5: 2;              /** \brief [11:10] Select input signal TRIG_5 as a trigger source (rw) */
    unsigned int INT_TRIG6: 2;              /** \brief [13:12] Select input signal TRIG_6 as a trigger source (rw) */
    unsigned int INT_TRIG7: 2;              /** \brief [15:14] Select input signal TRIG_7 as a trigger source (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_TOM_TGC_INT_TRIG_Bits;

/** TOM TGC Output Enable Control Register */
typedef struct
{
    unsigned int OUTEN_CTRL0: 2;            /** \brief [1:0] Output (A)TOM_OUT(0) enable/disable update value (rw) */
    unsigned int OUTEN_CTRL1: 2;            /** \brief [3:2] Output (A)TOM_OUT(1)enable/disable update value (rw) */
    unsigned int OUTEN_CTRL2: 2;            /** \brief [5:4] Output (A)TOM_OUT(2) enable/disable update value (rw) */
    unsigned int OUTEN_CTRL3: 2;            /** \brief [7:6] Output (A)TOM_OUT(3) enable/disable update value (rw) */
    unsigned int OUTEN_CTRL4: 2;            /** \brief [9:8] Output (A)TOM_OUT(4) enable/disable update value (rw) */
    unsigned int OUTEN_CTRL5: 2;            /** \brief [11:10] Output (A)TOM_OUT(5) enable/disable update value (rw) */
    unsigned int OUTEN_CTRL6: 2;            /** \brief [13:12] Output (A)TOM_OUT(6) enable/disable update value (rw) */
    unsigned int OUTEN_CTRL7: 2;            /** \brief [15:14] Output (A)TOM_OUT(7) enable/disable update value (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits;

/** TOM TGC Output Enable Status Register */
typedef struct
{
    unsigned int OUTEN_STAT0: 2;            /** \brief [1:0] Control/status of output (A)TOM_OUT(0) (rw) */
    unsigned int OUTEN_STAT1: 2;            /** \brief [3:2] Control/status of output (A)TOM_OUT(1) (rw) */
    unsigned int OUTEN_STAT2: 2;            /** \brief [5:4] Control/status of output (A)TOM_OUT(2) (rw) */
    unsigned int OUTEN_STAT3: 2;            /** \brief [7:6] Control/status of output (A)TOM_OUT(3) (rw) */
    unsigned int OUTEN_STAT4: 2;            /** \brief [9:8] Control/status of output (A)TOM_OUT(4) (rw) */
    unsigned int OUTEN_STAT5: 2;            /** \brief [11:10] Control/status of output (A)TOM_OUT(5) (rw) */
    unsigned int OUTEN_STAT6: 2;            /** \brief [13:12] Control/status of output (A)TOM_OUT(6) (rw) */
    unsigned int OUTEN_STAT7: 2;            /** \brief [15:14] Control/status of output (A)TOM_OUT(7) (rw) */
    unsigned int reserved_16: 16;
} Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits;

/** Timer Output Select Register */
typedef struct
{
    unsigned int SEL0: 2;                   /** \brief [1:0] TOUT(n*16+x) Output Selection (rw) */
    unsigned int SEL1: 2;                   /** \brief [3:2] TOUT(n*16+x) Output Selection (rw) */
    unsigned int SEL2: 2;                   /** \brief [5:4] TOUT(n*16+x) Output Selection (rw) */
    unsigned int SEL3: 2;                   /** \brief [7:6] TOUT(n*16+x) Output Selection (rw) */
    unsigned int SEL4: 2;                   /** \brief [9:8] TOUT(n*16+x) Output Selection (rw) */
    unsigned int SEL5: 2;                   /** \brief [11:10] TOUT(n*16+x) Output Selection (rw) */
    unsigned int SEL6: 2;                   /** \brief [13:12] TOUT(n*16+x) Output Selection (rw) */
    unsigned int SEL7: 2;                   /** \brief [15:14] TOUT(n*16+x) Output Selection (rw) */
    unsigned int SEL8: 2;                   /** \brief [17:16] TOUT(n*16+x) Output Selection (rw) */
    unsigned int SEL9: 2;                   /** \brief [19:18] TOUT(n*16+x) Output Selection (rw) */
    unsigned int SEL10: 2;                  /** \brief [21:20] TOUT(n*16+x) Output Selection (rw) */
    unsigned int SEL11: 2;                  /** \brief [23:22] TOUT(n*16+x) Output Selection (rw) */
    unsigned int SEL12: 2;                  /** \brief [25:24] TOUT(n*16+x) Output Selection (rw) */
    unsigned int SEL13: 2;                  /** \brief [27:26] TOUT(n*16+x) Output Selection (rw) */
    unsigned int SEL14: 2;                  /** \brief [29:28] TOUT(n*16+x) Output Selection (rw) */
    unsigned int SEL15: 2;                  /** \brief [31:30] TOUT(n*16+x) Output Selection (rw) */
} Ifx_GTM_TOUTSEL_Bits;

/** TTCAN Output Select Register */
typedef struct
{
    unsigned int SEL0: 4;                   /** \brief [3:0] Output Selection for TTCAN GTM connection (rw) */
    unsigned int SEL1: 4;                   /** \brief [7:4] Output Selection for TTCAN GTM connection (rw) */
    unsigned int SEL2: 4;                   /** \brief [11:8] Output Selection for CAN GTM connection (rw) */
    unsigned int SEL3: 4;                   /** \brief [15:12] Output Selection for CAN GTM connection (rw) */
    unsigned int SEL4: 4;                   /** \brief [19:16] Output Selection for CAN GTM connection (rw) */
    unsigned int SEL5: 4;                   /** \brief [23:20] Output Selection for CAN GTM connection (rw) */
    unsigned int SEL6: 4;                   /** \brief [27:24] Output Selection for CAN GTM connection (rw) */
    unsigned int SEL7: 4;                   /** \brief [31:28] Output Selection for CAN GTM connection (rw) */
} Ifx_GTM_TTCANOUTSEL_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ACCEN0_Bits B;
} Ifx_GTM_ACCEN0;

/** Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ACCEN1_Bits B;
} Ifx_GTM_ACCEN1;

/** ADC Trigger 0 Output Select 0 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ADCTRIG0OUT0_Bits B;
} Ifx_GTM_ADCTRIG0OUT0;

/** ADC Trigger 0 Output Select 1 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ADCTRIG0OUT1_Bits B;
} Ifx_GTM_ADCTRIG0OUT1;

/** ADC Trigger 1 Output Select 0 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ADCTRIG1OUT0_Bits B;
} Ifx_GTM_ADCTRIG1OUT0;

/** ADC Trigger 1 Output Select 1 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ADCTRIG1OUT1_Bits B;
} Ifx_GTM_ADCTRIG1OUT1;

/** GTM AEI Timeout Exception Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_AEI_ADDR_XPT_Bits B;
} Ifx_GTM_AEI_ADDR_XPT;

/** ARU Access Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ARU_ACCESS_Bits B;
} Ifx_GTM_ARU_ACCESS;

/** ARU Access Register Upper Data Word */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ARU_DATA_H_Bits B;
} Ifx_GTM_ARU_DATA_H;

/** ARU Access Register Lower Data Word */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ARU_DATA_L_Bits B;
} Ifx_GTM_ARU_DATA_L;

/** Debug Access Channel 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ARU_DBG_ACCESS0_Bits B;
} Ifx_GTM_ARU_DBG_ACCESS0;

/** Debug Access Channel 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ARU_DBG_ACCESS1_Bits B;
} Ifx_GTM_ARU_DBG_ACCESS1;

/** Debug Access 0 Transfer Register Upper Data Word */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ARU_DBG_DATA0_H_Bits B;
} Ifx_GTM_ARU_DBG_DATA0_H;

/** Debug Access 0 Transfer Register Lower Data Word */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ARU_DBG_DATA0_L_Bits B;
} Ifx_GTM_ARU_DBG_DATA0_L;

/** Debug Access 1 Transfer Register Upper Data Word */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ARU_DBG_DATA1_H_Bits B;
} Ifx_GTM_ARU_DBG_DATA1_H;

/** Debug Access 1 Transfer Register Lower Data Word */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ARU_DBG_DATA1_L_Bits B;
} Ifx_GTM_ARU_DBG_DATA1_L;

/** ARU Interrupt Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ARU_IRQ_EN_Bits B;
} Ifx_GTM_ARU_IRQ_EN;

/** ARU_NEW_DATA_IRQ Forcing Interrupt Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ARU_IRQ_FORCINT_Bits B;
} Ifx_GTM_ARU_IRQ_FORCINT;

/** IRQ Mode Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ARU_IRQ_MODE_Bits B;
} Ifx_GTM_ARU_IRQ_MODE;

/** ARU Interrupt Notification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ARU_IRQ_NOTIFY_Bits B;
} Ifx_GTM_ARU_IRQ_NOTIFY;

/** ATOM AGC Force Update Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_AGC0_FUPD_CTRL_Bits B;
} Ifx_GTM_ATOM_AGC0_FUPD_CTRL;

/** ATOM AGC Output Enable Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_AGC0_OUTEN_CTRL_Bits B;
} Ifx_GTM_ATOM_AGC0_OUTEN_CTRL;

/** TOM TGC0 Action Time Base Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_AGC_ACT_TB_Bits B;
} Ifx_GTM_ATOM_AGC_ACT_TB;

/** ATOM AGC Enable/Disable Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits B;
} Ifx_GTM_ATOM_AGC_ENDIS_CTRL;

/** ATOM AGC Enable/Disable Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits B;
} Ifx_GTM_ATOM_AGC_ENDIS_STAT;

/** ATOM AGC Global control register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits B;
} Ifx_GTM_ATOM_AGC_GLB_CTRL;

/** ATOM AGC Internal Trigger Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_AGC_INT_TRIG_Bits B;
} Ifx_GTM_ATOM_AGC_INT_TRIG;

/** ATOM AGC Output Enable Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits B;
} Ifx_GTM_ATOM_AGC_OUTEN_STAT;

/** ATOM Channel CCU0 Compare Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_CH_CM0_Bits B;
} Ifx_GTM_ATOM_CH_CM0;

/** ATOM Channel CCU1 Compare Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_CH_CM1_Bits B;
} Ifx_GTM_ATOM_CH_CM1;

/** ATOM Channel CCU0 Counter Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_CH_CN0_Bits B;
} Ifx_GTM_ATOM_CH_CN0;

/** ATOM Channel Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_CH_CTRL_Bits B;
} Ifx_GTM_ATOM_CH_CTRL;

/** ATOM Channel Interrupt Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_CH_IRQ_EN_Bits B;
} Ifx_GTM_ATOM_CH_IRQ_EN;

/** ATOM Channel Software Interrupt Generation Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_CH_IRQ_FORCINT_Bits B;
} Ifx_GTM_ATOM_CH_IRQ_FORCINT;

/** ATOM IRQ Mode Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_CH_IRQ_MODE_Bits B;
} Ifx_GTM_ATOM_CH_IRQ_MODE;

/** ATOM Channel Interrupt Notification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_CH_IRQ_NOTIFY_Bits B;
} Ifx_GTM_ATOM_CH_IRQ_NOTIFY;

/** ATOM Channel ARU Read Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_CH_RDADDR_Bits B;
} Ifx_GTM_ATOM_CH_RDADDR;

/** ATOM Channel CCU0 Compare Shadow Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_CH_SR0_Bits B;
} Ifx_GTM_ATOM_CH_SR0;

/** ATOM Channel CCU1 Compare Shadow Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_CH_SR1_Bits B;
} Ifx_GTM_ATOM_CH_SR1;

/** ATOM Channel Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ATOM_CH_STAT_Bits B;
} Ifx_GTM_ATOM_CH_STAT;

/** BRC Interrupt Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_BRC_IRQ_EN_Bits B;
} Ifx_GTM_BRC_IRQ_EN;

/** BRC_DEST_ERR Forcing Interrupt Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_BRC_IRQ_FORCINT_Bits B;
} Ifx_GTM_BRC_IRQ_FORCINT;

/** BRC IRQ Mode Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_BRC_IRQ_MODE_Bits B;
} Ifx_GTM_BRC_IRQ_MODE;

/** BRC Interrupt Notification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_BRC_IRQ_NOTIFY_Bits B;
} Ifx_GTM_BRC_IRQ_NOTIFY;

/** BRC Software Reset Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_BRC_RST_Bits B;
} Ifx_GTM_BRC_RST;

/** Read Address For Input Channel */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_BRC_SRC_ADDR_Bits B;
} Ifx_GTM_BRC_SRC_ADDR;

/** Destination Channels For Input Channel */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_BRC_SRC_DEST_Bits B;
} Ifx_GTM_BRC_SRC_DEST;

/** GTM to SPB BRIDGE MODE */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_BRIDGE_MODE_Bits B;
} Ifx_GTM_BRIDGE_MODE;

/** GTM to SPB BRIDGE PTR1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_BRIDGE_PTR1_Bits B;
} Ifx_GTM_BRIDGE_PTR1;

/** GTM to SPB BRIDGE PTR2 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_BRIDGE_PTR2_Bits B;
} Ifx_GTM_BRIDGE_PTR2;

/** Clock Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CLC_Bits B;
} Ifx_GTM_CLC;

/** CMP Comparator Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMP_EN_Bits B;
} Ifx_GTM_CMP_EN;

/** CMP Interrupt Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMP_IRQ_EN_Bits B;
} Ifx_GTM_CMP_IRQ_EN;

/** CMP Interrupt Force Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMP_IRQ_FORCINT_Bits B;
} Ifx_GTM_CMP_IRQ_FORCINT;

/** CMP IRQ Mode Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMP_IRQ_MODE_Bits B;
} Ifx_GTM_CMP_IRQ_MODE;

/** CMP Event Notification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMP_IRQ_NOTIFY_Bits B;
} Ifx_GTM_CMP_IRQ_NOTIFY;

/** CMU Control For Clock Source 0 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_CLK_0_CTRL_Bits B;
} Ifx_GTM_CMU_CLK_0_CTRL;

/** CMU Control For Clock Source 1 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_CLK_1_CTRL_Bits B;
} Ifx_GTM_CMU_CLK_1_CTRL;

/** CMU Control For Clock Source 2 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_CLK_2_CTRL_Bits B;
} Ifx_GTM_CMU_CLK_2_CTRL;

/** CMU Control For Clock Source 3 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_CLK_3_CTRL_Bits B;
} Ifx_GTM_CMU_CLK_3_CTRL;

/** CMU Control For Clock Source 4 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_CLK_4_CTRL_Bits B;
} Ifx_GTM_CMU_CLK_4_CTRL;

/** CMU Control For Clock Source 5 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_CLK_5_CTRL_Bits B;
} Ifx_GTM_CMU_CLK_5_CTRL;

/** CMU Control For Clock Source 6 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_CLK_6_CTRL_Bits B;
} Ifx_GTM_CMU_CLK_6_CTRL;

/** CMU Control For Clock Source 7 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_CLK_7_CTRL_Bits B;
} Ifx_GTM_CMU_CLK_7_CTRL;

/** CMU Clock Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_CLK_EN_Bits B;
} Ifx_GTM_CMU_CLK_EN;

/** CMU External Clock 0 Control Denominator Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_ECLK_0_DEN_Bits B;
} Ifx_GTM_CMU_ECLK_0_DEN;

/** CMU External Clock 0 Control Numerator Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_ECLK_0_NUM_Bits B;
} Ifx_GTM_CMU_ECLK_0_NUM;

/** CMU External Clock 1 Control Denominator Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_ECLK_1_DEN_Bits B;
} Ifx_GTM_CMU_ECLK_1_DEN;

/** CMU External Clock 1 Control Numerator Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_ECLK_1_NUM_Bits B;
} Ifx_GTM_CMU_ECLK_1_NUM;

/** CMU External Clock 2 Control Denominator Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_ECLK_2_DEN_Bits B;
} Ifx_GTM_CMU_ECLK_2_DEN;

/** CMU External Clock 2 Control Numerator Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_ECLK_2_NUM_Bits B;
} Ifx_GTM_CMU_ECLK_2_NUM;

/** CMU Global Clock Control Denominator Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_GCLK_DEN_Bits B;
} Ifx_GTM_CMU_GCLK_DEN;

/** CMU Global Clock Control Numerator Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CMU_GCLK_NUM_Bits B;
} Ifx_GTM_CMU_GCLK_NUM;

/** GTM Global Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_CTRL_Bits B;
} Ifx_GTM_CTRL;

/** Control Bits For Actions Register i */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_ACB_Bits B;
} Ifx_GTM_DPLL_ACB;

/** DPLL ACTION Status Register With Shadow Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_ACT_STA_Bits B;
} Ifx_GTM_DPLL_ACT_STA;

/** DPLL Direct Load Input Value for SUB_INC1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_ADD_IN_LD1_Bits B;
} Ifx_GTM_DPLL_ADD_IN_LD1;

/** DPLL Direct Load Input Value for SUB_INC1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_ADD_IN_LD2_Bits B;
} Ifx_GTM_DPLL_ADD_IN_LD2;

/** DPLL Address Offset Register For APT In RAM Region 2 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_AOSV_2_Bits B;
} Ifx_GTM_DPLL_AOSV_2;

/** DPLL Actual RAM Pointer to RAM Regions 1c1, 1c2 and 1c4 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_APS_Bits B;
} Ifx_GTM_DPLL_APS;

/** DPLL Actual RAM Pointer to RAM Region 1c3 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_APS_1c3_Bits B;
} Ifx_GTM_DPLL_APS_1c3;

/** DPLL Old RAM Pointer and Offset Value for STATE */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_APS_SYNC_Bits B;
} Ifx_GTM_DPLL_APS_SYNC;

/** DPLL Actual RAM Pointer to RAM Regions 2a, b and d */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_APT_Bits B;
} Ifx_GTM_DPLL_APT;

/** DPLL Actual RAM Pointer to RAM Region 2c */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_APT_2c_Bits B;
} Ifx_GTM_DPLL_APT_2c;

/** DPLL Old RAM Pointer and Offset Value for TRIGGER */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_APT_SYNC_Bits B;
} Ifx_GTM_DPLL_APT_SYNC;

/** DPLL Control Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_CTRL_0_Bits B;
} Ifx_GTM_DPLL_CTRL_0;

/** DPLL Control Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_CTRL_1_Bits B;
} Ifx_GTM_DPLL_CTRL_1;

/** DPLL Control Register 2 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_CTRL_2_Bits B;
} Ifx_GTM_DPLL_CTRL_2;

/** DPLL Control Register 3 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_CTRL_3_Bits B;
} Ifx_GTM_DPLL_CTRL_3;

/** DPLL Control Register 4 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_CTRL_4_Bits B;
} Ifx_GTM_DPLL_CTRL_4;

/** DPLL ID Information For Input Signal PMTR Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_ID_PMTR_Bits B;
} Ifx_GTM_DPLL_ID_PMTR;

/** DPLL Counter for Pulses for TBU_TS1 to be sent in Automatic End Mode */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_INC_CNT1_Bits B;
} Ifx_GTM_DPLL_INC_CNT1;

/** DPLL Counter for Pulses for TBU_TS2 to be sent in Automatic End Mode when
 * SMC=RMO=1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_INC_CNT2_Bits B;
} Ifx_GTM_DPLL_INC_CNT2;

/** DPLL Interrupt Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_IRQ_EN_Bits B;
} Ifx_GTM_DPLL_IRQ_EN;

/** DPLL Interrupt Force Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_IRQ_FORCINT_Bits B;
} Ifx_GTM_DPLL_IRQ_FORCINT;

/** DPLL Interrupt Mode Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_IRQ_MODE_Bits B;
} Ifx_GTM_DPLL_IRQ_MODE;

/** DPLL Interrupt Notification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_IRQ_NOTIFY_Bits B;
} Ifx_GTM_DPLL_IRQ_NOTIFY;

/** DPLL Number of Active TRIGGER Events to Interrupt */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_NTI_CNT_Bits B;
} Ifx_GTM_DPLL_NTI_CNT;

/** DPLL Number of Recent STATE Events Used for Calculations */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_NUSC_Bits B;
} Ifx_GTM_DPLL_NUSC;

/** DPLL Number of Recent TRIGGER Events Used for Calculations */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_NUTC_Bits B;
} Ifx_GTM_DPLL_NUTC;

/** DPLL Offset And Switch Old/New Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_OSW_Bits B;
} Ifx_GTM_DPLL_OSW;

/** Calculated Position Value for ACTION_i Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_PSAC_Bits B;
} Ifx_GTM_DPLL_PSAC;

/** DPLL RAM Initatlisation Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_RAM_INI_Bits B;
} Ifx_GTM_DPLL_RAM_INI;

/** DPLL Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_STATUS_Bits B;
} Ifx_GTM_DPLL_STATUS;

/** DPLL TBU_TS0 Value at last STATE Event */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_TBU_TS0_S_Bits B;
} Ifx_GTM_DPLL_TBU_TS0_S;

/** DPLL TBU_TS0 Value at last TRIGGER Event */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_TBU_TS0_T_Bits B;
} Ifx_GTM_DPLL_TBU_TS0_T;

/** Calculated Time Stamp For ACTION_i Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DPLL_TSA_Bits B;
} Ifx_GTM_DPLL_TSA;

/** DSADC Input Select 1Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DSADCINSEL1_Bits B;
} Ifx_GTM_DSADCINSEL1;

/** DSADC Input Select 2Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DSADCINSEL2_Bits B;
} Ifx_GTM_DSADCINSEL2;

/** DSADC Output Select 0 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DSADCOUTSEL00_Bits B;
} Ifx_GTM_DSADCOUTSEL00;

/** DSADC Output Select 1 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_DSADCOUTSEL10_Bits B;
} Ifx_GTM_DSADCOUTSEL10;

/** GTM Infrastructure Interrupt Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ICM_IRQG_0_Bits B;
} Ifx_GTM_ICM_IRQG_0;

/** GTM DPLL Interrupt Group */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ICM_IRQG_1_Bits B;
} Ifx_GTM_ICM_IRQG_1;

/** ATOM Interrupt Group 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ICM_IRQG_10_Bits B;
} Ifx_GTM_ICM_IRQG_10;

/** TIM Interrupt Group 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ICM_IRQG_2_Bits B;
} Ifx_GTM_ICM_IRQG_2;

/** MCS Interrupt Group 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ICM_IRQG_4_Bits B;
} Ifx_GTM_ICM_IRQG_4;

/** TOM Interrupt Group 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ICM_IRQG_6_Bits B;
} Ifx_GTM_ICM_IRQG_6;

/** ITOM Interrupt Group 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ICM_IRQG_7_Bits B;
} Ifx_GTM_ICM_IRQG_7;

/** ATOM Interrupt Group 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ICM_IRQG_9_Bits B;
} Ifx_GTM_ICM_IRQG_9;

/** GTM Interrupt Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_IRQ_EN_Bits B;
} Ifx_GTM_IRQ_EN;

/** GTM Software Interrupt Generation Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_IRQ_FORCINT_Bits B;
} Ifx_GTM_IRQ_FORCINT;

/** GTM Top Level Interrupts Mode Selection */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_IRQ_MODE_Bits B;
} Ifx_GTM_IRQ_MODE;

/** GTM Interrupt Notification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_IRQ_NOTIFY_Bits B;
} Ifx_GTM_IRQ_NOTIFY;

/** Kernel Reset Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_KRST0_Bits B;
} Ifx_GTM_KRST0;

/** Kernel Reset Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_KRST1_Bits B;
} Ifx_GTM_KRST1;

/** Kernel Reset Status Clear Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_KRSTCLR_Bits B;
} Ifx_GTM_KRSTCLR;

/** MAP Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MAP_CTRL_Bits B;
} Ifx_GTM_MAP_CTRL;

/** Memory Layout Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCFG_CTRL_Bits B;
} Ifx_GTM_MCFG_CTRL;

/** MCS Channel ACB Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CH_ACB_Bits B;
} Ifx_GTM_MCS_CH_ACB;

/** MCS Channel Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CH_CTRL_Bits B;
} Ifx_GTM_MCS_CH_CTRL;

/** MCS Channel Interrupt Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CH_IRQ_EN_Bits B;
} Ifx_GTM_MCS_CH_IRQ_EN;

/** MCS Channel Software Interrupt Generation Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CH_IRQ_FORCINT_Bits B;
} Ifx_GTM_MCS_CH_IRQ_FORCINT;

/** MCS IRQ Mode Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CH_IRQ_MODE_Bits B;
} Ifx_GTM_MCS_CH_IRQ_MODE;

/** MCS Channel interrupt notification register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CH_IRQ_NOTIFY_Bits B;
} Ifx_GTM_MCS_CH_IRQ_NOTIFY;

/** MCS Channel Program Counter Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CH_PC_Bits B;
} Ifx_GTM_MCS_CH_PC;

/** MCS Channel Program Counter Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CH_R0_Bits B;
} Ifx_GTM_MCS_CH_R0;

/** MCS Channel Program Counter Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CH_R1_Bits B;
} Ifx_GTM_MCS_CH_R1;

/** MCS Channel Program Counter Register 2 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CH_R2_Bits B;
} Ifx_GTM_MCS_CH_R2;

/** MCS Channel Program Counter Register 3 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CH_R3_Bits B;
} Ifx_GTM_MCS_CH_R3;

/** MCS Channel Program Counter Register 4 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CH_R4_Bits B;
} Ifx_GTM_MCS_CH_R4;

/** MCS Channel Program Counter Register 5 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CH_R5_Bits B;
} Ifx_GTM_MCS_CH_R5;

/** MCS Channel Program Counter Register 6 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CH_R6_Bits B;
} Ifx_GTM_MCS_CH_R6;

/** MCS Channel Program Counter Register 7 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CH_R7_Bits B;
} Ifx_GTM_MCS_CH_R7;

/** MCS Clear Trigger Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CTRG_Bits B;
} Ifx_GTM_MCS_CTRG;

/** MCS Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_CTRL_Bits B;
} Ifx_GTM_MCS_CTRL;

/** MCS Error Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_ERR_Bits B;
} Ifx_GTM_MCS_ERR;

/** MCS Channel Reset Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_RST_Bits B;
} Ifx_GTM_MCS_RST;

/** MCS Set Trigger Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MCS_STRG_Bits B;
} Ifx_GTM_MCS_STRG;

/** Monitor Activity Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MON_ACTIVITY_0_Bits B;
} Ifx_GTM_MON_ACTIVITY_0;

/** Monitor Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MON_STATUS_Bits B;
} Ifx_GTM_MON_STATUS;

/** MSC Input High Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MSCIN_INHCON_Bits B;
} Ifx_GTM_MSCIN_INHCON;

/** MSC Input Low Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MSCIN_INLCON_Bits B;
} Ifx_GTM_MSCIN_INLCON;

/** MSC Set Control 0 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MSCSET_CON0_Bits B;
} Ifx_GTM_MSCSET_CON0;

/** MSC Set Control 1 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MSCSET_CON1_Bits B;
} Ifx_GTM_MSCSET_CON1;

/** MSC Set Control 2 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MSCSET_CON2_Bits B;
} Ifx_GTM_MSCSET_CON2;

/** MSC Set Control 3 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_MSCSET_CON3_Bits B;
} Ifx_GTM_MSCSET_CON3;

/** OCDS Control and Status */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_OCS_Bits B;
} Ifx_GTM_OCS;

/** OCDS Debug Access Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_ODA_Bits B;
} Ifx_GTM_ODA;

/** OCDS Trigger Set Control 0 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_OTSC0_Bits B;
} Ifx_GTM_OTSC0;

/** OCDS Trigger Set Control 1 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_OTSC1_Bits B;
} Ifx_GTM_OTSC1;

/** OCDS Trigger Set Select Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_OTSS_Bits B;
} Ifx_GTM_OTSS;

/** PSI5 Output Select 0 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSI5OUTSEL0_Bits B;
} Ifx_GTM_PSI5OUTSEL0;

/** AFD0 FIFO0 Channel Buffer Access Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_AFD0_CH_BUF_BUF_ACC_Bits B;
} Ifx_GTM_PSM_AFD0_CH_BUF_BUF_ACC;

/** F2A Read Channel Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_F2A0_CH_ARU_RD_FIFO_Bits B;
} Ifx_GTM_PSM_F2A0_CH_ARU_RD_FIFO;

/** F2A Stream Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_F2A0_CH_STR_CFG_Bits B;
} Ifx_GTM_PSM_F2A0_CH_STR_CFG;

/** F2A0 Stream Activation Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_F2A0_ENABLE_Bits B;
} Ifx_GTM_PSM_F2A0_ENABLE;

/** FIFO0 Channel Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_FIFO0_CH_CTRL_Bits B;
} Ifx_GTM_PSM_FIFO0_CH_CTRL;

/** FIFO0 Channel End Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_FIFO0_CH_END_ADDR_Bits B;
} Ifx_GTM_PSM_FIFO0_CH_END_ADDR;

/** FIFO0 Channel Fill Level Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_FIFO0_CH_FILL_LEVEL_Bits B;
} Ifx_GTM_PSM_FIFO0_CH_FILL_LEVEL;

/** FIFO0 FIFO0 FIFO0 Interrupt Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_EN_Bits B;
} Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_EN;

/** FIFO0 Channel Force Interrupt By Software Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_FORCINT_Bits B;
} Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_FORCINT;

/** FIFO0 Channel IRQ Mode Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_MODE_Bits B;
} Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_MODE;

/** FIFO0 Channel Interrupt Notification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_NOTIFY_Bits B;
} Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_NOTIFY;

/** FIFO0 Channel Lower Watermark Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_FIFO0_CH_LOWER_WM_Bits B;
} Ifx_GTM_PSM_FIFO0_CH_LOWER_WM;

/** FIFO0 Channel Read Pointer Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_FIFO0_CH_PTR_RD_PTR_Bits B;
} Ifx_GTM_PSM_FIFO0_CH_PTR_RD_PTR;

/** FIFO0 Channel Write Pointer Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_FIFO0_CH_PTR_WR_PTR_Bits B;
} Ifx_GTM_PSM_FIFO0_CH_PTR_WR_PTR;

/** FIFO0 Channel Start Address Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_FIFO0_CH_START_ADDR_Bits B;
} Ifx_GTM_PSM_FIFO0_CH_START_ADDR;

/** FIFO0 Channel Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_FIFO0_CH_STATUS_Bits B;
} Ifx_GTM_PSM_FIFO0_CH_STATUS;

/** FIFO0 Channel Upper Watermark Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_PSM_FIFO0_CH_UPPER_WM_Bits B;
} Ifx_GTM_PSM_FIFO0_CH_UPPER_WM;

/** GTM Version Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_REV_Bits B;
} Ifx_GTM_REV;

/** GTM Global Reset Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_RST_Bits B;
} Ifx_GTM_RST;

/** SPE Control Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_SPE_CTRL_STAT_Bits B;
} Ifx_GTM_SPE_CTRL_STAT;

/** SPE Interrupt Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_SPE_IRQ_EN_Bits B;
} Ifx_GTM_SPE_IRQ_EN;

/** SPE Interrupt Generation by Software */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_SPE_IRQ_FORCINT_Bits B;
} Ifx_GTM_SPE_IRQ_FORCINT;

/** SPE IRQ Mode Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_SPE_IRQ_MODE_Bits B;
} Ifx_GTM_SPE_IRQ_MODE;

/** SPE Interrupt Notification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_SPE_IRQ_NOTIFY_Bits B;
} Ifx_GTM_SPE_IRQ_NOTIFY;

/** SPE Output Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_SPE_OUT_CTRL_Bits B;
} Ifx_GTM_SPE_OUT_CTRL;

/** SPE Output Definition Register r */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_SPE_OUT_PAT_Bits B;
} Ifx_GTM_SPE_OUT_PAT;

/** SPE Input Pattern Definition Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_SPE_PAT_Bits B;
} Ifx_GTM_SPE_PAT;

/** TBU Channel 0 Base Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TBU_CH0_BASE_Bits B;
} Ifx_GTM_TBU_CH0_BASE;

/** TBU Channel 0 Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TBU_CH0_CTRL_Bits B;
} Ifx_GTM_TBU_CH0_CTRL;

/** TBU Channel 1 Base Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TBU_CH1_BASE_Bits B;
} Ifx_GTM_TBU_CH1_BASE;

/** TBU Channel 1 Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TBU_CH1_CTRL_Bits B;
} Ifx_GTM_TBU_CH1_CTRL;

/** TBU Channel 2 Base Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TBU_CH2_BASE_Bits B;
} Ifx_GTM_TBU_CH2_BASE;

/** TBU Channel 2 Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TBU_CH2_CTRL_Bits B;
} Ifx_GTM_TBU_CH2_CTRL;

/** TBU Global Channel Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TBU_CHEN_Bits B;
} Ifx_GTM_TBU_CHEN;

/** TIM Channel SMU Counter Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TIM_CH_CNT_Bits B;
} Ifx_GTM_TIM_CH_CNT;

/** TIM Channel SMU Shadow Counter Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TIM_CH_CNTS_Bits B;
} Ifx_GTM_TIM_CH_CNTS;

/** TIM Channel Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TIM_CH_CTRL_Bits B;
} Ifx_GTM_TIM_CH_CTRL;

/** TIM Channel Filter Parameter 1 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TIM_CH_FLT_FE_Bits B;
} Ifx_GTM_TIM_CH_FLT_FE;

/** GTM_TIM Channel Filter Parameter 0 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TIM_CH_FLT_RE_Bits B;
} Ifx_GTM_TIM_CH_FLT_RE;

/** TIM Channel General Purpose 0 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TIM_CH_GPR0_Bits B;
} Ifx_GTM_TIM_CH_GPR0;

/** TIM Channel General Purpose 1 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TIM_CH_GPR1_Bits B;
} Ifx_GTM_TIM_CH_GPR1;

/** TIM Channel Interrupt Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TIM_CH_IRQ_EN_Bits B;
} Ifx_GTM_TIM_CH_IRQ_EN;

/** TIM Channel Software Interrupt Force Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits B;
} Ifx_GTM_TIM_CH_IRQ_FORCINT;

/** TIM IRQ Mode Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TIM_CH_IRQ_MODE_Bits B;
} Ifx_GTM_TIM_CH_IRQ_MODE;

/** TIM Channel Interrupt Notification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits B;
} Ifx_GTM_TIM_CH_IRQ_NOTIFY;

/** TIM Channel TDU Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TIM_CH_TDU_Bits B;
} Ifx_GTM_TIM_CH_TDU;

/** TIM Global Software Reset Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TIM_RST_Bits B;
} Ifx_GTM_TIM_RST;

/** TIM  Input Select Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TIMINSEL_Bits B;
} Ifx_GTM_TIMINSEL;

/** TOM Channel CCU0 Compare Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH15_CM0_Bits B;
} Ifx_GTM_TOM_CH15_CM0;

/** TOM Channel CCU1 Compare Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH15_CM1_Bits B;
} Ifx_GTM_TOM_CH15_CM1;

/** TOM Channel CCU0 Counter Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH15_CN0_Bits B;
} Ifx_GTM_TOM_CH15_CN0;

/** TOM Channel Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH15_CTRL_Bits B;
} Ifx_GTM_TOM_CH15_CTRL;

/** TOM Channel Interrupt Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH15_IRQ_EN_Bits B;
} Ifx_GTM_TOM_CH15_IRQ_EN;

/** TOM Channel Software Interrupt Generation Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH15_IRQ_FORCINT_Bits B;
} Ifx_GTM_TOM_CH15_IRQ_FORCINT;

/** TOM IRQ Mode Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH15_IRQ_MODE_Bits B;
} Ifx_GTM_TOM_CH15_IRQ_MODE;

/** TOM Channel Interrupt Notification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH15_IRQ_NOTIFY_Bits B;
} Ifx_GTM_TOM_CH15_IRQ_NOTIFY;

/** TOM Channel CCU0 Compare Shadow Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH15_SR0_Bits B;
} Ifx_GTM_TOM_CH15_SR0;

/** TOM Channel CCU1 Compare Shadow Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH15_SR1_Bits B;
} Ifx_GTM_TOM_CH15_SR1;

/** TOM Channel Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH15_STAT_Bits B;
} Ifx_GTM_TOM_CH15_STAT;

/** TOM Channel CCU0 Compare Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH_CM0_Bits B;
} Ifx_GTM_TOM_CH_CM0;

/** TOM Channel CCU1 Compare Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH_CM1_Bits B;
} Ifx_GTM_TOM_CH_CM1;

/** TOM Channel CCU0 Counter Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH_CN0_Bits B;
} Ifx_GTM_TOM_CH_CN0;

/** TOM Channel Control Register’ */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH_CTRL_Bits B;
} Ifx_GTM_TOM_CH_CTRL;

/** TOM Channel Interrupt Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH_IRQ_EN_Bits B;
} Ifx_GTM_TOM_CH_IRQ_EN;

/** TOM Channel Software Interrupt Generation Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH_IRQ_FORCINT_Bits B;
} Ifx_GTM_TOM_CH_IRQ_FORCINT;

/** TOM IRQ Mode Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH_IRQ_MODE_Bits B;
} Ifx_GTM_TOM_CH_IRQ_MODE;

/** TOM Channel Interrupt Notification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH_IRQ_NOTIFY_Bits B;
} Ifx_GTM_TOM_CH_IRQ_NOTIFY;

/** TOM Channel CCU0 Compare Shadow Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH_SR0_Bits B;
} Ifx_GTM_TOM_CH_SR0;

/** TOM Channel CCU1 Compare Shadow Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH_SR1_Bits B;
} Ifx_GTM_TOM_CH_SR1;

/** TOM Channel Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_CH_STAT_Bits B;
} Ifx_GTM_TOM_CH_STAT;

/** TOM TGC Action Time Base Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_TGC_ACT_TB_Bits B;
} Ifx_GTM_TOM_TGC_ACT_TB;

/** TOM TGC Enable/Disable Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits B;
} Ifx_GTM_TOM_TGC_ENDIS_CTRL;

/** TOM TGC Enable/Disable Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits B;
} Ifx_GTM_TOM_TGC_ENDIS_STAT;

/** TOM TGC Force Update Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits B;
} Ifx_GTM_TOM_TGC_FUPD_CTRL;

/** TOM TGC Global Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_TGC_GLB_CTRL_Bits B;
} Ifx_GTM_TOM_TGC_GLB_CTRL;

/** TOM TGC Internal Trigger Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_TGC_INT_TRIG_Bits B;
} Ifx_GTM_TOM_TGC_INT_TRIG;

/** TOM TGC Output Enable Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits B;
} Ifx_GTM_TOM_TGC_OUTEN_CTRL;

/** TOM TGC Output Enable Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits B;
} Ifx_GTM_TOM_TGC_OUTEN_STAT;

/** Timer Output Select Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TOUTSEL_Bits B;
} Ifx_GTM_TOUTSEL;

/** TTCAN Output Select Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_GTM_TTCANOUTSEL_Bits B;
} Ifx_GTM_TTCANOUTSEL;

/******************************************************************************/
/*                           Struct (2 - Object L2)                           */
/******************************************************************************/

/** ATOM channel objects */
typedef volatile struct
{
    Ifx_GTM_ATOM_CH_CTRL CTRL;              /** \brief 0, ATOM Channel Control Register */
    Ifx_GTM_ATOM_CH_STAT STAT;              /** \brief 4, ATOM Channel Status Register */
    Ifx_GTM_ATOM_CH_RDADDR RDADDR;          /** \brief 8, ATOM Channel ARU Read Address Register */
    Ifx_GTM_ATOM_CH_CN0 CN0;                /** \brief C, ATOM Channel CCU0 Counter Register */
    Ifx_GTM_ATOM_CH_CM0 CM0;                /** \brief 10, ATOM Channel CCU0 Compare Register */
    Ifx_GTM_ATOM_CH_SR0 SR0;                /** \brief 14, ATOM Channel CCU0 Compare Shadow Register */
    Ifx_GTM_ATOM_CH_CM1 CM1;                /** \brief 18, ATOM Channel CCU1 Compare Register */
    Ifx_GTM_ATOM_CH_SR1 SR1;                /** \brief 1C, ATOM Channel CCU1 Compare Shadow Register */
    Ifx_GTM_ATOM_CH_IRQ_NOTIFY IRQ_NOTIFY;  /** \brief 20, ATOM Channel Interrupt Notification Register */
    Ifx_GTM_ATOM_CH_IRQ_EN IRQ_EN;          /** \brief 24, ATOM Channel Interrupt Enable Register */
    Ifx_GTM_ATOM_CH_IRQ_FORCINT IRQ_FORCINT;    /** \brief 28, ATOM Channel Software Interrupt Generation Register */
    Ifx_GTM_ATOM_CH_IRQ_MODE IRQ_MODE;      /** \brief 2C, ATOM IRQ Mode Configuration Register */
    unsigned char reserved_30[80];          /** \brief 30 */
} Ifx_GTM_ATOM_CH;

/** BRC input channel objects */
typedef volatile struct
{
    Ifx_GTM_BRC_SRC_ADDR ADDR;              /** \brief 0, Read Address For Input Channel */
    Ifx_GTM_BRC_SRC_DEST DEST;              /** \brief 4, Destination Channels For Input Channel */
} Ifx_GTM_BRC_SRC;

/** MCS channel objects */
typedef volatile struct
{
    Ifx_GTM_MCS_CH_CTRL CTRL;               /** \brief 0, MCS Channel Control Register */
    Ifx_GTM_MCS_CH_PC PC;                   /** \brief 4, MCS Channel Program Counter Register */
    Ifx_GTM_MCS_CH_R0 R0;                   /** \brief 8, MCS Channel Program Counter Register 0 */
    Ifx_GTM_MCS_CH_R1 R1;                   /** \brief C, MCS Channel Program Counter Register 1 */
    Ifx_GTM_MCS_CH_R2 R2;                   /** \brief 10, MCS Channel Program Counter Register 2 */
    Ifx_GTM_MCS_CH_R3 R3;                   /** \brief 14, MCS Channel Program Counter Register 3 */
    Ifx_GTM_MCS_CH_R4 R4;                   /** \brief 18, MCS Channel Program Counter Register 4 */
    Ifx_GTM_MCS_CH_R5 R5;                   /** \brief 1C, MCS Channel Program Counter Register 5 */
    Ifx_GTM_MCS_CH_R6 R6;                   /** \brief 20, MCS Channel Program Counter Register 6 */
    Ifx_GTM_MCS_CH_R7 R7;                   /** \brief 24, MCS Channel Program Counter Register 7 */
    Ifx_GTM_MCS_CH_ACB ACB;                 /** \brief 28, MCS Channel ACB Register */
    Ifx_GTM_MCS_CH_IRQ_NOTIFY IRQ_NOTIFY;   /** \brief 2C, MCS Channel interrupt notification register */
    Ifx_GTM_MCS_CH_IRQ_EN IRQ_EN;           /** \brief 30, MCS Channel Interrupt Enable Register */
    Ifx_GTM_MCS_CH_IRQ_FORCINT IRQ_FORCINT; /** \brief 34, MCS Channel Software Interrupt Generation Register */
    Ifx_GTM_MCS_CH_IRQ_MODE IRQ_MODE;       /** \brief 38, MCS IRQ Mode Configuration Register */
    unsigned char reserved_3C[68];          /** \brief 3C */
} Ifx_GTM_MCS_CH;

/** PSM Fifo channel buffer objects */
typedef volatile struct
{
    Ifx_GTM_PSM_AFD0_CH_BUF_BUF_ACC BUF_ACC;    /** \brief 0, AFD0 FIFO0 Channel Buffer Access Register */
    unsigned char reserved_4[12];           /** \brief 4 */
} Ifx_GTM_PSM_AFD0_CH_BUF;

/** PSM Fifo 0 channel objects */
typedef volatile struct
{
    Ifx_GTM_PSM_FIFO0_CH_CTRL CTRL;         /** \brief 0, FIFO0 Channel Control Register */
    Ifx_GTM_PSM_FIFO0_CH_END_ADDR END_ADDR; /** \brief 4, FIFO0 Channel End Address Register */
    Ifx_GTM_PSM_FIFO0_CH_START_ADDR START_ADDR; /** \brief 8, FIFO0 Channel Start Address Register */
    Ifx_GTM_PSM_FIFO0_CH_UPPER_WM UPPER_WM; /** \brief C, FIFO0 Channel Upper Watermark Register */
    Ifx_GTM_PSM_FIFO0_CH_LOWER_WM LOWER_WM; /** \brief 10, FIFO0 Channel Lower Watermark Register */
    Ifx_GTM_PSM_FIFO0_CH_STATUS STATUS;     /** \brief 14, FIFO0 Channel Status Register */
    Ifx_GTM_PSM_FIFO0_CH_FILL_LEVEL FILL_LEVEL; /** \brief 18, FIFO0 Channel Fill Level Register */
    unsigned char reserved_1C[4];           /** \brief 1C */
} Ifx_GTM_PSM_FIFO0_CH;

/** PSM Fifo 0 channel interrupt objects */
typedef volatile struct
{
    Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_NOTIFY IRQ_NOTIFY; /** \brief 0, FIFO0 Channel Interrupt Notification Register */
    Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_EN IRQ_EN; /** \brief 4, FIFO0 FIFO0 FIFO0 Interrupt Enable Register */
    Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_FORCINT IRQ_FORCINT;   /** \brief 8, FIFO0 Channel Force Interrupt By Software Register */
    Ifx_GTM_PSM_FIFO0_CH_IRQ_IRQ_MODE IRQ_MODE; /** \brief C, FIFO0 Channel IRQ Mode Control Register */
    unsigned char reserved_10[16];          /** \brief 10 */
} Ifx_GTM_PSM_FIFO0_CH_IRQ;

/** PSM Fifo 0 channel pointer objects */
typedef volatile struct
{
    Ifx_GTM_PSM_FIFO0_CH_PTR_WR_PTR WR_PTR; /** \brief 0, FIFO0 Channel Write Pointer Register */
    Ifx_GTM_PSM_FIFO0_CH_PTR_RD_PTR RD_PTR; /** \brief 4, FIFO0 Channel Read Pointer Register */
    unsigned char reserved_8[24];           /** \brief 8 */
} Ifx_GTM_PSM_FIFO0_CH_PTR;

/** TIM channel objects */
typedef volatile struct
{
    Ifx_GTM_TIM_CH_CTRL CTRL;               /** \brief 0, TIM Channel Control Register */
    Ifx_GTM_TIM_CH_FLT_RE FLT_RE;           /** \brief 4, GTM_TIM Channel Filter Parameter 0 Register */
    Ifx_GTM_TIM_CH_FLT_FE FLT_FE;           /** \brief 8, TIM Channel Filter Parameter 1 Register */
    Ifx_GTM_TIM_CH_TDU TDU;                 /** \brief C, TIM Channel TDU Control Register */
    Ifx_GTM_TIM_CH_GPR0 GPR0;               /** \brief 10, TIM Channel General Purpose 0 Register */
    Ifx_GTM_TIM_CH_GPR1 GPR1;               /** \brief 14, TIM Channel General Purpose 1 Register */
    Ifx_GTM_TIM_CH_CNT CNT;                 /** \brief 18, TIM Channel SMU Counter Register */
    Ifx_GTM_TIM_CH_CNTS CNTS;               /** \brief 1C, TIM Channel SMU Shadow Counter Register */
    Ifx_GTM_TIM_CH_IRQ_NOTIFY IRQ_NOTIFY;   /** \brief 20, TIM Channel Interrupt Notification Register */
    Ifx_GTM_TIM_CH_IRQ_EN IRQ_EN;           /** \brief 24, TIM Channel Interrupt Enable Register */
    Ifx_GTM_TIM_CH_IRQ_FORCINT IRQ_FORCINT; /** \brief 28, TIM Channel Software Interrupt Force Register */
    Ifx_GTM_TIM_CH_IRQ_MODE IRQ_MODE;       /** \brief 2C, TIM IRQ Mode Configuration Register */
    unsigned char reserved_30[80];          /** \brief 30 */
} Ifx_GTM_TIM_CH;

/** TOM channel objects */
typedef volatile struct
{
    Ifx_GTM_TOM_CH_CTRL CTRL;               /** \brief 0, TOM Channel Control Register’ */
    Ifx_GTM_TOM_CH_CN0 CN0;                 /** \brief 4, TOM Channel CCU0 Counter Register */
    Ifx_GTM_TOM_CH_CM0 CM0;                 /** \brief 8, TOM Channel CCU0 Compare Register */
    Ifx_GTM_TOM_CH_SR0 SR0;                 /** \brief C, TOM Channel CCU0 Compare Shadow Register */
    Ifx_GTM_TOM_CH_CM1 CM1;                 /** \brief 10, TOM Channel CCU1 Compare Register */
    Ifx_GTM_TOM_CH_SR1 SR1;                 /** \brief 14, TOM Channel CCU1 Compare Shadow Register */
    Ifx_GTM_TOM_CH_STAT STAT;               /** \brief 18, TOM Channel Status Register */
    Ifx_GTM_TOM_CH_IRQ_NOTIFY IRQ_NOTIFY;   /** \brief 1C, TOM Channel Interrupt Notification Register */
    Ifx_GTM_TOM_CH_IRQ_EN IRQ_EN;           /** \brief 20, TOM Channel Interrupt Enable Register */
    Ifx_GTM_TOM_CH_IRQ_FORCINT IRQ_FORCINT; /** \brief 24, TOM Channel Software Interrupt Generation Register */
    Ifx_GTM_TOM_CH_IRQ_MODE IRQ_MODE;       /** \brief 28, TOM IRQ Mode Configuration Register */
    unsigned char reserved_2C[20];          /** \brief 2C */
} Ifx_GTM_TOM_CH;

/** TOM channel objects */
typedef volatile struct
{
    Ifx_GTM_TOM_CH15_CTRL CTRL;             /** \brief 0, TOM Channel Control Register */
    Ifx_GTM_TOM_CH15_CN0 CN0;               /** \brief 4, TOM Channel CCU0 Counter Register */
    Ifx_GTM_TOM_CH15_CM0 CM0;               /** \brief 8, TOM Channel CCU0 Compare Register */
    Ifx_GTM_TOM_CH15_SR0 SR0;               /** \brief C, TOM Channel CCU0 Compare Shadow Register */
    Ifx_GTM_TOM_CH15_CM1 CM1;               /** \brief 10, TOM Channel CCU1 Compare Register */
    Ifx_GTM_TOM_CH15_SR1 SR1;               /** \brief 14, TOM Channel CCU1 Compare Shadow Register */
    Ifx_GTM_TOM_CH15_STAT STAT;             /** \brief 18, TOM Channel Status Register */
    Ifx_GTM_TOM_CH15_IRQ_NOTIFY IRQ_NOTIFY; /** \brief 1C, TOM Channel Interrupt Notification Register */
    Ifx_GTM_TOM_CH15_IRQ_EN IRQ_EN;         /** \brief 20, TOM Channel Interrupt Enable Register */
    Ifx_GTM_TOM_CH15_IRQ_FORCINT IRQ_FORCINT;   /** \brief 24, TOM Channel Software Interrupt Generation Register */
    Ifx_GTM_TOM_CH15_IRQ_MODE IRQ_MODE;     /** \brief 28, TOM IRQ Mode Configuration Register */
} Ifx_GTM_TOM_CH15;

/** TOM TGC objects */
typedef volatile struct
{
    Ifx_GTM_TOM_TGC_GLB_CTRL GLB_CTRL;      /** \brief 0, TOM TGC Global Control Register */
    Ifx_GTM_TOM_TGC_ENDIS_CTRL ENDIS_CTRL;  /** \brief 4, TOM TGC Enable/Disable Control Register */
    Ifx_GTM_TOM_TGC_ENDIS_STAT ENDIS_STAT;  /** \brief 8, TOM TGC Enable/Disable Status Register */
    Ifx_GTM_TOM_TGC_ACT_TB ACT_TB;          /** \brief C, TOM TGC Action Time Base Register */
    Ifx_GTM_TOM_TGC_OUTEN_CTRL OUTEN_CTRL;  /** \brief 10, TOM TGC Output Enable Control Register */
    Ifx_GTM_TOM_TGC_OUTEN_STAT OUTEN_STAT;  /** \brief 14, TOM TGC Output Enable Status Register */
    Ifx_GTM_TOM_TGC_FUPD_CTRL FUPD_CTRL;    /** \brief 18, TOM TGC Force Update Control Register */
    Ifx_GTM_TOM_TGC_INT_TRIG INT_TRIG;      /** \brief 1C, TOM TGC Internal Trigger Control Register */
    unsigned char reserved_20[32];          /** \brief 20 */
} Ifx_GTM_TOM_TGC;

/******************************************************************************/
/*                           Struct (3 - Object L1)                           */
/******************************************************************************/

/** ARU object */
typedef volatile struct
{
    Ifx_GTM_ARU_ACCESS ACCESS;              /** \brief 0, ARU Access Register */
    Ifx_GTM_ARU_DATA_H DATA_H;              /** \brief 4, ARU Access Register Upper Data Word */
    Ifx_GTM_ARU_DATA_L DATA_L;              /** \brief 8, ARU Access Register Lower Data Word */
    Ifx_GTM_ARU_DBG_ACCESS0 DBG_ACCESS0;    /** \brief C, Debug Access Channel 0 */
    Ifx_GTM_ARU_DBG_DATA0_H DBG_DATA0_H;    /** \brief 10, Debug Access 0 Transfer Register Upper Data Word */
    Ifx_GTM_ARU_DBG_DATA0_L DBG_DATA0_L;    /** \brief 14, Debug Access 0 Transfer Register Lower Data Word */
    Ifx_GTM_ARU_DBG_ACCESS1 DBG_ACCESS1;    /** \brief 18, Debug Access Channel 0 */
    Ifx_GTM_ARU_DBG_DATA1_H DBG_DATA1_H;    /** \brief 1C, Debug Access 1 Transfer Register Upper Data Word */
    Ifx_GTM_ARU_DBG_DATA1_L DBG_DATA1_L;    /** \brief 20, Debug Access 1 Transfer Register Lower Data Word */
    Ifx_GTM_ARU_IRQ_NOTIFY IRQ_NOTIFY;      /** \brief 24, ARU Interrupt Notification Register */
    Ifx_GTM_ARU_IRQ_EN IRQ_EN;              /** \brief 28, ARU Interrupt Enable Register */
    Ifx_GTM_ARU_IRQ_FORCINT IRQ_FORCINT;    /** \brief 2C, ARU_NEW_DATA_IRQ Forcing Interrupt Register */
    Ifx_GTM_ARU_IRQ_MODE IRQ_MODE;          /** \brief 30, IRQ Mode Configuration Register */
} Ifx_GTM_ARU;

/** ATOM objects */
typedef volatile struct
{
    Ifx_GTM_ATOM_AGC_GLB_CTRL AGC_GLB_CTRL; /** \brief 0, ATOM AGC Global control register */
    Ifx_GTM_ATOM_AGC_ENDIS_CTRL AGC_ENDIS_CTRL; /** \brief 4, ATOM AGC Enable/Disable Control Register */
    Ifx_GTM_ATOM_AGC_ENDIS_STAT AGC_ENDIS_STAT; /** \brief 8, ATOM AGC Enable/Disable Status Register */
    Ifx_GTM_ATOM_AGC_ACT_TB AGC_ACT_TB;     /** \brief C, TOM TGC0 Action Time Base Register */
    Ifx_GTM_ATOM_AGC0_OUTEN_CTRL AGC0_OUTEN_CTRL;   /** \brief 10, ATOM AGC Output Enable Control Register */
    Ifx_GTM_ATOM_AGC_OUTEN_STAT AGC_OUTEN_STAT; /** \brief 14, ATOM AGC Output Enable Status Register */
    Ifx_GTM_ATOM_AGC0_FUPD_CTRL AGC0_FUPD_CTRL; /** \brief 18, ATOM AGC Force Update Control Register */
    Ifx_GTM_ATOM_AGC_INT_TRIG AGC_INT_TRIG; /** \brief 1C, ATOM AGC Internal Trigger Control Register */
    unsigned char reserved_20[96];          /** \brief 20 */
    Ifx_GTM_ATOM_CH CH[8];                  /** \brief 80, ATOM channel objects */
    unsigned char reserved_480[896];        /** \brief 480 */
} Ifx_GTM_ATOM;

/** BRC object */
typedef volatile struct
{
    Ifx_GTM_BRC_SRC SRC0;                   /** \brief 0, BRC input channel objects */
    Ifx_GTM_BRC_SRC SRC1;                   /** \brief 8, BRC input channel objects */
    Ifx_GTM_BRC_SRC SRC2;                   /** \brief 10, BRC input channel objects */
    Ifx_GTM_BRC_SRC SRC3;                   /** \brief 18, BRC input channel objects */
    Ifx_GTM_BRC_SRC SRC4;                   /** \brief 20, BRC input channel objects */
    Ifx_GTM_BRC_SRC SRC5;                   /** \brief 28, BRC input channel objects */
    Ifx_GTM_BRC_SRC SRC6;                   /** \brief 30, BRC input channel objects */
    Ifx_GTM_BRC_SRC SRC7;                   /** \brief 38, BRC input channel objects */
    Ifx_GTM_BRC_SRC SRC8;                   /** \brief 40, BRC input channel objects */
    Ifx_GTM_BRC_SRC SRC9;                   /** \brief 48, BRC input channel objects */
    Ifx_GTM_BRC_SRC SRC10;                  /** \brief 50, BRC input channel objects */
    Ifx_GTM_BRC_SRC SRC11;                  /** \brief 58, BRC input channel objects */
    Ifx_GTM_BRC_IRQ_NOTIFY IRQ_NOTIFY;      /** \brief 60, BRC Interrupt Notification Register */
    Ifx_GTM_BRC_IRQ_EN IRQ_EN;              /** \brief 64, BRC Interrupt Enable Register */
    Ifx_GTM_BRC_IRQ_FORCINT IRQ_FORCINT;    /** \brief 68, BRC_DEST_ERR Forcing Interrupt Register */
    Ifx_GTM_BRC_IRQ_MODE IRQ_MODE;          /** \brief 6C, BRC IRQ Mode Configuration Register */
    Ifx_GTM_BRC_RST RST;                    /** \brief 70, BRC Software Reset Register */
} Ifx_GTM_BRC;

/** CMP object */
typedef volatile struct
{
    Ifx_GTM_CMP_EN EN;                      /** \brief 0, CMP Comparator Enable Register */
    Ifx_GTM_CMP_IRQ_NOTIFY IRQ_NOTIFY;      /** \brief 4, CMP Event Notification Register */
    Ifx_GTM_CMP_IRQ_EN IRQ_EN;              /** \brief 8, CMP Interrupt Enable Register */
    Ifx_GTM_CMP_IRQ_FORCINT IRQ_FORCINT;    /** \brief C, CMP Interrupt Force Register */
    Ifx_GTM_CMP_IRQ_MODE IRQ_MODE;          /** \brief 10, CMP IRQ Mode Configuration Register */
} Ifx_GTM_CMP;

/** CMU object */
typedef volatile struct
{
    Ifx_GTM_CMU_CLK_EN CLK_EN;              /** \brief 0, CMU Clock Enable Register */
    Ifx_GTM_CMU_GCLK_NUM GCLK_NUM;          /** \brief 4, CMU Global Clock Control Numerator Register */
    Ifx_GTM_CMU_GCLK_DEN GCLK_DEN;          /** \brief 8, CMU Global Clock Control Denominator Register */
    Ifx_GTM_CMU_CLK_0_CTRL CLK_0_CTRL;      /** \brief C, CMU Control For Clock Source 0 Register */
    Ifx_GTM_CMU_CLK_1_CTRL CLK_1_CTRL;      /** \brief 10, CMU Control For Clock Source 1 Register */
    Ifx_GTM_CMU_CLK_2_CTRL CLK_2_CTRL;      /** \brief 14, CMU Control For Clock Source 2 Register */
    Ifx_GTM_CMU_CLK_3_CTRL CLK_3_CTRL;      /** \brief 18, CMU Control For Clock Source 3 Register */
    Ifx_GTM_CMU_CLK_4_CTRL CLK_4_CTRL;      /** \brief 1C, CMU Control For Clock Source 4 Register */
    Ifx_GTM_CMU_CLK_5_CTRL CLK_5_CTRL;      /** \brief 20, CMU Control For Clock Source 5 Register */
    Ifx_GTM_CMU_CLK_6_CTRL CLK_6_CTRL;      /** \brief 24, CMU Control For Clock Source 6 Register */
    Ifx_GTM_CMU_CLK_7_CTRL CLK_7_CTRL;      /** \brief 28, CMU Control For Clock Source 7 Register */
    Ifx_GTM_CMU_ECLK_0_NUM ECLK_0_NUM;      /** \brief 2C, CMU External Clock 0 Control Numerator Register */
    Ifx_GTM_CMU_ECLK_0_DEN ECLK_0_DEN;      /** \brief 30, CMU External Clock 0 Control Denominator Register */
    Ifx_GTM_CMU_ECLK_1_NUM ECLK_1_NUM;      /** \brief 34, CMU External Clock 1 Control Numerator Register */
    Ifx_GTM_CMU_ECLK_1_DEN ECLK_1_DEN;      /** \brief 38, CMU External Clock 1 Control Denominator Register */
    Ifx_GTM_CMU_ECLK_2_NUM ECLK_2_NUM;      /** \brief 3C, CMU External Clock 2 Control Numerator Register */
    Ifx_GTM_CMU_ECLK_2_DEN ECLK_2_DEN;      /** \brief 40, CMU External Clock 2 Control Denominator Register */
} Ifx_GTM_CMU;

/** DPLL object */
typedef volatile struct
{
    Ifx_GTM_DPLL_CTRL_0 CTRL_0;             /** \brief 0, DPLL Control Register 0 */
    Ifx_GTM_DPLL_CTRL_1 CTRL_1;             /** \brief 4, DPLL Control Register 1 */
    Ifx_GTM_DPLL_CTRL_2 CTRL_2;             /** \brief 8, DPLL Control Register 2 */
    Ifx_GTM_DPLL_CTRL_3 CTRL_3;             /** \brief C, DPLL Control Register 3 */
    Ifx_GTM_DPLL_CTRL_4 CTRL_4;             /** \brief 10, DPLL Control Register 4 */
    Ifx_GTM_DPLL_STATUS STATUS;             /** \brief 14, DPLL Status Register */
    Ifx_GTM_DPLL_ACT_STA ACT_STA;           /** \brief 18, DPLL ACTION Status Register With Shadow Register */
    Ifx_GTM_DPLL_OSW OSW;                   /** \brief 1C, DPLL Offset And Switch Old/New Address Register */
    Ifx_GTM_DPLL_AOSV_2 AOSV_2;             /** \brief 20, DPLL Address Offset Register For APT In RAM Region 2 */
    Ifx_GTM_DPLL_APT APT;                   /** \brief 24, DPLL Actual RAM Pointer to RAM Regions 2a, b and d */
    Ifx_GTM_DPLL_APS APS;                   /** \brief 28, DPLL Actual RAM Pointer to RAM Regions 1c1, 1c2 and 1c4 */
    Ifx_GTM_DPLL_APT_2c APT_2c;             /** \brief 2C, DPLL Actual RAM Pointer to RAM Region 2c */
    Ifx_GTM_DPLL_APS_1c3 APS_1c3;           /** \brief 30, DPLL Actual RAM Pointer to RAM Region 1c3 */
    Ifx_GTM_DPLL_NUTC NUTC;                 /** \brief 34, DPLL Number of Recent TRIGGER Events Used for Calculations */
    Ifx_GTM_DPLL_NUSC NUSC;                 /** \brief 38, DPLL Number of Recent STATE Events Used for Calculations */
    Ifx_GTM_DPLL_NTI_CNT NTI_CNT;           /** \brief 3C, DPLL Number of Active TRIGGER Events to Interrupt */
    Ifx_GTM_DPLL_IRQ_NOTIFY IRQ_NOTIFY;     /** \brief 40, DPLL Interrupt Notification Register */
    Ifx_GTM_DPLL_IRQ_EN IRQ_EN;             /** \brief 44, DPLL Interrupt Enable Register */
    Ifx_GTM_DPLL_IRQ_FORCINT IRQ_FORCINT;   /** \brief 48, DPLL Interrupt Force Register */
    Ifx_GTM_DPLL_IRQ_MODE IRQ_MODE;         /** \brief 4C, DPLL Interrupt Mode Register */
    Ifx_GTM_DPLL_ID_PMTR ID_PMTR[24];       /** \brief 50, DPLL ID Information For Input Signal PMTR n Register */
    Ifx_GTM_DPLL_INC_CNT1 INC_CNT1;         /** \brief B0, DPLL Counter for Pulses for TBU_TS1 to be sent in Automatic End Mode */
    Ifx_GTM_DPLL_INC_CNT2 INC_CNT2;         /** \brief B4, DPLL Counter for Pulses for TBU_TS2 to be sent in Automatic End Mode when SMC=RMO=1 */
    Ifx_GTM_DPLL_APT_SYNC APT_SYNC;         /** \brief B8, DPLL Old RAM Pointer and Offset Value for TRIGGER */
    Ifx_GTM_DPLL_APS_SYNC APS_SYNC;         /** \brief BC, DPLL Old RAM Pointer and Offset Value for STATE */
    Ifx_GTM_DPLL_TBU_TS0_T TBU_TS0_T;       /** \brief C0, DPLL TBU_TS0 Value at last TRIGGER Event */
    Ifx_GTM_DPLL_TBU_TS0_S TBU_TS0_S;       /** \brief C4, DPLL TBU_TS0 Value at last STATE Event */
    Ifx_GTM_DPLL_ADD_IN_LD1 ADD_IN_LD1;     /** \brief C8, DPLL Direct Load Input Value for SUB_INC1 */
    Ifx_GTM_DPLL_ADD_IN_LD2 ADD_IN_LD2;     /** \brief CC, DPLL Direct Load Input Value for SUB_INC1 */
    unsigned char reserved_D0[48];          /** \brief D0 */
    Ifx_GTM_DPLL_TSA TSA[24];               /** \brief 100, Calculated Time Stamp For ACTION_i Register */
    Ifx_GTM_DPLL_PSAC PSAC[24];             /** \brief 160, Calculated Position Value for ACTION_i Register */
    Ifx_GTM_DPLL_ACB ACB[6];                /** \brief 1C0, Control Bits For Actions Register i */
    unsigned char reserved_1D8[484];        /** \brief 1D8 */
    Ifx_GTM_DPLL_RAM_INI RAM_INI;           /** \brief 3BC, DPLL RAM Initatlisation Register */
} Ifx_GTM_DPLL;

/** ICM object */
typedef volatile struct
{
    Ifx_GTM_ICM_IRQG_0 IRQG_0;              /** \brief 0, GTM Infrastructure Interrupt Group */
    Ifx_GTM_ICM_IRQG_1 IRQG_1;              /** \brief 4, GTM DPLL Interrupt Group */
    Ifx_GTM_ICM_IRQG_2 IRQG_2;              /** \brief 8, TIM Interrupt Group 0 */
    unsigned char reserved_C[4];            /** \brief C */
    Ifx_GTM_ICM_IRQG_4 IRQG_4;              /** \brief 10, MCS Interrupt Group 0 */
    unsigned char reserved_14[4];           /** \brief 14 */
    Ifx_GTM_ICM_IRQG_6 IRQG_6;              /** \brief 18, TOM Interrupt Group 0 */
    Ifx_GTM_ICM_IRQG_7 IRQG_7;              /** \brief 1C, ITOM Interrupt Group 1 */
    unsigned char reserved_20[4];           /** \brief 20 */
    Ifx_GTM_ICM_IRQG_9 IRQG_9;              /** \brief 24, ATOM Interrupt Group 0 */
    Ifx_GTM_ICM_IRQG_10 IRQG_10;            /** \brief 28, ATOM Interrupt Group 1 */
} Ifx_GTM_ICM;

/** MCS objects */
typedef volatile struct
{
    Ifx_GTM_MCS_CH CH[8];                   /** \brief 0, MCS channel objects */
    Ifx_GTM_MCS_CTRL CTRL;                  /** \brief 400, MCS Control Register */
    Ifx_GTM_MCS_CTRG CTRG;                  /** \brief 404, MCS Clear Trigger Control Register */
    Ifx_GTM_MCS_STRG STRG;                  /** \brief 408, MCS Set Trigger Control Register */
    Ifx_GTM_MCS_RST RST;                    /** \brief 40C, MCS Channel Reset Register */
    Ifx_GTM_MCS_ERR ERR;                    /** \brief 410, MCS Error Register */
    unsigned char reserved_414[64492];      /** \brief 414 */
} Ifx_GTM_MCS;

/** MSC input */
typedef volatile struct
{
    Ifx_GTM_MSCIN_INLCON INLCON;            /** \brief 0, MSC Input Low Control Register */
    Ifx_GTM_MSCIN_INHCON INHCON;            /** \brief 4, MSC Input High Control Register */
} Ifx_GTM_MSCIN;

/** MSC objects */
typedef volatile struct
{
    Ifx_GTM_MSCSET_CON0 CON0;               /** \brief 0, MSC Set Control 0 Register */
    Ifx_GTM_MSCSET_CON1 CON1;               /** \brief 4, MSC Set Control 1 Register */
    Ifx_GTM_MSCSET_CON2 CON2;               /** \brief 8, MSC Set Control 2 Register */
    Ifx_GTM_MSCSET_CON3 CON3;               /** \brief C, MSC Set Control 3 Register */
} Ifx_GTM_MSCSET;

/** PSM object */
typedef volatile struct
{
    Ifx_GTM_PSM_F2A0_CH_ARU_RD_FIFO F2A0_CH_ARU_RD_FIFO[8]; /** \brief 0, F2A Read Channel Address Register */
    Ifx_GTM_PSM_F2A0_CH_STR_CFG F2A0_CH_STR_CFG[8]; /** \brief 20, F2A Stream Configuration Register */
    Ifx_GTM_PSM_F2A0_ENABLE F2A0_ENABLE;    /** \brief 40, F2A0 Stream Activation Register */
    unsigned char reserved_44[60];          /** \brief 44 */
    Ifx_GTM_PSM_AFD0_CH_BUF AFD0_CH_BUF[8]; /** \brief 80, PSM Fifo channel buffer objects */
    unsigned char reserved_100[768];        /** \brief 100 */
    Ifx_GTM_PSM_FIFO0_CH FIFO0_CH[8];       /** \brief 400, PSM Fifo 0 channel objects */
    Ifx_GTM_PSM_FIFO0_CH_PTR FIFO0_CH_PTR[8];   /** \brief 500, PSM Fifo 0 channel pointer objects */
    Ifx_GTM_PSM_FIFO0_CH_IRQ FIFO0_CH_IRQ[8];   /** \brief 600, PSM Fifo 0 channel interrupt objects */
} Ifx_GTM_PSM;

/** SPE objects */
typedef volatile struct
{
    Ifx_GTM_SPE_CTRL_STAT CTRL_STAT;        /** \brief 0, SPE Control Status Register */
    Ifx_GTM_SPE_PAT PAT;                    /** \brief 4, SPE Input Pattern Definition Register */
    Ifx_GTM_SPE_OUT_PAT OUT_PAT[8];         /** \brief 8, SPE Output Definition Register r */
    Ifx_GTM_SPE_OUT_CTRL OUT_CTRL;          /** \brief 28, SPE Output Control Register */
    Ifx_GTM_SPE_IRQ_NOTIFY IRQ_NOTIFY;      /** \brief 2C, SPE Interrupt Notification Register */
    Ifx_GTM_SPE_IRQ_EN IRQ_EN;              /** \brief 30, SPE Interrupt Enable Register */
    Ifx_GTM_SPE_IRQ_FORCINT IRQ_FORCINT;    /** \brief 34, SPE Interrupt Generation by Software */
    Ifx_GTM_SPE_IRQ_MODE IRQ_MODE;          /** \brief 38, SPE IRQ Mode Configuration Register */
    unsigned char reserved_3C[68];          /** \brief 3C */
} Ifx_GTM_SPE;

/** TBU object */
typedef volatile struct
{
    Ifx_GTM_TBU_CHEN CHEN;                  /** \brief 0, TBU Global Channel Enable Register */
    Ifx_GTM_TBU_CH0_CTRL CH0_CTRL;          /** \brief 4, TBU Channel 0 Control Register */
    Ifx_GTM_TBU_CH0_BASE CH0_BASE;          /** \brief 8, TBU Channel 0 Base Register */
    Ifx_GTM_TBU_CH1_CTRL CH1_CTRL;          /** \brief C, TBU Channel 1 Control Register */
    Ifx_GTM_TBU_CH1_BASE CH1_BASE;          /** \brief 10, TBU Channel 1 Base Register */
    Ifx_GTM_TBU_CH2_CTRL CH2_CTRL;          /** \brief 14, TBU Channel 2 Control Register */
    Ifx_GTM_TBU_CH2_BASE CH2_BASE;          /** \brief 18, TBU Channel 2 Base Register */
} Ifx_GTM_TBU;

/** TIM objects */
typedef volatile struct
{
    Ifx_GTM_TIM_CH CH[8];                   /** \brief 0, TIM channel objects */
    Ifx_GTM_TIM_RST RST;                    /** \brief 400, TIM Global Software Reset Register */
    unsigned char reserved_404[1020];       /** \brief 404 */
} Ifx_GTM_TIM;

/** TOM objects */
typedef volatile struct
{
    Ifx_GTM_TOM_TGC TGC[2];                 /** \brief 0, TOM TGC objects */
    Ifx_GTM_TOM_CH CH[15];                  /** \brief 80, TOM channel objects */
    Ifx_GTM_TOM_CH15 CH15;                  /** \brief 440, TOM channel objects */
    unsigned char reserved_46C[916];        /** \brief 46C */
} Ifx_GTM_TOM;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** GTM object */
typedef volatile struct
{
    Ifx_GTM_REV REV;                        /** \brief 0, GTM Version Control Register */
    Ifx_GTM_RST RST;                        /** \brief 4, GTM Global Reset Register */
    Ifx_GTM_CTRL CTRL;                      /** \brief 8, GTM Global Control Register */
    Ifx_GTM_AEI_ADDR_XPT AEI_ADDR_XPT;      /** \brief C, GTM AEI Timeout Exception Address Register */
    Ifx_GTM_IRQ_NOTIFY IRQ_NOTIFY;          /** \brief 10, GTM Interrupt Notification Register */
    Ifx_GTM_IRQ_EN IRQ_EN;                  /** \brief 14, GTM Interrupt Enable Register */
    Ifx_GTM_IRQ_FORCINT IRQ_FORCINT;        /** \brief 18, GTM Software Interrupt Generation Register */
    Ifx_GTM_IRQ_MODE IRQ_MODE;              /** \brief 1C, GTM Top Level Interrupts Mode Selection */
    unsigned char reserved_20[16];          /** \brief 20 */
    Ifx_GTM_BRIDGE_MODE BRIDGE_MODE;        /** \brief 30, GTM to SPB BRIDGE MODE */
    Ifx_GTM_BRIDGE_PTR1 BRIDGE_PTR1;        /** \brief 34, GTM to SPB BRIDGE PTR1 */
    Ifx_GTM_BRIDGE_PTR2 BRIDGE_PTR2;        /** \brief 38, GTM to SPB BRIDGE PTR2 */
    unsigned char reserved_3C[4];           /** \brief 3C */
    Ifx_GTM_MAP_CTRL MAP_CTRL;              /** \brief 40, MAP Control Register */
    unsigned char reserved_44[60];          /** \brief 44 */
    Ifx_GTM_MCFG_CTRL MCFG_CTRL;            /** \brief 80, Memory Layout Configuration Register */
    unsigned char reserved_84[124];         /** \brief 84 */
    Ifx_GTM_TBU TBU;                        /** \brief 100, TBU object */
    unsigned char reserved_11C[100];        /** \brief 11C */
    Ifx_GTM_MON_STATUS MON_STATUS;          /** \brief 180, Monitor Status Register */
    Ifx_GTM_MON_ACTIVITY_0 MON_ACTIVITY_0;  /** \brief 184, Monitor Activity Register 0 */
    unsigned char reserved_188[120];        /** \brief 188 */
    Ifx_GTM_CMP CMP;                        /** \brief 200, CMP object */
    unsigned char reserved_214[108];        /** \brief 214 */
    Ifx_GTM_ARU ARU;                        /** \brief 280, ARU object */
    unsigned char reserved_2B4[76];         /** \brief 2B4 */
    Ifx_GTM_CMU CMU;                        /** \brief 300, CMU object */
    unsigned char reserved_344[188];        /** \brief 344 */
    Ifx_GTM_BRC BRC;                        /** \brief 400, BRC object */
    unsigned char reserved_474[396];        /** \brief 474 */
    Ifx_GTM_ICM ICM;                        /** \brief 600, ICM object */
    unsigned char reserved_62C[468];        /** \brief 62C */
    Ifx_GTM_SPE SPE[2];                     /** \brief 800, SPE objects */
    unsigned char reserved_900[1792];       /** \brief 900 */
    Ifx_GTM_TIM TIM[4];                     /** \brief 1000, TIM objects */
    unsigned char reserved_3000[20480];     /** \brief 3000 */
    Ifx_GTM_TOM TOM[3];                     /** \brief 8000, TOM objects */
    unsigned char reserved_9800[14336];     /** \brief 9800 */
    Ifx_GTM_ATOM ATOM[5];                   /** \brief D000, ATOM objects */
    unsigned char reserved_F800[34816];     /** \brief F800 */
    Ifx_GTM_PSM PSM;                        /** \brief 18000, PSM object */
    unsigned char reserved_18700[63744];    /** \brief 18700 */
    Ifx_GTM_DPLL DPLL;                      /** \brief 28000, DPLL object */
    unsigned char reserved_283C0[31808];    /** \brief 283C0 */
    Ifx_GTM_MCS MCS[4];                     /** \brief 30000, MCS objects */
    unsigned char reserved_70000[195840];   /** \brief 70000 */
    Ifx_GTM_CLC CLC;                        /** \brief 9FD00, Clock Control Register */
    unsigned char reserved_9FD04[12];       /** \brief 9FD04 */
    Ifx_GTM_TIMINSEL TIMINSEL[4];           /** \brief 9FD10, TIM  Input Select Register */
    unsigned char reserved_9FD20[16];       /** \brief 9FD20 */
    Ifx_GTM_TOUTSEL TOUTSEL[15];            /** \brief 9FD30, Timer Output Select Register */
    unsigned char reserved_9FD6C[20];       /** \brief 9FD6C */
    Ifx_GTM_DSADCINSEL1 DSADCINSEL1;        /** \brief 9FD80, DSADC Input Select 1Register */
    Ifx_GTM_DSADCINSEL2 DSADCINSEL2;        /** \brief 9FD84, DSADC Input Select 2Register */
    Ifx_GTM_DSADCOUTSEL00 DSADCOUTSEL00;    /** \brief 9FD88, DSADC Output Select 0 Register */
    unsigned char reserved_9FD8C[4];        /** \brief 9FD8C */
    Ifx_GTM_DSADCOUTSEL10 DSADCOUTSEL10;    /** \brief 9FD90, DSADC Output Select 1 Register */
    unsigned char reserved_9FD94[12];       /** \brief 9FD94 */
    Ifx_GTM_TTCANOUTSEL TTCANOUTSEL;        /** \brief 9FDA0, TTCAN Output Select Register */
    Ifx_GTM_PSI5OUTSEL0 PSI5OUTSEL0;        /** \brief 9FDA4, PSI5 Output Select 0 Register */
    unsigned char reserved_9FDA8[8];        /** \brief 9FDA8 */
    Ifx_GTM_ADCTRIG0OUT0 ADCTRIG0OUT0;      /** \brief 9FDB0, ADC Trigger 0 Output Select 0 Register */
    Ifx_GTM_ADCTRIG0OUT1 ADCTRIG0OUT1;      /** \brief 9FDB4, ADC Trigger 0 Output Select 1 Register */
    Ifx_GTM_ADCTRIG1OUT0 ADCTRIG1OUT0;      /** \brief 9FDB8, ADC Trigger 1 Output Select 0 Register */
    Ifx_GTM_ADCTRIG1OUT1 ADCTRIG1OUT1;      /** \brief 9FDBC, ADC Trigger 1 Output Select 1 Register */
    unsigned char reserved_9FDC0[16];       /** \brief 9FDC0 */
    Ifx_GTM_OTSS OTSS;                      /** \brief 9FDD0, OCDS Trigger Set Select Register */
    Ifx_GTM_OTSC0 OTSC0;                    /** \brief 9FDD4, OCDS Trigger Set Control 0 Register */
    Ifx_GTM_OTSC1 OTSC1;                    /** \brief 9FDD8, OCDS Trigger Set Control 1 Register */
    Ifx_GTM_ODA ODA;                        /** \brief 9FDDC, OCDS Debug Access Register */
    unsigned char reserved_9FDE0[8];        /** \brief 9FDE0 */
    Ifx_GTM_OCS OCS;                        /** \brief 9FDE8, OCDS Control and Status */
    Ifx_GTM_KRSTCLR KRSTCLR;                /** \brief 9FDEC, Kernel Reset Status Clear Register */
    Ifx_GTM_KRST1 KRST1;                    /** \brief 9FDF0, Kernel Reset Register 1 */
    Ifx_GTM_KRST0 KRST0;                    /** \brief 9FDF4, Kernel Reset Register 0 */
    Ifx_GTM_ACCEN1 ACCEN1;                  /** \brief 9FDF8, Access Enable Register 1 */
    Ifx_GTM_ACCEN0 ACCEN0;                  /** \brief 9FDFC, Access Enable Register 0 */
    unsigned char reserved_9FE00[256];      /** \brief 9FE00 */
    Ifx_GTM_MSCSET MSCSET[4];               /** \brief 9FF00, MSC objects */
    unsigned char reserved_9FF40[32];       /** \brief 9FF40 */
    Ifx_GTM_MSCIN MSCIN[2];                 /** \brief 9FF60, MSC input */
    unsigned char reserved_9FF70[144];      /** \brief 9FF70 */
} Ifx_GTM;
/******************************************************************************/
#endif /* IFXGTM_REGDEF_H */

