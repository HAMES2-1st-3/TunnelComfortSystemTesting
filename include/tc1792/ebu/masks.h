/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_EBU_MASKS_H_
#define _HAVE_TRICORE_EBU_MASKS_H_


/****************** Masks for EBU_BFCON_t **********************/
/*
   EBU_BFCON             "EBU Burst Flash Control Register"
*/
/**********************************************************/

#define EBU_BFCON_MASK                  0x063fffff
#define EBU_BFCON_FETBLEN0_MASK         0x0000000f
#define EBU_BFCON_FETBLEN0_SHIFT        0
#define EBU_BFCON_FBBMSEL0_MASK         0x00000010
#define EBU_BFCON_FBBMSEL0_SHIFT        4
#define EBU_BFCON_WAITFUNC0_MASK        0x00000020
#define EBU_BFCON_WAITFUNC0_SHIFT       5
#define EBU_BFCON_EXTCLOCK_MASK         0x000000c0
#define EBU_BFCON_EXTCLOCK_SHIFT        6
#define EBU_BFCON_BFCMSEL_MASK          0x00000100
#define EBU_BFCON_BFCMSEL_SHIFT         8
#define EBU_BFCON_EBSE0_MASK            0x00000200
#define EBU_BFCON_EBSE0_SHIFT           9
#define EBU_BFCON_DBA0_MASK             0x00000400
#define EBU_BFCON_DBA0_SHIFT            10
#define EBU_BFCON_FDBKEN_MASK           0x00000800
#define EBU_BFCON_FDBKEN_SHIFT          11
#define EBU_BFCON_DTALTNCY_MASK         0x0000f000
#define EBU_BFCON_DTALTNCY_SHIFT        12
#define EBU_BFCON_FETBLEN1_MASK         0x000f0000
#define EBU_BFCON_FETBLEN1_SHIFT        16
#define EBU_BFCON_FBBMSEL1_MASK         0x00100000
#define EBU_BFCON_FBBMSEL1_SHIFT        20
#define EBU_BFCON_WAITFUNC1_MASK        0x00200000
#define EBU_BFCON_WAITFUNC1_SHIFT       21
#define EBU_BFCON_EBSE1_MASK            0x02000000
#define EBU_BFCON_EBSE1_SHIFT           25
#define EBU_BFCON_DBA1_MASK             0x04000000
#define EBU_BFCON_DBA1_SHIFT            26



/****************** Masks for EBU_CLC_t **********************/
/*
   EBU_CLC               "EBU Clock Control Register"
*/
/**********************************************************/

#define EBU_CLC_MASK                    0x00000003
#define EBU_CLC_DISR_MASK               0x00000001
#define EBU_CLC_DISR_SHIFT              0
#define EBU_CLC_DISS_MASK               0x00000002
#define EBU_CLC_DISS_SHIFT              1



/****************** Masks for EBU_CON_t **********************/
/*
   EBU_CON               "EBU Configuration Register"
*/
/**********************************************************/

#define EBU_CON_MASK                    0x380ffff0
#define EBU_CON_EXTLOCK_MASK            0x00000010
#define EBU_CON_EXTLOCK_SHIFT           4
#define EBU_CON_ARBSYNC_MASK            0x00000020
#define EBU_CON_ARBSYNC_SHIFT           5
#define EBU_CON_ARBMODE_MASK            0x000000c0
#define EBU_CON_ARBMODE_SHIFT           6
#define EBU_CON_TIMEOUTC_MASK           0x0000ff00
#define EBU_CON_TIMEOUTC_SHIFT          8
#define EBU_CON_GLOBALCS_MASK           0x000f0000
#define EBU_CON_GLOBALCS_SHIFT          16
#define EBU_CON_CS0FAM_MASK             0x08000000
#define EBU_CON_CS0FAM_SHIFT            27
#define EBU_CON_EMUFAM_MASK             0x10000000
#define EBU_CON_EMUFAM_SHIFT            28
#define EBU_CON_BFSSS_MASK              0x20000000
#define EBU_CON_BFSSS_SHIFT             29



/****************** Masks for EBU_EMUAS_t **********************/
/*
   EBU_EMUAS             "EBU Emulator Address Select Register"
*/
/**********************************************************/

#define EBU_EMUAS_MASK                  0xfffffff3
#define EBU_EMUAS_REGENAB_MASK          0x00000001
#define EBU_EMUAS_REGENAB_SHIFT         0
#define EBU_EMUAS_ALTENAB_MASK          0x00000002
#define EBU_EMUAS_ALTENAB_SHIFT         1
#define EBU_EMUAS_MASK_MASK             0x000000f0
#define EBU_EMUAS_MASK_SHIFT            4
#define EBU_EMUAS_ALTSEG_MASK           0x00000f00
#define EBU_EMUAS_ALTSEG_SHIFT          8
#define EBU_EMUAS_BASE_MASK             0xfffff000
#define EBU_EMUAS_BASE_SHIFT            12



