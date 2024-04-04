/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_XBAR_SHAREMASKS_H_
#define _HAVE_TRICORE_XBAR_SHAREMASKS_H_


/****************** Masks for XBAR_ARBCONm_t **********************/
/*
   XBAR_ARBCON0          "Arbiter Control Register 0"
   XBAR_ARBCON1          "Arbiter Control Register 1"
   XBAR_ARBCON2          "Arbiter Control Register 2"
   XBAR_ARBCON3          "Arbiter Control Register 3"
   XBAR_ARBCON4          "Arbiter Control Register 4"
   XBAR_ARBCON5          "Arbiter Control Register 5"
   XBAR_ARBCON6          "Arbiter Control Register 6"
*/
/**********************************************************/

#define XBAR_ARBCONm_MASK               0xfff8001f
#define XBAR_ARBCONm_PRERREN_MASK       0x00000001
#define XBAR_ARBCONm_PRERREN_SHIFT      0
#define XBAR_ARBCONm_SCERREN_MASK       0x00000002
#define XBAR_ARBCONm_SCERREN_SHIFT      1
#define XBAR_ARBCONm_SETPRINT_MASK      0x00000004
#define XBAR_ARBCONm_SETPRINT_SHIFT     2
#define XBAR_ARBCONm_SETSCINT_MASK      0x00000008
#define XBAR_ARBCONm_SETSCINT_SHIFT     3
#define XBAR_ARBCONm_INTACK_MASK        0x00000010
#define XBAR_ARBCONm_INTACK_SHIFT       4
#define XBAR_ARBCONm_SMEN_MASK          0x00080000
#define XBAR_ARBCONm_SMEN_SHIFT         19
#define XBAR_ARBCONm_SPC_MASK           0xfff00000
#define XBAR_ARBCONm_SPC_SHIFT          20



/****************** Masks for XBAR_DBADDm_t **********************/
/*
   XBAR_DBADD3           "Debug Mask Address Register 3"
   XBAR_DBADD4           "Debug Mask Address Register 4"
   XBAR_DBADD6           "Debug Mask Address Register 6"
*/
/**********************************************************/

#define XBAR_DBADDm_MASK                0x7ffffffc
#define XBAR_DBADDm_ADDRESS_MASK        0x7ffffffc
#define XBAR_DBADDm_ADDRESS_SHIFT       2



/****************** Masks for XBAR_DBCONm_t **********************/
/*
   XBAR_DBCON0           "Debug Control Register 0"
   XBAR_DBCON1           "Debug Control Register 1"
   XBAR_DBCON2           "Debug Control Register 2"
   XBAR_DBCON3           "Debug Control Register 3"
   XBAR_DBCON4           "Debug Control Register 4"
   XBAR_DBCON5           "Debug Control Register 5"
   XBAR_DBCON6           "Debug Control Register 6"
*/
/**********************************************************/

#define XBAR_DBCONm_MASK                0x0f9f000f
#define XBAR_DBCONm_DBEN_MASK           0x00000001
#define XBAR_DBCONm_DBEN_SHIFT          0
#define XBAR_DBCONm_DBSAT_MASK          0x00000002
#define XBAR_DBCONm_DBSAT_SHIFT         1
#define XBAR_DBCONm_REARM_MASK          0x00000004
#define XBAR_DBCONm_REARM_SHIFT         2
#define XBAR_DBCONm_SETDBEVT_MASK       0x00000008
#define XBAR_DBCONm_SETDBEVT_SHIFT      3
#define XBAR_DBCONm_RDEN_MASK           0x00010000
#define XBAR_DBCONm_RDEN_SHIFT          16
#define XBAR_DBCONm_WREN_MASK           0x00020000
#define XBAR_DBCONm_WREN_SHIFT          17
#define XBAR_DBCONm_SVMEN_MASK          0x00040000
#define XBAR_DBCONm_SVMEN_SHIFT         18
#define XBAR_DBCONm_ADDEN_MASK          0x00080000
#define XBAR_DBCONm_ADDEN_SHIFT         19
#define XBAR_DBCONm_ERREN_MASK          0x00100000
#define XBAR_DBCONm_ERREN_SHIFT         20
#define XBAR_DBCONm_MASEN_MASK          0x00800000
#define XBAR_DBCONm_MASEN_SHIFT         23
#define XBAR_DBCONm_MASTER_MASK         0x0f000000
#define XBAR_DBCONm_MASTER_SHIFT        24



