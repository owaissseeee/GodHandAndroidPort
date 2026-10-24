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

// Function: func_0036DDD8
// Address: 0x36ddd8 - 0x36de00
void func_0036DDD8_0x36ddd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036DDD8_0x36ddd8");
#endif

    ctx->pc = 0x36ddd8u;

    // 0x36ddd8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36DDD8u;
    {
        const bool branch_taken_0x36ddd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DDD8u;
        // 0x36dddc: 0x2484014c  addiu       $a0, $a0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ddd8) {
            ctx->pc = 0x36DDE8u;
            goto label_36dde8;
        }
    }
    ctx->pc = 0x36DDE0u;
    // 0x36dde0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36dde4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x36dde4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_36dde8:
    // 0x36dde8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x36DDE8u;
    {
        const bool branch_taken_0x36dde8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dde8) {
            ctx->pc = 0x36DDF8u;
            goto label_36ddf8;
        }
    }
    ctx->pc = 0x36DDF0u;
    // 0x36ddf0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x36ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36ddf4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x36ddf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_36ddf8:
    // 0x36ddf8: 0x3e00008  jr          $ra
    ctx->pc = 0x36DDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DE00u;
}
