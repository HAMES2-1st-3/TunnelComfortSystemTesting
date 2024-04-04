/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_EBU_SHAREMASKS_H_
#define _HAVE_TRICORE_EBU_SHAREMASKS_H_


/****************** Masks for EBU_ADDRSELm_t **********************/
/*
   EBU_ADDRSEL0          "EBU Address Select Register 0"
   EBU_ADDRSEL1          "EBU Address Select Register 1"
   EBU_ADDRSEL2          "EBU Address Select Register 2"
   EBU_ADDRSEL3          "EBU Address Select Register 3"
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
   EBU_BUSAP0            "EBU Bus Access Parameter Register 0"
   EBU_BUSAP1            "EBU Bus Access Parameter Register 1"
   EBU_BUSAP2            "EBU Bus Access Parameter Register 2"
   EBU_BUSAP3            "EBU Bus Access Parameter Register 3"
*/
/**********************************************************/

#define EBU_BUSAPm_MASK                 0xcfffffff
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

#define EBU_BUSCONm_MASK                0xf3ffef7f
#define EBU_BUSCONm_MULTMAP_MASK        0x0000007f
#define EBU_BUSCONm_MULTMAP_SHIFT       0
#define EBU_BUSCONm_WEAKPREF_MASK       0x00000100
#define EBU_BUSCONm_WEAKPREF_SHIFT      8
#define EBU_BUSCONm_AALIGN_MASK         0x00000200
#define EBU_BUSCONm_AALIGN_SHIFT        9
#define EBU_BUSCONm_CTYPE_MASK          0x00000c00
#define EBU_BUSCONm_CTYPE_SHIFT         10
#define EBU_BUSCONm_CMULT_MASK          0x0000e000
#define EBU_BUSCONm_CMULT_SHIFT         13
#define EBU_BUSCONm_ENDIAN_MASK         0x00010000
#define EBU_BUSCONm_ENDIAN_SHIFT        16
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




#endif /* _HAVE_TRICORE_EBU_SHAREMASKS_H_ */

