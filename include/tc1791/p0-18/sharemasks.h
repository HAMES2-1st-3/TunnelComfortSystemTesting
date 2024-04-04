/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P0_18_SHAREMASKS_H_
#define _HAVE_TRICORE_P0_18_SHAREMASKS_H_


/****************** Masks for Pn_ESR_t **********************/
/*
   P0_ESR                "Port 0 Emergency Stop Register"
   P13_ESR               "Port 13 Emergency Stop Register"
   P14_ESR               "Port 14 Emergency Stop Register"
   P1_ESR                "Port 1 Emergency Stop Register"
   P2_ESR                "Port 2 Emergency Stop Register"
   P3_ESR                "Port 3 Emergency Stop Register"
   P4_ESR                "Port 4 Emergency Stop Register"
   P5_ESR                "Port 5 Emergency Stop Register"
   P8_ESR                "Port 8 Emergency Stop Register"
   P9_ESR                "Port 9 Emergency Stop Register"
*/
/**********************************************************/

#define Pn_ESR_MASK                     0x0000ffff
#define Pn_ESR_EN0_MASK                 0x00000001
#define Pn_ESR_EN0_SHIFT                0
#define Pn_ESR_EN1_MASK                 0x00000002
#define Pn_ESR_EN1_SHIFT                1
#define Pn_ESR_EN2_MASK                 0x00000004
#define Pn_ESR_EN2_SHIFT                2
#define Pn_ESR_EN3_MASK                 0x00000008
#define Pn_ESR_EN3_SHIFT                3
#define Pn_ESR_EN4_MASK                 0x00000010
#define Pn_ESR_EN4_SHIFT                4
#define Pn_ESR_EN5_MASK                 0x00000020
#define Pn_ESR_EN5_SHIFT                5
#define Pn_ESR_EN6_MASK                 0x00000040
#define Pn_ESR_EN6_SHIFT                6
#define Pn_ESR_EN7_MASK                 0x00000080
#define Pn_ESR_EN7_SHIFT                7
#define Pn_ESR_EN8_MASK                 0x00000100
#define Pn_ESR_EN8_SHIFT                8
#define Pn_ESR_EN9_MASK                 0x00000200
#define Pn_ESR_EN9_SHIFT                9
#define Pn_ESR_EN10_MASK                0x00000400
#define Pn_ESR_EN10_SHIFT               10
#define Pn_ESR_EN11_MASK                0x00000800
#define Pn_ESR_EN11_SHIFT               11
#define Pn_ESR_EN12_MASK                0x00001000
#define Pn_ESR_EN12_SHIFT               12
#define Pn_ESR_EN13_MASK                0x00002000
#define Pn_ESR_EN13_SHIFT               13
#define Pn_ESR_EN14_MASK                0x00004000
#define Pn_ESR_EN14_SHIFT               14
#define Pn_ESR_EN15_MASK                0x00008000
#define Pn_ESR_EN15_SHIFT               15



/****************** Masks for Pn_IN_t **********************/
/*
   P0_IN                 "Port 0 Input Register"
   P10_IN                "Port 10 Input Register"
   P11_IN                "Port 11 Input Register"
   P12_IN                "Port 12 Input Register"
   P13_IN                "Port 13 Input Register"
   P14_IN                "Port 14 Input Register"
   P15_IN                "Port 15 Input Register"
   P16_IN                "Port 16 Input Register"
   P17_IN                "Port 17 Input Register"
   P18_IN                "Port 18 Input Register"
   P1_IN                 "Port 1 Input Register"
   P2_IN                 "Port 2 Input Register"
   P3_IN                 "Port 3 Input Register"
   P4_IN                 "Port 4 Input Register"
   P5_IN                 "Port 5 Input Register"
   P6_IN                 "Port 6 Input Register"
   P7_IN                 "Port 7 Input Register"
   P8_IN                 "Port 8 Input Register"
   P9_IN                 "Port 9 Input Register"
*/
/**********************************************************/

