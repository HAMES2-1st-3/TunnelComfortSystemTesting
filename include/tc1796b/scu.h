/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "SCU" of TriCore TC1796B (37 SFRs) */

#include <tc1796b/scu/addr.h>

#include <tc1796b/scu/masks.h>
#include <tc1796b/scu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1796b/scu/types.h>
#include <tc1796b/scu/sharetypes.h>

#ifndef _HAVE_TRICORE_SCU_H_
#define _HAVE_TRICORE_SCU_H_

#include <tricore-abs-noabs.h>

SFR_ABS (CHIPID, CHIPID_t, CHIPID_ADDR);          /* "Chip Identification Register" */
SFR_ABS (EICR0, EICRn_t, EICR0_ADDR);             /* "External Input Channel Register 0" */
SFR_ABS (EICR1, EICRn_t, EICR1_ADDR);             /* "External Input Channel Register 1" */
SFR_ABS (EIFR, EIFR_t, EIFR_ADDR);                /* "External Input Flag Register" */
SFR_ABS (FMR, FMR_t, FMR_ADDR);                   /* "Flag Modification Register" */
SFR_ABS (IGCR0, IGCRn_t, IGCR0_ADDR);             /* "Interrupt Gating Register 0" */
SFR_ABS (IGCR1, IGCRn_t, IGCR1_ADDR);             /* "Interrupt Gating Register 1" */
SFR_ABS (MANID, MANID_t, MANID_ADDR);             /* "Manufacturer Identification Register" */
SFR_ABS (NMISR, NMISR_t, NMISR_ADDR);             /* "NMI Status Register" */
SFR_ABS (OSC_CON, OSC_CON_t, OSC_CON_ADDR);       /* "Oscillator Control Register" */
SFR_ABS (PDRR, PDRR_t, PDRR_ADDR);                /* "Pattern Detection Result Register" */
SFR_ABS (PLL_CLC, PLL_CLC_t, PLL_CLC_ADDR);       /* "PLL Clock Control Register" */
SFR_ABS (PMG_CSR, PMG_CSR_t, PMG_CSR_ADDR);       /* "Power Management Control and Status Register" */
SFR_ABS (RST_REQ, RST_REQ_t, RST_REQ_ADDR);       /* "Reset Request Register" */
SFR_ABS (RST_SR, RST_SR_t, RST_SR_ADDR);          /* "Reset Status Register" */
SFR_ABS (RTID, RTID_t, RTID_ADDR);                /* "Redesign Tracing Identification Register" */
SFR_ABS (SCU_CON, SCU_CON_t, SCU_CON_ADDR);       /* "SCU Control Register" */
SFR_ABS (SCU_EMSR, SCU_EMSR_t, SCU_EMSR_ADDR);    /* "SCU Emergency Stop Register" */
SFR_ABS (SCU_ID, SCU_ID_t, SCU_ID_ADDR);          /* "SCU Module Identification Register" */
SFR_ABS (SCU_PETCR, SCU_PETCR_t, SCU_PETCR_ADDR); /* "SCU Parity Error Trap Control Register" */
SFR_ABS (SCU_PETSR, SCU_PETSR_t, SCU_PETSR_ADDR); /* "SCU Parity Error Trap Status Register" */
SFR_ABS (SCU_PTCON, SCU_PTCON_t, SCU_PTCON_ADDR); /* "SCU Pad Test Control Register" */
SFR_ABS (SCU_PTDAT0, SCU_PTDAT0_t, SCU_PTDAT0_ADDR); /* "SCU Pad Test Data Register 0" */
SFR_ABS (SCU_PTDAT1, SCU_PTDAT1_t, SCU_PTDAT1_ADDR); /* "SCU Pad Test Data Register 1" */
SFR_ABS (SCU_PTDAT2, SCU_PTDAT2_t, SCU_PTDAT2_ADDR); /* "SCU Pad Test Data Register 2" */
SFR_ABS (SCU_PTDAT3, SCU_PTDAT3_t, SCU_PTDAT3_ADDR); /* "SCU Pad Test Data Register 3" */
SFR_ABS (SCU_SCLIR, SCU_SCLIR_t, SCU_SCLIR_ADDR); /* "SCU Software Configuration Latched Inputs Register" */
SFR_ABS (SCU_SCLKFDR, SCU_SCLKFDR_t, SCU_SCLKFDR_ADDR); /* "SCU System Clock Fractional Divider Register" */
SFR_ABS (SCU_STAT, SCU_STAT_t, SCU_STAT_ADDR);    /* "SCU Status Register" */
SFR_ABS (SCU_TCCON, SCU_TCCON_t, SCU_TCCON_ADDR); /* "SCU Temperature Compensation Control Register" */
SFR_ABS (SCU_TCLR0, SCU_TCLRm_t, SCU_TCLR0_ADDR); /* "SCU Temperature Compensation 0 Level Register" */
SFR_ABS (SCU_TCLR1, SCU_TCLRm_t, SCU_TCLR1_ADDR); /* "SCU Temperature Compensation 1 Level Register" */
SFR_ABS (TGADC0, TGADCn_t, TGADC0_ADDR);          /* "Trigger Gating ADC0 Register" */
SFR_ABS (TGADC1, TGADCn_t, TGADC1_ADDR);          /* "Trigger Gating ADC1 Register" */
SFR_ABS (WDT_CON0, WDT_CON0_t, WDT_CON0_ADDR);    /* "Watchdog Timer Control Register 0" */
SFR_ABS (WDT_CON1, WDT_CON1_t, WDT_CON1_ADDR);    /* "Watchdog Timer Control Register 1" */
SFR_ABS (WDT_SR, WDT_SR_t, WDT_SR_ADDR);          /* "Watchdog Timer Status Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_SCU_H_ (block "SCU") */


