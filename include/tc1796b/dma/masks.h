/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DMA_MASKS_H_
#define _HAVE_TRICORE_DMA_MASKS_H_


/****************** Masks for DMA_CHRSTR_t **********************/
/*
   DMA_CHRSTR            "DMA Channel Reset Request Register"
*/
/**********************************************************/

#define DMA_CHRSTR_MASK                 0x0000ffff
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
#define DMA_CHRSTR_CH10_MASK            0x00000100
#define DMA_CHRSTR_CH10_SHIFT           8
#define DMA_CHRSTR_CH11_MASK            0x00000200
#define DMA_CHRSTR_CH11_SHIFT           9
#define DMA_CHRSTR_CH12_MASK            0x00000400
#define DMA_CHRSTR_CH12_SHIFT           10
#define DMA_CHRSTR_CH13_MASK            0x00000800
#define DMA_CHRSTR_CH13_SHIFT           11
#define DMA_CHRSTR_CH14_MASK            0x00001000
#define DMA_CHRSTR_CH14_SHIFT           12
#define DMA_CHRSTR_CH15_MASK            0x00002000
#define DMA_CHRSTR_CH15_SHIFT           13
#define DMA_CHRSTR_CH16_MASK            0x00004000
#define DMA_CHRSTR_CH16_SHIFT           14
#define DMA_CHRSTR_CH17_MASK            0x00008000
#define DMA_CHRSTR_CH17_SHIFT           15



/****************** Masks for DMA_CLC_t **********************/
/*
   DMA_CLC               "DMA Clock Control Register"
*/
/**********************************************************/

#define DMA_CLC_MASK                    0x00000037
#define DMA_CLC_DISR_MASK               0x00000001
#define DMA_CLC_DISR_SHIFT              0
#define DMA_CLC_DISS_MASK               0x00000002
#define DMA_CLC_DISS_SHIFT              1
#define DMA_CLC_SPEN_MASK               0x00000004
#define DMA_CLC_SPEN_SHIFT              2
#define DMA_CLC_SBWE_MASK               0x00000010
#define DMA_CLC_SBWE_SHIFT              4
#define DMA_CLC_FSOE_MASK               0x00000020
#define DMA_CLC_FSOE_SHIFT              5



/****************** Masks for DMA_CLRE_t **********************/
/*
   DMA_CLRE              "DMA Clear Error Register"
*/
/**********************************************************/

#define DMA_CLRE_MASK                   0x883fffff
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
#define DMA_CLRE_CTL10_MASK             0x00000100
#define DMA_CLRE_CTL10_SHIFT            8
#define DMA_CLRE_CTL11_MASK             0x00000200
#define DMA_CLRE_CTL11_SHIFT            9
#define DMA_CLRE_CTL12_MASK             0x00000400
#define DMA_CLRE_CTL12_SHIFT            10
#define DMA_CLRE_CTL13_MASK             0x00000800
#define DMA_CLRE_CTL13_SHIFT            11
#define DMA_CLRE_CTL14_MASK             0x00001000
#define DMA_CLRE_CTL14_SHIFT            12
#define DMA_CLRE_CTL15_MASK             0x00002000
#define DMA_CLRE_CTL15_SHIFT            13
#define DMA_CLRE_CTL16_MASK             0x00004000
#define DMA_CLRE_CTL16_SHIFT            14
#define DMA_CLRE_CTL17_MASK             0x00008000
#define DMA_CLRE_CTL17_SHIFT            15
#define DMA_CLRE_CME0SER_MASK           0x00010000
#define DMA_CLRE_CME0SER_SHIFT          16
#define DMA_CLRE_CME0DER_MASK           0x00020000
#define DMA_CLRE_CME0DER_SHIFT          17
#define DMA_CLRE_CME1SER_MASK           0x00040000
#define DMA_CLRE_CME1SER_SHIFT          18
#define DMA_CLRE_CME1DER_MASK           0x00080000
#define DMA_CLRE_CME1DER_SHIFT          19
#define DMA_CLRE_CFPI0ER_MASK           0x00100000
#define DMA_CLRE_CFPI0ER_SHIFT          20
#define DMA_CLRE_CFPI1ER_MASK           0x00200000
#define DMA_CLRE_CFPI1ER_SHIFT          21
#define DMA_CLRE_CLRMLI0_MASK           0x08000000
#define DMA_CLRE_CLRMLI0_SHIFT          27
#define DMA_CLRE_CLRMLI1_MASK           0x80000000
#define DMA_CLRE_CLRMLI1_SHIFT          31



