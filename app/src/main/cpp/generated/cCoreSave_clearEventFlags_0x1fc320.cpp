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

// Function: cCoreSave_clearEventFlags
// Address: 0x1fc320 - 0x1fc338
void cCoreSave_clearEventFlags_0x1fc320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_clearEventFlags_0x1fc320");
#endif

    ctx->pc = 0x1fc320u;

    // 0x1fc320: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc324: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC324u;
    {
        const bool branch_taken_0x1fc324 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc324) {
            ctx->pc = 0x1FC328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC324u;
            // 0x1fc328: 0xac800b90  sw          $zero, 0xB90($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 2960), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC32Cu;
            goto label_1fc32c;
        }
    }
    ctx->pc = 0x1FC32Cu;
label_1fc32c:
    // 0x1fc32c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC334u;
    // 0x1fc334: 0x0  nop
    ctx->pc = 0x1fc334u;
    // NOP
    ctx->pc = 0x1fc338u;
}
