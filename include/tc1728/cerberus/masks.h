/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CERBERUS_MASKS_H_
#define _HAVE_TRICORE_CERBERUS_MASKS_H_


/****************** Masks for CBS_COMDATA_t **********************/
/*
   CBS_COMDATA           "Communication Mode Data Register"
*/
/**********************************************************/

#define CBS_COMDATA_MASK                0xffffffff
#define CBS_COMDATA_DATA_MASK           0xffffffff
#define CBS_COMDATA_DATA_SHIFT          0



/****************** Masks for CBS_ICTSA_t **********************/
/*
   CBS_ICTSA             "Internally Controlled Trace Source Register"
*/
/**********************************************************/

#define CBS_ICTSA_MASK                  0xffffffff
#define CBS_ICTSA_ADDR_MASK             0xffffffff
#define CBS_ICTSA_ADDR_SHIFT            0



/****************** Masks for CBS_ICTTA_t **********************/
/*
   CBS_ICTTA             "Internally Controlled Trace Destination Register"
*/
/**********************************************************/

#define CBS_ICTTA_MASK                  0xffffffff
#define CBS_ICTTA_ADDR_MASK             0xffffffff
#define CBS_ICTTA_ADDR_SHIFT            0



/****************** Masks for CBS_INTMOD_t **********************/
/*
   CBS_INTMOD            "Internal Mode Status and Control Register"
*/
/**********************************************************/

#define CBS_INTMOD_MASK                 0x037d00ff
#define CBS_INTMOD_SET_CRS_MASK         0x00000001
#define CBS_INTMOD_SET_CRS_SHIFT        0
#define CBS_INTMOD_SET_CWS_MASK         0x00000002
#define CBS_INTMOD_SET_CWS_SHIFT        1
#define CBS_INTMOD_SET_CS_MASK          0x00000004
#define CBS_INTMOD_SET_CS_SHIFT         2
#define CBS_INTMOD_CLR_CS_MASK          0x00000008
#define CBS_INTMOD_CLR_CS_SHIFT         3
#define CBS_INTMOD_CHANNEL_P_MASK       0x00000010
#define CBS_INTMOD_CHANNEL_P_SHIFT      4
#define CBS_INTMOD_CHANNEL_MASK         0x000000e0
#define CBS_INTMOD_CHANNEL_SHIFT        5
#define CBS_INTMOD_SET_INT_MOD_MASK     0x00010000
#define CBS_INTMOD_SET_INT_MOD_SHIFT    16
#define CBS_INTMOD_SET_INT_TRC_MASK     0x00040000
#define CBS_INTMOD_SET_INT_TRC_SHIFT    18
#define CBS_INTMOD_CLR_INT_TRC_MASK     0x00080000
#define CBS_INTMOD_CLR_INT_TRC_SHIFT    19
#define CBS_INTMOD_TRC_MOD_P_MASK       0x00100000
#define CBS_INTMOD_TRC_MOD_P_SHIFT      20
#define CBS_INTMOD_TRC_MOD_MASK         0x00600000
#define CBS_INTMOD_TRC_MOD_SHIFT        21
#define CBS_INTMOD_INT_MOD_MASK         0x01000000
#define CBS_INTMOD_INT_MOD_SHIFT        24
#define CBS_INTMOD_INT_TRC_MASK         0x02000000
#define CBS_INTMOD_INT_TRC_SHIFT        25



/****************** Masks for CBS_IOSR_t **********************/
/*
   CBS_IOSR              "IOClient Status and Control Register"
*/
/**********************************************************/

#define CBS_IOSR_MASK                   0x000071f0
#define CBS_IOSR_CRSYNC_MASK            0x00000010
#define CBS_IOSR_CRSYNC_SHIFT           4
#define CBS_IOSR_CWSYNC_MASK            0x00000020
#define CBS_IOSR_CWSYNC_SHIFT           5
#define CBS_IOSR_CW_ACK_MASK            0x00000040
#define CBS_IOSR_CW_ACK_SHIFT           6
#define CBS_IOSR_COM_SYNC_MASK          0x00000080
#define CBS_IOSR_COM_SYNC_SHIFT         7
#define CBS_IOSR_HOSTED_MASK            0x00000100
#define CBS_IOSR_HOSTED_SHIFT           8
#define CBS_IOSR_CHANNEL_MASK           0x00007000
#define CBS_IOSR_CHANNEL_SHIFT          12



