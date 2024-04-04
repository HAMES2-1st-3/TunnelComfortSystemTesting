/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_ADC0_ADC1_SHAREMASKS_H_
#define _HAVE_TRICORE_ADC0_ADC1_SHAREMASKS_H_


/****************** Masks for ADC0_SRCm_t **********************/
/*
   ADC0_SRC0             "ADC Service Request Control Register 0"
   ADC0_SRC1             "ADC Service Request Control Register 1"
   ADC0_SRC2             "ADC Service Request Control Register 2"
   ADC0_SRC3             "ADC Service Request Control Register 3"
   ADC0_SRC4             "ADC Service Request Control Register 4"
   ADC0_SRC5             "ADC Service Request Control Register 5"
*/
/**********************************************************/

#define ADC0_SRCm_MASK                  0x0000f4ff
#define ADC0_SRCm_SRPN_MASK             0x000000ff
#define ADC0_SRCm_SRPN_SHIFT            0
#define ADC0_SRCm_TOS_MASK              0x00000400
#define ADC0_SRCm_TOS_SHIFT             10
#define ADC0_SRCm_SRE_MASK              0x00001000
#define ADC0_SRCm_SRE_SHIFT             12
#define ADC0_SRCm_SRR_MASK              0x00002000
#define ADC0_SRCm_SRR_SHIFT             13
#define ADC0_SRCm_CLRR_MASK             0x00004000
#define ADC0_SRCm_CLRR_SHIFT            14
#define ADC0_SRCm_SETR_MASK             0x00008000
#define ADC0_SRCm_SETR_SHIFT            15



/****************** Masks for ADCn_ALR0_t **********************/
/*
   ADC0_ALR0             "Alias Register 0"
   ADC1_ALR0             "Alias Register 0"
*/
/**********************************************************/

#define ADCn_ALR0_MASK                  0x00000f0f
#define ADCn_ALR0_ALIAS0_MASK           0x0000000f
#define ADCn_ALR0_ALIAS0_SHIFT          0
#define ADCn_ALR0_ALIAS1_MASK           0x00000f00
#define ADCn_ALR0_ALIAS1_SHIFT          8



/****************** Masks for ADCn_APR_t **********************/
/*
   ADC0_APR              "Access Protection Register"
   ADC1_APR              "Access Protection Register"
*/
/**********************************************************/

#define ADCn_APR_MASK                   0x0000803f
#define ADCn_APR_RG0_MASK               0x00000001
#define ADCn_APR_RG0_SHIFT              0
#define ADCn_APR_RG1_MASK               0x00000002
#define ADCn_APR_RG1_SHIFT              1
#define ADCn_APR_RG2_MASK               0x00000004
#define ADCn_APR_RG2_SHIFT              2
#define ADCn_APR_RG3_MASK               0x00000008
#define ADCn_APR_RG3_SHIFT              3
#define ADCn_APR_RG4_MASK               0x00000010
#define ADCn_APR_RG4_SHIFT              4
#define ADCn_APR_RG5_MASK               0x00000020
#define ADCn_APR_RG5_SHIFT              5
#define ADCn_APR_ACCERR_MASK            0x00008000
#define ADCn_APR_ACCERR_SHIFT           15



/****************** Masks for ADCn_ASENR_t **********************/
/*
   ADC0_ASENR            "Arbitration Slot Enable Register"
   ADC1_ASENR            "Arbitration Slot Enable Register"
*/
/**********************************************************/

#define ADCn_ASENR_MASK                 0x0000001f
#define ADCn_ASENR_ASEN0_MASK           0x00000001
#define ADCn_ASENR_ASEN0_SHIFT          0
#define ADCn_ASENR_ASEN1_MASK           0x00000002
#define ADCn_ASENR_ASEN1_SHIFT          1
#define ADCn_ASENR_ASEN2_MASK           0x00000004
#define ADCn_ASENR_ASEN2_SHIFT          2
#define ADCn_ASENR_ASEN3_MASK           0x00000008
#define ADCn_ASENR_ASEN3_SHIFT          3
#define ADCn_ASENR_ASEN4_MASK           0x00000010
#define ADCn_ASENR_ASEN4_SHIFT          4



/****************** Masks for ADCn_BWDCFGR_t **********************/
/*
   ADC0_BWDCFGR          "Broken Wire Detection Configuration Register"
   ADC1_BWDCFGR          "Broken Wire Detection Configuration Register"
*/
/**********************************************************/

#define ADCn_BWDCFGR_MASK               0x0000001f
#define ADCn_BWDCFGR_CHP_MASK           0x0000001f
#define ADCn_BWDCFGR_CHP_SHIFT          0



/****************** Masks for ADCn_BWDENR_t **********************/
/*
   ADC0_BWDENR           "Broken Wire Detection Enable Register"
   ADC1_BWDENR           "Broken Wire Detection Enable Register"
*/
/**********************************************************/

#define ADCn_BWDENR_MASK                0x0000ffff
#define ADCn_BWDENR_EN0_MASK            0x00000001
#define ADCn_BWDENR_EN0_SHIFT           0
#define ADCn_BWDENR_EN1_MASK            0x00000002
#define ADCn_BWDENR_EN1_SHIFT           1
#define ADCn_BWDENR_EN2_MASK            0x00000004
#define ADCn_BWDENR_EN2_SHIFT           2
#define ADCn_BWDENR_EN3_MASK            0x00000008
#define ADCn_BWDENR_EN3_SHIFT           3
#define ADCn_BWDENR_EN4_MASK            0x00000010
#define ADCn_BWDENR_EN4_SHIFT           4
#define ADCn_BWDENR_EN5_MASK            0x00000020
#define ADCn_BWDENR_EN5_SHIFT           5
#define ADCn_BWDENR_EN6_MASK            0x00000040
#define ADCn_BWDENR_EN6_SHIFT           6
#define ADCn_BWDENR_EN7_MASK            0x00000080
#define ADCn_BWDENR_EN7_SHIFT           7
#define ADCn_BWDENR_EN8_MASK            0x00000100
#define ADCn_BWDENR_EN8_SHIFT           8
#define ADCn_BWDENR_EN9_MASK            0x00000200
#define ADCn_BWDENR_EN9_SHIFT           9
#define ADCn_BWDENR_EN10_MASK           0x00000400
#define ADCn_BWDENR_EN10_SHIFT          10
#define ADCn_BWDENR_EN11_MASK           0x00000800
#define ADCn_BWDENR_EN11_SHIFT          11
#define ADCn_BWDENR_EN12_MASK           0x00001000
#define ADCn_BWDENR_EN12_SHIFT          12
#define ADCn_BWDENR_EN13_MASK           0x00002000
#define ADCn_BWDENR_EN13_SHIFT          13
#define ADCn_BWDENR_EN14_MASK           0x00004000
#define ADCn_BWDENR_EN14_SHIFT          14
#define ADCn_BWDENR_EN15_MASK           0x00008000
#define ADCn_BWDENR_EN15_SHIFT          15



