/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DMA_MASKS_H_
#define _HAVE_TRICORE_DMA_MASKS_H_


/****************** Masks for DMA_CHRSTR_t **********************/
/*
   DMA_CHRSTR            "DMA Channel Reset Request Register"
*/
/**********************************************************/

#define DMA_CHRSTR_MASK                 0x000000ff
#define DMA_CHRSTR_CH00_MASK            0x00000001
#define DMA_CHRSTR_CH00_SHIFT           0
#define DMA_CHRSTR_CH01_MASK            0x00000002
#define DMA_CHRSTR_CH01_SHIFT           1
#define DMA_CHRSTR_CH02_MASK            0x00000004
#define DMA_CHRSTR_CH02_SHIFT           2
#define DMA_CHRSTR_CH03_MASK            0x00000008
#define DMA_CHRSTR_CH03_SHIFT           3
#define DMA_CHRSTR_CH04_MASK            0x00000010
#define DMA_CHRSTR_CH04_SHIFT           4
#define DMA_CHRSTR_CH05_MASK            0x00000020
#define DMA_CHRSTR_CH05_SHIFT           5
#define DMA_CHRSTR_CH06_MASK            0x00000040
#define DMA_CHRSTR_CH06_SHIFT           6
#define DMA_CHRSTR_CH07_MASK            0x00000080
#define DMA_CHRSTR_CH07_SHIFT           7



/****************** Masks for DMA_CLC_t **********************/
/*
   DMA_CLC               "DMA Clock Control Register"
*/
/**********************************************************/

#define DMA_CLC_MASK                    0x0000001f
#define DMA_CLC_DISR_MASK               0x00000001
#define DMA_CLC_DISR_SHIFT              0
#define DMA_CLC_DISS_MASK               0x00000002
#define DMA_CLC_DISS_SHIFT              1
#define DMA_CLC_SPEN_MASK               0x00000004
#define DMA_CLC_SPEN_SHIFT              2
#define DMA_CLC_ONE_MASK                0x00000008
#define DMA_CLC_ONE_SHIFT               3
#define DMA_CLC_SBWE_MASK               0x00000010
#define DMA_CLC_SBWE_SHIFT              4



/****************** Masks for DMA_CLRE_t **********************/
/*
   DMA_CLRE              "DMA Clear Error Register"
*/
/**********************************************************/

#define DMA_CLRE_MASK                   0x087300ff
#define DMA_CLRE_CTL00_MASK             0x00000001
#define DMA_CLRE_CTL00_SHIFT            0
#define DMA_CLRE_CTL01_MASK             0x00000002
#define DMA_CLRE_CTL01_SHIFT            1
#define DMA_CLRE_CTL02_MASK             0x00000004
#define DMA_CLRE_CTL02_SHIFT            2
#define DMA_CLRE_CTL03_MASK             0x00000008
#define DMA_CLRE_CTL03_SHIFT            3
#define DMA_CLRE_CTL04_MASK             0x00000010
#define DMA_CLRE_CTL04_SHIFT            4
#define DMA_CLRE_CTL05_MASK             0x00000020
#define DMA_CLRE_CTL05_SHIFT            5
#define DMA_CLRE_CTL06_MASK             0x00000040
#define DMA_CLRE_CTL06_SHIFT            6
#define DMA_CLRE_CTL07_MASK             0x00000080
#define DMA_CLRE_CTL07_SHIFT            7
#define DMA_CLRE_CME0SER_MASK           0x00010000
#define DMA_CLRE_CME0SER_SHIFT          16
#define DMA_CLRE_CME0DER_MASK           0x00020000
#define DMA_CLRE_CME0DER_SHIFT          17
#define DMA_CLRE_CFPIER_MASK            0x00100000
#define DMA_CLRE_CFPIER_SHIFT           20
#define DMA_CLRE_CLMBER_MASK            0x00200000
#define DMA_CLRE_CLMBER_SHIFT           21
#define DMA_CLRE_CLCERBERUS_MASK        0x00400000
#define DMA_CLRE_CLCERBERUS_SHIFT       22
#define DMA_CLRE_CLRMLI0_MASK           0x08000000
#define DMA_CLRE_CLRMLI0_SHIFT          27



/****************** Masks for DMA_EER_t **********************/
/*
   DMA_EER               "DMA Enable Error Register"
*/
/**********************************************************/

