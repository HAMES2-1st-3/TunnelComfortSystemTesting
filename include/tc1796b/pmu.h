/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "PMU" of TriCore TC1796B (1 SFRs) */

#include <tc1796b/pmu/addr.h>

#include <tc1796b/pmu/masks.h>
#include <tc1796b/pmu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1796b/pmu/types.h>
#include <tc1796b/pmu/sharetypes.h>

#ifndef _HAVE_TRICORE_PMU_H_
#define _HAVE_TRICORE_PMU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (PMU_ID, PMU_ID_t, PMU_ID_ADDR);        /* "PMU Module Identification Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_PMU_H_ (block "PMU") */


