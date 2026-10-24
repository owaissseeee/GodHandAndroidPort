#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: debugIsEditMode__C9cEventEnv
// Address: 0x7aebe8 - 0x7aec38
void debugIsEditMode__C9cEventEnv_0x7aebe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugIsEditMode__C9cEventEnv_0x7aebe8");
#endif

    ctx->pc = 0x7aebe8u;

    // 0x7aebe8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x7aebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x7aebec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7aebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7aebf0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7AEBF0u;
    {
        const bool branch_taken_0x7aebf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AEBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEBF0u;
        // 0x7aebf4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aebf0) {
            ctx->pc = 0x7AEC28u;
            goto label_7aec28;
        }
    }
    ctx->pc = 0x7AEBF8u;
    // 0x7aebf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AEBF8u;
    {
        const bool branch_taken_0x7aebf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AEBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEBF8u;
        // 0x7aebfc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aebf8) {
            ctx->pc = 0x7AEC10u;
            goto label_7aec10;
        }
    }
    ctx->pc = 0x7AEC00u;
    // 0x7aec00: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AEC00u;
    {
        const bool branch_taken_0x7aec00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AEC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEC00u;
        // 0x7aec04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aec00) {
            ctx->pc = 0x7AEC20u;
            goto label_7aec20;
        }
    }
    ctx->pc = 0x7AEC08u;
    // 0x7aec08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7AEC08u;
    {
        const bool branch_taken_0x7aec08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7aec08) {
            ctx->pc = 0x7AEC30u;
            goto label_7aec30;
        }
    }
    ctx->pc = 0x7AEC10u;
label_7aec10:
    // 0x7aec10: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AEC10u;
    {
        const bool branch_taken_0x7aec10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEC10u;
        // 0x7aec14: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aec10) {
            ctx->pc = 0x7AEC28u;
            goto label_7aec28;
        }
    }
    ctx->pc = 0x7AEC18u;
    // 0x7aec18: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AEC18u;
    {
        const bool branch_taken_0x7aec18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7AEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEC18u;
        // 0x7aec1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aec18) {
            ctx->pc = 0x7AEC30u;
            goto label_7aec30;
        }
    }
    ctx->pc = 0x7AEC20u;
label_7aec20:
    // 0x7aec20: 0x3e00008  jr          $ra
    ctx->pc = 0x7AEC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AEC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEC20u;
        // 0x7aec24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AEC28u;
label_7aec28:
    // 0x7aec28: 0x3e00008  jr          $ra
    ctx->pc = 0x7AEC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEC28u;
        // 0x7aec2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AEC30u;
label_7aec30:
    // 0x7aec30: 0x3e00008  jr          $ra
    ctx->pc = 0x7AEC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AEC38u;
}
} // namespace gh_event
