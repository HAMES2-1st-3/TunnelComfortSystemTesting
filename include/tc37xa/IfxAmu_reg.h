/**
 * \file IfxAmu_reg.h
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
 * \defgroup IfxSfr_Amu_Registers_Cfg Amu address
 * \ingroup IfxSfr_Amu_Registers
 * 
 * \defgroup IfxSfr_Amu_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Amu_Registers_Cfg
 *
 * \defgroup IfxSfr_Amu_Registers_Cfg_Amu00 2-AMU00
 * \ingroup IfxSfr_Amu_Registers_Cfg
 *
 * \defgroup IfxSfr_Amu_Registers_Cfg_Amu01 2-AMU01
 * \ingroup IfxSfr_Amu_Registers_Cfg
 *
 *
 */
#ifndef IFXAMU_REG_H
#define IFXAMU_REG_H 1
/******************************************************************************/
#include "IfxAmu_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Amu_Registers_Cfg_BaseAddress
 * \{  */

/** \brief AMU object */
#define MODULE_AMU00 /*lint --e(923, 9078)*/ ((*(Ifx_AMU*)0xF8508000u))
#define MODULE_AMU01 /*lint --e(923, 9078)*/ ((*(Ifx_AMU*)0xF8508100u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Amu_Registers_Cfg_Amu00
 * \{  */
/** \brief 0, Control Register 1 */
#define AMU00_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_CTRL1*)0xF8508000u)

/** \brief 4, Error Enable Register */
#define AMU00_EER /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_EER*)0xF8508004u)

/** \brief 8, Parameter p10 Register */
#define AMU00_P10SINT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P10SINT*)0xF8508008u)

/** \brief C, Parameter p6 Register */
#define AMU00_P6SINT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P6SINT*)0xF850800Cu)

/** \brief 10, Parameter p7 Register */
#define AMU00_P7SINT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P7SINT*)0xF8508010u)

/** \brief 14, Parameter p8 Register */
#define AMU00_P8SINT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P8SINT*)0xF8508014u)

/** \brief 18, Parameter p9 Register */
#define AMU00_P9DOUBLELOW32 /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P9DOUBLELOW32*)0xF8508018u)

/** \brief 1C, Parameter p9 Register */
#define AMU00_P9DOUBLEHIGH32 /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P9DOUBLEHIGH32*)0xF850801Cu)

/** \brief 20, Coefficient Matrix V Register */
#define AMU00_VPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_VPFLOAT*)0xF8508020u)

/** \brief 24, Coefficient Array L Register */
#define AMU00_LPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_LPFLOAT*)0xF8508024u)

/** \brief 28, Parameter p1 Register */
#define AMU00_P1PFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P1PFLOAT*)0xF8508028u)

/** \brief 2C, Parameter p2 Register */
#define AMU00_P2PFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P2PFLOAT*)0xF850802Cu)

/** \brief 30, Parameter p3 Register */
#define AMU00_P3PFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P3PFLOAT*)0xF8508030u)

/** \brief 34, Parameter p4 Register */
#define AMU00_P4FLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P4FLOAT*)0xF8508034u)

/** \brief 38, Parameter p5 Register */
#define AMU00_P5FLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P5FLOAT*)0xF8508038u)

/** \brief 3C, Input Vector u Register */
#define AMU00_UPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_UPFLOAT*)0xF850803Cu)

/** \brief 40, Parameter p8 Register */
#define AMU00_OLCOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_OLCOMP*)0xF8508040u)

/** \brief 44, Control Register 0 */
#define AMU00_CTRL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_CTRL0*)0xF8508044u)

/** \brief 80, Return Value Register */
#define AMU00_ZDOUBLELOW32 /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_ZDOUBLELOW32*)0xF8508080u)

/** \brief 84, Return Value Register */
#define AMU00_ZDOUBLEHIGH32 /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_ZDOUBLEHIGH32*)0xF8508084u)

/** \brief 88, Return Value Register */
#define AMU00_ZFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_ZFLOAT*)0xF8508088u)

/** \brief 8C, Control Register 0 Mirror */
#define AMU00_CTRL0MIR /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_CTRL0MIR*)0xF850808Cu)

/** \brief 90, Intermediate Result yRegister */
#define AMU00_YDOUBLELOW32 /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_YDOUBLELOW32*)0xF8508090u)

/** \brief 94, Intermediate Result yRegister */
#define AMU00_YDOUBLEHIGH32 /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_YDOUBLEHIGH32*)0xF8508094u)

/** \brief 98, Intermediate Result y Float Register */
#define AMU00_YFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_YFLOAT*)0xF8508098u)

/** \brief 9C, Error Status Register */
#define AMU00_ERRSR /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_ERRSR*)0xF850809Cu)

/** \brief A0, Interrupt Status Register */
#define AMU00_P8SINTMIR /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P8SINTMIR*)0xF85080A0u)

/** \brief A8, Current Input Vector Pointer Register */
#define AMU00_UCURRPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_UCURRPFLOAT*)0xF85080A8u)

/** \brief AC, Current Parameter p1 Pointer Register */
#define AMU00_P1CURRPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P1CURRPFLOAT*)0xF85080ACu)

/** \brief B0, Current Parameter p2 Pointer Register */
#define AMU00_P2CURRPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P2CURRPFLOAT*)0xF85080B0u)

/** \brief B4, Current Parameter p3 Pointer Register */
#define AMU00_P3CURRPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P3CURRPFLOAT*)0xF85080B4u)

/** \brief B8, Current Coefficient Matrix V Pointer Register */
#define AMU00_VCURRPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_VCURRPFLOAT*)0xF85080B8u)

/** \brief BC, Current Coefficient Matrix L Pointer Register */
#define AMU00_LCURRPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_LCURRPFLOAT*)0xF85080BCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Amu_Registers_Cfg_Amu01
 * \{  */
/** \brief 0, Control Register 1 */
#define AMU01_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_CTRL1*)0xF8508100u)

/** \brief 4, Error Enable Register */
#define AMU01_EER /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_EER*)0xF8508104u)

/** \brief 8, Parameter p10 Register */
#define AMU01_P10SINT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P10SINT*)0xF8508108u)

/** \brief C, Parameter p6 Register */
#define AMU01_P6SINT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P6SINT*)0xF850810Cu)

/** \brief 10, Parameter p7 Register */
#define AMU01_P7SINT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P7SINT*)0xF8508110u)

/** \brief 14, Parameter p8 Register */
#define AMU01_P8SINT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P8SINT*)0xF8508114u)

/** \brief 18, Parameter p9 Register */
#define AMU01_P9DOUBLELOW32 /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P9DOUBLELOW32*)0xF8508118u)

/** \brief 1C, Parameter p9 Register */
#define AMU01_P9DOUBLEHIGH32 /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P9DOUBLEHIGH32*)0xF850811Cu)

/** \brief 20, Coefficient Matrix V Register */
#define AMU01_VPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_VPFLOAT*)0xF8508120u)

/** \brief 24, Coefficient Array L Register */
#define AMU01_LPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_LPFLOAT*)0xF8508124u)

/** \brief 28, Parameter p1 Register */
#define AMU01_P1PFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P1PFLOAT*)0xF8508128u)

/** \brief 2C, Parameter p2 Register */
#define AMU01_P2PFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P2PFLOAT*)0xF850812Cu)

/** \brief 30, Parameter p3 Register */
#define AMU01_P3PFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P3PFLOAT*)0xF8508130u)

/** \brief 34, Parameter p4 Register */
#define AMU01_P4FLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P4FLOAT*)0xF8508134u)

/** \brief 38, Parameter p5 Register */
#define AMU01_P5FLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P5FLOAT*)0xF8508138u)

/** \brief 3C, Input Vector u Register */
#define AMU01_UPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_UPFLOAT*)0xF850813Cu)

/** \brief 40, Parameter p8 Register */
#define AMU01_OLCOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_OLCOMP*)0xF8508140u)

/** \brief 44, Control Register 0 */
#define AMU01_CTRL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_CTRL0*)0xF8508144u)

/** \brief 80, Return Value Register */
#define AMU01_ZDOUBLELOW32 /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_ZDOUBLELOW32*)0xF8508180u)

/** \brief 84, Return Value Register */
#define AMU01_ZDOUBLEHIGH32 /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_ZDOUBLEHIGH32*)0xF8508184u)

/** \brief 88, Return Value Register */
#define AMU01_ZFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_ZFLOAT*)0xF8508188u)

/** \brief 8C, Control Register 0 Mirror */
#define AMU01_CTRL0MIR /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_CTRL0MIR*)0xF850818Cu)

/** \brief 90, Intermediate Result yRegister */
#define AMU01_YDOUBLELOW32 /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_YDOUBLELOW32*)0xF8508190u)

/** \brief 94, Intermediate Result yRegister */
#define AMU01_YDOUBLEHIGH32 /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_YDOUBLEHIGH32*)0xF8508194u)

/** \brief 98, Intermediate Result y Float Register */
#define AMU01_YFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_YFLOAT*)0xF8508198u)

/** \brief 9C, Error Status Register */
#define AMU01_ERRSR /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_ERRSR*)0xF850819Cu)

/** \brief A0, Interrupt Status Register */
#define AMU01_P8SINTMIR /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P8SINTMIR*)0xF85081A0u)

/** \brief A8, Current Input Vector Pointer Register */
#define AMU01_UCURRPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_UCURRPFLOAT*)0xF85081A8u)

/** \brief AC, Current Parameter p1 Pointer Register */
#define AMU01_P1CURRPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P1CURRPFLOAT*)0xF85081ACu)

/** \brief B0, Current Parameter p2 Pointer Register */
#define AMU01_P2CURRPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P2CURRPFLOAT*)0xF85081B0u)

/** \brief B4, Current Parameter p3 Pointer Register */
#define AMU01_P3CURRPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_P3CURRPFLOAT*)0xF85081B4u)

/** \brief B8, Current Coefficient Matrix V Pointer Register */
#define AMU01_VCURRPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_VCURRPFLOAT*)0xF85081B8u)

/** \brief BC, Current Coefficient Matrix L Pointer Register */
#define AMU01_LCURRPFLOAT /*lint --e(923, 9078)*/ (*(volatile Ifx_AMU_LCURRPFLOAT*)0xF85081BCu)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXAMU_REG_H */
