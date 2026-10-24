#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: __main
// Address: 0x79b268 - 0x79b288
void ps2___main_0x79b268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79b268");
#endif

    ctx->pc = 0x79b268u;

    // 0x79b268: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79b268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79b26c: 0x8c62b604  lw          $v0, -0x49FC($v1)
    ctx->pc = 0x79b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79B604u));
    // 0x79b270: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B270u;
    {
        const bool branch_taken_0x79b270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B270u;
        // 0x79b274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b270) {
            ctx->pc = 0x79B280u;
            goto label_79b280;
        }
    }
    ctx->pc = 0x79B278u;
    // 0x79b278: 0x81e6c6e  j           func_79B1B8
    ctx->pc = 0x79B278u;
    ctx->pc = 0x79B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B278u;
    // 0x79b27c: 0xac62b604  sw          $v0, -0x49FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948356), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B1B8u, 0x79B278u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79B280u;
label_79b280:
    // 0x79b280: 0x3e00008  jr          $ra
    ctx->pc = 0x79B280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B288u;
}
} // namespace gh_r604
