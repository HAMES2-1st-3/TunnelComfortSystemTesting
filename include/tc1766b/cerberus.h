/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "Cerberus" of TriCore TC1766B (14 SFRs) */

#include <tc1766b/cerberus/addr.h>

#include <tc1766b/cerberus/masks.h>
#include <tc1766b/cerberus/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1766b/cerberus/types.h>
#include <tc1766b/cerberus/sharetypes.h>

#ifndef _HAVE_TRICORE_CERBERUS_H_
#define _HAVE_TRICORE_CERBERUS_H_

#include <tricore-abs-noabs.h>

SFR_ABS (CBS_COMDATA, CBS_COMDATA_t, CBS_COMDATA_ADDR); /* "Cerberus Communication Mode Data Register" */
SFR_ABS (CBS_ICTSA, CBS_ICTSA_t, CBS_ICTSA_ADDR); /* "Cerberus Internal Controlled Trace Source Address Register" */
SFR_ABS (CBS_ICTTA, CBS_ICTTA_t, CBS_ICTTA_ADDR); /* "Cerberus Internal Controlled Trace Target Address Register" */
SFR_ABS (CBS_INTMOD, CBS_INTMOD_t, CBS_INTMOD_ADDR); /* "Cerberus Internal Mode Status and Control Register" */
SFR_ABS (CBS_IOSR, CBS_IOSR_t, CBS_IOSR_ADDR);    /* "Cerberus Status Register" */
SFR_ABS (CBS_JDP_ID, CBS_JDP_ID_t, CBS_JDP_ID_ADDR); /* "Module Identification Register" */
SFR_ABS (CBS_MCDBBS, CBS_MCDBBS_t, CBS_MCDBBS_ADDR); /* "Break Bus Switch Configuration Register" */
SFR_ABS (CBS_MCDBBSS, CBS_MCDBBSS_t, CBS_MCDBBSS_ADDR); /* "Cerberus Break Bus Switch Status Register" */
SFR_ABS (CBS_MCDSSG, CBS_MCDSSG_t, CBS_MCDSSG_ADDR); /* "Cerberus Suspend Signal Generation Status and Control Register" */
SFR_ABS (CBS_MCDSSGC, CBS_MCDSSGC_t, CBS_MCDSSGC_ADDR); /* "Cerberus Suspend Signal Generation Configuration Register" */
SFR_ABS (CBS_OCNTRL, CBS_OCNTRL_t, CBS_OCNTRL_ADDR); /* "Cerberus OSCU Configuration and Control Register" */
SFR_ABS (CBS_OEC, CBS_OEC_t, CBS_OEC_ADDR);       /* "Cerberus OCDS Enable Control Register" */
SFR_ABS (CBS_OSTATE, CBS_OSTATE_t, CBS_OSTATE_ADDR); /* "Cerberus OSCU Status Register" */
SFR_ABS (CBS_SRC, CBS_SRC_t, CBS_SRC_ADDR);       /* "Cerberus Service Request Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_CERBERUS_H_ (block "Cerberus") */