#define DMA_EER_MASK                    0xf0f300ff
#define DMA_EER_ETRL00_MASK             0x00000001
#define DMA_EER_ETRL00_SHIFT            0
#define DMA_EER_ETRL01_MASK             0x00000002
#define DMA_EER_ETRL01_SHIFT            1
#define DMA_EER_ETRL02_MASK             0x00000004
#define DMA_EER_ETRL02_SHIFT            2
#define DMA_EER_ETRL03_MASK             0x00000008
#define DMA_EER_ETRL03_SHIFT            3
#define DMA_EER_ETRL04_MASK             0x00000010
#define DMA_EER_ETRL04_SHIFT            4
#define DMA_EER_ETRL05_MASK             0x00000020
#define DMA_EER_ETRL05_SHIFT            5
#define DMA_EER_ETRL06_MASK             0x00000040
#define DMA_EER_ETRL06_SHIFT            6
#define DMA_EER_ETRL07_MASK             0x00000080
#define DMA_EER_ETRL07_SHIFT            7
#define DMA_EER_EME0SER_MASK            0x00010000
#define DMA_EER_EME0SER_SHIFT           16
#define DMA_EER_EME0DER_MASK            0x00020000
#define DMA_EER_EME0DER_SHIFT           17
#define DMA_EER_ME0INP_MASK             0x00f00000
#define DMA_EER_ME0INP_SHIFT            20
#define DMA_EER_TRLINP_MASK             0xf0000000
#define DMA_EER_TRLINP_SHIFT            28



/****************** Masks for DMA_ERRSR_t **********************/
/*
   DMA_ERRSR             "DMA Error Status Register"
*/
/**********************************************************/

#define DMA_ERRSR_MASK                  0x0f7300ff
#define DMA_ERRSR_TRL00_MASK            0x00000001
#define DMA_ERRSR_TRL00_SHIFT           0
#define DMA_ERRSR_TRL01_MASK            0x00000002
#define DMA_ERRSR_TRL01_SHIFT           1
#define DMA_ERRSR_TRL02_MASK            0x00000004
#define DMA_ERRSR_TRL02_SHIFT           2
#define DMA_ERRSR_TRL03_MASK            0x00000008
#define DMA_ERRSR_TRL03_SHIFT           3
#define DMA_ERRSR_TRL04_MASK            0x00000010
#define DMA_ERRSR_TRL04_SHIFT           4
#define DMA_ERRSR_TRL05_MASK            0x00000020
#define DMA_ERRSR_TRL05_SHIFT           5
#define DMA_ERRSR_TRL06_MASK            0x00000040
#define DMA_ERRSR_TRL06_SHIFT           6
#define DMA_ERRSR_TRL07_MASK            0x00000080
#define DMA_ERRSR_TRL07_SHIFT           7
#define DMA_ERRSR_ME0SER_MASK           0x00010000
#define DMA_ERRSR_ME0SER_SHIFT          16
#define DMA_ERRSR_ME0DER_MASK           0x00020000
#define DMA_ERRSR_ME0DER_SHIFT          17
#define DMA_ERRSR_FPIER_MASK            0x00100000
#define DMA_ERRSR_FPIER_SHIFT           20
#define DMA_ERRSR_LMBER_MASK            0x00200000
#define DMA_ERRSR_LMBER_SHIFT           21
#define DMA_ERRSR_CERBERUSER_MASK       0x00400000
#define DMA_ERRSR_CERBERUSER_SHIFT      22
#define DMA_ERRSR_LECME0_MASK           0x07000000
#define DMA_ERRSR_LECME0_SHIFT          24
#define DMA_ERRSR_MLI0_MASK             0x08000000
#define DMA_ERRSR_MLI0_SHIFT            27



/****************** Masks for DMA_GINTR_t **********************/
/*
   DMA_GINTR             "DMA Global Interrupt Set Register"
*/
/**********************************************************/

