/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "Core Debug Registers" of TriCore TC1766B (8 SFRs) */

#include <tc1766b/core_debug_registers/addr.h>

#include <tc1766b/core_debug_registers/masks.h>
#include <tc1766b/core_debug_registers/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1766b/core_debug_registers/types.h>
#include <tc1766b/core_debug_registers/sharetypes.h>

#ifndef _HAVE_TRICORE_CORE_DEBUG_REGISTERS_H_
#define _HAVE_TRICORE_CORE_DEBUG_REGISTERS_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (CREVT, CREVT_t, CREVT_ADDR);           /* "Core SFR Access Break Event Specifier Register" */
SFR_NOABS (DBGSR, DBGSR_t, DBGSR_ADDR);           /* "Debug Status Register" */
SFR_NOABS (DCX, DCX_t, DCX_ADDR);                 /* "Debug Context Save Area Pointer" */
SFR_NOABS (DMS, DMS_t, DMS_ADDR);                 /* "Debug Monitor Start Address Register" */
SFR_NOABS (EXEVT, EXEVT_t, EXEVT_ADDR);           /* "External Break Input Event Specifier Register" */
SFR_NOABS (SWEVT, SWEVT_t, SWEVT_ADDR);           /* "Debug Instruction Break Event Specifier Register" */
SFR_NOABS (TR0EVT, TRnEVT_t, TR0EVT_ADDR);        /* "Trigger Event 0 Specifier Register" */
SFR_NOABS (TR1EVT, TRnEVT_t, TR1EVT_ADDR);        /* "Trigger Event 1 Specifier Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_CORE_DEBUG_REGISTERS_H_ (block "Core Debug Registers") */


