/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DMA_SHAREMASKS_H_
#define _HAVE_TRICORE_DMA_SHAREMASKS_H_


/****************** Masks for DMA_ADRCRm_t **********************/
/*
   DMA_ADRCR00           "DMA Channel 00 Address Control Register"
   DMA_ADRCR01           "DMA Channel 01 Address Control Register"
   DMA_ADRCR02           "DMA Channel 02 Address Control Register"
   DMA_ADRCR03           "DMA Channel 03 Address Control Register"
   DMA_ADRCR04           "DMA Channel 04 Address Control Register"
   DMA_ADRCR05           "DMA Channel 05 Address Control Register"
   DMA_ADRCR06           "DMA Channel 06 Address Control Register"
   DMA_ADRCR07           "DMA Channel 07 Address Control Register"
   DMA_ADRCR10           "DMA Channel 10 Address Control Register"
   DMA_ADRCR11           "DMA Channel 11 Address Control Register"
   DMA_ADRCR12           "DMA Channel 12 Address Control Register"
   DMA_ADRCR13           "DMA Channel 13 Address Control Register"
   DMA_ADRCR14           "DMA Channel 14 Address Control Register"
   DMA_ADRCR15           "DMA Channel 15 Address Control Register"
   DMA_ADRCR16           "DMA Channel 16 Address Control Register"
   DMA_ADRCR17           "DMA Channel 17 Address Control Register"
*/
/**********************************************************/

#define DMA_ADRCRm_MASK                 0x0007ffff
#define DMA_ADRCRm_SMF_MASK             0x00000007
#define DMA_ADRCRm_SMF_SHIFT            0
#define DMA_ADRCRm_INCS_MASK            0x00000008
#define DMA_ADRCRm_INCS_SHIFT           3
#define DMA_ADRCRm_DMF_MASK             0x00000070
#define DMA_ADRCRm_DMF_SHIFT            4
#define DMA_ADRCRm_INCD_MASK            0x00000080
#define DMA_ADRCRm_INCD_SHIFT           7
#define DMA_ADRCRm_CBLS_MASK            0x00000f00
#define DMA_ADRCRm_CBLS_SHIFT           8
#define DMA_ADRCRm_CBLD_MASK            0x0000f000
#define DMA_ADRCRm_CBLD_SHIFT           12
#define DMA_ADRCRm_SHCT_MASK            0x00030000
#define DMA_ADRCRm_SHCT_SHIFT           16
#define DMA_ADRCRm_SHWEN_MASK           0x00040000
#define DMA_ADRCRm_SHWEN_SHIFT          18



/****************** Masks for DMA_CHCRm_t **********************/
/*
   DMA_CHCR00            "DMA Channel 00 Control Register"
   DMA_CHCR01            "DMA Channel 01 Control Register"
   DMA_CHCR02            "DMA Channel 02 Control Register"
   DMA_CHCR03            "DMA Channel 03 Control Register"
   DMA_CHCR04            "DMA Channel 04 Control Register"
   DMA_CHCR05            "DMA Channel 05 Control Register"
   DMA_CHCR06            "DMA Channel 06 Control Register"
   DMA_CHCR07            "DMA Channel 07 Control Register"
   DMA_CHCR10            "DMA Channel 10 Control Register"
   DMA_CHCR11            "DMA Channel 11 Control Register"
   DMA_CHCR12            "DMA Channel 12 Control Register"
   DMA_CHCR13            "DMA Channel 13 Control Register"
   DMA_CHCR14            "DMA Channel 14 Control Register"
   DMA_CHCR15            "DMA Channel 15 Control Register"
   DMA_CHCR16            "DMA Channel 16 Control Register"
   DMA_CHCR17            "DMA Channel 17 Control Register"
*/
/**********************************************************/

