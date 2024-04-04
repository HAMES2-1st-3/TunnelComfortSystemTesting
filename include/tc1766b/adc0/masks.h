/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_ADC0_MASKS_H_
#define _HAVE_TRICORE_ADC0_MASKS_H_


/****************** Masks for ADC0_AP_t **********************/
/*
   ADC0_AP               "ADC Arbitration Participation Register"
*/
/**********************************************************/

#define ADC0_AP_MASK                    0x000000db
#define ADC0_AP_ASP_MASK                0x00000001
#define ADC0_AP_ASP_SHIFT               0
#define ADC0_AP_QP_MASK                 0x00000002
#define ADC0_AP_QP_SHIFT                1
#define ADC0_AP_SW0P_MASK               0x00000008
#define ADC0_AP_SW0P_SHIFT              3
#define ADC0_AP_EXP_MASK                0x00000010
#define ADC0_AP_EXP_SHIFT               4
#define ADC0_AP_TP_MASK                 0x00000040
#define ADC0_AP_TP_SHIFT                6
#define ADC0_AP_CHP_MASK                0x00000080
#define ADC0_AP_CHP_SHIFT               7



/****************** Masks for ADC0_ASCRP_t **********************/
/*
   ADC0_ASCRP            "ADC Auto Scan Conversion Request Pending Register"
*/
/**********************************************************/

#define ADC0_ASCRP_MASK                 0x8000ffff
#define ADC0_ASCRP_ASCRP0_MASK          0x00000001
#define ADC0_ASCRP_ASCRP0_SHIFT         0
#define ADC0_ASCRP_ASCRP1_MASK          0x00000002
#define ADC0_ASCRP_ASCRP1_SHIFT         1
#define ADC0_ASCRP_ASCRP2_MASK          0x00000004
#define ADC0_ASCRP_ASCRP2_SHIFT         2
#define ADC0_ASCRP_ASCRP3_MASK          0x00000008
#define ADC0_ASCRP_ASCRP3_SHIFT         3
#define ADC0_ASCRP_ASCRP4_MASK          0x00000010
#define ADC0_ASCRP_ASCRP4_SHIFT         4
#define ADC0_ASCRP_ASCRP5_MASK          0x00000020
#define ADC0_ASCRP_ASCRP5_SHIFT         5
#define ADC0_ASCRP_ASCRP6_MASK          0x00000040
#define ADC0_ASCRP_ASCRP6_SHIFT         6
#define ADC0_ASCRP_ASCRP7_MASK          0x00000080
#define ADC0_ASCRP_ASCRP7_SHIFT         7
#define ADC0_ASCRP_ASCRP8_MASK          0x00000100
#define ADC0_ASCRP_ASCRP8_SHIFT         8
#define ADC0_ASCRP_ASCRP9_MASK          0x00000200
#define ADC0_ASCRP_ASCRP9_SHIFT         9
#define ADC0_ASCRP_ASCRP10_MASK         0x00000400
#define ADC0_ASCRP_ASCRP10_SHIFT        10
#define ADC0_ASCRP_ASCRP11_MASK         0x00000800
#define ADC0_ASCRP_ASCRP11_SHIFT        11
#define ADC0_ASCRP_ASCRP12_MASK         0x00001000
#define ADC0_ASCRP_ASCRP12_SHIFT        12
#define ADC0_ASCRP_ASCRP13_MASK         0x00002000
#define ADC0_ASCRP_ASCRP13_SHIFT        13
#define ADC0_ASCRP_ASCRP14_MASK         0x00004000
#define ADC0_ASCRP_ASCRP14_SHIFT        14
#define ADC0_ASCRP_ASCRP15_MASK         0x00008000
#define ADC0_ASCRP_ASCRP15_SHIFT        15
#define ADC0_ASCRP_GRPS_MASK            0x80000000
#define ADC0_ASCRP_GRPS_SHIFT           31



/****************** Masks for ADC0_BARRACUDAIN_t **********************/
/*
   ADC0_BARRACUDAIN      "ADC Barracuda In Test Register"
*/
/**********************************************************/

#define ADC0_BARRACUDAIN_MASK           0x00000000



/****************** Masks for ADC0_BARRACUDAOUT_t **********************/
/*
   ADC0_BARRACUDAOUT     "ADC Barracuda Out Test Register"
*/
/**********************************************************/

#define ADC0_BARRACUDAOUT_MASK          0x00000000



/****************** Masks for ADC0_CHIN_t **********************/
/*
   ADC0_CHIN             "ADC Channel Injection Control Register"
*/
/**********************************************************/

