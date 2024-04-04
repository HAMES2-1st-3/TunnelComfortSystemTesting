/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SENT_SHAREMASKS_H_
#define _HAVE_TRICORE_SENT_SHAREMASKS_H_


/****************** Masks for SENT_CFDRm_t **********************/
/*
   SENT_CFDR0            "Channel Fractional Divider Register 0"
   SENT_CFDR1            "Channel Fractional Divider Register 1"
   SENT_CFDR2            "Channel Fractional Divider Register 2"
   SENT_CFDR3            "Channel Fractional Divider Register 3"
   SENT_CFDR4            "Channel Fractional Divider Register 4"
   SENT_CFDR5            "Channel Fractional Divider Register 5"
   SENT_CFDR6            "Channel Fractional Divider Register 6"
   SENT_CFDR7            "Channel Fractional Divider Register 7"
*/
/**********************************************************/

#define SENT_CFDRm_MASK                 0x0fff0fff
#define SENT_CFDRm_DIV_MASK             0x00000fff
#define SENT_CFDRm_DIV_SHIFT            0
#define SENT_CFDRm_DIVM_MASK            0x0fff0000
#define SENT_CFDRm_DIVM_SHIFT           16



/****************** Masks for SENT_CPDRm_t **********************/
/*
   SENT_CPDR0            "Channel Pre Divider Register 0"
   SENT_CPDR1            "Channel Pre Divider Register 1"
   SENT_CPDR2            "Channel Pre Divider Register 2"
   SENT_CPDR3            "Channel Pre Divider Register 3"
   SENT_CPDR4            "Channel Pre Divider Register 4"
   SENT_CPDR5            "Channel Pre Divider Register 5"
   SENT_CPDR6            "Channel Pre Divider Register 6"
   SENT_CPDR7            "Channel Pre Divider Register 7"
*/
/**********************************************************/

#define SENT_CPDRm_MASK                 0x00000fff
#define SENT_CPDRm_PDIV_MASK            0x00000fff
#define SENT_CPDRm_PDIV_SHIFT           0



/****************** Masks for SENT_INPm_t **********************/
/*
   SENT_INP0             "Interrupt Node Pointer Register 0"
   SENT_INP1             "Interrupt Node Pointer Register 1"
   SENT_INP2             "Interrupt Node Pointer Register 2"
   SENT_INP3             "Interrupt Node Pointer Register 3"
   SENT_INP4             "Interrupt Node Pointer Register 4"
   SENT_INP5             "Interrupt Node Pointer Register 5"
   SENT_INP6             "Interrupt Node Pointer Register 6"
   SENT_INP7             "Interrupt Node Pointer Register 7"
*/
/**********************************************************/

#define SENT_INPm_MASK                  0x0fffffff
#define SENT_INPm_RSI_MASK              0x0000000f
#define SENT_INPm_RSI_SHIFT             0
#define SENT_INPm_RDI_MASK              0x000000f0
#define SENT_INPm_RDI_SHIFT             4
#define SENT_INPm_RBI_MASK              0x00000f00
#define SENT_INPm_RBI_SHIFT             8
#define SENT_INPm_TDI_MASK              0x0000f000
#define SENT_INPm_TDI_SHIFT             12
#define SENT_INPm_TBI_MASK              0x000f0000
#define SENT_INPm_TBI_SHIFT             16
#define SENT_INPm_ERRI_MASK             0x00f00000
#define SENT_INPm_ERRI_SHIFT            20
#define SENT_INPm_SDI_MASK              0x0f000000
#define SENT_INPm_SDI_SHIFT             24



/****************** Masks for SENT_INTCLRm_t **********************/
/*
   SENT_INTCLR0          "Interrupt Clear Register 0"
   SENT_INTCLR1          "Interrupt Clear Register 1"
   SENT_INTCLR2          "Interrupt Clear Register 2"
   SENT_INTCLR3          "Interrupt Clear Register 3"
   SENT_INTCLR4          "Interrupt Clear Register 4"
   SENT_INTCLR5          "Interrupt Clear Register 5"
   SENT_INTCLR6          "Interrupt Clear Register 6"
   SENT_INTCLR7          "Interrupt Clear Register 7"
*/
/**********************************************************/

