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
// Function: getMotionFrame__C12cEventMotionSc
// Address: 0x7b0558 - 0x7b0590
void getMotionFrame__C12cEventMotionSc_0x7b0558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getMotionFrame__C12cEventMotionSc_0x7b0558");
#endif

    ctx->pc = 0x7b0558u;

    // 0x7b0558: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7b0558u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7b055c: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7b055cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7b0560: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x7B0560u;
    {
        const bool branch_taken_0x7b0560 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x7B0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0560u;
        // 0x7b0564: 0x3c02007b  lui         $v0, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0560) {
            ctx->pc = 0x7B0584u;
            goto label_7b0584;
        }
    }
    ctx->pc = 0x7B0568u;
    // 0x7b0568: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x7b0568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7b056c: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b056cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b0570: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x7b0570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7b0574: 0x8c834f94  lw          $v1, 0x4F94($a0)
    ctx->pc = 0x7b0574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20372)));
    // 0x7b0578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7b0578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7b057c: 0x3e00008  jr          $ra
    ctx->pc = 0x7B057Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B057Cu;
        // 0x7b0580: 0xc4400010  lwc1        $f0, 0x10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B057Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0584u;
label_7b0584:
    // 0x7b0584: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0584u;
        // 0x7b0588: 0xc4405254  lwc1        $f0, 0x5254($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B058Cu;
    // 0x7b058c: 0x0  nop
    ctx->pc = 0x7b058cu;
    // NOP
    ctx->pc = 0x7b0590u;
}
} // namespace gh_event
