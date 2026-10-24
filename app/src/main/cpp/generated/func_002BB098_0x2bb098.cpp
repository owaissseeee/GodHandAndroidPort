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

// Function: func_002BB098
// Address: 0x2bb098 - 0x2bb0c8
void func_002BB098_0x2bb098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BB098_0x2bb098");
#endif

    switch (ctx->pc) {
        case 0x2bb0a0u: goto label_2bb0a0;
        default: break;
    }

    ctx->pc = 0x2bb098u;

    // 0x2bb098: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bb098u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb09c: 0x0  nop
    ctx->pc = 0x2bb09cu;
    // NOP
label_2bb0a0:
    // 0x2bb0a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bb0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb0a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB0A4u;
    {
        const bool branch_taken_0x2bb0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0A4u;
        // 0x2bb0a8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0a4) {
            ctx->pc = 0x2BB0B4u;
            goto label_2bb0b4;
        }
    }
    ctx->pc = 0x2BB0ACu;
    // 0x2bb0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0ACu;
        // 0x2bb0b0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB0B4u;
label_2bb0b4:
    // 0x2bb0b4: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x2bb0b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2bb0b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BB0B8u;
    {
        const bool branch_taken_0x2bb0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0B8u;
        // 0x2bb0bc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0b8) {
            ctx->pc = 0x2BB0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb0a0;
        }
    }
    ctx->pc = 0x2BB0C0u;
    // 0x2bb0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0C0u;
        // 0x2bb0c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB0C8u;
}
