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

// Function: Obj1D00_SetState_7_12
// Address: 0x1d06d8 - 0x1d06f8
void Obj1D00_SetState_7_12_0x1d06d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj1D00_SetState_7_12_0x1d06d8");
#endif

    ctx->pc = 0x1d06d8u;

    // 0x1d06d8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d06d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d06dc: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1d06dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1d06e0: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x1d06e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d06e4: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x1d06e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d06e8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1d06e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d06ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D06ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06ECu;
        // 0x1d06f0: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D06ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D06F4u;
    // 0x1d06f4: 0x0  nop
    ctx->pc = 0x1d06f4u;
    // NOP
    ctx->pc = 0x1d06f8u;
}
