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
// Function: __9type_infoPCc
// Address: 0x7c9e10 - 0x7c9e28
void ps2___9type_infoPCc_0x7c9e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___9type_infoPCc_0x7c9e10");
#endif

    ctx->pc = 0x7c9e10u;

    // 0x7c9e10: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c9e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c9e14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x7c9e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9e18: 0x24630fb8  addiu       $v1, $v1, 0xFB8
    ctx->pc = 0x7c9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4024));
    // 0x7c9e1c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x7c9e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x7c9e20: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9E20u;
        // 0x7c9e24: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9E28u;
}
} // namespace gh_mcport