#define DMA_GINTR_MASK                  0x0000ffff
#define DMA_GINTR_SIDMA0_MASK           0x00000001
#define DMA_GINTR_SIDMA0_SHIFT          0
#define DMA_GINTR_SIDMA1_MASK           0x00000002
#define DMA_GINTR_SIDMA1_SHIFT          1
#define DMA_GINTR_SIDMA2_MASK           0x00000004
#define DMA_GINTR_SIDMA2_SHIFT          2
#define DMA_GINTR_SIDMA3_MASK           0x00000008
#define DMA_GINTR_SIDMA3_SHIFT          3
#define DMA_GINTR_SIDMA4_MASK           0x00000010
#define DMA_GINTR_SIDMA4_SHIFT          4
#define DMA_GINTR_SIDMA5_MASK           0x00000020
#define DMA_GINTR_SIDMA5_SHIFT          5
#define DMA_GINTR_SIDMA6_MASK           0x00000040
#define DMA_GINTR_SIDMA6_SHIFT          6
#define DMA_GINTR_SIDMA7_MASK           0x00000080
#define DMA_GINTR_SIDMA7_SHIFT          7
#define DMA_GINTR_SIDMA8_MASK           0x00000100
#define DMA_GINTR_SIDMA8_SHIFT          8
#define DMA_GINTR_SIDMA9_MASK           0x00000200
#define DMA_GINTR_SIDMA9_SHIFT          9
#define DMA_GINTR_SIDMA10_MASK          0x00000400
#define DMA_GINTR_SIDMA10_SHIFT         10
#define DMA_GINTR_SIDMA11_MASK          0x00000800
#define DMA_GINTR_SIDMA11_SHIFT         11
#define DMA_GINTR_SIDMA12_MASK          0x00001000
#define DMA_GINTR_SIDMA12_SHIFT         12
#define DMA_GINTR_SIDMA13_MASK          0x00002000
#define DMA_GINTR_SIDMA13_SHIFT         13
#define DMA_GINTR_SIDMA14_MASK          0x00004000
#define DMA_GINTR_SIDMA14_SHIFT         14
#define DMA_GINTR_SIDMA15_MASK          0x00008000
#define DMA_GINTR_SIDMA15_SHIFT         15



/****************** Masks for DMA_HTREQ_t **********************/
/*
   DMA_HTREQ             "DMA Hardware Transaction Request Register"
*/
/**********************************************************/

#define DMA_HTREQ_MASK                  0x00ff00ff
#define DMA_HTREQ_ECH00_MASK            0x00000001
#define DMA_HTREQ_ECH00_SHIFT           0
#define DMA_HTREQ_ECH01_MASK            0x00000002
#define DMA_HTREQ_ECH01_SHIFT           1
#define DMA_HTREQ_ECH02_MASK            0x00000004
#define DMA_HTREQ_ECH02_SHIFT           2
#define DMA_HTREQ_ECH03_MASK            0x00000008
#define DMA_HTREQ_ECH03_SHIFT           3
#define DMA_HTREQ_ECH04_MASK            0x00000010
#define DMA_HTREQ_ECH04_SHIFT           4
#define DMA_HTREQ_ECH05_MASK            0x00000020
#define DMA_HTREQ_ECH05_SHIFT           5
#define DMA_HTREQ_ECH06_MASK            0x00000040
#define DMA_HTREQ_ECH06_SHIFT           6
#define DMA_HTREQ_ECH07_MASK            0x00000080
#define DMA_HTREQ_ECH07_SHIFT           7
#define DMA_HTREQ_DCH00_MASK            0x00010000
#define DMA_HTREQ_DCH00_SHIFT           16
#define DMA_HTREQ_DCH01_MASK            0x00020000
#define DMA_HTREQ_DCH01_SHIFT           17
#define DMA_HTREQ_DCH02_MASK            0x00040000
#define DMA_HTREQ_DCH02_SHIFT           18
#define DMA_HTREQ_DCH03_MASK            0x00080000
#define DMA_HTREQ_DCH03_SHIFT           19
#define DMA_HTREQ_DCH04_MASK            0x00100000
#define DMA_HTREQ_DCH04_SHIFT           20
#define DMA_HTREQ_DCH05_MASK            0x00200000
#define DMA_HTREQ_DCH05_SHIFT           21
#define DMA_HTREQ_DCH06_MASK            0x00400000
#define DMA_HTREQ_DCH06_SHIFT           22
#define DMA_HTREQ_DCH07_MASK            0x00800000
#define DMA_HTREQ_DCH07_SHIFT           23



/****************** Masks for DMA_ID_t **********************/
/*
   DMA_ID                "Module Identification Register"
*/
/**********************************************************/

#define DMA_ID_MASK                     0xffffffff
#define DMA_ID_MOD_REV_MASK             0x000000ff
#define DMA_ID_MOD_REV_SHIFT            0
#define DMA_ID_MOD_TYPE_MASK            0x0000ff00
#define DMA_ID_MOD_TYPE_SHIFT           8
#define DMA_ID_MOD_NUMBER_MASK          0xffff0000
#define DMA_ID_MOD_NUMBER_SHIFT         16



/****************** Masks for DMA_INTCR_t **********************/
/*
   DMA_INTCR             "DMA Interrupt Clear Register"
*/
/**********************************************************/

