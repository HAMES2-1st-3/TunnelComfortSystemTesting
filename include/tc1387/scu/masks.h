/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SCU_MASKS_H_
#define _HAVE_TRICORE_SCU_MASKS_H_


/****************** Masks for SCU_ARSTDIS_t **********************/
/*
   SCU_ARSTDIS           "Application Reset Disable Register"
*/
/**********************************************************/

#define SCU_ARSTDIS_MASK                0x00000001
#define SCU_ARSTDIS_STMDIS_MASK         0x00000001
#define SCU_ARSTDIS_STMDIS_SHIFT        0



/****************** Masks for SCU_CCUCON0_t **********************/
/*
   SCU_CCUCON0           "CCU Clock Control Register 0"
*/
/**********************************************************/

#define SCU_CCUCON0_MASK                0x8f000f0f
#define SCU_CCUCON0_FPIDIV_MASK         0x0000000f
#define SCU_CCUCON0_FPIDIV_SHIFT        0
#define SCU_CCUCON0_LMBDIV_MASK         0x00000f00
#define SCU_CCUCON0_LMBDIV_SHIFT        8
#define SCU_CCUCON0_PCPDIV_MASK         0x0f000000
#define SCU_CCUCON0_PCPDIV_SHIFT        24
#define SCU_CCUCON0_LCK_MASK            0x80000000
#define SCU_CCUCON0_LCK_SHIFT           31



/****************** Masks for SCU_CCUCON1_t **********************/
/*
   SCU_CCUCON1           "CCU Clock Control Register 1"
*/
/**********************************************************/

#define SCU_CCUCON1_MASK                0x80000f0f
#define SCU_CCUCON1_MCDSDIV_MASK        0x0000000f
#define SCU_CCUCON1_MCDSDIV_SHIFT       0
#define SCU_CCUCON1_REFCLKDIV_MASK      0x00000f00
#define SCU_CCUCON1_REFCLKDIV_SHIFT     8
#define SCU_CCUCON1_LCK_MASK            0x80000000
#define SCU_CCUCON1_LCK_SHIFT           31



/****************** Masks for SCU_CHIPID_t **********************/
/*
   SCU_CHIPID            "Chip Identification Register"
*/
/**********************************************************/

#define SCU_CHIPID_MASK                 0x0001ffff
#define SCU_CHIPID_CHREV_MASK           0x000000ff
#define SCU_CHIPID_CHREV_SHIFT          0
#define SCU_CHIPID_CHID_MASK            0x0000ff00
#define SCU_CHIPID_CHID_SHIFT           8
#define SCU_CHIPID_EEA_MASK             0x00010000
#define SCU_CHIPID_EEA_SHIFT            16



/****************** Masks for SCU_DTSCON_t **********************/
/*
   SCU_DTSCON            "Die Temperature Sensor Control Register"
*/
/**********************************************************/

#define SCU_DTSCON_MASK                 0x0000fff3
#define SCU_DTSCON_PWD_MASK             0x00000001
#define SCU_DTSCON_PWD_SHIFT            0
#define SCU_DTSCON_START_MASK           0x00000002
#define SCU_DTSCON_START_SHIFT          1
#define SCU_DTSCON_CAL_MASK             0x0000fff0
#define SCU_DTSCON_CAL_SHIFT            4



/****************** Masks for SCU_DTSSTAT_t **********************/
/*
   SCU_DTSSTAT           "Die Temperature Sensor Status Register"
*/
/**********************************************************/

#define SCU_DTSSTAT_MASK                0x0000c3ff
#define SCU_DTSSTAT_RESULT_MASK         0x000003ff
#define SCU_DTSSTAT_RESULT_SHIFT        0
#define SCU_DTSSTAT_RDY_MASK            0x00004000
#define SCU_DTSSTAT_RDY_SHIFT           14
#define SCU_DTSSTAT_BUSY_MASK           0x00008000
#define SCU_DTSSTAT_BUSY_SHIFT          15



/****************** Masks for SCU_ECCCLR_t **********************/
/*
   SCU_ECCCLR            "ECC Clear Register"
*/
/**********************************************************/

#define SCU_ECCCLR_MASK                 0x000003ff
#define SCU_ECCCLR_LDRAM_MASK           0x00000001
#define SCU_ECCCLR_LDRAM_SHIFT          0
#define SCU_ECCCLR_DTAG_MASK            0x00000002
#define SCU_ECCCLR_DTAG_SHIFT           1
#define SCU_ECCCLR_SPRAM_MASK           0x00000004
#define SCU_ECCCLR_SPRAM_SHIFT          2
#define SCU_ECCCLR_PTAG_MASK            0x00000008
#define SCU_ECCCLR_PTAG_SHIFT           3
#define SCU_ECCCLR_PMU_MASK             0x00000010
#define SCU_ECCCLR_PMU_SHIFT            4
#define SCU_ECCCLR_PRAM_MASK            0x00000020
#define SCU_ECCCLR_PRAM_SHIFT           5
#define SCU_ECCCLR_CMEM_MASK            0x00000040
#define SCU_ECCCLR_CMEM_SHIFT           6
#define SCU_ECCCLR_CAN_MASK             0x00000080
#define SCU_ECCCLR_CAN_SHIFT            7
#define SCU_ECCCLR_ERAY_MASK            0x00000100
#define SCU_ECCCLR_ERAY_SHIFT           8
#define SCU_ECCCLR_LMB_MASK             0x00000200
#define SCU_ECCCLR_LMB_SHIFT            9



/****************** Masks for SCU_ECCCON_t **********************/
/*
   SCU_ECCCON            "ECC Control Register"
*/
/**********************************************************/

#define SCU_ECCCON_MASK                 0x000003ff
#define SCU_ECCCON_ECCENLDRAM_MASK      0x00000001
#define SCU_ECCCON_ECCENLDRAM_SHIFT     0
#define SCU_ECCCON_ECCENDTAG_MASK       0x00000002
#define SCU_ECCCON_ECCENDTAG_SHIFT      1
#define SCU_ECCCON_ECCENSPRAM_MASK      0x00000004
#define SCU_ECCCON_ECCENSPRAM_SHIFT     2
#define SCU_ECCCON_ECCENPTAG_MASK       0x00000008
#define SCU_ECCCON_ECCENPTAG_SHIFT      3
#define SCU_ECCCON_ECCENPMU_MASK        0x00000010
#define SCU_ECCCON_ECCENPMU_SHIFT       4
#define SCU_ECCCON_ECCENPRAM_MASK       0x00000020
#define SCU_ECCCON_ECCENPRAM_SHIFT      5
#define SCU_ECCCON_ECCENCMEM_MASK       0x00000040
#define SCU_ECCCON_ECCENCMEM_SHIFT      6
#define SCU_ECCCON_ECCENCAN_MASK        0x00000080
#define SCU_ECCCON_ECCENCAN_SHIFT       7
#define SCU_ECCCON_ECCENERAY_MASK       0x00000100
#define SCU_ECCCON_ECCENERAY_SHIFT      8
#define SCU_ECCCON_ECCENLMB_MASK        0x00000200
#define SCU_ECCCON_ECCENLMB_SHIFT       9



