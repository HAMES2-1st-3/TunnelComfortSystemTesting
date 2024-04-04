/**
 * \file IfxAmu_bf.h
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
 * \defgroup IfxSfr_Amu_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxSfr_Amu_Registers
 * 
 */
#ifndef IFXAMU_BF_H
#define IFXAMU_BF_H 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Amu_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_AMU_CTRL1_Bits.EXPFIX */
#define IFX_AMU_CTRL1_EXPFIX_LEN (7u)

/** \brief Mask for Ifx_AMU_CTRL1_Bits.EXPFIX */
#define IFX_AMU_CTRL1_EXPFIX_MSK (0x7fu)

/** \brief Offset for Ifx_AMU_CTRL1_Bits.EXPFIX */
#define IFX_AMU_CTRL1_EXPFIX_OFF (0u)

/** \brief Length for Ifx_AMU_CTRL1_Bits.VFRMT */
#define IFX_AMU_CTRL1_VFRMT_LEN (2u)

/** \brief Mask for Ifx_AMU_CTRL1_Bits.VFRMT */
#define IFX_AMU_CTRL1_VFRMT_MSK (0x3u)

/** \brief Offset for Ifx_AMU_CTRL1_Bits.VFRMT */
#define IFX_AMU_CTRL1_VFRMT_OFF (16u)

/** \brief Length for Ifx_AMU_CTRL1_Bits.CFGSET */
#define IFX_AMU_CTRL1_CFGSET_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL1_Bits.CFGSET */
#define IFX_AMU_CTRL1_CFGSET_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL1_Bits.CFGSET */
#define IFX_AMU_CTRL1_CFGSET_OFF (18u)

/** \brief Length for Ifx_AMU_EER_Bits.P7MAX */
#define IFX_AMU_EER_P7MAX_LEN (1u)

/** \brief Mask for Ifx_AMU_EER_Bits.P7MAX */
#define IFX_AMU_EER_P7MAX_MSK (0x1u)

/** \brief Offset for Ifx_AMU_EER_Bits.P7MAX */
#define IFX_AMU_EER_P7MAX_OFF (0u)

/** \brief Length for Ifx_AMU_EER_Bits.IINF */
#define IFX_AMU_EER_IINF_LEN (1u)

/** \brief Mask for Ifx_AMU_EER_Bits.IINF */
#define IFX_AMU_EER_IINF_MSK (0x1u)

/** \brief Offset for Ifx_AMU_EER_Bits.IINF */
#define IFX_AMU_EER_IINF_OFF (1u)

/** \brief Length for Ifx_AMU_EER_Bits.INAN */
#define IFX_AMU_EER_INAN_LEN (1u)

/** \brief Mask for Ifx_AMU_EER_Bits.INAN */
#define IFX_AMU_EER_INAN_MSK (0x1u)

/** \brief Offset for Ifx_AMU_EER_Bits.INAN */
#define IFX_AMU_EER_INAN_OFF (2u)

/** \brief Length for Ifx_AMU_EER_Bits.OOV */
#define IFX_AMU_EER_OOV_LEN (1u)

/** \brief Mask for Ifx_AMU_EER_Bits.OOV */
#define IFX_AMU_EER_OOV_MSK (0x1u)

/** \brief Offset for Ifx_AMU_EER_Bits.OOV */
#define IFX_AMU_EER_OOV_OFF (3u)

/** \brief Length for Ifx_AMU_EER_Bits.ME */
#define IFX_AMU_EER_ME_LEN (1u)

/** \brief Mask for Ifx_AMU_EER_Bits.ME */
#define IFX_AMU_EER_ME_MSK (0x1u)

/** \brief Offset for Ifx_AMU_EER_Bits.ME */
#define IFX_AMU_EER_ME_OFF (4u)

/** \brief Length for Ifx_AMU_EER_Bits.REGACC */
#define IFX_AMU_EER_REGACC_LEN (1u)

/** \brief Mask for Ifx_AMU_EER_Bits.REGACC */
#define IFX_AMU_EER_REGACC_MSK (0x1u)

/** \brief Offset for Ifx_AMU_EER_Bits.REGACC */
#define IFX_AMU_EER_REGACC_OFF (5u)

/** \brief Length for Ifx_AMU_EER_Bits.DENORM */
#define IFX_AMU_EER_DENORM_LEN (1u)

/** \brief Mask for Ifx_AMU_EER_Bits.DENORM */
#define IFX_AMU_EER_DENORM_MSK (0x1u)

/** \brief Offset for Ifx_AMU_EER_Bits.DENORM */
#define IFX_AMU_EER_DENORM_OFF (6u)

