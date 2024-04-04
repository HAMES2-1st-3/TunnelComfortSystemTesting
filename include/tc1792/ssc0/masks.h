/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SSC0_MASKS_H_
#define _HAVE_TRICORE_SSC0_MASKS_H_


/****************** Masks for SSC0_FSTAT_t **********************/
/*
   SSC0_FSTAT            "SSC0 FIFO Status Register"
*/
/**********************************************************/

#define SSC0_FSTAT_MASK                 0x00000f0f
#define SSC0_FSTAT_RXFFL_MASK           0x0000000f
#define SSC0_FSTAT_RXFFL_SHIFT          0
#define SSC0_FSTAT_TXFFL_MASK           0x00000f00
#define SSC0_FSTAT_TXFFL_SHIFT          8



/****************** Masks for SSC0_RXFCON_t **********************/
/*
   SSC0_RXFCON           "SSC0 Receive FIFO Control Register"
*/
/**********************************************************/

#define SSC0_RXFCON_MASK                0x00000f07
#define SSC0_RXFCON_RXFEN_MASK          0x00000001
#define SSC0_RXFCON_RXFEN_SHIFT         0
#define SSC0_RXFCON_RXFFLU_MASK         0x00000002
#define SSC0_RXFCON_RXFFLU_SHIFT        1
#define SSC0_RXFCON_RXTMEN_MASK         0x00000004
#define SSC0_RXFCON_RXTMEN_SHIFT        2
#define SSC0_RXFCON_RXFITL_MASK         0x00000f00
#define SSC0_RXFCON_RXFITL_SHIFT        8



/****************** Masks for SSC0_TXFCON_t **********************/
/*
   SSC0_TXFCON           "SSC0 Transmit FIFO Control Register"
*/
/**********************************************************/

#define SSC0_TXFCON_MASK                0x00000f07
#define SSC0_TXFCON_TXFEN_MASK          0x00000001
#define SSC0_TXFCON_TXFEN_SHIFT         0
#define SSC0_TXFCON_TXFFLU_MASK         0x00000002
#define SSC0_TXFCON_TXFFLU_SHIFT        1
#define SSC0_TXFCON_TXTMEN_MASK         0x00000004
#define SSC0_TXFCON_TXTMEN_SHIFT        2
#define SSC0_TXFCON_TXFITL_MASK         0x00000f00
#define SSC0_TXFCON_TXFITL_SHIFT        8




#endif /* _HAVE_TRICORE_SSC0_MASKS_H_ */

