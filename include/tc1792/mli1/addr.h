/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MLI1" of TriCore TC1792 (46 SFRs) */

#ifndef _HAVE_TRICORE_MLI1_ADDRESSES_H_
#define _HAVE_TRICORE_MLI1_ADDRESSES_H_

#define MLI1_ID_ADDR          0xF010C108     /* "MLI1 Module Identification Register" */
#define MLI1_FDR_ADDR         0xF010C10C     /* "MLI1 Fractional Divider Register" */
#define MLI1_TCR_ADDR         0xF010C110     /* "MLI1 Transmitter Control Register" */
#define MLI1_TSTATR_ADDR      0xF010C114     /* "MLI1 Transmitter Status Register" */
#define MLI1_TP0STATR_ADDR    0xF010C118     /* "MLI1 Transmitter Pipe 0 Status Register" */
#define MLI1_TP1STATR_ADDR    0xF010C11C     /* "MLI1 Transmitter Pipe 1 Status Register" */
#define MLI1_TP2STATR_ADDR    0xF010C120     /* "MLI1 Transmitter Pipe 2 Status Register" */
#define MLI1_TP3STATR_ADDR    0xF010C124     /* "MLI1 Transmitter Pipe 3 Status Register" */
#define MLI1_TCMDR_ADDR       0xF010C128     /* "MLI1 Transmitter Command Register" */
#define MLI1_TRSTATR_ADDR     0xF010C12C     /* "MLI1 Transmitter Registers Status Register" */
#define MLI1_TP0AOFR_ADDR     0xF010C130     /* "MLI1 Transmitter Pipe 0 Address Offset Register" */
#define MLI1_TP1AOFR_ADDR     0xF010C134     /* "MLI1 Transmitter Pipe 1 Address Offset Register" */
#define MLI1_TP2AOFR_ADDR     0xF010C138     /* "MLI1 Transmitter Pipe 2 Address Offset Register" */
#define MLI1_TP3AOFR_ADDR     0xF010C13C     /* "MLI1 Transmitter Pipe 3 Address Offset Register" */
#define MLI1_TP0DATAR_ADDR    0xF010C140     /* "MLI1 Transmitter Pipe 0 Data Register" */
#define MLI1_TP1DATAR_ADDR    0xF010C144     /* "MLI1 Transmitter Pipe 1 Data Register" */
#define MLI1_TP2DATAR_ADDR    0xF010C148     /* "MLI1 Transmitter Pipe 2 Data Register" */
#define MLI1_TP3DATAR_ADDR    0xF010C14C     /* "MLI1 Transmitter Pipe 3 Data Register" */
#define MLI1_TDRAR_ADDR       0xF010C150     /* "MLI1 Transmitter Data Read Answer Register" */
#define MLI1_TP0BAR_ADDR      0xF010C154     /* "MLI1 Transmitter Pipe 0 Base Address Register" */
#define MLI1_TP1BAR_ADDR      0xF010C158     /* "MLI1 Transmitter Pipe 1 Base Address Register" */
#define MLI1_TP2BAR_ADDR      0xF010C15C     /* "MLI1 Transmitter Pipe 2 Base Address Register" */
#define MLI1_TP3BAR_ADDR      0xF010C160     /* "MLI1 Transmitter Pipe 3 Base Address Register" */
#define MLI1_TCBAR_ADDR       0xF010C164     /* "MLI1 Transmitter Copy Base Address Register" */
#define MLI1_RCR_ADDR         0xF010C168     /* "MLI1 Receiver Control Register" */
#define MLI1_RP0BAR_ADDR      0xF010C16C     /* "MLI1 Receiver Pipe 0 Base Address Register" */
#define MLI1_RP1BAR_ADDR      0xF010C170     /* "MLI1 Receiver Pipe 1 Base Address Register" */
#define MLI1_RP2BAR_ADDR      0xF010C174     /* "MLI1 Receiver Pipe 2 Base Address Register" */
#define MLI1_RP3BAR_ADDR      0xF010C178     /* "MLI1 Receiver Pipe 3 Base Address Register" */
#define MLI1_RP0STATR_ADDR    0xF010C17C     /* "MLI1 Receiver Pipe 0 Status Register" */
#define MLI1_RP1STATR_ADDR    0xF010C180     /* "MLI1 Receiver Pipe 1 Status Register" */
#define MLI1_RP2STATR_ADDR    0xF010C184     /* "MLI1 Receiver Pipe 2 Status Register" */
#define MLI1_RP3STATR_ADDR    0xF010C188     /* "MLI1 Receiver Pipe 3 Status Register" */
#define MLI1_RADRR_ADDR       0xF010C18C     /* "MLI1 Receiver Address Register" */
#define MLI1_RDATAR_ADDR      0xF010C190     /* "MLI1 Receiver Data Register" */
#define MLI1_SCR_ADDR         0xF010C194     /* "MLI1 Set Clear Register" */
#define MLI1_TIER_ADDR        0xF010C198     /* "MLI1 Transmitter Interrupt Enable Register" */
#define MLI1_TISR_ADDR        0xF010C19C     /* "MLI1 Transmitter Interrupt Status Register" */
#define MLI1_TINPR_ADDR       0xF010C1A0     /* "MLI1 Transmitter Interrupt Node Pointer Register" */
#define MLI1_RIER_ADDR        0xF010C1A4     /* "MLI1 Receiver Interrupt Enable Register" */
#define MLI1_RISR_ADDR        0xF010C1A8     /* "MLI1 Receiver Interrupt Status Register" */
#define MLI1_RINPR_ADDR       0xF010C1AC     /* "MLI1 Receiver Interrupt Node Pointer Register" */
#define MLI1_GINTR_ADDR       0xF010C1B0     /* "MLI1 Global Interrupt Set Register" */
#define MLI1_OICR_ADDR        0xF010C1B4     /* "MLI1 Output Input Control Register" */
#define MLI1_AER_ADDR         0xF010C1B8     /* "MLI1 Access Enable Register" */
#define MLI1_ARR_ADDR         0xF010C1BC     /* "MLI1 Access Range Register" */


#endif /* _HAVE_TRICORE_MLI1_ADDRESSES_H_ (block "MLI1") */


