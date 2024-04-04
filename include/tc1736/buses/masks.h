/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_BUSES_MASKS_H_
#define _HAVE_TRICORE_BUSES_MASKS_H_


/****************** Masks for LBCU_ID_t **********************/
/*
   LBCU_ID               "Module Identification Register"
*/
/**********************************************************/

#define LBCU_ID_MASK                    0xffffffff
#define LBCU_ID_MOD_REV_MASK            0x000000ff
#define LBCU_ID_MOD_REV_SHIFT           0
#define LBCU_ID_MOD_TYPE_MASK           0x0000ff00
#define LBCU_ID_MOD_TYPE_SHIFT          8
#define LBCU_ID_MOD_NUMBER_MASK         0xffff0000
#define LBCU_ID_MOD_NUMBER_SHIFT        16



/****************** Masks for LBCU_LEADDR_t **********************/
/*
   LBCU_LEADDR           "LBCU LMB Error Address Register"
*/
/**********************************************************/

#define LBCU_LEADDR_MASK                0xffffffff
#define LBCU_LEADDR_LEADDR_MASK         0xffffffff
#define LBCU_LEADDR_LEADDR_SHIFT        0



/****************** Masks for LBCU_LEATT_t **********************/
/*
   LBCU_LEATT            "LBCU LMB Error Attribute Register"
*/
/**********************************************************/

#define LBCU_LEATT_MASK                 0xf7efc0f1
#define LBCU_LEATT_LEC_MASK             0x00000001
#define LBCU_LEATT_LEC_SHIFT            0
#define LBCU_LEATT_FPITAG_MASK          0x000000f0
#define LBCU_LEATT_FPITAG_SHIFT         4
#define LBCU_LEATT_NOS_MASK             0x00004000
#define LBCU_LEATT_NOS_SHIFT            14
#define LBCU_LEATT_LOC_MASK             0x00008000
#define LBCU_LEATT_LOC_SHIFT            15
#define LBCU_LEATT_ACK_MASK             0x00070000
#define LBCU_LEATT_ACK_SHIFT            16
#define LBCU_LEATT_UIS_MASK             0x00080000
#define LBCU_LEATT_UIS_SHIFT            19
#define LBCU_LEATT_SVM_MASK             0x00200000
#define LBCU_LEATT_SVM_SHIFT            21
#define LBCU_LEATT_WR_MASK              0x00400000
#define LBCU_LEATT_WR_SHIFT             22
#define LBCU_LEATT_RD_MASK              0x00800000
#define LBCU_LEATT_RD_SHIFT             23
#define LBCU_LEATT_TAG_MASK             0x07000000
#define LBCU_LEATT_TAG_SHIFT            24
#define LBCU_LEATT_OPC_MASK             0xf0000000
#define LBCU_LEATT_OPC_SHIFT            28



/****************** Masks for LBCU_LEDATH_t **********************/
/*
   LBCU_LEDATH           "LBCU LMB Error Data High Register"
*/
/**********************************************************/

#define LBCU_LEDATH_MASK                0xffffffff
#define LBCU_LEDATH_LEDAT_63_32_MASK    0xffffffff
#define LBCU_LEDATH_LEDAT_63_32_SHIFT   0



/****************** Masks for LBCU_LEDATL_t **********************/
/*
   LBCU_LEDATL           "LBCU LMB Error Data Low Register"
*/
/**********************************************************/

#define LBCU_LEDATL_MASK                0xffffffff
#define LBCU_LEDATL_LEDAT_31_0_MASK     0xffffffff
#define LBCU_LEDATL_LEDAT_31_0_SHIFT    0



/****************** Masks for LBCU_SRC_t **********************/
/*
   LBCU_SRC              "LBCU Service Request Control Register"
*/
/**********************************************************/

#define LBCU_SRC_MASK                   0x0000fcff
#define LBCU_SRC_SRPN_MASK              0x000000ff
#define LBCU_SRC_SRPN_SHIFT             0
#define LBCU_SRC_TOS_MASK               0x00000c00
#define LBCU_SRC_TOS_SHIFT              10
#define LBCU_SRC_SRE_MASK               0x00001000
#define LBCU_SRC_SRE_SHIFT              12
#define LBCU_SRC_SRR_MASK               0x00002000
#define LBCU_SRC_SRR_SHIFT              13
#define LBCU_SRC_CLRR_MASK              0x00004000
#define LBCU_SRC_CLRR_SHIFT             14
#define LBCU_SRC_SETR_MASK              0x00008000
#define LBCU_SRC_SETR_SHIFT             15



/****************** Masks for LFI_CON_t **********************/
/*
   LFI_CON               "LFI Configuration Register"
*/
/**********************************************************/

