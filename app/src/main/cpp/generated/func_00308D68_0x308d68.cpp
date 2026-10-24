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

// Function: func_00308D68
// Address: 0x308d68 - 0x308da8
void func_00308D68_0x308d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00308D68_0x308d68");
#endif

    switch (ctx->pc) {
        case 0x308d70u: goto label_308d70;
        default: break;
    }

    ctx->pc = 0x308d68u;

    // 0x308d68: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x308d68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308d6c: 0x0  nop
    ctx->pc = 0x308d6cu;
    // NOP
label_308d70:
    // 0x308d70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x308d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x308d74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308D74u;
    {
        const bool branch_taken_0x308d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308d74) {
            ctx->pc = 0x308D84u;
            goto label_308d84;
        }
    }
    ctx->pc = 0x308D7Cu;
    // 0x308d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x308D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D7Cu;
        // 0x308d80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308D84u;
label_308d84:
    // 0x308d84: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x308D84u;
    {
        const bool branch_taken_0x308d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x308D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D84u;
        // 0x308d88: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d84) {
            ctx->pc = 0x308D94u;
            goto label_308d94;
        }
    }
    ctx->pc = 0x308D8Cu;
    // 0x308d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x308D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D8Cu;
        // 0x308d90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308D94u;
label_308d94:
    // 0x308d94: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x308d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x308d98: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x308D98u;
    {
        const bool branch_taken_0x308d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D98u;
        // 0x308d9c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d98) {
            ctx->pc = 0x308D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308d70;
        }
    }
    ctx->pc = 0x308DA0u;
    // 0x308da0: 0x3e00008  jr          $ra
    ctx->pc = 0x308DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DA0u;
        // 0x308da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308DA8u;
}
