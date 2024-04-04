/* (c) HighTec EDV-Systeme GmbH */

/* block "SSC3" of TriCore TC1724 (15 SFRs) */

#include <tc1724/ssc3/addr.h>

#include <tc1724/ssc3/masks.h>
#include <tc1724/ssc0-3/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1724/ssc3/types.h>
#include <tc1724/ssc0-3/sharetypes.h>

#ifndef _HAVE_TRICORE_SSC3_H_
#define _HAVE_TRICORE_SSC3_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (SSC3_BR, SSCn_BR_t, SSC3_BR_ADDR);     /* "Baud Rate Timer Reload Register" */
SFR_NOABS (SSC3_CLC, SSCn_CLC_t, SSC3_CLC_ADDR);  /* "SSC3 Clock Control Register" */
SFR_NOABS (SSC3_CON, SSCn_CON_t, SSC3_CON_ADDR);  /* "Control Register" */
SFR_NOABS (SSC3_EFM, SSCn_EFM_t, SSC3_EFM_ADDR);  /* "Error Flag Modification Register" */
SFR_NOABS (SSC3_ESRC, SSCn_ESRC_t, SSC3_ESRC_ADDR); /* "Error Interrupt Service Request Control Register" */
SFR_NOABS (SSC3_FDR, SSCn_FDR_t, SSC3_FDR_ADDR);  /* "SSC3 Fractional Divider Register" */
SFR_NOABS (SSC3_ID, SSCn_ID_t, SSC3_ID_ADDR);     /* "Module Identification Register" */
SFR_NOABS (SSC3_PISEL, SSCn_PISEL_t, SSC3_PISEL_ADDR); /* "Port Input Select Register" */
SFR_NOABS (SSC3_RB, SSCn_RB_t, SSC3_RB_ADDR);     /* "Receive Buffer Register" */
SFR_NOABS (SSC3_RSRC, SSCn_RSRC_t, SSC3_RSRC_ADDR); /* "Receive Interrupt Service Request Control Register" */
SFR_NOABS (SSC3_SSOC, SSCn_SSOC_t, SSC3_SSOC_ADDR); /* "Slave Select Output Control Register" */
SFR_NOABS (SSC3_SSOTC, SSCn_SSOTC_t, SSC3_SSOTC_ADDR); /* "Slave Select Output Timing Control Register" */
SFR_NOABS (SSC3_STAT, SSCn_STAT_t, SSC3_STAT_ADDR); /* "Status Register" */
SFR_NOABS (SSC3_TB, SSCn_TB_t, SSC3_TB_ADDR);     /* "Transmit Buffer Register" */
SFR_NOABS (SSC3_TSRC, SSCn_TSRC_t, SSC3_TSRC_ADDR); /* "Transmit Interrupt Service Request Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_SSC3_H_ (block "SSC3") */


