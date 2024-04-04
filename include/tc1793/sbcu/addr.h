/* (c) HighTec EDV-Systeme GmbH */

/* block "SBCU" of TriCore TC1793 (15 SFRs) */

#ifndef _HAVE_TRICORE_SBCU_ADDRESSES_H_
#define _HAVE_TRICORE_SBCU_ADDRESSES_H_

#define SBCU_ID_ADDR          0xF0000108     /* "Module Identification Register" */
#define SBCU_CON_ADDR         0xF0000110     /* "SBCU Control Register" */
#define SBCU_ECON_ADDR        0xF0000120     /* "SBCU Error Control Capture Register" */
#define SBCU_EADD_ADDR        0xF0000124     /* "SBCU Error Address Capture Register" */
#define SBCU_EDAT_ADDR        0xF0000128     /* "SBCU Error Data Capture Register" */
#define SBCU_DBCNTL_ADDR      0xF0000130     /* "SBCU Debug Control Register" */
#define SBCU_DBGRNT_ADDR      0xF0000134     /* "SBCU Debug Grant Mask Register" */
#define SBCU_DBADR1_ADDR      0xF0000138     /* "SBCU Debug Address 1 Register" */
#define SBCU_DBADR2_ADDR      0xF000013C     /* "SBCU Debug Address 2 Register" */
#define SBCU_DBBOS_ADDR       0xF0000140     /* "SBCU Debug Bus Operation Signals Register" */
#define SBCU_DBGNTT_ADDR      0xF0000144     /* "SBCU Debug Trapped Master Register" */
#define SBCU_DBADRT_ADDR      0xF0000148     /* "SBCU Debug Trapped Address Register" */
#define SBCU_DBBOST_ADDR      0xF000014C     /* "SBCU Debug Trapped Bus Operation Signals Register" */
#define SBCU_DBDAT_ADDR       0xF0000150     /* "SBCU Debug Data Status Register" */
#define SBCU_SRC_ADDR         0xF00001FC     /* "SBCU Service Request Control Register" */


#endif /* _HAVE_TRICORE_SBCU_ADDRESSES_H_ (block "SBCU") */


