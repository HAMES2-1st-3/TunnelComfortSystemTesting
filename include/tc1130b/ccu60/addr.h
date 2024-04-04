/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "CCU60" of TriCore TC1130B (39 SFRs) */

#ifndef _HAVE_TRICORE_CCU60_ADDRESSES_H_
#define _HAVE_TRICORE_CCU60_ADDRESSES_H_

#define CCU60_CLC_ADDR        0xF0002000     /* "CCU60 Clock Control Register" */
#define CCU60_ID_ADDR         0xF0002008     /* "Module Identification Register" */
#define CCU60_FDR_ADDR        0xF000200C     /* "CCU60 Fractional Divider Register" */
#define CCU60_PISEL0_ADDR     0xF0002010     /* "Port Input Select Register 0" */
#define CCU60_PISEL2_ADDR     0xF0002014     /* "Port Input Select Register 2" */
#define CCU60_T12_ADDR        0xF0002020     /* "Timer T12 Counter Register" */
#define CCU60_T12PR_ADDR      0xF0002024     /* "Timer T12 period register" */
#define CCU60_T12DTC_ADDR     0xF0002028     /* "Dead-Time Control Register for Timer12" */
#define CCU60_CC60R_ADDR      0xF0002030     /* "Capture/Compare Register for Channel CC60" */
#define CCU60_CC61R_ADDR      0xF0002034     /* "Capture/Compare Register for Channel CC61" */
#define CCU60_CC62R_ADDR      0xF0002038     /* "Capture/Compare Register for Channel CC62" */
#define CCU60_TCTR4_ADDR      0xF000203C     /* "Timer Control Register 4" */
#define CCU60_CC60SR_ADDR     0xF0002040     /* "Capture/Compare Shadow Register for Channel CC60" */
#define CCU60_CC61SR_ADDR     0xF0002044     /* "Capture/Compare Shadow Register for Channel CC61" */
#define CCU60_CC62SR_ADDR     0xF0002048     /* "Capture/Compare Shadow Register for Channel CC62" */
#define CCU60_T13_ADDR        0xF0002050     /* "Timer T13 Register" */
#define CCU60_T13PR_ADDR      0xF0002054     /* "Timer T13 Period Register" */
#define CCU60_CC63R_ADDR      0xF0002058     /* "Compare Register for Channel CC63" */
#define CCU60_CC63SR_ADDR     0xF000205C     /* "Compare Shadow Register for Channel  CC63" */
#define CCU60_CMPSTAT_ADDR    0xF0002060     /* "Compare Status Register" */
#define CCU60_CMPMODIF_ADDR   0xF0002064     /* "Compare State Modification Register" */
#define CCU60_TCTR0_ADDR      0xF0002068     /* "Timer Control Register 0" */
#define CCU60_TCTR2_ADDR      0xF000206C     /* "Timer Control Register 2" */
#define CCU60_MODCTR_ADDR     0xF0002070     /* "Modulation Control Register" */
#define CCU60_TRPCTR_ADDR     0xF0002074     /* "Trap Control Register" */
#define CCU60_PSLR_ADDR       0xF0002078     /* "Passive State Level Register" */
#define CCU60_T12MSEL_ADDR    0xF000207C     /* "T12 Capture/Compare Mode Select Register" */
#define CCU60_MCMOUTS_ADDR    0xF0002080     /* "Multi-Channel Mode Output Shadow Register" */
#define CCU60_MCMOUT_ADDR     0xF0002084     /* "Multi-Channel Mode Output Register" */
#define CCU60_MCMCTR_ADDR     0xF0002088     /* "Multi-Channel Mode Control Register" */
#define CCU60_IS_ADDR         0xF0002090     /* "Capture/Compare Interrupt Status Register" */
#define CCU60_ISS_ADDR        0xF0002094     /* "Capture/Compare Interrupt Status Set Register" */
#define CCU60_ISR_ADDR        0xF0002098     /* "Capture/Compare Interrupt Status Reset Register" */
#define CCU60_IEN_ADDR        0xF000209C     /* "Capture/Compare Interrupt Enable Register" */
#define CCU60_INP_ADDR        0xF00020A0     /* "Capture/Compare Interrupt Node Pointer Register" */
#define CCU60_SRC3_ADDR       0xF00020F0     /* "CCU60 Service Request Control Register 3" */
#define CCU60_SRC2_ADDR       0xF00020F4     /* "CCU60 Service Request Control Register 2" */
#define CCU60_SRC1_ADDR       0xF00020F8     /* "CCU60 Service Request Control Register 1" */
#define CCU60_SRC0_ADDR       0xF00020FC     /* "CCU60 Service Request Control Register 0" */


#endif /* _HAVE_TRICORE_CCU60_ADDRESSES_H_ (block "CCU60") */


