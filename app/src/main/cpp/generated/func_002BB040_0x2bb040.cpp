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

// Function: func_002BB040
// Address: 0x2bb040 - 0x2bb068
void func_002BB040_0x2bb040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BB040_0x2bb040");
#endif

    switch (ctx->pc) {
        case 0x2bb048u: goto label_2bb048;
        default: break;
    }

    ctx->pc = 0x2bb040u;

    // 0x2bb040: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bb040u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb044: 0x0  nop
    ctx->pc = 0x2bb044u;
    // NOP
label_2bb048:
    // 0x2bb048: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2bb048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2bb04c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bb04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bb050: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2bb050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2bb054: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x2bb054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2bb058: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BB058u;
    {
        const bool branch_taken_0x2bb058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB058u;
        // 0x2bb05c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb058) {
            ctx->pc = 0x2BB048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb048;
        }
    }
    ctx->pc = 0x2BB060u;
    // 0x2bb060: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB068u;
}
