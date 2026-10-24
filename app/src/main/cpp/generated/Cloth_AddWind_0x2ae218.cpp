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

// Function: Cloth_AddWind
// Address: 0x2ae218 - 0x2ae3d0
void Cloth_AddWind_0x2ae218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cloth_AddWind_0x2ae218");
#endif

    switch (ctx->pc) {
        case 0x2ae278u: goto label_2ae278;
        case 0x2ae290u: goto label_2ae290;
        case 0x2ae2dcu: goto label_2ae2dc;
        case 0x2ae330u: goto label_2ae330;
        default: break;
    }

    ctx->pc = 0x2ae218u;

    // 0x2ae218: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2ae218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2ae21c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2ae21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2ae220: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2ae220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2ae224: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ae224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae228: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2ae228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x2ae22c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ae22cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae230: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x2ae230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x2ae234: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2ae234u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae238: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x2ae238u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2ae23c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2ae23cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae240: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2ae240u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2ae244: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2ae244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2ae248: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2ae248u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2ae24c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2ae24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2ae250: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2ae250u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2ae254: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2ae254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2ae258: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2ae258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2ae25c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2ae25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2ae260: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ae260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ae264: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ae264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ae268: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2ae268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2ae26c: 0x4400047  bltz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2AE26Cu;
    {
        const bool branch_taken_0x2ae26c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2AE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE26Cu;
        // 0x2ae270: 0x4614a582  mul.s       $f22, $f20, $f20 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae26c) {
            ctx->pc = 0x2AE38Cu;
            goto label_2ae38c;
        }
    }
    ctx->pc = 0x2AE274u;
    // 0x2ae274: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ae274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae278:
    // 0x2ae278: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ae278u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae27c: 0x460003e  bltz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2AE27Cu;
    {
        const bool branch_taken_0x2ae27c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2AE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE27Cu;
        // 0x2ae280: 0x26b60001  addiu       $s6, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae27c) {
            ctx->pc = 0x2AE378u;
            goto label_2ae378;
        }
    }
    ctx->pc = 0x2AE284u;
    // 0x2ae284: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2ae284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ae288: 0x752018  mult        $a0, $v1, $s5
    ctx->pc = 0x2ae288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ae28c: 0x0  nop
    ctx->pc = 0x2ae28cu;
    // NOP
label_2ae290:
    // 0x2ae290: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2ae290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2ae294: 0x951021  addu        $v0, $a0, $s5
    ctx->pc = 0x2ae294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x2ae298: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2ae298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2ae29c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2ae29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2ae2a0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2ae2a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ae2a4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2ae2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ae2a8: 0x92030048  lbu         $v1, 0x48($s0)
    ctx->pc = 0x2ae2a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2ae2ac: 0x5460002e  bnel        $v1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x2AE2ACu;
    {
        const bool branch_taken_0x2ae2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae2ac) {
            ctx->pc = 0x2AE2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE2ACu;
            // 0x2ae2b0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE368u;
            goto label_2ae368;
        }
    }
    ctx->pc = 0x2AE2B4u;
    // 0x2ae2b4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2ae2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ae2b8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2ae2b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae2bc: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x2ae2bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ae2c0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ae2c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ae2c4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ae2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ae2c8: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2ae2c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ae2cc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2ae2ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ae2d0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2ae2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ae2d4: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2AE2D4u;
    SET_GPR_U32(ctx, 31, 0x2AE2DCu);
    ctx->pc = 0x2AE2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE2D4u;
    // 0x2ae2d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2AE2D4u, 0x2AE2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE2DCu;
label_2ae2dc:
    // 0x2ae2dc: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2ae2dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ae2e0: 0x0  nop
    ctx->pc = 0x2ae2e0u;
    // NOP
    // 0x2ae2e4: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
    ctx->pc = 0x2AE2E4u;
    {
        const bool branch_taken_0x2ae2e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ae2e4) {
            ctx->pc = 0x2AE2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE2E4u;
            // 0x2ae2e8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE368u;
            goto label_2ae368;
        }
    }
    ctx->pc = 0x2AE2ECu;
    // 0x2ae2ec: 0x0  nop
    ctx->pc = 0x2ae2ecu;
    // NOP
    // 0x2ae2f0: 0x0  nop
    ctx->pc = 0x2ae2f0u;
    // NOP
    // 0x2ae2f4: 0x46000304  c1          0x304
    ctx->pc = 0x2ae2f4u;
    ctx->f[12] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2ae2f8: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x2ae2f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2ae2fc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ae2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ae300: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ae300u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae304: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x2ae304u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2ae308: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2ae308u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ae30c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2ae30cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ae310: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ae310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ae314: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2ae314u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ae318: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ae318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ae31c: 0x0  nop
    ctx->pc = 0x2ae31cu;
    // NOP
    // 0x2ae320: 0x0  nop
    ctx->pc = 0x2ae320u;
    // NOP
    // 0x2ae324: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x2ae324u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[20]);
    // 0x2ae328: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2AE328u;
    SET_GPR_U32(ctx, 31, 0x2AE330u);
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2AE328u, 0x2AE330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE330u;
label_2ae330:
    // 0x2ae330: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2ae330u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ae334: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ae334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ae338: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ae338u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae33c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2ae33cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2ae340: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2ae340u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ae344: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2ae344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ae348: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ae348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ae34c: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2ae34cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ae350: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2ae350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ae354: 0xda040010  lqc2        $vf4, 0x10($s0)
    ctx->pc = 0x2ae354u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ae358: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2ae358u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae35c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ae35cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ae360: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x2ae360u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ae364: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ae364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae368:
    // 0x2ae368: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2ae368u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2ae36c: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x2ae36cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2ae370: 0x1040ffc7  beqz        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2AE370u;
    {
        const bool branch_taken_0x2ae370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE370u;
        // 0x2ae374: 0x752018  mult        $a0, $v1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae370) {
            ctx->pc = 0x2AE290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae290;
        }
    }
    ctx->pc = 0x2AE378u;
label_2ae378:
    // 0x2ae378: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2ae378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2ae37c: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x2ae37cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae380: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x2ae380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2ae384: 0x5040ffbc  beql        $v0, $zero, . + 4 + (-0x44 << 2)
    ctx->pc = 0x2AE384u;
    {
        const bool branch_taken_0x2ae384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae384) {
            ctx->pc = 0x2AE388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE384u;
            // 0x2ae388: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae278;
        }
    }
    ctx->pc = 0x2AE38Cu;
label_2ae38c:
    // 0x2ae38c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2ae38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ae390: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2ae390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ae394: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2ae394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ae398: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2ae398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ae39c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2ae39cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ae3a0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2ae3a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ae3a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ae3a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ae3a8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2ae3a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ae3ac: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x2ae3acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae3b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ae3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae3b4: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x2ae3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ae3b8: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2ae3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ae3bc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2ae3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ae3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3C0u;
        // 0x2ae3c4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE3C8u;
    // 0x2ae3c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ae3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ae3cc: 0x0  nop
    ctx->pc = 0x2ae3ccu;
    // NOP
    ctx->pc = 0x2ae3d0u;
}