#define ADC0_CHIN_MASK                  0x800087cf
#define ADC0_CHIN_CHNRIN_MASK           0x0000000f
#define ADC0_CHIN_CHNRIN_SHIFT          0
#define ADC0_CHIN_RES_MASK              0x000000c0
#define ADC0_CHIN_RES_SHIFT             6
#define ADC0_CHIN_EMUX_MASK             0x00000300
#define ADC0_CHIN_EMUX_SHIFT            8
#define ADC0_CHIN_GRPS_MASK             0x00000400
#define ADC0_CHIN_GRPS_SHIFT            10
#define ADC0_CHIN_CIREN_MASK            0x00008000
#define ADC0_CHIN_CIREN_SHIFT           15
#define ADC0_CHIN_CINREQ_MASK           0x80000000
#define ADC0_CHIN_CINREQ_SHIFT          31



/****************** Masks for ADC0_CLC_t **********************/
/*
   ADC0_CLC              "ADC Clock Control Register"
*/
/**********************************************************/

#define ADC0_CLC_MASK                   0x0000003f
#define ADC0_CLC_DISR_MASK              0x00000001
#define ADC0_CLC_DISR_SHIFT             0
#define ADC0_CLC_DISS_MASK              0x00000002
#define ADC0_CLC_DISS_SHIFT             1
#define ADC0_CLC_SPEN_MASK              0x00000004
#define ADC0_CLC_SPEN_SHIFT             2
#define ADC0_CLC_EDIS_MASK              0x00000008
#define ADC0_CLC_EDIS_SHIFT             3
#define ADC0_CLC_SBWE_MASK              0x00000010
#define ADC0_CLC_SBWE_SHIFT             4
#define ADC0_CLC_FSOE_MASK              0x00000020
#define ADC0_CLC_FSOE_SHIFT             5



/****************** Masks for ADC0_CON_t **********************/
/*
   ADC0_CON              "ADC Converter Control Register"
*/
/**********************************************************/

#define ADC0_CON_MASK                   0x980f83ff
#define ADC0_CON_CTC_MASK               0x000000ff
#define ADC0_CON_CTC_SHIFT              0
#define ADC0_CON_SCNM_MASK              0x00000300
#define ADC0_CON_SCNM_SHIFT             8
#define ADC0_CON_QEN_MASK               0x00008000
#define ADC0_CON_QEN_SHIFT              15
#define ADC0_CON_QWLP_MASK              0x000f0000
#define ADC0_CON_QWLP_SHIFT             16
#define ADC0_CON_PCDIS_MASK             0x08000000
#define ADC0_CON_PCDIS_SHIFT            27
#define ADC0_CON_CPR_MASK               0x10000000
#define ADC0_CON_CPR_SHIFT              28
#define ADC0_CON_SRTEST_MASK            0x80000000
#define ADC0_CON_SRTEST_SHIFT           31



/****************** Masks for ADC0_EXCRP_t **********************/
/*
   ADC0_EXCRP            "ADC External Event Conversion Request Pending Register"
*/
/**********************************************************/

#define ADC0_EXCRP_MASK                 0x0000ffff
#define ADC0_EXCRP_EXCRP0_MASK          0x00000001
#define ADC0_EXCRP_EXCRP0_SHIFT         0
#define ADC0_EXCRP_EXCRP1_MASK          0x00000002
#define ADC0_EXCRP_EXCRP1_SHIFT         1
#define ADC0_EXCRP_EXCRP2_MASK          0x00000004
#define ADC0_EXCRP_EXCRP2_SHIFT         2
#define ADC0_EXCRP_EXCRP3_MASK          0x00000008
#define ADC0_EXCRP_EXCRP3_SHIFT         3
#define ADC0_EXCRP_EXCRP4_MASK          0x00000010
#define ADC0_EXCRP_EXCRP4_SHIFT         4
#define ADC0_EXCRP_EXCRP5_MASK          0x00000020
#define ADC0_EXCRP_EXCRP5_SHIFT         5
#define ADC0_EXCRP_EXCRP6_MASK          0x00000040
#define ADC0_EXCRP_EXCRP6_SHIFT         6
#define ADC0_EXCRP_EXCRP7_MASK          0x00000080
#define ADC0_EXCRP_EXCRP7_SHIFT         7
#define ADC0_EXCRP_EXCRP8_MASK          0x00000100
#define ADC0_EXCRP_EXCRP8_SHIFT         8
#define ADC0_EXCRP_EXCRP9_MASK          0x00000200
#define ADC0_EXCRP_EXCRP9_SHIFT         9
#define ADC0_EXCRP_EXCRP10_MASK         0x00000400
#define ADC0_EXCRP_EXCRP10_SHIFT        10
#define ADC0_EXCRP_EXCRP11_MASK         0x00000800
#define ADC0_EXCRP_EXCRP11_SHIFT        11
#define ADC0_EXCRP_EXCRP12_MASK         0x00001000
#define ADC0_EXCRP_EXCRP12_SHIFT        12
#define ADC0_EXCRP_EXCRP13_MASK         0x00002000
#define ADC0_EXCRP_EXCRP13_SHIFT        13
#define ADC0_EXCRP_EXCRP14_MASK         0x00004000
#define ADC0_EXCRP_EXCRP14_SHIFT        14
#define ADC0_EXCRP_EXCRP15_MASK         0x00008000
#define ADC0_EXCRP_EXCRP15_SHIFT        15



