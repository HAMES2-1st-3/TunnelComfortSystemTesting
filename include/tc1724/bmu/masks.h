/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_BMU_MASKS_H_
#define _HAVE_TRICORE_BMU_MASKS_H_


/****************** Masks for BMU_CLC_t **********************/
/*
   BMU_CLC               "Control Clock Register"
*/
/**********************************************************/

#define BMU_CLC_MASK                    0x00000003
#define BMU_CLC_DISR_MASK               0x00000001
#define BMU_CLC_DISR_SHIFT              0
#define BMU_CLC_DISS_MASK               0x00000002
#define BMU_CLC_DISS_SHIFT              1



/****************** Masks for BMU_CTL_t **********************/
/*
   BMU_CTL               "Transaction Filtering Control"
*/
/**********************************************************/

#define BMU_CTL_MASK                    0x00000003
#define BMU_CTL_MODE_MASK               0x00000001
#define BMU_CTL_MODE_SHIFT              0
#define BMU_CTL_TMF_MASK                0x00000002
#define BMU_CTL_TMF_SHIFT               1



/****************** Masks for BMU_FMCTL_t **********************/
/*
   BMU_FMCTL             "Fifo Monitor control register"
*/
/**********************************************************/

#define BMU_FMCTL_MASK                  0x00000006
#define BMU_FMCTL_FHT_INT_MASK          0x00000002
#define BMU_FMCTL_FHT_INT_SHIFT         1
#define BMU_FMCTL_UDF_INT_MASK          0x00000004
#define BMU_FMCTL_UDF_INT_SHIFT         2



/****************** Masks for BMU_FMSTS_t **********************/
/*
   BMU_FMSTS             "Fifo Monitor Status Register"
*/
/**********************************************************/

#define BMU_FMSTS_MASK                  0x00000007
#define BMU_FMSTS_FHT_STS_MASK          0x00000001
#define BMU_FMSTS_FHT_STS_SHIFT         0
#define BMU_FMSTS_OVF_STS_MASK          0x00000002
#define BMU_FMSTS_OVF_STS_SHIFT         1
#define BMU_FMSTS_UDF_STS_MASK          0x00000004
#define BMU_FMSTS_UDF_STS_SHIFT         2



/****************** Masks for BMU_FMTH_t **********************/
/*
   BMU_FMTH              "Fifo Monitor: Fullness Threshold Register"
*/
/**********************************************************/

#define BMU_FMTH_MASK                   0x000003ff
#define BMU_FMTH_FHT_MASK               0x000003ff
#define BMU_FMTH_FHT_SHIFT              0



/****************** Masks for BMU_FULLNESS_t **********************/
/*
   BMU_FULLNESS          "Fullness Information for Bus Transaction Fifo"
*/
/**********************************************************/

#define BMU_FULLNESS_MASK               0x07ff07ff
#define BMU_FULLNESS_UCELLS_MASK        0x000007ff
#define BMU_FULLNESS_UCELLS_SHIFT       0
#define BMU_FULLNESS_FCELLS_MASK        0x07ff0000
#define BMU_FULLNESS_FCELLS_SHIFT       16



/****************** Masks for BMU_ID_t **********************/
/*
   BMU_ID                "Module Identification Register"
*/
/**********************************************************/

#define BMU_ID_MASK                     0xffffffff
#define BMU_ID_MOD_REV_MASK             0x000000ff
#define BMU_ID_MOD_REV_SHIFT            0
#define BMU_ID_MOD_TYPE_MASK            0x0000ff00
#define BMU_ID_MOD_TYPE_SHIFT           8
#define BMU_ID_MOD_NUMBER_MASK          0xffff0000
#define BMU_ID_MOD_NUMBER_SHIFT         16



/****************** Masks for BMU_MIECON_t **********************/
/*
   BMU_MIECON            "Memory Integrity Error Control Register"
*/
/**********************************************************/

#define BMU_MIECON_MASK                 0x00000001
#define BMU_MIECON_DED_EN_MASK          0x00000001
#define BMU_MIECON_DED_EN_SHIFT         0



/****************** Masks for BMU_MIECON2_t **********************/
/*
   BMU_MIECON2           "Memory Integrity Error Control 2 Register"
*/
/**********************************************************/

#define BMU_MIECON2_MASK                0x00000001
#define BMU_MIECON2_SEC_EN_MASK         0x00000001
#define BMU_MIECON2_SEC_EN_SHIFT        0



/****************** Masks for BMU_PTR_t **********************/
/*
   BMU_PTR               "Pointer Information for Bus Transaction Fifo"
*/
/**********************************************************/

#define BMU_PTR_MASK                    0x03ff03ff
#define BMU_PTR_RPTR_MASK               0x000003ff
#define BMU_PTR_RPTR_SHIFT              0
#define BMU_PTR_WPTR_MASK               0x03ff0000
#define BMU_PTR_WPTR_SHIFT              16



/****************** Masks for BMU_SMACON_t **********************/
/*
   BMU_SMACON            "SIST Mode Access Control Register"
*/
/**********************************************************/

#define BMU_SMACON_MASK                 0x00000003
#define BMU_SMACON_BMURAM_MASK          0x00000003
#define BMU_SMACON_BMURAM_SHIFT         0



/****************** Masks for BMU_SRC_t **********************/
/*
   BMU_SRC               "Service Request Control Register"
*/
/**********************************************************/

#define BMU_SRC_MASK                    0x0000f4ff
#define BMU_SRC_SRPN_MASK               0x000000ff
#define BMU_SRC_SRPN_SHIFT              0
#define BMU_SRC_TOS_MASK                0x00000400
#define BMU_SRC_TOS_SHIFT               10
#define BMU_SRC_SRE_MASK                0x00001000
#define BMU_SRC_SRE_SHIFT               12
#define BMU_SRC_SRR_MASK                0x00002000
#define BMU_SRC_SRR_SHIFT               13
#define BMU_SRC_CLRR_MASK               0x00004000
#define BMU_SRC_CLRR_SHIFT              14
#define BMU_SRC_SETR_MASK               0x00008000
#define BMU_SRC_SETR_SHIFT              15



/****************** Masks for BMU_TID_t **********************/
/*
   BMU_TID               "FPI Transaction ID Set 0 Configuration"
*/
/**********************************************************/

#define BMU_TID_MASK                    0x0000000f
#define BMU_TID_TID0_MASK               0x0000000f
#define BMU_TID_TID0_SHIFT              0




#endif /* _HAVE_TRICORE_BMU_MASKS_H_ */