#define DMA_CHCRm_MASK                  0xd37ff3ff
#define DMA_CHCRm_TREL_MASK             0x000003ff
#define DMA_CHCRm_TREL_SHIFT            0
#define DMA_CHCRm_PRSEL_MASK            0x0000f000
#define DMA_CHCRm_PRSEL_SHIFT           12
#define DMA_CHCRm_BLKM_MASK             0x00070000
#define DMA_CHCRm_BLKM_SHIFT            16
#define DMA_CHCRm_RROAT_MASK            0x00080000
#define DMA_CHCRm_RROAT_SHIFT           19
#define DMA_CHCRm_CHMODE_MASK           0x00100000
#define DMA_CHCRm_CHMODE_SHIFT          20
#define DMA_CHCRm_CHDW_MASK             0x00600000
#define DMA_CHCRm_CHDW_SHIFT            21
#define DMA_CHCRm_PATSEL_MASK           0x03000000
#define DMA_CHCRm_PATSEL_SHIFT          24
#define DMA_CHCRm_CHPRIO_MASK           0x10000000
#define DMA_CHCRm_CHPRIO_SHIFT          28
#define DMA_CHCRm_DMAPRIO_MASK          0xc0000000
#define DMA_CHCRm_DMAPRIO_SHIFT         30



/****************** Masks for DMA_CHICRm_t **********************/
/*
   DMA_CHICR00           "DMA Channel 00 Interrupt Control Register"
   DMA_CHICR01           "DMA Channel 01 Interrupt Control Register"
   DMA_CHICR02           "DMA Channel 02 Interrupt Control Register"
   DMA_CHICR03           "DMA Channel 03 Interrupt Control Register"
   DMA_CHICR04           "DMA Channel 04 Interrupt Control Register"
   DMA_CHICR05           "DMA Channel 05 Interrupt Control Register"
   DMA_CHICR06           "DMA Channel 06 Interrupt Control Register"
   DMA_CHICR07           "DMA Channel 07 Interrupt Control Register"
   DMA_CHICR10           "DMA Channel 10 Interrupt Control Register"
   DMA_CHICR11           "DMA Channel 11 Interrupt Control Register"
   DMA_CHICR12           "DMA Channel 12 Interrupt Control Register"
   DMA_CHICR13           "DMA Channel 13 Interrupt Control Register"
   DMA_CHICR14           "DMA Channel 14 Interrupt Control Register"
   DMA_CHICR15           "DMA Channel 15 Interrupt Control Register"
   DMA_CHICR16           "DMA Channel 16 Interrupt Control Register"
   DMA_CHICR17           "DMA Channel 17 Interrupt Control Register"
*/
/**********************************************************/

#define DMA_CHICRm_MASK                 0x0000ffff
#define DMA_CHICRm_WRPSE_MASK           0x00000001
#define DMA_CHICRm_WRPSE_SHIFT          0
#define DMA_CHICRm_WRPDE_MASK           0x00000002
#define DMA_CHICRm_WRPDE_SHIFT          1
#define DMA_CHICRm_INTCT_MASK           0x0000000c
#define DMA_CHICRm_INTCT_SHIFT          2
#define DMA_CHICRm_WRPP_MASK            0x000000f0
#define DMA_CHICRm_WRPP_SHIFT           4
#define DMA_CHICRm_INTP_MASK            0x00000f00
#define DMA_CHICRm_INTP_SHIFT           8
#define DMA_CHICRm_IRDV_MASK            0x0000f000
#define DMA_CHICRm_IRDV_SHIFT           12



/****************** Masks for DMA_CHSRm_t **********************/
/*
   DMA_CHSR00            "DMA Channel 00 Status Register"
   DMA_CHSR01            "DMA Channel 01 Status Register"
   DMA_CHSR02            "DMA Channel 02 Status Register"
   DMA_CHSR03            "DMA Channel 03 Status Register"
   DMA_CHSR04            "DMA Channel 04 Status Register"
   DMA_CHSR05            "DMA Channel 05 Status Register"
   DMA_CHSR06            "DMA Channel 06 Status Register"
   DMA_CHSR07            "DMA Channel 07 Status Register"
   DMA_CHSR10            "DMA Channel 10 Status Register"
   DMA_CHSR11            "DMA Channel 11 Status Register"
   DMA_CHSR12            "DMA Channel 12 Status Register"
   DMA_CHSR13            "DMA Channel 13 Status Register"
   DMA_CHSR14            "DMA Channel 14 Status Register"
   DMA_CHSR15            "DMA Channel 15 Status Register"
   DMA_CHSR16            "DMA Channel 16 Status Register"
   DMA_CHSR17            "DMA Channel 17 Status Register"
*/
/**********************************************************/

