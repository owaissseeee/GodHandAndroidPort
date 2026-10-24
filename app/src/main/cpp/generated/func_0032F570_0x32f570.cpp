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

// Function: func_0032F570
// Address: 0x32f570 - 0x32f580
void func_0032F570_0x32f570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032F570_0x32f570");
#endif

    ctx->pc = 0x32f570u;

    // 0x32f570: 0x3e00008  jr          $ra
    ctx->pc = 0x32F570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F570u;
        // 0x32f574: 0x8c821958  lw          $v0, 0x1958($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6488)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F578u;
    // 0x32f578: 0xac85195c  sw          $a1, 0x195C($a0)
    ctx->pc = 0x32f578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6492), GPR_U32(ctx, 5));
    // 0x32f57c: 0x0  nop
    ctx->pc = 0x32f57cu;
    // NOP
    ctx->pc = 0x32f580u;
}
