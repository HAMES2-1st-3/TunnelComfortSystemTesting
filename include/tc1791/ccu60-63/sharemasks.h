/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CCU60_63_SHAREMASKS_H_
#define _HAVE_TRICORE_CCU60_63_SHAREMASKS_H_


/****************** Masks for CCUn_CCmR_t **********************/
/*
   CCU60_CC60R           "Capture/Compare Register for Channel CC60"
   CCU60_CC61R           "Capture/Compare Register for Channel CC61"
   CCU60_CC62R           "Capture/Compare Register for Channel CC62"
   CCU60_CC63R           "Compare Register for T13"
   CCU61_CC60R           "Capture/Compare Register for Channel CC60"
   CCU61_CC61R           "Capture/Compare Register for Channel CC61"
   CCU61_CC62R           "Capture/Compare Register for Channel CC62"
   CCU61_CC63R           "Compare Register for T13"
   CCU62_CC60R           "Capture/Compare Register for Channel CC60"
   CCU62_CC61R           "Capture/Compare Register for Channel CC61"
   CCU62_CC62R           "Capture/Compare Register for Channel CC62"
   CCU62_CC63R           "Compare Register for T13"
   CCU63_CC60R           "Capture/Compare Register for Channel CC60"
   CCU63_CC61R           "Capture/Compare Register for Channel CC61"
   CCU63_CC62R           "Capture/Compare Register for Channel CC62"
   CCU63_CC63R           "Compare Register for T13"
*/
/**********************************************************/

#define CCUn_CCmR_MASK                  0x0000ffff
#define CCUn_CCmR_CCV_MASK              0x0000ffff
#define CCUn_CCmR_CCV_SHIFT             0



/****************** Masks for CCUn_CCmSR_t **********************/
/*
   CCU60_CC60SR          "Capture/Compare Shadow Reg. for Channel CC60"
   CCU60_CC61SR          "Capture/Compare Shadow Reg. for Channel CC61"
   CCU60_CC62SR          "Capture/Compare Shadow Reg. for Channel CC62"
   CCU60_CC63SR          "Compare Shadow Register for T13"
   CCU61_CC60SR          "Capture/Compare Shadow Reg. for Channel CC60"
   CCU61_CC61SR          "Capture/Compare Shadow Reg. for Channel CC61"
   CCU61_CC62SR          "Capture/Compare Shadow Reg. for Channel CC62"
   CCU61_CC63SR          "Compare Shadow Register for T13"
   CCU62_CC60SR          "Capture/Compare Shadow Reg. for Channel CC60"
   CCU62_CC61SR          "Capture/Compare Shadow Reg. for Channel CC61"
   CCU62_CC62SR          "Capture/Compare Shadow Reg. for Channel CC62"
   CCU62_CC63SR          "Compare Shadow Register for T13"
   CCU63_CC60SR          "Capture/Compare Shadow Reg. for Channel CC60"
   CCU63_CC61SR          "Capture/Compare Shadow Reg. for Channel CC61"
   CCU63_CC62SR          "Capture/Compare Shadow Reg. for Channel CC62"
   CCU63_CC63SR          "Compare Shadow Register for T13"
*/
/**********************************************************/

#define CCUn_CCmSR_MASK                 0x0000ffff
#define CCUn_CCmSR_CCS_MASK             0x0000ffff
#define CCUn_CCmSR_CCS_SHIFT            0



/****************** Masks for CCUn_CMPMODIF_t **********************/
/*
   CCU60_CMPMODIF        "Compare State Modification Register"
   CCU61_CMPMODIF        "Compare State Modification Register"
   CCU62_CMPMODIF        "Compare State Modification Register"
   CCU63_CMPMODIF        "Compare State Modification Register"
*/
/**********************************************************/

#define CCUn_CMPMODIF_MASK              0x00004787
#define CCUn_CMPMODIF_MCC60S_MASK       0x00000001
#define CCUn_CMPMODIF_MCC60S_SHIFT      0
#define CCUn_CMPMODIF_MCC61S_MASK       0x00000002
#define CCUn_CMPMODIF_MCC61S_SHIFT      1
#define CCUn_CMPMODIF_MCC62S_MASK       0x00000004
#define CCUn_CMPMODIF_MCC62S_SHIFT      2
#define CCUn_CMPMODIF_MCC63S_MASK       0x00000080
#define CCUn_CMPMODIF_MCC63S_SHIFT      7
#define CCUn_CMPMODIF_MCC60R_MASK       0x00000100
#define CCUn_CMPMODIF_MCC60R_SHIFT      8
#define CCUn_CMPMODIF_MCC61R_MASK       0x00000200
#define CCUn_CMPMODIF_MCC61R_SHIFT      9
#define CCUn_CMPMODIF_MCC62R_MASK       0x00000400
#define CCUn_CMPMODIF_MCC62R_SHIFT      10
#define CCUn_CMPMODIF_MCC63R_MASK       0x00004000
#define CCUn_CMPMODIF_MCC63R_SHIFT      14



/****************** Masks for CCUn_CMPSTAT_t **********************/
/*
   CCU60_CMPSTAT         "Compare State Register"
   CCU61_CMPSTAT         "Compare State Register"
   CCU62_CMPSTAT         "Compare State Register"
   CCU63_CMPSTAT         "Compare State Register"
*/
/**********************************************************/

