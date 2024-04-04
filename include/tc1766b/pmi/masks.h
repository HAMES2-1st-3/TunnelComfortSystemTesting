/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PMI_MASKS_H_
#define _HAVE_TRICORE_PMI_MASKS_H_


/****************** Masks for PMI_CON0_t **********************/
/*
   PMI_CON0              "PMI Control Register 0"
*/
/**********************************************************/

#define PMI_CON0_MASK                   0x00000003
#define PMI_CON0_CC2SPR_MASK            0x00000001
#define PMI_CON0_CC2SPR_SHIFT           0
#define PMI_CON0_CCBYP_MASK             0x00000002
#define PMI_CON0_CCBYP_SHIFT            1



/****************** Masks for PMI_CON1_t **********************/
/*
   PMI_CON1              "PMI Control Register 1"
*/
/**********************************************************/

#define PMI_CON1_MASK                   0x00000001
#define PMI_CON1_CCINV_MASK             0x00000001
#define PMI_CON1_CCINV_SHIFT            0



/****************** Masks for PMI_CON2_t **********************/
/*
   PMI_CON2              "PMI Control Register 2"
*/
/**********************************************************/

#define PMI_CON2_MASK                   0x00000073
#define PMI_CON2_PCSZ_MASK              0x00000003
#define PMI_CON2_PCSZ_SHIFT             0
#define PMI_CON2_PMEMSZ_MASK            0x00000070
#define PMI_CON2_PMEMSZ_SHIFT           4



/****************** Masks for PMI_ID_t **********************/
/*
   PMI_ID                "PMI Module Identification Register"
*/
/**********************************************************/

#define PMI_ID_MASK                     0xffffffff
#define PMI_ID_MOD_REV_MASK             0x000000ff
#define PMI_ID_MOD_REV_SHIFT            0
#define PMI_ID_MOD_TYPE_MASK            0x0000ff00
#define PMI_ID_MOD_TYPE_SHIFT           8
#define PMI_ID_MOD_NUMBER_MASK          0xffff0000
#define PMI_ID_MOD_NUMBER_SHIFT         16




#endif /* _HAVE_TRICORE_PMI_MASKS_H_ */

