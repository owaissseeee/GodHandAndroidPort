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

// Function: __eh_alloc
// Address: 0x3212c0 - 0x3212e8
void ps2___eh_alloc_0x3212c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___eh_alloc_0x3212c0");
#endif

    switch (ctx->pc) {
        case 0x3212d0u: goto label_3212d0;
        case 0x3212e0u: goto label_3212e0;
        default: break;
    }

    ctx->pc = 0x3212c0u;

    // 0x3212c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3212c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3212c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3212c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3212c8: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x3212C8u;
    SET_GPR_U32(ctx, 31, 0x3212D0u);
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x3212C8u, 0x3212D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3212D0u;
label_3212d0:
    // 0x3212d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3212D0u;
    {
        const bool branch_taken_0x3212d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3212D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3212D0u;
        // 0x3212d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3212d0) {
            ctx->pc = 0x3212E0u;
            goto label_3212e0;
        }
    }
    ctx->pc = 0x3212D8u;
    // 0x3212d8: 0xc0c8478  jal         func_3211E0
    ctx->pc = 0x3212D8u;
    SET_GPR_U32(ctx, 31, 0x3212E0u);
    ctx->pc = 0x3211E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211E0u, 0x3212D8u, 0x3212E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3212E0u;
label_3212e0:
    // 0x3212e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3212E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3212E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3212E0u;
        // 0x3212e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3212E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3212E8u;
}
