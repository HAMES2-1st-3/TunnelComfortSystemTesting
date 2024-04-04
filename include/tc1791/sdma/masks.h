/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SDMA_MASKS_H_
#define _HAVE_TRICORE_SDMA_MASKS_H_


/****************** Masks for SDMA_CHRSTR_t **********************/
/*
   SDMA_CHRSTR           "SDMA Channel Reset Request Register"
*/
/**********************************************************/

#define SDMA_CHRSTR_MASK                0x000000ff
#define SDMA_CHRSTR_CH00_MASK           0x00000001
#define SDMA_CHRSTR_CH00_SHIFT          0
#define SDMA_CHRSTR_CH01_MASK           0x00000002
#define SDMA_CHRSTR_CH01_SHIFT          1
#define SDMA_CHRSTR_CH02_MASK           0x00000004
#define SDMA_CHRSTR_CH02_SHIFT          2
#define SDMA_CHRSTR_CH03_MASK           0x00000008
#define SDMA_CHRSTR_CH03_SHIFT          3
#define SDMA_CHRSTR_CH04_MASK           0x00000010
#define SDMA_CHRSTR_CH04_SHIFT          4
#define SDMA_CHRSTR_CH05_MASK           0x00000020
#define SDMA_CHRSTR_CH05_SHIFT          5
#define SDMA_CHRSTR_CH06_MASK           0x00000040
#define SDMA_CHRSTR_CH06_SHIFT          6
#define SDMA_CHRSTR_CH07_MASK           0x00000080
#define SDMA_CHRSTR_CH07_SHIFT          7



/****************** Masks for SDMA_CLC_t **********************/
/*
   SDMA_CLC              "SDMA Clock Control Register"
*/
/**********************************************************/

#define SDMA_CLC_MASK                   0x0000003f
#define SDMA_CLC_DISR_MASK              0x00000001
#define SDMA_CLC_DISR_SHIFT             0
#define SDMA_CLC_DISS_MASK              0x00000002
#define SDMA_CLC_DISS_SHIFT             1
#define SDMA_CLC_SPEN_MASK              0x00000004
#define SDMA_CLC_SPEN_SHIFT             2
#define SDMA_CLC_EDIS_MASK              0x00000008
#define SDMA_CLC_EDIS_SHIFT             3
#define SDMA_CLC_SBWE_MASK              0x00000010
#define SDMA_CLC_SBWE_SHIFT             4
#define SDMA_CLC_FSOE_MASK              0x00000020
#define SDMA_CLC_FSOE_SHIFT             5



/****************** Masks for SDMA_CLRE_t **********************/
/*
   SDMA_CLRE             "SDMA Clear Error Register"
*/
/**********************************************************/

#define SDMA_CLRE_MASK                  0x001300ff
#define SDMA_CLRE_CTL00_MASK            0x00000001
#define SDMA_CLRE_CTL00_SHIFT           0
#define SDMA_CLRE_CTL01_MASK            0x00000002
#define SDMA_CLRE_CTL01_SHIFT           1
#define SDMA_CLRE_CTL02_MASK            0x00000004
#define SDMA_CLRE_CTL02_SHIFT           2
#define SDMA_CLRE_CTL03_MASK            0x00000008
#define SDMA_CLRE_CTL03_SHIFT           3
#define SDMA_CLRE_CTL04_MASK            0x00000010
#define SDMA_CLRE_CTL04_SHIFT           4
#define SDMA_CLRE_CTL05_MASK            0x00000020
#define SDMA_CLRE_CTL05_SHIFT           5
#define SDMA_CLRE_CTL06_MASK            0x00000040
#define SDMA_CLRE_CTL06_SHIFT           6
#define SDMA_CLRE_CTL07_MASK            0x00000080
#define SDMA_CLRE_CTL07_SHIFT           7
#define SDMA_CLRE_CME0SER_MASK          0x00010000
#define SDMA_CLRE_CME0SER_SHIFT         16
#define SDMA_CLRE_CME0DER_MASK          0x00020000
#define SDMA_CLRE_CME0DER_SHIFT         17
#define SDMA_CLRE_CFPIER_MASK           0x00100000
#define SDMA_CLRE_CFPIER_SHIFT          20



/****************** Masks for SDMA_EER_t **********************/
/*
   SDMA_EER              "SDMA Enable Error Register"
*/
/**********************************************************/

