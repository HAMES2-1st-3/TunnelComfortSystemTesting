/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_ERAY_SHAREMASKS_H_
#define _HAVE_TRICORE_ERAY_SHAREMASKS_H_


/****************** Masks for ERAY_ESIDm_t **********************/
/*
   ERAY_ESID01           "Even Sync ID Symbol Window 01"
   ERAY_ESID02           "Even Sync ID Symbol Window 02"
   ERAY_ESID03           "Even Sync ID Symbol Window 03"
   ERAY_ESID04           "Even Sync ID Symbol Window 04"
   ERAY_ESID05           "Even Sync ID Symbol Window 05"
   ERAY_ESID06           "Even Sync ID Symbol Window 06"
   ERAY_ESID07           "Even Sync ID Symbol Window 07"
   ERAY_ESID08           "Even Sync ID Symbol Window 08"
   ERAY_ESID09           "Even Sync ID Symbol Window 09"
   ERAY_ESID10           "Even Sync ID Symbol Window 10"
   ERAY_ESID11           "Even Sync ID Symbol Window 11"
   ERAY_ESID12           "Even Sync ID Symbol Window 12"
   ERAY_ESID13           "Even Sync ID Symbol Window 13"
   ERAY_ESID14           "Even Sync ID Symbol Window 14"
   ERAY_ESID15           "Even Sync ID Symbol Window 15"
*/
/**********************************************************/

#define ERAY_ESIDm_MASK                 0x0000c3ff
#define ERAY_ESIDm_EID_MASK             0x000003ff
#define ERAY_ESIDm_EID_SHIFT            0
#define ERAY_ESIDm_RXEA_MASK            0x00004000
#define ERAY_ESIDm_RXEA_SHIFT           14
#define ERAY_ESIDm_RXEB_MASK            0x00008000
#define ERAY_ESIDm_RXEB_SHIFT           15



/****************** Masks for ERAY_INTmSRC_t **********************/
/*
   ERAY_INT0SRC          "Interrupt 0 Service Request Control Register"
   ERAY_INT1SRC          "Interrupt 1 Service Request Control Register"
*/
/**********************************************************/

#define ERAY_INTmSRC_MASK               0x0000f4ff
#define ERAY_INTmSRC_SRPN_MASK          0x000000ff
#define ERAY_INTmSRC_SRPN_SHIFT         0
#define ERAY_INTmSRC_TOS_MASK           0x00000400
#define ERAY_INTmSRC_TOS_SHIFT          10
#define ERAY_INTmSRC_SRE_MASK           0x00001000
#define ERAY_INTmSRC_SRE_SHIFT          12
#define ERAY_INTmSRC_SRR_MASK           0x00002000
#define ERAY_INTmSRC_SRR_SHIFT          13
#define ERAY_INTmSRC_CLRR_MASK          0x00004000
#define ERAY_INTmSRC_CLRR_SHIFT         14
#define ERAY_INTmSRC_SETR_MASK          0x00008000
#define ERAY_INTmSRC_SETR_SHIFT         15



/****************** Masks for ERAY_MBSCm_t **********************/
/*
   ERAY_MBSC1            "Message Buffer Status Changed 1"
   ERAY_MBSC2            "Message Buffer Status Changed 2"
   ERAY_MBSC3            "Message Buffer Status Changed 3"
   ERAY_MBSC4            "Message Buffer Status Changed 4"
*/
/**********************************************************/

