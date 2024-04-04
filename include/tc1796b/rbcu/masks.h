/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_RBCU_MASKS_H_
#define _HAVE_TRICORE_RBCU_MASKS_H_


/****************** Masks for RBCU_CON_t **********************/
/*
   RBCU_CON              "RBCU Control Register"
*/
/**********************************************************/

#define RBCU_CON_MASK                   0xff0dffff
#define RBCU_CON_TOUT_MASK              0x0000ffff
#define RBCU_CON_TOUT_SHIFT             0
#define RBCU_CON_DBG_MASK               0x00010000
#define RBCU_CON_DBG_SHIFT              16
#define RBCU_CON_PSE_MASK               0x00040000
#define RBCU_CON_PSE_SHIFT              18
#define RBCU_CON_SPE_MASK               0x00080000
#define RBCU_CON_SPE_SHIFT              19
#define RBCU_CON_SPC_MASK               0xff000000
#define RBCU_CON_SPC_SHIFT              24



/****************** Masks for RBCU_DBADRT_t **********************/
/*
   RBCU_DBADRT           "RBCU Debug Trapped Address Register"
*/
/**********************************************************/

#define RBCU_DBADRT_MASK                0xffffffff
#define RBCU_DBADRT_FPIADR_MASK         0xffffffff
#define RBCU_DBADRT_FPIADR_SHIFT        0



/****************** Masks for RBCU_DBBOS_t **********************/
/*
   RBCU_DBBOS            "RBCU Debug Bus Operation Signals Register"
*/
/**********************************************************/

#define RBCU_DBBOS_MASK                 0x0000111f
#define RBCU_DBBOS_OPC_MASK             0x0000000f
#define RBCU_DBBOS_OPC_SHIFT            0
#define RBCU_DBBOS_SVM_MASK             0x00000010
#define RBCU_DBBOS_SVM_SHIFT            4
#define RBCU_DBBOS_WR_MASK              0x00000100
#define RBCU_DBBOS_WR_SHIFT             8
#define RBCU_DBBOS_RD_MASK              0x00001000
#define RBCU_DBBOS_RD_SHIFT             12



/****************** Masks for RBCU_DBBOST_t **********************/
/*
   RBCU_DBBOST           "RBCU Debug Trapped Bus Operation Signals Register"
*/
/**********************************************************/

#define RBCU_DBBOST_MASK                0x000f7fff
#define RBCU_DBBOST_FPIOPC_MASK         0x0000000f
#define RBCU_DBBOST_FPIOPC_SHIFT        0
#define RBCU_DBBOST_FPISVM_MASK         0x00000010
#define RBCU_DBBOST_FPISVM_SHIFT        4
#define RBCU_DBBOST_FPIACK_MASK         0x00000060
#define RBCU_DBBOST_FPIACK_SHIFT        5
#define RBCU_DBBOST_FPIRDY_MASK         0x00000080
#define RBCU_DBBOST_FPIRDY_SHIFT        7
#define RBCU_DBBOST_FPIWR_MASK          0x00000100
#define RBCU_DBBOST_FPIWR_SHIFT         8
#define RBCU_DBBOST_FPIRST_MASK         0x00000600
#define RBCU_DBBOST_FPIRST_SHIFT        9
#define RBCU_DBBOST_FPIOPS_MASK         0x00000800
#define RBCU_DBBOST_FPIOPS_SHIFT        11
#define RBCU_DBBOST_FPIRD_MASK          0x00001000
#define RBCU_DBBOST_FPIRD_SHIFT         12
#define RBCU_DBBOST_FPIABORT_MASK       0x00002000
#define RBCU_DBBOST_FPIABORT_SHIFT      13
#define RBCU_DBBOST_FPITOUT_MASK        0x00004000
#define RBCU_DBBOST_FPITOUT_SHIFT       14
#define RBCU_DBBOST_FPITAG_MASK         0x000f0000
#define RBCU_DBBOST_FPITAG_SHIFT        16



/****************** Masks for RBCU_DBCNTL_t **********************/
/*
   RBCU_DBCNTL           "RBCU Debug Control Register"
*/
/**********************************************************/

