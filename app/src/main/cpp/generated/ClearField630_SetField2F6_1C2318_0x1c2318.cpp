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

// Function: ClearField630_SetField2F6_1C2318
// Address: 0x1c2318 - 0x1c2328
void ClearField630_SetField2F6_1C2318_0x1c2318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearField630_SetField2F6_1C2318_0x1c2318");
#endif

    ctx->pc = 0x1c2318u;

    // 0x1c2318: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c2318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c231c: 0xac800630  sw          $zero, 0x630($a0)
    ctx->pc = 0x1c231cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1584), GPR_U32(ctx, 0));
    // 0x1c2320: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2320u;
        // 0x1c2324: 0xa08202f6  sb          $v0, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2328u;
}
