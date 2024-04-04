/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "SBCU LL" of TriCore TC1766B (14 SFRs) */

#ifndef _HAVE_TRICORE_SBCU_ADDRESSES_H_
#define _HAVE_TRICORE_SBCU_ADDRESSES_H_

#define SBCU_ID_ADDR          0xF0000108     /* "SBCU Module Identification Register" */
#define SBCU_CON_ADDR         0xF0000110     /* "SBCU Control Register" */
#define SBCU_ECON_ADDR        0xF0000120     /* "Error Control Capture Register" */
#define SBCU_EADD_ADDR        0xF0000124     /* "Error Address Capture Register" */
#define SBCU_EDAT_ADDR        0xF0000128     /* "Error Data Capture Register" */
#define SBCU_DBCNTL_ADDR      0xF0000130     /* "Debug Control Register (OCDS)" */
#define SBCU_DBGRNT_ADDR      0xF0000134     /* "Debug Grant Mask Register (OCDS)" */
#define SBCU_DBADR1_ADDR      0xF0000138     /* "Debug Address1 Register (OCDS)" */
#define SBCU_DBADR2_ADDR      0xF000013C     /* "Debug Address2 Register (OCDS)" */
#define SBCU_DBBOS_ADDR       0xF0000140     /* "Debug Bus Operation Register (OCDS)" */
#define SBCU_DBGNTT_ADDR      0xF0000144     /* "Debug Trapped Master Register (OCDS)" */
#define SBCU_DBADRT_ADDR      0xF0000148     /* "Debug Trapped Address Register (OCDS)" */
#define SBCU_DBBOST_ADDR      0xF000014C     /* "Debug Trapped Bus Operation Register (OCDS)" */
#define SBCU_SRC_ADDR         0xF00001FC     /* "SBCU Service Request Control Register" */


#endif /* _HAVE_TRICORE_SBCU_ADDRESSES_H_ (block "SBCU LL") */