/****************** Masks for SCU_ECCSTAT_t **********************/
/*
   SCU_ECCSTAT           "ECC Status Register"
*/
/**********************************************************/

#define SCU_ECCSTAT_MASK                0x000003ff
#define SCU_ECCSTAT_LDRAM_MASK          0x00000001
#define SCU_ECCSTAT_LDRAM_SHIFT         0
#define SCU_ECCSTAT_DTAG_MASK           0x00000002
#define SCU_ECCSTAT_DTAG_SHIFT          1
#define SCU_ECCSTAT_SPRAM_MASK          0x00000004
#define SCU_ECCSTAT_SPRAM_SHIFT         2
#define SCU_ECCSTAT_PTAG_MASK           0x00000008
#define SCU_ECCSTAT_PTAG_SHIFT          3
#define SCU_ECCSTAT_PMU_MASK            0x00000010
#define SCU_ECCSTAT_PMU_SHIFT           4
#define SCU_ECCSTAT_PRAM_MASK           0x00000020
#define SCU_ECCSTAT_PRAM_SHIFT          5
#define SCU_ECCSTAT_CMEM_MASK           0x00000040
#define SCU_ECCSTAT_CMEM_SHIFT          6
#define SCU_ECCSTAT_CAN_MASK            0x00000080
#define SCU_ECCSTAT_CAN_SHIFT           7
#define SCU_ECCSTAT_ERAY_MASK           0x00000100
#define SCU_ECCSTAT_ERAY_SHIFT          8
#define SCU_ECCSTAT_LMB_MASK            0x00000200
#define SCU_ECCSTAT_LMB_SHIFT           9



/****************** Masks for SCU_EIFR_t **********************/
/*
   SCU_EIFR              "External Input Flag Register"
*/
/**********************************************************/

#define SCU_EIFR_MASK                   0x0000000f
#define SCU_EIFR_INTF0_MASK             0x00000001
#define SCU_EIFR_INTF0_SHIFT            0
#define SCU_EIFR_INTF1_MASK             0x00000002
#define SCU_EIFR_INTF1_SHIFT            1
#define SCU_EIFR_INTF2_MASK             0x00000004
#define SCU_EIFR_INTF2_SHIFT            2
#define SCU_EIFR_INTF3_MASK             0x00000008
#define SCU_EIFR_INTF3_SHIFT            3



/****************** Masks for SCU_EMSR_t **********************/
/*
   SCU_EMSR              "Emergency Stop Register"
*/
/**********************************************************/

#define SCU_EMSR_MASK                   0x03010007
#define SCU_EMSR_POL_MASK               0x00000001
#define SCU_EMSR_POL_SHIFT              0
#define SCU_EMSR_MODE_MASK              0x00000002
#define SCU_EMSR_MODE_SHIFT             1
#define SCU_EMSR_ENON_MASK              0x00000004
#define SCU_EMSR_ENON_SHIFT             2
#define SCU_EMSR_EMSF_MASK              0x00010000
#define SCU_EMSR_EMSF_SHIFT             16
#define SCU_EMSR_EMSFM_MASK             0x03000000
#define SCU_EMSR_EMSFM_SHIFT            24



/****************** Masks for SCU_EXTCON_t **********************/
/*
   SCU_EXTCON            "External Clock Control Register"
*/
/**********************************************************/

#define SCU_EXTCON_MASK                 0xff3f007d
#define SCU_EXTCON_EN0_MASK             0x00000001
#define SCU_EXTCON_EN0_SHIFT            0
#define SCU_EXTCON_SEL0_MASK            0x0000003c
#define SCU_EXTCON_SEL0_SHIFT           2
#define SCU_EXTCON_GPTAINSEL_MASK       0x00000040
#define SCU_EXTCON_GPTAINSEL_SHIFT      6
#define SCU_EXTCON_EN1_MASK             0x00010000
#define SCU_EXTCON_EN1_SHIFT            16
#define SCU_EXTCON_NSEL_MASK            0x00020000
#define SCU_EXTCON_NSEL_SHIFT           17
#define SCU_EXTCON_SEL1_MASK            0x003c0000
#define SCU_EXTCON_SEL1_SHIFT           18
#define SCU_EXTCON_DIV1_MASK            0xff000000
#define SCU_EXTCON_DIV1_SHIFT           24



/****************** Masks for SCU_FDR_t **********************/
/*
   SCU_FDR               "Fractional Divider Register"
*/
/**********************************************************/

#define SCU_FDR_MASK                    0x83ffc3ff
#define SCU_FDR_STEP_MASK               0x000003ff
#define SCU_FDR_STEP_SHIFT              0
#define SCU_FDR_DM_MASK                 0x0000c000
#define SCU_FDR_DM_SHIFT                14
#define SCU_FDR_RESULT_MASK             0x03ff0000
#define SCU_FDR_RESULT_SHIFT            16
#define SCU_FDR_DISCLK_MASK             0x80000000
#define SCU_FDR_DISCLK_SHIFT            31



/****************** Masks for SCU_FMR_t **********************/
/*
   SCU_FMR               "Flag Modification Register"
*/
/**********************************************************/

#define SCU_FMR_MASK                    0x000f000f
#define SCU_FMR_FS0_MASK                0x00000001
#define SCU_FMR_FS0_SHIFT               0
#define SCU_FMR_FS1_MASK                0x00000002
#define SCU_FMR_FS1_SHIFT               1
#define SCU_FMR_FS2_MASK                0x00000004
#define SCU_FMR_FS2_SHIFT               2
#define SCU_FMR_FS3_MASK                0x00000008
#define SCU_FMR_FS3_SHIFT               3
#define SCU_FMR_FC0_MASK                0x00010000
#define SCU_FMR_FC0_SHIFT               16
#define SCU_FMR_FC1_MASK                0x00020000
#define SCU_FMR_FC1_SHIFT               17
#define SCU_FMR_FC2_MASK                0x00040000
#define SCU_FMR_FC2_SHIFT               18
#define SCU_FMR_FC3_MASK                0x00080000
#define SCU_FMR_FC3_SHIFT               19



