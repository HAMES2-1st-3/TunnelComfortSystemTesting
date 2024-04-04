/* (c) HighTec EDV-Systeme GmbH */

/* block "CPU" of TriCore TC1791 (166 SFRs) */

#ifndef _HAVE_TRICORE_CPU_ADDRESSES_H_
#define _HAVE_TRICORE_CPU_ADDRESSES_H_

#define CPU_SBSRC0_ADDR       0xF7E0FFBC     /* "Central Processing Unit Software Breakpoint Service Request Control Register 0" */
#define CPU_SRC3_ADDR         0xF7E0FFF0     /* "CPU Service Request Control Register 3" */
#define CPU_SRC2_ADDR         0xF7E0FFF4     /* "CPU Service Request Control Register 2" */
#define CPU_SRC1_ADDR         0xF7E0FFF8     /* "CPU Service Request Control Register 1" */
#define CPU_SRC0_ADDR         0xF7E0FFFC     /* "CPU Service Request Control Register 0" */
#define MMU_CON_ADDR          0xF7E18000     /* "MMU Control Register" */
#define MMU_ASI_ADDR          0xF7E18004     /* "Address Space Identifier Register" */
#define PMA0_ADDR             0xF7E1801C     /* "Physical Memory Attributes" */
#define DCON2_ADDR            0xF7E19000     /* "Data Control Register 2" */
#define SMACON_ADDR           0xF7E1900C     /* "SIST Mode Access Control Register" */
#define DSTR_ADDR             0xF7E19010     /* "Data Synchronous Trap Register" */
#define DATR_ADDR             0xF7E19018     /* "Data Asynchronous Trap Register" */
#define DEADD_ADDR            0xF7E1901C     /* "Data Error Address Register" */
#define DIEAR_ADDR            0xF7E19020     /* "Data Integrity Error Address Register" */
#define DIETR_ADDR            0xF7E19024     /* "Data Integrity Error Trap Register" */
#define CCDIER_ADDR           0xF7E19028     /* "Count of Corrected Data Integrity Errors Register" */
#define DCON0_ADDR            0xF7E19040     /* "Data Memory Control Register" */
#define MIECON_ADDR           0xF7E19044     /* "Memory Integrity Error Control Register" */
#define MIECON2_ADDR          0xF7E19048     /* "Memory Integrity Error Control Register 2" */
#define PSTR_ADDR             0xF7E19200     /* "Program Synchronous Trap Register" */
#define PCON1_ADDR            0xF7E19204     /* "Program Control 1" */
#define PCON2_ADDR            0xF7E19208     /* "Program Control 2" */
#define PCON0_ADDR            0xF7E1920C     /* "Program Control 0" */
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
#define DPR0_0L_ADDR          0xF7E1C000     /* "Data Segment Protection Register Set 0, Range 0, Lower Bound" */
#define DPR0_0U_ADDR          0xF7E1C004     /* "Data Segment Protection Register Set 0, Range 0, Upper Bound" */
#define DPR2_0L_ADDR          0xF7E1C008     /* "Data Segment Protection Register Set 2, Range 0, Lower Bound" */
#define DPR2_0U_ADDR          0xF7E1C00C     /* "Data Segment Protection Register Set 2, Range 0, Upper Bound" */
#define DPR4_0L_ADDR          0xF7E1C010     /* "Data Segment Protection Register Set 4, Range 0, Lower Bound" */
#define DPR4_0U_ADDR          0xF7E1C014     /* "Data Segment Protection Register Set 4, Range 0, Upper Bound" */
#define DPR6_0L_ADDR          0xF7E1C018     /* "Data Segment Protection Register Set 6, Range 0, Lower Bound" */
#define DPR6_0U_ADDR          0xF7E1C01C     /* "Data Segment Protection Register Set 6, Range 0, Upper Bound" */
#define DPR0_1L_ADDR          0xF7E1C400     /* "Data Segment Protection Register Set 0, Range 1, Lower Bound" */
#define DPR0_1U_ADDR          0xF7E1C404     /* "Data Segment Protection Register Set 0, Range 1, Upper Bound" */
#define DPR2_1L_ADDR          0xF7E1C408     /* "Data Segment Protection Register Set 2, Range 1, Lower Bound" */
#define DPR2_1U_ADDR          0xF7E1C40C     /* "Data Segment Protection Register Set 2, Range 1, Upper Bound" */
#define DPR4_1L_ADDR          0xF7E1C410     /* "Data Segment Protection Register Set 4, Range 1, Lower Bound" */
#define DPR4_1U_ADDR          0xF7E1C414     /* "Data Segment Protection Register Set 4, Range 1, Upper Bound" */
#define DPR6_1L_ADDR          0xF7E1C418     /* "Data Segment Protection Register Set 6, Range 1, Lower Bound" */
#define DPR6_1U_ADDR          0xF7E1C41C     /* "Data Segment Protection Register Set 6, Range 1, Upper Bound" */
#define DPR1_0L_ADDR          0xF7E1C800     /* "Data Segment Protection Register Set 1, Range 0, Lower Bound" */
#define DPR1_0U_ADDR          0xF7E1C804     /* "Data Segment Protection Register Set 1, Range 0, Upper Bound" */
#define DPR3_0L_ADDR          0xF7E1C808     /* "Data Segment Protection Register Set 3, Range 0, Lower Bound" */
#define DPR3_0U_ADDR          0xF7E1C80C     /* "Data Segment Protection Register Set 3, Range 0, Upper Bound" */
#define DPR5_0L_ADDR          0xF7E1C810     /* "Data Segment Protection Register Set 5, Range 0, Lower Bound" */
#define DPR5_0U_ADDR          0xF7E1C814     /* "Data Segment Protection Register Set 5, Range 0, Upper Bound" */
#define DPR7_0L_ADDR          0xF7E1C818     /* "Data Segment Protection Register Set 7, Range 0, Lower Bound" */
#define DPR7_0U_ADDR          0xF7E1C81C     /* "Data Segment Protection Register Set 7, Range 0, Upper Bound" */
#define DPR1_1L_ADDR          0xF7E1CC00     /* "Data Segment Protection Register Set 1, Range 1, Lower Bound" */
#define DPR1_1U_ADDR          0xF7E1CC04     /* "Data Segment Protection Register Set 1, Range 1, Upper Bound" */
#define DPR3_1L_ADDR          0xF7E1CC08     /* "Data Segment Protection Register Set 3, Range 1, Lower Bound" */
#define DPR3_1U_ADDR          0xF7E1CC0C     /* "Data Segment Protection Register Set 3, Range 1, Upper Bound" */
#define DPR5_1L_ADDR          0xF7E1CC10     /* "Data Segment Protection Register Set 5, Range 1, Lower Bound" */
#define DPR5_1U_ADDR          0xF7E1CC14     /* "Data Segment Protection Register Set 5, Range 1, Upper Bound" */
#define DPR7_1L_ADDR          0xF7E1CC18     /* "Data Segment Protection Register Set 7, Range 1, Lower Bound" */
#define DPR7_1U_ADDR          0xF7E1CC1C     /* "Data Segment Protection Register Set 7, Range 1, Upper Bound" */
#define CPR0_0L_ADDR          0xF7E1D000     /* "Code Segment Protection Register Set 0, Range 0, Lower Bound" */
#define CPR0_0U_ADDR          0xF7E1D004     /* "Code Segment Protection Register Set 0, Range 0, Upper Bound" */
#define CPR2_0L_ADDR          0xF7E1D008     /* "Code Segment Protection Register Set 2, Range 0, Lower Bound" */
#define CPR2_0U_ADDR          0xF7E1D00C     /* "Code Segment Protection Register Set 2, Range 0, Upper Bound" */
#define CPR0_1L_ADDR          0xF7E1D400     /* "Code Segment Protection Register Set 0, Range 1, Lower Bound" */
#define CPR0_1U_ADDR          0xF7E1D404     /* "Code Segment Protection Register Set 0, Range 1, Upper Bound" */
#define CPR2_1L_ADDR          0xF7E1D408     /* "Code Segment Protection Register Set 2, Range 1, Lower Bound" */
#define CPR2_1U_ADDR          0xF7E1D40C     /* "Code Segment Protection Register Set 2, Range 1, Upper Bound" */
#define CPR1_0L_ADDR          0xF7E1D800     /* "Code Segment Protection Register Set 1, Range 0, Lower Bound" */
#define CPR1_0U_ADDR          0xF7E1D804     /* "Code Segment Protection Register Set 1, Range 0, Upper Bound" */
#define CPR3_0L_ADDR          0xF7E1D808     /* "Code Segment Protection Register Set 3, Range 0, Lower Bound" */
#define CPR3_0U_ADDR          0xF7E1D80C     /* "Code Segment Protection Register Set 3, Range 0, Upper Bound" */
#define CPR1_1L_ADDR          0xF7E1DC00     /* "Code Segment Protection Register Set 1, Range 1, Lower Bound" */
#define CPR1_1U_ADDR          0xF7E1DC04     /* "Code Segment Protection Register Set 1, Range 1, Upper Bound" */
#define CPR3_1L_ADDR          0xF7E1DC08     /* "Code Segment Protection Register Set 3, Range 1, Lower Bound" */
#define CPR3_1U_ADDR          0xF7E1DC0C     /* "Code Segment Protection Register Set 3, Range 1, Upper Bound" */
#define DPS0_ADDR             0xF7E1E000     /* "Data Protection Set Configuration Register 0" */
#define DPS1_ADDR             0xF7E1E080     /* "Data Protection Set Configuration Register 1" */
#define DPS2_ADDR             0xF7E1E100     /* "Data Protection Set Configuration Register 2" */
#define DPS3_ADDR             0xF7E1E180     /* "Data Protection Set Configuration Register 3" */
#define CPS0_ADDR             0xF7E1E200     /* "Code Protection Set Configuration Register 0" */
#define CPS1_ADDR             0xF7E1E280     /* "Code Protection Set Configuration Register 1" */
#define CPS2_ADDR             0xF7E1E300     /* "Code Protection Set Configuration Register 2" */
#define CPS3_ADDR             0xF7E1E380     /* "Code Protection Set Configuration Register 3" */
#define TPS_CON_ADDR          0xF7E1E400     /* "Temporal Protection System Control Register" */
#define TPS_TIMER0_ADDR       0xF7E1E404     /* "Temporal Protection System Timer Register 0" */
#define TPS_TIMER1_ADDR       0xF7E1E408     /* "Temporal Protection System Timer Register 1" */
#define TR0EVT_ADDR           0xF7E1F000     /* "Trigger Event 0" */
#define TR0ADR_ADDR           0xF7E1F004     /* "Trigger Address 0" */
#define TR1EVT_ADDR           0xF7E1F008     /* "Trigger Event 1" */
#define TR1ADR_ADDR           0xF7E1F00C     /* "Trigger Address 1" */
#define TR2EVT_ADDR           0xF7E1F010     /* "Trigger Event 2" */
#define TR2ADR_ADDR           0xF7E1F014     /* "Trigger Address 2" */
#define TR3EVT_ADDR           0xF7E1F018     /* "Trigger Event 3" */
#define TR3ADR_ADDR           0xF7E1F01C     /* "Trigger Address 3" */
#define TR4EVT_ADDR           0xF7E1F020     /* "Trigger Event 4" */
#define TR4ADR_ADDR           0xF7E1F024     /* "Trigger Address 4" */
#define TR5EVT_ADDR           0xF7E1F028     /* "Trigger Event 5" */
#define TR5ADR_ADDR           0xF7E1F02C     /* "Trigger Address 5" */
#define TR6EVT_ADDR           0xF7E1F030     /* "Trigger Event 6" */
#define TR6ADR_ADDR           0xF7E1F034     /* "Trigger Address 6" */
#define TR7EVT_ADDR           0xF7E1F038     /* "Trigger Event 7" */
#define TR7ADR_ADDR           0xF7E1F03C     /* "Trigger Address 7" */
#define CCTRL_ADDR            0xF7E1FC00     /* "Counter Control" */
#define CCNT_ADDR             0xF7E1FC04     /* "CPU Clock Cycle Count" */
#define ICNT_ADDR             0xF7E1FC08     /* "Instruction Count" */
#define M1CNT_ADDR            0xF7E1FC0C     /* "Multi-Count Register 1" */
#define M2CNT_ADDR            0xF7E1FC10     /* "Multi-Count Register 2" */
#define M3CNT_ADDR            0xF7E1FC14     /* "Multi-Count Register 3" */
#define DBGSR_ADDR            0xF7E1FD00     /* "Debug Status Register" */
#define EXEVT_ADDR            0xF7E1FD08     /* "External Event Register" */
#define CREVT_ADDR            0xF7E1FD0C     /* "Core Register Access Event" */
#define SWEVT_ADDR            0xF7E1FD10     /* "Software Debug Event" */
#define TRIG_ACC_ADDR         0xF7E1FD30     /* "Trigger Address x" */
#define DMS_ADDR              0xF7E1FD40     /* "Debug Monitor Start Address" */
#define DCX_ADDR              0xF7E1FD44     /* "Debug Context Save Area Pointer" */
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
#define D0_ADDR               0xF7E1FF00     /* "Data General Purpose Register 0" */
#define D1_ADDR               0xF7E1FF04     /* "Data General Purpose Register 1" */
#define D2_ADDR               0xF7E1FF08     /* "Data General Purpose Register 2" */
#define D3_ADDR               0xF7E1FF0C     /* "Data General Purpose Register 3" */
#define D4_ADDR               0xF7E1FF10     /* "Data General Purpose Register 4" */
#define D5_ADDR               0xF7E1FF14     /* "Data General Purpose Register 5" */
#define D6_ADDR               0xF7E1FF18     /* "Data General Purpose Register 6" */
#define D7_ADDR               0xF7E1FF1C     /* "Data General Purpose Register 7" */
#define D8_ADDR               0xF7E1FF20     /* "Data General Purpose Register 8" */
#define D9_ADDR               0xF7E1FF24     /* "Data General Purpose Register 9" */
#define D10_ADDR              0xF7E1FF28     /* "Data General Purpose Register 10" */
#define D11_ADDR              0xF7E1FF2C     /* "Data General Purpose Register 11" */
#define D12_ADDR              0xF7E1FF30     /* "Data General Purpose Register 12" */
#define D13_ADDR              0xF7E1FF34     /* "Data General Purpose Register 13" */
#define D14_ADDR              0xF7E1FF38     /* "Data General Purpose Register 14" */
#define D15_ADDR              0xF7E1FF3C     /* "Data General Purpose Register 15" */
#define A0_ADDR               0xF7E1FF80     /* "Address General Purpose Register 0" */
#define A1_ADDR               0xF7E1FF84     /* "Address General Purpose Register 1" */
#define A2_ADDR               0xF7E1FF88     /* "Address General Purpose Register 2" */
#define A3_ADDR               0xF7E1FF8C     /* "Address General Purpose Register 3" */
#define A4_ADDR               0xF7E1FF90     /* "Address General Purpose Register 4" */
#define A5_ADDR               0xF7E1FF94     /* "Address General Purpose Register 5" */
#define A6_ADDR               0xF7E1FF98     /* "Address General Purpose Register 6" */
#define A7_ADDR               0xF7E1FF9C     /* "Address General Purpose Register 7" */
#define A8_ADDR               0xF7E1FFA0     /* "Address General Purpose Register 8" */
#define A9_ADDR               0xF7E1FFA4     /* "Address General Purpose Register 9" */
#define A10_ADDR              0xF7E1FFA8     /* "Address General Purpose Register 10" */
#define A11_ADDR              0xF7E1FFAC     /* "Address General Purpose Register 11" */
#define A12_ADDR              0xF7E1FFB0     /* "Address General Purpose Register 12" */
#define A13_ADDR              0xF7E1FFB4     /* "Address General Purpose Register 13" */
#define A14_ADDR              0xF7E1FFB8     /* "Address General Purpose Register 14" */
#define A15_ADDR              0xF7E1FFBC     /* "Address General Purpose Register 15" */


#endif /* _HAVE_TRICORE_CPU_ADDRESSES_H_ (block "CPU") */