#define Pn_IN_MASK                      0x0000ffff
#define Pn_IN_P0_MASK                   0x00000001
#define Pn_IN_P0_SHIFT                  0
#define Pn_IN_P1_MASK                   0x00000002
#define Pn_IN_P1_SHIFT                  1
#define Pn_IN_P2_MASK                   0x00000004
#define Pn_IN_P2_SHIFT                  2
#define Pn_IN_P3_MASK                   0x00000008
#define Pn_IN_P3_SHIFT                  3
#define Pn_IN_P4_MASK                   0x00000010
#define Pn_IN_P4_SHIFT                  4
#define Pn_IN_P5_MASK                   0x00000020
#define Pn_IN_P5_SHIFT                  5
#define Pn_IN_P6_MASK                   0x00000040
#define Pn_IN_P6_SHIFT                  6
#define Pn_IN_P7_MASK                   0x00000080
#define Pn_IN_P7_SHIFT                  7
#define Pn_IN_P8_MASK                   0x00000100
#define Pn_IN_P8_SHIFT                  8
#define Pn_IN_P9_MASK                   0x00000200
#define Pn_IN_P9_SHIFT                  9
#define Pn_IN_P10_MASK                  0x00000400
#define Pn_IN_P10_SHIFT                 10
#define Pn_IN_P11_MASK                  0x00000800
#define Pn_IN_P11_SHIFT                 11
#define Pn_IN_P12_MASK                  0x00001000
#define Pn_IN_P12_SHIFT                 12
#define Pn_IN_P13_MASK                  0x00002000
#define Pn_IN_P13_SHIFT                 13
#define Pn_IN_P14_MASK                  0x00004000
#define Pn_IN_P14_SHIFT                 14
#define Pn_IN_P15_MASK                  0x00008000
#define Pn_IN_P15_SHIFT                 15



/****************** Masks for Pn_IOCRm_t **********************/
/*
   P0_IOCR0              "Port 0 Input/Output Control Register 0"
   P0_IOCR12             "Port 0 Input/Output Control Register 12"
   P0_IOCR4              "Port 0 Input/Output Control Register 4"
   P0_IOCR8              "Port 0 Input/Output Control Register 8"
   P10_IOCR0             "Port 10 Input/Output Control Register 0"
   P10_IOCR4             "Port 10 Input/Output Control Register 4"
   P11_IOCR0             "Port 11 Input/Output Control Register 0"
   P11_IOCR12            "Port 11 Input/Output Control Register 12"
   P11_IOCR4             "Port 11 Input/Output Control Register 4"
   P11_IOCR8             "Port 11Input/Output Control Register 8"
   P12_IOCR0             "Port 12 Input/Output Control Register 0"
   P12_IOCR4             "Port 12 Input/Output Control Register 4"
   P13_IOCR0             "Port 13 Input/Output Control Register 0"
   P13_IOCR12            "Port 13 Input/Output Control Register 12"
   P13_IOCR4             "Port 13 Input/Output Control Register 4"
   P13_IOCR8             "Port 13 Input/Output Control Register 8"
   P14_IOCR0             "Port 14 Input/Output Control Register 0"
   P14_IOCR12            "Port 14 Input/Output Control Register 12"
   P14_IOCR4             "Port 14 Input/Output Control Register 4"
   P14_IOCR8             "Port 14 Input/Output Control Register 8"
   P15_IOCR0             "Port 15 Input/Output Control Register 0"
   P15_IOCR12            "Port 15 Input/Output Control Register 12"
   P15_IOCR4             "Port 15 Input/Output Control Register 4"
   P15_IOCR8             "Port 15 Input/Output Control Register 8"
   P16_IOCR0             "Port 16 Input/Output Control Register 0"
   P16_IOCR4             "Port 16 Input/Output Control Register 4"
   P16_IOCR8             "Port 16 Input/Output Control Register 8"
   P17_IOCR0             "Port 17 Input/Output Control Register 0"
   P17_IOCR12            "Port 17 Input/Output Control Register 12"
   P17_IOCR4             "Port 17 Input/Output Control Register 4"
   P17_IOCR8             "Port 17 Input/Output Control Register 8"
   P18_IOCR0             "Port 18 Input/Output Control Register 0"
   P18_IOCR4             "Port 18 Input/Output Control Register 4"
   P1_IOCR0              "Port 1 Input/Output Control Register 0"
   P1_IOCR12             "Port 1 Input/Output Control Register 12"
   P1_IOCR4              "Port 1 Input/Output Control Register 4"
   P1_IOCR8              "Port 1 Input/Output Control Register 8"
   P2_IOCR12             "Port 2 Input/Output Control Register 12"
   P2_IOCR4              "Port 2 Input/Output Control Register 4"
   P2_IOCR8              "Port 2 Input/Output Control Register 8"
   P3_IOCR0              "Port 3 Input/Output Control Register 0"
   P3_IOCR12             "Port 3 Input/Output Control Register 12"
   P3_IOCR4              "Port 3 Input/Output Control Register 4"
   P3_IOCR8              "Port 3 Input/Output Control Register 8"
   P4_IOCR0              "Port 4 Input/Output Control Register 0"
   P4_IOCR12             "Port 4 Input/Output Control Register 12"
   P4_IOCR4              "Port 4 Input/Output Control Register 4"
   P4_IOCR8              "Port 4 Input/Output Control Register 8"
   P5_IOCR0              "Port 5 Input/Output Control Register 0"
   P5_IOCR12             "Port 5 Input/Output Control Register 12"
   P5_IOCR4              "Port 5 Input/Output Control Register 4"
   P5_IOCR8              "Port 5 Input/Output Control Register 8"
   P6_IOCR0              "Port 6 Input/Output Control Register 0"
   P6_IOCR12             "Port 6 Input/Output Control Register 12"
   P6_IOCR4              "Port 6 Input/Output Control Register 4"
   P6_IOCR8              "Port 6 Input/Output Control Register 8"
   P7_IOCR0              "Port 7 Input/Output Control Register 0"
   P7_IOCR4              "Port 7 Input/Output Control Register 4"
   P8_IOCR0              "Port 8 Input/Output Control Register 0"
   P8_IOCR4              "Port 8 Input/Output Control Register 4"
   P9_IOCR0              "Port 9 Input/Output Control Register 0"
   P9_IOCR4              "Port 9 Input/Output Control Register 4"
   P9_IOCR8              "Port 9 Input/Output Control Register 8"
*/
/**********************************************************/