#define RBCU_DBCNTL_MASK                0xf3317013
#define RBCU_DBCNTL_EO_MASK             0x00000001
#define RBCU_DBCNTL_EO_SHIFT            0
#define RBCU_DBCNTL_OA_MASK             0x00000002
#define RBCU_DBCNTL_OA_SHIFT            1
#define RBCU_DBCNTL_RA_MASK             0x00000010
#define RBCU_DBCNTL_RA_SHIFT            4
#define RBCU_DBCNTL_CONCOM0_MASK        0x00001000
#define RBCU_DBCNTL_CONCOM0_SHIFT       12
#define RBCU_DBCNTL_CONCOM1_MASK        0x00002000
#define RBCU_DBCNTL_CONCOM1_SHIFT       13
#define RBCU_DBCNTL_CONCOM2_MASK        0x00004000
#define RBCU_DBCNTL_CONCOM2_SHIFT       14
#define RBCU_DBCNTL_ONG_MASK            0x00010000
#define RBCU_DBCNTL_ONG_SHIFT           16
#define RBCU_DBCNTL_ONA1_MASK           0x00300000
#define RBCU_DBCNTL_ONA1_SHIFT          20
#define RBCU_DBCNTL_ONA2_MASK           0x03000000
#define RBCU_DBCNTL_ONA2_SHIFT          24
#define RBCU_DBCNTL_ONBOS0_MASK         0x10000000
#define RBCU_DBCNTL_ONBOS0_SHIFT        28
#define RBCU_DBCNTL_ONBOS1_MASK         0x20000000
#define RBCU_DBCNTL_ONBOS1_SHIFT        29
#define RBCU_DBCNTL_ONBOS2_MASK         0x40000000
#define RBCU_DBCNTL_ONBOS2_SHIFT        30
#define RBCU_DBCNTL_ONBOS3_MASK         0x80000000
#define RBCU_DBCNTL_ONBOS3_SHIFT        31



/****************** Masks for RBCU_DBGNTT_t **********************/
/*
   RBCU_DBGNTT           "RBCU Debug Trapped Master Register"
*/
/**********************************************************/

#define RBCU_DBGNTT_MASK                0xffff0050
#define RBCU_DBGNTT_DMAH_MASK           0x00000010
#define RBCU_DBGNTT_DMAH_SHIFT          4
#define RBCU_DBGNTT_DMAL_MASK           0x00000040
#define RBCU_DBGNTT_DMAL_SHIFT          6
#define RBCU_DBGNTT_CHNR00_MASK         0x00010000
#define RBCU_DBGNTT_CHNR00_SHIFT        16
#define RBCU_DBGNTT_CHNR01_MASK         0x00020000
#define RBCU_DBGNTT_CHNR01_SHIFT        17
#define RBCU_DBGNTT_CHNR02_MASK         0x00040000
#define RBCU_DBGNTT_CHNR02_SHIFT        18
#define RBCU_DBGNTT_CHNR03_MASK         0x00080000
#define RBCU_DBGNTT_CHNR03_SHIFT        19
#define RBCU_DBGNTT_CHNR04_MASK         0x00100000
#define RBCU_DBGNTT_CHNR04_SHIFT        20
#define RBCU_DBGNTT_CHNR05_MASK         0x00200000
#define RBCU_DBGNTT_CHNR05_SHIFT        21
#define RBCU_DBGNTT_CHNR06_MASK         0x00400000
#define RBCU_DBGNTT_CHNR06_SHIFT        22
#define RBCU_DBGNTT_CHNR07_MASK         0x00800000
#define RBCU_DBGNTT_CHNR07_SHIFT        23
#define RBCU_DBGNTT_CHNR10_MASK         0x01000000
#define RBCU_DBGNTT_CHNR10_SHIFT        24
#define RBCU_DBGNTT_CHNR11_MASK         0x02000000
#define RBCU_DBGNTT_CHNR11_SHIFT        25
#define RBCU_DBGNTT_CHNR12_MASK         0x04000000
#define RBCU_DBGNTT_CHNR12_SHIFT        26
#define RBCU_DBGNTT_CHNR13_MASK         0x08000000
#define RBCU_DBGNTT_CHNR13_SHIFT        27
#define RBCU_DBGNTT_CHNR14_MASK         0x10000000
#define RBCU_DBGNTT_CHNR14_SHIFT        28
#define RBCU_DBGNTT_CHNR15_MASK         0x20000000
#define RBCU_DBGNTT_CHNR15_SHIFT        29
#define RBCU_DBGNTT_CHNR16_MASK         0x40000000
#define RBCU_DBGNTT_CHNR16_SHIFT        30
#define RBCU_DBGNTT_CHNR17_MASK         0x80000000
#define RBCU_DBGNTT_CHNR17_SHIFT        31



