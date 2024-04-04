/* (c) HighTec EDV-Systeme GmbH */

/* block "P15" of TriCore TC1791 (9 SFRs) */

#include <tc1791/p15/addr.h>

#include <tc1791/p15/masks.h>
#include <tc1791/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1791/p15/types.h>
#include <tc1791/p0-18/sharetypes.h>

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
SFR_NOABS (P15_PDR0, Pn_PDRm_t, P15_PDR0_ADDR);   /* "Port 15 Pad Driver Mode 0 Register" */
SFR_NOABS (P15_PDR1, Pn_PDRm_t, P15_PDR1_ADDR);   /* "Port 15 Pad Driver Mode 1 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P15_H_ (block "P15") */


