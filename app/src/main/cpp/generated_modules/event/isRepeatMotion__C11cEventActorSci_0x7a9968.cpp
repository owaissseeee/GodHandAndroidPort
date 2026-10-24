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
// Function: isRepeatMotion__C11cEventActorSci
// Address: 0x7a9968 - 0x7a99a0
void isRepeatMotion__C11cEventActorSci_0x7a9968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isRepeatMotion__C11cEventActorSci_0x7a9968");
#endif

    ctx->pc = 0x7a9968u;

    // 0x7a9968: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7a9968u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7a996c: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x7a996cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7a9970: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7a9970u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7a9974: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x7a9974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7a9978: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x7a9978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x7a997c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x7a997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7a9980: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x7a9980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x7a9984: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x7a9984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x7a9988: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7a9988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x7a998c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x7a998cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x7a9990: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x7a9990u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7a9994: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9994u;
        // 0x7a9998: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A999Cu;
    // 0x7a999c: 0x0  nop
    ctx->pc = 0x7a999cu;
    // NOP
    ctx->pc = 0x7a99a0u;
}
} // namespace gh_event