/** \brief Length for Ifx_AMU_EER_Bits.ECC_STOP */
#define IFX_AMU_EER_ECC_STOP_LEN (1u)

/** \brief Mask for Ifx_AMU_EER_Bits.ECC_STOP */
#define IFX_AMU_EER_ECC_STOP_MSK (0x1u)

/** \brief Offset for Ifx_AMU_EER_Bits.ECC_STOP */
#define IFX_AMU_EER_ECC_STOP_OFF (15u)

/** \brief Length for Ifx_AMU_EER_Bits.DENEN */
#define IFX_AMU_EER_DENEN_LEN (1u)

/** \brief Mask for Ifx_AMU_EER_Bits.DENEN */
#define IFX_AMU_EER_DENEN_MSK (0x1u)

/** \brief Offset for Ifx_AMU_EER_Bits.DENEN */
#define IFX_AMU_EER_DENEN_OFF (22u)

/** \brief Length for Ifx_AMU_EER_Bits.EECN */
#define IFX_AMU_EER_EECN_LEN (1u)

/** \brief Mask for Ifx_AMU_EER_Bits.EECN */
#define IFX_AMU_EER_EECN_MSK (0x1u)

/** \brief Offset for Ifx_AMU_EER_Bits.EECN */
#define IFX_AMU_EER_EECN_OFF (23u)

/** \brief Length for Ifx_AMU_P10SINT_Bits.NCROSSING */
#define IFX_AMU_P10SINT_NCROSSING_LEN (16u)

/** \brief Mask for Ifx_AMU_P10SINT_Bits.NCROSSING */
#define IFX_AMU_P10SINT_NCROSSING_MSK (0xffffu)

/** \brief Offset for Ifx_AMU_P10SINT_Bits.NCROSSING */
#define IFX_AMU_P10SINT_NCROSSING_OFF (0u)

/** \brief Length for Ifx_AMU_P6SINT_Bits.NEND */
#define IFX_AMU_P6SINT_NEND_LEN (16u)

/** \brief Mask for Ifx_AMU_P6SINT_Bits.NEND */
#define IFX_AMU_P6SINT_NEND_MSK (0xffffu)

/** \brief Offset for Ifx_AMU_P6SINT_Bits.NEND */
#define IFX_AMU_P6SINT_NEND_OFF (0u)

/** \brief Length for Ifx_AMU_P7SINT_Bits.M */
#define IFX_AMU_P7SINT_M_LEN (16u)

/** \brief Mask for Ifx_AMU_P7SINT_Bits.M */
#define IFX_AMU_P7SINT_M_MSK (0xffffu)

/** \brief Offset for Ifx_AMU_P7SINT_Bits.M */
#define IFX_AMU_P7SINT_M_OFF (0u)

/** \brief Length for Ifx_AMU_P8SINT_Bits.NSTART */
#define IFX_AMU_P8SINT_NSTART_LEN (16u)

/** \brief Mask for Ifx_AMU_P8SINT_Bits.NSTART */
#define IFX_AMU_P8SINT_NSTART_MSK (0xffffu)

/** \brief Offset for Ifx_AMU_P8SINT_Bits.NSTART */
#define IFX_AMU_P8SINT_NSTART_OFF (0u)

/** \brief Length for Ifx_AMU_P9DOUBLELOW32_Bits.P9DOUBLE */
#define IFX_AMU_P9DOUBLELOW32_P9DOUBLE_LEN (32u)

/** \brief Mask for Ifx_AMU_P9DOUBLELOW32_Bits.P9DOUBLE */
#define IFX_AMU_P9DOUBLELOW32_P9DOUBLE_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_P9DOUBLELOW32_Bits.P9DOUBLE */
#define IFX_AMU_P9DOUBLELOW32_P9DOUBLE_OFF (0u)

/** \brief Length for Ifx_AMU_P9DOUBLEHIGH32_Bits.P9DOUBLE */
#define IFX_AMU_P9DOUBLEHIGH32_P9DOUBLE_LEN (32u)

/** \brief Mask for Ifx_AMU_P9DOUBLEHIGH32_Bits.P9DOUBLE */
#define IFX_AMU_P9DOUBLEHIGH32_P9DOUBLE_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_P9DOUBLEHIGH32_Bits.P9DOUBLE */
#define IFX_AMU_P9DOUBLEHIGH32_P9DOUBLE_OFF (0u)

/** \brief Length for Ifx_AMU_VPFLOAT_Bits.VPFLOAT */
#define IFX_AMU_VPFLOAT_VPFLOAT_LEN (32u)

