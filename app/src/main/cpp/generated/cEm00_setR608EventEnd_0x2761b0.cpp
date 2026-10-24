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

// Function: cEm00_setR608EventEnd
// Address: 0x2761b0 - 0x2761d0
void cEm00_setR608EventEnd_0x2761b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_setR608EventEnd_0x2761b0");
#endif

    ctx->pc = 0x2761b0u;

    // 0x2761b0: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2761b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2761b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2761b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2761b8: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x2761b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2761bc: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x2761bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x2761c0: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x2761c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2761c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2761C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2761C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761C4u;
        // 0x2761c8: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2761C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2761CCu;
    // 0x2761cc: 0x0  nop
    ctx->pc = 0x2761ccu;
    // NOP
    ctx->pc = 0x2761d0u;
}
