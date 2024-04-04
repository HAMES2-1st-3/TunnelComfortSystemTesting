/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MLI0_MLI1_SHAREMASKS_H_
#define _HAVE_TRICORE_MLI0_MLI1_SHAREMASKS_H_


/****************** Masks for MLIn_AER_t **********************/
/*
   MLI0_AER              "Access Enable Register"
   MLI1_AER              "Access Enable Register"
*/
/**********************************************************/

#define MLIn_AER_MASK                   0xffffffff
#define MLIn_AER_AEN0_MASK              0x00000001
#define MLIn_AER_AEN0_SHIFT             0
#define MLIn_AER_AEN1_MASK              0x00000002
#define MLIn_AER_AEN1_SHIFT             1
#define MLIn_AER_AEN2_MASK              0x00000004
#define MLIn_AER_AEN2_SHIFT             2
#define MLIn_AER_AEN3_MASK              0x00000008
#define MLIn_AER_AEN3_SHIFT             3
#define MLIn_AER_AEN4_MASK              0x00000010
#define MLIn_AER_AEN4_SHIFT             4
#define MLIn_AER_AEN5_MASK              0x00000020
#define MLIn_AER_AEN5_SHIFT             5
#define MLIn_AER_AEN6_MASK              0x00000040
#define MLIn_AER_AEN6_SHIFT             6
#define MLIn_AER_AEN7_MASK              0x00000080
#define MLIn_AER_AEN7_SHIFT             7
#define MLIn_AER_AEN8_MASK              0x00000100
#define MLIn_AER_AEN8_SHIFT             8
#define MLIn_AER_AEN9_MASK              0x00000200
#define MLIn_AER_AEN9_SHIFT             9
#define MLIn_AER_AEN10_MASK             0x00000400
#define MLIn_AER_AEN10_SHIFT            10
#define MLIn_AER_AEN11_MASK             0x00000800
#define MLIn_AER_AEN11_SHIFT            11
#define MLIn_AER_AEN12_MASK             0x00001000
#define MLIn_AER_AEN12_SHIFT            12
#define MLIn_AER_AEN13_MASK             0x00002000
#define MLIn_AER_AEN13_SHIFT            13
#define MLIn_AER_AEN14_MASK             0x00004000
#define MLIn_AER_AEN14_SHIFT            14
#define MLIn_AER_AEN15_MASK             0x00008000
#define MLIn_AER_AEN15_SHIFT            15
#define MLIn_AER_AEN16_MASK             0x00010000
#define MLIn_AER_AEN16_SHIFT            16
#define MLIn_AER_AEN17_MASK             0x00020000
#define MLIn_AER_AEN17_SHIFT            17
#define MLIn_AER_AEN18_MASK             0x00040000
#define MLIn_AER_AEN18_SHIFT            18
#define MLIn_AER_AEN19_MASK             0x00080000
#define MLIn_AER_AEN19_SHIFT            19
#define MLIn_AER_AEN20_MASK             0x00100000
#define MLIn_AER_AEN20_SHIFT            20
#define MLIn_AER_AEN21_MASK             0x00200000
#define MLIn_AER_AEN21_SHIFT            21
#define MLIn_AER_AEN22_MASK             0x00400000
#define MLIn_AER_AEN22_SHIFT            22
#define MLIn_AER_AEN23_MASK             0x00800000
#define MLIn_AER_AEN23_SHIFT            23
#define MLIn_AER_AEN24_MASK             0x01000000
#define MLIn_AER_AEN24_SHIFT            24
#define MLIn_AER_AEN25_MASK             0x02000000
#define MLIn_AER_AEN25_SHIFT            25
#define MLIn_AER_AEN26_MASK             0x04000000
#define MLIn_AER_AEN26_SHIFT            26
#define MLIn_AER_AEN27_MASK             0x08000000
#define MLIn_AER_AEN27_SHIFT            27
#define MLIn_AER_AEN28_MASK             0x10000000
#define MLIn_AER_AEN28_SHIFT            28
#define MLIn_AER_AEN29_MASK             0x20000000
#define MLIn_AER_AEN29_SHIFT            29
#define MLIn_AER_AEN30_MASK             0x40000000
#define MLIn_AER_AEN30_SHIFT            30
#define MLIn_AER_AEN31_MASK             0x80000000
#define MLIn_AER_AEN31_SHIFT            31



/****************** Masks for MLIn_ARR_t **********************/
/*
   MLI0_ARR              "Access Range Register"
   MLI1_ARR              "Access Range Register"
*/
/**********************************************************/

#define MLIn_ARR_MASK                   0xffffffff
#define MLIn_ARR_SLICE0_MASK            0x0000001f
#define MLIn_ARR_SLICE0_SHIFT           0
#define MLIn_ARR_SIZE0_MASK             0x000000e0
#define MLIn_ARR_SIZE0_SHIFT            5
#define MLIn_ARR_SLICE1_MASK            0x00001f00
#define MLIn_ARR_SLICE1_SHIFT           8
#define MLIn_ARR_SIZE1_MASK             0x0000e000
#define MLIn_ARR_SIZE1_SHIFT            13
#define MLIn_ARR_SLICE2_MASK            0x001f0000
#define MLIn_ARR_SLICE2_SHIFT           16
#define MLIn_ARR_SIZE2_MASK             0x00e00000
#define MLIn_ARR_SIZE2_SHIFT            21
#define MLIn_ARR_SLICE3_MASK            0x1f000000
#define MLIn_ARR_SLICE3_SHIFT           24
#define MLIn_ARR_SIZE3_MASK             0xe0000000
#define MLIn_ARR_SIZE3_SHIFT            29



