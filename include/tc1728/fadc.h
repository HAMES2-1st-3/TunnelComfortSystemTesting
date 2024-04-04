/* (c) HighTec EDV-Systeme GmbH */

/* block "FADC" of TriCore TC1728 (29 SFRs) */

#include <tc1728/fadc/addr.h>

#include <tc1728/fadc/masks.h>
#include <tc1728/fadc/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1728/fadc/types.h>
#include <tc1728/fadc/sharetypes.h>

#ifndef _HAVE_TRICORE_FADC_H_
#define _HAVE_TRICORE_FADC_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (FADC_ACR0, FADC_ACRm_t, FADC_ACR0_ADDR); /* "Channel 0 Analog Control Register" */
SFR_NOABS (FADC_ACR1, FADC_ACRm_t, FADC_ACR1_ADDR); /* "Channel 1 Analog Control Register" */
SFR_NOABS (FADC_ALR, FADC_ALR_t, FADC_ALR_ADDR);  /* "Alias Register" */
SFR_NOABS (FADC_CFGR0, FADC_CFGRm_t, FADC_CFGR0_ADDR); /* "Channel 0 Configuration Register" */
SFR_NOABS (FADC_CFGR1, FADC_CFGRm_t, FADC_CFGR1_ADDR); /* "Channel 1 Configuration Register" */
SFR_NOABS (FADC_CLC, FADC_CLC_t, FADC_CLC_ADDR);  /* "Clock Control Register" */
SFR_NOABS (FADC_CRR0, FADC_CRRm_t, FADC_CRR0_ADDR); /* "Filter 0 Current Result Register" */
SFR_NOABS (FADC_CRR1, FADC_CRRm_t, FADC_CRR1_ADDR); /* "Filter 1 Current Result Register" */
SFR_NOABS (FADC_CRSR, FADC_CRSR_t, FADC_CRSR_ADDR); /* "Conversion Request Status Register" */
SFR_NOABS (FADC_FCR0, FADC_FCRm_t, FADC_FCR0_ADDR); /* "Filter 0 Control Register" */
SFR_NOABS (FADC_FCR1, FADC_FCRm_t, FADC_FCR1_ADDR); /* "Filter 1 Control Register" */
SFR_NOABS (FADC_FDR, FADC_FDR_t, FADC_FDR_ADDR);  /* "Fractional Divider Register" */
SFR_NOABS (FADC_FMR, FADC_FMR_t, FADC_FMR_ADDR);  /* "Flag Modification Register" */
SFR_NOABS (FADC_FRR0, FADC_FRR0_t, FADC_FRR0_ADDR); /* "Filter 0 Final Result Register" */
SFR_NOABS (FADC_FRR1, FADC_FRR1_t, FADC_FRR1_ADDR); /* "Filter 1 Final Result Register" */
SFR_NOABS (FADC_GCR, FADC_GCR_t, FADC_GCR_ADDR);  /* "Global Control Register" */
SFR_NOABS (FADC_ID, FADC_ID_t, FADC_ID_ADDR);     /* "Module Identification Register" */
SFR_NOABS (FADC_IRR10, FADC_IRRm_t, FADC_IRR10_ADDR); /* "Filter 0 Intermediate Result Register 1" */
SFR_NOABS (FADC_IRR11, FADC_IRR11_t, FADC_IRR11_ADDR); /* "Filter 1 Intermediate Result Register 1" */
SFR_NOABS (FADC_IRR20, FADC_IRRm_t, FADC_IRR20_ADDR); /* "Filter 0 Intermediate Result Register 2" */
SFR_NOABS (FADC_IRR30, FADC_IRRm_t, FADC_IRR30_ADDR); /* "Filter 0 Intermediate Result Register 3" */
SFR_NOABS (FADC_NCTR, FADC_NCTR_t, FADC_NCTR_ADDR); /* "Neighbor Channel Trigger Register" */
SFR_NOABS (FADC_RCH0, FADC_RCHm_t, FADC_RCH0_ADDR); /* "Channel 0 Conversion Result Register" */
SFR_NOABS (FADC_RCH1, FADC_RCHm_t, FADC_RCH1_ADDR); /* "Channel 1 Conversion Result Register" */
SFR_NOABS (FADC_SFRR1, FADC_SFRR1_t, FADC_SFRR1_ADDR); /* "Filter 1 Shifted Final Result Register" */
SFR_NOABS (FADC_SRC0, FADC_SRCm_t, FADC_SRC0_ADDR); /* "Service Request Control Register 0" */
SFR_NOABS (FADC_SRC1, FADC_SRCm_t, FADC_SRC1_ADDR); /* "Service Request Control Register 1" */
SFR_NOABS (FADC_SRC2, FADC_SRCm_t, FADC_SRC2_ADDR); /* "Service Request Control Register 2" */
SFR_NOABS (FADC_SRC3, FADC_SRCm_t, FADC_SRC3_ADDR); /* "Service Request Control Register 3" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_FADC_H_ (block "FADC") */


