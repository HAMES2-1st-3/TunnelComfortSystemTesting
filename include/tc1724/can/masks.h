/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CAN_MASKS_H_
#define _HAVE_TRICORE_CAN_MASKS_H_


/****************** Masks for CAN_AWDR_t **********************/
/*
   CAN_AWDR              "Application Watchdog Register"
*/
/**********************************************************/

#define CAN_AWDR_MASK                   0x000000ff
#define CAN_AWDR_AWDV_MASK              0x000000ff
#define CAN_AWDR_AWDV_SHIFT             0



/****************** Masks for CAN_CLC_t **********************/
/*
   CAN_CLC               "CAN Clock Control Register"
*/
/**********************************************************/

#define CAN_CLC_MASK                    0x0000003f
#define CAN_CLC_DISR_MASK               0x00000001
#define CAN_CLC_DISR_SHIFT              0
#define CAN_CLC_DISS_MASK               0x00000002
#define CAN_CLC_DISS_SHIFT              1
#define CAN_CLC_SPEN_MASK               0x00000004
#define CAN_CLC_SPEN_SHIFT              2
#define CAN_CLC_EDIS_MASK               0x00000008
#define CAN_CLC_EDIS_SHIFT              3
#define CAN_CLC_SBWE_MASK               0x00000010
#define CAN_CLC_SBWE_SHIFT              4
#define CAN_CLC_FSOE_MASK               0x00000020
#define CAN_CLC_FSOE_SHIFT              5



/****************** Masks for CAN_CYCTMR_t **********************/
/*
   CAN_CYCTMR            "Cycle Time Register"
*/
/**********************************************************/

#define CAN_CYCTMR_MASK                 0x3f3fffff
#define CAN_CYCTMR_CYCTM_MASK           0x0000ffff
#define CAN_CYCTMR_CYCTM_SHIFT          0
#define CAN_CYCTMR_BCC_MASK             0x003f0000
#define CAN_CYCTMR_BCC_SHIFT            16
#define CAN_CYCTMR_CSM_MASK             0x3f000000
#define CAN_CYCTMR_CSM_SHIFT            24



/****************** Masks for CAN_FDR_t **********************/
/*
   CAN_FDR               "CAN Fractional Divider Register"
*/
/**********************************************************/

#define CAN_FDR_MASK                    0x3000fbff
#define CAN_FDR_STEP_MASK               0x000003ff
#define CAN_FDR_STEP_SHIFT              0
#define CAN_FDR_SM_MASK                 0x00000800
#define CAN_FDR_SM_SHIFT                11
#define CAN_FDR_SC_MASK                 0x00003000
#define CAN_FDR_SC_SHIFT                12
#define CAN_FDR_DM_MASK                 0x0000c000
#define CAN_FDR_DM_SHIFT                14
#define CAN_FDR_SUSACK_MASK             0x10000000
#define CAN_FDR_SUSACK_SHIFT            28
#define CAN_FDR_SUSREQ_MASK             0x20000000
#define CAN_FDR_SUSREQ_SHIFT            29



/****************** Masks for CAN_GMR_t **********************/
/*
   CAN_GMR               "Global Mark Register"
*/
/**********************************************************/

#define CAN_GMR_MASK                    0xfffffe00
#define CAN_GMR_GMFR_MASK               0x0000fe00
#define CAN_GMR_GMFR_SHIFT              9
#define CAN_GMR_GM_MASK                 0xffff0000
#define CAN_GMR_GM_SHIFT                16



/****************** Masks for CAN_ID_t **********************/
/*
   CAN_ID                "Module Identification Register"
*/
/**********************************************************/

#define CAN_ID_MASK                     0xffffffff
#define CAN_ID_MOD_REV_MASK             0x000000ff
#define CAN_ID_MOD_REV_SHIFT            0
#define CAN_ID_MOD_TYPE_MASK            0x0000ff00
#define CAN_ID_MOD_TYPE_SHIFT           8
#define CAN_ID_MOD_NUMBER_MASK          0xffff0000
#define CAN_ID_MOD_NUMBER_SHIFT         16



