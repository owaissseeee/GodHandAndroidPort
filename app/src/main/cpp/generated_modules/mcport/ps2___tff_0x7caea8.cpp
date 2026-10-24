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
// Function: __tff
// Address: 0x7caea8 - 0x7caee0
void ps2___tff_0x7caea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tff_0x7caea8");
#endif

    ctx->pc = 0x7caea8u;

    // 0x7caea8: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7caea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7caeac: 0x8c82fcf0  lw          $v0, -0x310($a0)
    ctx->pc = 0x7caeacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFCF0u));
    // 0x7caeb0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CAEB0u;
    {
        const bool branch_taken_0x7caeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAEB0u;
        // 0x7caeb4: 0x2485fcf0  addiu       $a1, $a0, -0x310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caeb0) {
            ctx->pc = 0x7CAED4u;
            goto label_7caed4;
        }
    }
    ctx->pc = 0x7CAEB8u;
    // 0x7caeb8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CAEB8u;
    {
        const bool branch_taken_0x7caeb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAEB8u;
        // 0x7caebc: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caeb8) {
            ctx->pc = 0x7CAED4u;
            goto label_7caed4;
        }
    }
    ctx->pc = 0x7CAEC0u;
    // 0x7caec0: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7caec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7caec4: 0x246310f0  addiu       $v1, $v1, 0x10F0
    ctx->pc = 0x7caec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4336));
    // 0x7caec8: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7caec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7caecc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7caeccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7caed0: 0xac83fcf0  sw          $v1, -0x310($a0)
    ctx->pc = 0x7caed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966512), GPR_U32(ctx, 3));
label_7caed4:
    // 0x7caed4: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAED4u;
        // 0x7caed8: 0x2482fcf0  addiu       $v0, $a0, -0x310 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAEDCu;
    // 0x7caedc: 0x0  nop
    ctx->pc = 0x7caedcu;
    // NOP
    ctx->pc = 0x7caee0u;
}
} // namespace gh_mcport