/****************** Masks for MLIn_FDR_t **********************/
/*
   MLI0_FDR              "MLI Fractional Divider Register"
   MLI1_FDR              "MLI Fractional Divider Register"
*/
/**********************************************************/

#define MLIn_FDR_MASK                   0xf3fffbff
#define MLIn_FDR_STEP_MASK              0x000003ff
#define MLIn_FDR_STEP_SHIFT             0
#define MLIn_FDR_SM_MASK                0x00000800
#define MLIn_FDR_SM_SHIFT               11
#define MLIn_FDR_SC_MASK                0x00003000
#define MLIn_FDR_SC_SHIFT               12
#define MLIn_FDR_DM_MASK                0x0000c000
#define MLIn_FDR_DM_SHIFT               14
#define MLIn_FDR_RESULT_MASK            0x03ff0000
#define MLIn_FDR_RESULT_SHIFT           16
#define MLIn_FDR_SUSACK_MASK            0x10000000
#define MLIn_FDR_SUSACK_SHIFT           28
#define MLIn_FDR_SUSREQ_MASK            0x20000000
#define MLIn_FDR_SUSREQ_SHIFT           29
#define MLIn_FDR_ENHW_MASK              0x40000000
#define MLIn_FDR_ENHW_SHIFT             30
#define MLIn_FDR_DISCLK_MASK            0x80000000
#define MLIn_FDR_DISCLK_SHIFT           31



/****************** Masks for MLIn_GINTR_t **********************/
/*
   MLI0_GINTR            "MLI Global Interrupt Set Register"
   MLI1_GINTR            "MLI Global Interrupt Set Register"
*/
/**********************************************************/

#define MLIn_GINTR_MASK                 0x000000ff
#define MLIn_GINTR_SIMLI0_MASK          0x00000001
#define MLIn_GINTR_SIMLI0_SHIFT         0
#define MLIn_GINTR_SIMLI1_MASK          0x00000002
#define MLIn_GINTR_SIMLI1_SHIFT         1
#define MLIn_GINTR_SIMLI2_MASK          0x00000004
#define MLIn_GINTR_SIMLI2_SHIFT         2
#define MLIn_GINTR_SIMLI3_MASK          0x00000008
#define MLIn_GINTR_SIMLI3_SHIFT         3
#define MLIn_GINTR_SIMLI4_MASK          0x00000010
#define MLIn_GINTR_SIMLI4_SHIFT         4
#define MLIn_GINTR_SIMLI5_MASK          0x00000020
#define MLIn_GINTR_SIMLI5_SHIFT         5
#define MLIn_GINTR_SIMLI6_MASK          0x00000040
#define MLIn_GINTR_SIMLI6_SHIFT         6
#define MLIn_GINTR_SIMLI7_MASK          0x00000080
#define MLIn_GINTR_SIMLI7_SHIFT         7



/****************** Masks for MLIn_ID_t **********************/
/*
   MLI0_ID               "MLI Module Identification Register"
   MLI1_ID               "MLI Module Identification Register"
*/
/**********************************************************/

#define MLIn_ID_MASK                    0xffffffff
#define MLIn_ID_MOD_REV_MASK            0x000000ff
#define MLIn_ID_MOD_REV_SHIFT           0
#define MLIn_ID_MOD_TYPE_MASK           0x0000ff00
#define MLIn_ID_MOD_TYPE_SHIFT          8
#define MLIn_ID_MOD_NUMBER_MASK         0xffff0000
#define MLIn_ID_MOD_NUMBER_SHIFT        16



/****************** Masks for MLIn_OICR_t **********************/
/*
   MLI0_OICR             "Output Input Control Register"
   MLI1_OICR             "Output Input Control Register"
*/
/**********************************************************/

