/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_EBU_MASKS_H_
#define _HAVE_TRICORE_EBU_MASKS_H_


/****************** Masks for EBU_CLC_t **********************/
/*
   EBU_CLC               "EBU Clock Control Register"
*/
/**********************************************************/

#define EBU_CLC_MASK                    0x00ff0103
#define EBU_CLC_DISR_MASK               0x00000001
#define EBU_CLC_DISR_SHIFT              0
#define EBU_CLC_DISS_MASK               0x00000002
#define EBU_CLC_DISS_SHIFT              1
#define EBU_CLC_EPE_MASK                0x00000100
#define EBU_CLC_EPE_SHIFT               8
#define EBU_CLC_SYNC_MASK               0x00010000
#define EBU_CLC_SYNC_SHIFT              16
#define EBU_CLC_DIV2_MASK               0x00020000
#define EBU_CLC_DIV2_SHIFT              17
#define EBU_CLC_EBUDIV_MASK             0x000c0000
#define EBU_CLC_EBUDIV_SHIFT            18
#define EBU_CLC_SYNCACK_MASK            0x00100000
#define EBU_CLC_SYNCACK_SHIFT           20
#define EBU_CLC_DIV2ACK_MASK            0x00200000
#define EBU_CLC_DIV2ACK_SHIFT           21
#define EBU_CLC_EBUDIVACK_MASK          0x00c00000
#define EBU_CLC_EBUDIVACK_SHIFT         22



/****************** Masks for EBU_DDRNCON_t **********************/
/*
   EBU_DDRNCON           "EBU LPDDR NVM Configuration Register"
*/
/**********************************************************/

#define EBU_DDRNCON_MASK                0xffffffff
#define EBU_DDRNCON_CRCD_MASK           0x000000ff
#define EBU_DDRNCON_CRCD_SHIFT          0
#define EBU_DDRNCON_CRSC_MASK           0x00000f00
#define EBU_DDRNCON_CRSC_SHIFT          8
#define EBU_DDRNCON_PAGESIZE_MASK       0x0000f000
#define EBU_DDRNCON_PAGESIZE_SHIFT      12
#define EBU_DDRNCON_CRP_MASK            0x000f0000
#define EBU_DDRNCON_CRP_SHIFT           16
#define EBU_DDRNCON_CSRR_MASK           0x00f00000
#define EBU_DDRNCON_CSRR_SHIFT          20
#define EBU_DDRNCON_CSRS_MASK           0x0f000000
#define EBU_DDRNCON_CSRS_SHIFT          24
#define EBU_DDRNCON_MAXADD_MASK         0x70000000
#define EBU_DDRNCON_MAXADD_SHIFT        28
#define EBU_DDRNCON_MODE_MASK           0x80000000
#define EBU_DDRNCON_MODE_SHIFT          31



/****************** Masks for EBU_DDRNMOD_t **********************/
/*
   EBU_DDRNMOD           "EBU DDR NVM Mode Register"
*/
/**********************************************************/

#define EBU_DDRNMOD_MASK                0xffff3fff
#define EBU_DDRNMOD_BURSTL_MASK         0x00000007
#define EBU_DDRNMOD_BURSTL_SHIFT        0
#define EBU_DDRNMOD_BTYP_MASK           0x00000008
#define EBU_DDRNMOD_BTYP_SHIFT          3
#define EBU_DDRNMOD_CASLAT_MASK         0x00000070
#define EBU_DDRNMOD_CASLAT_SHIFT        4
#define EBU_DDRNMOD_OPMODE_MASK         0x00003f80
#define EBU_DDRNMOD_OPMODE_SHIFT        7
#define EBU_DDRNMOD_XOPM_MASK           0x3fff0000
#define EBU_DDRNMOD_XOPM_SHIFT          16
#define EBU_DDRNMOD_XBA_MASK            0xc0000000
#define EBU_DDRNMOD_XBA_SHIFT           30



/****************** Masks for EBU_DDRNMOD2_t **********************/
/*
   EBU_DDRNMOD2          "EBU DDR NVM Extended Mode Register"
*/
/**********************************************************/

#define EBU_DDRNMOD2_MASK               0xffff0000
#define EBU_DDRNMOD2_XOPM_MASK          0x0fff0000
#define EBU_DDRNMOD2_XOPM_SHIFT         16
#define EBU_DDRNMOD2_DEV_SEL_MASK       0x10000000
#define EBU_DDRNMOD2_DEV_SEL_SHIFT      28
#define EBU_DDRNMOD2_XBA_MASK           0x60000000
#define EBU_DDRNMOD2_XBA_SHIFT          29
#define EBU_DDRNMOD2_ACT_MASK           0x80000000
#define EBU_DDRNMOD2_ACT_SHIFT          31



