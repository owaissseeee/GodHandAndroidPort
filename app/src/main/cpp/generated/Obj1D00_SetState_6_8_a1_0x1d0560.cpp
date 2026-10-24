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

// Function: Obj1D00_SetState_6_8_a1
// Address: 0x1d0560 - 0x1d0580
void Obj1D00_SetState_6_8_a1_0x1d0560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj1D00_SetState_6_8_a1_0x1d0560");
#endif

    ctx->pc = 0x1d0560u;

    // 0x1d0560: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d0560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d0564: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1d0564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d0568: 0xa08502f7  sb          $a1, 0x2F7($a0)
    ctx->pc = 0x1d0568u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d056c: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x1d056cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0570: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x1d0570u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0574: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0574u;
        // 0x1d0578: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D057Cu;
    // 0x1d057c: 0x0  nop
    ctx->pc = 0x1d057cu;
    // NOP
    ctx->pc = 0x1d0580u;
}