/****************** Masks for SCU_ID_t **********************/
/*
   SCU_ID                "Identification Register"
*/
/**********************************************************/

#define SCU_ID_MASK                     0xffffffff
#define SCU_ID_MODREV_MASK              0x000000ff
#define SCU_ID_MODREV_SHIFT             0
#define SCU_ID_MODTYPE_MASK             0x0000ff00
#define SCU_ID_MODTYPE_SHIFT            8
#define SCU_ID_MODNUMBER_MASK           0xffff0000
#define SCU_ID_MODNUMBER_SHIFT          16



/****************** Masks for SCU_IGCR0_t **********************/
/*
   SCU_IGCR0             "Interrupt Gating Register 0"
*/
/**********************************************************/

#define SCU_IGCR0_MASK                  0xe30fe30f
#define SCU_IGCR0_IPEN00_MASK           0x00000001
#define SCU_IGCR0_IPEN00_SHIFT          0
#define SCU_IGCR0_IPEN01_MASK           0x00000002
#define SCU_IGCR0_IPEN01_SHIFT          1
#define SCU_IGCR0_IPEN02_MASK           0x00000004
#define SCU_IGCR0_IPEN02_SHIFT          2
#define SCU_IGCR0_IPEN03_MASK           0x00000008
#define SCU_IGCR0_IPEN03_SHIFT          3
#define SCU_IGCR0_ISS0_MASK             0x00000300
#define SCU_IGCR0_ISS0_SHIFT            8
#define SCU_IGCR0_GEEN0_MASK            0x00002000
#define SCU_IGCR0_GEEN0_SHIFT           13
#define SCU_IGCR0_IGP0_MASK             0x0000c000
#define SCU_IGCR0_IGP0_SHIFT            14
#define SCU_IGCR0_IPEN10_MASK           0x00010000
#define SCU_IGCR0_IPEN10_SHIFT          16
#define SCU_IGCR0_IPEN11_MASK           0x00020000
#define SCU_IGCR0_IPEN11_SHIFT          17
#define SCU_IGCR0_IPEN12_MASK           0x00040000
#define SCU_IGCR0_IPEN12_SHIFT          18
#define SCU_IGCR0_IPEN13_MASK           0x00080000
#define SCU_IGCR0_IPEN13_SHIFT          19
#define SCU_IGCR0_ISS1_MASK             0x03000000
#define SCU_IGCR0_ISS1_SHIFT            24
#define SCU_IGCR0_GEEN1_MASK            0x20000000
#define SCU_IGCR0_GEEN1_SHIFT           29
#define SCU_IGCR0_IGP1_MASK             0xc0000000
#define SCU_IGCR0_IGP1_SHIFT            30



/****************** Masks for SCU_IGCR1_t **********************/
/*
   SCU_IGCR1             "Interrupt Gating Register 1"
*/
/**********************************************************/

#define SCU_IGCR1_MASK                  0xe30fe30f
#define SCU_IGCR1_IPEN20_MASK           0x00000001
#define SCU_IGCR1_IPEN20_SHIFT          0
#define SCU_IGCR1_IPEN21_MASK           0x00000002
#define SCU_IGCR1_IPEN21_SHIFT          1
#define SCU_IGCR1_IPEN22_MASK           0x00000004
#define SCU_IGCR1_IPEN22_SHIFT          2
#define SCU_IGCR1_IPEN23_MASK           0x00000008
#define SCU_IGCR1_IPEN23_SHIFT          3
#define SCU_IGCR1_ISS2_MASK             0x00000300
#define SCU_IGCR1_ISS2_SHIFT            8
#define SCU_IGCR1_GEEN2_MASK            0x00002000
#define SCU_IGCR1_GEEN2_SHIFT           13
#define SCU_IGCR1_IGP2_MASK             0x0000c000
#define SCU_IGCR1_IGP2_SHIFT            14
#define SCU_IGCR1_IPEN30_MASK           0x00010000
#define SCU_IGCR1_IPEN30_SHIFT          16
#define SCU_IGCR1_IPEN31_MASK           0x00020000
#define SCU_IGCR1_IPEN31_SHIFT          17
#define SCU_IGCR1_IPEN32_MASK           0x00040000
#define SCU_IGCR1_IPEN32_SHIFT          18
#define SCU_IGCR1_IPEN33_MASK           0x00080000
#define SCU_IGCR1_IPEN33_SHIFT          19
#define SCU_IGCR1_ISS3_MASK             0x03000000
#define SCU_IGCR1_ISS3_SHIFT            24
#define SCU_IGCR1_GEEN3_MASK            0x20000000
#define SCU_IGCR1_GEEN3_SHIFT           29
#define SCU_IGCR1_IGP3_MASK             0xc0000000
#define SCU_IGCR1_IGP3_SHIFT            30



/****************** Masks for SCU_IN_t **********************/
/*
   SCU_IN                "Input Register"
*/
/**********************************************************/

#define SCU_IN_MASK                     0x00000003
#define SCU_IN_P0_MASK                  0x00000001
#define SCU_IN_P0_SHIFT                 0
#define SCU_IN_P1_MASK                  0x00000002
#define SCU_IN_P1_SHIFT                 1



/****************** Masks for SCU_INTCLR_t **********************/
/*
   SCU_INTCLR            "Interrupt Clear Register"
*/
/**********************************************************/

#define SCU_INTCLR_MASK                 0x000000ff
#define SCU_INTCLR_WDTI_MASK            0x00000001
#define SCU_INTCLR_WDTI_SHIFT           0
#define SCU_INTCLR_ERUI0_MASK           0x00000002
#define SCU_INTCLR_ERUI0_SHIFT          1
#define SCU_INTCLR_ERUI1_MASK           0x00000004
#define SCU_INTCLR_ERUI1_SHIFT          2
#define SCU_INTCLR_ERUI2_MASK           0x00000008
#define SCU_INTCLR_ERUI2_SHIFT          3
#define SCU_INTCLR_ERUI3_MASK           0x00000010
#define SCU_INTCLR_ERUI3_SHIFT          4
#define SCU_INTCLR_FL0I_MASK            0x00000020
#define SCU_INTCLR_FL0I_SHIFT           5
#define SCU_INTCLR_FL1I_MASK            0x00000040
#define SCU_INTCLR_FL1I_SHIFT           6
#define SCU_INTCLR_DTSI_MASK            0x00000080
#define SCU_INTCLR_DTSI_SHIFT           7