#define SDMA_EER_MASK                   0xf0f300ff
#define SDMA_EER_ETRL00_MASK            0x00000001
#define SDMA_EER_ETRL00_SHIFT           0
#define SDMA_EER_ETRL01_MASK            0x00000002
#define SDMA_EER_ETRL01_SHIFT           1
#define SDMA_EER_ETRL02_MASK            0x00000004
#define SDMA_EER_ETRL02_SHIFT           2
#define SDMA_EER_ETRL03_MASK            0x00000008
#define SDMA_EER_ETRL03_SHIFT           3
#define SDMA_EER_ETRL04_MASK            0x00000010
#define SDMA_EER_ETRL04_SHIFT           4
#define SDMA_EER_ETRL05_MASK            0x00000020
#define SDMA_EER_ETRL05_SHIFT           5
#define SDMA_EER_ETRL06_MASK            0x00000040
#define SDMA_EER_ETRL06_SHIFT           6
#define SDMA_EER_ETRL07_MASK            0x00000080
#define SDMA_EER_ETRL07_SHIFT           7
#define SDMA_EER_EME0SER_MASK           0x00010000
#define SDMA_EER_EME0SER_SHIFT          16
#define SDMA_EER_EME0DER_MASK           0x00020000
#define SDMA_EER_EME0DER_SHIFT          17
#define SDMA_EER_ME0INP_MASK            0x00f00000
#define SDMA_EER_ME0INP_SHIFT           20
#define SDMA_EER_TRLINP_MASK            0xf0000000
#define SDMA_EER_TRLINP_SHIFT           28



/****************** Masks for SDMA_ERRSR_t **********************/
/*
   SDMA_ERRSR            "SDMA Error Status Register"
*/
/**********************************************************/

#define SDMA_ERRSR_MASK                 0x071300ff
#define SDMA_ERRSR_TRL00_MASK           0x00000001
#define SDMA_ERRSR_TRL00_SHIFT          0
#define SDMA_ERRSR_TRL01_MASK           0x00000002
#define SDMA_ERRSR_TRL01_SHIFT          1
#define SDMA_ERRSR_TRL02_MASK           0x00000004
#define SDMA_ERRSR_TRL02_SHIFT          2
#define SDMA_ERRSR_TRL03_MASK           0x00000008
#define SDMA_ERRSR_TRL03_SHIFT          3
#define SDMA_ERRSR_TRL04_MASK           0x00000010
#define SDMA_ERRSR_TRL04_SHIFT          4
#define SDMA_ERRSR_TRL05_MASK           0x00000020
#define SDMA_ERRSR_TRL05_SHIFT          5
#define SDMA_ERRSR_TRL06_MASK           0x00000040
#define SDMA_ERRSR_TRL06_SHIFT          6
#define SDMA_ERRSR_TRL07_MASK           0x00000080
#define SDMA_ERRSR_TRL07_SHIFT          7
#define SDMA_ERRSR_ME0SER_MASK          0x00010000
#define SDMA_ERRSR_ME0SER_SHIFT         16
#define SDMA_ERRSR_ME0DER_MASK          0x00020000
#define SDMA_ERRSR_ME0DER_SHIFT         17
#define SDMA_ERRSR_FPIER_MASK           0x00100000
#define SDMA_ERRSR_FPIER_SHIFT          20
#define SDMA_ERRSR_LECME0_MASK          0x07000000
#define SDMA_ERRSR_LECME0_SHIFT         24



/****************** Masks for SDMA_GINTR_t **********************/
/*
   SDMA_GINTR            "SDMA Global Interrupt Set Register"
*/
/**********************************************************/

