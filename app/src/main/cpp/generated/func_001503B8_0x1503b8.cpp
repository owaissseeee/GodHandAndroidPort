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

// Function: func_001503B8
// Address: 0x1503b8 - 0x150418
void func_001503B8_0x1503b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001503B8_0x1503b8");
#endif

    switch (ctx->pc) {
        case 0x15040cu: goto label_15040c;
        default: break;
    }

    ctx->pc = 0x1503b8u;

    // 0x1503b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1503b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503bc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1503bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1503c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1503c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1503c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1503c8: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1503c8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1503cc: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1503ccu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1503d0: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1503d0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1503d4: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1503d4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1503d8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1503d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1503dc: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x1503dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1503e0: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x1503e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1503e4: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x1503e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1503e8: 0xc44200c0  lwc1        $f2, 0xC0($v0)
    ctx->pc = 0x1503e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1503ec: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x1503ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1503f0: 0xc44100c4  lwc1        $f1, 0xC4($v0)
    ctx->pc = 0x1503f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1503f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1503f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503f8: 0xc44000c8  lwc1        $f0, 0xC8($v0)
    ctx->pc = 0x1503f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1503fc: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x1503fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x150400: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x150400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x150404: 0xc051d52  jal         func_147548
    ctx->pc = 0x150404u;
    SET_GPR_U32(ctx, 31, 0x15040Cu);
    ctx->pc = 0x150408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150404u;
    // 0x150408: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x150404u, 0x15040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15040Cu;
label_15040c:
    // 0x15040c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15040cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150410: 0x3e00008  jr          $ra
    ctx->pc = 0x150410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150410u;
        // 0x150414: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150418u;
}
