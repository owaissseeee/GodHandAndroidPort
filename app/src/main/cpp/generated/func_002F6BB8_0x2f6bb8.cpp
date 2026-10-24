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

// Function: func_002F6BB8
// Address: 0x2f6bb8 - 0x2f6c80
void func_002F6BB8_0x2f6bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F6BB8_0x2f6bb8");
#endif

    switch (ctx->pc) {
        case 0x2f6c64u: goto label_2f6c64;
        case 0x2f6c6cu: goto label_2f6c6c;
        default: break;
    }

    ctx->pc = 0x2f6bb8u;

    // 0x2f6bb8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2f6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x2f6bbc: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f6bbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f6bc0: 0x8c62aff0  lw          $v0, -0x5010($v1)
    ctx->pc = 0x2f6bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f6bc4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2f6bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2f6bc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6bcc: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2f6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2f6bd0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f6bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f6bd4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f6bd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6bd8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f6bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6bdc: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x2f6bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x2f6be0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2f6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f6be4: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2f6be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f6be8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f6be8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6bec: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x2f6becu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f6bf0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f6bf0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f6bf4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f6bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6bf8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f6bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f6bfc: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f6bfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6c00: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f6c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6c04: 0xc60002c0  lwc1        $f0, 0x2C0($s0)
    ctx->pc = 0x2f6c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6c08: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2f6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f6c0c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f6c0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6c10: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f6c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6c14: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f6c14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6c18: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2f6c18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f6c1c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f6c1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f6c20: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f6c20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f6c24: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f6c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6c28: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2f6c28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6c2c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f6c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6c30: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2f6c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f6c34: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2f6c34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f6c38: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f6c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6c3c: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f6c3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6c40: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2f6c40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6c44: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f6c44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f6c48: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f6c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6c4c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2f6c4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6c50: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f6c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6c54: 0xc60002b4  lwc1        $f0, 0x2B4($s0)
    ctx->pc = 0x2f6c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c5c: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2F6C5Cu;
    SET_GPR_U32(ctx, 31, 0x2F6C64u);
    ctx->pc = 0x2F6C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C5Cu;
    // 0x2f6c60: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F6C5Cu, 0x2F6C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C64u;
label_2f6c64:
    // 0x2f6c64: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2F6C64u;
    SET_GPR_U32(ctx, 31, 0x2F6C6Cu);
    ctx->pc = 0x2F6C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C64u;
    // 0x2f6c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2F6C64u, 0x2F6C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C6Cu;
label_2f6c6c:
    // 0x2f6c6c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2f6c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f6c70: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f6c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f6c74: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C74u;
        // 0x2f6c78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6C7Cu;
    // 0x2f6c7c: 0x0  nop
    ctx->pc = 0x2f6c7cu;
    // NOP
    ctx->pc = 0x2f6c80u;
}
