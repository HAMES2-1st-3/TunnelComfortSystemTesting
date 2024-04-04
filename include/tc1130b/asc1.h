/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ASC CD1" of TriCore TC1130B (17 SFRs) */

#include <tc1130b/asc1/addr.h>

#include <tc1130b/asc1/masks.h>
#include <tc1130b/asc0_asc1_asc2/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/asc1/types.h>
#include <tc1130b/asc0_asc1_asc2/sharetypes.h>

#ifndef _HAVE_TRICORE_ASC1_H_
#define _HAVE_TRICORE_ASC1_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (ASC1_BG, ASCn_BG_t, ASC1_BG_ADDR);     /* "ASC Baudrate Timer Reload Register" */
SFR_NOABS (ASC1_CLC, ASCn_CLC_t, ASC1_CLC_ADDR);  /* "ASC Clock Control Register" */
SFR_NOABS (ASC1_CON, ASCn_CON_t, ASC1_CON_ADDR);  /* "ASC Control Register" */
SFR_NOABS (ASC1_ESRC, ASCn_ESRC_t, ASC1_ESRC_ADDR); /* "ASC Error Interrupt Service Request Control Register" */
SFR_NOABS (ASC1_FDV, ASCn_FDV_t, ASC1_FDV_ADDR);  /* "ASC Fractional Divider Register" */
SFR_NOABS (ASC1_FSTAT, ASCn_FSTAT_t, ASC1_FSTAT_ADDR); /* "ASC FIFO Status Register" */
SFR_NOABS (ASC1_ID, ASCn_ID_t, ASC1_ID_ADDR);     /* "ASC Module Identification Register" */
SFR_NOABS (ASC1_PISEL, ASCn_PISEL_t, ASC1_PISEL_ADDR); /* "ASC Peripheral Input Select Register" */
SFR_NOABS (ASC1_PMW, ASCn_PMW_t, ASC1_PMW_ADDR);  /* "ASC IrDA Pulse Mode/Widdth Register" */
SFR_NOABS (ASC1_RBUF, ASCn_RBUF_t, ASC1_RBUF_ADDR); /* "ASC Receive Buffer Register" */
SFR_NOABS (ASC1_RSRC, ASCn_RSRC_t, ASC1_RSRC_ADDR); /* "ASC Receive Interrupt Service Request Control Register" */
SFR_NOABS (ASC1_RXFCON, ASCn_RXFCON_t, ASC1_RXFCON_ADDR); /* "SSC Receive FIFO Control Register" */
SFR_NOABS (ASC1_TBSRC, ASCn_TBSRC_t, ASC1_TBSRC_ADDR); /* "ASC Transmit Buffer Service Request Control Register" */
SFR_NOABS (ASC1_TBUF, ASCn_TBUF_t, ASC1_TBUF_ADDR); /* "ASC Transmit Buffer Register" */
SFR_NOABS (ASC1_TSRC, ASCn_TSRC_t, ASC1_TSRC_ADDR); /* "ASC Transmit Interrupt Service Request Control Register" */
SFR_NOABS (ASC1_TXFCON, ASCn_TXFCON_t, ASC1_TXFCON_ADDR); /* "SSC Transmit FIFO Control Register" */
SFR_NOABS (ASC1_WHBCON, ASCn_WHBCON_t, ASC1_WHBCON_ADDR); /* "ASC Hardware Bits Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_ASC1_H_ (block "ASC CD1") */


