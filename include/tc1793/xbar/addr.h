/* (c) HighTec EDV-Systeme GmbH */

/* block "XBAR" of TriCore TC1793 (63 SFRs) */

#ifndef _HAVE_TRICORE_XBAR_ADDRESSES_H_
#define _HAVE_TRICORE_XBAR_ADDRESSES_H_

#define XBAR_ARBCOND_ADDR     0xF8700004     /* "Arbiter Control Register D" */
#define XBAR_PRIOLD_ADDR      0xF870000C     /* "Arbiter Priority Register D" */
#define XBAR_ERRADDRD_ADDR    0xF8700010     /* "Error/Debug Address Capture Register D" */
#define XBAR_ERRD_ADDR        0xF8700014     /* "Error/Debug Capture Register D" */
#define XBAR_DBCOND_ADDR      0xF8700018     /* "Debug Control Register D" */
#define XBAR_DBADDD_ADDR      0xF870001C     /* "Debug Address Register D" */
#define XBAR_DBMADDD_ADDR     0xF8700020     /* "Debug Mask Address Register D" */
#define XBAR_ARBCON0_ADDR     0xF8700044     /* "Arbiter Control Register 0" */
#define XBAR_PRIOL0_ADDR      0xF870004C     /* "Arbiter Priority Register 0" */
#define XBAR_ERRADDR0_ADDR    0xF8700050     /* "Error/Debug Address Capture Register 0" */
#define XBAR_ERR0_ADDR        0xF8700054     /* "Error/Debug Capture Register 0" */
#define XBAR_DBCON0_ADDR      0xF8700058     /* "Debug Control Register 0" */
#define XBAR_DBADD0_ADDR      0xF870005C     /* "Debug Mask Address Register 0" */
#define XBAR_DBMADD0_ADDR     0xF8700060     /* "Debug Mask Address Register 0" */
#define XBAR_ARBCON1_ADDR     0xF8700084     /* "Arbiter Control Register 1" */
#define XBAR_PRIOL1_ADDR      0xF870008C     /* "Arbiter Priority Register 1" */
#define XBAR_ERRADDR1_ADDR    0xF8700090     /* "Error/Debug Address Capture Register 1" */
#define XBAR_ERR1_ADDR        0xF8700094     /* "Error/Debug Capture Register 1" */
#define XBAR_DBCON1_ADDR      0xF8700098     /* "Debug Control Register 1" */
#define XBAR_DBADD1_ADDR      0xF870009C     /* "Debug Mask Address Register 1" */
#define XBAR_DBMADD1_ADDR     0xF87000A0     /* "Debug Mask Address Register 1" */
#define XBAR_EXTCON2_ADDR     0xF87000C0     /* "External Control Register 2" */
#define XBAR_ARBCON2_ADDR     0xF87000C4     /* "Arbiter Control Register 2" */
#define XBAR_PRIOL2_ADDR      0xF87000CC     /* "Arbiter Priority Register 2" */
#define XBAR_ERRADDR2_ADDR    0xF87000D0     /* "Error/Debug Address Capture Register 2" */
#define XBAR_ERR2_ADDR        0xF87000D4     /* "Error/Debug Capture Register 2" */
#define XBAR_DBCON2_ADDR      0xF87000D8     /* "Debug Control Register 2" */
#define XBAR_DBADD2_ADDR      0xF87000DC     /* "Debug Mask Address Register 2" */
#define XBAR_DBMADD2_ADDR     0xF87000E0     /* "Debug Mask Address Register 2" */
#define XBAR_ARBCON3_ADDR     0xF8700104     /* "Arbiter Control Register 3" */
#define XBAR_PRIOL3_ADDR      0xF870010C     /* "Arbiter Priority Register 3" */
#define XBAR_ERRADDR3_ADDR    0xF8700110     /* "Error/Debug Address Capture Register 3" */
#define XBAR_ERR3_ADDR        0xF8700114     /* "Error/Debug Capture Register 3" */
#define XBAR_DBCON3_ADDR      0xF8700118     /* "Debug Control Register 3" */
#define XBAR_DBADD3_ADDR      0xF870011C     /* "Debug Mask Address Register 3" */
#define XBAR_DBMADD3_ADDR     0xF8700120     /* "Debug Mask Address Register 3" */
#define XBAR_ARBCON4_ADDR     0xF8700144     /* "Arbiter Control Register 4" */
#define XBAR_PRIOL4_ADDR      0xF870014C     /* "Arbiter Priority Register 4" */
#define XBAR_ERRADDR4_ADDR    0xF8700150     /* "Error/Debug Address Capture Register 4" */
#define XBAR_ERR4_ADDR        0xF8700154     /* "Error/Debug Capture Register 4" */
#define XBAR_DBCON4_ADDR      0xF8700158     /* "Debug Control Register 4" */
#define XBAR_DBADD4_ADDR      0xF870015C     /* "Debug Mask Address Register 4" */
#define XBAR_DBMADD4_ADDR     0xF8700160     /* "Debug Mask Address Register 4" */
#define XBAR_ARBCON5_ADDR     0xF8700184     /* "Arbiter Control Register 5" */
#define XBAR_PRIOL5_ADDR      0xF870018C     /* "Arbiter Priority Register 5" */
#define XBAR_ERRADDR5_ADDR    0xF8700190     /* "Error/Debug Address Capture Register 5" */
#define XBAR_ERR5_ADDR        0xF8700194     /* "Error/Debug Capture Register 5" */
#define XBAR_DBCON5_ADDR      0xF8700198     /* "Debug Control Register 5" */
#define XBAR_DBADD5_ADDR      0xF870019C     /* "Debug Mask Address Register 5" */
#define XBAR_DBMADD5_ADDR     0xF87001A0     /* "Debug Mask Address Register 5" */
#define XBAR_ARBCON6_ADDR     0xF87001C4     /* "Arbiter Control Register 6" */
#define XBAR_PRIOL6_ADDR      0xF87001CC     /* "Arbiter Priority Register 6" */
#define XBAR_ERRADDR6_ADDR    0xF87001D0     /* "Error/Debug Address Capture Register 6" */
#define XBAR_ERR6_ADDR        0xF87001D4     /* "Error/Debug Capture Register 6" */
#define XBAR_DBCON6_ADDR      0xF87001D8     /* "Debug Control Register 6" */
#define XBAR_DBADD6_ADDR      0xF87001DC     /* "Debug Mask Address Register 6" */
#define XBAR_DBMADD6_ADDR     0xF87001E0     /* "Debug Mask Address Register 6" */
#define XBAR_ID_ADDR          0xF8700408     /* "Module Identification Register" */
#define XBAR_DBSAT_ADDR       0xF870040C     /* "Debug Trigger Event Status Register" */
#define XBAR_INTSAT_ADDR      0xF8700410     /* "Arbiter Interrupt Status Register" */
#define XBAR_IDINTSAT_ADDR    0xF8700414     /* "Transaction ID Interrupt Status Register" */
#define XBAR_IDINTEN_ADDR     0xF8700418     /* "Transaction ID Interrupt Enable Register" */
#define XBAR_SRC_ADDR         0xF87004FC     /* "XBar_SRI Service Request Control Register" */


#endif /* _HAVE_TRICORE_XBAR_ADDRESSES_H_ (block "XBAR") */