#define DMA_INTCR_MASK                  0x00ff00ff
#define DMA_INTCR_CICH00_MASK           0x00000001
#define DMA_INTCR_CICH00_SHIFT          0
#define DMA_INTCR_CICH01_MASK           0x00000002
#define DMA_INTCR_CICH01_SHIFT          1
#define DMA_INTCR_CICH02_MASK           0x00000004
#define DMA_INTCR_CICH02_SHIFT          2
#define DMA_INTCR_CICH03_MASK           0x00000008
#define DMA_INTCR_CICH03_SHIFT          3
#define DMA_INTCR_CICH04_MASK           0x00000010
#define DMA_INTCR_CICH04_SHIFT          4
#define DMA_INTCR_CICH05_MASK           0x00000020
#define DMA_INTCR_CICH05_SHIFT          5
#define DMA_INTCR_CICH06_MASK           0x00000040
#define DMA_INTCR_CICH06_SHIFT          6
#define DMA_INTCR_CICH07_MASK           0x00000080
#define DMA_INTCR_CICH07_SHIFT          7
#define DMA_INTCR_CWRP00_MASK           0x00010000
#define DMA_INTCR_CWRP00_SHIFT          16
#define DMA_INTCR_CWRP01_MASK           0x00020000
#define DMA_INTCR_CWRP01_SHIFT          17
#define DMA_INTCR_CWRP02_MASK           0x00040000
#define DMA_INTCR_CWRP02_SHIFT          18
#define DMA_INTCR_CWRP03_MASK           0x00080000
#define DMA_INTCR_CWRP03_SHIFT          19
#define DMA_INTCR_CWRP04_MASK           0x00100000
#define DMA_INTCR_CWRP04_SHIFT          20
#define DMA_INTCR_CWRP05_MASK           0x00200000
#define DMA_INTCR_CWRP05_SHIFT          21
#define DMA_INTCR_CWRP06_MASK           0x00400000
#define DMA_INTCR_CWRP06_SHIFT          22
#define DMA_INTCR_CWRP07_MASK           0x00800000
#define DMA_INTCR_CWRP07_SHIFT          23



/****************** Masks for DMA_INTSR_t **********************/
/*
   DMA_INTSR             "DMA Interrupt Status Register"
*/
/**********************************************************/

#define DMA_INTSR_MASK                  0x00ff00ff
#define DMA_INTSR_ICH00_MASK            0x00000001
#define DMA_INTSR_ICH00_SHIFT           0
#define DMA_INTSR_ICH01_MASK            0x00000002
#define DMA_INTSR_ICH01_SHIFT           1
#define DMA_INTSR_ICH02_MASK            0x00000004
#define DMA_INTSR_ICH02_SHIFT           2
#define DMA_INTSR_ICH03_MASK            0x00000008
#define DMA_INTSR_ICH03_SHIFT           3
#define DMA_INTSR_ICH04_MASK            0x00000010
#define DMA_INTSR_ICH04_SHIFT           4
#define DMA_INTSR_ICH05_MASK            0x00000020
#define DMA_INTSR_ICH05_SHIFT           5
#define DMA_INTSR_ICH06_MASK            0x00000040
#define DMA_INTSR_ICH06_SHIFT           6
#define DMA_INTSR_ICH07_MASK            0x00000080
#define DMA_INTSR_ICH07_SHIFT           7
#define DMA_INTSR_IPM00_MASK            0x00010000
#define DMA_INTSR_IPM00_SHIFT           16
#define DMA_INTSR_IPM01_MASK            0x00020000
#define DMA_INTSR_IPM01_SHIFT           17
#define DMA_INTSR_IPM02_MASK            0x00040000
#define DMA_INTSR_IPM02_SHIFT           18
#define DMA_INTSR_IPM03_MASK            0x00080000
#define DMA_INTSR_IPM03_SHIFT           19
#define DMA_INTSR_IPM04_MASK            0x00100000
#define DMA_INTSR_IPM04_SHIFT           20
#define DMA_INTSR_IPM05_MASK            0x00200000
#define DMA_INTSR_IPM05_SHIFT           21
#define DMA_INTSR_IPM06_MASK            0x00400000
#define DMA_INTSR_IPM06_SHIFT           22
#define DMA_INTSR_IPM07_MASK            0x00800000
#define DMA_INTSR_IPM07_SHIFT           23



/****************** Masks for DMA_ME0AENR_t **********************/
/*
   DMA_ME0AENR           "DMA Move Engine 0 Access Enable Register"
*/
/**********************************************************/

