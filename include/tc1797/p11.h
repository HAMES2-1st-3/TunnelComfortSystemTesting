/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P11" of TriCore TC1797 (8 SFRs) */

#include <tc1797/p11/addr.h>

#include <tc1797/p11/masks.h>
#include <tc1797/p0_p1_p10_p11_p12_p13_p14_p15_p16_p2_p3_p4_p5_p6_p7_p8_p9/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1797/p11/types.h>
#include <tc1797/p0_p1_p10_p11_p12_p13_p14_p15_p16_p2_p3_p4_p5_p6_p7_p8_p9/sharetypes.h>

#ifndef _HAVE_TRICORE_P11_H_
#define _HAVE_TRICORE_P11_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P11_IN, Pn_IN_t, P11_IN_ADDR);           /* "Port 11 Input Register" */
SFR_ABS (P11_IOCR0, Pn_IOCRm_t, P11_IOCR0_ADDR);  /* "Port 11 Input/Output Control Register 0" */
SFR_ABS (P11_IOCR12, Pn_IOCRm_t, P11_IOCR12_ADDR); /* "Port 11 Input/Output Control Register 12" */
SFR_ABS (P11_IOCR4, Pn_IOCRm_t, P11_IOCR4_ADDR);  /* "Port 11 Input/Output Control Register 4" */
SFR_ABS (P11_IOCR8, Pn_IOCRm_t, P11_IOCR8_ADDR);  /* "Port 11Input/Output Control Register 8" */
SFR_ABS (P11_OMR, Pn_OMR_t, P11_OMR_ADDR);        /* "Port 11 Output Modification Register" */
SFR_ABS (P11_OUT, Pn_OUT_t, P11_OUT_ADDR);        /* "Port 11 Output Register" */
SFR_ABS (P11_PDR, P11_PDR_t, P11_PDR_ADDR);       /* "Port 11 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P11_H_ (block "P11") */


