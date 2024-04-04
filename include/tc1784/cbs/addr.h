/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "CBS" of TriCore TC1784 (19 SFRs) */

#ifndef _HAVE_TRICORE_CBS_ADDRESSES_H_
#define _HAVE_TRICORE_CBS_ADDRESSES_H_

#define CBS_JDPID_ADDR        0xF0000408     /* "Module Identification Register" */
#define CBS_JTAGID_ADDR       0xF0000464     /* "JTAG Device Identification Register" */
#define CBS_COMDATA_ADDR      0xF0000468     /* "Communication Mode Data Register" */
#define CBS_IOSR_ADDR         0xF000046C     /* "IOClient Status and Control Register" */
#define CBS_MCDBBS_ADDR       0xF0000470     /* "Break Bus Switch Configuration Register" */
#define CBS_MCDSSG_ADDR       0xF0000474     /* "Suspend Source Status and Control Register" */
#define CBS_OEC_ADDR          0xF0000478     /* "OCDS Enable Control Register" */
#define CBS_OCNTRL_ADDR       0xF000047C     /* "OSCU Control Register" */
#define CBS_OSTATE_ADDR       0xF0000480     /* "OSCU Status Register" */
#define CBS_INTMOD_ADDR       0xF0000484     /* "Internal Mode Status and Control Register" */
#define CBS_ICTSA_ADDR        0xF0000488     /* "Internally Controlled Trace Source Register" */
#define CBS_ICTTA_ADDR        0xF000048C     /* "Internally Controlled Trace Destination Register" */
#define CBS_MCDBBSS_ADDR      0xF0000490     /* "Break Bus Switch Status Register" */
#define CBS_MCDSSGC_ADDR      0xF0000494     /* "Suspend Signal Target Control Register" */
#define CBS_TRIGS_ADDR        0xF00004A0     /* "Set Trigger to Host Register" */
#define CBS_TRIGC_ADDR        0xF00004A4     /* "Clear Trigger to Host Register" */
#define CBS_TRIG_ADDR         0xF00004A8     /* "Trigger to Host Register" */
#define CBS_SRC1_ADDR         0xF00004F8     /* "Service Request Node2 Control Register" */
#define CBS_SRC0_ADDR         0xF00004FC     /* "Service Request Node1 Control Register" */


#endif /* _HAVE_TRICORE_CBS_ADDRESSES_H_ (block "CBS") */


