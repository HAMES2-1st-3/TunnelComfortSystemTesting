/**
 * \file IfxScu_regdef.h
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
#ifndef IFXSCU_REGDEF_H
#define IFXSCU_REGDEF_H
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
} Ifx_SCU_ACCEN0_Bits;

/** Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_SCU_ACCEN1_Bits;

/** Application Reset Disable Register */
typedef struct
{
    unsigned int STM0DIS: 1;                /** \brief [0:0] STM0 Disable Reset (rw) */
    unsigned int STM1DIS: 1;                /** \brief [1:1] STM1 Disable Reset (rw) */
    unsigned int STM2DIS: 1;                /** \brief [2:2] STM2 Disable Reset (rw) */
    unsigned int reserved_3: 29;
} Ifx_SCU_ARSTDIS_Bits;

/** CCU Clock Control Register 0 */
typedef struct
{
    unsigned int reserved_0: 8;
    unsigned int SRIDIV: 4;                 /** \brief [11:8] SRI Divider Reload Value (rw) */
    unsigned int reserved_12: 4;
    unsigned int SPBDIV: 4;                 /** \brief [19:16] SPB Divider Reload Value (rw) */
    unsigned int reserved_20: 4;
    unsigned int FSIDIV: 4;                 /** \brief [27:24] FSI Divider Reload Value (rw) */
    unsigned int CLKSEL: 2;                 /** \brief [29:28] Clock Selection (rh) */
    unsigned int UP: 1;                     /** \brief [30:30] Update Request (rw) */
    unsigned int LCK: 1;                    /** \brief [31:31] Lock Status (rh) */
} Ifx_SCU_CCUCON0_Bits;

/** CCU Clock Control Register 1 */
typedef struct
{
    unsigned int CPU0DIV: 4;                /** \brief [3:0] CPU0 Divider Reload Value (rw) */
    unsigned int REFCLKDIV: 4;              /** \brief [7:4] Reference Clock for MCDS Divider Reload Value (rw) */
    unsigned int reserved_8: 12;
    unsigned int ERAYDIV: 4;                /** \brief [23:20] ERAY Divider Reload Value (rw) */
    unsigned int reserved_24: 4;
    unsigned int INSEL: 2;                  /** \brief [29:28] Input Selection (rw) */
    unsigned int UP: 1;                     /** \brief [30:30] Update Request (rw) */
    unsigned int LCK: 1;                    /** \brief [31:31] Lock Status (rh) */
} Ifx_SCU_CCUCON1_Bits;

/** CCU Clock Control Register 2 */
typedef struct
{
    unsigned int BBBDIV: 4;                 /** \brief [3:0] BBB Divider Reload Value (rw) */
    unsigned int REFCLKDIV: 4;              /** \brief [7:4] Reference Clock for MCDS Divider Reload Value (rw) */
    unsigned int reserved_8: 22;
    unsigned int UP: 1;                     /** \brief [30:30] Update Request (rw) */
    unsigned int LCK: 1;                    /** \brief [31:31] Lock Status (rh) */
} Ifx_SCU_CCUCON2_Bits;

/** Chip Identification Register */
typedef struct
{
    unsigned int CHREV: 8;                  /** \brief [7:0] Chip Revision Number (r) */
    unsigned int CHID: 8;                   /** \brief [15:8] Chip Identification Number (rw) */
    unsigned int EEA: 1;                    /** \brief [16:16] Emulation Extension Available (rh) */
    unsigned int UCODE: 7;                  /** \brief [23:17] µCode Version (rw) */
    unsigned int FSIZE: 4;                  /** \brief [27:24] Program Flash Size (rw) */
    unsigned int SP: 2;                     /** \brief [29:28] Speed (rw) */
    unsigned int reserved_30: 2;
} Ifx_SCU_CHIPID_Bits;

/** Die Temperature Sensor Control Register */
typedef struct
{
    unsigned int PWD: 1;                    /** \brief [0:0] Sensor Power Down (rw) */
    unsigned int START: 1;                  /** \brief [1:1] Sensor Measurement Start (w) */
    unsigned int reserved_2: 2;
    unsigned int CAL: 20;                   /** \brief [23:4] Calibration Value (rw) */
    unsigned int reserved_24: 7;
    unsigned int LCK: 1;                    /** \brief [31:31] Lock (rw) */
} Ifx_SCU_DTSCON_Bits;

/** Die Temperature Sensor Limit Register */
typedef struct
{
    unsigned int LOWER: 10;                 /** \brief [9:0] Lower Limit (rwh) */
    unsigned int reserved_10: 5;
    unsigned int LLU: 1;                    /** \brief [15:15] Lower Limit Underflow (rwh) */
    unsigned int UPPER: 10;                 /** \brief [25:16] Upper Limit (rwh) */
    unsigned int reserved_26: 4;
    unsigned int LCK: 1;                    /** \brief [30:30] Lock (rw) */
    unsigned int UOF: 1;                    /** \brief [31:31] Upper Limit Underflow (rh) */
} Ifx_SCU_DTSLIM_Bits;

/** Die Temperature Sensor Status Register */
typedef struct
{
    unsigned int RESULT: 10;                /** \brief [9:0] Result of the DTS Measurement (rh) */
    unsigned int reserved_10: 4;
    unsigned int RDY: 1;                    /** \brief [14:14] Sensor Ready Status (rh) */
    unsigned int BUSY: 1;                   /** \brief [15:15] Sensor Busy Status (rh) */
    unsigned int reserved_16: 16;
} Ifx_SCU_DTSSTAT_Bits;

/** External Input Channel Register */
typedef struct
{
    unsigned int reserved_0: 4;
    unsigned int EXIS0: 3;                  /** \brief [6:4] External Input Selection 0 (rw) */
    unsigned int reserved_7: 1;
    unsigned int FEN0: 1;                   /** \brief [8:8] Falling Edge Enable 0 (rw) */
    unsigned int REN0: 1;                   /** \brief [9:9] Rising Edge Enable 0 (rw) */
    unsigned int LDEN0: 1;                  /** \brief [10:10] Level Detection Enable 0 (rw) */
    unsigned int EIEN0: 1;                  /** \brief [11:11] External Input Enable 0 (rw) */
    unsigned int INP0: 3;                   /** \brief [14:12] Input Node Pointer (rw) */
    unsigned int reserved_15: 5;
    unsigned int EXIS1: 3;                  /** \brief [22:20] External Input Selection 1 (rw) */
    unsigned int reserved_23: 1;
    unsigned int FEN1: 1;                   /** \brief [24:24] Falling Edge Enable 1 (rw) */
    unsigned int REN1: 1;                   /** \brief [25:25] Rising Edge Enable 1 (rw) */
    unsigned int LDEN1: 1;                  /** \brief [26:26] Level Detection Enable 1 (rw) */
    unsigned int EIEN1: 1;                  /** \brief [27:27] External Input Enable 1 (rw) */
    unsigned int INP1: 3;                   /** \brief [30:28] Input Node Pointer (rw) */
    unsigned int reserved_31: 1;
} Ifx_SCU_EICR_Bits;

/** External Input Flag Register */
typedef struct
{
    unsigned int INTF0: 1;                  /** \brief [0:0] External Event Flag of Channel x (rh) */
    unsigned int INTF1: 1;                  /** \brief [1:1] External Event Flag of Channel x (rh) */
    unsigned int INTF2: 1;                  /** \brief [2:2] External Event Flag of Channel x (rh) */
    unsigned int INTF3: 1;                  /** \brief [3:3] External Event Flag of Channel x (rh) */
    unsigned int INTF4: 1;                  /** \brief [4:4] External Event Flag of Channel x (rh) */
    unsigned int INTF5: 1;                  /** \brief [5:5] External Event Flag of Channel x (rh) */
    unsigned int INTF6: 1;                  /** \brief [6:6] External Event Flag of Channel x (rh) */
    unsigned int INTF7: 1;                  /** \brief [7:7] External Event Flag of Channel x (rh) */
    unsigned int reserved_8: 24;
} Ifx_SCU_EIFR_Bits;

/** Emergency Stop Register */
typedef struct
{
    unsigned int POL: 1;                    /** \brief [0:0] Input Polarity (rw) */
    unsigned int MODE: 1;                   /** \brief [1:1] Mode Selection (rw) */
    unsigned int ENON: 1;                   /** \brief [2:2] Enable ON (rw) */
    unsigned int PSEL: 1;                   /** \brief [3:3] PORT Select (rw) */
    unsigned int reserved_4: 12;
    unsigned int EMSF: 1;                   /** \brief [16:16] Emergency Stop Flag (rh) */
    unsigned int SEMSF: 1;                  /** \brief [17:17] SMU Emergency Stop Flag (rh) */
    unsigned int reserved_18: 6;
    unsigned int EMSFM: 2;                  /** \brief [25:24] Emergency Stop Flag Modification (w) */
    unsigned int SEMSFM: 2;                 /** \brief [27:26] SMU Emergency Stop Flag Modification (w) */
    unsigned int reserved_28: 4;
} Ifx_SCU_EMSR_Bits;

