/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_FADC_MASKS_H_
#define _HAVE_TRICORE_FADC_MASKS_H_


/****************** Masks for FADC_ALR_t **********************/
/*
   FADC_ALR              "Alias Register"
*/
/**********************************************************/

#define FADC_ALR_MASK                   0x000000ff
#define FADC_ALR_ALIAS0_MASK            0x00000003
#define FADC_ALR_ALIAS0_SHIFT           0
#define FADC_ALR_ALIAS1_MASK            0x0000000c
#define FADC_ALR_ALIAS1_SHIFT           2
#define FADC_ALR_ALIAS2_MASK            0x00000030
#define FADC_ALR_ALIAS2_SHIFT           4
#define FADC_ALR_ALIAS3_MASK            0x000000c0
#define FADC_ALR_ALIAS3_SHIFT           6



/****************** Masks for FADC_CLC_t **********************/
/*
   FADC_CLC              "Clock Control Register"
*/
/**********************************************************/

#define FADC_CLC_MASK                   0x0000003f
#define FADC_CLC_DISR_MASK              0x00000001
#define FADC_CLC_DISR_SHIFT             0
#define FADC_CLC_DISS_MASK              0x00000002
#define FADC_CLC_DISS_SHIFT             1
#define FADC_CLC_SPEN_MASK              0x00000004
#define FADC_CLC_SPEN_SHIFT             2
#define FADC_CLC_EDIS_MASK              0x00000008
#define FADC_CLC_EDIS_SHIFT             3
#define FADC_CLC_SBWE_MASK              0x00000010
#define FADC_CLC_SBWE_SHIFT             4
#define FADC_CLC_FSOE_MASK              0x00000020
#define FADC_CLC_FSOE_SHIFT             5



/****************** Masks for FADC_CRSR_t **********************/
/*
   FADC_CRSR             "Conversion Request Status Register"
*/
/**********************************************************/

#define FADC_CRSR_MASK                  0x00ff0f0f
#define FADC_CRSR_CRF0_MASK             0x00000001
#define FADC_CRSR_CRF0_SHIFT            0
#define FADC_CRSR_CRF1_MASK             0x00000002
#define FADC_CRSR_CRF1_SHIFT            1
#define FADC_CRSR_CRF2_MASK             0x00000004
#define FADC_CRSR_CRF2_SHIFT            2
#define FADC_CRSR_CRF3_MASK             0x00000008
#define FADC_CRSR_CRF3_SHIFT            3
#define FADC_CRSR_BSY0_MASK             0x00000100
#define FADC_CRSR_BSY0_SHIFT            8
#define FADC_CRSR_BSY1_MASK             0x00000200
#define FADC_CRSR_BSY1_SHIFT            9
#define FADC_CRSR_BSY2_MASK             0x00000400
#define FADC_CRSR_BSY2_SHIFT            10
#define FADC_CRSR_BSY3_MASK             0x00000800
#define FADC_CRSR_BSY3_SHIFT            11
#define FADC_CRSR_IRQ0_MASK             0x00010000
#define FADC_CRSR_IRQ0_SHIFT            16
#define FADC_CRSR_IRQ1_MASK             0x00020000
#define FADC_CRSR_IRQ1_SHIFT            17
#define FADC_CRSR_IRQ2_MASK             0x00040000
#define FADC_CRSR_IRQ2_SHIFT            18
#define FADC_CRSR_IRQ3_MASK             0x00080000
#define FADC_CRSR_IRQ3_SHIFT            19
#define FADC_CRSR_IRQF0_MASK            0x00100000
#define FADC_CRSR_IRQF0_SHIFT           20
#define FADC_CRSR_IRQF1_MASK            0x00200000
#define FADC_CRSR_IRQF1_SHIFT           21
#define FADC_CRSR_IRQF2_MASK            0x00400000
#define FADC_CRSR_IRQF2_SHIFT           22
#define FADC_CRSR_IRQF3_MASK            0x00800000
#define FADC_CRSR_IRQF3_SHIFT           23



