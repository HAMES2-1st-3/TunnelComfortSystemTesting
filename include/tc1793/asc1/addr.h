/* (c) HighTec EDV-Systeme GmbH */

/* block "ASC1" of TriCore TC1793 (12 SFRs) */

#ifndef _HAVE_TRICORE_ASC1_ADDRESSES_H_
#define _HAVE_TRICORE_ASC1_ADDRESSES_H_

#define ASC1_PISEL_ADDR       0xF0000B04     /* "ASC1 Peripheral Input Select Register" */
#define ASC1_ID_ADDR          0xF0000B08     /* "Module Identification Register" */
#define ASC1_CON_ADDR         0xF0000B10     /* "Control Register" */
#define ASC1_BG_ADDR          0xF0000B14     /* "Baud Rate Timer/Reload Register" */
#define ASC1_FDV_ADDR         0xF0000B18     /* "Fractional Divider Register" */
#define ASC1_TBUF_ADDR        0xF0000B20     /* "Transmit Buffer Register" */
#define ASC1_RBUF_ADDR        0xF0000B24     /* "Receive Buffer Register" */
#define ASC1_WHBCON_ADDR      0xF0000B50     /* "Write Hardware Bits Control Register" */
#define ASC1_TSRC_ADDR        0xF0000BF0     /* "Transmit Interrupt Service Request Control Register" */
#define ASC1_RSRC_ADDR        0xF0000BF4     /* "Receive Interrupt Service Request Control Register" */
#define ASC1_ESRC_ADDR        0xF0000BF8     /* "Error Interrupt Service Request Control Register" */
#define ASC1_TBSRC_ADDR       0xF0000BFC     /* "Transmit Buffer Interrupt Service Request Control Register" */


#endif /* _HAVE_TRICORE_ASC1_ADDRESSES_H_ (block "ASC1") */


