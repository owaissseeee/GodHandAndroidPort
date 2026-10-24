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

// Function: Tramp_func_001C29D0_0016F8E0
// Address: 0x16f8e0 - 0x16f900
void Tramp_func_001C29D0_0016F8E0_0x16f8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001C29D0_0016F8E0_0x16f8e0");
#endif

    switch (ctx->pc) {
        case 0x16f8f0u: goto label_16f8f0;
        default: break;
    }

    ctx->pc = 0x16f8e0u;

    // 0x16f8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f8e8: 0xc070a74  jal         func_1C29D0
    ctx->pc = 0x16F8E8u;
    SET_GPR_U32(ctx, 31, 0x16F8F0u);
    ctx->pc = 0x1C29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C29D0u, 0x16F8E8u, 0x16F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F8F0u;
label_16f8f0:
    // 0x16f8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x16F8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8F4u;
        // 0x16f8f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F8FCu;
    // 0x16f8fc: 0x0  nop
    ctx->pc = 0x16f8fcu;
    // NOP
    ctx->pc = 0x16f900u;
}
