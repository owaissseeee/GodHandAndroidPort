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

// Function: CustomIDWork_SetMessNo
// Address: 0x2d6560 - 0x2d6578
void CustomIDWork_SetMessNo_0x2d6560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetMessNo_0x2d6560");
#endif

    ctx->pc = 0x2d6560u;

    // 0x2d6560: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d6560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6564: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D6564u;
    {
        const bool branch_taken_0x2d6564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6564) {
            ctx->pc = 0x2D6568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6564u;
            // 0x2d6568: 0xa4450090  sh          $a1, 0x90($v0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D656Cu;
            goto label_2d656c;
        }
    }
    ctx->pc = 0x2D656Cu;
label_2d656c:
    // 0x2d656c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D656Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D656Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6574u;
    // 0x2d6574: 0x0  nop
    ctx->pc = 0x2d6574u;
    // NOP
    ctx->pc = 0x2d6578u;
}
