/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_LBCU_MASKS_H_
#define _HAVE_TRICORE_LBCU_MASKS_H_


/****************** Masks for LBCU_ID_t **********************/
/*
   LBCU_ID               "LBCU Module Identification Register"
*/
/**********************************************************/

#define LBCU_ID_MASK                    0xffffffff
#define LBCU_ID_REV_MASK                0x000000ff
#define LBCU_ID_REV_SHIFT               0
#define LBCU_ID_MOD_32B_MASK            0x0000ff00
#define LBCU_ID_MOD_32B_SHIFT           8
#define LBCU_ID_MOD_MASK                0xffff0000
#define LBCU_ID_MOD_SHIFT               16



/****************** Masks for LBCU_LEADDR_t **********************/
/*
   LBCU_LEADDR           "LMB Error Addres Register"
*/
/**********************************************************/

#define LBCU_LEADDR_MASK                0xffffffff
#define LBCU_LEADDR_LEADDR_MASK         0xffffffff
#define LBCU_LEADDR_LEADDR_SHIFT        0



/****************** Masks for LBCU_LEATT_t **********************/
/*
   LBCU_LEATT            "LMB Error Attributes Register"
*/
/**********************************************************/

#define LBCU_LEATT_MASK                 0xf7efcff1
#define LBCU_LEATT_LEC_MASK             0x00000001
#define LBCU_LEATT_LEC_SHIFT            0
#define LBCU_LEATT_USER_ATT_MASK        0x00000ff0
#define LBCU_LEATT_USER_ATT_SHIFT       4
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
   LBCU_LEDATH           "LMB Error Data Register (32 MSB's)"
*/
/**********************************************************/

#define LBCU_LEDATH_MASK                0xffffffff
#define LBCU_LEDATH_LEDAT_MASK          0xffffffff
#define LBCU_LEDATH_LEDAT_SHIFT         0



/****************** Masks for LBCU_LEDATL_t **********************/
/*
   LBCU_LEDATL           "LMB Error Data Register (32 LSB's)"
*/
/**********************************************************/

#define LBCU_LEDATL_MASK                0xffffffff
#define LBCU_LEDATL_LEDAT_MASK          0xffffffff
#define LBCU_LEDATL_LEDAT_SHIFT         0



/****************** Masks for LBCU_SRC_t **********************/
/*
   LBCU_SRC              "PBCU Service Request Control Register"
*/
/**********************************************************/

#define LBCU_SRC_MASK                   0x0000f4ff
#define LBCU_SRC_SRPN_MASK              0x000000ff
#define LBCU_SRC_SRPN_SHIFT             0
#define LBCU_SRC_TOS_MASK               0x00000400
#define LBCU_SRC_TOS_SHIFT              10
#define LBCU_SRC_SRE_MASK               0x00001000
#define LBCU_SRC_SRE_SHIFT              12
#define LBCU_SRC_SRR_MASK               0x00002000
#define LBCU_SRC_SRR_SHIFT              13
#define LBCU_SRC_CLRR_MASK              0x00004000
#define LBCU_SRC_CLRR_SHIFT             14
#define LBCU_SRC_SETR_MASK              0x00008000
#define LBCU_SRC_SETR_SHIFT             15




#endif /* _HAVE_TRICORE_LBCU_MASKS_H_ */

