/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P2_MASKS_H_
#define _HAVE_TRICORE_P2_MASKS_H_


/****************** Masks for P2_IN_t **********************/
/*
   P2_IN                 "Port 2 Input Register"
*/
/**********************************************************/

#define P2_IN_MASK                      0x00003fff
#define P2_IN_P0_MASK                   0x00000001
#define P2_IN_P0_SHIFT                  0
#define P2_IN_P1_MASK                   0x00000002
#define P2_IN_P1_SHIFT                  1
#define P2_IN_P2_MASK                   0x00000004
#define P2_IN_P2_SHIFT                  2
#define P2_IN_P3_MASK                   0x00000008
#define P2_IN_P3_SHIFT                  3
#define P2_IN_P4_MASK                   0x00000010
#define P2_IN_P4_SHIFT                  4
#define P2_IN_P5_MASK                   0x00000020
#define P2_IN_P5_SHIFT                  5
#define P2_IN_P6_MASK                   0x00000040
#define P2_IN_P6_SHIFT                  6
#define P2_IN_P7_MASK                   0x00000080
#define P2_IN_P7_SHIFT                  7
#define P2_IN_P8_MASK                   0x00000100
#define P2_IN_P8_SHIFT                  8
#define P2_IN_P9_MASK                   0x00000200
#define P2_IN_P9_SHIFT                  9
#define P2_IN_P10_MASK                  0x00000400
#define P2_IN_P10_SHIFT                 10
#define P2_IN_P11_MASK                  0x00000800
#define P2_IN_P11_SHIFT                 11
#define P2_IN_P12_MASK                  0x00001000
#define P2_IN_P12_SHIFT                 12
#define P2_IN_P13_MASK                  0x00002000
#define P2_IN_P13_SHIFT                 13



/****************** Masks for P2_IOCR12_t **********************/
/*
   P2_IOCR12             "Input/Output Control Register 12"
*/
/**********************************************************/

#define P2_IOCR12_MASK                  0x0000f0f0
#define P2_IOCR12_PC12_MASK             0x000000f0
#define P2_IOCR12_PC12_SHIFT            4
#define P2_IOCR12_PC13_MASK             0x0000f000
#define P2_IOCR12_PC13_SHIFT            12



/****************** Masks for P2_OMR_t **********************/
/*
   P2_OMR                "Port 2 Output Modification Register"
*/
/**********************************************************/

#define P2_OMR_MASK                     0x3fff3fff
#define P2_OMR_PS0_MASK                 0x00000001
#define P2_OMR_PS0_SHIFT                0
#define P2_OMR_PS1_MASK                 0x00000002
#define P2_OMR_PS1_SHIFT                1
#define P2_OMR_PS2_MASK                 0x00000004
#define P2_OMR_PS2_SHIFT                2
#define P2_OMR_PS3_MASK                 0x00000008
#define P2_OMR_PS3_SHIFT                3
#define P2_OMR_PS4_MASK                 0x00000010
#define P2_OMR_PS4_SHIFT                4
#define P2_OMR_PS5_MASK                 0x00000020
#define P2_OMR_PS5_SHIFT                5
#define P2_OMR_PS6_MASK                 0x00000040
#define P2_OMR_PS6_SHIFT                6
#define P2_OMR_PS7_MASK                 0x00000080
#define P2_OMR_PS7_SHIFT                7
#define P2_OMR_PS8_MASK                 0x00000100
#define P2_OMR_PS8_SHIFT                8
#define P2_OMR_PS9_MASK                 0x00000200
#define P2_OMR_PS9_SHIFT                9
#define P2_OMR_PS10_MASK                0x00000400
#define P2_OMR_PS10_SHIFT               10
#define P2_OMR_PS11_MASK                0x00000800
#define P2_OMR_PS11_SHIFT               11
#define P2_OMR_PS12_MASK                0x00001000
#define P2_OMR_PS12_SHIFT               12
#define P2_OMR_PS13_MASK                0x00002000
#define P2_OMR_PS13_SHIFT               13
#define P2_OMR_PR0_MASK                 0x00010000
#define P2_OMR_PR0_SHIFT                16
#define P2_OMR_PR1_MASK                 0x00020000
#define P2_OMR_PR1_SHIFT                17
#define P2_OMR_PR2_MASK                 0x00040000
#define P2_OMR_PR2_SHIFT                18
#define P2_OMR_PR3_MASK                 0x00080000
#define P2_OMR_PR3_SHIFT                19
#define P2_OMR_PR4_MASK                 0x00100000
#define P2_OMR_PR4_SHIFT                20
#define P2_OMR_PR5_MASK                 0x00200000
#define P2_OMR_PR5_SHIFT                21
#define P2_OMR_PR6_MASK                 0x00400000
#define P2_OMR_PR6_SHIFT                22
#define P2_OMR_PR7_MASK                 0x00800000
#define P2_OMR_PR7_SHIFT                23
#define P2_OMR_PR8_MASK                 0x01000000
#define P2_OMR_PR8_SHIFT                24
#define P2_OMR_PR9_MASK                 0x02000000
#define P2_OMR_PR9_SHIFT                25
#define P2_OMR_PR10_MASK                0x04000000
#define P2_OMR_PR10_SHIFT               26
#define P2_OMR_PR11_MASK                0x08000000
#define P2_OMR_PR11_SHIFT               27
#define P2_OMR_PR12_MASK                0x10000000
#define P2_OMR_PR12_SHIFT               28
#define P2_OMR_PR13_MASK                0x20000000
#define P2_OMR_PR13_SHIFT               29



