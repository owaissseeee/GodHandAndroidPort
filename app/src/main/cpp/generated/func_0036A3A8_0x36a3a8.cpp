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

// Function: func_0036A3A8
// Address: 0x36a3a8 - 0x36a3c0
void func_0036A3A8_0x36a3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036A3A8_0x36a3a8");
#endif

    ctx->pc = 0x36a3a8u;

    // 0x36a3a8: 0x248403ec  addiu       $a0, $a0, 0x3EC
    ctx->pc = 0x36a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1004));
    // 0x36a3ac: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x36a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x36a3b0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x36a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x36a3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x36A3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A3B4u;
        // 0x36a3b8: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A3BCu;
    // 0x36a3bc: 0x0  nop
    ctx->pc = 0x36a3bcu;
    // NOP
    ctx->pc = 0x36a3c0u;
}
