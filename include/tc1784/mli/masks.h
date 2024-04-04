/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MLI_MASKS_H_
#define _HAVE_TRICORE_MLI_MASKS_H_


/****************** Masks for MLI0_AER_t **********************/
/*
   MLI0_AER              "Access Enable Register"
*/
/**********************************************************/

#define MLI0_AER_MASK                   0xffffffff
#define MLI0_AER_AEN0_MASK              0x00000001
#define MLI0_AER_AEN0_SHIFT             0
#define MLI0_AER_AEN1_MASK              0x00000002
#define MLI0_AER_AEN1_SHIFT             1
#define MLI0_AER_AEN2_MASK              0x00000004
#define MLI0_AER_AEN2_SHIFT             2
#define MLI0_AER_AEN3_MASK              0x00000008
#define MLI0_AER_AEN3_SHIFT             3
#define MLI0_AER_AEN4_MASK              0x00000010
#define MLI0_AER_AEN4_SHIFT             4
#define MLI0_AER_AEN5_MASK              0x00000020
#define MLI0_AER_AEN5_SHIFT             5
#define MLI0_AER_AEN6_MASK              0x00000040
#define MLI0_AER_AEN6_SHIFT             6
#define MLI0_AER_AEN7_MASK              0x00000080
#define MLI0_AER_AEN7_SHIFT             7
#define MLI0_AER_AEN8_MASK              0x00000100
#define MLI0_AER_AEN8_SHIFT             8
#define MLI0_AER_AEN9_MASK              0x00000200
#define MLI0_AER_AEN9_SHIFT             9
#define MLI0_AER_AEN10_MASK             0x00000400
#define MLI0_AER_AEN10_SHIFT            10
#define MLI0_AER_AEN11_MASK             0x00000800
#define MLI0_AER_AEN11_SHIFT            11
#define MLI0_AER_AEN12_MASK             0x00001000
#define MLI0_AER_AEN12_SHIFT            12
#define MLI0_AER_AEN13_MASK             0x00002000
#define MLI0_AER_AEN13_SHIFT            13
#define MLI0_AER_AEN14_MASK             0x00004000
#define MLI0_AER_AEN14_SHIFT            14
#define MLI0_AER_AEN15_MASK             0x00008000
#define MLI0_AER_AEN15_SHIFT            15
#define MLI0_AER_AEN16_MASK             0x00010000
#define MLI0_AER_AEN16_SHIFT            16
#define MLI0_AER_AEN17_MASK             0x00020000
#define MLI0_AER_AEN17_SHIFT            17
#define MLI0_AER_AEN18_MASK             0x00040000
#define MLI0_AER_AEN18_SHIFT            18
#define MLI0_AER_AEN19_MASK             0x00080000
#define MLI0_AER_AEN19_SHIFT            19
#define MLI0_AER_AEN20_MASK             0x00100000
#define MLI0_AER_AEN20_SHIFT            20
#define MLI0_AER_AEN21_MASK             0x00200000
#define MLI0_AER_AEN21_SHIFT            21
#define MLI0_AER_AEN22_MASK             0x00400000
#define MLI0_AER_AEN22_SHIFT            22
#define MLI0_AER_AEN23_MASK             0x00800000
#define MLI0_AER_AEN23_SHIFT            23
#define MLI0_AER_AEN24_MASK             0x01000000
#define MLI0_AER_AEN24_SHIFT            24
#define MLI0_AER_AEN25_MASK             0x02000000
#define MLI0_AER_AEN25_SHIFT            25
#define MLI0_AER_AEN26_MASK             0x04000000
#define MLI0_AER_AEN26_SHIFT            26
#define MLI0_AER_AEN27_MASK             0x08000000
#define MLI0_AER_AEN27_SHIFT            27
#define MLI0_AER_AEN28_MASK             0x10000000
#define MLI0_AER_AEN28_SHIFT            28
#define MLI0_AER_AEN29_MASK             0x20000000
#define MLI0_AER_AEN29_SHIFT            29
#define MLI0_AER_AEN30_MASK             0x40000000
#define MLI0_AER_AEN30_SHIFT            30
#define MLI0_AER_AEN31_MASK             0x80000000
#define MLI0_AER_AEN31_SHIFT            31



