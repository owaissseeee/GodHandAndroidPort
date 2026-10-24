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

// Function: func_00306AA8
// Address: 0x306aa8 - 0x306af0
void func_00306AA8_0x306aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306AA8_0x306aa8");
#endif

    switch (ctx->pc) {
        case 0x306ab0u: goto label_306ab0;
        case 0x306ad0u: goto label_306ad0;
        default: break;
    }

    ctx->pc = 0x306aa8u;

    // 0x306aa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306aac: 0x24830100  addiu       $v1, $a0, 0x100
    ctx->pc = 0x306aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
label_306ab0:
    // 0x306ab0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x306ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x306ab4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x306ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x306ab8: 0x2ca204e2  sltiu       $v0, $a1, 0x4E2
    ctx->pc = 0x306ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1250) ? 1 : 0);
    // 0x306abc: 0x0  nop
    ctx->pc = 0x306abcu;
    // NOP
    // 0x306ac0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x306AC0u;
    {
        const bool branch_taken_0x306ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AC0u;
        // 0x306ac4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ac0) {
            ctx->pc = 0x306AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306ab0;
        }
    }
    ctx->pc = 0x306AC8u;
    // 0x306ac8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x306ac8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306acc: 0x0  nop
    ctx->pc = 0x306accu;
    // NOP
label_306ad0:
    // 0x306ad0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x306ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x306ad4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x306ad8: 0x2c620040  sltiu       $v0, $v1, 0x40
    ctx->pc = 0x306ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x306adc: 0x0  nop
    ctx->pc = 0x306adcu;
    // NOP
    // 0x306ae0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x306AE0u;
    {
        const bool branch_taken_0x306ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AE0u;
        // 0x306ae4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ae0) {
            ctx->pc = 0x306AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306ad0;
        }
    }
    ctx->pc = 0x306AE8u;
    // 0x306ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x306AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306AF0u;
}