#define DMA_ME0AENR_MASK                0xffffffff
#define DMA_ME0AENR_AEN0_MASK           0x00000001
#define DMA_ME0AENR_AEN0_SHIFT          0
#define DMA_ME0AENR_AEN1_MASK           0x00000002
#define DMA_ME0AENR_AEN1_SHIFT          1
#define DMA_ME0AENR_AEN2_MASK           0x00000004
#define DMA_ME0AENR_AEN2_SHIFT          2
#define DMA_ME0AENR_AEN3_MASK           0x00000008
#define DMA_ME0AENR_AEN3_SHIFT          3
#define DMA_ME0AENR_AEN4_MASK           0x00000010
#define DMA_ME0AENR_AEN4_SHIFT          4
#define DMA_ME0AENR_AEN5_MASK           0x00000020
#define DMA_ME0AENR_AEN5_SHIFT          5
#define DMA_ME0AENR_AEN6_MASK           0x00000040
#define DMA_ME0AENR_AEN6_SHIFT          6
#define DMA_ME0AENR_AEN7_MASK           0x00000080
#define DMA_ME0AENR_AEN7_SHIFT          7
#define DMA_ME0AENR_AEN8_MASK           0x00000100
#define DMA_ME0AENR_AEN8_SHIFT          8
#define DMA_ME0AENR_AEN9_MASK           0x00000200
#define DMA_ME0AENR_AEN9_SHIFT          9
#define DMA_ME0AENR_AEN10_MASK          0x00000400
#define DMA_ME0AENR_AEN10_SHIFT         10
#define DMA_ME0AENR_AEN11_MASK          0x00000800
#define DMA_ME0AENR_AEN11_SHIFT         11
#define DMA_ME0AENR_AEN12_MASK          0x00001000
#define DMA_ME0AENR_AEN12_SHIFT         12
#define DMA_ME0AENR_AEN13_MASK          0x00002000
#define DMA_ME0AENR_AEN13_SHIFT         13
#define DMA_ME0AENR_AEN14_MASK          0x00004000
#define DMA_ME0AENR_AEN14_SHIFT         14
#define DMA_ME0AENR_AEN15_MASK          0x00008000
#define DMA_ME0AENR_AEN15_SHIFT         15
#define DMA_ME0AENR_AEN16_MASK          0x00010000
#define DMA_ME0AENR_AEN16_SHIFT         16
#define DMA_ME0AENR_AEN17_MASK          0x00020000
#define DMA_ME0AENR_AEN17_SHIFT         17
#define DMA_ME0AENR_AEN18_MASK          0x00040000
#define DMA_ME0AENR_AEN18_SHIFT         18
#define DMA_ME0AENR_AEN19_MASK          0x00080000
#define DMA_ME0AENR_AEN19_SHIFT         19
#define DMA_ME0AENR_AEN20_MASK          0x00100000
#define DMA_ME0AENR_AEN20_SHIFT         20
#define DMA_ME0AENR_AEN21_MASK          0x00200000
#define DMA_ME0AENR_AEN21_SHIFT         21
#define DMA_ME0AENR_AEN22_MASK          0x00400000
#define DMA_ME0AENR_AEN22_SHIFT         22
#define DMA_ME0AENR_AEN23_MASK          0x00800000
#define DMA_ME0AENR_AEN23_SHIFT         23
#define DMA_ME0AENR_AEN24_MASK          0x01000000
#define DMA_ME0AENR_AEN24_SHIFT         24
#define DMA_ME0AENR_AEN25_MASK          0x02000000
#define DMA_ME0AENR_AEN25_SHIFT         25
#define DMA_ME0AENR_AEN26_MASK          0x04000000
#define DMA_ME0AENR_AEN26_SHIFT         26
#define DMA_ME0AENR_AEN27_MASK          0x08000000
#define DMA_ME0AENR_AEN27_SHIFT         27
#define DMA_ME0AENR_AEN28_MASK          0x10000000
#define DMA_ME0AENR_AEN28_SHIFT         28
#define DMA_ME0AENR_AEN29_MASK          0x20000000
#define DMA_ME0AENR_AEN29_SHIFT         29
#define DMA_ME0AENR_AEN30_MASK          0x40000000
#define DMA_ME0AENR_AEN30_SHIFT         30
#define DMA_ME0AENR_AEN31_MASK          0x80000000
#define DMA_ME0AENR_AEN31_SHIFT         31



/****************** Masks for DMA_ME0ARR_t **********************/
/*
   DMA_ME0ARR            "DMA Move Engine 0 Access Range Register"
*/
/**********************************************************/

