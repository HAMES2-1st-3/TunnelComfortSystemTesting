/**
 * \file IfxAdma_regdef.h
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
 * \defgroup IfxSfr_Adma_Registers Adma Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Adma_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Adma_Registers
 * 
 * \defgroup IfxSfr_Adma_Registers_union Register unions
 * \ingroup IfxSfr_Adma_Registers
 * 
 * \defgroup IfxSfr_Adma_Registers_struct Memory map
 * \ingroup IfxSfr_Adma_Registers
 */
#ifndef IFXADMA_REGDEF_H
#define IFXADMA_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Adma_Registers_Bitfields
 * \{  */
/** \brief Checksum Register */
typedef struct _Ifx_ADMA_CHKSUM_Bits
{
    Ifx_Strict_32Bit CHKSUM:32;       /**< \brief [31:0] DATA Checksum - CHKSUM (rwh) */
} Ifx_ADMA_CHKSUM_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_ADMA_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_ADMA_CLC_Bits;

/** \brief Counter Register */
typedef struct _Ifx_ADMA_CNT_Bits
{
    Ifx_UReg_32Bit CNT:32;            /**< \brief [31:0] Byte Counter - CNT (rwh) */
} Ifx_ADMA_CNT_Bits;

/** \brief Control Register */
typedef struct _Ifx_ADMA_CTRL_Bits
{
    Ifx_UReg_32Bit EN:1;              /**< \brief [0:0] Enable Bit - EN (rwh) */
    Ifx_UReg_32Bit ENCN:1;            /**< \brief [1:1] Enable Condition Bit - ENCN (rw) */
    Ifx_UReg_32Bit READY:1;           /**< \brief [2:2] Ready Flag - READY (rh) */
    Ifx_UReg_32Bit ERR:1;             /**< \brief [3:3] Error Interrupt - ERR (rh) */
    Ifx_UReg_32Bit ECC_STOP:1;        /**< \brief [4:4] ECC Error Mode Bit - ECC_STOP (rw) */
    Ifx_UReg_32Bit CHKEN:1;           /**< \brief [5:5] Checksum Enable Mode Bit - CHKEN (rw) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_ADMA_CTRL_Bits;

/** \brief Destination Address Register */
typedef struct _Ifx_ADMA_DADR_Bits
{
    Ifx_UReg_32Bit DADR:32;           /**< \brief [31:0] Destination Address Register (Pointer) - DADR (rwh) */
} Ifx_ADMA_DADR_Bits;

/** \brief Error Status Register */
typedef struct _Ifx_ADMA_ERRSR_Bits
{
    Ifx_UReg_32Bit ME:1;              /**< \brief [0:0] Memory Error - ME (rh) */
    Ifx_UReg_32Bit SE:1;              /**< \brief [1:1] System Error - SE (rh) */
    Ifx_UReg_32Bit SRI_ECC:1;         /**< \brief [2:2] System Memory ECC Error - SRI_ECC (rh) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_ADMA_ERRSR_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_ADMA_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_ADMA_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_ADMA_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_ADMA_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_ADMA_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_ADMA_KRSTCLR_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_ADMA_MODID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_UReg_32Bit MOD_NUMBER:16;     /**< \brief [31:16] Module Number Value - MOD_NUMBER (r) */
} Ifx_ADMA_MODID_Bits;

/** \brief OCDS Control and Status Register */
typedef struct _Ifx_ADMA_OCS_Bits
{
    Ifx_UReg_32Bit reserved_0:24;     /**< \brief [23:0] \internal Reserved */
    Ifx_UReg_32Bit SUS:4;             /**< \brief [27:24] OCDS Suspend Control - SUS (rw) */
    Ifx_UReg_32Bit SUS_P:1;           /**< \brief [28:28] SUS Write Protection - SUS_P (w) */
    Ifx_UReg_32Bit SUSSTA:1;          /**< \brief [29:29] Suspend State - SUSSTA (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_ADMA_OCS_Bits;

/** \brief OCDS Debug Access Register */
typedef struct _Ifx_ADMA_ODA_Bits
{
    Ifx_UReg_32Bit DDREN:1;           /**< \brief [0:0] Destructive Debug Read Enable - DDREN (rw) */
    Ifx_UReg_32Bit DREN:1;            /**< \brief [1:1] Destructive Read Enable - DREN (rw) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_ADMA_ODA_Bits;

/** \brief Source Address Register */
typedef struct _Ifx_ADMA_SADR_Bits
{
    Ifx_UReg_32Bit SADR:32;           /**< \brief [31:0] Source Address Register (Pointer) - SADR (rwh) */
} Ifx_ADMA_SADR_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_adma_Registers_union
 * \{   */
/** \brief Checksum Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ADMA_CHKSUM_Bits B;           /**< \brief Bitfield access */
} Ifx_ADMA_CHKSUM;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ADMA_CLC_Bits B;              /**< \brief Bitfield access */
} Ifx_ADMA_CLC;

/** \brief Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ADMA_CNT_Bits B;              /**< \brief Bitfield access */
} Ifx_ADMA_CNT;

/** \brief Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ADMA_CTRL_Bits B;             /**< \brief Bitfield access */
} Ifx_ADMA_CTRL;

/** \brief Destination Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ADMA_DADR_Bits B;             /**< \brief Bitfield access */
} Ifx_ADMA_DADR;

