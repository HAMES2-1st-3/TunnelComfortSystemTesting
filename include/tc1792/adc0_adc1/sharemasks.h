/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_ADC0_ADC1_SHAREMASKS_H_
#define _HAVE_TRICORE_ADC0_ADC1_SHAREMASKS_H_


/****************** Masks for ADCn_AP_t **********************/
/*
   ADC0_AP               "ADC0 Arbitration Participation Register"
   ADC1_AP               "ADC1 Arbitration Participation Register"
*/
/**********************************************************/

#define ADCn_AP_MASK                    0x000000db
#define ADCn_AP_ASP_MASK                0x00000001
#define ADCn_AP_ASP_SHIFT               0
#define ADCn_AP_QP_MASK                 0x00000002
#define ADCn_AP_QP_SHIFT                1
#define ADCn_AP_SW0P_MASK               0x00000008
#define ADCn_AP_SW0P_SHIFT              3
#define ADCn_AP_EXP_MASK                0x00000010
#define ADCn_AP_EXP_SHIFT               4
#define ADCn_AP_TP_MASK                 0x00000040
#define ADCn_AP_TP_SHIFT                6
#define ADCn_AP_CHP_MASK                0x00000080
#define ADCn_AP_CHP_SHIFT               7



/****************** Masks for ADCn_ASCRP_t **********************/
/*
   ADC0_ASCRP            "ADC0 Auto Scan Conversion Request Pending Register"
   ADC1_ASCRP            "ADC1 Auto Scan Conversion Request Pending Register"
*/
/**********************************************************/

#define ADCn_ASCRP_MASK                 0x8000ffff
#define ADCn_ASCRP_ASCRP0_MASK          0x00000001
#define ADCn_ASCRP_ASCRP0_SHIFT         0
#define ADCn_ASCRP_ASCRP1_MASK          0x00000002
#define ADCn_ASCRP_ASCRP1_SHIFT         1
#define ADCn_ASCRP_ASCRP2_MASK          0x00000004
#define ADCn_ASCRP_ASCRP2_SHIFT         2
#define ADCn_ASCRP_ASCRP3_MASK          0x00000008
#define ADCn_ASCRP_ASCRP3_SHIFT         3
#define ADCn_ASCRP_ASCRP4_MASK          0x00000010
#define ADCn_ASCRP_ASCRP4_SHIFT         4
#define ADCn_ASCRP_ASCRP5_MASK          0x00000020
#define ADCn_ASCRP_ASCRP5_SHIFT         5
#define ADCn_ASCRP_ASCRP6_MASK          0x00000040
#define ADCn_ASCRP_ASCRP6_SHIFT         6
#define ADCn_ASCRP_ASCRP7_MASK          0x00000080
#define ADCn_ASCRP_ASCRP7_SHIFT         7
#define ADCn_ASCRP_ASCRP8_MASK          0x00000100
#define ADCn_ASCRP_ASCRP8_SHIFT         8
#define ADCn_ASCRP_ASCRP9_MASK          0x00000200
#define ADCn_ASCRP_ASCRP9_SHIFT         9
#define ADCn_ASCRP_ASCRP10_MASK         0x00000400
#define ADCn_ASCRP_ASCRP10_SHIFT        10
#define ADCn_ASCRP_ASCRP11_MASK         0x00000800
#define ADCn_ASCRP_ASCRP11_SHIFT        11
#define ADCn_ASCRP_ASCRP12_MASK         0x00001000
#define ADCn_ASCRP_ASCRP12_SHIFT        12
#define ADCn_ASCRP_ASCRP13_MASK         0x00002000
#define ADCn_ASCRP_ASCRP13_SHIFT        13
#define ADCn_ASCRP_ASCRP14_MASK         0x00004000
#define ADCn_ASCRP_ASCRP14_SHIFT        14
#define ADCn_ASCRP_ASCRP15_MASK         0x00008000
#define ADCn_ASCRP_ASCRP15_SHIFT        15
#define ADCn_ASCRP_GRPS_MASK            0x80000000
#define ADCn_ASCRP_GRPS_SHIFT           31



/****************** Masks for ADCn_CHCONm_t **********************/
/*
   ADC0_CHCON0           "ADC0 Channel Control Register 0"
   ADC0_CHCON1           "ADC0 Channel Control Register 1"
   ADC0_CHCON10          "ADC0 Channel Control Register 10"
   ADC0_CHCON11          "ADC0 Channel Control Register 11"
   ADC0_CHCON12          "ADC0 Channel Control Register 12"
   ADC0_CHCON13          "ADC0 Channel Control Register 13"
   ADC0_CHCON14          "ADC0 Channel Control Register 14"
   ADC0_CHCON15          "ADC0 Channel Control Register 15"
   ADC0_CHCON2           "ADC0 Channel Control Register 2"
   ADC0_CHCON3           "ADC0 Channel Control Register 3"
   ADC0_CHCON4           "ADC0 Channel Control Register 4"
   ADC0_CHCON5           "ADC0 Channel Control Register 5"
   ADC0_CHCON6           "ADC0 Channel Control Register 6"
   ADC0_CHCON7           "ADC0 Channel Control Register 7"
   ADC0_CHCON8           "ADC0 Channel Control Register 8"
   ADC0_CHCON9           "ADC0 Channel Control Register 9"
   ADC1_CHCON0           "ADC1 Channel Control Register 0"
   ADC1_CHCON1           "ADC1 Channel Control Register 1"
   ADC1_CHCON10          "ADC1 Channel Control Register 10"
   ADC1_CHCON11          "ADC1 Channel Control Register 11"
   ADC1_CHCON12          "ADC1 Channel Control Register 12"
   ADC1_CHCON13          "ADC1 Channel Control Register 13"
   ADC1_CHCON14          "ADC1 Channel Control Register 14"
   ADC1_CHCON15          "ADC1 Channel Control Register 15"
   ADC1_CHCON2           "ADC1 Channel Control Register 2"
   ADC1_CHCON3           "ADC1 Channel Control Register 3"
   ADC1_CHCON4           "ADC1 Channel Control Register 4"
   ADC1_CHCON5           "ADC1 Channel Control Register 5"
   ADC1_CHCON6           "ADC1 Channel Control Register 6"
   ADC1_CHCON7           "ADC1 Channel Control Register 7"
   ADC1_CHCON8           "ADC1 Channel Control Register 8"
   ADC1_CHCON9           "ADC1 Channel Control Register 9"
*/
/**********************************************************/

