/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DMA_SHAREMASKS_H_
#define _HAVE_TRICORE_DMA_SHAREMASKS_H_


/****************** Masks for DMA_ADRCRm_t **********************/
/*
   DMA_ADRCR00           "DMA Channel 00 Address Control Register"
   DMA_ADRCR01           "DMA Channel 01 Address Control Register"
   DMA_ADRCR02           "DMA Channel 02 Address Control Register"
   DMA_ADRCR03           "DMA Channel 03 Address Control Register"
   DMA_ADRCR04           "DMA Channel 04 Address Control Register"
   DMA_ADRCR05           "DMA Channel 05 Address Control Register"
   DMA_ADRCR06           "DMA Channel 06 Address Control Register"
   DMA_ADRCR07           "DMA Channel 07 Address Control Register"
*/
/**********************************************************/

#define DMA_ADRCRm_MASK                 0x0003ffff
#define DMA_ADRCRm_SMF_MASK             0x00000007
#define DMA_ADRCRm_SMF_SHIFT            0
#define DMA_ADRCRm_INCS_MASK            0x00000008
#define DMA_ADRCRm_INCS_SHIFT           3
#define DMA_ADRCRm_DMF_MASK             0x00000070
#define DMA_ADRCRm_DMF_SHIFT            4
#define DMA_ADRCRm_INCD_MASK            0x00000080
#define DMA_ADRCRm_INCD_SHIFT           7
#define DMA_ADRCRm_CBLS_MASK            0x00000f00
#define DMA_ADRCRm_CBLS_SHIFT           8
#define DMA_ADRCRm_CBLD_MASK            0x0000f000
#define DMA_ADRCRm_CBLD_SHIFT           12
#define DMA_ADRCRm_SHCT_MASK            0x00030000
#define DMA_ADRCRm_SHCT_SHIFT           16



/****************** Masks for DMA_CHCRm_t **********************/
/*
   DMA_CHCR00            "DMA Channel 00 Control Register"
   DMA_CHCR01            "DMA Channel 01 Control Register"
   DMA_CHCR02            "DMA Channel 02 Control Register"
   DMA_CHCR03            "DMA Channel 03 Control Register"
   DMA_CHCR04            "DMA Channel 04 Control Register"
   DMA_CHCR05            "DMA Channel 05 Control Register"
   DMA_CHCR06            "DMA Channel 06 Control Register"
   DMA_CHCR07            "DMA Channel 07 Control Register"
*/
/**********************************************************/

#define DMA_CHCRm_MASK                  0x537fe1ff
#define DMA_CHCRm_TREL_MASK             0x000001ff
#define DMA_CHCRm_TREL_SHIFT            0
#define DMA_CHCRm_PRSEL_MASK            0x0000e000
#define DMA_CHCRm_PRSEL_SHIFT           13
#define DMA_CHCRm_BLKM_MASK             0x00070000
#define DMA_CHCRm_BLKM_SHIFT            16
#define DMA_CHCRm_RROAT_MASK            0x00080000
#define DMA_CHCRm_RROAT_SHIFT           19
#define DMA_CHCRm_CHMODE_MASK           0x00100000
#define DMA_CHCRm_CHMODE_SHIFT          20
#define DMA_CHCRm_CHDW_MASK             0x00600000
#define DMA_CHCRm_CHDW_SHIFT            21
#define DMA_CHCRm_PATSEL_MASK           0x03000000
#define DMA_CHCRm_PATSEL_SHIFT          24
#define DMA_CHCRm_CHPRIO_MASK           0x10000000
#define DMA_CHCRm_CHPRIO_SHIFT          28
#define DMA_CHCRm_DMAPRIO_MASK          0x40000000
#define DMA_CHCRm_DMAPRIO_SHIFT         30



/****************** Masks for DMA_CHICRm_t **********************/
/*
   DMA_CHICR00           "DMA Channel 00 Interrupt Control Register"
   DMA_CHICR01           "DMA Channel 01 Interrupt Control Register"
   DMA_CHICR02           "DMA Channel 02 Interrupt Control Register"
   DMA_CHICR03           "DMA Channel 03 Interrupt Control Register"
   DMA_CHICR04           "DMA Channel 04 Interrupt Control Register"
   DMA_CHICR05           "DMA Channel 05 Interrupt Control Register"
   DMA_CHICR06           "DMA Channel 06 Interrupt Control Register"
   DMA_CHICR07           "DMA Channel 07 Interrupt Control Register"
*/
/**********************************************************/

