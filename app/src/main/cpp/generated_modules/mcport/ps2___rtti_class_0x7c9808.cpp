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
// Function: __rtti_class
// Address: 0x7c9808 - 0x7c9830
void ps2___rtti_class_0x7c9808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_class_0x7c9808");
#endif

    ctx->pc = 0x7c9808u;

    // 0x7c9808: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C9808u;
    {
        const bool branch_taken_0x7c9808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9808u;
        // 0x7c980c: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9808) {
            ctx->pc = 0x7C9824u;
            goto label_7c9824;
        }
    }
    ctx->pc = 0x7C9810u;
    // 0x7c9810: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x7c9810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x7c9814: 0x24420f40  addiu       $v0, $v0, 0xF40
    ctx->pc = 0x7c9814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x7c9818: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x7c9818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x7c981c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7c981cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x7c9820: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x7c9820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_7c9824:
    // 0x7c9824: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C982Cu;
    // 0x7c982c: 0x0  nop
    ctx->pc = 0x7c982cu;
    // NOP
    ctx->pc = 0x7c9830u;
}
} // namespace gh_mcport
