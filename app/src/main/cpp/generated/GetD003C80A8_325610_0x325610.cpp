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

// Function: GetD003C80A8_325610
// Address: 0x325610 - 0x325620
void GetD003C80A8_325610_0x325610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetD003C80A8_325610_0x325610");
#endif

    ctx->pc = 0x325610u;

    // 0x325610: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x325610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x325614: 0x3e00008  jr          $ra
    ctx->pc = 0x325614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325614u;
        // 0x325618: 0x8c6280a8  lw          $v0, -0x7F58($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934696)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32561Cu;
    // 0x32561c: 0x0  nop
    ctx->pc = 0x32561cu;
    // NOP
    ctx->pc = 0x325620u;
}