/****************** Masks for DMA_EER_t **********************/
/*
   DMA_EER               "DMA Enable Error Register"
*/
/**********************************************************/

#define DMA_EER_MASK                    0xffffffff
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
#define DMA_EER_ETRL10_MASK             0x00000100
#define DMA_EER_ETRL10_SHIFT            8
#define DMA_EER_ETRL11_MASK             0x00000200
#define DMA_EER_ETRL11_SHIFT            9
#define DMA_EER_ETRL12_MASK             0x00000400
#define DMA_EER_ETRL12_SHIFT            10
#define DMA_EER_ETRL13_MASK             0x00000800
#define DMA_EER_ETRL13_SHIFT            11
#define DMA_EER_ETRL14_MASK             0x00001000
#define DMA_EER_ETRL14_SHIFT            12
#define DMA_EER_ETRL15_MASK             0x00002000
#define DMA_EER_ETRL15_SHIFT            13
#define DMA_EER_ETRL16_MASK             0x00004000
#define DMA_EER_ETRL16_SHIFT            14
#define DMA_EER_ETRL17_MASK             0x00008000
#define DMA_EER_ETRL17_SHIFT            15
#define DMA_EER_EME0SER_MASK            0x00010000
#define DMA_EER_EME0SER_SHIFT           16
#define DMA_EER_EME0DER_MASK            0x00020000
#define DMA_EER_EME0DER_SHIFT           17
#define DMA_EER_EME1SER_MASK            0x00040000
#define DMA_EER_EME1SER_SHIFT           18
#define DMA_EER_EME1DER_MASK            0x00080000
#define DMA_EER_EME1DER_SHIFT           19
#define DMA_EER_ME0INP_MASK             0x00f00000
#define DMA_EER_ME0INP_SHIFT            20
#define DMA_EER_ME1INP_MASK             0x0f000000
#define DMA_EER_ME1INP_SHIFT            24
#define DMA_EER_TRLINP_MASK             0xf0000000
#define DMA_EER_TRLINP_SHIFT            28



/****************** Masks for DMA_ERRSR_t **********************/
/*
   DMA_ERRSR             "DMA Error Status Register"
*/
/**********************************************************/

#define DMA_ERRSR_MASK                  0xff3fffff
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
#define DMA_ERRSR_TRL10_MASK            0x00000100
#define DMA_ERRSR_TRL10_SHIFT           8
#define DMA_ERRSR_TRL11_MASK            0x00000200
#define DMA_ERRSR_TRL11_SHIFT           9
#define DMA_ERRSR_TRL12_MASK            0x00000400
#define DMA_ERRSR_TRL12_SHIFT           10
#define DMA_ERRSR_TRL13_MASK            0x00000800
#define DMA_ERRSR_TRL13_SHIFT           11
#define DMA_ERRSR_TRL14_MASK            0x00001000
#define DMA_ERRSR_TRL14_SHIFT           12
#define DMA_ERRSR_TRL15_MASK            0x00002000
#define DMA_ERRSR_TRL15_SHIFT           13
#define DMA_ERRSR_TRL16_MASK            0x00004000
#define DMA_ERRSR_TRL16_SHIFT           14
#define DMA_ERRSR_TRL17_MASK            0x00008000
#define DMA_ERRSR_TRL17_SHIFT           15
#define DMA_ERRSR_ME0SER_MASK           0x00010000
#define DMA_ERRSR_ME0SER_SHIFT          16
#define DMA_ERRSR_ME0DER_MASK           0x00020000
#define DMA_ERRSR_ME0DER_SHIFT          17
#define DMA_ERRSR_ME1SER_MASK           0x00040000
#define DMA_ERRSR_ME1SER_SHIFT          18
#define DMA_ERRSR_ME1DER_MASK           0x00080000
#define DMA_ERRSR_ME1DER_SHIFT          19
#define DMA_ERRSR_FPI0ER_MASK           0x00100000
#define DMA_ERRSR_FPI0ER_SHIFT          20
#define DMA_ERRSR_FPI1ER_MASK           0x00200000
#define DMA_ERRSR_FPI1ER_SHIFT          21
#define DMA_ERRSR_LECME0_MASK           0x07000000
#define DMA_ERRSR_LECME0_SHIFT          24
#define DMA_ERRSR_MLI0_MASK             0x08000000
#define DMA_ERRSR_MLI0_SHIFT            27
#define DMA_ERRSR_LECME1_MASK           0x70000000
#define DMA_ERRSR_LECME1_SHIFT          28
#define DMA_ERRSR_MLI1_MASK             0x80000000
#define DMA_ERRSR_MLI1_SHIFT            31



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

