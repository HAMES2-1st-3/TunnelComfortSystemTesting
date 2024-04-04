/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "CSFR" of TriCore TC1792 (11 SFRs) */

#include <tc1792/csfr/addr.h>

#include <tc1792/csfr/masks.h>
#include <tc1792/csfr/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1792/csfr/types.h>
#include <tc1792/csfr/sharetypes.h>

#ifndef _HAVE_TRICORE_CSFR_H_
#define _HAVE_TRICORE_CSFR_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (BIV, BIV_t, BIV_ADDR);                 /* "Interrupt Vector Table Pointer" */
SFR_NOABS (BTV, BTV_t, BTV_ADDR);                 /* "Trap Vector Table Pointer" */
SFR_NOABS (CPU_ID, CPU_ID_t, CPU_ID_ADDR);        /* "CPU Identification Register" */
SFR_NOABS (FCX, FCX_t, FCX_ADDR);                 /* "Free Context List Head Pointer" */
SFR_NOABS (ICR, ICR_t, ICR_ADDR);                 /* "ICU Interrupt Control Register" */
SFR_NOABS (ISP, ISP_t, ISP_ADDR);                 /* "Interrupt Stack Pointer" */
SFR_NOABS (LCX, LCX_t, LCX_ADDR);                 /* "Free Context List Limit Pointer" */
SFR_NOABS (PC, PC_t, PC_ADDR);                    /* "Program Counter" */
SFR_NOABS (PCXI, PCXI_t, PCXI_ADDR);              /* "Previous Context Information Register" */
SFR_NOABS (PSW, PSW_t, PSW_ADDR);                 /* "Program Status Word" */
SFR_NOABS (SYSCON, SYSCON_t, SYSCON_ADDR);        /* "System Configuration Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_CSFR_H_ (block "CSFR") */


