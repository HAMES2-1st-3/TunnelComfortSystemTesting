/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ASC CD0" of TriCore TC1130B (17 SFRs) */

#ifndef _HAVE_TRICORE_ASC0_ADDRESSES_H_
#define _HAVE_TRICORE_ASC0_ADDRESSES_H_

#define ASC0_CLC_ADDR         0xF0100300     /* "ASC Clock Control Register" */
#define ASC0_PISEL_ADDR       0xF0100304     /* "ASC Peripheral Input Select Register" */
#define ASC0_ID_ADDR          0xF0100308     /* "ASC Module Identification Register" */
#define ASC0_CON_ADDR         0xF0100310     /* "ASC Control Register" */
#define ASC0_BG_ADDR          0xF0100314     /* "ASC Baudrate Timer Reload Register" */
#define ASC0_FDV_ADDR         0xF0100318     /* "ASC Fractional Divider Register" */
#define ASC0_PMW_ADDR         0xF010031C     /* "ASC IrDA Pulse Mode/Widdth Register" */
#define ASC0_TBUF_ADDR        0xF0100320     /* "ASC Transmit Buffer Register" */
#define ASC0_RBUF_ADDR        0xF0100324     /* "ASC Receive Buffer Register" */
#define ASC0_RXFCON_ADDR      0xF0100340     /* "SSC Receive FIFO Control Register" */
#define ASC0_TXFCON_ADDR      0xF0100344     /* "SSC Transmit FIFO Control Register" */
#define ASC0_FSTAT_ADDR       0xF0100348     /* "ASC FIFO Status Register" */
#define ASC0_WHBCON_ADDR      0xF0100350     /* "ASC Hardware Bits Control Register" */
#define ASC0_TSRC_ADDR        0xF01003F0     /* "ASC Transmit Interrupt Service Request Control Register" */
#define ASC0_RSRC_ADDR        0xF01003F4     /* "ASC Receive Interrupt Service Request Control Register" */
#define ASC0_ESRC_ADDR        0xF01003F8     /* "ASC Error Interrupt Service Request Control Register" */
#define ASC0_TBSRC_ADDR       0xF01003FC     /* "ASC Transmit Buffer Service Request Control Register" */


#endif /* _HAVE_TRICORE_ASC0_ADDRESSES_H_ (block "ASC CD0") */


