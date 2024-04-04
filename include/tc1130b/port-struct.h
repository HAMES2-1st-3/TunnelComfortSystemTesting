/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1130B_PORT_STRUCTS_H_
#define _TC1130B_PORT_STRUCTS_H_
/*
   TriCore TC1130B
   Some struct definitions for conveniance
*/

#include <tc1130b/p0.h>
#ifndef P0_BASE
#define P0_BASE 0xf0000c00
#endif /* P0_BASE */

#include <tc1130b/p1.h>
#ifndef P1_BASE
#define P1_BASE 0xf0000d00
#endif /* P1_BASE */

#include <tc1130b/p2.h>
#ifndef P2_BASE
#define P2_BASE 0xf0000e00
#endif /* P2_BASE */

#include <tc1130b/p3.h>
#ifndef P3_BASE
#define P3_BASE 0xf0000f00
#endif /* P3_BASE */


typedef struct
{
    unsigned int    reserved0[0x4];     /* 0x0 */
    Pn_OUT_t        OUT;                /* 0x10 */
    Pn_IN_t         IN;                 /* 0x14 */
    Pn_DIR_t        DIR;                /* 0x18 */
    Pn_OD_t         OD;                 /* 0x1c */
    unsigned int    reserved5[0x2];     /* 0x20 */
    Pn_PUDSEL_t     PUDSEL;             /* 0x28 */
    Pn_PUDEN_t      PUDEN;              /* 0x2c */
    unsigned int    reserved8[0x5];     /* 0x30 */
    Pn_ALTSELm_t    ALTSEL0;            /* 0x44 */
    Pn_ALTSELm_t    ALTSEL1;            /* 0x48 */
} PORT_t;

#endif /* _TC1130B_PORT_STRUCTS_H_ */
