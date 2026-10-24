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

// Function: Obj1D00_SetState_6_E_a1
// Address: 0x1d05a0 - 0x1d05c0
void Obj1D00_SetState_6_E_a1_0x1d05a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj1D00_SetState_6_E_a1_0x1d05a0");
#endif

    ctx->pc = 0x1d05a0u;

    // 0x1d05a0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d05a4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1d05a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d05a8: 0xa08502f7  sb          $a1, 0x2F7($a0)
    ctx->pc = 0x1d05a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d05ac: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x1d05acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d05b0: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x1d05b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d05b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D05B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05B4u;
        // 0x1d05b8: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D05B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D05BCu;
    // 0x1d05bc: 0x0  nop
    ctx->pc = 0x1d05bcu;
    // NOP
    ctx->pc = 0x1d05c0u;
}
