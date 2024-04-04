/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CSFR_MASKS_H_
#define _HAVE_TRICORE_CSFR_MASKS_H_


/****************** Masks for BIV_t **********************/
/*
   BIV                   "Interrupt Vector Table Pointer"
*/
/**********************************************************/

#define BIV_MASK                        0xfffffffe
#define BIV_BIV_15_1_MASK               0x0000fffe
#define BIV_BIV_15_1_SHIFT              1
#define BIV_BIV_31_16_MASK              0xffff0000
#define BIV_BIV_31_16_SHIFT             16



/****************** Masks for BTV_t **********************/
/*
   BTV                   "Trap Vector Table Pointer"
*/
/**********************************************************/

#define BTV_MASK                        0xfffffffe
#define BTV_BTV_15_1_MASK               0x0000fffe
#define BTV_BTV_15_1_SHIFT              1
#define BTV_BTV_31_16_MASK              0xffff0000
#define BTV_BTV_31_16_SHIFT             16



/****************** Masks for CPU_ID_t **********************/
/*
   CPU_ID                "CPU Identification Register"
*/
/**********************************************************/

#define CPU_ID_MASK                     0xffffffff
#define CPU_ID_MOD_REV_MASK             0x000000ff
#define CPU_ID_MOD_REV_SHIFT            0
#define CPU_ID_MOD_TYPE_MASK            0x0000ff00
#define CPU_ID_MOD_TYPE_SHIFT           8
#define CPU_ID_MOD_NUMBER_MASK          0xffff0000
#define CPU_ID_MOD_NUMBER_SHIFT         16



/****************** Masks for FCX_t **********************/
/*
   FCX                   "Free Context List Head Pointer"
*/
/**********************************************************/

#define FCX_MASK                        0x000fffff
#define FCX_FCXO_MASK                   0x0000ffff
#define FCX_FCXO_SHIFT                  0
#define FCX_FCXS_MASK                   0x000f0000
#define FCX_FCXS_SHIFT                  16



/****************** Masks for ICR_t **********************/
/*
   ICR                   "ICU Interrupt Control Register"
*/
/**********************************************************/

#define ICR_MASK                        0x07ff01ff
#define ICR_CCPN_MASK                   0x000000ff
#define ICR_CCPN_SHIFT                  0
#define ICR_IE_MASK                     0x00000100
#define ICR_IE_SHIFT                    8
#define ICR_PIPN_MASK                   0x00ff0000
#define ICR_PIPN_SHIFT                  16
#define ICR_CARBCYC_MASK                0x03000000
#define ICR_CARBCYC_SHIFT               24
#define ICR_CONECYC_MASK                0x04000000
#define ICR_CONECYC_SHIFT               26



/****************** Masks for ISP_t **********************/
/*
   ISP                   "Interrupt Stack Pointer"
*/
/**********************************************************/

#define ISP_MASK                        0xffffffff
#define ISP_ISP_15_0_MASK               0x0000ffff
#define ISP_ISP_15_0_SHIFT              0
#define ISP_ISP_31_16_MASK              0xffff0000
#define ISP_ISP_31_16_SHIFT             16



/****************** Masks for LCX_t **********************/
/*
   LCX                   "Free Context List Limit Pointer"
*/
/**********************************************************/

#define LCX_MASK                        0x000fffff
#define LCX_LCXO_MASK                   0x0000ffff
#define LCX_LCXO_SHIFT                  0
#define LCX_LCXS_MASK                   0x000f0000
#define LCX_LCXS_SHIFT                  16



/****************** Masks for PC_t **********************/
/*
   PC                    "Program Counter"
*/
/**********************************************************/

#define PC_MASK                         0xfffffffe
#define PC_PC_15_1_MASK                 0x0000fffe
#define PC_PC_15_1_SHIFT                1
#define PC_PC_31_16_MASK                0xffff0000
#define PC_PC_31_16_SHIFT               16



/****************** Masks for PCXI_t **********************/
/*
   PCXI                  "Previous Context Information Register"
*/
/**********************************************************/

#define PCXI_MASK                       0xffcfffff
#define PCXI_PCXO_MASK                  0x0000ffff
#define PCXI_PCXO_SHIFT                 0
#define PCXI_PCXS_MASK                  0x000f0000
#define PCXI_PCXS_SHIFT                 16
#define PCXI_UL_MASK                    0x00400000
#define PCXI_UL_SHIFT                   22
#define PCXI_PIE_MASK                   0x00800000
#define PCXI_PIE_SHIFT                  23
#define PCXI_PCPN_MASK                  0xff000000
#define PCXI_PCPN_SHIFT                 24



/****************** Masks for PSW_t **********************/
/*
   PSW                   "Program Status Word"
*/
/**********************************************************/

#define PSW_MASK                        0xf8003fff
#define PSW_CDC_MASK                    0x0000007f
#define PSW_CDC_SHIFT                   0
#define PSW_CDE_MASK                    0x00000080
#define PSW_CDE_SHIFT                   7
#define PSW_GW_MASK                     0x00000100
#define PSW_GW_SHIFT                    8
#define PSW_IS_MASK                     0x00000200
#define PSW_IS_SHIFT                    9
#define PSW_IO_MASK                     0x00000c00
#define PSW_IO_SHIFT                    10
#define PSW_PRS_MASK                    0x00003000
#define PSW_PRS_SHIFT                   12
#define PSW_SAV_MASK                    0x08000000
#define PSW_SAV_SHIFT                   27
#define PSW_AV_MASK                     0x10000000
#define PSW_AV_SHIFT                    28
#define PSW_SV_MASK                     0x20000000
#define PSW_SV_SHIFT                    29
#define PSW_V_MASK                      0x40000000
#define PSW_V_SHIFT                     30
#define PSW_C_MASK                      0x80000000
#define PSW_C_SHIFT                     31



/****************** Masks for SYSCON_t **********************/
/*
   SYSCON                "System Configuration Register"
*/
/**********************************************************/

#define SYSCON_MASK                     0x00000003
#define SYSCON_FCDSF_MASK               0x00000001
#define SYSCON_FCDSF_SHIFT              0
#define SYSCON_PROTEN_MASK              0x00000002
#define SYSCON_PROTEN_SHIFT             1




#endif /* _HAVE_TRICORE_CSFR_MASKS_H_ */

