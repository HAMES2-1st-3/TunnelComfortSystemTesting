/* (c) HighTec EDV-Systeme GmbH */

/* block "SSCG2" of TriCore TC1793 (19 SFRs) */

#include <tc1793/sscg2/addr.h>

#include <tc1793/sscg2/masks.h>
#include <tc1793/sscg0-3/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/sscg2/types.h>
#include <tc1793/sscg0-3/sharetypes.h>

#ifndef _HAVE_TRICORE_SSCG2_H_
#define _HAVE_TRICORE_SSCG2_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (SSCG2_BR, SSCGn_BR_t, SSCG2_BR_ADDR);  /* "Baud Rate Timer Reload Register" */
SFR_NOABS (SSCG2_CLC, SSCGn_CLC_t, SSCG2_CLC_ADDR); /* "Clock Control Register" */
SFR_NOABS (SSCG2_CON, SSCGn_CON_t, SSCG2_CON_ADDR); /* "Control Register" */
SFR_NOABS (SSCG2_EFM, SSCGn_EFM_t, SSCG2_EFM_ADDR); /* "Error Flag Modification Register" */
SFR_NOABS (SSCG2_FDR, SSCGn_FDR_t, SSCG2_FDR_ADDR); /* "Fractional Divider Register" */
SFR_NOABS (SSCG2_GEFM, SSCGn_GEFM_t, SSCG2_GEFM_ADDR); /* "Guardian Error Flag Modification Register" */
SFR_NOABS (SSCG2_GEN, SSCGn_GEN_t, SSCG2_GEN_ADDR); /* "Guardian Enable Register" */
SFR_NOABS (SSCG2_GSRC, SSCGn_GSRC_t, SSCG2_GSRC_ADDR); /* "Guardian Interrupt Service Request Control Register" */
SFR_NOABS (SSCG2_GSTAT, SSCGn_GSTAT_t, SSCG2_GSTAT_ADDR); /* "Guardian Status Register" */
SFR_NOABS (SSCG2_ID, SSCGn_ID_t, SSCG2_ID_ADDR);  /* "Module Identification Register" */
SFR_NOABS (SSCG2_PISEL, SSCGn_PISEL_t, SSCG2_PISEL_ADDR); /* "Port Input Select Register" */
SFR_NOABS (SSCG2_RB, SSCGn_RB_t, SSCG2_RB_ADDR);  /* "Receive Buffer Register" */
SFR_NOABS (SSCG2_RBSNAP, SSCGn_RBSNAP_t, SSCG2_RBSNAP_ADDR); /* "Receive Buffer Snapshot Register" */
SFR_NOABS (SSCG2_SSOC, SSCGn_SSOC_t, SSCG2_SSOC_ADDR); /* "Slave Select Output Control Register" */
SFR_NOABS (SSCG2_SSOTC, SSCGn_SSOTC_t, SSCG2_SSOTC_ADDR); /* "Slave Select Output Timing Control Register" */
SFR_NOABS (SSCG2_STAT, SSCGn_STAT_t, SSCG2_STAT_ADDR); /* "Status Register" */
SFR_NOABS (SSCG2_TB, SSCGn_TB_t, SSCG2_TB_ADDR);  /* "Transmit Buffer Register" */
SFR_NOABS (SSCG2_TB1, SSCGn_TB1_t, SSCG2_TB1_ADDR); /* "Transmit Buffer Compare Register" */
SFR_NOABS (SSCG2_TB1SNAP, SSCGn_TB1SNAP_t, SSCG2_TB1SNAP_ADDR); /* "Transmit Buffer Snapshot Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_SSCG2_H_ (block "SSCG2") */


