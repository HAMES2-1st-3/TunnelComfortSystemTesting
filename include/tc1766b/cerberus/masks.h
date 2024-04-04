/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CERBERUS_MASKS_H_
#define _HAVE_TRICORE_CERBERUS_MASKS_H_


/****************** Masks for CBS_COMDATA_t **********************/
/*
   CBS_COMDATA           "Cerberus Communication Mode Data Register"
*/
/**********************************************************/

#define CBS_COMDATA_MASK                0xffffffff
#define CBS_COMDATA_DATA_MASK           0xffffffff
#define CBS_COMDATA_DATA_SHIFT          0



/****************** Masks for CBS_ICTSA_t **********************/
/*
   CBS_ICTSA             "Cerberus Internal Controlled Trace Source Address Register"
*/
/**********************************************************/

#define CBS_ICTSA_MASK                  0xffffffff
#define CBS_ICTSA_ADDR_MASK             0xffffffff
#define CBS_ICTSA_ADDR_SHIFT            0



/****************** Masks for CBS_ICTTA_t **********************/
/*
   CBS_ICTTA             "Cerberus Internal Controlled Trace Target Address Register"
*/
/**********************************************************/

#define CBS_ICTTA_MASK                  0xffffffff
#define CBS_ICTTA_ADDR_MASK             0xffffffff
#define CBS_ICTTA_ADDR_SHIFT            0



/****************** Masks for CBS_INTMOD_t **********************/
/*
   CBS_INTMOD            "Cerberus Internal Mode Status and Control Register"
*/
/**********************************************************/

#define CBS_INTMOD_MASK                 0x037d00ff
#define CBS_INTMOD_SETCRS_MASK          0x00000001
#define CBS_INTMOD_SETCRS_SHIFT         0
#define CBS_INTMOD_SETCWS_MASK          0x00000002
#define CBS_INTMOD_SETCWS_SHIFT         1
#define CBS_INTMOD_SETCS_MASK           0x00000004
#define CBS_INTMOD_SETCS_SHIFT          2
#define CBS_INTMOD_CLRCS_MASK           0x00000008
#define CBS_INTMOD_CLRCS_SHIFT          3
#define CBS_INTMOD_CHANNEL_P_MASK       0x00000010
#define CBS_INTMOD_CHANNEL_P_SHIFT      4
#define CBS_INTMOD_CHANNEL_MASK         0x000000e0
#define CBS_INTMOD_CHANNEL_SHIFT        5
#define CBS_INTMOD_SETINTMOD_MASK       0x00010000
#define CBS_INTMOD_SETINTMOD_SHIFT      16
#define CBS_INTMOD_SETINTTRC_MASK       0x00040000
#define CBS_INTMOD_SETINTTRC_SHIFT      18
#define CBS_INTMOD_CLRINTTRC_MASK       0x00080000
#define CBS_INTMOD_CLRINTTRC_SHIFT      19
#define CBS_INTMOD_TRCMODP_MASK         0x00100000
#define CBS_INTMOD_TRCMODP_SHIFT        20
#define CBS_INTMOD_TRCMOD_MASK          0x00600000
#define CBS_INTMOD_TRCMOD_SHIFT         21
#define CBS_INTMOD_INTMOD_MASK          0x01000000
#define CBS_INTMOD_INTMOD_SHIFT         24
#define CBS_INTMOD_INTTRC_MASK          0x02000000
#define CBS_INTMOD_INTTRC_SHIFT         25



/****************** Masks for CBS_IOSR_t **********************/
/*
   CBS_IOSR              "Cerberus Status Register"
*/
/**********************************************************/

#define CBS_IOSR_MASK                   0x000070f0
#define CBS_IOSR_CRSYNC_MASK            0x00000010
#define CBS_IOSR_CRSYNC_SHIFT           4
#define CBS_IOSR_CWSYNC_MASK            0x00000020
#define CBS_IOSR_CWSYNC_SHIFT           5
#define CBS_IOSR_CWACK_MASK             0x00000040
#define CBS_IOSR_CWACK_SHIFT            6
#define CBS_IOSR_COMSYNC_MASK           0x00000080
#define CBS_IOSR_COMSYNC_SHIFT          7
#define CBS_IOSR_CHANNEL_MASK           0x00007000
#define CBS_IOSR_CHANNEL_SHIFT          12



/****************** Masks for CBS_JDP_ID_t **********************/
/*
   CBS_JDP_ID            "Module Identification Register"
*/
/**********************************************************/

