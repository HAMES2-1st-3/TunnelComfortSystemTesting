/* (c) HighTec EDV-Systeme GmbH */

/* block "MCHK" of TriCore TC1793 (8 SFRs) */

#include <tc1793/mchk/addr.h>

#include <tc1793/mchk/masks.h>
#include <tc1793/mchk/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/mchk/types.h>
#include <tc1793/mchk/sharetypes.h>

#ifndef _HAVE_TRICORE_MCHK_H_
#define _HAVE_TRICORE_MCHK_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (MCHK_CRC0, MCHK_CRCm_t, MCHK_CRC0_ADDR); /* "Memory Checker CRC Register" */
SFR_NOABS (MCHK_CRC1, MCHK_CRCm_t, MCHK_CRC1_ADDR); /* "Memory Checker CRC Register" */
SFR_NOABS (MCHK_ID, MCHK_ID_t, MCHK_ID_ADDR);     /* "Module Identification Register" */
SFR_NOABS (MCHK_IR0, MCHK_IRm_t, MCHK_IR0_ADDR);  /* "Memory Checker Input Register" */
SFR_NOABS (MCHK_IR1, MCHK_IRm_t, MCHK_IR1_ADDR);  /* "Memory Checker Input Register" */
SFR_NOABS (MCHK_RR0, MCHK_RRm_t, MCHK_RR0_ADDR);  /* "Memory Checker Result Register" */
SFR_NOABS (MCHK_RR1, MCHK_RRm_t, MCHK_RR1_ADDR);  /* "Memory Checker Result Register" */
SFR_NOABS (MCHK_WR, MCHK_WR_t, MCHK_WR_ADDR);     /* "Memory Checker Write Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_MCHK_H_ (block "MCHK") */