#define SDMA_GINTR_MASK                 0x0000ffff
#define SDMA_GINTR_SIDMA0_MASK          0x00000001
#define SDMA_GINTR_SIDMA0_SHIFT         0
#define SDMA_GINTR_SIDMA1_MASK          0x00000002
#define SDMA_GINTR_SIDMA1_SHIFT         1
#define SDMA_GINTR_SIDMA2_MASK          0x00000004
#define SDMA_GINTR_SIDMA2_SHIFT         2
#define SDMA_GINTR_SIDMA3_MASK          0x00000008
#define SDMA_GINTR_SIDMA3_SHIFT         3
#define SDMA_GINTR_SIDMA4_MASK          0x00000010
#define SDMA_GINTR_SIDMA4_SHIFT         4
#define SDMA_GINTR_SIDMA5_MASK          0x00000020
#define SDMA_GINTR_SIDMA5_SHIFT         5
#define SDMA_GINTR_SIDMA6_MASK          0x00000040
#define SDMA_GINTR_SIDMA6_SHIFT         6
#define SDMA_GINTR_SIDMA7_MASK          0x00000080
#define SDMA_GINTR_SIDMA7_SHIFT         7
#define SDMA_GINTR_SIDMA8_MASK          0x00000100
#define SDMA_GINTR_SIDMA8_SHIFT         8
#define SDMA_GINTR_SIDMA9_MASK          0x00000200
#define SDMA_GINTR_SIDMA9_SHIFT         9
#define SDMA_GINTR_SIDMA10_MASK         0x00000400
#define SDMA_GINTR_SIDMA10_SHIFT        10
#define SDMA_GINTR_SIDMA11_MASK         0x00000800
#define SDMA_GINTR_SIDMA11_SHIFT        11
#define SDMA_GINTR_SIDMA12_MASK         0x00001000
#define SDMA_GINTR_SIDMA12_SHIFT        12
#define SDMA_GINTR_SIDMA13_MASK         0x00002000
#define SDMA_GINTR_SIDMA13_SHIFT        13
#define SDMA_GINTR_SIDMA14_MASK         0x00004000
#define SDMA_GINTR_SIDMA14_SHIFT        14
#define SDMA_GINTR_SIDMA15_MASK         0x00008000
#define SDMA_GINTR_SIDMA15_SHIFT        15



/****************** Masks for SDMA_HTREQ_t **********************/
/*
   SDMA_HTREQ            "SDMA Hardware Transaction Request Register"
*/
/**********************************************************/

#define SDMA_HTREQ_MASK                 0x00ff00ff
#define SDMA_HTREQ_ECH00_MASK           0x00000001
#define SDMA_HTREQ_ECH00_SHIFT          0
#define SDMA_HTREQ_ECH01_MASK           0x00000002
#define SDMA_HTREQ_ECH01_SHIFT          1
#define SDMA_HTREQ_ECH02_MASK           0x00000004
#define SDMA_HTREQ_ECH02_SHIFT          2
#define SDMA_HTREQ_ECH03_MASK           0x00000008
#define SDMA_HTREQ_ECH03_SHIFT          3
#define SDMA_HTREQ_ECH04_MASK           0x00000010
#define SDMA_HTREQ_ECH04_SHIFT          4
#define SDMA_HTREQ_ECH05_MASK           0x00000020
#define SDMA_HTREQ_ECH05_SHIFT          5
#define SDMA_HTREQ_ECH06_MASK           0x00000040
#define SDMA_HTREQ_ECH06_SHIFT          6
#define SDMA_HTREQ_ECH07_MASK           0x00000080
#define SDMA_HTREQ_ECH07_SHIFT          7
#define SDMA_HTREQ_DCH00_MASK           0x00010000
#define SDMA_HTREQ_DCH00_SHIFT          16
#define SDMA_HTREQ_DCH01_MASK           0x00020000
#define SDMA_HTREQ_DCH01_SHIFT          17
#define SDMA_HTREQ_DCH02_MASK           0x00040000
#define SDMA_HTREQ_DCH02_SHIFT          18
#define SDMA_HTREQ_DCH03_MASK           0x00080000
#define SDMA_HTREQ_DCH03_SHIFT          19
#define SDMA_HTREQ_DCH04_MASK           0x00100000
#define SDMA_HTREQ_DCH04_SHIFT          20
#define SDMA_HTREQ_DCH05_MASK           0x00200000
#define SDMA_HTREQ_DCH05_SHIFT          21
#define SDMA_HTREQ_DCH06_MASK           0x00400000
#define SDMA_HTREQ_DCH06_SHIFT          22
#define SDMA_HTREQ_DCH07_MASK           0x00800000
#define SDMA_HTREQ_DCH07_SHIFT          23



/****************** Masks for SDMA_ID_t **********************/
/*
   SDMA_ID               "Module Identification Register"
*/
/**********************************************************/