#define DMA_CHICRm_MASK                 0x0000ffff
#define DMA_CHICRm_WRPSE_MASK           0x00000001
#define DMA_CHICRm_WRPSE_SHIFT          0
#define DMA_CHICRm_WRPDE_MASK           0x00000002
#define DMA_CHICRm_WRPDE_SHIFT          1
#define DMA_CHICRm_INTCT_MASK           0x0000000c
#define DMA_CHICRm_INTCT_SHIFT          2
#define DMA_CHICRm_WRPP_MASK            0x000000f0
#define DMA_CHICRm_WRPP_SHIFT           4
#define DMA_CHICRm_INTP_MASK            0x00000f00
#define DMA_CHICRm_INTP_SHIFT           8
#define DMA_CHICRm_IRDV_MASK            0x0000f000
#define DMA_CHICRm_IRDV_SHIFT           12



/****************** Masks for DMA_CHSRm_t **********************/
/*
   DMA_CHSR00            "Channel 00 Status Register"
   DMA_CHSR01            "DMA Channel 01 Status Register"
   DMA_CHSR02            "DMA Channel 02 Status Register"
   DMA_CHSR03            "DMA Channel 03 Status Register"
   DMA_CHSR04            "DMA Channel 04 Status Register"
   DMA_CHSR05            "DMA Channel 05 Status Register"
   DMA_CHSR06            "DMA Channel 06 Status Register"
   DMA_CHSR07            "DMA Channel 07 Status Register"
*/
/**********************************************************/

#define DMA_CHSRm_MASK                  0x000081ff
#define DMA_CHSRm_TCOUNT_MASK           0x000001ff
#define DMA_CHSRm_TCOUNT_SHIFT          0
#define DMA_CHSRm_LXO_MASK              0x00008000
#define DMA_CHSRm_LXO_SHIFT             15



/****************** Masks for DMA_DADRm_t **********************/
/*
   DMA_DADR00            "DMA Channel 00 Destination Address Register"
   DMA_DADR01            "DMA Channel 01 Destination Address Register"
   DMA_DADR02            "DMA Channel 02 Destination Address Register"
   DMA_DADR03            "DMA Channel 03 Destination Address Register"
   DMA_DADR04            "DMA Channel 04 Destination Address Register"
   DMA_DADR05            "DMA Channel 05 Destination Address Register"
   DMA_DADR06            "DMA Channel 06 Destination Address Register"
   DMA_DADR07            "DMA Channel 07 Destination Address Register"
*/
/**********************************************************/

#define DMA_DADRm_MASK                  0xffffffff
#define DMA_DADRm_DADR_MASK             0xffffffff
#define DMA_DADRm_DADR_SHIFT            0



/****************** Masks for DMA_MLInSRCm_t **********************/
/*
   DMA_MLI0SRC0          "MLI 0 Service Request Control Register 0"
   DMA_MLI0SRC1          "MLI 0 Service Request Control Register 1"
   DMA_MLI0SRC2          "MLI 0 Service Request Control Register 2"
   DMA_MLI0SRC3          "MLI 0 Service Request Control Register 3"
   DMA_MLI1SRC0          "MLI 1 Service Request Control Register 0"
   DMA_MLI1SRC1          "MLI 1 Service Request Control Register 1"
*/
/**********************************************************/

#define DMA_MLInSRCm_MASK               0x0000f4ff
#define DMA_MLInSRCm_SRPN_MASK          0x000000ff
#define DMA_MLInSRCm_SRPN_SHIFT         0
#define DMA_MLInSRCm_TOS_MASK           0x00000400
#define DMA_MLInSRCm_TOS_SHIFT          10
#define DMA_MLInSRCm_SRE_MASK           0x00001000
#define DMA_MLInSRCm_SRE_SHIFT          12
#define DMA_MLInSRCm_SRR_MASK           0x00002000
#define DMA_MLInSRCm_SRR_SHIFT          13
#define DMA_MLInSRCm_CLRR_MASK          0x00004000
#define DMA_MLInSRCm_CLRR_SHIFT         14
#define DMA_MLInSRCm_SETR_MASK          0x00008000
#define DMA_MLInSRCm_SETR_SHIFT         15



