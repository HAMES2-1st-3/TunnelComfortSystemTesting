/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "SSC0 LL0" of TriCore TC1766B (15 SFRs) */

#include <tc1766b/ssc0/addr.h>

#include <tc1766b/ssc0/masks.h>
#include <tc1766b/ssc0_ssc1/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1766b/ssc0/types.h>
#include <tc1766b/ssc0_ssc1/sharetypes.h>

#ifndef _HAVE_TRICORE_SSC0_H_
#define _HAVE_TRICORE_SSC0_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (SSC0_BR, SSCn_BR_t, SSC0_BR_ADDR);     /* "SSC Baudrate Timer Reload Register" */
SFR_NOABS (SSC0_CLC, SSCn_CLC_t, SSC0_CLC_ADDR);  /* "SSC Clock Control Register" */
SFR_NOABS (SSC0_CON, SSCn_CON_t, SSC0_CON_ADDR);  /* "SSC Control Register" */
SFR_NOABS (SSC0_EFM, SSCn_EFM_t, SSC0_EFM_ADDR);  /* "SSC Error Flag Modification Register" */
SFR_NOABS (SSC0_ESRC, SSCn_ESRC_t, SSC0_ESRC_ADDR); /* "SSC Error Interrupt Service Request Control Register" */
SFR_NOABS (SSC0_FDR, SSCn_FDR_t, SSC0_FDR_ADDR);  /* "SSC Fractional Divider Register" */
SFR_NOABS (SSC0_ID, SSCn_ID_t, SSC0_ID_ADDR);     /* "SSC Module Identification Register" */
SFR_NOABS (SSC0_PISEL, SSCn_PISEL_t, SSC0_PISEL_ADDR); /* "SSC Port Input Select Register" */
SFR_NOABS (SSC0_RB, SSCn_RB_t, SSC0_RB_ADDR);     /* "SSC Receive Buffer Register" */
SFR_NOABS (SSC0_RSRC, SSCn_RSRC_t, SSC0_RSRC_ADDR); /* "SSC Receive Interrupt Service Request Control Register" */
SFR_NOABS (SSC0_SSOC, SSCn_SSOC_t, SSC0_SSOC_ADDR); /* "Slave Select Output Control Register" */
SFR_NOABS (SSC0_SSOTC, SSCn_SSOTC_t, SSC0_SSOTC_ADDR); /* "Slave Select Output Timing Control Register" */
SFR_NOABS (SSC0_STAT, SSCn_STAT_t, SSC0_STAT_ADDR); /* "SSC Status Register" */
SFR_NOABS (SSC0_TB, SSCn_TB_t, SSC0_TB_ADDR);     /* "SSC Transmit Buffer Register" */
SFR_NOABS (SSC0_TSRC, SSCn_TSRC_t, SSC0_TSRC_ADDR); /* "SSC Transmit Interrupt Service Request Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_SSC0_H_ (block "SSC0 LL0") */


