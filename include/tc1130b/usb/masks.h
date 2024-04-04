/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_USB_MASKS_H_
#define _HAVE_TRICORE_USB_MASKS_H_


/****************** Masks for USB_CLC_t **********************/
/*
   USB_CLC               "USB Clock Control Register"
*/
/**********************************************************/

#define USB_CLC_MASK                    0x00ffff3f
#define USB_CLC_DISR_MASK               0x00000001
#define USB_CLC_DISR_SHIFT              0
#define USB_CLC_DISS_MASK               0x00000002
#define USB_CLC_DISS_SHIFT              1
#define USB_CLC_SPEN_MASK               0x00000004
#define USB_CLC_SPEN_SHIFT              2
#define USB_CLC_EDIS_MASK               0x00000008
#define USB_CLC_EDIS_SHIFT              3
#define USB_CLC_SBWE_MASK               0x00000010
#define USB_CLC_SBWE_SHIFT              4
#define USB_CLC_FSOE_MASK               0x00000020
#define USB_CLC_FSOE_SHIFT              5
#define USB_CLC_RMC_MASK                0x0000ff00
#define USB_CLC_RMC_SHIFT               8
#define USB_CLC_SMC_MASK                0x00ff0000
#define USB_CLC_SMC_SHIFT               16



/****************** Masks for USB_CNFR_t **********************/
/*
   USB_CNFR              "Configuration Request Register"
*/
/**********************************************************/

#define USB_CNFR_MASK                   0x0000f0ff
#define USB_CNFR_AS0_MASK               0x00000001
#define USB_CNFR_AS0_SHIFT              0
#define USB_CNFR_AS1_MASK               0x00000002
#define USB_CNFR_AS1_SHIFT              1
#define USB_CNFR_AS2_MASK               0x00000004
#define USB_CNFR_AS2_SHIFT              2
#define USB_CNFR_AS3_MASK               0x00000008
#define USB_CNFR_AS3_SHIFT              3
#define USB_CNFR_IF0_MASK               0x00000010
#define USB_CNFR_IF0_SHIFT              4
#define USB_CNFR_IF1_MASK               0x00000020
#define USB_CNFR_IF1_SHIFT              5
#define USB_CNFR_IF2_MASK               0x00000040
#define USB_CNFR_IF2_SHIFT              6
#define USB_CNFR_IF3_MASK               0x00000080
#define USB_CNFR_IF3_SHIFT              7
#define USB_CNFR_CF0_MASK               0x00001000
#define USB_CNFR_CF0_SHIFT              12
#define USB_CNFR_CF1_MASK               0x00002000
#define USB_CNFR_CF1_SHIFT              13
#define USB_CNFR_CF2_MASK               0x00004000
#define USB_CNFR_CF2_SHIFT              14
#define USB_CNFR_CF3_MASK               0x00008000
#define USB_CNFR_CF3_SHIFT              15



/****************** Masks for USB_CPLPR_t **********************/
/*
   USB_CPLPR             "CPU Local Pointer Register"
*/
/**********************************************************/

#define USB_CPLPR_MASK                  0x0000fff8
#define USB_CPLPR_CAPL_MASK             0x0000fff8
#define USB_CPLPR_CAPL_SHIFT            3



/****************** Masks for USB_DATA16_t **********************/
/*
   USB_DATA16            "Data Register for 16bit Accesses"
*/
/**********************************************************/

#define USB_DATA16_MASK                 0x0000ffff
#define USB_DATA16_DAT16_MASK           0x0000ffff
#define USB_DATA16_DAT16_SHIFT          0



/****************** Masks for USB_DATA32_t **********************/
/*
   USB_DATA32            "Data Register for 32bit Accesses"
*/
/**********************************************************/

#define USB_DATA32_MASK                 0xffffffff
#define USB_DATA32_DAT32_MASK           0xffffffff
#define USB_DATA32_DAT32_SHIFT          0



/****************** Masks for USB_DATA8_t **********************/
/*
   USB_DATA8             "Data Register for 8bit Accesses"
*/
/**********************************************************/

#define USB_DATA8_MASK                  0x000000ff
#define USB_DATA8_DAT8_MASK             0x000000ff
#define USB_DATA8_DAT8_SHIFT            0



/****************** Masks for USB_DCR_t **********************/
/*
   USB_DCR               "Device Control Register"
*/
/**********************************************************/

#define USB_DCR_MASK                    0x0000cfff
#define USB_DCR_RPWDS_MASK              0x00000001
#define USB_DCR_RPWDS_SHIFT             0
#define USB_DCR_RPWDR_MASK              0x00000002
#define USB_DCR_RPWDR_SHIFT             1
#define USB_DCR_TPWDS_MASK              0x00000004
#define USB_DCR_TPWDS_SHIFT             2
#define USB_DCR_TPWDR_MASK              0x00000008
#define USB_DCR_TPWDR_SHIFT             3
#define USB_DCR_UCLKS_MASK              0x00000010
#define USB_DCR_UCLKS_SHIFT             4
#define USB_DCR_UCLKR_MASK              0x00000020
#define USB_DCR_UCLKR_SHIFT             5
#define USB_DCR_RSM_MASK                0x00000040
#define USB_DCR_RSM_SHIFT               6
#define USB_DCR_EOID_MASK               0x00000080
#define USB_DCR_EOID_SHIFT              7
#define USB_DCR_SWRS_MASK               0x00000100
#define USB_DCR_SWRS_SHIFT              8
#define USB_DCR_SPEEDS_MASK             0x00000200
#define USB_DCR_SPEEDS_SHIFT            9
#define USB_DCR_DADDIDIS_MASK           0x00000400
#define USB_DCR_DADDIDIS_SHIFT          10
#define USB_DCR_DADDIEN_MASK            0x00000800
#define USB_DCR_DADDIEN_SHIFT           11
#define USB_DCR_USBSRL_MASK             0x00004000
#define USB_DCR_USBSRL_SHIFT            14
#define USB_DCR_CPUSRL_MASK             0x00008000
#define USB_DCR_CPUSRL_SHIFT            15