/** ESR Input Configuration Register */
typedef struct
{
    unsigned int reserved_0: 4;
    unsigned int DFEN: 1;                   /** \brief [4:4] Digital Filter Enable (rw) */
    unsigned int reserved_5: 2;
    unsigned int EDCON: 2;                  /** \brief [8:7] Edge Detection Control (rw) */
    unsigned int reserved_9: 22;
    unsigned int LCK: 1;                    /** \brief [31:31] Lock Status (rh) */
} Ifx_SCU_ESRCFG_Bits;

/** ESR Output Configuration Register */
typedef struct
{
    unsigned int ARI: 1;                    /** \brief [0:0] Application Reset Indicator (rh) */
    unsigned int ARC: 1;                    /** \brief [1:1] Application Reset Indicator Clear (w) */
    unsigned int reserved_2: 30;
} Ifx_SCU_ESROCFG_Bits;

/** EVR13 Control Register */
typedef struct
{
    unsigned int reserved_0: 28;
    unsigned int EVR13OFF: 1;               /** \brief [28:28] EVR13 Regulator Enable (rw) */
    unsigned int BPEVR13OFF: 1;             /** \brief [29:29] Bit Protection EVR13OFF (w) */
    unsigned int reserved_30: 1;
    unsigned int LCK: 1;                    /** \brief [31:31] Lock Status (rh) */
} Ifx_SCU_EVR13CON_Bits;

/** EVR33 Control Register */
typedef struct
{
    unsigned int reserved_0: 28;
    unsigned int EVR33OFF: 1;               /** \brief [28:28] EVR33 Regulator Enable (rw) */
    unsigned int BPEVR33OFF: 1;             /** \brief [29:29] Bit Protection EVR33OFF (w) */
    unsigned int reserved_30: 1;
    unsigned int LCK: 1;                    /** \brief [31:31] Lock Status (rh) */
} Ifx_SCU_EVR33CON_Bits;

/** EVR ADC Status Register */
typedef struct
{
    unsigned int ADC13V: 8;                 /** \brief [7:0] ADC 1.3V Conversion Result (rh) */
    unsigned int ADC33V: 8;                 /** \brief [15:8] ADC 3.3V Conversion Result (rh) */
    unsigned int ADCSWDV: 8;                /** \brief [23:16] ADC External Supply Conversion Result (rh) */
    unsigned int reserved_24: 7;
    unsigned int VAL: 1;                    /** \brief [31:31] Valid Status (rh) */
} Ifx_SCU_EVRADCSTAT_Bits;

/** EVR Monitor Control Register */
typedef struct
{
    unsigned int EVR13OVMOD: 2;             /** \brief [1:0] 1.3V Regulator Over-voltage monitoring mode (rw) */
    unsigned int reserved_2: 2;
    unsigned int EVR13UVMOD: 2;             /** \brief [5:4] 1.3V Regulator Under-voltage monitoring mode (rw) */
    unsigned int reserved_6: 2;
    unsigned int EVR33OVMOD: 2;             /** \brief [9:8] 3.3V Regulator Over-voltage monitoring mode (rw) */
    unsigned int reserved_10: 2;
    unsigned int EVR33UVMOD: 2;             /** \brief [13:12] 3.3V Regulator Under-voltage monitoring mode (rw) */
    unsigned int reserved_14: 2;
    unsigned int SWDOVMOD: 2;               /** \brief [17:16] Supply monitor (SWD) Over-voltage monitoring mode (rw) */
    unsigned int reserved_18: 2;
    unsigned int SWDUVMOD: 2;               /** \brief [21:20] Supply monitor (SWD) Under-voltage monitoring mode (rw) */
    unsigned int reserved_22: 8;
    unsigned int SAFELCK: 1;                /** \brief [30:30] HSM Lock (rwh) */
    unsigned int reserved_31: 1;
} Ifx_SCU_EVRMONCTRL_Bits;

/** EVR Over-voltage Configuration Register */
typedef struct
{
    unsigned int EVR13OVVAL: 8;             /** \brief [7:0] 1.3V Regulator Over-voltage threshold (rw) */
    unsigned int EVR33OVVAL: 8;             /** \brief [15:8] 3.3V Regulator Over-voltage threshold (rw) */
    unsigned int SWDOVVAL: 8;               /** \brief [23:16] Supply monitor (SWD) Over-voltage threshold value (rw) */
    unsigned int reserved_24: 6;
    unsigned int SAFELCK: 1;                /** \brief [30:30] HSM Lock (rwh) */
    unsigned int LCK: 1;                    /** \brief [31:31] Lock Status (rh) */
} Ifx_SCU_EVROVMON_Bits;

/** EVR Hard Reset Control Register */
typedef struct
{
    unsigned int reserved_0: 26;
    unsigned int RST33OFF: 1;               /** \brief [26:26] Hard Reset EVR33 Enable (rw) */
    unsigned int BPRST33OFF: 1;             /** \brief [27:27] Bit Protection RST33OFF (w) */
    unsigned int RSTSWDOFF: 1;              /** \brief [28:28] Hard Reset EVR Supply Monitor Enable (rw) */
    unsigned int BPRSTSWDOFF: 1;            /** \brief [29:29] Bit Protection RSTSWDOFF (w) */
    unsigned int SAFELCK: 1;                /** \brief [30:30] HSM Lock (rwh) */
    unsigned int LCK: 1;                    /** \brief [31:31] Lock Status (rh) */
} Ifx_SCU_EVRRSTCON_Bits;

/** EVR13 SD Control Register 1 */
typedef struct
{
    unsigned int SDFREQSPRD: 16;            /** \brief [15:0] Frequency Spread Threshold (freq_spread_thr_i) (rw) */
    unsigned int SDFREQ: 8;                 /** \brief [23:16] Regulator Switching Frequency (os_factor_i) (rw) */
    unsigned int SDSTEP: 4;                 /** \brief [27:24] Droop Voltage Step (sd_droop_step_i) (rw) */
    unsigned int reserved_28: 2;
    unsigned int SDSAMPLE: 1;               /** \brief [30:30] ADC Sampling Scheme (sd_sample_time_i) (rw) */
    unsigned int LCK: 1;                    /** \brief [31:31] Lock Status (rh) */
} Ifx_SCU_EVRSDCTRL1_Bits;

/** EVR Status Flag Register */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int OV13: 1;                   /** \brief [1:1] EVR13 Regulator Over-voltage event flag (rh) */
    unsigned int reserved_2: 1;
    unsigned int OV33: 1;                   /** \brief [3:3] EVR33 Regulator Over-voltage event flag (rh) */
    unsigned int OVSWD: 1;                  /** \brief [4:4] Supply Monitor (SWD) Over-voltage event flag (rh) */
    unsigned int UV13: 1;                   /** \brief [5:5] EVR13 Regulator Under-voltage event flag (rh) */
    unsigned int UV33: 1;                   /** \brief [6:6] EVR33 Regulator Under-voltage event flag (rh) */
    unsigned int UVSWD: 1;                  /** \brief [7:7] Supply Monitor (SWD) Under-voltage event flag (rh) */
    unsigned int EXTPASS13: 1;              /** \brief [8:8] External Pass Device for EVR13 (rh) */
    unsigned int EXTPASS33: 1;              /** \brief [9:9] External Pass Device for EVR33 (rh) */
    unsigned int BGPROK: 1;                 /** \brief [10:10] Primary Bandgap status (rh) */
    unsigned int STBYREG: 1;                /** \brief [11:11] Standby Pre-Regulator Under-voltage event flag (rh) */
    unsigned int reserved_12: 20;
} Ifx_SCU_EVRSTAT_Bits;

/** EVR Under-voltage Configuration Register */
typedef struct
{
    unsigned int EVR13UVVAL: 8;             /** \brief [7:0] 1.3V Regulator Under-voltage threshold (rw) */
    unsigned int EVR33UVVAL: 8;             /** \brief [15:8] 3.3V Regulator Under-voltage threshold (rw) */
    unsigned int SWDUVVAL: 8;               /** \brief [23:16] Supply monitor (SWD) Under-voltage threshold value (rw) */
    unsigned int reserved_24: 6;
    unsigned int SAFELCK: 1;                /** \brief [30:30] HSM Lock (rwh) */
    unsigned int LCK: 1;                    /** \brief [31:31] Lock Status (rh) */
} Ifx_SCU_EVRUVMON_Bits;

/** External Clock Control Register */
typedef struct
{
    unsigned int EN0: 1;                    /** \brief [0:0] External Clock Enable for EXTCLK0 (rw) */
    unsigned int reserved_1: 1;
    unsigned int SEL0: 4;                   /** \brief [5:2] External Clock Select for EXTCLK0 (rw) */
    unsigned int reserved_6: 10;
    unsigned int EN1: 1;                    /** \brief [16:16] External Clock Enable for EXTCLK1 (rw) */
    unsigned int NSEL: 1;                   /** \brief [17:17] Negation Selection (rw) */
    unsigned int SEL1: 4;                   /** \brief [21:18] External Clock Select for EXTCLK1 (rw) */
    unsigned int reserved_22: 2;
    unsigned int DIV1: 8;                   /** \brief [31:24] External Clock Divider for EXTCLK1 (rw) */
} Ifx_SCU_EXTCON_Bits;

