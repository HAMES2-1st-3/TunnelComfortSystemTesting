/* (c) HighTec EDV-Systeme GmbH */

/* block "ERAY" of TriCore TC1798 (264 SFRs) */

#ifndef _HAVE_TRICORE_ERAY_ADDRESSES_H_
#define _HAVE_TRICORE_ERAY_ADDRESSES_H_

#define ERAY_CLC_ADDR         0xF0010000     /* "ERAY Clock Control Register" */
#define ERAY_CUST1_ADDR       0xF0010004     /* "Busy and Input Buffer Control Register" */
#define ERAY_ID_ADDR          0xF0010008     /* "Module Identification Register" */
#define ERAY_CUST3_ADDR       0xF001000C     /* "Customer Interface Timeout Counter" */
#define ERAY_TEST1_ADDR       0xF0010010     /* "Test Register 1" */
#define ERAY_TEST2_ADDR       0xF0010014     /* "Test Register 2" */
#define ERAY_LCK_ADDR         0xF001001C     /* "Lock Register" */
#define ERAY_EIR_ADDR         0xF0010020     /* "Error Service Request Register" */
#define ERAY_SIR_ADDR         0xF0010024     /* "Status Service Request Register" */
#define ERAY_EILS_ADDR        0xF0010028     /* "Error Service Request Line Select" */
#define ERAY_SILS_ADDR        0xF001002C     /* "Status Service Request Line Select" */
#define ERAY_EIES_ADDR        0xF0010030     /* "Error Service Request Enable Set" */
#define ERAY_EIER_ADDR        0xF0010034     /* "Error Service Request Enable Reset" */
#define ERAY_SIES_ADDR        0xF0010038     /* "Status Service Request Enable Set" */
#define ERAY_SIER_ADDR        0xF001003C     /* "Status Service Request Enable Reset" */
#define ERAY_ILE_ADDR         0xF0010040     /* "Service Request Line Enable" */
#define ERAY_T0C_ADDR         0xF0010044     /* "Timer 0 Configuration" */
#define ERAY_T1C_ADDR         0xF0010048     /* "Timer 1 Configuration" */
#define ERAY_STPW1_ADDR       0xF001004C     /* "Stop Watch Register 1" */
#define ERAY_STPW2_ADDR       0xF0010050     /* "Stop Watch Register 2" */
#define ERAY_SUCC1_ADDR       0xF0010080     /* "SUC Configuration Register 1" */
#define ERAY_SUCC2_ADDR       0xF0010084     /* "SUC Configuration Register 2" */
#define ERAY_SUCC3_ADDR       0xF0010088     /* "SUC Configuration Register 3" */
#define ERAY_NEMC_ADDR        0xF001008C     /* "NEM Configuration Register" */
#define ERAY_PRTC1_ADDR       0xF0010090     /* "PRT Configuration Register 1" */
#define ERAY_PRTC2_ADDR       0xF0010094     /* "PRT Configuration Register 2" */
#define ERAY_MHDC_ADDR        0xF0010098     /* "MHD Configuration Register" */
#define ERAY_GTUC01_ADDR      0xF00100A0     /* "GTU Configuration Register 1" */
#define ERAY_GTUC02_ADDR      0xF00100A4     /* "GTU Configuration Register 2" */
#define ERAY_GTUC03_ADDR      0xF00100A8     /* "GTU Configuration Register 3" */
#define ERAY_GTUC04_ADDR      0xF00100AC     /* "GTU Configuration Register 4" */
#define ERAY_GTUC05_ADDR      0xF00100B0     /* "GTU Configuration Register 5" */
#define ERAY_GTUC06_ADDR      0xF00100B4     /* "GTU Configuration Register 6" */
#define ERAY_GTUC07_ADDR      0xF00100B8     /* "GTU Configuration Register 7" */
#define ERAY_GTUC08_ADDR      0xF00100BC     /* "GTU Configuration Register 8" */
#define ERAY_GTUC09_ADDR      0xF00100C0     /* "GTU Configuration Register 9" */
#define ERAY_GTUC10_ADDR      0xF00100C4     /* "GTU Configuration Register 10" */
#define ERAY_GTUC11_ADDR      0xF00100C8     /* "GTU Configuration Register 11" */
#define ERAY_CCSV_ADDR        0xF0010100     /* "Communication Controller Status Vector" */
#define ERAY_CCEV_ADDR        0xF0010104     /* "Communication Controller Error Vector" */
#define ERAY_SCV_ADDR         0xF0010110     /* "Slot Counter Value" */
#define ERAY_MTCCV_ADDR       0xF0010114     /* "Macrotick and Cycle Counter Value" */
#define ERAY_RCV_ADDR         0xF0010118     /* "Rate Correction Value" */
#define ERAY_OCV_ADDR         0xF001011C     /* "Offset Correction Value" */
#define ERAY_SFS_ADDR         0xF0010120     /* "SYNC Frame Status" */
#define ERAY_SWNIT_ADDR       0xF0010124     /* "Symbol Window and Network Idle Time Status" */
#define ERAY_ACS_ADDR         0xF0010128     /* "Aggregated Channel Status" */
#define ERAY_ESID01_ADDR      0xF0010130     /* "Even Sync ID Symbol Window 01" */
#define ERAY_ESID02_ADDR      0xF0010134     /* "Even Sync ID Symbol Window 02" */
#define ERAY_ESID03_ADDR      0xF0010138     /* "Even Sync ID Symbol Window 03" */
#define ERAY_ESID04_ADDR      0xF001013C     /* "Even Sync ID Symbol Window 04" */
#define ERAY_ESID05_ADDR      0xF0010140     /* "Even Sync ID Symbol Window 05" */
#define ERAY_ESID06_ADDR      0xF0010144     /* "Even Sync ID Symbol Window 06" */
#define ERAY_ESID07_ADDR      0xF0010148     /* "Even Sync ID Symbol Window 07" */
#define ERAY_ESID08_ADDR      0xF001014C     /* "Even Sync ID Symbol Window 08" */
#define ERAY_ESID09_ADDR      0xF0010150     /* "Even Sync ID Symbol Window 09" */
#define ERAY_ESID10_ADDR      0xF0010154     /* "Even Sync ID Symbol Window 10" */
#define ERAY_ESID11_ADDR      0xF0010158     /* "Even Sync ID Symbol Window 11" */
#define ERAY_ESID12_ADDR      0xF001015C     /* "Even Sync ID Symbol Window 12" */
#define ERAY_ESID13_ADDR      0xF0010160     /* "Even Sync ID Symbol Window 13" */
#define ERAY_ESID14_ADDR      0xF0010164     /* "Even Sync ID Symbol Window 14" */
#define ERAY_ESID15_ADDR      0xF0010168     /* "Even Sync ID Symbol Window 15" */
#define ERAY_OSID01_ADDR      0xF0010170     /* "Odd Sync ID Symbol Window 01" */
#define ERAY_OSID02_ADDR      0xF0010174     /* "Odd Sync ID Symbol Window 02" */
#define ERAY_OSID03_ADDR      0xF0010178     /* "Odd Sync ID Symbol Window 03" */
#define ERAY_OSID04_ADDR      0xF001017C     /* "Odd Sync ID Symbol Window 04" */
#define ERAY_OSID05_ADDR      0xF0010180     /* "Odd Sync ID Symbol Window 05" */
#define ERAY_OSID06_ADDR      0xF0010184     /* "Odd Sync ID Symbol Window 06" */
#define ERAY_OSID07_ADDR      0xF0010188     /* "Odd Sync ID Symbol Window 07" */
#define ERAY_OSID08_ADDR      0xF001018C     /* "Odd Sync ID Symbol Window 08" */
#define ERAY_OSID09_ADDR      0xF0010190     /* "Odd Sync ID Symbol Window 09" */
#define ERAY_OSID10_ADDR      0xF0010194     /* "Odd Sync ID Symbol Window 10" */
#define ERAY_OSID11_ADDR      0xF0010198     /* "Odd Sync ID Symbol Window 11" */
#define ERAY_OSID12_ADDR      0xF001019C     /* "Odd Sync ID Symbol Window 12" */
#define ERAY_OSID13_ADDR      0xF00101A0     /* "Odd Sync ID Symbol Window 13" */
#define ERAY_OSID14_ADDR      0xF00101A4     /* "Odd Sync ID Symbol Window 14" */
#define ERAY_OSID15_ADDR      0xF00101A8     /* "Odd Sync ID Symbol Window 15" */
#define ERAY_NMV1_ADDR        0xF00101B0     /* "Network Management Vector 1" */
#define ERAY_NMV2_ADDR        0xF00101B4     /* "Network Management Vector 2" */
#define ERAY_NMV3_ADDR        0xF00101B8     /* "Network Management Vector 3" */
#define ERAY_MRC_ADDR         0xF0010300     /* "Message RAM Configuration" */
#define ERAY_FRF_ADDR         0xF0010304     /* "FIFO Rejection Filter" */
#define ERAY_FRFM_ADDR        0xF0010308     /* "FIFO Rejection Filter Mask" */
#define ERAY_FCL_ADDR         0xF001030C     /* "FIFO Critical Level" */
#define ERAY_MHDS_ADDR        0xF0010310     /* "Message Handler Status" */
#define ERAY_LDTS_ADDR        0xF0010314     /* "Last Dynamic Transmit Slot" */
#define ERAY_FSR_ADDR         0xF0010318     /* "FIFO Status Register" */
#define ERAY_MHDF_ADDR        0xF001031C     /* "Message Handler Constraints Flags" */
#define ERAY_TXRQ1_ADDR       0xF0010320     /* "Transmission Request Register 1" */
#define ERAY_TXRQ2_ADDR       0xF0010324     /* "Transmission Request Register 2" */
#define ERAY_TXRQ3_ADDR       0xF0010328     /* "Transmission Request Register 3" */
#define ERAY_TXRQ4_ADDR       0xF001032C     /* "Transmission Request Register 4" */
#define ERAY_NDAT1_ADDR       0xF0010330     /* "New Data Register 1" */
#define ERAY_NDAT2_ADDR       0xF0010334     /* "New Data Register 2" */
#define ERAY_NDAT3_ADDR       0xF0010338     /* "New Data Register 3" */
#define ERAY_NDAT4_ADDR       0xF001033C     /* "New Data Register 4" */
#define ERAY_MBSC1_ADDR       0xF0010340     /* "Message Buffer Status Changed 1" */
#define ERAY_MBSC2_ADDR       0xF0010344     /* "Message Buffer Status Changed 2" */
#define ERAY_MBSC3_ADDR       0xF0010348     /* "Message Buffer Status Changed 3" */
#define ERAY_MBSC4_ADDR       0xF001034C     /* "Message Buffer Status Changed 4" */
#define ERAY_NDIC1_ADDR       0xF00103A8     /* "New Data Interrupt Control 1" */
#define ERAY_NDIC2_ADDR       0xF00103AC     /* "New Data Interrupt Control 2" */
#define ERAY_NDIC3_ADDR       0xF00103B0     /* "New Data Interrupt Control 3" */
#define ERAY_NDIC4_ADDR       0xF00103B4     /* "New Data Interrupt Control 4" */
#define ERAY_MSIC1_ADDR       0xF00103B8     /* "Message Buffer Status Changed Interrupt Control 1" */
#define ERAY_MSIC2_ADDR       0xF00103BC     /* "Message Buffer Status Changed Interrupt Control 2" */
#define ERAY_MSIC3_ADDR       0xF00103C0     /* "Message Buffer Status Changed Interrupt Control 3" */
#define ERAY_MSIC4_ADDR       0xF00103C4     /* "Message Buffer Status Changed Interrupt Control 4" */
#define ERAY_IBUSYSRC_ADDR    0xF00103C8     /* "Input Buffer Busy Service Request Control Register" */
#define ERAY_OBUSYSRC_ADDR    0xF00103CC     /* "Output Buffer Busy Service Request Control Register" */
#define ERAY_MBSC1SRC_ADDR    0xF00103D0     /* "Message Buffer Status Changed 1 Service Request Control Register" */
#define ERAY_MBSC0SRC_ADDR    0xF00103D4     /* "Message Buffer Status Changed 0 Service Request Control Register" */
#define ERAY_NDAT1SRC_ADDR    0xF00103D8     /* "New Data 1 Service Request Control Register" */
#define ERAY_NDAT0SRC_ADDR    0xF00103DC     /* "New Data 0 Service Request Control Register" */
#define ERAY_TINT1SRC_ADDR    0xF00103E0     /* "Timer Interrupt 1 Service Request Control Register" */
#define ERAY_TINT0SRC_ADDR    0xF00103E4     /* "Timer Interrupt 0 Service Request Control Register" */
#define ERAY_INT1SRC_ADDR     0xF00103E8     /* "Interrupt 1 Service Request Control Register" */
#define ERAY_INT0SRC_ADDR     0xF00103EC     /* "Interrupt 0 Service Request Control Register" */
#define ERAY_CREL_ADDR        0xF00103F0     /* "Core Release Register" */
#define ERAY_ENDN_ADDR        0xF00103F4     /* "Endian Register" */
#define ERAY_WRDS01_ADDR      0xF0010400     /* "Write Data Section 01" */
#define ERAY_WRDS02_ADDR      0xF0010404     /* "Write Data Section 02" */
#define ERAY_WRDS03_ADDR      0xF0010408     /* "Write Data Section 03" */
#define ERAY_WRDS04_ADDR      0xF001040C     /* "Write Data Section 04" */
#define ERAY_WRDS05_ADDR      0xF0010410     /* "Write Data Section 05" */
#define ERAY_WRDS06_ADDR      0xF0010414     /* "Write Data Section 06" */
#define ERAY_WRDS07_ADDR      0xF0010418     /* "Write Data Section 07" */
#define ERAY_WRDS08_ADDR      0xF001041C     /* "Write Data Section 08" */
#define ERAY_WRDS09_ADDR      0xF0010420     /* "Write Data Section 09" */
#define ERAY_WRDS10_ADDR      0xF0010424     /* "Write Data Section 10" */
#define ERAY_WRDS11_ADDR      0xF0010428     /* "Write Data Section 11" */
#define ERAY_WRDS12_ADDR      0xF001042C     /* "Write Data Section 12" */
#define ERAY_WRDS13_ADDR      0xF0010430     /* "Write Data Section 13" */
#define ERAY_WRDS14_ADDR      0xF0010434     /* "Write Data Section 14" */
#define ERAY_WRDS15_ADDR      0xF0010438     /* "Write Data Section 15" */
#define ERAY_WRDS16_ADDR      0xF001043C     /* "Write Data Section 16" */
#define ERAY_WRDS17_ADDR      0xF0010440     /* "Write Data Section 17" */
#define ERAY_WRDS18_ADDR      0xF0010444     /* "Write Data Section 18" */
#define ERAY_WRDS19_ADDR      0xF0010448     /* "Write Data Section 19" */
#define ERAY_WRDS20_ADDR      0xF001044C     /* "Write Data Section 20" */
#define ERAY_WRDS21_ADDR      0xF0010450     /* "Write Data Section 21" */
#define ERAY_WRDS22_ADDR      0xF0010454     /* "Write Data Section 22" */
#define ERAY_WRDS23_ADDR      0xF0010458     /* "Write Data Section 23" */
#define ERAY_WRDS24_ADDR      0xF001045C     /* "Write Data Section 24" */
#define ERAY_WRDS25_ADDR      0xF0010460     /* "Write Data Section 25" */
#define ERAY_WRDS26_ADDR      0xF0010464     /* "Write Data Section 26" */
#define ERAY_WRDS27_ADDR      0xF0010468     /* "Write Data Section 27" */
#define ERAY_WRDS28_ADDR      0xF001046C     /* "Write Data Section 28" */
#define ERAY_WRDS29_ADDR      0xF0010470     /* "Write Data Section 29" */
#define ERAY_WRDS30_ADDR      0xF0010474     /* "Write Data Section 30" */
#define ERAY_WRDS31_ADDR      0xF0010478     /* "Write Data Section 31" */
#define ERAY_WRDS32_ADDR      0xF001047C     /* "Write Data Section 32" */
#define ERAY_WRDS33_ADDR      0xF0010480     /* "Write Data Section 33" */
#define ERAY_WRDS34_ADDR      0xF0010484     /* "Write Data Section 34" */
#define ERAY_WRDS35_ADDR      0xF0010488     /* "Write Data Section 35" */
#define ERAY_WRDS36_ADDR      0xF001048C     /* "Write Data Section 36" */
#define ERAY_WRDS37_ADDR      0xF0010490     /* "Write Data Section 37" */
#define ERAY_WRDS38_ADDR      0xF0010494     /* "Write Data Section 38" */
#define ERAY_WRDS39_ADDR      0xF0010498     /* "Write Data Section 39" */
#define ERAY_WRDS40_ADDR      0xF001049C     /* "Write Data Section 40" */
#define ERAY_WRDS41_ADDR      0xF00104A0     /* "Write Data Section 41" */
#define ERAY_WRDS42_ADDR      0xF00104A4     /* "Write Data Section 42" */
#define ERAY_WRDS43_ADDR      0xF00104A8     /* "Write Data Section 43" */
#define ERAY_WRDS44_ADDR      0xF00104AC     /* "Write Data Section 44" */
#define ERAY_WRDS45_ADDR      0xF00104B0     /* "Write Data Section 45" */
#define ERAY_WRDS46_ADDR      0xF00104B4     /* "Write Data Section 46" */
#define ERAY_WRDS47_ADDR      0xF00104B8     /* "Write Data Section 47" */
#define ERAY_WRDS48_ADDR      0xF00104BC     /* "Write Data Section 48" */
#define ERAY_WRDS49_ADDR      0xF00104C0     /* "Write Data Section 49" */
#define ERAY_WRDS50_ADDR      0xF00104C4     /* "Write Data Section 50" */
#define ERAY_WRDS51_ADDR      0xF00104C8     /* "Write Data Section 51" */
#define ERAY_WRDS52_ADDR      0xF00104CC     /* "Write Data Section 52" */
#define ERAY_WRDS53_ADDR      0xF00104D0     /* "Write Data Section 53" */
#define ERAY_WRDS54_ADDR      0xF00104D4     /* "Write Data Section 54" */
#define ERAY_WRDS55_ADDR      0xF00104D8     /* "Write Data Section 55" */
#define ERAY_WRDS56_ADDR      0xF00104DC     /* "Write Data Section 56" */
#define ERAY_WRDS57_ADDR      0xF00104E0     /* "Write Data Section 57" */
#define ERAY_WRDS58_ADDR      0xF00104E4     /* "Write Data Section 58" */
#define ERAY_WRDS59_ADDR      0xF00104E8     /* "Write Data Section 59" */
#define ERAY_WRDS60_ADDR      0xF00104EC     /* "Write Data Section 60" */
#define ERAY_WRDS61_ADDR      0xF00104F0     /* "Write Data Section 61" */
#define ERAY_WRDS62_ADDR      0xF00104F4     /* "Write Data Section 62" */
#define ERAY_WRDS63_ADDR      0xF00104F8     /* "Write Data Section 63" */
#define ERAY_WRDS64_ADDR      0xF00104FC     /* "Write Data Section 64" */
#define ERAY_WRHS1_ADDR       0xF0010500     /* "Write Header Section 1" */
#define ERAY_WRHS2_ADDR       0xF0010504     /* "Write Header Section 2" */
#define ERAY_WRHS3_ADDR       0xF0010508     /* "Write Header Section 3" */
#define ERAY_IBCM_ADDR        0xF0010510     /* "Input Buffer Command Mask" */
#define ERAY_IBCR_ADDR        0xF0010514     /* "Input Buffer Command Request" */
#define ERAY_RDDS01_ADDR      0xF0010600     /* "Read Data Section 01" */
#define ERAY_RDDS02_ADDR      0xF0010604     /* "Read Data Section 02" */
#define ERAY_RDDS03_ADDR      0xF0010608     /* "Read Data Section 03" */
#define ERAY_RDDS04_ADDR      0xF001060C     /* "Read Data Section 04" */
#define ERAY_RDDS05_ADDR      0xF0010610     /* "Read Data Section 05" */
#define ERAY_RDDS06_ADDR      0xF0010614     /* "Read Data Section 06" */
#define ERAY_RDDS07_ADDR      0xF0010618     /* "Read Data Section 07" */
#define ERAY_RDDS08_ADDR      0xF001061C     /* "Read Data Section 08" */
#define ERAY_RDDS09_ADDR      0xF0010620     /* "Read Data Section 09" */
#define ERAY_RDDS10_ADDR      0xF0010624     /* "Read Data Section 10" */
#define ERAY_RDDS11_ADDR      0xF0010628     /* "Read Data Section 11" */
#define ERAY_RDDS12_ADDR      0xF001062C     /* "Read Data Section 12" */
#define ERAY_RDDS13_ADDR      0xF0010630     /* "Read Data Section 13" */
#define ERAY_RDDS14_ADDR      0xF0010634     /* "Read Data Section 14" */
#define ERAY_RDDS15_ADDR      0xF0010638     /* "Read Data Section 15" */
#define ERAY_RDDS16_ADDR      0xF001063C     /* "Read Data Section 16" */
#define ERAY_RDDS17_ADDR      0xF0010640     /* "Read Data Section 17" */
#define ERAY_RDDS18_ADDR      0xF0010644     /* "Read Data Section 18" */
#define ERAY_RDDS19_ADDR      0xF0010648     /* "Read Data Section 19" */
#define ERAY_RDDS20_ADDR      0xF001064C     /* "Read Data Section 20" */
#define ERAY_RDDS21_ADDR      0xF0010650     /* "Read Data Section 21" */
#define ERAY_RDDS22_ADDR      0xF0010654     /* "Read Data Section 22" */
#define ERAY_RDDS23_ADDR      0xF0010658     /* "Read Data Section 23" */
#define ERAY_RDDS24_ADDR      0xF001065C     /* "Read Data Section 24" */
#define ERAY_RDDS25_ADDR      0xF0010660     /* "Read Data Section 25" */
#define ERAY_RDDS26_ADDR      0xF0010664     /* "Read Data Section 26" */
#define ERAY_RDDS27_ADDR      0xF0010668     /* "Read Data Section 27" */
#define ERAY_RDDS28_ADDR      0xF001066C     /* "Read Data Section 28" */
#define ERAY_RDDS29_ADDR      0xF0010670     /* "Read Data Section 29" */
#define ERAY_RDDS30_ADDR      0xF0010674     /* "Read Data Section 30" */
#define ERAY_RDDS31_ADDR      0xF0010678     /* "Read Data Section 31" */
#define ERAY_RDDS32_ADDR      0xF001067C     /* "Read Data Section 32" */
#define ERAY_RDDS33_ADDR      0xF0010680     /* "Read Data Section 33" */
#define ERAY_RDDS34_ADDR      0xF0010684     /* "Read Data Section 34" */
#define ERAY_RDDS35_ADDR      0xF0010688     /* "Read Data Section 35" */
#define ERAY_RDDS36_ADDR      0xF001068C     /* "Read Data Section 36" */
#define ERAY_RDDS37_ADDR      0xF0010690     /* "Read Data Section 37" */
#define ERAY_RDDS38_ADDR      0xF0010694     /* "Read Data Section 38" */
#define ERAY_RDDS39_ADDR      0xF0010698     /* "Read Data Section 39" */
#define ERAY_RDDS40_ADDR      0xF001069C     /* "Read Data Section 40" */
#define ERAY_RDDS41_ADDR      0xF00106A0     /* "Read Data Section 41" */
#define ERAY_RDDS42_ADDR      0xF00106A4     /* "Read Data Section 42" */
#define ERAY_RDDS43_ADDR      0xF00106A8     /* "Read Data Section 43" */
#define ERAY_RDDS44_ADDR      0xF00106AC     /* "Read Data Section 44" */
#define ERAY_RDDS45_ADDR      0xF00106B0     /* "Read Data Section 45" */
#define ERAY_RDDS46_ADDR      0xF00106B4     /* "Read Data Section 46" */
#define ERAY_RDDS47_ADDR      0xF00106B8     /* "Read Data Section 47" */
#define ERAY_RDDS48_ADDR      0xF00106BC     /* "Read Data Section 48" */
#define ERAY_RDDS49_ADDR      0xF00106C0     /* "Read Data Section 49" */
#define ERAY_RDDS50_ADDR      0xF00106C4     /* "Read Data Section 50" */
#define ERAY_RDDS51_ADDR      0xF00106C8     /* "Read Data Section 51" */
#define ERAY_RDDS52_ADDR      0xF00106CC     /* "Read Data Section 52" */
#define ERAY_RDDS53_ADDR      0xF00106D0     /* "Read Data Section 53" */
#define ERAY_RDDS54_ADDR      0xF00106D4     /* "Read Data Section 54" */
#define ERAY_RDDS55_ADDR      0xF00106D8     /* "Read Data Section 55" */
#define ERAY_RDDS56_ADDR      0xF00106DC     /* "Read Data Section 56" */
#define ERAY_RDDS57_ADDR      0xF00106E0     /* "Read Data Section 57" */
#define ERAY_RDDS58_ADDR      0xF00106E4     /* "Read Data Section 58" */
#define ERAY_RDDS59_ADDR      0xF00106E8     /* "Read Data Section 59" */
#define ERAY_RDDS60_ADDR      0xF00106EC     /* "Read Data Section 60" */
#define ERAY_RDDS61_ADDR      0xF00106F0     /* "Read Data Section 61" */
#define ERAY_RDDS62_ADDR      0xF00106F4     /* "Read Data Section 62" */
#define ERAY_RDDS63_ADDR      0xF00106F8     /* "Read Data Section 63" */
#define ERAY_RDDS64_ADDR      0xF00106FC     /* "Read Data Section 64" */
#define ERAY_RDHS1_ADDR       0xF0010700     /* "Read Header Section 1" */
#define ERAY_RDHS2_ADDR       0xF0010704     /* "Read Header Section 2" */
#define ERAY_RDHS3_ADDR       0xF0010708     /* "Read Header Section 3" */
#define ERAY_MBS_ADDR         0xF001070C     /* "Message Buffer Status" */
#define ERAY_OBCM_ADDR        0xF0010710     /* "Output Buffer Command Mask" */
#define ERAY_OBCR_ADDR        0xF0010714     /* "Output Buffer Command Request" */
#define ERAY_SECCON_ADDR      0xF0010800     /* "SEC Control" */
#define ERAY_SEDCON_ADDR      0xF0010804     /* "SED Control" */
#define ERAY_DEDCON_ADDR      0xF0010808     /* "DED Control" */
#define ERAY_ECCR_ADDR        0xF001080C     /* "ECC Data Read Register" */
#define ERAY_ECCW_ADDR        0xF0010810     /* "ECC Data Write Register" */


#endif /* _HAVE_TRICORE_ERAY_ADDRESSES_H_ (block "ERAY") */