#define Pn_IOCRm_MASK                   0xf0f0f0f0
#define Pn_IOCRm_PC0_MASK               0x000000f0
#define Pn_IOCRm_PC0_SHIFT              4
#define Pn_IOCRm_PC1_MASK               0x0000f000
#define Pn_IOCRm_PC1_SHIFT              12
#define Pn_IOCRm_PC2_MASK               0x00f00000
#define Pn_IOCRm_PC2_SHIFT              20
#define Pn_IOCRm_PC3_MASK               0xf0000000
#define Pn_IOCRm_PC3_SHIFT              28



/****************** Masks for Pn_OMR_t **********************/
/*
   P0_OMR                "Port 0 Output Modification Register"
   P10_OMR               "Port 10 Output Modification Register"
   P11_OMR               "Port 11 Output Modification Register"
   P12_OMR               "Port 12 Output Modification Register"
   P13_OMR               "Port 13 Output Modification Register"
   P14_OMR               "Port 14 Output Modification Register"
   P15_OMR               "Port 15 Output Modification Register"
   P16_OMR               "Port 16 Output Modification Register"
   P18_OMR               "Port 18 Output Modification Register"
   P1_OMR                "Port 1 Output Modification Register"
   P2_OMR                "Port 2 Output Modification Register"
   P3_OMR                "Port 3 Output Modification Register"
   P4_OMR                "Port 4 Output Modification Register"
   P5_OMR                "Port 5 Output Modification Register"
   P6_OMR                "Port 6 Output Modification Register"
   P7_OMR                "Port 7 Output Modification Register"
   P8_OMR                "Port 8 Output Modification Register"
   P9_OMR                "Port 9 Output Modification Register"
*/
/**********************************************************/

