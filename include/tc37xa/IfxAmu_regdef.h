/**
 * \file IfxAmu_regdef.h
 * \brief
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC37x_TS_V2.6.0.R0
 * Specification: TC3xx Target Specification.V2.6.0
 * MAY BE CHANGED BY USER [yes/no]: No
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
 * \defgroup IfxSfr_Amu_Registers Amu Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Amu_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Amu_Registers
 * 
 * \defgroup IfxSfr_Amu_Registers_union Register unions
 * \ingroup IfxSfr_Amu_Registers
 * 
 * \defgroup IfxSfr_Amu_Registers_struct Memory map
 * \ingroup IfxSfr_Amu_Registers
 */
#ifndef IFXAMU_REGDEF_H
#define IFXAMU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Amu_Registers_Bitfields
 * \{  */
/** \brief Control Register 0 */
typedef struct _Ifx_AMU_CTRL0_Bits
{
    Ifx_UReg_32Bit EN:1;              /**< \brief [0:0] Enable Bit - EN (rwh) */
    Ifx_UReg_32Bit ENCN:1;            /**< \brief [1:1] Enable Condition Bit - ENCN (w) */
    Ifx_UReg_32Bit READY:1;           /**< \brief [2:2] Ready Flag - READY (rh) */
    Ifx_UReg_32Bit SDOWN:2;           /**< \brief [4:3] Slowdown Flag - SDOWN (rw) */
    Ifx_UReg_32Bit SDOWNCN:1;         /**< \brief [5:5] Slowdown Condition Bit - SDOWNCN (w) */
    Ifx_UReg_32Bit LI:1;              /**< \brief [6:6] Limit Interrupt - LI (rh) */
    Ifx_UReg_32Bit ERR:1;             /**< \brief [7:7] Error Interrupt - ERR (rh) */
    Ifx_UReg_32Bit LIM2RDY:1;         /**< \brief [8:8] Limit to Ready Interrupt - LIM2RDY (rw) */
    Ifx_UReg_32Bit RDY2LIM:1;         /**< \brief [9:9] Ready to Limit Interrupt - RDY2LIM (rw) */
    Ifx_UReg_32Bit SL:1;              /**< \brief [10:10] Stop on Limit Interrupt - SL (rw) */
    Ifx_UReg_32Bit REGACCEN:1;        /**< \brief [11:11] Allow Register Write when Active - REGACCEN (rw) */
    Ifx_UReg_32Bit MAX:3;             /**< \brief [14:12] Maximum Speed Control - MAX (rw) */
    Ifx_UReg_32Bit MAXCN:1;           /**< \brief [15:15] Maximum Speed Condition Bit - MAXCN (w) */
    Ifx_UReg_32Bit ID:7;              /**< \brief [22:16] Identifier - ID (rw) */
    Ifx_UReg_32Bit IDCN:1;            /**< \brief [23:23] Identifier Condition Bit - IDCN (w) */
    Ifx_UReg_32Bit CSH:1;             /**< \brief [24:24] Current Shaping Enable - CSH (rw) */
    Ifx_UReg_32Bit CSHCN:1;           /**< \brief [25:25] Current Shaping Enable Condition Bit - CSHCN (w) */
    Ifx_UReg_32Bit HSPEED:1;          /**< \brief [26:26] Half Speed - HSPEED (rw) */
    Ifx_UReg_32Bit HSPEEDCN:1;        /**< \brief [27:27] Identifier Condition Bit - HSPEEDCN (w) */
    Ifx_UReg_32Bit reserved_28:2;     /**< \brief [29:28] \internal Reserved */
    Ifx_UReg_32Bit CSHS:2;            /**< \brief [31:30] Current Shaping Status - CSHS (rh) */
} Ifx_AMU_CTRL0_Bits;

/** \brief Control Register 0 Mirror */
typedef struct _Ifx_AMU_CTRL0MIR_Bits
{
    Ifx_UReg_32Bit EN:1;              /**< \brief [0:0] Enable Bit - EN (rh) */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit READY:1;           /**< \brief [2:2] Ready Flag - READY (rh) */
    Ifx_UReg_32Bit SDOWN:2;           /**< \brief [4:3] Slowdown Flag - SDOWN (rh) */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit LI:1;              /**< \brief [6:6] Limit Interrupt - LI (rh) */
    Ifx_UReg_32Bit ERR:1;             /**< \brief [7:7] Error Interrupt - ERR (rh) */
    Ifx_UReg_32Bit LIM2RDY:1;         /**< \brief [8:8] Limit to Ready Interrupt - LIM2RDY (rh) */
    Ifx_UReg_32Bit RDY2LIM:1;         /**< \brief [9:9] Ready to Limit Interrupt - RDY2LIM (rh) */
    Ifx_UReg_32Bit SL:1;              /**< \brief [10:10] Stop on Limit Interrupt - SL (rh) */
    Ifx_UReg_32Bit REGACCEN:1;        /**< \brief [11:11] Allow Register Write when Active - REGACCEN (rh) */
    Ifx_UReg_32Bit MAX:3;             /**< \brief [14:12] Maximum Speed Control - MAX (rh) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit ID:7;              /**< \brief [22:16] Identifier - ID (rh) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit CSH:1;             /**< \brief [24:24] Current Shaping Enable - CSH (rh) */
    Ifx_UReg_32Bit reserved_25:1;     /**< \brief [25:25] \internal Reserved */
    Ifx_UReg_32Bit HSPEED:1;          /**< \brief [26:26] Half Speed - HSPEED (rh) */
    Ifx_UReg_32Bit reserved_27:3;     /**< \brief [29:27] \internal Reserved */
    Ifx_UReg_32Bit CSHS:2;            /**< \brief [31:30] Current Shaping Status - CSHS (rh) */
} Ifx_AMU_CTRL0MIR_Bits;

/** \brief Control Register 1 */
typedef struct _Ifx_AMU_CTRL1_Bits
{
    Ifx_UReg_32Bit EXPFIX:7;          /**< \brief [6:0] Exponent for Fixed Exponent Format - EXPFIX (rw) */
    Ifx_UReg_32Bit reserved_7:9;      /**< \brief [15:7] \internal Reserved */
    Ifx_UReg_32Bit VFRMT:2;           /**< \brief [17:16] Parameter Matrix V Format - VFRMT (rw) */
    Ifx_UReg_32Bit CFGSET:1;          /**< \brief [18:18] Configuration Set - CFGSET (rw) */
    Ifx_UReg_32Bit reserved_19:13;    /**< \brief [31:19] \internal Reserved */
} Ifx_AMU_CTRL1_Bits;

/** \brief Error Enable Register */
typedef struct _Ifx_AMU_EER_Bits
{
    Ifx_UReg_32Bit P7MAX:1;           /**< \brief [0:0] Enable Interrupt on P7 Over Maximum Error - P7MAX (rw) */
    Ifx_UReg_32Bit IINF:1;            /**< \brief [1:1] Enable Interrupt on Input Infinity Error - IINF (rw) */
    Ifx_UReg_32Bit INAN:1;            /**< \brief [2:2] Enable Interrupt on Input NaN Error - INAN (rw) */
    Ifx_UReg_32Bit OOV:1;             /**< \brief [3:3] Enable Interrupt on Output Overflow - OOV (rw) */
    Ifx_UReg_32Bit ME:1;              /**< \brief [4:4] Enable Interrupt on Memory Error - ME (rw) */
    Ifx_UReg_32Bit REGACC:1;          /**< \brief [5:5] Enable Interrupt on Register Access during Computation Error - REGACC (rw) */
    Ifx_UReg_32Bit DENORM:1;          /**< \brief [6:6] Enable Interrupt on Input Denormalised Number Error - DENORM (rw) */
    Ifx_UReg_32Bit reserved_7:8;      /**< \brief [14:7] \internal Reserved */
    Ifx_UReg_32Bit ECC_STOP:1;        /**< \brief [15:15] Stop on ECC Error - ECC_STOP (r) */
    Ifx_UReg_32Bit reserved_16:6;     /**< \brief [21:16] \internal Reserved */
    Ifx_UReg_32Bit DENEN:1;           /**< \brief [22:22] Enable Stop on Input Denormalised Number Error. - DENEN (rwh) */
    Ifx_UReg_32Bit EECN:1;            /**< \brief [23:23] Enable Stop Condition Bit - EECN (w) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_AMU_EER_Bits;

/** \brief Error Status Register */
typedef struct _Ifx_AMU_ERRSR_Bits
{
    Ifx_UReg_32Bit P7MAX:1;           /**< \brief [0:0] P7 Over Maximum Error - P7MAX (rh) */
    Ifx_UReg_32Bit IINF:1;            /**< \brief [1:1] Input Infinity Error - IINF (rh) */
    Ifx_UReg_32Bit INAN:1;            /**< \brief [2:2] Input NaN Error - INAN (rh) */
    Ifx_UReg_32Bit OOV:1;             /**< \brief [3:3] Output Overflow - OOV (rh) */
    Ifx_UReg_32Bit ME:1;              /**< \brief [4:4] Memory Error - ME (rh) */
    Ifx_UReg_32Bit REGACC:1;          /**< \brief [5:5] Register Access during Computation Error - REGACC (rh) */
    Ifx_UReg_32Bit DENORM:1;          /**< \brief [6:6] Input Denormalised Number Error - DENORM (rh) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit ALGOPOS:4;         /**< \brief [11:8] Algorithm Position - ALGOPOS (rh) */
    Ifx_UReg_32Bit reserved_12:1;     /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit MEU:1;             /**< \brief [13:13] Uncorrectable Memory Error - MEU (rh) */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit SRI_ECC:1;         /**< \brief [15:15] Uncorrectable Memory Error - SRI_ECC (rh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_AMU_ERRSR_Bits;

/** \brief Current Coefficient Matrix L Pointer Register */
typedef struct _Ifx_AMU_LCURRPFLOAT_Bits
{
    Ifx_UReg_32Bit LPFLOAT:32;        /**< \brief [31:0] AMU Coefficient Register (Pointer to Float) - LPFLOAT (rh) */
} Ifx_AMU_LCURRPFLOAT_Bits;

/** \brief Coefficient Array L Register */
typedef struct _Ifx_AMU_LPFLOAT_Bits
{
    Ifx_UReg_32Bit LPFLOAT:32;        /**< \brief [31:0] AMU Coefficient Array L (Pointer to Float) - LPFLOAT (rw) */
} Ifx_AMU_LPFLOAT_Bits;

/** \brief Parameter p8 Register */
typedef struct _Ifx_AMU_OLCOMP_Bits
{
    Ifx_UReg_32Bit CP8H2N:16;         /**< \brief [15:0] Trigger Value for switch from half to full speed - CP8H2N (rw) */
    Ifx_UReg_32Bit CPHN2H:16;         /**< \brief [31:16] Trigger Value for switch from full to half speed - CPHN2H (rw) */
} Ifx_AMU_OLCOMP_Bits;

/** \brief Parameter p10 Register */
typedef struct _Ifx_AMU_P10SINT_Bits
{
    Ifx_UReg_32Bit NCROSSING:16;      /**< \brief [15:0] Loop Counter Value to Raise Limit Interrupt - NCROSSING (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_AMU_P10SINT_Bits;

/** \brief Current Parameter p1 Pointer Register */
typedef struct _Ifx_AMU_P1CURRPFLOAT_Bits
{
    Ifx_UReg_32Bit P1PFLOAT:32;       /**< \brief [31:0] AMU Input Vector Register (Pointer to Float) - P1PFLOAT (rh) */
} Ifx_AMU_P1CURRPFLOAT_Bits;

/** \brief Parameter p1 Register */
typedef struct _Ifx_AMU_P1PFLOAT_Bits
{
    Ifx_UReg_32Bit P1PFLOAT:32;       /**< \brief [31:0] AMU P1 Parameter Register (Pointer to Float) - P1PFLOAT (rw) */
} Ifx_AMU_P1PFLOAT_Bits;

/** \brief Current Parameter p2 Pointer Register */
typedef struct _Ifx_AMU_P2CURRPFLOAT_Bits
{
    Ifx_UReg_32Bit P2PFLOAT:32;       /**< \brief [31:0] AMU Input Vector Register (Pointer to Float) - P2PFLOAT (rh) */
} Ifx_AMU_P2CURRPFLOAT_Bits;

/** \brief Parameter p2 Register */
typedef struct _Ifx_AMU_P2PFLOAT_Bits
{
    Ifx_UReg_32Bit P2PFLOAT:32;       /**< \brief [31:0] AMU P2 Parameter Register (Pointer to Float) - P2PFLOAT (rw) */
} Ifx_AMU_P2PFLOAT_Bits;

/** \brief Current Parameter p3 Pointer Register */
typedef struct _Ifx_AMU_P3CURRPFLOAT_Bits
{
    Ifx_UReg_32Bit P3PFLOAT:32;       /**< \brief [31:0] AMU Input Vector Register (Pointer to Float) - P3PFLOAT (rh) */
} Ifx_AMU_P3CURRPFLOAT_Bits;

/** \brief Parameter p3 Register */
typedef struct _Ifx_AMU_P3PFLOAT_Bits
{
    Ifx_UReg_32Bit P3PFLOAT:32;       /**< \brief [31:0] AMU P3 Parameter Register (Pointer to Float) - P3PFLOAT (rw) */
} Ifx_AMU_P3PFLOAT_Bits;

/** \brief Parameter p4 Register */
typedef struct _Ifx_AMU_P4FLOAT_Bits
{
    Ifx_UReg_32Bit P4FLOAT:32;        /**< \brief [31:0] AMU P4 Parameter Register (Float) - P4FLOAT (rw) */
} Ifx_AMU_P4FLOAT_Bits;

/** \brief Parameter p5 Register */
typedef struct _Ifx_AMU_P5FLOAT_Bits
{
    Ifx_UReg_32Bit P5FLOAT:32;        /**< \brief [31:0] AMU P5 Parameter Register (Float) - P5FLOAT (rw) */
} Ifx_AMU_P5FLOAT_Bits;

/** \brief Parameter p6 Register */
typedef struct _Ifx_AMU_P6SINT_Bits
{
    Ifx_UReg_32Bit NEND:16;           /**< \brief [15:0] Max Iteration Counter for Outer Loop - NEND (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_AMU_P6SINT_Bits;

/** \brief Parameter p7 Register */
typedef struct _Ifx_AMU_P7SINT_Bits
{
    Ifx_UReg_32Bit M:16;              /**< \brief [15:0] Max Iteration Counter for Inner Loop - M (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_AMU_P7SINT_Bits;

/** \brief Parameter p8 Register */
typedef struct _Ifx_AMU_P8SINT_Bits
{
    Ifx_UReg_32Bit NSTART:16;         /**< \brief [15:0] Start Value for Outer Loop - NSTART (rwh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_AMU_P8SINT_Bits;

/** \brief Interrupt Status Register */
typedef struct _Ifx_AMU_P8SINTMIR_Bits
{
    Ifx_UReg_32Bit NSTART:16;         /**< \brief [15:0] Start Value for Outer Loop - NSTART (rh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_AMU_P8SINTMIR_Bits;

/** \brief Parameter p9 Register */
typedef struct _Ifx_AMU_P9DOUBLEHIGH32_Bits
{
    Ifx_UReg_32Bit P9DOUBLE:32;       /**< \brief [31:0] AMU Parameter p9 Register (Double) - P9DOUBLE (rw) */
} Ifx_AMU_P9DOUBLEHIGH32_Bits;

/** \brief Parameter p9 Register */
typedef struct _Ifx_AMU_P9DOUBLELOW32_Bits
{
    Ifx_UReg_32Bit P9DOUBLE:32;       /**< \brief [31:0] AMU Parameter p9 Register (Double) - P9DOUBLE (rw) */
} Ifx_AMU_P9DOUBLELOW32_Bits;

/** \brief Current Input Vector Pointer Register */
typedef struct _Ifx_AMU_UCURRPFLOAT_Bits
{
    Ifx_UReg_32Bit UPFLOAT:32;        /**< \brief [31:0] AMU Input Vector Register (Pointer to Float) - UPFLOAT (rh) */
} Ifx_AMU_UCURRPFLOAT_Bits;

/** \brief Input Vector u Register */
typedef struct _Ifx_AMU_UPFLOAT_Bits
{
    Ifx_UReg_32Bit UPFLOAT:32;        /**< \brief [31:0] AMU Input Vector Register (Pointer to Float) - UPFLOAT (rwh) */
} Ifx_AMU_UPFLOAT_Bits;

/** \brief Current Coefficient Matrix V Pointer Register */
typedef struct _Ifx_AMU_VCURRPFLOAT_Bits
{
    Ifx_UReg_32Bit VPFLOAT:32;        /**< \brief [31:0] AMU V Coefficient Register (Pointer to Float) - VPFLOAT (rh) */
} Ifx_AMU_VCURRPFLOAT_Bits;

/** \brief Coefficient Matrix V Register */
typedef struct _Ifx_AMU_VPFLOAT_Bits
{
    Ifx_UReg_32Bit VPFLOAT:32;        /**< \brief [31:0] AMU V Parameter Register (Pointer to Float) - VPFLOAT (rw) */
} Ifx_AMU_VPFLOAT_Bits;

/** \brief Intermediate Result yRegister */
typedef struct _Ifx_AMU_YDOUBLEHIGH32_Bits
{
    Ifx_UReg_32Bit YDOUBLE:32;        /**< \brief [31:0] AMU v Result Register (Double) - YDOUBLE (rh) */
} Ifx_AMU_YDOUBLEHIGH32_Bits;

/** \brief Intermediate Result yRegister */
typedef struct _Ifx_AMU_YDOUBLELOW32_Bits
{
    Ifx_UReg_32Bit YDOUBLE:32;        /**< \brief [31:0] AMU v Result Register (Double) - YDOUBLE (rh) */
} Ifx_AMU_YDOUBLELOW32_Bits;

/** \brief Intermediate Result y Float Register */
typedef struct _Ifx_AMU_YFLOAT_Bits
{
    Ifx_UReg_32Bit YFLOAT:32;         /**< \brief [31:0] AMU v Result Register (Float) - YFLOAT (rh) */
} Ifx_AMU_YFLOAT_Bits;

/** \brief Return Value Register */
typedef struct _Ifx_AMU_ZDOUBLEHIGH32_Bits
{
    Ifx_UReg_32Bit ZDOUBLE:32;        /**< \brief [31:0] AMU return value z Register (Double) - ZDOUBLE (rh) */
} Ifx_AMU_ZDOUBLEHIGH32_Bits;

/** \brief Return Value Register */
typedef struct _Ifx_AMU_ZDOUBLELOW32_Bits
{
    Ifx_UReg_32Bit ZDOUBLE:32;        /**< \brief [31:0] AMU Return value z Register (Double) - ZDOUBLE (rh) */
} Ifx_AMU_ZDOUBLELOW32_Bits;

/** \brief Return Value Register */
typedef struct _Ifx_AMU_ZFLOAT_Bits
{
    Ifx_UReg_32Bit ZFLOAT:32;         /**< \brief [31:0] AMU Result Register (Float) - ZFLOAT (rh) */
} Ifx_AMU_ZFLOAT_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_amu_Registers_union
 * \{   */
/** \brief Control Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_CTRL0_Bits B;             /**< \brief Bitfield access */
} Ifx_AMU_CTRL0;

/** \brief Control Register 0 Mirror   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_CTRL0MIR_Bits B;          /**< \brief Bitfield access */
} Ifx_AMU_CTRL0MIR;

/** \brief Control Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_CTRL1_Bits B;             /**< \brief Bitfield access */
} Ifx_AMU_CTRL1;

/** \brief Error Enable Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_EER_Bits B;               /**< \brief Bitfield access */
} Ifx_AMU_EER;

/** \brief Error Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_ERRSR_Bits B;             /**< \brief Bitfield access */
} Ifx_AMU_ERRSR;

/** \brief Current Coefficient Matrix L Pointer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_LCURRPFLOAT_Bits B;       /**< \brief Bitfield access */
} Ifx_AMU_LCURRPFLOAT;

/** \brief Coefficient Array L Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_LPFLOAT_Bits B;           /**< \brief Bitfield access */
} Ifx_AMU_LPFLOAT;

/** \brief Parameter p8 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_OLCOMP_Bits B;            /**< \brief Bitfield access */
} Ifx_AMU_OLCOMP;

/** \brief Parameter p10 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_P10SINT_Bits B;           /**< \brief Bitfield access */
} Ifx_AMU_P10SINT;

