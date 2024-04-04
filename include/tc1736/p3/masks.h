/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P3_MASKS_H_
#define _HAVE_TRICORE_P3_MASKS_H_


/****************** Masks for P3_PDR_t **********************/
/*
   P3_PDR                "Port 3 Pad Driver Mode Register"
*/
/**********************************************************/

#define P3_PDR_MASK                     0x77770077
#define P3_PDR_PD0_MASK                 0x00000007
#define P3_PDR_PD0_SHIFT                0
#define P3_PDR_PD1_MASK                 0x00000070
#define P3_PDR_PD1_SHIFT                4
#define P3_PDR_PDASC0_MASK              0x00070000
#define P3_PDR_PDASC0_SHIFT             16
#define P3_PDR_PDSSC0_MASK              0x00700000
#define P3_PDR_PDSSC0_SHIFT             20
#define P3_PDR_PDASC1_MASK              0x07000000
#define P3_PDR_PDASC1_SHIFT             24
#define P3_PDR_PDCAN_MASK               0x70000000
#define P3_PDR_PDCAN_SHIFT              28




#endif /* _HAVE_TRICORE_P3_MASKS_H_ */

