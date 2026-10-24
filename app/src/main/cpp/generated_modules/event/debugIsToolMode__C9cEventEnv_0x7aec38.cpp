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
// Function: debugIsToolMode__C9cEventEnv
// Address: 0x7aec38 - 0x7aec80
void debugIsToolMode__C9cEventEnv_0x7aec38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugIsToolMode__C9cEventEnv_0x7aec38");
#endif

    ctx->pc = 0x7aec38u;

    // 0x7aec38: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x7aec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x7aec3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7aec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7aec40: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7AEC40u;
    {
        const bool branch_taken_0x7aec40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AEC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEC40u;
        // 0x7aec44: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aec40) {
            ctx->pc = 0x7AEC70u;
            goto label_7aec70;
        }
    }
    ctx->pc = 0x7AEC48u;
    // 0x7aec48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AEC48u;
    {
        const bool branch_taken_0x7aec48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AEC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEC48u;
        // 0x7aec4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aec48) {
            ctx->pc = 0x7AEC60u;
            goto label_7aec60;
        }
    }
    ctx->pc = 0x7AEC50u;
    // 0x7aec50: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x7AEC50u;
    {
        const bool branch_taken_0x7aec50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AEC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEC50u;
        // 0x7aec54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aec50) {
            ctx->pc = 0x7AEC78u;
            goto label_7aec78;
        }
    }
    ctx->pc = 0x7AEC58u;
    // 0x7aec58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7AEC58u;
    {
        const bool branch_taken_0x7aec58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7aec58) {
            ctx->pc = 0x7AEC78u;
            goto label_7aec78;
        }
    }
    ctx->pc = 0x7AEC60u;
label_7aec60:
    // 0x7aec60: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AEC60u;
    {
        const bool branch_taken_0x7aec60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AEC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEC60u;
        // 0x7aec64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aec60) {
            ctx->pc = 0x7AEC70u;
            goto label_7aec70;
        }
    }
    ctx->pc = 0x7AEC68u;
    // 0x7aec68: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AEC68u;
    {
        const bool branch_taken_0x7aec68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7AEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEC68u;
        // 0x7aec6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aec68) {
            ctx->pc = 0x7AEC78u;
            goto label_7aec78;
        }
    }
    ctx->pc = 0x7AEC70u;
label_7aec70:
    // 0x7aec70: 0x3e00008  jr          $ra
    ctx->pc = 0x7AEC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AEC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEC70u;
        // 0x7aec74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AEC78u;
label_7aec78:
    // 0x7aec78: 0x3e00008  jr          $ra
    ctx->pc = 0x7AEC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AEC80u;
}
} // namespace gh_event
