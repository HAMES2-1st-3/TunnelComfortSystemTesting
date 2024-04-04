/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1728_CAN_STRUCTS_H_
#define _TC1728_CAN_STRUCTS_H_
/*
   TriCore TC1728
   Some struct definitions for conveniance
*/

#include <tc1728/can.h>
#ifndef CAN_BASE
#define CAN_BASE 0xf0004000
#endif /* CAN_BASE */

#ifndef _CAN_NODE_T_
#define _CAN_NODE_T_
typedef struct 
{
    CAN_NCRm_t      CR;                 /* 0x0 */    
    CAN_NSRm_t      SR;                 /* 0x4 */    
    CAN_NIPRm_t     IPR;                /* 0x8 */    
    CAN_NPCRm_t     PCR;                /* 0xc */    
    CAN_NBTRm_t     BTR;                /* 0x10 */    
    CAN_NECNTm_t    ECNT;               /* 0x14 */    
    CAN_NFCRm_t     FCR;                /* 0x18 */    
} CAN_NODE_t;
#endif /* _CAN_NODE_T_ */

#ifndef _CAN_MO_T_
#define _CAN_MO_T_
typedef struct 
{
    CAN_MOFCRm_t    FCR;                /* 0x0 */    
    CAN_MOFGPRm_t   FGPR;               /* 0x4 */    
    CAN_MOIPRm_t    IPR;                /* 0x8 */    
    CAN_MOAMRm_t    AMR;                /* 0xc */    
    CAN_MODATALm_t  DATAL;              /* 0x10 */    
    CAN_MODATAHm_t  DATAH;              /* 0x14 */    
    CAN_MOARm_t     AR;                 /* 0x18 */    
    CAN_MOCTRm_t    CTR;                /* 0x1c */    
} CAN_MO_t;
#endif /* _CAN_MO_T_ */



