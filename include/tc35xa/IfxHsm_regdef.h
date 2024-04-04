/**
 * \file IfxHsm_regdef.h
 * \brief
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC35XA_TS_V2.6.0.R0
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
 * \defgroup IfxSfr_Hsm_Registers Hsm Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Hsm_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Hsm_Registers
 * 
 * \defgroup IfxSfr_Hsm_Registers_union Register unions
 * \ingroup IfxSfr_Hsm_Registers
 * 
 * \defgroup IfxSfr_Hsm_Registers_struct Memory map
 * \ingroup IfxSfr_Hsm_Registers
 */
#ifndef IFXHSM_REGDEF_H
#define IFXHSM_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Hsm_Registers_Bitfields
 * \{  */
/** \brief Debug Window Base Address */
typedef struct _Ifx_HSM_DBGBASE_Bits
{
    Ifx_Strict_32Bit reserved_0:16;    /**< \brief [15:0] \internal Reserved */
    Ifx_Strict_32Bit BASE:16;         /**< \brief [31:16] Base Address (rw) */
} Ifx_HSM_DBGBASE_Bits;

/** \brief HSM to Host Flags */
typedef struct _Ifx_HSM_HSM2HTF_Bits
{
    Ifx_Strict_32Bit HSM2HTF:32;      /**< \brief [31:0] HSM to Host Flags (rwh) */
} Ifx_HSM_HSM2HTF_Bits;

/** \brief HSM to Host Interrupt Enable */
typedef struct _Ifx_HSM_HSM2HTIE_Bits
{
    Ifx_Strict_32Bit HSM2HTIE:32;     /**< \brief [31:0] HSM to Host Interrupt Enable (rw) */
} Ifx_HSM_HSM2HTIE_Bits;

/** \brief HSM to Host Interrupt Select */
typedef struct _Ifx_HSM_HSM2HTIS_Bits
{
    Ifx_Strict_32Bit HSM2HTIS:32;     /**< \brief [31:0] HSM to Host Interrupt Select (rw) */
} Ifx_HSM_HSM2HTIS_Bits;

/** \brief HSM to Host Status */
typedef struct _Ifx_HSM_HSM2HTS_Bits
{
    Ifx_UReg_32Bit HSM2HTS:32;        /**< \brief [31:0] HSM to Host Status (rh) */
} Ifx_HSM_HSM2HTS_Bits;

/** \brief HSM Control */
typedef struct _Ifx_HSM_HSMCTRL_Bits
{
    Ifx_Strict_32Bit EOMBT:2;         /**< \brief [1:0] End of Memory BIST test. (rwh) */
    Ifx_Strict_32Bit reserved_2:30;    /**< \brief [31:2] \internal Reserved */
} Ifx_HSM_HSMCTRL_Bits;

/** \brief OCDS Suspend and Trigger Bus Control */
typedef struct _Ifx_HSM_HSMOTGB_Bits
{
    Ifx_Strict_32Bit TGS:2;           /**< \brief [1:0] Trigger Set for OTGB0/1 (rw) */
    Ifx_Strict_32Bit TGB:1;           /**< \brief [2:2] OTGB0/1 Bus Select (rw) */
    Ifx_Strict_32Bit TG_P:1;          /**< \brief [3:3] TGS, TGB Write Protection (w) */
    Ifx_Strict_32Bit reserved_4:28;    /**< \brief [31:4] \internal Reserved */
} Ifx_HSM_HSMOTGB_Bits;

/** \brief Host to HSM Flags */
typedef struct _Ifx_HSM_HT2HSMF_Bits
{
    Ifx_Strict_32Bit HT2HSMF:32;      /**< \brief [31:0] Host to HSM Flags (rwh) */
} Ifx_HSM_HT2HSMF_Bits;

/** \brief Host to HSM Status */
typedef struct _Ifx_HSM_HT2HSMS_Bits
{
    Ifx_Strict_32Bit HT2HSMS:32;      /**< \brief [31:0] Host to HSM Status (rw) */
} Ifx_HSM_HT2HSMS_Bits;

/** \brief HSM Identifier Register */
typedef struct _Ifx_HSM_ID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type (r) */
    Ifx_UReg_32Bit MOD_NUMBER:16;     /**< \brief [31:16] Module Number Value (r) */
} Ifx_HSM_ID_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_hsm_Registers_union
 * \{   */
/** \brief Debug Window Base Address   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_HSM_DBGBASE_Bits B;           /**< \brief Bitfield access */
} Ifx_HSM_DBGBASE;