/****************** Masks for P2_OUT_t **********************/
/*
   P2_OUT                "Output Register"
*/
/**********************************************************/

#define P2_OUT_MASK                     0x00003fff
#define P2_OUT_P0_MASK                  0x00000001
#define P2_OUT_P0_SHIFT                 0
#define P2_OUT_P1_MASK                  0x00000002
#define P2_OUT_P1_SHIFT                 1
#define P2_OUT_P2_MASK                  0x00000004
#define P2_OUT_P2_SHIFT                 2
#define P2_OUT_P3_MASK                  0x00000008
#define P2_OUT_P3_SHIFT                 3
#define P2_OUT_P4_MASK                  0x00000010
#define P2_OUT_P4_SHIFT                 4
#define P2_OUT_P5_MASK                  0x00000020
#define P2_OUT_P5_SHIFT                 5
#define P2_OUT_P6_MASK                  0x00000040
#define P2_OUT_P6_SHIFT                 6
#define P2_OUT_P7_MASK                  0x00000080
#define P2_OUT_P7_SHIFT                 7
#define P2_OUT_P8_MASK                  0x00000100
#define P2_OUT_P8_SHIFT                 8
#define P2_OUT_P9_MASK                  0x00000200
#define P2_OUT_P9_SHIFT                 9
#define P2_OUT_P10_MASK                 0x00000400
#define P2_OUT_P10_SHIFT                10
#define P2_OUT_P11_MASK                 0x00000800
#define P2_OUT_P11_SHIFT                11
#define P2_OUT_P12_MASK                 0x00001000
#define P2_OUT_P12_SHIFT                12
#define P2_OUT_P13_MASK                 0x00002000
#define P2_OUT_P13_SHIFT                13



/****************** Masks for P2_PDR_t **********************/
/*
   P2_PDR                "Port 2 Pad Driver Mode Register"
*/
/**********************************************************/

#define P2_PDR_MASK                     0x07770077
#define P2_PDR_PD0_MASK                 0x00000007
#define P2_PDR_PD0_SHIFT                0
#define P2_PDR_PD1_MASK                 0x00000070
#define P2_PDR_PD1_SHIFT                4
#define P2_PDR_PDMLI0_MASK              0x00070000
#define P2_PDR_PDMLI0_SHIFT             16
#define P2_PDR_PDMSC0_MASK              0x00700000
#define P2_PDR_PDMSC0_SHIFT             20
#define P2_PDR_PDSSC1_MASK              0x07000000
#define P2_PDR_PDSSC1_SHIFT             24




#endif /* _HAVE_TRICORE_P2_MASKS_H_ */

