/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_ERAY_MASKS_H_
#define _HAVE_TRICORE_ERAY_MASKS_H_


/****************** Masks for ERAY_ACS_t **********************/
/*
   ERAY_ACS              "Aggregated Channel Status"
*/
/**********************************************************/

#define ERAY_ACS_MASK                   0x00001f1f
#define ERAY_ACS_VFRA_MASK              0x00000001
#define ERAY_ACS_VFRA_SHIFT             0
#define ERAY_ACS_SEDA_MASK              0x00000002
#define ERAY_ACS_SEDA_SHIFT             1
#define ERAY_ACS_CEDA_MASK              0x00000004
#define ERAY_ACS_CEDA_SHIFT             2
#define ERAY_ACS_CIA_MASK               0x00000008
#define ERAY_ACS_CIA_SHIFT              3
#define ERAY_ACS_SBVA_MASK              0x00000010
#define ERAY_ACS_SBVA_SHIFT             4
#define ERAY_ACS_VFRB_MASK              0x00000100
#define ERAY_ACS_VFRB_SHIFT             8
#define ERAY_ACS_SEDB_MASK              0x00000200
#define ERAY_ACS_SEDB_SHIFT             9
#define ERAY_ACS_CEDB_MASK              0x00000400
#define ERAY_ACS_CEDB_SHIFT             10
#define ERAY_ACS_CIB_MASK               0x00000800
#define ERAY_ACS_CIB_SHIFT              11
#define ERAY_ACS_SBVB_MASK              0x00001000
#define ERAY_ACS_SBVB_SHIFT             12



/****************** Masks for ERAY_CCEV_t **********************/
/*
   ERAY_CCEV             "Communication Controller Error Vector"
*/
/**********************************************************/

#define ERAY_CCEV_MASK                  0x00001fcf
#define ERAY_CCEV_CCFC_MASK             0x0000000f
#define ERAY_CCEV_CCFC_SHIFT            0
#define ERAY_CCEV_ERRM_MASK             0x000000c0
#define ERAY_CCEV_ERRM_SHIFT            6
#define ERAY_CCEV_PTAC_MASK             0x00001f00
#define ERAY_CCEV_PTAC_SHIFT            8



/****************** Masks for ERAY_CCSV_t **********************/
/*
   ERAY_CCSV             "Communication Controller Status Vector"
*/
/**********************************************************/

#define ERAY_CCSV_MASK                  0x3fff73ff
#define ERAY_CCSV_POCS_MASK             0x0000003f
#define ERAY_CCSV_POCS_SHIFT            0
#define ERAY_CCSV_FSI_MASK              0x00000040
#define ERAY_CCSV_FSI_SHIFT             6
#define ERAY_CCSV_HRQ_MASK              0x00000080
#define ERAY_CCSV_HRQ_SHIFT             7
#define ERAY_CCSV_SLM_MASK              0x00000300
#define ERAY_CCSV_SLM_SHIFT             8
#define ERAY_CCSV_CSNI_MASK             0x00001000
#define ERAY_CCSV_CSNI_SHIFT            12
#define ERAY_CCSV_CSAI_MASK             0x00002000
#define ERAY_CCSV_CSAI_SHIFT            13
#define ERAY_CCSV_CSI_MASK              0x00004000
#define ERAY_CCSV_CSI_SHIFT             14
#define ERAY_CCSV_WSV_MASK              0x00070000
#define ERAY_CCSV_WSV_SHIFT             16
#define ERAY_CCSV_RCA_MASK              0x00f80000
#define ERAY_CCSV_RCA_SHIFT             19
#define ERAY_CCSV_PSL_MASK              0x3f000000
#define ERAY_CCSV_PSL_SHIFT             24



/****************** Masks for ERAY_CLC_t **********************/
/*
   ERAY_CLC              "ERAY Clock Control Register"
*/
/**********************************************************/

#define ERAY_CLC_MASK                   0x0000073f
#define ERAY_CLC_DISR_MASK              0x00000001
#define ERAY_CLC_DISR_SHIFT             0
#define ERAY_CLC_DISS_MASK              0x00000002
#define ERAY_CLC_DISS_SHIFT             1
#define ERAY_CLC_SPEN_MASK              0x00000004
#define ERAY_CLC_SPEN_SHIFT             2
#define ERAY_CLC_EDIS_MASK              0x00000008
#define ERAY_CLC_EDIS_SHIFT             3
#define ERAY_CLC_SBWE_MASK              0x00000010
#define ERAY_CLC_SBWE_SHIFT             4
#define ERAY_CLC_FSOE_MASK              0x00000020
#define ERAY_CLC_FSOE_SHIFT             5
#define ERAY_CLC_RMC_MASK               0x00000700
#define ERAY_CLC_RMC_SHIFT              8



/****************** Masks for ERAY_CREL_t **********************/
/*
   ERAY_CREL             "Core Release Register"
*/
/**********************************************************/

#define ERAY_CREL_MASK                  0xffffffff
#define ERAY_CREL_DAY_MASK              0x000000ff
#define ERAY_CREL_DAY_SHIFT             0
#define ERAY_CREL_MON_MASK              0x0000ff00
#define ERAY_CREL_MON_SHIFT             8
#define ERAY_CREL_YEAR_MASK             0x000f0000
#define ERAY_CREL_YEAR_SHIFT            16
#define ERAY_CREL_SUBSTEP_MASK          0x00f00000
#define ERAY_CREL_SUBSTEP_SHIFT         20
#define ERAY_CREL_STEP_MASK             0x0f000000
#define ERAY_CREL_STEP_SHIFT            24
#define ERAY_CREL_REL_MASK              0xf0000000
#define ERAY_CREL_REL_SHIFT             28



/****************** Masks for ERAY_CUST1_t **********************/
/*
   ERAY_CUST1            "Busy and Input Buffer Control Register"
*/
/**********************************************************/

#define ERAY_CUST1_MASK                 0x0000fc9f
#define ERAY_CUST1_INT0_MASK            0x00000001
#define ERAY_CUST1_INT0_SHIFT           0
#define ERAY_CUST1_OEN_MASK             0x00000002
#define ERAY_CUST1_OEN_SHIFT            1
#define ERAY_CUST1_IEN_MASK             0x00000004
#define ERAY_CUST1_IEN_SHIFT            2
#define ERAY_CUST1_IBFS_MASK            0x00000008
#define ERAY_CUST1_IBFS_SHIFT           3
#define ERAY_CUST1_IBF1PAG_MASK         0x00000010
#define ERAY_CUST1_IBF1PAG_SHIFT        4
#define ERAY_CUST1_IBF2PAG_MASK         0x00000080
#define ERAY_CUST1_IBF2PAG_SHIFT        7
#define ERAY_CUST1_RISA_MASK            0x00000c00
#define ERAY_CUST1_RISA_SHIFT           10
#define ERAY_CUST1_RISB_MASK            0x00003000
#define ERAY_CUST1_RISB_SHIFT           12
#define ERAY_CUST1_STPWTS_MASK          0x0000c000
#define ERAY_CUST1_STPWTS_SHIFT         14



/****************** Masks for ERAY_CUST3_t **********************/
/*
   ERAY_CUST3            "Customer Interface Timeout Counter"
*/
/**********************************************************/

#define ERAY_CUST3_MASK                 0xffffffff
#define ERAY_CUST3_TO_MASK              0xffffffff
#define ERAY_CUST3_TO_SHIFT             0



/****************** Masks for ERAY_DEDCON_t **********************/
/*
   ERAY_DEDCON           "DED Control"
*/
/**********************************************************/

#define ERAY_DEDCON_MASK                0x0000007f
#define ERAY_DEDCON_DEDMEN_MASK         0x00000001
#define ERAY_DEDCON_DEDMEN_SHIFT        0
#define ERAY_DEDCON_DEDT1EN_MASK        0x00000002
#define ERAY_DEDCON_DEDT1EN_SHIFT       1
#define ERAY_DEDCON_DEDT2EN_MASK        0x00000004
#define ERAY_DEDCON_DEDT2EN_SHIFT       2
#define ERAY_DEDCON_DEDO1EN_MASK        0x00000008
#define ERAY_DEDCON_DEDO1EN_SHIFT       3
#define ERAY_DEDCON_DEDO2EN_MASK        0x00000010
#define ERAY_DEDCON_DEDO2EN_SHIFT       4
#define ERAY_DEDCON_DEDI1EN_MASK        0x00000020
#define ERAY_DEDCON_DEDI1EN_SHIFT       5
#define ERAY_DEDCON_DEDI2EN_MASK        0x00000040
#define ERAY_DEDCON_DEDI2EN_SHIFT       6



/****************** Masks for ERAY_ECCR_t **********************/
/*
   ERAY_ECCR             "ECC Data Read Register"
*/
/**********************************************************/

#define ERAY_ECCR_MASK                  0x0000007f
#define ERAY_ECCR_ECC_MASK              0x0000007f
#define ERAY_ECCR_ECC_SHIFT             0



/****************** Masks for ERAY_ECCW_t **********************/
/*
   ERAY_ECCW             "ECC Data Write Register"
*/
/**********************************************************/

#define ERAY_ECCW_MASK                  0x0000007f
#define ERAY_ECCW_ECC_MASK              0x0000007f
#define ERAY_ECCW_ECC_SHIFT             0



/****************** Masks for ERAY_EIER_t **********************/
/*
   ERAY_EIER             "Error Service Request Enable Reset"
*/
/**********************************************************/

