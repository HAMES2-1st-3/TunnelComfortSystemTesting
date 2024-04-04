/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CPU_MASKS_H_
#define _HAVE_TRICORE_CPU_MASKS_H_


/****************** Masks for ADEDCTL_t **********************/
/*
   ADEDCTL               "Address Error Detection Control Register"
*/
/**********************************************************/

#define ADEDCTL_MASK                    0xc00001ff
#define ADEDCTL_ADFLIP_MASK             0x000000ff
#define ADEDCTL_ADFLIP_SHIFT            0
#define ADEDCTL_ABTFLIP_MASK            0x00000100
#define ADEDCTL_ABTFLIP_SHIFT           8
#define ADEDCTL_IENABLE_MASK            0x40000000
#define ADEDCTL_IENABLE_SHIFT           30
#define ADEDCTL_AENABLE_MASK            0x80000000
#define ADEDCTL_AENABLE_SHIFT           31



/****************** Masks for BIV_t **********************/
/*
   BIV                   "Base Interrupt Vector Table Pointer"
*/
/**********************************************************/

#define BIV_MASK                        0xfffffffe
#define BIV_BIV_MASK                    0xfffffffe
#define BIV_BIV_SHIFT                   1



/****************** Masks for BMACON_t **********************/
/*
   BMACON                "BIST Mode Access Control Register"
*/
/**********************************************************/

#define BMACON_MASK                     0x00040101
#define BMACON_DMMBE_MASK               0x00000001
#define BMACON_DMMBE_SHIFT              0
#define BMACON_PMMBE_MASK               0x00000100
#define BMACON_PMMBE_SHIFT              8
#define BMACON_PTMBE_MASK               0x00040000
#define BMACON_PTMBE_SHIFT              18



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
   CCNT                  "CPU Clock Count Register"
*/
/**********************************************************/

#define CCNT_MASK                       0xffffffff
#define CCNT_Count_Value_MASK           0x7fffffff
#define CCNT_Count_Value_SHIFT          0
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
   CCTRL                 "Counter Control Register"
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

#define COMPAT_MASK                     0x0000000f
#define COMPAT_PIE_MASK                 0x00000001
#define COMPAT_PIE_SHIFT                0
#define COMPAT_DIE_MASK                 0x00000002
#define COMPAT_DIE_SHIFT                1
#define COMPAT_BP_MASK                  0x00000004
#define COMPAT_BP_SHIFT                 2
#define COMPAT_RM_MASK                  0x00000008
#define COMPAT_RM_SHIFT                 3



/****************** Masks for CPS_ID_t **********************/
/*
   CPS_ID                "CPS Module Identification Register"
*/
/**********************************************************/

#define CPS_ID_MASK                     0xffffffff
#define CPS_ID_MOD_REV_MASK             0x000000ff
#define CPS_ID_MOD_REV_SHIFT            0
#define CPS_ID_MOD_32B_MASK             0x0000ff00
#define CPS_ID_MOD_32B_SHIFT            8
#define CPS_ID_MOD_MASK                 0xffff0000
#define CPS_ID_MOD_SHIFT                16



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



/****************** Masks for CPU_SBSRC_t **********************/
/*
   CPU_SBSRC             "CPU Software Breakpoint Service Request Control Register"
*/
/**********************************************************/

#define CPU_SBSRC_MASK                  0x0000f4ff
#define CPU_SBSRC_SRPN_MASK             0x000000ff
#define CPU_SBSRC_SRPN_SHIFT            0
#define CPU_SBSRC_TOS_MASK              0x00000400
#define CPU_SBSRC_TOS_SHIFT             10
#define CPU_SBSRC_SRE_MASK              0x00001000
#define CPU_SBSRC_SRE_SHIFT             12
#define CPU_SBSRC_SRR_MASK              0x00002000
#define CPU_SBSRC_SRR_SHIFT             13
#define CPU_SBSRC_CLRR_MASK             0x00004000
#define CPU_SBSRC_CLRR_SHIFT            14
#define CPU_SBSRC_SETR_MASK             0x00008000
#define CPU_SBSRC_SETR_SHIFT            15



