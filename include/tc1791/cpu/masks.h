/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CPU_MASKS_H_
#define _HAVE_TRICORE_CPU_MASKS_H_


/****************** Masks for BIV_t **********************/
/*
   BIV                   "Base Interrupt Vector Table Pointer"
*/
/**********************************************************/

#define BIV_MASK                        0xfffffffe
#define BIV_BIV_MASK                    0xfffffffe
#define BIV_BIV_SHIFT                   1



/****************** Masks for BTV_t **********************/
/*
   BTV                   "Base Trap Vector Table Pointer"
*/
/**********************************************************/

#define BTV_MASK                        0xfffffffe
#define BTV_BTV_MASK                    0xfffffffe
#define BTV_BTV_SHIFT                   1



/****************** Masks for CCDIER_t **********************/
/*
   CCDIER                "Count of Corrected Data Integrity Errors Register"
*/
/**********************************************************/

#define CCDIER_MASK                     0x0000ffff
#define CCDIER_CCDIE_U_MASK             0x000000ff
#define CCDIER_CCDIE_U_SHIFT            0
#define CCDIER_CCDIE_R_MASK             0x0000ff00
#define CCDIER_CCDIE_R_SHIFT            8



/****************** Masks for CCNT_t **********************/
/*
   CCNT                  "CPU Clock Cycle Count"
*/
/**********************************************************/

#define CCNT_MASK                       0xffffffff
#define CCNT_CountValue_MASK            0x7fffffff
#define CCNT_CountValue_SHIFT           0
#define CCNT_SOvf_MASK                  0x80000000
#define CCNT_SOvf_SHIFT                 31



/****************** Masks for CCPIER_t **********************/
/*
   CCPIER                "Count of Corrected Program Integrity Errors Register"
*/
/**********************************************************/

#define CCPIER_MASK                     0x0000ffff
#define CCPIER_CCPIE_U_MASK             0x000000ff
#define CCPIER_CCPIE_U_SHIFT            0
#define CCPIER_CCPIE_R_MASK             0x0000ff00
#define CCPIER_CCPIE_R_SHIFT            8



/****************** Masks for CCTRL_t **********************/
/*
   CCTRL                 "Counter Control"
*/
/**********************************************************/

#define CCTRL_MASK                      0x000007ff
#define CCTRL_CM_MASK                   0x00000001
#define CCTRL_CM_SHIFT                  0
#define CCTRL_CE_MASK                   0x00000002
#define CCTRL_CE_SHIFT                  1
#define CCTRL_M1_MASK                   0x0000001c
#define CCTRL_M1_SHIFT                  2
#define CCTRL_M2_MASK                   0x000000e0
#define CCTRL_M2_SHIFT                  5
#define CCTRL_M3_MASK                   0x00000700
#define CCTRL_M3_SHIFT                  8



/****************** Masks for COMPAT_t **********************/
/*
   COMPAT                "Compatibility Control Register"
*/
/**********************************************************/

#define COMPAT_MASK                     0x0000001c
#define COMPAT_PROT_MASK                0x00000004
#define COMPAT_PROT_SHIFT               2
#define COMPAT_RM_MASK                  0x00000008
#define COMPAT_RM_SHIFT                 3
#define COMPAT_INT_MASK                 0x00000010
#define COMPAT_INT_SHIFT                4



/****************** Masks for CPU_ID_t **********************/
/*
   CPU_ID                "CPU Identification Register"
*/
/**********************************************************/

#define CPU_ID_MASK                     0xffffffff
#define CPU_ID_MOD_REV_MASK             0x000000ff
#define CPU_ID_MOD_REV_SHIFT            0
#define CPU_ID_MOD_32B_MASK             0x0000ff00
#define CPU_ID_MOD_32B_SHIFT            8
#define CPU_ID_MOD_MASK                 0xffff0000
#define CPU_ID_MOD_SHIFT                16



/****************** Masks for CPU_SBSRC0_t **********************/
/*
   CPU_SBSRC0            "Central Processing Unit Software Breakpoint Service Request Control Register 0"
*/
/**********************************************************/

