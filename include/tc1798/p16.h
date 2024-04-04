/* (c) HighTec EDV-Systeme GmbH */

/* block "P16" of TriCore TC1798 (9 SFRs) */

#include <tc1798/p16/addr.h>

#include <tc1798/p16/masks.h>
#include <tc1798/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1798/p16/types.h>
#include <tc1798/p0-18/sharetypes.h>

#ifndef _HAVE_TRICORE_P16_H_
#define _HAVE_TRICORE_P16_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (P16_IN, Pn_IN_t, P16_IN_ADDR);         /* "Port 16 Input Register" */
SFR_NOABS (P16_IOCR0, Pn_IOCRm_t, P16_IOCR0_ADDR); /* "Port 16 Input/Output Control Register 0" */
SFR_NOABS (P16_IOCR12, P16_IOCR12_t, P16_IOCR12_ADDR); /* "Port 16 Input/Output Control Register 12" */
SFR_NOABS (P16_IOCR4, Pn_IOCRm_t, P16_IOCR4_ADDR); /* "Port 16 Input/Output Control Register 4" */
SFR_NOABS (P16_IOCR8, Pn_IOCRm_t, P16_IOCR8_ADDR); /* "Port 16 Input/Output Control Register 8" */
SFR_NOABS (P16_OMR, Pn_OMR_t, P16_OMR_ADDR);      /* "Port 16 Output Modification Register" */
SFR_NOABS (P16_OUT, Pn_OUT_t, P16_OUT_ADDR);      /* "Port 16 Output Register" */
SFR_NOABS (P16_PDR0, Pn_PDRm_t, P16_PDR0_ADDR);   /* "Port 16 Pad Driver Mode 0 Register" */
SFR_NOABS (P16_PDR1, P16_PDR1_t, P16_PDR1_ADDR);  /* "Port 16 Pad Driver Mode 1 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P16_H_ (block "P16") */


