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

// Function: GetD003E9D5C_33C718
// Address: 0x33c718 - 0x33c728
void GetD003E9D5C_33C718_0x33c718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetD003E9D5C_33C718_0x33c718");
#endif

    ctx->pc = 0x33c718u;

    // 0x33c718: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x33c718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x33c71c: 0x3e00008  jr          $ra
    ctx->pc = 0x33C71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C71Cu;
        // 0x33c720: 0x8c629d5c  lw          $v0, -0x62A4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942044)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C724u;
    // 0x33c724: 0x0  nop
    ctx->pc = 0x33c724u;
    // NOP
    ctx->pc = 0x33c728u;
}
