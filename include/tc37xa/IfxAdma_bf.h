/**
 * \file IfxAdma_bf.h
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
 * \defgroup IfxSfr_Adma_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxSfr_Adma_Registers
 * 
 */
#ifndef IFXADMA_BF_H
#define IFXADMA_BF_H 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Adma_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_ADMA_CLC_Bits.DISR */
#define IFX_ADMA_CLC_DISR_LEN (1u)

/** \brief Mask for Ifx_ADMA_CLC_Bits.DISR */
#define IFX_ADMA_CLC_DISR_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_CLC_Bits.DISR */
#define IFX_ADMA_CLC_DISR_OFF (0u)

/** \brief Length for Ifx_ADMA_CLC_Bits.DISS */
#define IFX_ADMA_CLC_DISS_LEN (1u)

/** \brief Mask for Ifx_ADMA_CLC_Bits.DISS */
#define IFX_ADMA_CLC_DISS_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_CLC_Bits.DISS */
#define IFX_ADMA_CLC_DISS_OFF (1u)

/** \brief Length for Ifx_ADMA_MODID_Bits.MOD_REV */
#define IFX_ADMA_MODID_MOD_REV_LEN (8u)

/** \brief Mask for Ifx_ADMA_MODID_Bits.MOD_REV */
#define IFX_ADMA_MODID_MOD_REV_MSK (0xffu)

/** \brief Offset for Ifx_ADMA_MODID_Bits.MOD_REV */
#define IFX_ADMA_MODID_MOD_REV_OFF (0u)

/** \brief Length for Ifx_ADMA_MODID_Bits.MOD_TYPE */
#define IFX_ADMA_MODID_MOD_TYPE_LEN (8u)

/** \brief Mask for Ifx_ADMA_MODID_Bits.MOD_TYPE */
#define IFX_ADMA_MODID_MOD_TYPE_MSK (0xffu)

/** \brief Offset for Ifx_ADMA_MODID_Bits.MOD_TYPE */
#define IFX_ADMA_MODID_MOD_TYPE_OFF (8u)

/** \brief Length for Ifx_ADMA_MODID_Bits.MOD_NUMBER */
#define IFX_ADMA_MODID_MOD_NUMBER_LEN (16u)

/** \brief Mask for Ifx_ADMA_MODID_Bits.MOD_NUMBER */
#define IFX_ADMA_MODID_MOD_NUMBER_MSK (0xffffu)

/** \brief Offset for Ifx_ADMA_MODID_Bits.MOD_NUMBER */
#define IFX_ADMA_MODID_MOD_NUMBER_OFF (16u)

/** \brief Length for Ifx_ADMA_ERRSR_Bits.ME */
#define IFX_ADMA_ERRSR_ME_LEN (1u)

/** \brief Mask for Ifx_ADMA_ERRSR_Bits.ME */
#define IFX_ADMA_ERRSR_ME_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_ERRSR_Bits.ME */
#define IFX_ADMA_ERRSR_ME_OFF (0u)

/** \brief Length for Ifx_ADMA_ERRSR_Bits.SE */
#define IFX_ADMA_ERRSR_SE_LEN (1u)

/** \brief Mask for Ifx_ADMA_ERRSR_Bits.SE */
#define IFX_ADMA_ERRSR_SE_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_ERRSR_Bits.SE */
#define IFX_ADMA_ERRSR_SE_OFF (1u)

/** \brief Length for Ifx_ADMA_ERRSR_Bits.SRI_ECC */
#define IFX_ADMA_ERRSR_SRI_ECC_LEN (1u)

/** \brief Mask for Ifx_ADMA_ERRSR_Bits.SRI_ECC */
#define IFX_ADMA_ERRSR_SRI_ECC_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_ERRSR_Bits.SRI_ECC */
#define IFX_ADMA_ERRSR_SRI_ECC_OFF (2u)

/** \brief Length for Ifx_ADMA_SADR_Bits.SADR */
#define IFX_ADMA_SADR_SADR_LEN (32u)

