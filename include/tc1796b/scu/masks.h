/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SCU_MASKS_H_
#define _HAVE_TRICORE_SCU_MASKS_H_


/****************** Masks for CHIPID_t **********************/
/*
   CHIPID                "Chip Identification Register"
*/
/**********************************************************/

#define CHIPID_MASK                     0x0000ffff
#define CHIPID_CHREV_MASK               0x000000ff
#define CHIPID_CHREV_SHIFT              0
#define CHIPID_CHID_MASK                0x0000ff00
#define CHIPID_CHID_SHIFT               8



/****************** Masks for EIFR_t **********************/
/*
   EIFR                  "External Input Flag Register"
*/
/**********************************************************/

#define EIFR_MASK                       0x0000000f
#define EIFR_INTF0_MASK                 0x00000001
#define EIFR_INTF0_SHIFT                0
#define EIFR_INTF1_MASK                 0x00000002
#define EIFR_INTF1_SHIFT                1
#define EIFR_INTF2_MASK                 0x00000004
#define EIFR_INTF2_SHIFT                2
#define EIFR_INTF3_MASK                 0x00000008
#define EIFR_INTF3_SHIFT                3



/****************** Masks for FMR_t **********************/
/*
   FMR                   "Flag Modification Register"
*/
/**********************************************************/

#define FMR_MASK                        0x000f000f
#define FMR_FS0_MASK                    0x00000001
#define FMR_FS0_SHIFT                   0
#define FMR_FS1_MASK                    0x00000002
#define FMR_FS1_SHIFT                   1
#define FMR_FS2_MASK                    0x00000004
#define FMR_FS2_SHIFT                   2
#define FMR_FS3_MASK                    0x00000008
#define FMR_FS3_SHIFT                   3
#define FMR_FC0_MASK                    0x00010000
#define FMR_FC0_SHIFT                   16
#define FMR_FC1_MASK                    0x00020000
#define FMR_FC1_SHIFT                   17
#define FMR_FC2_MASK                    0x00040000
#define FMR_FC2_SHIFT                   18
#define FMR_FC3_MASK                    0x00080000
#define FMR_FC3_SHIFT                   19



/****************** Masks for MANID_t **********************/
/*
   MANID                 "Manufacturer Identification Register"
*/
/**********************************************************/

#define MANID_MASK                      0x0000ffff
#define MANID_DEPT_MASK                 0x0000001f
#define MANID_DEPT_SHIFT                0
#define MANID_MANUF_MASK                0x0000ffe0
#define MANID_MANUF_SHIFT               5



/****************** Masks for NMISR_t **********************/
/*
   NMISR                 "NMI Status Register"
*/
/**********************************************************/

#define NMISR_MASK                      0x0000000f
#define NMISR_NMIEXT_MASK               0x00000001
#define NMISR_NMIEXT_SHIFT              0
#define NMISR_NMIPLL_MASK               0x00000002
#define NMISR_NMIPLL_SHIFT              1
#define NMISR_NMIWDT_MASK               0x00000004
#define NMISR_NMIWDT_SHIFT              2
#define NMISR_NMIPER_MASK               0x00000008
#define NMISR_NMIPER_SHIFT              3



/****************** Masks for OSC_CON_t **********************/
/*
   OSC_CON               "Oscillator Control Register"
*/
/**********************************************************/

#define OSC_CON_MASK                    0x00000017
#define OSC_CON_MOSC_MASK               0x00000001
#define OSC_CON_MOSC_SHIFT              0
#define OSC_CON_OSCR_MASK               0x00000002
#define OSC_CON_OSCR_SHIFT              1
#define OSC_CON_ORDRES_MASK             0x00000004
#define OSC_CON_ORDRES_SHIFT            2
#define OSC_CON_OGC_MASK                0x00000010
#define OSC_CON_OGC_SHIFT               4



/****************** Masks for PDRR_t **********************/
/*
   PDRR                  "Pattern Detection Result Register"
*/
/**********************************************************/

#define PDRR_MASK                       0x0000000f
#define PDRR_PDR0_MASK                  0x00000001
#define PDRR_PDR0_SHIFT                 0
#define PDRR_PDR1_MASK                  0x00000002
#define PDRR_PDR1_SHIFT                 1
#define PDRR_PDR2_MASK                  0x00000004
#define PDRR_PDR2_SHIFT                 2
#define PDRR_PDR3_MASK                  0x00000008
#define PDRR_PDR3_SHIFT                 3



/****************** Masks for PLL_CLC_t **********************/
/*
   PLL_CLC               "PLL Clock Control Register"
*/
/**********************************************************/

