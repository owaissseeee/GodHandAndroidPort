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

// Function: Obj0000_Get_D_00756080_3306C8
// Address: 0x3306c8 - 0x3306d8
void Obj0000_Get_D_00756080_3306C8_0x3306c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_D_00756080_3306C8_0x3306c8");
#endif

    ctx->pc = 0x3306c8u;

    // 0x3306c8: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x3306c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x3306cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3306CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3306D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3306CCu;
        // 0x3306d0: 0x24426080  addiu       $v0, $v0, 0x6080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3306CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3306D4u;
    // 0x3306d4: 0x0  nop
    ctx->pc = 0x3306d4u;
    // NOP
    ctx->pc = 0x3306d8u;
}