#define CCUn_CMPSTAT_MASK               0x0000ff7f
#define CCUn_CMPSTAT_CC60ST_MASK        0x00000001
#define CCUn_CMPSTAT_CC60ST_SHIFT       0
#define CCUn_CMPSTAT_CC61ST_MASK        0x00000002
#define CCUn_CMPSTAT_CC61ST_SHIFT       1
#define CCUn_CMPSTAT_CC62ST_MASK        0x00000004
#define CCUn_CMPSTAT_CC62ST_SHIFT       2
#define CCUn_CMPSTAT_CCPOS60_MASK       0x00000008
#define CCUn_CMPSTAT_CCPOS60_SHIFT      3
#define CCUn_CMPSTAT_CCPOS61_MASK       0x00000010
#define CCUn_CMPSTAT_CCPOS61_SHIFT      4
#define CCUn_CMPSTAT_CCPOS62_MASK       0x00000020
#define CCUn_CMPSTAT_CCPOS62_SHIFT      5
#define CCUn_CMPSTAT_CC63ST_MASK        0x00000040
#define CCUn_CMPSTAT_CC63ST_SHIFT       6
#define CCUn_CMPSTAT_CC60PS_MASK        0x00000100
#define CCUn_CMPSTAT_CC60PS_SHIFT       8
#define CCUn_CMPSTAT_COUT60PS_MASK      0x00000200
#define CCUn_CMPSTAT_COUT60PS_SHIFT     9
#define CCUn_CMPSTAT_CC61PS_MASK        0x00000400
#define CCUn_CMPSTAT_CC61PS_SHIFT       10
#define CCUn_CMPSTAT_COUT61PS_MASK      0x00000800
#define CCUn_CMPSTAT_COUT61PS_SHIFT     11
#define CCUn_CMPSTAT_CC62PS_MASK        0x00001000
#define CCUn_CMPSTAT_CC62PS_SHIFT       12
#define CCUn_CMPSTAT_COUT62PS_MASK      0x00002000
#define CCUn_CMPSTAT_COUT62PS_SHIFT     13
#define CCUn_CMPSTAT_COUT63PS_MASK      0x00004000
#define CCUn_CMPSTAT_COUT63PS_SHIFT     14
#define CCUn_CMPSTAT_T13IM_MASK         0x00008000
#define CCUn_CMPSTAT_T13IM_SHIFT        15



/****************** Masks for CCUn_ID_t **********************/
/*
   CCU60_ID              "Module Identification Register"
   CCU61_ID              "Module Identification Register"
   CCU62_ID              "Module Identification Register"
   CCU63_ID              "Module Identification Register"
*/
/**********************************************************/

#define CCUn_ID_MASK                    0x0000ffff
#define CCUn_ID_MODREV_MASK             0x000000ff
#define CCUn_ID_MODREV_SHIFT            0
#define CCUn_ID_MODNUM_MASK             0x0000ff00
#define CCUn_ID_MODNUM_SHIFT            8



/****************** Masks for CCUn_IEN_t **********************/
/*
   CCU60_IEN             "Interrupt Enable Register"
   CCU61_IEN             "Interrupt Enable Register"
   CCU62_IEN             "Interrupt Enable Register"
   CCU63_IEN             "Interrupt Enable Register"
*/
/**********************************************************/

#define CCUn_IEN_MASK                   0x0000f7ff
#define CCUn_IEN_ENCC60R_MASK           0x00000001
#define CCUn_IEN_ENCC60R_SHIFT          0
#define CCUn_IEN_ENCC60F_MASK           0x00000002
#define CCUn_IEN_ENCC60F_SHIFT          1
#define CCUn_IEN_ENCC61R_MASK           0x00000004
#define CCUn_IEN_ENCC61R_SHIFT          2
#define CCUn_IEN_ENCC61F_MASK           0x00000008
#define CCUn_IEN_ENCC61F_SHIFT          3
#define CCUn_IEN_ENCC62R_MASK           0x00000010
#define CCUn_IEN_ENCC62R_SHIFT          4
#define CCUn_IEN_ENCC62F_MASK           0x00000020
#define CCUn_IEN_ENCC62F_SHIFT          5
#define CCUn_IEN_ENT12OM_MASK           0x00000040
#define CCUn_IEN_ENT12OM_SHIFT          6
#define CCUn_IEN_ENT12PM_MASK           0x00000080
#define CCUn_IEN_ENT12PM_SHIFT          7
#define CCUn_IEN_ENT13CM_MASK           0x00000100
#define CCUn_IEN_ENT13CM_SHIFT          8
#define CCUn_IEN_ENT13PM_MASK           0x00000200
#define CCUn_IEN_ENT13PM_SHIFT          9
#define CCUn_IEN_ENTRPF_MASK            0x00000400
#define CCUn_IEN_ENTRPF_SHIFT           10
#define CCUn_IEN_ENCHE_MASK             0x00001000
#define CCUn_IEN_ENCHE_SHIFT            12
#define CCUn_IEN_ENWHE_MASK             0x00002000
#define CCUn_IEN_ENWHE_SHIFT            13
#define CCUn_IEN_ENIDLE_MASK            0x00004000
#define CCUn_IEN_ENIDLE_SHIFT           14
#define CCUn_IEN_ENSTR_MASK             0x00008000
#define CCUn_IEN_ENSTR_SHIFT            15



/****************** Masks for CCUn_IMON_t **********************/
/*
   CCU60_IMON            "Input Monitoring Register"
   CCU61_IMON            "Input Monitoring Register"
   CCU62_IMON            "Input Monitoring Register"
   CCU63_IMON            "Input Monitoring Register"
*/
/**********************************************************/

#define CCUn_IMON_MASK                  0x000003ff
#define CCUn_IMON_LBE_MASK              0x00000001
#define CCUn_IMON_LBE_SHIFT             0
#define CCUn_IMON_CCPOS0I_MASK          0x00000002
#define CCUn_IMON_CCPOS0I_SHIFT         1
#define CCUn_IMON_CCPOS1I_MASK          0x00000004
#define CCUn_IMON_CCPOS1I_SHIFT         2
#define CCUn_IMON_CCPOS2I_MASK          0x00000008
#define CCUn_IMON_CCPOS2I_SHIFT         3
#define CCUn_IMON_CC60INI_MASK          0x00000010
#define CCUn_IMON_CC60INI_SHIFT         4
#define CCUn_IMON_CC61INI_MASK          0x00000020
#define CCUn_IMON_CC61INI_SHIFT         5
#define CCUn_IMON_CC62INI_MASK          0x00000040
#define CCUn_IMON_CC62INI_SHIFT         6
#define CCUn_IMON_CTRAPI_MASK           0x00000080
#define CCUn_IMON_CTRAPI_SHIFT          7
#define CCUn_IMON_T12HRI_MASK           0x00000100
#define CCUn_IMON_T12HRI_SHIFT          8
#define CCUn_IMON_T13HRI_MASK           0x00000200
#define CCUn_IMON_T13HRI_SHIFT          9



