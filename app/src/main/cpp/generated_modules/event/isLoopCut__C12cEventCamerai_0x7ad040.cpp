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
// Function: isLoopCut__C12cEventCamerai
// Address: 0x7ad040 - 0x7ad060
void isLoopCut__C12cEventCamerai_0x7ad040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isLoopCut__C12cEventCamerai_0x7ad040");
#endif

    ctx->pc = 0x7ad040u;

    // 0x7ad040: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x7ad040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x7ad044: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x7ad044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7ad048: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x7ad048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x7ad04c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x7ad04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x7ad050: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x7ad050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x7ad054: 0x3e00008  jr          $ra
    ctx->pc = 0x7AD054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AD058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD054u;
        // 0x7ad058: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AD054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AD05Cu;
    // 0x7ad05c: 0x0  nop
    ctx->pc = 0x7ad05cu;
    // NOP
    ctx->pc = 0x7ad060u;
}
} // namespace gh_event
