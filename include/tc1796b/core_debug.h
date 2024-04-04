/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "Core Debug" of TriCore TC1796B (8 SFRs) */

#include <tc1796b/core_debug/addr.h>

#include <tc1796b/core_debug/masks.h>
#include <tc1796b/core_debug/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1796b/core_debug/types.h>
#include <tc1796b/core_debug/sharetypes.h>

#ifndef _HAVE_TRICORE_CORE_DEBUG_H_
#define _HAVE_TRICORE_CORE_DEBUG_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (CREVT, CREVT_t, CREVT_ADDR);           /* "Core SFR Access Break Event Specifier Register" */
SFR_NOABS (DBGSR, DBGSR_t, DBGSR_ADDR);           /* "Debug Status Register" */
SFR_NOABS (DCX, DCX_t, DCX_ADDR);                 /* "Debug Context Save Area Pointer" */
SFR_NOABS (DMS, DMS_t, DMS_ADDR);                 /* "Debug Monitor Start Address Register" */
SFR_NOABS (EXEVT, EXEVT_t, EXEVT_ADDR);           /* "External Break Input Event Specifier Register" */
SFR_NOABS (SWEVT, SWEVT_t, SWEVT_ADDR);           /* "Software Break Event Specifier Register" */
SFR_NOABS (TR0EVT, TRnEVT_t, TR0EVT_ADDR);        /* "Trigger Event 0 Specifier Register" */
SFR_NOABS (TR1EVT, TRnEVT_t, TR1EVT_ADDR);        /* "Trigger Event 1 Specifier Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_CORE_DEBUG_H_ (block "Core Debug") */


