/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PMU_SHAREMASKS_H_
#define _HAVE_TRICORE_PMU_SHAREMASKS_H_


/****************** Masks for FLASHn_ECCR_t **********************/
/*
   FLASH0_ECCR           "ECC Read Register"
   FLASH1_ECCR           "ECC Read Register"
*/
/**********************************************************/

#define FLASHn_ECCR_MASK                0xc000ffff
#define FLASHn_ECCR_RCODEL_MASK         0x000000ff
#define FLASHn_ECCR_RCODEL_SHIFT        0
#define FLASHn_ECCR_RCODEH_MASK         0x0000ff00
#define FLASHn_ECCR_RCODEH_SHIFT        8
#define FLASHn_ECCR_DECDECDIS_MASK      0x40000000
#define FLASHn_ECCR_DECDECDIS_SHIFT     30
#define FLASHn_ECCR_PECDECDIS_MASK      0x80000000
#define FLASHn_ECCR_PECDECDIS_SHIFT     31



/****************** Masks for FLASHn_ECCW_t **********************/
/*
   FLASH0_ECCW           "ECC Write Register"
   FLASH1_ECCW           "ECC Write Register"
*/
/**********************************************************/

#define FLASHn_ECCW_MASK                0xc000ffff
#define FLASHn_ECCW_WCODEL_MASK         0x000000ff
#define FLASHn_ECCW_WCODEL_SHIFT        0
#define FLASHn_ECCW_WCODEH_MASK         0x0000ff00
#define FLASHn_ECCW_WCODEH_SHIFT        8
#define FLASHn_ECCW_DECENCDIS_MASK      0x40000000
#define FLASHn_ECCW_DECENCDIS_SHIFT     30
#define FLASHn_ECCW_PECENCDIS_MASK      0x80000000
#define FLASHn_ECCW_PECENCDIS_SHIFT     31



/****************** Masks for FLASHn_FCON_t **********************/
/*
   FLASH0_FCON           "Flash Configuration Register"
   FLASH1_FCON           "Flash Configuration Register"
*/
/**********************************************************/

#define FLASHn_FCON_MASK                0xfff7ff1f
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
#define FLASHn_FCON_DDFSHE_MASK         0x00400000
#define FLASHn_FCON_DDFSHE_SHIFT        22
#define FLASHn_FCON_ADDECC_MASK         0x00800000
#define FLASHn_FCON_ADDECC_SHIFT        23
#define FLASHn_FCON_VOPERM_MASK         0x01000000
#define FLASHn_FCON_VOPERM_SHIFT        24
#define FLASHn_FCON_SQERM_MASK          0x02000000
#define FLASHn_FCON_SQERM_SHIFT         25
#define FLASHn_FCON_PROERM_MASK         0x04000000
#define FLASHn_FCON_PROERM_SHIFT        26
#define FLASHn_FCON_PFSBERM_MASK        0x08000000
#define FLASHn_FCON_PFSBERM_SHIFT       27
#define FLASHn_FCON_DFCBERM_MASK        0x10000000
#define FLASHn_FCON_DFCBERM_SHIFT       28
#define FLASHn_FCON_PFDBERM_MASK        0x20000000
#define FLASHn_FCON_PFDBERM_SHIFT       29
#define FLASHn_FCON_DFMBERM_MASK        0x40000000
#define FLASHn_FCON_DFMBERM_SHIFT       30
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
#define FLASHn_FSR_DFCBER_MASK          0x00002000
#define FLASHn_FSR_DFCBER_SHIFT         13
#define FLASHn_FSR_PFDBER_MASK          0x00004000
#define FLASHn_FSR_PFDBER_SHIFT         14
#define FLASHn_FSR_DFMBER_MASK          0x00008000
#define FLASHn_FSR_DFMBER_SHIFT         15
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
#define FLASHn_FSR_ORIER_MASK           0x40000000
#define FLASHn_FSR_ORIER_SHIFT          30
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
#define FLASHn_MARD_MARGIN_MASK         0x0000000f
#define FLASHn_MARD_MARGIN_SHIFT        0
#define FLASHn_MARD_CTRL_MASK           0x00000010
#define FLASHn_MARD_CTRL_SHIFT          4
#define FLASHn_MARD_TRAPDIS_MASK        0x00008000
#define FLASHn_MARD_TRAPDIS_SHIFT       15



/****************** Masks for FLASHn_MARP_t **********************/
/*
   FLASH0_MARP           "Margin Control Register PFLASH"
   FLASH1_MARP           "Margin Control Register PFLASH"
*/
/**********************************************************/

#define FLASHn_MARP_MASK                0x0000800f
#define FLASHn_MARP_MARGIN_MASK         0x0000000f
#define FLASHn_MARP_MARGIN_SHIFT        0
#define FLASHn_MARP_TRAPDIS_MASK        0x00008000
#define FLASHn_MARP_TRAPDIS_SHIFT       15



