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

// Function: Obj0000_PreDec_D_003FC50C_3B9D80
// Address: 0x3b9d80 - 0x3b9d98
void Obj0000_PreDec_D_003FC50C_3B9D80_0x3b9d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_PreDec_D_003FC50C_3B9D80_0x3b9d80");
#endif

    ctx->pc = 0x3b9d80u;

    // 0x3b9d80: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b9d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b9d84: 0x2463c50c  addiu       $v1, $v1, -0x3AF4
    ctx->pc = 0x3b9d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952204));
    // 0x3b9d88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b9d88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC50Cu));
    // 0x3b9d8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b9d90: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9D90u;
        // 0x3b9d94: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9D98u;
}