/****************** Masks for CBS_JDPID_t **********************/
/*
   CBS_JDPID             "Module Identification Register"
*/
/**********************************************************/

#define CBS_JDPID_MASK                  0xffffffff
#define CBS_JDPID_MOD_REV_MASK          0x000000ff
#define CBS_JDPID_MOD_REV_SHIFT         0
#define CBS_JDPID_MOD_TYPE_MASK         0x0000ff00
#define CBS_JDPID_MOD_TYPE_SHIFT        8
#define CBS_JDPID_MOD_NUMBER_MASK       0xffff0000
#define CBS_JDPID_MOD_NUMBER_SHIFT      16



/****************** Masks for CBS_JTAGID_t **********************/
/*
   CBS_JTAGID            "JTAG Device Identification Register"
*/
/**********************************************************/

#define CBS_JTAGID_MASK                 0xffffffff
#define CBS_JTAGID_JTAG_ID_MASK         0xffffffff
#define CBS_JTAGID_JTAG_ID_SHIFT        0



/****************** Masks for CBS_MCDBBS_t **********************/
/*
   CBS_MCDBBS            "Break Bus Switch Configuration Register"
*/
/**********************************************************/

#define CBS_MCDBBS_MASK                 0x01ff71f7
#define CBS_MCDBBS_BSSB_MASK            0x00000001
#define CBS_MCDBBS_BSSB_SHIFT           0
#define CBS_MCDBBS_BSDMA_MASK           0x00000002
#define CBS_MCDBBS_BSDMA_SHIFT          1
#define CBS_MCDBBS_BSMLI_MASK           0x00000004
#define CBS_MCDBBS_BSMLI_SHIFT          2
#define CBS_MCDBBS_BSPCP_MASK           0x00000010
#define CBS_MCDBBS_BSPCP_SHIFT          4
#define CBS_MCDBBS_BSTC_MASK            0x00000020
#define CBS_MCDBBS_BSTC_SHIFT           5
#define CBS_MCDBBS_BSPCPEN_MASK         0x00000040
#define CBS_MCDBBS_BSPCPEN_SHIFT        6
#define CBS_MCDBBS_BSHLTEN_MASK         0x00000080
#define CBS_MCDBBS_BSHLTEN_SHIFT        7
#define CBS_MCDBBS_BTMCD_MASK           0x00000100
#define CBS_MCDBBS_BTMCD_SHIFT          8
#define CBS_MCDBBS_BTPCP_MASK           0x00001000
#define CBS_MCDBBS_BTPCP_SHIFT          12
#define CBS_MCDBBS_BTTC_MASK            0x00002000
#define CBS_MCDBBS_BTTC_SHIFT           13
#define CBS_MCDBBS_BTPCPEN_MASK         0x00004000
#define CBS_MCDBBS_BTPCPEN_SHIFT        14
#define CBS_MCDBBS_BSP0_MASK            0x00010000
#define CBS_MCDBBS_BSP0_SHIFT           16
#define CBS_MCDBBS_BSP1_MASK            0x00020000
#define CBS_MCDBBS_BSP1_SHIFT           17
#define CBS_MCDBBS_BTP0_MASK            0x00040000
#define CBS_MCDBBS_BTP0_SHIFT           18
#define CBS_MCDBBS_BTP1_MASK            0x00080000
#define CBS_MCDBBS_BTP1_SHIFT           19
#define CBS_MCDBBS_BTT_MASK             0x00100000
#define CBS_MCDBBS_BTT_SHIFT            20
#define CBS_MCDBBS_BTPS_MASK            0x00600000
#define CBS_MCDBBS_BTPS_SHIFT           21
#define CBS_MCDBBS_BTSS_MASK            0x00800000
#define CBS_MCDBBS_BTSS_SHIFT           23
#define CBS_MCDBBS_BTTIEN_MASK          0x01000000
#define CBS_MCDBBS_BTTIEN_SHIFT         24



/****************** Masks for CBS_MCDBBSS_t **********************/
/*
   CBS_MCDBBSS           "Break Bus Switch Status Register"
*/
/**********************************************************/

