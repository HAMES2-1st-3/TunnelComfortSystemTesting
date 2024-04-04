/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SDMA_SHAREMASKS_H_
#define _HAVE_TRICORE_SDMA_SHAREMASKS_H_


/****************** Masks for SDMA_ADRCRm_t **********************/
/*
   SDMA_ADRCR00          "SDMA Channel 00 Address Control Register"
   SDMA_ADRCR01          "SDMA Channel 01 Address Control Register"
   SDMA_ADRCR02          "SDMA Channel 02 Address Control Register"
   SDMA_ADRCR03          "SDMA Channel 03 Address Control Register"
   SDMA_ADRCR04          "SDMA Channel 04 Address Control Register"
   SDMA_ADRCR05          "SDMA Channel 05 Address Control Register"
   SDMA_ADRCR06          "SDMA Channel 06 Address Control Register"
   SDMA_ADRCR07          "SDMA Channel 07 Address Control Register"
*/
/**********************************************************/

#define SDMA_ADRCRm_MASK                0x0007ffff
#define SDMA_ADRCRm_SMF_MASK            0x00000007
#define SDMA_ADRCRm_SMF_SHIFT           0
#define SDMA_ADRCRm_INCS_MASK           0x00000008
#define SDMA_ADRCRm_INCS_SHIFT          3
#define SDMA_ADRCRm_DMF_MASK            0x00000070
#define SDMA_ADRCRm_DMF_SHIFT           4
#define SDMA_ADRCRm_INCD_MASK           0x00000080
#define SDMA_ADRCRm_INCD_SHIFT          7
#define SDMA_ADRCRm_CBLS_MASK           0x00000f00
#define SDMA_ADRCRm_CBLS_SHIFT          8
#define SDMA_ADRCRm_CBLD_MASK           0x0000f000
#define SDMA_ADRCRm_CBLD_SHIFT          12
#define SDMA_ADRCRm_SHCT_MASK           0x00030000
#define SDMA_ADRCRm_SHCT_SHIFT          16
#define SDMA_ADRCRm_SHWEN_MASK          0x00040000
#define SDMA_ADRCRm_SHWEN_SHIFT         18



/****************** Masks for SDMA_CHCRm_t **********************/
/*
   SDMA_CHCR00           "SDMA Channel 00 Control Register"
   SDMA_CHCR01           "SDMA Channel 01 Control Register"
   SDMA_CHCR02           "SDMA Channel 02 Control Register"
   SDMA_CHCR03           "SDMA Channel 03 Control Register"
   SDMA_CHCR04           "SDMA Channel 04 Control Register"
   SDMA_CHCR05           "SDMA Channel 05 Control Register"
   SDMA_CHCR06           "SDMA Channel 06 Control Register"
   SDMA_CHCR07           "SDMA Channel 07 Control Register"
*/
/**********************************************************/

#define SDMA_CHCRm_MASK                 0x137ff3ff
#define SDMA_CHCRm_TREL_MASK            0x000003ff
#define SDMA_CHCRm_TREL_SHIFT           0
#define SDMA_CHCRm_PRSEL_MASK           0x0000f000
#define SDMA_CHCRm_PRSEL_SHIFT          12
#define SDMA_CHCRm_BLKM_MASK            0x00070000
#define SDMA_CHCRm_BLKM_SHIFT           16
#define SDMA_CHCRm_RROAT_MASK           0x00080000
#define SDMA_CHCRm_RROAT_SHIFT          19
#define SDMA_CHCRm_CHMODE_MASK          0x00100000
#define SDMA_CHCRm_CHMODE_SHIFT         20
#define SDMA_CHCRm_CHDW_MASK            0x00600000
#define SDMA_CHCRm_CHDW_SHIFT           21
#define SDMA_CHCRm_PATSEL_MASK          0x03000000
#define SDMA_CHCRm_PATSEL_SHIFT         24
#define SDMA_CHCRm_CHPRIO_MASK          0x10000000
#define SDMA_CHCRm_CHPRIO_SHIFT         28



/****************** Masks for SDMA_CHICRm_t **********************/
/*
   SDMA_CHICR00          "SDMA Channel 00 Interrupt Control Register"
   SDMA_CHICR01          "SDMA Channel 01 Interrupt Control Register"
   SDMA_CHICR02          "SDMA Channel 02 Interrupt Control Register"
   SDMA_CHICR03          "SDMA Channel 03 Interrupt Control Register"
   SDMA_CHICR04          "SDMA Channel 04 Interrupt Control Register"
   SDMA_CHICR05          "SDMA Channel 05 Interrupt Control Register"
   SDMA_CHICR06          "SDMA Channel 06 Interrupt Control Register"
   SDMA_CHICR07          "SDMA Channel 07 Interrupt Control Register"
*/
/**********************************************************/

