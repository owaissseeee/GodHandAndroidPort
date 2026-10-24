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
// Function: __tfUi
// Address: 0x7caee0 - 0x7caf18
void ps2___tfUi_0x7caee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfUi_0x7caee0");
#endif

    ctx->pc = 0x7caee0u;

    // 0x7caee0: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7caee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7caee4: 0x8c82fcf8  lw          $v0, -0x308($a0)
    ctx->pc = 0x7caee4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFCF8u));
    // 0x7caee8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CAEE8u;
    {
        const bool branch_taken_0x7caee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAEE8u;
        // 0x7caeec: 0x2485fcf8  addiu       $a1, $a0, -0x308 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caee8) {
            ctx->pc = 0x7CAF0Cu;
            goto label_7caf0c;
        }
    }
    ctx->pc = 0x7CAEF0u;
    // 0x7caef0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CAEF0u;
    {
        const bool branch_taken_0x7caef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAEF0u;
        // 0x7caef4: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caef0) {
            ctx->pc = 0x7CAF0Cu;
            goto label_7caf0c;
        }
    }
    ctx->pc = 0x7CAEF8u;
    // 0x7caef8: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7caef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7caefc: 0x246310f8  addiu       $v1, $v1, 0x10F8
    ctx->pc = 0x7caefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4344));
    // 0x7caf00: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7caf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7caf04: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7caf04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7caf08: 0xac83fcf8  sw          $v1, -0x308($a0)
    ctx->pc = 0x7caf08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966520), GPR_U32(ctx, 3));
label_7caf0c:
    // 0x7caf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CAF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAF0Cu;
        // 0x7caf10: 0x2482fcf8  addiu       $v0, $a0, -0x308 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966520));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAF14u;
    // 0x7caf14: 0x0  nop
    ctx->pc = 0x7caf14u;
    // NOP
    ctx->pc = 0x7caf18u;
}
} // namespace gh_mcport
