/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P8" of TriCore TC1767 (9 SFRs) */

#include <tc1767/p8/addr.h>

#include <tc1767/p8/masks.h>
#include <tc1767/p0_p1_p2_p3_p4_p5_p6_p7_p8_p9/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1767/p8/types.h>
#include <tc1767/p0_p1_p2_p3_p4_p5_p6_p7_p8_p9/sharetypes.h>

#ifndef _HAVE_TRICORE_P8_H_
#define _HAVE_TRICORE_P8_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P8_ESR, Pn_ESR_t, P8_ESR_ADDR);          /* "Port 8 Emergency Stop Register" */
SFR_ABS (P8_IN, Pn_IN_t, P8_IN_ADDR);             /* "Port 8 Input Register" */
SFR_ABS (P8_IOCR0, Pn_IOCRm_t, P8_IOCR0_ADDR);    /* "Port 8 Input/Output Control Register 0" */
SFR_ABS (P8_IOCR12, Pn_IOCRm_t, P8_IOCR12_ADDR);  /* "Port 8 Input/Output Control Register 12" */
SFR_ABS (P8_IOCR4, Pn_IOCRm_t, P8_IOCR4_ADDR);    /* "Port 8 Input/Output Control Register 4" */
SFR_ABS (P8_IOCR8, Pn_IOCRm_t, P8_IOCR8_ADDR);    /* "Port 8 Input/Output Control Register 8" */
SFR_ABS (P8_OMR, Pn_OMR_t, P8_OMR_ADDR);          /* "Port 8 Output Modification Register" */
SFR_ABS (P8_OUT, Pn_OUT_t, P8_OUT_ADDR);          /* "Port 8 Output Register" */
SFR_ABS (P8_PDR, P8_PDR_t, P8_PDR_ADDR);          /* "Port 8 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P8_H_ (block "P8") */


