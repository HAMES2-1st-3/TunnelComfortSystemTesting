/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1728_FADC_STRUCTS_H_
#define _TC1728_FADC_STRUCTS_H_
/*
   TriCore TC1728
   Some struct definitions for conveniance
*/

#include <tc1728/fadc.h>
#ifndef FADC_BASE
#define FADC_BASE 0xf0100400
#endif /* FADC_BASE */


typedef struct
{
    FADC_CLC_t      CLC;                /* 0x0 */
    unsigned int    reserved1[0x1];     /* 0x4 */
    FADC_ID_t       ID;                 /* 0x8 */
    FADC_FDR_t      FDR;                /* 0xc */
    FADC_CRSR_t     CRSR;               /* 0x10 */
    FADC_FMR_t      FMR;                /* 0x14 */
    FADC_NCTR_t     NCTR;               /* 0x18 */
    FADC_GCR_t      GCR;                /* 0x1c */
    FADC_CFGRm_t    CFGR0;              /* 0x20 */
    FADC_CFGRm_t    CFGR1;              /* 0x24 */
    unsigned int    reserved10[0x2];    /* 0x28 */
    FADC_ACRm_t     ACR0;               /* 0x30 */
    FADC_ACRm_t     ACR1;               /* 0x34 */
    unsigned int    reserved13[0x2];    /* 0x38 */
    FADC_RCHm_t     RCH0;               /* 0x40 */
    FADC_RCHm_t     RCH1;               /* 0x44 */
    unsigned int    reserved16[0x3];    /* 0x48 */
    FADC_ALR_t      ALR;                /* 0x54 */
    unsigned int    reserved18[0x2];    /* 0x58 */
    FADC_FCRm_t     FCR0;               /* 0x60 */
    FADC_CRRm_t     CRR0;               /* 0x64 */
    FADC_IRRm_t     IRR10;              /* 0x68 */
    FADC_IRRm_t     IRR20;              /* 0x6c */
    FADC_IRRm_t     IRR30;              /* 0x70 */
    FADC_FRR0_t     FRR0;               /* 0x74 */
    unsigned int    reserved25[0x2];    /* 0x78 */
    FADC_FCRm_t     FCR1;               /* 0x80 */
    FADC_CRRm_t     CRR1;               /* 0x84 */
    FADC_IRR11_t    IRR11;              /* 0x88 */
    unsigned int    reserved29[0x2];    /* 0x8c */
    FADC_FRR1_t     FRR1;               /* 0x94 */
    FADC_SFRR1_t    SFRR1;              /* 0x98 */
    unsigned int    reserved32[0x15];   /* 0x9c */
    FADC_SRCm_t     SRC3;               /* 0xf0 */
    FADC_SRCm_t     SRC2;               /* 0xf4 */
    FADC_SRCm_t     SRC1;               /* 0xf8 */
    FADC_SRCm_t     SRC0;               /* 0xfc */
} FADC_t;

#endif /* _TC1728_FADC_STRUCTS_H_ */
