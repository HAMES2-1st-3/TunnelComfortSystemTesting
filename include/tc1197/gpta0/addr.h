/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "GPTA0" of TriCore TC1197 (294 SFRs) */

#ifndef _HAVE_TRICORE_GPTA0_ADDRESSES_H_
#define _HAVE_TRICORE_GPTA0_ADDRESSES_H_

#define GPTA0_CLC_ADDR        0xF0001800     /* "GPTA Clock Control Register" */
#define GPTA0_DBGCTR_ADDR     0xF0001804     /* "GPTA Debug Clock Control Register" */
#define GPTA0_ID_ADDR         0xF0001808     /* "GPTA0 Identification Register" */
#define GPTA0_FDR_ADDR        0xF000180C     /* "GPTA Fractional Divider Register" */
#define GPTA0_SRSC0_ADDR      0xF0001810     /* "GPTA0 Service Request State Clear Register 0" */
#define GPTA0_SRSS0_ADDR      0xF0001814     /* "GPTA0 Service Request State Set Register 0" */
#define GPTA0_SRSC1_ADDR      0xF0001818     /* "GPTA0 Service Request State Clear Register 1" */
#define GPTA0_SRSS1_ADDR      0xF000181C     /* "GPTA0 Service Request State Set Register 1" */
#define GPTA0_SRSC2_ADDR      0xF0001820     /* "GPTA0 Service Request State Clear Register 2" */
#define GPTA0_SRSS2_ADDR      0xF0001824     /* "GPTA0 Service Request State Set Register 2" */
#define GPTA0_SRSC3_ADDR      0xF0001828     /* "GPTA0 Service Request State Clear Register 3" */
#define GPTA0_SRSS3_ADDR      0xF000182C     /* "GPTA0 Service Request State Set Register 3" */
#define GPTA0_SRNR_ADDR       0xF0001830     /* "GPTA0 Service Request Node Redirection Register" */
#define GPTA0_MRACTL_ADDR     0xF0001838     /* "GPTA0 Multiplexer Register Array Control Register" */
#define GPTA0_MRADIN_ADDR     0xF000183C     /* "GPTA0 Multiplexer Register Array Data In Register" */
#define GPTA0_MRADOUT_ADDR    0xF0001840     /* "GPTA0 Multiplexer Register Array Data Out Register" */
#define GPTA0_FPCSTAT_ADDR    0xF0001844     /* "GPTA0 Filter and Prescaler Cell Status Register" */
#define GPTA0_FPCCTR0_ADDR    0xF0001848     /* "GPTA0 Filter and Prescaler Cell Control Register 0" */
#define GPTA0_FPCTIM0_ADDR    0xF000184C     /* "GPTA0 Filter and Prescaler Cell Timer Register 0" */
#define GPTA0_FPCCTR1_ADDR    0xF0001850     /* "GPTA0 Filter and Prescaler Cell Control Register 1" */
#define GPTA0_FPCTIM1_ADDR    0xF0001854     /* "GPTA0 Filter and Prescaler Cell Timer Register 1" */
#define GPTA0_FPCCTR2_ADDR    0xF0001858     /* "GPTA0 Filter and Prescaler Cell Control Register 2" */
#define GPTA0_FPCTIM2_ADDR    0xF000185C     /* "GPTA0 Filter and Prescaler Cell Timer Register 2" */
#define GPTA0_FPCCTR3_ADDR    0xF0001860     /* "GPTA0 Filter and Prescaler Cell Control Register 3" */
#define GPTA0_FPCTIM3_ADDR    0xF0001864     /* "GPTA0 Filter and Prescaler Cell Timer Register 3" */
#define GPTA0_FPCCTR4_ADDR    0xF0001868     /* "GPTA0 Filter and Prescaler Cell Control Register 4" */
#define GPTA0_FPCTIM4_ADDR    0xF000186C     /* "GPTA0 Filter and Prescaler Cell Timer Register 4" */
#define GPTA0_FPCCTR5_ADDR    0xF0001870     /* "GPTA0 Filter and Prescaler Cell Control Register 5" */
#define GPTA0_FPCTIM5_ADDR    0xF0001874     /* "GPTA0 Filter and Prescaler Cell Timer Register 5" */
#define GPTA0_PDLCTR_ADDR     0xF0001878     /* "GPTA0 Phase Discrimination Logic Control Register" */
#define GPTA0_DCMCTR0_ADDR    0xF0001880     /* "GPTA0 Duty Cycle Measurement Control Register 0" */
#define GPTA0_DCMTIM0_ADDR    0xF0001884     /* "GPTA0 Duty Cycle Measurement Timer Register 0" */
#define GPTA0_DCMCAV0_ADDR    0xF0001888     /* "GPTA0 Duty Cycle Measurement Capture Register 0" */
#define GPTA0_DCMCOV0_ADDR    0xF000188C     /* "GPTA0 Duty Cycle Measurement Capture/Compare Register 0" */
#define GPTA0_DCMCTR1_ADDR    0xF0001890     /* "GPTA0 Duty Cycle Measurement Control Register 1" */
#define GPTA0_DCMTIM1_ADDR    0xF0001894     /* "GPTA0 Duty Cycle Measurement Timer Register 1" */
#define GPTA0_DCMCAV1_ADDR    0xF0001898     /* "GPTA0 Duty Cycle Measurement Capture Register 1" */
#define GPTA0_DCMCOV1_ADDR    0xF000189C     /* "GPTA0 Duty Cycle Measurement Capture/Compare Register 1" */
#define GPTA0_DCMCTR2_ADDR    0xF00018A0     /* "GPTA0 Duty Cycle Measurement Control Register 2" */
#define GPTA0_DCMTIM2_ADDR    0xF00018A4     /* "GPTA0 Duty Cycle Measurement Timer Register 2" */
#define GPTA0_DCMCAV2_ADDR    0xF00018A8     /* "GPTA0 Duty Cycle Measurement Capture Register 2" */
#define GPTA0_DCMCOV2_ADDR    0xF00018AC     /* "GPTA0 Duty Cycle Measurement Capture/Compare Register 2" */
#define GPTA0_DCMCTR3_ADDR    0xF00018B0     /* "GPTA0 Duty Cycle Measurement Control Register 3" */
#define GPTA0_DCMTIM3_ADDR    0xF00018B4     /* "GPTA0 Duty Cycle Measurement Timer Register 3" */
#define GPTA0_DCMCAV3_ADDR    0xF00018B8     /* "GPTA0 Duty Cycle Measurement Capture Register 3" */
#define GPTA0_DCMCOV3_ADDR    0xF00018BC     /* "GPTA0 Duty Cycle Measurement Capture/Compare Register 3" */
#define GPTA0_PLLCTR_ADDR     0xF00018C0     /* "GPTA0 Phase Locked Loop Control Register" */
#define GPTA0_PLLMTI_ADDR     0xF00018C4     /* "GPTA0 Phase Locked Loop Microtick Register" */
#define GPTA0_PLLCNT_ADDR     0xF00018C8     /* "GPTA0 Phase Locked Loop Counter Register" */
#define GPTA0_PLLSTP_ADDR     0xF00018CC     /* "GPTA0 Phase Locked Loop Step Register" */
#define GPTA0_PLLREV_ADDR     0xF00018D0     /* "GPTA0 Phase Locked Loop Reload Register" */
#define GPTA0_PLLDTR_ADDR     0xF00018D4     /* "GPTA0 Phase Locked Loop Delta Register" */
#define GPTA0_CKBCTR_ADDR     0xF00018D8     /* "GPTA0 Clock Bus Control Register" */
#define GPTA0_GTCTR0_ADDR     0xF00018E0     /* "GPTA0 Global Timer Control Register 0" */
#define GPTA0_GTREV0_ADDR     0xF00018E4     /* "GPTA0 Global Timer Reload Value Register 0" */
#define GPTA0_GTTIM0_ADDR     0xF00018E8     /* "GPTA0 Global Timer Register 0" */
#define GPTA0_GTCTR1_ADDR     0xF00018F0     /* "GPTA0 Global Timer Control Register 1" */
#define GPTA0_GTREV1_ADDR     0xF00018F4     /* "GPTA0 Global Timer Reload Value Register 1" */
#define GPTA0_GTTIM1_ADDR     0xF00018F8     /* "GPTA0 Global Timer Register 1" */
#define GPTA0_GTCCTR00_ADDR   0xF0001900     /* "GPTA0 Global Timer Cell Control Register 00" */
#define GPTA0_GTCXR00_ADDR    0xF0001904     /* "GPTA0 Global Timer Cell X Register 00" */
#define GPTA0_GTCCTR01_ADDR   0xF0001908     /* "GPTA0 Global Timer Cell Control Register 01" */
#define GPTA0_GTCXR01_ADDR    0xF000190C     /* "GPTA0 Global Timer Cell X Register 01" */
#define GPTA0_GTCCTR02_ADDR   0xF0001910     /* "GPTA0 Global Timer Cell Control Register 02" */
#define GPTA0_GTCXR02_ADDR    0xF0001914     /* "GPTA0 Global Timer Cell X Register 02" */
#define GPTA0_GTCCTR03_ADDR   0xF0001918     /* "GPTA0 Global Timer Cell Control Register 03" */
#define GPTA0_GTCXR03_ADDR    0xF000191C     /* "GPTA0 Global Timer Cell X Register 03" */
#define GPTA0_GTCCTR04_ADDR   0xF0001920     /* "GPTA0 Global Timer Cell Control Register 04" */
#define GPTA0_GTCXR04_ADDR    0xF0001924     /* "GPTA0 Global Timer Cell X Register 04" */
#define GPTA0_GTCCTR05_ADDR   0xF0001928     /* "GPTA0 Global Timer Cell Control Register 05" */
#define GPTA0_GTCXR05_ADDR    0xF000192C     /* "GPTA0 Global Timer Cell X Register 05" */
#define GPTA0_GTCCTR06_ADDR   0xF0001930     /* "GPTA0 Global Timer Cell Control Register 06" */
#define GPTA0_GTCXR06_ADDR    0xF0001934     /* "GPTA0 Global Timer Cell X Register 06" */
#define GPTA0_GTCCTR07_ADDR   0xF0001938     /* "GPTA0 Global Timer Cell Control Register 07" */
#define GPTA0_GTCXR07_ADDR    0xF000193C     /* "GPTA0 Global Timer Cell X Register 07" */
#define GPTA0_GTCCTR08_ADDR   0xF0001940     /* "GPTA0 Global Timer Cell Control Register 08" */
#define GPTA0_GTCXR08_ADDR    0xF0001944     /* "GPTA0 Global Timer Cell X Register 08" */
#define GPTA0_GTCCTR09_ADDR   0xF0001948     /* "GPTA0 Global Timer Cell Control Register 09" */
#define GPTA0_GTCXR09_ADDR    0xF000194C     /* "GPTA0 Global Timer Cell X Register 09" */
#define GPTA0_GTCCTR10_ADDR   0xF0001950     /* "GPTA0 Global Timer Cell Control Register 10" */
#define GPTA0_GTCXR10_ADDR    0xF0001954     /* "GPTA0 Global Timer Cell X Register 10" */
#define GPTA0_GTCCTR11_ADDR   0xF0001958     /* "GPTA0 Global Timer Cell Control Register 11" */
#define GPTA0_GTCXR11_ADDR    0xF000195C     /* "GPTA0 Global Timer Cell X Register 11" */
#define GPTA0_GTCCTR12_ADDR   0xF0001960     /* "GPTA0 Global Timer Cell Control Register 12" */
#define GPTA0_GTCXR12_ADDR    0xF0001964     /* "GPTA0 Global Timer Cell X Register 12" */
#define GPTA0_GTCCTR13_ADDR   0xF0001968     /* "GPTA0 Global Timer Cell Control Register 13" */
#define GPTA0_GTCXR13_ADDR    0xF000196C     /* "GPTA0 Global Timer Cell X Register 13" */
#define GPTA0_GTCCTR14_ADDR   0xF0001970     /* "GPTA0 Global Timer Cell Control Register 14" */
#define GPTA0_GTCXR14_ADDR    0xF0001974     /* "GPTA0 Global Timer Cell X Register 14" */
#define GPTA0_GTCCTR15_ADDR   0xF0001978     /* "GPTA0 Global Timer Cell Control Register 15" */
#define GPTA0_GTCXR15_ADDR    0xF000197C     /* "GPTA0 Global Timer Cell X Register 15" */
#define GPTA0_GTCCTR16_ADDR   0xF0001980     /* "GPTA0 Global Timer Cell Control Register 16" */
#define GPTA0_GTCXR16_ADDR    0xF0001984     /* "GPTA0 Global Timer Cell X Register 16" */
#define GPTA0_GTCCTR17_ADDR   0xF0001988     /* "GPTA0 Global Timer Cell Control Register 17" */
#define GPTA0_GTCXR17_ADDR    0xF000198C     /* "GPTA0 Global Timer Cell X Register 17" */
#define GPTA0_GTCCTR18_ADDR   0xF0001990     /* "GPTA0 Global Timer Cell Control Register 18" */
#define GPTA0_GTCXR18_ADDR    0xF0001994     /* "GPTA0 Global Timer Cell X Register 18" */
#define GPTA0_GTCCTR19_ADDR   0xF0001998     /* "GPTA0 Global Timer Cell Control Register 19" */
#define GPTA0_GTCXR19_ADDR    0xF000199C     /* "GPTA0 Global Timer Cell X Register 19" */
#define GPTA0_GTCCTR20_ADDR   0xF00019A0     /* "GPTA0 Global Timer Cell Control Register 20" */
#define GPTA0_GTCXR20_ADDR    0xF00019A4     /* "GPTA0 Global Timer Cell X Register 20" */
#define GPTA0_GTCCTR21_ADDR   0xF00019A8     /* "GPTA0 Global Timer Cell Control Register 21" */
#define GPTA0_GTCXR21_ADDR    0xF00019AC     /* "GPTA0 Global Timer Cell X Register 21" */
#define GPTA0_GTCCTR22_ADDR   0xF00019B0     /* "GPTA0 Global Timer Cell Control Register 22" */
#define GPTA0_GTCXR22_ADDR    0xF00019B4     /* "GPTA0 Global Timer Cell X Register 22" */
#define GPTA0_GTCCTR23_ADDR   0xF00019B8     /* "GPTA0 Global Timer Cell Control Register 23" */
#define GPTA0_GTCXR23_ADDR    0xF00019BC     /* "GPTA0 Global Timer Cell X Register 23" */
#define GPTA0_GTCCTR24_ADDR   0xF00019C0     /* "GPTA0 Global Timer Cell Control Register 24" */
#define GPTA0_GTCXR24_ADDR    0xF00019C4     /* "GPTA0 Global Timer Cell X Register 24" */
#define GPTA0_GTCCTR25_ADDR   0xF00019C8     /* "GPTA0 Global Timer Cell Control Register 25" */
#define GPTA0_GTCXR25_ADDR    0xF00019CC     /* "GPTA0 Global Timer Cell X Register 25" */
#define GPTA0_GTCCTR26_ADDR   0xF00019D0     /* "GPTA0 Global Timer Cell Control Register 26" */
#define GPTA0_GTCXR26_ADDR    0xF00019D4     /* "GPTA0 Global Timer Cell X Register 26" */
#define GPTA0_GTCCTR27_ADDR   0xF00019D8     /* "GPTA0 Global Timer Cell Control Register 27" */
#define GPTA0_GTCXR27_ADDR    0xF00019DC     /* "GPTA0 Global Timer Cell X Register 27" */
#define GPTA0_GTCCTR28_ADDR   0xF00019E0     /* "GPTA0 Global Timer Cell Control Register 28" */
#define GPTA0_GTCXR28_ADDR    0xF00019E4     /* "GPTA0 Global Timer Cell X Register 28" */
#define GPTA0_GTCCTR29_ADDR   0xF00019E8     /* "GPTA0 Global Timer Cell Control Register 29" */
#define GPTA0_GTCXR29_ADDR    0xF00019EC     /* "GPTA0 Global Timer Cell X Register 29" */
#define GPTA0_GTCCTR30_ADDR   0xF00019F0     /* "GPTA0 Global Timer Cell Control Register 30" */
#define GPTA0_GTCXR30_ADDR    0xF00019F4     /* "GPTA0 Global Timer Cell X Register 30" */
#define GPTA0_GTCCTR31_ADDR   0xF00019F8     /* "GPTA0 Global Timer Cell Control Register 31" */
#define GPTA0_GTCXR31_ADDR    0xF00019FC     /* "GPTA0 Global Timer Cell X Register 31" */
#define GPTA0_LTCCTR00_ADDR   0xF0001A00     /* "GPTA0 Local Timer Cell Control Register 00" */
#define GPTA0_LTCXR00_ADDR    0xF0001A04     /* "GPTA0 Local Timer Cell X Register 00" */
#define GPTA0_LTCCTR01_ADDR   0xF0001A08     /* "GPTA0 Local Timer Cell Control Register 01" */
#define GPTA0_LTCXR01_ADDR    0xF0001A0C     /* "GPTA0 Local Timer Cell X Register 01" */
#define GPTA0_LTCCTR02_ADDR   0xF0001A10     /* "GPTA0 Local Timer Cell Control Register 02" */
#define GPTA0_LTCXR02_ADDR    0xF0001A14     /* "GPTA0 Local Timer Cell X Register 02" */
#define GPTA0_LTCCTR03_ADDR   0xF0001A18     /* "GPTA0 Local Timer Cell Control Register 03" */
#define GPTA0_LTCXR03_ADDR    0xF0001A1C     /* "GPTA0 Local Timer Cell X Register 03" */
#define GPTA0_LTCCTR04_ADDR   0xF0001A20     /* "GPTA0 Local Timer Cell Control Register 04" */
#define GPTA0_LTCXR04_ADDR    0xF0001A24     /* "GPTA0 Local Timer Cell X Register 04" */
#define GPTA0_LTCCTR05_ADDR   0xF0001A28     /* "GPTA0 Local Timer Cell Control Register 05" */
#define GPTA0_LTCXR05_ADDR    0xF0001A2C     /* "GPTA0 Local Timer Cell X Register 05" */
#define GPTA0_LTCCTR06_ADDR   0xF0001A30     /* "GPTA0 Local Timer Cell Control Register 06" */
#define GPTA0_LTCXR06_ADDR    0xF0001A34     /* "GPTA0 Local Timer Cell X Register 06" */
#define GPTA0_LTCCTR07_ADDR   0xF0001A38     /* "GPTA0 Local Timer Cell Control Register 07" */
#define GPTA0_LTCXR07_ADDR    0xF0001A3C     /* "GPTA0 Local Timer Cell X Register 07" */
#define GPTA0_LTCCTR08_ADDR   0xF0001A40     /* "GPTA0 Local Timer Cell Control Register 08" */
#define GPTA0_LTCXR08_ADDR    0xF0001A44     /* "GPTA0 Local Timer Cell X Register 08" */
#define GPTA0_LTCCTR09_ADDR   0xF0001A48     /* "GPTA0 Local Timer Cell Control Register 09" */
#define GPTA0_LTCXR09_ADDR    0xF0001A4C     /* "GPTA0 Local Timer Cell X Register 09" */
#define GPTA0_LTCCTR10_ADDR   0xF0001A50     /* "GPTA0 Local Timer Cell Control Register 10" */
#define GPTA0_LTCXR10_ADDR    0xF0001A54     /* "GPTA0 Local Timer Cell X Register 10" */
#define GPTA0_LTCCTR11_ADDR   0xF0001A58     /* "GPTA0 Local Timer Cell Control Register 11" */
#define GPTA0_LTCXR11_ADDR    0xF0001A5C     /* "GPTA0 Local Timer Cell X Register 11" */
#define GPTA0_LTCCTR12_ADDR   0xF0001A60     /* "GPTA0 Local Timer Cell Control Register 12" */
#define GPTA0_LTCXR12_ADDR    0xF0001A64     /* "GPTA0 Local Timer Cell X Register 12" */
#define GPTA0_LTCCTR13_ADDR   0xF0001A68     /* "GPTA0 Local Timer Cell Control Register 13" */
#define GPTA0_LTCXR13_ADDR    0xF0001A6C     /* "GPTA0 Local Timer Cell X Register 13" */
#define GPTA0_LTCCTR14_ADDR   0xF0001A70     /* "GPTA0 Local Timer Cell Control Register 14" */
#define GPTA0_LTCXR14_ADDR    0xF0001A74     /* "GPTA0 Local Timer Cell X Register 14" */
#define GPTA0_LTCCTR15_ADDR   0xF0001A78     /* "GPTA0 Local Timer Cell Control Register 15" */
#define GPTA0_LTCXR15_ADDR    0xF0001A7C     /* "GPTA0 Local Timer Cell X Register 15" */
#define GPTA0_LTCCTR16_ADDR   0xF0001A80     /* "GPTA0 Local Timer Cell Control Register 16" */
#define GPTA0_LTCXR16_ADDR    0xF0001A84     /* "GPTA0 Local Timer Cell X Register 16" */
#define GPTA0_LTCCTR17_ADDR   0xF0001A88     /* "GPTA0 Local Timer Cell Control Register 17" */
#define GPTA0_LTCXR17_ADDR    0xF0001A8C     /* "GPTA0 Local Timer Cell X Register 17" */
#define GPTA0_LTCCTR18_ADDR   0xF0001A90     /* "GPTA0 Local Timer Cell Control Register 18" */
#define GPTA0_LTCXR18_ADDR    0xF0001A94     /* "GPTA0 Local Timer Cell X Register 18" */
#define GPTA0_LTCCTR19_ADDR   0xF0001A98     /* "GPTA0 Local Timer Cell Control Register 19" */
#define GPTA0_LTCXR19_ADDR    0xF0001A9C     /* "GPTA0 Local Timer Cell X Register 19" */
#define GPTA0_LTCCTR20_ADDR   0xF0001AA0     /* "GPTA0 Local Timer Cell Control Register 20" */
#define GPTA0_LTCXR20_ADDR    0xF0001AA4     /* "GPTA0 Local Timer Cell X Register 20" */
#define GPTA0_LTCCTR21_ADDR   0xF0001AA8     /* "GPTA0 Local Timer Cell Control Register 21" */
#define GPTA0_LTCXR21_ADDR    0xF0001AAC     /* "GPTA0 Local Timer Cell X Register 21" */
#define GPTA0_LTCCTR22_ADDR   0xF0001AB0     /* "GPTA0 Local Timer Cell Control Register 22" */
#define GPTA0_LTCXR22_ADDR    0xF0001AB4     /* "GPTA0 Local Timer Cell X Register 22" */
#define GPTA0_LTCCTR23_ADDR   0xF0001AB8     /* "GPTA0 Local Timer Cell Control Register 23" */
#define GPTA0_LTCXR23_ADDR    0xF0001ABC     /* "GPTA0 Local Timer Cell X Register 23" */
#define GPTA0_LTCCTR24_ADDR   0xF0001AC0     /* "GPTA0 Local Timer Cell Control Register 24" */
#define GPTA0_LTCXR24_ADDR    0xF0001AC4     /* "GPTA0 Local Timer Cell X Register 24" */
#define GPTA0_LTCCTR25_ADDR   0xF0001AC8     /* "GPTA0 Local Timer Cell Control Register 25" */
#define GPTA0_LTCXR25_ADDR    0xF0001ACC     /* "GPTA0 Local Timer Cell X Register 25" */
#define GPTA0_LTCCTR26_ADDR   0xF0001AD0     /* "GPTA0 Local Timer Cell Control Register 26" */
#define GPTA0_LTCXR26_ADDR    0xF0001AD4     /* "GPTA0 Local Timer Cell X Register 26" */
#define GPTA0_LTCCTR27_ADDR   0xF0001AD8     /* "GPTA0 Local Timer Cell Control Register 27" */
#define GPTA0_LTCXR27_ADDR    0xF0001ADC     /* "GPTA0 Local Timer Cell X Register 27" */
#define GPTA0_LTCCTR28_ADDR   0xF0001AE0     /* "GPTA0 Local Timer Cell Control Register 28" */
#define GPTA0_LTCXR28_ADDR    0xF0001AE4     /* "GPTA0 Local Timer Cell X Register 28" */
#define GPTA0_LTCCTR29_ADDR   0xF0001AE8     /* "GPTA0 Local Timer Cell Control Register 29" */
#define GPTA0_LTCXR29_ADDR    0xF0001AEC     /* "GPTA0 Local Timer Cell X Register 29" */
#define GPTA0_LTCCTR30_ADDR   0xF0001AF0     /* "GPTA0 Local Timer Cell Control Register 30" */
#define GPTA0_LTCXR30_ADDR    0xF0001AF4     /* "GPTA0 Local Timer Cell X Register 30" */
#define GPTA0_LTCCTR31_ADDR   0xF0001AF8     /* "GPTA0 Local Timer Cell Control Register 31" */
#define GPTA0_LTCXR31_ADDR    0xF0001AFC     /* "GPTA0 Local Timer Cell X Register 31" */
#define GPTA0_LTCCTR32_ADDR   0xF0001B00     /* "GPTA0 Local Timer Cell Control Register 32" */
#define GPTA0_LTCXR32_ADDR    0xF0001B04     /* "GPTA0 Local Timer Cell X Register 32" */
#define GPTA0_LTCCTR33_ADDR   0xF0001B08     /* "GPTA0 Local Timer Cell Control Register 33" */
#define GPTA0_LTCXR33_ADDR    0xF0001B0C     /* "GPTA0 Local Timer Cell X Register 33" */
#define GPTA0_LTCCTR34_ADDR   0xF0001B10     /* "GPTA0 Local Timer Cell Control Register 34" */
#define GPTA0_LTCXR34_ADDR    0xF0001B14     /* "GPTA0 Local Timer Cell X Register 34" */
#define GPTA0_LTCCTR35_ADDR   0xF0001B18     /* "GPTA0 Local Timer Cell Control Register 35" */
#define GPTA0_LTCXR35_ADDR    0xF0001B1C     /* "GPTA0 Local Timer Cell X Register 35" */
#define GPTA0_LTCCTR36_ADDR   0xF0001B20     /* "GPTA0 Local Timer Cell Control Register 36" */
#define GPTA0_LTCXR36_ADDR    0xF0001B24     /* "GPTA0 Local Timer Cell X Register 36" */
#define GPTA0_LTCCTR37_ADDR   0xF0001B28     /* "GPTA0 Local Timer Cell Control Register 37" */
#define GPTA0_LTCXR37_ADDR    0xF0001B2C     /* "GPTA0 Local Timer Cell X Register 37" */
#define GPTA0_LTCCTR38_ADDR   0xF0001B30     /* "GPTA0 Local Timer Cell Control Register 38" */
#define GPTA0_LTCXR38_ADDR    0xF0001B34     /* "GPTA0 Local Timer Cell X Register 38" */
#define GPTA0_LTCCTR39_ADDR   0xF0001B38     /* "GPTA0 Local Timer Cell Control Register 39" */
#define GPTA0_LTCXR39_ADDR    0xF0001B3C     /* "GPTA0 Local Timer Cell X Register 39" */
#define GPTA0_LTCCTR40_ADDR   0xF0001B40     /* "GPTA0 Local Timer Cell Control Register 40" */
#define GPTA0_LTCXR40_ADDR    0xF0001B44     /* "GPTA0 Local Timer Cell X Register 40" */
#define GPTA0_LTCCTR41_ADDR   0xF0001B48     /* "GPTA0 Local Timer Cell Control Register 41" */
#define GPTA0_LTCXR41_ADDR    0xF0001B4C     /* "GPTA0 Local Timer Cell X Register 41" */
#define GPTA0_LTCCTR42_ADDR   0xF0001B50     /* "GPTA0 Local Timer Cell Control Register 42" */
#define GPTA0_LTCXR42_ADDR    0xF0001B54     /* "GPTA0 Local Timer Cell X Register 42" */
#define GPTA0_LTCCTR43_ADDR   0xF0001B58     /* "GPTA0 Local Timer Cell Control Register 43" */
#define GPTA0_LTCXR43_ADDR    0xF0001B5C     /* "GPTA0 Local Timer Cell X Register 43" */
#define GPTA0_LTCCTR44_ADDR   0xF0001B60     /* "GPTA0 Local Timer Cell Control Register 44" */
#define GPTA0_LTCXR44_ADDR    0xF0001B64     /* "GPTA0 Local Timer Cell X Register 44" */
#define GPTA0_LTCCTR45_ADDR   0xF0001B68     /* "GPTA0 Local Timer Cell Control Register 45" */
#define GPTA0_LTCXR45_ADDR    0xF0001B6C     /* "GPTA0 Local Timer Cell X Register 45" */
#define GPTA0_LTCCTR46_ADDR   0xF0001B70     /* "GPTA0 Local Timer Cell Control Register 46" */
#define GPTA0_LTCXR46_ADDR    0xF0001B74     /* "GPTA0 Local Timer Cell X Register 46" */
#define GPTA0_LTCCTR47_ADDR   0xF0001B78     /* "GPTA0 Local Timer Cell Control Register 47" */
#define GPTA0_LTCXR47_ADDR    0xF0001B7C     /* "GPTA0 Local Timer Cell X Register 47" */
#define GPTA0_LTCCTR48_ADDR   0xF0001B80     /* "GPTA0 Local Timer Cell Control Register 48" */
#define GPTA0_LTCXR48_ADDR    0xF0001B84     /* "GPTA0 Local Timer Cell X Register 48" */
#define GPTA0_LTCCTR49_ADDR   0xF0001B88     /* "GPTA0 Local Timer Cell Control Register 49" */
#define GPTA0_LTCXR49_ADDR    0xF0001B8C     /* "GPTA0 Local Timer Cell X Register 49" */
#define GPTA0_LTCCTR50_ADDR   0xF0001B90     /* "GPTA0 Local Timer Cell Control Register 50" */
#define GPTA0_LTCXR50_ADDR    0xF0001B94     /* "GPTA0 Local Timer Cell X Register 50" */
#define GPTA0_LTCCTR51_ADDR   0xF0001B98     /* "GPTA0 Local Timer Cell Control Register 51" */
#define GPTA0_LTCXR51_ADDR    0xF0001B9C     /* "GPTA0 Local Timer Cell X Register 51" */
#define GPTA0_LTCCTR52_ADDR   0xF0001BA0     /* "GPTA0 Local Timer Cell Control Register 52" */
#define GPTA0_LTCXR52_ADDR    0xF0001BA4     /* "GPTA0 Local Timer Cell X Register 52" */
#define GPTA0_LTCCTR53_ADDR   0xF0001BA8     /* "GPTA0 Local Timer Cell Control Register 53" */
#define GPTA0_LTCXR53_ADDR    0xF0001BAC     /* "GPTA0 Local Timer Cell X Register 53" */
#define GPTA0_LTCCTR54_ADDR   0xF0001BB0     /* "GPTA0 Local Timer Cell Control Register 54" */
#define GPTA0_LTCXR54_ADDR    0xF0001BB4     /* "GPTA0 Local Timer Cell X Register 54" */
#define GPTA0_LTCCTR55_ADDR   0xF0001BB8     /* "GPTA0 Local Timer Cell Control Register 55" */
#define GPTA0_LTCXR55_ADDR    0xF0001BBC     /* "GPTA0 Local Timer Cell X Register 55" */
#define GPTA0_LTCCTR56_ADDR   0xF0001BC0     /* "GPTA0 Local Timer Cell Control Register 56" */
#define GPTA0_LTCXR56_ADDR    0xF0001BC4     /* "GPTA0 Local Timer Cell X Register 56" */
#define GPTA0_LTCCTR57_ADDR   0xF0001BC8     /* "GPTA0 Local Timer Cell Control Register 57" */
#define GPTA0_LTCXR57_ADDR    0xF0001BCC     /* "GPTA0 Local Timer Cell X Register 57" */
#define GPTA0_LTCCTR58_ADDR   0xF0001BD0     /* "GPTA0 Local Timer Cell Control Register 58" */
#define GPTA0_LTCXR58_ADDR    0xF0001BD4     /* "GPTA0 Local Timer Cell X Register 58" */
#define GPTA0_LTCCTR59_ADDR   0xF0001BD8     /* "GPTA0 Local Timer Cell Control Register 59" */
#define GPTA0_LTCXR59_ADDR    0xF0001BDC     /* "GPTA0 Local Timer Cell X Register 59" */
#define GPTA0_LTCCTR60_ADDR   0xF0001BE0     /* "GPTA0 Local Timer Cell Control Register 60" */
#define GPTA0_LTCXR60_ADDR    0xF0001BE4     /* "GPTA0 Local Timer Cell X Register 60" */
#define GPTA0_LTCCTR61_ADDR   0xF0001BE8     /* "GPTA0 Local Timer Cell Control Register 61" */
#define GPTA0_LTCXR61_ADDR    0xF0001BEC     /* "GPTA0 Local Timer Cell X Register 61" */
#define GPTA0_LTCCTR62_ADDR   0xF0001BF0     /* "GPTA0 Local Timer Cell Control Register 62" */
#define GPTA0_LTCXR62_ADDR    0xF0001BF4     /* "GPTA0 Local Timer Cell X Register 62" */
#define GPTA0_LTCCTR63_ADDR   0xF0001BF8     /* "GPTA0 Local Timer Cell Control Register 63" */
#define GPTA0_LTCXR63_ADDR    0xF0001BFC     /* "GPTA0 Local Timer Cell X Register 63" */
#define GPTA0_EDCTR_ADDR      0xF0001C00     /* "GPTA Clock Enable/Disable Control Register" */
#define GPTA0_MMXCTR00_ADDR   0xF0001F00     /* "GPTA-to-MSC Multiplexer Control Register 00" */
#define GPTA0_MMXCTR01_ADDR   0xF0001F04     /* "GPTA-to-MSC Multiplexer Control Register 01" */
#define GPTA0_MMXCTR10_ADDR   0xF0001F08     /* "GPTA-to-MSC Multiplexer Control Register 10" */
#define GPTA0_MMXCTR11_ADDR   0xF0001F0C     /* "GPTA-to-MSC Multiplexer Control Register 11" */
#define GPTA0_SRC37_ADDR      0xF0001F68     /* "GPTA0 Interrupt Service Request Control Register 37" */
#define GPTA0_SRC36_ADDR      0xF0001F6C     /* "GPTA0 Interrupt Service Request Control Register 36" */
#define GPTA0_SRC35_ADDR      0xF0001F70     /* "GPTA0 Interrupt Service Request Control Register 35" */
#define GPTA0_SRC34_ADDR      0xF0001F74     /* "GPTA0 Interrupt Service Request Control Register 34" */
#define GPTA0_SRC33_ADDR      0xF0001F78     /* "GPTA0 Interrupt Service Request Control Register 33" */
#define GPTA0_SRC32_ADDR      0xF0001F7C     /* "GPTA0 Interrupt Service Request Control Register 32" */
#define GPTA0_SRC31_ADDR      0xF0001F80     /* "GPTA0 Interrupt Service Request Control Register 31" */
#define GPTA0_SRC30_ADDR      0xF0001F84     /* "GPTA0 Interrupt Service Request Control Register 30" */
#define GPTA0_SRC29_ADDR      0xF0001F88     /* "GPTA0 Interrupt Service Request Control Register 29" */
#define GPTA0_SRC28_ADDR      0xF0001F8C     /* "GPTA0 Interrupt Service Request Control Register 28" */
#define GPTA0_SRC27_ADDR      0xF0001F90     /* "GPTA0 Interrupt Service Request Control Register 27" */
#define GPTA0_SRC26_ADDR      0xF0001F94     /* "GPTA0 Interrupt Service Request Control Register 26" */
#define GPTA0_SRC25_ADDR      0xF0001F98     /* "GPTA0 Interrupt Service Request Control Register 25" */
#define GPTA0_SRC24_ADDR      0xF0001F9C     /* "GPTA0 Interrupt Service Request Control Register 24" */
#define GPTA0_SRC23_ADDR      0xF0001FA0     /* "GPTA0 Interrupt Service Request Control Register 23" */
#define GPTA0_SRC22_ADDR      0xF0001FA4     /* "GPTA0 Interrupt Service Request Control Register 22" */
#define GPTA0_SRC21_ADDR      0xF0001FA8     /* "GPTA0 Interrupt Service Request Control Register 21" */
#define GPTA0_SRC20_ADDR      0xF0001FAC     /* "GPTA0 Interrupt Service Request Control Register 20" */
#define GPTA0_SRC19_ADDR      0xF0001FB0     /* "GPTA0 Interrupt Service Request Control Register 19" */
#define GPTA0_SRC18_ADDR      0xF0001FB4     /* "GPTA0 Interrupt Service Request Control Register 18" */
#define GPTA0_SRC17_ADDR      0xF0001FB8     /* "GPTA0 Interrupt Service Request Control Register 17" */
#define GPTA0_SRC16_ADDR      0xF0001FBC     /* "GPTA0 Interrupt Service Request Control Register 16" */
#define GPTA0_SRC15_ADDR      0xF0001FC0     /* "GPTA0 Interrupt Service Request Control Register 15" */
#define GPTA0_SRC14_ADDR      0xF0001FC4     /* "GPTA0 Interrupt Service Request Control Register 14" */
#define GPTA0_SRC13_ADDR      0xF0001FC8     /* "GPTA0 Interrupt Service Request Control Register 13" */
#define GPTA0_SRC12_ADDR      0xF0001FCC     /* "GPTA0 Interrupt Service Request Control Register 12" */
#define GPTA0_SRC11_ADDR      0xF0001FD0     /* "GPTA0 Interrupt Service Request Control Register 11" */
#define GPTA0_SRC10_ADDR      0xF0001FD4     /* "GPTA0 Interrupt Service Request Control Register 10" */
#define GPTA0_SRC09_ADDR      0xF0001FD8     /* "GPTA0 Interrupt Service Request Control Register 09" */
#define GPTA0_SRC08_ADDR      0xF0001FDC     /* "GPTA0 Interrupt Service Request Control Register 08" */
#define GPTA0_SRC07_ADDR      0xF0001FE0     /* "GPTA0 Interrupt Service Request Control Register 07" */
#define GPTA0_SRC06_ADDR      0xF0001FE4     /* "GPTA0 Interrupt Service Request Control Register 06" */
#define GPTA0_SRC05_ADDR      0xF0001FE8     /* "GPTA0 Interrupt Service Request Control Register 05" */
#define GPTA0_SRC04_ADDR      0xF0001FEC     /* "GPTA0 Interrupt Service Request Control Register 04" */
#define GPTA0_SRC03_ADDR      0xF0001FF0     /* "GPTA0 Interrupt Service Request Control Register 03" */
#define GPTA0_SRC02_ADDR      0xF0001FF4     /* "GPTA0 Interrupt Service Request Control Register 02" */
#define GPTA0_SRC01_ADDR      0xF0001FF8     /* "GPTA0 Interrupt Service Request Control Register 01" */
#define GPTA0_SRC00_ADDR      0xF0001FFC     /* "GPTA0 Interrupt Service Request Control Register 00" */


#endif /* _HAVE_TRICORE_GPTA0_ADDRESSES_H_ (block "GPTA0") */


