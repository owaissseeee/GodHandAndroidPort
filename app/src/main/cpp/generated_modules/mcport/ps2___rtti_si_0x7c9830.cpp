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
// Function: __rtti_si
// Address: 0x7c9830 - 0x7c9850
void ps2___rtti_si_0x7c9830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_si_0x7c9830");
#endif

    ctx->pc = 0x7c9830u;

    // 0x7c9830: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C9830u;
    {
        const bool branch_taken_0x7c9830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9830u;
        // 0x7c9834: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9830) {
            ctx->pc = 0x7C9848u;
            goto label_7c9848;
        }
    }
    ctx->pc = 0x7C9838u;
    // 0x7c9838: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x7c9838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x7c983c: 0x24420f58  addiu       $v0, $v0, 0xF58
    ctx->pc = 0x7c983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3928));
    // 0x7c9840: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x7c9840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x7c9844: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7c9844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_7c9848:
    // 0x7c9848: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9850u;
}
} // namespace gh_mcport