/****************** Masks for ADCn_CHCTRm_t **********************/
/*
   ADC0_CHCTR0           "Channel 0 Control Register"
   ADC0_CHCTR1           "Channel 1 Control Register"
   ADC0_CHCTR10          "Channel 10 Control Register"
   ADC0_CHCTR11          "Channel 11 Control Register"
   ADC0_CHCTR12          "Channel 12 Control Register"
   ADC0_CHCTR13          "Channel 13 Control Register"
   ADC0_CHCTR14          "Channel 14 Control Register"
   ADC0_CHCTR15          "Channel 15 Control Register"
   ADC0_CHCTR2           "Channel 2 Control Register"
   ADC0_CHCTR3           "Channel 3 Control Register"
   ADC0_CHCTR4           "Channel 4 Control Register"
   ADC0_CHCTR5           "Channel 5 Control Register"
   ADC0_CHCTR6           "Channel 6 Control Register"
   ADC0_CHCTR7           "Channel 7 Control Register"
   ADC0_CHCTR8           "Channel 8 Control Register"
   ADC0_CHCTR9           "Channel 9 Control Register"
   ADC1_CHCTR0           "Channel 0 Control Register"
   ADC1_CHCTR1           "Channel 1 Control Register"
   ADC1_CHCTR10          "Channel 10 Control Register"
   ADC1_CHCTR11          "Channel 11 Control Register"
   ADC1_CHCTR12          "Channel 12 Control Register"
   ADC1_CHCTR13          "Channel 13 Control Register"
   ADC1_CHCTR14          "Channel 14 Control Register"
   ADC1_CHCTR15          "Channel 15 Control Register"
   ADC1_CHCTR2           "Channel 2 Control Register"
   ADC1_CHCTR3           "Channel 3 Control Register"
   ADC1_CHCTR4           "Channel 4 Control Register"
   ADC1_CHCTR5           "Channel 5 Control Register"
   ADC1_CHCTR6           "Channel 6 Control Register"
   ADC1_CHCTR7           "Channel 7 Control Register"
   ADC1_CHCTR8           "Channel 8 Control Register"
   ADC1_CHCTR9           "Channel 9 Control Register"
*/
/**********************************************************/

#define ADCn_CHCTRm_MASK                0x0000ffff
#define ADCn_CHCTRm_BNDASEL_MASK        0x00000003
#define ADCn_CHCTRm_BNDASEL_SHIFT       0
#define ADCn_CHCTRm_BNDBSEL_MASK        0x0000000c
#define ADCn_CHCTRm_BNDBSEL_SHIFT       2
#define ADCn_CHCTRm_LCC_MASK            0x00000070
#define ADCn_CHCTRm_LCC_SHIFT           4
#define ADCn_CHCTRm_SYNC_MASK           0x00000080
#define ADCn_CHCTRm_SYNC_SHIFT          7
#define ADCn_CHCTRm_REFSEL_MASK         0x00000300
#define ADCn_CHCTRm_REFSEL_SHIFT        8
#define ADCn_CHCTRm_ICLSEL_MASK         0x00000c00
#define ADCn_CHCTRm_ICLSEL_SHIFT        10
#define ADCn_CHCTRm_RESRSEL_MASK        0x0000f000
#define ADCn_CHCTRm_RESRSEL_SHIFT       12



/****************** Masks for ADCn_CHENPRm_t **********************/
/*
   ADC0_CHENPR0          "Channel Event Node Pointer Register 0"
   ADC0_CHENPR8          "Channel Event Node Pointer Register 8"
   ADC1_CHENPR0          "Channel Event Node Pointer Register 0"
   ADC1_CHENPR8          "Channel Event Node Pointer Register 8"
*/
/**********************************************************/

#define ADCn_CHENPRm_MASK               0x77777777
#define ADCn_CHENPRm_CHENP0_MASK        0x00000007
#define ADCn_CHENPRm_CHENP0_SHIFT       0
#define ADCn_CHENPRm_CHENP1_MASK        0x00000070
#define ADCn_CHENPRm_CHENP1_SHIFT       4
#define ADCn_CHENPRm_CHENP2_MASK        0x00000700
#define ADCn_CHENPRm_CHENP2_SHIFT       8
#define ADCn_CHENPRm_CHENP3_MASK        0x00007000
#define ADCn_CHENPRm_CHENP3_SHIFT       12
#define ADCn_CHENPRm_CHENP4_MASK        0x00070000
#define ADCn_CHENPRm_CHENP4_SHIFT       16
#define ADCn_CHENPRm_CHENP5_MASK        0x00700000
#define ADCn_CHENPRm_CHENP5_SHIFT       20
#define ADCn_CHENPRm_CHENP6_MASK        0x07000000
#define ADCn_CHENPRm_CHENP6_SHIFT       24
#define ADCn_CHENPRm_CHENP7_MASK        0x70000000
#define ADCn_CHENPRm_CHENP7_SHIFT       28



/****************** Masks for ADCn_CHFCR_t **********************/
/*
   ADC0_CHFCR            "Channel Flag Clear Register"
   ADC1_CHFCR            "Channel Flag Clear Register"
*/
/**********************************************************/

#define ADCn_CHFCR_MASK                 0x0000ffff
#define ADCn_CHFCR_CFC0_MASK            0x00000001
#define ADCn_CHFCR_CFC0_SHIFT           0
#define ADCn_CHFCR_CFC1_MASK            0x00000002
#define ADCn_CHFCR_CFC1_SHIFT           1
#define ADCn_CHFCR_CFC2_MASK            0x00000004
#define ADCn_CHFCR_CFC2_SHIFT           2
#define ADCn_CHFCR_CFC3_MASK            0x00000008
#define ADCn_CHFCR_CFC3_SHIFT           3
#define ADCn_CHFCR_CFC4_MASK            0x00000010
#define ADCn_CHFCR_CFC4_SHIFT           4
#define ADCn_CHFCR_CFC5_MASK            0x00000020
#define ADCn_CHFCR_CFC5_SHIFT           5
#define ADCn_CHFCR_CFC6_MASK            0x00000040
#define ADCn_CHFCR_CFC6_SHIFT           6
#define ADCn_CHFCR_CFC7_MASK            0x00000080
#define ADCn_CHFCR_CFC7_SHIFT           7
#define ADCn_CHFCR_CFC8_MASK            0x00000100
#define ADCn_CHFCR_CFC8_SHIFT           8
#define ADCn_CHFCR_CFC9_MASK            0x00000200
#define ADCn_CHFCR_CFC9_SHIFT           9
#define ADCn_CHFCR_CFC10_MASK           0x00000400
#define ADCn_CHFCR_CFC10_SHIFT          10
#define ADCn_CHFCR_CFC11_MASK           0x00000800
#define ADCn_CHFCR_CFC11_SHIFT          11
#define ADCn_CHFCR_CFC12_MASK           0x00001000
#define ADCn_CHFCR_CFC12_SHIFT          12
#define ADCn_CHFCR_CFC13_MASK           0x00002000
#define ADCn_CHFCR_CFC13_SHIFT          13
#define ADCn_CHFCR_CFC14_MASK           0x00004000
#define ADCn_CHFCR_CFC14_SHIFT          14
#define ADCn_CHFCR_CFC15_MASK           0x00008000
#define ADCn_CHFCR_CFC15_SHIFT          15



/****************** Masks for ADCn_CHFR_t **********************/
/*
   ADC0_CHFR             "Channel Flag Register"
   ADC1_CHFR             "Channel Flag Register"
*/
/**********************************************************/

