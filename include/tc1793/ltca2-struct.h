/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1793_LTCA2_STRUCTS_H_
#define _TC1793_LTCA2_STRUCTS_H_
/*
   TriCore TC1793
   Some struct definitions for conveniance
*/

#include <tc1793/ltca2.h>
#ifndef LTCA2_BASE
#define LTCA2_BASE 0xf0002800
#endif /* LTCA2_BASE */

#ifndef _LTCA2_LTC_T_
#define _LTCA2_LTC_T_
typedef struct 
{
    LTCA2_LTCCTRm_t CTR;                /* 0x0 */    
    LTCA2_LTCXRm_t  XR;                 /* 0x4 */    
} LTCA2_LTC_t;
#endif /* _LTCA2_LTC_T_ */

#ifndef _LTCA2_LTC63_T_
#define _LTCA2_LTC63_T_
typedef struct 
{
    LTCA2_LTCCTR63_t CTR;               /* 0x0 */    
    LTCA2_LTCXR63_t XR;                 /* 0x4 */    
} LTCA2_LTC63_t;
#endif /* _LTCA2_LTC63_T_ */



typedef struct
{
    unsigned int    reserved0[0x2];     /* 0x0 */
    LTCA2_ID_t      ID;                 /* 0x8 */
    unsigned int    reserved2[0x5];     /* 0xc */
    LTCA2_SRSCm_t   SRSC2;              /* 0x20 */
    LTCA2_SRSSm_t   SRSS2;              /* 0x24 */
    LTCA2_SRSCm_t   SRSC3;              /* 0x28 */
    LTCA2_SRSSm_t   SRSS3;              /* 0x2c */
    unsigned int    reserved7[0x2];     /* 0x30 */
    LTCA2_MRACTL_t  MRACTL;             /* 0x38 */
    LTCA2_MRADIN_t  MRADIN;             /* 0x3c */
    LTCA2_MRADOUT_t MRADOUT;            /* 0x40 */
    unsigned int    reserved11[0x6f];   /* 0x44 */
    LTCA2_LTC_t     LTC[0x3f];          /* 0x200 */
    LTCA2_LTC63_t   LTC63;              /* 0x3f8 */
    unsigned int    reserved14[0xf0];   /* 0x400 */
    LTCA2_SRCm_t    SRC15;              /* 0x7c0 */
    LTCA2_SRCm_t    SRC14;              /* 0x7c4 */
    LTCA2_SRCm_t    SRC13;              /* 0x7c8 */
    LTCA2_SRCm_t    SRC12;              /* 0x7cc */
    LTCA2_SRCm_t    SRC11;              /* 0x7d0 */
    LTCA2_SRCm_t    SRC10;              /* 0x7d4 */
    LTCA2_SRCm_t    SRC09;              /* 0x7d8 */
    LTCA2_SRCm_t    SRC08;              /* 0x7dc */
    LTCA2_SRCm_t    SRC07;              /* 0x7e0 */
    LTCA2_SRCm_t    SRC06;              /* 0x7e4 */
    LTCA2_SRCm_t    SRC05;              /* 0x7e8 */
    LTCA2_SRCm_t    SRC04;              /* 0x7ec */
    LTCA2_SRCm_t    SRC03;              /* 0x7f0 */
    LTCA2_SRCm_t    SRC02;              /* 0x7f4 */
    LTCA2_SRCm_t    SRC01;              /* 0x7f8 */
    LTCA2_SRCm_t    SRC00;              /* 0x7fc */
} LTCA2_t;

#endif /* _TC1793_LTCA2_STRUCTS_H_ */
