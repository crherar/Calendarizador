/* This file is automatically generated.  DO NOT EDIT! */
/* Generated from: 	NetBSD: mknative-gcc,v 1.58 2011/07/02 13:25:05 mrg Exp  */
/* Generated from: NetBSD: mknative.common,v 1.9 2007/02/05 18:26:01 apb Exp  */

#undef SYSROOT_SUFFIX_SPEC
#define SYSROOT_SUFFIX_SPEC "" \
"%{mb:" \
  "%{m3|m4-nofpu|m4-100-nofpu|m4-200-nofpu|m4-400|m4-500|m4-340|m4-300-nofpu|m4al|m4a-nofpu:/mb/m3;" \
  "m3e|m4-single-only|m4-100-single-only|m4-200-single-only|m4-300-single-only|m4a-single-only:/mb/m3e;" \
  "m4|m4-100|m4-200|m4-300|m4a:/mb/m4;" \
  ":/mb};" \
":" \
  "%{m3|m4-nofpu|m4-100-nofpu|m4-200-nofpu|m4-400|m4-500|m4-340|m4-300-nofpu|m4al|m4a-nofpu:/m3;" \
  "m3e|m4-single-only|m4-100-single-only|m4-200-single-only|m4-300-single-only|m4a-single-only:/m3e;" \
  "m4|m4-100|m4-200|m4-300|m4a:/m4;" \
  ":}}"
