/* (c) HighTec EDV-Systeme GmbH */

/* block "MLI1" of TriCore TC1791 (48 SFRs) */

#include <tc1791/mli1/addr.h>

#include <tc1791/mli1/masks.h>
#include <tc1791/mli0-1/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1791/mli1/types.h>
#include <tc1791/mli0-1/sharetypes.h>

#ifndef _HAVE_TRICORE_MLI1_H_
#define _HAVE_TRICORE_MLI1_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (MLI1_AER0, MLIn_AERm_t, MLI1_AER0_ADDR); /* "Access Enable Register 0" */
SFR_NOABS (MLI1_AER1, MLIn_AERm_t, MLI1_AER1_ADDR); /* "Access Enable Register 1" */
SFR_NOABS (MLI1_ARR0, MLIn_ARRm_t, MLI1_ARR0_ADDR); /* "Access Range Register 0" */
SFR_NOABS (MLI1_ARR1, MLIn_ARRm_t, MLI1_ARR1_ADDR); /* "Access Range Register 1" */
SFR_NOABS (MLI1_FDR, MLIn_FDR_t, MLI1_FDR_ADDR);  /* "Fractional Divider Register" */
SFR_NOABS (MLI1_GINTR, MLIn_GINTR_t, MLI1_GINTR_ADDR); /* "Global Interrupt Set Register" */
SFR_NOABS (MLI1_ID, MLIn_ID_t, MLI1_ID_ADDR);     /* "Module Identification Register" */
SFR_NOABS (MLI1_OICR, MLIn_OICR_t, MLI1_OICR_ADDR); /* "Output Input Control Register" */
SFR_NOABS (MLI1_RADRR, MLIn_RADRR_t, MLI1_RADRR_ADDR); /* "Receiver Address Register" */
SFR_NOABS (MLI1_RCR, MLIn_RCR_t, MLI1_RCR_ADDR);  /* "Receiver Control Register" */
SFR_NOABS (MLI1_RDATAR, MLIn_RDATAR_t, MLI1_RDATAR_ADDR); /* "Receiver Data Register" */
SFR_NOABS (MLI1_RIER, MLIn_RIER_t, MLI1_RIER_ADDR); /* "Receiver Interrupt Enable Register" */
SFR_NOABS (MLI1_RINPR, MLIn_RINPR_t, MLI1_RINPR_ADDR); /* "Receiver Interrupt Node Pointer Register" */
SFR_NOABS (MLI1_RISR, MLIn_RISR_t, MLI1_RISR_ADDR); /* "Receiver Interrupt Status Register" */
SFR_NOABS (MLI1_RP0BAR, MLIn_RPmBAR_t, MLI1_RP0BAR_ADDR); /* "Receiver Pipe 0 Base Address Register" */
SFR_NOABS (MLI1_RP0STATR, MLIn_RPmSTATR_t, MLI1_RP0STATR_ADDR); /* "Receiver Pipe 0 Status Register" */
SFR_NOABS (MLI1_RP1BAR, MLIn_RPmBAR_t, MLI1_RP1BAR_ADDR); /* "Receiver Pipe 1 Base Address Register" */
SFR_NOABS (MLI1_RP1STATR, MLIn_RPmSTATR_t, MLI1_RP1STATR_ADDR); /* "Receiver Pipe 1 Status Register" */
SFR_NOABS (MLI1_RP2BAR, MLIn_RPmBAR_t, MLI1_RP2BAR_ADDR); /* "Receiver Pipe 2 Base Address Register" */
SFR_NOABS (MLI1_RP2STATR, MLIn_RPmSTATR_t, MLI1_RP2STATR_ADDR); /* "Receiver Pipe 2 Status Register" */
SFR_NOABS (MLI1_RP3BAR, MLIn_RPmBAR_t, MLI1_RP3BAR_ADDR); /* "Receiver Pipe 3 Base Address Register" */
SFR_NOABS (MLI1_RP3STATR, MLIn_RPmSTATR_t, MLI1_RP3STATR_ADDR); /* "Receiver Pipe 3 Status Register" */
SFR_NOABS (MLI1_SCR, MLIn_SCR_t, MLI1_SCR_ADDR);  /* "Set Clear Register" */
SFR_NOABS (MLI1_TCBAR, MLIn_TCBAR_t, MLI1_TCBAR_ADDR); /* "Transmitter Copy Base Address Register" */
SFR_NOABS (MLI1_TCMDR, MLIn_TCMDR_t, MLI1_TCMDR_ADDR); /* "Transmitter Command Register" */
SFR_NOABS (MLI1_TCR, MLIn_TCR_t, MLI1_TCR_ADDR);  /* "Transmitter Control Register" */
SFR_NOABS (MLI1_TDRAR, MLIn_TDRAR_t, MLI1_TDRAR_ADDR); /* "Transmitter Data Read Answer Register" */
SFR_NOABS (MLI1_TIER, MLIn_TIER_t, MLI1_TIER_ADDR); /* "Transmitter Interrupt Enable Register" */
SFR_NOABS (MLI1_TINPR, MLIn_TINPR_t, MLI1_TINPR_ADDR); /* "Transmitter Interrupt Node Pointer Register" */
SFR_NOABS (MLI1_TISR, MLIn_TISR_t, MLI1_TISR_ADDR); /* "Transmitter Interrupt Status Register" */
SFR_NOABS (MLI1_TP0AOFR, MLIn_TPmAOFR_t, MLI1_TP0AOFR_ADDR); /* "Transmitter Pipe 0 Address Offset Register" */
SFR_NOABS (MLI1_TP0BAR, MLIn_TPmBAR_t, MLI1_TP0BAR_ADDR); /* "Transmitter Pipe 0 Base Address Register" */
SFR_NOABS (MLI1_TP0DATAR, MLIn_TPmDATAR_t, MLI1_TP0DATAR_ADDR); /* "Transmitter Pipe 0 Data Register" */
SFR_NOABS (MLI1_TP0STATR, MLIn_TPmSTATR_t, MLI1_TP0STATR_ADDR); /* "Transmitter Pipe 0 Status Register" */
SFR_NOABS (MLI1_TP1AOFR, MLIn_TPmAOFR_t, MLI1_TP1AOFR_ADDR); /* "Transmitter Pipe 1 Address Offset Register" */
SFR_NOABS (MLI1_TP1BAR, MLIn_TPmBAR_t, MLI1_TP1BAR_ADDR); /* "Transmitter Pipe 1 Base Address Register" */
SFR_NOABS (MLI1_TP1DATAR, MLIn_TPmDATAR_t, MLI1_TP1DATAR_ADDR); /* "Transmitter Pipe 1 Data Register" */
SFR_NOABS (MLI1_TP1STATR, MLIn_TPmSTATR_t, MLI1_TP1STATR_ADDR); /* "Transmitter Pipe 1 Status Register" */
SFR_NOABS (MLI1_TP2AOFR, MLIn_TPmAOFR_t, MLI1_TP2AOFR_ADDR); /* "Transmitter Pipe 2 Address Offset Register" */
SFR_NOABS (MLI1_TP2BAR, MLIn_TPmBAR_t, MLI1_TP2BAR_ADDR); /* "Transmitter Pipe 2 Base Address Register" */
SFR_NOABS (MLI1_TP2DATAR, MLIn_TPmDATAR_t, MLI1_TP2DATAR_ADDR); /* "Transmitter Pipe 2 Data Register" */
SFR_NOABS (MLI1_TP2STATR, MLIn_TPmSTATR_t, MLI1_TP2STATR_ADDR); /* "Transmitter Pipe 2 Status Register" */
SFR_NOABS (MLI1_TP3AOFR, MLIn_TPmAOFR_t, MLI1_TP3AOFR_ADDR); /* "Transmitter Pipe 3 Address Offset Register" */
SFR_NOABS (MLI1_TP3BAR, MLIn_TPmBAR_t, MLI1_TP3BAR_ADDR); /* "Transmitter Pipe 3 Base Address Register" */
SFR_NOABS (MLI1_TP3DATAR, MLIn_TPmDATAR_t, MLI1_TP3DATAR_ADDR); /* "Transmitter Pipe 3 Data Register" */
SFR_NOABS (MLI1_TP3STATR, MLIn_TPmSTATR_t, MLI1_TP3STATR_ADDR); /* "Transmitter Pipe 3 Status Register" */
SFR_NOABS (MLI1_TRSTATR, MLIn_TRSTATR_t, MLI1_TRSTATR_ADDR); /* "Transmitter Receiver Status Register" */
SFR_NOABS (MLI1_TSTATR, MLIn_TSTATR_t, MLI1_TSTATR_ADDR); /* "Transmitter Status Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_MLI1_H_ (block "MLI1") */