/****************** Masks for USB_DIER_t **********************/
/*
   USB_DIER              "Device Interrupt Enable Register"
*/
/**********************************************************/

#define USB_DIER_MASK                   0x00007f1f
#define USB_DIER_DAIE_MASK              0x00000001
#define USB_DIER_DAIE_SHIFT             0
#define USB_DIER_DDIE_MASK              0x00000002
#define USB_DIER_DDIE_SHIFT             1
#define USB_DIER_SBIE_MASK              0x00000004
#define USB_DIER_SBIE_SHIFT             2
#define USB_DIER_SEIE_MASK              0x00000008
#define USB_DIER_SEIE_SHIFT             3
#define USB_DIER_SE0IE_MASK             0x00000010
#define USB_DIER_SE0IE_SHIFT            4
#define USB_DIER_STIE_MASK              0x00000100
#define USB_DIER_STIE_SHIFT             8
#define USB_DIER_SUIE_MASK              0x00000200
#define USB_DIER_SUIE_SHIFT             9
#define USB_DIER_CFIE_MASK              0x00000400
#define USB_DIER_CFIE_SHIFT             10
#define USB_DIER_SOFIE_MASK             0x00000800
#define USB_DIER_SOFIE_SHIFT            11
#define USB_DIER_EDIIE_MASK             0x00001000
#define USB_DIER_EDIIE_SHIFT            12
#define USB_DIER_FRIE_MASK              0x00002000
#define USB_DIER_FRIE_SHIFT             13
#define USB_DIER_FNRIE_MASK             0x00004000
#define USB_DIER_FNRIE_SHIFT            14



/****************** Masks for USB_DINP_t **********************/
/*
   USB_DINP              "Device Interrupt Node Pointer Register"
*/
/**********************************************************/

#define USB_DINP_MASK                   0x00007777
#define USB_DINP_INP00_MASK             0x00000001
#define USB_DINP_INP00_SHIFT            0
#define USB_DINP_INP01_MASK             0x00000002
#define USB_DINP_INP01_SHIFT            1
#define USB_DINP_INP02_MASK             0x00000004
#define USB_DINP_INP02_SHIFT            2
#define USB_DINP_INP10_MASK             0x00000010
#define USB_DINP_INP10_SHIFT            4
#define USB_DINP_INP11_MASK             0x00000020
#define USB_DINP_INP11_SHIFT            5
#define USB_DINP_INP12_MASK             0x00000040
#define USB_DINP_INP12_SHIFT            6
#define USB_DINP_INP20_MASK             0x00000100
#define USB_DINP_INP20_SHIFT            8
#define USB_DINP_INP21_MASK             0x00000200
#define USB_DINP_INP21_SHIFT            9
#define USB_DINP_INP22_MASK             0x00000400
#define USB_DINP_INP22_SHIFT            10
#define USB_DINP_INP30_MASK             0x00001000
#define USB_DINP_INP30_SHIFT            12
#define USB_DINP_INP31_MASK             0x00002000
#define USB_DINP_INP31_SHIFT            13
#define USB_DINP_INP32_MASK             0x00004000
#define USB_DINP_INP32_SHIFT            14



/****************** Masks for USB_DIRR_t **********************/
/*
   USB_DIRR              "Device Interrupt Request Register"
*/
/**********************************************************/

#define USB_DIRR_MASK                   0x00007f1f
#define USB_DIRR_DAI_MASK               0x00000001
#define USB_DIRR_DAI_SHIFT              0
#define USB_DIRR_DDI_MASK               0x00000002
#define USB_DIRR_DDI_SHIFT              1
#define USB_DIRR_SBI_MASK               0x00000004
#define USB_DIRR_SBI_SHIFT              2
#define USB_DIRR_SEI_MASK               0x00000008
#define USB_DIRR_SEI_SHIFT              3
#define USB_DIRR_SE0I_MASK              0x00000010
#define USB_DIRR_SE0I_SHIFT             4
#define USB_DIRR_STI_MASK               0x00000100
#define USB_DIRR_STI_SHIFT              8
#define USB_DIRR_SUI_MASK               0x00000200
#define USB_DIRR_SUI_SHIFT              9
#define USB_DIRR_CFI_MASK               0x00000400
#define USB_DIRR_CFI_SHIFT              10
#define USB_DIRR_SOFI_MASK              0x00000800
#define USB_DIRR_SOFI_SHIFT             11
#define USB_DIRR_EDII_MASK              0x00001000
#define USB_DIRR_EDII_SHIFT             12
#define USB_DIRR_FRI_MASK               0x00002000
#define USB_DIRR_FRI_SHIFT              13
#define USB_DIRR_FNRI_MASK              0x00004000
#define USB_DIRR_FNRI_SHIFT             14



/****************** Masks for USB_DIRST_t **********************/
/*
   USB_DIRST             "Device Interrupt Reset Register"
*/
/**********************************************************/

#define USB_DIRST_MASK                  0x00007f1f
#define USB_DIRST_DAIR_MASK             0x00000001
#define USB_DIRST_DAIR_SHIFT            0
#define USB_DIRST_DDIR_MASK             0x00000002
#define USB_DIRST_DDIR_SHIFT            1
#define USB_DIRST_SBIR_MASK             0x00000004
#define USB_DIRST_SBIR_SHIFT            2
#define USB_DIRST_SEIR_MASK             0x00000008
#define USB_DIRST_SEIR_SHIFT            3
#define USB_DIRST_SE0IR_MASK            0x00000010
#define USB_DIRST_SE0IR_SHIFT           4
#define USB_DIRST_STIR_MASK             0x00000100
#define USB_DIRST_STIR_SHIFT            8
#define USB_DIRST_SUIR_MASK             0x00000200
#define USB_DIRST_SUIR_SHIFT            9
#define USB_DIRST_CFIR_MASK             0x00000400
#define USB_DIRST_CFIR_SHIFT            10
#define USB_DIRST_SOFIR_MASK            0x00000800
#define USB_DIRST_SOFIR_SHIFT           11
#define USB_DIRST_EDIIR_MASK            0x00001000
#define USB_DIRST_EDIIR_SHIFT           12
#define USB_DIRST_FRR_MASK              0x00002000
#define USB_DIRST_FRR_SHIFT             13
#define USB_DIRST_FNRR_MASK             0x00004000
#define USB_DIRST_FNRR_SHIFT            14



