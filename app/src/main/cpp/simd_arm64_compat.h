// app/src/main/cpp/simd_arm64_compat.h
#pragma once

#if defined(__aarch64__) || defined(_M_ARM64)
  #define SIMDE_ENABLE_NATIVE_ALIASES 1

  // Define Clang x86 compiler intrinsic header guards to prevent
  // Clang's x86 headers from being included and throwing error on ARM64
  #ifndef __IMMINTRIN_H
  #define __IMMINTRIN_H 1
  #endif
  #ifndef __XMMINTRIN_H
  #define __XMMINTRIN_H 1
  #endif
  #ifndef __EMMINTRIN_H
  #define __EMMINTRIN_H 1
  #endif
  #ifndef __PMMINTRIN_H
  #define __PMMINTRIN_H 1
  #endif
  #ifndef __TMMINTRIN_H
  #define __TMMINTRIN_H 1
  #endif
  #ifndef __SMMINTRIN_H
  #define __SMMINTRIN_H 1
  #endif
  #ifndef __NMMINTRIN_H
  #define __NMMINTRIN_H 1
  #endif
  #ifndef __WMMINTRIN_H
  #define __WMMINTRIN_H 1
  #endif
  #ifndef __MMINTRIN_H
  #define __MMINTRIN_H 1
  #endif
  #ifndef __AVXINTRIN_H
  #define __AVXINTRIN_H 1
  #endif
  #ifndef __AVX2INTRIN_H
  #define __AVX2INTRIN_H 1
  #endif
  #ifndef __X86GPRINTRIN_H
  #define __X86GPRINTRIN_H 1
  #endif
  #ifndef __INTRIN_H
  #define __INTRIN_H 1
  #endif

  #if __has_include("thirdparty/simde/simde/x86/avx2.h")
    #include "thirdparty/simde/simde/x86/avx2.h"
    #include "thirdparty/simde/simde/x86/sse4.1.h"
    #include "thirdparty/simde/simde/x86/sse2.h"
  #elif __has_include("simde/x86/avx2.h")
    #include "simde/x86/avx2.h"
    #include "simde/x86/sse4.1.h"
    #include "simde/x86/sse2.h"
  #else
    #include "thirdparty/simde/x86/avx2.h"
    #include "thirdparty/simde/x86/sse4.1.h"
    #include "thirdparty/simde/x86/sse2.h"
  #endif

  #include <arm_neon.h>
  #ifdef __cplusplus
  #include <cstdint>
  #include <cstring>
  #else
  #include <stdint.h>
  #include <string.h>
  #endif

  #ifndef _mm_pause
  #define _mm_pause() __asm__ __volatile__("yield" ::: "memory")
  #endif

  // PS2 Emotion Engine Float Clamping (Clamps IEEE-754 Inf/NaN to +/- MAX_FLOAT 0x7F7FFFFF)
  static inline __attribute__((always_inline)) float32x4_t ps2_neon_sanitize_f32x4(float32x4_t v) {
      const uint32x4_t bits = vreinterpretq_u32_f32(v);
      const uint32x4_t exp_mask = vdupq_n_u32(0x7F800000u);
      const uint32x4_t max_mag  = vdupq_n_u32(0x7F7FFFFFu);
      const uint32x4_t sign_bit = vandq_u32(bits, vdupq_n_u32(0x80000000u));
      // Check if exponent == 0xFF (Inf or NaN)
      const uint32x4_t is_inf_or_nan = vceqq_u32(vandq_u32(bits, exp_mask), exp_mask);
      const uint32x4_t clamped = vorrq_u32(sign_bit, max_mag);
      return vreinterpretq_f32_u32(vbslq_u32(is_inf_or_nan, clamped, bits));
  }

  // Scalar PS2 float sanitizer for FPU ADD.S / SUB.S / MUL.S / DIV.S / RSQRT.S
  static inline __attribute__((always_inline)) float ps2_sanitize_scalar_f32(float x) {
      uint32_t u;
      memcpy(&u, &x, sizeof(u));
      if ((u & 0x7F800000u) == 0x7F800000u) {
          u = (u & 0x80000000u) | 0x7F7FFFFFu;
          memcpy(&x, &u, sizeof(x));
      }
      return x;
  }

  // Hardware-accelerated VU0/VU1 4x4 Matrix-Vector Multiply using ARM64 NEON FMLA
  static inline __attribute__((always_inline)) float32x4_t ps2_vu_mul_mat4_vec4(
      float32x4_t col0, float32x4_t col1, float32x4_t col2, float32x4_t col3, float32x4_t vec)
  {
      float32x4_t acc = vmulq_laneq_f32(col0, vec, 0);
      acc = vfmaq_laneq_f32(acc, col1, vec, 1);
      acc = vfmaq_laneq_f32(acc, col2, vec, 2);
      acc = vfmaq_laneq_f32(acc, col3, vec, 3);
      return ps2_neon_sanitize_f32x4(acc);
  }

  // PS2 MMI PMULTH (Packed Multiply Halfword) exact ARM64 NEON implementation
  static inline __attribute__((always_inline)) int32x4x2_t ps2_mmi_pmulth(int16x8_t a, int16x8_t b) {
      int32x4x2_t res;
      res.val[0] = vmull_s16(vget_low_s16(a), vget_low_s16(b));
      res.val[1] = vmull_high_s16(a, b);
      return res;
  }
#else
  #include <immintrin.h>
  #include <smmintrin.h>
  #include <emmintrin.h>
#endif
