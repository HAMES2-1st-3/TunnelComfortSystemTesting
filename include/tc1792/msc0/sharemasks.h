/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MSC0_SHAREMASKS_H_
#define _HAVE_TRICORE_MSC0_SHAREMASKS_H_


/****************** Masks for MSC0_SRCm_t **********************/
/*
   MSC0_SRC0             "MSC0 Service Request Control Register 0"
   MSC0_SRC1             "MSC0 Service Request Control Register 1"
*/
/**********************************************************/

#define MSC0_SRCm_MASK                  0x0000f4ff
#define MSC0_SRCm_SRPN_MASK             0x000000ff
#define MSC0_SRCm_SRPN_SHIFT            0
#define MSC0_SRCm_TOS_MASK              0x00000400
#define MSC0_SRCm_TOS_SHIFT             10
#define MSC0_SRCm_SRE_MASK              0x00001000
#define MSC0_SRCm_SRE_SHIFT             12
#define MSC0_SRCm_SRR_MASK              0x00002000
#define MSC0_SRCm_SRR_SHIFT             13
#define MSC0_SRCm_CLRR_MASK             0x00004000
#define MSC0_SRCm_CLRR_SHIFT            14
#define MSC0_SRCm_SETR_MASK             0x00008000
#define MSC0_SRCm_SETR_SHIFT            15



/****************** Masks for MSC0_UDm_t **********************/
/*
   MSC0_UD0              "MSC0 Upstream Data Register 0"
   MSC0_UD1              "MSC0 Upstream Data Register 1"
   MSC0_UD2              "MSC0 Upstream Data Register 2"
   MSC0_UD3              "MSC0 Upstream Data Register 3"
*/
/**********************************************************/

#define MSC0_UDm_MASK                   0x007f00ff
#define MSC0_UDm_DATA_MASK              0x000000ff
#define MSC0_UDm_DATA_SHIFT             0
#define MSC0_UDm_V_MASK                 0x00010000
#define MSC0_UDm_V_SHIFT                16
#define MSC0_UDm_P_MASK                 0x00020000
#define MSC0_UDm_P_SHIFT                17
#define MSC0_UDm_C_MASK                 0x00040000
#define MSC0_UDm_C_SHIFT                18
#define MSC0_UDm_LABF_MASK              0x00180000
#define MSC0_UDm_LABF_SHIFT             19
#define MSC0_UDm_IPF_MASK               0x00200000
#define MSC0_UDm_IPF_SHIFT              21
#define MSC0_UDm_PERR_MASK              0x00400000
#define MSC0_UDm_PERR_SHIFT             22




#endif /* _HAVE_TRICORE_MSC0_SHAREMASKS_H_ */

