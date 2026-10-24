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

// Function: func_003554D8
// Address: 0x3554d8 - 0x3554e8
void func_003554D8_0x3554d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003554D8_0x3554d8");
#endif

    ctx->pc = 0x3554d8u;

    // 0x3554d8: 0x8c831fc0  lw          $v1, 0x1FC0($a0)
    ctx->pc = 0x3554d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x3554dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3554dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3554e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3554E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3554E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3554E0u;
        // 0x3554e4: 0xac62007c  sw          $v0, 0x7C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3554E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3554E8u;
}
