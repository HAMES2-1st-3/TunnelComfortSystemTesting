/* (c) HighTec EDV-Systeme GmbH */

/* block "ADC3" of TriCore TC1793 (119 SFRs) */

#include <tc1793/adc3/addr.h>

#include <tc1793/adc3/masks.h>
#include <tc1793/adc0-3/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/adc3/types.h>
#include <tc1793/adc0-3/sharetypes.h>

#ifndef _HAVE_TRICORE_ADC3_H_
#define _HAVE_TRICORE_ADC3_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (ADC3_ALR0, ADCn_ALR0_t, ADC3_ALR0_ADDR); /* "Alias Register 0" */
SFR_NOABS (ADC3_APR, ADCn_APR_t, ADC3_APR_ADDR);  /* "Access Protection Register" */
SFR_NOABS (ADC3_ASENR, ADCn_ASENR_t, ADC3_ASENR_ADDR); /* "Arbitration Slot Enable Register" */
SFR_NOABS (ADC3_BWDCFGR, ADCn_BWDCFGR_t, ADC3_BWDCFGR_ADDR); /* "Broken Wire Detection Configuration Register" */
SFR_NOABS (ADC3_BWDENR, ADCn_BWDENR_t, ADC3_BWDENR_ADDR); /* "Broken Wire Detection Enable Register" */
SFR_NOABS (ADC3_CHCTR0, ADCn_CHCTRm_t, ADC3_CHCTR0_ADDR); /* "Channel 0 Control Register" */
SFR_NOABS (ADC3_CHCTR1, ADCn_CHCTRm_t, ADC3_CHCTR1_ADDR); /* "Channel 1 Control Register" */
SFR_NOABS (ADC3_CHCTR10, ADCn_CHCTRm_t, ADC3_CHCTR10_ADDR); /* "Channel 10 Control Register" */
SFR_NOABS (ADC3_CHCTR11, ADCn_CHCTRm_t, ADC3_CHCTR11_ADDR); /* "Channel 11 Control Register" */
SFR_NOABS (ADC3_CHCTR12, ADCn_CHCTRm_t, ADC3_CHCTR12_ADDR); /* "Channel 12 Control Register" */
SFR_NOABS (ADC3_CHCTR13, ADCn_CHCTRm_t, ADC3_CHCTR13_ADDR); /* "Channel 13 Control Register" */
SFR_NOABS (ADC3_CHCTR14, ADCn_CHCTRm_t, ADC3_CHCTR14_ADDR); /* "Channel 14 Control Register" */
SFR_NOABS (ADC3_CHCTR15, ADCn_CHCTRm_t, ADC3_CHCTR15_ADDR); /* "Channel 15 Control Register" */
SFR_NOABS (ADC3_CHCTR2, ADCn_CHCTRm_t, ADC3_CHCTR2_ADDR); /* "Channel 2 Control Register" */
SFR_NOABS (ADC3_CHCTR3, ADCn_CHCTRm_t, ADC3_CHCTR3_ADDR); /* "Channel 3 Control Register" */
SFR_NOABS (ADC3_CHCTR4, ADCn_CHCTRm_t, ADC3_CHCTR4_ADDR); /* "Channel 4 Control Register" */
SFR_NOABS (ADC3_CHCTR5, ADCn_CHCTRm_t, ADC3_CHCTR5_ADDR); /* "Channel 5 Control Register" */
SFR_NOABS (ADC3_CHCTR6, ADCn_CHCTRm_t, ADC3_CHCTR6_ADDR); /* "Channel 6 Control Register" */
SFR_NOABS (ADC3_CHCTR7, ADCn_CHCTRm_t, ADC3_CHCTR7_ADDR); /* "Channel 7 Control Register" */
SFR_NOABS (ADC3_CHCTR8, ADCn_CHCTRm_t, ADC3_CHCTR8_ADDR); /* "Channel 8 Control Register" */
SFR_NOABS (ADC3_CHCTR9, ADCn_CHCTRm_t, ADC3_CHCTR9_ADDR); /* "Channel 9 Control Register" */
SFR_NOABS (ADC3_CHENPR0, ADCn_CHENPRm_t, ADC3_CHENPR0_ADDR); /* "Channel Event Node Pointer Register 0" */
SFR_NOABS (ADC3_CHENPR8, ADCn_CHENPRm_t, ADC3_CHENPR8_ADDR); /* "Channel Event Node Pointer Register 8" */
SFR_NOABS (ADC3_CHFCR, ADCn_CHFCR_t, ADC3_CHFCR_ADDR); /* "Channel Flag Clear Register" */
SFR_NOABS (ADC3_CHFR, ADCn_CHFR_t, ADC3_CHFR_ADDR); /* "Channel Flag Register" */
SFR_NOABS (ADC3_CRCR1, ADCn_CRCRm_t, ADC3_CRCR1_ADDR); /* "Conversion Request 1 Control Register" */
SFR_NOABS (ADC3_CRCR3, ADCn_CRCRm_t, ADC3_CRCR3_ADDR); /* "Conversion Request 3 Control Register" */
SFR_NOABS (ADC3_CRMR1, ADCn_CRMRm_t, ADC3_CRMR1_ADDR); /* "Conversion Request 1 Mode Register" */
SFR_NOABS (ADC3_CRMR3, ADCn_CRMRm_t, ADC3_CRMR3_ADDR); /* "Conversion Request 3 Mode Register" */
SFR_NOABS (ADC3_CRPR1, ADCn_CRPRm_t, ADC3_CRPR1_ADDR); /* "Conversion Request 1 Pending Register" */
SFR_NOABS (ADC3_CRPR3, ADCn_CRPRm_t, ADC3_CRPR3_ADDR); /* "Conversion Request 3 Pending Register" */
SFR_NOABS (ADC3_EMCTR, ADCn_EMCTR_t, ADC3_EMCTR_ADDR); /* "External Multiplexer Control Register" */
SFR_NOABS (ADC3_EVFCR, ADCn_EVFCR_t, ADC3_EVFCR_ADDR); /* "Event Flag Clear Register" */
SFR_NOABS (ADC3_EVFR, ADCn_EVFR_t, ADC3_EVFR_ADDR); /* "Event Flag Register" */
SFR_NOABS (ADC3_EVNPR, ADCn_EVNPR_t, ADC3_EVNPR_ADDR); /* "Event Node Pointer Register" */
SFR_NOABS (ADC3_GLOBCFG, ADCn_GLOBCFG_t, ADC3_GLOBCFG_ADDR); /* "Global Configuration Register" */
SFR_NOABS (ADC3_GLOBCTR, ADCn_GLOBCTR_t, ADC3_GLOBCTR_ADDR); /* "Global Control Register" */
SFR_NOABS (ADC3_GLOBSTR, ADCn_GLOBSTR_t, ADC3_GLOBSTR_ADDR); /* "Global Status Register" */
SFR_NOABS (ADC3_ID, ADCn_ID_t, ADC3_ID_ADDR);     /* "Module Identification Register" */
SFR_NOABS (ADC3_INPCR0, ADCn_INPCRm_t, ADC3_INPCR0_ADDR); /* "Input Class Register 0" */
SFR_NOABS (ADC3_INPCR1, ADCn_INPCRm_t, ADC3_INPCR1_ADDR); /* "Input Class Register 1" */
SFR_NOABS (ADC3_INPCR2, ADCn_INPCRm_t, ADC3_INPCR2_ADDR); /* "Input Class Register 2" */
SFR_NOABS (ADC3_INPCR3, ADCn_INPCRm_t, ADC3_INPCR3_ADDR); /* "Input Class Register 3" */
SFR_NOABS (ADC3_INTR, ADCn_INTR_t, ADC3_INTR_ADDR); /* "Interrupt Activation Register" */
SFR_NOABS (ADC3_LCBR0, ADCn_LCBRm_t, ADC3_LCBR0_ADDR); /* "Limit Check Boundary Register 0" */
SFR_NOABS (ADC3_LCBR1, ADCn_LCBRm_t, ADC3_LCBR1_ADDR); /* "Limit Check Boundary Register 1" */
SFR_NOABS (ADC3_LCBR2, ADCn_LCBRm_t, ADC3_LCBR2_ADDR); /* "Limit Check Boundary Register 2" */
SFR_NOABS (ADC3_LCBR3, ADCn_LCBRm_t, ADC3_LCBR3_ADDR); /* "Limit Check Boundary Register 3" */
SFR_NOABS (ADC3_Q0R0, ADC3_Q0R0_t, ADC3_Q0R0_ADDR); /* "Queue 0 Register 0" */
SFR_NOABS (ADC3_Q0R2, ADC3_Q0R2_t, ADC3_Q0R2_ADDR); /* "Queue 2 Register 0" */
SFR_NOABS (ADC3_Q0R4, ADC3_Q0R4_t, ADC3_Q0R4_ADDR); /* "Queue 4 Register 0" */
SFR_NOABS (ADC3_QBUR0, ADCn_QBURm_t, ADC3_QBUR0_ADDR); /* "Queue 0" */
SFR_NOABS (ADC3_QBUR2, ADCn_QBURm_t, ADC3_QBUR2_ADDR); /* "Queue 2" */
SFR_NOABS (ADC3_QBUR4, ADCn_QBURm_t, ADC3_QBUR4_ADDR); /* "Queue 4" */
SFR_NOABS (ADC3_QMR0, ADCn_QMRm_t, ADC3_QMR0_ADDR); /* "Queue 0 Mode Register" */
SFR_NOABS (ADC3_QMR2, ADCn_QMRm_t, ADC3_QMR2_ADDR); /* "Queue 2 Mode Register" */
SFR_NOABS (ADC3_QMR4, ADCn_QMRm_t, ADC3_QMR4_ADDR); /* "Queue 4 Mode Register" */
SFR_NOABS (ADC3_QSR0, ADCn_QSRm_t, ADC3_QSR0_ADDR); /* "Queue 0 Status Register" */
SFR_NOABS (ADC3_QSR2, ADCn_QSRm_t, ADC3_QSR2_ADDR); /* "Queue 2 Status Register" */
SFR_NOABS (ADC3_QSR4, ADCn_QSRm_t, ADC3_QSR4_ADDR); /* "Queue 4 Status Register" */
SFR_NOABS (ADC3_RCR0, ADCn_RCRm_t, ADC3_RCR0_ADDR); /* "Result Control Register 0" */
SFR_NOABS (ADC3_RCR1, ADCn_RCRm_t, ADC3_RCR1_ADDR); /* "Result Control Register 1" */
SFR_NOABS (ADC3_RCR10, ADCn_RCRm_t, ADC3_RCR10_ADDR); /* "Result Control Register 10" */
SFR_NOABS (ADC3_RCR11, ADCn_RCRm_t, ADC3_RCR11_ADDR); /* "Result Control Register 11" */
SFR_NOABS (ADC3_RCR12, ADCn_RCRm_t, ADC3_RCR12_ADDR); /* "Result Control Register 12" */
SFR_NOABS (ADC3_RCR13, ADCn_RCRm_t, ADC3_RCR13_ADDR); /* "Result Control Register 13" */
SFR_NOABS (ADC3_RCR14, ADCn_RCRm_t, ADC3_RCR14_ADDR); /* "Result Control Register 14" */
SFR_NOABS (ADC3_RCR15, ADCn_RCRm_t, ADC3_RCR15_ADDR); /* "Result Control Register 15" */
SFR_NOABS (ADC3_RCR2, ADCn_RCRm_t, ADC3_RCR2_ADDR); /* "Result Control Register 2" */
SFR_NOABS (ADC3_RCR3, ADCn_RCRm_t, ADC3_RCR3_ADDR); /* "Result Control Register 3" */
SFR_NOABS (ADC3_RCR4, ADCn_RCRm_t, ADC3_RCR4_ADDR); /* "Result Control Register 4" */
SFR_NOABS (ADC3_RCR5, ADCn_RCRm_t, ADC3_RCR5_ADDR); /* "Result Control Register 5" */
SFR_NOABS (ADC3_RCR6, ADCn_RCRm_t, ADC3_RCR6_ADDR); /* "Result Control Register 6" */
SFR_NOABS (ADC3_RCR7, ADCn_RCRm_t, ADC3_RCR7_ADDR); /* "Result Control Register 7" */
SFR_NOABS (ADC3_RCR8, ADCn_RCRm_t, ADC3_RCR8_ADDR); /* "Result Control Register 8" */
SFR_NOABS (ADC3_RCR9, ADCn_RCRm_t, ADC3_RCR9_ADDR); /* "Result Control Register 9" */
SFR_NOABS (ADC3_RESR0, ADCn_RESR0_t, ADC3_RESR0_ADDR); /* "Result Register 0" */
SFR_NOABS (ADC3_RESR1, ADCn_RESRm_t, ADC3_RESR1_ADDR); /* "Result Register 1" */
SFR_NOABS (ADC3_RESR10, ADCn_RESRm_t, ADC3_RESR10_ADDR); /* "Result Register 10" */
SFR_NOABS (ADC3_RESR11, ADCn_RESRm_t, ADC3_RESR11_ADDR); /* "Result Register 11" */
SFR_NOABS (ADC3_RESR12, ADCn_RESRm_t, ADC3_RESR12_ADDR); /* "Result Register 12" */
SFR_NOABS (ADC3_RESR13, ADCn_RESRm_t, ADC3_RESR13_ADDR); /* "Result Register 13" */
SFR_NOABS (ADC3_RESR14, ADCn_RESRm_t, ADC3_RESR14_ADDR); /* "Result Register 14" */
SFR_NOABS (ADC3_RESR15, ADCn_RESRm_t, ADC3_RESR15_ADDR); /* "Result Register 15" */
SFR_NOABS (ADC3_RESR2, ADCn_RESRm_t, ADC3_RESR2_ADDR); /* "Result Register 2" */
SFR_NOABS (ADC3_RESR3, ADCn_RESRm_t, ADC3_RESR3_ADDR); /* "Result Register 3" */
SFR_NOABS (ADC3_RESR4, ADCn_RESRm_t, ADC3_RESR4_ADDR); /* "Result Register 4" */
SFR_NOABS (ADC3_RESR5, ADCn_RESRm_t, ADC3_RESR5_ADDR); /* "Result Register 5" */
SFR_NOABS (ADC3_RESR6, ADCn_RESRm_t, ADC3_RESR6_ADDR); /* "Result Register 6" */
SFR_NOABS (ADC3_RESR7, ADCn_RESRm_t, ADC3_RESR7_ADDR); /* "Result Register 7" */
SFR_NOABS (ADC3_RESR8, ADCn_RESRm_t, ADC3_RESR8_ADDR); /* "Result Register 8" */
SFR_NOABS (ADC3_RESR9, ADCn_RESRm_t, ADC3_RESR9_ADDR); /* "Result Register 9" */
SFR_NOABS (ADC3_RESRD0, ADCn_RESRD0_t, ADC3_RESRD0_ADDR); /* "Result Register 0 for Debugging" */
SFR_NOABS (ADC3_RESRD1, ADCn_RESRDm_t, ADC3_RESRD1_ADDR); /* "Result Register 1 for Debugging" */
SFR_NOABS (ADC3_RESRD10, ADCn_RESRDm_t, ADC3_RESRD10_ADDR); /* "Result Register 10 for Debugging" */
SFR_NOABS (ADC3_RESRD11, ADCn_RESRDm_t, ADC3_RESRD11_ADDR); /* "Result Register 11 for Debugging" */
SFR_NOABS (ADC3_RESRD12, ADCn_RESRDm_t, ADC3_RESRD12_ADDR); /* "Result Register 12 for Debugging" */
SFR_NOABS (ADC3_RESRD13, ADCn_RESRDm_t, ADC3_RESRD13_ADDR); /* "Result Register 13 for Debugging" */
SFR_NOABS (ADC3_RESRD14, ADCn_RESRDm_t, ADC3_RESRD14_ADDR); /* "Result Register 14 for Debugging" */
SFR_NOABS (ADC3_RESRD15, ADCn_RESRDm_t, ADC3_RESRD15_ADDR); /* "Result Register 15 for Debugging" */
SFR_NOABS (ADC3_RESRD2, ADCn_RESRDm_t, ADC3_RESRD2_ADDR); /* "Result Register 2 for Debugging" */
SFR_NOABS (ADC3_RESRD3, ADCn_RESRDm_t, ADC3_RESRD3_ADDR); /* "Result Register 3 for Debugging" */
SFR_NOABS (ADC3_RESRD4, ADCn_RESRDm_t, ADC3_RESRD4_ADDR); /* "Result Register 4 for Debugging" */
SFR_NOABS (ADC3_RESRD5, ADCn_RESRDm_t, ADC3_RESRD5_ADDR); /* "Result Register 5 for Debugging" */
SFR_NOABS (ADC3_RESRD6, ADCn_RESRDm_t, ADC3_RESRD6_ADDR); /* "Result Register 6 for Debugging" */
SFR_NOABS (ADC3_RESRD7, ADCn_RESRDm_t, ADC3_RESRD7_ADDR); /* "Result Register 7 for Debugging" */
SFR_NOABS (ADC3_RESRD8, ADCn_RESRDm_t, ADC3_RESRD8_ADDR); /* "Result Register 8 for Debugging" */
SFR_NOABS (ADC3_RESRD9, ADCn_RESRDm_t, ADC3_RESRD9_ADDR); /* "Result Register 9 for Debugging" */
SFR_NOABS (ADC3_RNPR0, ADCn_RNPRm_t, ADC3_RNPR0_ADDR); /* "Result Node Pointer Register 0" */
SFR_NOABS (ADC3_RNPR8, ADCn_RNPRm_t, ADC3_RNPR8_ADDR); /* "Result Node Pointer Register 8" */
SFR_NOABS (ADC3_RSIR0, ADCn_RSIRm_t, ADC3_RSIR0_ADDR); /* "Request Source 0 Input Register" */
SFR_NOABS (ADC3_RSIR1, ADCn_RSIRm_t, ADC3_RSIR1_ADDR); /* "Request Source 1 Input Register" */
SFR_NOABS (ADC3_RSIR2, ADCn_RSIRm_t, ADC3_RSIR2_ADDR); /* "Request Source 2 Input Register" */
SFR_NOABS (ADC3_RSIR3, ADCn_RSIRm_t, ADC3_RSIR3_ADDR); /* "Request Source 3 Input Register" */
SFR_NOABS (ADC3_RSIR4, ADCn_RSIRm_t, ADC3_RSIR4_ADDR); /* "Request Source 4 Input Register" */
SFR_NOABS (ADC3_RSPR0, ADCn_RSPR0_t, ADC3_RSPR0_ADDR); /* "Request Source Priority Register 0" */
SFR_NOABS (ADC3_RSPR4, ADCn_RSPR4_t, ADC3_RSPR4_ADDR); /* "Request Source Priority Register 4" */
SFR_NOABS (ADC3_SYNCTR, ADCn_SYNCTR_t, ADC3_SYNCTR_ADDR); /* "Synchronization Control Register" */
SFR_NOABS (ADC3_VFR, ADCn_VFR_t, ADC3_VFR_ADDR);  /* "Valid Flag Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_ADC3_H_ (block "ADC3") */


