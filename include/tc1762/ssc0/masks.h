/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SSC0_MASKS_H_
#define _HAVE_TRICORE_SSC0_MASKS_H_


/****************** Masks for SSC0_BR_t **********************/
/*
   SSC0_BR               "SSC Baudrate Timer Reload Register"
*/
/**********************************************************/

#define SSC0_BR_MASK                    0x0000ffff
#define SSC0_BR_BR_VALUE_MASK           0x0000ffff
#define SSC0_BR_BR_VALUE_SHIFT          0



/****************** Masks for SSC0_CLC_t **********************/
/*
   SSC0_CLC              "SSC Clock Control Register"
*/
/**********************************************************/

#define SSC0_CLC_MASK                   0x0000003f
#define SSC0_CLC_DISR_MASK              0x00000001
#define SSC0_CLC_DISR_SHIFT             0
#define SSC0_CLC_DISS_MASK              0x00000002
#define SSC0_CLC_DISS_SHIFT             1
#define SSC0_CLC_SPEN_MASK              0x00000004
#define SSC0_CLC_SPEN_SHIFT             2
#define SSC0_CLC_EDIS_MASK              0x00000008
#define SSC0_CLC_EDIS_SHIFT             3
#define SSC0_CLC_SBWE_MASK              0x00000010
#define SSC0_CLC_SBWE_SHIFT             4
#define SSC0_CLC_FSOE_MASK              0x00000020
#define SSC0_CLC_FSOE_SHIFT             5



/****************** Masks for SSC0_CON_t **********************/
/*
   SSC0_CON              "SSC Control Register"
*/
/**********************************************************/

#define SSC0_CON_MASK                   0x0000dfff
#define SSC0_CON_BM_MASK                0x0000000f
#define SSC0_CON_BM_SHIFT               0
#define SSC0_CON_HB_MASK                0x00000010
#define SSC0_CON_HB_SHIFT               4
#define SSC0_CON_PH_MASK                0x00000020
#define SSC0_CON_PH_SHIFT               5
#define SSC0_CON_PO_MASK                0x00000040
#define SSC0_CON_PO_SHIFT               6
#define SSC0_CON_LB_MASK                0x00000080
#define SSC0_CON_LB_SHIFT               7
#define SSC0_CON_TEN_MASK               0x00000100
#define SSC0_CON_TEN_SHIFT              8
#define SSC0_CON_REN_MASK               0x00000200
#define SSC0_CON_REN_SHIFT              9
#define SSC0_CON_PEN_MASK               0x00000400
#define SSC0_CON_PEN_SHIFT              10
#define SSC0_CON_BEN_MASK               0x00000800
#define SSC0_CON_BEN_SHIFT              11
#define SSC0_CON_AREN_MASK              0x00001000
#define SSC0_CON_AREN_SHIFT             12
#define SSC0_CON_MS_MASK                0x00004000
#define SSC0_CON_MS_SHIFT               14
#define SSC0_CON_EN_MASK                0x00008000
#define SSC0_CON_EN_SHIFT               15



/****************** Masks for SSC0_EFM_t **********************/
/*
   SSC0_EFM              "SSC Error Flag Modification Register"
*/
/**********************************************************/

#define SSC0_EFM_MASK                   0x0000ff00
#define SSC0_EFM_CLRTE_MASK             0x00000100
#define SSC0_EFM_CLRTE_SHIFT            8
#define SSC0_EFM_CLRRE_MASK             0x00000200
#define SSC0_EFM_CLRRE_SHIFT            9
#define SSC0_EFM_CLRPE_MASK             0x00000400
#define SSC0_EFM_CLRPE_SHIFT            10
#define SSC0_EFM_CLRBE_MASK             0x00000800
#define SSC0_EFM_CLRBE_SHIFT            11
#define SSC0_EFM_SETTE_MASK             0x00001000
#define SSC0_EFM_SETTE_SHIFT            12
#define SSC0_EFM_SETRE_MASK             0x00002000
#define SSC0_EFM_SETRE_SHIFT            13
#define SSC0_EFM_SETPE_MASK             0x00004000
#define SSC0_EFM_SETPE_SHIFT            14
#define SSC0_EFM_SETBE_MASK             0x00008000
#define SSC0_EFM_SETBE_SHIFT            15



/****************** Masks for SSC0_ESRC_t **********************/
/*
   SSC0_ESRC             "SSC Error Interrupt Service Request Control Register"
*/
/**********************************************************/

