/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1798_MSC_STRUCTS_H_
#define _TC1798_MSC_STRUCTS_H_
/*
   TriCore TC1798
   Some struct definitions for conveniance
*/

#include <tc1798/msc0.h>
#ifndef MSC0_BASE
#define MSC0_BASE 0xf0000800
#endif /* MSC0_BASE */

#include <tc1798/msc1.h>
#ifndef MSC1_BASE
#define MSC1_BASE 0xf0000900
#endif /* MSC1_BASE */


typedef struct
{
    MSCn_CLC_t      CLC;                /* 0x0 */
    unsigned int    reserved1[0x1];     /* 0x4 */
    MSCn_ID_t       ID;                 /* 0x8 */
    MSCn_FDR_t      FDR;                /* 0xc */
    MSCn_USR_t      USR;                /* 0x10 */
    MSCn_DSC_t      DSC;                /* 0x14 */
    MSCn_DSS_t      DSS;                /* 0x18 */
    MSCn_DD_t       DD;                 /* 0x1c */
    MSCn_DC_t       DC;                 /* 0x20 */
    MSCn_DSDSL_t    DSDSL;              /* 0x24 */
    MSCn_DSDSH_t    DSDSH;              /* 0x28 */
    MSCn_ESR_t      ESR;                /* 0x2c */
    MSCn_UDm_t      UD0;                /* 0x30 */
    MSCn_UDm_t      UD1;                /* 0x34 */
    MSCn_UDm_t      UD2;                /* 0x38 */
    MSCn_UDm_t      UD3;                /* 0x3c */
    MSCn_ICR_t      ICR;                /* 0x40 */
    MSCn_ISR_t      ISR;                /* 0x44 */
    MSCn_ISC_t      ISC;                /* 0x48 */
    MSCn_OCR_t      OCR;                /* 0x4c */
    unsigned int    reserved20[0x2a];   /* 0x50 */
    MSCn_SRCm_t     SRC1;               /* 0xf8 */
    MSCn_SRCm_t     SRC0;               /* 0xfc */
} MSC_t;

#endif /* _TC1798_MSC_STRUCTS_H_ */
