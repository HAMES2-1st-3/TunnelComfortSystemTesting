/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PMU_MASKS_H_
#define _HAVE_TRICORE_PMU_MASKS_H_


/****************** Masks for PMU_CSCACTL_t **********************/
/*
   PMU_CSCACTL           "CPU SRAM Control Array Control Register"
*/
/**********************************************************/

#define PMU_CSCACTL_MASK                0xffff0003
#define PMU_CSCACTL_CA0EN_MASK          0x00000001
#define PMU_CSCACTL_CA0EN_SHIFT         0
#define PMU_CSCACTL_CA1EN_MASK          0x00000002
#define PMU_CSCACTL_CA1EN_SHIFT         1
#define PMU_CSCACTL_BCCH0_MASK          0x00ff0000
#define PMU_CSCACTL_BCCH0_SHIFT         16
#define PMU_CSCACTL_BCCH1_MASK          0xff000000
#define PMU_CSCACTL_BCCH1_SHIFT         24



/****************** Masks for PMU_CSCADIN_t **********************/
/*
   PMU_CSCADIN           "CPU SRAM Control Array Data In Register"
*/
/**********************************************************/

#define PMU_CSCADIN_MASK                0xffffffff
#define PMU_CSCADIN_DICH0_MASK          0x0000ffff
#define PMU_CSCADIN_DICH0_SHIFT         0
#define PMU_CSCADIN_DICH1_MASK          0xffff0000
#define PMU_CSCADIN_DICH1_SHIFT         16



/****************** Masks for PMU_CSCADOUT_t **********************/
/*
   PMU_CSCADOUT          "CPU SRAM Control Array Data Out Register"
*/
/**********************************************************/

#define PMU_CSCADOUT_MASK               0xffffffff
#define PMU_CSCADOUT_DOCH0_MASK         0x0000ffff
#define PMU_CSCADOUT_DOCH0_SHIFT        0
#define PMU_CSCADOUT_DOCH1_MASK         0xffff0000
#define PMU_CSCADOUT_DOCH1_SHIFT        16



/****************** Masks for PMU_ID_t **********************/
/*
   PMU_ID                "PMU Module Identification Register (LL)"
*/
/**********************************************************/

#define PMU_ID_MASK                     0xffffffff
#define PMU_ID_Mod_Rev_MASK             0x000000ff
#define PMU_ID_Mod_Rev_SHIFT            0
#define PMU_ID_Mod_Type_MASK            0x0000ff00
#define PMU_ID_Mod_Type_SHIFT           8
#define PMU_ID_Mod_Number_MASK          0xffff0000
#define PMU_ID_Mod_Number_SHIFT         16




#endif /* _HAVE_TRICORE_PMU_MASKS_H_ */

