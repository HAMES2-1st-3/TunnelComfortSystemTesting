/* (c) HighTec EDV-Systeme GmbH */

/* block "P12" of TriCore TC1798 (6 SFRs) */

#include <tc1798/p12/addr.h>

#include <tc1798/p12/masks.h>
#include <tc1798/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1798/p12/types.h>
#include <tc1798/p0-18/sharetypes.h>

#ifndef _HAVE_TRICORE_P12_H_
#define _HAVE_TRICORE_P12_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (P12_IN, Pn_IN_t, P12_IN_ADDR);         /* "Port 12 Input Register" */
SFR_NOABS (P12_IOCR0, Pn_IOCRm_t, P12_IOCR0_ADDR); /* "Port 12 Input/Output Control Register 0" */
SFR_NOABS (P12_IOCR4, Pn_IOCRm_t, P12_IOCR4_ADDR); /* "Port 12 Input/Output Control Register 4" */
SFR_NOABS (P12_OMR, Pn_OMR_t, P12_OMR_ADDR);      /* "Port 12 Output Modification Register" */
SFR_NOABS (P12_OUT, Pn_OUT_t, P12_OUT_ADDR);      /* "Port 12 Output Register" */
SFR_NOABS (P12_PDR0, Pn_PDRm_t, P12_PDR0_ADDR);   /* "Port 12 Pad Driver Mode 0 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P12_H_ (block "P12") */