#define PLL_CLC_MASK                    0x217fefe7
#define PLL_CLC_LOCK_MASK               0x00000001
#define PLL_CLC_LOCK_SHIFT              0
#define PLL_CLC_RESLD_MASK              0x00000002
#define PLL_CLC_RESLD_SHIFT             1
#define PLL_CLC_SYSFS_MASK              0x00000004
#define PLL_CLC_SYSFS_SHIFT             2
#define PLL_CLC_VCOBYP_MASK             0x00000020
#define PLL_CLC_VCOBYP_SHIFT            5
#define PLL_CLC_VCOSEL_MASK             0x000000c0
#define PLL_CLC_VCOSEL_SHIFT            6
#define PLL_CLC_KDIV_MASK               0x00000f00
#define PLL_CLC_KDIV_SHIFT              8
#define PLL_CLC_PDIV_MASK               0x0000e000
#define PLL_CLC_PDIV_SHIFT              13
#define PLL_CLC_NDIV_MASK               0x007f0000
#define PLL_CLC_NDIV_SHIFT              16
#define PLL_CLC_OSCDISC_MASK            0x01000000
#define PLL_CLC_OSCDISC_SHIFT           24
#define PLL_CLC_BYPPIN_MASK             0x20000000
#define PLL_CLC_BYPPIN_SHIFT            29



/****************** Masks for PMG_CSR_t **********************/
/*
   PMG_CSR               "Power Management Control and Status Register"
*/
/**********************************************************/

#define PMG_CSR_MASK                    0x00000703
#define PMG_CSR_REQSLP_MASK             0x00000003
#define PMG_CSR_REQSLP_SHIFT            0
#define PMG_CSR_PMST_MASK               0x00000700
#define PMG_CSR_PMST_SHIFT              8



/****************** Masks for RST_REQ_t **********************/
/*
   RST_REQ               "Reset Request Register"
*/
/**********************************************************/

#define RST_REQ_MASK                    0x012f0005
#define RST_REQ_RRSTM_MASK              0x00000001
#define RST_REQ_RRSTM_SHIFT             0
#define RST_REQ_RREXT_MASK              0x00000004
#define RST_REQ_RREXT_SHIFT             2
#define RST_REQ_SWCFG_MASK              0x000f0000
#define RST_REQ_SWCFG_SHIFT             16
#define RST_REQ_SWBRKIN_MASK            0x00200000
#define RST_REQ_SWBRKIN_SHIFT           21
#define RST_REQ_SWBOOT_MASK             0x01000000
#define RST_REQ_SWBOOT_SHIFT            24



/****************** Masks for RST_SR_t **********************/
/*
   RST_SR                "Reset Status Register"
*/
/**********************************************************/

#define RST_SR_MASK                     0x786f0005
#define RST_SR_RSSTM_MASK               0x00000001
#define RST_SR_RSSTM_SHIFT              0
#define RST_SR_RSEXT_MASK               0x00000004
#define RST_SR_RSEXT_SHIFT              2
#define RST_SR_HWCFG_MASK               0x000f0000
#define RST_SR_HWCFG_SHIFT              16
#define RST_SR_HWBRKIN_MASK             0x00200000
#define RST_SR_HWBRKIN_SHIFT            21
#define RST_SR_TMPLS_MASK               0x00400000
#define RST_SR_TMPLS_SHIFT              22
#define RST_SR_PWORST_MASK              0x08000000
#define RST_SR_PWORST_SHIFT             27
#define RST_SR_HDRST_MASK               0x10000000
#define RST_SR_HDRST_SHIFT              28
#define RST_SR_SFTRST_MASK              0x20000000
#define RST_SR_SFTRST_SHIFT             29
#define RST_SR_WDTRST_MASK              0x40000000
#define RST_SR_WDTRST_SHIFT             30



/****************** Masks for RTID_t **********************/
/*
   RTID                  "Redesign Tracing Identification Register"
*/
/**********************************************************/

#define RTID_MASK                       0x0000ffff
#define RTID_RT0_MASK                   0x00000001
#define RTID_RT0_SHIFT                  0
#define RTID_RT1_MASK                   0x00000002
#define RTID_RT1_SHIFT                  1
#define RTID_RT2_MASK                   0x00000004
#define RTID_RT2_SHIFT                  2
#define RTID_RT3_MASK                   0x00000008
#define RTID_RT3_SHIFT                  3
#define RTID_RT4_MASK                   0x00000010
#define RTID_RT4_SHIFT                  4
#define RTID_RT5_MASK                   0x00000020
#define RTID_RT5_SHIFT                  5
#define RTID_RT6_MASK                   0x00000040
#define RTID_RT6_SHIFT                  6
#define RTID_RT7_MASK                   0x00000080
#define RTID_RT7_SHIFT                  7
#define RTID_RT8_MASK                   0x00000100
#define RTID_RT8_SHIFT                  8
#define RTID_RT9_MASK                   0x00000200
#define RTID_RT9_SHIFT                  9
#define RTID_RT10_MASK                  0x00000400
#define RTID_RT10_SHIFT                 10
#define RTID_RT11_MASK                  0x00000800
#define RTID_RT11_SHIFT                 11
#define RTID_RT12_MASK                  0x00001000
#define RTID_RT12_SHIFT                 12
#define RTID_RT13_MASK                  0x00002000
#define RTID_RT13_SHIFT                 13
#define RTID_RT14_MASK                  0x00004000
#define RTID_RT14_SHIFT                 14
#define RTID_RT15_MASK                  0x00008000
#define RTID_RT15_SHIFT                 15



