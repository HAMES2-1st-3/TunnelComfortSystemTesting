/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MLI LL0" of TriCore TC1766B (46 SFRs) */

#include <tc1766b/mli0/addr.h>

#include <tc1766b/mli0/masks.h>
#include <tc1766b/mli0_mli1/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1766b/mli0/types.h>
#include <tc1766b/mli0_mli1/sharetypes.h>

#ifndef _HAVE_TRICORE_MLI0_H_
#define _HAVE_TRICORE_MLI0_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (MLI0_AER, MLIn_AER_t, MLI0_AER_ADDR);  /* "Access Enable Register" */
SFR_NOABS (MLI0_ARR, MLIn_ARR_t, MLI0_ARR_ADDR);  /* "Access Range Register" */
SFR_NOABS (MLI0_FDR, MLIn_FDR_t, MLI0_FDR_ADDR);  /* "MLI Fractional Divider Register" */
SFR_NOABS (MLI0_GINTR, MLIn_GINTR_t, MLI0_GINTR_ADDR); /* "MLI Global Interrupt Set Register" */
SFR_NOABS (MLI0_ID, MLIn_ID_t, MLI0_ID_ADDR);     /* "MLI Module Identification Register" */
SFR_NOABS (MLI0_OICR, MLIn_OICR_t, MLI0_OICR_ADDR); /* "Output Input Control Register" */
SFR_NOABS (MLI0_RADRR, MLIn_RADRR_t, MLI0_RADRR_ADDR); /* "Receiver Address Register" */
SFR_NOABS (MLI0_RCR, MLIn_RCR_t, MLI0_RCR_ADDR);  /* "Receiver Control Register" */
SFR_NOABS (MLI0_RDATAR, MLIn_RDATAR_t, MLI0_RDATAR_ADDR); /* "Receiver Data Register" */
SFR_NOABS (MLI0_RIER, MLIn_RIER_t, MLI0_RIER_ADDR); /* "Receiver Interrupt Enable Register" */
SFR_NOABS (MLI0_RINPR, MLIn_RINPR_t, MLI0_RINPR_ADDR); /* "Receiver Interrupt Node Pointer Register" */
SFR_NOABS (MLI0_RISR, MLIn_RISR_t, MLI0_RISR_ADDR); /* "Receiver Interrupt Status Register" */
SFR_NOABS (MLI0_RP0BAR, MLIn_RPmBAR_t, MLI0_RP0BAR_ADDR); /* "Receiver Pipe 0 Base Address Register" */
SFR_NOABS (MLI0_RP0STATR, MLIn_RPmSTATR_t, MLI0_RP0STATR_ADDR); /* "Receiver Pipe 0 Status Register" */
SFR_NOABS (MLI0_RP1BAR, MLIn_RPmBAR_t, MLI0_RP1BAR_ADDR); /* "Receiver Pipe 1 Base Address Register" */
SFR_NOABS (MLI0_RP1STATR, MLIn_RPmSTATR_t, MLI0_RP1STATR_ADDR); /* "Receiver Pipe 1 Status Register" */
SFR_NOABS (MLI0_RP2BAR, MLIn_RPmBAR_t, MLI0_RP2BAR_ADDR); /* "Receiver Pipe 2 Base Address Register" */
SFR_NOABS (MLI0_RP2STATR, MLIn_RPmSTATR_t, MLI0_RP2STATR_ADDR); /* "Receiver Pipe 2 Status Register" */
SFR_NOABS (MLI0_RP3BAR, MLIn_RPmBAR_t, MLI0_RP3BAR_ADDR); /* "Receiver Pipe 3 Base Address Register" */
SFR_NOABS (MLI0_RP3STATR, MLIn_RPmSTATR_t, MLI0_RP3STATR_ADDR); /* "Receiver Pipe 3 Status Register" */
SFR_NOABS (MLI0_SCR, MLIn_SCR_t, MLI0_SCR_ADDR);  /* "Set Clear Register" */
SFR_NOABS (MLI0_TCBAR, MLIn_TCBAR_t, MLI0_TCBAR_ADDR); /* "Transmitter Copy Base Address Register" */
SFR_NOABS (MLI0_TCMDR, MLIn_TCMDR_t, MLI0_TCMDR_ADDR); /* "Transmitter Command Register" */
SFR_NOABS (MLI0_TCR, MLIn_TCR_t, MLI0_TCR_ADDR);  /* "Transmitter Control Register" */
SFR_NOABS (MLI0_TDRAR, MLIn_TDRAR_t, MLI0_TDRAR_ADDR); /* "Transmitter Data Read Answer Register" */
SFR_NOABS (MLI0_TIER, MLIn_TIER_t, MLI0_TIER_ADDR); /* "Transmitter Interrupt Enable Register" */
SFR_NOABS (MLI0_TINPR, MLIn_TINPR_t, MLI0_TINPR_ADDR); /* "Transmitter Interrupt Node Pointer Register" */
SFR_NOABS (MLI0_TISR, MLIn_TISR_t, MLI0_TISR_ADDR); /* "Transmitter Interrupt Status Register" */
SFR_NOABS (MLI0_TP0AOFR, MLIn_TPmAOFR_t, MLI0_TP0AOFR_ADDR); /* "Transmitter Pipe 0 Address Offset Register" */
SFR_NOABS (MLI0_TP0BAR, MLIn_TPmBAR_t, MLI0_TP0BAR_ADDR); /* "Transmitter Pipe 0 Base Address Register" */
SFR_NOABS (MLI0_TP0DATAR, MLIn_TPmDATAR_t, MLI0_TP0DATAR_ADDR); /* "Transmitter Pipe 0 Data Register" */
SFR_NOABS (MLI0_TP0STATR, MLIn_TPmSTATR_t, MLI0_TP0STATR_ADDR); /* "Transmitter Pipe 0 Status Register" */
SFR_NOABS (MLI0_TP1AOFR, MLIn_TPmAOFR_t, MLI0_TP1AOFR_ADDR); /* "Transmitter Pipe 1 Address Offset Register" */
SFR_NOABS (MLI0_TP1BAR, MLIn_TPmBAR_t, MLI0_TP1BAR_ADDR); /* "Transmitter Pipe 1 Base Address Register" */
SFR_NOABS (MLI0_TP1DATAR, MLIn_TPmDATAR_t, MLI0_TP1DATAR_ADDR); /* "Transmitter Pipe 1 Data Register" */
SFR_NOABS (MLI0_TP1STATR, MLIn_TPmSTATR_t, MLI0_TP1STATR_ADDR); /* "Transmitter Pipe 1 Status Register" */
SFR_NOABS (MLI0_TP2AOFR, MLIn_TPmAOFR_t, MLI0_TP2AOFR_ADDR); /* "Transmitter Pipe 2 Address Offset Register" */
SFR_NOABS (MLI0_TP2BAR, MLIn_TPmBAR_t, MLI0_TP2BAR_ADDR); /* "Transmitter Pipe 2 Base Address Register" */
SFR_NOABS (MLI0_TP2DATAR, MLIn_TPmDATAR_t, MLI0_TP2DATAR_ADDR); /* "Transmitter Pipe 2 Data Register" */
SFR_NOABS (MLI0_TP2STATR, MLIn_TPmSTATR_t, MLI0_TP2STATR_ADDR); /* "Transmitter Pipe 2 Status Register" */
SFR_NOABS (MLI0_TP3AOFR, MLIn_TPmAOFR_t, MLI0_TP3AOFR_ADDR); /* "Transmitter Pipe 3 Address Offset Register" */
SFR_NOABS (MLI0_TP3BAR, MLIn_TPmBAR_t, MLI0_TP3BAR_ADDR); /* "Transmitter Pipe 3 Base Address Register" */
SFR_NOABS (MLI0_TP3DATAR, MLIn_TPmDATAR_t, MLI0_TP3DATAR_ADDR); /* "Transmitter Pipe 3 Data Register" */
SFR_NOABS (MLI0_TP3STATR, MLIn_TPmSTATR_t, MLI0_TP3STATR_ADDR); /* "Transmitter Pipe 3 Status Register" */
SFR_NOABS (MLI0_TRSTATR, MLIn_TRSTATR_t, MLI0_TRSTATR_ADDR); /* "Transmitter Registers Status Register" */
SFR_NOABS (MLI0_TSTATR, MLIn_TSTATR_t, MLI0_TSTATR_ADDR); /* "Transmitter Status Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_MLI0_H_ (block "MLI LL0") */


