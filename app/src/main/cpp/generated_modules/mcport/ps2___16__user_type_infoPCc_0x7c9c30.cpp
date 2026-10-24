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
// Function: __16__user_type_infoPCc
// Address: 0x7c9c30 - 0x7c9c48
void ps2___16__user_type_infoPCc_0x7c9c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___16__user_type_infoPCc_0x7c9c30");
#endif

    ctx->pc = 0x7c9c30u;

    // 0x7c9c30: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c9c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c9c34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x7c9c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9c38: 0x24630f70  addiu       $v1, $v1, 0xF70
    ctx->pc = 0x7c9c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3952));
    // 0x7c9c3c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x7c9c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x7c9c40: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9C40u;
        // 0x7c9c44: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9C48u;
}
} // namespace gh_mcport
