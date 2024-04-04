/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "SCU_CD" of TriCore TC1130B (44 SFRs) */

#ifndef _HAVE_TRICORE_SCU_ADDRESSES_H_
#define _HAVE_TRICORE_SCU_ADDRESSES_H_

#define SCU_ID_ADDR           0xF0000008     /* "SCU Module Identification Register" */
#define RST_REQ_ADDR          0xF0000010     /* "Reset Request Register" */
#define RST_SR_ADDR           0xF0000014     /* "Reset Status Register" */
#define OSC_CON_ADDR          0xF0000018     /* "Oscillator Control Register" */
#define WDT_CON0_ADDR         0xF0000020     /* "Watchdog Timer Control Register 0" */
#define WDT_CON1_ADDR         0xF0000024     /* "Watchdog Timer Control Register 1" */
#define WDT_SR_ADDR           0xF0000028     /* "Watchdog Timer Status Register" */
#define NMISR_ADDR            0xF000002C     /* "NMI Status Register" */
#define PMG_CON_ADDR          0xF0000030     /* "Power Management Control Register" */
#define PMG_CSR_ADDR          0xF0000034     /* "Power Management Control and Status Register" */
#define SCU_SCLIR_ADDR        0xF0000038     /* "SCU Software Configuration Latched Inputs Register" */
#define PLL_CLC_ADDR          0xF0000040     /* "PLL Clock Control Register" */
#define SCU_CON_ADDR          0xF0000050     /* "SCU Control Register" */
#define SCU_STAT_ADDR         0xF0000054     /* "SCU Status Register" */
#define FSR_ADDR              0xF0000060     /* "Fusebox Selector Register" */
#define FDR_ADDR              0xF0000064     /* "SCU Fusebox Data Register" */
#define SCU_PETCR_ADDR        0xF0000068     /* "SCU Parity Error Trap Control Register" */
#define SCU_PETSR_ADDR        0xF000006C     /* "SCU Parity Error Trap Status Register" */
#define MANID_ADDR            0xF0000070     /* "Manufacturer Identification Register" */
#define CHIPID_ADDR           0xF0000074     /* "Chip Identification Register" */
#define RTID_ADDR             0xF0000078     /* "Redesign Tracing Identification Register" */
#define MACTX0SRC_ADDR        0xF000007C     /* "MAC Transmit Interrupt Service Request Control Register" */
#define MACRX0SRC_ADDR        0xF0000080     /* "MAC Receive Interrupt Service Request Control Register 0" */
#define MACTX1SRC_ADDR        0xF0000084     /* "MAC Transmit Interrupt Service Request Control Register 1" */
#define MACRX1SRC_ADDR        0xF0000088     /* "MAC Receive Interrupt Service Request Control Register 1" */
#define RBSRC0_ADDR           0xF000008C     /* "RB Service Request Control 0 Register" */
#define RBSRC1_ADDR           0xF0000090     /* "RB Service Request Control 1 Register" */
#define TBSRC_ADDR            0xF0000094     /* "TB Service Request Control Register" */
#define DRSRC_ADDR            0xF0000098     /* "DR Service Request Control Register" */
#define DTSRC_ADDR            0xF000009C     /* "DT Service Request Control Register" */
#define FPU_SRC_ADDR          0xF00000A0     /* "FPU Service Request Control Register" */
#define SCU_OTCON_ADDR        0xF00000A8     /* "SCU On Chip Test Control Register" */
#define SCU_OTDAT_ADDR        0xF00000AC     /* "SCU On Chip Test Data Register" */
#define EICR0_ADDR            0xF00000B0     /* "External Input Channel Register 0" */
#define EICR1_ADDR            0xF00000B4     /* "External Input Channel Register 1" */
#define EIFR_ADDR             0xF00000B8     /* "External Input Flag Register" */
#define FMR_ADDR              0xF00000BC     /* "SCU Flag Modification Register" */
#define IGCR0_ADDR            0xF00000C0     /* "Interrupt Gating Register 0" */
#define IGCR1_ADDR            0xF00000C4     /* "Interrupt Gating Register 1" */
#define EINT_SRC3_ADDR        0xF00000C8     /* "Service Request Control Reg. for Ext. Interrupt 3" */
#define EINT_SRC2_ADDR        0xF00000D0     /* "Service Request Control Reg. for Ext. Interrupt 2" */
#define EINT_SRC1_ADDR        0xF00000D4     /* "Service Request Control Reg. for Ext. Interrupt 1" */
#define EINT_SRC0_ADDR        0xF00000D8     /* "Service Request Control Reg. for Ext. Interrupt 0" */
#define SCU_DMARS_ADDR        0xF00000DC     /* "DMA Request Select Register" */


#endif /* _HAVE_TRICORE_SCU_ADDRESSES_H_ (block "SCU_CD") */


