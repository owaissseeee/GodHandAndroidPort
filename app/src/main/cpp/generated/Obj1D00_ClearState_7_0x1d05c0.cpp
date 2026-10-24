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

// Function: Obj1D00_ClearState_7
// Address: 0x1d05c0 - 0x1d05d8
void Obj1D00_ClearState_7_0x1d05c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj1D00_ClearState_7_0x1d05c0");
#endif

    ctx->pc = 0x1d05c0u;

    // 0x1d05c0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d05c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d05c4: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1d05c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d05c8: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x1d05c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d05cc: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1d05ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d05d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D05D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05D0u;
        // 0x1d05d4: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D05D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D05D8u;
}
