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
// Function: getMainMotionLength__C11cEventActorSci
// Address: 0x7a9880 - 0x7a98c8
void getMainMotionLength__C11cEventActorSci_0x7a9880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getMainMotionLength__C11cEventActorSci_0x7a9880");
#endif

    ctx->pc = 0x7a9880u;

    // 0x7a9880: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7a9880u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7a9884: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x7a9884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7a9888: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7a9888u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7a988c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x7a988cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7a9890: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x7a9890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x7a9894: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x7a9894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7a9898: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x7a9898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x7a989c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x7a989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x7a98a0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7a98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x7a98a4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x7a98a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x7a98a8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x7a98a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7a98ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A98ACu;
    {
        const bool branch_taken_0x7a98ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a98ac) {
            ctx->pc = 0x7A98BCu;
            goto label_7a98bc;
        }
    }
    ctx->pc = 0x7A98B4u;
    // 0x7a98b4: 0x3e00008  jr          $ra
    ctx->pc = 0x7A98B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A98B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A98B4u;
        // 0x7a98b8: 0x94420004  lhu         $v0, 0x4($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A98B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A98BCu;
label_7a98bc:
    // 0x7a98bc: 0x3e00008  jr          $ra
    ctx->pc = 0x7A98BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A98C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A98BCu;
        // 0x7a98c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A98BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A98C4u;
    // 0x7a98c4: 0x0  nop
    ctx->pc = 0x7a98c4u;
    // NOP
    ctx->pc = 0x7a98c8u;
}
} // namespace gh_event
