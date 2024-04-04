/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "Port10" of TriCore TC1792 (1 SFRs) */

#include <tc1792/p10/addr.h>

#include <tc1792/p10/masks.h>
#include <tc1792/p10/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1792/p10/types.h>
#include <tc1792/p10/sharetypes.h>

#ifndef _HAVE_TRICORE_P10_H_
#define _HAVE_TRICORE_P10_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P10_IN, P10_IN_t, P10_IN_ADDR);          /* "Port 10 Input Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P10_H_ (block "Port10") */