/****************** Masks for FADC_FDR_t **********************/
/*
   FADC_FDR              "Fractional Divider Register"
*/
/**********************************************************/

#define FADC_FDR_MASK                   0xf3fffbff
#define FADC_FDR_STEP_MASK              0x000003ff
#define FADC_FDR_STEP_SHIFT             0
#define FADC_FDR_SM_MASK                0x00000800
#define FADC_FDR_SM_SHIFT               11
#define FADC_FDR_SC_MASK                0x00003000
#define FADC_FDR_SC_SHIFT               12
#define FADC_FDR_DM_MASK                0x0000c000
#define FADC_FDR_DM_SHIFT               14
#define FADC_FDR_RESULT_MASK            0x03ff0000
#define FADC_FDR_RESULT_SHIFT           16
#define FADC_FDR_SUSACK_MASK            0x10000000
#define FADC_FDR_SUSACK_SHIFT           28
#define FADC_FDR_SUSREQ_MASK            0x20000000
#define FADC_FDR_SUSREQ_SHIFT           29
#define FADC_FDR_ENHW_MASK              0x40000000
#define FADC_FDR_ENHW_SHIFT             30
#define FADC_FDR_DISCLK_MASK            0x80000000
#define FADC_FDR_DISCLK_SHIFT           31



/****************** Masks for FADC_FMR_t **********************/
/*
   FADC_FMR              "Flag Modification Register"
*/
/**********************************************************/

#define FADC_FMR_MASK                   0xffff0f0f
#define FADC_FMR_RCRF0_MASK             0x00000001
#define FADC_FMR_RCRF0_SHIFT            0
#define FADC_FMR_RCRF1_MASK             0x00000002
#define FADC_FMR_RCRF1_SHIFT            1
#define FADC_FMR_RCRF2_MASK             0x00000004
#define FADC_FMR_RCRF2_SHIFT            2
#define FADC_FMR_RCRF3_MASK             0x00000008
#define FADC_FMR_RCRF3_SHIFT            3
#define FADC_FMR_SCRF0_MASK             0x00000100
#define FADC_FMR_SCRF0_SHIFT            8
#define FADC_FMR_SCRF1_MASK             0x00000200
#define FADC_FMR_SCRF1_SHIFT            9
#define FADC_FMR_SCRF2_MASK             0x00000400
#define FADC_FMR_SCRF2_SHIFT            10
#define FADC_FMR_SCRF3_MASK             0x00000800
#define FADC_FMR_SCRF3_SHIFT            11
#define FADC_FMR_RIRQ0_MASK             0x00010000
#define FADC_FMR_RIRQ0_SHIFT            16
#define FADC_FMR_RIRQ1_MASK             0x00020000
#define FADC_FMR_RIRQ1_SHIFT            17
#define FADC_FMR_RIRQ2_MASK             0x00040000
#define FADC_FMR_RIRQ2_SHIFT            18
#define FADC_FMR_RIRQ3_MASK             0x00080000
#define FADC_FMR_RIRQ3_SHIFT            19
#define FADC_FMR_RIRQF0_MASK            0x00100000
#define FADC_FMR_RIRQF0_SHIFT           20
#define FADC_FMR_RIRQF1_MASK            0x00200000
#define FADC_FMR_RIRQF1_SHIFT           21
#define FADC_FMR_RIRQF2_MASK            0x00400000
#define FADC_FMR_RIRQF2_SHIFT           22
#define FADC_FMR_RIRQF3_MASK            0x00800000
#define FADC_FMR_RIRQF3_SHIFT           23
#define FADC_FMR_SIRQ0_MASK             0x01000000
#define FADC_FMR_SIRQ0_SHIFT            24
#define FADC_FMR_SIRQ1_MASK             0x02000000
#define FADC_FMR_SIRQ1_SHIFT            25
#define FADC_FMR_SIRQ2_MASK             0x04000000
#define FADC_FMR_SIRQ2_SHIFT            26
#define FADC_FMR_SIRQ3_MASK             0x08000000
#define FADC_FMR_SIRQ3_SHIFT            27
#define FADC_FMR_SIRQF0_MASK            0x10000000
#define FADC_FMR_SIRQF0_SHIFT           28
#define FADC_FMR_SIRQF1_MASK            0x20000000
#define FADC_FMR_SIRQF1_SHIFT           29
#define FADC_FMR_SIRQF2_MASK            0x40000000
#define FADC_FMR_SIRQF2_SHIFT           30
#define FADC_FMR_SIRQF3_MASK            0x80000000
#define FADC_FMR_SIRQF3_SHIFT           31



