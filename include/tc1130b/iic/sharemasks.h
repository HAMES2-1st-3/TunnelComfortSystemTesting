/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_IIC_SHAREMASKS_H_
#define _HAVE_TRICORE_IIC_SHAREMASKS_H_


/****************** Masks for IIC_XPmSRC_t **********************/
/*
   IIC_XP0SRC            "IIC Service Request Control Register 0"
   IIC_XP1SRC            "IIC Service Request Control Register 1"
   IIC_XP2SRC            "IIC Service Request Control Register 2"
*/
/**********************************************************/

#define IIC_XPmSRC_MASK                 0x0000f4ff
#define IIC_XPmSRC_SRPN_MASK            0x000000ff
#define IIC_XPmSRC_SRPN_SHIFT           0
#define IIC_XPmSRC_TOS_MASK             0x00000400
#define IIC_XPmSRC_TOS_SHIFT            10
#define IIC_XPmSRC_SRE_MASK             0x00001000
#define IIC_XPmSRC_SRE_SHIFT            12
#define IIC_XPmSRC_SRR_MASK             0x00002000
#define IIC_XPmSRC_SRR_SHIFT            13
#define IIC_XPmSRC_CLRR_MASK            0x00004000
#define IIC_XPmSRC_CLRR_SHIFT           14
#define IIC_XPmSRC_SETR_MASK            0x00008000
#define IIC_XPmSRC_SETR_SHIFT           15




#endif /* _HAVE_TRICORE_IIC_SHAREMASKS_H_ */