#define SSC0_ESRC_MASK                  0x0000f4ff
#define SSC0_ESRC_SRPN_MASK             0x000000ff
#define SSC0_ESRC_SRPN_SHIFT            0
#define SSC0_ESRC_TOS_MASK              0x00000400
#define SSC0_ESRC_TOS_SHIFT             10
#define SSC0_ESRC_SRE_MASK              0x00001000
#define SSC0_ESRC_SRE_SHIFT             12
#define SSC0_ESRC_SRR_MASK              0x00002000
#define SSC0_ESRC_SRR_SHIFT             13
#define SSC0_ESRC_CLRR_MASK             0x00004000
#define SSC0_ESRC_CLRR_SHIFT            14
#define SSC0_ESRC_SETR_MASK             0x00008000
#define SSC0_ESRC_SETR_SHIFT            15



/****************** Masks for SSC0_FDR_t **********************/
/*
   SSC0_FDR              "SSC Fractional Divider Register"
*/
/**********************************************************/

#define SSC0_FDR_MASK                   0xf3fffbff
#define SSC0_FDR_STEP_MASK              0x000003ff
#define SSC0_FDR_STEP_SHIFT             0
#define SSC0_FDR_SM_MASK                0x00000800
#define SSC0_FDR_SM_SHIFT               11
#define SSC0_FDR_SC_MASK                0x00003000
#define SSC0_FDR_SC_SHIFT               12
#define SSC0_FDR_DM_MASK                0x0000c000
#define SSC0_FDR_DM_SHIFT               14
#define SSC0_FDR_RESULT_MASK            0x03ff0000
#define SSC0_FDR_RESULT_SHIFT           16
#define SSC0_FDR_SUSACK_MASK            0x10000000
#define SSC0_FDR_SUSACK_SHIFT           28
#define SSC0_FDR_SUSREQ_MASK            0x20000000
#define SSC0_FDR_SUSREQ_SHIFT           29
#define SSC0_FDR_ENHW_MASK              0x40000000
#define SSC0_FDR_ENHW_SHIFT             30
#define SSC0_FDR_DISCLK_MASK            0x80000000
#define SSC0_FDR_DISCLK_SHIFT           31



/****************** Masks for SSC0_ID_t **********************/
/*
   SSC0_ID               "SSC Module Identification Register"
*/
/**********************************************************/

#define SSC0_ID_MASK                    0x00000000



/****************** Masks for SSC0_PISEL_t **********************/
/*
   SSC0_PISEL            "SSC Port Input Select Register"
*/
/**********************************************************/

#define SSC0_PISEL_MASK                 0x0000013f
#define SSC0_PISEL_MRIS_MASK            0x00000001
#define SSC0_PISEL_MRIS_SHIFT           0
#define SSC0_PISEL_SRIS_MASK            0x00000002
#define SSC0_PISEL_SRIS_SHIFT           1
#define SSC0_PISEL_SCIS_MASK            0x00000004
#define SSC0_PISEL_SCIS_SHIFT           2
#define SSC0_PISEL_SLSIS_MASK           0x00000038
#define SSC0_PISEL_SLSIS_SHIFT          3
#define SSC0_PISEL_STIP_MASK            0x00000100
#define SSC0_PISEL_STIP_SHIFT           8



/****************** Masks for SSC0_RB_t **********************/
/*
   SSC0_RB               "SSC Receive Buffer Register"
*/
/**********************************************************/

#define SSC0_RB_MASK                    0x0000ffff
#define SSC0_RB_RB_VALUE_MASK           0x0000ffff
#define SSC0_RB_RB_VALUE_SHIFT          0



/****************** Masks for SSC0_RSRC_t **********************/
/*
   SSC0_RSRC             "SSC Receive Interrupt Service Request Control Register"
*/
/**********************************************************/

#define SSC0_RSRC_MASK                  0x0000f4ff
#define SSC0_RSRC_SRPN_MASK             0x000000ff
#define SSC0_RSRC_SRPN_SHIFT            0
#define SSC0_RSRC_TOS_MASK              0x00000400
#define SSC0_RSRC_TOS_SHIFT             10
#define SSC0_RSRC_SRE_MASK              0x00001000
#define SSC0_RSRC_SRE_SHIFT             12
#define SSC0_RSRC_SRR_MASK              0x00002000
#define SSC0_RSRC_SRR_SHIFT             13
#define SSC0_RSRC_CLRR_MASK             0x00004000
#define SSC0_RSRC_CLRR_SHIFT            14
#define SSC0_RSRC_SETR_MASK             0x00008000
#define SSC0_RSRC_SETR_SHIFT            15



/****************** Masks for SSC0_SSOC_t **********************/
/*
   SSC0_SSOC             "Slave Select Output Control Register"
*/
/**********************************************************/

