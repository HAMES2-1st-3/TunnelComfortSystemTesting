/* (c) HighTec EDV-Systeme GmbH */

/* block "SSCG3" of TriCore TC1793 (19 SFRs) */

#include <tc1793/sscg3/addr.h>

#include <tc1793/sscg3/masks.h>
#include <tc1793/sscg0-3/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/sscg3/types.h>
#include <tc1793/sscg0-3/sharetypes.h>

#ifndef _HAVE_TRICORE_SSCG3_H_
#define _HAVE_TRICORE_SSCG3_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (SSCG3_BR, SSCGn_BR_t, SSCG3_BR_ADDR);  /* "Baud Rate Timer Reload Register" */
SFR_NOABS (SSCG3_CLC, SSCGn_CLC_t, SSCG3_CLC_ADDR); /* "Clock Control Register" */
SFR_NOABS (SSCG3_CON, SSCGn_CON_t, SSCG3_CON_ADDR); /* "Control Register" */
SFR_NOABS (SSCG3_EFM, SSCGn_EFM_t, SSCG3_EFM_ADDR); /* "Error Flag Modification Register" */
SFR_NOABS (SSCG3_FDR, SSCGn_FDR_t, SSCG3_FDR_ADDR); /* "Fractional Divider Register" */
SFR_NOABS (SSCG3_GEFM, SSCGn_GEFM_t, SSCG3_GEFM_ADDR); /* "Guardian Error Flag Modification Register" */
SFR_NOABS (SSCG3_GEN, SSCGn_GEN_t, SSCG3_GEN_ADDR); /* "Guardian Enable Register" */
SFR_NOABS (SSCG3_GSRC, SSCGn_GSRC_t, SSCG3_GSRC_ADDR); /* "Guardian Interrupt Service Request Control Register" */
SFR_NOABS (SSCG3_GSTAT, SSCGn_GSTAT_t, SSCG3_GSTAT_ADDR); /* "Guardian Status Register" */
SFR_NOABS (SSCG3_ID, SSCGn_ID_t, SSCG3_ID_ADDR);  /* "Module Identification Register" */
SFR_NOABS (SSCG3_PISEL, SSCGn_PISEL_t, SSCG3_PISEL_ADDR); /* "Port Input Select Register" */
SFR_NOABS (SSCG3_RB, SSCGn_RB_t, SSCG3_RB_ADDR);  /* "Receive Buffer Register" */
SFR_NOABS (SSCG3_RBSNAP, SSCGn_RBSNAP_t, SSCG3_RBSNAP_ADDR); /* "Receive Buffer Snapshot Register" */
SFR_NOABS (SSCG3_SSOC, SSCGn_SSOC_t, SSCG3_SSOC_ADDR); /* "Slave Select Output Control Register" */
SFR_NOABS (SSCG3_SSOTC, SSCGn_SSOTC_t, SSCG3_SSOTC_ADDR); /* "Slave Select Output Timing Control Register" */
SFR_NOABS (SSCG3_STAT, SSCGn_STAT_t, SSCG3_STAT_ADDR); /* "Status Register" */
SFR_NOABS (SSCG3_TB, SSCGn_TB_t, SSCG3_TB_ADDR);  /* "Transmit Buffer Register" */
SFR_NOABS (SSCG3_TB1, SSCGn_TB1_t, SSCG3_TB1_ADDR); /* "Transmit Buffer Compare Register" */
SFR_NOABS (SSCG3_TB1SNAP, SSCGn_TB1SNAP_t, SSCG3_TB1SNAP_ADDR); /* "Transmit Buffer Snapshot Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_SSCG3_H_ (block "SSCG3") */