#define ERAY_EIER_MASK                  0x07070fff
#define ERAY_EIER_PEMCE_MASK            0x00000001
#define ERAY_EIER_PEMCE_SHIFT           0
#define ERAY_EIER_CNAE_MASK             0x00000002
#define ERAY_EIER_CNAE_SHIFT            1
#define ERAY_EIER_SFBME_MASK            0x00000004
#define ERAY_EIER_SFBME_SHIFT           2
#define ERAY_EIER_SFOE_MASK             0x00000008
#define ERAY_EIER_SFOE_SHIFT            3
#define ERAY_EIER_CCFE_MASK             0x00000010
#define ERAY_EIER_CCFE_SHIFT            4
#define ERAY_EIER_CCLE_MASK             0x00000020
#define ERAY_EIER_CCLE_SHIFT            5
#define ERAY_EIER_EERRE_MASK            0x00000040
#define ERAY_EIER_EERRE_SHIFT           6
#define ERAY_EIER_RFOE_MASK             0x00000080
#define ERAY_EIER_RFOE_SHIFT            7
#define ERAY_EIER_EFAE_MASK             0x00000100
#define ERAY_EIER_EFAE_SHIFT            8
#define ERAY_EIER_IIBAE_MASK            0x00000200
#define ERAY_EIER_IIBAE_SHIFT           9
#define ERAY_EIER_IOBAE_MASK            0x00000400
#define ERAY_EIER_IOBAE_SHIFT           10
#define ERAY_EIER_MHFE_MASK             0x00000800
#define ERAY_EIER_MHFE_SHIFT            11
#define ERAY_EIER_EDAE_MASK             0x00010000
#define ERAY_EIER_EDAE_SHIFT            16
#define ERAY_EIER_LTVAE_MASK            0x00020000
#define ERAY_EIER_LTVAE_SHIFT           17
#define ERAY_EIER_TABAE_MASK            0x00040000
#define ERAY_EIER_TABAE_SHIFT           18
#define ERAY_EIER_EDBE_MASK             0x01000000
#define ERAY_EIER_EDBE_SHIFT            24
#define ERAY_EIER_LTVBE_MASK            0x02000000
#define ERAY_EIER_LTVBE_SHIFT           25
#define ERAY_EIER_TABBE_MASK            0x04000000
#define ERAY_EIER_TABBE_SHIFT           26



/****************** Masks for ERAY_EIES_t **********************/
/*
   ERAY_EIES             "Error Service Request Enable Set"
*/
/**********************************************************/

#define ERAY_EIES_MASK                  0x07070fff
#define ERAY_EIES_PEMCE_MASK            0x00000001
#define ERAY_EIES_PEMCE_SHIFT           0
#define ERAY_EIES_CNAE_MASK             0x00000002
#define ERAY_EIES_CNAE_SHIFT            1
#define ERAY_EIES_SFBME_MASK            0x00000004
#define ERAY_EIES_SFBME_SHIFT           2
#define ERAY_EIES_SFOE_MASK             0x00000008
#define ERAY_EIES_SFOE_SHIFT            3
#define ERAY_EIES_CCFE_MASK             0x00000010
#define ERAY_EIES_CCFE_SHIFT            4
#define ERAY_EIES_CCLE_MASK             0x00000020
#define ERAY_EIES_CCLE_SHIFT            5
#define ERAY_EIES_EERRE_MASK            0x00000040
#define ERAY_EIES_EERRE_SHIFT           6
#define ERAY_EIES_RFOE_MASK             0x00000080
#define ERAY_EIES_RFOE_SHIFT            7
#define ERAY_EIES_EFAE_MASK             0x00000100
#define ERAY_EIES_EFAE_SHIFT            8
#define ERAY_EIES_IIBAE_MASK            0x00000200
#define ERAY_EIES_IIBAE_SHIFT           9
#define ERAY_EIES_IOBAE_MASK            0x00000400
#define ERAY_EIES_IOBAE_SHIFT           10
#define ERAY_EIES_MHFE_MASK             0x00000800
#define ERAY_EIES_MHFE_SHIFT            11
#define ERAY_EIES_EDAE_MASK             0x00010000
#define ERAY_EIES_EDAE_SHIFT            16
#define ERAY_EIES_LTVAE_MASK            0x00020000
#define ERAY_EIES_LTVAE_SHIFT           17
#define ERAY_EIES_TABAE_MASK            0x00040000
#define ERAY_EIES_TABAE_SHIFT           18
#define ERAY_EIES_EDBE_MASK             0x01000000
#define ERAY_EIES_EDBE_SHIFT            24
#define ERAY_EIES_LTVBE_MASK            0x02000000
#define ERAY_EIES_LTVBE_SHIFT           25
#define ERAY_EIES_TABBE_MASK            0x04000000
#define ERAY_EIES_TABBE_SHIFT           26



/****************** Masks for ERAY_EILS_t **********************/
/*
   ERAY_EILS             "Error Service Request Line Select"
*/
/**********************************************************/

#define ERAY_EILS_MASK                  0x07070fff
#define ERAY_EILS_PEMCL_MASK            0x00000001
#define ERAY_EILS_PEMCL_SHIFT           0
#define ERAY_EILS_CNAL_MASK             0x00000002
#define ERAY_EILS_CNAL_SHIFT            1
#define ERAY_EILS_SFBML_MASK            0x00000004
#define ERAY_EILS_SFBML_SHIFT           2
#define ERAY_EILS_SFOL_MASK             0x00000008
#define ERAY_EILS_SFOL_SHIFT            3
#define ERAY_EILS_CCFL_MASK             0x00000010
#define ERAY_EILS_CCFL_SHIFT            4
#define ERAY_EILS_CCLL_MASK             0x00000020
#define ERAY_EILS_CCLL_SHIFT            5
#define ERAY_EILS_EERRL_MASK            0x00000040
#define ERAY_EILS_EERRL_SHIFT           6
#define ERAY_EILS_RFOL_MASK             0x00000080
#define ERAY_EILS_RFOL_SHIFT            7
#define ERAY_EILS_EFAL_MASK             0x00000100
#define ERAY_EILS_EFAL_SHIFT            8
#define ERAY_EILS_IIBAL_MASK            0x00000200
#define ERAY_EILS_IIBAL_SHIFT           9
#define ERAY_EILS_IOBAL_MASK            0x00000400
#define ERAY_EILS_IOBAL_SHIFT           10
#define ERAY_EILS_MHFL_MASK             0x00000800
#define ERAY_EILS_MHFL_SHIFT            11
#define ERAY_EILS_EDAL_MASK             0x00010000
#define ERAY_EILS_EDAL_SHIFT            16
#define ERAY_EILS_LTVAL_MASK            0x00020000
#define ERAY_EILS_LTVAL_SHIFT           17
#define ERAY_EILS_TABAL_MASK            0x00040000
#define ERAY_EILS_TABAL_SHIFT           18
#define ERAY_EILS_EDBL_MASK             0x01000000
#define ERAY_EILS_EDBL_SHIFT            24
#define ERAY_EILS_LTVBL_MASK            0x02000000
#define ERAY_EILS_LTVBL_SHIFT           25
#define ERAY_EILS_TABBL_MASK            0x04000000
#define ERAY_EILS_TABBL_SHIFT           26



/****************** Masks for ERAY_EIR_t **********************/
/*
   ERAY_EIR              "Error Service Request Register"
*/
/**********************************************************/

#define ERAY_EIR_MASK                   0x07070fff
#define ERAY_EIR_PEMC_MASK              0x00000001
#define ERAY_EIR_PEMC_SHIFT             0
#define ERAY_EIR_CNA_MASK               0x00000002
#define ERAY_EIR_CNA_SHIFT              1
#define ERAY_EIR_SFBM_MASK              0x00000004
#define ERAY_EIR_SFBM_SHIFT             2
#define ERAY_EIR_SFO_MASK               0x00000008
#define ERAY_EIR_SFO_SHIFT              3
#define ERAY_EIR_CCF_MASK               0x00000010
#define ERAY_EIR_CCF_SHIFT              4
#define ERAY_EIR_CCL_MASK               0x00000020
#define ERAY_EIR_CCL_SHIFT              5
#define ERAY_EIR_EERR_MASK              0x00000040
#define ERAY_EIR_EERR_SHIFT             6
#define ERAY_EIR_RFO_MASK               0x00000080
#define ERAY_EIR_RFO_SHIFT              7
#define ERAY_EIR_EFA_MASK               0x00000100
#define ERAY_EIR_EFA_SHIFT              8
#define ERAY_EIR_IIBA_MASK              0x00000200
#define ERAY_EIR_IIBA_SHIFT             9
#define ERAY_EIR_IOBA_MASK              0x00000400
#define ERAY_EIR_IOBA_SHIFT             10
#define ERAY_EIR_MHF_MASK               0x00000800
#define ERAY_EIR_MHF_SHIFT              11
#define ERAY_EIR_EDA_MASK               0x00010000
#define ERAY_EIR_EDA_SHIFT              16
#define ERAY_EIR_LTVA_MASK              0x00020000
#define ERAY_EIR_LTVA_SHIFT             17
#define ERAY_EIR_TABA_MASK              0x00040000
#define ERAY_EIR_TABA_SHIFT             18
#define ERAY_EIR_EDB_MASK               0x01000000
#define ERAY_EIR_EDB_SHIFT              24
#define ERAY_EIR_LTVB_MASK              0x02000000
#define ERAY_EIR_LTVB_SHIFT             25
#define ERAY_EIR_TABB_MASK              0x04000000
#define ERAY_EIR_TABB_SHIFT             26