/** \brief Error Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ADMA_ERRSR_Bits B;            /**< \brief Bitfield access */
} Ifx_ADMA_ERRSR;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ADMA_KRST0_Bits B;            /**< \brief Bitfield access */
} Ifx_ADMA_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ADMA_KRST1_Bits B;            /**< \brief Bitfield access */
} Ifx_ADMA_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ADMA_KRSTCLR_Bits B;          /**< \brief Bitfield access */
} Ifx_ADMA_KRSTCLR;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ADMA_MODID_Bits B;            /**< \brief Bitfield access */
} Ifx_ADMA_MODID;

/** \brief OCDS Control and Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ADMA_OCS_Bits B;              /**< \brief Bitfield access */
} Ifx_ADMA_OCS;

/** \brief OCDS Debug Access Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ADMA_ODA_Bits B;              /**< \brief Bitfield access */
} Ifx_ADMA_ODA;

/** \brief Source Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ADMA_SADR_Bits B;             /**< \brief Bitfield access */
} Ifx_ADMA_SADR;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxSfr_Adma_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief ADMA object */
typedef volatile struct _Ifx_ADMA
{
       Ifx_ADMA_CLC                        CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_ADMA_MODID                      MODID;                  /**< \brief 8, Module Identification Register*/
       Ifx_ADMA_ERRSR                      ERRSR;                  /**< \brief C, Error Status Register*/
       Ifx_ADMA_SADR                       SADR;                   /**< \brief 10, Source Address Register*/
       Ifx_ADMA_DADR                       DADR;                   /**< \brief 14, Destination Address Register*/
       Ifx_ADMA_CNT                        CNT;                    /**< \brief 18, Counter Register*/
       Ifx_ADMA_CTRL                       CTRL;                   /**< \brief 1C, Control Register*/
       Ifx_ADMA_CHKSUM                     CHKSUM;                 /**< \brief 20, Checksum Register*/
       Ifx_UReg_8Bit                       reserved_24[28];        /**< \brief 24, \internal Reserved */
       Ifx_ADMA_KRST0                      KRST0;                  /**< \brief 40, Kernel Reset Register 0*/
       Ifx_ADMA_KRST1                      KRST1;                  /**< \brief 44, Kernel Reset Register 1*/
       Ifx_ADMA_KRSTCLR                    KRSTCLR;                /**< \brief 48, Kernel Reset Status Clear Register*/
       Ifx_ADMA_ODA                        ODA;                    /**< \brief 4C, OCDS Debug Access Register*/
       Ifx_ADMA_OCS                        OCS;                    /**< \brief 50, OCDS Control and Status Register*/
       Ifx_UReg_8Bit                       reserved_54[172];       /**< \brief 54, \internal Reserved */
} Ifx_ADMA;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXADMA_REGDEF_H */
