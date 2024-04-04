/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DMI_MASKS_H_
#define _HAVE_TRICORE_DMI_MASKS_H_


/****************** Masks for DMI_ATR_t **********************/
/*
   DMI_ATR               "DMI Asynchronous Trap Register"
*/
/**********************************************************/

#define DMI_ATR_MASK                    0x00000fff
#define DMI_ATR_LREATF_MASK             0x00000001
#define DMI_ATR_LREATF_SHIFT            0
#define DMI_ATR_SREATF_MASK             0x00000002
#define DMI_ATR_SREATF_SHIFT            1
#define DMI_ATR_LFEATF_MASK             0x00000004
#define DMI_ATR_LFEATF_SHIFT            2
#define DMI_ATR_SFEATF_MASK             0x00000008
#define DMI_ATR_SFEATF_SHIFT            3
#define DMI_ATR_LCEATF_MASK             0x00000010
#define DMI_ATR_LCEATF_SHIFT            4
#define DMI_ATR_SCEATF_MASK             0x00000020
#define DMI_ATR_SCEATF_SHIFT            5
#define DMI_ATR_CRLEATF_MASK            0x00000040
#define DMI_ATR_CRLEATF_SHIFT           6
#define DMI_ATR_CRSEATF_MASK            0x00000080
#define DMI_ATR_CRSEATF_SHIFT           7
#define DMI_ATR_CWLEATF_MASK            0x00000100
#define DMI_ATR_CWLEATF_SHIFT           8
#define DMI_ATR_CWSEATF_MASK            0x00000200
#define DMI_ATR_CWSEATF_SHIFT           9
#define DMI_ATR_CFEATF_MASK             0x00000400
#define DMI_ATR_CFEATF_SHIFT            10
#define DMI_ATR_CMEATF_MASK             0x00000800
#define DMI_ATR_CMEATF_SHIFT            11



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

#define DMI_ID_MASK                     0xffffffff
#define DMI_ID_MOD_REV_MASK             0x000000ff
#define DMI_ID_MOD_REV_SHIFT            0
#define DMI_ID_MOD_TYPE_MASK            0x0000ff00
#define DMI_ID_MOD_TYPE_SHIFT           8
#define DMI_ID_MOD_NUMBER_MASK          0xffff0000
#define DMI_ID_MOD_NUMBER_SHIFT         16



/****************** Masks for DMI_STR_t **********************/
/*
   DMI_STR               "DMI Synchronous Trap Register"
*/
/**********************************************************/

#define DMI_STR_MASK                    0x00000fff
#define DMI_STR_LRESTF_MASK             0x00000001
#define DMI_STR_LRESTF_SHIFT            0
#define DMI_STR_SRESTF_MASK             0x00000002
#define DMI_STR_SRESTF_SHIFT            1
#define DMI_STR_LFESTF_MASK             0x00000004
#define DMI_STR_LFESTF_SHIFT            2
#define DMI_STR_SFESTF_MASK             0x00000008
#define DMI_STR_SFESTF_SHIFT            3
#define DMI_STR_LCESTF_MASK             0x00000010
#define DMI_STR_LCESTF_SHIFT            4
#define DMI_STR_SCESTF_MASK             0x00000020
#define DMI_STR_SCESTF_SHIFT            5
#define DMI_STR_CRLESTF_MASK            0x00000040
#define DMI_STR_CRLESTF_SHIFT           6
#define DMI_STR_CRSESTF_MASK            0x00000080
#define DMI_STR_CRSESTF_SHIFT           7
#define DMI_STR_CWLESTF_MASK            0x00000100
#define DMI_STR_CWLESTF_SHIFT           8
#define DMI_STR_CWSESTF_MASK            0x00000200
#define DMI_STR_CWSESTF_SHIFT           9
#define DMI_STR_CFESTF_MASK             0x00000400
#define DMI_STR_CFESTF_SHIFT            10
#define DMI_STR_CMESTF_MASK             0x00000800
#define DMI_STR_CMESTF_SHIFT            11




#endif /* _HAVE_TRICORE_DMI_MASKS_H_ */

