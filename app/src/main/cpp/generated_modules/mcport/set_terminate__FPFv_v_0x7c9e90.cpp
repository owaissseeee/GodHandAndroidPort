#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: set_terminate__FPFv_v
// Address: 0x7c9e90 - 0x7c9ea0
void set_terminate__FPFv_v_0x7c9e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_terminate__FPFv_v_0x7c9e90");
#endif

    ctx->pc = 0x7c9e90u;

    // 0x7c9e90: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c9e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c9e94: 0x8c6201a0  lw          $v0, 0x1A0($v1)
    ctx->pc = 0x7c9e94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D01A0u));
    // 0x7c9e98: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9E98u;
        // 0x7c9e9c: 0xac6401a0  sw          $a0, 0x1A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 416), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9EA0u;
}
} // namespace gh_mcport
