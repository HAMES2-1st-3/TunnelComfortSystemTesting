/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1724_OVC_STRUCTS_H_
#define _TC1724_OVC_STRUCTS_H_
/*
   TriCore TC1724
   Some struct definitions for conveniance
*/

#include <tc1724/ovc.h>
#ifndef OVC_BASE
#define OVC_BASE 0xf87ffb00
#endif /* OVC_BASE */

#ifndef _OVC_BLK_T_
#define _OVC_BLK_T_
typedef struct 
{
    OVC_RABRm_t     RABR;               /* 0x0 */    
    OVC_OTARm_t     OTAR;               /* 0x4 */    
    OVC_OMASKm_t    OMASK;              /* 0x8 */    
} OVC_BLK_t;
#endif /* _OVC_BLK_T_ */



typedef struct
{
    unsigned int    reserved0[0x8];     /* 0x0 */
    OVC_BLK_t       BLK[0x10];          /* 0x20 */
    OVC_OCON_t      OCON;               /* 0xe0 */
} OVC_t;

#endif /* _TC1724_OVC_STRUCTS_H_ */