/** Fractional Divider Register */
typedef struct
{
    unsigned int STEP: 10;                  /** \brief [9:0] Step Value (rw) */
    unsigned int reserved_10: 4;
    unsigned int DM: 2;                     /** \brief [15:14] Divider Mode (rw) */
    unsigned int RESULT: 10;                /** \brief [25:16] Result Value (rh) */
    unsigned int reserved_26: 5;
    unsigned int DISCLK: 1;                 /** \brief [31:31] Disable Clock (rwh) */
} Ifx_SCU_FDR_Bits;

/** Flag Modification Register */
typedef struct
{
    unsigned int FS0: 1;                    /** \brief [0:0] Set Flag INTFx for Channel x (w) */
    unsigned int FS1: 1;                    /** \brief [1:1] Set Flag INTFx for Channel x (w) */
    unsigned int FS2: 1;                    /** \brief [2:2] Set Flag INTFx for Channel x (w) */
    unsigned int FS3: 1;                    /** \brief [3:3] Set Flag INTFx for Channel x (w) */
    unsigned int FS4: 1;                    /** \brief [4:4] Set Flag INTFx for Channel x (w) */
    unsigned int FS5: 1;                    /** \brief [5:5] Set Flag INTFx for Channel x (w) */
    unsigned int FS6: 1;                    /** \brief [6:6] Set Flag INTFx for Channel x (w) */
    unsigned int FS7: 1;                    /** \brief [7:7] Set Flag INTFx for Channel x (w) */
    unsigned int reserved_8: 8;
    unsigned int FC0: 1;                    /** \brief [16:16] Clear Flag INTFx for Channel x (w) */
    unsigned int FC1: 1;                    /** \brief [17:17] Clear Flag INTFx for Channel x (w) */
    unsigned int FC2: 1;                    /** \brief [18:18] Clear Flag INTFx for Channel x (w) */
    unsigned int FC3: 1;                    /** \brief [19:19] Clear Flag INTFx for Channel x (w) */
    unsigned int FC4: 1;                    /** \brief [20:20] Clear Flag INTFx for Channel x (w) */
    unsigned int FC5: 1;                    /** \brief [21:21] Clear Flag INTFx for Channel x (w) */
    unsigned int FC6: 1;                    /** \brief [22:22] Clear Flag INTFx for Channel x (w) */
    unsigned int FC7: 1;                    /** \brief [23:23] Clear Flag INTFx for Channel x (w) */
    unsigned int reserved_24: 8;
} Ifx_SCU_FMR_Bits;

/** Identification Register */
typedef struct
{
    unsigned int MODREV: 8;                 /** \brief [7:0] Module Revision Number (r) */
    unsigned int MODTYPE: 8;                /** \brief [15:8] Module Type (r) */
    unsigned int MODNUMBER: 16;             /** \brief [31:16] Module Number Value (r) */
} Ifx_SCU_ID_Bits;

/** Flag Gating Register */
typedef struct
{
    unsigned int IPEN00: 1;                 /** \brief [0:0] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN01: 1;                 /** \brief [1:1] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN02: 1;                 /** \brief [2:2] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN03: 1;                 /** \brief [3:3] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN04: 1;                 /** \brief [4:4] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN05: 1;                 /** \brief [5:5] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN06: 1;                 /** \brief [6:6] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN07: 1;                 /** \brief [7:7] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int reserved_8: 5;
    unsigned int GEEN0: 1;                  /** \brief [13:13] Generate Event Enable 0 (rw) */
    unsigned int IGP0: 2;                   /** \brief [15:14] Interrupt Gating Pattern 0 (rw) */
    unsigned int IPEN10: 1;                 /** \brief [16:16] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN11: 1;                 /** \brief [17:17] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN12: 1;                 /** \brief [18:18] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN13: 1;                 /** \brief [19:19] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN14: 1;                 /** \brief [20:20] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN15: 1;                 /** \brief [21:21] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN16: 1;                 /** \brief [22:22] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN17: 1;                 /** \brief [23:23] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int reserved_24: 5;
    unsigned int GEEN1: 1;                  /** \brief [29:29] Generate Event Enable 1 (rw) */
    unsigned int IGP1: 2;                   /** \brief [31:30] Interrupt Gating Pattern 1 (rw) */
} Ifx_SCU_IGCR_Bits;

/** ESR Input Register */
typedef struct
{
    unsigned int P0: 1;                     /** \brief [0:0] Input Bit x (rh) */
    unsigned int P1: 1;                     /** \brief [1:1] Input Bit x (rh) */
    unsigned int reserved_2: 30;
} Ifx_SCU_IN_Bits;

/** Input/Output Control Register */
typedef struct
{
    unsigned int reserved_0: 4;
    unsigned int PC0: 4;                    /** \brief [7:4] Control for ESR0 Pin (rw) */
    unsigned int reserved_8: 4;
    unsigned int PC1: 4;                    /** \brief [15:12] Control for ESR1 Pin (rw) */
    unsigned int reserved_16: 16;
} Ifx_SCU_IOCR_Bits;

/** Logic BIST Control 0 Register */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_SCU_LBISTCTRL0_Bits;

/** Logic BIST Control 1 Register */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_SCU_LBISTCTRL1_Bits;

/** LCL CPU Control Register */
typedef struct
{
    unsigned int ST: 1;                     /** \brief [0:0] Self-Test Mode Status (rh) */
    unsigned int reserved_1: 14;
    unsigned int STEN: 1;                   /** \brief [15:15] Lockstep Self-Test Enable (rw) */
    unsigned int LS: 1;                     /** \brief [16:16] Lockstep Mode Status (rh) */
    unsigned int DS: 1;                     /** \brief [17:17] Delay Status (rh) */
    unsigned int reserved_18: 12;
    unsigned int DEL: 1;                    /** \brief [30:30] Enable Delay (rw) */
    unsigned int LSEN: 1;                   /** \brief [31:31] Lockstep Enable (rw) */
} Ifx_SCU_LCLCON_Bits;

/** Manufacturer Identification Register */
typedef struct
{
    unsigned int DEPT: 5;                   /** \brief [4:0] Department Identification Number (r) */
    unsigned int MANUF: 11;                 /** \brief [15:5] Manufacturer Identification Number (r) */
    unsigned int reserved_16: 16;
} Ifx_SCU_MANID_Bits;

/** ESR Output Modification Register */
typedef struct
{
    unsigned int PS0: 1;                    /** \brief [0:0] ESRx Pin Set Bit x (w) */
    unsigned int PS1: 1;                    /** \brief [1:1] ESRx Pin Set Bit x (w) */
    unsigned int reserved_2: 14;
    unsigned int PCL0: 1;                   /** \brief [16:16] ESRx Pin Clear Bit x (w) */
    unsigned int PCL1: 1;                   /** \brief [17:17] ESRx Pin Clear Bit x (w) */
    unsigned int reserved_18: 14;
} Ifx_SCU_OMR_Bits;

/** OSC Control Register */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int PLLLV: 1;                  /** \brief [1:1] Oscillator for PLL Valid Low Status Bit (rh) */
    unsigned int OSCRES: 1;                 /** \brief [2:2] Oscillator Watchdog Reset (w) */
    unsigned int GAINSEL: 2;                /** \brief [4:3] Oscillator Gain Selection (rw) */
    unsigned int MODE: 2;                   /** \brief [6:5] Oscillator Mode (rw) */
    unsigned int SHBY: 1;                   /** \brief [7:7] Shaper Bypass (rw) */
    unsigned int PLLHV: 1;                  /** \brief [8:8] Oscillator for PLL Valid High Status Bit (rh) */
    unsigned int reserved_9: 1;
    unsigned int X1D: 1;                    /** \brief [10:10] XTAL1 Data Value (rh) */
    unsigned int X1DEN: 1;                  /** \brief [11:11] XTAL1 Data Enable (rw) */
    unsigned int reserved_12: 4;
    unsigned int OSCVAL: 5;                 /** \brief [20:16] OSC Frequency Value (rw) */
    unsigned int reserved_21: 2;
    unsigned int APREN: 1;                  /** \brief [23:23] Amplitude Regulation Enable (rw) */
    unsigned int CAP0EN: 1;                 /** \brief [24:24] Capacitance 0 Enable (rw) */
    unsigned int CAP1EN: 1;                 /** \brief [25:25] Capacitance 1 Enable (rw) */
    unsigned int CAP2EN: 1;                 /** \brief [26:26] Capacitance 2 Enable (rw) */
    unsigned int CAP3EN: 1;                 /** \brief [27:27] Capacitance 3 Enable (rw) */
    unsigned int reserved_28: 4;
} Ifx_SCU_OSCCON_Bits;

/** ESR Output Register */
typedef struct
{
    unsigned int P0: 1;                     /** \brief [0:0] Output Bit x (rwh) */
    unsigned int P1: 1;                     /** \brief [1:1] Output Bit x (rwh) */
    unsigned int reserved_2: 30;
} Ifx_SCU_OUT_Bits;

