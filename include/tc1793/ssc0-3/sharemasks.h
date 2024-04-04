/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SSC0_3_SHAREMASKS_H_
#define _HAVE_TRICORE_SSC0_3_SHAREMASKS_H_


/****************** Masks for SSCn_BR_t **********************/
/*
   SSC0_BR               "Baud Rate Timer Reload Register"
   SSC1_BR               "Baud Rate Timer Reload Register"
   SSC2_BR               "Baud Rate Timer Reload Register"
   SSC3_BR               "Baud Rate Timer Reload Register"
*/
/**********************************************************/

#define SSCn_BR_MASK                    0x0000ffff
#define SSCn_BR_BR_VALUE_MASK           0x0000ffff
#define SSCn_BR_BR_VALUE_SHIFT          0



/****************** Masks for SSCn_CLC_t **********************/
/*
   SSC0_CLC              "SSC0_Clock Control Register"
   SSC1_CLC              "SSC1 Clock Control Register"
   SSC2_CLC              "SSC2 Clock Control Register"
   SSC3_CLC              "SSC3 Clock Control Register"
*/
/**********************************************************/

#define SSCn_CLC_MASK                   0x0000003f
#define SSCn_CLC_DISR_MASK              0x00000001
#define SSCn_CLC_DISR_SHIFT             0
#define SSCn_CLC_DISS_MASK              0x00000002
#define SSCn_CLC_DISS_SHIFT             1
#define SSCn_CLC_SPEN_MASK              0x00000004
#define SSCn_CLC_SPEN_SHIFT             2
#define SSCn_CLC_EDIS_MASK              0x00000008
#define SSCn_CLC_EDIS_SHIFT             3
#define SSCn_CLC_SBWE_MASK              0x00000010
#define SSCn_CLC_SBWE_SHIFT             4
#define SSCn_CLC_FSOE_MASK              0x00000020
#define SSCn_CLC_FSOE_SHIFT             5



/****************** Masks for SSCn_CON_t **********************/
/*
   SSC0_CON              "Control Register"
   SSC1_CON              "Control Register"
   SSC2_CON              "Control Register"
   SSC3_CON              "Control Register"
*/
/**********************************************************/

#define SSCn_CON_MASK                   0x000fdfff
#define SSCn_CON_BM_MASK                0x0000000f
#define SSCn_CON_BM_SHIFT               0
#define SSCn_CON_HB_MASK                0x00000010
#define SSCn_CON_HB_SHIFT               4
#define SSCn_CON_PH_MASK                0x00000020
#define SSCn_CON_PH_SHIFT               5
#define SSCn_CON_PO_MASK                0x00000040
#define SSCn_CON_PO_SHIFT               6
#define SSCn_CON_LB_MASK                0x00000080
#define SSCn_CON_LB_SHIFT               7
#define SSCn_CON_TEN_MASK               0x00000100
#define SSCn_CON_TEN_SHIFT              8
#define SSCn_CON_REN_MASK               0x00000200
#define SSCn_CON_REN_SHIFT              9
#define SSCn_CON_PEN_MASK               0x00000400
#define SSCn_CON_PEN_SHIFT              10
#define SSCn_CON_BEN_MASK               0x00000800
#define SSCn_CON_BEN_SHIFT              11
#define SSCn_CON_AREN_MASK              0x00001000
#define SSCn_CON_AREN_SHIFT             12
#define SSCn_CON_MS_MASK                0x00004000
#define SSCn_CON_MS_SHIFT               14
#define SSCn_CON_EN_MASK                0x00008000
#define SSCn_CON_EN_SHIFT               15
#define SSCn_CON_PARTEN_MASK            0x00010000
#define SSCn_CON_PARTEN_SHIFT           16
#define SSCn_CON_PARREN_MASK            0x00020000
#define SSCn_CON_PARREN_SHIFT           17
#define SSCn_CON_PARTYP_MASK            0x00040000
#define SSCn_CON_PARTYP_SHIFT           18
#define SSCn_CON_PAREEN_MASK            0x00080000
#define SSCn_CON_PAREEN_SHIFT           19



/****************** Masks for SSCn_EFM_t **********************/
/*
   SSC0_EFM              "Error Flag Modification Register"
   SSC1_EFM              "Error Flag Modification Register"
   SSC2_EFM              "Error Flag Modification Register"
   SSC3_EFM              "Error Flag Modification Register"
*/
/**********************************************************/