#define DMA_ME0ARR_MASK                 0xffffffff
#define DMA_ME0ARR_SLICE0_MASK          0x0000001f
#define DMA_ME0ARR_SLICE0_SHIFT         0
#define DMA_ME0ARR_SIZE0_MASK           0x000000e0
#define DMA_ME0ARR_SIZE0_SHIFT          5
#define DMA_ME0ARR_SLICE1_MASK          0x00001f00
#define DMA_ME0ARR_SLICE1_SHIFT         8
#define DMA_ME0ARR_SIZE1_MASK           0x0000e000
#define DMA_ME0ARR_SIZE1_SHIFT          13
#define DMA_ME0ARR_SLICE2_MASK          0x001f0000
#define DMA_ME0ARR_SLICE2_SHIFT         16
#define DMA_ME0ARR_SIZE2_MASK           0x00e00000
#define DMA_ME0ARR_SIZE2_SHIFT          21
#define DMA_ME0ARR_SLICE3_MASK          0x1f000000
#define DMA_ME0ARR_SLICE3_SHIFT         24
#define DMA_ME0ARR_SIZE3_MASK           0xe0000000
#define DMA_ME0ARR_SIZE3_SHIFT          29



/****************** Masks for DMA_ME0PR_t **********************/
/*
   DMA_ME0PR             "DMA Move Engine 0 Pattern Register"
*/
/**********************************************************/

#define DMA_ME0PR_MASK                  0xffffffff
#define DMA_ME0PR_PAT00_MASK            0x000000ff
#define DMA_ME0PR_PAT00_SHIFT           0
#define DMA_ME0PR_PAT01_MASK            0x0000ff00
#define DMA_ME0PR_PAT01_SHIFT           8
#define DMA_ME0PR_PAT02_MASK            0x00ff0000
#define DMA_ME0PR_PAT02_SHIFT           16
#define DMA_ME0PR_PAT03_MASK            0xff000000
#define DMA_ME0PR_PAT03_SHIFT           24



/****************** Masks for DMA_ME0R_t **********************/
/*
   DMA_ME0R              "DMA Move Engine 0 Read Register"
*/
/**********************************************************/

#define DMA_ME0R_MASK                   0xffffffff
#define DMA_ME0R_RD00_MASK              0x000000ff
#define DMA_ME0R_RD00_SHIFT             0
#define DMA_ME0R_RD01_MASK              0x0000ff00
#define DMA_ME0R_RD01_SHIFT             8
#define DMA_ME0R_RD02_MASK              0x00ff0000
#define DMA_ME0R_RD02_SHIFT             16
#define DMA_ME0R_RD03_MASK              0xff000000
#define DMA_ME0R_RD03_SHIFT             24



/****************** Masks for DMA_MESR_t **********************/
/*
   DMA_MESR              "DMA Move Engine Status Register"
*/
/**********************************************************/

#define DMA_MESR_MASK                   0x0000e0ff
#define DMA_MESR_ME0RS_MASK             0x00000001
#define DMA_MESR_ME0RS_SHIFT            0
#define DMA_MESR_CH0_MASK               0x0000000e
#define DMA_MESR_CH0_SHIFT              1
#define DMA_MESR_ME0WS_MASK             0x00000010
#define DMA_MESR_ME0WS_SHIFT            4
#define DMA_MESR_RBTFPI_MASK            0x000000e0
#define DMA_MESR_RBTFPI_SHIFT           5
#define DMA_MESR_RBTLMB_MASK            0x0000e000
#define DMA_MESR_RBTLMB_SHIFT           13



/****************** Masks for DMA_OCDSR_t **********************/
/*
   DMA_OCDSR             "DMA OCDS Register"
*/
/**********************************************************/

#define DMA_OCDSR_MASK                  0x0000003f
#define DMA_OCDSR_BTRC0_MASK            0x00000003
#define DMA_OCDSR_BTRC0_SHIFT           0
#define DMA_OCDSR_BCHS0_MASK            0x0000001c
#define DMA_OCDSR_BCHS0_SHIFT           2
#define DMA_OCDSR_BRL0_MASK             0x00000020
#define DMA_OCDSR_BRL0_SHIFT            5



/****************** Masks for DMA_STREQ_t **********************/
/*
   DMA_STREQ             "DMA Software Transaction Request Register"
*/
/**********************************************************/

#define DMA_STREQ_MASK                  0x000000ff
#define DMA_STREQ_SCH00_MASK            0x00000001
#define DMA_STREQ_SCH00_SHIFT           0
#define DMA_STREQ_SCH01_MASK            0x00000002
#define DMA_STREQ_SCH01_SHIFT           1
#define DMA_STREQ_SCH02_MASK            0x00000004
#define DMA_STREQ_SCH02_SHIFT           2
#define DMA_STREQ_SCH03_MASK            0x00000008
#define DMA_STREQ_SCH03_SHIFT           3
#define DMA_STREQ_SCH04_MASK            0x00000010
#define DMA_STREQ_SCH04_SHIFT           4
#define DMA_STREQ_SCH05_MASK            0x00000020
#define DMA_STREQ_SCH05_SHIFT           5
#define DMA_STREQ_SCH06_MASK            0x00000040
#define DMA_STREQ_SCH06_SHIFT           6
#define DMA_STREQ_SCH07_MASK            0x00000080
#define DMA_STREQ_SCH07_SHIFT           7



