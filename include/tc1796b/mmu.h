/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MMU" of TriCore TC1796B (1 SFRs) */

#include <tc1796b/mmu/addr.h>

#include <tc1796b/mmu/masks.h>
#include <tc1796b/mmu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1796b/mmu/types.h>
#include <tc1796b/mmu/sharetypes.h>

#ifndef _HAVE_TRICORE_MMU_H_
#define _HAVE_TRICORE_MMU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (MMU_CON, MMU_CON_t, MMU_CON_ADDR);     /* "MMU Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_MMU_H_ (block "MMU") */