#define CPU_SBSRC0_MASK                 0x0000fcff
#define CPU_SBSRC0_SRPN_MASK            0x000000ff
#define CPU_SBSRC0_SRPN_SHIFT           0
#define CPU_SBSRC0_TOS_MASK             0x00000c00
#define CPU_SBSRC0_TOS_SHIFT            10
#define CPU_SBSRC0_SRE_MASK             0x00001000
#define CPU_SBSRC0_SRE_SHIFT            12
#define CPU_SBSRC0_SRR_MASK             0x00002000
#define CPU_SBSRC0_SRR_SHIFT            13
#define CPU_SBSRC0_CLRR_MASK            0x00004000
#define CPU_SBSRC0_CLRR_SHIFT           14
#define CPU_SBSRC0_SETR_MASK            0x00008000
#define CPU_SBSRC0_SETR_SHIFT           15



/****************** Masks for CREVT_t **********************/
/*
   CREVT                 "Core Register Access Event"
*/
/**********************************************************/

#define CREVT_MASK                      0x000000ff
#define CREVT_EVTA_MASK                 0x00000007
#define CREVT_EVTA_SHIFT                0
#define CREVT_BBM_MASK                  0x00000008
#define CREVT_BBM_SHIFT                 3
#define CREVT_BOD_MASK                  0x00000010
#define CREVT_BOD_SHIFT                 4
#define CREVT_SUSP_MASK                 0x00000020
#define CREVT_SUSP_SHIFT                5
#define CREVT_CNT_MASK                  0x000000c0
#define CREVT_CNT_SHIFT                 6



/****************** Masks for DATR_t **********************/
/*
   DATR                  "Data Asynchronous Trap Register"
*/
/**********************************************************/

#define DATR_MASK                       0x0000c608
#define DATR_SBE_MASK                   0x00000008
#define DATR_SBE_SHIFT                  3
#define DATR_CWSE_MASK                  0x00000200
#define DATR_CWSE_SHIFT                 9
#define DATR_CFSE_MASK                  0x00000400
#define DATR_CFSE_SHIFT                 10
#define DATR_SOE_MASK                   0x00004000
#define DATR_SOE_SHIFT                  14
#define DATR_SME_MASK                   0x00008000
#define DATR_SME_SHIFT                  15



/****************** Masks for DBGSR_t **********************/
/*
   DBGSR                 "Debug Status Register"
*/
/**********************************************************/

#define DBGSR_MASK                      0x00001fdf
#define DBGSR_DE_MASK                   0x00000001
#define DBGSR_DE_SHIFT                  0
#define DBGSR_HALT_MASK                 0x00000006
#define DBGSR_HALT_SHIFT                1
#define DBGSR_SIH_MASK                  0x00000008
#define DBGSR_SIH_SHIFT                 3
#define DBGSR_SUSP_MASK                 0x00000010
#define DBGSR_SUSP_SHIFT                4
#define DBGSR_PREVSUSP_MASK             0x00000040
#define DBGSR_PREVSUSP_SHIFT            6
#define DBGSR_PEVT_MASK                 0x00000080
#define DBGSR_PEVT_SHIFT                7
#define DBGSR_EVTSRC_MASK               0x00001f00
#define DBGSR_EVTSRC_SHIFT              8



/****************** Masks for DBGTCR_t **********************/
/*
   DBGTCR                "Debug Trap Control Register"
*/
/**********************************************************/

#define DBGTCR_MASK                     0x00000001
#define DBGTCR_DTA_MASK                 0x00000001
#define DBGTCR_DTA_SHIFT                0



/****************** Masks for DCON0_t **********************/
/*
   DCON0                 "Data Memory Control Register"
*/
/**********************************************************/

#define DCON0_MASK                      0x00000002
#define DCON0_DCBYP_MASK                0x00000002
#define DCON0_DCBYP_SHIFT               1



/****************** Masks for DCON2_t **********************/
/*
   DCON2                 "Data Control Register 2"
*/
/**********************************************************/