/****************** Masks for CCUn_INP_t **********************/
/*
   CCU60_INP             "Interrupt Node Pointer Register"
   CCU61_INP             "Interrupt Node Pointer Register"
   CCU62_INP             "Interrupt Node Pointer Register"
   CCU63_INP             "Interrupt Node Pointer Register"
*/
/**********************************************************/

#define CCUn_INP_MASK                   0x00003fff
#define CCUn_INP_INPCC60_MASK           0x00000003
#define CCUn_INP_INPCC60_SHIFT          0
#define CCUn_INP_INPCC61_MASK           0x0000000c
#define CCUn_INP_INPCC61_SHIFT          2
#define CCUn_INP_INPCC62_MASK           0x00000030
#define CCUn_INP_INPCC62_SHIFT          4
#define CCUn_INP_INPCHE_MASK            0x000000c0
#define CCUn_INP_INPCHE_SHIFT           6
#define CCUn_INP_INPERR_MASK            0x00000300
#define CCUn_INP_INPERR_SHIFT           8
#define CCUn_INP_INPT12_MASK            0x00000c00
#define CCUn_INP_INPT12_SHIFT           10
#define CCUn_INP_INPT13_MASK            0x00003000
#define CCUn_INP_INPT13_SHIFT           12



/****************** Masks for CCUn_IS_t **********************/
/*
   CCU60_IS              "Interrupt Status Register"
   CCU61_IS              "Interrupt Status Register"
   CCU62_IS              "Interrupt Status Register"
   CCU63_IS              "Interrupt Status Register"
*/
/**********************************************************/

#define CCUn_IS_MASK                    0x0000ffff
#define CCUn_IS_ICC60R_MASK             0x00000001
#define CCUn_IS_ICC60R_SHIFT            0
#define CCUn_IS_ICC60F_MASK             0x00000002
#define CCUn_IS_ICC60F_SHIFT            1
#define CCUn_IS_ICC61R_MASK             0x00000004
#define CCUn_IS_ICC61R_SHIFT            2
#define CCUn_IS_ICC61F_MASK             0x00000008
#define CCUn_IS_ICC61F_SHIFT            3
#define CCUn_IS_ICC62R_MASK             0x00000010
#define CCUn_IS_ICC62R_SHIFT            4
#define CCUn_IS_ICC62F_MASK             0x00000020
#define CCUn_IS_ICC62F_SHIFT            5
#define CCUn_IS_T12OM_MASK              0x00000040
#define CCUn_IS_T12OM_SHIFT             6
#define CCUn_IS_T12PM_MASK              0x00000080
#define CCUn_IS_T12PM_SHIFT             7
#define CCUn_IS_T13CM_MASK              0x00000100
#define CCUn_IS_T13CM_SHIFT             8
#define CCUn_IS_T13PM_MASK              0x00000200
#define CCUn_IS_T13PM_SHIFT             9
#define CCUn_IS_TRPF_MASK               0x00000400
#define CCUn_IS_TRPF_SHIFT              10
#define CCUn_IS_TRPS_MASK               0x00000800
#define CCUn_IS_TRPS_SHIFT              11
#define CCUn_IS_CHE_MASK                0x00001000
#define CCUn_IS_CHE_SHIFT               12
#define CCUn_IS_WHE_MASK                0x00002000
#define CCUn_IS_WHE_SHIFT               13
#define CCUn_IS_IDLE_MASK               0x00004000
#define CCUn_IS_IDLE_SHIFT              14
#define CCUn_IS_STR_MASK                0x00008000
#define CCUn_IS_STR_SHIFT               15



/****************** Masks for CCUn_ISR_t **********************/
/*
   CCU60_ISR             "Interrupt Status Reset Register"
   CCU61_ISR             "Interrupt Status Reset Register"
   CCU62_ISR             "Interrupt Status Reset Register"
   CCU63_ISR             "Interrupt Status Reset Register"
*/
/**********************************************************/

#define CCUn_ISR_MASK                   0x0000f7ff
#define CCUn_ISR_RCC60R_MASK            0x00000001
#define CCUn_ISR_RCC60R_SHIFT           0
#define CCUn_ISR_RCC60F_MASK            0x00000002
#define CCUn_ISR_RCC60F_SHIFT           1
#define CCUn_ISR_RCC61R_MASK            0x00000004
#define CCUn_ISR_RCC61R_SHIFT           2
#define CCUn_ISR_RCC61F_MASK            0x00000008
#define CCUn_ISR_RCC61F_SHIFT           3
#define CCUn_ISR_RCC62R_MASK            0x00000010
#define CCUn_ISR_RCC62R_SHIFT           4
#define CCUn_ISR_RCC62F_MASK            0x00000020
#define CCUn_ISR_RCC62F_SHIFT           5
#define CCUn_ISR_RT12OM_MASK            0x00000040
#define CCUn_ISR_RT12OM_SHIFT           6
#define CCUn_ISR_RT12PM_MASK            0x00000080
#define CCUn_ISR_RT12PM_SHIFT           7
#define CCUn_ISR_RT13CM_MASK            0x00000100
#define CCUn_ISR_RT13CM_SHIFT           8
#define CCUn_ISR_RT13PM_MASK            0x00000200
#define CCUn_ISR_RT13PM_SHIFT           9
#define CCUn_ISR_RTRPF_MASK             0x00000400
#define CCUn_ISR_RTRPF_SHIFT            10
#define CCUn_ISR_RCHE_MASK              0x00001000
#define CCUn_ISR_RCHE_SHIFT             12
#define CCUn_ISR_RWHE_MASK              0x00002000
#define CCUn_ISR_RWHE_SHIFT             13
#define CCUn_ISR_RIDLE_MASK             0x00004000
#define CCUn_ISR_RIDLE_SHIFT            14
#define CCUn_ISR_RSTR_MASK              0x00008000
#define CCUn_ISR_RSTR_SHIFT             15