/****************** Masks for SCU_CON_t **********************/
/*
   SCU_CON               "SCU Control Register"
*/
/**********************************************************/

#define SCU_CON_MASK                    0xffff0e7f
#define SCU_CON_FIEN_MASK               0x00000001
#define SCU_CON_FIEN_SHIFT              0
#define SCU_CON_CSEEN_MASK              0x00000002
#define SCU_CON_CSEEN_SHIFT             1
#define SCU_CON_CSOEN_MASK              0x00000004
#define SCU_CON_CSOEN_SHIFT             2
#define SCU_CON_CSGEN_MASK              0x00000008
#define SCU_CON_CSGEN_SHIFT             3
#define SCU_CON_EPUD_MASK               0x00000010
#define SCU_CON_EPUD_SHIFT              4
#define SCU_CON_NMIEN_MASK              0x00000020
#define SCU_CON_NMIEN_SHIFT             5
#define SCU_CON_AN7TM_MASK              0x00000040
#define SCU_CON_AN7TM_SHIFT             6
#define SCU_CON_DTSON_MASK              0x00000200
#define SCU_CON_DTSON_SHIFT             9
#define SCU_CON_LDEN_MASK               0x00000400
#define SCU_CON_LDEN_SHIFT              10
#define SCU_CON_RPARAV_MASK             0x00000800
#define SCU_CON_RPARAV_SHIFT            11
#define SCU_CON_SLSPDR_MASK             0x00010000
#define SCU_CON_SLSPDR_SHIFT            16
#define SCU_CON_SSC0PDR_MASK            0x00020000
#define SCU_CON_SSC0PDR_SHIFT           17
#define SCU_CON_GIN1S_MASK              0x000c0000
#define SCU_CON_GIN1S_SHIFT             18
#define SCU_CON_ZERO_MASK               0x00f00000
#define SCU_CON_ZERO_SHIFT              20
#define SCU_CON_ONE_MASK                0xff000000
#define SCU_CON_ONE_SHIFT               24



/****************** Masks for SCU_EMSR_t **********************/
/*
   SCU_EMSR              "SCU Emergency Stop Register"
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



/****************** Masks for SCU_ID_t **********************/
/*
   SCU_ID                "SCU Module Identification Register"
*/
/**********************************************************/

#define SCU_ID_MASK                     0x00000000



/****************** Masks for SCU_PETCR_t **********************/
/*
   SCU_PETCR             "SCU Parity Error Trap Control Register"
*/
/**********************************************************/

#define SCU_PETCR_MASK                  0x0000007f
#define SCU_PETCR_PEN0_MASK             0x00000001
#define SCU_PETCR_PEN0_SHIFT            0
#define SCU_PETCR_PEN1_MASK             0x00000002
#define SCU_PETCR_PEN1_SHIFT            1
#define SCU_PETCR_PEN2_MASK             0x00000004
#define SCU_PETCR_PEN2_SHIFT            2
#define SCU_PETCR_PEN3_MASK             0x00000008
#define SCU_PETCR_PEN3_SHIFT            3
#define SCU_PETCR_PEN4_MASK             0x00000010
#define SCU_PETCR_PEN4_SHIFT            4
#define SCU_PETCR_PEN5_MASK             0x00000020
#define SCU_PETCR_PEN5_SHIFT            5
#define SCU_PETCR_PEN6_MASK             0x00000040
#define SCU_PETCR_PEN6_SHIFT            6



/****************** Masks for SCU_PETSR_t **********************/
/*
   SCU_PETSR             "SCU Parity Error Trap Status Register"
*/
/**********************************************************/

#define SCU_PETSR_MASK                  0x0000007f
#define SCU_PETSR_PFL0_MASK             0x00000001
#define SCU_PETSR_PFL0_SHIFT            0
#define SCU_PETSR_PFL1_MASK             0x00000002
#define SCU_PETSR_PFL1_SHIFT            1
#define SCU_PETSR_PFL2_MASK             0x00000004
#define SCU_PETSR_PFL2_SHIFT            2
#define SCU_PETSR_PFL3_MASK             0x00000008
#define SCU_PETSR_PFL3_SHIFT            3
#define SCU_PETSR_PFL4_MASK             0x00000010
#define SCU_PETSR_PFL4_SHIFT            4
#define SCU_PETSR_PFL5_MASK             0x00000020
#define SCU_PETSR_PFL5_SHIFT            5
#define SCU_PETSR_PFL6_MASK             0x00000040
#define SCU_PETSR_PFL6_SHIFT            6



/****************** Masks for SCU_PTCON_t **********************/
/*
   SCU_PTCON             "SCU Pad Test Control Register"
*/
/**********************************************************/