/****************** Masks for MLI0_ARR_t **********************/
/*
   MLI0_ARR              "Access Range Register"
*/
/**********************************************************/

#define MLI0_ARR_MASK                   0xffffffff
#define MLI0_ARR_SLICE0_MASK            0x0000001f
#define MLI0_ARR_SLICE0_SHIFT           0
#define MLI0_ARR_SIZE0_MASK             0x000000e0
#define MLI0_ARR_SIZE0_SHIFT            5
#define MLI0_ARR_SLICE1_MASK            0x00001f00
#define MLI0_ARR_SLICE1_SHIFT           8
#define MLI0_ARR_SIZE1_MASK             0x0000e000
#define MLI0_ARR_SIZE1_SHIFT            13
#define MLI0_ARR_SLICE2_MASK            0x001f0000
#define MLI0_ARR_SLICE2_SHIFT           16
#define MLI0_ARR_SIZE2_MASK             0x00e00000
#define MLI0_ARR_SIZE2_SHIFT            21
#define MLI0_ARR_SLICE3_MASK            0x1f000000
#define MLI0_ARR_SLICE3_SHIFT           24
#define MLI0_ARR_SIZE3_MASK             0xe0000000
#define MLI0_ARR_SIZE3_SHIFT            29



/****************** Masks for MLI0_FDR_t **********************/
/*
   MLI0_FDR              "Fractional Divider Register"
*/
/**********************************************************/

#define MLI0_FDR_MASK                   0xf3fffbff
#define MLI0_FDR_STEP_MASK              0x000003ff
#define MLI0_FDR_STEP_SHIFT             0
#define MLI0_FDR_SM_MASK                0x00000800
#define MLI0_FDR_SM_SHIFT               11
#define MLI0_FDR_SC_MASK                0x00003000
#define MLI0_FDR_SC_SHIFT               12
#define MLI0_FDR_DM_MASK                0x0000c000
#define MLI0_FDR_DM_SHIFT               14
#define MLI0_FDR_RESULT_MASK            0x03ff0000
#define MLI0_FDR_RESULT_SHIFT           16
#define MLI0_FDR_SUSACK_MASK            0x10000000
#define MLI0_FDR_SUSACK_SHIFT           28
#define MLI0_FDR_SUSREQ_MASK            0x20000000
#define MLI0_FDR_SUSREQ_SHIFT           29
#define MLI0_FDR_ENHW_MASK              0x40000000
#define MLI0_FDR_ENHW_SHIFT             30
#define MLI0_FDR_DISCLK_MASK            0x80000000
#define MLI0_FDR_DISCLK_SHIFT           31



/****************** Masks for MLI0_GINTR_t **********************/
/*
   MLI0_GINTR            "Global Interrupt Set Register"
*/
/**********************************************************/

#define MLI0_GINTR_MASK                 0x000000ff
#define MLI0_GINTR_SIMLI0_MASK          0x00000001
#define MLI0_GINTR_SIMLI0_SHIFT         0
#define MLI0_GINTR_SIMLI1_MASK          0x00000002
#define MLI0_GINTR_SIMLI1_SHIFT         1
#define MLI0_GINTR_SIMLI2_MASK          0x00000004
#define MLI0_GINTR_SIMLI2_SHIFT         2
#define MLI0_GINTR_SIMLI3_MASK          0x00000008
#define MLI0_GINTR_SIMLI3_SHIFT         3
#define MLI0_GINTR_SIMLI4_MASK          0x00000010
#define MLI0_GINTR_SIMLI4_SHIFT         4
#define MLI0_GINTR_SIMLI5_MASK          0x00000020
#define MLI0_GINTR_SIMLI5_SHIFT         5
#define MLI0_GINTR_SIMLI6_MASK          0x00000040
#define MLI0_GINTR_SIMLI6_SHIFT         6
#define MLI0_GINTR_SIMLI7_MASK          0x00000080
#define MLI0_GINTR_SIMLI7_SHIFT         7



/****************** Masks for MLI0_ID_t **********************/
/*
   MLI0_ID               "Module Identification Register"
*/
/**********************************************************/

#define MLI0_ID_MASK                    0xffffffff
#define MLI0_ID_MODREV_MASK             0x000000ff
#define MLI0_ID_MODREV_SHIFT            0
#define MLI0_ID_MODTYPE_MASK            0x0000ff00
#define MLI0_ID_MODTYPE_SHIFT           8
#define MLI0_ID_MODNUM_MASK             0xffff0000
#define MLI0_ID_MODNUM_SHIFT            16



