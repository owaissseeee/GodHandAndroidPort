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
// Function: __rtti_func
// Address: 0x7cab48 - 0x7cab68
void ps2___rtti_func_0x7cab48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_func_0x7cab48");
#endif

    ctx->pc = 0x7cab48u;

    // 0x7cab48: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CAB48u;
    {
        const bool branch_taken_0x7cab48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAB48u;
        // 0x7cab4c: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cab48) {
            ctx->pc = 0x7CAB5Cu;
            goto label_7cab5c;
        }
    }
    ctx->pc = 0x7CAB50u;
    // 0x7cab50: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x7cab50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x7cab54: 0x24421158  addiu       $v0, $v0, 0x1158
    ctx->pc = 0x7cab54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4440));
    // 0x7cab58: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7cab58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_7cab5c:
    // 0x7cab5c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAB64u;
    // 0x7cab64: 0x0  nop
    ctx->pc = 0x7cab64u;
    // NOP
    ctx->pc = 0x7cab68u;
}
} // namespace gh_mcport
