/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ASC1" of TriCore TC1792 (12 SFRs) */

#include <tc1792/asc1/addr.h>

#include <tc1792/asc1/masks.h>
#include <tc1792/asc0_asc1/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1792/asc1/types.h>
#include <tc1792/asc0_asc1/sharetypes.h>

#ifndef _HAVE_TRICORE_ASC1_H_
#define _HAVE_TRICORE_ASC1_H_

#include <tricore-abs-noabs.h>

SFR_ABS (ASC1_BG, ASCn_BG_t, ASC1_BG_ADDR);       /* "ASC1 Baud Rate Timer Reload Register" */
SFR_ABS (ASC1_CON, ASCn_CON_t, ASC1_CON_ADDR);    /* "ASC1 Control Register" */
SFR_ABS (ASC1_ESRC, ASCn_ESRC_t, ASC1_ESRC_ADDR); /* "ASC1 Error Interrupt Service Request Control Register" */
SFR_ABS (ASC1_FDV, ASCn_FDV_t, ASC1_FDV_ADDR);    /* "ASC1 Fractional Divider Register" */
SFR_ABS (ASC1_ID, ASCn_ID_t, ASC1_ID_ADDR);       /* "ASC1 Module Identification Register" */
SFR_ABS (ASC1_PISEL, ASCn_PISEL_t, ASC1_PISEL_ADDR); /* "ASC1 Peripheral Input Select Register" */
SFR_ABS (ASC1_RBUF, ASCn_RBUF_t, ASC1_RBUF_ADDR); /* "ASC1 Receive Buffer Register" */
SFR_ABS (ASC1_RSRC, ASCn_RSRC_t, ASC1_RSRC_ADDR); /* "ASC1 Receive Interrupt Service Request Control Register" */
SFR_ABS (ASC1_TBSRC, ASCn_TBSRC_t, ASC1_TBSRC_ADDR); /* "ASC1 Transmit Buffer Interrupt Service Request Control Register" */
SFR_ABS (ASC1_TBUF, ASCn_TBUF_t, ASC1_TBUF_ADDR); /* "ASC1 Transmit Buffer Register" */
SFR_ABS (ASC1_TSRC, ASCn_TSRC_t, ASC1_TSRC_ADDR); /* "ASC1 Transmit Interrupt Service Request Control Register" */
SFR_ABS (ASC1_WHBCON, ASCn_WHBCON_t, ASC1_WHBCON_ADDR); /* "ASC1 Write Hardware Bits Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_ASC1_H_ (block "ASC1") */


