/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1792_PORT10_STRUCTS_H_
#define _TC1792_PORT10_STRUCTS_H_
/*
   TriCore TC1792
   Some struct definitions for conveniance
*/

#include <tc1792/p10.h>
#ifndef P10_BASE
#define P10_BASE 0xf0001600
#endif /* P10_BASE */


typedef struct
{
    unsigned int    reserved0[0x9];     /* 0x0 */
    P10_IN_t        IN;                 /* 0x24 */
} PORT10_t;

#endif /* _TC1792_PORT10_STRUCTS_H_ */
