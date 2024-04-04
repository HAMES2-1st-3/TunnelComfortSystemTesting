/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_XBAR_MASKS_H_
#define _HAVE_TRICORE_XBAR_MASKS_H_


/****************** Masks for XBAR_ARBCOND_t **********************/
/*
   XBAR_ARBCOND          "Arbiter Control Register D"
*/
/**********************************************************/

#define XBAR_ARBCOND_MASK               0xfff8001f
#define XBAR_ARBCOND_PRERREN_MASK       0x00000001
#define XBAR_ARBCOND_PRERREN_SHIFT      0
#define XBAR_ARBCOND_SCERREN_MASK       0x00000002
#define XBAR_ARBCOND_SCERREN_SHIFT      1
#define XBAR_ARBCOND_SETPRINT_MASK      0x00000004
#define XBAR_ARBCOND_SETPRINT_SHIFT     2
#define XBAR_ARBCOND_SETSCINT_MASK      0x00000008
#define XBAR_ARBCOND_SETSCINT_SHIFT     3
#define XBAR_ARBCOND_INTACK_MASK        0x00000010
#define XBAR_ARBCOND_INTACK_SHIFT       4
#define XBAR_ARBCOND_SMEN_MASK          0x00080000
#define XBAR_ARBCOND_SMEN_SHIFT         19
#define XBAR_ARBCOND_SPC_MASK           0xfff00000
#define XBAR_ARBCOND_SPC_SHIFT          20



/****************** Masks for XBAR_DBADD0_t **********************/
/*
   XBAR_DBADD0           "Debug Mask Address Register 0"
*/
/**********************************************************/

#define XBAR_DBADD0_MASK                0x3ffffffc
#define XBAR_DBADD0_ADDRESS_MASK        0x3ffffffc
#define XBAR_DBADD0_ADDRESS_SHIFT       2



/****************** Masks for XBAR_DBADD1_t **********************/
/*
   XBAR_DBADD1           "Debug Mask Address Register 1"
*/
/**********************************************************/

#define XBAR_DBADD1_MASK                0x003ffffc
#define XBAR_DBADD1_ADDRESS_MASK        0x003ffffc
#define XBAR_DBADD1_ADDRESS_SHIFT       2



/****************** Masks for XBAR_DBADD2_t **********************/
/*
   XBAR_DBADD2           "Debug Mask Address Register 2"
*/
/**********************************************************/

#define XBAR_DBADD2_MASK                0x003ffffc
#define XBAR_DBADD2_ADDRESS_MASK        0x003ffffc
#define XBAR_DBADD2_ADDRESS_SHIFT       2



/****************** Masks for XBAR_DBADD5_t **********************/
/*
   XBAR_DBADD5           "Debug Mask Address Register 5"
*/
/**********************************************************/

#define XBAR_DBADD5_MASK                0x3ffffffc
#define XBAR_DBADD5_ADDRESS_MASK        0x3ffffffc
#define XBAR_DBADD5_ADDRESS_SHIFT       2



/****************** Masks for XBAR_DBADDD_t **********************/
/*
   XBAR_DBADDD           "Debug Address Register D"
*/
/**********************************************************/

#define XBAR_DBADDD_MASK                0xfffffffc
#define XBAR_DBADDD_UPPER_MASK          0xfffffffc
#define XBAR_DBADDD_UPPER_SHIFT         2



/****************** Masks for XBAR_DBCOND_t **********************/
/*
   XBAR_DBCOND           "Debug Control Register D"
*/
/**********************************************************/

