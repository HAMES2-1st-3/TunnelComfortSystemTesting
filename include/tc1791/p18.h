/* (c) HighTec EDV-Systeme GmbH */

/* block "P18" of TriCore TC1791 (6 SFRs) */

#include <tc1791/p18/addr.h>

#include <tc1791/p18/masks.h>
#include <tc1791/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1791/p18/types.h>
#include <tc1791/p0-18/sharetypes.h>

#ifndef _HAVE_TRICORE_P18_H_
#define _HAVE_TRICORE_P18_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (P18_IN, Pn_IN_t, P18_IN_ADDR);         /* "Port 18 Input Register" */
SFR_NOABS (P18_IOCR0, Pn_IOCRm_t, P18_IOCR0_ADDR); /* "Port 18 Input/Output Control Register 0" */
SFR_NOABS (P18_IOCR4, Pn_IOCRm_t, P18_IOCR4_ADDR); /* "Port 18 Input/Output Control Register 4" */
SFR_NOABS (P18_OMR, Pn_OMR_t, P18_OMR_ADDR);      /* "Port 18 Output Modification Register" */
SFR_NOABS (P18_OUT, Pn_OUT_t, P18_OUT_ADDR);      /* "Port 18 Output Register" */
SFR_NOABS (P18_PDR0, Pn_PDRm_t, P18_PDR0_ADDR);   /* "Port 18 Pad Driver Mode 0 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P18_H_ (block "P18") */


