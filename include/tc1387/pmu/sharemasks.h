/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PMU_SHAREMASKS_H_
#define _HAVE_TRICORE_PMU_SHAREMASKS_H_


/****************** Masks for FLASHn_FCON_t **********************/
/*
   FLASH0_FCON           "Flash Configuration Register"
   FLASH1_FCON           "Flash Configuration Register"
*/
/**********************************************************/

#define FLASHn_FCON_MASK                0xff37ff1f
#define FLASHn_FCON_WSPFLASH_MASK       0x0000000f
#define FLASHn_FCON_WSPFLASH_SHIFT      0
#define FLASHn_FCON_WSECPF_MASK         0x00000010
#define FLASHn_FCON_WSECPF_SHIFT        4
#define FLASHn_FCON_WSDFLASH_MASK       0x00000f00
#define FLASHn_FCON_WSDFLASH_SHIFT      8
#define FLASHn_FCON_WSECDF_MASK         0x00001000
#define FLASHn_FCON_WSECDF_SHIFT        12
#define FLASHn_FCON_IDLE_MASK           0x00002000
#define FLASHn_FCON_IDLE_SHIFT          13
#define FLASHn_FCON_ESLDIS_MASK         0x00004000
#define FLASHn_FCON_ESLDIS_SHIFT        14
#define FLASHn_FCON_SLEEP_MASK          0x00008000
#define FLASHn_FCON_SLEEP_SHIFT         15
#define FLASHn_FCON_RPA_MASK            0x00010000
#define FLASHn_FCON_RPA_SHIFT           16
#define FLASHn_FCON_DCF_MASK            0x00020000
#define FLASHn_FCON_DCF_SHIFT           17
#define FLASHn_FCON_DDF_MASK            0x00040000
#define FLASHn_FCON_DDF_SHIFT           18
#define FLASHn_FCON_DDFDMA_MASK         0x00100000
#define FLASHn_FCON_DDFDMA_SHIFT        20
#define FLASHn_FCON_DDFPCP_MASK         0x00200000
#define FLASHn_FCON_DDFPCP_SHIFT        21
#define FLASHn_FCON_VOPERM_MASK         0x01000000
#define FLASHn_FCON_VOPERM_SHIFT        24
#define FLASHn_FCON_SQERM_MASK          0x02000000
#define FLASHn_FCON_SQERM_SHIFT         25
#define FLASHn_FCON_PROERM_MASK         0x04000000
#define FLASHn_FCON_PROERM_SHIFT        26
#define FLASHn_FCON_PFSBERM_MASK        0x08000000
#define FLASHn_FCON_PFSBERM_SHIFT       27
#define FLASHn_FCON_DFSBERM_MASK        0x10000000
#define FLASHn_FCON_DFSBERM_SHIFT       28
#define FLASHn_FCON_PFDBERM_MASK        0x20000000
#define FLASHn_FCON_PFDBERM_SHIFT       29
#define FLASHn_FCON_DFDBERM_MASK        0x40000000
#define FLASHn_FCON_DFDBERM_SHIFT       30
#define FLASHn_FCON_EOBM_MASK           0x80000000
#define FLASHn_FCON_EOBM_SHIFT          31



/****************** Masks for FLASHn_FSR_t **********************/
/*
   FLASH0_FSR            "Flash Status Register"
   FLASH1_FSR            "Flash Status Register"
*/
/**********************************************************/

