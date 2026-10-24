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

// Function: Tramp_func_001B79B0_001A6CD8
// Address: 0x1a6cd8 - 0x1a6d18
void Tramp_func_001B79B0_001A6CD8_0x1a6cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001B79B0_001A6CD8_0x1a6cd8");
#endif

    switch (ctx->pc) {
        case 0x1a6ce8u: goto label_1a6ce8;
        default: break;
    }

    ctx->pc = 0x1a6cd8u;

    // 0x1a6cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6cdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6ce0: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x1A6CE0u;
    SET_GPR_U32(ctx, 31, 0x1A6CE8u);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x1A6CE0u, 0x1A6CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6CE8u;
label_1a6ce8:
    // 0x1a6ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6cec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CECu;
        // 0x1a6cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6CF4u;
    // 0x1a6cf4: 0x0  nop
    ctx->pc = 0x1a6cf4u;
    // NOP
    // 0x1a6cf8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a6cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a6cfc: 0x0  nop
    ctx->pc = 0x1a6cfcu;
    // NOP
    // 0x1a6d00: 0x0  nop
    ctx->pc = 0x1a6d00u;
    // NOP
    // 0x1a6d04: 0x0  nop
    ctx->pc = 0x1a6d04u;
    // NOP
    // 0x1a6d08: 0x0  nop
    ctx->pc = 0x1a6d08u;
    // NOP
    // 0x1a6d0c: 0x0  nop
    ctx->pc = 0x1a6d0cu;
    // NOP
    // 0x1a6d10: 0x0  nop
    ctx->pc = 0x1a6d10u;
    // NOP
    // 0x1a6d14: 0x0  nop
    ctx->pc = 0x1a6d14u;
    // NOP
    ctx->pc = 0x1a6d18u;
}