/****************** Masks for SCU_INTDIS_t **********************/
/*
   SCU_INTDIS            "Interrupt Disable Register"
*/
/**********************************************************/

#define SCU_INTDIS_MASK                 0x000000ff
#define SCU_INTDIS_WDTI_MASK            0x00000001
#define SCU_INTDIS_WDTI_SHIFT           0
#define SCU_INTDIS_ERUI0_MASK           0x00000002
#define SCU_INTDIS_ERUI0_SHIFT          1
#define SCU_INTDIS_ERUI1_MASK           0x00000004
#define SCU_INTDIS_ERUI1_SHIFT          2
#define SCU_INTDIS_ERUI2_MASK           0x00000008
#define SCU_INTDIS_ERUI2_SHIFT          3
#define SCU_INTDIS_ERUI3_MASK           0x00000010
#define SCU_INTDIS_ERUI3_SHIFT          4
#define SCU_INTDIS_FL0I_MASK            0x00000020
#define SCU_INTDIS_FL0I_SHIFT           5
#define SCU_INTDIS_FL1I_MASK            0x00000040
#define SCU_INTDIS_FL1I_SHIFT           6
#define SCU_INTDIS_DTSI_MASK            0x00000080
#define SCU_INTDIS_DTSI_SHIFT           7



/****************** Masks for SCU_INTNP_t **********************/
/*
   SCU_INTNP             "Interrupt Node Pointer Register"
*/
/**********************************************************/

#define SCU_INTNP_MASK                  0x0000ffff
#define SCU_INTNP_WDT_MASK              0x00000003
#define SCU_INTNP_WDT_SHIFT             0
#define SCU_INTNP_ERU0_MASK             0x0000000c
#define SCU_INTNP_ERU0_SHIFT            2
#define SCU_INTNP_ERU1_MASK             0x00000030
#define SCU_INTNP_ERU1_SHIFT            4
#define SCU_INTNP_ERU2_MASK             0x000000c0
#define SCU_INTNP_ERU2_SHIFT            6
#define SCU_INTNP_ERU3_MASK             0x00000300
#define SCU_INTNP_ERU3_SHIFT            8
#define SCU_INTNP_FL0_MASK              0x00000c00
#define SCU_INTNP_FL0_SHIFT             10
#define SCU_INTNP_FL1_MASK              0x00003000
#define SCU_INTNP_FL1_SHIFT             12
#define SCU_INTNP_DTS_MASK              0x0000c000
#define SCU_INTNP_DTS_SHIFT             14



/****************** Masks for SCU_INTSET_t **********************/
/*
   SCU_INTSET            "Interrupt Set Register"
*/
/**********************************************************/

#define SCU_INTSET_MASK                 0x000000ff
#define SCU_INTSET_WDTI_MASK            0x00000001
#define SCU_INTSET_WDTI_SHIFT           0
#define SCU_INTSET_ERUI0_MASK           0x00000002
#define SCU_INTSET_ERUI0_SHIFT          1
#define SCU_INTSET_ERUI1_MASK           0x00000004
#define SCU_INTSET_ERUI1_SHIFT          2
#define SCU_INTSET_ERUI2_MASK           0x00000008
#define SCU_INTSET_ERUI2_SHIFT          3
#define SCU_INTSET_ERUI3_MASK           0x00000010
#define SCU_INTSET_ERUI3_SHIFT          4
#define SCU_INTSET_FL0I_MASK            0x00000020
#define SCU_INTSET_FL0I_SHIFT           5
#define SCU_INTSET_FL1I_MASK            0x00000040
#define SCU_INTSET_FL1I_SHIFT           6
#define SCU_INTSET_DTSI_MASK            0x00000080
#define SCU_INTSET_DTSI_SHIFT           7



/****************** Masks for SCU_INTSTAT_t **********************/
/*
   SCU_INTSTAT           "Interrupt Status Register"
*/
/**********************************************************/

#define SCU_INTSTAT_MASK                0x000000ff
#define SCU_INTSTAT_WDTI_MASK           0x00000001
#define SCU_INTSTAT_WDTI_SHIFT          0
#define SCU_INTSTAT_ERUI0_MASK          0x00000002
#define SCU_INTSTAT_ERUI0_SHIFT         1
#define SCU_INTSTAT_ERUI1_MASK          0x00000004
#define SCU_INTSTAT_ERUI1_SHIFT         2
#define SCU_INTSTAT_ERUI2_MASK          0x00000008
#define SCU_INTSTAT_ERUI2_SHIFT         3
#define SCU_INTSTAT_ERUI3_MASK          0x00000010
#define SCU_INTSTAT_ERUI3_SHIFT         4
#define SCU_INTSTAT_FL0I_MASK           0x00000020
#define SCU_INTSTAT_FL0I_SHIFT          5
#define SCU_INTSTAT_FL1I_MASK           0x00000040
#define SCU_INTSTAT_FL1I_SHIFT          6
#define SCU_INTSTAT_DTSI_MASK           0x00000080
#define SCU_INTSTAT_DTSI_SHIFT          7



/****************** Masks for SCU_IOCR_t **********************/
/*
   SCU_IOCR              "Input/Output Control Register"
*/
/**********************************************************/

#define SCU_IOCR_MASK                   0x0000f0f0
#define SCU_IOCR_PC0_MASK               0x000000f0
#define SCU_IOCR_PC0_SHIFT              4
#define SCU_IOCR_PC1_MASK               0x0000f000
#define SCU_IOCR_PC1_SHIFT              12



/****************** Masks for SCU_MANID_t **********************/
/*
   SCU_MANID             "Manufacturer Identification Register"
*/
/**********************************************************/

#define SCU_MANID_MASK                  0x0000ffff
#define SCU_MANID_DEPT_MASK             0x0000001f
#define SCU_MANID_DEPT_SHIFT            0
#define SCU_MANID_MANUF_MASK            0x0000ffe0
#define SCU_MANID_MANUF_SHIFT           5



/****************** Masks for SCU_OMR_t **********************/
/*
   SCU_OMR               "Output Modification Register"
*/
/**********************************************************/

#define SCU_OMR_MASK                    0x00030003
#define SCU_OMR_PS0_MASK                0x00000001
#define SCU_OMR_PS0_SHIFT               0
#define SCU_OMR_PS1_MASK                0x00000002
#define SCU_OMR_PS1_SHIFT               1
#define SCU_OMR_PR0_MASK                0x00010000
#define SCU_OMR_PR0_SHIFT               16
#define SCU_OMR_PR1_MASK                0x00020000
#define SCU_OMR_PR1_SHIFT               17



