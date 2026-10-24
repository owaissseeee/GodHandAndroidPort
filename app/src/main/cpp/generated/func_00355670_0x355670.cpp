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

// Function: func_00355670
// Address: 0x355670 - 0x3556a0
void func_00355670_0x355670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00355670_0x355670");
#endif

    ctx->pc = 0x355670u;

    // 0x355670: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x355670u;
    {
        const bool branch_taken_0x355670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x355674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355670u;
        // 0x355674: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355670) {
            ctx->pc = 0x355694u;
            goto label_355694;
        }
    }
    ctx->pc = 0x355678u;
    // 0x355678: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x355678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35567c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35567Cu;
    {
        const bool branch_taken_0x35567c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35567c) {
            ctx->pc = 0x355680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35567Cu;
            // 0x355680: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35568Cu;
            goto label_35568c;
        }
    }
    ctx->pc = 0x355684u;
    // 0x355684: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x355684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x355688: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x355688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_35568c:
    // 0x35568c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x355690: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x355690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
label_355694:
    // 0x355694: 0x3e00008  jr          $ra
    ctx->pc = 0x355694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35569Cu;
    // 0x35569c: 0x0  nop
    ctx->pc = 0x35569cu;
    // NOP
    ctx->pc = 0x3556a0u;
}