/****************** Masks for CREVT_t **********************/
/*
   CREVT                 "External Event Register"
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
#define CREVT_CST_MASK                  0x00000040
#define CREVT_CST_SHIFT                 6
#define CREVT_CSP_MASK                  0x00000080
#define CREVT_CSP_SHIFT                 7



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



/****************** Masks for DCX_t **********************/
/*
   DCX                   "Debug Context Save Area Pointer Register"
*/
/**********************************************************/

#define DCX_MASK                        0xfffffff0
#define DCX_DCX_Value_MASK              0xfffffff0
#define DCX_DCX_Value_SHIFT             4



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

#define DIETR_MASK                      0x000003fd
#define DIETR_IED_MASK                  0x00000001
#define DIETR_IED_SHIFT                 0
#define DIETR_IE_C_MASK                 0x00000004
#define DIETR_IE_C_SHIFT                2
#define DIETR_IE_S_MASK                 0x00000008
#define DIETR_IE_S_SHIFT                3
#define DIETR_IE_B_MASK                 0x00000010
#define DIETR_IE_B_SHIFT                4
#define DIETR_BUS_ID_MASK               0x000001e0
#define DIETR_BUS_ID_SHIFT              5
#define DIETR_TRTYP_MASK                0x00000200
#define DIETR_TRTYP_SHIFT               9



/****************** Masks for DMI_ATR_t **********************/
/*
   DMI_ATR               "DMI Asynchronous Trap Flag Register"
*/
/**********************************************************/

#define DMI_ATR_MASK                    0x00008e8a
#define DMI_ATR_SREATF_MASK             0x00000002
#define DMI_ATR_SREATF_SHIFT            1
#define DMI_ATR_SBEATF_MASK             0x00000008
#define DMI_ATR_SBEATF_SHIFT            3
#define DMI_ATR_CRSEATF_MASK            0x00000080
#define DMI_ATR_CRSEATF_SHIFT           7
#define DMI_ATR_CWSEATF_MASK            0x00000200
#define DMI_ATR_CWSEATF_SHIFT           9
#define DMI_ATR_CFEATF_MASK             0x00000400
#define DMI_ATR_CFEATF_SHIFT            10
#define DMI_ATR_CMEATF_MASK             0x00000800
#define DMI_ATR_CMEATF_SHIFT            11
#define DMI_ATR_SMEATF_MASK             0x00008000
#define DMI_ATR_SMEATF_SHIFT            15



/****************** Masks for DMI_CON_t **********************/
/*
   DMI_CON               "DMI Control Register"
*/
/**********************************************************/

#define DMI_CON_MASK                    0xffffffff
#define DMI_CON_DC_SZ_AV_MASK           0x0000000f
#define DMI_CON_DC_SZ_AV_SHIFT          0
#define DMI_CON_DMEM_SZ_AV_MASK         0x0000fff0
#define DMI_CON_DMEM_SZ_AV_SHIFT        4
#define DMI_CON_DC_SZ_CFG_MASK          0x000f0000
#define DMI_CON_DC_SZ_CFG_SHIFT         16
#define DMI_CON_DMEM_SZ_CFG_MASK        0xfff00000
#define DMI_CON_DMEM_SZ_CFG_SHIFT       20



/****************** Masks for DMI_ID_t **********************/
/*
   DMI_ID                "DMI Identification Register"
*/
/**********************************************************/

#define DMI_ID_MASK                     0xffffffff
#define DMI_ID_MOD_REV_MASK             0x000000ff
#define DMI_ID_MOD_REV_SHIFT            0
#define DMI_ID_MOD_32B_MASK             0x0000ff00
#define DMI_ID_MOD_32B_SHIFT            8
#define DMI_ID_MOD_MASK                 0xffff0000
#define DMI_ID_MOD_SHIFT                16



/****************** Masks for DMI_STR_t **********************/
/*
   DMI_STR               "DMI Synchronous Trap Flag Register"
*/
/**********************************************************/

#define DMI_STR_MASK                    0x00004145
#define DMI_STR_LRESTF_MASK             0x00000001
#define DMI_STR_LRESTF_SHIFT            0
#define DMI_STR_LBESTF_MASK             0x00000004
#define DMI_STR_LBESTF_SHIFT            2
#define DMI_STR_CRLESTF_MASK            0x00000040
#define DMI_STR_CRLESTF_SHIFT           6
#define DMI_STR_CWLESTF_MASK            0x00000100
#define DMI_STR_CWLESTF_SHIFT           8
#define DMI_STR_LMESTF_MASK             0x00004000
#define DMI_STR_LMESTF_SHIFT            14