/****************** Masks for SCU_OSCCON_t **********************/
/*
   SCU_OSCCON            "OSC Control Register"
*/
/**********************************************************/

#define SCU_OSCCON_MASK                 0x001f0ffe
#define SCU_OSCCON_PLLLV_MASK           0x00000002
#define SCU_OSCCON_PLLLV_SHIFT          1
#define SCU_OSCCON_OSCRES_MASK          0x00000004
#define SCU_OSCCON_OSCRES_SHIFT         2
#define SCU_OSCCON_GAINSEL_MASK         0x00000018
#define SCU_OSCCON_GAINSEL_SHIFT        3
#define SCU_OSCCON_MODE_MASK            0x00000060
#define SCU_OSCCON_MODE_SHIFT           5
#define SCU_OSCCON_SHBY_MASK            0x00000080
#define SCU_OSCCON_SHBY_SHIFT           7
#define SCU_OSCCON_PLLHV_MASK           0x00000100
#define SCU_OSCCON_PLLHV_SHIFT          8
#define SCU_OSCCON_PLLSP_MASK           0x00000200
#define SCU_OSCCON_PLLSP_SHIFT          9
#define SCU_OSCCON_X1D_MASK             0x00000400
#define SCU_OSCCON_X1D_SHIFT            10
#define SCU_OSCCON_X1DEN_MASK           0x00000800
#define SCU_OSCCON_X1DEN_SHIFT          11
#define SCU_OSCCON_OSCVAL_MASK          0x001f0000
#define SCU_OSCCON_OSCVAL_SHIFT         16



/****************** Masks for SCU_OUT_t **********************/
/*
   SCU_OUT               "Output Register"
*/
/**********************************************************/

#define SCU_OUT_MASK                    0x00000003
#define SCU_OUT_P0_MASK                 0x00000001
#define SCU_OUT_P0_SHIFT                0
#define SCU_OUT_P1_MASK                 0x00000002
#define SCU_OUT_P1_SHIFT                1



/****************** Masks for SCU_PDRR_t **********************/
/*
   SCU_PDRR              "Pattern Detection Result Register"
*/
/**********************************************************/

#define SCU_PDRR_MASK                   0x0000000f
#define SCU_PDRR_PDR0_MASK              0x00000001
#define SCU_PDRR_PDR0_SHIFT             0
#define SCU_PDRR_PDR1_MASK              0x00000002
#define SCU_PDRR_PDR1_SHIFT             1
#define SCU_PDRR_PDR2_MASK              0x00000004
#define SCU_PDRR_PDR2_SHIFT             2
#define SCU_PDRR_PDR3_MASK              0x00000008
#define SCU_PDRR_PDR3_SHIFT             3



/****************** Masks for SCU_PLLCON0_t **********************/
/*
   SCU_PLLCON0           "PLL Configuration 0 Register"
*/
/**********************************************************/

#define SCU_PLLCON0_MASK                0x0f05fe73
#define SCU_PLLCON0_VCOBYP_MASK         0x00000001
#define SCU_PLLCON0_VCOBYP_SHIFT        0
#define SCU_PLLCON0_VCOPWD_MASK         0x00000002
#define SCU_PLLCON0_VCOPWD_SHIFT        1
#define SCU_PLLCON0_SETFINDIS_MASK      0x00000010
#define SCU_PLLCON0_SETFINDIS_SHIFT     4
#define SCU_PLLCON0_CLRFINDIS_MASK      0x00000020
#define SCU_PLLCON0_CLRFINDIS_SHIFT     5
#define SCU_PLLCON0_OSCDISCDIS_MASK     0x00000040
#define SCU_PLLCON0_OSCDISCDIS_SHIFT    6
#define SCU_PLLCON0_NDIV_MASK           0x0000fe00
#define SCU_PLLCON0_NDIV_SHIFT          9
#define SCU_PLLCON0_PLLPWD_MASK         0x00010000
#define SCU_PLLCON0_PLLPWD_SHIFT        16
#define SCU_PLLCON0_RESLD_MASK          0x00040000
#define SCU_PLLCON0_RESLD_SHIFT         18
#define SCU_PLLCON0_PDIV_MASK           0x0f000000
#define SCU_PLLCON0_PDIV_SHIFT          24



/****************** Masks for SCU_PLLCON1_t **********************/
/*
   SCU_PLLCON1           "PLL Configuration 1 Register"
*/
/**********************************************************/

#define SCU_PLLCON1_MASK                0x007f007f
#define SCU_PLLCON1_K2DIV_MASK          0x0000007f
#define SCU_PLLCON1_K2DIV_SHIFT         0
#define SCU_PLLCON1_K1DIV_MASK          0x007f0000
#define SCU_PLLCON1_K1DIV_SHIFT         16



/****************** Masks for SCU_PLLERAYCON0_t **********************/
/*
   SCU_PLLERAYCON0       "PLL_ERAY Configuration 0 Register"
*/
/**********************************************************/

#define SCU_PLLERAYCON0_MASK            0x00053e73
#define SCU_PLLERAYCON0_VCOBYP_MASK     0x00000001
#define SCU_PLLERAYCON0_VCOBYP_SHIFT    0
#define SCU_PLLERAYCON0_VCOPWD_MASK     0x00000002
#define SCU_PLLERAYCON0_VCOPWD_SHIFT    1
#define SCU_PLLERAYCON0_SETFINDIS_MASK  0x00000010
#define SCU_PLLERAYCON0_SETFINDIS_SHIFT 4
#define SCU_PLLERAYCON0_CLRFINDIS_MASK  0x00000020
#define SCU_PLLERAYCON0_CLRFINDIS_SHIFT 5
#define SCU_PLLERAYCON0_OSCDISCDIS_MASK 0x00000040
#define SCU_PLLERAYCON0_OSCDISCDIS_SHIFT 6
#define SCU_PLLERAYCON0_NDIV_MASK       0x00003e00
#define SCU_PLLERAYCON0_NDIV_SHIFT      9
#define SCU_PLLERAYCON0_PLLPWD_MASK     0x00010000
#define SCU_PLLERAYCON0_PLLPWD_SHIFT    16
#define SCU_PLLERAYCON0_RESLD_MASK      0x00040000
#define SCU_PLLERAYCON0_RESLD_SHIFT     18



/****************** Masks for SCU_PLLERAYCON1_t **********************/
/*
   SCU_PLLERAYCON1       "PLL_ERAY Configuration 1 Register"
*/
/**********************************************************/

#define SCU_PLLERAYCON1_MASK            0x0000000f
#define SCU_PLLERAYCON1_K2DIV_MASK      0x0000000f
#define SCU_PLLERAYCON1_K2DIV_SHIFT     0



