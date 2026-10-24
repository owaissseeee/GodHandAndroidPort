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
// Function: getMotionLoopTimes__C12cEventMotionSc
// Address: 0x7b0590 - 0x7b05c8
void getMotionLoopTimes__C12cEventMotionSc_0x7b0590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getMotionLoopTimes__C12cEventMotionSc_0x7b0590");
#endif

    ctx->pc = 0x7b0590u;

    // 0x7b0590: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7b0590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7b0594: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7b0594u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7b0598: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x7B0598u;
    {
        const bool branch_taken_0x7b0598 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x7B059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0598u;
        // 0x7b059c: 0x3c03007b  lui         $v1, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0598) {
            ctx->pc = 0x7B05BCu;
            goto label_7b05bc;
        }
    }
    ctx->pc = 0x7B05A0u;
    // 0x7b05a0: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x7b05a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7b05a4: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b05a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b05a8: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x7b05a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x7b05ac: 0x8c824f94  lw          $v0, 0x4F94($a0)
    ctx->pc = 0x7b05acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20372)));
    // 0x7b05b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7b05b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7b05b4: 0x3e00008  jr          $ra
    ctx->pc = 0x7B05B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B05B4u;
        // 0x7b05b8: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B05B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B05BCu;
label_7b05bc:
    // 0x7b05bc: 0x3e00008  jr          $ra
    ctx->pc = 0x7B05BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B05C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B05BCu;
        // 0x7b05c0: 0x8c625250  lw          $v0, 0x5250($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21072)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B05BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B05C4u;
    // 0x7b05c4: 0x0  nop
    ctx->pc = 0x7b05c4u;
    // NOP
    ctx->pc = 0x7b05c8u;
}
} // namespace gh_event
