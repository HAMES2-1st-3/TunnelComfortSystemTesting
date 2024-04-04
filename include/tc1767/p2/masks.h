/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P2_MASKS_H_
#define _HAVE_TRICORE_P2_MASKS_H_


/****************** Masks for P2_PDR_t **********************/
/*
   P2_PDR                "Port 2 Pad Driver Mode Register"
*/
/**********************************************************/

#define P2_PDR_MASK                     0x07770077
#define P2_PDR_PD0_MASK                 0x00000007
#define P2_PDR_PD0_SHIFT                0
#define P2_PDR_PD1_MASK                 0x00000070
#define P2_PDR_PD1_SHIFT                4
#define P2_PDR_PDMLI0_MASK              0x00070000
#define P2_PDR_PDMLI0_SHIFT             16
#define P2_PDR_PDMSC0_MASK              0x00700000
#define P2_PDR_PDMSC0_SHIFT             20
#define P2_PDR_PDSSC1_MASK              0x07000000
#define P2_PDR_PDSSC1_SHIFT             24




#endif /* _HAVE_TRICORE_P2_MASKS_H_ */

