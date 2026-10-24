#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cActionButtonUnit_setOk
// Address: 0x1f6ee0 - 0x1f6f10
void cActionButtonUnit_setOk_0x1f6ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cActionButtonUnit_setOk_0x1f6ee0");
#endif

    ctx->pc = 0x1f6ee0u;

    // 0x1f6ee0: 0x90830035  lbu         $v1, 0x35($a0)
    ctx->pc = 0x1f6ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
    // 0x1f6ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6ee8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6EE8u;
    {
        const bool branch_taken_0x1f6ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EE8u;
        // 0x1f6eec: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ee8) {
            ctx->pc = 0x1F6F04u;
            goto label_1f6f04;
        }
    }
    ctx->pc = 0x1F6EF0u;
    // 0x1f6ef0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1f6ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1f6ef4: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x1f6ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956776)));
    // 0x1f6ef8: 0x8c820f30  lw          $v0, 0xF30($a0)
    ctx->pc = 0x1f6ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3888)));
    // 0x1f6efc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1f6efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1f6f00: 0xac820f30  sw          $v0, 0xF30($a0)
    ctx->pc = 0x1f6f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3888), GPR_U32(ctx, 2));
label_1f6f04:
    // 0x1f6f04: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6F0Cu;
    // 0x1f6f0c: 0x0  nop
    ctx->pc = 0x1f6f0cu;
    // NOP
    ctx->pc = 0x1f6f10u;
}