/****************** Masks for ADC0_EXTC_t **********************/
/*
   ADC0_EXTC             "ADC External Trigger Control Register"
*/
/**********************************************************/

#define ADC0_EXTC_MASK                  0x0000ffff
#define ADC0_EXTC_ETCCH0_MASK           0x00000001
#define ADC0_EXTC_ETCCH0_SHIFT          0
#define ADC0_EXTC_ETCCH1_MASK           0x00000002
#define ADC0_EXTC_ETCCH1_SHIFT          1
#define ADC0_EXTC_ETCCH2_MASK           0x00000004
#define ADC0_EXTC_ETCCH2_SHIFT          2
#define ADC0_EXTC_ETCCH3_MASK           0x00000008
#define ADC0_EXTC_ETCCH3_SHIFT          3
#define ADC0_EXTC_ETCCH4_MASK           0x00000010
#define ADC0_EXTC_ETCCH4_SHIFT          4
#define ADC0_EXTC_ETCCH5_MASK           0x00000020
#define ADC0_EXTC_ETCCH5_SHIFT          5
#define ADC0_EXTC_ETCCH6_MASK           0x00000040
#define ADC0_EXTC_ETCCH6_SHIFT          6
#define ADC0_EXTC_ETCCH7_MASK           0x00000080
#define ADC0_EXTC_ETCCH7_SHIFT          7
#define ADC0_EXTC_ETCCH8_MASK           0x00000100
#define ADC0_EXTC_ETCCH8_SHIFT          8
#define ADC0_EXTC_ETCCH9_MASK           0x00000200
#define ADC0_EXTC_ETCCH9_SHIFT          9
#define ADC0_EXTC_ETCCH10_MASK          0x00000400
#define ADC0_EXTC_ETCCH10_SHIFT         10
#define ADC0_EXTC_ETCCH11_MASK          0x00000800
#define ADC0_EXTC_ETCCH11_SHIFT         11
#define ADC0_EXTC_ETCCH12_MASK          0x00001000
#define ADC0_EXTC_ETCCH12_SHIFT         12
#define ADC0_EXTC_ETCCH13_MASK          0x00002000
#define ADC0_EXTC_ETCCH13_SHIFT         13
#define ADC0_EXTC_ETCCH14_MASK          0x00004000
#define ADC0_EXTC_ETCCH14_SHIFT         14
#define ADC0_EXTC_ETCCH15_MASK          0x00008000
#define ADC0_EXTC_ETCCH15_SHIFT         15



/****************** Masks for ADC0_FDR_t **********************/
/*
   ADC0_FDR              "ADC Fractional Divider Register"
*/
/**********************************************************/

#define ADC0_FDR_MASK                   0xf3fffbff
#define ADC0_FDR_STEP_MASK              0x000003ff
#define ADC0_FDR_STEP_SHIFT             0
#define ADC0_FDR_SM_MASK                0x00000800
#define ADC0_FDR_SM_SHIFT               11
#define ADC0_FDR_SC_MASK                0x00003000
#define ADC0_FDR_SC_SHIFT               12
#define ADC0_FDR_DM_MASK                0x0000c000
#define ADC0_FDR_DM_SHIFT               14
#define ADC0_FDR_RESULT_MASK            0x03ff0000
#define ADC0_FDR_RESULT_SHIFT           16
#define ADC0_FDR_SUSACK_MASK            0x10000000
#define ADC0_FDR_SUSACK_SHIFT           28
#define ADC0_FDR_SUSREQ_MASK            0x20000000
#define ADC0_FDR_SUSREQ_SHIFT           29
#define ADC0_FDR_ENHW_MASK              0x40000000
#define ADC0_FDR_ENHW_SHIFT             30
#define ADC0_FDR_DISCLK_MASK            0x80000000
#define ADC0_FDR_DISCLK_SHIFT           31



/****************** Masks for ADC0_ID_t **********************/
/*
   ADC0_ID               "ADC Module Identification Register"
*/
/**********************************************************/