/****************** Masks for CAN_LGMR_t **********************/
/*
   CAN_LGMR              "Last Global Mark Register"
*/
/**********************************************************/

#define CAN_LGMR_MASK                   0xfffffe00
#define CAN_LGMR_LGMFR_MASK             0x0000fe00
#define CAN_LGMR_LGMFR_SHIFT            9
#define CAN_LGMR_LGM_MASK               0xffff0000
#define CAN_LGMR_LGM_SHIFT              16



/****************** Masks for CAN_LOR_t **********************/
/*
   CAN_LOR               "Local Offset Register"
*/
/**********************************************************/

#define CAN_LOR_MASK                    0xfffffe03
#define CAN_LOR_NEWDISC_MASK            0x00000001
#define CAN_LOR_NEWDISC_SHIFT           0
#define CAN_LOR_DISC_MASK               0x00000002
#define CAN_LOR_DISC_SHIFT              1
#define CAN_LOR_LOFFR_MASK              0x0000fe00
#define CAN_LOR_LOFFR_SHIFT             9
#define CAN_LOR_LOF_MASK                0xffff0000
#define CAN_LOR_LOF_SHIFT               16



/****************** Masks for CAN_LREFMR_t **********************/
/*
   CAN_LREFMR            "Last Reference Mark Register"
*/
/**********************************************************/

#define CAN_LREFMR_MASK                 0xfffffe00
#define CAN_LREFMR_LREFMFR_MASK         0x0000fe00
#define CAN_LREFMR_LREFMFR_SHIFT        9
#define CAN_LREFMR_LREFM_MASK           0xffff0000
#define CAN_LREFMR_LREFM_SHIFT          16



/****************** Masks for CAN_LTR_t **********************/
/*
   CAN_LTR               "Local Time Register"
*/
/**********************************************************/

#define CAN_LTR_MASK                    0xffffffc0
#define CAN_LTR_LTFR_MASK               0x0000ffc0
#define CAN_LTR_LTFR_SHIFT              6
#define CAN_LTR_LT_MASK                 0xffff0000
#define CAN_LTR_LT_SHIFT                16



/****************** Masks for CAN_MCR_t **********************/
/*
   CAN_MCR               "Module Control Register"
*/
/**********************************************************/

#define CAN_MCR_MASK                    0x0000f00f
#define CAN_MCR_CLKSEL_MASK             0x0000000f
#define CAN_MCR_CLKSEL_SHIFT            0
#define CAN_MCR_MPSEL_MASK              0x0000f000
#define CAN_MCR_MPSEL_SHIFT             12



/****************** Masks for CAN_MITR_t **********************/
/*
   CAN_MITR              "Module Interrupt Trigger Register"
*/
/**********************************************************/

#define CAN_MITR_MASK                   0x0000ffff
#define CAN_MITR_IT_MASK                0x0000ffff
#define CAN_MITR_IT_SHIFT               0



/****************** Masks for CAN_MSIMASK_t **********************/
/*
   CAN_MSIMASK           "Message Index Mask Register"
*/
/**********************************************************/

#define CAN_MSIMASK_MASK                0xffffffff
#define CAN_MSIMASK_IM_MASK             0xffffffff
#define CAN_MSIMASK_IM_SHIFT            0



/****************** Masks for CAN_PANCTR_t **********************/
/*
   CAN_PANCTR            "Panel Control Register"
*/
/**********************************************************/

#define CAN_PANCTR_MASK                 0xffff03ff
#define CAN_PANCTR_PANCMD_MASK          0x000000ff
#define CAN_PANCTR_PANCMD_SHIFT         0
#define CAN_PANCTR_BUSY_MASK            0x00000100
#define CAN_PANCTR_BUSY_SHIFT           8
#define CAN_PANCTR_RBUSY_MASK           0x00000200
#define CAN_PANCTR_RBUSY_SHIFT          9
#define CAN_PANCTR_PANAR1_MASK          0x00ff0000
#define CAN_PANCTR_PANAR1_SHIFT         16
#define CAN_PANCTR_PANAR2_MASK          0xff000000
#define CAN_PANCTR_PANAR2_SHIFT         24



