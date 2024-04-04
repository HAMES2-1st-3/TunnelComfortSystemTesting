/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "PMU LL" of TriCore TC1766B (52 SFRs) */

#include <tc1766b/pmu/addr.h>

#include <tc1766b/pmu/masks.h>
#include <tc1766b/pmu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1766b/pmu/types.h>
#include <tc1766b/pmu/sharetypes.h>

#ifndef _HAVE_TRICORE_PMU_H_
#define _HAVE_TRICORE_PMU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (PMU_CSCACTL, PMU_CSCACTL_t, PMU_CSCACTL_ADDR); /* "CPU SRAM Control Array Control Register" */
SFR_NOABS (PMU_CSCADIN, PMU_CSCADIN_t, PMU_CSCADIN_ADDR); /* "CPU SRAM Control Array Data In Register" */
SFR_NOABS (PMU_CSCADOUT, PMU_CSCADOUT_t, PMU_CSCADOUT_ADDR); /* "CPU SRAM Control Array Data Out Register" */
SFR_NOABS (PMU_ID, PMU_ID_t, PMU_ID_ADDR);        /* "PMU Module Identification Register (LL)" */
SFR_NOABS (PMU_OMASK0, PMU_OMASKm_t, PMU_OMASK0_ADDR); /* "Overlay Mask Register 0" */
SFR_NOABS (PMU_OMASK1, PMU_OMASKm_t, PMU_OMASK1_ADDR); /* "Overlay Mask Register 1" */
SFR_NOABS (PMU_OMASK10, PMU_OMASKm_t, PMU_OMASK10_ADDR); /* "Overlay Mask Register 10" */
SFR_NOABS (PMU_OMASK11, PMU_OMASKm_t, PMU_OMASK11_ADDR); /* "Overlay Mask Register 11" */
SFR_NOABS (PMU_OMASK12, PMU_OMASKm_t, PMU_OMASK12_ADDR); /* "Overlay Mask Register 12" */
SFR_NOABS (PMU_OMASK13, PMU_OMASKm_t, PMU_OMASK13_ADDR); /* "Overlay Mask Register 13" */
SFR_NOABS (PMU_OMASK14, PMU_OMASKm_t, PMU_OMASK14_ADDR); /* "Overlay Mask Register 14" */
SFR_NOABS (PMU_OMASK15, PMU_OMASKm_t, PMU_OMASK15_ADDR); /* "Overlay Mask Register 15" */
SFR_NOABS (PMU_OMASK2, PMU_OMASKm_t, PMU_OMASK2_ADDR); /* "Overlay Mask Register 2" */
SFR_NOABS (PMU_OMASK3, PMU_OMASKm_t, PMU_OMASK3_ADDR); /* "Overlay Mask Register 3" */
SFR_NOABS (PMU_OMASK4, PMU_OMASKm_t, PMU_OMASK4_ADDR); /* "Overlay Mask Register 4" */
SFR_NOABS (PMU_OMASK5, PMU_OMASKm_t, PMU_OMASK5_ADDR); /* "Overlay Mask Register 5" */
SFR_NOABS (PMU_OMASK6, PMU_OMASKm_t, PMU_OMASK6_ADDR); /* "Overlay Mask Register 6" */
SFR_NOABS (PMU_OMASK7, PMU_OMASKm_t, PMU_OMASK7_ADDR); /* "Overlay Mask Register 7" */
SFR_NOABS (PMU_OMASK8, PMU_OMASKm_t, PMU_OMASK8_ADDR); /* "Overlay Mask Register 8" */
SFR_NOABS (PMU_OMASK9, PMU_OMASKm_t, PMU_OMASK9_ADDR); /* "Overlay Mask Register 9" */
SFR_NOABS (PMU_OTAR0, PMU_OTARm_t, PMU_OTAR0_ADDR); /* "Overlay Target Address Register 0" */
SFR_NOABS (PMU_OTAR1, PMU_OTARm_t, PMU_OTAR1_ADDR); /* "Overlay Target Address Register 1" */
SFR_NOABS (PMU_OTAR10, PMU_OTARm_t, PMU_OTAR10_ADDR); /* "Overlay Target Address Register 10" */
SFR_NOABS (PMU_OTAR11, PMU_OTARm_t, PMU_OTAR11_ADDR); /* "Overlay Target Address Register 11" */
SFR_NOABS (PMU_OTAR12, PMU_OTARm_t, PMU_OTAR12_ADDR); /* "Overlay Target Address Register 12" */
SFR_NOABS (PMU_OTAR13, PMU_OTARm_t, PMU_OTAR13_ADDR); /* "Overlay Target Address Register 13" */
SFR_NOABS (PMU_OTAR14, PMU_OTARm_t, PMU_OTAR14_ADDR); /* "Overlay Target Address Register 14" */
SFR_NOABS (PMU_OTAR15, PMU_OTARm_t, PMU_OTAR15_ADDR); /* "Overlay Target Address Register 15" */
SFR_NOABS (PMU_OTAR2, PMU_OTARm_t, PMU_OTAR2_ADDR); /* "Overlay Target Address Register 2" */
SFR_NOABS (PMU_OTAR3, PMU_OTARm_t, PMU_OTAR3_ADDR); /* "Overlay Target Address Register 3" */
SFR_NOABS (PMU_OTAR4, PMU_OTARm_t, PMU_OTAR4_ADDR); /* "Overlay Target Address Register 4" */
SFR_NOABS (PMU_OTAR5, PMU_OTARm_t, PMU_OTAR5_ADDR); /* "Overlay Target Address Register 5" */
SFR_NOABS (PMU_OTAR6, PMU_OTARm_t, PMU_OTAR6_ADDR); /* "Overlay Target Address Register 6" */
SFR_NOABS (PMU_OTAR7, PMU_OTARm_t, PMU_OTAR7_ADDR); /* "Overlay Target Address Register 7" */
SFR_NOABS (PMU_OTAR8, PMU_OTARm_t, PMU_OTAR8_ADDR); /* "Overlay Target Address Register 8" */
SFR_NOABS (PMU_OTAR9, PMU_OTARm_t, PMU_OTAR9_ADDR); /* "Overlay Target Address Register 9" */
SFR_NOABS (PMU_RABR0, PMU_RABRm_t, PMU_RABR0_ADDR); /* "Redirected Address Base Register 0" */
SFR_NOABS (PMU_RABR1, PMU_RABRm_t, PMU_RABR1_ADDR); /* "Redirected Address Base Register 1" */
SFR_NOABS (PMU_RABR10, PMU_RABRm_t, PMU_RABR10_ADDR); /* "Redirected Address Base Register 10" */
SFR_NOABS (PMU_RABR11, PMU_RABRm_t, PMU_RABR11_ADDR); /* "Redirected Address Base Register 11" */
SFR_NOABS (PMU_RABR12, PMU_RABRm_t, PMU_RABR12_ADDR); /* "Redirected Address Base Register 12" */
SFR_NOABS (PMU_RABR13, PMU_RABRm_t, PMU_RABR13_ADDR); /* "Redirected Address Base Register 13" */
SFR_NOABS (PMU_RABR14, PMU_RABRm_t, PMU_RABR14_ADDR); /* "Redirected Address Base Register 14" */
SFR_NOABS (PMU_RABR15, PMU_RABRm_t, PMU_RABR15_ADDR); /* "Redirected Address Base Register 15" */
SFR_NOABS (PMU_RABR2, PMU_RABRm_t, PMU_RABR2_ADDR); /* "Redirected Address Base Register 2" */
SFR_NOABS (PMU_RABR3, PMU_RABRm_t, PMU_RABR3_ADDR); /* "Redirected Address Base Register 3" */
SFR_NOABS (PMU_RABR4, PMU_RABRm_t, PMU_RABR4_ADDR); /* "Redirected Address Base Register 4" */
SFR_NOABS (PMU_RABR5, PMU_RABRm_t, PMU_RABR5_ADDR); /* "Redirected Address Base Register 5" */
SFR_NOABS (PMU_RABR6, PMU_RABRm_t, PMU_RABR6_ADDR); /* "Redirected Address Base Register 6" */
SFR_NOABS (PMU_RABR7, PMU_RABRm_t, PMU_RABR7_ADDR); /* "Redirected Address Base Register 7" */
SFR_NOABS (PMU_RABR8, PMU_RABRm_t, PMU_RABR8_ADDR); /* "Redirected Address Base Register 8" */
SFR_NOABS (PMU_RABR9, PMU_RABRm_t, PMU_RABR9_ADDR); /* "Redirected Address Base Register 9" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_PMU_H_ (block "PMU LL") */


