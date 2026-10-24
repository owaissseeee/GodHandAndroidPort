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

// Function: __muldi3
// Address: 0x31de10 - 0x31de70
void ps2___muldi3_0x31de10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___muldi3_0x31de10");
#endif

    ctx->pc = 0x31de10u;

    // 0x31de10: 0x4303f  dsra32      $a2, $a0, 0
    ctx->pc = 0x31de10u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x31de14: 0x5183f  dsra32      $v1, $a1, 0
    ctx->pc = 0x31de14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x31de18: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31de18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31de1c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x31de1cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x31de20: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x31de20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x31de24: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x31de24u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x31de28: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x31de28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31de2c: 0x70c53018  mult1       $a2, $a2, $a1
    ctx->pc = 0x31de2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x31de30: 0x850019  multu       $a0, $a1
    ctx->pc = 0x31de30u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31de34: 0x2012  mflo        $a0
    ctx->pc = 0x31de34u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x31de38: 0x1010  mfhi        $v0
    ctx->pc = 0x31de38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31de3c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31de3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31de40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31de40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31de44: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31de44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31de48: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x31de48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31de4c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x31de4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x31de50: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x31de50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x31de54: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x31de54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x31de58: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x31de58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x31de5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31de60: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x31de60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x31de64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31de64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31de68: 0x3e00008  jr          $ra
    ctx->pc = 0x31DE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE68u;
        // 0x31de6c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DE70u;
}
