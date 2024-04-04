/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "DMU" of TriCore TC1796B (50 SFRs) */

#include <tc1796b/dmu/addr.h>

#include <tc1796b/dmu/masks.h>
#include <tc1796b/dmu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1796b/dmu/types.h>
#include <tc1796b/dmu/sharetypes.h>

#ifndef _HAVE_TRICORE_DMU_H_
#define _HAVE_TRICORE_DMU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (DMU_ID, DMU_ID_t, DMU_ID_ADDR);        /* "DMU Module Identification Register" */
SFR_NOABS (DMU_OMASK0, DMU_OMASKm_t, DMU_OMASK0_ADDR); /* "DMU Overlay Mask Register 0" */
SFR_NOABS (DMU_OMASK1, DMU_OMASKm_t, DMU_OMASK1_ADDR); /* "DMU Overlay Mask Register 1" */
SFR_NOABS (DMU_OMASK10, DMU_OMASKm_t, DMU_OMASK10_ADDR); /* "DMU Overlay Mask Register 10" */
SFR_NOABS (DMU_OMASK11, DMU_OMASKm_t, DMU_OMASK11_ADDR); /* "DMU Overlay Mask Register 11" */
SFR_NOABS (DMU_OMASK12, DMU_OMASKm_t, DMU_OMASK12_ADDR); /* "DMU Overlay Mask Register 12" */
SFR_NOABS (DMU_OMASK13, DMU_OMASKm_t, DMU_OMASK13_ADDR); /* "DMU Overlay Mask Register 13" */
SFR_NOABS (DMU_OMASK14, DMU_OMASKm_t, DMU_OMASK14_ADDR); /* "DMU Overlay Mask Register 14" */
SFR_NOABS (DMU_OMASK15, DMU_OMASKm_t, DMU_OMASK15_ADDR); /* "DMU Overlay Mask Register 15" */
SFR_NOABS (DMU_OMASK2, DMU_OMASKm_t, DMU_OMASK2_ADDR); /* "DMU Overlay Mask Register 2" */
SFR_NOABS (DMU_OMASK3, DMU_OMASKm_t, DMU_OMASK3_ADDR); /* "DMU Overlay Mask Register 3" */
SFR_NOABS (DMU_OMASK4, DMU_OMASKm_t, DMU_OMASK4_ADDR); /* "DMU Overlay Mask Register 4" */
SFR_NOABS (DMU_OMASK5, DMU_OMASKm_t, DMU_OMASK5_ADDR); /* "DMU Overlay Mask Register 5" */
SFR_NOABS (DMU_OMASK6, DMU_OMASKm_t, DMU_OMASK6_ADDR); /* "DMU Overlay Mask Register 6" */
SFR_NOABS (DMU_OMASK7, DMU_OMASKm_t, DMU_OMASK7_ADDR); /* "DMU Overlay Mask Register 7" */
SFR_NOABS (DMU_OMASK8, DMU_OMASKm_t, DMU_OMASK8_ADDR); /* "DMU Overlay Mask Register 8" */
SFR_NOABS (DMU_OMASK9, DMU_OMASKm_t, DMU_OMASK9_ADDR); /* "DMU Overlay Mask Register 9" */
SFR_NOABS (DMU_OTAR0, DMU_OTARm_t, DMU_OTAR0_ADDR); /* "DMU Overlay Target Address Register 0" */
SFR_NOABS (DMU_OTAR1, DMU_OTARm_t, DMU_OTAR1_ADDR); /* "DMU Overlay Target Address Register 1" */
SFR_NOABS (DMU_OTAR10, DMU_OTARm_t, DMU_OTAR10_ADDR); /* "DMU Overlay Target Address Register 10" */
SFR_NOABS (DMU_OTAR11, DMU_OTARm_t, DMU_OTAR11_ADDR); /* "DMU Overlay Target Address Register 11" */
SFR_NOABS (DMU_OTAR12, DMU_OTARm_t, DMU_OTAR12_ADDR); /* "DMU Overlay Target Address Register 12" */
SFR_NOABS (DMU_OTAR13, DMU_OTARm_t, DMU_OTAR13_ADDR); /* "DMU Overlay Target Address Register 13" */
SFR_NOABS (DMU_OTAR14, DMU_OTARm_t, DMU_OTAR14_ADDR); /* "DMU Overlay Target Address Register 14" */
SFR_NOABS (DMU_OTAR15, DMU_OTARm_t, DMU_OTAR15_ADDR); /* "DMU Overlay Target Address Register 15" */
SFR_NOABS (DMU_OTAR2, DMU_OTARm_t, DMU_OTAR2_ADDR); /* "DMU Overlay Target Address Register 2" */
SFR_NOABS (DMU_OTAR3, DMU_OTARm_t, DMU_OTAR3_ADDR); /* "DMU Overlay Target Address Register 3" */
SFR_NOABS (DMU_OTAR4, DMU_OTARm_t, DMU_OTAR4_ADDR); /* "DMU Overlay Target Address Register 4" */
SFR_NOABS (DMU_OTAR5, DMU_OTARm_t, DMU_OTAR5_ADDR); /* "DMU Overlay Target Address Register 5" */
SFR_NOABS (DMU_OTAR6, DMU_OTARm_t, DMU_OTAR6_ADDR); /* "DMU Overlay Target Address Register 6" */
SFR_NOABS (DMU_OTAR7, DMU_OTARm_t, DMU_OTAR7_ADDR); /* "DMU Overlay Target Address Register 7" */
SFR_NOABS (DMU_OTAR8, DMU_OTARm_t, DMU_OTAR8_ADDR); /* "DMU Overlay Target Address Register 8" */
SFR_NOABS (DMU_OTAR9, DMU_OTARm_t, DMU_OTAR9_ADDR); /* "DMU Overlay Target Address Register 9" */
SFR_NOABS (DMU_RABR0, DMU_RABRm_t, DMU_RABR0_ADDR); /* "DMU Redirected Address Base Register 0" */
SFR_NOABS (DMU_RABR1, DMU_RABRm_t, DMU_RABR1_ADDR); /* "DMU Redirected Address Base Register 1" */
SFR_NOABS (DMU_RABR10, DMU_RABRm_t, DMU_RABR10_ADDR); /* "DMU Redirected Address Base Register 10" */
SFR_NOABS (DMU_RABR11, DMU_RABRm_t, DMU_RABR11_ADDR); /* "DMU Redirected Address Base Register 11" */
SFR_NOABS (DMU_RABR12, DMU_RABRm_t, DMU_RABR12_ADDR); /* "DMU Redirected Address Base Register 12" */
SFR_NOABS (DMU_RABR13, DMU_RABRm_t, DMU_RABR13_ADDR); /* "DMU Redirected Address Base Register 13" */
SFR_NOABS (DMU_RABR14, DMU_RABRm_t, DMU_RABR14_ADDR); /* "DMU Redireced Address Base Register 14" */
SFR_NOABS (DMU_RABR15, DMU_RABRm_t, DMU_RABR15_ADDR); /* "DMU Redirected Address Base Register 15" */
SFR_NOABS (DMU_RABR2, DMU_RABRm_t, DMU_RABR2_ADDR); /* "DMU Redirected Address Base Register 2" */
SFR_NOABS (DMU_RABR3, DMU_RABRm_t, DMU_RABR3_ADDR); /* "DMU Redirected Address Base Register 3" */
SFR_NOABS (DMU_RABR4, DMU_RABRm_t, DMU_RABR4_ADDR); /* "DMU Redirected Address Base Register 4" */
SFR_NOABS (DMU_RABR5, DMU_RABRm_t, DMU_RABR5_ADDR); /* "DMU Redirected Address Base Register 5" */
SFR_NOABS (DMU_RABR6, DMU_RABRm_t, DMU_RABR6_ADDR); /* "DMU Redirected Address Base Register 6" */
SFR_NOABS (DMU_RABR7, DMU_RABRm_t, DMU_RABR7_ADDR); /* "DMU Redirected Address Base Register 7" */
SFR_NOABS (DMU_RABR8, DMU_RABRm_t, DMU_RABR8_ADDR); /* "DMU Redirected Address Base Register 8" */
SFR_NOABS (DMU_RABR9, DMU_RABRm_t, DMU_RABR9_ADDR); /* "DMU Redirected Address Base Register 9" */
SFR_NOABS (DMU_SBRCTR, DMU_SBRCTR_t, DMU_SBRCTR_ADDR); /* "DMU Stand-by SRAM Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_DMU_H_ (block "DMU") */