#define CBS_JDP_ID_MASK                 0x0000ffff
#define CBS_JDP_ID_REVISION_MASK        0x000000ff
#define CBS_JDP_ID_REVISION_SHIFT       0
#define CBS_JDP_ID_MODULE_MASK          0x0000ff00
#define CBS_JDP_ID_MODULE_SHIFT         8



/****************** Masks for CBS_MCDBBS_t **********************/
/*
   CBS_MCDBBS            "Break Bus Switch Configuration Register"
*/
/**********************************************************/

#define CBS_MCDBBS_MASK                 0x019f537f
#define CBS_MCDBBS_BSTC_MASK            0x00000001
#define CBS_MCDBBS_BSTC_SHIFT           0
#define CBS_MCDBBS_BSMCD_MASK           0x00000002
#define CBS_MCDBBS_BSMCD_SHIFT          1
#define CBS_MCDBBS_BSSB_MASK            0x00000004
#define CBS_MCDBBS_BSSB_SHIFT           2
#define CBS_MCDBBS_BSRB_MASK            0x00000008
#define CBS_MCDBBS_BSRB_SHIFT           3
#define CBS_MCDBBS_BSPCP_MASK           0x00000010
#define CBS_MCDBBS_BSPCP_SHIFT          4
#define CBS_MCDBBS_BSDMA_MASK           0x00000020
#define CBS_MCDBBS_BSDMA_SHIFT          5
#define CBS_MCDBBS_BSPCPEN_MASK         0x00000040
#define CBS_MCDBBS_BSPCPEN_SHIFT        6
#define CBS_MCDBBS_BTTC_MASK            0x00000100
#define CBS_MCDBBS_BTTC_SHIFT           8
#define CBS_MCDBBS_BTMCD_MASK           0x00000200
#define CBS_MCDBBS_BTMCD_SHIFT          9
#define CBS_MCDBBS_BTPCP_MASK           0x00001000
#define CBS_MCDBBS_BTPCP_SHIFT          12
#define CBS_MCDBBS_BTPCPEN_MASK         0x00004000
#define CBS_MCDBBS_BTPCPEN_SHIFT        14
#define CBS_MCDBBS_BSPIN_MASK           0x00010000
#define CBS_MCDBBS_BSPIN_SHIFT          16
#define CBS_MCDBBS_BSPINA_MASK          0x00020000
#define CBS_MCDBBS_BSPINA_SHIFT         17
#define CBS_MCDBBS_BTPINA_MASK          0x00040000
#define CBS_MCDBBS_BTPINA_SHIFT         18
#define CBS_MCDBBS_BTPIN_MASK           0x00080000
#define CBS_MCDBBS_BTPIN_SHIFT          19
#define CBS_MCDBBS_BTT_MASK             0x00100000
#define CBS_MCDBBS_BTT_SHIFT            20
#define CBS_MCDBBS_BTSS_MASK            0x00800000
#define CBS_MCDBBS_BTSS_SHIFT           23
#define CBS_MCDBBS_BTTIEN_MASK          0x01000000
#define CBS_MCDBBS_BTTIEN_SHIFT         24



/****************** Masks for CBS_MCDBBSS_t **********************/
/*
   CBS_MCDBBSS           "Cerberus Break Bus Switch Status Register"
*/
/**********************************************************/

#define CBS_MCDBBSS_MASK                0x010f3f3f
#define CBS_MCDBBSS_BSSTC_MASK          0x00000001
#define CBS_MCDBBSS_BSSTC_SHIFT         0
#define CBS_MCDBBSS_BSSMCD_MASK         0x00000002
#define CBS_MCDBBSS_BSSMCD_SHIFT        1
#define CBS_MCDBBSS_BSSSB_MASK          0x00000004
#define CBS_MCDBBSS_BSSSB_SHIFT         2
#define CBS_MCDBBSS_BSSRB_MASK          0x00000008
#define CBS_MCDBBSS_BSSRB_SHIFT         3
#define CBS_MCDBBSS_BSSPCP_MASK         0x00000010
#define CBS_MCDBBSS_BSSPCP_SHIFT        4
#define CBS_MCDBBSS_BSSDMA_MASK         0x00000020
#define CBS_MCDBBSS_BSSDMA_SHIFT        5
#define CBS_MCDBBSS_BSCTC_MASK          0x00000100
#define CBS_MCDBBSS_BSCTC_SHIFT         8
#define CBS_MCDBBSS_BSCMCD_MASK         0x00000200
#define CBS_MCDBBSS_BSCMCD_SHIFT        9
#define CBS_MCDBBSS_BSCSB_MASK          0x00000400
#define CBS_MCDBBSS_BSCSB_SHIFT         10
#define CBS_MCDBBSS_BSCRB_MASK          0x00000800
#define CBS_MCDBBSS_BSCRB_SHIFT         11
#define CBS_MCDBBSS_BSCPCP_MASK         0x00001000
#define CBS_MCDBBSS_BSCPCP_SHIFT        12
#define CBS_MCDBBSS_BSCDMA_MASK         0x00002000
#define CBS_MCDBBSS_BSCDMA_SHIFT        13
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
   CBS_MCDSSG            "Cerberus Suspend Signal Generation Status and Control Register"
