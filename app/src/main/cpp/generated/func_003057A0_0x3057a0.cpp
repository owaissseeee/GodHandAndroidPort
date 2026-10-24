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

// Function: func_003057A0
// Address: 0x3057a0 - 0x3057d0
void func_003057A0_0x3057a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003057A0_0x3057a0");
#endif

    switch (ctx->pc) {
        case 0x3057a8u: goto label_3057a8;
        default: break;
    }

    ctx->pc = 0x3057a0u;

    // 0x3057a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3057a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3057a4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3057a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3057a8:
    // 0x3057a8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3057a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3057ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3057acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3057b0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3057b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3057b4: 0x2c620040  sltiu       $v0, $v1, 0x40
    ctx->pc = 0x3057b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x3057b8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3057b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3057bc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3057bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3057c0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3057C0u;
    {
        const bool branch_taken_0x3057c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3057C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057C0u;
        // 0x3057c4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3057c0) {
            ctx->pc = 0x3057A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3057a8;
        }
    }
    ctx->pc = 0x3057C8u;
    // 0x3057c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3057C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3057C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3057D0u;
}