#define XBAR_DBCOND_MASK                0x0f9f000f
#define XBAR_DBCOND_DBEN_MASK           0x00000001
#define XBAR_DBCOND_DBEN_SHIFT          0
#define XBAR_DBCOND_DBSAT_MASK          0x00000002
#define XBAR_DBCOND_DBSAT_SHIFT         1
#define XBAR_DBCOND_REARM_MASK          0x00000004
#define XBAR_DBCOND_REARM_SHIFT         2
#define XBAR_DBCOND_SETDBEVT_MASK       0x00000008
#define XBAR_DBCOND_SETDBEVT_SHIFT      3
#define XBAR_DBCOND_RDEN_MASK           0x00010000
#define XBAR_DBCOND_RDEN_SHIFT          16
#define XBAR_DBCOND_WREN_MASK           0x00020000
#define XBAR_DBCOND_WREN_SHIFT          17
#define XBAR_DBCOND_SVMEN_MASK          0x00040000
#define XBAR_DBCOND_SVMEN_SHIFT         18
#define XBAR_DBCOND_ADDEN_MASK          0x00080000
#define XBAR_DBCOND_ADDEN_SHIFT         19
#define XBAR_DBCOND_ERREN_MASK          0x00100000
#define XBAR_DBCOND_ERREN_SHIFT         20
#define XBAR_DBCOND_MASEN_MASK          0x00800000
#define XBAR_DBCOND_MASEN_SHIFT         23
#define XBAR_DBCOND_MASTER_MASK         0x0f000000
#define XBAR_DBCOND_MASTER_SHIFT        24



/****************** Masks for XBAR_DBMADD0_t **********************/
/*
   XBAR_DBMADD0          "Debug Mask Address Register 0"
*/
/**********************************************************/

#define XBAR_DBMADD0_MASK               0x3ffffffc
#define XBAR_DBMADD0_ADDRESS_MASK       0x3ffffffc
#define XBAR_DBMADD0_ADDRESS_SHIFT      2



/****************** Masks for XBAR_DBMADD1_t **********************/
/*
   XBAR_DBMADD1          "Debug Mask Address Register 1"
*/
/**********************************************************/

#define XBAR_DBMADD1_MASK               0x003ffffc
#define XBAR_DBMADD1_ADDRESS_MASK       0x003ffffc
#define XBAR_DBMADD1_ADDRESS_SHIFT      2



/****************** Masks for XBAR_DBMADD2_t **********************/
/*
   XBAR_DBMADD2          "Debug Mask Address Register 2"
*/
/**********************************************************/

#define XBAR_DBMADD2_MASK               0x003ffffc
#define XBAR_DBMADD2_ADDRESS_MASK       0x003ffffc
#define XBAR_DBMADD2_ADDRESS_SHIFT      2



/****************** Masks for XBAR_DBMADD5_t **********************/
/*
   XBAR_DBMADD5          "Debug Mask Address Register 5"
*/
/**********************************************************/

#define XBAR_DBMADD5_MASK               0x3ffffffc
#define XBAR_DBMADD5_ADDRESS_MASK       0x3ffffffc
#define XBAR_DBMADD5_ADDRESS_SHIFT      2



/****************** Masks for XBAR_DBMADDD_t **********************/
/*
   XBAR_DBMADDD          "Debug Mask Address Register D"
*/
/**********************************************************/

#define XBAR_DBMADDD_MASK               0xfffffffc
#define XBAR_DBMADDD_ADDRESS_MASK       0xfffffffc
#define XBAR_DBMADDD_ADDRESS_SHIFT      2



/****************** Masks for XBAR_DBSAT_t **********************/
/*
   XBAR_DBSAT            "Debug Trigger Event Status Register"
*/
/**********************************************************/

#define XBAR_DBSAT_MASK                 0x0000807f
#define XBAR_DBSAT_SCI0_MASK            0x00000001
#define XBAR_DBSAT_SCI0_SHIFT           0
#define XBAR_DBSAT_SCI1_MASK            0x00000002
#define XBAR_DBSAT_SCI1_SHIFT           1
#define XBAR_DBSAT_SCI2_MASK            0x00000004
#define XBAR_DBSAT_SCI2_SHIFT           2
#define XBAR_DBSAT_SCI3_MASK            0x00000008
#define XBAR_DBSAT_SCI3_SHIFT           3
#define XBAR_DBSAT_SCI4_MASK            0x00000010
#define XBAR_DBSAT_SCI4_SHIFT           4
#define XBAR_DBSAT_SCI5_MASK            0x00000020
#define XBAR_DBSAT_SCI5_SHIFT           5
#define XBAR_DBSAT_SCI6_MASK            0x00000040
#define XBAR_DBSAT_SCI6_SHIFT           6
#define XBAR_DBSAT_SCID_MASK            0x00008000
#define XBAR_DBSAT_SCID_SHIFT           15



