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

// Function: Obj38B8_AndNotByte1A
// Address: 0x38bf00 - 0x38bf18
void Obj38B8_AndNotByte1A_0x38bf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj38B8_AndNotByte1A_0x38bf00");
#endif

    ctx->pc = 0x38bf00u;

    // 0x38bf00: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x38bf00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x38bf04: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x38bf04u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x38bf08: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x38bf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x38bf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x38BF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF0Cu;
        // 0x38bf10: 0xa082001a  sb          $v0, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BF14u;
    // 0x38bf14: 0x0  nop
    ctx->pc = 0x38bf14u;
    // NOP
    ctx->pc = 0x38bf18u;
}
