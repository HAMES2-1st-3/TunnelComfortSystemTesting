/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "SCU_CD" of TriCore TC1130B (44 SFRs) */

#include <tc1130b/scu/addr.h>

#include <tc1130b/scu/masks.h>
#include <tc1130b/scu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/scu/types.h>
#include <tc1130b/scu/sharetypes.h>

#ifndef _HAVE_TRICORE_SCU_H_
#define _HAVE_TRICORE_SCU_H_

#include <tricore-abs-noabs.h>

SFR_ABS (CHIPID, CHIPID_t, CHIPID_ADDR);          /* "Chip Identification Register" */
SFR_ABS (DRSRC, DRSRC_t, DRSRC_ADDR);             /* "DR Service Request Control Register" */
SFR_ABS (DTSRC, DTSRC_t, DTSRC_ADDR);             /* "DT Service Request Control Register" */
SFR_ABS (EICR0, EICRn_t, EICR0_ADDR);             /* "External Input Channel Register 0" */
SFR_ABS (EICR1, EICRn_t, EICR1_ADDR);             /* "External Input Channel Register 1" */
SFR_ABS (EIFR, EIFR_t, EIFR_ADDR);                /* "External Input Flag Register" */
SFR_ABS (EINT_SRC0, EINT_SRCm_t, EINT_SRC0_ADDR); /* "Service Request Control Reg. for Ext. Interrupt 0" */
SFR_ABS (EINT_SRC1, EINT_SRCm_t, EINT_SRC1_ADDR); /* "Service Request Control Reg. for Ext. Interrupt 1" */
SFR_ABS (EINT_SRC2, EINT_SRCm_t, EINT_SRC2_ADDR); /* "Service Request Control Reg. for Ext. Interrupt 2" */
SFR_ABS (EINT_SRC3, EINT_SRCm_t, EINT_SRC3_ADDR); /* "Service Request Control Reg. for Ext. Interrupt 3" */
SFR_ABS (FDR, FDR_t, FDR_ADDR);                   /* "SCU Fusebox Data Register" */
SFR_ABS (FMR, FMR_t, FMR_ADDR);                   /* "SCU Flag Modification Register" */
SFR_ABS (FPU_SRC, FPU_SRC_t, FPU_SRC_ADDR);       /* "FPU Service Request Control Register" */
SFR_ABS (FSR, FSR_t, FSR_ADDR);                   /* "Fusebox Selector Register" */
SFR_ABS (IGCR0, IGCRn_t, IGCR0_ADDR);             /* "Interrupt Gating Register 0" */
SFR_ABS (IGCR1, IGCRn_t, IGCR1_ADDR);             /* "Interrupt Gating Register 1" */
SFR_ABS (MACRX0SRC, MACRXnSRC_t, MACRX0SRC_ADDR); /* "MAC Receive Interrupt Service Request Control Register 0" */
SFR_ABS (MACRX1SRC, MACRXnSRC_t, MACRX1SRC_ADDR); /* "MAC Receive Interrupt Service Request Control Register 1" */
SFR_ABS (MACTX0SRC, MACTXnSRC_t, MACTX0SRC_ADDR); /* "MAC Transmit Interrupt Service Request Control Register" */
SFR_ABS (MACTX1SRC, MACTXnSRC_t, MACTX1SRC_ADDR); /* "MAC Transmit Interrupt Service Request Control Register 1" */
SFR_ABS (MANID, MANID_t, MANID_ADDR);             /* "Manufacturer Identification Register" */
SFR_ABS (NMISR, NMISR_t, NMISR_ADDR);             /* "NMI Status Register" */
SFR_ABS (OSC_CON, OSC_CON_t, OSC_CON_ADDR);       /* "Oscillator Control Register" */
SFR_ABS (PLL_CLC, PLL_CLC_t, PLL_CLC_ADDR);       /* "PLL Clock Control Register" */
SFR_ABS (PMG_CON, PMG_CON_t, PMG_CON_ADDR);       /* "Power Management Control Register" */
SFR_ABS (PMG_CSR, PMG_CSR_t, PMG_CSR_ADDR);       /* "Power Management Control and Status Register" */
SFR_ABS (RBSRC0, RBSRCn_t, RBSRC0_ADDR);          /* "RB Service Request Control 0 Register" */
SFR_ABS (RBSRC1, RBSRCn_t, RBSRC1_ADDR);          /* "RB Service Request Control 1 Register" */
SFR_ABS (RST_REQ, RST_REQ_t, RST_REQ_ADDR);       /* "Reset Request Register" */
SFR_ABS (RST_SR, RST_SR_t, RST_SR_ADDR);          /* "Reset Status Register" */
SFR_ABS (RTID, RTID_t, RTID_ADDR);                /* "Redesign Tracing Identification Register" */
SFR_ABS (SCU_CON, SCU_CON_t, SCU_CON_ADDR);       /* "SCU Control Register" */
SFR_ABS (SCU_DMARS, SCU_DMARS_t, SCU_DMARS_ADDR); /* "DMA Request Select Register" */
SFR_ABS (SCU_ID, SCU_ID_t, SCU_ID_ADDR);          /* "SCU Module Identification Register" */
SFR_ABS (SCU_OTCON, SCU_OTCON_t, SCU_OTCON_ADDR); /* "SCU On Chip Test Control Register" */
SFR_ABS (SCU_OTDAT, SCU_OTDAT_t, SCU_OTDAT_ADDR); /* "SCU On Chip Test Data Register" */
SFR_ABS (SCU_PETCR, SCU_PETCR_t, SCU_PETCR_ADDR); /* "SCU Parity Error Trap Control Register" */
SFR_ABS (SCU_PETSR, SCU_PETSR_t, SCU_PETSR_ADDR); /* "SCU Parity Error Trap Status Register" */
SFR_ABS (SCU_SCLIR, SCU_SCLIR_t, SCU_SCLIR_ADDR); /* "SCU Software Configuration Latched Inputs Register" */
SFR_ABS (SCU_STAT, SCU_STAT_t, SCU_STAT_ADDR);    /* "SCU Status Register" */
SFR_ABS (TBSRC, TBSRC_t, TBSRC_ADDR);             /* "TB Service Request Control Register" */
SFR_ABS (WDT_CON0, WDT_CON0_t, WDT_CON0_ADDR);    /* "Watchdog Timer Control Register 0" */
SFR_ABS (WDT_CON1, WDT_CON1_t, WDT_CON1_ADDR);    /* "Watchdog Timer Control Register 1" */
SFR_ABS (WDT_SR, WDT_SR_t, WDT_SR_ADDR);          /* "Watchdog Timer Status Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_SCU_H_ (block "SCU_CD") */