/** Overlay Control Register */
typedef struct
{
    unsigned int CSEL0: 1;                  /** \brief [0:0] CPU Select x (w) */
    unsigned int CSEL1: 1;                  /** \brief [1:1] CPU Select x (w) */
    unsigned int CSEL2: 1;                  /** \brief [2:2] CPU Select x (w) */
    unsigned int reserved_3: 13;
    unsigned int OVSTRT: 1;                 /** \brief [16:16] Overlay Start (w) */
    unsigned int OVSTP: 1;                  /** \brief [17:17] Overlay Stop (w) */
    unsigned int DCINVAL: 1;                /** \brief [18:18] Data Cache Invalidate (w) */
    unsigned int reserved_19: 5;
    unsigned int OVCONF: 1;                 /** \brief [24:24] Overlay Configured (rw) */
    unsigned int POVCONF: 1;                /** \brief [25:25] Write Protection for OVCONF (w) */
    unsigned int reserved_26: 6;
} Ifx_SCU_OVCCON_Bits;

/** Overlay Enable Register */
typedef struct
{
    unsigned int OVEN0: 1;                  /** \brief [0:0] Overlay Enable x (rw) */
    unsigned int OVEN1: 1;                  /** \brief [1:1] Overlay Enable x (rw) */
    unsigned int OVEN2: 1;                  /** \brief [2:2] Overlay Enable x (rw) */
    unsigned int reserved_3: 29;
} Ifx_SCU_OVCENABLE_Bits;

/** Pad Disable Control Register */
typedef struct
{
    unsigned int PDIS0: 1;                  /** \brief [0:0] Pad Disable for ESR Pin x (rw) */
    unsigned int PDIS1: 1;                  /** \brief [1:1] Pad Disable for ESR Pin x (rw) */
    unsigned int reserved_2: 30;
} Ifx_SCU_PDISC_Bits;

/** Pattern Detection Result Register */
typedef struct
{
    unsigned int PDR0: 1;                   /** \brief [0:0] Pattern Detection Result of Channel y (rh) */
    unsigned int PDR1: 1;                   /** \brief [1:1] Pattern Detection Result of Channel y (rh) */
    unsigned int PDR2: 1;                   /** \brief [2:2] Pattern Detection Result of Channel y (rh) */
    unsigned int PDR3: 1;                   /** \brief [3:3] Pattern Detection Result of Channel y (rh) */
    unsigned int PDR4: 1;                   /** \brief [4:4] Pattern Detection Result of Channel y (rh) */
    unsigned int PDR5: 1;                   /** \brief [5:5] Pattern Detection Result of Channel y (rh) */
    unsigned int PDR6: 1;                   /** \brief [6:6] Pattern Detection Result of Channel y (rh) */
    unsigned int PDR7: 1;                   /** \brief [7:7] Pattern Detection Result of Channel y (rh) */
    unsigned int reserved_8: 24;
} Ifx_SCU_PDRR_Bits;

/** PLL Configuration 0 Register */
typedef struct
{
    unsigned int VCOBYP: 1;                 /** \brief [0:0] VCO Bypass (rw) */
    unsigned int VCOPWD: 1;                 /** \brief [1:1] VCO Power Saving Mode (rw) */
    unsigned int MODEN: 1;                  /** \brief [2:2] Modulation Enable (rw) */
    unsigned int CEN: 1;                    /** \brief [3:3] Clipping Enable (rw) */
    unsigned int SETFINDIS: 1;              /** \brief [4:4] Set Status Bit PLLSTAT.FINDIS (w) */
    unsigned int CLRFINDIS: 1;              /** \brief [5:5] Clear Status Bit PLLSTAT.FINDIS (w) */
    unsigned int OSCDISCDIS: 1;             /** \brief [6:6] Oscillator Disconnect Disable (rw) */
    unsigned int reserved_7: 2;
    unsigned int NDIV: 7;                   /** \brief [15:9] N-Divider Value (rw) */
    unsigned int PLLPWD: 1;                 /** \brief [16:16] PLL Power Saving Mode (rw) */
    unsigned int reserved_17: 1;
    unsigned int RESLD: 1;                  /** \brief [18:18] Restart VCO Lock Detection (w) */
    unsigned int reserved_19: 5;
    unsigned int PDIV: 4;                   /** \brief [27:24] P-Divider Value (rw) */
    unsigned int reserved_28: 4;
} Ifx_SCU_PLLCON0_Bits;

/** PLL Configuration 1 Register */
typedef struct
{
    unsigned int K2DIV: 7;                  /** \brief [6:0] K2-Divider Value (rw) */
    unsigned int reserved_7: 9;
    unsigned int K1DIV: 7;                  /** \brief [22:16] K1-Divider Value (rw) */
    unsigned int reserved_23: 9;
} Ifx_SCU_PLLCON1_Bits;

/** PLL Configuration 2 Register */
typedef struct
{
    unsigned int MODAMP: 16;                /** \brief [15:0] Modulation Amplitude (rw) */
    unsigned int MODFREQ: 16;               /** \brief [31:16] Modulation Frequency (rw) */
} Ifx_SCU_PLLCON2_Bits;

/** PLL_ERAY Configuration 0 Register */
typedef struct
{
    unsigned int VCOBYP: 1;                 /** \brief [0:0] VCO Bypass (rw) */
    unsigned int VCOPWD: 1;                 /** \brief [1:1] VCO Power Saving Mode (rw) */
    unsigned int reserved_2: 2;
    unsigned int SETFINDIS: 1;              /** \brief [4:4] Set Status Bit PLLERAYSTAT.FINDIS (w) */
    unsigned int CLRFINDIS: 1;              /** \brief [5:5] Clear Status Bit PLLERAYSTAT.FINDIS (w) */
    unsigned int OSCDISCDIS: 1;             /** \brief [6:6] Oscillator Disconnect Disable (rw) */
    unsigned int reserved_7: 2;
    unsigned int NDIV: 5;                   /** \brief [13:9] N-Divider Value (rw) */
    unsigned int reserved_14: 4;
    unsigned int RESLD: 1;                  /** \brief [18:18] Restart VCO Lock Detection (w) */
    unsigned int reserved_19: 13;
} Ifx_SCU_PLLERAYCON0_Bits;

/** PLL_ERAY Configuration 1 Register */
typedef struct
{
    unsigned int K2DIV: 7;                  /** \brief [6:0] K2-Divider Value (rw) */
    unsigned int reserved_7: 9;
    unsigned int K1DIV: 7;                  /** \brief [22:16] K1-Divider Value (rw) */
    unsigned int reserved_23: 9;
} Ifx_SCU_PLLERAYCON1_Bits;

/** PLL_ERAY Status Register */
typedef struct
{
    unsigned int VCOBYST: 1;                /** \brief [0:0] VCO Bypass Status (rh) */
    unsigned int PWDSTAT: 1;                /** \brief [1:1] PLL_ERAY Power-saving Mode Status (rh) */
    unsigned int VCOLOCK: 1;                /** \brief [2:2] PLL VCO Lock Status (rh) */
    unsigned int FINDIS: 1;                 /** \brief [3:3] Input Clock Disconnect Select Status (rh) */
    unsigned int K1RDY: 1;                  /** \brief [4:4] K1 Divider Ready Status (rh) */
    unsigned int K2RDY: 1;                  /** \brief [5:5] K2 Divider Ready Status (rh) */
    unsigned int reserved_6: 26;
} Ifx_SCU_PLLERAYSTAT_Bits;

/** PLL Status Register */
typedef struct
{
    unsigned int VCOBYST: 1;                /** \brief [0:0] VCO Bypass Status (rh) */
    unsigned int reserved_1: 1;
    unsigned int VCOLOCK: 1;                /** \brief [2:2] PLL VCO Lock Status (rh) */
    unsigned int FINDIS: 1;                 /** \brief [3:3] Input Clock Disconnect Select Status (rh) */
    unsigned int K1RDY: 1;                  /** \brief [4:4] K1 Divider Ready Status (rh) */
    unsigned int K2RDY: 1;                  /** \brief [5:5] K2 Divider Ready Status (rh) */
    unsigned int reserved_6: 1;
    unsigned int MODRUN: 1;                 /** \brief [7:7] Modulation Run (rh) */
    unsigned int reserved_8: 24;
} Ifx_SCU_PLLSTAT_Bits;

/** Power Management Control and Status Register */
typedef struct
{
    unsigned int REQSLP: 2;                 /** \brief [1:0] Idle Mode and Sleep Mode Request (rwh) */
    unsigned int SMUSLP: 1;                 /** \brief [2:2] SMU CPU Idle Request (rwh) */
    unsigned int RSTSLP: 1;                 /** \brief [3:3] Reset Controller CPU Idle Request (rwh) */
    unsigned int reserved_4: 4;
    unsigned int PMST: 3;                   /** \brief [10:8] Power management Status (rh) */
    unsigned int reserved_11: 20;
    unsigned int LCK: 1;                    /** \brief [31:31] Lock Status (rh) */
} Ifx_SCU_PMCSR_Bits;

