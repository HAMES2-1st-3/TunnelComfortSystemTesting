/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SSCG0_3_SHAREMASKS_H_
#define _HAVE_TRICORE_SSCG0_3_SHAREMASKS_H_


/****************** Masks for SSCGn_BR_t **********************/
/*
   SSCG0_BR              "Baud Rate Timer Reload Register"
   SSCG1_BR              "Baud Rate Timer Reload Register"
   SSCG2_BR              "Baud Rate Timer Reload Register"
   SSCG3_BR              "Baud Rate Timer Reload Register"
*/
/**********************************************************/

#define SSCGn_BR_MASK                   0x0000ffff
#define SSCGn_BR_BR_VALUE_MASK          0x0000ffff
#define SSCGn_BR_BR_VALUE_SHIFT         0



/****************** Masks for SSCGn_CLC_t **********************/
/*
   SSCG0_CLC             "Clock Control Register"
   SSCG1_CLC             "Clock Control Register"
   SSCG2_CLC             "Clock Control Register"
   SSCG3_CLC             "Clock Control Register"
*/
/**********************************************************/

#define SSCGn_CLC_MASK                  0x0000003f
#define SSCGn_CLC_DISR_MASK             0x00000001
#define SSCGn_CLC_DISR_SHIFT            0
#define SSCGn_CLC_DISS_MASK             0x00000002
#define SSCGn_CLC_DISS_SHIFT            1
#define SSCGn_CLC_SPEN_MASK             0x00000004
#define SSCGn_CLC_SPEN_SHIFT            2
#define SSCGn_CLC_EDIS_MASK             0x00000008
#define SSCGn_CLC_EDIS_SHIFT            3
#define SSCGn_CLC_SBWE_MASK             0x00000010
#define SSCGn_CLC_SBWE_SHIFT            4
#define SSCGn_CLC_FSOE_MASK             0x00000020
#define SSCGn_CLC_FSOE_SHIFT            5



/****************** Masks for SSCGn_CON_t **********************/
/*
   SSCG0_CON             "Control Register"
   SSCG1_CON             "Control Register"
   SSCG2_CON             "Control Register"
   SSCG3_CON             "Control Register"
*/
/**********************************************************/

#define SSCGn_CON_MASK                  0x000fdfff
#define SSCGn_CON_BM_MASK               0x0000000f
#define SSCGn_CON_BM_SHIFT              0
#define SSCGn_CON_HB_MASK               0x00000010
#define SSCGn_CON_HB_SHIFT              4
#define SSCGn_CON_PH_MASK               0x00000020
#define SSCGn_CON_PH_SHIFT              5
#define SSCGn_CON_PO_MASK               0x00000040
#define SSCGn_CON_PO_SHIFT              6
#define SSCGn_CON_LB_MASK               0x00000080
#define SSCGn_CON_LB_SHIFT              7
#define SSCGn_CON_TEN_MASK              0x00000100
#define SSCGn_CON_TEN_SHIFT             8
#define SSCGn_CON_REN_MASK              0x00000200
#define SSCGn_CON_REN_SHIFT             9
#define SSCGn_CON_PEN_MASK              0x00000400
#define SSCGn_CON_PEN_SHIFT             10
#define SSCGn_CON_BEN_MASK              0x00000800
#define SSCGn_CON_BEN_SHIFT             11
#define SSCGn_CON_AREN_MASK             0x00001000
#define SSCGn_CON_AREN_SHIFT            12
#define SSCGn_CON_MS_MASK               0x00004000
#define SSCGn_CON_MS_SHIFT              14
#define SSCGn_CON_EN_MASK               0x00008000
#define SSCGn_CON_EN_SHIFT              15
#define SSCGn_CON_PARTEN_MASK           0x00010000
#define SSCGn_CON_PARTEN_SHIFT          16
#define SSCGn_CON_PARREN_MASK           0x00020000
#define SSCGn_CON_PARREN_SHIFT          17
#define SSCGn_CON_PARTYP_MASK           0x00040000
#define SSCGn_CON_PARTYP_SHIFT          18
#define SSCGn_CON_PAREEN_MASK           0x00080000
#define SSCGn_CON_PAREEN_SHIFT          19