/****************** Masks for MLI0_OICR_t **********************/
/*
   MLI0_OICR             "Output Input Control Register"
*/
/**********************************************************/

#define MLI0_OICR_MASK                  0xffffffff
#define MLI0_OICR_TVEA_MASK             0x00000001
#define MLI0_OICR_TVEA_SHIFT            0
#define MLI0_OICR_TVEB_MASK             0x00000002
#define MLI0_OICR_TVEB_SHIFT            1
#define MLI0_OICR_TVEC_MASK             0x00000004
#define MLI0_OICR_TVEC_SHIFT            2
#define MLI0_OICR_TVED_MASK             0x00000008
#define MLI0_OICR_TVED_SHIFT            3
#define MLI0_OICR_TVPA_MASK             0x00000010
#define MLI0_OICR_TVPA_SHIFT            4
#define MLI0_OICR_TVPB_MASK             0x00000020
#define MLI0_OICR_TVPB_SHIFT            5
#define MLI0_OICR_TVPC_MASK             0x00000040
#define MLI0_OICR_TVPC_SHIFT            6
#define MLI0_OICR_TVPD_MASK             0x00000080
#define MLI0_OICR_TVPD_SHIFT            7
#define MLI0_OICR_TRS_MASK              0x00000300
#define MLI0_OICR_TRS_SHIFT             8
#define MLI0_OICR_TRP_MASK              0x00000400
#define MLI0_OICR_TRP_SHIFT             10
#define MLI0_OICR_TRE_MASK              0x00000800
#define MLI0_OICR_TRE_SHIFT             11
#define MLI0_OICR_TCE_MASK              0x00001000
#define MLI0_OICR_TCE_SHIFT             12
#define MLI0_OICR_TCP_MASK              0x00002000
#define MLI0_OICR_TCP_SHIFT             13
#define MLI0_OICR_TDP_MASK              0x00004000
#define MLI0_OICR_TDP_SHIFT             14
#define MLI0_OICR_RVE_MASK              0x00008000
#define MLI0_OICR_RVE_SHIFT             15
#define MLI0_OICR_RRS_MASK              0x00030000
#define MLI0_OICR_RRS_SHIFT             16
#define MLI0_OICR_RRPA_MASK             0x00040000
#define MLI0_OICR_RRPA_SHIFT            18
#define MLI0_OICR_RRPB_MASK             0x00080000
#define MLI0_OICR_RRPB_SHIFT            19
#define MLI0_OICR_RRPC_MASK             0x00100000
#define MLI0_OICR_RRPC_SHIFT            20
#define MLI0_OICR_RRPD_MASK             0x00200000
#define MLI0_OICR_RRPD_SHIFT            21
#define MLI0_OICR_RVS_MASK              0x00c00000
#define MLI0_OICR_RVS_SHIFT             22
#define MLI0_OICR_RVP_MASK              0x01000000
#define MLI0_OICR_RVP_SHIFT             24
#define MLI0_OICR_RCS_MASK              0x06000000
#define MLI0_OICR_RCS_SHIFT             25
#define MLI0_OICR_RCP_MASK              0x08000000
#define MLI0_OICR_RCP_SHIFT             27
#define MLI0_OICR_RCE_MASK              0x10000000
#define MLI0_OICR_RCE_SHIFT             28
#define MLI0_OICR_RDS_MASK              0x60000000
#define MLI0_OICR_RDS_SHIFT             29
#define MLI0_OICR_RDP_MASK              0x80000000
#define MLI0_OICR_RDP_SHIFT             31



/****************** Masks for MLI0_RADRR_t **********************/
/*
   MLI0_RADRR            "Receiver Address Register"
*/
/**********************************************************/

#define MLI0_RADRR_MASK                 0xffffffff
#define MLI0_RADRR_ADDR_MASK            0xffffffff
#define MLI0_RADRR_ADDR_SHIFT           0



/****************** Masks for MLI0_RCR_t **********************/
/*
   MLI0_RCR              "Receiver Control Register"
*/
/**********************************************************/

