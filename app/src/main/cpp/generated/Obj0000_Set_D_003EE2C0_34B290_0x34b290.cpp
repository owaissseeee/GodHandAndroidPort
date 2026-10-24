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

// Function: Obj0000_Set_D_003EE2C0_34B290
// Address: 0x34b290 - 0x34b2a0
void Obj0000_Set_D_003EE2C0_34B290_0x34b290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_003EE2C0_34B290_0x34b290");
#endif

    ctx->pc = 0x34b290u;

    // 0x34b290: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34b290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34b294: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34b294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b298: 0x3e00008  jr          $ra
    ctx->pc = 0x34B298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B298u;
        // 0x34b29c: 0xac64e2c0  sw          $a0, -0x1D40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294959808), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B2A0u;
}
