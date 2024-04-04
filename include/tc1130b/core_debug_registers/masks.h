/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CORE_DEBUG_REGISTERS_MASKS_H_
#define _HAVE_TRICORE_CORE_DEBUG_REGISTERS_MASKS_H_


/****************** Masks for CREVT_t **********************/
/*
   CREVT                 "Core SFR Access Break Event Specifier Register"
*/
/**********************************************************/

#define CREVT_MASK                      0x0000002f
#define CREVT_EVTA_MASK                 0x00000007
#define CREVT_EVTA_SHIFT                0
#define CREVT_BBM_MASK                  0x00000008
#define CREVT_BBM_SHIFT                 3
#define CREVT_SUSP_MASK                 0x00000020
#define CREVT_SUSP_SHIFT                5



/****************** Masks for DBGSR_t **********************/
/*
   DBGSR                 "Debug Status Register"
*/
/**********************************************************/

#define DBGSR_MASK                      0x00001fd7
#define DBGSR_DE_MASK                   0x00000001
#define DBGSR_DE_SHIFT                  0
#define DBGSR_HALT_MASK                 0x00000006
#define DBGSR_HALT_SHIFT                1
#define DBGSR_SUSP_MASK                 0x00000010
#define DBGSR_SUSP_SHIFT                4
#define DBGSR_PREVSUSP_MASK             0x00000040
#define DBGSR_PREVSUSP_SHIFT            6
#define DBGSR_PEVT_MASK                 0x00000080
#define DBGSR_PEVT_SHIFT                7
#define DBGSR_EVTSRC_MASK               0x00001f00
#define DBGSR_EVTSRC_SHIFT              8



/****************** Masks for DCX_t **********************/
/*
   DCX                   "Debug Context Save Area Pointer"
*/
/**********************************************************/

#define DCX_MASK                        0xffffffff
#define DCX_DCXPTR_3_0_MASK             0x0000000f
#define DCX_DCXPTR_3_0_SHIFT            0
#define DCX_DCXPTR_9_4_MASK             0x000003f0
#define DCX_DCXPTR_9_4_SHIFT            4
#define DCX_DCXPTR_15_10_MASK           0x0000fc00
#define DCX_DCXPTR_15_10_SHIFT          10
#define DCX_DCXPTR_31_16_MASK           0xffff0000
#define DCX_DCXPTR_31_16_SHIFT          16



/****************** Masks for DMS_t **********************/
/*
   DMS                   "Debug Monitor Start Address Register"
*/
/**********************************************************/

#define DMS_MASK                        0xfffffffe
#define DMS_DMSADR_MASK                 0xfffffffe
#define DMS_DMSADR_SHIFT                1



/****************** Masks for EXEVT_t **********************/
/*
   EXEVT                 "External Break Input Event Specifier Register"
*/
/**********************************************************/

#define EXEVT_MASK                      0x0000002f
#define EXEVT_EVTA_MASK                 0x00000007
#define EXEVT_EVTA_SHIFT                0
#define EXEVT_BBM_MASK                  0x00000008
#define EXEVT_BBM_SHIFT                 3
#define EXEVT_SUSP_MASK                 0x00000020
#define EXEVT_SUSP_SHIFT                5



/****************** Masks for SWEVT_t **********************/
/*
   SWEVT                 "Debug Instruction Break Event Specifier Register"
*/
/**********************************************************/

#define SWEVT_MASK                      0x0000002f
#define SWEVT_EVTA_MASK                 0x00000007
#define SWEVT_EVTA_SHIFT                0
#define SWEVT_BBM_MASK                  0x00000008
#define SWEVT_BBM_SHIFT                 3
#define SWEVT_SUSP_MASK                 0x00000020
#define SWEVT_SUSP_SHIFT                5




#endif /* _HAVE_TRICORE_CORE_DEBUG_REGISTERS_MASKS_H_ */