/****************** Masks for ERAY_ENDN_t **********************/
/*
   ERAY_ENDN             "Endian Register"
*/
/**********************************************************/

#define ERAY_ENDN_MASK                  0xffffffff
#define ERAY_ENDN_ETV_MASK              0xffffffff
#define ERAY_ENDN_ETV_SHIFT             0



/****************** Masks for ERAY_FCL_t **********************/
/*
   ERAY_FCL              "FIFO Critical Level"
*/
/**********************************************************/

#define ERAY_FCL_MASK                   0x000000ff
#define ERAY_FCL_CL_MASK                0x000000ff
#define ERAY_FCL_CL_SHIFT               0



/****************** Masks for ERAY_FRF_t **********************/
/*
   ERAY_FRF              "FIFO Rejection Filter"
*/
/**********************************************************/

#define ERAY_FRF_MASK                   0x01ff1fff
#define ERAY_FRF_CH_MASK                0x00000003
#define ERAY_FRF_CH_SHIFT               0
#define ERAY_FRF_FID_MASK               0x00001ffc
#define ERAY_FRF_FID_SHIFT              2
#define ERAY_FRF_CYF_MASK               0x007f0000
#define ERAY_FRF_CYF_SHIFT              16
#define ERAY_FRF_RSS_MASK               0x00800000
#define ERAY_FRF_RSS_SHIFT              23
#define ERAY_FRF_RNF_MASK               0x01000000
#define ERAY_FRF_RNF_SHIFT              24



/****************** Masks for ERAY_FRFM_t **********************/
/*
   ERAY_FRFM             "FIFO Rejection Filter Mask"
*/
/**********************************************************/

#define ERAY_FRFM_MASK                  0x00001ffc
#define ERAY_FRFM_MFID_MASK             0x00001ffc
#define ERAY_FRFM_MFID_SHIFT            2



/****************** Masks for ERAY_FSR_t **********************/
/*
   ERAY_FSR              "FIFO Status Register"
*/
/**********************************************************/

#define ERAY_FSR_MASK                   0x0000ff07
#define ERAY_FSR_RFNE_MASK              0x00000001
#define ERAY_FSR_RFNE_SHIFT             0
#define ERAY_FSR_RFCL_MASK              0x00000002
#define ERAY_FSR_RFCL_SHIFT             1
#define ERAY_FSR_RFO_MASK               0x00000004
#define ERAY_FSR_RFO_SHIFT              2
#define ERAY_FSR_RFFL_MASK              0x0000ff00
#define ERAY_FSR_RFFL_SHIFT             8



/****************** Masks for ERAY_GTUC01_t **********************/
/*
   ERAY_GTUC01           "GTU Configuration Register 1"
*/
/**********************************************************/

#define ERAY_GTUC01_MASK                0x000fffff
#define ERAY_GTUC01_UT_MASK             0x000fffff
#define ERAY_GTUC01_UT_SHIFT            0



/****************** Masks for ERAY_GTUC02_t **********************/
/*
   ERAY_GTUC02           "GTU Configuration Register 2"
*/
/**********************************************************/

#define ERAY_GTUC02_MASK                0x000f3fff
#define ERAY_GTUC02_MPC_MASK            0x00003fff
#define ERAY_GTUC02_MPC_SHIFT           0
#define ERAY_GTUC02_SNM_MASK            0x000f0000
#define ERAY_GTUC02_SNM_SHIFT           16



/****************** Masks for ERAY_GTUC03_t **********************/
/*
   ERAY_GTUC03           "GTU Configuration Register 3"
*/
/**********************************************************/

#define ERAY_GTUC03_MASK                0x7f7fffff
#define ERAY_GTUC03_UIOA_MASK           0x000000ff
#define ERAY_GTUC03_UIOA_SHIFT          0
#define ERAY_GTUC03_UIOB_MASK           0x0000ff00
#define ERAY_GTUC03_UIOB_SHIFT          8
#define ERAY_GTUC03_MIOA_MASK           0x007f0000
#define ERAY_GTUC03_MIOA_SHIFT          16
#define ERAY_GTUC03_MIOB_MASK           0x7f000000
#define ERAY_GTUC03_MIOB_SHIFT          24



/****************** Masks for ERAY_GTUC04_t **********************/
/*
   ERAY_GTUC04           "GTU Configuration Register 4"
*/
/**********************************************************/

#define ERAY_GTUC04_MASK                0x3fff3fff
#define ERAY_GTUC04_NIT_MASK            0x00003fff
#define ERAY_GTUC04_NIT_SHIFT           0
#define ERAY_GTUC04_OCS_MASK            0x3fff0000
#define ERAY_GTUC04_OCS_SHIFT           16



/****************** Masks for ERAY_GTUC05_t **********************/
/*
   ERAY_GTUC05           "GTU Configuration Register 5"
*/
/**********************************************************/

#define ERAY_GTUC05_MASK                0xff1fffff
#define ERAY_GTUC05_DCA_MASK            0x000000ff
#define ERAY_GTUC05_DCA_SHIFT           0
#define ERAY_GTUC05_DCB_MASK            0x0000ff00
#define ERAY_GTUC05_DCB_SHIFT           8
#define ERAY_GTUC05_CDD_MASK            0x001f0000
#define ERAY_GTUC05_CDD_SHIFT           16
#define ERAY_GTUC05_DEC_MASK            0xff000000
#define ERAY_GTUC05_DEC_SHIFT           24



/****************** Masks for ERAY_GTUC06_t **********************/
/*
   ERAY_GTUC06           "GTU Configuration Register 6"
*/
/**********************************************************/

#define ERAY_GTUC06_MASK                0x07ff07ff
#define ERAY_GTUC06_ASR_MASK            0x000007ff
#define ERAY_GTUC06_ASR_SHIFT           0
#define ERAY_GTUC06_MOD_MASK            0x07ff0000
#define ERAY_GTUC06_MOD_SHIFT           16



/****************** Masks for ERAY_GTUC07_t **********************/
/*
   ERAY_GTUC07           "GTU Configuration Register 7"
*/
/**********************************************************/

#define ERAY_GTUC07_MASK                0x03ff03ff
#define ERAY_GTUC07_SSL_MASK            0x000003ff
#define ERAY_GTUC07_SSL_SHIFT           0
#define ERAY_GTUC07_NSS_MASK            0x03ff0000
#define ERAY_GTUC07_NSS_SHIFT           16



/****************** Masks for ERAY_GTUC08_t **********************/
/*
   ERAY_GTUC08           "GTU Configuration Register 8"
*/
/**********************************************************/

#define ERAY_GTUC08_MASK                0x1fff003f
#define ERAY_GTUC08_MSL_MASK            0x0000003f
#define ERAY_GTUC08_MSL_SHIFT           0
#define ERAY_GTUC08_NMS_MASK            0x1fff0000
#define ERAY_GTUC08_NMS_SHIFT           16



/****************** Masks for ERAY_GTUC09_t **********************/
/*
   ERAY_GTUC09           "GTU Configuration Register 9"
*/
/**********************************************************/

#define ERAY_GTUC09_MASK                0x00031f3f
#define ERAY_GTUC09_APO_MASK            0x0000003f
#define ERAY_GTUC09_APO_SHIFT           0
#define ERAY_GTUC09_MAPO_MASK           0x00001f00
#define ERAY_GTUC09_MAPO_SHIFT          8
#define ERAY_GTUC09_DSI_MASK            0x00030000
#define ERAY_GTUC09_DSI_SHIFT           16



/****************** Masks for ERAY_GTUC10_t **********************/
/*
   ERAY_GTUC10           "GTU Configuration Register 10"
*/
/**********************************************************/

#define ERAY_GTUC10_MASK                0x07ff3fff
#define ERAY_GTUC10_MOC_MASK            0x00003fff
#define ERAY_GTUC10_MOC_SHIFT           0
#define ERAY_GTUC10_MRC_MASK            0x07ff0000
#define ERAY_GTUC10_MRC_SHIFT           16



/****************** Masks for ERAY_GTUC11_t **********************/
/*
   ERAY_GTUC11           "GTU Configuration Register 11"
*/
/**********************************************************/

#define ERAY_GTUC11_MASK                0x07070303
#define ERAY_GTUC11_EOCC_MASK           0x00000003
#define ERAY_GTUC11_EOCC_SHIFT          0
#define ERAY_GTUC11_ERCC_MASK           0x00000300
#define ERAY_GTUC11_ERCC_SHIFT          8
#define ERAY_GTUC11_EOC_MASK            0x00070000
#define ERAY_GTUC11_EOC_SHIFT           16
#define ERAY_GTUC11_ERC_MASK            0x07000000
#define ERAY_GTUC11_ERC_SHIFT           24



/****************** Masks for ERAY_IBCM_t **********************/
/*
   ERAY_IBCM             "Input Buffer Command Mask"
*/
/**********************************************************/

#define ERAY_IBCM_MASK                  0x00070007
#define ERAY_IBCM_LHSH_MASK             0x00000001
#define ERAY_IBCM_LHSH_SHIFT            0
#define ERAY_IBCM_LDSH_MASK             0x00000002
#define ERAY_IBCM_LDSH_SHIFT            1
#define ERAY_IBCM_STXRH_MASK            0x00000004
#define ERAY_IBCM_STXRH_SHIFT           2
#define ERAY_IBCM_LHSS_MASK             0x00010000
#define ERAY_IBCM_LHSS_SHIFT            16
#define ERAY_IBCM_LDSS_MASK             0x00020000
#define ERAY_IBCM_LDSS_SHIFT            17
#define ERAY_IBCM_STXRS_MASK            0x00040000
#define ERAY_IBCM_STXRS_SHIFT           18



