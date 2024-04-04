/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P4_MASKS_H_
#define _HAVE_TRICORE_P4_MASKS_H_


/****************** Masks for P4_ESR_t **********************/
/*
   P4_ESR                "Port 4 Emergency Stop Register"
*/
/**********************************************************/

#define P4_ESR_MASK                     0x0000000f
#define P4_ESR_EN0_MASK                 0x00000001
#define P4_ESR_EN0_SHIFT                0
#define P4_ESR_EN1_MASK                 0x00000002
#define P4_ESR_EN1_SHIFT                1
#define P4_ESR_EN2_MASK                 0x00000004
#define P4_ESR_EN2_SHIFT                2
#define P4_ESR_EN3_MASK                 0x00000008
#define P4_ESR_EN3_SHIFT                3



/****************** Masks for P4_IN_t **********************/
/*
   P4_IN                 "Port 4 Input Register"
*/
/**********************************************************/

#define P4_IN_MASK                      0x0000000f
#define P4_IN_P0_MASK                   0x00000001
#define P4_IN_P0_SHIFT                  0
#define P4_IN_P1_MASK                   0x00000002
#define P4_IN_P1_SHIFT                  1
#define P4_IN_P2_MASK                   0x00000004
#define P4_IN_P2_SHIFT                  2
#define P4_IN_P3_MASK                   0x00000008
#define P4_IN_P3_SHIFT                  3



/****************** Masks for P4_OMR_t **********************/
/*
   P4_OMR                "Port 4 Output Modification Register"
*/
/**********************************************************/

#define P4_OMR_MASK                     0x000f000f
#define P4_OMR_PS0_MASK                 0x00000001
#define P4_OMR_PS0_SHIFT                0
#define P4_OMR_PS1_MASK                 0x00000002
#define P4_OMR_PS1_SHIFT                1
#define P4_OMR_PS2_MASK                 0x00000004
#define P4_OMR_PS2_SHIFT                2
#define P4_OMR_PS3_MASK                 0x00000008
#define P4_OMR_PS3_SHIFT                3
#define P4_OMR_PR0_MASK                 0x00010000
#define P4_OMR_PR0_SHIFT                16
#define P4_OMR_PR1_MASK                 0x00020000
#define P4_OMR_PR1_SHIFT                17
#define P4_OMR_PR2_MASK                 0x00040000
#define P4_OMR_PR2_SHIFT                18
#define P4_OMR_PR3_MASK                 0x00080000
#define P4_OMR_PR3_SHIFT                19



/****************** Masks for P4_OUT_t **********************/
/*
   P4_OUT                "Output Register"
*/
/**********************************************************/

#define P4_OUT_MASK                     0x0000000f
#define P4_OUT_P0_MASK                  0x00000001
#define P4_OUT_P0_SHIFT                 0
#define P4_OUT_P1_MASK                  0x00000002
#define P4_OUT_P1_SHIFT                 1
#define P4_OUT_P2_MASK                  0x00000004
#define P4_OUT_P2_SHIFT                 2
#define P4_OUT_P3_MASK                  0x00000008
#define P4_OUT_P3_SHIFT                 3



/****************** Masks for P4_PDR_t **********************/
/*
   P4_PDR                "Port 4 Pad Driver Mode Register"
*/
/**********************************************************/

#define P4_PDR_MASK                     0x00070077
#define P4_PDR_PD0_MASK                 0x00000007
#define P4_PDR_PD0_SHIFT                0
#define P4_PDR_PD1_MASK                 0x00000070
#define P4_PDR_PD1_SHIFT                4
#define P4_PDR_PDSYSCLK_MASK            0x00070000
#define P4_PDR_PDSYSCLK_SHIFT           16




#endif /* _HAVE_TRICORE_P4_MASKS_H_ */

