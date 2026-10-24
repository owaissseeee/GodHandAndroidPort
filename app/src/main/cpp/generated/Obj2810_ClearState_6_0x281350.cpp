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

// Function: Obj2810_ClearState_6
// Address: 0x281350 - 0x281368
void Obj2810_ClearState_6_0x281350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj2810_ClearState_6_0x281350");
#endif

    ctx->pc = 0x281350u;

    // 0x281350: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x281350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x281354: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x281354u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x281358: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x281358u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x28135c: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x28135cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x281360: 0x3e00008  jr          $ra
    ctx->pc = 0x281360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281360u;
        // 0x281364: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281368u;
}
