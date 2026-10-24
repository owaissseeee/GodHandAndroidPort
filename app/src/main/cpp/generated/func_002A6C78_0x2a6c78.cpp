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

// Function: func_002A6C78
// Address: 0x2a6c78 - 0x2a6ca8
void func_002A6C78_0x2a6c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A6C78_0x2a6c78");
#endif

    switch (ctx->pc) {
        case 0x2a6c88u: goto label_2a6c88;
        default: break;
    }

    ctx->pc = 0x2a6c78u;

    // 0x2a6c78: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x2a6c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2a6c7c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2a6c7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a6c80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a6c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a6c84: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2a6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2a6c88:
    // 0x2a6c88: 0xac85fff8  sw          $a1, -0x8($a0)
    ctx->pc = 0x2a6c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 5));
    // 0x2a6c8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a6c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a6c90: 0xac83fffc  sw          $v1, -0x4($a0)
    ctx->pc = 0x2a6c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 3));
    // 0x2a6c94: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a6c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a6c98: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A6C98u;
    {
        const bool branch_taken_0x2a6c98 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2A6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C98u;
        // 0x2a6c9c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c98) {
            ctx->pc = 0x2A6C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6c88;
        }
    }
    ctx->pc = 0x2A6CA0u;
    // 0x2a6ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6CA8u;
}
