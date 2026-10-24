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
// Function: debugGetObjNo__C12cEventMotionSc
// Address: 0x7b0698 - 0x7b06c8
void debugGetObjNo__C12cEventMotionSc_0x7b0698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugGetObjNo__C12cEventMotionSc_0x7b0698");
#endif

    ctx->pc = 0x7b0698u;

    // 0x7b0698: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7b0698u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7b069c: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7b069cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7b06a0: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x7B06A0u;
    {
        const bool branch_taken_0x7b06a0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x7B06A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B06A0u;
        // 0x7b06a4: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b06a0) {
            ctx->pc = 0x7B06C0u;
            goto label_7b06c0;
        }
    }
    ctx->pc = 0x7B06A8u;
    // 0x7b06a8: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b06a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b06ac: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x7b06acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7b06b0: 0x8c834f94  lw          $v1, 0x4F94($a0)
    ctx->pc = 0x7b06b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20372)));
    // 0x7b06b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7b06b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7b06b8: 0x3e00008  jr          $ra
    ctx->pc = 0x7B06B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B06B8u;
        // 0x7b06bc: 0x90420008  lbu         $v0, 0x8($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B06B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B06C0u;
label_7b06c0:
    // 0x7b06c0: 0x3e00008  jr          $ra
    ctx->pc = 0x7B06C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B06C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B06C0u;
        // 0x7b06c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B06C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B06C8u;
}
} // namespace gh_event
