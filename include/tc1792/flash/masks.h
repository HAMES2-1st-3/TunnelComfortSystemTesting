/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_FLASH_MASKS_H_
#define _HAVE_TRICORE_FLASH_MASKS_H_


/****************** Masks for FLASH_FCON_t **********************/
/*
   FLASH_FCON            "Flash Configuration Register"
*/
/**********************************************************/

#define FLASH_FCON_MASK                 0xfe3fcf7f
#define FLASH_FCON_WSPFLASH_MASK        0x00000007
#define FLASH_FCON_WSPFLASH_SHIFT       0
#define FLASH_FCON_WSECPF_MASK          0x00000008
#define FLASH_FCON_WSECPF_SHIFT         3
#define FLASH_FCON_WSWLHIT_MASK         0x00000070
#define FLASH_FCON_WSWLHIT_SHIFT        4
#define FLASH_FCON_WSDFLASH_MASK        0x00000700
#define FLASH_FCON_WSDFLASH_SHIFT       8
#define FLASH_FCON_WSECDF_MASK          0x00000800
#define FLASH_FCON_WSECDF_SHIFT         11
#define FLASH_FCON_ESLDIS_MASK          0x00004000
#define FLASH_FCON_ESLDIS_SHIFT         14
#define FLASH_FCON_SLEEP_MASK           0x00008000
#define FLASH_FCON_SLEEP_SHIFT          15
#define FLASH_FCON_RPA_MASK             0x00010000
#define FLASH_FCON_RPA_SHIFT            16
#define FLASH_FCON_DCF_MASK             0x00020000
#define FLASH_FCON_DCF_SHIFT            17
#define FLASH_FCON_DDF_MASK             0x00040000
#define FLASH_FCON_DDF_SHIFT            18
#define FLASH_FCON_DDFDBG_MASK          0x00080000
#define FLASH_FCON_DDFDBG_SHIFT         19
#define FLASH_FCON_DDFDMA_MASK          0x00100000
#define FLASH_FCON_DDFDMA_SHIFT         20
#define FLASH_FCON_DDFPCP_MASK          0x00200000
#define FLASH_FCON_DDFPCP_SHIFT         21
#define FLASH_FCON_SQERM_MASK           0x02000000
#define FLASH_FCON_SQERM_SHIFT          25
#define FLASH_FCON_PROERM_MASK          0x04000000
#define FLASH_FCON_PROERM_SHIFT         26
#define FLASH_FCON_PFSBERM_MASK         0x08000000
#define FLASH_FCON_PFSBERM_SHIFT        27
#define FLASH_FCON_DFSBERM_MASK         0x10000000
#define FLASH_FCON_DFSBERM_SHIFT        28
#define FLASH_FCON_PFDBERM_MASK         0x20000000
#define FLASH_FCON_PFDBERM_SHIFT        29
#define FLASH_FCON_DFDBERM_MASK         0x40000000
#define FLASH_FCON_DFDBERM_SHIFT        30
#define FLASH_FCON_EOBM_MASK            0x80000000
#define FLASH_FCON_EOBM_SHIFT           31



/****************** Masks for FLASH_FSR_t **********************/
/*
   FLASH_FSR             "Flash Status Register"
*/
/**********************************************************/

#define FLASH_FSR_MASK                  0x96edffff
#define FLASH_FSR_PBUSY_MASK            0x00000001
#define FLASH_FSR_PBUSY_SHIFT           0
#define FLASH_FSR_FABUSY_MASK           0x00000002
#define FLASH_FSR_FABUSY_SHIFT          1
#define FLASH_FSR_D0BUSY_MASK           0x00000004
#define FLASH_FSR_D0BUSY_SHIFT          2
#define FLASH_FSR_D1BUSY_MASK           0x00000008
#define FLASH_FSR_D1BUSY_SHIFT          3
#define FLASH_FSR_PROG_MASK             0x00000010
#define FLASH_FSR_PROG_SHIFT            4
#define FLASH_FSR_ERASE_MASK            0x00000020
#define FLASH_FSR_ERASE_SHIFT           5
#define FLASH_FSR_PFPAGE_MASK           0x00000040
#define FLASH_FSR_PFPAGE_SHIFT          6
#define FLASH_FSR_DFPAGE_MASK           0x00000080
#define FLASH_FSR_DFPAGE_SHIFT          7
#define FLASH_FSR_PFOPER_MASK           0x00000100
#define FLASH_FSR_PFOPER_SHIFT          8
#define FLASH_FSR_DFOPER_MASK           0x00000200
#define FLASH_FSR_DFOPER_SHIFT          9
#define FLASH_FSR_SQER_MASK             0x00000400
#define FLASH_FSR_SQER_SHIFT            10
#define FLASH_FSR_PROER_MASK            0x00000800
#define FLASH_FSR_PROER_SHIFT           11
#define FLASH_FSR_PFSBER_MASK           0x00001000
#define FLASH_FSR_PFSBER_SHIFT          12
#define FLASH_FSR_DFSBER_MASK           0x00002000
#define FLASH_FSR_DFSBER_SHIFT          13
#define FLASH_FSR_PFDBER_MASK           0x00004000
#define FLASH_FSR_PFDBER_SHIFT          14
#define FLASH_FSR_DFDBER_MASK           0x00008000
#define FLASH_FSR_DFDBER_SHIFT          15
#define FLASH_FSR_PROIN_MASK            0x00010000
#define FLASH_FSR_PROIN_SHIFT           16
#define FLASH_FSR_RPROIN_MASK           0x00040000
#define FLASH_FSR_RPROIN_SHIFT          18
#define FLASH_FSR_RPRODIS_MASK          0x00080000
#define FLASH_FSR_RPRODIS_SHIFT         19
#define FLASH_FSR_WPROIN0_MASK          0x00200000
#define FLASH_FSR_WPROIN0_SHIFT         21
#define FLASH_FSR_WPROIN1_MASK          0x00400000
#define FLASH_FSR_WPROIN1_SHIFT         22
#define FLASH_FSR_WPROIN2_MASK          0x00800000
#define FLASH_FSR_WPROIN2_SHIFT         23
#define FLASH_FSR_WPRODIS0_MASK         0x02000000
#define FLASH_FSR_WPRODIS0_SHIFT        25
#define FLASH_FSR_WPRODIS1_MASK         0x04000000
#define FLASH_FSR_WPRODIS1_SHIFT        26
#define FLASH_FSR_SLM_MASK              0x10000000
#define FLASH_FSR_SLM_SHIFT             28
#define FLASH_FSR_VER_MASK              0x80000000
#define FLASH_FSR_VER_SHIFT             31