/****************** Masks for DMS_t **********************/
/*
   DMS                   "Debug Monitor Start Address Register"
*/
/**********************************************************/

#define DMS_MASK                        0xfffffffe
#define DMS_DMS_Value_MASK              0xfffffffe
#define DMS_DMS_Value_SHIFT             1



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
#define EXEVT_CST_MASK                  0x00000040
#define EXEVT_CST_SHIFT                 6
#define EXEVT_CSP_MASK                  0x00000080
#define EXEVT_CSP_SHIFT                 7



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
   ICNT                  "Instruction Count Register"
*/
/**********************************************************/

#define ICNT_MASK                       0xffffffff
#define ICNT_Count_Value_MASK           0x7fffffff
#define ICNT_Count_Value_SHIFT          0
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

#define MIECON_MASK                     0x00040101
#define MIECON_DMIEE_MASK               0x00000001
#define MIECON_DMIEE_SHIFT              0
#define MIECON_PMIEE_MASK               0x00000100
#define MIECON_PMIEE_SHIFT              8
#define MIECON_PTIEE_MASK               0x00040000
#define MIECON_PTIEE_SHIFT              18



/****************** Masks for MIECON2_t **********************/
/*
   MIECON2               "Memory Integrity Error Control Register 2"
*/
/**********************************************************/

#define MIECON2_MASK                    0x00050101
#define MIECON2_DMSECE_MASK             0x00000001
#define MIECON2_DMSECE_SHIFT            0
#define MIECON2_PMSECE_MASK             0x00000100
#define MIECON2_PMSECE_SHIFT            8
#define MIECON2_DTSECE_MASK             0x00010000
#define MIECON2_DTSECE_SHIFT            16
#define MIECON2_PTSECE_MASK             0x00040000
#define MIECON2_PTSECE_SHIFT            18



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



/****************** Masks for PCXI_t **********************/
/*
   PCXI                  "Previous Context Information Register"
*/
/**********************************************************/

#define PCXI_MASK                       0xffcfffff
#define PCXI_PCXO_MASK                  0x0000ffff
#define PCXI_PCXO_SHIFT                 0
#define PCXI_PCXS_MASK                  0x000f0000
#define PCXI_PCXS_SHIFT                 16
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

#define PIETR_MASK                      0x000001ff
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
#define PIETR_BUS_ID_MASK               0x000001e0
#define PIETR_BUS_ID_SHIFT              5



/****************** Masks for PMI_CON0_t **********************/
/*
   PMI_CON0              "PMI Control Register 0"
*/
/**********************************************************/

#define PMI_CON0_MASK                   0x00000002
#define PMI_CON0_PCBYP_MASK             0x00000002
#define PMI_CON0_PCBYP_SHIFT            1



/****************** Masks for PMI_CON1_t **********************/
/*
   PMI_CON1              "PMI Control Register 1"
*/
/**********************************************************/

#define PMI_CON1_MASK                   0x00000003
#define PMI_CON1_PCINV_MASK             0x00000001
#define PMI_CON1_PCINV_SHIFT            0
#define PMI_CON1_PBINV_MASK             0x00000002
#define PMI_CON1_PBINV_SHIFT            1



/****************** Masks for PMI_CON2_t **********************/
/*
   PMI_CON2              "PMI Control Register 2"
*/
/**********************************************************/

#define PMI_CON2_MASK                   0xffffffff
#define PMI_CON2_PC_SZ_AV_MASK          0x0000000f
#define PMI_CON2_PC_SZ_AV_SHIFT         0
#define PMI_CON2_PMEM_SZ_AV_MASK        0x0000fff0
#define PMI_CON2_PMEM_SZ_AV_SHIFT       4
#define PMI_CON2_PC_SZ_CFG_MASK         0x000f0000
#define PMI_CON2_PC_SZ_CFG_SHIFT        16
#define PMI_CON2_PMEM_SZ_CFG_MASK       0xfff00000
#define PMI_CON2_PMEM_SZ_CFG_SHIFT      20