#define SSCn_EFM_MASK                   0x0000ff11
#define SSCn_EFM_CLRPARE_MASK           0x00000001
#define SSCn_EFM_CLRPARE_SHIFT          0
#define SSCn_EFM_SETPARE_MASK           0x00000010
#define SSCn_EFM_SETPARE_SHIFT          4
#define SSCn_EFM_CLRTE_MASK             0x00000100
#define SSCn_EFM_CLRTE_SHIFT            8
#define SSCn_EFM_CLRRE_MASK             0x00000200
#define SSCn_EFM_CLRRE_SHIFT            9
#define SSCn_EFM_CLRPE_MASK             0x00000400
#define SSCn_EFM_CLRPE_SHIFT            10
#define SSCn_EFM_CLRBE_MASK             0x00000800
#define SSCn_EFM_CLRBE_SHIFT            11
#define SSCn_EFM_SETTE_MASK             0x00001000
#define SSCn_EFM_SETTE_SHIFT            12
#define SSCn_EFM_SETRE_MASK             0x00002000
#define SSCn_EFM_SETRE_SHIFT            13
#define SSCn_EFM_SETPE_MASK             0x00004000
#define SSCn_EFM_SETPE_SHIFT            14
#define SSCn_EFM_SETBE_MASK             0x00008000
#define SSCn_EFM_SETBE_SHIFT            15



/****************** Masks for SSCn_ESRC_t **********************/
/*
   SSC0_ESRC             "Error Interrupt Service Request Control Register"
   SSC1_ESRC             "Error Interrupt Service Request Control Register"
   SSC2_ESRC             "Error Interrupt Service Request Control Register"
   SSC3_ESRC             "Error Interrupt Service Request Control Register"
*/
/**********************************************************/

#define SSCn_ESRC_MASK                  0x0000f4ff
#define SSCn_ESRC_SRPN_MASK             0x000000ff
#define SSCn_ESRC_SRPN_SHIFT            0
#define SSCn_ESRC_TOS_MASK              0x00000400
#define SSCn_ESRC_TOS_SHIFT             10
#define SSCn_ESRC_SRE_MASK              0x00001000
#define SSCn_ESRC_SRE_SHIFT             12
#define SSCn_ESRC_SRR_MASK              0x00002000
#define SSCn_ESRC_SRR_SHIFT             13
#define SSCn_ESRC_CLRR_MASK             0x00004000
#define SSCn_ESRC_CLRR_SHIFT            14
#define SSCn_ESRC_SETR_MASK             0x00008000
#define SSCn_ESRC_SETR_SHIFT            15



/****************** Masks for SSCn_FDR_t **********************/
/*
   SSC0_FDR              "SSC0 Fractional Divider Register"
   SSC1_FDR              "SSC1 Fractional Divider Register"
   SSC2_FDR              "SSC2 Fractional Divider Register"
   SSC3_FDR              "SSC3 Fractional Divider Register"
*/
/**********************************************************/

#define SSCn_FDR_MASK                   0xf3ffffff
#define SSCn_FDR_STEP_MASK              0x000003ff
#define SSCn_FDR_STEP_SHIFT             0
#define SSCn_FDR_FDIS_MASK              0x00000400
#define SSCn_FDR_FDIS_SHIFT             10
#define SSCn_FDR_SM_MASK                0x00000800
#define SSCn_FDR_SM_SHIFT               11
#define SSCn_FDR_SC_MASK                0x00003000
#define SSCn_FDR_SC_SHIFT               12
#define SSCn_FDR_DM_MASK                0x0000c000
#define SSCn_FDR_DM_SHIFT               14
#define SSCn_FDR_RESULT_MASK            0x03ff0000
#define SSCn_FDR_RESULT_SHIFT           16
#define SSCn_FDR_SUSACK_MASK            0x10000000
#define SSCn_FDR_SUSACK_SHIFT           28
#define SSCn_FDR_SUSREQ_MASK            0x20000000
#define SSCn_FDR_SUSREQ_SHIFT           29
#define SSCn_FDR_ENHW_MASK              0x40000000
#define SSCn_FDR_ENHW_SHIFT             30
#define SSCn_FDR_DISCLK_MASK            0x80000000
#define SSCn_FDR_DISCLK_SHIFT           31



/****************** Masks for SSCn_ID_t **********************/
/*
   SSC0_ID               "Module Identification Register"
   SSC1_ID               "Module Identification Register"
   SSC2_ID               "Module Identification Register"
   SSC3_ID               "Module Identification Register"
*/
/**********************************************************/

#define SSCn_ID_MASK                    0x0000ffff
#define SSCn_ID_MODREV_MASK             0x000000ff
#define SSCn_ID_MODREV_SHIFT            0
#define SSCn_ID_MODNUM_MASK             0x0000ff00
#define SSCn_ID_MODNUM_SHIFT            8



/****************** Masks for SSCn_PISEL_t **********************/
/*
   SSC0_PISEL            "Port Input Select Register"
   SSC1_PISEL            "Port Input Select Register"
   SSC2_PISEL            "Port Input Select Register"
   SSC3_PISEL            "Port Input Select Register"
*/
/**********************************************************/