#define Pn_OMR_MASK                     0xffffffff
#define Pn_OMR_PS0_MASK                 0x00000001
#define Pn_OMR_PS0_SHIFT                0
#define Pn_OMR_PS1_MASK                 0x00000002
#define Pn_OMR_PS1_SHIFT                1
#define Pn_OMR_PS2_MASK                 0x00000004
#define Pn_OMR_PS2_SHIFT                2
#define Pn_OMR_PS3_MASK                 0x00000008
#define Pn_OMR_PS3_SHIFT                3
#define Pn_OMR_PS4_MASK                 0x00000010
#define Pn_OMR_PS4_SHIFT                4
#define Pn_OMR_PS5_MASK                 0x00000020
#define Pn_OMR_PS5_SHIFT                5
#define Pn_OMR_PS6_MASK                 0x00000040
#define Pn_OMR_PS6_SHIFT                6
#define Pn_OMR_PS7_MASK                 0x00000080
#define Pn_OMR_PS7_SHIFT                7
#define Pn_OMR_PS8_MASK                 0x00000100
#define Pn_OMR_PS8_SHIFT                8
#define Pn_OMR_PS9_MASK                 0x00000200
#define Pn_OMR_PS9_SHIFT                9
#define Pn_OMR_PS10_MASK                0x00000400
#define Pn_OMR_PS10_SHIFT               10
#define Pn_OMR_PS11_MASK                0x00000800
#define Pn_OMR_PS11_SHIFT               11
#define Pn_OMR_PS12_MASK                0x00001000
#define Pn_OMR_PS12_SHIFT               12
#define Pn_OMR_PS13_MASK                0x00002000
#define Pn_OMR_PS13_SHIFT               13
#define Pn_OMR_PS14_MASK                0x00004000
#define Pn_OMR_PS14_SHIFT               14
#define Pn_OMR_PS15_MASK                0x00008000
#define Pn_OMR_PS15_SHIFT               15
#define Pn_OMR_PR0_MASK                 0x00010000
#define Pn_OMR_PR0_SHIFT                16
#define Pn_OMR_PR1_MASK                 0x00020000
#define Pn_OMR_PR1_SHIFT                17
#define Pn_OMR_PR2_MASK                 0x00040000
#define Pn_OMR_PR2_SHIFT                18
#define Pn_OMR_PR3_MASK                 0x00080000
#define Pn_OMR_PR3_SHIFT                19
#define Pn_OMR_PR4_MASK                 0x00100000
#define Pn_OMR_PR4_SHIFT                20
#define Pn_OMR_PR5_MASK                 0x00200000
#define Pn_OMR_PR5_SHIFT                21
#define Pn_OMR_PR6_MASK                 0x00400000
#define Pn_OMR_PR6_SHIFT                22
#define Pn_OMR_PR7_MASK                 0x00800000
#define Pn_OMR_PR7_SHIFT                23
#define Pn_OMR_PR8_MASK                 0x01000000
#define Pn_OMR_PR8_SHIFT                24
#define Pn_OMR_PR9_MASK                 0x02000000
#define Pn_OMR_PR9_SHIFT                25
#define Pn_OMR_PR10_MASK                0x04000000
#define Pn_OMR_PR10_SHIFT               26
#define Pn_OMR_PR11_MASK                0x08000000
#define Pn_OMR_PR11_SHIFT               27
#define Pn_OMR_PR12_MASK                0x10000000
#define Pn_OMR_PR12_SHIFT               28
#define Pn_OMR_PR13_MASK                0x20000000
#define Pn_OMR_PR13_SHIFT               29
#define Pn_OMR_PR14_MASK                0x40000000
#define Pn_OMR_PR14_SHIFT               30
#define Pn_OMR_PR15_MASK                0x80000000
#define Pn_OMR_PR15_SHIFT               31



/****************** Masks for Pn_OUT_t **********************/
/*
   P0_OUT                "Port 0 Output Register"
   P10_OUT               "Port 10 Output Register"
   P11_OUT               "Port 11 Output Register"
   P12_OUT               "Port 12 Output Register"
   P13_OUT               "Port 13 Output Register"
   P14_OUT               "Port 14 Output Register"
   P15_OUT               "Port 15 Output Register"
   P16_OUT               "Port 16 Output Register"
   P18_OUT               "Port 18 Output Register"
   P1_OUT                "Port 1 Output Register"
   P2_OUT                "Port 2 Output Register"
   P3_OUT                "Port 3 Output Register"
   P4_OUT                "Port 4 Output Register"
   P5_OUT                "Port 5 Output Register"
   P6_OUT                "Port 6 Output Register"
   P7_OUT                "Port 7 Output Register"
   P8_OUT                "Port 8 Output Register"
   P9_OUT                "Port 9 Output Register"
*/
/**********************************************************/

