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

// Function: Poker_Release
// Address: 0x1d72b0 - 0x1d72d0
void Poker_Release_0x1d72b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Poker_Release_0x1d72b0");
#endif

    switch (ctx->pc) {
        case 0x1d72c0u: goto label_1d72c0;
        default: break;
    }

    ctx->pc = 0x1d72b0u;

    // 0x1d72b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d72b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d72b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d72b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d72b8: 0xc077e50  jal         func_1DF940
    ctx->pc = 0x1D72B8u;
    SET_GPR_U32(ctx, 31, 0x1D72C0u);
    ctx->pc = 0x1DF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF940u, 0x1D72B8u, 0x1D72C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D72C0u;
label_1d72c0:
    // 0x1d72c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d72c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d72c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D72C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D72C4u;
        // 0x1d72c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D72C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D72CCu;
    // 0x1d72cc: 0x0  nop
    ctx->pc = 0x1d72ccu;
    // NOP
    ctx->pc = 0x1d72d0u;
}
