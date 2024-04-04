/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PCP_SHAREMASKS_H_
#define _HAVE_TRICORE_PCP_SHAREMASKS_H_


/****************** Masks for PCP_SRCm_t **********************/
/*
   PCP_SRC0              "PCP Service Request Control Register 0"
   PCP_SRC1              "PCP Service Request Control Register 1"
   PCP_SRC2              "PCP Service Request Control Register 2"
   PCP_SRC3              "PCP Service Request Control Register 3"
   PCP_SRC4              "PCP Service Request Control Register 4"
   PCP_SRC5              "PCP Service Request Control Register 5"
   PCP_SRC6              "PCP Service Request Control Register 6"
   PCP_SRC7              "PCP Service Request Control Register 7"
   PCP_SRC8              "PCP Service Request Control Register 8"
*/
/**********************************************************/

#define PCP_SRCm_MASK                   0x00003cff
#define PCP_SRCm_SRPN_MASK              0x000000ff
#define PCP_SRCm_SRPN_SHIFT             0
#define PCP_SRCm_TOS_MASK               0x00000c00
#define PCP_SRCm_TOS_SHIFT              10
#define PCP_SRCm_SRE_MASK               0x00001000
#define PCP_SRCm_SRE_SHIFT              12
#define PCP_SRCm_SRR_MASK               0x00002000
#define PCP_SRCm_SRR_SHIFT              13




#endif /* _HAVE_TRICORE_PCP_SHAREMASKS_H_ */

