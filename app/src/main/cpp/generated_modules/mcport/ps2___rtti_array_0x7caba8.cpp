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
// Function: __rtti_array
// Address: 0x7caba8 - 0x7cabc8
void ps2___rtti_array_0x7caba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_array_0x7caba8");
#endif

    ctx->pc = 0x7caba8u;

    // 0x7caba8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CABA8u;
    {
        const bool branch_taken_0x7caba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CABA8u;
        // 0x7cabac: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caba8) {
            ctx->pc = 0x7CABBCu;
            goto label_7cabbc;
        }
    }
    ctx->pc = 0x7CABB0u;
    // 0x7cabb0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x7cabb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x7cabb4: 0x24421128  addiu       $v0, $v0, 0x1128
    ctx->pc = 0x7cabb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4392));
    // 0x7cabb8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7cabb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_7cabbc:
    // 0x7cabbc: 0x3e00008  jr          $ra
    ctx->pc = 0x7CABBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CABBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CABC4u;
    // 0x7cabc4: 0x0  nop
    ctx->pc = 0x7cabc4u;
    // NOP
    ctx->pc = 0x7cabc8u;
}
} // namespace gh_mcport
