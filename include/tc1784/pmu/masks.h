/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PMU_MASKS_H_
#define _HAVE_TRICORE_PMU_MASKS_H_


/****************** Masks for FLASH0_FCON_t **********************/
/*
   FLASH0_FCON           "Flash Configuration Register"
*/
/**********************************************************/

#define FLASH0_FCON_MASK                0xff37ff1f
#define FLASH0_FCON_WSPFLASH_MASK       0x0000000f
#define FLASH0_FCON_WSPFLASH_SHIFT      0
#define FLASH0_FCON_WSECPF_MASK         0x00000010
#define FLASH0_FCON_WSECPF_SHIFT        4
#define FLASH0_FCON_WSDFLASH_MASK       0x00000f00
#define FLASH0_FCON_WSDFLASH_SHIFT      8
#define FLASH0_FCON_WSECDF_MASK         0x00001000
#define FLASH0_FCON_WSECDF_SHIFT        12
#define FLASH0_FCON_IDLE_MASK           0x00002000
#define FLASH0_FCON_IDLE_SHIFT          13
#define FLASH0_FCON_ESLDIS_MASK         0x00004000
#define FLASH0_FCON_ESLDIS_SHIFT        14
#define FLASH0_FCON_SLEEP_MASK          0x00008000
#define FLASH0_FCON_SLEEP_SHIFT         15
#define FLASH0_FCON_RPA_MASK            0x00010000
#define FLASH0_FCON_RPA_SHIFT           16
#define FLASH0_FCON_DCF_MASK            0x00020000
#define FLASH0_FCON_DCF_SHIFT           17
#define FLASH0_FCON_DDF_MASK            0x00040000
#define FLASH0_FCON_DDF_SHIFT           18
#define FLASH0_FCON_DDFDMA_MASK         0x00100000
#define FLASH0_FCON_DDFDMA_SHIFT        20
#define FLASH0_FCON_DDFPCP_MASK         0x00200000
#define FLASH0_FCON_DDFPCP_SHIFT        21
#define FLASH0_FCON_VOPERM_MASK         0x01000000
#define FLASH0_FCON_VOPERM_SHIFT        24
#define FLASH0_FCON_SQERM_MASK          0x02000000
#define FLASH0_FCON_SQERM_SHIFT         25
#define FLASH0_FCON_PROERM_MASK         0x04000000
#define FLASH0_FCON_PROERM_SHIFT        26
#define FLASH0_FCON_PFSBERM_MASK        0x08000000
#define FLASH0_FCON_PFSBERM_SHIFT       27
#define FLASH0_FCON_DFSBERM_MASK        0x10000000
#define FLASH0_FCON_DFSBERM_SHIFT       28
#define FLASH0_FCON_PFDBERM_MASK        0x20000000
#define FLASH0_FCON_PFDBERM_SHIFT       29
#define FLASH0_FCON_DFDBERM_MASK        0x40000000
#define FLASH0_FCON_DFDBERM_SHIFT       30
#define FLASH0_FCON_EOBM_MASK           0x80000000
#define FLASH0_FCON_EOBM_SHIFT          31



/****************** Masks for FLASH0_FSR_t **********************/
/*
   FLASH0_FSR            "Flash Status Register"
*/
/**********************************************************/