#define DCON2_MASK                      0xffffffff
#define DCON2_DCACHE_SZE_MASK           0x0000ffff
#define DCON2_DCACHE_SZE_SHIFT          0
#define DCON2_DSCRATCH_SZE_MASK         0xffff0000
#define DCON2_DSCRATCH_SZE_SHIFT        16



/****************** Masks for DCX_t **********************/
/*
   DCX                   "Debug Context Save Area Pointer"
*/
/**********************************************************/

#define DCX_MASK                        0xffffffc0
#define DCX_DCXValue_MASK               0xffffffc0
#define DCX_DCXValue_SHIFT              6



/****************** Masks for DEADD_t **********************/
/*
   DEADD                 "Data Error Address Register"
*/
/**********************************************************/

#define DEADD_MASK                      0xffffffff
#define DEADD_ERROR_ADDRESS_MASK        0xffffffff
#define DEADD_ERROR_ADDRESS_SHIFT       0



/****************** Masks for DIEAR_t **********************/
/*
   DIEAR                 "Data Integrity Error Address Register"
*/
/**********************************************************/

#define DIEAR_MASK                      0xffffffff
#define DIEAR_TA_MASK                   0xffffffff
#define DIEAR_TA_SHIFT                  0



/****************** Masks for DIETR_t **********************/
/*
   DIETR                 "Data Integrity Error Trap Register"
*/
/**********************************************************/

#define DIETR_MASK                      0x000009ff
#define DIETR_IED_MASK                  0x00000001
#define DIETR_IED_SHIFT                 0
#define DIETR_IE_T_MASK                 0x00000002
#define DIETR_IE_T_SHIFT                1
#define DIETR_IE_C_MASK                 0x00000004
#define DIETR_IE_C_SHIFT                2
#define DIETR_IE_S_MASK                 0x00000008
#define DIETR_IE_S_SHIFT                3
#define DIETR_IE_B_MASK                 0x00000010
#define DIETR_IE_B_SHIFT                4
#define DIETR_E_INFO_MASK               0x000001e0
#define DIETR_E_INFO_SHIFT              5
#define DIETR_IE_DUAL_MASK              0x00000800
#define DIETR_IE_DUAL_SHIFT             11



/****************** Masks for DMS_t **********************/
/*
   DMS                   "Debug Monitor Start Address"
*/
/**********************************************************/

#define DMS_MASK                        0xfffffffe
#define DMS_DMSValue_MASK               0xfffffffe
#define DMS_DMSValue_SHIFT              1



/****************** Masks for DSTR_t **********************/
/*
   DSTR                  "Data Synchronous Trap Register"
*/
/**********************************************************/

#define DSTR_MASK                       0x0107c047
#define DSTR_SRE_MASK                   0x00000001
#define DSTR_SRE_SHIFT                  0
#define DSTR_GAE_MASK                   0x00000002
#define DSTR_GAE_SHIFT                  1
#define DSTR_LBE_MASK                   0x00000004
#define DSTR_LBE_SHIFT                  2
#define DSTR_CRE_MASK                   0x00000040
#define DSTR_CRE_SHIFT                  6
#define DSTR_DTME_MASK                  0x00004000
#define DSTR_DTME_SHIFT                 14
#define DSTR_LOE_MASK                   0x00008000
#define DSTR_LOE_SHIFT                  15
#define DSTR_SDE_MASK                   0x00010000
#define DSTR_SDE_SHIFT                  16
#define DSTR_SCE_MASK                   0x00020000
#define DSTR_SCE_SHIFT                  17
#define DSTR_CAC_MASK                   0x00040000
#define DSTR_CAC_SHIFT                  18
#define DSTR_ALN_MASK                   0x01000000
#define DSTR_ALN_SHIFT                  24



/****************** Masks for EXEVT_t **********************/
/*
   EXEVT                 "External Event Register"
*/
/**********************************************************/

