/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "Buses" of TriCore TC1767 (23 SFRs) */

#ifndef _HAVE_TRICORE_BUSES_ADDRESSES_H_
#define _HAVE_TRICORE_BUSES_ADDRESSES_H_

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
#define LBCU_ID_ADDR          0xF87FFE08     /* "Module Identification Register" */
#define LBCU_LEATT_ADDR       0xF87FFE20     /* "LBCU LMB Error Attribute Register" */
#define LBCU_LEADDR_ADDR      0xF87FFE24     /* "LBCU LMB Error Address Register" */
#define LBCU_LEDATL_ADDR      0xF87FFE28     /* "LBCU LMB Error Data Low Register" */
#define LBCU_LEDATH_ADDR      0xF87FFE2C     /* "LBCU LMB Error Data High Register" */
#define LBCU_SRC_ADDR         0xF87FFEFC     /* "LBCU Service Request Control Register" */
#define LFI_ID_ADDR           0xF87FFF08     /* "Module Identification Register" */
#define LFI_CON_ADDR          0xF87FFF10     /* "LFI Configuration Register" */


#endif /* _HAVE_TRICORE_BUSES_ADDRESSES_H_ (block "Buses") */


