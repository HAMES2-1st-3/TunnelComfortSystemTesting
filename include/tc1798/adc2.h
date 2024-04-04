/* (c) HighTec EDV-Systeme GmbH */

/* block "ADC2" of TriCore TC1798 (119 SFRs) */

#include <tc1798/adc2/addr.h>

#include <tc1798/adc2/masks.h>
#include <tc1798/adc0-3/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1798/adc2/types.h>
#include <tc1798/adc0-3/sharetypes.h>

#ifndef _HAVE_TRICORE_ADC2_H_
#define _HAVE_TRICORE_ADC2_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (ADC2_ALR0, ADCn_ALR0_t, ADC2_ALR0_ADDR); /* "Alias Register 0" */
SFR_NOABS (ADC2_APR, ADCn_APR_t, ADC2_APR_ADDR);  /* "Access Protection Register" */
SFR_NOABS (ADC2_ASENR, ADCn_ASENR_t, ADC2_ASENR_ADDR); /* "Arbitration Slot Enable Register" */
SFR_NOABS (ADC2_BWDCFGR, ADCn_BWDCFGR_t, ADC2_BWDCFGR_ADDR); /* "Broken Wire Detection Configuration Register" */
SFR_NOABS (ADC2_BWDENR, ADCn_BWDENR_t, ADC2_BWDENR_ADDR); /* "Broken Wire Detection Enable Register" */
SFR_NOABS (ADC2_CHCTR0, ADCn_CHCTRm_t, ADC2_CHCTR0_ADDR); /* "Channel 0 Control Register" */
SFR_NOABS (ADC2_CHCTR1, ADCn_CHCTRm_t, ADC2_CHCTR1_ADDR); /* "Channel 1 Control Register" */
SFR_NOABS (ADC2_CHCTR10, ADCn_CHCTRm_t, ADC2_CHCTR10_ADDR); /* "Channel 10 Control Register" */
SFR_NOABS (ADC2_CHCTR11, ADCn_CHCTRm_t, ADC2_CHCTR11_ADDR); /* "Channel 11 Control Register" */
SFR_NOABS (ADC2_CHCTR12, ADCn_CHCTRm_t, ADC2_CHCTR12_ADDR); /* "Channel 12 Control Register" */
SFR_NOABS (ADC2_CHCTR13, ADCn_CHCTRm_t, ADC2_CHCTR13_ADDR); /* "Channel 13 Control Register" */
SFR_NOABS (ADC2_CHCTR14, ADCn_CHCTRm_t, ADC2_CHCTR14_ADDR); /* "Channel 14 Control Register" */
SFR_NOABS (ADC2_CHCTR15, ADCn_CHCTRm_t, ADC2_CHCTR15_ADDR); /* "Channel 15 Control Register" */
SFR_NOABS (ADC2_CHCTR2, ADCn_CHCTRm_t, ADC2_CHCTR2_ADDR); /* "Channel 2 Control Register" */
SFR_NOABS (ADC2_CHCTR3, ADCn_CHCTRm_t, ADC2_CHCTR3_ADDR); /* "Channel 3 Control Register" */
SFR_NOABS (ADC2_CHCTR4, ADCn_CHCTRm_t, ADC2_CHCTR4_ADDR); /* "Channel 4 Control Register" */
SFR_NOABS (ADC2_CHCTR5, ADCn_CHCTRm_t, ADC2_CHCTR5_ADDR); /* "Channel 5 Control Register" */
SFR_NOABS (ADC2_CHCTR6, ADCn_CHCTRm_t, ADC2_CHCTR6_ADDR); /* "Channel 6 Control Register" */
SFR_NOABS (ADC2_CHCTR7, ADCn_CHCTRm_t, ADC2_CHCTR7_ADDR); /* "Channel 7 Control Register" */
SFR_NOABS (ADC2_CHCTR8, ADCn_CHCTRm_t, ADC2_CHCTR8_ADDR); /* "Channel 8 Control Register" */
SFR_NOABS (ADC2_CHCTR9, ADCn_CHCTRm_t, ADC2_CHCTR9_ADDR); /* "Channel 9 Control Register" */
SFR_NOABS (ADC2_CHENPR0, ADCn_CHENPRm_t, ADC2_CHENPR0_ADDR); /* "Channel Event Node Pointer Register 0" */
SFR_NOABS (ADC2_CHENPR8, ADCn_CHENPRm_t, ADC2_CHENPR8_ADDR); /* "Channel Event Node Pointer Register 8" */
SFR_NOABS (ADC2_CHFCR, ADCn_CHFCR_t, ADC2_CHFCR_ADDR); /* "Channel Flag Clear Register" */
SFR_NOABS (ADC2_CHFR, ADCn_CHFR_t, ADC2_CHFR_ADDR); /* "Channel Flag Register" */
SFR_NOABS (ADC2_CRCR1, ADCn_CRCRm_t, ADC2_CRCR1_ADDR); /* "Conversion Request 1 Control Register" */
SFR_NOABS (ADC2_CRCR3, ADCn_CRCRm_t, ADC2_CRCR3_ADDR); /* "Conversion Request 3 Control Register" */
SFR_NOABS (ADC2_CRMR1, ADCn_CRMRm_t, ADC2_CRMR1_ADDR); /* "Conversion Request 1 Mode Register" */
SFR_NOABS (ADC2_CRMR3, ADCn_CRMRm_t, ADC2_CRMR3_ADDR); /* "Conversion Request 3 Mode Register" */
SFR_NOABS (ADC2_CRPR1, ADCn_CRPRm_t, ADC2_CRPR1_ADDR); /* "Conversion Request 1 Pending Register" */
SFR_NOABS (ADC2_CRPR3, ADCn_CRPRm_t, ADC2_CRPR3_ADDR); /* "Conversion Request 3 Pending Register" */
SFR_NOABS (ADC2_EMCTR, ADCn_EMCTR_t, ADC2_EMCTR_ADDR); /* "External Multiplexer Control Register" */
SFR_NOABS (ADC2_EVFCR, ADCn_EVFCR_t, ADC2_EVFCR_ADDR); /* "Event Flag Clear Register" */
SFR_NOABS (ADC2_EVFR, ADCn_EVFR_t, ADC2_EVFR_ADDR); /* "Event Flag Register" */
SFR_NOABS (ADC2_EVNPR, ADCn_EVNPR_t, ADC2_EVNPR_ADDR); /* "Event Node Pointer Register" */
SFR_NOABS (ADC2_GLOBCFG, ADCn_GLOBCFG_t, ADC2_GLOBCFG_ADDR); /* "Global Configuration Register" */
SFR_NOABS (ADC2_GLOBCTR, ADCn_GLOBCTR_t, ADC2_GLOBCTR_ADDR); /* "Global Control Register" */
SFR_NOABS (ADC2_GLOBSTR, ADCn_GLOBSTR_t, ADC2_GLOBSTR_ADDR); /* "Global Status Register" */
SFR_NOABS (ADC2_ID, ADCn_ID_t, ADC2_ID_ADDR);     /* "Module Identification Register" */
SFR_NOABS (ADC2_INPCR0, ADCn_INPCRm_t, ADC2_INPCR0_ADDR); /* "Input Class Register 0" */
SFR_NOABS (ADC2_INPCR1, ADCn_INPCRm_t, ADC2_INPCR1_ADDR); /* "Input Class Register 1" */
SFR_NOABS (ADC2_INPCR2, ADCn_INPCRm_t, ADC2_INPCR2_ADDR); /* "Input Class Register 2" */
SFR_NOABS (ADC2_INPCR3, ADCn_INPCRm_t, ADC2_INPCR3_ADDR); /* "Input Class Register 3" */
SFR_NOABS (ADC2_INTR, ADCn_INTR_t, ADC2_INTR_ADDR); /* "Interrupt Activation Register" */
SFR_NOABS (ADC2_LCBR0, ADCn_LCBRm_t, ADC2_LCBR0_ADDR); /* "Limit Check Boundary Register 0" */
SFR_NOABS (ADC2_LCBR1, ADCn_LCBRm_t, ADC2_LCBR1_ADDR); /* "Limit Check Boundary Register 1" */
SFR_NOABS (ADC2_LCBR2, ADCn_LCBRm_t, ADC2_LCBR2_ADDR); /* "Limit Check Boundary Register 2" */
SFR_NOABS (ADC2_LCBR3, ADCn_LCBRm_t, ADC2_LCBR3_ADDR); /* "Limit Check Boundary Register 3" */
SFR_NOABS (ADC2_Q0R0, ADC2_Q0R0_t, ADC2_Q0R0_ADDR); /* "Queue 0 Register 0" */
SFR_NOABS (ADC2_Q0R2, ADC2_Q0R2_t, ADC2_Q0R2_ADDR); /* "Queue 2 Register 0" */
SFR_NOABS (ADC2_Q0R4, ADC2_Q0R4_t, ADC2_Q0R4_ADDR); /* "Queue 4 Register 0" */
SFR_NOABS (ADC2_QBUR0, ADCn_QBURm_t, ADC2_QBUR0_ADDR); /* "Queue 0" */
SFR_NOABS (ADC2_QBUR2, ADCn_QBURm_t, ADC2_QBUR2_ADDR); /* "Queue 2" */
SFR_NOABS (ADC2_QBUR4, ADCn_QBURm_t, ADC2_QBUR4_ADDR); /* "Queue 4" */
SFR_NOABS (ADC2_QMR0, ADCn_QMRm_t, ADC2_QMR0_ADDR); /* "Queue 0 Mode Register" */
SFR_NOABS (ADC2_QMR2, ADCn_QMRm_t, ADC2_QMR2_ADDR); /* "Queue 2 Mode Register" */
SFR_NOABS (ADC2_QMR4, ADCn_QMRm_t, ADC2_QMR4_ADDR); /* "Queue 4 Mode Register" */
SFR_NOABS (ADC2_QSR0, ADCn_QSRm_t, ADC2_QSR0_ADDR); /* "Queue 0 Status Register" */
SFR_NOABS (ADC2_QSR2, ADCn_QSRm_t, ADC2_QSR2_ADDR); /* "Queue 2 Status Register" */
SFR_NOABS (ADC2_QSR4, ADCn_QSRm_t, ADC2_QSR4_ADDR); /* "Queue 4 Status Register" */
SFR_NOABS (ADC2_RCR0, ADCn_RCRm_t, ADC2_RCR0_ADDR); /* "Result Control Register 0" */
SFR_NOABS (ADC2_RCR1, ADCn_RCRm_t, ADC2_RCR1_ADDR); /* "Result Control Register 1" */
SFR_NOABS (ADC2_RCR10, ADCn_RCRm_t, ADC2_RCR10_ADDR); /* "Result Control Register 10" */
SFR_NOABS (ADC2_RCR11, ADCn_RCRm_t, ADC2_RCR11_ADDR); /* "Result Control Register 11" */
SFR_NOABS (ADC2_RCR12, ADCn_RCRm_t, ADC2_RCR12_ADDR); /* "Result Control Register 12" */
SFR_NOABS (ADC2_RCR13, ADCn_RCRm_t, ADC2_RCR13_ADDR); /* "Result Control Register 13" */
SFR_NOABS (ADC2_RCR14, ADCn_RCRm_t, ADC2_RCR14_ADDR); /* "Result Control Register 14" */
SFR_NOABS (ADC2_RCR15, ADCn_RCRm_t, ADC2_RCR15_ADDR); /* "Result Control Register 15" */
SFR_NOABS (ADC2_RCR2, ADCn_RCRm_t, ADC2_RCR2_ADDR); /* "Result Control Register 2" */
SFR_NOABS (ADC2_RCR3, ADCn_RCRm_t, ADC2_RCR3_ADDR); /* "Result Control Register 3" */
SFR_NOABS (ADC2_RCR4, ADCn_RCRm_t, ADC2_RCR4_ADDR); /* "Result Control Register 4" */
SFR_NOABS (ADC2_RCR5, ADCn_RCRm_t, ADC2_RCR5_ADDR); /* "Result Control Register 5" */
SFR_NOABS (ADC2_RCR6, ADCn_RCRm_t, ADC2_RCR6_ADDR); /* "Result Control Register 6" */
SFR_NOABS (ADC2_RCR7, ADCn_RCRm_t, ADC2_RCR7_ADDR); /* "Result Control Register 7" */
SFR_NOABS (ADC2_RCR8, ADCn_RCRm_t, ADC2_RCR8_ADDR); /* "Result Control Register 8" */
SFR_NOABS (ADC2_RCR9, ADCn_RCRm_t, ADC2_RCR9_ADDR); /* "Result Control Register 9" */
SFR_NOABS (ADC2_RESR0, ADCn_RESR0_t, ADC2_RESR0_ADDR); /* "Result Register 0" */
SFR_NOABS (ADC2_RESR1, ADCn_RESRm_t, ADC2_RESR1_ADDR); /* "Result Register 1" */
SFR_NOABS (ADC2_RESR10, ADCn_RESRm_t, ADC2_RESR10_ADDR); /* "Result Register 10" */
SFR_NOABS (ADC2_RESR11, ADCn_RESRm_t, ADC2_RESR11_ADDR); /* "Result Register 11" */
SFR_NOABS (ADC2_RESR12, ADCn_RESRm_t, ADC2_RESR12_ADDR); /* "Result Register 12" */
SFR_NOABS (ADC2_RESR13, ADCn_RESRm_t, ADC2_RESR13_ADDR); /* "Result Register 13" */
SFR_NOABS (ADC2_RESR14, ADCn_RESRm_t, ADC2_RESR14_ADDR); /* "Result Register 14" */
SFR_NOABS (ADC2_RESR15, ADCn_RESRm_t, ADC2_RESR15_ADDR); /* "Result Register 15" */
SFR_NOABS (ADC2_RESR2, ADCn_RESRm_t, ADC2_RESR2_ADDR); /* "Result Register 2" */
SFR_NOABS (ADC2_RESR3, ADCn_RESRm_t, ADC2_RESR3_ADDR); /* "Result Register 3" */
SFR_NOABS (ADC2_RESR4, ADCn_RESRm_t, ADC2_RESR4_ADDR); /* "Result Register 4" */
SFR_NOABS (ADC2_RESR5, ADCn_RESRm_t, ADC2_RESR5_ADDR); /* "Result Register 5" */
SFR_NOABS (ADC2_RESR6, ADCn_RESRm_t, ADC2_RESR6_ADDR); /* "Result Register 6" */
SFR_NOABS (ADC2_RESR7, ADCn_RESRm_t, ADC2_RESR7_ADDR); /* "Result Register 7" */
SFR_NOABS (ADC2_RESR8, ADCn_RESRm_t, ADC2_RESR8_ADDR); /* "Result Register 8" */
SFR_NOABS (ADC2_RESR9, ADCn_RESRm_t, ADC2_RESR9_ADDR); /* "Result Register 9" */
SFR_NOABS (ADC2_RESRD0, ADCn_RESRD0_t, ADC2_RESRD0_ADDR); /* "Result Register 0 for Debugging" */
SFR_NOABS (ADC2_RESRD1, ADCn_RESRDm_t, ADC2_RESRD1_ADDR); /* "Result Register 1 for Debugging" */
SFR_NOABS (ADC2_RESRD10, ADCn_RESRDm_t, ADC2_RESRD10_ADDR); /* "Result Register 10 for Debugging" */
SFR_NOABS (ADC2_RESRD11, ADCn_RESRDm_t, ADC2_RESRD11_ADDR); /* "Result Register 11 for Debugging" */
SFR_NOABS (ADC2_RESRD12, ADCn_RESRDm_t, ADC2_RESRD12_ADDR); /* "Result Register 12 for Debugging" */
SFR_NOABS (ADC2_RESRD13, ADCn_RESRDm_t, ADC2_RESRD13_ADDR); /* "Result Register 13 for Debugging" */
SFR_NOABS (ADC2_RESRD14, ADCn_RESRDm_t, ADC2_RESRD14_ADDR); /* "Result Register 14 for Debugging" */
SFR_NOABS (ADC2_RESRD15, ADCn_RESRDm_t, ADC2_RESRD15_ADDR); /* "Result Register 15 for Debugging" */
SFR_NOABS (ADC2_RESRD2, ADCn_RESRDm_t, ADC2_RESRD2_ADDR); /* "Result Register 2 for Debugging" */
SFR_NOABS (ADC2_RESRD3, ADCn_RESRDm_t, ADC2_RESRD3_ADDR); /* "Result Register 3 for Debugging" */
SFR_NOABS (ADC2_RESRD4, ADCn_RESRDm_t, ADC2_RESRD4_ADDR); /* "Result Register 4 for Debugging" */
SFR_NOABS (ADC2_RESRD5, ADCn_RESRDm_t, ADC2_RESRD5_ADDR); /* "Result Register 5 for Debugging" */
SFR_NOABS (ADC2_RESRD6, ADCn_RESRDm_t, ADC2_RESRD6_ADDR); /* "Result Register 6 for Debugging" */
SFR_NOABS (ADC2_RESRD7, ADCn_RESRDm_t, ADC2_RESRD7_ADDR); /* "Result Register 7 for Debugging" */
SFR_NOABS (ADC2_RESRD8, ADCn_RESRDm_t, ADC2_RESRD8_ADDR); /* "Result Register 8 for Debugging" */
SFR_NOABS (ADC2_RESRD9, ADCn_RESRDm_t, ADC2_RESRD9_ADDR); /* "Result Register 9 for Debugging" */
SFR_NOABS (ADC2_RNPR0, ADCn_RNPRm_t, ADC2_RNPR0_ADDR); /* "Result Node Pointer Register 0" */
SFR_NOABS (ADC2_RNPR8, ADCn_RNPRm_t, ADC2_RNPR8_ADDR); /* "Result Node Pointer Register 8" */
SFR_NOABS (ADC2_RSIR0, ADCn_RSIRm_t, ADC2_RSIR0_ADDR); /* "Request Source 0 Input Register" */
SFR_NOABS (ADC2_RSIR1, ADCn_RSIRm_t, ADC2_RSIR1_ADDR); /* "Request Source 1 Input Register" */
SFR_NOABS (ADC2_RSIR2, ADCn_RSIRm_t, ADC2_RSIR2_ADDR); /* "Request Source 2 Input Register" */
SFR_NOABS (ADC2_RSIR3, ADCn_RSIRm_t, ADC2_RSIR3_ADDR); /* "Request Source 3 Input Register" */
SFR_NOABS (ADC2_RSIR4, ADCn_RSIRm_t, ADC2_RSIR4_ADDR); /* "Request Source 4 Input Register" */
SFR_NOABS (ADC2_RSPR0, ADCn_RSPR0_t, ADC2_RSPR0_ADDR); /* "Request Source Priority Register 0" */
SFR_NOABS (ADC2_RSPR4, ADCn_RSPR4_t, ADC2_RSPR4_ADDR); /* "Request Source Priority Register 4" */
SFR_NOABS (ADC2_SYNCTR, ADCn_SYNCTR_t, ADC2_SYNCTR_ADDR); /* "Synchronization Control Register" */
SFR_NOABS (ADC2_VFR, ADCn_VFR_t, ADC2_VFR_ADDR);  /* "Valid Flag Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_ADC2_H_ (block "ADC2") */


