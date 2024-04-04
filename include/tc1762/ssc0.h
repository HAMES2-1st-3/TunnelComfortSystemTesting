/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "SSC0 LL0" of TriCore TC1762 (15 SFRs) */

#include <tc1762/ssc0/addr.h>

#include <tc1762/ssc0/masks.h>
#include <tc1762/ssc0/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1762/ssc0/types.h>
#include <tc1762/ssc0/sharetypes.h>

#ifndef _HAVE_TRICORE_SSC0_H_
#define _HAVE_TRICORE_SSC0_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (SSC0_BR, SSC0_BR_t, SSC0_BR_ADDR);     /* "SSC Baudrate Timer Reload Register" */
SFR_NOABS (SSC0_CLC, SSC0_CLC_t, SSC0_CLC_ADDR);  /* "SSC Clock Control Register" */
SFR_NOABS (SSC0_CON, SSC0_CON_t, SSC0_CON_ADDR);  /* "SSC Control Register" */
SFR_NOABS (SSC0_EFM, SSC0_EFM_t, SSC0_EFM_ADDR);  /* "SSC Error Flag Modification Register" */
SFR_NOABS (SSC0_ESRC, SSC0_ESRC_t, SSC0_ESRC_ADDR); /* "SSC Error Interrupt Service Request Control Register" */
SFR_NOABS (SSC0_FDR, SSC0_FDR_t, SSC0_FDR_ADDR);  /* "SSC Fractional Divider Register" */
SFR_NOABS (SSC0_ID, SSC0_ID_t, SSC0_ID_ADDR);     /* "SSC Module Identification Register" */
SFR_NOABS (SSC0_PISEL, SSC0_PISEL_t, SSC0_PISEL_ADDR); /* "SSC Port Input Select Register" */
SFR_NOABS (SSC0_RB, SSC0_RB_t, SSC0_RB_ADDR);     /* "SSC Receive Buffer Register" */
SFR_NOABS (SSC0_RSRC, SSC0_RSRC_t, SSC0_RSRC_ADDR); /* "SSC Receive Interrupt Service Request Control Register" */
SFR_NOABS (SSC0_SSOC, SSC0_SSOC_t, SSC0_SSOC_ADDR); /* "Slave Select Output Control Register" */
SFR_NOABS (SSC0_SSOTC, SSC0_SSOTC_t, SSC0_SSOTC_ADDR); /* "Slave Select Output Timing Control Register" */
SFR_NOABS (SSC0_STAT, SSC0_STAT_t, SSC0_STAT_ADDR); /* "SSC Status Register" */
SFR_NOABS (SSC0_TB, SSC0_TB_t, SSC0_TB_ADDR);     /* "SSC Transmit Buffer Register" */
SFR_NOABS (SSC0_TSRC, SSC0_TSRC_t, SSC0_TSRC_ADDR); /* "SSC Transmit Interrupt Service Request Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_SSC0_H_ (block "SSC0 LL0") */


