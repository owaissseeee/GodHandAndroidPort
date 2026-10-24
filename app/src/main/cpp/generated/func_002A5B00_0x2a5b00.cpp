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

// Function: func_002A5B00
// Address: 0x2a5b00 - 0x2a5b18
void func_002A5B00_0x2a5b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A5B00_0x2a5b00");
#endif

    ctx->pc = 0x2a5b00u;

    // 0x2a5b00: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2a5b00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5b04: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2a5b04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5b08: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x2a5b08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B0Cu;
        // 0x2a5b10: 0xa0800002  sb          $zero, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5B14u;
    // 0x2a5b14: 0x0  nop
    ctx->pc = 0x2a5b14u;
    // NOP
    ctx->pc = 0x2a5b18u;
}
