/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P16_MASKS_H_
#define _HAVE_TRICORE_P16_MASKS_H_


/****************** Masks for P16_IOCR12_t **********************/
/*
   P16_IOCR12            "Port 16 Input/Output Control Register 12"
*/
/**********************************************************/

#define P16_IOCR12_MASK                 0x000000f0
#define P16_IOCR12_PC12_MASK            0x000000f0
#define P16_IOCR12_PC12_SHIFT           4



/****************** Masks for P16_PDR1_t **********************/
/*
   P16_PDR1              "Port 16 Pad Driver Mode 1 Register"
*/
/**********************************************************/

#define P16_PDR1_MASK                   0x00077777
#define P16_PDR1_PD8_MASK               0x00000007
#define P16_PDR1_PD8_SHIFT              0
#define P16_PDR1_PD9_MASK               0x00000070
#define P16_PDR1_PD9_SHIFT              4
#define P16_PDR1_PD10_MASK              0x00000700
#define P16_PDR1_PD10_SHIFT             8
#define P16_PDR1_PD11_MASK              0x00007000
#define P16_PDR1_PD11_SHIFT             12
#define P16_PDR1_PD12_MASK              0x00070000
#define P16_PDR1_PD12_SHIFT             16




#endif /* _HAVE_TRICORE_P16_MASKS_H_ */