#define ADCn_CHCONm_MASK                0x37ff7fff
#define ADCn_CHCONm_STC_MASK            0x000000ff
#define ADCn_CHCONm_STC_SHIFT           0
#define ADCn_CHCONm_REF_MASK            0x00000300
#define ADCn_CHCONm_REF_SHIFT           8
#define ADCn_CHCONm_RES_MASK            0x00000c00
#define ADCn_CHCONm_RES_SHIFT           10
#define ADCn_CHCONm_EMUX_MASK           0x00003000
#define ADCn_CHCONm_EMUX_SHIFT          12
#define ADCn_CHCONm_GRPS_MASK           0x00004000
#define ADCn_CHCONm_GRPS_SHIFT          14
#define ADCn_CHCONm_BSELB_MASK          0x00030000
#define ADCn_CHCONm_BSELB_SHIFT         16
#define ADCn_CHCONm_BSELA_MASK          0x000c0000
#define ADCn_CHCONm_BSELA_SHIFT         18
#define ADCn_CHCONm_LCC_MASK            0x00700000
#define ADCn_CHCONm_LCC_SHIFT           20
#define ADCn_CHCONm_ENCH_MASK           0x00800000
#define ADCn_CHCONm_ENCH_SHIFT          23
#define ADCn_CHCONm_INP_MASK            0x07000000
#define ADCn_CHCONm_INP_SHIFT           24
#define ADCn_CHCONm_SYM_MASK            0x30000000
#define ADCn_CHCONm_SYM_SHIFT           28



/****************** Masks for ADCn_CHIN_t **********************/
/*
   ADC0_CHIN             "ADC0 Channel Injection Control Register"
   ADC1_CHIN             "ADC1 Channel Injection Control Register"
*/
/**********************************************************/

#define ADCn_CHIN_MASK                  0x800087cf
#define ADCn_CHIN_CHNRIN_MASK           0x0000000f
#define ADCn_CHIN_CHNRIN_SHIFT          0
#define ADCn_CHIN_RES_MASK              0x000000c0
#define ADCn_CHIN_RES_SHIFT             6
#define ADCn_CHIN_EMUX_MASK             0x00000300
#define ADCn_CHIN_EMUX_SHIFT            8
#define ADCn_CHIN_GRPS_MASK             0x00000400
#define ADCn_CHIN_GRPS_SHIFT            10
#define ADCn_CHIN_CIREN_MASK            0x00008000
#define ADCn_CHIN_CIREN_SHIFT           15
#define ADCn_CHIN_CINREQ_MASK           0x80000000
#define ADCn_CHIN_CINREQ_SHIFT          31



/****************** Masks for ADCn_CHSTATm_t **********************/
/*
   ADC0_CHSTAT0          "ADC0 Channel Status Register 0"
   ADC0_CHSTAT1          "ADC0 Channel Status Register 1"
   ADC0_CHSTAT10         "ADC0 Channel Status Register 10"
   ADC0_CHSTAT11         "ADC0 Channel Status Register 11"
   ADC0_CHSTAT12         "ADC0 Channel Status Register 12"
   ADC0_CHSTAT13         "ADC0 Channel Status Register 13"
   ADC0_CHSTAT14         "ADC0 Channel Status Register 14"
   ADC0_CHSTAT15         "ADC0 Channel Status Register 15"
   ADC0_CHSTAT2          "ADC0 Channel Status Register 2"
   ADC0_CHSTAT3          "ADC0 Channel Status Register 3"
   ADC0_CHSTAT4          "ADC0 Channel Status Register 4"
   ADC0_CHSTAT5          "ADC0 Channel Status Register 5"
   ADC0_CHSTAT6          "ADC0 Channel Status Register 6"
   ADC0_CHSTAT7          "ADC0 Channel Status Register 7"
   ADC0_CHSTAT8          "ADC0 Channel Status Register 8"
   ADC0_CHSTAT9          "ADC0 Channel Status Register 9"
   ADC1_CHSTAT0          "ADC1 Channel Status Register 0"
   ADC1_CHSTAT1          "ADC1 Channel Status Register 1"
   ADC1_CHSTAT10         "ADC1 Channel Status Register 10"
   ADC1_CHSTAT11         "ADC1 Channel Status Register 11"
   ADC1_CHSTAT12         "ADC1 Channel Status Register 12"
   ADC1_CHSTAT13         "ADC1 Channel Status Register 13"
   ADC1_CHSTAT14         "ADC1 Channel Status Register 14"
   ADC1_CHSTAT15         "ADC1 Channel Status Register 15"
   ADC1_CHSTAT2          "ADC1 Channel Status Register 2"
   ADC1_CHSTAT3          "ADC1 Channel Status Register 3"
   ADC1_CHSTAT4          "ADC1 Channel Status Register 4"
   ADC1_CHSTAT5          "ADC1 Channel Status Register 5"
   ADC1_CHSTAT6          "ADC1 Channel Status Register 6"
   ADC1_CHSTAT7          "ADC1 Channel Status Register 7"
   ADC1_CHSTAT8          "ADC1 Channel Status Register 8"
   ADC1_CHSTAT9          "ADC1 Channel Status Register 9"
*/
/**********************************************************/

