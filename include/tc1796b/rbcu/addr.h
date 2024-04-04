/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "RBCU" of TriCore TC1796B (14 SFRs) */

#ifndef _HAVE_TRICORE_RBCU_ADDRESSES_H_
#define _HAVE_TRICORE_RBCU_ADDRESSES_H_

#define RBCU_ID_ADDR          0xF0100008     /* "RBCU Module Identification Register" */
#define RBCU_CON_ADDR         0xF0100010     /* "RBCU Control Register" */
#define RBCU_ECON_ADDR        0xF0100020     /* "RBCU Error Control Capture Register" */
#define RBCU_EADD_ADDR        0xF0100024     /* "RBCU Error Address Capture Register" */
#define RBCU_EDAT_ADDR        0xF0100028     /* "RBCU Error Data Capture Register" */
#define RBCU_DBCNTL_ADDR      0xF0100030     /* "RBCU Debug Control Register" */
#define RBCU_DBGRNT_ADDR      0xF0100034     /* "RBCU Debug Grant Mask Register" */
#define RBCU_DBADR1_ADDR      0xF0100038     /* "RBCU Debug Address  1 Register" */
#define RBCU_DBADR2_ADDR      0xF010003C     /* "RBCU Debug Address 2 Register" */
#define RBCU_DBBOS_ADDR       0xF0100040     /* "RBCU Debug Bus Operation Signals Register" */
#define RBCU_DBGNTT_ADDR      0xF0100044     /* "RBCU Debug Trapped Master Register" */
#define RBCU_DBADRT_ADDR      0xF0100048     /* "RBCU Debug Trapped Address Register" */
#define RBCU_DBBOST_ADDR      0xF010004C     /* "RBCU Debug Trapped Bus Operation Signals Register" */
#define RBCU_SRC_ADDR         0xF01000FC     /* "RBCU Service Request Control Register" */


#endif /* _HAVE_TRICORE_RBCU_ADDRESSES_H_ (block "RBCU") */


