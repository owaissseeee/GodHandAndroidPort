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

// Function: func_0033D2C0
// Address: 0x33d2c0 - 0x33d2d0
void func_0033D2C0_0x33d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033D2C0_0x33d2c0");
#endif

    ctx->pc = 0x33d2c0u;

    // 0x33d2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x33D2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D2C0u;
        // 0x33d2c4: 0x8c820090  lw          $v0, 0x90($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D2C8u;
    // 0x33d2c8: 0xac8500fc  sw          $a1, 0xFC($a0)
    ctx->pc = 0x33d2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 5));
    // 0x33d2cc: 0x0  nop
    ctx->pc = 0x33d2ccu;
    // NOP
    ctx->pc = 0x33d2d0u;
}
