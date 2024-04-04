/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1796B_ADC0_STRUCTS_H_
#define _TC1796B_ADC0_STRUCTS_H_
/*
   TriCore TC1796B
   Some struct definitions for conveniance
*/

#include <tc1796b/adc0.h>
#ifndef ADC0_BASE
#define ADC0_BASE 0xf0100400
#endif /* ADC0_BASE */


typedef struct
{
    ADC0_CLC_t      CLC;                /* 0x0 */
    unsigned int    reserved1[0x1];     /* 0x4 */
    ADC0_ID_t       ID;                 /* 0x8 */
    ADC0_FDR_t      FDR;                /* 0xc */
    ADCn_CHCONm_t   CHCON[0x10];        /* 0x10 */
    unsigned int    reserved5[0xd];     /* 0x50 */
    ADCn_AP_t       AP;                 /* 0x84 */
    ADCn_SAL_t      SAL;                /* 0x88 */
    ADCn_TTC_t      TTC;                /* 0x8c */
    ADCn_EXTC_t     EXTC;               /* 0x90 */
    unsigned int    reserved10[0x1];    /* 0x94 */
    ADCn_SCON_t     SCON;               /* 0x98 */
    unsigned int    reserved12[0x19];   /* 0x9c */
    ADCn_LCCONm_t   LCCON0;             /* 0x100 */
    ADCn_LCCONm_t   LCCON1;             /* 0x104 */
    ADCn_LCCONm_t   LCCON2;             /* 0x108 */
    ADCn_LCCONm_t   LCCON3;             /* 0x10c */
    unsigned int    reserved17[0x1];    /* 0x110 */
    ADCn_TCON_t     TCON;               /* 0x114 */
    ADCn_CHIN_t     CHIN;               /* 0x118 */
    ADCn_QR_t       QR;                 /* 0x11c */
    ADCn_CON_t      CON;                /* 0x120 */
    ADCn_SCN_t      SCN;                /* 0x124 */
    ADCn_REQ0_t     REQ0;               /* 0x128 */
    unsigned int    reserved24[0x1];    /* 0x12c */
    ADCn_CHSTATm_t  CHSTAT[0x10];       /* 0x130 */
    ADCn_QUEUE0_t   QUEUE0;             /* 0x170 */
    unsigned int    reserved27[0x3];    /* 0x174 */
    ADCn_SW0CRP_t   SW0CRP;             /* 0x180 */
    unsigned int    reserved29[0x1];    /* 0x184 */
    ADCn_ASCRP_t    ASCRP;              /* 0x188 */
    unsigned int    reserved31[0x1];    /* 0x18c */
    ADCn_SYSTAT_t   SYSTAT;             /* 0x190 */
    unsigned int    reserved33[0x7];    /* 0x194 */
    ADCn_TSTAT_t    TSTAT;              /* 0x1b0 */
    ADCn_STAT_t     STAT;               /* 0x1b4 */
    ADCn_TCRP_t     TCRP;               /* 0x1b8 */
    ADCn_EXCRP_t    EXCRP;              /* 0x1bc */
    unsigned int    reserved38[0x4];    /* 0x1c0 */
    ADCn_MSS0_t     MSS0;               /* 0x1d0 */
    ADCn_MSS1_t     MSS1;               /* 0x1d4 */
    unsigned int    reserved41[0x1];    /* 0x1d8 */
    ADCn_SRNP_t     SRNP;               /* 0x1dc */
    unsigned int    reserved43[0x4];    /* 0x1e0 */
    ADCn_SRCm_t     SRC3;               /* 0x1f0 */
    ADCn_SRCm_t     SRC2;               /* 0x1f4 */
    ADCn_SRCm_t     SRC1;               /* 0x1f8 */
    ADCn_SRCm_t     SRC0;               /* 0x1fc */
} ADC0_t;

#endif /* _TC1796B_ADC0_STRUCTS_H_ */
