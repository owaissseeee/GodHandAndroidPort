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

// Function: func_001E8E88
// Address: 0x1e8e88 - 0x1e8eb8
void func_001E8E88_0x1e8e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E8E88_0x1e8e88");
#endif

    switch (ctx->pc) {
        case 0x1e8e98u: goto label_1e8e98;
        default: break;
    }

    ctx->pc = 0x1e8e88u;

    // 0x1e8e88: 0x248400a4  addiu       $a0, $a0, 0xA4
    ctx->pc = 0x1e8e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1e8e8c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1e8e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e8e90: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e8e94: 0x0  nop
    ctx->pc = 0x1e8e94u;
    // NOP
label_1e8e98:
    // 0x1e8e98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1e8e9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e8ea0: 0x0  nop
    ctx->pc = 0x1e8ea0u;
    // NOP
    // 0x1e8ea4: 0x0  nop
    ctx->pc = 0x1e8ea4u;
    // NOP
    // 0x1e8ea8: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E8EA8u;
    {
        const bool branch_taken_0x1e8ea8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1E8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EA8u;
        // 0x1e8eac: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ea8) {
            ctx->pc = 0x1E8E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8e98;
        }
    }
    ctx->pc = 0x1E8EB0u;
    // 0x1e8eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8EB8u;
}
