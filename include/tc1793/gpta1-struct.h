/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1793_GPTA1_STRUCTS_H_
#define _TC1793_GPTA1_STRUCTS_H_
/*
   TriCore TC1793
   Some struct definitions for conveniance
*/

#include <tc1793/gpta1.h>
#ifndef GPTA1_BASE
#define GPTA1_BASE 0xf0002000
#endif /* GPTA1_BASE */

#ifndef _GPTA1_FPC_T_
#define _GPTA1_FPC_T_
typedef struct 
{
    GPTAn_FPCCTRm_t CTR;                /* 0x0 */    
    GPTAn_FPCTIMm_t TIM;                /* 0x4 */    
} GPTA1_FPC_t;
#endif /* _GPTA1_FPC_T_ */

#ifndef _GPTA1_DCM_T_
#define _GPTA1_DCM_T_
typedef struct 
{
    GPTAn_DCMCTRm_t CTR;                /* 0x0 */    
    GPTAn_DCMTIMm_t TIM;                /* 0x4 */    
    GPTAn_DCMCAVm_t CAV;                /* 0x8 */    
    GPTAn_DCMCOVm_t COV;                /* 0xc */    
} GPTA1_DCM_t;
#endif /* _GPTA1_DCM_T_ */

#ifndef _GPTA1_GTC_T_
#define _GPTA1_GTC_T_
typedef struct 
{
    GPTAn_GTCCTRm_t CTR;                /* 0x0 */    
    GPTAn_GTCXRm_t  XR;                 /* 0x4 */    
} GPTA1_GTC_t;
#endif /* _GPTA1_GTC_T_ */

#ifndef _GPTA1_LTC_T_
#define _GPTA1_LTC_T_
typedef struct 
{
    GPTAn_LTCCTRm_t CTR;                /* 0x0 */    
    GPTAn_LTCXRm_t  XR;                 /* 0x4 */    
} GPTA1_LTC_t;
#endif /* _GPTA1_LTC_T_ */

#ifndef _GPTA1_LTC63_T_
#define _GPTA1_LTC63_T_
typedef struct 
{
    GPTAn_LTCCTR63_t CTR;               /* 0x0 */    
    GPTAn_LTCXR63_t XR;                 /* 0x4 */    
} GPTA1_LTC63_t;
#endif /* _GPTA1_LTC63_T_ */



