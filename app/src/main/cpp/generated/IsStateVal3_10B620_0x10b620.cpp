#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsStateVal3_10B620
// Address: 0x10b620 - 0x10b648
void IsStateVal3_10B620_0x10b620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsStateVal3_10B620_0x10b620");
#endif

    ctx->pc = 0x10b620u;

    // 0x10b620: 0x908202f4  lbu         $v0, 0x2F4($a0)
    ctx->pc = 0x10b620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x10b624: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B624u;
    {
        const bool branch_taken_0x10b624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b624) {
            ctx->pc = 0x10B63Cu;
            goto label_10b63c;
        }
    }
    ctx->pc = 0x10B62Cu;
    // 0x10b62c: 0x908202f5  lbu         $v0, 0x2F5($a0)
    ctx->pc = 0x10b62cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x10b630: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x10b630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x10b634: 0x3e00008  jr          $ra
    ctx->pc = 0x10B634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B634u;
        // 0x10b638: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B63Cu;
label_10b63c:
    // 0x10b63c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B63Cu;
        // 0x10b640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B644u;
    // 0x10b644: 0x0  nop
    ctx->pc = 0x10b644u;
    // NOP
    ctx->pc = 0x10b648u;
}