/****************** Masks for EBU_DDRNPRLD_t **********************/
/*
   EBU_DDRNPRLD          "EBU DDR NVM Page Preload Register"
*/
/**********************************************************/

#define EBU_DDRNPRLD_MASK               0xffffffff
#define EBU_DDRNPRLD_PAGE_MASK          0x1fffffff
#define EBU_DDRNPRLD_PAGE_SHIFT         0
#define EBU_DDRNPRLD_BA_MASK            0x60000000
#define EBU_DDRNPRLD_BA_SHIFT           29
#define EBU_DDRNPRLD_ACTIVE_MASK        0x80000000
#define EBU_DDRNPRLD_ACTIVE_SHIFT       31



/****************** Masks for EBU_DDRNSRR_t **********************/
/*
   EBU_DDRNSRR           "EBU DDR NVM Status Register"
*/
/**********************************************************/

#define EBU_DDRNSRR_MASK                0xffffffff
#define EBU_DDRNSRR_SRRDATA0_MASK       0x0000ffff
#define EBU_DDRNSRR_SRRDATA0_SHIFT      0
#define EBU_DDRNSRR_SRRDATA1_MASK       0xffff0000
#define EBU_DDRNSRR_SRRDATA1_SHIFT      16



/****************** Masks for EBU_DLLCON_t **********************/
/*
   EBU_DLLCON            "EBU DLL Control Register"
*/
/**********************************************************/

#define EBU_DLLCON_MASK                 0xf877f9ff
#define EBU_DLLCON_DLL_VALUE_MASK       0x000001ff
#define EBU_DLLCON_DLL_VALUE_SHIFT      0
#define EBU_DLLCON_DCC_EN_MASK          0x00000800
#define EBU_DLLCON_DCC_EN_SHIFT         11
#define EBU_DLLCON_DLL_LCK_MASK         0x00001000
#define EBU_DLLCON_DLL_LCK_SHIFT        12
#define EBU_DLLCON_DLL_DIS_MASK         0x00002000
#define EBU_DLLCON_DLL_DIS_SHIFT        13
#define EBU_DLLCON_DLL_RST_MASK         0x00004000
#define EBU_DLLCON_DLL_RST_SHIFT        14
#define EBU_DLLCON_ALGO_MASK            0x00008000
#define EBU_DLLCON_ALGO_SHIFT           15
#define EBU_DLLCON_WR_D_ADJ_MASK        0x00070000
#define EBU_DLLCON_WR_D_ADJ_SHIFT       16
#define EBU_DLLCON_RD_DQS_ADJ_MASK      0x00700000
#define EBU_DLLCON_RD_DQS_ADJ_SHIFT     20
#define EBU_DLLCON_WIN_EN_MASK          0x08000000
#define EBU_DLLCON_WIN_EN_SHIFT         27
#define EBU_DLLCON_RD_EN_MASK           0x10000000
#define EBU_DLLCON_RD_EN_SHIFT          28
#define EBU_DLLCON_WR_EN_MASK           0x20000000
#define EBU_DLLCON_WR_EN_SHIFT          29
#define EBU_DLLCON_AMODE_MASK           0xc0000000
#define EBU_DLLCON_AMODE_SHIFT          30



/****************** Masks for EBU_EXTBOOT_t **********************/
/*
   EBU_EXTBOOT           "EBU External Boot Configuration Register"
*/
/**********************************************************/

#define EBU_EXTBOOT_MASK                0x80000003
#define EBU_EXTBOOT_CFGEND_MASK         0x00000001
#define EBU_EXTBOOT_CFGEND_SHIFT        0
#define EBU_EXTBOOT_CFGERR_MASK         0x00000002
#define EBU_EXTBOOT_CFGERR_SHIFT        1
#define EBU_EXTBOOT_EBUCFG_MASK         0x80000000
#define EBU_EXTBOOT_EBUCFG_SHIFT        31



/****************** Masks for EBU_ID_t **********************/
/*
   EBU_ID                "EBU Module Identification Register"
*/
/**********************************************************/

#define EBU_ID_MASK                     0xffffffff
#define EBU_ID_ID_VALUE_MASK            0xffffffff
#define EBU_ID_ID_VALUE_SHIFT           0



/****************** Masks for EBU_MODCON_t **********************/
/*
   EBU_MODCON            "EBU Configuration Register"
*/
/**********************************************************/