#define MLIn_OICR_MASK                  0xffffffff
#define MLIn_OICR_TVEA_MASK             0x00000001
#define MLIn_OICR_TVEA_SHIFT            0
#define MLIn_OICR_TVEB_MASK             0x00000002
#define MLIn_OICR_TVEB_SHIFT            1
#define MLIn_OICR_TVEC_MASK             0x00000004
#define MLIn_OICR_TVEC_SHIFT            2
#define MLIn_OICR_TVED_MASK             0x00000008
#define MLIn_OICR_TVED_SHIFT            3
#define MLIn_OICR_TVPA_MASK             0x00000010
#define MLIn_OICR_TVPA_SHIFT            4
#define MLIn_OICR_TVPB_MASK             0x00000020
#define MLIn_OICR_TVPB_SHIFT            5
#define MLIn_OICR_TVPC_MASK             0x00000040
#define MLIn_OICR_TVPC_SHIFT            6
#define MLIn_OICR_TVPD_MASK             0x00000080
#define MLIn_OICR_TVPD_SHIFT            7
#define MLIn_OICR_TRS_MASK              0x00000300
#define MLIn_OICR_TRS_SHIFT             8
#define MLIn_OICR_TRP_MASK              0x00000400
#define MLIn_OICR_TRP_SHIFT             10
#define MLIn_OICR_TRE_MASK              0x00000800
#define MLIn_OICR_TRE_SHIFT             11
#define MLIn_OICR_TCE_MASK              0x00001000
#define MLIn_OICR_TCE_SHIFT             12
#define MLIn_OICR_TCP_MASK              0x00002000
#define MLIn_OICR_TCP_SHIFT             13
#define MLIn_OICR_TDP_MASK              0x00004000
#define MLIn_OICR_TDP_SHIFT             14
#define MLIn_OICR_RVE_MASK              0x00008000
#define MLIn_OICR_RVE_SHIFT             15
#define MLIn_OICR_RRS_MASK              0x00030000
#define MLIn_OICR_RRS_SHIFT             16
#define MLIn_OICR_RRPA_MASK             0x00040000
#define MLIn_OICR_RRPA_SHIFT            18
#define MLIn_OICR_RRPB_MASK             0x00080000
#define MLIn_OICR_RRPB_SHIFT            19
#define MLIn_OICR_RRPC_MASK             0x00100000
#define MLIn_OICR_RRPC_SHIFT            20
#define MLIn_OICR_RRPD_MASK             0x00200000
#define MLIn_OICR_RRPD_SHIFT            21
#define MLIn_OICR_RVS_MASK              0x00c00000
#define MLIn_OICR_RVS_SHIFT             22
#define MLIn_OICR_RVP_MASK              0x01000000
#define MLIn_OICR_RVP_SHIFT             24
#define MLIn_OICR_RCS_MASK              0x06000000
#define MLIn_OICR_RCS_SHIFT             25
#define MLIn_OICR_RCP_MASK              0x08000000
#define MLIn_OICR_RCP_SHIFT             27
#define MLIn_OICR_RCE_MASK              0x10000000
#define MLIn_OICR_RCE_SHIFT             28
#define MLIn_OICR_RDS_MASK              0x60000000
#define MLIn_OICR_RDS_SHIFT             29
#define MLIn_OICR_RDP_MASK              0x80000000
#define MLIn_OICR_RDP_SHIFT             31



/****************** Masks for MLIn_RADRR_t **********************/
/*
   MLI0_RADRR            "Receiver Address Register"
   MLI1_RADRR            "Receiver Address Register"
*/
/**********************************************************/

#define MLIn_RADRR_MASK                 0xffffffff
#define MLIn_RADRR_ADDR_MASK            0xffffffff
#define MLIn_RADRR_ADDR_SHIFT           0



/****************** Masks for MLIn_RCR_t **********************/
/*
   MLI0_RCR              "Receiver Control Register"
   MLI1_RCR              "Receiver Control Register"
*/
/**********************************************************/

#define MLIn_RCR_MASK                   0x011fffff
#define MLIn_RCR_DPE_MASK               0x0000000f
#define MLIn_RCR_DPE_SHIFT              0
#define MLIn_RCR_CMDP3_MASK             0x000000f0
#define MLIn_RCR_CMDP3_SHIFT            4
#define MLIn_RCR_MOD_MASK               0x00000100
#define MLIn_RCR_MOD_SHIFT              8
#define MLIn_RCR_DW_MASK                0x00000600
#define MLIn_RCR_DW_SHIFT               9
#define MLIn_RCR_TF_MASK                0x00001800
#define MLIn_RCR_TF_SHIFT               11
#define MLIn_RCR_PE_MASK                0x00002000
#define MLIn_RCR_PE_SHIFT               13
#define MLIn_RCR_RPN_MASK               0x0000c000
#define MLIn_RCR_RPN_SHIFT              14
#define MLIn_RCR_MPE_MASK               0x000f0000
#define MLIn_RCR_MPE_SHIFT              16
#define MLIn_RCR_BEN_MASK               0x00100000
#define MLIn_RCR_BEN_SHIFT              20
#define MLIn_RCR_RCVRST_MASK            0x01000000
#define MLIn_RCR_RCVRST_SHIFT           24



/****************** Masks for MLIn_RDATAR_t **********************/
/*
   MLI0_RDATAR           "Receiver Data Register"
   MLI1_RDATAR           "Receiver Data Register"
*/
/**********************************************************/

#define MLIn_RDATAR_MASK                0xffffffff
#define MLIn_RDATAR_DATA_MASK           0xffffffff
#define MLIn_RDATAR_DATA_SHIFT          0



/****************** Masks for MLIn_RIER_t **********************/
/*
   MLI0_RIER             "Receiver Interrupt Enable Register"
   MLI1_RIER             "Receiver Interrupt Enable Register"
*/
/**********************************************************/