#define SENT_INTCLRm_MASK               0x00001fff
#define SENT_INTCLRm_RSI_MASK           0x00000001
#define SENT_INTCLRm_RSI_SHIFT          0
#define SENT_INTCLRm_RDI_MASK           0x00000002
#define SENT_INTCLRm_RDI_SHIFT          1
#define SENT_INTCLRm_RBI_MASK           0x00000004
#define SENT_INTCLRm_RBI_SHIFT          2
#define SENT_INTCLRm_TDI_MASK           0x00000008
#define SENT_INTCLRm_TDI_SHIFT          3
#define SENT_INTCLRm_TBI_MASK           0x00000010
#define SENT_INTCLRm_TBI_SHIFT          4
#define SENT_INTCLRm_FRI_MASK           0x00000020
#define SENT_INTCLRm_FRI_SHIFT          5
#define SENT_INTCLRm_FDI_MASK           0x00000040
#define SENT_INTCLRm_FDI_SHIFT          6
#define SENT_INTCLRm_NNI_MASK           0x00000080
#define SENT_INTCLRm_NNI_SHIFT          7
#define SENT_INTCLRm_NVI_MASK           0x00000100
#define SENT_INTCLRm_NVI_SHIFT          8
#define SENT_INTCLRm_CRCI_MASK          0x00000200
#define SENT_INTCLRm_CRCI_SHIFT         9
#define SENT_INTCLRm_WSI_MASK           0x00000400
#define SENT_INTCLRm_WSI_SHIFT          10
#define SENT_INTCLRm_SDI_MASK           0x00000800
#define SENT_INTCLRm_SDI_SHIFT          11
#define SENT_INTCLRm_SCRI_MASK          0x00001000
#define SENT_INTCLRm_SCRI_SHIFT         12



/****************** Masks for SENT_INTENm_t **********************/
/*
   SENT_INTEN0           "Interrupt Enable Register 0"
   SENT_INTEN1           "Interrupt Enable Register 1"
   SENT_INTEN2           "Interrupt Enable Register 2"
   SENT_INTEN3           "Interrupt Enable Register 3"
   SENT_INTEN4           "Interrupt Enable Register 4"
   SENT_INTEN5           "Interrupt Enable Register 5"
   SENT_INTEN6           "Interrupt Enable Register 6"
   SENT_INTEN7           "Interrupt Enable Register 7"
*/
/**********************************************************/

#define SENT_INTENm_MASK                0x00001fff
#define SENT_INTENm_RSI_MASK            0x00000001
#define SENT_INTENm_RSI_SHIFT           0
#define SENT_INTENm_RDI_MASK            0x00000002
#define SENT_INTENm_RDI_SHIFT           1
#define SENT_INTENm_RBI_MASK            0x00000004
#define SENT_INTENm_RBI_SHIFT           2
#define SENT_INTENm_TDI_MASK            0x00000008
#define SENT_INTENm_TDI_SHIFT           3
#define SENT_INTENm_TBI_MASK            0x00000010
#define SENT_INTENm_TBI_SHIFT           4
#define SENT_INTENm_FRI_MASK            0x00000020
#define SENT_INTENm_FRI_SHIFT           5
#define SENT_INTENm_FDI_MASK            0x00000040
#define SENT_INTENm_FDI_SHIFT           6
#define SENT_INTENm_NNI_MASK            0x00000080
#define SENT_INTENm_NNI_SHIFT           7
#define SENT_INTENm_NVI_MASK            0x00000100
#define SENT_INTENm_NVI_SHIFT           8
#define SENT_INTENm_CRCI_MASK           0x00000200
#define SENT_INTENm_CRCI_SHIFT          9
#define SENT_INTENm_WSI_MASK            0x00000400
#define SENT_INTENm_WSI_SHIFT           10
#define SENT_INTENm_SDI_MASK            0x00000800
#define SENT_INTENm_SDI_SHIFT           11
#define SENT_INTENm_SCRI_MASK           0x00001000
#define SENT_INTENm_SCRI_SHIFT          12