typedef struct
{
    unsigned int    reserved0[0x2];     /* 0x0 */
    GPTAn_ID_t      ID;                 /* 0x8 */
    unsigned int    reserved2[0x1];     /* 0xc */
    GPTAn_SRSC0_t   SRSC0;              /* 0x10 */
    GPTAn_SRSS0_t   SRSS0;              /* 0x14 */
    GPTAn_SRSC1_t   SRSC1;              /* 0x18 */
    GPTAn_SRSS1_t   SRSS1;              /* 0x1c */
    GPTAn_SRSCm_t   SRSC2;              /* 0x20 */
    GPTAn_SRSSm_t   SRSS2;              /* 0x24 */
    GPTAn_SRSCm_t   SRSC3;              /* 0x28 */
    GPTAn_SRSSm_t   SRSS3;              /* 0x2c */
    GPTAn_SRNR_t    SRNR;               /* 0x30 */
    unsigned int    reserved12[0x1];    /* 0x34 */
    GPTAn_MRACTL_t  MRACTL;             /* 0x38 */
    GPTAn_MRADIN_t  MRADIN;             /* 0x3c */
    GPTAn_MRADOUT_t MRADOUT;            /* 0x40 */
    GPTAn_FPCSTAT_t FPCSTAT;            /* 0x44 */
    GPTA1_FPC_t     FPC[0x6];           /* 0x48 */
    GPTAn_PDLCTR_t  PDLCTR;             /* 0x78 */
    unsigned int    reserved19[0x1];    /* 0x7c */
    GPTA1_DCM_t     DCM[0x4];           /* 0x80 */
    GPTAn_PLLCTR_t  PLLCTR;             /* 0xc0 */
    GPTAn_PLLMTI_t  PLLMTI;             /* 0xc4 */
    GPTAn_PLLCNT_t  PLLCNT;             /* 0xc8 */
    GPTAn_PLLSTP_t  PLLSTP;             /* 0xcc */
    GPTAn_PLLREV_t  PLLREV;             /* 0xd0 */
    GPTAn_PLLDTR_t  PLLDTR;             /* 0xd4 */
    GPTAn_CKBCTR_t  CKBCTR;             /* 0xd8 */
    unsigned int    reserved28[0x1];    /* 0xdc */
    GPTAn_GTCTRm_t  GTCTR0;             /* 0xe0 */
    GPTAn_GTREVm_t  GTREV0;             /* 0xe4 */
    GPTAn_GTTIMm_t  GTTIM0;             /* 0xe8 */
    unsigned int    reserved32[0x1];    /* 0xec */
    GPTAn_GTCTRm_t  GTCTR1;             /* 0xf0 */
    GPTAn_GTREVm_t  GTREV1;             /* 0xf4 */
    GPTAn_GTTIMm_t  GTTIM1;             /* 0xf8 */
    unsigned int    reserved36[0x1];    /* 0xfc */
    GPTA1_GTC_t     GTC[0x20];          /* 0x100 */
    GPTA1_LTC_t     LTC[0x3f];          /* 0x200 */
    GPTA1_LTC63_t   LTC63;              /* 0x3f8 */
    unsigned int    reserved40[0xda];   /* 0x400 */
    GPTAn_SRCm_t    SRC37;              /* 0x768 */
    GPTAn_SRCm_t    SRC36;              /* 0x76c */
    GPTAn_SRCm_t    SRC35;              /* 0x770 */
    GPTAn_SRCm_t    SRC34;              /* 0x774 */
    GPTAn_SRCm_t    SRC33;              /* 0x778 */
    GPTAn_SRCm_t    SRC32;              /* 0x77c */
    GPTAn_SRCm_t    SRC31;              /* 0x780 */
    GPTAn_SRCm_t    SRC30;              /* 0x784 */
    GPTAn_SRCm_t    SRC29;              /* 0x788 */
    GPTAn_SRCm_t    SRC28;              /* 0x78c */
    GPTAn_SRCm_t    SRC27;              /* 0x790 */
    GPTAn_SRCm_t    SRC26;              /* 0x794 */
    GPTAn_SRCm_t    SRC25;              /* 0x798 */
    GPTAn_SRCm_t    SRC24;              /* 0x79c */
    GPTAn_SRCm_t    SRC23;              /* 0x7a0 */
    GPTAn_SRCm_t    SRC22;              /* 0x7a4 */
    GPTAn_SRCm_t    SRC21;              /* 0x7a8 */
    GPTAn_SRCm_t    SRC20;              /* 0x7ac */
    GPTAn_SRCm_t    SRC19;              /* 0x7b0 */
    GPTAn_SRCm_t    SRC18;              /* 0x7b4 */
    GPTAn_SRCm_t    SRC17;              /* 0x7b8 */
    GPTAn_SRCm_t    SRC16;              /* 0x7bc */
    GPTAn_SRCm_t    SRC15;              /* 0x7c0 */
    GPTAn_SRCm_t    SRC14;              /* 0x7c4 */
    GPTAn_SRCm_t    SRC13;              /* 0x7c8 */
    GPTAn_SRCm_t    SRC12;              /* 0x7cc */
    GPTAn_SRCm_t    SRC11;              /* 0x7d0 */
    GPTAn_SRCm_t    SRC10;              /* 0x7d4 */
    GPTAn_SRCm_t    SRC09;              /* 0x7d8 */
    GPTAn_SRCm_t    SRC08;              /* 0x7dc */
    GPTAn_SRCm_t    SRC07;              /* 0x7e0 */
    GPTAn_SRCm_t    SRC06;              /* 0x7e4 */
    GPTAn_SRCm_t    SRC05;              /* 0x7e8 */
    GPTAn_SRCm_t    SRC04;              /* 0x7ec */
    GPTAn_SRCm_t    SRC03;              /* 0x7f0 */
    GPTAn_SRCm_t    SRC02;              /* 0x7f4 */
    GPTAn_SRCm_t    SRC01;              /* 0x7f8 */
    GPTAn_SRCm_t    SRC00;              /* 0x7fc */
} GPTA1_t;

#endif /* _TC1793_GPTA1_STRUCTS_H_ */
