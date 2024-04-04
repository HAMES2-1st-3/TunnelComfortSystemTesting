/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P7" of TriCore TC1767 (9 SFRs) */

#include <tc1767/p7/addr.h>

#include <tc1767/p7/masks.h>
#include <tc1767/p0_p1_p2_p3_p4_p5_p6_p7_p8_p9/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1767/p7/types.h>
#include <tc1767/p0_p1_p2_p3_p4_p5_p6_p7_p8_p9/sharetypes.h>

#ifndef _HAVE_TRICORE_P7_H_
#define _HAVE_TRICORE_P7_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P7_ESR, Pn_ESR_t, P7_ESR_ADDR);          /* "Port 7 Emergency Stop Register" */
SFR_ABS (P7_IN, Pn_IN_t, P7_IN_ADDR);             /* "Port 7 Input Register" */
SFR_ABS (P7_IOCR0, Pn_IOCRm_t, P7_IOCR0_ADDR);    /* "Port 7 Input/Output Control Register 0" */
SFR_ABS (P7_IOCR12, Pn_IOCRm_t, P7_IOCR12_ADDR);  /* "Port 7 Input/Output Control Register 12" */
SFR_ABS (P7_IOCR4, Pn_IOCRm_t, P7_IOCR4_ADDR);    /* "Port 7 Input/Output Control Register 4" */
SFR_ABS (P7_IOCR8, Pn_IOCRm_t, P7_IOCR8_ADDR);    /* "Port 7 Input/Output Control Register 8" */
SFR_ABS (P7_OMR, Pn_OMR_t, P7_OMR_ADDR);          /* "Port 7 Output Modification Register" */
SFR_ABS (P7_OUT, Pn_OUT_t, P7_OUT_ADDR);          /* "Port 7 Output Register" */
SFR_ABS (P7_PDR, P7_PDR_t, P7_PDR_ADDR);          /* "Port 7 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P7_H_ (block "P7") */