#define FLASH0_FSR_MASK                 0xd6edffff
#define FLASH0_FSR_PBUSY_MASK           0x00000001
#define FLASH0_FSR_PBUSY_SHIFT          0
#define FLASH0_FSR_FABUSY_MASK          0x00000002
#define FLASH0_FSR_FABUSY_SHIFT         1
#define FLASH0_FSR_D0BUSY_MASK          0x00000004
#define FLASH0_FSR_D0BUSY_SHIFT         2
#define FLASH0_FSR_D1BUSY_MASK          0x00000008
#define FLASH0_FSR_D1BUSY_SHIFT         3
#define FLASH0_FSR_PROG_MASK            0x00000010
#define FLASH0_FSR_PROG_SHIFT           4
#define FLASH0_FSR_ERASE_MASK           0x00000020
#define FLASH0_FSR_ERASE_SHIFT          5
#define FLASH0_FSR_PFPAGE_MASK          0x00000040
#define FLASH0_FSR_PFPAGE_SHIFT         6
#define FLASH0_FSR_DFPAGE_MASK          0x00000080
#define FLASH0_FSR_DFPAGE_SHIFT         7
#define FLASH0_FSR_PFOPER_MASK          0x00000100
#define FLASH0_FSR_PFOPER_SHIFT         8
#define FLASH0_FSR_DFOPER_MASK          0x00000200
#define FLASH0_FSR_DFOPER_SHIFT         9
#define FLASH0_FSR_SQER_MASK            0x00000400
#define FLASH0_FSR_SQER_SHIFT           10
#define FLASH0_FSR_PROER_MASK           0x00000800
#define FLASH0_FSR_PROER_SHIFT          11
#define FLASH0_FSR_PFSBER_MASK          0x00001000
#define FLASH0_FSR_PFSBER_SHIFT         12
#define FLASH0_FSR_DFSBER_MASK          0x00002000
#define FLASH0_FSR_DFSBER_SHIFT         13
#define FLASH0_FSR_PFDBER_MASK          0x00004000
#define FLASH0_FSR_PFDBER_SHIFT         14
#define FLASH0_FSR_DFDBER_MASK          0x00008000
#define FLASH0_FSR_DFDBER_SHIFT         15
#define FLASH0_FSR_PROIN_MASK           0x00010000
#define FLASH0_FSR_PROIN_SHIFT          16
#define FLASH0_FSR_RPROIN_MASK          0x00040000
#define FLASH0_FSR_RPROIN_SHIFT         18
#define FLASH0_FSR_RPRODIS_MASK         0x00080000
#define FLASH0_FSR_RPRODIS_SHIFT        19
#define FLASH0_FSR_WPROIN0_MASK         0x00200000
#define FLASH0_FSR_WPROIN0_SHIFT        21
#define FLASH0_FSR_WPROIN1_MASK         0x00400000
#define FLASH0_FSR_WPROIN1_SHIFT        22
#define FLASH0_FSR_WPROIN2_MASK         0x00800000
#define FLASH0_FSR_WPROIN2_SHIFT        23
#define FLASH0_FSR_WPRODIS0_MASK        0x02000000
#define FLASH0_FSR_WPRODIS0_SHIFT       25
#define FLASH0_FSR_WPRODIS1_MASK        0x04000000
#define FLASH0_FSR_WPRODIS1_SHIFT       26
#define FLASH0_FSR_SLM_MASK             0x10000000
#define FLASH0_FSR_SLM_SHIFT            28
#define FLASH0_FSR_X_MASK               0x40000000
#define FLASH0_FSR_X_SHIFT              30
#define FLASH0_FSR_VER_MASK             0x80000000
#define FLASH0_FSR_VER_SHIFT            31



/****************** Masks for FLASH0_ID_t **********************/
/*
   FLASH0_ID             "Flash Module Identification Register"
*/
/**********************************************************/

#define FLASH0_ID_MASK                  0xffffffff
#define FLASH0_ID_MOD_REV_MASK          0x000000ff
#define FLASH0_ID_MOD_REV_SHIFT         0
#define FLASH0_ID_MOD_TYPE_MASK         0x0000ff00
#define FLASH0_ID_MOD_TYPE_SHIFT        8
#define FLASH0_ID_MOD_NUMBER_MASK       0xffff0000
#define FLASH0_ID_MOD_NUMBER_SHIFT      16



/****************** Masks for FLASH0_MARD_t **********************/
/*
   FLASH0_MARD           "Margin Control Register DFLASH"
*/
/**********************************************************/

#define FLASH0_MARD_MASK                0x0000801f
#define FLASH0_MARD_MARGIN0_MASK        0x00000003
#define FLASH0_MARD_MARGIN0_SHIFT       0
#define FLASH0_MARD_MARGIN1_MASK        0x0000000c
#define FLASH0_MARD_MARGIN1_SHIFT       2
#define FLASH0_MARD_BNKSEL_MASK         0x00000010
#define FLASH0_MARD_BNKSEL_SHIFT        4
#define FLASH0_MARD_TRAPDIS_MASK        0x00008000
#define FLASH0_MARD_TRAPDIS_SHIFT       15



/****************** Masks for FLASH0_MARP_t **********************/
/*
   FLASH0_MARP           "Margin Control Register PFLASH"
*/
/**********************************************************/

#define FLASH0_MARP_MASK                0x0000800f
#define FLASH0_MARP_MARGIN0_MASK        0x00000003
#define FLASH0_MARP_MARGIN0_SHIFT       0
#define FLASH0_MARP_MARGIN1_MASK        0x0000000c
#define FLASH0_MARP_MARGIN1_SHIFT       2
#define FLASH0_MARP_TRAPDIS_MASK        0x00008000
#define FLASH0_MARP_TRAPDIS_SHIFT       15



/****************** Masks for FLASH0_PROCON0_t **********************/
/*
   FLASH0_PROCON0        "Flash Protection Configuration Register User 0"
*/
/**********************************************************/

