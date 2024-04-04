/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
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



/****************** Masks for ADC0_FDR_t **********************/
/*
   ADC0_FDR              "ADC Fractional Divider Register"
*/
/**********************************************************/

#define ADC0_FDR_MASK                   0xf3fffbff
#define ADC0_FDR_STEP_MASK              0x000003ff
#define ADC0_FDR_STEP_SHIFT             0
#define ADC0_FDR_SM_MASK                0x00000800
#define ADC0_FDR_SM_SHIFT               11
#define ADC0_FDR_SC_MASK                0x00003000
#define ADC0_FDR_SC_SHIFT               12
#define ADC0_FDR_DM_MASK                0x0000c000
#define ADC0_FDR_DM_SHIFT               14
#define ADC0_FDR_RESULT_MASK            0x03ff0000
#define ADC0_FDR_RESULT_SHIFT           16
#define ADC0_FDR_SUSACK_MASK            0x10000000
#define ADC0_FDR_SUSACK_SHIFT           28
#define ADC0_FDR_SUSREQ_MASK            0x20000000
#define ADC0_FDR_SUSREQ_SHIFT           29
#define ADC0_FDR_ENHW_MASK              0x40000000
#define ADC0_FDR_ENHW_SHIFT             30
#define ADC0_FDR_DISCLK_MASK            0x80000000
#define ADC0_FDR_DISCLK_SHIFT           31



/****************** Masks for ADC0_ID_t **********************/
/*
   ADC0_ID               "ADC Module Identification Register"
*/
/**********************************************************/

#define ADC0_ID_MASK                    0x00000000




#endif /* _HAVE_TRICORE_ADC0_MASKS_H_ */

