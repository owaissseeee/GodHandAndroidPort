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

// Function: Tramp_func_001C29D0_00188F10
// Address: 0x188f10 - 0x188f30
void Tramp_func_001C29D0_00188F10_0x188f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001C29D0_00188F10_0x188f10");
#endif

    switch (ctx->pc) {
        case 0x188f20u: goto label_188f20;
        default: break;
    }

    ctx->pc = 0x188f10u;

    // 0x188f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188f18: 0xc070a74  jal         func_1C29D0
    ctx->pc = 0x188F18u;
    SET_GPR_U32(ctx, 31, 0x188F20u);
    ctx->pc = 0x1C29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C29D0u, 0x188F18u, 0x188F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188F20u;
label_188f20:
    // 0x188f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188f24: 0x3e00008  jr          $ra
    ctx->pc = 0x188F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F24u;
        // 0x188f28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188F2Cu;
    // 0x188f2c: 0x0  nop
    ctx->pc = 0x188f2cu;
    // NOP
    ctx->pc = 0x188f30u;
}