/** \brief Mask for Ifx_ADMA_SADR_Bits.SADR */
#define IFX_ADMA_SADR_SADR_MSK (0xffffffffu)

/** \brief Offset for Ifx_ADMA_SADR_Bits.SADR */
#define IFX_ADMA_SADR_SADR_OFF (0u)

/** \brief Length for Ifx_ADMA_DADR_Bits.DADR */
#define IFX_ADMA_DADR_DADR_LEN (32u)

/** \brief Mask for Ifx_ADMA_DADR_Bits.DADR */
#define IFX_ADMA_DADR_DADR_MSK (0xffffffffu)

/** \brief Offset for Ifx_ADMA_DADR_Bits.DADR */
#define IFX_ADMA_DADR_DADR_OFF (0u)

/** \brief Length for Ifx_ADMA_CNT_Bits.CNT */
#define IFX_ADMA_CNT_CNT_LEN (32u)

/** \brief Mask for Ifx_ADMA_CNT_Bits.CNT */
#define IFX_ADMA_CNT_CNT_MSK (0xffffffffu)

/** \brief Offset for Ifx_ADMA_CNT_Bits.CNT */
#define IFX_ADMA_CNT_CNT_OFF (0u)

/** \brief Length for Ifx_ADMA_CTRL_Bits.EN */
#define IFX_ADMA_CTRL_EN_LEN (1u)

/** \brief Mask for Ifx_ADMA_CTRL_Bits.EN */
#define IFX_ADMA_CTRL_EN_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_CTRL_Bits.EN */
#define IFX_ADMA_CTRL_EN_OFF (0u)

/** \brief Length for Ifx_ADMA_CTRL_Bits.ENCN */
#define IFX_ADMA_CTRL_ENCN_LEN (1u)

/** \brief Mask for Ifx_ADMA_CTRL_Bits.ENCN */
#define IFX_ADMA_CTRL_ENCN_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_CTRL_Bits.ENCN */
#define IFX_ADMA_CTRL_ENCN_OFF (1u)

/** \brief Length for Ifx_ADMA_CTRL_Bits.READY */
#define IFX_ADMA_CTRL_READY_LEN (1u)

/** \brief Mask for Ifx_ADMA_CTRL_Bits.READY */
#define IFX_ADMA_CTRL_READY_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_CTRL_Bits.READY */
#define IFX_ADMA_CTRL_READY_OFF (2u)

/** \brief Length for Ifx_ADMA_CTRL_Bits.ERR */
#define IFX_ADMA_CTRL_ERR_LEN (1u)

/** \brief Mask for Ifx_ADMA_CTRL_Bits.ERR */
#define IFX_ADMA_CTRL_ERR_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_CTRL_Bits.ERR */
#define IFX_ADMA_CTRL_ERR_OFF (3u)

/** \brief Length for Ifx_ADMA_CTRL_Bits.ECC_STOP */
#define IFX_ADMA_CTRL_ECC_STOP_LEN (1u)

/** \brief Mask for Ifx_ADMA_CTRL_Bits.ECC_STOP */
#define IFX_ADMA_CTRL_ECC_STOP_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_CTRL_Bits.ECC_STOP */
#define IFX_ADMA_CTRL_ECC_STOP_OFF (4u)

/** \brief Length for Ifx_ADMA_CTRL_Bits.CHKEN */
#define IFX_ADMA_CTRL_CHKEN_LEN (1u)

/** \brief Mask for Ifx_ADMA_CTRL_Bits.CHKEN */
#define IFX_ADMA_CTRL_CHKEN_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_CTRL_Bits.CHKEN */
#define IFX_ADMA_CTRL_CHKEN_OFF (5u)

/** \brief Length for Ifx_ADMA_CHKSUM_Bits.CHKSUM */
#define IFX_ADMA_CHKSUM_CHKSUM_LEN (32u)

/** \brief Mask for Ifx_ADMA_CHKSUM_Bits.CHKSUM */
#define IFX_ADMA_CHKSUM_CHKSUM_MSK (0xffffffffu)