/** \brief Mask for Ifx_AMU_VPFLOAT_Bits.VPFLOAT */
#define IFX_AMU_VPFLOAT_VPFLOAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_VPFLOAT_Bits.VPFLOAT */
#define IFX_AMU_VPFLOAT_VPFLOAT_OFF (0u)

/** \brief Length for Ifx_AMU_LPFLOAT_Bits.LPFLOAT */
#define IFX_AMU_LPFLOAT_LPFLOAT_LEN (32u)

/** \brief Mask for Ifx_AMU_LPFLOAT_Bits.LPFLOAT */
#define IFX_AMU_LPFLOAT_LPFLOAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_LPFLOAT_Bits.LPFLOAT */
#define IFX_AMU_LPFLOAT_LPFLOAT_OFF (0u)

/** \brief Length for Ifx_AMU_P1PFLOAT_Bits.P1PFLOAT */
#define IFX_AMU_P1PFLOAT_P1PFLOAT_LEN (32u)

/** \brief Mask for Ifx_AMU_P1PFLOAT_Bits.P1PFLOAT */
#define IFX_AMU_P1PFLOAT_P1PFLOAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_P1PFLOAT_Bits.P1PFLOAT */
#define IFX_AMU_P1PFLOAT_P1PFLOAT_OFF (0u)

/** \brief Length for Ifx_AMU_P2PFLOAT_Bits.P2PFLOAT */
#define IFX_AMU_P2PFLOAT_P2PFLOAT_LEN (32u)

/** \brief Mask for Ifx_AMU_P2PFLOAT_Bits.P2PFLOAT */
#define IFX_AMU_P2PFLOAT_P2PFLOAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_P2PFLOAT_Bits.P2PFLOAT */
#define IFX_AMU_P2PFLOAT_P2PFLOAT_OFF (0u)

/** \brief Length for Ifx_AMU_P3PFLOAT_Bits.P3PFLOAT */
#define IFX_AMU_P3PFLOAT_P3PFLOAT_LEN (32u)

/** \brief Mask for Ifx_AMU_P3PFLOAT_Bits.P3PFLOAT */
#define IFX_AMU_P3PFLOAT_P3PFLOAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_P3PFLOAT_Bits.P3PFLOAT */
#define IFX_AMU_P3PFLOAT_P3PFLOAT_OFF (0u)

/** \brief Length for Ifx_AMU_P4FLOAT_Bits.P4FLOAT */
#define IFX_AMU_P4FLOAT_P4FLOAT_LEN (32u)

/** \brief Mask for Ifx_AMU_P4FLOAT_Bits.P4FLOAT */
#define IFX_AMU_P4FLOAT_P4FLOAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_P4FLOAT_Bits.P4FLOAT */
#define IFX_AMU_P4FLOAT_P4FLOAT_OFF (0u)

/** \brief Length for Ifx_AMU_P5FLOAT_Bits.P5FLOAT */
#define IFX_AMU_P5FLOAT_P5FLOAT_LEN (32u)

/** \brief Mask for Ifx_AMU_P5FLOAT_Bits.P5FLOAT */
#define IFX_AMU_P5FLOAT_P5FLOAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_P5FLOAT_Bits.P5FLOAT */
#define IFX_AMU_P5FLOAT_P5FLOAT_OFF (0u)

/** \brief Length for Ifx_AMU_UPFLOAT_Bits.UPFLOAT */
#define IFX_AMU_UPFLOAT_UPFLOAT_LEN (32u)

/** \brief Mask for Ifx_AMU_UPFLOAT_Bits.UPFLOAT */
#define IFX_AMU_UPFLOAT_UPFLOAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_UPFLOAT_Bits.UPFLOAT */
#define IFX_AMU_UPFLOAT_UPFLOAT_OFF (0u)

/** \brief Length for Ifx_AMU_OLCOMP_Bits.CP8H2N */
#define IFX_AMU_OLCOMP_CP8H2N_LEN (16u)

/** \brief Mask for Ifx_AMU_OLCOMP_Bits.CP8H2N */
#define IFX_AMU_OLCOMP_CP8H2N_MSK (0xffffu)

/** \brief Offset for Ifx_AMU_OLCOMP_Bits.CP8H2N */
#define IFX_AMU_OLCOMP_CP8H2N_OFF (0u)

/** \brief Length for Ifx_AMU_OLCOMP_Bits.CPHN2H */
#define IFX_AMU_OLCOMP_CPHN2H_LEN (16u)

/** \brief Mask for Ifx_AMU_OLCOMP_Bits.CPHN2H */
#define IFX_AMU_OLCOMP_CPHN2H_MSK (0xffffu)