/****************** Masks for USB_DIT_t **********************/
/*
   USB_DIT               "Device Interrupt Test Register"
*/
/**********************************************************/

#define USB_DIT_MASK                    0x00007f1f
#define USB_DIT_DAIT_MASK               0x00000001
#define USB_DIT_DAIT_SHIFT              0
#define USB_DIT_DDIT_MASK               0x00000002
#define USB_DIT_DDIT_SHIFT              1
#define USB_DIT_SBIT_MASK               0x00000004
#define USB_DIT_SBIT_SHIFT              2
#define USB_DIT_SEIT_MASK               0x00000008
#define USB_DIT_SEIT_SHIFT              3
#define USB_DIT_SE0IT_MASK              0x00000010
#define USB_DIT_SE0IT_SHIFT             4
#define USB_DIT_STIT_MASK               0x00000100
#define USB_DIT_STIT_SHIFT              8
#define USB_DIT_SUIT_MASK               0x00000200
#define USB_DIT_SUIT_SHIFT              9
#define USB_DIT_CFIT_MASK               0x00000400
#define USB_DIT_CFIT_SHIFT              10
#define USB_DIT_SOFIT_MASK              0x00000800
#define USB_DIT_SOFIT_SHIFT             11
#define USB_DIT_EDIIT_MASK              0x00001000
#define USB_DIT_EDIIT_SHIFT             12
#define USB_DIT_FRT_MASK                0x00002000
#define USB_DIT_FRT_SHIFT               13
#define USB_DIT_FNRT_MASK               0x00004000
#define USB_DIT_FNRT_SHIFT              14



/****************** Masks for USB_DSR_t **********************/
/*
   USB_DSR               "Device Status Register"
*/
/**********************************************************/

#define USB_DSR_MASK                    0x008f3bd5
#define USB_DSR_RPWD_MASK               0x00000001
#define USB_DSR_RPWD_SHIFT              0
#define USB_DSR_TPWD_MASK               0x00000004
#define USB_DSR_TPWD_SHIFT              2
#define USB_DSR_UCLK_MASK               0x00000010
#define USB_DSR_UCLK_SHIFT              4
#define USB_DSR_SUSP_MASK               0x00000040
#define USB_DSR_SUSP_SHIFT              6
#define USB_DSR_DINIT_MASK              0x00000080
#define USB_DSR_DINIT_SHIFT             7
#define USB_DSR_SWR_MASK                0x00000100
#define USB_DSR_SWR_SHIFT               8
#define USB_DSR_SPEED_MASK              0x00000200
#define USB_DSR_SPEED_SHIFT             9
#define USB_DSR_DA_MASK                 0x00000800
#define USB_DSR_DA_SHIFT                11
#define USB_DSR_DIR_MASK                0x00001000
#define USB_DSR_DIR_SHIFT               12
#define USB_DSR_DADDIDIS_MASK           0x00002000
#define USB_DSR_DADDIDIS_SHIFT          13
#define USB_DSR_UEP_MASK                0x000f0000
#define USB_DSR_UEP_SHIFT               16
#define USB_DSR_TIP_MASK                0x00800000
#define USB_DSR_TIP_SHIFT               23



/****************** Masks for USB_EPDIR_t **********************/
/*
   USB_EPDIR             "Endpoint Direction Register"
*/
/**********************************************************/

#define USB_EPDIR_MASK                  0x0000ffff
#define USB_EPDIR_DIR0_MASK             0x00000001
#define USB_EPDIR_DIR0_SHIFT            0
#define USB_EPDIR_DIR1_MASK             0x00000002
#define USB_EPDIR_DIR1_SHIFT            1
#define USB_EPDIR_DIR2_MASK             0x00000004
#define USB_EPDIR_DIR2_SHIFT            2
#define USB_EPDIR_DIR3_MASK             0x00000008
#define USB_EPDIR_DIR3_SHIFT            3
#define USB_EPDIR_DIR4_MASK             0x00000010
#define USB_EPDIR_DIR4_SHIFT            4
#define USB_EPDIR_DIR5_MASK             0x00000020
#define USB_EPDIR_DIR5_SHIFT            5
#define USB_EPDIR_DIR6_MASK             0x00000040
#define USB_EPDIR_DIR6_SHIFT            6
#define USB_EPDIR_DIR7_MASK             0x00000080
#define USB_EPDIR_DIR7_SHIFT            7
#define USB_EPDIR_DIR8_MASK             0x00000100
#define USB_EPDIR_DIR8_SHIFT            8
#define USB_EPDIR_DIR9_MASK             0x00000200
#define USB_EPDIR_DIR9_SHIFT            9
#define USB_EPDIR_DIR10_MASK            0x00000400
#define USB_EPDIR_DIR10_SHIFT           10
#define USB_EPDIR_DIR11_MASK            0x00000800
#define USB_EPDIR_DIR11_SHIFT           11
#define USB_EPDIR_DIR12_MASK            0x00001000
#define USB_EPDIR_DIR12_SHIFT           12
#define USB_EPDIR_DIR13_MASK            0x00002000
#define USB_EPDIR_DIR13_SHIFT           13
#define USB_EPDIR_DIR14_MASK            0x00004000
#define USB_EPDIR_DIR14_SHIFT           14
#define USB_EPDIR_DIR15_MASK            0x00008000
#define USB_EPDIR_DIR15_SHIFT           15