#define SCU_PTCON_MASK                  0x8000ffff
#define SCU_PTCON_PTMLC_MASK            0x000000ff
#define SCU_PTCON_PTMLC_SHIFT           0
#define SCU_PTCON_ENOUT0_MASK           0x00000100
#define SCU_PTCON_ENOUT0_SHIFT          8
#define SCU_PTCON_ENOUT1_MASK           0x00000200
#define SCU_PTCON_ENOUT1_SHIFT          9
#define SCU_PTCON_ENOUT2_MASK           0x00000400
#define SCU_PTCON_ENOUT2_SHIFT          10
#define SCU_PTCON_ENOUT3_MASK           0x00000800
#define SCU_PTCON_ENOUT3_SHIFT          11
#define SCU_PTCON_RDSS0_MASK            0x00001000
#define SCU_PTCON_RDSS0_SHIFT           12
#define SCU_PTCON_RDSS1_MASK            0x00002000
#define SCU_PTCON_RDSS1_SHIFT           13
#define SCU_PTCON_RDSS2_MASK            0x00004000
#define SCU_PTCON_RDSS2_SHIFT           14
#define SCU_PTCON_RDSS3_MASK            0x00008000
#define SCU_PTCON_RDSS3_SHIFT           15
#define SCU_PTCON_PTMEN_MASK            0x80000000
#define SCU_PTCON_PTMEN_SHIFT           31



/****************** Masks for SCU_PTDAT0_t **********************/
/*
   SCU_PTDAT0            "SCU Pad Test Data Register 0"
*/
/**********************************************************/

#define SCU_PTDAT0_MASK                 0xffffffff
#define SCU_PTDAT0_A0_MASK              0x00000001
#define SCU_PTDAT0_A0_SHIFT             0
#define SCU_PTDAT0_A1_MASK              0x00000002
#define SCU_PTDAT0_A1_SHIFT             1
#define SCU_PTDAT0_A2_MASK              0x00000004
#define SCU_PTDAT0_A2_SHIFT             2
#define SCU_PTDAT0_A3_MASK              0x00000008
#define SCU_PTDAT0_A3_SHIFT             3
#define SCU_PTDAT0_A4_MASK              0x00000010
#define SCU_PTDAT0_A4_SHIFT             4
#define SCU_PTDAT0_A5_MASK              0x00000020
#define SCU_PTDAT0_A5_SHIFT             5
#define SCU_PTDAT0_A6_MASK              0x00000040
#define SCU_PTDAT0_A6_SHIFT             6
#define SCU_PTDAT0_A7_MASK              0x00000080
#define SCU_PTDAT0_A7_SHIFT             7
#define SCU_PTDAT0_A8_MASK              0x00000100
#define SCU_PTDAT0_A8_SHIFT             8
#define SCU_PTDAT0_A9_MASK              0x00000200
#define SCU_PTDAT0_A9_SHIFT             9
#define SCU_PTDAT0_A10_MASK             0x00000400
#define SCU_PTDAT0_A10_SHIFT            10
#define SCU_PTDAT0_A11_MASK             0x00000800
#define SCU_PTDAT0_A11_SHIFT            11
#define SCU_PTDAT0_A12_MASK             0x00001000
#define SCU_PTDAT0_A12_SHIFT            12
#define SCU_PTDAT0_A13_MASK             0x00002000
#define SCU_PTDAT0_A13_SHIFT            13
#define SCU_PTDAT0_A14_MASK             0x00004000
#define SCU_PTDAT0_A14_SHIFT            14
#define SCU_PTDAT0_A15_MASK             0x00008000
#define SCU_PTDAT0_A15_SHIFT            15
#define SCU_PTDAT0_A16_MASK             0x00010000
#define SCU_PTDAT0_A16_SHIFT            16
#define SCU_PTDAT0_A17_MASK             0x00020000
#define SCU_PTDAT0_A17_SHIFT            17
#define SCU_PTDAT0_A18_MASK             0x00040000
#define SCU_PTDAT0_A18_SHIFT            18
#define SCU_PTDAT0_A19_MASK             0x00080000
#define SCU_PTDAT0_A19_SHIFT            19
#define SCU_PTDAT0_A20_MASK             0x00100000
#define SCU_PTDAT0_A20_SHIFT            20
#define SCU_PTDAT0_A21_MASK             0x00200000
#define SCU_PTDAT0_A21_SHIFT            21
#define SCU_PTDAT0_A22_MASK             0x00400000
#define SCU_PTDAT0_A22_SHIFT            22
#define SCU_PTDAT0_A23_MASK             0x00800000
#define SCU_PTDAT0_A23_SHIFT            23
#define SCU_PTDAT0_BC0_MASK             0x01000000
#define SCU_PTDAT0_BC0_SHIFT            24
#define SCU_PTDAT0_BC1_MASK             0x02000000
#define SCU_PTDAT0_BC1_SHIFT            25
#define SCU_PTDAT0_BC2_MASK             0x04000000
#define SCU_PTDAT0_BC2_SHIFT            26
#define SCU_PTDAT0_BC3_MASK             0x08000000
#define SCU_PTDAT0_BC3_SHIFT            27
#define SCU_PTDAT0_RD_MASK              0x10000000
#define SCU_PTDAT0_RD_SHIFT             28
#define SCU_PTDAT0_RDWR_MASK            0x20000000
#define SCU_PTDAT0_RDWR_SHIFT           29
#define SCU_PTDAT0_ADV_MASK             0x40000000
#define SCU_PTDAT0_ADV_SHIFT            30
#define SCU_PTDAT0_MRW_MASK             0x80000000
#define SCU_PTDAT0_MRW_SHIFT            31