/****************** Masks for FADC_FRR0_t **********************/
/*
   FADC_FRR0             "Filter 0 Final Result Register"
*/
/**********************************************************/

#define FADC_FRR0_MASK                  0x00007fff
#define FADC_FRR0_FR_MASK               0x00007fff
#define FADC_FRR0_FR_SHIFT              0



/****************** Masks for FADC_FRR2_t **********************/
/*
   FADC_FRR2             "Filter 2 Final Result Register"
*/
/**********************************************************/

#define FADC_FRR2_MASK                  0x00007fff
#define FADC_FRR2_FR_MASK               0x00007fff
#define FADC_FRR2_FR_SHIFT              0



/****************** Masks for FADC_GCR_t **********************/
/*
   FADC_GCR              "Global Control Register"
*/
/**********************************************************/

#define FADC_GCR_MASK                   0x0f3f1f0f
#define FADC_GCR_RCT0_MASK              0x00000001
#define FADC_GCR_RCT0_SHIFT             0
#define FADC_GCR_RCT1_MASK              0x00000002
#define FADC_GCR_RCT1_SHIFT             1
#define FADC_GCR_RCT2_MASK              0x00000004
#define FADC_GCR_RCT2_SHIFT             2
#define FADC_GCR_RCT3_MASK              0x00000008
#define FADC_GCR_RCT3_SHIFT             3
#define FADC_GCR_RCD_MASK               0x00000100
#define FADC_GCR_RCD_SHIFT              8
#define FADC_GCR_RSTF0_MASK             0x00000200
#define FADC_GCR_RSTF0_SHIFT            9
#define FADC_GCR_RSTF1_MASK             0x00000400
#define FADC_GCR_RSTF1_SHIFT            10
#define FADC_GCR_RSTF2_MASK             0x00000800
#define FADC_GCR_RSTF2_SHIFT            11
#define FADC_GCR_RSTF3_MASK             0x00001000
#define FADC_GCR_RSTF3_SHIFT            12
#define FADC_GCR_CRPRIO_MASK            0x00030000
#define FADC_GCR_CRPRIO_SHIFT           16
#define FADC_GCR_DPAEN_MASK             0x00040000
#define FADC_GCR_DPAEN_SHIFT            18
#define FADC_GCR_RESWEN_MASK            0x00080000
#define FADC_GCR_RESWEN_SHIFT           19
#define FADC_GCR_MUXTM_MASK             0x00100000
#define FADC_GCR_MUXTM_SHIFT            20
#define FADC_GCR_ANON_MASK              0x00200000
#define FADC_GCR_ANON_SHIFT             21
#define FADC_GCR_CALMODE_MASK           0x03000000
#define FADC_GCR_CALMODE_SHIFT          24
#define FADC_GCR_CALCH_MASK             0x0c000000
#define FADC_GCR_CALCH_SHIFT            26



/****************** Masks for FADC_ID_t **********************/
/*
   FADC_ID               "Module Identification Register"
*/
/**********************************************************/

#define FADC_ID_MASK                    0xffffffff
#define FADC_ID_MOD_REV_MASK            0x000000ff
#define FADC_ID_MOD_REV_SHIFT           0
#define FADC_ID_MOD_TYPE_MASK           0x0000ff00
#define FADC_ID_MOD_TYPE_SHIFT          8
#define FADC_ID_MOD_NUMBER_MASK         0xffff0000
#define FADC_ID_MOD_NUMBER_SHIFT        16



