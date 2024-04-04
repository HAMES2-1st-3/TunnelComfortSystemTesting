/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
/* Macros for (non-)absolute addressable SFRs of TriCore */

#ifndef _HAVE_TRICORE_SFR_ABSNOABS_
#define _HAVE_TRICORE_SFR_ABSNOABS_

#define _STRINGIFY(x) #x

#define SFR_NOABS(name,type,addr)         \
   __asm__ (".global       " #name );     \
   __asm__ (".set  " #name "," _STRINGIFY(addr));   \
   __asm__ (".type " #name ",@object");   \
   extern type name __attribute__((section(".sfr")))

#define SFR_ABS(name,type,addr)         \
   SFR_NOABS(name,type,addr)              \
   __attribute__ ((absdata))

#endif /* _HAVE_TRICORE_SFR_ABSNOABS_ */
