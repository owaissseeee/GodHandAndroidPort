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

// Function: cCoreSave_clearAllStageTime
// Address: 0x1fc618 - 0x1fc630
void cCoreSave_clearAllStageTime_0x1fc618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_clearAllStageTime_0x1fc618");
#endif

    ctx->pc = 0x1fc618u;

    // 0x1fc618: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc61c: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC61Cu;
    {
        const bool branch_taken_0x1fc61c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc61c) {
            ctx->pc = 0x1FC620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC61Cu;
            // 0x1fc620: 0xac800bbc  sw          $zero, 0xBBC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 3004), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC624u;
            goto label_1fc624;
        }
    }
    ctx->pc = 0x1FC624u;
label_1fc624:
    // 0x1fc624: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC62Cu;
    // 0x1fc62c: 0x0  nop
    ctx->pc = 0x1fc62cu;
    // NOP
    ctx->pc = 0x1fc630u;
}
