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

// Function: func_0036CC80
// Address: 0x36cc80 - 0x36cca8
void func_0036CC80_0x36cc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CC80_0x36cc80");
#endif

    ctx->pc = 0x36cc80u;

    // 0x36cc80: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x36cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x36cc84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cc88: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x36cc88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x36cc8c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x36cc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x36cc90: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x36cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x36cc94: 0x3e00008  jr          $ra
    ctx->pc = 0x36CC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC94u;
        // 0x36cc98: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CC9Cu;
    // 0x36cc9c: 0x0  nop
    ctx->pc = 0x36cc9cu;
    // NOP
    // 0x36cca0: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x36cca0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x36cca4: 0x0  nop
    ctx->pc = 0x36cca4u;
    // NOP
    ctx->pc = 0x36cca8u;
}
