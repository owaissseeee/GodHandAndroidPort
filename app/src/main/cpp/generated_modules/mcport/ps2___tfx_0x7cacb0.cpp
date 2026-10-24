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
// Function: __tfx
// Address: 0x7cacb0 - 0x7cace8
void ps2___tfx_0x7cacb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfx_0x7cacb0");
#endif

    ctx->pc = 0x7cacb0u;

    // 0x7cacb0: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cacb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cacb4: 0x8c82fca8  lw          $v0, -0x358($a0)
    ctx->pc = 0x7cacb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFCA8u));
    // 0x7cacb8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CACB8u;
    {
        const bool branch_taken_0x7cacb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CACB8u;
        // 0x7cacbc: 0x2485fca8  addiu       $a1, $a0, -0x358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cacb8) {
            ctx->pc = 0x7CACDCu;
            goto label_7cacdc;
        }
    }
    ctx->pc = 0x7CACC0u;
    // 0x7cacc0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CACC0u;
    {
        const bool branch_taken_0x7cacc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CACC0u;
        // 0x7cacc4: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cacc0) {
            ctx->pc = 0x7CACDCu;
            goto label_7cacdc;
        }
    }
    ctx->pc = 0x7CACC8u;
    // 0x7cacc8: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cacc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7caccc: 0x246310a8  addiu       $v1, $v1, 0x10A8
    ctx->pc = 0x7cacccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4264));
    // 0x7cacd0: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7cacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7cacd4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7cacd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7cacd8: 0xac83fca8  sw          $v1, -0x358($a0)
    ctx->pc = 0x7cacd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966440), GPR_U32(ctx, 3));
label_7cacdc:
    // 0x7cacdc: 0x3e00008  jr          $ra
    ctx->pc = 0x7CACDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CACDCu;
        // 0x7cace0: 0x2482fca8  addiu       $v0, $a0, -0x358 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CACDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CACE4u;
    // 0x7cace4: 0x0  nop
    ctx->pc = 0x7cace4u;
    // NOP
    ctx->pc = 0x7cace8u;
}
} // namespace gh_mcport
