/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1792_DMA_STRUCTS_H_
#define _TC1792_DMA_STRUCTS_H_
/*
   TriCore TC1792
   Some struct definitions for conveniance
*/

#include <tc1792/dma.h>
#ifndef DMA_BASE
#define DMA_BASE 0xf0003c00
#endif /* DMA_BASE */

#ifndef _DMA_CH_T_
#define _DMA_CH_T_
typedef struct 
{
    DMA_CHSRm_t     CHSR;               /* 0x0 */    
    DMA_CHCRm_t     CHCR;               /* 0x4 */    
    DMA_CHICRm_t    CHICR;              /* 0x8 */    
    DMA_ADRCRm_t    ADRCR;              /* 0xc */    
    DMA_SADRm_t     SADR;               /* 0x10 */    
    DMA_DADRm_t     DADR;               /* 0x14 */    
    DMA_SHADRm_t    SHADR;              /* 0x18 */    
    unsigned int    reserved7[0x1];     /* 0x1c */
} DMA_CH_t;
#endif /* _DMA_CH_T_ */



typedef struct
{
    DMA_CLC_t       CLC;                /* 0x0 */
    unsigned int    reserved1[0x1];     /* 0x4 */
    DMA_ID_t        ID;                 /* 0x8 */
    unsigned int    reserved3[0x1];     /* 0xc */
    DMA_CHRSTR_t    CHRSTR;             /* 0x10 */
    DMA_TRSR_t      TRSR;               /* 0x14 */
    DMA_STREQ_t     STREQ;              /* 0x18 */
    DMA_HTREQ_t     HTREQ;              /* 0x1c */
    DMA_EER_t       EER;                /* 0x20 */
    DMA_ERRSR_t     ERRSR;              /* 0x24 */
    DMA_CLRE_t      CLRE;               /* 0x28 */
    DMA_GINTR_t     GINTR;              /* 0x2c */
    DMA_MESR_t      MESR;               /* 0x30 */
    DMA_MEmR_t      ME0R;               /* 0x34 */
    DMA_MEmR_t      ME1R;               /* 0x38 */
    DMA_MEmPR_t     ME0PR;              /* 0x3c */
    DMA_MEmPR_t     ME1PR;              /* 0x40 */
    DMA_MEmAENR_t   ME0AENR;            /* 0x44 */
    DMA_MEmARR_t    ME0ARR;             /* 0x48 */
    DMA_MEmAENR_t   ME1AENR;            /* 0x4c */
    DMA_MEmARR_t    ME1ARR;             /* 0x50 */
    DMA_INTSR_t     INTSR;              /* 0x54 */
    DMA_INTCR_t     INTCR;              /* 0x58 */
    DMA_WRPSR_t     WRPSR;              /* 0x5c */
    unsigned int    reserved24[0x1];    /* 0x60 */
    DMA_OCDSR_t     OCDSR;              /* 0x64 */
    DMA_SUSPMR_t    SUSPMR;             /* 0x68 */
    unsigned int    reserved27[0x5];    /* 0x6c */
    DMA_CH_t        CH[0x10];           /* 0x80 */
    unsigned int    reserved29[0x3];    /* 0x280 */
    DMA_SYSSRCm_t   SYSSRC4;            /* 0x28c */
    DMA_SYSSRCm_t   SYSSRC3;            /* 0x290 */
    DMA_SYSSRCm_t   SYSSRC2;            /* 0x294 */
    DMA_SYSSRCm_t   SYSSRC1;            /* 0x298 */
    DMA_SYSSRCm_t   SYSSRC0;            /* 0x29c */
    DMA_MLInSRCm_t  MLI0SRC3;           /* 0x2a0 */
    DMA_MLInSRCm_t  MLI0SRC2;           /* 0x2a4 */
    DMA_MLInSRCm_t  MLI0SRC1;           /* 0x2a8 */
    DMA_MLInSRCm_t  MLI0SRC0;           /* 0x2ac */
    unsigned int    reserved39[0x2];    /* 0x2b0 */
    DMA_MLInSRCm_t  MLI1SRC1;           /* 0x2b8 */
    DMA_MLInSRCm_t  MLI1SRC0;           /* 0x2bc */
    unsigned int    reserved42[0x8];    /* 0x2c0 */
    DMA_SRCm_t      SRC7;               /* 0x2e0 */
    DMA_SRCm_t      SRC6;               /* 0x2e4 */
    DMA_SRCm_t      SRC5;               /* 0x2e8 */
    DMA_SRCm_t      SRC4;               /* 0x2ec */
    DMA_SRCm_t      SRC3;               /* 0x2f0 */
    DMA_SRCm_t      SRC2;               /* 0x2f4 */
    DMA_SRCm_t      SRC1;               /* 0x2f8 */
    DMA_SRCm_t      SRC0;               /* 0x2fc */
} DMA_t;

#endif /* _TC1792_DMA_STRUCTS_H_ */