/****************** Masks for DMA_SUSPMR_t **********************/
/*
   DMA_SUSPMR            "DMA Suspend Mode Register"
*/
/**********************************************************/

#define DMA_SUSPMR_MASK                 0x00ff00ff
#define DMA_SUSPMR_SUSEN00_MASK         0x00000001
#define DMA_SUSPMR_SUSEN00_SHIFT        0
#define DMA_SUSPMR_SUSEN01_MASK         0x00000002
#define DMA_SUSPMR_SUSEN01_SHIFT        1
#define DMA_SUSPMR_SUSEN02_MASK         0x00000004
#define DMA_SUSPMR_SUSEN02_SHIFT        2
#define DMA_SUSPMR_SUSEN03_MASK         0x00000008
#define DMA_SUSPMR_SUSEN03_SHIFT        3
#define DMA_SUSPMR_SUSEN04_MASK         0x00000010
#define DMA_SUSPMR_SUSEN04_SHIFT        4
#define DMA_SUSPMR_SUSEN05_MASK         0x00000020
#define DMA_SUSPMR_SUSEN05_SHIFT        5
#define DMA_SUSPMR_SUSEN06_MASK         0x00000040
#define DMA_SUSPMR_SUSEN06_SHIFT        6
#define DMA_SUSPMR_SUSEN07_MASK         0x00000080
#define DMA_SUSPMR_SUSEN07_SHIFT        7
#define DMA_SUSPMR_SUSAC00_MASK         0x00010000
#define DMA_SUSPMR_SUSAC00_SHIFT        16
#define DMA_SUSPMR_SUSAC01_MASK         0x00020000
#define DMA_SUSPMR_SUSAC01_SHIFT        17
#define DMA_SUSPMR_SUSAC02_MASK         0x00040000
#define DMA_SUSPMR_SUSAC02_SHIFT        18
#define DMA_SUSPMR_SUSAC03_MASK         0x00080000
#define DMA_SUSPMR_SUSAC03_SHIFT        19
#define DMA_SUSPMR_SUSAC04_MASK         0x00100000
#define DMA_SUSPMR_SUSAC04_SHIFT        20
#define DMA_SUSPMR_SUSAC05_MASK         0x00200000
#define DMA_SUSPMR_SUSAC05_SHIFT        21
#define DMA_SUSPMR_SUSAC06_MASK         0x00400000
#define DMA_SUSPMR_SUSAC06_SHIFT        22
#define DMA_SUSPMR_SUSAC07_MASK         0x00800000
#define DMA_SUSPMR_SUSAC07_SHIFT        23



/****************** Masks for DMA_TRSR_t **********************/
/*
   DMA_TRSR              "DMA Transaction Request State Register"
*/
/**********************************************************/

#define DMA_TRSR_MASK                   0x00ff00ff
#define DMA_TRSR_CH00_MASK              0x00000001
#define DMA_TRSR_CH00_SHIFT             0
#define DMA_TRSR_CH01_MASK              0x00000002
#define DMA_TRSR_CH01_SHIFT             1
#define DMA_TRSR_CH02_MASK              0x00000004
#define DMA_TRSR_CH02_SHIFT             2
#define DMA_TRSR_CH03_MASK              0x00000008
#define DMA_TRSR_CH03_SHIFT             3
#define DMA_TRSR_CH04_MASK              0x00000010
#define DMA_TRSR_CH04_SHIFT             4
#define DMA_TRSR_CH05_MASK              0x00000020
#define DMA_TRSR_CH05_SHIFT             5
#define DMA_TRSR_CH06_MASK              0x00000040
#define DMA_TRSR_CH06_SHIFT             6
#define DMA_TRSR_CH07_MASK              0x00000080
#define DMA_TRSR_CH07_SHIFT             7
#define DMA_TRSR_HTRE00_MASK            0x00010000
#define DMA_TRSR_HTRE00_SHIFT           16
#define DMA_TRSR_HTRE01_MASK            0x00020000
#define DMA_TRSR_HTRE01_SHIFT           17
#define DMA_TRSR_HTRE02_MASK            0x00040000
#define DMA_TRSR_HTRE02_SHIFT           18
#define DMA_TRSR_HTRE03_MASK            0x00080000
#define DMA_TRSR_HTRE03_SHIFT           19
#define DMA_TRSR_HTRE04_MASK            0x00100000
#define DMA_TRSR_HTRE04_SHIFT           20
#define DMA_TRSR_HTRE05_MASK            0x00200000
#define DMA_TRSR_HTRE05_SHIFT           21
#define DMA_TRSR_HTRE06_MASK            0x00400000
#define DMA_TRSR_HTRE06_SHIFT           22
#define DMA_TRSR_HTRE07_MASK            0x00800000
#define DMA_TRSR_HTRE07_SHIFT           23



