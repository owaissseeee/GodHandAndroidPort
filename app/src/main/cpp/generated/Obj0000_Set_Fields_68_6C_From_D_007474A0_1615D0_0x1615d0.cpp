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

// Function: Obj0000_Set_Fields_68_6C_From_D_007474A0_1615D0
// Address: 0x1615d0 - 0x1615f0
void Obj0000_Set_Fields_68_6C_From_D_007474A0_1615D0_0x1615d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Fields_68_6C_From_D_007474A0_1615D0_0x1615d0");
#endif

    ctx->pc = 0x1615d0u;

    // 0x1615d0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1615d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1615d4: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1615d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1615d8: 0x8c4305d8  lw          $v1, 0x5D8($v0)
    ctx->pc = 0x1615d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x1615dc: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x1615dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
    // 0x1615e0: 0x8c4505e0  lw          $a1, 0x5E0($v0)
    ctx->pc = 0x1615e0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x747A80u));
    // 0x1615e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1615E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1615E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615E4u;
        // 0x1615e8: 0xac85006c  sw          $a1, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1615E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1615ECu;
    // 0x1615ec: 0x0  nop
    ctx->pc = 0x1615ecu;
    // NOP
    ctx->pc = 0x1615f0u;
}