#define CBS_MCDBBSS_MASK                0x010f3737
#define CBS_MCDBBSS_BSSSB_MASK          0x00000001
#define CBS_MCDBBSS_BSSSB_SHIFT         0
#define CBS_MCDBBSS_BSSDMA_MASK         0x00000002
#define CBS_MCDBBSS_BSSDMA_SHIFT        1
#define CBS_MCDBBSS_BSSMLI_MASK         0x00000004
#define CBS_MCDBBSS_BSSMLI_SHIFT        2
#define CBS_MCDBBSS_BSSPCP_MASK         0x00000010
#define CBS_MCDBBSS_BSSPCP_SHIFT        4
#define CBS_MCDBBSS_BSSTC_MASK          0x00000020
#define CBS_MCDBBSS_BSSTC_SHIFT         5
#define CBS_MCDBBSS_BSCSB_MASK          0x00000100
#define CBS_MCDBBSS_BSCSB_SHIFT         8
#define CBS_MCDBBSS_BSCDMA_MASK         0x00000200
#define CBS_MCDBBSS_BSCDMA_SHIFT        9
#define CBS_MCDBBSS_BSCMLI_MASK         0x00000400
#define CBS_MCDBBSS_BSCMLI_SHIFT        10
#define CBS_MCDBBSS_BSCPCP_MASK         0x00001000
#define CBS_MCDBBSS_BSCPCP_SHIFT        12
#define CBS_MCDBBSS_BSCTC_MASK          0x00002000
#define CBS_MCDBBSS_BSCTC_SHIFT         13
#define CBS_MCDBBSS_BBS0_MASK           0x00010000
#define CBS_MCDBBSS_BBS0_SHIFT          16
#define CBS_MCDBBSS_BBS1_MASK           0x00020000
#define CBS_MCDBBSS_BBS1_SHIFT          17
#define CBS_MCDBBSS_BBC0_MASK           0x00040000
#define CBS_MCDBBSS_BBC0_SHIFT          18
#define CBS_MCDBBSS_BBC1_MASK           0x00080000
#define CBS_MCDBBSS_BBC1_SHIFT          19
#define CBS_MCDBBSS_CAPCLR_MASK         0x01000000
#define CBS_MCDBBSS_CAPCLR_SHIFT        24



/****************** Masks for CBS_MCDSSG_t **********************/
/*
   CBS_MCDSSG            "Suspend Source Status and Control Register"
*/
/**********************************************************/

#define CBS_MCDSSG_MASK                 0x034d07c1
#define CBS_MCDSSG_BTSCL_MASK           0x00000001
#define CBS_MCDSSG_BTSCL_SHIFT          0
#define CBS_MCDSSG_SUS_P_MASK           0x00000040
#define CBS_MCDSSG_SUS_P_SHIFT          6
#define CBS_MCDSSG_SUS_MASK             0x00000080
#define CBS_MCDSSG_SUS_SHIFT            7
#define CBS_MCDSSG_BTS_P_MASK           0x00000100
#define CBS_MCDSSG_BTS_P_SHIFT          8
#define CBS_MCDSSG_BTSEN_MASK           0x00000200
#define CBS_MCDSSG_BTSEN_SHIFT          9
#define CBS_MCDSSG_BTSM_MASK            0x00000400
#define CBS_MCDSSG_BTSM_SHIFT           10
#define CBS_MCDSSG_SSSTC_MASK           0x00010000
#define CBS_MCDSSG_SSSTC_SHIFT          16
#define CBS_MCDSSG_SSSSCU_MASK          0x00040000
#define CBS_MCDSSG_SSSSCU_SHIFT         18
#define CBS_MCDSSG_SSSMCD_MASK          0x00080000
#define CBS_MCDSSG_SSSMCD_SHIFT         19
#define CBS_MCDSSG_SSSBRK_MASK          0x00400000
#define CBS_MCDSSG_SSSBRK_SHIFT         22
#define CBS_MCDSSG_SOS_MASK             0x01000000
#define CBS_MCDSSG_SOS_SHIFT            24
#define CBS_MCDSSG_SDS_MASK             0x02000000
#define CBS_MCDSSG_SDS_SHIFT            25



/****************** Masks for CBS_MCDSSGC_t **********************/
/*
   CBS_MCDSSGC           "Suspend Signal Target Control Register"
*/
/**********************************************************/

