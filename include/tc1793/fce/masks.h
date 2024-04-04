/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_FCE_MASKS_H_
#define _HAVE_TRICORE_FCE_MASKS_H_


/****************** Masks for FCE_CLC_t **********************/
/*
   FCE_CLC               "Control Clock Register"
*/
/**********************************************************/

#define FCE_CLC_MASK                    0x0000003f
#define FCE_CLC_DISR_MASK               0x00000001
#define FCE_CLC_DISR_SHIFT              0
#define FCE_CLC_DISS_MASK               0x00000002
#define FCE_CLC_DISS_SHIFT              1
#define FCE_CLC_SPEN_MASK               0x00000004
#define FCE_CLC_SPEN_SHIFT              2
#define FCE_CLC_EDIS_MASK               0x00000008
#define FCE_CLC_EDIS_SHIFT              3
#define FCE_CLC_SBWE_MASK               0x00000010
#define FCE_CLC_SBWE_SHIFT              4
#define FCE_CLC_FSOE_MASK               0x00000020
#define FCE_CLC_FSOE_SHIFT              5



/****************** Masks for FCE_ID_t **********************/
/*
   FCE_ID                "Module Identification Register"
*/
/**********************************************************/

#define FCE_ID_MASK                     0xffffffff
#define FCE_ID_MOD_REV_MASK             0x000000ff
#define FCE_ID_MOD_REV_SHIFT            0
#define FCE_ID_MOD_TYPE_MASK            0x0000ff00
#define FCE_ID_MOD_TYPE_SHIFT           8
#define FCE_ID_MOD_NUMBER_MASK          0xffff0000
#define FCE_ID_MOD_NUMBER_SHIFT         16



/****************** Masks for FCE_SRC_t **********************/
/*
   FCE_SRC               "Service Request Control Register"
*/
/**********************************************************/

#define FCE_SRC_MASK                    0x0000f4ff
#define FCE_SRC_SRPN_MASK               0x000000ff
#define FCE_SRC_SRPN_SHIFT              0
#define FCE_SRC_TOS_MASK                0x00000400
#define FCE_SRC_TOS_SHIFT               10
#define FCE_SRC_SRE_MASK                0x00001000
#define FCE_SRC_SRE_SHIFT               12
#define FCE_SRC_SRR_MASK                0x00002000
#define FCE_SRC_SRR_SHIFT               13
#define FCE_SRC_CLRR_MASK               0x00004000
#define FCE_SRC_CLRR_SHIFT              14
#define FCE_SRC_SETR_MASK               0x00008000
#define FCE_SRC_SETR_SHIFT              15




#endif /* _HAVE_TRICORE_FCE_MASKS_H_ */