#define ADCn_CHSTATm_MASK               0x0f770fff
#define ADCn_CHSTATm_RESULT_MASK        0x00000fff
#define ADCn_CHSTATm_RESULT_SHIFT       0
#define ADCn_CHSTATm_EMUX_MASK          0x00030000
#define ADCn_CHSTATm_EMUX_SHIFT         16
#define ADCn_CHSTATm_GRPS_MASK          0x00040000
#define ADCn_CHSTATm_GRPS_SHIFT         18
#define ADCn_CHSTATm_CRS_MASK           0x00700000
#define ADCn_CHSTATm_CRS_SHIFT          20
#define ADCn_CHSTATm_CHNR_MASK          0x0f000000
#define ADCn_CHSTATm_CHNR_SHIFT         24



/****************** Masks for ADCn_CON_t **********************/
/*
   ADC0_CON              "ADC0 Converter Control Register"
   ADC1_CON              "ADC1 Converter Control Register"
*/
/**********************************************************/

#define ADCn_CON_MASK                   0x980f83ff
#define ADCn_CON_CTC_MASK               0x000000ff
#define ADCn_CON_CTC_SHIFT              0
#define ADCn_CON_SCNM_MASK              0x00000300
#define ADCn_CON_SCNM_SHIFT             8
#define ADCn_CON_QEN_MASK               0x00008000
#define ADCn_CON_QEN_SHIFT              15
#define ADCn_CON_QWLP_MASK              0x000f0000
#define ADCn_CON_QWLP_SHIFT             16
#define ADCn_CON_PCDIS_MASK             0x08000000
#define ADCn_CON_PCDIS_SHIFT            27
#define ADCn_CON_CPR_MASK               0x10000000
#define ADCn_CON_CPR_SHIFT              28
#define ADCn_CON_SRTEST_MASK            0x80000000
#define ADCn_CON_SRTEST_SHIFT           31



/****************** Masks for ADCn_EXCRP_t **********************/
/*
   ADC0_EXCRP            "ADC0 External Conversion Request Pending Register"
   ADC1_EXCRP            "ADC1 External Conversion Request Pending Register"
*/
/**********************************************************/

#define ADCn_EXCRP_MASK                 0x0000ffff
#define ADCn_EXCRP_EXCRP0_MASK          0x00000001
#define ADCn_EXCRP_EXCRP0_SHIFT         0
#define ADCn_EXCRP_EXCRP1_MASK          0x00000002
#define ADCn_EXCRP_EXCRP1_SHIFT         1
#define ADCn_EXCRP_EXCRP2_MASK          0x00000004
#define ADCn_EXCRP_EXCRP2_SHIFT         2
#define ADCn_EXCRP_EXCRP3_MASK          0x00000008
#define ADCn_EXCRP_EXCRP3_SHIFT         3
#define ADCn_EXCRP_EXCRP4_MASK          0x00000010
#define ADCn_EXCRP_EXCRP4_SHIFT         4
#define ADCn_EXCRP_EXCRP5_MASK          0x00000020
#define ADCn_EXCRP_EXCRP5_SHIFT         5
#define ADCn_EXCRP_EXCRP6_MASK          0x00000040
#define ADCn_EXCRP_EXCRP6_SHIFT         6
#define ADCn_EXCRP_EXCRP7_MASK          0x00000080
#define ADCn_EXCRP_EXCRP7_SHIFT         7
#define ADCn_EXCRP_EXCRP8_MASK          0x00000100
#define ADCn_EXCRP_EXCRP8_SHIFT         8
#define ADCn_EXCRP_EXCRP9_MASK          0x00000200
#define ADCn_EXCRP_EXCRP9_SHIFT         9
#define ADCn_EXCRP_EXCRP10_MASK         0x00000400
#define ADCn_EXCRP_EXCRP10_SHIFT        10
#define ADCn_EXCRP_EXCRP11_MASK         0x00000800
#define ADCn_EXCRP_EXCRP11_SHIFT        11
#define ADCn_EXCRP_EXCRP12_MASK         0x00001000
#define ADCn_EXCRP_EXCRP12_SHIFT        12
#define ADCn_EXCRP_EXCRP13_MASK         0x00002000
#define ADCn_EXCRP_EXCRP13_SHIFT        13
#define ADCn_EXCRP_EXCRP14_MASK         0x00004000
#define ADCn_EXCRP_EXCRP14_SHIFT        14
#define ADCn_EXCRP_EXCRP15_MASK         0x00008000
#define ADCn_EXCRP_EXCRP15_SHIFT        15



/****************** Masks for ADCn_EXTC_t **********************/
/*
   ADC0_EXTC             "ADC0 External Trigger Control Register"
   ADC1_EXTC             "ADC1 External Trigger Control Register"
*/
/**********************************************************/