/** \brief Offset for Ifx_AMU_OLCOMP_Bits.CPHN2H */
#define IFX_AMU_OLCOMP_CPHN2H_OFF (16u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.EN */
#define IFX_AMU_CTRL0_EN_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.EN */
#define IFX_AMU_CTRL0_EN_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.EN */
#define IFX_AMU_CTRL0_EN_OFF (0u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.ENCN */
#define IFX_AMU_CTRL0_ENCN_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.ENCN */
#define IFX_AMU_CTRL0_ENCN_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.ENCN */
#define IFX_AMU_CTRL0_ENCN_OFF (1u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.READY */
#define IFX_AMU_CTRL0_READY_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.READY */
#define IFX_AMU_CTRL0_READY_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.READY */
#define IFX_AMU_CTRL0_READY_OFF (2u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.SDOWN */
#define IFX_AMU_CTRL0_SDOWN_LEN (2u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.SDOWN */
#define IFX_AMU_CTRL0_SDOWN_MSK (0x3u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.SDOWN */
#define IFX_AMU_CTRL0_SDOWN_OFF (3u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.SDOWNCN */
#define IFX_AMU_CTRL0_SDOWNCN_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.SDOWNCN */
#define IFX_AMU_CTRL0_SDOWNCN_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.SDOWNCN */
#define IFX_AMU_CTRL0_SDOWNCN_OFF (5u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.LI */
#define IFX_AMU_CTRL0_LI_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.LI */
#define IFX_AMU_CTRL0_LI_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.LI */
#define IFX_AMU_CTRL0_LI_OFF (6u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.ERR */
#define IFX_AMU_CTRL0_ERR_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.ERR */
#define IFX_AMU_CTRL0_ERR_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.ERR */
#define IFX_AMU_CTRL0_ERR_OFF (7u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.LIM2RDY */
#define IFX_AMU_CTRL0_LIM2RDY_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.LIM2RDY */
#define IFX_AMU_CTRL0_LIM2RDY_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.LIM2RDY */
#define IFX_AMU_CTRL0_LIM2RDY_OFF (8u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.RDY2LIM */
#define IFX_AMU_CTRL0_RDY2LIM_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.RDY2LIM */
#define IFX_AMU_CTRL0_RDY2LIM_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.RDY2LIM */
#define IFX_AMU_CTRL0_RDY2LIM_OFF (9u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.SL */
#define IFX_AMU_CTRL0_SL_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.SL */
#define IFX_AMU_CTRL0_SL_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.SL */
#define IFX_AMU_CTRL0_SL_OFF (10u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.REGACCEN */
#define IFX_AMU_CTRL0_REGACCEN_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.REGACCEN */
#define IFX_AMU_CTRL0_REGACCEN_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.REGACCEN */
#define IFX_AMU_CTRL0_REGACCEN_OFF (11u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.MAX */
#define IFX_AMU_CTRL0_MAX_LEN (3u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.MAX */
#define IFX_AMU_CTRL0_MAX_MSK (0x7u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.MAX */
#define IFX_AMU_CTRL0_MAX_OFF (12u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.MAXCN */
#define IFX_AMU_CTRL0_MAXCN_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.MAXCN */
#define IFX_AMU_CTRL0_MAXCN_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.MAXCN */
#define IFX_AMU_CTRL0_MAXCN_OFF (15u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.ID */
#define IFX_AMU_CTRL0_ID_LEN (7u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.ID */
#define IFX_AMU_CTRL0_ID_MSK (0x7fu)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.ID */
#define IFX_AMU_CTRL0_ID_OFF (16u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.IDCN */
#define IFX_AMU_CTRL0_IDCN_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.IDCN */
#define IFX_AMU_CTRL0_IDCN_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.IDCN */
#define IFX_AMU_CTRL0_IDCN_OFF (23u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.CSH */
#define IFX_AMU_CTRL0_CSH_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.CSH */
#define IFX_AMU_CTRL0_CSH_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.CSH */
#define IFX_AMU_CTRL0_CSH_OFF (24u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.CSHCN */
#define IFX_AMU_CTRL0_CSHCN_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.CSHCN */
#define IFX_AMU_CTRL0_CSHCN_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.CSHCN */
#define IFX_AMU_CTRL0_CSHCN_OFF (25u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.HSPEED */
#define IFX_AMU_CTRL0_HSPEED_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.HSPEED */
#define IFX_AMU_CTRL0_HSPEED_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.HSPEED */
#define IFX_AMU_CTRL0_HSPEED_OFF (26u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.HSPEEDCN */
#define IFX_AMU_CTRL0_HSPEEDCN_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.HSPEEDCN */
#define IFX_AMU_CTRL0_HSPEEDCN_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.HSPEEDCN */
#define IFX_AMU_CTRL0_HSPEEDCN_OFF (27u)