/** \brief Current Parameter p1 Pointer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_P1CURRPFLOAT_Bits B;      /**< \brief Bitfield access */
} Ifx_AMU_P1CURRPFLOAT;

/** \brief Parameter p1 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_P1PFLOAT_Bits B;          /**< \brief Bitfield access */
} Ifx_AMU_P1PFLOAT;

/** \brief Current Parameter p2 Pointer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_P2CURRPFLOAT_Bits B;      /**< \brief Bitfield access */
} Ifx_AMU_P2CURRPFLOAT;

/** \brief Parameter p2 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_P2PFLOAT_Bits B;          /**< \brief Bitfield access */
} Ifx_AMU_P2PFLOAT;

/** \brief Current Parameter p3 Pointer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_P3CURRPFLOAT_Bits B;      /**< \brief Bitfield access */
} Ifx_AMU_P3CURRPFLOAT;

/** \brief Parameter p3 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_P3PFLOAT_Bits B;          /**< \brief Bitfield access */
} Ifx_AMU_P3PFLOAT;

/** \brief Parameter p4 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_P4FLOAT_Bits B;           /**< \brief Bitfield access */
} Ifx_AMU_P4FLOAT;

/** \brief Parameter p5 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_P5FLOAT_Bits B;           /**< \brief Bitfield access */
} Ifx_AMU_P5FLOAT;