#define CBS_MCDSSGC_MASK                0x0000001f
#define CBS_MCDSSGC_STC_P_MASK          0x00000001
#define CBS_MCDSSGC_STC_P_SHIFT         0
#define CBS_MCDSSGC_STCM_MASK           0x00000002
#define CBS_MCDSSGC_STCM_SHIFT          1
#define CBS_MCDSSGC_STCTC_MASK          0x00000004
#define CBS_MCDSSGC_STCTC_SHIFT         2
#define CBS_MCDSSGC_STCPCP_MASK         0x00000008
#define CBS_MCDSSGC_STCPCP_SHIFT        3
#define CBS_MCDSSGC_STCDMA_MASK         0x00000010
#define CBS_MCDSSGC_STCDMA_SHIFT        4



/****************** Masks for CBS_OCNTRL_t **********************/
/*
   CBS_OCNTRL            "OSCU Control Register"
*/
/**********************************************************/

#define CBS_OCNTRL_MASK                 0xffffffff
#define CBS_OCNTRL_OC0_P_MASK           0x00000001
#define CBS_OCNTRL_OC0_P_SHIFT          0
#define CBS_OCNTRL_OC0_MASK             0x00000002
#define CBS_OCNTRL_OC0_SHIFT            1
#define CBS_OCNTRL_OC1_P_MASK           0x00000004
#define CBS_OCNTRL_OC1_P_SHIFT          2
#define CBS_OCNTRL_OC1_MASK             0x00000008
#define CBS_OCNTRL_OC1_SHIFT            3
#define CBS_OCNTRL_OC2_P_MASK           0x00000010
#define CBS_OCNTRL_OC2_P_SHIFT          4
#define CBS_OCNTRL_OC2_MASK             0x00000020
#define CBS_OCNTRL_OC2_SHIFT            5
#define CBS_OCNTRL_OC3_P_MASK           0x00000040
#define CBS_OCNTRL_OC3_P_SHIFT          6
#define CBS_OCNTRL_OC3_MASK             0x00000080
#define CBS_OCNTRL_OC3_SHIFT            7
#define CBS_OCNTRL_OC4_P_MASK           0x00000100
#define CBS_OCNTRL_OC4_P_SHIFT          8
#define CBS_OCNTRL_OC4_MASK             0x00000200
#define CBS_OCNTRL_OC4_SHIFT            9
#define CBS_OCNTRL_OC5_P_MASK           0x00000400
#define CBS_OCNTRL_OC5_P_SHIFT          10
#define CBS_OCNTRL_OC5_MASK             0x00000800
#define CBS_OCNTRL_OC5_SHIFT            11
#define CBS_OCNTRL_WDTSUS_P_MASK        0x00001000
#define CBS_OCNTRL_WDTSUS_P_SHIFT       12
#define CBS_OCNTRL_WDTSUS_MASK          0x00002000
#define CBS_OCNTRL_WDTSUS_SHIFT         13
#define CBS_OCNTRL_STABLE_P_MASK        0x00004000
#define CBS_OCNTRL_STABLE_P_SHIFT       14
#define CBS_OCNTRL_STABLE_MASK          0x00008000
#define CBS_OCNTRL_STABLE_SHIFT         15
#define CBS_OCNTRL_OJC0_P_MASK          0x00010000
#define CBS_OCNTRL_OJC0_P_SHIFT         16
#define CBS_OCNTRL_OJC0_MASK            0x00020000
#define CBS_OCNTRL_OJC0_SHIFT           17
#define CBS_OCNTRL_OJC1_P_MASK          0x00040000
#define CBS_OCNTRL_OJC1_P_SHIFT         18
#define CBS_OCNTRL_OJC1_MASK            0x00080000
#define CBS_OCNTRL_OJC1_SHIFT           19
#define CBS_OCNTRL_OJC2_P_MASK          0x00100000
#define CBS_OCNTRL_OJC2_P_SHIFT         20
#define CBS_OCNTRL_OJC2_MASK            0x00200000
#define CBS_OCNTRL_OJC2_SHIFT           21
#define CBS_OCNTRL_OJC3_P_MASK          0x00400000
#define CBS_OCNTRL_OJC3_P_SHIFT         22
#define CBS_OCNTRL_OJC3_MASK            0x00800000
#define CBS_OCNTRL_OJC3_SHIFT           23
#define CBS_OCNTRL_OJC4_P_MASK          0x01000000
#define CBS_OCNTRL_OJC4_P_SHIFT         24
#define CBS_OCNTRL_OJC4_MASK            0x02000000
#define CBS_OCNTRL_OJC4_SHIFT           25
#define CBS_OCNTRL_OJC5_P_MASK          0x04000000
#define CBS_OCNTRL_OJC5_P_SHIFT         26
#define CBS_OCNTRL_OJC5_MASK            0x08000000
#define CBS_OCNTRL_OJC5_SHIFT           27
#define CBS_OCNTRL_OJC6_P_MASK          0x10000000
#define CBS_OCNTRL_OJC6_P_SHIFT         28
#define CBS_OCNTRL_OJC6_MASK            0x20000000
#define CBS_OCNTRL_OJC6_SHIFT           29
#define CBS_OCNTRL_OJC7_P_MASK          0x40000000
#define CBS_OCNTRL_OJC7_P_SHIFT         30
#define CBS_OCNTRL_OJC7_MASK            0x80000000
#define CBS_OCNTRL_OJC7_SHIFT           31



