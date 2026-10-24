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

// Function: func_0036DCE8
// Address: 0x36dce8 - 0x36dd18
void func_0036DCE8_0x36dce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036DCE8_0x36dce8");
#endif

    switch (ctx->pc) {
        case 0x36dcf0u: goto label_36dcf0;
        default: break;
    }

    ctx->pc = 0x36dce8u;

    // 0x36dce8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x36dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x36dcec: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x36dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_36dcf0:
    // 0x36dcf0: 0x0  nop
    ctx->pc = 0x36dcf0u;
    // NOP
    // 0x36dcf4: 0x0  nop
    ctx->pc = 0x36dcf4u;
    // NOP
    // 0x36dcf8: 0x0  nop
    ctx->pc = 0x36dcf8u;
    // NOP
    // 0x36dcfc: 0x0  nop
    ctx->pc = 0x36dcfcu;
    // NOP
    // 0x36dd00: 0x0  nop
    ctx->pc = 0x36dd00u;
    // NOP
    // 0x36dd04: 0x443fffa  bgezl       $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36DD04u;
    {
        const bool branch_taken_0x36dd04 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x36dd04) {
            ctx->pc = 0x36DD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36DD04u;
            // 0x36dd08: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36DCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36dcf0;
        }
    }
    ctx->pc = 0x36DD0Cu;
    // 0x36dd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x36DD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DD14u;
    // 0x36dd14: 0x0  nop
    ctx->pc = 0x36dd14u;
    // NOP
    ctx->pc = 0x36dd18u;
}
