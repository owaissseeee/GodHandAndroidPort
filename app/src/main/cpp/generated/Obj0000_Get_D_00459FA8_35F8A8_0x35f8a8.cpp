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

// Function: Obj0000_Get_D_00459FA8_35F8A8
// Address: 0x35f8a8 - 0x35f8b8
void Obj0000_Get_D_00459FA8_35F8A8_0x35f8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_D_00459FA8_35F8A8_0x35f8a8");
#endif

    ctx->pc = 0x35f8a8u;

    // 0x35f8a8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x35f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x35f8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x35F8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F8ACu;
        // 0x35f8b0: 0x24429fa8  addiu       $v0, $v0, -0x6058 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942632));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F8B4u;
    // 0x35f8b4: 0x0  nop
    ctx->pc = 0x35f8b4u;
    // NOP
    ctx->pc = 0x35f8b8u;
}
