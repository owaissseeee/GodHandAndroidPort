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

// Function: func_001FF448
// Address: 0x1ff448 - 0x1ff470
void func_001FF448_0x1ff448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FF448_0x1ff448");
#endif

    switch (ctx->pc) {
        case 0x1ff464u: goto label_1ff464;
        default: break;
    }

    ctx->pc = 0x1ff448u;

    // 0x1ff448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ff44c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff450: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff454: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF454u;
    {
        const bool branch_taken_0x1ff454 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1FF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF454u;
        // 0x1ff458: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff454) {
            ctx->pc = 0x1FF468u;
            goto label_1ff468;
        }
    }
    ctx->pc = 0x1FF45Cu;
    // 0x1ff45c: 0xc07fce8  jal         func_1FF3A0
    ctx->pc = 0x1FF45Cu;
    SET_GPR_U32(ctx, 31, 0x1FF464u);
    ctx->pc = 0x1FF3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF3A0u, 0x1FF45Cu, 0x1FF464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF464u;
label_1ff464:
    // 0x1ff464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff468:
    // 0x1ff468: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF468u;
        // 0x1ff46c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF470u;
}
