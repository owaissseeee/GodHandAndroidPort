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
// Function: getMotionNo__C12cEventMotionSc
// Address: 0x7b04e8 - 0x7b0520
void getMotionNo__C12cEventMotionSc_0x7b04e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getMotionNo__C12cEventMotionSc_0x7b04e8");
#endif

    ctx->pc = 0x7b04e8u;

    // 0x7b04e8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7b04e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7b04ec: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7b04ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7b04f0: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7B04F0u;
    {
        const bool branch_taken_0x7b04f0 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x7B04F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B04F0u;
        // 0x7b04f4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b04f0) {
            ctx->pc = 0x7B0504u;
            goto label_7b0504;
        }
    }
    ctx->pc = 0x7B04F8u;
    // 0x7b04f8: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7b04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7b04fc: 0x3e00008  jr          $ra
    ctx->pc = 0x7B04FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B04FCu;
        // 0x7b0500: 0x8442524e  lh          $v0, 0x524E($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 21070)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B04FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0504u;
label_7b0504:
    // 0x7b0504: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x7b0504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7b0508: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b0508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b050c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x7b050cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7b0510: 0x8c834f94  lw          $v1, 0x4F94($a0)
    ctx->pc = 0x7b0510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20372)));
    // 0x7b0514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7b0514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7b0518: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0518u;
        // 0x7b051c: 0x8442000a  lh          $v0, 0xA($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0520u;
}
} // namespace gh_event
