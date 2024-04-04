/**
 * \file IfxStm_regdef.h
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
#ifndef IFXSTM_REGDEF_H
#define IFXSTM_REGDEF_H
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
} Ifx_STM_ACCEN0_Bits;

/** Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_STM_ACCEN1_Bits;

/** Timer Capture Register */
typedef struct
{
    unsigned int STMCAP: 32;                /** \brief [31:0] Captured System Timer Bits [63:32] (rh) */
} Ifx_STM_CAP_Bits;

/** Compare Match Control Register */
typedef struct
{
    unsigned int MSIZE0: 5;                 /** \brief [4:0] Compare Register Size for CMP0 (rw) */
    unsigned int reserved_5: 3;
    unsigned int MSTART0: 5;                /** \brief [12:8] Start Bit Location for CMP0 (rw) */
    unsigned int reserved_13: 3;
    unsigned int MSIZE1: 5;                 /** \brief [20:16] Compare Register Size for CMP1 (rw) */
    unsigned int reserved_21: 3;
    unsigned int MSTART1: 5;                /** \brief [28:24] Start Bit Location for CMP1 (rw) */
    unsigned int reserved_29: 3;
} Ifx_STM_CMCON_Bits;

/** Compare Register */
typedef struct
{
    unsigned int CMPVAL: 32;                /** \brief [31:0] Compare Value of Compare Register x (rw) */
} Ifx_STM_CMP_Bits;

/** Interrupt Control Register */
typedef struct
{
    unsigned int CMP0EN: 1;                 /** \brief [0:0] Compare Register CMP0 Interrupt Enable Control (rw) */
    unsigned int CMP0IR: 1;                 /** \brief [1:1] Compare Register CMP0 Interrupt Request Flag (rh) */
    unsigned int CMP0OS: 1;                 /** \brief [2:2] Compare Register CMP0 Interrupt Output Selection (rw) */
    unsigned int reserved_3: 1;
    unsigned int CMP1EN: 1;                 /** \brief [4:4] Compare Register CMP1 Interrupt Enable Control (rw) */
    unsigned int CMP1IR: 1;                 /** \brief [5:5] Compare Register CMP1 Interrupt Request Flag (rh) */
    unsigned int CMP1OS: 1;                 /** \brief [6:6] Compare Register CMP1 Interrupt Output Selection (rw) */
    unsigned int reserved_7: 25;
} Ifx_STM_ICR_Bits;

/** Interrupt Set/Clear Register */
typedef struct
{
    unsigned int CMP0IRR: 1;                /** \brief [0:0] Reset Compare Register CMP0 Interrupt Flag (w) */
    unsigned int CMP0IRS: 1;                /** \brief [1:1] Set Compare Register CMP0 Interrupt Flag (w) */
    unsigned int CMP1IRR: 1;                /** \brief [2:2] Reset Compare Register CMP1 Interrupt Flag (w) */
    unsigned int CMP1IRS: 1;                /** \brief [3:3] Set Compare Register CMP1 Interrupt Flag (w) */
    unsigned int reserved_4: 28;
} Ifx_STM_ISCR_Bits;

/** Kernel Reset Register 0 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int RSTSTAT: 1;                /** \brief [1:1] Kernel Reset Status (rw) */
    unsigned int reserved_2: 30;
} Ifx_STM_KRST0_Bits;

/** Kernel Reset Register 1 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int reserved_1: 31;
} Ifx_STM_KRST1_Bits;

/** Kernel Reset Status Clear Register */
typedef struct
{
    unsigned int CLR: 1;                    /** \brief [0:0] Kernel Reset Status Clear (w) */
    unsigned int reserved_1: 31;
} Ifx_STM_KRSTCLR_Bits;

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
} Ifx_STM_OCS_Bits;

/** Timer Register 0 */
typedef struct
{
    unsigned int STM: 32;                   /** \brief [31:0] System Timer Bits [31:0] (r) */
} Ifx_STM_TIM0_Bits;

/** Timer Register 1 */
typedef struct
{
    unsigned int STM: 32;                   /** \brief [31:0] System Timer Bits [35:4] (r) */
} Ifx_STM_TIM1_Bits;

/** Timer Register 2 */
typedef struct
{
    unsigned int STM: 32;                   /** \brief [31:0] System Timer Bits [39:8] (r) */
} Ifx_STM_TIM2_Bits;

/** Timer Register 3 */
typedef struct
{
    unsigned int STM: 32;                   /** \brief [31:0] System Timer Bits [43:12] (r) */
} Ifx_STM_TIM3_Bits;

