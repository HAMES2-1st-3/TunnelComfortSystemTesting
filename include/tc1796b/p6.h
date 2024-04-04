/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "Port6" of TriCore TC1796B (7 SFRs) */

#include <tc1796b/p6/addr.h>

#include <tc1796b/p6/masks.h>
#include <tc1796b/p0_p1_p2_p3_p4_p5_p6_p7_p8_p9/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1796b/p6/types.h>
#include <tc1796b/p0_p1_p2_p3_p4_p5_p6_p7_p8_p9/sharetypes.h>

#ifndef _HAVE_TRICORE_P6_H_
#define _HAVE_TRICORE_P6_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P6_IN, P6_IN_t, P6_IN_ADDR);             /* "Port 6 Input Register" */
SFR_ABS (P6_IOCR12, Pn_IOCRm_t, P6_IOCR12_ADDR);  /* "Port 6 Input/Output Control Register 12" */
SFR_ABS (P6_IOCR4, Pn_IOCRm_t, P6_IOCR4_ADDR);    /* "Port 6 Input/Output Control Register 4" */
SFR_ABS (P6_IOCR8, Pn_IOCRm_t, P6_IOCR8_ADDR);    /* "Port 6 Input/Output Control Register 8" */
SFR_ABS (P6_OMR, P6_OMR_t, P6_OMR_ADDR);          /* "Port 6 Output Modification Register" */
SFR_ABS (P6_OUT, P6_OUT_t, P6_OUT_ADDR);          /* "Port 6 Output Register" */
SFR_ABS (P6_PDR, P6_PDR_t, P6_PDR_ADDR);          /* "Port 6 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P6_H_ (block "Port6") */


