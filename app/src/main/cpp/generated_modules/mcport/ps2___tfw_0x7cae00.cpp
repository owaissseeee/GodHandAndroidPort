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
// Function: __tfw
// Address: 0x7cae00 - 0x7cae38
void ps2___tfw_0x7cae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfw_0x7cae00");
#endif

    ctx->pc = 0x7cae00u;

    // 0x7cae00: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cae00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cae04: 0x8c82fcd8  lw          $v0, -0x328($a0)
    ctx->pc = 0x7cae04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFCD8u));
    // 0x7cae08: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CAE08u;
    {
        const bool branch_taken_0x7cae08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAE08u;
        // 0x7cae0c: 0x2485fcd8  addiu       $a1, $a0, -0x328 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cae08) {
            ctx->pc = 0x7CAE2Cu;
            goto label_7cae2c;
        }
    }
    ctx->pc = 0x7CAE10u;
    // 0x7cae10: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CAE10u;
    {
        const bool branch_taken_0x7cae10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAE10u;
        // 0x7cae14: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cae10) {
            ctx->pc = 0x7CAE2Cu;
            goto label_7cae2c;
        }
    }
    ctx->pc = 0x7CAE18u;
    // 0x7cae18: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cae18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cae1c: 0x246310d8  addiu       $v1, $v1, 0x10D8
    ctx->pc = 0x7cae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4312));
    // 0x7cae20: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7cae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7cae24: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7cae24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7cae28: 0xac83fcd8  sw          $v1, -0x328($a0)
    ctx->pc = 0x7cae28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966488), GPR_U32(ctx, 3));
label_7cae2c:
    // 0x7cae2c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAE2Cu;
        // 0x7cae30: 0x2482fcd8  addiu       $v0, $a0, -0x328 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966488));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAE34u;
    // 0x7cae34: 0x0  nop
    ctx->pc = 0x7cae34u;
    // NOP
    ctx->pc = 0x7cae38u;
}
} // namespace gh_mcport