/****************** Masks for ERAY_IBCR_t **********************/
/*
   ERAY_IBCR             "Input Buffer Command Request"
*/
/**********************************************************/

#define ERAY_IBCR_MASK                  0x807f807f
#define ERAY_IBCR_IBRH_MASK             0x0000007f
#define ERAY_IBCR_IBRH_SHIFT            0
#define ERAY_IBCR_IBSYH_MASK            0x00008000
#define ERAY_IBCR_IBSYH_SHIFT           15
#define ERAY_IBCR_IBRS_MASK             0x007f0000
#define ERAY_IBCR_IBRS_SHIFT            16
#define ERAY_IBCR_IBSYS_MASK            0x80000000
#define ERAY_IBCR_IBSYS_SHIFT           31



/****************** Masks for ERAY_IBUSYSRC_t **********************/
/*
   ERAY_IBUSYSRC         "Input Buffer Busy Service Request Control Register"
*/
/**********************************************************/

#define ERAY_IBUSYSRC_MASK              0x0000f4ff
#define ERAY_IBUSYSRC_SRPN_MASK         0x000000ff
#define ERAY_IBUSYSRC_SRPN_SHIFT        0
#define ERAY_IBUSYSRC_TOS_MASK          0x00000400
#define ERAY_IBUSYSRC_TOS_SHIFT         10
#define ERAY_IBUSYSRC_SRE_MASK          0x00001000
#define ERAY_IBUSYSRC_SRE_SHIFT         12
#define ERAY_IBUSYSRC_SRR_MASK          0x00002000
#define ERAY_IBUSYSRC_SRR_SHIFT         13
#define ERAY_IBUSYSRC_CLRR_MASK         0x00004000
#define ERAY_IBUSYSRC_CLRR_SHIFT        14
#define ERAY_IBUSYSRC_SETR_MASK         0x00008000
#define ERAY_IBUSYSRC_SETR_SHIFT        15



/****************** Masks for ERAY_ID_t **********************/
/*
   ERAY_ID               "Module Identification Register"
*/
/**********************************************************/

#define ERAY_ID_MASK                    0xffffffff
#define ERAY_ID_MOD_REV_MASK            0x000000ff
#define ERAY_ID_MOD_REV_SHIFT           0
#define ERAY_ID_MOD_TYPE_MASK           0x0000ff00
#define ERAY_ID_MOD_TYPE_SHIFT          8
#define ERAY_ID_MOD_NUMBER_MASK         0xffff0000
#define ERAY_ID_MOD_NUMBER_SHIFT        16



/****************** Masks for ERAY_ILE_t **********************/
/*
   ERAY_ILE              "Service Request Line Enable"
*/
/**********************************************************/

#define ERAY_ILE_MASK                   0x00000003
#define ERAY_ILE_EINT0_MASK             0x00000001
#define ERAY_ILE_EINT0_SHIFT            0
#define ERAY_ILE_EINT1_MASK             0x00000002
#define ERAY_ILE_EINT1_SHIFT            1



/****************** Masks for ERAY_LCK_t **********************/
/*
   ERAY_LCK              "Lock Register"
*/
/**********************************************************/

#define ERAY_LCK_MASK                   0x0000ffff
#define ERAY_LCK_CLK_MASK               0x000000ff
#define ERAY_LCK_CLK_SHIFT              0
#define ERAY_LCK_TMK_MASK               0x0000ff00
#define ERAY_LCK_TMK_SHIFT              8



/****************** Masks for ERAY_LDTS_t **********************/
/*
   ERAY_LDTS             "Last Dynamic Transmit Slot"
*/
/**********************************************************/

#define ERAY_LDTS_MASK                  0x07ff07ff
#define ERAY_LDTS_LDTA_MASK             0x000007ff
#define ERAY_LDTS_LDTA_SHIFT            0
#define ERAY_LDTS_LDTB_MASK             0x07ff0000
#define ERAY_LDTS_LDTB_SHIFT            16



/****************** Masks for ERAY_MBS_t **********************/
/*
   ERAY_MBS              "Message Buffer Status"
*/
/**********************************************************/

#define ERAY_MBS_MASK                   0x3f3fdfff
#define ERAY_MBS_VFRA_MASK              0x00000001
#define ERAY_MBS_VFRA_SHIFT             0
#define ERAY_MBS_VFRB_MASK              0x00000002
#define ERAY_MBS_VFRB_SHIFT             1
#define ERAY_MBS_SEOA_MASK              0x00000004
#define ERAY_MBS_SEOA_SHIFT             2
#define ERAY_MBS_SEOB_MASK              0x00000008
#define ERAY_MBS_SEOB_SHIFT             3
#define ERAY_MBS_CEOA_MASK              0x00000010
#define ERAY_MBS_CEOA_SHIFT             4
#define ERAY_MBS_CEOB_MASK              0x00000020
#define ERAY_MBS_CEOB_SHIFT             5
#define ERAY_MBS_SVOA_MASK              0x00000040
#define ERAY_MBS_SVOA_SHIFT             6
#define ERAY_MBS_SVOB_MASK              0x00000080
#define ERAY_MBS_SVOB_SHIFT             7
#define ERAY_MBS_TCIA_MASK              0x00000100
#define ERAY_MBS_TCIA_SHIFT             8
#define ERAY_MBS_TCIB_MASK              0x00000200
#define ERAY_MBS_TCIB_SHIFT             9
#define ERAY_MBS_ESA_MASK               0x00000400
#define ERAY_MBS_ESA_SHIFT              10
#define ERAY_MBS_ESB_MASK               0x00000800
#define ERAY_MBS_ESB_SHIFT              11
#define ERAY_MBS_MLST_MASK              0x00001000
#define ERAY_MBS_MLST_SHIFT             12
#define ERAY_MBS_FTA_MASK               0x00004000
#define ERAY_MBS_FTA_SHIFT              14
#define ERAY_MBS_FTB_MASK               0x00008000
#define ERAY_MBS_FTB_SHIFT              15
#define ERAY_MBS_CCS_MASK               0x003f0000
#define ERAY_MBS_CCS_SHIFT              16
#define ERAY_MBS_RCIS_MASK              0x01000000
#define ERAY_MBS_RCIS_SHIFT             24
#define ERAY_MBS_SFIS_MASK              0x02000000
#define ERAY_MBS_SFIS_SHIFT             25
#define ERAY_MBS_SYNS_MASK              0x04000000
#define ERAY_MBS_SYNS_SHIFT             26
#define ERAY_MBS_NFIS_MASK              0x08000000
#define ERAY_MBS_NFIS_SHIFT             27
#define ERAY_MBS_PPIS_MASK              0x10000000
#define ERAY_MBS_PPIS_SHIFT             28
#define ERAY_MBS_RESS_MASK              0x20000000
#define ERAY_MBS_RESS_SHIFT             29



/****************** Masks for ERAY_MHDC_t **********************/
/*
   ERAY_MHDC             "MHD Configuration Register"
*/
/**********************************************************/

#define ERAY_MHDC_MASK                  0x1fff007f
#define ERAY_MHDC_SFDL_MASK             0x0000007f
#define ERAY_MHDC_SFDL_SHIFT            0
#define ERAY_MHDC_SLT_MASK              0x1fff0000
#define ERAY_MHDC_SLT_SHIFT             16



/****************** Masks for ERAY_MHDF_t **********************/
/*
   ERAY_MHDF             "Message Handler Constraints Flags"
*/
/**********************************************************/

#define ERAY_MHDF_MASK                  0x000001ff
#define ERAY_MHDF_SNUA_MASK             0x00000001
#define ERAY_MHDF_SNUA_SHIFT            0
#define ERAY_MHDF_SNUB_MASK             0x00000002
#define ERAY_MHDF_SNUB_SHIFT            1
#define ERAY_MHDF_FNFA_MASK             0x00000004
#define ERAY_MHDF_FNFA_SHIFT            2
#define ERAY_MHDF_FNFB_MASK             0x00000008
#define ERAY_MHDF_FNFB_SHIFT            3
#define ERAY_MHDF_TBFA_MASK             0x00000010
#define ERAY_MHDF_TBFA_SHIFT            4
#define ERAY_MHDF_TBFB_MASK             0x00000020
#define ERAY_MHDF_TBFB_SHIFT            5
#define ERAY_MHDF_TNSA_MASK             0x00000040
#define ERAY_MHDF_TNSA_SHIFT            6
#define ERAY_MHDF_TNSB_MASK             0x00000080
#define ERAY_MHDF_TNSB_SHIFT            7
#define ERAY_MHDF_WAHP_MASK             0x00000100
#define ERAY_MHDF_WAHP_SHIFT            8



/****************** Masks for ERAY_MHDS_t **********************/
/*
   ERAY_MHDS             "Message Handler Status"
*/
/**********************************************************/