/****************** Masks for CAN_REFMR_t **********************/
/*
   CAN_REFMR             "Reference Mark Register"
*/
/**********************************************************/

#define CAN_REFMR_MASK                  0xfffffe00
#define CAN_REFMR_REFMFR_MASK           0x0000fe00
#define CAN_REFMR_REFMFR_SHIFT          9
#define CAN_REFMR_REFM_MASK             0xffff0000
#define CAN_REFMR_REFM_SHIFT            16



/****************** Masks for CAN_SISR_t **********************/
/*
   CAN_SISR              "Scheduler Instruction Status Register"
*/
/**********************************************************/

#define CAN_SISR_MASK                   0x007fffff
#define CAN_SISR_INP_MASK               0x0000000f
#define CAN_SISR_INP_SHIFT              0
#define CAN_SISR_IENTRAF0_MASK          0x00000010
#define CAN_SISR_IENTRAF0_SHIFT         4
#define CAN_SISR_IENTRAF1_MASK          0x00000020
#define CAN_SISR_IENTRAF1_SHIFT         5
#define CAN_SISR_IENRECF0_MASK          0x00000040
#define CAN_SISR_IENRECF0_SHIFT         6
#define CAN_SISR_IENRECF1_MASK          0x00000080
#define CAN_SISR_IENRECF1_SHIFT         7
#define CAN_SISR_CHEN_MASK              0x00000100
#define CAN_SISR_CHEN_SHIFT             8
#define CAN_SISR_TREN_MASK              0x00000200
#define CAN_SISR_TREN_SHIFT             9
#define CAN_SISR_ALTMSG_MASK            0x00000c00
#define CAN_SISR_ALTMSG_SHIFT           10
#define CAN_SISR_ARBM_MASK              0x00003000
#define CAN_SISR_ARBM_SHIFT             12
#define CAN_SISR_GM_MASK                0x00004000
#define CAN_SISR_GM_SHIFT               14
#define CAN_SISR_ICF_MASK               0x00008000
#define CAN_SISR_ICF_SHIFT              15
#define CAN_SISR_RCEV_MASK              0x00010000
#define CAN_SISR_RCEV_SHIFT             16
#define CAN_SISR_TCEV_MASK              0x00020000
#define CAN_SISR_TCEV_SHIFT             17
#define CAN_SISR_ICEV_MASK              0x00040000
#define CAN_SISR_ICEV_SHIFT             18
#define CAN_SISR_ARBV_MASK              0x00080000
#define CAN_SISR_ARBV_SHIFT             19
#define CAN_SISR_TMEV_MASK              0x00100000
#define CAN_SISR_TMEV_SHIFT             20
#define CAN_SISR_RMEV_MASK              0x00200000
#define CAN_SISR_RMEV_SHIFT             21
#define CAN_SISR_BCEV_MASK              0x00400000
#define CAN_SISR_BCEV_SHIFT             22



/****************** Masks for CAN_STPTR0_t **********************/
/*
   CAN_STPTR0            "Scheduler Start Pointer Node 0 Register"
*/
/**********************************************************/

#define CAN_STPTR0_MASK                 0x0000007f
#define CAN_STPTR0_STPTR_MASK           0x0000007f
#define CAN_STPTR0_STPTR_SHIFT          0



/****************** Masks for CAN_STSRH_t **********************/
/*
   CAN_STSRH             "Scheduler Timing Status Register High"
*/
/**********************************************************/

#define CAN_STSRH_MASK                  0xffffffff
#define CAN_STSRH_TMETMV_MASK           0x0000ffff
#define CAN_STSRH_TMETMV_SHIFT          0
#define CAN_STSRH_RCEMSGNR_MASK         0x00ff0000
#define CAN_STSRH_RCEMSGNR_SHIFT        16
#define CAN_STSRH_TCEMSGNR_MASK         0xff000000
#define CAN_STSRH_TCEMSGNR_SHIFT        24



