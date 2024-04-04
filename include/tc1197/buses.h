/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "Buses" of TriCore TC1197 (23 SFRs) */

#include <tc1197/buses/addr.h>

#include <tc1197/buses/masks.h>
#include <tc1197/buses/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1197/buses/types.h>
#include <tc1197/buses/sharetypes.h>

#ifndef _HAVE_TRICORE_BUSES_H_
#define _HAVE_TRICORE_BUSES_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (LBCU_ID, LBCU_ID_t, LBCU_ID_ADDR);     /* "Module Identification Register" */
SFR_NOABS (LBCU_LEADDR, LBCU_LEADDR_t, LBCU_LEADDR_ADDR); /* "LBCU LMB Error Address Register" */
SFR_NOABS (LBCU_LEATT, LBCU_LEATT_t, LBCU_LEATT_ADDR); /* "LBCU LMB Error Attribute Register" */
SFR_NOABS (LBCU_LEDATH, LBCU_LEDATH_t, LBCU_LEDATH_ADDR); /* "LBCU LMB Error Data High Register" */
SFR_NOABS (LBCU_LEDATL, LBCU_LEDATL_t, LBCU_LEDATL_ADDR); /* "LBCU LMB Error Data Low Register" */
SFR_NOABS (LBCU_SRC, LBCU_SRC_t, LBCU_SRC_ADDR);  /* "LBCU Service Request Control Register" */
SFR_NOABS (LFI_CON, LFI_CON_t, LFI_CON_ADDR);     /* "LFI Configuration Register" */
SFR_NOABS (LFI_ID, LFI_ID_t, LFI_ID_ADDR);        /* "Module Identification Register" */
SFR_ABS (SBCU_CON, SBCU_CON_t, SBCU_CON_ADDR);    /* "SBCU Control Register" */
SFR_ABS (SBCU_DBADR1, SBCU_DBADRm_t, SBCU_DBADR1_ADDR); /* "SBCU Debug Address 1 Register" */
SFR_ABS (SBCU_DBADR2, SBCU_DBADRm_t, SBCU_DBADR2_ADDR); /* "SBCU Debug Address 2 Register" */
SFR_ABS (SBCU_DBADRT, SBCU_DBADRT_t, SBCU_DBADRT_ADDR); /* "SBCU Debug Trapped Address Register" */
SFR_ABS (SBCU_DBBOS, SBCU_DBBOS_t, SBCU_DBBOS_ADDR); /* "SBCU Debug Bus Operation Signals Register" */
SFR_ABS (SBCU_DBBOST, SBCU_DBBOST_t, SBCU_DBBOST_ADDR); /* "SBCU Debug Trapped Bus Operation Signals Register" */
SFR_ABS (SBCU_DBCNTL, SBCU_DBCNTL_t, SBCU_DBCNTL_ADDR); /* "SBCU Debug Control Register" */
SFR_ABS (SBCU_DBDAT, SBCU_DBDAT_t, SBCU_DBDAT_ADDR); /* "SBCU Debug Data Status Register" */
SFR_ABS (SBCU_DBGNTT, SBCU_DBGNTT_t, SBCU_DBGNTT_ADDR); /* "SBCU Debug Trapped Master Register" */
SFR_ABS (SBCU_DBGRNT, SBCU_DBGRNT_t, SBCU_DBGRNT_ADDR); /* "SBCU Debug Grant Mask Register" */
SFR_ABS (SBCU_EADD, SBCU_EADD_t, SBCU_EADD_ADDR); /* "SBCU Error Address Capture Register" */
SFR_ABS (SBCU_ECON, SBCU_ECON_t, SBCU_ECON_ADDR); /* "SBCU Error Control Capture Register" */
SFR_ABS (SBCU_EDAT, SBCU_EDAT_t, SBCU_EDAT_ADDR); /* "SBCU Error Data Capture Register" */
SFR_ABS (SBCU_ID, SBCU_ID_t, SBCU_ID_ADDR);       /* "Module Identification Register" */
SFR_ABS (SBCU_SRC, SBCU_SRC_t, SBCU_SRC_ADDR);    /* "SBCU Service Request Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_BUSES_H_ (block "Buses") */