#define ADCn_EXTC_MASK                  0x0000ffff
#define ADCn_EXTC_ETCCH0_MASK           0x00000001
#define ADCn_EXTC_ETCCH0_SHIFT          0
#define ADCn_EXTC_ETCCH1_MASK           0x00000002
#define ADCn_EXTC_ETCCH1_SHIFT          1
#define ADCn_EXTC_ETCCH2_MASK           0x00000004
#define ADCn_EXTC_ETCCH2_SHIFT          2
#define ADCn_EXTC_ETCCH3_MASK           0x00000008
#define ADCn_EXTC_ETCCH3_SHIFT          3
#define ADCn_EXTC_ETCCH4_MASK           0x00000010
#define ADCn_EXTC_ETCCH4_SHIFT          4
#define ADCn_EXTC_ETCCH5_MASK           0x00000020
#define ADCn_EXTC_ETCCH5_SHIFT          5
#define ADCn_EXTC_ETCCH6_MASK           0x00000040
#define ADCn_EXTC_ETCCH6_SHIFT          6
#define ADCn_EXTC_ETCCH7_MASK           0x00000080
#define ADCn_EXTC_ETCCH7_SHIFT          7
#define ADCn_EXTC_ETCCH8_MASK           0x00000100
#define ADCn_EXTC_ETCCH8_SHIFT          8
#define ADCn_EXTC_ETCCH9_MASK           0x00000200
#define ADCn_EXTC_ETCCH9_SHIFT          9
#define ADCn_EXTC_ETCCH10_MASK          0x00000400
#define ADCn_EXTC_ETCCH10_SHIFT         10
#define ADCn_EXTC_ETCCH11_MASK          0x00000800
#define ADCn_EXTC_ETCCH11_SHIFT         11
#define ADCn_EXTC_ETCCH12_MASK          0x00001000
#define ADCn_EXTC_ETCCH12_SHIFT         12
#define ADCn_EXTC_ETCCH13_MASK          0x00002000
#define ADCn_EXTC_ETCCH13_SHIFT         13
#define ADCn_EXTC_ETCCH14_MASK          0x00004000
#define ADCn_EXTC_ETCCH14_SHIFT         14
#define ADCn_EXTC_ETCCH15_MASK          0x00008000
#define ADCn_EXTC_ETCCH15_SHIFT         15



/****************** Masks for ADCn_LCCONm_t **********************/
/*
   ADC0_LCCON0           "ADC0 Limit Check Control Register 0"
   ADC0_LCCON1           "ADC0 Limit Check Control Register 1"
   ADC0_LCCON2           "ADC0 Limit Check Control Register 2"
   ADC0_LCCON3           "ADC0 Limit Check Control Register 3"
   ADC1_LCCON0           "ADC1 Limit Check Control Register 0"
   ADC1_LCCON1           "ADC1 Limit Check Control Register 1"
   ADC1_LCCON2           "ADC1 Limit Check Control Register 2"
   ADC1_LCCON3           "ADC1 Limit Check Control Register 3"
*/
/**********************************************************/

#define ADCn_LCCONm_MASK                0x00000fff
#define ADCn_LCCONm_BOUNDARY_MASK       0x00000fff
#define ADCn_LCCONm_BOUNDARY_SHIFT      0



/****************** Masks for ADCn_MSS0_t **********************/
/*
   ADC0_MSS0             "ADC0 Module Service Request Status Register 0"
   ADC1_MSS0             "ADC1 Module Service Request Status Register 0"
*/
/**********************************************************/

#define ADCn_MSS0_MASK                  0x0000ffff
#define ADCn_MSS0_MSRCH0_MASK           0x00000001
#define ADCn_MSS0_MSRCH0_SHIFT          0
#define ADCn_MSS0_MSRCH1_MASK           0x00000002
#define ADCn_MSS0_MSRCH1_SHIFT          1
#define ADCn_MSS0_MSRCH2_MASK           0x00000004
#define ADCn_MSS0_MSRCH2_SHIFT          2
#define ADCn_MSS0_MSRCH3_MASK           0x00000008
#define ADCn_MSS0_MSRCH3_SHIFT          3
#define ADCn_MSS0_MSRCH4_MASK           0x00000010
#define ADCn_MSS0_MSRCH4_SHIFT          4
#define ADCn_MSS0_MSRCH5_MASK           0x00000020
#define ADCn_MSS0_MSRCH5_SHIFT          5
#define ADCn_MSS0_MSRCH6_MASK           0x00000040
#define ADCn_MSS0_MSRCH6_SHIFT          6
#define ADCn_MSS0_MSRCH7_MASK           0x00000080
#define ADCn_MSS0_MSRCH7_SHIFT          7
#define ADCn_MSS0_MSRCH8_MASK           0x00000100
#define ADCn_MSS0_MSRCH8_SHIFT          8
#define ADCn_MSS0_MSRCH9_MASK           0x00000200
#define ADCn_MSS0_MSRCH9_SHIFT          9
#define ADCn_MSS0_MSRCH10_MASK          0x00000400
#define ADCn_MSS0_MSRCH10_SHIFT         10
#define ADCn_MSS0_MSRCH11_MASK          0x00000800
#define ADCn_MSS0_MSRCH11_SHIFT         11
#define ADCn_MSS0_MSRCH12_MASK          0x00001000
#define ADCn_MSS0_MSRCH12_SHIFT         12
#define ADCn_MSS0_MSRCH13_MASK          0x00002000
#define ADCn_MSS0_MSRCH13_SHIFT         13
#define ADCn_MSS0_MSRCH14_MASK          0x00004000
#define ADCn_MSS0_MSRCH14_SHIFT         14
#define ADCn_MSS0_MSRCH15_MASK          0x00008000
#define ADCn_MSS0_MSRCH15_SHIFT         15



/****************** Masks for ADCn_MSS1_t **********************/
/*
   ADC0_MSS1             "ADC0 Module Service Request Status Register 1"
   ADC1_MSS1             "ADC1 Module Service Request Status Register 1"
*/
/**********************************************************/

#define ADCn_MSS1_MASK                  0x0000000f
#define ADCn_MSS1_MSRT_MASK             0x00000001
#define ADCn_MSS1_MSRT_SHIFT            0
#define ADCn_MSS1_MSRSY_MASK            0x00000002
#define ADCn_MSS1_MSRSY_SHIFT           1
#define ADCn_MSS1_MSRQR_MASK            0x00000004
#define ADCn_MSS1_MSRQR_SHIFT           2
#define ADCn_MSS1_MSRAS_MASK            0x00000008
#define ADCn_MSS1_MSRAS_SHIFT           3



/****************** Masks for ADCn_QR_t **********************/
/*
   ADC0_QR               "ADC0 Queue Register"
   ADC1_QR               "ADC1 Queue Register"
*/
/**********************************************************/