/****************** Masks for SSCGn_EFM_t **********************/
/*
   SSCG0_EFM             "Error Flag Modification Register"
   SSCG1_EFM             "Error Flag Modification Register"
   SSCG2_EFM             "Error Flag Modification Register"
   SSCG3_EFM             "Error Flag Modification Register"
*/
/**********************************************************/

#define SSCGn_EFM_MASK                  0x0000ff11
#define SSCGn_EFM_CLRPARE_MASK          0x00000001
#define SSCGn_EFM_CLRPARE_SHIFT         0
#define SSCGn_EFM_SETPARE_MASK          0x00000010
#define SSCGn_EFM_SETPARE_SHIFT         4
#define SSCGn_EFM_CLRTE_MASK            0x00000100
#define SSCGn_EFM_CLRTE_SHIFT           8
#define SSCGn_EFM_CLRRE_MASK            0x00000200
#define SSCGn_EFM_CLRRE_SHIFT           9
#define SSCGn_EFM_CLRPE_MASK            0x00000400
#define SSCGn_EFM_CLRPE_SHIFT           10
#define SSCGn_EFM_CLRBE_MASK            0x00000800
#define SSCGn_EFM_CLRBE_SHIFT           11
#define SSCGn_EFM_SETTE_MASK            0x00001000
#define SSCGn_EFM_SETTE_SHIFT           12
#define SSCGn_EFM_SETRE_MASK            0x00002000
#define SSCGn_EFM_SETRE_SHIFT           13
#define SSCGn_EFM_SETPE_MASK            0x00004000
#define SSCGn_EFM_SETPE_SHIFT           14
#define SSCGn_EFM_SETBE_MASK            0x00008000
#define SSCGn_EFM_SETBE_SHIFT           15



/****************** Masks for SSCGn_FDR_t **********************/
/*
   SSCG0_FDR             "Fractional Divider Register"
   SSCG1_FDR             "Fractional Divider Register"
   SSCG2_FDR             "Fractional Divider Register"
   SSCG3_FDR             "Fractional Divider Register"
*/
/**********************************************************/

#define SSCGn_FDR_MASK                  0xf3ffffff
#define SSCGn_FDR_STEP_MASK             0x000003ff
#define SSCGn_FDR_STEP_SHIFT            0
#define SSCGn_FDR_FDIS_MASK             0x00000400
#define SSCGn_FDR_FDIS_SHIFT            10
#define SSCGn_FDR_SM_MASK               0x00000800
#define SSCGn_FDR_SM_SHIFT              11
#define SSCGn_FDR_SC_MASK               0x00003000
#define SSCGn_FDR_SC_SHIFT              12
#define SSCGn_FDR_DM_MASK               0x0000c000
#define SSCGn_FDR_DM_SHIFT              14
#define SSCGn_FDR_RESULT_MASK           0x03ff0000
#define SSCGn_FDR_RESULT_SHIFT          16
#define SSCGn_FDR_SUSACK_MASK           0x10000000
#define SSCGn_FDR_SUSACK_SHIFT          28
#define SSCGn_FDR_SUSREQ_MASK           0x20000000
#define SSCGn_FDR_SUSREQ_SHIFT          29
#define SSCGn_FDR_ENHW_MASK             0x40000000
#define SSCGn_FDR_ENHW_SHIFT            30
#define SSCGn_FDR_DISCLK_MASK           0x80000000
#define SSCGn_FDR_DISCLK_SHIFT          31



/****************** Masks for SSCGn_GEFM_t **********************/
/*
   SSCG0_GEFM            "Guardian Error Flag Modification Register"
   SSCG1_GEFM            "Guardian Error Flag Modification Register"
   SSCG2_GEFM            "Guardian Error Flag Modification Register"
   SSCG3_GEFM            "Guardian Error Flag Modification Register"
*/
/**********************************************************/

