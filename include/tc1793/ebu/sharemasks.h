/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_EBU_SHAREMASKS_H_
#define _HAVE_TRICORE_EBU_SHAREMASKS_H_


/****************** Masks for EBU_ADDRSELm_t **********************/
/*
   EBU_ADDRSEL0          "EBU Address Select Register 0"
   EBU_ADDRSEL1          "EBU Address Select Register 1-3"
   EBU_ADDRSEL2          "EBU Address Select Register 1-3"
   EBU_ADDRSEL3          "EBU Address Select Register 1-3"
*/
/**********************************************************/

#define EBU_ADDRSELm_MASK               0xffffffff
#define EBU_ADDRSELm_REGENAB_MASK       0x00000001
#define EBU_ADDRSELm_REGENAB_SHIFT      0
#define EBU_ADDRSELm_ALTENAB_MASK       0x00000002
#define EBU_ADDRSELm_ALTENAB_SHIFT      1
#define EBU_ADDRSELm_WPROT_MASK         0x00000004
#define EBU_ADDRSELm_WPROT_SHIFT        2
#define EBU_ADDRSELm_GLOBALCS_MASK      0x00000008
#define EBU_ADDRSELm_GLOBALCS_SHIFT     3
#define EBU_ADDRSELm_MASK_MASK          0x000000f0
#define EBU_ADDRSELm_MASK_SHIFT         4
#define EBU_ADDRSELm_ALTSEG_MASK        0x00000f00
#define EBU_ADDRSELm_ALTSEG_SHIFT       8
#define EBU_ADDRSELm_BASE_MASK          0xfffff000
#define EBU_ADDRSELm_BASE_SHIFT         12



/****************** Masks for EBU_BUSRAPm_t **********************/
/*
   EBU_BUSRAP0           "EBU Bus Read Access Parameter Register"
   EBU_BUSRAP1           "EBU Bus Read Access Parameter Register"
   EBU_BUSRAP2           "EBU Bus Read Access Parameter Register"
   EBU_BUSRAP3           "EBU Bus Read Access Parameter Register"
*/
/**********************************************************/

#define EBU_BUSRAPm_MASK                0xffffffff
#define EBU_BUSRAPm_RDDTACS_MASK        0x0000000f
#define EBU_BUSRAPm_RDDTACS_SHIFT       0
#define EBU_BUSRAPm_RDRECOVC_MASK       0x00000070
#define EBU_BUSRAPm_RDRECOVC_SHIFT      4
#define EBU_BUSRAPm_WAITRDC_MASK        0x00000f80
#define EBU_BUSRAPm_WAITRDC_SHIFT       7
#define EBU_BUSRAPm_DATAC_MASK          0x0000f000
#define EBU_BUSRAPm_DATAC_SHIFT         12
#define EBU_BUSRAPm_EXTCLOCK_MASK       0x00030000
#define EBU_BUSRAPm_EXTCLOCK_SHIFT      16
#define EBU_BUSRAPm_EXTDATA_MASK        0x000c0000
#define EBU_BUSRAPm_EXTDATA_SHIFT       18
#define EBU_BUSRAPm_CMDDELAY_MASK       0x00f00000
#define EBU_BUSRAPm_CMDDELAY_SHIFT      20
#define EBU_BUSRAPm_AHOLDC_MASK         0x0f000000
#define EBU_BUSRAPm_AHOLDC_SHIFT        24
#define EBU_BUSRAPm_ADDRC_MASK          0xf0000000
#define EBU_BUSRAPm_ADDRC_SHIFT         28



/****************** Masks for EBU_BUSRCONm_t **********************/
/*
   EBU_BUSRCON0          "EBU Bus Configuration Register"
   EBU_BUSRCON1          "EBU Bus Configuration Register"
   EBU_BUSRCON2          "EBU Bus Configuration Register"
   EBU_BUSRCON3          "EBU Bus Configuration Register"
*/
/**********************************************************/

#define EBU_BUSRCONm_MASK               0xffff00ef
#define EBU_BUSRCONm_FETBLEN_MASK       0x00000007
#define EBU_BUSRCONm_FETBLEN_SHIFT      0
#define EBU_BUSRCONm_FBBMSEL_MASK       0x00000008
#define EBU_BUSRCONm_FBBMSEL_SHIFT      3
#define EBU_BUSRCONm_FDBKEN_MASK        0x00000020
#define EBU_BUSRCONm_FDBKEN_SHIFT       5
#define EBU_BUSRCONm_BFCMSEL_MASK       0x00000040
#define EBU_BUSRCONm_BFCMSEL_SHIFT      6
#define EBU_BUSRCONm_NAA_MASK           0x00000080
#define EBU_BUSRCONm_NAA_SHIFT          7
#define EBU_BUSRCONm_ECSE_MASK          0x00010000
#define EBU_BUSRCONm_ECSE_SHIFT         16
#define EBU_BUSRCONm_EBSE_MASK          0x00020000
#define EBU_BUSRCONm_EBSE_SHIFT         17
#define EBU_BUSRCONm_DBA_MASK           0x00040000
#define EBU_BUSRCONm_DBA_SHIFT          18
#define EBU_BUSRCONm_WAITINV_MASK       0x00080000
#define EBU_BUSRCONm_WAITINV_SHIFT      19
#define EBU_BUSRCONm_BCGEN_MASK         0x00300000
#define EBU_BUSRCONm_BCGEN_SHIFT        20
#define EBU_BUSRCONm_PORTW_MASK         0x00c00000
#define EBU_BUSRCONm_PORTW_SHIFT        22
#define EBU_BUSRCONm_WAIT_MASK          0x03000000
#define EBU_BUSRCONm_WAIT_SHIFT         24
#define EBU_BUSRCONm_AAP_MASK           0x04000000
#define EBU_BUSRCONm_AAP_SHIFT          26
#define EBU_BUSRCONm_RES0_MASK          0x08000000
#define EBU_BUSRCONm_RES0_SHIFT         27
#define EBU_BUSRCONm_AGEN_MASK          0xf0000000
#define EBU_BUSRCONm_AGEN_SHIFT         28



