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

// Function: Obj38B8_WriteByteAndAdvance14
// Address: 0x38bdd8 - 0x38bdf0
void Obj38B8_WriteByteAndAdvance14_0x38bdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj38B8_WriteByteAndAdvance14_0x38bdd8");
#endif

    ctx->pc = 0x38bdd8u;

    // 0x38bdd8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x38bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38bddc: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x38bddcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x38bde0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38bde4: 0x3e00008  jr          $ra
    ctx->pc = 0x38BDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BDE4u;
        // 0x38bde8: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BDECu;
    // 0x38bdec: 0x0  nop
    ctx->pc = 0x38bdecu;
    // NOP
    ctx->pc = 0x38bdf0u;
}