#define MLI0_RCR_MASK                   0x011fffff
#define MLI0_RCR_DPE_MASK               0x0000000f
#define MLI0_RCR_DPE_SHIFT              0
#define MLI0_RCR_CMDP3_MASK             0x000000f0
#define MLI0_RCR_CMDP3_SHIFT            4
#define MLI0_RCR_MOD_MASK               0x00000100
#define MLI0_RCR_MOD_SHIFT              8
#define MLI0_RCR_DW_MASK                0x00000600
#define MLI0_RCR_DW_SHIFT               9
#define MLI0_RCR_TF_MASK                0x00001800
#define MLI0_RCR_TF_SHIFT               11
#define MLI0_RCR_PE_MASK                0x00002000
#define MLI0_RCR_PE_SHIFT               13
#define MLI0_RCR_RPN_MASK               0x0000c000
#define MLI0_RCR_RPN_SHIFT              14
#define MLI0_RCR_MPE_MASK               0x000f0000
#define MLI0_RCR_MPE_SHIFT              16
#define MLI0_RCR_BEN_MASK               0x00100000
#define MLI0_RCR_BEN_SHIFT              20
#define MLI0_RCR_RCVRST_MASK            0x01000000
#define MLI0_RCR_RCVRST_SHIFT           24



/****************** Masks for MLI0_RDATAR_t **********************/
/*
   MLI0_RDATAR           "Receiver Data Register"
*/
/**********************************************************/

#define MLI0_RDATAR_MASK                0xffffffff
#define MLI0_RDATAR_DATA_MASK           0xffffffff
#define MLI0_RDATAR_DATA_SHIFT          0



/****************** Masks for MLI0_RIER_t **********************/
/*
   MLI0_RIER             "Receiver Interrupt Enable Register"
*/
/**********************************************************/

#define MLI0_RIER_MASK                  0x03ff03ff
#define MLI0_RIER_NFRIE_MASK            0x00000003
#define MLI0_RIER_NFRIE_SHIFT           0
#define MLI0_RIER_CFRIE0_MASK           0x00000004
#define MLI0_RIER_CFRIE0_SHIFT          2
#define MLI0_RIER_CFRIE1_MASK           0x00000008
#define MLI0_RIER_CFRIE1_SHIFT          3
#define MLI0_RIER_CFRIE2_MASK           0x00000010
#define MLI0_RIER_CFRIE2_SHIFT          4
#define MLI0_RIER_CFRIE3_MASK           0x00000020
#define MLI0_RIER_CFRIE3_SHIFT          5
#define MLI0_RIER_ICE_MASK              0x00000040
#define MLI0_RIER_ICE_SHIFT             6
#define MLI0_RIER_PEIE_MASK             0x00000080
#define MLI0_RIER_PEIE_SHIFT            7
#define MLI0_RIER_MPEIE_MASK            0x00000100
#define MLI0_RIER_MPEIE_SHIFT           8
#define MLI0_RIER_DRAIE_MASK            0x00000200
#define MLI0_RIER_DRAIE_SHIFT           9
#define MLI0_RIER_NFRIR_MASK            0x00010000
#define MLI0_RIER_NFRIR_SHIFT           16
#define MLI0_RIER_MEIR_MASK             0x00020000
#define MLI0_RIER_MEIR_SHIFT            17
#define MLI0_RIER_CFRIR0_MASK           0x00040000
#define MLI0_RIER_CFRIR0_SHIFT          18
#define MLI0_RIER_CFRIR1_MASK           0x00080000
#define MLI0_RIER_CFRIR1_SHIFT          19
#define MLI0_RIER_CFRIR2_MASK           0x00100000
#define MLI0_RIER_CFRIR2_SHIFT          20
#define MLI0_RIER_CFRIR3_MASK           0x00200000
#define MLI0_RIER_CFRIR3_SHIFT          21
#define MLI0_RIER_ICER_MASK             0x00400000
#define MLI0_RIER_ICER_SHIFT            22
#define MLI0_RIER_PEIR_MASK             0x00800000
#define MLI0_RIER_PEIR_SHIFT            23
#define MLI0_RIER_MPEIR_MASK            0x01000000
#define MLI0_RIER_MPEIR_SHIFT           24
#define MLI0_RIER_DRAIR_MASK            0x02000000
#define MLI0_RIER_DRAIR_SHIFT           25



