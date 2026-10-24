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

// Function: func_001F85D0
// Address: 0x1f85d0 - 0x1f8810
void func_001F85D0_0x1f85d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F85D0_0x1f85d0");
#endif

    switch (ctx->pc) {
        case 0x1f87f4u: goto label_1f87f4;
        default: break;
    }

    ctx->pc = 0x1f85d0u;

    // 0x1f85d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f85d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f85d4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1f85d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f85d8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f85d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1f85dc: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1f85dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f85e0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1f85e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f85e4: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1f85e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f85e8: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1f85e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f85ec: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1f85ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f85f0: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1f85f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f85f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f85f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f85f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f85f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f85fc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1f85fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8600: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1f8600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1f8604: 0xc5230004  lwc1        $f3, 0x4($t1)
    ctx->pc = 0x1f8604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f8608: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1f8608u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1f860c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f860cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f8610: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f8610u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f8614: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1f8614u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1f8618: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x1f8618u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1f861c: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x1f861cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x1f8620: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f8620u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8624: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1f8624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8628: 0x0  nop
    ctx->pc = 0x1f8628u;
    // NOP
    // 0x1f862c: 0x45010073  bc1t        . + 4 + (0x73 << 2)
    ctx->pc = 0x1F862Cu;
    {
        const bool branch_taken_0x1f862c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F862Cu;
        // 0x1f8630: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f862c) {
            ctx->pc = 0x1F87FCu;
            goto label_1f87fc;
        }
    }
    ctx->pc = 0x1F8634u;
    // 0x1f8634: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1f8634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8638: 0x0  nop
    ctx->pc = 0x1f8638u;
    // NOP
    // 0x1f863c: 0x45030070  bc1tl       . + 4 + (0x70 << 2)
    ctx->pc = 0x1F863Cu;
    {
        const bool branch_taken_0x1f863c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f863c) {
            ctx->pc = 0x1F8640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F863Cu;
            // 0x1f8640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8800u;
            goto label_1f8800;
        }
    }
    ctx->pc = 0x1F8644u;
    // 0x1f8644: 0xc484002c  lwc1        $f4, 0x2C($a0)
    ctx->pc = 0x1f8644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f8648: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1f8648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f864c: 0xc4850010  lwc1        $f5, 0x10($a0)
    ctx->pc = 0x1f864cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1f8650: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1f8650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f8654: 0xc4860014  lwc1        $f6, 0x14($a0)
    ctx->pc = 0x1f8654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1f8658: 0xc4870018  lwc1        $f7, 0x18($a0)
    ctx->pc = 0x1f8658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1f865c: 0xc488001c  lwc1        $f8, 0x1C($a0)
    ctx->pc = 0x1f865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1f8660: 0xc4890020  lwc1        $f9, 0x20($a0)
    ctx->pc = 0x1f8660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1f8664: 0xc48a0024  lwc1        $f10, 0x24($a0)
    ctx->pc = 0x1f8664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1f8668: 0xc4830028  lwc1        $f3, 0x28($a0)
    ctx->pc = 0x1f8668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f866c: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x1f866cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f8670: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x1f8670u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f8674: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x1f8674u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1f8678: 0xe7a80018  swc1        $f8, 0x18($sp)
    ctx->pc = 0x1f8678u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1f867c: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1f867cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f8680: 0xe7aa0028  swc1        $f10, 0x28($sp)
    ctx->pc = 0x1f8680u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f8684: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x1f8684u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1f8688: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x1f8688u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f868c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f868cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f8690: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1f8690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1f8694: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f8694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1f8698: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1f8698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1f869c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1f869cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f86a0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1f86a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f86a4: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1f86a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f86a8: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x1f86a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f86ac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1f86acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f86b0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1f86b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f86b4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1f86b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f86b8: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1f86b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f86bc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1f86bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f86c0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1f86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f86c4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1f86c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f86c8: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1f86c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f86cc: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1f86ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f86d0: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x1f86d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f86d4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1f86d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f86d8: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1f86d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f86dc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1f86dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f86e0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1f86e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f86e4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1f86e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f86e8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1f86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f86ec: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1f86ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f86f0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1f86f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f86f4: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1f86f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f86f8: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1f86f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f86fc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1f86fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f8700: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1f8700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f8704: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1f8704u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8708: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1f8708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f870c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1f870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f8710: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1f8710u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8714: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1f8714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f8718: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1f8718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1f871c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f871cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8720: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1f8720u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f8724: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1f8724u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1f8728: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1f8728u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1f872c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1f872cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f8730: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1f8730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f8734: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1f8734u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8738: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1f8738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f873c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1f873cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8740: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1f8740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8744: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1f8744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8748: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1f8748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f874c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x1f874cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1f8750: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x1f8750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8754: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x1f8754u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x1f8758: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1f8758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f875c: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x1f875cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x1f8760: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1f8760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1f8764: 0x46014201  sub.s       $f8, $f8, $f1
    ctx->pc = 0x1f8764u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
    // 0x1f8768: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1f8768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1f876c: 0x46004a41  sub.s       $f9, $f9, $f0
    ctx->pc = 0x1f876cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x1f8770: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f8770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f8774: 0x46015281  sub.s       $f10, $f10, $f1
    ctx->pc = 0x1f8774u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x1f8778: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1f8778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1f877c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1f877cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1f8780: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f8780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1f8784: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x1f8784u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1f8788: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1f8788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1f878c: 0x460c2942  mul.s       $f5, $f5, $f12
    ctx->pc = 0x1f878cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x1f8790: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f8790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8794: 0x460c3182  mul.s       $f6, $f6, $f12
    ctx->pc = 0x1f8794u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x1f8798: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x1f8798u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x1f879c: 0x460c39c2  mul.s       $f7, $f7, $f12
    ctx->pc = 0x1f879cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x1f87a0: 0x460c4202  mul.s       $f8, $f8, $f12
    ctx->pc = 0x1f87a0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x1f87a4: 0x460c4a42  mul.s       $f9, $f9, $f12
    ctx->pc = 0x1f87a4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
    // 0x1f87a8: 0x460c5282  mul.s       $f10, $f10, $f12
    ctx->pc = 0x1f87a8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[12]);
    // 0x1f87ac: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x1f87acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x1f87b0: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x1f87b0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x1f87b4: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x1f87b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x1f87b8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1f87b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1f87bc: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x1f87bcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x1f87c0: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x1f87c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f87c4: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x1f87c4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x1f87c8: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x1f87c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f87cc: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x1f87ccu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x1f87d0: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x1f87d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1f87d4: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x1f87d4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x1f87d8: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x1f87d8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f87dc: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x1f87dcu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
    // 0x1f87e0: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x1f87e0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1f87e4: 0xe7a80018  swc1        $f8, 0x18($sp)
    ctx->pc = 0x1f87e4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1f87e8: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1f87e8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f87ec: 0xc055cf2  jal         func_1573C8
    ctx->pc = 0x1F87ECu;
    SET_GPR_U32(ctx, 31, 0x1F87F4u);
    ctx->pc = 0x1F87F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F87ECu;
    // 0x1f87f0: 0xe7aa0028  swc1        $f10, 0x28($sp) (Delay Slot)
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1573C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1573C8u, 0x1F87ECu, 0x1F87F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F87F4u;
label_1f87f4:
    // 0x1f87f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F87F4u;
    {
        const bool branch_taken_0x1f87f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F87F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87F4u;
        // 0x1f87f8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f87f4) {
            ctx->pc = 0x1F8800u;
            goto label_1f8800;
        }
    }
    ctx->pc = 0x1F87FCu;
label_1f87fc:
    // 0x1f87fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f87fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8800:
    // 0x1f8800: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1f8800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f8804: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8804u;
        // 0x1f8808: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F880Cu;
    // 0x1f880c: 0x0  nop
    ctx->pc = 0x1f880cu;
    // NOP
    ctx->pc = 0x1f8810u;
}
