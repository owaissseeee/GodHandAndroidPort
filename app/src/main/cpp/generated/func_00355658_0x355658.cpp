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

// Function: func_00355658
// Address: 0x355658 - 0x355670
void func_00355658_0x355658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00355658_0x355658");
#endif

    ctx->pc = 0x355658u;

    // 0x355658: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x355658u;
    {
        const bool branch_taken_0x355658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355658u;
        // 0x35565c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355658) {
            ctx->pc = 0x355664u;
            goto label_355664;
        }
    }
    ctx->pc = 0x355660u;
    // 0x355660: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x355660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_355664:
    // 0x355664: 0x3e00008  jr          $ra
    ctx->pc = 0x355664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35566Cu;
    // 0x35566c: 0x0  nop
    ctx->pc = 0x35566cu;
    // NOP
    ctx->pc = 0x355670u;
}