#define SSCn_PISEL_MASK                 0x0000013f
#define SSCn_PISEL_MRIS_MASK            0x00000001
#define SSCn_PISEL_MRIS_SHIFT           0
#define SSCn_PISEL_SRIS_MASK            0x00000002
#define SSCn_PISEL_SRIS_SHIFT           1
#define SSCn_PISEL_SCIS_MASK            0x00000004
#define SSCn_PISEL_SCIS_SHIFT           2
#define SSCn_PISEL_SLSIS_MASK           0x00000038
#define SSCn_PISEL_SLSIS_SHIFT          3
#define SSCn_PISEL_STIP_MASK            0x00000100
#define SSCn_PISEL_STIP_SHIFT           8



/****************** Masks for SSCn_RB_t **********************/
/*
   SSC0_RB               "Receive Buffer Register"
   SSC1_RB               "Receive Buffer Register"
   SSC2_RB               "Receive Buffer Register"
   SSC3_RB               "Receive Buffer Register"
*/
/**********************************************************/

#define SSCn_RB_MASK                    0x0000ffff
#define SSCn_RB_RB_VALUE_MASK           0x0000ffff
#define SSCn_RB_RB_VALUE_SHIFT          0



/****************** Masks for SSCn_RSRC_t **********************/
/*
   SSC0_RSRC             "Receive Interrupt Service Request Control Register"
   SSC1_RSRC             "Receive Interrupt Service Request Control Register"
   SSC2_RSRC             "Receive Interrupt Service Request Control Register"
   SSC3_RSRC             "Receive Interrupt Service Request Control Register"
*/
/**********************************************************/

#define SSCn_RSRC_MASK                  0x0000f4ff
#define SSCn_RSRC_SRPN_MASK             0x000000ff
#define SSCn_RSRC_SRPN_SHIFT            0
#define SSCn_RSRC_TOS_MASK              0x00000400
#define SSCn_RSRC_TOS_SHIFT             10
#define SSCn_RSRC_SRE_MASK              0x00001000
#define SSCn_RSRC_SRE_SHIFT             12
#define SSCn_RSRC_SRR_MASK              0x00002000
#define SSCn_RSRC_SRR_SHIFT             13
#define SSCn_RSRC_CLRR_MASK             0x00004000
#define SSCn_RSRC_CLRR_SHIFT            14
#define SSCn_RSRC_SETR_MASK             0x00008000
#define SSCn_RSRC_SETR_SHIFT            15



/****************** Masks for SSCn_SSOC_t **********************/
/*
   SSC0_SSOC             "Slave Select Output Control Register"
   SSC1_SSOC             "Slave Select Output Control Register"
   SSC2_SSOC             "Slave Select Output Control Register"
   SSC3_SSOC             "Slave Select Output Control Register"
*/
/**********************************************************/

#define SSCn_SSOC_MASK                  0x0000ffff
#define SSCn_SSOC_AOL0_MASK             0x00000001
#define SSCn_SSOC_AOL0_SHIFT            0
#define SSCn_SSOC_AOL1_MASK             0x00000002
#define SSCn_SSOC_AOL1_SHIFT            1
#define SSCn_SSOC_AOL2_MASK             0x00000004
#define SSCn_SSOC_AOL2_SHIFT            2
#define SSCn_SSOC_AOL3_MASK             0x00000008
#define SSCn_SSOC_AOL3_SHIFT            3
#define SSCn_SSOC_AOL4_MASK             0x00000010
#define SSCn_SSOC_AOL4_SHIFT            4
#define SSCn_SSOC_AOL5_MASK             0x00000020
#define SSCn_SSOC_AOL5_SHIFT            5
#define SSCn_SSOC_AOL6_MASK             0x00000040
#define SSCn_SSOC_AOL6_SHIFT            6
#define SSCn_SSOC_AOL7_MASK             0x00000080
#define SSCn_SSOC_AOL7_SHIFT            7
#define SSCn_SSOC_OEN0_MASK             0x00000100
#define SSCn_SSOC_OEN0_SHIFT            8
#define SSCn_SSOC_OEN1_MASK             0x00000200
#define SSCn_SSOC_OEN1_SHIFT            9
#define SSCn_SSOC_OEN2_MASK             0x00000400
#define SSCn_SSOC_OEN2_SHIFT            10
#define SSCn_SSOC_OEN3_MASK             0x00000800
#define SSCn_SSOC_OEN3_SHIFT            11
#define SSCn_SSOC_OEN4_MASK             0x00001000
#define SSCn_SSOC_OEN4_SHIFT            12
#define SSCn_SSOC_OEN5_MASK             0x00002000
#define SSCn_SSOC_OEN5_SHIFT            13
#define SSCn_SSOC_OEN6_MASK             0x00004000
#define SSCn_SSOC_OEN6_SHIFT            14
#define SSCn_SSOC_OEN7_MASK             0x00008000
#define SSCn_SSOC_OEN7_SHIFT            15



