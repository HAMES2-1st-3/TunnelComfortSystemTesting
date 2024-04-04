/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CPS_MASKS_H_
#define _HAVE_TRICORE_CPS_MASKS_H_


/****************** Masks for CPS_ID_t **********************/
/*
   CPS_ID                "CPS Module Identification Register"
*/
/**********************************************************/

#define CPS_ID_MASK                     0xffffffff
#define CPS_ID_Mod_Rev_MASK             0x000000ff
#define CPS_ID_Mod_Rev_SHIFT            0
#define CPS_ID_Mod_Type_MASK            0x0000ff00
#define CPS_ID_Mod_Type_SHIFT           8
#define CPS_ID_Mod_Number_MASK          0xffff0000
#define CPS_ID_Mod_Number_SHIFT         16



/****************** Masks for CPU_SBSRC_t **********************/
/*
   CPU_SBSRC             "Software Break Service Request Control Register"
*/
/**********************************************************/

#define CPU_SBSRC_MASK                  0x0000f4ff
#define CPU_SBSRC_SRPN_MASK             0x000000ff
#define CPU_SBSRC_SRPN_SHIFT            0
#define CPU_SBSRC_TOS_MASK              0x00000400
#define CPU_SBSRC_TOS_SHIFT             10
#define CPU_SBSRC_SRE_MASK              0x00001000
#define CPU_SBSRC_SRE_SHIFT             12
#define CPU_SBSRC_SRR_MASK              0x00002000
#define CPU_SBSRC_SRR_SHIFT             13
#define CPU_SBSRC_CLRR_MASK             0x00004000
#define CPU_SBSRC_CLRR_SHIFT            14
#define CPU_SBSRC_SETR_MASK             0x00008000
#define CPU_SBSRC_SETR_SHIFT            15




#endif /* _HAVE_TRICORE_CPS_MASKS_H_ */