#define DMA_HTREQ_MASK                  0xffffffff
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
#define DMA_HTREQ_ECH10_MASK            0x00000100
#define DMA_HTREQ_ECH10_SHIFT           8
#define DMA_HTREQ_ECH11_MASK            0x00000200
#define DMA_HTREQ_ECH11_SHIFT           9
#define DMA_HTREQ_ECH12_MASK            0x00000400
#define DMA_HTREQ_ECH12_SHIFT           10
#define DMA_HTREQ_ECH13_MASK            0x00000800
#define DMA_HTREQ_ECH13_SHIFT           11
#define DMA_HTREQ_ECH14_MASK            0x00001000
#define DMA_HTREQ_ECH14_SHIFT           12
#define DMA_HTREQ_ECH15_MASK            0x00002000
#define DMA_HTREQ_ECH15_SHIFT           13
#define DMA_HTREQ_ECH16_MASK            0x00004000
#define DMA_HTREQ_ECH16_SHIFT           14
#define DMA_HTREQ_ECH17_MASK            0x00008000
#define DMA_HTREQ_ECH17_SHIFT           15
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
#define DMA_HTREQ_DCH10_MASK            0x01000000
#define DMA_HTREQ_DCH10_SHIFT           24
#define DMA_HTREQ_DCH11_MASK            0x02000000
#define DMA_HTREQ_DCH11_SHIFT           25
#define DMA_HTREQ_DCH12_MASK            0x04000000
#define DMA_HTREQ_DCH12_SHIFT           26
#define DMA_HTREQ_DCH13_MASK            0x08000000
#define DMA_HTREQ_DCH13_SHIFT           27
#define DMA_HTREQ_DCH14_MASK            0x10000000
#define DMA_HTREQ_DCH14_SHIFT           28
#define DMA_HTREQ_DCH15_MASK            0x20000000
#define DMA_HTREQ_DCH15_SHIFT           29
#define DMA_HTREQ_DCH16_MASK            0x40000000
#define DMA_HTREQ_DCH16_SHIFT           30
#define DMA_HTREQ_DCH17_MASK            0x80000000
#define DMA_HTREQ_DCH17_SHIFT           31



/****************** Masks for DMA_ID_t **********************/
/*
   DMA_ID                "DMA Module Identification Register"
*/
/**********************************************************/

#define DMA_ID_MASK                     0x00000000



/****************** Masks for DMA_INTCR_t **********************/
/*
   DMA_INTCR             "DMA Interrupt Clear Register"
*/
/**********************************************************/

#define DMA_INTCR_MASK                  0xffffffff
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
#define DMA_INTCR_CICH10_MASK           0x00000100
#define DMA_INTCR_CICH10_SHIFT          8
#define DMA_INTCR_CICH11_MASK           0x00000200
#define DMA_INTCR_CICH11_SHIFT          9
#define DMA_INTCR_CICH12_MASK           0x00000400
#define DMA_INTCR_CICH12_SHIFT          10
#define DMA_INTCR_CICH13_MASK           0x00000800
#define DMA_INTCR_CICH13_SHIFT          11
#define DMA_INTCR_CICH14_MASK           0x00001000
#define DMA_INTCR_CICH14_SHIFT          12
#define DMA_INTCR_CICH15_MASK           0x00002000
#define DMA_INTCR_CICH15_SHIFT          13
#define DMA_INTCR_CICH16_MASK           0x00004000
#define DMA_INTCR_CICH16_SHIFT          14
#define DMA_INTCR_CICH17_MASK           0x00008000
#define DMA_INTCR_CICH17_SHIFT          15
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
#define DMA_INTCR_CWRP10_MASK           0x01000000
#define DMA_INTCR_CWRP10_SHIFT          24
#define DMA_INTCR_CWRP11_MASK           0x02000000
#define DMA_INTCR_CWRP11_SHIFT          25
#define DMA_INTCR_CWRP12_MASK           0x04000000
#define DMA_INTCR_CWRP12_SHIFT          26
#define DMA_INTCR_CWRP13_MASK           0x08000000
#define DMA_INTCR_CWRP13_SHIFT          27
#define DMA_INTCR_CWRP14_MASK           0x10000000
#define DMA_INTCR_CWRP14_SHIFT          28
#define DMA_INTCR_CWRP15_MASK           0x20000000
#define DMA_INTCR_CWRP15_SHIFT          29
#define DMA_INTCR_CWRP16_MASK           0x40000000
#define DMA_INTCR_CWRP16_SHIFT          30
#define DMA_INTCR_CWRP17_MASK           0x80000000
#define DMA_INTCR_CWRP17_SHIFT          31



