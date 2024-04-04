/* (c) HighTec EDV-Systeme GmbH */

/* block "P17" of TriCore TC1793 (6 SFRs) */

#include <tc1793/p17/addr.h>

#include <tc1793/p17/masks.h>
#include <tc1793/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/p17/types.h>
#include <tc1793/p0-18/sharetypes.h>

#ifndef _HAVE_TRICORE_P17_H_
#define _HAVE_TRICORE_P17_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (P17_IN, Pn_IN_t, P17_IN_ADDR);         /* "Port 17 Input Register" */
SFR_NOABS (P17_IOCR0, Pn_IOCRm_t, P17_IOCR0_ADDR); /* "Port 17 Input/Output Control Register 0" */
SFR_NOABS (P17_IOCR12, Pn_IOCRm_t, P17_IOCR12_ADDR); /* "Port 17 Input/Output Control Register 12" */
SFR_NOABS (P17_IOCR4, Pn_IOCRm_t, P17_IOCR4_ADDR); /* "Port 17 Input/Output Control Register 4" */
SFR_NOABS (P17_IOCR8, Pn_IOCRm_t, P17_IOCR8_ADDR); /* "Port 17 Input/Output Control Register 8" */
SFR_NOABS (P17_PDISC, P17_PDISC_t, P17_PDISC_ADDR); /* "Port 17 Pin Function Decision Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P17_H_ (block "P17") */


