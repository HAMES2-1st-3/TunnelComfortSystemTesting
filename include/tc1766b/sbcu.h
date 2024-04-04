/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "SBCU LL" of TriCore TC1766B (14 SFRs) */

#include <tc1766b/sbcu/addr.h>

#include <tc1766b/sbcu/masks.h>
#include <tc1766b/sbcu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1766b/sbcu/types.h>
#include <tc1766b/sbcu/sharetypes.h>

#ifndef _HAVE_TRICORE_SBCU_H_
#define _HAVE_TRICORE_SBCU_H_

#include <tricore-abs-noabs.h>

SFR_ABS (SBCU_CON, SBCU_CON_t, SBCU_CON_ADDR);    /* "SBCU Control Register" */
SFR_ABS (SBCU_DBADR1, SBCU_DBADRm_t, SBCU_DBADR1_ADDR); /* "Debug Address1 Register (OCDS)" */
SFR_ABS (SBCU_DBADR2, SBCU_DBADRm_t, SBCU_DBADR2_ADDR); /* "Debug Address2 Register (OCDS)" */
SFR_ABS (SBCU_DBADRT, SBCU_DBADRT_t, SBCU_DBADRT_ADDR); /* "Debug Trapped Address Register (OCDS)" */
SFR_ABS (SBCU_DBBOS, SBCU_DBBOS_t, SBCU_DBBOS_ADDR); /* "Debug Bus Operation Register (OCDS)" */
SFR_ABS (SBCU_DBBOST, SBCU_DBBOST_t, SBCU_DBBOST_ADDR); /* "Debug Trapped Bus Operation Register (OCDS)" */
SFR_ABS (SBCU_DBCNTL, SBCU_DBCNTL_t, SBCU_DBCNTL_ADDR); /* "Debug Control Register (OCDS)" */
SFR_ABS (SBCU_DBGNTT, SBCU_DBGNTT_t, SBCU_DBGNTT_ADDR); /* "Debug Trapped Master Register (OCDS)" */
SFR_ABS (SBCU_DBGRNT, SBCU_DBGRNT_t, SBCU_DBGRNT_ADDR); /* "Debug Grant Mask Register (OCDS)" */
SFR_ABS (SBCU_EADD, SBCU_EADD_t, SBCU_EADD_ADDR); /* "Error Address Capture Register" */
SFR_ABS (SBCU_ECON, SBCU_ECON_t, SBCU_ECON_ADDR); /* "Error Control Capture Register" */
SFR_ABS (SBCU_EDAT, SBCU_EDAT_t, SBCU_EDAT_ADDR); /* "Error Data Capture Register" */
SFR_ABS (SBCU_ID, SBCU_ID_t, SBCU_ID_ADDR);       /* "SBCU Module Identification Register" */
SFR_ABS (SBCU_SRC, SBCU_SRC_t, SBCU_SRC_ADDR);    /* "SBCU Service Request Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_SBCU_H_ (block "SBCU LL") */


