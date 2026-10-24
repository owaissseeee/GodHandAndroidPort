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

// Function: func_002AEF98
// Address: 0x2aef98 - 0x2aefa8
void func_002AEF98_0x2aef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AEF98_0x2aef98");
#endif

    ctx->pc = 0x2aef98u;

    // 0x2aef98: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF98u;
        // 0x2aef9c: 0xa0800bf0  sb          $zero, 0xBF0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3056), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEFA0u;
    // 0x2aefa0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2aefa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2aefa4: 0x0  nop
    ctx->pc = 0x2aefa4u;
    // NOP
    ctx->pc = 0x2aefa8u;
}
