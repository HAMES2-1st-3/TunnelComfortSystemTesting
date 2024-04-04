/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CPS_SHAREMASKS_H_
#define _HAVE_TRICORE_CPS_SHAREMASKS_H_


/****************** Masks for CPU_SRCm_t **********************/
/*
   CPU_SRC0              "CPU Service Request Control Register 0"
   CPU_SRC1              "CPU Service Request Control Register 1"
   CPU_SRC2              "CPU Service Request Control Register 2"
   CPU_SRC3              "CPU Service Request Control Register 3"
*/
/**********************************************************/

#define CPU_SRCm_MASK                   0x0000f4ff
#define CPU_SRCm_SRPN_MASK              0x000000ff
#define CPU_SRCm_SRPN_SHIFT             0
#define CPU_SRCm_TOS_MASK               0x00000400
#define CPU_SRCm_TOS_SHIFT              10
#define CPU_SRCm_SRE_MASK               0x00001000
#define CPU_SRCm_SRE_SHIFT              12
#define CPU_SRCm_SRR_MASK               0x00002000
#define CPU_SRCm_SRR_SHIFT              13
#define CPU_SRCm_CLRR_MASK              0x00004000
#define CPU_SRCm_CLRR_SHIFT             14
#define CPU_SRCm_SETR_MASK              0x00008000
#define CPU_SRCm_SETR_SHIFT             15




#endif /* _HAVE_TRICORE_CPS_SHAREMASKS_H_ */

