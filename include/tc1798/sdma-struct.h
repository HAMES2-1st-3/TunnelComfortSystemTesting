/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1798_SDMA_STRUCTS_H_
#define _TC1798_SDMA_STRUCTS_H_
/*
   TriCore TC1798
   Some struct definitions for conveniance
*/

#include <tc1798/sdma.h>
#ifndef SDMA_BASE
#define SDMA_BASE 0xf0003800
#endif /* SDMA_BASE */

#ifndef _SDMA_CH_T_
#define _SDMA_CH_T_
typedef struct 
{
    SDMA_CHSRm_t    CHSR;               /* 0x0 */    
    SDMA_CHCRm_t    CHCR;               /* 0x4 */    
    SDMA_CHICRm_t   CHICR;              /* 0x8 */    
    SDMA_ADRCRm_t   ADRCR;              /* 0xc */    
    SDMA_SADRm_t    SADR;               /* 0x10 */    
    SDMA_DADRm_t    DADR;               /* 0x14 */    
    SDMA_SHADRm_t   SHADR;              /* 0x18 */    
    unsigned int    reserved7[0x1];     /* 0x1c */
} SDMA_CH_t;
#endif /* _SDMA_CH_T_ */

#ifndef _SDMA_CHCRC_T_
#define _SDMA_CHCRC_T_
typedef struct 
{
    SDMA_SAMINm_t   SAMIN;              /* 0x0 */    
    SDMA_SAMAXm_t   SAMAX;              /* 0x4 */    
    SDMA_DAMINm_t   DAMIN;              /* 0x8 */    
    SDMA_DAMAXm_t   DAMAX;              /* 0xc */    
    SDMA_SCRCm_t    SCRC;               /* 0x10 */    
    SDMA_DCRCm_t    DCRC;               /* 0x14 */    
    SDMA_RDCRCm_t   RDCRC;              /* 0x18 */    
    unsigned int    reserved7[0x1];     /* 0x1c */
} SDMA_CHCRC_t;
#endif /* _SDMA_CHCRC_T_ */



typedef struct
{
    SDMA_CLC_t      CLC;                /* 0x0 */
    unsigned int    reserved1[0x1];     /* 0x4 */
    SDMA_ID_t       ID;                 /* 0x8 */
    unsigned int    reserved3[0x1];     /* 0xc */
    SDMA_CHRSTR_t   CHRSTR;             /* 0x10 */
    SDMA_TRSR_t     TRSR;               /* 0x14 */
    SDMA_STREQ_t    STREQ;              /* 0x18 */
    SDMA_HTREQ_t    HTREQ;              /* 0x1c */
    SDMA_EER_t      EER;                /* 0x20 */
    SDMA_ERRSR_t    ERRSR;              /* 0x24 */
    SDMA_CLRE_t     CLRE;               /* 0x28 */
    SDMA_GINTR_t    GINTR;              /* 0x2c */
    SDMA_MESR_t     MESR;               /* 0x30 */
    SDMA_ME0R_t     ME0R;               /* 0x34 */
    unsigned int    reserved14[0x1];    /* 0x38 */
    SDMA_ME0PR_t    ME0PR;              /* 0x3c */
    unsigned int    reserved16[0x5];    /* 0x40 */
    SDMA_INTSR_t    INTSR;              /* 0x54 */
    SDMA_INTCR_t    INTCR;              /* 0x58 */
    SDMA_WRPSR_t    WRPSR;              /* 0x5c */
    unsigned int    reserved20[0x1];    /* 0x60 */
    SDMA_OCDSR_t    OCDSR;              /* 0x64 */
    SDMA_SUSPMR_t   SUSPMR;             /* 0x68 */
    unsigned int    reserved23[0x5];    /* 0x6c */
    SDMA_CH_t       CH[0x8];            /* 0x80 */
    SDMA_CHCRC_t    CHCRC[0x8];         /* 0x180 */
    unsigned int    reserved26[0x18];   /* 0x280 */
    SDMA_SRCm_t     SRC7;               /* 0x2e0 */
    SDMA_SRCm_t     SRC6;               /* 0x2e4 */
    SDMA_SRCm_t     SRC5;               /* 0x2e8 */
    SDMA_SRCm_t     SRC4;               /* 0x2ec */
    SDMA_SRCm_t     SRC3;               /* 0x2f0 */
    SDMA_SRCm_t     SRC2;               /* 0x2f4 */
    SDMA_SRCm_t     SRC1;               /* 0x2f8 */
    SDMA_SRCm_t     SRC0;               /* 0x2fc */
} SDMA_t;

#endif /* _TC1798_SDMA_STRUCTS_H_ */