#define MLIn_RIER_MASK                  0x03ff03ff
#define MLIn_RIER_NFRIE_MASK            0x00000003
#define MLIn_RIER_NFRIE_SHIFT           0
#define MLIn_RIER_CFRIE0_MASK           0x00000004
#define MLIn_RIER_CFRIE0_SHIFT          2
#define MLIn_RIER_CFRIE1_MASK           0x00000008
#define MLIn_RIER_CFRIE1_SHIFT          3
#define MLIn_RIER_CFRIE2_MASK           0x00000010
#define MLIn_RIER_CFRIE2_SHIFT          4
#define MLIn_RIER_CFRIE3_MASK           0x00000020
#define MLIn_RIER_CFRIE3_SHIFT          5
#define MLIn_RIER_ICE_MASK              0x00000040
#define MLIn_RIER_ICE_SHIFT             6
#define MLIn_RIER_PEIE_MASK             0x00000080
#define MLIn_RIER_PEIE_SHIFT            7
#define MLIn_RIER_MPEIE_MASK            0x00000100
#define MLIn_RIER_MPEIE_SHIFT           8
#define MLIn_RIER_DRAIE_MASK            0x00000200
#define MLIn_RIER_DRAIE_SHIFT           9
#define MLIn_RIER_NFRIR_MASK            0x00010000
#define MLIn_RIER_NFRIR_SHIFT           16
#define MLIn_RIER_MEIR_MASK             0x00020000
#define MLIn_RIER_MEIR_SHIFT            17
#define MLIn_RIER_CFRIR0_MASK           0x00040000
#define MLIn_RIER_CFRIR0_SHIFT          18
#define MLIn_RIER_CFRIR1_MASK           0x00080000
#define MLIn_RIER_CFRIR1_SHIFT          19
#define MLIn_RIER_CFRIR2_MASK           0x00100000
#define MLIn_RIER_CFRIR2_SHIFT          20
#define MLIn_RIER_CFRIR3_MASK           0x00200000
#define MLIn_RIER_CFRIR3_SHIFT          21
#define MLIn_RIER_ICER_MASK             0x00400000
#define MLIn_RIER_ICER_SHIFT            22
#define MLIn_RIER_PEIR_MASK             0x00800000
#define MLIn_RIER_PEIR_SHIFT            23
#define MLIn_RIER_MPEIR_MASK            0x01000000
#define MLIn_RIER_MPEIR_SHIFT           24
#define MLIn_RIER_DRAIR_MASK            0x02000000
#define MLIn_RIER_DRAIR_SHIFT           25



/****************** Masks for MLIn_RINPR_t **********************/
/*
   MLI0_RINPR            "Receiver Interrupt Node Pointer Register"
   MLI1_RINPR            "Receiver Interrupt Node Pointer Register"
*/
/**********************************************************/

#define MLIn_RINPR_MASK                 0x00007777
#define MLIn_RINPR_NFRIP_MASK           0x00000007
#define MLIn_RINPR_NFRIP_SHIFT          0
#define MLIn_RINPR_CFRIP_MASK           0x00000070
#define MLIn_RINPR_CFRIP_SHIFT          4
#define MLIn_RINPR_MPPEIP_MASK          0x00000700
#define MLIn_RINPR_MPPEIP_SHIFT         8
#define MLIn_RINPR_DRAIP_MASK           0x00007000
#define MLIn_RINPR_DRAIP_SHIFT          12



/****************** Masks for MLIn_RISR_t **********************/
/*
   MLI0_RISR             "Receiver Interrupt Status Register"
   MLI1_RISR             "Receiver Interrupt Status Register"
*/
/**********************************************************/

#define MLIn_RISR_MASK                  0x000003ff
#define MLIn_RISR_NFRI_MASK             0x00000001
#define MLIn_RISR_NFRI_SHIFT            0
#define MLIn_RISR_MEI_MASK              0x00000002
#define MLIn_RISR_MEI_SHIFT             1
#define MLIn_RISR_CFRI0_MASK            0x00000004
#define MLIn_RISR_CFRI0_SHIFT           2
#define MLIn_RISR_CFRI1_MASK            0x00000008
#define MLIn_RISR_CFRI1_SHIFT           3
#define MLIn_RISR_CFRI2_MASK            0x00000010
#define MLIn_RISR_CFRI2_SHIFT           4
#define MLIn_RISR_CFRI3_MASK            0x00000020
#define MLIn_RISR_CFRI3_SHIFT           5
#define MLIn_RISR_IC_MASK               0x00000040
#define MLIn_RISR_IC_SHIFT              6
#define MLIn_RISR_PEI_MASK              0x00000080
#define MLIn_RISR_PEI_SHIFT             7
#define MLIn_RISR_MPEI_MASK             0x00000100
#define MLIn_RISR_MPEI_SHIFT            8
#define MLIn_RISR_DRAI_MASK             0x00000200
#define MLIn_RISR_DRAI_SHIFT            9



/****************** Masks for MLIn_RPmBAR_t **********************/
/*
   MLI0_RP0BAR           "Receiver Pipe 0 Base Address Register"
   MLI0_RP1BAR           "Receiver Pipe 1 Base Address Register"
   MLI0_RP2BAR           "Receiver Pipe 2 Base Address Register"
   MLI0_RP3BAR           "Receiver Pipe 3 Base Address Register"
   MLI1_RP0BAR           "Receiver Pipe 0 Base Address Register"
   MLI1_RP1BAR           "Receiver Pipe 1 Base Address Register"
   MLI1_RP2BAR           "Receiver Pipe 2 Base Address Register"
   MLI1_RP3BAR           "Receiver Pipe 3 Base Address Register"
*/
/**********************************************************/

#define MLIn_RPmBAR_MASK                0xfffffff0
#define MLIn_RPmBAR_ADDR_MASK           0xfffffff0
#define MLIn_RPmBAR_ADDR_SHIFT          4