#define EXEVT_MASK                      0x000000ff
#define EXEVT_EVTA_MASK                 0x00000007
#define EXEVT_EVTA_SHIFT                0
#define EXEVT_BBM_MASK                  0x00000008
#define EXEVT_BBM_SHIFT                 3
#define EXEVT_BOD_MASK                  0x00000010
#define EXEVT_BOD_SHIFT                 4
#define EXEVT_SUSP_MASK                 0x00000020
#define EXEVT_SUSP_SHIFT                5
#define EXEVT_CNT_MASK                  0x000000c0
#define EXEVT_CNT_SHIFT                 6



/****************** Masks for FCX_t **********************/
/*
   FCX                   "Free CSA List Head Pointer"
*/
/**********************************************************/

#define FCX_MASK                        0x000fffff
#define FCX_FCXO_MASK                   0x0000ffff
#define FCX_FCXO_SHIFT                  0
#define FCX_FCXS_MASK                   0x000f0000
#define FCX_FCXS_SHIFT                  16



/****************** Masks for FPU_ID_t **********************/
/*
   FPU_ID                "Trapping Identification Register"
*/
/**********************************************************/

#define FPU_ID_MASK                     0xffffffff
#define FPU_ID_MOD_REV_MASK             0x000000ff
#define FPU_ID_MOD_REV_SHIFT            0
#define FPU_ID_MOD_32B_MASK             0x0000ff00
#define FPU_ID_MOD_32B_SHIFT            8
#define FPU_ID_MOD_MASK                 0xffff0000
#define FPU_ID_MOD_SHIFT                16



/****************** Masks for FPU_TRAP_CON_t **********************/
/*
   FPU_TRAP_CON          "Trap Control Register"
*/
/**********************************************************/

#define FPU_TRAP_CON_MASK               0x7c7c0303
#define FPU_TRAP_CON_TST_MASK           0x00000001
#define FPU_TRAP_CON_TST_SHIFT          0
#define FPU_TRAP_CON_TCL_MASK           0x00000002
#define FPU_TRAP_CON_TCL_SHIFT          1
#define FPU_TRAP_CON_RM_MASK            0x00000300
#define FPU_TRAP_CON_RM_SHIFT           8
#define FPU_TRAP_CON_FXE_MASK           0x00040000
#define FPU_TRAP_CON_FXE_SHIFT          18
#define FPU_TRAP_CON_FUE_MASK           0x00080000
#define FPU_TRAP_CON_FUE_SHIFT          19
#define FPU_TRAP_CON_FZE_MASK           0x00100000
#define FPU_TRAP_CON_FZE_SHIFT          20
#define FPU_TRAP_CON_FVE_MASK           0x00200000
#define FPU_TRAP_CON_FVE_SHIFT          21
#define FPU_TRAP_CON_FIE_MASK           0x00400000
#define FPU_TRAP_CON_FIE_SHIFT          22
#define FPU_TRAP_CON_FX_MASK            0x04000000
#define FPU_TRAP_CON_FX_SHIFT           26
#define FPU_TRAP_CON_FU_MASK            0x08000000
#define FPU_TRAP_CON_FU_SHIFT           27
#define FPU_TRAP_CON_FZ_MASK            0x10000000
#define FPU_TRAP_CON_FZ_SHIFT           28
#define FPU_TRAP_CON_FV_MASK            0x20000000
#define FPU_TRAP_CON_FV_SHIFT           29
#define FPU_TRAP_CON_FI_MASK            0x40000000
#define FPU_TRAP_CON_FI_SHIFT           30



/****************** Masks for FPU_TRAP_OPC_t **********************/
/*
   FPU_TRAP_OPC          "Trapping Instruction Opcode Register"
*/
/**********************************************************/

#define FPU_TRAP_OPC_MASK               0x000f01ff
#define FPU_TRAP_OPC_OPC_MASK           0x000000ff
#define FPU_TRAP_OPC_OPC_SHIFT          0
#define FPU_TRAP_OPC_FMT_MASK           0x00000100
#define FPU_TRAP_OPC_FMT_SHIFT          8
#define FPU_TRAP_OPC_DREG_MASK          0x000f0000
#define FPU_TRAP_OPC_DREG_SHIFT         16



