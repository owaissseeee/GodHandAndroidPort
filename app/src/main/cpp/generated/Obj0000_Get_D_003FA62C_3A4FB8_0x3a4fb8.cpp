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

// Function: Obj0000_Get_D_003FA62C_3A4FB8
// Address: 0x3a4fb8 - 0x3a4fc8
void Obj0000_Get_D_003FA62C_3A4FB8_0x3a4fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_D_003FA62C_3A4FB8_0x3a4fb8");
#endif

    ctx->pc = 0x3a4fb8u;

    // 0x3a4fb8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3a4fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3a4fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4FBCu;
        // 0x3a4fc0: 0x8c62a62c  lw          $v0, -0x59D4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944300)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4FC4u;
    // 0x3a4fc4: 0x0  nop
    ctx->pc = 0x3a4fc4u;
    // NOP
    ctx->pc = 0x3a4fc8u;
}