/** \brief Length for Ifx_AMU_CTRL0_Bits.CSHS */
#define IFX_AMU_CTRL0_CSHS_LEN (2u)

/** \brief Mask for Ifx_AMU_CTRL0_Bits.CSHS */
#define IFX_AMU_CTRL0_CSHS_MSK (0x3u)

/** \brief Offset for Ifx_AMU_CTRL0_Bits.CSHS */
#define IFX_AMU_CTRL0_CSHS_OFF (30u)

/** \brief Length for Ifx_AMU_ZDOUBLELOW32_Bits.ZDOUBLE */
#define IFX_AMU_ZDOUBLELOW32_ZDOUBLE_LEN (32u)

/** \brief Mask for Ifx_AMU_ZDOUBLELOW32_Bits.ZDOUBLE */
#define IFX_AMU_ZDOUBLELOW32_ZDOUBLE_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_ZDOUBLELOW32_Bits.ZDOUBLE */
#define IFX_AMU_ZDOUBLELOW32_ZDOUBLE_OFF (0u)

/** \brief Length for Ifx_AMU_ZDOUBLEHIGH32_Bits.ZDOUBLE */
#define IFX_AMU_ZDOUBLEHIGH32_ZDOUBLE_LEN (32u)

/** \brief Mask for Ifx_AMU_ZDOUBLEHIGH32_Bits.ZDOUBLE */
#define IFX_AMU_ZDOUBLEHIGH32_ZDOUBLE_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_ZDOUBLEHIGH32_Bits.ZDOUBLE */
#define IFX_AMU_ZDOUBLEHIGH32_ZDOUBLE_OFF (0u)

/** \brief Length for Ifx_AMU_ZFLOAT_Bits.ZFLOAT */
#define IFX_AMU_ZFLOAT_ZFLOAT_LEN (32u)

/** \brief Mask for Ifx_AMU_ZFLOAT_Bits.ZFLOAT */
#define IFX_AMU_ZFLOAT_ZFLOAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_ZFLOAT_Bits.ZFLOAT */
#define IFX_AMU_ZFLOAT_ZFLOAT_OFF (0u)

/** \brief Length for Ifx_AMU_CTRL0MIR_Bits.EN */
#define IFX_AMU_CTRL0MIR_EN_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0MIR_Bits.EN */
#define IFX_AMU_CTRL0MIR_EN_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0MIR_Bits.EN */
#define IFX_AMU_CTRL0MIR_EN_OFF (0u)

/** \brief Length for Ifx_AMU_CTRL0MIR_Bits.READY */
#define IFX_AMU_CTRL0MIR_READY_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0MIR_Bits.READY */
#define IFX_AMU_CTRL0MIR_READY_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0MIR_Bits.READY */
#define IFX_AMU_CTRL0MIR_READY_OFF (2u)

/** \brief Length for Ifx_AMU_CTRL0MIR_Bits.SDOWN */
#define IFX_AMU_CTRL0MIR_SDOWN_LEN (2u)

/** \brief Mask for Ifx_AMU_CTRL0MIR_Bits.SDOWN */
#define IFX_AMU_CTRL0MIR_SDOWN_MSK (0x3u)

/** \brief Offset for Ifx_AMU_CTRL0MIR_Bits.SDOWN */
#define IFX_AMU_CTRL0MIR_SDOWN_OFF (3u)

/** \brief Length for Ifx_AMU_CTRL0MIR_Bits.LI */
#define IFX_AMU_CTRL0MIR_LI_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0MIR_Bits.LI */
#define IFX_AMU_CTRL0MIR_LI_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0MIR_Bits.LI */
#define IFX_AMU_CTRL0MIR_LI_OFF (6u)

/** \brief Length for Ifx_AMU_CTRL0MIR_Bits.ERR */
#define IFX_AMU_CTRL0MIR_ERR_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0MIR_Bits.ERR */
#define IFX_AMU_CTRL0MIR_ERR_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0MIR_Bits.ERR */
#define IFX_AMU_CTRL0MIR_ERR_OFF (7u)

/** \brief Length for Ifx_AMU_CTRL0MIR_Bits.LIM2RDY */
#define IFX_AMU_CTRL0MIR_LIM2RDY_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0MIR_Bits.LIM2RDY */
#define IFX_AMU_CTRL0MIR_LIM2RDY_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0MIR_Bits.LIM2RDY */
#define IFX_AMU_CTRL0MIR_LIM2RDY_OFF (8u)