/****************** Masks for SENT_INTSETm_t **********************/
/*
   SENT_INTSET0          "Interrupt Set Register 0"
   SENT_INTSET1          "Interrupt Set Register 1"
   SENT_INTSET2          "Interrupt Set Register 2"
   SENT_INTSET3          "Interrupt Set Register 3"
   SENT_INTSET4          "Interrupt Set Register 4"
   SENT_INTSET5          "Interrupt Set Register 5"
   SENT_INTSET6          "Interrupt Set Register 6"
   SENT_INTSET7          "Interrupt Set Register 7"
*/
/**********************************************************/

#define SENT_INTSETm_MASK               0x00001fff
#define SENT_INTSETm_RSI_MASK           0x00000001
#define SENT_INTSETm_RSI_SHIFT          0
#define SENT_INTSETm_RDI_MASK           0x00000002
#define SENT_INTSETm_RDI_SHIFT          1
#define SENT_INTSETm_RBI_MASK           0x00000004
#define SENT_INTSETm_RBI_SHIFT          2
#define SENT_INTSETm_TDI_MASK           0x00000008
#define SENT_INTSETm_TDI_SHIFT          3
#define SENT_INTSETm_TBI_MASK           0x00000010
#define SENT_INTSETm_TBI_SHIFT          4
#define SENT_INTSETm_FRI_MASK           0x00000020
#define SENT_INTSETm_FRI_SHIFT          5
#define SENT_INTSETm_FDI_MASK           0x00000040
#define SENT_INTSETm_FDI_SHIFT          6
#define SENT_INTSETm_NNI_MASK           0x00000080
#define SENT_INTSETm_NNI_SHIFT          7
#define SENT_INTSETm_NVI_MASK           0x00000100
#define SENT_INTSETm_NVI_SHIFT          8
#define SENT_INTSETm_CRCI_MASK          0x00000200
#define SENT_INTSETm_CRCI_SHIFT         9
#define SENT_INTSETm_WSI_MASK           0x00000400
#define SENT_INTSETm_WSI_SHIFT          10
#define SENT_INTSETm_SDI_MASK           0x00000800
#define SENT_INTSETm_SDI_SHIFT          11
#define SENT_INTSETm_SCRI_MASK          0x00001000
#define SENT_INTSETm_SCRI_SHIFT         12



/****************** Masks for SENT_INTSTATm_t **********************/
/*
   SENT_INTSTAT0         "Interrupt Status Register 0"
   SENT_INTSTAT1         "Interrupt Status Register 1"
   SENT_INTSTAT2         "Interrupt Status Register 2"
   SENT_INTSTAT3         "Interrupt Status Register 3"
   SENT_INTSTAT4         "Interrupt Status Register 4"
   SENT_INTSTAT5         "Interrupt Status Register 5"
   SENT_INTSTAT6         "Interrupt Status Register 6"
   SENT_INTSTAT7         "Interrupt Status Register 7"
*/
/**********************************************************/

#define SENT_INTSTATm_MASK              0x00001fff
#define SENT_INTSTATm_RSI_MASK          0x00000001
#define SENT_INTSTATm_RSI_SHIFT         0
#define SENT_INTSTATm_RDI_MASK          0x00000002
#define SENT_INTSTATm_RDI_SHIFT         1
#define SENT_INTSTATm_RBI_MASK          0x00000004
#define SENT_INTSTATm_RBI_SHIFT         2
#define SENT_INTSTATm_TDI_MASK          0x00000008
#define SENT_INTSTATm_TDI_SHIFT         3
#define SENT_INTSTATm_TBI_MASK          0x00000010
#define SENT_INTSTATm_TBI_SHIFT         4
#define SENT_INTSTATm_FRI_MASK          0x00000020
#define SENT_INTSTATm_FRI_SHIFT         5
#define SENT_INTSTATm_FDI_MASK          0x00000040
#define SENT_INTSTATm_FDI_SHIFT         6
#define SENT_INTSTATm_NNI_MASK          0x00000080
#define SENT_INTSTATm_NNI_SHIFT         7
#define SENT_INTSTATm_NVI_MASK          0x00000100
#define SENT_INTSTATm_NVI_SHIFT         8
#define SENT_INTSTATm_CRCI_MASK         0x00000200
#define SENT_INTSTATm_CRCI_SHIFT        9
#define SENT_INTSTATm_WSI_MASK          0x00000400
#define SENT_INTSTATm_WSI_SHIFT         10
#define SENT_INTSTATm_SDI_MASK          0x00000800
#define SENT_INTSTATm_SDI_SHIFT         11
#define SENT_INTSTATm_SCRI_MASK         0x00001000
#define SENT_INTSTATm_SCRI_SHIFT        12