#define FLASHn_FSR_MASK                 0xd6edffff
#define FLASHn_FSR_PBUSY_MASK           0x00000001
#define FLASHn_FSR_PBUSY_SHIFT          0
#define FLASHn_FSR_FABUSY_MASK          0x00000002
#define FLASHn_FSR_FABUSY_SHIFT         1
#define FLASHn_FSR_D0BUSY_MASK          0x00000004
#define FLASHn_FSR_D0BUSY_SHIFT         2
#define FLASHn_FSR_D1BUSY_MASK          0x00000008
#define FLASHn_FSR_D1BUSY_SHIFT         3
#define FLASHn_FSR_PROG_MASK            0x00000010
#define FLASHn_FSR_PROG_SHIFT           4
#define FLASHn_FSR_ERASE_MASK           0x00000020
#define FLASHn_FSR_ERASE_SHIFT          5
#define FLASHn_FSR_PFPAGE_MASK          0x00000040
#define FLASHn_FSR_PFPAGE_SHIFT         6
#define FLASHn_FSR_DFPAGE_MASK          0x00000080
#define FLASHn_FSR_DFPAGE_SHIFT         7
#define FLASHn_FSR_PFOPER_MASK          0x00000100
#define FLASHn_FSR_PFOPER_SHIFT         8
#define FLASHn_FSR_DFOPER_MASK          0x00000200
#define FLASHn_FSR_DFOPER_SHIFT         9
#define FLASHn_FSR_SQER_MASK            0x00000400
#define FLASHn_FSR_SQER_SHIFT           10
#define FLASHn_FSR_PROER_MASK           0x00000800
#define FLASHn_FSR_PROER_SHIFT          11
#define FLASHn_FSR_PFSBER_MASK          0x00001000
#define FLASHn_FSR_PFSBER_SHIFT         12
#define FLASHn_FSR_DFSBER_MASK          0x00002000
#define FLASHn_FSR_DFSBER_SHIFT         13
#define FLASHn_FSR_PFDBER_MASK          0x00004000
#define FLASHn_FSR_PFDBER_SHIFT         14
#define FLASHn_FSR_DFDBER_MASK          0x00008000
#define FLASHn_FSR_DFDBER_SHIFT         15
#define FLASHn_FSR_PROIN_MASK           0x00010000
#define FLASHn_FSR_PROIN_SHIFT          16
#define FLASHn_FSR_RPROIN_MASK          0x00040000
#define FLASHn_FSR_RPROIN_SHIFT         18
#define FLASHn_FSR_RPRODIS_MASK         0x00080000
#define FLASHn_FSR_RPRODIS_SHIFT        19
#define FLASHn_FSR_WPROIN0_MASK         0x00200000
#define FLASHn_FSR_WPROIN0_SHIFT        21
#define FLASHn_FSR_WPROIN1_MASK         0x00400000
#define FLASHn_FSR_WPROIN1_SHIFT        22
#define FLASHn_FSR_WPROIN2_MASK         0x00800000
#define FLASHn_FSR_WPROIN2_SHIFT        23
#define FLASHn_FSR_WPRODIS0_MASK        0x02000000
#define FLASHn_FSR_WPRODIS0_SHIFT       25
#define FLASHn_FSR_WPRODIS1_MASK        0x04000000
#define FLASHn_FSR_WPRODIS1_SHIFT       26
#define FLASHn_FSR_SLM_MASK             0x10000000
#define FLASHn_FSR_SLM_SHIFT            28
#define FLASHn_FSR_X_MASK               0x40000000
#define FLASHn_FSR_X_SHIFT              30
#define FLASHn_FSR_VER_MASK             0x80000000
#define FLASHn_FSR_VER_SHIFT            31



/****************** Masks for FLASHn_ID_t **********************/
/*
   FLASH0_ID             "Flash Module Identification Register"
   FLASH1_ID             "Flash Module Identification Register"
*/
/**********************************************************/

#define FLASHn_ID_MASK                  0xffffffff
#define FLASHn_ID_MOD_REV_MASK          0x000000ff
#define FLASHn_ID_MOD_REV_SHIFT         0
#define FLASHn_ID_MOD_TYPE_MASK         0x0000ff00
#define FLASHn_ID_MOD_TYPE_SHIFT        8
#define FLASHn_ID_MOD_NUMBER_MASK       0xffff0000
#define FLASHn_ID_MOD_NUMBER_SHIFT      16



/****************** Masks for FLASHn_MARD_t **********************/
/*
   FLASH0_MARD           "Margin Control Register DFLASH"
   FLASH1_MARD           "Margin Control Register DFLASH"
*/
/**********************************************************/

