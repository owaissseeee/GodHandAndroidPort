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

// Function: cParts_setRotationOrder
// Address: 0x150128 - 0x150138
void cParts_setRotationOrder_0x150128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cParts_setRotationOrder_0x150128");
#endif

    ctx->pc = 0x150128u;

    // 0x150128: 0x3e00008  jr          $ra
    ctx->pc = 0x150128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150128u;
        // 0x15012c: 0xa0850140  sb          $a1, 0x140($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 320), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150130u;
    // 0x150130: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x150130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x150134: 0x0  nop
    ctx->pc = 0x150134u;
    // NOP
    ctx->pc = 0x150138u;
}