/****************** Masks for XBAR_DBMADDm_t **********************/
/*
   XBAR_DBMADD3          "Debug Mask Address Register 3"
   XBAR_DBMADD4          "Debug Mask Address Register 4"
   XBAR_DBMADD6          "Debug Mask Address Register 6"
*/
/**********************************************************/

#define XBAR_DBMADDm_MASK               0x7ffffffc
#define XBAR_DBMADDm_ADDRESS_MASK       0x7ffffffc
#define XBAR_DBMADDm_ADDRESS_SHIFT      2



/****************** Masks for XBAR_ERRADDRm_t **********************/
/*
   XBAR_ERRADDR0         "Error/Debug Address Capture Register 0"
   XBAR_ERRADDR1         "Error/Debug Address Capture Register 1"
   XBAR_ERRADDR2         "Error/Debug Address Capture Register 2"
   XBAR_ERRADDR3         "Error/Debug Address Capture Register 3"
   XBAR_ERRADDR4         "Error/Debug Address Capture Register 4"
   XBAR_ERRADDR5         "Error/Debug Address Capture Register 5"
   XBAR_ERRADDR6         "Error/Debug Address Capture Register 6"
*/
/**********************************************************/

#define XBAR_ERRADDRm_MASK              0xffffffff
#define XBAR_ERRADDRm_ADDR_MASK         0xffffffff
#define XBAR_ERRADDRm_ADDR_SHIFT        0



/****************** Masks for XBAR_ERRm_t **********************/
/*
   XBAR_ERR0             "Error/Debug Capture Register 0"
   XBAR_ERR1             "Error/Debug Capture Register 1"
   XBAR_ERR2             "Error/Debug Capture Register 2"
   XBAR_ERR3             "Error/Debug Capture Register 3"
   XBAR_ERR4             "Error/Debug Capture Register 4"
   XBAR_ERR5             "Error/Debug Capture Register 5"
   XBAR_ERR6             "Error/Debug Capture Register 6"
*/
/**********************************************************/

#define XBAR_ERRm_MASK                  0xffff3ff7
#define XBAR_ERRm_RD_MASK               0x00000001
#define XBAR_ERRm_RD_SHIFT              0
#define XBAR_ERRm_WR_MASK               0x00000002
#define XBAR_ERRm_WR_SHIFT              1
#define XBAR_ERRm_SVM_MASK              0x00000004
#define XBAR_ERRm_SVM_SHIFT             2
#define XBAR_ERRm_OPC_MASK              0x000000f0
#define XBAR_ERRm_OPC_SHIFT             4
#define XBAR_ERRm_TR_ID_MASK            0x00003f00
#define XBAR_ERRm_TR_ID_SHIFT           8
#define XBAR_ERRm_ADDR_ECC_MASK         0x00ff0000
#define XBAR_ERRm_ADDR_ECC_SHIFT        16
#define XBAR_ERRm_MCI_SBS_MASK          0xff000000
#define XBAR_ERRm_MCI_SBS_SHIFT         24



/****************** Masks for XBAR_PRIOLm_t **********************/
/*
   XBAR_PRIOL3           "Arbiter Priority Register 3"
   XBAR_PRIOL4           "Arbiter Priority Register 4"
   XBAR_PRIOL5           "Arbiter Priority Register 5"
   XBAR_PRIOL6           "Arbiter Priority Register 6"
*/
/**********************************************************/

#define XBAR_PRIOLm_MASK                0x00ffffff
#define XBAR_PRIOLm_MASTER0_MASK        0x0000000f
#define XBAR_PRIOLm_MASTER0_SHIFT       0
#define XBAR_PRIOLm_MASTER1_MASK        0x000000f0
#define XBAR_PRIOLm_MASTER1_SHIFT       4
#define XBAR_PRIOLm_MASTER2_MASK        0x00000f00
#define XBAR_PRIOLm_MASTER2_SHIFT       8
#define XBAR_PRIOLm_MASTER3_MASK        0x0000f000
#define XBAR_PRIOLm_MASTER3_SHIFT       12
#define XBAR_PRIOLm_MASTER4_MASK        0x000f0000
#define XBAR_PRIOLm_MASTER4_SHIFT       16
#define XBAR_PRIOLm_MASTER5_MASK        0x00f00000
#define XBAR_PRIOLm_MASTER5_SHIFT       20




#endif /* _HAVE_TRICORE_XBAR_SHAREMASKS_H_ */

