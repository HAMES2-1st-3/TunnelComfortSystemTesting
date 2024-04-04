/* (c) HighTec EDV-Systeme GmbH */

/* block "SSCG1" of TriCore TC1793 (19 SFRs) */

#include <tc1793/sscg1/addr.h>

#include <tc1793/sscg1/masks.h>
#include <tc1793/sscg0-3/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/sscg1/types.h>
#include <tc1793/sscg0-3/sharetypes.h>

#ifndef _HAVE_TRICORE_SSCG1_H_
#define _HAVE_TRICORE_SSCG1_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (SSCG1_BR, SSCGn_BR_t, SSCG1_BR_ADDR);  /* "Baud Rate Timer Reload Register" */
SFR_NOABS (SSCG1_CLC, SSCGn_CLC_t, SSCG1_CLC_ADDR); /* "Clock Control Register" */
SFR_NOABS (SSCG1_CON, SSCGn_CON_t, SSCG1_CON_ADDR); /* "Control Register" */
SFR_NOABS (SSCG1_EFM, SSCGn_EFM_t, SSCG1_EFM_ADDR); /* "Error Flag Modification Register" */
SFR_NOABS (SSCG1_FDR, SSCGn_FDR_t, SSCG1_FDR_ADDR); /* "Fractional Divider Register" */
SFR_NOABS (SSCG1_GEFM, SSCGn_GEFM_t, SSCG1_GEFM_ADDR); /* "Guardian Error Flag Modification Register" */
SFR_NOABS (SSCG1_GEN, SSCGn_GEN_t, SSCG1_GEN_ADDR); /* "Guardian Enable Register" */
SFR_NOABS (SSCG1_GSRC, SSCGn_GSRC_t, SSCG1_GSRC_ADDR); /* "Guardian Interrupt Service Request Control Register" */
SFR_NOABS (SSCG1_GSTAT, SSCGn_GSTAT_t, SSCG1_GSTAT_ADDR); /* "Guardian Status Register" */
SFR_NOABS (SSCG1_ID, SSCGn_ID_t, SSCG1_ID_ADDR);  /* "Module Identification Register" */
SFR_NOABS (SSCG1_PISEL, SSCGn_PISEL_t, SSCG1_PISEL_ADDR); /* "Port Input Select Register" */
SFR_NOABS (SSCG1_RB, SSCGn_RB_t, SSCG1_RB_ADDR);  /* "Receive Buffer Register" */
SFR_NOABS (SSCG1_RBSNAP, SSCGn_RBSNAP_t, SSCG1_RBSNAP_ADDR); /* "Receive Buffer Snapshot Register" */
SFR_NOABS (SSCG1_SSOC, SSCGn_SSOC_t, SSCG1_SSOC_ADDR); /* "Slave Select Output Control Register" */
SFR_NOABS (SSCG1_SSOTC, SSCGn_SSOTC_t, SSCG1_SSOTC_ADDR); /* "Slave Select Output Timing Control Register" */
SFR_NOABS (SSCG1_STAT, SSCGn_STAT_t, SSCG1_STAT_ADDR); /* "Status Register" */
SFR_NOABS (SSCG1_TB, SSCGn_TB_t, SSCG1_TB_ADDR);  /* "Transmit Buffer Register" */
SFR_NOABS (SSCG1_TB1, SSCGn_TB1_t, SSCG1_TB1_ADDR); /* "Transmit Buffer Compare Register" */
SFR_NOABS (SSCG1_TB1SNAP, SSCGn_TB1SNAP_t, SSCG1_TB1SNAP_ADDR); /* "Transmit Buffer Snapshot Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_SSCG1_H_ (block "SSCG1") */


