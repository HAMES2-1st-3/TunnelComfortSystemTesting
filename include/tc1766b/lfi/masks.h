/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_LFI_MASKS_H_
#define _HAVE_TRICORE_LFI_MASKS_H_


/****************** Masks for LFI_CON_t **********************/
/*
   LFI_CON               "LFI Configuration Register"
*/
/**********************************************************/

#define LFI_CON_MASK                    0x00000f77
#define LFI_CON_SPT_MASK                0x00000001
#define LFI_CON_SPT_SHIFT               0
#define LFI_CON_EBL_MASK                0x00000002
#define LFI_CON_EBL_SHIFT               1
#define LFI_CON_EBF_MASK                0x00000004
#define LFI_CON_EBF_SHIFT               2
#define LFI_CON_LTAG_MASK               0x00000070
#define LFI_CON_LTAG_SHIFT              4
#define LFI_CON_FTAG_MASK               0x00000f00
#define LFI_CON_FTAG_SHIFT              8



/****************** Masks for LFI_ID_t **********************/
/*
   LFI_ID                "LFI Module Identification Register"
*/
/**********************************************************/

#define LFI_ID_MASK                     0xffffffff
#define LFI_ID_REV_MASK                 0x000000ff
#define LFI_ID_REV_SHIFT                0
#define LFI_ID_MOD_32B_MASK             0x0000ff00
#define LFI_ID_MOD_32B_SHIFT            8
#define LFI_ID_MOD_MASK                 0xffff0000
#define LFI_ID_MOD_SHIFT                16




#endif /* _HAVE_TRICORE_LFI_MASKS_H_ */

