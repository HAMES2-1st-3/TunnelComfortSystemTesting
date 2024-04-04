/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_ADC0_SHAREMASKS_H_
#define _HAVE_TRICORE_ADC0_SHAREMASKS_H_


/****************** Masks for ADC0_CHCONm_t **********************/
/*
   ADC0_CHCON0           "ADC Channel Control Register 0"
   ADC0_CHCON1           "ADC Channel Control Register 1"
   ADC0_CHCON10          "ADC Channel Control Register 10"
   ADC0_CHCON11          "ADC Channel Control Register 11"
   ADC0_CHCON12          "ADC Channel Control Register 12"
   ADC0_CHCON13          "ADC Channel Control Register 13"
   ADC0_CHCON14          "ADC Channel Control Register 14"
   ADC0_CHCON15          "ADC Channel Control Register 15"
   ADC0_CHCON2           "ADC Channel Control Register 2"
   ADC0_CHCON3           "ADC Channel Control Register 3"
   ADC0_CHCON4           "ADC Channel Control Register 4"
   ADC0_CHCON5           "ADC Channel Control Register 5"
   ADC0_CHCON6           "ADC Channel Control Register 6"
   ADC0_CHCON7           "ADC Channel Control Register 7"
   ADC0_CHCON8           "ADC Channel Control Register 8"
   ADC0_CHCON9           "ADC Channel Control Register 9"
*/
/**********************************************************/

#define ADC0_CHCONm_MASK                0x37ff7fff
#define ADC0_CHCONm_STC_MASK            0x000000ff
#define ADC0_CHCONm_STC_SHIFT           0
#define ADC0_CHCONm_REF_MASK            0x00000300
#define ADC0_CHCONm_REF_SHIFT           8
#define ADC0_CHCONm_RES_MASK            0x00000c00
#define ADC0_CHCONm_RES_SHIFT           10
#define ADC0_CHCONm_EMUX_MASK           0x00003000
#define ADC0_CHCONm_EMUX_SHIFT          12
#define ADC0_CHCONm_GRPS_MASK           0x00004000
#define ADC0_CHCONm_GRPS_SHIFT          14
#define ADC0_CHCONm_BSELB_MASK          0x00030000
#define ADC0_CHCONm_BSELB_SHIFT         16
#define ADC0_CHCONm_BSELA_MASK          0x000c0000
#define ADC0_CHCONm_BSELA_SHIFT         18
#define ADC0_CHCONm_LCC_MASK            0x00700000
#define ADC0_CHCONm_LCC_SHIFT           20
#define ADC0_CHCONm_ENCH_MASK           0x00800000
#define ADC0_CHCONm_ENCH_SHIFT          23
#define ADC0_CHCONm_INP_MASK            0x07000000
#define ADC0_CHCONm_INP_SHIFT           24
#define ADC0_CHCONm_SYM_MASK            0x30000000
#define ADC0_CHCONm_SYM_SHIFT           28



/****************** Masks for ADC0_CHSTATm_t **********************/
/*
   ADC0_CHSTAT0          "ADC Channel Status Register 0"
   ADC0_CHSTAT1          "ADC Channel Status Register 1"
   ADC0_CHSTAT10         "ADC Channel Status Register 10"
   ADC0_CHSTAT11         "ADC Channel Status Register 11"
   ADC0_CHSTAT12         "ADC Channel Status Register 12"
   ADC0_CHSTAT13         "ADC Channel Status Register 13"
   ADC0_CHSTAT14         "ADC Channel Status Register 14"
   ADC0_CHSTAT15         "ADC Channel Status Register 15"
   ADC0_CHSTAT2          "ADC Channel Status Register 2"
   ADC0_CHSTAT3          "ADC Channel Status Register 3"
   ADC0_CHSTAT4          "ADC Channel Status Register 4"
   ADC0_CHSTAT5          "ADC Channel Status Register 5"
   ADC0_CHSTAT6          "ADC Channel Status Register 6"
   ADC0_CHSTAT7          "ADC Channel Status Register 7"
   ADC0_CHSTAT8          "ADC Channel Status Register 8"
   ADC0_CHSTAT9          "ADC Channel Status Register 9"
*/
/**********************************************************/

