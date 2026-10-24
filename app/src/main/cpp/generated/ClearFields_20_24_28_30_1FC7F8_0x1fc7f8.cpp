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

// Function: ClearFields_20_24_28_30_1FC7F8
// Address: 0x1fc7f8 - 0x1fc810
void ClearFields_20_24_28_30_1FC7F8_0x1fc7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearFields_20_24_28_30_1FC7F8_0x1fc7f8");
#endif

    ctx->pc = 0x1fc7f8u;

    // 0x1fc7f8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1fc7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1fc7fc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1fc7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1fc800: 0xa4800030  sh          $zero, 0x30($a0)
    ctx->pc = 0x1fc800u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fc804: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC804u;
        // 0x1fc808: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC80Cu;
    // 0x1fc80c: 0x0  nop
    ctx->pc = 0x1fc80cu;
    // NOP
    ctx->pc = 0x1fc810u;
}
