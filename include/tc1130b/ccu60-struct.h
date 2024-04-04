/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1130B_CCU60_STRUCTS_H_
#define _TC1130B_CCU60_STRUCTS_H_
/*
   TriCore TC1130B
   Some struct definitions for conveniance
*/

#include <tc1130b/ccu60.h>
#ifndef CCU60_BASE
#define CCU60_BASE 0xf0002000
#endif /* CCU60_BASE */


typedef struct
{
    CCU60_CLC_t     CLC;                /* 0x0 */
    unsigned int    reserved1[0x1];     /* 0x4 */
    CCUn_ID_t       ID;                 /* 0x8 */
    CCU60_FDR_t     FDR;                /* 0xc */
    CCUn_PISEL0_t   PISEL0;             /* 0x10 */
    CCUn_PISEL2_t   PISEL2;             /* 0x14 */
    unsigned int    reserved6[0x2];     /* 0x18 */
    CCUn_T12_t      T12;                /* 0x20 */
    CCUn_T12PR_t    T12PR;              /* 0x24 */
    CCUn_T12DTC_t   T12DTC;             /* 0x28 */
    unsigned int    reserved10[0x1];    /* 0x2c */
    CCUn_CC60R_t    CC60R;              /* 0x30 */
    CCUn_CC61R_t    CC61R;              /* 0x34 */
    CCUn_CC62R_t    CC62R;              /* 0x38 */
    CCUn_TCTR4_t    TCTR4;              /* 0x3c */
    CCUn_CC60SR_t   CC60SR;             /* 0x40 */
    CCUn_CC61SR_t   CC61SR;             /* 0x44 */
    CCUn_CC62SR_t   CC62SR;             /* 0x48 */
    unsigned int    reserved18[0x1];    /* 0x4c */
    CCUn_T13_t      T13;                /* 0x50 */
    CCUn_T13PR_t    T13PR;              /* 0x54 */
    CCUn_CC63R_t    CC63R;              /* 0x58 */
    CCUn_CC63SR_t   CC63SR;             /* 0x5c */
    CCUn_CMPSTAT_t  CMPSTAT;            /* 0x60 */
    CCUn_CMPMODIF_t CMPMODIF;           /* 0x64 */
    CCUn_TCTR0_t    TCTR0;              /* 0x68 */
    CCUn_TCTR2_t    TCTR2;              /* 0x6c */
    CCUn_MODCTR_t   MODCTR;             /* 0x70 */
    CCUn_TRPCTR_t   TRPCTR;             /* 0x74 */
    CCUn_PSLR_t     PSLR;               /* 0x78 */
    CCUn_T12MSEL_t  T12MSEL;            /* 0x7c */
    CCUn_MCMOUTS_t  MCMOUTS;            /* 0x80 */
    CCUn_MCMOUT_t   MCMOUT;             /* 0x84 */
    CCUn_MCMCTR_t   MCMCTR;             /* 0x88 */
    unsigned int    reserved34[0x1];    /* 0x8c */
    CCUn_IS_t       IS;                 /* 0x90 */
    CCUn_ISS_t      ISS;                /* 0x94 */
    CCUn_ISR_t      ISR;                /* 0x98 */
    CCUn_IEN_t      IEN;                /* 0x9c */
    CCUn_INP_t      INP;                /* 0xa0 */
    unsigned int    reserved40[0x13];   /* 0xa4 */
    CCUn_SRCm_t     SRC3;               /* 0xf0 */
    CCUn_SRCm_t     SRC2;               /* 0xf4 */
    CCUn_SRCm_t     SRC1;               /* 0xf8 */
    CCUn_SRCm_t     SRC0;               /* 0xfc */
} CCU60_t;

#endif /* _TC1130B_CCU60_STRUCTS_H_ */