#define EBU_MODCON_MASK                 0xf7ffffff
#define EBU_MODCON_STS_MASK             0x00000001
#define EBU_MODCON_STS_SHIFT            0
#define EBU_MODCON_LCKABRT_MASK         0x00000002
#define EBU_MODCON_LCKABRT_SHIFT        1
#define EBU_MODCON_SDTRI_MASK           0x00000004
#define EBU_MODCON_SDTRI_SHIFT          2
#define EBU_MODCON_CLK_COMB_MASK        0x00000008
#define EBU_MODCON_CLK_COMB_SHIFT       3
#define EBU_MODCON_EXTLOCK_MASK         0x00000010
#define EBU_MODCON_EXTLOCK_SHIFT        4
#define EBU_MODCON_ARBSYNC_MASK         0x00000020
#define EBU_MODCON_ARBSYNC_SHIFT        5
#define EBU_MODCON_ARBMODE_MASK         0x000000c0
#define EBU_MODCON_ARBMODE_SHIFT        6
#define EBU_MODCON_TIMEOUTC_MASK        0x0000ff00
#define EBU_MODCON_TIMEOUTC_SHIFT       8
#define EBU_MODCON_LOCKTIMEOUT_MASK     0x00ff0000
#define EBU_MODCON_LOCKTIMEOUT_SHIFT    16
#define EBU_MODCON_FIFO_BYPASS_MASK     0x01000000
#define EBU_MODCON_FIFO_BYPASS_SHIFT    24
#define EBU_MODCON_FAST_SRI_MASK        0x02000000
#define EBU_MODCON_FAST_SRI_SHIFT       25
#define EBU_MODCON_OCDS_SUSP_DIS_MASK   0x04000000
#define EBU_MODCON_OCDS_SUSP_DIS_SHIFT  26
#define EBU_MODCON_ACCSINH_MASK         0x10000000
#define EBU_MODCON_ACCSINH_SHIFT        28
#define EBU_MODCON_ACCSINHACK_MASK      0x20000000
#define EBU_MODCON_ACCSINHACK_SHIFT     29
#define EBU_MODCON_BUSSTATE_MASK        0x40000000
#define EBU_MODCON_BUSSTATE_SHIFT       30
#define EBU_MODCON_ALE_MASK             0x80000000
#define EBU_MODCON_ALE_SHIFT            31



/****************** Masks for EBU_SDRMCON_t **********************/
/*
   EBU_SDRMCON           "EBU SDRAM Control Register"
*/
/**********************************************************/

#define EBU_SDRMCON_MASK                0xf1ffffff
#define EBU_SDRMCON_CRAS_MASK           0x0000000f
#define EBU_SDRMCON_CRAS_SHIFT          0
#define EBU_SDRMCON_CRFSH_MASK          0x000000f0
#define EBU_SDRMCON_CRFSH_SHIFT         4
#define EBU_SDRMCON_CRSC_MASK           0x00000300
#define EBU_SDRMCON_CRSC_SHIFT          8
#define EBU_SDRMCON_CRP_MASK            0x00000c00
#define EBU_SDRMCON_CRP_SHIFT           10
#define EBU_SDRMCON_AWIDTH_MASK         0x00003000
#define EBU_SDRMCON_AWIDTH_SHIFT        12
#define EBU_SDRMCON_CRCD_MASK           0x0000c000
#define EBU_SDRMCON_CRCD_SHIFT          14
#define EBU_SDRMCON_CRC_MASK            0x003f0000
#define EBU_SDRMCON_CRC_SHIFT           16
#define EBU_SDRMCON_BANKM_MASK          0x01c00000
#define EBU_SDRMCON_BANKM_SHIFT         22
#define EBU_SDRMCON_CLKDIS_MASK         0x10000000
#define EBU_SDRMCON_CLKDIS_SHIFT        28
#define EBU_SDRMCON_PWR_MODE_MASK       0x60000000
#define EBU_SDRMCON_PWR_MODE_SHIFT      29
#define EBU_SDRMCON_SDCMSEL_MASK        0x80000000
#define EBU_SDRMCON_SDCMSEL_SHIFT       31



/****************** Masks for EBU_SDRMOD_t **********************/
/*
   EBU_SDRMOD            "EBU SDRAM Mode Register"
*/
/**********************************************************/