/****************** Masks for SCU_PTDAT1_t **********************/
/*
   SCU_PTDAT1            "SCU Pad Test Data Register 1"
*/
/**********************************************************/

#define SCU_PTDAT1_MASK                 0x7fffffff
#define SCU_PTDAT1_TR0_MASK             0x00000001
#define SCU_PTDAT1_TR0_SHIFT            0
#define SCU_PTDAT1_TR1_MASK             0x00000002
#define SCU_PTDAT1_TR1_SHIFT            1
#define SCU_PTDAT1_TR2_MASK             0x00000004
#define SCU_PTDAT1_TR2_SHIFT            2
#define SCU_PTDAT1_TR3_MASK             0x00000008
#define SCU_PTDAT1_TR3_SHIFT            3
#define SCU_PTDAT1_TR4_MASK             0x00000010
#define SCU_PTDAT1_TR4_SHIFT            4
#define SCU_PTDAT1_TR5_MASK             0x00000020
#define SCU_PTDAT1_TR5_SHIFT            5
#define SCU_PTDAT1_TR6_MASK             0x00000040
#define SCU_PTDAT1_TR6_SHIFT            6
#define SCU_PTDAT1_TR7_MASK             0x00000080
#define SCU_PTDAT1_TR7_SHIFT            7
#define SCU_PTDAT1_TR8_MASK             0x00000100
#define SCU_PTDAT1_TR8_SHIFT            8
#define SCU_PTDAT1_TR9_MASK             0x00000200
#define SCU_PTDAT1_TR9_SHIFT            9
#define SCU_PTDAT1_TR10_MASK            0x00000400
#define SCU_PTDAT1_TR10_SHIFT           10
#define SCU_PTDAT1_TR11_MASK            0x00000800
#define SCU_PTDAT1_TR11_SHIFT           11
#define SCU_PTDAT1_TR12_MASK            0x00001000
#define SCU_PTDAT1_TR12_SHIFT           12
#define SCU_PTDAT1_TR13_MASK            0x00002000
#define SCU_PTDAT1_TR13_SHIFT           13
#define SCU_PTDAT1_TR14_MASK            0x00004000
#define SCU_PTDAT1_TR14_SHIFT           14
#define SCU_PTDAT1_TR15_MASK            0x00008000
#define SCU_PTDAT1_TR15_SHIFT           15
#define SCU_PTDAT1_BRKIN_MASK           0x00010000
#define SCU_PTDAT1_BRKIN_SHIFT          16
#define SCU_PTDAT1_BRKOUT_MASK          0x00020000
#define SCU_PTDAT1_BRKOUT_SHIFT         17
#define SCU_PTDAT1_TRCLK_MASK           0x00040000
#define SCU_PTDAT1_TRCLK_SHIFT          18
#define SCU_PTDAT1_HDRST_MASK           0x00080000
#define SCU_PTDAT1_HDRST_SHIFT          19
#define SCU_PTDAT1_NMI_MASK             0x00100000
#define SCU_PTDAT1_NMI_SHIFT            20
#define SCU_PTDAT1_HOLD_MASK            0x00200000
#define SCU_PTDAT1_HOLD_SHIFT           21
#define SCU_PTDAT1_HLDA_MASK            0x00400000
#define SCU_PTDAT1_HLDA_SHIFT           22
#define SCU_PTDAT1_BREQ_MASK            0x00800000
#define SCU_PTDAT1_BREQ_SHIFT           23
#define SCU_PTDAT1_CS0_MASK             0x01000000
#define SCU_PTDAT1_CS0_SHIFT            24
#define SCU_PTDAT1_CS1_MASK             0x02000000
#define SCU_PTDAT1_CS1_SHIFT            25
#define SCU_PTDAT1_CS2_MASK             0x04000000
#define SCU_PTDAT1_CS2_SHIFT            26
#define SCU_PTDAT1_CS3_MASK             0x08000000
#define SCU_PTDAT1_CS3_SHIFT            27
#define SCU_PTDAT1_CSCOMB_MASK          0x10000000
#define SCU_PTDAT1_CSCOMB_SHIFT         28
#define SCU_PTDAT1_WAIT_MASK            0x20000000
#define SCU_PTDAT1_WAIT_SHIFT           29
#define SCU_PTDAT1_BAA_MASK             0x40000000
#define SCU_PTDAT1_BAA_SHIFT            30



/****************** Masks for SCU_PTDAT2_t **********************/
/*
   SCU_PTDAT2            "SCU Pad Test Data Register 2"
*/
/**********************************************************/