/** Standby and Wake-up Control Register 0 */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int ESR1WKEN: 1;               /** \brief [1:1] ESR1 Wake-up enable from Standby (rw) */
    unsigned int PINAWKEN: 1;               /** \brief [2:2] Pin A Wake-up enable from Standby (rw) */
    unsigned int PINBWKEN: 1;               /** \brief [3:3] Pin B Wake-up enable from Standby (rw) */
    unsigned int reserved_4: 3;
    unsigned int ESR1DFEN: 1;               /** \brief [7:7] Digital Filter Enable (rw) */
    unsigned int ESR1EDCON: 2;              /** \brief [9:8] Edge Detection Control (rw) */
    unsigned int PINADFEN: 1;               /** \brief [10:10] Digital Filter Enable (rw) */
    unsigned int PINAEDCON: 2;              /** \brief [12:11] Edge Detection Control (rw) */
    unsigned int PINBDFEN: 1;               /** \brief [13:13] Digital Filter Enable (rw) */
    unsigned int PINBEDCON: 2;              /** \brief [15:14] Edge Detection Control (rw) */
    unsigned int SCREN: 1;                  /** \brief [16:16] Standby Controller Enable request (rw) */
    unsigned int STBYRAMSEL: 2;             /** \brief [18:17] Standby RAM supply in Standby Mode (rw) */
    unsigned int SCRCLKSEL: 1;              /** \brief [19:19] Default Clock selection on Standby Mode Entry (rw) */
    unsigned int SCRWKEN: 1;                /** \brief [20:20] Standby Controller Wake-up enable from Standby (rw) */
    unsigned int TRISTEN: 1;                /** \brief [21:21] Bit protection for Tristate request bit (TRISTREQ) (w) */
    unsigned int TRISTREQ: 1;               /** \brief [22:22] Tristate enable (rw) */
    unsigned int reserved_23: 8;
    unsigned int LCK: 1;                    /** \brief [31:31] Lock Status (rh) */
} Ifx_SCU_PMSWCR0_Bits;

/** Standby and Wake-up Control Register 1 */
typedef struct
{
    unsigned int SCRSTEN: 1;                /** \brief [0:0] Standby Controller Reset request enable (w) */
    unsigned int SCRSTREQ: 1;               /** \brief [1:1] Standby Controller Reset request (rwh) */
    unsigned int reserved_2: 14;
    unsigned int SCRCFG: 8;                 /** \brief [23:16] Hardware configuration of the 8bit controller. (rw) */
    unsigned int CPUSEL: 3;                 /** \brief [26:24] CPU selection for Sleep and Standby mode (rw) */
    unsigned int reserved_27: 4;
    unsigned int LCK: 1;                    /** \brief [31:31] Lock Status (rh) */
} Ifx_SCU_PMSWCR1_Bits;

/** Standby and Wake-up Control Register 2 */
typedef struct
{
    unsigned int SCRINT: 8;                 /** \brief [7:0] Data exchange from Standby Controller to SCU. (r) */
    unsigned int reserved_8: 8;
    unsigned int TCINT: 8;                  /** \brief [23:16] Data exchange from SCU to Standby Controller. (rw) */
    unsigned int reserved_24: 7;
    unsigned int LCK: 1;                    /** \brief [31:31] Lock Status (rh) */
} Ifx_SCU_PMSWCR2_Bits;

/** Standby and Wake-up Status Flag Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ESR1WKP: 1;                /** \brief [2:2] ESR1 Wake-up flag (rh) */
    unsigned int ESR1OVRUN: 1;              /** \brief [3:3] ESR1 Overrun status flag (rh) */
    unsigned int PINAWKP: 1;                /** \brief [4:4] Pin A Wake-up flag (rh) */
    unsigned int PINAOVRUN: 1;              /** \brief [5:5] Pin A Overrun status flag (rh) */
    unsigned int PINBWKP: 1;                /** \brief [6:6] Pin B Wake-up flag (rh) */
    unsigned int PINBOVRUN: 1;              /** \brief [7:7] Pin B Overrun status flag (rh) */
    unsigned int reserved_8: 8;
    unsigned int SCRST: 1;                  /** \brief [16:16] Standby controller Reset indication (rh) */
    unsigned int SCRWKP: 1;                 /** \brief [17:17] SCR Wake-up flag (rh) */
    unsigned int reserved_18: 14;
} Ifx_SCU_PMSWSTAT_Bits;

/** Standby and Wake-up Status Clear Register */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int ESR1WKPCLR: 1;             /** \brief [2:2] ESR1 Wake-up indication flag clear (w) */
    unsigned int ESR1OVRUNCLR: 1;           /** \brief [3:3] ESR1 Overrun status indication flag clear (w) */
    unsigned int PINAWKPCLR: 1;             /** \brief [4:4] PINA Wake-up indication flag clear (w) */
    unsigned int PINAOVRUNCLR: 1;           /** \brief [5:5] PINA Overrun status indication flag clear (w) */
    unsigned int PINBWKPCLR: 1;             /** \brief [6:6] PINB Wake-up indication flag clear (w) */
    unsigned int PINBOVRUNCLR: 1;           /** \brief [7:7] PINB Overrun status indication flag clear (w) */
    unsigned int reserved_8: 8;
    unsigned int SCRSTCLR: 1;               /** \brief [16:16] Standby controller SCRST indication flag clear (w) */
    unsigned int SCRWKPCLR: 1;              /** \brief [17:17] SCR Wake-up indication flag clear (w) */
    unsigned int reserved_18: 14;
} Ifx_SCU_PMSWSTATCLR_Bits;

/** Additional Reset Control Register */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int CLRC: 1;                   /** \brief [1:1] Clear Cold Reset Status (w) */
    unsigned int reserved_2: 14;
    unsigned int USRINFO: 16;               /** \brief [31:16] User Information (rw) */
} Ifx_SCU_RSTCON2_Bits;

/** Reset Configuration Register */
typedef struct
{
    unsigned int ESR0: 2;                   /** \brief [1:0] ESR0 Reset Request Trigger Reset Configuration (rw) */
    unsigned int ESR1: 2;                   /** \brief [3:2] ESR1 Reset Request Trigger Reset Configuration (rw) */
    unsigned int reserved_4: 2;
    unsigned int SMU: 2;                    /** \brief [7:6] SMU Reset Request Trigger Reset Configuration (rw) */
    unsigned int SW: 2;                     /** \brief [9:8] SW Reset Request Trigger Reset Configuration (rw) */
    unsigned int STM0: 2;                   /** \brief [11:10] STM0 Reset Request Trigger Reset Configuration (rw) */
    unsigned int STM1: 2;                   /** \brief [13:12] STM1 Reset Request Trigger Reset Configuration (rw) */
    unsigned int STM2: 2;                   /** \brief [15:14] STM2 Reset Request Trigger Reset Configuration (rw) */
    unsigned int reserved_16: 16;
} Ifx_SCU_RSTCON_Bits;

/** Reset Status Register */
typedef struct
{
    unsigned int ESR0: 1;                   /** \brief [0:0] Reset Request Trigger Reset Status for ESR0 (rh) */
    unsigned int ESR1: 1;                   /** \brief [1:1] Reset Request Trigger Reset Status for ESR1 (rh) */
    unsigned int reserved_2: 1;
    unsigned int SMU: 1;                    /** \brief [3:3] Reset Request Trigger Reset Status for SMU (rh) */
    unsigned int SW: 1;                     /** \brief [4:4] Reset Request Trigger Reset Status for SW (rh) */
    unsigned int STM0: 1;                   /** \brief [5:5] Reset Request Trigger Reset Status for STM0 (rh) */
    unsigned int STM1: 1;                   /** \brief [6:6] Reset Request Trigger Reset Status for STM1 (rh) */
    unsigned int STM2: 1;                   /** \brief [7:7] Reset Request Trigger Reset Status for STM2 (rh) */
    unsigned int reserved_8: 8;
    unsigned int PORST: 1;                  /** \brief [16:16] Reset Request Trigger Reset Status for PORST (rh) */
    unsigned int OCDS: 1;                   /** \brief [17:17] Reset Request Trigger Reset Status for OCDS (rh) */
    unsigned int CB0: 1;                    /** \brief [18:18] Reset Request Trigger Reset Status for Cerberus System Reset (rh) */
    unsigned int CB1: 1;                    /** \brief [19:19] Reset Request Trigger Reset Status for Cerberus Debug Reset (rh) */
    unsigned int CB3: 1;                    /** \brief [20:20] Reset Request Trigger Reset Status for Cerberus Application Reset (rh) */
    unsigned int TP: 1;                     /** \brief [21:21] Reset Request Trigger Reset Status for Tuning Protection (rh) */
    unsigned int TCU: 1;                    /** \brief [22:22] Reset Request Trigger Reset Status for TCU (r) */
    unsigned int EVR13: 1;                  /** \brief [23:23] Reset Request Trigger Reset Status for EVR13 (rh) */
    unsigned int EVR33: 1;                  /** \brief [24:24] Reset Request Trigger Reset Status for EVR33 (rh) */
    unsigned int SWD: 1;                    /** \brief [25:25] Reset Request Trigger Reset Status for Supply Watchdog (SWD) (rh) */
    unsigned int HSMS: 1;                   /** \brief [26:26] Reset Request Trigger Reset Status for HSM Application Reset (HSM A) (rh) */
    unsigned int HSMA: 1;                   /** \brief [27:27] Reset Request Trigger Reset Status for HSM System Reset (HSM S) (rh) */
    unsigned int reserved_28: 4;
} Ifx_SCU_RSTSTAT_Bits;

