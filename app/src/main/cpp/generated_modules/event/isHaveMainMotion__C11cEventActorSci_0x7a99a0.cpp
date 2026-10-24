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
// Function: isHaveMainMotion__C11cEventActorSci
// Address: 0x7a99a0 - 0x7a99d8
void isHaveMainMotion__C11cEventActorSci_0x7a99a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isHaveMainMotion__C11cEventActorSci_0x7a99a0");
#endif

    ctx->pc = 0x7a99a0u;

    // 0x7a99a0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7a99a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7a99a4: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x7a99a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7a99a8: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7a99a8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7a99ac: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x7a99acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7a99b0: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x7a99b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x7a99b4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x7a99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7a99b8: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x7a99b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x7a99bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x7a99bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x7a99c0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7a99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x7a99c4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x7a99c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x7a99c8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x7a99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7a99cc: 0x3e00008  jr          $ra
    ctx->pc = 0x7A99CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A99CCu;
        // 0x7a99d0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A99CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A99D4u;
    // 0x7a99d4: 0x0  nop
    ctx->pc = 0x7a99d4u;
    // NOP
    ctx->pc = 0x7a99d8u;
}
} // namespace gh_event
