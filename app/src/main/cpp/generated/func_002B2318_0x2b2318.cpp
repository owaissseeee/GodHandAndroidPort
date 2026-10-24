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

// Function: func_002B2318
// Address: 0x2b2318 - 0x2b2348
void func_002B2318_0x2b2318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2318_0x2b2318");
#endif

    ctx->pc = 0x2b2318u;

    // 0x2b2318: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2b2318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b231c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B231Cu;
    {
        const bool branch_taken_0x2b231c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b231c) {
            ctx->pc = 0x2B2320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B231Cu;
            // 0x2b2320: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2330u;
            goto label_2b2330;
        }
    }
    ctx->pc = 0x2B2324u;
    // 0x2b2324: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2b2324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b2328: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2b2328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2b232c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2b232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2b2330:
    // 0x2b2330: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2330u;
    {
        const bool branch_taken_0x2b2330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2330) {
            ctx->pc = 0x2B2340u;
            goto label_2b2340;
        }
    }
    ctx->pc = 0x2B2338u;
    // 0x2b2338: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2b2338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b233c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2b233cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2b2340:
    // 0x2b2340: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2340u;
        // 0x2b2344: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2348u;
}
