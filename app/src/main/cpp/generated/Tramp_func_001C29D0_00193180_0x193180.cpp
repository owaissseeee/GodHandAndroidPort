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

// Function: Tramp_func_001C29D0_00193180
// Address: 0x193180 - 0x1931a0
void Tramp_func_001C29D0_00193180_0x193180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001C29D0_00193180_0x193180");
#endif

    switch (ctx->pc) {
        case 0x193190u: goto label_193190;
        default: break;
    }

    ctx->pc = 0x193180u;

    // 0x193180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193188: 0xc070a74  jal         func_1C29D0
    ctx->pc = 0x193188u;
    SET_GPR_U32(ctx, 31, 0x193190u);
    ctx->pc = 0x1C29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C29D0u, 0x193188u, 0x193190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193190u;
label_193190:
    // 0x193190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193194: 0x3e00008  jr          $ra
    ctx->pc = 0x193194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193194u;
        // 0x193198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19319Cu;
    // 0x19319c: 0x0  nop
    ctx->pc = 0x19319cu;
    // NOP
    ctx->pc = 0x1931a0u;
}
