/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "RBCU" of TriCore TC1796B (14 SFRs) */

#include <tc1796b/rbcu/addr.h>

#include <tc1796b/rbcu/masks.h>
#include <tc1796b/rbcu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1796b/rbcu/types.h>
#include <tc1796b/rbcu/sharetypes.h>

#ifndef _HAVE_TRICORE_RBCU_H_
#define _HAVE_TRICORE_RBCU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (RBCU_CON, RBCU_CON_t, RBCU_CON_ADDR);  /* "RBCU Control Register" */
SFR_NOABS (RBCU_DBADR1, RBCU_DBADRm_t, RBCU_DBADR1_ADDR); /* "RBCU Debug Address  1 Register" */
SFR_NOABS (RBCU_DBADR2, RBCU_DBADRm_t, RBCU_DBADR2_ADDR); /* "RBCU Debug Address 2 Register" */
SFR_NOABS (RBCU_DBADRT, RBCU_DBADRT_t, RBCU_DBADRT_ADDR); /* "RBCU Debug Trapped Address Register" */
SFR_NOABS (RBCU_DBBOS, RBCU_DBBOS_t, RBCU_DBBOS_ADDR); /* "RBCU Debug Bus Operation Signals Register" */
SFR_NOABS (RBCU_DBBOST, RBCU_DBBOST_t, RBCU_DBBOST_ADDR); /* "RBCU Debug Trapped Bus Operation Signals Register" */
SFR_NOABS (RBCU_DBCNTL, RBCU_DBCNTL_t, RBCU_DBCNTL_ADDR); /* "RBCU Debug Control Register" */
SFR_NOABS (RBCU_DBGNTT, RBCU_DBGNTT_t, RBCU_DBGNTT_ADDR); /* "RBCU Debug Trapped Master Register" */
SFR_NOABS (RBCU_DBGRNT, RBCU_DBGRNT_t, RBCU_DBGRNT_ADDR); /* "RBCU Debug Grant Mask Register" */
SFR_NOABS (RBCU_EADD, RBCU_EADD_t, RBCU_EADD_ADDR); /* "RBCU Error Address Capture Register" */
SFR_NOABS (RBCU_ECON, RBCU_ECON_t, RBCU_ECON_ADDR); /* "RBCU Error Control Capture Register" */
SFR_NOABS (RBCU_EDAT, RBCU_EDAT_t, RBCU_EDAT_ADDR); /* "RBCU Error Data Capture Register" */
SFR_NOABS (RBCU_ID, RBCU_ID_t, RBCU_ID_ADDR);     /* "RBCU Module Identification Register" */
SFR_NOABS (RBCU_SRC, RBCU_SRC_t, RBCU_SRC_ADDR);  /* "RBCU Service Request Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_RBCU_H_ (block "RBCU") */


