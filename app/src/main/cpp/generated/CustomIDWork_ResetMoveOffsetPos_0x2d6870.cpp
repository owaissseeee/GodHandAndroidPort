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

// Function: CustomIDWork_ResetMoveOffsetPos
// Address: 0x2d6870 - 0x2d6898
void CustomIDWork_ResetMoveOffsetPos_0x2d6870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_ResetMoveOffsetPos_0x2d6870");
#endif

    ctx->pc = 0x2d6870u;

    // 0x2d6870: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d6870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6874: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6874u;
    {
        const bool branch_taken_0x2d6874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6874) {
            ctx->pc = 0x2D688Cu;
            goto label_2d688c;
        }
    }
    ctx->pc = 0x2D687Cu;
    // 0x2d687c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2d687cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2d6880: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x2d6880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x2d6884: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d6884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6888: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2d6888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_2d688c:
    // 0x2d688c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D688Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D688Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6894u;
    // 0x2d6894: 0x0  nop
    ctx->pc = 0x2d6894u;
    // NOP
    ctx->pc = 0x2d6898u;
}
