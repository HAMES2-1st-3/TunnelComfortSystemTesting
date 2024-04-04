/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P3 CD" of TriCore TC1130B (8 SFRs) */

#include <tc1130b/p3/addr.h>

#include <tc1130b/p3/masks.h>
#include <tc1130b/p0_p1_p2_p3/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/p3/types.h>
#include <tc1130b/p0_p1_p2_p3/sharetypes.h>

#ifndef _HAVE_TRICORE_P3_H_
#define _HAVE_TRICORE_P3_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P3_ALTSEL0, Pn_ALTSELm_t, P3_ALTSEL0_ADDR); /* "Port 3 Alternate Select Register 0" */
SFR_ABS (P3_ALTSEL1, Pn_ALTSELm_t, P3_ALTSEL1_ADDR); /* "Port 3 Alternate Select Register 1" */
SFR_ABS (P3_DIR, Pn_DIR_t, P3_DIR_ADDR);          /* "Port 3 Direction Register" */
SFR_ABS (P3_IN, Pn_IN_t, P3_IN_ADDR);             /* "Port 3 Data Input Register" */
SFR_ABS (P3_OD, Pn_OD_t, P3_OD_ADDR);             /* "Port 3 Open Drain Mode Register" */
SFR_ABS (P3_OUT, Pn_OUT_t, P3_OUT_ADDR);          /* "Port 3 Data Output Register" */
SFR_ABS (P3_PUDEN, Pn_PUDEN_t, P3_PUDEN_ADDR);    /* "Port 3 Pull up/down Enable Register" */
SFR_ABS (P3_PUDSEL, Pn_PUDSEL_t, P3_PUDSEL_ADDR); /* "Port 3 Pull up/down Select Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P3_H_ (block "P3 CD") */


