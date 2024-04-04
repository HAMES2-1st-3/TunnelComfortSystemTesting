/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ADC1" of TriCore TC1736 (116 SFRs) */

#include <tc1736/adc1/addr.h>

#include <tc1736/adc1/masks.h>
#include <tc1736/adc0_adc1/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1736/adc1/types.h>
#include <tc1736/adc0_adc1/sharetypes.h>

#ifndef _HAVE_TRICORE_ADC1_H_
#define _HAVE_TRICORE_ADC1_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (ADC1_ALR0, ADCn_ALR0_t, ADC1_ALR0_ADDR); /* "Alias Register 0" */
SFR_NOABS (ADC1_APR, ADCn_APR_t, ADC1_APR_ADDR);  /* "Access Protection Register" */
SFR_NOABS (ADC1_ASENR, ADCn_ASENR_t, ADC1_ASENR_ADDR); /* "Arbitration Slot Enable Register" */
SFR_NOABS (ADC1_CHCTR0, ADCn_CHCTRm_t, ADC1_CHCTR0_ADDR); /* "Channel 0 Control Register" */
SFR_NOABS (ADC1_CHCTR1, ADCn_CHCTRm_t, ADC1_CHCTR1_ADDR); /* "Channel 1 Control Register" */
SFR_NOABS (ADC1_CHCTR10, ADCn_CHCTRm_t, ADC1_CHCTR10_ADDR); /* "Channel 10 Control Register" */
SFR_NOABS (ADC1_CHCTR11, ADCn_CHCTRm_t, ADC1_CHCTR11_ADDR); /* "Channel 11 Control Register" */
SFR_NOABS (ADC1_CHCTR12, ADCn_CHCTRm_t, ADC1_CHCTR12_ADDR); /* "Channel 12 Control Register" */
SFR_NOABS (ADC1_CHCTR13, ADCn_CHCTRm_t, ADC1_CHCTR13_ADDR); /* "Channel 13 Control Register" */
SFR_NOABS (ADC1_CHCTR14, ADCn_CHCTRm_t, ADC1_CHCTR14_ADDR); /* "Channel 14 Control Register" */
SFR_NOABS (ADC1_CHCTR15, ADCn_CHCTRm_t, ADC1_CHCTR15_ADDR); /* "Channel 15 Control Register" */
SFR_NOABS (ADC1_CHCTR2, ADCn_CHCTRm_t, ADC1_CHCTR2_ADDR); /* "Channel 2 Control Register" */
SFR_NOABS (ADC1_CHCTR3, ADCn_CHCTRm_t, ADC1_CHCTR3_ADDR); /* "Channel 3 Control Register" */
SFR_NOABS (ADC1_CHCTR4, ADCn_CHCTRm_t, ADC1_CHCTR4_ADDR); /* "Channel 4 Control Register" */
SFR_NOABS (ADC1_CHCTR5, ADCn_CHCTRm_t, ADC1_CHCTR5_ADDR); /* "Channel 5 Control Register" */
SFR_NOABS (ADC1_CHCTR6, ADCn_CHCTRm_t, ADC1_CHCTR6_ADDR); /* "Channel 6 Control Register" */
SFR_NOABS (ADC1_CHCTR7, ADCn_CHCTRm_t, ADC1_CHCTR7_ADDR); /* "Channel 7 Control Register" */
SFR_NOABS (ADC1_CHCTR8, ADCn_CHCTRm_t, ADC1_CHCTR8_ADDR); /* "Channel 8 Control Register" */
SFR_NOABS (ADC1_CHCTR9, ADCn_CHCTRm_t, ADC1_CHCTR9_ADDR); /* "Channel 9 Control Register" */
SFR_NOABS (ADC1_CHENPR0, ADCn_CHENPRm_t, ADC1_CHENPR0_ADDR); /* "Channel Event Node Pointer Register 0" */
SFR_NOABS (ADC1_CHENPR8, ADCn_CHENPRm_t, ADC1_CHENPR8_ADDR); /* "Channel Event Node Pointer Register 8" */
SFR_NOABS (ADC1_CHFCR, ADCn_CHFCR_t, ADC1_CHFCR_ADDR); /* "Channel Flag Clear Register" */
SFR_NOABS (ADC1_CHFR, ADCn_CHFR_t, ADC1_CHFR_ADDR); /* "Channel Flag Register" */
SFR_NOABS (ADC1_CRCR1, ADCn_CRCRm_t, ADC1_CRCR1_ADDR); /* "Conversion Request 1 Control Register" */
SFR_NOABS (ADC1_CRCR3, ADCn_CRCRm_t, ADC1_CRCR3_ADDR); /* "Conversion Request 3 Control Register" */
SFR_NOABS (ADC1_CRMR1, ADCn_CRMRm_t, ADC1_CRMR1_ADDR); /* "Conversion Request 1 Mode Register" */
SFR_NOABS (ADC1_CRMR3, ADCn_CRMRm_t, ADC1_CRMR3_ADDR); /* "Conversion Request 3 Mode Register" */
SFR_NOABS (ADC1_CRPR1, ADCn_CRPRm_t, ADC1_CRPR1_ADDR); /* "Conversion Request 1 Pending Register" */
SFR_NOABS (ADC1_CRPR3, ADCn_CRPRm_t, ADC1_CRPR3_ADDR); /* "Conversion Request 3 Pending Register" */
SFR_NOABS (ADC1_EMCTR, ADCn_EMCTR_t, ADC1_EMCTR_ADDR); /* "External Multiplexer Control Register" */
SFR_NOABS (ADC1_EVFCR, ADCn_EVFCR_t, ADC1_EVFCR_ADDR); /* "Event Flag Clear Register" */
SFR_NOABS (ADC1_EVFR, ADCn_EVFR_t, ADC1_EVFR_ADDR); /* "Event Flag Register" */
SFR_NOABS (ADC1_EVNPR, ADCn_EVNPR_t, ADC1_EVNPR_ADDR); /* "Event Node Pointer Register" */
SFR_NOABS (ADC1_GLOBCFG, ADCn_GLOBCFG_t, ADC1_GLOBCFG_ADDR); /* "Global Configuration Register" */
SFR_NOABS (ADC1_GLOBCTR, ADCn_GLOBCTR_t, ADC1_GLOBCTR_ADDR); /* "Global Control Register" */
SFR_NOABS (ADC1_GLOBSTR, ADCn_GLOBSTR_t, ADC1_GLOBSTR_ADDR); /* "Global Status Register" */
SFR_NOABS (ADC1_INPCR0, ADCn_INPCRm_t, ADC1_INPCR0_ADDR); /* "Input Class Register 0" */
SFR_NOABS (ADC1_INPCR1, ADCn_INPCRm_t, ADC1_INPCR1_ADDR); /* "Input Class Register 1" */
SFR_NOABS (ADC1_INPCR2, ADCn_INPCRm_t, ADC1_INPCR2_ADDR); /* "Input Class Register 2" */
SFR_NOABS (ADC1_INPCR3, ADCn_INPCRm_t, ADC1_INPCR3_ADDR); /* "Input Class Register 3" */
SFR_NOABS (ADC1_INTR, ADCn_INTR_t, ADC1_INTR_ADDR); /* "Interrupt Activation Register" */
SFR_NOABS (ADC1_LCBR0, ADCn_LCBRm_t, ADC1_LCBR0_ADDR); /* "Limit Check Boundary Register 0" */
SFR_NOABS (ADC1_LCBR1, ADCn_LCBRm_t, ADC1_LCBR1_ADDR); /* "Limit Check Boundary Register 1" */
SFR_NOABS (ADC1_LCBR2, ADCn_LCBRm_t, ADC1_LCBR2_ADDR); /* "Limit Check Boundary Register 2" */
SFR_NOABS (ADC1_LCBR3, ADCn_LCBRm_t, ADC1_LCBR3_ADDR); /* "Limit Check Boundary Register 3" */
SFR_NOABS (ADC1_Q0R0, ADC1_Q0R0_t, ADC1_Q0R0_ADDR); /* "Queue 0 Register 0" */
SFR_NOABS (ADC1_Q0R2, ADC1_Q0R2_t, ADC1_Q0R2_ADDR); /* "Queue 2 Register 0" */
SFR_NOABS (ADC1_Q0R4, ADC1_Q0R4_t, ADC1_Q0R4_ADDR); /* "Queue 4 Register 0" */
SFR_NOABS (ADC1_QBUR0, ADCn_QBURm_t, ADC1_QBUR0_ADDR); /* "Queue 0" */
SFR_NOABS (ADC1_QBUR2, ADCn_QBURm_t, ADC1_QBUR2_ADDR); /* "Queue 2" */
SFR_NOABS (ADC1_QBUR4, ADCn_QBURm_t, ADC1_QBUR4_ADDR); /* "Queue 4" */
SFR_NOABS (ADC1_QMR0, ADCn_QMRm_t, ADC1_QMR0_ADDR); /* "Queue 0 Mode Register" */
SFR_NOABS (ADC1_QMR2, ADCn_QMRm_t, ADC1_QMR2_ADDR); /* "Queue 2 Mode Register" */
SFR_NOABS (ADC1_QMR4, ADCn_QMRm_t, ADC1_QMR4_ADDR); /* "Queue 4 Mode Register" */
SFR_NOABS (ADC1_QSR0, ADCn_QSRm_t, ADC1_QSR0_ADDR); /* "Queue 0 Status Register" */
SFR_NOABS (ADC1_QSR2, ADCn_QSRm_t, ADC1_QSR2_ADDR); /* "Queue 2 Status Register" */
SFR_NOABS (ADC1_QSR4, ADCn_QSRm_t, ADC1_QSR4_ADDR); /* "Queue 4 Status Register" */
SFR_NOABS (ADC1_RCR0, ADCn_RCRm_t, ADC1_RCR0_ADDR); /* "Result Control Register 0" */
SFR_NOABS (ADC1_RCR1, ADCn_RCRm_t, ADC1_RCR1_ADDR); /* "Result Control Register 1" */
SFR_NOABS (ADC1_RCR10, ADCn_RCRm_t, ADC1_RCR10_ADDR); /* "Result Control Register 10" */
SFR_NOABS (ADC1_RCR11, ADCn_RCRm_t, ADC1_RCR11_ADDR); /* "Result Control Register 11" */
SFR_NOABS (ADC1_RCR12, ADCn_RCRm_t, ADC1_RCR12_ADDR); /* "Result Control Register 12" */
SFR_NOABS (ADC1_RCR13, ADCn_RCRm_t, ADC1_RCR13_ADDR); /* "Result Control Register 13" */
SFR_NOABS (ADC1_RCR14, ADCn_RCRm_t, ADC1_RCR14_ADDR); /* "Result Control Register 14" */
SFR_NOABS (ADC1_RCR15, ADCn_RCRm_t, ADC1_RCR15_ADDR); /* "Result Control Register 15" */
SFR_NOABS (ADC1_RCR2, ADCn_RCRm_t, ADC1_RCR2_ADDR); /* "Result Control Register 2" */
SFR_NOABS (ADC1_RCR3, ADCn_RCRm_t, ADC1_RCR3_ADDR); /* "Result Control Register 3" */
SFR_NOABS (ADC1_RCR4, ADCn_RCRm_t, ADC1_RCR4_ADDR); /* "Result Control Register 4" */
SFR_NOABS (ADC1_RCR5, ADCn_RCRm_t, ADC1_RCR5_ADDR); /* "Result Control Register 5" */
SFR_NOABS (ADC1_RCR6, ADCn_RCRm_t, ADC1_RCR6_ADDR); /* "Result Control Register 6" */
SFR_NOABS (ADC1_RCR7, ADCn_RCRm_t, ADC1_RCR7_ADDR); /* "Result Control Register 7" */
SFR_NOABS (ADC1_RCR8, ADCn_RCRm_t, ADC1_RCR8_ADDR); /* "Result Control Register 8" */
SFR_NOABS (ADC1_RCR9, ADCn_RCRm_t, ADC1_RCR9_ADDR); /* "Result Control Register 9" */
SFR_NOABS (ADC1_RESR0, ADCn_RESR0_t, ADC1_RESR0_ADDR); /* "Result Register 0" */
SFR_NOABS (ADC1_RESR1, ADCn_RESRm_t, ADC1_RESR1_ADDR); /* "Result Register 1" */
SFR_NOABS (ADC1_RESR10, ADCn_RESRm_t, ADC1_RESR10_ADDR); /* "Result Register 10" */
SFR_NOABS (ADC1_RESR11, ADCn_RESRm_t, ADC1_RESR11_ADDR); /* "Result Register 11" */
SFR_NOABS (ADC1_RESR12, ADCn_RESRm_t, ADC1_RESR12_ADDR); /* "Result Register 12" */
SFR_NOABS (ADC1_RESR13, ADCn_RESRm_t, ADC1_RESR13_ADDR); /* "Result Register 13" */
SFR_NOABS (ADC1_RESR14, ADCn_RESRm_t, ADC1_RESR14_ADDR); /* "Result Register 14" */
SFR_NOABS (ADC1_RESR15, ADCn_RESRm_t, ADC1_RESR15_ADDR); /* "Result Register 15" */
SFR_NOABS (ADC1_RESR2, ADCn_RESRm_t, ADC1_RESR2_ADDR); /* "Result Register 2" */
SFR_NOABS (ADC1_RESR3, ADCn_RESRm_t, ADC1_RESR3_ADDR); /* "Result Register 3" */
SFR_NOABS (ADC1_RESR4, ADCn_RESRm_t, ADC1_RESR4_ADDR); /* "Result Register 4" */
SFR_NOABS (ADC1_RESR5, ADCn_RESRm_t, ADC1_RESR5_ADDR); /* "Result Register 5" */
SFR_NOABS (ADC1_RESR6, ADCn_RESRm_t, ADC1_RESR6_ADDR); /* "Result Register 6" */
SFR_NOABS (ADC1_RESR7, ADCn_RESRm_t, ADC1_RESR7_ADDR); /* "Result Register 7" */
SFR_NOABS (ADC1_RESR8, ADCn_RESRm_t, ADC1_RESR8_ADDR); /* "Result Register 8" */
SFR_NOABS (ADC1_RESR9, ADCn_RESRm_t, ADC1_RESR9_ADDR); /* "Result Register 9" */
SFR_NOABS (ADC1_RESRD0, ADCn_RESRD0_t, ADC1_RESRD0_ADDR); /* "Result Register 0 for Debugging" */
SFR_NOABS (ADC1_RESRD1, ADCn_RESRDm_t, ADC1_RESRD1_ADDR); /* "Result Register 1 for Debugging" */
SFR_NOABS (ADC1_RESRD10, ADCn_RESRDm_t, ADC1_RESRD10_ADDR); /* "Result Register 10 for Debugging" */
SFR_NOABS (ADC1_RESRD11, ADCn_RESRDm_t, ADC1_RESRD11_ADDR); /* "Result Register 11 for Debugging" */
SFR_NOABS (ADC1_RESRD12, ADCn_RESRDm_t, ADC1_RESRD12_ADDR); /* "Result Register 12 for Debugging" */
SFR_NOABS (ADC1_RESRD13, ADCn_RESRDm_t, ADC1_RESRD13_ADDR); /* "Result Register 13 for Debugging" */
SFR_NOABS (ADC1_RESRD14, ADCn_RESRDm_t, ADC1_RESRD14_ADDR); /* "Result Register 14 for Debugging" */
SFR_NOABS (ADC1_RESRD15, ADCn_RESRDm_t, ADC1_RESRD15_ADDR); /* "Result Register 15 for Debugging" */
SFR_NOABS (ADC1_RESRD2, ADCn_RESRDm_t, ADC1_RESRD2_ADDR); /* "Result Register 2 for Debugging" */
SFR_NOABS (ADC1_RESRD3, ADCn_RESRDm_t, ADC1_RESRD3_ADDR); /* "Result Register 3 for Debugging" */
SFR_NOABS (ADC1_RESRD4, ADCn_RESRDm_t, ADC1_RESRD4_ADDR); /* "Result Register 4 for Debugging" */
SFR_NOABS (ADC1_RESRD5, ADCn_RESRDm_t, ADC1_RESRD5_ADDR); /* "Result Register 5 for Debugging" */
SFR_NOABS (ADC1_RESRD6, ADCn_RESRDm_t, ADC1_RESRD6_ADDR); /* "Result Register 6 for Debugging" */
SFR_NOABS (ADC1_RESRD7, ADCn_RESRDm_t, ADC1_RESRD7_ADDR); /* "Result Register 7 for Debugging" */
SFR_NOABS (ADC1_RESRD8, ADCn_RESRDm_t, ADC1_RESRD8_ADDR); /* "Result Register 8 for Debugging" */
SFR_NOABS (ADC1_RESRD9, ADCn_RESRDm_t, ADC1_RESRD9_ADDR); /* "Result Register 9 for Debugging" */
SFR_NOABS (ADC1_RNPR0, ADCn_RNPRm_t, ADC1_RNPR0_ADDR); /* "Result Node Pointer Register 0" */
SFR_NOABS (ADC1_RNPR8, ADCn_RNPRm_t, ADC1_RNPR8_ADDR); /* "Result Node Pointer Register 8" */
SFR_NOABS (ADC1_RSIR0, ADCn_RSIRm_t, ADC1_RSIR0_ADDR); /* "Request Source 0 Input Register" */
SFR_NOABS (ADC1_RSIR1, ADCn_RSIRm_t, ADC1_RSIR1_ADDR); /* "Request Source 0 Input Register" */
SFR_NOABS (ADC1_RSIR2, ADCn_RSIRm_t, ADC1_RSIR2_ADDR); /* "Request Source 0 Input Register" */
SFR_NOABS (ADC1_RSIR3, ADCn_RSIRm_t, ADC1_RSIR3_ADDR); /* "Request Source 0 Input Register" */
SFR_NOABS (ADC1_RSIR4, ADCn_RSIRm_t, ADC1_RSIR4_ADDR); /* "Request Source 0 Input Register" */
SFR_NOABS (ADC1_RSPR0, ADCn_RSPR0_t, ADC1_RSPR0_ADDR); /* "Request Source Priority Register 0" */
SFR_NOABS (ADC1_RSPR4, ADCn_RSPR4_t, ADC1_RSPR4_ADDR); /* "Request Source Priority Register 4" */
SFR_NOABS (ADC1_SYNCTR, ADCn_SYNCTR_t, ADC1_SYNCTR_ADDR); /* "Synchronization Control Register" */
SFR_NOABS (ADC1_VFR, ADCn_VFR_t, ADC1_VFR_ADDR);  /* "Valid Flag Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_ADC1_H_ (block "ADC1") */


