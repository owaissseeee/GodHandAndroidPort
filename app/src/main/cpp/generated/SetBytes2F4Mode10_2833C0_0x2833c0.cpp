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

// Function: SetBytes2F4Mode10_2833C0
// Address: 0x2833c0 - 0x2833d8
void SetBytes2F4Mode10_2833C0_0x2833c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBytes2F4Mode10_2833C0_0x2833c0");
#endif

    ctx->pc = 0x2833c0u;

    // 0x2833c0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2833c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2833c4: 0xa08502f7  sb          $a1, 0x2F7($a0)
    ctx->pc = 0x2833c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 5));
    // 0x2833c8: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x2833c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2833cc: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x2833ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2833d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2833D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2833D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833D0u;
        // 0x2833d4: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2833D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2833D8u;
}
