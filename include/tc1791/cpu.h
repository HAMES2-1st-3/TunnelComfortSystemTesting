/* (c) HighTec EDV-Systeme GmbH */

/* block "CPU" of TriCore TC1791 (166 SFRs) */

#include <tc1791/cpu/addr.h>

#include <tc1791/cpu/masks.h>
#include <tc1791/cpu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1791/cpu/types.h>
#include <tc1791/cpu/sharetypes.h>

#ifndef _HAVE_TRICORE_CPU_H_
#define _HAVE_TRICORE_CPU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (A0, An_t, A0_ADDR);                    /* "Address General Purpose Register 0" */
SFR_NOABS (A1, An_t, A1_ADDR);                    /* "Address General Purpose Register 1" */
SFR_NOABS (A10, An_t, A10_ADDR);                  /* "Address General Purpose Register 10" */
SFR_NOABS (A11, An_t, A11_ADDR);                  /* "Address General Purpose Register 11" */
SFR_NOABS (A12, An_t, A12_ADDR);                  /* "Address General Purpose Register 12" */
SFR_NOABS (A13, An_t, A13_ADDR);                  /* "Address General Purpose Register 13" */
SFR_NOABS (A14, An_t, A14_ADDR);                  /* "Address General Purpose Register 14" */
SFR_NOABS (A15, An_t, A15_ADDR);                  /* "Address General Purpose Register 15" */
SFR_NOABS (A2, An_t, A2_ADDR);                    /* "Address General Purpose Register 2" */
SFR_NOABS (A3, An_t, A3_ADDR);                    /* "Address General Purpose Register 3" */
SFR_NOABS (A4, An_t, A4_ADDR);                    /* "Address General Purpose Register 4" */
SFR_NOABS (A5, An_t, A5_ADDR);                    /* "Address General Purpose Register 5" */
SFR_NOABS (A6, An_t, A6_ADDR);                    /* "Address General Purpose Register 6" */
SFR_NOABS (A7, An_t, A7_ADDR);                    /* "Address General Purpose Register 7" */
SFR_NOABS (A8, An_t, A8_ADDR);                    /* "Address General Purpose Register 8" */
SFR_NOABS (A9, An_t, A9_ADDR);                    /* "Address General Purpose Register 9" */
SFR_NOABS (BIV, BIV_t, BIV_ADDR);                 /* "Base Interrupt Vector Table Pointer" */
SFR_NOABS (BTV, BTV_t, BTV_ADDR);                 /* "Base Trap Vector Table Pointer" */
SFR_NOABS (CCDIER, CCDIER_t, CCDIER_ADDR);        /* "Count of Corrected Data Integrity Errors Register" */
SFR_NOABS (CCNT, CCNT_t, CCNT_ADDR);              /* "CPU Clock Cycle Count" */
SFR_NOABS (CCPIER, CCPIER_t, CCPIER_ADDR);        /* "Count of Corrected Program Integrity Errors Register" */
SFR_NOABS (CCTRL, CCTRL_t, CCTRL_ADDR);           /* "Counter Control" */
SFR_NOABS (COMPAT, COMPAT_t, COMPAT_ADDR);        /* "Compatibility Control Register" */
SFR_NOABS (CPR0_0L, CPRn_mL_t, CPR0_0L_ADDR);     /* "Code Segment Protection Register Set 0, Range 0, Lower Bound" */
SFR_NOABS (CPR0_0U, CPRn_mU_t, CPR0_0U_ADDR);     /* "Code Segment Protection Register Set 0, Range 0, Upper Bound" */
SFR_NOABS (CPR0_1L, CPRn_mL_t, CPR0_1L_ADDR);     /* "Code Segment Protection Register Set 0, Range 1, Lower Bound" */
SFR_NOABS (CPR0_1U, CPRn_mU_t, CPR0_1U_ADDR);     /* "Code Segment Protection Register Set 0, Range 1, Upper Bound" */
SFR_NOABS (CPR1_0L, CPRn_mL_t, CPR1_0L_ADDR);     /* "Code Segment Protection Register Set 1, Range 0, Lower Bound" */
SFR_NOABS (CPR1_0U, CPRn_mU_t, CPR1_0U_ADDR);     /* "Code Segment Protection Register Set 1, Range 0, Upper Bound" */
SFR_NOABS (CPR1_1L, CPRn_mL_t, CPR1_1L_ADDR);     /* "Code Segment Protection Register Set 1, Range 1, Lower Bound" */
SFR_NOABS (CPR1_1U, CPRn_mU_t, CPR1_1U_ADDR);     /* "Code Segment Protection Register Set 1, Range 1, Upper Bound" */
SFR_NOABS (CPR2_0L, CPRn_mL_t, CPR2_0L_ADDR);     /* "Code Segment Protection Register Set 2, Range 0, Lower Bound" */
SFR_NOABS (CPR2_0U, CPRn_mU_t, CPR2_0U_ADDR);     /* "Code Segment Protection Register Set 2, Range 0, Upper Bound" */
SFR_NOABS (CPR2_1L, CPRn_mL_t, CPR2_1L_ADDR);     /* "Code Segment Protection Register Set 2, Range 1, Lower Bound" */
SFR_NOABS (CPR2_1U, CPRn_mU_t, CPR2_1U_ADDR);     /* "Code Segment Protection Register Set 2, Range 1, Upper Bound" */
SFR_NOABS (CPR3_0L, CPRn_mL_t, CPR3_0L_ADDR);     /* "Code Segment Protection Register Set 3, Range 0, Lower Bound" */
SFR_NOABS (CPR3_0U, CPRn_mU_t, CPR3_0U_ADDR);     /* "Code Segment Protection Register Set 3, Range 0, Upper Bound" */
SFR_NOABS (CPR3_1L, CPRn_mL_t, CPR3_1L_ADDR);     /* "Code Segment Protection Register Set 3, Range 1, Lower Bound" */
SFR_NOABS (CPR3_1U, CPRn_mU_t, CPR3_1U_ADDR);     /* "Code Segment Protection Register Set 3, Range 1, Upper Bound" */
SFR_NOABS (CPS0, CPSn_t, CPS0_ADDR);              /* "Code Protection Set Configuration Register 0" */
SFR_NOABS (CPS1, CPSn_t, CPS1_ADDR);              /* "Code Protection Set Configuration Register 1" */
SFR_NOABS (CPS2, CPSn_t, CPS2_ADDR);              /* "Code Protection Set Configuration Register 2" */
SFR_NOABS (CPS3, CPSn_t, CPS3_ADDR);              /* "Code Protection Set Configuration Register 3" */
SFR_NOABS (CPU_ID, CPU_ID_t, CPU_ID_ADDR);        /* "CPU Identification Register" */
SFR_NOABS (CPU_SBSRC0, CPU_SBSRC0_t, CPU_SBSRC0_ADDR); /* "Central Processing Unit Software Breakpoint Service Request Control Register 0" */
SFR_NOABS (CPU_SRC0, CPU_SRCm_t, CPU_SRC0_ADDR);  /* "CPU Service Request Control Register 0" */
SFR_NOABS (CPU_SRC1, CPU_SRCm_t, CPU_SRC1_ADDR);  /* "CPU Service Request Control Register 1" */
SFR_NOABS (CPU_SRC2, CPU_SRCm_t, CPU_SRC2_ADDR);  /* "CPU Service Request Control Register 2" */
SFR_NOABS (CPU_SRC3, CPU_SRCm_t, CPU_SRC3_ADDR);  /* "CPU Service Request Control Register 3" */
SFR_NOABS (CREVT, CREVT_t, CREVT_ADDR);           /* "Core Register Access Event" */
SFR_NOABS (D0, Dn_t, D0_ADDR);                    /* "Data General Purpose Register 0" */
SFR_NOABS (D1, Dn_t, D1_ADDR);                    /* "Data General Purpose Register 1" */
SFR_NOABS (D10, Dn_t, D10_ADDR);                  /* "Data General Purpose Register 10" */
SFR_NOABS (D11, Dn_t, D11_ADDR);                  /* "Data General Purpose Register 11" */
SFR_NOABS (D12, Dn_t, D12_ADDR);                  /* "Data General Purpose Register 12" */
SFR_NOABS (D13, Dn_t, D13_ADDR);                  /* "Data General Purpose Register 13" */
SFR_NOABS (D14, Dn_t, D14_ADDR);                  /* "Data General Purpose Register 14" */
SFR_NOABS (D15, Dn_t, D15_ADDR);                  /* "Data General Purpose Register 15" */
SFR_NOABS (D2, Dn_t, D2_ADDR);                    /* "Data General Purpose Register 2" */
SFR_NOABS (D3, Dn_t, D3_ADDR);                    /* "Data General Purpose Register 3" */
SFR_NOABS (D4, Dn_t, D4_ADDR);                    /* "Data General Purpose Register 4" */
SFR_NOABS (D5, Dn_t, D5_ADDR);                    /* "Data General Purpose Register 5" */
SFR_NOABS (D6, Dn_t, D6_ADDR);                    /* "Data General Purpose Register 6" */
SFR_NOABS (D7, Dn_t, D7_ADDR);                    /* "Data General Purpose Register 7" */
SFR_NOABS (D8, Dn_t, D8_ADDR);                    /* "Data General Purpose Register 8" */
SFR_NOABS (D9, Dn_t, D9_ADDR);                    /* "Data General Purpose Register 9" */
SFR_NOABS (DATR, DATR_t, DATR_ADDR);              /* "Data Asynchronous Trap Register" */
SFR_NOABS (DBGSR, DBGSR_t, DBGSR_ADDR);           /* "Debug Status Register" */
SFR_NOABS (DBGTCR, DBGTCR_t, DBGTCR_ADDR);        /* "Debug Trap Control Register" */
SFR_NOABS (DCON0, DCON0_t, DCON0_ADDR);           /* "Data Memory Control Register" */
SFR_NOABS (DCON2, DCON2_t, DCON2_ADDR);           /* "Data Control Register 2" */
SFR_NOABS (DCX, DCX_t, DCX_ADDR);                 /* "Debug Context Save Area Pointer" */
SFR_NOABS (DEADD, DEADD_t, DEADD_ADDR);           /* "Data Error Address Register" */
SFR_NOABS (DIEAR, DIEAR_t, DIEAR_ADDR);           /* "Data Integrity Error Address Register" */
SFR_NOABS (DIETR, DIETR_t, DIETR_ADDR);           /* "Data Integrity Error Trap Register" */
SFR_NOABS (DMS, DMS_t, DMS_ADDR);                 /* "Debug Monitor Start Address" */
SFR_NOABS (DPR0_0L, DPRn_mL_t, DPR0_0L_ADDR);     /* "Data Segment Protection Register Set 0, Range 0, Lower Bound" */
SFR_NOABS (DPR0_0U, DPRn_mU_t, DPR0_0U_ADDR);     /* "Data Segment Protection Register Set 0, Range 0, Upper Bound" */
SFR_NOABS (DPR0_1L, DPRn_mL_t, DPR0_1L_ADDR);     /* "Data Segment Protection Register Set 0, Range 1, Lower Bound" */
SFR_NOABS (DPR0_1U, DPRn_mU_t, DPR0_1U_ADDR);     /* "Data Segment Protection Register Set 0, Range 1, Upper Bound" */
SFR_NOABS (DPR1_0L, DPRn_mL_t, DPR1_0L_ADDR);     /* "Data Segment Protection Register Set 1, Range 0, Lower Bound" */
SFR_NOABS (DPR1_0U, DPRn_mU_t, DPR1_0U_ADDR);     /* "Data Segment Protection Register Set 1, Range 0, Upper Bound" */
SFR_NOABS (DPR1_1L, DPRn_mL_t, DPR1_1L_ADDR);     /* "Data Segment Protection Register Set 1, Range 1, Lower Bound" */
SFR_NOABS (DPR1_1U, DPRn_mU_t, DPR1_1U_ADDR);     /* "Data Segment Protection Register Set 1, Range 1, Upper Bound" */
SFR_NOABS (DPR2_0L, DPRn_mL_t, DPR2_0L_ADDR);     /* "Data Segment Protection Register Set 2, Range 0, Lower Bound" */
SFR_NOABS (DPR2_0U, DPRn_mU_t, DPR2_0U_ADDR);     /* "Data Segment Protection Register Set 2, Range 0, Upper Bound" */
SFR_NOABS (DPR2_1L, DPRn_mL_t, DPR2_1L_ADDR);     /* "Data Segment Protection Register Set 2, Range 1, Lower Bound" */
SFR_NOABS (DPR2_1U, DPRn_mU_t, DPR2_1U_ADDR);     /* "Data Segment Protection Register Set 2, Range 1, Upper Bound" */
SFR_NOABS (DPR3_0L, DPRn_mL_t, DPR3_0L_ADDR);     /* "Data Segment Protection Register Set 3, Range 0, Lower Bound" */
SFR_NOABS (DPR3_0U, DPRn_mU_t, DPR3_0U_ADDR);     /* "Data Segment Protection Register Set 3, Range 0, Upper Bound" */
SFR_NOABS (DPR3_1L, DPRn_mL_t, DPR3_1L_ADDR);     /* "Data Segment Protection Register Set 3, Range 1, Lower Bound" */
SFR_NOABS (DPR3_1U, DPRn_mU_t, DPR3_1U_ADDR);     /* "Data Segment Protection Register Set 3, Range 1, Upper Bound" */
SFR_NOABS (DPR4_0L, DPRn_mL_t, DPR4_0L_ADDR);     /* "Data Segment Protection Register Set 4, Range 0, Lower Bound" */
SFR_NOABS (DPR4_0U, DPRn_mU_t, DPR4_0U_ADDR);     /* "Data Segment Protection Register Set 4, Range 0, Upper Bound" */
SFR_NOABS (DPR4_1L, DPRn_mL_t, DPR4_1L_ADDR);     /* "Data Segment Protection Register Set 4, Range 1, Lower Bound" */
SFR_NOABS (DPR4_1U, DPRn_mU_t, DPR4_1U_ADDR);     /* "Data Segment Protection Register Set 4, Range 1, Upper Bound" */
SFR_NOABS (DPR5_0L, DPRn_mL_t, DPR5_0L_ADDR);     /* "Data Segment Protection Register Set 5, Range 0, Lower Bound" */
SFR_NOABS (DPR5_0U, DPRn_mU_t, DPR5_0U_ADDR);     /* "Data Segment Protection Register Set 5, Range 0, Upper Bound" */
SFR_NOABS (DPR5_1L, DPRn_mL_t, DPR5_1L_ADDR);     /* "Data Segment Protection Register Set 5, Range 1, Lower Bound" */
SFR_NOABS (DPR5_1U, DPRn_mU_t, DPR5_1U_ADDR);     /* "Data Segment Protection Register Set 5, Range 1, Upper Bound" */
SFR_NOABS (DPR6_0L, DPRn_mL_t, DPR6_0L_ADDR);     /* "Data Segment Protection Register Set 6, Range 0, Lower Bound" */
SFR_NOABS (DPR6_0U, DPRn_mU_t, DPR6_0U_ADDR);     /* "Data Segment Protection Register Set 6, Range 0, Upper Bound" */
SFR_NOABS (DPR6_1L, DPRn_mL_t, DPR6_1L_ADDR);     /* "Data Segment Protection Register Set 6, Range 1, Lower Bound" */
SFR_NOABS (DPR6_1U, DPRn_mU_t, DPR6_1U_ADDR);     /* "Data Segment Protection Register Set 6, Range 1, Upper Bound" */
SFR_NOABS (DPR7_0L, DPRn_mL_t, DPR7_0L_ADDR);     /* "Data Segment Protection Register Set 7, Range 0, Lower Bound" */
SFR_NOABS (DPR7_0U, DPRn_mU_t, DPR7_0U_ADDR);     /* "Data Segment Protection Register Set 7, Range 0, Upper Bound" */
SFR_NOABS (DPR7_1L, DPRn_mL_t, DPR7_1L_ADDR);     /* "Data Segment Protection Register Set 7, Range 1, Lower Bound" */
SFR_NOABS (DPR7_1U, DPRn_mU_t, DPR7_1U_ADDR);     /* "Data Segment Protection Register Set 7, Range 1, Upper Bound" */
SFR_NOABS (DPS0, DPSn_t, DPS0_ADDR);              /* "Data Protection Set Configuration Register 0" */
SFR_NOABS (DPS1, DPSn_t, DPS1_ADDR);              /* "Data Protection Set Configuration Register 1" */
SFR_NOABS (DPS2, DPSn_t, DPS2_ADDR);              /* "Data Protection Set Configuration Register 2" */
SFR_NOABS (DPS3, DPSn_t, DPS3_ADDR);              /* "Data Protection Set Configuration Register 3" */
SFR_NOABS (DSTR, DSTR_t, DSTR_ADDR);              /* "Data Synchronous Trap Register" */
SFR_NOABS (EXEVT, EXEVT_t, EXEVT_ADDR);           /* "External Event Register" */
SFR_NOABS (FCX, FCX_t, FCX_ADDR);                 /* "Free CSA List Head Pointer" */
SFR_NOABS (FPU_ID, FPU_ID_t, FPU_ID_ADDR);        /* "Trapping Identification Register" */
SFR_NOABS (FPU_TRAP_CON, FPU_TRAP_CON_t, FPU_TRAP_CON_ADDR); /* "Trap Control Register" */
SFR_NOABS (FPU_TRAP_OPC, FPU_TRAP_OPC_t, FPU_TRAP_OPC_ADDR); /* "Trapping Instruction Opcode Register" */
SFR_NOABS (FPU_TRAP_PC, FPU_TRAP_PC_t, FPU_TRAP_PC_ADDR); /* "Trapping Instruction Program Counter Register" */
SFR_NOABS (FPU_TRAP_SRC1, FPU_TRAP_SRCm_t, FPU_TRAP_SRC1_ADDR); /* "Trapping Instruction Operand Register" */
SFR_NOABS (FPU_TRAP_SRC2, FPU_TRAP_SRCm_t, FPU_TRAP_SRC2_ADDR); /* "Trapping Instruction Operand Register" */
SFR_NOABS (FPU_TRAP_SRC3, FPU_TRAP_SRCm_t, FPU_TRAP_SRC3_ADDR); /* "Trapping Instruction Operand Register" */
SFR_NOABS (ICNT, ICNT_t, ICNT_ADDR);              /* "Instruction Count" */
SFR_NOABS (ICR, ICR_t, ICR_ADDR);                 /* "Interrupt Control Register" */
SFR_NOABS (ISP, ISP_t, ISP_ADDR);                 /* "Interrupt Stack Pointer" */
SFR_NOABS (LCX, LCX_t, LCX_ADDR);                 /* "Free CSA List Limit Pointer" */
SFR_NOABS (M1CNT, MnCNT_t, M1CNT_ADDR);           /* "Multi-Count Register 1" */
SFR_NOABS (M2CNT, MnCNT_t, M2CNT_ADDR);           /* "Multi-Count Register 2" */
SFR_NOABS (M3CNT, MnCNT_t, M3CNT_ADDR);           /* "Multi-Count Register 3" */
SFR_NOABS (MIECON, MIECON_t, MIECON_ADDR);        /* "Memory Integrity Error Control Register" */
SFR_NOABS (MIECON2, MIECON2_t, MIECON2_ADDR);     /* "Memory Integrity Error Control Register 2" */
SFR_NOABS (MMU_ASI, MMU_ASI_t, MMU_ASI_ADDR);     /* "Address Space Identifier Register" */
SFR_NOABS (MMU_CON, MMU_CON_t, MMU_CON_ADDR);     /* "MMU Control Register" */
SFR_NOABS (PC, PC_t, PC_ADDR);                    /* "Program Counter" */
SFR_NOABS (PCON0, PCON0_t, PCON0_ADDR);           /* "Program Control 0" */
SFR_NOABS (PCON1, PCON1_t, PCON1_ADDR);           /* "Program Control 1" */
SFR_NOABS (PCON2, PCON2_t, PCON2_ADDR);           /* "Program Control 2" */
SFR_NOABS (PCXI, PCXI_t, PCXI_ADDR);              /* "Previous Context Information Register" */
SFR_NOABS (PIEAR, PIEAR_t, PIEAR_ADDR);           /* "Program Integrity Error Address Register" */
SFR_NOABS (PIETR, PIETR_t, PIETR_ADDR);           /* "Program Integrity Error Trap Register" */
SFR_NOABS (PMA0, PMA0_t, PMA0_ADDR);              /* "Physical Memory Attributes" */
SFR_NOABS (PSTR, PSTR_t, PSTR_ADDR);              /* "Program Synchronous Trap Register" */
SFR_NOABS (PSW, PSW_t, PSW_ADDR);                 /* "Program Status Word" */
SFR_NOABS (SMACON, SMACON_t, SMACON_ADDR);        /* "SIST Mode Access Control Register" */
SFR_NOABS (SWEVT, SWEVT_t, SWEVT_ADDR);           /* "Software Debug Event" */
SFR_NOABS (SYSCON, SYSCON_t, SYSCON_ADDR);        /* "System Configuration Register" */
SFR_NOABS (TPS_CON, TPS_CON_t, TPS_CON_ADDR);     /* "Temporal Protection System Control Register" */
SFR_NOABS (TPS_TIMER0, TPS_TIMERm_t, TPS_TIMER0_ADDR); /* "Temporal Protection System Timer Register 0" */
SFR_NOABS (TPS_TIMER1, TPS_TIMERm_t, TPS_TIMER1_ADDR); /* "Temporal Protection System Timer Register 1" */
SFR_NOABS (TR0ADR, TRnADR_t, TR0ADR_ADDR);        /* "Trigger Address 0" */
SFR_NOABS (TR0EVT, TRnEVT_t, TR0EVT_ADDR);        /* "Trigger Event 0" */
SFR_NOABS (TR1ADR, TRnADR_t, TR1ADR_ADDR);        /* "Trigger Address 1" */
SFR_NOABS (TR1EVT, TRnEVT_t, TR1EVT_ADDR);        /* "Trigger Event 1" */
SFR_NOABS (TR2ADR, TRnADR_t, TR2ADR_ADDR);        /* "Trigger Address 2" */
SFR_NOABS (TR2EVT, TRnEVT_t, TR2EVT_ADDR);        /* "Trigger Event 2" */
SFR_NOABS (TR3ADR, TRnADR_t, TR3ADR_ADDR);        /* "Trigger Address 3" */
SFR_NOABS (TR3EVT, TRnEVT_t, TR3EVT_ADDR);        /* "Trigger Event 3" */
SFR_NOABS (TR4ADR, TRnADR_t, TR4ADR_ADDR);        /* "Trigger Address 4" */
SFR_NOABS (TR4EVT, TRnEVT_t, TR4EVT_ADDR);        /* "Trigger Event 4" */
SFR_NOABS (TR5ADR, TRnADR_t, TR5ADR_ADDR);        /* "Trigger Address 5" */
SFR_NOABS (TR5EVT, TRnEVT_t, TR5EVT_ADDR);        /* "Trigger Event 5" */
SFR_NOABS (TR6ADR, TRnADR_t, TR6ADR_ADDR);        /* "Trigger Address 6" */
SFR_NOABS (TR6EVT, TRnEVT_t, TR6EVT_ADDR);        /* "Trigger Event 6" */
SFR_NOABS (TR7ADR, TRnADR_t, TR7ADR_ADDR);        /* "Trigger Address 7" */
SFR_NOABS (TR7EVT, TRnEVT_t, TR7EVT_ADDR);        /* "Trigger Event 7" */
SFR_NOABS (TRIG_ACC, TRIG_ACC_t, TRIG_ACC_ADDR);  /* "Trigger Address x" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_CPU_H_ (block "CPU") */