/****************** Masks for FPU_TRAP_PC_t **********************/
/*
   FPU_TRAP_PC           "Trapping Instruction Program Counter Register"
*/
/**********************************************************/

#define FPU_TRAP_PC_MASK                0xffffffff
#define FPU_TRAP_PC_PC_MASK             0xffffffff
#define FPU_TRAP_PC_PC_SHIFT            0



/****************** Masks for ICNT_t **********************/
/*
   ICNT                  "Instruction Count"
*/
/**********************************************************/

#define ICNT_MASK                       0xffffffff
#define ICNT_CountValue_MASK            0x7fffffff
#define ICNT_CountValue_SHIFT           0
#define ICNT_SOvf_MASK                  0x80000000
#define ICNT_SOvf_SHIFT                 31



/****************** Masks for ICR_t **********************/
/*
   ICR                   "Interrupt Control Register"
*/
/**********************************************************/

#define ICR_MASK                        0x07ff01ff
#define ICR_CCPN_MASK                   0x000000ff
#define ICR_CCPN_SHIFT                  0
#define ICR_IE_MASK                     0x00000100
#define ICR_IE_SHIFT                    8
#define ICR_PIPN_MASK                   0x00ff0000
#define ICR_PIPN_SHIFT                  16
#define ICR_CARBCYC_MASK                0x03000000
#define ICR_CARBCYC_SHIFT               24
#define ICR_CONECYC_MASK                0x04000000
#define ICR_CONECYC_SHIFT               26



/****************** Masks for ISP_t **********************/
/*
   ISP                   "Interrupt Stack Pointer"
*/
/**********************************************************/

#define ISP_MASK                        0xffffffff
#define ISP_ISP_MASK                    0xffffffff
#define ISP_ISP_SHIFT                   0



/****************** Masks for LCX_t **********************/
/*
   LCX                   "Free CSA List Limit Pointer"
*/
/**********************************************************/

#define LCX_MASK                        0x000fffff
#define LCX_LCXO_MASK                   0x0000ffff
#define LCX_LCXO_SHIFT                  0
#define LCX_LCXS_MASK                   0x000f0000
#define LCX_LCXS_SHIFT                  16



/****************** Masks for MIECON_t **********************/
/*
   MIECON                "Memory Integrity Error Control Register"
*/
/**********************************************************/

#define MIECON_MASK                     0x00050703
#define MIECON_DSMIEE_MASK              0x00000001
#define MIECON_DSMIEE_SHIFT             0
#define MIECON_DCMIEE_MASK              0x00000002
#define MIECON_DCMIEE_SHIFT             1
#define MIECON_PSMIEE_MASK              0x00000100
#define MIECON_PSMIEE_SHIFT             8
#define MIECON_PCMIEE_MASK              0x00000200
#define MIECON_PCMIEE_SHIFT             9
#define MIECON_PBMIEE_MASK              0x00000400
#define MIECON_PBMIEE_SHIFT             10
#define MIECON_DTIEE_MASK               0x00010000
#define MIECON_DTIEE_SHIFT              16
#define MIECON_PTIEE_MASK               0x00040000
#define MIECON_PTIEE_SHIFT              18



/****************** Masks for MIECON2_t **********************/
/*
   MIECON2               "Memory Integrity Error Control Register 2"
*/
/**********************************************************/

#define MIECON2_MASK                    0x00050703
#define MIECON2_DSMSECE_MASK            0x00000001
#define MIECON2_DSMSECE_SHIFT           0
#define MIECON2_DCMSECE_MASK            0x00000002
#define MIECON2_DCMSECE_SHIFT           1
#define MIECON2_PSMSECE_MASK            0x00000100
#define MIECON2_PSMSECE_SHIFT           8
#define MIECON2_PCMSECE_MASK            0x00000200
#define MIECON2_PCMSECE_SHIFT           9
#define MIECON2_PBMSECE_MASK            0x00000400
#define MIECON2_PBMSECE_SHIFT           10
#define MIECON2_DTSECE_MASK             0x00010000
#define MIECON2_DTSECE_SHIFT            16
#define MIECON2_PTSECE_MASK             0x00040000
#define MIECON2_PTSECE_SHIFT            18