#define ADCn_CHFR_MASK                  0x0000ffff
#define ADCn_CHFR_FC0_MASK              0x00000001
#define ADCn_CHFR_FC0_SHIFT             0
#define ADCn_CHFR_FC1_MASK              0x00000002
#define ADCn_CHFR_FC1_SHIFT             1
#define ADCn_CHFR_FC2_MASK              0x00000004
#define ADCn_CHFR_FC2_SHIFT             2
#define ADCn_CHFR_FC3_MASK              0x00000008
#define ADCn_CHFR_FC3_SHIFT             3
#define ADCn_CHFR_FC4_MASK              0x00000010
#define ADCn_CHFR_FC4_SHIFT             4
#define ADCn_CHFR_FC5_MASK              0x00000020
#define ADCn_CHFR_FC5_SHIFT             5
#define ADCn_CHFR_FC6_MASK              0x00000040
#define ADCn_CHFR_FC6_SHIFT             6
#define ADCn_CHFR_FC7_MASK              0x00000080
#define ADCn_CHFR_FC7_SHIFT             7
#define ADCn_CHFR_FC8_MASK              0x00000100
#define ADCn_CHFR_FC8_SHIFT             8
#define ADCn_CHFR_FC9_MASK              0x00000200
#define ADCn_CHFR_FC9_SHIFT             9
#define ADCn_CHFR_FC10_MASK             0x00000400
#define ADCn_CHFR_FC10_SHIFT            10
#define ADCn_CHFR_FC11_MASK             0x00000800
#define ADCn_CHFR_FC11_SHIFT            11
#define ADCn_CHFR_FC12_MASK             0x00001000
#define ADCn_CHFR_FC12_SHIFT            12
#define ADCn_CHFR_FC13_MASK             0x00002000
#define ADCn_CHFR_FC13_SHIFT            13
#define ADCn_CHFR_FC14_MASK             0x00004000
#define ADCn_CHFR_FC14_SHIFT            14
#define ADCn_CHFR_FC15_MASK             0x00008000
#define ADCn_CHFR_FC15_SHIFT            15



/****************** Masks for ADCn_CRCRm_t **********************/
/*
   ADC0_CRCR1            "Conversion Request 1 Control Register"
   ADC0_CRCR3            "Conversion Request 3 Control Register"
   ADC1_CRCR1            "Conversion Request 1 Control Register"
   ADC1_CRCR3            "Conversion Request 3 Control Register"
*/
/**********************************************************/

#define ADCn_CRCRm_MASK                 0x0000ffff
#define ADCn_CRCRm_CH0_MASK             0x00000001
#define ADCn_CRCRm_CH0_SHIFT            0
#define ADCn_CRCRm_CH1_MASK             0x00000002
#define ADCn_CRCRm_CH1_SHIFT            1
#define ADCn_CRCRm_CH2_MASK             0x00000004
#define ADCn_CRCRm_CH2_SHIFT            2
#define ADCn_CRCRm_CH3_MASK             0x00000008
#define ADCn_CRCRm_CH3_SHIFT            3
#define ADCn_CRCRm_CH4_MASK             0x00000010
#define ADCn_CRCRm_CH4_SHIFT            4
#define ADCn_CRCRm_CH5_MASK             0x00000020
#define ADCn_CRCRm_CH5_SHIFT            5
#define ADCn_CRCRm_CH6_MASK             0x00000040
#define ADCn_CRCRm_CH6_SHIFT            6
#define ADCn_CRCRm_CH7_MASK             0x00000080
#define ADCn_CRCRm_CH7_SHIFT            7
#define ADCn_CRCRm_CH8_MASK             0x00000100
#define ADCn_CRCRm_CH8_SHIFT            8
#define ADCn_CRCRm_CH9_MASK             0x00000200
#define ADCn_CRCRm_CH9_SHIFT            9
#define ADCn_CRCRm_CH10_MASK            0x00000400
#define ADCn_CRCRm_CH10_SHIFT           10
#define ADCn_CRCRm_CH11_MASK            0x00000800
#define ADCn_CRCRm_CH11_SHIFT           11
#define ADCn_CRCRm_CH12_MASK            0x00001000
#define ADCn_CRCRm_CH12_SHIFT           12
#define ADCn_CRCRm_CH13_MASK            0x00002000
#define ADCn_CRCRm_CH13_SHIFT           13
#define ADCn_CRCRm_CH14_MASK            0x00004000
#define ADCn_CRCRm_CH14_SHIFT           14
#define ADCn_CRCRm_CH15_MASK            0x00008000
#define ADCn_CRCRm_CH15_SHIFT           15



/****************** Masks for ADCn_CRMRm_t **********************/
/*
   ADC0_CRMR1            "Conversion Request 1 Mode Register"
   ADC0_CRMR3            "Conversion Request 3 Mode Register"
   ADC1_CRMR1            "Conversion Request 1 Mode Register"
   ADC1_CRMR3            "Conversion Request 3 Mode Register"
*/
/**********************************************************/

#define ADCn_CRMRm_MASK                 0x000003bf
#define ADCn_CRMRm_ENGT_MASK            0x00000003
#define ADCn_CRMRm_ENGT_SHIFT           0
#define ADCn_CRMRm_ENTR_MASK            0x00000004
#define ADCn_CRMRm_ENTR_SHIFT           2
#define ADCn_CRMRm_ENSI_MASK            0x00000008
#define ADCn_CRMRm_ENSI_SHIFT           3
#define ADCn_CRMRm_SCAN_MASK            0x00000010
#define ADCn_CRMRm_SCAN_SHIFT           4
#define ADCn_CRMRm_LDM_MASK             0x00000020
#define ADCn_CRMRm_LDM_SHIFT            5
#define ADCn_CRMRm_REQGT_MASK           0x00000080
#define ADCn_CRMRm_REQGT_SHIFT          7
#define ADCn_CRMRm_CLRPND_MASK          0x00000100
#define ADCn_CRMRm_CLRPND_SHIFT         8
#define ADCn_CRMRm_LDEV_MASK            0x00000200
#define ADCn_CRMRm_LDEV_SHIFT           9



/****************** Masks for ADCn_CRPRm_t **********************/
/*
   ADC0_CRPR1            "Conversion Request 1 Pending Register"
   ADC0_CRPR3            "Conversion Request 3 Pending Register"
   ADC1_CRPR1            "Conversion Request 1 Pending Register"
   ADC1_CRPR3            "Conversion Request 3 Pending Register"
*/
/**********************************************************/

#define ADCn_CRPRm_MASK                 0x0000ffff
#define ADCn_CRPRm_CHP0_MASK            0x00000001
#define ADCn_CRPRm_CHP0_SHIFT           0
#define ADCn_CRPRm_CHP1_MASK            0x00000002
#define ADCn_CRPRm_CHP1_SHIFT           1
#define ADCn_CRPRm_CHP2_MASK            0x00000004
#define ADCn_CRPRm_CHP2_SHIFT           2
#define ADCn_CRPRm_CHP3_MASK            0x00000008
#define ADCn_CRPRm_CHP3_SHIFT           3
#define ADCn_CRPRm_CHP4_MASK            0x00000010
#define ADCn_CRPRm_CHP4_SHIFT           4
#define ADCn_CRPRm_CHP5_MASK            0x00000020
#define ADCn_CRPRm_CHP5_SHIFT           5
#define ADCn_CRPRm_CHP6_MASK            0x00000040
#define ADCn_CRPRm_CHP6_SHIFT           6
#define ADCn_CRPRm_CHP7_MASK            0x00000080
#define ADCn_CRPRm_CHP7_SHIFT           7
#define ADCn_CRPRm_CHP8_MASK            0x00000100
#define ADCn_CRPRm_CHP8_SHIFT           8
#define ADCn_CRPRm_CHP9_MASK            0x00000200
#define ADCn_CRPRm_CHP9_SHIFT           9
#define ADCn_CRPRm_CHP10_MASK           0x00000400
#define ADCn_CRPRm_CHP10_SHIFT          10
#define ADCn_CRPRm_CHP11_MASK           0x00000800
#define ADCn_CRPRm_CHP11_SHIFT          11
#define ADCn_CRPRm_CHP12_MASK           0x00001000
#define ADCn_CRPRm_CHP12_SHIFT          12
#define ADCn_CRPRm_CHP13_MASK           0x00002000
#define ADCn_CRPRm_CHP13_SHIFT          13
#define ADCn_CRPRm_CHP14_MASK           0x00004000
#define ADCn_CRPRm_CHP14_SHIFT          14
#define ADCn_CRPRm_CHP15_MASK           0x00008000
#define ADCn_CRPRm_CHP15_SHIFT          15



