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

// Function: IsStateVal17_10B648
// Address: 0x10b648 - 0x10b670
void IsStateVal17_10B648_0x10b648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsStateVal17_10B648_0x10b648");
#endif

    ctx->pc = 0x10b648u;

    // 0x10b648: 0x908202f4  lbu         $v0, 0x2F4($a0)
    ctx->pc = 0x10b648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x10b64c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B64Cu;
    {
        const bool branch_taken_0x10b64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b64c) {
            ctx->pc = 0x10B664u;
            goto label_10b664;
        }
    }
    ctx->pc = 0x10B654u;
    // 0x10b654: 0x908202f5  lbu         $v0, 0x2F5($a0)
    ctx->pc = 0x10b654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x10b658: 0x38420011  xori        $v0, $v0, 0x11
    ctx->pc = 0x10b658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)17);
    // 0x10b65c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B65Cu;
        // 0x10b660: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B664u;
label_10b664:
    // 0x10b664: 0x3e00008  jr          $ra
    ctx->pc = 0x10B664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B664u;
        // 0x10b668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B66Cu;
    // 0x10b66c: 0x0  nop
    ctx->pc = 0x10b66cu;
    // NOP
    ctx->pc = 0x10b670u;
}
