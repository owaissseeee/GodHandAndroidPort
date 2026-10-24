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

// Function: func_002D4DA0
// Address: 0x2d4da0 - 0x2d4dc8
void func_002D4DA0_0x2d4da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D4DA0_0x2d4da0");
#endif

    switch (ctx->pc) {
        case 0x2d4da4u: goto label_2d4da4;
        default: break;
    }

    ctx->pc = 0x2d4da0u;

    // 0x2d4da0: 0xf  sync
    ctx->pc = 0x2d4da0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2d4da4:
    // 0x2d4da4: 0x0  nop
    ctx->pc = 0x2d4da4u;
    // NOP
    // 0x2d4da8: 0x0  nop
    ctx->pc = 0x2d4da8u;
    // NOP
    // 0x2d4dac: 0x0  nop
    ctx->pc = 0x2d4dacu;
    // NOP
    // 0x2d4db0: 0x0  nop
    ctx->pc = 0x2d4db0u;
    // NOP
    // 0x2d4db4: 0x4100fffb  bc0f        . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D4DB4u;
    {
        const bool branch_taken_0x2d4db4 = (false);
        if (branch_taken_0x2d4db4) {
            ctx->pc = 0x2D4DA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4da4;
        }
    }
    ctx->pc = 0x2D4DBCu;
    // 0x2d4dbc: 0x0  nop
    ctx->pc = 0x2d4dbcu;
    // NOP
    // 0x2d4dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4DC8u;
}
