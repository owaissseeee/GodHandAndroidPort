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

// Function: cSceAtUnit_ActTypeSet
// Address: 0x2c0dd8 - 0x2c0de8
void cSceAtUnit_ActTypeSet_0x2c0dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtUnit_ActTypeSet_0x2c0dd8");
#endif

    ctx->pc = 0x2c0dd8u;

    // 0x2c0dd8: 0xa0860054  sb          $a2, 0x54($a0)
    ctx->pc = 0x2c0dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c0ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0DDCu;
        // 0x2c0de0: 0xa085003a  sb          $a1, 0x3A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0DE4u;
    // 0x2c0de4: 0x0  nop
    ctx->pc = 0x2c0de4u;
    // NOP
    ctx->pc = 0x2c0de8u;
}
