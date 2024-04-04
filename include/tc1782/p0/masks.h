/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P0_MASKS_H_
#define _HAVE_TRICORE_P0_MASKS_H_


/****************** Masks for P0_PDR_t **********************/
/*
   P0_PDR                "Port 0 Pad Driver Mode Register"
*/
/**********************************************************/

#define P0_PDR_MASK                     0x00077777
#define P0_PDR_PD0_MASK                 0x00000007
#define P0_PDR_PD0_SHIFT                0
#define P0_PDR_PD1_MASK                 0x00000070
#define P0_PDR_PD1_SHIFT                4
#define P0_PDR_PDERAYA_MASK             0x00000700
#define P0_PDR_PDERAYA_SHIFT            8
#define P0_PDR_PDERAYB_MASK             0x00007000
#define P0_PDR_PDERAYB_SHIFT            12
#define P0_PDR_PD2_MASK                 0x00070000
#define P0_PDR_PD2_SHIFT                16




#endif /* _HAVE_TRICORE_P0_MASKS_H_ */

