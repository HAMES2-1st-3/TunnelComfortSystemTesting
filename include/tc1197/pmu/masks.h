/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PMU_MASKS_H_
#define _HAVE_TRICORE_PMU_MASKS_H_


/****************** Masks for PMU0_OVRCON_t **********************/
/*
   PMU0_OVRCON           "Overlay RAM Control Register"
*/
/**********************************************************/

#define PMU0_OVRCON_MASK                0x0000f303
#define PMU0_OVRCON_OLDAEN_MASK         0x00000001
#define PMU0_OVRCON_OLDAEN_SHIFT        0
#define PMU0_OVRCON_POLDAEN_MASK        0x00000002
#define PMU0_OVRCON_POLDAEN_SHIFT       1
#define PMU0_OVRCON_PPERCTR_MASK        0x00000100
#define PMU0_OVRCON_PPERCTR_SHIFT       8
#define PMU0_OVRCON_PEREN_MASK          0x00000200
#define PMU0_OVRCON_PEREN_SHIFT         9
#define PMU0_OVRCON_UN_MASK             0x0000f000
#define PMU0_OVRCON_UN_SHIFT            12




#endif /* _HAVE_TRICORE_PMU_MASKS_H_ */

