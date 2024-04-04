/**
 * \file IfxInt_regdef.h
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
#ifndef IFXINT_REGDEF_H
#define IFXINT_REGDEF_H
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
} Ifx_INT_ACCEN00_Bits;

/** Kernel 0 Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_INT_ACCEN01_Bits;

/** Kernel 1 Access Enable Register 0 */
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
} Ifx_INT_ACCEN10_Bits;

/** Kernel 1 Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_INT_ACCEN11_Bits;

/** Error Capture Register */
typedef struct
{
    unsigned int PN: 10;                    /** \brief [9:0] Service Request Priority Number (rwh) */
    unsigned int ECC: 6;                    /** \brief [15:10] Service Request ECC (rwh) */
    unsigned int ID: 10;                    /** \brief [25:16] Service Request Node ID (rwh) */
    unsigned int reserved_26: 4;
    unsigned int EOV: 1;                    /** \brief [30:30] Error Overflow Bit (rwh) */
    unsigned int STAT: 1;                   /** \brief [31:31] Error Status Bit (rwh) */
} Ifx_INT_ICU_ECR_Bits;

/** Last Acknowledged Service Request Register */
typedef struct
{
    unsigned int PN: 10;                    /** \brief [9:0] Last Acknowledged Service Request Priority Number (r) */
    unsigned int ECC: 6;                    /** \brief [15:10] Last Acknowledged Interrupt ECC (r) */
    unsigned int ID: 10;                    /** \brief [25:16] Last Acknowledged Interrupt SRN ID (r) */
    unsigned int reserved_26: 6;
} Ifx_INT_ICU_LASR_Bits;

/** Latest Winning Service Request Register */
typedef struct
{
    unsigned int PN: 10;                    /** \brief [9:0] Latest Winner Priority Number (r) */
    unsigned int ECC: 6;                    /** \brief [15:10] Latest Winner ECC (r) */
    unsigned int ID: 10;                    /** \brief [25:16] Latest Winner ID (r) */
    unsigned int reserved_26: 5;
    unsigned int STAT: 1;                   /** \brief [31:31] LWI Register Status (r) */
} Ifx_INT_ICU_LWSR_Bits;

/** OTGM IRQ Trace */
typedef struct
{
    unsigned int TOS0: 4;                   /** \brief [3:0] Type of Service for Observation on OTGB0 (rw) */
    unsigned int reserved_4: 3;
    unsigned int OE0: 1;                    /** \brief [7:7] Output Enable for OTGB0 (rw) */
    unsigned int TOS1: 4;                   /** \brief [11:8] Type of Service for Observation on OTGB1 (rw) */
    unsigned int reserved_12: 3;
    unsigned int OE1: 1;                    /** \brief [15:15] Output Enable for OTGB1 (rw) */
    unsigned int reserved_16: 16;
} Ifx_INT_OIT_Bits;

/** OTGM IRQ MUX Missed IRQ Select */
typedef struct
{
    unsigned int MIRQ: 10;                  /** \brief [9:0] SRN Index for Missed Interrupt Trigger (rw) */
    unsigned int reserved_10: 22;
} Ifx_INT_OIXMS_Bits;

/** OTGM IRQ MUX Select 0 */
typedef struct
{
    unsigned int IRQ0: 10;                  /** \brief [9:0] SRN Index for Interrupt Trigger 0 (rw) */
    unsigned int reserved_10: 6;
    unsigned int IRQ1: 10;                  /** \brief [25:16] SRN Index for Interrupt Trigger 1 (rw) */
    unsigned int reserved_26: 6;
} Ifx_INT_OIXS0_Bits;

/** OTGM IRQ MUX Select 1 */
typedef struct
{
    unsigned int IRQ2: 10;                  /** \brief [9:0] SRN Index for Interrupt Trigger 2 (rw) */
    unsigned int reserved_10: 6;
    unsigned int IRQ3: 10;                  /** \brief [25:16] SRN Index for Interrupt Trigger 3 (rw) */
    unsigned int reserved_26: 6;
} Ifx_INT_OIXS1_Bits;

/** OTGM IRQ MUX Trigger Set Select */
typedef struct
{
    unsigned int TGS: 2;                    /** \brief [1:0] Trigger Set Select for OTGB0/1 Overlay (rw) */
    unsigned int reserved_2: 6;
    unsigned int OBS: 2;                    /** \brief [9:8] Overlay Byte Select (rw) */
    unsigned int reserved_10: 22;
} Ifx_INT_OIXTS_Bits;