#define ADCn_QR_MASK                    0x000087cf
#define ADCn_QR_CHNR_MASK               0x0000000f
#define ADCn_QR_CHNR_SHIFT              0
#define ADCn_QR_RES_MASK                0x000000c0
#define ADCn_QR_RES_SHIFT               6
#define ADCn_QR_EMUX_MASK               0x00000300
#define ADCn_QR_EMUX_SHIFT              8
#define ADCn_QR_GRPS_MASK               0x00000400
#define ADCn_QR_GRPS_SHIFT              10
#define ADCn_QR_V_MASK                  0x00008000
#define ADCn_QR_V_SHIFT                 15



/****************** Masks for ADCn_QUEUE0_t **********************/
/*
   ADC0_QUEUE0           "ADC0 Queue Status Register"
   ADC1_QUEUE0           "ADC1 Queue Status Register"
*/
/**********************************************************/

#define ADCn_QUEUE0_MASK                0x000087cf
#define ADCn_QUEUE0_CHNR_MASK           0x0000000f
#define ADCn_QUEUE0_CHNR_SHIFT          0
#define ADCn_QUEUE0_RES_MASK            0x000000c0
#define ADCn_QUEUE0_RES_SHIFT           6
#define ADCn_QUEUE0_EMUX_MASK           0x00000300
#define ADCn_QUEUE0_EMUX_SHIFT          8
#define ADCn_QUEUE0_GRPS_MASK           0x00000400
#define ADCn_QUEUE0_GRPS_SHIFT          10
#define ADCn_QUEUE0_V_MASK              0x00008000
#define ADCn_QUEUE0_V_SHIFT             15



/****************** Masks for ADCn_REQ0_t **********************/
/*
   ADC0_REQ0             "ADC0 Conversion Request Register SW0"
   ADC1_REQ0             "ADC1 Conversion Request Register SW0"
*/
/**********************************************************/

#define ADCn_REQ0_MASK                  0x0000ffff
#define ADCn_REQ0_REQ00_MASK            0x00000001
#define ADCn_REQ0_REQ00_SHIFT           0
#define ADCn_REQ0_REQ01_MASK            0x00000002
#define ADCn_REQ0_REQ01_SHIFT           1
#define ADCn_REQ0_REQ02_MASK            0x00000004
#define ADCn_REQ0_REQ02_SHIFT           2
#define ADCn_REQ0_REQ03_MASK            0x00000008
#define ADCn_REQ0_REQ03_SHIFT           3
#define ADCn_REQ0_REQ04_MASK            0x00000010
#define ADCn_REQ0_REQ04_SHIFT           4
#define ADCn_REQ0_REQ05_MASK            0x00000020
#define ADCn_REQ0_REQ05_SHIFT           5
#define ADCn_REQ0_REQ06_MASK            0x00000040
#define ADCn_REQ0_REQ06_SHIFT           6
#define ADCn_REQ0_REQ07_MASK            0x00000080
#define ADCn_REQ0_REQ07_SHIFT           7
#define ADCn_REQ0_REQ08_MASK            0x00000100
#define ADCn_REQ0_REQ08_SHIFT           8
#define ADCn_REQ0_REQ09_MASK            0x00000200
#define ADCn_REQ0_REQ09_SHIFT           9
#define ADCn_REQ0_REQ010_MASK           0x00000400
#define ADCn_REQ0_REQ010_SHIFT          10
#define ADCn_REQ0_REQ011_MASK           0x00000800
#define ADCn_REQ0_REQ011_SHIFT          11
#define ADCn_REQ0_REQ012_MASK           0x00001000
#define ADCn_REQ0_REQ012_SHIFT          12
#define ADCn_REQ0_REQ013_MASK           0x00002000
#define ADCn_REQ0_REQ013_SHIFT          13
#define ADCn_REQ0_REQ014_MASK           0x00004000
#define ADCn_REQ0_REQ014_SHIFT          14
#define ADCn_REQ0_REQ015_MASK           0x00008000
#define ADCn_REQ0_REQ015_SHIFT          15



/****************** Masks for ADCn_SAL_t **********************/
/*
   ADC0_SAL              "ADC0 Source Arbitration Level Register"
   ADC1_SAL              "ADC1 Source Arbitration Level Register"
*/
/**********************************************************/

#define ADCn_SAL_MASK                   0x77077077
#define ADCn_SAL_SALAS_MASK             0x00000007
#define ADCn_SAL_SALAS_SHIFT            0
#define ADCn_SAL_SALQ_MASK              0x00000070
#define ADCn_SAL_SALQ_SHIFT             4
#define ADCn_SAL_SALSW0_MASK            0x00007000
#define ADCn_SAL_SALSW0_SHIFT           12
#define ADCn_SAL_SALEXT_MASK            0x00070000
#define ADCn_SAL_SALEXT_SHIFT           16
#define ADCn_SAL_SALT_MASK              0x07000000
#define ADCn_SAL_SALT_SHIFT             24
#define ADCn_SAL_SALCHIN_MASK           0x70000000
#define ADCn_SAL_SALCHIN_SHIFT          28



/****************** Masks for ADCn_SCN_t **********************/
/*
   ADC0_SCN              "ADC0 Auto Scan Control Register"
   ADC1_SCN              "ADC1 Auto Scan Control Register"
*/
/**********************************************************/

