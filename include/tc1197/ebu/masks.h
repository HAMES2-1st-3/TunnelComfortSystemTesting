/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
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
#define EBU_CLC_DDR_MASK                0x00020000
#define EBU_CLC_DDR_SHIFT               17
#define EBU_CLC_EBUDIV_MASK             0x000c0000
#define EBU_CLC_EBUDIV_SHIFT            18
#define EBU_CLC_SYNCACK_MASK            0x00100000
#define EBU_CLC_SYNCACK_SHIFT           20
#define EBU_CLC_DDRACK_MASK             0x00200000
#define EBU_CLC_DDRACK_SHIFT            21
#define EBU_CLC_EBUDIVACK_MASK          0x00c00000
#define EBU_CLC_EBUDIVACK_SHIFT         22



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



/****************** Masks for EBU_MODCON_t **********************/
/*
   EBU_MODCON            "EBU Configuration Register"
*/
/**********************************************************/

#define EBU_MODCON_MASK                 0x80fffff3
#define EBU_MODCON_STS_MASK             0x00000001
#define EBU_MODCON_STS_SHIFT            0
#define EBU_MODCON_LCKABRT_MASK         0x00000002
#define EBU_MODCON_LCKABRT_SHIFT        1
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
#define EBU_MODCON_ALE_MASK             0x80000000
#define EBU_MODCON_ALE_SHIFT            31



/****************** Masks for EBU_USERCON_t **********************/
/*
   EBU_USERCON           "EBU Test/Control Configuration Register"
*/
/**********************************************************/

#define EBU_USERCON_MASK                0x00000001
#define EBU_USERCON_DIP_MASK            0x00000001
#define EBU_USERCON_DIP_SHIFT           0




#endif /* _HAVE_TRICORE_EBU_MASKS_H_ */

