/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "SCU LL" of TriCore TC1766B (38 SFRs) */

#ifndef _HAVE_TRICORE_SCU_ADDRESSES_H_
#define _HAVE_TRICORE_SCU_ADDRESSES_H_

#define SCU_ID_ADDR           0xF0000008     /* "SCU Module Identification Register" */
#define SCU_SCLKFDR_ADDR      0xF000000C     /* "SCU System Clock Fractional Divider Register" */
#define RST_REQ_ADDR          0xF0000010     /* "Reset Request Register" */
#define RST_SR_ADDR           0xF0000014     /* "Reset Status Register" */
#define OSC_CON_ADDR          0xF0000018     /* "Oscillator Control Register" */
#define WDT_CON0_ADDR         0xF0000020     /* "Watchdog Timer Control Register 0" */
#define WDT_CON1_ADDR         0xF0000024     /* "Watchdog Timer Control Register 1" */
#define WDT_SR_ADDR           0xF0000028     /* "Watchdog Timer Status Register" */
#define NMISR_ADDR            0xF000002C     /* "NMI Status Register" */
#define PMG_CSR_ADDR          0xF0000034     /* "Power Management Control and Status Register" */
#define SCU_SCLIR_ADDR        0xF0000038     /* "SCU Software Configuration Latched Inputs Register" */
#define PLL_CLC_ADDR          0xF0000040     /* "PLL Clock Control Register" */
#define SCU_EMSR_ADDR         0xF0000044     /* "SCU Emergency Stop Register" */
#define SCU_TCCON_ADDR        0xF0000048     /* "SCU Temperature Compensation Control Register" */
#define SCU_CON_ADDR          0xF0000050     /* "SCU Control Register" */
#define SCU_STAT_ADDR         0xF0000054     /* "SCU Status Register" */
#define SCU_TCLR0_ADDR        0xF0000058     /* "SCU Temperature Compensation Level Register 0" */
#define PCP_PSCACTL_ADDR      0xF0000060     /* "PCP SRAM Control Array Control Register" */
#define PCP_PSCADIN_ADDR      0xF0000064     /* "PCP SRAM Control Array Data In Register" */
#define PCP_PSCADOUT_ADDR     0xF0000068     /* "PCP SRAM Control Array Data Out Register" */
#define MANID_ADDR            0xF0000070     /* "Manufacturer Identification Register" */
#define CHIPID_ADDR           0xF0000074     /* "Chip Identification Register" */
#define RTID_ADDR             0xF0000078     /* "Redesign Tracing Identification Register" */
#define EICR0_ADDR            0xF0000080     /* "External Input Channel Register 0" */
#define EICR1_ADDR            0xF0000084     /* "External Input Channel Register 1" */
#define EIFR_ADDR             0xF0000088     /* "External Input Flag Register" */
#define FMR_ADDR              0xF000008C     /* "SCU Flag Modification Register" */
#define PDRR_ADDR             0xF0000090     /* "Pattern Detection Result Register" */
#define IGCR0_ADDR            0xF0000094     /* "Interrupt Gating Register 0" */
#define IGCR1_ADDR            0xF0000098     /* "Interrupt Gating Register 1" */
#define TGADC0_ADDR           0xF000009C     /* "Trigger Gating ADC0 Register" */
#define SCU_OTCON_ADDR        0xF00000A8     /* "SCU On Chip Test Control Register" */
#define SCU_OTDAT_ADDR        0xF00000AC     /* "SCU On Chip Test Data Register" */
#define SCU_PTCON_ADDR        0xF00000B0     /* "SCU Pad Test Control Register" */
#define SCU_PTDAT0_ADDR       0xF00000B4     /* "SCU Pad Test Data Register 0" */
#define SCU_PETCR_ADDR        0xF00000D0     /* "SCU Parity Error Trap Control Register" */
#define SCU_PETSR_ADDR        0xF00000D4     /* "SCU Parity Error Trap Status Register" */
#define SCU_DMARS_ADDR        0xF00000D8     /* "DMA Request Select Register" */


#endif /* _HAVE_TRICORE_SCU_ADDRESSES_H_ (block "SCU LL") */