/****************** Masks for DMA_SADRm_t **********************/
/*
   DMA_SADR00            "DMA Channel 00 Source Address Register"
   DMA_SADR01            "DMA Channel 01 Source Address Register"
   DMA_SADR02            "DMA Channel 02 Source Address Register"
   DMA_SADR03            "DMA Channel 03 Source Address Register"
   DMA_SADR04            "DMA Channel 04 Source Address Register"
   DMA_SADR05            "DMA Channel 05 Source Address Register"
   DMA_SADR06            "DMA Channel 06 Source Address Register"
   DMA_SADR07            "DMA Channel 07 Source Address Register"
*/
/**********************************************************/

#define DMA_SADRm_MASK                  0xffffffff
#define DMA_SADRm_SADR_MASK             0xffffffff
#define DMA_SADRm_SADR_SHIFT            0



/****************** Masks for DMA_SHADRm_t **********************/
/*
   DMA_SHADR00           "Channel 00 Shadowed Address Register"
   DMA_SHADR01           "DMA Channel 01 Shadowed Address Register"
   DMA_SHADR02           "DMA Channel 02 Shadowed Address Register"
   DMA_SHADR03           "DMA Channel 03 Shadowed Address Register"
   DMA_SHADR04           "DMA Channel 04 Shadowed Address Register"
   DMA_SHADR05           "DMA Channel 05 Shadowed Address Register"
   DMA_SHADR06           "DMA Channel 06 Shadowed Address Register"
   DMA_SHADR07           "DMA Channel 07 Shadowed Address Register"
*/
/**********************************************************/

#define DMA_SHADRm_MASK                 0xffffffff
#define DMA_SHADRm_SHADR_MASK           0xffffffff
#define DMA_SHADRm_SHADR_SHIFT          0



/****************** Masks for DMA_SRCm_t **********************/
/*
   DMA_SRC0              "DMA Service Request Control Register 0"
   DMA_SRC1              "DMA Service Request Control Register 1"
   DMA_SRC2              "DMA Service Request Control Register 2"
   DMA_SRC3              "DMA Service Request Control Register 3"
*/
/**********************************************************/

#define DMA_SRCm_MASK                   0x0000f4ff
#define DMA_SRCm_SRPN_MASK              0x000000ff
#define DMA_SRCm_SRPN_SHIFT             0
#define DMA_SRCm_TOS_MASK               0x00000400
#define DMA_SRCm_TOS_SHIFT              10
#define DMA_SRCm_SRE_MASK               0x00001000
#define DMA_SRCm_SRE_SHIFT              12
#define DMA_SRCm_SRR_MASK               0x00002000
#define DMA_SRCm_SRR_SHIFT              13
#define DMA_SRCm_CLRR_MASK              0x00004000
#define DMA_SRCm_CLRR_SHIFT             14
#define DMA_SRCm_SETR_MASK              0x00008000
#define DMA_SRCm_SETR_SHIFT             15



/****************** Masks for DMA_SYSSRCm_t **********************/
/*
   DMA_SYSSRC0           "System Interrupt Service Request Control Register 0"
   DMA_SYSSRC1           "System Interrupt Service Request Control Register 1"
   DMA_SYSSRC2           "System Interrupt Service Request Control Register 2"
   DMA_SYSSRC3           "System Interrupt Service Request Control Register 3"
   DMA_SYSSRC4           "System Interrupt Service Request Control Register 4"
*/
/**********************************************************/

#define DMA_SYSSRCm_MASK                0x0000f4ff
#define DMA_SYSSRCm_SRPN_MASK           0x000000ff
#define DMA_SYSSRCm_SRPN_SHIFT          0
#define DMA_SYSSRCm_TOS_MASK            0x00000400
#define DMA_SYSSRCm_TOS_SHIFT           10
#define DMA_SYSSRCm_SRE_MASK            0x00001000
#define DMA_SYSSRCm_SRE_SHIFT           12
#define DMA_SYSSRCm_SRR_MASK            0x00002000
#define DMA_SYSSRCm_SRR_SHIFT           13
#define DMA_SYSSRCm_CLRR_MASK           0x00004000
#define DMA_SYSSRCm_CLRR_SHIFT          14
#define DMA_SYSSRCm_SETR_MASK           0x00008000
#define DMA_SYSSRCm_SETR_SHIFT          15




#endif /* _HAVE_TRICORE_DMA_SHAREMASKS_H_ */