#define DMA_CHSRm_MASK                  0x000083ff
#define DMA_CHSRm_TCOUNT_MASK           0x000003ff
#define DMA_CHSRm_TCOUNT_SHIFT          0
#define DMA_CHSRm_LXO_MASK              0x00008000
#define DMA_CHSRm_LXO_SHIFT             15



/****************** Masks for DMA_DADRm_t **********************/
/*
   DMA_DADR00            "DMA Channel 00 Destination Address Register"
   DMA_DADR01            "DMA Channel 01 Destination Address Register"
   DMA_DADR02            "DMA Channel 02 Destination Address Register"
   DMA_DADR03            "DMA Channel 03 Destination Address Register"
   DMA_DADR04            "DMA Channel 04 Destination Address Register"
   DMA_DADR05            "DMA Channel 05 Destination Address Register"
   DMA_DADR06            "DMA Channel 06 Destination Address Register"
   DMA_DADR07            "DMA Channel 07 Destination Address Register"
   DMA_DADR10            "DMA Channel 10 Destination Address Register"
   DMA_DADR11            "DMA Channel 11 Destination Address Register"
   DMA_DADR12            "DMA Channel 12 Destination Address Register"
   DMA_DADR13            "DMA Channel 13 Destination Address Register"
   DMA_DADR14            "DMA Channel 14 Destination Address Register"
   DMA_DADR15            "DMA Channel 15 Destination Address Register"
   DMA_DADR16            "DMA Channel 16 Destination Address Register"
   DMA_DADR17            "DMA Channel 17 Destination Address Register"
*/
/**********************************************************/

#define DMA_DADRm_MASK                  0xffffffff
#define DMA_DADRm_DADR_MASK             0xffffffff
#define DMA_DADRm_DADR_SHIFT            0



/****************** Masks for DMA_MEmAENR_t **********************/
/*
   DMA_ME0AENR           "DMA Move Engine 0 Access Enable Register"
   DMA_ME1AENR           "DMA Move Engine 1Access Enable Register"
*/
/**********************************************************/

