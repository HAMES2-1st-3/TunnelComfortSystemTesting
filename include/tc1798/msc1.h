/* (c) HighTec EDV-Systeme GmbH */

/* block "MSC1" of TriCore TC1798 (21 SFRs) */

#include <tc1798/msc1/addr.h>

#include <tc1798/msc1/masks.h>
#include <tc1798/msc0-1/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1798/msc1/types.h>
#include <tc1798/msc0-1/sharetypes.h>

#ifndef _HAVE_TRICORE_MSC1_H_
#define _HAVE_TRICORE_MSC1_H_

#include <tricore-abs-noabs.h>

SFR_ABS (MSC1_CLC, MSCn_CLC_t, MSC1_CLC_ADDR);    /* "MSC1 Clock Control Register" */
SFR_ABS (MSC1_DC, MSCn_DC_t, MSC1_DC_ADDR);       /* "Downstream Command Register" */
SFR_ABS (MSC1_DD, MSCn_DD_t, MSC1_DD_ADDR);       /* "Downstream Data Register" */
SFR_ABS (MSC1_DSC, MSCn_DSC_t, MSC1_DSC_ADDR);    /* "Downstream Control Register" */
SFR_ABS (MSC1_DSDSH, MSCn_DSDSH_t, MSC1_DSDSH_ADDR); /* "Downstream Select Data Source High Register" */
SFR_ABS (MSC1_DSDSL, MSCn_DSDSL_t, MSC1_DSDSL_ADDR); /* "Downstream Select Data Source Low Register" */
SFR_ABS (MSC1_DSS, MSCn_DSS_t, MSC1_DSS_ADDR);    /* "Downstream Status Register" */
SFR_ABS (MSC1_ESR, MSCn_ESR_t, MSC1_ESR_ADDR);    /* "Emergency Stop Register" */
SFR_ABS (MSC1_FDR, MSCn_FDR_t, MSC1_FDR_ADDR);    /* "MSC1 Fractional Divider Register" */
SFR_ABS (MSC1_ICR, MSCn_ICR_t, MSC1_ICR_ADDR);    /* "Interrupt Control Register" */
SFR_ABS (MSC1_ID, MSCn_ID_t, MSC1_ID_ADDR);       /* "Module Identification Register" */
SFR_ABS (MSC1_ISC, MSCn_ISC_t, MSC1_ISC_ADDR);    /* "Interrupt Set Clear Register" */
SFR_ABS (MSC1_ISR, MSCn_ISR_t, MSC1_ISR_ADDR);    /* "Interrupt Status Register" */
SFR_ABS (MSC1_OCR, MSCn_OCR_t, MSC1_OCR_ADDR);    /* "Output Control Register" */
SFR_ABS (MSC1_SRC0, MSCn_SRCm_t, MSC1_SRC0_ADDR); /* "Service Request Control Register 0" */
SFR_ABS (MSC1_SRC1, MSCn_SRCm_t, MSC1_SRC1_ADDR); /* "Service Request Control Register 1" */
SFR_ABS (MSC1_UD0, MSCn_UDm_t, MSC1_UD0_ADDR);    /* "Upstream Data Register 0" */
SFR_ABS (MSC1_UD1, MSCn_UDm_t, MSC1_UD1_ADDR);    /* "Upstream Data Register 1" */
SFR_ABS (MSC1_UD2, MSCn_UDm_t, MSC1_UD2_ADDR);    /* "Upstream Data Register 2" */
SFR_ABS (MSC1_UD3, MSCn_UDm_t, MSC1_UD3_ADDR);    /* "Upstream Data Register 3" */
SFR_ABS (MSC1_USR, MSCn_USR_t, MSC1_USR_ADDR);    /* "Upstream Status Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_MSC1_H_ (block "MSC1") */