/****************** Masks for ADCn_EMCTR_t **********************/
/*
   ADC0_EMCTR            "External Multiplexer Control Register"
   ADC1_EMCTR            "External Multiplexer Control Register"
*/
/**********************************************************/

#define ADCn_EMCTR_MASK                 0x00efff77
#define ADCn_EMCTR_SETEMUX_MASK         0x00000007
#define ADCn_EMCTR_SETEMUX_SHIFT        0
#define ADCn_EMCTR_EMUX_MASK            0x00000070
#define ADCn_EMCTR_EMUX_SHIFT           4
#define ADCn_EMCTR_EMSAMPLE_MASK        0x0000ff00
#define ADCn_EMCTR_EMSAMPLE_SHIFT       8
#define ADCn_EMCTR_EMUXCHNR_MASK        0x000f0000
#define ADCn_EMCTR_EMUXCHNR_SHIFT       16
#define ADCn_EMCTR_TROEN_MASK           0x00200000
#define ADCn_EMCTR_TROEN_SHIFT          21
#define ADCn_EMCTR_SCANEN_MASK          0x00400000
#define ADCn_EMCTR_SCANEN_SHIFT         22
#define ADCn_EMCTR_EMUXEN_MASK          0x00800000
#define ADCn_EMCTR_EMUXEN_SHIFT         23



/****************** Masks for ADCn_EVFCR_t **********************/
/*
   ADC0_EVFCR            "Event Flag Clear Register"
   ADC1_EVFCR            "Event Flag Clear Register"
*/
/**********************************************************/

#define ADCn_EVFCR_MASK                 0x001fffff
#define ADCn_EVFCR_CFR0_MASK            0x00000001
#define ADCn_EVFCR_CFR0_SHIFT           0
#define ADCn_EVFCR_CFR1_MASK            0x00000002
#define ADCn_EVFCR_CFR1_SHIFT           1
#define ADCn_EVFCR_CFR2_MASK            0x00000004
#define ADCn_EVFCR_CFR2_SHIFT           2
#define ADCn_EVFCR_CFR3_MASK            0x00000008
#define ADCn_EVFCR_CFR3_SHIFT           3
#define ADCn_EVFCR_CFR4_MASK            0x00000010
#define ADCn_EVFCR_CFR4_SHIFT           4
#define ADCn_EVFCR_CFR5_MASK            0x00000020
#define ADCn_EVFCR_CFR5_SHIFT           5
#define ADCn_EVFCR_CFR6_MASK            0x00000040
#define ADCn_EVFCR_CFR6_SHIFT           6
#define ADCn_EVFCR_CFR7_MASK            0x00000080
#define ADCn_EVFCR_CFR7_SHIFT           7
#define ADCn_EVFCR_CFR8_MASK            0x00000100
#define ADCn_EVFCR_CFR8_SHIFT           8
#define ADCn_EVFCR_CFR9_MASK            0x00000200
#define ADCn_EVFCR_CFR9_SHIFT           9
#define ADCn_EVFCR_CFR10_MASK           0x00000400
#define ADCn_EVFCR_CFR10_SHIFT          10
#define ADCn_EVFCR_CFR11_MASK           0x00000800
#define ADCn_EVFCR_CFR11_SHIFT          11
#define ADCn_EVFCR_CFR12_MASK           0x00001000
#define ADCn_EVFCR_CFR12_SHIFT          12
#define ADCn_EVFCR_CFR13_MASK           0x00002000
#define ADCn_EVFCR_CFR13_SHIFT          13
#define ADCn_EVFCR_CFR14_MASK           0x00004000
#define ADCn_EVFCR_CFR14_SHIFT          14
#define ADCn_EVFCR_CFR15_MASK           0x00008000
#define ADCn_EVFCR_CFR15_SHIFT          15
#define ADCn_EVFCR_CFS0_MASK            0x00010000
#define ADCn_EVFCR_CFS0_SHIFT           16
#define ADCn_EVFCR_CFS1_MASK            0x00020000
#define ADCn_EVFCR_CFS1_SHIFT           17
#define ADCn_EVFCR_CFS2_MASK            0x00040000
#define ADCn_EVFCR_CFS2_SHIFT           18
#define ADCn_EVFCR_CFS3_MASK            0x00080000
#define ADCn_EVFCR_CFS3_SHIFT           19
#define ADCn_EVFCR_CFS4_MASK            0x00100000
#define ADCn_EVFCR_CFS4_SHIFT           20



/****************** Masks for ADCn_EVFR_t **********************/
/*
   ADC0_EVFR             "Event Flag Register"
   ADC1_EVFR             "Event Flag Register"
*/
/**********************************************************/

#define ADCn_EVFR_MASK                  0x1f1fffff
#define ADCn_EVFR_FR0_MASK              0x00000001
#define ADCn_EVFR_FR0_SHIFT             0
#define ADCn_EVFR_FR1_MASK              0x00000002
#define ADCn_EVFR_FR1_SHIFT             1
#define ADCn_EVFR_FR2_MASK              0x00000004
#define ADCn_EVFR_FR2_SHIFT             2
#define ADCn_EVFR_FR3_MASK              0x00000008
#define ADCn_EVFR_FR3_SHIFT             3
#define ADCn_EVFR_FR4_MASK              0x00000010
#define ADCn_EVFR_FR4_SHIFT             4
#define ADCn_EVFR_FR5_MASK              0x00000020
#define ADCn_EVFR_FR5_SHIFT             5
#define ADCn_EVFR_FR6_MASK              0x00000040
#define ADCn_EVFR_FR6_SHIFT             6
#define ADCn_EVFR_FR7_MASK              0x00000080
#define ADCn_EVFR_FR7_SHIFT             7
#define ADCn_EVFR_FR8_MASK              0x00000100
#define ADCn_EVFR_FR8_SHIFT             8
#define ADCn_EVFR_FR9_MASK              0x00000200
#define ADCn_EVFR_FR9_SHIFT             9
#define ADCn_EVFR_FR10_MASK             0x00000400
#define ADCn_EVFR_FR10_SHIFT            10
#define ADCn_EVFR_FR11_MASK             0x00000800
#define ADCn_EVFR_FR11_SHIFT            11
#define ADCn_EVFR_FR12_MASK             0x00001000
#define ADCn_EVFR_FR12_SHIFT            12
#define ADCn_EVFR_FR13_MASK             0x00002000
#define ADCn_EVFR_FR13_SHIFT            13
#define ADCn_EVFR_FR14_MASK             0x00004000
#define ADCn_EVFR_FR14_SHIFT            14
#define ADCn_EVFR_FR15_MASK             0x00008000
#define ADCn_EVFR_FR15_SHIFT            15
#define ADCn_EVFR_FS0_MASK              0x00010000
#define ADCn_EVFR_FS0_SHIFT             16
#define ADCn_EVFR_FS1_MASK              0x00020000
#define ADCn_EVFR_FS1_SHIFT             17
#define ADCn_EVFR_FS2_MASK              0x00040000
#define ADCn_EVFR_FS2_SHIFT             18
#define ADCn_EVFR_FS3_MASK              0x00080000
#define ADCn_EVFR_FS3_SHIFT             19
#define ADCn_EVFR_FS4_MASK              0x00100000
#define ADCn_EVFR_FS4_SHIFT             20
#define ADCn_EVFR_GFS0_MASK             0x01000000
#define ADCn_EVFR_GFS0_SHIFT            24
#define ADCn_EVFR_GFS1_MASK             0x02000000
#define ADCn_EVFR_GFS1_SHIFT            25
#define ADCn_EVFR_GFS2_MASK             0x04000000
#define ADCn_EVFR_GFS2_SHIFT            26
#define ADCn_EVFR_GFS3_MASK             0x08000000
#define ADCn_EVFR_GFS3_SHIFT            27
#define ADCn_EVFR_GFS4_MASK             0x10000000
#define ADCn_EVFR_GFS4_SHIFT            28