/****************** Masks for CBS_OEC_t **********************/
/*
   CBS_OEC               "OCDS Enable Control Register"
*/
/**********************************************************/

#define CBS_OEC_MASK                    0x000f01ff
#define CBS_OEC_PAT_MASK                0x000000ff
#define CBS_OEC_PAT_SHIFT               0
#define CBS_OEC_DS_MASK                 0x00000100
#define CBS_OEC_DS_SHIFT                8
#define CBS_OEC_IF_LCK_P_MASK           0x00010000
#define CBS_OEC_IF_LCK_P_SHIFT          16
#define CBS_OEC_IF_LCK_MASK             0x00020000
#define CBS_OEC_IF_LCK_SHIFT            17
#define CBS_OEC_AUT_OK_P_MASK           0x00040000
#define CBS_OEC_AUT_OK_P_SHIFT          18
#define CBS_OEC_AUT_OK_MASK             0x00080000
#define CBS_OEC_AUT_OK_SHIFT            19



/****************** Masks for CBS_OSTATE_t **********************/
/*
   CBS_OSTATE            "OSCU Status Register"
*/
/**********************************************************/

#define CBS_OSTATE_MASK                 0x0007bfff
#define CBS_OSTATE_OEN_MASK             0x00000001
#define CBS_OSTATE_OEN_SHIFT            0
#define CBS_OSTATE_DJMODE_MASK          0x00000006
#define CBS_OSTATE_DJMODE_SHIFT         1
#define CBS_OSTATE_DAPRST_MASK          0x00000008
#define CBS_OSTATE_DAPRST_SHIFT         3
#define CBS_OSTATE_ENIDIS_MASK          0x00000010
#define CBS_OSTATE_ENIDIS_SHIFT         4
#define CBS_OSTATE_EECTRC_MASK          0x00000020
#define CBS_OSTATE_EECTRC_SHIFT         5
#define CBS_OSTATE_EECDIS_MASK          0x00000040
#define CBS_OSTATE_EECDIS_SHIFT         6
#define CBS_OSTATE_WDTSUS_MASK          0x00000080
#define CBS_OSTATE_WDTSUS_SHIFT         7
#define CBS_OSTATE_HARR_MASK            0x00000100
#define CBS_OSTATE_HARR_SHIFT           8
#define CBS_OSTATE_OJC1_MASK            0x00000200
#define CBS_OSTATE_OJC1_SHIFT           9
#define CBS_OSTATE_OJC2_MASK            0x00000400
#define CBS_OSTATE_OJC2_SHIFT           10
#define CBS_OSTATE_OJC3_MASK            0x00000800
#define CBS_OSTATE_OJC3_SHIFT           11
#define CBS_OSTATE_RSTCL0_MASK          0x00001000
#define CBS_OSTATE_RSTCL0_SHIFT         12
#define CBS_OSTATE_RSTCL1_MASK          0x00002000
#define CBS_OSTATE_RSTCL1_SHIFT         13
#define CBS_OSTATE_RSTCL3_MASK          0x00008000
#define CBS_OSTATE_RSTCL3_SHIFT         15
#define CBS_OSTATE_IF_LCK_MASK          0x00010000
#define CBS_OSTATE_IF_LCK_SHIFT         16
#define CBS_OSTATE_AUT_OK_MASK          0x00020000
#define CBS_OSTATE_AUT_OK_SHIFT         17
#define CBS_OSTATE_STABLE_MASK          0x00040000
#define CBS_OSTATE_STABLE_SHIFT         18



