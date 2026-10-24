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
// Function: __tfd
// Address: 0x7cae70 - 0x7caea8
void ps2___tfd_0x7cae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfd_0x7cae70");
#endif

    ctx->pc = 0x7cae70u;

    // 0x7cae70: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cae70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cae74: 0x8c82fce8  lw          $v0, -0x318($a0)
    ctx->pc = 0x7cae74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFCE8u));
    // 0x7cae78: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CAE78u;
    {
        const bool branch_taken_0x7cae78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAE78u;
        // 0x7cae7c: 0x2485fce8  addiu       $a1, $a0, -0x318 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cae78) {
            ctx->pc = 0x7CAE9Cu;
            goto label_7cae9c;
        }
    }
    ctx->pc = 0x7CAE80u;
    // 0x7cae80: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CAE80u;
    {
        const bool branch_taken_0x7cae80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAE80u;
        // 0x7cae84: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cae80) {
            ctx->pc = 0x7CAE9Cu;
            goto label_7cae9c;
        }
    }
    ctx->pc = 0x7CAE88u;
    // 0x7cae88: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cae88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cae8c: 0x246310e8  addiu       $v1, $v1, 0x10E8
    ctx->pc = 0x7cae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4328));
    // 0x7cae90: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7cae90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7cae94: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7cae94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7cae98: 0xac83fce8  sw          $v1, -0x318($a0)
    ctx->pc = 0x7cae98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966504), GPR_U32(ctx, 3));
label_7cae9c:
    // 0x7cae9c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAE9Cu;
        // 0x7caea0: 0x2482fce8  addiu       $v0, $a0, -0x318 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966504));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAEA4u;
    // 0x7caea4: 0x0  nop
    ctx->pc = 0x7caea4u;
    // NOP
    ctx->pc = 0x7caea8u;
}
} // namespace gh_mcport
