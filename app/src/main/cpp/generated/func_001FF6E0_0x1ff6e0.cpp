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

// Function: func_001FF6E0
// Address: 0x1ff6e0 - 0x1ff710
void func_001FF6E0_0x1ff6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FF6E0_0x1ff6e0");
#endif

    switch (ctx->pc) {
        case 0x1ff6e8u: goto label_1ff6e8;
        default: break;
    }

    ctx->pc = 0x1ff6e0u;

    // 0x1ff6e0: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x1ff6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x1ff6e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ff6e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff6e8:
    // 0x1ff6e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ff6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff6ec: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF6ECu;
    {
        const bool branch_taken_0x1ff6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1FF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6ECu;
        // 0x1ff6f0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff6ec) {
            ctx->pc = 0x1FF6FCu;
            goto label_1ff6fc;
        }
    }
    ctx->pc = 0x1FF6F4u;
    // 0x1ff6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6F4u;
        // 0x1ff6f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF6FCu;
label_1ff6fc:
    // 0x1ff6fc: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x1ff6fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ff700: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FF700u;
    {
        const bool branch_taken_0x1ff700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF700u;
        // 0x1ff704: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff700) {
            ctx->pc = 0x1FF6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff6e8;
        }
    }
    ctx->pc = 0x1FF708u;
    // 0x1ff708: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF708u;
        // 0x1ff70c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF710u;
}
