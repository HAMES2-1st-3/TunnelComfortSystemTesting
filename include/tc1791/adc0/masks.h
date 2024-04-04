/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_ADC0_MASKS_H_
#define _HAVE_TRICORE_ADC0_MASKS_H_


/****************** Masks for ADC0_CLC_t **********************/
/*
   ADC0_CLC              "ADC Clock Control Register"
*/
/**********************************************************/

#define ADC0_CLC_MASK                   0x0000003f
#define ADC0_CLC_DISR_MASK              0x00000001
#define ADC0_CLC_DISR_SHIFT             0
#define ADC0_CLC_DISS_MASK              0x00000002
#define ADC0_CLC_DISS_SHIFT             1
#define ADC0_CLC_SPEN_MASK              0x00000004
#define ADC0_CLC_SPEN_SHIFT             2
#define ADC0_CLC_EDIS_MASK              0x00000008
#define ADC0_CLC_EDIS_SHIFT             3
#define ADC0_CLC_SBWE_MASK              0x00000010
#define ADC0_CLC_SBWE_SHIFT             4
#define ADC0_CLC_FSOE_MASK              0x00000020
#define ADC0_CLC_FSOE_SHIFT             5



/****************** Masks for ADC0_KSCFG_t **********************/
/*
   ADC0_KSCFG            "Kernel State Configuration Register"
*/
/**********************************************************/

#define ADC0_KSCFG_MASK                 0x00000bbc
#define ADC0_KSCFG_ACK_MASK             0x00000004
#define ADC0_KSCFG_ACK_SHIFT            2
#define ADC0_KSCFG_SUSREQ_MASK          0x00000008
#define ADC0_KSCFG_SUSREQ_SHIFT         3
#define ADC0_KSCFG_NOMCFG_MASK          0x00000030
#define ADC0_KSCFG_NOMCFG_SHIFT         4
#define ADC0_KSCFG_BPNOM_MASK           0x00000080
#define ADC0_KSCFG_BPNOM_SHIFT          7
#define ADC0_KSCFG_SUMCFG_MASK          0x00000300
#define ADC0_KSCFG_SUMCFG_SHIFT         8
#define ADC0_KSCFG_BPSUM_MASK           0x00000800
#define ADC0_KSCFG_BPSUM_SHIFT          11



/****************** Masks for ADC0_Q0R0_t **********************/
/*
   ADC0_Q0R0             "Queue 0 Register 0"
*/
/**********************************************************/

#define ADC0_Q0R0_MASK                  0x000001ef
#define ADC0_Q0R0_REQCHNR_MASK          0x0000000f
#define ADC0_Q0R0_REQCHNR_SHIFT         0
#define ADC0_Q0R0_RF_MASK               0x00000020
#define ADC0_Q0R0_RF_SHIFT              5
#define ADC0_Q0R0_ENSI_MASK             0x00000040
#define ADC0_Q0R0_ENSI_SHIFT            6
#define ADC0_Q0R0_EXTR_MASK             0x00000080
#define ADC0_Q0R0_EXTR_SHIFT            7
#define ADC0_Q0R0_V_MASK                0x00000100
#define ADC0_Q0R0_V_SHIFT               8



/****************** Masks for ADC0_Q0R2_t **********************/
/*
   ADC0_Q0R2             "Queue 2 Register 0"
*/
/**********************************************************/

#define ADC0_Q0R2_MASK                  0x000001ef
#define ADC0_Q0R2_REQCHNR_MASK          0x0000000f
#define ADC0_Q0R2_REQCHNR_SHIFT         0
#define ADC0_Q0R2_RF_MASK               0x00000020
#define ADC0_Q0R2_RF_SHIFT              5
#define ADC0_Q0R2_ENSI_MASK             0x00000040
#define ADC0_Q0R2_ENSI_SHIFT            6
#define ADC0_Q0R2_EXTR_MASK             0x00000080
#define ADC0_Q0R2_EXTR_SHIFT            7
#define ADC0_Q0R2_V_MASK                0x00000100
#define ADC0_Q0R2_V_SHIFT               8



/****************** Masks for ADC0_Q0R4_t **********************/
/*
   ADC0_Q0R4             "Queue 4 Register 0"
*/
/**********************************************************/

#define ADC0_Q0R4_MASK                  0x000001ef
#define ADC0_Q0R4_REQCHNR_MASK          0x0000000f
#define ADC0_Q0R4_REQCHNR_SHIFT         0
#define ADC0_Q0R4_RF_MASK               0x00000020
#define ADC0_Q0R4_RF_SHIFT              5
#define ADC0_Q0R4_ENSI_MASK             0x00000040
#define ADC0_Q0R4_ENSI_SHIFT            6
#define ADC0_Q0R4_EXTR_MASK             0x00000080
#define ADC0_Q0R4_EXTR_SHIFT            7
#define ADC0_Q0R4_V_MASK                0x00000100
#define ADC0_Q0R4_V_SHIFT               8




#endif /* _HAVE_TRICORE_ADC0_MASKS_H_ */

