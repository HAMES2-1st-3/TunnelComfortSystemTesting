/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1724_ADC1_STRUCTS_H_
#define _TC1724_ADC1_STRUCTS_H_
/*
   TriCore TC1724
   Some struct definitions for conveniance
*/

#include <tc1724/adc1.h>
#ifndef ADC1_BASE
#define ADC1_BASE 0xf0101400
#endif /* ADC1_BASE */


typedef struct
{
    unsigned int    reserved0[0x2];     /* 0x0 */
    ADCn_ID_t       ID;                 /* 0x8 */
    unsigned int    reserved2[0x1];     /* 0xc */
    ADCn_RSIRm_t    RSIR0;              /* 0x10 */
    ADCn_RSIRm_t    RSIR1;              /* 0x14 */
    ADCn_RSIRm_t    RSIR2;              /* 0x18 */
    ADCn_RSIRm_t    RSIR3;              /* 0x1c */
    ADCn_RSIRm_t    RSIR4;              /* 0x20 */
    unsigned int    reserved8[0x3];     /* 0x24 */
    ADCn_GLOBCTR_t  GLOBCTR;            /* 0x30 */
    ADCn_GLOBCFG_t  GLOBCFG;            /* 0x34 */
    ADCn_GLOBSTR_t  GLOBSTR;            /* 0x38 */
    ADCn_ASENR_t    ASENR;              /* 0x3c */
    ADCn_RSPR0_t    RSPR0;              /* 0x40 */
    ADCn_RSPR4_t    RSPR4;              /* 0x44 */
    ADCn_SYNCTR_t   SYNCTR;             /* 0x48 */
    unsigned int    reserved16[0x1];    /* 0x4c */
    ADCn_INPCRm_t   INPCR0;             /* 0x50 */
    ADCn_INPCRm_t   INPCR1;             /* 0x54 */
    ADCn_INPCRm_t   INPCR2;             /* 0x58 */
    ADCn_INPCRm_t   INPCR3;             /* 0x5c */
    ADCn_CHFR_t     CHFR;               /* 0x60 */
    ADCn_CHFCR_t    CHFCR;              /* 0x64 */
    ADCn_CHENPRm_t  CHENPR0;            /* 0x68 */
    ADCn_CHENPRm_t  CHENPR8;            /* 0x6c */
    ADCn_EVFR_t     EVFR;               /* 0x70 */
    ADCn_EVFCR_t    EVFCR;              /* 0x74 */
    ADCn_EVNPR_t    EVNPR;              /* 0x78 */
    unsigned int    reserved28[0x1];    /* 0x7c */
    ADCn_QMRm_t     QMR0;               /* 0x80 */
    ADCn_QSRm_t     QSR0;               /* 0x84 */
    ADC1_Q0R0_t     Q0R0;               /* 0x88 */
    ADCn_QBURm_t    QBUR0;              /* 0x8c */
    ADCn_CRCRm_t    CRCR1;              /* 0x90 */
    ADCn_CRPRm_t    CRPR1;              /* 0x94 */
    ADCn_CRMRm_t    CRMR1;              /* 0x98 */
    unsigned int    reserved36[0x1];    /* 0x9c */
    ADCn_QMRm_t     QMR2;               /* 0xa0 */
    ADCn_QSRm_t     QSR2;               /* 0xa4 */
    ADC1_Q0R2_t     Q0R2;               /* 0xa8 */
    ADCn_QBURm_t    QBUR2;              /* 0xac */
    ADCn_CRCRm_t    CRCR3;              /* 0xb0 */
    ADCn_CRPRm_t    CRPR3;              /* 0xb4 */
    ADCn_CRMRm_t    CRMR3;              /* 0xb8 */
    unsigned int    reserved44[0x1];    /* 0xbc */
    ADCn_QMRm_t     QMR4;               /* 0xc0 */
    ADCn_QSRm_t     QSR4;               /* 0xc4 */
    ADC1_Q0R4_t     Q0R4;               /* 0xc8 */
    ADCn_QBURm_t    QBUR4;              /* 0xcc */
    unsigned int    reserved49[0x8];    /* 0xd0 */
    ADCn_LCBRm_t    LCBR0;              /* 0xf0 */
    ADCn_LCBRm_t    LCBR1;              /* 0xf4 */
    ADCn_LCBRm_t    LCBR2;              /* 0xf8 */
    ADCn_LCBRm_t    LCBR3;              /* 0xfc */
    ADCn_CHCTRm_t   CHCTR[0x10];        /* 0x100 */
    ADCn_RCRm_t     RCR[0x10];          /* 0x140 */
    ADCn_RESR0_t    RESR0;              /* 0x180 */
    ADCn_RESRm_t    RESR1;              /* 0x184 */
    ADCn_RESRm_t    RESR2;              /* 0x188 */
    ADCn_RESRm_t    RESR3;              /* 0x18c */
    ADCn_RESRm_t    RESR4;              /* 0x190 */
    ADCn_RESRm_t    RESR5;              /* 0x194 */
    ADCn_RESRm_t    RESR6;              /* 0x198 */
    ADCn_RESRm_t    RESR7;              /* 0x19c */
    ADCn_RESRm_t    RESR8;              /* 0x1a0 */
    ADCn_RESRm_t    RESR9;              /* 0x1a4 */
    ADCn_RESRm_t    RESR10;             /* 0x1a8 */
    ADCn_RESRm_t    RESR11;             /* 0x1ac */
    ADCn_RESRm_t    RESR12;             /* 0x1b0 */
    ADCn_RESRm_t    RESR13;             /* 0x1b4 */
    ADCn_RESRm_t    RESR14;             /* 0x1b8 */
    ADCn_RESRm_t    RESR15;             /* 0x1bc */
    ADCn_RESRD0_t   RESRD0;             /* 0x1c0 */
    ADCn_RESRDm_t   RESRD1;             /* 0x1c4 */
    ADCn_RESRDm_t   RESRD2;             /* 0x1c8 */
    ADCn_RESRDm_t   RESRD3;             /* 0x1cc */
    ADCn_RESRDm_t   RESRD4;             /* 0x1d0 */
    ADCn_RESRDm_t   RESRD5;             /* 0x1d4 */
    ADCn_RESRDm_t   RESRD6;             /* 0x1d8 */
    ADCn_RESRDm_t   RESRD7;             /* 0x1dc */
    ADCn_RESRDm_t   RESRD8;             /* 0x1e0 */
    ADCn_RESRDm_t   RESRD9;             /* 0x1e4 */
    ADCn_RESRDm_t   RESRD10;            /* 0x1e8 */
    ADCn_RESRDm_t   RESRD11;            /* 0x1ec */
    ADCn_RESRDm_t   RESRD12;            /* 0x1f0 */
    ADCn_RESRDm_t   RESRD13;            /* 0x1f4 */
    ADCn_RESRDm_t   RESRD14;            /* 0x1f8 */
    ADCn_RESRDm_t   RESRD15;            /* 0x1fc */
    ADCn_VFR_t      VFR;                /* 0x200 */
    ADCn_INTR_t     INTR;               /* 0x204 */
    ADCn_RNPRm_t    RNPR0;              /* 0x208 */
    ADCn_RNPRm_t    RNPR8;              /* 0x20c */
    ADCn_ALR0_t     ALR0;               /* 0x210 */
    unsigned int    reserved93[0x1];    /* 0x214 */
    ADCn_APR_t      APR;                /* 0x218 */
    unsigned int    reserved95[0x1];    /* 0x21c */
    ADCn_EMCTR_t    EMCTR;              /* 0x220 */
    ADCn_BWDENR_t   BWDENR;             /* 0x224 */
    ADCn_BWDCFGR_t  BWDCFGR;            /* 0x228 */
    unsigned int    reserved99[0xf];    /* 0x22c */
    ADCn_CHENPRm_t  CHENPR16;           /* 0x268 */
    unsigned int    reserved101[0x25];  /* 0x26c */
    ADCn_CHCTRm_t   CHCTR16;            /* 0x300 */
    ADCn_CHCTRm_t   CHCTR17;            /* 0x304 */
    ADCn_CHCTRm_t   CHCTR18;            /* 0x308 */
    ADCn_CHCTRm_t   CHCTR19;            /* 0x30c */
    ADCn_CHCTRm_t   CHCTR20;            /* 0x310 */
    ADCn_CHCTRm_t   CHCTR21;            /* 0x314 */
    ADCn_CHCTRm_t   CHCTR22;            /* 0x318 */
    ADCn_CHCTRm_t   CHCTR23;            /* 0x31c */
} ADC1_t;

#endif /* _TC1724_ADC1_STRUCTS_H_ */
