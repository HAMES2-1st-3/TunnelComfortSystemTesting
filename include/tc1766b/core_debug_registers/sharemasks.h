/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CORE_DEBUG_REGISTERS_SHAREMASKS_H_
#define _HAVE_TRICORE_CORE_DEBUG_REGISTERS_SHAREMASKS_H_


/****************** Masks for TRnEVT_t **********************/
/*
   TR0EVT                "Trigger Event 0 Specifier Register"
   TR1EVT                "Trigger Event 1 Specifier Register"
*/
/**********************************************************/

#define TRnEVT_MASK                     0x00000f2f
#define TRnEVT_EVTA_MASK                0x00000007
#define TRnEVT_EVTA_SHIFT               0
#define TRnEVT_BBM_MASK                 0x00000008
#define TRnEVT_BBM_SHIFT                3
#define TRnEVT_SUSP_MASK                0x00000020
#define TRnEVT_SUSP_SHIFT               5
#define TRnEVT_DLR_LR_MASK              0x00000100
#define TRnEVT_DLR_LR_SHIFT             8
#define TRnEVT_DLR_U_MASK               0x00000200
#define TRnEVT_DLR_U_SHIFT              9
#define TRnEVT_DU_LR_MASK               0x00000400
#define TRnEVT_DU_LR_SHIFT              10
#define TRnEVT_DU_U_MASK                0x00000800
#define TRnEVT_DU_U_SHIFT               11




#endif /* _HAVE_TRICORE_CORE_DEBUG_REGISTERS_SHAREMASKS_H_ */

