/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_STM_MASKS_H_
#define _HAVE_TRICORE_STM_MASKS_H_


/****************** Masks for STM_CAP_t **********************/
/*
   STM_CAP               "STM Capture Register"
*/
/**********************************************************/

#define STM_CAP_MASK                    0x00ffffff
#define STM_CAP_STM_CAP_55_32_MASK      0x00ffffff
#define STM_CAP_STM_CAP_55_32_SHIFT     0



/****************** Masks for STM_CLC_t **********************/
/*
   STM_CLC               "STM Clock Control Register"
*/
/**********************************************************/

#define STM_CLC_MASK                    0x0000073f
#define STM_CLC_DISR_MASK               0x00000001
#define STM_CLC_DISR_SHIFT              0
#define STM_CLC_DISS_MASK               0x00000002
#define STM_CLC_DISS_SHIFT              1
#define STM_CLC_SPEN_MASK               0x00000004
#define STM_CLC_SPEN_SHIFT              2
#define STM_CLC_EDIS_MASK               0x00000008
#define STM_CLC_EDIS_SHIFT              3
#define STM_CLC_SBWE_MASK               0x00000010
#define STM_CLC_SBWE_SHIFT              4
#define STM_CLC_FSOE_MASK               0x00000020
#define STM_CLC_FSOE_SHIFT              5
#define STM_CLC_RMC_MASK                0x00000700
#define STM_CLC_RMC_SHIFT               8



/****************** Masks for STM_CMCON_t **********************/
/*
   STM_CMCON             "Compare Match Control Register"
*/
/**********************************************************/

#define STM_CMCON_MASK                  0x1f1f1f1f
#define STM_CMCON_MSIZE0_MASK           0x0000001f
#define STM_CMCON_MSIZE0_SHIFT          0
#define STM_CMCON_MSTART0_MASK          0x00001f00
#define STM_CMCON_MSTART0_SHIFT         8
#define STM_CMCON_MSIZE1_MASK           0x001f0000
#define STM_CMCON_MSIZE1_SHIFT          16
#define STM_CMCON_MSTART1_MASK          0x1f000000
#define STM_CMCON_MSTART1_SHIFT         24



/****************** Masks for STM_ICR_t **********************/
/*
   STM_ICR               "STM Interrupt Control Register"
*/
/**********************************************************/

#define STM_ICR_MASK                    0x00000077
#define STM_ICR_CMP0EN_MASK             0x00000001
#define STM_ICR_CMP0EN_SHIFT            0
#define STM_ICR_CMP0IR_MASK             0x00000002
#define STM_ICR_CMP0IR_SHIFT            1
#define STM_ICR_CMP0OS_MASK             0x00000004
#define STM_ICR_CMP0OS_SHIFT            2
#define STM_ICR_CMP1EN_MASK             0x00000010
#define STM_ICR_CMP1EN_SHIFT            4
#define STM_ICR_CMP1IR_MASK             0x00000020
#define STM_ICR_CMP1IR_SHIFT            5
#define STM_ICR_CMP1OS_MASK             0x00000040
#define STM_ICR_CMP1OS_SHIFT            6



/****************** Masks for STM_ID_t **********************/
/*
   STM_ID                "STM Module Identification Register"
*/
/**********************************************************/

#define STM_ID_MASK                     0xffffffff
#define STM_ID_Mod_Rev_MASK             0x000000ff
#define STM_ID_Mod_Rev_SHIFT            0
#define STM_ID_Mod_Type_MASK            0x0000ff00
#define STM_ID_Mod_Type_SHIFT           8
#define STM_ID_Mod_Number_MASK          0xffff0000
#define STM_ID_Mod_Number_SHIFT         16



/****************** Masks for STM_ISRR_t **********************/
/*
   STM_ISRR              "Interrupt Set/Reset Register"
*/
/**********************************************************/

#define STM_ISRR_MASK                   0x0000000f
#define STM_ISRR_CMP0IRR_MASK           0x00000001
#define STM_ISRR_CMP0IRR_SHIFT          0
#define STM_ISRR_CMP0IRS_MASK           0x00000002
#define STM_ISRR_CMP0IRS_SHIFT          1
#define STM_ISRR_CMP1IRR_MASK           0x00000004
#define STM_ISRR_CMP1IRR_SHIFT          2
#define STM_ISRR_CMP1IRS_MASK           0x00000008
#define STM_ISRR_CMP1IRS_SHIFT          3



/****************** Masks for STM_TIM0_t **********************/
/*
   STM_TIM0              "STM Register 0"
*/
/**********************************************************/

#define STM_TIM0_MASK                   0xffffffff
#define STM_TIM0_STM_31_0_MASK          0xffffffff
#define STM_TIM0_STM_31_0_SHIFT         0



/****************** Masks for STM_TIM1_t **********************/
/*
   STM_TIM1              "STM Register 1"
*/
/**********************************************************/

#define STM_TIM1_MASK                   0xffffffff
#define STM_TIM1_STM_35_4_MASK          0xffffffff
#define STM_TIM1_STM_35_4_SHIFT         0



/****************** Masks for STM_TIM2_t **********************/
/*
   STM_TIM2              "STM Register 2"
*/
/**********************************************************/

#define STM_TIM2_MASK                   0xffffffff
#define STM_TIM2_STM_39_8_MASK          0xffffffff
#define STM_TIM2_STM_39_8_SHIFT         0



/****************** Masks for STM_TIM3_t **********************/
/*
   STM_TIM3              "STM Register 3"
*/
/**********************************************************/

#define STM_TIM3_MASK                   0xffffffff
#define STM_TIM3_STM_43_12_MASK         0xffffffff
#define STM_TIM3_STM_43_12_SHIFT        0



/****************** Masks for STM_TIM4_t **********************/
/*
   STM_TIM4              "STM Register 4"
*/
/**********************************************************/

#define STM_TIM4_MASK                   0xffffffff
#define STM_TIM4_STM_47_16_MASK         0xffffffff
#define STM_TIM4_STM_47_16_SHIFT        0



/****************** Masks for STM_TIM5_t **********************/
/*
   STM_TIM5              "STM Register 5"
*/
/**********************************************************/

#define STM_TIM5_MASK                   0xffffffff
#define STM_TIM5_STM_51_20_MASK         0xffffffff
#define STM_TIM5_STM_51_20_SHIFT        0



/****************** Masks for STM_TIM6_t **********************/
/*
   STM_TIM6              "STM Register 6"
*/
/**********************************************************/

#define STM_TIM6_MASK                   0x00ffffff
#define STM_TIM6_STM_55_32_MASK         0x00ffffff
#define STM_TIM6_STM_55_32_SHIFT        0




#endif /* _HAVE_TRICORE_STM_MASKS_H_ */

