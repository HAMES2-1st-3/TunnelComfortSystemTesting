/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_STM_SHAREMASKS_H_
#define _HAVE_TRICORE_STM_SHAREMASKS_H_


/****************** Masks for STM_CMPm_t **********************/
/*
   STM_CMP0              "STM Compare Register 1"
   STM_CMP1              "STM Compare Register 1"
*/
/**********************************************************/

#define STM_CMPm_MASK                   0xffffffff
#define STM_CMPm_CMPVAL_MASK            0xffffffff
#define STM_CMPm_CMPVAL_SHIFT           0



/****************** Masks for STM_SRCm_t **********************/
/*
   STM_SRC0              "STM Service Request Control Register 0"
   STM_SRC1              "STM Service Request Control Register 1"
*/
/**********************************************************/

#define STM_SRCm_MASK                   0x0000f4ff
#define STM_SRCm_SRPN_MASK              0x000000ff
#define STM_SRCm_SRPN_SHIFT             0
#define STM_SRCm_TOS_MASK               0x00000400
#define STM_SRCm_TOS_SHIFT              10
#define STM_SRCm_SRE_MASK               0x00001000
#define STM_SRCm_SRE_SHIFT              12
#define STM_SRCm_SRR_MASK               0x00002000
#define STM_SRCm_SRR_SHIFT              13
#define STM_SRCm_CLRR_MASK              0x00004000
#define STM_SRCm_CLRR_SHIFT             14
#define STM_SRCm_SETR_MASK              0x00008000
#define STM_SRCm_SETR_SHIFT             15




#endif /* _HAVE_TRICORE_STM_SHAREMASKS_H_ */

