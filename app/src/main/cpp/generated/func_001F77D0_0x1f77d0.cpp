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

// Function: func_001F77D0
// Address: 0x1f77d0 - 0x1f7800
void func_001F77D0_0x1f77d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F77D0_0x1f77d0");
#endif

    switch (ctx->pc) {
        case 0x1f77d8u: goto label_1f77d8;
        default: break;
    }

    ctx->pc = 0x1f77d0u;

    // 0x1f77d0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f77d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f77d4: 0x248300e4  addiu       $v1, $a0, 0xE4
    ctx->pc = 0x1f77d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 228));
label_1f77d8:
    // 0x1f77d8: 0xac630014  sw          $v1, 0x14($v1)
    ctx->pc = 0x1f77d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 3));
    // 0x1f77dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1f77dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f77e0: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1f77e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x1f77e4: 0x0  nop
    ctx->pc = 0x1f77e4u;
    // NOP
    // 0x1f77e8: 0x1ca0fffb  bgtz        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F77E8u;
    {
        const bool branch_taken_0x1f77e8 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x1F77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77E8u;
        // 0x1f77ec: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77e8) {
            ctx->pc = 0x1F77D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f77d8;
        }
    }
    ctx->pc = 0x1F77F0u;
    // 0x1f77f0: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x1f77f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1f77f4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1f77f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1f77f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F77F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77F8u;
        // 0x1f77fc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F77F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7800u;
}