/****************** Masks for MLIn_RPmSTATR_t **********************/
/*
   MLI0_RP0STATR         "Receiver Pipe 0 Status Register"
   MLI0_RP1STATR         "Receiver Pipe 1 Status Register"
   MLI0_RP2STATR         "Receiver Pipe 2 Status Register"
   MLI0_RP3STATR         "Receiver Pipe 3 Status Register"
   MLI1_RP0STATR         "Receiver Pipe 0 Status Register"
   MLI1_RP1STATR         "Receiver Pipe 1 Status Register"
   MLI1_RP2STATR         "Receiver Pipe 2 Status Register"
   MLI1_RP3STATR         "Receiver Pipe 3 Status Register"
*/
/**********************************************************/

#define MLIn_RPmSTATR_MASK              0x0000ffcf
#define MLIn_RPmSTATR_BS_MASK           0x0000000f
#define MLIn_RPmSTATR_BS_SHIFT          0
#define MLIn_RPmSTATR_AP_MASK           0x0000ffc0
#define MLIn_RPmSTATR_AP_SHIFT          6



/****************** Masks for MLIn_SCR_t **********************/
/*
   MLI0_SCR              "Set Clear Register"
   MLI1_SCR              "Set Clear Register"
*/
/**********************************************************/

#define MLIn_SCR_MASK                   0xff03ff1f
#define MLIn_SCR_SCV0_MASK              0x00000001
#define MLIn_SCR_SCV0_SHIFT             0
#define MLIn_SCR_SCV1_MASK              0x00000002
#define MLIn_SCR_SCV1_SHIFT             1
#define MLIn_SCR_SCV2_MASK              0x00000004
#define MLIn_SCR_SCV2_SHIFT             2
#define MLIn_SCR_SCV3_MASK              0x00000008
#define MLIn_SCR_SCV3_SHIFT             3
#define MLIn_SCR_SMOD_MASK              0x00000010
#define MLIn_SCR_SMOD_SHIFT             4
#define MLIn_SCR_CDV0_MASK              0x00000100
#define MLIn_SCR_CDV0_SHIFT             8
#define MLIn_SCR_CDV1_MASK              0x00000200
#define MLIn_SCR_CDV1_SHIFT             9
#define MLIn_SCR_CDV2_MASK              0x00000400
#define MLIn_SCR_CDV2_SHIFT             10
#define MLIn_SCR_CDV3_MASK              0x00000800
#define MLIn_SCR_CDV3_SHIFT             11
#define MLIn_SCR_CCV0_MASK              0x00001000
#define MLIn_SCR_CCV0_SHIFT             12
#define MLIn_SCR_CCV1_MASK              0x00002000
#define MLIn_SCR_CCV1_SHIFT             13
#define MLIn_SCR_CCV2_MASK              0x00004000
#define MLIn_SCR_CCV2_SHIFT             14
#define MLIn_SCR_CCV3_MASK              0x00008000
#define MLIn_SCR_CCV3_SHIFT             15
#define MLIn_SCR_CMOD_MASK              0x00010000
#define MLIn_SCR_CMOD_SHIFT             16
#define MLIn_SCR_CBAV_MASK              0x00020000
#define MLIn_SCR_CBAV_SHIFT             17
#define MLIn_SCR_CAV_MASK               0x01000000
#define MLIn_SCR_CAV_SHIFT              24
#define MLIn_SCR_CRPE_MASK              0x02000000
#define MLIn_SCR_CRPE_SHIFT             25
#define MLIn_SCR_CTPE_MASK              0x04000000
#define MLIn_SCR_CTPE_SHIFT             26
#define MLIn_SCR_CNAE_MASK              0x08000000
#define MLIn_SCR_CNAE_SHIFT             27
#define MLIn_SCR_CCIV0_MASK             0x10000000
#define MLIn_SCR_CCIV0_SHIFT            28
#define MLIn_SCR_CCIV1_MASK             0x20000000
#define MLIn_SCR_CCIV1_SHIFT            29
#define MLIn_SCR_CCIV2_MASK             0x40000000
#define MLIn_SCR_CCIV2_SHIFT            30
#define MLIn_SCR_CCIV3_MASK             0x80000000
#define MLIn_SCR_CCIV3_SHIFT            31



/****************** Masks for MLIn_TCBAR_t **********************/
/*
   MLI0_TCBAR            "Transmitter Copy Base Address Register"
   MLI1_TCBAR            "Transmitter Copy Base Address Register"
*/
/**********************************************************/

#define MLIn_TCBAR_MASK                 0xfffffff0
#define MLIn_TCBAR_ADDR_MASK            0xfffffff0
#define MLIn_TCBAR_ADDR_SHIFT           4



/****************** Masks for MLIn_TCMDR_t **********************/
/*
   MLI0_TCMDR            "Transmitter Command Register"
   MLI1_TCMDR            "Transmitter Command Register"
*/
/**********************************************************/

#define MLIn_TCMDR_MASK                 0x0f0f0f0f
#define MLIn_TCMDR_CMDP0_MASK           0x0000000f
#define MLIn_TCMDR_CMDP0_SHIFT          0
#define MLIn_TCMDR_CMDP1_MASK           0x00000f00
#define MLIn_TCMDR_CMDP1_SHIFT          8
#define MLIn_TCMDR_CMDP2_MASK           0x000f0000
#define MLIn_TCMDR_CMDP2_SHIFT          16
#define MLIn_TCMDR_CMDP3_MASK           0x0f000000
#define MLIn_TCMDR_CMDP3_SHIFT          24



