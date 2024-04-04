/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "Core Debug Registers" of TriCore TC1766B (8 SFRs) */

#ifndef _HAVE_TRICORE_CORE_DEBUG_REGISTERS_ADDRESSES_H_
#define _HAVE_TRICORE_CORE_DEBUG_REGISTERS_ADDRESSES_H_

#define DBGSR_ADDR            0xF7E1FD00     /* "Debug Status Register" */
#define EXEVT_ADDR            0xF7E1FD08     /* "External Break Input Event Specifier Register" */
#define CREVT_ADDR            0xF7E1FD0C     /* "Core SFR Access Break Event Specifier Register" */
#define SWEVT_ADDR            0xF7E1FD10     /* "Debug Instruction Break Event Specifier Register" */
#define TR0EVT_ADDR           0xF7E1FD20     /* "Trigger Event 0 Specifier Register" */
#define TR1EVT_ADDR           0xF7E1FD24     /* "Trigger Event 1 Specifier Register" */
#define DMS_ADDR              0xF7E1FD40     /* "Debug Monitor Start Address Register" */
#define DCX_ADDR              0xF7E1FD44     /* "Debug Context Save Area Pointer" */


#endif /* _HAVE_TRICORE_CORE_DEBUG_REGISTERS_ADDRESSES_H_ (block "Core Debug Registers") */


