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

// Function: _IO_remove_marker
// Address: 0x38d038 - 0x38d070
void ps2__IO_remove_marker_0x38d038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_remove_marker_0x38d038");
#endif

    switch (ctx->pc) {
        case 0x38d048u: goto label_38d048;
        default: break;
    }

    ctx->pc = 0x38d038u;

    // 0x38d038: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x38d038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38d03c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x38d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x38d040: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x38D040u;
    {
        const bool branch_taken_0x38d040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D040u;
        // 0x38d044: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d040) {
            ctx->pc = 0x38D068u;
            goto label_38d068;
        }
    }
    ctx->pc = 0x38D048u;
label_38d048:
    // 0x38d048: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38D048u;
    {
        const bool branch_taken_0x38d048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x38d048) {
            ctx->pc = 0x38D04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D048u;
            // 0x38d04c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D05Cu;
            goto label_38d05c;
        }
    }
    ctx->pc = 0x38D050u;
    // 0x38d050: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x38d050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38d054: 0x3e00008  jr          $ra
    ctx->pc = 0x38D054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D054u;
        // 0x38d058: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D05Cu;
label_38d05c:
    // 0x38d05c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x38d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d060: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x38D060u;
    {
        const bool branch_taken_0x38d060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D060u;
        // 0x38d064: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d060) {
            ctx->pc = 0x38D048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d048;
        }
    }
    ctx->pc = 0x38D068u;
label_38d068:
    // 0x38d068: 0x3e00008  jr          $ra
    ctx->pc = 0x38D068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D070u;
}