/****************** Masks for USB_EPDSR_t **********************/
/*
   USB_EPDSR             "Endpoint Direction Set/Reset Register"
*/
/**********************************************************/

#define USB_EPDSR_MASK                  0xffffffff
#define USB_EPDSR_DIRS0_MASK            0x00000001
#define USB_EPDSR_DIRS0_SHIFT           0
#define USB_EPDSR_DIRS1_MASK            0x00000002
#define USB_EPDSR_DIRS1_SHIFT           1
#define USB_EPDSR_DIRS2_MASK            0x00000004
#define USB_EPDSR_DIRS2_SHIFT           2
#define USB_EPDSR_DIRS3_MASK            0x00000008
#define USB_EPDSR_DIRS3_SHIFT           3
#define USB_EPDSR_DIRS4_MASK            0x00000010
#define USB_EPDSR_DIRS4_SHIFT           4
#define USB_EPDSR_DIRS5_MASK            0x00000020
#define USB_EPDSR_DIRS5_SHIFT           5
#define USB_EPDSR_DIRS6_MASK            0x00000040
#define USB_EPDSR_DIRS6_SHIFT           6
#define USB_EPDSR_DIRS7_MASK            0x00000080
#define USB_EPDSR_DIRS7_SHIFT           7
#define USB_EPDSR_DIRS8_MASK            0x00000100
#define USB_EPDSR_DIRS8_SHIFT           8
#define USB_EPDSR_DIRS9_MASK            0x00000200
#define USB_EPDSR_DIRS9_SHIFT           9
#define USB_EPDSR_DIRS10_MASK           0x00000400
#define USB_EPDSR_DIRS10_SHIFT          10
#define USB_EPDSR_DIRS11_MASK           0x00000800
#define USB_EPDSR_DIRS11_SHIFT          11
#define USB_EPDSR_DIRS12_MASK           0x00001000
#define USB_EPDSR_DIRS12_SHIFT          12
#define USB_EPDSR_DIRS13_MASK           0x00002000
#define USB_EPDSR_DIRS13_SHIFT          13
#define USB_EPDSR_DIRS14_MASK           0x00004000
#define USB_EPDSR_DIRS14_SHIFT          14
#define USB_EPDSR_DIRS15_MASK           0x00008000
#define USB_EPDSR_DIRS15_SHIFT          15
#define USB_EPDSR_DIRR0_MASK            0x00010000
#define USB_EPDSR_DIRR0_SHIFT           16
#define USB_EPDSR_DIRR1_MASK            0x00020000
#define USB_EPDSR_DIRR1_SHIFT           17
#define USB_EPDSR_DIRR2_MASK            0x00040000
#define USB_EPDSR_DIRR2_SHIFT           18
#define USB_EPDSR_DIRR3_MASK            0x00080000
#define USB_EPDSR_DIRR3_SHIFT           19
#define USB_EPDSR_DIRR4_MASK            0x00100000
#define USB_EPDSR_DIRR4_SHIFT           20
#define USB_EPDSR_DIRR5_MASK            0x00200000
#define USB_EPDSR_DIRR5_SHIFT           21
#define USB_EPDSR_DIRR6_MASK            0x00400000
#define USB_EPDSR_DIRR6_SHIFT           22
#define USB_EPDSR_DIRR7_MASK            0x00800000
#define USB_EPDSR_DIRR7_SHIFT           23
#define USB_EPDSR_DIRR8_MASK            0x01000000
#define USB_EPDSR_DIRR8_SHIFT           24
#define USB_EPDSR_DIRR9_MASK            0x02000000
#define USB_EPDSR_DIRR9_SHIFT           25
#define USB_EPDSR_DIRR10_MASK           0x04000000
#define USB_EPDSR_DIRR10_SHIFT          26
#define USB_EPDSR_DIRR11_MASK           0x08000000
#define USB_EPDSR_DIRR11_SHIFT          27
#define USB_EPDSR_DIRR12_MASK           0x10000000
#define USB_EPDSR_DIRR12_SHIFT          28
#define USB_EPDSR_DIRR13_MASK           0x20000000
#define USB_EPDSR_DIRR13_SHIFT          29
#define USB_EPDSR_DIRR14_MASK           0x40000000
#define USB_EPDSR_DIRR14_SHIFT          30
#define USB_EPDSR_DIRR15_MASK           0x80000000
#define USB_EPDSR_DIRR15_SHIFT          31



/****************** Masks for USB_EPSSR_t **********************/
/*
   USB_EPSSR             "Endpoint Stall Set / Reset Register"
*/
/**********************************************************/