/****************** Masks for MMU_ASI_t **********************/
/*
   MMU_ASI               "Address Space Identifier Register"
*/
/**********************************************************/

#define MMU_ASI_MASK                    0x0000001f
#define MMU_ASI_ASI_MASK                0x0000001f
#define MMU_ASI_ASI_SHIFT               0



/****************** Masks for MMU_CON_t **********************/
/*
   MMU_CON               "MMU Control Register"
*/
/**********************************************************/

#define MMU_CON_MASK                    0x00008000
#define MMU_CON_NOMMU_MASK              0x00008000
#define MMU_CON_NOMMU_SHIFT             15



/****************** Masks for PC_t **********************/
/*
   PC                    "Program Counter"
*/
/**********************************************************/

#define PC_MASK                         0xfffffffe
#define PC_PC_MASK                      0xfffffffe
#define PC_PC_SHIFT                     1



/****************** Masks for PCON0_t **********************/
/*
   PCON0                 "Program Control 0"
*/
/**********************************************************/

#define PCON0_MASK                      0x00000002
#define PCON0_PCBYP_MASK                0x00000002
#define PCON0_PCBYP_SHIFT               1



/****************** Masks for PCON1_t **********************/
/*
   PCON1                 "Program Control 1"
*/
/**********************************************************/

#define PCON1_MASK                      0x00000003
#define PCON1_PCINV_MASK                0x00000001
#define PCON1_PCINV_SHIFT               0
#define PCON1_PBINV_MASK                0x00000002
#define PCON1_PBINV_SHIFT               1



/****************** Masks for PCON2_t **********************/
/*
   PCON2                 "Program Control 2"
*/
/**********************************************************/

#define PCON2_MASK                      0xffffffff
#define PCON2_PCACHE_SZE_MASK           0x0000ffff
#define PCON2_PCACHE_SZE_SHIFT          0
#define PCON2_PSCRATCH_SZE_MASK         0xffff0000
#define PCON2_PSCRATCH_SZE_SHIFT        16



/****************** Masks for PCXI_t **********************/
/*
   PCXI                  "Previous Context Information Register"
*/
/**********************************************************/

#define PCXI_MASK                       0xffdfffff
#define PCXI_PCXO_MASK                  0x0000ffff
#define PCXI_PCXO_SHIFT                 0
#define PCXI_PCXS_MASK                  0x000f0000
#define PCXI_PCXS_SHIFT                 16
#define PCXI_FC_MASK                    0x00100000
#define PCXI_FC_SHIFT                   20
#define PCXI_UL_MASK                    0x00400000
#define PCXI_UL_SHIFT                   22
#define PCXI_PIE_MASK                   0x00800000
#define PCXI_PIE_SHIFT                  23
#define PCXI_PCPN_MASK                  0xff000000
#define PCXI_PCPN_SHIFT                 24



/****************** Masks for PIEAR_t **********************/
/*
   PIEAR                 "Program Integrity Error Address Register"
*/
/**********************************************************/

#define PIEAR_MASK                      0xffffffff
#define PIEAR_TA_MASK                   0xffffffff
#define PIEAR_TA_SHIFT                  0



/****************** Masks for PIETR_t **********************/
/*
   PIETR                 "Program Integrity Error Trap Register"
*/
/**********************************************************/

#define PIETR_MASK                      0x00000dff
#define PIETR_IED_MASK                  0x00000001
#define PIETR_IED_SHIFT                 0
#define PIETR_IE_T_MASK                 0x00000002
#define PIETR_IE_T_SHIFT                1
#define PIETR_IE_C_MASK                 0x00000004
#define PIETR_IE_C_SHIFT                2
#define PIETR_IE_S_MASK                 0x00000008
#define PIETR_IE_S_SHIFT                3
#define PIETR_IE_B_MASK                 0x00000010
#define PIETR_IE_B_SHIFT                4
#define PIETR_E_INFO_MASK               0x000001e0
#define PIETR_E_INFO_SHIFT              5
#define PIETR_IE_ADDR_MASK              0x00000400
#define PIETR_IE_ADDR_SHIFT             10
#define PIETR_IE_DUAL_MASK              0x00000800
#define PIETR_IE_DUAL_SHIFT             11