/****************** Masks for MLI0_RINPR_t **********************/
/*
   MLI0_RINPR            "Receiver Interrupt Node Pointer Register"
*/
/**********************************************************/

#define MLI0_RINPR_MASK                 0x00007777
#define MLI0_RINPR_NFRIP_MASK           0x00000007
#define MLI0_RINPR_NFRIP_SHIFT          0
#define MLI0_RINPR_CFRIP_MASK           0x00000070
#define MLI0_RINPR_CFRIP_SHIFT          4
#define MLI0_RINPR_MPPEIP_MASK          0x00000700
#define MLI0_RINPR_MPPEIP_SHIFT         8
#define MLI0_RINPR_DRAIP_MASK           0x00007000
#define MLI0_RINPR_DRAIP_SHIFT          12



/****************** Masks for MLI0_RISR_t **********************/
/*
   MLI0_RISR             "Receiver Interrupt Status Register"
*/
/**********************************************************/

#define MLI0_RISR_MASK                  0x000003ff
#define MLI0_RISR_NFRI_MASK             0x00000001
#define MLI0_RISR_NFRI_SHIFT            0
#define MLI0_RISR_MEI_MASK              0x00000002
#define MLI0_RISR_MEI_SHIFT             1
#define MLI0_RISR_CFRI0_MASK            0x00000004
#define MLI0_RISR_CFRI0_SHIFT           2
#define MLI0_RISR_CFRI1_MASK            0x00000008
#define MLI0_RISR_CFRI1_SHIFT           3
#define MLI0_RISR_CFRI2_MASK            0x00000010
#define MLI0_RISR_CFRI2_SHIFT           4
#define MLI0_RISR_CFRI3_MASK            0x00000020
#define MLI0_RISR_CFRI3_SHIFT           5
#define MLI0_RISR_IC_MASK               0x00000040
#define MLI0_RISR_IC_SHIFT              6
#define MLI0_RISR_PEI_MASK              0x00000080
#define MLI0_RISR_PEI_SHIFT             7
#define MLI0_RISR_MPEI_MASK             0x00000100
#define MLI0_RISR_MPEI_SHIFT            8
#define MLI0_RISR_DRAI_MASK             0x00000200
#define MLI0_RISR_DRAI_SHIFT            9



/****************** Masks for MLI0_SCR_t **********************/
/*
   MLI0_SCR              "Set Clear Register"
*/
/**********************************************************/

#define MLI0_SCR_MASK                   0xff03ff1f
#define MLI0_SCR_SCV0_MASK              0x00000001
#define MLI0_SCR_SCV0_SHIFT             0
#define MLI0_SCR_SCV1_MASK              0x00000002
#define MLI0_SCR_SCV1_SHIFT             1
#define MLI0_SCR_SCV2_MASK              0x00000004
#define MLI0_SCR_SCV2_SHIFT             2
#define MLI0_SCR_SCV3_MASK              0x00000008
#define MLI0_SCR_SCV3_SHIFT             3
#define MLI0_SCR_SMOD_MASK              0x00000010
#define MLI0_SCR_SMOD_SHIFT             4
#define MLI0_SCR_CDV0_MASK              0x00000100
#define MLI0_SCR_CDV0_SHIFT             8
#define MLI0_SCR_CDV1_MASK              0x00000200
#define MLI0_SCR_CDV1_SHIFT             9
#define MLI0_SCR_CDV2_MASK              0x00000400
#define MLI0_SCR_CDV2_SHIFT             10
#define MLI0_SCR_CDV3_MASK              0x00000800
#define MLI0_SCR_CDV3_SHIFT             11
#define MLI0_SCR_CCV0_MASK              0x00001000
#define MLI0_SCR_CCV0_SHIFT             12
#define MLI0_SCR_CCV1_MASK              0x00002000
#define MLI0_SCR_CCV1_SHIFT             13
#define MLI0_SCR_CCV2_MASK              0x00004000
#define MLI0_SCR_CCV2_SHIFT             14
#define MLI0_SCR_CCV3_MASK              0x00008000
#define MLI0_SCR_CCV3_SHIFT             15
#define MLI0_SCR_CMOD_MASK              0x00010000
#define MLI0_SCR_CMOD_SHIFT             16
#define MLI0_SCR_CBAV_MASK              0x00020000
#define MLI0_SCR_CBAV_SHIFT             17
#define MLI0_SCR_CAV_MASK               0x01000000
#define MLI0_SCR_CAV_SHIFT              24
#define MLI0_SCR_CRPE_MASK              0x02000000
#define MLI0_SCR_CRPE_SHIFT             25
#define MLI0_SCR_CTPE_MASK              0x04000000
#define MLI0_SCR_CTPE_SHIFT             26
#define MLI0_SCR_CNAE_MASK              0x08000000
#define MLI0_SCR_CNAE_SHIFT             27
#define MLI0_SCR_CCIV0_MASK             0x10000000
#define MLI0_SCR_CCIV0_SHIFT            28
#define MLI0_SCR_CCIV1_MASK             0x20000000
#define MLI0_SCR_CCIV1_SHIFT            29
#define MLI0_SCR_CCIV2_MASK             0x40000000
#define MLI0_SCR_CCIV2_SHIFT            30
#define MLI0_SCR_CCIV3_MASK             0x80000000
#define MLI0_SCR_CCIV3_SHIFT            31



