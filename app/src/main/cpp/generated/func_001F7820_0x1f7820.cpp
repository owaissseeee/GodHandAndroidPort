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

// Function: func_001F7820
// Address: 0x1f7820 - 0x1f7858
void func_001F7820_0x1f7820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F7820_0x1f7820");
#endif

    switch (ctx->pc) {
        case 0x1f7830u: goto label_1f7830;
        default: break;
    }

    ctx->pc = 0x1f7820u;

    // 0x1f7820: 0x248400f4  addiu       $a0, $a0, 0xF4
    ctx->pc = 0x1f7820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 244));
    // 0x1f7824: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7824u;
    {
        const bool branch_taken_0x1f7824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7824) {
            ctx->pc = 0x1F7850u;
            goto label_1f7850;
        }
    }
    ctx->pc = 0x1F782Cu;
    // 0x1f782c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f782cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f7830:
    // 0x1f7830: 0x54650005  bnel        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7830u;
    {
        const bool branch_taken_0x1f7830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1f7830) {
            ctx->pc = 0x1F7834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7830u;
            // 0x1f7834: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7848u;
            goto label_1f7848;
        }
    }
    ctx->pc = 0x1F7838u;
    // 0x1f7838: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f7838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f783c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f783cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1f7840: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7840u;
        // 0x1f7844: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7848u;
label_1f7848:
    // 0x1f7848: 0x5480fff9  bnel        $a0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F7848u;
    {
        const bool branch_taken_0x1f7848 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7848) {
            ctx->pc = 0x1F784Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7848u;
            // 0x1f784c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7830;
        }
    }
    ctx->pc = 0x1F7850u;
label_1f7850:
    // 0x1f7850: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7858u;
}
