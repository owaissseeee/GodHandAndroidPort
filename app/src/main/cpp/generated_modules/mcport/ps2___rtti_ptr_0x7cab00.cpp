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
// Function: __rtti_ptr
// Address: 0x7cab00 - 0x7cab20
void ps2___rtti_ptr_0x7cab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_ptr_0x7cab00");
#endif

    ctx->pc = 0x7cab00u;

    // 0x7cab00: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CAB00u;
    {
        const bool branch_taken_0x7cab00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAB00u;
        // 0x7cab04: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cab00) {
            ctx->pc = 0x7CAB18u;
            goto label_7cab18;
        }
    }
    ctx->pc = 0x7CAB08u;
    // 0x7cab08: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x7cab08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x7cab0c: 0x24421188  addiu       $v0, $v0, 0x1188
    ctx->pc = 0x7cab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4488));
    // 0x7cab10: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x7cab10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x7cab14: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7cab14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_7cab18:
    // 0x7cab18: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAB20u;
}
} // namespace gh_mcport
