/* (c) HighTec EDV-Systeme GmbH */

/* block "SSC2" of TriCore TC1793 (15 SFRs) */

#include <tc1793/ssc2/addr.h>

#include <tc1793/ssc2/masks.h>
#include <tc1793/ssc0-3/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/ssc2/types.h>
#include <tc1793/ssc0-3/sharetypes.h>

#ifndef _HAVE_TRICORE_SSC2_H_
#define _HAVE_TRICORE_SSC2_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (SSC2_BR, SSCn_BR_t, SSC2_BR_ADDR);     /* "Baud Rate Timer Reload Register" */
SFR_NOABS (SSC2_CLC, SSCn_CLC_t, SSC2_CLC_ADDR);  /* "SSC2 Clock Control Register" */
SFR_NOABS (SSC2_CON, SSCn_CON_t, SSC2_CON_ADDR);  /* "Control Register" */
SFR_NOABS (SSC2_EFM, SSCn_EFM_t, SSC2_EFM_ADDR);  /* "Error Flag Modification Register" */
SFR_NOABS (SSC2_ESRC, SSCn_ESRC_t, SSC2_ESRC_ADDR); /* "Error Interrupt Service Request Control Register" */
SFR_NOABS (SSC2_FDR, SSCn_FDR_t, SSC2_FDR_ADDR);  /* "SSC2 Fractional Divider Register" */
SFR_NOABS (SSC2_ID, SSCn_ID_t, SSC2_ID_ADDR);     /* "Module Identification Register" */
SFR_NOABS (SSC2_PISEL, SSCn_PISEL_t, SSC2_PISEL_ADDR); /* "Port Input Select Register" */
SFR_NOABS (SSC2_RB, SSCn_RB_t, SSC2_RB_ADDR);     /* "Receive Buffer Register" */
SFR_NOABS (SSC2_RSRC, SSCn_RSRC_t, SSC2_RSRC_ADDR); /* "Receive Interrupt Service Request Control Register" */
SFR_NOABS (SSC2_SSOC, SSCn_SSOC_t, SSC2_SSOC_ADDR); /* "Slave Select Output Control Register" */
SFR_NOABS (SSC2_SSOTC, SSCn_SSOTC_t, SSC2_SSOTC_ADDR); /* "Slave Select Output Timing Control Register" */
SFR_NOABS (SSC2_STAT, SSCn_STAT_t, SSC2_STAT_ADDR); /* "Status Register" */
SFR_NOABS (SSC2_TB, SSCn_TB_t, SSC2_TB_ADDR);     /* "Transmit Buffer Register" */
SFR_NOABS (SSC2_TSRC, SSCn_TSRC_t, SSC2_TSRC_ADDR); /* "Transmit Interrupt Service Request Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_SSC2_H_ (block "SSC2") */