/****************** Masks for DMA_INTSR_t **********************/
/*
   DMA_INTSR             "DMA Interrupt Status Register"
*/
/**********************************************************/

#define DMA_INTSR_MASK                  0xffffffff
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
#define DMA_INTSR_ICH10_MASK            0x00000100
#define DMA_INTSR_ICH10_SHIFT           8
#define DMA_INTSR_ICH11_MASK            0x00000200
#define DMA_INTSR_ICH11_SHIFT           9
#define DMA_INTSR_ICH12_MASK            0x00000400
#define DMA_INTSR_ICH12_SHIFT           10
#define DMA_INTSR_ICH13_MASK            0x00000800
#define DMA_INTSR_ICH13_SHIFT           11
#define DMA_INTSR_ICH14_MASK            0x00001000
#define DMA_INTSR_ICH14_SHIFT           12
#define DMA_INTSR_ICH15_MASK            0x00002000
#define DMA_INTSR_ICH15_SHIFT           13
#define DMA_INTSR_ICH16_MASK            0x00004000
#define DMA_INTSR_ICH16_SHIFT           14
#define DMA_INTSR_ICH17_MASK            0x00008000
#define DMA_INTSR_ICH17_SHIFT           15
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
#define DMA_INTSR_IPM10_MASK            0x01000000
#define DMA_INTSR_IPM10_SHIFT           24
#define DMA_INTSR_IPM11_MASK            0x02000000
#define DMA_INTSR_IPM11_SHIFT           25
#define DMA_INTSR_IPM12_MASK            0x04000000
#define DMA_INTSR_IPM12_SHIFT           26
#define DMA_INTSR_IPM13_MASK            0x08000000
#define DMA_INTSR_IPM13_SHIFT           27
#define DMA_INTSR_IPM14_MASK            0x10000000
#define DMA_INTSR_IPM14_SHIFT           28
#define DMA_INTSR_IPM15_MASK            0x20000000
#define DMA_INTSR_IPM15_SHIFT           29
#define DMA_INTSR_IPM16_MASK            0x40000000
#define DMA_INTSR_IPM16_SHIFT           30
#define DMA_INTSR_IPM17_MASK            0x80000000
#define DMA_INTSR_IPM17_SHIFT           31



/****************** Masks for DMA_MESR_t **********************/
/*
   DMA_MESR              "DMA Move Engine Status Register"
*/
/**********************************************************/

#define DMA_MESR_MASK                   0x0000ffff
#define DMA_MESR_ME0RS_MASK             0x00000001
#define DMA_MESR_ME0RS_SHIFT            0
#define DMA_MESR_CH0_MASK               0x0000000e
#define DMA_MESR_CH0_SHIFT              1
#define DMA_MESR_ME0WS_MASK             0x00000010
#define DMA_MESR_ME0WS_SHIFT            4
#define DMA_MESR_RBT0_MASK              0x000000e0
#define DMA_MESR_RBT0_SHIFT             5
#define DMA_MESR_ME1RS_MASK             0x00000100
#define DMA_MESR_ME1RS_SHIFT            8
#define DMA_MESR_CH1_MASK               0x00000e00
#define DMA_MESR_CH1_SHIFT              9
#define DMA_MESR_ME1WS_MASK             0x00001000
#define DMA_MESR_ME1WS_SHIFT            12
#define DMA_MESR_RBT1_MASK              0x0000e000
#define DMA_MESR_RBT1_SHIFT             13



/****************** Masks for DMA_OCDSR_t **********************/
/*
   DMA_OCDSR             "DMA OCDS Register"
*/
/**********************************************************/

#define DMA_OCDSR_MASK                  0x00003f3f
#define DMA_OCDSR_BTRC0_MASK            0x00000003
#define DMA_OCDSR_BTRC0_SHIFT           0
#define DMA_OCDSR_BCHS0_MASK            0x0000001c
#define DMA_OCDSR_BCHS0_SHIFT           2
#define DMA_OCDSR_BRL0_MASK             0x00000020
#define DMA_OCDSR_BRL0_SHIFT            5
#define DMA_OCDSR_BTRC1_MASK            0x00000300
#define DMA_OCDSR_BTRC1_SHIFT           8
#define DMA_OCDSR_BCHS1_MASK            0x00001c00
#define DMA_OCDSR_BCHS1_SHIFT           10
#define DMA_OCDSR_BRL1_MASK             0x00002000
#define DMA_OCDSR_BRL1_SHIFT            13