/****************** Masks for XBAR_ERRADDRD_t **********************/
/*
   XBAR_ERRADDRD         "Error/Debug Address Capture Register D"
*/
/**********************************************************/

#define XBAR_ERRADDRD_MASK              0xffffffff
#define XBAR_ERRADDRD_ADDR_MASK         0xffffffff
#define XBAR_ERRADDRD_ADDR_SHIFT        0



/****************** Masks for XBAR_ERRD_t **********************/
/*
   XBAR_ERRD             "Error/Debug Capture Register D"
*/
/**********************************************************/

#define XBAR_ERRD_MASK                  0xffff3ff7
#define XBAR_ERRD_RD_MASK               0x00000001
#define XBAR_ERRD_RD_SHIFT              0
#define XBAR_ERRD_WR_MASK               0x00000002
#define XBAR_ERRD_WR_SHIFT              1
#define XBAR_ERRD_SVM_MASK              0x00000004
#define XBAR_ERRD_SVM_SHIFT             2
#define XBAR_ERRD_OPC_MASK              0x000000f0
#define XBAR_ERRD_OPC_SHIFT             4
#define XBAR_ERRD_TR_ID_MASK            0x00003f00
#define XBAR_ERRD_TR_ID_SHIFT           8
#define XBAR_ERRD_ADDR_ECC_MASK         0x00ff0000
#define XBAR_ERRD_ADDR_ECC_SHIFT        16
#define XBAR_ERRD_MCI_SBS_MASK          0xff000000
#define XBAR_ERRD_MCI_SBS_SHIFT         24



/****************** Masks for XBAR_EXTCON2_t **********************/
/*
   XBAR_EXTCON2          "External Control Register 2"
*/
/**********************************************************/

#define XBAR_EXTCON2_MASK               0x01ffe678
#define XBAR_EXTCON2_WFWD_MASK          0x00000008
#define XBAR_EXTCON2_WFWD_SHIFT         3
#define XBAR_EXTCON2_FREQDISS_MASK      0x00000010
#define XBAR_EXTCON2_FREQDISS_SHIFT     4
#define XBAR_EXTCON2_FFREQS_MASK        0x00000020
#define XBAR_EXTCON2_FFREQS_SHIFT       5
#define XBAR_EXTCON2_FREQDISF_MASK      0x00000040
#define XBAR_EXTCON2_FREQDISF_SHIFT     6
#define XBAR_EXTCON2_NODELTR_MASK       0x00000200
#define XBAR_EXTCON2_NODELTR_SHIFT      9
#define XBAR_EXTCON2_NORMW_MASK         0x00000400
#define XBAR_EXTCON2_NORMW_SHIFT        10
#define XBAR_EXTCON2_MAX_WS_MASK        0x000fe000
#define XBAR_EXTCON2_MAX_WS_SHIFT       13
#define XBAR_EXTCON2_RETRY_CNT_MASK     0x00f00000
#define XBAR_EXTCON2_RETRY_CNT_SHIFT    20
#define XBAR_EXTCON2_NOPDIS_MASK        0x01000000
#define XBAR_EXTCON2_NOPDIS_SHIFT       24



/****************** Masks for XBAR_ID_t **********************/
/*
   XBAR_ID               "Module Identification Register"
*/
/**********************************************************/

#define XBAR_ID_MASK                    0xffffffff
#define XBAR_ID_MOD_REV_MASK            0x000000ff
#define XBAR_ID_MOD_REV_SHIFT           0
#define XBAR_ID_MOD_TYPE_MASK           0x0000ff00
#define XBAR_ID_MOD_TYPE_SHIFT          8
#define XBAR_ID_MOD_NUMBER_MASK         0xffff0000
#define XBAR_ID_MOD_NUMBER_SHIFT        16



