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

// Function: func_00321208
// Address: 0x321208 - 0x321218
void func_00321208_0x321208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00321208_0x321208");
#endif

    ctx->pc = 0x321208u;

    // 0x321208: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x321208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x32120c: 0x8c624908  lw          $v0, 0x4908($v1)
    ctx->pc = 0x32120cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4908u));
    // 0x321210: 0x3e00008  jr          $ra
    ctx->pc = 0x321210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321210u;
        // 0x321214: 0xac644908  sw          $a0, 0x4908($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18696), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321218u;
}