#define DMA_MEmAENR_MASK                0xffffffff
#define DMA_MEmAENR_AEN0_MASK           0x00000001
#define DMA_MEmAENR_AEN0_SHIFT          0
#define DMA_MEmAENR_AEN1_MASK           0x00000002
#define DMA_MEmAENR_AEN1_SHIFT          1
#define DMA_MEmAENR_AEN2_MASK           0x00000004
#define DMA_MEmAENR_AEN2_SHIFT          2
#define DMA_MEmAENR_AEN3_MASK           0x00000008
#define DMA_MEmAENR_AEN3_SHIFT          3
#define DMA_MEmAENR_AEN4_MASK           0x00000010
#define DMA_MEmAENR_AEN4_SHIFT          4
#define DMA_MEmAENR_AEN5_MASK           0x00000020
#define DMA_MEmAENR_AEN5_SHIFT          5
#define DMA_MEmAENR_AEN6_MASK           0x00000040
#define DMA_MEmAENR_AEN6_SHIFT          6
#define DMA_MEmAENR_AEN7_MASK           0x00000080
#define DMA_MEmAENR_AEN7_SHIFT          7
#define DMA_MEmAENR_AEN8_MASK           0x00000100
#define DMA_MEmAENR_AEN8_SHIFT          8
#define DMA_MEmAENR_AEN9_MASK           0x00000200
#define DMA_MEmAENR_AEN9_SHIFT          9
#define DMA_MEmAENR_AEN10_MASK          0x00000400
#define DMA_MEmAENR_AEN10_SHIFT         10
#define DMA_MEmAENR_AEN11_MASK          0x00000800
#define DMA_MEmAENR_AEN11_SHIFT         11
#define DMA_MEmAENR_AEN12_MASK          0x00001000
#define DMA_MEmAENR_AEN12_SHIFT         12
#define DMA_MEmAENR_AEN13_MASK          0x00002000
#define DMA_MEmAENR_AEN13_SHIFT         13
#define DMA_MEmAENR_AEN14_MASK          0x00004000
#define DMA_MEmAENR_AEN14_SHIFT         14
#define DMA_MEmAENR_AEN15_MASK          0x00008000
#define DMA_MEmAENR_AEN15_SHIFT         15
#define DMA_MEmAENR_AEN16_MASK          0x00010000
#define DMA_MEmAENR_AEN16_SHIFT         16
#define DMA_MEmAENR_AEN17_MASK          0x00020000
#define DMA_MEmAENR_AEN17_SHIFT         17
#define DMA_MEmAENR_AEN18_MASK          0x00040000
#define DMA_MEmAENR_AEN18_SHIFT         18
#define DMA_MEmAENR_AEN19_MASK          0x00080000
#define DMA_MEmAENR_AEN19_SHIFT         19
#define DMA_MEmAENR_AEN20_MASK          0x00100000
#define DMA_MEmAENR_AEN20_SHIFT         20
#define DMA_MEmAENR_AEN21_MASK          0x00200000
#define DMA_MEmAENR_AEN21_SHIFT         21
#define DMA_MEmAENR_AEN22_MASK          0x00400000
#define DMA_MEmAENR_AEN22_SHIFT         22
#define DMA_MEmAENR_AEN23_MASK          0x00800000
#define DMA_MEmAENR_AEN23_SHIFT         23
#define DMA_MEmAENR_AEN24_MASK          0x01000000
#define DMA_MEmAENR_AEN24_SHIFT         24
#define DMA_MEmAENR_AEN25_MASK          0x02000000
#define DMA_MEmAENR_AEN25_SHIFT         25
#define DMA_MEmAENR_AEN26_MASK          0x04000000
#define DMA_MEmAENR_AEN26_SHIFT         26
#define DMA_MEmAENR_AEN27_MASK          0x08000000
#define DMA_MEmAENR_AEN27_SHIFT         27
#define DMA_MEmAENR_AEN28_MASK          0x10000000
#define DMA_MEmAENR_AEN28_SHIFT         28
#define DMA_MEmAENR_AEN29_MASK          0x20000000
#define DMA_MEmAENR_AEN29_SHIFT         29
#define DMA_MEmAENR_AEN30_MASK          0x40000000
#define DMA_MEmAENR_AEN30_SHIFT         30
#define DMA_MEmAENR_AEN31_MASK          0x80000000
#define DMA_MEmAENR_AEN31_SHIFT         31



/****************** Masks for DMA_MEmARR_t **********************/
/*
   DMA_ME0ARR            "DMA Move Engine 0 Access Range Register"
   DMA_ME1ARR            "DMA Move Engine 1Access Range Register"
*/
/**********************************************************/

#define DMA_MEmARR_MASK                 0xffffffff
#define DMA_MEmARR_SLICE0_MASK          0x0000001f
#define DMA_MEmARR_SLICE0_SHIFT         0
#define DMA_MEmARR_SIZE0_MASK           0x000000e0
#define DMA_MEmARR_SIZE0_SHIFT          5
#define DMA_MEmARR_SLICE1_MASK          0x00001f00
#define DMA_MEmARR_SLICE1_SHIFT         8
#define DMA_MEmARR_SIZE1_MASK           0x0000e000
#define DMA_MEmARR_SIZE1_SHIFT          13
#define DMA_MEmARR_SLICE2_MASK          0x001f0000
#define DMA_MEmARR_SLICE2_SHIFT         16
#define DMA_MEmARR_SIZE2_MASK           0x00e00000
#define DMA_MEmARR_SIZE2_SHIFT          21
#define DMA_MEmARR_SLICE3_MASK          0x1f000000
#define DMA_MEmARR_SLICE3_SHIFT         24
#define DMA_MEmARR_SIZE3_MASK           0xe0000000
#define DMA_MEmARR_SIZE3_SHIFT          29



