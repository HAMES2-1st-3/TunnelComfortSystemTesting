/* (c) HighTec EDV-Systeme GmbH */

/* block "OVC" of TriCore TC1791 (50 SFRs) */

#include <tc1791/ovc/addr.h>

#include <tc1791/ovc/masks.h>
#include <tc1791/ovc/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1791/ovc/types.h>
#include <tc1791/ovc/sharetypes.h>

#ifndef _HAVE_TRICORE_OVC_H_
#define _HAVE_TRICORE_OVC_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (OVC_OCON, OVC_OCON_t, OVC_OCON_ADDR);  /* "Overlay Control Register" */
SFR_NOABS (OVC_OENABLE, OVC_OENABLE_t, OVC_OENABLE_ADDR); /* "Overlay Enable Register" */
SFR_NOABS (OVC_OMASK0, OVC_OMASKm_t, OVC_OMASK0_ADDR); /* "Overlay Mask Register 0" */
SFR_NOABS (OVC_OMASK1, OVC_OMASKm_t, OVC_OMASK1_ADDR); /* "Overlay Mask Register 1" */
SFR_NOABS (OVC_OMASK10, OVC_OMASKm_t, OVC_OMASK10_ADDR); /* "Overlay Mask Register 10" */
SFR_NOABS (OVC_OMASK11, OVC_OMASKm_t, OVC_OMASK11_ADDR); /* "Overlay Mask Register 11" */
SFR_NOABS (OVC_OMASK12, OVC_OMASKm_t, OVC_OMASK12_ADDR); /* "Overlay Mask Register 12" */
SFR_NOABS (OVC_OMASK13, OVC_OMASKm_t, OVC_OMASK13_ADDR); /* "Overlay Mask Register 13" */
SFR_NOABS (OVC_OMASK14, OVC_OMASKm_t, OVC_OMASK14_ADDR); /* "Overlay Mask Register 14" */
SFR_NOABS (OVC_OMASK15, OVC_OMASKm_t, OVC_OMASK15_ADDR); /* "Overlay Mask Register 15" */
SFR_NOABS (OVC_OMASK2, OVC_OMASKm_t, OVC_OMASK2_ADDR); /* "Overlay Mask Register 2" */
SFR_NOABS (OVC_OMASK3, OVC_OMASKm_t, OVC_OMASK3_ADDR); /* "Overlay Mask Register 3" */
SFR_NOABS (OVC_OMASK4, OVC_OMASKm_t, OVC_OMASK4_ADDR); /* "Overlay Mask Register 4" */
SFR_NOABS (OVC_OMASK5, OVC_OMASKm_t, OVC_OMASK5_ADDR); /* "Overlay Mask Register 5" */
SFR_NOABS (OVC_OMASK6, OVC_OMASKm_t, OVC_OMASK6_ADDR); /* "Overlay Mask Register 6" */
SFR_NOABS (OVC_OMASK7, OVC_OMASKm_t, OVC_OMASK7_ADDR); /* "Overlay Mask Register 7" */
SFR_NOABS (OVC_OMASK8, OVC_OMASKm_t, OVC_OMASK8_ADDR); /* "Overlay Mask Register 8" */
SFR_NOABS (OVC_OMASK9, OVC_OMASKm_t, OVC_OMASK9_ADDR); /* "Overlay Mask Register 9" */
SFR_NOABS (OVC_OTAR0, OVC_OTARm_t, OVC_OTAR0_ADDR); /* "Overlay Target Address Register 0" */
SFR_NOABS (OVC_OTAR1, OVC_OTARm_t, OVC_OTAR1_ADDR); /* "Overlay Target Address Register 1" */
SFR_NOABS (OVC_OTAR10, OVC_OTARm_t, OVC_OTAR10_ADDR); /* "Overlay Target Address Register 10" */
SFR_NOABS (OVC_OTAR11, OVC_OTARm_t, OVC_OTAR11_ADDR); /* "Overlay Target Address Register 11" */
SFR_NOABS (OVC_OTAR12, OVC_OTARm_t, OVC_OTAR12_ADDR); /* "Overlay Target Address Register 12" */
SFR_NOABS (OVC_OTAR13, OVC_OTARm_t, OVC_OTAR13_ADDR); /* "Overlay Target Address Register 13" */
SFR_NOABS (OVC_OTAR14, OVC_OTARm_t, OVC_OTAR14_ADDR); /* "Overlay Target Address Register 14" */
SFR_NOABS (OVC_OTAR15, OVC_OTARm_t, OVC_OTAR15_ADDR); /* "Overlay Target Address Register 15" */
SFR_NOABS (OVC_OTAR2, OVC_OTARm_t, OVC_OTAR2_ADDR); /* "Overlay Target Address Register 2" */
SFR_NOABS (OVC_OTAR3, OVC_OTARm_t, OVC_OTAR3_ADDR); /* "Overlay Target Address Register 3" */
SFR_NOABS (OVC_OTAR4, OVC_OTARm_t, OVC_OTAR4_ADDR); /* "Overlay Target Address Register 4" */
SFR_NOABS (OVC_OTAR5, OVC_OTARm_t, OVC_OTAR5_ADDR); /* "Overlay Target Address Register 5" */
SFR_NOABS (OVC_OTAR6, OVC_OTARm_t, OVC_OTAR6_ADDR); /* "Overlay Target Address Register 6" */
SFR_NOABS (OVC_OTAR7, OVC_OTARm_t, OVC_OTAR7_ADDR); /* "Overlay Target Address Register 7" */
SFR_NOABS (OVC_OTAR8, OVC_OTARm_t, OVC_OTAR8_ADDR); /* "Overlay Target Address Register 8" */
SFR_NOABS (OVC_OTAR9, OVC_OTARm_t, OVC_OTAR9_ADDR); /* "Overlay Target Address Register 9" */
SFR_NOABS (OVC_RABR0, OVC_RABRm_t, OVC_RABR0_ADDR); /* "Redirected Address Base Register 0" */
SFR_NOABS (OVC_RABR1, OVC_RABRm_t, OVC_RABR1_ADDR); /* "Redirected Address Base Register 1" */
SFR_NOABS (OVC_RABR10, OVC_RABRm_t, OVC_RABR10_ADDR); /* "Redirected Address Base Register 10" */
SFR_NOABS (OVC_RABR11, OVC_RABRm_t, OVC_RABR11_ADDR); /* "Redirected Address Base Register 11" */
SFR_NOABS (OVC_RABR12, OVC_RABRm_t, OVC_RABR12_ADDR); /* "Redirected Address Base Register 12" */
SFR_NOABS (OVC_RABR13, OVC_RABRm_t, OVC_RABR13_ADDR); /* "Redirected Address Base Register 13" */
SFR_NOABS (OVC_RABR14, OVC_RABRm_t, OVC_RABR14_ADDR); /* "Redirected Address Base Register 14" */
SFR_NOABS (OVC_RABR15, OVC_RABRm_t, OVC_RABR15_ADDR); /* "Redirected Address Base Register 15" */
SFR_NOABS (OVC_RABR2, OVC_RABRm_t, OVC_RABR2_ADDR); /* "Redirected Address Base Register 2" */
SFR_NOABS (OVC_RABR3, OVC_RABRm_t, OVC_RABR3_ADDR); /* "Redirected Address Base Register 3" */
SFR_NOABS (OVC_RABR4, OVC_RABRm_t, OVC_RABR4_ADDR); /* "Redirected Address Base Register 4" */
SFR_NOABS (OVC_RABR5, OVC_RABRm_t, OVC_RABR5_ADDR); /* "Redirected Address Base Register 5" */
SFR_NOABS (OVC_RABR6, OVC_RABRm_t, OVC_RABR6_ADDR); /* "Redirected Address Base Register 6" */
SFR_NOABS (OVC_RABR7, OVC_RABRm_t, OVC_RABR7_ADDR); /* "Redirected Address Base Register 7" */
SFR_NOABS (OVC_RABR8, OVC_RABRm_t, OVC_RABR8_ADDR); /* "Redirected Address Base Register 8" */
SFR_NOABS (OVC_RABR9, OVC_RABRm_t, OVC_RABR9_ADDR); /* "Redirected Address Base Register 9" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_OVC_H_ (block "OVC") */


