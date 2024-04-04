/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CSFR_MASKS_H_
#define _HAVE_TRICORE_CSFR_MASKS_H_


/****************** Masks for BIV_t **********************/
/*
   BIV                   "Interrupt Vector Table Pointer"
*/
/**********************************************************/

#define BIV_MASK                        0x00000000



/****************** Masks for BTV_t **********************/
/*
   BTV                   "Trap Vector Table Pointer"
*/
/**********************************************************/

#define BTV_MASK                        0x00000000



/****************** Masks for CPU_ID_t **********************/
/*
   CPU_ID                "CPU Identification Register"
*/
/**********************************************************/

#define CPU_ID_MASK                     0x00000000



/****************** Masks for FCX_t **********************/
/*
   FCX                   "Free Context List Head Pointer"
*/
/**********************************************************/

#define FCX_MASK                        0x00000000



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

#define ISP_MASK                        0x00000000



/****************** Masks for LCX_t **********************/
/*
   LCX                   "Free Context List Limit Pointer"
*/
/**********************************************************/

#define LCX_MASK                        0x00000000



/****************** Masks for PC_t **********************/
/*
   PC                    "Program Counter"
*/
/**********************************************************/

#define PC_MASK                         0x00000000



/****************** Masks for PCXI_t **********************/
/*
   PCXI                  "Previous Context Information Register"
*/
/**********************************************************/

#define PCXI_MASK                       0x00000000



/****************** Masks for PSW_t **********************/
/*
   PSW                   "Program Status Word"
*/
/**********************************************************/

#define PSW_MASK                        0xff003fff
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
#define PSW_RM_MASK                     0x03000000
#define PSW_RM_SHIFT                    24
#define PSW_FX_MASK                     0x04000000
#define PSW_FX_SHIFT                    26
#define PSW_FU_MASK                     0x08000000
#define PSW_FU_SHIFT                    27
#define PSW_FZ_MASK                     0x10000000
#define PSW_FZ_SHIFT                    28
#define PSW_FV_MASK                     0x20000000
#define PSW_FV_SHIFT                    29
#define PSW_FI_MASK                     0x40000000
#define PSW_FI_SHIFT                    30
#define PSW_FS_MASK                     0x80000000
#define PSW_FS_SHIFT                    31



/****************** Masks for SYSCON_t **********************/
/*
   SYSCON                "System Configuration Register"
*/
/**********************************************************/

#define SYSCON_MASK                     0x00000000




#endif /* _HAVE_TRICORE_CSFR_MASKS_H_ */

