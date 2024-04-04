/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CCU60_CCU61_SHAREMASKS_H_
#define _HAVE_TRICORE_CCU60_CCU61_SHAREMASKS_H_


/****************** Masks for CCUn_CC60R_t **********************/
/*
   CCU60_CC60R           "Capture/Compare Register for Channel CC60"
   CCU61_CC60R           "Capture/Compare Register for Channel CC60"
*/
/**********************************************************/

#define CCUn_CC60R_MASK                 0x0000ffff
#define CCUn_CC60R_CC60V_MASK           0x0000ffff
#define CCUn_CC60R_CC60V_SHIFT          0



/****************** Masks for CCUn_CC60SR_t **********************/
/*
   CCU60_CC60SR          "Capture/Compare Shadow Register for Channel CC60"
   CCU61_CC60SR          "Capture/Compare Shadow Register for Channel CC60"
*/
/**********************************************************/

#define CCUn_CC60SR_MASK                0x0000ffff
#define CCUn_CC60SR_CC60S_MASK          0x0000ffff
#define CCUn_CC60SR_CC60S_SHIFT         0



/****************** Masks for CCUn_CC61R_t **********************/
/*
   CCU60_CC61R           "Capture/Compare Register for Channel CC61"
   CCU61_CC61R           "Capture/Compare Register for Channel CC61"
*/
/**********************************************************/

#define CCUn_CC61R_MASK                 0x0000ffff
#define CCUn_CC61R_CC61V_MASK           0x0000ffff
#define CCUn_CC61R_CC61V_SHIFT          0



/****************** Masks for CCUn_CC61SR_t **********************/
/*
   CCU60_CC61SR          "Capture/Compare Shadow Register for Channel CC61"
   CCU61_CC61SR          "Capture/Compare Shadow Register for Channel CC61"
*/
/**********************************************************/

#define CCUn_CC61SR_MASK                0x0000ffff
#define CCUn_CC61SR_CC61S_MASK          0x0000ffff
#define CCUn_CC61SR_CC61S_SHIFT         0



/****************** Masks for CCUn_CC62R_t **********************/
/*
   CCU60_CC62R           "Capture/Compare Register for Channel CC62"
   CCU61_CC62R           "Capture/Compare Register for Channel CC62"
*/
/**********************************************************/

#define CCUn_CC62R_MASK                 0x0000ffff
#define CCUn_CC62R_CC62V_MASK           0x0000ffff
#define CCUn_CC62R_CC62V_SHIFT          0



/****************** Masks for CCUn_CC62SR_t **********************/
/*
   CCU60_CC62SR          "Capture/Compare Shadow Register for Channel CC62"
   CCU61_CC62SR          "Capture/Compare Shadow Register for Channel CC62"
*/
/**********************************************************/

#define CCUn_CC62SR_MASK                0x0000ffff
#define CCUn_CC62SR_CC62S_MASK          0x0000ffff
#define CCUn_CC62SR_CC62S_SHIFT         0



/****************** Masks for CCUn_CC63R_t **********************/
/*
   CCU60_CC63R           "Compare Register for Channel CC63"
   CCU61_CC63R           "Compare Register for Channel CC63"
*/
/**********************************************************/

#define CCUn_CC63R_MASK                 0x0000ffff
#define CCUn_CC63R_CC63V_MASK           0x0000ffff
#define CCUn_CC63R_CC63V_SHIFT          0



/****************** Masks for CCUn_CC63SR_t **********************/
/*
   CCU60_CC63SR          "Compare Shadow Register for Channel  CC63"
   CCU61_CC63SR          "Compare Shadow Register for Channel  CC63"
*/
/**********************************************************/

#define CCUn_CC63SR_MASK                0x0000ffff
#define CCUn_CC63SR_CC63S_MASK          0x0000ffff
#define CCUn_CC63SR_CC63S_SHIFT         0



/****************** Masks for CCUn_CMPMODIF_t **********************/
/*
   CCU60_CMPMODIF        "Compare State Modification Register"
   CCU61_CMPMODIF        "Compare State Modification Register"
*/
/**********************************************************/

#define CCUn_CMPMODIF_MASK              0x00004747
#define CCUn_CMPMODIF_MCC60S_MASK       0x00000001
#define CCUn_CMPMODIF_MCC60S_SHIFT      0
#define CCUn_CMPMODIF_MCC61S_MASK       0x00000002
#define CCUn_CMPMODIF_MCC61S_SHIFT      1
#define CCUn_CMPMODIF_MCC62S_MASK       0x00000004
#define CCUn_CMPMODIF_MCC62S_SHIFT      2
#define CCUn_CMPMODIF_MCC63S_MASK       0x00000040
#define CCUn_CMPMODIF_MCC63S_SHIFT      6
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
   CCU60_CMPSTAT         "Compare Status Register"
   CCU61_CMPSTAT         "Compare Status Register"
