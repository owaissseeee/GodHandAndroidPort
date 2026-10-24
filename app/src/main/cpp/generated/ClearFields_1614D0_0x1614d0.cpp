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

// Function: ClearFields_1614D0
// Address: 0x1614d0 - 0x161500
void ClearFields_1614D0_0x1614d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearFields_1614D0_0x1614d0");
#endif

    ctx->pc = 0x1614d0u;

    // 0x1614d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1614d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1614d4: 0xa080005d  sb          $zero, 0x5D($a0)
    ctx->pc = 0x1614d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x1614d8: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x1614d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x1614dc: 0xa0800058  sb          $zero, 0x58($a0)
    ctx->pc = 0x1614dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x1614e0: 0xa0800059  sb          $zero, 0x59($a0)
    ctx->pc = 0x1614e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 0));
    // 0x1614e4: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x1614e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x1614e8: 0xa0800064  sb          $zero, 0x64($a0)
    ctx->pc = 0x1614e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x1614ec: 0xa080005a  sb          $zero, 0x5A($a0)
    ctx->pc = 0x1614ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x1614f0: 0xa080005b  sb          $zero, 0x5B($a0)
    ctx->pc = 0x1614f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x1614f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1614F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1614F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1614F4u;
        // 0x1614f8: 0xa080005c  sb          $zero, 0x5C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1614F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1614FCu;
    // 0x1614fc: 0x0  nop
    ctx->pc = 0x1614fcu;
    // NOP
    ctx->pc = 0x161500u;
}