/****************** Masks for CAN_STSRL_t **********************/
/*
   CAN_STSRL             "Scheduler Timing Status Register Low"
*/
/**********************************************************/

#define CAN_STSRL_MASK                  0xffffffff
#define CAN_STSRL_RMETMV_MASK           0x0000ffff
#define CAN_STSRL_RMETMV_SHIFT          0
#define CAN_STSRL_BCETMV_MASK           0xffff0000
#define CAN_STSRL_BCETMV_SHIFT          16



/****************** Masks for CAN_SYNMR_t **********************/
/*
   CAN_SYNMR             "Synchronization Mark Register"
*/
/**********************************************************/

#define CAN_SYNMR_MASK                  0xfffffe00
#define CAN_SYNMR_SYNMFR_MASK           0x0000fe00
#define CAN_SYNMR_SYNMFR_SHIFT          9
#define CAN_SYNMR_SYNM_MASK             0xffff0000
#define CAN_SYNMR_SYNM_SHIFT            16



/****************** Masks for CAN_TTCFGR_t **********************/
/*
   CAN_TTCFGR            "Time Trigger Configuration Register"
*/
/**********************************************************/

#define CAN_TTCFGR_MASK                 0xffffff7f
#define CAN_TTCFGR_IRO_MASK             0x0000007f
#define CAN_TTCFGR_IRO_SHIFT            0
#define CAN_TTCFGR_EXPTT_MASK           0x0000ff00
#define CAN_TTCFGR_EXPTT_SHIFT          8
#define CAN_TTCFGR_RTO_MASK             0x00ff0000
#define CAN_TTCFGR_RTO_SHIFT            16
#define CAN_TTCFGR_TTCNT_MASK           0xff000000
#define CAN_TTCFGR_TTCNT_SHIFT          24



/****************** Masks for CAN_TTCR_t **********************/
/*
   CAN_TTCR              "Time Trigger Control Register"
*/
/**********************************************************/

#define CAN_TTCR_MASK                   0xff3f71ff
#define CAN_TTCR_TTM_MASK               0x00000003
#define CAN_TTCR_TTM_SHIFT              0
#define CAN_TTCR_ETESEL_MASK            0x0000000c
#define CAN_TTCR_ETESEL_SHIFT           2
#define CAN_TTCR_ETSSEL_MASK            0x00000070
#define CAN_TTCR_ETSSEL_SHIFT           4
#define CAN_TTCR_ETM_MASK               0x00000080
#define CAN_TTCR_ETM_SHIFT              7
#define CAN_TTCR_TTLVL_MASK             0x00000100
#define CAN_TTCR_TTLVL_SHIFT            8
#define CAN_TTCR_TMPRIO_MASK            0x00007000
#define CAN_TTCR_TMPRIO_SHIFT           12
#define CAN_TTCR_CYCLE_MASK             0x003f0000
#define CAN_TTCR_CYCLE_SHIFT            16
#define CAN_TTCR_TENW_MASK              0x0f000000
#define CAN_TTCR_TENW_SHIFT             24
#define CAN_TTCR_RMDLC_MASK             0xf0000000
#define CAN_TTCR_RMDLC_SHIFT            28



/****************** Masks for CAN_TTFMR_t **********************/
/*
   CAN_TTFMR             "Time Trigger Flag Modification Register"
*/
/**********************************************************/

#define CAN_TTFMR_MASK                  0x0000003f
#define CAN_TTFMR_CFGMEL_MASK           0x00000003
#define CAN_TTFMR_CFGMEL_SHIFT          0
#define CAN_TTFMR_NIGSR_MASK            0x0000000c
#define CAN_TTFMR_NIGSR_SHIFT           2
#define CAN_TTFMR_STE_MASK              0x00000010
#define CAN_TTFMR_STE_SHIFT             4
#define CAN_TTFMR_ETREVR_MASK           0x00000020
#define CAN_TTFMR_ETREVR_SHIFT          5



