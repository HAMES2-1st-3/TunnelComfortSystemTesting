/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P9_MASKS_H_
#define _HAVE_TRICORE_P9_MASKS_H_


/****************** Masks for P9_ESR_t **********************/
/*
   P9_ESR                "Port 9 Emergency Stop Register"
*/
/**********************************************************/

#define P9_ESR_MASK                     0x000001ff
#define P9_ESR_EN0_MASK                 0x00000001
#define P9_ESR_EN0_SHIFT                0
#define P9_ESR_EN1_MASK                 0x00000002
#define P9_ESR_EN1_SHIFT                1
#define P9_ESR_EN2_MASK                 0x00000004
#define P9_ESR_EN2_SHIFT                2
#define P9_ESR_EN3_MASK                 0x00000008
#define P9_ESR_EN3_SHIFT                3
#define P9_ESR_EN4_MASK                 0x00000010
#define P9_ESR_EN4_SHIFT                4
#define P9_ESR_EN5_MASK                 0x00000020
#define P9_ESR_EN5_SHIFT                5
#define P9_ESR_EN6_MASK                 0x00000040
#define P9_ESR_EN6_SHIFT                6
#define P9_ESR_EN7_MASK                 0x00000080
#define P9_ESR_EN7_SHIFT                7
#define P9_ESR_EN8_MASK                 0x00000100
#define P9_ESR_EN8_SHIFT                8



/****************** Masks for P9_IN_t **********************/
/*
   P9_IN                 "Port 9 Input Register"
*/
/**********************************************************/

#define P9_IN_MASK                      0x000001ff
#define P9_IN_P0_MASK                   0x00000001
#define P9_IN_P0_SHIFT                  0
#define P9_IN_P1_MASK                   0x00000002
#define P9_IN_P1_SHIFT                  1
#define P9_IN_P2_MASK                   0x00000004
#define P9_IN_P2_SHIFT                  2
#define P9_IN_P3_MASK                   0x00000008
#define P9_IN_P3_SHIFT                  3
#define P9_IN_P4_MASK                   0x00000010
#define P9_IN_P4_SHIFT                  4
#define P9_IN_P5_MASK                   0x00000020
#define P9_IN_P5_SHIFT                  5
#define P9_IN_P6_MASK                   0x00000040
#define P9_IN_P6_SHIFT                  6
#define P9_IN_P7_MASK                   0x00000080
#define P9_IN_P7_SHIFT                  7
#define P9_IN_P8_MASK                   0x00000100
#define P9_IN_P8_SHIFT                  8



/****************** Masks for P9_IOCR8_t **********************/
/*
   P9_IOCR8              "Port 9 Input/Output Control Register 8"
*/
/**********************************************************/

#define P9_IOCR8_MASK                   0x000000f0
#define P9_IOCR8_PC8_MASK               0x000000f0
#define P9_IOCR8_PC8_SHIFT              4



/****************** Masks for P9_OMR_t **********************/
/*
   P9_OMR                "Port 9 Output Modification Register"
*/
/**********************************************************/

#define P9_OMR_MASK                     0x01ff01ff
#define P9_OMR_PS0_MASK                 0x00000001
#define P9_OMR_PS0_SHIFT                0
#define P9_OMR_PS1_MASK                 0x00000002
#define P9_OMR_PS1_SHIFT                1
#define P9_OMR_PS2_MASK                 0x00000004
#define P9_OMR_PS2_SHIFT                2
#define P9_OMR_PS3_MASK                 0x00000008
#define P9_OMR_PS3_SHIFT                3
#define P9_OMR_PS4_MASK                 0x00000010
#define P9_OMR_PS4_SHIFT                4
#define P9_OMR_PS5_MASK                 0x00000020
#define P9_OMR_PS5_SHIFT                5
#define P9_OMR_PS6_MASK                 0x00000040
#define P9_OMR_PS6_SHIFT                6
#define P9_OMR_PS7_MASK                 0x00000080
#define P9_OMR_PS7_SHIFT                7
#define P9_OMR_PS8_MASK                 0x00000100
#define P9_OMR_PS8_SHIFT                8
#define P9_OMR_PR0_MASK                 0x00010000
#define P9_OMR_PR0_SHIFT                16
#define P9_OMR_PR1_MASK                 0x00020000
#define P9_OMR_PR1_SHIFT                17
#define P9_OMR_PR2_MASK                 0x00040000
#define P9_OMR_PR2_SHIFT                18
#define P9_OMR_PR3_MASK                 0x00080000
#define P9_OMR_PR3_SHIFT                19
#define P9_OMR_PR4_MASK                 0x00100000
#define P9_OMR_PR4_SHIFT                20
#define P9_OMR_PR5_MASK                 0x00200000
#define P9_OMR_PR5_SHIFT                21
#define P9_OMR_PR6_MASK                 0x00400000
#define P9_OMR_PR6_SHIFT                22
#define P9_OMR_PR7_MASK                 0x00800000
#define P9_OMR_PR7_SHIFT                23
#define P9_OMR_PR8_MASK                 0x01000000
#define P9_OMR_PR8_SHIFT                24



/****************** Masks for P9_OUT_t **********************/
/*
   P9_OUT                "Port 9 Output Register"
*/
/**********************************************************/

#define P9_OUT_MASK                     0x000001ff
#define P9_OUT_P0_MASK                  0x00000001
#define P9_OUT_P0_SHIFT                 0
#define P9_OUT_P1_MASK                  0x00000002
#define P9_OUT_P1_SHIFT                 1
#define P9_OUT_P2_MASK                  0x00000004
#define P9_OUT_P2_SHIFT                 2
#define P9_OUT_P3_MASK                  0x00000008
#define P9_OUT_P3_SHIFT                 3
#define P9_OUT_P4_MASK                  0x00000010
#define P9_OUT_P4_SHIFT                 4
#define P9_OUT_P5_MASK                  0x00000020
#define P9_OUT_P5_SHIFT                 5
#define P9_OUT_P6_MASK                  0x00000040
#define P9_OUT_P6_SHIFT                 6
#define P9_OUT_P7_MASK                  0x00000080
#define P9_OUT_P7_SHIFT                 7
#define P9_OUT_P8_MASK                  0x00000100
#define P9_OUT_P8_SHIFT                 8



/****************** Masks for P9_PDR_t **********************/
/*
   P9_PDR                "Port 9 Port Driver Mode Register"
*/
/**********************************************************/

#define P9_PDR_MASK                     0x00770007
#define P9_PDR_PD0_MASK                 0x00000007
#define P9_PDR_PD0_SHIFT                0
#define P9_PDR_PDMSC0_MASK              0x00070000
#define P9_PDR_PDMSC0_SHIFT             16
#define P9_PDR_PDMSC1_MASK              0x00700000
#define P9_PDR_PDMSC1_SHIFT             20




#endif /* _HAVE_TRICORE_P9_MASKS_H_ */

