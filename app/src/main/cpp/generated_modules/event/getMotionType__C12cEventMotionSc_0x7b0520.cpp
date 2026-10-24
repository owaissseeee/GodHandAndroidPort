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
// Function: getMotionType__C12cEventMotionSc
// Address: 0x7b0520 - 0x7b0558
void getMotionType__C12cEventMotionSc_0x7b0520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getMotionType__C12cEventMotionSc_0x7b0520");
#endif

    ctx->pc = 0x7b0520u;

    // 0x7b0520: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7b0520u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7b0524: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7b0524u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7b0528: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7B0528u;
    {
        const bool branch_taken_0x7b0528 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x7B052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0528u;
        // 0x7b052c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0528) {
            ctx->pc = 0x7B053Cu;
            goto label_7b053c;
        }
    }
    ctx->pc = 0x7B0530u;
    // 0x7b0530: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7b0530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7b0534: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0534u;
        // 0x7b0538: 0x8042524c  lb          $v0, 0x524C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 21068)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B053Cu;
label_7b053c:
    // 0x7b053c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x7b053cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7b0540: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b0540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b0544: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x7b0544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7b0548: 0x8c834f94  lw          $v1, 0x4F94($a0)
    ctx->pc = 0x7b0548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20372)));
    // 0x7b054c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7b054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7b0550: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0550u;
        // 0x7b0554: 0x80420009  lb          $v0, 0x9($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0558u;
}
} // namespace gh_event
