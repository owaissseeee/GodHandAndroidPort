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

// Function: func_002DF938
// Address: 0x2df938 - 0x2df950
void func_002DF938_0x2df938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DF938_0x2df938");
#endif

    ctx->pc = 0x2df938u;

    // 0x2df938: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF938u;
    {
        const bool branch_taken_0x2df938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df938) {
            ctx->pc = 0x2DF948u;
            goto label_2df948;
        }
    }
    ctx->pc = 0x2DF940u;
    // 0x2df940: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DF940u;
    {
        const bool branch_taken_0x2df940 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df940) {
            ctx->pc = 0x2DF944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF940u;
            // 0x2df944: 0xaca40058  sw          $a0, 0x58($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF948u;
            goto label_2df948;
        }
    }
    ctx->pc = 0x2DF948u;
label_2df948:
    // 0x2df948: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF950u;
}