/****************** Masks for ADCn_EVNPR_t **********************/
/*
   ADC0_EVNPR            "Event Node Pointer Register"
   ADC1_EVNPR            "Event Node Pointer Register"
*/
/**********************************************************/

#define ADCn_EVNPR_MASK                 0x00077777
#define ADCn_EVNPR_SENP0_MASK           0x00000007
#define ADCn_EVNPR_SENP0_SHIFT          0
#define ADCn_EVNPR_SENP1_MASK           0x00000070
#define ADCn_EVNPR_SENP1_SHIFT          4
#define ADCn_EVNPR_SENP2_MASK           0x00000700
#define ADCn_EVNPR_SENP2_SHIFT          8
#define ADCn_EVNPR_SENP3_MASK           0x00007000
#define ADCn_EVNPR_SENP3_SHIFT          12
#define ADCn_EVNPR_SENP4_MASK           0x00070000
#define ADCn_EVNPR_SENP4_SHIFT          16



/****************** Masks for ADCn_GLOBCFG_t **********************/
/*
   ADC0_GLOBCFG          "Global Configuration Register"
   ADC1_GLOBCFG          "Global Configuration Register"
*/
/**********************************************************/

#define ADCn_GLOBCFG_MASK               0x00009f70
#define ADCn_GLOBCFG_MTM7_MASK          0x00000010
#define ADCn_GLOBCFG_MTM7_SHIFT         4
#define ADCn_GLOBCFG_SUCAL_MASK         0x00000020
#define ADCn_GLOBCFG_SUCAL_SHIFT        5
#define ADCn_GLOBCFG_DPCAL_MASK         0x00000040
#define ADCn_GLOBCFG_DPCAL_SHIFT        6
#define ADCn_GLOBCFG_MTMCH_MASK         0x00001f00
#define ADCn_GLOBCFG_MTMCH_SHIFT        8
#define ADCn_GLOBCFG_MTMEN_MASK         0x00008000
#define ADCn_GLOBCFG_MTMEN_SHIFT        15



/****************** Masks for ADCn_GLOBCTR_t **********************/
/*
   ADC0_GLOBCTR          "Global Control Register"
   ADC1_GLOBCTR          "Global Control Register"
*/
/**********************************************************/

#define ADCn_GLOBCTR_MASK               0x00008fff
#define ADCn_GLOBCTR_DIVA_MASK          0x0000003f
#define ADCn_GLOBCTR_DIVA_SHIFT         0
#define ADCn_GLOBCTR_DIVD_MASK          0x000000c0
#define ADCn_GLOBCTR_DIVD_SHIFT         6
#define ADCn_GLOBCTR_ANON_MASK          0x00000300
#define ADCn_GLOBCTR_ANON_SHIFT         8
#define ADCn_GLOBCTR_ARBRND_MASK        0x00000c00
#define ADCn_GLOBCTR_ARBRND_SHIFT       10
#define ADCn_GLOBCTR_ARBM_MASK          0x00008000
#define ADCn_GLOBCTR_ARBM_SHIFT         15



/****************** Masks for ADCn_GLOBSTR_t **********************/
/*
   ADC0_GLOBSTR          "Global Status Register"
   ADC1_GLOBSTR          "Global Status Register"
*/
/**********************************************************/

#define ADCn_GLOBSTR_MASK               0x00003f7f
#define ADCn_GLOBSTR_BUSY_MASK          0x00000001
#define ADCn_GLOBSTR_BUSY_SHIFT         0
#define ADCn_GLOBSTR_SAMPLE_MASK        0x00000002
#define ADCn_GLOBSTR_SAMPLE_SHIFT       1
#define ADCn_GLOBSTR_CAL_MASK           0x00000004
#define ADCn_GLOBSTR_CAL_SHIFT          2
#define ADCn_GLOBSTR_CHNR_MASK          0x00000078
#define ADCn_GLOBSTR_CHNR_SHIFT         3
#define ADCn_GLOBSTR_ANON_MASK          0x00000300
#define ADCn_GLOBSTR_ANON_SHIFT         8
#define ADCn_GLOBSTR_SYNRUN_MASK        0x00000400
#define ADCn_GLOBSTR_SYNRUN_SHIFT       10
#define ADCn_GLOBSTR_CSRC_MASK          0x00003800
#define ADCn_GLOBSTR_CSRC_SHIFT         11



/****************** Masks for ADCn_ID_t **********************/
/*
   ADC0_ID               "Module Identification Register"
   ADC1_ID               "Module Identification Register"
*/
/**********************************************************/

#define ADCn_ID_MASK                    0xffffffff
#define ADCn_ID_MOD_REV_MASK            0x000000ff
#define ADCn_ID_MOD_REV_SHIFT           0
#define ADCn_ID_MOD_TYPE_MASK           0x0000ff00
#define ADCn_ID_MOD_TYPE_SHIFT          8
#define ADCn_ID_MOD_NUMBER_MASK         0xffff0000
#define ADCn_ID_MOD_NUMBER_SHIFT        16



/****************** Masks for ADCn_INPCRm_t **********************/
/*
   ADC0_INPCR0           "Input Class Register 0"
   ADC0_INPCR1           "Input Class Register 1"
   ADC0_INPCR2           "Input Class Register 2"
   ADC0_INPCR3           "Input Class Register 3"
   ADC1_INPCR0           "Input Class Register 0"
   ADC1_INPCR1           "Input Class Register 1"
   ADC1_INPCR2           "Input Class Register 2"
   ADC1_INPCR3           "Input Class Register 3"
*/
/**********************************************************/

#define ADCn_INPCRm_MASK                0x000003ff
#define ADCn_INPCRm_STC_MASK            0x000000ff
#define ADCn_INPCRm_STC_SHIFT           0
#define ADCn_INPCRm_DW_MASK             0x00000300
#define ADCn_INPCRm_DW_SHIFT            8



/****************** Masks for ADCn_INTR_t **********************/
/*
   ADC0_INTR             "Interrupt Activation Register"
   ADC1_INTR             "Interrupt Activation Register"
*/
/**********************************************************/

#define ADCn_INTR_MASK                  0x000000ff
#define ADCn_INTR_SISR0_MASK            0x00000001
#define ADCn_INTR_SISR0_SHIFT           0
#define ADCn_INTR_SISR1_MASK            0x00000002
#define ADCn_INTR_SISR1_SHIFT           1
#define ADCn_INTR_SISR2_MASK            0x00000004
#define ADCn_INTR_SISR2_SHIFT           2
#define ADCn_INTR_SISR3_MASK            0x00000008
#define ADCn_INTR_SISR3_SHIFT           3
#define ADCn_INTR_SISR4_MASK            0x00000010
#define ADCn_INTR_SISR4_SHIFT           4
#define ADCn_INTR_SISR5_MASK            0x00000020
#define ADCn_INTR_SISR5_SHIFT           5
#define ADCn_INTR_SISR6_MASK            0x00000040
#define ADCn_INTR_SISR6_SHIFT           6
#define ADCn_INTR_SISR7_MASK            0x00000080
#define ADCn_INTR_SISR7_SHIFT           7



