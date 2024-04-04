/* (c) HighTec EDV-Systeme GmbH */

/* block "SSC1" of TriCore TC1791 (15 SFRs) */

#include <tc1791/ssc1/addr.h>

#include <tc1791/ssc1/masks.h>
#include <tc1791/ssc0-3/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1791/ssc1/types.h>
#include <tc1791/ssc0-3/sharetypes.h>

#ifndef _HAVE_TRICORE_SSC1_H_
#define _HAVE_TRICORE_SSC1_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (SSC1_BR, SSCn_BR_t, SSC1_BR_ADDR);     /* "Baud Rate Timer Reload Register" */
SFR_NOABS (SSC1_CLC, SSCn_CLC_t, SSC1_CLC_ADDR);  /* "SSC1 Clock Control Register" */
SFR_NOABS (SSC1_CON, SSCn_CON_t, SSC1_CON_ADDR);  /* "Control Register" */
SFR_NOABS (SSC1_EFM, SSCn_EFM_t, SSC1_EFM_ADDR);  /* "Error Flag Modification Register" */
SFR_NOABS (SSC1_ESRC, SSCn_ESRC_t, SSC1_ESRC_ADDR); /* "Error Interrupt Service Request Control Register" */
SFR_NOABS (SSC1_FDR, SSCn_FDR_t, SSC1_FDR_ADDR);  /* "SSC1 Fractional Divider Register" */
SFR_NOABS (SSC1_ID, SSCn_ID_t, SSC1_ID_ADDR);     /* "Module Identification Register" */
SFR_NOABS (SSC1_PISEL, SSCn_PISEL_t, SSC1_PISEL_ADDR); /* "Port Input Select Register" */
SFR_NOABS (SSC1_RB, SSCn_RB_t, SSC1_RB_ADDR);     /* "Receive Buffer Register" */
SFR_NOABS (SSC1_RSRC, SSCn_RSRC_t, SSC1_RSRC_ADDR); /* "Receive Interrupt Service Request Control Register" */
SFR_NOABS (SSC1_SSOC, SSCn_SSOC_t, SSC1_SSOC_ADDR); /* "Slave Select Output Control Register" */
SFR_NOABS (SSC1_SSOTC, SSCn_SSOTC_t, SSC1_SSOTC_ADDR); /* "Slave Select Output Timing Control Register" */
SFR_NOABS (SSC1_STAT, SSCn_STAT_t, SSC1_STAT_ADDR); /* "Status Register" */
SFR_NOABS (SSC1_TB, SSCn_TB_t, SSC1_TB_ADDR);     /* "Transmit Buffer Register" */
SFR_NOABS (SSC1_TSRC, SSCn_TSRC_t, SSC1_TSRC_ADDR); /* "Transmit Interrupt Service Request Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_SSC1_H_ (block "SSC1") */