#define ERAY_MBSCm_MASK                 0xffffffff
#define ERAY_MBSCm_MBC0_MASK            0x00000001
#define ERAY_MBSCm_MBC0_SHIFT           0
#define ERAY_MBSCm_MBC1_MASK            0x00000002
#define ERAY_MBSCm_MBC1_SHIFT           1
#define ERAY_MBSCm_MBC2_MASK            0x00000004
#define ERAY_MBSCm_MBC2_SHIFT           2
#define ERAY_MBSCm_MBC3_MASK            0x00000008
#define ERAY_MBSCm_MBC3_SHIFT           3
#define ERAY_MBSCm_MBC4_MASK            0x00000010
#define ERAY_MBSCm_MBC4_SHIFT           4
#define ERAY_MBSCm_MBC5_MASK            0x00000020
#define ERAY_MBSCm_MBC5_SHIFT           5
#define ERAY_MBSCm_MBC6_MASK            0x00000040
#define ERAY_MBSCm_MBC6_SHIFT           6
#define ERAY_MBSCm_MBC7_MASK            0x00000080
#define ERAY_MBSCm_MBC7_SHIFT           7
#define ERAY_MBSCm_MBC8_MASK            0x00000100
#define ERAY_MBSCm_MBC8_SHIFT           8
#define ERAY_MBSCm_MBC9_MASK            0x00000200
#define ERAY_MBSCm_MBC9_SHIFT           9
#define ERAY_MBSCm_MBC10_MASK           0x00000400
#define ERAY_MBSCm_MBC10_SHIFT          10
#define ERAY_MBSCm_MBC11_MASK           0x00000800
#define ERAY_MBSCm_MBC11_SHIFT          11
#define ERAY_MBSCm_MBC12_MASK           0x00001000
#define ERAY_MBSCm_MBC12_SHIFT          12
#define ERAY_MBSCm_MBC13_MASK           0x00002000
#define ERAY_MBSCm_MBC13_SHIFT          13
#define ERAY_MBSCm_MBC14_MASK           0x00004000
#define ERAY_MBSCm_MBC14_SHIFT          14
#define ERAY_MBSCm_MBC15_MASK           0x00008000
#define ERAY_MBSCm_MBC15_SHIFT          15
#define ERAY_MBSCm_MBC16_MASK           0x00010000
#define ERAY_MBSCm_MBC16_SHIFT          16
#define ERAY_MBSCm_MBC17_MASK           0x00020000
#define ERAY_MBSCm_MBC17_SHIFT          17
#define ERAY_MBSCm_MBC18_MASK           0x00040000
#define ERAY_MBSCm_MBC18_SHIFT          18
#define ERAY_MBSCm_MBC19_MASK           0x00080000
#define ERAY_MBSCm_MBC19_SHIFT          19
#define ERAY_MBSCm_MBC20_MASK           0x00100000
#define ERAY_MBSCm_MBC20_SHIFT          20
#define ERAY_MBSCm_MBC21_MASK           0x00200000
#define ERAY_MBSCm_MBC21_SHIFT          21
#define ERAY_MBSCm_MBC22_MASK           0x00400000
#define ERAY_MBSCm_MBC22_SHIFT          22
#define ERAY_MBSCm_MBC23_MASK           0x00800000
#define ERAY_MBSCm_MBC23_SHIFT          23
#define ERAY_MBSCm_MBC24_MASK           0x01000000
#define ERAY_MBSCm_MBC24_SHIFT          24
#define ERAY_MBSCm_MBC25_MASK           0x02000000
#define ERAY_MBSCm_MBC25_SHIFT          25
#define ERAY_MBSCm_MBC26_MASK           0x04000000
#define ERAY_MBSCm_MBC26_SHIFT          26
#define ERAY_MBSCm_MBC27_MASK           0x08000000
#define ERAY_MBSCm_MBC27_SHIFT          27
#define ERAY_MBSCm_MBC28_MASK           0x10000000
#define ERAY_MBSCm_MBC28_SHIFT          28
#define ERAY_MBSCm_MBC29_MASK           0x20000000
#define ERAY_MBSCm_MBC29_SHIFT          29
#define ERAY_MBSCm_MBC30_MASK           0x40000000
#define ERAY_MBSCm_MBC30_SHIFT          30
#define ERAY_MBSCm_MBC31_MASK           0x80000000
#define ERAY_MBSCm_MBC31_SHIFT          31



/****************** Masks for ERAY_MBSCmSRC_t **********************/
/*
   ERAY_MBSC0SRC         "Message Buffer Status Changed 0 Service Request Control Register"
   ERAY_MBSC1SRC         "Message Buffer Status Changed 1 Service Request Control Register"
*/
/**********************************************************/

#define ERAY_MBSCmSRC_MASK              0x0000f4ff
#define ERAY_MBSCmSRC_SRPN_MASK         0x000000ff
#define ERAY_MBSCmSRC_SRPN_SHIFT        0
#define ERAY_MBSCmSRC_TOS_MASK          0x00000400
#define ERAY_MBSCmSRC_TOS_SHIFT         10
#define ERAY_MBSCmSRC_SRE_MASK          0x00001000
#define ERAY_MBSCmSRC_SRE_SHIFT         12
#define ERAY_MBSCmSRC_SRR_MASK          0x00002000
#define ERAY_MBSCmSRC_SRR_SHIFT         13
#define ERAY_MBSCmSRC_CLRR_MASK         0x00004000
#define ERAY_MBSCmSRC_CLRR_SHIFT        14
#define ERAY_MBSCmSRC_SETR_MASK         0x00008000
#define ERAY_MBSCmSRC_SETR_SHIFT        15



/****************** Masks for ERAY_MSICm_t **********************/
/*
   ERAY_MSIC1            "Message Buffer Status Changed Interrupt Control 1"
   ERAY_MSIC2            "Message Buffer Status Changed Interrupt Control 2"
   ERAY_MSIC3            "Message Buffer Status Changed Interrupt Control 3"
   ERAY_MSIC4            "Message Buffer Status Changed Interrupt Control 4"
*/
/**********************************************************/

