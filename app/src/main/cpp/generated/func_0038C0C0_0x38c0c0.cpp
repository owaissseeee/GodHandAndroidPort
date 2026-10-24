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

// Function: func_0038C0C0
// Address: 0x38c0c0 - 0x38c0d0
void func_0038C0C0_0x38c0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038C0C0_0x38c0c0");
#endif

    ctx->pc = 0x38c0c0u;

    // 0x38c0c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x38c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38c0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x38C0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C0C4u;
        // 0x38c0c8: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C0CCu;
    // 0x38c0cc: 0x0  nop
    ctx->pc = 0x38c0ccu;
    // NOP
    ctx->pc = 0x38c0d0u;
}
