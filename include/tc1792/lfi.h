/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "LFI" of TriCore TC1792 (2 SFRs) */

#include <tc1792/lfi/addr.h>

#include <tc1792/lfi/masks.h>
#include <tc1792/lfi/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1792/lfi/types.h>
#include <tc1792/lfi/sharetypes.h>

#ifndef _HAVE_TRICORE_LFI_H_
#define _HAVE_TRICORE_LFI_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (LFI_CON, LFI_CON_t, LFI_CON_ADDR);     /* "LFI Configuration Register" */
SFR_NOABS (LFI_ID, LFI_ID_t, LFI_ID_ADDR);        /* "LFI Module Identification Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_LFI_H_ (block "LFI") */


