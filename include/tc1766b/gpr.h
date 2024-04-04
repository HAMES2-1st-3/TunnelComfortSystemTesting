/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "GPR" of TriCore TC1766B (32 SFRs) */

#include <tc1766b/gpr/addr.h>

#include <tc1766b/gpr/masks.h>
#include <tc1766b/gpr/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1766b/gpr/types.h>
#include <tc1766b/gpr/sharetypes.h>

#ifndef _HAVE_TRICORE_GPR_H_
#define _HAVE_TRICORE_GPR_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (A0, An_t, A0_ADDR);                    /* "Address Register 0 (AGPR) Global Address Register" */
SFR_NOABS (A1, An_t, A1_ADDR);                    /* "Address Register 1 (AGPR) Global Address Register" */
SFR_NOABS (A10, An_t, A10_ADDR);                  /* "Address Register 10 (AGPR) Stack Pointer" */
SFR_NOABS (A11, An_t, A11_ADDR);                  /* "Address Register 11 (AGPR) Return Address" */
SFR_NOABS (A12, An_t, A12_ADDR);                  /* "Address Register 12 (AGPR)" */
SFR_NOABS (A13, An_t, A13_ADDR);                  /* "Address Register 13 (AGPR)" */
SFR_NOABS (A14, An_t, A14_ADDR);                  /* "Address Register 14 (AGPR)" */
SFR_NOABS (A15, An_t, A15_ADDR);                  /* "Address Register 15 (AGPR)" */
SFR_NOABS (A2, An_t, A2_ADDR);                    /* "Address Register 2 (AGPR)" */
SFR_NOABS (A3, An_t, A3_ADDR);                    /* "Address Register 3 (AGPR)" */
SFR_NOABS (A4, An_t, A4_ADDR);                    /* "Address Register 4 (AGPR)" */
SFR_NOABS (A5, An_t, A5_ADDR);                    /* "Address Register 5 (AGPR)" */
SFR_NOABS (A6, An_t, A6_ADDR);                    /* "Address Register 6 (AGPR)" */
SFR_NOABS (A7, An_t, A7_ADDR);                    /* "Address Register 7 (AGPR)" */
SFR_NOABS (A8, An_t, A8_ADDR);                    /* "Address Register 8 (AGPR) Global Address Register" */
SFR_NOABS (A9, An_t, A9_ADDR);                    /* "Address Register 9 (AGPR) Global Address Register" */
SFR_NOABS (D0, Dn_t, D0_ADDR);                    /* "Data Register D0 (DGPR)" */
SFR_NOABS (D1, Dn_t, D1_ADDR);                    /* "Data Register D1 (DGPR)" */
SFR_NOABS (D10, Dn_t, D10_ADDR);                  /* "Data Register D10 (DGPR)" */
SFR_NOABS (D11, Dn_t, D11_ADDR);                  /* "Data Register D11 (DGPR)" */
SFR_NOABS (D12, Dn_t, D12_ADDR);                  /* "Data Register D12 (DGPR)" */
SFR_NOABS (D13, Dn_t, D13_ADDR);                  /* "Data Register D13 (DGPR)" */
SFR_NOABS (D14, Dn_t, D14_ADDR);                  /* "Data Register D14 (DGPR)" */
SFR_NOABS (D15, Dn_t, D15_ADDR);                  /* "Data Register D15 (DGPR)" */
SFR_NOABS (D2, Dn_t, D2_ADDR);                    /* "Data Register D2 (DGPR)" */
SFR_NOABS (D3, Dn_t, D3_ADDR);                    /* "Data Register D3 (DGPR)" */
SFR_NOABS (D4, Dn_t, D4_ADDR);                    /* "Data Register D4 (DGPR)" */
SFR_NOABS (D5, Dn_t, D5_ADDR);                    /* "Data Register D5 (DGPR)" */
SFR_NOABS (D6, Dn_t, D6_ADDR);                    /* "Data Register D6 (DGPR)" */
SFR_NOABS (D7, Dn_t, D7_ADDR);                    /* "Data Register D7 (DGPR)" */
SFR_NOABS (D8, Dn_t, D8_ADDR);                    /* "Data Register D8 (DGPR)" */
SFR_NOABS (D9, Dn_t, D9_ADDR);                    /* "Data Register D9 (DGPR)" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_GPR_H_ (block "GPR") */


