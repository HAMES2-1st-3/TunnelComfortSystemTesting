/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MMU_MASKS_H_
#define _HAVE_TRICORE_MMU_MASKS_H_


/****************** Masks for MMU_ASI_t **********************/
/*
   MMU_ASI               "MMU Address Space Identifier Register"
*/
/**********************************************************/

#define MMU_ASI_MASK                    0x0000001f
#define MMU_ASI_ASI_MASK                0x0000001f
#define MMU_ASI_ASI_SHIFT               0



/****************** Masks for MMU_CON_t **********************/
/*
   MMU_CON               "MMU Configuration Register"
*/
/**********************************************************/

#define MMU_CON_MASK                    0x00008fff
#define MMU_CON_V_MASK                  0x00000001
#define MMU_CON_V_SHIFT                 0
#define MMU_CON_SZA_MASK                0x00000006
#define MMU_CON_SZA_SHIFT               1
#define MMU_CON_SZB_MASK                0x00000018
#define MMU_CON_SZB_SHIFT               3
#define MMU_CON_TSZ_MASK                0x00000fe0
#define MMU_CON_TSZ_SHIFT               5
#define MMU_CON_MXT_MASK                0x00008000
#define MMU_CON_MXT_SHIFT               15



/****************** Masks for MMU_ID_t **********************/
/*
   MMU_ID                "MMU Identification Register"
*/
/**********************************************************/

#define MMU_ID_MASK                     0xffffffff
#define MMU_ID_REV_MASK                 0x000000ff
#define MMU_ID_REV_SHIFT                0
#define MMU_ID_MOD_32B_MASK             0x0000ff00
#define MMU_ID_MOD_32B_SHIFT            8
#define MMU_ID_MOD_MASK                 0xffff0000
#define MMU_ID_MOD_SHIFT                16



/****************** Masks for MMU_TFA_t **********************/
/*
   MMU_TFA               "MMU Translation Fault Address Register"
*/
/**********************************************************/

#define MMU_TFA_MASK                    0x00ffffff
#define MMU_TFA_FPN_MASK                0x00ffffff
#define MMU_TFA_FPN_SHIFT               0



/****************** Masks for MMU_TPA_t **********************/
/*
   MMU_TPA               "MMU Translation Physical Address Register"
*/
/**********************************************************/

#define MMU_TPA_MASK                    0xff3fffff
#define MMU_TPA_PPN_MASK                0x003fffff
#define MMU_TPA_PPN_SHIFT               0
#define MMU_TPA_PSZ_MASK                0x03000000
#define MMU_TPA_PSZ_SHIFT               24
#define MMU_TPA_C_MASK                  0x04000000
#define MMU_TPA_C_SHIFT                 26
#define MMU_TPA_G_MASK                  0x08000000
#define MMU_TPA_G_SHIFT                 27
#define MMU_TPA_RE_MASK                 0x10000000
#define MMU_TPA_RE_SHIFT                28
#define MMU_TPA_WE_MASK                 0x20000000
#define MMU_TPA_WE_SHIFT                29
#define MMU_TPA_XE_MASK                 0x40000000
#define MMU_TPA_XE_SHIFT                30
#define MMU_TPA_V_MASK                  0x80000000
#define MMU_TPA_V_SHIFT                 31



/****************** Masks for MMU_TPX_t **********************/
/*
   MMU_TPX               "MMU Translation Page Index Register"
*/
/**********************************************************/

#define MMU_TPX_MASK                    0x000000ff
#define MMU_TPX_INDEX_MASK              0x000000ff
#define MMU_TPX_INDEX_SHIFT             0



/****************** Masks for MMU_TVA_t **********************/
/*
   MMU_TVA               "MMU Translation Virtual Address Register"
*/
/**********************************************************/

#define MMU_TVA_MASK                    0x1f3fffff
#define MMU_TVA_VPN_MASK                0x003fffff
#define MMU_TVA_VPN_SHIFT               0
#define MMU_TVA_ASI_MASK                0x1f000000
#define MMU_TVA_ASI_SHIFT               24




#endif /* _HAVE_TRICORE_MMU_MASKS_H_ */