/****************** Masks for MLIn_TCR_t **********************/
/*
   MLI0_TCR              "Transmitter Control Register"
   MLI1_TCR              "Transmitter Control Register"
*/
/**********************************************************/

#define MLIn_TCR_MASK                   0x0000fff7
#define MLIn_TCR_MOD_MASK               0x00000001
#define MLIn_TCR_MOD_SHIFT              0
#define MLIn_TCR_DNT_MASK               0x00000002
#define MLIn_TCR_DNT_SHIFT              1
#define MLIn_TCR_RTY_MASK               0x00000004
#define MLIn_TCR_RTY_SHIFT              2
#define MLIn_TCR_MPE_MASK               0x000000f0
#define MLIn_TCR_MPE_SHIFT              4
#define MLIn_TCR_MNAE_MASK              0x00000300
#define MLIn_TCR_MNAE_SHIFT             8
#define MLIn_TCR_MDP_MASK               0x00003c00
#define MLIn_TCR_MDP_SHIFT              10
#define MLIn_TCR_NO_MASK                0x00004000
#define MLIn_TCR_NO_SHIFT               14
#define MLIn_TCR_TP_MASK                0x00008000
#define MLIn_TCR_TP_SHIFT               15



/****************** Masks for MLIn_TDRAR_t **********************/
/*
   MLI0_TDRAR            "Transmitter Data Read Answer Register"
   MLI1_TDRAR            "Transmitter Data Read Answer Register"
*/
/**********************************************************/

#define MLIn_TDRAR_MASK                 0xffffffff
#define MLIn_TDRAR_DATA_MASK            0xffffffff
#define MLIn_TDRAR_DATA_SHIFT           0



/****************** Masks for MLIn_TIER_t **********************/
/*
   MLI0_TIER             "Transmitter Interrupt Enable Register"
   MLI1_TIER             "Transmitter Interrupt Enable Register"
*/
/**********************************************************/

#define MLIn_TIER_MASK                  0x03ff03ff
#define MLIn_TIER_NFSIE0_MASK           0x00000001
#define MLIn_TIER_NFSIE0_SHIFT          0
#define MLIn_TIER_NFSIE1_MASK           0x00000002
#define MLIn_TIER_NFSIE1_SHIFT          1
#define MLIn_TIER_NFSIE2_MASK           0x00000004
#define MLIn_TIER_NFSIE2_SHIFT          2
#define MLIn_TIER_NFSIE3_MASK           0x00000008
#define MLIn_TIER_NFSIE3_SHIFT          3
#define MLIn_TIER_CFSIE0_MASK           0x00000010
#define MLIn_TIER_CFSIE0_SHIFT          4
#define MLIn_TIER_CFSIE1_MASK           0x00000020
#define MLIn_TIER_CFSIE1_SHIFT          5
#define MLIn_TIER_CFSIE2_MASK           0x00000040
#define MLIn_TIER_CFSIE2_SHIFT          6
#define MLIn_TIER_CFSIE3_MASK           0x00000080
#define MLIn_TIER_CFSIE3_SHIFT          7
#define MLIn_TIER_PEIE_MASK             0x00000100
#define MLIn_TIER_PEIE_SHIFT            8
#define MLIn_TIER_TEIE_MASK             0x00000200
#define MLIn_TIER_TEIE_SHIFT            9
#define MLIn_TIER_NFSIR0_MASK           0x00010000
#define MLIn_TIER_NFSIR0_SHIFT          16
#define MLIn_TIER_NFSIR1_MASK           0x00020000
#define MLIn_TIER_NFSIR1_SHIFT          17
#define MLIn_TIER_NFSIR2_MASK           0x00040000
#define MLIn_TIER_NFSIR2_SHIFT          18
#define MLIn_TIER_NFSIR3_MASK           0x00080000
#define MLIn_TIER_NFSIR3_SHIFT          19
#define MLIn_TIER_CFSIR0_MASK           0x00100000
#define MLIn_TIER_CFSIR0_SHIFT          20
#define MLIn_TIER_CFSIR1_MASK           0x00200000
#define MLIn_TIER_CFSIR1_SHIFT          21
#define MLIn_TIER_CFSIR2_MASK           0x00400000
#define MLIn_TIER_CFSIR2_SHIFT          22
#define MLIn_TIER_CFSIR3_MASK           0x00800000
#define MLIn_TIER_CFSIR3_SHIFT          23
#define MLIn_TIER_PEIR_MASK             0x01000000
#define MLIn_TIER_PEIR_SHIFT            24
#define MLIn_TIER_TEIR_MASK             0x02000000
#define MLIn_TIER_TEIR_SHIFT            25



/****************** Masks for MLIn_TINPR_t **********************/
/*
   MLI0_TINPR            "Transmitter Interrupt Node Pointer Register"
   MLI1_TINPR            "Transmitter Interrupt Node Pointer Register"
*/
/**********************************************************/

