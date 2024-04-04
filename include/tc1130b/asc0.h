/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ASC CD0" of TriCore TC1130B (17 SFRs) */

#include <tc1130b/asc0/addr.h>

#include <tc1130b/asc0/masks.h>
#include <tc1130b/asc0_asc1_asc2/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/asc0/types.h>
#include <tc1130b/asc0_asc1_asc2/sharetypes.h>

#ifndef _HAVE_TRICORE_ASC0_H_
#define _HAVE_TRICORE_ASC0_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (ASC0_BG, ASCn_BG_t, ASC0_BG_ADDR);     /* "ASC Baudrate Timer Reload Register" */
SFR_NOABS (ASC0_CLC, ASCn_CLC_t, ASC0_CLC_ADDR);  /* "ASC Clock Control Register" */
SFR_NOABS (ASC0_CON, ASCn_CON_t, ASC0_CON_ADDR);  /* "ASC Control Register" */
SFR_NOABS (ASC0_ESRC, ASCn_ESRC_t, ASC0_ESRC_ADDR); /* "ASC Error Interrupt Service Request Control Register" */
SFR_NOABS (ASC0_FDV, ASCn_FDV_t, ASC0_FDV_ADDR);  /* "ASC Fractional Divider Register" */
SFR_NOABS (ASC0_FSTAT, ASCn_FSTAT_t, ASC0_FSTAT_ADDR); /* "ASC FIFO Status Register" */
SFR_NOABS (ASC0_ID, ASCn_ID_t, ASC0_ID_ADDR);     /* "ASC Module Identification Register" */
SFR_NOABS (ASC0_PISEL, ASCn_PISEL_t, ASC0_PISEL_ADDR); /* "ASC Peripheral Input Select Register" */
SFR_NOABS (ASC0_PMW, ASCn_PMW_t, ASC0_PMW_ADDR);  /* "ASC IrDA Pulse Mode/Widdth Register" */
SFR_NOABS (ASC0_RBUF, ASCn_RBUF_t, ASC0_RBUF_ADDR); /* "ASC Receive Buffer Register" */
SFR_NOABS (ASC0_RSRC, ASCn_RSRC_t, ASC0_RSRC_ADDR); /* "ASC Receive Interrupt Service Request Control Register" */
SFR_NOABS (ASC0_RXFCON, ASCn_RXFCON_t, ASC0_RXFCON_ADDR); /* "SSC Receive FIFO Control Register" */
SFR_NOABS (ASC0_TBSRC, ASCn_TBSRC_t, ASC0_TBSRC_ADDR); /* "ASC Transmit Buffer Service Request Control Register" */
SFR_NOABS (ASC0_TBUF, ASCn_TBUF_t, ASC0_TBUF_ADDR); /* "ASC Transmit Buffer Register" */
SFR_NOABS (ASC0_TSRC, ASCn_TSRC_t, ASC0_TSRC_ADDR); /* "ASC Transmit Interrupt Service Request Control Register" */
SFR_NOABS (ASC0_TXFCON, ASCn_TXFCON_t, ASC0_TXFCON_ADDR); /* "SSC Transmit FIFO Control Register" */
SFR_NOABS (ASC0_WHBCON, ASCn_WHBCON_t, ASC0_WHBCON_ADDR); /* "ASC Hardware Bits Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_ASC0_H_ (block "ASC CD0") */


