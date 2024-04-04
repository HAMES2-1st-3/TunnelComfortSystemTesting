/* (c) HighTec EDV-Systeme GmbH */

/* block "SENT" of TriCore TC1791 (120 SFRs) */

#include <tc1791/sent/addr.h>

#include <tc1791/sent/masks.h>
#include <tc1791/sent/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1791/sent/types.h>
#include <tc1791/sent/sharetypes.h>

#ifndef _HAVE_TRICORE_SENT_H_
#define _HAVE_TRICORE_SENT_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (SENT_CFDR0, SENT_CFDRm_t, SENT_CFDR0_ADDR); /* "Channel Fractional Divider Register 0" */
SFR_NOABS (SENT_CFDR1, SENT_CFDRm_t, SENT_CFDR1_ADDR); /* "Channel Fractional Divider Register 1" */
SFR_NOABS (SENT_CFDR2, SENT_CFDRm_t, SENT_CFDR2_ADDR); /* "Channel Fractional Divider Register 2" */
SFR_NOABS (SENT_CFDR3, SENT_CFDRm_t, SENT_CFDR3_ADDR); /* "Channel Fractional Divider Register 3" */
SFR_NOABS (SENT_CFDR4, SENT_CFDRm_t, SENT_CFDR4_ADDR); /* "Channel Fractional Divider Register 4" */
SFR_NOABS (SENT_CFDR5, SENT_CFDRm_t, SENT_CFDR5_ADDR); /* "Channel Fractional Divider Register 5" */
SFR_NOABS (SENT_CFDR6, SENT_CFDRm_t, SENT_CFDR6_ADDR); /* "Channel Fractional Divider Register 6" */
SFR_NOABS (SENT_CFDR7, SENT_CFDRm_t, SENT_CFDR7_ADDR); /* "Channel Fractional Divider Register 7" */
SFR_NOABS (SENT_CLC, SENT_CLC_t, SENT_CLC_ADDR);  /* "SENT Clock Control Register" */
SFR_NOABS (SENT_CPDR0, SENT_CPDRm_t, SENT_CPDR0_ADDR); /* "Channel Pre Divider Register 0" */
SFR_NOABS (SENT_CPDR1, SENT_CPDRm_t, SENT_CPDR1_ADDR); /* "Channel Pre Divider Register 1" */
SFR_NOABS (SENT_CPDR2, SENT_CPDRm_t, SENT_CPDR2_ADDR); /* "Channel Pre Divider Register 2" */
SFR_NOABS (SENT_CPDR3, SENT_CPDRm_t, SENT_CPDR3_ADDR); /* "Channel Pre Divider Register 3" */
SFR_NOABS (SENT_CPDR4, SENT_CPDRm_t, SENT_CPDR4_ADDR); /* "Channel Pre Divider Register 4" */
SFR_NOABS (SENT_CPDR5, SENT_CPDRm_t, SENT_CPDR5_ADDR); /* "Channel Pre Divider Register 5" */
SFR_NOABS (SENT_CPDR6, SENT_CPDRm_t, SENT_CPDR6_ADDR); /* "Channel Pre Divider Register 6" */
SFR_NOABS (SENT_CPDR7, SENT_CPDRm_t, SENT_CPDR7_ADDR); /* "Channel Pre Divider Register 7" */
SFR_NOABS (SENT_FDR, SENT_FDR_t, SENT_FDR_ADDR);  /* "SENT Fractional Divider Register" */
SFR_NOABS (SENT_ID, SENT_ID_t, SENT_ID_ADDR);     /* "Module Identification Register" */
SFR_NOABS (SENT_INP0, SENT_INPm_t, SENT_INP0_ADDR); /* "Interrupt Node Pointer Register 0" */
SFR_NOABS (SENT_INP1, SENT_INPm_t, SENT_INP1_ADDR); /* "Interrupt Node Pointer Register 1" */
SFR_NOABS (SENT_INP2, SENT_INPm_t, SENT_INP2_ADDR); /* "Interrupt Node Pointer Register 2" */
SFR_NOABS (SENT_INP3, SENT_INPm_t, SENT_INP3_ADDR); /* "Interrupt Node Pointer Register 3" */
SFR_NOABS (SENT_INP4, SENT_INPm_t, SENT_INP4_ADDR); /* "Interrupt Node Pointer Register 4" */
SFR_NOABS (SENT_INP5, SENT_INPm_t, SENT_INP5_ADDR); /* "Interrupt Node Pointer Register 5" */
SFR_NOABS (SENT_INP6, SENT_INPm_t, SENT_INP6_ADDR); /* "Interrupt Node Pointer Register 6" */
SFR_NOABS (SENT_INP7, SENT_INPm_t, SENT_INP7_ADDR); /* "Interrupt Node Pointer Register 7" */
SFR_NOABS (SENT_INTCLR0, SENT_INTCLRm_t, SENT_INTCLR0_ADDR); /* "Interrupt Clear Register 0" */
SFR_NOABS (SENT_INTCLR1, SENT_INTCLRm_t, SENT_INTCLR1_ADDR); /* "Interrupt Clear Register 1" */
SFR_NOABS (SENT_INTCLR2, SENT_INTCLRm_t, SENT_INTCLR2_ADDR); /* "Interrupt Clear Register 2" */
SFR_NOABS (SENT_INTCLR3, SENT_INTCLRm_t, SENT_INTCLR3_ADDR); /* "Interrupt Clear Register 3" */
SFR_NOABS (SENT_INTCLR4, SENT_INTCLRm_t, SENT_INTCLR4_ADDR); /* "Interrupt Clear Register 4" */
SFR_NOABS (SENT_INTCLR5, SENT_INTCLRm_t, SENT_INTCLR5_ADDR); /* "Interrupt Clear Register 5" */
SFR_NOABS (SENT_INTCLR6, SENT_INTCLRm_t, SENT_INTCLR6_ADDR); /* "Interrupt Clear Register 6" */
SFR_NOABS (SENT_INTCLR7, SENT_INTCLRm_t, SENT_INTCLR7_ADDR); /* "Interrupt Clear Register 7" */
SFR_NOABS (SENT_INTEN0, SENT_INTENm_t, SENT_INTEN0_ADDR); /* "Interrupt Enable Register 0" */
SFR_NOABS (SENT_INTEN1, SENT_INTENm_t, SENT_INTEN1_ADDR); /* "Interrupt Enable Register 1" */
SFR_NOABS (SENT_INTEN2, SENT_INTENm_t, SENT_INTEN2_ADDR); /* "Interrupt Enable Register 2" */
SFR_NOABS (SENT_INTEN3, SENT_INTENm_t, SENT_INTEN3_ADDR); /* "Interrupt Enable Register 3" */
SFR_NOABS (SENT_INTEN4, SENT_INTENm_t, SENT_INTEN4_ADDR); /* "Interrupt Enable Register 4" */
SFR_NOABS (SENT_INTEN5, SENT_INTENm_t, SENT_INTEN5_ADDR); /* "Interrupt Enable Register 5" */
SFR_NOABS (SENT_INTEN6, SENT_INTENm_t, SENT_INTEN6_ADDR); /* "Interrupt Enable Register 6" */
SFR_NOABS (SENT_INTEN7, SENT_INTENm_t, SENT_INTEN7_ADDR); /* "Interrupt Enable Register 7" */
SFR_NOABS (SENT_INTOV, SENT_INTOV_t, SENT_INTOV_ADDR); /* "Interrupt Overview Register" */
SFR_NOABS (SENT_INTSET0, SENT_INTSETm_t, SENT_INTSET0_ADDR); /* "Interrupt Set Register 0" */
SFR_NOABS (SENT_INTSET1, SENT_INTSETm_t, SENT_INTSET1_ADDR); /* "Interrupt Set Register 1" */
SFR_NOABS (SENT_INTSET2, SENT_INTSETm_t, SENT_INTSET2_ADDR); /* "Interrupt Set Register 2" */
SFR_NOABS (SENT_INTSET3, SENT_INTSETm_t, SENT_INTSET3_ADDR); /* "Interrupt Set Register 3" */
SFR_NOABS (SENT_INTSET4, SENT_INTSETm_t, SENT_INTSET4_ADDR); /* "Interrupt Set Register 4" */
SFR_NOABS (SENT_INTSET5, SENT_INTSETm_t, SENT_INTSET5_ADDR); /* "Interrupt Set Register 5" */
SFR_NOABS (SENT_INTSET6, SENT_INTSETm_t, SENT_INTSET6_ADDR); /* "Interrupt Set Register 6" */
SFR_NOABS (SENT_INTSET7, SENT_INTSETm_t, SENT_INTSET7_ADDR); /* "Interrupt Set Register 7" */
SFR_NOABS (SENT_INTSTAT0, SENT_INTSTATm_t, SENT_INTSTAT0_ADDR); /* "Interrupt Status Register 0" */
SFR_NOABS (SENT_INTSTAT1, SENT_INTSTATm_t, SENT_INTSTAT1_ADDR); /* "Interrupt Status Register 1" */
SFR_NOABS (SENT_INTSTAT2, SENT_INTSTATm_t, SENT_INTSTAT2_ADDR); /* "Interrupt Status Register 2" */
SFR_NOABS (SENT_INTSTAT3, SENT_INTSTATm_t, SENT_INTSTAT3_ADDR); /* "Interrupt Status Register 3" */
SFR_NOABS (SENT_INTSTAT4, SENT_INTSTATm_t, SENT_INTSTAT4_ADDR); /* "Interrupt Status Register 4" */
SFR_NOABS (SENT_INTSTAT5, SENT_INTSTATm_t, SENT_INTSTAT5_ADDR); /* "Interrupt Status Register 5" */
SFR_NOABS (SENT_INTSTAT6, SENT_INTSTATm_t, SENT_INTSTAT6_ADDR); /* "Interrupt Status Register 6" */
SFR_NOABS (SENT_INTSTAT7, SENT_INTSTATm_t, SENT_INTSTAT7_ADDR); /* "Interrupt Status Register 7" */
SFR_NOABS (SENT_IOCR0, SENT_IOCRm_t, SENT_IOCR0_ADDR); /* "Input and Output Control Register 0" */
SFR_NOABS (SENT_IOCR1, SENT_IOCRm_t, SENT_IOCR1_ADDR); /* "Input and Output Control Register 1" */
SFR_NOABS (SENT_IOCR2, SENT_IOCRm_t, SENT_IOCR2_ADDR); /* "Input and Output Control Register 2" */
SFR_NOABS (SENT_IOCR3, SENT_IOCRm_t, SENT_IOCR3_ADDR); /* "Input and Output Control Register 3" */
SFR_NOABS (SENT_IOCR4, SENT_IOCRm_t, SENT_IOCR4_ADDR); /* "Input and Output Control Register 4" */
SFR_NOABS (SENT_IOCR5, SENT_IOCRm_t, SENT_IOCR5_ADDR); /* "Input and Output Control Register 5" */
SFR_NOABS (SENT_IOCR6, SENT_IOCRm_t, SENT_IOCR6_ADDR); /* "Input and Output Control Register 6" */
SFR_NOABS (SENT_IOCR7, SENT_IOCRm_t, SENT_IOCR7_ADDR); /* "Input and Output Control Register 7" */
SFR_NOABS (SENT_RCR0, SENT_RCRm_t, SENT_RCR0_ADDR); /* "Receiver Control Register 0" */
SFR_NOABS (SENT_RCR1, SENT_RCRm_t, SENT_RCR1_ADDR); /* "Receiver Control Register 1" */
SFR_NOABS (SENT_RCR2, SENT_RCRm_t, SENT_RCR2_ADDR); /* "Receiver Control Register 2" */
SFR_NOABS (SENT_RCR3, SENT_RCRm_t, SENT_RCR3_ADDR); /* "Receiver Control Register 3" */
SFR_NOABS (SENT_RCR4, SENT_RCRm_t, SENT_RCR4_ADDR); /* "Receiver Control Register 4" */
SFR_NOABS (SENT_RCR5, SENT_RCRm_t, SENT_RCR5_ADDR); /* "Receiver Control Register 5" */
SFR_NOABS (SENT_RCR6, SENT_RCRm_t, SENT_RCR6_ADDR); /* "Receiver Control Register 6" */
SFR_NOABS (SENT_RCR7, SENT_RCRm_t, SENT_RCR7_ADDR); /* "Receiver Control Register 7" */
SFR_NOABS (SENT_RDR0, SENT_RDRm_t, SENT_RDR0_ADDR); /* "Receive Data Register 0" */
SFR_NOABS (SENT_RDR1, SENT_RDRm_t, SENT_RDR1_ADDR); /* "Receive Data Register 1" */
SFR_NOABS (SENT_RDR2, SENT_RDRm_t, SENT_RDR2_ADDR); /* "Receive Data Register 2" */
SFR_NOABS (SENT_RDR3, SENT_RDRm_t, SENT_RDR3_ADDR); /* "Receive Data Register 3" */
SFR_NOABS (SENT_RDR4, SENT_RDRm_t, SENT_RDR4_ADDR); /* "Receive Data Register 4" */
SFR_NOABS (SENT_RDR5, SENT_RDRm_t, SENT_RDR5_ADDR); /* "Receive Data Register 5" */
SFR_NOABS (SENT_RDR6, SENT_RDRm_t, SENT_RDR6_ADDR); /* "Receive Data Register 6" */
SFR_NOABS (SENT_RDR7, SENT_RDRm_t, SENT_RDR7_ADDR); /* "Receive Data Register 7" */
SFR_NOABS (SENT_RSR0, SENT_RSRm_t, SENT_RSR0_ADDR); /* "Receive Status Register 0" */
SFR_NOABS (SENT_RSR1, SENT_RSRm_t, SENT_RSR1_ADDR); /* "Receive Status Register 1" */
SFR_NOABS (SENT_RSR2, SENT_RSRm_t, SENT_RSR2_ADDR); /* "Receive Status Register 2" */
SFR_NOABS (SENT_RSR3, SENT_RSRm_t, SENT_RSR3_ADDR); /* "Receive Status Register 3" */
SFR_NOABS (SENT_RSR4, SENT_RSRm_t, SENT_RSR4_ADDR); /* "Receive Status Register 4" */
SFR_NOABS (SENT_RSR5, SENT_RSRm_t, SENT_RSR5_ADDR); /* "Receive Status Register 5" */
SFR_NOABS (SENT_RSR6, SENT_RSRm_t, SENT_RSR6_ADDR); /* "Receive Status Register 6" */
SFR_NOABS (SENT_RSR7, SENT_RSRm_t, SENT_RSR7_ADDR); /* "Receive Status Register 7" */
SFR_NOABS (SENT_SCR0, SENT_SCRm_t, SENT_SCR0_ADDR); /* "SPC Control Register 0" */
SFR_NOABS (SENT_SCR1, SENT_SCRm_t, SENT_SCR1_ADDR); /* "SPC Control Register 1" */
SFR_NOABS (SENT_SCR2, SENT_SCRm_t, SENT_SCR2_ADDR); /* "SPC Control Register 2" */
SFR_NOABS (SENT_SCR3, SENT_SCRm_t, SENT_SCR3_ADDR); /* "SPC Control Register 3" */
SFR_NOABS (SENT_SCR4, SENT_SCRm_t, SENT_SCR4_ADDR); /* "SPC Control Register 4" */
SFR_NOABS (SENT_SCR5, SENT_SCRm_t, SENT_SCR5_ADDR); /* "SPC Control Register 5" */
SFR_NOABS (SENT_SCR6, SENT_SCRm_t, SENT_SCR6_ADDR); /* "SPC Control Register 6" */
SFR_NOABS (SENT_SCR7, SENT_SCRm_t, SENT_SCR7_ADDR); /* "SPC Control Register 7" */
SFR_NOABS (SENT_SDS0, SENT_SDSm_t, SENT_SDS0_ADDR); /* "Serial Data and Status Register 0" */
SFR_NOABS (SENT_SDS1, SENT_SDSm_t, SENT_SDS1_ADDR); /* "Serial Data and Status Register 1" */
SFR_NOABS (SENT_SDS2, SENT_SDSm_t, SENT_SDS2_ADDR); /* "Serial Data and Status Register 2" */
SFR_NOABS (SENT_SDS3, SENT_SDSm_t, SENT_SDS3_ADDR); /* "Serial Data and Status Register 3" */
SFR_NOABS (SENT_SDS4, SENT_SDSm_t, SENT_SDS4_ADDR); /* "Serial Data and Status Register 4" */
SFR_NOABS (SENT_SDS5, SENT_SDSm_t, SENT_SDS5_ADDR); /* "Serial Data and Status Register 5" */
SFR_NOABS (SENT_SDS6, SENT_SDSm_t, SENT_SDS6_ADDR); /* "Serial Data and Status Register 6" */
SFR_NOABS (SENT_SDS7, SENT_SDSm_t, SENT_SDS7_ADDR); /* "Serial Data and Status Register 7" */
SFR_NOABS (SENT_SRC0, SENT_SRCm_t, SENT_SRC0_ADDR); /* "Service Request Control 0 Register" */
SFR_NOABS (SENT_SRC1, SENT_SRCm_t, SENT_SRC1_ADDR); /* "Service Request Control 1 Register" */
SFR_NOABS (SENT_SRC2, SENT_SRCm_t, SENT_SRC2_ADDR); /* "Service Request Control 2 Register" */
SFR_NOABS (SENT_SRC3, SENT_SRCm_t, SENT_SRC3_ADDR); /* "Service Request Control 3 Register" */
SFR_NOABS (SENT_VIEW0, SENT_VIEWm_t, SENT_VIEW0_ADDR); /* "Receive Data View Register 0" */
SFR_NOABS (SENT_VIEW1, SENT_VIEWm_t, SENT_VIEW1_ADDR); /* "Receive Data View Register 1" */
SFR_NOABS (SENT_VIEW2, SENT_VIEWm_t, SENT_VIEW2_ADDR); /* "Receive Data View Register 2" */
SFR_NOABS (SENT_VIEW3, SENT_VIEWm_t, SENT_VIEW3_ADDR); /* "Receive Data View Register 3" */
SFR_NOABS (SENT_VIEW4, SENT_VIEWm_t, SENT_VIEW4_ADDR); /* "Receive Data View Register 4" */
SFR_NOABS (SENT_VIEW5, SENT_VIEWm_t, SENT_VIEW5_ADDR); /* "Receive Data View Register 5" */
SFR_NOABS (SENT_VIEW6, SENT_VIEWm_t, SENT_VIEW6_ADDR); /* "Receive Data View Register 6" */
SFR_NOABS (SENT_VIEW7, SENT_VIEWm_t, SENT_VIEW7_ADDR); /* "Receive Data View Register 7" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_SENT_H_ (block "SENT") */


