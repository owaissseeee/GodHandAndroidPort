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
// Function: __tfUx
// Address: 0x7caf50 - 0x7caf88
void ps2___tfUx_0x7caf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfUx_0x7caf50");
#endif

    ctx->pc = 0x7caf50u;

    // 0x7caf50: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7caf50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7caf54: 0x8c82fd08  lw          $v0, -0x2F8($a0)
    ctx->pc = 0x7caf54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFD08u));
    // 0x7caf58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CAF58u;
    {
        const bool branch_taken_0x7caf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAF58u;
        // 0x7caf5c: 0x2485fd08  addiu       $a1, $a0, -0x2F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caf58) {
            ctx->pc = 0x7CAF7Cu;
            goto label_7caf7c;
        }
    }
    ctx->pc = 0x7CAF60u;
    // 0x7caf60: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CAF60u;
    {
        const bool branch_taken_0x7caf60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAF60u;
        // 0x7caf64: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caf60) {
            ctx->pc = 0x7CAF7Cu;
            goto label_7caf7c;
        }
    }
    ctx->pc = 0x7CAF68u;
    // 0x7caf68: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7caf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7caf6c: 0x24631108  addiu       $v1, $v1, 0x1108
    ctx->pc = 0x7caf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4360));
    // 0x7caf70: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7caf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7caf74: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7caf74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7caf78: 0xac83fd08  sw          $v1, -0x2F8($a0)
    ctx->pc = 0x7caf78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966536), GPR_U32(ctx, 3));
label_7caf7c:
    // 0x7caf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAF7Cu;
        // 0x7caf80: 0x2482fd08  addiu       $v0, $a0, -0x2F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAF84u;
    // 0x7caf84: 0x0  nop
    ctx->pc = 0x7caf84u;
    // NOP
    ctx->pc = 0x7caf88u;
}
} // namespace gh_mcport
