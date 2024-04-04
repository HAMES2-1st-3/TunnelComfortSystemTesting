/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MLI" of TriCore TC1767 (46 SFRs) */

#include <tc1767/mli/addr.h>

#include <tc1767/mli/masks.h>
#include <tc1767/mli/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1767/mli/types.h>
#include <tc1767/mli/sharetypes.h>

#ifndef _HAVE_TRICORE_MLI_H_
#define _HAVE_TRICORE_MLI_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (MLI0_AER, MLI0_AER_t, MLI0_AER_ADDR);  /* "Access Enable Register" */
SFR_NOABS (MLI0_ARR, MLI0_ARR_t, MLI0_ARR_ADDR);  /* "Access Range Register" */
SFR_NOABS (MLI0_FDR, MLI0_FDR_t, MLI0_FDR_ADDR);  /* "Fractional Divider Register" */
SFR_NOABS (MLI0_GINTR, MLI0_GINTR_t, MLI0_GINTR_ADDR); /* "Global Interrupt Set Register" */
SFR_NOABS (MLI0_ID, MLI0_ID_t, MLI0_ID_ADDR);     /* "Module Identification Register" */
SFR_NOABS (MLI0_OICR, MLI0_OICR_t, MLI0_OICR_ADDR); /* "Output Input Control Register" */
SFR_NOABS (MLI0_RADRR, MLI0_RADRR_t, MLI0_RADRR_ADDR); /* "Receiver Address Register" */
SFR_NOABS (MLI0_RCR, MLI0_RCR_t, MLI0_RCR_ADDR);  /* "Receiver Control Register" */
SFR_NOABS (MLI0_RDATAR, MLI0_RDATAR_t, MLI0_RDATAR_ADDR); /* "Receiver Data Register" */
SFR_NOABS (MLI0_RIER, MLI0_RIER_t, MLI0_RIER_ADDR); /* "Receiver Interrupt Enable Register" */
SFR_NOABS (MLI0_RINPR, MLI0_RINPR_t, MLI0_RINPR_ADDR); /* "Receiver Interrupt Node Pointer Register" */
SFR_NOABS (MLI0_RISR, MLI0_RISR_t, MLI0_RISR_ADDR); /* "Receiver Interrupt Status Register" */
SFR_NOABS (MLI0_RP0BAR, MLI0_RPmBAR_t, MLI0_RP0BAR_ADDR); /* "Receiver Pipe 0 Base Address Register" */
SFR_NOABS (MLI0_RP0STATR, MLI0_RPmSTATR_t, MLI0_RP0STATR_ADDR); /* "Receiver Pipe 0 Status Register" */
SFR_NOABS (MLI0_RP1BAR, MLI0_RPmBAR_t, MLI0_RP1BAR_ADDR); /* "Receiver Pipe 1 Base Address Register" */
SFR_NOABS (MLI0_RP1STATR, MLI0_RPmSTATR_t, MLI0_RP1STATR_ADDR); /* "Receiver Pipe 1 Status Register" */
SFR_NOABS (MLI0_RP2BAR, MLI0_RPmBAR_t, MLI0_RP2BAR_ADDR); /* "Receiver Pipe 2 Base Address Register" */
SFR_NOABS (MLI0_RP2STATR, MLI0_RPmSTATR_t, MLI0_RP2STATR_ADDR); /* "Receiver Pipe 2 Status Register" */
SFR_NOABS (MLI0_RP3BAR, MLI0_RPmBAR_t, MLI0_RP3BAR_ADDR); /* "Receiver Pipe 3 Base Address Register" */
SFR_NOABS (MLI0_RP3STATR, MLI0_RPmSTATR_t, MLI0_RP3STATR_ADDR); /* "Receiver Pipe 3 Status Register" */
SFR_NOABS (MLI0_SCR, MLI0_SCR_t, MLI0_SCR_ADDR);  /* "Set Clear Register" */
SFR_NOABS (MLI0_TCBAR, MLI0_TCBAR_t, MLI0_TCBAR_ADDR); /* "Transmitter Copy Base Address Register" */
SFR_NOABS (MLI0_TCMDR, MLI0_TCMDR_t, MLI0_TCMDR_ADDR); /* "Transmitter Command Register" */
SFR_NOABS (MLI0_TCR, MLI0_TCR_t, MLI0_TCR_ADDR);  /* "Transmitter Control Register" */
SFR_NOABS (MLI0_TDRAR, MLI0_TDRAR_t, MLI0_TDRAR_ADDR); /* "Transmitter Data Read Answer Register" */
SFR_NOABS (MLI0_TIER, MLI0_TIER_t, MLI0_TIER_ADDR); /* "Transmitter Interrupt Enable Register" */
SFR_NOABS (MLI0_TINPR, MLI0_TINPR_t, MLI0_TINPR_ADDR); /* "Transmitter Interrupt Node Pointer Register" */
SFR_NOABS (MLI0_TISR, MLI0_TISR_t, MLI0_TISR_ADDR); /* "Transmitter Interrupt Status Register" */
SFR_NOABS (MLI0_TP0AOFR, MLI0_TPmAOFR_t, MLI0_TP0AOFR_ADDR); /* "Transmitter Pipe 0 Address Offset Register" */
SFR_NOABS (MLI0_TP0BAR, MLI0_TPmBAR_t, MLI0_TP0BAR_ADDR); /* "Transmitter Pipe 0 Base Address Register" */
SFR_NOABS (MLI0_TP0DATAR, MLI0_TPmDATAR_t, MLI0_TP0DATAR_ADDR); /* "Transmitter Pipe 0 Data Register" */
SFR_NOABS (MLI0_TP0STATR, MLI0_TPmSTATR_t, MLI0_TP0STATR_ADDR); /* "Transmitter Pipe 0 Status Register" */
SFR_NOABS (MLI0_TP1AOFR, MLI0_TPmAOFR_t, MLI0_TP1AOFR_ADDR); /* "Transmitter Pipe 1 Address Offset Register" */
SFR_NOABS (MLI0_TP1BAR, MLI0_TPmBAR_t, MLI0_TP1BAR_ADDR); /* "Transmitter Pipe 1 Base Address Register" */
SFR_NOABS (MLI0_TP1DATAR, MLI0_TPmDATAR_t, MLI0_TP1DATAR_ADDR); /* "Transmitter Pipe 1 Data Register" */
SFR_NOABS (MLI0_TP1STATR, MLI0_TPmSTATR_t, MLI0_TP1STATR_ADDR); /* "Transmitter Pipe 1 Status Register" */
SFR_NOABS (MLI0_TP2AOFR, MLI0_TPmAOFR_t, MLI0_TP2AOFR_ADDR); /* "Transmitter Pipe 2 Address Offset Register" */
SFR_NOABS (MLI0_TP2BAR, MLI0_TPmBAR_t, MLI0_TP2BAR_ADDR); /* "Transmitter Pipe 2 Base Address Register" */
SFR_NOABS (MLI0_TP2DATAR, MLI0_TPmDATAR_t, MLI0_TP2DATAR_ADDR); /* "Transmitter Pipe 2 Data Register" */
SFR_NOABS (MLI0_TP2STATR, MLI0_TPmSTATR_t, MLI0_TP2STATR_ADDR); /* "Transmitter Pipe 2 Status Register" */
SFR_NOABS (MLI0_TP3AOFR, MLI0_TPmAOFR_t, MLI0_TP3AOFR_ADDR); /* "Transmitter Pipe 3 Address Offset Register" */
SFR_NOABS (MLI0_TP3BAR, MLI0_TPmBAR_t, MLI0_TP3BAR_ADDR); /* "Transmitter Pipe 3 Base Address Register" */
SFR_NOABS (MLI0_TP3DATAR, MLI0_TPmDATAR_t, MLI0_TP3DATAR_ADDR); /* "Transmitter Pipe 3 Data Register" */
SFR_NOABS (MLI0_TP3STATR, MLI0_TPmSTATR_t, MLI0_TP3STATR_ADDR); /* "Transmitter Pipe 3 Status Register" */
SFR_NOABS (MLI0_TRSTATR, MLI0_TRSTATR_t, MLI0_TRSTATR_ADDR); /* "Transmitter Receiver Status Register" */
SFR_NOABS (MLI0_TSTATR, MLI0_TSTATR_t, MLI0_TSTATR_ADDR); /* "Transmitter Status Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_MLI_H_ (block "MLI") */