#define ADC0_ID_MASK                    0xffffffff
#define ADC0_ID_Mod_Rev_MASK            0x000000ff
#define ADC0_ID_Mod_Rev_SHIFT           0
#define ADC0_ID_Mod_Type_MASK           0x0000ff00
#define ADC0_ID_Mod_Type_SHIFT          8
#define ADC0_ID_Mod_Number_MASK         0xffff0000
#define ADC0_ID_Mod_Number_SHIFT        16



/****************** Masks for ADC0_MSS0_t **********************/
/*
   ADC0_MSS0             "ADC Module Service Request Status Register 0"
*/
/**********************************************************/

#define ADC0_MSS0_MASK                  0x0000ffff
#define ADC0_MSS0_MSRCH0_MASK           0x00000001
#define ADC0_MSS0_MSRCH0_SHIFT          0
#define ADC0_MSS0_MSRCH1_MASK           0x00000002
#define ADC0_MSS0_MSRCH1_SHIFT          1
#define ADC0_MSS0_MSRCH2_MASK           0x00000004
#define ADC0_MSS0_MSRCH2_SHIFT          2
#define ADC0_MSS0_MSRCH3_MASK           0x00000008
#define ADC0_MSS0_MSRCH3_SHIFT          3
#define ADC0_MSS0_MSRCH4_MASK           0x00000010
#define ADC0_MSS0_MSRCH4_SHIFT          4
#define ADC0_MSS0_MSRCH5_MASK           0x00000020
#define ADC0_MSS0_MSRCH5_SHIFT          5
#define ADC0_MSS0_MSRCH6_MASK           0x00000040
#define ADC0_MSS0_MSRCH6_SHIFT          6
#define ADC0_MSS0_MSRCH7_MASK           0x00000080
#define ADC0_MSS0_MSRCH7_SHIFT          7
#define ADC0_MSS0_MSRCH8_MASK           0x00000100
#define ADC0_MSS0_MSRCH8_SHIFT          8
#define ADC0_MSS0_MSRCH9_MASK           0x00000200
#define ADC0_MSS0_MSRCH9_SHIFT          9
#define ADC0_MSS0_MSRCH10_MASK          0x00000400
#define ADC0_MSS0_MSRCH10_SHIFT         10
#define ADC0_MSS0_MSRCH11_MASK          0x00000800
#define ADC0_MSS0_MSRCH11_SHIFT         11
#define ADC0_MSS0_MSRCH12_MASK          0x00001000
#define ADC0_MSS0_MSRCH12_SHIFT         12
#define ADC0_MSS0_MSRCH13_MASK          0x00002000
#define ADC0_MSS0_MSRCH13_SHIFT         13
#define ADC0_MSS0_MSRCH14_MASK          0x00004000
#define ADC0_MSS0_MSRCH14_SHIFT         14
#define ADC0_MSS0_MSRCH15_MASK          0x00008000
#define ADC0_MSS0_MSRCH15_SHIFT         15



/****************** Masks for ADC0_MSS1_t **********************/
/*
   ADC0_MSS1             "ADC Module Service Request Status Register 1"
*/
/**********************************************************/

#define ADC0_MSS1_MASK                  0x0000000d
#define ADC0_MSS1_MSRT_MASK             0x00000001
#define ADC0_MSS1_MSRT_SHIFT            0
#define ADC0_MSS1_MSRQR_MASK            0x00000004
#define ADC0_MSS1_MSRQR_SHIFT           2
#define ADC0_MSS1_MSRAS_MASK            0x00000008
#define ADC0_MSS1_MSRAS_SHIFT           3



/****************** Masks for ADC0_QR_t **********************/
/*
   ADC0_QR               "ADC Queue Register"
*/
/**********************************************************/

#define ADC0_QR_MASK                    0x000087cf
#define ADC0_QR_CHNR_MASK               0x0000000f
#define ADC0_QR_CHNR_SHIFT              0
#define ADC0_QR_RES_MASK                0x000000c0
#define ADC0_QR_RES_SHIFT               6
#define ADC0_QR_EMUX_MASK               0x00000300
#define ADC0_QR_EMUX_SHIFT              8
#define ADC0_QR_GRPS_MASK               0x00000400
#define ADC0_QR_GRPS_SHIFT              10
#define ADC0_QR_V_MASK                  0x00008000
#define ADC0_QR_V_SHIFT                 15



/****************** Masks for ADC0_QUEUE0_t **********************/
/*
   ADC0_QUEUE0           "ADC Queue Status Register"
*/
/**********************************************************/

#define ADC0_QUEUE0_MASK                0x000087cf
#define ADC0_QUEUE0_CHNR_MASK           0x0000000f
#define ADC0_QUEUE0_CHNR_SHIFT          0
#define ADC0_QUEUE0_RES_MASK            0x000000c0
#define ADC0_QUEUE0_RES_SHIFT           6
#define ADC0_QUEUE0_EMUX_MASK           0x00000300
#define ADC0_QUEUE0_EMUX_SHIFT          8
#define ADC0_QUEUE0_GRPS_MASK           0x00000400
#define ADC0_QUEUE0_GRPS_SHIFT          10
#define ADC0_QUEUE0_V_MASK              0x00008000
#define ADC0_QUEUE0_V_SHIFT             15