#define ADCn_SCN_MASK                   0xc000ffff
#define ADCn_SCN_SRQ0_MASK              0x00000001
#define ADCn_SCN_SRQ0_SHIFT             0
#define ADCn_SCN_SRQ1_MASK              0x00000002
#define ADCn_SCN_SRQ1_SHIFT             1
#define ADCn_SCN_SRQ2_MASK              0x00000004
#define ADCn_SCN_SRQ2_SHIFT             2
#define ADCn_SCN_SRQ3_MASK              0x00000008
#define ADCn_SCN_SRQ3_SHIFT             3
#define ADCn_SCN_SRQ4_MASK              0x00000010
#define ADCn_SCN_SRQ4_SHIFT             4
#define ADCn_SCN_SRQ5_MASK              0x00000020
#define ADCn_SCN_SRQ5_SHIFT             5
#define ADCn_SCN_SRQ6_MASK              0x00000040
#define ADCn_SCN_SRQ6_SHIFT             6
#define ADCn_SCN_SRQ7_MASK              0x00000080
#define ADCn_SCN_SRQ7_SHIFT             7
#define ADCn_SCN_SRQ8_MASK              0x00000100
#define ADCn_SCN_SRQ8_SHIFT             8
#define ADCn_SCN_SRQ9_MASK              0x00000200
#define ADCn_SCN_SRQ9_SHIFT             9
#define ADCn_SCN_SRQ10_MASK             0x00000400
#define ADCn_SCN_SRQ10_SHIFT            10
#define ADCn_SCN_SRQ11_MASK             0x00000800
#define ADCn_SCN_SRQ11_SHIFT            11
#define ADCn_SCN_SRQ12_MASK             0x00001000
#define ADCn_SCN_SRQ12_SHIFT            12
#define ADCn_SCN_SRQ13_MASK             0x00002000
#define ADCn_SCN_SRQ13_SHIFT            13
#define ADCn_SCN_SRQ14_MASK             0x00004000
#define ADCn_SCN_SRQ14_SHIFT            14
#define ADCn_SCN_SRQ15_MASK             0x00008000
#define ADCn_SCN_SRQ15_SHIFT            15
#define ADCn_SCN_GRPC_MASK              0xc0000000
#define ADCn_SCN_GRPC_SHIFT             30



/****************** Masks for ADCn_SCON_t **********************/
/*
   ADC0_SCON             "ADC0 Source Control Register"
   ADC1_SCON             "ADC1 Source Control Register"
*/
/**********************************************************/

#define ADCn_SCON_MASK                  0x0000001f
#define ADCn_SCON_QENC_MASK             0x00000001
#define ADCn_SCON_QENC_SHIFT            0
#define ADCn_SCON_QENS_MASK             0x00000002
#define ADCn_SCON_QENS_SHIFT            1
#define ADCn_SCON_TRC_MASK              0x00000004
#define ADCn_SCON_TRC_SHIFT             2
#define ADCn_SCON_TRS_MASK              0x00000008
#define ADCn_SCON_TRS_SHIFT             3
#define ADCn_SCON_QRS_MASK              0x00000010
#define ADCn_SCON_QRS_SHIFT             4



/****************** Masks for ADCn_SRCm_t **********************/
/*
   ADC0_SRC0             "ADC0 Service Request Control Register 0"
   ADC0_SRC1             "ADC0 Service Request Control Register 1"
   ADC0_SRC2             "ADC0 Service Request Control Register 2"
   ADC0_SRC3             "ADC0 Service Request Control Register 3"
   ADC1_SRC0             "ADC1 Service Request Control Register 0"
   ADC1_SRC1             "ADC1 Service Request Control Register 1"
   ADC1_SRC2             "ADC1 Service Request Control Register 2"
   ADC1_SRC3             "ADC1 Service Request Control Register 3"
*/
/**********************************************************/

#define ADCn_SRCm_MASK                  0x0000f4ff
#define ADCn_SRCm_SRPN_MASK             0x000000ff
#define ADCn_SRCm_SRPN_SHIFT            0
#define ADCn_SRCm_TOS_MASK              0x00000400
#define ADCn_SRCm_TOS_SHIFT             10
#define ADCn_SRCm_SRE_MASK              0x00001000
#define ADCn_SRCm_SRE_SHIFT             12
#define ADCn_SRCm_SRR_MASK              0x00002000
#define ADCn_SRCm_SRR_SHIFT             13
#define ADCn_SRCm_CLRR_MASK             0x00004000
#define ADCn_SRCm_CLRR_SHIFT            14
#define ADCn_SRCm_SETR_MASK             0x00008000
#define ADCn_SRCm_SETR_SHIFT            15



/****************** Masks for ADCn_SRNP_t **********************/
/*
   ADC0_SRNP             "ADC0 Service Request Node Pointer Register"
   ADC1_SRNP             "ADC1 Service Request Node Pointer Register"
*/
/**********************************************************/

#define ADCn_SRNP_MASK                  0x0000ffff
#define ADCn_SRNP_ENPT_MASK             0x00000001
#define ADCn_SRNP_ENPT_SHIFT            0
#define ADCn_SRNP_PT_MASK               0x0000000e
#define ADCn_SRNP_PT_SHIFT              1
#define ADCn_SRNP_ENPSY_MASK            0x00000010
#define ADCn_SRNP_ENPSY_SHIFT           4
#define ADCn_SRNP_PSY_MASK              0x000000e0
#define ADCn_SRNP_PSY_SHIFT             5
#define ADCn_SRNP_ENPQR_MASK            0x00000100
#define ADCn_SRNP_ENPQR_SHIFT           8
#define ADCn_SRNP_PQR_MASK              0x00000e00
#define ADCn_SRNP_PQR_SHIFT             9
#define ADCn_SRNP_ENPAS_MASK            0x00001000
#define ADCn_SRNP_ENPAS_SHIFT           12
#define ADCn_SRNP_PAS_MASK              0x0000e000
#define ADCn_SRNP_PAS_SHIFT             13



/****************** Masks for ADCn_STAT_t **********************/
/*
   ADC0_STAT             "ADC0 Converter Status Register"
   ADC1_STAT             "ADC1 Converter Status Register"
*/
/**********************************************************/

