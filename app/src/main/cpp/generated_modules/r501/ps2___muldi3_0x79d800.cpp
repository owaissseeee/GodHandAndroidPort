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
// Function: __muldi3
// Address: 0x79d800 - 0x79d860
void ps2___muldi3_0x79d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___muldi3_0x79d800");
#endif

    ctx->pc = 0x79d800u;

    // 0x79d800: 0x4303f  dsra32      $a2, $a0, 0
    ctx->pc = 0x79d800u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x79d804: 0x5183f  dsra32      $v1, $a1, 0
    ctx->pc = 0x79d804u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x79d808: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x79d808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x79d80c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x79d80cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x79d810: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x79d810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x79d814: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x79d814u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x79d818: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x79d818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79d81c: 0x70c53018  mult1       $a2, $a2, $a1
    ctx->pc = 0x79d81cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x79d820: 0x850019  multu       $a0, $a1
    ctx->pc = 0x79d820u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x79d824: 0x2012  mflo        $a0
    ctx->pc = 0x79d824u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x79d828: 0x1010  mfhi        $v0
    ctx->pc = 0x79d828u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x79d82c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x79d82cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x79d830: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x79d830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x79d834: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x79d834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x79d838: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x79d838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x79d83c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x79d83cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x79d840: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x79d840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x79d844: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x79d844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x79d848: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x79d848u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x79d84c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x79d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79d850: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x79d850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x79d854: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x79d854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x79d858: 0x3e00008  jr          $ra
    ctx->pc = 0x79D858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D858u;
        // 0x79d85c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D860u;
}
} // namespace gh_r501
