/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
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



/****************** Masks for LTCA2_LTCCTR31_t **********************/
/*
   LTCA2_LTCCTR31        "Local Timer Cell Control Register 31"
*/
/**********************************************************/

#define LTCA2_LTCCTR31_MASK             0x0000853f
#define LTCA2_LTCCTR31_BRM_MASK         0x00000001
#define LTCA2_LTCCTR31_BRM_SHIFT        0
#define LTCA2_LTCCTR31_OSM_MASK         0x00000002
#define LTCA2_LTCCTR31_OSM_SHIFT        1
#define LTCA2_LTCCTR31_REN_MASK         0x0000000c
#define LTCA2_LTCCTR31_REN_SHIFT        2
#define LTCA2_LTCCTR31_RED_MASK         0x00000010
#define LTCA2_LTCCTR31_RED_SHIFT        4
#define LTCA2_LTCCTR31_FED_MASK         0x00000020
#define LTCA2_LTCCTR31_FED_SHIFT        5
#define LTCA2_LTCCTR31_ILM_MASK         0x00000100
#define LTCA2_LTCCTR31_ILM_SHIFT        8
#define LTCA2_LTCCTR31_CEN_MASK         0x00000400
#define LTCA2_LTCCTR31_CEN_SHIFT        10
#define LTCA2_LTCCTR31_OUT_MASK         0x00008000
#define LTCA2_LTCCTR31_OUT_SHIFT        15



/****************** Masks for LTCA2_LTCXR31_t **********************/
/*
   LTCA2_LTCXR31         "Local Timer Cell X Register 31"
*/
/**********************************************************/

#define LTCA2_LTCXR31_MASK              0xffffffff
#define LTCA2_LTCXR31_X_MASK            0x0000ffff
#define LTCA2_LTCXR31_X_SHIFT           0
#define LTCA2_LTCXR31_XS_MASK           0xffff0000
#define LTCA2_LTCXR31_XS_SHIFT          16



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



/****************** Masks for LTCA2_SRSC2_t **********************/
/*
   LTCA2_SRSC2           "LTCA2 Service Request State Clear Register 2"
*/
/**********************************************************/

#define LTCA2_SRSC2_MASK                0xffffffff
#define LTCA2_SRSC2_LTC0_MASK           0x00000001
#define LTCA2_SRSC2_LTC0_SHIFT          0
#define LTCA2_SRSC2_LTC1_MASK           0x00000002
#define LTCA2_SRSC2_LTC1_SHIFT          1
#define LTCA2_SRSC2_LTC2_MASK           0x00000004
#define LTCA2_SRSC2_LTC2_SHIFT          2
#define LTCA2_SRSC2_LTC3_MASK           0x00000008
#define LTCA2_SRSC2_LTC3_SHIFT          3
#define LTCA2_SRSC2_LTC4_MASK           0x00000010
#define LTCA2_SRSC2_LTC4_SHIFT          4
#define LTCA2_SRSC2_LTC5_MASK           0x00000020
#define LTCA2_SRSC2_LTC5_SHIFT          5
#define LTCA2_SRSC2_LTC6_MASK           0x00000040
#define LTCA2_SRSC2_LTC6_SHIFT          6
#define LTCA2_SRSC2_LTC7_MASK           0x00000080
#define LTCA2_SRSC2_LTC7_SHIFT          7
#define LTCA2_SRSC2_LTC8_MASK           0x00000100
#define LTCA2_SRSC2_LTC8_SHIFT          8
#define LTCA2_SRSC2_LTC9_MASK           0x00000200
#define LTCA2_SRSC2_LTC9_SHIFT          9
#define LTCA2_SRSC2_LTC10_MASK          0x00000400
#define LTCA2_SRSC2_LTC10_SHIFT         10
#define LTCA2_SRSC2_LTC11_MASK          0x00000800
#define LTCA2_SRSC2_LTC11_SHIFT         11
#define LTCA2_SRSC2_LTC12_MASK          0x00001000
#define LTCA2_SRSC2_LTC12_SHIFT         12
#define LTCA2_SRSC2_LTC13_MASK          0x00002000
#define LTCA2_SRSC2_LTC13_SHIFT         13
#define LTCA2_SRSC2_LTC14_MASK          0x00004000
#define LTCA2_SRSC2_LTC14_SHIFT         14
#define LTCA2_SRSC2_LTC15_MASK          0x00008000
#define LTCA2_SRSC2_LTC15_SHIFT         15
#define LTCA2_SRSC2_LTC16_MASK          0x00010000
#define LTCA2_SRSC2_LTC16_SHIFT         16
#define LTCA2_SRSC2_LTC17_MASK          0x00020000
#define LTCA2_SRSC2_LTC17_SHIFT         17
#define LTCA2_SRSC2_LTC18_MASK          0x00040000
#define LTCA2_SRSC2_LTC18_SHIFT         18
#define LTCA2_SRSC2_LTC19_MASK          0x00080000
#define LTCA2_SRSC2_LTC19_SHIFT         19
#define LTCA2_SRSC2_LTC20_MASK          0x00100000
#define LTCA2_SRSC2_LTC20_SHIFT         20
#define LTCA2_SRSC2_LTC21_MASK          0x00200000
#define LTCA2_SRSC2_LTC21_SHIFT         21
#define LTCA2_SRSC2_LTC22_MASK          0x00400000
#define LTCA2_SRSC2_LTC22_SHIFT         22
#define LTCA2_SRSC2_LTC23_MASK          0x00800000
#define LTCA2_SRSC2_LTC23_SHIFT         23
#define LTCA2_SRSC2_LTC24_MASK          0x01000000
#define LTCA2_SRSC2_LTC24_SHIFT         24
#define LTCA2_SRSC2_LTC25_MASK          0x02000000
#define LTCA2_SRSC2_LTC25_SHIFT         25
#define LTCA2_SRSC2_LTC26_MASK          0x04000000
#define LTCA2_SRSC2_LTC26_SHIFT         26
#define LTCA2_SRSC2_LTC27_MASK          0x08000000
#define LTCA2_SRSC2_LTC27_SHIFT         27
#define LTCA2_SRSC2_LTC28_MASK          0x10000000
#define LTCA2_SRSC2_LTC28_SHIFT         28
#define LTCA2_SRSC2_LTC29_MASK          0x20000000
#define LTCA2_SRSC2_LTC29_SHIFT         29
#define LTCA2_SRSC2_LTC30_MASK          0x40000000
#define LTCA2_SRSC2_LTC30_SHIFT         30
#define LTCA2_SRSC2_LTC31_MASK          0x80000000
#define LTCA2_SRSC2_LTC31_SHIFT         31



