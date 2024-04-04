/* (c) HighTec EDV-Systeme GmbH */

/* block "SBCU" of TriCore TC1791 (15 SFRs) */

#include <tc1791/sbcu/addr.h>

#include <tc1791/sbcu/masks.h>
#include <tc1791/sbcu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1791/sbcu/types.h>
#include <tc1791/sbcu/sharetypes.h>

#ifndef _HAVE_TRICORE_SBCU_H_
#define _HAVE_TRICORE_SBCU_H_

#include <tricore-abs-noabs.h>

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
#endif /* _HAVE_TRICORE_SBCU_H_ (block "SBCU") */


