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
// Function: getCutMotionAddr__C12cEventCamerai
// Address: 0x7acec0 - 0x7acee0
void getCutMotionAddr__C12cEventCamerai_0x7acec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getCutMotionAddr__C12cEventCamerai_0x7acec0");
#endif

    ctx->pc = 0x7acec0u;

    // 0x7acec0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x7acec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x7acec4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x7acec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7acec8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x7acec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x7acecc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x7aceccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x7aced0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x7aced0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7aced4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x7aced4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x7aced8: 0x3e00008  jr          $ra
    ctx->pc = 0x7ACED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ACEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACED8u;
        // 0x7acedc: 0x82100a  movz        $v0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ACED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ACEE0u;
}
} // namespace gh_event
