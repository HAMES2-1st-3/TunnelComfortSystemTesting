/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "GPTU L" of TriCore TC1130B (32 SFRs) */

#include <tc1130b/gptu/addr.h>

#include <tc1130b/gptu/masks.h>
#include <tc1130b/gptu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/gptu/types.h>
#include <tc1130b/gptu/sharetypes.h>

#ifndef _HAVE_TRICORE_GPTU_H_
#define _HAVE_TRICORE_GPTU_H_

#include <tricore-abs-noabs.h>

SFR_ABS (GPTU_CLC, GPTU_CLC_t, GPTU_CLC_ADDR);    /* "GPTU Clock Control Register" */
SFR_ABS (GPTU_ID, GPTU_ID_t, GPTU_ID_ADDR);       /* "GPTU Module Identification Register" */
SFR_ABS (GPTU_OSEL, GPTU_OSEL_t, GPTU_OSEL_ADDR); /* "GPTU Output Source Selection Register" */
SFR_ABS (GPTU_OUT, GPTU_OUT_t, GPTU_OUT_ADDR);    /* "GPTU Output Register" */
SFR_ABS (GPTU_SRC0, GPTU_SRCm_t, GPTU_SRC0_ADDR); /* "GPTU Service Request Control Register 0" */
SFR_ABS (GPTU_SRC1, GPTU_SRCm_t, GPTU_SRC1_ADDR); /* "GPTU Service Request Control Register 1" */
SFR_ABS (GPTU_SRC2, GPTU_SRCm_t, GPTU_SRC2_ADDR); /* "GPTU Service Request Control Register 2" */
SFR_ABS (GPTU_SRC3, GPTU_SRCm_t, GPTU_SRC3_ADDR); /* "GPTU Service Request Control Register 3" */
SFR_ABS (GPTU_SRC4, GPTU_SRCm_t, GPTU_SRC4_ADDR); /* "GPTU Service Request Control Register 4" */
SFR_ABS (GPTU_SRC5, GPTU_SRCm_t, GPTU_SRC5_ADDR); /* "GPTU Service Request Control Register 5" */
SFR_ABS (GPTU_SRC6, GPTU_SRCm_t, GPTU_SRC6_ADDR); /* "GPTU Service Request Control Register 6" */
SFR_ABS (GPTU_SRC7, GPTU_SRCm_t, GPTU_SRC7_ADDR); /* "GPTU Service Request Control Register 7" */
SFR_ABS (GPTU_SRSEL, GPTU_SRSEL_t, GPTU_SRSEL_ADDR); /* "GPTU Service Request Source Select Register" */
SFR_ABS (GPTU_T012RUN, GPTU_T012RUN_t, GPTU_T012RUN_ADDR); /* "GPTU Timers T0, T1 and T2 Run Control Register" */
SFR_ABS (GPTU_T01IRS, GPTU_T01IRS_t, GPTU_T01IRS_ADDR); /* "GPTU Timer T0 and T1 Input and Reload Source Selection Register" */
SFR_ABS (GPTU_T01OTS, GPTU_T01OTS_t, GPTU_T01OTS_ADDR); /* "GPTU  Timer T0 and T1 Output, Trigger and Service Request Register" */
SFR_ABS (GPTU_T0CBA, GPTU_T0CBA_t, GPTU_T0CBA_ADDR); /* "GPTU Timer T0 Count Register (T0C, T0B, T0A)" */
SFR_ABS (GPTU_T0DCBA, GPTU_T0DCBA_t, GPTU_T0DCBA_ADDR); /* "GPTU Timer T0 Count Register (T0D, T0C, T0B,T0A)" */
SFR_ABS (GPTU_T0RCBA, GPTU_T0RCBA_t, GPTU_T0RCBA_ADDR); /* "GPTU Timer T0 Reload Register (T0RC, T0RB, T0RA)" */
SFR_ABS (GPTU_T0RDCBA, GPTU_T0RDCBA_t, GPTU_T0RDCBA_ADDR); /* "GPTU Timer T0 Reload Register (T0RD, T0RC, T0RB,T0RA)" */
SFR_ABS (GPTU_T1CBA, GPTU_T1CBA_t, GPTU_T1CBA_ADDR); /* "GPTU Timer T1 Count Register (T1C, T1B, T1A)" */
SFR_ABS (GPTU_T1DCBA, GPTU_T1DCBA_t, GPTU_T1DCBA_ADDR); /* "GPTU Timer T1 Count Register (T1D, T1C, T1B,T1A)" */
SFR_ABS (GPTU_T1RCBA, GPTU_T1RCBA_t, GPTU_T1RCBA_ADDR); /* "GPTU Timer T1 Reload Register (T1RC, T1RB, T1RA)" */
SFR_ABS (GPTU_T1RDCBA, GPTU_T1RDCBA_t, GPTU_T1RDCBA_ADDR); /* "GPTU Timer T1 Reload Register (T1RD, T1RC, T1RB,T1RA)" */
SFR_ABS (GPTU_T2, GPTU_T2_t, GPTU_T2_ADDR);       /* "GPTU Timer T2 Count Register" */
SFR_ABS (GPTU_T2AIS, GPTU_T2AIS_t, GPTU_T2AIS_ADDR); /* "GPTU Timer T2/T2A External Input Selection Register" */
SFR_ABS (GPTU_T2BIS, GPTU_T2BIS_t, GPTU_T2BIS_ADDR); /* "GPTU Timer T2B External Input Selection Register" */
SFR_ABS (GPTU_T2CON, GPTU_T2CON_t, GPTU_T2CON_ADDR); /* "GPTU Timer T2 Control Register" */
SFR_ABS (GPTU_T2ES, GPTU_T2ES_t, GPTU_T2ES_ADDR); /* "GPTU Timer T2 External Input Edge Selection Register" */
SFR_ABS (GPTU_T2RC0, GPTU_T2RC0_t, GPTU_T2RC0_ADDR); /* "GPTU Timer T2 Reload/Capture Register 0" */
SFR_ABS (GPTU_T2RC1, GPTU_T2RC1_t, GPTU_T2RC1_ADDR); /* "GPTU Timer T2 Reload/Capture Register 1" */
SFR_ABS (GPTU_T2RCCON, GPTU_T2RCCON_t, GPTU_T2RCCON_ADDR); /* "GPTU Timer T2 Reload/Capture Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_GPTU_H_ (block "GPTU L") */


