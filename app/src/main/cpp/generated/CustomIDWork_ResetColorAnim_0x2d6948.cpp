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

// Function: CustomIDWork_ResetColorAnim
// Address: 0x2d6948 - 0x2d6968
void CustomIDWork_ResetColorAnim_0x2d6948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_ResetColorAnim_0x2d6948");
#endif

    ctx->pc = 0x2d6948u;

    // 0x2d6948: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d6948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d694c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D694Cu;
    {
        const bool branch_taken_0x2d694c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d694c) {
            ctx->pc = 0x2D6960u;
            goto label_2d6960;
        }
    }
    ctx->pc = 0x2D6954u;
    // 0x2d6954: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2d6954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2d6958: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2d6958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2d695c: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x2d695cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_2d6960:
    // 0x2d6960: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6968u;
}
