/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "DBCU" of TriCore TC1796B (6 SFRs) */

#include <tc1796b/dbcu/addr.h>

#include <tc1796b/dbcu/masks.h>
#include <tc1796b/dbcu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1796b/dbcu/types.h>
#include <tc1796b/dbcu/sharetypes.h>

#ifndef _HAVE_TRICORE_DBCU_H_
#define _HAVE_TRICORE_DBCU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (DBCU_ID, DBCU_ID_t, DBCU_ID_ADDR);     /* "DBCU Module Identification Register" */
SFR_NOABS (DBCU_LEADDR, DBCU_LEADDR_t, DBCU_LEADDR_ADDR); /* "DBCU LMB Error Address Register" */
SFR_NOABS (DBCU_LEATT, DBCU_LEATT_t, DBCU_LEATT_ADDR); /* "DBCU LMB Error Attribute Register" */
SFR_NOABS (DBCU_LEDATH, DBCU_LEDATH_t, DBCU_LEDATH_ADDR); /* "DBCU LMB Error Data High Register" */
SFR_NOABS (DBCU_LEDATL, DBCU_LEDATL_t, DBCU_LEDATL_ADDR); /* "DBCU LMB Error Data Low Register" */
SFR_NOABS (DBCU_SRC, DBCU_SRC_t, DBCU_SRC_ADDR);  /* "DBCU Service Request Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_DBCU_H_ (block "DBCU") */


