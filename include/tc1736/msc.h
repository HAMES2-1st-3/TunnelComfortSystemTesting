/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MSC" of TriCore TC1736 (21 SFRs) */

#include <tc1736/msc/addr.h>

#include <tc1736/msc/masks.h>
#include <tc1736/msc/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1736/msc/types.h>
#include <tc1736/msc/sharetypes.h>

#ifndef _HAVE_TRICORE_MSC_H_
#define _HAVE_TRICORE_MSC_H_

#include <tricore-abs-noabs.h>

SFR_ABS (MSC0_CLC, MSC0_CLC_t, MSC0_CLC_ADDR);    /* "MSC0 Clock Control Register" */
SFR_ABS (MSC0_DC, MSC0_DC_t, MSC0_DC_ADDR);       /* "Downstream Command Register" */
SFR_ABS (MSC0_DD, MSC0_DD_t, MSC0_DD_ADDR);       /* "Downstream Data Register" */
SFR_ABS (MSC0_DSC, MSC0_DSC_t, MSC0_DSC_ADDR);    /* "Downstream Control Register" */
SFR_ABS (MSC0_DSDSH, MSC0_DSDSH_t, MSC0_DSDSH_ADDR); /* "Downstream Select Data Source High Register" */
SFR_ABS (MSC0_DSDSL, MSC0_DSDSL_t, MSC0_DSDSL_ADDR); /* "Downstream Select Data Source Low Register" */
SFR_ABS (MSC0_DSS, MSC0_DSS_t, MSC0_DSS_ADDR);    /* "Downstream Status Register" */
SFR_ABS (MSC0_ESR, MSC0_ESR_t, MSC0_ESR_ADDR);    /* "Emergency Stop Register" */
SFR_ABS (MSC0_FDR, MSC0_FDR_t, MSC0_FDR_ADDR);    /* "MSC0 Fractional Divider Register" */
SFR_ABS (MSC0_ICR, MSC0_ICR_t, MSC0_ICR_ADDR);    /* "Interrupt Control Register" */
SFR_ABS (MSC0_ID, MSC0_ID_t, MSC0_ID_ADDR);       /* "Module Identification Register" */
SFR_ABS (MSC0_ISC, MSC0_ISC_t, MSC0_ISC_ADDR);    /* "Interrupt Set Clear Register" */
SFR_ABS (MSC0_ISR, MSC0_ISR_t, MSC0_ISR_ADDR);    /* "Interrupt Status Register" */
SFR_ABS (MSC0_OCR, MSC0_OCR_t, MSC0_OCR_ADDR);    /* "Output Control Register" */
SFR_ABS (MSC0_SRC0, MSC0_SRCm_t, MSC0_SRC0_ADDR); /* "MSC0 Service Request Control Register 0" */
SFR_ABS (MSC0_SRC1, MSC0_SRCm_t, MSC0_SRC1_ADDR); /* "MSC0 Service Request Control Register 1" */
SFR_ABS (MSC0_UD0, MSC0_UDm_t, MSC0_UD0_ADDR);    /* "Upstream Data Register 0" */
SFR_ABS (MSC0_UD1, MSC0_UDm_t, MSC0_UD1_ADDR);    /* "Upstream Data Register 1" */
SFR_ABS (MSC0_UD2, MSC0_UDm_t, MSC0_UD2_ADDR);    /* "Upstream Data Register 2" */
SFR_ABS (MSC0_UD3, MSC0_UDm_t, MSC0_UD3_ADDR);    /* "Upstream Data Register 3" */
SFR_ABS (MSC0_USR, MSC0_USR_t, MSC0_USR_ADDR);    /* "Upstream Status Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_MSC_H_ (block "MSC") */