/****************** Masks for XBAR_IDINTEN_t **********************/
/*
   XBAR_IDINTEN          "Transaction ID Interrupt Enable Register"
*/
/**********************************************************/

#define XBAR_IDINTEN_MASK               0x003f807f
#define XBAR_IDINTEN_ENSCI0_MASK        0x00000001
#define XBAR_IDINTEN_ENSCI0_SHIFT       0
#define XBAR_IDINTEN_ENSCI1_MASK        0x00000002
#define XBAR_IDINTEN_ENSCI1_SHIFT       1
#define XBAR_IDINTEN_ENSCI2_MASK        0x00000004
#define XBAR_IDINTEN_ENSCI2_SHIFT       2
#define XBAR_IDINTEN_ENSCI3_MASK        0x00000008
#define XBAR_IDINTEN_ENSCI3_SHIFT       3
#define XBAR_IDINTEN_ENSCI4_MASK        0x00000010
#define XBAR_IDINTEN_ENSCI4_SHIFT       4
#define XBAR_IDINTEN_ENSCI5_MASK        0x00000020
#define XBAR_IDINTEN_ENSCI5_SHIFT       5
#define XBAR_IDINTEN_ENSCI6_MASK        0x00000040
#define XBAR_IDINTEN_ENSCI6_SHIFT       6
#define XBAR_IDINTEN_ENSCID_MASK        0x00008000
#define XBAR_IDINTEN_ENSCID_SHIFT       15
#define XBAR_IDINTEN_ENMCI16_MASK       0x00010000
#define XBAR_IDINTEN_ENMCI16_SHIFT      16
#define XBAR_IDINTEN_ENMCI17_MASK       0x00020000
#define XBAR_IDINTEN_ENMCI17_SHIFT      17
#define XBAR_IDINTEN_ENMCI18_MASK       0x00040000
#define XBAR_IDINTEN_ENMCI18_SHIFT      18
#define XBAR_IDINTEN_ENMCI19_MASK       0x00080000
#define XBAR_IDINTEN_ENMCI19_SHIFT      19
#define XBAR_IDINTEN_ENMCI20_MASK       0x00100000
#define XBAR_IDINTEN_ENMCI20_SHIFT      20
#define XBAR_IDINTEN_ENMCI21_MASK       0x00200000
#define XBAR_IDINTEN_ENMCI21_SHIFT      21



/****************** Masks for XBAR_IDINTSAT_t **********************/
/*
   XBAR_IDINTSAT         "Transaction ID Interrupt Status Register"
*/
/**********************************************************/

#define XBAR_IDINTSAT_MASK              0x003f807f
#define XBAR_IDINTSAT_IDSCI0_MASK       0x00000001
#define XBAR_IDINTSAT_IDSCI0_SHIFT      0
#define XBAR_IDINTSAT_IDSCI1_MASK       0x00000002
#define XBAR_IDINTSAT_IDSCI1_SHIFT      1
#define XBAR_IDINTSAT_IDSCI2_MASK       0x00000004
#define XBAR_IDINTSAT_IDSCI2_SHIFT      2
#define XBAR_IDINTSAT_IDSCI3_MASK       0x00000008
#define XBAR_IDINTSAT_IDSCI3_SHIFT      3
#define XBAR_IDINTSAT_IDSCI4_MASK       0x00000010
#define XBAR_IDINTSAT_IDSCI4_SHIFT      4
#define XBAR_IDINTSAT_IDSCI5_MASK       0x00000020
#define XBAR_IDINTSAT_IDSCI5_SHIFT      5
#define XBAR_IDINTSAT_IDSCI6_MASK       0x00000040
#define XBAR_IDINTSAT_IDSCI6_SHIFT      6
#define XBAR_IDINTSAT_IDSCID_MASK       0x00008000
#define XBAR_IDINTSAT_IDSCID_SHIFT      15
#define XBAR_IDINTSAT_IDMCI16_MASK      0x00010000
#define XBAR_IDINTSAT_IDMCI16_SHIFT     16
#define XBAR_IDINTSAT_IDMCI17_MASK      0x00020000
#define XBAR_IDINTSAT_IDMCI17_SHIFT     17
#define XBAR_IDINTSAT_IDMCI18_MASK      0x00040000
#define XBAR_IDINTSAT_IDMCI18_SHIFT     18
#define XBAR_IDINTSAT_IDMCI19_MASK      0x00080000
#define XBAR_IDINTSAT_IDMCI19_SHIFT     19
#define XBAR_IDINTSAT_IDMCI20_MASK      0x00100000
#define XBAR_IDINTSAT_IDMCI20_SHIFT     20
#define XBAR_IDINTSAT_IDMCI21_MASK      0x00200000
#define XBAR_IDINTSAT_IDMCI21_SHIFT     21