/****************** Masks for MLI0_TCBAR_t **********************/
/*
   MLI0_TCBAR            "Transmitter Copy Base Address Register"
*/
/**********************************************************/

#define MLI0_TCBAR_MASK                 0xfffffff0
#define MLI0_TCBAR_ADDR_MASK            0xfffffff0
#define MLI0_TCBAR_ADDR_SHIFT           4



/****************** Masks for MLI0_TCMDR_t **********************/
/*
   MLI0_TCMDR            "Transmitter Command Register"
*/
/**********************************************************/

#define MLI0_TCMDR_MASK                 0x0f0f0f0f
#define MLI0_TCMDR_CMDP0_MASK           0x0000000f
#define MLI0_TCMDR_CMDP0_SHIFT          0
#define MLI0_TCMDR_CMDP1_MASK           0x00000f00
#define MLI0_TCMDR_CMDP1_SHIFT          8
#define MLI0_TCMDR_CMDP2_MASK           0x000f0000
#define MLI0_TCMDR_CMDP2_SHIFT          16
#define MLI0_TCMDR_CMDP3_MASK           0x0f000000
#define MLI0_TCMDR_CMDP3_SHIFT          24



/****************** Masks for MLI0_TCR_t **********************/
/*
   MLI0_TCR              "Transmitter Control Register"
*/
/**********************************************************/

#define MLI0_TCR_MASK                   0x000ffff3
#define MLI0_TCR_MOD_MASK               0x00000001
#define MLI0_TCR_MOD_SHIFT              0
#define MLI0_TCR_DNT_MASK               0x00000002
#define MLI0_TCR_DNT_SHIFT              1
#define MLI0_TCR_MPE_MASK               0x000000f0
#define MLI0_TCR_MPE_SHIFT              4
#define MLI0_TCR_MNAE_MASK              0x00000300
#define MLI0_TCR_MNAE_SHIFT             8
#define MLI0_TCR_MDP_MASK               0x00003c00
#define MLI0_TCR_MDP_SHIFT              10
#define MLI0_TCR_NO_MASK                0x00004000
#define MLI0_TCR_NO_SHIFT               14
#define MLI0_TCR_TP_MASK                0x00008000
#define MLI0_TCR_TP_SHIFT               15
#define MLI0_TCR_TDEL_MASK              0x000f0000
#define MLI0_TCR_TDEL_SHIFT             16



/****************** Masks for MLI0_TDRAR_t **********************/
/*
   MLI0_TDRAR            "Transmitter Data Read Answer Register"
*/
/**********************************************************/

#define MLI0_TDRAR_MASK                 0xffffffff
#define MLI0_TDRAR_DATA_MASK            0xffffffff
#define MLI0_TDRAR_DATA_SHIFT           0



/****************** Masks for MLI0_TIER_t **********************/
/*
   MLI0_TIER             "Transmitter Interrupt Enable Register"
*/
/**********************************************************/

