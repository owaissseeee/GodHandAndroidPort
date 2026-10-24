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

// Function: Obj0000_Set_D_003EEA70_360C80
// Address: 0x360c80 - 0x360ca0
void Obj0000_Set_D_003EEA70_360C80_0x360c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_003EEA70_360C80_0x360c80");
#endif

    ctx->pc = 0x360c80u;

    // 0x360c80: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x360c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x360c84: 0x3e00008  jr          $ra
    ctx->pc = 0x360C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360C84u;
        // 0x360c88: 0xfc44ea70  sd          $a0, -0x1590($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294961776), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360C8Cu;
    // 0x360c8c: 0x0  nop
    ctx->pc = 0x360c8cu;
    // NOP
    // 0x360c90: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x360c90u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x360c94: 0x0  nop
    ctx->pc = 0x360c94u;
    // NOP
    // 0x360c98: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x360c98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x360c9c: 0x0  nop
    ctx->pc = 0x360c9cu;
    // NOP
    ctx->pc = 0x360ca0u;
}