#define FLASHn_MARD_MASK                0x0000801f
#define FLASHn_MARD_MARGIN0_MASK        0x00000003
#define FLASHn_MARD_MARGIN0_SHIFT       0
#define FLASHn_MARD_MARGIN1_MASK        0x0000000c
#define FLASHn_MARD_MARGIN1_SHIFT       2
#define FLASHn_MARD_BNKSEL_MASK         0x00000010
#define FLASHn_MARD_BNKSEL_SHIFT        4
#define FLASHn_MARD_TRAPDIS_MASK        0x00008000
#define FLASHn_MARD_TRAPDIS_SHIFT       15



/****************** Masks for FLASHn_MARP_t **********************/
/*
   FLASH0_MARP           "Margin Control Register PFLASH"
   FLASH1_MARP           "Margin Control Register PFLASH"
*/
/**********************************************************/

#define FLASHn_MARP_MASK                0x0000800f
#define FLASHn_MARP_MARGIN0_MASK        0x00000003
#define FLASHn_MARP_MARGIN0_SHIFT       0
#define FLASHn_MARP_MARGIN1_MASK        0x0000000c
#define FLASHn_MARP_MARGIN1_SHIFT       2
#define FLASHn_MARP_TRAPDIS_MASK        0x00008000
#define FLASHn_MARP_TRAPDIS_SHIFT       15



/****************** Masks for FLASHn_PROCON0_t **********************/
/*
   FLASH0_PROCON0        "Flash Protection Configuration Register User 0"
   FLASH1_PROCON0        "Flash Protection Configuration Register User 0"
*/
/**********************************************************/

#define FLASHn_PROCON0_MASK             0x0000cfff
#define FLASHn_PROCON0_S0L_MASK         0x00000001
#define FLASHn_PROCON0_S0L_SHIFT        0
#define FLASHn_PROCON0_S1L_MASK         0x00000002
#define FLASHn_PROCON0_S1L_SHIFT        1
#define FLASHn_PROCON0_S2L_MASK         0x00000004
#define FLASHn_PROCON0_S2L_SHIFT        2
#define FLASHn_PROCON0_S3L_MASK         0x00000008
#define FLASHn_PROCON0_S3L_SHIFT        3
#define FLASHn_PROCON0_S4L_MASK         0x00000010
#define FLASHn_PROCON0_S4L_SHIFT        4
#define FLASHn_PROCON0_S5L_MASK         0x00000020
#define FLASHn_PROCON0_S5L_SHIFT        5
#define FLASHn_PROCON0_S6L_MASK         0x00000040
#define FLASHn_PROCON0_S6L_SHIFT        6
#define FLASHn_PROCON0_S7L_MASK         0x00000080
#define FLASHn_PROCON0_S7L_SHIFT        7
#define FLASHn_PROCON0_S8L_MASK         0x00000100
#define FLASHn_PROCON0_S8L_SHIFT        8
#define FLASHn_PROCON0_S9L_MASK         0x00000200
#define FLASHn_PROCON0_S9L_SHIFT        9
#define FLASHn_PROCON0_S10_S11L_MASK    0x00000400
#define FLASHn_PROCON0_S10_S11L_SHIFT   10
#define FLASHn_PROCON0_S12_S13L_MASK    0x00000800
#define FLASHn_PROCON0_S12_S13L_SHIFT   11
#define FLASHn_PROCON0_DFEXPRO_MASK     0x00004000
#define FLASHn_PROCON0_DFEXPRO_SHIFT    14
#define FLASHn_PROCON0_RPRO_MASK        0x00008000
#define FLASHn_PROCON0_RPRO_SHIFT       15



/****************** Masks for FLASHn_PROCON1_t **********************/
/*
   FLASH0_PROCON1        "Flash Protection Configuration Register User 1"
   FLASH1_PROCON1        "Flash Protection Configuration Register User 1"
*/
/**********************************************************/