#define ERAY_MHDS_MASK                  0x7f7f7fff
#define ERAY_MHDS_EIBF_MASK             0x00000001
#define ERAY_MHDS_EIBF_SHIFT            0
#define ERAY_MHDS_EOBF_MASK             0x00000002
#define ERAY_MHDS_EOBF_SHIFT            1
#define ERAY_MHDS_EMR_MASK              0x00000004
#define ERAY_MHDS_EMR_SHIFT             2
#define ERAY_MHDS_ETBF1_MASK            0x00000008
#define ERAY_MHDS_ETBF1_SHIFT           3
#define ERAY_MHDS_ETBF2_MASK            0x00000010
#define ERAY_MHDS_ETBF2_SHIFT           4
#define ERAY_MHDS_FMBD_MASK             0x00000020
#define ERAY_MHDS_FMBD_SHIFT            5
#define ERAY_MHDS_MFMB_MASK             0x00000040
#define ERAY_MHDS_MFMB_SHIFT            6
#define ERAY_MHDS_CRAM_MASK             0x00000080
#define ERAY_MHDS_CRAM_SHIFT            7
#define ERAY_MHDS_FMB_MASK              0x00007f00
#define ERAY_MHDS_FMB_SHIFT             8
#define ERAY_MHDS_MBT_MASK              0x007f0000
#define ERAY_MHDS_MBT_SHIFT             16
#define ERAY_MHDS_MBU_MASK              0x7f000000
#define ERAY_MHDS_MBU_SHIFT             24



/****************** Masks for ERAY_MRC_t **********************/
/*
   ERAY_MRC              "Message RAM Configuration"
*/
/**********************************************************/

#define ERAY_MRC_MASK                   0x07ffffff
#define ERAY_MRC_FDB_MASK               0x000000ff
#define ERAY_MRC_FDB_SHIFT              0
#define ERAY_MRC_FFB_MASK               0x0000ff00
#define ERAY_MRC_FFB_SHIFT              8
#define ERAY_MRC_LCB_MASK               0x00ff0000
#define ERAY_MRC_LCB_SHIFT              16
#define ERAY_MRC_SEC_MASK               0x03000000
#define ERAY_MRC_SEC_SHIFT              24
#define ERAY_MRC_SPLM_MASK              0x04000000
#define ERAY_MRC_SPLM_SHIFT             26



/****************** Masks for ERAY_MTCCV_t **********************/
/*
   ERAY_MTCCV            "Macrotick and Cycle Counter Value"
*/
/**********************************************************/

#define ERAY_MTCCV_MASK                 0x003f3fff
#define ERAY_MTCCV_MTV_MASK             0x00003fff
#define ERAY_MTCCV_MTV_SHIFT            0
#define ERAY_MTCCV_CCV_MASK             0x003f0000
#define ERAY_MTCCV_CCV_SHIFT            16



/****************** Masks for ERAY_NEMC_t **********************/
/*
   ERAY_NEMC             "NEM Configuration Register"
*/
/**********************************************************/

#define ERAY_NEMC_MASK                  0x0000000f
#define ERAY_NEMC_NML_MASK              0x0000000f
#define ERAY_NEMC_NML_SHIFT             0



/****************** Masks for ERAY_OBCM_t **********************/
/*
   ERAY_OBCM             "Output Buffer Command Mask"
*/
/**********************************************************/

#define ERAY_OBCM_MASK                  0x00030003
#define ERAY_OBCM_RHSS_MASK             0x00000001
#define ERAY_OBCM_RHSS_SHIFT            0
#define ERAY_OBCM_RDSS_MASK             0x00000002
#define ERAY_OBCM_RDSS_SHIFT            1
#define ERAY_OBCM_RHSH_MASK             0x00010000
#define ERAY_OBCM_RHSH_SHIFT            16
#define ERAY_OBCM_RDSH_MASK             0x00020000
#define ERAY_OBCM_RDSH_SHIFT            17



/****************** Masks for ERAY_OBCR_t **********************/
/*
   ERAY_OBCR             "Output Buffer Command Request"
*/
/**********************************************************/

#define ERAY_OBCR_MASK                  0x007f837f
#define ERAY_OBCR_OBRS_MASK             0x0000007f
#define ERAY_OBCR_OBRS_SHIFT            0
#define ERAY_OBCR_VIEW_MASK             0x00000100
#define ERAY_OBCR_VIEW_SHIFT            8
#define ERAY_OBCR_REQ_MASK              0x00000200
#define ERAY_OBCR_REQ_SHIFT             9
#define ERAY_OBCR_OBSYS_MASK            0x00008000
#define ERAY_OBCR_OBSYS_SHIFT           15
#define ERAY_OBCR_OBRH_MASK             0x007f0000
#define ERAY_OBCR_OBRH_SHIFT            16



/****************** Masks for ERAY_OBUSYSRC_t **********************/
/*
   ERAY_OBUSYSRC         "Output Buffer Busy Service Request Control Register"
*/
/**********************************************************/

#define ERAY_OBUSYSRC_MASK              0x0000f4ff
#define ERAY_OBUSYSRC_SRPN_MASK         0x000000ff
#define ERAY_OBUSYSRC_SRPN_SHIFT        0
#define ERAY_OBUSYSRC_TOS_MASK          0x00000400
#define ERAY_OBUSYSRC_TOS_SHIFT         10
#define ERAY_OBUSYSRC_SRE_MASK          0x00001000
#define ERAY_OBUSYSRC_SRE_SHIFT         12
#define ERAY_OBUSYSRC_SRR_MASK          0x00002000
#define ERAY_OBUSYSRC_SRR_SHIFT         13
#define ERAY_OBUSYSRC_CLRR_MASK         0x00004000
#define ERAY_OBUSYSRC_CLRR_SHIFT        14
#define ERAY_OBUSYSRC_SETR_MASK         0x00008000
#define ERAY_OBUSYSRC_SETR_SHIFT        15



/****************** Masks for ERAY_OCV_t **********************/
/*
   ERAY_OCV              "Offset Correction Value"
*/
/**********************************************************/

#define ERAY_OCV_MASK                   0x0007ffff
#define ERAY_OCV_OCV_MASK               0x0007ffff
#define ERAY_OCV_OCV_SHIFT              0



/****************** Masks for ERAY_PRTC1_t **********************/
/*
   ERAY_PRTC1            "PRT Configuration Register 1"
*/
/**********************************************************/

#define ERAY_PRTC1_MASK                 0xfdfff7ff
#define ERAY_PRTC1_TSST_MASK            0x0000000f
#define ERAY_PRTC1_TSST_SHIFT           0
#define ERAY_PRTC1_CASM_MASK            0x000007f0
#define ERAY_PRTC1_CASM_SHIFT           4
#define ERAY_PRTC1_SPP_MASK             0x00003000
#define ERAY_PRTC1_SPP_SHIFT            12
#define ERAY_PRTC1_BRP_MASK             0x0000c000
#define ERAY_PRTC1_BRP_SHIFT            14
#define ERAY_PRTC1_RXW_MASK             0x01ff0000
#define ERAY_PRTC1_RXW_SHIFT            16
#define ERAY_PRTC1_RWP_MASK             0xfc000000
#define ERAY_PRTC1_RWP_SHIFT            26



/****************** Masks for ERAY_PRTC2_t **********************/
/*
   ERAY_PRTC2            "PRT Configuration Register 2"
*/
/**********************************************************/

#define ERAY_PRTC2_MASK                 0x3fff3f3f
#define ERAY_PRTC2_RXI_MASK             0x0000003f
#define ERAY_PRTC2_RXI_SHIFT            0
#define ERAY_PRTC2_RXL_MASK             0x00003f00
#define ERAY_PRTC2_RXL_SHIFT            8
#define ERAY_PRTC2_TXI_MASK             0x00ff0000
#define ERAY_PRTC2_TXI_SHIFT            16
#define ERAY_PRTC2_TXL_MASK             0x3f000000
#define ERAY_PRTC2_TXL_SHIFT            24



/****************** Masks for ERAY_RCV_t **********************/
/*
   ERAY_RCV              "Rate Correction Value"
*/
/**********************************************************/

#define ERAY_RCV_MASK                   0x00000fff
#define ERAY_RCV_RCV_MASK               0x00000fff
#define ERAY_RCV_RCV_SHIFT              0



/****************** Masks for ERAY_RDHS1_t **********************/
/*
   ERAY_RDHS1            "Read Header Section 1"
*/
/**********************************************************/

#define ERAY_RDHS1_MASK                 0x3f7f07ff
#define ERAY_RDHS1_FID_MASK             0x000007ff
#define ERAY_RDHS1_FID_SHIFT            0
#define ERAY_RDHS1_CYC_MASK             0x007f0000
#define ERAY_RDHS1_CYC_SHIFT            16
#define ERAY_RDHS1_CHA_MASK             0x01000000
#define ERAY_RDHS1_CHA_SHIFT            24
#define ERAY_RDHS1_CHB_MASK             0x02000000
#define ERAY_RDHS1_CHB_SHIFT            25
#define ERAY_RDHS1_CFG_MASK             0x04000000
#define ERAY_RDHS1_CFG_SHIFT            26
#define ERAY_RDHS1_PPIT_MASK            0x08000000
#define ERAY_RDHS1_PPIT_SHIFT           27
#define ERAY_RDHS1_TXM_MASK             0x10000000
#define ERAY_RDHS1_TXM_SHIFT            28
#define ERAY_RDHS1_MBI_MASK             0x20000000
#define ERAY_RDHS1_MBI_SHIFT            29



/****************** Masks for ERAY_RDHS2_t **********************/
/*
   ERAY_RDHS2            "Read Header Section 2"
*/
/**********************************************************/

#define ERAY_RDHS2_MASK                 0x7f7f07ff
#define ERAY_RDHS2_CRC_MASK             0x000007ff
#define ERAY_RDHS2_CRC_SHIFT            0
#define ERAY_RDHS2_PLC_MASK             0x007f0000
#define ERAY_RDHS2_PLC_SHIFT            16
#define ERAY_RDHS2_PLR_MASK             0x7f000000
#define ERAY_RDHS2_PLR_SHIFT            24



