/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "PCP" of TriCore TC1784 (20 SFRs) */

#include <tc1784/pcp/addr.h>

#include <tc1784/pcp/masks.h>
#include <tc1784/pcp/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1784/pcp/types.h>
#include <tc1784/pcp/sharetypes.h>

#ifndef _HAVE_TRICORE_PCP_H_
#define _HAVE_TRICORE_PCP_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (PCP_CLC, PCP_CLC_t, PCP_CLC_ADDR);     /* "PCP Clock Control Register" */
SFR_NOABS (PCP_CS, PCP_CS_t, PCP_CS_ADDR);        /* "PCP Control/Status Register" */
SFR_NOABS (PCP_ES, PCP_ES_t, PCP_ES_ADDR);        /* "PCP Error/Debug Status Register" */
SFR_NOABS (PCP_ICON, PCP_ICON_t, PCP_ICON_ADDR);  /* "PCP Interrupt Configuration Register" */
SFR_NOABS (PCP_ICR, PCP_ICR_t, PCP_ICR_ADDR);     /* "PCP Interrupt Control Register" */
SFR_NOABS (PCP_ID, PCP_ID_t, PCP_ID_ADDR);        /* "PCP Module Identification Register" */
SFR_NOABS (PCP_ITR, PCP_ITR_t, PCP_ITR_ADDR);     /* "PCP Interrupt Threshold Control Register" */
SFR_NOABS (PCP_SRC0, PCP_SRCm_t, PCP_SRC0_ADDR);  /* "PCP Service Request Control Register 0" */
SFR_NOABS (PCP_SRC1, PCP_SRCm_t, PCP_SRC1_ADDR);  /* "PCP Service Request Control Register 1" */
SFR_NOABS (PCP_SRC10, PCP_SRC10_t, PCP_SRC10_ADDR); /* "PCP Service Request Control Register 10" */
SFR_NOABS (PCP_SRC11, PCP_SRC11_t, PCP_SRC11_ADDR); /* "PCP Service Request Control Register 11" */
SFR_NOABS (PCP_SRC2, PCP_SRCm_t, PCP_SRC2_ADDR);  /* "PCP Service Request Control Register 2" */
SFR_NOABS (PCP_SRC3, PCP_SRCm_t, PCP_SRC3_ADDR);  /* "PCP Service Request Control Register 3" */
SFR_NOABS (PCP_SRC4, PCP_SRCm_t, PCP_SRC4_ADDR);  /* "PCP Service Request Control Register 4" */
SFR_NOABS (PCP_SRC5, PCP_SRCm_t, PCP_SRC5_ADDR);  /* "PCP Service Request Control Register 5" */
SFR_NOABS (PCP_SRC6, PCP_SRCm_t, PCP_SRC6_ADDR);  /* "PCP Service Request Control Register 6" */
SFR_NOABS (PCP_SRC7, PCP_SRCm_t, PCP_SRC7_ADDR);  /* "PCP Service Request Control Register 7" */
SFR_NOABS (PCP_SRC8, PCP_SRCm_t, PCP_SRC8_ADDR);  /* "PCP Service Request Control Register 8" */
SFR_NOABS (PCP_SRC9, PCP_SRC9_t, PCP_SRC9_ADDR);  /* "PCP Service Request Control Register 9" */
SFR_NOABS (PCP_SSR, PCP_SSR_t, PCP_SSR_ADDR);     /* "PCP Stall Status Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_PCP_H_ (block "PCP") */


