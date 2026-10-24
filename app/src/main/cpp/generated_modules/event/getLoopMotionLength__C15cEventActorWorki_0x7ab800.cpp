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
// Function: getLoopMotionLength__C15cEventActorWorki
// Address: 0x7ab800 - 0x7ab830
void getLoopMotionLength__C15cEventActorWorki_0x7ab800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getLoopMotionLength__C15cEventActorWorki_0x7ab800");
#endif

    ctx->pc = 0x7ab800u;

    // 0x7ab800: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x7ab800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7ab804: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x7ab804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x7ab808: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x7ab808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x7ab80c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x7ab80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x7ab810: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7ab810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7ab814: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x7AB814u;
    {
        const bool branch_taken_0x7ab814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ab814) {
            ctx->pc = 0x7AB818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB814u;
            // 0x7ab818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB820u;
            goto label_7ab820;
        }
    }
    ctx->pc = 0x7AB81Cu;
    // 0x7ab81c: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x7ab81cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_7ab820:
    // 0x7ab820: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x7ab820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x7ab824: 0x3e00008  jr          $ra
    ctx->pc = 0x7AB824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AB828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB824u;
        // 0x7ab828: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AB824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AB82Cu;
    // 0x7ab82c: 0x0  nop
    ctx->pc = 0x7ab82cu;
    // NOP
    ctx->pc = 0x7ab830u;
}
} // namespace gh_event