/****************** Masks for SSCn_SSOTC_t **********************/
/*
   SSC0_SSOTC            "Slave Select Output Timing Control Register"
   SSC1_SSOTC            "Slave Select Output Timing Control Register"
   SSC2_SSOTC            "Slave Select Output Timing Control Register"
   SSC3_SSOTC            "Slave Select Output Timing Control Register"
*/
/**********************************************************/

#define SSCn_SSOTC_MASK                 0x0000c13f
#define SSCn_SSOTC_LEAD_MASK            0x00000003
#define SSCn_SSOTC_LEAD_SHIFT           0
#define SSCn_SSOTC_TRAIL_MASK           0x0000000c
#define SSCn_SSOTC_TRAIL_SHIFT          2
#define SSCn_SSOTC_INACT_MASK           0x00000030
#define SSCn_SSOTC_INACT_SHIFT          4
#define SSCn_SSOTC_SLSO7MOD_MASK        0x00000100
#define SSCn_SSOTC_SLSO7MOD_SHIFT       8
#define SSCn_SSOTC_QSMEN_MASK           0x00004000
#define SSCn_SSOTC_QSMEN_SHIFT          14
#define SSCn_SSOTC_EN_MASK              0x00008000
#define SSCn_SSOTC_EN_SHIFT             15



/****************** Masks for SSCn_STAT_t **********************/
/*
   SSC0_STAT             "Status Register"
   SSC1_STAT             "Status Register"
   SSC2_STAT             "Status Register"
   SSC3_STAT             "Status Register"
*/
/**********************************************************/

#define SSCn_STAT_MASK                  0x00001f7f
#define SSCn_STAT_BC_MASK               0x0000000f
#define SSCn_STAT_BC_SHIFT              0
#define SSCn_STAT_PARE_MASK             0x00000010
#define SSCn_STAT_PARE_SHIFT            4
#define SSCn_STAT_PARTVAL_MASK          0x00000020
#define SSCn_STAT_PARTVAL_SHIFT         5
#define SSCn_STAT_PARRVAL_MASK          0x00000040
#define SSCn_STAT_PARRVAL_SHIFT         6
#define SSCn_STAT_TE_MASK               0x00000100
#define SSCn_STAT_TE_SHIFT              8
#define SSCn_STAT_RE_MASK               0x00000200
#define SSCn_STAT_RE_SHIFT              9
#define SSCn_STAT_PE_MASK               0x00000400
#define SSCn_STAT_PE_SHIFT              10
#define SSCn_STAT_BE_MASK               0x00000800
#define SSCn_STAT_BE_SHIFT              11
#define SSCn_STAT_BSY_MASK              0x00001000
#define SSCn_STAT_BSY_SHIFT             12



/****************** Masks for SSCn_TB_t **********************/
/*
   SSC0_TB               "Transmit Buffer Register"
   SSC1_TB               "Transmit Buffer Register"
   SSC2_TB               "Transmit Buffer Register"
   SSC3_TB               "Transmit Buffer Register"
*/
/**********************************************************/

#define SSCn_TB_MASK                    0x0000ffff
#define SSCn_TB_TB_VALUE_MASK           0x0000ffff
#define SSCn_TB_TB_VALUE_SHIFT          0



/****************** Masks for SSCn_TSRC_t **********************/
/*
   SSC0_TSRC             "Transmit Interrupt Service Request Control Register"
   SSC1_TSRC             "Transmit Interrupt Service Request Control Register"
   SSC2_TSRC             "Transmit Interrupt Service Request Control Register"
   SSC3_TSRC             "Transmit Interrupt Service Request Control Register"
*/
/**********************************************************/

#define SSCn_TSRC_MASK                  0x0000f4ff
#define SSCn_TSRC_SRPN_MASK             0x000000ff
#define SSCn_TSRC_SRPN_SHIFT            0
#define SSCn_TSRC_TOS_MASK              0x00000400
#define SSCn_TSRC_TOS_SHIFT             10
#define SSCn_TSRC_SRE_MASK              0x00001000
#define SSCn_TSRC_SRE_SHIFT             12
#define SSCn_TSRC_SRR_MASK              0x00002000
#define SSCn_TSRC_SRR_SHIFT             13
#define SSCn_TSRC_CLRR_MASK             0x00004000
#define SSCn_TSRC_CLRR_SHIFT            14
#define SSCn_TSRC_SETR_MASK             0x00008000
#define SSCn_TSRC_SETR_SHIFT            15




#endif /* _HAVE_TRICORE_SSC0_3_SHAREMASKS_H_ */