/****************** Masks for ERAY_RDHS3_t **********************/
/*
   ERAY_RDHS3            "Read Header Section 3"
*/
/**********************************************************/

#define ERAY_RDHS3_MASK                 0x3f3f07ff
#define ERAY_RDHS3_DP_MASK              0x000007ff
#define ERAY_RDHS3_DP_SHIFT             0
#define ERAY_RDHS3_RCC_MASK             0x003f0000
#define ERAY_RDHS3_RCC_SHIFT            16
#define ERAY_RDHS3_RCI_MASK             0x01000000
#define ERAY_RDHS3_RCI_SHIFT            24
#define ERAY_RDHS3_SFI_MASK             0x02000000
#define ERAY_RDHS3_SFI_SHIFT            25
#define ERAY_RDHS3_SYN_MASK             0x04000000
#define ERAY_RDHS3_SYN_SHIFT            26
#define ERAY_RDHS3_NFI_MASK             0x08000000
#define ERAY_RDHS3_NFI_SHIFT            27
#define ERAY_RDHS3_PPI_MASK             0x10000000
#define ERAY_RDHS3_PPI_SHIFT            28
#define ERAY_RDHS3_RES_MASK             0x20000000
#define ERAY_RDHS3_RES_SHIFT            29



/****************** Masks for ERAY_SCV_t **********************/
/*
   ERAY_SCV              "Slot Counter Value"
*/
/**********************************************************/

#define ERAY_SCV_MASK                   0x07ff07ff
#define ERAY_SCV_SCCA_MASK              0x000007ff
#define ERAY_SCV_SCCA_SHIFT             0
#define ERAY_SCV_SCCB_MASK              0x07ff0000
#define ERAY_SCV_SCCB_SHIFT             16



/****************** Masks for ERAY_SECCON_t **********************/
/*
   ERAY_SECCON           "SEC Control"
*/
/**********************************************************/

#define ERAY_SECCON_MASK                0x0000007f
#define ERAY_SECCON_SECMEN_MASK         0x00000001
#define ERAY_SECCON_SECMEN_SHIFT        0
#define ERAY_SECCON_SECT1EN_MASK        0x00000002
#define ERAY_SECCON_SECT1EN_SHIFT       1
#define ERAY_SECCON_SECT2EN_MASK        0x00000004
#define ERAY_SECCON_SECT2EN_SHIFT       2
#define ERAY_SECCON_SECO1EN_MASK        0x00000008
#define ERAY_SECCON_SECO1EN_SHIFT       3
#define ERAY_SECCON_SECO2EN_MASK        0x00000010
#define ERAY_SECCON_SECO2EN_SHIFT       4
#define ERAY_SECCON_SECI1EN_MASK        0x00000020
#define ERAY_SECCON_SECI1EN_SHIFT       5
#define ERAY_SECCON_SECI2EN_MASK        0x00000040
#define ERAY_SECCON_SECI2EN_SHIFT       6



/****************** Masks for ERAY_SEDCON_t **********************/
/*
   ERAY_SEDCON           "SED Control"
*/
/**********************************************************/

#define ERAY_SEDCON_MASK                0x0000007f
#define ERAY_SEDCON_SEDMEN_MASK         0x00000001
#define ERAY_SEDCON_SEDMEN_SHIFT        0
#define ERAY_SEDCON_SEDT1EN_MASK        0x00000002
#define ERAY_SEDCON_SEDT1EN_SHIFT       1
#define ERAY_SEDCON_SEDT2EN_MASK        0x00000004
#define ERAY_SEDCON_SEDT2EN_SHIFT       2
#define ERAY_SEDCON_SEDO1EN_MASK        0x00000008
#define ERAY_SEDCON_SEDO1EN_SHIFT       3
#define ERAY_SEDCON_SEDO2EN_MASK        0x00000010
#define ERAY_SEDCON_SEDO2EN_SHIFT       4
#define ERAY_SEDCON_SEDI1EN_MASK        0x00000020
#define ERAY_SEDCON_SEDI1EN_SHIFT       5
#define ERAY_SEDCON_SEDI2EN_MASK        0x00000040
#define ERAY_SEDCON_SEDI2EN_SHIFT       6



/****************** Masks for ERAY_SFS_t **********************/
/*
   ERAY_SFS              "SYNC Frame Status"
*/
/**********************************************************/

#define ERAY_SFS_MASK                   0x000fffff
#define ERAY_SFS_VSAE_MASK              0x0000000f
#define ERAY_SFS_VSAE_SHIFT             0
#define ERAY_SFS_VSAO_MASK              0x000000f0
#define ERAY_SFS_VSAO_SHIFT             4
#define ERAY_SFS_VSBE_MASK              0x00000f00
#define ERAY_SFS_VSBE_SHIFT             8
#define ERAY_SFS_VSBO_MASK              0x0000f000
#define ERAY_SFS_VSBO_SHIFT             12
#define ERAY_SFS_MOCS_MASK              0x00010000
#define ERAY_SFS_MOCS_SHIFT             16
#define ERAY_SFS_OCLR_MASK              0x00020000
#define ERAY_SFS_OCLR_SHIFT             17
#define ERAY_SFS_MRCS_MASK              0x00040000
#define ERAY_SFS_MRCS_SHIFT             18
#define ERAY_SFS_RCLR_MASK              0x00080000
#define ERAY_SFS_RCLR_SHIFT             19



/****************** Masks for ERAY_SIER_t **********************/
/*
   ERAY_SIER             "Status Service Request Enable Reset"
*/
/**********************************************************/

#define ERAY_SIER_MASK                  0x0303ffff
#define ERAY_SIER_WSTE_MASK             0x00000001
#define ERAY_SIER_WSTE_SHIFT            0
#define ERAY_SIER_CASE_MASK             0x00000002
#define ERAY_SIER_CASE_SHIFT            1
#define ERAY_SIER_CYCSE_MASK            0x00000004
#define ERAY_SIER_CYCSE_SHIFT           2
#define ERAY_SIER_TXIE_MASK             0x00000008
#define ERAY_SIER_TXIE_SHIFT            3
#define ERAY_SIER_RXIE_MASK             0x00000010
#define ERAY_SIER_RXIE_SHIFT            4
#define ERAY_SIER_RFNEE_MASK            0x00000020
#define ERAY_SIER_RFNEE_SHIFT           5
#define ERAY_SIER_RFCLE_MASK            0x00000040
#define ERAY_SIER_RFCLE_SHIFT           6
#define ERAY_SIER_NMVCE_MASK            0x00000080
#define ERAY_SIER_NMVCE_SHIFT           7
#define ERAY_SIER_TI0E_MASK             0x00000100
#define ERAY_SIER_TI0E_SHIFT            8
#define ERAY_SIER_TI1E_MASK             0x00000200
#define ERAY_SIER_TI1E_SHIFT            9
#define ERAY_SIER_TIBCE_MASK            0x00000400
#define ERAY_SIER_TIBCE_SHIFT           10
#define ERAY_SIER_TOBCE_MASK            0x00000800
#define ERAY_SIER_TOBCE_SHIFT           11
#define ERAY_SIER_SWEE_MASK             0x00001000
#define ERAY_SIER_SWEE_SHIFT            12
#define ERAY_SIER_SUCSE_MASK            0x00002000
#define ERAY_SIER_SUCSE_SHIFT           13
#define ERAY_SIER_MBSIE_MASK            0x00004000
#define ERAY_SIER_MBSIE_SHIFT           14
#define ERAY_SIER_SDSE_MASK             0x00008000
#define ERAY_SIER_SDSE_SHIFT            15
#define ERAY_SIER_WUPAE_MASK            0x00010000
#define ERAY_SIER_WUPAE_SHIFT           16
#define ERAY_SIER_MTSAE_MASK            0x00020000
#define ERAY_SIER_MTSAE_SHIFT           17
#define ERAY_SIER_WUPBE_MASK            0x01000000
#define ERAY_SIER_WUPBE_SHIFT           24
#define ERAY_SIER_MTSBE_MASK            0x02000000
#define ERAY_SIER_MTSBE_SHIFT           25



/****************** Masks for ERAY_SIES_t **********************/
/*
   ERAY_SIES             "Status Service Request Enable Set"
*/
/**********************************************************/

#define ERAY_SIES_MASK                  0x0303ffff
#define ERAY_SIES_WSTE_MASK             0x00000001
#define ERAY_SIES_WSTE_SHIFT            0
#define ERAY_SIES_CASE_MASK             0x00000002
#define ERAY_SIES_CASE_SHIFT            1
#define ERAY_SIES_CYCSE_MASK            0x00000004
#define ERAY_SIES_CYCSE_SHIFT           2
#define ERAY_SIES_TXIE_MASK             0x00000008
#define ERAY_SIES_TXIE_SHIFT            3
#define ERAY_SIES_RXIE_MASK             0x00000010
#define ERAY_SIES_RXIE_SHIFT            4
#define ERAY_SIES_RFNEE_MASK            0x00000020
#define ERAY_SIES_RFNEE_SHIFT           5
#define ERAY_SIES_RFCLE_MASK            0x00000040
#define ERAY_SIES_RFCLE_SHIFT           6
#define ERAY_SIES_NMVCE_MASK            0x00000080
#define ERAY_SIES_NMVCE_SHIFT           7
#define ERAY_SIES_TI0E_MASK             0x00000100
#define ERAY_SIES_TI0E_SHIFT            8
#define ERAY_SIES_TI1E_MASK             0x00000200
#define ERAY_SIES_TI1E_SHIFT            9
#define ERAY_SIES_TIBCE_MASK            0x00000400
#define ERAY_SIES_TIBCE_SHIFT           10
#define ERAY_SIES_TOBCE_MASK            0x00000800
#define ERAY_SIES_TOBCE_SHIFT           11
#define ERAY_SIES_SWEE_MASK             0x00001000
#define ERAY_SIES_SWEE_SHIFT            12
#define ERAY_SIES_SUCSE_MASK            0x00002000
#define ERAY_SIES_SUCSE_SHIFT           13
#define ERAY_SIES_MBSIE_MASK            0x00004000
#define ERAY_SIES_MBSIE_SHIFT           14
#define ERAY_SIES_SDSE_MASK             0x00008000
#define ERAY_SIES_SDSE_SHIFT            15
#define ERAY_SIES_WUPAE_MASK            0x00010000
#define ERAY_SIES_WUPAE_SHIFT           16
#define ERAY_SIES_MTSAE_MASK            0x00020000
#define ERAY_SIES_MTSAE_SHIFT           17
#define ERAY_SIES_WUPBE_MASK            0x01000000
#define ERAY_SIES_WUPBE_SHIFT           24
#define ERAY_SIES_MTSBE_MASK            0x02000000
#define ERAY_SIES_MTSBE_SHIFT           25