#define ADCn_STAT_MASK                  0x1f1fff0f
#define ADCn_STAT_CHNRCC_MASK           0x0000000f
#define ADCn_STAT_CHNRCC_SHIFT          0
#define ADCn_STAT_CHTSCC_MASK           0x00000700
#define ADCn_STAT_CHTSCC_SHIFT          8
#define ADCn_STAT_DATAVAL_MASK          0x00000800
#define ADCn_STAT_DATAVAL_SHIFT         11
#define ADCn_STAT_AL_MASK               0x00001000
#define ADCn_STAT_AL_SHIFT              12
#define ADCn_STAT_CAL_MASK              0x00002000
#define ADCn_STAT_CAL_SHIFT             13
#define ADCn_STAT_SMPL_MASK             0x00004000
#define ADCn_STAT_SMPL_SHIFT            14
#define ADCn_STAT_BUSY_MASK             0x00008000
#define ADCn_STAT_BUSY_SHIFT            15
#define ADCn_STAT_QLP_MASK              0x000f0000
#define ADCn_STAT_QLP_SHIFT             16
#define ADCn_STAT_QF_MASK               0x00100000
#define ADCn_STAT_QF_SHIFT              20
#define ADCn_STAT_REQSY_MASK            0x01000000
#define ADCn_STAT_REQSY_SHIFT           24
#define ADCn_STAT_PARSY_MASK            0x02000000
#define ADCn_STAT_PARSY_SHIFT           25
#define ADCn_STAT_IENREQ_MASK           0x04000000
#define ADCn_STAT_IENREQ_SHIFT          26
#define ADCn_STAT_IENPAR_MASK           0x08000000
#define ADCn_STAT_IENPAR_SHIFT          27
#define ADCn_STAT_SYMS_MASK             0x10000000
#define ADCn_STAT_SYMS_SHIFT            28



/****************** Masks for ADCn_SW0CRP_t **********************/
/*
   ADC0_SW0CRP           "ADC0 Software SW0 Conversion Request Pending Register"
   ADC1_SW0CRP           "ADC1 Software SW0 Conversion Request Pending Register"
*/
/**********************************************************/

#define ADCn_SW0CRP_MASK                0x0000ffff
#define ADCn_SW0CRP_SW0CRP0_MASK        0x00000001
#define ADCn_SW0CRP_SW0CRP0_SHIFT       0
#define ADCn_SW0CRP_SW0CRP1_MASK        0x00000002
#define ADCn_SW0CRP_SW0CRP1_SHIFT       1
#define ADCn_SW0CRP_SW0CRP2_MASK        0x00000004
#define ADCn_SW0CRP_SW0CRP2_SHIFT       2
#define ADCn_SW0CRP_SW0CRP3_MASK        0x00000008
#define ADCn_SW0CRP_SW0CRP3_SHIFT       3
#define ADCn_SW0CRP_SW0CRP4_MASK        0x00000010
#define ADCn_SW0CRP_SW0CRP4_SHIFT       4
#define ADCn_SW0CRP_SW0CRP5_MASK        0x00000020
#define ADCn_SW0CRP_SW0CRP5_SHIFT       5
#define ADCn_SW0CRP_SW0CRP6_MASK        0x00000040
#define ADCn_SW0CRP_SW0CRP6_SHIFT       6
#define ADCn_SW0CRP_SW0CRP7_MASK        0x00000080
#define ADCn_SW0CRP_SW0CRP7_SHIFT       7
#define ADCn_SW0CRP_SW0CRP8_MASK        0x00000100
#define ADCn_SW0CRP_SW0CRP8_SHIFT       8
#define ADCn_SW0CRP_SW0CRP9_MASK        0x00000200
#define ADCn_SW0CRP_SW0CRP9_SHIFT       9
#define ADCn_SW0CRP_SW0CRP10_MASK       0x00000400
#define ADCn_SW0CRP_SW0CRP10_SHIFT      10
#define ADCn_SW0CRP_SW0CRP11_MASK       0x00000800
#define ADCn_SW0CRP_SW0CRP11_SHIFT      11
#define ADCn_SW0CRP_SW0CRP12_MASK       0x00001000
#define ADCn_SW0CRP_SW0CRP12_SHIFT      12
#define ADCn_SW0CRP_SW0CRP13_MASK       0x00002000
#define ADCn_SW0CRP_SW0CRP13_SHIFT      13
#define ADCn_SW0CRP_SW0CRP14_MASK       0x00004000
#define ADCn_SW0CRP_SW0CRP14_SHIFT      14
#define ADCn_SW0CRP_SW0CRP15_MASK       0x00008000
#define ADCn_SW0CRP_SW0CRP15_SHIFT      15



/****************** Masks for ADCn_SYSTAT_t **********************/
/*
   ADC0_SYSTAT           "ADC0 Synchronization Status Register"
   ADC1_SYSTAT           "ADC1 Synchronization Status Register"
*/
/**********************************************************/

#define ADCn_SYSTAT_MASK                0x800087cf
#define ADCn_SYSTAT_CHNRSY_MASK         0x0000000f
#define ADCn_SYSTAT_CHNRSY_SHIFT        0
#define ADCn_SYSTAT_RES_MASK            0x000000c0
#define ADCn_SYSTAT_RES_SHIFT           6
#define ADCn_SYSTAT_EMUX_MASK           0x00000300
#define ADCn_SYSTAT_EMUX_SHIFT          8
#define ADCn_SYSTAT_GRPS_MASK           0x00000400
#define ADCn_SYSTAT_GRPS_SHIFT          10
#define ADCn_SYSTAT_CSREN_MASK          0x00008000
#define ADCn_SYSTAT_CSREN_SHIFT         15
#define ADCn_SYSTAT_SYREQ_MASK          0x80000000
#define ADCn_SYSTAT_SYREQ_SHIFT         31



/****************** Masks for ADCn_TCON_t **********************/
/*
   ADC0_TCON             "ADC0 Timer Control Register"
   ADC1_TCON             "ADC1 Timer Control Register"
*/
/**********************************************************/

