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

// Function: cCoreSave_setReelItemNum
// Address: 0x1fae28 - 0x1fae40
void cCoreSave_setReelItemNum_0x1fae28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setReelItemNum_0x1fae28");
#endif

    ctx->pc = 0x1fae28u;

    // 0x1fae28: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fae28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fae2c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAE2Cu;
    {
        const bool branch_taken_0x1fae2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE2Cu;
        // 0x1fae30: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae2c) {
            ctx->pc = 0x1FAE38u;
            goto label_1fae38;
        }
    }
    ctx->pc = 0x1FAE34u;
    // 0x1fae34: 0xa0850156  sb          $a1, 0x156($a0)
    ctx->pc = 0x1fae34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 342), (uint8_t)GPR_U32(ctx, 5));
label_1fae38:
    // 0x1fae38: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAE40u;
}