/****************** Masks for XBAR_INTSAT_t **********************/
/*
   XBAR_INTSAT           "Arbiter Interrupt Status Register"
*/
/**********************************************************/

#define XBAR_INTSAT_MASK                0x807f807f
#define XBAR_INTSAT_SCSCI0_MASK         0x00000001
#define XBAR_INTSAT_SCSCI0_SHIFT        0
#define XBAR_INTSAT_SCSCI1_MASK         0x00000002
#define XBAR_INTSAT_SCSCI1_SHIFT        1
#define XBAR_INTSAT_SCSCI2_MASK         0x00000004
#define XBAR_INTSAT_SCSCI2_SHIFT        2
#define XBAR_INTSAT_SCSCI3_MASK         0x00000008
#define XBAR_INTSAT_SCSCI3_SHIFT        3
#define XBAR_INTSAT_SCSCI4_MASK         0x00000010
#define XBAR_INTSAT_SCSCI4_SHIFT        4
#define XBAR_INTSAT_SCSCI5_MASK         0x00000020
#define XBAR_INTSAT_SCSCI5_SHIFT        5
#define XBAR_INTSAT_SCSCI6_MASK         0x00000040
#define XBAR_INTSAT_SCSCI6_SHIFT        6
#define XBAR_INTSAT_SCSCID_MASK         0x00008000
#define XBAR_INTSAT_SCSCID_SHIFT        15
#define XBAR_INTSAT_PRSCI16_MASK        0x00010000
#define XBAR_INTSAT_PRSCI16_SHIFT       16
#define XBAR_INTSAT_PRSCI17_MASK        0x00020000
#define XBAR_INTSAT_PRSCI17_SHIFT       17
#define XBAR_INTSAT_PRSCI18_MASK        0x00040000
#define XBAR_INTSAT_PRSCI18_SHIFT       18
#define XBAR_INTSAT_PRSCI19_MASK        0x00080000
#define XBAR_INTSAT_PRSCI19_SHIFT       19
#define XBAR_INTSAT_PRSCI20_MASK        0x00100000
#define XBAR_INTSAT_PRSCI20_SHIFT       20
#define XBAR_INTSAT_PRSCI21_MASK        0x00200000
#define XBAR_INTSAT_PRSCI21_SHIFT       21
#define XBAR_INTSAT_PRSCI22_MASK        0x00400000
#define XBAR_INTSAT_PRSCI22_SHIFT       22
#define XBAR_INTSAT_PRSCID_MASK         0x80000000
#define XBAR_INTSAT_PRSCID_SHIFT        31



/****************** Masks for XBAR_PRIOL0_t **********************/
/*
   XBAR_PRIOL0           "Arbiter Priority Register 0"
*/
/**********************************************************/

