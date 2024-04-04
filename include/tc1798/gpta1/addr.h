/* (c) HighTec EDV-Systeme GmbH */

/* block "GPTA1" of TriCore TC1798 (286 SFRs) */

#ifndef _HAVE_TRICORE_GPTA1_ADDRESSES_H_
#define _HAVE_TRICORE_GPTA1_ADDRESSES_H_

#define GPTA1_ID_ADDR         0xF0002008     /* "GPTA1 Identification Register" */
#define GPTA1_SRSC0_ADDR      0xF0002010     /* "GPTA1 Service Request State Clear Register 0" */
#define GPTA1_SRSS0_ADDR      0xF0002014     /* "GPTA1 Service Request State Set Register 0" */
#define GPTA1_SRSC1_ADDR      0xF0002018     /* "GPTA1 Service Request State Clear Register 1" */
#define GPTA1_SRSS1_ADDR      0xF000201C     /* "GPTA1 Service Request State Set Register 1" */
#define GPTA1_SRSC2_ADDR      0xF0002020     /* "GPTA1 Service Request State Clear Register 2" */
#define GPTA1_SRSS2_ADDR      0xF0002024     /* "GPTA1 Service Request State Set Register 2" */
#define GPTA1_SRSC3_ADDR      0xF0002028     /* "GPTA1 Service Request State Clear Register 3" */
#define GPTA1_SRSS3_ADDR      0xF000202C     /* "GPTA1 Service Request State Set Register 3" */
#define GPTA1_SRNR_ADDR       0xF0002030     /* "GPTA1 Service Request Node Redirection Register" */
#define GPTA1_MRACTL_ADDR     0xF0002038     /* "GPTA1 Multiplexer Register Array Control Register" */
#define GPTA1_MRADIN_ADDR     0xF000203C     /* "GPTA1 Multiplexer Register Array Data In Register" */
#define GPTA1_MRADOUT_ADDR    0xF0002040     /* "GPTA1 Multiplexer Register Array Data Out Register" */
#define GPTA1_FPCSTAT_ADDR    0xF0002044     /* "GPTA1 Filter and Prescaler Cell Status Register" */
#define GPTA1_FPCCTR0_ADDR    0xF0002048     /* "GPTA1 Filter and Prescaler Cell Control Register 0" */
#define GPTA1_FPCTIM0_ADDR    0xF000204C     /* "GPTA1 Filter and Prescaler Cell Timer Register 0" */
#define GPTA1_FPCCTR1_ADDR    0xF0002050     /* "GPTA1 Filter and Prescaler Cell Control Register 1" */
#define GPTA1_FPCTIM1_ADDR    0xF0002054     /* "GPTA1 Filter and Prescaler Cell Timer Register 1" */
#define GPTA1_FPCCTR2_ADDR    0xF0002058     /* "GPTA1 Filter and Prescaler Cell Control Register 2" */
#define GPTA1_FPCTIM2_ADDR    0xF000205C     /* "GPTA1 Filter and Prescaler Cell Timer Register 2" */
#define GPTA1_FPCCTR3_ADDR    0xF0002060     /* "GPTA1 Filter and Prescaler Cell Control Register 3" */
#define GPTA1_FPCTIM3_ADDR    0xF0002064     /* "GPTA1 Filter and Prescaler Cell Timer Register 3" */
#define GPTA1_FPCCTR4_ADDR    0xF0002068     /* "GPTA1 Filter and Prescaler Cell Control Register 4" */
#define GPTA1_FPCTIM4_ADDR    0xF000206C     /* "GPTA1 Filter and Prescaler Cell Timer Register 4" */
#define GPTA1_FPCCTR5_ADDR    0xF0002070     /* "GPTA1 Filter and Prescaler Cell Control Register 5" */
#define GPTA1_FPCTIM5_ADDR    0xF0002074     /* "GPTA1 Filter and Prescaler Cell Timer Register 5" */
#define GPTA1_PDLCTR_ADDR     0xF0002078     /* "GPTA1 Phase Discrimination Logic Control Register" */
#define GPTA1_DCMCTR0_ADDR    0xF0002080     /* "GPTA1 Duty Cycle Measurement Control Register 0" */
#define GPTA1_DCMTIM0_ADDR    0xF0002084     /* "GPTA1 Duty Cycle Measurement Timer Register 0" */
#define GPTA1_DCMCAV0_ADDR    0xF0002088     /* "GPTA1 Duty Cycle Measurement Capture Register 0" */
#define GPTA1_DCMCOV0_ADDR    0xF000208C     /* "GPTA1 Duty Cycle Measurement Capture/Compare Register 0" */
#define GPTA1_DCMCTR1_ADDR    0xF0002090     /* "GPTA1 Duty Cycle Measurement Control Register 1" */
#define GPTA1_DCMTIM1_ADDR    0xF0002094     /* "GPTA1 Duty Cycle Measurement Timer Register 1" */
#define GPTA1_DCMCAV1_ADDR    0xF0002098     /* "GPTA1 Duty Cycle Measurement Capture Register 1" */
#define GPTA1_DCMCOV1_ADDR    0xF000209C     /* "GPTA1 Duty Cycle Measurement Capture/Compare Register 1" */
#define GPTA1_DCMCTR2_ADDR    0xF00020A0     /* "GPTA1 Duty Cycle Measurement Control Register 2" */
#define GPTA1_DCMTIM2_ADDR    0xF00020A4     /* "GPTA1 Duty Cycle Measurement Timer Register 2" */
#define GPTA1_DCMCAV2_ADDR    0xF00020A8     /* "GPTA1 Duty Cycle Measurement Capture Register 2" */
#define GPTA1_DCMCOV2_ADDR    0xF00020AC     /* "GPTA1 Duty Cycle Measurement Capture/Compare Register 2" */
#define GPTA1_DCMCTR3_ADDR    0xF00020B0     /* "GPTA1 Duty Cycle Measurement Control Register 3" */
#define GPTA1_DCMTIM3_ADDR    0xF00020B4     /* "GPTA1 Duty Cycle Measurement Timer Register 3" */
#define GPTA1_DCMCAV3_ADDR    0xF00020B8     /* "GPTA1 Duty Cycle Measurement Capture Register 3" */
#define GPTA1_DCMCOV3_ADDR    0xF00020BC     /* "GPTA1 Duty Cycle Measurement Capture/Compare Register 3" */
#define GPTA1_PLLCTR_ADDR     0xF00020C0     /* "GPTA1 Phase Locked Loop Control Register" */
#define GPTA1_PLLMTI_ADDR     0xF00020C4     /* "GPTA1 Phase Locked Loop Microtick Register" */
#define GPTA1_PLLCNT_ADDR     0xF00020C8     /* "GPTA1 Phase Locked Loop Counter Register" */
#define GPTA1_PLLSTP_ADDR     0xF00020CC     /* "GPTA1 Phase Locked Loop Step Register" */
#define GPTA1_PLLREV_ADDR     0xF00020D0     /* "GPTA1 Phase Locked Loop Reload Register" */
#define GPTA1_PLLDTR_ADDR     0xF00020D4     /* "GPTA1 Phase Locked Loop Delta Register" */
#define GPTA1_CKBCTR_ADDR     0xF00020D8     /* "GPTA1 Clock Bus Control Register" */
#define GPTA1_GTCTR0_ADDR     0xF00020E0     /* "GPTA1 Global Timer Control Register 0" */
#define GPTA1_GTREV0_ADDR     0xF00020E4     /* "GPTA1 Global Timer Reload Value Register 0" */
#define GPTA1_GTTIM0_ADDR     0xF00020E8     /* "GPTA1 Global Timer Register 0" */
#define GPTA1_GTCTR1_ADDR     0xF00020F0     /* "GPTA1 Global Timer Control Register 1" */
#define GPTA1_GTREV1_ADDR     0xF00020F4     /* "GPTA1 Global Timer Reload Value Register 1" */
#define GPTA1_GTTIM1_ADDR     0xF00020F8     /* "GPTA1 Global Timer Register 1" */
#define GPTA1_GTCCTR00_ADDR   0xF0002100     /* "GPTA1 Global Timer Cell Control Register 00" */
#define GPTA1_GTCXR00_ADDR    0xF0002104     /* "GPTA1 Global Timer Cell X Register 00" */
#define GPTA1_GTCCTR01_ADDR   0xF0002108     /* "GPTA1 Global Timer Cell Control Register 01" */
#define GPTA1_GTCXR01_ADDR    0xF000210C     /* "GPTA1 Global Timer Cell X Register 01" */
#define GPTA1_GTCCTR02_ADDR   0xF0002110     /* "GPTA1 Global Timer Cell Control Register 02" */
#define GPTA1_GTCXR02_ADDR    0xF0002114     /* "GPTA1 Global Timer Cell X Register 02" */
#define GPTA1_GTCCTR03_ADDR   0xF0002118     /* "GPTA1 Global Timer Cell Control Register 03" */
#define GPTA1_GTCXR03_ADDR    0xF000211C     /* "GPTA1 Global Timer Cell X Register 03" */
#define GPTA1_GTCCTR04_ADDR   0xF0002120     /* "GPTA1 Global Timer Cell Control Register 04" */
#define GPTA1_GTCXR04_ADDR    0xF0002124     /* "GPTA1 Global Timer Cell X Register 04" */
#define GPTA1_GTCCTR05_ADDR   0xF0002128     /* "GPTA1 Global Timer Cell Control Register 05" */
#define GPTA1_GTCXR05_ADDR    0xF000212C     /* "GPTA1 Global Timer Cell X Register 05" */
#define GPTA1_GTCCTR06_ADDR   0xF0002130     /* "GPTA1 Global Timer Cell Control Register 06" */
#define GPTA1_GTCXR06_ADDR    0xF0002134     /* "GPTA1 Global Timer Cell X Register 06" */
#define GPTA1_GTCCTR07_ADDR   0xF0002138     /* "GPTA1 Global Timer Cell Control Register 07" */
#define GPTA1_GTCXR07_ADDR    0xF000213C     /* "GPTA1 Global Timer Cell X Register 07" */
#define GPTA1_GTCCTR08_ADDR   0xF0002140     /* "GPTA1 Global Timer Cell Control Register 08" */
#define GPTA1_GTCXR08_ADDR    0xF0002144     /* "GPTA1 Global Timer Cell X Register 08" */
#define GPTA1_GTCCTR09_ADDR   0xF0002148     /* "GPTA1 Global Timer Cell Control Register 09" */
#define GPTA1_GTCXR09_ADDR    0xF000214C     /* "GPTA1 Global Timer Cell X Register 09" */
#define GPTA1_GTCCTR10_ADDR   0xF0002150     /* "GPTA1 Global Timer Cell Control Register 10" */
#define GPTA1_GTCXR10_ADDR    0xF0002154     /* "GPTA1 Global Timer Cell X Register 10" */
#define GPTA1_GTCCTR11_ADDR   0xF0002158     /* "GPTA1 Global Timer Cell Control Register 11" */
#define GPTA1_GTCXR11_ADDR    0xF000215C     /* "GPTA1 Global Timer Cell X Register 11" */
#define GPTA1_GTCCTR12_ADDR   0xF0002160     /* "GPTA1 Global Timer Cell Control Register 12" */
#define GPTA1_GTCXR12_ADDR    0xF0002164     /* "GPTA1 Global Timer Cell X Register 12" */
#define GPTA1_GTCCTR13_ADDR   0xF0002168     /* "GPTA1 Global Timer Cell Control Register 13" */
#define GPTA1_GTCXR13_ADDR    0xF000216C     /* "GPTA1 Global Timer Cell X Register 13" */
#define GPTA1_GTCCTR14_ADDR   0xF0002170     /* "GPTA1 Global Timer Cell Control Register 14" */
#define GPTA1_GTCXR14_ADDR    0xF0002174     /* "GPTA1 Global Timer Cell X Register 14" */
#define GPTA1_GTCCTR15_ADDR   0xF0002178     /* "GPTA1 Global Timer Cell Control Register 15" */
#define GPTA1_GTCXR15_ADDR    0xF000217C     /* "GPTA1 Global Timer Cell X Register 15" */
#define GPTA1_GTCCTR16_ADDR   0xF0002180     /* "GPTA1 Global Timer Cell Control Register 16" */
#define GPTA1_GTCXR16_ADDR    0xF0002184     /* "GPTA1 Global Timer Cell X Register 16" */
#define GPTA1_GTCCTR17_ADDR   0xF0002188     /* "GPTA1 Global Timer Cell Control Register 17" */
#define GPTA1_GTCXR17_ADDR    0xF000218C     /* "GPTA1 Global Timer Cell X Register 17" */
#define GPTA1_GTCCTR18_ADDR   0xF0002190     /* "GPTA1 Global Timer Cell Control Register 18" */
#define GPTA1_GTCXR18_ADDR    0xF0002194     /* "GPTA1 Global Timer Cell X Register 18" */
#define GPTA1_GTCCTR19_ADDR   0xF0002198     /* "GPTA1 Global Timer Cell Control Register 19" */
#define GPTA1_GTCXR19_ADDR    0xF000219C     /* "GPTA1 Global Timer Cell X Register 19" */
#define GPTA1_GTCCTR20_ADDR   0xF00021A0     /* "GPTA1 Global Timer Cell Control Register 20" */
#define GPTA1_GTCXR20_ADDR    0xF00021A4     /* "GPTA1 Global Timer Cell X Register 20" */
#define GPTA1_GTCCTR21_ADDR   0xF00021A8     /* "GPTA1 Global Timer Cell Control Register 21" */
#define GPTA1_GTCXR21_ADDR    0xF00021AC     /* "GPTA1 Global Timer Cell X Register 21" */
#define GPTA1_GTCCTR22_ADDR   0xF00021B0     /* "GPTA1 Global Timer Cell Control Register 22" */
#define GPTA1_GTCXR22_ADDR    0xF00021B4     /* "GPTA1 Global Timer Cell X Register 22" */
#define GPTA1_GTCCTR23_ADDR   0xF00021B8     /* "GPTA1 Global Timer Cell Control Register 23" */
#define GPTA1_GTCXR23_ADDR    0xF00021BC     /* "GPTA1 Global Timer Cell X Register 23" */
#define GPTA1_GTCCTR24_ADDR   0xF00021C0     /* "GPTA1 Global Timer Cell Control Register 24" */
#define GPTA1_GTCXR24_ADDR    0xF00021C4     /* "GPTA1 Global Timer Cell X Register 24" */
#define GPTA1_GTCCTR25_ADDR   0xF00021C8     /* "GPTA1 Global Timer Cell Control Register 25" */
#define GPTA1_GTCXR25_ADDR    0xF00021CC     /* "GPTA1 Global Timer Cell X Register 25" */
#define GPTA1_GTCCTR26_ADDR   0xF00021D0     /* "GPTA1 Global Timer Cell Control Register 26" */
#define GPTA1_GTCXR26_ADDR    0xF00021D4     /* "GPTA1 Global Timer Cell X Register 26" */
#define GPTA1_GTCCTR27_ADDR   0xF00021D8     /* "GPTA1 Global Timer Cell Control Register 27" */
#define GPTA1_GTCXR27_ADDR    0xF00021DC     /* "GPTA1 Global Timer Cell X Register 27" */
#define GPTA1_GTCCTR28_ADDR   0xF00021E0     /* "GPTA1 Global Timer Cell Control Register 28" */
#define GPTA1_GTCXR28_ADDR    0xF00021E4     /* "GPTA1 Global Timer Cell X Register 28" */
#define GPTA1_GTCCTR29_ADDR   0xF00021E8     /* "GPTA1 Global Timer Cell Control Register 29" */
#define GPTA1_GTCXR29_ADDR    0xF00021EC     /* "GPTA1 Global Timer Cell X Register 29" */
#define GPTA1_GTCCTR30_ADDR   0xF00021F0     /* "GPTA1 Global Timer Cell Control Register 30" */
#define GPTA1_GTCXR30_ADDR    0xF00021F4     /* "GPTA1 Global Timer Cell X Register 30" */
#define GPTA1_GTCCTR31_ADDR   0xF00021F8     /* "GPTA1 Global Timer Cell Control Register 31" */
#define GPTA1_GTCXR31_ADDR    0xF00021FC     /* "GPTA1 Global Timer Cell X Register 31" */
#define GPTA1_LTCCTR00_ADDR   0xF0002200     /* "GPTA1 Local Timer Cell Control Register 00" */
#define GPTA1_LTCXR00_ADDR    0xF0002204     /* "GPTA1 Local Timer Cell X Register 00" */
#define GPTA1_LTCCTR01_ADDR   0xF0002208     /* "GPTA1 Local Timer Cell Control Register 01" */
#define GPTA1_LTCXR01_ADDR    0xF000220C     /* "GPTA1 Local Timer Cell X Register 01" */
#define GPTA1_LTCCTR02_ADDR   0xF0002210     /* "GPTA1 Local Timer Cell Control Register 02" */
#define GPTA1_LTCXR02_ADDR    0xF0002214     /* "GPTA1 Local Timer Cell X Register 02" */
#define GPTA1_LTCCTR03_ADDR   0xF0002218     /* "GPTA1 Local Timer Cell Control Register 03" */
#define GPTA1_LTCXR03_ADDR    0xF000221C     /* "GPTA1 Local Timer Cell X Register 03" */
#define GPTA1_LTCCTR04_ADDR   0xF0002220     /* "GPTA1 Local Timer Cell Control Register 04" */
#define GPTA1_LTCXR04_ADDR    0xF0002224     /* "GPTA1 Local Timer Cell X Register 04" */
#define GPTA1_LTCCTR05_ADDR   0xF0002228     /* "GPTA1 Local Timer Cell Control Register 05" */
#define GPTA1_LTCXR05_ADDR    0xF000222C     /* "GPTA1 Local Timer Cell X Register 05" */
#define GPTA1_LTCCTR06_ADDR   0xF0002230     /* "GPTA1 Local Timer Cell Control Register 06" */
#define GPTA1_LTCXR06_ADDR    0xF0002234     /* "GPTA1 Local Timer Cell X Register 06" */
#define GPTA1_LTCCTR07_ADDR   0xF0002238     /* "GPTA1 Local Timer Cell Control Register 07" */
#define GPTA1_LTCXR07_ADDR    0xF000223C     /* "GPTA1 Local Timer Cell X Register 07" */
#define GPTA1_LTCCTR08_ADDR   0xF0002240     /* "GPTA1 Local Timer Cell Control Register 08" */
#define GPTA1_LTCXR08_ADDR    0xF0002244     /* "GPTA1 Local Timer Cell X Register 08" */
#define GPTA1_LTCCTR09_ADDR   0xF0002248     /* "GPTA1 Local Timer Cell Control Register 09" */
#define GPTA1_LTCXR09_ADDR    0xF000224C     /* "GPTA1 Local Timer Cell X Register 09" */
#define GPTA1_LTCCTR10_ADDR   0xF0002250     /* "GPTA1 Local Timer Cell Control Register 10" */
#define GPTA1_LTCXR10_ADDR    0xF0002254     /* "GPTA1 Local Timer Cell X Register 10" */
#define GPTA1_LTCCTR11_ADDR   0xF0002258     /* "GPTA1 Local Timer Cell Control Register 11" */
#define GPTA1_LTCXR11_ADDR    0xF000225C     /* "GPTA1 Local Timer Cell X Register 11" */
#define GPTA1_LTCCTR12_ADDR   0xF0002260     /* "GPTA1 Local Timer Cell Control Register 12" */
#define GPTA1_LTCXR12_ADDR    0xF0002264     /* "GPTA1 Local Timer Cell X Register 12" */
#define GPTA1_LTCCTR13_ADDR   0xF0002268     /* "GPTA1 Local Timer Cell Control Register 13" */
#define GPTA1_LTCXR13_ADDR    0xF000226C     /* "GPTA1 Local Timer Cell X Register 13" */
#define GPTA1_LTCCTR14_ADDR   0xF0002270     /* "GPTA1 Local Timer Cell Control Register 14" */
#define GPTA1_LTCXR14_ADDR    0xF0002274     /* "GPTA1 Local Timer Cell X Register 14" */
#define GPTA1_LTCCTR15_ADDR   0xF0002278     /* "GPTA1 Local Timer Cell Control Register 15" */
#define GPTA1_LTCXR15_ADDR    0xF000227C     /* "GPTA1 Local Timer Cell X Register 15" */
#define GPTA1_LTCCTR16_ADDR   0xF0002280     /* "GPTA1 Local Timer Cell Control Register 16" */
#define GPTA1_LTCXR16_ADDR    0xF0002284     /* "GPTA1 Local Timer Cell X Register 16" */
#define GPTA1_LTCCTR17_ADDR   0xF0002288     /* "GPTA1 Local Timer Cell Control Register 17" */
#define GPTA1_LTCXR17_ADDR    0xF000228C     /* "GPTA1 Local Timer Cell X Register 17" */
#define GPTA1_LTCCTR18_ADDR   0xF0002290     /* "GPTA1 Local Timer Cell Control Register 18" */
#define GPTA1_LTCXR18_ADDR    0xF0002294     /* "GPTA1 Local Timer Cell X Register 18" */
#define GPTA1_LTCCTR19_ADDR   0xF0002298     /* "GPTA1 Local Timer Cell Control Register 19" */
#define GPTA1_LTCXR19_ADDR    0xF000229C     /* "GPTA1 Local Timer Cell X Register 19" */
#define GPTA1_LTCCTR20_ADDR   0xF00022A0     /* "GPTA1 Local Timer Cell Control Register 20" */
#define GPTA1_LTCXR20_ADDR    0xF00022A4     /* "GPTA1 Local Timer Cell X Register 20" */
#define GPTA1_LTCCTR21_ADDR   0xF00022A8     /* "GPTA1 Local Timer Cell Control Register 21" */
#define GPTA1_LTCXR21_ADDR    0xF00022AC     /* "GPTA1 Local Timer Cell X Register 21" */
#define GPTA1_LTCCTR22_ADDR   0xF00022B0     /* "GPTA1 Local Timer Cell Control Register 22" */
#define GPTA1_LTCXR22_ADDR    0xF00022B4     /* "GPTA1 Local Timer Cell X Register 22" */
#define GPTA1_LTCCTR23_ADDR   0xF00022B8     /* "GPTA1 Local Timer Cell Control Register 23" */
#define GPTA1_LTCXR23_ADDR    0xF00022BC     /* "GPTA1 Local Timer Cell X Register 23" */
#define GPTA1_LTCCTR24_ADDR   0xF00022C0     /* "GPTA1 Local Timer Cell Control Register 24" */
#define GPTA1_LTCXR24_ADDR    0xF00022C4     /* "GPTA1 Local Timer Cell X Register 24" */
#define GPTA1_LTCCTR25_ADDR   0xF00022C8     /* "GPTA1 Local Timer Cell Control Register 25" */
#define GPTA1_LTCXR25_ADDR    0xF00022CC     /* "GPTA1 Local Timer Cell X Register 25" */
#define GPTA1_LTCCTR26_ADDR   0xF00022D0     /* "GPTA1 Local Timer Cell Control Register 26" */
#define GPTA1_LTCXR26_ADDR    0xF00022D4     /* "GPTA1 Local Timer Cell X Register 26" */
#define GPTA1_LTCCTR27_ADDR   0xF00022D8     /* "GPTA1 Local Timer Cell Control Register 27" */
#define GPTA1_LTCXR27_ADDR    0xF00022DC     /* "GPTA1 Local Timer Cell X Register 27" */
#define GPTA1_LTCCTR28_ADDR   0xF00022E0     /* "GPTA1 Local Timer Cell Control Register 28" */
#define GPTA1_LTCXR28_ADDR    0xF00022E4     /* "GPTA1 Local Timer Cell X Register 28" */
#define GPTA1_LTCCTR29_ADDR   0xF00022E8     /* "GPTA1 Local Timer Cell Control Register 29" */
#define GPTA1_LTCXR29_ADDR    0xF00022EC     /* "GPTA1 Local Timer Cell X Register 29" */
#define GPTA1_LTCCTR30_ADDR   0xF00022F0     /* "GPTA1 Local Timer Cell Control Register 30" */
#define GPTA1_LTCXR30_ADDR    0xF00022F4     /* "GPTA1 Local Timer Cell X Register 30" */
#define GPTA1_LTCCTR31_ADDR   0xF00022F8     /* "GPTA1 Local Timer Cell Control Register 31" */
#define GPTA1_LTCXR31_ADDR    0xF00022FC     /* "GPTA1 Local Timer Cell X Register 31" */
#define GPTA1_LTCCTR32_ADDR   0xF0002300     /* "GPTA1 Local Timer Cell Control Register 32" */
#define GPTA1_LTCXR32_ADDR    0xF0002304     /* "GPTA1 Local Timer Cell X Register 32" */
#define GPTA1_LTCCTR33_ADDR   0xF0002308     /* "GPTA1 Local Timer Cell Control Register 33" */
#define GPTA1_LTCXR33_ADDR    0xF000230C     /* "GPTA1 Local Timer Cell X Register 33" */
#define GPTA1_LTCCTR34_ADDR   0xF0002310     /* "GPTA1 Local Timer Cell Control Register 34" */
#define GPTA1_LTCXR34_ADDR    0xF0002314     /* "GPTA1 Local Timer Cell X Register 34" */
#define GPTA1_LTCCTR35_ADDR   0xF0002318     /* "GPTA1 Local Timer Cell Control Register 35" */
#define GPTA1_LTCXR35_ADDR    0xF000231C     /* "GPTA1 Local Timer Cell X Register 35" */
#define GPTA1_LTCCTR36_ADDR   0xF0002320     /* "GPTA1 Local Timer Cell Control Register 36" */
#define GPTA1_LTCXR36_ADDR    0xF0002324     /* "GPTA1 Local Timer Cell X Register 36" */
#define GPTA1_LTCCTR37_ADDR   0xF0002328     /* "GPTA1 Local Timer Cell Control Register 37" */
#define GPTA1_LTCXR37_ADDR    0xF000232C     /* "GPTA1 Local Timer Cell X Register 37" */
#define GPTA1_LTCCTR38_ADDR   0xF0002330     /* "GPTA1 Local Timer Cell Control Register 38" */
#define GPTA1_LTCXR38_ADDR    0xF0002334     /* "GPTA1 Local Timer Cell X Register 38" */
#define GPTA1_LTCCTR39_ADDR   0xF0002338     /* "GPTA1 Local Timer Cell Control Register 39" */
#define GPTA1_LTCXR39_ADDR    0xF000233C     /* "GPTA1 Local Timer Cell X Register 39" */
#define GPTA1_LTCCTR40_ADDR   0xF0002340     /* "GPTA1 Local Timer Cell Control Register 40" */
#define GPTA1_LTCXR40_ADDR    0xF0002344     /* "GPTA1 Local Timer Cell X Register 40" */
#define GPTA1_LTCCTR41_ADDR   0xF0002348     /* "GPTA1 Local Timer Cell Control Register 41" */
#define GPTA1_LTCXR41_ADDR    0xF000234C     /* "GPTA1 Local Timer Cell X Register 41" */
#define GPTA1_LTCCTR42_ADDR   0xF0002350     /* "GPTA1 Local Timer Cell Control Register 42" */
#define GPTA1_LTCXR42_ADDR    0xF0002354     /* "GPTA1 Local Timer Cell X Register 42" */
#define GPTA1_LTCCTR43_ADDR   0xF0002358     /* "GPTA1 Local Timer Cell Control Register 43" */
#define GPTA1_LTCXR43_ADDR    0xF000235C     /* "GPTA1 Local Timer Cell X Register 43" */
#define GPTA1_LTCCTR44_ADDR   0xF0002360     /* "GPTA1 Local Timer Cell Control Register 44" */
#define GPTA1_LTCXR44_ADDR    0xF0002364     /* "GPTA1 Local Timer Cell X Register 44" */
#define GPTA1_LTCCTR45_ADDR   0xF0002368     /* "GPTA1 Local Timer Cell Control Register 45" */
#define GPTA1_LTCXR45_ADDR    0xF000236C     /* "GPTA1 Local Timer Cell X Register 45" */
#define GPTA1_LTCCTR46_ADDR   0xF0002370     /* "GPTA1 Local Timer Cell Control Register 46" */
#define GPTA1_LTCXR46_ADDR    0xF0002374     /* "GPTA1 Local Timer Cell X Register 46" */
#define GPTA1_LTCCTR47_ADDR   0xF0002378     /* "GPTA1 Local Timer Cell Control Register 47" */
#define GPTA1_LTCXR47_ADDR    0xF000237C     /* "GPTA1 Local Timer Cell X Register 47" */
#define GPTA1_LTCCTR48_ADDR   0xF0002380     /* "GPTA1 Local Timer Cell Control Register 48" */
#define GPTA1_LTCXR48_ADDR    0xF0002384     /* "GPTA1 Local Timer Cell X Register 48" */
#define GPTA1_LTCCTR49_ADDR   0xF0002388     /* "GPTA1 Local Timer Cell Control Register 49" */
#define GPTA1_LTCXR49_ADDR    0xF000238C     /* "GPTA1 Local Timer Cell X Register 49" */
#define GPTA1_LTCCTR50_ADDR   0xF0002390     /* "GPTA1 Local Timer Cell Control Register 50" */
#define GPTA1_LTCXR50_ADDR    0xF0002394     /* "GPTA1 Local Timer Cell X Register 50" */
#define GPTA1_LTCCTR51_ADDR   0xF0002398     /* "GPTA1 Local Timer Cell Control Register 51" */
#define GPTA1_LTCXR51_ADDR    0xF000239C     /* "GPTA1 Local Timer Cell X Register 51" */
#define GPTA1_LTCCTR52_ADDR   0xF00023A0     /* "GPTA1 Local Timer Cell Control Register 52" */
#define GPTA1_LTCXR52_ADDR    0xF00023A4     /* "GPTA1 Local Timer Cell X Register 52" */
#define GPTA1_LTCCTR53_ADDR   0xF00023A8     /* "GPTA1 Local Timer Cell Control Register 53" */
#define GPTA1_LTCXR53_ADDR    0xF00023AC     /* "GPTA1 Local Timer Cell X Register 53" */
#define GPTA1_LTCCTR54_ADDR   0xF00023B0     /* "GPTA1 Local Timer Cell Control Register 54" */
#define GPTA1_LTCXR54_ADDR    0xF00023B4     /* "GPTA1 Local Timer Cell X Register 54" */
#define GPTA1_LTCCTR55_ADDR   0xF00023B8     /* "GPTA1 Local Timer Cell Control Register 55" */
#define GPTA1_LTCXR55_ADDR    0xF00023BC     /* "GPTA1 Local Timer Cell X Register 55" */
#define GPTA1_LTCCTR56_ADDR   0xF00023C0     /* "GPTA1 Local Timer Cell Control Register 56" */
#define GPTA1_LTCXR56_ADDR    0xF00023C4     /* "GPTA1 Local Timer Cell X Register 56" */
#define GPTA1_LTCCTR57_ADDR   0xF00023C8     /* "GPTA1 Local Timer Cell Control Register 57" */
#define GPTA1_LTCXR57_ADDR    0xF00023CC     /* "GPTA1 Local Timer Cell X Register 57" */
#define GPTA1_LTCCTR58_ADDR   0xF00023D0     /* "GPTA1 Local Timer Cell Control Register 58" */
#define GPTA1_LTCXR58_ADDR    0xF00023D4     /* "GPTA1 Local Timer Cell X Register 58" */
#define GPTA1_LTCCTR59_ADDR   0xF00023D8     /* "GPTA1 Local Timer Cell Control Register 59" */
#define GPTA1_LTCXR59_ADDR    0xF00023DC     /* "GPTA1 Local Timer Cell X Register 59" */
#define GPTA1_LTCCTR60_ADDR   0xF00023E0     /* "GPTA1 Local Timer Cell Control Register 60" */
#define GPTA1_LTCXR60_ADDR    0xF00023E4     /* "GPTA1 Local Timer Cell X Register 60" */
#define GPTA1_LTCCTR61_ADDR   0xF00023E8     /* "GPTA1 Local Timer Cell Control Register 61" */
#define GPTA1_LTCXR61_ADDR    0xF00023EC     /* "GPTA1 Local Timer Cell X Register 61" */
#define GPTA1_LTCCTR62_ADDR   0xF00023F0     /* "GPTA1 Local Timer Cell Control Register 62" */
#define GPTA1_LTCXR62_ADDR    0xF00023F4     /* "GPTA1 Local Timer Cell X Register 62" */
#define GPTA1_LTCCTR63_ADDR   0xF00023F8     /* "GPTA1 Local Timer Cell Control Register 63" */
#define GPTA1_LTCXR63_ADDR    0xF00023FC     /* "GPTA1 Local Timer Cell X Register 63" */
#define GPTA1_SRC37_ADDR      0xF0002768     /* "GPTA1 Interrupt Service Request Control Register 37" */
#define GPTA1_SRC36_ADDR      0xF000276C     /* "GPTA1 Interrupt Service Request Control Register 36" */
#define GPTA1_SRC35_ADDR      0xF0002770     /* "GPTA1 Interrupt Service Request Control Register 35" */
#define GPTA1_SRC34_ADDR      0xF0002774     /* "GPTA1 Interrupt Service Request Control Register 34" */
#define GPTA1_SRC33_ADDR      0xF0002778     /* "GPTA1 Interrupt Service Request Control Register 33" */
#define GPTA1_SRC32_ADDR      0xF000277C     /* "GPTA1 Interrupt Service Request Control Register 32" */
#define GPTA1_SRC31_ADDR      0xF0002780     /* "GPTA1 Interrupt Service Request Control Register 31" */
#define GPTA1_SRC30_ADDR      0xF0002784     /* "GPTA1 Interrupt Service Request Control Register 30" */
#define GPTA1_SRC29_ADDR      0xF0002788     /* "GPTA1 Interrupt Service Request Control Register 29" */
#define GPTA1_SRC28_ADDR      0xF000278C     /* "GPTA1 Interrupt Service Request Control Register 28" */
#define GPTA1_SRC27_ADDR      0xF0002790     /* "GPTA1 Interrupt Service Request Control Register 27" */
#define GPTA1_SRC26_ADDR      0xF0002794     /* "GPTA1 Interrupt Service Request Control Register 26" */
#define GPTA1_SRC25_ADDR      0xF0002798     /* "GPTA1 Interrupt Service Request Control Register 25" */
#define GPTA1_SRC24_ADDR      0xF000279C     /* "GPTA1 Interrupt Service Request Control Register 24" */
#define GPTA1_SRC23_ADDR      0xF00027A0     /* "GPTA1 Interrupt Service Request Control Register 23" */
#define GPTA1_SRC22_ADDR      0xF00027A4     /* "GPTA1 Interrupt Service Request Control Register 22" */
#define GPTA1_SRC21_ADDR      0xF00027A8     /* "GPTA1 Interrupt Service Request Control Register 21" */
#define GPTA1_SRC20_ADDR      0xF00027AC     /* "GPTA1 Interrupt Service Request Control Register 20" */
#define GPTA1_SRC19_ADDR      0xF00027B0     /* "GPTA1 Interrupt Service Request Control Register 19" */
#define GPTA1_SRC18_ADDR      0xF00027B4     /* "GPTA1 Interrupt Service Request Control Register 18" */
#define GPTA1_SRC17_ADDR      0xF00027B8     /* "GPTA1 Interrupt Service Request Control Register 17" */
#define GPTA1_SRC16_ADDR      0xF00027BC     /* "GPTA1 Interrupt Service Request Control Register 16" */
#define GPTA1_SRC15_ADDR      0xF00027C0     /* "GPTA1 Interrupt Service Request Control Register 15" */
#define GPTA1_SRC14_ADDR      0xF00027C4     /* "GPTA1 Interrupt Service Request Control Register 14" */
#define GPTA1_SRC13_ADDR      0xF00027C8     /* "GPTA1 Interrupt Service Request Control Register 13" */
#define GPTA1_SRC12_ADDR      0xF00027CC     /* "GPTA1 Interrupt Service Request Control Register 12" */
#define GPTA1_SRC11_ADDR      0xF00027D0     /* "GPTA1 Interrupt Service Request Control Register 11" */
#define GPTA1_SRC10_ADDR      0xF00027D4     /* "GPTA1 Interrupt Service Request Control Register 10" */
#define GPTA1_SRC09_ADDR      0xF00027D8     /* "GPTA1 Interrupt Service Request Control Register 09" */
#define GPTA1_SRC08_ADDR      0xF00027DC     /* "GPTA1 Interrupt Service Request Control Register 08" */
#define GPTA1_SRC07_ADDR      0xF00027E0     /* "GPTA1 Interrupt Service Request Control Register 07" */
#define GPTA1_SRC06_ADDR      0xF00027E4     /* "GPTA1 Interrupt Service Request Control Register 06" */
#define GPTA1_SRC05_ADDR      0xF00027E8     /* "GPTA1 Interrupt Service Request Control Register 05" */
#define GPTA1_SRC04_ADDR      0xF00027EC     /* "GPTA1 Interrupt Service Request Control Register 04" */
#define GPTA1_SRC03_ADDR      0xF00027F0     /* "GPTA1 Interrupt Service Request Control Register 03" */
#define GPTA1_SRC02_ADDR      0xF00027F4     /* "GPTA1 Interrupt Service Request Control Register 02" */
#define GPTA1_SRC01_ADDR      0xF00027F8     /* "GPTA1 Interrupt Service Request Control Register 01" */
#define GPTA1_SRC00_ADDR      0xF00027FC     /* "GPTA1 Interrupt Service Request Control Register 00" */


#endif /* _HAVE_TRICORE_GPTA1_ADDRESSES_H_ (block "GPTA1") */