/****************** Masks for PMI_ID_t **********************/
/*
   PMI_ID                "PMI Identification Register"
*/
/**********************************************************/

#define PMI_ID_MASK                     0xffffffff
#define PMI_ID_MOD_REV_MASK             0x000000ff
#define PMI_ID_MOD_REV_SHIFT            0
#define PMI_ID_MOD_32B_MASK             0x0000ff00
#define PMI_ID_MOD_32B_SHIFT            8
#define PMI_ID_MOD_MASK                 0xffff0000
#define PMI_ID_MOD_SHIFT                16



/****************** Masks for PMI_STR_t **********************/
/*
   PMI_STR               "PMI Synchronous Trap Register"
*/
/**********************************************************/

#define PMI_STR_MASK                    0x00005005
#define PMI_STR_FRESTF_MASK             0x00000001
#define PMI_STR_FRESTF_SHIFT            0
#define PMI_STR_FBESTF_MASK             0x00000004
#define PMI_STR_FBESTF_SHIFT            2
#define PMI_STR_FPESTF_MASK             0x00001000
#define PMI_STR_FPESTF_SHIFT            12
#define PMI_STR_FMESTF_MASK             0x00004000
#define PMI_STR_FMESTF_SHIFT            14



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



/****************** Masks for RDEDCTL_t **********************/
/*
   RDEDCTL               "Read Data Error Detection Control Register"
*/
/**********************************************************/

#define RDEDCTL_MASK                    0x800000ff
#define RDEDCTL_RDFLIP_MASK             0x000000ff
#define RDEDCTL_RDFLIP_SHIFT            0
#define RDEDCTL_RENABLE_MASK            0x80000000
#define RDEDCTL_RENABLE_SHIFT           31



/****************** Masks for REEDCTL_t **********************/
/*
   REEDCTL               "Response Error Detection Control Register"
*/
/**********************************************************/

#define REEDCTL_MASK                    0x8000001f
#define REEDCTL_RSPFLIP_MASK            0x0000001f
#define REEDCTL_RSPFLIP_SHIFT           0
#define REEDCTL_RSENABLE_MASK           0x80000000
#define REEDCTL_RSENABLE_SHIFT          31



/****************** Masks for SMACON_t **********************/
/*
   SMACON                "SIST Mode Access Control Register"
*/
/**********************************************************/

#define SMACON_MASK                     0x0100333f
#define SMACON_PC_MASK                  0x00000003
#define SMACON_PC_SHIFT                 0
#define SMACON_PT_MASK                  0x0000000c
#define SMACON_PT_SHIFT                 2
#define SMACON_PS_MASK                  0x00000030
#define SMACON_PS_SHIFT                 4
#define SMACON_DC_MASK                  0x00000300
#define SMACON_DC_SHIFT                 8
#define SMACON_DS_MASK                  0x00003000
#define SMACON_DS_SHIFT                 12
#define SMACON_IODT_MASK                0x01000000
#define SMACON_IODT_SHIFT               24



/****************** Masks for SWEVT_t **********************/
/*
   SWEVT                 "External Event Register"
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
#define SWEVT_CST_MASK                  0x00000040
#define SWEVT_CST_SHIFT                 6
#define SWEVT_CSP_MASK                  0x00000080
#define SWEVT_CSP_SHIFT                 7



/****************** Masks for SYSCON_t **********************/
/*
   SYSCON                "System Configuration Register"
*/
/**********************************************************/

#define SYSCON_MASK                     0x00000003
#define SYSCON_FCDSF_MASK               0x00000001
#define SYSCON_FCDSF_SHIFT              0
#define SYSCON_PROTEN_MASK              0x00000002
#define SYSCON_PROTEN_SHIFT             1



/****************** Masks for WREDCTL_t **********************/
/*
   WREDCTL               "Write Data Error Detection Control Register"
*/
/**********************************************************/

#define WREDCTL_MASK                    0x800000ff
#define WREDCTL_WDFLIP_MASK             0x000000ff
#define WREDCTL_WDFLIP_SHIFT            0
#define WREDCTL_WENABLE_MASK            0x80000000
#define WREDCTL_WENABLE_SHIFT           31




#endif /* _HAVE_TRICORE_CPU_MASKS_H_ */