/****************** Masks for LTCA2_SRSS2_t **********************/
/*
   LTCA2_SRSS2           "LTCA2 Service Request State Set Register 2"
*/
/**********************************************************/

#define LTCA2_SRSS2_MASK                0xffffffff
#define LTCA2_SRSS2_LTC0_MASK           0x00000001
#define LTCA2_SRSS2_LTC0_SHIFT          0
#define LTCA2_SRSS2_LTC1_MASK           0x00000002
#define LTCA2_SRSS2_LTC1_SHIFT          1
#define LTCA2_SRSS2_LTC2_MASK           0x00000004
#define LTCA2_SRSS2_LTC2_SHIFT          2
#define LTCA2_SRSS2_LTC3_MASK           0x00000008
#define LTCA2_SRSS2_LTC3_SHIFT          3
#define LTCA2_SRSS2_LTC4_MASK           0x00000010
#define LTCA2_SRSS2_LTC4_SHIFT          4
#define LTCA2_SRSS2_LTC5_MASK           0x00000020
#define LTCA2_SRSS2_LTC5_SHIFT          5
#define LTCA2_SRSS2_LTC6_MASK           0x00000040
#define LTCA2_SRSS2_LTC6_SHIFT          6
#define LTCA2_SRSS2_LTC7_MASK           0x00000080
#define LTCA2_SRSS2_LTC7_SHIFT          7
#define LTCA2_SRSS2_LTC8_MASK           0x00000100
#define LTCA2_SRSS2_LTC8_SHIFT          8
#define LTCA2_SRSS2_LTC9_MASK           0x00000200
#define LTCA2_SRSS2_LTC9_SHIFT          9
#define LTCA2_SRSS2_LTC10_MASK          0x00000400
#define LTCA2_SRSS2_LTC10_SHIFT         10
#define LTCA2_SRSS2_LTC11_MASK          0x00000800
#define LTCA2_SRSS2_LTC11_SHIFT         11
#define LTCA2_SRSS2_LTC12_MASK          0x00001000
#define LTCA2_SRSS2_LTC12_SHIFT         12
#define LTCA2_SRSS2_LTC13_MASK          0x00002000
#define LTCA2_SRSS2_LTC13_SHIFT         13
#define LTCA2_SRSS2_LTC14_MASK          0x00004000
#define LTCA2_SRSS2_LTC14_SHIFT         14
#define LTCA2_SRSS2_LTC15_MASK          0x00008000
#define LTCA2_SRSS2_LTC15_SHIFT         15
#define LTCA2_SRSS2_LTC16_MASK          0x00010000
#define LTCA2_SRSS2_LTC16_SHIFT         16
#define LTCA2_SRSS2_LTC17_MASK          0x00020000
#define LTCA2_SRSS2_LTC17_SHIFT         17
#define LTCA2_SRSS2_LTC18_MASK          0x00040000
#define LTCA2_SRSS2_LTC18_SHIFT         18
#define LTCA2_SRSS2_LTC19_MASK          0x00080000
#define LTCA2_SRSS2_LTC19_SHIFT         19
#define LTCA2_SRSS2_LTC20_MASK          0x00100000
#define LTCA2_SRSS2_LTC20_SHIFT         20
#define LTCA2_SRSS2_LTC21_MASK          0x00200000
#define LTCA2_SRSS2_LTC21_SHIFT         21
#define LTCA2_SRSS2_LTC22_MASK          0x00400000
#define LTCA2_SRSS2_LTC22_SHIFT         22
#define LTCA2_SRSS2_LTC23_MASK          0x00800000
#define LTCA2_SRSS2_LTC23_SHIFT         23
#define LTCA2_SRSS2_LTC24_MASK          0x01000000
#define LTCA2_SRSS2_LTC24_SHIFT         24
#define LTCA2_SRSS2_LTC25_MASK          0x02000000
#define LTCA2_SRSS2_LTC25_SHIFT         25
#define LTCA2_SRSS2_LTC26_MASK          0x04000000
#define LTCA2_SRSS2_LTC26_SHIFT         26
#define LTCA2_SRSS2_LTC27_MASK          0x08000000
#define LTCA2_SRSS2_LTC27_SHIFT         27
#define LTCA2_SRSS2_LTC28_MASK          0x10000000
#define LTCA2_SRSS2_LTC28_SHIFT         28
#define LTCA2_SRSS2_LTC29_MASK          0x20000000
#define LTCA2_SRSS2_LTC29_SHIFT         29
#define LTCA2_SRSS2_LTC30_MASK          0x40000000
#define LTCA2_SRSS2_LTC30_SHIFT         30
#define LTCA2_SRSS2_LTC31_MASK          0x80000000
#define LTCA2_SRSS2_LTC31_SHIFT         31




#endif /* _HAVE_TRICORE_LTCA2_MASKS_H_ */

