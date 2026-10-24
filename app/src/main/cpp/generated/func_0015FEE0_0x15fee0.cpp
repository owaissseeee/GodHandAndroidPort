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

// Function: func_0015FEE0
// Address: 0x15fee0 - 0x15ff10
void func_0015FEE0_0x15fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015FEE0_0x15fee0");
#endif

    switch (ctx->pc) {
        case 0x15fef0u: goto label_15fef0;
        default: break;
    }

    ctx->pc = 0x15fee0u;

    // 0x15fee0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15fee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15fee4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15fee8: 0x24820f08  addiu       $v0, $a0, 0xF08
    ctx->pc = 0x15fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3848));
    // 0x15feec: 0x0  nop
    ctx->pc = 0x15feecu;
    // NOP
label_15fef0:
    // 0x15fef0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x15fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x15fef4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15fef8: 0x0  nop
    ctx->pc = 0x15fef8u;
    // NOP
    // 0x15fefc: 0x0  nop
    ctx->pc = 0x15fefcu;
    // NOP
    // 0x15ff00: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x15FF00u;
    {
        const bool branch_taken_0x15ff00 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x15FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF00u;
        // 0x15ff04: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff00) {
            ctx->pc = 0x15FEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fef0;
        }
    }
    ctx->pc = 0x15FF08u;
    // 0x15ff08: 0x3e00008  jr          $ra
    ctx->pc = 0x15FF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF08u;
        // 0x15ff0c: 0xa0800f15  sb          $zero, 0xF15($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3861), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FF10u;
}