/****************** Masks for PMA0_t **********************/
/*
   PMA0                  "Physical Memory Attributes"
*/
/**********************************************************/

#define PMA0_MASK                       0xffffffff
#define PMA0_ATT_0_9_0_MASK             0x000003ff
#define PMA0_ATT_0_9_0_SHIFT            0
#define PMA0_ATT_0_10_MASK              0x00000400
#define PMA0_ATT_0_10_SHIFT             10
#define PMA0_ATT_0_11_MASK              0x00000800
#define PMA0_ATT_0_11_SHIFT             11
#define PMA0_ATT_0_12_MASK              0x00001000
#define PMA0_ATT_0_12_SHIFT             12
#define PMA0_ATT_0_13_MASK              0x00002000
#define PMA0_ATT_0_13_SHIFT             13
#define PMA0_ATT_0_14_MASK              0x00004000
#define PMA0_ATT_0_14_SHIFT             14
#define PMA0_ATT_0_15_MASK              0x00008000
#define PMA0_ATT_0_15_SHIFT             15
#define PMA0_ATT_1_9_0_MASK             0x03ff0000
#define PMA0_ATT_1_9_0_SHIFT            16
#define PMA0_ATT_1_10_MASK              0x04000000
#define PMA0_ATT_1_10_SHIFT             26
#define PMA0_ATT_1_11_MASK              0x08000000
#define PMA0_ATT_1_11_SHIFT             27
#define PMA0_ATT_1_12_MASK              0x10000000
#define PMA0_ATT_1_12_SHIFT             28
#define PMA0_ATT_1_13_MASK              0x20000000
#define PMA0_ATT_1_13_SHIFT             29
#define PMA0_ATT_1_14_MASK              0x40000000
#define PMA0_ATT_1_14_SHIFT             30
#define PMA0_ATT_1_15_MASK              0x80000000
#define PMA0_ATT_1_15_SHIFT             31



/****************** Masks for PSTR_t **********************/
/*
   PSTR                  "Program Synchronous Trap Register"
*/
/**********************************************************/

#define PSTR_MASK                       0x00005007
#define PSTR_FRE_MASK                   0x00000001
#define PSTR_FRE_SHIFT                  0
#define PSTR_FGAE_MASK                  0x00000002
#define PSTR_FGAE_SHIFT                 1
#define PSTR_FBE_MASK                   0x00000004
#define PSTR_FBE_SHIFT                  2
#define PSTR_FPE_MASK                   0x00001000
#define PSTR_FPE_SHIFT                  12
#define PSTR_FME_MASK                   0x00004000
#define PSTR_FME_SHIFT                  14



/****************** Masks for PSW_t **********************/
/*
   PSW                   "Program Status Word"
*/
/**********************************************************/

#define PSW_MASK                        0xf8003fff
#define PSW_CDC_MASK                    0x0000007f
#define PSW_CDC_SHIFT                   0
#define PSW_CDE_MASK                    0x00000080
#define PSW_CDE_SHIFT                   7
#define PSW_GW_MASK                     0x00000100
#define PSW_GW_SHIFT                    8
#define PSW_IS_MASK                     0x00000200
#define PSW_IS_SHIFT                    9
#define PSW_IO_MASK                     0x00000c00
#define PSW_IO_SHIFT                    10
#define PSW_PRS_MASK                    0x00003000
#define PSW_PRS_SHIFT                   12
#define PSW_SAV_MASK                    0x08000000
#define PSW_SAV_SHIFT                   27
#define PSW_AV_MASK                     0x10000000
#define PSW_AV_SHIFT                    28
#define PSW_SV_MASK                     0x20000000
#define PSW_SV_SHIFT                    29
#define PSW_V_MASK                      0x40000000
#define PSW_V_SHIFT                     30
#define PSW_C_MASK                      0x80000000
#define PSW_C_SHIFT                     31