typedef struct
{
    CAN_CLC_t       CLC;                /* 0x0 */
    unsigned int    reserved1[0x1];     /* 0x4 */
    CAN_ID_t        ID;                 /* 0x8 */
    CAN_FDR_t       FDR;                /* 0xc */
    unsigned int    reserved4[0x2c];    /* 0x10 */
    CAN_SRCm_t      SRC15;              /* 0xc0 */
    CAN_SRCm_t      SRC14;              /* 0xc4 */
    CAN_SRCm_t      SRC13;              /* 0xc8 */
    CAN_SRCm_t      SRC12;              /* 0xcc */
    CAN_SRCm_t      SRC11;              /* 0xd0 */
    CAN_SRCm_t      SRC10;              /* 0xd4 */
    CAN_SRCm_t      SRC9;               /* 0xd8 */
    CAN_SRCm_t      SRC8;               /* 0xdc */
    CAN_SRCm_t      SRC7;               /* 0xe0 */
    CAN_SRCm_t      SRC6;               /* 0xe4 */
    CAN_SRCm_t      SRC5;               /* 0xe8 */
    CAN_SRCm_t      SRC4;               /* 0xec */
    CAN_SRCm_t      SRC3;               /* 0xf0 */
    CAN_SRCm_t      SRC2;               /* 0xf4 */
    CAN_SRCm_t      SRC1;               /* 0xf8 */
    CAN_SRCm_t      SRC0;               /* 0xfc */
    CAN_LISTm_t     LIST0;              /* 0x100 */
    CAN_LISTm_t     LIST1;              /* 0x104 */
    CAN_LISTm_t     LIST2;              /* 0x108 */
    CAN_LISTm_t     LIST3;              /* 0x10c */
    CAN_LISTm_t     LIST4;              /* 0x110 */
    CAN_LISTm_t     LIST5;              /* 0x114 */
    CAN_LISTm_t     LIST6;              /* 0x118 */
    CAN_LISTm_t     LIST7;              /* 0x11c */
    unsigned int    reserved29[0x8];    /* 0x120 */
    CAN_MSPNDm_t    MSPND0;             /* 0x140 */
    CAN_MSPNDm_t    MSPND1;             /* 0x144 */
    CAN_MSPNDm_t    MSPND2;             /* 0x148 */
    CAN_MSPNDm_t    MSPND3;             /* 0x14c */
    CAN_MSPNDm_t    MSPND4;             /* 0x150 */
    CAN_MSPNDm_t    MSPND5;             /* 0x154 */
    CAN_MSPNDm_t    MSPND6;             /* 0x158 */
    CAN_MSPNDm_t    MSPND7;             /* 0x15c */
    unsigned int    reserved38[0x8];    /* 0x160 */
    CAN_MSIDm_t     MSID0;              /* 0x180 */
    CAN_MSIDm_t     MSID1;              /* 0x184 */
    CAN_MSIDm_t     MSID2;              /* 0x188 */
    CAN_MSIDm_t     MSID3;              /* 0x18c */
    CAN_MSIDm_t     MSID4;              /* 0x190 */
    CAN_MSIDm_t     MSID5;              /* 0x194 */
    CAN_MSIDm_t     MSID6;              /* 0x198 */
    CAN_MSIDm_t     MSID7;              /* 0x19c */
    unsigned int    reserved47[0x8];    /* 0x1a0 */
    CAN_MSIMASK_t   MSIMASK;            /* 0x1c0 */
    CAN_PANCTR_t    PANCTR;             /* 0x1c4 */
    CAN_MCR_t       MCR;                /* 0x1c8 */
    CAN_MITR_t      MITR;               /* 0x1cc */
    unsigned int    reserved52[0xc];    /* 0x1d0 */
    CAN_NODE_t      NODE0;              /* 0x200 */
    unsigned int    reserved54[0x19];   /* 0x21c */
    CAN_LTR_t       LTR;                /* 0x280 */
    CAN_SYNMR_t     SYNMR;              /* 0x284 */
    CAN_REFMR_t     REFMR;              /* 0x288 */
    CAN_LREFMR_t    LREFMR;             /* 0x28c */
    CAN_TURR_t      TURR;               /* 0x290 */
    CAN_CYCTMR_t    CYCTMR;             /* 0x294 */
    CAN_LOR_t       LOR;                /* 0x298 */
    CAN_GMR_t       GMR;                /* 0x29c */
    CAN_LGMR_t      LGMR;               /* 0x2a0 */
    CAN_AWDR_t      AWDR;               /* 0x2a4 */
    unsigned int    reserved65[0x6];    /* 0x2a8 */
    CAN_TTCR_t      TTCR;               /* 0x2c0 */
    CAN_TTCFGR_t    TTCFGR;             /* 0x2c4 */
    CAN_TTSR_t      TTSR;               /* 0x2c8 */
    CAN_TTFMR_t     TTFMR;              /* 0x2cc */
    CAN_TTIRR_t     TTIRR;              /* 0x2d0 */
    CAN_TTIER_t     TTIER;              /* 0x2d4 */
    CAN_TTINPR_t    TTINPR;             /* 0x2d8 */
    unsigned int    reserved73[0x5];    /* 0x2dc */
    CAN_STSRL_t     STSRL;              /* 0x2f0 */
    CAN_STSRH_t     STSRH;              /* 0x2f4 */
    CAN_SISR_t      SISR;               /* 0x2f8 */
    unsigned int    reserved77[0x1];    /* 0x2fc */
    CAN_NODE_t      NODE1;              /* 0x300 */
    unsigned int    reserved79[0x39];   /* 0x31c */
    CAN_NODE_t      NODE2;              /* 0x400 */
    unsigned int    reserved81[0x2f9];  /* 0x41c */
    CAN_MO_t        MO[0x40];           /* 0x1000 */
    unsigned int    reserved83[0x9ff];  /* 0x1800 */
    CAN_STPTR0_t    STPTR0;             /* 0x3ffc */
} CAN_t;

#endif /* _TC1728_CAN_STRUCTS_H_ */