#define SSCGn_GEFM_MASK                 0xffff010d
#define SSCGn_GEFM_CLRCE_MASK           0x00000001
#define SSCGn_GEFM_CLRCE_SHIFT          0
#define SSCGn_GEFM_SCTC_MASK            0x0000000c
#define SSCGn_GEFM_SCTC_SHIFT           2
#define SSCGn_GEFM_SETCE_MASK           0x00000100
#define SSCGn_GEFM_SETCE_SHIFT          8
#define SSCGn_GEFM_SCT0_MASK            0x00030000
#define SSCGn_GEFM_SCT0_SHIFT           16
#define SSCGn_GEFM_SCT1_MASK            0x000c0000
#define SSCGn_GEFM_SCT1_SHIFT           18
#define SSCGn_GEFM_SCT2_MASK            0x00300000
#define SSCGn_GEFM_SCT2_SHIFT           20
#define SSCGn_GEFM_SCT3_MASK            0x00c00000
#define SSCGn_GEFM_SCT3_SHIFT           22
#define SSCGn_GEFM_SCT4_MASK            0x03000000
#define SSCGn_GEFM_SCT4_SHIFT           24
#define SSCGn_GEFM_SCT5_MASK            0x0c000000
#define SSCGn_GEFM_SCT5_SHIFT           26
#define SSCGn_GEFM_SCT6_MASK            0x30000000
#define SSCGn_GEFM_SCT6_SHIFT           28
#define SSCGn_GEFM_SCT7_MASK            0xc0000000
#define SSCGn_GEFM_SCT7_SHIFT           30



/****************** Masks for SSCGn_GEN_t **********************/
/*
   SSCG0_GEN             "Guardian Enable Register"
   SSCG1_GEN             "Guardian Enable Register"
   SSCG2_GEN             "Guardian Enable Register"
   SSCG3_GEN             "Guardian Enable Register"
*/
/**********************************************************/

#define SSCGn_GEN_MASK                  0x000001ff
#define SSCGn_GEN_SEN0_MASK             0x00000001
#define SSCGn_GEN_SEN0_SHIFT            0
#define SSCGn_GEN_SEN1_MASK             0x00000002
#define SSCGn_GEN_SEN1_SHIFT            1
#define SSCGn_GEN_SEN2_MASK             0x00000004
#define SSCGn_GEN_SEN2_SHIFT            2
#define SSCGn_GEN_SEN3_MASK             0x00000008
#define SSCGn_GEN_SEN3_SHIFT            3
#define SSCGn_GEN_SEN4_MASK             0x00000010
#define SSCGn_GEN_SEN4_SHIFT            4
#define SSCGn_GEN_SEN5_MASK             0x00000020
#define SSCGn_GEN_SEN5_SHIFT            5
#define SSCGn_GEN_SEN6_MASK             0x00000040
#define SSCGn_GEN_SEN6_SHIFT            6
#define SSCGn_GEN_SEN7_MASK             0x00000080
#define SSCGn_GEN_SEN7_SHIFT            7
#define SSCGn_GEN_CEN_MASK              0x00000100
#define SSCGn_GEN_CEN_SHIFT             8



/****************** Masks for SSCGn_GSRC_t **********************/
/*
   SSCG0_GSRC            "Guardian Interrupt Service Request Control Register"
   SSCG1_GSRC            "Guardian Interrupt Service Request Control Register"
   SSCG2_GSRC            "Guardian Interrupt Service Request Control Register"
   SSCG3_GSRC            "Guardian Interrupt Service Request Control Register"
*/
/**********************************************************/

#define SSCGn_GSRC_MASK                 0x0000f4ff
#define SSCGn_GSRC_SRPN_MASK            0x000000ff
#define SSCGn_GSRC_SRPN_SHIFT           0
#define SSCGn_GSRC_TOS_MASK             0x00000400
#define SSCGn_GSRC_TOS_SHIFT            10
#define SSCGn_GSRC_SRE_MASK             0x00001000
#define SSCGn_GSRC_SRE_SHIFT            12
#define SSCGn_GSRC_SRR_MASK             0x00002000
#define SSCGn_GSRC_SRR_SHIFT            13
#define SSCGn_GSRC_CLRR_MASK            0x00004000
#define SSCGn_GSRC_CLRR_SHIFT           14
#define SSCGn_GSRC_SETR_MASK            0x00008000
#define SSCGn_GSRC_SETR_SHIFT           15



