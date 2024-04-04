/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P8_MASKS_H_
#define _HAVE_TRICORE_P8_MASKS_H_


/****************** Masks for P8_ESR_t **********************/
/*
   P8_ESR                "Port 8 Emergency Stop Register"
*/
/**********************************************************/

#define P8_ESR_MASK                     0x000000ff
#define P8_ESR_EN0_MASK                 0x00000001
#define P8_ESR_EN0_SHIFT                0
#define P8_ESR_EN1_MASK                 0x00000002
#define P8_ESR_EN1_SHIFT                1
#define P8_ESR_EN2_MASK                 0x00000004
#define P8_ESR_EN2_SHIFT                2
#define P8_ESR_EN3_MASK                 0x00000008
#define P8_ESR_EN3_SHIFT                3
#define P8_ESR_EN4_MASK                 0x00000010
#define P8_ESR_EN4_SHIFT                4
#define P8_ESR_EN5_MASK                 0x00000020
#define P8_ESR_EN5_SHIFT                5
#define P8_ESR_EN6_MASK                 0x00000040
#define P8_ESR_EN6_SHIFT                6
#define P8_ESR_EN7_MASK                 0x00000080
#define P8_ESR_EN7_SHIFT                7



/****************** Masks for P8_OMR_t **********************/
/*
   P8_OMR                "Port 8 Output Modification Register"
*/
/**********************************************************/

#define P8_OMR_MASK                     0x00ff00ff
#define P8_OMR_PS0_MASK                 0x00000001
#define P8_OMR_PS0_SHIFT                0
#define P8_OMR_PS1_MASK                 0x00000002
#define P8_OMR_PS1_SHIFT                1
#define P8_OMR_PS2_MASK                 0x00000004
#define P8_OMR_PS2_SHIFT                2
#define P8_OMR_PS3_MASK                 0x00000008
#define P8_OMR_PS3_SHIFT                3
#define P8_OMR_PS4_MASK                 0x00000010
#define P8_OMR_PS4_SHIFT                4
#define P8_OMR_PS5_MASK                 0x00000020
#define P8_OMR_PS5_SHIFT                5
#define P8_OMR_PS6_MASK                 0x00000040
#define P8_OMR_PS6_SHIFT                6
#define P8_OMR_PS7_MASK                 0x00000080
#define P8_OMR_PS7_SHIFT                7
#define P8_OMR_PR0_MASK                 0x00010000
#define P8_OMR_PR0_SHIFT                16
#define P8_OMR_PR1_MASK                 0x00020000
#define P8_OMR_PR1_SHIFT                17
#define P8_OMR_PR2_MASK                 0x00040000
#define P8_OMR_PR2_SHIFT                18
#define P8_OMR_PR3_MASK                 0x00080000
#define P8_OMR_PR3_SHIFT                19
#define P8_OMR_PR4_MASK                 0x00100000
#define P8_OMR_PR4_SHIFT                20
#define P8_OMR_PR5_MASK                 0x00200000
#define P8_OMR_PR5_SHIFT                21
#define P8_OMR_PR6_MASK                 0x00400000
#define P8_OMR_PR6_SHIFT                22
#define P8_OMR_PR7_MASK                 0x00800000
#define P8_OMR_PR7_SHIFT                23



/****************** Masks for P8_PDR_t **********************/
/*
   P8_PDR                "Port 8 Pad Driver Mode Register"
*/
/**********************************************************/

#define P8_PDR_MASK                     0x00070007
#define P8_PDR_PD0_MASK                 0x00000007
#define P8_PDR_PD0_SHIFT                0
#define P8_PDR_PDMLI1_MASK              0x00070000
#define P8_PDR_PDMLI1_SHIFT             16




#endif /* _HAVE_TRICORE_P8_MASKS_H_ */

