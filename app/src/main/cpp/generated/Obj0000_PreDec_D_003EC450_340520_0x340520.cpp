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

// Function: Obj0000_PreDec_D_003EC450_340520
// Address: 0x340520 - 0x340538
void Obj0000_PreDec_D_003EC450_340520_0x340520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_PreDec_D_003EC450_340520_0x340520");
#endif

    ctx->pc = 0x340520u;

    // 0x340520: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x340520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x340524: 0x2463c450  addiu       $v1, $v1, -0x3BB0
    ctx->pc = 0x340524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952016));
    // 0x340528: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x340528u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EC450u));
    // 0x34052c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34052cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x340530: 0x3e00008  jr          $ra
    ctx->pc = 0x340530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340530u;
        // 0x340534: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340538u;
}