/****************** Masks for SENT_IOCRm_t **********************/
/*
   SENT_IOCR0            "Input and Output Control Register 0"
   SENT_IOCR1            "Input and Output Control Register 1"
   SENT_IOCR2            "Input and Output Control Register 2"
   SENT_IOCR3            "Input and Output Control Register 3"
   SENT_IOCR4            "Input and Output Control Register 4"
   SENT_IOCR5            "Input and Output Control Register 5"
   SENT_IOCR6            "Input and Output Control Register 6"
   SENT_IOCR7            "Input and Output Control Register 7"
*/
/**********************************************************/

#define SENT_IOCRm_MASK                 0xf007f3f3
#define SENT_IOCRm_ALTI_MASK            0x00000003
#define SENT_IOCRm_ALTI_SHIFT           0
#define SENT_IOCRm_DEPTH_MASK           0x000000f0
#define SENT_IOCRm_DEPTH_SHIFT          4
#define SENT_IOCRm_OIE_MASK             0x00000100
#define SENT_IOCRm_OIE_SHIFT            8
#define SENT_IOCRm_IIE_MASK             0x00000200
#define SENT_IOCRm_IIE_SHIFT            9
#define SENT_IOCRm_REG_MASK             0x00001000
#define SENT_IOCRm_REG_SHIFT            12
#define SENT_IOCRm_FEG_MASK             0x00002000
#define SENT_IOCRm_FEG_SHIFT            13
#define SENT_IOCRm_CREG_MASK            0x00004000
#define SENT_IOCRm_CREG_SHIFT           14
#define SENT_IOCRm_CFEG_MASK            0x00008000
#define SENT_IOCRm_CFEG_SHIFT           15
#define SENT_IOCRm_ETS_MASK             0x00070000
#define SENT_IOCRm_ETS_SHIFT            16
#define SENT_IOCRm_CTR_MASK             0x10000000
#define SENT_IOCRm_CTR_SHIFT            28
#define SENT_IOCRm_TRM_MASK             0x20000000
#define SENT_IOCRm_TRM_SHIFT            29
#define SENT_IOCRm_RXM_MASK             0x40000000
#define SENT_IOCRm_RXM_SHIFT            30
#define SENT_IOCRm_TXM_MASK             0x80000000
#define SENT_IOCRm_TXM_SHIFT            31



/****************** Masks for SENT_RCRm_t **********************/
/*
   SENT_RCR0             "Receiver Control Register 0"
   SENT_RCR1             "Receiver Control Register 1"
   SENT_RCR2             "Receiver Control Register 2"
   SENT_RCR3             "Receiver Control Register 3"
   SENT_RCR4             "Receiver Control Register 4"
   SENT_RCR5             "Receiver Control Register 5"
   SENT_RCR6             "Receiver Control Register 6"
   SENT_RCR7             "Receiver Control Register 7"
*/
/**********************************************************/

#define SENT_RCRm_MASK                  0x000fffff
#define SENT_RCRm_CEN_MASK              0x00000001
#define SENT_RCRm_CEN_SHIFT             0
#define SENT_RCRm_IEP_MASK              0x00000002
#define SENT_RCRm_IEP_SHIFT             1
#define SENT_RCRm_ACE_MASK              0x00000004
#define SENT_RCRm_ACE_SHIFT             2
#define SENT_RCRm_SNI_MASK              0x00000008
#define SENT_RCRm_SNI_SHIFT             3
#define SENT_RCRm_SDP_MASK              0x00000010
#define SENT_RCRm_SDP_SHIFT             4
#define SENT_RCRm_SCDIS_MASK            0x00000020
#define SENT_RCRm_SCDIS_SHIFT           5
#define SENT_RCRm_CDIS_MASK             0x00000040
#define SENT_RCRm_CDIS_SHIFT            6
#define SENT_RCRm_CFC_MASK              0x00000080
#define SENT_RCRm_CFC_SHIFT             7
#define SENT_RCRm_FRL_MASK              0x0000ff00
#define SENT_RCRm_FRL_SHIFT             8
#define SENT_RCRm_CRZ_MASK              0x00010000
#define SENT_RCRm_CRZ_SHIFT             16
#define SENT_RCRm_ESF_MASK              0x00020000
#define SENT_RCRm_ESF_SHIFT             17
#define SENT_RCRm_IDE_MASK              0x00040000
#define SENT_RCRm_IDE_SHIFT             18
#define SENT_RCRm_SUSEN_MASK            0x00080000
#define SENT_RCRm_SUSEN_SHIFT           19