#define SDMA_ID_MASK                    0xffffffff
#define SDMA_ID_MOD_REV_MASK            0x000000ff
#define SDMA_ID_MOD_REV_SHIFT           0
#define SDMA_ID_MOD_TYPE_MASK           0x0000ff00
#define SDMA_ID_MOD_TYPE_SHIFT          8
#define SDMA_ID_MOD_NUMBER_MASK         0xffff0000
#define SDMA_ID_MOD_NUMBER_SHIFT        16



/****************** Masks for SDMA_INTCR_t **********************/
/*
   SDMA_INTCR            "SDMA Interrupt Clear Register"
*/
/**********************************************************/

#define SDMA_INTCR_MASK                 0x00ff00ff
#define SDMA_INTCR_CICH00_MASK          0x00000001
#define SDMA_INTCR_CICH00_SHIFT         0
#define SDMA_INTCR_CICH01_MASK          0x00000002
#define SDMA_INTCR_CICH01_SHIFT         1
#define SDMA_INTCR_CICH02_MASK          0x00000004
#define SDMA_INTCR_CICH02_SHIFT         2
#define SDMA_INTCR_CICH03_MASK          0x00000008
#define SDMA_INTCR_CICH03_SHIFT         3
#define SDMA_INTCR_CICH04_MASK          0x00000010
#define SDMA_INTCR_CICH04_SHIFT         4
#define SDMA_INTCR_CICH05_MASK          0x00000020
#define SDMA_INTCR_CICH05_SHIFT         5
#define SDMA_INTCR_CICH06_MASK          0x00000040
#define SDMA_INTCR_CICH06_SHIFT         6
#define SDMA_INTCR_CICH07_MASK          0x00000080
#define SDMA_INTCR_CICH07_SHIFT         7
#define SDMA_INTCR_CWRP00_MASK          0x00010000
#define SDMA_INTCR_CWRP00_SHIFT         16
#define SDMA_INTCR_CWRP01_MASK          0x00020000
#define SDMA_INTCR_CWRP01_SHIFT         17
#define SDMA_INTCR_CWRP02_MASK          0x00040000
#define SDMA_INTCR_CWRP02_SHIFT         18
#define SDMA_INTCR_CWRP03_MASK          0x00080000
#define SDMA_INTCR_CWRP03_SHIFT         19
#define SDMA_INTCR_CWRP04_MASK          0x00100000
#define SDMA_INTCR_CWRP04_SHIFT         20
#define SDMA_INTCR_CWRP05_MASK          0x00200000
#define SDMA_INTCR_CWRP05_SHIFT         21
#define SDMA_INTCR_CWRP06_MASK          0x00400000
#define SDMA_INTCR_CWRP06_SHIFT         22
#define SDMA_INTCR_CWRP07_MASK          0x00800000
#define SDMA_INTCR_CWRP07_SHIFT         23



/****************** Masks for SDMA_INTSR_t **********************/
/*
   SDMA_INTSR            "SDMA Interrupt Status Register"
*/
/**********************************************************/

#define SDMA_INTSR_MASK                 0x00ff00ff
#define SDMA_INTSR_ICH00_MASK           0x00000001
#define SDMA_INTSR_ICH00_SHIFT          0
#define SDMA_INTSR_ICH01_MASK           0x00000002
#define SDMA_INTSR_ICH01_SHIFT          1
#define SDMA_INTSR_ICH02_MASK           0x00000004
#define SDMA_INTSR_ICH02_SHIFT          2
#define SDMA_INTSR_ICH03_MASK           0x00000008
#define SDMA_INTSR_ICH03_SHIFT          3
#define SDMA_INTSR_ICH04_MASK           0x00000010
#define SDMA_INTSR_ICH04_SHIFT          4
#define SDMA_INTSR_ICH05_MASK           0x00000020
#define SDMA_INTSR_ICH05_SHIFT          5
#define SDMA_INTSR_ICH06_MASK           0x00000040
#define SDMA_INTSR_ICH06_SHIFT          6
#define SDMA_INTSR_ICH07_MASK           0x00000080
#define SDMA_INTSR_ICH07_SHIFT          7
#define SDMA_INTSR_IPM00_MASK           0x00010000
#define SDMA_INTSR_IPM00_SHIFT          16
#define SDMA_INTSR_IPM01_MASK           0x00020000
#define SDMA_INTSR_IPM01_SHIFT          17
#define SDMA_INTSR_IPM02_MASK           0x00040000
#define SDMA_INTSR_IPM02_SHIFT          18
#define SDMA_INTSR_IPM03_MASK           0x00080000
#define SDMA_INTSR_IPM03_SHIFT          19
#define SDMA_INTSR_IPM04_MASK           0x00100000
#define SDMA_INTSR_IPM04_SHIFT          20
#define SDMA_INTSR_IPM05_MASK           0x00200000
#define SDMA_INTSR_IPM05_SHIFT          21
#define SDMA_INTSR_IPM06_MASK           0x00400000
#define SDMA_INTSR_IPM06_SHIFT          22
#define SDMA_INTSR_IPM07_MASK           0x00800000
#define SDMA_INTSR_IPM07_SHIFT          23