/****************** Masks for CBS_TRIG_t **********************/
/*
   CBS_TRIG              "Trigger to Host Register"
*/
/**********************************************************/

#define CBS_TRIG_MASK                   0xffffffff
#define CBS_TRIG_TRG0_MASK              0x00000001
#define CBS_TRIG_TRG0_SHIFT             0
#define CBS_TRIG_TRG1_MASK              0x00000002
#define CBS_TRIG_TRG1_SHIFT             1
#define CBS_TRIG_TRG2_MASK              0x00000004
#define CBS_TRIG_TRG2_SHIFT             2
#define CBS_TRIG_TRG3_MASK              0x00000008
#define CBS_TRIG_TRG3_SHIFT             3
#define CBS_TRIG_TRG4_MASK              0x00000010
#define CBS_TRIG_TRG4_SHIFT             4
#define CBS_TRIG_TRG5_MASK              0x00000020
#define CBS_TRIG_TRG5_SHIFT             5
#define CBS_TRIG_TRG6_MASK              0x00000040
#define CBS_TRIG_TRG6_SHIFT             6
#define CBS_TRIG_TRG7_MASK              0x00000080
#define CBS_TRIG_TRG7_SHIFT             7
#define CBS_TRIG_TRG8_MASK              0x00000100
#define CBS_TRIG_TRG8_SHIFT             8
#define CBS_TRIG_TRG9_MASK              0x00000200
#define CBS_TRIG_TRG9_SHIFT             9
#define CBS_TRIG_TRG10_MASK             0x00000400
#define CBS_TRIG_TRG10_SHIFT            10
#define CBS_TRIG_TRG11_MASK             0x00000800
#define CBS_TRIG_TRG11_SHIFT            11
#define CBS_TRIG_TRG12_MASK             0x00001000
#define CBS_TRIG_TRG12_SHIFT            12
#define CBS_TRIG_TRG13_MASK             0x00002000
#define CBS_TRIG_TRG13_SHIFT            13
#define CBS_TRIG_TRG14_MASK             0x00004000
#define CBS_TRIG_TRG14_SHIFT            14
#define CBS_TRIG_TRG15_MASK             0x00008000
#define CBS_TRIG_TRG15_SHIFT            15
#define CBS_TRIG_TRG16_MASK             0x00010000
#define CBS_TRIG_TRG16_SHIFT            16
#define CBS_TRIG_TRG17_MASK             0x00020000
#define CBS_TRIG_TRG17_SHIFT            17
#define CBS_TRIG_TRG18_MASK             0x00040000
#define CBS_TRIG_TRG18_SHIFT            18
#define CBS_TRIG_TRG19_MASK             0x00080000
#define CBS_TRIG_TRG19_SHIFT            19
#define CBS_TRIG_TRG20_MASK             0x00100000
#define CBS_TRIG_TRG20_SHIFT            20
#define CBS_TRIG_TRG21_MASK             0x00200000
#define CBS_TRIG_TRG21_SHIFT            21
#define CBS_TRIG_TRG22_MASK             0x00400000
#define CBS_TRIG_TRG22_SHIFT            22
#define CBS_TRIG_TRG23_MASK             0x00800000
#define CBS_TRIG_TRG23_SHIFT            23
#define CBS_TRIG_TRG24_MASK             0x01000000
#define CBS_TRIG_TRG24_SHIFT            24
#define CBS_TRIG_TRG25_MASK             0x02000000
#define CBS_TRIG_TRG25_SHIFT            25
#define CBS_TRIG_TRG26_MASK             0x04000000
#define CBS_TRIG_TRG26_SHIFT            26
#define CBS_TRIG_TRG27_MASK             0x08000000
#define CBS_TRIG_TRG27_SHIFT            27
#define CBS_TRIG_TRG28_MASK             0x10000000
#define CBS_TRIG_TRG28_SHIFT            28
#define CBS_TRIG_TRG29_MASK             0x20000000
#define CBS_TRIG_TRG29_SHIFT            29
#define CBS_TRIG_TRG30_MASK             0x40000000
#define CBS_TRIG_TRG30_SHIFT            30
#define CBS_TRIG_TRG31_MASK             0x80000000
#define CBS_TRIG_TRG31_SHIFT            31



/****************** Masks for CBS_TRIGC_t **********************/
/*
   CBS_TRIGC             "Clear Trigger to Host Register"
*/
/**********************************************************/