#define EBU_SDRMOD_MASK                 0xffffbfff
#define EBU_SDRMOD_BURSTL_MASK          0x00000007
#define EBU_SDRMOD_BURSTL_SHIFT         0
#define EBU_SDRMOD_BTYP_MASK            0x00000008
#define EBU_SDRMOD_BTYP_SHIFT           3
#define EBU_SDRMOD_CASLAT_MASK          0x00000070
#define EBU_SDRMOD_CASLAT_SHIFT         4
#define EBU_SDRMOD_OPMODE_MASK          0x00003f80
#define EBU_SDRMOD_OPMODE_SHIFT         7
#define EBU_SDRMOD_COLDSTART_MASK       0x00008000
#define EBU_SDRMOD_COLDSTART_SHIFT      15
#define EBU_SDRMOD_XOPM_MASK            0x3fff0000
#define EBU_SDRMOD_XOPM_SHIFT           16
#define EBU_SDRMOD_XBA_MASK             0xc0000000
#define EBU_SDRMOD_XBA_SHIFT            30



/****************** Masks for EBU_SDRMREF_t **********************/
/*
   EBU_SDRMREF           "EBU SDRAM Refresh Control Register"
*/
/**********************************************************/

#define EBU_SDRMREF_MASK                0x0fffffff
#define EBU_SDRMREF_REFRESHC_MASK       0x0000003f
#define EBU_SDRMREF_REFRESHC_SHIFT      0
#define EBU_SDRMREF_REFRESHR_MASK       0x000001c0
#define EBU_SDRMREF_REFRESHR_SHIFT      6
#define EBU_SDRMREF_SELFREXST_MASK      0x00000200
#define EBU_SDRMREF_SELFREXST_SHIFT     9
#define EBU_SDRMREF_SELFREX_MASK        0x00000400
#define EBU_SDRMREF_SELFREX_SHIFT       10
#define EBU_SDRMREF_SELFRENST_MASK      0x00000800
#define EBU_SDRMREF_SELFRENST_SHIFT     11
#define EBU_SDRMREF_SELFREN_MASK        0x00001000
#define EBU_SDRMREF_SELFREN_SHIFT       12
#define EBU_SDRMREF_AUTOSELFR_MASK      0x00002000
#define EBU_SDRMREF_AUTOSELFR_SHIFT     13
#define EBU_SDRMREF_ERFSHC_MASK         0x0000c000
#define EBU_SDRMREF_ERFSHC_SHIFT        14
#define EBU_SDRMREF_SELFREX_DLY_MASK    0x00ff0000
#define EBU_SDRMREF_SELFREX_DLY_SHIFT   16
#define EBU_SDRMREF_ARFSH_MASK          0x01000000
#define EBU_SDRMREF_ARFSH_SHIFT         24
#define EBU_SDRMREF_RES_DLY_MASK        0x0e000000
#define EBU_SDRMREF_RES_DLY_SHIFT       25



/****************** Masks for EBU_SDRSTAT_t **********************/
/*
   EBU_SDRSTAT           "EBU SDRAM Status Register"
*/
/**********************************************************/

#define EBU_SDRSTAT_MASK                0x0000000f
#define EBU_SDRSTAT_REFERR_MASK         0x00000001
#define EBU_SDRSTAT_REFERR_SHIFT        0
#define EBU_SDRSTAT_SDRMBUSY_MASK       0x00000002
#define EBU_SDRSTAT_SDRMBUSY_SHIFT      1
#define EBU_SDRSTAT_SDERR_MASK          0x00000004
#define EBU_SDRSTAT_SDERR_SHIFT         2
#define EBU_SDRSTAT_DRIFT_WARN_MASK     0x00000008
#define EBU_SDRSTAT_DRIFT_WARN_SHIFT    3



/****************** Masks for EBU_USERCON_t **********************/
/*
   EBU_USERCON           "EBU Test/Control Configuration Register"
*/
/**********************************************************/

#define EBU_USERCON_MASK                0xc1ff00ff
#define EBU_USERCON_DIP_MASK            0x00000001
#define EBU_USERCON_DIP_SHIFT           0
#define EBU_USERCON_NAF_MASK            0x000000fe
#define EBU_USERCON_NAF_SHIFT           1
#define EBU_USERCON_ADDIO_MASK          0x01ff0000
#define EBU_USERCON_ADDIO_SHIFT         16
#define EBU_USERCON_ADVIO_MASK          0x40000000
#define EBU_USERCON_ADVIO_SHIFT         30
#define EBU_USERCON_ADDLSW_MASK         0x80000000
#define EBU_USERCON_ADDLSW_SHIFT        31




#endif /* _HAVE_TRICORE_EBU_MASKS_H_ */

