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
// Function: getMainColorLength__C15cEventActorWorki
// Address: 0x7ab830 - 0x7ab860
void getMainColorLength__C15cEventActorWorki_0x7ab830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getMainColorLength__C15cEventActorWorki_0x7ab830");
#endif

    ctx->pc = 0x7ab830u;

    // 0x7ab830: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x7ab830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7ab834: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x7ab834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x7ab838: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x7ab838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x7ab83c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x7ab83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x7ab840: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x7ab840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x7ab844: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x7AB844u;
    {
        const bool branch_taken_0x7ab844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ab844) {
            ctx->pc = 0x7AB848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB844u;
            // 0x7ab848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB850u;
            goto label_7ab850;
        }
    }
    ctx->pc = 0x7AB84Cu;
    // 0x7ab84c: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x7ab84cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_7ab850:
    // 0x7ab850: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x7ab850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x7ab854: 0x3e00008  jr          $ra
    ctx->pc = 0x7AB854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB854u;
        // 0x7ab858: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AB854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AB85Cu;
    // 0x7ab85c: 0x0  nop
    ctx->pc = 0x7ab85cu;
    // NOP
    ctx->pc = 0x7ab860u;
}
} // namespace gh_event
