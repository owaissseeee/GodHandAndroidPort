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

// Function: func_001F7798
// Address: 0x1f7798 - 0x1f77d0
void func_001F7798_0x1f7798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F7798_0x1f7798");
#endif

    switch (ctx->pc) {
        case 0x1f77a0u: goto label_1f77a0;
        default: break;
    }

    ctx->pc = 0x1f7798u;

    // 0x1f7798: 0x24840104  addiu       $a0, $a0, 0x104
    ctx->pc = 0x1f7798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
    // 0x1f779c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f779cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f77a0:
    // 0x1f77a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f77a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f77a4: 0x30420201  andi        $v0, $v0, 0x201
    ctx->pc = 0x1f77a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)513);
    // 0x1f77a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f77a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f77ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F77ACu;
    {
        const bool branch_taken_0x1f77ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F77B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77ACu;
        // 0x1f77b0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77ac) {
            ctx->pc = 0x1F77BCu;
            goto label_1f77bc;
        }
    }
    ctx->pc = 0x1F77B4u;
    // 0x1f77b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F77B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F77B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77B4u;
        // 0x1f77b8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F77B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F77BCu;
label_1f77bc:
    // 0x1f77bc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1f77bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f77c0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F77C0u;
    {
        const bool branch_taken_0x1f77c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F77C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77C0u;
        // 0x1f77c4: 0x24840044  addiu       $a0, $a0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77c0) {
            ctx->pc = 0x1F77A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f77a0;
        }
    }
    ctx->pc = 0x1F77C8u;
    // 0x1f77c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F77C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77C8u;
        // 0x1f77cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F77C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F77D0u;
}