#define USB_EPSSR_MASK                  0xffffffff
#define USB_EPSSR_STLS0_MASK            0x00000001
#define USB_EPSSR_STLS0_SHIFT           0
#define USB_EPSSR_STLS1_MASK            0x00000002
#define USB_EPSSR_STLS1_SHIFT           1
#define USB_EPSSR_STLS2_MASK            0x00000004
#define USB_EPSSR_STLS2_SHIFT           2
#define USB_EPSSR_STLS3_MASK            0x00000008
#define USB_EPSSR_STLS3_SHIFT           3
#define USB_EPSSR_STLS4_MASK            0x00000010
#define USB_EPSSR_STLS4_SHIFT           4
#define USB_EPSSR_STLS5_MASK            0x00000020
#define USB_EPSSR_STLS5_SHIFT           5
#define USB_EPSSR_STLS6_MASK            0x00000040
#define USB_EPSSR_STLS6_SHIFT           6
#define USB_EPSSR_STLS7_MASK            0x00000080
#define USB_EPSSR_STLS7_SHIFT           7
#define USB_EPSSR_STLS8_MASK            0x00000100
#define USB_EPSSR_STLS8_SHIFT           8
#define USB_EPSSR_STLS9_MASK            0x00000200
#define USB_EPSSR_STLS9_SHIFT           9
#define USB_EPSSR_STLS10_MASK           0x00000400
#define USB_EPSSR_STLS10_SHIFT          10
#define USB_EPSSR_STLS11_MASK           0x00000800
#define USB_EPSSR_STLS11_SHIFT          11
#define USB_EPSSR_STLS12_MASK           0x00001000
#define USB_EPSSR_STLS12_SHIFT          12
#define USB_EPSSR_STLS13_MASK           0x00002000
#define USB_EPSSR_STLS13_SHIFT          13
#define USB_EPSSR_STLS14_MASK           0x00004000
#define USB_EPSSR_STLS14_SHIFT          14
#define USB_EPSSR_STLS15_MASK           0x00008000
#define USB_EPSSR_STLS15_SHIFT          15
#define USB_EPSSR_STLR0_MASK            0x00010000
#define USB_EPSSR_STLR0_SHIFT           16
#define USB_EPSSR_STLR1_MASK            0x00020000
#define USB_EPSSR_STLR1_SHIFT           17
#define USB_EPSSR_STLR2_MASK            0x00040000
#define USB_EPSSR_STLR2_SHIFT           18
#define USB_EPSSR_STLR3_MASK            0x00080000
#define USB_EPSSR_STLR3_SHIFT           19
#define USB_EPSSR_STLR4_MASK            0x00100000
#define USB_EPSSR_STLR4_SHIFT           20
#define USB_EPSSR_STLR5_MASK            0x00200000
#define USB_EPSSR_STLR5_SHIFT           21
#define USB_EPSSR_STLR6_MASK            0x00400000
#define USB_EPSSR_STLR6_SHIFT           22
#define USB_EPSSR_STLR7_MASK            0x00800000
#define USB_EPSSR_STLR7_SHIFT           23
#define USB_EPSSR_STLR8_MASK            0x01000000
#define USB_EPSSR_STLR8_SHIFT           24
#define USB_EPSSR_STLR9_MASK            0x02000000
#define USB_EPSSR_STLR9_SHIFT           25
#define USB_EPSSR_STLR10_MASK           0x04000000
#define USB_EPSSR_STLR10_SHIFT          26
#define USB_EPSSR_STLR11_MASK           0x08000000
#define USB_EPSSR_STLR11_SHIFT          27
#define USB_EPSSR_STLR12_MASK           0x10000000
#define USB_EPSSR_STLR12_SHIFT          28
#define USB_EPSSR_STLR13_MASK           0x20000000
#define USB_EPSSR_STLR13_SHIFT          29
#define USB_EPSSR_STLR14_MASK           0x40000000
#define USB_EPSSR_STLR14_SHIFT          30
#define USB_EPSSR_STLR15_MASK           0x80000000
#define USB_EPSSR_STLR15_SHIFT          31



/****************** Masks for USB_EPSTL_t **********************/
/*
   USB_EPSTL             "Endpoint Stall Register"
*/
/**********************************************************/

#define USB_EPSTL_MASK                  0x0000ffff
#define USB_EPSTL_STL0_MASK             0x00000001
#define USB_EPSTL_STL0_SHIFT            0
#define USB_EPSTL_STL1_MASK             0x00000002
#define USB_EPSTL_STL1_SHIFT            1
#define USB_EPSTL_STL2_MASK             0x00000004
#define USB_EPSTL_STL2_SHIFT            2
#define USB_EPSTL_STL3_MASK             0x00000008
#define USB_EPSTL_STL3_SHIFT            3
#define USB_EPSTL_STL4_MASK             0x00000010
#define USB_EPSTL_STL4_SHIFT            4
#define USB_EPSTL_STL5_MASK             0x00000020
#define USB_EPSTL_STL5_SHIFT            5
#define USB_EPSTL_STL6_MASK             0x00000040
#define USB_EPSTL_STL6_SHIFT            6
#define USB_EPSTL_STL7_MASK             0x00000080
#define USB_EPSTL_STL7_SHIFT            7
#define USB_EPSTL_STL8_MASK             0x00000100
#define USB_EPSTL_STL8_SHIFT            8
#define USB_EPSTL_STL9_MASK             0x00000200
#define USB_EPSTL_STL9_SHIFT            9
#define USB_EPSTL_STL10_MASK            0x00000400
#define USB_EPSTL_STL10_SHIFT           10
#define USB_EPSTL_STL11_MASK            0x00000800
#define USB_EPSTL_STL11_SHIFT           11
#define USB_EPSTL_STL12_MASK            0x00001000
#define USB_EPSTL_STL12_SHIFT           12
#define USB_EPSTL_STL13_MASK            0x00002000
#define USB_EPSTL_STL13_SHIFT           13
#define USB_EPSTL_STL14_MASK            0x00004000
#define USB_EPSTL_STL14_SHIFT           14
#define USB_EPSTL_STL15_MASK            0x00008000
#define USB_EPSTL_STL15_SHIFT           15



/****************** Masks for USB_EPVLD_t **********************/
/*
   USB_EPVLD             "Endpoint Valid Register"
*/
/**********************************************************/

