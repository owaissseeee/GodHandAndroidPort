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
// Function: debugGetObjId__C12cEventMotionSc
// Address: 0x7b0660 - 0x7b0698
void debugGetObjId__C12cEventMotionSc_0x7b0660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugGetObjId__C12cEventMotionSc_0x7b0660");
#endif

    ctx->pc = 0x7b0660u;

    // 0x7b0660: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7b0660u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7b0664: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7b0664u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7b0668: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B0668u;
    {
        const bool branch_taken_0x7b0668 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x7B066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0668u;
        // 0x7b066c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0668) {
            ctx->pc = 0x7B0678u;
            goto label_7b0678;
        }
    }
    ctx->pc = 0x7B0670u;
    // 0x7b0670: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0670u;
        // 0x7b0674: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0678u;
label_7b0678:
    // 0x7b0678: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x7b0678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7b067c: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b067cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b0680: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x7b0680u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7b0684: 0x8c834f94  lw          $v1, 0x4F94($a0)
    ctx->pc = 0x7b0684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20372)));
    // 0x7b0688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7b0688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7b068c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x7b068cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7b0690: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0690u;
        // 0x7b0694: 0x948202fe  lhu         $v0, 0x2FE($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0698u;
}
} // namespace gh_event
