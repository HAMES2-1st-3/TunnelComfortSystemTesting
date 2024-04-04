/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PBCU_MASKS_H_
#define _HAVE_TRICORE_PBCU_MASKS_H_


/****************** Masks for PBCU_ID_t **********************/
/*
   PBCU_ID               "PBCU Module Identification Register"
*/
/**********************************************************/

#define PBCU_ID_MASK                    0x00000000



/****************** Masks for PBCU_LEADDR_t **********************/
/*
   PBCU_LEADDR           "PBCU LMB Error Address Register"
*/
/**********************************************************/

#define PBCU_LEADDR_MASK                0xffffffff
#define PBCU_LEADDR_LEADDR_MASK         0xffffffff
#define PBCU_LEADDR_LEADDR_SHIFT        0



/****************** Masks for PBCU_LEATT_t **********************/
/*
   PBCU_LEATT            "PBCU LMB Error Attribute Register"
*/
/**********************************************************/

#define PBCU_LEATT_MASK                 0xf7ef80f1
#define PBCU_LEATT_LEC_MASK             0x00000001
#define PBCU_LEATT_LEC_SHIFT            0
#define PBCU_LEATT_FPITAG_MASK          0x000000f0
#define PBCU_LEATT_FPITAG_SHIFT         4
#define PBCU_LEATT_LOC_MASK             0x00008000
#define PBCU_LEATT_LOC_SHIFT            15
#define PBCU_LEATT_ACK_MASK             0x00070000
#define PBCU_LEATT_ACK_SHIFT            16
#define PBCU_LEATT_UIS_MASK             0x00080000
#define PBCU_LEATT_UIS_SHIFT            19
#define PBCU_LEATT_SVM_MASK             0x00200000
#define PBCU_LEATT_SVM_SHIFT            21
#define PBCU_LEATT_WR_MASK              0x00400000
#define PBCU_LEATT_WR_SHIFT             22
#define PBCU_LEATT_RD_MASK              0x00800000
#define PBCU_LEATT_RD_SHIFT             23
#define PBCU_LEATT_TAG_MASK             0x07000000
#define PBCU_LEATT_TAG_SHIFT            24
#define PBCU_LEATT_OPC_MASK             0xf0000000
#define PBCU_LEATT_OPC_SHIFT            28



/****************** Masks for PBCU_LEDATH_t **********************/
/*
   PBCU_LEDATH           "PBCU LMB Error Data High Register"
*/
/**********************************************************/

#define PBCU_LEDATH_MASK                0xffffffff
#define PBCU_LEDATH_LEDAT_63_32_MASK    0xffffffff
#define PBCU_LEDATH_LEDAT_63_32_SHIFT   0



/****************** Masks for PBCU_LEDATL_t **********************/
/*
   PBCU_LEDATL           "PBCU LMB Error Data Low Register"
*/
/**********************************************************/

#define PBCU_LEDATL_MASK                0xffffffff
#define PBCU_LEDATL_LEDAT_31_0_MASK     0xffffffff
#define PBCU_LEDATL_LEDAT_31_0_SHIFT    0



/****************** Masks for PBCU_SRC_t **********************/
/*
   PBCU_SRC              "PBCU Service Request Control Register"
*/
/**********************************************************/

#define PBCU_SRC_MASK                   0x0000fcff
#define PBCU_SRC_SRPN_MASK              0x000000ff
#define PBCU_SRC_SRPN_SHIFT             0
#define PBCU_SRC_TOS_MASK               0x00000c00
#define PBCU_SRC_TOS_SHIFT              10
#define PBCU_SRC_SRE_MASK               0x00001000
#define PBCU_SRC_SRE_SHIFT              12
#define PBCU_SRC_SRR_MASK               0x00002000
#define PBCU_SRC_SRR_SHIFT              13
#define PBCU_SRC_CLRR_MASK              0x00004000
#define PBCU_SRC_CLRR_SHIFT             14
#define PBCU_SRC_SETR_MASK              0x00008000
#define PBCU_SRC_SETR_SHIFT             15




#endif /* _HAVE_TRICORE_PBCU_MASKS_H_ */

