/* (c) HighTec EDV-Systeme GmbH */

/* block "SSCG0" of TriCore TC1793 (19 SFRs) */

#include <tc1793/sscg0/addr.h>

#include <tc1793/sscg0/masks.h>
#include <tc1793/sscg0-3/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/sscg0/types.h>
#include <tc1793/sscg0-3/sharetypes.h>

#ifndef _HAVE_TRICORE_SSCG0_H_
#define _HAVE_TRICORE_SSCG0_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (SSCG0_BR, SSCGn_BR_t, SSCG0_BR_ADDR);  /* "Baud Rate Timer Reload Register" */
SFR_NOABS (SSCG0_CLC, SSCGn_CLC_t, SSCG0_CLC_ADDR); /* "Clock Control Register" */
SFR_NOABS (SSCG0_CON, SSCGn_CON_t, SSCG0_CON_ADDR); /* "Control Register" */
SFR_NOABS (SSCG0_EFM, SSCGn_EFM_t, SSCG0_EFM_ADDR); /* "Error Flag Modification Register" */
SFR_NOABS (SSCG0_FDR, SSCGn_FDR_t, SSCG0_FDR_ADDR); /* "Fractional Divider Register" */
SFR_NOABS (SSCG0_GEFM, SSCGn_GEFM_t, SSCG0_GEFM_ADDR); /* "Guardian Error Flag Modification Register" */
SFR_NOABS (SSCG0_GEN, SSCGn_GEN_t, SSCG0_GEN_ADDR); /* "Guardian Enable Register" */
SFR_NOABS (SSCG0_GSRC, SSCGn_GSRC_t, SSCG0_GSRC_ADDR); /* "Guardian Interrupt Service Request Control Register" */
SFR_NOABS (SSCG0_GSTAT, SSCGn_GSTAT_t, SSCG0_GSTAT_ADDR); /* "Guardian Status Register" */
SFR_NOABS (SSCG0_ID, SSCGn_ID_t, SSCG0_ID_ADDR);  /* "Module Identification Register" */
SFR_NOABS (SSCG0_PISEL, SSCGn_PISEL_t, SSCG0_PISEL_ADDR); /* "Port Input Select Register" */
SFR_NOABS (SSCG0_RB, SSCGn_RB_t, SSCG0_RB_ADDR);  /* "Receive Buffer Register" */
SFR_NOABS (SSCG0_RBSNAP, SSCGn_RBSNAP_t, SSCG0_RBSNAP_ADDR); /* "Receive Buffer Snapshot Register" */
SFR_NOABS (SSCG0_SSOC, SSCGn_SSOC_t, SSCG0_SSOC_ADDR); /* "Slave Select Output Control Register" */
SFR_NOABS (SSCG0_SSOTC, SSCGn_SSOTC_t, SSCG0_SSOTC_ADDR); /* "Slave Select Output Timing Control Register" */
SFR_NOABS (SSCG0_STAT, SSCGn_STAT_t, SSCG0_STAT_ADDR); /* "Status Register" */
SFR_NOABS (SSCG0_TB, SSCGn_TB_t, SSCG0_TB_ADDR);  /* "Transmit Buffer Register" */
SFR_NOABS (SSCG0_TB1, SSCGn_TB1_t, SSCG0_TB1_ADDR); /* "Transmit Buffer Compare Register" */
SFR_NOABS (SSCG0_TB1SNAP, SSCGn_TB1SNAP_t, SSCG0_TB1SNAP_ADDR); /* "Transmit Buffer Snapshot Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_SSCG0_H_ (block "SSCG0") */


