/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ASC CD2" of TriCore TC1130B (17 SFRs) */

#ifndef _HAVE_TRICORE_ASC2_ADDRESSES_H_
#define _HAVE_TRICORE_ASC2_ADDRESSES_H_

#define ASC2_CLC_ADDR         0xF0100500     /* "ASC Clock Control Register" */
#define ASC2_PISEL_ADDR       0xF0100504     /* "ASC Peripheral Input Select Register" */
#define ASC2_ID_ADDR          0xF0100508     /* "ASC Module Identification Register" */
#define ASC2_CON_ADDR         0xF0100510     /* "ASC Control Register" */
#define ASC2_BG_ADDR          0xF0100514     /* "ASC Baudrate Timer Reload Register" */
#define ASC2_FDV_ADDR         0xF0100518     /* "ASC Fractional Divider Register" */
#define ASC2_PMW_ADDR         0xF010051C     /* "ASC IrDA Pulse Mode/Widdth Register" */
#define ASC2_TBUF_ADDR        0xF0100520     /* "ASC Transmit Buffer Register" */
#define ASC2_RBUF_ADDR        0xF0100524     /* "ASC Receive Buffer Register" */
#define ASC2_RXFCON_ADDR      0xF0100540     /* "SSC Receive FIFO Control Register" */
#define ASC2_TXFCON_ADDR      0xF0100544     /* "SSC Transmit FIFO Control Register" */
#define ASC2_FSTAT_ADDR       0xF0100548     /* "ASC FIFO Status Register" */
#define ASC2_WHBCON_ADDR      0xF0100550     /* "ASC Hardware Bits Control Register" */
#define ASC2_TSRC_ADDR        0xF01005F0     /* "ASC Transmit Interrupt Service Request Control Register" */
#define ASC2_RSRC_ADDR        0xF01005F4     /* "ASC Receive Interrupt Service Request Control Register" */
#define ASC2_ESRC_ADDR        0xF01005F8     /* "ASC Error Interrupt Service Request Control Register" */
#define ASC2_TBSRC_ADDR       0xF01005FC     /* "ASC Transmit Buffer Service Request Control Register" */


#endif /* _HAVE_TRICORE_ASC2_ADDRESSES_H_ (block "ASC CD2") */