/** Start-up Configuration Register */
typedef struct
{
    unsigned int HWCFG: 8;                  /** \brief [7:0] Hardware Configuration Setting (w) */
    unsigned int reserved_8: 5;
    unsigned int SFCBAE: 1;                 /** \brief [13:13] Set Flash Config. Sector Access Enable (w) */
    unsigned int CFCBAE: 1;                 /** \brief [14:14] Clear Flash Config. Sector Access Enable (w) */
    unsigned int STP: 1;                    /** \brief [15:15] Start-up Protection Setting (rwh) */
    unsigned int reserved_16: 16;
} Ifx_SCU_STCON_Bits;

/** Start-up Status Register */
typedef struct
{
    unsigned int HWCFG: 8;                  /** \brief [7:0] Hardware Configuration Setting (rh) */
    unsigned int FTM: 7;                    /** \brief [14:8] Firmware Test Setting (rh) */
    unsigned int MODE: 1;                   /** \brief [15:15] MODE (rh) */
    unsigned int FCBAE: 1;                  /** \brief [16:16] Flash Config. Sector Access Enable (rh) */
    unsigned int LUDIS: 1;                  /** \brief [17:17] Latch Update Disable (rh) */
    unsigned int reserved_18: 1;
    unsigned int TRSTL: 1;                  /** \brief [19:19] TRSTL Status (rh) */
    unsigned int SPDEN: 1;                  /** \brief [20:20] Single Pin DAP Mode Enable (rh) */
    unsigned int OTPOFF: 1;                 /** \brief [21:21] OTP Over-ruled (rh) */
    unsigned int FSIOFF: 1;                 /** \brief [22:22] FSI Disabled (rh) */
    unsigned int STPOVREQ: 1;               /** \brief [23:23] Start-Up Protection Over-ruling Request (rh) */
    unsigned int RAMINT: 1;                 /** \brief [24:24] RAM Content Security Integrity (rh) */
    unsigned int reserved_25: 7;
} Ifx_SCU_STSTAT_Bits;

/** Software Reset Configuration Register */
typedef struct
{
    unsigned int reserved_0: 1;
    unsigned int SWRSTREQ: 1;               /** \brief [1:1] Software Reset Request (w) */
    unsigned int reserved_2: 30;
} Ifx_SCU_SWRSTCON_Bits;

/** System Control Register */
typedef struct
{
    unsigned int CCTRIG0: 1;                /** \brief [0:0] Capture Compare Trigger x (rw) */
    unsigned int CCTRIG1: 1;                /** \brief [1:1] Capture Compare Trigger x (rw) */
    unsigned int RAMINTM: 2;                /** \brief [3:2] RAM Integrity Modify (w) */
    unsigned int SETLUDIS: 1;               /** \brief [4:4] Set Latch Update Disable (w) */
    unsigned int reserved_5: 1;
    unsigned int FFR: 1;                    /** \brief [6:6] Fast Flash Ramp-up (rw) */
    unsigned int reserved_7: 1;
    unsigned int DATM: 1;                   /** \brief [8:8] Disable Application Test Mode (ATM) (rw) */
    unsigned int reserved_9: 23;
} Ifx_SCU_SYSCON_Bits;

/** Trap Clear Register */
typedef struct
{
    unsigned int ESR0T: 1;                  /** \brief [0:0] Clear Trap Request Flag ESR0T (w) */
    unsigned int ESR1T: 1;                  /** \brief [1:1] Clear Trap Request Flag ESR1T (w) */
    unsigned int reserved_2: 1;
    unsigned int SMUT: 1;                   /** \brief [3:3] Clear Trap Request Flag SMUT (w) */
    unsigned int reserved_4: 28;
} Ifx_SCU_TRAPCLR_Bits;

/** Trap Disable Register */
typedef struct
{
    unsigned int ESR0T: 1;                  /** \brief [0:0] Disable Trap Request ESR0T (rw) */
    unsigned int ESR1T: 1;                  /** \brief [1:1] Disable Trap Request ESR1T (rw) */
    unsigned int reserved_2: 1;
    unsigned int SMUT: 1;                   /** \brief [3:3] Disable Trap Request SMUT (rw) */
    unsigned int reserved_4: 28;
} Ifx_SCU_TRAPDIS_Bits;

/** Trap Set Register */
typedef struct
{
    unsigned int ESR0T: 1;                  /** \brief [0:0] Set Trap Request Flag ESR0T (w) */
    unsigned int ESR1T: 1;                  /** \brief [1:1] Set Trap Request Flag ESR1T (w) */
    unsigned int reserved_2: 1;
    unsigned int SMUT: 1;                   /** \brief [3:3] Set Trap Request Flag SMUT (w) */
    unsigned int reserved_4: 28;
} Ifx_SCU_TRAPSET_Bits;

/** Trap Status Register */
typedef struct
{
    unsigned int ESR0T: 1;                  /** \brief [0:0] ESR0 Trap Request Flag (rh) */
    unsigned int ESR1T: 1;                  /** \brief [1:1] ESR1 Trap Request Flag (rh) */
    unsigned int reserved_2: 1;
    unsigned int SMUT: 1;                   /** \brief [3:3] SMU Alarm Trap Request Flag (rh) */
    unsigned int reserved_4: 28;
} Ifx_SCU_TRAPSTAT_Bits;

/** CPU WDT Control Register 0 */
typedef struct
{
    unsigned int ENDINIT: 1;                /** \brief [0:0] End-of-Initialization Control Bit (rwh) */
    unsigned int LCK: 1;                    /** \brief [1:1] Lock Bit to Control Access to WDTxCON0 (rwh) */
    unsigned int HPW0: 2;                   /** \brief [3:2] Hardware Password 0 (w) */
    unsigned int HPW1: 4;                   /** \brief [7:4] Hardware Password 1 (w) */
    unsigned int PW: 8;                     /** \brief [15:8] User-Definable Password Field for Access to WDTxCON0 (rw) */
    unsigned int REL: 16;                   /** \brief [31:16] Reload Value for the WDT (rw) */
} Ifx_SCU_WDTCPU_CON0_Bits;

/** CPU WDT Control Register 1 */
typedef struct
{
    unsigned int reserved_0: 2;
    unsigned int IR: 1;                     /** \brief [2:2] Input Frequency Request Control Bit (rw) */
    unsigned int DR: 1;                     /** \brief [3:3] Disable Request Control Bit (rw) */
    unsigned int reserved_4: 2;
    unsigned int UR: 1;                     /** \brief [6:6] Unlock Restriction Request Control Bit (rw) */
    unsigned int reserved_7: 25;
} Ifx_SCU_WDTCPU_CON1_Bits;

/** CPU WDT Status Register */
typedef struct
{
    unsigned int AE: 1;                     /** \brief [0:0] Watchdog Access Error Status Flag (rh) */
    unsigned int OE: 1;                     /** \brief [1:1] Watchdog Overflow Error Status Flag (rh) */
    unsigned int IS: 1;                     /** \brief [2:2] Watchdog Input Clock Status Flag (rh) */
    unsigned int DS: 1;                     /** \brief [3:3] Watchdog Enable/Disable Status Flag (rh) */
    unsigned int TO: 1;                     /** \brief [4:4] Watchdog Time-Out Mode Flag (rh) */
    unsigned int reserved_5: 1;
    unsigned int US: 1;                     /** \brief [6:6] SMU Unlock Restriction Status Flag (rh) */
    unsigned int reserved_7: 9;
    unsigned int TIM: 16;                   /** \brief [31:16] Timer Value (rh) */
} Ifx_SCU_WDTCPU_SR_Bits;

/** Safety WDT Control Register 0 */
typedef struct
{
    unsigned int ENDINIT: 1;                /** \brief [0:0] End-of-Initialization Control Bit (rwh) */
    unsigned int LCK: 1;                    /** \brief [1:1] Lock Bit to Control Access to WDTxCON0 (rwh) */
    unsigned int HPW0: 2;                   /** \brief [3:2] Hardware Password 0 (w) */
    unsigned int HPW1: 4;                   /** \brief [7:4] Hardware Password 1 (w) */
    unsigned int PW: 8;                     /** \brief [15:8] User-Definable Password Field for Access to WDTxCON0 (rw) */
    unsigned int REL: 16;                   /** \brief [31:16] Reload Value for the WDT (rw) */
} Ifx_SCU_WDTS_CON0_Bits;

/** Safety WDT Control Register 1 */
typedef struct
{
    unsigned int CLRIRF: 1;                 /** \brief [0:0] Clear Internal Reset Flag (rwh) */
    unsigned int reserved_1: 1;
    unsigned int IR: 1;                     /** \brief [2:2] Input Frequency Request Control Bit (rw) */
    unsigned int DR: 1;                     /** \brief [3:3] Disable Request Control Bit (rw) */
    unsigned int reserved_4: 2;
    unsigned int UR: 1;                     /** \brief [6:6] Unlock Restriction Request Control Bit (rw) */
    unsigned int reserved_7: 25;
} Ifx_SCU_WDTS_CON1_Bits;

