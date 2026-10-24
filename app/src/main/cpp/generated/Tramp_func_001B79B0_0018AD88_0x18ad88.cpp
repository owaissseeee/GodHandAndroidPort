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

// Function: Tramp_func_001B79B0_0018AD88
// Address: 0x18ad88 - 0x18ada8
void Tramp_func_001B79B0_0018AD88_0x18ad88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001B79B0_0018AD88_0x18ad88");
#endif

    switch (ctx->pc) {
        case 0x18ad98u: goto label_18ad98;
        default: break;
    }

    ctx->pc = 0x18ad88u;

    // 0x18ad88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ad88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ad8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ad8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ad90: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x18AD90u;
    SET_GPR_U32(ctx, 31, 0x18AD98u);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x18AD90u, 0x18AD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD98u;
label_18ad98:
    // 0x18ad98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ad98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ad9c: 0x3e00008  jr          $ra
    ctx->pc = 0x18AD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD9Cu;
        // 0x18ada0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18ADA4u;
    // 0x18ada4: 0x0  nop
    ctx->pc = 0x18ada4u;
    // NOP
    ctx->pc = 0x18ada8u;
}