/****************** Masks for ERAY_SILS_t **********************/
/*
   ERAY_SILS             "Status Service Request Line Select"
*/
/**********************************************************/

#define ERAY_SILS_MASK                  0x0303ffff
#define ERAY_SILS_WSTL_MASK             0x00000001
#define ERAY_SILS_WSTL_SHIFT            0
#define ERAY_SILS_CASL_MASK             0x00000002
#define ERAY_SILS_CASL_SHIFT            1
#define ERAY_SILS_CYCSL_MASK            0x00000004
#define ERAY_SILS_CYCSL_SHIFT           2
#define ERAY_SILS_TXIL_MASK             0x00000008
#define ERAY_SILS_TXIL_SHIFT            3
#define ERAY_SILS_RXIL_MASK             0x00000010
#define ERAY_SILS_RXIL_SHIFT            4
#define ERAY_SILS_RFNEL_MASK            0x00000020
#define ERAY_SILS_RFNEL_SHIFT           5
#define ERAY_SILS_RFCLL_MASK            0x00000040
#define ERAY_SILS_RFCLL_SHIFT           6
#define ERAY_SILS_NMVCL_MASK            0x00000080
#define ERAY_SILS_NMVCL_SHIFT           7
#define ERAY_SILS_TI0L_MASK             0x00000100
#define ERAY_SILS_TI0L_SHIFT            8
#define ERAY_SILS_TI1L_MASK             0x00000200
#define ERAY_SILS_TI1L_SHIFT            9
#define ERAY_SILS_TIBCL_MASK            0x00000400
#define ERAY_SILS_TIBCL_SHIFT           10
#define ERAY_SILS_TOBCL_MASK            0x00000800
#define ERAY_SILS_TOBCL_SHIFT           11
#define ERAY_SILS_SWEL_MASK             0x00001000
#define ERAY_SILS_SWEL_SHIFT            12
#define ERAY_SILS_SUCSL_MASK            0x00002000
#define ERAY_SILS_SUCSL_SHIFT           13
#define ERAY_SILS_MBSIL_MASK            0x00004000
#define ERAY_SILS_MBSIL_SHIFT           14
#define ERAY_SILS_SDSL_MASK             0x00008000
#define ERAY_SILS_SDSL_SHIFT            15
#define ERAY_SILS_WUPAL_MASK            0x00010000
#define ERAY_SILS_WUPAL_SHIFT           16
#define ERAY_SILS_MTSAL_MASK            0x00020000
#define ERAY_SILS_MTSAL_SHIFT           17
#define ERAY_SILS_WUPBL_MASK            0x01000000
#define ERAY_SILS_WUPBL_SHIFT           24
#define ERAY_SILS_MTSBL_MASK            0x02000000
#define ERAY_SILS_MTSBL_SHIFT           25



/****************** Masks for ERAY_SIR_t **********************/
/*
   ERAY_SIR              "Status Service Request Register"
*/
/**********************************************************/

#define ERAY_SIR_MASK                   0x0303ffff
#define ERAY_SIR_WST_MASK               0x00000001
#define ERAY_SIR_WST_SHIFT              0
#define ERAY_SIR_CAS_MASK               0x00000002
#define ERAY_SIR_CAS_SHIFT              1
#define ERAY_SIR_CYCS_MASK              0x00000004
#define ERAY_SIR_CYCS_SHIFT             2
#define ERAY_SIR_TXI_MASK               0x00000008
#define ERAY_SIR_TXI_SHIFT              3
#define ERAY_SIR_RXI_MASK               0x00000010
#define ERAY_SIR_RXI_SHIFT              4
#define ERAY_SIR_RFNE_MASK              0x00000020
#define ERAY_SIR_RFNE_SHIFT             5
#define ERAY_SIR_RFCL_MASK              0x00000040
#define ERAY_SIR_RFCL_SHIFT             6
#define ERAY_SIR_NMVC_MASK              0x00000080
#define ERAY_SIR_NMVC_SHIFT             7
#define ERAY_SIR_TI0_MASK               0x00000100
#define ERAY_SIR_TI0_SHIFT              8
#define ERAY_SIR_TI1_MASK               0x00000200
#define ERAY_SIR_TI1_SHIFT              9
#define ERAY_SIR_TIBC_MASK              0x00000400
#define ERAY_SIR_TIBC_SHIFT             10
#define ERAY_SIR_TOBC_MASK              0x00000800
#define ERAY_SIR_TOBC_SHIFT             11
#define ERAY_SIR_SWE_MASK               0x00001000
#define ERAY_SIR_SWE_SHIFT              12
#define ERAY_SIR_SUCS_MASK              0x00002000
#define ERAY_SIR_SUCS_SHIFT             13
#define ERAY_SIR_MBSI_MASK              0x00004000
#define ERAY_SIR_MBSI_SHIFT             14
#define ERAY_SIR_SDS_MASK               0x00008000
#define ERAY_SIR_SDS_SHIFT              15
#define ERAY_SIR_WUPA_MASK              0x00010000
#define ERAY_SIR_WUPA_SHIFT             16
#define ERAY_SIR_MTSA_MASK              0x00020000
#define ERAY_SIR_MTSA_SHIFT             17
#define ERAY_SIR_WUPB_MASK              0x01000000
#define ERAY_SIR_WUPB_SHIFT             24
#define ERAY_SIR_MTSB_MASK              0x02000000
#define ERAY_SIR_MTSB_SHIFT             25



/****************** Masks for ERAY_STPW1_t **********************/
/*
   ERAY_STPW1            "Stop Watch Register 1"
*/
/**********************************************************/

#define ERAY_STPW1_MASK                 0x3fff3f7f
#define ERAY_STPW1_ESWT_MASK            0x00000001
#define ERAY_STPW1_ESWT_SHIFT           0
#define ERAY_STPW1_SWMS_MASK            0x00000002
#define ERAY_STPW1_SWMS_SHIFT           1
#define ERAY_STPW1_EDGE_MASK            0x00000004
#define ERAY_STPW1_EDGE_SHIFT           2
#define ERAY_STPW1_SSWT_MASK            0x00000008
#define ERAY_STPW1_SSWT_SHIFT           3
#define ERAY_STPW1_EETP_MASK            0x00000010
#define ERAY_STPW1_EETP_SHIFT           4
#define ERAY_STPW1_EINT0_MASK           0x00000020
#define ERAY_STPW1_EINT0_SHIFT          5
#define ERAY_STPW1_EINT1_MASK           0x00000040
#define ERAY_STPW1_EINT1_SHIFT          6
#define ERAY_STPW1_SCCV_MASK            0x00003f00
#define ERAY_STPW1_SCCV_SHIFT           8
#define ERAY_STPW1_SMTV_MASK            0x3fff0000
#define ERAY_STPW1_SMTV_SHIFT           16



/****************** Masks for ERAY_STPW2_t **********************/
/*
   ERAY_STPW2            "Stop Watch Register 2"
*/
/**********************************************************/

#define ERAY_STPW2_MASK                 0x07ff07ff
#define ERAY_STPW2_SSCVA_MASK           0x000007ff
#define ERAY_STPW2_SSCVA_SHIFT          0
#define ERAY_STPW2_SSCVB_MASK           0x07ff0000
#define ERAY_STPW2_SSCVB_SHIFT          16



/****************** Masks for ERAY_SUCC1_t **********************/
/*
   ERAY_SUCC1            "SUC Configuration Register 1"
*/
/**********************************************************/

#define ERAY_SUCC1_MASK                 0x0ffffb8f
#define ERAY_SUCC1_CMD_MASK             0x0000000f
#define ERAY_SUCC1_CMD_SHIFT            0
#define ERAY_SUCC1_PBSY_MASK            0x00000080
#define ERAY_SUCC1_PBSY_SHIFT           7
#define ERAY_SUCC1_TXST_MASK            0x00000100
#define ERAY_SUCC1_TXST_SHIFT           8
#define ERAY_SUCC1_TXSY_MASK            0x00000200
#define ERAY_SUCC1_TXSY_SHIFT           9
#define ERAY_SUCC1_CSA_MASK             0x0000f800
#define ERAY_SUCC1_CSA_SHIFT            11
#define ERAY_SUCC1_PTA_MASK             0x001f0000
#define ERAY_SUCC1_PTA_SHIFT            16
#define ERAY_SUCC1_WUCS_MASK            0x00200000
#define ERAY_SUCC1_WUCS_SHIFT           21
#define ERAY_SUCC1_TSM_MASK             0x00400000
#define ERAY_SUCC1_TSM_SHIFT            22
#define ERAY_SUCC1_HCSE_MASK            0x00800000
#define ERAY_SUCC1_HCSE_SHIFT           23
#define ERAY_SUCC1_MTSA_MASK            0x01000000
#define ERAY_SUCC1_MTSA_SHIFT           24
#define ERAY_SUCC1_MTSB_MASK            0x02000000
#define ERAY_SUCC1_MTSB_SHIFT           25
#define ERAY_SUCC1_CCHA_MASK            0x04000000
#define ERAY_SUCC1_CCHA_SHIFT           26
#define ERAY_SUCC1_CCHB_MASK            0x08000000
#define ERAY_SUCC1_CCHB_SHIFT           27



