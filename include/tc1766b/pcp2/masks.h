/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PCP2_MASKS_H_
#define _HAVE_TRICORE_PCP2_MASKS_H_


/****************** Masks for PCP_CLC_t **********************/
/*
   PCP_CLC               "PCP Clock Control Register"
*/
/**********************************************************/

#define PCP_CLC_MASK                    0x00008000
#define PCP_CLC_PCGDIS_MASK             0x00008000
#define PCP_CLC_PCGDIS_SHIFT            15



/****************** Masks for PCP_CS_t **********************/
/*
   PCP_CS                "PCP Control/Status Register"
*/
/**********************************************************/

#define PCP_CS_MASK                     0xfffffff7
#define PCP_CS_EN_MASK                  0x00000001
#define PCP_CS_EN_SHIFT                 0
#define PCP_CS_RST_MASK                 0x00000002
#define PCP_CS_RST_SHIFT                1
#define PCP_CS_RS_MASK                  0x00000004
#define PCP_CS_RS_SHIFT                 2
#define PCP_CS_RCB_MASK                 0x00000010
#define PCP_CS_RCB_SHIFT                4
#define PCP_CS_EIE_MASK                 0x00000020
#define PCP_CS_EIE_SHIFT                5
#define PCP_CS_CS_MASK                  0x000000c0
#define PCP_CS_CS_SHIFT                 6
#define PCP_CS_PPE_MASK                 0x00000100
#define PCP_CS_PPE_SHIFT                8
#define PCP_CS_PPS_MASK                 0x0000fe00
#define PCP_CS_PPS_SHIFT                9
#define PCP_CS_CWE_MASK                 0x00010000
#define PCP_CS_CWE_SHIFT                16
#define PCP_CS_CWT_MASK                 0x00fe0000
#define PCP_CS_CWT_SHIFT                17
#define PCP_CS_ESR_MASK                 0xff000000
#define PCP_CS_ESR_SHIFT                24



/****************** Masks for PCP_ES_t **********************/
/*
   PCP_ES                "PCP Error/Debug Status Register"
*/
/**********************************************************/

#define PCP_ES_MASK                     0xffffffdf
#define PCP_ES_BER_MASK                 0x00000001
#define PCP_ES_BER_SHIFT                0
#define PCP_ES_IOP_MASK                 0x00000002
#define PCP_ES_IOP_SHIFT                1
#define PCP_ES_DCR_MASK                 0x00000004
#define PCP_ES_DCR_SHIFT                2
#define PCP_ES_IAE_MASK                 0x00000008
#define PCP_ES_IAE_SHIFT                3
#define PCP_ES_DBE_MASK                 0x00000010
#define PCP_ES_DBE_SHIFT                4
#define PCP_ES_CWD_MASK                 0x00000040
#define PCP_ES_CWD_SHIFT                6
#define PCP_ES_PPC_MASK                 0x00000080
#define PCP_ES_PPC_SHIFT                7
#define PCP_ES_EPN_MASK                 0x0000ff00
#define PCP_ES_EPN_SHIFT                8
#define PCP_ES_EPC_MASK                 0xffff0000
#define PCP_ES_EPC_SHIFT                16



/****************** Masks for PCP_FTD_t **********************/
/*
   PCP_FTD               "PCP Feature Disable/Test Register"
*/
/**********************************************************/

#define PCP_FTD_MASK                    0x000003ff
#define PCP_FTD_DCRO_MASK               0x00000001
#define PCP_FTD_DCRO_SHIFT              0
#define PCP_FTD_DNI_MASK                0x00000002
#define PCP_FTD_DNI_SHIFT               1
#define PCP_FTD_DCSO_MASK               0x00000004
#define PCP_FTD_DCSO_SHIFT              2
#define PCP_FTD_TME_MASK                0x00000008
#define PCP_FTD_TME_SHIFT               3
#define PCP_FTD_PCDE_MASK               0x00000010
#define PCP_FTD_PCDE_SHIFT              4
#define PCP_FTD_FPWC_MASK               0x00000060
#define PCP_FTD_FPWC_SHIFT              5
#define PCP_FTD_ICCA_MASK               0x00000080
#define PCP_FTD_ICCA_SHIFT              7
#define PCP_FTD_DCBS_MASK               0x00000100
#define PCP_FTD_DCBS_SHIFT              8
#define PCP_FTD_ERCO_MASK               0x00000200
#define PCP_FTD_ERCO_SHIFT              9



/****************** Masks for PCP_ICON_t **********************/
/*
   PCP_ICON              "PCP Interrupt Configuration Register"
*/
/**********************************************************/

#define PCP_ICON_MASK                   0x00000fff
#define PCP_ICON_P0T_MASK               0x00000003
#define PCP_ICON_P0T_SHIFT              0
#define PCP_ICON_P1T_MASK               0x0000000c
#define PCP_ICON_P1T_SHIFT              2
#define PCP_ICON_P2T_MASK               0x00000030
#define PCP_ICON_P2T_SHIFT              4
#define PCP_ICON_P3T_MASK               0x000000c0
#define PCP_ICON_P3T_SHIFT              6
#define PCP_ICON_IP0E_MASK              0x00000100
#define PCP_ICON_IP0E_SHIFT             8
#define PCP_ICON_IP1E_MASK              0x00000200
#define PCP_ICON_IP1E_SHIFT             9
#define PCP_ICON_IP2E_MASK              0x00000400
#define PCP_ICON_IP2E_SHIFT             10
#define PCP_ICON_IP3E_MASK              0x00000800
#define PCP_ICON_IP3E_SHIFT             11



