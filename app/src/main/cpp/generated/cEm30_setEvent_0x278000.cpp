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

// Function: cEm30_setEvent
// Address: 0x278000 - 0x278018
void cEm30_setEvent_0x278000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm30_setEvent_0x278000");
#endif

    ctx->pc = 0x278000u;

    // 0x278000: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x278000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x278004: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x278004u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x278008: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x278008u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x27800c: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x27800cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x278010: 0x3e00008  jr          $ra
    ctx->pc = 0x278010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278010u;
        // 0x278014: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278018u;
}
