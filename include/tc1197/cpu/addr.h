/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "CPU" of TriCore TC1197 (147 SFRs) */

#ifndef _HAVE_TRICORE_CPU_ADDRESSES_H_
#define _HAVE_TRICORE_CPU_ADDRESSES_H_

#define CPS_ID_ADDR           0xF7E0FF08     /* "CPS Module Identification Register" */
#define CPU_SBSRC_ADDR        0xF7E0FFBC     /* "CPU Software Breakpoint Service Request Control Register" */
#define CPU_SRC3_ADDR         0xF7E0FFF0     /* "CPU Service Request Control Register 3" */
#define CPU_SRC2_ADDR         0xF7E0FFF4     /* "CPU Service Request Control Register 2" */
#define CPU_SRC1_ADDR         0xF7E0FFF8     /* "CPU Service Request Control Register 1" */
#define CPU_SRC0_ADDR         0xF7E0FFFC     /* "CPU Service Request Control Register 0" */
#define MMU_CON_ADDR          0xF7E18000     /* "MMU Control Register" */
#define BMACON_ADDR           0xF7E19004     /* "BIST Mode Access Control Register" */
#define SMACON_ADDR           0xF7E1900C     /* "SIST Mode Access Control Register" */
#define DIEAR_ADDR            0xF7E19020     /* "Data Integrity Error Address Register" */
#define DIETR_ADDR            0xF7E19024     /* "Data Integrity Error Trap Register" */
#define CCDIER_ADDR           0xF7E19028     /* "Count of Corrected Data Integrity Errors Register" */
#define MIECON_ADDR           0xF7E19044     /* "Memory Integrity Error Control Register" */
#define PIEAR_ADDR            0xF7E19210     /* "Program Integrity Error Address Register" */
#define PIETR_ADDR            0xF7E19214     /* "Program Integrity Error Trap Register" */
#define CCPIER_ADDR           0xF7E19218     /* "Count of Corrected Program Integrity Errors Register" */
#define COMPAT_ADDR           0xF7E19400     /* "Compatibility Control Register" */
#define FPU_TRAP_CON_ADDR     0xF7E1A000     /* "Trap Control Register" */
#define FPU_TRAP_PC_ADDR      0xF7E1A004     /* "Trapping Instruction Program Counter Register" */
#define FPU_TRAP_OPC_ADDR     0xF7E1A008     /* "Trapping Instruction Opcode Register" */
#define FPU_TRAP_SRC1_ADDR    0xF7E1A010     /* "Trapping Instruction Operand Register" */
#define FPU_TRAP_SRC2_ADDR    0xF7E1A014     /* "Trapping Instruction Operand Register" */
#define FPU_TRAP_SRC3_ADDR    0xF7E1A018     /* "Trapping Instruction Operand Register" */
#define FPU_ID_ADDR           0xF7E1A020     /* "Trapping Identification Register" */
#define DPR0_0L_ADDR          0xF7E1C000     /* "Data Segment Protection Register Set 0, Range 0, Lower Boundary" */
#define DPR0_0U_ADDR          0xF7E1C004     /* "Data Segment Protection Register Set 0, Range 0, Upper Boundary" */
#define DPR0_1L_ADDR          0xF7E1C008     /* "Data Segment Protection Register Set 0, Range 1, Lower Boundary" */
#define DPR0_1U_ADDR          0xF7E1C00C     /* "Data Segment Protection Register Set 0, Range 1, Upper Boundary" */
#define DPR0_2L_ADDR          0xF7E1C010     /* "Data Segment Protection Register Set 0, Range 2, Lower Boundary" */
#define DPR0_2U_ADDR          0xF7E1C014     /* "Data Segment Protection Register Set 0, Range 2, Upper Boundary" */
#define DPR0_3L_ADDR          0xF7E1C018     /* "Data Segment Protection Register Set 0, Range 3, Lower Boundary" */
#define DPR0_3U_ADDR          0xF7E1C01C     /* "Data Segment Protection Register Set 0, Range 3, Upper Boundary" */
#define DPR1_0L_ADDR          0xF7E1C400     /* "Data Segment Protection Register Set 1, Range 0, Lower Boundary" */
#define DPR1_0U_ADDR          0xF7E1C404     /* "Data Segment Protection Register Set 1, Range 0, Upper Boundary" */
#define DPR1_1L_ADDR          0xF7E1C408     /* "Data Segment Protection Register Set 1, Range 1, Lower Boundary" */
#define DPR1_1U_ADDR          0xF7E1C40C     /* "Data Segment Protection Register Set 1, Range 1, Upper Boundary" */
#define DPR1_2L_ADDR          0xF7E1C410     /* "Data Segment Protection Register Set 1, Range 2, Lower Boundary" */
#define DPR1_2U_ADDR          0xF7E1C414     /* "Data Segment Protection Register Set 1, Range 2, Upper Boundary" */
#define DPR1_3L_ADDR          0xF7E1C418     /* "Data Segment Protection Register Set 1, Range 3, Lower Boundary" */
#define DPR1_3U_ADDR          0xF7E1C41C     /* "Data Segment Protection Register Set 1, Range 3, Upper Boundary" */
#define DPR2_0L_ADDR          0xF7E1C800     /* "Data Segment Protection Register Set 2, Range 0, Lower Boundary" */
#define DPR2_0U_ADDR          0xF7E1C804     /* "Data Segment Protection Register Set 2, Range 0, Upper Boundary" */
#define DPR2_1L_ADDR          0xF7E1C808     /* "Data Segment Protection Register Set 2, Range 1, Lower Boundary" */
#define DPR2_1U_ADDR          0xF7E1C80C     /* "Data Segment Protection Register Set 2, Range 1, Upper Boundary" */
#define DPR2_2L_ADDR          0xF7E1C810     /* "Data Segment Protection Register Set 2, Range 2, Lower Boundary" */
#define DPR2_2U_ADDR          0xF7E1C814     /* "Data Segment Protection Register Set 2, Range 2, Upper Boundary" */
#define DPR2_3L_ADDR          0xF7E1C818     /* "Data Segment Protection Register Set 2, Range 3, Lower Boundary" */
#define DPR2_3U_ADDR          0xF7E1C81C     /* "Data Segment Protection Register Set 2, Range 3, Upper Boundary" */
#define DPR3_0L_ADDR          0xF7E1CC00     /* "Data Segment Protection Register Set 3, Range 0, Lower Boundary" */
#define DPR3_0U_ADDR          0xF7E1CC04     /* "Data Segment Protection Register Set 3, Range 0, Upper Boundary" */
#define DPR3_1L_ADDR          0xF7E1CC08     /* "Data Segment Protection Register Set 3, Range 1, Lower Boundary" */
#define DPR3_1U_ADDR          0xF7E1CC0C     /* "Data Segment Protection Register Set 3, Range 1, Upper Boundary" */
#define DPR3_2L_ADDR          0xF7E1CC10     /* "Data Segment Protection Register Set 3, Range 2, Lower Boundary" */
#define DPR3_2U_ADDR          0xF7E1CC14     /* "Data Segment Protection Register Set 3, Range 2, Upper Boundary" */
#define DPR3_3L_ADDR          0xF7E1CC18     /* "Data Segment Protection Register Set 3, Range 3, Lower Boundary" */
#define DPR3_3U_ADDR          0xF7E1CC1C     /* "Data Segment Protection Register Set 3, Range 3, Upper Boundary" */
#define CPR0_0L_ADDR          0xF7E1D000     /* "Code Segment Protection Register Set 0, Range 0, Lower Boundary" */
#define CPR0_0U_ADDR          0xF7E1D004     /* "Code Segment Protection Register Set 0, Range 0, Upper Boundary" */
#define CPR0_1L_ADDR          0xF7E1D008     /* "Code Segment Protection Register Set 0, Range 1, Lower Boundary" */
#define CPR0_1U_ADDR          0xF7E1D00C     /* "Code Segment Protection Register Set 0, Range 1, Upper Boundary" */
#define CPR1_0L_ADDR          0xF7E1D400     /* "Code Segment Protection Register Set 1, Range 0, Lower Boundary" */
#define CPR1_0U_ADDR          0xF7E1D404     /* "Code Segment Protection Register Set 1, Range 0, Upper Boundary" */
#define CPR1_1L_ADDR          0xF7E1D408     /* "Code Segment Protection Register Set 1, Range 1, Lower Boundary" */
#define CPR1_1U_ADDR          0xF7E1D40C     /* "Code Segment Protection Register Set 1, Range 1, Upper Boundary" */
#define CPR2_0L_ADDR          0xF7E1D800     /* "Code Segment Protection Register Set 2, Range 0, Lower Boundary" */
#define CPR2_0U_ADDR          0xF7E1D804     /* "Code Segment Protection Register Set 2, Range 0, Upper Boundary" */
#define CPR2_1L_ADDR          0xF7E1D808     /* "Code Segment Protection Register Set 2, Range 1, Lower Boundary" */
#define CPR2_1U_ADDR          0xF7E1D80C     /* "Code Segment Protection Register Set 2, Range 1, Upper Boundary" */
#define CPR3_0L_ADDR          0xF7E1DC00     /* "Code Segment Protection Register Set 3, Range 0, Lower Boundary" */
#define CPR3_0U_ADDR          0xF7E1DC04     /* "Code Segment Protection Register Set 3, Range 0, Upper Boundary" */
#define CPR3_1L_ADDR          0xF7E1DC08     /* "Code Segment Protection Register Set 3, Range 1, Lower Boundary" */
#define CPR3_1U_ADDR          0xF7E1DC0C     /* "Code Segment Protection Register Set 3, Range 1, Upper Boundary" */
#define DPM0_ADDR             0xF7E1E000     /* "Data Protection Mode Register Set 0" */
#define DPM1_ADDR             0xF7E1E080     /* "Data Protection Mode Register Set 1" */
#define DPM2_ADDR             0xF7E1E100     /* "Data Protection Mode Register Set 2" */
#define DPM3_ADDR             0xF7E1E180     /* "Data Protection Mode Register Set 3" */
#define CPM0_ADDR             0xF7E1E200     /* "Code Protection Mode Register Set 0" */
#define CPM1_ADDR             0xF7E1E280     /* "Code Protection Mode Register Set 1" */
#define CPM2_ADDR             0xF7E1E300     /* "Code Protection Mode Register Set 2" */
#define CPM3_ADDR             0xF7E1E380     /* "Code Protection Mode Register Set 3" */
#define CCTRL_ADDR            0xF7E1FC00     /* "Counter Control Register" */
#define CCNT_ADDR             0xF7E1FC04     /* "CPU Clock Count Register" */
#define ICNT_ADDR             0xF7E1FC08     /* "Instruction Count Register" */
#define M1CNT_ADDR            0xF7E1FC0C     /* "Multi-Count Register 1" */
#define M2CNT_ADDR            0xF7E1FC10     /* "Multi-Count Register 2" */
#define M3CNT_ADDR            0xF7E1FC14     /* "Multi-Count Register 3" */
#define DBGSR_ADDR            0xF7E1FD00     /* "Debug Status Register" */
#define EXEVT_ADDR            0xF7E1FD08     /* "External Event Register" */
#define CREVT_ADDR            0xF7E1FD0C     /* "External Event Register" */
#define SWEVT_ADDR            0xF7E1FD10     /* "External Event Register" */
#define TR0EVT_ADDR           0xF7E1FD20     /* "Trigger Event 0 Register" */
#define TR1EVT_ADDR           0xF7E1FD24     /* "Trigger Event 1 Register" */
#define DMS_ADDR              0xF7E1FD40     /* "Debug Monitor Start Address Register" */
#define DCX_ADDR              0xF7E1FD44     /* "Debug Context Save Area Pointer Register" */
#define DBGTCR_ADDR           0xF7E1FD48     /* "Debug Trap Control Register" */
#define PCXI_ADDR             0xF7E1FE00     /* "Previous Context Information Register" */
#define PSW_ADDR              0xF7E1FE04     /* "Program Status Word" */
#define PC_ADDR               0xF7E1FE08     /* "Program Counter" */
#define SYSCON_ADDR           0xF7E1FE14     /* "System Configuration Register" */
#define CPU_ID_ADDR           0xF7E1FE18     /* "CPU Identification Register" */
#define BIV_ADDR              0xF7E1FE20     /* "Base Interrupt Vector Table Pointer" */
#define BTV_ADDR              0xF7E1FE24     /* "Base Trap Vector Table Pointer" */
#define ISP_ADDR              0xF7E1FE28     /* "Interrupt Stack Pointer" */
#define ICR_ADDR              0xF7E1FE2C     /* "Interrupt Control Register" */
#define FCX_ADDR              0xF7E1FE38     /* "Free CSA List Head Pointer" */
#define LCX_ADDR              0xF7E1FE3C     /* "Free CSA List Limit Pointer" */
#define D0_ADDR               0xF7E1FF00     /* "Data Register 0" */
#define D1_ADDR               0xF7E1FF04     /* "Data Register 1" */
#define D2_ADDR               0xF7E1FF08     /* "Data Register 2" */
#define D3_ADDR               0xF7E1FF0C     /* "Data Register 3" */
#define D4_ADDR               0xF7E1FF10     /* "Data Register 4" */
#define D5_ADDR               0xF7E1FF14     /* "Data Register 5" */
#define D6_ADDR               0xF7E1FF18     /* "Data Register 6" */
#define D7_ADDR               0xF7E1FF1C     /* "Data Register 7" */
#define D8_ADDR               0xF7E1FF20     /* "Data Register 8" */
#define D9_ADDR               0xF7E1FF24     /* "Data Register 9" */
#define D10_ADDR              0xF7E1FF28     /* "Data Register 10" */
#define D11_ADDR              0xF7E1FF2C     /* "Data Register 11" */
#define D12_ADDR              0xF7E1FF30     /* "Data Register 12" */
#define D13_ADDR              0xF7E1FF34     /* "Data Register 13" */
#define D14_ADDR              0xF7E1FF38     /* "Data Register 14" */
#define D15_ADDR              0xF7E1FF3C     /* "Data Register 15" */
#define A0_ADDR               0xF7E1FF80     /* "Address Register 0" */
#define A1_ADDR               0xF7E1FF84     /* "Address Register 1" */
#define A2_ADDR               0xF7E1FF88     /* "Address Register 2" */
#define A3_ADDR               0xF7E1FF8C     /* "Address Register 3" */
#define A4_ADDR               0xF7E1FF90     /* "Address Register 4" */
#define A5_ADDR               0xF7E1FF94     /* "Address Register 5" */
#define A6_ADDR               0xF7E1FF98     /* "Address Register 6" */
#define A7_ADDR               0xF7E1FF9C     /* "Address Register 7" */
#define A8_ADDR               0xF7E1FFA0     /* "Address Register 8" */
#define A9_ADDR               0xF7E1FFA4     /* "Address Register 9" */
#define A10_ADDR              0xF7E1FFA8     /* "Address Register 10" */
#define A11_ADDR              0xF7E1FFAC     /* "Address Register 11" */
#define A12_ADDR              0xF7E1FFB0     /* "Address Register 12" */
#define A13_ADDR              0xF7E1FFB4     /* "Address Register 13" */
#define A14_ADDR              0xF7E1FFB8     /* "Address Register 14" */
#define A15_ADDR              0xF7E1FFBC     /* "Address Register 15" */
#define DMI_ID_ADDR           0xF87FFC08     /* "DMI Identification Register" */
#define DMI_CON_ADDR          0xF87FFC10     /* "DMI Control Register" */
#define DMI_STR_ADDR          0xF87FFC18     /* "DMI Synchronous Trap Flag Register" */
#define DMI_ATR_ADDR          0xF87FFC20     /* "DMI Asynchronous Trap Flag Register" */
#define PMI_ID_ADDR           0xF87FFD08     /* "PMI Identification Register" */
#define PMI_CON0_ADDR         0xF87FFD10     /* "PMI Control Register 0" */
#define PMI_CON1_ADDR         0xF87FFD14     /* "PMI Control Register 1" */
#define PMI_CON2_ADDR         0xF87FFD18     /* "PMI Control Register 2" */
#define PMI_STR_ADDR          0xF87FFD20     /* "PMI Synchronous Trap Register" */


#endif /* _HAVE_TRICORE_CPU_ADDRESSES_H_ (block "CPU") */


