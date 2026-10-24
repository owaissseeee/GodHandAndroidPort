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

// Function: func_0038F0D0
// Address: 0x38f0d0 - 0x38f0f0
void func_0038F0D0_0x38f0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038F0D0_0x38f0d0");
#endif

    switch (ctx->pc) {
        case 0x38f0e0u: goto label_38f0e0;
        default: break;
    }

    ctx->pc = 0x38f0d0u;

    // 0x38f0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38f0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38f0d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38f0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38f0d8: 0xc0e4ca6  jal         func_393298
    ctx->pc = 0x38F0D8u;
    SET_GPR_U32(ctx, 31, 0x38F0E0u);
    ctx->pc = 0x393298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393298u, 0x38F0D8u, 0x38F0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F0E0u;
label_38f0e0:
    // 0x38f0e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38f0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x38F0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0E4u;
        // 0x38f0e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F0ECu;
    // 0x38f0ec: 0x0  nop
    ctx->pc = 0x38f0ecu;
    // NOP
    ctx->pc = 0x38f0f0u;
}
