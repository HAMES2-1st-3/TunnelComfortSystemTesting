/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_LFI_MASKS_H_
#define _HAVE_TRICORE_LFI_MASKS_H_


/****************** Masks for LFI_CON_t **********************/
/*
   LFI_CON               "LFI Configuration Register"
*/
/**********************************************************/

#define LFI_CON_MASK                    0x00000f70
#define LFI_CON_LTAG_MASK               0x00000070
#define LFI_CON_LTAG_SHIFT              4
#define LFI_CON_FTAG_MASK               0x00000f00
#define LFI_CON_FTAG_SHIFT              8



/****************** Masks for LFI_ID_t **********************/
/*
   LFI_ID                "LFI Module Identification Register"
*/
/**********************************************************/

#define LFI_ID_MASK                     0x00000000




#endif /* _HAVE_TRICORE_LFI_MASKS_H_ */

