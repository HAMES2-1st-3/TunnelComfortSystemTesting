/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P15" of TriCore TC1797 (8 SFRs) */

#include <tc1797/p15/addr.h>

#include <tc1797/p15/masks.h>
#include <tc1797/p0_p1_p10_p11_p12_p13_p14_p15_p16_p2_p3_p4_p5_p6_p7_p8_p9/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1797/p15/types.h>
#include <tc1797/p0_p1_p10_p11_p12_p13_p14_p15_p16_p2_p3_p4_p5_p6_p7_p8_p9/sharetypes.h>

#ifndef _HAVE_TRICORE_P15_H_
#define _HAVE_TRICORE_P15_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (P15_IN, Pn_IN_t, P15_IN_ADDR);         /* "Port 15 Input Register" */
SFR_NOABS (P15_IOCR0, Pn_IOCRm_t, P15_IOCR0_ADDR); /* "Port 15 Input/Output Control Register 0" */
SFR_NOABS (P15_IOCR12, Pn_IOCRm_t, P15_IOCR12_ADDR); /* "Port 15 Input/Output Control Register 12" */
SFR_NOABS (P15_IOCR4, Pn_IOCRm_t, P15_IOCR4_ADDR); /* "Port 15 Input/Output Control Register 4" */
SFR_NOABS (P15_IOCR8, Pn_IOCRm_t, P15_IOCR8_ADDR); /* "Port 15 Input/Output Control Register 8" */
SFR_NOABS (P15_OMR, Pn_OMR_t, P15_OMR_ADDR);      /* "Port 15 Output Modification Register" */
SFR_NOABS (P15_OUT, Pn_OUT_t, P15_OUT_ADDR);      /* "Port 15 Output Register" */
SFR_NOABS (P15_PDR, P15_PDR_t, P15_PDR_ADDR);     /* "Port 15 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P15_H_ (block "P15") */