#define ERAY_MSICm_MASK                 0xffffffff
#define ERAY_MSICm_MSIP0_MASK           0x00000001
#define ERAY_MSICm_MSIP0_SHIFT          0
#define ERAY_MSICm_MSIP1_MASK           0x00000002
#define ERAY_MSICm_MSIP1_SHIFT          1
#define ERAY_MSICm_MSIP2_MASK           0x00000004
#define ERAY_MSICm_MSIP2_SHIFT          2
#define ERAY_MSICm_MSIP3_MASK           0x00000008
#define ERAY_MSICm_MSIP3_SHIFT          3
#define ERAY_MSICm_MSIP4_MASK           0x00000010
#define ERAY_MSICm_MSIP4_SHIFT          4
#define ERAY_MSICm_MSIP5_MASK           0x00000020
#define ERAY_MSICm_MSIP5_SHIFT          5
#define ERAY_MSICm_MSIP6_MASK           0x00000040
#define ERAY_MSICm_MSIP6_SHIFT          6
#define ERAY_MSICm_MSIP7_MASK           0x00000080
#define ERAY_MSICm_MSIP7_SHIFT          7
#define ERAY_MSICm_MSIP8_MASK           0x00000100
#define ERAY_MSICm_MSIP8_SHIFT          8
#define ERAY_MSICm_MSIP9_MASK           0x00000200
#define ERAY_MSICm_MSIP9_SHIFT          9
#define ERAY_MSICm_MSIP10_MASK          0x00000400
#define ERAY_MSICm_MSIP10_SHIFT         10
#define ERAY_MSICm_MSIP11_MASK          0x00000800
#define ERAY_MSICm_MSIP11_SHIFT         11
#define ERAY_MSICm_MSIP12_MASK          0x00001000
#define ERAY_MSICm_MSIP12_SHIFT         12
#define ERAY_MSICm_MSIP13_MASK          0x00002000
#define ERAY_MSICm_MSIP13_SHIFT         13
#define ERAY_MSICm_MSIP14_MASK          0x00004000
#define ERAY_MSICm_MSIP14_SHIFT         14
#define ERAY_MSICm_MSIP15_MASK          0x00008000
#define ERAY_MSICm_MSIP15_SHIFT         15
#define ERAY_MSICm_MSIP16_MASK          0x00010000
#define ERAY_MSICm_MSIP16_SHIFT         16
#define ERAY_MSICm_MSIP17_MASK          0x00020000
#define ERAY_MSICm_MSIP17_SHIFT         17
#define ERAY_MSICm_MSIP18_MASK          0x00040000
#define ERAY_MSICm_MSIP18_SHIFT         18
#define ERAY_MSICm_MSIP19_MASK          0x00080000
#define ERAY_MSICm_MSIP19_SHIFT         19
#define ERAY_MSICm_MSIP20_MASK          0x00100000
#define ERAY_MSICm_MSIP20_SHIFT         20
#define ERAY_MSICm_MSIP21_MASK          0x00200000
#define ERAY_MSICm_MSIP21_SHIFT         21
#define ERAY_MSICm_MSIP22_MASK          0x00400000
#define ERAY_MSICm_MSIP22_SHIFT         22
#define ERAY_MSICm_MSIP23_MASK          0x00800000
#define ERAY_MSICm_MSIP23_SHIFT         23
#define ERAY_MSICm_MSIP24_MASK          0x01000000
#define ERAY_MSICm_MSIP24_SHIFT         24
#define ERAY_MSICm_MSIP25_MASK          0x02000000
#define ERAY_MSICm_MSIP25_SHIFT         25
#define ERAY_MSICm_MSIP26_MASK          0x04000000
#define ERAY_MSICm_MSIP26_SHIFT         26
#define ERAY_MSICm_MSIP27_MASK          0x08000000
#define ERAY_MSICm_MSIP27_SHIFT         27
#define ERAY_MSICm_MSIP28_MASK          0x10000000
#define ERAY_MSICm_MSIP28_SHIFT         28
#define ERAY_MSICm_MSIP29_MASK          0x20000000
#define ERAY_MSICm_MSIP29_SHIFT         29
#define ERAY_MSICm_MSIP30_MASK          0x40000000
#define ERAY_MSICm_MSIP30_SHIFT         30
#define ERAY_MSICm_MSIP31_MASK          0x80000000
#define ERAY_MSICm_MSIP31_SHIFT         31



/****************** Masks for ERAY_NDATm_t **********************/
/*
   ERAY_NDAT1            "New Data Register 1"
   ERAY_NDAT2            "New Data Register 2"
   ERAY_NDAT3            "New Data Register 3"
   ERAY_NDAT4            "New Data Register 4"
*/
/**********************************************************/

