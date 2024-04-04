/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DMU_MASKS_H_
#define _HAVE_TRICORE_DMU_MASKS_H_


/****************** Masks for DMU_CSCACTL_t **********************/
/*
   DMU_CSCACTL           "CPU SRAM Configuration Bit Chain Control Register"
*/
/**********************************************************/

#define DMU_CSCACTL_MASK                0x000f0007
#define DMU_CSCACTL_CA0EN_MASK          0x00000001
#define DMU_CSCACTL_CA0EN_SHIFT         0
#define DMU_CSCACTL_CA1EN_MASK          0x00000002
#define DMU_CSCACTL_CA1EN_SHIFT         1
#define DMU_CSCACTL_CA2EN_MASK          0x00000004
#define DMU_CSCACTL_CA2EN_SHIFT         2
#define DMU_CSCACTL_BCCH_MASK           0x000f0000
#define DMU_CSCACTL_BCCH_SHIFT          16



/****************** Masks for DMU_CSCADIN_t **********************/
/*
   DMU_CSCADIN           "CPU SRAM Configuration Bit Chain Data In Register"
*/
/**********************************************************/

#define DMU_CSCADIN_MASK                0x0000ffff
#define DMU_CSCADIN_DICH_MASK           0x0000ffff
#define DMU_CSCADIN_DICH_SHIFT          0



/****************** Masks for DMU_CSCADOUT_t **********************/
/*
   DMU_CSCADOUT          "CPU SRAM Configuration Bit Chain Data Out Register"
*/
/**********************************************************/

#define DMU_CSCADOUT_MASK               0x0000ffff
#define DMU_CSCADOUT_DOCH_MASK          0x0000ffff
#define DMU_CSCADOUT_DOCH_SHIFT         0



/****************** Masks for DMU_ID_t **********************/
/*
   DMU_ID                "DMU Module Identification Register"
*/
/**********************************************************/

#define DMU_ID_MASK                     0xffffffff
#define DMU_ID_MOD_REV_MASK             0x000000ff
#define DMU_ID_MOD_REV_SHIFT            0
#define DMU_ID_MOD_TYPE_MASK            0x0000ff00
#define DMU_ID_MOD_TYPE_SHIFT           8
#define DMU_ID_MOD_NUMBER_MASK          0xffff0000
#define DMU_ID_MOD_NUMBER_SHIFT         16



/****************** Masks for DMU_SETA_t **********************/
/*
   DMU_SETA              "Soft-Error Trapped Address"
*/
/**********************************************************/

#define DMU_SETA_MASK                   0xffffffff
#define DMU_SETA_SETADDR_MASK           0xffffffff
#define DMU_SETA_SETADDR_SHIFT          0




#endif /* _HAVE_TRICORE_DMU_MASKS_H_ */

