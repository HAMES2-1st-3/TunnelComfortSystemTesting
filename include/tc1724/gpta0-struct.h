/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1724_GPTA0_STRUCTS_H_
#define _TC1724_GPTA0_STRUCTS_H_
/*
   TriCore TC1724
   Some struct definitions for conveniance
*/

#include <tc1724/gpta.h>
#ifndef GPTA_BASE
#define GPTA_BASE 0xf0001800
#endif /* GPTA_BASE */

#ifndef _GPTA0_FPC_T_
#define _GPTA0_FPC_T_
typedef struct 
{
    GPTA0_FPCCTRm_t CTR;                /* 0x0 */    
    GPTA0_FPCTIMm_t TIM;                /* 0x4 */    
} GPTA0_FPC_t;
#endif /* _GPTA0_FPC_T_ */

#ifndef _GPTA0_DCM_T_
#define _GPTA0_DCM_T_
typedef struct 
{
    GPTA0_DCMCTRm_t CTR;                /* 0x0 */    
    GPTA0_DCMTIMm_t TIM;                /* 0x4 */    
    GPTA0_DCMCAVm_t CAV;                /* 0x8 */    
    GPTA0_DCMCOVm_t COV;                /* 0xc */    
} GPTA0_DCM_t;
#endif /* _GPTA0_DCM_T_ */

#ifndef _GPTA0_GTC_T_
#define _GPTA0_GTC_T_
typedef struct 
{
    GPTA0_GTCCTRm_t CTR;                /* 0x0 */    
    GPTA0_GTCXRm_t  XR;                 /* 0x4 */    
} GPTA0_GTC_t;
#endif /* _GPTA0_GTC_T_ */

#ifndef _GPTA0_LTC_T_
#define _GPTA0_LTC_T_
typedef struct 
{
    GPTA0_LTCCTRm_t CTR;                /* 0x0 */    
    GPTA0_LTCXRm_t  XR;                 /* 0x4 */    
} GPTA0_LTC_t;
#endif /* _GPTA0_LTC_T_ */

#ifndef _GPTA0_LTC63_T_
#define _GPTA0_LTC63_T_
typedef struct 
{
    GPTA0_LTCCTR63_t CTR;               /* 0x0 */    
    GPTA0_LTCXR63_t XR;                 /* 0x4 */    
} GPTA0_LTC63_t;
#endif /* _GPTA0_LTC63_T_ */