/****************** Masks for ADC0_REQ0_t **********************/
/*
   ADC0_REQ0             "ADC Conversion Request Register SW0"
*/
/**********************************************************/

#define ADC0_REQ0_MASK                  0x0000ffff
#define ADC0_REQ0_REQ00_MASK            0x00000001
#define ADC0_REQ0_REQ00_SHIFT           0
#define ADC0_REQ0_REQ01_MASK            0x00000002
#define ADC0_REQ0_REQ01_SHIFT           1
#define ADC0_REQ0_REQ02_MASK            0x00000004
#define ADC0_REQ0_REQ02_SHIFT           2
#define ADC0_REQ0_REQ03_MASK            0x00000008
#define ADC0_REQ0_REQ03_SHIFT           3
#define ADC0_REQ0_REQ04_MASK            0x00000010
#define ADC0_REQ0_REQ04_SHIFT           4
#define ADC0_REQ0_REQ05_MASK            0x00000020
#define ADC0_REQ0_REQ05_SHIFT           5
#define ADC0_REQ0_REQ06_MASK            0x00000040
#define ADC0_REQ0_REQ06_SHIFT           6
#define ADC0_REQ0_REQ07_MASK            0x00000080
#define ADC0_REQ0_REQ07_SHIFT           7
#define ADC0_REQ0_REQ08_MASK            0x00000100
#define ADC0_REQ0_REQ08_SHIFT           8
#define ADC0_REQ0_REQ09_MASK            0x00000200
#define ADC0_REQ0_REQ09_SHIFT           9
#define ADC0_REQ0_REQ010_MASK           0x00000400
#define ADC0_REQ0_REQ010_SHIFT          10
#define ADC0_REQ0_REQ011_MASK           0x00000800
#define ADC0_REQ0_REQ011_SHIFT          11
#define ADC0_REQ0_REQ012_MASK           0x00001000
#define ADC0_REQ0_REQ012_SHIFT          12
#define ADC0_REQ0_REQ013_MASK           0x00002000
#define ADC0_REQ0_REQ013_SHIFT          13
#define ADC0_REQ0_REQ014_MASK           0x00004000
#define ADC0_REQ0_REQ014_SHIFT          14
#define ADC0_REQ0_REQ015_MASK           0x00008000
#define ADC0_REQ0_REQ015_SHIFT          15



/****************** Masks for ADC0_SAL_t **********************/
/*
   ADC0_SAL              "ADC Source Arbitration Level Register"
*/
/**********************************************************/

#define ADC0_SAL_MASK                   0x77077077
#define ADC0_SAL_SALAS_MASK             0x00000007
#define ADC0_SAL_SALAS_SHIFT            0
#define ADC0_SAL_SALQ_MASK              0x00000070
#define ADC0_SAL_SALQ_SHIFT             4
#define ADC0_SAL_SALSW0_MASK            0x00007000
#define ADC0_SAL_SALSW0_SHIFT           12
#define ADC0_SAL_SALEXT_MASK            0x00070000
#define ADC0_SAL_SALEXT_SHIFT           16
#define ADC0_SAL_SALT_MASK              0x07000000
#define ADC0_SAL_SALT_SHIFT             24
#define ADC0_SAL_SALCHIN_MASK           0x70000000
#define ADC0_SAL_SALCHIN_SHIFT          28



/****************** Masks for ADC0_SCN_t **********************/
/*
   ADC0_SCN              "ADC Auto Scan Control Register"
*/
/**********************************************************/

