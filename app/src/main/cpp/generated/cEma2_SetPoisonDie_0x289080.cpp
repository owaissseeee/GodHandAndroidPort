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

// Function: cEma2_SetPoisonDie
// Address: 0x289080 - 0x2890a0
void cEma2_SetPoisonDie_0x289080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEma2_SetPoisonDie_0x289080");
#endif

    ctx->pc = 0x289080u;

    // 0x289080: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x289080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x289084: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x289084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289088: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x289088u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x28908c: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x28908cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x289090: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x289090u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x289094: 0x3e00008  jr          $ra
    ctx->pc = 0x289094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289094u;
        // 0x289098: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28909Cu;
    // 0x28909c: 0x0  nop
    ctx->pc = 0x28909cu;
    // NOP
    ctx->pc = 0x2890a0u;
}
