/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DMI_MASKS_H_
#define _HAVE_TRICORE_DMI_MASKS_H_


/****************** Masks for DMI_ATR_t **********************/
/*
   DMI_ATR               "DMI Asynchronous Trap Flag Register"
*/
/**********************************************************/

#define DMI_ATR_MASK                    0x0000000a
#define DMI_ATR_SREATF_MASK             0x00000002
#define DMI_ATR_SREATF_SHIFT            1
#define DMI_ATR_SBEATF_MASK             0x00000008
#define DMI_ATR_SBEATF_SHIFT            3



/****************** Masks for DMI_CON_t **********************/
/*
   DMI_CON               "DMI Control Register"
*/
/**********************************************************/

#define DMI_CON_MASK                    0x00000073
#define DMI_CON_DCSZ_MASK               0x00000003
#define DMI_CON_DCSZ_SHIFT              0
#define DMI_CON_DMEMSZ_MASK             0x00000070
#define DMI_CON_DMEMSZ_SHIFT            4



/****************** Masks for DMI_CON1_t **********************/
/*
   DMI_CON1              "DMI Control Register 1"
*/
/**********************************************************/

#define DMI_CON1_MASK                   0x00000001
#define DMI_CON1_DC2SPR_MASK            0x00000001
#define DMI_CON1_DC2SPR_SHIFT           0



/****************** Masks for DMI_ID_t **********************/
/*
   DMI_ID                "DMI Module Identification Register"
*/
/**********************************************************/

#define DMI_ID_MASK                     0x00000000



/****************** Masks for DMI_STR_t **********************/
/*
   DMI_STR               "DMI Synchronous Trap Flag Register"
*/
/**********************************************************/

#define DMI_STR_MASK                    0x00000005
#define DMI_STR_LRESTF_MASK             0x00000001
#define DMI_STR_LRESTF_SHIFT            0
#define DMI_STR_LBESTF_MASK             0x00000004
#define DMI_STR_LBESTF_SHIFT            2




#endif /* _HAVE_TRICORE_DMI_MASKS_H_ */