#define FLASH0_PROCON0_MASK             0xffffffff
#define FLASH0_PROCON0_S0L_MASK         0x00000001
#define FLASH0_PROCON0_S0L_SHIFT        0
#define FLASH0_PROCON0_S1L_MASK         0x00000002
#define FLASH0_PROCON0_S1L_SHIFT        1
#define FLASH0_PROCON0_S2L_MASK         0x00000004
#define FLASH0_PROCON0_S2L_SHIFT        2
#define FLASH0_PROCON0_S3L_MASK         0x00000008
#define FLASH0_PROCON0_S3L_SHIFT        3
#define FLASH0_PROCON0_S4L_MASK         0x00000010
#define FLASH0_PROCON0_S4L_SHIFT        4
#define FLASH0_PROCON0_S5L_MASK         0x00000020
#define FLASH0_PROCON0_S5L_SHIFT        5
#define FLASH0_PROCON0_S6L_MASK         0x00000040
#define FLASH0_PROCON0_S6L_SHIFT        6
#define FLASH0_PROCON0_S7L_MASK         0x00000080
#define FLASH0_PROCON0_S7L_SHIFT        7
#define FLASH0_PROCON0_S8L_MASK         0x00000100
#define FLASH0_PROCON0_S8L_SHIFT        8
#define FLASH0_PROCON0_S9L_MASK         0x00000200
#define FLASH0_PROCON0_S9L_SHIFT        9
#define FLASH0_PROCON0_S10_S11L_MASK    0x00000400
#define FLASH0_PROCON0_S10_S11L_SHIFT   10
#define FLASH0_PROCON0_S12_S13L_MASK    0x00000800
#define FLASH0_PROCON0_S12_S13L_SHIFT   11
#define FLASH0_PROCON0_S14_S15L_MASK    0x00001000
#define FLASH0_PROCON0_S14_S15L_SHIFT   12
#define FLASH0_PROCON0_S16_S17L_MASK    0x00002000
#define FLASH0_PROCON0_S16_S17L_SHIFT   13
#define FLASH0_PROCON0_DFEXPRO_MASK     0x00004000
#define FLASH0_PROCON0_DFEXPRO_SHIFT    14
#define FLASH0_PROCON0_RPRO_MASK        0x00008000
#define FLASH0_PROCON0_RPRO_SHIFT       15
#define FLASH0_PROCON0_Reserved_MASK    0xffff0000
#define FLASH0_PROCON0_Reserved_SHIFT   16



/****************** Masks for FLASH0_PROCON1_t **********************/
/*
   FLASH0_PROCON1        "Flash Protection Configuration Register User 1"
*/
/**********************************************************/

#define FLASH0_PROCON1_MASK             0xffff3fff
#define FLASH0_PROCON1_S0L_MASK         0x00000001
#define FLASH0_PROCON1_S0L_SHIFT        0
#define FLASH0_PROCON1_S1L_MASK         0x00000002
#define FLASH0_PROCON1_S1L_SHIFT        1
#define FLASH0_PROCON1_S2L_MASK         0x00000004
#define FLASH0_PROCON1_S2L_SHIFT        2
#define FLASH0_PROCON1_S3L_MASK         0x00000008
#define FLASH0_PROCON1_S3L_SHIFT        3
#define FLASH0_PROCON1_S4L_MASK         0x00000010
#define FLASH0_PROCON1_S4L_SHIFT        4
#define FLASH0_PROCON1_S5L_MASK         0x00000020
#define FLASH0_PROCON1_S5L_SHIFT        5
#define FLASH0_PROCON1_S6L_MASK         0x00000040
#define FLASH0_PROCON1_S6L_SHIFT        6
#define FLASH0_PROCON1_S7L_MASK         0x00000080
#define FLASH0_PROCON1_S7L_SHIFT        7
#define FLASH0_PROCON1_S8L_MASK         0x00000100
#define FLASH0_PROCON1_S8L_SHIFT        8
#define FLASH0_PROCON1_S9L_MASK         0x00000200
#define FLASH0_PROCON1_S9L_SHIFT        9
#define FLASH0_PROCON1_S10_S11L_MASK    0x00000400
#define FLASH0_PROCON1_S10_S11L_SHIFT   10
#define FLASH0_PROCON1_S12_S13L_MASK    0x00000800
#define FLASH0_PROCON1_S12_S13L_SHIFT   11
#define FLASH0_PROCON1_S14_S15L_MASK    0x00001000
#define FLASH0_PROCON1_S14_S15L_SHIFT   12
#define FLASH0_PROCON1_S16_S17L_MASK    0x00002000
#define FLASH0_PROCON1_S16_S17L_SHIFT   13
#define FLASH0_PROCON1_SPREC_MASK       0x00010000
#define FLASH0_PROCON1_SPREC_SHIFT      16
#define FLASH0_PROCON1_Reserved_MASK    0xfffe0000
#define FLASH0_PROCON1_Reserved_SHIFT   17



