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

// Function: Tramp_func_001B79B0_0018BAA0
// Address: 0x18baa0 - 0x18bac0
void Tramp_func_001B79B0_0018BAA0_0x18baa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001B79B0_0018BAA0_0x18baa0");
#endif

    switch (ctx->pc) {
        case 0x18bab0u: goto label_18bab0;
        default: break;
    }

    ctx->pc = 0x18baa0u;

    // 0x18baa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18baa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18baa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18baa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18baa8: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x18BAA8u;
    SET_GPR_U32(ctx, 31, 0x18BAB0u);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x18BAA8u, 0x18BAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BAB0u;
label_18bab0:
    // 0x18bab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18bab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bab4: 0x3e00008  jr          $ra
    ctx->pc = 0x18BAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BAB4u;
        // 0x18bab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BABCu;
    // 0x18babc: 0x0  nop
    ctx->pc = 0x18babcu;
    // NOP
    ctx->pc = 0x18bac0u;
}
