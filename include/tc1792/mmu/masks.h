/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MMU_MASKS_H_
#define _HAVE_TRICORE_MMU_MASKS_H_


/****************** Masks for MMU_CON_t **********************/
/*
   MMU_CON               "MMU Control Register"
*/
/**********************************************************/

#define MMU_CON_MASK                    0x00008fff
#define MMU_CON_V_MASK                  0x00000001
#define MMU_CON_V_SHIFT                 0
#define MMU_CON_SZA_MASK                0x00000006
#define MMU_CON_SZA_SHIFT               1
#define MMU_CON_SZB_MASK                0x00000018
#define MMU_CON_SZB_SHIFT               3
#define MMU_CON_TSZ_MASK                0x00000fe0
#define MMU_CON_TSZ_SHIFT               5
#define MMU_CON_NOMMU_MASK              0x00008000
#define MMU_CON_NOMMU_SHIFT             15




#endif /* _HAVE_TRICORE_MMU_MASKS_H_ */