#define USB_EPVLD_MASK                  0x0000ffff
#define USB_EPVLD_EPV0_MASK             0x00000001
#define USB_EPVLD_EPV0_SHIFT            0
#define USB_EPVLD_EPV1_MASK             0x00000002
#define USB_EPVLD_EPV1_SHIFT            1
#define USB_EPVLD_EPV2_MASK             0x00000004
#define USB_EPVLD_EPV2_SHIFT            2
#define USB_EPVLD_EPV3_MASK             0x00000008
#define USB_EPVLD_EPV3_SHIFT            3
#define USB_EPVLD_EPV4_MASK             0x00000010
#define USB_EPVLD_EPV4_SHIFT            4
#define USB_EPVLD_EPV5_MASK             0x00000020
#define USB_EPVLD_EPV5_SHIFT            5
#define USB_EPVLD_EPV6_MASK             0x00000040
#define USB_EPVLD_EPV6_SHIFT            6
#define USB_EPVLD_EPV7_MASK             0x00000080
#define USB_EPVLD_EPV7_SHIFT            7
#define USB_EPVLD_EPV8_MASK             0x00000100
#define USB_EPVLD_EPV8_SHIFT            8
#define USB_EPVLD_EPV9_MASK             0x00000200
#define USB_EPVLD_EPV9_SHIFT            9
#define USB_EPVLD_EPV10_MASK            0x00000400
#define USB_EPVLD_EPV10_SHIFT           10
#define USB_EPVLD_EPV11_MASK            0x00000800
#define USB_EPVLD_EPV11_SHIFT           11
#define USB_EPVLD_EPV12_MASK            0x00001000
#define USB_EPVLD_EPV12_SHIFT           12
#define USB_EPVLD_EPV13_MASK            0x00002000
#define USB_EPVLD_EPV13_SHIFT           13
#define USB_EPVLD_EPV14_MASK            0x00004000
#define USB_EPVLD_EPV14_SHIFT           14
#define USB_EPVLD_EPV15_MASK            0x00008000
#define USB_EPVLD_EPV15_SHIFT           15



/****************** Masks for USB_EVSR_t **********************/
/*
   USB_EVSR              "Endpoint Valid Set/Reset Register"
*/
/**********************************************************/

#define USB_EVSR_MASK                   0xffffffff
#define USB_EVSR_EPVS0_MASK             0x00000001
#define USB_EVSR_EPVS0_SHIFT            0
#define USB_EVSR_EPVS1_MASK             0x00000002
#define USB_EVSR_EPVS1_SHIFT            1
#define USB_EVSR_EPVS2_MASK             0x00000004
#define USB_EVSR_EPVS2_SHIFT            2
#define USB_EVSR_EPVS3_MASK             0x00000008
#define USB_EVSR_EPVS3_SHIFT            3
#define USB_EVSR_EPVS4_MASK             0x00000010
#define USB_EVSR_EPVS4_SHIFT            4
#define USB_EVSR_EPVS5_MASK             0x00000020
#define USB_EVSR_EPVS5_SHIFT            5
#define USB_EVSR_EPVS6_MASK             0x00000040
#define USB_EVSR_EPVS6_SHIFT            6
#define USB_EVSR_EPVS7_MASK             0x00000080
#define USB_EVSR_EPVS7_SHIFT            7
#define USB_EVSR_EPVS8_MASK             0x00000100
#define USB_EVSR_EPVS8_SHIFT            8
#define USB_EVSR_EPVS9_MASK             0x00000200
#define USB_EVSR_EPVS9_SHIFT            9
#define USB_EVSR_EPVS10_MASK            0x00000400
#define USB_EVSR_EPVS10_SHIFT           10
#define USB_EVSR_EPVS11_MASK            0x00000800
#define USB_EVSR_EPVS11_SHIFT           11
#define USB_EVSR_EPVS12_MASK            0x00001000
#define USB_EVSR_EPVS12_SHIFT           12
#define USB_EVSR_EPVS13_MASK            0x00002000
#define USB_EVSR_EPVS13_SHIFT           13
#define USB_EVSR_EPVS14_MASK            0x00004000
#define USB_EVSR_EPVS14_SHIFT           14
#define USB_EVSR_EPVS15_MASK            0x00008000
#define USB_EVSR_EPVS15_SHIFT           15
#define USB_EVSR_EPVR0_MASK             0x00010000
#define USB_EVSR_EPVR0_SHIFT            16
#define USB_EVSR_EPVR1_MASK             0x00020000
#define USB_EVSR_EPVR1_SHIFT            17
#define USB_EVSR_EPVR2_MASK             0x00040000
#define USB_EVSR_EPVR2_SHIFT            18
#define USB_EVSR_EPVR3_MASK             0x00080000
#define USB_EVSR_EPVR3_SHIFT            19
#define USB_EVSR_EPVR4_MASK             0x00100000
#define USB_EVSR_EPVR4_SHIFT            20
#define USB_EVSR_EPVR5_MASK             0x00200000
#define USB_EVSR_EPVR5_SHIFT            21
#define USB_EVSR_EPVR6_MASK             0x00400000
#define USB_EVSR_EPVR6_SHIFT            22
#define USB_EVSR_EPVR7_MASK             0x00800000
#define USB_EVSR_EPVR7_SHIFT            23
#define USB_EVSR_EPVR8_MASK             0x01000000
#define USB_EVSR_EPVR8_SHIFT            24
#define USB_EVSR_EPVR9_MASK             0x02000000
#define USB_EVSR_EPVR9_SHIFT            25
#define USB_EVSR_EPVR10_MASK            0x04000000
#define USB_EVSR_EPVR10_SHIFT           26
#define USB_EVSR_EPVR11_MASK            0x08000000
#define USB_EVSR_EPVR11_SHIFT           27
#define USB_EVSR_EPVR12_MASK            0x10000000
#define USB_EVSR_EPVR12_SHIFT           28
#define USB_EVSR_EPVR13_MASK            0x20000000
#define USB_EVSR_EPVR13_SHIFT           29
#define USB_EVSR_EPVR14_MASK            0x40000000
#define USB_EVSR_EPVR14_SHIFT           30
#define USB_EVSR_EPVR15_MASK            0x80000000
#define USB_EVSR_EPVR15_SHIFT           31



/****************** Masks for USB_FCON_t **********************/
/*
   USB_FCON              "FIFO Control Register"
*/
/**********************************************************/