/****************** Masks for EBU_BUSWAPm_t **********************/
/*
   EBU_BUSWAP0           "EBU Bus Write Access Parameter Register"
   EBU_BUSWAP1           "EBU Bus Write Access Parameter Register"
   EBU_BUSWAP2           "EBU Bus Write Access Parameter Register"
   EBU_BUSWAP3           "EBU Bus Write Access Parameter Register"
*/
/**********************************************************/

#define EBU_BUSWAPm_MASK                0xffffffff
#define EBU_BUSWAPm_WRDTACS_MASK        0x0000000f
#define EBU_BUSWAPm_WRDTACS_SHIFT       0
#define EBU_BUSWAPm_WRRECOVC_MASK       0x00000070
#define EBU_BUSWAPm_WRRECOVC_SHIFT      4
#define EBU_BUSWAPm_WAITWRC_MASK        0x00000f80
#define EBU_BUSWAPm_WAITWRC_SHIFT       7
#define EBU_BUSWAPm_DATAC_MASK          0x0000f000
#define EBU_BUSWAPm_DATAC_SHIFT         12
#define EBU_BUSWAPm_EXTCLOCK_MASK       0x00030000
#define EBU_BUSWAPm_EXTCLOCK_SHIFT      16
#define EBU_BUSWAPm_EXTDATA_MASK        0x000c0000
#define EBU_BUSWAPm_EXTDATA_SHIFT       18
#define EBU_BUSWAPm_CMDDELAY_MASK       0x00f00000
#define EBU_BUSWAPm_CMDDELAY_SHIFT      20
#define EBU_BUSWAPm_AHOLDC_MASK         0x0f000000
#define EBU_BUSWAPm_AHOLDC_SHIFT        24
#define EBU_BUSWAPm_ADDRC_MASK          0xf0000000
#define EBU_BUSWAPm_ADDRC_SHIFT         28



/****************** Masks for EBU_BUSWCONm_t **********************/
/*
   EBU_BUSWCON0          "EBU Bus Write Configuration Register"
   EBU_BUSWCON1          "EBU Bus Write Configuration Register"
   EBU_BUSWCON2          "EBU Bus Write Configuration Register"
   EBU_BUSWCON3          "EBU Bus Write Configuration Register"
*/
/**********************************************************/

#define EBU_BUSWCONm_MASK               0xffff008f
#define EBU_BUSWCONm_FETBLEN_MASK       0x00000007
#define EBU_BUSWCONm_FETBLEN_SHIFT      0
#define EBU_BUSWCONm_FBBMSEL_MASK       0x00000008
#define EBU_BUSWCONm_FBBMSEL_SHIFT      3
#define EBU_BUSWCONm_NAA_MASK           0x00000080
#define EBU_BUSWCONm_NAA_SHIFT          7
#define EBU_BUSWCONm_ECSE_MASK          0x00010000
#define EBU_BUSWCONm_ECSE_SHIFT         16
#define EBU_BUSWCONm_EBSE_MASK          0x00020000
#define EBU_BUSWCONm_EBSE_SHIFT         17
#define EBU_BUSWCONm_RES1_MASK          0x00040000
#define EBU_BUSWCONm_RES1_SHIFT         18
#define EBU_BUSWCONm_WAITINV_MASK       0x00080000
#define EBU_BUSWCONm_WAITINV_SHIFT      19
#define EBU_BUSWCONm_BCGEN_MASK         0x00300000
#define EBU_BUSWCONm_BCGEN_SHIFT        20
#define EBU_BUSWCONm_PORTW_MASK         0x00c00000
#define EBU_BUSWCONm_PORTW_SHIFT        22
#define EBU_BUSWCONm_WAIT_MASK          0x03000000
#define EBU_BUSWCONm_WAIT_SHIFT         24
#define EBU_BUSWCONm_AAP_MASK           0x04000000
#define EBU_BUSWCONm_AAP_SHIFT          26
#define EBU_BUSWCONm_LOCKCS_MASK        0x08000000
#define EBU_BUSWCONm_LOCKCS_SHIFT       27
#define EBU_BUSWCONm_AGEN_MASK          0xf0000000
#define EBU_BUSWCONm_AGEN_SHIFT         28



/****************** Masks for EBU_DDRNTAGm_t **********************/
/*
   EBU_DDRNTAG0          "EBU DDR Tag Registers"
   EBU_DDRNTAG1          "EBU DDR Tag Registers"
   EBU_DDRNTAG2          "EBU DDR Tag Registers"
   EBU_DDRNTAG3          "EBU DDR Tag Registers"
*/
/**********************************************************/

#define EBU_DDRNTAGm_MASK               0xffffffff
#define EBU_DDRNTAGm_TAG_MASK           0x7fffffff
#define EBU_DDRNTAGm_TAG_SHIFT          0
#define EBU_DDRNTAGm_ACTIVE_MASK        0x80000000
#define EBU_DDRNTAGm_ACTIVE_SHIFT       31




#endif /* _HAVE_TRICORE_EBU_SHAREMASKS_H_ */

