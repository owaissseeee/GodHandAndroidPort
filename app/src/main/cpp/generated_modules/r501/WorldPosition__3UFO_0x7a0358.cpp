#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: WorldPosition__3UFO
// Address: 0x7a0358 - 0x7a0418
void WorldPosition__3UFO_0x7a0358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WorldPosition__3UFO_0x7a0358");
#endif

    switch (ctx->pc) {
        case 0x7a03c0u: goto label_7a03c0;
        default: break;
    }

    ctx->pc = 0x7a0358u;

    // 0x7a0358: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7a0358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7a035c: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x7a035cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x7a0360: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7a0360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7a0364: 0x24a20050  addiu       $v0, $a1, 0x50
    ctx->pc = 0x7a0364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x7a0368: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7a0368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7a036c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x7a036cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7a0370: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7a0370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a0374: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x7a0374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x7a0378: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7a0378u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7a037c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x7a037cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a0380: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x7a0380u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7a0384: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x7a0384u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7a0388: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x7a0388u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x7a038c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x7a038cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a0390: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x7a0390u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7a0394: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x7a0394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a0398: 0xc4ac000c  lwc1        $f12, 0xC($a1)
    ctx->pc = 0x7a0398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7a039c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x7a039cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x7a03a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x7a03a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x7a03a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7a03a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7a03a8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x7a03a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x7a03ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x7a03acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x7a03b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7a03b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7a03b4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x7a03b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x7a03b8: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x7A03B8u;
    SET_GPR_U32(ctx, 31, 0x7A03C0u);
    ctx->pc = 0x7A03BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A03B8u;
    // 0x7a03bc: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x7A03B8u, 0x7A03C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A03C0u;
label_7a03c0:
    // 0x7a03c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7a03c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7a03c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7a03c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7a03c8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x7a03c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7a03cc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x7a03ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x7a03d0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x7a03d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x7a03d4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x7a03d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x7a03d8: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x7a03d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x7a03dc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x7a03dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7a03e0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7a03e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a03e4: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7a03e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7a03e8: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x7a03e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7a03ec: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x7a03ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x7a03f0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7a03f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a03f4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7a03f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7a03f8: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x7a03f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a03fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x7a03fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a0400: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7a0400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7a0404: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7a0404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7a0408: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x7a0408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7a040c: 0x3e00008  jr          $ra
    ctx->pc = 0x7A040Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A0410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A040Cu;
        // 0x7a0410: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A040Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A0414u;
    // 0x7a0414: 0x0  nop
    ctx->pc = 0x7a0414u;
    // NOP
    ctx->pc = 0x7a0418u;
}
} // namespace gh_r501
