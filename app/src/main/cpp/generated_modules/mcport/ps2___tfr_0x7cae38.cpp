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
// Function: __tfr
// Address: 0x7cae38 - 0x7cae70
void ps2___tfr_0x7cae38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfr_0x7cae38");
#endif

    ctx->pc = 0x7cae38u;

    // 0x7cae38: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cae38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cae3c: 0x8c82fce0  lw          $v0, -0x320($a0)
    ctx->pc = 0x7cae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFCE0u));
    // 0x7cae40: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CAE40u;
    {
        const bool branch_taken_0x7cae40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAE40u;
        // 0x7cae44: 0x2485fce0  addiu       $a1, $a0, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cae40) {
            ctx->pc = 0x7CAE64u;
            goto label_7cae64;
        }
    }
    ctx->pc = 0x7CAE48u;
    // 0x7cae48: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CAE48u;
    {
        const bool branch_taken_0x7cae48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAE48u;
        // 0x7cae4c: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cae48) {
            ctx->pc = 0x7CAE64u;
            goto label_7cae64;
        }
    }
    ctx->pc = 0x7CAE50u;
    // 0x7cae50: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cae50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cae54: 0x246310e0  addiu       $v1, $v1, 0x10E0
    ctx->pc = 0x7cae54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4320));
    // 0x7cae58: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7cae58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7cae5c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7cae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7cae60: 0xac83fce0  sw          $v1, -0x320($a0)
    ctx->pc = 0x7cae60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966496), GPR_U32(ctx, 3));
label_7cae64:
    // 0x7cae64: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAE64u;
        // 0x7cae68: 0x2482fce0  addiu       $v0, $a0, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAE6Cu;
    // 0x7cae6c: 0x0  nop
    ctx->pc = 0x7cae6cu;
    // NOP
    ctx->pc = 0x7cae70u;
}
} // namespace gh_mcport