/** \brief Offset for Ifx_ADMA_CHKSUM_Bits.CHKSUM */
#define IFX_ADMA_CHKSUM_CHKSUM_OFF (0u)

/** \brief Length for Ifx_ADMA_KRST0_Bits.RST */
#define IFX_ADMA_KRST0_RST_LEN (1u)

/** \brief Mask for Ifx_ADMA_KRST0_Bits.RST */
#define IFX_ADMA_KRST0_RST_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_KRST0_Bits.RST */
#define IFX_ADMA_KRST0_RST_OFF (0u)

/** \brief Length for Ifx_ADMA_KRST0_Bits.RSTSTAT */
#define IFX_ADMA_KRST0_RSTSTAT_LEN (1u)

/** \brief Mask for Ifx_ADMA_KRST0_Bits.RSTSTAT */
#define IFX_ADMA_KRST0_RSTSTAT_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_KRST0_Bits.RSTSTAT */
#define IFX_ADMA_KRST0_RSTSTAT_OFF (1u)

/** \brief Length for Ifx_ADMA_KRST1_Bits.RST */
#define IFX_ADMA_KRST1_RST_LEN (1u)

/** \brief Mask for Ifx_ADMA_KRST1_Bits.RST */
#define IFX_ADMA_KRST1_RST_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_KRST1_Bits.RST */
#define IFX_ADMA_KRST1_RST_OFF (0u)

/** \brief Length for Ifx_ADMA_KRSTCLR_Bits.CLR */
#define IFX_ADMA_KRSTCLR_CLR_LEN (1u)

/** \brief Mask for Ifx_ADMA_KRSTCLR_Bits.CLR */
#define IFX_ADMA_KRSTCLR_CLR_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_KRSTCLR_Bits.CLR */
#define IFX_ADMA_KRSTCLR_CLR_OFF (0u)

/** \brief Length for Ifx_ADMA_ODA_Bits.DDREN */
#define IFX_ADMA_ODA_DDREN_LEN (1u)

/** \brief Mask for Ifx_ADMA_ODA_Bits.DDREN */
#define IFX_ADMA_ODA_DDREN_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_ODA_Bits.DDREN */
#define IFX_ADMA_ODA_DDREN_OFF (0u)

/** \brief Length for Ifx_ADMA_ODA_Bits.DREN */
#define IFX_ADMA_ODA_DREN_LEN (1u)

/** \brief Mask for Ifx_ADMA_ODA_Bits.DREN */
#define IFX_ADMA_ODA_DREN_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_ODA_Bits.DREN */
#define IFX_ADMA_ODA_DREN_OFF (1u)

/** \brief Length for Ifx_ADMA_OCS_Bits.SUS */
#define IFX_ADMA_OCS_SUS_LEN (4u)

/** \brief Mask for Ifx_ADMA_OCS_Bits.SUS */
#define IFX_ADMA_OCS_SUS_MSK (0xfu)

/** \brief Offset for Ifx_ADMA_OCS_Bits.SUS */
#define IFX_ADMA_OCS_SUS_OFF (24u)

/** \brief Length for Ifx_ADMA_OCS_Bits.SUS_P */
#define IFX_ADMA_OCS_SUS_P_LEN (1u)

/** \brief Mask for Ifx_ADMA_OCS_Bits.SUS_P */
#define IFX_ADMA_OCS_SUS_P_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_OCS_Bits.SUS_P */
#define IFX_ADMA_OCS_SUS_P_OFF (28u)

/** \brief Length for Ifx_ADMA_OCS_Bits.SUSSTA */
#define IFX_ADMA_OCS_SUSSTA_LEN (1u)

/** \brief Mask for Ifx_ADMA_OCS_Bits.SUSSTA */
#define IFX_ADMA_OCS_SUSSTA_MSK (0x1u)

/** \brief Offset for Ifx_ADMA_OCS_Bits.SUSSTA */
#define IFX_ADMA_OCS_SUSSTA_OFF (29u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXADMA_BF_H */