/****************** Masks for SSCGn_GSTAT_t **********************/
/*
   SSCG0_GSTAT           "Guardian Status Register"
   SSCG1_GSTAT           "Guardian Status Register"
   SSCG2_GSTAT           "Guardian Status Register"
   SSCG3_GSTAT           "Guardian Status Register"
*/
/**********************************************************/

#define SSCGn_GSTAT_MASK                0x00ff0005
#define SSCGn_GSTAT_CE_MASK             0x00000001
#define SSCGn_GSTAT_CE_SHIFT            0
#define SSCGn_GSTAT_SCLK_MASK           0x00000004
#define SSCGn_GSTAT_SCLK_SHIFT          2
#define SSCGn_GSTAT_S0_MASK             0x00010000
#define SSCGn_GSTAT_S0_SHIFT            16
#define SSCGn_GSTAT_S1_MASK             0x00020000
#define SSCGn_GSTAT_S1_SHIFT            17
#define SSCGn_GSTAT_S2_MASK             0x00040000
#define SSCGn_GSTAT_S2_SHIFT            18
#define SSCGn_GSTAT_S3_MASK             0x00080000
#define SSCGn_GSTAT_S3_SHIFT            19
#define SSCGn_GSTAT_S4_MASK             0x00100000
#define SSCGn_GSTAT_S4_SHIFT            20
#define SSCGn_GSTAT_S5_MASK             0x00200000
#define SSCGn_GSTAT_S5_SHIFT            21
#define SSCGn_GSTAT_S6_MASK             0x00400000
#define SSCGn_GSTAT_S6_SHIFT            22
#define SSCGn_GSTAT_S7_MASK             0x00800000
#define SSCGn_GSTAT_S7_SHIFT            23



/****************** Masks for SSCGn_ID_t **********************/
/*
   SSCG0_ID              "Module Identification Register"
   SSCG1_ID              "Module Identification Register"
   SSCG2_ID              "Module Identification Register"
   SSCG3_ID              "Module Identification Register"
*/
/**********************************************************/

#define SSCGn_ID_MASK                   0xffffffff
#define SSCGn_ID_MODREV_MASK            0x000000ff
#define SSCGn_ID_MODREV_SHIFT           0
#define SSCGn_ID_MODTYPE_MASK           0x0000ff00
#define SSCGn_ID_MODTYPE_SHIFT          8
#define SSCGn_ID_MODNUM_MASK            0xffff0000
#define SSCGn_ID_MODNUM_SHIFT           16



/****************** Masks for SSCGn_PISEL_t **********************/
/*
   SSCG0_PISEL           "Port Input Select Register"
   SSCG1_PISEL           "Port Input Select Register"
   SSCG2_PISEL           "Port Input Select Register"
   SSCG3_PISEL           "Port Input Select Register"
*/
/**********************************************************/

#define SSCGn_PISEL_MASK                0x0000013f
#define SSCGn_PISEL_MRIS_MASK           0x00000001
#define SSCGn_PISEL_MRIS_SHIFT          0
#define SSCGn_PISEL_SRIS_MASK           0x00000002
#define SSCGn_PISEL_SRIS_SHIFT          1
#define SSCGn_PISEL_SCIS_MASK           0x00000004
#define SSCGn_PISEL_SCIS_SHIFT          2
#define SSCGn_PISEL_SLSIS_MASK          0x00000038
#define SSCGn_PISEL_SLSIS_SHIFT         3
#define SSCGn_PISEL_STIP_MASK           0x00000100
#define SSCGn_PISEL_STIP_SHIFT          8



/****************** Masks for SSCGn_RB_t **********************/
/*
   SSCG0_RB              "Receive Buffer Register"
   SSCG1_RB              "Receive Buffer Register"
   SSCG2_RB              "Receive Buffer Register"
   SSCG3_RB              "Receive Buffer Register"
*/
/**********************************************************/