/****************** Masks for DMA_WRPSR_t **********************/
/*
   DMA_WRPSR             "DMA Wrap Status Register"
*/
/**********************************************************/

#define DMA_WRPSR_MASK                  0x00ff00ff
#define DMA_WRPSR_WRPS00_MASK           0x00000001
#define DMA_WRPSR_WRPS00_SHIFT          0
#define DMA_WRPSR_WRPS01_MASK           0x00000002
#define DMA_WRPSR_WRPS01_SHIFT          1
#define DMA_WRPSR_WRPS02_MASK           0x00000004
#define DMA_WRPSR_WRPS02_SHIFT          2
#define DMA_WRPSR_WRPS03_MASK           0x00000008
#define DMA_WRPSR_WRPS03_SHIFT          3
#define DMA_WRPSR_WRPS04_MASK           0x00000010
#define DMA_WRPSR_WRPS04_SHIFT          4
#define DMA_WRPSR_WRPS05_MASK           0x00000020
#define DMA_WRPSR_WRPS05_SHIFT          5
#define DMA_WRPSR_WRPS06_MASK           0x00000040
#define DMA_WRPSR_WRPS06_SHIFT          6
#define DMA_WRPSR_WRPS07_MASK           0x00000080
#define DMA_WRPSR_WRPS07_SHIFT          7
#define DMA_WRPSR_WRPD00_MASK           0x00010000
#define DMA_WRPSR_WRPD00_SHIFT          16
#define DMA_WRPSR_WRPD01_MASK           0x00020000
#define DMA_WRPSR_WRPD01_SHIFT          17
#define DMA_WRPSR_WRPD02_MASK           0x00040000
#define DMA_WRPSR_WRPD02_SHIFT          18
#define DMA_WRPSR_WRPD03_MASK           0x00080000
#define DMA_WRPSR_WRPD03_SHIFT          19
#define DMA_WRPSR_WRPD04_MASK           0x00100000
#define DMA_WRPSR_WRPD04_SHIFT          20
#define DMA_WRPSR_WRPD05_MASK           0x00200000
#define DMA_WRPSR_WRPD05_SHIFT          21
#define DMA_WRPSR_WRPD06_MASK           0x00400000
#define DMA_WRPSR_WRPD06_SHIFT          22
#define DMA_WRPSR_WRPD07_MASK           0x00800000
#define DMA_WRPSR_WRPD07_SHIFT          23



/****************** Masks for MCHK_ID_t **********************/
/*
   MCHK_ID               "Module Identification Register"
*/
/**********************************************************/

#define MCHK_ID_MASK                    0xffffffff
#define MCHK_ID_MOD_REV_MASK            0x000000ff
#define MCHK_ID_MOD_REV_SHIFT           0
#define MCHK_ID_MOD_TYPE_MASK           0x0000ff00
#define MCHK_ID_MOD_TYPE_SHIFT          8
#define MCHK_ID_MOD_NUMBER_MASK         0xffff0000
#define MCHK_ID_MOD_NUMBER_SHIFT        16



/****************** Masks for MCHK_IR_t **********************/
/*
   MCHK_IR               "Memory Checker Input Register"
*/
/**********************************************************/

#define MCHK_IR_MASK                    0xffffffff
#define MCHK_IR_MCHKIN_MASK             0xffffffff
#define MCHK_IR_MCHKIN_SHIFT            0



/****************** Masks for MCHK_RR_t **********************/
/*
   MCHK_RR               "Memory Checker Result Register"
*/
/**********************************************************/

#define MCHK_RR_MASK                    0xffffffff
#define MCHK_RR_MCHKR_MASK              0xffffffff
#define MCHK_RR_MCHKR_SHIFT             0



/****************** Masks for MCHK_WR_t **********************/
/*
   MCHK_WR               "Memory Checker Write Register"
*/
/**********************************************************/

#define MCHK_WR_MASK                    0xffffffff
#define MCHK_WR_WO_MASK                 0xffffffff
#define MCHK_WR_WO_SHIFT                0




#endif /* _HAVE_TRICORE_DMA_MASKS_H_ */

