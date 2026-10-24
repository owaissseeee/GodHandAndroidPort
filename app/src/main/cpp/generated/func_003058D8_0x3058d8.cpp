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

// Function: func_003058D8
// Address: 0x3058d8 - 0x305908
void func_003058D8_0x3058d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003058D8_0x3058d8");
#endif

    switch (ctx->pc) {
        case 0x3058e0u: goto label_3058e0;
        default: break;
    }

    ctx->pc = 0x3058d8u;

    // 0x3058d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3058d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3058dc: 0x0  nop
    ctx->pc = 0x3058dcu;
    // NOP
label_3058e0:
    // 0x3058e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3058e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3058e4: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3058E4u;
    {
        const bool branch_taken_0x3058e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x3058E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058E4u;
        // 0x3058e8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3058e4) {
            ctx->pc = 0x3058F4u;
            goto label_3058f4;
        }
    }
    ctx->pc = 0x3058ECu;
    // 0x3058ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3058ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3058F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058ECu;
        // 0x3058f0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3058ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3058F4u;
label_3058f4:
    // 0x3058f4: 0x2c620040  sltiu       $v0, $v1, 0x40
    ctx->pc = 0x3058f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x3058f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3058F8u;
    {
        const bool branch_taken_0x3058f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3058FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058F8u;
        // 0x3058fc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3058f8) {
            ctx->pc = 0x3058E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3058e0;
        }
    }
    ctx->pc = 0x305900u;
    // 0x305900: 0x3e00008  jr          $ra
    ctx->pc = 0x305900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305900u;
        // 0x305904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305908u;
}
