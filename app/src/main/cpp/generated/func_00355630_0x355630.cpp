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

// Function: func_00355630
// Address: 0x355630 - 0x355640
void func_00355630_0x355630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00355630_0x355630");
#endif

    ctx->pc = 0x355630u;

    // 0x355630: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x355630u;
    {
        const bool branch_taken_0x355630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x355630) {
            ctx->pc = 0x355634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355630u;
            // 0x355634: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355638u;
            goto label_355638;
        }
    }
    ctx->pc = 0x355638u;
label_355638:
    // 0x355638: 0x3e00008  jr          $ra
    ctx->pc = 0x355638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355640u;
}
