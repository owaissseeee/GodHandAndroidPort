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

// Function: func_00318440
// Address: 0x318440 - 0x318468
void func_00318440_0x318440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00318440_0x318440");
#endif

    ctx->pc = 0x318440u;

    // 0x318440: 0x8c850254  lw          $a1, 0x254($a0)
    ctx->pc = 0x318440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 596)));
    // 0x318444: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x318444u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x318448: 0x8c8304a8  lw          $v1, 0x4A8($a0)
    ctx->pc = 0x318448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1192)));
    // 0x31844c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x31844cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x318450: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x318450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x318454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318458: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x318458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x31845c: 0xac850254  sw          $a1, 0x254($a0)
    ctx->pc = 0x31845cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 5));
    // 0x318460: 0x3e00008  jr          $ra
    ctx->pc = 0x318460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318460u;
        // 0x318464: 0xac8304a8  sw          $v1, 0x4A8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318468u;
}