/** \brief Length for Ifx_AMU_CTRL0MIR_Bits.RDY2LIM */
#define IFX_AMU_CTRL0MIR_RDY2LIM_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0MIR_Bits.RDY2LIM */
#define IFX_AMU_CTRL0MIR_RDY2LIM_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0MIR_Bits.RDY2LIM */
#define IFX_AMU_CTRL0MIR_RDY2LIM_OFF (9u)

/** \brief Length for Ifx_AMU_CTRL0MIR_Bits.SL */
#define IFX_AMU_CTRL0MIR_SL_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0MIR_Bits.SL */
#define IFX_AMU_CTRL0MIR_SL_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0MIR_Bits.SL */
#define IFX_AMU_CTRL0MIR_SL_OFF (10u)

/** \brief Length for Ifx_AMU_CTRL0MIR_Bits.REGACCEN */
#define IFX_AMU_CTRL0MIR_REGACCEN_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0MIR_Bits.REGACCEN */
#define IFX_AMU_CTRL0MIR_REGACCEN_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0MIR_Bits.REGACCEN */
#define IFX_AMU_CTRL0MIR_REGACCEN_OFF (11u)

/** \brief Length for Ifx_AMU_CTRL0MIR_Bits.MAX */
#define IFX_AMU_CTRL0MIR_MAX_LEN (3u)

/** \brief Mask for Ifx_AMU_CTRL0MIR_Bits.MAX */
#define IFX_AMU_CTRL0MIR_MAX_MSK (0x7u)

/** \brief Offset for Ifx_AMU_CTRL0MIR_Bits.MAX */
#define IFX_AMU_CTRL0MIR_MAX_OFF (12u)

/** \brief Length for Ifx_AMU_CTRL0MIR_Bits.ID */
#define IFX_AMU_CTRL0MIR_ID_LEN (7u)

/** \brief Mask for Ifx_AMU_CTRL0MIR_Bits.ID */
#define IFX_AMU_CTRL0MIR_ID_MSK (0x7fu)

/** \brief Offset for Ifx_AMU_CTRL0MIR_Bits.ID */
#define IFX_AMU_CTRL0MIR_ID_OFF (16u)

/** \brief Length for Ifx_AMU_CTRL0MIR_Bits.CSH */
#define IFX_AMU_CTRL0MIR_CSH_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0MIR_Bits.CSH */
#define IFX_AMU_CTRL0MIR_CSH_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0MIR_Bits.CSH */
#define IFX_AMU_CTRL0MIR_CSH_OFF (24u)

/** \brief Length for Ifx_AMU_CTRL0MIR_Bits.HSPEED */
#define IFX_AMU_CTRL0MIR_HSPEED_LEN (1u)

/** \brief Mask for Ifx_AMU_CTRL0MIR_Bits.HSPEED */
#define IFX_AMU_CTRL0MIR_HSPEED_MSK (0x1u)

/** \brief Offset for Ifx_AMU_CTRL0MIR_Bits.HSPEED */
#define IFX_AMU_CTRL0MIR_HSPEED_OFF (26u)

/** \brief Length for Ifx_AMU_CTRL0MIR_Bits.CSHS */
#define IFX_AMU_CTRL0MIR_CSHS_LEN (2u)

/** \brief Mask for Ifx_AMU_CTRL0MIR_Bits.CSHS */
#define IFX_AMU_CTRL0MIR_CSHS_MSK (0x3u)

/** \brief Offset for Ifx_AMU_CTRL0MIR_Bits.CSHS */
#define IFX_AMU_CTRL0MIR_CSHS_OFF (30u)

/** \brief Length for Ifx_AMU_YDOUBLELOW32_Bits.YDOUBLE */
#define IFX_AMU_YDOUBLELOW32_YDOUBLE_LEN (32u)

/** \brief Mask for Ifx_AMU_YDOUBLELOW32_Bits.YDOUBLE */
#define IFX_AMU_YDOUBLELOW32_YDOUBLE_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_YDOUBLELOW32_Bits.YDOUBLE */
#define IFX_AMU_YDOUBLELOW32_YDOUBLE_OFF (0u)

/** \brief Length for Ifx_AMU_YDOUBLEHIGH32_Bits.YDOUBLE */
#define IFX_AMU_YDOUBLEHIGH32_YDOUBLE_LEN (32u)

/** \brief Mask for Ifx_AMU_YDOUBLEHIGH32_Bits.YDOUBLE */
#define IFX_AMU_YDOUBLEHIGH32_YDOUBLE_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_YDOUBLEHIGH32_Bits.YDOUBLE */
#define IFX_AMU_YDOUBLEHIGH32_YDOUBLE_OFF (0u)

