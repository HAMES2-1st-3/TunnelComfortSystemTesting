/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_GPR_SHAREMASKS_H_
#define _HAVE_TRICORE_GPR_SHAREMASKS_H_


/****************** Masks for An_t **********************/
/*
   A0                    "Address Register 0 (AGPR) Global Address Register"
   A1                    "Address Register 1 (AGPR) Global Address Register"
   A10                   "Address Register 10 (AGPR) Stack Pointer"
   A11                   "Address Register 11 (AGPR) Return Address"
   A12                   "Address Register 12 (AGPR)"
   A13                   "Address Register 13 (AGPR)"
   A14                   "Address Register 14 (AGPR)"
   A15                   "Address Register 15 (AGPR)"
   A2                    "Address Register 2 (AGPR)"
   A3                    "Address Register 3 (AGPR)"
   A4                    "Address Register 4 (AGPR)"
   A5                    "Address Register 5 (AGPR)"
   A6                    "Address Register 6 (AGPR)"
   A7                    "Address Register 7 (AGPR)"
   A8                    "Address Register 8 (AGPR) Global Address Register"
   A9                    "Address Register 9 (AGPR) Global Address Register"
*/
/**********************************************************/

#define An_MASK                         0x00000000



/****************** Masks for Dn_t **********************/
/*
   D0                    "Data Register D0 (DGPR)"
   D1                    "Data Register D1 (DGPR)"
   D10                   "Data Register D10 (DGPR)"
   D11                   "Data Register D11 (DGPR)"
   D12                   "Data Register D12 (DGPR)"
   D13                   "Data Register D13 (DGPR)"
   D14                   "Data Register D14 (DGPR)"
   D15                   "Data Register D15 (DGPR)"
   D2                    "Data Register D2 (DGPR)"
   D3                    "Data Register D3 (DGPR)"
   D4                    "Data Register D4 (DGPR)"
   D5                    "Data Register D5 (DGPR)"
   D6                    "Data Register D6 (DGPR)"
   D7                    "Data Register D7 (DGPR)"
   D8                    "Data Register D8 (DGPR)"
   D9                    "Data Register D9 (DGPR)"
*/
/**********************************************************/

#define Dn_MASK                         0x00000000




#endif /* _HAVE_TRICORE_GPR_SHAREMASKS_H_ */