#define SSC0_SSOC_MASK                  0x0000ffff
#define SSC0_SSOC_AOL0_MASK             0x00000001
#define SSC0_SSOC_AOL0_SHIFT            0
#define SSC0_SSOC_AOL1_MASK             0x00000002
#define SSC0_SSOC_AOL1_SHIFT            1
#define SSC0_SSOC_AOL2_MASK             0x00000004
#define SSC0_SSOC_AOL2_SHIFT            2
#define SSC0_SSOC_AOL3_MASK             0x00000008
#define SSC0_SSOC_AOL3_SHIFT            3
#define SSC0_SSOC_AOL4_MASK             0x00000010
#define SSC0_SSOC_AOL4_SHIFT            4
#define SSC0_SSOC_AOL5_MASK             0x00000020
#define SSC0_SSOC_AOL5_SHIFT            5
#define SSC0_SSOC_AOL6_MASK             0x00000040
#define SSC0_SSOC_AOL6_SHIFT            6
#define SSC0_SSOC_AOL7_MASK             0x00000080
#define SSC0_SSOC_AOL7_SHIFT            7
#define SSC0_SSOC_OEN0_MASK             0x00000100
#define SSC0_SSOC_OEN0_SHIFT            8
#define SSC0_SSOC_OEN1_MASK             0x00000200
#define SSC0_SSOC_OEN1_SHIFT            9
#define SSC0_SSOC_OEN2_MASK             0x00000400
#define SSC0_SSOC_OEN2_SHIFT            10
#define SSC0_SSOC_OEN3_MASK             0x00000800
#define SSC0_SSOC_OEN3_SHIFT            11
#define SSC0_SSOC_OEN4_MASK             0x00001000
#define SSC0_SSOC_OEN4_SHIFT            12
#define SSC0_SSOC_OEN5_MASK             0x00002000
#define SSC0_SSOC_OEN5_SHIFT            13
#define SSC0_SSOC_OEN6_MASK             0x00004000
#define SSC0_SSOC_OEN6_SHIFT            14
#define SSC0_SSOC_OEN7_MASK             0x00008000
#define SSC0_SSOC_OEN7_SHIFT            15



/****************** Masks for SSC0_SSOTC_t **********************/
/*
   SSC0_SSOTC            "Slave Select Output Timing Control Register"
*/
/**********************************************************/

#define SSC0_SSOTC_MASK                 0x0000013f
#define SSC0_SSOTC_LEAD_MASK            0x00000003
#define SSC0_SSOTC_LEAD_SHIFT           0
#define SSC0_SSOTC_TRAIL_MASK           0x0000000c
#define SSC0_SSOTC_TRAIL_SHIFT          2
#define SSC0_SSOTC_INACT_MASK           0x00000030
#define SSC0_SSOTC_INACT_SHIFT          4
#define SSC0_SSOTC_SLSO7MOD_MASK        0x00000100
#define SSC0_SSOTC_SLSO7MOD_SHIFT       8



/****************** Masks for SSC0_STAT_t **********************/
/*
   SSC0_STAT             "SSC Status Register"
*/
/**********************************************************/

#define SSC0_STAT_MASK                  0x00001f0f
#define SSC0_STAT_BC_MASK               0x0000000f
#define SSC0_STAT_BC_SHIFT              0
#define SSC0_STAT_TE_MASK               0x00000100
#define SSC0_STAT_TE_SHIFT              8
#define SSC0_STAT_RE_MASK               0x00000200
#define SSC0_STAT_RE_SHIFT              9
#define SSC0_STAT_PE_MASK               0x00000400
#define SSC0_STAT_PE_SHIFT              10
#define SSC0_STAT_BE_MASK               0x00000800
#define SSC0_STAT_BE_SHIFT              11
#define SSC0_STAT_BSY_MASK              0x00001000
#define SSC0_STAT_BSY_SHIFT             12



/****************** Masks for SSC0_TB_t **********************/
/*
   SSC0_TB               "SSC Transmit Buffer Register"
*/
/**********************************************************/

#define SSC0_TB_MASK                    0x0000ffff
#define SSC0_TB_TB_VALUE_MASK           0x0000ffff
#define SSC0_TB_TB_VALUE_SHIFT          0



/****************** Masks for SSC0_TSRC_t **********************/
/*
   SSC0_TSRC             "SSC Transmit Interrupt Service Request Control Register"
*/
/**********************************************************/

#define SSC0_TSRC_MASK                  0x0000f4ff
#define SSC0_TSRC_SRPN_MASK             0x000000ff
#define SSC0_TSRC_SRPN_SHIFT            0
#define SSC0_TSRC_TOS_MASK              0x00000400
#define SSC0_TSRC_TOS_SHIFT             10
#define SSC0_TSRC_SRE_MASK              0x00001000
#define SSC0_TSRC_SRE_SHIFT             12
#define SSC0_TSRC_SRR_MASK              0x00002000
#define SSC0_TSRC_SRR_SHIFT             13
#define SSC0_TSRC_CLRR_MASK             0x00004000
#define SSC0_TSRC_CLRR_SHIFT            14
#define SSC0_TSRC_SETR_MASK             0x00008000
#define SSC0_TSRC_SETR_SHIFT            15




#endif /* _HAVE_TRICORE_SSC0_MASKS_H_ */