/** OTGM MCDS I/F Sensitivity Negedge */
typedef struct
{
    unsigned int OTGB0: 16;                 /** \brief [15:0] Bitwise Negedge Sensitivity for OTGB0 (rw) */
    unsigned int OTGB1: 16;                 /** \brief [31:16] Bitwise Negedge Sensitivity for OTGB1 (rw) */
} Ifx_INT_OMISN_Bits;

/** OTGM MCDS I/F Sensitivity Posedge */
typedef struct
{
    unsigned int OTGB0: 16;                 /** \brief [15:0] Bitwise Posedge Sensitivity for OTGB0 (rw) */
    unsigned int OTGB1: 16;                 /** \brief [31:16] Bitwise Posedge Sensitivity for OTGB1 (rw) */
} Ifx_INT_OMISP_Bits;

/** OTGM OTGB0/1 Status */
typedef struct
{
    unsigned int OTGB0: 16;                 /** \brief [15:0] Status of OTGB0 (rh) */
    unsigned int OTGB1: 16;                 /** \brief [31:16] Status of OTGB1 (rh) */
} Ifx_INT_OOBS_Bits;

/** OTGM SSI Control */
typedef struct
{
    unsigned int TGS: 2;                    /** \brief [1:0] Trigger Set for OTGB0/1 (rw) */
    unsigned int TGB: 1;                    /** \brief [2:2] OTGB0/1 Bus Select (rw) */
    unsigned int reserved_3: 29;
} Ifx_INT_OSSIC_Bits;

/** Service Request Broadcast Register 0 */
typedef struct
{
    unsigned int TRIG0: 1;                  /** \brief [0:0] General Purpose Service Request Trigger 0 (rw) */
    unsigned int TRIG1: 1;                  /** \brief [1:1] General Purpose Service Request Trigger 1 (rw) */
    unsigned int TRIG2: 1;                  /** \brief [2:2] General Purpose Service Request Trigger 2 (rw) */
    unsigned int TRIG3: 1;                  /** \brief [3:3] General Purpose Service Request Trigger 3 (rw) */
    unsigned int reserved_4: 28;
} Ifx_INT_SRB0_Bits;

/** Service Request Broadcast Register 1 */
typedef struct
{
    unsigned int TRIG0: 1;                  /** \brief [0:0] General Purpose Service Request Trigger 0 (rw) */
    unsigned int TRIG1: 1;                  /** \brief [1:1] General Purpose Service Request Trigger 1 (rw) */
    unsigned int TRIG2: 1;                  /** \brief [2:2] General Purpose Service Request Trigger 2 (rw) */
    unsigned int TRIG3: 1;                  /** \brief [3:3] General Purpose Service Request Trigger 3 (rw) */
    unsigned int reserved_4: 28;
} Ifx_INT_SRB1_Bits;

/** Service Request Broadcast Register 2 */
typedef struct
{
    unsigned int TRIG0: 1;                  /** \brief [0:0] General Purpose Service Request Trigger 0 (rw) */
    unsigned int TRIG1: 1;                  /** \brief [1:1] General Purpose Service Request Trigger 1 (rw) */
    unsigned int TRIG2: 1;                  /** \brief [2:2] General Purpose Service Request Trigger 2 (rw) */
    unsigned int TRIG3: 1;                  /** \brief [3:3] General Purpose Service Request Trigger 3 (rw) */
    unsigned int reserved_4: 28;
} Ifx_INT_SRB2_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_ACCEN00_Bits B;
} Ifx_INT_ACCEN00;

/** Kernel 0 Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_ACCEN01_Bits B;
} Ifx_INT_ACCEN01;

/** Kernel 1 Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_ACCEN10_Bits B;
} Ifx_INT_ACCEN10;

/** Kernel 1 Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_ACCEN11_Bits B;
} Ifx_INT_ACCEN11;

/** Error Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_ICU_ECR_Bits B;
} Ifx_INT_ICU_ECR;

/** Last Acknowledged Service Request Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_ICU_LASR_Bits B;
} Ifx_INT_ICU_LASR;

/** Latest Winning Service Request Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_ICU_LWSR_Bits B;
} Ifx_INT_ICU_LWSR;

/** OTGM IRQ Trace */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_OIT_Bits B;
} Ifx_INT_OIT;

/** OTGM IRQ MUX Missed IRQ Select */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_OIXMS_Bits B;
} Ifx_INT_OIXMS;