/** Timer Register 4 */
typedef struct
{
    unsigned int STM: 32;                   /** \brief [31:0] System Timer Bits [47:16] (r) */
} Ifx_STM_TIM4_Bits;

/** Timer Register 5 */
typedef struct
{
    unsigned int STM: 32;                   /** \brief [31:0] System Timer Bits [51:20] (r) */
} Ifx_STM_TIM5_Bits;

/** Timer Register 6 */
typedef struct
{
    unsigned int STM: 32;                   /** \brief [31:0] System Timer Bits [63:32] (r) */
} Ifx_STM_TIM6_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_ACCEN0_Bits B;
} Ifx_STM_ACCEN0;

/** Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_ACCEN1_Bits B;
} Ifx_STM_ACCEN1;

/** Timer Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_CAP_Bits B;
} Ifx_STM_CAP;

/** Compare Match Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_CMCON_Bits B;
} Ifx_STM_CMCON;

/** Compare Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_CMP_Bits B;
} Ifx_STM_CMP;

/** Interrupt Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_ICR_Bits B;
} Ifx_STM_ICR;

/** Interrupt Set/Clear Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_ISCR_Bits B;
} Ifx_STM_ISCR;

/** Kernel Reset Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_KRST0_Bits B;
} Ifx_STM_KRST0;

/** Kernel Reset Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_KRST1_Bits B;
} Ifx_STM_KRST1;

/** Kernel Reset Status Clear Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_KRSTCLR_Bits B;
} Ifx_STM_KRSTCLR;

/** OCDS Control and Status */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_OCS_Bits B;
} Ifx_STM_OCS;

/** Timer Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_TIM0_Bits B;
} Ifx_STM_TIM0;

/** Timer Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_TIM1_Bits B;
} Ifx_STM_TIM1;

/** Timer Register 2 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_TIM2_Bits B;
} Ifx_STM_TIM2;

/** Timer Register 3 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_TIM3_Bits B;
} Ifx_STM_TIM3;

/** Timer Register 4 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_TIM4_Bits B;
} Ifx_STM_TIM4;

/** Timer Register 5 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_TIM5_Bits B;
} Ifx_STM_TIM5;

/** Timer Register 6 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_STM_TIM6_Bits B;
} Ifx_STM_TIM6;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** STM object */
typedef volatile struct
{
    Ifx_CLC3 CLC;                           /** \brief 0, Clock Control Register */
    unsigned char reserved_4[4];            /** \brief 4 */
    Ifx_ID1 ID;                             /** \brief 8, Module Identification Register */
    unsigned char reserved_C[4];            /** \brief C */
    Ifx_STM_TIM0 TIM0;                      /** \brief 10, Timer Register 0 */
    Ifx_STM_TIM1 TIM1;                      /** \brief 14, Timer Register 1 */
    Ifx_STM_TIM2 TIM2;                      /** \brief 18, Timer Register 2 */
    Ifx_STM_TIM3 TIM3;                      /** \brief 1C, Timer Register 3 */
    Ifx_STM_TIM4 TIM4;                      /** \brief 20, Timer Register 4 */
    Ifx_STM_TIM5 TIM5;                      /** \brief 24, Timer Register 5 */
    Ifx_STM_TIM6 TIM6;                      /** \brief 28, Timer Register 6 */
    Ifx_STM_CAP CAP;                        /** \brief 2C, Timer Capture Register */
    Ifx_STM_CMP CMP[2];                     /** \brief 30, Compare Register */
    Ifx_STM_CMCON CMCON;                    /** \brief 38, Compare Match Control Register */
    Ifx_STM_ICR ICR;                        /** \brief 3C, Interrupt Control Register */
    Ifx_STM_ISCR ISCR;                      /** \brief 40, Interrupt Set/Clear Register */
    unsigned char reserved_44[164];         /** \brief 44 */
    Ifx_STM_OCS OCS;                        /** \brief E8, OCDS Control and Status */
    Ifx_STM_KRSTCLR KRSTCLR;                /** \brief EC, Kernel Reset Status Clear Register */
    Ifx_STM_KRST1 KRST1;                    /** \brief F0, Kernel Reset Register 1 */
    Ifx_STM_KRST0 KRST0;                    /** \brief F4, Kernel Reset Register 0 */
    Ifx_STM_ACCEN1 ACCEN1;                  /** \brief F8, Access Enable Register 1 */
    Ifx_STM_ACCEN0 ACCEN0;                  /** \brief FC, Access Enable Register 0 */
} Ifx_STM;
/******************************************************************************/
#endif /* IFXSTM_REGDEF_H */

