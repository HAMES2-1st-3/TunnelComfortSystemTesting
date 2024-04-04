/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "LBCU LL" of TriCore TC1766B (6 SFRs) */

#include <tc1766b/lbcu/addr.h>

#include <tc1766b/lbcu/masks.h>
#include <tc1766b/lbcu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1766b/lbcu/types.h>
#include <tc1766b/lbcu/sharetypes.h>

#ifndef _HAVE_TRICORE_LBCU_H_
#define _HAVE_TRICORE_LBCU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (LBCU_ID, LBCU_ID_t, LBCU_ID_ADDR);     /* "LBCU Module Identification Register" */
SFR_NOABS (LBCU_LEADDR, LBCU_LEADDR_t, LBCU_LEADDR_ADDR); /* "LMB Error Addres Register" */
SFR_NOABS (LBCU_LEATT, LBCU_LEATT_t, LBCU_LEATT_ADDR); /* "LMB Error Attributes Register" */
SFR_NOABS (LBCU_LEDATH, LBCU_LEDATH_t, LBCU_LEDATH_ADDR); /* "LMB Error Data Register (32 MSB's)" */
SFR_NOABS (LBCU_LEDATL, LBCU_LEDATL_t, LBCU_LEDATL_ADDR); /* "LMB Error Data Register (32 LSB's)" */
SFR_NOABS (LBCU_SRC, LBCU_SRC_t, LBCU_SRC_ADDR);  /* "PBCU Service Request Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_LBCU_H_ (block "LBCU LL") */


