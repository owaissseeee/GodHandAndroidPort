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

// Function: __uncatch_exception
// Address: 0x3214d0 - 0x321500
void ps2___uncatch_exception_0x3214d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___uncatch_exception_0x3214d0");
#endif

    switch (ctx->pc) {
        case 0x3214e0u: goto label_3214e0;
        case 0x3214f4u: goto label_3214f4;
        default: break;
    }

    ctx->pc = 0x3214d0u;

    // 0x3214d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3214d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3214d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3214d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3214d8: 0xc0c80d8  jal         func_320360
    ctx->pc = 0x3214D8u;
    SET_GPR_U32(ctx, 31, 0x3214E0u);
    ctx->pc = 0x320360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320360u, 0x3214D8u, 0x3214E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3214E0u;
label_3214e0:
    // 0x3214e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3214e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3214e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3214E4u;
    {
        const bool branch_taken_0x3214e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3214E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214E4u;
        // 0x3214e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3214e4) {
            ctx->pc = 0x3214F4u;
            goto label_3214f4;
        }
    }
    ctx->pc = 0x3214ECu;
    // 0x3214ec: 0xc0c8478  jal         func_3211E0
    ctx->pc = 0x3214ECu;
    SET_GPR_U32(ctx, 31, 0x3214F4u);
    ctx->pc = 0x3211E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211E0u, 0x3214ECu, 0x3214F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3214F4u;
label_3214f4:
    // 0x3214f4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x3214f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x3214f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3214F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3214FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214F8u;
        // 0x3214fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3214F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321500u;
}
