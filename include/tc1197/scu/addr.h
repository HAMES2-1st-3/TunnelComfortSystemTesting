/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "SCU" of TriCore TC1197 (54 SFRs) */

#ifndef _HAVE_TRICORE_SCU_ADDRESSES_H_
#define _HAVE_TRICORE_SCU_ADDRESSES_H_

#define SCU_ID_ADDR           0xF0000508     /* "Identification Register" */
#define SCU_OSCCON_ADDR       0xF0000510     /* "OSC Control Register" */
#define SCU_PLLSTAT_ADDR      0xF0000514     /* "PLL Status Register" */
#define SCU_PLLCON0_ADDR      0xF0000518     /* "PLL Configuration 0 Register" */
#define SCU_PLLCON1_ADDR      0xF000051C     /* "PLL Configuration 1 Register" */
#define SCU_PLLERAYCTR_ADDR   0xF0000520     /* "PLL_ERAY Control and Status Register" */
#define SCU_CCUCON0_ADDR      0xF0000530     /* "CCU Clock Control Register 0" */
#define SCU_CCUCON1_ADDR      0xF0000534     /* "CCU Clock Control Register 1" */
#define SCU_FDR_ADDR          0xF0000538     /* "Fractional Divider Register" */
#define SCU_EXTCON_ADDR       0xF000053C     /* "External Clock Control Register" */
#define SCU_SYSCON_ADDR       0xF0000540     /* "System Control Register" */
#define SCU_RSTSTAT_ADDR      0xF0000550     /* "Reset Status Register" */
#define SCU_RSTCNTCON_ADDR    0xF0000554     /* "Reset Counter Control Register" */
#define SCU_RSTCON_ADDR       0xF0000558     /* "Reset Configuration Register" */
#define SCU_ARSTDIS_ADDR      0xF000055C     /* "Application Reset Disable Register" */
#define SCU_SWRSTCON_ADDR     0xF0000560     /* "Software Reset Configuration Register" */
#define SCU_ESRCFG0_ADDR      0xF0000570     /* "ESR0 Configuration Register" */
#define SCU_ESRCFG1_ADDR      0xF0000574     /* "ESR1 Configuration Register" */
#define SCU_ESRCFG2_ADDR      0xF0000578     /* "ESR2 Configuration Register" */
#define SCU_EICR0_ADDR        0xF0000580     /* "External Input Channel Register 0" */
#define SCU_EICR1_ADDR        0xF0000584     /* "External Input Channel Register 1" */
#define SCU_EIFR_ADDR         0xF0000588     /* "External Input Flag Register" */
#define SCU_FMR_ADDR          0xF000058C     /* "Flag Modification Register" */
#define SCU_PDRR_ADDR         0xF0000590     /* "Pattern Detection Result Register" */
#define SCU_IGCR0_ADDR        0xF0000594     /* "Interrupt Gating Register 0" */
#define SCU_IGCR1_ADDR        0xF0000598     /* "Interrupt Gating Register 1" */
#define SCU_IOCR_ADDR         0xF00005A0     /* "Input/Output Control Register" */
#define SCU_OUT_ADDR          0xF00005A4     /* "Output Register" */
#define SCU_OMR_ADDR          0xF00005A8     /* "Output Modification Register" */
#define SCU_IN_ADDR           0xF00005AC     /* "Input Register" */
#define SCU_PMCSR_ADDR        0xF00005B0     /* "Power Management Control and Status Register" */
#define SCU_STSTAT_ADDR       0xF00005C0     /* "Start-up Status Register" */
#define SCU_STCON_ADDR        0xF00005C4     /* "Start-up Configuration Register" */
#define SCU_PETSR_ADDR        0xF00005D4     /* "Parity Error Trap Status Register" */
#define SCU_DTSSTAT_ADDR      0xF00005E0     /* "Die Temperature Sensor Status Register" */
#define WDT_CON0_ADDR         0xF00005F0     /* "WDT Control Register 0" */
#define WDT_CON1_ADDR         0xF00005F4     /* "WDT Control Register 1" */
#define WDT_SR_ADDR           0xF00005F8     /* "WDT Status Register" */
#define SCU_EMSR_ADDR         0xF0000600     /* "Emergency Stop Register" */
#define SCU_INTSTAT_ADDR      0xF0000610     /* "Interrupt Status Register" */
#define SCU_INTSET_ADDR       0xF0000614     /* "Interrupt Set Register" */
#define SCU_INTCLR_ADDR       0xF0000618     /* "Interrupt Clear Register" */
#define SCU_INTDIS_ADDR       0xF000061C     /* "Interrupt Disable Register" */
#define SCU_INTNP_ADDR        0xF0000620     /* "Interrupt Node Pointer Register" */
#define SCU_TRAPSTAT_ADDR     0xF0000624     /* "Trap Status Register" */
#define SCU_TRAPSET_ADDR      0xF0000628     /* "Trap Set Register" */
#define SCU_TRAPCLR_ADDR      0xF000062C     /* "Trap Clear Register" */
#define SCU_TRAPDIS_ADDR      0xF0000630     /* "Trap Disable Register" */
#define SCU_CHIPID_ADDR       0xF0000640     /* "Chip Identification Register" */
#define SCU_MANID_ADDR        0xF0000644     /* "Manufacturer Identification Register" */
#define SCU_SRC3_ADDR         0xF00006F0     /* "Service Request Control 3 Register" */
#define SCU_SRC2_ADDR         0xF00006F4     /* "Service Request Control 2 Register" */
#define SCU_SRC1_ADDR         0xF00006F8     /* "Service Request Control 1 Register" */
#define SCU_SRC0_ADDR         0xF00006FC     /* "Service Request Control 0 Register" */


#endif /* _HAVE_TRICORE_SCU_ADDRESSES_H_ (block "SCU") */


