/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_EBU_SHAREMASKS_H_
#define _HAVE_TRICORE_EBU_SHAREMASKS_H_


/****************** Masks for EBU_ADDRSELm_t **********************/
/*
   EBU_ADDRSEL0          "EBU_LMB Address Select Register 0"
   EBU_ADDRSEL1          "EBU_LMB Address Select Register 1"
   EBU_ADDRSEL2          "EBU_LMB Address Select Register 2"
   EBU_ADDRSEL3          "EBU_LMB Address Select Register 3"
*/
/**********************************************************/

#define EBU_ADDRSELm_MASK               0xfffffff3
#define EBU_ADDRSELm_REGENAB_MASK       0x00000001
#define EBU_ADDRSELm_REGENAB_SHIFT      0
#define EBU_ADDRSELm_ALTENAB_MASK       0x00000002
#define EBU_ADDRSELm_ALTENAB_SHIFT      1
#define EBU_ADDRSELm_MASK_MASK          0x000000f0
#define EBU_ADDRSELm_MASK_SHIFT         4
#define EBU_ADDRSELm_ALTSEG_MASK        0x00000f00
#define EBU_ADDRSELm_ALTSEG_SHIFT       8
#define EBU_ADDRSELm_BASE_MASK          0xfffff000
#define EBU_ADDRSELm_BASE_SHIFT         12



/****************** Masks for EBU_BUSAPm_t **********************/
/*
   EBU_BUSAP0            "EBU_LMB Bus Access Par. Reg.0"
   EBU_BUSAP1            "EBU_LMB Bus Access Par. Reg.1"
   EBU_BUSAP2            "EBU_LMB Bus Access Par. Reg.2"
   EBU_BUSAP3            "EBU_LMB Bus Access Par. Reg.3"
*/
/**********************************************************/

#define EBU_BUSAPm_MASK                 0xffffffff
#define EBU_BUSAPm_DTACS_MASK           0x0000000f
#define EBU_BUSAPm_DTACS_SHIFT          0
#define EBU_BUSAPm_DTARDWR_MASK         0x000000f0
#define EBU_BUSAPm_DTARDWR_SHIFT        4
#define EBU_BUSAPm_WRRECOVC_MASK        0x00000700
#define EBU_BUSAPm_WRRECOVC_SHIFT       8
#define EBU_BUSAPm_RDRECOVC_MASK        0x00003800
#define EBU_BUSAPm_RDRECOVC_SHIFT       11
#define EBU_BUSAPm_DATAC_MASK           0x0000c000
#define EBU_BUSAPm_DATAC_SHIFT          14
#define EBU_BUSAPm_BURSTC_MASK          0x00070000
#define EBU_BUSAPm_BURSTC_SHIFT         16
#define EBU_BUSAPm_WAITWRC_MASK         0x00380000
#define EBU_BUSAPm_WAITWRC_SHIFT        19
#define EBU_BUSAPm_WAITRDC_MASK         0x01c00000
#define EBU_BUSAPm_WAITRDC_SHIFT        22
#define EBU_BUSAPm_CMDDELAY_MASK        0x0e000000
#define EBU_BUSAPm_CMDDELAY_SHIFT       25
#define EBU_BUSAPm_AHOLDC_MASK          0x30000000
#define EBU_BUSAPm_AHOLDC_SHIFT         28
#define EBU_BUSAPm_ADDRC_MASK           0xc0000000
#define EBU_BUSAPm_ADDRC_SHIFT          30



/****************** Masks for EBU_BUSCONm_t **********************/
/*
   EBU_BUSCON0           "EBU Bus Configuration Register 0"
   EBU_BUSCON1           "EBU Bus Configuration Register 1"
   EBU_BUSCON2           "EBU Bus Configuration Register 2"
   EBU_BUSCON3           "EBU Bus Configuration Register 3"
*/
/**********************************************************/

#define EBU_BUSCONm_MASK                0xf3feef7f
#define EBU_BUSCONm_MULTMAP_MASK        0x0000007f
#define EBU_BUSCONm_MULTMAP_SHIFT       0
#define EBU_BUSCONm_WEAKPREFETCH_MASK   0x00000100
#define EBU_BUSCONm_WEAKPREFETCH_SHIFT  8
#define EBU_BUSCONm_AALIGN_MASK         0x00000200
#define EBU_BUSCONm_AALIGN_SHIFT        9
#define EBU_BUSCONm_CTYPE_MASK          0x00000c00
#define EBU_BUSCONm_CTYPE_SHIFT         10
#define EBU_BUSCONm_CMULT_MASK          0x0000e000
#define EBU_BUSCONm_CMULT_SHIFT         13
#define EBU_BUSCONm_DLOAD_MASK          0x00020000
#define EBU_BUSCONm_DLOAD_SHIFT         17
#define EBU_BUSCONm_PREFETCH_MASK       0x00040000
#define EBU_BUSCONm_PREFETCH_SHIFT      18
#define EBU_BUSCONm_WAITINV_MASK        0x00080000
#define EBU_BUSCONm_WAITINV_SHIFT       19
#define EBU_BUSCONm_BCGEN_MASK          0x00300000
#define EBU_BUSCONm_BCGEN_SHIFT         20
#define EBU_BUSCONm_PORTW_MASK          0x00c00000
#define EBU_BUSCONm_PORTW_SHIFT         22
#define EBU_BUSCONm_WAIT_MASK           0x03000000
#define EBU_BUSCONm_WAIT_SHIFT          24
#define EBU_BUSCONm_AGEN_MASK           0x70000000
#define EBU_BUSCONm_AGEN_SHIFT          28
#define EBU_BUSCONm_WRITE_MASK          0x80000000
#define EBU_BUSCONm_WRITE_SHIFT         31



