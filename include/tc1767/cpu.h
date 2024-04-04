/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "CPU" of TriCore TC1767 (147 SFRs) */

#include <tc1767/cpu/addr.h>

#include <tc1767/cpu/masks.h>
#include <tc1767/cpu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1767/cpu/types.h>
#include <tc1767/cpu/sharetypes.h>

#ifndef _HAVE_TRICORE_CPU_H_
#define _HAVE_TRICORE_CPU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (A0, An_t, A0_ADDR);                    /* "Address Register 0" */
SFR_NOABS (A1, An_t, A1_ADDR);                    /* "Address Register 1" */
SFR_NOABS (A10, An_t, A10_ADDR);                  /* "Address Register 10" */
SFR_NOABS (A11, An_t, A11_ADDR);                  /* "Address Register 11" */
SFR_NOABS (A12, An_t, A12_ADDR);                  /* "Address Register 12" */
SFR_NOABS (A13, An_t, A13_ADDR);                  /* "Address Register 13" */
SFR_NOABS (A14, An_t, A14_ADDR);                  /* "Address Register 14" */
SFR_NOABS (A15, An_t, A15_ADDR);                  /* "Address Register 15" */
SFR_NOABS (A2, An_t, A2_ADDR);                    /* "Address Register 2" */
SFR_NOABS (A3, An_t, A3_ADDR);                    /* "Address Register 3" */
SFR_NOABS (A4, An_t, A4_ADDR);                    /* "Address Register 4" */
SFR_NOABS (A5, An_t, A5_ADDR);                    /* "Address Register 5" */
SFR_NOABS (A6, An_t, A6_ADDR);                    /* "Address Register 6" */
SFR_NOABS (A7, An_t, A7_ADDR);                    /* "Address Register 7" */
SFR_NOABS (A8, An_t, A8_ADDR);                    /* "Address Register 8" */
SFR_NOABS (A9, An_t, A9_ADDR);                    /* "Address Register 9" */
SFR_NOABS (BIV, BIV_t, BIV_ADDR);                 /* "Base Interrupt Vector Table Pointer" */
SFR_NOABS (BMACON, BMACON_t, BMACON_ADDR);        /* "BIST Mode Access Control Register" */
SFR_NOABS (BTV, BTV_t, BTV_ADDR);                 /* "Base Trap Vector Table Pointer" */
SFR_NOABS (CCDIER, CCDIER_t, CCDIER_ADDR);        /* "Count of Corrected Data Integrity Errors Register" */
SFR_NOABS (CCNT, CCNT_t, CCNT_ADDR);              /* "CPU Clock Count Register" */
SFR_NOABS (CCPIER, CCPIER_t, CCPIER_ADDR);        /* "Count of Corrected Program Integrity Errors Register" */
SFR_NOABS (CCTRL, CCTRL_t, CCTRL_ADDR);           /* "Counter Control Register" */
SFR_NOABS (COMPAT, COMPAT_t, COMPAT_ADDR);        /* "Compatibility Control Register" */
SFR_NOABS (CPM0, CPMn_t, CPM0_ADDR);              /* "Code Protection Mode Register Set 0" */
SFR_NOABS (CPM1, CPMn_t, CPM1_ADDR);              /* "Code Protection Mode Register Set 1" */
SFR_NOABS (CPM2, CPMn_t, CPM2_ADDR);              /* "Code Protection Mode Register Set 2" */
SFR_NOABS (CPM3, CPMn_t, CPM3_ADDR);              /* "Code Protection Mode Register Set 3" */
SFR_NOABS (CPR0_0L, CPRn_mL_t, CPR0_0L_ADDR);     /* "Code Segment Protection Register Set 0, Range 0, Lower Boundary" */
SFR_NOABS (CPR0_0U, CPRn_mU_t, CPR0_0U_ADDR);     /* "Code Segment Protection Register Set 0, Range 0, Upper Boundary" */
SFR_NOABS (CPR0_1L, CPRn_mL_t, CPR0_1L_ADDR);     /* "Code Segment Protection Register Set 0, Range 1, Lower Boundary" */
SFR_NOABS (CPR0_1U, CPRn_mU_t, CPR0_1U_ADDR);     /* "Code Segment Protection Register Set 0, Range 1, Upper Boundary" */
SFR_NOABS (CPR1_0L, CPRn_mL_t, CPR1_0L_ADDR);     /* "Code Segment Protection Register Set 1, Range 0, Lower Boundary" */
SFR_NOABS (CPR1_0U, CPRn_mU_t, CPR1_0U_ADDR);     /* "Code Segment Protection Register Set 1, Range 0, Upper Boundary" */
SFR_NOABS (CPR1_1L, CPRn_mL_t, CPR1_1L_ADDR);     /* "Code Segment Protection Register Set 1, Range 1, Lower Boundary" */
SFR_NOABS (CPR1_1U, CPRn_mU_t, CPR1_1U_ADDR);     /* "Code Segment Protection Register Set 1, Range 1, Upper Boundary" */
SFR_NOABS (CPR2_0L, CPRn_mL_t, CPR2_0L_ADDR);     /* "Code Segment Protection Register Set 2, Range 0, Lower Boundary" */
SFR_NOABS (CPR2_0U, CPRn_mU_t, CPR2_0U_ADDR);     /* "Code Segment Protection Register Set 2, Range 0, Upper Boundary" */
SFR_NOABS (CPR2_1L, CPRn_mL_t, CPR2_1L_ADDR);     /* "Code Segment Protection Register Set 2, Range 1, Lower Boundary" */
SFR_NOABS (CPR2_1U, CPRn_mU_t, CPR2_1U_ADDR);     /* "Code Segment Protection Register Set 2, Range 1, Upper Boundary" */
SFR_NOABS (CPR3_0L, CPRn_mL_t, CPR3_0L_ADDR);     /* "Code Segment Protection Register Set 3, Range 0, Lower Boundary" */
SFR_NOABS (CPR3_0U, CPR3_mU_t, CPR3_0U_ADDR);     /* "Code Segment Protection Register Set 3, Range 0, Upper Boundary" */
SFR_NOABS (CPR3_1L, CPRn_mL_t, CPR3_1L_ADDR);     /* "Code Segment Protection Register Set 3, Range 1, Lower Boundary" */
SFR_NOABS (CPR3_1U, CPR3_mU_t, CPR3_1U_ADDR);     /* "Code Segment Protection Register Set 3, Range 1, Upper Boundary" */
SFR_NOABS (CPS_ID, CPS_ID_t, CPS_ID_ADDR);        /* "CPS Module Identification Register" */
SFR_NOABS (CPU_ID, CPU_ID_t, CPU_ID_ADDR);        /* "CPU Identification Register" */
SFR_NOABS (CPU_SBSRC, CPU_SBSRC_t, CPU_SBSRC_ADDR); /* "CPU Software Breakpoint Service Request Control Register" */
SFR_NOABS (CPU_SRC0, CPU_SRCm_t, CPU_SRC0_ADDR);  /* "CPU Service Request Control Register 0" */
SFR_NOABS (CPU_SRC1, CPU_SRCm_t, CPU_SRC1_ADDR);  /* "CPU Service Request Control Register 1" */
SFR_NOABS (CPU_SRC2, CPU_SRCm_t, CPU_SRC2_ADDR);  /* "CPU Service Request Control Register 2" */
SFR_NOABS (CPU_SRC3, CPU_SRCm_t, CPU_SRC3_ADDR);  /* "CPU Service Request Control Register 3" */
SFR_NOABS (CREVT, CREVT_t, CREVT_ADDR);           /* "External Event Register" */
SFR_NOABS (D0, Dn_t, D0_ADDR);                    /* "Data Register 0" */
SFR_NOABS (D1, Dn_t, D1_ADDR);                    /* "Data Register 1" */
SFR_NOABS (D10, Dn_t, D10_ADDR);                  /* "Data Register 10" */
SFR_NOABS (D11, Dn_t, D11_ADDR);                  /* "Data Register 11" */
SFR_NOABS (D12, Dn_t, D12_ADDR);                  /* "Data Register 12" */
SFR_NOABS (D13, Dn_t, D13_ADDR);                  /* "Data Register 13" */
SFR_NOABS (D14, Dn_t, D14_ADDR);                  /* "Data Register 14" */
SFR_NOABS (D15, Dn_t, D15_ADDR);                  /* "Data Register 15" */
SFR_NOABS (D2, Dn_t, D2_ADDR);                    /* "Data Register 2" */
SFR_NOABS (D3, Dn_t, D3_ADDR);                    /* "Data Register 3" */
SFR_NOABS (D4, Dn_t, D4_ADDR);                    /* "Data Register 4" */
SFR_NOABS (D5, Dn_t, D5_ADDR);                    /* "Data Register 5" */
SFR_NOABS (D6, Dn_t, D6_ADDR);                    /* "Data Register 6" */
SFR_NOABS (D7, Dn_t, D7_ADDR);                    /* "Data Register 7" */
SFR_NOABS (D8, Dn_t, D8_ADDR);                    /* "Data Register 8" */
SFR_NOABS (D9, Dn_t, D9_ADDR);                    /* "Data Register 9" */
SFR_NOABS (DBGSR, DBGSR_t, DBGSR_ADDR);           /* "Debug Status Register" */
SFR_NOABS (DBGTCR, DBGTCR_t, DBGTCR_ADDR);        /* "Debug Trap Control Register" */
SFR_NOABS (DCX, DCX_t, DCX_ADDR);                 /* "Debug Context Save Area Pointer Register" */
SFR_NOABS (DIEAR, DIEAR_t, DIEAR_ADDR);           /* "Data Integrity Error Address Register" */
SFR_NOABS (DIETR, DIETR_t, DIETR_ADDR);           /* "Data Integrity Error Trap Register" */
SFR_NOABS (DMI_ATR, DMI_ATR_t, DMI_ATR_ADDR);     /* "DMI Asynchronous Trap Flag Register" */
SFR_NOABS (DMI_CON, DMI_CON_t, DMI_CON_ADDR);     /* "DMI Control Register" */
SFR_NOABS (DMI_ID, DMI_ID_t, DMI_ID_ADDR);        /* "DMI Identification Register" */
SFR_NOABS (DMI_STR, DMI_STR_t, DMI_STR_ADDR);     /* "DMI Synchronous Trap Flag Register" */
SFR_NOABS (DMS, DMS_t, DMS_ADDR);                 /* "Debug Monitor Start Address Register" */
SFR_NOABS (DPM0, DPMn_t, DPM0_ADDR);              /* "Data Protection Mode Register Set 0" */
SFR_NOABS (DPM1, DPMn_t, DPM1_ADDR);              /* "Data Protection Mode Register Set 1" */
SFR_NOABS (DPM2, DPMn_t, DPM2_ADDR);              /* "Data Protection Mode Register Set 2" */
SFR_NOABS (DPM3, DPMn_t, DPM3_ADDR);              /* "Data Protection Mode Register Set 3" */
SFR_NOABS (DPR0_0L, DPRn_mL_t, DPR0_0L_ADDR);     /* "Data Segment Protection Register Set 0, Range 0, Lower Boundary" */
SFR_NOABS (DPR0_0U, DPRn_mU_t, DPR0_0U_ADDR);     /* "Data Segment Protection Register Set 0, Range 0, Upper Boundary" */
SFR_NOABS (DPR0_1L, DPRn_mL_t, DPR0_1L_ADDR);     /* "Data Segment Protection Register Set 0, Range 1, Lower Boundary" */
SFR_NOABS (DPR0_1U, DPRn_mU_t, DPR0_1U_ADDR);     /* "Data Segment Protection Register Set 0, Range 1, Upper Boundary" */
SFR_NOABS (DPR0_2L, DPRn_mL_t, DPR0_2L_ADDR);     /* "Data Segment Protection Register Set 0, Range 2, Lower Boundary" */
SFR_NOABS (DPR0_2U, DPRn_mU_t, DPR0_2U_ADDR);     /* "Data Segment Protection Register Set 0, Range 2, Upper Boundary" */
SFR_NOABS (DPR0_3L, DPRn_mL_t, DPR0_3L_ADDR);     /* "Data Segment Protection Register Set 0, Range 3, Lower Boundary" */
SFR_NOABS (DPR0_3U, DPRn_mU_t, DPR0_3U_ADDR);     /* "Data Segment Protection Register Set 0, Range 3, Upper Boundary" */
SFR_NOABS (DPR1_0L, DPRn_mL_t, DPR1_0L_ADDR);     /* "Data Segment Protection Register Set 1, Range 0, Lower Boundary" */
SFR_NOABS (DPR1_0U, DPRn_mU_t, DPR1_0U_ADDR);     /* "Data Segment Protection Register Set 1, Range 0, Upper Boundary" */
SFR_NOABS (DPR1_1L, DPRn_mL_t, DPR1_1L_ADDR);     /* "Data Segment Protection Register Set 1, Range 1, Lower Boundary" */
SFR_NOABS (DPR1_1U, DPRn_mU_t, DPR1_1U_ADDR);     /* "Data Segment Protection Register Set 1, Range 1, Upper Boundary" */
SFR_NOABS (DPR1_2L, DPRn_mL_t, DPR1_2L_ADDR);     /* "Data Segment Protection Register Set 1, Range 2, Lower Boundary" */
SFR_NOABS (DPR1_2U, DPRn_mU_t, DPR1_2U_ADDR);     /* "Data Segment Protection Register Set 1, Range 2, Upper Boundary" */
SFR_NOABS (DPR1_3L, DPRn_mL_t, DPR1_3L_ADDR);     /* "Data Segment Protection Register Set 1, Range 3, Lower Boundary" */
SFR_NOABS (DPR1_3U, DPRn_mU_t, DPR1_3U_ADDR);     /* "Data Segment Protection Register Set 1, Range 3, Upper Boundary" */
SFR_NOABS (DPR2_0L, DPRn_mL_t, DPR2_0L_ADDR);     /* "Data Segment Protection Register Set 2, Range 0, Lower Boundary" */
SFR_NOABS (DPR2_0U, DPRn_mU_t, DPR2_0U_ADDR);     /* "Data Segment Protection Register Set 2, Range 0, Upper Boundary" */
SFR_NOABS (DPR2_1L, DPRn_mL_t, DPR2_1L_ADDR);     /* "Data Segment Protection Register Set 2, Range 1, Lower Boundary" */
SFR_NOABS (DPR2_1U, DPRn_mU_t, DPR2_1U_ADDR);     /* "Data Segment Protection Register Set 2, Range 1, Upper Boundary" */
SFR_NOABS (DPR2_2L, DPRn_mL_t, DPR2_2L_ADDR);     /* "Data Segment Protection Register Set 2, Range 2, Lower Boundary" */
SFR_NOABS (DPR2_2U, DPRn_mU_t, DPR2_2U_ADDR);     /* "Data Segment Protection Register Set 2, Range 2, Upper Boundary" */
SFR_NOABS (DPR2_3L, DPRn_mL_t, DPR2_3L_ADDR);     /* "Data Segment Protection Register Set 2, Range 3, Lower Boundary" */
SFR_NOABS (DPR2_3U, DPRn_mU_t, DPR2_3U_ADDR);     /* "Data Segment Protection Register Set 2, Range 3, Upper Boundary" */
SFR_NOABS (DPR3_0L, DPRn_mL_t, DPR3_0L_ADDR);     /* "Data Segment Protection Register Set 3, Range 0, Lower Boundary" */
SFR_NOABS (DPR3_0U, DPRn_mU_t, DPR3_0U_ADDR);     /* "Data Segment Protection Register Set 3, Range 0, Upper Boundary" */
SFR_NOABS (DPR3_1L, DPRn_mL_t, DPR3_1L_ADDR);     /* "Data Segment Protection Register Set 3, Range 1, Lower Boundary" */
SFR_NOABS (DPR3_1U, DPRn_mU_t, DPR3_1U_ADDR);     /* "Data Segment Protection Register Set 3, Range 1, Upper Boundary" */
SFR_NOABS (DPR3_2L, DPRn_mL_t, DPR3_2L_ADDR);     /* "Data Segment Protection Register Set 3, Range 2, Lower Boundary" */
SFR_NOABS (DPR3_2U, DPRn_mU_t, DPR3_2U_ADDR);     /* "Data Segment Protection Register Set 3, Range 2, Upper Boundary" */
SFR_NOABS (DPR3_3L, DPRn_mL_t, DPR3_3L_ADDR);     /* "Data Segment Protection Register Set 3, Range 3, Lower Boundary" */
SFR_NOABS (DPR3_3U, DPRn_mU_t, DPR3_3U_ADDR);     /* "Data Segment Protection Register Set 3, Range 3, Upper Boundary" */
SFR_NOABS (EXEVT, EXEVT_t, EXEVT_ADDR);           /* "External Event Register" */
SFR_NOABS (FCX, FCX_t, FCX_ADDR);                 /* "Free CSA List Head Pointer" */
SFR_NOABS (FPU_ID, FPU_ID_t, FPU_ID_ADDR);        /* "Trapping Identification Register" */
SFR_NOABS (FPU_TRAP_CON, FPU_TRAP_CON_t, FPU_TRAP_CON_ADDR); /* "Trap Control Register" */
SFR_NOABS (FPU_TRAP_OPC, FPU_TRAP_OPC_t, FPU_TRAP_OPC_ADDR); /* "Trapping Instruction Opcode Register" */
SFR_NOABS (FPU_TRAP_PC, FPU_TRAP_PC_t, FPU_TRAP_PC_ADDR); /* "Trapping Instruction Program Counter Register" */
SFR_NOABS (FPU_TRAP_SRC1, FPU_TRAP_SRCm_t, FPU_TRAP_SRC1_ADDR); /* "Trapping Instruction Operand Register" */
SFR_NOABS (FPU_TRAP_SRC2, FPU_TRAP_SRCm_t, FPU_TRAP_SRC2_ADDR); /* "Trapping Instruction Operand Register" */
SFR_NOABS (FPU_TRAP_SRC3, FPU_TRAP_SRCm_t, FPU_TRAP_SRC3_ADDR); /* "Trapping Instruction Operand Register" */
SFR_NOABS (ICNT, ICNT_t, ICNT_ADDR);              /* "Instruction Count Register" */
SFR_NOABS (ICR, ICR_t, ICR_ADDR);                 /* "Interrupt Control Register" */
SFR_NOABS (ISP, ISP_t, ISP_ADDR);                 /* "Interrupt Stack Pointer" */
SFR_NOABS (LCX, LCX_t, LCX_ADDR);                 /* "Free CSA List Limit Pointer" */
SFR_NOABS (M1CNT, MnCNT_t, M1CNT_ADDR);           /* "Multi-Count Register 1" */
SFR_NOABS (M2CNT, MnCNT_t, M2CNT_ADDR);           /* "Multi-Count Register 2" */
SFR_NOABS (M3CNT, MnCNT_t, M3CNT_ADDR);           /* "Multi-Count Register 3" */
SFR_NOABS (MIECON, MIECON_t, MIECON_ADDR);        /* "Memory Integrity Error Control Register" */
SFR_NOABS (MMU_CON, MMU_CON_t, MMU_CON_ADDR);     /* "MMU Control Register" */
SFR_NOABS (PC, PC_t, PC_ADDR);                    /* "Program Counter" */
SFR_NOABS (PCXI, PCXI_t, PCXI_ADDR);              /* "Previous Context Information Register" */
SFR_NOABS (PIEAR, PIEAR_t, PIEAR_ADDR);           /* "Program Integrity Error Address Register" */
SFR_NOABS (PIETR, PIETR_t, PIETR_ADDR);           /* "Program Integrity Error Trap Register" */
SFR_NOABS (PMI_CON0, PMI_CON0_t, PMI_CON0_ADDR);  /* "PMI Control Register 0" */
SFR_NOABS (PMI_CON1, PMI_CON1_t, PMI_CON1_ADDR);  /* "PMI Control Register 1" */
SFR_NOABS (PMI_CON2, PMI_CON2_t, PMI_CON2_ADDR);  /* "PMI Control Register 2" */
SFR_NOABS (PMI_ID, PMI_ID_t, PMI_ID_ADDR);        /* "PMI Identification Register" */
SFR_NOABS (PMI_STR, PMI_STR_t, PMI_STR_ADDR);     /* "PMI Synchronous Trap Register" */
SFR_NOABS (PSW, PSW_t, PSW_ADDR);                 /* "Program Status Word" */
SFR_NOABS (SMACON, SMACON_t, SMACON_ADDR);        /* "SIST Mode Access Control Register" */
SFR_NOABS (SWEVT, SWEVT_t, SWEVT_ADDR);           /* "External Event Register" */
SFR_NOABS (SYSCON, SYSCON_t, SYSCON_ADDR);        /* "System Configuration Register" */
SFR_NOABS (TR0EVT, TRnEVT_t, TR0EVT_ADDR);        /* "Trigger Event 0 Register" */
SFR_NOABS (TR1EVT, TRnEVT_t, TR1EVT_ADDR);        /* "Trigger Event 1 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_CPU_H_ (block "CPU") */