/****************** Masks for FLASHn_PROCON0_t **********************/
/*
   FLASH0_PROCON0        "Flash Protection Config. User 0"
   FLASH1_PROCON0        "Flash Protection Config. User 0"
*/
/**********************************************************/

#define FLASHn_PROCON0_MASK             0xe001ffff
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
#define FLASHn_PROCON0_S14_S15L_MASK    0x00001000
#define FLASHn_PROCON0_S14_S15L_SHIFT   12
#define FLASHn_PROCON0_S16_S17L_MASK    0x00002000
#define FLASHn_PROCON0_S16_S17L_SHIFT   13
#define FLASHn_PROCON0_S18_S19L_MASK    0x00004000
#define FLASHn_PROCON0_S18_S19L_SHIFT   14
#define FLASHn_PROCON0_S20_S21L_MASK    0x00008000
#define FLASHn_PROCON0_S20_S21L_SHIFT   15
#define FLASHn_PROCON0_S22_S23L_MASK    0x00010000
#define FLASHn_PROCON0_S22_S23L_SHIFT   16
#define FLASHn_PROCON0_ADDECC_MASK      0x20000000
#define FLASHn_PROCON0_ADDECC_SHIFT     29
#define FLASHn_PROCON0_DFEXPRO_MASK     0x40000000
#define FLASHn_PROCON0_DFEXPRO_SHIFT    30
#define FLASHn_PROCON0_RPRO_MASK        0x80000000
#define FLASHn_PROCON0_RPRO_SHIFT       31



/****************** Masks for FLASHn_PROCON1_t **********************/
/*
   FLASH0_PROCON1        "Flash Protection Config. User 1"
   FLASH1_PROCON1        "Flash Protection Config. User 1"
*/
/**********************************************************/

#define FLASHn_PROCON1_MASK             0xff81ffff
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
#define FLASHn_PROCON1_S14_S15L_MASK    0x00001000
#define FLASHn_PROCON1_S14_S15L_SHIFT   12
#define FLASHn_PROCON1_S16_S17L_MASK    0x00002000
#define FLASHn_PROCON1_S16_S17L_SHIFT   13
#define FLASHn_PROCON1_S18_S19L_MASK    0x00004000
#define FLASHn_PROCON1_S18_S19L_SHIFT   14
#define FLASHn_PROCON1_S20_S21L_MASK    0x00008000
#define FLASHn_PROCON1_S20_S21L_SHIFT   15
#define FLASHn_PROCON1_S22_S23L_MASK    0x00010000
#define FLASHn_PROCON1_S22_S23L_SHIFT   16
#define FLASHn_PROCON1_SPREC_MASK       0x00800000
#define FLASHn_PROCON1_SPREC_SHIFT      23
#define FLASHn_PROCON1_ALSEDIS_MASK     0xff000000
#define FLASHn_PROCON1_ALSEDIS_SHIFT    24



/****************** Masks for FLASHn_PROCON2_t **********************/
/*
   FLASH0_PROCON2        "Flash Protection Config. User 2"
   FLASH1_PROCON2        "Flash Protection Config. User 2"
*/
/**********************************************************/

#define FLASHn_PROCON2_MASK             0x4001ffff
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
#define FLASHn_PROCON2_S14_S15ROM_MASK  0x00001000
#define FLASHn_PROCON2_S14_S15ROM_SHIFT 12
#define FLASHn_PROCON2_S16_S17ROM_MASK  0x00002000
#define FLASHn_PROCON2_S16_S17ROM_SHIFT 13
#define FLASHn_PROCON2_S18_S19ROM_MASK  0x00004000
#define FLASHn_PROCON2_S18_S19ROM_SHIFT 14
#define FLASHn_PROCON2_S20_S21ROM_MASK  0x00008000
#define FLASHn_PROCON2_S20_S21ROM_SHIFT 15
#define FLASHn_PROCON2_S22_S23ROM_MASK  0x00010000
#define FLASHn_PROCON2_S22_S23ROM_SHIFT 16
#define FLASHn_PROCON2_DATM_MASK        0x40000000
#define FLASHn_PROCON2_DATM_SHIFT       30



/****************** Masks for FLASHn_RDBCFGm_t **********************/
/*
   FLASH0_RDBCFG0        "Read Buffer Cfg 0"
   FLASH0_RDBCFG1        "Read Buffer Cfg 1"
   FLASH0_RDBCFG2        "Read Buffer Cfg 2"
   FLASH1_RDBCFG0        "Read Buffer Cfg 0"
   FLASH1_RDBCFG1        "Read Buffer Cfg 1"
   FLASH1_RDBCFG2        "Read Buffer Cfg 2"
*/
/**********************************************************/