/****************** Masks for ADCn_LCBRm_t **********************/
/*
   ADC0_LCBR0            "Limit Check Boundary Register 0"
   ADC0_LCBR1            "Limit Check Boundary Register 1"
   ADC0_LCBR2            "Limit Check Boundary Register 2"
   ADC0_LCBR3            "Limit Check Boundary Register 3"
   ADC1_LCBR0            "Limit Check Boundary Register 0"
   ADC1_LCBR1            "Limit Check Boundary Register 1"
   ADC1_LCBR2            "Limit Check Boundary Register 2"
   ADC1_LCBR3            "Limit Check Boundary Register 3"
*/
/**********************************************************/

#define ADCn_LCBRm_MASK                 0x00000ffc
#define ADCn_LCBRm_BOUNDARY_MASK        0x00000ffc
#define ADCn_LCBRm_BOUNDARY_SHIFT       2



/****************** Masks for ADCn_QBURm_t **********************/
/*
   ADC0_QBUR0            "Queue 0"
   ADC0_QBUR2            "Queue 2"
   ADC0_QBUR4            "Queue 4"
   ADC1_QBUR0            "Queue 0"
   ADC1_QBUR2            "Queue 2"
   ADC1_QBUR4            "Queue 4"
*/
/**********************************************************/

#define ADCn_QBURm_QBACKUP_MASK         0x000001ef
#define ADCn_QBURm_QBACKUP_REQCHNR_MASK 0x0000000f
#define ADCn_QBURm_QBACKUP_REQCHNR_SHIFT 0
#define ADCn_QBURm_QBACKUP_RF_MASK      0x00000020
#define ADCn_QBURm_QBACKUP_RF_SHIFT     5
#define ADCn_QBURm_QBACKUP_ENSI_MASK    0x00000040
#define ADCn_QBURm_QBACKUP_ENSI_SHIFT   6
#define ADCn_QBURm_QBACKUP_EXTR_MASK    0x00000080
#define ADCn_QBURm_QBACKUP_EXTR_SHIFT   7
#define ADCn_QBURm_QBACKUP_V_MASK       0x00000100
#define ADCn_QBURm_QBACKUP_V_SHIFT      8

#define ADCn_QBURm_QINPUT_MASK          0x000000ef
#define ADCn_QBURm_QINPUT_REQCHNR_MASK  0x0000000f
#define ADCn_QBURm_QINPUT_REQCHNR_SHIFT 0
#define ADCn_QBURm_QINPUT_RF_MASK       0x00000020
#define ADCn_QBURm_QINPUT_RF_SHIFT      5
#define ADCn_QBURm_QINPUT_ENSI_MASK     0x00000040
#define ADCn_QBURm_QINPUT_ENSI_SHIFT    6
#define ADCn_QBURm_QINPUT_EXTR_MASK     0x00000080
#define ADCn_QBURm_QINPUT_EXTR_SHIFT    7



/****************** Masks for ADCn_QMRm_t **********************/
/*
   ADC0_QMR0             "Queue 0 Mode Register"
   ADC0_QMR2             "Queue 2 Mode Register"
   ADC0_QMR4             "Queue 4 Mode Register"
   ADC1_QMR0             "Queue 0 Mode Register"
   ADC1_QMR2             "Queue 2 Mode Register"
   ADC1_QMR4             "Queue 4 Mode Register"
*/
/**********************************************************/

#define ADCn_QMRm_MASK                  0x00000f07
#define ADCn_QMRm_ENGT_MASK             0x00000003
#define ADCn_QMRm_ENGT_SHIFT            0
#define ADCn_QMRm_ENTR_MASK             0x00000004
#define ADCn_QMRm_ENTR_SHIFT            2
#define ADCn_QMRm_CLRV_MASK             0x00000100
#define ADCn_QMRm_CLRV_SHIFT            8
#define ADCn_QMRm_TREV_MASK             0x00000200
#define ADCn_QMRm_TREV_SHIFT            9
#define ADCn_QMRm_FLUSH_MASK            0x00000400
#define ADCn_QMRm_FLUSH_SHIFT           10
#define ADCn_QMRm_CEV_MASK              0x00000800
#define ADCn_QMRm_CEV_SHIFT             11



/****************** Masks for ADCn_QSRm_t **********************/
/*
   ADC0_QSR0             "Queue 0 Status Register"
   ADC0_QSR2             "Queue 2 Status Register"
   ADC0_QSR4             "Queue 4 Status Register"
   ADC1_QSR0             "Queue 0 Status Register"
   ADC1_QSR2             "Queue 2 Status Register"
   ADC1_QSR4             "Queue 4 Status Register"
*/
/**********************************************************/

#define ADCn_QSRm_MASK                  0x000001af
#define ADCn_QSRm_FILL_MASK             0x0000000f
#define ADCn_QSRm_FILL_SHIFT            0
#define ADCn_QSRm_EMPTY_MASK            0x00000020
#define ADCn_QSRm_EMPTY_SHIFT           5
#define ADCn_QSRm_REQGT_MASK            0x00000080
#define ADCn_QSRm_REQGT_SHIFT           7
#define ADCn_QSRm_EV_MASK               0x00000100
#define ADCn_QSRm_EV_SHIFT              8



/****************** Masks for ADCn_RCRm_t **********************/
/*
   ADC0_RCR0             "Result Control Register 0"
   ADC0_RCR1             "Result Control Register 1"
   ADC0_RCR10            "Result Control Register 10"
   ADC0_RCR11            "Result Control Register 11"
   ADC0_RCR12            "Result Control Register 12"
   ADC0_RCR13            "Result Control Register 13"
   ADC0_RCR14            "Result Control Register 14"
   ADC0_RCR15            "Result Control Register 15"
   ADC0_RCR2             "Result Control Register 2"
   ADC0_RCR3             "Result Control Register 3"
   ADC0_RCR4             "Result Control Register 4"
   ADC0_RCR5             "Result Control Register 5"
   ADC0_RCR6             "Result Control Register 6"
   ADC0_RCR7             "Result Control Register 7"
   ADC0_RCR8             "Result Control Register 8"
   ADC0_RCR9             "Result Control Register 9"
   ADC1_RCR0             "Result Control Register 0"
   ADC1_RCR1             "Result Control Register 1"
   ADC1_RCR10            "Result Control Register 10"
   ADC1_RCR11            "Result Control Register 11"
   ADC1_RCR12            "Result Control Register 12"
   ADC1_RCR13            "Result Control Register 13"
   ADC1_RCR14            "Result Control Register 14"
   ADC1_RCR15            "Result Control Register 15"
   ADC1_RCR2             "Result Control Register 2"
   ADC1_RCR3             "Result Control Register 3"
   ADC1_RCR4             "Result Control Register 4"
   ADC1_RCR5             "Result Control Register 5"
   ADC1_RCR6             "Result Control Register 6"
   ADC1_RCR7             "Result Control Register 7"
   ADC1_RCR8             "Result Control Register 8"
   ADC1_RCR9             "Result Control Register 9"
*/
/**********************************************************/

#define ADCn_RCRm_MASK                  0x00000073
#define ADCn_RCRm_DRCTR_MASK            0x00000003
#define ADCn_RCRm_DRCTR_SHIFT           0
#define ADCn_RCRm_ENRI_MASK             0x00000010
#define ADCn_RCRm_ENRI_SHIFT            4
#define ADCn_RCRm_FEN_MASK              0x00000020
#define ADCn_RCRm_FEN_SHIFT             5
#define ADCn_RCRm_WFR_MASK              0x00000040
#define ADCn_RCRm_WFR_SHIFT             6



/****************** Masks for ADCn_RESR0_t **********************/
/*
   ADC0_RESR0            "Result Register 0"
   ADC1_RESR0            "Result Register 0"
*/
/**********************************************************/

