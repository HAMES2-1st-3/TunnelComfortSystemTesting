/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MLI_SHAREMASKS_H_
#define _HAVE_TRICORE_MLI_SHAREMASKS_H_


/****************** Masks for MLI0_RPmBAR_t **********************/
/*
   MLI0_RP0BAR           "Receiver Pipe 0 Base Address Register"
   MLI0_RP1BAR           "Receiver Pipe 1 Base Address Register"
   MLI0_RP2BAR           "Receiver Pipe 2 Base Address Register"
   MLI0_RP3BAR           "Receiver Pipe 3 Base Address Register"
*/
/**********************************************************/

#define MLI0_RPmBAR_MASK                0xffffffff
#define MLI0_RPmBAR_ADDR_MASK           0xffffffff
#define MLI0_RPmBAR_ADDR_SHIFT          0



/****************** Masks for MLI0_RPmSTATR_t **********************/
/*
   MLI0_RP0STATR         "Receiver Pipe 0 Status Register"
   MLI0_RP1STATR         "Receiver Pipe 1 Status Register"
   MLI0_RP2STATR         "Receiver Pipe 2 Status Register"
   MLI0_RP3STATR         "Receiver Pipe 3 Status Register"
*/
/**********************************************************/

#define MLI0_RPmSTATR_MASK              0x0000ffcf
#define MLI0_RPmSTATR_BS_MASK           0x0000000f
#define MLI0_RPmSTATR_BS_SHIFT          0
#define MLI0_RPmSTATR_AP_MASK           0x0000ffc0
#define MLI0_RPmSTATR_AP_SHIFT          6



/****************** Masks for MLI0_TPmAOFR_t **********************/
/*
   MLI0_TP0AOFR          "Transmitter Pipe 0 Address Offset Register"
   MLI0_TP1AOFR          "Transmitter Pipe 1 Address Offset Register"
   MLI0_TP2AOFR          "Transmitter Pipe 2 Address Offset Register"
   MLI0_TP3AOFR          "Transmitter Pipe 3 Address Offset Register"
*/
/**********************************************************/

#define MLI0_TPmAOFR_MASK               0x0000ffff
#define MLI0_TPmAOFR_AOFF_MASK          0x0000ffff
#define MLI0_TPmAOFR_AOFF_SHIFT         0



/****************** Masks for MLI0_TPmBAR_t **********************/
/*
   MLI0_TP0BAR           "Transmitter Pipe 0 Base Address Register"
   MLI0_TP1BAR           "Transmitter Pipe 1 Base Address Register"
   MLI0_TP2BAR           "Transmitter Pipe 2 Base Address Register"
   MLI0_TP3BAR           "Transmitter Pipe 3 Base Address Register"
*/
/**********************************************************/

#define MLI0_TPmBAR_MASK                0xffffffff
#define MLI0_TPmBAR_BS_MASK             0x0000000f
#define MLI0_TPmBAR_BS_SHIFT            0
#define MLI0_TPmBAR_ADDR_MASK           0xfffffff0
#define MLI0_TPmBAR_ADDR_SHIFT          4



/****************** Masks for MLI0_TPmDATAR_t **********************/
/*
   MLI0_TP0DATAR         "Transmitter Pipe 0 Data Register"
   MLI0_TP1DATAR         "Transmitter Pipe 1 Data Register"
   MLI0_TP2DATAR         "Transmitter Pipe 2 Data Register"
   MLI0_TP3DATAR         "Transmitter Pipe 3 Data Register"
*/
/**********************************************************/

#define MLI0_TPmDATAR_MASK              0xffffffff
#define MLI0_TPmDATAR_DATA_MASK         0xffffffff
#define MLI0_TPmDATAR_DATA_SHIFT        0



/****************** Masks for MLI0_TPmSTATR_t **********************/
/*
   MLI0_TP0STATR         "Transmitter Pipe 0 Status Register"
   MLI0_TP1STATR         "Transmitter Pipe 1 Status Register"
   MLI0_TP2STATR         "Transmitter Pipe 2 Status Register"
   MLI0_TP3STATR         "Transmitter Pipe 3 Status Register"
*/
/**********************************************************/

#define MLI0_TPmSTATR_MASK              0x0001ffff
#define MLI0_TPmSTATR_BS_MASK           0x0000000f
#define MLI0_TPmSTATR_BS_SHIFT          0
#define MLI0_TPmSTATR_DW_MASK           0x00000030
#define MLI0_TPmSTATR_DW_SHIFT          4
#define MLI0_TPmSTATR_AP_MASK           0x0000ffc0
#define MLI0_TPmSTATR_AP_SHIFT          6
#define MLI0_TPmSTATR_OP_MASK           0x00010000
#define MLI0_TPmSTATR_OP_SHIFT          16




#endif /* _HAVE_TRICORE_MLI_SHAREMASKS_H_ */