#define SCU_PTDAT2_MASK                 0xfc0003ff
#define SCU_PTDAT2_BYPASS_MASK          0x00000001
#define SCU_PTDAT2_BYPASS_SHIFT         0
#define SCU_PTDAT2_BFCLKI_MASK          0x00000002
#define SCU_PTDAT2_BFCLKI_SHIFT         1
#define SCU_PTDAT2_BFCLKO_MASK          0x00000004
#define SCU_PTDAT2_BFCLKO_SHIFT         2
#define SCU_PTDAT2_TRST_MASK            0x00000008
#define SCU_PTDAT2_TRST_SHIFT           3
#define SCU_PTDAT2_TCK_MASK             0x00000010
#define SCU_PTDAT2_TCK_SHIFT            4
#define SCU_PTDAT2_TDI_MASK             0x00000020
#define SCU_PTDAT2_TDI_SHIFT            5
#define SCU_PTDAT2_TDO_MASK             0x00000040
#define SCU_PTDAT2_TDO_SHIFT            6
#define SCU_PTDAT2_TMS_MASK             0x00000080
#define SCU_PTDAT2_TMS_SHIFT            7
#define SCU_PTDAT2_TESTMODE_MASK        0x00000100
#define SCU_PTDAT2_TESTMODE_SHIFT       8
#define SCU_PTDAT2_TSTRES_MASK          0x00000200
#define SCU_PTDAT2_TSTRES_SHIFT         9
#define SCU_PTDAT2_SLSO0_MASK           0x04000000
#define SCU_PTDAT2_SLSO0_SHIFT          26
#define SCU_PTDAT2_SLSO1_MASK           0x08000000
#define SCU_PTDAT2_SLSO1_SHIFT          27
#define SCU_PTDAT2_MTSR0_MASK           0x10000000
#define SCU_PTDAT2_MTSR0_SHIFT          28
#define SCU_PTDAT2_MRST0_MASK           0x20000000
#define SCU_PTDAT2_MRST0_SHIFT          29
#define SCU_PTDAT2_SCLK0_MASK           0x40000000
#define SCU_PTDAT2_SCLK0_SHIFT          30
#define SCU_PTDAT2_SLSI0_MASK           0x80000000
#define SCU_PTDAT2_SLSI0_SHIFT          31



/****************** Masks for SCU_PTDAT3_t **********************/
/*
   SCU_PTDAT3            "SCU Pad Test Data Register 3"
*/
/**********************************************************/

#define SCU_PTDAT3_MASK                 0xffffffff
#define SCU_PTDAT3_D0_MASK              0x00000001
#define SCU_PTDAT3_D0_SHIFT             0
#define SCU_PTDAT3_D1_MASK              0x00000002
#define SCU_PTDAT3_D1_SHIFT             1
#define SCU_PTDAT3_D2_MASK              0x00000004
#define SCU_PTDAT3_D2_SHIFT             2
#define SCU_PTDAT3_D3_MASK              0x00000008
#define SCU_PTDAT3_D3_SHIFT             3
#define SCU_PTDAT3_D4_MASK              0x00000010
#define SCU_PTDAT3_D4_SHIFT             4
#define SCU_PTDAT3_D5_MASK              0x00000020
#define SCU_PTDAT3_D5_SHIFT             5
#define SCU_PTDAT3_D6_MASK              0x00000040
#define SCU_PTDAT3_D6_SHIFT             6
#define SCU_PTDAT3_D7_MASK              0x00000080
#define SCU_PTDAT3_D7_SHIFT             7
#define SCU_PTDAT3_D8_MASK              0x00000100
#define SCU_PTDAT3_D8_SHIFT             8
#define SCU_PTDAT3_D9_MASK              0x00000200
#define SCU_PTDAT3_D9_SHIFT             9
#define SCU_PTDAT3_D10_MASK             0x00000400
#define SCU_PTDAT3_D10_SHIFT            10
#define SCU_PTDAT3_D11_MASK             0x00000800
#define SCU_PTDAT3_D11_SHIFT            11
#define SCU_PTDAT3_D12_MASK             0x00001000
#define SCU_PTDAT3_D12_SHIFT            12
#define SCU_PTDAT3_D13_MASK             0x00002000
#define SCU_PTDAT3_D13_SHIFT            13
#define SCU_PTDAT3_D14_MASK             0x00004000
#define SCU_PTDAT3_D14_SHIFT            14
#define SCU_PTDAT3_D15_MASK             0x00008000
#define SCU_PTDAT3_D15_SHIFT            15
#define SCU_PTDAT3_D16_MASK             0x00010000
#define SCU_PTDAT3_D16_SHIFT            16
#define SCU_PTDAT3_D17_MASK             0x00020000
#define SCU_PTDAT3_D17_SHIFT            17
#define SCU_PTDAT3_D18_MASK             0x00040000
#define SCU_PTDAT3_D18_SHIFT            18
#define SCU_PTDAT3_D19_MASK             0x00080000
#define SCU_PTDAT3_D19_SHIFT            19
#define SCU_PTDAT3_D20_MASK             0x00100000
#define SCU_PTDAT3_D20_SHIFT            20
#define SCU_PTDAT3_D21_MASK             0x00200000
#define SCU_PTDAT3_D21_SHIFT            21
#define SCU_PTDAT3_D22_MASK             0x00400000
#define SCU_PTDAT3_D22_SHIFT            22
#define SCU_PTDAT3_D23_MASK             0x00800000
#define SCU_PTDAT3_D23_SHIFT            23
#define SCU_PTDAT3_D24_MASK             0x01000000
#define SCU_PTDAT3_D24_SHIFT            24
#define SCU_PTDAT3_D25_MASK             0x02000000
#define SCU_PTDAT3_D25_SHIFT            25
#define SCU_PTDAT3_D26_MASK             0x04000000
#define SCU_PTDAT3_D26_SHIFT            26
#define SCU_PTDAT3_D27_MASK             0x08000000
#define SCU_PTDAT3_D27_SHIFT            27
#define SCU_PTDAT3_D28_MASK             0x10000000
#define SCU_PTDAT3_D28_SHIFT            28
#define SCU_PTDAT3_D29_MASK             0x20000000
#define SCU_PTDAT3_D29_SHIFT            29
#define SCU_PTDAT3_D30_MASK             0x40000000
#define SCU_PTDAT3_D30_SHIFT            30
#define SCU_PTDAT3_D31_MASK             0x80000000
#define SCU_PTDAT3_D31_SHIFT            31