#define SSCGn_RB_MASK                   0x0000ffff
#define SSCGn_RB_RB_VALUE_MASK          0x0000ffff
#define SSCGn_RB_RB_VALUE_SHIFT         0



/****************** Masks for SSCGn_RBSNAP_t **********************/
/*
   SSCG0_RBSNAP          "Receive Buffer Snapshot Register"
   SSCG1_RBSNAP          "Receive Buffer Snapshot Register"
   SSCG2_RBSNAP          "Receive Buffer Snapshot Register"
   SSCG3_RBSNAP          "Receive Buffer Snapshot Register"
*/
/**********************************************************/

#define SSCGn_RBSNAP_MASK               0x0000ffff
#define SSCGn_RBSNAP_RB_VALUE_MASK      0x0000ffff
#define SSCGn_RBSNAP_RB_VALUE_SHIFT     0



/****************** Masks for SSCGn_SSOC_t **********************/
/*
   SSCG0_SSOC            "Slave Select Output Control Register"
   SSCG1_SSOC            "Slave Select Output Control Register"
   SSCG2_SSOC            "Slave Select Output Control Register"
   SSCG3_SSOC            "Slave Select Output Control Register"
*/
/**********************************************************/

#define SSCGn_SSOC_MASK                 0x0000ffff
#define SSCGn_SSOC_AOL0_MASK            0x00000001
#define SSCGn_SSOC_AOL0_SHIFT           0
#define SSCGn_SSOC_AOL1_MASK            0x00000002
#define SSCGn_SSOC_AOL1_SHIFT           1
#define SSCGn_SSOC_AOL2_MASK            0x00000004
#define SSCGn_SSOC_AOL2_SHIFT           2
#define SSCGn_SSOC_AOL3_MASK            0x00000008
#define SSCGn_SSOC_AOL3_SHIFT           3
#define SSCGn_SSOC_AOL4_MASK            0x00000010
#define SSCGn_SSOC_AOL4_SHIFT           4
#define SSCGn_SSOC_AOL5_MASK            0x00000020
#define SSCGn_SSOC_AOL5_SHIFT           5
#define SSCGn_SSOC_AOL6_MASK            0x00000040
#define SSCGn_SSOC_AOL6_SHIFT           6
#define SSCGn_SSOC_AOL7_MASK            0x00000080
#define SSCGn_SSOC_AOL7_SHIFT           7
#define SSCGn_SSOC_OEN0_MASK            0x00000100
#define SSCGn_SSOC_OEN0_SHIFT           8
#define SSCGn_SSOC_OEN1_MASK            0x00000200
#define SSCGn_SSOC_OEN1_SHIFT           9
#define SSCGn_SSOC_OEN2_MASK            0x00000400
#define SSCGn_SSOC_OEN2_SHIFT           10
#define SSCGn_SSOC_OEN3_MASK            0x00000800
#define SSCGn_SSOC_OEN3_SHIFT           11
#define SSCGn_SSOC_OEN4_MASK            0x00001000
#define SSCGn_SSOC_OEN4_SHIFT           12
#define SSCGn_SSOC_OEN5_MASK            0x00002000
#define SSCGn_SSOC_OEN5_SHIFT           13
#define SSCGn_SSOC_OEN6_MASK            0x00004000
#define SSCGn_SSOC_OEN6_SHIFT           14
#define SSCGn_SSOC_OEN7_MASK            0x00008000
#define SSCGn_SSOC_OEN7_SHIFT           15



/****************** Masks for SSCGn_SSOTC_t **********************/
/*
   SSCG0_SSOTC           "Slave Select Output Timing Control Register"
   SSCG1_SSOTC           "Slave Select Output Timing Control Register"
   SSCG2_SSOTC           "Slave Select Output Timing Control Register"
   SSCG3_SSOTC           "Slave Select Output Timing Control Register"
*/
/**********************************************************/