/****************** Masks for DMA_MEmPR_t **********************/
/*
   DMA_ME0PR             "DMA Move Engine 0 Pattern Register"
   DMA_ME1PR             "DMA Move Engine 1Pattern Register"
*/
/**********************************************************/

#define DMA_MEmPR_MASK                  0xffffffff
#define DMA_MEmPR_PAT00_MASK            0x000000ff
#define DMA_MEmPR_PAT00_SHIFT           0
#define DMA_MEmPR_PAT01_MASK            0x0000ff00
#define DMA_MEmPR_PAT01_SHIFT           8
#define DMA_MEmPR_PAT02_MASK            0x00ff0000
#define DMA_MEmPR_PAT02_SHIFT           16
#define DMA_MEmPR_PAT03_MASK            0xff000000
#define DMA_MEmPR_PAT03_SHIFT           24



/****************** Masks for DMA_MEmR_t **********************/
/*
   DMA_ME0R              "DMA Move Engine 0 Read Register"
   DMA_ME1R              "DMA Move Engine 1 Read Register"
*/
/**********************************************************/

#define DMA_MEmR_MASK                   0xffffffff
#define DMA_MEmR_RD00_MASK              0x000000ff
#define DMA_MEmR_RD00_SHIFT             0
#define DMA_MEmR_RD01_MASK              0x0000ff00
#define DMA_MEmR_RD01_SHIFT             8
#define DMA_MEmR_RD02_MASK              0x00ff0000
#define DMA_MEmR_RD02_SHIFT             16
#define DMA_MEmR_RD03_MASK              0xff000000
#define DMA_MEmR_RD03_SHIFT             24



/****************** Masks for DMA_MLI0SRCm_t **********************/
/*
   DMA_MLI0SRC0          "DMA MLI0 Service Request Control Register 0"
   DMA_MLI0SRC1          "DMA MLI0 Service Request Control Register 1"
   DMA_MLI0SRC2          "DMA MLI0 Service Request Control Register 2"
   DMA_MLI0SRC3          "DMA MLI0 Service Request Control Register 3"
*/
/**********************************************************/

#define DMA_MLI0SRCm_MASK               0x0000f4ff
#define DMA_MLI0SRCm_SRPN_MASK          0x000000ff
#define DMA_MLI0SRCm_SRPN_SHIFT         0
#define DMA_MLI0SRCm_TOS_MASK           0x00000400
#define DMA_MLI0SRCm_TOS_SHIFT          10
#define DMA_MLI0SRCm_SRE_MASK           0x00001000
#define DMA_MLI0SRCm_SRE_SHIFT          12
#define DMA_MLI0SRCm_SRR_MASK           0x00002000
#define DMA_MLI0SRCm_SRR_SHIFT          13
#define DMA_MLI0SRCm_CLRR_MASK          0x00004000
#define DMA_MLI0SRCm_CLRR_SHIFT         14
#define DMA_MLI0SRCm_SETR_MASK          0x00008000
#define DMA_MLI0SRCm_SETR_SHIFT         15



/****************** Masks for DMA_SADRm_t **********************/
/*
   DMA_SADR00            "DMA Channel 00 Source Address Register"
   DMA_SADR01            "DMA Channel 01 Source Address Register"
   DMA_SADR02            "DMA Channel 02 Source Address Register"
   DMA_SADR03            "DMA Channel 03 Source Address Register"
   DMA_SADR04            "DMA Channel 04 Source Address Register"
   DMA_SADR05            "DMA Channel 05 Source Address Register"
   DMA_SADR06            "DMA Channel 06 Source Address Register"
   DMA_SADR07            "DMA Channel 07 Source Address Register"
   DMA_SADR10            "DMA Channel 10 Source Address Register"
   DMA_SADR11            "DMA Channel 11 Source Address Register"
   DMA_SADR12            "DMA Channel 12 Source Address Register"
   DMA_SADR13            "DMA Channel 13 Source Address Register"
   DMA_SADR14            "DMA Channel 14 Source Address Register"
   DMA_SADR15            "DMA Channel 15 Source Address Register"
   DMA_SADR16            "DMA Channel 16 Source Address Register"
   DMA_SADR17            "DMA Channel 17 Source Address Register"
*/
/**********************************************************/