#define MLI0_TIER_MASK                  0x03ff03ff
#define MLI0_TIER_NFSIE0_MASK           0x00000001
#define MLI0_TIER_NFSIE0_SHIFT          0
#define MLI0_TIER_NFSIE1_MASK           0x00000002
#define MLI0_TIER_NFSIE1_SHIFT          1
#define MLI0_TIER_NFSIE2_MASK           0x00000004
#define MLI0_TIER_NFSIE2_SHIFT          2
#define MLI0_TIER_NFSIE3_MASK           0x00000008
#define MLI0_TIER_NFSIE3_SHIFT          3
#define MLI0_TIER_CFSIE0_MASK           0x00000010
#define MLI0_TIER_CFSIE0_SHIFT          4
#define MLI0_TIER_CFSIE1_MASK           0x00000020
#define MLI0_TIER_CFSIE1_SHIFT          5
#define MLI0_TIER_CFSIE2_MASK           0x00000040
#define MLI0_TIER_CFSIE2_SHIFT          6
#define MLI0_TIER_CFSIE3_MASK           0x00000080
#define MLI0_TIER_CFSIE3_SHIFT          7
#define MLI0_TIER_PEIE_MASK             0x00000100
#define MLI0_TIER_PEIE_SHIFT            8
#define MLI0_TIER_TEIE_MASK             0x00000200
#define MLI0_TIER_TEIE_SHIFT            9
#define MLI0_TIER_NFSIR0_MASK           0x00010000
#define MLI0_TIER_NFSIR0_SHIFT          16
#define MLI0_TIER_NFSIR1_MASK           0x00020000
#define MLI0_TIER_NFSIR1_SHIFT          17
#define MLI0_TIER_NFSIR2_MASK           0x00040000
#define MLI0_TIER_NFSIR2_SHIFT          18
#define MLI0_TIER_NFSIR3_MASK           0x00080000
#define MLI0_TIER_NFSIR3_SHIFT          19
#define MLI0_TIER_CFSIR0_MASK           0x00100000
#define MLI0_TIER_CFSIR0_SHIFT          20
#define MLI0_TIER_CFSIR1_MASK           0x00200000
#define MLI0_TIER_CFSIR1_SHIFT          21
#define MLI0_TIER_CFSIR2_MASK           0x00400000
#define MLI0_TIER_CFSIR2_SHIFT          22
#define MLI0_TIER_CFSIR3_MASK           0x00800000
#define MLI0_TIER_CFSIR3_SHIFT          23
#define MLI0_TIER_PEIR_MASK             0x01000000
#define MLI0_TIER_PEIR_SHIFT            24
#define MLI0_TIER_TEIR_MASK             0x02000000
#define MLI0_TIER_TEIR_SHIFT            25



/****************** Masks for MLI0_TINPR_t **********************/
/*
   MLI0_TINPR            "Transmitter Interrupt Node Pointer Register"
*/
/**********************************************************/

#define MLI0_TINPR_MASK                 0x00777777
#define MLI0_TINPR_NFSIP0_MASK          0x00000007
#define MLI0_TINPR_NFSIP0_SHIFT         0
#define MLI0_TINPR_NFSIP1_MASK          0x00000070
#define MLI0_TINPR_NFSIP1_SHIFT         4
#define MLI0_TINPR_NFSIP2_MASK          0x00000700
#define MLI0_TINPR_NFSIP2_SHIFT         8
#define MLI0_TINPR_NFSIP3_MASK          0x00007000
#define MLI0_TINPR_NFSIP3_SHIFT         12
#define MLI0_TINPR_CFSIP_MASK           0x00070000
#define MLI0_TINPR_CFSIP_SHIFT          16
#define MLI0_TINPR_PTEIP_MASK           0x00700000
#define MLI0_TINPR_PTEIP_SHIFT          20



/****************** Masks for MLI0_TISR_t **********************/
/*
   MLI0_TISR             "Transmitter Interrupt Status Register"
*/
/**********************************************************/

#define MLI0_TISR_MASK                  0x000003ff
#define MLI0_TISR_NFSI0_MASK            0x00000001
#define MLI0_TISR_NFSI0_SHIFT           0
#define MLI0_TISR_NFSI1_MASK            0x00000002
#define MLI0_TISR_NFSI1_SHIFT           1
#define MLI0_TISR_NFSI2_MASK            0x00000004
#define MLI0_TISR_NFSI2_SHIFT           2
#define MLI0_TISR_NFSI3_MASK            0x00000008
#define MLI0_TISR_NFSI3_SHIFT           3
#define MLI0_TISR_CFSI0_MASK            0x00000010
#define MLI0_TISR_CFSI0_SHIFT           4
#define MLI0_TISR_CFSI1_MASK            0x00000020
#define MLI0_TISR_CFSI1_SHIFT           5
#define MLI0_TISR_CFSI2_MASK            0x00000040
#define MLI0_TISR_CFSI2_SHIFT           6
#define MLI0_TISR_CFSI3_MASK            0x00000080
#define MLI0_TISR_CFSI3_SHIFT           7
#define MLI0_TISR_PEI_MASK              0x00000100
#define MLI0_TISR_PEI_SHIFT             8
#define MLI0_TISR_TEI_MASK              0x00000200
#define MLI0_TISR_TEI_SHIFT             9



