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

// Function: func_003565D0
// Address: 0x3565d0 - 0x3565e0
void func_003565D0_0x3565d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003565D0_0x3565d0");
#endif

    ctx->pc = 0x3565d0u;

    // 0x3565d0: 0x8c831fc0  lw          $v1, 0x1FC0($a0)
    ctx->pc = 0x3565d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x3565d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3565D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3565D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3565D4u;
        // 0x3565d8: 0x8c6211fc  lw          $v0, 0x11FC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4604)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3565D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3565DCu;
    // 0x3565dc: 0x0  nop
    ctx->pc = 0x3565dcu;
    // NOP
    ctx->pc = 0x3565e0u;
}