/****************** Masks for CCUn_ISS_t **********************/
/*
   CCU60_ISS             "Interrupt Status Set Register"
   CCU61_ISS             "Interrupt Status Set Register"
   CCU62_ISS             "Interrupt Status Set Register"
   CCU63_ISS             "Interrupt Status Set Register"
*/
/**********************************************************/

#define CCUn_ISS_MASK                   0x0000ffff
#define CCUn_ISS_SCC60R_MASK            0x00000001
#define CCUn_ISS_SCC60R_SHIFT           0
#define CCUn_ISS_SCC60F_MASK            0x00000002
#define CCUn_ISS_SCC60F_SHIFT           1
#define CCUn_ISS_SCC61R_MASK            0x00000004
#define CCUn_ISS_SCC61R_SHIFT           2
#define CCUn_ISS_SCC61F_MASK            0x00000008
#define CCUn_ISS_SCC61F_SHIFT           3
#define CCUn_ISS_SCC62R_MASK            0x00000010
#define CCUn_ISS_SCC62R_SHIFT           4
#define CCUn_ISS_SCC62F_MASK            0x00000020
#define CCUn_ISS_SCC62F_SHIFT           5
#define CCUn_ISS_ST12OM_MASK            0x00000040
#define CCUn_ISS_ST12OM_SHIFT           6
#define CCUn_ISS_ST12PM_MASK            0x00000080
#define CCUn_ISS_ST12PM_SHIFT           7
#define CCUn_ISS_ST13CM_MASK            0x00000100
#define CCUn_ISS_ST13CM_SHIFT           8
#define CCUn_ISS_ST13PM_MASK            0x00000200
#define CCUn_ISS_ST13PM_SHIFT           9
#define CCUn_ISS_STRPF_MASK             0x00000400
#define CCUn_ISS_STRPF_SHIFT            10
#define CCUn_ISS_SWHC_MASK              0x00000800
#define CCUn_ISS_SWHC_SHIFT             11
#define CCUn_ISS_SCHE_MASK              0x00001000
#define CCUn_ISS_SCHE_SHIFT             12
#define CCUn_ISS_SWHE_MASK              0x00002000
#define CCUn_ISS_SWHE_SHIFT             13
#define CCUn_ISS_SIDLE_MASK             0x00004000
#define CCUn_ISS_SIDLE_SHIFT            14
#define CCUn_ISS_SSTR_MASK              0x00008000
#define CCUn_ISS_SSTR_SHIFT             15



/****************** Masks for CCUn_KSCFG_t **********************/
/*
   CCU60_KSCFG           "Kernel State Configuration Register"
   CCU61_KSCFG           "Kernel State Configuration Register"
   CCU62_KSCFG           "Kernel State Configuration Register"
   CCU63_KSCFG           "Kernel State Configuration Register"
*/
/**********************************************************/

#define CCUn_KSCFG_MASK                 0x0000bbbf
#define CCUn_KSCFG_MODEN_MASK           0x00000001
#define CCUn_KSCFG_MODEN_SHIFT          0
#define CCUn_KSCFG_BPMODEN_MASK         0x00000002
#define CCUn_KSCFG_BPMODEN_SHIFT        1
#define CCUn_KSCFG_ACK_MASK             0x00000004
#define CCUn_KSCFG_ACK_SHIFT            2
#define CCUn_KSCFG_SUSREQ_MASK          0x00000008
#define CCUn_KSCFG_SUSREQ_SHIFT         3
#define CCUn_KSCFG_NOMCFG_MASK          0x00000030
#define CCUn_KSCFG_NOMCFG_SHIFT         4
#define CCUn_KSCFG_BPNOM_MASK           0x00000080
#define CCUn_KSCFG_BPNOM_SHIFT          7
#define CCUn_KSCFG_SUMCFG_MASK          0x00000300
#define CCUn_KSCFG_SUMCFG_SHIFT         8
#define CCUn_KSCFG_BPSUM_MASK           0x00000800
#define CCUn_KSCFG_BPSUM_SHIFT          11
#define CCUn_KSCFG_COMCFG_MASK          0x00003000
#define CCUn_KSCFG_COMCFG_SHIFT         12
#define CCUn_KSCFG_BPCOM_MASK           0x00008000
#define CCUn_KSCFG_BPCOM_SHIFT          15



/****************** Masks for CCUn_KSCSR_t **********************/
/*
   CCU60_KSCSR           "Kernel State Control Sensitivity Register"
   CCU61_KSCSR           "Kernel State Control Sensitivity Register"
   CCU62_KSCSR           "Kernel State Control Sensitivity Register"
   CCU63_KSCSR           "Kernel State Control Sensitivity Register"
*/
/**********************************************************/

#define CCUn_KSCSR_MASK                 0x0000000f
#define CCUn_KSCSR_SB0_MASK             0x00000001
#define CCUn_KSCSR_SB0_SHIFT            0
#define CCUn_KSCSR_SB1_MASK             0x00000002
#define CCUn_KSCSR_SB1_SHIFT            1
#define CCUn_KSCSR_SB2_MASK             0x00000004
#define CCUn_KSCSR_SB2_SHIFT            2
#define CCUn_KSCSR_SB3_MASK             0x00000008
#define CCUn_KSCSR_SB3_SHIFT            3



/****************** Masks for CCUn_LI_t **********************/
/*
   CCU60_LI              "Lost Indicator Register"
   CCU61_LI              "Lost Indicator Register"
   CCU62_LI              "Lost Indicator Register"
   CCU63_LI              "Lost Indicator Register"
*/
/**********************************************************/