/****************** Masks for FLASH0_PROCON2_t **********************/
/*
   FLASH0_PROCON2        "Flash Protection Configuration Register User 2"
*/
/**********************************************************/

#define FLASH0_PROCON2_MASK             0xffff3fff
#define FLASH0_PROCON2_S0ROM_MASK       0x00000001
#define FLASH0_PROCON2_S0ROM_SHIFT      0
#define FLASH0_PROCON2_S1ROM_MASK       0x00000002
#define FLASH0_PROCON2_S1ROM_SHIFT      1
#define FLASH0_PROCON2_S2ROM_MASK       0x00000004
#define FLASH0_PROCON2_S2ROM_SHIFT      2
#define FLASH0_PROCON2_S3ROM_MASK       0x00000008
#define FLASH0_PROCON2_S3ROM_SHIFT      3
#define FLASH0_PROCON2_S4ROM_MASK       0x00000010
#define FLASH0_PROCON2_S4ROM_SHIFT      4
#define FLASH0_PROCON2_S5ROM_MASK       0x00000020
#define FLASH0_PROCON2_S5ROM_SHIFT      5
#define FLASH0_PROCON2_S6ROM_MASK       0x00000040
#define FLASH0_PROCON2_S6ROM_SHIFT      6
#define FLASH0_PROCON2_S7ROM_MASK       0x00000080
#define FLASH0_PROCON2_S7ROM_SHIFT      7
#define FLASH0_PROCON2_S8ROM_MASK       0x00000100
#define FLASH0_PROCON2_S8ROM_SHIFT      8
#define FLASH0_PROCON2_S9ROM_MASK       0x00000200
#define FLASH0_PROCON2_S9ROM_SHIFT      9
#define FLASH0_PROCON2_S10_S11ROM_MASK  0x00000400
#define FLASH0_PROCON2_S10_S11ROM_SHIFT 10
#define FLASH0_PROCON2_S12_S13ROM_MASK  0x00000800
#define FLASH0_PROCON2_S12_S13ROM_SHIFT 11
#define FLASH0_PROCON2_S14_S15ROM_MASK  0x00001000
#define FLASH0_PROCON2_S14_S15ROM_SHIFT 12
#define FLASH0_PROCON2_S16_S17ROM_MASK  0x00002000
#define FLASH0_PROCON2_S16_S17ROM_SHIFT 13
#define FLASH0_PROCON2_Reserved_MASK    0xffff0000
#define FLASH0_PROCON2_Reserved_SHIFT   16



/****************** Masks for PMU0_ID_t **********************/
/*
   PMU0_ID               "PMU0 Identification Register"
*/
/**********************************************************/

#define PMU0_ID_MASK                    0xffffffff
#define PMU0_ID_MOD_REV_MASK            0x000000ff
#define PMU0_ID_MOD_REV_SHIFT           0
#define PMU0_ID_MOD_TYPE_MASK           0x0000ff00
#define PMU0_ID_MOD_TYPE_SHIFT          8
#define PMU0_ID_MOD_NUMBER_MASK         0xffff0000
#define PMU0_ID_MOD_NUMBER_SHIFT        16



/****************** Masks for PMU0_OVRCON_t **********************/
/*
   PMU0_OVRCON           "Overlay RAM Control Register"
*/
/**********************************************************/

#define PMU0_OVRCON_MASK                0x00ffa303
#define PMU0_OVRCON_OLDAEN_MASK         0x00000001
#define PMU0_OVRCON_OLDAEN_SHIFT        0
#define PMU0_OVRCON_POLDAEN_MASK        0x00000002
#define PMU0_OVRCON_POLDAEN_SHIFT       1
#define PMU0_OVRCON_PECCCTR_MASK        0x00000100
#define PMU0_OVRCON_PECCCTR_SHIFT       8
#define PMU0_OVRCON_ECCGENDIS_MASK      0x00000200
#define PMU0_OVRCON_ECCGENDIS_SHIFT     9
#define PMU0_OVRCON_DBERINTDIS_MASK     0x00002000
#define PMU0_OVRCON_DBERINTDIS_SHIFT    13
#define PMU0_OVRCON_ECCDBER_MASK        0x00008000
#define PMU0_OVRCON_ECCDBER_SHIFT       15
#define PMU0_OVRCON_ECCW_MASK           0x00ff0000
#define PMU0_OVRCON_ECCW_SHIFT          16




#endif /* _HAVE_TRICORE_PMU_MASKS_H_ */