/****************** Masks for ERAY_SUCC2_t **********************/
/*
   ERAY_SUCC2            "SUC Configuration Register 2"
*/
/**********************************************************/

#define ERAY_SUCC2_MASK                 0x0f1fffff
#define ERAY_SUCC2_LT_MASK              0x001fffff
#define ERAY_SUCC2_LT_SHIFT             0
#define ERAY_SUCC2_LTN_MASK             0x0f000000
#define ERAY_SUCC2_LTN_SHIFT            24



/****************** Masks for ERAY_SUCC3_t **********************/
/*
   ERAY_SUCC3            "SUC Configuration Register 3"
*/
/**********************************************************/

#define ERAY_SUCC3_MASK                 0x000000ff
#define ERAY_SUCC3_WCP_MASK             0x0000000f
#define ERAY_SUCC3_WCP_SHIFT            0
#define ERAY_SUCC3_WCF_MASK             0x000000f0
#define ERAY_SUCC3_WCF_SHIFT            4



/****************** Masks for ERAY_SWNIT_t **********************/
/*
   ERAY_SWNIT            "Symbol Window and Network Idle Time Status"
*/
/**********************************************************/

#define ERAY_SWNIT_MASK                 0x00000fff
#define ERAY_SWNIT_SESA_MASK            0x00000001
#define ERAY_SWNIT_SESA_SHIFT           0
#define ERAY_SWNIT_SBSA_MASK            0x00000002
#define ERAY_SWNIT_SBSA_SHIFT           1
#define ERAY_SWNIT_TCSA_MASK            0x00000004
#define ERAY_SWNIT_TCSA_SHIFT           2
#define ERAY_SWNIT_SESB_MASK            0x00000008
#define ERAY_SWNIT_SESB_SHIFT           3
#define ERAY_SWNIT_SBSB_MASK            0x00000010
#define ERAY_SWNIT_SBSB_SHIFT           4
#define ERAY_SWNIT_TCSB_MASK            0x00000020
#define ERAY_SWNIT_TCSB_SHIFT           5
#define ERAY_SWNIT_MTSA_MASK            0x00000040
#define ERAY_SWNIT_MTSA_SHIFT           6
#define ERAY_SWNIT_MTSB_MASK            0x00000080
#define ERAY_SWNIT_MTSB_SHIFT           7
#define ERAY_SWNIT_SENA_MASK            0x00000100
#define ERAY_SWNIT_SENA_SHIFT           8
#define ERAY_SWNIT_SBNA_MASK            0x00000200
#define ERAY_SWNIT_SBNA_SHIFT           9
#define ERAY_SWNIT_SENB_MASK            0x00000400
#define ERAY_SWNIT_SENB_SHIFT           10
#define ERAY_SWNIT_SBNB_MASK            0x00000800
#define ERAY_SWNIT_SBNB_SHIFT           11



/****************** Masks for ERAY_T0C_t **********************/
/*
   ERAY_T0C              "Timer 0 Configuration"
*/
/**********************************************************/

#define ERAY_T0C_MASK                   0x3fff7f03
#define ERAY_T0C_T0RC_MASK              0x00000001
#define ERAY_T0C_T0RC_SHIFT             0
#define ERAY_T0C_T0MS_MASK              0x00000002
#define ERAY_T0C_T0MS_SHIFT             1
#define ERAY_T0C_T0CC_MASK              0x00007f00
#define ERAY_T0C_T0CC_SHIFT             8
#define ERAY_T0C_T0MO_MASK              0x3fff0000
#define ERAY_T0C_T0MO_SHIFT             16



/****************** Masks for ERAY_T1C_t **********************/
/*
   ERAY_T1C              "Timer 1 Configuration"
*/
/**********************************************************/

#define ERAY_T1C_MASK                   0x3fff0003
#define ERAY_T1C_T1RC_MASK              0x00000001
#define ERAY_T1C_T1RC_SHIFT             0
#define ERAY_T1C_T1MS_MASK              0x00000002
#define ERAY_T1C_T1MS_SHIFT             1
#define ERAY_T1C_T1MC_MASK              0x3fff0000
#define ERAY_T1C_T1MC_SHIFT             16



/****************** Masks for ERAY_TEST1_t **********************/
/*
   ERAY_TEST1            "Test Register 1"
*/
/**********************************************************/

#define ERAY_TEST1_MASK                 0xff3f0333
#define ERAY_TEST1_WRTEN_MASK           0x00000001
#define ERAY_TEST1_WRTEN_SHIFT          0
#define ERAY_TEST1_ELBE_MASK            0x00000002
#define ERAY_TEST1_ELBE_SHIFT           1
#define ERAY_TEST1_TMC_MASK             0x00000030
#define ERAY_TEST1_TMC_SHIFT            4
#define ERAY_TEST1_AOA_MASK             0x00000100
#define ERAY_TEST1_AOA_SHIFT            8
#define ERAY_TEST1_AOB_MASK             0x00000200
#define ERAY_TEST1_AOB_SHIFT            9
#define ERAY_TEST1_RXA_MASK             0x00010000
#define ERAY_TEST1_RXA_SHIFT            16
#define ERAY_TEST1_RXB_MASK             0x00020000
#define ERAY_TEST1_RXB_SHIFT            17
#define ERAY_TEST1_TXA_MASK             0x00040000
#define ERAY_TEST1_TXA_SHIFT            18
#define ERAY_TEST1_TXB_MASK             0x00080000
#define ERAY_TEST1_TXB_SHIFT            19
#define ERAY_TEST1_TXENA_MASK           0x00100000
#define ERAY_TEST1_TXENA_SHIFT          20
#define ERAY_TEST1_TXENB_MASK           0x00200000
#define ERAY_TEST1_TXENB_SHIFT          21
#define ERAY_TEST1_CERA_MASK            0x0f000000
#define ERAY_TEST1_CERA_SHIFT           24
#define ERAY_TEST1_CERB_MASK            0xf0000000
#define ERAY_TEST1_CERB_SHIFT           28



/****************** Masks for ERAY_TEST2_t **********************/
/*
   ERAY_TEST2            "Test Register 2"
*/
/**********************************************************/

#define ERAY_TEST2_MASK                 0x00004077
#define ERAY_TEST2_RS_MASK              0x00000007
#define ERAY_TEST2_RS_SHIFT             0
#define ERAY_TEST2_SSEL_MASK            0x00000070
#define ERAY_TEST2_SSEL_SHIFT           4
#define ERAY_TEST2_WRECC_MASK           0x00004000
#define ERAY_TEST2_WRECC_SHIFT          14



/****************** Masks for ERAY_WRHS1_t **********************/
/*
   ERAY_WRHS1            "Write Header Section 1"
*/
/**********************************************************/

#define ERAY_WRHS1_MASK                 0x3f7f07ff
#define ERAY_WRHS1_FID_MASK             0x000007ff
#define ERAY_WRHS1_FID_SHIFT            0
#define ERAY_WRHS1_CYC_MASK             0x007f0000
#define ERAY_WRHS1_CYC_SHIFT            16
#define ERAY_WRHS1_CHA_MASK             0x01000000
#define ERAY_WRHS1_CHA_SHIFT            24
#define ERAY_WRHS1_CHB_MASK             0x02000000
#define ERAY_WRHS1_CHB_SHIFT            25
#define ERAY_WRHS1_CFG_MASK             0x04000000
#define ERAY_WRHS1_CFG_SHIFT            26
#define ERAY_WRHS1_PPIT_MASK            0x08000000
#define ERAY_WRHS1_PPIT_SHIFT           27
#define ERAY_WRHS1_TXM_MASK             0x10000000
#define ERAY_WRHS1_TXM_SHIFT            28
#define ERAY_WRHS1_MBI_MASK             0x20000000
#define ERAY_WRHS1_MBI_SHIFT            29



/****************** Masks for ERAY_WRHS2_t **********************/
/*
   ERAY_WRHS2            "Write Header Section 2"
*/
/**********************************************************/

#define ERAY_WRHS2_MASK                 0x007f07ff
#define ERAY_WRHS2_CRC_MASK             0x000007ff
#define ERAY_WRHS2_CRC_SHIFT            0
#define ERAY_WRHS2_PLC_MASK             0x007f0000
#define ERAY_WRHS2_PLC_SHIFT            16



/****************** Masks for ERAY_WRHS3_t **********************/
/*
   ERAY_WRHS3            "Write Header Section 3"
*/
/**********************************************************/

#define ERAY_WRHS3_MASK                 0x000007ff
#define ERAY_WRHS3_DP_MASK              0x000007ff
#define ERAY_WRHS3_DP_SHIFT             0




#endif /* _HAVE_TRICORE_ERAY_MASKS_H_ */

