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
// Function: __tfl
// Address: 0x7cace8 - 0x7cad20
void ps2___tfl_0x7cace8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfl_0x7cace8");
#endif

    ctx->pc = 0x7cace8u;

    // 0x7cace8: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cace8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cacec: 0x8c82fcb0  lw          $v0, -0x350($a0)
    ctx->pc = 0x7cacecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFCB0u));
    // 0x7cacf0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CACF0u;
    {
        const bool branch_taken_0x7cacf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CACF0u;
        // 0x7cacf4: 0x2485fcb0  addiu       $a1, $a0, -0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cacf0) {
            ctx->pc = 0x7CAD14u;
            goto label_7cad14;
        }
    }
    ctx->pc = 0x7CACF8u;
    // 0x7cacf8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CACF8u;
    {
        const bool branch_taken_0x7cacf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CACF8u;
        // 0x7cacfc: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cacf8) {
            ctx->pc = 0x7CAD14u;
            goto label_7cad14;
        }
    }
    ctx->pc = 0x7CAD00u;
    // 0x7cad00: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cad00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cad04: 0x246310b0  addiu       $v1, $v1, 0x10B0
    ctx->pc = 0x7cad04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x7cad08: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7cad08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7cad0c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7cad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7cad10: 0xac83fcb0  sw          $v1, -0x350($a0)
    ctx->pc = 0x7cad10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966448), GPR_U32(ctx, 3));
label_7cad14:
    // 0x7cad14: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CAD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAD14u;
        // 0x7cad18: 0x2482fcb0  addiu       $v0, $a0, -0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAD1Cu;
    // 0x7cad1c: 0x0  nop
    ctx->pc = 0x7cad1cu;
    // NOP
    ctx->pc = 0x7cad20u;
}
} // namespace gh_mcport