/****************** Masks for MLI0_TRSTATR_t **********************/
/*
   MLI0_TRSTATR          "Transmitter Receiver Status Register"
*/
/**********************************************************/

#define MLI0_TRSTATR_MASK               0x03ff03ff
#define MLI0_TRSTATR_CIV0_MASK          0x00000001
#define MLI0_TRSTATR_CIV0_SHIFT         0
#define MLI0_TRSTATR_CIV1_MASK          0x00000002
#define MLI0_TRSTATR_CIV1_SHIFT         1
#define MLI0_TRSTATR_CIV2_MASK          0x00000004
#define MLI0_TRSTATR_CIV2_SHIFT         2
#define MLI0_TRSTATR_CIV3_MASK          0x00000008
#define MLI0_TRSTATR_CIV3_SHIFT         3
#define MLI0_TRSTATR_CV0_MASK           0x00000010
#define MLI0_TRSTATR_CV0_SHIFT          4
#define MLI0_TRSTATR_CV1_MASK           0x00000020
#define MLI0_TRSTATR_CV1_SHIFT          5
#define MLI0_TRSTATR_CV2_MASK           0x00000040
#define MLI0_TRSTATR_CV2_SHIFT          6
#define MLI0_TRSTATR_CV3_MASK           0x00000080
#define MLI0_TRSTATR_CV3_SHIFT          7
#define MLI0_TRSTATR_AV_MASK            0x00000100
#define MLI0_TRSTATR_AV_SHIFT           8
#define MLI0_TRSTATR_BAV_MASK           0x00000200
#define MLI0_TRSTATR_BAV_SHIFT          9
#define MLI0_TRSTATR_DV0_MASK           0x00010000
#define MLI0_TRSTATR_DV0_SHIFT          16
#define MLI0_TRSTATR_DV1_MASK           0x00020000
#define MLI0_TRSTATR_DV1_SHIFT          17
#define MLI0_TRSTATR_DV2_MASK           0x00040000
#define MLI0_TRSTATR_DV2_SHIFT          18
#define MLI0_TRSTATR_DV3_MASK           0x00080000
#define MLI0_TRSTATR_DV3_SHIFT          19
#define MLI0_TRSTATR_RP0_MASK           0x00100000
#define MLI0_TRSTATR_RP0_SHIFT          20
#define MLI0_TRSTATR_RP1_MASK           0x00200000
#define MLI0_TRSTATR_RP1_SHIFT          21
#define MLI0_TRSTATR_RP2_MASK           0x00400000
#define MLI0_TRSTATR_RP2_SHIFT          22
#define MLI0_TRSTATR_RP3_MASK           0x00800000
#define MLI0_TRSTATR_RP3_SHIFT          23
#define MLI0_TRSTATR_PN_MASK            0x03000000
#define MLI0_TRSTATR_PN_SHIFT           24



/****************** Masks for MLI0_TSTATR_t **********************/
/*
   MLI0_TSTATR           "Transmitter Status Register"
*/
/**********************************************************/

#define MLI0_TSTATR_MASK                0x000001ff
#define MLI0_TSTATR_RDC_MASK            0x0000001f
#define MLI0_TSTATR_RDC_SHIFT           0
#define MLI0_TSTATR_APN_MASK            0x00000060
#define MLI0_TSTATR_APN_SHIFT           5
#define MLI0_TSTATR_PE_MASK             0x00000080
#define MLI0_TSTATR_PE_SHIFT            7
#define MLI0_TSTATR_NAE_MASK            0x00000100
#define MLI0_TSTATR_NAE_SHIFT           8




#endif /* _HAVE_TRICORE_MLI_MASKS_H_ */

