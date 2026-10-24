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
// Function: __tfi
// Address: 0x7cad20 - 0x7cad58
void ps2___tfi_0x7cad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfi_0x7cad20");
#endif

    ctx->pc = 0x7cad20u;

    // 0x7cad20: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cad20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cad24: 0x8c82fcb8  lw          $v0, -0x348($a0)
    ctx->pc = 0x7cad24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFCB8u));
    // 0x7cad28: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CAD28u;
    {
        const bool branch_taken_0x7cad28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAD28u;
        // 0x7cad2c: 0x2485fcb8  addiu       $a1, $a0, -0x348 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cad28) {
            ctx->pc = 0x7CAD4Cu;
            goto label_7cad4c;
        }
    }
    ctx->pc = 0x7CAD30u;
    // 0x7cad30: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CAD30u;
    {
        const bool branch_taken_0x7cad30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAD30u;
        // 0x7cad34: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cad30) {
            ctx->pc = 0x7CAD4Cu;
            goto label_7cad4c;
        }
    }
    ctx->pc = 0x7CAD38u;
    // 0x7cad38: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cad38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cad3c: 0x246310b8  addiu       $v1, $v1, 0x10B8
    ctx->pc = 0x7cad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4280));
    // 0x7cad40: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7cad40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7cad44: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7cad44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7cad48: 0xac83fcb8  sw          $v1, -0x348($a0)
    ctx->pc = 0x7cad48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966456), GPR_U32(ctx, 3));
label_7cad4c:
    // 0x7cad4c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAD4Cu;
        // 0x7cad50: 0x2482fcb8  addiu       $v0, $a0, -0x348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966456));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAD54u;
    // 0x7cad54: 0x0  nop
    ctx->pc = 0x7cad54u;
    // NOP
    ctx->pc = 0x7cad58u;
}
} // namespace gh_mcport