typedef struct
{
    GPTA0_CLC_t     CLC;                /* 0x0 */
    GPTA0_DBGCTR_t  DBGCTR;             /* 0x4 */
    GPTA0_ID_t      ID;                 /* 0x8 */
    GPTA0_FDR_t     FDR;                /* 0xc */
    GPTA0_SRSC0_t   SRSC0;              /* 0x10 */
    GPTA0_SRSS0_t   SRSS0;              /* 0x14 */
    GPTA0_SRSC1_t   SRSC1;              /* 0x18 */
    GPTA0_SRSS1_t   SRSS1;              /* 0x1c */
    GPTA0_SRSCm_t   SRSC2;              /* 0x20 */
    GPTA0_SRSSm_t   SRSS2;              /* 0x24 */
    GPTA0_SRSCm_t   SRSC3;              /* 0x28 */
    GPTA0_SRSSm_t   SRSS3;              /* 0x2c */
    GPTA0_SRNR_t    SRNR;               /* 0x30 */
    unsigned int    reserved13[0x1];    /* 0x34 */
    GPTA0_MRACTL_t  MRACTL;             /* 0x38 */
    GPTA0_MRADIN_t  MRADIN;             /* 0x3c */
    GPTA0_MRADOUT_t MRADOUT;            /* 0x40 */
    GPTA0_FPCSTAT_t FPCSTAT;            /* 0x44 */
    GPTA0_FPC_t     FPC[0x6];           /* 0x48 */
    GPTA0_PDLCTR_t  PDLCTR;             /* 0x78 */
    unsigned int    reserved20[0x1];    /* 0x7c */
    GPTA0_DCM_t     DCM[0x4];           /* 0x80 */
    GPTA0_PLLCTR_t  PLLCTR;             /* 0xc0 */
    GPTA0_PLLMTI_t  PLLMTI;             /* 0xc4 */
    GPTA0_PLLCNT_t  PLLCNT;             /* 0xc8 */
    GPTA0_PLLSTP_t  PLLSTP;             /* 0xcc */
    GPTA0_PLLREV_t  PLLREV;             /* 0xd0 */
    GPTA0_PLLDTR_t  PLLDTR;             /* 0xd4 */
    GPTA0_CKBCTR_t  CKBCTR;             /* 0xd8 */
    unsigned int    reserved29[0x1];    /* 0xdc */
    GPTA0_GTCTRm_t  GTCTR0;             /* 0xe0 */
    GPTA0_GTREVm_t  GTREV0;             /* 0xe4 */
    GPTA0_GTTIMm_t  GTTIM0;             /* 0xe8 */
    unsigned int    reserved33[0x1];    /* 0xec */
    GPTA0_GTCTRm_t  GTCTR1;             /* 0xf0 */
    GPTA0_GTREVm_t  GTREV1;             /* 0xf4 */
    GPTA0_GTTIMm_t  GTTIM1;             /* 0xf8 */
    unsigned int    reserved37[0x1];    /* 0xfc */
    GPTA0_GTC_t     GTC[0x20];          /* 0x100 */
    GPTA0_LTC_t     LTC[0x3f];          /* 0x200 */
    GPTA0_LTC63_t   LTC63;              /* 0x3f8 */
    GPTA0_EDCTR_t   EDCTR;              /* 0x400 */
    unsigned int    reserved42[0xd9];   /* 0x404 */
    GPTA0_SRCm_t    SRC37;              /* 0x768 */
    GPTA0_SRCm_t    SRC36;              /* 0x76c */
    GPTA0_SRCm_t    SRC35;              /* 0x770 */
    GPTA0_SRCm_t    SRC34;              /* 0x774 */
    GPTA0_SRCm_t    SRC33;              /* 0x778 */
    GPTA0_SRCm_t    SRC32;              /* 0x77c */
    GPTA0_SRCm_t    SRC31;              /* 0x780 */
    GPTA0_SRCm_t    SRC30;              /* 0x784 */
    GPTA0_SRCm_t    SRC29;              /* 0x788 */
    GPTA0_SRCm_t    SRC28;              /* 0x78c */
    GPTA0_SRCm_t    SRC27;              /* 0x790 */
    GPTA0_SRCm_t    SRC26;              /* 0x794 */
    GPTA0_SRCm_t    SRC25;              /* 0x798 */
    GPTA0_SRCm_t    SRC24;              /* 0x79c */
    GPTA0_SRCm_t    SRC23;              /* 0x7a0 */
    GPTA0_SRCm_t    SRC22;              /* 0x7a4 */
    GPTA0_SRCm_t    SRC21;              /* 0x7a8 */
    GPTA0_SRCm_t    SRC20;              /* 0x7ac */
    GPTA0_SRCm_t    SRC19;              /* 0x7b0 */
    GPTA0_SRCm_t    SRC18;              /* 0x7b4 */
    GPTA0_SRCm_t    SRC17;              /* 0x7b8 */
    GPTA0_SRCm_t    SRC16;              /* 0x7bc */
    GPTA0_SRCm_t    SRC15;              /* 0x7c0 */
    GPTA0_SRCm_t    SRC14;              /* 0x7c4 */
    GPTA0_SRCm_t    SRC13;              /* 0x7c8 */
    GPTA0_SRCm_t    SRC12;              /* 0x7cc */
    GPTA0_SRCm_t    SRC11;              /* 0x7d0 */
    GPTA0_SRCm_t    SRC10;              /* 0x7d4 */
    GPTA0_SRCm_t    SRC09;              /* 0x7d8 */
    GPTA0_SRCm_t    SRC08;              /* 0x7dc */
    GPTA0_SRCm_t    SRC07;              /* 0x7e0 */
    GPTA0_SRCm_t    SRC06;              /* 0x7e4 */
    GPTA0_SRCm_t    SRC05;              /* 0x7e8 */
    GPTA0_SRCm_t    SRC04;              /* 0x7ec */
    GPTA0_SRCm_t    SRC03;              /* 0x7f0 */
    GPTA0_SRCm_t    SRC02;              /* 0x7f4 */
    GPTA0_SRCm_t    SRC01;              /* 0x7f8 */
    GPTA0_SRCm_t    SRC00;              /* 0x7fc */
} GPTA0_t;

#endif /* _TC1724_GPTA0_STRUCTS_H_ */
