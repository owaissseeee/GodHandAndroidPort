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
// Function: set_unexpected__FPFv_v
// Address: 0x7c9ea0 - 0x7c9eb0
void set_unexpected__FPFv_v_0x7c9ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_unexpected__FPFv_v_0x7c9ea0");
#endif

    ctx->pc = 0x7c9ea0u;

    // 0x7c9ea0: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c9ea4: 0x8c62f908  lw          $v0, -0x6F8($v1)
    ctx->pc = 0x7c9ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CF908u));
    // 0x7c9ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9EA8u;
        // 0x7c9eac: 0xac64f908  sw          $a0, -0x6F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294965512), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9EB0u;
}
} // namespace gh_mcport
