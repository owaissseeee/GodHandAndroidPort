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

// Function: func_0033C708
// Address: 0x33c708 - 0x33c718
void func_0033C708_0x33c708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C708_0x33c708");
#endif

    ctx->pc = 0x33c708u;

    // 0x33c708: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33c708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x33c70c: 0x3e00008  jr          $ra
    ctx->pc = 0x33C70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C70Cu;
        // 0x33c710: 0xac449d5c  sw          $a0, -0x62A4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294942044), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C714u;
    // 0x33c714: 0x0  nop
    ctx->pc = 0x33c714u;
    // NOP
    ctx->pc = 0x33c718u;
}