#define CCUn_LI_MASK                    0x0000e3fe
#define CCUn_LI_CCPOS0EN_MASK           0x00000002
#define CCUn_LI_CCPOS0EN_SHIFT          1
#define CCUn_LI_CCPOS1EN_MASK           0x00000004
#define CCUn_LI_CCPOS1EN_SHIFT          2
#define CCUn_LI_CCPOS2EN_MASK           0x00000008
#define CCUn_LI_CCPOS2EN_SHIFT          3
#define CCUn_LI_CC60INEN_MASK           0x00000010
#define CCUn_LI_CC60INEN_SHIFT          4
#define CCUn_LI_CC61INEN_MASK           0x00000020
#define CCUn_LI_CC61INEN_SHIFT          5
#define CCUn_LI_CC62INEN_MASK           0x00000040
#define CCUn_LI_CC62INEN_SHIFT          6
#define CCUn_LI_CTRAPEN_MASK            0x00000080
#define CCUn_LI_CTRAPEN_SHIFT           7
#define CCUn_LI_T12HREN_MASK            0x00000100
#define CCUn_LI_T12HREN_SHIFT           8
#define CCUn_LI_T13HREN_MASK            0x00000200
#define CCUn_LI_T13HREN_SHIFT           9
#define CCUn_LI_LBEEN_MASK              0x00002000
#define CCUn_LI_LBEEN_SHIFT             13
#define CCUn_LI_INPLBE_MASK             0x0000c000
#define CCUn_LI_INPLBE_SHIFT            14



/****************** Masks for CCUn_MCFG_t **********************/
/*
   CCU60_MCFG            "Module Configuration Register"
   CCU61_MCFG            "Module Configuration Register"
   CCU62_MCFG            "Module Configuration Register"
   CCU63_MCFG            "Module Configuration Register"
*/
/**********************************************************/

#define CCUn_MCFG_MASK                  0x00000007
#define CCUn_MCFG_T12_MASK              0x00000001
#define CCUn_MCFG_T12_SHIFT             0
#define CCUn_MCFG_T13_MASK              0x00000002
#define CCUn_MCFG_T13_SHIFT             1
#define CCUn_MCFG_MCM_MASK              0x00000004
#define CCUn_MCFG_MCM_SHIFT             2



/****************** Masks for CCUn_MCMCTR_t **********************/
/*
   CCU60_MCMCTR          "Multi-Channel Mode Control Register"
   CCU61_MCMCTR          "Multi-Channel Mode Control Register"
   CCU62_MCMCTR          "Multi-Channel Mode Control Register"
   CCU63_MCMCTR          "Multi-Channel Mode Control Register"
*/
/**********************************************************/

#define CCUn_MCMCTR_MASK                0x00000737
#define CCUn_MCMCTR_SWSEL_MASK          0x00000007
#define CCUn_MCMCTR_SWSEL_SHIFT         0
#define CCUn_MCMCTR_SWSYN_MASK          0x00000030
#define CCUn_MCMCTR_SWSYN_SHIFT         4
#define CCUn_MCMCTR_STE12U_MASK         0x00000100
#define CCUn_MCMCTR_STE12U_SHIFT        8
#define CCUn_MCMCTR_STE12D_MASK         0x00000200
#define CCUn_MCMCTR_STE12D_SHIFT        9
#define CCUn_MCMCTR_STE13U_MASK         0x00000400
#define CCUn_MCMCTR_STE13U_SHIFT        10



/****************** Masks for CCUn_MCMOUT_t **********************/
/*
   CCU60_MCMOUT          "Multi-Channel Mode Output Register"
   CCU61_MCMOUT          "Multi-Channel Mode Output Register"
   CCU62_MCMOUT          "Multi-Channel Mode Output Register"
   CCU63_MCMOUT          "Multi-Channel Mode Output Register"
*/
/**********************************************************/

#define CCUn_MCMOUT_MASK                0x00003f7f
#define CCUn_MCMOUT_MCMP_MASK           0x0000003f
#define CCUn_MCMOUT_MCMP_SHIFT          0
#define CCUn_MCMOUT_R_MASK              0x00000040
#define CCUn_MCMOUT_R_SHIFT             6
#define CCUn_MCMOUT_EXPH_MASK           0x00000700
#define CCUn_MCMOUT_EXPH_SHIFT          8
#define CCUn_MCMOUT_CURH_MASK           0x00003800
#define CCUn_MCMOUT_CURH_SHIFT          11



/****************** Masks for CCUn_MCMOUTS_t **********************/
/*
   CCU60_MCMOUTS         "Multi-Channel Mode Output Shadow Register"
   CCU61_MCMOUTS         "Multi-Channel Mode Output Shadow Register"
   CCU62_MCMOUTS         "Multi-Channel Mode Output Shadow Register"
   CCU63_MCMOUTS         "Multi-Channel Mode Output Shadow Register"
*/
/**********************************************************/

#define CCUn_MCMOUTS_MASK               0x0000bfbf
#define CCUn_MCMOUTS_MCMPS_MASK         0x0000003f
#define CCUn_MCMOUTS_MCMPS_SHIFT        0
#define CCUn_MCMOUTS_STRMCM_MASK        0x00000080
#define CCUn_MCMOUTS_STRMCM_SHIFT       7
#define CCUn_MCMOUTS_EXPHS_MASK         0x00000700
#define CCUn_MCMOUTS_EXPHS_SHIFT        8
#define CCUn_MCMOUTS_CURHS_MASK         0x00003800
#define CCUn_MCMOUTS_CURHS_SHIFT        11
#define CCUn_MCMOUTS_STRHP_MASK         0x00008000
#define CCUn_MCMOUTS_STRHP_SHIFT        15



/****************** Masks for CCUn_MODCTR_t **********************/
/*
   CCU60_MODCTR          "Modulation Control Register"
   CCU61_MODCTR          "Modulation Control Register"
   CCU62_MODCTR          "Modulation Control Register"
   CCU63_MODCTR          "Modulation Control Register"
*/
/**********************************************************/

