/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DBCU_MASKS_H_
#define _HAVE_TRICORE_DBCU_MASKS_H_


/****************** Masks for DBCU_ID_t **********************/
/*
   DBCU_ID               "DBCU Module Identification Register"
*/
/**********************************************************/

#define DBCU_ID_MASK                    0x00000000



/****************** Masks for DBCU_LEADDR_t **********************/
/*
   DBCU_LEADDR           "DBCU LMB Error Address Register"
*/
/**********************************************************/

#define DBCU_LEADDR_MASK                0xffffffff
#define DBCU_LEADDR_LEADDR_MASK         0xffffffff
#define DBCU_LEADDR_LEADDR_SHIFT        0



/****************** Masks for DBCU_LEATT_t **********************/
/*
   DBCU_LEATT            "DBCU LMB Error Attribute Register"
*/
/**********************************************************/

#define DBCU_LEATT_MASK                 0xf7ef80f1
#define DBCU_LEATT_LEC_MASK             0x00000001
#define DBCU_LEATT_LEC_SHIFT            0
#define DBCU_LEATT_FPITAG_MASK          0x000000f0
#define DBCU_LEATT_FPITAG_SHIFT         4
#define DBCU_LEATT_LOC_MASK             0x00008000
#define DBCU_LEATT_LOC_SHIFT            15
#define DBCU_LEATT_ACK_MASK             0x00070000
#define DBCU_LEATT_ACK_SHIFT            16
#define DBCU_LEATT_UIS_MASK             0x00080000
#define DBCU_LEATT_UIS_SHIFT            19
#define DBCU_LEATT_SVM_MASK             0x00200000
#define DBCU_LEATT_SVM_SHIFT            21
#define DBCU_LEATT_WR_MASK              0x00400000
#define DBCU_LEATT_WR_SHIFT             22
#define DBCU_LEATT_RD_MASK              0x00800000
#define DBCU_LEATT_RD_SHIFT             23
#define DBCU_LEATT_TAG_MASK             0x07000000
#define DBCU_LEATT_TAG_SHIFT            24
#define DBCU_LEATT_OPC_MASK             0xf0000000
#define DBCU_LEATT_OPC_SHIFT            28



/****************** Masks for DBCU_LEDATH_t **********************/
/*
   DBCU_LEDATH           "DBCU LMB Error Data High Register"
*/
/**********************************************************/

#define DBCU_LEDATH_MASK                0xffffffff
#define DBCU_LEDATH_LEDAT_63_32_MASK    0xffffffff
#define DBCU_LEDATH_LEDAT_63_32_SHIFT   0



/****************** Masks for DBCU_LEDATL_t **********************/
/*
   DBCU_LEDATL           "DBCU LMB Error Data Low Register"
*/
/**********************************************************/

#define DBCU_LEDATL_MASK                0xffffffff
#define DBCU_LEDATL_LEDAT_31_0_MASK     0xffffffff
#define DBCU_LEDATL_LEDAT_31_0_SHIFT    0



/****************** Masks for DBCU_SRC_t **********************/
/*
   DBCU_SRC              "DBCU Service Request Control Register"
*/
/**********************************************************/

#define DBCU_SRC_MASK                   0x0000fcff
#define DBCU_SRC_SRPN_MASK              0x000000ff
#define DBCU_SRC_SRPN_SHIFT             0
#define DBCU_SRC_TOS_MASK               0x00000c00
#define DBCU_SRC_TOS_SHIFT              10
#define DBCU_SRC_SRE_MASK               0x00001000
#define DBCU_SRC_SRE_SHIFT              12
#define DBCU_SRC_SRR_MASK               0x00002000
#define DBCU_SRC_SRR_SHIFT              13
#define DBCU_SRC_CLRR_MASK              0x00004000
#define DBCU_SRC_CLRR_SHIFT             14
#define DBCU_SRC_SETR_MASK              0x00008000
#define DBCU_SRC_SETR_SHIFT             15




#endif /* _HAVE_TRICORE_DBCU_MASKS_H_ */

