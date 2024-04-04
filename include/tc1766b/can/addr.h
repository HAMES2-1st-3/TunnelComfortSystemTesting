/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MultiCAN LL" of TriCore TC1766B (564 SFRs) */

#ifndef _HAVE_TRICORE_CAN_ADDRESSES_H_
#define _HAVE_TRICORE_CAN_ADDRESSES_H_

#define CAN_CLC_ADDR          0xF0004000     /* "MultiCAN Clock Control Register" */
#define CAN_ID_ADDR           0xF0004008     /* "MultiCAN Module Identification Register" */
#define CAN_FDR_ADDR          0xF000400C     /* "MultiCAN Fractional Divider Register" */
#define CAN_EDCR_ADDR         0xF0004080     /* "Error Detection and Correction Test Register" */
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
#define CAN_MSPND0_ADDR       0xF0004120     /* "Message Pending Register 0" */
#define CAN_MSPND1_ADDR       0xF0004124     /* "Message Pending Register 1" */
#define CAN_MSPND2_ADDR       0xF0004128     /* "Message Pending Register 2" */
#define CAN_MSPND3_ADDR       0xF000412C     /* "Message Pending Register 3" */
#define CAN_MSPND4_ADDR       0xF0004130     /* "Message Pending Register 4" */
#define CAN_MSPND5_ADDR       0xF0004134     /* "Message Pending Register 5" */
#define CAN_MSPND6_ADDR       0xF0004138     /* "Message Pending Register 6" */
#define CAN_MSPND7_ADDR       0xF000413C     /* "Message Pending Register 7" */
#define CAN_MSID0_ADDR        0xF0004140     /* "Message Index Register 0" */
#define CAN_MSID1_ADDR        0xF0004144     /* "Message Index Register 1" */
#define CAN_MSID2_ADDR        0xF0004148     /* "Message Index Register 2" */
#define CAN_MSID3_ADDR        0xF000414C     /* "Message Index Register 3" */
#define CAN_MSID4_ADDR        0xF0004150     /* "Message Index Register 4" */
#define CAN_MSID5_ADDR        0xF0004154     /* "Message Index Register 5" */
#define CAN_MSID6_ADDR        0xF0004158     /* "Message Index Register 6" */
#define CAN_MSID7_ADDR        0xF000415C     /* "Message Index Register 7" */
#define CAN_MSIMASK_ADDR      0xF00041C0     /* "Message Index Mask Register" */
#define CAN_PANCTR_ADDR       0xF00041C4     /* "Panel Control Register" */
#define CAN_MCR_ADDR          0xF00041C8     /* "MultiCAN Module Control Register" */
#define CAN_MITR_ADDR         0xF00041CC     /* "Module Interrupt Trigger Register" */
#define CAN_NCR0_ADDR         0xF0004200     /* "Node 0 Control Register" */
#define CAN_NSR0_ADDR         0xF0004204     /* "Node 0 Status Register" */
#define CAN_NIPR0_ADDR        0xF0004208     /* "Node 0 Interrupt Pointer Register" */
#define CAN_NPCR0_ADDR        0xF000420C     /* "Node 0 Port Control Register" */
#define CAN_NBTR0_ADDR        0xF0004210     /* "Node 0 Bit Timing Register" */
#define CAN_NECNT0_ADDR       0xF0004214     /* "Node 0 Error Counter Register" */
#define CAN_NFCR0_ADDR        0xF0004218     /* "Node 0 Frame Counter Register" */
#define CAN_NCR1_ADDR         0xF0004300     /* "Node 1 Control Register" */
#define CAN_NSR1_ADDR         0xF0004304     /* "Node 1 Status Register" */
#define CAN_NIPR1_ADDR        0xF0004308     /* "Node 1 Interrupt Pointer Register" */
#define CAN_NPCR1_ADDR        0xF000430C     /* "Node 1 Port Control Register" */
#define CAN_NBTR1_ADDR        0xF0004310     /* "Node 1 Bit Timing Register" */
#define CAN_NECNT1_ADDR       0xF0004314     /* "Node 1 Error Counter Register" */
#define CAN_NFCR1_ADDR        0xF0004318     /* "Node 1 Frame Counter Register" */
#define CAN_MOFCR0_ADDR       0xF0004400     /* "Message Object 0 Function Control Register" */
#define CAN_MOFGPR0_ADDR      0xF0004404     /* "Message Object 0 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR0_ADDR       0xF0004408     /* "Message Object 0 Interrupt Pointer Register" */
#define CAN_MOAMR0_ADDR       0xF000440C     /* "Message Object 0 Acceptance Mask Register" */
#define CAN_MODATAL0_ADDR     0xF0004410     /* "Message Object 0 Data Register Low" */
#define CAN_MODATAH0_ADDR     0xF0004414     /* "Message Object 0 Data Register High" */
#define CAN_MOAR0_ADDR        0xF0004418     /* "Message Object 0 Arbitration Register" */
#define CAN_MOCTR0_ADDR       0xF000441C     /* "Message Object 0 Control Register" */
#define CAN_MOFCR1_ADDR       0xF0004420     /* "Message Object 1 Function Control Register" */
#define CAN_MOFGPR1_ADDR      0xF0004424     /* "Message Object 1 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR1_ADDR       0xF0004428     /* "Message Object 1 Interrupt Pointer Register" */
#define CAN_MOAMR1_ADDR       0xF000442C     /* "Message Object 1 Acceptance Mask Register" */
#define CAN_MODATAL1_ADDR     0xF0004430     /* "Message Object 1 Data Register Low" */
#define CAN_MODATAH1_ADDR     0xF0004434     /* "Message Object 1 Data Register High" */
#define CAN_MOAR1_ADDR        0xF0004438     /* "Message Object 1 Arbitration Register" */
#define CAN_MOCTR1_ADDR       0xF000443C     /* "Message Object 1 Control Register" */
#define CAN_MOFCR2_ADDR       0xF0004440     /* "Message Object 2 Function Control Register" */
#define CAN_MOFGPR2_ADDR      0xF0004444     /* "Message Object 2 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR2_ADDR       0xF0004448     /* "Message Object 2 Interrupt Pointer Register" */
#define CAN_MOAMR2_ADDR       0xF000444C     /* "Message Object 2 Acceptance Mask Register" */
#define CAN_MODATAL2_ADDR     0xF0004450     /* "Message Object 2 Data Register Low" */
#define CAN_MODATAH2_ADDR     0xF0004454     /* "Message Object 2 Data Register High" */
#define CAN_MOAR2_ADDR        0xF0004458     /* "Message Object 2 Arbitration Register" */
#define CAN_MOCTR2_ADDR       0xF000445C     /* "Message Object 2 Control Register" */
#define CAN_MOFCR3_ADDR       0xF0004460     /* "Message Object 3 Function Control Register" */
#define CAN_MOFGPR3_ADDR      0xF0004464     /* "Message Object 3 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR3_ADDR       0xF0004468     /* "Message Object 3 Interrupt Pointer Register" */
#define CAN_MOAMR3_ADDR       0xF000446C     /* "Message Object 3 Acceptance Mask Register" */
#define CAN_MODATAL3_ADDR     0xF0004470     /* "Message Object 3 Data Register Low" */
#define CAN_MODATAH3_ADDR     0xF0004474     /* "Message Object 3 Data Register High" */
#define CAN_MOAR3_ADDR        0xF0004478     /* "Message Object 3 Arbitration Register" */
#define CAN_MOCTR3_ADDR       0xF000447C     /* "Message Object 3 Control Register" */
#define CAN_MOFCR4_ADDR       0xF0004480     /* "Message Object 4 Function Control Register" */
#define CAN_MOFGPR4_ADDR      0xF0004484     /* "Message Object 4 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR4_ADDR       0xF0004488     /* "Message Object 4 Interrupt Pointer Register" */
#define CAN_MOAMR4_ADDR       0xF000448C     /* "Message Object 4 Acceptance Mask Register" */
#define CAN_MODATAL4_ADDR     0xF0004490     /* "Message Object 4 Data Register Low" */
#define CAN_MODATAH4_ADDR     0xF0004494     /* "Message Object 4 Data Register High" */
#define CAN_MOAR4_ADDR        0xF0004498     /* "Message Object 4 Arbitration Register" */
#define CAN_MOCTR4_ADDR       0xF000449C     /* "Message Object 4 Control Register" */
#define CAN_MOFCR5_ADDR       0xF00044A0     /* "Message Object 5 Function Control Register" */
#define CAN_MOFGPR5_ADDR      0xF00044A4     /* "Message Object 5 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR5_ADDR       0xF00044A8     /* "Message Object 5 Interrupt Pointer Register" */
#define CAN_MOAMR5_ADDR       0xF00044AC     /* "Message Object 5 Acceptance Mask Register" */
#define CAN_MODATAL5_ADDR     0xF00044B0     /* "Message Object 5 Data Register Low" */
#define CAN_MODATAH5_ADDR     0xF00044B4     /* "Message Object 5 Data Register High" */
#define CAN_MOAR5_ADDR        0xF00044B8     /* "Message Object 5 Arbitration Register" */
#define CAN_MOCTR5_ADDR       0xF00044BC     /* "Message Object 5 Control Register" */
#define CAN_MOFCR6_ADDR       0xF00044C0     /* "Message Object 6 Function Control Register" */
#define CAN_MOFGPR6_ADDR      0xF00044C4     /* "Message Object 6 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR6_ADDR       0xF00044C8     /* "Message Object 6 Interrupt Pointer Register" */
#define CAN_MOAMR6_ADDR       0xF00044CC     /* "Message Object 6 Acceptance Mask Register" */
#define CAN_MODATAL6_ADDR     0xF00044D0     /* "Message Object 6 Data Register Low" */
#define CAN_MODATAH6_ADDR     0xF00044D4     /* "Message Object 6 Data Register High" */
#define CAN_MOAR6_ADDR        0xF00044D8     /* "Message Object 6 Arbitration Register" */
#define CAN_MOCTR6_ADDR       0xF00044DC     /* "Message Object 6 Control Register" */
#define CAN_MOFCR7_ADDR       0xF00044E0     /* "Message Object 7 Function Control Register" */
#define CAN_MOFGPR7_ADDR      0xF00044E4     /* "Message Object 7 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR7_ADDR       0xF00044E8     /* "Message Object 7 Interrupt Pointer Register" */
#define CAN_MOAMR7_ADDR       0xF00044EC     /* "Message Object 7 Acceptance Mask Register" */
#define CAN_MODATAL7_ADDR     0xF00044F0     /* "Message Object 7 Data Register Low" */
#define CAN_MODATAH7_ADDR     0xF00044F4     /* "Message Object 7 Data Register High" */
#define CAN_MOAR7_ADDR        0xF00044F8     /* "Message Object 7 Arbitration Register" */
#define CAN_MOCTR7_ADDR       0xF00044FC     /* "Message Object 7 Control Register" */
#define CAN_MOFCR8_ADDR       0xF0004500     /* "Message Object 8 Function Control Register" */
#define CAN_MOFGPR8_ADDR      0xF0004504     /* "Message Object 8 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR8_ADDR       0xF0004508     /* "Message Object 8 Interrupt Pointer Register" */
#define CAN_MOAMR8_ADDR       0xF000450C     /* "Message Object 8 Acceptance Mask Register" */
#define CAN_MODATAL8_ADDR     0xF0004510     /* "Message Object 8 Data Register Low" */
#define CAN_MODATAH8_ADDR     0xF0004514     /* "Message Object 8 Data Register High" */
#define CAN_MOAR8_ADDR        0xF0004518     /* "Message Object 8 Arbitration Register" */
#define CAN_MOCTR8_ADDR       0xF000451C     /* "Message Object 8 Control Register" */
#define CAN_MOFCR9_ADDR       0xF0004520     /* "Message Object 9 Function Control Register" */
#define CAN_MOFGPR9_ADDR      0xF0004524     /* "Message Object 9 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR9_ADDR       0xF0004528     /* "Message Object 9 Interrupt Pointer Register" */
#define CAN_MOAMR9_ADDR       0xF000452C     /* "Message Object 9 Acceptance Mask Register" */
#define CAN_MODATAL9_ADDR     0xF0004530     /* "Message Object 9 Data Register Low" */
#define CAN_MODATAH9_ADDR     0xF0004534     /* "Message Object 9 Data Register High" */
#define CAN_MOAR9_ADDR        0xF0004538     /* "Message Object 9 Arbitration Register" */
#define CAN_MOCTR9_ADDR       0xF000453C     /* "Message Object 9 Control Register" */
#define CAN_MOFCR10_ADDR      0xF0004540     /* "Message Object 10 Function Control Register" */
#define CAN_MOFGPR10_ADDR     0xF0004544     /* "Message Object 10 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR10_ADDR      0xF0004548     /* "Message Object 10 Interrupt Pointer Register" */
#define CAN_MOAMR10_ADDR      0xF000454C     /* "Message Object 10 Acceptance Mask Register" */
#define CAN_MODATAL10_ADDR    0xF0004550     /* "Message Object 10 Data Register Low" */
#define CAN_MODATAH10_ADDR    0xF0004554     /* "Message Object 10 Data Register High" */
#define CAN_MOAR10_ADDR       0xF0004558     /* "Message Object 10 Arbitration Register" */
#define CAN_MOCTR10_ADDR      0xF000455C     /* "Message Object 10 Control Register" */
#define CAN_MOFCR11_ADDR      0xF0004560     /* "Message Object 11 Function Control Register" */
#define CAN_MOFGPR11_ADDR     0xF0004564     /* "Message Object 11 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR11_ADDR      0xF0004568     /* "Message Object 11 Interrupt Pointer Register" */
#define CAN_MOAMR11_ADDR      0xF000456C     /* "Message Object 11 Acceptance Mask Register" */
#define CAN_MODATAL11_ADDR    0xF0004570     /* "Message Object 11 Data Register Low" */
#define CAN_MODATAH11_ADDR    0xF0004574     /* "Message Object 11 Data Register High" */
#define CAN_MOAR11_ADDR       0xF0004578     /* "Message Object 11 Arbitration Register" */
#define CAN_MOCTR11_ADDR      0xF000457C     /* "Message Object 11 Control Register" */
#define CAN_MOFCR12_ADDR      0xF0004580     /* "Message Object 12 Function Control Register" */
#define CAN_MOFGPR12_ADDR     0xF0004584     /* "Message Object 12 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR12_ADDR      0xF0004588     /* "Message Object 12 Interrupt Pointer Register" */
#define CAN_MOAMR12_ADDR      0xF000458C     /* "Message Object 12 Acceptance Mask Register" */
#define CAN_MODATAL12_ADDR    0xF0004590     /* "Message Object 12 Data Register Low" */
#define CAN_MODATAH12_ADDR    0xF0004594     /* "Message Object 12 Data Register High" */
#define CAN_MOAR12_ADDR       0xF0004598     /* "Message Object 12 Arbitration Register" */
#define CAN_MOCTR12_ADDR      0xF000459C     /* "Message Object 12 Control Register" */
#define CAN_MOFCR13_ADDR      0xF00045A0     /* "Message Object 13 Function Control Register" */
#define CAN_MOFGPR13_ADDR     0xF00045A4     /* "Message Object 13 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR13_ADDR      0xF00045A8     /* "Message Object 13 Interrupt Pointer Register" */
#define CAN_MOAMR13_ADDR      0xF00045AC     /* "Message Object 13 Acceptance Mask Register" */
#define CAN_MODATAL13_ADDR    0xF00045B0     /* "Message Object 13 Data Register Low" */
#define CAN_MODATAH13_ADDR    0xF00045B4     /* "Message Object 13 Data Register High" */
#define CAN_MOAR13_ADDR       0xF00045B8     /* "Message Object 13 Arbitration Register" */
#define CAN_MOCTR13_ADDR      0xF00045BC     /* "Message Object 13 Control Register" */
#define CAN_MOFCR14_ADDR      0xF00045C0     /* "Message Object 14 Function Control Register" */
#define CAN_MOFGPR14_ADDR     0xF00045C4     /* "Message Object 14 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR14_ADDR      0xF00045C8     /* "Message Object 14 Interrupt Pointer Register" */
#define CAN_MOAMR14_ADDR      0xF00045CC     /* "Message Object 14 Acceptance Mask Register" */
#define CAN_MODATAL14_ADDR    0xF00045D0     /* "Message Object 14 Data Register Low" */
#define CAN_MODATAH14_ADDR    0xF00045D4     /* "Message Object 14 Data Register High" */
#define CAN_MOAR14_ADDR       0xF00045D8     /* "Message Object 14 Arbitration Register" */
#define CAN_MOCTR14_ADDR      0xF00045DC     /* "Message Object 14 Control Register" */
#define CAN_MOFCR15_ADDR      0xF00045E0     /* "Message Object 15 Function Control Register" */
#define CAN_MOFGPR15_ADDR     0xF00045E4     /* "Message Object 15 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR15_ADDR      0xF00045E8     /* "Message Object 15 Interrupt Pointer Register" */
#define CAN_MOAMR15_ADDR      0xF00045EC     /* "Message Object 15 Acceptance Mask Register" */
#define CAN_MODATAL15_ADDR    0xF00045F0     /* "Message Object 15 Data Register Low" */
#define CAN_MODATAH15_ADDR    0xF00045F4     /* "Message Object 15 Data Register High" */
#define CAN_MOAR15_ADDR       0xF00045F8     /* "Message Object 15 Arbitration Register" */
#define CAN_MOCTR15_ADDR      0xF00045FC     /* "Message Object 15 Control Register" */
#define CAN_MOFCR16_ADDR      0xF0004600     /* "Message Object 16 Function Control Register" */
#define CAN_MOFGPR16_ADDR     0xF0004604     /* "Message Object 16 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR16_ADDR      0xF0004608     /* "Message Object 16 Interrupt Pointer Register" */
#define CAN_MOAMR16_ADDR      0xF000460C     /* "Message Object 16 Acceptance Mask Register" */
#define CAN_MODATAL16_ADDR    0xF0004610     /* "Message Object 16 Data Register Low" */
#define CAN_MODATAH16_ADDR    0xF0004614     /* "Message Object 16 Data Register High" */
#define CAN_MOAR16_ADDR       0xF0004618     /* "Message Object 16 Arbitration Register" */
#define CAN_MOCTR16_ADDR      0xF000461C     /* "Message Object 16 Control Register" */
#define CAN_MOFCR17_ADDR      0xF0004620     /* "Message Object 17 Function Control Register" */
#define CAN_MOFGPR17_ADDR     0xF0004624     /* "Message Object 17 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR17_ADDR      0xF0004628     /* "Message Object 17 Interrupt Pointer Register" */
#define CAN_MOAMR17_ADDR      0xF000462C     /* "Message Object 17 Acceptance Mask Register" */
#define CAN_MODATAL17_ADDR    0xF0004630     /* "Message Object 17 Data Register Low" */
#define CAN_MODATAH17_ADDR    0xF0004634     /* "Message Object 17 Data Register High" */
#define CAN_MOAR17_ADDR       0xF0004638     /* "Message Object 17 Arbitration Register" */
#define CAN_MOCTR17_ADDR      0xF000463C     /* "Message Object 17 Control Register" */
#define CAN_MOFCR18_ADDR      0xF0004640     /* "Message Object 18 Function Control Register" */
#define CAN_MOFGPR18_ADDR     0xF0004644     /* "Message Object 18 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR18_ADDR      0xF0004648     /* "Message Object 18 Interrupt Pointer Register" */
#define CAN_MOAMR18_ADDR      0xF000464C     /* "Message Object 18 Acceptance Mask Register" */
#define CAN_MODATAL18_ADDR    0xF0004650     /* "Message Object 18 Data Register Low" */
#define CAN_MODATAH18_ADDR    0xF0004654     /* "Message Object 18 Data Register High" */
#define CAN_MOAR18_ADDR       0xF0004658     /* "Message Object 18 Arbitration Register" */
#define CAN_MOCTR18_ADDR      0xF000465C     /* "Message Object 18 Control Register" */
#define CAN_MOFCR19_ADDR      0xF0004660     /* "Message Object 19 Function Control Register" */
#define CAN_MOFGPR19_ADDR     0xF0004664     /* "Message Object 19 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR19_ADDR      0xF0004668     /* "Message Object 19 Interrupt Pointer Register" */
#define CAN_MOAMR19_ADDR      0xF000466C     /* "Message Object 19 Acceptance Mask Register" */
#define CAN_MODATAL19_ADDR    0xF0004670     /* "Message Object 19 Data Register Low" */
#define CAN_MODATAH19_ADDR    0xF0004674     /* "Message Object 19 Data Register High" */
#define CAN_MOAR19_ADDR       0xF0004678     /* "Message Object 19 Arbitration Register" */
#define CAN_MOCTR19_ADDR      0xF000467C     /* "Message Object 19 Control Register" */
#define CAN_MOFCR20_ADDR      0xF0004680     /* "Message Object 20 Function Control Register" */
#define CAN_MOFGPR20_ADDR     0xF0004684     /* "Message Object 20 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR20_ADDR      0xF0004688     /* "Message Object 20 Interrupt Pointer Register" */
#define CAN_MOAMR20_ADDR      0xF000468C     /* "Message Object 20 Acceptance Mask Register" */
#define CAN_MODATAL20_ADDR    0xF0004690     /* "Message Object 20 Data Register Low" */
#define CAN_MODATAH20_ADDR    0xF0004694     /* "Message Object 20 Data Register High" */
#define CAN_MOAR20_ADDR       0xF0004698     /* "Message Object 20 Arbitration Register" */
#define CAN_MOCTR20_ADDR      0xF000469C     /* "Message Object 20 Control Register" */
#define CAN_MOFCR21_ADDR      0xF00046A0     /* "Message Object 21 Function Control Register" */
#define CAN_MOFGPR21_ADDR     0xF00046A4     /* "Message Object 21 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR21_ADDR      0xF00046A8     /* "Message Object 21 Interrupt Pointer Register" */
#define CAN_MOAMR21_ADDR      0xF00046AC     /* "Message Object 21 Acceptance Mask Register" */
#define CAN_MODATAL21_ADDR    0xF00046B0     /* "Message Object 21 Data Register Low" */
#define CAN_MODATAH21_ADDR    0xF00046B4     /* "Message Object 21 Data Register High" */
#define CAN_MOAR21_ADDR       0xF00046B8     /* "Message Object 21 Arbitration Register" */
#define CAN_MOCTR21_ADDR      0xF00046BC     /* "Message Object 21 Control Register" */
#define CAN_MOFCR22_ADDR      0xF00046C0     /* "Message Object 22 Function Control Register" */
#define CAN_MOFGPR22_ADDR     0xF00046C4     /* "Message Object 22 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR22_ADDR      0xF00046C8     /* "Message Object 22 Interrupt Pointer Register" */
#define CAN_MOAMR22_ADDR      0xF00046CC     /* "Message Object 22 Acceptance Mask Register" */
#define CAN_MODATAL22_ADDR    0xF00046D0     /* "Message Object 22 Data Register Low" */
#define CAN_MODATAH22_ADDR    0xF00046D4     /* "Message Object 22 Data Register High" */
#define CAN_MOAR22_ADDR       0xF00046D8     /* "Message Object 22 Arbitration Register" */
#define CAN_MOCTR22_ADDR      0xF00046DC     /* "Message Object 22 Control Register" */
#define CAN_MOFCR23_ADDR      0xF00046E0     /* "Message Object 23 Function Control Register" */
#define CAN_MOFGPR23_ADDR     0xF00046E4     /* "Message Object 23 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR23_ADDR      0xF00046E8     /* "Message Object 23 Interrupt Pointer Register" */
#define CAN_MOAMR23_ADDR      0xF00046EC     /* "Message Object 23 Acceptance Mask Register" */
#define CAN_MODATAL23_ADDR    0xF00046F0     /* "Message Object 23 Data Register Low" */
#define CAN_MODATAH23_ADDR    0xF00046F4     /* "Message Object 23 Data Register High" */
#define CAN_MOAR23_ADDR       0xF00046F8     /* "Message Object 23 Arbitration Register" */
#define CAN_MOCTR23_ADDR      0xF00046FC     /* "Message Object 23 Control Register" */
#define CAN_MOFCR24_ADDR      0xF0004700     /* "Message Object 24 Function Control Register" */
#define CAN_MOFGPR24_ADDR     0xF0004704     /* "Message Object 24 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR24_ADDR      0xF0004708     /* "Message Object 24 Interrupt Pointer Register" */
#define CAN_MOAMR24_ADDR      0xF000470C     /* "Message Object 24 Acceptance Mask Register" */
#define CAN_MODATAL24_ADDR    0xF0004710     /* "Message Object 24 Data Register Low" */
#define CAN_MODATAH24_ADDR    0xF0004714     /* "Message Object 24 Data Register High" */
#define CAN_MOAR24_ADDR       0xF0004718     /* "Message Object 24 Arbitration Register" */
#define CAN_MOCTR24_ADDR      0xF000471C     /* "Message Object 24 Control Register" */
#define CAN_MOFCR25_ADDR      0xF0004720     /* "Message Object 25 Function Control Register" */
#define CAN_MOFGPR25_ADDR     0xF0004724     /* "Message Object 25 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR25_ADDR      0xF0004728     /* "Message Object 25 Interrupt Pointer Register" */
#define CAN_MOAMR25_ADDR      0xF000472C     /* "Message Object 25 Acceptance Mask Register" */
#define CAN_MODATAL25_ADDR    0xF0004730     /* "Message Object 25 Data Register Low" */
#define CAN_MODATAH25_ADDR    0xF0004734     /* "Message Object 25 Data Register High" */
#define CAN_MOAR25_ADDR       0xF0004738     /* "Message Object 25 Arbitration Register" */
#define CAN_MOCTR25_ADDR      0xF000473C     /* "Message Object 25 Control Register" */
#define CAN_MOFCR26_ADDR      0xF0004740     /* "Message Object 26 Function Control Register" */
#define CAN_MOFGPR26_ADDR     0xF0004744     /* "Message Object 26 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR26_ADDR      0xF0004748     /* "Message Object 26 Interrupt Pointer Register" */
#define CAN_MOAMR26_ADDR      0xF000474C     /* "Message Object 26 Acceptance Mask Register" */
#define CAN_MODATAL26_ADDR    0xF0004750     /* "Message Object 26 Data Register Low" */
#define CAN_MODATAH26_ADDR    0xF0004754     /* "Message Object 26 Data Register High" */
#define CAN_MOAR26_ADDR       0xF0004758     /* "Message Object 26 Arbitration Register" */
#define CAN_MOCTR26_ADDR      0xF000475C     /* "Message Object 26 Control Register" */
#define CAN_MOFCR27_ADDR      0xF0004760     /* "Message Object 27 Function Control Register" */
#define CAN_MOFGPR27_ADDR     0xF0004764     /* "Message Object 27 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR27_ADDR      0xF0004768     /* "Message Object 27 Interrupt Pointer Register" */
#define CAN_MOAMR27_ADDR      0xF000476C     /* "Message Object 27 Acceptance Mask Register" */
#define CAN_MODATAL27_ADDR    0xF0004770     /* "Message Object 27 Data Register Low" */
#define CAN_MODATAH27_ADDR    0xF0004774     /* "Message Object 27 Data Register High" */
#define CAN_MOAR27_ADDR       0xF0004778     /* "Message Object 27 Arbitration Register" */
#define CAN_MOCTR27_ADDR      0xF000477C     /* "Message Object 27 Control Register" */
#define CAN_MOFCR28_ADDR      0xF0004780     /* "Message Object 28 Function Control Register" */
#define CAN_MOFGPR28_ADDR     0xF0004784     /* "Message Object 28 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR28_ADDR      0xF0004788     /* "Message Object 28 Interrupt Pointer Register" */
#define CAN_MOAMR28_ADDR      0xF000478C     /* "Message Object 28 Acceptance Mask Register" */
#define CAN_MODATAL28_ADDR    0xF0004790     /* "Message Object 28 Data Register Low" */
#define CAN_MODATAH28_ADDR    0xF0004794     /* "Message Object 28 Data Register High" */
#define CAN_MOAR28_ADDR       0xF0004798     /* "Message Object 28 Arbitration Register" */
#define CAN_MOCTR28_ADDR      0xF000479C     /* "Message Object 28 Control Register" */
#define CAN_MOFCR29_ADDR      0xF00047A0     /* "Message Object 29 Function Control Register" */
#define CAN_MOFGPR29_ADDR     0xF00047A4     /* "Message Object 29 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR29_ADDR      0xF00047A8     /* "Message Object 29 Interrupt Pointer Register" */
#define CAN_MOAMR29_ADDR      0xF00047AC     /* "Message Object 29 Acceptance Mask Register" */
#define CAN_MODATAL29_ADDR    0xF00047B0     /* "Message Object 29 Data Register Low" */
#define CAN_MODATAH29_ADDR    0xF00047B4     /* "Message Object 29 Data Register High" */
#define CAN_MOAR29_ADDR       0xF00047B8     /* "Message Object 29 Arbitration Register" */
#define CAN_MOCTR29_ADDR      0xF00047BC     /* "Message Object 29 Control Register" */
#define CAN_MOFCR30_ADDR      0xF00047C0     /* "Message Object 30 Function Control Register" */
#define CAN_MOFGPR30_ADDR     0xF00047C4     /* "Message Object 30 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR30_ADDR      0xF00047C8     /* "Message Object 30 Interrupt Pointer Register" */
#define CAN_MOAMR30_ADDR      0xF00047CC     /* "Message Object 30 Acceptance Mask Register" */
#define CAN_MODATAL30_ADDR    0xF00047D0     /* "Message Object 30 Data Register Low" */
#define CAN_MODATAH30_ADDR    0xF00047D4     /* "Message Object 30 Data Register High" */
#define CAN_MOAR30_ADDR       0xF00047D8     /* "Message Object 30 Arbitration Register" */
#define CAN_MOCTR30_ADDR      0xF00047DC     /* "Message Object 30 Control Register" */
#define CAN_MOFCR31_ADDR      0xF00047E0     /* "Message Object 31 Function Control Register" */
#define CAN_MOFGPR31_ADDR     0xF00047E4     /* "Message Object 31 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR31_ADDR      0xF00047E8     /* "Message Object 31 Interrupt Pointer Register" */
#define CAN_MOAMR31_ADDR      0xF00047EC     /* "Message Object 31 Acceptance Mask Register" */
#define CAN_MODATAL31_ADDR    0xF00047F0     /* "Message Object 31 Data Register Low" */
#define CAN_MODATAH31_ADDR    0xF00047F4     /* "Message Object 31 Data Register High" */
#define CAN_MOAR31_ADDR       0xF00047F8     /* "Message Object 31 Arbitration Register" */
#define CAN_MOCTR31_ADDR      0xF00047FC     /* "Message Object 31 Control Register" */
#define CAN_MOFCR32_ADDR      0xF0004800     /* "Message Object 32 Function Control Register" */
#define CAN_MOFGPR32_ADDR     0xF0004804     /* "Message Object 32 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR32_ADDR      0xF0004808     /* "Message Object 32 Interrupt Pointer Register" */
#define CAN_MOAMR32_ADDR      0xF000480C     /* "Message Object 32 Acceptance Mask Register" */
#define CAN_MODATAL32_ADDR    0xF0004810     /* "Message Object 32 Data Register Low" */
#define CAN_MODATAH32_ADDR    0xF0004814     /* "Message Object 32 Data Register High" */
#define CAN_MOAR32_ADDR       0xF0004818     /* "Message Object 32 Arbitration Register" */
#define CAN_MOCTR32_ADDR      0xF000481C     /* "Message Object 32 Control Register" */
#define CAN_MOFCR33_ADDR      0xF0004820     /* "Message Object 33 Function Control Register" */
#define CAN_MOFGPR33_ADDR     0xF0004824     /* "Message Object 33 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR33_ADDR      0xF0004828     /* "Message Object 33 Interrupt Pointer Register" */
#define CAN_MOAMR33_ADDR      0xF000482C     /* "Message Object 33 Acceptance Mask Register" */
#define CAN_MODATAL33_ADDR    0xF0004830     /* "Message Object 33 Data Register Low" */
#define CAN_MODATAH33_ADDR    0xF0004834     /* "Message Object 33 Data Register High" */
#define CAN_MOAR33_ADDR       0xF0004838     /* "Message Object 33 Arbitration Register" */
#define CAN_MOCTR33_ADDR      0xF000483C     /* "Message Object 33 Control Register" */
#define CAN_MOFCR34_ADDR      0xF0004840     /* "Message Object 34 Function Control Register" */
#define CAN_MOFGPR34_ADDR     0xF0004844     /* "Message Object 34 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR34_ADDR      0xF0004848     /* "Message Object 34 Interrupt Pointer Register" */
#define CAN_MOAMR34_ADDR      0xF000484C     /* "Message Object 34 Acceptance Mask Register" */
#define CAN_MODATAL34_ADDR    0xF0004850     /* "Message Object 34 Data Register Low" */
#define CAN_MODATAH34_ADDR    0xF0004854     /* "Message Object 34 Data Register High" */
#define CAN_MOAR34_ADDR       0xF0004858     /* "Message Object 34 Arbitration Register" */
#define CAN_MOCTR34_ADDR      0xF000485C     /* "Message Object 34 Control Register" */
#define CAN_MOFCR35_ADDR      0xF0004860     /* "Message Object 35 Function Control Register" */
#define CAN_MOFGPR35_ADDR     0xF0004864     /* "Message Object 35 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR35_ADDR      0xF0004868     /* "Message Object 35 Interrupt Pointer Register" */
#define CAN_MOAMR35_ADDR      0xF000486C     /* "Message Object 35 Acceptance Mask Register" */
#define CAN_MODATAL35_ADDR    0xF0004870     /* "Message Object 35 Data Register Low" */
#define CAN_MODATAH35_ADDR    0xF0004874     /* "Message Object 35 Data Register High" */
#define CAN_MOAR35_ADDR       0xF0004878     /* "Message Object 35 Arbitration Register" */
#define CAN_MOCTR35_ADDR      0xF000487C     /* "Message Object 35 Control Register" */
#define CAN_MOFCR36_ADDR      0xF0004880     /* "Message Object 36 Function Control Register" */
#define CAN_MOFGPR36_ADDR     0xF0004884     /* "Message Object 36 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR36_ADDR      0xF0004888     /* "Message Object 36 Interrupt Pointer Register" */
#define CAN_MOAMR36_ADDR      0xF000488C     /* "Message Object 36 Acceptance Mask Register" */
#define CAN_MODATAL36_ADDR    0xF0004890     /* "Message Object 36 Data Register Low" */
#define CAN_MODATAH36_ADDR    0xF0004894     /* "Message Object 36 Data Register High" */
#define CAN_MOAR36_ADDR       0xF0004898     /* "Message Object 36 Arbitration Register" */
#define CAN_MOCTR36_ADDR      0xF000489C     /* "Message Object 36 Control Register" */
#define CAN_MOFCR37_ADDR      0xF00048A0     /* "Message Object 37 Function Control Register" */
#define CAN_MOFGPR37_ADDR     0xF00048A4     /* "Message Object 37 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR37_ADDR      0xF00048A8     /* "Message Object 37 Interrupt Pointer Register" */
#define CAN_MOAMR37_ADDR      0xF00048AC     /* "Message Object 37 Acceptance Mask Register" */
#define CAN_MODATAL37_ADDR    0xF00048B0     /* "Message Object 37 Data Register Low" */
#define CAN_MODATAH37_ADDR    0xF00048B4     /* "Message Object 37 Data Register High" */
#define CAN_MOAR37_ADDR       0xF00048B8     /* "Message Object 37 Arbitration Register" */
#define CAN_MOCTR37_ADDR      0xF00048BC     /* "Message Object 37 Control Register" */
#define CAN_MOFCR38_ADDR      0xF00048C0     /* "Message Object 38 Function Control Register" */
#define CAN_MOFGPR38_ADDR     0xF00048C4     /* "Message Object 38 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR38_ADDR      0xF00048C8     /* "Message Object 38 Interrupt Pointer Register" */
#define CAN_MOAMR38_ADDR      0xF00048CC     /* "Message Object 38 Acceptance Mask Register" */
#define CAN_MODATAL38_ADDR    0xF00048D0     /* "Message Object 38 Data Register Low" */
#define CAN_MODATAH38_ADDR    0xF00048D4     /* "Message Object 38 Data Register High" */
#define CAN_MOAR38_ADDR       0xF00048D8     /* "Message Object 38 Arbitration Register" */
#define CAN_MOCTR38_ADDR      0xF00048DC     /* "Message Object 38 Control Register" */
#define CAN_MOFCR39_ADDR      0xF00048E0     /* "Message Object 39 Function Control Register" */
#define CAN_MOFGPR39_ADDR     0xF00048E4     /* "Message Object 39 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR39_ADDR      0xF00048E8     /* "Message Object 39 Interrupt Pointer Register" */
#define CAN_MOAMR39_ADDR      0xF00048EC     /* "Message Object 39 Acceptance Mask Register" */
#define CAN_MODATAL39_ADDR    0xF00048F0     /* "Message Object 39 Data Register Low" */
#define CAN_MODATAH39_ADDR    0xF00048F4     /* "Message Object 39 Data Register High" */
#define CAN_MOAR39_ADDR       0xF00048F8     /* "Message Object 39 Arbitration Register" */
#define CAN_MOCTR39_ADDR      0xF00048FC     /* "Message Object 39 Control Register" */
#define CAN_MOFCR40_ADDR      0xF0004900     /* "Message Object 40 Function Control Register" */
#define CAN_MOFGPR40_ADDR     0xF0004904     /* "Message Object 40 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR40_ADDR      0xF0004908     /* "Message Object 40 Interrupt Pointer Register" */
#define CAN_MOAMR40_ADDR      0xF000490C     /* "Message Object 40 Acceptance Mask Register" */
#define CAN_MODATAL40_ADDR    0xF0004910     /* "Message Object 40 Data Register Low" */
#define CAN_MODATAH40_ADDR    0xF0004914     /* "Message Object 40 Data Register High" */
#define CAN_MOAR40_ADDR       0xF0004918     /* "Message Object 40 Arbitration Register" */
#define CAN_MOCTR40_ADDR      0xF000491C     /* "Message Object 40 Control Register" */
#define CAN_MOFCR41_ADDR      0xF0004920     /* "Message Object 41 Function Control Register" */
#define CAN_MOFGPR41_ADDR     0xF0004924     /* "Message Object 41 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR41_ADDR      0xF0004928     /* "Message Object 41 Interrupt Pointer Register" */
#define CAN_MOAMR41_ADDR      0xF000492C     /* "Message Object 41 Acceptance Mask Register" */
#define CAN_MODATAL41_ADDR    0xF0004930     /* "Message Object 41 Data Register Low" */
#define CAN_MODATAH41_ADDR    0xF0004934     /* "Message Object 41 Data Register High" */
#define CAN_MOAR41_ADDR       0xF0004938     /* "Message Object 41 Arbitration Register" */
#define CAN_MOCTR41_ADDR      0xF000493C     /* "Message Object 41 Control Register" */
#define CAN_MOFCR42_ADDR      0xF0004940     /* "Message Object 42 Function Control Register" */
#define CAN_MOFGPR42_ADDR     0xF0004944     /* "Message Object 42 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR42_ADDR      0xF0004948     /* "Message Object 42 Interrupt Pointer Register" */
#define CAN_MOAMR42_ADDR      0xF000494C     /* "Message Object 42 Acceptance Mask Register" */
#define CAN_MODATAL42_ADDR    0xF0004950     /* "Message Object 42 Data Register Low" */
#define CAN_MODATAH42_ADDR    0xF0004954     /* "Message Object 42 Data Register High" */
#define CAN_MOAR42_ADDR       0xF0004958     /* "Message Object 42 Arbitration Register" */
#define CAN_MOCTR42_ADDR      0xF000495C     /* "Message Object 42 Control Register" */
#define CAN_MOFCR43_ADDR      0xF0004960     /* "Message Object 43 Function Control Register" */
#define CAN_MOFGPR43_ADDR     0xF0004964     /* "Message Object 43 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR43_ADDR      0xF0004968     /* "Message Object 43 Interrupt Pointer Register" */
#define CAN_MOAMR43_ADDR      0xF000496C     /* "Message Object 43 Acceptance Mask Register" */
#define CAN_MODATAL43_ADDR    0xF0004970     /* "Message Object 43 Data Register Low" */
#define CAN_MODATAH43_ADDR    0xF0004974     /* "Message Object 43 Data Register High" */
#define CAN_MOAR43_ADDR       0xF0004978     /* "Message Object 43 Arbitration Register" */
#define CAN_MOCTR43_ADDR      0xF000497C     /* "Message Object 43 Control Register" */
#define CAN_MOFCR44_ADDR      0xF0004980     /* "Message Object 44 Function Control Register" */
#define CAN_MOFGPR44_ADDR     0xF0004984     /* "Message Object 44 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR44_ADDR      0xF0004988     /* "Message Object 44 Interrupt Pointer Register" */
#define CAN_MOAMR44_ADDR      0xF000498C     /* "Message Object 44 Acceptance Mask Register" */
#define CAN_MODATAL44_ADDR    0xF0004990     /* "Message Object 44 Data Register Low" */
#define CAN_MODATAH44_ADDR    0xF0004994     /* "Message Object 44 Data Register High" */
#define CAN_MOAR44_ADDR       0xF0004998     /* "Message Object 44 Arbitration Register" */
#define CAN_MOCTR44_ADDR      0xF000499C     /* "Message Object 44 Control Register" */
#define CAN_MOFCR45_ADDR      0xF00049A0     /* "Message Object 45 Function Control Register" */
#define CAN_MOFGPR45_ADDR     0xF00049A4     /* "Message Object 45 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR45_ADDR      0xF00049A8     /* "Message Object 45 Interrupt Pointer Register" */
#define CAN_MOAMR45_ADDR      0xF00049AC     /* "Message Object 45 Acceptance Mask Register" */
#define CAN_MODATAL45_ADDR    0xF00049B0     /* "Message Object 45 Data Register Low" */
#define CAN_MODATAH45_ADDR    0xF00049B4     /* "Message Object 45 Data Register High" */
#define CAN_MOAR45_ADDR       0xF00049B8     /* "Message Object 45 Arbitration Register" */
#define CAN_MOCTR45_ADDR      0xF00049BC     /* "Message Object 45 Control Register" */
#define CAN_MOFCR46_ADDR      0xF00049C0     /* "Message Object 46 Function Control Register" */
#define CAN_MOFGPR46_ADDR     0xF00049C4     /* "Message Object 46 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR46_ADDR      0xF00049C8     /* "Message Object 46 Interrupt Pointer Register" */
#define CAN_MOAMR46_ADDR      0xF00049CC     /* "Message Object 46 Acceptance Mask Register" */
#define CAN_MODATAL46_ADDR    0xF00049D0     /* "Message Object 46 Data Register Low" */
#define CAN_MODATAH46_ADDR    0xF00049D4     /* "Message Object 46 Data Register High" */
#define CAN_MOAR46_ADDR       0xF00049D8     /* "Message Object 46 Arbitration Register" */
#define CAN_MOCTR46_ADDR      0xF00049DC     /* "Message Object 46 Control Register" */
#define CAN_MOFCR47_ADDR      0xF00049E0     /* "Message Object 47 Function Control Register" */
#define CAN_MOFGPR47_ADDR     0xF00049E4     /* "Message Object 47 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR47_ADDR      0xF00049E8     /* "Message Object 47 Interrupt Pointer Register" */
#define CAN_MOAMR47_ADDR      0xF00049EC     /* "Message Object 47 Acceptance Mask Register" */
#define CAN_MODATAL47_ADDR    0xF00049F0     /* "Message Object 47 Data Register Low" */
#define CAN_MODATAH47_ADDR    0xF00049F4     /* "Message Object 47 Data Register High" */
#define CAN_MOAR47_ADDR       0xF00049F8     /* "Message Object 47 Arbitration Register" */
#define CAN_MOCTR47_ADDR      0xF00049FC     /* "Message Object 47 Control Register" */
#define CAN_MOFCR48_ADDR      0xF0004A00     /* "Message Object 48 Function Control Register" */
#define CAN_MOFGPR48_ADDR     0xF0004A04     /* "Message Object 48 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR48_ADDR      0xF0004A08     /* "Message Object 48 Interrupt Pointer Register" */
#define CAN_MOAMR48_ADDR      0xF0004A0C     /* "Message Object 48 Acceptance Mask Register" */
#define CAN_MODATAL48_ADDR    0xF0004A10     /* "Message Object 48 Data Register Low" */
#define CAN_MODATAH48_ADDR    0xF0004A14     /* "Message Object 48 Data Register High" */
#define CAN_MOAR48_ADDR       0xF0004A18     /* "Message Object 48 Arbitration Register" */
#define CAN_MOCTR48_ADDR      0xF0004A1C     /* "Message Object 48 Control Register" */
#define CAN_MOFCR49_ADDR      0xF0004A20     /* "Message Object 49 Function Control Register" */
#define CAN_MOFGPR49_ADDR     0xF0004A24     /* "Message Object 49 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR49_ADDR      0xF0004A28     /* "Message Object 49 Interrupt Pointer Register" */
#define CAN_MOAMR49_ADDR      0xF0004A2C     /* "Message Object 49 Acceptance Mask Register" */
#define CAN_MODATAL49_ADDR    0xF0004A30     /* "Message Object 49 Data Register Low" */
#define CAN_MODATAH49_ADDR    0xF0004A34     /* "Message Object 49 Data Register High" */
#define CAN_MOAR49_ADDR       0xF0004A38     /* "Message Object 49 Arbitration Register" */
#define CAN_MOCTR49_ADDR      0xF0004A3C     /* "Message Object 49 Control Register" */
#define CAN_MOFCR50_ADDR      0xF0004A40     /* "Message Object 50 Function Control Register" */
#define CAN_MOFGPR50_ADDR     0xF0004A44     /* "Message Object 50 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR50_ADDR      0xF0004A48     /* "Message Object 50 Interrupt Pointer Register" */
#define CAN_MOAMR50_ADDR      0xF0004A4C     /* "Message Object 50 Acceptance Mask Register" */
#define CAN_MODATAL50_ADDR    0xF0004A50     /* "Message Object 50 Data Register Low" */
#define CAN_MODATAH50_ADDR    0xF0004A54     /* "Message Object 50 Data Register High" */
#define CAN_MOAR50_ADDR       0xF0004A58     /* "Message Object 50 Arbitration Register" */
#define CAN_MOCTR50_ADDR      0xF0004A5C     /* "Message Object 50 Control Register" */
#define CAN_MOFCR51_ADDR      0xF0004A60     /* "Message Object 51 Function Control Register" */
#define CAN_MOFGPR51_ADDR     0xF0004A64     /* "Message Object 51 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR51_ADDR      0xF0004A68     /* "Message Object 51 Interrupt Pointer Register" */
#define CAN_MOAMR51_ADDR      0xF0004A6C     /* "Message Object 51 Acceptance Mask Register" */
#define CAN_MODATAL51_ADDR    0xF0004A70     /* "Message Object 51 Data Register Low" */
#define CAN_MODATAH51_ADDR    0xF0004A74     /* "Message Object 51 Data Register High" */
#define CAN_MOAR51_ADDR       0xF0004A78     /* "Message Object 51 Arbitration Register" */
#define CAN_MOCTR51_ADDR      0xF0004A7C     /* "Message Object 51 Control Register" */
#define CAN_MOFCR52_ADDR      0xF0004A80     /* "Message Object 52 Function Control Register" */
#define CAN_MOFGPR52_ADDR     0xF0004A84     /* "Message Object 52 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR52_ADDR      0xF0004A88     /* "Message Object 52 Interrupt Pointer Register" */
#define CAN_MOAMR52_ADDR      0xF0004A8C     /* "Message Object 52 Acceptance Mask Register" */
#define CAN_MODATAL52_ADDR    0xF0004A90     /* "Message Object 52 Data Register Low" */
#define CAN_MODATAH52_ADDR    0xF0004A94     /* "Message Object 52 Data Register High" */
#define CAN_MOAR52_ADDR       0xF0004A98     /* "Message Object 52 Arbitration Register" */
#define CAN_MOCTR52_ADDR      0xF0004A9C     /* "Message Object 52 Control Register" */
#define CAN_MOFCR53_ADDR      0xF0004AA0     /* "Message Object 53 Function Control Register" */
#define CAN_MOFGPR53_ADDR     0xF0004AA4     /* "Message Object 53 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR53_ADDR      0xF0004AA8     /* "Message Object 53 Interrupt Pointer Register" */
#define CAN_MOAMR53_ADDR      0xF0004AAC     /* "Message Object 53 Acceptance Mask Register" */
#define CAN_MODATAL53_ADDR    0xF0004AB0     /* "Message Object 53 Data Register Low" */
#define CAN_MODATAH53_ADDR    0xF0004AB4     /* "Message Object 53 Data Register High" */
#define CAN_MOAR53_ADDR       0xF0004AB8     /* "Message Object 53 Arbitration Register" */
#define CAN_MOCTR53_ADDR      0xF0004ABC     /* "Message Object 53 Control Register" */
#define CAN_MOFCR54_ADDR      0xF0004AC0     /* "Message Object 54 Function Control Register" */
#define CAN_MOFGPR54_ADDR     0xF0004AC4     /* "Message Object 54 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR54_ADDR      0xF0004AC8     /* "Message Object 54 Interrupt Pointer Register" */
#define CAN_MOAMR54_ADDR      0xF0004ACC     /* "Message Object 54 Acceptance Mask Register" */
#define CAN_MODATAL54_ADDR    0xF0004AD0     /* "Message Object 54 Data Register Low" */
#define CAN_MODATAH54_ADDR    0xF0004AD4     /* "Message Object 54 Data Register High" */
#define CAN_MOAR54_ADDR       0xF0004AD8     /* "Message Object 54 Arbitration Register" */
#define CAN_MOCTR54_ADDR      0xF0004ADC     /* "Message Object 54 Control Register" */
#define CAN_MOFCR55_ADDR      0xF0004AE0     /* "Message Object 55 Function Control Register" */
#define CAN_MOFGPR55_ADDR     0xF0004AE4     /* "Message Object 55 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR55_ADDR      0xF0004AE8     /* "Message Object 55 Interrupt Pointer Register" */
#define CAN_MOAMR55_ADDR      0xF0004AEC     /* "Message Object 55 Acceptance Mask Register" */
#define CAN_MODATAL55_ADDR    0xF0004AF0     /* "Message Object 55 Data Register Low" */
#define CAN_MODATAH55_ADDR    0xF0004AF4     /* "Message Object 55 Data Register High" */
#define CAN_MOAR55_ADDR       0xF0004AF8     /* "Message Object 55 Arbitration Register" */
#define CAN_MOCTR55_ADDR      0xF0004AFC     /* "Message Object 55 Control Register" */
#define CAN_MOFCR56_ADDR      0xF0004B00     /* "Message Object 56 Function Control Register" */
#define CAN_MOFGPR56_ADDR     0xF0004B04     /* "Message Object 56 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR56_ADDR      0xF0004B08     /* "Message Object 56 Interrupt Pointer Register" */
#define CAN_MOAMR56_ADDR      0xF0004B0C     /* "Message Object 56 Acceptance Mask Register" */
#define CAN_MODATAL56_ADDR    0xF0004B10     /* "Message Object 56 Data Register Low" */
#define CAN_MODATAH56_ADDR    0xF0004B14     /* "Message Object 56 Data Register High" */
#define CAN_MOAR56_ADDR       0xF0004B18     /* "Message Object 56 Arbitration Register" */
#define CAN_MOCTR56_ADDR      0xF0004B1C     /* "Message Object 56 Control Register" */
#define CAN_MOFCR57_ADDR      0xF0004B20     /* "Message Object 57 Function Control Register" */
#define CAN_MOFGPR57_ADDR     0xF0004B24     /* "Message Object 57 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR57_ADDR      0xF0004B28     /* "Message Object 57 Interrupt Pointer Register" */
#define CAN_MOAMR57_ADDR      0xF0004B2C     /* "Message Object 57 Acceptance Mask Register" */
#define CAN_MODATAL57_ADDR    0xF0004B30     /* "Message Object 57 Data Register Low" */
#define CAN_MODATAH57_ADDR    0xF0004B34     /* "Message Object 57 Data Register High" */
#define CAN_MOAR57_ADDR       0xF0004B38     /* "Message Object 57 Arbitration Register" */
#define CAN_MOCTR57_ADDR      0xF0004B3C     /* "Message Object 57 Control Register" */
#define CAN_MOFCR58_ADDR      0xF0004B40     /* "Message Object 58 Function Control Register" */
#define CAN_MOFGPR58_ADDR     0xF0004B44     /* "Message Object 58 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR58_ADDR      0xF0004B48     /* "Message Object 58 Interrupt Pointer Register" */
#define CAN_MOAMR58_ADDR      0xF0004B4C     /* "Message Object 58 Acceptance Mask Register" */
#define CAN_MODATAL58_ADDR    0xF0004B50     /* "Message Object 58 Data Register Low" */
#define CAN_MODATAH58_ADDR    0xF0004B54     /* "Message Object 58 Data Register High" */
#define CAN_MOAR58_ADDR       0xF0004B58     /* "Message Object 58 Arbitration Register" */
#define CAN_MOCTR58_ADDR      0xF0004B5C     /* "Message Object 58 Control Register" */
#define CAN_MOFCR59_ADDR      0xF0004B60     /* "Message Object 59 Function Control Register" */
#define CAN_MOFGPR59_ADDR     0xF0004B64     /* "Message Object 59 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR59_ADDR      0xF0004B68     /* "Message Object 59 Interrupt Pointer Register" */
#define CAN_MOAMR59_ADDR      0xF0004B6C     /* "Message Object 59 Acceptance Mask Register" */
#define CAN_MODATAL59_ADDR    0xF0004B70     /* "Message Object 59 Data Register Low" */
#define CAN_MODATAH59_ADDR    0xF0004B74     /* "Message Object 59 Data Register High" */
#define CAN_MOAR59_ADDR       0xF0004B78     /* "Message Object 59 Arbitration Register" */
#define CAN_MOCTR59_ADDR      0xF0004B7C     /* "Message Object 59 Control Register" */
#define CAN_MOFCR60_ADDR      0xF0004B80     /* "Message Object 60 Function Control Register" */
#define CAN_MOFGPR60_ADDR     0xF0004B84     /* "Message Object 60 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR60_ADDR      0xF0004B88     /* "Message Object 60 Interrupt Pointer Register" */
#define CAN_MOAMR60_ADDR      0xF0004B8C     /* "Message Object 60 Acceptance Mask Register" */
#define CAN_MODATAL60_ADDR    0xF0004B90     /* "Message Object 60 Data Register Low" */
#define CAN_MODATAH60_ADDR    0xF0004B94     /* "Message Object 60 Data Register High" */
#define CAN_MOAR60_ADDR       0xF0004B98     /* "Message Object 60 Arbitration Register" */
#define CAN_MOCTR60_ADDR      0xF0004B9C     /* "Message Object 60 Control Register" */
#define CAN_MOFCR61_ADDR      0xF0004BA0     /* "Message Object 61 Function Control Register" */
#define CAN_MOFGPR61_ADDR     0xF0004BA4     /* "Message Object 61 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR61_ADDR      0xF0004BA8     /* "Message Object 61 Interrupt Pointer Register" */
#define CAN_MOAMR61_ADDR      0xF0004BAC     /* "Message Object 61 Acceptance Mask Register" */
#define CAN_MODATAL61_ADDR    0xF0004BB0     /* "Message Object 61 Data Register Low" */
#define CAN_MODATAH61_ADDR    0xF0004BB4     /* "Message Object 61 Data Register High" */
#define CAN_MOAR61_ADDR       0xF0004BB8     /* "Message Object 61 Arbitration Register" */
#define CAN_MOCTR61_ADDR      0xF0004BBC     /* "Message Object 61 Control Register" */
#define CAN_MOFCR62_ADDR      0xF0004BC0     /* "Message Object 62 Function Control Register" */
#define CAN_MOFGPR62_ADDR     0xF0004BC4     /* "Message Object 62 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR62_ADDR      0xF0004BC8     /* "Message Object 62 Interrupt Pointer Register" */
#define CAN_MOAMR62_ADDR      0xF0004BCC     /* "Message Object 62 Acceptance Mask Register" */
#define CAN_MODATAL62_ADDR    0xF0004BD0     /* "Message Object 62 Data Register Low" */
#define CAN_MODATAH62_ADDR    0xF0004BD4     /* "Message Object 62 Data Register High" */
#define CAN_MOAR62_ADDR       0xF0004BD8     /* "Message Object 62 Arbitration Register" */
#define CAN_MOCTR62_ADDR      0xF0004BDC     /* "Message Object 62 Control Register" */
#define CAN_MOFCR63_ADDR      0xF0004BE0     /* "Message Object 63 Function Control Register" */
#define CAN_MOFGPR63_ADDR     0xF0004BE4     /* "Message Object 63 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR63_ADDR      0xF0004BE8     /* "Message Object 63 Interrupt Pointer Register" */
#define CAN_MOAMR63_ADDR      0xF0004BEC     /* "Message Object 63 Acceptance Mask Register" */
#define CAN_MODATAL63_ADDR    0xF0004BF0     /* "Message Object 63 Data Register Low" */
#define CAN_MODATAH63_ADDR    0xF0004BF4     /* "Message Object 63 Data Register High" */
#define CAN_MOAR63_ADDR       0xF0004BF8     /* "Message Object 63 Arbitration Register" */
#define CAN_MOCTR63_ADDR      0xF0004BFC     /* "Message Object 63 Control Register" */


#endif /* _HAVE_TRICORE_CAN_ADDRESSES_H_ (block "MultiCAN LL") */


