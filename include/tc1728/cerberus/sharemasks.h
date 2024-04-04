/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CERBERUS_SHAREMASKS_H_
#define _HAVE_TRICORE_CERBERUS_SHAREMASKS_H_


/****************** Masks for CBS_SRCm_t **********************/
/*
   CBS_SRC0              "Service Request Node1 Control Register"
   CBS_SRC1              "Service Request Node2 Control Register"
*/
/**********************************************************/

#define CBS_SRCm_MASK                   0x0000fcff
#define CBS_SRCm_SRPN_MASK              0x000000ff
#define CBS_SRCm_SRPN_SHIFT             0
#define CBS_SRCm_TOS_MASK               0x00000c00
#define CBS_SRCm_TOS_SHIFT              10
#define CBS_SRCm_SRE_MASK               0x00001000
#define CBS_SRCm_SRE_SHIFT              12
#define CBS_SRCm_SRR_MASK               0x00002000
#define CBS_SRCm_SRR_SHIFT              13
#define CBS_SRCm_CLRR_MASK              0x00004000
#define CBS_SRCm_CLRR_SHIFT             14
#define CBS_SRCm_SETR_MASK              0x00008000
#define CBS_SRCm_SETR_SHIFT             15




#endif /* _HAVE_TRICORE_CERBERUS_SHAREMASKS_H_ */

