#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cftraw_CnvMbRAW8toARGB
// Address: 0x360d78 - 0x3634e0
void cftraw_CnvMbRAW8toARGB_0x360d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cftraw_CnvMbRAW8toARGB_0x360d78");
#endif

    ctx->pc = 0x360d78u;

    // 0x360d78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x360d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x360d7c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x360d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d80: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x360d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x360d84: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x360d84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x360d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x360d8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x360d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x360d90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x360d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x360d94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x360d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x360d98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x360d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x360d9c: 0x15c03c  dsll32      $t8, $s5, 0
    ctx->pc = 0x360d9cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 21) << (32 + 0));
    // 0x360da0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x360da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x360da4: 0x346400ff  ori         $a0, $v1, 0xFF
    ctx->pc = 0x360da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x360da8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x360da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x360dac: 0x2783c  dsll32      $t7, $v0, 0
    ctx->pc = 0x360dacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) << (32 + 0));
    // 0x360db0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x360db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x360db4: 0x18c03e  dsrl32      $t8, $t8, 0
    ctx->pc = 0x360db4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) >> (32 + 0));
    // 0x360db8: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x360db8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x360dbc: 0x316b0000  andi        $t3, $t3, 0x0
    ctx->pc = 0x360dbcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)0);
    // 0x360dc0: 0x716b5b89  pcpyld      $t3, $t3, $t3
    ctx->pc = 0x360dc0u;
    SET_GPR_VEC(ctx, 11, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 11)));
    // 0x360dc4: 0x700b5ee9  pcpyh       $t3, $t3
    ctx->pc = 0x360dc4u;
    { __m128i src = GPR_VEC(ctx, 11); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 11, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x360dc8: 0x67100100  daddiu      $s0, $t8, 0x100
    ctx->pc = 0x360dc8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 24) + (int64_t)(int32_t)256);
    // 0x360dcc: 0x70636389  pcpyld      $t4, $v1, $v1
    ctx->pc = 0x360dccu;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x360dd0: 0xcf000000  pref        0x00, 0x0($t8)
    ctx->pc = 0x360dd0u;
    // PREF instruction (ignored)
    // 0x360dd4: 0xcf000100  pref        0x00, 0x100($t8)
    ctx->pc = 0x360dd4u;
    // PREF instruction (ignored)
    // 0x360dd8: 0xcf000140  pref        0x00, 0x140($t8)
    ctx->pc = 0x360dd8u;
    // PREF instruction (ignored)
    // 0x360ddc: 0x24540080  addiu       $s4, $v0, 0x80
    ctx->pc = 0x360ddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x360de0: 0x93070000  lbu         $a3, 0x0($t8)
    ctx->pc = 0x360de0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x360de4: 0x67190020  daddiu      $t9, $t8, 0x20
    ctx->pc = 0x360de4u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 24) + (int64_t)(int32_t)32);
    // 0x360de8: 0x93080011  lbu         $t0, 0x11($t8)
    ctx->pc = 0x360de8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 17)));
    // 0x360dec: 0x92120000  lbu         $s2, 0x0($s0)
    ctx->pc = 0x360decu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x360df0: 0x92130040  lbu         $s3, 0x40($s0)
    ctx->pc = 0x360df0u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x360df4: 0x93030001  lbu         $v1, 0x1($t8)
    ctx->pc = 0x360df4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x360df8: 0x93110010  lbu         $s1, 0x10($t8)
    ctx->pc = 0x360df8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x360dfc: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x360dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x360e00: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x360e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x360e04: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x360e04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x360e08: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x360e08u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x360e0c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x360e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x360e10: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x360e10u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x360e14: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x360e14u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x360e18: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x360e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x360e1c: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x360e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x360e20: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x360e20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x360e24: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x360e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x360e28: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x360e28u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x360e2c: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x360e2cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x360e30: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x360e30u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x360e34: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x360e34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x360e38: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x360e38u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x360e3c: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x360e3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x360e40: 0x92120001  lbu         $s2, 0x1($s0)
    ctx->pc = 0x360e40u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x360e44: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x360e44u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x360e48: 0x92130041  lbu         $s3, 0x41($s0)
    ctx->pc = 0x360e48u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x360e4c: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x360e4cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x360e50: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x360e50u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x360e54: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x360e54u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x360e58: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x360e58u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x360e5c: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x360e5cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x360e60: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x360e60u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x360e64: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x360e64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x360e68: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x360e68u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x360e6c: 0x93110012  lbu         $s1, 0x12($t8)
    ctx->pc = 0x360e6cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 18)));
    // 0x360e70: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x360e70u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x360e74: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x360e74u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x360e78: 0x93030003  lbu         $v1, 0x3($t8)
    ctx->pc = 0x360e78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x360e7c: 0x93070002  lbu         $a3, 0x2($t8)
    ctx->pc = 0x360e7cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x360e80: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x360e80u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x360e84: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x360e84u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x360e88: 0x93080013  lbu         $t0, 0x13($t8)
    ctx->pc = 0x360e88u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 19)));
    // 0x360e8c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x360e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x360e90: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x360e90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x360e94: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x360e94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x360e98: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x360e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x360e9c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x360e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x360ea0: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x360ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x360ea4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x360ea4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x360ea8: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x360ea8u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x360eac: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x360eacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x360eb0: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x360eb0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x360eb4: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x360eb4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x360eb8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x360eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x360ebc: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x360ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x360ec0: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x360ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x360ec4: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x360ec4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x360ec8: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x360ec8u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x360ecc: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x360eccu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x360ed0: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x360ed0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x360ed4: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x360ed4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x360ed8: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x360ed8u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x360edc: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x360edcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x360ee0: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x360ee0u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x360ee4: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x360ee4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x360ee8: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x360ee8u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x360eec: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x360eecu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x360ef0: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x360ef0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x360ef4: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x360ef4u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x360ef8: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x360ef8u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x360efc: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x360efcu;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x360f00: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x360f00u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x360f04: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x360f04u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x360f08: 0x7de30000  sq          $v1, 0x0($t7)
    ctx->pc = 0x360f08u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 3));
    // 0x360f0c: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x360f0cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x360f10: 0x7de30040  sq          $v1, 0x40($t7)
    ctx->pc = 0x360f10u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 64), GPR_VEC(ctx, 3));
    // 0x360f14: 0x93070004  lbu         $a3, 0x4($t8)
    ctx->pc = 0x360f14u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x360f18: 0x93080015  lbu         $t0, 0x15($t8)
    ctx->pc = 0x360f18u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 21)));
    // 0x360f1c: 0x92120002  lbu         $s2, 0x2($s0)
    ctx->pc = 0x360f1cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x360f20: 0x92130042  lbu         $s3, 0x42($s0)
    ctx->pc = 0x360f20u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x360f24: 0x93030005  lbu         $v1, 0x5($t8)
    ctx->pc = 0x360f24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 5)));
    // 0x360f28: 0x93110014  lbu         $s1, 0x14($t8)
    ctx->pc = 0x360f28u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x360f2c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x360f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x360f30: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x360f30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x360f34: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x360f34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x360f38: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x360f38u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x360f3c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x360f3cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x360f40: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x360f40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x360f44: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x360f44u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x360f48: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x360f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x360f4c: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x360f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x360f50: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x360f50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x360f54: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x360f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x360f58: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x360f58u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x360f5c: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x360f5cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x360f60: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x360f60u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x360f64: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x360f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x360f68: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x360f68u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x360f6c: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x360f6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x360f70: 0x92120003  lbu         $s2, 0x3($s0)
    ctx->pc = 0x360f70u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x360f74: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x360f74u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x360f78: 0x92130043  lbu         $s3, 0x43($s0)
    ctx->pc = 0x360f78u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
    // 0x360f7c: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x360f7cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x360f80: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x360f80u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x360f84: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x360f84u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x360f88: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x360f88u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x360f8c: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x360f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x360f90: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x360f90u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x360f94: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x360f94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x360f98: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x360f98u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x360f9c: 0x93110016  lbu         $s1, 0x16($t8)
    ctx->pc = 0x360f9cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 22)));
    // 0x360fa0: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x360fa0u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x360fa4: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x360fa4u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x360fa8: 0x93030007  lbu         $v1, 0x7($t8)
    ctx->pc = 0x360fa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 7)));
    // 0x360fac: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x360facu;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x360fb0: 0x93070006  lbu         $a3, 0x6($t8)
    ctx->pc = 0x360fb0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 6)));
    // 0x360fb4: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x360fb4u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x360fb8: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x360fb8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x360fbc: 0x93080017  lbu         $t0, 0x17($t8)
    ctx->pc = 0x360fbcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 23)));
    // 0x360fc0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x360fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x360fc4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x360fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x360fc8: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x360fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x360fcc: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x360fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x360fd0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x360fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x360fd4: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x360fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x360fd8: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x360fd8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x360fdc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x360fdcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x360fe0: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x360fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x360fe4: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x360fe4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x360fe8: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x360fe8u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x360fec: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x360fecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x360ff0: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x360ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x360ff4: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x360ff4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x360ff8: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x360ff8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x360ffc: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x360ffcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361000: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x361000u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361004: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x361004u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x361008: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361008u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36100c: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x36100cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361010: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x361010u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x361014: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361014u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361018: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x361018u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x36101c: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x36101cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361020: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x361020u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361024: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x361024u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x361028: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x361028u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x36102c: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x36102cu;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x361030: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x361030u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x361034: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x361034u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x361038: 0x7de30010  sq          $v1, 0x10($t7)
    ctx->pc = 0x361038u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 16), GPR_VEC(ctx, 3));
    // 0x36103c: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x36103cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x361040: 0x7de30050  sq          $v1, 0x50($t7)
    ctx->pc = 0x361040u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 80), GPR_VEC(ctx, 3));
    // 0x361044: 0x93070008  lbu         $a3, 0x8($t8)
    ctx->pc = 0x361044u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x361048: 0x93080019  lbu         $t0, 0x19($t8)
    ctx->pc = 0x361048u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 25)));
    // 0x36104c: 0x92120004  lbu         $s2, 0x4($s0)
    ctx->pc = 0x36104cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x361050: 0x92130044  lbu         $s3, 0x44($s0)
    ctx->pc = 0x361050u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x361054: 0x93030009  lbu         $v1, 0x9($t8)
    ctx->pc = 0x361054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 9)));
    // 0x361058: 0x93110018  lbu         $s1, 0x18($t8)
    ctx->pc = 0x361058u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x36105c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x36105cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361060: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x361060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361064: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361064u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361068: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361068u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x36106c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x36106cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x361070: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x361070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361074: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x361074u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361078: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x361078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36107c: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x36107cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x361080: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x361080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361084: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361088: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361088u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x36108c: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x36108cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x361090: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361090u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361094: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361098: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361098u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36109c: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x36109cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3610a0: 0x92120005  lbu         $s2, 0x5($s0)
    ctx->pc = 0x3610a0u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x3610a4: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x3610a4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3610a8: 0x92130045  lbu         $s3, 0x45($s0)
    ctx->pc = 0x3610a8u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x3610ac: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x3610acu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3610b0: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x3610b0u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3610b4: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x3610b4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3610b8: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x3610b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3610bc: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x3610bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3610c0: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3610c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3610c4: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3610c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3610c8: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3610c8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3610cc: 0x9311001a  lbu         $s1, 0x1A($t8)
    ctx->pc = 0x3610ccu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 26)));
    // 0x3610d0: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x3610d0u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x3610d4: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x3610d4u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x3610d8: 0x9303000b  lbu         $v1, 0xB($t8)
    ctx->pc = 0x3610d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 11)));
    // 0x3610dc: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x3610dcu;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x3610e0: 0x9307000a  lbu         $a3, 0xA($t8)
    ctx->pc = 0x3610e0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 10)));
    // 0x3610e4: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x3610e4u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x3610e8: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x3610e8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x3610ec: 0x9308001b  lbu         $t0, 0x1B($t8)
    ctx->pc = 0x3610ecu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 27)));
    // 0x3610f0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3610f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3610f4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3610f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3610f8: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x3610f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3610fc: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3610fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361100: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361104: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361104u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361108: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361108u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x36110c: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x36110cu;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x361110: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x361110u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x361114: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361114u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361118: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361118u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x36111c: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x36111cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361120: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x361120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361124: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361124u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361128: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361128u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x36112c: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x36112cu;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x361130: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361130u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361134: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361134u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361138: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x361138u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x36113c: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x36113cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361140: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x361140u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x361144: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361144u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361148: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x361148u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x36114c: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x36114cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361150: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x361150u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361154: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x361154u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x361158: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x361158u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x36115c: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x36115cu;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x361160: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x361160u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x361164: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x361164u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x361168: 0x7de30020  sq          $v1, 0x20($t7)
    ctx->pc = 0x361168u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 32), GPR_VEC(ctx, 3));
    // 0x36116c: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x36116cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x361170: 0x7de30060  sq          $v1, 0x60($t7)
    ctx->pc = 0x361170u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 96), GPR_VEC(ctx, 3));
    // 0x361174: 0x9307000c  lbu         $a3, 0xC($t8)
    ctx->pc = 0x361174u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x361178: 0x9308001d  lbu         $t0, 0x1D($t8)
    ctx->pc = 0x361178u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 29)));
    // 0x36117c: 0x92120006  lbu         $s2, 0x6($s0)
    ctx->pc = 0x36117cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x361180: 0x92130046  lbu         $s3, 0x46($s0)
    ctx->pc = 0x361180u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x361184: 0x9303000d  lbu         $v1, 0xD($t8)
    ctx->pc = 0x361184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 13)));
    // 0x361188: 0x9311001c  lbu         $s1, 0x1C($t8)
    ctx->pc = 0x361188u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 28)));
    // 0x36118c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x36118cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361190: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x361190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361194: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361194u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361198: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361198u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x36119c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x36119cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3611a0: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3611a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3611a4: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3611a4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3611a8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3611a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3611ac: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3611acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3611b0: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x3611b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3611b4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3611b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3611b8: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x3611b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3611bc: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x3611bcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x3611c0: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x3611c0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x3611c4: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x3611c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x3611c8: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x3611c8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3611cc: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x3611ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3611d0: 0x92120007  lbu         $s2, 0x7($s0)
    ctx->pc = 0x3611d0u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3611d4: 0x92130047  lbu         $s3, 0x47($s0)
    ctx->pc = 0x3611d4u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x3611d8: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x3611d8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3611dc: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x3611dcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3611e0: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x3611e0u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3611e4: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x3611e4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3611e8: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x3611e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3611ec: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x3611ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3611f0: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3611f0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3611f4: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3611f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3611f8: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3611f8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3611fc: 0x9311001e  lbu         $s1, 0x1E($t8)
    ctx->pc = 0x3611fcu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 30)));
    // 0x361200: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x361200u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361204: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361204u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361208: 0x9303000f  lbu         $v1, 0xF($t8)
    ctx->pc = 0x361208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 15)));
    // 0x36120c: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x36120cu;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361210: 0x9307000e  lbu         $a3, 0xE($t8)
    ctx->pc = 0x361210u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 14)));
    // 0x361214: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x361214u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361218: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361218u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x36121c: 0x9308001f  lbu         $t0, 0x1F($t8)
    ctx->pc = 0x36121cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 31)));
    // 0x361220: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x361220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361224: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361224u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361228: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x361228u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x36122c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x36122cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361230: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361234: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361234u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361238: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361238u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x36123c: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x36123cu;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x361240: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x361240u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x361244: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361244u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361248: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361248u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x36124c: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x36124cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361250: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x361250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361254: 0x66100008  daddiu      $s0, $s0, 0x8
    ctx->pc = 0x361254u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)8);
    // 0x361258: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361258u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36125c: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x36125cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361260: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x361260u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x361264: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361264u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361268: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361268u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36126c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x36126cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361270: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361270u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361274: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x361274u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x361278: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361278u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x36127c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x36127cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361280: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361280u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361284: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x361284u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361288: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x361288u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x36128c: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x36128cu;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361290: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x361290u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x361294: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x361294u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x361298: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x361298u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x36129c: 0x7de30030  sq          $v1, 0x30($t7)
    ctx->pc = 0x36129cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 48), GPR_VEC(ctx, 3));
    // 0x3612a0: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x3612a0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x3612a4: 0x7de30070  sq          $v1, 0x70($t7)
    ctx->pc = 0x3612a4u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 112), GPR_VEC(ctx, 3));
    // 0x3612a8: 0x14783c  dsll32      $t7, $s4, 0
    ctx->pc = 0x3612a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) << (32 + 0));
    // 0x3612ac: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x3612acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x3612b0: 0xcf200020  pref        0x00, 0x20($t9)
    ctx->pc = 0x3612b0u;
    // PREF instruction (ignored)
    // 0x3612b4: 0xcf000100  pref        0x00, 0x100($t8)
    ctx->pc = 0x3612b4u;
    // PREF instruction (ignored)
    // 0x3612b8: 0xcf000140  pref        0x00, 0x140($t8)
    ctx->pc = 0x3612b8u;
    // PREF instruction (ignored)
    // 0x3612bc: 0x24540100  addiu       $s4, $v0, 0x100
    ctx->pc = 0x3612bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x3612c0: 0x93270000  lbu         $a3, 0x0($t9)
    ctx->pc = 0x3612c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x3612c4: 0x93280011  lbu         $t0, 0x11($t9)
    ctx->pc = 0x3612c4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 17)));
    // 0x3612c8: 0x92120000  lbu         $s2, 0x0($s0)
    ctx->pc = 0x3612c8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3612cc: 0x92130040  lbu         $s3, 0x40($s0)
    ctx->pc = 0x3612ccu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3612d0: 0x93230001  lbu         $v1, 0x1($t9)
    ctx->pc = 0x3612d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 1)));
    // 0x3612d4: 0x93310010  lbu         $s1, 0x10($t9)
    ctx->pc = 0x3612d4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x3612d8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3612d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3612dc: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3612dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3612e0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3612e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3612e4: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x3612e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3612e8: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3612e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3612ec: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3612ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3612f0: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3612f0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3612f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3612f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3612f8: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3612f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3612fc: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x3612fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361300: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361304: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361304u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361308: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361308u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x36130c: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x36130cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361310: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361314: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361314u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361318: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361318u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36131c: 0x92120001  lbu         $s2, 0x1($s0)
    ctx->pc = 0x36131cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x361320: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361320u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361324: 0x92130041  lbu         $s3, 0x41($s0)
    ctx->pc = 0x361324u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x361328: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361328u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36132c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x36132cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361330: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361330u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361334: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361334u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361338: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361338u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x36133c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x36133cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361340: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361340u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x361344: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361344u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361348: 0x93310012  lbu         $s1, 0x12($t9)
    ctx->pc = 0x361348u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 18)));
    // 0x36134c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x36134cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361350: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361350u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361354: 0x93230003  lbu         $v1, 0x3($t9)
    ctx->pc = 0x361354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 3)));
    // 0x361358: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x361358u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x36135c: 0x93270002  lbu         $a3, 0x2($t9)
    ctx->pc = 0x36135cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 2)));
    // 0x361360: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x361360u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361364: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361364u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x361368: 0x93280013  lbu         $t0, 0x13($t9)
    ctx->pc = 0x361368u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 19)));
    // 0x36136c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36136cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361370: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361370u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361374: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x361374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361378: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x361378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x36137c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36137cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361380: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361380u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361384: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361384u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361388: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x361388u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x36138c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x36138cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x361390: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361390u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361394: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361394u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361398: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x36139c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36139cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3613a0: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x3613a0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3613a4: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x3613a4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3613a8: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x3613a8u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x3613ac: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x3613acu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3613b0: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x3613b0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3613b4: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x3613b4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3613b8: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x3613b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3613bc: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x3613bcu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x3613c0: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3613c0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3613c4: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x3613c4u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x3613c8: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x3613c8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x3613cc: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x3613ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x3613d0: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x3613d0u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x3613d4: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x3613d4u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x3613d8: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x3613d8u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x3613dc: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x3613dcu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x3613e0: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x3613e0u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x3613e4: 0x7de30000  sq          $v1, 0x0($t7)
    ctx->pc = 0x3613e4u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 3));
    // 0x3613e8: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x3613e8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x3613ec: 0x7de30040  sq          $v1, 0x40($t7)
    ctx->pc = 0x3613ecu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 64), GPR_VEC(ctx, 3));
    // 0x3613f0: 0x93270004  lbu         $a3, 0x4($t9)
    ctx->pc = 0x3613f0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x3613f4: 0x93280015  lbu         $t0, 0x15($t9)
    ctx->pc = 0x3613f4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 21)));
    // 0x3613f8: 0x92120002  lbu         $s2, 0x2($s0)
    ctx->pc = 0x3613f8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3613fc: 0x92130042  lbu         $s3, 0x42($s0)
    ctx->pc = 0x3613fcu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x361400: 0x93230005  lbu         $v1, 0x5($t9)
    ctx->pc = 0x361400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 5)));
    // 0x361404: 0x93310014  lbu         $s1, 0x14($t9)
    ctx->pc = 0x361404u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 20)));
    // 0x361408: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361408u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x36140c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x36140cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361410: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361410u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361414: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361414u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x361418: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x361418u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36141c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36141cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361420: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x361420u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361424: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x361424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361428: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x36142c: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x36142cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361430: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361434: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361434u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361438: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361438u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x36143c: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x36143cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361440: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361444: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361444u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361448: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361448u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36144c: 0x92120003  lbu         $s2, 0x3($s0)
    ctx->pc = 0x36144cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x361450: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361450u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361454: 0x92130043  lbu         $s3, 0x43($s0)
    ctx->pc = 0x361454u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
    // 0x361458: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361458u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36145c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x36145cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361460: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361460u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361464: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361464u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361468: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361468u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x36146c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x36146cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361470: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x361474: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361474u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361478: 0x93310016  lbu         $s1, 0x16($t9)
    ctx->pc = 0x361478u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 22)));
    // 0x36147c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x36147cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361480: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361480u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361484: 0x93230007  lbu         $v1, 0x7($t9)
    ctx->pc = 0x361484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 7)));
    // 0x361488: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x361488u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x36148c: 0x93270006  lbu         $a3, 0x6($t9)
    ctx->pc = 0x36148cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 6)));
    // 0x361490: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x361490u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361494: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361494u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x361498: 0x93280017  lbu         $t0, 0x17($t9)
    ctx->pc = 0x361498u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 23)));
    // 0x36149c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36149cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3614a0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3614a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3614a4: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x3614a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3614a8: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3614a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3614ac: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3614acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3614b0: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x3614b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3614b4: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x3614b4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x3614b8: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x3614b8u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x3614bc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3614bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3614c0: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x3614c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3614c4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3614c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3614c8: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x3614c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x3614cc: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3614ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3614d0: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x3614d0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3614d4: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x3614d4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3614d8: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x3614d8u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x3614dc: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x3614dcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3614e0: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x3614e0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3614e4: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x3614e4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3614e8: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x3614e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3614ec: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x3614ecu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x3614f0: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3614f0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3614f4: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x3614f4u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x3614f8: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x3614f8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x3614fc: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x3614fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361500: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x361500u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x361504: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x361504u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361508: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x361508u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x36150c: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x36150cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x361510: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x361510u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x361514: 0x7de30010  sq          $v1, 0x10($t7)
    ctx->pc = 0x361514u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 16), GPR_VEC(ctx, 3));
    // 0x361518: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x361518u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x36151c: 0x7de30050  sq          $v1, 0x50($t7)
    ctx->pc = 0x36151cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 80), GPR_VEC(ctx, 3));
    // 0x361520: 0x93270008  lbu         $a3, 0x8($t9)
    ctx->pc = 0x361520u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x361524: 0x93280019  lbu         $t0, 0x19($t9)
    ctx->pc = 0x361524u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 25)));
    // 0x361528: 0x92120004  lbu         $s2, 0x4($s0)
    ctx->pc = 0x361528u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x36152c: 0x92130044  lbu         $s3, 0x44($s0)
    ctx->pc = 0x36152cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x361530: 0x93230009  lbu         $v1, 0x9($t9)
    ctx->pc = 0x361530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 9)));
    // 0x361534: 0x93310018  lbu         $s1, 0x18($t9)
    ctx->pc = 0x361534u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x361538: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361538u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x36153c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x36153cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361540: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361540u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361544: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361544u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x361548: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x361548u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36154c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36154cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361550: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x361550u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361554: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x361554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361558: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x36155c: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x36155cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361560: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361564: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361564u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361568: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361568u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x36156c: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x36156cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361570: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361574: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361574u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361578: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361578u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36157c: 0x92120005  lbu         $s2, 0x5($s0)
    ctx->pc = 0x36157cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x361580: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361580u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361584: 0x92130045  lbu         $s3, 0x45($s0)
    ctx->pc = 0x361584u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x361588: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361588u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36158c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x36158cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361590: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361590u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361594: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361594u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361598: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361598u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x36159c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x36159cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3615a0: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3615a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3615a4: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3615a4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3615a8: 0x9331001a  lbu         $s1, 0x1A($t9)
    ctx->pc = 0x3615a8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 26)));
    // 0x3615ac: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x3615acu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x3615b0: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x3615b0u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x3615b4: 0x9323000b  lbu         $v1, 0xB($t9)
    ctx->pc = 0x3615b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 11)));
    // 0x3615b8: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x3615b8u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x3615bc: 0x9327000a  lbu         $a3, 0xA($t9)
    ctx->pc = 0x3615bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 10)));
    // 0x3615c0: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x3615c0u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x3615c4: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x3615c4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x3615c8: 0x9328001b  lbu         $t0, 0x1B($t9)
    ctx->pc = 0x3615c8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 27)));
    // 0x3615cc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3615ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3615d0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3615d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3615d4: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x3615d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3615d8: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3615d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3615dc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3615dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3615e0: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x3615e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3615e4: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x3615e4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x3615e8: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x3615e8u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x3615ec: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3615ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3615f0: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x3615f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3615f4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3615f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3615f8: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x3615f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x3615fc: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3615fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361600: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361600u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361604: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361604u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361608: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x361608u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x36160c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x36160cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361610: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361610u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361614: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x361614u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361618: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361618u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x36161c: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x36161cu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x361620: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361620u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361624: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x361624u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361628: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361628u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x36162c: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x36162cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361630: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x361630u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x361634: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x361634u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361638: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x361638u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x36163c: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x36163cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x361640: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x361640u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x361644: 0x7de30020  sq          $v1, 0x20($t7)
    ctx->pc = 0x361644u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 32), GPR_VEC(ctx, 3));
    // 0x361648: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x361648u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x36164c: 0x7de30060  sq          $v1, 0x60($t7)
    ctx->pc = 0x36164cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 96), GPR_VEC(ctx, 3));
    // 0x361650: 0x9327000c  lbu         $a3, 0xC($t9)
    ctx->pc = 0x361650u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 12)));
    // 0x361654: 0x9328001d  lbu         $t0, 0x1D($t9)
    ctx->pc = 0x361654u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 29)));
    // 0x361658: 0x92120006  lbu         $s2, 0x6($s0)
    ctx->pc = 0x361658u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x36165c: 0x92130046  lbu         $s3, 0x46($s0)
    ctx->pc = 0x36165cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x361660: 0x9323000d  lbu         $v1, 0xD($t9)
    ctx->pc = 0x361660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 13)));
    // 0x361664: 0x9331001c  lbu         $s1, 0x1C($t9)
    ctx->pc = 0x361664u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 28)));
    // 0x361668: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361668u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x36166c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x36166cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361670: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361670u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361674: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361674u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x361678: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x361678u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36167c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36167cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361680: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x361680u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361684: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x361684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361688: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x36168c: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x36168cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361690: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361694: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361694u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361698: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361698u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x36169c: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x36169cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x3616a0: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x3616a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x3616a4: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x3616a4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3616a8: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x3616a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3616ac: 0x92120007  lbu         $s2, 0x7($s0)
    ctx->pc = 0x3616acu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3616b0: 0x92130047  lbu         $s3, 0x47($s0)
    ctx->pc = 0x3616b0u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x3616b4: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x3616b4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3616b8: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x3616b8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3616bc: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x3616bcu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3616c0: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x3616c0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3616c4: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x3616c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3616c8: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x3616c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3616cc: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3616ccu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3616d0: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3616d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3616d4: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3616d4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3616d8: 0x9331001e  lbu         $s1, 0x1E($t9)
    ctx->pc = 0x3616d8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 30)));
    // 0x3616dc: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x3616dcu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x3616e0: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x3616e0u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x3616e4: 0x9323000f  lbu         $v1, 0xF($t9)
    ctx->pc = 0x3616e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 15)));
    // 0x3616e8: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x3616e8u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x3616ec: 0x9327000e  lbu         $a3, 0xE($t9)
    ctx->pc = 0x3616ecu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 14)));
    // 0x3616f0: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x3616f0u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x3616f4: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x3616f4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x3616f8: 0x9328001f  lbu         $t0, 0x1F($t9)
    ctx->pc = 0x3616f8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 31)));
    // 0x3616fc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3616fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361700: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361700u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361704: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x361704u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361708: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x361708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x36170c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36170cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361710: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361710u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361714: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361714u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361718: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x361718u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x36171c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x36171cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x361720: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361720u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361724: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361724u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361728: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x36172c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36172cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361730: 0x67390020  daddiu      $t9, $t9, 0x20
    ctx->pc = 0x361730u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)32);
    // 0x361734: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361734u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361738: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361738u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x36173c: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x36173cu;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x361740: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361740u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361744: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361744u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361748: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x361748u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x36174c: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x36174cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361750: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x361750u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x361754: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361754u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361758: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x361758u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x36175c: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x36175cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361760: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x361760u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361764: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x361764u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x361768: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x361768u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x36176c: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x36176cu;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x361770: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x361770u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x361774: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x361774u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x361778: 0x7de30030  sq          $v1, 0x30($t7)
    ctx->pc = 0x361778u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 48), GPR_VEC(ctx, 3));
    // 0x36177c: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x36177cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x361780: 0x7de30070  sq          $v1, 0x70($t7)
    ctx->pc = 0x361780u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 112), GPR_VEC(ctx, 3));
    // 0x361784: 0x66100008  daddiu      $s0, $s0, 0x8
    ctx->pc = 0x361784u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)8);
    // 0x361788: 0x14783c  dsll32      $t7, $s4, 0
    ctx->pc = 0x361788u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) << (32 + 0));
    // 0x36178c: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x36178cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x361790: 0xcf200040  pref        0x00, 0x40($t9)
    ctx->pc = 0x361790u;
    // PREF instruction (ignored)
    // 0x361794: 0xcf000100  pref        0x00, 0x100($t8)
    ctx->pc = 0x361794u;
    // PREF instruction (ignored)
    // 0x361798: 0xcf000140  pref        0x00, 0x140($t8)
    ctx->pc = 0x361798u;
    // PREF instruction (ignored)
    // 0x36179c: 0x24540180  addiu       $s4, $v0, 0x180
    ctx->pc = 0x36179cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x3617a0: 0x93270000  lbu         $a3, 0x0($t9)
    ctx->pc = 0x3617a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x3617a4: 0x93280011  lbu         $t0, 0x11($t9)
    ctx->pc = 0x3617a4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 17)));
    // 0x3617a8: 0x92120000  lbu         $s2, 0x0($s0)
    ctx->pc = 0x3617a8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3617ac: 0x92130040  lbu         $s3, 0x40($s0)
    ctx->pc = 0x3617acu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3617b0: 0x93230001  lbu         $v1, 0x1($t9)
    ctx->pc = 0x3617b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 1)));
    // 0x3617b4: 0x93310010  lbu         $s1, 0x10($t9)
    ctx->pc = 0x3617b4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x3617b8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3617b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3617bc: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3617bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3617c0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3617c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3617c4: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x3617c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3617c8: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3617c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3617cc: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3617ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3617d0: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3617d0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3617d4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3617d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3617d8: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3617d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3617dc: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x3617dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3617e0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3617e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3617e4: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x3617e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3617e8: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x3617e8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x3617ec: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x3617ecu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x3617f0: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x3617f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x3617f4: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x3617f4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3617f8: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x3617f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3617fc: 0x92120001  lbu         $s2, 0x1($s0)
    ctx->pc = 0x3617fcu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x361800: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361800u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361804: 0x92130041  lbu         $s3, 0x41($s0)
    ctx->pc = 0x361804u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x361808: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361808u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36180c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x36180cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361810: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361810u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361814: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361814u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361818: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361818u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x36181c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x36181cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361820: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361820u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x361824: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361824u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361828: 0x93310012  lbu         $s1, 0x12($t9)
    ctx->pc = 0x361828u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 18)));
    // 0x36182c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x36182cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361830: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361830u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361834: 0x93230003  lbu         $v1, 0x3($t9)
    ctx->pc = 0x361834u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 3)));
    // 0x361838: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x361838u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x36183c: 0x93270002  lbu         $a3, 0x2($t9)
    ctx->pc = 0x36183cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 2)));
    // 0x361840: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x361840u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361844: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361844u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x361848: 0x93280013  lbu         $t0, 0x13($t9)
    ctx->pc = 0x361848u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 19)));
    // 0x36184c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36184cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361850: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361850u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361854: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x361854u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361858: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x361858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x36185c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36185cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361860: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361860u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361864: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361864u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361868: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x361868u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x36186c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x36186cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x361870: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361870u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361874: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361874u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361878: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x36187c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36187cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361880: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361880u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361884: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361884u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361888: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x361888u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x36188c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x36188cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361890: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361890u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361894: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x361894u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361898: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361898u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x36189c: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x36189cu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x3618a0: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3618a0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3618a4: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x3618a4u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x3618a8: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x3618a8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x3618ac: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x3618acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x3618b0: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x3618b0u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x3618b4: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x3618b4u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x3618b8: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x3618b8u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x3618bc: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x3618bcu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x3618c0: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x3618c0u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x3618c4: 0x7de30000  sq          $v1, 0x0($t7)
    ctx->pc = 0x3618c4u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 3));
    // 0x3618c8: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x3618c8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x3618cc: 0x7de30040  sq          $v1, 0x40($t7)
    ctx->pc = 0x3618ccu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 64), GPR_VEC(ctx, 3));
    // 0x3618d0: 0x93270004  lbu         $a3, 0x4($t9)
    ctx->pc = 0x3618d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x3618d4: 0x93280015  lbu         $t0, 0x15($t9)
    ctx->pc = 0x3618d4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 21)));
    // 0x3618d8: 0x92120002  lbu         $s2, 0x2($s0)
    ctx->pc = 0x3618d8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3618dc: 0x92130042  lbu         $s3, 0x42($s0)
    ctx->pc = 0x3618dcu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x3618e0: 0x93230005  lbu         $v1, 0x5($t9)
    ctx->pc = 0x3618e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 5)));
    // 0x3618e4: 0x93310014  lbu         $s1, 0x14($t9)
    ctx->pc = 0x3618e4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 20)));
    // 0x3618e8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3618e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3618ec: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3618ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3618f0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3618f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3618f4: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x3618f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3618f8: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3618f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3618fc: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3618fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361900: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x361900u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361904: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x361904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361908: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x36190c: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x36190cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361910: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361914: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361914u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361918: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361918u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x36191c: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x36191cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361920: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361924: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361924u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361928: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361928u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36192c: 0x92120003  lbu         $s2, 0x3($s0)
    ctx->pc = 0x36192cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x361930: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361930u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361934: 0x92130043  lbu         $s3, 0x43($s0)
    ctx->pc = 0x361934u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
    // 0x361938: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361938u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36193c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x36193cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361940: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361940u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361944: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361944u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361948: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361948u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x36194c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x36194cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361950: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x361954: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361954u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361958: 0x93310016  lbu         $s1, 0x16($t9)
    ctx->pc = 0x361958u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 22)));
    // 0x36195c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x36195cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361960: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361960u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361964: 0x93230007  lbu         $v1, 0x7($t9)
    ctx->pc = 0x361964u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 7)));
    // 0x361968: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x361968u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x36196c: 0x93270006  lbu         $a3, 0x6($t9)
    ctx->pc = 0x36196cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 6)));
    // 0x361970: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x361970u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361974: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361974u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x361978: 0x93280017  lbu         $t0, 0x17($t9)
    ctx->pc = 0x361978u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 23)));
    // 0x36197c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36197cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361980: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361980u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361984: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x361984u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361988: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x361988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x36198c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36198cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361990: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361990u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361994: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361994u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361998: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x361998u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x36199c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x36199cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3619a0: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x3619a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3619a4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3619a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3619a8: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x3619a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x3619ac: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3619acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3619b0: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x3619b0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3619b4: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x3619b4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3619b8: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x3619b8u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x3619bc: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x3619bcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3619c0: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x3619c0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3619c4: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x3619c4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3619c8: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x3619c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3619cc: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x3619ccu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x3619d0: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3619d0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3619d4: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x3619d4u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x3619d8: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x3619d8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x3619dc: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x3619dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x3619e0: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x3619e0u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x3619e4: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x3619e4u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x3619e8: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x3619e8u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x3619ec: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x3619ecu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x3619f0: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x3619f0u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x3619f4: 0x7de30010  sq          $v1, 0x10($t7)
    ctx->pc = 0x3619f4u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 16), GPR_VEC(ctx, 3));
    // 0x3619f8: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x3619f8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x3619fc: 0x7de30050  sq          $v1, 0x50($t7)
    ctx->pc = 0x3619fcu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 80), GPR_VEC(ctx, 3));
    // 0x361a00: 0x93270008  lbu         $a3, 0x8($t9)
    ctx->pc = 0x361a00u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x361a04: 0x93280019  lbu         $t0, 0x19($t9)
    ctx->pc = 0x361a04u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 25)));
    // 0x361a08: 0x92120004  lbu         $s2, 0x4($s0)
    ctx->pc = 0x361a08u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x361a0c: 0x92130044  lbu         $s3, 0x44($s0)
    ctx->pc = 0x361a0cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x361a10: 0x93230009  lbu         $v1, 0x9($t9)
    ctx->pc = 0x361a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 9)));
    // 0x361a14: 0x93310018  lbu         $s1, 0x18($t9)
    ctx->pc = 0x361a14u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x361a18: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361a18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361a1c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x361a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361a20: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361a20u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361a24: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361a24u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x361a28: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x361a28u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x361a2c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x361a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361a30: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x361a30u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361a34: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x361a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361a38: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361a38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x361a3c: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x361a3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361a40: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361a44: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361a44u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361a48: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361a48u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x361a4c: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361a4cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361a50: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361a54: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361a54u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361a58: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361a58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361a5c: 0x92120005  lbu         $s2, 0x5($s0)
    ctx->pc = 0x361a5cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x361a60: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361a60u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361a64: 0x92130045  lbu         $s3, 0x45($s0)
    ctx->pc = 0x361a64u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x361a68: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361a68u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361a6c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x361a6cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361a70: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361a70u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361a74: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361a74u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361a78: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361a78u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x361a7c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x361a7cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361a80: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361a80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x361a84: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361a84u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361a88: 0x9331001a  lbu         $s1, 0x1A($t9)
    ctx->pc = 0x361a88u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 26)));
    // 0x361a8c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x361a8cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361a90: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361a90u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361a94: 0x9323000b  lbu         $v1, 0xB($t9)
    ctx->pc = 0x361a94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 11)));
    // 0x361a98: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x361a98u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361a9c: 0x9327000a  lbu         $a3, 0xA($t9)
    ctx->pc = 0x361a9cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 10)));
    // 0x361aa0: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x361aa0u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361aa4: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361aa4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x361aa8: 0x9328001b  lbu         $t0, 0x1B($t9)
    ctx->pc = 0x361aa8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 27)));
    // 0x361aac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x361aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361ab0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361ab4: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x361ab4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361ab8: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x361ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361abc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361ac0: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361ac4: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361ac4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361ac8: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x361ac8u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x361acc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x361accu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x361ad0: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361ad0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361ad4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361ad8: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361adc: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x361adcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361ae0: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361ae0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361ae4: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361ae4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361ae8: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x361ae8u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x361aec: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361aecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361af0: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361af0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361af4: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x361af4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361af8: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361af8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361afc: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x361afcu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x361b00: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361b00u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361b04: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x361b04u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361b08: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361b08u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361b0c: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x361b0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361b10: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x361b10u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x361b14: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x361b14u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361b18: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x361b18u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x361b1c: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x361b1cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x361b20: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x361b20u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x361b24: 0x7de30020  sq          $v1, 0x20($t7)
    ctx->pc = 0x361b24u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 32), GPR_VEC(ctx, 3));
    // 0x361b28: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x361b28u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x361b2c: 0x7de30060  sq          $v1, 0x60($t7)
    ctx->pc = 0x361b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 96), GPR_VEC(ctx, 3));
    // 0x361b30: 0x9327000c  lbu         $a3, 0xC($t9)
    ctx->pc = 0x361b30u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 12)));
    // 0x361b34: 0x9328001d  lbu         $t0, 0x1D($t9)
    ctx->pc = 0x361b34u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 29)));
    // 0x361b38: 0x92120006  lbu         $s2, 0x6($s0)
    ctx->pc = 0x361b38u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x361b3c: 0x92130046  lbu         $s3, 0x46($s0)
    ctx->pc = 0x361b3cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x361b40: 0x9323000d  lbu         $v1, 0xD($t9)
    ctx->pc = 0x361b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 13)));
    // 0x361b44: 0x9331001c  lbu         $s1, 0x1C($t9)
    ctx->pc = 0x361b44u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 28)));
    // 0x361b48: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361b48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361b4c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x361b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361b50: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361b50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361b54: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361b54u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x361b58: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x361b58u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x361b5c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x361b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361b60: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x361b60u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361b64: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x361b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361b68: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361b68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x361b6c: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x361b6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361b70: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361b74: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361b74u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361b78: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361b78u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x361b7c: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361b7cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361b80: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361b84: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361b84u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361b88: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361b88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361b8c: 0x92120007  lbu         $s2, 0x7($s0)
    ctx->pc = 0x361b8cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x361b90: 0x92130047  lbu         $s3, 0x47($s0)
    ctx->pc = 0x361b90u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x361b94: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361b94u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361b98: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361b98u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361b9c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x361b9cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361ba0: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361ba0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361ba4: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361ba4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361ba8: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x361bac: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x361bacu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361bb0: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x361bb4: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361bb4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361bb8: 0x9331001e  lbu         $s1, 0x1E($t9)
    ctx->pc = 0x361bb8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 30)));
    // 0x361bbc: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x361bbcu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361bc0: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361bc0u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361bc4: 0x9323000f  lbu         $v1, 0xF($t9)
    ctx->pc = 0x361bc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 15)));
    // 0x361bc8: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x361bc8u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361bcc: 0x9327000e  lbu         $a3, 0xE($t9)
    ctx->pc = 0x361bccu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 14)));
    // 0x361bd0: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x361bd0u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361bd4: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361bd4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x361bd8: 0x9328001f  lbu         $t0, 0x1F($t9)
    ctx->pc = 0x361bd8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 31)));
    // 0x361bdc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x361bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361be0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361be0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361be4: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x361be4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361be8: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x361be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361bec: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361bf0: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361bf4: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361bf4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361bf8: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x361bf8u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x361bfc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x361bfcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x361c00: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361c00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361c04: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361c04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361c08: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361c0c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x361c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361c10: 0x67390020  daddiu      $t9, $t9, 0x20
    ctx->pc = 0x361c10u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)32);
    // 0x361c14: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361c14u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361c18: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361c18u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361c1c: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x361c1cu;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x361c20: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361c20u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361c24: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361c24u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361c28: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x361c28u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361c2c: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361c2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361c30: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x361c30u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x361c34: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361c34u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361c38: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x361c38u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361c3c: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361c3cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361c40: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x361c40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361c44: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x361c44u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x361c48: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x361c48u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361c4c: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x361c4cu;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x361c50: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x361c50u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x361c54: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x361c54u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x361c58: 0x7de30030  sq          $v1, 0x30($t7)
    ctx->pc = 0x361c58u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 48), GPR_VEC(ctx, 3));
    // 0x361c5c: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x361c5cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x361c60: 0x7de30070  sq          $v1, 0x70($t7)
    ctx->pc = 0x361c60u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 112), GPR_VEC(ctx, 3));
    // 0x361c64: 0x66100008  daddiu      $s0, $s0, 0x8
    ctx->pc = 0x361c64u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)8);
    // 0x361c68: 0x14783c  dsll32      $t7, $s4, 0
    ctx->pc = 0x361c68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) << (32 + 0));
    // 0x361c6c: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x361c6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x361c70: 0xcf200060  pref        0x00, 0x60($t9)
    ctx->pc = 0x361c70u;
    // PREF instruction (ignored)
    // 0x361c74: 0xcf000100  pref        0x00, 0x100($t8)
    ctx->pc = 0x361c74u;
    // PREF instruction (ignored)
    // 0x361c78: 0xcf000140  pref        0x00, 0x140($t8)
    ctx->pc = 0x361c78u;
    // PREF instruction (ignored)
    // 0x361c7c: 0x24540200  addiu       $s4, $v0, 0x200
    ctx->pc = 0x361c7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x361c80: 0x93270000  lbu         $a3, 0x0($t9)
    ctx->pc = 0x361c80u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x361c84: 0x93280011  lbu         $t0, 0x11($t9)
    ctx->pc = 0x361c84u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 17)));
    // 0x361c88: 0x92120000  lbu         $s2, 0x0($s0)
    ctx->pc = 0x361c88u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361c8c: 0x92130040  lbu         $s3, 0x40($s0)
    ctx->pc = 0x361c8cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x361c90: 0x93230001  lbu         $v1, 0x1($t9)
    ctx->pc = 0x361c90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 1)));
    // 0x361c94: 0x93310010  lbu         $s1, 0x10($t9)
    ctx->pc = 0x361c94u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x361c98: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361c98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361c9c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x361c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361ca0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361ca4: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x361ca8: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x361ca8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x361cac: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x361cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361cb0: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x361cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361cb4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x361cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361cb8: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x361cbc: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x361cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361cc0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361cc4: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361cc8: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361cc8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x361ccc: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361cccu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361cd0: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361cd4: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361cd4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361cd8: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361cd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361cdc: 0x92120001  lbu         $s2, 0x1($s0)
    ctx->pc = 0x361cdcu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x361ce0: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361ce0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361ce4: 0x92130041  lbu         $s3, 0x41($s0)
    ctx->pc = 0x361ce4u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x361ce8: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361ce8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361cec: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x361cecu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361cf0: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361cf0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361cf4: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361cf4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361cf8: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361cf8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x361cfc: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x361cfcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361d00: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361d00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x361d04: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361d04u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361d08: 0x93310012  lbu         $s1, 0x12($t9)
    ctx->pc = 0x361d08u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 18)));
    // 0x361d0c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x361d0cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361d10: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361d10u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361d14: 0x93230003  lbu         $v1, 0x3($t9)
    ctx->pc = 0x361d14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 3)));
    // 0x361d18: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x361d18u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361d1c: 0x93270002  lbu         $a3, 0x2($t9)
    ctx->pc = 0x361d1cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 2)));
    // 0x361d20: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x361d20u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361d24: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361d24u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x361d28: 0x93280013  lbu         $t0, 0x13($t9)
    ctx->pc = 0x361d28u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 19)));
    // 0x361d2c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x361d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361d30: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361d30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361d34: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x361d34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361d38: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x361d38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361d3c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361d40: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361d40u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361d44: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361d44u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361d48: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x361d48u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x361d4c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x361d4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x361d50: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361d50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361d54: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361d54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361d58: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361d5c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x361d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361d60: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361d60u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361d64: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361d64u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361d68: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x361d68u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x361d6c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361d6cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361d70: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361d70u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361d74: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x361d74u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361d78: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361d78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361d7c: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x361d7cu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x361d80: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361d80u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361d84: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x361d84u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361d88: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361d88u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361d8c: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x361d8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361d90: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x361d90u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x361d94: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x361d94u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361d98: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x361d98u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x361d9c: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x361d9cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x361da0: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x361da0u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x361da4: 0x7de30000  sq          $v1, 0x0($t7)
    ctx->pc = 0x361da4u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 3));
    // 0x361da8: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x361da8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x361dac: 0x7de30040  sq          $v1, 0x40($t7)
    ctx->pc = 0x361dacu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 64), GPR_VEC(ctx, 3));
    // 0x361db0: 0x93270004  lbu         $a3, 0x4($t9)
    ctx->pc = 0x361db0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x361db4: 0x93280015  lbu         $t0, 0x15($t9)
    ctx->pc = 0x361db4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 21)));
    // 0x361db8: 0x92120002  lbu         $s2, 0x2($s0)
    ctx->pc = 0x361db8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x361dbc: 0x92130042  lbu         $s3, 0x42($s0)
    ctx->pc = 0x361dbcu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x361dc0: 0x93230005  lbu         $v1, 0x5($t9)
    ctx->pc = 0x361dc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 5)));
    // 0x361dc4: 0x93310014  lbu         $s1, 0x14($t9)
    ctx->pc = 0x361dc4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 20)));
    // 0x361dc8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361dcc: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x361dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361dd0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361dd4: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x361dd8: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x361dd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x361ddc: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x361ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361de0: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x361de0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361de4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x361de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361de8: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361de8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x361dec: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x361decu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361df0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361df4: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361df4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361df8: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361df8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x361dfc: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361dfcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361e00: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361e04: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361e04u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361e08: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361e08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361e0c: 0x92120003  lbu         $s2, 0x3($s0)
    ctx->pc = 0x361e0cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x361e10: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361e10u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361e14: 0x92130043  lbu         $s3, 0x43($s0)
    ctx->pc = 0x361e14u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
    // 0x361e18: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361e18u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361e1c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x361e1cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361e20: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361e20u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361e24: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361e24u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361e28: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361e28u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x361e2c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x361e2cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361e30: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361e30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x361e34: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361e34u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361e38: 0x93310016  lbu         $s1, 0x16($t9)
    ctx->pc = 0x361e38u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 22)));
    // 0x361e3c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x361e3cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361e40: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361e40u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361e44: 0x93230007  lbu         $v1, 0x7($t9)
    ctx->pc = 0x361e44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 7)));
    // 0x361e48: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x361e48u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361e4c: 0x93270006  lbu         $a3, 0x6($t9)
    ctx->pc = 0x361e4cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 6)));
    // 0x361e50: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x361e50u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361e54: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361e54u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x361e58: 0x93280017  lbu         $t0, 0x17($t9)
    ctx->pc = 0x361e58u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 23)));
    // 0x361e5c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x361e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361e60: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361e60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361e64: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x361e64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361e68: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x361e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361e6c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361e70: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361e70u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361e74: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361e74u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361e78: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x361e78u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x361e7c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x361e7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x361e80: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361e80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361e84: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361e84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361e88: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361e8c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x361e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361e90: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361e90u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361e94: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361e94u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361e98: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x361e98u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x361e9c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361e9cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361ea0: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361ea0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361ea4: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x361ea4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361ea8: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361ea8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361eac: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x361eacu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x361eb0: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361eb0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361eb4: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x361eb4u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361eb8: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361eb8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361ebc: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x361ebcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361ec0: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x361ec0u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x361ec4: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x361ec4u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361ec8: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x361ec8u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x361ecc: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x361eccu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x361ed0: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x361ed0u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x361ed4: 0x7de30010  sq          $v1, 0x10($t7)
    ctx->pc = 0x361ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 16), GPR_VEC(ctx, 3));
    // 0x361ed8: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x361ed8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x361edc: 0x7de30050  sq          $v1, 0x50($t7)
    ctx->pc = 0x361edcu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 80), GPR_VEC(ctx, 3));
    // 0x361ee0: 0x93270008  lbu         $a3, 0x8($t9)
    ctx->pc = 0x361ee0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x361ee4: 0x93280019  lbu         $t0, 0x19($t9)
    ctx->pc = 0x361ee4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 25)));
    // 0x361ee8: 0x92120004  lbu         $s2, 0x4($s0)
    ctx->pc = 0x361ee8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x361eec: 0x92130044  lbu         $s3, 0x44($s0)
    ctx->pc = 0x361eecu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x361ef0: 0x93230009  lbu         $v1, 0x9($t9)
    ctx->pc = 0x361ef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 9)));
    // 0x361ef4: 0x93310018  lbu         $s1, 0x18($t9)
    ctx->pc = 0x361ef4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x361ef8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361efc: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x361efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361f00: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361f00u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361f04: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361f04u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x361f08: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x361f08u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x361f0c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x361f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361f10: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x361f10u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361f14: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x361f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361f18: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361f18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x361f1c: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x361f1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361f20: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361f24: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361f24u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361f28: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361f28u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x361f2c: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361f2cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361f30: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361f34: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361f34u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361f38: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361f38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361f3c: 0x92120005  lbu         $s2, 0x5($s0)
    ctx->pc = 0x361f3cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x361f40: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361f40u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361f44: 0x92130045  lbu         $s3, 0x45($s0)
    ctx->pc = 0x361f44u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x361f48: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361f48u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361f4c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x361f4cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361f50: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361f50u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361f54: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361f54u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361f58: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x361f58u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x361f5c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x361f5cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x361f60: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x361f60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x361f64: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361f64u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361f68: 0x9331001a  lbu         $s1, 0x1A($t9)
    ctx->pc = 0x361f68u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 26)));
    // 0x361f6c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x361f6cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361f70: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361f70u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361f74: 0x9323000b  lbu         $v1, 0xB($t9)
    ctx->pc = 0x361f74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 11)));
    // 0x361f78: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x361f78u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361f7c: 0x9327000a  lbu         $a3, 0xA($t9)
    ctx->pc = 0x361f7cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 10)));
    // 0x361f80: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x361f80u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361f84: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x361f84u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x361f88: 0x9328001b  lbu         $t0, 0x1B($t9)
    ctx->pc = 0x361f88u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 27)));
    // 0x361f8c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x361f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x361f90: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x361f90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x361f94: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x361f94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x361f98: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x361f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x361f9c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x361f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x361fa0: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x361fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361fa4: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x361fa4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x361fa8: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x361fa8u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x361fac: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x361facu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x361fb0: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x361fb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361fb4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x361fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x361fb8: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x361fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x361fbc: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x361fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x361fc0: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x361fc0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x361fc4: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x361fc4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x361fc8: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x361fc8u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x361fcc: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x361fccu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x361fd0: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x361fd0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361fd4: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x361fd4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x361fd8: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x361fd8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x361fdc: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x361fdcu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x361fe0: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x361fe0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x361fe4: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x361fe4u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x361fe8: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x361fe8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x361fec: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x361fecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x361ff0: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x361ff0u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x361ff4: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x361ff4u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x361ff8: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x361ff8u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x361ffc: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x361ffcu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x362000: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x362000u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x362004: 0x7de30020  sq          $v1, 0x20($t7)
    ctx->pc = 0x362004u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 32), GPR_VEC(ctx, 3));
    // 0x362008: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x362008u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x36200c: 0x7de30060  sq          $v1, 0x60($t7)
    ctx->pc = 0x36200cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 96), GPR_VEC(ctx, 3));
    // 0x362010: 0x9327000c  lbu         $a3, 0xC($t9)
    ctx->pc = 0x362010u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 12)));
    // 0x362014: 0x9328001d  lbu         $t0, 0x1D($t9)
    ctx->pc = 0x362014u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 29)));
    // 0x362018: 0x92120006  lbu         $s2, 0x6($s0)
    ctx->pc = 0x362018u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x36201c: 0x92130046  lbu         $s3, 0x46($s0)
    ctx->pc = 0x36201cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x362020: 0x9323000d  lbu         $v1, 0xD($t9)
    ctx->pc = 0x362020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 13)));
    // 0x362024: 0x9331001c  lbu         $s1, 0x1C($t9)
    ctx->pc = 0x362024u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 28)));
    // 0x362028: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362028u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x36202c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x36202cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x362030: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362030u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362034: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362034u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x362038: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x362038u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36203c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36203cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362040: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x362040u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362044: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x362044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362048: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x36204c: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x36204cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362050: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x362050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362054: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362054u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362058: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362058u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x36205c: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x36205cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362060: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x362064: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362064u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362068: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362068u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36206c: 0x92120007  lbu         $s2, 0x7($s0)
    ctx->pc = 0x36206cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x362070: 0x92130047  lbu         $s3, 0x47($s0)
    ctx->pc = 0x362070u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x362074: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362074u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362078: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362078u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36207c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x36207cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362080: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x362080u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362084: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362084u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x362088: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362088u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x36208c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x36208cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362090: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x362094: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362094u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362098: 0x9331001e  lbu         $s1, 0x1E($t9)
    ctx->pc = 0x362098u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 30)));
    // 0x36209c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x36209cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x3620a0: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x3620a0u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x3620a4: 0x9323000f  lbu         $v1, 0xF($t9)
    ctx->pc = 0x3620a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 15)));
    // 0x3620a8: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x3620a8u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x3620ac: 0x9327000e  lbu         $a3, 0xE($t9)
    ctx->pc = 0x3620acu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 14)));
    // 0x3620b0: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x3620b0u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x3620b4: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x3620b4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x3620b8: 0x9328001f  lbu         $t0, 0x1F($t9)
    ctx->pc = 0x3620b8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 31)));
    // 0x3620bc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3620bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3620c0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3620c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3620c4: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x3620c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3620c8: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3620c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3620cc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3620ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3620d0: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x3620d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3620d4: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x3620d4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x3620d8: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x3620d8u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x3620dc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3620dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3620e0: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x3620e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3620e4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3620e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3620e8: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x3620e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x3620ec: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3620ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3620f0: 0x67390020  daddiu      $t9, $t9, 0x20
    ctx->pc = 0x3620f0u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)32);
    // 0x3620f4: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x3620f4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3620f8: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x3620f8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3620fc: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x3620fcu;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x362100: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x362100u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362104: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362104u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362108: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x362108u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x36210c: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x36210cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x362110: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x362110u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x362114: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362114u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362118: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x362118u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x36211c: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x36211cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362120: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x362120u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x362124: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x362124u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x362128: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x362128u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x36212c: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x36212cu;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x362130: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x362130u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x362134: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x362134u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x362138: 0x7de30030  sq          $v1, 0x30($t7)
    ctx->pc = 0x362138u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 48), GPR_VEC(ctx, 3));
    // 0x36213c: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x36213cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x362140: 0x7de30070  sq          $v1, 0x70($t7)
    ctx->pc = 0x362140u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 112), GPR_VEC(ctx, 3));
    // 0x362144: 0x66100008  daddiu      $s0, $s0, 0x8
    ctx->pc = 0x362144u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)8);
    // 0x362148: 0x14783c  dsll32      $t7, $s4, 0
    ctx->pc = 0x362148u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) << (32 + 0));
    // 0x36214c: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x36214cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x362150: 0xcf200080  pref        0x00, 0x80($t9)
    ctx->pc = 0x362150u;
    // PREF instruction (ignored)
    // 0x362154: 0xcf000100  pref        0x00, 0x100($t8)
    ctx->pc = 0x362154u;
    // PREF instruction (ignored)
    // 0x362158: 0xcf000140  pref        0x00, 0x140($t8)
    ctx->pc = 0x362158u;
    // PREF instruction (ignored)
    // 0x36215c: 0x24540280  addiu       $s4, $v0, 0x280
    ctx->pc = 0x36215cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x362160: 0x93270000  lbu         $a3, 0x0($t9)
    ctx->pc = 0x362160u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x362164: 0x93280011  lbu         $t0, 0x11($t9)
    ctx->pc = 0x362164u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 17)));
    // 0x362168: 0x92120000  lbu         $s2, 0x0($s0)
    ctx->pc = 0x362168u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36216c: 0x92130040  lbu         $s3, 0x40($s0)
    ctx->pc = 0x36216cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x362170: 0x93230001  lbu         $v1, 0x1($t9)
    ctx->pc = 0x362170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 1)));
    // 0x362174: 0x93310010  lbu         $s1, 0x10($t9)
    ctx->pc = 0x362174u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x362178: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362178u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x36217c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x36217cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x362180: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362180u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362184: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362184u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x362188: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x362188u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36218c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36218cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362190: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x362190u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362194: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x362194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362198: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x36219c: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x36219cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3621a0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3621a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3621a4: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x3621a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3621a8: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x3621a8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x3621ac: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x3621acu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x3621b0: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x3621b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x3621b4: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x3621b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3621b8: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x3621b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3621bc: 0x92120001  lbu         $s2, 0x1($s0)
    ctx->pc = 0x3621bcu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3621c0: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x3621c0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3621c4: 0x92130041  lbu         $s3, 0x41($s0)
    ctx->pc = 0x3621c4u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x3621c8: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x3621c8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3621cc: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x3621ccu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3621d0: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x3621d0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3621d4: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x3621d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3621d8: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x3621d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3621dc: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3621dcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3621e0: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3621e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3621e4: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3621e4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3621e8: 0x93310012  lbu         $s1, 0x12($t9)
    ctx->pc = 0x3621e8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 18)));
    // 0x3621ec: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x3621ecu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x3621f0: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x3621f0u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x3621f4: 0x93230003  lbu         $v1, 0x3($t9)
    ctx->pc = 0x3621f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 3)));
    // 0x3621f8: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x3621f8u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x3621fc: 0x93270002  lbu         $a3, 0x2($t9)
    ctx->pc = 0x3621fcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 2)));
    // 0x362200: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x362200u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362204: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362204u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x362208: 0x93280013  lbu         $t0, 0x13($t9)
    ctx->pc = 0x362208u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 19)));
    // 0x36220c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36220cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362210: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362210u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x362214: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x362214u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362218: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x362218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x36221c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36221cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362220: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362220u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362224: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x362224u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362228: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x362228u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x36222c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x36222cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x362230: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362230u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362234: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362234u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362238: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x36223c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36223cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362240: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362240u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362244: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362244u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362248: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x362248u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x36224c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x36224cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362250: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362250u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362254: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x362254u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362258: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362258u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x36225c: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x36225cu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x362260: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362260u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362264: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x362264u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362268: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362268u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x36226c: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x36226cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x362270: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x362270u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x362274: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x362274u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362278: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x362278u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x36227c: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x36227cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x362280: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x362280u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x362284: 0x7de30000  sq          $v1, 0x0($t7)
    ctx->pc = 0x362284u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 3));
    // 0x362288: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x362288u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x36228c: 0x7de30040  sq          $v1, 0x40($t7)
    ctx->pc = 0x36228cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 64), GPR_VEC(ctx, 3));
    // 0x362290: 0x93270004  lbu         $a3, 0x4($t9)
    ctx->pc = 0x362290u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x362294: 0x93280015  lbu         $t0, 0x15($t9)
    ctx->pc = 0x362294u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 21)));
    // 0x362298: 0x92120002  lbu         $s2, 0x2($s0)
    ctx->pc = 0x362298u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x36229c: 0x92130042  lbu         $s3, 0x42($s0)
    ctx->pc = 0x36229cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x3622a0: 0x93230005  lbu         $v1, 0x5($t9)
    ctx->pc = 0x3622a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 5)));
    // 0x3622a4: 0x93310014  lbu         $s1, 0x14($t9)
    ctx->pc = 0x3622a4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 20)));
    // 0x3622a8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3622a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3622ac: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3622acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3622b0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3622b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3622b4: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x3622b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3622b8: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3622b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3622bc: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3622bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3622c0: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3622c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3622c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3622c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3622c8: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3622c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3622cc: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x3622ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3622d0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3622d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3622d4: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x3622d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3622d8: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x3622d8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x3622dc: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x3622dcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x3622e0: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x3622e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x3622e4: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x3622e4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3622e8: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x3622e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3622ec: 0x92120003  lbu         $s2, 0x3($s0)
    ctx->pc = 0x3622ecu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3622f0: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x3622f0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3622f4: 0x92130043  lbu         $s3, 0x43($s0)
    ctx->pc = 0x3622f4u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
    // 0x3622f8: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x3622f8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3622fc: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x3622fcu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362300: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x362300u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362304: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362304u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x362308: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362308u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x36230c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x36230cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362310: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x362314: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362314u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362318: 0x93310016  lbu         $s1, 0x16($t9)
    ctx->pc = 0x362318u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 22)));
    // 0x36231c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x36231cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362320: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362320u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362324: 0x93230007  lbu         $v1, 0x7($t9)
    ctx->pc = 0x362324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 7)));
    // 0x362328: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x362328u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x36232c: 0x93270006  lbu         $a3, 0x6($t9)
    ctx->pc = 0x36232cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 6)));
    // 0x362330: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x362330u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362334: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362334u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x362338: 0x93280017  lbu         $t0, 0x17($t9)
    ctx->pc = 0x362338u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 23)));
    // 0x36233c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36233cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362340: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362340u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x362344: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x362344u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362348: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x362348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x36234c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362350: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362350u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362354: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x362354u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362358: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x362358u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x36235c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x36235cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x362360: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362360u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362364: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362364u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362368: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x36236c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36236cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362370: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362370u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362374: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362374u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362378: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x362378u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x36237c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x36237cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362380: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362380u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362384: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x362384u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362388: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362388u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x36238c: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x36238cu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x362390: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362390u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362394: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x362394u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362398: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362398u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x36239c: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x36239cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x3623a0: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x3623a0u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x3623a4: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x3623a4u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x3623a8: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x3623a8u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x3623ac: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x3623acu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x3623b0: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x3623b0u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x3623b4: 0x7de30010  sq          $v1, 0x10($t7)
    ctx->pc = 0x3623b4u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 16), GPR_VEC(ctx, 3));
    // 0x3623b8: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x3623b8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x3623bc: 0x7de30050  sq          $v1, 0x50($t7)
    ctx->pc = 0x3623bcu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 80), GPR_VEC(ctx, 3));
    // 0x3623c0: 0x93270008  lbu         $a3, 0x8($t9)
    ctx->pc = 0x3623c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x3623c4: 0x93280019  lbu         $t0, 0x19($t9)
    ctx->pc = 0x3623c4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 25)));
    // 0x3623c8: 0x92120004  lbu         $s2, 0x4($s0)
    ctx->pc = 0x3623c8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3623cc: 0x92130044  lbu         $s3, 0x44($s0)
    ctx->pc = 0x3623ccu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3623d0: 0x93230009  lbu         $v1, 0x9($t9)
    ctx->pc = 0x3623d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 9)));
    // 0x3623d4: 0x93310018  lbu         $s1, 0x18($t9)
    ctx->pc = 0x3623d4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x3623d8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3623d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3623dc: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3623dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3623e0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3623e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3623e4: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x3623e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3623e8: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3623e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3623ec: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3623ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3623f0: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3623f0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3623f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3623f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3623f8: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3623f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3623fc: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x3623fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362400: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x362400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362404: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362404u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362408: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362408u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x36240c: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x36240cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362410: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x362414: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362414u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362418: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362418u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36241c: 0x92120005  lbu         $s2, 0x5($s0)
    ctx->pc = 0x36241cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x362420: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362420u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362424: 0x92130045  lbu         $s3, 0x45($s0)
    ctx->pc = 0x362424u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x362428: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362428u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36242c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x36242cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362430: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x362430u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362434: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362434u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x362438: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362438u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x36243c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x36243cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362440: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362440u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x362444: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362444u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362448: 0x9331001a  lbu         $s1, 0x1A($t9)
    ctx->pc = 0x362448u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 26)));
    // 0x36244c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x36244cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362450: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362450u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362454: 0x9323000b  lbu         $v1, 0xB($t9)
    ctx->pc = 0x362454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 11)));
    // 0x362458: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x362458u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x36245c: 0x9327000a  lbu         $a3, 0xA($t9)
    ctx->pc = 0x36245cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 10)));
    // 0x362460: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x362460u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362464: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362464u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x362468: 0x9328001b  lbu         $t0, 0x1B($t9)
    ctx->pc = 0x362468u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 27)));
    // 0x36246c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36246cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362470: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362470u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x362474: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x362474u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362478: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x362478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x36247c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36247cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362480: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362480u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362484: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x362484u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362488: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x362488u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x36248c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x36248cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x362490: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362490u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362494: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362494u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362498: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x36249c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36249cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3624a0: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x3624a0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3624a4: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x3624a4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3624a8: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x3624a8u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x3624ac: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x3624acu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3624b0: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x3624b0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3624b4: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x3624b4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3624b8: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x3624b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3624bc: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x3624bcu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x3624c0: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3624c0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3624c4: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x3624c4u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x3624c8: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x3624c8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x3624cc: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x3624ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x3624d0: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x3624d0u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x3624d4: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x3624d4u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x3624d8: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x3624d8u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x3624dc: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x3624dcu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x3624e0: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x3624e0u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x3624e4: 0x7de30020  sq          $v1, 0x20($t7)
    ctx->pc = 0x3624e4u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 32), GPR_VEC(ctx, 3));
    // 0x3624e8: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x3624e8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x3624ec: 0x7de30060  sq          $v1, 0x60($t7)
    ctx->pc = 0x3624ecu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 96), GPR_VEC(ctx, 3));
    // 0x3624f0: 0x9327000c  lbu         $a3, 0xC($t9)
    ctx->pc = 0x3624f0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 12)));
    // 0x3624f4: 0x9328001d  lbu         $t0, 0x1D($t9)
    ctx->pc = 0x3624f4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 29)));
    // 0x3624f8: 0x92120006  lbu         $s2, 0x6($s0)
    ctx->pc = 0x3624f8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3624fc: 0x92130046  lbu         $s3, 0x46($s0)
    ctx->pc = 0x3624fcu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x362500: 0x9323000d  lbu         $v1, 0xD($t9)
    ctx->pc = 0x362500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 13)));
    // 0x362504: 0x9331001c  lbu         $s1, 0x1C($t9)
    ctx->pc = 0x362504u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 28)));
    // 0x362508: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362508u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x36250c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x36250cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x362510: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362510u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362514: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362514u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x362518: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x362518u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36251c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36251cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362520: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x362520u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362524: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x362524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362528: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362528u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x36252c: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x36252cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362530: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x362530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362534: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362534u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362538: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362538u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x36253c: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x36253cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362540: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x362544: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362544u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362548: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362548u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36254c: 0x92120007  lbu         $s2, 0x7($s0)
    ctx->pc = 0x36254cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x362550: 0x92130047  lbu         $s3, 0x47($s0)
    ctx->pc = 0x362550u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x362554: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362554u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362558: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362558u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36255c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x36255cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362560: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x362560u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362564: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362564u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x362568: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362568u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x36256c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x36256cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362570: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x362574: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362574u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362578: 0x9331001e  lbu         $s1, 0x1E($t9)
    ctx->pc = 0x362578u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 30)));
    // 0x36257c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x36257cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362580: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362580u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362584: 0x9323000f  lbu         $v1, 0xF($t9)
    ctx->pc = 0x362584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 15)));
    // 0x362588: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x362588u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x36258c: 0x9327000e  lbu         $a3, 0xE($t9)
    ctx->pc = 0x36258cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 14)));
    // 0x362590: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x362590u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362594: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362594u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x362598: 0x9328001f  lbu         $t0, 0x1F($t9)
    ctx->pc = 0x362598u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 31)));
    // 0x36259c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36259cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3625a0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3625a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3625a4: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x3625a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3625a8: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3625a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3625ac: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3625acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3625b0: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x3625b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3625b4: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x3625b4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x3625b8: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x3625b8u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x3625bc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3625bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3625c0: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x3625c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3625c4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3625c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3625c8: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x3625c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x3625cc: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3625ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3625d0: 0x67390020  daddiu      $t9, $t9, 0x20
    ctx->pc = 0x3625d0u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)32);
    // 0x3625d4: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x3625d4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3625d8: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x3625d8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3625dc: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x3625dcu;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x3625e0: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x3625e0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3625e4: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x3625e4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3625e8: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x3625e8u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3625ec: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x3625ecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3625f0: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x3625f0u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x3625f4: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3625f4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3625f8: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x3625f8u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x3625fc: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x3625fcu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362600: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x362600u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x362604: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x362604u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x362608: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x362608u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x36260c: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x36260cu;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x362610: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x362610u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x362614: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x362614u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x362618: 0x7de30030  sq          $v1, 0x30($t7)
    ctx->pc = 0x362618u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 48), GPR_VEC(ctx, 3));
    // 0x36261c: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x36261cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x362620: 0x7de30070  sq          $v1, 0x70($t7)
    ctx->pc = 0x362620u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 112), GPR_VEC(ctx, 3));
    // 0x362624: 0x66100008  daddiu      $s0, $s0, 0x8
    ctx->pc = 0x362624u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)8);
    // 0x362628: 0x14783c  dsll32      $t7, $s4, 0
    ctx->pc = 0x362628u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) << (32 + 0));
    // 0x36262c: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x36262cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x362630: 0xcf2000a0  pref        0x00, 0xA0($t9)
    ctx->pc = 0x362630u;
    // PREF instruction (ignored)
    // 0x362634: 0xcf000100  pref        0x00, 0x100($t8)
    ctx->pc = 0x362634u;
    // PREF instruction (ignored)
    // 0x362638: 0xcf000140  pref        0x00, 0x140($t8)
    ctx->pc = 0x362638u;
    // PREF instruction (ignored)
    // 0x36263c: 0x24540300  addiu       $s4, $v0, 0x300
    ctx->pc = 0x36263cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x362640: 0x93270000  lbu         $a3, 0x0($t9)
    ctx->pc = 0x362640u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x362644: 0x93280011  lbu         $t0, 0x11($t9)
    ctx->pc = 0x362644u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 17)));
    // 0x362648: 0x92120000  lbu         $s2, 0x0($s0)
    ctx->pc = 0x362648u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36264c: 0x92130040  lbu         $s3, 0x40($s0)
    ctx->pc = 0x36264cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x362650: 0x93230001  lbu         $v1, 0x1($t9)
    ctx->pc = 0x362650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 1)));
    // 0x362654: 0x93310010  lbu         $s1, 0x10($t9)
    ctx->pc = 0x362654u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x362658: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362658u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x36265c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x36265cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x362660: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362660u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362664: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362664u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x362668: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x362668u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36266c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36266cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362670: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x362670u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362674: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x362674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362678: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x36267c: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x36267cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362680: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x362680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362684: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362684u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362688: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362688u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x36268c: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x36268cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362690: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x362694: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362694u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362698: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362698u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36269c: 0x92120001  lbu         $s2, 0x1($s0)
    ctx->pc = 0x36269cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3626a0: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x3626a0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3626a4: 0x92130041  lbu         $s3, 0x41($s0)
    ctx->pc = 0x3626a4u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x3626a8: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x3626a8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3626ac: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x3626acu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3626b0: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x3626b0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3626b4: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x3626b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3626b8: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x3626b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3626bc: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3626bcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3626c0: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3626c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3626c4: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3626c4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3626c8: 0x93310012  lbu         $s1, 0x12($t9)
    ctx->pc = 0x3626c8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 18)));
    // 0x3626cc: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x3626ccu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x3626d0: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x3626d0u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x3626d4: 0x93230003  lbu         $v1, 0x3($t9)
    ctx->pc = 0x3626d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 3)));
    // 0x3626d8: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x3626d8u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x3626dc: 0x93270002  lbu         $a3, 0x2($t9)
    ctx->pc = 0x3626dcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 2)));
    // 0x3626e0: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x3626e0u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x3626e4: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x3626e4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x3626e8: 0x93280013  lbu         $t0, 0x13($t9)
    ctx->pc = 0x3626e8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 19)));
    // 0x3626ec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3626ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3626f0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3626f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3626f4: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x3626f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3626f8: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3626f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3626fc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3626fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362700: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362700u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362704: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x362704u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362708: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x362708u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x36270c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x36270cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x362710: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362710u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362714: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362714u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362718: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x36271c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36271cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362720: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362720u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362724: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362724u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362728: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x362728u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x36272c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x36272cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362730: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362730u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362734: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x362734u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362738: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362738u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x36273c: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x36273cu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x362740: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362740u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362744: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x362744u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362748: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362748u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x36274c: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x36274cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x362750: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x362750u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x362754: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x362754u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362758: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x362758u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x36275c: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x36275cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x362760: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x362760u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x362764: 0x7de30000  sq          $v1, 0x0($t7)
    ctx->pc = 0x362764u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 3));
    // 0x362768: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x362768u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x36276c: 0x7de30040  sq          $v1, 0x40($t7)
    ctx->pc = 0x36276cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 64), GPR_VEC(ctx, 3));
    // 0x362770: 0x93270004  lbu         $a3, 0x4($t9)
    ctx->pc = 0x362770u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x362774: 0x93280015  lbu         $t0, 0x15($t9)
    ctx->pc = 0x362774u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 21)));
    // 0x362778: 0x92120002  lbu         $s2, 0x2($s0)
    ctx->pc = 0x362778u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x36277c: 0x92130042  lbu         $s3, 0x42($s0)
    ctx->pc = 0x36277cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x362780: 0x93230005  lbu         $v1, 0x5($t9)
    ctx->pc = 0x362780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 5)));
    // 0x362784: 0x93310014  lbu         $s1, 0x14($t9)
    ctx->pc = 0x362784u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 20)));
    // 0x362788: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362788u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x36278c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x36278cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x362790: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362790u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362794: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362794u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x362798: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x362798u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36279c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36279cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3627a0: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3627a0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3627a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3627a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3627a8: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3627a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3627ac: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x3627acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3627b0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3627b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3627b4: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x3627b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3627b8: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x3627b8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x3627bc: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x3627bcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x3627c0: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x3627c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x3627c4: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x3627c4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3627c8: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x3627c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3627cc: 0x92120003  lbu         $s2, 0x3($s0)
    ctx->pc = 0x3627ccu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3627d0: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x3627d0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3627d4: 0x92130043  lbu         $s3, 0x43($s0)
    ctx->pc = 0x3627d4u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
    // 0x3627d8: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x3627d8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3627dc: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x3627dcu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3627e0: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x3627e0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3627e4: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x3627e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3627e8: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x3627e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3627ec: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3627ecu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3627f0: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3627f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3627f4: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3627f4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3627f8: 0x93310016  lbu         $s1, 0x16($t9)
    ctx->pc = 0x3627f8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 22)));
    // 0x3627fc: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x3627fcu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362800: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362800u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362804: 0x93230007  lbu         $v1, 0x7($t9)
    ctx->pc = 0x362804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 7)));
    // 0x362808: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x362808u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x36280c: 0x93270006  lbu         $a3, 0x6($t9)
    ctx->pc = 0x36280cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 6)));
    // 0x362810: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x362810u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362814: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362814u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x362818: 0x93280017  lbu         $t0, 0x17($t9)
    ctx->pc = 0x362818u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 23)));
    // 0x36281c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36281cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362820: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362820u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x362824: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x362824u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362828: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x362828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x36282c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36282cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362830: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362830u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362834: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x362834u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362838: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x362838u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x36283c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x36283cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x362840: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362840u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362844: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362844u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362848: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x36284c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36284cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362850: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362850u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362854: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362854u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362858: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x362858u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x36285c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x36285cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362860: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362860u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362864: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x362864u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362868: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362868u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x36286c: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x36286cu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x362870: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362870u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362874: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x362874u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362878: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362878u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x36287c: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x36287cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x362880: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x362880u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x362884: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x362884u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362888: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x362888u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x36288c: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x36288cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x362890: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x362890u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x362894: 0x7de30010  sq          $v1, 0x10($t7)
    ctx->pc = 0x362894u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 16), GPR_VEC(ctx, 3));
    // 0x362898: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x362898u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x36289c: 0x7de30050  sq          $v1, 0x50($t7)
    ctx->pc = 0x36289cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 80), GPR_VEC(ctx, 3));
    // 0x3628a0: 0x93270008  lbu         $a3, 0x8($t9)
    ctx->pc = 0x3628a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x3628a4: 0x93280019  lbu         $t0, 0x19($t9)
    ctx->pc = 0x3628a4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 25)));
    // 0x3628a8: 0x92120004  lbu         $s2, 0x4($s0)
    ctx->pc = 0x3628a8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3628ac: 0x92130044  lbu         $s3, 0x44($s0)
    ctx->pc = 0x3628acu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3628b0: 0x93230009  lbu         $v1, 0x9($t9)
    ctx->pc = 0x3628b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 9)));
    // 0x3628b4: 0x93310018  lbu         $s1, 0x18($t9)
    ctx->pc = 0x3628b4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x3628b8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3628b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3628bc: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3628bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3628c0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3628c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3628c4: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x3628c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3628c8: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3628c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3628cc: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3628ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3628d0: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3628d0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3628d4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3628d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3628d8: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3628d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3628dc: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x3628dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3628e0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3628e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3628e4: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x3628e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3628e8: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x3628e8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x3628ec: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x3628ecu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x3628f0: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x3628f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x3628f4: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x3628f4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3628f8: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x3628f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3628fc: 0x92120005  lbu         $s2, 0x5($s0)
    ctx->pc = 0x3628fcu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x362900: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362900u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362904: 0x92130045  lbu         $s3, 0x45($s0)
    ctx->pc = 0x362904u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x362908: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362908u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36290c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x36290cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362910: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x362910u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362914: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362914u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x362918: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362918u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x36291c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x36291cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362920: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x362924: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362924u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362928: 0x9331001a  lbu         $s1, 0x1A($t9)
    ctx->pc = 0x362928u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 26)));
    // 0x36292c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x36292cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362930: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362930u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362934: 0x9323000b  lbu         $v1, 0xB($t9)
    ctx->pc = 0x362934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 11)));
    // 0x362938: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x362938u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x36293c: 0x9327000a  lbu         $a3, 0xA($t9)
    ctx->pc = 0x36293cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 10)));
    // 0x362940: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x362940u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362944: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362944u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x362948: 0x9328001b  lbu         $t0, 0x1B($t9)
    ctx->pc = 0x362948u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 27)));
    // 0x36294c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36294cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362950: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362950u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x362954: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x362954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362958: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x362958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x36295c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36295cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362960: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362960u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362964: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x362964u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362968: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x362968u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x36296c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x36296cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x362970: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362970u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362974: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362974u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362978: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x36297c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36297cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362980: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362980u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362984: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362984u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362988: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x362988u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x36298c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x36298cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362990: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362990u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362994: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x362994u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362998: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362998u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x36299c: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x36299cu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x3629a0: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3629a0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3629a4: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x3629a4u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x3629a8: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x3629a8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x3629ac: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x3629acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x3629b0: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x3629b0u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x3629b4: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x3629b4u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x3629b8: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x3629b8u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x3629bc: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x3629bcu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x3629c0: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x3629c0u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x3629c4: 0x7de30020  sq          $v1, 0x20($t7)
    ctx->pc = 0x3629c4u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 32), GPR_VEC(ctx, 3));
    // 0x3629c8: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x3629c8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x3629cc: 0x7de30060  sq          $v1, 0x60($t7)
    ctx->pc = 0x3629ccu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 96), GPR_VEC(ctx, 3));
    // 0x3629d0: 0x9327000c  lbu         $a3, 0xC($t9)
    ctx->pc = 0x3629d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 12)));
    // 0x3629d4: 0x9328001d  lbu         $t0, 0x1D($t9)
    ctx->pc = 0x3629d4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 29)));
    // 0x3629d8: 0x92120006  lbu         $s2, 0x6($s0)
    ctx->pc = 0x3629d8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3629dc: 0x92130046  lbu         $s3, 0x46($s0)
    ctx->pc = 0x3629dcu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x3629e0: 0x9323000d  lbu         $v1, 0xD($t9)
    ctx->pc = 0x3629e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 13)));
    // 0x3629e4: 0x9331001c  lbu         $s1, 0x1C($t9)
    ctx->pc = 0x3629e4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 28)));
    // 0x3629e8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3629e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3629ec: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3629ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3629f0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3629f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3629f4: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x3629f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3629f8: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3629f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3629fc: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3629fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362a00: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x362a00u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362a04: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x362a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362a08: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362a08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x362a0c: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x362a0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362a10: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x362a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362a14: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362a14u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362a18: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362a18u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x362a1c: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x362a1cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362a20: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x362a24: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362a24u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362a28: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362a28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362a2c: 0x92120007  lbu         $s2, 0x7($s0)
    ctx->pc = 0x362a2cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x362a30: 0x92130047  lbu         $s3, 0x47($s0)
    ctx->pc = 0x362a30u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x362a34: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362a34u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362a38: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362a38u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362a3c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x362a3cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362a40: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x362a40u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362a44: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362a44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x362a48: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362a48u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x362a4c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x362a4cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362a50: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x362a54: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362a54u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362a58: 0x9331001e  lbu         $s1, 0x1E($t9)
    ctx->pc = 0x362a58u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 30)));
    // 0x362a5c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x362a5cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362a60: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362a60u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362a64: 0x9323000f  lbu         $v1, 0xF($t9)
    ctx->pc = 0x362a64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 15)));
    // 0x362a68: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x362a68u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x362a6c: 0x9327000e  lbu         $a3, 0xE($t9)
    ctx->pc = 0x362a6cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 14)));
    // 0x362a70: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x362a70u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362a74: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362a74u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x362a78: 0x9328001f  lbu         $t0, 0x1F($t9)
    ctx->pc = 0x362a78u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 31)));
    // 0x362a7c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x362a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362a80: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362a80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x362a84: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x362a84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362a88: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x362a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x362a8c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x362a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362a90: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362a90u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362a94: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x362a94u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362a98: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x362a98u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x362a9c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x362a9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x362aa0: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362aa0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362aa4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362aa8: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x362aac: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x362aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362ab0: 0x67390020  daddiu      $t9, $t9, 0x20
    ctx->pc = 0x362ab0u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)32);
    // 0x362ab4: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362ab4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362ab8: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362ab8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362abc: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x362abcu;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x362ac0: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x362ac0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362ac4: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362ac4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362ac8: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x362ac8u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362acc: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362accu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x362ad0: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x362ad0u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x362ad4: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362ad4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362ad8: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x362ad8u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362adc: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362adcu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362ae0: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x362ae0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x362ae4: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x362ae4u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x362ae8: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x362ae8u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362aec: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x362aecu;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x362af0: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x362af0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x362af4: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x362af4u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x362af8: 0x7de30030  sq          $v1, 0x30($t7)
    ctx->pc = 0x362af8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 48), GPR_VEC(ctx, 3));
    // 0x362afc: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x362afcu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x362b00: 0x7de30070  sq          $v1, 0x70($t7)
    ctx->pc = 0x362b00u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 112), GPR_VEC(ctx, 3));
    // 0x362b04: 0x66100008  daddiu      $s0, $s0, 0x8
    ctx->pc = 0x362b04u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)8);
    // 0x362b08: 0x14783c  dsll32      $t7, $s4, 0
    ctx->pc = 0x362b08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) << (32 + 0));
    // 0x362b0c: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x362b0cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x362b10: 0xcf2000c0  pref        0x00, 0xC0($t9)
    ctx->pc = 0x362b10u;
    // PREF instruction (ignored)
    // 0x362b14: 0xcf000100  pref        0x00, 0x100($t8)
    ctx->pc = 0x362b14u;
    // PREF instruction (ignored)
    // 0x362b18: 0xcf000140  pref        0x00, 0x140($t8)
    ctx->pc = 0x362b18u;
    // PREF instruction (ignored)
    // 0x362b1c: 0x24450380  addiu       $a1, $v0, 0x380
    ctx->pc = 0x362b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x362b20: 0x93270000  lbu         $a3, 0x0($t9)
    ctx->pc = 0x362b20u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x362b24: 0x93280011  lbu         $t0, 0x11($t9)
    ctx->pc = 0x362b24u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 17)));
    // 0x362b28: 0x92120000  lbu         $s2, 0x0($s0)
    ctx->pc = 0x362b28u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x362b2c: 0x92130040  lbu         $s3, 0x40($s0)
    ctx->pc = 0x362b2cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x362b30: 0x93230001  lbu         $v1, 0x1($t9)
    ctx->pc = 0x362b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 1)));
    // 0x362b34: 0x93310010  lbu         $s1, 0x10($t9)
    ctx->pc = 0x362b34u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x362b38: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362b38u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x362b3c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x362b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x362b40: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362b40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362b44: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362b44u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x362b48: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x362b48u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x362b4c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x362b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362b50: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x362b50u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362b54: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x362b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362b58: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362b58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x362b5c: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x362b5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362b60: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x362b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362b64: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362b64u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362b68: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362b68u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x362b6c: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x362b6cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362b70: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x362b74: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362b74u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362b78: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362b78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362b7c: 0x92120001  lbu         $s2, 0x1($s0)
    ctx->pc = 0x362b7cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x362b80: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362b80u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362b84: 0x92130041  lbu         $s3, 0x41($s0)
    ctx->pc = 0x362b84u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x362b88: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362b88u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362b8c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x362b8cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362b90: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x362b90u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362b94: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362b94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x362b98: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362b98u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x362b9c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x362b9cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362ba0: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362ba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x362ba4: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362ba4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362ba8: 0x93310012  lbu         $s1, 0x12($t9)
    ctx->pc = 0x362ba8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 18)));
    // 0x362bac: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x362bacu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362bb0: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362bb0u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362bb4: 0x93230003  lbu         $v1, 0x3($t9)
    ctx->pc = 0x362bb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 3)));
    // 0x362bb8: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x362bb8u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x362bbc: 0x93270002  lbu         $a3, 0x2($t9)
    ctx->pc = 0x362bbcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 2)));
    // 0x362bc0: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x362bc0u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362bc4: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362bc4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x362bc8: 0x93280013  lbu         $t0, 0x13($t9)
    ctx->pc = 0x362bc8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 19)));
    // 0x362bcc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x362bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362bd0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x362bd4: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x362bd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362bd8: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x362bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x362bdc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x362bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362be0: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362be0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362be4: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x362be4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362be8: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x362be8u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x362bec: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x362becu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x362bf0: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362bf0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362bf4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362bf8: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x362bfc: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x362bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362c00: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362c00u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362c04: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362c04u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362c08: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x362c08u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x362c0c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x362c0cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362c10: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362c10u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362c14: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x362c14u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362c18: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362c18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x362c1c: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x362c1cu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x362c20: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362c20u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362c24: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x362c24u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362c28: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362c28u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362c2c: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x362c2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x362c30: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x362c30u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x362c34: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x362c34u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362c38: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x362c38u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x362c3c: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x362c3cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x362c40: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x362c40u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x362c44: 0x7de30000  sq          $v1, 0x0($t7)
    ctx->pc = 0x362c44u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 3));
    // 0x362c48: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x362c48u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x362c4c: 0x7de30040  sq          $v1, 0x40($t7)
    ctx->pc = 0x362c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 64), GPR_VEC(ctx, 3));
    // 0x362c50: 0x93270004  lbu         $a3, 0x4($t9)
    ctx->pc = 0x362c50u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x362c54: 0x93280015  lbu         $t0, 0x15($t9)
    ctx->pc = 0x362c54u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 21)));
    // 0x362c58: 0x92120002  lbu         $s2, 0x2($s0)
    ctx->pc = 0x362c58u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x362c5c: 0x92130042  lbu         $s3, 0x42($s0)
    ctx->pc = 0x362c5cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x362c60: 0x93230005  lbu         $v1, 0x5($t9)
    ctx->pc = 0x362c60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 5)));
    // 0x362c64: 0x93310014  lbu         $s1, 0x14($t9)
    ctx->pc = 0x362c64u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 20)));
    // 0x362c68: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362c68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x362c6c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x362c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x362c70: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362c70u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362c74: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362c74u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x362c78: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x362c78u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x362c7c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x362c7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362c80: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x362c80u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362c84: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x362c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362c88: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362c88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x362c8c: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x362c8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362c90: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x362c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362c94: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362c94u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362c98: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362c98u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x362c9c: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x362c9cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362ca0: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x362ca4: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362ca4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362ca8: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362ca8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362cac: 0x92120003  lbu         $s2, 0x3($s0)
    ctx->pc = 0x362cacu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x362cb0: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362cb0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362cb4: 0x92130043  lbu         $s3, 0x43($s0)
    ctx->pc = 0x362cb4u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
    // 0x362cb8: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362cb8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362cbc: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x362cbcu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362cc0: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x362cc0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362cc4: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362cc4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x362cc8: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362cc8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x362ccc: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x362cccu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362cd0: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x362cd4: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362cd4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362cd8: 0x93310016  lbu         $s1, 0x16($t9)
    ctx->pc = 0x362cd8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 22)));
    // 0x362cdc: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x362cdcu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362ce0: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362ce0u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362ce4: 0x93230007  lbu         $v1, 0x7($t9)
    ctx->pc = 0x362ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 7)));
    // 0x362ce8: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x362ce8u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x362cec: 0x93270006  lbu         $a3, 0x6($t9)
    ctx->pc = 0x362cecu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 6)));
    // 0x362cf0: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x362cf0u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362cf4: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362cf4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x362cf8: 0x93280017  lbu         $t0, 0x17($t9)
    ctx->pc = 0x362cf8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 23)));
    // 0x362cfc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x362cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362d00: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362d00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x362d04: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x362d04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362d08: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x362d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x362d0c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x362d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362d10: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362d10u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362d14: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x362d14u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362d18: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x362d18u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x362d1c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x362d1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x362d20: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362d20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362d24: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362d24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362d28: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362d28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x362d2c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x362d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362d30: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362d30u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362d34: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362d34u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362d38: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x362d38u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x362d3c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x362d3cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362d40: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362d40u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362d44: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x362d44u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362d48: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362d48u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x362d4c: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x362d4cu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x362d50: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362d50u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362d54: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x362d54u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362d58: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362d58u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362d5c: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x362d5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x362d60: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x362d60u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x362d64: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x362d64u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362d68: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x362d68u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x362d6c: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x362d6cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x362d70: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x362d70u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x362d74: 0x7de30010  sq          $v1, 0x10($t7)
    ctx->pc = 0x362d74u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 16), GPR_VEC(ctx, 3));
    // 0x362d78: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x362d78u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x362d7c: 0x7de30050  sq          $v1, 0x50($t7)
    ctx->pc = 0x362d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 80), GPR_VEC(ctx, 3));
    // 0x362d80: 0x93270008  lbu         $a3, 0x8($t9)
    ctx->pc = 0x362d80u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x362d84: 0x93280019  lbu         $t0, 0x19($t9)
    ctx->pc = 0x362d84u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 25)));
    // 0x362d88: 0x92120004  lbu         $s2, 0x4($s0)
    ctx->pc = 0x362d88u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x362d8c: 0x92130044  lbu         $s3, 0x44($s0)
    ctx->pc = 0x362d8cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x362d90: 0x93230009  lbu         $v1, 0x9($t9)
    ctx->pc = 0x362d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 9)));
    // 0x362d94: 0x93310018  lbu         $s1, 0x18($t9)
    ctx->pc = 0x362d94u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x362d98: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362d98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x362d9c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x362d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x362da0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362da0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362da4: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362da4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x362da8: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x362da8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x362dac: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x362dacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362db0: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x362db0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362db4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x362db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362db8: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362db8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x362dbc: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x362dbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362dc0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x362dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362dc4: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362dc8: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362dc8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x362dcc: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x362dccu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362dd0: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x362dd4: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362dd4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362dd8: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362dd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362ddc: 0x92120005  lbu         $s2, 0x5($s0)
    ctx->pc = 0x362ddcu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x362de0: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362de0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362de4: 0x92130045  lbu         $s3, 0x45($s0)
    ctx->pc = 0x362de4u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x362de8: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362de8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362dec: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x362decu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362df0: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x362df0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362df4: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362df4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x362df8: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362df8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x362dfc: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x362dfcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362e00: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362e00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x362e04: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362e04u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362e08: 0x9331001a  lbu         $s1, 0x1A($t9)
    ctx->pc = 0x362e08u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 26)));
    // 0x362e0c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x362e0cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362e10: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362e10u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362e14: 0x9323000b  lbu         $v1, 0xB($t9)
    ctx->pc = 0x362e14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 11)));
    // 0x362e18: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x362e18u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x362e1c: 0x9327000a  lbu         $a3, 0xA($t9)
    ctx->pc = 0x362e1cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 10)));
    // 0x362e20: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x362e20u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362e24: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362e24u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x362e28: 0x9328001b  lbu         $t0, 0x1B($t9)
    ctx->pc = 0x362e28u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 27)));
    // 0x362e2c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x362e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362e30: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362e30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x362e34: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x362e34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362e38: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x362e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x362e3c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x362e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362e40: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362e40u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362e44: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x362e44u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362e48: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x362e48u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x362e4c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x362e4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x362e50: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362e50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362e54: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362e54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362e58: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362e58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x362e5c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x362e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362e60: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362e60u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362e64: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362e64u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362e68: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x362e68u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x362e6c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x362e6cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362e70: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362e70u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362e74: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x362e74u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362e78: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362e78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x362e7c: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x362e7cu;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x362e80: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362e80u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362e84: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x362e84u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362e88: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362e88u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362e8c: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x362e8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x362e90: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x362e90u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x362e94: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x362e94u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362e98: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x362e98u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x362e9c: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x362e9cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x362ea0: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x362ea0u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x362ea4: 0x7de30020  sq          $v1, 0x20($t7)
    ctx->pc = 0x362ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 32), GPR_VEC(ctx, 3));
    // 0x362ea8: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x362ea8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x362eac: 0x7de30060  sq          $v1, 0x60($t7)
    ctx->pc = 0x362eacu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 96), GPR_VEC(ctx, 3));
    // 0x362eb0: 0x9327000c  lbu         $a3, 0xC($t9)
    ctx->pc = 0x362eb0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 12)));
    // 0x362eb4: 0x9328001d  lbu         $t0, 0x1D($t9)
    ctx->pc = 0x362eb4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 29)));
    // 0x362eb8: 0x92120006  lbu         $s2, 0x6($s0)
    ctx->pc = 0x362eb8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x362ebc: 0x92130046  lbu         $s3, 0x46($s0)
    ctx->pc = 0x362ebcu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x362ec0: 0x9323000d  lbu         $v1, 0xD($t9)
    ctx->pc = 0x362ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 13)));
    // 0x362ec4: 0x9331001c  lbu         $s1, 0x1C($t9)
    ctx->pc = 0x362ec4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 28)));
    // 0x362ec8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x362ecc: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x362eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x362ed0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362ed4: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x362ed8: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x362ed8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x362edc: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x362edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362ee0: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x362ee0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362ee4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x362ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362ee8: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x362eec: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x362eecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362ef0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x362ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362ef4: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362ef8: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362ef8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x362efc: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x362efcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362f00: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x362f04: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362f04u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362f08: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362f08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362f0c: 0x92120007  lbu         $s2, 0x7($s0)
    ctx->pc = 0x362f0cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x362f10: 0x92130047  lbu         $s3, 0x47($s0)
    ctx->pc = 0x362f10u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x362f14: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362f14u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362f18: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362f18u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362f1c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x362f1cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362f20: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x362f20u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362f24: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362f24u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x362f28: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x362f28u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x362f2c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x362f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x362f30: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x362f30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x362f34: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362f34u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362f38: 0x9331001e  lbu         $s1, 0x1E($t9)
    ctx->pc = 0x362f38u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 30)));
    // 0x362f3c: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x362f3cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362f40: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362f40u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362f44: 0x9323000f  lbu         $v1, 0xF($t9)
    ctx->pc = 0x362f44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 15)));
    // 0x362f48: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x362f48u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x362f4c: 0x9327000e  lbu         $a3, 0xE($t9)
    ctx->pc = 0x362f4cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 14)));
    // 0x362f50: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x362f50u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362f54: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x362f54u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x362f58: 0x9328001f  lbu         $t0, 0x1F($t9)
    ctx->pc = 0x362f58u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 31)));
    // 0x362f5c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x362f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362f60: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x362f60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x362f64: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x362f64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x362f68: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x362f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x362f6c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x362f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x362f70: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x362f70u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362f74: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x362f74u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x362f78: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x362f78u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x362f7c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x362f7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x362f80: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x362f80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362f84: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x362f84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x362f88: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x362f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x362f8c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x362f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x362f90: 0x67390020  daddiu      $t9, $t9, 0x20
    ctx->pc = 0x362f90u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)32);
    // 0x362f94: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x362f94u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x362f98: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x362f98u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x362f9c: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x362f9cu;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x362fa0: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x362fa0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x362fa4: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x362fa4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362fa8: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x362fa8u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x362fac: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x362facu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x362fb0: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x362fb0u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x362fb4: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x362fb4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x362fb8: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x362fb8u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x362fbc: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x362fbcu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x362fc0: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x362fc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x362fc4: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x362fc4u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x362fc8: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x362fc8u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x362fcc: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x362fccu;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x362fd0: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x362fd0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x362fd4: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x362fd4u;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x362fd8: 0x7de30030  sq          $v1, 0x30($t7)
    ctx->pc = 0x362fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 48), GPR_VEC(ctx, 3));
    // 0x362fdc: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x362fdcu;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x362fe0: 0x7de30070  sq          $v1, 0x70($t7)
    ctx->pc = 0x362fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 112), GPR_VEC(ctx, 3));
    // 0x362fe4: 0x66100008  daddiu      $s0, $s0, 0x8
    ctx->pc = 0x362fe4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)8);
    // 0x362fe8: 0x5783c  dsll32      $t7, $a1, 0
    ctx->pc = 0x362fe8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) << (32 + 0));
    // 0x362fec: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x362fecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x362ff0: 0xcf2000e0  pref        0x00, 0xE0($t9)
    ctx->pc = 0x362ff0u;
    // PREF instruction (ignored)
    // 0x362ff4: 0xcf000100  pref        0x00, 0x100($t8)
    ctx->pc = 0x362ff4u;
    // PREF instruction (ignored)
    // 0x362ff8: 0xcf000140  pref        0x00, 0x140($t8)
    ctx->pc = 0x362ff8u;
    // PREF instruction (ignored)
    // 0x362ffc: 0x93270000  lbu         $a3, 0x0($t9)
    ctx->pc = 0x362ffcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x363000: 0x93280011  lbu         $t0, 0x11($t9)
    ctx->pc = 0x363000u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 17)));
    // 0x363004: 0x92120000  lbu         $s2, 0x0($s0)
    ctx->pc = 0x363004u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x363008: 0x92130040  lbu         $s3, 0x40($s0)
    ctx->pc = 0x363008u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x36300c: 0x93230001  lbu         $v1, 0x1($t9)
    ctx->pc = 0x36300cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 1)));
    // 0x363010: 0x93310010  lbu         $s1, 0x10($t9)
    ctx->pc = 0x363010u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x363014: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x363014u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x363018: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x363018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x36301c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x36301cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363020: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x363020u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x363024: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x363024u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x363028: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x363028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x36302c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x36302cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x363030: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x363030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x363034: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x363034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x363038: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x363038u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x36303c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36303cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x363040: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x363040u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x363044: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x363044u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x363048: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x363048u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x36304c: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x36304cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x363050: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x363050u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x363054: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x363054u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x363058: 0x92120001  lbu         $s2, 0x1($s0)
    ctx->pc = 0x363058u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x36305c: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x36305cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x363060: 0x92130041  lbu         $s3, 0x41($s0)
    ctx->pc = 0x363060u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x363064: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x363064u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x363068: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x363068u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x36306c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x36306cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x363070: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x363070u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x363074: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x363074u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x363078: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x363078u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x36307c: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x36307cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x363080: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x363080u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x363084: 0x93310012  lbu         $s1, 0x12($t9)
    ctx->pc = 0x363084u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 18)));
    // 0x363088: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x363088u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x36308c: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x36308cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x363090: 0x93230003  lbu         $v1, 0x3($t9)
    ctx->pc = 0x363090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 3)));
    // 0x363094: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x363094u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x363098: 0x93270002  lbu         $a3, 0x2($t9)
    ctx->pc = 0x363098u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 2)));
    // 0x36309c: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x36309cu;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x3630a0: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x3630a0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x3630a4: 0x93280013  lbu         $t0, 0x13($t9)
    ctx->pc = 0x3630a4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 19)));
    // 0x3630a8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3630a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3630ac: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3630acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3630b0: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x3630b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3630b4: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3630b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3630b8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3630b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3630bc: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x3630bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3630c0: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x3630c0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x3630c4: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x3630c4u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x3630c8: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3630c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3630cc: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x3630ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3630d0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3630d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3630d4: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x3630d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x3630d8: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3630d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3630dc: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x3630dcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3630e0: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x3630e0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3630e4: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x3630e4u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x3630e8: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x3630e8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3630ec: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x3630ecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3630f0: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x3630f0u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3630f4: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x3630f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3630f8: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x3630f8u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x3630fc: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3630fcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x363100: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x363100u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x363104: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x363104u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x363108: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x363108u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x36310c: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x36310cu;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x363110: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x363110u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x363114: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x363114u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x363118: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x363118u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x36311c: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x36311cu;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x363120: 0x7de30000  sq          $v1, 0x0($t7)
    ctx->pc = 0x363120u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 3));
    // 0x363124: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x363124u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x363128: 0x7de30040  sq          $v1, 0x40($t7)
    ctx->pc = 0x363128u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 64), GPR_VEC(ctx, 3));
    // 0x36312c: 0x93270004  lbu         $a3, 0x4($t9)
    ctx->pc = 0x36312cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x363130: 0x93280015  lbu         $t0, 0x15($t9)
    ctx->pc = 0x363130u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 21)));
    // 0x363134: 0x92120002  lbu         $s2, 0x2($s0)
    ctx->pc = 0x363134u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x363138: 0x92130042  lbu         $s3, 0x42($s0)
    ctx->pc = 0x363138u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x36313c: 0x93230005  lbu         $v1, 0x5($t9)
    ctx->pc = 0x36313cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 5)));
    // 0x363140: 0x93310014  lbu         $s1, 0x14($t9)
    ctx->pc = 0x363140u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 20)));
    // 0x363144: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x363144u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x363148: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x363148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x36314c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x36314cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363150: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x363150u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x363154: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x363154u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x363158: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x363158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x36315c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x36315cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x363160: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x363160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x363164: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x363164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x363168: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x363168u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x36316c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36316cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x363170: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x363170u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x363174: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x363174u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x363178: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x363178u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x36317c: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x36317cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x363180: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x363180u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x363184: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x363184u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x363188: 0x92120003  lbu         $s2, 0x3($s0)
    ctx->pc = 0x363188u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x36318c: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x36318cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x363190: 0x92130043  lbu         $s3, 0x43($s0)
    ctx->pc = 0x363190u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
    // 0x363194: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x363194u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x363198: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x363198u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x36319c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x36319cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3631a0: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x3631a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3631a4: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x3631a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3631a8: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3631a8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3631ac: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3631acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3631b0: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3631b0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3631b4: 0x93310016  lbu         $s1, 0x16($t9)
    ctx->pc = 0x3631b4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 22)));
    // 0x3631b8: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x3631b8u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x3631bc: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x3631bcu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x3631c0: 0x93230007  lbu         $v1, 0x7($t9)
    ctx->pc = 0x3631c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 7)));
    // 0x3631c4: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x3631c4u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x3631c8: 0x93270006  lbu         $a3, 0x6($t9)
    ctx->pc = 0x3631c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 6)));
    // 0x3631cc: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x3631ccu;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x3631d0: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x3631d0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x3631d4: 0x93280017  lbu         $t0, 0x17($t9)
    ctx->pc = 0x3631d4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 23)));
    // 0x3631d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3631d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3631dc: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3631dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3631e0: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x3631e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3631e4: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3631e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3631e8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3631e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3631ec: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x3631ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3631f0: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x3631f0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x3631f4: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x3631f4u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x3631f8: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3631f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3631fc: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x3631fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x363200: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363200u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363204: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x363204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x363208: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x363208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x36320c: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x36320cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x363210: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x363210u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x363214: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x363214u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x363218: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x363218u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x36321c: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x36321cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x363220: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x363220u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x363224: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x363224u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x363228: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x363228u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x36322c: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x36322cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x363230: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x363230u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x363234: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x363234u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x363238: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x363238u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x36323c: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x36323cu;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x363240: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x363240u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x363244: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x363244u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x363248: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x363248u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x36324c: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x36324cu;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x363250: 0x7de30010  sq          $v1, 0x10($t7)
    ctx->pc = 0x363250u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 16), GPR_VEC(ctx, 3));
    // 0x363254: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x363254u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x363258: 0x7de30050  sq          $v1, 0x50($t7)
    ctx->pc = 0x363258u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 80), GPR_VEC(ctx, 3));
    // 0x36325c: 0x93270008  lbu         $a3, 0x8($t9)
    ctx->pc = 0x36325cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x363260: 0x93280019  lbu         $t0, 0x19($t9)
    ctx->pc = 0x363260u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 25)));
    // 0x363264: 0x92120004  lbu         $s2, 0x4($s0)
    ctx->pc = 0x363264u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x363268: 0x92130044  lbu         $s3, 0x44($s0)
    ctx->pc = 0x363268u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x36326c: 0x93230009  lbu         $v1, 0x9($t9)
    ctx->pc = 0x36326cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 9)));
    // 0x363270: 0x93310018  lbu         $s1, 0x18($t9)
    ctx->pc = 0x363270u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x363274: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x363274u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x363278: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x363278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x36327c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x36327cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363280: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x363280u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x363284: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x363284u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x363288: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x363288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x36328c: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x36328cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x363290: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x363290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x363294: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x363294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x363298: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x363298u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x36329c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36329cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3632a0: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x3632a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3632a4: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x3632a4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x3632a8: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x3632a8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x3632ac: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x3632acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x3632b0: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x3632b0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3632b4: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x3632b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3632b8: 0x92120005  lbu         $s2, 0x5($s0)
    ctx->pc = 0x3632b8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x3632bc: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x3632bcu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3632c0: 0x92130045  lbu         $s3, 0x45($s0)
    ctx->pc = 0x3632c0u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x3632c4: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x3632c4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3632c8: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x3632c8u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3632cc: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x3632ccu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3632d0: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x3632d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3632d4: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x3632d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3632d8: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3632d8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3632dc: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3632dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3632e0: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x3632e0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3632e4: 0x9331001a  lbu         $s1, 0x1A($t9)
    ctx->pc = 0x3632e4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 26)));
    // 0x3632e8: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x3632e8u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x3632ec: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x3632ecu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x3632f0: 0x9323000b  lbu         $v1, 0xB($t9)
    ctx->pc = 0x3632f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 11)));
    // 0x3632f4: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x3632f4u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x3632f8: 0x9327000a  lbu         $a3, 0xA($t9)
    ctx->pc = 0x3632f8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 10)));
    // 0x3632fc: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x3632fcu;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x363300: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x363300u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x363304: 0x9328001b  lbu         $t0, 0x1B($t9)
    ctx->pc = 0x363304u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 27)));
    // 0x363308: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x363308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36330c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x36330cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x363310: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x363310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x363314: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x363314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x363318: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x363318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x36331c: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x36331cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x363320: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x363320u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x363324: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x363324u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x363328: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x363328u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36332c: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x36332cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x363330: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363330u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363334: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x363334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x363338: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x363338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x36333c: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x36333cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x363340: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x363340u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x363344: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x363344u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x363348: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x363348u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x36334c: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x36334cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x363350: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x363350u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x363354: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x363354u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x363358: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x363358u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x36335c: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x36335cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x363360: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x363360u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x363364: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x363364u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x363368: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x363368u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x36336c: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x36336cu;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x363370: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x363370u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x363374: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x363374u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x363378: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x363378u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x36337c: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x36337cu;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x363380: 0x7de30020  sq          $v1, 0x20($t7)
    ctx->pc = 0x363380u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 32), GPR_VEC(ctx, 3));
    // 0x363384: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x363384u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x363388: 0x7de30060  sq          $v1, 0x60($t7)
    ctx->pc = 0x363388u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 96), GPR_VEC(ctx, 3));
    // 0x36338c: 0x9327000c  lbu         $a3, 0xC($t9)
    ctx->pc = 0x36338cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 12)));
    // 0x363390: 0x9328001d  lbu         $t0, 0x1D($t9)
    ctx->pc = 0x363390u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 29)));
    // 0x363394: 0x92120006  lbu         $s2, 0x6($s0)
    ctx->pc = 0x363394u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x363398: 0x92130046  lbu         $s3, 0x46($s0)
    ctx->pc = 0x363398u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x36339c: 0x9323000d  lbu         $v1, 0xD($t9)
    ctx->pc = 0x36339cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 13)));
    // 0x3633a0: 0x9331001c  lbu         $s1, 0x1C($t9)
    ctx->pc = 0x3633a0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 28)));
    // 0x3633a4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3633a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3633a8: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3633a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3633ac: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3633acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3633b0: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x3633b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3633b4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3633b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3633b8: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3633b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3633bc: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3633bcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3633c0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3633c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3633c4: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x3633c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3633c8: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x3633c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3633cc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3633ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3633d0: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x3633d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3633d4: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x3633d4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x3633d8: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x3633d8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x3633dc: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x3633dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x3633e0: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x3633e0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3633e4: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x3633e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3633e8: 0x92120007  lbu         $s2, 0x7($s0)
    ctx->pc = 0x3633e8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3633ec: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x3633ecu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3633f0: 0x92130047  lbu         $s3, 0x47($s0)
    ctx->pc = 0x3633f0u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x3633f4: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x3633f4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3633f8: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x3633f8u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3633fc: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x3633fcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x363400: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x363400u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x363404: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x363404u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x363408: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x363408u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x36340c: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x36340cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x363410: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x363410u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x363414: 0x9331001e  lbu         $s1, 0x1E($t9)
    ctx->pc = 0x363414u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 30)));
    // 0x363418: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x363418u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x36341c: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x36341cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x363420: 0x9323000f  lbu         $v1, 0xF($t9)
    ctx->pc = 0x363420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 15)));
    // 0x363424: 0x70897508  paddsh      $t6, $a0, $t1
    ctx->pc = 0x363424u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x363428: 0x9327000e  lbu         $a3, 0xE($t9)
    ctx->pc = 0x363428u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 14)));
    // 0x36342c: 0x710c69e8  pminh       $t5, $t0, $t4
    ctx->pc = 0x36342cu;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x363430: 0xde490800  ld          $t1, 0x800($s2)
    ctx->pc = 0x363430u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x363434: 0x9328001f  lbu         $t0, 0x1F($t9)
    ctx->pc = 0x363434u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 31)));
    // 0x363438: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x363438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36343c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x36343cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x363440: 0xd39821  addu        $s3, $a2, $s3
    ctx->pc = 0x363440u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x363444: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x363444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x363448: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x363448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x36344c: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x36344cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x363450: 0xde6a1000  ld          $t2, 0x1000($s3)
    ctx->pc = 0x363450u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x363454: 0x700e71b7  psrah       $t6, $t6, 6
    ctx->pc = 0x363454u;
    SET_GPR_VEC(ctx, 14, _mm_srai_epi16(GPR_VEC(ctx, 14), 6));
    // 0x363458: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x363458u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36345c: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x36345cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x363460: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363460u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363464: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x363464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x363468: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x363468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x36346c: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x36346cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x363470: 0x712a4d08  paddsh      $t1, $t1, $t2
    ctx->pc = 0x363470u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x363474: 0x71cb71c8  pmaxh       $t6, $t6, $t3
    ctx->pc = 0x363474u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 11)));
    // 0x363478: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x363478u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x36347c: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x36347cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x363480: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x363480u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x363484: 0x70691d08  paddsh      $v1, $v1, $t1
    ctx->pc = 0x363484u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x363488: 0x71cc71e8  pminh       $t6, $t6, $t4
    ctx->pc = 0x363488u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x36348c: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x36348cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x363490: 0x700339b7  psrah       $a3, $v1, 6
    ctx->pc = 0x363490u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi16(GPR_VEC(ctx, 3), 6));
    // 0x363494: 0x70892508  paddsh      $a0, $a0, $t1
    ctx->pc = 0x363494u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x363498: 0x70eb41c8  pmaxh       $t0, $a3, $t3
    ctx->pc = 0x363498u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x36349c: 0x700421b7  psrah       $a0, $a0, 6
    ctx->pc = 0x36349cu;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 4), 6));
    // 0x3634a0: 0x710c19e8  pminh       $v1, $t0, $t4
    ctx->pc = 0x3634a0u;
    SET_GPR_VEC(ctx, 3, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x3634a4: 0x708b21c8  pmaxh       $a0, $a0, $t3
    ctx->pc = 0x3634a4u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x3634a8: 0x706d1ec8  ppacb       $v1, $v1, $t5
    ctx->pc = 0x3634a8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x3634ac: 0x708c21e8  pminh       $a0, $a0, $t4
    ctx->pc = 0x3634acu;
    SET_GPR_VEC(ctx, 4, PS2_PMINH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 12)));
    // 0x3634b0: 0x7de30030  sq          $v1, 0x30($t7)
    ctx->pc = 0x3634b0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 48), GPR_VEC(ctx, 3));
    // 0x3634b4: 0x708e1ec8  ppacb       $v1, $a0, $t6
    ctx->pc = 0x3634b4u;
    SET_GPR_VEC(ctx, 3, PS2_PPACB(GPR_VEC(ctx, 4), GPR_VEC(ctx, 14)));
    // 0x3634b8: 0x7de30070  sq          $v1, 0x70($t7)
    ctx->pc = 0x3634b8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 112), GPR_VEC(ctx, 3));
    // 0x3634bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3634bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3634c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3634c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3634c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3634c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3634c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3634c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3634cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3634ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3634d0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3634d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3634d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3634D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3634D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3634D4u;
        // 0x3634d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3634D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3634DCu;
    // 0x3634dc: 0x0  nop
    ctx->pc = 0x3634dcu;
    // NOP
    ctx->pc = 0x3634e0u;
}
