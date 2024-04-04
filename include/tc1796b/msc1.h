/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MSC1" of TriCore TC1796B (21 SFRs) */

#include <tc1796b/msc1/addr.h>

#include <tc1796b/msc1/masks.h>
#include <tc1796b/msc0_msc1/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1796b/msc1/types.h>
#include <tc1796b/msc0_msc1/sharetypes.h>

#ifndef _HAVE_TRICORE_MSC1_H_
#define _HAVE_TRICORE_MSC1_H_

#include <tricore-abs-noabs.h>

SFR_ABS (MSC1_CLC, MSCn_CLC_t, MSC1_CLC_ADDR);    /* "MSC1 Clock Control Register" */
SFR_ABS (MSC1_DC, MSCn_DC_t, MSC1_DC_ADDR);       /* "MSC1 Downstream Command Register" */
SFR_ABS (MSC1_DD, MSCn_DD_t, MSC1_DD_ADDR);       /* "MSC1 Downstream Data Register" */
SFR_ABS (MSC1_DSC, MSCn_DSC_t, MSC1_DSC_ADDR);    /* "MSC1 Downstream Control Register" */
SFR_ABS (MSC1_DSDSH, MSCn_DSDSH_t, MSC1_DSDSH_ADDR); /* "MSC1 Downstream Select Data Source High Register" */
SFR_ABS (MSC1_DSDSL, MSCn_DSDSL_t, MSC1_DSDSL_ADDR); /* "MSC1 Downstream Select Data Source Low Register" */
SFR_ABS (MSC1_DSS, MSCn_DSS_t, MSC1_DSS_ADDR);    /* "MSC1 Downstream Status Register" */
SFR_ABS (MSC1_ESR, MSCn_ESR_t, MSC1_ESR_ADDR);    /* "MSC1 Emergency Stop Register" */
SFR_ABS (MSC1_FDR, MSCn_FDR_t, MSC1_FDR_ADDR);    /* "MSC1 Fractional Divider Register" */
SFR_ABS (MSC1_ICR, MSCn_ICR_t, MSC1_ICR_ADDR);    /* "MSC1 Interrupt Control Register" */
SFR_ABS (MSC1_ID, MSCn_ID_t, MSC1_ID_ADDR);       /* "MSC1 Module Identification Register" */
SFR_ABS (MSC1_ISC, MSCn_ISC_t, MSC1_ISC_ADDR);    /* "MSC1 Interrupt Set Clear Register" */
SFR_ABS (MSC1_ISR, MSCn_ISR_t, MSC1_ISR_ADDR);    /* "MSC1 Interrupt Status Register" */
SFR_ABS (MSC1_OCR, MSCn_OCR_t, MSC1_OCR_ADDR);    /* "MSC1 Output Control Register" */
SFR_ABS (MSC1_SRC0, MSCn_SRCm_t, MSC1_SRC0_ADDR); /* "MSC1 Service Request Control Register 0" */
SFR_ABS (MSC1_SRC1, MSCn_SRCm_t, MSC1_SRC1_ADDR); /* "MSC1 Service Request Control Register 1" */
SFR_ABS (MSC1_UD0, MSCn_UDm_t, MSC1_UD0_ADDR);    /* "MSC1 Upstream Data Register 0" */
SFR_ABS (MSC1_UD1, MSCn_UDm_t, MSC1_UD1_ADDR);    /* "MSC1 Upstream Data Register 1" */
SFR_ABS (MSC1_UD2, MSCn_UDm_t, MSC1_UD2_ADDR);    /* "MSC1 Upstream Data Register 2" */
SFR_ABS (MSC1_UD3, MSCn_UDm_t, MSC1_UD3_ADDR);    /* "MSC1 Upstream Data Register 3" */
SFR_ABS (MSC1_USR, MSCn_USR_t, MSC1_USR_ADDR);    /* "MSC1 Upstream Status Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_MSC1_H_ (block "MSC1") */


