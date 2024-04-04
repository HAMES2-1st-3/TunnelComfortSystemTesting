/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P9_MASKS_H_
#define _HAVE_TRICORE_P9_MASKS_H_


/****************** Masks for P9_IOCR12_t **********************/
/*
   P9_IOCR12             "Port 9 Input/Output Control Register 12"
*/
/**********************************************************/

#define P9_IOCR12_MASK                  0x00f0f0f0
#define P9_IOCR12_PC12_MASK             0x000000f0
#define P9_IOCR12_PC12_SHIFT            4
#define P9_IOCR12_PC13_MASK             0x0000f000
#define P9_IOCR12_PC13_SHIFT            12
#define P9_IOCR12_PC14_MASK             0x00f00000
#define P9_IOCR12_PC14_SHIFT            20



/****************** Masks for P9_PDR1_t **********************/
/*
   P9_PDR1               "Port 9 Pad Driver Mode 1 Register"
*/
/**********************************************************/

#define P9_PDR1_MASK                    0x07777777
#define P9_PDR1_PD8_MASK                0x00000007
#define P9_PDR1_PD8_SHIFT               0
#define P9_PDR1_PD9_MASK                0x00000070
#define P9_PDR1_PD9_SHIFT               4
#define P9_PDR1_PD10_MASK               0x00000700
#define P9_PDR1_PD10_SHIFT              8
#define P9_PDR1_PD11_MASK               0x00007000
#define P9_PDR1_PD11_SHIFT              12
#define P9_PDR1_PD12_MASK               0x00070000
#define P9_PDR1_PD12_SHIFT              16
#define P9_PDR1_PD13_MASK               0x00700000
#define P9_PDR1_PD13_SHIFT              20
#define P9_PDR1_PD14_MASK               0x07000000
#define P9_PDR1_PD14_SHIFT              24




#endif /* _HAVE_TRICORE_P9_MASKS_H_ */