/** Safety WDT Status Register */
typedef struct
{
    unsigned int AE: 1;                     /** \brief [0:0] Watchdog Access Error Status Flag (rh) */
    unsigned int OE: 1;                     /** \brief [1:1] Watchdog Overflow Error Status Flag (rh) */
    unsigned int IS: 1;                     /** \brief [2:2] Watchdog Input Clock Status Flag (rh) */
    unsigned int DS: 1;                     /** \brief [3:3] Watchdog Enable/Disable Status Flag (rh) */
    unsigned int TO: 1;                     /** \brief [4:4] Watchdog Time-Out Mode Flag (rh) */
    unsigned int reserved_5: 1;
    unsigned int US: 1;                     /** \brief [6:6] SMU Unlock Restriction Status Flag (rh) */
    unsigned int reserved_7: 9;
    unsigned int TIM: 16;                   /** \brief [31:16] Timer Value (rh) */
} Ifx_SCU_WDTS_SR_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_ACCEN0_Bits B;
} Ifx_SCU_ACCEN0;

/** Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_ACCEN1_Bits B;
} Ifx_SCU_ACCEN1;

/** Application Reset Disable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_ARSTDIS_Bits B;
} Ifx_SCU_ARSTDIS;

/** CCU Clock Control Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_CCUCON0_Bits B;
} Ifx_SCU_CCUCON0;

/** CCU Clock Control Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_CCUCON1_Bits B;
} Ifx_SCU_CCUCON1;

/** CCU Clock Control Register 2 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_CCUCON2_Bits B;
} Ifx_SCU_CCUCON2;

/** Chip Identification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_CHIPID_Bits B;
} Ifx_SCU_CHIPID;

/** Die Temperature Sensor Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_DTSCON_Bits B;
} Ifx_SCU_DTSCON;

/** Die Temperature Sensor Limit Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_DTSLIM_Bits B;
} Ifx_SCU_DTSLIM;

/** Die Temperature Sensor Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_DTSSTAT_Bits B;
} Ifx_SCU_DTSSTAT;

/** External Input Channel Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_EICR_Bits B;
} Ifx_SCU_EICR;

/** External Input Flag Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_EIFR_Bits B;
} Ifx_SCU_EIFR;

/** Emergency Stop Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_EMSR_Bits B;
} Ifx_SCU_EMSR;

/** ESR Input Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_ESRCFG_Bits B;
} Ifx_SCU_ESRCFG;

/** ESR Output Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_ESROCFG_Bits B;
} Ifx_SCU_ESROCFG;

/** EVR13 Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_EVR13CON_Bits B;
} Ifx_SCU_EVR13CON;

/** EVR33 Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_EVR33CON_Bits B;
} Ifx_SCU_EVR33CON;

/** EVR ADC Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_EVRADCSTAT_Bits B;
} Ifx_SCU_EVRADCSTAT;

/** EVR Monitor Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_EVRMONCTRL_Bits B;
} Ifx_SCU_EVRMONCTRL;

/** EVR Over-voltage Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_EVROVMON_Bits B;
} Ifx_SCU_EVROVMON;

/** EVR Hard Reset Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_EVRRSTCON_Bits B;
} Ifx_SCU_EVRRSTCON;

/** EVR13 SD Control Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_EVRSDCTRL1_Bits B;
} Ifx_SCU_EVRSDCTRL1;

/** EVR Status Flag Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_EVRSTAT_Bits B;
} Ifx_SCU_EVRSTAT;

/** EVR Under-voltage Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_EVRUVMON_Bits B;
} Ifx_SCU_EVRUVMON;

/** External Clock Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_EXTCON_Bits B;
} Ifx_SCU_EXTCON;

/** Fractional Divider Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_FDR_Bits B;
} Ifx_SCU_FDR;

/** Flag Modification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_FMR_Bits B;
} Ifx_SCU_FMR;

/** Identification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_ID_Bits B;
} Ifx_SCU_ID;

/** Flag Gating Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_IGCR_Bits B;
} Ifx_SCU_IGCR;

/** ESR Input Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_IN_Bits B;
} Ifx_SCU_IN;

/** Input/Output Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_IOCR_Bits B;
} Ifx_SCU_IOCR;

/** Logic BIST Control 0 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_LBISTCTRL0_Bits B;
} Ifx_SCU_LBISTCTRL0;

/** Logic BIST Control 1 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_LBISTCTRL1_Bits B;
} Ifx_SCU_LBISTCTRL1;

/** LCL CPU Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_LCLCON_Bits B;
} Ifx_SCU_LCLCON;

/** Manufacturer Identification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_MANID_Bits B;
} Ifx_SCU_MANID;

/** ESR Output Modification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_OMR_Bits B;
} Ifx_SCU_OMR;

/** OSC Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_OSCCON_Bits B;
} Ifx_SCU_OSCCON;

/** ESR Output Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_OUT_Bits B;
} Ifx_SCU_OUT;

/** Overlay Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_OVCCON_Bits B;
} Ifx_SCU_OVCCON;

/** Overlay Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_OVCENABLE_Bits B;
} Ifx_SCU_OVCENABLE;

/** Pad Disable Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_PDISC_Bits B;
} Ifx_SCU_PDISC;

/** Pattern Detection Result Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_PDRR_Bits B;
} Ifx_SCU_PDRR;

/** PLL Configuration 0 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_PLLCON0_Bits B;
} Ifx_SCU_PLLCON0;

/** PLL Configuration 1 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_PLLCON1_Bits B;
} Ifx_SCU_PLLCON1;

/** PLL Configuration 2 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_PLLCON2_Bits B;
} Ifx_SCU_PLLCON2;

/** PLL_ERAY Configuration 0 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_PLLERAYCON0_Bits B;
} Ifx_SCU_PLLERAYCON0;

/** PLL_ERAY Configuration 1 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_PLLERAYCON1_Bits B;
} Ifx_SCU_PLLERAYCON1;

/** PLL_ERAY Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_PLLERAYSTAT_Bits B;
} Ifx_SCU_PLLERAYSTAT;

/** PLL Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_PLLSTAT_Bits B;
} Ifx_SCU_PLLSTAT;

/** Power Management Control and Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_PMCSR_Bits B;
} Ifx_SCU_PMCSR;

/** Standby and Wake-up Control Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_PMSWCR0_Bits B;
} Ifx_SCU_PMSWCR0;

/** Standby and Wake-up Control Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_PMSWCR1_Bits B;
} Ifx_SCU_PMSWCR1;

/** Standby and Wake-up Control Register 2 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_PMSWCR2_Bits B;
} Ifx_SCU_PMSWCR2;

/** Standby and Wake-up Status Flag Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_PMSWSTAT_Bits B;
} Ifx_SCU_PMSWSTAT;

/** Standby and Wake-up Status Clear Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_PMSWSTATCLR_Bits B;
} Ifx_SCU_PMSWSTATCLR;

/** Reset Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_RSTCON_Bits B;
} Ifx_SCU_RSTCON;

/** Additional Reset Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_RSTCON2_Bits B;
} Ifx_SCU_RSTCON2;

/** Reset Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_RSTSTAT_Bits B;
} Ifx_SCU_RSTSTAT;

/** Start-up Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_STCON_Bits B;
} Ifx_SCU_STCON;

/** Start-up Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_STSTAT_Bits B;
} Ifx_SCU_STSTAT;

/** Software Reset Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_SWRSTCON_Bits B;
} Ifx_SCU_SWRSTCON;

/** System Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_SYSCON_Bits B;
} Ifx_SCU_SYSCON;

/** Trap Clear Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_TRAPCLR_Bits B;
} Ifx_SCU_TRAPCLR;

/** Trap Disable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_TRAPDIS_Bits B;
} Ifx_SCU_TRAPDIS;

/** Trap Set Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_TRAPSET_Bits B;
} Ifx_SCU_TRAPSET;

/** Trap Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_TRAPSTAT_Bits B;
} Ifx_SCU_TRAPSTAT;

/** CPU WDT Control Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_WDTCPU_CON0_Bits B;
} Ifx_SCU_WDTCPU_CON0;

/** CPU WDT Control Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_WDTCPU_CON1_Bits B;
} Ifx_SCU_WDTCPU_CON1;

/** CPU WDT Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_WDTCPU_SR_Bits B;
} Ifx_SCU_WDTCPU_SR;

/** Safety WDT Control Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_WDTS_CON0_Bits B;
} Ifx_SCU_WDTS_CON0;

/** Safety WDT Control Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_WDTS_CON1_Bits B;
} Ifx_SCU_WDTS_CON1;

/** Safety WDT Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SCU_WDTS_SR_Bits B;
} Ifx_SCU_WDTS_SR;

/******************************************************************************/
/*                           Struct (3 - Object L1)                           */
/******************************************************************************/

/** CPU watchdog */
typedef volatile struct
{
    Ifx_SCU_WDTCPU_CON0 CON0;               /** \brief 0, CPU WDT Control Register 0 */
    Ifx_SCU_WDTCPU_CON1 CON1;               /** \brief 4, CPU WDT Control Register 1 */
    Ifx_SCU_WDTCPU_SR SR;                   /** \brief 8, CPU WDT Status Register */
} Ifx_SCU_WDTCPU;