/****************** Masks for EBU_EMUBAP_t **********************/
/*
   EBU_EMUBAP            "EBU Emulator Bus Access Parameter Register"
*/
/**********************************************************/

#define EBU_EMUBAP_MASK                 0xcfffffff
#define EBU_EMUBAP_DTACS_MASK           0x0000000f
#define EBU_EMUBAP_DTACS_SHIFT          0
#define EBU_EMUBAP_DTARDWR_MASK         0x000000f0
#define EBU_EMUBAP_DTARDWR_SHIFT        4
#define EBU_EMUBAP_WRRECOVC_MASK        0x00000700
#define EBU_EMUBAP_WRRECOVC_SHIFT       8
#define EBU_EMUBAP_RDRECOVC_MASK        0x00003800
#define EBU_EMUBAP_RDRECOVC_SHIFT       11
#define EBU_EMUBAP_DATAC_MASK           0x0000c000
#define EBU_EMUBAP_DATAC_SHIFT          14
#define EBU_EMUBAP_BURSTC_MASK          0x00070000
#define EBU_EMUBAP_BURSTC_SHIFT         16
#define EBU_EMUBAP_WAITWRC_MASK         0x00380000
#define EBU_EMUBAP_WAITWRC_SHIFT        19
#define EBU_EMUBAP_WAITRDC_MASK         0x01c00000
#define EBU_EMUBAP_WAITRDC_SHIFT        22
#define EBU_EMUBAP_CMDDELAY_MASK        0x0e000000
#define EBU_EMUBAP_CMDDELAY_SHIFT       25
#define EBU_EMUBAP_ADDRC_MASK           0xc0000000
#define EBU_EMUBAP_ADDRC_SHIFT          30



/****************** Masks for EBU_EMUBC_t **********************/
/*
   EBU_EMUBC             "EBU Emulator Bus Configuration Register"
*/
/**********************************************************/

#define EBU_EMUBC_MASK                  0xf3ffef7f
#define EBU_EMUBC_MULTMAP_MASK          0x0000007f
#define EBU_EMUBC_MULTMAP_SHIFT         0
#define EBU_EMUBC_WEAKPREF_MASK         0x00000100
#define EBU_EMUBC_WEAKPREF_SHIFT        8
#define EBU_EMUBC_AALIGN_MASK           0x00000200
#define EBU_EMUBC_AALIGN_SHIFT          9
#define EBU_EMUBC_CTYPE_MASK            0x00000c00
#define EBU_EMUBC_CTYPE_SHIFT           10
#define EBU_EMUBC_CMULT_MASK            0x0000e000
#define EBU_EMUBC_CMULT_SHIFT           13
#define EBU_EMUBC_ENDIAN_MASK           0x00010000
#define EBU_EMUBC_ENDIAN_SHIFT          16
#define EBU_EMUBC_DLOAD_MASK            0x00020000
#define EBU_EMUBC_DLOAD_SHIFT           17
#define EBU_EMUBC_PREFETCH_MASK         0x00040000
#define EBU_EMUBC_PREFETCH_SHIFT        18
#define EBU_EMUBC_WAITINV_MASK          0x00080000
#define EBU_EMUBC_WAITINV_SHIFT         19
#define EBU_EMUBC_BCGEN_MASK            0x00300000
#define EBU_EMUBC_BCGEN_SHIFT           20
#define EBU_EMUBC_PORTW_MASK            0x00c00000
#define EBU_EMUBC_PORTW_SHIFT           22
#define EBU_EMUBC_WAIT_MASK             0x03000000
#define EBU_EMUBC_WAIT_SHIFT            24
#define EBU_EMUBC_AGEN_MASK             0x70000000
#define EBU_EMUBC_AGEN_SHIFT            28
#define EBU_EMUBC_WRITE_MASK            0x80000000
#define EBU_EMUBC_WRITE_SHIFT           31



/****************** Masks for EBU_EMUOVL_t **********************/
/*
   EBU_EMUOVL            "EBU Emulator Overlay Register"
*/
/**********************************************************/

#define EBU_EMUOVL_MASK                 0x0000000f
#define EBU_EMUOVL_OVERLAY_MASK         0x0000000f
#define EBU_EMUOVL_OVERLAY_SHIFT        0



/****************** Masks for EBU_ID_t **********************/
/*
   EBU_ID                "EBU Module Identification Register"
*/
/**********************************************************/

#define EBU_ID_MASK                     0x00000000



/****************** Masks for EBU_USERCON_t **********************/
/*
   EBU_USERCON           "EBU Test/Control Configuration Register"
*/
/**********************************************************/

#define EBU_USERCON_MASK                0x00000001
#define EBU_USERCON_DIP_MASK            0x00000001
#define EBU_USERCON_DIP_SHIFT           0




#endif /* _HAVE_TRICORE_EBU_MASKS_H_ */

