/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P3 LL" of TriCore TC1766B (8 SFRs) */

#include <tc1766b/p3/addr.h>

#include <tc1766b/p3/masks.h>
#include <tc1766b/p0_p1_p2_p3_p4_p5/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1766b/p3/types.h>
#include <tc1766b/p0_p1_p2_p3_p4_p5/sharetypes.h>

#ifndef _HAVE_TRICORE_P3_H_
#define _HAVE_TRICORE_P3_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P3_IN, Pn_IN_t, P3_IN_ADDR);             /* "Port 3 Input Register" */
SFR_ABS (P3_IOCR0, Pn_IOCRm_t, P3_IOCR0_ADDR);    /* "Input/Output Control Register 0" */
SFR_ABS (P3_IOCR12, Pn_IOCRm_t, P3_IOCR12_ADDR);  /* "Input/Output Control Register 12" */
SFR_ABS (P3_IOCR4, Pn_IOCRm_t, P3_IOCR4_ADDR);    /* "Input/Output Control Register 4" */
SFR_ABS (P3_IOCR8, Pn_IOCRm_t, P3_IOCR8_ADDR);    /* "Input/Output Control Register 8" */
SFR_ABS (P3_OMR, Pn_OMR_t, P3_OMR_ADDR);          /* "Port 3 Output Modification Register" */
SFR_ABS (P3_OUT, Pn_OUT_t, P3_OUT_ADDR);          /* "Output Register" */
SFR_ABS (P3_PDR, P3_PDR_t, P3_PDR_ADDR);          /* "Port 3 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P3_H_ (block "P3 LL") */


