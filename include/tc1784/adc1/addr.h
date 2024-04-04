/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ADC1" of TriCore TC1784 (117 SFRs) */

#ifndef _HAVE_TRICORE_ADC1_ADDRESSES_H_
#define _HAVE_TRICORE_ADC1_ADDRESSES_H_

#define ADC1_ID_ADDR          0xF0101408     /* "Module Identification Register" */
#define ADC1_RSIR0_ADDR       0xF0101410     /* "Request Source 0 Input Register" */
#define ADC1_RSIR1_ADDR       0xF0101414     /* "Request Source 1 Input Register" */
#define ADC1_RSIR2_ADDR       0xF0101418     /* "Request Source 2 Input Register" */
#define ADC1_RSIR3_ADDR       0xF010141C     /* "Request Source 3 Input Register" */
#define ADC1_RSIR4_ADDR       0xF0101420     /* "Request Source 4 Input Register" */
#define ADC1_GLOBCTR_ADDR     0xF0101430     /* "Global Control Register" */
#define ADC1_GLOBCFG_ADDR     0xF0101434     /* "Global Configuration Register" */
#define ADC1_GLOBSTR_ADDR     0xF0101438     /* "Global Status Register" */
#define ADC1_ASENR_ADDR       0xF010143C     /* "Arbitration Slot Enable Register" */
#define ADC1_RSPR0_ADDR       0xF0101440     /* "Request Source Priority Register 0" */
#define ADC1_RSPR4_ADDR       0xF0101444     /* "Request Source Priority Register 4" */
#define ADC1_SYNCTR_ADDR      0xF0101448     /* "Synchronization Control Register" */
#define ADC1_INPCR0_ADDR      0xF0101450     /* "Input Class Register 0" */
#define ADC1_INPCR1_ADDR      0xF0101454     /* "Input Class Register 1" */
#define ADC1_INPCR2_ADDR      0xF0101458     /* "Input Class Register 2" */
#define ADC1_INPCR3_ADDR      0xF010145C     /* "Input Class Register 3" */
#define ADC1_CHFR_ADDR        0xF0101460     /* "Channel Flag Register" */
#define ADC1_CHFCR_ADDR       0xF0101464     /* "Channel Flag Clear Register" */
#define ADC1_CHENPR0_ADDR     0xF0101468     /* "Channel Event Node Pointer Register 0" */
#define ADC1_CHENPR8_ADDR     0xF010146C     /* "Channel Event Node Pointer Register 8" */
#define ADC1_EVFR_ADDR        0xF0101470     /* "Event Flag Register" */
#define ADC1_EVFCR_ADDR       0xF0101474     /* "Event Flag Clear Register" */
#define ADC1_EVNPR_ADDR       0xF0101478     /* "Event Node Pointer Register" */
#define ADC1_QMR0_ADDR        0xF0101480     /* "Queue 0 Mode Register" */
#define ADC1_QSR0_ADDR        0xF0101484     /* "Queue 0 Status Register" */
#define ADC1_Q0R0_ADDR        0xF0101488     /* "Queue 0 Register 0" */
#define ADC1_QBUR0_ADDR       0xF010148C     /* "Queue 0" */
#define ADC1_CRCR1_ADDR       0xF0101490     /* "Conversion Request 1 Control Register" */
#define ADC1_CRPR1_ADDR       0xF0101494     /* "Conversion Request 1 Pending Register" */
#define ADC1_CRMR1_ADDR       0xF0101498     /* "Conversion Request 1 Mode Register" */
#define ADC1_QMR2_ADDR        0xF01014A0     /* "Queue 2 Mode Register" */
#define ADC1_QSR2_ADDR        0xF01014A4     /* "Queue 2 Status Register" */
#define ADC1_Q0R2_ADDR        0xF01014A8     /* "Queue 2 Register 0" */
#define ADC1_QBUR2_ADDR       0xF01014AC     /* "Queue 2" */
#define ADC1_CRCR3_ADDR       0xF01014B0     /* "Conversion Request 3 Control Register" */
#define ADC1_CRPR3_ADDR       0xF01014B4     /* "Conversion Request 3 Pending Register" */
#define ADC1_CRMR3_ADDR       0xF01014B8     /* "Conversion Request 3 Mode Register" */
#define ADC1_QMR4_ADDR        0xF01014C0     /* "Queue 4 Mode Register" */
#define ADC1_QSR4_ADDR        0xF01014C4     /* "Queue 4 Status Register" */
#define ADC1_Q0R4_ADDR        0xF01014C8     /* "Queue 4 Register 0" */
#define ADC1_QBUR4_ADDR       0xF01014CC     /* "Queue 4" */
#define ADC1_LCBR0_ADDR       0xF01014F0     /* "Limit Check Boundary Register 0" */
#define ADC1_LCBR1_ADDR       0xF01014F4     /* "Limit Check Boundary Register 1" */
#define ADC1_LCBR2_ADDR       0xF01014F8     /* "Limit Check Boundary Register 2" */
#define ADC1_LCBR3_ADDR       0xF01014FC     /* "Limit Check Boundary Register 3" */
#define ADC1_CHCTR0_ADDR      0xF0101500     /* "Channel 0 Control Register" */
#define ADC1_CHCTR1_ADDR      0xF0101504     /* "Channel 1 Control Register" */
#define ADC1_CHCTR2_ADDR      0xF0101508     /* "Channel 2 Control Register" */
#define ADC1_CHCTR3_ADDR      0xF010150C     /* "Channel 3 Control Register" */
#define ADC1_CHCTR4_ADDR      0xF0101510     /* "Channel 4 Control Register" */
#define ADC1_CHCTR5_ADDR      0xF0101514     /* "Channel 5 Control Register" */
#define ADC1_CHCTR6_ADDR      0xF0101518     /* "Channel 6 Control Register" */
#define ADC1_CHCTR7_ADDR      0xF010151C     /* "Channel 7 Control Register" */
#define ADC1_CHCTR8_ADDR      0xF0101520     /* "Channel 8 Control Register" */
#define ADC1_CHCTR9_ADDR      0xF0101524     /* "Channel 9 Control Register" */
#define ADC1_CHCTR10_ADDR     0xF0101528     /* "Channel 10 Control Register" */
#define ADC1_CHCTR11_ADDR     0xF010152C     /* "Channel 11 Control Register" */
#define ADC1_CHCTR12_ADDR     0xF0101530     /* "Channel 12 Control Register" */
#define ADC1_CHCTR13_ADDR     0xF0101534     /* "Channel 13 Control Register" */
#define ADC1_CHCTR14_ADDR     0xF0101538     /* "Channel 14 Control Register" */
#define ADC1_CHCTR15_ADDR     0xF010153C     /* "Channel 15 Control Register" */
#define ADC1_RCR0_ADDR        0xF0101540     /* "Result Control Register 0" */
#define ADC1_RCR1_ADDR        0xF0101544     /* "Result Control Register 1" */
#define ADC1_RCR2_ADDR        0xF0101548     /* "Result Control Register 2" */
#define ADC1_RCR3_ADDR        0xF010154C     /* "Result Control Register 3" */
#define ADC1_RCR4_ADDR        0xF0101550     /* "Result Control Register 4" */
#define ADC1_RCR5_ADDR        0xF0101554     /* "Result Control Register 5" */
#define ADC1_RCR6_ADDR        0xF0101558     /* "Result Control Register 6" */
#define ADC1_RCR7_ADDR        0xF010155C     /* "Result Control Register 7" */
#define ADC1_RCR8_ADDR        0xF0101560     /* "Result Control Register 8" */
#define ADC1_RCR9_ADDR        0xF0101564     /* "Result Control Register 9" */
#define ADC1_RCR10_ADDR       0xF0101568     /* "Result Control Register 10" */
#define ADC1_RCR11_ADDR       0xF010156C     /* "Result Control Register 11" */
#define ADC1_RCR12_ADDR       0xF0101570     /* "Result Control Register 12" */
#define ADC1_RCR13_ADDR       0xF0101574     /* "Result Control Register 13" */
#define ADC1_RCR14_ADDR       0xF0101578     /* "Result Control Register 14" */
#define ADC1_RCR15_ADDR       0xF010157C     /* "Result Control Register 15" */
#define ADC1_RESR0_ADDR       0xF0101580     /* "Result Register 0" */
#define ADC1_RESR1_ADDR       0xF0101584     /* "Result Register 1" */
#define ADC1_RESR2_ADDR       0xF0101588     /* "Result Register 2" */
#define ADC1_RESR3_ADDR       0xF010158C     /* "Result Register 3" */
#define ADC1_RESR4_ADDR       0xF0101590     /* "Result Register 4" */
#define ADC1_RESR5_ADDR       0xF0101594     /* "Result Register 5" */
#define ADC1_RESR6_ADDR       0xF0101598     /* "Result Register 6" */
#define ADC1_RESR7_ADDR       0xF010159C     /* "Result Register 7" */
#define ADC1_RESR8_ADDR       0xF01015A0     /* "Result Register 8" */
#define ADC1_RESR9_ADDR       0xF01015A4     /* "Result Register 9" */
#define ADC1_RESR10_ADDR      0xF01015A8     /* "Result Register 10" */
#define ADC1_RESR11_ADDR      0xF01015AC     /* "Result Register 11" */
#define ADC1_RESR12_ADDR      0xF01015B0     /* "Result Register 12" */
#define ADC1_RESR13_ADDR      0xF01015B4     /* "Result Register 13" */
#define ADC1_RESR14_ADDR      0xF01015B8     /* "Result Register 14" */
#define ADC1_RESR15_ADDR      0xF01015BC     /* "Result Register 15" */
#define ADC1_RESRD0_ADDR      0xF01015C0     /* "Result Register 0 for Debugging" */
#define ADC1_RESRD1_ADDR      0xF01015C4     /* "Result Register 1 for Debugging" */
#define ADC1_RESRD2_ADDR      0xF01015C8     /* "Result Register 2 for Debugging" */
#define ADC1_RESRD3_ADDR      0xF01015CC     /* "Result Register 3 for Debugging" */
#define ADC1_RESRD4_ADDR      0xF01015D0     /* "Result Register 4 for Debugging" */
#define ADC1_RESRD5_ADDR      0xF01015D4     /* "Result Register 5 for Debugging" */
#define ADC1_RESRD6_ADDR      0xF01015D8     /* "Result Register 6 for Debugging" */
#define ADC1_RESRD7_ADDR      0xF01015DC     /* "Result Register 7 for Debugging" */
#define ADC1_RESRD8_ADDR      0xF01015E0     /* "Result Register 8 for Debugging" */
#define ADC1_RESRD9_ADDR      0xF01015E4     /* "Result Register 9 for Debugging" */
#define ADC1_RESRD10_ADDR     0xF01015E8     /* "Result Register 10 for Debugging" */
#define ADC1_RESRD11_ADDR     0xF01015EC     /* "Result Register 11 for Debugging" */
#define ADC1_RESRD12_ADDR     0xF01015F0     /* "Result Register 12 for Debugging" */
#define ADC1_RESRD13_ADDR     0xF01015F4     /* "Result Register 13 for Debugging" */
#define ADC1_RESRD14_ADDR     0xF01015F8     /* "Result Register 14 for Debugging" */
#define ADC1_RESRD15_ADDR     0xF01015FC     /* "Result Register 15 for Debugging" */
#define ADC1_VFR_ADDR         0xF0101600     /* "Valid Flag Register" */
#define ADC1_INTR_ADDR        0xF0101604     /* "Interrupt Activation Register" */
#define ADC1_RNPR0_ADDR       0xF0101608     /* "Result Node Pointer Register 0" */
#define ADC1_RNPR8_ADDR       0xF010160C     /* "Result Node Pointer Register 8" */
#define ADC1_ALR0_ADDR        0xF0101610     /* "Alias Register 0" */
#define ADC1_APR_ADDR         0xF0101618     /* "Access Protection Register" */
#define ADC1_EMCTR_ADDR       0xF0101620     /* "External Multiplexer Control Register" */


#endif /* _HAVE_TRICORE_ADC1_ADDRESSES_H_ (block "ADC1") */


