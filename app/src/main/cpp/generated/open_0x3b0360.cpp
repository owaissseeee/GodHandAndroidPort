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

// Function: open
// Address: 0x3b0360 - 0x3b0388
void open_0x3b0360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("open_0x3b0360");
#endif

    switch (ctx->pc) {
        case 0x3b0370u: goto label_3b0370;
        default: break;
    }

    ctx->pc = 0x3b0360u;

    // 0x3b0360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b0360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b0364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b0364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b0368: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3B0368u;
    SET_GPR_U32(ctx, 31, 0x3B0370u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3B0368u, 0x3B0370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0370u;
label_3b0370:
    // 0x3b0370: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3b0370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3b0374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b0374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0378: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3b0378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3b037c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b037cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b0380: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0380u;
        // 0x3b0384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0388u;
}
