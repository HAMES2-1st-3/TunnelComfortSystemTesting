/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P13" of TriCore TC1197 (9 SFRs) */

#include <tc1197/p13/addr.h>

#include <tc1197/p13/masks.h>
#include <tc1197/p0_p1_p10_p11_p12_p13_p14_p15_p16_p2_p3_p4_p5_p6_p7_p8_p9/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1197/p13/types.h>
#include <tc1197/p0_p1_p10_p11_p12_p13_p14_p15_p16_p2_p3_p4_p5_p6_p7_p8_p9/sharetypes.h>

#ifndef _HAVE_TRICORE_P13_H_
#define _HAVE_TRICORE_P13_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (P13_ESR, Pn_ESR_t, P13_ESR_ADDR);      /* "Port 13 Emergency Stop Register" */
SFR_NOABS (P13_IN, Pn_IN_t, P13_IN_ADDR);         /* "Port 13 Input Register" */
SFR_NOABS (P13_IOCR0, Pn_IOCRm_t, P13_IOCR0_ADDR); /* "Port 13 Input/Output Control Register 0" */
SFR_NOABS (P13_IOCR12, Pn_IOCRm_t, P13_IOCR12_ADDR); /* "Port 13 Input/Output Control Register 12" */
SFR_NOABS (P13_IOCR4, Pn_IOCRm_t, P13_IOCR4_ADDR); /* "Port 13 Input/Output Control Register 4" */
SFR_NOABS (P13_IOCR8, Pn_IOCRm_t, P13_IOCR8_ADDR); /* "Port 13 Input/Output Control Register 8" */
SFR_NOABS (P13_OMR, Pn_OMR_t, P13_OMR_ADDR);      /* "Port 13 Output Modification Register" */
SFR_NOABS (P13_OUT, Pn_OUT_t, P13_OUT_ADDR);      /* "Port 13 Output Register" */
SFR_NOABS (P13_PDR, P13_PDR_t, P13_PDR_ADDR);     /* "Port 13 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P13_H_ (block "P13") */


