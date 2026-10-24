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

// Function: cCoreSave_addAllStageTime
// Address: 0x1fc630 - 0x1fc650
void cCoreSave_addAllStageTime_0x1fc630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addAllStageTime_0x1fc630");
#endif

    ctx->pc = 0x1fc630u;

    // 0x1fc630: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc634: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC634u;
    {
        const bool branch_taken_0x1fc634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc634) {
            ctx->pc = 0x1FC648u;
            goto label_1fc648;
        }
    }
    ctx->pc = 0x1FC63Cu;
    // 0x1fc63c: 0x8c820bbc  lw          $v0, 0xBBC($a0)
    ctx->pc = 0x1fc63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3004)));
    // 0x1fc640: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fc640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fc644: 0xac820bbc  sw          $v0, 0xBBC($a0)
    ctx->pc = 0x1fc644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3004), GPR_U32(ctx, 2));
label_1fc648:
    // 0x1fc648: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC650u;
}
