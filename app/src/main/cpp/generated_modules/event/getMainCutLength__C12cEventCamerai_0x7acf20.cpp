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
// Function: getMainCutLength__C12cEventCamerai
// Address: 0x7acf20 - 0x7acf50
void getMainCutLength__C12cEventCamerai_0x7acf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getMainCutLength__C12cEventCamerai_0x7acf20");
#endif

    ctx->pc = 0x7acf20u;

    // 0x7acf20: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x7acf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x7acf24: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x7acf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7acf28: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x7acf28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x7acf2c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x7acf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x7acf30: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x7acf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x7acf34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7ACF34u;
    {
        const bool branch_taken_0x7acf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7acf34) {
            ctx->pc = 0x7ACF44u;
            goto label_7acf44;
        }
    }
    ctx->pc = 0x7ACF3Cu;
    // 0x7acf3c: 0x3e00008  jr          $ra
    ctx->pc = 0x7ACF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ACF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACF3Cu;
        // 0x7acf40: 0x94420004  lhu         $v0, 0x4($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ACF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ACF44u;
label_7acf44:
    // 0x7acf44: 0x3e00008  jr          $ra
    ctx->pc = 0x7ACF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ACF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACF44u;
        // 0x7acf48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ACF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ACF4Cu;
    // 0x7acf4c: 0x0  nop
    ctx->pc = 0x7acf4cu;
    // NOP
    ctx->pc = 0x7acf50u;
}
} // namespace gh_event