#define SDMA_CHICRm_MASK                0x0000ffff
#define SDMA_CHICRm_WRPSE_MASK          0x00000001
#define SDMA_CHICRm_WRPSE_SHIFT         0
#define SDMA_CHICRm_WRPDE_MASK          0x00000002
#define SDMA_CHICRm_WRPDE_SHIFT         1
#define SDMA_CHICRm_INTCT_MASK          0x0000000c
#define SDMA_CHICRm_INTCT_SHIFT         2
#define SDMA_CHICRm_WRPP_MASK           0x000000f0
#define SDMA_CHICRm_WRPP_SHIFT          4
#define SDMA_CHICRm_INTP_MASK           0x00000f00
#define SDMA_CHICRm_INTP_SHIFT          8
#define SDMA_CHICRm_IRDV_MASK           0x0000f000
#define SDMA_CHICRm_IRDV_SHIFT          12



/****************** Masks for SDMA_CHSRm_t **********************/
/*
   SDMA_CHSR00           "SDMA Channel 00 Status Register"
   SDMA_CHSR01           "SDMA Channel 01 Status Register"
   SDMA_CHSR02           "SDMA Channel 02 Status Register"
   SDMA_CHSR03           "SDMA Channel 03 Status Register"
   SDMA_CHSR04           "SDMA Channel 04 Status Register"
   SDMA_CHSR05           "SDMA Channel 05 Status Register"
   SDMA_CHSR06           "SDMA Channel 06 Status Register"
   SDMA_CHSR07           "SDMA Channel 07 Status Register"
*/
/**********************************************************/

#define SDMA_CHSRm_MASK                 0x000083ff
#define SDMA_CHSRm_TCOUNT_MASK          0x000003ff
#define SDMA_CHSRm_TCOUNT_SHIFT         0
#define SDMA_CHSRm_LXO_MASK             0x00008000
#define SDMA_CHSRm_LXO_SHIFT            15



/****************** Masks for SDMA_DADRm_t **********************/
/*
   SDMA_DADR00           "SDMA Channel 00 Destination Address Register"
   SDMA_DADR01           "SDMA Channel 01 Destination Address Register"
   SDMA_DADR02           "SDMA Channel 02 Destination Address Register"
   SDMA_DADR03           "SDMA Channel 03 Destination Address Register"
   SDMA_DADR04           "SDMA Channel 04 Destination Address Register"
   SDMA_DADR05           "SDMA Channel 05 Destination Address Register"
   SDMA_DADR06           "SDMA Channel 06 Destination Address Register"
   SDMA_DADR07           "SDMA Channel 07 Destination Address Register"
*/
/**********************************************************/

#define SDMA_DADRm_MASK                 0xffffffff
#define SDMA_DADRm_DADR_MASK            0xffffffff
#define SDMA_DADRm_DADR_SHIFT           0



/****************** Masks for SDMA_DAMAXm_t **********************/
/*
   SDMA_DAMAX00          "SDMA Channel 00 Destination Address Upper Boundary Register"
   SDMA_DAMAX01          "SDMA Channel 01 Destination Address Upper Boundary Register"
   SDMA_DAMAX02          "SDMA Channel 02 Destination Address Upper Boundary Register"
   SDMA_DAMAX03          "SDMA Channel 03 Destination Address Upper Boundary Register"
   SDMA_DAMAX04          "SDMA Channel 04 Destination Address Upper Boundary Register"
   SDMA_DAMAX05          "SDMA Channel 05 Destination Address Upper Boundary Register"
   SDMA_DAMAX06          "SDMA Channel 06 Destination Address Upper Boundary Register"
   SDMA_DAMAX07          "SDMA Channel 07 Destination Address Upper Boundary Register"
*/
/**********************************************************/

#define SDMA_DAMAXm_MASK                0xffffffff
#define SDMA_DAMAXm_DAMAX_MASK          0xffffffff
#define SDMA_DAMAXm_DAMAX_SHIFT         0



/****************** Masks for SDMA_DAMINm_t **********************/
/*
   SDMA_DAMIN00          "SDMA Channel 00 Destination Address Lower Boundary Register"
   SDMA_DAMIN01          "SDMA Channel 01 Destination Address Lower Boundary Register"
   SDMA_DAMIN02          "SDMA Channel 02 Destination Address Lower Boundary Register"
   SDMA_DAMIN03          "SDMA Channel 03 Destination Address Lower Boundary Register"
   SDMA_DAMIN04          "SDMA Channel 04 Destination Address Lower Boundary Register"
   SDMA_DAMIN05          "SDMA Channel 05 Destination Address Lower Boundary Register"
   SDMA_DAMIN06          "SDMA Channel 06 Destination Address Lower Boundary Register"
   SDMA_DAMIN07          "SDMA Channel 07 Destination Address Lower Boundary Register"
*/
/**********************************************************/

