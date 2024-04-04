/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1767_CAN_STRUCTS_H_
#define _TC1767_CAN_STRUCTS_H_
/*
   TriCore TC1767
   Some struct definitions for conveniance
*/

#include <tc1767/can.h>
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
    unsigned int    reserved7[0x39];    /* 0x1c */
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
    unsigned int    reserved1[0x2];     /* 0x4 */
    CAN_FDR_t       FDR;                /* 0xc */
    unsigned int    reserved3[0x2c];    /* 0x10 */
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
    CAN_LISTm_t     LIST[0x8];          /* 0x100 */
    unsigned int    reserved21[0x8];    /* 0x120 */
    CAN_MSPNDm_t    MSPND[0x8];         /* 0x140 */
    unsigned int    reserved23[0x8];    /* 0x160 */
    CAN_MSIDm_t     MSID[0x8];          /* 0x180 */
    unsigned int    reserved25[0x8];    /* 0x1a0 */
    CAN_MSIMASK_t   MSIMASK;            /* 0x1c0 */
    CAN_PANCTR_t    PANCTR;             /* 0x1c4 */
    CAN_MCR_t       MCR;                /* 0x1c8 */
    CAN_MITR_t      MITR;               /* 0x1cc */
    unsigned int    reserved30[0xc];    /* 0x1d0 */
    CAN_NODE_t      NODE[0x3];          /* 0x200 */
    unsigned int    reserved32[0x2c0];  /* 0x500 */
    CAN_MO_t        MO[0x40];           /* 0x1000 */
} CAN_t;

#endif /* _TC1767_CAN_STRUCTS_H_ */
