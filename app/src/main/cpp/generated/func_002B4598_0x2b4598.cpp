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

// Function: func_002B4598
// Address: 0x2b4598 - 0x2b45b0
void func_002B4598_0x2b4598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4598_0x2b4598");
#endif

    ctx->pc = 0x2b4598u;

    // 0x2b4598: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x2b4598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x2b459c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b459cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b45a0: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B45A0u;
    {
        const bool branch_taken_0x2b45a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b45a0) {
            ctx->pc = 0x2B45A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B45A0u;
            // 0x2b45a4: 0xac8300b8  sw          $v1, 0xB8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B45A8u;
            goto label_2b45a8;
        }
    }
    ctx->pc = 0x2B45A8u;
label_2b45a8:
    // 0x2b45a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B45A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B45A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B45B0u;
}