#define SDMA_DAMINm_MASK                0xffffffff
#define SDMA_DAMINm_DAMIN_MASK          0xffffffff
#define SDMA_DAMINm_DAMIN_SHIFT         0



/****************** Masks for SDMA_DCRCm_t **********************/
/*
   SDMA_DCRC00           "SDMA Channel 00 Destination Address CRC Register"
   SDMA_DCRC01           "SDMA Channel 01 Destination Address CRC Register"
   SDMA_DCRC02           "SDMA Channel 02 Destination Address CRC Register"
   SDMA_DCRC03           "SDMA Channel 03 Destination Address CRC Register"
   SDMA_DCRC04           "SDMA Channel 04 Destination Address CRC Register"
   SDMA_DCRC05           "SDMA Channel 05 Destination Address CRC Register"
   SDMA_DCRC06           "SDMA Channel 06 Destination Address CRC Register"
   SDMA_DCRC07           "SDMA Channel 07 Destination Address CRC Register"
*/
/**********************************************************/

#define SDMA_DCRCm_MASK                 0xffffffff
#define SDMA_DCRCm_DCRC_MASK            0xffffffff
#define SDMA_DCRCm_DCRC_SHIFT           0



/****************** Masks for SDMA_RDCRCm_t **********************/
/*
   SDMA_RDCRC00          "SDMA Channel 00 Read Data CRC Register"
   SDMA_RDCRC01          "SDMA Channel 01 Read Data CRC Register"
   SDMA_RDCRC02          "SDMA Channel 02 Read Data CRC Register"
   SDMA_RDCRC03          "SDMA Channel 03 Read Data CRC Register"
   SDMA_RDCRC04          "SDMA Channel 04 Read Data CRC Register"
   SDMA_RDCRC05          "SDMA Channel 05 Read Data CRC Register"
   SDMA_RDCRC06          "SDMA Channel 06 Read Data CRC Register"
   SDMA_RDCRC07          "SDMA Channel 07 Read Data CRC Register"
*/
/**********************************************************/

#define SDMA_RDCRCm_MASK                0xffffffff
#define SDMA_RDCRCm_RDCRC_MASK          0xffffffff
#define SDMA_RDCRCm_RDCRC_SHIFT         0



/****************** Masks for SDMA_SADRm_t **********************/
/*
   SDMA_SADR00           "SDMA Channel 00 Source Address Register"
   SDMA_SADR01           "SDMA Channel 01 Source Address Register"
   SDMA_SADR02           "SDMA Channel 02 Source Address Register"
   SDMA_SADR03           "SDMA Channel 03 Source Address Register"
   SDMA_SADR04           "SDMA Channel 04 Source Address Register"
   SDMA_SADR05           "SDMA Channel 05 Source Address Register"
   SDMA_SADR06           "SDMA Channel 06 Source Address Register"
   SDMA_SADR07           "SDMA Channel 07 Source Address Register"
*/
/**********************************************************/

#define SDMA_SADRm_MASK                 0xffffffff
#define SDMA_SADRm_SADR_MASK            0xffffffff
#define SDMA_SADRm_SADR_SHIFT           0



/****************** Masks for SDMA_SAMAXm_t **********************/
/*
   SDMA_SAMAX00          "SDMA Channel 00 Source Address Lower Boundary Register"
   SDMA_SAMAX01          "SDMA Channel 01 Source Address Lower Boundary Register"
   SDMA_SAMAX02          "SDMA Channel 02 Source Address Lower Boundary Register"
   SDMA_SAMAX03          "SDMA Channel 03 Source Address Lower Boundary Register"
   SDMA_SAMAX04          "SDMA Channel 04 Source Address Lower Boundary Register"
   SDMA_SAMAX05          "SDMA Channel 05 Source Address Lower Boundary Register"
   SDMA_SAMAX06          "SDMA Channel 06 Source Address Lower Boundary Register"
   SDMA_SAMAX07          "SDMA Channel 07 Source Address Lower Boundary Register"
*/
/**********************************************************/

#define SDMA_SAMAXm_MASK                0xffffffff
#define SDMA_SAMAXm_SAMAX_MASK          0xffffffff
#define SDMA_SAMAXm_SAMAX_SHIFT         0