/** \brief Parameter p6 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_P6SINT_Bits B;            /**< \brief Bitfield access */
} Ifx_AMU_P6SINT;

/** \brief Parameter p7 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_P7SINT_Bits B;            /**< \brief Bitfield access */
} Ifx_AMU_P7SINT;

/** \brief Parameter p8 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_P8SINT_Bits B;            /**< \brief Bitfield access */
} Ifx_AMU_P8SINT;

/** \brief Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_P8SINTMIR_Bits B;         /**< \brief Bitfield access */
} Ifx_AMU_P8SINTMIR;

/** \brief Parameter p9 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_P9DOUBLEHIGH32_Bits B;    /**< \brief Bitfield access */
} Ifx_AMU_P9DOUBLEHIGH32;

/** \brief Parameter p9 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_P9DOUBLELOW32_Bits B;     /**< \brief Bitfield access */
} Ifx_AMU_P9DOUBLELOW32;

/** \brief Current Input Vector Pointer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_UCURRPFLOAT_Bits B;       /**< \brief Bitfield access */
} Ifx_AMU_UCURRPFLOAT;

/** \brief Input Vector u Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_UPFLOAT_Bits B;           /**< \brief Bitfield access */
} Ifx_AMU_UPFLOAT;

/** \brief Current Coefficient Matrix V Pointer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_VCURRPFLOAT_Bits B;       /**< \brief Bitfield access */
} Ifx_AMU_VCURRPFLOAT;

