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

// Function: Obj1D00_SetState_7_16
// Address: 0x1d0718 - 0x1d0738
void Obj1D00_SetState_7_16_0x1d0718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj1D00_SetState_7_16_0x1d0718");
#endif

    ctx->pc = 0x1d0718u;

    // 0x1d0718: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d0718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d071c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1d071cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d0720: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x1d0720u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0724: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x1d0724u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0728: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1d0728u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d072c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D072Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D072Cu;
        // 0x1d0730: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D072Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0734u;
    // 0x1d0734: 0x0  nop
    ctx->pc = 0x1d0734u;
    // NOP
    ctx->pc = 0x1d0738u;
}