#define LFI_CON_MASK                    0x00000f70
#define LFI_CON_LTAG_MASK               0x00000070
#define LFI_CON_LTAG_SHIFT              4
#define LFI_CON_FTAG_MASK               0x00000f00
#define LFI_CON_FTAG_SHIFT              8



/****************** Masks for LFI_ID_t **********************/
/*
   LFI_ID                "Module Identification Register"
*/
/**********************************************************/

#define LFI_ID_MASK                     0xffffffff
#define LFI_ID_MOD_REV_MASK             0x000000ff
#define LFI_ID_MOD_REV_SHIFT            0
#define LFI_ID_MOD_TYPE_MASK            0x0000ff00
#define LFI_ID_MOD_TYPE_SHIFT           8
#define LFI_ID_MOD_NUMBER_MASK          0xffff0000
#define LFI_ID_MOD_NUMBER_SHIFT         16



/****************** Masks for SBCU_CON_t **********************/
/*
   SBCU_CON              "SBCU Control Register"
*/
/**********************************************************/

#define SBCU_CON_MASK                   0xff09ffff
#define SBCU_CON_TOUT_MASK              0x0000ffff
#define SBCU_CON_TOUT_SHIFT             0
#define SBCU_CON_DBG_MASK               0x00010000
#define SBCU_CON_DBG_SHIFT              16
#define SBCU_CON_SPE_MASK               0x00080000
#define SBCU_CON_SPE_SHIFT              19
#define SBCU_CON_SPC_MASK               0xff000000
#define SBCU_CON_SPC_SHIFT              24



/****************** Masks for SBCU_DBADRT_t **********************/
/*
   SBCU_DBADRT           "SBCU Debug Trapped Address Register"
*/
/**********************************************************/

#define SBCU_DBADRT_MASK                0xffffffff
#define SBCU_DBADRT_FPIADR_MASK         0xffffffff
#define SBCU_DBADRT_FPIADR_SHIFT        0



/****************** Masks for SBCU_DBBOS_t **********************/
/*
   SBCU_DBBOS            "SBCU Debug Bus Operation Signals Register"
*/
/**********************************************************/

#define SBCU_DBBOS_MASK                 0x0000111f
#define SBCU_DBBOS_OPC_MASK             0x0000000f
#define SBCU_DBBOS_OPC_SHIFT            0
#define SBCU_DBBOS_SVM_MASK             0x00000010
#define SBCU_DBBOS_SVM_SHIFT            4
#define SBCU_DBBOS_WR_MASK              0x00000100
#define SBCU_DBBOS_WR_SHIFT             8
#define SBCU_DBBOS_RD_MASK              0x00001000
#define SBCU_DBBOS_RD_SHIFT             12



/****************** Masks for SBCU_DBBOST_t **********************/
/*
   SBCU_DBBOST           "SBCU Debug Trapped Bus Operation Signals Register"
*/
/**********************************************************/

#define SBCU_DBBOST_MASK                0x000f7fff
#define SBCU_DBBOST_FPIOPC_MASK         0x0000000f
#define SBCU_DBBOST_FPIOPC_SHIFT        0
#define SBCU_DBBOST_FPISVM_MASK         0x00000010
#define SBCU_DBBOST_FPISVM_SHIFT        4
#define SBCU_DBBOST_FPIACK_MASK         0x00000060
#define SBCU_DBBOST_FPIACK_SHIFT        5
#define SBCU_DBBOST_FPIRDY_MASK         0x00000080
#define SBCU_DBBOST_FPIRDY_SHIFT        7
#define SBCU_DBBOST_FPIWR_MASK          0x00000100
#define SBCU_DBBOST_FPIWR_SHIFT         8
#define SBCU_DBBOST_FPIRST_MASK         0x00000600
#define SBCU_DBBOST_FPIRST_SHIFT        9
#define SBCU_DBBOST_FPIOPS_MASK         0x00000800
#define SBCU_DBBOST_FPIOPS_SHIFT        11
#define SBCU_DBBOST_FPIRD_MASK          0x00001000
#define SBCU_DBBOST_FPIRD_SHIFT         12
#define SBCU_DBBOST_FPIABORT_MASK       0x00002000
#define SBCU_DBBOST_FPIABORT_SHIFT      13
#define SBCU_DBBOST_FPITOUT_MASK        0x00004000
#define SBCU_DBBOST_FPITOUT_SHIFT       14
#define SBCU_DBBOST_FPITAG_MASK         0x000f0000
#define SBCU_DBBOST_FPITAG_SHIFT        16



/****************** Masks for SBCU_DBCNTL_t **********************/
/*
   SBCU_DBCNTL           "SBCU Debug Control Register"
*/
/**********************************************************/