/****************** Masks for SCU_PLLERAYSTAT_t **********************/
/*
   SCU_PLLERAYSTAT       "PLL_ERAY Status Register"
*/
/**********************************************************/

#define SCU_PLLERAYSTAT_MASK            0x0000002e
#define SCU_PLLERAYSTAT_PWDSTAT_MASK    0x00000002
#define SCU_PLLERAYSTAT_PWDSTAT_SHIFT   1
#define SCU_PLLERAYSTAT_VCOLOCK_MASK    0x00000004
#define SCU_PLLERAYSTAT_VCOLOCK_SHIFT   2
#define SCU_PLLERAYSTAT_FINDIS_MASK     0x00000008
#define SCU_PLLERAYSTAT_FINDIS_SHIFT    3
#define SCU_PLLERAYSTAT_K2RDY_MASK      0x00000020
#define SCU_PLLERAYSTAT_K2RDY_SHIFT     5



/****************** Masks for SCU_PLLSTAT_t **********************/
/*
   SCU_PLLSTAT           "PLL Status Register"
*/
/**********************************************************/

#define SCU_PLLSTAT_MASK                0x0000003f
#define SCU_PLLSTAT_VCOBYST_MASK        0x00000001
#define SCU_PLLSTAT_VCOBYST_SHIFT       0
#define SCU_PLLSTAT_PWDSTAT_MASK        0x00000002
#define SCU_PLLSTAT_PWDSTAT_SHIFT       1
#define SCU_PLLSTAT_VCOLOCK_MASK        0x00000004
#define SCU_PLLSTAT_VCOLOCK_SHIFT       2
#define SCU_PLLSTAT_FINDIS_MASK         0x00000008
#define SCU_PLLSTAT_FINDIS_SHIFT        3
#define SCU_PLLSTAT_K1RDY_MASK          0x00000010
#define SCU_PLLSTAT_K1RDY_SHIFT         4
#define SCU_PLLSTAT_K2RDY_MASK          0x00000020
#define SCU_PLLSTAT_K2RDY_SHIFT         5



/****************** Masks for SCU_PMCSR_t **********************/
/*
   SCU_PMCSR             "Power Management Control and Status Register"
*/
/**********************************************************/

#define SCU_PMCSR_MASK                  0x00000703
#define SCU_PMCSR_REQSLP_MASK           0x00000003
#define SCU_PMCSR_REQSLP_SHIFT          0
#define SCU_PMCSR_PMST_MASK             0x00000700
#define SCU_PMCSR_PMST_SHIFT            8



/****************** Masks for SCU_RSTCNTCON_t **********************/
/*
   SCU_RSTCNTCON         "Reset Counter Control Register"
*/
/**********************************************************/

#define SCU_RSTCNTCON_MASK              0xffffffff
#define SCU_RSTCNTCON_RELSA_MASK        0x0000ffff
#define SCU_RSTCNTCON_RELSA_SHIFT       0
#define SCU_RSTCNTCON_RELD_MASK         0xffff0000
#define SCU_RSTCNTCON_RELD_SHIFT        16



/****************** Masks for SCU_RSTCON_t **********************/
/*
   SCU_RSTCON            "Reset Configuration Register"
*/
/**********************************************************/

#define SCU_RSTCON_MASK                 0x000003cf
#define SCU_RSTCON_ESR0_MASK            0x00000003
#define SCU_RSTCON_ESR0_SHIFT           0
#define SCU_RSTCON_ESR1_MASK            0x0000000c
#define SCU_RSTCON_ESR1_SHIFT           2
#define SCU_RSTCON_WDT_MASK             0x000000c0
#define SCU_RSTCON_WDT_SHIFT            6
#define SCU_RSTCON_SW_MASK              0x00000300
#define SCU_RSTCON_SW_SHIFT             8



/****************** Masks for SCU_RSTSTAT_t **********************/
/*
   SCU_RSTSTAT           "Reset Status Register"
*/
/**********************************************************/

#define SCU_RSTSTAT_MASK                0x003f001b
#define SCU_RSTSTAT_ESR0_MASK           0x00000001
#define SCU_RSTSTAT_ESR0_SHIFT          0
#define SCU_RSTSTAT_ESR1_MASK           0x00000002
#define SCU_RSTSTAT_ESR1_SHIFT          1
#define SCU_RSTSTAT_WDT_MASK            0x00000008
#define SCU_RSTSTAT_WDT_SHIFT           3
#define SCU_RSTSTAT_SW_MASK             0x00000010
#define SCU_RSTSTAT_SW_SHIFT            4
#define SCU_RSTSTAT_PORST_MASK          0x00010000
#define SCU_RSTSTAT_PORST_SHIFT         16
#define SCU_RSTSTAT_OCDS_MASK           0x00020000
#define SCU_RSTSTAT_OCDS_SHIFT          17
#define SCU_RSTSTAT_CB0_MASK            0x00040000
#define SCU_RSTSTAT_CB0_SHIFT           18
#define SCU_RSTSTAT_CB1_MASK            0x00080000
#define SCU_RSTSTAT_CB1_SHIFT           19
#define SCU_RSTSTAT_CB3_MASK            0x00100000
#define SCU_RSTSTAT_CB3_SHIFT           20
#define SCU_RSTSTAT_TP_MASK             0x00200000
#define SCU_RSTSTAT_TP_SHIFT            21



/****************** Masks for SCU_RTID_t **********************/
/*
   SCU_RTID              "Redesign Tracing Identification Register"
*/
/**********************************************************/

#define SCU_RTID_MASK                   0x0000ffff
#define SCU_RTID_RT0_MASK               0x00000001
#define SCU_RTID_RT0_SHIFT              0
#define SCU_RTID_RT1_MASK               0x00000002
#define SCU_RTID_RT1_SHIFT              1
#define SCU_RTID_RT2_MASK               0x00000004
#define SCU_RTID_RT2_SHIFT              2
#define SCU_RTID_RT3_MASK               0x00000008
#define SCU_RTID_RT3_SHIFT              3
#define SCU_RTID_RT4_MASK               0x00000010
#define SCU_RTID_RT4_SHIFT              4
#define SCU_RTID_RT5_MASK               0x00000020
#define SCU_RTID_RT5_SHIFT              5
#define SCU_RTID_RT6_MASK               0x00000040
#define SCU_RTID_RT6_SHIFT              6
#define SCU_RTID_RT7_MASK               0x00000080
#define SCU_RTID_RT7_SHIFT              7
#define SCU_RTID_RT8_MASK               0x00000100
#define SCU_RTID_RT8_SHIFT              8
#define SCU_RTID_RT9_MASK               0x00000200
#define SCU_RTID_RT9_SHIFT              9
#define SCU_RTID_RT10_MASK              0x00000400
#define SCU_RTID_RT10_SHIFT             10
#define SCU_RTID_RT11_MASK              0x00000800
#define SCU_RTID_RT11_SHIFT             11
#define SCU_RTID_RT12_MASK              0x00001000
#define SCU_RTID_RT12_SHIFT             12
#define SCU_RTID_RT13_MASK              0x00002000
#define SCU_RTID_RT13_SHIFT             13
#define SCU_RTID_RT14_MASK              0x00004000
#define SCU_RTID_RT14_SHIFT             14
#define SCU_RTID_RT15_MASK              0x00008000
#define SCU_RTID_RT15_SHIFT             15



