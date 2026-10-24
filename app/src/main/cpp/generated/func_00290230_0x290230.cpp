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

// Function: func_00290230
// Address: 0x290230 - 0x290250
void func_00290230_0x290230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00290230_0x290230");
#endif

    switch (ctx->pc) {
        case 0x290240u: goto label_290240;
        default: break;
    }

    ctx->pc = 0x290230u;

    // 0x290230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x290234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290238: 0xc0a4044  jal         func_290110
    ctx->pc = 0x290238u;
    SET_GPR_U32(ctx, 31, 0x290240u);
    ctx->pc = 0x290110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290110u, 0x290238u, 0x290240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290240u;
label_290240:
    // 0x290240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290244: 0x3e00008  jr          $ra
    ctx->pc = 0x290244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290244u;
        // 0x290248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29024Cu;
    // 0x29024c: 0x0  nop
    ctx->pc = 0x29024cu;
    // NOP
    ctx->pc = 0x290250u;
}