*/
/**********************************************************/

#define CCUn_CMPSTAT_MASK               0x0000ff7f
#define CCUn_CMPSTAT_CC60ST_MASK        0x00000001
#define CCUn_CMPSTAT_CC60ST_SHIFT       0
#define CCUn_CMPSTAT_CC61ST_MASK        0x00000002
#define CCUn_CMPSTAT_CC61ST_SHIFT       1
#define CCUn_CMPSTAT_CC62ST_MASK        0x00000004
#define CCUn_CMPSTAT_CC62ST_SHIFT       2
#define CCUn_CMPSTAT_CCPOS0_MASK        0x00000008
#define CCUn_CMPSTAT_CCPOS0_SHIFT       3
#define CCUn_CMPSTAT_CCPOS1_MASK        0x00000010
#define CCUn_CMPSTAT_CCPOS1_SHIFT       4
#define CCUn_CMPSTAT_CCPOS2_MASK        0x00000020
#define CCUn_CMPSTAT_CCPOS2_SHIFT       5
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
*/
/**********************************************************/

#define CCUn_ID_MASK                    0xffffffff
#define CCUn_ID_MOD_REV_MASK            0x000000ff
#define CCUn_ID_MOD_REV_SHIFT           0
#define CCUn_ID_MOD_TYPE_MASK           0x0000ff00
#define CCUn_ID_MOD_TYPE_SHIFT          8
#define CCUn_ID_MOD_NUMBER_MASK         0xffff0000
#define CCUn_ID_MOD_NUMBER_SHIFT        16



/****************** Masks for CCUn_IEN_t **********************/
/*
   CCU60_IEN             "Capture/Compare Interrupt Enable Register"
   CCU61_IEN             "Capture/Compare Interrupt Enable Register"
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



/****************** Masks for CCUn_INP_t **********************/
/*
   CCU60_INP             "Capture/Compare Interrupt Node Pointer Register"
   CCU61_INP             "Capture/Compare Interrupt Node Pointer Register"
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
   CCU60_IS              "Capture/Compare Interrupt Status Register"
   CCU61_IS              "Capture/Compare Interrupt Status Register"
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
   CCU60_ISR             "Capture/Compare Interrupt Status Reset Register"
   CCU61_ISR             "Capture/Compare Interrupt Status Reset Register"
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
   CCU60_ISS             "Capture/Compare Interrupt Status Set Register"
   CCU61_ISS             "Capture/Compare Interrupt Status Set Register"
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



/****************** Masks for CCUn_MCMCTR_t **********************/
/*
   CCU60_MCMCTR          "Multi-Channel Mode Control Register"
   CCU61_MCMCTR          "Multi-Channel Mode Control Register"
*/
/**********************************************************/

#define CCUn_MCMCTR_MASK                0x00000037
#define CCUn_MCMCTR_SWSEL_MASK          0x00000007
#define CCUn_MCMCTR_SWSEL_SHIFT         0
#define CCUn_MCMCTR_SWSYN_MASK          0x00000030
#define CCUn_MCMCTR_SWSYN_SHIFT         4



/****************** Masks for CCUn_MCMOUT_t **********************/
/*
   CCU60_MCMOUT          "Multi-Channel Mode Output Register"
   CCU61_MCMOUT          "Multi-Channel Mode Output Register"
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



/****************** Masks for CCUn_PISEL0_t **********************/
/*
   CCU60_PISEL0          "Port Input Select Register 0"
   CCU61_PISEL0          "Port Input Select Register 0"
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
*/
/**********************************************************/

#define CCUn_PISEL2_MASK                0x00000003
#define CCUn_PISEL2_IST13HR_MASK        0x00000003
#define CCUn_PISEL2_IST13HR_SHIFT       0



/****************** Masks for CCUn_PSLR_t **********************/
/*
   CCU60_PSLR            "Passive State Level Register"
   CCU61_PSLR            "Passive State Level Register"
*/
/**********************************************************/

#define CCUn_PSLR_MASK                  0x000000bf
#define CCUn_PSLR_PSL_MASK              0x0000003f
#define CCUn_PSLR_PSL_SHIFT             0
#define CCUn_PSLR_PSL63_MASK            0x00000080
#define CCUn_PSLR_PSL63_SHIFT           7



/****************** Masks for CCUn_SRCm_t **********************/
/*
   CCU60_SRC0            "CCU60 Service Request Control Register 0"
   CCU60_SRC1            "CCU60 Service Request Control Register 1"
   CCU60_SRC2            "CCU60 Service Request Control Register 2"
   CCU60_SRC3            "CCU60 Service Request Control Register 3"
   CCU61_SRC0            "CCU60 Service Request Control Register 0"
   CCU61_SRC1            "CCU60 Service Request Control Register 1"
   CCU61_SRC2            "CCU60 Service Request Control Register 2"
   CCU61_SRC3            "CCU60 Service Request Control Register 3"
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
*/
/**********************************************************/