/****************** Masks for SDMA_ME0PR_t **********************/
/*
   SDMA_ME0PR            "SDMA Move Engine 0 Pattern Register"
*/
/**********************************************************/

#define SDMA_ME0PR_MASK                 0xffffffff
#define SDMA_ME0PR_PAT00_MASK           0x000000ff
#define SDMA_ME0PR_PAT00_SHIFT          0
#define SDMA_ME0PR_PAT01_MASK           0x0000ff00
#define SDMA_ME0PR_PAT01_SHIFT          8
#define SDMA_ME0PR_PAT02_MASK           0x00ff0000
#define SDMA_ME0PR_PAT02_SHIFT          16
#define SDMA_ME0PR_PAT03_MASK           0xff000000
#define SDMA_ME0PR_PAT03_SHIFT          24



/****************** Masks for SDMA_ME0R_t **********************/
/*
   SDMA_ME0R             "SDMA Move Engine 0 Read Register"
*/
/**********************************************************/

#define SDMA_ME0R_MASK                  0xffffffff
#define SDMA_ME0R_RD00_MASK             0x000000ff
#define SDMA_ME0R_RD00_SHIFT            0
#define SDMA_ME0R_RD01_MASK             0x0000ff00
#define SDMA_ME0R_RD01_SHIFT            8
#define SDMA_ME0R_RD02_MASK             0x00ff0000
#define SDMA_ME0R_RD02_SHIFT            16
#define SDMA_ME0R_RD03_MASK             0xff000000
#define SDMA_ME0R_RD03_SHIFT            24



/****************** Masks for SDMA_MESR_t **********************/
/*
   SDMA_MESR             "SDMA Move Engine Status Register"
*/
/**********************************************************/

#define SDMA_MESR_MASK                  0x000000ff
#define SDMA_MESR_ME0RS_MASK            0x00000001
#define SDMA_MESR_ME0RS_SHIFT           0
#define SDMA_MESR_CH0_MASK              0x0000000e
#define SDMA_MESR_CH0_SHIFT             1
#define SDMA_MESR_ME0WS_MASK            0x00000010
#define SDMA_MESR_ME0WS_SHIFT           4
#define SDMA_MESR_RBTFPI_MASK           0x000000e0
#define SDMA_MESR_RBTFPI_SHIFT          5



/****************** Masks for SDMA_OCDSR_t **********************/
/*
   SDMA_OCDSR            "SDMA OCDS Register"
*/
/**********************************************************/

#define SDMA_OCDSR_MASK                 0x00003f3f
#define SDMA_OCDSR_BTRC0_MASK           0x00000003
#define SDMA_OCDSR_BTRC0_SHIFT          0
#define SDMA_OCDSR_BCHS0_MASK           0x0000001c
#define SDMA_OCDSR_BCHS0_SHIFT          2
#define SDMA_OCDSR_BRL0_MASK            0x00000020
#define SDMA_OCDSR_BRL0_SHIFT           5
#define SDMA_OCDSR_BTRC1_MASK           0x00000300
#define SDMA_OCDSR_BTRC1_SHIFT          8
#define SDMA_OCDSR_BCHS1_MASK           0x00001c00
#define SDMA_OCDSR_BCHS1_SHIFT          10
#define SDMA_OCDSR_BRL1_MASK            0x00002000
#define SDMA_OCDSR_BRL1_SHIFT           13



/****************** Masks for SDMA_STREQ_t **********************/
/*
   SDMA_STREQ            "SDMA Software Transaction Request Register"
*/
/**********************************************************/