#define CBS_TRIGC_MASK                  0xffffffff
#define CBS_TRIGC_TRG0_MASK             0x00000001
#define CBS_TRIGC_TRG0_SHIFT            0
#define CBS_TRIGC_TRG1_MASK             0x00000002
#define CBS_TRIGC_TRG1_SHIFT            1
#define CBS_TRIGC_TRG2_MASK             0x00000004
#define CBS_TRIGC_TRG2_SHIFT            2
#define CBS_TRIGC_TRG3_MASK             0x00000008
#define CBS_TRIGC_TRG3_SHIFT            3
#define CBS_TRIGC_TRG4_MASK             0x00000010
#define CBS_TRIGC_TRG4_SHIFT            4
#define CBS_TRIGC_TRG5_MASK             0x00000020
#define CBS_TRIGC_TRG5_SHIFT            5
#define CBS_TRIGC_TRG6_MASK             0x00000040
#define CBS_TRIGC_TRG6_SHIFT            6
#define CBS_TRIGC_TRG7_MASK             0x00000080
#define CBS_TRIGC_TRG7_SHIFT            7
#define CBS_TRIGC_TRG8_MASK             0x00000100
#define CBS_TRIGC_TRG8_SHIFT            8
#define CBS_TRIGC_TRG9_MASK             0x00000200
#define CBS_TRIGC_TRG9_SHIFT            9
#define CBS_TRIGC_TRG10_MASK            0x00000400
#define CBS_TRIGC_TRG10_SHIFT           10
#define CBS_TRIGC_TRG11_MASK            0x00000800
#define CBS_TRIGC_TRG11_SHIFT           11
#define CBS_TRIGC_TRG12_MASK            0x00001000
#define CBS_TRIGC_TRG12_SHIFT           12
#define CBS_TRIGC_TRG13_MASK            0x00002000
#define CBS_TRIGC_TRG13_SHIFT           13
#define CBS_TRIGC_TRG14_MASK            0x00004000
#define CBS_TRIGC_TRG14_SHIFT           14
#define CBS_TRIGC_TRG15_MASK            0x00008000
#define CBS_TRIGC_TRG15_SHIFT           15
#define CBS_TRIGC_TRG16_MASK            0x00010000
#define CBS_TRIGC_TRG16_SHIFT           16
#define CBS_TRIGC_TRG17_MASK            0x00020000
#define CBS_TRIGC_TRG17_SHIFT           17
#define CBS_TRIGC_TRG18_MASK            0x00040000
#define CBS_TRIGC_TRG18_SHIFT           18
#define CBS_TRIGC_TRG19_MASK            0x00080000
#define CBS_TRIGC_TRG19_SHIFT           19
#define CBS_TRIGC_TRG20_MASK            0x00100000
#define CBS_TRIGC_TRG20_SHIFT           20
#define CBS_TRIGC_TRG21_MASK            0x00200000
#define CBS_TRIGC_TRG21_SHIFT           21
#define CBS_TRIGC_TRG22_MASK            0x00400000
#define CBS_TRIGC_TRG22_SHIFT           22
#define CBS_TRIGC_TRG23_MASK            0x00800000
#define CBS_TRIGC_TRG23_SHIFT           23
#define CBS_TRIGC_TRG24_MASK            0x01000000
#define CBS_TRIGC_TRG24_SHIFT           24
#define CBS_TRIGC_TRG25_MASK            0x02000000
#define CBS_TRIGC_TRG25_SHIFT           25
#define CBS_TRIGC_TRG26_MASK            0x04000000
#define CBS_TRIGC_TRG26_SHIFT           26
#define CBS_TRIGC_TRG27_MASK            0x08000000
#define CBS_TRIGC_TRG27_SHIFT           27
#define CBS_TRIGC_TRG28_MASK            0x10000000
#define CBS_TRIGC_TRG28_SHIFT           28
#define CBS_TRIGC_TRG29_MASK            0x20000000
#define CBS_TRIGC_TRG29_SHIFT           29
#define CBS_TRIGC_TRG30_MASK            0x40000000
#define CBS_TRIGC_TRG30_SHIFT           30
#define CBS_TRIGC_TRG31_MASK            0x80000000
#define CBS_TRIGC_TRG31_SHIFT           31



/****************** Masks for CBS_TRIGS_t **********************/
/*
   CBS_TRIGS             "Set Trigger to Host Register"
*/
/**********************************************************/

