/* (c) HighTec EDV-Systeme GmbH */

/* block "LMU" of TriCore TC1798 (3 SFRs) */

#include <tc1798/lmu/addr.h>

#include <tc1798/lmu/masks.h>
#include <tc1798/lmu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1798/lmu/types.h>
#include <tc1798/lmu/sharetypes.h>

#ifndef _HAVE_TRICORE_LMU_H_
#define _HAVE_TRICORE_LMU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (LMU_CLC, LMU_CLC_t, LMU_CLC_ADDR);     /* "LMU Clock Control Register" */
SFR_NOABS (LMU_MEMCON, LMU_MEMCON_t, LMU_MEMCON_ADDR); /* "LMU Memory Control Register" */
SFR_NOABS (LMU_MODID, LMU_MODID_t, LMU_MODID_ADDR); /* "LMU Module ID Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_LMU_H_ (block "LMU") */