#define CCUn_MODCTR_MASK                0x0000bfbf
#define CCUn_MODCTR_T12MODEN_MASK       0x0000003f
#define CCUn_MODCTR_T12MODEN_SHIFT      0
#define CCUn_MODCTR_MCMEN_MASK          0x00000080
#define CCUn_MODCTR_MCMEN_SHIFT         7
#define CCUn_MODCTR_T13MODEN_MASK       0x00003f00
#define CCUn_MODCTR_T13MODEN_SHIFT      8
#define CCUn_MODCTR_ECT13O_MASK         0x00008000
#define CCUn_MODCTR_ECT13O_SHIFT        15



/****************** Masks for CCUn_MOSEL_t **********************/
/*
   CCU60_MOSEL           "CCU60 Module Output Select Register"
   CCU62_MOSEL           "CCU62 Module Output Select Register"
*/
/**********************************************************/

#define CCUn_MOSEL_MASK                 0x000001ff
#define CCUn_MOSEL_TRIG0SEL_MASK        0x00000007
#define CCUn_MOSEL_TRIG0SEL_SHIFT       0
#define CCUn_MOSEL_TRIG1SEL_MASK        0x00000038
#define CCUn_MOSEL_TRIG1SEL_SHIFT       3
#define CCUn_MOSEL_TRIG2SEL_MASK        0x000001c0
#define CCUn_MOSEL_TRIG2SEL_SHIFT       6



/****************** Masks for CCUn_PISEL0_t **********************/
/*
   CCU60_PISEL0          "Port Input Select Register 0"
   CCU61_PISEL0          "Port Input Select Register 0"
   CCU62_PISEL0          "Port Input Select Register 0"
   CCU63_PISEL0          "Port Input Select Register 0"
*/
/**********************************************************/

#define CCUn_PISEL0_MASK                0x0000ffff
#define CCUn_PISEL0_ISCC60_MASK         0x00000003
#define CCUn_PISEL0_ISCC60_SHIFT        0
#define CCUn_PISEL0_ISCC61_MASK         0x0000000c
#define CCUn_PISEL0_ISCC61_SHIFT        2
#define CCUn_PISEL0_ISCC62_MASK         0x00000030
#define CCUn_PISEL0_ISCC62_SHIFT        4
#define CCUn_PISEL0_ISTRP_MASK          0x000000c0
#define CCUn_PISEL0_ISTRP_SHIFT         6
#define CCUn_PISEL0_ISPOS0_MASK         0x00000300
#define CCUn_PISEL0_ISPOS0_SHIFT        8
#define CCUn_PISEL0_ISPOS1_MASK         0x00000c00
#define CCUn_PISEL0_ISPOS1_SHIFT        10
#define CCUn_PISEL0_ISPOS2_MASK         0x00003000
#define CCUn_PISEL0_ISPOS2_SHIFT        12
#define CCUn_PISEL0_IST12HR_MASK        0x0000c000
#define CCUn_PISEL0_IST12HR_SHIFT       14



/****************** Masks for CCUn_PISEL2_t **********************/
/*
   CCU60_PISEL2          "Port Input Select Register 2"
   CCU61_PISEL2          "Port Input Select Register 2"
   CCU62_PISEL2          "Port Input Select Register 2"
   CCU63_PISEL2          "Port Input Select Register 2"
*/
/**********************************************************/

#define CCUn_PISEL2_MASK                0x000000ff
#define CCUn_PISEL2_IST13HR_MASK        0x00000003
#define CCUn_PISEL2_IST13HR_SHIFT       0
#define CCUn_PISEL2_ISCNT12_MASK        0x0000000c
#define CCUn_PISEL2_ISCNT12_SHIFT       2
#define CCUn_PISEL2_ISCNT13_MASK        0x00000030
#define CCUn_PISEL2_ISCNT13_SHIFT       4
#define CCUn_PISEL2_T12EXT_MASK         0x00000040
#define CCUn_PISEL2_T12EXT_SHIFT        6
#define CCUn_PISEL2_T13EXT_MASK         0x00000080
#define CCUn_PISEL2_T13EXT_SHIFT        7



/****************** Masks for CCUn_PSLR_t **********************/
/*
   CCU60_PSLR            "Passive State Level Register"
   CCU61_PSLR            "Passive State Level Register"
   CCU62_PSLR            "Passive State Level Register"
   CCU63_PSLR            "Passive State Level Register"
*/
/**********************************************************/

#define CCUn_PSLR_MASK                  0x000000bf
#define CCUn_PSLR_PSL_MASK              0x0000003f
#define CCUn_PSLR_PSL_SHIFT             0
#define CCUn_PSLR_PSL63_MASK            0x00000080
#define CCUn_PSLR_PSL63_SHIFT           7



/****************** Masks for CCUn_SRCm_t **********************/
/*
   CCU60_SRC0            "CCU60 Service Request Control Register"
   CCU60_SRC1            "CCU60 Service Request Control Register"
   CCU60_SRC2            "CCU60 Service Request Control Register"
   CCU60_SRC3            "CCU60 Service Request Control Register"
   CCU61_SRC0            "CCU61 Service Request Control Register"
   CCU61_SRC1            "CCU61 Service Request Control Register"
   CCU61_SRC2            "CCU61 Service Request Control Register"
   CCU61_SRC3            "CCU61 Service Request Control Register"
   CCU62_SRC0            "CCU62 Service Request Control Register"
   CCU62_SRC1            "CCU62 Service Request Control Register"
   CCU62_SRC2            "CCU62 Service Request Control Register"
   CCU62_SRC3            "CCU62 Service Request Control Register"
   CCU63_SRC0            "CCU63 Service Request Control Register"
   CCU63_SRC1            "CCU63 Service Request Control Register"
   CCU63_SRC2            "CCU63 Service Request Control Register"
   CCU63_SRC3            "CCU63 Service Request Control Register"
*/
/**********************************************************/