#define MLIn_TINPR_MASK                 0x00777777
#define MLIn_TINPR_NFSIP0_MASK          0x00000007
#define MLIn_TINPR_NFSIP0_SHIFT         0
#define MLIn_TINPR_NFSIP1_MASK          0x00000070
#define MLIn_TINPR_NFSIP1_SHIFT         4
#define MLIn_TINPR_NFSIP2_MASK          0x00000700
#define MLIn_TINPR_NFSIP2_SHIFT         8
#define MLIn_TINPR_NFSIP3_MASK          0x00007000
#define MLIn_TINPR_NFSIP3_SHIFT         12
#define MLIn_TINPR_CFSIP_MASK           0x00070000
#define MLIn_TINPR_CFSIP_SHIFT          16
#define MLIn_TINPR_PTEIP_MASK           0x00700000
#define MLIn_TINPR_PTEIP_SHIFT          20



/****************** Masks for MLIn_TISR_t **********************/
/*
   MLI0_TISR             "Transmitter Interrupt Status Register"
   MLI1_TISR             "Transmitter Interrupt Status Register"
*/
/**********************************************************/

#define MLIn_TISR_MASK                  0x000003ff
#define MLIn_TISR_NFSI0_MASK            0x00000001
#define MLIn_TISR_NFSI0_SHIFT           0
#define MLIn_TISR_NFSI1_MASK            0x00000002
#define MLIn_TISR_NFSI1_SHIFT           1
#define MLIn_TISR_NFSI2_MASK            0x00000004
#define MLIn_TISR_NFSI2_SHIFT           2
#define MLIn_TISR_NFSI3_MASK            0x00000008
#define MLIn_TISR_NFSI3_SHIFT           3
#define MLIn_TISR_CFSI0_MASK            0x00000010
#define MLIn_TISR_CFSI0_SHIFT           4
#define MLIn_TISR_CFSI1_MASK            0x00000020
#define MLIn_TISR_CFSI1_SHIFT           5
#define MLIn_TISR_CFSI2_MASK            0x00000040
#define MLIn_TISR_CFSI2_SHIFT           6
#define MLIn_TISR_CFSI3_MASK            0x00000080
#define MLIn_TISR_CFSI3_SHIFT           7
#define MLIn_TISR_PEI_MASK              0x00000100
#define MLIn_TISR_PEI_SHIFT             8
#define MLIn_TISR_TEI_MASK              0x00000200
#define MLIn_TISR_TEI_SHIFT             9



/****************** Masks for MLIn_TPmAOFR_t **********************/
/*
   MLI0_TP0AOFR          "Transmitter Pipe 0 Address Offset Register"
   MLI0_TP1AOFR          "Transmitter Pipe 1 Address Offset Register"
   MLI0_TP2AOFR          "Transmitter Pipe 2 Address Offset Register"
   MLI0_TP3AOFR          "Transmitter Pipe 3 Address Offset Register"
   MLI1_TP0AOFR          "Transmitter Pipe 0 Address Offset Register"
   MLI1_TP1AOFR          "Transmitter Pipe 1 Address Offset Register"
   MLI1_TP2AOFR          "Transmitter Pipe 2 Address Offset Register"
   MLI1_TP3AOFR          "Transmitter Pipe 3 Address Offset Register"
*/
/**********************************************************/

#define MLIn_TPmAOFR_MASK               0x0000ffff
#define MLIn_TPmAOFR_AOFF_MASK          0x0000ffff
#define MLIn_TPmAOFR_AOFF_SHIFT         0



/****************** Masks for MLIn_TPmBAR_t **********************/
/*
   MLI0_TP0BAR           "Transmitter Pipe 0 Base Address Register"
   MLI0_TP1BAR           "Transmitter Pipe 1 Base Address Register"
   MLI0_TP2BAR           "Transmitter Pipe 2 Base Address Register"
   MLI0_TP3BAR           "Transmitter Pipe 3 Base Address Register"
   MLI1_TP0BAR           "Transmitter Pipe 0 Base Address Register"
   MLI1_TP1BAR           "Transmitter Pipe 1 Base Address Register"
   MLI1_TP2BAR           "Transmitter Pipe 2 Base Address Register"
   MLI1_TP3BAR           "Transmitter Pipe 3 Base Address Register"
*/
/**********************************************************/

#define MLIn_TPmBAR_MASK                0xffffffff
#define MLIn_TPmBAR_BS_MASK             0x0000000f
#define MLIn_TPmBAR_BS_SHIFT            0
#define MLIn_TPmBAR_ADDR_MASK           0xfffffff0
#define MLIn_TPmBAR_ADDR_SHIFT          4



/****************** Masks for MLIn_TPmDATAR_t **********************/
/*
   MLI0_TP0DATAR         "Transmitter Pipe 0 Data Register"
   MLI0_TP1DATAR         "Transmitter Pipe 1 Data Register"
   MLI0_TP2DATAR         "Transmitter Pipe 2 Data Register"
   MLI0_TP3DATAR         "Transmitter Pipe 3 Data Register"
   MLI1_TP0DATAR         "Transmitter Pipe 0 Data Register"
   MLI1_TP1DATAR         "Transmitter Pipe 1 Data Register"
   MLI1_TP2DATAR         "Transmitter Pipe 2 Data Register"
   MLI1_TP3DATAR         "Transmitter Pipe 3 Data Register"
*/
/**********************************************************/

