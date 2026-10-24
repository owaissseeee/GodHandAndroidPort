#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r701_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r701
{
// Function: __main
// Address: 0x79a8f8 - 0x79a918
void ps2___main_0x79a8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79a8f8");
#endif

    ctx->pc = 0x79a8f8u;

    // 0x79a8f8: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a8fc: 0x8c62ac60  lw          $v0, -0x53A0($v1)
    ctx->pc = 0x79a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79AC60u));
    // 0x79a900: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A900u;
    {
        const bool branch_taken_0x79a900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A900u;
        // 0x79a904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a900) {
            ctx->pc = 0x79A910u;
            goto label_79a910;
        }
    }
    ctx->pc = 0x79A908u;
    // 0x79a908: 0x81e6a12  j           func_79A848
    ctx->pc = 0x79A908u;
    ctx->pc = 0x79A90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A908u;
    // 0x79a90c: 0xac62ac60  sw          $v0, -0x53A0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945888), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A848u, 0x79A908u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79A910u;
label_79a910:
    // 0x79a910: 0x3e00008  jr          $ra
    ctx->pc = 0x79A910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A918u;
}
} // namespace gh_r701
