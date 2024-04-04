/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "SCU" of TriCore TC1387 (59 SFRs) */

#include <tc1387/scu/addr.h>

#include <tc1387/scu/masks.h>
#include <tc1387/scu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1387/scu/types.h>
#include <tc1387/scu/sharetypes.h>

#ifndef _HAVE_TRICORE_SCU_H_
#define _HAVE_TRICORE_SCU_H_

#include <tricore-abs-noabs.h>

SFR_ABS (SCU_ARSTDIS, SCU_ARSTDIS_t, SCU_ARSTDIS_ADDR); /* "Application Reset Disable Register" */
SFR_ABS (SCU_CCUCON0, SCU_CCUCON0_t, SCU_CCUCON0_ADDR); /* "CCU Clock Control Register 0" */
SFR_ABS (SCU_CCUCON1, SCU_CCUCON1_t, SCU_CCUCON1_ADDR); /* "CCU Clock Control Register 1" */
SFR_ABS (SCU_CHIPID, SCU_CHIPID_t, SCU_CHIPID_ADDR); /* "Chip Identification Register" */
SFR_ABS (SCU_DTSCON, SCU_DTSCON_t, SCU_DTSCON_ADDR); /* "Die Temperature Sensor Control Register" */
SFR_ABS (SCU_DTSSTAT, SCU_DTSSTAT_t, SCU_DTSSTAT_ADDR); /* "Die Temperature Sensor Status Register" */
SFR_ABS (SCU_ECCCLR, SCU_ECCCLR_t, SCU_ECCCLR_ADDR); /* "ECC Clear Register" */
SFR_ABS (SCU_ECCCON, SCU_ECCCON_t, SCU_ECCCON_ADDR); /* "ECC Control Register" */
SFR_ABS (SCU_ECCSTAT, SCU_ECCSTAT_t, SCU_ECCSTAT_ADDR); /* "ECC Status Register" */
SFR_ABS (SCU_EICR0, SCU_EICRm_t, SCU_EICR0_ADDR); /* "External Input Channel Register 0" */
SFR_ABS (SCU_EICR1, SCU_EICRm_t, SCU_EICR1_ADDR); /* "External Input Channel Register 1" */
SFR_ABS (SCU_EIFR, SCU_EIFR_t, SCU_EIFR_ADDR);    /* "External Input Flag Register" */
SFR_ABS (SCU_EMSR, SCU_EMSR_t, SCU_EMSR_ADDR);    /* "Emergency Stop Register" */
SFR_ABS (SCU_ESRCFG0, SCU_ESRCFGm_t, SCU_ESRCFG0_ADDR); /* "ESR0 Configuration Register" */
SFR_ABS (SCU_ESRCFG1, SCU_ESRCFGm_t, SCU_ESRCFG1_ADDR); /* "ESR1 Configuration Register" */
SFR_ABS (SCU_EXTCON, SCU_EXTCON_t, SCU_EXTCON_ADDR); /* "External Clock Control Register" */
SFR_ABS (SCU_FDR, SCU_FDR_t, SCU_FDR_ADDR);       /* "Fractional Divider Register" */
SFR_ABS (SCU_FMR, SCU_FMR_t, SCU_FMR_ADDR);       /* "Flag Modification Register" */
SFR_ABS (SCU_ID, SCU_ID_t, SCU_ID_ADDR);          /* "Identification Register" */
SFR_ABS (SCU_IGCR0, SCU_IGCR0_t, SCU_IGCR0_ADDR); /* "Interrupt Gating Register 0" */
SFR_ABS (SCU_IGCR1, SCU_IGCR1_t, SCU_IGCR1_ADDR); /* "Interrupt Gating Register 1" */
SFR_ABS (SCU_IN, SCU_IN_t, SCU_IN_ADDR);          /* "Input Register" */
SFR_ABS (SCU_INTCLR, SCU_INTCLR_t, SCU_INTCLR_ADDR); /* "Interrupt Clear Register" */
SFR_ABS (SCU_INTDIS, SCU_INTDIS_t, SCU_INTDIS_ADDR); /* "Interrupt Disable Register" */
SFR_ABS (SCU_INTNP, SCU_INTNP_t, SCU_INTNP_ADDR); /* "Interrupt Node Pointer Register" */
SFR_ABS (SCU_INTSET, SCU_INTSET_t, SCU_INTSET_ADDR); /* "Interrupt Set Register" */
SFR_ABS (SCU_INTSTAT, SCU_INTSTAT_t, SCU_INTSTAT_ADDR); /* "Interrupt Status Register" */
SFR_ABS (SCU_IOCR, SCU_IOCR_t, SCU_IOCR_ADDR);    /* "Input/Output Control Register" */
SFR_ABS (SCU_MANID, SCU_MANID_t, SCU_MANID_ADDR); /* "Manufacturer Identification Register" */
SFR_ABS (SCU_OMR, SCU_OMR_t, SCU_OMR_ADDR);       /* "Output Modification Register" */
SFR_ABS (SCU_OSCCON, SCU_OSCCON_t, SCU_OSCCON_ADDR); /* "OSC Control Register" */
SFR_ABS (SCU_OUT, SCU_OUT_t, SCU_OUT_ADDR);       /* "Output Register" */
SFR_ABS (SCU_PDRR, SCU_PDRR_t, SCU_PDRR_ADDR);    /* "Pattern Detection Result Register" */
SFR_ABS (SCU_PLLCON0, SCU_PLLCON0_t, SCU_PLLCON0_ADDR); /* "PLL Configuration 0 Register" */
SFR_ABS (SCU_PLLCON1, SCU_PLLCON1_t, SCU_PLLCON1_ADDR); /* "PLL Configuration 1 Register" */
SFR_ABS (SCU_PLLERAYCON0, SCU_PLLERAYCON0_t, SCU_PLLERAYCON0_ADDR); /* "PLL_ERAY Configuration 0 Register" */
SFR_ABS (SCU_PLLERAYCON1, SCU_PLLERAYCON1_t, SCU_PLLERAYCON1_ADDR); /* "PLL_ERAY Configuration 1 Register" */
SFR_ABS (SCU_PLLERAYSTAT, SCU_PLLERAYSTAT_t, SCU_PLLERAYSTAT_ADDR); /* "PLL_ERAY Status Register" */
SFR_ABS (SCU_PLLSTAT, SCU_PLLSTAT_t, SCU_PLLSTAT_ADDR); /* "PLL Status Register" */
SFR_ABS (SCU_PMCSR, SCU_PMCSR_t, SCU_PMCSR_ADDR); /* "Power Management Control and Status Register" */
SFR_ABS (SCU_RSTCNTCON, SCU_RSTCNTCON_t, SCU_RSTCNTCON_ADDR); /* "Reset Counter Control Register" */
SFR_ABS (SCU_RSTCON, SCU_RSTCON_t, SCU_RSTCON_ADDR); /* "Reset Configuration Register" */
SFR_ABS (SCU_RSTSTAT, SCU_RSTSTAT_t, SCU_RSTSTAT_ADDR); /* "Reset Status Register" */
SFR_ABS (SCU_RTID, SCU_RTID_t, SCU_RTID_ADDR);    /* "Redesign Tracing Identification Register" */
SFR_ABS (SCU_SRC0, SCU_SRCm_t, SCU_SRC0_ADDR);    /* "Service Request Control 0 Register" */
SFR_ABS (SCU_SRC1, SCU_SRCm_t, SCU_SRC1_ADDR);    /* "Service Request Control 1 Register" */
SFR_ABS (SCU_SRC2, SCU_SRCm_t, SCU_SRC2_ADDR);    /* "Service Request Control 2 Register" */
SFR_ABS (SCU_SRC3, SCU_SRCm_t, SCU_SRC3_ADDR);    /* "Service Request Control 3 Register" */
SFR_ABS (SCU_STCON, SCU_STCON_t, SCU_STCON_ADDR); /* "Start-up Configuration Register" */
SFR_ABS (SCU_STSTAT, SCU_STSTAT_t, SCU_STSTAT_ADDR); /* "Start-up Status Register" */
SFR_ABS (SCU_SWRSTCON, SCU_SWRSTCON_t, SCU_SWRSTCON_ADDR); /* "Software Reset Configuration Register" */
SFR_ABS (SCU_SYSCON, SCU_SYSCON_t, SCU_SYSCON_ADDR); /* "System Control Register" */
SFR_ABS (SCU_TRAPCLR, SCU_TRAPCLR_t, SCU_TRAPCLR_ADDR); /* "Trap Clear Register" */
SFR_ABS (SCU_TRAPDIS, SCU_TRAPDIS_t, SCU_TRAPDIS_ADDR); /* "Trap Disable Register" */
SFR_ABS (SCU_TRAPSET, SCU_TRAPSET_t, SCU_TRAPSET_ADDR); /* "Trap Set Register" */
SFR_ABS (SCU_TRAPSTAT, SCU_TRAPSTAT_t, SCU_TRAPSTAT_ADDR); /* "Trap Status Register" */
SFR_ABS (WDT_CON0, WDT_CON0_t, WDT_CON0_ADDR);    /* "WDT Control Register 0" */
SFR_ABS (WDT_CON1, WDT_CON1_t, WDT_CON1_ADDR);    /* "WDT Control Register 1" */
SFR_ABS (WDT_SR, WDT_SR_t, WDT_SR_ADDR);          /* "WDT Status Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_SCU_H_ (block "SCU") */


