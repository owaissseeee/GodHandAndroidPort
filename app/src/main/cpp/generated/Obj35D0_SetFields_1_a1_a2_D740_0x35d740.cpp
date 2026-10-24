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

// Function: Obj35D0_SetFields_1_a1_a2_D740
// Address: 0x35d740 - 0x35d758
void Obj35D0_SetFields_1_a1_a2_D740_0x35d740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35D0_SetFields_1_a1_a2_D740_0x35d740");
#endif

    ctx->pc = 0x35d740u;

    // 0x35d740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d744: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x35d744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x35d748: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x35d748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x35d74c: 0x3e00008  jr          $ra
    ctx->pc = 0x35D74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D74Cu;
        // 0x35d750: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D754u;
    // 0x35d754: 0x0  nop
    ctx->pc = 0x35d754u;
    // NOP
    ctx->pc = 0x35d758u;
}
