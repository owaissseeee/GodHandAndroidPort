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
// Function: __tfv
// Address: 0x7cac78 - 0x7cacb0
void ps2___tfv_0x7cac78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfv_0x7cac78");
#endif

    ctx->pc = 0x7cac78u;

    // 0x7cac78: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cac78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cac7c: 0x8c82fca0  lw          $v0, -0x360($a0)
    ctx->pc = 0x7cac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFCA0u));
    // 0x7cac80: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CAC80u;
    {
        const bool branch_taken_0x7cac80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAC80u;
        // 0x7cac84: 0x2485fca0  addiu       $a1, $a0, -0x360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cac80) {
            ctx->pc = 0x7CACA4u;
            goto label_7caca4;
        }
    }
    ctx->pc = 0x7CAC88u;
    // 0x7cac88: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CAC88u;
    {
        const bool branch_taken_0x7cac88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAC88u;
        // 0x7cac8c: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cac88) {
            ctx->pc = 0x7CACA4u;
            goto label_7caca4;
        }
    }
    ctx->pc = 0x7CAC90u;
    // 0x7cac90: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cac90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cac94: 0x246310a0  addiu       $v1, $v1, 0x10A0
    ctx->pc = 0x7cac94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4256));
    // 0x7cac98: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7cac98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7cac9c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7cac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7caca0: 0xac83fca0  sw          $v1, -0x360($a0)
    ctx->pc = 0x7caca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966432), GPR_U32(ctx, 3));
label_7caca4:
    // 0x7caca4: 0x3e00008  jr          $ra
    ctx->pc = 0x7CACA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CACA4u;
        // 0x7caca8: 0x2482fca0  addiu       $v0, $a0, -0x360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CACA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CACACu;
    // 0x7cacac: 0x0  nop
    ctx->pc = 0x7cacacu;
    // NOP
    ctx->pc = 0x7cacb0u;
}
} // namespace gh_mcport
