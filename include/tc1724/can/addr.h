/* (c) HighTec EDV-Systeme GmbH */

/* block "MultiCAN" of TriCore TC1724 (601 SFRs) */

#ifndef _HAVE_TRICORE_CAN_ADDRESSES_H_
#define _HAVE_TRICORE_CAN_ADDRESSES_H_

#define CAN_CLC_ADDR          0xF0004000     /* "CAN Clock Control Register" */
#define CAN_ID_ADDR           0xF0004008     /* "Module Identification Register" */
#define CAN_FDR_ADDR          0xF000400C     /* "CAN Fractional Divider Register" */
#define CAN_SRC15_ADDR        0xF00040C0     /* "CAN Service Request Control Register 15" */
#define CAN_SRC14_ADDR        0xF00040C4     /* "CAN Service Request Control Register 14" */
#define CAN_SRC13_ADDR        0xF00040C8     /* "CAN Service Request Control Register 13" */
#define CAN_SRC12_ADDR        0xF00040CC     /* "CAN Service Request Control Register 12" */
#define CAN_SRC11_ADDR        0xF00040D0     /* "CAN Service Request Control Register 11" */
#define CAN_SRC10_ADDR        0xF00040D4     /* "CAN Service Request Control Register 10" */
#define CAN_SRC9_ADDR         0xF00040D8     /* "CAN Service Request Control Register 9" */
#define CAN_SRC8_ADDR         0xF00040DC     /* "CAN Service Request Control Register 8" */
#define CAN_SRC7_ADDR         0xF00040E0     /* "CAN Service Request Control Register 7" */
#define CAN_SRC6_ADDR         0xF00040E4     /* "CAN Service Request Control Register 6" */
#define CAN_SRC5_ADDR         0xF00040E8     /* "CAN Service Request Control Register 5" */
#define CAN_SRC4_ADDR         0xF00040EC     /* "CAN Service Request Control Register 4" */
#define CAN_SRC3_ADDR         0xF00040F0     /* "CAN Service Request Control Register 3" */
#define CAN_SRC2_ADDR         0xF00040F4     /* "CAN Service Request Control Register 2" */
#define CAN_SRC1_ADDR         0xF00040F8     /* "CAN Service Request Control Register 1" */
#define CAN_SRC0_ADDR         0xF00040FC     /* "CAN Service Request Control Register 0" */
#define CAN_LIST0_ADDR        0xF0004100     /* "List Register 0" */
#define CAN_LIST1_ADDR        0xF0004104     /* "List Register 1" */
#define CAN_LIST2_ADDR        0xF0004108     /* "List Register 2" */
#define CAN_LIST3_ADDR        0xF000410C     /* "List Register 3" */
#define CAN_LIST4_ADDR        0xF0004110     /* "List Register 4" */
#define CAN_LIST5_ADDR        0xF0004114     /* "List Register 5" */
#define CAN_LIST6_ADDR        0xF0004118     /* "List Register 6" */
#define CAN_LIST7_ADDR        0xF000411C     /* "List Register 7" */
#define CAN_MSPND0_ADDR       0xF0004140     /* "Message Pending Register 0" */
#define CAN_MSPND1_ADDR       0xF0004144     /* "Message Pending Register 1" */
#define CAN_MSPND2_ADDR       0xF0004148     /* "Message Pending Register 2" */
#define CAN_MSPND3_ADDR       0xF000414C     /* "Message Pending Register 3" */
#define CAN_MSPND4_ADDR       0xF0004150     /* "Message Pending Register 4" */
#define CAN_MSPND5_ADDR       0xF0004154     /* "Message Pending Register 5" */
#define CAN_MSPND6_ADDR       0xF0004158     /* "Message Pending Register 6" */
#define CAN_MSPND7_ADDR       0xF000415C     /* "Message Pending Register 7" */
#define CAN_MSID0_ADDR        0xF0004180     /* "Message Index Register 0" */
#define CAN_MSID1_ADDR        0xF0004184     /* "Message Index Register 1" */
#define CAN_MSID2_ADDR        0xF0004188     /* "Message Index Register 2" */
#define CAN_MSID3_ADDR        0xF000418C     /* "Message Index Register 3" */
#define CAN_MSID4_ADDR        0xF0004190     /* "Message Index Register 4" */
#define CAN_MSID5_ADDR        0xF0004194     /* "Message Index Register 5" */
#define CAN_MSID6_ADDR        0xF0004198     /* "Message Index Register 6" */
#define CAN_MSID7_ADDR        0xF000419C     /* "Message Index Register 7" */
#define CAN_MSIMASK_ADDR      0xF00041C0     /* "Message Index Mask Register" */
#define CAN_PANCTR_ADDR       0xF00041C4     /* "Panel Control Register" */
#define CAN_MCR_ADDR          0xF00041C8     /* "Module Control Register" */
#define CAN_MITR_ADDR         0xF00041CC     /* "Module Interrupt Trigger Register" */
#define CAN_NCR0_ADDR         0xF0004200     /* "Node 0 Control Register" */
#define CAN_NSR0_ADDR         0xF0004204     /* "Node 0 Status Register" */
#define CAN_NIPR0_ADDR        0xF0004208     /* "Node 0 Interrupt Pointer Register" */
#define CAN_NPCR0_ADDR        0xF000420C     /* "Node 0 Port Control Register" */
#define CAN_NBTR0_ADDR        0xF0004210     /* "Node 0 Bit Timing Register" */
#define CAN_NECNT0_ADDR       0xF0004214     /* "Node 0 Error Counter Register" */
#define CAN_NFCR0_ADDR        0xF0004218     /* "Node 0 Frame Counter Register" */
#define CAN_LTR_ADDR          0xF0004280     /* "Local Time Register" */
#define CAN_SYNMR_ADDR        0xF0004284     /* "Synchronization Mark Register" */
#define CAN_REFMR_ADDR        0xF0004288     /* "Reference Mark Register" */
#define CAN_LREFMR_ADDR       0xF000428C     /* "Last Reference Mark Register" */
#define CAN_TURR_ADDR         0xF0004290     /* "Time Unit Ratio Register" */
#define CAN_CYCTMR_ADDR       0xF0004294     /* "Cycle Time Register" */
#define CAN_LOR_ADDR          0xF0004298     /* "Local Offset Register" */
#define CAN_GMR_ADDR          0xF000429C     /* "Global Mark Register" */
#define CAN_LGMR_ADDR         0xF00042A0     /* "Last Global Mark Register" */
#define CAN_AWDR_ADDR         0xF00042A4     /* "Application Watchdog Register" */
#define CAN_TTCR_ADDR         0xF00042C0     /* "Time Trigger Control Register" */
#define CAN_TTCFGR_ADDR       0xF00042C4     /* "Time Trigger Configuration Register" */
#define CAN_TTSR_ADDR         0xF00042C8     /* "Time Trigger Status Register" */
#define CAN_TTFMR_ADDR        0xF00042CC     /* "Time Trigger Flag Modification Register" */
#define CAN_TTIRR_ADDR        0xF00042D0     /* "Time Trigger Interrupt Request Register" */
#define CAN_TTIER_ADDR        0xF00042D4     /* "Time Trigger Interrupt Enable Register" */
#define CAN_TTINPR_ADDR       0xF00042D8     /* "Time Trigger Interrupt Node Pointer Register" */
#define CAN_STSRL_ADDR        0xF00042F0     /* "Scheduler Timing Status Register Low" */
#define CAN_STSRH_ADDR        0xF00042F4     /* "Scheduler Timing Status Register High" */
#define CAN_SISR_ADDR         0xF00042F8     /* "Scheduler Instruction Status Register" */
#define CAN_NCR1_ADDR         0xF0004300     /* "Node 1 Control Register" */
#define CAN_NSR1_ADDR         0xF0004304     /* "Node 1 Status Register" */
#define CAN_NIPR1_ADDR        0xF0004308     /* "Node 1 Interrupt Pointer Register" */
#define CAN_NPCR1_ADDR        0xF000430C     /* "Node 1 Port Control Register" */
#define CAN_NBTR1_ADDR        0xF0004310     /* "Node 1 Bit Timing Register" */
#define CAN_NECNT1_ADDR       0xF0004314     /* "Node 1 Error Counter Register" */
#define CAN_NFCR1_ADDR        0xF0004318     /* "Node 1 Frame Counter Register" */
#define CAN_NCR2_ADDR         0xF0004400     /* "Node 2 Control Register" */
#define CAN_NSR2_ADDR         0xF0004404     /* "Node 2 Status Register" */
#define CAN_NIPR2_ADDR        0xF0004408     /* "Node 2 Interrupt Pointer Register" */
#define CAN_NPCR2_ADDR        0xF000440C     /* "Node 2 Port Control Register" */
#define CAN_NBTR2_ADDR        0xF0004410     /* "Node 2 Bit Timing Register" */
#define CAN_NECNT2_ADDR       0xF0004414     /* "Node 2 Error Counter Register" */
#define CAN_NFCR2_ADDR        0xF0004418     /* "Node 2 Frame Counter Register" */
#define CAN_MOFCR0_ADDR       0xF0005000     /* "Message Object 0 Function Control Register" */
#define CAN_MOFGPR0_ADDR      0xF0005004     /* "Message Object 0 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR0_ADDR       0xF0005008     /* "Message Object 0 Interrupt Pointer Register" */
#define CAN_MOAMR0_ADDR       0xF000500C     /* "Message Object 0 Acceptance Mask Register" */
#define CAN_MODATAL0_ADDR     0xF0005010     /* "Message Object 0 Data Register Low" */
#define CAN_MODATAH0_ADDR     0xF0005014     /* "Message Object 0 Data Register High" */
#define CAN_MOAR0_ADDR        0xF0005018     /* "Message Object 0 Arbitration Register" */
#define CAN_MOCTR0_ADDR       0xF000501C     /* "Message Object 0" */
#define CAN_MOFCR1_ADDR       0xF0005020     /* "Message Object 1 Function Control Register" */
#define CAN_MOFGPR1_ADDR      0xF0005024     /* "Message Object 1 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR1_ADDR       0xF0005028     /* "Message Object 1 Interrupt Pointer Register" */
#define CAN_MOAMR1_ADDR       0xF000502C     /* "Message Object 1 Acceptance Mask Register" */
#define CAN_MODATAL1_ADDR     0xF0005030     /* "Message Object 1 Data Register Low" */
#define CAN_MODATAH1_ADDR     0xF0005034     /* "Message Object 1 Data Register High" */
#define CAN_MOAR1_ADDR        0xF0005038     /* "Message Object 1 Arbitration Register" */
#define CAN_MOCTR1_ADDR       0xF000503C     /* "Message Object 1" */
#define CAN_MOFCR2_ADDR       0xF0005040     /* "Message Object 2 Function Control Register" */
#define CAN_MOFGPR2_ADDR      0xF0005044     /* "Message Object 2 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR2_ADDR       0xF0005048     /* "Message Object 2 Interrupt Pointer Register" */
#define CAN_MOAMR2_ADDR       0xF000504C     /* "Message Object 2 Acceptance Mask Register" */
#define CAN_MODATAL2_ADDR     0xF0005050     /* "Message Object 2 Data Register Low" */
#define CAN_MODATAH2_ADDR     0xF0005054     /* "Message Object 2 Data Register High" */
#define CAN_MOAR2_ADDR        0xF0005058     /* "Message Object 2 Arbitration Register" */
#define CAN_MOCTR2_ADDR       0xF000505C     /* "Message Object 2" */
#define CAN_MOFCR3_ADDR       0xF0005060     /* "Message Object 3 Function Control Register" */
#define CAN_MOFGPR3_ADDR      0xF0005064     /* "Message Object 3 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR3_ADDR       0xF0005068     /* "Message Object 3 Interrupt Pointer Register" */
#define CAN_MOAMR3_ADDR       0xF000506C     /* "Message Object 3 Acceptance Mask Register" */
#define CAN_MODATAL3_ADDR     0xF0005070     /* "Message Object 3 Data Register Low" */
#define CAN_MODATAH3_ADDR     0xF0005074     /* "Message Object 3 Data Register High" */
#define CAN_MOAR3_ADDR        0xF0005078     /* "Message Object 3 Arbitration Register" */
#define CAN_MOCTR3_ADDR       0xF000507C     /* "Message Object 3" */
#define CAN_MOFCR4_ADDR       0xF0005080     /* "Message Object 4 Function Control Register" */
#define CAN_MOFGPR4_ADDR      0xF0005084     /* "Message Object 4 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR4_ADDR       0xF0005088     /* "Message Object 4 Interrupt Pointer Register" */
#define CAN_MOAMR4_ADDR       0xF000508C     /* "Message Object 4 Acceptance Mask Register" */
#define CAN_MODATAL4_ADDR     0xF0005090     /* "Message Object 4 Data Register Low" */
#define CAN_MODATAH4_ADDR     0xF0005094     /* "Message Object 4 Data Register High" */
#define CAN_MOAR4_ADDR        0xF0005098     /* "Message Object 4 Arbitration Register" */
#define CAN_MOCTR4_ADDR       0xF000509C     /* "Message Object 4" */
#define CAN_MOFCR5_ADDR       0xF00050A0     /* "Message Object 5 Function Control Register" */
#define CAN_MOFGPR5_ADDR      0xF00050A4     /* "Message Object 5 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR5_ADDR       0xF00050A8     /* "Message Object 5 Interrupt Pointer Register" */
#define CAN_MOAMR5_ADDR       0xF00050AC     /* "Message Object 5 Acceptance Mask Register" */
#define CAN_MODATAL5_ADDR     0xF00050B0     /* "Message Object 5 Data Register Low" */
#define CAN_MODATAH5_ADDR     0xF00050B4     /* "Message Object 5 Data Register High" */
#define CAN_MOAR5_ADDR        0xF00050B8     /* "Message Object 5 Arbitration Register" */
#define CAN_MOCTR5_ADDR       0xF00050BC     /* "Message Object 5" */
#define CAN_MOFCR6_ADDR       0xF00050C0     /* "Message Object 6 Function Control Register" */
#define CAN_MOFGPR6_ADDR      0xF00050C4     /* "Message Object 6 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR6_ADDR       0xF00050C8     /* "Message Object 6 Interrupt Pointer Register" */
#define CAN_MOAMR6_ADDR       0xF00050CC     /* "Message Object 6 Acceptance Mask Register" */
#define CAN_MODATAL6_ADDR     0xF00050D0     /* "Message Object 6 Data Register Low" */
#define CAN_MODATAH6_ADDR     0xF00050D4     /* "Message Object 6 Data Register High" */
#define CAN_MOAR6_ADDR        0xF00050D8     /* "Message Object 6 Arbitration Register" */
#define CAN_MOCTR6_ADDR       0xF00050DC     /* "Message Object 6" */
#define CAN_MOFCR7_ADDR       0xF00050E0     /* "Message Object 7 Function Control Register" */
#define CAN_MOFGPR7_ADDR      0xF00050E4     /* "Message Object 7 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR7_ADDR       0xF00050E8     /* "Message Object 7 Interrupt Pointer Register" */
#define CAN_MOAMR7_ADDR       0xF00050EC     /* "Message Object 7 Acceptance Mask Register" */
#define CAN_MODATAL7_ADDR     0xF00050F0     /* "Message Object 7 Data Register Low" */
#define CAN_MODATAH7_ADDR     0xF00050F4     /* "Message Object 7 Data Register High" */
#define CAN_MOAR7_ADDR        0xF00050F8     /* "Message Object 7 Arbitration Register" */
#define CAN_MOCTR7_ADDR       0xF00050FC     /* "Message Object 7" */
#define CAN_MOFCR8_ADDR       0xF0005100     /* "Message Object 8 Function Control Register" */
#define CAN_MOFGPR8_ADDR      0xF0005104     /* "Message Object 8 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR8_ADDR       0xF0005108     /* "Message Object 8 Interrupt Pointer Register" */
#define CAN_MOAMR8_ADDR       0xF000510C     /* "Message Object 8 Acceptance Mask Register" */
#define CAN_MODATAL8_ADDR     0xF0005110     /* "Message Object 8 Data Register Low" */
#define CAN_MODATAH8_ADDR     0xF0005114     /* "Message Object 8 Data Register High" */
#define CAN_MOAR8_ADDR        0xF0005118     /* "Message Object 8 Arbitration Register" */
#define CAN_MOCTR8_ADDR       0xF000511C     /* "Message Object 8" */
#define CAN_MOFCR9_ADDR       0xF0005120     /* "Message Object 9 Function Control Register" */
#define CAN_MOFGPR9_ADDR      0xF0005124     /* "Message Object 9 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR9_ADDR       0xF0005128     /* "Message Object 9 Interrupt Pointer Register" */
#define CAN_MOAMR9_ADDR       0xF000512C     /* "Message Object 9 Acceptance Mask Register" */
#define CAN_MODATAL9_ADDR     0xF0005130     /* "Message Object 9 Data Register Low" */
#define CAN_MODATAH9_ADDR     0xF0005134     /* "Message Object 9 Data Register High" */
#define CAN_MOAR9_ADDR        0xF0005138     /* "Message Object 9 Arbitration Register" */
#define CAN_MOCTR9_ADDR       0xF000513C     /* "Message Object 9" */
#define CAN_MOFCR10_ADDR      0xF0005140     /* "Message Object 10 Function Control Register" */
#define CAN_MOFGPR10_ADDR     0xF0005144     /* "Message Object 10 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR10_ADDR      0xF0005148     /* "Message Object 10 Interrupt Pointer Register" */
#define CAN_MOAMR10_ADDR      0xF000514C     /* "Message Object 10 Acceptance Mask Register" */
#define CAN_MODATAL10_ADDR    0xF0005150     /* "Message Object 10 Data Register Low" */
#define CAN_MODATAH10_ADDR    0xF0005154     /* "Message Object 10 Data Register High" */
#define CAN_MOAR10_ADDR       0xF0005158     /* "Message Object 10 Arbitration Register" */
#define CAN_MOCTR10_ADDR      0xF000515C     /* "Message Object 10" */
#define CAN_MOFCR11_ADDR      0xF0005160     /* "Message Object 11 Function Control Register" */
#define CAN_MOFGPR11_ADDR     0xF0005164     /* "Message Object 11 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR11_ADDR      0xF0005168     /* "Message Object 11 Interrupt Pointer Register" */
#define CAN_MOAMR11_ADDR      0xF000516C     /* "Message Object 11 Acceptance Mask Register" */
#define CAN_MODATAL11_ADDR    0xF0005170     /* "Message Object 11 Data Register Low" */
#define CAN_MODATAH11_ADDR    0xF0005174     /* "Message Object 11 Data Register High" */
#define CAN_MOAR11_ADDR       0xF0005178     /* "Message Object 11 Arbitration Register" */
#define CAN_MOCTR11_ADDR      0xF000517C     /* "Message Object 11" */
#define CAN_MOFCR12_ADDR      0xF0005180     /* "Message Object 12 Function Control Register" */
#define CAN_MOFGPR12_ADDR     0xF0005184     /* "Message Object 12 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR12_ADDR      0xF0005188     /* "Message Object 12 Interrupt Pointer Register" */
#define CAN_MOAMR12_ADDR      0xF000518C     /* "Message Object 12 Acceptance Mask Register" */
#define CAN_MODATAL12_ADDR    0xF0005190     /* "Message Object 12 Data Register Low" */
#define CAN_MODATAH12_ADDR    0xF0005194     /* "Message Object 12 Data Register High" */
#define CAN_MOAR12_ADDR       0xF0005198     /* "Message Object 12 Arbitration Register" */
#define CAN_MOCTR12_ADDR      0xF000519C     /* "Message Object 12" */
#define CAN_MOFCR13_ADDR      0xF00051A0     /* "Message Object 13 Function Control Register" */
#define CAN_MOFGPR13_ADDR     0xF00051A4     /* "Message Object 13 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR13_ADDR      0xF00051A8     /* "Message Object 13 Interrupt Pointer Register" */
#define CAN_MOAMR13_ADDR      0xF00051AC     /* "Message Object 13 Acceptance Mask Register" */
#define CAN_MODATAL13_ADDR    0xF00051B0     /* "Message Object 13 Data Register Low" */
#define CAN_MODATAH13_ADDR    0xF00051B4     /* "Message Object 13 Data Register High" */
#define CAN_MOAR13_ADDR       0xF00051B8     /* "Message Object 13 Arbitration Register" */
#define CAN_MOCTR13_ADDR      0xF00051BC     /* "Message Object 13" */
#define CAN_MOFCR14_ADDR      0xF00051C0     /* "Message Object 14 Function Control Register" */
#define CAN_MOFGPR14_ADDR     0xF00051C4     /* "Message Object 14 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR14_ADDR      0xF00051C8     /* "Message Object 14 Interrupt Pointer Register" */
#define CAN_MOAMR14_ADDR      0xF00051CC     /* "Message Object 14 Acceptance Mask Register" */
#define CAN_MODATAL14_ADDR    0xF00051D0     /* "Message Object 14 Data Register Low" */
#define CAN_MODATAH14_ADDR    0xF00051D4     /* "Message Object 14 Data Register High" */
#define CAN_MOAR14_ADDR       0xF00051D8     /* "Message Object 14 Arbitration Register" */
#define CAN_MOCTR14_ADDR      0xF00051DC     /* "Message Object 14" */
#define CAN_MOFCR15_ADDR      0xF00051E0     /* "Message Object 15 Function Control Register" */
#define CAN_MOFGPR15_ADDR     0xF00051E4     /* "Message Object 15 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR15_ADDR      0xF00051E8     /* "Message Object 15 Interrupt Pointer Register" */
#define CAN_MOAMR15_ADDR      0xF00051EC     /* "Message Object 15 Acceptance Mask Register" */
#define CAN_MODATAL15_ADDR    0xF00051F0     /* "Message Object 15 Data Register Low" */
#define CAN_MODATAH15_ADDR    0xF00051F4     /* "Message Object 15 Data Register High" */
#define CAN_MOAR15_ADDR       0xF00051F8     /* "Message Object 15 Arbitration Register" */
#define CAN_MOCTR15_ADDR      0xF00051FC     /* "Message Object 15" */
#define CAN_MOFCR16_ADDR      0xF0005200     /* "Message Object 16 Function Control Register" */
#define CAN_MOFGPR16_ADDR     0xF0005204     /* "Message Object 16 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR16_ADDR      0xF0005208     /* "Message Object 16 Interrupt Pointer Register" */
#define CAN_MOAMR16_ADDR      0xF000520C     /* "Message Object 16 Acceptance Mask Register" */
#define CAN_MODATAL16_ADDR    0xF0005210     /* "Message Object 16 Data Register Low" */
#define CAN_MODATAH16_ADDR    0xF0005214     /* "Message Object 16 Data Register High" */
#define CAN_MOAR16_ADDR       0xF0005218     /* "Message Object 16 Arbitration Register" */
#define CAN_MOCTR16_ADDR      0xF000521C     /* "Message Object 16" */
#define CAN_MOFCR17_ADDR      0xF0005220     /* "Message Object 17 Function Control Register" */
#define CAN_MOFGPR17_ADDR     0xF0005224     /* "Message Object 17 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR17_ADDR      0xF0005228     /* "Message Object 17 Interrupt Pointer Register" */
#define CAN_MOAMR17_ADDR      0xF000522C     /* "Message Object 17 Acceptance Mask Register" */
#define CAN_MODATAL17_ADDR    0xF0005230     /* "Message Object 17 Data Register Low" */
#define CAN_MODATAH17_ADDR    0xF0005234     /* "Message Object 17 Data Register High" */
#define CAN_MOAR17_ADDR       0xF0005238     /* "Message Object 17 Arbitration Register" */
#define CAN_MOCTR17_ADDR      0xF000523C     /* "Message Object 17" */
#define CAN_MOFCR18_ADDR      0xF0005240     /* "Message Object 18 Function Control Register" */
#define CAN_MOFGPR18_ADDR     0xF0005244     /* "Message Object 18 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR18_ADDR      0xF0005248     /* "Message Object 18 Interrupt Pointer Register" */
#define CAN_MOAMR18_ADDR      0xF000524C     /* "Message Object 18 Acceptance Mask Register" */
#define CAN_MODATAL18_ADDR    0xF0005250     /* "Message Object 18 Data Register Low" */
#define CAN_MODATAH18_ADDR    0xF0005254     /* "Message Object 18 Data Register High" */
#define CAN_MOAR18_ADDR       0xF0005258     /* "Message Object 18 Arbitration Register" */
#define CAN_MOCTR18_ADDR      0xF000525C     /* "Message Object 18" */
#define CAN_MOFCR19_ADDR      0xF0005260     /* "Message Object 19 Function Control Register" */
#define CAN_MOFGPR19_ADDR     0xF0005264     /* "Message Object 19 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR19_ADDR      0xF0005268     /* "Message Object 19 Interrupt Pointer Register" */
#define CAN_MOAMR19_ADDR      0xF000526C     /* "Message Object 19 Acceptance Mask Register" */
#define CAN_MODATAL19_ADDR    0xF0005270     /* "Message Object 19 Data Register Low" */
#define CAN_MODATAH19_ADDR    0xF0005274     /* "Message Object 19 Data Register High" */
#define CAN_MOAR19_ADDR       0xF0005278     /* "Message Object 19 Arbitration Register" */
#define CAN_MOCTR19_ADDR      0xF000527C     /* "Message Object 19" */
#define CAN_MOFCR20_ADDR      0xF0005280     /* "Message Object 20 Function Control Register" */
#define CAN_MOFGPR20_ADDR     0xF0005284     /* "Message Object 20 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR20_ADDR      0xF0005288     /* "Message Object 20 Interrupt Pointer Register" */
#define CAN_MOAMR20_ADDR      0xF000528C     /* "Message Object 20 Acceptance Mask Register" */
#define CAN_MODATAL20_ADDR    0xF0005290     /* "Message Object 20 Data Register Low" */
#define CAN_MODATAH20_ADDR    0xF0005294     /* "Message Object 20 Data Register High" */
#define CAN_MOAR20_ADDR       0xF0005298     /* "Message Object 20 Arbitration Register" */
#define CAN_MOCTR20_ADDR      0xF000529C     /* "Message Object 20" */
#define CAN_MOFCR21_ADDR      0xF00052A0     /* "Message Object 21 Function Control Register" */
#define CAN_MOFGPR21_ADDR     0xF00052A4     /* "Message Object 21 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR21_ADDR      0xF00052A8     /* "Message Object 21 Interrupt Pointer Register" */
#define CAN_MOAMR21_ADDR      0xF00052AC     /* "Message Object 21 Acceptance Mask Register" */
#define CAN_MODATAL21_ADDR    0xF00052B0     /* "Message Object 21 Data Register Low" */
#define CAN_MODATAH21_ADDR    0xF00052B4     /* "Message Object 21 Data Register High" */
#define CAN_MOAR21_ADDR       0xF00052B8     /* "Message Object 21 Arbitration Register" */
#define CAN_MOCTR21_ADDR      0xF00052BC     /* "Message Object 21" */
#define CAN_MOFCR22_ADDR      0xF00052C0     /* "Message Object 22 Function Control Register" */
#define CAN_MOFGPR22_ADDR     0xF00052C4     /* "Message Object 22 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR22_ADDR      0xF00052C8     /* "Message Object 22 Interrupt Pointer Register" */
#define CAN_MOAMR22_ADDR      0xF00052CC     /* "Message Object 22 Acceptance Mask Register" */
#define CAN_MODATAL22_ADDR    0xF00052D0     /* "Message Object 22 Data Register Low" */
#define CAN_MODATAH22_ADDR    0xF00052D4     /* "Message Object 22 Data Register High" */
#define CAN_MOAR22_ADDR       0xF00052D8     /* "Message Object 22 Arbitration Register" */
#define CAN_MOCTR22_ADDR      0xF00052DC     /* "Message Object 22" */
#define CAN_MOFCR23_ADDR      0xF00052E0     /* "Message Object 23 Function Control Register" */
#define CAN_MOFGPR23_ADDR     0xF00052E4     /* "Message Object 23 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR23_ADDR      0xF00052E8     /* "Message Object 23 Interrupt Pointer Register" */
#define CAN_MOAMR23_ADDR      0xF00052EC     /* "Message Object 23 Acceptance Mask Register" */
#define CAN_MODATAL23_ADDR    0xF00052F0     /* "Message Object 23 Data Register Low" */
#define CAN_MODATAH23_ADDR    0xF00052F4     /* "Message Object 23 Data Register High" */
#define CAN_MOAR23_ADDR       0xF00052F8     /* "Message Object 23 Arbitration Register" */
#define CAN_MOCTR23_ADDR      0xF00052FC     /* "Message Object 23" */
#define CAN_MOFCR24_ADDR      0xF0005300     /* "Message Object 24 Function Control Register" */
#define CAN_MOFGPR24_ADDR     0xF0005304     /* "Message Object 24 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR24_ADDR      0xF0005308     /* "Message Object 24 Interrupt Pointer Register" */
#define CAN_MOAMR24_ADDR      0xF000530C     /* "Message Object 24 Acceptance Mask Register" */
#define CAN_MODATAL24_ADDR    0xF0005310     /* "Message Object 24 Data Register Low" */
#define CAN_MODATAH24_ADDR    0xF0005314     /* "Message Object 24 Data Register High" */
#define CAN_MOAR24_ADDR       0xF0005318     /* "Message Object 24 Arbitration Register" */
#define CAN_MOCTR24_ADDR      0xF000531C     /* "Message Object 24" */
#define CAN_MOFCR25_ADDR      0xF0005320     /* "Message Object 25 Function Control Register" */
#define CAN_MOFGPR25_ADDR     0xF0005324     /* "Message Object 25 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR25_ADDR      0xF0005328     /* "Message Object 25 Interrupt Pointer Register" */
#define CAN_MOAMR25_ADDR      0xF000532C     /* "Message Object 25 Acceptance Mask Register" */
#define CAN_MODATAL25_ADDR    0xF0005330     /* "Message Object 25 Data Register Low" */
#define CAN_MODATAH25_ADDR    0xF0005334     /* "Message Object 25 Data Register High" */
#define CAN_MOAR25_ADDR       0xF0005338     /* "Message Object 25 Arbitration Register" */
#define CAN_MOCTR25_ADDR      0xF000533C     /* "Message Object 25" */
#define CAN_MOFCR26_ADDR      0xF0005340     /* "Message Object 26 Function Control Register" */
#define CAN_MOFGPR26_ADDR     0xF0005344     /* "Message Object 26 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR26_ADDR      0xF0005348     /* "Message Object 26 Interrupt Pointer Register" */
#define CAN_MOAMR26_ADDR      0xF000534C     /* "Message Object 26 Acceptance Mask Register" */
#define CAN_MODATAL26_ADDR    0xF0005350     /* "Message Object 26 Data Register Low" */
#define CAN_MODATAH26_ADDR    0xF0005354     /* "Message Object 26 Data Register High" */
#define CAN_MOAR26_ADDR       0xF0005358     /* "Message Object 26 Arbitration Register" */
#define CAN_MOCTR26_ADDR      0xF000535C     /* "Message Object 26" */
#define CAN_MOFCR27_ADDR      0xF0005360     /* "Message Object 27 Function Control Register" */
#define CAN_MOFGPR27_ADDR     0xF0005364     /* "Message Object 27 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR27_ADDR      0xF0005368     /* "Message Object 27 Interrupt Pointer Register" */
#define CAN_MOAMR27_ADDR      0xF000536C     /* "Message Object 27 Acceptance Mask Register" */
#define CAN_MODATAL27_ADDR    0xF0005370     /* "Message Object 27 Data Register Low" */
#define CAN_MODATAH27_ADDR    0xF0005374     /* "Message Object 27 Data Register High" */
#define CAN_MOAR27_ADDR       0xF0005378     /* "Message Object 27 Arbitration Register" */
#define CAN_MOCTR27_ADDR      0xF000537C     /* "Message Object 27" */
#define CAN_MOFCR28_ADDR      0xF0005380     /* "Message Object 28 Function Control Register" */
#define CAN_MOFGPR28_ADDR     0xF0005384     /* "Message Object 28 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR28_ADDR      0xF0005388     /* "Message Object 28 Interrupt Pointer Register" */
#define CAN_MOAMR28_ADDR      0xF000538C     /* "Message Object 28 Acceptance Mask Register" */
#define CAN_MODATAL28_ADDR    0xF0005390     /* "Message Object 28 Data Register Low" */
#define CAN_MODATAH28_ADDR    0xF0005394     /* "Message Object 28 Data Register High" */
#define CAN_MOAR28_ADDR       0xF0005398     /* "Message Object 28 Arbitration Register" */
#define CAN_MOCTR28_ADDR      0xF000539C     /* "Message Object 28" */
#define CAN_MOFCR29_ADDR      0xF00053A0     /* "Message Object 29 Function Control Register" */
#define CAN_MOFGPR29_ADDR     0xF00053A4     /* "Message Object 29 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR29_ADDR      0xF00053A8     /* "Message Object 29 Interrupt Pointer Register" */
#define CAN_MOAMR29_ADDR      0xF00053AC     /* "Message Object 29 Acceptance Mask Register" */
#define CAN_MODATAL29_ADDR    0xF00053B0     /* "Message Object 29 Data Register Low" */
#define CAN_MODATAH29_ADDR    0xF00053B4     /* "Message Object 29 Data Register High" */
#define CAN_MOAR29_ADDR       0xF00053B8     /* "Message Object 29 Arbitration Register" */
#define CAN_MOCTR29_ADDR      0xF00053BC     /* "Message Object 29" */
#define CAN_MOFCR30_ADDR      0xF00053C0     /* "Message Object 30 Function Control Register" */
#define CAN_MOFGPR30_ADDR     0xF00053C4     /* "Message Object 30 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR30_ADDR      0xF00053C8     /* "Message Object 30 Interrupt Pointer Register" */
#define CAN_MOAMR30_ADDR      0xF00053CC     /* "Message Object 30 Acceptance Mask Register" */
#define CAN_MODATAL30_ADDR    0xF00053D0     /* "Message Object 30 Data Register Low" */
#define CAN_MODATAH30_ADDR    0xF00053D4     /* "Message Object 30 Data Register High" */
#define CAN_MOAR30_ADDR       0xF00053D8     /* "Message Object 30 Arbitration Register" */
#define CAN_MOCTR30_ADDR      0xF00053DC     /* "Message Object 30" */
#define CAN_MOFCR31_ADDR      0xF00053E0     /* "Message Object 31 Function Control Register" */
#define CAN_MOFGPR31_ADDR     0xF00053E4     /* "Message Object 31 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR31_ADDR      0xF00053E8     /* "Message Object 31 Interrupt Pointer Register" */
#define CAN_MOAMR31_ADDR      0xF00053EC     /* "Message Object 31 Acceptance Mask Register" */
#define CAN_MODATAL31_ADDR    0xF00053F0     /* "Message Object 31 Data Register Low" */
#define CAN_MODATAH31_ADDR    0xF00053F4     /* "Message Object 31 Data Register High" */
#define CAN_MOAR31_ADDR       0xF00053F8     /* "Message Object 31 Arbitration Register" */
#define CAN_MOCTR31_ADDR      0xF00053FC     /* "Message Object 31" */
#define CAN_MOFCR32_ADDR      0xF0005400     /* "Message Object 32 Function Control Register" */
#define CAN_MOFGPR32_ADDR     0xF0005404     /* "Message Object 32 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR32_ADDR      0xF0005408     /* "Message Object 32 Interrupt Pointer Register" */
#define CAN_MOAMR32_ADDR      0xF000540C     /* "Message Object 32 Acceptance Mask Register" */
#define CAN_MODATAL32_ADDR    0xF0005410     /* "Message Object 32 Data Register Low" */
#define CAN_MODATAH32_ADDR    0xF0005414     /* "Message Object 32 Data Register High" */
#define CAN_MOAR32_ADDR       0xF0005418     /* "Message Object 32 Arbitration Register" */
#define CAN_MOCTR32_ADDR      0xF000541C     /* "Message Object 32" */
#define CAN_MOFCR33_ADDR      0xF0005420     /* "Message Object 33 Function Control Register" */
#define CAN_MOFGPR33_ADDR     0xF0005424     /* "Message Object 33 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR33_ADDR      0xF0005428     /* "Message Object 33 Interrupt Pointer Register" */
#define CAN_MOAMR33_ADDR      0xF000542C     /* "Message Object 33 Acceptance Mask Register" */
#define CAN_MODATAL33_ADDR    0xF0005430     /* "Message Object 33 Data Register Low" */
#define CAN_MODATAH33_ADDR    0xF0005434     /* "Message Object 33 Data Register High" */
#define CAN_MOAR33_ADDR       0xF0005438     /* "Message Object 33 Arbitration Register" */
#define CAN_MOCTR33_ADDR      0xF000543C     /* "Message Object 33" */
#define CAN_MOFCR34_ADDR      0xF0005440     /* "Message Object 34 Function Control Register" */
#define CAN_MOFGPR34_ADDR     0xF0005444     /* "Message Object 34 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR34_ADDR      0xF0005448     /* "Message Object 34 Interrupt Pointer Register" */
#define CAN_MOAMR34_ADDR      0xF000544C     /* "Message Object 34 Acceptance Mask Register" */
#define CAN_MODATAL34_ADDR    0xF0005450     /* "Message Object 34 Data Register Low" */
#define CAN_MODATAH34_ADDR    0xF0005454     /* "Message Object 34 Data Register High" */
#define CAN_MOAR34_ADDR       0xF0005458     /* "Message Object 34 Arbitration Register" */
#define CAN_MOCTR34_ADDR      0xF000545C     /* "Message Object 34" */
#define CAN_MOFCR35_ADDR      0xF0005460     /* "Message Object 35 Function Control Register" */
#define CAN_MOFGPR35_ADDR     0xF0005464     /* "Message Object 35 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR35_ADDR      0xF0005468     /* "Message Object 35 Interrupt Pointer Register" */
#define CAN_MOAMR35_ADDR      0xF000546C     /* "Message Object 35 Acceptance Mask Register" */
#define CAN_MODATAL35_ADDR    0xF0005470     /* "Message Object 35 Data Register Low" */
#define CAN_MODATAH35_ADDR    0xF0005474     /* "Message Object 35 Data Register High" */
#define CAN_MOAR35_ADDR       0xF0005478     /* "Message Object 35 Arbitration Register" */
#define CAN_MOCTR35_ADDR      0xF000547C     /* "Message Object 35" */
#define CAN_MOFCR36_ADDR      0xF0005480     /* "Message Object 36 Function Control Register" */
#define CAN_MOFGPR36_ADDR     0xF0005484     /* "Message Object 36 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR36_ADDR      0xF0005488     /* "Message Object 36 Interrupt Pointer Register" */
#define CAN_MOAMR36_ADDR      0xF000548C     /* "Message Object 36 Acceptance Mask Register" */
#define CAN_MODATAL36_ADDR    0xF0005490     /* "Message Object 36 Data Register Low" */
#define CAN_MODATAH36_ADDR    0xF0005494     /* "Message Object 36 Data Register High" */
#define CAN_MOAR36_ADDR       0xF0005498     /* "Message Object 36 Arbitration Register" */
#define CAN_MOCTR36_ADDR      0xF000549C     /* "Message Object 36" */
#define CAN_MOFCR37_ADDR      0xF00054A0     /* "Message Object 37 Function Control Register" */
#define CAN_MOFGPR37_ADDR     0xF00054A4     /* "Message Object 37 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR37_ADDR      0xF00054A8     /* "Message Object 37 Interrupt Pointer Register" */
#define CAN_MOAMR37_ADDR      0xF00054AC     /* "Message Object 37 Acceptance Mask Register" */
#define CAN_MODATAL37_ADDR    0xF00054B0     /* "Message Object 37 Data Register Low" */
#define CAN_MODATAH37_ADDR    0xF00054B4     /* "Message Object 37 Data Register High" */
#define CAN_MOAR37_ADDR       0xF00054B8     /* "Message Object 37 Arbitration Register" */
#define CAN_MOCTR37_ADDR      0xF00054BC     /* "Message Object 37" */
#define CAN_MOFCR38_ADDR      0xF00054C0     /* "Message Object 38 Function Control Register" */
#define CAN_MOFGPR38_ADDR     0xF00054C4     /* "Message Object 38 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR38_ADDR      0xF00054C8     /* "Message Object 38 Interrupt Pointer Register" */
#define CAN_MOAMR38_ADDR      0xF00054CC     /* "Message Object 38 Acceptance Mask Register" */
#define CAN_MODATAL38_ADDR    0xF00054D0     /* "Message Object 38 Data Register Low" */
#define CAN_MODATAH38_ADDR    0xF00054D4     /* "Message Object 38 Data Register High" */
#define CAN_MOAR38_ADDR       0xF00054D8     /* "Message Object 38 Arbitration Register" */
#define CAN_MOCTR38_ADDR      0xF00054DC     /* "Message Object 38" */
#define CAN_MOFCR39_ADDR      0xF00054E0     /* "Message Object 39 Function Control Register" */
#define CAN_MOFGPR39_ADDR     0xF00054E4     /* "Message Object 39 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR39_ADDR      0xF00054E8     /* "Message Object 39 Interrupt Pointer Register" */
#define CAN_MOAMR39_ADDR      0xF00054EC     /* "Message Object 39 Acceptance Mask Register" */
#define CAN_MODATAL39_ADDR    0xF00054F0     /* "Message Object 39 Data Register Low" */
#define CAN_MODATAH39_ADDR    0xF00054F4     /* "Message Object 39 Data Register High" */
#define CAN_MOAR39_ADDR       0xF00054F8     /* "Message Object 39 Arbitration Register" */
#define CAN_MOCTR39_ADDR      0xF00054FC     /* "Message Object 39" */
#define CAN_MOFCR40_ADDR      0xF0005500     /* "Message Object 40 Function Control Register" */
#define CAN_MOFGPR40_ADDR     0xF0005504     /* "Message Object 40 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR40_ADDR      0xF0005508     /* "Message Object 40 Interrupt Pointer Register" */
#define CAN_MOAMR40_ADDR      0xF000550C     /* "Message Object 40 Acceptance Mask Register" */
#define CAN_MODATAL40_ADDR    0xF0005510     /* "Message Object 40 Data Register Low" */
#define CAN_MODATAH40_ADDR    0xF0005514     /* "Message Object 40 Data Register High" */
#define CAN_MOAR40_ADDR       0xF0005518     /* "Message Object 40 Arbitration Register" */
#define CAN_MOCTR40_ADDR      0xF000551C     /* "Message Object 40" */
#define CAN_MOFCR41_ADDR      0xF0005520     /* "Message Object 41 Function Control Register" */
#define CAN_MOFGPR41_ADDR     0xF0005524     /* "Message Object 41 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR41_ADDR      0xF0005528     /* "Message Object 41 Interrupt Pointer Register" */
#define CAN_MOAMR41_ADDR      0xF000552C     /* "Message Object 41 Acceptance Mask Register" */
#define CAN_MODATAL41_ADDR    0xF0005530     /* "Message Object 41 Data Register Low" */
#define CAN_MODATAH41_ADDR    0xF0005534     /* "Message Object 41 Data Register High" */
#define CAN_MOAR41_ADDR       0xF0005538     /* "Message Object 41 Arbitration Register" */
#define CAN_MOCTR41_ADDR      0xF000553C     /* "Message Object 41" */
#define CAN_MOFCR42_ADDR      0xF0005540     /* "Message Object 42 Function Control Register" */
#define CAN_MOFGPR42_ADDR     0xF0005544     /* "Message Object 42 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR42_ADDR      0xF0005548     /* "Message Object 42 Interrupt Pointer Register" */
#define CAN_MOAMR42_ADDR      0xF000554C     /* "Message Object 42 Acceptance Mask Register" */
#define CAN_MODATAL42_ADDR    0xF0005550     /* "Message Object 42 Data Register Low" */
#define CAN_MODATAH42_ADDR    0xF0005554     /* "Message Object 42 Data Register High" */
#define CAN_MOAR42_ADDR       0xF0005558     /* "Message Object 42 Arbitration Register" */
#define CAN_MOCTR42_ADDR      0xF000555C     /* "Message Object 42" */
#define CAN_MOFCR43_ADDR      0xF0005560     /* "Message Object 43 Function Control Register" */
#define CAN_MOFGPR43_ADDR     0xF0005564     /* "Message Object 43 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR43_ADDR      0xF0005568     /* "Message Object 43 Interrupt Pointer Register" */
#define CAN_MOAMR43_ADDR      0xF000556C     /* "Message Object 43 Acceptance Mask Register" */
#define CAN_MODATAL43_ADDR    0xF0005570     /* "Message Object 43 Data Register Low" */
#define CAN_MODATAH43_ADDR    0xF0005574     /* "Message Object 43 Data Register High" */
#define CAN_MOAR43_ADDR       0xF0005578     /* "Message Object 43 Arbitration Register" */
#define CAN_MOCTR43_ADDR      0xF000557C     /* "Message Object 43" */
#define CAN_MOFCR44_ADDR      0xF0005580     /* "Message Object 44 Function Control Register" */
#define CAN_MOFGPR44_ADDR     0xF0005584     /* "Message Object 44 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR44_ADDR      0xF0005588     /* "Message Object 44 Interrupt Pointer Register" */
#define CAN_MOAMR44_ADDR      0xF000558C     /* "Message Object 44 Acceptance Mask Register" */
#define CAN_MODATAL44_ADDR    0xF0005590     /* "Message Object 44 Data Register Low" */
#define CAN_MODATAH44_ADDR    0xF0005594     /* "Message Object 44 Data Register High" */
#define CAN_MOAR44_ADDR       0xF0005598     /* "Message Object 44 Arbitration Register" */
#define CAN_MOCTR44_ADDR      0xF000559C     /* "Message Object 44" */
#define CAN_MOFCR45_ADDR      0xF00055A0     /* "Message Object 45 Function Control Register" */
#define CAN_MOFGPR45_ADDR     0xF00055A4     /* "Message Object 45 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR45_ADDR      0xF00055A8     /* "Message Object 45 Interrupt Pointer Register" */
#define CAN_MOAMR45_ADDR      0xF00055AC     /* "Message Object 45 Acceptance Mask Register" */
#define CAN_MODATAL45_ADDR    0xF00055B0     /* "Message Object 45 Data Register Low" */
#define CAN_MODATAH45_ADDR    0xF00055B4     /* "Message Object 45 Data Register High" */
#define CAN_MOAR45_ADDR       0xF00055B8     /* "Message Object 45 Arbitration Register" */
#define CAN_MOCTR45_ADDR      0xF00055BC     /* "Message Object 45" */
#define CAN_MOFCR46_ADDR      0xF00055C0     /* "Message Object 46 Function Control Register" */
#define CAN_MOFGPR46_ADDR     0xF00055C4     /* "Message Object 46 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR46_ADDR      0xF00055C8     /* "Message Object 46 Interrupt Pointer Register" */
#define CAN_MOAMR46_ADDR      0xF00055CC     /* "Message Object 46 Acceptance Mask Register" */
#define CAN_MODATAL46_ADDR    0xF00055D0     /* "Message Object 46 Data Register Low" */
#define CAN_MODATAH46_ADDR    0xF00055D4     /* "Message Object 46 Data Register High" */
#define CAN_MOAR46_ADDR       0xF00055D8     /* "Message Object 46 Arbitration Register" */
#define CAN_MOCTR46_ADDR      0xF00055DC     /* "Message Object 46" */
#define CAN_MOFCR47_ADDR      0xF00055E0     /* "Message Object 47 Function Control Register" */
#define CAN_MOFGPR47_ADDR     0xF00055E4     /* "Message Object 47 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR47_ADDR      0xF00055E8     /* "Message Object 47 Interrupt Pointer Register" */
#define CAN_MOAMR47_ADDR      0xF00055EC     /* "Message Object 47 Acceptance Mask Register" */
#define CAN_MODATAL47_ADDR    0xF00055F0     /* "Message Object 47 Data Register Low" */
#define CAN_MODATAH47_ADDR    0xF00055F4     /* "Message Object 47 Data Register High" */
#define CAN_MOAR47_ADDR       0xF00055F8     /* "Message Object 47 Arbitration Register" */
#define CAN_MOCTR47_ADDR      0xF00055FC     /* "Message Object 47" */
#define CAN_MOFCR48_ADDR      0xF0005600     /* "Message Object 48 Function Control Register" */
#define CAN_MOFGPR48_ADDR     0xF0005604     /* "Message Object 48 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR48_ADDR      0xF0005608     /* "Message Object 48 Interrupt Pointer Register" */
#define CAN_MOAMR48_ADDR      0xF000560C     /* "Message Object 48 Acceptance Mask Register" */
#define CAN_MODATAL48_ADDR    0xF0005610     /* "Message Object 48 Data Register Low" */
#define CAN_MODATAH48_ADDR    0xF0005614     /* "Message Object 48 Data Register High" */
#define CAN_MOAR48_ADDR       0xF0005618     /* "Message Object 48 Arbitration Register" */
#define CAN_MOCTR48_ADDR      0xF000561C     /* "Message Object 48" */
#define CAN_MOFCR49_ADDR      0xF0005620     /* "Message Object 49 Function Control Register" */
#define CAN_MOFGPR49_ADDR     0xF0005624     /* "Message Object 49 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR49_ADDR      0xF0005628     /* "Message Object 49 Interrupt Pointer Register" */
#define CAN_MOAMR49_ADDR      0xF000562C     /* "Message Object 49 Acceptance Mask Register" */
#define CAN_MODATAL49_ADDR    0xF0005630     /* "Message Object 49 Data Register Low" */
#define CAN_MODATAH49_ADDR    0xF0005634     /* "Message Object 49 Data Register High" */
#define CAN_MOAR49_ADDR       0xF0005638     /* "Message Object 49 Arbitration Register" */
#define CAN_MOCTR49_ADDR      0xF000563C     /* "Message Object 49" */
#define CAN_MOFCR50_ADDR      0xF0005640     /* "Message Object 50 Function Control Register" */
#define CAN_MOFGPR50_ADDR     0xF0005644     /* "Message Object 50 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR50_ADDR      0xF0005648     /* "Message Object 50 Interrupt Pointer Register" */
#define CAN_MOAMR50_ADDR      0xF000564C     /* "Message Object 50 Acceptance Mask Register" */
#define CAN_MODATAL50_ADDR    0xF0005650     /* "Message Object 50 Data Register Low" */
#define CAN_MODATAH50_ADDR    0xF0005654     /* "Message Object 50 Data Register High" */
#define CAN_MOAR50_ADDR       0xF0005658     /* "Message Object 50 Arbitration Register" */
#define CAN_MOCTR50_ADDR      0xF000565C     /* "Message Object 50" */
#define CAN_MOFCR51_ADDR      0xF0005660     /* "Message Object 51 Function Control Register" */
#define CAN_MOFGPR51_ADDR     0xF0005664     /* "Message Object 51 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR51_ADDR      0xF0005668     /* "Message Object 51 Interrupt Pointer Register" */
#define CAN_MOAMR51_ADDR      0xF000566C     /* "Message Object 51 Acceptance Mask Register" */
#define CAN_MODATAL51_ADDR    0xF0005670     /* "Message Object 51 Data Register Low" */
#define CAN_MODATAH51_ADDR    0xF0005674     /* "Message Object 51 Data Register High" */
#define CAN_MOAR51_ADDR       0xF0005678     /* "Message Object 51 Arbitration Register" */
#define CAN_MOCTR51_ADDR      0xF000567C     /* "Message Object 51" */
#define CAN_MOFCR52_ADDR      0xF0005680     /* "Message Object 52 Function Control Register" */
#define CAN_MOFGPR52_ADDR     0xF0005684     /* "Message Object 52 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR52_ADDR      0xF0005688     /* "Message Object 52 Interrupt Pointer Register" */
#define CAN_MOAMR52_ADDR      0xF000568C     /* "Message Object 52 Acceptance Mask Register" */
#define CAN_MODATAL52_ADDR    0xF0005690     /* "Message Object 52 Data Register Low" */
#define CAN_MODATAH52_ADDR    0xF0005694     /* "Message Object 52 Data Register High" */
#define CAN_MOAR52_ADDR       0xF0005698     /* "Message Object 52 Arbitration Register" */
#define CAN_MOCTR52_ADDR      0xF000569C     /* "Message Object 52" */
#define CAN_MOFCR53_ADDR      0xF00056A0     /* "Message Object 53 Function Control Register" */
#define CAN_MOFGPR53_ADDR     0xF00056A4     /* "Message Object 53 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR53_ADDR      0xF00056A8     /* "Message Object 53 Interrupt Pointer Register" */
#define CAN_MOAMR53_ADDR      0xF00056AC     /* "Message Object 53 Acceptance Mask Register" */
#define CAN_MODATAL53_ADDR    0xF00056B0     /* "Message Object 53 Data Register Low" */
#define CAN_MODATAH53_ADDR    0xF00056B4     /* "Message Object 53 Data Register High" */
#define CAN_MOAR53_ADDR       0xF00056B8     /* "Message Object 53 Arbitration Register" */
#define CAN_MOCTR53_ADDR      0xF00056BC     /* "Message Object 53" */
#define CAN_MOFCR54_ADDR      0xF00056C0     /* "Message Object 54 Function Control Register" */
#define CAN_MOFGPR54_ADDR     0xF00056C4     /* "Message Object 54 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR54_ADDR      0xF00056C8     /* "Message Object 54 Interrupt Pointer Register" */
#define CAN_MOAMR54_ADDR      0xF00056CC     /* "Message Object 54 Acceptance Mask Register" */
#define CAN_MODATAL54_ADDR    0xF00056D0     /* "Message Object 54 Data Register Low" */
#define CAN_MODATAH54_ADDR    0xF00056D4     /* "Message Object 54 Data Register High" */
#define CAN_MOAR54_ADDR       0xF00056D8     /* "Message Object 54 Arbitration Register" */
#define CAN_MOCTR54_ADDR      0xF00056DC     /* "Message Object 54" */
#define CAN_MOFCR55_ADDR      0xF00056E0     /* "Message Object 55 Function Control Register" */
#define CAN_MOFGPR55_ADDR     0xF00056E4     /* "Message Object 55 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR55_ADDR      0xF00056E8     /* "Message Object 55 Interrupt Pointer Register" */
#define CAN_MOAMR55_ADDR      0xF00056EC     /* "Message Object 55 Acceptance Mask Register" */
#define CAN_MODATAL55_ADDR    0xF00056F0     /* "Message Object 55 Data Register Low" */
#define CAN_MODATAH55_ADDR    0xF00056F4     /* "Message Object 55 Data Register High" */
#define CAN_MOAR55_ADDR       0xF00056F8     /* "Message Object 55 Arbitration Register" */
#define CAN_MOCTR55_ADDR      0xF00056FC     /* "Message Object 55" */
#define CAN_MOFCR56_ADDR      0xF0005700     /* "Message Object 56 Function Control Register" */
#define CAN_MOFGPR56_ADDR     0xF0005704     /* "Message Object 56 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR56_ADDR      0xF0005708     /* "Message Object 56 Interrupt Pointer Register" */
#define CAN_MOAMR56_ADDR      0xF000570C     /* "Message Object 56 Acceptance Mask Register" */
#define CAN_MODATAL56_ADDR    0xF0005710     /* "Message Object 56 Data Register Low" */
#define CAN_MODATAH56_ADDR    0xF0005714     /* "Message Object 56 Data Register High" */
#define CAN_MOAR56_ADDR       0xF0005718     /* "Message Object 56 Arbitration Register" */
#define CAN_MOCTR56_ADDR      0xF000571C     /* "Message Object 56" */
#define CAN_MOFCR57_ADDR      0xF0005720     /* "Message Object 57 Function Control Register" */
#define CAN_MOFGPR57_ADDR     0xF0005724     /* "Message Object 57 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR57_ADDR      0xF0005728     /* "Message Object 57 Interrupt Pointer Register" */
#define CAN_MOAMR57_ADDR      0xF000572C     /* "Message Object 57 Acceptance Mask Register" */
#define CAN_MODATAL57_ADDR    0xF0005730     /* "Message Object 57 Data Register Low" */
#define CAN_MODATAH57_ADDR    0xF0005734     /* "Message Object 57 Data Register High" */
#define CAN_MOAR57_ADDR       0xF0005738     /* "Message Object 57 Arbitration Register" */
#define CAN_MOCTR57_ADDR      0xF000573C     /* "Message Object 57" */
#define CAN_MOFCR58_ADDR      0xF0005740     /* "Message Object 58 Function Control Register" */
#define CAN_MOFGPR58_ADDR     0xF0005744     /* "Message Object 58 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR58_ADDR      0xF0005748     /* "Message Object 58 Interrupt Pointer Register" */
#define CAN_MOAMR58_ADDR      0xF000574C     /* "Message Object 58 Acceptance Mask Register" */
#define CAN_MODATAL58_ADDR    0xF0005750     /* "Message Object 58 Data Register Low" */
#define CAN_MODATAH58_ADDR    0xF0005754     /* "Message Object 58 Data Register High" */
#define CAN_MOAR58_ADDR       0xF0005758     /* "Message Object 58 Arbitration Register" */
#define CAN_MOCTR58_ADDR      0xF000575C     /* "Message Object 58" */
#define CAN_MOFCR59_ADDR      0xF0005760     /* "Message Object 59 Function Control Register" */
#define CAN_MOFGPR59_ADDR     0xF0005764     /* "Message Object 59 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR59_ADDR      0xF0005768     /* "Message Object 59 Interrupt Pointer Register" */
#define CAN_MOAMR59_ADDR      0xF000576C     /* "Message Object 59 Acceptance Mask Register" */
#define CAN_MODATAL59_ADDR    0xF0005770     /* "Message Object 59 Data Register Low" */
#define CAN_MODATAH59_ADDR    0xF0005774     /* "Message Object 59 Data Register High" */
#define CAN_MOAR59_ADDR       0xF0005778     /* "Message Object 59 Arbitration Register" */
#define CAN_MOCTR59_ADDR      0xF000577C     /* "Message Object 59" */
#define CAN_MOFCR60_ADDR      0xF0005780     /* "Message Object 60 Function Control Register" */
#define CAN_MOFGPR60_ADDR     0xF0005784     /* "Message Object 60 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR60_ADDR      0xF0005788     /* "Message Object 60 Interrupt Pointer Register" */
#define CAN_MOAMR60_ADDR      0xF000578C     /* "Message Object 60 Acceptance Mask Register" */
#define CAN_MODATAL60_ADDR    0xF0005790     /* "Message Object 60 Data Register Low" */
#define CAN_MODATAH60_ADDR    0xF0005794     /* "Message Object 60 Data Register High" */
#define CAN_MOAR60_ADDR       0xF0005798     /* "Message Object 60 Arbitration Register" */
#define CAN_MOCTR60_ADDR      0xF000579C     /* "Message Object 60" */
#define CAN_MOFCR61_ADDR      0xF00057A0     /* "Message Object 61 Function Control Register" */
#define CAN_MOFGPR61_ADDR     0xF00057A4     /* "Message Object 61 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR61_ADDR      0xF00057A8     /* "Message Object 61 Interrupt Pointer Register" */
#define CAN_MOAMR61_ADDR      0xF00057AC     /* "Message Object 61 Acceptance Mask Register" */
#define CAN_MODATAL61_ADDR    0xF00057B0     /* "Message Object 61 Data Register Low" */
#define CAN_MODATAH61_ADDR    0xF00057B4     /* "Message Object 61 Data Register High" */
#define CAN_MOAR61_ADDR       0xF00057B8     /* "Message Object 61 Arbitration Register" */
#define CAN_MOCTR61_ADDR      0xF00057BC     /* "Message Object 61" */
#define CAN_MOFCR62_ADDR      0xF00057C0     /* "Message Object 62 Function Control Register" */
#define CAN_MOFGPR62_ADDR     0xF00057C4     /* "Message Object 62 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR62_ADDR      0xF00057C8     /* "Message Object 62 Interrupt Pointer Register" */
#define CAN_MOAMR62_ADDR      0xF00057CC     /* "Message Object 62 Acceptance Mask Register" */
#define CAN_MODATAL62_ADDR    0xF00057D0     /* "Message Object 62 Data Register Low" */
#define CAN_MODATAH62_ADDR    0xF00057D4     /* "Message Object 62 Data Register High" */
#define CAN_MOAR62_ADDR       0xF00057D8     /* "Message Object 62 Arbitration Register" */
#define CAN_MOCTR62_ADDR      0xF00057DC     /* "Message Object 62" */
#define CAN_MOFCR63_ADDR      0xF00057E0     /* "Message Object 63 Function Control Register" */
#define CAN_MOFGPR63_ADDR     0xF00057E4     /* "Message Object 63 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR63_ADDR      0xF00057E8     /* "Message Object 63 Interrupt Pointer Register" */
#define CAN_MOAMR63_ADDR      0xF00057EC     /* "Message Object 63 Acceptance Mask Register" */
#define CAN_MODATAL63_ADDR    0xF00057F0     /* "Message Object 63 Data Register Low" */
#define CAN_MODATAH63_ADDR    0xF00057F4     /* "Message Object 63 Data Register High" */
#define CAN_MOAR63_ADDR       0xF00057F8     /* "Message Object 63 Arbitration Register" */
#define CAN_MOCTR63_ADDR      0xF00057FC     /* "Message Object 63" */
#define CAN_STPTR0_ADDR       0xF0007FFC     /* "Scheduler Start Pointer Node 0 Register" */


#endif /* _HAVE_TRICORE_CAN_ADDRESSES_H_ (block "MultiCAN") */