/** \brief Length for Ifx_AMU_YFLOAT_Bits.YFLOAT */
#define IFX_AMU_YFLOAT_YFLOAT_LEN (32u)

/** \brief Mask for Ifx_AMU_YFLOAT_Bits.YFLOAT */
#define IFX_AMU_YFLOAT_YFLOAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_YFLOAT_Bits.YFLOAT */
#define IFX_AMU_YFLOAT_YFLOAT_OFF (0u)

/** \brief Length for Ifx_AMU_ERRSR_Bits.P7MAX */
#define IFX_AMU_ERRSR_P7MAX_LEN (1u)

/** \brief Mask for Ifx_AMU_ERRSR_Bits.P7MAX */
#define IFX_AMU_ERRSR_P7MAX_MSK (0x1u)

/** \brief Offset for Ifx_AMU_ERRSR_Bits.P7MAX */
#define IFX_AMU_ERRSR_P7MAX_OFF (0u)

/** \brief Length for Ifx_AMU_ERRSR_Bits.IINF */
#define IFX_AMU_ERRSR_IINF_LEN (1u)

/** \brief Mask for Ifx_AMU_ERRSR_Bits.IINF */
#define IFX_AMU_ERRSR_IINF_MSK (0x1u)

/** \brief Offset for Ifx_AMU_ERRSR_Bits.IINF */
#define IFX_AMU_ERRSR_IINF_OFF (1u)

/** \brief Length for Ifx_AMU_ERRSR_Bits.INAN */
#define IFX_AMU_ERRSR_INAN_LEN (1u)

/** \brief Mask for Ifx_AMU_ERRSR_Bits.INAN */
#define IFX_AMU_ERRSR_INAN_MSK (0x1u)

/** \brief Offset for Ifx_AMU_ERRSR_Bits.INAN */
#define IFX_AMU_ERRSR_INAN_OFF (2u)

/** \brief Length for Ifx_AMU_ERRSR_Bits.OOV */
#define IFX_AMU_ERRSR_OOV_LEN (1u)

/** \brief Mask for Ifx_AMU_ERRSR_Bits.OOV */
#define IFX_AMU_ERRSR_OOV_MSK (0x1u)

/** \brief Offset for Ifx_AMU_ERRSR_Bits.OOV */
#define IFX_AMU_ERRSR_OOV_OFF (3u)

/** \brief Length for Ifx_AMU_ERRSR_Bits.ME */
#define IFX_AMU_ERRSR_ME_LEN (1u)

/** \brief Mask for Ifx_AMU_ERRSR_Bits.ME */
#define IFX_AMU_ERRSR_ME_MSK (0x1u)

/** \brief Offset for Ifx_AMU_ERRSR_Bits.ME */
#define IFX_AMU_ERRSR_ME_OFF (4u)

/** \brief Length for Ifx_AMU_ERRSR_Bits.REGACC */
#define IFX_AMU_ERRSR_REGACC_LEN (1u)

/** \brief Mask for Ifx_AMU_ERRSR_Bits.REGACC */
#define IFX_AMU_ERRSR_REGACC_MSK (0x1u)

/** \brief Offset for Ifx_AMU_ERRSR_Bits.REGACC */
#define IFX_AMU_ERRSR_REGACC_OFF (5u)

/** \brief Length for Ifx_AMU_ERRSR_Bits.DENORM */
#define IFX_AMU_ERRSR_DENORM_LEN (1u)

/** \brief Mask for Ifx_AMU_ERRSR_Bits.DENORM */
#define IFX_AMU_ERRSR_DENORM_MSK (0x1u)

/** \brief Offset for Ifx_AMU_ERRSR_Bits.DENORM */
#define IFX_AMU_ERRSR_DENORM_OFF (6u)

/** \brief Length for Ifx_AMU_ERRSR_Bits.ALGOPOS */
#define IFX_AMU_ERRSR_ALGOPOS_LEN (4u)

/** \brief Mask for Ifx_AMU_ERRSR_Bits.ALGOPOS */
#define IFX_AMU_ERRSR_ALGOPOS_MSK (0xfu)

/** \brief Offset for Ifx_AMU_ERRSR_Bits.ALGOPOS */
#define IFX_AMU_ERRSR_ALGOPOS_OFF (8u)

/** \brief Length for Ifx_AMU_ERRSR_Bits.MEU */
#define IFX_AMU_ERRSR_MEU_LEN (1u)

