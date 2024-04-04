/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1130B_PORT4_STRUCTS_H_
#define _TC1130B_PORT4_STRUCTS_H_
/*
   TriCore TC1130B
   Some struct definitions for conveniance
*/

#include <tc1130b/p4.h>
#ifndef P4_BASE
#define P4_BASE 0xf0001000
#endif /* P4_BASE */


typedef struct
{
    unsigned int    reserved0[0x4];     /* 0x0 */
    P4_OUT_t        OUT;                /* 0x10 */
    P4_IN_t         IN;                 /* 0x14 */
    P4_DIR_t        DIR;                /* 0x18 */
    P4_OD_t         OD;                 /* 0x1c */
    unsigned int    reserved5[0x2];     /* 0x20 */
    P4_PUDSEL_t     PUDSEL;             /* 0x28 */
    P4_PUDEN_t      PUDEN;              /* 0x2c */
    unsigned int    reserved8[0x5];     /* 0x30 */
    P4_ALTSELm_t    ALTSEL0;            /* 0x44 */
    P4_ALTSELm_t    ALTSEL1;            /* 0x48 */
} PORT4_t;

#endif /* _TC1130B_PORT4_STRUCTS_H_ */