/****************** Masks for CAN_TTIER_t **********************/
/*
   CAN_TTIER             "Time Trigger Interrupt Enable Register"
*/
/**********************************************************/

#define CAN_TTIER_MASK                  0x00001fcf
#define CAN_TTIER_NBCIE_MASK            0x00000003
#define CAN_TTIER_NBCIE_SHIFT           0
#define CAN_TTIER_TENWERIE_MASK         0x00000004
#define CAN_TTIER_TENWERIE_SHIFT        2
#define CAN_TTIER_TTERIE_MASK           0x00000008
#define CAN_TTIER_TTERIE_SHIFT          3
#define CAN_TTIER_WTEIE_MASK            0x00000040
#define CAN_TTIER_WTEIE_SHIFT           6
#define CAN_TTIER_AWDIE_MASK            0x00000080
#define CAN_TTIER_AWDIE_SHIFT           7
#define CAN_TTIER_ERRSCIE_MASK          0x00000100
#define CAN_TTIER_ERRSCIE_SHIFT         8
#define CAN_TTIER_MSRCIE_MASK           0x00000200
#define CAN_TTIER_MSRCIE_SHIFT          9
#define CAN_TTIER_SYNCSCIE_MASK         0x00000400
#define CAN_TTIER_SYNCSCIE_SHIFT        10
#define CAN_TTIER_SEIE_MASK             0x00000800
#define CAN_TTIER_SEIE_SHIFT            11
#define CAN_TTIER_NOTIFIE_MASK          0x00001000
#define CAN_TTIER_NOTIFIE_SHIFT         12



/****************** Masks for CAN_TTINPR_t **********************/
/*
   CAN_TTINPR            "Time Trigger Interrupt Node Pointer Register"
*/
/**********************************************************/

#define CAN_TTINPR_MASK                 0x00000fff
#define CAN_TTINPR_ERRINP_MASK          0x0000000f
#define CAN_TTINPR_ERRINP_SHIFT         0
#define CAN_TTINPR_NBCINP_MASK          0x000000f0
#define CAN_TTINPR_NBCINP_SHIFT         4
#define CAN_TTINPR_NOTIFINP_MASK        0x00000f00
#define CAN_TTINPR_NOTIFINP_SHIFT       8



/****************** Masks for CAN_TTIRR_t **********************/
/*
   CAN_TTIRR             "Time Trigger Interrupt Request Register"
*/
/**********************************************************/

#define CAN_TTIRR_MASK                  0x0003ffff
#define CAN_TTIRR_NMC_MASK              0x00000001
#define CAN_TTIRR_NMC_SHIFT             0
#define CAN_TTIRR_NBC_MASK              0x00000002
#define CAN_TTIRR_NBC_SHIFT             1
#define CAN_TTIRR_TENWER_MASK           0x00000004
#define CAN_TTIRR_TENWER_SHIFT          2
#define CAN_TTIRR_TTUF_MASK             0x00000008
#define CAN_TTIRR_TTUF_SHIFT            3
#define CAN_TTIRR_TTOF_MASK             0x00000010
#define CAN_TTIRR_TTOF_SHIFT            4
#define CAN_TTIRR_WTE_MASK              0x00000020
#define CAN_TTIRR_WTE_SHIFT             5
#define CAN_TTIRR_IWTE_MASK             0x00000040
#define CAN_TTIRR_IWTE_SHIFT            6
#define CAN_TTIRR_AWDERR_MASK           0x00000080
#define CAN_TTIRR_AWDERR_SHIFT          7
#define CAN_TTIRR_ERRSC_MASK            0x00000100
#define CAN_TTIRR_ERRSC_SHIFT           8
#define CAN_TTIRR_MSRC_MASK             0x00000200
#define CAN_TTIRR_MSRC_SHIFT            9
#define CAN_TTIRR_SYNCSC_MASK           0x00000400
#define CAN_TTIRR_SYNCSC_SHIFT          10
#define CAN_TTIRR_EOS_MASK              0x00000800
#define CAN_TTIRR_EOS_SHIFT             11
#define CAN_TTIRR_WFE_MASK              0x00001000
#define CAN_TTIRR_WFE_SHIFT             12
#define CAN_TTIRR_DISC_MASK             0x00002000
#define CAN_TTIRR_DISC_SHIFT            13
#define CAN_TTIRR_SERR1_MASK            0x00004000
#define CAN_TTIRR_SERR1_SHIFT           14
#define CAN_TTIRR_SERR2_MASK            0x00008000
#define CAN_TTIRR_SERR2_SHIFT           15
#define CAN_TTIRR_CFGERR_MASK           0x00010000
#define CAN_TTIRR_CFGERR_SHIFT          16
#define CAN_TTIRR_TURERR_MASK           0x00020000
#define CAN_TTIRR_TURERR_SHIFT          17



