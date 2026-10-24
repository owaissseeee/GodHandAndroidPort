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

// Function: cNode_construct
// Address: 0x2b5c20 - 0x2b5cf0
void cNode_construct_0x2b5c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cNode_construct_0x2b5c20");
#endif

    switch (ctx->pc) {
        case 0x2b5c94u: goto label_2b5c94;
        default: break;
    }

    ctx->pc = 0x2b5c20u;

    // 0x2b5c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5c24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b5c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b5c28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b5c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5c2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b5c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b5c30: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2b5c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2b5c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5c38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b5c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c3c: 0x2442b310  addiu       $v0, $v0, -0x4CF0
    ctx->pc = 0x2b5c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947600));
    // 0x2b5c40: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2b5c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2b5c44: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2b5c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2b5c48: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2b5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b5c4c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2b5c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2b5c50: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b5c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c54: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2b5c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2b5c58: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2b5c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2b5c5c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2b5c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2b5c60: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2b5c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2b5c64: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x2b5c64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5c68: 0xa2000015  sb          $zero, 0x15($s0)
    ctx->pc = 0x2b5c68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5c6c: 0xa2000016  sb          $zero, 0x16($s0)
    ctx->pc = 0x2b5c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5c70: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2b5c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2b5c74: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b5c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b5c78: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b5c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b5c7c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x2b5c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b5c80: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x2b5c80u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b5c84: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2b5c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x2b5c88: 0xfa0000a0  sqc2        $vf0, 0xA0($s0)
    ctx->pc = 0x2b5c88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b5c8c: 0xc0ad756  jal         func_2B5D58
    ctx->pc = 0x2B5C8Cu;
    SET_GPR_U32(ctx, 31, 0x2B5C94u);
    ctx->pc = 0x2B5C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C8Cu;
    // 0x2b5c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5D58u, 0x2B5C8Cu, 0x2B5C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C94u;
label_2b5c94:
    // 0x2b5c94: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x2b5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2b5c98: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x2b5c98u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2b5c9c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2b5c9cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b5ca0: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2b5ca0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2b5ca4: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2b5ca4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2b5ca8: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x2b5ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b5cac: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x2b5cacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2b5cb0: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x2b5cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2b5cb4: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x2b5cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2b5cb8: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x2b5cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2b5cbc: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x2b5cbcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2b5cc0: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2b5cc0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b5cc4: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2b5cc4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2b5cc8: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2b5cc8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2b5ccc: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x2b5cccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b5cd0: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x2b5cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2b5cd4: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x2b5cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2b5cd8: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x2b5cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2b5cdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b5cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5ce4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b5ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CE8u;
        // 0x2b5cec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5CF0u;
}