#define ADCn_RESR0_MASK                 0xef773fff
#define ADCn_RESR0_RESULT_MASK          0x00003fff
#define ADCn_RESR0_RESULT_SHIFT         0
#define ADCn_RESR0_EMUX_MASK            0x00070000
#define ADCn_RESR0_EMUX_SHIFT           16
#define ADCn_RESR0_CRS_MASK             0x00700000
#define ADCn_RESR0_CRS_SHIFT            20
#define ADCn_RESR0_CHNR_MASK            0x0f000000
#define ADCn_RESR0_CHNR_SHIFT           24
#define ADCn_RESR0_DRC_MASK             0x60000000
#define ADCn_RESR0_DRC_SHIFT            29
#define ADCn_RESR0_VF_MASK              0x80000000
#define ADCn_RESR0_VF_SHIFT             31



/****************** Masks for ADCn_RESRD0_t **********************/
/*
   ADC0_RESRD0           "Result Register 0 for Debugging"
   ADC1_RESRD0           "Result Register 0 for Debugging"
*/
/**********************************************************/

#define ADCn_RESRD0_MASK                0xef773fff
#define ADCn_RESRD0_RESULT_MASK         0x00003fff
#define ADCn_RESRD0_RESULT_SHIFT        0
#define ADCn_RESRD0_EMUX_MASK           0x00070000
#define ADCn_RESRD0_EMUX_SHIFT          16
#define ADCn_RESRD0_CRS_MASK            0x00700000
#define ADCn_RESRD0_CRS_SHIFT           20
#define ADCn_RESRD0_CHNR_MASK           0x0f000000
#define ADCn_RESRD0_CHNR_SHIFT          24
#define ADCn_RESRD0_DRC_MASK            0x60000000
#define ADCn_RESRD0_DRC_SHIFT           29
#define ADCn_RESRD0_VF_MASK             0x80000000
#define ADCn_RESRD0_VF_SHIFT            31



/****************** Masks for ADCn_RESRDm_t **********************/
/*
   ADC0_RESRD1           "Result Register 1 for Debugging"
   ADC0_RESRD10          "Result Register 10 for Debugging"
   ADC0_RESRD11          "Result Register 11 for Debugging"
   ADC0_RESRD12          "Result Register 12 for Debugging"
   ADC0_RESRD13          "Result Register 13 for Debugging"
   ADC0_RESRD14          "Result Register 14 for Debugging"
   ADC0_RESRD15          "Result Register 15 for Debugging"
   ADC0_RESRD2           "Result Register 2 for Debugging"
   ADC0_RESRD3           "Result Register 3 for Debugging"
   ADC0_RESRD4           "Result Register 4 for Debugging"
   ADC0_RESRD5           "Result Register 5 for Debugging"
   ADC0_RESRD6           "Result Register 6 for Debugging"
   ADC0_RESRD7           "Result Register 7 for Debugging"
   ADC0_RESRD8           "Result Register 8 for Debugging"
   ADC0_RESRD9           "Result Register 9 for Debugging"
   ADC1_RESRD1           "Result Register 1 for Debugging"
   ADC1_RESRD10          "Result Register 10 for Debugging"
   ADC1_RESRD11          "Result Register 11 for Debugging"
   ADC1_RESRD12          "Result Register 12 for Debugging"
   ADC1_RESRD13          "Result Register 13 for Debugging"
   ADC1_RESRD14          "Result Register 14 for Debugging"
   ADC1_RESRD15          "Result Register 15 for Debugging"
   ADC1_RESRD2           "Result Register 2 for Debugging"
   ADC1_RESRD3           "Result Register 3 for Debugging"
   ADC1_RESRD4           "Result Register 4 for Debugging"
   ADC1_RESRD5           "Result Register 5 for Debugging"
   ADC1_RESRD6           "Result Register 6 for Debugging"
   ADC1_RESRD7           "Result Register 7 for Debugging"
   ADC1_RESRD8           "Result Register 8 for Debugging"
   ADC1_RESRD9           "Result Register 9 for Debugging"
*/
/**********************************************************/

#define ADCn_RESRDm_MASK                0xef703fff
#define ADCn_RESRDm_RESULT_MASK         0x00003fff
#define ADCn_RESRDm_RESULT_SHIFT        0
#define ADCn_RESRDm_CRS_MASK            0x00700000
#define ADCn_RESRDm_CRS_SHIFT           20
#define ADCn_RESRDm_CHNR_MASK           0x0f000000
#define ADCn_RESRDm_CHNR_SHIFT          24
#define ADCn_RESRDm_DRC_MASK            0x60000000
#define ADCn_RESRDm_DRC_SHIFT           29
#define ADCn_RESRDm_VF_MASK             0x80000000
#define ADCn_RESRDm_VF_SHIFT            31



/****************** Masks for ADCn_RESRm_t **********************/
/*
   ADC0_RESR1            "Result Register 1"
   ADC0_RESR10           "Result Register 10"
   ADC0_RESR11           "Result Register 11"
   ADC0_RESR12           "Result Register 12"
   ADC0_RESR13           "Result Register 13"
   ADC0_RESR14           "Result Register 14"
   ADC0_RESR15           "Result Register 15"
   ADC0_RESR2            "Result Register 2"
   ADC0_RESR3            "Result Register 3"
   ADC0_RESR4            "Result Register 4"
   ADC0_RESR5            "Result Register 5"
   ADC0_RESR6            "Result Register 6"
   ADC0_RESR7            "Result Register 7"
   ADC0_RESR8            "Result Register 8"
   ADC0_RESR9            "Result Register 9"
   ADC1_RESR1            "Result Register 1"
   ADC1_RESR10           "Result Register 10"
   ADC1_RESR11           "Result Register 11"
   ADC1_RESR12           "Result Register 12"
   ADC1_RESR13           "Result Register 13"
   ADC1_RESR14           "Result Register 14"
   ADC1_RESR15           "Result Register 15"
   ADC1_RESR2            "Result Register 2"
   ADC1_RESR3            "Result Register 3"
   ADC1_RESR4            "Result Register 4"
   ADC1_RESR5            "Result Register 5"
   ADC1_RESR6            "Result Register 6"
   ADC1_RESR7            "Result Register 7"
   ADC1_RESR8            "Result Register 8"
   ADC1_RESR9            "Result Register 9"
*/
/**********************************************************/

#define ADCn_RESRm_MASK                 0xef703fff
#define ADCn_RESRm_RESULT_MASK          0x00003fff
#define ADCn_RESRm_RESULT_SHIFT         0
#define ADCn_RESRm_CRS_MASK             0x00700000
#define ADCn_RESRm_CRS_SHIFT            20
#define ADCn_RESRm_CHNR_MASK            0x0f000000
#define ADCn_RESRm_CHNR_SHIFT           24
#define ADCn_RESRm_DRC_MASK             0x60000000
#define ADCn_RESRm_DRC_SHIFT            29
#define ADCn_RESRm_VF_MASK              0x80000000
#define ADCn_RESRm_VF_SHIFT             31



/****************** Masks for ADCn_RNPRm_t **********************/
/*
   ADC0_RNPR0            "Result Node Pointer Register 0"
   ADC0_RNPR8            "Result Node Pointer Register 8"
   ADC1_RNPR0            "Result Node Pointer Register 0"
   ADC1_RNPR8            "Result Node Pointer Register 8"
*/
/**********************************************************/

