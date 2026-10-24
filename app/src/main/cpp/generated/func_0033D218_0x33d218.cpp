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

// Function: func_0033D218
// Address: 0x33d218 - 0x33d230
void func_0033D218_0x33d218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033D218_0x33d218");
#endif

    ctx->pc = 0x33d218u;

    // 0x33d218: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33d218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33d21c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33D21Cu;
    {
        const bool branch_taken_0x33d21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D21Cu;
        // 0x33d220: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d21c) {
            ctx->pc = 0x33D228u;
            goto label_33d228;
        }
    }
    ctx->pc = 0x33D224u;
    // 0x33d224: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x33d224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_33d228:
    // 0x33d228: 0x3e00008  jr          $ra
    ctx->pc = 0x33D228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D230u;
}
