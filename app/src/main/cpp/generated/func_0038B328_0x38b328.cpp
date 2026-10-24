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

// Function: func_0038B328
// Address: 0x38b328 - 0x38b348
void func_0038B328_0x38b328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038B328_0x38b328");
#endif

    switch (ctx->pc) {
        case 0x38b338u: goto label_38b338;
        default: break;
    }

    ctx->pc = 0x38b328u;

    // 0x38b328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38b328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38b32c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38b32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38b330: 0xc0e3924  jal         func_38E490
    ctx->pc = 0x38B330u;
    SET_GPR_U32(ctx, 31, 0x38B338u);
    ctx->pc = 0x38E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E490u, 0x38B330u, 0x38B338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B338u;
label_38b338:
    // 0x38b338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38b338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b33c: 0x3e00008  jr          $ra
    ctx->pc = 0x38B33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B33Cu;
        // 0x38b340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B344u;
    // 0x38b344: 0x0  nop
    ctx->pc = 0x38b344u;
    // NOP
    ctx->pc = 0x38b348u;
}
