/* (c) HighTec EDV-Systeme GmbH */

/* block "ADC0" of TriCore TC1798 (130 SFRs) */

#ifndef _HAVE_TRICORE_ADC0_ADDRESSES_H_
#define _HAVE_TRICORE_ADC0_ADDRESSES_H_

#define ADC0_CLC_ADDR         0xF0101000     /* "ADC Clock Control Register" */
#define ADC0_ID_ADDR          0xF0101008     /* "Module Identification Register" */
#define ADC0_KSCFG_ADDR       0xF010100C     /* "Kernel State Configuration Register" */
#define ADC0_RSIR0_ADDR       0xF0101010     /* "Request Source 0 Input Register" */
#define ADC0_RSIR1_ADDR       0xF0101014     /* "Request Source 1 Input Register" */
#define ADC0_RSIR2_ADDR       0xF0101018     /* "Request Source 2 Input Register" */
#define ADC0_RSIR3_ADDR       0xF010101C     /* "Request Source 3 Input Register" */
#define ADC0_RSIR4_ADDR       0xF0101020     /* "Request Source 4 Input Register" */
#define ADC0_GLOBCTR_ADDR     0xF0101030     /* "Global Control Register" */
#define ADC0_GLOBCFG_ADDR     0xF0101034     /* "Global Configuration Register" */
#define ADC0_GLOBSTR_ADDR     0xF0101038     /* "Global Status Register" */
#define ADC0_ASENR_ADDR       0xF010103C     /* "Arbitration Slot Enable Register" */
#define ADC0_RSPR0_ADDR       0xF0101040     /* "Request Source Priority Register 0" */
#define ADC0_RSPR4_ADDR       0xF0101044     /* "Request Source Priority Register 4" */
#define ADC0_SYNCTR_ADDR      0xF0101048     /* "Synchronization Control Register" */
#define ADC0_INPCR0_ADDR      0xF0101050     /* "Input Class Register 0" */
#define ADC0_INPCR1_ADDR      0xF0101054     /* "Input Class Register 1" */
#define ADC0_INPCR2_ADDR      0xF0101058     /* "Input Class Register 2" */
#define ADC0_INPCR3_ADDR      0xF010105C     /* "Input Class Register 3" */
#define ADC0_CHFR_ADDR        0xF0101060     /* "Channel Flag Register" */
#define ADC0_CHFCR_ADDR       0xF0101064     /* "Channel Flag Clear Register" */
#define ADC0_CHENPR0_ADDR     0xF0101068     /* "Channel Event Node Pointer Register 0" */
#define ADC0_CHENPR8_ADDR     0xF010106C     /* "Channel Event Node Pointer Register 8" */
#define ADC0_EVFR_ADDR        0xF0101070     /* "Event Flag Register" */
#define ADC0_EVFCR_ADDR       0xF0101074     /* "Event Flag Clear Register" */
#define ADC0_EVNPR_ADDR       0xF0101078     /* "Event Node Pointer Register" */
#define ADC0_QMR0_ADDR        0xF0101080     /* "Queue 0 Mode Register" */
#define ADC0_QSR0_ADDR        0xF0101084     /* "Queue 0 Status Register" */
#define ADC0_Q0R0_ADDR        0xF0101088     /* "Queue 0 Register 0" */
#define ADC0_QBUR0_ADDR       0xF010108C     /* "Queue 0" */
#define ADC0_CRCR1_ADDR       0xF0101090     /* "Conversion Request 1 Control Register" */
#define ADC0_CRPR1_ADDR       0xF0101094     /* "Conversion Request 1 Pending Register" */
#define ADC0_CRMR1_ADDR       0xF0101098     /* "Conversion Request 1 Mode Register" */
#define ADC0_QMR2_ADDR        0xF01010A0     /* "Queue 2 Mode Register" */
#define ADC0_QSR2_ADDR        0xF01010A4     /* "Queue 2 Status Register" */
#define ADC0_Q0R2_ADDR        0xF01010A8     /* "Queue 2 Register 0" */
#define ADC0_QBUR2_ADDR       0xF01010AC     /* "Queue 2" */
#define ADC0_CRCR3_ADDR       0xF01010B0     /* "Conversion Request 3 Control Register" */
#define ADC0_CRPR3_ADDR       0xF01010B4     /* "Conversion Request 3 Pending Register" */
#define ADC0_CRMR3_ADDR       0xF01010B8     /* "Conversion Request 3 Mode Register" */
#define ADC0_QMR4_ADDR        0xF01010C0     /* "Queue 4 Mode Register" */
#define ADC0_QSR4_ADDR        0xF01010C4     /* "Queue 4 Status Register" */
#define ADC0_Q0R4_ADDR        0xF01010C8     /* "Queue 4 Register 0" */
#define ADC0_QBUR4_ADDR       0xF01010CC     /* "Queue 4" */
#define ADC0_LCBR0_ADDR       0xF01010F0     /* "Limit Check Boundary Register 0" */
#define ADC0_LCBR1_ADDR       0xF01010F4     /* "Limit Check Boundary Register 1" */
#define ADC0_LCBR2_ADDR       0xF01010F8     /* "Limit Check Boundary Register 2" */
#define ADC0_LCBR3_ADDR       0xF01010FC     /* "Limit Check Boundary Register 3" */
#define ADC0_CHCTR0_ADDR      0xF0101100     /* "Channel 0 Control Register" */
#define ADC0_CHCTR1_ADDR      0xF0101104     /* "Channel 1 Control Register" */
#define ADC0_CHCTR2_ADDR      0xF0101108     /* "Channel 2 Control Register" */
#define ADC0_CHCTR3_ADDR      0xF010110C     /* "Channel 3 Control Register" */
#define ADC0_CHCTR4_ADDR      0xF0101110     /* "Channel 4 Control Register" */
#define ADC0_CHCTR5_ADDR      0xF0101114     /* "Channel 5 Control Register" */
#define ADC0_CHCTR6_ADDR      0xF0101118     /* "Channel 6 Control Register" */
#define ADC0_CHCTR7_ADDR      0xF010111C     /* "Channel 7 Control Register" */
#define ADC0_CHCTR8_ADDR      0xF0101120     /* "Channel 8 Control Register" */
#define ADC0_CHCTR9_ADDR      0xF0101124     /* "Channel 9 Control Register" */
#define ADC0_CHCTR10_ADDR     0xF0101128     /* "Channel 10 Control Register" */
#define ADC0_CHCTR11_ADDR     0xF010112C     /* "Channel 11 Control Register" */
#define ADC0_CHCTR12_ADDR     0xF0101130     /* "Channel 12 Control Register" */
#define ADC0_CHCTR13_ADDR     0xF0101134     /* "Channel 13 Control Register" */
#define ADC0_CHCTR14_ADDR     0xF0101138     /* "Channel 14 Control Register" */
#define ADC0_CHCTR15_ADDR     0xF010113C     /* "Channel 15 Control Register" */
#define ADC0_RCR0_ADDR        0xF0101140     /* "Result Control Register 0" */
#define ADC0_RCR1_ADDR        0xF0101144     /* "Result Control Register 1" */
#define ADC0_RCR2_ADDR        0xF0101148     /* "Result Control Register 2" */
#define ADC0_RCR3_ADDR        0xF010114C     /* "Result Control Register 3" */
#define ADC0_RCR4_ADDR        0xF0101150     /* "Result Control Register 4" */
#define ADC0_RCR5_ADDR        0xF0101154     /* "Result Control Register 5" */
#define ADC0_RCR6_ADDR        0xF0101158     /* "Result Control Register 6" */
#define ADC0_RCR7_ADDR        0xF010115C     /* "Result Control Register 7" */
#define ADC0_RCR8_ADDR        0xF0101160     /* "Result Control Register 8" */
#define ADC0_RCR9_ADDR        0xF0101164     /* "Result Control Register 9" */
#define ADC0_RCR10_ADDR       0xF0101168     /* "Result Control Register 10" */
#define ADC0_RCR11_ADDR       0xF010116C     /* "Result Control Register 11" */
#define ADC0_RCR12_ADDR       0xF0101170     /* "Result Control Register 12" */
#define ADC0_RCR13_ADDR       0xF0101174     /* "Result Control Register 13" */
#define ADC0_RCR14_ADDR       0xF0101178     /* "Result Control Register 14" */
#define ADC0_RCR15_ADDR       0xF010117C     /* "Result Control Register 15" */
#define ADC0_RESR0_ADDR       0xF0101180     /* "Result Register 0" */
#define ADC0_RESR1_ADDR       0xF0101184     /* "Result Register 1" */
#define ADC0_RESR2_ADDR       0xF0101188     /* "Result Register 2" */
#define ADC0_RESR3_ADDR       0xF010118C     /* "Result Register 3" */
#define ADC0_RESR4_ADDR       0xF0101190     /* "Result Register 4" */
#define ADC0_RESR5_ADDR       0xF0101194     /* "Result Register 5" */
#define ADC0_RESR6_ADDR       0xF0101198     /* "Result Register 6" */
#define ADC0_RESR7_ADDR       0xF010119C     /* "Result Register 7" */
#define ADC0_RESR8_ADDR       0xF01011A0     /* "Result Register 8" */
#define ADC0_RESR9_ADDR       0xF01011A4     /* "Result Register 9" */
#define ADC0_RESR10_ADDR      0xF01011A8     /* "Result Register 10" */
#define ADC0_RESR11_ADDR      0xF01011AC     /* "Result Register 11" */
#define ADC0_RESR12_ADDR      0xF01011B0     /* "Result Register 12" */
#define ADC0_RESR13_ADDR      0xF01011B4     /* "Result Register 13" */
#define ADC0_RESR14_ADDR      0xF01011B8     /* "Result Register 14" */
#define ADC0_RESR15_ADDR      0xF01011BC     /* "Result Register 15" */
#define ADC0_RESRD0_ADDR      0xF01011C0     /* "Result Register 0 for Debugging" */
#define ADC0_RESRD1_ADDR      0xF01011C4     /* "Result Register 1 for Debugging" */
#define ADC0_RESRD2_ADDR      0xF01011C8     /* "Result Register 2 for Debugging" */
#define ADC0_RESRD3_ADDR      0xF01011CC     /* "Result Register 3 for Debugging" */
#define ADC0_RESRD4_ADDR      0xF01011D0     /* "Result Register 4 for Debugging" */
#define ADC0_RESRD5_ADDR      0xF01011D4     /* "Result Register 5 for Debugging" */
#define ADC0_RESRD6_ADDR      0xF01011D8     /* "Result Register 6 for Debugging" */
#define ADC0_RESRD7_ADDR      0xF01011DC     /* "Result Register 7 for Debugging" */
#define ADC0_RESRD8_ADDR      0xF01011E0     /* "Result Register 8 for Debugging" */
#define ADC0_RESRD9_ADDR      0xF01011E4     /* "Result Register 9 for Debugging" */
#define ADC0_RESRD10_ADDR     0xF01011E8     /* "Result Register 10 for Debugging" */
#define ADC0_RESRD11_ADDR     0xF01011EC     /* "Result Register 11 for Debugging" */
#define ADC0_RESRD12_ADDR     0xF01011F0     /* "Result Register 12 for Debugging" */
#define ADC0_RESRD13_ADDR     0xF01011F4     /* "Result Register 13 for Debugging" */
#define ADC0_RESRD14_ADDR     0xF01011F8     /* "Result Register 14 for Debugging" */
#define ADC0_RESRD15_ADDR     0xF01011FC     /* "Result Register 15 for Debugging" */
#define ADC0_VFR_ADDR         0xF0101200     /* "Valid Flag Register" */
#define ADC0_INTR_ADDR        0xF0101204     /* "Interrupt Activation Register" */
#define ADC0_RNPR0_ADDR       0xF0101208     /* "Result Node Pointer Register 0" */
#define ADC0_RNPR8_ADDR       0xF010120C     /* "Result Node Pointer Register 8" */
#define ADC0_ALR0_ADDR        0xF0101210     /* "Alias Register 0" */
#define ADC0_APR_ADDR         0xF0101218     /* "Access Protection Register" */
#define ADC0_EMCTR_ADDR       0xF0101220     /* "External Multiplexer Control Register" */
#define ADC0_BWDENR_ADDR      0xF0101224     /* "Broken Wire Detection Enable Register" */
#define ADC0_BWDCFGR_ADDR     0xF0101228     /* "Broken Wire Detection Configuration Register" */
#define ADC0_SRC8_ADDR        0xF01013DC     /* "ADC Service Request Control Register 8" */
#define ADC0_SRC7_ADDR        0xF01013E0     /* "ADC Service Request Control Register 7" */
#define ADC0_SRC6_ADDR        0xF01013E4     /* "ADC Service Request Control Register 6" */
#define ADC0_SRC5_ADDR        0xF01013E8     /* "ADC Service Request Control Register 5" */
#define ADC0_SRC4_ADDR        0xF01013EC     /* "ADC Service Request Control Register 4" */
#define ADC0_SRC3_ADDR        0xF01013F0     /* "ADC Service Request Control Register 3" */
#define ADC0_SRC2_ADDR        0xF01013F4     /* "ADC Service Request Control Register 2" */
#define ADC0_SRC1_ADDR        0xF01013F8     /* "ADC Service Request Control Register 1" */
#define ADC0_SRC0_ADDR        0xF01013FC     /* "ADC Service Request Control Register 0" */


#endif /* _HAVE_TRICORE_ADC0_ADDRESSES_H_ (block "ADC0") */


