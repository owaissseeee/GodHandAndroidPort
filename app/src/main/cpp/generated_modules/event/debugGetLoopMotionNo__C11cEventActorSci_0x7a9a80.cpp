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
// Function: debugGetLoopMotionNo__C11cEventActorSci
// Address: 0x7a9a80 - 0x7a9ab0
void debugGetLoopMotionNo__C11cEventActorSci_0x7a9a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugGetLoopMotionNo__C11cEventActorSci_0x7a9a80");
#endif

    ctx->pc = 0x7a9a80u;

    // 0x7a9a80: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7a9a80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7a9a84: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x7a9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7a9a88: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7a9a88u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7a9a8c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x7a9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7a9a90: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x7a9a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x7a9a94: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x7a9a94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7a9a98: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x7a9a98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x7a9a9c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x7a9a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x7a9aa0: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x7a9aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x7a9aa4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x7a9aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x7a9aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9AA8u;
        // 0x7a9aac: 0x90c2000c  lbu         $v0, 0xC($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A9AB0u;
}
} // namespace gh_event
