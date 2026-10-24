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

// Function: SetBytes2F4Mode11_283360
// Address: 0x283360 - 0x283378
void SetBytes2F4Mode11_283360_0x283360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBytes2F4Mode11_283360_0x283360");
#endif

    ctx->pc = 0x283360u;

    // 0x283360: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x283360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x283364: 0xa08502f7  sb          $a1, 0x2F7($a0)
    ctx->pc = 0x283364u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 5));
    // 0x283368: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x283368u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x28336c: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x28336cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x283370: 0x3e00008  jr          $ra
    ctx->pc = 0x283370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283370u;
        // 0x283374: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283378u;
}
