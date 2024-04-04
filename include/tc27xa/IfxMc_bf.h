/**
 * \file IfxMc_bf.h
 * \brief
 * \copyright Copyright (c) 2014 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC27XA_TS_V3.0.1.R2
 * Specification: TC27xA_TS_V3.0.1_SFR_OPEN_MARKET.xml (Revision: V3.0.1)
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
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
 * \defgroup IfxLld_Mc_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxLld_Mc
 * 
 */
#ifndef IFXMC_BF_H
#define IFXMC_BF_H 1
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Mc_BitfieldsMask
 * \{  */

/** \\brief  Length for Ifx_MC_CONFIG0_Bits.ACCSTYPE */
#define IFX_MC_CONFIG0_ACCSTYPE_LEN (8)

/** \\brief  Mask for Ifx_MC_CONFIG0_Bits.ACCSTYPE */
#define IFX_MC_CONFIG0_ACCSTYPE_MSK (0xff)

/** \\brief  Offset for Ifx_MC_CONFIG0_Bits.ACCSTYPE */
#define IFX_MC_CONFIG0_ACCSTYPE_OFF (0)

/** \\brief  Length for Ifx_MC_CONFIG0_Bits.NUMACCS */
#define IFX_MC_CONFIG0_NUMACCS_LEN (4)

/** \\brief  Mask for Ifx_MC_CONFIG0_Bits.NUMACCS */
#define IFX_MC_CONFIG0_NUMACCS_MSK (0xf)

/** \\brief  Offset for Ifx_MC_CONFIG0_Bits.NUMACCS */
#define IFX_MC_CONFIG0_NUMACCS_OFF (12)

/** \\brief  Length for Ifx_MC_CONFIG1_Bits.ACCSPAT */
#define IFX_MC_CONFIG1_ACCSPAT_LEN (8)

/** \\brief  Mask for Ifx_MC_CONFIG1_Bits.ACCSPAT */
#define IFX_MC_CONFIG1_ACCSPAT_MSK (0xff)

/** \\brief  Offset for Ifx_MC_CONFIG1_Bits.ACCSPAT */
#define IFX_MC_CONFIG1_ACCSPAT_OFF (0)

/** \\brief  Length for Ifx_MC_CONFIG1_Bits.AG_MOD */
#define IFX_MC_CONFIG1_AG_MOD_LEN (4)

/** \\brief  Mask for Ifx_MC_CONFIG1_Bits.AG_MOD */
#define IFX_MC_CONFIG1_AG_MOD_MSK (0xf)

/** \\brief  Offset for Ifx_MC_CONFIG1_Bits.AG_MOD */
#define IFX_MC_CONFIG1_AG_MOD_OFF (12)

/** \\brief  Length for Ifx_MC_CONFIG1_Bits.DIR */
#define IFX_MC_CONFIG1_DIR_LEN (1)

/** \\brief  Mask for Ifx_MC_CONFIG1_Bits.DIR */
#define IFX_MC_CONFIG1_DIR_MSK (0x1)

/** \\brief  Offset for Ifx_MC_CONFIG1_Bits.DIR */
#define IFX_MC_CONFIG1_DIR_OFF (11)

/** \\brief  Length for Ifx_MC_ECCD_Bits.AERR */
#define IFX_MC_ECCD_AERR_LEN (1)

/** \\brief  Mask for Ifx_MC_ECCD_Bits.AERR */
#define IFX_MC_ECCD_AERR_MSK (0x1)

/** \\brief  Offset for Ifx_MC_ECCD_Bits.AERR */
#define IFX_MC_ECCD_AERR_OFF (3)

/** \\brief  Length for Ifx_MC_ECCD_Bits.CERR */
#define IFX_MC_ECCD_CERR_LEN (1)

/** \\brief  Mask for Ifx_MC_ECCD_Bits.CERR */
#define IFX_MC_ECCD_CERR_MSK (0x1)

/** \\brief  Offset for Ifx_MC_ECCD_Bits.CERR */
#define IFX_MC_ECCD_CERR_OFF (1)

/** \\brief  Length for Ifx_MC_ECCD_Bits.EOV */
#define IFX_MC_ECCD_EOV_LEN (1)

/** \\brief  Mask for Ifx_MC_ECCD_Bits.EOV */
#define IFX_MC_ECCD_EOV_MSK (0x1)

/** \\brief  Offset for Ifx_MC_ECCD_Bits.EOV */
#define IFX_MC_ECCD_EOV_OFF (15)

/** \\brief  Length for Ifx_MC_ECCD_Bits.SERR */
#define IFX_MC_ECCD_SERR_LEN (1)

/** \\brief  Mask for Ifx_MC_ECCD_Bits.SERR */
#define IFX_MC_ECCD_SERR_MSK (0x1)

/** \\brief  Offset for Ifx_MC_ECCD_Bits.SERR */
#define IFX_MC_ECCD_SERR_OFF (0)

/** \\brief  Length for Ifx_MC_ECCD_Bits.TRC */
#define IFX_MC_ECCD_TRC_LEN (1)

/** \\brief  Mask for Ifx_MC_ECCD_Bits.TRC */
#define IFX_MC_ECCD_TRC_MSK (0x1)

/** \\brief  Offset for Ifx_MC_ECCD_Bits.TRC */
#define IFX_MC_ECCD_TRC_OFF (4)

/** \\brief  Length for Ifx_MC_ECCD_Bits.UERR */
#define IFX_MC_ECCD_UERR_LEN (1)

/** \\brief  Mask for Ifx_MC_ECCD_Bits.UERR */
#define IFX_MC_ECCD_UERR_MSK (0x1)

/** \\brief  Offset for Ifx_MC_ECCD_Bits.UERR */
#define IFX_MC_ECCD_UERR_OFF (2)

/** \\brief  Length for Ifx_MC_ECCD_Bits.VAL */
#define IFX_MC_ECCD_VAL_LEN (4)

/** \\brief  Mask for Ifx_MC_ECCD_Bits.VAL */
#define IFX_MC_ECCD_VAL_MSK (0xf)

/** \\brief  Offset for Ifx_MC_ECCD_Bits.VAL */
#define IFX_MC_ECCD_VAL_OFF (5)

/** \\brief  Length for Ifx_MC_ECCS_Bits.AENE */
#define IFX_MC_ECCS_AENE_LEN (1)

/** \\brief  Mask for Ifx_MC_ECCS_Bits.AENE */
#define IFX_MC_ECCS_AENE_MSK (0x1)

/** \\brief  Offset for Ifx_MC_ECCS_Bits.AENE */
#define IFX_MC_ECCS_AENE_OFF (2)

/** \\brief  Length for Ifx_MC_ECCS_Bits.BFLE */
#define IFX_MC_ECCS_BFLE_LEN (1)

/** \\brief  Mask for Ifx_MC_ECCS_Bits.BFLE */
#define IFX_MC_ECCS_BFLE_MSK (0x1)

/** \\brief  Offset for Ifx_MC_ECCS_Bits.BFLE */
#define IFX_MC_ECCS_BFLE_OFF (5)

/** \\brief  Length for Ifx_MC_ECCS_Bits.CENE */
#define IFX_MC_ECCS_CENE_LEN (1)

/** \\brief  Mask for Ifx_MC_ECCS_Bits.CENE */
#define IFX_MC_ECCS_CENE_MSK (0x1)

/** \\brief  Offset for Ifx_MC_ECCS_Bits.CENE */
#define IFX_MC_ECCS_CENE_OFF (0)

/** \\brief  Length for Ifx_MC_ECCS_Bits.ECCMAP */
#define IFX_MC_ECCS_ECCMAP_LEN (2)

/** \\brief  Mask for Ifx_MC_ECCS_Bits.ECCMAP */
#define IFX_MC_ECCS_ECCMAP_MSK (0x3)

/** \\brief  Offset for Ifx_MC_ECCS_Bits.ECCMAP */
#define IFX_MC_ECCS_ECCMAP_OFF (8)

/** \\brief  Length for Ifx_MC_ECCS_Bits.ECE */
#define IFX_MC_ECCS_ECE_LEN (1)

/** \\brief  Mask for Ifx_MC_ECCS_Bits.ECE */
#define IFX_MC_ECCS_ECE_MSK (0x1)

/** \\brief  Offset for Ifx_MC_ECCS_Bits.ECE */
#define IFX_MC_ECCS_ECE_OFF (3)

/** \\brief  Length for Ifx_MC_ECCS_Bits.SFLE */
#define IFX_MC_ECCS_SFLE_LEN (2)

/** \\brief  Mask for Ifx_MC_ECCS_Bits.SFLE */
#define IFX_MC_ECCS_SFLE_MSK (0x3)

/** \\brief  Offset for Ifx_MC_ECCS_Bits.SFLE */
#define IFX_MC_ECCS_SFLE_OFF (6)

/** \\brief  Length for Ifx_MC_ECCS_Bits.TC_WAY_SEL */
#define IFX_MC_ECCS_TC_WAY_SEL_LEN (2)

/** \\brief  Mask for Ifx_MC_ECCS_Bits.TC_WAY_SEL */
#define IFX_MC_ECCS_TC_WAY_SEL_MSK (0x3)

/** \\brief  Offset for Ifx_MC_ECCS_Bits.TC_WAY_SEL */
#define IFX_MC_ECCS_TC_WAY_SEL_OFF (10)

/** \\brief  Length for Ifx_MC_ECCS_Bits.TRE */
#define IFX_MC_ECCS_TRE_LEN (1)

/** \\brief  Mask for Ifx_MC_ECCS_Bits.TRE */
#define IFX_MC_ECCS_TRE_MSK (0x1)

/** \\brief  Offset for Ifx_MC_ECCS_Bits.TRE */
#define IFX_MC_ECCS_TRE_OFF (4)

/** \\brief  Length for Ifx_MC_ECCS_Bits.UENE */
#define IFX_MC_ECCS_UENE_LEN (1)

/** \\brief  Mask for Ifx_MC_ECCS_Bits.UENE */
#define IFX_MC_ECCS_UENE_MSK (0x1)

/** \\brief  Offset for Ifx_MC_ECCS_Bits.UENE */
#define IFX_MC_ECCS_UENE_OFF (1)

/** \\brief  Length for Ifx_MC_ETRR_Bits.ADDR */
#define IFX_MC_ETRR_ADDR_LEN (16)

/** \\brief  Mask for Ifx_MC_ETRR_Bits.ADDR */
#define IFX_MC_ETRR_ADDR_MSK (0xffff)

/** \\brief  Offset for Ifx_MC_ETRR_Bits.ADDR */
#define IFX_MC_ETRR_ADDR_OFF (0)

/** \\brief  Length for Ifx_MC_MCONTROL_Bits.BITTOG */
#define IFX_MC_MCONTROL_BITTOG_LEN (1)

/** \\brief  Mask for Ifx_MC_MCONTROL_Bits.BITTOG */
#define IFX_MC_MCONTROL_BITTOG_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MCONTROL_Bits.BITTOG */
#define IFX_MC_MCONTROL_BITTOG_OFF (7)

/** \\brief  Length for Ifx_MC_MCONTROL_Bits.CHEN */
#define IFX_MC_MCONTROL_CHEN_LEN (1)

/** \\brief  Mask for Ifx_MC_MCONTROL_Bits.CHEN */
#define IFX_MC_MCONTROL_CHEN_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MCONTROL_Bits.CHEN */
#define IFX_MC_MCONTROL_CHEN_OFF (3)

/** \\brief  Length for Ifx_MC_MCONTROL_Bits.DINIT */
#define IFX_MC_MCONTROL_DINIT_LEN (1)

/** \\brief  Mask for Ifx_MC_MCONTROL_Bits.DINIT */
#define IFX_MC_MCONTROL_DINIT_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MCONTROL_Bits.DINIT */
#define IFX_MC_MCONTROL_DINIT_OFF (4)

/** \\brief  Length for Ifx_MC_MCONTROL_Bits.FAILDMP */
#define IFX_MC_MCONTROL_FAILDMP_LEN (1)

/** \\brief  Mask for Ifx_MC_MCONTROL_Bits.FAILDMP */
#define IFX_MC_MCONTROL_FAILDMP_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MCONTROL_Bits.FAILDMP */
#define IFX_MC_MCONTROL_FAILDMP_OFF (9)

/** \\brief  Length for Ifx_MC_MCONTROL_Bits.GP_BASE */
#define IFX_MC_MCONTROL_GP_BASE_LEN (1)

/** \\brief  Mask for Ifx_MC_MCONTROL_Bits.GP_BASE */
#define IFX_MC_MCONTROL_GP_BASE_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MCONTROL_Bits.GP_BASE */
#define IFX_MC_MCONTROL_GP_BASE_OFF (8)

/** \\brief  Length for Ifx_MC_MCONTROL_Bits.INITRED */
#define IFX_MC_MCONTROL_INITRED_LEN (1)

/** \\brief  Mask for Ifx_MC_MCONTROL_Bits.INITRED */
#define IFX_MC_MCONTROL_INITRED_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MCONTROL_Bits.INITRED */
#define IFX_MC_MCONTROL_INITRED_OFF (12)

/** \\brief  Length for Ifx_MC_MCONTROL_Bits.LDRED */
#define IFX_MC_MCONTROL_LDRED_LEN (1)

/** \\brief  Mask for Ifx_MC_MCONTROL_Bits.LDRED */
#define IFX_MC_MCONTROL_LDRED_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MCONTROL_Bits.LDRED */
#define IFX_MC_MCONTROL_LDRED_OFF (13)

/** \\brief  Length for Ifx_MC_MCONTROL_Bits.MAREN */
#define IFX_MC_MCONTROL_MAREN_LEN (1)

/** \\brief  Mask for Ifx_MC_MCONTROL_Bits.MAREN */
#define IFX_MC_MCONTROL_MAREN_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MCONTROL_Bits.MAREN */
#define IFX_MC_MCONTROL_MAREN_OFF (1)

/** \\brief  Length for Ifx_MC_MCONTROL_Bits.MARS */
#define IFX_MC_MCONTROL_MARS_LEN (1)

/** \\brief  Mask for Ifx_MC_MCONTROL_Bits.MARS */
#define IFX_MC_MCONTROL_MARS_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MCONTROL_Bits.MARS */
#define IFX_MC_MCONTROL_MARS_OFF (2)

/** \\brief  Length for Ifx_MC_MCONTROL_Bits.RAR_ECC */
#define IFX_MC_MCONTROL_RAR_ECC_LEN (1)

/** \\brief  Mask for Ifx_MC_MCONTROL_Bits.RAR_ECC */
#define IFX_MC_MCONTROL_RAR_ECC_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MCONTROL_Bits.RAR_ECC */
#define IFX_MC_MCONTROL_RAR_ECC_OFF (15)

/** \\brief  Length for Ifx_MC_MCONTROL_Bits.RCADR */
#define IFX_MC_MCONTROL_RCADR_LEN (1)

/** \\brief  Mask for Ifx_MC_MCONTROL_Bits.RCADR */
#define IFX_MC_MCONTROL_RCADR_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MCONTROL_Bits.RCADR */
#define IFX_MC_MCONTROL_RCADR_OFF (5)

/** \\brief  Length for Ifx_MC_MCONTROL_Bits.RESUME */
#define IFX_MC_MCONTROL_RESUME_LEN (1)

/** \\brief  Mask for Ifx_MC_MCONTROL_Bits.RESUME */
#define IFX_MC_MCONTROL_RESUME_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MCONTROL_Bits.RESUME */
#define IFX_MC_MCONTROL_RESUME_OFF (11)

/** \\brief  Length for Ifx_MC_MCONTROL_Bits.ROWTOG */
#define IFX_MC_MCONTROL_ROWTOG_LEN (1)

/** \\brief  Mask for Ifx_MC_MCONTROL_Bits.ROWTOG */
#define IFX_MC_MCONTROL_ROWTOG_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MCONTROL_Bits.ROWTOG */
#define IFX_MC_MCONTROL_ROWTOG_OFF (6)

/** \\brief  Length for Ifx_MC_MCONTROL_Bits.RSF */
#define IFX_MC_MCONTROL_RSF_LEN (1)

/** \\brief  Mask for Ifx_MC_MCONTROL_Bits.RSF */
#define IFX_MC_MCONTROL_RSF_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MCONTROL_Bits.RSF */
#define IFX_MC_MCONTROL_RSF_OFF (10)

/** \\brief  Length for Ifx_MC_MCONTROL_Bits.START */
#define IFX_MC_MCONTROL_START_LEN (1)

/** \\brief  Mask for Ifx_MC_MCONTROL_Bits.START */
#define IFX_MC_MCONTROL_START_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MCONTROL_Bits.START */
#define IFX_MC_MCONTROL_START_OFF (0)

/** \\brief  Length for Ifx_MC_MCONTROL_Bits.USERED */
#define IFX_MC_MCONTROL_USERED_LEN (1)

/** \\brief  Mask for Ifx_MC_MCONTROL_Bits.USERED */
#define IFX_MC_MCONTROL_USERED_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MCONTROL_Bits.USERED */
#define IFX_MC_MCONTROL_USERED_OFF (14)

/** \\brief  Length for Ifx_MC_MSTATUS_Bits.DONE */
#define IFX_MC_MSTATUS_DONE_LEN (1)

/** \\brief  Mask for Ifx_MC_MSTATUS_Bits.DONE */
#define IFX_MC_MSTATUS_DONE_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MSTATUS_Bits.DONE */
#define IFX_MC_MSTATUS_DONE_OFF (0)

/** \\brief  Length for Ifx_MC_MSTATUS_Bits.FAIL_COUNT */
#define IFX_MC_MSTATUS_FAIL_COUNT_LEN (6)

/** \\brief  Mask for Ifx_MC_MSTATUS_Bits.FAIL_COUNT */
#define IFX_MC_MSTATUS_FAIL_COUNT_MSK (0x3f)

/** \\brief  Offset for Ifx_MC_MSTATUS_Bits.FAIL_COUNT */
#define IFX_MC_MSTATUS_FAIL_COUNT_OFF (2)

/** \\brief  Length for Ifx_MC_MSTATUS_Bits.FAIL */
#define IFX_MC_MSTATUS_FAIL_LEN (1)

/** \\brief  Mask for Ifx_MC_MSTATUS_Bits.FAIL */
#define IFX_MC_MSTATUS_FAIL_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MSTATUS_Bits.FAIL */
#define IFX_MC_MSTATUS_FAIL_OFF (1)

/** \\brief  Length for Ifx_MC_MSTATUS_Bits.FDA */
#define IFX_MC_MSTATUS_FDA_LEN (1)

/** \\brief  Mask for Ifx_MC_MSTATUS_Bits.FDA */
#define IFX_MC_MSTATUS_FDA_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MSTATUS_Bits.FDA */
#define IFX_MC_MSTATUS_FDA_OFF (10)

/** \\brief  Length for Ifx_MC_MSTATUS_Bits.MTOF */
#define IFX_MC_MSTATUS_MTOF_LEN (1)

/** \\brief  Mask for Ifx_MC_MSTATUS_Bits.MTOF */
#define IFX_MC_MSTATUS_MTOF_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MSTATUS_Bits.MTOF */
#define IFX_MC_MSTATUS_MTOF_OFF (9)

/** \\brief  Length for Ifx_MC_MSTATUS_Bits.RUPD */
#define IFX_MC_MSTATUS_RUPD_LEN (1)

/** \\brief  Mask for Ifx_MC_MSTATUS_Bits.RUPD */
#define IFX_MC_MSTATUS_RUPD_MSK (0x1)

/** \\brief  Offset for Ifx_MC_MSTATUS_Bits.RUPD */
#define IFX_MC_MSTATUS_RUPD_OFF (8)

/** \\brief  Length for Ifx_MC_RANGE_Bits.ADDR */
#define IFX_MC_RANGE_ADDR_LEN (15)

/** \\brief  Mask for Ifx_MC_RANGE_Bits.ADDR */
#define IFX_MC_RANGE_ADDR_MSK (0x7fff)

/** \\brief  Offset for Ifx_MC_RANGE_Bits.ADDR */
#define IFX_MC_RANGE_ADDR_OFF (0)

/** \\brief  Length for Ifx_MC_RANGE_Bits.RAEN */
#define IFX_MC_RANGE_RAEN_LEN (1)

/** \\brief  Mask for Ifx_MC_RANGE_Bits.RAEN */
#define IFX_MC_RANGE_RAEN_MSK (0x1)

/** \\brief  Offset for Ifx_MC_RANGE_Bits.RAEN */
#define IFX_MC_RANGE_RAEN_OFF (15)

/** \\brief  Length for Ifx_MC_RDBFL_Bits.WDATA */
#define IFX_MC_RDBFL_WDATA_LEN (16)

/** \\brief  Mask for Ifx_MC_RDBFL_Bits.WDATA */
#define IFX_MC_RDBFL_WDATA_MSK (0xffff)

/** \\brief  Offset for Ifx_MC_RDBFL_Bits.WDATA */
#define IFX_MC_RDBFL_WDATA_OFF (0)

/** \\brief  Length for Ifx_MC_REVID_Bits.REV_ID */
#define IFX_MC_REVID_REV_ID_LEN (16)

/** \\brief  Mask for Ifx_MC_REVID_Bits.REV_ID */
#define IFX_MC_REVID_REV_ID_MSK (0xffff)

/** \\brief  Offset for Ifx_MC_REVID_Bits.REV_ID */
#define IFX_MC_REVID_REV_ID_OFF (0)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXMC_BF_H */
