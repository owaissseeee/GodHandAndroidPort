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

// Function: func_002831A0
// Address: 0x2831a0 - 0x2831b0
void func_002831A0_0x2831a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002831A0_0x2831a0");
#endif

    ctx->pc = 0x2831a0u;

    // 0x2831a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2831a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2831a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2831A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2831A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831A4u;
        // 0x2831a8: 0xa08215b0  sb          $v0, 0x15B0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5552), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2831A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2831ACu;
    // 0x2831ac: 0x0  nop
    ctx->pc = 0x2831acu;
    // NOP
    ctx->pc = 0x2831b0u;
}
