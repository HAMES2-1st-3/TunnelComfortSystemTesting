/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P4 CD" of TriCore TC1130B (8 SFRs) */

#include <tc1130b/p4/addr.h>

#include <tc1130b/p4/masks.h>
#include <tc1130b/p4/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/p4/types.h>
#include <tc1130b/p4/sharetypes.h>

#ifndef _HAVE_TRICORE_P4_H_
#define _HAVE_TRICORE_P4_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P4_ALTSEL0, P4_ALTSELm_t, P4_ALTSEL0_ADDR); /* "Port 4 Alternate Select Register 0" */
SFR_ABS (P4_ALTSEL1, P4_ALTSELm_t, P4_ALTSEL1_ADDR); /* "Port 4 Alternate Select Register 1" */
SFR_ABS (P4_DIR, P4_DIR_t, P4_DIR_ADDR);          /* "Port 4 Direction Register" */
SFR_ABS (P4_IN, P4_IN_t, P4_IN_ADDR);             /* "Port 4 Data Input Register" */
SFR_ABS (P4_OD, P4_OD_t, P4_OD_ADDR);             /* "Port 4 Open Drain Mode Register" */
SFR_ABS (P4_OUT, P4_OUT_t, P4_OUT_ADDR);          /* "Port 4 Data Output Register" */
SFR_ABS (P4_PUDEN, P4_PUDEN_t, P4_PUDEN_ADDR);    /* "Port 4 Pull up/down Enable Register" */
SFR_ABS (P4_PUDSEL, P4_PUDSEL_t, P4_PUDSEL_ADDR); /* "Port 4 Pull up/down Select Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P4_H_ (block "P4 CD") */