#define ADCn_RNPRm_MASK                 0x77777777
#define ADCn_RNPRm_RENP0_MASK           0x00000007
#define ADCn_RNPRm_RENP0_SHIFT          0
#define ADCn_RNPRm_RENP1_MASK           0x00000070
#define ADCn_RNPRm_RENP1_SHIFT          4
#define ADCn_RNPRm_RENP2_MASK           0x00000700
#define ADCn_RNPRm_RENP2_SHIFT          8
#define ADCn_RNPRm_RENP3_MASK           0x00007000
#define ADCn_RNPRm_RENP3_SHIFT          12
#define ADCn_RNPRm_RENP4_MASK           0x00070000
#define ADCn_RNPRm_RENP4_SHIFT          16
#define ADCn_RNPRm_RENP5_MASK           0x00700000
#define ADCn_RNPRm_RENP5_SHIFT          20
#define ADCn_RNPRm_RENP6_MASK           0x07000000
#define ADCn_RNPRm_RENP6_SHIFT          24
#define ADCn_RNPRm_RENP7_MASK           0x70000000
#define ADCn_RNPRm_RENP7_SHIFT          28



/****************** Masks for ADCn_RSIRm_t **********************/
/*
   ADC0_RSIR0            "Request Source 0 Input Register"
   ADC0_RSIR1            "Request Source 1 Input Register"
   ADC0_RSIR2            "Request Source 2 Input Register"
   ADC0_RSIR3            "Request Source 3 Input Register"
   ADC0_RSIR4            "Request Source 4 Input Register"
   ADC1_RSIR0            "Request Source 0 Input Register"
   ADC1_RSIR1            "Request Source 1 Input Register"
   ADC1_RSIR2            "Request Source 2 Input Register"
   ADC1_RSIR3            "Request Source 3 Input Register"
   ADC1_RSIR4            "Request Source 4 Input Register"
*/
/**********************************************************/

#define ADCn_RSIRm_MASK                 0x0000b797
#define ADCn_RSIRm_GTSEL_MASK           0x00000007
#define ADCn_RSIRm_GTSEL_SHIFT          0
#define ADCn_RSIRm_TMEN_MASK            0x00000010
#define ADCn_RSIRm_TMEN_SHIFT           4
#define ADCn_RSIRm_GTI_MASK             0x00000080
#define ADCn_RSIRm_GTI_SHIFT            7
#define ADCn_RSIRm_TRSEL_MASK           0x00000700
#define ADCn_RSIRm_TRSEL_SHIFT          8
#define ADCn_RSIRm_FEN_MASK             0x00001000
#define ADCn_RSIRm_FEN_SHIFT            12
#define ADCn_RSIRm_REN_MASK             0x00002000
#define ADCn_RSIRm_REN_SHIFT            13
#define ADCn_RSIRm_TRI_MASK             0x00008000
#define ADCn_RSIRm_TRI_SHIFT            15



/****************** Masks for ADCn_RSPR0_t **********************/
/*
   ADC0_RSPR0            "Request Source Priority Register 0"
   ADC1_RSPR0            "Request Source Priority Register 0"
*/
/**********************************************************/

#define ADCn_RSPR0_MASK                 0x0000bbbb
#define ADCn_RSPR0_PRIO0_MASK           0x00000003
#define ADCn_RSPR0_PRIO0_SHIFT          0
#define ADCn_RSPR0_CSM0_MASK            0x00000008
#define ADCn_RSPR0_CSM0_SHIFT           3
#define ADCn_RSPR0_PRIO1_MASK           0x00000030
#define ADCn_RSPR0_PRIO1_SHIFT          4
#define ADCn_RSPR0_CSM1_MASK            0x00000080
#define ADCn_RSPR0_CSM1_SHIFT           7
#define ADCn_RSPR0_PRIO2_MASK           0x00000300
#define ADCn_RSPR0_PRIO2_SHIFT          8
#define ADCn_RSPR0_CSM2_MASK            0x00000800
#define ADCn_RSPR0_CSM2_SHIFT           11
#define ADCn_RSPR0_PRIO3_MASK           0x00003000
#define ADCn_RSPR0_PRIO3_SHIFT          12
#define ADCn_RSPR0_CSM3_MASK            0x00008000
#define ADCn_RSPR0_CSM3_SHIFT           15



/****************** Masks for ADCn_RSPR4_t **********************/
/*
   ADC0_RSPR4            "Request Source Priority Register 4"
   ADC1_RSPR4            "Request Source Priority Register 4"
*/
/**********************************************************/

#define ADCn_RSPR4_MASK                 0x0000000b
#define ADCn_RSPR4_PRIO4_MASK           0x00000003
#define ADCn_RSPR4_PRIO4_SHIFT          0
#define ADCn_RSPR4_CSM4_MASK            0x00000008
#define ADCn_RSPR4_CSM4_SHIFT           3



/****************** Masks for ADCn_SYNCTR_t **********************/
/*
   ADC0_SYNCTR           "Synchronization Control Register"
   ADC1_SYNCTR           "Synchronization Control Register"
*/
/**********************************************************/

#define ADCn_SYNCTR_MASK                0x00000073
#define ADCn_SYNCTR_STSEL_MASK          0x00000003
#define ADCn_SYNCTR_STSEL_SHIFT         0
#define ADCn_SYNCTR_EVALR1_MASK         0x00000010
#define ADCn_SYNCTR_EVALR1_SHIFT        4
#define ADCn_SYNCTR_EVALR2_MASK         0x00000020
#define ADCn_SYNCTR_EVALR2_SHIFT        5
#define ADCn_SYNCTR_EVALR3_MASK         0x00000040
#define ADCn_SYNCTR_EVALR3_SHIFT        6



/****************** Masks for ADCn_VFR_t **********************/
/*
   ADC0_VFR              "Valid Flag Register"
   ADC1_VFR              "Valid Flag Register"
*/
/**********************************************************/

#define ADCn_VFR_MASK                   0x0000ffff
#define ADCn_VFR_VF0_MASK               0x00000001
#define ADCn_VFR_VF0_SHIFT              0
#define ADCn_VFR_VF1_MASK               0x00000002
#define ADCn_VFR_VF1_SHIFT              1
#define ADCn_VFR_VF2_MASK               0x00000004
#define ADCn_VFR_VF2_SHIFT              2
#define ADCn_VFR_VF3_MASK               0x00000008
#define ADCn_VFR_VF3_SHIFT              3
#define ADCn_VFR_VF4_MASK               0x00000010
#define ADCn_VFR_VF4_SHIFT              4
#define ADCn_VFR_VF5_MASK               0x00000020
#define ADCn_VFR_VF5_SHIFT              5
#define ADCn_VFR_VF6_MASK               0x00000040
#define ADCn_VFR_VF6_SHIFT              6
#define ADCn_VFR_VF7_MASK               0x00000080
#define ADCn_VFR_VF7_SHIFT              7
#define ADCn_VFR_VF8_MASK               0x00000100
#define ADCn_VFR_VF8_SHIFT              8
#define ADCn_VFR_VF9_MASK               0x00000200
#define ADCn_VFR_VF9_SHIFT              9
#define ADCn_VFR_VF10_MASK              0x00000400
#define ADCn_VFR_VF10_SHIFT             10
#define ADCn_VFR_VF11_MASK              0x00000800
#define ADCn_VFR_VF11_SHIFT             11
#define ADCn_VFR_VF12_MASK              0x00001000
#define ADCn_VFR_VF12_SHIFT             12
#define ADCn_VFR_VF13_MASK              0x00002000
#define ADCn_VFR_VF13_SHIFT             13
#define ADCn_VFR_VF14_MASK              0x00004000
#define ADCn_VFR_VF14_SHIFT             14
#define ADCn_VFR_VF15_MASK              0x00008000
#define ADCn_VFR_VF15_SHIFT             15




#endif /* _HAVE_TRICORE_ADC0_ADC1_SHAREMASKS_H_ */

