/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1791_SENT_STRUCTS_H_
#define _TC1791_SENT_STRUCTS_H_
/*
   TriCore TC1791
   Some struct definitions for conveniance
*/

#include <tc1791/sent.h>
#ifndef SENT_BASE
#define SENT_BASE 0xf0321000
#endif /* SENT_BASE */

#ifndef _SENT_CH_T_
#define _SENT_CH_T_
typedef struct 
{
    SENT_CPDRm_t    CPDR;               /* 0x0 */    
    SENT_CFDRm_t    CFDR;               /* 0x4 */    
    SENT_RCRm_t     RCR;                /* 0x8 */    
    SENT_RSRm_t     RSR;                /* 0xc */    
    SENT_SDSm_t     SDS;                /* 0x10 */    
    SENT_IOCRm_t    IOCR;               /* 0x14 */    
    SENT_SCRm_t     SCR;                /* 0x18 */    
    SENT_VIEWm_t    VIEW;               /* 0x1c */    
    SENT_INTSTATm_t INTSTAT;            /* 0x20 */    
    SENT_INTSETm_t  INTSET;             /* 0x24 */    
    SENT_INTCLRm_t  INTCLR;             /* 0x28 */    
    SENT_INTENm_t   INTEN;              /* 0x2c */    
    SENT_INPm_t     INP;                /* 0x30 */    
    unsigned int    reserved13[0x3];    /* 0x34 */
} SENT_CH_t;
#endif /* _SENT_CH_T_ */



typedef struct
{
    SENT_CLC_t      CLC;                /* 0x0 */
    unsigned int    reserved1[0x1];     /* 0x4 */
    SENT_ID_t       ID;                 /* 0x8 */
    SENT_FDR_t      FDR;                /* 0xc */
    unsigned int    reserved4[0x1];     /* 0x10 */
    SENT_INTOV_t    INTOV;              /* 0x14 */
    unsigned int    reserved6[0x1a];    /* 0x18 */
    SENT_RDRm_t     RDR0;               /* 0x80 */
    SENT_RDRm_t     RDR1;               /* 0x84 */
    SENT_RDRm_t     RDR2;               /* 0x88 */
    SENT_RDRm_t     RDR3;               /* 0x8c */
    SENT_RDRm_t     RDR4;               /* 0x90 */
    SENT_RDRm_t     RDR5;               /* 0x94 */
    SENT_RDRm_t     RDR6;               /* 0x98 */
    SENT_RDRm_t     RDR7;               /* 0x9c */
    unsigned int    reserved15[0x18];   /* 0xa0 */
    SENT_CH_t       CH[0x8];            /* 0x100 */
    unsigned int    reserved17[0x1bc];  /* 0x300 */
    SENT_SRCm_t     SRC3;               /* 0x9f0 */
    SENT_SRCm_t     SRC2;               /* 0x9f4 */
    SENT_SRCm_t     SRC1;               /* 0x9f8 */
    SENT_SRCm_t     SRC0;               /* 0x9fc */
} SENT_t;

#endif /* _TC1791_SENT_STRUCTS_H_ */