#define ADC0_SCN_MASK                   0xc000ffff
#define ADC0_SCN_SRQ0_MASK              0x00000001
#define ADC0_SCN_SRQ0_SHIFT             0
#define ADC0_SCN_SRQ1_MASK              0x00000002
#define ADC0_SCN_SRQ1_SHIFT             1
#define ADC0_SCN_SRQ2_MASK              0x00000004
#define ADC0_SCN_SRQ2_SHIFT             2
#define ADC0_SCN_SRQ3_MASK              0x00000008
#define ADC0_SCN_SRQ3_SHIFT             3
#define ADC0_SCN_SRQ4_MASK              0x00000010
#define ADC0_SCN_SRQ4_SHIFT             4
#define ADC0_SCN_SRQ5_MASK              0x00000020
#define ADC0_SCN_SRQ5_SHIFT             5
#define ADC0_SCN_SRQ6_MASK              0x00000040
#define ADC0_SCN_SRQ6_SHIFT             6
#define ADC0_SCN_SRQ7_MASK              0x00000080
#define ADC0_SCN_SRQ7_SHIFT             7
#define ADC0_SCN_SRQ8_MASK              0x00000100
#define ADC0_SCN_SRQ8_SHIFT             8
#define ADC0_SCN_SRQ9_MASK              0x00000200
#define ADC0_SCN_SRQ9_SHIFT             9
#define ADC0_SCN_SRQ10_MASK             0x00000400
#define ADC0_SCN_SRQ10_SHIFT            10
#define ADC0_SCN_SRQ11_MASK             0x00000800
#define ADC0_SCN_SRQ11_SHIFT            11
#define ADC0_SCN_SRQ12_MASK             0x00001000
#define ADC0_SCN_SRQ12_SHIFT            12
#define ADC0_SCN_SRQ13_MASK             0x00002000
#define ADC0_SCN_SRQ13_SHIFT            13
#define ADC0_SCN_SRQ14_MASK             0x00004000
#define ADC0_SCN_SRQ14_SHIFT            14
#define ADC0_SCN_SRQ15_MASK             0x00008000
#define ADC0_SCN_SRQ15_SHIFT            15
#define ADC0_SCN_GRPC_MASK              0xc0000000
#define ADC0_SCN_GRPC_SHIFT             30



/****************** Masks for ADC0_SCON_t **********************/
/*
   ADC0_SCON             "ADC Source Control Register"
*/
/**********************************************************/

#define ADC0_SCON_MASK                  0x0000001f
#define ADC0_SCON_QENC_MASK             0x00000001
#define ADC0_SCON_QENC_SHIFT            0
#define ADC0_SCON_QENS_MASK             0x00000002
#define ADC0_SCON_QENS_SHIFT            1
#define ADC0_SCON_TRC_MASK              0x00000004
#define ADC0_SCON_TRC_SHIFT             2
#define ADC0_SCON_TRS_MASK              0x00000008
#define ADC0_SCON_TRS_SHIFT             3
#define ADC0_SCON_QRS_MASK              0x00000010
#define ADC0_SCON_QRS_SHIFT             4



/****************** Masks for ADC0_SRNP_t **********************/
/*
   ADC0_SRNP             "ADC Service Request Node Pointer Register"
*/
/**********************************************************/

#define ADC0_SRNP_MASK                  0x0000ff0f
#define ADC0_SRNP_ENPT_MASK             0x00000001
#define ADC0_SRNP_ENPT_SHIFT            0
#define ADC0_SRNP_PT_MASK               0x0000000e
#define ADC0_SRNP_PT_SHIFT              1
#define ADC0_SRNP_ENPQR_MASK            0x00000100
#define ADC0_SRNP_ENPQR_SHIFT           8
#define ADC0_SRNP_PQR_MASK              0x00000e00
#define ADC0_SRNP_PQR_SHIFT             9
#define ADC0_SRNP_ENPAS_MASK            0x00001000
#define ADC0_SRNP_ENPAS_SHIFT           12
#define ADC0_SRNP_PAS_MASK              0x0000e000
#define ADC0_SRNP_PAS_SHIFT             13



/****************** Masks for ADC0_STAT_t **********************/
/*
   ADC0_STAT             "ADC Converter Status Register"
*/
/**********************************************************/

#define ADC0_STAT_MASK                  0x1f1fff0f
#define ADC0_STAT_CHNRCC_MASK           0x0000000f
#define ADC0_STAT_CHNRCC_SHIFT          0
#define ADC0_STAT_CHTSCC_MASK           0x00000700
#define ADC0_STAT_CHTSCC_SHIFT          8
#define ADC0_STAT_DATAVAL_MASK          0x00000800
#define ADC0_STAT_DATAVAL_SHIFT         11
#define ADC0_STAT_AL_MASK               0x00001000
#define ADC0_STAT_AL_SHIFT              12
#define ADC0_STAT_CAL_MASK              0x00002000
#define ADC0_STAT_CAL_SHIFT             13
#define ADC0_STAT_SMPL_MASK             0x00004000
#define ADC0_STAT_SMPL_SHIFT            14
#define ADC0_STAT_BUSY_MASK             0x00008000
#define ADC0_STAT_BUSY_SHIFT            15
#define ADC0_STAT_QLP_MASK              0x000f0000
#define ADC0_STAT_QLP_SHIFT             16
#define ADC0_STAT_QF_MASK               0x00100000
#define ADC0_STAT_QF_SHIFT              20
#define ADC0_STAT_REQSY_MASK            0x01000000
#define ADC0_STAT_REQSY_SHIFT           24
#define ADC0_STAT_PARSY_MASK            0x02000000
#define ADC0_STAT_PARSY_SHIFT           25
#define ADC0_STAT_IENREQ_MASK           0x04000000
#define ADC0_STAT_IENREQ_SHIFT          26
#define ADC0_STAT_IENPAR_MASK           0x08000000
#define ADC0_STAT_IENPAR_SHIFT          27
#define ADC0_STAT_SYMS_MASK             0x10000000
#define ADC0_STAT_SYMS_SHIFT            28