#define SSCGn_SSOTC_MASK                0x0000c13f
#define SSCGn_SSOTC_LEAD_MASK           0x00000003
#define SSCGn_SSOTC_LEAD_SHIFT          0
#define SSCGn_SSOTC_TRAIL_MASK          0x0000000c
#define SSCGn_SSOTC_TRAIL_SHIFT         2
#define SSCGn_SSOTC_INACT_MASK          0x00000030
#define SSCGn_SSOTC_INACT_SHIFT         4
#define SSCGn_SSOTC_SLSO7MOD_MASK       0x00000100
#define SSCGn_SSOTC_SLSO7MOD_SHIFT      8
#define SSCGn_SSOTC_QSMEN_MASK          0x00004000
#define SSCGn_SSOTC_QSMEN_SHIFT         14
#define SSCGn_SSOTC_EN_MASK             0x00008000
#define SSCGn_SSOTC_EN_SHIFT            15



/****************** Masks for SSCGn_STAT_t **********************/
/*
   SSCG0_STAT            "Status Register"
   SSCG1_STAT            "Status Register"
   SSCG2_STAT            "Status Register"
   SSCG3_STAT            "Status Register"
*/
/**********************************************************/

#define SSCGn_STAT_MASK                 0x00001f7f
#define SSCGn_STAT_BC_MASK              0x0000000f
#define SSCGn_STAT_BC_SHIFT             0
#define SSCGn_STAT_PARE_MASK            0x00000010
#define SSCGn_STAT_PARE_SHIFT           4
#define SSCGn_STAT_PARTVAL_MASK         0x00000020
#define SSCGn_STAT_PARTVAL_SHIFT        5
#define SSCGn_STAT_PARRVAL_MASK         0x00000040
#define SSCGn_STAT_PARRVAL_SHIFT        6
#define SSCGn_STAT_TE_MASK              0x00000100
#define SSCGn_STAT_TE_SHIFT             8
#define SSCGn_STAT_RE_MASK              0x00000200
#define SSCGn_STAT_RE_SHIFT             9
#define SSCGn_STAT_PE_MASK              0x00000400
#define SSCGn_STAT_PE_SHIFT             10
#define SSCGn_STAT_BE_MASK              0x00000800
#define SSCGn_STAT_BE_SHIFT             11
#define SSCGn_STAT_BSY_MASK             0x00001000
#define SSCGn_STAT_BSY_SHIFT            12



/****************** Masks for SSCGn_TB_t **********************/
/*
   SSCG0_TB              "Transmit Buffer Register"
   SSCG1_TB              "Transmit Buffer Register"
   SSCG2_TB              "Transmit Buffer Register"
   SSCG3_TB              "Transmit Buffer Register"
*/
/**********************************************************/

#define SSCGn_TB_MASK                   0x0000ffff
#define SSCGn_TB_TB_VALUE_MASK          0x0000ffff
#define SSCGn_TB_TB_VALUE_SHIFT         0



/****************** Masks for SSCGn_TB1_t **********************/
/*
   SSCG0_TB1             "Transmit Buffer Compare Register"
   SSCG1_TB1             "Transmit Buffer Compare Register"
   SSCG2_TB1             "Transmit Buffer Compare Register"
   SSCG3_TB1             "Transmit Buffer Compare Register"
*/
/**********************************************************/

#define SSCGn_TB1_MASK                  0x0000ffff
#define SSCGn_TB1_TB_VALUE_MASK         0x0000ffff
#define SSCGn_TB1_TB_VALUE_SHIFT        0



/****************** Masks for SSCGn_TB1SNAP_t **********************/
/*
   SSCG0_TB1SNAP         "Transmit Buffer Snapshot Register"
   SSCG1_TB1SNAP         "Transmit Buffer Snapshot Register"
   SSCG2_TB1SNAP         "Transmit Buffer Snapshot Register"
   SSCG3_TB1SNAP         "Transmit Buffer Snapshot Register"
*/
/**********************************************************/

#define SSCGn_TB1SNAP_MASK              0x0000ffff
#define SSCGn_TB1SNAP_TB_VALUE_MASK     0x0000ffff
#define SSCGn_TB1SNAP_TB_VALUE_SHIFT    0




#endif /* _HAVE_TRICORE_SSCG0_3_SHAREMASKS_H_ */

