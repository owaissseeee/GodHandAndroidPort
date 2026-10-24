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
// Function: __tfUs
// Address: 0x7caf88 - 0x7cafc0
void ps2___tfUs_0x7caf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfUs_0x7caf88");
#endif

    ctx->pc = 0x7caf88u;

    // 0x7caf88: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7caf88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7caf8c: 0x8c82fd10  lw          $v0, -0x2F0($a0)
    ctx->pc = 0x7caf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFD10u));
    // 0x7caf90: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CAF90u;
    {
        const bool branch_taken_0x7caf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAF90u;
        // 0x7caf94: 0x2485fd10  addiu       $a1, $a0, -0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caf90) {
            ctx->pc = 0x7CAFB4u;
            goto label_7cafb4;
        }
    }
    ctx->pc = 0x7CAF98u;
    // 0x7caf98: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CAF98u;
    {
        const bool branch_taken_0x7caf98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAF98u;
        // 0x7caf9c: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caf98) {
            ctx->pc = 0x7CAFB4u;
            goto label_7cafb4;
        }
    }
    ctx->pc = 0x7CAFA0u;
    // 0x7cafa0: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cafa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cafa4: 0x24631110  addiu       $v1, $v1, 0x1110
    ctx->pc = 0x7cafa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4368));
    // 0x7cafa8: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7cafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7cafac: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7cafacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7cafb0: 0xac83fd10  sw          $v1, -0x2F0($a0)
    ctx->pc = 0x7cafb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966544), GPR_U32(ctx, 3));
label_7cafb4:
    // 0x7cafb4: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CAFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAFB4u;
        // 0x7cafb8: 0x2482fd10  addiu       $v0, $a0, -0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAFBCu;
    // 0x7cafbc: 0x0  nop
    ctx->pc = 0x7cafbcu;
    // NOP
    ctx->pc = 0x7cafc0u;
}
} // namespace gh_mcport
