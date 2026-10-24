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
// Function: __tfUl
// Address: 0x7caf18 - 0x7caf50
void ps2___tfUl_0x7caf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfUl_0x7caf18");
#endif

    ctx->pc = 0x7caf18u;

    // 0x7caf18: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7caf18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7caf1c: 0x8c82fd00  lw          $v0, -0x300($a0)
    ctx->pc = 0x7caf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFD00u));
    // 0x7caf20: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CAF20u;
    {
        const bool branch_taken_0x7caf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAF20u;
        // 0x7caf24: 0x2485fd00  addiu       $a1, $a0, -0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caf20) {
            ctx->pc = 0x7CAF44u;
            goto label_7caf44;
        }
    }
    ctx->pc = 0x7CAF28u;
    // 0x7caf28: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CAF28u;
    {
        const bool branch_taken_0x7caf28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAF28u;
        // 0x7caf2c: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caf28) {
            ctx->pc = 0x7CAF44u;
            goto label_7caf44;
        }
    }
    ctx->pc = 0x7CAF30u;
    // 0x7caf30: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7caf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7caf34: 0x24631100  addiu       $v1, $v1, 0x1100
    ctx->pc = 0x7caf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4352));
    // 0x7caf38: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7caf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7caf3c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7caf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7caf40: 0xac83fd00  sw          $v1, -0x300($a0)
    ctx->pc = 0x7caf40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966528), GPR_U32(ctx, 3));
label_7caf44:
    // 0x7caf44: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAF44u;
        // 0x7caf48: 0x2482fd00  addiu       $v0, $a0, -0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAF4Cu;
    // 0x7caf4c: 0x0  nop
    ctx->pc = 0x7caf4cu;
    // NOP
    ctx->pc = 0x7caf50u;
}
} // namespace gh_mcport
