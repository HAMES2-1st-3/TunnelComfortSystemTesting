/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P0_MASKS_H_
#define _HAVE_TRICORE_P0_MASKS_H_


/****************** Masks for P0_ESR_t **********************/
/*
   P0_ESR                "Port 0 Emergency Stop Register"
*/
/**********************************************************/

#define P0_ESR_MASK                     0x0000ffff
#define P0_ESR_EN0_MASK                 0x00000001
#define P0_ESR_EN0_SHIFT                0
#define P0_ESR_EN1_MASK                 0x00000002
#define P0_ESR_EN1_SHIFT                1
#define P0_ESR_EN2_MASK                 0x00000004
#define P0_ESR_EN2_SHIFT                2
#define P0_ESR_EN3_MASK                 0x00000008
#define P0_ESR_EN3_SHIFT                3
#define P0_ESR_EN4_MASK                 0x00000010
#define P0_ESR_EN4_SHIFT                4
#define P0_ESR_EN5_MASK                 0x00000020
#define P0_ESR_EN5_SHIFT                5
#define P0_ESR_EN6_MASK                 0x00000040
#define P0_ESR_EN6_SHIFT                6
#define P0_ESR_EN7_MASK                 0x00000080
#define P0_ESR_EN7_SHIFT                7
#define P0_ESR_EN8_MASK                 0x00000100
#define P0_ESR_EN8_SHIFT                8
#define P0_ESR_EN9_MASK                 0x00000200
#define P0_ESR_EN9_SHIFT                9
#define P0_ESR_EN10_MASK                0x00000400
#define P0_ESR_EN10_SHIFT               10
#define P0_ESR_EN11_MASK                0x00000800
#define P0_ESR_EN11_SHIFT               11
#define P0_ESR_EN12_MASK                0x00001000
#define P0_ESR_EN12_SHIFT               12
#define P0_ESR_EN13_MASK                0x00002000
#define P0_ESR_EN13_SHIFT               13
#define P0_ESR_EN14_MASK                0x00004000
#define P0_ESR_EN14_SHIFT               14
#define P0_ESR_EN15_MASK                0x00008000
#define P0_ESR_EN15_SHIFT               15



/****************** Masks for P0_PDR_t **********************/
/*
   P0_PDR                "Port 0 Pad Driver Mode Register"
*/
/**********************************************************/

#define P0_PDR_MASK                     0x00000077
#define P0_PDR_PD0_MASK                 0x00000007
#define P0_PDR_PD0_SHIFT                0
#define P0_PDR_PD1_MASK                 0x00000070
#define P0_PDR_PD1_SHIFT                4




#endif /* _HAVE_TRICORE_P0_MASKS_H_ */