/****************** Masks for EBU_SDRMCONm_t **********************/
/*
   EBU_SDRMCON0          "EBU_LMB SDRAM Control Register 0"
   EBU_SDRMCON1          "EBU_LMB SDRAM Control Register 1"
*/
/**********************************************************/

#define EBU_SDRMCONm_MASK               0xf1ffffff
#define EBU_SDRMCONm_CRAS_MASK          0x0000000f
#define EBU_SDRMCONm_CRAS_SHIFT         0
#define EBU_SDRMCONm_CRFSH_MASK         0x000000f0
#define EBU_SDRMCONm_CRFSH_SHIFT        4
#define EBU_SDRMCONm_CRSC_MASK          0x00000300
#define EBU_SDRMCONm_CRSC_SHIFT         8
#define EBU_SDRMCONm_CRP_MASK           0x00000c00
#define EBU_SDRMCONm_CRP_SHIFT          10
#define EBU_SDRMCONm_AWIDTH_MASK        0x00003000
#define EBU_SDRMCONm_AWIDTH_SHIFT       12
#define EBU_SDRMCONm_CRCD_MASK          0x0000c000
#define EBU_SDRMCONm_CRCD_SHIFT         14
#define EBU_SDRMCONm_CRC_MASK           0x00070000
#define EBU_SDRMCONm_CRC_SHIFT          16
#define EBU_SDRMCONm_PAGEM_MASK         0x00380000
#define EBU_SDRMCONm_PAGEM_SHIFT        19
#define EBU_SDRMCONm_BANKM_MASK         0x01c00000
#define EBU_SDRMCONm_BANKM_SHIFT        22
#define EBU_SDRMCONm_DTALTNCY_MASK      0xf0000000
#define EBU_SDRMCONm_DTALTNCY_SHIFT     28



/****************** Masks for EBU_SDRMODm_t **********************/
/*
   EBU_SDRMOD0           "EBU_LMB SDRAM Mode Register 0"
   EBU_SDRMOD1           "EBU_LMB SDRAM Mode Register 1"
*/
/**********************************************************/

#define EBU_SDRMODm_MASK                0x00003fff
#define EBU_SDRMODm_BURSTL_MASK         0x00000007
#define EBU_SDRMODm_BURSTL_SHIFT        0
#define EBU_SDRMODm_BTYP_MASK           0x00000008
#define EBU_SDRMODm_BTYP_SHIFT          3
#define EBU_SDRMODm_CASLAT_MASK         0x00000070
#define EBU_SDRMODm_CASLAT_SHIFT        4
#define EBU_SDRMODm_OPMODE_MASK         0x00003f80
#define EBU_SDRMODm_OPMODE_SHIFT        7



/****************** Masks for EBU_SDRMREFm_t **********************/
/*
   EBU_SDRMREF0          "EBU_LMB SDRAM Refresh Register 0"
   EBU_SDRMREF1          "EBU_LMB SDRAM Refresh Register 0"
*/
/**********************************************************/

#define EBU_SDRMREFm_MASK               0x00003fff
#define EBU_SDRMREFm_REFRESHC_MASK      0x0000003f
#define EBU_SDRMREFm_REFRESHC_SHIFT     0
#define EBU_SDRMREFm_REFRESHR_MASK      0x000001c0
#define EBU_SDRMREFm_REFRESHR_SHIFT     6
#define EBU_SDRMREFm_SELFREXST_MASK     0x00000200
#define EBU_SDRMREFm_SELFREXST_SHIFT    9
#define EBU_SDRMREFm_SELFREX_MASK       0x00000400
#define EBU_SDRMREFm_SELFREX_SHIFT      10
#define EBU_SDRMREFm_SELFRENST_MASK     0x00000800
#define EBU_SDRMREFm_SELFRENST_SHIFT    11
#define EBU_SDRMREFm_SELFREN_MASK       0x00001000
#define EBU_SDRMREFm_SELFREN_SHIFT      12
#define EBU_SDRMREFm_AUTOSELFR_MASK     0x00002000
#define EBU_SDRMREFm_AUTOSELFR_SHIFT    13



/****************** Masks for EBU_SDRSTATm_t **********************/
/*
   EBU_SDRSTAT0          "EBU_LMB SDRAM Status Register 0"
   EBU_SDRSTAT1          "EBU_LMB SDRAM Status Register 1"
*/
/**********************************************************/

#define EBU_SDRSTATm_MASK               0x00000003
#define EBU_SDRSTATm_REFERR_MASK        0x00000001
#define EBU_SDRSTATm_REFERR_SHIFT       0
#define EBU_SDRSTATm_SDRMBUSY_MASK      0x00000002
#define EBU_SDRSTATm_SDRMBUSY_SHIFT     1




#endif /* _HAVE_TRICORE_EBU_SHAREMASKS_H_ */