#define DMA_SADRm_MASK                  0xffffffff
#define DMA_SADRm_SADR_MASK             0xffffffff
#define DMA_SADRm_SADR_SHIFT            0



/****************** Masks for DMA_SHADRm_t **********************/
/*
   DMA_SHADR00           "DMA Channel 00 Shadow Address Register"
   DMA_SHADR01           "DMA Channel 01 Shadow Address Register"
   DMA_SHADR02           "DMA Channel 02 Shadow Address Register"
   DMA_SHADR03           "DMA Channel 03 Shadow Address Register"
   DMA_SHADR04           "DMA Channel 04 Shadow Address Register"
   DMA_SHADR05           "DMA Channel 05 Shadow Address Register"
   DMA_SHADR06           "DMA Channel 06 Shadow Address Register"
   DMA_SHADR07           "DMA Channel 07 Shadow Address Register"
   DMA_SHADR10           "DMA Channel 10 Shadow Address Register"
   DMA_SHADR11           "DMA Channel 11 Shadow Address Register"
   DMA_SHADR12           "DMA Channel 12 Shadow Address Register"
   DMA_SHADR13           "DMA Channel 13 Shadow Address Register"
   DMA_SHADR14           "DMA Channel 14 Shadow Address Register"
   DMA_SHADR15           "DMA Channel 15 Shadow Address Register"
   DMA_SHADR16           "DMA Channel 16 Shadow Address Register"
   DMA_SHADR17           "DMA Channel 17 Shadow Address Register"
*/
/**********************************************************/

#define DMA_SHADRm_MASK                 0xffffffff
#define DMA_SHADRm_SHADR_MASK           0xffffffff
#define DMA_SHADRm_SHADR_SHIFT          0



/****************** Masks for DMA_SRCm_t **********************/
/*
   DMA_SRC0              "DMA Service Request Control Register 0"
   DMA_SRC1              "DMA Service Request Control Register 1"
   DMA_SRC2              "DMA Service Request Control Register 2"
   DMA_SRC3              "DMA Service Request Control Register 3"
   DMA_SRC4              "DMA Service Request Control Register 4"
   DMA_SRC5              "DMA Service Request Control Register 5"
   DMA_SRC6              "DMA Service Request Control Register 6"
   DMA_SRC7              "DMA Service Request Control Register 7"
*/
/**********************************************************/

#define DMA_SRCm_MASK                   0x0000f4ff
#define DMA_SRCm_SRPN_MASK              0x000000ff
#define DMA_SRCm_SRPN_SHIFT             0
#define DMA_SRCm_TOS_MASK               0x00000400
#define DMA_SRCm_TOS_SHIFT              10
#define DMA_SRCm_SRE_MASK               0x00001000
#define DMA_SRCm_SRE_SHIFT              12
#define DMA_SRCm_SRR_MASK               0x00002000
#define DMA_SRCm_SRR_SHIFT              13
#define DMA_SRCm_CLRR_MASK              0x00004000
#define DMA_SRCm_CLRR_SHIFT             14
#define DMA_SRCm_SETR_MASK              0x00008000
#define DMA_SRCm_SETR_SHIFT             15



/****************** Masks for MCHK_IRm_t **********************/
/*
   MCHK_IR0              "Memory Checker Input Register"
   MCHK_IR1              "Memory Checker Input Register"
*/
/**********************************************************/

#define MCHK_IRm_MASK                   0xffffffff
#define MCHK_IRm_MCHKIN_MASK            0xffffffff
#define MCHK_IRm_MCHKIN_SHIFT           0



/****************** Masks for MCHK_RRm_t **********************/
/*
   MCHK_RR0              "Memory Checker Result Register"
   MCHK_RR1              "Memory Checker Result Register"
*/
/**********************************************************/

#define MCHK_RRm_MASK                   0xffffffff
#define MCHK_RRm_MCHKR_MASK             0xffffffff
#define MCHK_RRm_MCHKR_SHIFT            0




#endif /* _HAVE_TRICORE_DMA_SHAREMASKS_H_ */