#define CCUn_T12_MASK                   0x0000ffff
#define CCUn_T12_T12CV_MASK             0x0000ffff
#define CCUn_T12_T12CV_SHIFT            0



/****************** Masks for CCUn_T12DTC_t **********************/
/*
   CCU60_T12DTC          "Dead-Time Control Register for Timer12"
   CCU61_T12DTC          "Dead-Time Control Register for Timer12"
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
   CCU60_T12MSEL         "T12 Capture/Compare Mode Select Register"
   CCU61_T12MSEL         "T12 Capture/Compare Mode Select Register"
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
   CCU60_T12PR           "Timer T12 period register"
   CCU61_T12PR           "Timer T12 period register"
*/
/**********************************************************/

#define CCUn_T12PR_MASK                 0x0000ffff
#define CCUn_T12PR_T12PV_MASK           0x0000ffff
#define CCUn_T12PR_T12PV_SHIFT          0



/****************** Masks for CCUn_T13_t **********************/
/*
   CCU60_T13             "Timer T13 Register"
   CCU61_T13             "Timer T13 Register"
*/
/**********************************************************/

#define CCUn_T13_MASK                   0x0000ffff
#define CCUn_T13_T13CV_MASK             0x0000ffff
#define CCUn_T13_T13CV_SHIFT            0



/****************** Masks for CCUn_T13PR_t **********************/
/*
   CCU60_T13PR           "Timer T13 Period Register"
   CCU61_T13PR           "Timer T13 Period Register"
*/
/**********************************************************/

#define CCUn_T13PR_MASK                 0x0000ffff
#define CCUn_T13PR_T13PV_MASK           0x0000ffff
#define CCUn_T13PR_T13PV_SHIFT          0



/****************** Masks for CCUn_TCTR0_t **********************/
/*
   CCU60_TCTR0           "Timer Control Register 0"
   CCU61_TCTR0           "Timer Control Register 0"
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
*/
/**********************************************************/

#define CCUn_TCTR2_MASK                 0x00000fff
#define CCUn_TCTR2_T12SSC_MASK          0x00000001
#define CCUn_TCTR2_T12SSC_SHIFT         0
#define CCUn_TCTR2_T13SSC_MASK          0x00000002
#define CCUn_TCTR2_T13SSC_SHIFT         1
#define CCUn_TCTR2_T13TEC_MASK          0x0000001c
#define CCUn_TCTR2_T13TEC_SHIFT         2
#define CCUn_TCTR2_T13TED_MASK          0x00000060
#define CCUn_TCTR2_T13TED_SHIFT         5
#define CCUn_TCTR2_SUSCFG_MASK          0x00000080
#define CCUn_TCTR2_SUSCFG_SHIFT         7
#define CCUn_TCTR2_T12RSEL_MASK         0x00000300
#define CCUn_TCTR2_T12RSEL_SHIFT        8
#define CCUn_TCTR2_T13RSEL_MASK         0x00000c00
#define CCUn_TCTR2_T13RSEL_SHIFT        10



/****************** Masks for CCUn_TCTR4_t **********************/
/*
   CCU60_TCTR4           "Timer Control Register 4"
   CCU61_TCTR4           "Timer Control Register 4"
*/
/**********************************************************/

#define CCUn_TCTR4_MASK                 0x0000c7cf
#define CCUn_TCTR4_T12RR_MASK           0x00000001
#define CCUn_TCTR4_T12RR_SHIFT          0
#define CCUn_TCTR4_T12RS_MASK           0x00000002
#define CCUn_TCTR4_T12RS_SHIFT          1
#define CCUn_TCTR4_T12RES_MASK          0x00000004
#define CCUn_TCTR4_T12RES_SHIFT         2
#define CCUn_TCTR4_DTRES_MASK           0x00000008
#define CCUn_TCTR4_DTRES_SHIFT          3
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
#define CCUn_TCTR4_T13STR_MASK          0x00004000
#define CCUn_TCTR4_T13STR_SHIFT         14
#define CCUn_TCTR4_T13STD_MASK          0x00008000
#define CCUn_TCTR4_T13STD_SHIFT         15



/****************** Masks for CCUn_TRPCTR_t **********************/
/*
   CCU60_TRPCTR          "Trap Control Register"
   CCU61_TRPCTR          "Trap Control Register"
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




#endif /* _HAVE_TRICORE_CCU60_CCU61_SHAREMASKS_H_ */

