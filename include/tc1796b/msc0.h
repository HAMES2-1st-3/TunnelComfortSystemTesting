/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MSC0" of TriCore TC1796B (21 SFRs) */

#include <tc1796b/msc0/addr.h>

#include <tc1796b/msc0/masks.h>
#include <tc1796b/msc0_msc1/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1796b/msc0/types.h>
#include <tc1796b/msc0_msc1/sharetypes.h>

#ifndef _HAVE_TRICORE_MSC0_H_
#define _HAVE_TRICORE_MSC0_H_

#include <tricore-abs-noabs.h>

SFR_ABS (MSC0_CLC, MSCn_CLC_t, MSC0_CLC_ADDR);    /* "MSC0 Clock Control Register" */
SFR_ABS (MSC0_DC, MSCn_DC_t, MSC0_DC_ADDR);       /* "MSC0 Downstream Command Register" */
SFR_ABS (MSC0_DD, MSCn_DD_t, MSC0_DD_ADDR);       /* "MSC0 Downstream Data Register" */
SFR_ABS (MSC0_DSC, MSCn_DSC_t, MSC0_DSC_ADDR);    /* "MSC0 Downstream Control Register" */
SFR_ABS (MSC0_DSDSH, MSCn_DSDSH_t, MSC0_DSDSH_ADDR); /* "MSC0 Downstream Select Data Source High Register" */
SFR_ABS (MSC0_DSDSL, MSCn_DSDSL_t, MSC0_DSDSL_ADDR); /* "MSC0 Downstream Select Data Source Low Register" */
SFR_ABS (MSC0_DSS, MSCn_DSS_t, MSC0_DSS_ADDR);    /* "MSC0 Downstream Status Register" */
SFR_ABS (MSC0_ESR, MSCn_ESR_t, MSC0_ESR_ADDR);    /* "MSC0 Emergency Stop Register" */
SFR_ABS (MSC0_FDR, MSCn_FDR_t, MSC0_FDR_ADDR);    /* "MSC0 Fractional Divider Register" */
SFR_ABS (MSC0_ICR, MSCn_ICR_t, MSC0_ICR_ADDR);    /* "MSC0 Interrupt Control Register" */
SFR_ABS (MSC0_ID, MSCn_ID_t, MSC0_ID_ADDR);       /* "MSC0 Module Identification Register" */
SFR_ABS (MSC0_ISC, MSCn_ISC_t, MSC0_ISC_ADDR);    /* "MSC0 Interrupt Set Clear Register" */
SFR_ABS (MSC0_ISR, MSCn_ISR_t, MSC0_ISR_ADDR);    /* "MSC0 Interrupt Status Register" */
SFR_ABS (MSC0_OCR, MSCn_OCR_t, MSC0_OCR_ADDR);    /* "MSC0 Output Control Register" */
SFR_ABS (MSC0_SRC0, MSCn_SRCm_t, MSC0_SRC0_ADDR); /* "MSC0 Service Request Control Register 0" */
SFR_ABS (MSC0_SRC1, MSCn_SRCm_t, MSC0_SRC1_ADDR); /* "MSC0 Service Request Control Register 1" */
SFR_ABS (MSC0_UD0, MSCn_UDm_t, MSC0_UD0_ADDR);    /* "MSC0 Upstream Data Register 0" */
SFR_ABS (MSC0_UD1, MSCn_UDm_t, MSC0_UD1_ADDR);    /* "MSC0 Upstream Data Register 1" */
SFR_ABS (MSC0_UD2, MSCn_UDm_t, MSC0_UD2_ADDR);    /* "MSC0 Upstream Data Register 2" */
SFR_ABS (MSC0_UD3, MSCn_UDm_t, MSC0_UD3_ADDR);    /* "MSC0 Upstream Data Register 3" */
SFR_ABS (MSC0_USR, MSCn_USR_t, MSC0_USR_ADDR);    /* "MSC0 Upstream Status Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_MSC0_H_ (block "MSC0") */