/****************** Masks for RBCU_DBGRNT_t **********************/
/*
   RBCU_DBGRNT           "RBCU Debug Grant Mask Register"
*/
/**********************************************************/

#define RBCU_DBGRNT_MASK                0x00000050
#define RBCU_DBGRNT_DMAH_MASK           0x00000010
#define RBCU_DBGRNT_DMAH_SHIFT          4
#define RBCU_DBGRNT_DMAL_MASK           0x00000040
#define RBCU_DBGRNT_DMAL_SHIFT          6



/****************** Masks for RBCU_EADD_t **********************/
/*
   RBCU_EADD             "RBCU Error Address Capture Register"
*/
/**********************************************************/

#define RBCU_EADD_MASK                  0xffffffff
#define RBCU_EADD_FPIADR_MASK           0xffffffff
#define RBCU_EADD_FPIADR_SHIFT          0



/****************** Masks for RBCU_ECON_t **********************/
/*
   RBCU_ECON             "RBCU Error Control Capture Register"
*/
/**********************************************************/

#define RBCU_ECON_MASK                  0xffffffff
#define RBCU_ECON_ERRCNT_MASK           0x0000ffff
#define RBCU_ECON_ERRCNT_SHIFT          0
#define RBCU_ECON_TOUT_MASK             0x00010000
#define RBCU_ECON_TOUT_SHIFT            16
#define RBCU_ECON_RDY_MASK              0x00020000
#define RBCU_ECON_RDY_SHIFT             17
#define RBCU_ECON_ABT_MASK              0x00040000
#define RBCU_ECON_ABT_SHIFT             18
#define RBCU_ECON_ACK_MASK              0x00180000
#define RBCU_ECON_ACK_SHIFT             19
#define RBCU_ECON_SVM_MASK              0x00200000
#define RBCU_ECON_SVM_SHIFT             21
#define RBCU_ECON_WRN_MASK              0x00400000
#define RBCU_ECON_WRN_SHIFT             22
#define RBCU_ECON_RDN_MASK              0x00800000
#define RBCU_ECON_RDN_SHIFT             23
#define RBCU_ECON_TAG_MASK              0x0f000000
#define RBCU_ECON_TAG_SHIFT             24
#define RBCU_ECON_OPC_MASK              0xf0000000
#define RBCU_ECON_OPC_SHIFT             28



/****************** Masks for RBCU_EDAT_t **********************/
/*
   RBCU_EDAT             "RBCU Error Data Capture Register"
*/
/**********************************************************/

#define RBCU_EDAT_MASK                  0xffffffff
#define RBCU_EDAT_FPIDAT_MASK           0xffffffff
#define RBCU_EDAT_FPIDAT_SHIFT          0



/****************** Masks for RBCU_ID_t **********************/
/*
   RBCU_ID               "RBCU Module Identification Register"
*/
/**********************************************************/

#define RBCU_ID_MASK                    0x00000000



/****************** Masks for RBCU_SRC_t **********************/
/*
   RBCU_SRC              "RBCU Service Request Control Register"
*/
/**********************************************************/

#define RBCU_SRC_MASK                   0x0000fcff
#define RBCU_SRC_SRPN_MASK              0x000000ff
#define RBCU_SRC_SRPN_SHIFT             0
#define RBCU_SRC_TOS_MASK               0x00000c00
#define RBCU_SRC_TOS_SHIFT              10
#define RBCU_SRC_SRE_MASK               0x00001000
#define RBCU_SRC_SRE_SHIFT              12
#define RBCU_SRC_SRR_MASK               0x00002000
#define RBCU_SRC_SRR_SHIFT              13
#define RBCU_SRC_CLRR_MASK              0x00004000
#define RBCU_SRC_CLRR_SHIFT             14
#define RBCU_SRC_SETR_MASK              0x00008000
#define RBCU_SRC_SETR_SHIFT             15




#endif /* _HAVE_TRICORE_RBCU_MASKS_H_ */

