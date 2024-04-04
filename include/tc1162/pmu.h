/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "PMU LL" of TriCore TC1162 (25 SFRs) */

#include <tc1162/pmu/addr.h>

#include <tc1162/pmu/masks.h>
#include <tc1162/pmu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1162/pmu/types.h>
#include <tc1162/pmu/sharetypes.h>

#ifndef _HAVE_TRICORE_PMU_H_
#define _HAVE_TRICORE_PMU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (PMU_ID, PMU_ID_t, PMU_ID_ADDR);        /* "PMU Module Identification Register (LL)" */
SFR_NOABS (PMU_OMASK0, PMU_OMASKm_t, PMU_OMASK0_ADDR); /* "Overlay Mask Register 0" */
SFR_NOABS (PMU_OMASK1, PMU_OMASKm_t, PMU_OMASK1_ADDR); /* "Overlay Mask Register 1" */
SFR_NOABS (PMU_OMASK2, PMU_OMASKm_t, PMU_OMASK2_ADDR); /* "Overlay Mask Register 2" */
SFR_NOABS (PMU_OMASK3, PMU_OMASKm_t, PMU_OMASK3_ADDR); /* "Overlay Mask Register 3" */
SFR_NOABS (PMU_OMASK4, PMU_OMASKm_t, PMU_OMASK4_ADDR); /* "Overlay Mask Register 4" */
SFR_NOABS (PMU_OMASK5, PMU_OMASKm_t, PMU_OMASK5_ADDR); /* "Overlay Mask Register 5" */
SFR_NOABS (PMU_OMASK6, PMU_OMASKm_t, PMU_OMASK6_ADDR); /* "Overlay Mask Register 6" */
SFR_NOABS (PMU_OMASK7, PMU_OMASKm_t, PMU_OMASK7_ADDR); /* "Overlay Mask Register 7" */
SFR_NOABS (PMU_OTAR0, PMU_OTARm_t, PMU_OTAR0_ADDR); /* "Overlay Target Address Register 0" */
SFR_NOABS (PMU_OTAR1, PMU_OTARm_t, PMU_OTAR1_ADDR); /* "Overlay Target Address Register 1" */
SFR_NOABS (PMU_OTAR2, PMU_OTARm_t, PMU_OTAR2_ADDR); /* "Overlay Target Address Register 2" */
SFR_NOABS (PMU_OTAR3, PMU_OTARm_t, PMU_OTAR3_ADDR); /* "Overlay Target Address Register 3" */
SFR_NOABS (PMU_OTAR4, PMU_OTARm_t, PMU_OTAR4_ADDR); /* "Overlay Target Address Register 4" */
SFR_NOABS (PMU_OTAR5, PMU_OTARm_t, PMU_OTAR5_ADDR); /* "Overlay Target Address Register 5" */
SFR_NOABS (PMU_OTAR6, PMU_OTARm_t, PMU_OTAR6_ADDR); /* "Overlay Target Address Register 6" */
SFR_NOABS (PMU_OTAR7, PMU_OTARm_t, PMU_OTAR7_ADDR); /* "Overlay Target Address Register 7" */
SFR_NOABS (PMU_RABR0, PMU_RABRm_t, PMU_RABR0_ADDR); /* "Redirected Address Base Register 0" */
SFR_NOABS (PMU_RABR1, PMU_RABRm_t, PMU_RABR1_ADDR); /* "Redirected Address Base Register 1" */
SFR_NOABS (PMU_RABR2, PMU_RABRm_t, PMU_RABR2_ADDR); /* "Redirected Address Base Register 2" */
SFR_NOABS (PMU_RABR3, PMU_RABRm_t, PMU_RABR3_ADDR); /* "Redirected Address Base Register 3" */
SFR_NOABS (PMU_RABR4, PMU_RABRm_t, PMU_RABR4_ADDR); /* "Redirected Address Base Register 4" */
SFR_NOABS (PMU_RABR5, PMU_RABRm_t, PMU_RABR5_ADDR); /* "Redirected Address Base Register 5" */
SFR_NOABS (PMU_RABR6, PMU_RABRm_t, PMU_RABR6_ADDR); /* "Redirected Address Base Register 6" */
SFR_NOABS (PMU_RABR7, PMU_RABRm_t, PMU_RABR7_ADDR); /* "Redirected Address Base Register 7" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_PMU_H_ (block "PMU LL") */


