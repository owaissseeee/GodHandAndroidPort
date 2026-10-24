#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: __main
// Address: 0x79bb18 - 0x79bb38
void ps2___main_0x79bb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79bb18");
#endif

    ctx->pc = 0x79bb18u;

    // 0x79bb18: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79bb1c: 0x8c62bd84  lw          $v0, -0x427C($v1)
    ctx->pc = 0x79bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79BD84u));
    // 0x79bb20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BB20u;
    {
        const bool branch_taken_0x79bb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB20u;
        // 0x79bb24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb20) {
            ctx->pc = 0x79BB30u;
            goto label_79bb30;
        }
    }
    ctx->pc = 0x79BB28u;
    // 0x79bb28: 0x81e6e9a  j           func_79BA68
    ctx->pc = 0x79BB28u;
    ctx->pc = 0x79BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB28u;
    // 0x79bb2c: 0xac62bd84  sw          $v0, -0x427C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950276), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BA68u, 0x79BB28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79BB30u;
label_79bb30:
    // 0x79bb30: 0x3e00008  jr          $ra
    ctx->pc = 0x79BB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BB38u;
}
} // namespace gh_r201
