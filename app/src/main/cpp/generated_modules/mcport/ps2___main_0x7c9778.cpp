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
// Function: __main
// Address: 0x7c9778 - 0x7c9798
void ps2___main_0x7c9778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x7c9778");
#endif

    ctx->pc = 0x7c9778u;

    // 0x7c9778: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c9778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c977c: 0x8c621930  lw          $v0, 0x1930($v1)
    ctx->pc = 0x7c977cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D1930u));
    // 0x7c9780: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C9780u;
    {
        const bool branch_taken_0x7c9780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9780u;
        // 0x7c9784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9780) {
            ctx->pc = 0x7C9790u;
            goto label_7c9790;
        }
    }
    ctx->pc = 0x7C9788u;
    // 0x7c9788: 0x81f25b2  j           func_7C96C8
    ctx->pc = 0x7C9788u;
    ctx->pc = 0x7C978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C9788u;
    // 0x7c978c: 0xac621930  sw          $v0, 0x1930($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 6448), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C96C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C96C8u, 0x7C9788u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7C9790u;
label_7c9790:
    // 0x7c9790: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9798u;
}
} // namespace gh_mcport