/** \brief Coefficient Matrix V Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_VPFLOAT_Bits B;           /**< \brief Bitfield access */
} Ifx_AMU_VPFLOAT;

/** \brief Intermediate Result yRegister   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_YDOUBLEHIGH32_Bits B;     /**< \brief Bitfield access */
} Ifx_AMU_YDOUBLEHIGH32;

/** \brief Intermediate Result yRegister   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_YDOUBLELOW32_Bits B;      /**< \brief Bitfield access */
} Ifx_AMU_YDOUBLELOW32;

/** \brief Intermediate Result y Float Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_YFLOAT_Bits B;            /**< \brief Bitfield access */
} Ifx_AMU_YFLOAT;

/** \brief Return Value Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_ZDOUBLEHIGH32_Bits B;     /**< \brief Bitfield access */
} Ifx_AMU_ZDOUBLEHIGH32;

/** \brief Return Value Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_ZDOUBLELOW32_Bits B;      /**< \brief Bitfield access */
} Ifx_AMU_ZDOUBLELOW32;

/** \brief Return Value Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_AMU_ZFLOAT_Bits B;            /**< \brief Bitfield access */
} Ifx_AMU_ZFLOAT;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxSfr_Amu_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief AMU object */
typedef volatile struct _Ifx_AMU
{
       Ifx_AMU_CTRL1                       CTRL1;                  /**< \brief 0, Control Register 1*/
       Ifx_AMU_EER                         EER;                    /**< \brief 4, Error Enable Register*/
       Ifx_AMU_P10SINT                     P10SINT;                /**< \brief 8, Parameter p10 Register*/
       Ifx_AMU_P6SINT                      P6SINT;                 /**< \brief C, Parameter p6 Register*/
       Ifx_AMU_P7SINT                      P7SINT;                 /**< \brief 10, Parameter p7 Register*/
       Ifx_AMU_P8SINT                      P8SINT;                 /**< \brief 14, Parameter p8 Register*/
       Ifx_AMU_P9DOUBLELOW32               P9DOUBLELOW32;          /**< \brief 18, Parameter p9 Register*/
       Ifx_AMU_P9DOUBLEHIGH32              P9DOUBLEHIGH32;         /**< \brief 1C, Parameter p9 Register*/
       Ifx_AMU_VPFLOAT                     VPFLOAT;                /**< \brief 20, Coefficient Matrix V Register*/
       Ifx_AMU_LPFLOAT                     LPFLOAT;                /**< \brief 24, Coefficient Array L Register*/
       Ifx_AMU_P1PFLOAT                    P1PFLOAT;               /**< \brief 28, Parameter p1 Register*/
       Ifx_AMU_P2PFLOAT                    P2PFLOAT;               /**< \brief 2C, Parameter p2 Register*/
       Ifx_AMU_P3PFLOAT                    P3PFLOAT;               /**< \brief 30, Parameter p3 Register*/
       Ifx_AMU_P4FLOAT                     P4FLOAT;                /**< \brief 34, Parameter p4 Register*/
       Ifx_AMU_P5FLOAT                     P5FLOAT;                /**< \brief 38, Parameter p5 Register*/
       Ifx_AMU_UPFLOAT                     UPFLOAT;                /**< \brief 3C, Input Vector u Register*/
       Ifx_AMU_OLCOMP                      OLCOMP;                 /**< \brief 40, Parameter p8 Register*/
       Ifx_AMU_CTRL0                       CTRL0;                  /**< \brief 44, Control Register 0*/
       Ifx_UReg_8Bit                       reserved_48[56];        /**< \brief 48, \internal Reserved */
       Ifx_AMU_ZDOUBLELOW32                ZDOUBLELOW32;           /**< \brief 80, Return Value Register*/
       Ifx_AMU_ZDOUBLEHIGH32               ZDOUBLEHIGH32;          /**< \brief 84, Return Value Register*/
       Ifx_AMU_ZFLOAT                      ZFLOAT;                 /**< \brief 88, Return Value Register*/
       Ifx_AMU_CTRL0MIR                    CTRL0MIR;               /**< \brief 8C, Control Register 0 Mirror*/
       Ifx_AMU_YDOUBLELOW32                YDOUBLELOW32;           /**< \brief 90, Intermediate Result yRegister*/
       Ifx_AMU_YDOUBLEHIGH32               YDOUBLEHIGH32;          /**< \brief 94, Intermediate Result yRegister*/
       Ifx_AMU_YFLOAT                      YFLOAT;                 /**< \brief 98, Intermediate Result y Float Register*/
       Ifx_AMU_ERRSR                       ERRSR;                  /**< \brief 9C, Error Status Register*/
       Ifx_AMU_P8SINTMIR                   P8SINTMIR;              /**< \brief A0, Interrupt Status Register*/
       Ifx_UReg_8Bit                       reserved_A4[4];         /**< \brief A4, \internal Reserved */
       Ifx_AMU_UCURRPFLOAT                 UCURRPFLOAT;            /**< \brief A8, Current Input Vector Pointer Register*/
       Ifx_AMU_P1CURRPFLOAT                P1CURRPFLOAT;           /**< \brief AC, Current Parameter p1 Pointer Register*/
       Ifx_AMU_P2CURRPFLOAT                P2CURRPFLOAT;           /**< \brief B0, Current Parameter p2 Pointer Register*/
       Ifx_AMU_P3CURRPFLOAT                P3CURRPFLOAT;           /**< \brief B4, Current Parameter p3 Pointer Register*/
       Ifx_AMU_VCURRPFLOAT                 VCURRPFLOAT;            /**< \brief B8, Current Coefficient Matrix V Pointer Register*/
       Ifx_AMU_LCURRPFLOAT                 LCURRPFLOAT;            /**< \brief BC, Current Coefficient Matrix L Pointer Register*/
       Ifx_UReg_8Bit                       reserved_C0[64];        /**< \brief C0, \internal Reserved */
} Ifx_AMU;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXAMU_REGDEF_H */
