/* (c) HighTec EDV-Systeme GmbH */

/* block "P14" of TriCore TC1793 (10 SFRs) */

#include <tc1793/p14/addr.h>

#include <tc1793/p14/masks.h>
#include <tc1793/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/p14/types.h>
#include <tc1793/p0-18/sharetypes.h>

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
SFR_NOABS (P14_PDR0, Pn_PDRm_t, P14_PDR0_ADDR);   /* "Port 14 Pad Driver Mode 0 Register" */
SFR_NOABS (P14_PDR1, Pn_PDRm_t, P14_PDR1_ADDR);   /* "Port 14 Pad Driver Mode 1 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P14_H_ (block "P14") */


