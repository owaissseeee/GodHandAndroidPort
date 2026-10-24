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

// Function: func_002B4FE8
// Address: 0x2b4fe8 - 0x2b5028
void func_002B4FE8_0x2b4fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4FE8_0x2b4fe8");
#endif

    switch (ctx->pc) {
        case 0x2b4ff8u: goto label_2b4ff8;
        default: break;
    }

    ctx->pc = 0x2b4fe8u;

    // 0x2b4fe8: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x2b4fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x2b4fec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b4fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ff0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2b4ff0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ff4: 0x0  nop
    ctx->pc = 0x2b4ff4u;
    // NOP
label_2b4ff8:
    // 0x2b4ff8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b4ffc: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4FFCu;
    {
        const bool branch_taken_0x2b4ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2B5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FFCu;
        // 0x2b5000: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ffc) {
            ctx->pc = 0x2B500Cu;
            goto label_2b500c;
        }
    }
    ctx->pc = 0x2B5004u;
    // 0x2b5004: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5004u;
        // 0x2b5008: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B500Cu;
label_2b500c:
    // 0x2b500c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2b500cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2b5010: 0x28c20040  slti        $v0, $a2, 0x40
    ctx->pc = 0x2b5010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2b5014: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B5014u;
    {
        const bool branch_taken_0x2b5014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5014u;
        // 0x2b5018: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5014) {
            ctx->pc = 0x2B4FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4ff8;
        }
    }
    ctx->pc = 0x2B501Cu;
    // 0x2b501c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B501Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B501Cu;
        // 0x2b5020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B501Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5024u;
    // 0x2b5024: 0x0  nop
    ctx->pc = 0x2b5024u;
    // NOP
    ctx->pc = 0x2b5028u;
}
