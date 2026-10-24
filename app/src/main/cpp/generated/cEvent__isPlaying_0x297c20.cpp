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

// Function: cEvent__isPlaying
// Address: 0x297c20 - 0x297c50
void cEvent__isPlaying_0x297c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent__isPlaying_0x297c20");
#endif

    ctx->pc = 0x297c20u;

    // 0x297c20: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x297c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x297c24: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x297c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x297c28: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x297c28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x297c2c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x297c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x297c30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x297C30u;
    {
        const bool branch_taken_0x297c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c30) {
            ctx->pc = 0x297C48u;
            goto label_297c48;
        }
    }
    ctx->pc = 0x297C38u;
    // 0x297c38: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x297c38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x297c3c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x297c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x297c40: 0x3e00008  jr          $ra
    ctx->pc = 0x297C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C40u;
        // 0x297c44: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297C48u;
label_297c48:
    // 0x297c48: 0x3e00008  jr          $ra
    ctx->pc = 0x297C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C48u;
        // 0x297c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297C50u;
}