#define MLIn_TPmDATAR_MASK              0xffffffff
#define MLIn_TPmDATAR_DATA_MASK         0xffffffff
#define MLIn_TPmDATAR_DATA_SHIFT        0



/****************** Masks for MLIn_TPmSTATR_t **********************/
/*
   MLI0_TP0STATR         "Transmitter Pipe 0 Status Register"
   MLI0_TP1STATR         "Transmitter Pipe 1 Status Register"
   MLI0_TP2STATR         "Transmitter Pipe 2 Status Register"
   MLI0_TP3STATR         "Transmitter Pipe 3 Status Register"
   MLI1_TP0STATR         "Transmitter Pipe 0 Status Register"
   MLI1_TP1STATR         "Transmitter Pipe 1 Status Register"
   MLI1_TP2STATR         "Transmitter Pipe 2 Status Register"
   MLI1_TP3STATR         "Transmitter Pipe 3 Status Register"
*/
/**********************************************************/

#define MLIn_TPmSTATR_MASK              0x0001ffff
#define MLIn_TPmSTATR_BS_MASK           0x0000000f
#define MLIn_TPmSTATR_BS_SHIFT          0
#define MLIn_TPmSTATR_DW_MASK           0x00000030
#define MLIn_TPmSTATR_DW_SHIFT          4
#define MLIn_TPmSTATR_AP_MASK           0x0000ffc0
#define MLIn_TPmSTATR_AP_SHIFT          6
#define MLIn_TPmSTATR_OP_MASK           0x00010000
#define MLIn_TPmSTATR_OP_SHIFT          16



/****************** Masks for MLIn_TRSTATR_t **********************/
/*
   MLI0_TRSTATR          "Transmitter Registers Status Register"
   MLI1_TRSTATR          "Transmitter Registers Status Register"
*/
/**********************************************************/

#define MLIn_TRSTATR_MASK               0x03ff03ff
#define MLIn_TRSTATR_CIV0_MASK          0x00000001
#define MLIn_TRSTATR_CIV0_SHIFT         0
#define MLIn_TRSTATR_CIV1_MASK          0x00000002
#define MLIn_TRSTATR_CIV1_SHIFT         1
#define MLIn_TRSTATR_CIV2_MASK          0x00000004
#define MLIn_TRSTATR_CIV2_SHIFT         2
#define MLIn_TRSTATR_CIV3_MASK          0x00000008
#define MLIn_TRSTATR_CIV3_SHIFT         3
#define MLIn_TRSTATR_CV0_MASK           0x00000010
#define MLIn_TRSTATR_CV0_SHIFT          4
#define MLIn_TRSTATR_CV1_MASK           0x00000020
#define MLIn_TRSTATR_CV1_SHIFT          5
#define MLIn_TRSTATR_CV2_MASK           0x00000040
#define MLIn_TRSTATR_CV2_SHIFT          6
#define MLIn_TRSTATR_CV3_MASK           0x00000080
#define MLIn_TRSTATR_CV3_SHIFT          7
#define MLIn_TRSTATR_AV_MASK            0x00000100
#define MLIn_TRSTATR_AV_SHIFT           8
#define MLIn_TRSTATR_BAV_MASK           0x00000200
#define MLIn_TRSTATR_BAV_SHIFT          9
#define MLIn_TRSTATR_DV0_MASK           0x00010000
#define MLIn_TRSTATR_DV0_SHIFT          16
#define MLIn_TRSTATR_DV1_MASK           0x00020000
#define MLIn_TRSTATR_DV1_SHIFT          17
#define MLIn_TRSTATR_DV2_MASK           0x00040000
#define MLIn_TRSTATR_DV2_SHIFT          18
#define MLIn_TRSTATR_DV3_MASK           0x00080000
#define MLIn_TRSTATR_DV3_SHIFT          19
#define MLIn_TRSTATR_RP0_MASK           0x00100000
#define MLIn_TRSTATR_RP0_SHIFT          20
#define MLIn_TRSTATR_RP1_MASK           0x00200000
#define MLIn_TRSTATR_RP1_SHIFT          21
#define MLIn_TRSTATR_RP2_MASK           0x00400000
#define MLIn_TRSTATR_RP2_SHIFT          22
#define MLIn_TRSTATR_RP3_MASK           0x00800000
#define MLIn_TRSTATR_RP3_SHIFT          23
#define MLIn_TRSTATR_PN_MASK            0x03000000
#define MLIn_TRSTATR_PN_SHIFT           24



/****************** Masks for MLIn_TSTATR_t **********************/
/*
   MLI0_TSTATR           "Transmitter Status Register"
   MLI1_TSTATR           "Transmitter Status Register"
*/
/**********************************************************/

#define MLIn_TSTATR_MASK                0x000001ff
#define MLIn_TSTATR_RDC_MASK            0x0000001f
#define MLIn_TSTATR_RDC_SHIFT           0
#define MLIn_TSTATR_APN_MASK            0x00000060
#define MLIn_TSTATR_APN_SHIFT           5
#define MLIn_TSTATR_PE_MASK             0x00000080
#define MLIn_TSTATR_PE_SHIFT            7
#define MLIn_TSTATR_NAE_MASK            0x00000100
#define MLIn_TSTATR_NAE_SHIFT           8




#endif /* _HAVE_TRICORE_MLI0_MLI1_SHAREMASKS_H_ */

