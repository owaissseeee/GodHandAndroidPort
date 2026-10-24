#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: __main
// Address: 0x79c378 - 0x79c398
void ps2___main_0x79c378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79c378");
#endif

    ctx->pc = 0x79c378u;

    // 0x79c378: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79c378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79c37c: 0x8c62c808  lw          $v0, -0x37F8($v1)
    ctx->pc = 0x79c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C808u));
    // 0x79c380: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C380u;
    {
        const bool branch_taken_0x79c380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C380u;
        // 0x79c384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c380) {
            ctx->pc = 0x79C390u;
            goto label_79c390;
        }
    }
    ctx->pc = 0x79C388u;
    // 0x79c388: 0x81e70b2  j           func_79C2C8
    ctx->pc = 0x79C388u;
    ctx->pc = 0x79C38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C388u;
    // 0x79c38c: 0xac62c808  sw          $v0, -0x37F8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952968), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C2C8u, 0x79C388u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79C390u;
label_79c390:
    // 0x79c390: 0x3e00008  jr          $ra
    ctx->pc = 0x79C390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C398u;
}
} // namespace gh_r040