#define CBS_TRIGS_MASK                  0xffffffff
#define CBS_TRIGS_TRG0_MASK             0x00000001
#define CBS_TRIGS_TRG0_SHIFT            0
#define CBS_TRIGS_TRG1_MASK             0x00000002
#define CBS_TRIGS_TRG1_SHIFT            1
#define CBS_TRIGS_TRG2_MASK             0x00000004
#define CBS_TRIGS_TRG2_SHIFT            2
#define CBS_TRIGS_TRG3_MASK             0x00000008
#define CBS_TRIGS_TRG3_SHIFT            3
#define CBS_TRIGS_TRG4_MASK             0x00000010
#define CBS_TRIGS_TRG4_SHIFT            4
#define CBS_TRIGS_TRG5_MASK             0x00000020
#define CBS_TRIGS_TRG5_SHIFT            5
#define CBS_TRIGS_TRG6_MASK             0x00000040
#define CBS_TRIGS_TRG6_SHIFT            6
#define CBS_TRIGS_TRG7_MASK             0x00000080
#define CBS_TRIGS_TRG7_SHIFT            7
#define CBS_TRIGS_TRG8_MASK             0x00000100
#define CBS_TRIGS_TRG8_SHIFT            8
#define CBS_TRIGS_TRG9_MASK             0x00000200
#define CBS_TRIGS_TRG9_SHIFT            9
#define CBS_TRIGS_TRG10_MASK            0x00000400
#define CBS_TRIGS_TRG10_SHIFT           10
#define CBS_TRIGS_TRG11_MASK            0x00000800
#define CBS_TRIGS_TRG11_SHIFT           11
#define CBS_TRIGS_TRG12_MASK            0x00001000
#define CBS_TRIGS_TRG12_SHIFT           12
#define CBS_TRIGS_TRG13_MASK            0x00002000
#define CBS_TRIGS_TRG13_SHIFT           13
#define CBS_TRIGS_TRG14_MASK            0x00004000
#define CBS_TRIGS_TRG14_SHIFT           14
#define CBS_TRIGS_TRG15_MASK            0x00008000
#define CBS_TRIGS_TRG15_SHIFT           15
#define CBS_TRIGS_TRG16_MASK            0x00010000
#define CBS_TRIGS_TRG16_SHIFT           16
#define CBS_TRIGS_TRG17_MASK            0x00020000
#define CBS_TRIGS_TRG17_SHIFT           17
#define CBS_TRIGS_TRG18_MASK            0x00040000
#define CBS_TRIGS_TRG18_SHIFT           18
#define CBS_TRIGS_TRG19_MASK            0x00080000
#define CBS_TRIGS_TRG19_SHIFT           19
#define CBS_TRIGS_TRG20_MASK            0x00100000
#define CBS_TRIGS_TRG20_SHIFT           20
#define CBS_TRIGS_TRG21_MASK            0x00200000
#define CBS_TRIGS_TRG21_SHIFT           21
#define CBS_TRIGS_TRG22_MASK            0x00400000
#define CBS_TRIGS_TRG22_SHIFT           22
#define CBS_TRIGS_TRG23_MASK            0x00800000
#define CBS_TRIGS_TRG23_SHIFT           23
#define CBS_TRIGS_TRG24_MASK            0x01000000
#define CBS_TRIGS_TRG24_SHIFT           24
#define CBS_TRIGS_TRG25_MASK            0x02000000
#define CBS_TRIGS_TRG25_SHIFT           25
#define CBS_TRIGS_TRG26_MASK            0x04000000
#define CBS_TRIGS_TRG26_SHIFT           26
#define CBS_TRIGS_TRG27_MASK            0x08000000
#define CBS_TRIGS_TRG27_SHIFT           27
#define CBS_TRIGS_TRG28_MASK            0x10000000
#define CBS_TRIGS_TRG28_SHIFT           28
#define CBS_TRIGS_TRG29_MASK            0x20000000
#define CBS_TRIGS_TRG29_SHIFT           29
#define CBS_TRIGS_TRG30_MASK            0x40000000
#define CBS_TRIGS_TRG30_SHIFT           30
#define CBS_TRIGS_TRG31_MASK            0x80000000
#define CBS_TRIGS_TRG31_SHIFT           31




#endif /* _HAVE_TRICORE_CERBERUS_MASKS_H_ */