#define XBAR_PRIOL0_MASK                0x000fffff
#define XBAR_PRIOL0_MASTER0_MASK        0x0000000f
#define XBAR_PRIOL0_MASTER0_SHIFT       0
#define XBAR_PRIOL0_MASTER1_MASK        0x000000f0
#define XBAR_PRIOL0_MASTER1_SHIFT       4
#define XBAR_PRIOL0_MASTER2_MASK        0x00000f00
#define XBAR_PRIOL0_MASTER2_SHIFT       8
#define XBAR_PRIOL0_MASTER3_MASK        0x0000f000
#define XBAR_PRIOL0_MASTER3_SHIFT       12
#define XBAR_PRIOL0_MASTER4_MASK        0x000f0000
#define XBAR_PRIOL0_MASTER4_SHIFT       16



/****************** Masks for XBAR_PRIOL1_t **********************/
/*
   XBAR_PRIOL1           "Arbiter Priority Register 1"
*/
/**********************************************************/

#define XBAR_PRIOL1_MASK                0x00f0ffff
#define XBAR_PRIOL1_MASTER0_MASK        0x0000000f
#define XBAR_PRIOL1_MASTER0_SHIFT       0
#define XBAR_PRIOL1_MASTER1_MASK        0x000000f0
#define XBAR_PRIOL1_MASTER1_SHIFT       4
#define XBAR_PRIOL1_MASTER2_MASK        0x00000f00
#define XBAR_PRIOL1_MASTER2_SHIFT       8
#define XBAR_PRIOL1_MASTER3_MASK        0x0000f000
#define XBAR_PRIOL1_MASTER3_SHIFT       12
#define XBAR_PRIOL1_MASTER5_MASK        0x00f00000
#define XBAR_PRIOL1_MASTER5_SHIFT       20



/****************** Masks for XBAR_PRIOL2_t **********************/
/*
   XBAR_PRIOL2           "Arbiter Priority Register 2"
*/
/**********************************************************/

#define XBAR_PRIOL2_MASK                0x000f0000
#define XBAR_PRIOL2_MASTER4_MASK        0x000f0000
#define XBAR_PRIOL2_MASTER4_SHIFT       16



/****************** Masks for XBAR_PRIOLD_t **********************/
/*
   XBAR_PRIOLD           "Arbiter Priority Register D"
*/
/**********************************************************/

#define XBAR_PRIOLD_MASK                0x00ffffff
#define XBAR_PRIOLD_MASTER0_MASK        0x0000000f
#define XBAR_PRIOLD_MASTER0_SHIFT       0
#define XBAR_PRIOLD_MASTER1_MASK        0x000000f0
#define XBAR_PRIOLD_MASTER1_SHIFT       4
#define XBAR_PRIOLD_MASTER2_MASK        0x00000f00
#define XBAR_PRIOLD_MASTER2_SHIFT       8
#define XBAR_PRIOLD_MASTER3_MASK        0x0000f000
#define XBAR_PRIOLD_MASTER3_SHIFT       12
#define XBAR_PRIOLD_MASTER4_MASK        0x000f0000
#define XBAR_PRIOLD_MASTER4_SHIFT       16
#define XBAR_PRIOLD_MASTER5_MASK        0x00f00000
#define XBAR_PRIOLD_MASTER5_SHIFT       20



/****************** Masks for XBAR_SRC_t **********************/
/*
   XBAR_SRC              "XBar_SRI Service Request Control Register"
*/
/**********************************************************/

#define XBAR_SRC_MASK                   0x0000fcff
#define XBAR_SRC_SRPN_MASK              0x000000ff
#define XBAR_SRC_SRPN_SHIFT             0
#define XBAR_SRC_TOS_MASK               0x00000c00
#define XBAR_SRC_TOS_SHIFT              10
#define XBAR_SRC_SRE_MASK               0x00001000
#define XBAR_SRC_SRE_SHIFT              12
#define XBAR_SRC_SRR_MASK               0x00002000
#define XBAR_SRC_SRR_SHIFT              13
#define XBAR_SRC_CLRR_MASK              0x00004000
#define XBAR_SRC_CLRR_SHIFT             14
#define XBAR_SRC_SETR_MASK              0x00008000
#define XBAR_SRC_SETR_SHIFT             15




#endif /* _HAVE_TRICORE_XBAR_MASKS_H_ */

