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

// Function: Obj35C0_SetField10_IfPositive_C528
// Address: 0x35c528 - 0x35c538
void Obj35C0_SetField10_IfPositive_C528_0x35c528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35C0_SetField10_IfPositive_C528_0x35c528");
#endif

    ctx->pc = 0x35c528u;

    // 0x35c528: 0x5ca00001  bgtzl       $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x35C528u;
    {
        const bool branch_taken_0x35c528 = (GPR_S64(ctx, 5) > 0);
        if (branch_taken_0x35c528) {
            ctx->pc = 0x35C52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C528u;
            // 0x35c52c: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C530u;
            goto label_35c530;
        }
    }
    ctx->pc = 0x35C530u;
label_35c530:
    // 0x35c530: 0x3e00008  jr          $ra
    ctx->pc = 0x35C530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C538u;
}
