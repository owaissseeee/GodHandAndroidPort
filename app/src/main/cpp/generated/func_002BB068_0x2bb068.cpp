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

// Function: func_002BB068
// Address: 0x2bb068 - 0x2bb098
void func_002BB068_0x2bb068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BB068_0x2bb068");
#endif

    switch (ctx->pc) {
        case 0x2bb070u: goto label_2bb070;
        default: break;
    }

    ctx->pc = 0x2bb068u;

    // 0x2bb068: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bb068u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb06c: 0x0  nop
    ctx->pc = 0x2bb06cu;
    // NOP
label_2bb070:
    // 0x2bb070: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bb070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb074: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB074u;
    {
        const bool branch_taken_0x2bb074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2BB078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB074u;
        // 0x2bb078: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb074) {
            ctx->pc = 0x2BB084u;
            goto label_2bb084;
        }
    }
    ctx->pc = 0x2BB07Cu;
    // 0x2bb07c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB07Cu;
        // 0x2bb080: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB084u;
label_2bb084:
    // 0x2bb084: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x2bb084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2bb088: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BB088u;
    {
        const bool branch_taken_0x2bb088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB088u;
        // 0x2bb08c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb088) {
            ctx->pc = 0x2BB070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb070;
        }
    }
    ctx->pc = 0x2BB090u;
    // 0x2bb090: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB090u;
        // 0x2bb094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB098u;
}