#define ERAY_NDATm_MASK                 0xffffffff
#define ERAY_NDATm_ND0_MASK             0x00000001
#define ERAY_NDATm_ND0_SHIFT            0
#define ERAY_NDATm_ND1_MASK             0x00000002
#define ERAY_NDATm_ND1_SHIFT            1
#define ERAY_NDATm_ND2_MASK             0x00000004
#define ERAY_NDATm_ND2_SHIFT            2
#define ERAY_NDATm_ND3_MASK             0x00000008
#define ERAY_NDATm_ND3_SHIFT            3
#define ERAY_NDATm_ND4_MASK             0x00000010
#define ERAY_NDATm_ND4_SHIFT            4
#define ERAY_NDATm_ND5_MASK             0x00000020
#define ERAY_NDATm_ND5_SHIFT            5
#define ERAY_NDATm_ND6_MASK             0x00000040
#define ERAY_NDATm_ND6_SHIFT            6
#define ERAY_NDATm_ND7_MASK             0x00000080
#define ERAY_NDATm_ND7_SHIFT            7
#define ERAY_NDATm_ND8_MASK             0x00000100
#define ERAY_NDATm_ND8_SHIFT            8
#define ERAY_NDATm_ND9_MASK             0x00000200
#define ERAY_NDATm_ND9_SHIFT            9
#define ERAY_NDATm_ND10_MASK            0x00000400
#define ERAY_NDATm_ND10_SHIFT           10
#define ERAY_NDATm_ND11_MASK            0x00000800
#define ERAY_NDATm_ND11_SHIFT           11
#define ERAY_NDATm_ND12_MASK            0x00001000
#define ERAY_NDATm_ND12_SHIFT           12
#define ERAY_NDATm_ND13_MASK            0x00002000
#define ERAY_NDATm_ND13_SHIFT           13
#define ERAY_NDATm_ND14_MASK            0x00004000
#define ERAY_NDATm_ND14_SHIFT           14
#define ERAY_NDATm_ND15_MASK            0x00008000
#define ERAY_NDATm_ND15_SHIFT           15
#define ERAY_NDATm_ND16_MASK            0x00010000
#define ERAY_NDATm_ND16_SHIFT           16
#define ERAY_NDATm_ND17_MASK            0x00020000
#define ERAY_NDATm_ND17_SHIFT           17
#define ERAY_NDATm_ND18_MASK            0x00040000
#define ERAY_NDATm_ND18_SHIFT           18
#define ERAY_NDATm_ND19_MASK            0x00080000
#define ERAY_NDATm_ND19_SHIFT           19
#define ERAY_NDATm_ND20_MASK            0x00100000
#define ERAY_NDATm_ND20_SHIFT           20
#define ERAY_NDATm_ND21_MASK            0x00200000
#define ERAY_NDATm_ND21_SHIFT           21
#define ERAY_NDATm_ND22_MASK            0x00400000
#define ERAY_NDATm_ND22_SHIFT           22
#define ERAY_NDATm_ND23_MASK            0x00800000
#define ERAY_NDATm_ND23_SHIFT           23
#define ERAY_NDATm_ND24_MASK            0x01000000
#define ERAY_NDATm_ND24_SHIFT           24
#define ERAY_NDATm_ND25_MASK            0x02000000
#define ERAY_NDATm_ND25_SHIFT           25
#define ERAY_NDATm_ND26_MASK            0x04000000
#define ERAY_NDATm_ND26_SHIFT           26
#define ERAY_NDATm_ND27_MASK            0x08000000
#define ERAY_NDATm_ND27_SHIFT           27
#define ERAY_NDATm_ND28_MASK            0x10000000
#define ERAY_NDATm_ND28_SHIFT           28
#define ERAY_NDATm_ND29_MASK            0x20000000
#define ERAY_NDATm_ND29_SHIFT           29
#define ERAY_NDATm_ND30_MASK            0x40000000
#define ERAY_NDATm_ND30_SHIFT           30
#define ERAY_NDATm_ND31_MASK            0x80000000
#define ERAY_NDATm_ND31_SHIFT           31



/****************** Masks for ERAY_NDATmSRC_t **********************/
/*
   ERAY_NDAT0SRC         "New Data 0 Service Request Control Register"
   ERAY_NDAT1SRC         "New Data 1 Service Request Control Register"
*/
/**********************************************************/

#define ERAY_NDATmSRC_MASK              0x0000f4ff
#define ERAY_NDATmSRC_SRPN_MASK         0x000000ff
#define ERAY_NDATmSRC_SRPN_SHIFT        0
#define ERAY_NDATmSRC_TOS_MASK          0x00000400
#define ERAY_NDATmSRC_TOS_SHIFT         10
#define ERAY_NDATmSRC_SRE_MASK          0x00001000
#define ERAY_NDATmSRC_SRE_SHIFT         12
#define ERAY_NDATmSRC_SRR_MASK          0x00002000
#define ERAY_NDATmSRC_SRR_SHIFT         13
#define ERAY_NDATmSRC_CLRR_MASK         0x00004000
#define ERAY_NDATmSRC_CLRR_SHIFT        14
#define ERAY_NDATmSRC_SETR_MASK         0x00008000
#define ERAY_NDATmSRC_SETR_SHIFT        15



/****************** Masks for ERAY_NDICm_t **********************/
/*
   ERAY_NDIC1            "New Data Interrupt Control 1"
   ERAY_NDIC2            "New Data Interrupt Control 2"
   ERAY_NDIC3            "New Data Interrupt Control 3"
   ERAY_NDIC4            "New Data Interrupt Control 4"
*/
/**********************************************************/

