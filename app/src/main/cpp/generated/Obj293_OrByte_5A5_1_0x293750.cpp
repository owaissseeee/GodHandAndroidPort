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

// Function: Obj293_OrByte_5A5_1
// Address: 0x293750 - 0x293760
void Obj293_OrByte_5A5_1_0x293750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj293_OrByte_5A5_1_0x293750");
#endif

    ctx->pc = 0x293750u;

    // 0x293750: 0x908205a5  lbu         $v0, 0x5A5($a0)
    ctx->pc = 0x293750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1445)));
    // 0x293754: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x293754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x293758: 0x3e00008  jr          $ra
    ctx->pc = 0x293758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293758u;
        // 0x29375c: 0xa08205a5  sb          $v0, 0x5A5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1445), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293760u;
}