#define CCUn_SRCm_MASK                  0x0000f4ff
#define CCUn_SRCm_SRPN_MASK             0x000000ff
#define CCUn_SRCm_SRPN_SHIFT            0
#define CCUn_SRCm_TOS_MASK              0x00000400
#define CCUn_SRCm_TOS_SHIFT             10
#define CCUn_SRCm_SRE_MASK              0x00001000
#define CCUn_SRCm_SRE_SHIFT             12
#define CCUn_SRCm_SRR_MASK              0x00002000
#define CCUn_SRCm_SRR_SHIFT             13
#define CCUn_SRCm_CLRR_MASK             0x00004000
#define CCUn_SRCm_CLRR_SHIFT            14
#define CCUn_SRCm_SETR_MASK             0x00008000
#define CCUn_SRCm_SETR_SHIFT            15



/****************** Masks for CCUn_T12_t **********************/
/*
   CCU60_T12             "Timer T12 Counter Register"
   CCU61_T12             "Timer T12 Counter Register"
   CCU62_T12             "Timer T12 Counter Register"
   CCU63_T12             "Timer T12 Counter Register"
*/
/**********************************************************/

#define CCUn_T12_MASK                   0x0000ffff
#define CCUn_T12_T12CV_MASK             0x0000ffff
#define CCUn_T12_T12CV_SHIFT            0



/****************** Masks for CCUn_T12DTC_t **********************/
/*
   CCU60_T12DTC          "Dead-Time Control Register for Timer12"
   CCU61_T12DTC          "Dead-Time Control Register for Timer12"
   CCU62_T12DTC          "Dead-Time Control Register for Timer12"
   CCU63_T12DTC          "Dead-Time Control Register for Timer12"
*/
/**********************************************************/

#define CCUn_T12DTC_MASK                0x000077ff
#define CCUn_T12DTC_DTM_MASK            0x000000ff
#define CCUn_T12DTC_DTM_SHIFT           0
#define CCUn_T12DTC_DTE0_MASK           0x00000100
#define CCUn_T12DTC_DTE0_SHIFT          8
#define CCUn_T12DTC_DTE1_MASK           0x00000200
#define CCUn_T12DTC_DTE1_SHIFT          9
#define CCUn_T12DTC_DTE2_MASK           0x00000400
#define CCUn_T12DTC_DTE2_SHIFT          10
#define CCUn_T12DTC_DTR0_MASK           0x00001000
#define CCUn_T12DTC_DTR0_SHIFT          12
#define CCUn_T12DTC_DTR1_MASK           0x00002000
#define CCUn_T12DTC_DTR1_SHIFT          13
#define CCUn_T12DTC_DTR2_MASK           0x00004000
#define CCUn_T12DTC_DTR2_SHIFT          14



/****************** Masks for CCUn_T12MSEL_t **********************/
/*
   CCU60_T12MSEL         "T12 Mode Select Register"
   CCU61_T12MSEL         "T12 Mode Select Register"
   CCU62_T12MSEL         "T12 Mode Select Register"
   CCU63_T12MSEL         "T12 Mode Select Register"
*/
/**********************************************************/

#define CCUn_T12MSEL_MASK               0x0000ffff
#define CCUn_T12MSEL_MSEL60_MASK        0x0000000f
#define CCUn_T12MSEL_MSEL60_SHIFT       0
#define CCUn_T12MSEL_MSEL61_MASK        0x000000f0
#define CCUn_T12MSEL_MSEL61_SHIFT       4
#define CCUn_T12MSEL_MSEL62_MASK        0x00000f00
#define CCUn_T12MSEL_MSEL62_SHIFT       8
#define CCUn_T12MSEL_HSYNC_MASK         0x00007000
#define CCUn_T12MSEL_HSYNC_SHIFT        12
#define CCUn_T12MSEL_DBYP_MASK          0x00008000
#define CCUn_T12MSEL_DBYP_SHIFT         15



/****************** Masks for CCUn_T12PR_t **********************/
/*
   CCU60_T12PR           "Timer 12 Period Register"
   CCU61_T12PR           "Timer 12 Period Register"
   CCU62_T12PR           "Timer 12 Period Register"
   CCU63_T12PR           "Timer 12 Period Register"
*/
/**********************************************************/

#define CCUn_T12PR_MASK                 0x0000ffff
#define CCUn_T12PR_T12PV_MASK           0x0000ffff
#define CCUn_T12PR_T12PV_SHIFT          0



/****************** Masks for CCUn_T13_t **********************/
/*
   CCU60_T13             "Timer T13 Counter Register"
   CCU61_T13             "Timer T13 Counter Register"
   CCU62_T13             "Timer T13 Counter Register"
   CCU63_T13             "Timer T13 Counter Register"
*/
/**********************************************************/

#define CCUn_T13_MASK                   0x0000ffff
#define CCUn_T13_T13CV_MASK             0x0000ffff
#define CCUn_T13_T13CV_SHIFT            0



/****************** Masks for CCUn_T13PR_t **********************/
/*
   CCU60_T13PR           "Timer 13 Period Register"
   CCU61_T13PR           "Timer 13 Period Register"
   CCU62_T13PR           "Timer 13 Period Register"
   CCU63_T13PR           "Timer 13 Period Register"
*/
/**********************************************************/

#define CCUn_T13PR_MASK                 0x0000ffff
#define CCUn_T13PR_T13PV_MASK           0x0000ffff
#define CCUn_T13PR_T13PV_SHIFT          0



/****************** Masks for CCUn_TCTR0_t **********************/
/*
   CCU60_TCTR0           "Timer Control Register 0"
   CCU61_TCTR0           "Timer Control Register 0"
   CCU62_TCTR0           "Timer Control Register 0"
   CCU63_TCTR0           "Timer Control Register 0"
*/
/**********************************************************/

