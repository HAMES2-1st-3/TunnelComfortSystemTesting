/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "PBCU" of TriCore TC1796B (6 SFRs) */

#include <tc1796b/pbcu/addr.h>

#include <tc1796b/pbcu/masks.h>
#include <tc1796b/pbcu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1796b/pbcu/types.h>
#include <tc1796b/pbcu/sharetypes.h>

#ifndef _HAVE_TRICORE_PBCU_H_
#define _HAVE_TRICORE_PBCU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (PBCU_ID, PBCU_ID_t, PBCU_ID_ADDR);     /* "PBCU Module Identification Register" */
SFR_NOABS (PBCU_LEADDR, PBCU_LEADDR_t, PBCU_LEADDR_ADDR); /* "PBCU LMB Error Address Register" */
SFR_NOABS (PBCU_LEATT, PBCU_LEATT_t, PBCU_LEATT_ADDR); /* "PBCU LMB Error Attribute Register" */
SFR_NOABS (PBCU_LEDATH, PBCU_LEDATH_t, PBCU_LEDATH_ADDR); /* "PBCU LMB Error Data High Register" */
SFR_NOABS (PBCU_LEDATL, PBCU_LEDATL_t, PBCU_LEDATL_ADDR); /* "PBCU LMB Error Data Low Register" */
SFR_NOABS (PBCU_SRC, PBCU_SRC_t, PBCU_SRC_ADDR);  /* "PBCU Service Request Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_PBCU_H_ (block "PBCU") */


