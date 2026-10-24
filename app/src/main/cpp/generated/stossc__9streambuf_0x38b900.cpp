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

// Function: stossc__9streambuf
// Address: 0x38b900 - 0x38b920
void stossc__9streambuf_0x38b900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("stossc__9streambuf_0x38b900");
#endif

    ctx->pc = 0x38b900u;

    // 0x38b900: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x38b900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38b904: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x38b904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38b908: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x38b908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x38b90c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38B90Cu;
    {
        const bool branch_taken_0x38b90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B90Cu;
        // 0x38b910: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b90c) {
            ctx->pc = 0x38B918u;
            goto label_38b918;
        }
    }
    ctx->pc = 0x38B914u;
    // 0x38b914: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x38b914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_38b918:
    // 0x38b918: 0x3e00008  jr          $ra
    ctx->pc = 0x38B918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B920u;
}
