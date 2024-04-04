/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P2_MASKS_H_
#define _HAVE_TRICORE_P2_MASKS_H_


/****************** Masks for P2_IOCR0_t **********************/
/*
   P2_IOCR0              "Port 2 Input/Output Control Register 0"
*/
/**********************************************************/

#define P2_IOCR0_MASK                   0xf0f00000
#define P2_IOCR0_PC2_MASK               0x00f00000
#define P2_IOCR0_PC2_SHIFT              20
#define P2_IOCR0_PC3_MASK               0xf0000000
#define P2_IOCR0_PC3_SHIFT              28



/****************** Masks for P2_PDR0_t **********************/
/*
   P2_PDR0               "Port 2 Pad Driver Mode 0 Register"
*/
/**********************************************************/

#define P2_PDR0_MASK                    0x77777700
#define P2_PDR0_PD2_MASK                0x00000700
#define P2_PDR0_PD2_SHIFT               8
#define P2_PDR0_PD3_MASK                0x00007000
#define P2_PDR0_PD3_SHIFT               12
#define P2_PDR0_PD4_MASK                0x00070000
#define P2_PDR0_PD4_SHIFT               16
#define P2_PDR0_PD5_MASK                0x00700000
#define P2_PDR0_PD5_SHIFT               20
#define P2_PDR0_PD6_MASK                0x07000000
#define P2_PDR0_PD6_SHIFT               24
#define P2_PDR0_PD7_MASK                0x70000000
#define P2_PDR0_PD7_SHIFT               28




#endif /* _HAVE_TRICORE_P2_MASKS_H_ */