/****************** Masks for FADC_IRR10_t **********************/
/*
   FADC_IRR10            "Filter 0 Intermediate Result Register 1"
*/
/**********************************************************/

#define FADC_IRR10_MASK                 0x00001fff
#define FADC_IRR10_IR_MASK              0x00001fff
#define FADC_IRR10_IR_SHIFT             0



/****************** Masks for FADC_IRR12_t **********************/
/*
   FADC_IRR12            "Filter 2 Intermediate Result Register 1"
*/
/**********************************************************/

#define FADC_IRR12_MASK                 0x00001fff
#define FADC_IRR12_IR_MASK              0x00001fff
#define FADC_IRR12_IR_SHIFT             0



/****************** Masks for FADC_IRR20_t **********************/
/*
   FADC_IRR20            "Filter 0 Intermediate Result Register 2"
*/
/**********************************************************/

#define FADC_IRR20_MASK                 0x00001fff
#define FADC_IRR20_IR_MASK              0x00001fff
#define FADC_IRR20_IR_SHIFT             0



/****************** Masks for FADC_IRR22_t **********************/
/*
   FADC_IRR22            "Filter 2 Intermediate Result Register 2"
*/
/**********************************************************/

#define FADC_IRR22_MASK                 0x00001fff
#define FADC_IRR22_IR_MASK              0x00001fff
#define FADC_IRR22_IR_SHIFT             0



/****************** Masks for FADC_IRR30_t **********************/
/*
   FADC_IRR30            "Filter 0 Intermediate Result Register 3"
*/
/**********************************************************/

#define FADC_IRR30_MASK                 0x00001fff
#define FADC_IRR30_IR_MASK              0x00001fff
#define FADC_IRR30_IR_SHIFT             0



/****************** Masks for FADC_IRR32_t **********************/
/*
   FADC_IRR32            "Filter 2 Intermediate Result Register 3"
*/
/**********************************************************/

#define FADC_IRR32_MASK                 0x00001fff
#define FADC_IRR32_IR_MASK              0x00001fff
#define FADC_IRR32_IR_SHIFT             0



/****************** Masks for FADC_NCTR_t **********************/
/*
   FADC_NCTR             "Neighbor Channel Trigger Register"
*/
/**********************************************************/

#define FADC_NCTR_MASK                  0x070b0d0e
#define FADC_NCTR_EN01_MASK             0x00000002
#define FADC_NCTR_EN01_SHIFT            1
#define FADC_NCTR_EN02_MASK             0x00000004
#define FADC_NCTR_EN02_SHIFT            2
#define FADC_NCTR_EN03_MASK             0x00000008
#define FADC_NCTR_EN03_SHIFT            3
#define FADC_NCTR_EN10_MASK             0x00000100
#define FADC_NCTR_EN10_SHIFT            8
#define FADC_NCTR_EN12_MASK             0x00000400
#define FADC_NCTR_EN12_SHIFT            10
#define FADC_NCTR_EN13_MASK             0x00000800
#define FADC_NCTR_EN13_SHIFT            11
#define FADC_NCTR_EN20_MASK             0x00010000
#define FADC_NCTR_EN20_SHIFT            16
#define FADC_NCTR_EN21_MASK             0x00020000
#define FADC_NCTR_EN21_SHIFT            17
#define FADC_NCTR_EN23_MASK             0x00080000
#define FADC_NCTR_EN23_SHIFT            19
#define FADC_NCTR_EN30_MASK             0x01000000
#define FADC_NCTR_EN30_SHIFT            24
#define FADC_NCTR_EN31_MASK             0x02000000
#define FADC_NCTR_EN31_SHIFT            25
#define FADC_NCTR_EN32_MASK             0x04000000
#define FADC_NCTR_EN32_SHIFT            26




#endif /* _HAVE_TRICORE_FADC_MASKS_H_ */