*/
/**********************************************************/

#define CBS_MCDSSG_MASK                 0x034107c1
#define CBS_MCDSSG_BTSCL_MASK           0x00000001
#define CBS_MCDSSG_BTSCL_SHIFT          0
#define CBS_MCDSSG_SUSP_MASK            0x00000040
#define CBS_MCDSSG_SUSP_SHIFT           6
#define CBS_MCDSSG_SUS_MASK             0x00000080
#define CBS_MCDSSG_SUS_SHIFT            7
#define CBS_MCDSSG_BTSP_MASK            0x00000100
#define CBS_MCDSSG_BTSP_SHIFT           8
#define CBS_MCDSSG_BTSEN_MASK           0x00000200
#define CBS_MCDSSG_BTSEN_SHIFT          9
#define CBS_MCDSSG_BTSM_MASK            0x00000400
#define CBS_MCDSSG_BTSM_SHIFT           10
#define CBS_MCDSSG_SSSTC_MASK           0x00010000
#define CBS_MCDSSG_SSSTC_SHIFT          16
#define CBS_MCDSSG_SSSBRK_MASK          0x00400000
#define CBS_MCDSSG_SSSBRK_SHIFT         22
#define CBS_MCDSSG_SOS_MASK             0x01000000
#define CBS_MCDSSG_SOS_SHIFT            24
#define CBS_MCDSSG_SDS_MASK             0x02000000
#define CBS_MCDSSG_SDS_SHIFT            25



/****************** Masks for CBS_MCDSSGC_t **********************/
/*
   CBS_MCDSSGC           "Cerberus Suspend Signal Generation Configuration Register"
*/
/**********************************************************/

#define CBS_MCDSSGC_MASK                0x0000001f
#define CBS_MCDSSGC_STCP_MASK           0x00000001
#define CBS_MCDSSGC_STCP_SHIFT          0
#define CBS_MCDSSGC_STCM_MASK           0x00000002
#define CBS_MCDSSGC_STCM_SHIFT          1
#define CBS_MCDSSGC_STCTC_MASK          0x00000004
#define CBS_MCDSSGC_STCTC_SHIFT         2
#define CBS_MCDSSGC_STCPCP_MASK         0x00000008
#define CBS_MCDSSGC_STCPCP_SHIFT        3
#define CBS_MCDSSGC_STCPMU_MASK         0x00000010
#define CBS_MCDSSGC_STCPMU_SHIFT        4



/****************** Masks for CBS_OCNTRL_t **********************/
/*
   CBS_OCNTRL            "Cerberus OSCU Configuration and Control Register"
*/
/**********************************************************/

#define CBS_OCNTRL_MASK                 0x00033fff
#define CBS_OCNTRL_TRCENP_MASK          0x00000001
#define CBS_OCNTRL_TRCENP_SHIFT         0
#define CBS_OCNTRL_TRCEN_MASK           0x00000002
#define CBS_OCNTRL_TRCEN_SHIFT          1
#define CBS_OCNTRL_TRCMUXP_MASK         0x00000004
#define CBS_OCNTRL_TRCMUXP_SHIFT        2
#define CBS_OCNTRL_TRCMUX_MASK          0x00000008
#define CBS_OCNTRL_TRCMUX_SHIFT         3
#define CBS_OCNTRL_TRCDENP_MASK         0x00000010
#define CBS_OCNTRL_TRCDENP_SHIFT        4
#define CBS_OCNTRL_TRCDEN_MASK          0x00000020
#define CBS_OCNTRL_TRCDEN_SHIFT         5
#define CBS_OCNTRL_TRCDSP_MASK          0x00000040
#define CBS_OCNTRL_TRCDSP_SHIFT         6
#define CBS_OCNTRL_TRCDS_MASK           0x00000080
#define CBS_OCNTRL_TRCDS_SHIFT          7
#define CBS_OCNTRL_TRCEECP_MASK         0x00000100
#define CBS_OCNTRL_TRCEECP_SHIFT        8
#define CBS_OCNTRL_TRCEEC_MASK          0x00000200
#define CBS_OCNTRL_TRCEEC_SHIFT         9
#define CBS_OCNTRL_EECENP_MASK          0x00000400
#define CBS_OCNTRL_EECENP_SHIFT         10
#define CBS_OCNTRL_EECEN_MASK           0x00000800
#define CBS_OCNTRL_EECEN_SHIFT          11
#define CBS_OCNTRL_WDTSUSP_MASK         0x00001000
#define CBS_OCNTRL_WDTSUSP_SHIFT        12
#define CBS_OCNTRL_WDTSUS_MASK          0x00002000
#define CBS_OCNTRL_WDTSUS_SHIFT         13
#define CBS_OCNTRL_HARRP_MASK           0x00010000
#define CBS_OCNTRL_HARRP_SHIFT          16
#define CBS_OCNTRL_HARR_MASK            0x00020000
#define CBS_OCNTRL_HARR_SHIFT           17