/****************** Masks for SCU_STCON_t **********************/
/*
   SCU_STCON             "Start-up Configuration Register"
*/
/**********************************************************/

#define SCU_STCON_MASK                  0x0000e0ff
#define SCU_STCON_HWCFG_MASK            0x000000ff
#define SCU_STCON_HWCFG_SHIFT           0
#define SCU_STCON_SFCBAE_MASK           0x00002000
#define SCU_STCON_SFCBAE_SHIFT          13
#define SCU_STCON_CFCBAE_MASK           0x00004000
#define SCU_STCON_CFCBAE_SHIFT          14
#define SCU_STCON_STP_MASK              0x00008000
#define SCU_STCON_STP_SHIFT             15



/****************** Masks for SCU_STSTAT_t **********************/
/*
   SCU_STSTAT            "Start-up Status Register"
*/
/**********************************************************/

#define SCU_STSTAT_MASK                 0x000f80ff
#define SCU_STSTAT_HWCFG_MASK           0x000000ff
#define SCU_STSTAT_HWCFG_SHIFT          0
#define SCU_STSTAT_Mode_MASK            0x00008000
#define SCU_STSTAT_Mode_SHIFT           15
#define SCU_STSTAT_FCBAE_MASK           0x00010000
#define SCU_STSTAT_FCBAE_SHIFT          16
#define SCU_STSTAT_LUDIS_MASK           0x00020000
#define SCU_STSTAT_LUDIS_SHIFT          17
#define SCU_STSTAT_EXTBEN_MASK          0x00040000
#define SCU_STSTAT_EXTBEN_SHIFT         18
#define SCU_STSTAT_TRSTL_MASK           0x00080000
#define SCU_STSTAT_TRSTL_SHIFT          19



/****************** Masks for SCU_SWRSTCON_t **********************/
/*
   SCU_SWRSTCON          "Software Reset Configuration Register"
*/
/**********************************************************/

#define SCU_SWRSTCON_MASK               0x0000ff03
#define SCU_SWRSTCON_SWBOOT_MASK        0x00000001
#define SCU_SWRSTCON_SWBOOT_SHIFT       0
#define SCU_SWRSTCON_SWRSTREQ_MASK      0x00000002
#define SCU_SWRSTCON_SWRSTREQ_SHIFT     1
#define SCU_SWRSTCON_SWCFG_MASK         0x0000ff00
#define SCU_SWRSTCON_SWCFG_SHIFT        8



/****************** Masks for SCU_SYSCON_t **********************/
/*
   SCU_SYSCON            "System Control Register"
*/
/**********************************************************/

#define SCU_SYSCON_MASK                 0x0000003f
#define SCU_SYSCON_CCTRIG0_MASK         0x00000001
#define SCU_SYSCON_CCTRIG0_SHIFT        0
#define SCU_SYSCON_CCTRIG1_MASK         0x00000002
#define SCU_SYSCON_CCTRIG1_SHIFT        1
#define SCU_SYSCON_GPTAIS_MASK          0x0000000c
#define SCU_SYSCON_GPTAIS_SHIFT         2
#define SCU_SYSCON_SETLUDIS_MASK        0x00000010
#define SCU_SYSCON_SETLUDIS_SHIFT       4
#define SCU_SYSCON_SETEXTBEN_MASK       0x00000020
#define SCU_SYSCON_SETEXTBEN_SHIFT      5



/****************** Masks for SCU_TRAPCLR_t **********************/
/*
   SCU_TRAPCLR           "Trap Clear Register"
*/
/**********************************************************/

#define SCU_TRAPCLR_MASK                0x000003fb
#define SCU_TRAPCLR_ESR0T_MASK          0x00000001
#define SCU_TRAPCLR_ESR0T_SHIFT         0
#define SCU_TRAPCLR_ESR1T_MASK          0x00000002
#define SCU_TRAPCLR_ESR1T_SHIFT         1
#define SCU_TRAPCLR_WDTT_MASK           0x00000008
#define SCU_TRAPCLR_WDTT_SHIFT          3
#define SCU_TRAPCLR_ECCT_MASK           0x00000010
#define SCU_TRAPCLR_ECCT_SHIFT          4
#define SCU_TRAPCLR_OSCLWDTT_MASK       0x00000020
#define SCU_TRAPCLR_OSCLWDTT_SHIFT      5
#define SCU_TRAPCLR_OSCHWDTT_MASK       0x00000040
#define SCU_TRAPCLR_OSCHWDTT_SHIFT      6
#define SCU_TRAPCLR_OSCSPWDTT_MASK      0x00000080
#define SCU_TRAPCLR_OSCSPWDTT_SHIFT     7
#define SCU_TRAPCLR_SYSVCOLCKT_MASK     0x00000100
#define SCU_TRAPCLR_SYSVCOLCKT_SHIFT    8
#define SCU_TRAPCLR_ERAYVCOLCKT_MASK    0x00000200
#define SCU_TRAPCLR_ERAYVCOLCKT_SHIFT   9



/****************** Masks for SCU_TRAPDIS_t **********************/
/*
   SCU_TRAPDIS           "Trap Disable Register"
*/
/**********************************************************/

