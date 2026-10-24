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

// Function: func_002B5E90
// Address: 0x2b5e90 - 0x2b5ec0
void func_002B5E90_0x2b5e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B5E90_0x2b5e90");
#endif

    switch (ctx->pc) {
        case 0x2b5ea0u: goto label_2b5ea0;
        default: break;
    }

    ctx->pc = 0x2b5e90u;

    // 0x2b5e90: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2b5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b5e94: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5E94u;
    {
        const bool branch_taken_0x2b5e94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E94u;
        // 0x2b5e98: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e94) {
            ctx->pc = 0x2B5EB8u;
            goto label_2b5eb8;
        }
    }
    ctx->pc = 0x2B5E9Cu;
    // 0x2b5e9c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2b5e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b5ea0:
    // 0x2b5ea0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b5ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b5ea4: 0x0  nop
    ctx->pc = 0x2b5ea4u;
    // NOP
    // 0x2b5ea8: 0x0  nop
    ctx->pc = 0x2b5ea8u;
    // NOP
    // 0x2b5eac: 0x0  nop
    ctx->pc = 0x2b5eacu;
    // NOP
    // 0x2b5eb0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B5EB0u;
    {
        const bool branch_taken_0x2b5eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EB0u;
        // 0x2b5eb4: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5eb0) {
            ctx->pc = 0x2B5EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5ea0;
        }
    }
    ctx->pc = 0x2B5EB8u;
label_2b5eb8:
    // 0x2b5eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5EC0u;
}
