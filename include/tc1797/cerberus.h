/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "Cerberus" of TriCore TC1797 (18 SFRs) */

#include <tc1797/cerberus/addr.h>

#include <tc1797/cerberus/masks.h>
#include <tc1797/cerberus/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1797/cerberus/types.h>
#include <tc1797/cerberus/sharetypes.h>

#ifndef _HAVE_TRICORE_CERBERUS_H_
#define _HAVE_TRICORE_CERBERUS_H_

#include <tricore-abs-noabs.h>

SFR_ABS (CBS_COMDATA, CBS_COMDATA_t, CBS_COMDATA_ADDR); /* "Communication Mode Data Register" */
SFR_ABS (CBS_ICTSA, CBS_ICTSA_t, CBS_ICTSA_ADDR); /* "Internally Controlled Trace Source Register" */
SFR_ABS (CBS_ICTTA, CBS_ICTTA_t, CBS_ICTTA_ADDR); /* "Internally Controlled Trace Destination Register" */
SFR_ABS (CBS_INTMOD, CBS_INTMOD_t, CBS_INTMOD_ADDR); /* "Internal Mode Status and Control Register" */
SFR_ABS (CBS_IOSR, CBS_IOSR_t, CBS_IOSR_ADDR);    /* "IOClient Status and Control Register" */
SFR_ABS (CBS_JTAGID, CBS_JTAGID_t, CBS_JTAGID_ADDR); /* "JTAG Device Identification Register" */
SFR_ABS (CBS_MCDBBS, CBS_MCDBBS_t, CBS_MCDBBS_ADDR); /* "Break Bus Switch Configuration Register" */
SFR_ABS (CBS_MCDBBSS, CBS_MCDBBSS_t, CBS_MCDBBSS_ADDR); /* "Break Bus Switch Status Register" */
SFR_ABS (CBS_MCDSSG, CBS_MCDSSG_t, CBS_MCDSSG_ADDR); /* "Suspend Source Status and Control Register" */
SFR_ABS (CBS_MCDSSGC, CBS_MCDSSGC_t, CBS_MCDSSGC_ADDR); /* "Suspend Signal Target Control Register" */
SFR_ABS (CBS_OCNTRL, CBS_OCNTRL_t, CBS_OCNTRL_ADDR); /* "OSCU Control Register" */
SFR_ABS (CBS_OEC, CBS_OEC_t, CBS_OEC_ADDR);       /* "OCDS Enable Control Register" */
SFR_ABS (CBS_OSTATE, CBS_OSTATE_t, CBS_OSTATE_ADDR); /* "OSCU Status Register" */
SFR_ABS (CBS_SRC0, CBS_SRCm_t, CBS_SRC0_ADDR);    /* "Service Request Node1 Control Register" */
SFR_ABS (CBS_SRC1, CBS_SRCm_t, CBS_SRC1_ADDR);    /* "Service Request Node2 Control Register" */
SFR_ABS (CBS_TRIG, CBS_TRIG_t, CBS_TRIG_ADDR);    /* "Trigger to Host Register" */
SFR_ABS (CBS_TRIGC, CBS_TRIGC_t, CBS_TRIGC_ADDR); /* "Clear Trigger to Host Register" */
SFR_ABS (CBS_TRIGS, CBS_TRIGS_t, CBS_TRIGS_ADDR); /* "Set Trigger to Host Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_CERBERUS_H_ (block "Cerberus") */


