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
// Function: getLoopMotionLengthNoRepeat__C11cEventActorSci
// Address: 0x7a9910 - 0x7a9968
void getLoopMotionLengthNoRepeat__C11cEventActorSci_0x7a9910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getLoopMotionLengthNoRepeat__C11cEventActorSci_0x7a9910");
#endif

    ctx->pc = 0x7a9910u;

    // 0x7a9910: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7a9910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7a9914: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x7a9914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7a9918: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7a9918u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7a991c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x7a991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7a9920: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x7a9920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x7a9924: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x7a9924u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7a9928: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x7a9928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x7a992c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x7a992cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x7a9930: 0x8ce30044  lw          $v1, 0x44($a3)
    ctx->pc = 0x7a9930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x7a9934: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x7a9934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x7a9938: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x7a9938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7a993c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7a993cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7a9940: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A9940u;
    {
        const bool branch_taken_0x7a9940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a9940) {
            ctx->pc = 0x7A9944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A9940u;
            // 0x7a9944: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A9950u;
            goto label_7a9950;
        }
    }
    ctx->pc = 0x7A9948u;
    // 0x7a9948: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9948u;
        // 0x7a994c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A9950u;
label_7a9950:
    // 0x7a9950: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A9950u;
    {
        const bool branch_taken_0x7a9950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a9950) {
            ctx->pc = 0x7A9960u;
            goto label_7a9960;
        }
    }
    ctx->pc = 0x7A9958u;
    // 0x7a9958: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9958u;
        // 0x7a995c: 0x94420004  lhu         $v0, 0x4($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A9960u;
label_7a9960:
    // 0x7a9960: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9960u;
        // 0x7a9964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A9968u;
}
} // namespace gh_event
