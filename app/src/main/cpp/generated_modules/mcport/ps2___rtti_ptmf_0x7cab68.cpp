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
// Function: __rtti_ptmf
// Address: 0x7cab68 - 0x7cab88
void ps2___rtti_ptmf_0x7cab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_ptmf_0x7cab68");
#endif

    ctx->pc = 0x7cab68u;

    // 0x7cab68: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CAB68u;
    {
        const bool branch_taken_0x7cab68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAB68u;
        // 0x7cab6c: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cab68) {
            ctx->pc = 0x7CAB7Cu;
            goto label_7cab7c;
        }
    }
    ctx->pc = 0x7CAB70u;
    // 0x7cab70: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x7cab70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x7cab74: 0x24421148  addiu       $v0, $v0, 0x1148
    ctx->pc = 0x7cab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4424));
    // 0x7cab78: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7cab78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_7cab7c:
    // 0x7cab7c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAB84u;
    // 0x7cab84: 0x0  nop
    ctx->pc = 0x7cab84u;
    // NOP
    ctx->pc = 0x7cab88u;
}
} // namespace gh_mcport
