#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: __muldi3
// Address: 0x79be90 - 0x79bef0
void ps2___muldi3_0x79be90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___muldi3_0x79be90");
#endif

    ctx->pc = 0x79be90u;

    // 0x79be90: 0x4303f  dsra32      $a2, $a0, 0
    ctx->pc = 0x79be90u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x79be94: 0x5183f  dsra32      $v1, $a1, 0
    ctx->pc = 0x79be94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x79be98: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x79be98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x79be9c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x79be9cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x79bea0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x79bea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x79bea4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x79bea4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x79bea8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x79bea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79beac: 0x70c53018  mult1       $a2, $a2, $a1
    ctx->pc = 0x79beacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x79beb0: 0x850019  multu       $a0, $a1
    ctx->pc = 0x79beb0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x79beb4: 0x2012  mflo        $a0
    ctx->pc = 0x79beb4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x79beb8: 0x1010  mfhi        $v0
    ctx->pc = 0x79beb8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x79bebc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x79bebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x79bec0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x79bec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x79bec4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x79bec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x79bec8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x79bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x79becc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x79beccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x79bed0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x79bed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x79bed4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x79bed4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x79bed8: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x79bed8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x79bedc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x79bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79bee0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x79bee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x79bee4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x79bee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x79bee8: 0x3e00008  jr          $ra
    ctx->pc = 0x79BEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEE8u;
        // 0x79beec: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BEF0u;
}
} // namespace gh_r505
