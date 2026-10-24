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

// Function: CustomIDWork_SetNumber
// Address: 0x2d6548 - 0x2d6560
void CustomIDWork_SetNumber_0x2d6548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetNumber_0x2d6548");
#endif

    ctx->pc = 0x2d6548u;

    // 0x2d6548: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d6548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d654c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D654Cu;
    {
        const bool branch_taken_0x2d654c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d654c) {
            ctx->pc = 0x2D6550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D654Cu;
            // 0x2d6550: 0xac450084  sw          $a1, 0x84($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6554u;
            goto label_2d6554;
        }
    }
    ctx->pc = 0x2D6554u;
label_2d6554:
    // 0x2d6554: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D655Cu;
    // 0x2d655c: 0x0  nop
    ctx->pc = 0x2d655cu;
    // NOP
    ctx->pc = 0x2d6560u;
}
