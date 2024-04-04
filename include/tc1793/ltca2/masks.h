/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_LTCA2_MASKS_H_
#define _HAVE_TRICORE_LTCA2_MASKS_H_


/****************** Masks for LTCA2_ID_t **********************/
/*
   LTCA2_ID              "LTCA2 Identification Register"
*/
/**********************************************************/

#define LTCA2_ID_MASK                   0xffffffff
#define LTCA2_ID_MOD_REV_MASK           0x000000ff
#define LTCA2_ID_MOD_REV_SHIFT          0
#define LTCA2_ID_MOD_TYPE_MASK          0x0000ff00
#define LTCA2_ID_MOD_TYPE_SHIFT         8
#define LTCA2_ID_MOD_NUM_MASK           0xffff0000
#define LTCA2_ID_MOD_NUM_SHIFT          16



/****************** Masks for LTCA2_LTCCTR63_t **********************/
/*
   LTCA2_LTCCTR63        "Local Timer Cell Control Register 63"
*/
/**********************************************************/

#define LTCA2_LTCCTR63_MASK             0x0000853f
#define LTCA2_LTCCTR63_BRM_MASK         0x00000001
#define LTCA2_LTCCTR63_BRM_SHIFT        0
#define LTCA2_LTCCTR63_OSM_MASK         0x00000002
#define LTCA2_LTCCTR63_OSM_SHIFT        1
#define LTCA2_LTCCTR63_REN_MASK         0x0000000c
#define LTCA2_LTCCTR63_REN_SHIFT        2
#define LTCA2_LTCCTR63_RED_MASK         0x00000010
#define LTCA2_LTCCTR63_RED_SHIFT        4
#define LTCA2_LTCCTR63_FED_MASK         0x00000020
#define LTCA2_LTCCTR63_FED_SHIFT        5
#define LTCA2_LTCCTR63_ILM_MASK         0x00000100
#define LTCA2_LTCCTR63_ILM_SHIFT        8
#define LTCA2_LTCCTR63_CEN_MASK         0x00000400
#define LTCA2_LTCCTR63_CEN_SHIFT        10
#define LTCA2_LTCCTR63_OUT_MASK         0x00008000
#define LTCA2_LTCCTR63_OUT_SHIFT        15



/****************** Masks for LTCA2_LTCXR63_t **********************/
/*
   LTCA2_LTCXR63         "Local Timer Cell X Register 63"
*/
/**********************************************************/

#define LTCA2_LTCXR63_MASK              0xffffffff
#define LTCA2_LTCXR63_X_MASK            0x0000ffff
#define LTCA2_LTCXR63_X_SHIFT           0
#define LTCA2_LTCXR63_XS_MASK           0xffff0000
#define LTCA2_LTCXR63_XS_SHIFT          16



/****************** Masks for LTCA2_MRACTL_t **********************/
/*
   LTCA2_MRACTL          "Multiplexer Register Array Control Register"
*/
/**********************************************************/

#define LTCA2_MRACTL_MASK               0x00003f07
#define LTCA2_MRACTL_MAEN_MASK          0x00000001
#define LTCA2_MRACTL_MAEN_SHIFT         0
#define LTCA2_MRACTL_WCRES_MASK         0x00000002
#define LTCA2_MRACTL_WCRES_SHIFT        1
#define LTCA2_MRACTL_FIFOFULL_MASK      0x00000004
#define LTCA2_MRACTL_FIFOFULL_SHIFT     2
#define LTCA2_MRACTL_FIFOFILLCNT_MASK   0x00003f00
#define LTCA2_MRACTL_FIFOFILLCNT_SHIFT  8



/****************** Masks for LTCA2_MRADIN_t **********************/
/*
   LTCA2_MRADIN          "Multiplexer Register Array Data In Register"
*/
/**********************************************************/

#define LTCA2_MRADIN_MASK               0xffffffff
#define LTCA2_MRADIN_DATAIN_MASK        0xffffffff
#define LTCA2_MRADIN_DATAIN_SHIFT       0



/****************** Masks for LTCA2_MRADOUT_t **********************/
/*
   LTCA2_MRADOUT         "Multiplexer Register Array Data Out Register"
*/
/**********************************************************/

#define LTCA2_MRADOUT_MASK              0xffffffff
#define LTCA2_MRADOUT_DATAOUT_MASK      0xffffffff
#define LTCA2_MRADOUT_DATAOUT_SHIFT     0




#endif /* _HAVE_TRICORE_LTCA2_MASKS_H_ */

