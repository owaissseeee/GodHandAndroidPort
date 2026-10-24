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

// Function: Obj35E8_StepCounter_EA60
// Address: 0x35ea60 - 0x35ea88
void Obj35E8_StepCounter_EA60_0x35ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35E8_StepCounter_EA60_0x35ea60");
#endif

    ctx->pc = 0x35ea60u;

    // 0x35ea60: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x35ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x35ea64: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x35ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x35ea68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35ea6c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x35ea6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35ea70: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x35ea70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35ea74: 0x21023  negu        $v0, $v0
    ctx->pc = 0x35ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x35ea78: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x35ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x35ea7c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x35ea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x35ea80: 0x3e00008  jr          $ra
    ctx->pc = 0x35EA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA80u;
        // 0x35ea84: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EA88u;
}
