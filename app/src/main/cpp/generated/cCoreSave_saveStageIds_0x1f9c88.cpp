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

// Function: cCoreSave_saveStageIds
// Address: 0x1f9c88 - 0x1f9cb0
void cCoreSave_saveStageIds_0x1f9c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_saveStageIds_0x1f9c88");
#endif

    ctx->pc = 0x1f9c88u;

    // 0x1f9c88: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1f9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1f9c8c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1f9c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9c90: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x1f9c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1f9c94: 0x946205b0  lhu         $v0, 0x5B0($v1)
    ctx->pc = 0x1f9c94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x747A50u));
    // 0x1f9c98: 0xa4a2000c  sh          $v0, 0xC($a1)
    ctx->pc = 0x1f9c98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f9c9c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1f9c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9ca0: 0x946205b6  lhu         $v0, 0x5B6($v1)
    ctx->pc = 0x1f9ca0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x747A56u));
    // 0x1f9ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CA4u;
        // 0x1f9ca8: 0xa4c2000e  sh          $v0, 0xE($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9CACu;
    // 0x1f9cac: 0x0  nop
    ctx->pc = 0x1f9cacu;
    // NOP
    ctx->pc = 0x1f9cb0u;
}