#define SBCU_DBCNTL_MASK                0xf3317013
#define SBCU_DBCNTL_EO_MASK             0x00000001
#define SBCU_DBCNTL_EO_SHIFT            0
#define SBCU_DBCNTL_OA_MASK             0x00000002
#define SBCU_DBCNTL_OA_SHIFT            1
#define SBCU_DBCNTL_RA_MASK             0x00000010
#define SBCU_DBCNTL_RA_SHIFT            4
#define SBCU_DBCNTL_CONCOM0_MASK        0x00001000
#define SBCU_DBCNTL_CONCOM0_SHIFT       12
#define SBCU_DBCNTL_CONCOM1_MASK        0x00002000
#define SBCU_DBCNTL_CONCOM1_SHIFT       13
#define SBCU_DBCNTL_CONCOM2_MASK        0x00004000
#define SBCU_DBCNTL_CONCOM2_SHIFT       14
#define SBCU_DBCNTL_ONG_MASK            0x00010000
#define SBCU_DBCNTL_ONG_SHIFT           16
#define SBCU_DBCNTL_ONA1_MASK           0x00300000
#define SBCU_DBCNTL_ONA1_SHIFT          20
#define SBCU_DBCNTL_ONA2_MASK           0x03000000
#define SBCU_DBCNTL_ONA2_SHIFT          24
#define SBCU_DBCNTL_ONBOS0_MASK         0x10000000
#define SBCU_DBCNTL_ONBOS0_SHIFT        28
#define SBCU_DBCNTL_ONBOS1_MASK         0x20000000
#define SBCU_DBCNTL_ONBOS1_SHIFT        29
#define SBCU_DBCNTL_ONBOS2_MASK         0x40000000
#define SBCU_DBCNTL_ONBOS2_SHIFT        30
#define SBCU_DBCNTL_ONBOS3_MASK         0x80000000
#define SBCU_DBCNTL_ONBOS3_SHIFT        31



/****************** Masks for SBCU_DBDAT_t **********************/
/*
   SBCU_DBDAT            "SBCU Debug Data Status Register"
*/
/**********************************************************/

#define SBCU_DBDAT_MASK                 0xffffffff
#define SBCU_DBDAT_FPIDATA_MASK         0xffffffff
#define SBCU_DBDAT_FPIDATA_SHIFT        0



/****************** Masks for SBCU_DBGNTT_t **********************/
/*
   SBCU_DBGNTT           "SBCU Debug Trapped Master Register"
*/
/**********************************************************/

#define SBCU_DBGNTT_MASK                0x00ffffff
#define SBCU_DBGNTT_DMAH_MASK           0x00000001
#define SBCU_DBGNTT_DMAH_SHIFT          0
#define SBCU_DBGNTT_ONES_MASK           0x0000000e
#define SBCU_DBGNTT_ONES_SHIFT          1
#define SBCU_DBGNTT_DMAM_MASK           0x00000010
#define SBCU_DBGNTT_DMAM_SHIFT          4
#define SBCU_DBGNTT_LFI_MASK            0x00000020
#define SBCU_DBGNTT_LFI_SHIFT           5
#define SBCU_DBGNTT_DMAL_MASK           0x00000040
#define SBCU_DBGNTT_DMAL_SHIFT          6
#define SBCU_DBGNTT_ONE_MASK            0x0000ff80
#define SBCU_DBGNTT_ONE_SHIFT           7
#define SBCU_DBGNTT_CHNR00_MASK         0x00010000
#define SBCU_DBGNTT_CHNR00_SHIFT        16
#define SBCU_DBGNTT_CHNR01_MASK         0x00020000
#define SBCU_DBGNTT_CHNR01_SHIFT        17
#define SBCU_DBGNTT_CHNR02_MASK         0x00040000
#define SBCU_DBGNTT_CHNR02_SHIFT        18
#define SBCU_DBGNTT_CHNR03_MASK         0x00080000
#define SBCU_DBGNTT_CHNR03_SHIFT        19
#define SBCU_DBGNTT_CHNR04_MASK         0x00100000
#define SBCU_DBGNTT_CHNR04_SHIFT        20
#define SBCU_DBGNTT_CHNR05_MASK         0x00200000
#define SBCU_DBGNTT_CHNR05_SHIFT        21
#define SBCU_DBGNTT_CHNR06_MASK         0x00400000
#define SBCU_DBGNTT_CHNR06_SHIFT        22
#define SBCU_DBGNTT_CHNR07_MASK         0x00800000
#define SBCU_DBGNTT_CHNR07_SHIFT        23



/****************** Masks for SBCU_DBGRNT_t **********************/
/*
   SBCU_DBGRNT           "SBCU Debug Grant Mask Register"
*/
/**********************************************************/