/****************** Masks for FLASH_ID_t **********************/
/*
   FLASH_ID              "Flash Module Identification Register"
*/
/**********************************************************/

#define FLASH_ID_MASK                   0x00000000



/****************** Masks for FLASH_MARD_t **********************/
/*
   FLASH_MARD            "Flash Margin Control Register DFlash"
*/
/**********************************************************/

#define FLASH_MARD_MASK                 0x0000801f
#define FLASH_MARD_MARGIN0_MASK         0x00000003
#define FLASH_MARD_MARGIN0_SHIFT        0
#define FLASH_MARD_MARGIN1_MASK         0x0000000c
#define FLASH_MARD_MARGIN1_SHIFT        2
#define FLASH_MARD_BNKSEL_MASK          0x00000010
#define FLASH_MARD_BNKSEL_SHIFT         4
#define FLASH_MARD_TRAPDIS_MASK         0x00008000
#define FLASH_MARD_TRAPDIS_SHIFT        15



/****************** Masks for FLASH_MARP_t **********************/
/*
   FLASH_MARP            "Flash Margin Control Register PFlash"
*/
/**********************************************************/

#define FLASH_MARP_MASK                 0x0000800f
#define FLASH_MARP_MARGIN0_MASK         0x00000003
#define FLASH_MARP_MARGIN0_SHIFT        0
#define FLASH_MARP_MARGIN1_MASK         0x0000000c
#define FLASH_MARP_MARGIN1_SHIFT        2
#define FLASH_MARP_TRAPDIS_MASK         0x00008000
#define FLASH_MARP_TRAPDIS_SHIFT        15



/****************** Masks for FLASH_PROCON0_t **********************/
/*
   FLASH_PROCON0         "Flash Protection Configuration Register User 0"
*/
/**********************************************************/

#define FLASH_PROCON0_MASK              0x00009fff
#define FLASH_PROCON0_S0L_MASK          0x00000001
#define FLASH_PROCON0_S0L_SHIFT         0
#define FLASH_PROCON0_S1L_MASK          0x00000002
#define FLASH_PROCON0_S1L_SHIFT         1
#define FLASH_PROCON0_S2L_MASK          0x00000004
#define FLASH_PROCON0_S2L_SHIFT         2
#define FLASH_PROCON0_S3L_MASK          0x00000008
#define FLASH_PROCON0_S3L_SHIFT         3
#define FLASH_PROCON0_S4L_MASK          0x00000010
#define FLASH_PROCON0_S4L_SHIFT         4
#define FLASH_PROCON0_S5L_MASK          0x00000020
#define FLASH_PROCON0_S5L_SHIFT         5
#define FLASH_PROCON0_S6L_MASK          0x00000040
#define FLASH_PROCON0_S6L_SHIFT         6
#define FLASH_PROCON0_S7L_MASK          0x00000080
#define FLASH_PROCON0_S7L_SHIFT         7
#define FLASH_PROCON0_S8L_MASK          0x00000100
#define FLASH_PROCON0_S8L_SHIFT         8
#define FLASH_PROCON0_S9L_MASK          0x00000200
#define FLASH_PROCON0_S9L_SHIFT         9
#define FLASH_PROCON0_S10L_MASK         0x00000400
#define FLASH_PROCON0_S10L_SHIFT        10
#define FLASH_PROCON0_S11L_MASK         0x00000800
#define FLASH_PROCON0_S11L_SHIFT        11
#define FLASH_PROCON0_S12L_MASK         0x00001000
#define FLASH_PROCON0_S12L_SHIFT        12
#define FLASH_PROCON0_RPRO_MASK         0x00008000
#define FLASH_PROCON0_RPRO_SHIFT        15




#endif /* _HAVE_TRICORE_FLASH_MASKS_H_ */