#define SDMA_STREQ_MASK                 0x000000ff
#define SDMA_STREQ_SCH00_MASK           0x00000001
#define SDMA_STREQ_SCH00_SHIFT          0
#define SDMA_STREQ_SCH01_MASK           0x00000002
#define SDMA_STREQ_SCH01_SHIFT          1
#define SDMA_STREQ_SCH02_MASK           0x00000004
#define SDMA_STREQ_SCH02_SHIFT          2
#define SDMA_STREQ_SCH03_MASK           0x00000008
#define SDMA_STREQ_SCH03_SHIFT          3
#define SDMA_STREQ_SCH04_MASK           0x00000010
#define SDMA_STREQ_SCH04_SHIFT          4
#define SDMA_STREQ_SCH05_MASK           0x00000020
#define SDMA_STREQ_SCH05_SHIFT          5
#define SDMA_STREQ_SCH06_MASK           0x00000040
#define SDMA_STREQ_SCH06_SHIFT          6
#define SDMA_STREQ_SCH07_MASK           0x00000080
#define SDMA_STREQ_SCH07_SHIFT          7



/****************** Masks for SDMA_SUSPMR_t **********************/
/*
   SDMA_SUSPMR           "SDMA Suspend Mode Register"
*/
/**********************************************************/

#define SDMA_SUSPMR_MASK                0x00ff00ff
#define SDMA_SUSPMR_SUSEN00_MASK        0x00000001
#define SDMA_SUSPMR_SUSEN00_SHIFT       0
#define SDMA_SUSPMR_SUSEN01_MASK        0x00000002
#define SDMA_SUSPMR_SUSEN01_SHIFT       1
#define SDMA_SUSPMR_SUSEN02_MASK        0x00000004
#define SDMA_SUSPMR_SUSEN02_SHIFT       2
#define SDMA_SUSPMR_SUSEN03_MASK        0x00000008
#define SDMA_SUSPMR_SUSEN03_SHIFT       3
#define SDMA_SUSPMR_SUSEN04_MASK        0x00000010
#define SDMA_SUSPMR_SUSEN04_SHIFT       4
#define SDMA_SUSPMR_SUSEN05_MASK        0x00000020
#define SDMA_SUSPMR_SUSEN05_SHIFT       5
#define SDMA_SUSPMR_SUSEN06_MASK        0x00000040
#define SDMA_SUSPMR_SUSEN06_SHIFT       6
#define SDMA_SUSPMR_SUSEN07_MASK        0x00000080
#define SDMA_SUSPMR_SUSEN07_SHIFT       7
#define SDMA_SUSPMR_SUSAC00_MASK        0x00010000
#define SDMA_SUSPMR_SUSAC00_SHIFT       16
#define SDMA_SUSPMR_SUSAC01_MASK        0x00020000
#define SDMA_SUSPMR_SUSAC01_SHIFT       17
#define SDMA_SUSPMR_SUSAC02_MASK        0x00040000
#define SDMA_SUSPMR_SUSAC02_SHIFT       18
#define SDMA_SUSPMR_SUSAC03_MASK        0x00080000
#define SDMA_SUSPMR_SUSAC03_SHIFT       19
#define SDMA_SUSPMR_SUSAC04_MASK        0x00100000
#define SDMA_SUSPMR_SUSAC04_SHIFT       20
#define SDMA_SUSPMR_SUSAC05_MASK        0x00200000
#define SDMA_SUSPMR_SUSAC05_SHIFT       21
#define SDMA_SUSPMR_SUSAC06_MASK        0x00400000
#define SDMA_SUSPMR_SUSAC06_SHIFT       22
#define SDMA_SUSPMR_SUSAC07_MASK        0x00800000
#define SDMA_SUSPMR_SUSAC07_SHIFT       23



/****************** Masks for SDMA_TRSR_t **********************/
/*
   SDMA_TRSR             "SDMA Transaction Request State Register"
*/
/**********************************************************/