#define USB_FCON_MASK                   0xffff070f
#define USB_FCON_CEPS_MASK              0x0000000f
#define USB_FCON_CEPS_SHIFT             0
#define USB_FCON_FVLD_MASK              0x00000100
#define USB_FCON_FVLD_SHIFT             8
#define USB_FCON_DONE_MASK              0x00000200
#define USB_FCON_DONE_SHIFT             9
#define USB_FCON_CLREP_MASK             0x00000400
#define USB_FCON_CLREP_SHIFT            10
#define USB_FCON_EPFVLD0_MASK           0x00010000
#define USB_FCON_EPFVLD0_SHIFT          16
#define USB_FCON_EPFVLD1_MASK           0x00020000
#define USB_FCON_EPFVLD1_SHIFT          17
#define USB_FCON_EPFVLD2_MASK           0x00040000
#define USB_FCON_EPFVLD2_SHIFT          18
#define USB_FCON_EPFVLD3_MASK           0x00080000
#define USB_FCON_EPFVLD3_SHIFT          19
#define USB_FCON_EPFVLD4_MASK           0x00100000
#define USB_FCON_EPFVLD4_SHIFT          20
#define USB_FCON_EPFVLD5_MASK           0x00200000
#define USB_FCON_EPFVLD5_SHIFT          21
#define USB_FCON_EPFVLD6_MASK           0x00400000
#define USB_FCON_EPFVLD6_SHIFT          22
#define USB_FCON_EPFVLD7_MASK           0x00800000
#define USB_FCON_EPFVLD7_SHIFT          23
#define USB_FCON_EPFVLD8_MASK           0x01000000
#define USB_FCON_EPFVLD8_SHIFT          24
#define USB_FCON_EPFVLD9_MASK           0x02000000
#define USB_FCON_EPFVLD9_SHIFT          25
#define USB_FCON_EPFVLD10_MASK          0x04000000
#define USB_FCON_EPFVLD10_SHIFT         26
#define USB_FCON_EPFVLD11_MASK          0x08000000
#define USB_FCON_EPFVLD11_SHIFT         27
#define USB_FCON_EPFVLD12_MASK          0x10000000
#define USB_FCON_EPFVLD12_SHIFT         28
#define USB_FCON_EPFVLD13_MASK          0x20000000
#define USB_FCON_EPFVLD13_SHIFT         29
#define USB_FCON_EPFVLD14_MASK          0x40000000
#define USB_FCON_EPFVLD14_SHIFT         30
#define USB_FCON_EPFVLD15_MASK          0x80000000
#define USB_FCON_EPFVLD15_SHIFT         31



/****************** Masks for USB_FNR_t **********************/
/*
   USB_FNR               "Frame Number Register"
*/
/**********************************************************/

#define USB_FNR_MASK                    0x000007ff
#define USB_FNR_FNR0_MASK               0x00000001
#define USB_FNR_FNR0_SHIFT              0
#define USB_FNR_FNR1_MASK               0x00000002
#define USB_FNR_FNR1_SHIFT              1
#define USB_FNR_FNR2_MASK               0x00000004
#define USB_FNR_FNR2_SHIFT              2
#define USB_FNR_FNR3_MASK               0x00000008
#define USB_FNR_FNR3_SHIFT              3
#define USB_FNR_FNR4_MASK               0x00000010
#define USB_FNR_FNR4_SHIFT              4
#define USB_FNR_FNR5_MASK               0x00000020
#define USB_FNR_FNR5_SHIFT              5
#define USB_FNR_FNR6_MASK               0x00000040
#define USB_FNR_FNR6_SHIFT              6
#define USB_FNR_FNR7_MASK               0x00000080
#define USB_FNR_FNR7_SHIFT              7
#define USB_FNR_FNR8_MASK               0x00000100
#define USB_FNR_FNR8_SHIFT              8
#define USB_FNR_FNR9_MASK               0x00000200
#define USB_FNR_FNR9_SHIFT              9
#define USB_FNR_FNR10_MASK              0x00000400
#define USB_FNR_FNR10_SHIFT             10



/****************** Masks for USB_ID_t **********************/
/*
   USB_ID                "USB Module Identification Register"
*/
/**********************************************************/

#define USB_ID_MASK                     0x0000ffff
#define USB_ID_REV_MASK                 0x000000ff
#define USB_ID_REV_SHIFT                0
#define USB_ID_ID_MASK                  0x0000ff00
#define USB_ID_ID_SHIFT                 8



/****************** Masks for USB_PISEL_t **********************/
/*
   USB_PISEL             "USB Input Port Selection Register"
*/
/**********************************************************/

#define USB_PISEL_MASK                  0x00000007
#define USB_PISEL_VPIS_MASK             0x00000001
#define USB_PISEL_VPIS_SHIFT            0
#define USB_PISEL_VMIS_MASK             0x00000002
#define USB_PISEL_VMIS_SHIFT            1
#define USB_PISEL_RCVIS_MASK            0x00000004
#define USB_PISEL_RCVIS_SHIFT           2



/****************** Masks for USB_ZLPEN_t **********************/
/*
   USB_ZLPEN             "Zero-Length-Package Enable Register"
*/
/**********************************************************/

