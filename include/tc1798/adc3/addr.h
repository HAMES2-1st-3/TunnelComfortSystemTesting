/* (c) HighTec EDV-Systeme GmbH */

/* block "ADC3" of TriCore TC1798 (119 SFRs) */

#ifndef _HAVE_TRICORE_ADC3_ADDRESSES_H_
#define _HAVE_TRICORE_ADC3_ADDRESSES_H_

#define ADC3_ID_ADDR          0xF0101C08     /* "Module Identification Register" */
#define ADC3_RSIR0_ADDR       0xF0101C10     /* "Request Source 0 Input Register" */
#define ADC3_RSIR1_ADDR       0xF0101C14     /* "Request Source 1 Input Register" */
#define ADC3_RSIR2_ADDR       0xF0101C18     /* "Request Source 2 Input Register" */
#define ADC3_RSIR3_ADDR       0xF0101C1C     /* "Request Source 3 Input Register" */
#define ADC3_RSIR4_ADDR       0xF0101C20     /* "Request Source 4 Input Register" */
#define ADC3_GLOBCTR_ADDR     0xF0101C30     /* "Global Control Register" */
#define ADC3_GLOBCFG_ADDR     0xF0101C34     /* "Global Configuration Register" */
#define ADC3_GLOBSTR_ADDR     0xF0101C38     /* "Global Status Register" */
#define ADC3_ASENR_ADDR       0xF0101C3C     /* "Arbitration Slot Enable Register" */
#define ADC3_RSPR0_ADDR       0xF0101C40     /* "Request Source Priority Register 0" */
#define ADC3_RSPR4_ADDR       0xF0101C44     /* "Request Source Priority Register 4" */
#define ADC3_SYNCTR_ADDR      0xF0101C48     /* "Synchronization Control Register" */
#define ADC3_INPCR0_ADDR      0xF0101C50     /* "Input Class Register 0" */
#define ADC3_INPCR1_ADDR      0xF0101C54     /* "Input Class Register 1" */
#define ADC3_INPCR2_ADDR      0xF0101C58     /* "Input Class Register 2" */
#define ADC3_INPCR3_ADDR      0xF0101C5C     /* "Input Class Register 3" */
#define ADC3_CHFR_ADDR        0xF0101C60     /* "Channel Flag Register" */
#define ADC3_CHFCR_ADDR       0xF0101C64     /* "Channel Flag Clear Register" */
#define ADC3_CHENPR0_ADDR     0xF0101C68     /* "Channel Event Node Pointer Register 0" */
#define ADC3_CHENPR8_ADDR     0xF0101C6C     /* "Channel Event Node Pointer Register 8" */
#define ADC3_EVFR_ADDR        0xF0101C70     /* "Event Flag Register" */
#define ADC3_EVFCR_ADDR       0xF0101C74     /* "Event Flag Clear Register" */
#define ADC3_EVNPR_ADDR       0xF0101C78     /* "Event Node Pointer Register" */
#define ADC3_QMR0_ADDR        0xF0101C80     /* "Queue 0 Mode Register" */
#define ADC3_QSR0_ADDR        0xF0101C84     /* "Queue 0 Status Register" */
#define ADC3_Q0R0_ADDR        0xF0101C88     /* "Queue 0 Register 0" */
#define ADC3_QBUR0_ADDR       0xF0101C8C     /* "Queue 0" */
#define ADC3_CRCR1_ADDR       0xF0101C90     /* "Conversion Request 1 Control Register" */
#define ADC3_CRPR1_ADDR       0xF0101C94     /* "Conversion Request 1 Pending Register" */
#define ADC3_CRMR1_ADDR       0xF0101C98     /* "Conversion Request 1 Mode Register" */
#define ADC3_QMR2_ADDR        0xF0101CA0     /* "Queue 2 Mode Register" */
#define ADC3_QSR2_ADDR        0xF0101CA4     /* "Queue 2 Status Register" */
#define ADC3_Q0R2_ADDR        0xF0101CA8     /* "Queue 2 Register 0" */
#define ADC3_QBUR2_ADDR       0xF0101CAC     /* "Queue 2" */
#define ADC3_CRCR3_ADDR       0xF0101CB0     /* "Conversion Request 3 Control Register" */
#define ADC3_CRPR3_ADDR       0xF0101CB4     /* "Conversion Request 3 Pending Register" */
#define ADC3_CRMR3_ADDR       0xF0101CB8     /* "Conversion Request 3 Mode Register" */
#define ADC3_QMR4_ADDR        0xF0101CC0     /* "Queue 4 Mode Register" */
#define ADC3_QSR4_ADDR        0xF0101CC4     /* "Queue 4 Status Register" */
#define ADC3_Q0R4_ADDR        0xF0101CC8     /* "Queue 4 Register 0" */
#define ADC3_QBUR4_ADDR       0xF0101CCC     /* "Queue 4" */
#define ADC3_LCBR0_ADDR       0xF0101CF0     /* "Limit Check Boundary Register 0" */
#define ADC3_LCBR1_ADDR       0xF0101CF4     /* "Limit Check Boundary Register 1" */
#define ADC3_LCBR2_ADDR       0xF0101CF8     /* "Limit Check Boundary Register 2" */
#define ADC3_LCBR3_ADDR       0xF0101CFC     /* "Limit Check Boundary Register 3" */
#define ADC3_CHCTR0_ADDR      0xF0101D00     /* "Channel 0 Control Register" */
#define ADC3_CHCTR1_ADDR      0xF0101D04     /* "Channel 1 Control Register" */
#define ADC3_CHCTR2_ADDR      0xF0101D08     /* "Channel 2 Control Register" */
#define ADC3_CHCTR3_ADDR      0xF0101D0C     /* "Channel 3 Control Register" */
#define ADC3_CHCTR4_ADDR      0xF0101D10     /* "Channel 4 Control Register" */
#define ADC3_CHCTR5_ADDR      0xF0101D14     /* "Channel 5 Control Register" */
#define ADC3_CHCTR6_ADDR      0xF0101D18     /* "Channel 6 Control Register" */
#define ADC3_CHCTR7_ADDR      0xF0101D1C     /* "Channel 7 Control Register" */
#define ADC3_CHCTR8_ADDR      0xF0101D20     /* "Channel 8 Control Register" */
#define ADC3_CHCTR9_ADDR      0xF0101D24     /* "Channel 9 Control Register" */
#define ADC3_CHCTR10_ADDR     0xF0101D28     /* "Channel 10 Control Register" */
#define ADC3_CHCTR11_ADDR     0xF0101D2C     /* "Channel 11 Control Register" */
#define ADC3_CHCTR12_ADDR     0xF0101D30     /* "Channel 12 Control Register" */
#define ADC3_CHCTR13_ADDR     0xF0101D34     /* "Channel 13 Control Register" */
#define ADC3_CHCTR14_ADDR     0xF0101D38     /* "Channel 14 Control Register" */
#define ADC3_CHCTR15_ADDR     0xF0101D3C     /* "Channel 15 Control Register" */
#define ADC3_RCR0_ADDR        0xF0101D40     /* "Result Control Register 0" */
#define ADC3_RCR1_ADDR        0xF0101D44     /* "Result Control Register 1" */
#define ADC3_RCR2_ADDR        0xF0101D48     /* "Result Control Register 2" */
#define ADC3_RCR3_ADDR        0xF0101D4C     /* "Result Control Register 3" */
#define ADC3_RCR4_ADDR        0xF0101D50     /* "Result Control Register 4" */
#define ADC3_RCR5_ADDR        0xF0101D54     /* "Result Control Register 5" */
#define ADC3_RCR6_ADDR        0xF0101D58     /* "Result Control Register 6" */
#define ADC3_RCR7_ADDR        0xF0101D5C     /* "Result Control Register 7" */
#define ADC3_RCR8_ADDR        0xF0101D60     /* "Result Control Register 8" */
#define ADC3_RCR9_ADDR        0xF0101D64     /* "Result Control Register 9" */
#define ADC3_RCR10_ADDR       0xF0101D68     /* "Result Control Register 10" */
#define ADC3_RCR11_ADDR       0xF0101D6C     /* "Result Control Register 11" */
#define ADC3_RCR12_ADDR       0xF0101D70     /* "Result Control Register 12" */
#define ADC3_RCR13_ADDR       0xF0101D74     /* "Result Control Register 13" */
#define ADC3_RCR14_ADDR       0xF0101D78     /* "Result Control Register 14" */
#define ADC3_RCR15_ADDR       0xF0101D7C     /* "Result Control Register 15" */
#define ADC3_RESR0_ADDR       0xF0101D80     /* "Result Register 0" */
#define ADC3_RESR1_ADDR       0xF0101D84     /* "Result Register 1" */
#define ADC3_RESR2_ADDR       0xF0101D88     /* "Result Register 2" */
#define ADC3_RESR3_ADDR       0xF0101D8C     /* "Result Register 3" */
#define ADC3_RESR4_ADDR       0xF0101D90     /* "Result Register 4" */
#define ADC3_RESR5_ADDR       0xF0101D94     /* "Result Register 5" */
#define ADC3_RESR6_ADDR       0xF0101D98     /* "Result Register 6" */
#define ADC3_RESR7_ADDR       0xF0101D9C     /* "Result Register 7" */
#define ADC3_RESR8_ADDR       0xF0101DA0     /* "Result Register 8" */
#define ADC3_RESR9_ADDR       0xF0101DA4     /* "Result Register 9" */
#define ADC3_RESR10_ADDR      0xF0101DA8     /* "Result Register 10" */
#define ADC3_RESR11_ADDR      0xF0101DAC     /* "Result Register 11" */
#define ADC3_RESR12_ADDR      0xF0101DB0     /* "Result Register 12" */
#define ADC3_RESR13_ADDR      0xF0101DB4     /* "Result Register 13" */
#define ADC3_RESR14_ADDR      0xF0101DB8     /* "Result Register 14" */
#define ADC3_RESR15_ADDR      0xF0101DBC     /* "Result Register 15" */
#define ADC3_RESRD0_ADDR      0xF0101DC0     /* "Result Register 0 for Debugging" */
#define ADC3_RESRD1_ADDR      0xF0101DC4     /* "Result Register 1 for Debugging" */
#define ADC3_RESRD2_ADDR      0xF0101DC8     /* "Result Register 2 for Debugging" */
#define ADC3_RESRD3_ADDR      0xF0101DCC     /* "Result Register 3 for Debugging" */
#define ADC3_RESRD4_ADDR      0xF0101DD0     /* "Result Register 4 for Debugging" */
#define ADC3_RESRD5_ADDR      0xF0101DD4     /* "Result Register 5 for Debugging" */
#define ADC3_RESRD6_ADDR      0xF0101DD8     /* "Result Register 6 for Debugging" */
#define ADC3_RESRD7_ADDR      0xF0101DDC     /* "Result Register 7 for Debugging" */
#define ADC3_RESRD8_ADDR      0xF0101DE0     /* "Result Register 8 for Debugging" */
#define ADC3_RESRD9_ADDR      0xF0101DE4     /* "Result Register 9 for Debugging" */
#define ADC3_RESRD10_ADDR     0xF0101DE8     /* "Result Register 10 for Debugging" */
#define ADC3_RESRD11_ADDR     0xF0101DEC     /* "Result Register 11 for Debugging" */
#define ADC3_RESRD12_ADDR     0xF0101DF0     /* "Result Register 12 for Debugging" */
#define ADC3_RESRD13_ADDR     0xF0101DF4     /* "Result Register 13 for Debugging" */
#define ADC3_RESRD14_ADDR     0xF0101DF8     /* "Result Register 14 for Debugging" */
#define ADC3_RESRD15_ADDR     0xF0101DFC     /* "Result Register 15 for Debugging" */
#define ADC3_VFR_ADDR         0xF0101E00     /* "Valid Flag Register" */
#define ADC3_INTR_ADDR        0xF0101E04     /* "Interrupt Activation Register" */
#define ADC3_RNPR0_ADDR       0xF0101E08     /* "Result Node Pointer Register 0" */
#define ADC3_RNPR8_ADDR       0xF0101E0C     /* "Result Node Pointer Register 8" */
#define ADC3_ALR0_ADDR        0xF0101E10     /* "Alias Register 0" */
#define ADC3_APR_ADDR         0xF0101E18     /* "Access Protection Register" */
#define ADC3_EMCTR_ADDR       0xF0101E20     /* "External Multiplexer Control Register" */
#define ADC3_BWDENR_ADDR      0xF0101E24     /* "Broken Wire Detection Enable Register" */
#define ADC3_BWDCFGR_ADDR     0xF0101E28     /* "Broken Wire Detection Configuration Register" */


#endif /* _HAVE_TRICORE_ADC3_ADDRESSES_H_ (block "ADC3") */


