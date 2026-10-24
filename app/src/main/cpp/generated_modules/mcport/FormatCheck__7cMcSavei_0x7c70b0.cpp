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
// Function: FormatCheck__7cMcSavei
// Address: 0x7c70b0 - 0x7c70d8
void FormatCheck__7cMcSavei_0x7c70b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FormatCheck__7cMcSavei_0x7c70b0");
#endif

    ctx->pc = 0x7c70b0u;

    // 0x7c70b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c70b4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C70B4u;
    {
        const bool branch_taken_0x7c70b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C70B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C70B4u;
        // 0x7c70b8: 0xac82007c  sw          $v0, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c70b4) {
            ctx->pc = 0x7C70CCu;
            goto label_7c70cc;
        }
    }
    ctx->pc = 0x7C70BCu;
    // 0x7c70bc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x7c70bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7c70c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7c70c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c70c4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C70C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C70C4u;
        // 0x7c70c8: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C70C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C70CCu;
label_7c70cc:
    // 0x7c70cc: 0x3e00008  jr          $ra
    ctx->pc = 0x7C70CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C70CCu;
        // 0x7c70d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C70CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C70D4u;
    // 0x7c70d4: 0x0  nop
    ctx->pc = 0x7c70d4u;
    // NOP
    ctx->pc = 0x7c70d8u;
}
} // namespace gh_mcport
