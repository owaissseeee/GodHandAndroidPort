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

// Function: func_00139060
// Address: 0x139060 - 0x139090
void func_00139060_0x139060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00139060_0x139060");
#endif

    switch (ctx->pc) {
        case 0x139084u: goto label_139084;
        default: break;
    }

    ctx->pc = 0x139060u;

    // 0x139060: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x139060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x139064: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139068: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x139068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x13906c: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x13906cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x139070: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x139070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x139074: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139074u;
    {
        const bool branch_taken_0x139074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x139078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139074u;
        // 0x139078: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139074) {
            ctx->pc = 0x139084u;
            goto label_139084;
        }
    }
    ctx->pc = 0x13907Cu;
    // 0x13907c: 0xc04e460  jal         func_139180
    ctx->pc = 0x13907Cu;
    SET_GPR_U32(ctx, 31, 0x139084u);
    ctx->pc = 0x139180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139180u, 0x13907Cu, 0x139084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139084u;
label_139084:
    // 0x139084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139088: 0x3e00008  jr          $ra
    ctx->pc = 0x139088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139088u;
        // 0x13908c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139090u;
}