/****************** Masks for PCP_ICR_t **********************/
/*
   PCP_ICR               "PCP Interrupt Control Register"
*/
/**********************************************************/

#define PCP_ICR_MASK                    0x07ff01ff
#define PCP_ICR_CPPN_MASK               0x000000ff
#define PCP_ICR_CPPN_SHIFT              0
#define PCP_ICR_IE_MASK                 0x00000100
#define PCP_ICR_IE_SHIFT                8
#define PCP_ICR_PIPN_MASK               0x00ff0000
#define PCP_ICR_PIPN_SHIFT              16
#define PCP_ICR_ARBCYC_MASK             0x03000000
#define PCP_ICR_ARBCYC_SHIFT            24
#define PCP_ICR_ONECYC_MASK             0x04000000
#define PCP_ICR_ONECYC_SHIFT            26



/****************** Masks for PCP_ID_t **********************/
/*
   PCP_ID                "PCP Module Identification Register"
*/
/**********************************************************/

#define PCP_ID_MASK                     0xffffffff
#define PCP_ID_REVNUM_MASK              0x000000ff
#define PCP_ID_REVNUM_SHIFT             0
#define PCP_ID_ID32BIT_MASK             0x0000ff00
#define PCP_ID_ID32BIT_SHIFT            8
#define PCP_ID_MODNUM_MASK              0xffff0000
#define PCP_ID_MODNUM_SHIFT             16



/****************** Masks for PCP_ITR_t **********************/
/*
   PCP_ITR               "PCP Interrupt Threshold Control Register"
*/
/**********************************************************/

#define PCP_ITR_MASK                    0x000f00ff
#define PCP_ITR_ITP_MASK                0x000000ff
#define PCP_ITR_ITP_SHIFT               0
#define PCP_ITR_ITL_MASK                0x000f0000
#define PCP_ITR_ITL_SHIFT               16



/****************** Masks for PCP_SRC10_t **********************/
/*
   PCP_SRC10             "Service Request Control Register 10"
*/
/**********************************************************/

#define PCP_SRC10_MASK                  0x10ff3cff
#define PCP_SRC10_SRPN_MASK             0x000000ff
#define PCP_SRC10_SRPN_SHIFT            0
#define PCP_SRC10_TOS_MASK              0x00000c00
#define PCP_SRC10_TOS_SHIFT             10
#define PCP_SRC10_SRE_MASK              0x00001000
#define PCP_SRC10_SRE_SHIFT             12
#define PCP_SRC10_SRR_MASK              0x00002000
#define PCP_SRC10_SRR_SHIFT             13
#define PCP_SRC10_SRCN_MASK             0x00ff0000
#define PCP_SRC10_SRCN_SHIFT            16
#define PCP_SRC10_RRQ_MASK              0x10000000
#define PCP_SRC10_RRQ_SHIFT             28



/****************** Masks for PCP_SRC11_t **********************/
/*
   PCP_SRC11             "Service Request Control Register 11"
*/
/**********************************************************/

#define PCP_SRC11_MASK                  0x10ff3cff
#define PCP_SRC11_SRPN_MASK             0x000000ff
#define PCP_SRC11_SRPN_SHIFT            0
#define PCP_SRC11_TOS_MASK              0x00000c00
#define PCP_SRC11_TOS_SHIFT             10
#define PCP_SRC11_SRE_MASK              0x00001000
#define PCP_SRC11_SRE_SHIFT             12
#define PCP_SRC11_SRR_MASK              0x00002000
#define PCP_SRC11_SRR_SHIFT             13
#define PCP_SRC11_SRCN_MASK             0x00ff0000
#define PCP_SRC11_SRCN_SHIFT            16
#define PCP_SRC11_RRQ_MASK              0x10000000
#define PCP_SRC11_RRQ_SHIFT             28



/****************** Masks for PCP_SRC9_t **********************/
/*
   PCP_SRC9              "Service Request Control Register 9"
*/
/**********************************************************/

#define PCP_SRC9_MASK                   0x10ff3cff
#define PCP_SRC9_SRPN_MASK              0x000000ff
#define PCP_SRC9_SRPN_SHIFT             0
#define PCP_SRC9_TOS_MASK               0x00000c00
#define PCP_SRC9_TOS_SHIFT              10
#define PCP_SRC9_SRE_MASK               0x00001000
#define PCP_SRC9_SRE_SHIFT              12
#define PCP_SRC9_SRR_MASK               0x00002000
#define PCP_SRC9_SRR_SHIFT              13
#define PCP_SRC9_SRCN_MASK              0x00ff0000
#define PCP_SRC9_SRCN_SHIFT             16
#define PCP_SRC9_RRQ_MASK               0x10000000
#define PCP_SRC9_RRQ_SHIFT              28



/****************** Masks for PCP_SSR_t **********************/
/*
   PCP_SSR               "PCP Stall Status Register"
*/
/**********************************************************/

#define PCP_SSR_MASK                    0x00ff83ff
#define PCP_SSR_SSRN_MASK               0x000000ff
#define PCP_SSR_SSRN_SHIFT              0
#define PCP_SSR_STOS_MASK               0x00000300
#define PCP_SSR_STOS_SHIFT              8
#define PCP_SSR_ST_MASK                 0x00008000
#define PCP_SSR_ST_SHIFT                15
#define PCP_SSR_SCHN_MASK               0x00ff0000
#define PCP_SSR_SCHN_SHIFT              16




#endif /* _HAVE_TRICORE_PCP2_MASKS_H_ */