#define ADC0_CHSTATm_MASK               0x0f770fff
#define ADC0_CHSTATm_RESULT_MASK        0x00000fff
#define ADC0_CHSTATm_RESULT_SHIFT       0
#define ADC0_CHSTATm_EMUX_MASK          0x00030000
#define ADC0_CHSTATm_EMUX_SHIFT         16
#define ADC0_CHSTATm_GRPS_MASK          0x00040000
#define ADC0_CHSTATm_GRPS_SHIFT         18
#define ADC0_CHSTATm_CRS_MASK           0x00700000
#define ADC0_CHSTATm_CRS_SHIFT          20
#define ADC0_CHSTATm_CHNR_MASK          0x0f000000
#define ADC0_CHSTATm_CHNR_SHIFT         24



/****************** Masks for ADC0_LCCONm_t **********************/
/*
   ADC0_LCCON0           "ADC Limit Check Control Register 0"
   ADC0_LCCON1           "ADC Limit Check Control Register 1"
   ADC0_LCCON2           "ADC Limit Check Control Register 2"
   ADC0_LCCON3           "ADC Limit Check Control Register 3"
*/
/**********************************************************/

#define ADC0_LCCONm_MASK                0x00000fff
#define ADC0_LCCONm_BOUNDARY_MASK       0x00000fff
#define ADC0_LCCONm_BOUNDARY_SHIFT      0



/****************** Masks for ADC0_QUEUETm_t **********************/
/*
   ADC0_QUEUET0          "ADC Queue Test Register 0"
   ADC0_QUEUET1          "ADC Queue Test Register 1"
   ADC0_QUEUET10         "ADC Queue Test Register 10"
   ADC0_QUEUET11         "ADC Queue Test Register 11"
   ADC0_QUEUET12         "ADC Queue Test Register 12"
   ADC0_QUEUET13         "ADC Queue Test Register 13"
   ADC0_QUEUET14         "ADC Queue Test Register 14"
   ADC0_QUEUET15         "ADC Queue Test Register 15"
   ADC0_QUEUET2          "ADC Queue Test Register 2"
   ADC0_QUEUET3          "ADC Queue Test Register 3"
   ADC0_QUEUET4          "ADC Queue Test Register 4"
   ADC0_QUEUET5          "ADC Queue Test Register 5"
   ADC0_QUEUET6          "ADC Queue Test Register 6"
   ADC0_QUEUET7          "ADC Queue Test Register 7"
   ADC0_QUEUET8          "ADC Queue Test Register 8"
   ADC0_QUEUET9          "ADC Queue Test Register 9"
*/
/**********************************************************/

#define ADC0_QUEUETm_MASK               0x000087cf
#define ADC0_QUEUETm_CHNR_MASK          0x0000000f
#define ADC0_QUEUETm_CHNR_SHIFT         0
#define ADC0_QUEUETm_RES_MASK           0x000000c0
#define ADC0_QUEUETm_RES_SHIFT          6
#define ADC0_QUEUETm_EMUX_MASK          0x00000300
#define ADC0_QUEUETm_EMUX_SHIFT         8
#define ADC0_QUEUETm_GRPS_MASK          0x00000400
#define ADC0_QUEUETm_GRPS_SHIFT         10
#define ADC0_QUEUETm_V_MASK             0x00008000
#define ADC0_QUEUETm_V_SHIFT            15



/****************** Masks for ADC0_SRCm_t **********************/
/*
   ADC0_SRC0             "ADC Service Request Control Register 0"
   ADC0_SRC1             "ADC Service Request Control Register 1"
   ADC0_SRC2             "ADC Service Request Control Register 2"
   ADC0_SRC3             "ADC Service Request Control Register 3"
*/
/**********************************************************/

#define ADC0_SRCm_MASK                  0x0000f4ff
#define ADC0_SRCm_SRPN_MASK             0x000000ff
#define ADC0_SRCm_SRPN_SHIFT            0
#define ADC0_SRCm_TOS_MASK              0x00000400
#define ADC0_SRCm_TOS_SHIFT             10
#define ADC0_SRCm_SRE_MASK              0x00001000
#define ADC0_SRCm_SRE_SHIFT             12
#define ADC0_SRCm_SRR_MASK              0x00002000
#define ADC0_SRCm_SRR_SHIFT             13
#define ADC0_SRCm_CLRR_MASK             0x00004000
#define ADC0_SRCm_CLRR_SHIFT            14
#define ADC0_SRCm_SETR_MASK             0x00008000
#define ADC0_SRCm_SETR_SHIFT            15




#endif /* _HAVE_TRICORE_ADC0_SHAREMASKS_H_ */