/****************** Masks for ADC0_SW0CRP_t **********************/
/*
   ADC0_SW0CRP           "ADC Software SW0 Conversion Request Pending Register"
*/
/**********************************************************/

#define ADC0_SW0CRP_MASK                0x0000ffff
#define ADC0_SW0CRP_SW0CRP0_MASK        0x00000001
#define ADC0_SW0CRP_SW0CRP0_SHIFT       0
#define ADC0_SW0CRP_SW0CRP1_MASK        0x00000002
#define ADC0_SW0CRP_SW0CRP1_SHIFT       1
#define ADC0_SW0CRP_SW0CRP2_MASK        0x00000004
#define ADC0_SW0CRP_SW0CRP2_SHIFT       2
#define ADC0_SW0CRP_SW0CRP3_MASK        0x00000008
#define ADC0_SW0CRP_SW0CRP3_SHIFT       3
#define ADC0_SW0CRP_SW0CRP4_MASK        0x00000010
#define ADC0_SW0CRP_SW0CRP4_SHIFT       4
#define ADC0_SW0CRP_SW0CRP5_MASK        0x00000020
#define ADC0_SW0CRP_SW0CRP5_SHIFT       5
#define ADC0_SW0CRP_SW0CRP6_MASK        0x00000040
#define ADC0_SW0CRP_SW0CRP6_SHIFT       6
#define ADC0_SW0CRP_SW0CRP7_MASK        0x00000080
#define ADC0_SW0CRP_SW0CRP7_SHIFT       7
#define ADC0_SW0CRP_SW0CRP8_MASK        0x00000100
#define ADC0_SW0CRP_SW0CRP8_SHIFT       8
#define ADC0_SW0CRP_SW0CRP9_MASK        0x00000200
#define ADC0_SW0CRP_SW0CRP9_SHIFT       9
#define ADC0_SW0CRP_SW0CRP10_MASK       0x00000400
#define ADC0_SW0CRP_SW0CRP10_SHIFT      10
#define ADC0_SW0CRP_SW0CRP11_MASK       0x00000800
#define ADC0_SW0CRP_SW0CRP11_SHIFT      11
#define ADC0_SW0CRP_SW0CRP12_MASK       0x00001000
#define ADC0_SW0CRP_SW0CRP12_SHIFT      12
#define ADC0_SW0CRP_SW0CRP13_MASK       0x00002000
#define ADC0_SW0CRP_SW0CRP13_SHIFT      13
#define ADC0_SW0CRP_SW0CRP14_MASK       0x00004000
#define ADC0_SW0CRP_SW0CRP14_SHIFT      14
#define ADC0_SW0CRP_SW0CRP15_MASK       0x00008000
#define ADC0_SW0CRP_SW0CRP15_SHIFT      15



/****************** Masks for ADC0_TCON_t **********************/
/*
   ADC0_TCON             "ADC Timer Control Register"
*/
/**********************************************************/

#define ADC0_TCON_MASK                  0xffff3fff
#define ADC0_TCON_ALB_MASK              0x00003fff
#define ADC0_TCON_ALB_SHIFT             0
#define ADC0_TCON_TRLD_MASK             0x3fff0000
#define ADC0_TCON_TRLD_SHIFT            16
#define ADC0_TCON_TSEN_MASK             0x40000000
#define ADC0_TCON_TSEN_SHIFT            30
#define ADC0_TCON_TR_MASK               0x80000000
#define ADC0_TCON_TR_SHIFT              31



/****************** Masks for ADC0_TCRP_t **********************/
/*
   ADC0_TCRP             "ADC Timer Conversion Request Pending Register"
*/
/**********************************************************/