#define ERAY_NDICm_MASK                 0xffffffff
#define ERAY_NDICm_NDIP0_MASK           0x00000001
#define ERAY_NDICm_NDIP0_SHIFT          0
#define ERAY_NDICm_NDIP1_MASK           0x00000002
#define ERAY_NDICm_NDIP1_SHIFT          1
#define ERAY_NDICm_NDIP2_MASK           0x00000004
#define ERAY_NDICm_NDIP2_SHIFT          2
#define ERAY_NDICm_NDIP3_MASK           0x00000008
#define ERAY_NDICm_NDIP3_SHIFT          3
#define ERAY_NDICm_NDIP4_MASK           0x00000010
#define ERAY_NDICm_NDIP4_SHIFT          4
#define ERAY_NDICm_NDIP5_MASK           0x00000020
#define ERAY_NDICm_NDIP5_SHIFT          5
#define ERAY_NDICm_NDIP6_MASK           0x00000040
#define ERAY_NDICm_NDIP6_SHIFT          6
#define ERAY_NDICm_NDIP7_MASK           0x00000080
#define ERAY_NDICm_NDIP7_SHIFT          7
#define ERAY_NDICm_NDIP8_MASK           0x00000100
#define ERAY_NDICm_NDIP8_SHIFT          8
#define ERAY_NDICm_NDIP9_MASK           0x00000200
#define ERAY_NDICm_NDIP9_SHIFT          9
#define ERAY_NDICm_NDIP10_MASK          0x00000400
#define ERAY_NDICm_NDIP10_SHIFT         10
#define ERAY_NDICm_NDIP11_MASK          0x00000800
#define ERAY_NDICm_NDIP11_SHIFT         11
#define ERAY_NDICm_NDIP12_MASK          0x00001000
#define ERAY_NDICm_NDIP12_SHIFT         12
#define ERAY_NDICm_NDIP13_MASK          0x00002000
#define ERAY_NDICm_NDIP13_SHIFT         13
#define ERAY_NDICm_NDIP14_MASK          0x00004000
#define ERAY_NDICm_NDIP14_SHIFT         14
#define ERAY_NDICm_NDIP15_MASK          0x00008000
#define ERAY_NDICm_NDIP15_SHIFT         15
#define ERAY_NDICm_NDIP16_MASK          0x00010000
#define ERAY_NDICm_NDIP16_SHIFT         16
#define ERAY_NDICm_NDIP17_MASK          0x00020000
#define ERAY_NDICm_NDIP17_SHIFT         17
#define ERAY_NDICm_NDIP18_MASK          0x00040000
#define ERAY_NDICm_NDIP18_SHIFT         18
#define ERAY_NDICm_NDIP19_MASK          0x00080000
#define ERAY_NDICm_NDIP19_SHIFT         19
#define ERAY_NDICm_NDIP20_MASK          0x00100000
#define ERAY_NDICm_NDIP20_SHIFT         20
#define ERAY_NDICm_NDIP21_MASK          0x00200000
#define ERAY_NDICm_NDIP21_SHIFT         21
#define ERAY_NDICm_NDIP22_MASK          0x00400000
#define ERAY_NDICm_NDIP22_SHIFT         22
#define ERAY_NDICm_NDIP23_MASK          0x00800000
#define ERAY_NDICm_NDIP23_SHIFT         23
#define ERAY_NDICm_NDIP24_MASK          0x01000000
#define ERAY_NDICm_NDIP24_SHIFT         24
#define ERAY_NDICm_NDIP25_MASK          0x02000000
#define ERAY_NDICm_NDIP25_SHIFT         25
#define ERAY_NDICm_NDIP26_MASK          0x04000000
#define ERAY_NDICm_NDIP26_SHIFT         26
#define ERAY_NDICm_NDIP27_MASK          0x08000000
#define ERAY_NDICm_NDIP27_SHIFT         27
#define ERAY_NDICm_NDIP28_MASK          0x10000000
#define ERAY_NDICm_NDIP28_SHIFT         28
#define ERAY_NDICm_NDIP29_MASK          0x20000000
#define ERAY_NDICm_NDIP29_SHIFT         29
#define ERAY_NDICm_NDIP30_MASK          0x40000000
#define ERAY_NDICm_NDIP30_SHIFT         30
#define ERAY_NDICm_NDIP31_MASK          0x80000000
#define ERAY_NDICm_NDIP31_SHIFT         31



/****************** Masks for ERAY_NMVm_t **********************/
/*
   ERAY_NMV1             "Network Management Vector 1"
   ERAY_NMV2             "Network Management Vector 2"
   ERAY_NMV3             "Network Management Vector 3"
*/
/**********************************************************/

#define ERAY_NMVm_MASK                  0xffffffff
#define ERAY_NMVm_NM_MASK               0xffffffff
#define ERAY_NMVm_NM_SHIFT              0



/****************** Masks for ERAY_OSIDm_t **********************/
/*
   ERAY_OSID01           "Odd Sync ID Symbol Window 01"
   ERAY_OSID02           "Odd Sync ID Symbol Window 02"
   ERAY_OSID03           "Odd Sync ID Symbol Window 03"
   ERAY_OSID04           "Odd Sync ID Symbol Window 04"
   ERAY_OSID05           "Odd Sync ID Symbol Window 05"
   ERAY_OSID06           "Odd Sync ID Symbol Window 06"
   ERAY_OSID07           "Odd Sync ID Symbol Window 07"
   ERAY_OSID08           "Odd Sync ID Symbol Window 08"
   ERAY_OSID09           "Odd Sync ID Symbol Window 09"
   ERAY_OSID10           "Odd Sync ID Symbol Window 10"
   ERAY_OSID11           "Odd Sync ID Symbol Window 11"
   ERAY_OSID12           "Odd Sync ID Symbol Window 12"
   ERAY_OSID13           "Odd Sync ID Symbol Window 13"
   ERAY_OSID14           "Odd Sync ID Symbol Window 14"
   ERAY_OSID15           "Odd Sync ID Symbol Window 15"
*/
/**********************************************************/

