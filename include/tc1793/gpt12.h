/* (c) HighTec EDV-Systeme GmbH */

/* block "GPT12" of TriCore TC1793 (40 SFRs) */

#include <tc1793/gpt12/addr.h>

#include <tc1793/gpt12/masks.h>
#include <tc1793/gpt12/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/gpt12/types.h>
#include <tc1793/gpt12/sharetypes.h>

#ifndef _HAVE_TRICORE_GPT12_H_
#define _HAVE_TRICORE_GPT12_H_

#include <tricore-abs-noabs.h>

SFR_ABS (GPT120_CAPREL, GPTn_CAPREL_t, GPT120_CAPREL_ADDR); /* "Capture and Reload Register" */
SFR_ABS (GPT120_CLC, GPTn_CLC_t, GPT120_CLC_ADDR); /* "Clock Control Register" */
SFR_ABS (GPT120_ID, GPTn_ID_t, GPT120_ID_ADDR);   /* "Identification Register" */
SFR_ABS (GPT120_PISEL, GPTn_PISEL_t, GPT120_PISEL_ADDR); /* "Port Input Select Register" */
SFR_ABS (GPT120_SRC0, GPTn_SRCm_t, GPT120_SRC0_ADDR); /* "Service Request Control 0 Register" */
SFR_ABS (GPT120_SRC1, GPTn_SRCm_t, GPT120_SRC1_ADDR); /* "Service Request Control 1 Register" */
SFR_ABS (GPT120_SRC2, GPTn_SRCm_t, GPT120_SRC2_ADDR); /* "Service Request Control 2 Register" */
SFR_ABS (GPT120_SRC3, GPTn_SRCm_t, GPT120_SRC3_ADDR); /* "Service Request Control 3 Register" */
SFR_ABS (GPT120_SRC4, GPTn_SRCm_t, GPT120_SRC4_ADDR); /* "Service Request Control 4Register" */
SFR_ABS (GPT120_SRC5, GPTn_SRCm_t, GPT120_SRC5_ADDR); /* "Service Request Control 5 Register" */
SFR_ABS (GPT120_T2, GPTn_Tm_t, GPT120_T2_ADDR);   /* "Timer 2 Register" */
SFR_ABS (GPT120_T2CON, GPTn_T2CON_t, GPT120_T2CON_ADDR); /* "Timer 2 Control Register" */
SFR_ABS (GPT120_T3, GPTn_Tm_t, GPT120_T3_ADDR);   /* "Timer 3 Register" */
SFR_ABS (GPT120_T3CON, GPTn_T3CON_t, GPT120_T3CON_ADDR); /* "Timer 3 Control Register" */
SFR_ABS (GPT120_T4, GPTn_Tm_t, GPT120_T4_ADDR);   /* "Timer 4 Register" */
SFR_ABS (GPT120_T4CON, GPTn_T4CON_t, GPT120_T4CON_ADDR); /* "Timer 4 Control Register" */
SFR_ABS (GPT120_T5, GPTn_Tm_t, GPT120_T5_ADDR);   /* "Timer 5 Register" */
SFR_ABS (GPT120_T5CON, GPTn_T5CON_t, GPT120_T5CON_ADDR); /* "Timer 5 Control Register" */
SFR_ABS (GPT120_T6, GPTn_Tm_t, GPT120_T6_ADDR);   /* "Timer 6 Register" */
SFR_ABS (GPT120_T6CON, GPTn_T6CON_t, GPT120_T6CON_ADDR); /* "Timer 6 Control Register" */
SFR_ABS (GPT121_CAPREL, GPTn_CAPREL_t, GPT121_CAPREL_ADDR); /* "Capture and Reload Register" */
SFR_ABS (GPT121_CLC, GPTn_CLC_t, GPT121_CLC_ADDR); /* "Clock Control Register" */
SFR_ABS (GPT121_ID, GPTn_ID_t, GPT121_ID_ADDR);   /* "Identification Register" */
SFR_ABS (GPT121_PISEL, GPTn_PISEL_t, GPT121_PISEL_ADDR); /* "Port Input Select Register" */
SFR_ABS (GPT121_SRC0, GPTn_SRCm_t, GPT121_SRC0_ADDR); /* "Service Request Control 0 Register" */
SFR_ABS (GPT121_SRC1, GPTn_SRCm_t, GPT121_SRC1_ADDR); /* "Service Request Control 1 Register" */
SFR_ABS (GPT121_SRC2, GPTn_SRCm_t, GPT121_SRC2_ADDR); /* "Service Request Control 2 Register" */
SFR_ABS (GPT121_SRC3, GPTn_SRCm_t, GPT121_SRC3_ADDR); /* "Service Request Control 3 Register" */
SFR_ABS (GPT121_SRC4, GPTn_SRCm_t, GPT121_SRC4_ADDR); /* "Service Request Control 4Register" */
SFR_ABS (GPT121_SRC5, GPTn_SRCm_t, GPT121_SRC5_ADDR); /* "Service Request Control 5 Register" */
SFR_ABS (GPT121_T2, GPTn_Tm_t, GPT121_T2_ADDR);   /* "Timer 2 Register" */
SFR_ABS (GPT121_T2CON, GPTn_T2CON_t, GPT121_T2CON_ADDR); /* "Timer 2 Control Register" */
SFR_ABS (GPT121_T3, GPTn_Tm_t, GPT121_T3_ADDR);   /* "Timer 3 Register" */
SFR_ABS (GPT121_T3CON, GPTn_T3CON_t, GPT121_T3CON_ADDR); /* "Timer 3 Control Register" */
SFR_ABS (GPT121_T4, GPTn_Tm_t, GPT121_T4_ADDR);   /* "Timer 4 Register" */
SFR_ABS (GPT121_T4CON, GPTn_T4CON_t, GPT121_T4CON_ADDR); /* "Timer 4 Control Register" */
SFR_ABS (GPT121_T5, GPTn_Tm_t, GPT121_T5_ADDR);   /* "Timer 5 Register" */
SFR_ABS (GPT121_T5CON, GPTn_T5CON_t, GPT121_T5CON_ADDR); /* "Timer 5 Control Register" */
SFR_ABS (GPT121_T6, GPTn_Tm_t, GPT121_T6_ADDR);   /* "Timer 6 Register" */
SFR_ABS (GPT121_T6CON, GPTn_T6CON_t, GPT121_T6CON_ADDR); /* "Timer 6 Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_GPT12_H_ (block "GPT12") */