#define ADCn_TCON_MASK                  0xffff3fff
#define ADCn_TCON_ALB_MASK              0x00003fff
#define ADCn_TCON_ALB_SHIFT             0
#define ADCn_TCON_TRLD_MASK             0x3fff0000
#define ADCn_TCON_TRLD_SHIFT            16
#define ADCn_TCON_TSEN_MASK             0x40000000
#define ADCn_TCON_TSEN_SHIFT            30
#define ADCn_TCON_TR_MASK               0x80000000
#define ADCn_TCON_TR_SHIFT              31



/****************** Masks for ADCn_TCRP_t **********************/
/*
   ADC0_TCRP             "ADC0 Timer Conversion Request Pending Register"
   ADC1_TCRP             "ADC1 Timer Conversion Request Pending Register"
*/
/**********************************************************/

#define ADCn_TCRP_MASK                  0x0000ffff
#define ADCn_TCRP_TRP0_MASK             0x00000001
#define ADCn_TCRP_TRP0_SHIFT            0
#define ADCn_TCRP_TRP1_MASK             0x00000002
#define ADCn_TCRP_TRP1_SHIFT            1
#define ADCn_TCRP_TRP2_MASK             0x00000004
#define ADCn_TCRP_TRP2_SHIFT            2
#define ADCn_TCRP_TRP3_MASK             0x00000008
#define ADCn_TCRP_TRP3_SHIFT            3
#define ADCn_TCRP_TRP4_MASK             0x00000010
#define ADCn_TCRP_TRP4_SHIFT            4
#define ADCn_TCRP_TRP5_MASK             0x00000020
#define ADCn_TCRP_TRP5_SHIFT            5
#define ADCn_TCRP_TRP6_MASK             0x00000040
#define ADCn_TCRP_TRP6_SHIFT            6
#define ADCn_TCRP_TRP7_MASK             0x00000080
#define ADCn_TCRP_TRP7_SHIFT            7
#define ADCn_TCRP_TRP8_MASK             0x00000100
#define ADCn_TCRP_TRP8_SHIFT            8
#define ADCn_TCRP_TRP9_MASK             0x00000200
#define ADCn_TCRP_TRP9_SHIFT            9
#define ADCn_TCRP_TRP10_MASK            0x00000400
#define ADCn_TCRP_TRP10_SHIFT           10
#define ADCn_TCRP_TRP11_MASK            0x00000800
#define ADCn_TCRP_TRP11_SHIFT           11
#define ADCn_TCRP_TRP12_MASK            0x00001000
#define ADCn_TCRP_TRP12_SHIFT           12
#define ADCn_TCRP_TRP13_MASK            0x00002000
#define ADCn_TCRP_TRP13_SHIFT           13
#define ADCn_TCRP_TRP14_MASK            0x00004000
#define ADCn_TCRP_TRP14_SHIFT           14
#define ADCn_TCRP_TRP15_MASK            0x00008000
#define ADCn_TCRP_TRP15_SHIFT           15



/****************** Masks for ADCn_TSTAT_t **********************/
/*
   ADC0_TSTAT            "ADC0 Timer Status Register"
   ADC1_TSTAT            "ADC1 Timer Status Register"
*/
/**********************************************************/

#define ADCn_TSTAT_MASK                 0x00003fff
#define ADCn_TSTAT_TIMER_MASK           0x00003fff
#define ADCn_TSTAT_TIMER_SHIFT          0



/****************** Masks for ADCn_TTC_t **********************/
/*
   ADC0_TTC              "ADC0 Timer Trigger Control Register"
   ADC1_TTC              "ADC1 Timer Trigger Control Register"
*/
/**********************************************************/

#define ADCn_TTC_MASK                   0x0000ffff
#define ADCn_TTC_TTCCH0_MASK            0x00000001
#define ADCn_TTC_TTCCH0_SHIFT           0
#define ADCn_TTC_TTCCH1_MASK            0x00000002
#define ADCn_TTC_TTCCH1_SHIFT           1
#define ADCn_TTC_TTCCH2_MASK            0x00000004
#define ADCn_TTC_TTCCH2_SHIFT           2
#define ADCn_TTC_TTCCH3_MASK            0x00000008
#define ADCn_TTC_TTCCH3_SHIFT           3
#define ADCn_TTC_TTCCH4_MASK            0x00000010
#define ADCn_TTC_TTCCH4_SHIFT           4
#define ADCn_TTC_TTCCH5_MASK            0x00000020
#define ADCn_TTC_TTCCH5_SHIFT           5
#define ADCn_TTC_TTCCH6_MASK            0x00000040
#define ADCn_TTC_TTCCH6_SHIFT           6
#define ADCn_TTC_TTCCH7_MASK            0x00000080
#define ADCn_TTC_TTCCH7_SHIFT           7
#define ADCn_TTC_TTCCH8_MASK            0x00000100
#define ADCn_TTC_TTCCH8_SHIFT           8
#define ADCn_TTC_TTCCH9_MASK            0x00000200
#define ADCn_TTC_TTCCH9_SHIFT           9
#define ADCn_TTC_TTCCH10_MASK           0x00000400
#define ADCn_TTC_TTCCH10_SHIFT          10
#define ADCn_TTC_TTCCH11_MASK           0x00000800
#define ADCn_TTC_TTCCH11_SHIFT          11
#define ADCn_TTC_TTCCH12_MASK           0x00001000
#define ADCn_TTC_TTCCH12_SHIFT          12
#define ADCn_TTC_TTCCH13_MASK           0x00002000
#define ADCn_TTC_TTCCH13_SHIFT          13
#define ADCn_TTC_TTCCH14_MASK           0x00004000
#define ADCn_TTC_TTCCH14_SHIFT          14
#define ADCn_TTC_TTCCH15_MASK           0x00008000
#define ADCn_TTC_TTCCH15_SHIFT          15




#endif /* _HAVE_TRICORE_ADC0_ADC1_SHAREMASKS_H_ */

