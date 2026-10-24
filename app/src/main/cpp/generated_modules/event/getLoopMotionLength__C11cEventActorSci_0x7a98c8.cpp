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
// Function: getLoopMotionLength__C11cEventActorSci
// Address: 0x7a98c8 - 0x7a9910
void getLoopMotionLength__C11cEventActorSci_0x7a98c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getLoopMotionLength__C11cEventActorSci_0x7a98c8");
#endif

    ctx->pc = 0x7a98c8u;

    // 0x7a98c8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7a98c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7a98cc: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x7a98ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7a98d0: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7a98d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7a98d4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x7a98d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7a98d8: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x7a98d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x7a98dc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x7a98dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7a98e0: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x7a98e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x7a98e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x7a98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x7a98e8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7a98e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x7a98ec: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x7a98ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x7a98f0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x7a98f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x7a98f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A98F4u;
    {
        const bool branch_taken_0x7a98f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a98f4) {
            ctx->pc = 0x7A9904u;
            goto label_7a9904;
        }
    }
    ctx->pc = 0x7A98FCu;
    // 0x7a98fc: 0x3e00008  jr          $ra
    ctx->pc = 0x7A98FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A98FCu;
        // 0x7a9900: 0x94420004  lhu         $v0, 0x4($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A98FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A9904u;
label_7a9904:
    // 0x7a9904: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9904u;
        // 0x7a9908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A990Cu;
    // 0x7a990c: 0x0  nop
    ctx->pc = 0x7a990cu;
    // NOP
    ctx->pc = 0x7a9910u;
}
} // namespace gh_event
