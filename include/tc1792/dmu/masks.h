/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DMU_MASKS_H_
#define _HAVE_TRICORE_DMU_MASKS_H_


/****************** Masks for DMU_ID_t **********************/
/*
   DMU_ID                "DMU Module Identification Register"
*/
/**********************************************************/

#define DMU_ID_MASK                     0x00000000



/****************** Masks for DMU_SBRCTR_t **********************/
/*
   DMU_SBRCTR            "DMU Stand-by SRAM Control Register"
*/
/**********************************************************/

#define DMU_SBRCTR_MASK                 0x000000ff
#define DMU_SBRCTR_STBLOCK_MASK         0x00000001
#define DMU_SBRCTR_STBLOCK_SHIFT        0
#define DMU_SBRCTR_STBULK_MASK          0x0000000e
#define DMU_SBRCTR_STBULK_SHIFT         1
#define DMU_SBRCTR_STBSLK_MASK          0x000000f0
#define DMU_SBRCTR_STBSLK_SHIFT         4




#endif /* _HAVE_TRICORE_DMU_MASKS_H_ */