#define CCUn_TCTR0_MASK                 0x00003fff
#define CCUn_TCTR0_T12CLK_MASK          0x00000007
#define CCUn_TCTR0_T12CLK_SHIFT         0
#define CCUn_TCTR0_T12PRE_MASK          0x00000008
#define CCUn_TCTR0_T12PRE_SHIFT         3
#define CCUn_TCTR0_T12R_MASK            0x00000010
#define CCUn_TCTR0_T12R_SHIFT           4
#define CCUn_TCTR0_STE12_MASK           0x00000020
#define CCUn_TCTR0_STE12_SHIFT          5
#define CCUn_TCTR0_CDIR_MASK            0x00000040
#define CCUn_TCTR0_CDIR_SHIFT           6
#define CCUn_TCTR0_CTM_MASK             0x00000080
#define CCUn_TCTR0_CTM_SHIFT            7
#define CCUn_TCTR0_T13CLK_MASK          0x00000700
#define CCUn_TCTR0_T13CLK_SHIFT         8
#define CCUn_TCTR0_T13PRE_MASK          0x00000800
#define CCUn_TCTR0_T13PRE_SHIFT         11
#define CCUn_TCTR0_T13R_MASK            0x00001000
#define CCUn_TCTR0_T13R_SHIFT           12
#define CCUn_TCTR0_STE13_MASK           0x00002000
#define CCUn_TCTR0_STE13_SHIFT          13



/****************** Masks for CCUn_TCTR2_t **********************/
/*
   CCU60_TCTR2           "Timer Control Register 2"
   CCU61_TCTR2           "Timer Control Register 2"
   CCU62_TCTR2           "Timer Control Register 2"
   CCU63_TCTR2           "Timer Control Register 2"
*/
/**********************************************************/

#define CCUn_TCTR2_MASK                 0x00000f7f
#define CCUn_TCTR2_T12SSC_MASK          0x00000001
#define CCUn_TCTR2_T12SSC_SHIFT         0
#define CCUn_TCTR2_T13SSC_MASK          0x00000002
#define CCUn_TCTR2_T13SSC_SHIFT         1
#define CCUn_TCTR2_T13TEC_MASK          0x0000001c
#define CCUn_TCTR2_T13TEC_SHIFT         2
#define CCUn_TCTR2_T13TED_MASK          0x00000060
#define CCUn_TCTR2_T13TED_SHIFT         5
#define CCUn_TCTR2_T12RSEL_MASK         0x00000300
#define CCUn_TCTR2_T12RSEL_SHIFT        8
#define CCUn_TCTR2_T13RSEL_MASK         0x00000c00
#define CCUn_TCTR2_T13RSEL_SHIFT        10



/****************** Masks for CCUn_TCTR4_t **********************/
/*
   CCU60_TCTR4           "Timer Control Register 4"
   CCU61_TCTR4           "Timer Control Register 4"
   CCU62_TCTR4           "Timer Control Register 4"
   CCU63_TCTR4           "Timer Control Register 4"
*/
/**********************************************************/

#define CCUn_TCTR4_MASK                 0x0000e7ef
#define CCUn_TCTR4_T12RR_MASK           0x00000001
#define CCUn_TCTR4_T12RR_SHIFT          0
#define CCUn_TCTR4_T12RS_MASK           0x00000002
#define CCUn_TCTR4_T12RS_SHIFT          1
#define CCUn_TCTR4_T12RES_MASK          0x00000004
#define CCUn_TCTR4_T12RES_SHIFT         2
#define CCUn_TCTR4_DTRES_MASK           0x00000008
#define CCUn_TCTR4_DTRES_SHIFT          3
#define CCUn_TCTR4_T12CNT_MASK          0x00000020
#define CCUn_TCTR4_T12CNT_SHIFT         5
#define CCUn_TCTR4_T12STR_MASK          0x00000040
#define CCUn_TCTR4_T12STR_SHIFT         6
#define CCUn_TCTR4_T12STD_MASK          0x00000080
#define CCUn_TCTR4_T12STD_SHIFT         7
#define CCUn_TCTR4_T13RR_MASK           0x00000100
#define CCUn_TCTR4_T13RR_SHIFT          8
#define CCUn_TCTR4_T13RS_MASK           0x00000200
#define CCUn_TCTR4_T13RS_SHIFT          9
#define CCUn_TCTR4_T13RES_MASK          0x00000400
#define CCUn_TCTR4_T13RES_SHIFT         10
#define CCUn_TCTR4_T13CNT_MASK          0x00002000
#define CCUn_TCTR4_T13CNT_SHIFT         13
#define CCUn_TCTR4_T13STR_MASK          0x00004000
#define CCUn_TCTR4_T13STR_SHIFT         14
#define CCUn_TCTR4_T13STD_MASK          0x00008000
#define CCUn_TCTR4_T13STD_SHIFT         15



/****************** Masks for CCUn_TRPCTR_t **********************/
/*
   CCU60_TRPCTR          "Trap Control Register"
   CCU61_TRPCTR          "Trap Control Register"
   CCU62_TRPCTR          "Trap Control Register"
   CCU63_TRPCTR          "Trap Control Register"
*/
/**********************************************************/

#define CCUn_TRPCTR_MASK                0x0000ff07
#define CCUn_TRPCTR_TRPM0_MASK          0x00000001
#define CCUn_TRPCTR_TRPM0_SHIFT         0
#define CCUn_TRPCTR_TRPM1_MASK          0x00000002
#define CCUn_TRPCTR_TRPM1_SHIFT         1
#define CCUn_TRPCTR_TRPM2_MASK          0x00000004
#define CCUn_TRPCTR_TRPM2_SHIFT         2
#define CCUn_TRPCTR_TRPEN_MASK          0x00003f00
#define CCUn_TRPCTR_TRPEN_SHIFT         8
#define CCUn_TRPCTR_TRPEN13_MASK        0x00004000
#define CCUn_TRPCTR_TRPEN13_SHIFT       14
#define CCUn_TRPCTR_TRPPEN_MASK         0x00008000
#define CCUn_TRPCTR_TRPPEN_SHIFT        15




#endif /* _HAVE_TRICORE_CCU60_63_SHAREMASKS_H_ */