#define SCU_TRAPDIS_MASK                0x000003fb
#define SCU_TRAPDIS_ESR0T_MASK          0x00000001
#define SCU_TRAPDIS_ESR0T_SHIFT         0
#define SCU_TRAPDIS_ESR1T_MASK          0x00000002
#define SCU_TRAPDIS_ESR1T_SHIFT         1
#define SCU_TRAPDIS_WDTT_MASK           0x00000008
#define SCU_TRAPDIS_WDTT_SHIFT          3
#define SCU_TRAPDIS_ECCT_MASK           0x00000010
#define SCU_TRAPDIS_ECCT_SHIFT          4
#define SCU_TRAPDIS_OSCLWDTT_MASK       0x00000020
#define SCU_TRAPDIS_OSCLWDTT_SHIFT      5
#define SCU_TRAPDIS_OSCHWDTT_MASK       0x00000040
#define SCU_TRAPDIS_OSCHWDTT_SHIFT      6
#define SCU_TRAPDIS_OSCSPWDTT_MASK      0x00000080
#define SCU_TRAPDIS_OSCSPWDTT_SHIFT     7
#define SCU_TRAPDIS_SYSVCOLCKT_MASK     0x00000100
#define SCU_TRAPDIS_SYSVCOLCKT_SHIFT    8
#define SCU_TRAPDIS_ERAYVCOLCKT_MASK    0x00000200
#define SCU_TRAPDIS_ERAYVCOLCKT_SHIFT   9



/****************** Masks for SCU_TRAPSET_t **********************/
/*
   SCU_TRAPSET           "Trap Set Register"
*/
/**********************************************************/

#define SCU_TRAPSET_MASK                0x000003fb
#define SCU_TRAPSET_ESR0T_MASK          0x00000001
#define SCU_TRAPSET_ESR0T_SHIFT         0
#define SCU_TRAPSET_ESR1T_MASK          0x00000002
#define SCU_TRAPSET_ESR1T_SHIFT         1
#define SCU_TRAPSET_WDTT_MASK           0x00000008
#define SCU_TRAPSET_WDTT_SHIFT          3
#define SCU_TRAPSET_ECCT_MASK           0x00000010
#define SCU_TRAPSET_ECCT_SHIFT          4
#define SCU_TRAPSET_OSCLWDTT_MASK       0x00000020
#define SCU_TRAPSET_OSCLWDTT_SHIFT      5
#define SCU_TRAPSET_OSCHWDTT_MASK       0x00000040
#define SCU_TRAPSET_OSCHWDTT_SHIFT      6
#define SCU_TRAPSET_OSCSPWDTT_MASK      0x00000080
#define SCU_TRAPSET_OSCSPWDTT_SHIFT     7
#define SCU_TRAPSET_SYSVCOLCKT_MASK     0x00000100
#define SCU_TRAPSET_SYSVCOLCKT_SHIFT    8
#define SCU_TRAPSET_ERAYVCOLCKT_MASK    0x00000200
#define SCU_TRAPSET_ERAYVCOLCKT_SHIFT   9



/****************** Masks for SCU_TRAPSTAT_t **********************/
/*
   SCU_TRAPSTAT          "Trap Status Register"
*/
/**********************************************************/

#define SCU_TRAPSTAT_MASK               0x000003fb
#define SCU_TRAPSTAT_ESR0T_MASK         0x00000001
#define SCU_TRAPSTAT_ESR0T_SHIFT        0
#define SCU_TRAPSTAT_ESR1T_MASK         0x00000002
#define SCU_TRAPSTAT_ESR1T_SHIFT        1
#define SCU_TRAPSTAT_WDTT_MASK          0x00000008
#define SCU_TRAPSTAT_WDTT_SHIFT         3
#define SCU_TRAPSTAT_ECCT_MASK          0x00000010
#define SCU_TRAPSTAT_ECCT_SHIFT         4
#define SCU_TRAPSTAT_OSCLWDTT_MASK      0x00000020
#define SCU_TRAPSTAT_OSCLWDTT_SHIFT     5
#define SCU_TRAPSTAT_OSCHWDTT_MASK      0x00000040
#define SCU_TRAPSTAT_OSCHWDTT_SHIFT     6
#define SCU_TRAPSTAT_OSCSPWDTT_MASK     0x00000080
#define SCU_TRAPSTAT_OSCSPWDTT_SHIFT    7
#define SCU_TRAPSTAT_SYSVCOLCKT_MASK    0x00000100
#define SCU_TRAPSTAT_SYSVCOLCKT_SHIFT   8
#define SCU_TRAPSTAT_ERAYVCOLCKT_MASK   0x00000200
#define SCU_TRAPSTAT_ERAYVCOLCKT_SHIFT  9



/****************** Masks for WDT_CON0_t **********************/
/*
   WDT_CON0              "WDT Control Register 0"
*/
/**********************************************************/

#define WDT_CON0_MASK                   0xffffffff
#define WDT_CON0_ENDINIT_MASK           0x00000001
#define WDT_CON0_ENDINIT_SHIFT          0
#define WDT_CON0_LCK_MASK               0x00000002
#define WDT_CON0_LCK_SHIFT              1
#define WDT_CON0_HPW0_MASK              0x0000000c
#define WDT_CON0_HPW0_SHIFT             2
#define WDT_CON0_HPW1_MASK              0x000000f0
#define WDT_CON0_HPW1_SHIFT             4
#define WDT_CON0_PW_MASK                0x0000ff00
#define WDT_CON0_PW_SHIFT               8
#define WDT_CON0_REL_MASK               0xffff0000
#define WDT_CON0_REL_SHIFT              16



/****************** Masks for WDT_CON1_t **********************/
/*
   WDT_CON1              "WDT Control Register 1"
*/
/**********************************************************/

#define WDT_CON1_MASK                   0x0000000d
#define WDT_CON1_CLRIRF_MASK            0x00000001
#define WDT_CON1_CLRIRF_SHIFT           0
#define WDT_CON1_IR_MASK                0x00000004
#define WDT_CON1_IR_SHIFT               2
#define WDT_CON1_DR_MASK                0x00000008
#define WDT_CON1_DR_SHIFT               3



/****************** Masks for WDT_SR_t **********************/
/*
   WDT_SR                "WDT Status Register"
*/
/**********************************************************/

#define WDT_SR_MASK                     0xffff003f
#define WDT_SR_AE_MASK                  0x00000001
#define WDT_SR_AE_SHIFT                 0
#define WDT_SR_OE_MASK                  0x00000002
#define WDT_SR_OE_SHIFT                 1
#define WDT_SR_IS_MASK                  0x00000004
#define WDT_SR_IS_SHIFT                 2
#define WDT_SR_DS_MASK                  0x00000008
#define WDT_SR_DS_SHIFT                 3
#define WDT_SR_TO_MASK                  0x00000010
#define WDT_SR_TO_SHIFT                 4
#define WDT_SR_PR_MASK                  0x00000020
#define WDT_SR_PR_SHIFT                 5
#define WDT_SR_TIM_MASK                 0xffff0000
#define WDT_SR_TIM_SHIFT                16




#endif /* _HAVE_TRICORE_SCU_MASKS_H_ */