/****************** Masks for CAN_TTSR_t **********************/
/*
   CAN_TTSR              "Time Trigger Status Register"
*/
/**********************************************************/

#define CAN_TTSR_MASK                   0x0777ff3f
#define CAN_TTSR_ERRS_MASK              0x00000003
#define CAN_TTSR_ERRS_SHIFT             0
#define CAN_TTSR_MSR_MASK               0x0000000c
#define CAN_TTSR_MSR_SHIFT              2
#define CAN_TTSR_SYNCS_MASK             0x00000030
#define CAN_TTSR_SYNCS_SHIFT            4
#define CAN_TTSR_EFI_MASK               0x00000100
#define CAN_TTSR_EFI_SHIFT              8
#define CAN_TTSR_EFF_MASK               0x00000200
#define CAN_TTSR_EFF_SHIFT              9
#define CAN_TTSR_REFTRG_MASK            0x00000400
#define CAN_TTSR_REFTRG_SHIFT           10
#define CAN_TTSR_ARB_MASK               0x00000800
#define CAN_TTSR_ARB_SHIFT              11
#define CAN_TTSR_CFGM_MASK              0x00001000
#define CAN_TTSR_CFGM_SHIFT             12
#define CAN_TTSR_TMPC_MASK              0x00002000
#define CAN_TTSR_TMPC_SHIFT             13
#define CAN_TTSR_TRAF_MASK              0x00004000
#define CAN_TTSR_TRAF_SHIFT             14
#define CAN_TTSR_RECF_MASK              0x00008000
#define CAN_TTSR_RECF_SHIFT             15
#define CAN_TTSR_MSCMIN_MASK            0x00070000
#define CAN_TTSR_MSCMIN_SHIFT           16
#define CAN_TTSR_MSCMAX_MASK            0x00700000
#define CAN_TTSR_MSCMAX_SHIFT           20
#define CAN_TTSR_NIG_MASK               0x01000000
#define CAN_TTSR_NIG_SHIFT              24
#define CAN_TTSR_ETR_MASK               0x02000000
#define CAN_TTSR_ETR_SHIFT              25
#define CAN_TTSR_ETREV_MASK             0x04000000
#define CAN_TTSR_ETREV_SHIFT            26



/****************** Masks for CAN_TURR_t **********************/
/*
   CAN_TURR              "Time Unit Ratio Register"
*/
/**********************************************************/

#define CAN_TURR_MASK                   0xffdfffc1
#define CAN_TURR_ADJEN_MASK             0x00000001
#define CAN_TURR_ADJEN_SHIFT            0
#define CAN_TURR_TURADJ_MASK            0x0000ffc0
#define CAN_TURR_TURADJ_SHIFT           6
#define CAN_TURR_VAL_MASK               0x00010000
#define CAN_TURR_VAL_SHIFT              16
#define CAN_TURR_LTCS_MASK              0x00020000
#define CAN_TURR_LTCS_SHIFT             17
#define CAN_TURR_LTDIV_MASK             0x001c0000
#define CAN_TURR_LTDIV_SHIFT            18
#define CAN_TURR_TUR_MASK               0xffc00000
#define CAN_TURR_TUR_SHIFT              22




#endif /* _HAVE_TRICORE_CAN_MASKS_H_ */

