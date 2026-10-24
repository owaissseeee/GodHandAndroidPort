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

// Function: ClearField90_13E400
// Address: 0x13e400 - 0x13e418
void ClearField90_13E400_0x13e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearField90_13E400_0x13e400");
#endif

    ctx->pc = 0x13e400u;

    // 0x13e400: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x13e400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x13e404: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13E404u;
    {
        const bool branch_taken_0x13e404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e404) {
            ctx->pc = 0x13E408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E404u;
            // 0x13e408: 0xac800090  sw          $zero, 0x90($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E40Cu;
            goto label_13e40c;
        }
    }
    ctx->pc = 0x13E40Cu;
label_13e40c:
    // 0x13e40c: 0x3e00008  jr          $ra
    ctx->pc = 0x13E40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E414u;
    // 0x13e414: 0x0  nop
    ctx->pc = 0x13e414u;
    // NOP
    ctx->pc = 0x13e418u;
}
