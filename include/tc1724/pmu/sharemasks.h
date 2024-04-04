/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PMU_SHAREMASKS_H_
#define _HAVE_TRICORE_PMU_SHAREMASKS_H_


/****************** Masks for FLASH0_COMMm_t **********************/
/*
   FLASH0_COMM0          "FSI Communication 0"
   FLASH0_COMM1          "FSI Communication 1"
   FLASH0_COMM2          "FSI Communication 2"
*/
/**********************************************************/

#define FLASH0_COMMm_MASK               0x0000ffff
#define FLASH0_COMMm_STATUS_MASK        0x000000ff
#define FLASH0_COMMm_STATUS_SHIFT       0
#define FLASH0_COMMm_DATA_MASK          0x0000ff00
#define FLASH0_COMMm_DATA_SHIFT         8




#endif /* _HAVE_TRICORE_PMU_SHAREMASKS_H_ */