/****************** Masks for SENT_RDRm_t **********************/
/*
   SENT_RDR0             "Receive Data Register 0"
   SENT_RDR1             "Receive Data Register 1"
   SENT_RDR2             "Receive Data Register 2"
   SENT_RDR3             "Receive Data Register 3"
   SENT_RDR4             "Receive Data Register 4"
   SENT_RDR5             "Receive Data Register 5"
   SENT_RDR6             "Receive Data Register 6"
   SENT_RDR7             "Receive Data Register 7"
*/
/**********************************************************/

#define SENT_RDRm_MASK                  0xffffffff
#define SENT_RDRm_RD0_MASK              0x0000000f
#define SENT_RDRm_RD0_SHIFT             0
#define SENT_RDRm_RD1_MASK              0x000000f0
#define SENT_RDRm_RD1_SHIFT             4
#define SENT_RDRm_RD2_MASK              0x00000f00
#define SENT_RDRm_RD2_SHIFT             8
#define SENT_RDRm_RD3_MASK              0x0000f000
#define SENT_RDRm_RD3_SHIFT             12
#define SENT_RDRm_RD4_MASK              0x000f0000
#define SENT_RDRm_RD4_SHIFT             16
#define SENT_RDRm_RD5_MASK              0x00f00000
#define SENT_RDRm_RD5_SHIFT             20
#define SENT_RDRm_RD6_MASK              0x0f000000
#define SENT_RDRm_RD6_SHIFT             24
#define SENT_RDRm_RD7_MASK              0xf0000000
#define SENT_RDRm_RD7_SHIFT             28



/****************** Masks for SENT_RSRm_t **********************/
/*
   SENT_RSR0             "Receive Status Register 0"
   SENT_RSR1             "Receive Status Register 1"
   SENT_RSR2             "Receive Status Register 2"
   SENT_RSR3             "Receive Status Register 3"
   SENT_RSR4             "Receive Status Register 4"
   SENT_RSR5             "Receive Status Register 5"
   SENT_RSR6             "Receive Status Register 6"
   SENT_RSR7             "Receive Status Register 7"
*/
/**********************************************************/

#define SENT_RSRm_MASK                  0x00000f3f
#define SENT_RSRm_CRC_MASK              0x0000000f
#define SENT_RSRm_CRC_SHIFT             0
#define SENT_RSRm_CST_MASK              0x00000030
#define SENT_RSRm_CST_SHIFT             4
#define SENT_RSRm_SCN_MASK              0x00000f00
#define SENT_RSRm_SCN_SHIFT             8



/****************** Masks for SENT_SCRm_t **********************/
/*
   SENT_SCR0             "SPC Control Register 0"
   SENT_SCR1             "SPC Control Register 1"
   SENT_SCR2             "SPC Control Register 2"
   SENT_SCR3             "SPC Control Register 3"
   SENT_SCR4             "SPC Control Register 4"
   SENT_SCR5             "SPC Control Register 5"
   SENT_SCR6             "SPC Control Register 6"
   SENT_SCR7             "SPC Control Register 7"
*/
/**********************************************************/

#define SENT_SCRm_MASK                  0x0000ffff
#define SENT_SCRm_PLEN_MASK             0x0000003f
#define SENT_SCRm_PLEN_SHIFT            0
#define SENT_SCRm_TRIG_MASK             0x000000c0
#define SENT_SCRm_TRIG_SHIFT            6
#define SENT_SCRm_DEL_MASK              0x00003f00
#define SENT_SCRm_DEL_SHIFT             8
#define SENT_SCRm_BASE_MASK             0x00004000
#define SENT_SCRm_BASE_SHIFT            14
#define SENT_SCRm_TRQ_MASK              0x00008000
#define SENT_SCRm_TRQ_SHIFT             15



