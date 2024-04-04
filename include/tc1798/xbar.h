/* (c) HighTec EDV-Systeme GmbH */

/* block "XBAR" of TriCore TC1798 (63 SFRs) */

#include <tc1798/xbar/addr.h>

#include <tc1798/xbar/masks.h>
#include <tc1798/xbar/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1798/xbar/types.h>
#include <tc1798/xbar/sharetypes.h>

#ifndef _HAVE_TRICORE_XBAR_H_
#define _HAVE_TRICORE_XBAR_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (XBAR_ARBCON0, XBAR_ARBCONm_t, XBAR_ARBCON0_ADDR); /* "Arbiter Control Register 0" */
SFR_NOABS (XBAR_ARBCON1, XBAR_ARBCONm_t, XBAR_ARBCON1_ADDR); /* "Arbiter Control Register 1" */
SFR_NOABS (XBAR_ARBCON2, XBAR_ARBCONm_t, XBAR_ARBCON2_ADDR); /* "Arbiter Control Register 2" */
SFR_NOABS (XBAR_ARBCON3, XBAR_ARBCONm_t, XBAR_ARBCON3_ADDR); /* "Arbiter Control Register 3" */
SFR_NOABS (XBAR_ARBCON4, XBAR_ARBCONm_t, XBAR_ARBCON4_ADDR); /* "Arbiter Control Register 4" */
SFR_NOABS (XBAR_ARBCON5, XBAR_ARBCONm_t, XBAR_ARBCON5_ADDR); /* "Arbiter Control Register 5" */
SFR_NOABS (XBAR_ARBCON6, XBAR_ARBCONm_t, XBAR_ARBCON6_ADDR); /* "Arbiter Control Register 6" */
SFR_NOABS (XBAR_ARBCOND, XBAR_ARBCOND_t, XBAR_ARBCOND_ADDR); /* "Arbiter Control Register D" */
SFR_NOABS (XBAR_DBADD0, XBAR_DBADD0_t, XBAR_DBADD0_ADDR); /* "Debug Mask Address Register 0" */
SFR_NOABS (XBAR_DBADD1, XBAR_DBADD1_t, XBAR_DBADD1_ADDR); /* "Debug Mask Address Register 1" */
SFR_NOABS (XBAR_DBADD2, XBAR_DBADD2_t, XBAR_DBADD2_ADDR); /* "Debug Mask Address Register 2" */
SFR_NOABS (XBAR_DBADD3, XBAR_DBADDm_t, XBAR_DBADD3_ADDR); /* "Debug Mask Address Register 3" */
SFR_NOABS (XBAR_DBADD4, XBAR_DBADDm_t, XBAR_DBADD4_ADDR); /* "Debug Mask Address Register 4" */
SFR_NOABS (XBAR_DBADD5, XBAR_DBADD5_t, XBAR_DBADD5_ADDR); /* "Debug Mask Address Register 5" */
SFR_NOABS (XBAR_DBADD6, XBAR_DBADDm_t, XBAR_DBADD6_ADDR); /* "Debug Mask Address Register 6" */
SFR_NOABS (XBAR_DBADDD, XBAR_DBADDD_t, XBAR_DBADDD_ADDR); /* "Debug Address Register D" */
SFR_NOABS (XBAR_DBCON0, XBAR_DBCONm_t, XBAR_DBCON0_ADDR); /* "Debug Control Register 0" */
SFR_NOABS (XBAR_DBCON1, XBAR_DBCONm_t, XBAR_DBCON1_ADDR); /* "Debug Control Register 1" */
SFR_NOABS (XBAR_DBCON2, XBAR_DBCONm_t, XBAR_DBCON2_ADDR); /* "Debug Control Register 2" */
SFR_NOABS (XBAR_DBCON3, XBAR_DBCONm_t, XBAR_DBCON3_ADDR); /* "Debug Control Register 3" */
SFR_NOABS (XBAR_DBCON4, XBAR_DBCONm_t, XBAR_DBCON4_ADDR); /* "Debug Control Register 4" */
SFR_NOABS (XBAR_DBCON5, XBAR_DBCONm_t, XBAR_DBCON5_ADDR); /* "Debug Control Register 5" */
SFR_NOABS (XBAR_DBCON6, XBAR_DBCONm_t, XBAR_DBCON6_ADDR); /* "Debug Control Register 6" */
SFR_NOABS (XBAR_DBCOND, XBAR_DBCOND_t, XBAR_DBCOND_ADDR); /* "Debug Control Register D" */
SFR_NOABS (XBAR_DBMADD0, XBAR_DBMADD0_t, XBAR_DBMADD0_ADDR); /* "Debug Mask Address Register 0" */
SFR_NOABS (XBAR_DBMADD1, XBAR_DBMADD1_t, XBAR_DBMADD1_ADDR); /* "Debug Mask Address Register 1" */
SFR_NOABS (XBAR_DBMADD2, XBAR_DBMADD2_t, XBAR_DBMADD2_ADDR); /* "Debug Mask Address Register 2" */
SFR_NOABS (XBAR_DBMADD3, XBAR_DBMADDm_t, XBAR_DBMADD3_ADDR); /* "Debug Mask Address Register 3" */
SFR_NOABS (XBAR_DBMADD4, XBAR_DBMADDm_t, XBAR_DBMADD4_ADDR); /* "Debug Mask Address Register 4" */
SFR_NOABS (XBAR_DBMADD5, XBAR_DBMADD5_t, XBAR_DBMADD5_ADDR); /* "Debug Mask Address Register 5" */
SFR_NOABS (XBAR_DBMADD6, XBAR_DBMADDm_t, XBAR_DBMADD6_ADDR); /* "Debug Mask Address Register 6" */
SFR_NOABS (XBAR_DBMADDD, XBAR_DBMADDD_t, XBAR_DBMADDD_ADDR); /* "Debug Mask Address Register D" */
SFR_NOABS (XBAR_DBSAT, XBAR_DBSAT_t, XBAR_DBSAT_ADDR); /* "Debug Trigger Event Status Register" */
SFR_NOABS (XBAR_ERR0, XBAR_ERRm_t, XBAR_ERR0_ADDR); /* "Error/Debug Capture Register 0" */
SFR_NOABS (XBAR_ERR1, XBAR_ERRm_t, XBAR_ERR1_ADDR); /* "Error/Debug Capture Register 1" */
SFR_NOABS (XBAR_ERR2, XBAR_ERRm_t, XBAR_ERR2_ADDR); /* "Error/Debug Capture Register 2" */
SFR_NOABS (XBAR_ERR3, XBAR_ERRm_t, XBAR_ERR3_ADDR); /* "Error/Debug Capture Register 3" */
SFR_NOABS (XBAR_ERR4, XBAR_ERRm_t, XBAR_ERR4_ADDR); /* "Error/Debug Capture Register 4" */
SFR_NOABS (XBAR_ERR5, XBAR_ERRm_t, XBAR_ERR5_ADDR); /* "Error/Debug Capture Register 5" */
SFR_NOABS (XBAR_ERR6, XBAR_ERRm_t, XBAR_ERR6_ADDR); /* "Error/Debug Capture Register 6" */
SFR_NOABS (XBAR_ERRADDR0, XBAR_ERRADDRm_t, XBAR_ERRADDR0_ADDR); /* "Error/Debug Address Capture Register 0" */
SFR_NOABS (XBAR_ERRADDR1, XBAR_ERRADDRm_t, XBAR_ERRADDR1_ADDR); /* "Error/Debug Address Capture Register 1" */
SFR_NOABS (XBAR_ERRADDR2, XBAR_ERRADDRm_t, XBAR_ERRADDR2_ADDR); /* "Error/Debug Address Capture Register 2" */
SFR_NOABS (XBAR_ERRADDR3, XBAR_ERRADDRm_t, XBAR_ERRADDR3_ADDR); /* "Error/Debug Address Capture Register 3" */
SFR_NOABS (XBAR_ERRADDR4, XBAR_ERRADDRm_t, XBAR_ERRADDR4_ADDR); /* "Error/Debug Address Capture Register 4" */
SFR_NOABS (XBAR_ERRADDR5, XBAR_ERRADDRm_t, XBAR_ERRADDR5_ADDR); /* "Error/Debug Address Capture Register 5" */
SFR_NOABS (XBAR_ERRADDR6, XBAR_ERRADDRm_t, XBAR_ERRADDR6_ADDR); /* "Error/Debug Address Capture Register 6" */
SFR_NOABS (XBAR_ERRADDRD, XBAR_ERRADDRD_t, XBAR_ERRADDRD_ADDR); /* "Error/Debug Address Capture Register D" */
SFR_NOABS (XBAR_ERRD, XBAR_ERRD_t, XBAR_ERRD_ADDR); /* "Error/Debug Capture Register D" */
SFR_NOABS (XBAR_EXTCON2, XBAR_EXTCON2_t, XBAR_EXTCON2_ADDR); /* "External Control Register 2" */
SFR_NOABS (XBAR_ID, XBAR_ID_t, XBAR_ID_ADDR);     /* "Module Identification Register" */
SFR_NOABS (XBAR_IDINTEN, XBAR_IDINTEN_t, XBAR_IDINTEN_ADDR); /* "Transaction ID Interrupt Enable Register" */
SFR_NOABS (XBAR_IDINTSAT, XBAR_IDINTSAT_t, XBAR_IDINTSAT_ADDR); /* "Transaction ID Interrupt Status Register" */
SFR_NOABS (XBAR_INTSAT, XBAR_INTSAT_t, XBAR_INTSAT_ADDR); /* "Arbiter Interrupt Status Register" */
SFR_NOABS (XBAR_PRIOL0, XBAR_PRIOL0_t, XBAR_PRIOL0_ADDR); /* "Arbiter Priority Register 0" */
SFR_NOABS (XBAR_PRIOL1, XBAR_PRIOL1_t, XBAR_PRIOL1_ADDR); /* "Arbiter Priority Register 1" */
SFR_NOABS (XBAR_PRIOL2, XBAR_PRIOL2_t, XBAR_PRIOL2_ADDR); /* "Arbiter Priority Register 2" */
SFR_NOABS (XBAR_PRIOL3, XBAR_PRIOLm_t, XBAR_PRIOL3_ADDR); /* "Arbiter Priority Register 3" */
SFR_NOABS (XBAR_PRIOL4, XBAR_PRIOLm_t, XBAR_PRIOL4_ADDR); /* "Arbiter Priority Register 4" */
SFR_NOABS (XBAR_PRIOL5, XBAR_PRIOLm_t, XBAR_PRIOL5_ADDR); /* "Arbiter Priority Register 5" */
SFR_NOABS (XBAR_PRIOL6, XBAR_PRIOLm_t, XBAR_PRIOL6_ADDR); /* "Arbiter Priority Register 6" */
SFR_NOABS (XBAR_PRIOLD, XBAR_PRIOLD_t, XBAR_PRIOLD_ADDR); /* "Arbiter Priority Register D" */
SFR_NOABS (XBAR_SRC, XBAR_SRC_t, XBAR_SRC_ADDR);  /* "XBar_SRI Service Request Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_XBAR_H_ (block "XBAR") */


