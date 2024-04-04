/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CAN_MASKS_H_
#define _HAVE_TRICORE_CAN_MASKS_H_


/****************** Masks for CAN_CLC_t **********************/
/*
   CAN_CLC               "MultiCAN Clock Control Register"
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



/****************** Masks for CAN_EDCR_t **********************/
/*
   CAN_EDCR              "Error Detection and Correction Test Register"
*/
/**********************************************************/

#define CAN_EDCR_MASK                   0x01010101
#define CAN_EDCR_ECCW_MASK              0x00000001
#define CAN_EDCR_ECCW_SHIFT             0
#define CAN_EDCR_EDCDIS_MASK            0x00000100
#define CAN_EDCR_EDCDIS_SHIFT           8
#define CAN_EDCR_ECCR_MASK              0x00010000
#define CAN_EDCR_ECCR_SHIFT             16
#define CAN_EDCR_SBERR_MASK             0x01000000
#define CAN_EDCR_SBERR_SHIFT            24



/****************** Masks for CAN_FDR_t **********************/
/*
   CAN_FDR               "MultiCAN Fractional Divider Register"
*/
/**********************************************************/

#define CAN_FDR_MASK                    0xf3fffbff
#define CAN_FDR_STEP_MASK               0x000003ff
#define CAN_FDR_STEP_SHIFT              0
#define CAN_FDR_SM_MASK                 0x00000800
#define CAN_FDR_SM_SHIFT                11
#define CAN_FDR_SC_MASK                 0x00003000
#define CAN_FDR_SC_SHIFT                12
#define CAN_FDR_DM_MASK                 0x0000c000
#define CAN_FDR_DM_SHIFT                14
#define CAN_FDR_RESULT_MASK             0x03ff0000
#define CAN_FDR_RESULT_SHIFT            16
#define CAN_FDR_SUSACK_MASK             0x10000000
#define CAN_FDR_SUSACK_SHIFT            28
#define CAN_FDR_SUSREQ_MASK             0x20000000
#define CAN_FDR_SUSREQ_SHIFT            29
#define CAN_FDR_ENHW_MASK               0x40000000
#define CAN_FDR_ENHW_SHIFT              30
#define CAN_FDR_DISCLK_MASK             0x80000000
#define CAN_FDR_DISCLK_SHIFT            31



/****************** Masks for CAN_ID_t **********************/
/*
   CAN_ID                "MultiCAN Module Identification Register"
*/
/**********************************************************/

#define CAN_ID_MASK                     0xffffffff
#define CAN_ID_MOD_REV_MASK             0x000000ff
#define CAN_ID_MOD_REV_SHIFT            0
#define CAN_ID_MOD_TYPE_MASK            0x0000ff00
#define CAN_ID_MOD_TYPE_SHIFT           8
#define CAN_ID_MOD_NUMBER_MASK          0xffff0000
#define CAN_ID_MOD_NUMBER_SHIFT         16



/****************** Masks for CAN_MCR_t **********************/
/*
   CAN_MCR               "MultiCAN Module Control Register"
*/
/**********************************************************/

#define CAN_MCR_MASK                    0x0000f000
#define CAN_MCR_MPSEL_MASK              0x0000f000
#define CAN_MCR_MPSEL_SHIFT             12



/****************** Masks for CAN_MITR_t **********************/
/*
   CAN_MITR              "Module Interrupt Trigger Register"
*/
/**********************************************************/

#define CAN_MITR_MASK                   0x0000ffff
#define CAN_MITR_IT_15_0_MASK           0x0000ffff
#define CAN_MITR_IT_15_0_SHIFT          0



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




#endif /* _HAVE_TRICORE_CAN_MASKS_H_ */

