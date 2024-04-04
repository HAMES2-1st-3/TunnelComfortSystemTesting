/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1167_LTCA2_STRUCTS_H_
#define _TC1167_LTCA2_STRUCTS_H_
/*
   TriCore TC1167
   Some struct definitions for conveniance
*/

#include <tc1167/ltca2.h>
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

#ifndef _LTCA2_LTC31_T_
#define _LTCA2_LTC31_T_
typedef struct 
{
    LTCA2_LTCCTR31_t CTR;               /* 0x0 */    
    LTCA2_LTCXR31_t XR;                 /* 0x4 */    
} LTCA2_LTC31_t;
#endif /* _LTCA2_LTC31_T_ */



typedef struct
{
    unsigned int    reserved0[0x2];     /* 0x0 */
    LTCA2_ID_t      ID;                 /* 0x8 */
    unsigned int    reserved2[0x5];     /* 0xc */
    LTCA2_SRSC2_t   SRSC2;              /* 0x20 */
    LTCA2_SRSS2_t   SRSS2;              /* 0x24 */
    unsigned int    reserved5[0x4];     /* 0x28 */
    LTCA2_MRACTL_t  MRACTL;             /* 0x38 */
    LTCA2_MRADIN_t  MRADIN;             /* 0x3c */
    LTCA2_MRADOUT_t MRADOUT;            /* 0x40 */
    unsigned int    reserved9[0x6f];    /* 0x44 */
    LTCA2_LTC_t     LTC[0x1f];          /* 0x200 */
    LTCA2_LTC31_t   LTC31;              /* 0x2f8 */
    unsigned int    reserved12[0x138];  /* 0x300 */
    LTCA2_SRCm_t    SRC07;              /* 0x7e0 */
    LTCA2_SRCm_t    SRC06;              /* 0x7e4 */
    LTCA2_SRCm_t    SRC05;              /* 0x7e8 */
    LTCA2_SRCm_t    SRC04;              /* 0x7ec */
    LTCA2_SRCm_t    SRC03;              /* 0x7f0 */
    LTCA2_SRCm_t    SRC02;              /* 0x7f4 */
    LTCA2_SRCm_t    SRC01;              /* 0x7f8 */
    LTCA2_SRCm_t    SRC00;              /* 0x7fc */
} LTCA2_t;

#endif /* _TC1167_LTCA2_STRUCTS_H_ */
