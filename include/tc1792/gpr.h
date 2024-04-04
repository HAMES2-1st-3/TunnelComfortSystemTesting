/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "GPR" of TriCore TC1792 (32 SFRs) */

#include <tc1792/gpr/addr.h>

#include <tc1792/gpr/masks.h>
#include <tc1792/gpr/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1792/gpr/types.h>
#include <tc1792/gpr/sharetypes.h>

#ifndef _HAVE_TRICORE_GPR_H_
#define _HAVE_TRICORE_GPR_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (A0, An_t, A0_ADDR);                    /* "Address Register 0" */
SFR_NOABS (A1, An_t, A1_ADDR);                    /* "Address Register 1" */
SFR_NOABS (A10, An_t, A10_ADDR);                  /* "Address Register 10" */
SFR_NOABS (A11, An_t, A11_ADDR);                  /* "Address Register 11" */
SFR_NOABS (A12, An_t, A12_ADDR);                  /* "Address Register 12" */
SFR_NOABS (A13, An_t, A13_ADDR);                  /* "Address Register 13" */
SFR_NOABS (A14, An_t, A14_ADDR);                  /* "Address Register 14" */
SFR_NOABS (A15, An_t, A15_ADDR);                  /* "Address Register 15" */
SFR_NOABS (A2, An_t, A2_ADDR);                    /* "Address Register 2" */
SFR_NOABS (A3, An_t, A3_ADDR);                    /* "Address Register 3" */
SFR_NOABS (A4, An_t, A4_ADDR);                    /* "Address Register 4" */
SFR_NOABS (A5, An_t, A5_ADDR);                    /* "Address Register 5" */
SFR_NOABS (A6, An_t, A6_ADDR);                    /* "Address Register 6" */
SFR_NOABS (A7, An_t, A7_ADDR);                    /* "Address Register 7" */
SFR_NOABS (A8, An_t, A8_ADDR);                    /* "Address Register 8" */
SFR_NOABS (A9, An_t, A9_ADDR);                    /* "Address Register 9" */
SFR_NOABS (D0, Dn_t, D0_ADDR);                    /* "Data Register 0" */
SFR_NOABS (D1, Dn_t, D1_ADDR);                    /* "Data Register 1" */
SFR_NOABS (D10, Dn_t, D10_ADDR);                  /* "Data Register 10" */
SFR_NOABS (D11, Dn_t, D11_ADDR);                  /* "Data Register 11" */
SFR_NOABS (D12, Dn_t, D12_ADDR);                  /* "Data Register 12" */
SFR_NOABS (D13, Dn_t, D13_ADDR);                  /* "Data Register 13" */
SFR_NOABS (D14, Dn_t, D14_ADDR);                  /* "Data Register 14" */
SFR_NOABS (D15, Dn_t, D15_ADDR);                  /* "Data Register 15" */
SFR_NOABS (D2, Dn_t, D2_ADDR);                    /* "Data Register 2" */
SFR_NOABS (D3, Dn_t, D3_ADDR);                    /* "Data Register 3" */
SFR_NOABS (D4, Dn_t, D4_ADDR);                    /* "Data Register 4" */
SFR_NOABS (D5, Dn_t, D5_ADDR);                    /* "Data Register 5" */
SFR_NOABS (D6, Dn_t, D6_ADDR);                    /* "Data Register 6" */
SFR_NOABS (D7, Dn_t, D7_ADDR);                    /* "Data Register 7" */
SFR_NOABS (D8, Dn_t, D8_ADDR);                    /* "Data Register 8" */
SFR_NOABS (D9, Dn_t, D9_ADDR);                    /* "Data Register 9" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_GPR_H_ (block "GPR") */