/****************** Masks for CBS_OEC_t **********************/
/*
   CBS_OEC               "Cerberus OCDS Enable Control Register"
*/
/**********************************************************/

#define CBS_OEC_MASK                    0x000f00ff
#define CBS_OEC_PAT_MASK                0x000000ff
#define CBS_OEC_PAT_SHIFT               0
#define CBS_OEC_IFLCKP_MASK             0x00010000
#define CBS_OEC_IFLCKP_SHIFT            16
#define CBS_OEC_IFLCK_MASK              0x00020000
#define CBS_OEC_IFLCK_SHIFT             17
#define CBS_OEC_AUTOKP_MASK             0x00040000
#define CBS_OEC_AUTOKP_SHIFT            18
#define CBS_OEC_AUTOK_MASK              0x00080000
#define CBS_OEC_AUTOK_SHIFT             19



/****************** Masks for CBS_OSTATE_t **********************/
/*
   CBS_OSTATE            "Cerberus OSCU Status Register"
*/
/**********************************************************/

#define CBS_OSTATE_MASK                 0x000301ff
#define CBS_OSTATE_OEN_MASK             0x00000001
#define CBS_OSTATE_OEN_SHIFT            0
#define CBS_OSTATE_TRCEN_MASK           0x00000002
#define CBS_OSTATE_TRCEN_SHIFT          1
#define CBS_OSTATE_TRCMUX_MASK          0x00000004
#define CBS_OSTATE_TRCMUX_SHIFT         2
#define CBS_OSTATE_TRCDEN_MASK          0x00000008
#define CBS_OSTATE_TRCDEN_SHIFT         3
#define CBS_OSTATE_TRCDS_MASK           0x00000010
#define CBS_OSTATE_TRCDS_SHIFT          4
#define CBS_OSTATE_TRCEEC_MASK          0x00000020
#define CBS_OSTATE_TRCEEC_SHIFT         5
#define CBS_OSTATE_EECDIS_MASK          0x00000040
#define CBS_OSTATE_EECDIS_SHIFT         6
#define CBS_OSTATE_WDTSUS_MASK          0x00000080
#define CBS_OSTATE_WDTSUS_SHIFT         7
#define CBS_OSTATE_HARR_MASK            0x00000100
#define CBS_OSTATE_HARR_SHIFT           8
#define CBS_OSTATE_IFLCK_MASK           0x00010000
#define CBS_OSTATE_IFLCK_SHIFT          16
#define CBS_OSTATE_AUTOK_MASK           0x00020000
#define CBS_OSTATE_AUTOK_SHIFT          17



/****************** Masks for CBS_SRC_t **********************/
/*
   CBS_SRC               "Cerberus Service Request Control Register"
*/
/**********************************************************/

#define CBS_SRC_MASK                    0x0000f4ff
#define CBS_SRC_SRPN_MASK               0x000000ff
#define CBS_SRC_SRPN_SHIFT              0
#define CBS_SRC_TOS_MASK                0x00000400
#define CBS_SRC_TOS_SHIFT               10
#define CBS_SRC_SRE_MASK                0x00001000
#define CBS_SRC_SRE_SHIFT               12
#define CBS_SRC_SRR_MASK                0x00002000
#define CBS_SRC_SRR_SHIFT               13
#define CBS_SRC_CLRR_MASK               0x00004000
#define CBS_SRC_CLRR_SHIFT              14
#define CBS_SRC_SETR_MASK               0x00008000
#define CBS_SRC_SETR_SHIFT              15




#endif /* _HAVE_TRICORE_CERBERUS_MASKS_H_ */