/****************** Masks for SENT_SDSm_t **********************/
/*
   SENT_SDS0             "Serial Data and Status Register 0"
   SENT_SDS1             "Serial Data and Status Register 1"
   SENT_SDS2             "Serial Data and Status Register 2"
   SENT_SDS3             "Serial Data and Status Register 3"
   SENT_SDS4             "Serial Data and Status Register 4"
   SENT_SDS5             "Serial Data and Status Register 5"
   SENT_SDS6             "Serial Data and Status Register 6"
   SENT_SDS7             "Serial Data and Status Register 7"
*/
/**********************************************************/

#define SENT_SDSm_MASK                  0xbfffffff
#define SENT_SDSm_SD_MASK               0x0000ffff
#define SENT_SDSm_SD_SHIFT              0
#define SENT_SDSm_MID_MASK              0x00ff0000
#define SENT_SDSm_MID_SHIFT             16
#define SENT_SDSm_SCRC_MASK             0x3f000000
#define SENT_SDSm_SCRC_SHIFT            24
#define SENT_SDSm_CON_MASK              0x80000000
#define SENT_SDSm_CON_SHIFT             31



/****************** Masks for SENT_SRCm_t **********************/
/*
   SENT_SRC0             "Service Request Control 0 Register"
   SENT_SRC1             "Service Request Control 1 Register"
   SENT_SRC2             "Service Request Control 2 Register"
   SENT_SRC3             "Service Request Control 3 Register"
*/
/**********************************************************/

#define SENT_SRCm_MASK                  0x0000f4ff
#define SENT_SRCm_SRPN_MASK             0x000000ff
#define SENT_SRCm_SRPN_SHIFT            0
#define SENT_SRCm_TOS_MASK              0x00000400
#define SENT_SRCm_TOS_SHIFT             10
#define SENT_SRCm_SRE_MASK              0x00001000
#define SENT_SRCm_SRE_SHIFT             12
#define SENT_SRCm_SRR_MASK              0x00002000
#define SENT_SRCm_SRR_SHIFT             13
#define SENT_SRCm_CLRR_MASK             0x00004000
#define SENT_SRCm_CLRR_SHIFT            14
#define SENT_SRCm_SETR_MASK             0x00008000
#define SENT_SRCm_SETR_SHIFT            15



/****************** Masks for SENT_VIEWm_t **********************/
/*
   SENT_VIEW0            "Receive Data View Register 0"
   SENT_VIEW1            "Receive Data View Register 1"
   SENT_VIEW2            "Receive Data View Register 2"
   SENT_VIEW3            "Receive Data View Register 3"
   SENT_VIEW4            "Receive Data View Register 4"
   SENT_VIEW5            "Receive Data View Register 5"
   SENT_VIEW6            "Receive Data View Register 6"
   SENT_VIEW7            "Receive Data View Register 7"
*/
/**********************************************************/

#define SENT_VIEWm_MASK                 0x77777777
#define SENT_VIEWm_RDNP0_MASK           0x00000007
#define SENT_VIEWm_RDNP0_SHIFT          0
#define SENT_VIEWm_RDNP1_MASK           0x00000070
#define SENT_VIEWm_RDNP1_SHIFT          4
#define SENT_VIEWm_RDNP2_MASK           0x00000700
#define SENT_VIEWm_RDNP2_SHIFT          8
#define SENT_VIEWm_RDNP3_MASK           0x00007000
#define SENT_VIEWm_RDNP3_SHIFT          12
#define SENT_VIEWm_RDNP4_MASK           0x00070000
#define SENT_VIEWm_RDNP4_SHIFT          16
#define SENT_VIEWm_RDNP5_MASK           0x00700000
#define SENT_VIEWm_RDNP5_SHIFT          20
#define SENT_VIEWm_RDNP6_MASK           0x07000000
#define SENT_VIEWm_RDNP6_SHIFT          24
#define SENT_VIEWm_RDNP7_MASK           0x70000000
#define SENT_VIEWm_RDNP7_SHIFT          28




#endif /* _HAVE_TRICORE_SENT_SHAREMASKS_H_ */

