#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: __main
// Address: 0x79a8d8 - 0x79a8f8
void ps2___main_0x79a8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79a8d8");
#endif

    ctx->pc = 0x79a8d8u;

    // 0x79a8d8: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a8dc: 0x8c62aad0  lw          $v0, -0x5530($v1)
    ctx->pc = 0x79a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79AAD0u));
    // 0x79a8e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A8E0u;
    {
        const bool branch_taken_0x79a8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8E0u;
        // 0x79a8e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8e0) {
            ctx->pc = 0x79A8F0u;
            goto label_79a8f0;
        }
    }
    ctx->pc = 0x79A8E8u;
    // 0x79a8e8: 0x81e6a0a  j           func_79A828
    ctx->pc = 0x79A8E8u;
    ctx->pc = 0x79A8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8E8u;
    // 0x79a8ec: 0xac62aad0  sw          $v0, -0x5530($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945488), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A828u, 0x79A8E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79A8F0u;
label_79a8f0:
    // 0x79a8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A8F8u;
}
} // namespace gh_r200