/****************** Masks for SMACON_t **********************/
/*
   SMACON                "SIST Mode Access Control Register"
*/
/**********************************************************/

#define SMACON_MASK                     0x01003f3f
#define SMACON_PC_MASK                  0x00000003
#define SMACON_PC_SHIFT                 0
#define SMACON_PT_MASK                  0x0000000c
#define SMACON_PT_SHIFT                 2
#define SMACON_PS_MASK                  0x00000030
#define SMACON_PS_SHIFT                 4
#define SMACON_DC_MASK                  0x00000300
#define SMACON_DC_SHIFT                 8
#define SMACON_DT_MASK                  0x00000c00
#define SMACON_DT_SHIFT                 10
#define SMACON_DS_MASK                  0x00003000
#define SMACON_DS_SHIFT                 12
#define SMACON_IODT_MASK                0x01000000
#define SMACON_IODT_SHIFT               24



/****************** Masks for SWEVT_t **********************/
/*
   SWEVT                 "Software Debug Event"
*/
/**********************************************************/

#define SWEVT_MASK                      0x000000ff
#define SWEVT_EVTA_MASK                 0x00000007
#define SWEVT_EVTA_SHIFT                0
#define SWEVT_BBM_MASK                  0x00000008
#define SWEVT_BBM_SHIFT                 3
#define SWEVT_BOD_MASK                  0x00000010
#define SWEVT_BOD_SHIFT                 4
#define SWEVT_SUSP_MASK                 0x00000020
#define SWEVT_SUSP_SHIFT                5
#define SWEVT_CNT_MASK                  0x000000c0
#define SWEVT_CNT_SHIFT                 6



/****************** Masks for SYSCON_t **********************/
/*
   SYSCON                "System Configuration Register"
*/
/**********************************************************/

#define SYSCON_MASK                     0x00000007
#define SYSCON_FCDSF_MASK               0x00000001
#define SYSCON_FCDSF_SHIFT              0
#define SYSCON_PROTEN_MASK              0x00000002
#define SYSCON_PROTEN_SHIFT             1
#define SYSCON_TPROTEN_MASK             0x00000004
#define SYSCON_TPROTEN_SHIFT            2



/****************** Masks for TPS_CON_t **********************/
/*
   TPS_CON               "Temporal Protection System Control Register"
*/
/**********************************************************/

#define TPS_CON_MASK                    0x00010003
#define TPS_CON_TEXP0_MASK              0x00000001
#define TPS_CON_TEXP0_SHIFT             0
#define TPS_CON_TEXP1_MASK              0x00000002
#define TPS_CON_TEXP1_SHIFT             1
#define TPS_CON_TTRAP_MASK              0x00010000
#define TPS_CON_TTRAP_SHIFT             16



/****************** Masks for TRIG_ACC_t **********************/
/*
   TRIG_ACC              "Trigger Address x"
*/
/**********************************************************/

#define TRIG_ACC_MASK                   0x000000ff
#define TRIG_ACC_T0_MASK                0x00000001
#define TRIG_ACC_T0_SHIFT               0
#define TRIG_ACC_T1_MASK                0x00000002
#define TRIG_ACC_T1_SHIFT               1
#define TRIG_ACC_T2_MASK                0x00000004
#define TRIG_ACC_T2_SHIFT               2
#define TRIG_ACC_T3_MASK                0x00000008
#define TRIG_ACC_T3_SHIFT               3
#define TRIG_ACC_T4_MASK                0x00000010
#define TRIG_ACC_T4_SHIFT               4
#define TRIG_ACC_T5_MASK                0x00000020
#define TRIG_ACC_T5_SHIFT               5
#define TRIG_ACC_T6_MASK                0x00000040
#define TRIG_ACC_T6_SHIFT               6
#define TRIG_ACC_T7_MASK                0x00000080
#define TRIG_ACC_T7_SHIFT               7




#endif /* _HAVE_TRICORE_CPU_MASKS_H_ */

