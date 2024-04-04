/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1792_CAN_STRUCTS_H_
#define _TC1792_CAN_STRUCTS_H_
/*
   TriCore TC1792
   Some struct definitions for conveniance
*/

#include <tc1792/can.h>
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
    CAN_MOSTATm_t   STAT;               /* 0x1c */    
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
    CAN_MSPNDm_t    MSPND0;             /* 0x120 */
    CAN_MSPNDm_t    MSPND1;             /* 0x124 */
    CAN_MSPNDm_t    MSPND2;             /* 0x128 */
    CAN_MSPNDm_t    MSPND3;             /* 0x12c */
    CAN_MSPNDm_t    MSPND4;             /* 0x130 */
    CAN_MSPNDm_t    MSPND5;             /* 0x134 */
    CAN_MSPNDm_t    MSPND6;             /* 0x138 */
    CAN_MSPNDm_t    MSPND7;             /* 0x13c */
    CAN_MSIDm_t     MSID0;              /* 0x140 */
    CAN_MSIDm_t     MSID1;              /* 0x144 */
    CAN_MSIDm_t     MSID2;              /* 0x148 */
    CAN_MSIDm_t     MSID3;              /* 0x14c */
    CAN_MSIDm_t     MSID4;              /* 0x150 */
    CAN_MSIDm_t     MSID5;              /* 0x154 */
    CAN_MSIDm_t     MSID6;              /* 0x158 */
    CAN_MSIDm_t     MSID7;              /* 0x15c */
    unsigned int    reserved45[0x18];   /* 0x160 */
    CAN_MSIMASK_t   MSIMASK;            /* 0x1c0 */
    CAN_PANCTR_t    PANCTR;             /* 0x1c4 */
    CAN_MCR_t       MCR;                /* 0x1c8 */
    CAN_MITR_t      MITR;               /* 0x1cc */
    unsigned int    reserved50[0xc];    /* 0x1d0 */
    CAN_NODE_t      NODE0;              /* 0x200 */
    unsigned int    reserved52[0x39];   /* 0x21c */
    CAN_NODE_t      NODE1;              /* 0x300 */
    unsigned int    reserved54[0x79];   /* 0x31c */
    CAN_NODE_t      NODE3;              /* 0x500 */
    unsigned int    reserved56[0x39];   /* 0x51c */
    CAN_MO_t        MO[0x60];           /* 0x600 */
} CAN_t;

#endif /* _TC1792_CAN_STRUCTS_H_ */
