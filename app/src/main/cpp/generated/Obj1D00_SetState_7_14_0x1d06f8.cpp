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

// Function: Obj1D00_SetState_7_14
// Address: 0x1d06f8 - 0x1d0718
void Obj1D00_SetState_7_14_0x1d06f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj1D00_SetState_7_14_0x1d06f8");
#endif

    ctx->pc = 0x1d06f8u;

    // 0x1d06f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d06f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d06fc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d06fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d0700: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x1d0700u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0704: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x1d0704u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0708: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1d0708u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d070c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D070Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D070Cu;
        // 0x1d0710: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D070Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0714u;
    // 0x1d0714: 0x0  nop
    ctx->pc = 0x1d0714u;
    // NOP
    ctx->pc = 0x1d0718u;
}
