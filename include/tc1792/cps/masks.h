/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CPS_MASKS_H_
#define _HAVE_TRICORE_CPS_MASKS_H_


/****************** Masks for CPS_ID_t **********************/
/*
   CPS_ID                "CPS Module Identification Register"
*/
/**********************************************************/

#define CPS_ID_MASK                     0x00000000



/****************** Masks for CPU_SBSRC0_t **********************/
/*
   CPU_SBSRC0            "CPU Software Break Service Request Control Register"
*/
/**********************************************************/

#define CPU_SBSRC0_MASK                 0x0000f4ff
#define CPU_SBSRC0_SRPN_MASK            0x000000ff
#define CPU_SBSRC0_SRPN_SHIFT           0
#define CPU_SBSRC0_TOS_MASK             0x00000400
#define CPU_SBSRC0_TOS_SHIFT            10
#define CPU_SBSRC0_SRE_MASK             0x00001000
#define CPU_SBSRC0_SRE_SHIFT            12
#define CPU_SBSRC0_SRR_MASK             0x00002000
#define CPU_SBSRC0_SRR_SHIFT            13
#define CPU_SBSRC0_CLRR_MASK            0x00004000
#define CPU_SBSRC0_CLRR_SHIFT           14
#define CPU_SBSRC0_SETR_MASK            0x00008000
#define CPU_SBSRC0_SETR_SHIFT           15




#endif /* _HAVE_TRICORE_CPS_MASKS_H_ */

