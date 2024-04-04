/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "IIC CD" of TriCore TC1130B (10 SFRs) */

#include <tc1130b/iic/addr.h>

#include <tc1130b/iic/masks.h>
#include <tc1130b/iic/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/iic/types.h>
#include <tc1130b/iic/sharetypes.h>

#ifndef _HAVE_TRICORE_IIC_H_
#define _HAVE_TRICORE_IIC_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (IIC_BUSCON, IIC_BUSCON_t, IIC_BUSCON_ADDR); /* "IIC BUS Control Register" */
SFR_NOABS (IIC_CLC, IIC_CLC_t, IIC_CLC_ADDR);     /* "IIC Clock Control Register" */
SFR_NOABS (IIC_ID, IIC_ID_t, IIC_ID_ADDR);        /* "IIC Module Identification Register" */
SFR_NOABS (IIC_PISEL, IIC_PISEL_t, IIC_PISEL_ADDR); /* "IIC Input Select Register" */
SFR_NOABS (IIC_RTB, IIC_RTB_t, IIC_RTB_ADDR);     /* "Reset Transmit Buffer" */
SFR_NOABS (IIC_SYSCON, IIC_SYSCON_t, IIC_SYSCON_ADDR); /* "System Control Register" */
SFR_NOABS (IIC_WHBSYSCON, IIC_WHBSYSCON_t, IIC_WHBSYSCON_ADDR); /* "IIC Write Hardware Modifiied System Control" */
SFR_NOABS (IIC_XP0SRC, IIC_XPmSRC_t, IIC_XP0SRC_ADDR); /* "IIC Service Request Control Register 0" */
SFR_NOABS (IIC_XP1SRC, IIC_XPmSRC_t, IIC_XP1SRC_ADDR); /* "IIC Service Request Control Register 1" */
SFR_NOABS (IIC_XP2SRC, IIC_XPmSRC_t, IIC_XP2SRC_ADDR); /* "IIC Service Request Control Register 2" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_IIC_H_ (block "IIC CD") */