#define ERAY_OSIDm_MASK                 0x0000c3ff
#define ERAY_OSIDm_OID_MASK             0x000003ff
#define ERAY_OSIDm_OID_SHIFT            0
#define ERAY_OSIDm_RXOA_MASK            0x00004000
#define ERAY_OSIDm_RXOA_SHIFT           14
#define ERAY_OSIDm_RXOB_MASK            0x00008000
#define ERAY_OSIDm_RXOB_SHIFT           15



/****************** Masks for ERAY_RDDSm_t **********************/
/*
   ERAY_RDDS01           "Read Data Section 01"
   ERAY_RDDS02           "Read Data Section 02"
   ERAY_RDDS03           "Read Data Section 03"
   ERAY_RDDS04           "Read Data Section 04"
   ERAY_RDDS05           "Read Data Section 05"
   ERAY_RDDS06           "Read Data Section 06"
   ERAY_RDDS07           "Read Data Section 07"
   ERAY_RDDS08           "Read Data Section 08"
   ERAY_RDDS09           "Read Data Section 09"
   ERAY_RDDS10           "Read Data Section 10"
   ERAY_RDDS11           "Read Data Section 11"
   ERAY_RDDS12           "Read Data Section 12"
   ERAY_RDDS13           "Read Data Section 13"
   ERAY_RDDS14           "Read Data Section 14"
   ERAY_RDDS15           "Read Data Section 15"
   ERAY_RDDS16           "Read Data Section 16"
   ERAY_RDDS17           "Read Data Section 17"
   ERAY_RDDS18           "Read Data Section 18"
   ERAY_RDDS19           "Read Data Section 19"
   ERAY_RDDS20           "Read Data Section 20"
   ERAY_RDDS21           "Read Data Section 21"
   ERAY_RDDS22           "Read Data Section 22"
   ERAY_RDDS23           "Read Data Section 23"
   ERAY_RDDS24           "Read Data Section 24"
   ERAY_RDDS25           "Read Data Section 25"
   ERAY_RDDS26           "Read Data Section 26"
   ERAY_RDDS27           "Read Data Section 27"
   ERAY_RDDS28           "Read Data Section 28"
   ERAY_RDDS29           "Read Data Section 29"
   ERAY_RDDS30           "Read Data Section 30"
   ERAY_RDDS31           "Read Data Section 31"
   ERAY_RDDS32           "Read Data Section 32"
   ERAY_RDDS33           "Read Data Section 33"
   ERAY_RDDS34           "Read Data Section 34"
   ERAY_RDDS35           "Read Data Section 35"
   ERAY_RDDS36           "Read Data Section 36"
   ERAY_RDDS37           "Read Data Section 37"
   ERAY_RDDS38           "Read Data Section 38"
   ERAY_RDDS39           "Read Data Section 39"
   ERAY_RDDS40           "Read Data Section 40"
   ERAY_RDDS41           "Read Data Section 41"
   ERAY_RDDS42           "Read Data Section 42"
   ERAY_RDDS43           "Read Data Section 43"
   ERAY_RDDS44           "Read Data Section 44"
   ERAY_RDDS45           "Read Data Section 45"
   ERAY_RDDS46           "Read Data Section 46"
   ERAY_RDDS47           "Read Data Section 47"
   ERAY_RDDS48           "Read Data Section 48"
   ERAY_RDDS49           "Read Data Section 49"
   ERAY_RDDS50           "Read Data Section 50"
   ERAY_RDDS51           "Read Data Section 51"
   ERAY_RDDS52           "Read Data Section 52"
   ERAY_RDDS53           "Read Data Section 53"
   ERAY_RDDS54           "Read Data Section 54"
   ERAY_RDDS55           "Read Data Section 55"
   ERAY_RDDS56           "Read Data Section 56"
   ERAY_RDDS57           "Read Data Section 57"
   ERAY_RDDS58           "Read Data Section 58"
   ERAY_RDDS59           "Read Data Section 59"
   ERAY_RDDS60           "Read Data Section 60"
   ERAY_RDDS61           "Read Data Section 61"
   ERAY_RDDS62           "Read Data Section 62"
   ERAY_RDDS63           "Read Data Section 63"
   ERAY_RDDS64           "Read Data Section 64"
*/
/**********************************************************/

#define ERAY_RDDSm_MASK                 0xffffffff
#define ERAY_RDDSm_MDRB0_MASK           0x000000ff
#define ERAY_RDDSm_MDRB0_SHIFT          0
#define ERAY_RDDSm_MDRB1_MASK           0x0000ff00
#define ERAY_RDDSm_MDRB1_SHIFT          8
#define ERAY_RDDSm_MDRB2_MASK           0x00ff0000
#define ERAY_RDDSm_MDRB2_SHIFT          16
#define ERAY_RDDSm_MDRB3_MASK           0xff000000
#define ERAY_RDDSm_MDRB3_SHIFT          24



/****************** Masks for ERAY_TINTmSRC_t **********************/
/*
   ERAY_TINT0SRC         "Timer Interrupt 0 Service Request Control Register"
   ERAY_TINT1SRC         "Timer Interrupt 1 Service Request Control Register"
*/
/**********************************************************/

