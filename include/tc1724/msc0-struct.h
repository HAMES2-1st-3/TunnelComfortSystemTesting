/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1724_MSC0_STRUCTS_H_
#define _TC1724_MSC0_STRUCTS_H_
/*
   TriCore TC1724
   Some struct definitions for conveniance
*/

#include <tc1724/msc.h>
#ifndef MSC_BASE
#define MSC_BASE 0xf0000800
#endif /* MSC_BASE */


typedef struct
{
    MSC0_CLC_t      CLC;                /* 0x0 */
    unsigned int    reserved1[0x1];     /* 0x4 */
    MSC0_ID_t       ID;                 /* 0x8 */
    MSC0_FDR_t      FDR;                /* 0xc */
    MSC0_USR_t      USR;                /* 0x10 */
    MSC0_DSC_t      DSC;                /* 0x14 */
    MSC0_DSS_t      DSS;                /* 0x18 */
    MSC0_DD_t       DD;                 /* 0x1c */
    MSC0_DC_t       DC;                 /* 0x20 */
    MSC0_DSDSL_t    DSDSL;              /* 0x24 */
    MSC0_DSDSH_t    DSDSH;              /* 0x28 */
    MSC0_ESR_t      ESR;                /* 0x2c */
    MSC0_UDm_t      UD0;                /* 0x30 */
    MSC0_UDm_t      UD1;                /* 0x34 */
    MSC0_UDm_t      UD2;                /* 0x38 */
    MSC0_UDm_t      UD3;                /* 0x3c */
    MSC0_ICR_t      ICR;                /* 0x40 */
    MSC0_ISR_t      ISR;                /* 0x44 */
    MSC0_ISC_t      ISC;                /* 0x48 */
    MSC0_OCR_t      OCR;                /* 0x4c */
    unsigned int    reserved20[0x2a];   /* 0x50 */
    MSC0_SRCm_t     SRC1;               /* 0xf8 */
    MSC0_SRCm_t     SRC0;               /* 0xfc */
} MSC0_t;

#endif /* _TC1724_MSC0_STRUCTS_H_ */
