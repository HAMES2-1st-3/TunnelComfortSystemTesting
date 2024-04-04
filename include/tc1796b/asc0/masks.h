/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_ASC0_MASKS_H_
#define _HAVE_TRICORE_ASC0_MASKS_H_


/****************** Masks for ASC0_CLC_t **********************/
/*
   ASC0_CLC              "ASC0 Clock Control Register"
*/
/**********************************************************/

#define ASC0_CLC_MASK                   0x0000ff3f
#define ASC0_CLC_DISR_MASK              0x00000001
#define ASC0_CLC_DISR_SHIFT             0
#define ASC0_CLC_DISS_MASK              0x00000002
#define ASC0_CLC_DISS_SHIFT             1
#define ASC0_CLC_SPEN_MASK              0x00000004
#define ASC0_CLC_SPEN_SHIFT             2
#define ASC0_CLC_EDIS_MASK              0x00000008
#define ASC0_CLC_EDIS_SHIFT             3
#define ASC0_CLC_SBWE_MASK              0x00000010
#define ASC0_CLC_SBWE_SHIFT             4
#define ASC0_CLC_FSOE_MASK              0x00000020
#define ASC0_CLC_FSOE_SHIFT             5
#define ASC0_CLC_RMC_MASK               0x0000ff00
#define ASC0_CLC_RMC_SHIFT              8




#endif /* _HAVE_TRICORE_ASC0_MASKS_H_ */