#define ERAY_TINTmSRC_MASK              0x0000f4ff
#define ERAY_TINTmSRC_SRPN_MASK         0x000000ff
#define ERAY_TINTmSRC_SRPN_SHIFT        0
#define ERAY_TINTmSRC_TOS_MASK          0x00000400
#define ERAY_TINTmSRC_TOS_SHIFT         10
#define ERAY_TINTmSRC_SRE_MASK          0x00001000
#define ERAY_TINTmSRC_SRE_SHIFT         12
#define ERAY_TINTmSRC_SRR_MASK          0x00002000
#define ERAY_TINTmSRC_SRR_SHIFT         13
#define ERAY_TINTmSRC_CLRR_MASK         0x00004000
#define ERAY_TINTmSRC_CLRR_SHIFT        14
#define ERAY_TINTmSRC_SETR_MASK         0x00008000
#define ERAY_TINTmSRC_SETR_SHIFT        15



/****************** Masks for ERAY_TXRQm_t **********************/
/*
   ERAY_TXRQ1            "Transmission Request Register 1"
   ERAY_TXRQ2            "Transmission Request Register 2"
   ERAY_TXRQ3            "Transmission Request Register 3"
   ERAY_TXRQ4            "Transmission Request Register 4"
*/
/**********************************************************/

#define ERAY_TXRQm_MASK                 0xffffffff
#define ERAY_TXRQm_TXR0_MASK            0x00000001
#define ERAY_TXRQm_TXR0_SHIFT           0
#define ERAY_TXRQm_TXR1_MASK            0x00000002
#define ERAY_TXRQm_TXR1_SHIFT           1
#define ERAY_TXRQm_TXR2_MASK            0x00000004
#define ERAY_TXRQm_TXR2_SHIFT           2
#define ERAY_TXRQm_TXR3_MASK            0x00000008
#define ERAY_TXRQm_TXR3_SHIFT           3
#define ERAY_TXRQm_TXR4_MASK            0x00000010
#define ERAY_TXRQm_TXR4_SHIFT           4
#define ERAY_TXRQm_TXR5_MASK            0x00000020
#define ERAY_TXRQm_TXR5_SHIFT           5
#define ERAY_TXRQm_TXR6_MASK            0x00000040
#define ERAY_TXRQm_TXR6_SHIFT           6
#define ERAY_TXRQm_TXR7_MASK            0x00000080
#define ERAY_TXRQm_TXR7_SHIFT           7
#define ERAY_TXRQm_TXR8_MASK            0x00000100
#define ERAY_TXRQm_TXR8_SHIFT           8
#define ERAY_TXRQm_TXR9_MASK            0x00000200
#define ERAY_TXRQm_TXR9_SHIFT           9
#define ERAY_TXRQm_TXR10_MASK           0x00000400
#define ERAY_TXRQm_TXR10_SHIFT          10
#define ERAY_TXRQm_TXR11_MASK           0x00000800
#define ERAY_TXRQm_TXR11_SHIFT          11
#define ERAY_TXRQm_TXR12_MASK           0x00001000
#define ERAY_TXRQm_TXR12_SHIFT          12
#define ERAY_TXRQm_TXR13_MASK           0x00002000
#define ERAY_TXRQm_TXR13_SHIFT          13
#define ERAY_TXRQm_TXR14_MASK           0x00004000
#define ERAY_TXRQm_TXR14_SHIFT          14
#define ERAY_TXRQm_TXR15_MASK           0x00008000
#define ERAY_TXRQm_TXR15_SHIFT          15
#define ERAY_TXRQm_TXR16_MASK           0x00010000
#define ERAY_TXRQm_TXR16_SHIFT          16
#define ERAY_TXRQm_TXR17_MASK           0x00020000
#define ERAY_TXRQm_TXR17_SHIFT          17
#define ERAY_TXRQm_TXR18_MASK           0x00040000
#define ERAY_TXRQm_TXR18_SHIFT          18
#define ERAY_TXRQm_TXR19_MASK           0x00080000
#define ERAY_TXRQm_TXR19_SHIFT          19
#define ERAY_TXRQm_TXR20_MASK           0x00100000
#define ERAY_TXRQm_TXR20_SHIFT          20
#define ERAY_TXRQm_TXR21_MASK           0x00200000
#define ERAY_TXRQm_TXR21_SHIFT          21
#define ERAY_TXRQm_TXR22_MASK           0x00400000
#define ERAY_TXRQm_TXR22_SHIFT          22
#define ERAY_TXRQm_TXR23_MASK           0x00800000
#define ERAY_TXRQm_TXR23_SHIFT          23
#define ERAY_TXRQm_TXR24_MASK           0x01000000
#define ERAY_TXRQm_TXR24_SHIFT          24
#define ERAY_TXRQm_TXR25_MASK           0x02000000
#define ERAY_TXRQm_TXR25_SHIFT          25
#define ERAY_TXRQm_TXR26_MASK           0x04000000
#define ERAY_TXRQm_TXR26_SHIFT          26
#define ERAY_TXRQm_TXR27_MASK           0x08000000
#define ERAY_TXRQm_TXR27_SHIFT          27
#define ERAY_TXRQm_TXR28_MASK           0x10000000
#define ERAY_TXRQm_TXR28_SHIFT          28
#define ERAY_TXRQm_TXR29_MASK           0x20000000
#define ERAY_TXRQm_TXR29_SHIFT          29
#define ERAY_TXRQm_TXR30_MASK           0x40000000
#define ERAY_TXRQm_TXR30_SHIFT          30
#define ERAY_TXRQm_TXR31_MASK           0x80000000
#define ERAY_TXRQm_TXR31_SHIFT          31