/** \brief Mask for Ifx_AMU_ERRSR_Bits.MEU */
#define IFX_AMU_ERRSR_MEU_MSK (0x1u)

/** \brief Offset for Ifx_AMU_ERRSR_Bits.MEU */
#define IFX_AMU_ERRSR_MEU_OFF (13u)

/** \brief Length for Ifx_AMU_ERRSR_Bits.SRI_ECC */
#define IFX_AMU_ERRSR_SRI_ECC_LEN (1u)

/** \brief Mask for Ifx_AMU_ERRSR_Bits.SRI_ECC */
#define IFX_AMU_ERRSR_SRI_ECC_MSK (0x1u)

/** \brief Offset for Ifx_AMU_ERRSR_Bits.SRI_ECC */
#define IFX_AMU_ERRSR_SRI_ECC_OFF (15u)

/** \brief Length for Ifx_AMU_P8SINTMIR_Bits.NSTART */
#define IFX_AMU_P8SINTMIR_NSTART_LEN (16u)

/** \brief Mask for Ifx_AMU_P8SINTMIR_Bits.NSTART */
#define IFX_AMU_P8SINTMIR_NSTART_MSK (0xffffu)

/** \brief Offset for Ifx_AMU_P8SINTMIR_Bits.NSTART */
#define IFX_AMU_P8SINTMIR_NSTART_OFF (0u)

/** \brief Length for Ifx_AMU_UCURRPFLOAT_Bits.UPFLOAT */
#define IFX_AMU_UCURRPFLOAT_UPFLOAT_LEN (32u)

/** \brief Mask for Ifx_AMU_UCURRPFLOAT_Bits.UPFLOAT */
#define IFX_AMU_UCURRPFLOAT_UPFLOAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_UCURRPFLOAT_Bits.UPFLOAT */
#define IFX_AMU_UCURRPFLOAT_UPFLOAT_OFF (0u)

/** \brief Length for Ifx_AMU_P1CURRPFLOAT_Bits.P1PFLOAT */
#define IFX_AMU_P1CURRPFLOAT_P1PFLOAT_LEN (32u)

/** \brief Mask for Ifx_AMU_P1CURRPFLOAT_Bits.P1PFLOAT */
#define IFX_AMU_P1CURRPFLOAT_P1PFLOAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_P1CURRPFLOAT_Bits.P1PFLOAT */
#define IFX_AMU_P1CURRPFLOAT_P1PFLOAT_OFF (0u)

/** \brief Length for Ifx_AMU_P2CURRPFLOAT_Bits.P2PFLOAT */
#define IFX_AMU_P2CURRPFLOAT_P2PFLOAT_LEN (32u)

/** \brief Mask for Ifx_AMU_P2CURRPFLOAT_Bits.P2PFLOAT */
#define IFX_AMU_P2CURRPFLOAT_P2PFLOAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_P2CURRPFLOAT_Bits.P2PFLOAT */
#define IFX_AMU_P2CURRPFLOAT_P2PFLOAT_OFF (0u)

/** \brief Length for Ifx_AMU_P3CURRPFLOAT_Bits.P3PFLOAT */
#define IFX_AMU_P3CURRPFLOAT_P3PFLOAT_LEN (32u)

/** \brief Mask for Ifx_AMU_P3CURRPFLOAT_Bits.P3PFLOAT */
#define IFX_AMU_P3CURRPFLOAT_P3PFLOAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_P3CURRPFLOAT_Bits.P3PFLOAT */
#define IFX_AMU_P3CURRPFLOAT_P3PFLOAT_OFF (0u)

/** \brief Length for Ifx_AMU_VCURRPFLOAT_Bits.VPFLOAT */
#define IFX_AMU_VCURRPFLOAT_VPFLOAT_LEN (32u)

/** \brief Mask for Ifx_AMU_VCURRPFLOAT_Bits.VPFLOAT */
#define IFX_AMU_VCURRPFLOAT_VPFLOAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_VCURRPFLOAT_Bits.VPFLOAT */
#define IFX_AMU_VCURRPFLOAT_VPFLOAT_OFF (0u)

/** \brief Length for Ifx_AMU_LCURRPFLOAT_Bits.LPFLOAT */
#define IFX_AMU_LCURRPFLOAT_LPFLOAT_LEN (32u)

/** \brief Mask for Ifx_AMU_LCURRPFLOAT_Bits.LPFLOAT */
#define IFX_AMU_LCURRPFLOAT_LPFLOAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_AMU_LCURRPFLOAT_Bits.LPFLOAT */
#define IFX_AMU_LCURRPFLOAT_LPFLOAT_OFF (0u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXAMU_BF_H */