#define USB_ZLPEN_MASK                  0x0000ffff
#define USB_ZLPEN_ZLP0_MASK             0x00000001
#define USB_ZLPEN_ZLP0_SHIFT            0
#define USB_ZLPEN_ZLP1_MASK             0x00000002
#define USB_ZLPEN_ZLP1_SHIFT            1
#define USB_ZLPEN_ZLP2_MASK             0x00000004
#define USB_ZLPEN_ZLP2_SHIFT            2
#define USB_ZLPEN_ZLP3_MASK             0x00000008
#define USB_ZLPEN_ZLP3_SHIFT            3
#define USB_ZLPEN_ZLP4_MASK             0x00000010
#define USB_ZLPEN_ZLP4_SHIFT            4
#define USB_ZLPEN_ZLP5_MASK             0x00000020
#define USB_ZLPEN_ZLP5_SHIFT            5
#define USB_ZLPEN_ZLP6_MASK             0x00000040
#define USB_ZLPEN_ZLP6_SHIFT            6
#define USB_ZLPEN_ZLP7_MASK             0x00000080
#define USB_ZLPEN_ZLP7_SHIFT            7
#define USB_ZLPEN_ZLP8_MASK             0x00000100
#define USB_ZLPEN_ZLP8_SHIFT            8
#define USB_ZLPEN_ZLP9_MASK             0x00000200
#define USB_ZLPEN_ZLP9_SHIFT            9
#define USB_ZLPEN_ZLP10_MASK            0x00000400
#define USB_ZLPEN_ZLP10_SHIFT           10
#define USB_ZLPEN_ZLP11_MASK            0x00000800
#define USB_ZLPEN_ZLP11_SHIFT           11
#define USB_ZLPEN_ZLP12_MASK            0x00001000
#define USB_ZLPEN_ZLP12_SHIFT           12
#define USB_ZLPEN_ZLP13_MASK            0x00002000
#define USB_ZLPEN_ZLP13_SHIFT           13
#define USB_ZLPEN_ZLP14_MASK            0x00004000
#define USB_ZLPEN_ZLP14_SHIFT           14
#define USB_ZLPEN_ZLP15_MASK            0x00008000
#define USB_ZLPEN_ZLP15_SHIFT           15



/****************** Masks for USB_ZLPSR_t **********************/
/*
   USB_ZLPSR             "Zero-Length-Package Set/Reset Register"
*/
/**********************************************************/

#define USB_ZLPSR_MASK                  0xffffffff
#define USB_ZLPSR_ZLPS0_MASK            0x00000001
#define USB_ZLPSR_ZLPS0_SHIFT           0
#define USB_ZLPSR_ZLPS1_MASK            0x00000002
#define USB_ZLPSR_ZLPS1_SHIFT           1
#define USB_ZLPSR_ZLPS2_MASK            0x00000004
#define USB_ZLPSR_ZLPS2_SHIFT           2
#define USB_ZLPSR_ZLPS3_MASK            0x00000008
#define USB_ZLPSR_ZLPS3_SHIFT           3
#define USB_ZLPSR_ZLPS4_MASK            0x00000010
#define USB_ZLPSR_ZLPS4_SHIFT           4
#define USB_ZLPSR_ZLPS5_MASK            0x00000020
#define USB_ZLPSR_ZLPS5_SHIFT           5
#define USB_ZLPSR_ZLPS6_MASK            0x00000040
#define USB_ZLPSR_ZLPS6_SHIFT           6
#define USB_ZLPSR_ZLPS7_MASK            0x00000080
#define USB_ZLPSR_ZLPS7_SHIFT           7
#define USB_ZLPSR_ZLPS8_MASK            0x00000100
#define USB_ZLPSR_ZLPS8_SHIFT           8
#define USB_ZLPSR_ZLPS9_MASK            0x00000200
#define USB_ZLPSR_ZLPS9_SHIFT           9
#define USB_ZLPSR_ZLPS10_MASK           0x00000400
#define USB_ZLPSR_ZLPS10_SHIFT          10
#define USB_ZLPSR_ZLPS11_MASK           0x00000800
#define USB_ZLPSR_ZLPS11_SHIFT          11
#define USB_ZLPSR_ZLPS12_MASK           0x00001000
#define USB_ZLPSR_ZLPS12_SHIFT          12
#define USB_ZLPSR_ZLPS13_MASK           0x00002000
#define USB_ZLPSR_ZLPS13_SHIFT          13
#define USB_ZLPSR_ZLPS14_MASK           0x00004000
#define USB_ZLPSR_ZLPS14_SHIFT          14
#define USB_ZLPSR_ZLPS15_MASK           0x00008000
#define USB_ZLPSR_ZLPS15_SHIFT          15
#define USB_ZLPSR_ZLPR0_MASK            0x00010000
#define USB_ZLPSR_ZLPR0_SHIFT           16
#define USB_ZLPSR_ZLPR1_MASK            0x00020000
#define USB_ZLPSR_ZLPR1_SHIFT           17
#define USB_ZLPSR_ZLPR2_MASK            0x00040000
#define USB_ZLPSR_ZLPR2_SHIFT           18
#define USB_ZLPSR_ZLPR3_MASK            0x00080000
#define USB_ZLPSR_ZLPR3_SHIFT           19
#define USB_ZLPSR_ZLPR4_MASK            0x00100000
#define USB_ZLPSR_ZLPR4_SHIFT           20
#define USB_ZLPSR_ZLPR5_MASK            0x00200000
#define USB_ZLPSR_ZLPR5_SHIFT           21
#define USB_ZLPSR_ZLPR6_MASK            0x00400000
#define USB_ZLPSR_ZLPR6_SHIFT           22
#define USB_ZLPSR_ZLPR7_MASK            0x00800000
#define USB_ZLPSR_ZLPR7_SHIFT           23
#define USB_ZLPSR_ZLPR8_MASK            0x01000000
#define USB_ZLPSR_ZLPR8_SHIFT           24
#define USB_ZLPSR_ZLPR9_MASK            0x02000000
#define USB_ZLPSR_ZLPR9_SHIFT           25
#define USB_ZLPSR_ZLPR10_MASK           0x04000000
#define USB_ZLPSR_ZLPR10_SHIFT          26
#define USB_ZLPSR_ZLPR11_MASK           0x08000000
#define USB_ZLPSR_ZLPR11_SHIFT          27
#define USB_ZLPSR_ZLPR12_MASK           0x10000000
#define USB_ZLPSR_ZLPR12_SHIFT          28
#define USB_ZLPSR_ZLPR13_MASK           0x20000000
#define USB_ZLPSR_ZLPR13_SHIFT          29
#define USB_ZLPSR_ZLPR14_MASK           0x40000000
#define USB_ZLPSR_ZLPR14_SHIFT          30
#define USB_ZLPSR_ZLPR15_MASK           0x80000000
#define USB_ZLPSR_ZLPR15_SHIFT          31




#endif /* _HAVE_TRICORE_USB_MASKS_H_ */