/****************** Masks for SCU_SCLIR_t **********************/
/*
   SCU_SCLIR             "SCU Software Configuration Latched Inputs Register"
*/
/**********************************************************/

#define SCU_SCLIR_MASK                  0x0000ffff
#define SCU_SCLIR_SW0PT0_MASK           0x00000001
#define SCU_SCLIR_SW0PT0_SHIFT          0
#define SCU_SCLIR_SWOPT1_MASK           0x00000002
#define SCU_SCLIR_SWOPT1_SHIFT          1
#define SCU_SCLIR_SWOPT2_MASK           0x00000004
#define SCU_SCLIR_SWOPT2_SHIFT          2
#define SCU_SCLIR_SWOPT3_MASK           0x00000008
#define SCU_SCLIR_SWOPT3_SHIFT          3
#define SCU_SCLIR_SWOPT4_MASK           0x00000010
#define SCU_SCLIR_SWOPT4_SHIFT          4
#define SCU_SCLIR_SWOPT5_MASK           0x00000020
#define SCU_SCLIR_SWOPT5_SHIFT          5
#define SCU_SCLIR_SWOPT6_MASK           0x00000040
#define SCU_SCLIR_SWOPT6_SHIFT          6
#define SCU_SCLIR_SWOPT7_MASK           0x00000080
#define SCU_SCLIR_SWOPT7_SHIFT          7
#define SCU_SCLIR_SWOPT8_MASK           0x00000100
#define SCU_SCLIR_SWOPT8_SHIFT          8
#define SCU_SCLIR_SWOPT9_MASK           0x00000200
#define SCU_SCLIR_SWOPT9_SHIFT          9
#define SCU_SCLIR_SWOPT10_MASK          0x00000400
#define SCU_SCLIR_SWOPT10_SHIFT         10
#define SCU_SCLIR_SWOPT11_MASK          0x00000800
#define SCU_SCLIR_SWOPT11_SHIFT         11
#define SCU_SCLIR_SWOPT12_MASK          0x00001000
#define SCU_SCLIR_SWOPT12_SHIFT         12
#define SCU_SCLIR_SWOPT13_MASK          0x00002000
#define SCU_SCLIR_SWOPT13_SHIFT         13
#define SCU_SCLIR_SWOPT14_MASK          0x00004000
#define SCU_SCLIR_SWOPT14_SHIFT         14
#define SCU_SCLIR_SWOPT15_MASK          0x00008000
#define SCU_SCLIR_SWOPT15_SHIFT         15



/****************** Masks for SCU_SCLKFDR_t **********************/
/*
   SCU_SCLKFDR           "SCU System Clock Fractional Divider Register"
*/
/**********************************************************/

#define SCU_SCLKFDR_MASK                0xf3fffbff
#define SCU_SCLKFDR_STEP_MASK           0x000003ff
#define SCU_SCLKFDR_STEP_SHIFT          0
#define SCU_SCLKFDR_SM_MASK             0x00000800
#define SCU_SCLKFDR_SM_SHIFT            11
#define SCU_SCLKFDR_SC_MASK             0x00003000
#define SCU_SCLKFDR_SC_SHIFT            12
#define SCU_SCLKFDR_DM_MASK             0x0000c000
#define SCU_SCLKFDR_DM_SHIFT            14
#define SCU_SCLKFDR_RESULT_MASK         0x03ff0000
#define SCU_SCLKFDR_RESULT_SHIFT        16
#define SCU_SCLKFDR_SUSACK_MASK         0x10000000
#define SCU_SCLKFDR_SUSACK_SHIFT        28
#define SCU_SCLKFDR_SUSREQ_MASK         0x20000000
#define SCU_SCLKFDR_SUSREQ_SHIFT        29
#define SCU_SCLKFDR_ENHW_MASK           0x40000000
#define SCU_SCLKFDR_ENHW_SHIFT          30
#define SCU_SCLKFDR_DISCLK_MASK         0x80000000
#define SCU_SCLKFDR_DISCLK_SHIFT        31



