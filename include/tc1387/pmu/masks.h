/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PMU_MASKS_H_
#define _HAVE_TRICORE_PMU_MASKS_H_


/****************** Masks for PMU0_OVRCON_t **********************/
/*
   PMU0_OVRCON           "Overlay RAM Control Register"
*/
/**********************************************************/

#define PMU0_OVRCON_MASK                0x00ffa303
#define PMU0_OVRCON_OLDAEN_MASK         0x00000001
#define PMU0_OVRCON_OLDAEN_SHIFT        0
#define PMU0_OVRCON_POLDAEN_MASK        0x00000002
#define PMU0_OVRCON_POLDAEN_SHIFT       1
#define PMU0_OVRCON_PECCCTR_MASK        0x00000100
#define PMU0_OVRCON_PECCCTR_SHIFT       8
#define PMU0_OVRCON_ECCGENDIS_MASK      0x00000200
#define PMU0_OVRCON_ECCGENDIS_SHIFT     9
#define PMU0_OVRCON_DBERINTDIS_MASK     0x00002000
#define PMU0_OVRCON_DBERINTDIS_SHIFT    13
#define PMU0_OVRCON_ECCDBER_MASK        0x00008000
#define PMU0_OVRCON_ECCDBER_SHIFT       15
#define PMU0_OVRCON_ECCW_MASK           0x00ff0000
#define PMU0_OVRCON_ECCW_SHIFT          16




#endif /* _HAVE_TRICORE_PMU_MASKS_H_ */

