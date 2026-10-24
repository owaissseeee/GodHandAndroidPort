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

// Function: Obj0000_Decrement_D_003E3A80_338978
// Address: 0x338978 - 0x338990
void Obj0000_Decrement_D_003E3A80_338978_0x338978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Decrement_D_003E3A80_338978_0x338978");
#endif

    ctx->pc = 0x338978u;

    // 0x338978: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x338978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x33897c: 0x24633a80  addiu       $v1, $v1, 0x3A80
    ctx->pc = 0x33897cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14976));
    // 0x338980: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x338980u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E3A80u));
    // 0x338984: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x338984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x338988: 0x3e00008  jr          $ra
    ctx->pc = 0x338988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338988u;
        // 0x33898c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338990u;
}
