/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1784_OVC_STRUCTS_H_
#define _TC1784_OVC_STRUCTS_H_
/*
   TriCore TC1784
   Some struct definitions for conveniance
*/

#include <tc1784/ovc.h>
#ifndef OVC_BASE
#define OVC_BASE 0xf87ffb00
#endif /* OVC_BASE */

#ifndef _OVC_OVL_T_
#define _OVC_OVL_T_
typedef struct 
{
    OVC_RABRm_t     RABR;               /* 0x0 */    
    OVC_OTARm_t     OTAR;               /* 0x4 */    
    OVC_OMASKm_t    OMASK;              /* 0x8 */    
} OVC_OVL_t;
#endif /* _OVC_OVL_T_ */



typedef struct
{
    unsigned int    reserved0[0x8];     /* 0x0 */
    OVC_OVL_t       OVL[0x10];          /* 0x20 */
    OVC_OCON_t      OCON;               /* 0xe0 */
} OVC_t;

#endif /* _TC1784_OVC_STRUCTS_H_ */
