/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "PMI" of TriCore TC1766B (4 SFRs) */

#include <tc1766b/pmi/addr.h>

#include <tc1766b/pmi/masks.h>
#include <tc1766b/pmi/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1766b/pmi/types.h>
#include <tc1766b/pmi/sharetypes.h>

#ifndef _HAVE_TRICORE_PMI_H_
#define _HAVE_TRICORE_PMI_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (PMI_CON0, PMI_CON0_t, PMI_CON0_ADDR);  /* "PMI Control Register 0" */
SFR_NOABS (PMI_CON1, PMI_CON1_t, PMI_CON1_ADDR);  /* "PMI Control Register 1" */
SFR_NOABS (PMI_CON2, PMI_CON2_t, PMI_CON2_ADDR);  /* "PMI Control Register 2" */
SFR_NOABS (PMI_ID, PMI_ID_t, PMI_ID_ADDR);        /* "PMI Module Identification Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_PMI_H_ (block "PMI") */