#define ADC0_TCRP_MASK                  0x0000ffff
#define ADC0_TCRP_TRP0_MASK             0x00000001
#define ADC0_TCRP_TRP0_SHIFT            0
#define ADC0_TCRP_TRP1_MASK             0x00000002
#define ADC0_TCRP_TRP1_SHIFT            1
#define ADC0_TCRP_TRP2_MASK             0x00000004
#define ADC0_TCRP_TRP2_SHIFT            2
#define ADC0_TCRP_TRP3_MASK             0x00000008
#define ADC0_TCRP_TRP3_SHIFT            3
#define ADC0_TCRP_TRP4_MASK             0x00000010
#define ADC0_TCRP_TRP4_SHIFT            4
#define ADC0_TCRP_TRP5_MASK             0x00000020
#define ADC0_TCRP_TRP5_SHIFT            5
#define ADC0_TCRP_TRP6_MASK             0x00000040
#define ADC0_TCRP_TRP6_SHIFT            6
#define ADC0_TCRP_TRP7_MASK             0x00000080
#define ADC0_TCRP_TRP7_SHIFT            7
#define ADC0_TCRP_TRP8_MASK             0x00000100
#define ADC0_TCRP_TRP8_SHIFT            8
#define ADC0_TCRP_TRP9_MASK             0x00000200
#define ADC0_TCRP_TRP9_SHIFT            9
#define ADC0_TCRP_TRP10_MASK            0x00000400
#define ADC0_TCRP_TRP10_SHIFT           10
#define ADC0_TCRP_TRP11_MASK            0x00000800
#define ADC0_TCRP_TRP11_SHIFT           11
#define ADC0_TCRP_TRP12_MASK            0x00001000
#define ADC0_TCRP_TRP12_SHIFT           12
#define ADC0_TCRP_TRP13_MASK            0x00002000
#define ADC0_TCRP_TRP13_SHIFT           13
#define ADC0_TCRP_TRP14_MASK            0x00004000
#define ADC0_TCRP_TRP14_SHIFT           14
#define ADC0_TCRP_TRP15_MASK            0x00008000
#define ADC0_TCRP_TRP15_SHIFT           15



/****************** Masks for ADC0_TEST_t **********************/
/*
   ADC0_TEST             "ADC Test Register"
*/
/**********************************************************/

#define ADC0_TEST_MASK                  0x00004000
#define ADC0_TEST_TEST14_MASK           0x00004000
#define ADC0_TEST_TEST14_SHIFT          14



/****************** Masks for ADC0_TSTAT_t **********************/
/*
   ADC0_TSTAT            "ADC Timer Status Register"
*/
/**********************************************************/

#define ADC0_TSTAT_MASK                 0x00003fff
#define ADC0_TSTAT_TIMER_MASK           0x00003fff
#define ADC0_TSTAT_TIMER_SHIFT          0



/****************** Masks for ADC0_TTC_t **********************/
/*
   ADC0_TTC              "ADC Timer Trigger Control Register"
*/
/**********************************************************/

#define ADC0_TTC_MASK                   0x0000ffff
#define ADC0_TTC_TTCCH0_MASK            0x00000001
#define ADC0_TTC_TTCCH0_SHIFT           0
#define ADC0_TTC_TTCCH1_MASK            0x00000002
#define ADC0_TTC_TTCCH1_SHIFT           1
#define ADC0_TTC_TTCCH2_MASK            0x00000004
#define ADC0_TTC_TTCCH2_SHIFT           2
#define ADC0_TTC_TTCCH3_MASK            0x00000008
#define ADC0_TTC_TTCCH3_SHIFT           3
#define ADC0_TTC_TTCCH4_MASK            0x00000010
#define ADC0_TTC_TTCCH4_SHIFT           4
#define ADC0_TTC_TTCCH5_MASK            0x00000020
#define ADC0_TTC_TTCCH5_SHIFT           5
#define ADC0_TTC_TTCCH6_MASK            0x00000040
#define ADC0_TTC_TTCCH6_SHIFT           6
#define ADC0_TTC_TTCCH7_MASK            0x00000080
#define ADC0_TTC_TTCCH7_SHIFT           7
#define ADC0_TTC_TTCCH8_MASK            0x00000100
#define ADC0_TTC_TTCCH8_SHIFT           8
#define ADC0_TTC_TTCCH9_MASK            0x00000200
#define ADC0_TTC_TTCCH9_SHIFT           9
#define ADC0_TTC_TTCCH10_MASK           0x00000400
#define ADC0_TTC_TTCCH10_SHIFT          10
#define ADC0_TTC_TTCCH11_MASK           0x00000800
#define ADC0_TTC_TTCCH11_SHIFT          11
#define ADC0_TTC_TTCCH12_MASK           0x00001000
#define ADC0_TTC_TTCCH12_SHIFT          12
#define ADC0_TTC_TTCCH13_MASK           0x00002000
#define ADC0_TTC_TTCCH13_SHIFT          13
#define ADC0_TTC_TTCCH14_MASK           0x00004000
#define ADC0_TTC_TTCCH14_SHIFT          14
#define ADC0_TTC_TTCCH15_MASK           0x00008000
#define ADC0_TTC_TTCCH15_SHIFT          15




#endif /* _HAVE_TRICORE_ADC0_MASKS_H_ */

