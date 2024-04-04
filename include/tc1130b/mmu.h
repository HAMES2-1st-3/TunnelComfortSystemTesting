/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MMU" of TriCore TC1130B (7 SFRs) */

#include <tc1130b/mmu/addr.h>

#include <tc1130b/mmu/masks.h>
#include <tc1130b/mmu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/mmu/types.h>
#include <tc1130b/mmu/sharetypes.h>

#ifndef _HAVE_TRICORE_MMU_H_
#define _HAVE_TRICORE_MMU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (MMU_ASI, MMU_ASI_t, MMU_ASI_ADDR);     /* "MMU Address Space Identifier Register" */
SFR_NOABS (MMU_CON, MMU_CON_t, MMU_CON_ADDR);     /* "MMU Configuration Register" */
SFR_NOABS (MMU_ID, MMU_ID_t, MMU_ID_ADDR);        /* "MMU Identification Register" */
SFR_NOABS (MMU_TFA, MMU_TFA_t, MMU_TFA_ADDR);     /* "MMU Translation Fault Address Register" */
SFR_NOABS (MMU_TPA, MMU_TPA_t, MMU_TPA_ADDR);     /* "MMU Translation Physical Address Register" */
SFR_NOABS (MMU_TPX, MMU_TPX_t, MMU_TPX_ADDR);     /* "MMU Translation Page Index Register" */
SFR_NOABS (MMU_TVA, MMU_TVA_t, MMU_TVA_ADDR);     /* "MMU Translation Virtual Address Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_MMU_H_ (block "MMU") */


