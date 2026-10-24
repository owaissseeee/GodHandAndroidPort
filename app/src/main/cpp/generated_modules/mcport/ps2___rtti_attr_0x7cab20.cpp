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
// Function: __rtti_attr
// Address: 0x7cab20 - 0x7cab48
void ps2___rtti_attr_0x7cab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_attr_0x7cab20");
#endif

    ctx->pc = 0x7cab20u;

    // 0x7cab20: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CAB20u;
    {
        const bool branch_taken_0x7cab20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAB20u;
        // 0x7cab24: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cab20) {
            ctx->pc = 0x7CAB3Cu;
            goto label_7cab3c;
        }
    }
    ctx->pc = 0x7CAB28u;
    // 0x7cab28: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x7cab28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x7cab2c: 0x24421178  addiu       $v0, $v0, 0x1178
    ctx->pc = 0x7cab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4472));
    // 0x7cab30: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x7cab30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x7cab34: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7cab34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x7cab38: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x7cab38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_7cab3c:
    // 0x7cab3c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAB44u;
    // 0x7cab44: 0x0  nop
    ctx->pc = 0x7cab44u;
    // NOP
    ctx->pc = 0x7cab48u;
}
} // namespace gh_mcport
