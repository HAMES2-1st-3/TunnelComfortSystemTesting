/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1728_CCU60_STRUCTS_H_
#define _TC1728_CCU60_STRUCTS_H_
/*
   TriCore TC1728
   Some struct definitions for conveniance
*/

#include <tc1728/ccu60.h>
#ifndef CCU60_BASE
#define CCU60_BASE 0xf0003000
#endif /* CCU60_BASE */


typedef struct
{
    unsigned int    reserved0[0x1];     /* 0x0 */
    CCUn_MCFG_t     MCFG;               /* 0x4 */
    CCUn_ID_t       ID;                 /* 0x8 */
    CCU60_MOSEL_t   MOSEL;              /* 0xc */
    CCUn_PISEL0_t   PISEL0;             /* 0x10 */
    CCUn_PISEL2_t   PISEL2;             /* 0x14 */
    CCUn_KSCFG_t    KSCFG;              /* 0x18 */
    CCUn_KSCSR_t    KSCSR;              /* 0x1c */
    CCUn_T12_t      T12;                /* 0x20 */
    CCUn_T12PR_t    T12PR;              /* 0x24 */
    CCUn_T12DTC_t   T12DTC;             /* 0x28 */
    unsigned int    reserved11[0x1];    /* 0x2c */
    CCUn_CCmR_t     CC60R;              /* 0x30 */
    CCUn_CCmR_t     CC61R;              /* 0x34 */
    CCUn_CCmR_t     CC62R;              /* 0x38 */
    unsigned int    reserved15[0x1];    /* 0x3c */
    CCUn_CCmSR_t    CC60SR;             /* 0x40 */
    CCUn_CCmSR_t    CC61SR;             /* 0x44 */
    CCUn_CCmSR_t    CC62SR;             /* 0x48 */
    unsigned int    reserved19[0x1];    /* 0x4c */
    CCUn_T13_t      T13;                /* 0x50 */
    CCUn_T13PR_t    T13PR;              /* 0x54 */
    CCUn_CCmR_t     CC63R;              /* 0x58 */
    CCUn_CCmSR_t    CC63SR;             /* 0x5c */
    CCUn_CMPSTAT_t  CMPSTAT;            /* 0x60 */
    CCUn_CMPMODIF_t CMPMODIF;           /* 0x64 */
    CCUn_T12MSEL_t  T12MSEL;            /* 0x68 */
    unsigned int    reserved27[0x1];    /* 0x6c */
    CCUn_TCTR0_t    TCTR0;              /* 0x70 */
    CCUn_TCTR2_t    TCTR2;              /* 0x74 */
    CCUn_TCTR4_t    TCTR4;              /* 0x78 */
    unsigned int    reserved31[0x1];    /* 0x7c */
    CCUn_MODCTR_t   MODCTR;             /* 0x80 */
    CCUn_TRPCTR_t   TRPCTR;             /* 0x84 */
    CCUn_PSLR_t     PSLR;               /* 0x88 */
    CCUn_MCMOUTS_t  MCMOUTS;            /* 0x8c */
    CCUn_MCMOUT_t   MCMOUT;             /* 0x90 */
    CCUn_MCMCTR_t   MCMCTR;             /* 0x94 */
    CCUn_IMON_t     IMON;               /* 0x98 */
    CCUn_LI_t       LI;                 /* 0x9c */
    CCUn_IS_t       IS;                 /* 0xa0 */
    CCUn_ISS_t      ISS;                /* 0xa4 */
    CCUn_ISR_t      ISR;                /* 0xa8 */
    CCUn_INP_t      INP;                /* 0xac */
    CCUn_IEN_t      IEN;                /* 0xb0 */
    unsigned int    reserved45[0xf];    /* 0xb4 */
    CCUn_SRCm_t     SRC3;               /* 0xf0 */
    CCUn_SRCm_t     SRC2;               /* 0xf4 */
    CCUn_SRCm_t     SRC1;               /* 0xf8 */
    CCUn_SRCm_t     SRC0;               /* 0xfc */
} CCU60_t;

#endif /* _TC1728_CCU60_STRUCTS_H_ */