/****************** Masks for SCU_STAT_t **********************/
/*
   SCU_STAT              "SCU Status Register"
*/
/**********************************************************/

#define SCU_STAT_MASK                   0x0000211f
#define SCU_STAT_FXI_MASK               0x00000001
#define SCU_STAT_FXI_SHIFT              0
#define SCU_STAT_FUI_MASK               0x00000002
#define SCU_STAT_FUI_SHIFT              1
#define SCU_STAT_FZI_MASK               0x00000004
#define SCU_STAT_FZI_SHIFT              2
#define SCU_STAT_FVI_MASK               0x00000008
#define SCU_STAT_FVI_SHIFT              3
#define SCU_STAT_FII_MASK               0x00000010
#define SCU_STAT_FII_SHIFT              4
#define SCU_STAT_EEA_MASK               0x00000100
#define SCU_STAT_EEA_SHIFT              8
#define SCU_STAT_PARAV_MASK             0x00002000
#define SCU_STAT_PARAV_SHIFT            13



/****************** Masks for SCU_TCCON_t **********************/
/*
   SCU_TCCON             "SCU Temperature Compensation Control Register"
*/
/**********************************************************/

#define SCU_TCCON_MASK                  0x00bbffbb
#define SCU_TCCON_TCV0_MASK             0x00000003
#define SCU_TCCON_TCV0_SHIFT            0
#define SCU_TCCON_TCE0_MASK             0x00000008
#define SCU_TCCON_TCE0_SHIFT            3
#define SCU_TCCON_TCC0_MASK             0x00000030
#define SCU_TCCON_TCC0_SHIFT            4
#define SCU_TCCON_TCS0_MASK             0x00000080
#define SCU_TCCON_TCS0_SHIFT            7
#define SCU_TCCON_TCDIV_MASK            0x0000ff00
#define SCU_TCCON_TCDIV_SHIFT           8
#define SCU_TCCON_TCV1_MASK             0x00030000
#define SCU_TCCON_TCV1_SHIFT            16
#define SCU_TCCON_TCE1_MASK             0x00080000
#define SCU_TCCON_TCE1_SHIFT            19
#define SCU_TCCON_TCC1_MASK             0x00300000
#define SCU_TCCON_TCC1_SHIFT            20
#define SCU_TCCON_TCS1_MASK             0x00800000
#define SCU_TCCON_TCS1_SHIFT            23



/****************** Masks for WDT_CON0_t **********************/
/*
   WDT_CON0              "Watchdog Timer Control Register 0"
*/
/**********************************************************/

#define WDT_CON0_MASK                   0xffffffff
#define WDT_CON0_ENDINIT_MASK           0x00000001
#define WDT_CON0_ENDINIT_SHIFT          0
#define WDT_CON0_WDTLCK_MASK            0x00000002
#define WDT_CON0_WDTLCK_SHIFT           1
#define WDT_CON0_WDTHPW0_MASK           0x0000000c
#define WDT_CON0_WDTHPW0_SHIFT          2
#define WDT_CON0_WDTHPW1_MASK           0x000000f0
#define WDT_CON0_WDTHPW1_SHIFT          4
#define WDT_CON0_WDTPW_MASK             0x0000ff00
#define WDT_CON0_WDTPW_SHIFT            8
#define WDT_CON0_WDTREL_MASK            0xffff0000
#define WDT_CON0_WDTREL_SHIFT           16



/****************** Masks for WDT_CON1_t **********************/
/*
   WDT_CON1              "Watchdog Timer Control Register 1"
*/
/**********************************************************/

#define WDT_CON1_MASK                   0x0000000c
#define WDT_CON1_WDTIR_MASK             0x00000004
#define WDT_CON1_WDTIR_SHIFT            2
#define WDT_CON1_WDTDR_MASK             0x00000008
#define WDT_CON1_WDTDR_SHIFT            3



/****************** Masks for WDT_SR_t **********************/
/*
   WDT_SR                "Watchdog Timer Status Register"
*/
/**********************************************************/

#define WDT_SR_MASK                     0xffff003f
#define WDT_SR_WDTAE_MASK               0x00000001
#define WDT_SR_WDTAE_SHIFT              0
#define WDT_SR_WDTOE_MASK               0x00000002
#define WDT_SR_WDTOE_SHIFT              1
#define WDT_SR_WDTIS_MASK               0x00000004
#define WDT_SR_WDTIS_SHIFT              2
#define WDT_SR_WDTDS_MASK               0x00000008
#define WDT_SR_WDTDS_SHIFT              3
#define WDT_SR_WDTTO_MASK               0x00000010
#define WDT_SR_WDTTO_SHIFT              4
#define WDT_SR_WDTPR_MASK               0x00000020
#define WDT_SR_WDTPR_SHIFT              5
#define WDT_SR_WDTTIM_MASK              0xffff0000
#define WDT_SR_WDTTIM_SHIFT             16




#endif /* _HAVE_TRICORE_SCU_MASKS_H_ */

