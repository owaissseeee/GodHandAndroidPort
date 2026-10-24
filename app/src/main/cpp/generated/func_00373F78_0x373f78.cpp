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

// Function: func_00373F78
// Address: 0x373f78 - 0x373fa0
void func_00373F78_0x373f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00373F78_0x373f78");
#endif

    switch (ctx->pc) {
        case 0x373f94u: goto label_373f94;
        default: break;
    }

    ctx->pc = 0x373f78u;

    // 0x373f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373f7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373f80: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x373f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x373f84: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x373F84u;
    {
        const bool branch_taken_0x373f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x373F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373F84u;
        // 0x373f88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373f84) {
            ctx->pc = 0x373F98u;
            goto label_373f98;
        }
    }
    ctx->pc = 0x373F8Cu;
    // 0x373f8c: 0xc0ca7aa  jal         func_329EA8
    ctx->pc = 0x373F8Cu;
    SET_GPR_U32(ctx, 31, 0x373F94u);
    ctx->pc = 0x329EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329EA8u, 0x373F8Cu, 0x373F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F94u;
label_373f94:
    // 0x373f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_373f98:
    // 0x373f98: 0x3e00008  jr          $ra
    ctx->pc = 0x373F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373F98u;
        // 0x373f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373FA0u;
}
