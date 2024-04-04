/* (c) HighTec EDV-Systeme GmbH */

/* block "P11" of TriCore TC1798 (9 SFRs) */

#include <tc1798/p11/addr.h>

#include <tc1798/p11/masks.h>
#include <tc1798/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1798/p11/types.h>
#include <tc1798/p0-18/sharetypes.h>

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
SFR_ABS (P11_PDR0, Pn_PDRm_t, P11_PDR0_ADDR);     /* "Port 11 Pad Driver Mode 0 Register" */
SFR_ABS (P11_PDR1, Pn_PDRm_t, P11_PDR1_ADDR);     /* "Port 11 Pad Driver Mode 1 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P11_H_ (block "P11") */


