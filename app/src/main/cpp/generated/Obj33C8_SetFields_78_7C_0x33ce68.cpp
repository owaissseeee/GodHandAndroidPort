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

// Function: Obj33C8_SetFields_78_7C
// Address: 0x33ce68 - 0x33ce80
void Obj33C8_SetFields_78_7C_0x33ce68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj33C8_SetFields_78_7C_0x33ce68");
#endif

    ctx->pc = 0x33ce68u;

    // 0x33ce68: 0xac86007c  sw          $a2, 0x7C($a0)
    ctx->pc = 0x33ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 6));
    // 0x33ce6c: 0x3e00008  jr          $ra
    ctx->pc = 0x33CE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE6Cu;
        // 0x33ce70: 0xac850078  sw          $a1, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CE74u;
    // 0x33ce74: 0x0  nop
    ctx->pc = 0x33ce74u;
    // NOP
    // 0x33ce78: 0xac850080  sw          $a1, 0x80($a0)
    ctx->pc = 0x33ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
    // 0x33ce7c: 0x0  nop
    ctx->pc = 0x33ce7cu;
    // NOP
    ctx->pc = 0x33ce80u;
}