/****************** Masks for DMA_STREQ_t **********************/
/*
   DMA_STREQ             "DMA Software Transaction Request Register"
*/
/**********************************************************/

#define DMA_STREQ_MASK                  0x0000ffff
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
#define DMA_STREQ_SCH10_MASK            0x00000100
#define DMA_STREQ_SCH10_SHIFT           8
#define DMA_STREQ_SCH11_MASK            0x00000200
#define DMA_STREQ_SCH11_SHIFT           9
#define DMA_STREQ_SCH12_MASK            0x00000400
#define DMA_STREQ_SCH12_SHIFT           10
#define DMA_STREQ_SCH13_MASK            0x00000800
#define DMA_STREQ_SCH13_SHIFT           11
#define DMA_STREQ_SCH14_MASK            0x00001000
#define DMA_STREQ_SCH14_SHIFT           12
#define DMA_STREQ_SCH15_MASK            0x00002000
#define DMA_STREQ_SCH15_SHIFT           13
#define DMA_STREQ_SCH16_MASK            0x00004000
#define DMA_STREQ_SCH16_SHIFT           14
#define DMA_STREQ_SCH17_MASK            0x00008000
#define DMA_STREQ_SCH17_SHIFT           15



/****************** Masks for DMA_SUSPMR_t **********************/
/*
   DMA_SUSPMR            "DMA Suspend Mode Register"
*/
/**********************************************************/

#define DMA_SUSPMR_MASK                 0xffffffff
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
#define DMA_SUSPMR_SUSEN10_MASK         0x00000100
#define DMA_SUSPMR_SUSEN10_SHIFT        8
#define DMA_SUSPMR_SUSEN11_MASK         0x00000200
#define DMA_SUSPMR_SUSEN11_SHIFT        9
#define DMA_SUSPMR_SUSEN12_MASK         0x00000400
#define DMA_SUSPMR_SUSEN12_SHIFT        10
#define DMA_SUSPMR_SUSEN13_MASK         0x00000800
#define DMA_SUSPMR_SUSEN13_SHIFT        11
#define DMA_SUSPMR_SUSEN14_MASK         0x00001000
#define DMA_SUSPMR_SUSEN14_SHIFT        12
#define DMA_SUSPMR_SUSEN15_MASK         0x00002000
#define DMA_SUSPMR_SUSEN15_SHIFT        13
#define DMA_SUSPMR_SUSEN16_MASK         0x00004000
#define DMA_SUSPMR_SUSEN16_SHIFT        14
#define DMA_SUSPMR_SUSEN17_MASK         0x00008000
#define DMA_SUSPMR_SUSEN17_SHIFT        15
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
#define DMA_SUSPMR_SUSAC10_MASK         0x01000000
#define DMA_SUSPMR_SUSAC10_SHIFT        24
#define DMA_SUSPMR_SUSAC11_MASK         0x02000000
#define DMA_SUSPMR_SUSAC11_SHIFT        25
#define DMA_SUSPMR_SUSAC12_MASK         0x04000000
#define DMA_SUSPMR_SUSAC12_SHIFT        26
#define DMA_SUSPMR_SUSAC13_MASK         0x08000000
#define DMA_SUSPMR_SUSAC13_SHIFT        27
#define DMA_SUSPMR_SUSAC14_MASK         0x10000000
#define DMA_SUSPMR_SUSAC14_SHIFT        28
#define DMA_SUSPMR_SUSAC15_MASK         0x20000000
#define DMA_SUSPMR_SUSAC15_SHIFT        29
#define DMA_SUSPMR_SUSAC16_MASK         0x40000000
#define DMA_SUSPMR_SUSAC16_SHIFT        30
#define DMA_SUSPMR_SUSAC17_MASK         0x80000000
#define DMA_SUSPMR_SUSAC17_SHIFT        31



/****************** Masks for DMA_TRSR_t **********************/
/*
   DMA_TRSR              "DMA Transaction Request State Register"
*/
/**********************************************************/