#define FLASHn_PROCON1_MASK             0x00010fff
#define FLASHn_PROCON1_S0L_MASK         0x00000001
#define FLASHn_PROCON1_S0L_SHIFT        0
#define FLASHn_PROCON1_S1L_MASK         0x00000002
#define FLASHn_PROCON1_S1L_SHIFT        1
#define FLASHn_PROCON1_S2L_MASK         0x00000004
#define FLASHn_PROCON1_S2L_SHIFT        2
#define FLASHn_PROCON1_S3L_MASK         0x00000008
#define FLASHn_PROCON1_S3L_SHIFT        3
#define FLASHn_PROCON1_S4L_MASK         0x00000010
#define FLASHn_PROCON1_S4L_SHIFT        4
#define FLASHn_PROCON1_S5L_MASK         0x00000020
#define FLASHn_PROCON1_S5L_SHIFT        5
#define FLASHn_PROCON1_S6L_MASK         0x00000040
#define FLASHn_PROCON1_S6L_SHIFT        6
#define FLASHn_PROCON1_S7L_MASK         0x00000080
#define FLASHn_PROCON1_S7L_SHIFT        7
#define FLASHn_PROCON1_S8L_MASK         0x00000100
#define FLASHn_PROCON1_S8L_SHIFT        8
#define FLASHn_PROCON1_S9L_MASK         0x00000200
#define FLASHn_PROCON1_S9L_SHIFT        9
#define FLASHn_PROCON1_S10_S11L_MASK    0x00000400
#define FLASHn_PROCON1_S10_S11L_SHIFT   10
#define FLASHn_PROCON1_S12_S13L_MASK    0x00000800
#define FLASHn_PROCON1_S12_S13L_SHIFT   11
#define FLASHn_PROCON1_SPREC_MASK       0x00010000
#define FLASHn_PROCON1_SPREC_SHIFT      16



/****************** Masks for FLASHn_PROCON2_t **********************/
/*
   FLASH0_PROCON2        "Flash Protection Configuration Register User 2"
   FLASH1_PROCON2        "Flash Protection Configuration Register User 2"
*/
/**********************************************************/

#define FLASHn_PROCON2_MASK             0x00000fff
#define FLASHn_PROCON2_S0ROM_MASK       0x00000001
#define FLASHn_PROCON2_S0ROM_SHIFT      0
#define FLASHn_PROCON2_S1ROM_MASK       0x00000002
#define FLASHn_PROCON2_S1ROM_SHIFT      1
#define FLASHn_PROCON2_S2ROM_MASK       0x00000004
#define FLASHn_PROCON2_S2ROM_SHIFT      2
#define FLASHn_PROCON2_S3ROM_MASK       0x00000008
#define FLASHn_PROCON2_S3ROM_SHIFT      3
#define FLASHn_PROCON2_S4ROM_MASK       0x00000010
#define FLASHn_PROCON2_S4ROM_SHIFT      4
#define FLASHn_PROCON2_S5ROM_MASK       0x00000020
#define FLASHn_PROCON2_S5ROM_SHIFT      5
#define FLASHn_PROCON2_S6ROM_MASK       0x00000040
#define FLASHn_PROCON2_S6ROM_SHIFT      6
#define FLASHn_PROCON2_S7ROM_MASK       0x00000080
#define FLASHn_PROCON2_S7ROM_SHIFT      7
#define FLASHn_PROCON2_S8ROM_MASK       0x00000100
#define FLASHn_PROCON2_S8ROM_SHIFT      8
#define FLASHn_PROCON2_S9ROM_MASK       0x00000200
#define FLASHn_PROCON2_S9ROM_SHIFT      9
#define FLASHn_PROCON2_S10_S11ROM_MASK  0x00000400
#define FLASHn_PROCON2_S10_S11ROM_SHIFT 10
#define FLASHn_PROCON2_S12_S13ROM_MASK  0x00000800
#define FLASHn_PROCON2_S12_S13ROM_SHIFT 11



/****************** Masks for PMUn_ID_t **********************/
/*
   PMU0_ID               "PMU0 Identification Register"
   PMU1_ID               "PMU1 Identification Register"
*/
/**********************************************************/

#define PMUn_ID_MASK                    0xffffffff
#define PMUn_ID_MOD_REV_MASK            0x000000ff
#define PMUn_ID_MOD_REV_SHIFT           0
#define PMUn_ID_MOD_TYPE_MASK           0x0000ff00
#define PMUn_ID_MOD_TYPE_SHIFT          8
#define PMUn_ID_MOD_NUMBER_MASK         0xffff0000
#define PMUn_ID_MOD_NUMBER_SHIFT        16




#endif /* _HAVE_TRICORE_PMU_SHAREMASKS_H_ */