/** Safety watchdog */
typedef volatile struct
{
    Ifx_SCU_WDTS_CON0 CON0;                 /** \brief 0, Safety WDT Control Register 0 */
    Ifx_SCU_WDTS_CON1 CON1;                 /** \brief 4, Safety WDT Control Register 1 */
    Ifx_SCU_WDTS_SR SR;                     /** \brief 8, Safety WDT Status Register */
} Ifx_SCU_WDTS;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** SCU object */
typedef volatile struct
{
    unsigned char reserved_0[8];            /** \brief 0 */
    Ifx_SCU_ID ID;                          /** \brief 8, Identification Register */
    unsigned char reserved_C[4];            /** \brief C */
    Ifx_SCU_OSCCON OSCCON;                  /** \brief 10, OSC Control Register */
    Ifx_SCU_PLLSTAT PLLSTAT;                /** \brief 14, PLL Status Register */
    Ifx_SCU_PLLCON0 PLLCON0;                /** \brief 18, PLL Configuration 0 Register */
    Ifx_SCU_PLLCON1 PLLCON1;                /** \brief 1C, PLL Configuration 1 Register */
    Ifx_SCU_PLLCON2 PLLCON2;                /** \brief 20, PLL Configuration 2 Register */
    Ifx_SCU_PLLERAYSTAT PLLERAYSTAT;        /** \brief 24, PLL_ERAY Status Register */
    Ifx_SCU_PLLERAYCON0 PLLERAYCON0;        /** \brief 28, PLL_ERAY Configuration 0 Register */
    Ifx_SCU_PLLERAYCON1 PLLERAYCON1;        /** \brief 2C, PLL_ERAY Configuration 1 Register */
    Ifx_SCU_CCUCON0 CCUCON0;                /** \brief 30, CCU Clock Control Register 0 */
    Ifx_SCU_CCUCON1 CCUCON1;                /** \brief 34, CCU Clock Control Register 1 */
    Ifx_SCU_FDR FDR;                        /** \brief 38, Fractional Divider Register */
    Ifx_SCU_EXTCON EXTCON;                  /** \brief 3C, External Clock Control Register */
    Ifx_SCU_CCUCON2 CCUCON2;                /** \brief 40, CCU Clock Control Register 2 */
    unsigned char reserved_44[12];          /** \brief 44 */
    Ifx_SCU_RSTSTAT RSTSTAT;                /** \brief 50, Reset Status Register */
    unsigned char reserved_54[4];           /** \brief 54 */
    Ifx_SCU_RSTCON RSTCON;                  /** \brief 58, Reset Configuration Register */
    Ifx_SCU_ARSTDIS ARSTDIS;                /** \brief 5C, Application Reset Disable Register */
    Ifx_SCU_SWRSTCON SWRSTCON;              /** \brief 60, Software Reset Configuration Register */
    Ifx_SCU_RSTCON2 RSTCON2;                /** \brief 64, Additional Reset Control Register */
    unsigned char reserved_68[4];           /** \brief 68 */
    Ifx_SCU_EVRRSTCON EVRRSTCON;            /** \brief 6C, EVR Hard Reset Control Register */
    Ifx_SCU_ESRCFG ESRCFG[2];               /** \brief 70, ESR Input Configuration Register */
    Ifx_SCU_ESROCFG ESROCFG;                /** \brief 78, ESR Output Configuration Register */
    Ifx_SCU_SYSCON SYSCON;                  /** \brief 7C, System Control Register */
    unsigned char reserved_80[32];          /** \brief 80 */
    Ifx_SCU_IOCR IOCR;                      /** \brief A0, Input/Output Control Register */
    Ifx_SCU_OUT OUT;                        /** \brief A4, ESR Output Register */
    Ifx_SCU_OMR OMR;                        /** \brief A8, ESR Output Modification Register */
    Ifx_SCU_IN IN;                          /** \brief AC, ESR Input Register */
    Ifx_SCU_EVRSTAT EVRSTAT;                /** \brief B0, EVR Status Flag Register */
    unsigned char reserved_B4[4];           /** \brief B4 */
    Ifx_SCU_EVR13CON EVR13CON;              /** \brief B8, EVR13 Control Register */
    Ifx_SCU_EVR33CON EVR33CON;              /** \brief BC, EVR33 Control Register */
    Ifx_SCU_STSTAT STSTAT;                  /** \brief C0, Start-up Status Register */
    Ifx_SCU_STCON STCON;                    /** \brief C4, Start-up Configuration Register */
    Ifx_SCU_PMSWCR0 PMSWCR0;                /** \brief C8, Standby and Wake-up Control Register 0 */
    Ifx_SCU_PMSWSTAT PMSWSTAT;              /** \brief CC, Standby and Wake-up Status Flag Register */
    Ifx_SCU_PMSWSTATCLR PMSWSTATCLR;        /** \brief D0, Standby and Wake-up Status Clear Register */
    Ifx_SCU_PMCSR PMCSR[3];                 /** \brief D4, Power Management Control and Status Register */
    Ifx_SCU_DTSSTAT DTSSTAT;                /** \brief E0, Die Temperature Sensor Status Register */
    Ifx_SCU_DTSCON DTSCON;                  /** \brief E4, Die Temperature Sensor Control Register */
    Ifx_SCU_PMSWCR1 PMSWCR1;                /** \brief E8, Standby and Wake-up Control Register 1 */
    Ifx_SCU_PMSWCR2 PMSWCR2;                /** \brief EC, Standby and Wake-up Control Register 2 */
    Ifx_SCU_WDTS WDTS;                      /** \brief F0, Safety watchdog */
    Ifx_SCU_EMSR EMSR;                      /** \brief FC, Emergency Stop Register */
    Ifx_SCU_WDTCPU WDTCPU[3];               /** \brief 100, CPU watchdogs */
    Ifx_SCU_TRAPSTAT TRAPSTAT;              /** \brief 124, Trap Status Register */
    Ifx_SCU_TRAPSET TRAPSET;                /** \brief 128, Trap Set Register */
    Ifx_SCU_TRAPCLR TRAPCLR;                /** \brief 12C, Trap Clear Register */
    Ifx_SCU_TRAPDIS TRAPDIS;                /** \brief 130, Trap Disable Register */
    Ifx_SCU_LCLCON LCLCON[2];               /** \brief 134, LCL CPU Control Register */
    unsigned char reserved_13C[4];          /** \brief 13C */
    Ifx_SCU_CHIPID CHIPID;                  /** \brief 140, Chip Identification Register */
    Ifx_SCU_MANID MANID;                    /** \brief 144, Manufacturer Identification Register */
    unsigned char reserved_148[28];         /** \brief 148 */
    Ifx_SCU_LBISTCTRL0 LBISTCTRL0;          /** \brief 164, Logic BIST Control 0 Register */
    Ifx_SCU_LBISTCTRL1 LBISTCTRL1;          /** \brief 168, Logic BIST Control 1 Register */
    unsigned char reserved_16C[32];         /** \brief 16C */
    Ifx_SCU_PDISC PDISC;                    /** \brief 18C, Pad Disable Control Register */
    unsigned char reserved_190[12];         /** \brief 190 */
    Ifx_SCU_EVRADCSTAT EVRADCSTAT;          /** \brief 19C, EVR ADC Status Register */
    Ifx_SCU_EVRUVMON EVRUVMON;              /** \brief 1A0, EVR Under-voltage Configuration Register */
    Ifx_SCU_EVROVMON EVROVMON;              /** \brief 1A4, EVR Over-voltage Configuration Register */
    Ifx_SCU_EVRMONCTRL EVRMONCTRL;          /** \brief 1A8, EVR Monitor Control Register */
    unsigned char reserved_1AC[4];          /** \brief 1AC */
    Ifx_SCU_EVRSDCTRL1 EVRSDCTRL1;          /** \brief 1B0, EVR13 SD Control Register 1 */
    unsigned char reserved_1B4[44];         /** \brief 1B4 */
    Ifx_SCU_OVCENABLE OVCENABLE;            /** \brief 1E0, Overlay Enable Register */
    Ifx_SCU_OVCCON OVCCON;                  /** \brief 1E4, Overlay Control Register */
    unsigned char reserved_1E8[40];         /** \brief 1E8 */
    Ifx_SCU_EICR EICR[4];                   /** \brief 210, External Input Channel Register  */
    Ifx_SCU_EIFR EIFR;                      /** \brief 220, External Input Flag Register */
    Ifx_SCU_FMR FMR;                        /** \brief 224, Flag Modification Register */
    Ifx_SCU_PDRR PDRR;                      /** \brief 228, Pattern Detection Result Register */
    Ifx_SCU_IGCR IGCR[4];                   /** \brief 22C, Flag Gating Register  */
    unsigned char reserved_23C[4];          /** \brief 23C */
    Ifx_SCU_DTSLIM DTSLIM;                  /** \brief 240, Die Temperature Sensor Limit Register */
    unsigned char reserved_244[436];        /** \brief 244 */
    Ifx_SCU_ACCEN1 ACCEN1;                  /** \brief 3F8, Access Enable Register 1 */
    Ifx_SCU_ACCEN0 ACCEN0;                  /** \brief 3FC, Access Enable Register 0 */
} Ifx_SCU;
/******************************************************************************/
#endif /* IFXSCU_REGDEF_H */