/****************** Masks for ERAY_WRDSm_t **********************/
/*
   ERAY_WRDS01           "Write Data Section 01"
   ERAY_WRDS02           "Write Data Section 02"
   ERAY_WRDS03           "Write Data Section 03"
   ERAY_WRDS04           "Write Data Section 04"
   ERAY_WRDS05           "Write Data Section 05"
   ERAY_WRDS06           "Write Data Section 06"
   ERAY_WRDS07           "Write Data Section 07"
   ERAY_WRDS08           "Write Data Section 08"
   ERAY_WRDS09           "Write Data Section 09"
   ERAY_WRDS10           "Write Data Section 10"
   ERAY_WRDS11           "Write Data Section 11"
   ERAY_WRDS12           "Write Data Section 12"
   ERAY_WRDS13           "Write Data Section 13"
   ERAY_WRDS14           "Write Data Section 14"
   ERAY_WRDS15           "Write Data Section 15"
   ERAY_WRDS16           "Write Data Section 16"
   ERAY_WRDS17           "Write Data Section 17"
   ERAY_WRDS18           "Write Data Section 18"
   ERAY_WRDS19           "Write Data Section 19"
   ERAY_WRDS20           "Write Data Section 20"
   ERAY_WRDS21           "Write Data Section 21"
   ERAY_WRDS22           "Write Data Section 22"
   ERAY_WRDS23           "Write Data Section 23"
   ERAY_WRDS24           "Write Data Section 24"
   ERAY_WRDS25           "Write Data Section 25"
   ERAY_WRDS26           "Write Data Section 26"
   ERAY_WRDS27           "Write Data Section 27"
   ERAY_WRDS28           "Write Data Section 28"
   ERAY_WRDS29           "Write Data Section 29"
   ERAY_WRDS30           "Write Data Section 30"
   ERAY_WRDS31           "Write Data Section 31"
   ERAY_WRDS32           "Write Data Section 32"
   ERAY_WRDS33           "Write Data Section 33"
   ERAY_WRDS34           "Write Data Section 34"
   ERAY_WRDS35           "Write Data Section 35"
   ERAY_WRDS36           "Write Data Section 36"
   ERAY_WRDS37           "Write Data Section 37"
   ERAY_WRDS38           "Write Data Section 38"
   ERAY_WRDS39           "Write Data Section 39"
   ERAY_WRDS40           "Write Data Section 40"
   ERAY_WRDS41           "Write Data Section 41"
   ERAY_WRDS42           "Write Data Section 42"
   ERAY_WRDS43           "Write Data Section 43"
   ERAY_WRDS44           "Write Data Section 44"
   ERAY_WRDS45           "Write Data Section 45"
   ERAY_WRDS46           "Write Data Section 46"
   ERAY_WRDS47           "Write Data Section 47"
   ERAY_WRDS48           "Write Data Section 48"
   ERAY_WRDS49           "Write Data Section 49"
   ERAY_WRDS50           "Write Data Section 50"
   ERAY_WRDS51           "Write Data Section 51"
   ERAY_WRDS52           "Write Data Section 52"
   ERAY_WRDS53           "Write Data Section 53"
   ERAY_WRDS54           "Write Data Section 54"
   ERAY_WRDS55           "Write Data Section 55"
   ERAY_WRDS56           "Write Data Section 56"
   ERAY_WRDS57           "Write Data Section 57"
   ERAY_WRDS58           "Write Data Section 58"
   ERAY_WRDS59           "Write Data Section 59"
   ERAY_WRDS60           "Write Data Section 60"
   ERAY_WRDS61           "Write Data Section 61"
   ERAY_WRDS62           "Write Data Section 62"
   ERAY_WRDS63           "Write Data Section 63"
   ERAY_WRDS64           "Write Data Section 64"
*/
/**********************************************************/

#define ERAY_WRDSm_MASK                 0xffffffff
#define ERAY_WRDSm_MDWB0_MASK           0x000000ff
#define ERAY_WRDSm_MDWB0_SHIFT          0
#define ERAY_WRDSm_MDWB1_MASK           0x0000ff00
#define ERAY_WRDSm_MDWB1_SHIFT          8
#define ERAY_WRDSm_MDWB2_MASK           0x00ff0000
#define ERAY_WRDSm_MDWB2_SHIFT          16
#define ERAY_WRDSm_MDWB3_MASK           0xff000000
#define ERAY_WRDSm_MDWB3_SHIFT          24




#endif /* _HAVE_TRICORE_ERAY_SHAREMASKS_H_ */