/** \brief HSM to Host Flags   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_HSM_HSM2HTF_Bits B;           /**< \brief Bitfield access */
} Ifx_HSM_HSM2HTF;

/** \brief HSM to Host Interrupt Enable   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_HSM_HSM2HTIE_Bits B;          /**< \brief Bitfield access */
} Ifx_HSM_HSM2HTIE;

/** \brief HSM to Host Interrupt Select   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_HSM_HSM2HTIS_Bits B;          /**< \brief Bitfield access */
} Ifx_HSM_HSM2HTIS;

/** \brief HSM to Host Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_HSM_HSM2HTS_Bits B;           /**< \brief Bitfield access */
} Ifx_HSM_HSM2HTS;

/** \brief HSM Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_HSM_HSMCTRL_Bits B;           /**< \brief Bitfield access */
} Ifx_HSM_HSMCTRL;

/** \brief OCDS Suspend and Trigger Bus Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_HSM_HSMOTGB_Bits B;           /**< \brief Bitfield access */
} Ifx_HSM_HSMOTGB;

/** \brief Host to HSM Flags   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_HSM_HT2HSMF_Bits B;           /**< \brief Bitfield access */
} Ifx_HSM_HT2HSMF;

/** \brief Host to HSM Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_HSM_HT2HSMS_Bits B;           /**< \brief Bitfield access */
} Ifx_HSM_HT2HSMS;

/** \brief HSM Identifier Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_HSM_ID_Bits B;                /**< \brief Bitfield access */
} Ifx_HSM_ID;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxSfr_Hsm_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief HSM object */
typedef volatile struct _Ifx_HSM
{
       Ifx_UReg_8Bit                       reserved_0[8];          /**< \brief 0, \internal Reserved */
       Ifx_HSM_ID                          ID;                     /**< \brief 8, HSM Identifier Register*/
       Ifx_UReg_8Bit                       reserved_C[20];         /**< \brief C, \internal Reserved */
       Ifx_HSM_HT2HSMF                     HT2HSMF;                /**< \brief 20, Host to HSM Flags*/
       Ifx_UReg_8Bit                       reserved_24[4];         /**< \brief 24, \internal Reserved */
       Ifx_HSM_HSM2HTF                     HSM2HTF;                /**< \brief 28, HSM to Host Flags*/
       Ifx_HSM_HSM2HTIE                    HSM2HTIE;               /**< \brief 2C, HSM to Host Interrupt Enable*/
       Ifx_HSM_HSM2HTIS                    HSM2HTIS;               /**< \brief 30, HSM to Host Interrupt Select*/
       Ifx_HSM_HSM2HTS                     HSM2HTS;                /**< \brief 34, HSM to Host Status*/
       Ifx_HSM_HT2HSMS                     HT2HSMS;                /**< \brief 38, Host to HSM Status*/
       Ifx_UReg_8Bit                       reserved_3C[4036];      /**< \brief 3C, \internal Reserved */
       Ifx_HSM_HSMCTRL                     HSMCTRL;                /**< \brief 1000, HSM Control*/
       Ifx_UReg_8Bit                       reserved_1004[12];      /**< \brief 1004, \internal Reserved */
       Ifx_HSM_DBGBASE                     DBGBASE;                /**< \brief 1010, Debug Window Base Address*/
       Ifx_UReg_8Bit                       reserved_1014[12];      /**< \brief 1014, \internal Reserved */
       Ifx_HSM_HSMOTGB                     HSMOTGB;                /**< \brief 1020, OCDS Suspend and Trigger Bus Control*/
       Ifx_UReg_8Bit                       reserved_1024[61404];    /**< \brief 1024, \internal Reserved */
       Ifx_Strict_32Bit                    DBGMEM[16384];         /**< \brief 10000, Debug Memory Window*/
} Ifx_HSM;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXHSM_REGDEF_H */
