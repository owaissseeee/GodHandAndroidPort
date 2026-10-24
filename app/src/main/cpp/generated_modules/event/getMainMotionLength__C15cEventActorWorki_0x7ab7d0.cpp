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
// Function: getMainMotionLength__C15cEventActorWorki
// Address: 0x7ab7d0 - 0x7ab800
void getMainMotionLength__C15cEventActorWorki_0x7ab7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getMainMotionLength__C15cEventActorWorki_0x7ab7d0");
#endif

    ctx->pc = 0x7ab7d0u;

    // 0x7ab7d0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x7ab7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7ab7d4: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x7ab7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x7ab7d8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x7ab7d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x7ab7dc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x7ab7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x7ab7e0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x7ab7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x7ab7e4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x7AB7E4u;
    {
        const bool branch_taken_0x7ab7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ab7e4) {
            ctx->pc = 0x7AB7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB7E4u;
            // 0x7ab7e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB7F0u;
            goto label_7ab7f0;
        }
    }
    ctx->pc = 0x7AB7ECu;
    // 0x7ab7ec: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x7ab7ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_7ab7f0:
    // 0x7ab7f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x7ab7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x7ab7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x7AB7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB7F4u;
        // 0x7ab7f8: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AB7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AB7FCu;
    // 0x7ab7fc: 0x0  nop
    ctx->pc = 0x7ab7fcu;
    // NOP
    ctx->pc = 0x7ab800u;
}
} // namespace gh_event
