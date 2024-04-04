/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ASC CD2" of TriCore TC1130B (17 SFRs) */

#include <tc1130b/asc2/addr.h>

#include <tc1130b/asc2/masks.h>
#include <tc1130b/asc0_asc1_asc2/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/asc2/types.h>
#include <tc1130b/asc0_asc1_asc2/sharetypes.h>

#ifndef _HAVE_TRICORE_ASC2_H_
#define _HAVE_TRICORE_ASC2_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (ASC2_BG, ASCn_BG_t, ASC2_BG_ADDR);     /* "ASC Baudrate Timer Reload Register" */
SFR_NOABS (ASC2_CLC, ASCn_CLC_t, ASC2_CLC_ADDR);  /* "ASC Clock Control Register" */
SFR_NOABS (ASC2_CON, ASCn_CON_t, ASC2_CON_ADDR);  /* "ASC Control Register" */
SFR_NOABS (ASC2_ESRC, ASCn_ESRC_t, ASC2_ESRC_ADDR); /* "ASC Error Interrupt Service Request Control Register" */
SFR_NOABS (ASC2_FDV, ASCn_FDV_t, ASC2_FDV_ADDR);  /* "ASC Fractional Divider Register" */
SFR_NOABS (ASC2_FSTAT, ASCn_FSTAT_t, ASC2_FSTAT_ADDR); /* "ASC FIFO Status Register" */
SFR_NOABS (ASC2_ID, ASCn_ID_t, ASC2_ID_ADDR);     /* "ASC Module Identification Register" */
SFR_NOABS (ASC2_PISEL, ASCn_PISEL_t, ASC2_PISEL_ADDR); /* "ASC Peripheral Input Select Register" */
SFR_NOABS (ASC2_PMW, ASCn_PMW_t, ASC2_PMW_ADDR);  /* "ASC IrDA Pulse Mode/Widdth Register" */
SFR_NOABS (ASC2_RBUF, ASCn_RBUF_t, ASC2_RBUF_ADDR); /* "ASC Receive Buffer Register" */
SFR_NOABS (ASC2_RSRC, ASCn_RSRC_t, ASC2_RSRC_ADDR); /* "ASC Receive Interrupt Service Request Control Register" */
SFR_NOABS (ASC2_RXFCON, ASCn_RXFCON_t, ASC2_RXFCON_ADDR); /* "SSC Receive FIFO Control Register" */
SFR_NOABS (ASC2_TBSRC, ASCn_TBSRC_t, ASC2_TBSRC_ADDR); /* "ASC Transmit Buffer Service Request Control Register" */
SFR_NOABS (ASC2_TBUF, ASCn_TBUF_t, ASC2_TBUF_ADDR); /* "ASC Transmit Buffer Register" */
SFR_NOABS (ASC2_TSRC, ASCn_TSRC_t, ASC2_TSRC_ADDR); /* "ASC Transmit Interrupt Service Request Control Register" */
SFR_NOABS (ASC2_TXFCON, ASCn_TXFCON_t, ASC2_TXFCON_ADDR); /* "SSC Transmit FIFO Control Register" */
SFR_NOABS (ASC2_WHBCON, ASCn_WHBCON_t, ASC2_WHBCON_ADDR); /* "ASC Hardware Bits Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_ASC2_H_ (block "ASC CD2") */


