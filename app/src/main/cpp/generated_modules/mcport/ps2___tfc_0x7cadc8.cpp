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
// Function: __tfc
// Address: 0x7cadc8 - 0x7cae00
void ps2___tfc_0x7cadc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfc_0x7cadc8");
#endif

    ctx->pc = 0x7cadc8u;

    // 0x7cadc8: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cadc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cadcc: 0x8c82fcd0  lw          $v0, -0x330($a0)
    ctx->pc = 0x7cadccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFCD0u));
    // 0x7cadd0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CADD0u;
    {
        const bool branch_taken_0x7cadd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CADD0u;
        // 0x7cadd4: 0x2485fcd0  addiu       $a1, $a0, -0x330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cadd0) {
            ctx->pc = 0x7CADF4u;
            goto label_7cadf4;
        }
    }
    ctx->pc = 0x7CADD8u;
    // 0x7cadd8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CADD8u;
    {
        const bool branch_taken_0x7cadd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CADD8u;
        // 0x7caddc: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cadd8) {
            ctx->pc = 0x7CADF4u;
            goto label_7cadf4;
        }
    }
    ctx->pc = 0x7CADE0u;
    // 0x7cade0: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cade0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cade4: 0x246310d0  addiu       $v1, $v1, 0x10D0
    ctx->pc = 0x7cade4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4304));
    // 0x7cade8: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7cade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7cadec: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7cadecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7cadf0: 0xac83fcd0  sw          $v1, -0x330($a0)
    ctx->pc = 0x7cadf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966480), GPR_U32(ctx, 3));
label_7cadf4:
    // 0x7cadf4: 0x3e00008  jr          $ra
    ctx->pc = 0x7CADF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CADF4u;
        // 0x7cadf8: 0x2482fcd0  addiu       $v0, $a0, -0x330 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CADF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CADFCu;
    // 0x7cadfc: 0x0  nop
    ctx->pc = 0x7cadfcu;
    // NOP
    ctx->pc = 0x7cae00u;
}
} // namespace gh_mcport
