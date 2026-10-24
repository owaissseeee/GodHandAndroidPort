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

// Function: func_0038D140
// Address: 0x38d140 - 0x38d168
void func_0038D140_0x38d140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038D140_0x38d140");
#endif

    ctx->pc = 0x38d140u;

    // 0x38d140: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x38d140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x38d144: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x38D144u;
    {
        const bool branch_taken_0x38d144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d144) {
            ctx->pc = 0x38D148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D144u;
            // 0x38d148: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D14Cu;
            goto label_38d14c;
        }
    }
    ctx->pc = 0x38D14Cu;
label_38d14c:
    // 0x38d14c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x38d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x38d150: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38D150u;
    {
        const bool branch_taken_0x38d150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d150) {
            ctx->pc = 0x38D160u;
            goto label_38d160;
        }
    }
    ctx->pc = 0x38D158u;
    // 0x38d158: 0x80e30e8  j           func_38C3A0
    ctx->pc = 0x38D158u;
    ctx->pc = 0x38C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C3A0u, 0x38D158u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x38D160u;
label_38d160:
    // 0x38d160: 0x3e00008  jr          $ra
    ctx->pc = 0x38D160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D168u;
}
