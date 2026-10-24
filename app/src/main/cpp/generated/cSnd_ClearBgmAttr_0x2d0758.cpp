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

// Function: cSnd_ClearBgmAttr
// Address: 0x2d0758 - 0x2d0770
void cSnd_ClearBgmAttr_0x2d0758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_ClearBgmAttr_0x2d0758");
#endif

    ctx->pc = 0x2d0758u;

    // 0x2d0758: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x2d0758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2d075c: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x2d075cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x2d0760: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2d0760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2d0764: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0764u;
        // 0x2d0768: 0xac820050  sw          $v0, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D076Cu;
    // 0x2d076c: 0x0  nop
    ctx->pc = 0x2d076cu;
    // NOP
    ctx->pc = 0x2d0770u;
}
