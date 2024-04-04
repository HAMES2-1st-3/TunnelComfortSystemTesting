/* (c) HighTec EDV-Systeme GmbH */

/* block "P12" of TriCore TC1728 (3 SFRs) */

#include <tc1728/p12/addr.h>

#include <tc1728/p12/masks.h>
#include <tc1728/p0-6_8-12/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1728/p12/types.h>
#include <tc1728/p0-6_8-12/sharetypes.h>

#ifndef _HAVE_TRICORE_P12_H_
#define _HAVE_TRICORE_P12_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (P12_IN, Pn_IN_t, P12_IN_ADDR);         /* "Port 12 Input Register" */
SFR_NOABS (P12_IOCR0, Pn_IOCRm_t, P12_IOCR0_ADDR); /* "Port 12 Input/Output Control Register 0" */
SFR_NOABS (P12_PDISC, P12_PDISC_t, P12_PDISC_ADDR); /* "Port 12 Pin Function Decision Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P12_H_ (block "P12") */


