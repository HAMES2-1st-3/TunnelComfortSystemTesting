/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ASC CD1" of TriCore TC1130B (17 SFRs) */

#ifndef _HAVE_TRICORE_ASC1_ADDRESSES_H_
#define _HAVE_TRICORE_ASC1_ADDRESSES_H_

#define ASC1_CLC_ADDR         0xF0100400     /* "ASC Clock Control Register" */
#define ASC1_PISEL_ADDR       0xF0100404     /* "ASC Peripheral Input Select Register" */
#define ASC1_ID_ADDR          0xF0100408     /* "ASC Module Identification Register" */
#define ASC1_CON_ADDR         0xF0100410     /* "ASC Control Register" */
#define ASC1_BG_ADDR          0xF0100414     /* "ASC Baudrate Timer Reload Register" */
#define ASC1_FDV_ADDR         0xF0100418     /* "ASC Fractional Divider Register" */
#define ASC1_PMW_ADDR         0xF010041C     /* "ASC IrDA Pulse Mode/Widdth Register" */
#define ASC1_TBUF_ADDR        0xF0100420     /* "ASC Transmit Buffer Register" */
#define ASC1_RBUF_ADDR        0xF0100424     /* "ASC Receive Buffer Register" */
#define ASC1_RXFCON_ADDR      0xF0100440     /* "SSC Receive FIFO Control Register" */
#define ASC1_TXFCON_ADDR      0xF0100444     /* "SSC Transmit FIFO Control Register" */
#define ASC1_FSTAT_ADDR       0xF0100448     /* "ASC FIFO Status Register" */
#define ASC1_WHBCON_ADDR      0xF0100450     /* "ASC Hardware Bits Control Register" */
#define ASC1_TSRC_ADDR        0xF01004F0     /* "ASC Transmit Interrupt Service Request Control Register" */
#define ASC1_RSRC_ADDR        0xF01004F4     /* "ASC Receive Interrupt Service Request Control Register" */
#define ASC1_ESRC_ADDR        0xF01004F8     /* "ASC Error Interrupt Service Request Control Register" */
#define ASC1_TBSRC_ADDR       0xF01004FC     /* "ASC Transmit Buffer Service Request Control Register" */


#endif /* _HAVE_TRICORE_ASC1_ADDRESSES_H_ (block "ASC CD1") */