#define DMA_TRSR_MASK                   0xffffffff
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
#define DMA_TRSR_CH10_MASK              0x00000100
#define DMA_TRSR_CH10_SHIFT             8
#define DMA_TRSR_CH11_MASK              0x00000200
#define DMA_TRSR_CH11_SHIFT             9
#define DMA_TRSR_CH12_MASK              0x00000400
#define DMA_TRSR_CH12_SHIFT             10
#define DMA_TRSR_CH13_MASK              0x00000800
#define DMA_TRSR_CH13_SHIFT             11
#define DMA_TRSR_CH14_MASK              0x00001000
#define DMA_TRSR_CH14_SHIFT             12
#define DMA_TRSR_CH15_MASK              0x00002000
#define DMA_TRSR_CH15_SHIFT             13
#define DMA_TRSR_CH16_MASK              0x00004000
#define DMA_TRSR_CH16_SHIFT             14
#define DMA_TRSR_CH17_MASK              0x00008000
#define DMA_TRSR_CH17_SHIFT             15
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
#define DMA_TRSR_HTRE10_MASK            0x01000000
#define DMA_TRSR_HTRE10_SHIFT           24
#define DMA_TRSR_HTRE11_MASK            0x02000000
#define DMA_TRSR_HTRE11_SHIFT           25
#define DMA_TRSR_HTRE12_MASK            0x04000000
#define DMA_TRSR_HTRE12_SHIFT           26
#define DMA_TRSR_HTRE13_MASK            0x08000000
#define DMA_TRSR_HTRE13_SHIFT           27
#define DMA_TRSR_HTRE14_MASK            0x10000000
#define DMA_TRSR_HTRE14_SHIFT           28
#define DMA_TRSR_HTRE15_MASK            0x20000000
#define DMA_TRSR_HTRE15_SHIFT           29
#define DMA_TRSR_HTRE16_MASK            0x40000000
#define DMA_TRSR_HTRE16_SHIFT           30
#define DMA_TRSR_HTRE17_MASK            0x80000000
#define DMA_TRSR_HTRE17_SHIFT           31



/****************** Masks for DMA_WRPSR_t **********************/
/*
   DMA_WRPSR             "DMA Wrap Status Register"
*/
/**********************************************************/

#define DMA_WRPSR_MASK                  0xffffffff
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
#define DMA_WRPSR_WRPS10_MASK           0x00000100
#define DMA_WRPSR_WRPS10_SHIFT          8
#define DMA_WRPSR_WRPS11_MASK           0x00000200
#define DMA_WRPSR_WRPS11_SHIFT          9
#define DMA_WRPSR_WRPS12_MASK           0x00000400
#define DMA_WRPSR_WRPS12_SHIFT          10
#define DMA_WRPSR_WRPS13_MASK           0x00000800
#define DMA_WRPSR_WRPS13_SHIFT          11
#define DMA_WRPSR_WRPS14_MASK           0x00001000
#define DMA_WRPSR_WRPS14_SHIFT          12
#define DMA_WRPSR_WRPS15_MASK           0x00002000
#define DMA_WRPSR_WRPS15_SHIFT          13
#define DMA_WRPSR_WRPS16_MASK           0x00004000
#define DMA_WRPSR_WRPS16_SHIFT          14
#define DMA_WRPSR_WRPS17_MASK           0x00008000
#define DMA_WRPSR_WRPS17_SHIFT          15
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
#define DMA_WRPSR_WRPD10_MASK           0x01000000
#define DMA_WRPSR_WRPD10_SHIFT          24
#define DMA_WRPSR_WRPD11_MASK           0x02000000
#define DMA_WRPSR_WRPD11_SHIFT          25
#define DMA_WRPSR_WRPD12_MASK           0x04000000
#define DMA_WRPSR_WRPD12_SHIFT          26
#define DMA_WRPSR_WRPD13_MASK           0x08000000
#define DMA_WRPSR_WRPD13_SHIFT          27
#define DMA_WRPSR_WRPD14_MASK           0x10000000
#define DMA_WRPSR_WRPD14_SHIFT          28
#define DMA_WRPSR_WRPD15_MASK           0x20000000
#define DMA_WRPSR_WRPD15_SHIFT          29
#define DMA_WRPSR_WRPD16_MASK           0x40000000
#define DMA_WRPSR_WRPD16_SHIFT          30
#define DMA_WRPSR_WRPD17_MASK           0x80000000
#define DMA_WRPSR_WRPD17_SHIFT          31




#endif /* _HAVE_TRICORE_DMA_MASKS_H_ */