#define SDMA_TRSR_MASK                  0x00ff00ff
#define SDMA_TRSR_CH00_MASK             0x00000001
#define SDMA_TRSR_CH00_SHIFT            0
#define SDMA_TRSR_CH01_MASK             0x00000002
#define SDMA_TRSR_CH01_SHIFT            1
#define SDMA_TRSR_CH02_MASK             0x00000004
#define SDMA_TRSR_CH02_SHIFT            2
#define SDMA_TRSR_CH03_MASK             0x00000008
#define SDMA_TRSR_CH03_SHIFT            3
#define SDMA_TRSR_CH04_MASK             0x00000010
#define SDMA_TRSR_CH04_SHIFT            4
#define SDMA_TRSR_CH05_MASK             0x00000020
#define SDMA_TRSR_CH05_SHIFT            5
#define SDMA_TRSR_CH06_MASK             0x00000040
#define SDMA_TRSR_CH06_SHIFT            6
#define SDMA_TRSR_CH07_MASK             0x00000080
#define SDMA_TRSR_CH07_SHIFT            7
#define SDMA_TRSR_HTRE00_MASK           0x00010000
#define SDMA_TRSR_HTRE00_SHIFT          16
#define SDMA_TRSR_HTRE01_MASK           0x00020000
#define SDMA_TRSR_HTRE01_SHIFT          17
#define SDMA_TRSR_HTRE02_MASK           0x00040000
#define SDMA_TRSR_HTRE02_SHIFT          18
#define SDMA_TRSR_HTRE03_MASK           0x00080000
#define SDMA_TRSR_HTRE03_SHIFT          19
#define SDMA_TRSR_HTRE04_MASK           0x00100000
#define SDMA_TRSR_HTRE04_SHIFT          20
#define SDMA_TRSR_HTRE05_MASK           0x00200000
#define SDMA_TRSR_HTRE05_SHIFT          21
#define SDMA_TRSR_HTRE06_MASK           0x00400000
#define SDMA_TRSR_HTRE06_SHIFT          22
#define SDMA_TRSR_HTRE07_MASK           0x00800000
#define SDMA_TRSR_HTRE07_SHIFT          23



/****************** Masks for SDMA_WRPSR_t **********************/
/*
   SDMA_WRPSR            "SDMA Wrap Status Register"
*/
/**********************************************************/

#define SDMA_WRPSR_MASK                 0x00ff00ff
#define SDMA_WRPSR_WRPS00_MASK          0x00000001
#define SDMA_WRPSR_WRPS00_SHIFT         0
#define SDMA_WRPSR_WRPS01_MASK          0x00000002
#define SDMA_WRPSR_WRPS01_SHIFT         1
#define SDMA_WRPSR_WRPS02_MASK          0x00000004
#define SDMA_WRPSR_WRPS02_SHIFT         2
#define SDMA_WRPSR_WRPS03_MASK          0x00000008
#define SDMA_WRPSR_WRPS03_SHIFT         3
#define SDMA_WRPSR_WRPS04_MASK          0x00000010
#define SDMA_WRPSR_WRPS04_SHIFT         4
#define SDMA_WRPSR_WRPS05_MASK          0x00000020
#define SDMA_WRPSR_WRPS05_SHIFT         5
#define SDMA_WRPSR_WRPS06_MASK          0x00000040
#define SDMA_WRPSR_WRPS06_SHIFT         6
#define SDMA_WRPSR_WRPS07_MASK          0x00000080
#define SDMA_WRPSR_WRPS07_SHIFT         7
#define SDMA_WRPSR_WRPD00_MASK          0x00010000
#define SDMA_WRPSR_WRPD00_SHIFT         16
#define SDMA_WRPSR_WRPD01_MASK          0x00020000
#define SDMA_WRPSR_WRPD01_SHIFT         17
#define SDMA_WRPSR_WRPD02_MASK          0x00040000
#define SDMA_WRPSR_WRPD02_SHIFT         18
#define SDMA_WRPSR_WRPD03_MASK          0x00080000
#define SDMA_WRPSR_WRPD03_SHIFT         19
#define SDMA_WRPSR_WRPD04_MASK          0x00100000
#define SDMA_WRPSR_WRPD04_SHIFT         20
#define SDMA_WRPSR_WRPD05_MASK          0x00200000
#define SDMA_WRPSR_WRPD05_SHIFT         21
#define SDMA_WRPSR_WRPD06_MASK          0x00400000
#define SDMA_WRPSR_WRPD06_SHIFT         22
#define SDMA_WRPSR_WRPD07_MASK          0x00800000
#define SDMA_WRPSR_WRPD07_SHIFT         23




#endif /* _HAVE_TRICORE_SDMA_MASKS_H_ */

