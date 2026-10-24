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

// Function: Obj1D00_SetState6_Variant6_a1
// Address: 0x1d0528 - 0x1d0540
void Obj1D00_SetState6_Variant6_a1_0x1d0528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj1D00_SetState6_Variant6_a1_0x1d0528");
#endif

    ctx->pc = 0x1d0528u;

    // 0x1d0528: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d0528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d052c: 0xa08502f7  sb          $a1, 0x2F7($a0)
    ctx->pc = 0x1d052cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d0530: 0xa08202f6  sb          $v0, 0x2F6($a0)
    ctx->pc = 0x1d0530u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0534: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1d0534u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0538: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0538u;
        // 0x1d053c: 0xa08202f5  sb          $v0, 0x2F5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0540u;
}