#define SBCU_DBGRNT_MASK                0x0000ffff
#define SBCU_DBGRNT_DMAH_MASK           0x00000001
#define SBCU_DBGRNT_DMAH_SHIFT          0
#define SBCU_DBGRNT_ONE_MASK            0x0000000e
#define SBCU_DBGRNT_ONE_SHIFT           1
#define SBCU_DBGRNT_DMAM_MASK           0x00000010
#define SBCU_DBGRNT_DMAM_SHIFT          4
#define SBCU_DBGRNT_LFI_MASK            0x00000020
#define SBCU_DBGRNT_LFI_SHIFT           5
#define SBCU_DBGRNT_DMAL_MASK           0x00000040
#define SBCU_DBGRNT_DMAL_SHIFT          6
#define SBCU_DBGRNT_ONES_MASK           0x0000ff80
#define SBCU_DBGRNT_ONES_SHIFT          7



/****************** Masks for SBCU_EADD_t **********************/
/*
   SBCU_EADD             "SBCU Error Address Capture Register"
*/
/**********************************************************/

#define SBCU_EADD_MASK                  0xffffffff
#define SBCU_EADD_FPIADR_MASK           0xffffffff
#define SBCU_EADD_FPIADR_SHIFT          0



/****************** Masks for SBCU_ECON_t **********************/
/*
   SBCU_ECON             "SBCU Error Control Capture Register"
*/
/**********************************************************/

#define SBCU_ECON_MASK                  0xffffffff
#define SBCU_ECON_ERRCNT_MASK           0x0000ffff
#define SBCU_ECON_ERRCNT_SHIFT          0
#define SBCU_ECON_TOUT_MASK             0x00010000
#define SBCU_ECON_TOUT_SHIFT            16
#define SBCU_ECON_RDY_MASK              0x00020000
#define SBCU_ECON_RDY_SHIFT             17
#define SBCU_ECON_ABT_MASK              0x00040000
#define SBCU_ECON_ABT_SHIFT             18
#define SBCU_ECON_ACK_MASK              0x00180000
#define SBCU_ECON_ACK_SHIFT             19
#define SBCU_ECON_SVM_MASK              0x00200000
#define SBCU_ECON_SVM_SHIFT             21
#define SBCU_ECON_WRN_MASK              0x00400000
#define SBCU_ECON_WRN_SHIFT             22
#define SBCU_ECON_RDN_MASK              0x00800000
#define SBCU_ECON_RDN_SHIFT             23
#define SBCU_ECON_TAG_MASK              0x0f000000
#define SBCU_ECON_TAG_SHIFT             24
#define SBCU_ECON_OPC_MASK              0xf0000000
#define SBCU_ECON_OPC_SHIFT             28



/****************** Masks for SBCU_EDAT_t **********************/
/*
   SBCU_EDAT             "SBCU Error Data Capture Register"
*/
/**********************************************************/

#define SBCU_EDAT_MASK                  0xffffffff
#define SBCU_EDAT_FPIDAT_MASK           0xffffffff
#define SBCU_EDAT_FPIDAT_SHIFT          0



/****************** Masks for SBCU_ID_t **********************/
/*
   SBCU_ID               "Module Identification Register"
*/
/**********************************************************/

#define SBCU_ID_MASK                    0x0000ffff
#define SBCU_ID_MOD_REV_MASK            0x000000ff
#define SBCU_ID_MOD_REV_SHIFT           0
#define SBCU_ID_MOD_NUMBER_MASK         0x0000ff00
#define SBCU_ID_MOD_NUMBER_SHIFT        8



/****************** Masks for SBCU_SRC_t **********************/
/*
   SBCU_SRC              "SBCU Service Request Control Register"
*/
/**********************************************************/

#define SBCU_SRC_MASK                   0x0000f4ff
#define SBCU_SRC_SRPN_MASK              0x000000ff
#define SBCU_SRC_SRPN_SHIFT             0
#define SBCU_SRC_TOS_MASK               0x00000400
#define SBCU_SRC_TOS_SHIFT              10
#define SBCU_SRC_SRE_MASK               0x00001000
#define SBCU_SRC_SRE_SHIFT              12
#define SBCU_SRC_SRR_MASK               0x00002000
#define SBCU_SRC_SRR_SHIFT              13
#define SBCU_SRC_CLRR_MASK              0x00004000
#define SBCU_SRC_CLRR_SHIFT             14
#define SBCU_SRC_SETR_MASK              0x00008000
#define SBCU_SRC_SETR_SHIFT             15




#endif /* _HAVE_TRICORE_BUSES_MASKS_H_ */

