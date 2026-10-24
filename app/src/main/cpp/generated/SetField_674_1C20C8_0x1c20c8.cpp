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

// Function: SetField_674_1C20C8
// Address: 0x1c20c8 - 0x1c20d8
void SetField_674_1C20C8_0x1c20c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField_674_1C20C8_0x1c20c8");
#endif

    ctx->pc = 0x1c20c8u;

    // 0x1c20c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c20cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C20CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20CCu;
        // 0x1c20d0: 0xa0820674  sb          $v0, 0x674($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1652), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C20CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C20D4u;
    // 0x1c20d4: 0x0  nop
    ctx->pc = 0x1c20d4u;
    // NOP
    ctx->pc = 0x1c20d8u;
}
