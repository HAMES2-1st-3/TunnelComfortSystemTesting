/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P5" of TriCore TC1784 (9 SFRs) */

#include <tc1784/p5/addr.h>

#include <tc1784/p5/masks.h>
#include <tc1784/p0_p1_p10_p2_p3_p4_p5_p6_p7_p8_p9/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1784/p5/types.h>
#include <tc1784/p0_p1_p10_p2_p3_p4_p5_p6_p7_p8_p9/sharetypes.h>

#ifndef _HAVE_TRICORE_P5_H_
#define _HAVE_TRICORE_P5_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P5_ESR, Pn_ESR_t, P5_ESR_ADDR);          /* "Port 5 Emergency Stop Register" */
SFR_ABS (P5_IN, Pn_IN_t, P5_IN_ADDR);             /* "Port 5 Input Register" */
SFR_ABS (P5_IOCR0, Pn_IOCRm_t, P5_IOCR0_ADDR);    /* "Port 5 Input/Output Control Register 0" */
SFR_ABS (P5_IOCR12, Pn_IOCRm_t, P5_IOCR12_ADDR);  /* "Port 5 Input/Output Control Register 12" */
SFR_ABS (P5_IOCR4, Pn_IOCRm_t, P5_IOCR4_ADDR);    /* "Port n Input/Output Control Register 4" */
SFR_ABS (P5_IOCR8, Pn_IOCRm_t, P5_IOCR8_ADDR);    /* "Port n Input/Output Control Register 8" */
SFR_ABS (P5_OMR, Pn_OMR_t, P5_OMR_ADDR);          /* "Port 5 Output Modification Register" */
SFR_ABS (P5_OUT, Pn_OUT_t, P5_OUT_ADDR);          /* "Port 5 Output Register" */
SFR_ABS (P5_PDR, P5_PDR_t, P5_PDR_ADDR);          /* "Port 5 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P5_H_ (block "P5") */