/** OTGM IRQ MUX Select 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_OIXS0_Bits B;
} Ifx_INT_OIXS0;

/** OTGM IRQ MUX Select 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_OIXS1_Bits B;
} Ifx_INT_OIXS1;

/** OTGM IRQ MUX Trigger Set Select */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_OIXTS_Bits B;
} Ifx_INT_OIXTS;

/** OTGM MCDS I/F Sensitivity Negedge */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_OMISN_Bits B;
} Ifx_INT_OMISN;

/** OTGM MCDS I/F Sensitivity Posedge */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_OMISP_Bits B;
} Ifx_INT_OMISP;

/** OTGM OTGB0/1 Status */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_OOBS_Bits B;
} Ifx_INT_OOBS;

/** OTGM SSI Control */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_OSSIC_Bits B;
} Ifx_INT_OSSIC;

/** Service Request Broadcast Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_SRB0_Bits B;
} Ifx_INT_SRB0;

/** Service Request Broadcast Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_SRB1_Bits B;
} Ifx_INT_SRB1;

/** Service Request Broadcast Register 2 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_INT_SRB2_Bits B;
} Ifx_INT_SRB2;

/******************************************************************************/
/*                           Struct (3 - Object L1)                           */
/******************************************************************************/

/** Interrupt router channel */
typedef volatile struct
{
    Ifx_INT_ICU_LWSR LWSR;                  /** \brief 0, Latest Winning Service Request Register */
    Ifx_INT_ICU_LASR LASR;                  /** \brief 4, Last Acknowledged Service Request Register */
    Ifx_INT_ICU_ECR ECR;                    /** \brief 8, Error Capture Register */
    unsigned char reserved_C[4];            /** \brief C */
} Ifx_INT_ICU;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** Interrupt router object */
typedef volatile struct
{
    unsigned char reserved_0[8];            /** \brief 0 */
    Ifx_ID1 ID;                             /** \brief 8, Module Identification Register */
    unsigned char reserved_C[4];            /** \brief C */
    Ifx_INT_SRB0 SRB0;                      /** \brief 10, Service Request Broadcast Register 0 */
    Ifx_INT_SRB1 SRB1;                      /** \brief 14, Service Request Broadcast Register 1 */
    Ifx_INT_SRB2 SRB2;                      /** \brief 18, Service Request Broadcast Register 2 */
    unsigned char reserved_1C[100];         /** \brief 1C */
    Ifx_INT_OOBS OOBS;                      /** \brief 80, OTGM OTGB0/1 Status */
    Ifx_INT_OSSIC OSSIC;                    /** \brief 84, OTGM SSI Control */
    Ifx_INT_OIXTS OIXTS;                    /** \brief 88, OTGM IRQ MUX Trigger Set Select */
    Ifx_INT_OIXMS OIXMS;                    /** \brief 8C, OTGM IRQ MUX Missed IRQ Select */
    Ifx_INT_OIXS0 OIXS0;                    /** \brief 90, OTGM IRQ MUX Select 0 */
    Ifx_INT_OIXS1 OIXS1;                    /** \brief 94, OTGM IRQ MUX Select 1 */
    unsigned char reserved_98[8];           /** \brief 98 */
    Ifx_INT_OIT OIT;                        /** \brief A0, OTGM IRQ Trace */
    Ifx_INT_OMISP OMISP;                    /** \brief A4, OTGM MCDS I/F Sensitivity Posedge */
    Ifx_INT_OMISN OMISN;                    /** \brief A8, OTGM MCDS I/F Sensitivity Negedge */
    unsigned char reserved_AC[68];          /** \brief AC */
    Ifx_INT_ACCEN01 ACCEN01;                /** \brief F0, Kernel 0 Access Enable Register 1 */
    Ifx_INT_ACCEN00 ACCEN00;                /** \brief F4, Access Enable Register 0 */
    Ifx_INT_ACCEN11 ACCEN11;                /** \brief F8, Kernel 1 Access Enable Register 1 */
    Ifx_INT_ACCEN10 ACCEN10;                /** \brief FC, Kernel 1 Access Enable Register 0 */
    Ifx_INT_ICU CH[7];                      /** \brief 100, Interrupt router channel */
    unsigned char reserved_170[3728];       /** \brief 170 */
} Ifx_INT;
/******************************************************************************/
#endif /* IFXINT_REGDEF_H */