#define FLASHn_RDBCFGm_MASK             0x0000000f
#define FLASHn_RDBCFGm_TAG_MASK         0x0000000f
#define FLASHn_RDBCFGm_TAG_SHIFT        0



/****************** Masks for FLASHn_SEMA_t **********************/
/*
   FLASH0_SEMA           "Flash Access Semaphore"
   FLASH1_SEMA           "Flash Access Semaphore"
*/
/**********************************************************/

#define FLASHn_SEMA_MASK                0x0000fffd
#define FLASHn_SEMA_SHE_MASK            0x00000001
#define FLASHn_SEMA_SHE_SHIFT           0
#define FLASHn_SEMA_S1_MASK             0x00000004
#define FLASHn_SEMA_S1_SHIFT            2
#define FLASHn_SEMA_S1C_MASK            0x00000008
#define FLASHn_SEMA_S1C_SHIFT           3
#define FLASHn_SEMA_S2_MASK             0x00000010
#define FLASHn_SEMA_S2_SHIFT            4
#define FLASHn_SEMA_S2C_MASK            0x00000020
#define FLASHn_SEMA_S2C_SHIFT           5
#define FLASHn_SEMA_S3_MASK             0x00000040
#define FLASHn_SEMA_S3_SHIFT            6
#define FLASHn_SEMA_S3C_MASK            0x00000080
#define FLASHn_SEMA_S3C_SHIFT           7
#define FLASHn_SEMA_S4_MASK             0x00000100
#define FLASHn_SEMA_S4_SHIFT            8
#define FLASHn_SEMA_S4C_MASK            0x00000200
#define FLASHn_SEMA_S4C_SHIFT           9
#define FLASHn_SEMA_S5_MASK             0x00000400
#define FLASHn_SEMA_S5_SHIFT            10
#define FLASHn_SEMA_S5C_MASK            0x00000800
#define FLASHn_SEMA_S5C_SHIFT           11
#define FLASHn_SEMA_S6_MASK             0x00001000
#define FLASHn_SEMA_S6_SHIFT            12
#define FLASHn_SEMA_S6C_MASK            0x00002000
#define FLASHn_SEMA_S6C_SHIFT           13
#define FLASHn_SEMA_S7_MASK             0x00004000
#define FLASHn_SEMA_S7_SHIFT            14
#define FLASHn_SEMA_S7C_MASK            0x00008000
#define FLASHn_SEMA_S7C_SHIFT           15



/****************** Masks for FLASHn_SHEBOOTm_t **********************/
/*
   FLASH0_SHEBOOT0       "SHE Secure Boot Cfg"
   FLASH0_SHEBOOT1       "SHE Secure Boot Cfg"
   FLASH0_SHEBOOT2       "SHE Secure Boot Cfg"
   FLASH1_SHEBOOT0       "SHE Secure Boot Cfg"
   FLASH1_SHEBOOT1       "SHE Secure Boot Cfg"
   FLASH1_SHEBOOT2       "SHE Secure Boot Cfg"
*/
/**********************************************************/

#define FLASHn_SHEBOOTm_MASK            0xffffffff
#define FLASHn_SHEBOOTm_SIZE_MASK       0x3fffffff
#define FLASHn_SHEBOOTm_SIZE_SHIFT      0
#define FLASHn_SHEBOOTm_BGD_MASK        0x40000000
#define FLASHn_SHEBOOTm_BGD_SHIFT       30
#define FLASHn_SHEBOOTm_SHE_MASK        0x80000000
#define FLASHn_SHEBOOTm_SHE_SHIFT       31



/****************** Masks for FLASHn_XFSR_t **********************/
/*
   FLASH0_XFSR           "Extended Flash Status Register"
   FLASH1_XFSR           "Extended Flash Status Register"
*/
/**********************************************************/

#define FLASHn_XFSR_MASK                0x00000763
#define FLASHn_XFSR_PFDBER_MASK         0x00000001
#define FLASHn_XFSR_PFDBER_SHIFT        0
#define FLASHn_XFSR_PFADER_MASK         0x00000002
#define FLASHn_XFSR_PFADER_SHIFT        1
#define FLASHn_XFSR_SRIADDERR_MASK      0x00000020
#define FLASHn_XFSR_SRIADDERR_SHIFT     5
#define FLASHn_XFSR_SEMVIO_MASK         0x00000040
#define FLASHn_XFSR_SEMVIO_SHIFT        6
#define FLASHn_XFSR_PVER_MASK           0x00000100
#define FLASHn_XFSR_PVER_SHIFT          8
#define FLASHn_XFSR_D0VER_MASK          0x00000200
#define FLASHn_XFSR_D0VER_SHIFT         9
#define FLASHn_XFSR_D1VER_MASK          0x00000400
#define FLASHn_XFSR_D1VER_SHIFT         10



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

