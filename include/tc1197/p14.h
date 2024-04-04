/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P14" of TriCore TC1197 (9 SFRs) */

#include <tc1197/p14/addr.h>

#include <tc1197/p14/masks.h>
#include <tc1197/p0_p1_p10_p11_p12_p13_p14_p15_p16_p2_p3_p4_p5_p6_p7_p8_p9/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1197/p14/types.h>
#include <tc1197/p0_p1_p10_p11_p12_p13_p14_p15_p16_p2_p3_p4_p5_p6_p7_p8_p9/sharetypes.h>

#ifndef _HAVE_TRICORE_P14_H_
#define _HAVE_TRICORE_P14_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (P14_ESR, Pn_ESR_t, P14_ESR_ADDR);      /* "Port 14 Emergency Stop Register" */
SFR_NOABS (P14_IN, Pn_IN_t, P14_IN_ADDR);         /* "Port 14 Input Register" */
SFR_NOABS (P14_IOCR0, Pn_IOCRm_t, P14_IOCR0_ADDR); /* "Port 14 Input/Output Control Register 0" */
SFR_NOABS (P14_IOCR12, Pn_IOCRm_t, P14_IOCR12_ADDR); /* "Port 14 Input/Output Control Register 12" */
SFR_NOABS (P14_IOCR4, Pn_IOCRm_t, P14_IOCR4_ADDR); /* "Port 14 Input/Output Control Register 4" */
SFR_NOABS (P14_IOCR8, Pn_IOCRm_t, P14_IOCR8_ADDR); /* "Port 14 Input/Output Control Register 8" */
SFR_NOABS (P14_OMR, Pn_OMR_t, P14_OMR_ADDR);      /* "Port 14 Output Modification Register" */
SFR_NOABS (P14_OUT, Pn_OUT_t, P14_OUT_ADDR);      /* "Port 14 Output Register" */
SFR_NOABS (P14_PDR, P14_PDR_t, P14_PDR_ADDR);     /* "Port 14 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P14_H_ (block "P14") */