/****************** Masks for SDMA_SAMINm_t **********************/
/*
   SDMA_SAMIN00          "SDMA Channel 00 Source Address Lower Boundary Register"
   SDMA_SAMIN01          "SDMA Channel 01 Source Address Lower Boundary Register"
   SDMA_SAMIN02          "SDMA Channel 02 Source Address Lower Boundary Register"
   SDMA_SAMIN03          "SDMA Channel 03 Source Address Lower Boundary Register"
   SDMA_SAMIN04          "SDMA Channel 04 Source Address Lower Boundary Register"
   SDMA_SAMIN05          "SDMA Channel 05 Source Address Lower Boundary Register"
   SDMA_SAMIN06          "SDMA Channel 06 Source Address Lower Boundary Register"
   SDMA_SAMIN07          "SDMA Channel 07 Source Address Lower Boundary Register"
*/
/**********************************************************/

#define SDMA_SAMINm_MASK                0xffffffff
#define SDMA_SAMINm_SAMIN_MASK          0xffffffff
#define SDMA_SAMINm_SAMIN_SHIFT         0



/****************** Masks for SDMA_SCRCm_t **********************/
/*
   SDMA_SCRC00           "SDMA Channel 00 Source Address CRC Register"
   SDMA_SCRC01           "SDMA Channel 01 Source Address CRC Register"
   SDMA_SCRC02           "SDMA Channel 02 Source Address CRC Register"
   SDMA_SCRC03           "SDMA Channel 03 Source Address CRC Register"
   SDMA_SCRC04           "SDMA Channel 04 Source Address CRC Register"
   SDMA_SCRC05           "SDMA Channel 05 Source Address CRC Register"
   SDMA_SCRC06           "SDMA Channel 06 Source Address CRC Register"
   SDMA_SCRC07           "SDMA Channel 07 Source Address CRC Register"
*/
/**********************************************************/

#define SDMA_SCRCm_MASK                 0xffffffff
#define SDMA_SCRCm_SCRC_MASK            0xffffffff
#define SDMA_SCRCm_SCRC_SHIFT           0



/****************** Masks for SDMA_SHADRm_t **********************/
/*
   SDMA_SHADR00          "SDMA Channel 00 Shadow Address Register"
   SDMA_SHADR01          "SDMA Channel 01 Shadow Address Register"
   SDMA_SHADR02          "SDMA Channel 02 Shadow Address Register"
   SDMA_SHADR03          "SDMA Channel 03 Shadow Address Register"
   SDMA_SHADR04          "SDMA Channel 04 Shadow Address Register"
   SDMA_SHADR05          "SDMA Channel 05 Shadow Address Register"
   SDMA_SHADR06          "SDMA Channel 06 Shadow Address Register"
   SDMA_SHADR07          "SDMA Channel 07 Shadow Address Register"
*/
/**********************************************************/

#define SDMA_SHADRm_MASK                0xffffffff
#define SDMA_SHADRm_SHADR_MASK          0xffffffff
#define SDMA_SHADRm_SHADR_SHIFT         0



/****************** Masks for SDMA_SRCm_t **********************/
/*
   SDMA_SRC0             "SDMA Service Request Control Register 0"
   SDMA_SRC1             "SDMA Service Request Control Register 1"
   SDMA_SRC2             "SDMA Service Request Control Register 2"
   SDMA_SRC3             "SDMA Service Request Control Register 3"
   SDMA_SRC4             "SDMA Service Request Control Register 4"
   SDMA_SRC5             "SDMA Service Request Control Register 5"
   SDMA_SRC6             "SDMA Service Request Control Register 6"
   SDMA_SRC7             "SDMA Service Request Control Register 7"
*/
/**********************************************************/

#define SDMA_SRCm_MASK                  0x0000f4ff
#define SDMA_SRCm_SRPN_MASK             0x000000ff
#define SDMA_SRCm_SRPN_SHIFT            0
#define SDMA_SRCm_TOS_MASK              0x00000400
#define SDMA_SRCm_TOS_SHIFT             10
#define SDMA_SRCm_SRE_MASK              0x00001000
#define SDMA_SRCm_SRE_SHIFT             12
#define SDMA_SRCm_SRR_MASK              0x00002000
#define SDMA_SRCm_SRR_SHIFT             13
#define SDMA_SRCm_CLRR_MASK             0x00004000
#define SDMA_SRCm_CLRR_SHIFT            14
#define SDMA_SRCm_SETR_MASK             0x00008000
#define SDMA_SRCm_SETR_SHIFT            15




#endif /* _HAVE_TRICORE_SDMA_SHAREMASKS_H_ */