#define Pn_OUT_MASK                     0x0000ffff
#define Pn_OUT_P0_MASK                  0x00000001
#define Pn_OUT_P0_SHIFT                 0
#define Pn_OUT_P1_MASK                  0x00000002
#define Pn_OUT_P1_SHIFT                 1
#define Pn_OUT_P2_MASK                  0x00000004
#define Pn_OUT_P2_SHIFT                 2
#define Pn_OUT_P3_MASK                  0x00000008
#define Pn_OUT_P3_SHIFT                 3
#define Pn_OUT_P4_MASK                  0x00000010
#define Pn_OUT_P4_SHIFT                 4
#define Pn_OUT_P5_MASK                  0x00000020
#define Pn_OUT_P5_SHIFT                 5
#define Pn_OUT_P6_MASK                  0x00000040
#define Pn_OUT_P6_SHIFT                 6
#define Pn_OUT_P7_MASK                  0x00000080
#define Pn_OUT_P7_SHIFT                 7
#define Pn_OUT_P8_MASK                  0x00000100
#define Pn_OUT_P8_SHIFT                 8
#define Pn_OUT_P9_MASK                  0x00000200
#define Pn_OUT_P9_SHIFT                 9
#define Pn_OUT_P10_MASK                 0x00000400
#define Pn_OUT_P10_SHIFT                10
#define Pn_OUT_P11_MASK                 0x00000800
#define Pn_OUT_P11_SHIFT                11
#define Pn_OUT_P12_MASK                 0x00001000
#define Pn_OUT_P12_SHIFT                12
#define Pn_OUT_P13_MASK                 0x00002000
#define Pn_OUT_P13_SHIFT                13
#define Pn_OUT_P14_MASK                 0x00004000
#define Pn_OUT_P14_SHIFT                14
#define Pn_OUT_P15_MASK                 0x00008000
#define Pn_OUT_P15_SHIFT                15



/****************** Masks for Pn_PDRm_t **********************/
/*
   P0_PDR0               "Port 0 Pad Driver Mode 0 Register"
   P0_PDR1               "Port 0 Pad Driver Mode 1 Register"
   P11_PDR0              "Port 11 Pad Driver Mode 0 Register"
   P11_PDR1              "Port 11 Pad Driver Mode 1 Register"
   P12_PDR0              "Port 12 Pad Driver Mode 0 Register"
   P13_PDR0              "Port 13 Pad Driver Mode 0 Register"
   P13_PDR1              "Port 13 Pad Driver Mode 1 Register"
   P14_PDR0              "Port 14 Pad Driver Mode 0 Register"
   P14_PDR1              "Port 14 Pad Driver Mode 1 Register"
   P15_PDR0              "Port 15 Pad Driver Mode 0 Register"
   P15_PDR1              "Port 15 Pad Driver Mode 1 Register"
   P16_PDR0              "Port 16 Pad Driver Mode 0 Register"
   P18_PDR0              "Port 18 Pad Driver Mode 0 Register"
   P1_PDR0               "Port 1 Pad Driver Mode 0 Register"
   P1_PDR1               "Port 1 Pad Driver Mode 1 Register"
   P2_PDR1               "Port 2 Pad Driver Mode 1 Register"
   P3_PDR0               "Port 3 Pad Driver Mode 0 Register"
   P3_PDR1               "Port 3 Pad Driver Mode 1 Register"
   P4_PDR0               "Port 4 Pad Driver Mode 0 Register"
   P4_PDR1               "Port 4 Pad Driver Mode 1 Register"
   P5_PDR0               "Port 5 Pad Driver Mode 0 Register"
   P5_PDR1               "Port 5 Pad Driver Mode 1 Register"
   P6_PDR1               "Port 6 Pad Driver Mode 1 Register"
   P7_PDR0               "Port 7 Pad Driver Mode 0 Register"
   P8_PDR0               "Port 8 Pad Driver Mode 0 Register"
   P8_PDR1               "Port 8 Pad Driver Mode 1 Register"
   P9_PDR0               "Port 9 Pad Driver Mode 0 Register"
*/
/**********************************************************/

#define Pn_PDRm_MASK                    0x77777777
#define Pn_PDRm_PD0_MASK                0x00000007
#define Pn_PDRm_PD0_SHIFT               0
#define Pn_PDRm_PD1_MASK                0x00000070
#define Pn_PDRm_PD1_SHIFT               4
#define Pn_PDRm_PD2_MASK                0x00000700
#define Pn_PDRm_PD2_SHIFT               8
#define Pn_PDRm_PD3_MASK                0x00007000
#define Pn_PDRm_PD3_SHIFT               12
#define Pn_PDRm_PD4_MASK                0x00070000
#define Pn_PDRm_PD4_SHIFT               16
#define Pn_PDRm_PD5_MASK                0x00700000
#define Pn_PDRm_PD5_SHIFT               20
#define Pn_PDRm_PD6_MASK                0x07000000
#define Pn_PDRm_PD6_SHIFT               24
#define Pn_PDRm_PD7_MASK                0x70000000
#define Pn_PDRm_PD7_SHIFT               28




#endif /* _HAVE_TRICORE_P0_18_SHAREMASKS_H_ */

