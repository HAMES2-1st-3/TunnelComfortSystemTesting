/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ADC2" of TriCore TC1797 (116 SFRs) */

#ifndef _HAVE_TRICORE_ADC2_ADDRESSES_H_
#define _HAVE_TRICORE_ADC2_ADDRESSES_H_

#define ADC2_RSIR0_ADDR       0xF0101810     /* "Request Source 0 Input Register" */
#define ADC2_RSIR1_ADDR       0xF0101814     /* "Request Source 0 Input Register" */
#define ADC2_RSIR2_ADDR       0xF0101818     /* "Request Source 0 Input Register" */
#define ADC2_RSIR3_ADDR       0xF010181C     /* "Request Source 0 Input Register" */
#define ADC2_RSIR4_ADDR       0xF0101820     /* "Request Source 0 Input Register" */
#define ADC2_GLOBCTR_ADDR     0xF0101830     /* "Global Control Register" */
#define ADC2_GLOBCFG_ADDR     0xF0101834     /* "Global Configuration Register" */
#define ADC2_GLOBSTR_ADDR     0xF0101838     /* "Global Status Register" */
#define ADC2_ASENR_ADDR       0xF010183C     /* "Arbitration Slot Enable Register" */
#define ADC2_RSPR0_ADDR       0xF0101840     /* "Request Source Priority Register 0" */
#define ADC2_RSPR4_ADDR       0xF0101844     /* "Request Source Priority Register 4" */
#define ADC2_SYNCTR_ADDR      0xF0101848     /* "Synchronization Control Register" */
#define ADC2_INPCR0_ADDR      0xF0101850     /* "Input Class Register 0" */
#define ADC2_INPCR1_ADDR      0xF0101854     /* "Input Class Register 1" */
#define ADC2_INPCR2_ADDR      0xF0101858     /* "Input Class Register 2" */
#define ADC2_INPCR3_ADDR      0xF010185C     /* "Input Class Register 3" */
#define ADC2_CHFR_ADDR        0xF0101860     /* "Channel Flag Register" */
#define ADC2_CHFCR_ADDR       0xF0101864     /* "Channel Flag Clear Register" */
#define ADC2_CHENPR0_ADDR     0xF0101868     /* "Channel Event Node Pointer Register 0" */
#define ADC2_CHENPR8_ADDR     0xF010186C     /* "Channel Event Node Pointer Register 8" */
#define ADC2_EVFR_ADDR        0xF0101870     /* "Event Flag Register" */
#define ADC2_EVFCR_ADDR       0xF0101874     /* "Event Flag Clear Register" */
#define ADC2_EVNPR_ADDR       0xF0101878     /* "Event Node Pointer Register" */
#define ADC2_QMR0_ADDR        0xF0101880     /* "Queue 0 Mode Register" */
#define ADC2_QSR0_ADDR        0xF0101884     /* "Queue 0 Status Register" */
#define ADC2_Q0R0_ADDR        0xF0101888     /* "Queue 0 Register 0" */
#define ADC2_QBUR0_ADDR       0xF010188C     /* "Queue 0" */
#define ADC2_CRCR1_ADDR       0xF0101890     /* "Conversion Request 1 Control Register" */
#define ADC2_CRPR1_ADDR       0xF0101894     /* "Conversion Request 1 Pending Register" */
#define ADC2_CRMR1_ADDR       0xF0101898     /* "Conversion Request 1 Mode Register" */
#define ADC2_QMR2_ADDR        0xF01018A0     /* "Queue 2 Mode Register" */
#define ADC2_QSR2_ADDR        0xF01018A4     /* "Queue 2 Status Register" */
#define ADC2_Q0R2_ADDR        0xF01018A8     /* "Queue 2 Register 0" */
#define ADC2_QBUR2_ADDR       0xF01018AC     /* "Queue 2" */
#define ADC2_CRCR3_ADDR       0xF01018B0     /* "Conversion Request 3 Control Register" */
#define ADC2_CRPR3_ADDR       0xF01018B4     /* "Conversion Request 3 Pending Register" */
#define ADC2_CRMR3_ADDR       0xF01018B8     /* "Conversion Request 3 Mode Register" */
#define ADC2_QMR4_ADDR        0xF01018C0     /* "Queue 4 Mode Register" */
#define ADC2_QSR4_ADDR        0xF01018C4     /* "Queue 4 Status Register" */
#define ADC2_Q0R4_ADDR        0xF01018C8     /* "Queue 4 Register 0" */
#define ADC2_QBUR4_ADDR       0xF01018CC     /* "Queue 4" */
#define ADC2_LCBR0_ADDR       0xF01018F0     /* "Limit Check Boundary Register 0" */
#define ADC2_LCBR1_ADDR       0xF01018F4     /* "Limit Check Boundary Register 1" */
#define ADC2_LCBR2_ADDR       0xF01018F8     /* "Limit Check Boundary Register 2" */
#define ADC2_LCBR3_ADDR       0xF01018FC     /* "Limit Check Boundary Register 3" */
#define ADC2_CHCTR0_ADDR      0xF0101900     /* "Channel 0 Control Register" */
#define ADC2_CHCTR1_ADDR      0xF0101904     /* "Channel 1 Control Register" */
#define ADC2_CHCTR2_ADDR      0xF0101908     /* "Channel 2 Control Register" */
#define ADC2_CHCTR3_ADDR      0xF010190C     /* "Channel 3 Control Register" */
#define ADC2_CHCTR4_ADDR      0xF0101910     /* "Channel 4 Control Register" */
#define ADC2_CHCTR5_ADDR      0xF0101914     /* "Channel 5 Control Register" */
#define ADC2_CHCTR6_ADDR      0xF0101918     /* "Channel 6 Control Register" */
#define ADC2_CHCTR7_ADDR      0xF010191C     /* "Channel 7 Control Register" */
#define ADC2_CHCTR8_ADDR      0xF0101920     /* "Channel 8 Control Register" */
#define ADC2_CHCTR9_ADDR      0xF0101924     /* "Channel 9 Control Register" */
#define ADC2_CHCTR10_ADDR     0xF0101928     /* "Channel 10 Control Register" */
#define ADC2_CHCTR11_ADDR     0xF010192C     /* "Channel 11 Control Register" */
#define ADC2_CHCTR12_ADDR     0xF0101930     /* "Channel 12 Control Register" */
#define ADC2_CHCTR13_ADDR     0xF0101934     /* "Channel 13 Control Register" */
#define ADC2_CHCTR14_ADDR     0xF0101938     /* "Channel 14 Control Register" */
#define ADC2_CHCTR15_ADDR     0xF010193C     /* "Channel 15 Control Register" */
#define ADC2_RCR0_ADDR        0xF0101940     /* "Result Control Register 0" */
#define ADC2_RCR1_ADDR        0xF0101944     /* "Result Control Register 1" */
#define ADC2_RCR2_ADDR        0xF0101948     /* "Result Control Register 2" */
#define ADC2_RCR3_ADDR        0xF010194C     /* "Result Control Register 3" */
#define ADC2_RCR4_ADDR        0xF0101950     /* "Result Control Register 4" */
#define ADC2_RCR5_ADDR        0xF0101954     /* "Result Control Register 5" */
#define ADC2_RCR6_ADDR        0xF0101958     /* "Result Control Register 6" */
#define ADC2_RCR7_ADDR        0xF010195C     /* "Result Control Register 7" */
#define ADC2_RCR8_ADDR        0xF0101960     /* "Result Control Register 8" */
#define ADC2_RCR9_ADDR        0xF0101964     /* "Result Control Register 9" */
#define ADC2_RCR10_ADDR       0xF0101968     /* "Result Control Register 10" */
#define ADC2_RCR11_ADDR       0xF010196C     /* "Result Control Register 11" */
#define ADC2_RCR12_ADDR       0xF0101970     /* "Result Control Register 12" */
#define ADC2_RCR13_ADDR       0xF0101974     /* "Result Control Register 13" */
#define ADC2_RCR14_ADDR       0xF0101978     /* "Result Control Register 14" */
#define ADC2_RCR15_ADDR       0xF010197C     /* "Result Control Register 15" */
#define ADC2_RESR0_ADDR       0xF0101980     /* "Result Register 0" */
#define ADC2_RESR1_ADDR       0xF0101984     /* "Result Register 1" */
#define ADC2_RESR2_ADDR       0xF0101988     /* "Result Register 2" */
#define ADC2_RESR3_ADDR       0xF010198C     /* "Result Register 3" */
#define ADC2_RESR4_ADDR       0xF0101990     /* "Result Register 4" */
#define ADC2_RESR5_ADDR       0xF0101994     /* "Result Register 5" */
#define ADC2_RESR6_ADDR       0xF0101998     /* "Result Register 6" */
#define ADC2_RESR7_ADDR       0xF010199C     /* "Result Register 7" */
#define ADC2_RESR8_ADDR       0xF01019A0     /* "Result Register 8" */
#define ADC2_RESR9_ADDR       0xF01019A4     /* "Result Register 9" */
#define ADC2_RESR10_ADDR      0xF01019A8     /* "Result Register 10" */
#define ADC2_RESR11_ADDR      0xF01019AC     /* "Result Register 11" */
#define ADC2_RESR12_ADDR      0xF01019B0     /* "Result Register 12" */
#define ADC2_RESR13_ADDR      0xF01019B4     /* "Result Register 13" */
#define ADC2_RESR14_ADDR      0xF01019B8     /* "Result Register 14" */
#define ADC2_RESR15_ADDR      0xF01019BC     /* "Result Register 15" */
#define ADC2_RESRD0_ADDR      0xF01019C0     /* "Result Register 0 for Debugging" */
#define ADC2_RESRD1_ADDR      0xF01019C4     /* "Result Register 1 for Debugging" */
#define ADC2_RESRD2_ADDR      0xF01019C8     /* "Result Register 2 for Debugging" */
#define ADC2_RESRD3_ADDR      0xF01019CC     /* "Result Register 3 for Debugging" */
#define ADC2_RESRD4_ADDR      0xF01019D0     /* "Result Register 4 for Debugging" */
#define ADC2_RESRD5_ADDR      0xF01019D4     /* "Result Register 5 for Debugging" */
#define ADC2_RESRD6_ADDR      0xF01019D8     /* "Result Register 6 for Debugging" */
#define ADC2_RESRD7_ADDR      0xF01019DC     /* "Result Register 7 for Debugging" */
#define ADC2_RESRD8_ADDR      0xF01019E0     /* "Result Register 8 for Debugging" */
#define ADC2_RESRD9_ADDR      0xF01019E4     /* "Result Register 9 for Debugging" */
#define ADC2_RESRD10_ADDR     0xF01019E8     /* "Result Register 10 for Debugging" */
#define ADC2_RESRD11_ADDR     0xF01019EC     /* "Result Register 11 for Debugging" */
#define ADC2_RESRD12_ADDR     0xF01019F0     /* "Result Register 12 for Debugging" */
#define ADC2_RESRD13_ADDR     0xF01019F4     /* "Result Register 13 for Debugging" */
#define ADC2_RESRD14_ADDR     0xF01019F8     /* "Result Register 14 for Debugging" */
#define ADC2_RESRD15_ADDR     0xF01019FC     /* "Result Register 15 for Debugging" */
#define ADC2_VFR_ADDR         0xF0101A00     /* "Valid Flag Register" */
#define ADC2_INTR_ADDR        0xF0101A04     /* "Interrupt Activation Register" */
#define ADC2_RNPR0_ADDR       0xF0101A08     /* "Result Node Pointer Register 0" */
#define ADC2_RNPR8_ADDR       0xF0101A0C     /* "Result Node Pointer Register 8" */
#define ADC2_ALR0_ADDR        0xF0101A10     /* "Alias Register 0" */
#define ADC2_APR_ADDR         0xF0101A18     /* "Access Protection Register" */
#define ADC2_EMCTR_ADDR       0xF0101A20     /* "External Multiplexer Control Register" */


#endif /* _HAVE_TRICORE_ADC2_ADDRESSES_H_ (block "ADC2") */


