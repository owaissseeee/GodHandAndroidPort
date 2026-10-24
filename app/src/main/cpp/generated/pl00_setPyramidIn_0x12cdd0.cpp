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

// Function: pl00_setPyramidIn
// Address: 0x12cdd0 - 0x12cdf0
void pl00_setPyramidIn_0x12cdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pl00_setPyramidIn_0x12cdd0");
#endif

    ctx->pc = 0x12cdd0u;

    // 0x12cdd0: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x12cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x12cdd4: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x12cdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cdd8: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x12cdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x12cddc: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x12cddcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cde0: 0x3e00008  jr          $ra
    ctx->pc = 0x12CDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDE0u;
        // 0x12cde4: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CDE8u;
    // 0x12cde8: 0x0  nop
    ctx->pc = 0x12cde8u;
    // NOP
    // 0x12cdec: 0x0  nop
    ctx->pc = 0x12cdecu;
    // NOP
    ctx->pc = 0x12cdf0u;
}
